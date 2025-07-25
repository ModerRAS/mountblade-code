// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameMenus.WaitMenuOption
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Reflection;
using System.Xml;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameMenus
{
  public class WaitMenuOption
  {
    private string _idstring;
    private TextObject _text;
    private string _tooltip;
    private MethodInfo _methodOnCondition;
    public WaitMenuOption.OnConditionDelegate OnCondition;
    private MethodInfo _methodOnConsequence;
    public WaitMenuOption.OnConsequenceDelegate OnConsequence;
    private bool _isLeave;

    public int Priority { get; private set; }

    internal WaitMenuOption()
    {
      this.Priority = 100;
      this._text = TextObject.Empty;
      this._tooltip = "";
    }

    internal WaitMenuOption(
      string idString,
      TextObject text,
      WaitMenuOption.OnConditionDelegate condition,
      WaitMenuOption.OnConsequenceDelegate consequence,
      int priority = 100,
      string tooltip = "")
    {
      this._idstring = idString;
      this._text = text;
      this.OnCondition = condition;
      this.OnConsequence = consequence;
      this.Priority = priority;
      this._tooltip = tooltip;
    }

    public bool GetConditionsHold(Game game, MapState mapState)
    {
      return this.OnCondition == null || this.OnCondition(new MenuCallbackArgs(mapState, this.Text));
    }

    public TextObject Text => this._text;

    public string IdString => this._idstring;

    public string Tooltip => this._tooltip;

    public bool IsLeave => this._isLeave;

    public void RunConsequence(Game game, MapState mapState)
    {
      if (this.OnConsequence == null)
        return;
      this.OnConsequence(new MenuCallbackArgs(mapState, this.Text));
    }

    public void Deserialize(XmlNode node, Type typeOfWaitMenusCallbacks)
    {
      if (node.Attributes == null)
        throw new TWXmlLoadException("node.Attributes != null");
      this._idstring = node.Attributes["id"].Value;
      XmlNode attribute1 = (XmlNode) node.Attributes["text"];
      if (attribute1 != null)
        this._text = new TextObject(attribute1.InnerText);
      if (node.Attributes["is_leave"] != null)
        this._isLeave = true;
      XmlNode attribute2 = (XmlNode) node.Attributes["on_condition"];
      if (attribute2 != null)
      {
        string innerText = attribute2.InnerText;
        this._methodOnCondition = typeOfWaitMenusCallbacks.GetMethod(innerText);
        this.OnCondition = !(this._methodOnCondition == (MethodInfo) null) ? (WaitMenuOption.OnConditionDelegate) Delegate.CreateDelegate(typeof (WaitMenuOption.OnConditionDelegate), (object) null, this._methodOnCondition) : throw new MBNotFoundException("Can not find WaitMenuOption condition:" + innerText);
      }
      XmlNode attribute3 = (XmlNode) node.Attributes["on_consequence"];
      if (attribute3 == null)
        return;
      string innerText1 = attribute3.InnerText;
      this._methodOnConsequence = typeOfWaitMenusCallbacks.GetMethod(innerText1);
      this.OnConsequence = !(this._methodOnConsequence == (MethodInfo) null) ? (WaitMenuOption.OnConsequenceDelegate) Delegate.CreateDelegate(typeof (WaitMenuOption.OnConsequenceDelegate), (object) null, this._methodOnConsequence) : throw new MBNotFoundException("Can not find WaitMenuOption consequence:" + innerText1);
    }

    public delegate bool OnConditionDelegate(MenuCallbackArgs args);

    public delegate void OnConsequenceDelegate(MenuCallbackArgs args);
  }
}
