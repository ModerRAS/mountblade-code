// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.WaryTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class WaryTag : ConversationTag
  {
    public const string Id = "WaryTag";

    public override string StringId => nameof (WaryTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      if (!character.IsHero || character.HeroObject.MapFaction == Hero.MainHero.MapFaction || Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.SiegeEvent == null)
        return false;
      return Campaign.Current.ConversationManager.CurrentConversationIsFirst || FactionManager.IsAtWarAgainstFaction(character.HeroObject.MapFaction, Hero.MainHero.MapFaction);
    }
  }
}
