// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterDevelopment.DefaultTraits
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterDevelopment
{
  public class DefaultTraits
  {
    private const int MaxPersonalityTraitValue = 2;
    private const int MinPersonalityTraitValue = -2;
    private const int MaxHiddenTraitValue = 20;
    private const int MinHiddenTraitValue = 0;
    private TraitObject _traitMercy;
    private TraitObject _traitValor;
    private TraitObject _traitHonor;
    private TraitObject _traitGenerosity;
    private TraitObject _traitCalculating;
    private TraitObject _traitPersonaCurt;
    private TraitObject _traitPersonaEarnest;
    private TraitObject _traitPersonaIronic;
    private TraitObject _traitPersonaSoftspoken;
    private TraitObject _traitEgalitarian;
    private TraitObject _traitOligarchic;
    private TraitObject _traitAuthoritarian;
    private TraitObject _traitSurgery;
    private TraitObject _traitTracking;
    private TraitObject _traitSergeantCommandSkills;
    private TraitObject _traitRogueSkills;
    private TraitObject _traitEngineerSkills;
    private TraitObject _traitBlacksmith;
    private TraitObject _traitScoutSkills;
    private TraitObject _traitTraderSkills;
    private TraitObject _traitScarred;
    private TraitObject _traitRomanHair;
    private TraitObject _traitCelticHair;
    private TraitObject _traitRusHair;
    private TraitObject _traitArabianHair;
    private TraitObject _traitFrankishHair;
    private TraitObject _traitSteppeHair;
    private TraitObject _traitFrequency;
    private TraitObject _traitCommander;
    private TraitObject _traitFighter;
    private TraitObject _traitPolitician;
    private TraitObject _traitManager;
    private TraitObject _traitKnightFightingSkills;
    private TraitObject _traitCavalryFightingSkills;
    private TraitObject _traitHorseArcherFightingSkills;
    private TraitObject _traitArcherFIghtingSkills;
    private TraitObject _traitCrossbowmanStyle;
    private TraitObject _traitPeltastFightingSkills;
    private TraitObject _traitHopliteFightingSkills;
    private TraitObject _traitHuscarlFightingSkills;
    private TraitObject _traitWandererEquipment;
    private TraitObject _traitGentryEquipment;
    private TraitObject _traitThug;
    private TraitObject _traitSmuggler;
    private readonly TraitObject[] _personality;
    private readonly TraitObject[] _skillCategories;

    private static DefaultTraits Instance => Campaign.Current.DefaultTraits;

    public static TraitObject Frequency => DefaultTraits.Instance._traitFrequency;

    public static TraitObject Mercy => DefaultTraits.Instance._traitMercy;

    public static TraitObject Valor => DefaultTraits.Instance._traitValor;

    public static TraitObject Honor => DefaultTraits.Instance._traitHonor;

    public static TraitObject Generosity => DefaultTraits.Instance._traitGenerosity;

    public static TraitObject Calculating => DefaultTraits.Instance._traitCalculating;

    public static TraitObject PersonaCurt => DefaultTraits.Instance._traitPersonaCurt;

    public static TraitObject PersonaEarnest => DefaultTraits.Instance._traitPersonaEarnest;

    public static TraitObject PersonaIronic => DefaultTraits.Instance._traitPersonaIronic;

    public static TraitObject PersonaSoftspoken => DefaultTraits.Instance._traitPersonaSoftspoken;

    public static TraitObject Surgery => DefaultTraits.Instance._traitSurgery;

    public static TraitObject SergeantCommandSkills
    {
      get => DefaultTraits.Instance._traitSergeantCommandSkills;
    }

    public static TraitObject RogueSkills => DefaultTraits.Instance._traitRogueSkills;

    public static TraitObject Siegecraft => DefaultTraits.Instance._traitEngineerSkills;

    public static TraitObject ScoutSkills => DefaultTraits.Instance._traitScoutSkills;

    public static TraitObject Blacksmith => DefaultTraits.Instance._traitBlacksmith;

    public static TraitObject Fighter => DefaultTraits.Instance._traitFighter;

    public static TraitObject Commander => DefaultTraits.Instance._traitCommander;

    public static TraitObject Politician => DefaultTraits.Instance._traitPolitician;

    public static TraitObject Manager => DefaultTraits.Instance._traitManager;

    public static TraitObject Trader => DefaultTraits.Instance._traitTraderSkills;

    public static TraitObject KnightFightingSkills
    {
      get => DefaultTraits.Instance._traitKnightFightingSkills;
    }

    public static TraitObject CavalryFightingSkills
    {
      get => DefaultTraits.Instance._traitCavalryFightingSkills;
    }

    public static TraitObject HorseArcherFightingSkills
    {
      get => DefaultTraits.Instance._traitHorseArcherFightingSkills;
    }

    public static TraitObject HopliteFightingSkills
    {
      get => DefaultTraits.Instance._traitHopliteFightingSkills;
    }

    public static TraitObject ArcherFIghtingSkills
    {
      get => DefaultTraits.Instance._traitArcherFIghtingSkills;
    }

    public static TraitObject CrossbowmanStyle => DefaultTraits.Instance._traitCrossbowmanStyle;

    public static TraitObject PeltastFightingSkills
    {
      get => DefaultTraits.Instance._traitPeltastFightingSkills;
    }

    public static TraitObject HuscarlFightingSkills
    {
      get => DefaultTraits.Instance._traitHuscarlFightingSkills;
    }

    public static TraitObject WandererEquipment => DefaultTraits.Instance._traitWandererEquipment;

    public static TraitObject GentryEquipment => DefaultTraits.Instance._traitGentryEquipment;

    public static TraitObject RomanHair => DefaultTraits.Instance._traitRomanHair;

    public static TraitObject FrankishHair => DefaultTraits.Instance._traitFrankishHair;

    public static TraitObject CelticHair => DefaultTraits.Instance._traitCelticHair;

    public static TraitObject RusHair => DefaultTraits.Instance._traitRusHair;

    public static TraitObject ArabianHair => DefaultTraits.Instance._traitArabianHair;

    public static TraitObject SteppeHair => DefaultTraits.Instance._traitSteppeHair;

    public static TraitObject Thug => DefaultTraits.Instance._traitThug;

    public static TraitObject Smuggler => DefaultTraits.Instance._traitSmuggler;

    public static TraitObject Egalitarian => DefaultTraits.Instance._traitEgalitarian;

    public static TraitObject Oligarchic => DefaultTraits.Instance._traitOligarchic;

    public static TraitObject Authoritarian => DefaultTraits.Instance._traitAuthoritarian;

    public static IEnumerable<TraitObject> Personality
    {
      get => (IEnumerable<TraitObject>) DefaultTraits.Instance._personality;
    }

    public static IEnumerable<TraitObject> SkillCategories
    {
      get => (IEnumerable<TraitObject>) DefaultTraits.Instance._skillCategories;
    }

    public DefaultTraits()
    {
      this.RegisterAll();
      this._personality = new TraitObject[5]
      {
        this._traitMercy,
        this._traitValor,
        this._traitHonor,
        this._traitGenerosity,
        this._traitCalculating
      };
      this._skillCategories = new TraitObject[4]
      {
        this._traitCommander,
        this._traitFighter,
        this._traitPolitician,
        this._traitManager
      };
    }

    public void RegisterAll()
    {
      this._traitFrequency = this.Create("Frequency");
      this._traitMercy = this.Create("Mercy");
      this._traitValor = this.Create("Valor");
      this._traitHonor = this.Create("Honor");
      this._traitGenerosity = this.Create("Generosity");
      this._traitCalculating = this.Create("Calculating");
      this._traitPersonaCurt = this.Create("curt");
      this._traitPersonaIronic = this.Create("ironic");
      this._traitPersonaEarnest = this.Create("earnest");
      this._traitPersonaSoftspoken = this.Create("softspoken");
      this._traitCommander = this.Create("Commander");
      this._traitFighter = this.Create("BalancedFightingSkills");
      this._traitPolitician = this.Create("Politician");
      this._traitManager = this.Create("Manager");
      this._traitTraderSkills = this.Create("Trader");
      this._traitSurgery = this.Create("Surgeon");
      this._traitTracking = this.Create("Tracking");
      this._traitBlacksmith = this.Create("Blacksmith");
      this._traitSergeantCommandSkills = this.Create("SergeantCommandSkills");
      this._traitEngineerSkills = this.Create("EngineerSkills");
      this._traitRogueSkills = this.Create("RogueSkills");
      this._traitScoutSkills = this.Create("ScoutSkills");
      this._traitKnightFightingSkills = this.Create("KnightFightingSkills");
      this._traitCavalryFightingSkills = this.Create("CavalryFightingSkills");
      this._traitHorseArcherFightingSkills = this.Create("HorseArcherFightingSkills");
      this._traitHopliteFightingSkills = this.Create("HopliteFightingSkills");
      this._traitArcherFIghtingSkills = this.Create("ArcherFIghtingSkills");
      this._traitCrossbowmanStyle = this.Create("CrossbowmanStyle");
      this._traitPeltastFightingSkills = this.Create("PeltastFightingSkills");
      this._traitHuscarlFightingSkills = this.Create("HuscarlFightingSkills");
      this._traitScarred = this.Create("Scarred");
      this._traitRomanHair = this.Create("RomanHair");
      this._traitCelticHair = this.Create("CelticHair");
      this._traitArabianHair = this.Create("ArabianHair");
      this._traitRusHair = this.Create("RusHair");
      this._traitFrankishHair = this.Create("FrankishHair");
      this._traitSteppeHair = this.Create("SteppeHair");
      this._traitWandererEquipment = this.Create("WandererEquipment");
      this._traitGentryEquipment = this.Create("GentryEquipment");
      this._traitThug = this.Create("Thug");
      this._traitSmuggler = this.Create("Smuggler");
      this._traitEgalitarian = this.Create("Egalitarian");
      this._traitOligarchic = this.Create("Oligarchic");
      this._traitAuthoritarian = this.Create("Authoritarian");
      this.InitializeAll();
    }

    private TraitObject Create(string stringId)
    {
      return Game.Current.ObjectManager.RegisterPresumedObject<TraitObject>(new TraitObject(stringId));
    }

    private void InitializeAll()
    {
      this._traitFrequency.Initialize(new TextObject("{=vsoyhPnl}Frequency"), new TextObject("{=!}Frequency Description"), true, 0, 20);
      this._traitMercy.Initialize(new TextObject("{=2I2uKJlw}Mercy"), new TextObject("{=Au7VCWTa}Mercy represents your general aversion to suffering and your willingness to help strangers or even enemies."), false, -2, 2);
      this._traitValor.Initialize(new TextObject("{=toQLHG6x}Valor"), new TextObject("{=Ugm9nO49}Valor represents your reputation for risking your life to win glory or wealth or advance your cause."), false, -2, 2);
      this._traitHonor.Initialize(new TextObject("{=0oGz5rVx}Honor"), new TextObject("{=1vYgkaaK}Honor represents your reputation for respecting your formal commitments, like keeping your word and obeying the law."), false, -2, 2);
      this._traitGenerosity.Initialize(new TextObject("{=IuWu5Bu7}Generosity"), new TextObject("{=IKzqzPDS}Generosity represents your loyalty to your kin and those who serve you, and your gratitude to those who have done you a favor."), false, -2, 2);
      this._traitCalculating.Initialize(new TextObject("{=5sMBbn7y}Calculating"), new TextObject("{=QKjF5gTR}Calculating represents your ability to control your emotions for the sake of your long-term interests."), false, -2, 2);
      this._traitPersonaCurt.Initialize(new TextObject("{=!}PersonaCurt"), new TextObject("{=!}PersonaCurt Description"), false, -2, 2);
      this._traitPersonaIronic.Initialize(new TextObject("{=!}PersonaIronic"), new TextObject("{=!}PersonaIronic Description"), false, -2, 2);
      this._traitPersonaEarnest.Initialize(new TextObject("{=!}PersonaEarnest"), new TextObject("{=!}PersonaEarnest Description"), false, -2, 2);
      this._traitPersonaSoftspoken.Initialize(new TextObject("{=!}PersonaSoftspoken"), new TextObject("{=!}PersonaSoftspoken Description"), false, -2, 2);
      this._traitCommander.Initialize(new TextObject("{=RvKwdXWs}Commander"), new TextObject("{=!}Commander Description"), true, 0, 20);
      this._traitFighter.Initialize(new TextObject("{=!}BalancedFightingSkills"), new TextObject("{=!}BalancedFightingSkills Description"), true, 0, 20);
      this._traitPolitician.Initialize(new TextObject("{=4Ybbhzjw}Politician"), new TextObject("{=!}Politician Description"), true, 0, 20);
      this._traitManager.Initialize(new TextObject("{=6RYVOb0c}Manager"), new TextObject("{=!}Manager Description"), true, 0, 20);
      this._traitSurgery.Initialize(new TextObject("{=QBPrRdQJ}Surgeon"), new TextObject("{=!}Surgeon Description"), true, 0, 20);
      this._traitTracking.Initialize(new TextObject("{=dx0hmeH6}Tracking"), new TextObject("{=!}Tracking Description"), true, 0, 20);
      this._traitBlacksmith.Initialize(new TextObject("{=bNnQt4jN}Blacksmith"), new TextObject("{=!}Blacksmith Description"), true, 0, 20);
      this._traitSergeantCommandSkills.Initialize(new TextObject("{=!}SergeantCommandSkills"), new TextObject("{=!}SergeantCommandSkills Description"), true, 0, 20);
      this._traitEngineerSkills.Initialize(new TextObject("{=!}EngineerSkills"), new TextObject("{=!}EngineerSkills Description"), true, 0, 20);
      this._traitRogueSkills.Initialize(new TextObject("{=!}RogueSkills"), new TextObject("{=!}RogueSkills Description"), true, 0, 20);
      this._traitScoutSkills.Initialize(new TextObject("{=!}ScoutSkills"), new TextObject("{=!}ScoutSkills Description"), true, 0, 20);
      this._traitTraderSkills.Initialize(new TextObject("{=!}TraderSkills"), new TextObject("{=!}Trader Description"), true, 0, 20);
      this._traitKnightFightingSkills.Initialize(new TextObject("{=!}KnightFightingSkills"), new TextObject("{=!}KnightFightingSkills Description"), true, 0, 20);
      this._traitCavalryFightingSkills.Initialize(new TextObject("{=!}CavalryFightingSkills"), new TextObject("{=!}CavalryFightingSkills Description"), true, 0, 20);
      this._traitHorseArcherFightingSkills.Initialize(new TextObject("{=!}HorseArcherFightingSkills"), new TextObject("{=!}HorseArcherFightingSkills Description"), true, 0, 20);
      this._traitHopliteFightingSkills.Initialize(new TextObject("{=!}HopliteFightingSkills"), new TextObject("{=!}HopliteFightingSkills Description"), true, 0, 20);
      this._traitArcherFIghtingSkills.Initialize(new TextObject("{=!}ArcherFIghtingSkills"), new TextObject("{=!}ArcherFIghtingSkills Description"), true, 0, 20);
      this._traitCrossbowmanStyle.Initialize(new TextObject("{=!}CrossbowmanStyle"), new TextObject("{=!}CrossbowmanStyle Description"), true, 0, 20);
      this._traitPeltastFightingSkills.Initialize(new TextObject("{=!}PeltastFightingSkills"), new TextObject("{=!}PeltastFightingSkills Description"), true, 0, 20);
      this._traitHuscarlFightingSkills.Initialize(new TextObject("{=!}HuscarlFightingSkills"), new TextObject("{=!}HuscarlFightingSkills Description"), true, 0, 20);
      this._traitScarred.Initialize(new TextObject("{=!}Scarred"), new TextObject("{=!}Scarred Description"), true, 0, 20);
      this._traitRomanHair.Initialize(new TextObject("{=!}RomanHair"), new TextObject("{=!}RomanHair Description"), true, 0, 20);
      this._traitCelticHair.Initialize(new TextObject("{=!}CelticHair"), new TextObject("{=!}CelticHair Description"), true, 0, 20);
      this._traitArabianHair.Initialize(new TextObject("{=!}ArabianHair"), new TextObject("{=!}ArabianHair Description"), true, 0, 20);
      this._traitRusHair.Initialize(new TextObject("{=!}RusHair"), new TextObject("{=!}RusHair Description"), true, 0, 20);
      this._traitFrankishHair.Initialize(new TextObject("{=!}FrankishHair"), new TextObject("{=!}FrankishHair Description"), true, 0, 20);
      this._traitSteppeHair.Initialize(new TextObject("{=!}SteppeHair"), new TextObject("{=!}SteppeHair Description"), true, 0, 20);
      this._traitWandererEquipment.Initialize(new TextObject("{=!}WandererEquipment"), new TextObject("{=!}WandererEquipment Description"), true, 0, 20);
      this._traitGentryEquipment.Initialize(new TextObject("{=!}GentryEquipment"), new TextObject("{=!}GentryEquipment Description"), true, 0, 20);
      this._traitThug.Initialize(new TextObject("{=thugtrait}Thug"), new TextObject("{=Fjnw9ooa}Indicates a gang member specialized in extortion"), true, 0, 20);
      this._traitSmuggler.Initialize(new TextObject("{=eeWx1yYd}Smuggler"), new TextObject("{=87c7IhkZ}Indicates a gang member specialized in smuggling"), true, 0, 20);
      this._traitEgalitarian.Initialize(new TextObject("{=HMFb1gaq}Egalitarian"), new TextObject("{=!}Egalitarian Description"), false, 0, 20);
      this._traitOligarchic.Initialize(new TextObject("{=hR6Zo6pD}Oligarchic"), new TextObject("{=!}Oligarchic Description"), false, 0, 20);
      this._traitAuthoritarian.Initialize(new TextObject("{=NaMPa4ML}Authoritarian"), new TextObject("{=!}Authoritarian Description"), false, 0, 20);
    }
  }
}
