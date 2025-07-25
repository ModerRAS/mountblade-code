// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.PartyWageModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class PartyWageModel : GameModel
  {
    public abstract int MaxWage { get; }

    public abstract int GetCharacterWage(CharacterObject character);

    public abstract ExplainedNumber GetTotalWage(MobileParty mobileParty, bool includeDescriptions = false);

    public abstract int GetTroopRecruitmentCost(
      CharacterObject troop,
      Hero buyerHero,
      bool withoutItemCost = false);
  }
}
