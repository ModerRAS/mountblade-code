// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.DialogFlowLine
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  internal class DialogFlowLine
  {
    internal TextObject Text;
    internal string InputToken;
    internal string OutputToken;
    internal bool ByPlayer;
    internal ConversationSentence.OnConditionDelegate ConditionDelegate;
    internal ConversationSentence.OnClickableConditionDelegate ClickableConditionDelegate;
    internal ConversationSentence.OnConsequenceDelegate ConsequenceDelegate;
    internal ConversationSentence.OnMultipleConversationConsequenceDelegate SpeakerDelegate;
    internal ConversationSentence.OnMultipleConversationConsequenceDelegate ListenerDelegate;
    internal bool IsRepeatable;
    internal bool IsSpecialOption;

    public List<KeyValuePair<TextObject, List<GameTextManager.ChoiceTag>>> Variations { private set; get; }

    public bool HasVariation => this.Variations.Count > 0;

    internal DialogFlowLine()
    {
      this.Variations = new List<KeyValuePair<TextObject, List<GameTextManager.ChoiceTag>>>();
    }

    public void AddVariation(TextObject text, List<GameTextManager.ChoiceTag> list)
    {
      this.Variations.Add(new KeyValuePair<TextObject, List<GameTextManager.ChoiceTag>>(text, list));
    }
  }
}
