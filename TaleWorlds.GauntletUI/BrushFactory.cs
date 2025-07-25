// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BrushFactory
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Xml;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class BrushFactory
  {
    private Dictionary<string, Brush> _brushes;
    private Dictionary<string, string> _brushCategories;
    private ResourceDepot _resourceDepot;
    private readonly string _resourceFolder;
    private Dictionary<string, DateTime> _lastWriteTimes;
    private SpriteData _spriteData;
    private FontFactory _fontFactory;

    public IEnumerable<Brush> Brushes => (IEnumerable<Brush>) this._brushes.Values;

    public Brush DefaultBrush
    {
      get
      {
        return this._brushes.ContainsKey(nameof (DefaultBrush)) ? this._brushes[nameof (DefaultBrush)] : (Brush) null;
      }
    }

    public BrushFactory(
      ResourceDepot resourceDepot,
      string resourceFolder,
      SpriteData spriteData,
      FontFactory fontFactory)
    {
      this._spriteData = spriteData;
      this._fontFactory = fontFactory;
      this._brushes = new Dictionary<string, Brush>();
      this._brushCategories = new Dictionary<string, string>();
      this._resourceDepot = resourceDepot;
      this._resourceDepot.OnResourceChange += new ResourceChangeEvent(this.OnResourceChange);
      this._resourceFolder = resourceFolder;
      this._lastWriteTimes = new Dictionary<string, DateTime>();
    }

    private void OnResourceChange() => this.CheckForUpdates();

    public void Initialize() => this.LoadBrushes();

    private BrushAnimation LoadBrushAnimationFrom(XmlNode animationNode)
    {
      BrushAnimation brushAnimation = new BrushAnimation();
      Dictionary<string, string> dictionary = new Dictionary<string, string>();
      foreach (XmlAttribute attribute in (XmlNamedNodeMap) animationNode.Attributes)
      {
        string name = attribute.Name;
        string str = attribute.Value;
        dictionary.Add(name, str);
      }
      foreach (KeyValuePair<string, string> keyValuePair in dictionary)
      {
        string key = keyValuePair.Key;
        string str = keyValuePair.Value;
        switch (key)
        {
          case "Name":
            brushAnimation.Name = str;
            continue;
          case "Duration":
            brushAnimation.Duration = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "Loop":
            brushAnimation.Loop = str == "true";
            continue;
          default:
            continue;
        }
      }
      foreach (XmlNode childNode1 in animationNode.ChildNodes)
      {
        XmlAttribute attribute1 = childNode1.Attributes["LayerName"];
        string str1 = (string) null;
        if (attribute1 != null)
          str1 = attribute1.Value;
        string str2 = childNode1.Attributes["PropertyName"].Value;
        BrushAnimationProperty property = new BrushAnimationProperty();
        ref BrushAnimationProperty.BrushAnimationPropertyType local = ref property.PropertyType;
        if (Enum.TryParse<BrushAnimationProperty.BrushAnimationPropertyType>(str2, out local))
        {
          property.LayerName = str1;
          brushAnimation.AddAnimationProperty(property);
          foreach (XmlNode childNode2 in childNode1.ChildNodes)
          {
            float single = Convert.ToSingle(childNode2.Attributes["Time"].Value, (IFormatProvider) CultureInfo.InvariantCulture);
            XmlAttribute attribute2 = childNode2.Attributes["Value"];
            BrushAnimationKeyFrame keyFrame = new BrushAnimationKeyFrame();
            switch (property.PropertyType)
            {
              case BrushAnimationProperty.BrushAnimationPropertyType.ColorFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.AlphaFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.HueFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.SaturationFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.ValueFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.OverlayXOffset:
              case BrushAnimationProperty.BrushAnimationPropertyType.OverlayYOffset:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineAmount:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowRadius:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextBlur:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowOffset:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowAngle:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextColorFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextAlphaFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextHueFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextSaturationFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextValueFactor:
              case BrushAnimationProperty.BrushAnimationPropertyType.XOffset:
              case BrushAnimationProperty.BrushAnimationPropertyType.YOffset:
              case BrushAnimationProperty.BrushAnimationPropertyType.OverridenWidth:
              case BrushAnimationProperty.BrushAnimationPropertyType.OverridenHeight:
              case BrushAnimationProperty.BrushAnimationPropertyType.ExtendLeft:
              case BrushAnimationProperty.BrushAnimationPropertyType.ExtendRight:
              case BrushAnimationProperty.BrushAnimationPropertyType.ExtendTop:
              case BrushAnimationProperty.BrushAnimationPropertyType.ExtendBottom:
              case BrushAnimationProperty.BrushAnimationPropertyType.FontSize:
                keyFrame.InitializeAsFloat(single, Convert.ToSingle(attribute2.Value, (IFormatProvider) CultureInfo.InvariantCulture));
                break;
              case BrushAnimationProperty.BrushAnimationPropertyType.Color:
              case BrushAnimationProperty.BrushAnimationPropertyType.FontColor:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowColor:
              case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineColor:
                keyFrame.InitializeAsColor(single, Color.ConvertStringToColor(attribute2.Value));
                break;
              case BrushAnimationProperty.BrushAnimationPropertyType.Sprite:
              case BrushAnimationProperty.BrushAnimationPropertyType.OverlaySprite:
                keyFrame.InitializeAsSprite(single, this._spriteData.GetSprite(attribute2.Value));
                break;
            }
            property.AddKeyFrame(keyFrame);
          }
        }
      }
      return brushAnimation;
    }

    private void LoadBrushLayerInto(XmlNode styleSpriteNode, IBrushLayerData brushLayer)
    {
      Dictionary<string, string> dictionary = new Dictionary<string, string>();
      foreach (XmlAttribute attribute in (XmlNamedNodeMap) styleSpriteNode.Attributes)
      {
        string name = attribute.Name;
        string str = attribute.Value;
        dictionary.Add(name, str);
      }
      foreach (KeyValuePair<string, string> keyValuePair in dictionary)
      {
        string key = keyValuePair.Key;
        string str = keyValuePair.Value;
        switch (key)
        {
          case "Sprite":
            brushLayer.Sprite = this._spriteData.GetSprite(str);
            continue;
          case "Color":
            brushLayer.Color = Color.ConvertStringToColor(str);
            continue;
          case "ColorFactor":
            brushLayer.ColorFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "AlphaFactor":
            brushLayer.AlphaFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "HueFactor":
            brushLayer.HueFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "SaturationFactor":
            brushLayer.SaturationFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "ValueFactor":
            brushLayer.ValueFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "XOffset":
            brushLayer.XOffset = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "YOffset":
            brushLayer.YOffset = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "OverridenWidth":
            brushLayer.OverridenWidth = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "OverridenHeight":
            brushLayer.OverridenHeight = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "IsHidden":
            brushLayer.IsHidden = str == "true";
            continue;
          case "UseOverlayAlphaAsMask":
            brushLayer.UseOverlayAlphaAsMask = str == "true";
            continue;
          case "WidthPolicy":
            brushLayer.WidthPolicy = (BrushLayerSizePolicy) Enum.Parse(typeof (BrushLayerSizePolicy), str);
            continue;
          case "HeightPolicy":
            brushLayer.HeightPolicy = (BrushLayerSizePolicy) Enum.Parse(typeof (BrushLayerSizePolicy), str);
            continue;
          case "HorizontalFlip":
            brushLayer.HorizontalFlip = str == "true";
            continue;
          case "VerticalFlip":
            brushLayer.VerticalFlip = str == "true";
            continue;
          case "OverlayMethod":
            brushLayer.OverlayMethod = (BrushOverlayMethod) Enum.Parse(typeof (BrushOverlayMethod), str);
            continue;
          case "OverlaySprite":
            brushLayer.OverlaySprite = this._spriteData.GetSprite(str);
            continue;
          case "ExtendTop":
            brushLayer.ExtendTop = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "ExtendBottom":
            brushLayer.ExtendBottom = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "ExtendLeft":
            brushLayer.ExtendLeft = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "ExtendRight":
            brushLayer.ExtendRight = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "OverlayXOffset":
            brushLayer.OverlayXOffset = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "OverlayYOffset":
            brushLayer.OverlayYOffset = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "UseRandomBaseOverlayXOffset":
            brushLayer.UseRandomBaseOverlayXOffset = str == "true";
            continue;
          case "UseRandomBaseOverlayYOffset":
            brushLayer.UseRandomBaseOverlayYOffset = str == "true";
            continue;
          case "Name":
            if (string.IsNullOrEmpty(brushLayer.Name))
            {
              brushLayer.Name = str;
              continue;
            }
            continue;
          default:
            continue;
        }
      }
    }

    private void LoadStyleInto(XmlNode styleNode, Style style)
    {
      Dictionary<string, string> dictionary = new Dictionary<string, string>();
      foreach (XmlAttribute attribute in (XmlNamedNodeMap) styleNode.Attributes)
      {
        string name = attribute.Name;
        string str = attribute.Value;
        dictionary.Add(name, str);
      }
      foreach (KeyValuePair<string, string> keyValuePair in dictionary)
      {
        string key = keyValuePair.Key;
        string str = keyValuePair.Value;
        switch (key)
        {
          case "Name":
            style.Name = str;
            continue;
          case "FontColor":
            style.FontColor = Color.ConvertStringToColor(str);
            continue;
          case "AnimationMode":
            style.AnimationMode = (StyleAnimationMode) Enum.Parse(typeof (StyleAnimationMode), str);
            continue;
          case "AnimationToPlayOnBegin":
            style.AnimationToPlayOnBegin = str;
            continue;
          case "TextGlowColor":
            style.TextGlowColor = Color.ConvertStringToColor(str);
            continue;
          case "TextOutlineColor":
            style.TextOutlineColor = Color.ConvertStringToColor(str);
            continue;
          case "TextOutlineAmount":
            style.TextOutlineAmount = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextGlowRadius":
            style.TextGlowRadius = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextBlur":
            style.TextBlur = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextShadowOffset":
            style.TextShadowOffset = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextShadowAngle":
            style.TextShadowAngle = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextColorFactor":
            style.TextColorFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextAlphaFactor":
            style.TextAlphaFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextHueFactor":
            style.TextHueFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextSaturationFactor":
            style.TextSaturationFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextValueFactor":
            style.TextValueFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "Font":
            style.Font = this._fontFactory.GetFont(str);
            continue;
          case "FontSize":
            style.FontSize = Convert.ToInt32(str);
            continue;
          default:
            continue;
        }
      }
      foreach (XmlNode childNode in styleNode.ChildNodes)
      {
        string name = childNode.Attributes["Name"].Value;
        StyleLayer layer = style.GetLayer(name);
        this.LoadBrushLayerInto(childNode, (IBrushLayerData) layer);
      }
    }

    private void LoadSoundPropertiesInto(
      XmlNode soundPropertiesNode,
      SoundProperties soundProperties)
    {
      XmlNode xmlNode1 = soundPropertiesNode.SelectSingleNode("StateSounds");
      XmlNode xmlNode2 = soundPropertiesNode.SelectSingleNode("EventSounds");
      if (xmlNode1 != null)
      {
        foreach (XmlNode xmlNode3 in xmlNode1)
        {
          AudioProperty audioProperty = new AudioProperty();
          string state = xmlNode3.Attributes["StateName"].Value;
          string str = xmlNode3.Attributes["Audio"].Value;
          audioProperty.AudioName = str;
          soundProperties.AddStateSound(state, audioProperty);
        }
      }
      if (xmlNode2 == null)
        return;
      foreach (XmlNode xmlNode4 in xmlNode2)
      {
        AudioProperty audioProperty = new AudioProperty();
        string state = xmlNode4.Attributes["EventName"].Value;
        string str = xmlNode4.Attributes["Audio"].Value;
        audioProperty.AudioName = str;
        soundProperties.AddEventSound(state, audioProperty);
      }
    }

    private Brush LoadBrushFrom(XmlNode brushNode)
    {
      Brush brush1 = new Brush();
      Dictionary<string, string> dictionary = new Dictionary<string, string>();
      foreach (XmlAttribute attribute in (XmlNamedNodeMap) brushNode.Attributes)
      {
        string name = attribute.Name;
        string str = attribute.Value;
        dictionary.Add(name, str);
      }
      if (dictionary.ContainsKey("BaseBrush"))
      {
        string key = dictionary["BaseBrush"];
        if (this._brushes.ContainsKey(key))
        {
          Brush brush2 = this._brushes[key];
          brush1.FillFrom(brush2);
        }
      }
      foreach (KeyValuePair<string, string> keyValuePair in dictionary)
      {
        string key = keyValuePair.Key;
        string str = keyValuePair.Value;
        switch (key)
        {
          case "Name":
            brush1.Name = str;
            continue;
          case "Font":
            brush1.Font = this._fontFactory.GetFont(str);
            continue;
          case "FontSize":
            brush1.FontSize = Convert.ToInt32(str);
            continue;
          case "TransitionDuration":
            brush1.TransitionDuration = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "TextHorizontalAlignment":
            brush1.TextHorizontalAlignment = (TextHorizontalAlignment) Enum.Parse(typeof (TextHorizontalAlignment), str);
            continue;
          case "TextVerticalAlignment":
            brush1.TextVerticalAlignment = (TextVerticalAlignment) Enum.Parse(typeof (TextVerticalAlignment), str);
            continue;
          case "GlobalColorFactor":
            brush1.GlobalColorFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "GlobalAlphaFactor":
            brush1.GlobalAlphaFactor = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "GlobalColor":
            brush1.GlobalColor = Color.ConvertStringToColor(str);
            continue;
          default:
            continue;
        }
      }
      XmlNode xmlNode1 = brushNode.SelectSingleNode("Layers");
      if (xmlNode1 != null)
      {
        foreach (XmlNode styleSpriteNode in xmlNode1)
        {
          string name = styleSpriteNode.Attributes["Name"].Value;
          BrushLayer layer = brush1.GetLayer(name);
          if (layer != null)
          {
            this.LoadBrushLayerInto(styleSpriteNode, (IBrushLayerData) layer);
          }
          else
          {
            BrushLayer brushLayer = new BrushLayer();
            this.LoadBrushLayerInto(styleSpriteNode, (IBrushLayerData) brushLayer);
            brush1.AddLayer(brushLayer);
          }
        }
      }
      XmlNode xmlNode2 = brushNode.SelectSingleNode("Styles");
      if (xmlNode2 != null)
      {
        foreach (XmlNode styleNode in xmlNode2)
        {
          string name = styleNode.Attributes["Name"].Value;
          Style style1 = brush1.GetStyle(name);
          if (style1 != null)
          {
            style1.DefaultStyle = brush1.DefaultStyle;
            this.LoadStyleInto(styleNode, style1);
          }
          else
          {
            Style style2 = new Style((IEnumerable<BrushLayer>) brush1.Layers);
            style2.DefaultStyle = brush1.DefaultStyle;
            this.LoadStyleInto(styleNode, style2);
            brush1.AddStyle(style2);
          }
        }
      }
      XmlNode xmlNode3 = brushNode.SelectSingleNode("Animations");
      if (xmlNode3 != null)
      {
        foreach (XmlNode animationNode in xmlNode3)
        {
          BrushAnimation animation = this.LoadBrushAnimationFrom(animationNode);
          brush1.AddAnimation(animation);
        }
      }
      XmlNode soundPropertiesNode = brushNode.SelectSingleNode("SoundProperties");
      if (soundPropertiesNode != null)
        this.LoadSoundPropertiesInto(soundPropertiesNode, brush1.SoundProperties);
      else if (this.DefaultBrush != null && !brush1.SoundProperties.RegisteredEventSounds.Any<KeyValuePair<string, AudioProperty>>() && !brush1.SoundProperties.RegisteredStateSounds.Any<KeyValuePair<string, AudioProperty>>())
        brush1.SoundProperties.FillFrom(this.DefaultBrush.SoundProperties);
      return brush1;
    }

    private void SaveBrushTo(XmlNode brushNode, Brush brush)
    {
      Dictionary<string, string> attributePairs1 = new Dictionary<string, string>();
      foreach (PropertyInfo property in brush.GetType().GetProperties(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic))
      {
        object targetPropertyValue = property.GetValue((object) brush);
        if (targetPropertyValue == null && property.GetValue((object) this.DefaultBrush) != null || targetPropertyValue != null && !targetPropertyValue.Equals(property.GetValue((object) this.DefaultBrush)))
          this.AddAttributeTo(property, targetPropertyValue, attributePairs1);
      }
      brushNode.Attributes.RemoveAll();
      foreach (KeyValuePair<string, string> keyValuePair in attributePairs1)
      {
        XmlAttribute attribute = brushNode.OwnerDocument.CreateAttribute(keyValuePair.Key);
        attribute.InnerText = keyValuePair.Value;
        brushNode.Attributes.Append(attribute);
      }
      XmlNode newChild1 = brushNode.SelectSingleNode("Layers");
      if (newChild1 == null)
      {
        newChild1 = (XmlNode) brushNode.OwnerDocument.CreateElement("Layers");
        brushNode.AppendChild(newChild1);
      }
      else
        newChild1.RemoveAll();
      foreach (BrushLayer layer in brush.Layers)
      {
        XmlNode element = (XmlNode) brushNode.OwnerDocument.CreateElement("BrushLayer");
        newChild1.AppendChild(element);
        Dictionary<string, string> attributePairs2 = new Dictionary<string, string>();
        foreach (PropertyInfo property in layer.GetType().GetProperties(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic))
        {
          object targetPropertyValue = property.GetValue((object) layer);
          if (targetPropertyValue == null && property.GetValue((object) this.DefaultBrush.DefaultLayer) != null || targetPropertyValue != null && !targetPropertyValue.Equals(property.GetValue((object) this.DefaultBrush.DefaultLayer)) || property.Name == "Name")
            this.AddAttributeTo(property, targetPropertyValue, attributePairs2);
        }
        foreach (KeyValuePair<string, string> keyValuePair in attributePairs2)
        {
          XmlAttribute attribute = brushNode.OwnerDocument.CreateAttribute(keyValuePair.Key);
          attribute.InnerText = keyValuePair.Value;
          element.Attributes.Append(attribute);
        }
      }
      XmlNode newChild2 = brushNode.SelectSingleNode("Styles");
      if (newChild2 == null)
      {
        newChild2 = (XmlNode) brushNode.OwnerDocument.CreateElement("Styles");
        brushNode.AppendChild(newChild2);
      }
      else
        newChild2.RemoveAll();
      foreach (Style style in brush.Styles)
      {
        XmlNode element1 = (XmlNode) brushNode.OwnerDocument.CreateElement("Style");
        newChild2.AppendChild(element1);
        Dictionary<string, string> attributePairs3 = new Dictionary<string, string>();
        foreach (PropertyInfo property in style.GetType().GetProperties(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic))
        {
          object targetPropertyValue = property.GetValue((object) style);
          if (targetPropertyValue == null && property.GetValue((object) this.DefaultBrush.DefaultStyle) != null || targetPropertyValue != null && !targetPropertyValue.Equals(property.GetValue((object) this.DefaultBrush.DefaultStyle)) || property.Name == "Name")
            this.AddAttributeTo(property, targetPropertyValue, attributePairs3);
        }
        foreach (KeyValuePair<string, string> keyValuePair in attributePairs3)
        {
          XmlAttribute attribute = brushNode.OwnerDocument.CreateAttribute(keyValuePair.Key);
          attribute.InnerText = keyValuePair.Value;
          element1.Attributes.Append(attribute);
        }
        foreach (StyleLayer layer in style.Layers)
        {
          XmlNode element2 = (XmlNode) brushNode.OwnerDocument.CreateElement("BrushLayer");
          element1.AppendChild(element2);
          Dictionary<string, string> attributePairs4 = new Dictionary<string, string>();
          foreach (PropertyInfo property in layer.GetType().GetProperties(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic))
          {
            BrushAnimationProperty.BrushAnimationPropertyType result;
            if (Enum.TryParse<BrushAnimationProperty.BrushAnimationPropertyType>(property.Name, true, out result) && (layer.GetIsValueChanged(result) || result == BrushAnimationProperty.BrushAnimationPropertyType.Name))
            {
              object targetPropertyValue = property.GetValue((object) layer);
              this.AddAttributeTo(property, targetPropertyValue, attributePairs4);
            }
          }
          foreach (KeyValuePair<string, string> keyValuePair in attributePairs4)
          {
            XmlAttribute attribute = brushNode.OwnerDocument.CreateAttribute(keyValuePair.Key);
            attribute.InnerText = keyValuePair.Value;
            element2.Attributes.Append(attribute);
          }
        }
      }
      if (brush.GetAnimations().Any<BrushAnimation>())
      {
        XmlNode newChild3 = brushNode.SelectSingleNode("Animations");
        if (newChild3 == null)
        {
          newChild3 = (XmlNode) brushNode.OwnerDocument.CreateElement("Animations");
          brushNode.AppendChild(newChild3);
        }
        else
          newChild3.RemoveAll();
        foreach (BrushAnimation animation in brush.GetAnimations())
        {
          XmlNode element3 = (XmlNode) brushNode.OwnerDocument.CreateElement("Animation");
          newChild3.AppendChild(element3);
          XmlAttribute attribute1 = element3.OwnerDocument.CreateAttribute("Name");
          attribute1.InnerText = animation.Name;
          element3.Attributes.Append(attribute1);
          XmlAttribute attribute2 = element3.OwnerDocument.CreateAttribute("Duration");
          attribute2.InnerText = animation.Duration.ToString();
          element3.Attributes.Append(attribute2);
          XmlAttribute attribute3 = element3.OwnerDocument.CreateAttribute("Loop");
          attribute3.InnerText = animation.Loop ? "true" : "false";
          element3.Attributes.Append(attribute3);
          foreach (BrushLayerAnimation layerAnimation in animation.GetLayerAnimations())
          {
            foreach (BrushAnimationProperty collection in (List<BrushAnimationProperty>) layerAnimation.Collections)
            {
              XmlNode element4 = (XmlNode) element3.OwnerDocument.CreateElement("AnimationProperty");
              element3.AppendChild(element4);
              if (!string.IsNullOrEmpty(collection.LayerName))
              {
                XmlAttribute attribute4 = element4.OwnerDocument.CreateAttribute("LayerName");
                attribute4.InnerText = collection.LayerName;
                element4.Attributes.Append(attribute4);
              }
              XmlAttribute attribute5 = element4.OwnerDocument.CreateAttribute("PropertyName");
              attribute5.InnerText = collection.PropertyType.ToString();
              element4.Attributes.Append(attribute5);
              PropertyInfo property = typeof (BrushLayer).GetProperty(collection.PropertyType.ToString());
              foreach (BrushAnimationKeyFrame keyFrame in collection.KeyFrames)
              {
                XmlNode element5 = (XmlNode) element3.OwnerDocument.CreateElement("KeyFrame");
                element3.AppendChild(element5);
                Dictionary<string, string> attributePairs5 = new Dictionary<string, string>();
                this.AddAttributeTo(property, keyFrame.GetValueAsObject(), attributePairs5);
                foreach (KeyValuePair<string, string> keyValuePair in attributePairs5)
                {
                  XmlAttribute attribute6 = element5.OwnerDocument.CreateAttribute("Time");
                  attribute6.InnerText = keyFrame.Time.ToString();
                  element5.Attributes.Append(attribute6);
                  XmlAttribute attribute7 = element5.OwnerDocument.CreateAttribute("Value");
                  attribute7.InnerText = keyValuePair.Value;
                  element5.Attributes.Append(attribute7);
                }
              }
            }
          }
        }
      }
      else
      {
        XmlNode oldChild = brushNode.SelectSingleNode("Animations");
        if (oldChild != null)
          brushNode.RemoveChild(oldChild);
      }
      if (brush.SoundProperties != null)
      {
        XmlNode newChild4 = brushNode.SelectSingleNode("SoundProperties");
        if (newChild4 == null)
        {
          newChild4 = (XmlNode) brushNode.OwnerDocument.CreateElement("SoundProperties");
          brushNode.AppendChild(newChild4);
        }
        else
          newChild4.RemoveAll();
        XmlNode element6 = (XmlNode) brushNode.OwnerDocument.CreateElement("StateSounds");
        newChild4.AppendChild(element6);
        foreach (KeyValuePair<string, AudioProperty> registeredStateSound in brush.SoundProperties.RegisteredStateSounds)
        {
          XmlNode element7 = (XmlNode) brushNode.OwnerDocument.CreateElement("StateSound");
          element6.AppendChild(element7);
          XmlAttribute attribute8 = element7.OwnerDocument.CreateAttribute("StateName");
          attribute8.InnerText = registeredStateSound.Key;
          element7.Attributes.Append(attribute8);
          XmlAttribute attribute9 = element7.OwnerDocument.CreateAttribute("Audio");
          attribute9.InnerText = registeredStateSound.Value.AudioName;
          element7.Attributes.Append(attribute9);
        }
        XmlNode element8 = (XmlNode) brushNode.OwnerDocument.CreateElement("EventSounds");
        newChild4.AppendChild(element8);
        foreach (KeyValuePair<string, AudioProperty> registeredEventSound in brush.SoundProperties.RegisteredEventSounds)
        {
          XmlNode element9 = (XmlNode) brushNode.OwnerDocument.CreateElement("EventSound");
          element8.AppendChild(element9);
          XmlAttribute attribute10 = element9.OwnerDocument.CreateAttribute("EventName");
          attribute10.InnerText = registeredEventSound.Key;
          element9.Attributes.Append(attribute10);
          XmlAttribute attribute11 = element9.OwnerDocument.CreateAttribute("Audio");
          attribute11.InnerText = registeredEventSound.Value.AudioName;
          element9.Attributes.Append(attribute11);
        }
      }
      Uri uri = new Uri(brushNode.OwnerDocument.BaseURI);
      brushNode.OwnerDocument.Save(uri.LocalPath);
    }

    private void AddAttributeTo(
      PropertyInfo targetPropertyInfo,
      object targetPropertyValue,
      Dictionary<string, string> attributePairs)
    {
      if (targetPropertyInfo.PropertyType != typeof (string) && (targetPropertyInfo.PropertyType.GetInterface("IEnumerable") != (Type) null || targetPropertyInfo.PropertyType.GetInterface("ICollection") != (Type) null || targetPropertyInfo.PropertyType.GetInterface("IList") != (Type) null))
        return;
      object[] customAttributesSafe = targetPropertyInfo.GetCustomAttributesSafe(typeof (EditorAttribute), true);
      if (customAttributesSafe == null || customAttributesSafe.Length == 0)
        return;
      if (targetPropertyInfo.PropertyType == typeof (Color))
      {
        Color color = (Color) targetPropertyValue;
        attributePairs.Add(targetPropertyInfo.Name, color.ToString());
      }
      else if (targetPropertyInfo.PropertyType == typeof (Brush))
      {
        if (!(targetPropertyValue is Brush brush))
          return;
        attributePairs.Add(targetPropertyInfo.Name, brush.Name);
      }
      else if (targetPropertyInfo.PropertyType == typeof (Font))
      {
        if (!(targetPropertyValue is Font font))
          return;
        attributePairs.Add(targetPropertyInfo.Name, this._fontFactory.GetFontName(font));
      }
      else if (targetPropertyValue == null)
        attributePairs.Add(targetPropertyInfo.Name, "");
      else
        attributePairs.Add(targetPropertyInfo.Name, targetPropertyValue.ToString());
    }

    private void LoadBrushes()
    {
      this._brushes.Clear();
      this._brushCategories.Clear();
      this._lastWriteTimes.Clear();
      List<string> brushesNames = this.GetBrushesNames();
      this.LoadBrushFile("Base");
      foreach (string name in brushesNames)
      {
        if (name != "Base")
          this.LoadBrushFile(name);
      }
    }

    public void LoadBrushFile(string name)
    {
      try
      {
        this.LoadBrushFromFileAux(name);
      }
      catch (Exception ex)
      {
        Debug.FailedAssert("Failed to load brush from file: " + name, "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushFactory.cs", nameof (LoadBrushFile), 1027);
      }
    }

    private void LoadBrushFromFileAux(string name)
    {
      string filePath = this._resourceDepot.GetFilePath(this._resourceFolder + "/" + name + ".xml");
      DateTime lastWriteTime = File.GetLastWriteTime(filePath);
      if (this._lastWriteTimes.ContainsKey(name))
        this._lastWriteTimes[name] = lastWriteTime;
      else
        this._lastWriteTimes.Add(name, lastWriteTime);
      XmlDocument xmlDocument = new XmlDocument();
      using (XmlReader reader = XmlReader.Create(filePath, new XmlReaderSettings()
      {
        IgnoreComments = true
      }))
        xmlDocument.Load(reader);
      foreach (XmlNode childNode in xmlDocument.SelectSingleNode("Brushes").ChildNodes)
      {
        Brush brush = this.LoadBrushFrom(childNode);
        if (this._brushes.ContainsKey(brush.Name))
          this._brushes[brush.Name] = brush;
        else
          this._brushes.Add(brush.Name, brush);
        if (this._brushCategories.ContainsKey(brush.Name))
          this._brushCategories[brush.Name] = filePath;
        else
          this._brushCategories.Add(brush.Name, filePath);
      }
    }

    public Brush GetBrush(string name)
    {
      Brush brush;
      return this._brushes.TryGetValue(name, out brush) ? brush : (Brush) null;
    }

    public bool SaveBrushAs(string name, Brush brush)
    {
      if (!this._brushCategories.ContainsKey(name))
        Debug.FailedAssert("Brush not found", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushFactory.cs", nameof (SaveBrushAs), 1099);
      string brushCategory = this._brushCategories[name];
      XmlDocument xmlDocument = new XmlDocument();
      xmlDocument.Load(brushCategory);
      foreach (XmlNode childNode in xmlDocument.SelectSingleNode("Brushes").ChildNodes)
      {
        foreach (XmlAttribute attribute in (XmlNamedNodeMap) childNode.Attributes)
        {
          if (attribute.Name.Equals("Name") && attribute.Value.Equals(name))
          {
            this.SaveBrushTo(childNode, brush);
            return true;
          }
        }
      }
      return false;
    }

    private List<string> GetBrushesNames()
    {
      string[] files = this._resourceDepot.GetFiles(this._resourceFolder, ".xml");
      List<string> brushesNames = new List<string>();
      foreach (string path in files)
      {
        string withoutExtension = Path.GetFileNameWithoutExtension(path);
        brushesNames.Add(withoutExtension);
      }
      return brushesNames;
    }

    public void CheckForUpdates()
    {
      bool flag = false;
      List<string> brushesNames = this.GetBrushesNames();
      foreach (string key in this._lastWriteTimes.Keys)
      {
        if (!brushesNames.Contains(key))
          flag = true;
      }
      foreach (string key in brushesNames)
      {
        DateTime lastWriteTime = File.GetLastWriteTime(this._resourceDepot.GetFilePath(this._resourceFolder + "/" + key + ".xml"));
        if (this._lastWriteTimes.ContainsKey(key))
        {
          if (this._lastWriteTimes[key] != lastWriteTime)
            flag = true;
        }
        else
          flag = true;
      }
      if (!flag)
        return;
      this.LoadBrushes();
      Action brushChange = this.BrushChange;
      if (brushChange == null)
        return;
      brushChange();
    }

    public event Action BrushChange;
  }
}
