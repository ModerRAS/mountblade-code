// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerClassDivisions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerClassDivisions
  {
    public static IEnumerable<BasicCultureObject> AvailableCultures;

    public static List<MultiplayerClassDivisions.MPHeroClassGroup> MultiplayerHeroClassGroups { get; private set; }

    public static IEnumerable<MultiplayerClassDivisions.MPHeroClass> GetMPHeroClasses(
      BasicCultureObject culture)
    {
      return MBObjectManager.Instance.GetObjectTypeList<MultiplayerClassDivisions.MPHeroClass>().Where<MultiplayerClassDivisions.MPHeroClass>((Func<MultiplayerClassDivisions.MPHeroClass, bool>) (x => x.Culture == culture));
    }

    public static MBReadOnlyList<MultiplayerClassDivisions.MPHeroClass> GetMPHeroClasses()
    {
      return MBObjectManager.Instance.GetObjectTypeList<MultiplayerClassDivisions.MPHeroClass>();
    }

    public static MultiplayerClassDivisions.MPHeroClass GetMPHeroClassForCharacter(
      BasicCharacterObject character)
    {
      return MBObjectManager.Instance.GetObjectTypeList<MultiplayerClassDivisions.MPHeroClass>().FirstOrDefault<MultiplayerClassDivisions.MPHeroClass>((Func<MultiplayerClassDivisions.MPHeroClass, bool>) (x => x.HeroCharacter == character || x.TroopCharacter == character));
    }

    public static List<List<IReadOnlyPerkObject>> GetAllPerksForHeroClass(
      MultiplayerClassDivisions.MPHeroClass heroClass,
      string forcedForGameMode = null)
    {
      List<List<IReadOnlyPerkObject>> perksForHeroClass = new List<List<IReadOnlyPerkObject>>();
      for (int index = 0; index < 3; ++index)
        perksForHeroClass.Add(heroClass.GetAllAvailablePerksForListIndex(index, forcedForGameMode).ToList<IReadOnlyPerkObject>());
      return perksForHeroClass;
    }

    public static MultiplayerClassDivisions.MPHeroClass GetMPHeroClassForPeer(
      MissionPeer peer,
      bool skipTeamCheck = false)
    {
      Team team = peer.Team;
      if (!skipTeamCheck && (team == null || team.Side == BattleSideEnum.None) || peer.SelectedTroopIndex < 0 && peer.ControlledAgent == null)
        return (MultiplayerClassDivisions.MPHeroClass) null;
      if (peer.ControlledAgent != null)
        return MultiplayerClassDivisions.GetMPHeroClassForCharacter(peer.ControlledAgent.Character);
      if (peer.SelectedTroopIndex >= 0)
        return MultiplayerClassDivisions.GetMPHeroClasses(peer.Culture).ToList<MultiplayerClassDivisions.MPHeroClass>()[peer.SelectedTroopIndex];
      Debug.FailedAssert("This should not be seen.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Network\\Gameplay\\MultiplayerClassDivisions.cs", nameof (GetMPHeroClassForPeer), (int) byte.MaxValue);
      return (MultiplayerClassDivisions.MPHeroClass) null;
    }

    public static TargetIconType GetMPHeroClassForFormation(Formation formation)
    {
      switch (formation.PhysicalClass)
      {
        case FormationClass.Infantry:
          return TargetIconType.Infantry_Light;
        case FormationClass.Ranged:
          return TargetIconType.Archer_Light;
        case FormationClass.Cavalry:
          return TargetIconType.Cavalry_Light;
        default:
          return TargetIconType.HorseArcher_Light;
      }
    }

    public static List<List<IReadOnlyPerkObject>> GetAvailablePerksForPeer(MissionPeer missionPeer)
    {
      return missionPeer?.Team != null ? MultiplayerClassDivisions.GetAllPerksForHeroClass(MultiplayerClassDivisions.GetMPHeroClassForPeer(missionPeer)) : new List<List<IReadOnlyPerkObject>>();
    }

    public static void Initialize()
    {
      MultiplayerClassDivisions.MultiplayerHeroClassGroups = new List<MultiplayerClassDivisions.MPHeroClassGroup>()
      {
        new MultiplayerClassDivisions.MPHeroClassGroup("Infantry"),
        new MultiplayerClassDivisions.MPHeroClassGroup("Ranged"),
        new MultiplayerClassDivisions.MPHeroClassGroup("Cavalry"),
        new MultiplayerClassDivisions.MPHeroClassGroup("HorseArcher")
      };
      MultiplayerClassDivisions.AvailableCultures = ((IEnumerable<BasicCultureObject>) MBObjectManager.Instance.GetObjectTypeList<BasicCultureObject>().ToArray()).Where<BasicCultureObject>((Func<BasicCultureObject, bool>) (x => x.IsMainCulture));
    }

    public static void Release()
    {
      MultiplayerClassDivisions.MultiplayerHeroClassGroups.Clear();
      MultiplayerClassDivisions.AvailableCultures = (IEnumerable<BasicCultureObject>) null;
    }

    private static BasicCharacterObject GetMPCharacter(string stringId)
    {
      return MBObjectManager.Instance.GetObject<BasicCharacterObject>(stringId);
    }

    public static int GetMinimumTroopCost(BasicCultureObject culture = null)
    {
      MBReadOnlyList<MultiplayerClassDivisions.MPHeroClass> mpHeroClasses = MultiplayerClassDivisions.GetMPHeroClasses();
      return culture != null ? mpHeroClasses.Where<MultiplayerClassDivisions.MPHeroClass>((Func<MultiplayerClassDivisions.MPHeroClass, bool>) (c => c.Culture == culture)).Min<MultiplayerClassDivisions.MPHeroClass>((Func<MultiplayerClassDivisions.MPHeroClass, int>) (troop => troop.TroopCost)) : mpHeroClasses.Min<MultiplayerClassDivisions.MPHeroClass>((Func<MultiplayerClassDivisions.MPHeroClass, int>) (troop => troop.TroopCost));
    }

    public class MPHeroClass : MBObjectBase
    {
      private List<IReadOnlyPerkObject> _perks = new List<IReadOnlyPerkObject>();

      public BasicCharacterObject HeroCharacter { get; private set; }

      public BasicCharacterObject TroopCharacter { get; private set; }

      public BasicCharacterObject BannerBearerCharacter { get; private set; }

      public BasicCultureObject Culture { get; private set; }

      public MultiplayerClassDivisions.MPHeroClassGroup ClassGroup { get; private set; }

      public string HeroIdleAnim { get; private set; }

      public string HeroMountIdleAnim { get; private set; }

      public string TroopIdleAnim { get; private set; }

      public string TroopMountIdleAnim { get; private set; }

      public int ArmorValue { get; private set; }

      public int Health { get; private set; }

      public float HeroMovementSpeedMultiplier { get; private set; }

      public float HeroCombatMovementSpeedMultiplier { get; private set; }

      public float HeroTopSpeedReachDuration { get; private set; }

      public float TroopMovementSpeedMultiplier { get; private set; }

      public float TroopCombatMovementSpeedMultiplier { get; private set; }

      public float TroopTopSpeedReachDuration { get; private set; }

      public float TroopMultiplier { get; private set; }

      public int TroopCost { get; private set; }

      public int TroopCasualCost { get; private set; }

      public int TroopBattleCost { get; private set; }

      public int MeleeAI { get; private set; }

      public int RangedAI { get; private set; }

      public TextObject HeroInformation { get; private set; }

      public TextObject TroopInformation { get; private set; }

      public TargetIconType IconType { get; private set; }

      public TextObject HeroName => this.HeroCharacter.Name;

      public TextObject TroopName => this.TroopCharacter.Name;

      public override bool Equals(object obj)
      {
        return obj is MultiplayerClassDivisions.MPHeroClass && ((MBObjectBase) obj).StringId.Equals(this.StringId);
      }

      public override int GetHashCode() => base.GetHashCode();

      public List<IReadOnlyPerkObject> GetAllAvailablePerksForListIndex(
        int index,
        string forcedForGameMode = null)
      {
        string str = forcedForGameMode ?? MultiplayerOptions.OptionType.GameType.GetStrValue();
        List<IReadOnlyPerkObject> perksForListIndex = new List<IReadOnlyPerkObject>();
        foreach (IReadOnlyPerkObject perk in this._perks)
        {
          foreach (string gameMode in perk.GameModes)
          {
            if ((gameMode.Equals(str, StringComparison.InvariantCultureIgnoreCase) || gameMode.Equals("all", StringComparison.InvariantCultureIgnoreCase)) && perk.PerkListIndex == index)
            {
              perksForListIndex.Add(perk);
              break;
            }
          }
        }
        return perksForListIndex;
      }

      public override void Deserialize(MBObjectManager objectManager, XmlNode node)
      {
        base.Deserialize(objectManager, node);
        this.HeroCharacter = MultiplayerClassDivisions.GetMPCharacter(node.Attributes["hero"].Value);
        this.TroopCharacter = MultiplayerClassDivisions.GetMPCharacter(node.Attributes["troop"].Value);
        string stringId = node.Attributes["banner_bearer"]?.Value;
        if (stringId != null)
          this.BannerBearerCharacter = MultiplayerClassDivisions.GetMPCharacter(stringId);
        this.HeroIdleAnim = node.Attributes["hero_idle_anim"]?.Value;
        this.HeroMountIdleAnim = node.Attributes["hero_mount_idle_anim"]?.Value;
        this.TroopIdleAnim = node.Attributes["troop_idle_anim"]?.Value;
        this.TroopMountIdleAnim = node.Attributes["troop_mount_idle_anim"]?.Value;
        this.Culture = this.HeroCharacter.Culture;
        this.ClassGroup = new MultiplayerClassDivisions.MPHeroClassGroup(this.HeroCharacter.DefaultFormationClass.GetName());
        this.TroopMultiplier = (float) Convert.ToDouble(node.Attributes["multiplier"].Value);
        this.TroopCost = Convert.ToInt32(node.Attributes["cost"].Value);
        this.ArmorValue = Convert.ToInt32(node.Attributes["armor"].Value);
        XmlAttribute attribute1 = node.Attributes["casual_cost"];
        XmlAttribute attribute2 = node.Attributes["battle_cost"];
        this.TroopCasualCost = attribute1 != null ? Convert.ToInt32(node.Attributes["casual_cost"].Value) : this.TroopCost;
        this.TroopBattleCost = attribute2 != null ? Convert.ToInt32(node.Attributes["battle_cost"].Value) : this.TroopCost;
        this.Health = 100;
        this.MeleeAI = 50;
        this.RangedAI = 50;
        XmlNode attribute3 = (XmlNode) node.Attributes["hitpoints"];
        if (attribute3 != null)
          this.Health = Convert.ToInt32(attribute3.Value);
        this.HeroMovementSpeedMultiplier = (float) Convert.ToDouble(node.Attributes["movement_speed"].Value);
        this.HeroCombatMovementSpeedMultiplier = (float) Convert.ToDouble(node.Attributes["combat_movement_speed"].Value);
        this.HeroTopSpeedReachDuration = (float) Convert.ToDouble(node.Attributes["acceleration"].Value);
        XmlAttribute attribute4 = node.Attributes["troop_movement_speed"];
        XmlAttribute attribute5 = node.Attributes["troop_combat_movement_speed"];
        XmlAttribute attribute6 = node.Attributes["troop_acceleration"];
        this.TroopMovementSpeedMultiplier = attribute4 != null ? (float) Convert.ToDouble(attribute4.Value) : this.HeroMovementSpeedMultiplier;
        this.TroopCombatMovementSpeedMultiplier = attribute5 != null ? (float) Convert.ToDouble(attribute5.Value) : this.HeroCombatMovementSpeedMultiplier;
        this.TroopTopSpeedReachDuration = attribute6 != null ? (float) Convert.ToDouble(attribute6.Value) : this.HeroTopSpeedReachDuration;
        this.MeleeAI = Convert.ToInt32(node.Attributes["melee_ai"].Value);
        this.RangedAI = Convert.ToInt32(node.Attributes["ranged_ai"].Value);
        TargetIconType result;
        if (Enum.TryParse<TargetIconType>(node.Attributes["icon"].Value, true, out result))
          this.IconType = result;
        foreach (XmlNode childNode1 in node.ChildNodes)
        {
          if (childNode1.NodeType != XmlNodeType.Comment && childNode1.Name == "Perks")
          {
            this._perks = new List<IReadOnlyPerkObject>();
            foreach (XmlNode childNode2 in childNode1.ChildNodes)
            {
              if (childNode2.NodeType != XmlNodeType.Comment)
                this._perks.Add(MPPerkObject.Deserialize(childNode2));
            }
          }
        }
      }

      public bool IsTroopCharacter(BasicCharacterObject character)
      {
        return this.TroopCharacter == character;
      }
    }

    public class MPHeroClassGroup
    {
      public readonly string StringId;
      public readonly TextObject Name;

      public MPHeroClassGroup(string stringId)
      {
        this.StringId = stringId;
        this.Name = GameTexts.FindText("str_troop_type_name", this.StringId);
      }

      public override bool Equals(object obj)
      {
        return obj is MultiplayerClassDivisions.MPHeroClassGroup && ((MultiplayerClassDivisions.MPHeroClassGroup) obj).StringId.Equals(this.StringId);
      }

      public override int GetHashCode() => base.GetHashCode();
    }
  }
}
