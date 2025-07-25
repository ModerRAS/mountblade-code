// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultInventoryCapacityModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultInventoryCapacityModel : InventoryCapacityModel
  {
    private const int _itemAverageWeight = 10;
    private const float TroopsFactor = 2f;
    private const float SpareMountsFactor = 2f;
    private const float PackAnimalsFactor = 10f;
    private static readonly TextObject _textTroops = new TextObject("{=5k4dxUEJ}Troops");
    private static readonly TextObject _textHorses = new TextObject("{=1B8ZDOLs}Horses");
    private static readonly TextObject _textBase = new TextObject("{=basevalue}Base");
    private static readonly TextObject _textSpareMounts = new TextObject("{=rCiKbsyW}Spare Mounts");
    private static readonly TextObject _textPackAnimals = new TextObject("{=dI1AOyqh}Pack Animals");

    public override int GetItemAverageWeight() => 10;

    public override ExplainedNumber CalculateInventoryCapacity(
      MobileParty mobileParty,
      bool includeDescriptions = false,
      int additionalTroops = 0,
      int additionalSpareMounts = 0,
      int additionalPackAnimals = 0,
      bool includeFollowers = false)
    {
      ExplainedNumber inventoryCapacity = new ExplainedNumber(includeDescriptions: includeDescriptions);
      PartyBase party = mobileParty.Party;
      int numberOfMounts = party.NumberOfMounts;
      int ofHealthyMembers = party.NumberOfHealthyMembers;
      int numberOfPackAnimals = party.NumberOfPackAnimals;
      if (includeFollowers)
      {
        foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.AttachedParties)
        {
          numberOfMounts += party.NumberOfMounts;
          ofHealthyMembers += party.NumberOfHealthyMembers;
          numberOfPackAnimals += party.NumberOfPackAnimals;
        }
      }
      if (mobileParty.HasPerk(DefaultPerks.Steward.ArenicosHorses))
        ofHealthyMembers += MathF.Round((float) ofHealthyMembers * DefaultPerks.Steward.ArenicosHorses.PrimaryBonus);
      if (mobileParty.HasPerk(DefaultPerks.Steward.ForcedLabor))
        ofHealthyMembers += party.PrisonRoster.TotalHealthyCount;
      inventoryCapacity.Add(10f, DefaultInventoryCapacityModel._textBase);
      inventoryCapacity.Add((float) ((double) ofHealthyMembers * 2.0 * 10.0), DefaultInventoryCapacityModel._textTroops);
      inventoryCapacity.Add((float) ((double) numberOfMounts * 2.0 * 10.0), DefaultInventoryCapacityModel._textSpareMounts);
      ExplainedNumber explainedNumber = new ExplainedNumber((float) ((double) numberOfPackAnimals * 10.0 * 10.0));
      if (mobileParty.HasPerk(DefaultPerks.Scouting.BeastWhisperer, true))
        explainedNumber.AddFactor(DefaultPerks.Scouting.BeastWhisperer.SecondaryBonus, DefaultPerks.Scouting.BeastWhisperer.Name);
      if (mobileParty.HasPerk(DefaultPerks.Riding.DeeperSacks))
        explainedNumber.AddFactor(DefaultPerks.Riding.DeeperSacks.PrimaryBonus, DefaultPerks.Riding.DeeperSacks.Name);
      if (mobileParty.HasPerk(DefaultPerks.Steward.ArenicosMules))
        explainedNumber.AddFactor(DefaultPerks.Steward.ArenicosMules.PrimaryBonus, DefaultPerks.Steward.ArenicosMules.Name);
      inventoryCapacity.Add(explainedNumber.ResultNumber, DefaultInventoryCapacityModel._textPackAnimals);
      if (mobileParty.HasPerk(DefaultPerks.Trade.CaravanMaster))
        inventoryCapacity.AddFactor(DefaultPerks.Trade.CaravanMaster.PrimaryBonus, DefaultPerks.Trade.CaravanMaster.Name);
      inventoryCapacity.LimitMin(10f);
      return inventoryCapacity;
    }
  }
}
