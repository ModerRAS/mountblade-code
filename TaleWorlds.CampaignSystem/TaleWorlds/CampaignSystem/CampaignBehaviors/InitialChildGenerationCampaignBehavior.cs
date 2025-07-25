// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.InitialChildGenerationCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class InitialChildGenerationCampaignBehavior : CampaignBehaviorBase
  {
    private const float FemaleChildrenChance = 0.49f;

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUp));
    }

    private void OnNewGameCreatedPartialFollowUp(CampaignGameStarter starter, int index)
    {
      if (index != 0)
        return;
      foreach (Clan clan1 in (List<Clan>) Clan.All)
      {
        Clan clan = clan1;
        if (!clan.IsBanditFaction && !clan.IsMinorFaction && !clan.IsEliminated && clan != Clan.PlayerClan)
        {
          List<Hero> heroList = new List<Hero>();
          MBList<Hero> e1 = new MBList<Hero>();
          MBList<Hero> e2 = new MBList<Hero>();
          foreach (Hero lord in (List<Hero>) clan.Lords)
          {
            if (lord.IsAlive)
            {
              if (lord.IsChild)
                heroList.Add(lord);
              else if (lord.IsFemale)
                e1.Add(lord);
              else
                e2.Add(lord);
            }
          }
          int num1 = MathF.Ceiling((float) (e2.Count + e1.Count) / 2f) - heroList.Count;
          float num2 = 0.49f;
          if (e2.Count == 0)
            num2 = -1f;
          for (int index1 = 0; index1 < num1; ++index1)
          {
            bool isFemale = (double) MBRandom.RandomFloat <= (double) num2;
            Hero hero = isFemale ? e1.GetRandomElement<Hero>() : e2.GetRandomElement<Hero>();
            if (hero == null)
            {
              MBList<Clan> mbList = Clan.NonBanditFactions.Where<Clan>((Func<Clan, bool>) (t => t != clan && t.Culture == clan.Culture)).ToMBList<Clan>();
              for (int index2 = 0; index2 < 10; ++index2)
              {
                hero = mbList.GetRandomElement<Clan>().Lords.Where<Hero>((Func<Hero, bool>) (t => t.IsAlive && t.IsFemale == isFemale)).ToMBList<Hero>().GetRandomElement<Hero>();
                if (hero != null)
                  break;
              }
            }
            if (hero != null)
            {
              int age = MBRandom.RandomInt(2, 18);
              Hero specialHero = HeroCreator.CreateSpecialHero(hero.CharacterObject, clan.HomeSettlement, clan, age: age);
              specialHero.UpdateHomeSettlement();
              specialHero.HeroDeveloper.InitializeHeroDeveloper(true);
              MBEquipmentRoster elementInefficiently = Campaign.Current.Models.EquipmentSelectionModel.GetEquipmentRostersForInitialChildrenGeneration(specialHero).GetRandomElementInefficiently<MBEquipmentRoster>();
              if (elementInefficiently != null)
              {
                Equipment civilianEquipment = elementInefficiently.GetRandomCivilianEquipment();
                EquipmentHelper.AssignHeroEquipmentFromEquipment(specialHero, civilianEquipment);
                Equipment equipment = new Equipment(false);
                equipment.FillFrom(civilianEquipment, false);
                EquipmentHelper.AssignHeroEquipmentFromEquipment(specialHero, equipment);
              }
            }
            if ((double) num2 <= 0.0)
              num2 = 0.49f;
          }
        }
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
