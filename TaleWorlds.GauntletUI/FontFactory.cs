// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.FontFactory
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class FontFactory
  {
    private readonly Dictionary<string, Font> _bitmapFonts;
    private readonly ResourceDepot _resourceDepot;
    private readonly Dictionary<string, Language> _fontLanguageMap;
    private SpriteData _latestSpriteData;

    public string DefaultLangageID { get; private set; }

    public string CurrentLangageID { get; private set; }

    public Font DefaultFont => this.GetCurrentLanguage().DefaultFont;

    public FontFactory(ResourceDepot resourceDepot)
    {
      this._resourceDepot = resourceDepot;
      this._bitmapFonts = new Dictionary<string, Font>();
      this._fontLanguageMap = new Dictionary<string, Language>();
      this._resourceDepot.OnResourceChange += new ResourceChangeEvent(this.OnResourceChange);
    }

    private void OnResourceChange() => this.CheckForUpdates();

    public void LoadAllFonts(SpriteData spriteData)
    {
      foreach (string file in this._resourceDepot.GetFiles("Fonts", ".fnt"))
      {
        string withoutExtension = Path.GetFileNameWithoutExtension(file);
        this.TryAddFontDefinition(Path.GetDirectoryName(file) + "/", withoutExtension, spriteData);
      }
      foreach (string file in this._resourceDepot.GetFiles("Fonts", ".xml"))
      {
        if (Path.GetFileNameWithoutExtension(file).EndsWith("Languages"))
        {
          try
          {
            this.LoadLocalizationValues(file);
          }
          catch (Exception ex)
          {
            Debug.FailedAssert("Failed to load language at path: " + file, "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\FontFactory.cs", nameof (LoadAllFonts), 71);
          }
        }
      }
      if (string.IsNullOrEmpty(this.DefaultLangageID))
      {
        this.DefaultLangageID = "English";
        this.CurrentLangageID = this.DefaultLangageID;
      }
      this._latestSpriteData = spriteData;
    }

    public bool TryAddFontDefinition(string fontPath, string fontName, SpriteData spriteData)
    {
      Font font = new Font(fontName);
      string path = fontPath + fontName + ".fnt";
      int num = font.TryLoadFontFromPath(path, spriteData) ? 1 : 0;
      if (num == 0)
        return num != 0;
      this._bitmapFonts.Add(fontName, font);
      return num != 0;
    }

    public void LoadLocalizationValues(string sourceXMLPath)
    {
      XmlDocument xmlDocument = new XmlDocument();
      xmlDocument.Load(sourceXMLPath);
      XmlElement xmlElement = xmlDocument["Languages"];
      if (!string.IsNullOrEmpty(xmlElement.Attributes["DefaultLanguage"]?.InnerText))
      {
        this.DefaultLangageID = xmlElement.Attributes["DefaultLanguage"]?.InnerText ?? "English";
        this.CurrentLangageID = this.DefaultLangageID;
      }
      foreach (XmlNode languageNode in (XmlNode) xmlElement)
      {
        if (languageNode.NodeType == XmlNodeType.Element && languageNode.Name == "Language")
        {
          Language from = Language.CreateFrom(languageNode, this);
          if (this._fontLanguageMap.TryGetValue(from.LanguageID, out Language _))
            this._fontLanguageMap[from.LanguageID] = from;
          else
            this._fontLanguageMap.Add(from.LanguageID, from);
        }
      }
    }

    public Language GetCurrentLanguage()
    {
      Language language;
      Language currentLanguage;
      if (this._fontLanguageMap.TryGetValue(this.CurrentLangageID, out language))
        currentLanguage = language;
      else if (this.DefaultLangageID != null && this._fontLanguageMap.TryGetValue(this.DefaultLangageID, out language))
      {
        Debug.Print("Couldn't find language in language map: " + this.CurrentLangageID);
        Debug.FailedAssert("Couldn't find language in language map: " + this.CurrentLangageID, "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\FontFactory.cs", nameof (GetCurrentLanguage), 148);
        currentLanguage = language;
      }
      else if (this._fontLanguageMap.TryGetValue("English", out language))
      {
        Debug.Print("Couldn't find default language(" + (this.DefaultLangageID ?? "INVALID") + ") in language map.");
        Debug.FailedAssert("Couldn't find default language(" + (this.DefaultLangageID ?? "INVALID") + ") in language map.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\FontFactory.cs", nameof (GetCurrentLanguage), 154);
        currentLanguage = language;
      }
      else
      {
        Debug.Print("Couldn't find English language in language map.");
        Debug.FailedAssert("Couldn't find English language in language map.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\FontFactory.cs", nameof (GetCurrentLanguage), 160);
        currentLanguage = this._fontLanguageMap.FirstOrDefault<KeyValuePair<string, Language>>().Value;
      }
      if (currentLanguage == null)
      {
        Debug.Print("There are no languages in language map");
        Debug.FailedAssert("There are no languages in language map", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\FontFactory.cs", nameof (GetCurrentLanguage), 167);
      }
      return currentLanguage;
    }

    public Font GetFont(string fontName)
    {
      return this._bitmapFonts.ContainsKey(fontName) ? this._bitmapFonts[fontName] : this.DefaultFont;
    }

    public IEnumerable<Font> GetFonts() => (IEnumerable<Font>) this._bitmapFonts.Values;

    public string GetFontName(Font font)
    {
      return this._bitmapFonts.FirstOrDefault<KeyValuePair<string, Font>>((Func<KeyValuePair<string, Font>, bool>) (f => f.Value == font)).Key;
    }

    public Font GetMappedFontForLocalization(string englishFontName)
    {
      if (string.IsNullOrEmpty(englishFontName))
        return this.DefaultFont;
      if (!(this.CurrentLangageID != this.DefaultLangageID))
        return this.GetFont(englishFontName);
      Language currentLanguage = this.GetCurrentLanguage();
      return currentLanguage.FontMapHasKey(englishFontName) ? currentLanguage.GetMappedFont(englishFontName) : this.DefaultFont;
    }

    public void OnLanguageChange(string newLanguageCode) => this.CurrentLangageID = newLanguageCode;

    public Font GetUsableFontForCharacter(int characterCode)
    {
      for (int index = 0; index < this._fontLanguageMap.Values.Count; ++index)
      {
        if (this._fontLanguageMap.ElementAt<KeyValuePair<string, Language>>(index).Value.DefaultFont.Characters.ContainsKey(characterCode))
          return this._fontLanguageMap.ElementAt<KeyValuePair<string, Language>>(index).Value.DefaultFont;
      }
      return (Font) null;
    }

    public void CheckForUpdates()
    {
      string currentLangageId = this.CurrentLangageID;
      this.CurrentLangageID = (string) null;
      this.DefaultLangageID = (string) null;
      this._bitmapFonts.Clear();
      this._fontLanguageMap.Clear();
      this.LoadAllFonts(this._latestSpriteData);
      this.CurrentLangageID = currentLangageId;
    }
  }
}
