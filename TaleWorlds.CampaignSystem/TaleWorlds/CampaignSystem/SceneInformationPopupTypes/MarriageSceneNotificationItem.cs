// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.MarriageSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class MarriageSceneNotificationItem : SceneNotificationData
  {
    private const int NumberOfAudienceHeroes = 6;
    private readonly CampaignTime _creationCampaignTime;

    public Hero GroomHero { get; }

    public Hero BrideHero { get; }

    public override string SceneID => "scn_cutscene_wedding";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        Hero hero1 = this.GroomHero == Hero.MainHero ? this.GroomHero : this.BrideHero;
        Hero hero2 = hero1 == this.GroomHero ? this.BrideHero : this.GroomHero;
        GameTexts.SetVariable("FIRST_HERO", hero1.Name);
        GameTexts.SetVariable("SECOND_HERO", hero2.Name);
        return GameTexts.FindText("str_marriage_notification");
      }
    }

    public override SceneNotificationData.RelevantContextType RelevantContext { get; }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        this.GroomHero.Father != null ? this.GroomHero.Father.ClanBanner : this.GroomHero.ClanBanner,
        this.BrideHero.Father != null ? this.BrideHero.Father.ClanBanner : this.BrideHero.ClanBanner,
        this.GroomHero.Father != null ? this.GroomHero.Father.ClanBanner : this.GroomHero.ClanBanner,
        this.BrideHero.Father != null ? this.BrideHero.Father.ClanBanner : this.BrideHero.ClanBanner
      };
    }

    public override IEnumerable<SceneNotificationData.SceneNotificationCharacter> GetSceneNotificationCharacters()
    {
      List<SceneNotificationData.SceneNotificationCharacter> notificationCharacters = new List<SceneNotificationData.SceneNotificationCharacter>();
      Equipment equipment1 = this.GroomHero.CivilianEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment1);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.GroomHero, equipment1));
      Equipment equipment2 = MBObjectManager.Instance.GetObject<MBEquipmentRoster>(MarriageSceneNotificationItem.GetBrideEquipmentIDFromCulture(this.BrideHero.Culture)).DefaultEquipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment2);
      notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(this.BrideHero, equipment2));
      CharacterObject character = MBObjectManager.Instance.GetObject<CharacterObject>("cutscene_monk");
      Equipment equipment3 = character.Equipment.Clone();
      CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment3);
      notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) character, equipment3));
      List<Hero> audienceMembers = this.GetAudienceMembers(this.BrideHero, this.GroomHero);
      for (int index = 0; index < audienceMembers.Count; ++index)
      {
        Hero hero = audienceMembers[index];
        if (hero != null)
        {
          Equipment equipment4 = hero.CivilianEquipment.Clone();
          CampaignSceneNotificationHelper.RemoveWeaponsFromEquipment(ref equipment4);
          notificationCharacters.Add(CampaignSceneNotificationHelper.CreateNotificationCharacterFromHero(hero, equipment4));
        }
        else
          notificationCharacters.Add(new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) null));
      }
      return (IEnumerable<SceneNotificationData.SceneNotificationCharacter>) notificationCharacters;
    }

    public MarriageSceneNotificationItem(
      Hero groomHero,
      Hero brideHero,
      CampaignTime creationTime,
      SceneNotificationData.RelevantContextType relevantContextType = SceneNotificationData.RelevantContextType.Any)
    {
      this.GroomHero = groomHero;
      this.BrideHero = brideHero;
      this.RelevantContext = relevantContextType;
      this._creationCampaignTime = creationTime;
    }

    private List<Hero> GetAudienceMembers(Hero brideHero, Hero groomHero)
    {
      Queue<Hero> groomSide = new Queue<Hero>();
      Queue<Hero> brideSide = new Queue<Hero>();
      List<Hero> audienceMembers = new List<Hero>();
      Hero mother1 = groomHero.Mother;
      if ((mother1 != null ? (mother1.IsAlive ? 1 : 0) : 0) != 0)
        groomSide.Enqueue(groomHero.Mother);
      Hero father1 = groomHero.Father;
      if ((father1 != null ? (father1.IsAlive ? 1 : 0) : 0) != 0)
        groomSide.Enqueue(groomHero.Father);
      if (groomHero.Siblings != null)
      {
        foreach (Hero hero in groomHero.Siblings.Where<Hero>((Func<Hero, bool>) (s => s.IsAlive && !s.IsChild)))
          groomSide.Enqueue(hero);
      }
      if (groomHero.Children != null)
      {
        foreach (Hero hero in groomHero.Children.Where<Hero>((Func<Hero, bool>) (s => s.IsAlive && !s.IsChild)))
          groomSide.Enqueue(hero);
      }
      Hero mother2 = brideHero.Mother;
      if ((mother2 != null ? (mother2.IsAlive ? 1 : 0) : 0) != 0)
        brideSide.Enqueue(brideHero.Mother);
      Hero father2 = brideHero.Father;
      if ((father2 != null ? (father2.IsAlive ? 1 : 0) : 0) != 0)
        brideSide.Enqueue(brideHero.Father);
      if (brideHero.Siblings != null)
      {
        foreach (Hero hero in brideHero.Siblings.Where<Hero>((Func<Hero, bool>) (s => s.IsAlive && !s.IsChild)))
          brideSide.Enqueue(hero);
      }
      if (brideHero.Children != null)
      {
        foreach (Hero hero in brideHero.Children.Where<Hero>((Func<Hero, bool>) (s => s.IsAlive && !s.IsChild)))
          brideSide.Enqueue(hero);
      }
      if (groomSide.Count < 3)
      {
        foreach (Hero hero in Hero.AllAliveHeroes.Where<Hero>((Func<Hero, bool>) (h => h.IsLord && !h.IsChild && h != groomHero && h != brideHero && h.IsFriend(groomHero) && !brideSide.Contains(h))).Take<Hero>(MathF.Ceiling(3f - (float) groomSide.Count)))
          groomSide.Enqueue(hero);
      }
      if (brideSide.Count < 3)
      {
        foreach (Hero hero in Hero.AllAliveHeroes.Where<Hero>((Func<Hero, bool>) (h => h.IsLord && !h.IsChild && h != brideHero && h != groomHero && h.IsFriend(brideHero) && !groomSide.Contains(h))).Take<Hero>(MathF.Ceiling(3f - (float) brideSide.Count)))
          brideSide.Enqueue(hero);
      }
      for (int index = 0; index < 6; ++index)
      {
        Queue<Hero> heroQueue = (uint) index <= 1U || index == 4 ? brideSide : groomSide;
        if (heroQueue.Count > 0 && heroQueue.Peek() != null)
          audienceMembers.Add(heroQueue.Dequeue());
        else
          audienceMembers.Add((Hero) null);
      }
      return audienceMembers;
    }

    private static string GetBrideEquipmentIDFromCulture(CultureObject brideCulture)
    {
      switch (brideCulture.StringId)
      {
        case "empire":
          return "marriage_female_emp_cutscene_template";
        case "aserai":
          return "marriage_female_ase_cutscene_template";
        case "battania":
          return "marriage_female_bat_cutscene_template";
        case "khuzait":
          return "marriage_female_khu_cutscene_template";
        case "sturgia":
          return "marriage_female_stu_cutscene_template";
        case "vlandia":
          return "marriage_female_vla_cutscene_template";
        default:
          return "marriage_female_emp_cutscene_template";
      }
    }
  }
}
