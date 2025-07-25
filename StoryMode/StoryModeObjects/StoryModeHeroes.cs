// Decompiled with JetBrains decompiler
// Type: StoryMode.StoryModeObjects.StoryModeHeroes
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace StoryMode.StoryModeObjects
{
  public class StoryModeHeroes
  {
    private const string BrotherStringId = "tutorial_npc_brother";
    private const string LittleBrotherStringId = "storymode_little_brother";
    private const string LittleSisterStringId = "storymode_little_sister";
    private const string TacitusStringId = "tutorial_npc_tacitus";
    private const string RadagosStringId = "tutorial_npc_radagos";
    private const string IstianaStringId = "storymode_imperial_mentor_istiana";
    private const string ArzagosStringId = "storymode_imperial_mentor_arzagos";
    private const string GalterStringId = "radagos_henchman";
    private Hero _elderBrother;
    private Hero _littleBrother;
    private Hero _littleSister;
    private Hero _tacitus;
    private Hero _radagos;
    private Hero _imperialMentor;
    private Hero _antiImperialMentor;
    private Hero _radagosHenchman;

    public static Hero ElderBrother => StoryModeManager.Current.StoryModeHeroes._elderBrother;

    public static Hero LittleBrother => StoryModeManager.Current.StoryModeHeroes._littleBrother;

    public static Hero LittleSister => StoryModeManager.Current.StoryModeHeroes._littleSister;

    public static Hero Tacitus => StoryModeManager.Current.StoryModeHeroes._tacitus;

    public static Hero Radagos => StoryModeManager.Current.StoryModeHeroes._radagos;

    public static Hero ImperialMentor => StoryModeManager.Current.StoryModeHeroes._imperialMentor;

    public static Hero AntiImperialMentor
    {
      get => StoryModeManager.Current.StoryModeHeroes._antiImperialMentor;
    }

    public static Hero RadagosHencman => StoryModeManager.Current.StoryModeHeroes._radagosHenchman;

    internal StoryModeHeroes() => this.RegisterAll();

    private void RegisterAll()
    {
      Clan clan = Campaign.Current.CampaignObjectManager.Find<Clan>("player_faction");
      CharacterObject characterObject1 = Game.Current.ObjectManager.GetObject<CharacterObject>("main_hero_mother");
      CharacterObject characterObject2 = Game.Current.ObjectManager.GetObject<CharacterObject>("main_hero_father");
      if (HeroCreator.CreateBasicHero(MBObjectManager.Instance.GetObject<CharacterObject>("tutorial_npc_brother"), out this._elderBrother, "tutorial_npc_brother"))
      {
        this._elderBrother.Clan = clan;
        TextObject text = GameTexts.FindText("str_player_brother_name", characterObject1.Culture.StringId);
        this._elderBrother.SetName(text, text);
        this._elderBrother.Mother = characterObject1.HeroObject;
        this._elderBrother.Father = characterObject2.HeroObject;
      }
      if (HeroCreator.CreateBasicHero(MBObjectManager.Instance.GetObject<CharacterObject>("storymode_little_brother"), out this._littleBrother, "storymode_little_brother"))
      {
        TextObject text = GameTexts.FindText("str_player_little_brother_name", characterObject1.Culture.StringId);
        this._littleBrother.SetName(text, text);
        this._littleBrother.Mother = characterObject1.HeroObject;
        this._littleBrother.Father = characterObject2.HeroObject;
      }
      if (HeroCreator.CreateBasicHero(MBObjectManager.Instance.GetObject<CharacterObject>("storymode_little_sister"), out this._littleSister, "storymode_little_sister"))
      {
        TextObject text = GameTexts.FindText("str_player_little_sister_name", characterObject1.Culture.StringId);
        this._littleSister.SetName(text, text);
        this._littleSister.Mother = characterObject1.HeroObject;
        this._littleSister.Father = characterObject2.HeroObject;
      }
      HeroCreator.CreateBasicHero(MBObjectManager.Instance.GetObject<CharacterObject>("tutorial_npc_tacitus"), out this._tacitus, "tutorial_npc_tacitus");
      HeroCreator.CreateBasicHero(MBObjectManager.Instance.GetObject<CharacterObject>("tutorial_npc_radagos"), out this._radagos, "tutorial_npc_radagos");
      HeroCreator.CreateBasicHero(MBObjectManager.Instance.GetObject<CharacterObject>("storymode_imperial_mentor_istiana"), out this._imperialMentor, "storymode_imperial_mentor_istiana");
      HeroCreator.CreateBasicHero(MBObjectManager.Instance.GetObject<CharacterObject>("storymode_imperial_mentor_arzagos"), out this._antiImperialMentor, "storymode_imperial_mentor_arzagos");
      HeroCreator.CreateBasicHero(MBObjectManager.Instance.GetObject<CharacterObject>("radagos_henchman"), out this._radagosHenchman, "radagos_henchman");
    }
  }
}
