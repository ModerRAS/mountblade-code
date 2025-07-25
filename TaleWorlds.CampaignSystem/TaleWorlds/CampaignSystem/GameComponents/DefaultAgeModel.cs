// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultAgeModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultAgeModel : AgeModel
  {
    public const string TavernVisitorTag = "TavernVisitor";
    public const string TavernDrinkerTag = "TavernDrinker";
    public const string SlowTownsmanTag = "SlowTownsman";
    public const string TownsfolkCarryingStuffTag = "TownsfolkCarryingStuff";
    public const string BroomsWomanTag = "BroomsWoman";
    public const string DancerTag = "Dancer";
    public const string BeggarTag = "Beggar";
    public const string ChildTag = "Child";
    public const string TeenagerTag = "Teenager";
    public const string InfantTag = "Infant";
    public const string NotaryTag = "Notary";
    public const string BarberTag = "Barber";
    public const string AlleyGangMemberTag = "AlleyGangMember";

    public override int BecomeInfantAge => 3;

    public override int BecomeChildAge => 6;

    public override int BecomeTeenagerAge => 14;

    public override int HeroComesOfAge => 18;

    public override int BecomeOldAge => 47;

    public override int MaxAge => 128;

    public override void GetAgeLimitForLocation(
      CharacterObject character,
      out int minimumAge,
      out int maximumAge,
      string additionalTags = "")
    {
      if (character.Occupation == Occupation.TavernWench)
      {
        minimumAge = 20;
        maximumAge = 28;
      }
      else if (character.Occupation == Occupation.Townsfolk)
      {
        switch (additionalTags)
        {
          case "TavernVisitor":
            minimumAge = 20;
            maximumAge = 60;
            break;
          case "TavernDrinker":
            minimumAge = 20;
            maximumAge = 40;
            break;
          case "SlowTownsman":
            minimumAge = 50;
            maximumAge = 70;
            break;
          case "TownsfolkCarryingStuff":
            minimumAge = 20;
            maximumAge = 40;
            break;
          case "BroomsWoman":
            minimumAge = 30;
            maximumAge = 45;
            break;
          case "Dancer":
            minimumAge = 20;
            maximumAge = 28;
            break;
          case "Beggar":
            minimumAge = 60;
            maximumAge = 90;
            break;
          case "Child":
            minimumAge = this.BecomeChildAge;
            maximumAge = this.BecomeTeenagerAge;
            break;
          case "Teenager":
            minimumAge = this.BecomeTeenagerAge;
            maximumAge = this.HeroComesOfAge;
            break;
          case "Infant":
            minimumAge = this.BecomeInfantAge;
            maximumAge = this.BecomeChildAge;
            break;
          case "Notary":
          case "Barber":
            minimumAge = 30;
            maximumAge = 80;
            break;
          default:
            minimumAge = this.HeroComesOfAge;
            maximumAge = 70;
            break;
        }
      }
      else if (character.Occupation == Occupation.Villager)
      {
        switch (additionalTags)
        {
          case "TownsfolkCarryingStuff":
            minimumAge = 20;
            maximumAge = 40;
            break;
          case "Child":
            minimumAge = this.BecomeChildAge;
            maximumAge = this.BecomeTeenagerAge;
            break;
          case "Teenager":
            minimumAge = this.BecomeTeenagerAge;
            maximumAge = this.HeroComesOfAge;
            break;
          case "Infant":
            minimumAge = this.BecomeInfantAge;
            maximumAge = this.BecomeChildAge;
            break;
          default:
            minimumAge = this.HeroComesOfAge;
            maximumAge = 70;
            break;
        }
      }
      else if (character.Occupation == Occupation.TavernGameHost)
      {
        minimumAge = 30;
        maximumAge = 40;
      }
      else if (character.Occupation == Occupation.Musician)
      {
        minimumAge = 20;
        maximumAge = 40;
      }
      else if (character.Occupation == Occupation.ArenaMaster)
      {
        minimumAge = 30;
        maximumAge = 60;
      }
      else if (character.Occupation == Occupation.ShopWorker)
      {
        minimumAge = 18;
        maximumAge = 50;
      }
      else if (character.Occupation == Occupation.Tavernkeeper)
      {
        minimumAge = 40;
        maximumAge = 80;
      }
      else if (character.Occupation == Occupation.RansomBroker)
      {
        minimumAge = 30;
        maximumAge = 60;
      }
      else if (character.Occupation == Occupation.Blacksmith || character.Occupation == Occupation.GoodsTrader || character.Occupation == Occupation.HorseTrader || character.Occupation == Occupation.Armorer || character.Occupation == Occupation.Weaponsmith)
      {
        minimumAge = 30;
        maximumAge = 80;
      }
      else if (additionalTags == "AlleyGangMember")
      {
        minimumAge = 30;
        maximumAge = 40;
      }
      else
      {
        minimumAge = this.HeroComesOfAge;
        maximumAge = this.MaxAge;
      }
    }

    public override float GetSkillScalingModifierForAge(
      Hero hero,
      SkillObject skill,
      bool isByNaturalGrowth)
    {
      if (!isByNaturalGrowth)
        return 1f;
      float age = hero.Age;
      float scalingModifierForAge = 0.0f;
      if ((double) age >= (double) this.BecomeChildAge && (double) age < (double) this.BecomeTeenagerAge)
        scalingModifierForAge = 0.2f;
      else if ((double) age >= (double) this.BecomeTeenagerAge && (double) age < (double) this.HeroComesOfAge)
        scalingModifierForAge = 0.5f;
      else if ((double) age >= (double) this.HeroComesOfAge)
        scalingModifierForAge = skill != DefaultSkills.Riding ? 0.8f : 1f;
      return scalingModifierForAge;
    }
  }
}
