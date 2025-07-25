﻿// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.ConversationSentence
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Xml;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation
{
  public class ConversationSentence
  {
    public const int DefaultPriority = 100;
    public int AgentIndex;
    public int NextAgentIndex;
    public bool IsClickable = true;
    public TextObject HintText;
    private MethodInfo _methodOnCondition;
    public ConversationSentence.OnConditionDelegate OnCondition;
    private MethodInfo _methodOnClickableCondition;
    public ConversationSentence.OnClickableConditionDelegate OnClickableCondition;
    private MethodInfo _methodOnConsequence;
    public ConversationSentence.OnConsequenceDelegate OnConsequence;
    public ConversationSentence.OnMultipleConversationConsequenceDelegate IsSpeaker;
    public ConversationSentence.OnMultipleConversationConsequenceDelegate IsListener;
    private uint _flags;
    private ConversationSentence.OnPersuasionOptionDelegate _onPersuasionOption;

    public TextObject Text { get; private set; }

    public int Index { get; internal set; }

    public string Id { get; private set; }

    public bool IsPlayer
    {
      get => this.GetFlags(ConversationSentence.DialogLineFlags.PlayerLine);
      internal set => this.set_flags(value, ConversationSentence.DialogLineFlags.PlayerLine);
    }

    public bool IsRepeatable
    {
      get => this.GetFlags(ConversationSentence.DialogLineFlags.RepeatForObjects);
      internal set => this.set_flags(value, ConversationSentence.DialogLineFlags.RepeatForObjects);
    }

    public bool IsSpecial
    {
      get => this.GetFlags(ConversationSentence.DialogLineFlags.SpecialLine);
      internal set => this.set_flags(value, ConversationSentence.DialogLineFlags.SpecialLine);
    }

    private bool GetFlags(ConversationSentence.DialogLineFlags flag)
    {
      return ((ConversationSentence.DialogLineFlags) this._flags & flag) != 0;
    }

    private void set_flags(bool val, ConversationSentence.DialogLineFlags newFlag)
    {
      if (val)
        this._flags = (uint) ((ConversationSentence.DialogLineFlags) this._flags | newFlag);
      else
        this._flags = (uint) ((ConversationSentence.DialogLineFlags) this._flags & ~newFlag);
    }

    public int Priority { get; private set; }

    public int InputToken { get; private set; }

    public int OutputToken { get; private set; }

    public object RelatedObject { get; private set; }

    public bool IsWithVariation { private set; get; }

    public PersuasionOptionArgs PersuationOptionArgs { get; private set; }

    public bool HasPersuasion => this._onPersuasionOption != null;

    public string SkillName
    {
      get => !this.HasPersuasion ? "" : this.PersuationOptionArgs.SkillUsed.ToString();
    }

    public string TraitName
    {
      get
      {
        return !this.HasPersuasion || this.PersuationOptionArgs.TraitUsed == null ? "" : this.PersuationOptionArgs.TraitUsed.ToString();
      }
    }

    internal ConversationSentence(
      string idString,
      TextObject text,
      string inputToken,
      string outputToken,
      ConversationSentence.OnConditionDelegate conditionDelegate,
      ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate,
      ConversationSentence.OnConsequenceDelegate consequenceDelegate,
      uint flags = 0,
      int priority = 100,
      int agentIndex = 0,
      int nextAgentIndex = 0,
      object relatedObject = null,
      bool withVariation = false,
      ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate = null,
      ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate = null,
      ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate = null)
    {
      this.Index = Campaign.Current.ConversationManager.CreateConversationSentenceIndex();
      this.Id = idString;
      this.Text = text;
      this.InputToken = Campaign.Current.ConversationManager.GetStateIndex(inputToken);
      this.OutputToken = Campaign.Current.ConversationManager.GetStateIndex(outputToken);
      this.OnCondition = conditionDelegate;
      this.OnClickableCondition = clickableConditionDelegate;
      this.OnConsequence = consequenceDelegate;
      this._flags = flags;
      this.Priority = priority;
      this.AgentIndex = agentIndex;
      this.NextAgentIndex = nextAgentIndex;
      this.RelatedObject = relatedObject;
      this.IsWithVariation = withVariation;
      this.IsSpeaker = speakerDelegate;
      this.IsListener = listenerDelegate;
      this._onPersuasionOption = persuasionOptionDelegate;
    }

    internal ConversationSentence(int index) => this.Index = index;

    public ConversationSentence Variation(params object[] list)
    {
      Game.Current.GameTextManager.AddGameText(this.Id).AddVariation((string) list[0], ((IEnumerable<object>) list).Skip<object>(1).ToArray<object>());
      return this;
    }

    internal void RunConsequence(Game game)
    {
      if (this.OnConsequence != null)
        this.OnConsequence();
      Campaign.Current.ConversationManager.OnConsequence(this);
      if (!this.HasPersuasion)
        return;
      ConversationManager.PersuasionCommitProgress(this.PersuationOptionArgs);
    }

    internal bool RunCondition()
    {
      bool flag = true;
      if (this.OnCondition != null)
        flag = this.OnCondition();
      if (flag && this.HasPersuasion)
        this.PersuationOptionArgs = this._onPersuasionOption();
      Campaign.Current.ConversationManager.OnCondition(this);
      return flag;
    }

    internal bool RunClickableCondition()
    {
      bool flag = true;
      if (this.OnClickableCondition != null)
        flag = this.OnClickableCondition(out this.HintText);
      Campaign.Current.ConversationManager.OnClickableCondition(this);
      return flag;
    }

    public void Deserialize(
      XmlNode node,
      Type typeOfConversationCallbacks,
      ConversationManager conversationManager,
      int defaultPriority)
    {
      if (node.Attributes == null)
        throw new TWXmlLoadException("node.Attributes != null");
      this.Id = node.Attributes["id"].Value;
      XmlNode attribute1 = (XmlNode) node.Attributes["on_condition"];
      if (attribute1 != null)
      {
        string innerText = attribute1.InnerText;
        this._methodOnCondition = typeOfConversationCallbacks.GetMethod(innerText);
        this.OnCondition = !(this._methodOnCondition == (MethodInfo) null) ? Delegate.CreateDelegate(typeof (ConversationSentence.OnConditionDelegate), (object) null, this._methodOnCondition) as ConversationSentence.OnConditionDelegate : throw new MBMethodNameNotFoundException(innerText);
      }
      XmlNode attribute2 = (XmlNode) node.Attributes["on_clickable_condition"];
      if (attribute2 != null)
      {
        string innerText = attribute2.InnerText;
        this._methodOnClickableCondition = typeOfConversationCallbacks.GetMethod(innerText);
        this.OnClickableCondition = !(this._methodOnClickableCondition == (MethodInfo) null) ? Delegate.CreateDelegate(typeof (ConversationSentence.OnClickableConditionDelegate), (object) null, this._methodOnClickableCondition) as ConversationSentence.OnClickableConditionDelegate : throw new MBMethodNameNotFoundException(innerText);
      }
      XmlNode attribute3 = (XmlNode) node.Attributes["on_consequence"];
      if (attribute3 != null)
      {
        string innerText = attribute3.InnerText;
        this._methodOnConsequence = typeOfConversationCallbacks.GetMethod(innerText);
        this.OnConsequence = !(this._methodOnConsequence == (MethodInfo) null) ? Delegate.CreateDelegate(typeof (ConversationSentence.OnConsequenceDelegate), (object) null, this._methodOnConsequence) as ConversationSentence.OnConsequenceDelegate : throw new MBMethodNameNotFoundException(innerText);
      }
      XmlNode attribute4 = (XmlNode) node.Attributes["is_player"];
      if (attribute4 != null)
        this.IsPlayer = Convert.ToBoolean(attribute4.InnerText);
      XmlNode attribute5 = (XmlNode) node.Attributes["is_repeatable"];
      if (attribute5 != null)
        this.IsRepeatable = Convert.ToBoolean(attribute5.InnerText);
      XmlNode attribute6 = (XmlNode) node.Attributes["is_speacial_option"];
      if (attribute6 != null)
        this.IsSpecial = Convert.ToBoolean(attribute6.InnerText);
      XmlNode attribute7 = (XmlNode) node.Attributes["text"];
      if (attribute7 != null)
        this.Text = new TextObject(attribute7.InnerText);
      XmlNode attribute8 = (XmlNode) node.Attributes["istate"];
      if (attribute8 != null)
        this.InputToken = conversationManager.GetStateIndex(attribute8.InnerText);
      XmlNode attribute9 = (XmlNode) node.Attributes["ostate"];
      if (attribute9 != null)
        this.OutputToken = conversationManager.GetStateIndex(attribute9.InnerText);
      XmlNode attribute10 = (XmlNode) node.Attributes["priority"];
      this.Priority = attribute10 != null ? int.Parse(attribute10.InnerText) : defaultPriority;
    }

    public static object CurrentProcessedRepeatObject
    {
      get => Campaign.Current.ConversationManager.GetCurrentProcessedRepeatObject();
    }

    public static object SelectedRepeatObject
    {
      get => Campaign.Current.ConversationManager.GetSelectedRepeatObject();
    }

    public static TextObject SelectedRepeatLine
    {
      get => Campaign.Current.ConversationManager.GetCurrentDialogLine();
    }

    public static void SetObjectsToRepeatOver(
      IReadOnlyList<object> objectsToRepeatOver,
      int maxRepeatedDialogsInConversation = 5)
    {
      Campaign.Current.ConversationManager.SetDialogRepeatCount(objectsToRepeatOver, maxRepeatedDialogsInConversation);
    }

    public enum DialogLineFlags
    {
      PlayerLine = 1,
      RepeatForObjects = 2,
      SpecialLine = 4,
    }

    public delegate bool OnConditionDelegate();

    public delegate bool OnClickableConditionDelegate(out TextObject explanation);

    public delegate PersuasionOptionArgs OnPersuasionOptionDelegate();

    public delegate void OnConsequenceDelegate();

    public delegate bool OnMultipleConversationConsequenceDelegate(IAgent agent);
  }
}
