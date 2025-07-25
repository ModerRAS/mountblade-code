// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.PrisonerRecruitmentCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class PrisonerRecruitmentCalculationModel : GameModel
  {
    public abstract int GetConformityNeededToRecruitPrisoner(CharacterObject character);

    public abstract int GetConformityChangePerHour(PartyBase party, CharacterObject character);

    public abstract int GetPrisonerRecruitmentMoraleEffect(
      PartyBase party,
      CharacterObject character,
      int num);

    public abstract bool IsPrisonerRecruitable(
      PartyBase party,
      CharacterObject character,
      out int conformityNeeded);

    public abstract bool ShouldPartyRecruitPrisoners(PartyBase party);

    public abstract int CalculateRecruitableNumber(PartyBase party, CharacterObject character);
  }
}
