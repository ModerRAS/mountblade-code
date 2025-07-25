// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.ConversationSentenceOption
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation
{
  public struct ConversationSentenceOption
  {
    public int SentenceNo;
    public string Id;
    public object RepeatObject;
    public TextObject Text;
    public string DebugInfo;
    public bool IsClickable;
    public bool HasPersuasion;
    public string SkillName;
    public string TraitName;
    public bool IsSpecial;
    public TextObject HintText;
    public PersuasionOptionArgs PersuationOptionArgs;
  }
}
