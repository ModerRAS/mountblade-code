// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SkinVoiceManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class SkinVoiceManager
  {
    public static int GetVoiceDefinitionCountWithMonsterSoundAndCollisionInfoClassName(
      string className)
    {
      return MBAPI.IMBVoiceManager.GetVoiceDefinitionCountWithMonsterSoundAndCollisionInfoClassName(className);
    }

    public static void GetVoiceDefinitionListWithMonsterSoundAndCollisionInfoClassName(
      string className,
      int[] definitionIndices)
    {
      MBAPI.IMBVoiceManager.GetVoiceDefinitionListWithMonsterSoundAndCollisionInfoClassName(className, definitionIndices);
    }

    public enum CombatVoiceNetworkPredictionType
    {
      Prediction,
      OwnerPrediction,
      NoPrediction,
    }

    public struct SkinVoiceType
    {
      public string TypeID { get; private set; }

      public int Index { get; private set; }

      public SkinVoiceType(string typeID)
      {
        this.TypeID = typeID;
        this.Index = MBAPI.IMBVoiceManager.GetVoiceTypeIndex(typeID);
      }

      public TextObject GetName() => GameTexts.FindText("str_taunt_name", this.TypeID);
    }

    public static class VoiceType
    {
      public static readonly SkinVoiceManager.SkinVoiceType Grunt = new SkinVoiceManager.SkinVoiceType(nameof (Grunt));
      public static readonly SkinVoiceManager.SkinVoiceType Jump = new SkinVoiceManager.SkinVoiceType(nameof (Jump));
      public static readonly SkinVoiceManager.SkinVoiceType Yell = new SkinVoiceManager.SkinVoiceType(nameof (Yell));
      public static readonly SkinVoiceManager.SkinVoiceType Pain = new SkinVoiceManager.SkinVoiceType(nameof (Pain));
      public static readonly SkinVoiceManager.SkinVoiceType Death = new SkinVoiceManager.SkinVoiceType(nameof (Death));
      public static readonly SkinVoiceManager.SkinVoiceType Stun = new SkinVoiceManager.SkinVoiceType(nameof (Stun));
      public static readonly SkinVoiceManager.SkinVoiceType Fear = new SkinVoiceManager.SkinVoiceType(nameof (Fear));
      public static readonly SkinVoiceManager.SkinVoiceType Climb = new SkinVoiceManager.SkinVoiceType(nameof (Climb));
      public static readonly SkinVoiceManager.SkinVoiceType Focus = new SkinVoiceManager.SkinVoiceType(nameof (Focus));
      public static readonly SkinVoiceManager.SkinVoiceType Debacle = new SkinVoiceManager.SkinVoiceType(nameof (Debacle));
      public static readonly SkinVoiceManager.SkinVoiceType Victory = new SkinVoiceManager.SkinVoiceType(nameof (Victory));
      public static readonly SkinVoiceManager.SkinVoiceType HorseStop = new SkinVoiceManager.SkinVoiceType(nameof (HorseStop));
      public static readonly SkinVoiceManager.SkinVoiceType HorseRally = new SkinVoiceManager.SkinVoiceType(nameof (HorseRally));
      public static readonly SkinVoiceManager.SkinVoiceType Infantry = new SkinVoiceManager.SkinVoiceType(nameof (Infantry));
      public static readonly SkinVoiceManager.SkinVoiceType Cavalry = new SkinVoiceManager.SkinVoiceType(nameof (Cavalry));
      public static readonly SkinVoiceManager.SkinVoiceType Archers = new SkinVoiceManager.SkinVoiceType(nameof (Archers));
      public static readonly SkinVoiceManager.SkinVoiceType HorseArchers = new SkinVoiceManager.SkinVoiceType(nameof (HorseArchers));
      public static readonly SkinVoiceManager.SkinVoiceType Everyone = new SkinVoiceManager.SkinVoiceType(nameof (Everyone));
      public static readonly SkinVoiceManager.SkinVoiceType MixedFormation = new SkinVoiceManager.SkinVoiceType("Mixed");
      public static readonly SkinVoiceManager.SkinVoiceType Move = new SkinVoiceManager.SkinVoiceType(nameof (Move));
      public static readonly SkinVoiceManager.SkinVoiceType Follow = new SkinVoiceManager.SkinVoiceType(nameof (Follow));
      public static readonly SkinVoiceManager.SkinVoiceType Charge = new SkinVoiceManager.SkinVoiceType(nameof (Charge));
      public static readonly SkinVoiceManager.SkinVoiceType Advance = new SkinVoiceManager.SkinVoiceType(nameof (Advance));
      public static readonly SkinVoiceManager.SkinVoiceType FallBack = new SkinVoiceManager.SkinVoiceType(nameof (FallBack));
      public static readonly SkinVoiceManager.SkinVoiceType Stop = new SkinVoiceManager.SkinVoiceType(nameof (Stop));
      public static readonly SkinVoiceManager.SkinVoiceType Retreat = new SkinVoiceManager.SkinVoiceType(nameof (Retreat));
      public static readonly SkinVoiceManager.SkinVoiceType Mount = new SkinVoiceManager.SkinVoiceType(nameof (Mount));
      public static readonly SkinVoiceManager.SkinVoiceType Dismount = new SkinVoiceManager.SkinVoiceType(nameof (Dismount));
      public static readonly SkinVoiceManager.SkinVoiceType FireAtWill = new SkinVoiceManager.SkinVoiceType(nameof (FireAtWill));
      public static readonly SkinVoiceManager.SkinVoiceType HoldFire = new SkinVoiceManager.SkinVoiceType(nameof (HoldFire));
      public static readonly SkinVoiceManager.SkinVoiceType PickSpears = new SkinVoiceManager.SkinVoiceType(nameof (PickSpears));
      public static readonly SkinVoiceManager.SkinVoiceType PickDefault = new SkinVoiceManager.SkinVoiceType(nameof (PickDefault));
      public static readonly SkinVoiceManager.SkinVoiceType FaceEnemy = new SkinVoiceManager.SkinVoiceType(nameof (FaceEnemy));
      public static readonly SkinVoiceManager.SkinVoiceType FaceDirection = new SkinVoiceManager.SkinVoiceType(nameof (FaceDirection));
      public static readonly SkinVoiceManager.SkinVoiceType UseSiegeWeapon = new SkinVoiceManager.SkinVoiceType(nameof (UseSiegeWeapon));
      public static readonly SkinVoiceManager.SkinVoiceType UseLadders = new SkinVoiceManager.SkinVoiceType(nameof (UseLadders));
      public static readonly SkinVoiceManager.SkinVoiceType AttackGate = new SkinVoiceManager.SkinVoiceType(nameof (AttackGate));
      public static readonly SkinVoiceManager.SkinVoiceType CommandDelegate = new SkinVoiceManager.SkinVoiceType(nameof (CommandDelegate));
      public static readonly SkinVoiceManager.SkinVoiceType CommandUndelegate = new SkinVoiceManager.SkinVoiceType(nameof (CommandUndelegate));
      public static readonly SkinVoiceManager.SkinVoiceType FormLine = new SkinVoiceManager.SkinVoiceType(nameof (FormLine));
      public static readonly SkinVoiceManager.SkinVoiceType FormShieldWall = new SkinVoiceManager.SkinVoiceType(nameof (FormShieldWall));
      public static readonly SkinVoiceManager.SkinVoiceType FormLoose = new SkinVoiceManager.SkinVoiceType(nameof (FormLoose));
      public static readonly SkinVoiceManager.SkinVoiceType FormCircle = new SkinVoiceManager.SkinVoiceType(nameof (FormCircle));
      public static readonly SkinVoiceManager.SkinVoiceType FormSquare = new SkinVoiceManager.SkinVoiceType(nameof (FormSquare));
      public static readonly SkinVoiceManager.SkinVoiceType FormSkein = new SkinVoiceManager.SkinVoiceType(nameof (FormSkein));
      public static readonly SkinVoiceManager.SkinVoiceType FormColumn = new SkinVoiceManager.SkinVoiceType(nameof (FormColumn));
      public static readonly SkinVoiceManager.SkinVoiceType FormScatter = new SkinVoiceManager.SkinVoiceType(nameof (FormScatter));
      public static readonly SkinVoiceManager.SkinVoiceType[] MpBarks = new SkinVoiceManager.SkinVoiceType[9]
      {
        new SkinVoiceManager.SkinVoiceType(nameof (MpDefend)),
        new SkinVoiceManager.SkinVoiceType(nameof (MpAttack)),
        new SkinVoiceManager.SkinVoiceType(nameof (MpHelp)),
        new SkinVoiceManager.SkinVoiceType(nameof (MpSpot)),
        new SkinVoiceManager.SkinVoiceType(nameof (MpThanks)),
        new SkinVoiceManager.SkinVoiceType(nameof (MpSorry)),
        new SkinVoiceManager.SkinVoiceType(nameof (MpAffirmative)),
        new SkinVoiceManager.SkinVoiceType(nameof (MpNegative)),
        new SkinVoiceManager.SkinVoiceType(nameof (MpRegroup))
      };
      public static readonly SkinVoiceManager.SkinVoiceType MpDefend = SkinVoiceManager.VoiceType.MpBarks[0];
      public static readonly SkinVoiceManager.SkinVoiceType MpAttack = SkinVoiceManager.VoiceType.MpBarks[1];
      public static readonly SkinVoiceManager.SkinVoiceType MpHelp = SkinVoiceManager.VoiceType.MpBarks[2];
      public static readonly SkinVoiceManager.SkinVoiceType MpSpot = SkinVoiceManager.VoiceType.MpBarks[3];
      public static readonly SkinVoiceManager.SkinVoiceType MpThanks = SkinVoiceManager.VoiceType.MpBarks[4];
      public static readonly SkinVoiceManager.SkinVoiceType MpSorry = SkinVoiceManager.VoiceType.MpBarks[5];
      public static readonly SkinVoiceManager.SkinVoiceType MpAffirmative = SkinVoiceManager.VoiceType.MpBarks[6];
      public static readonly SkinVoiceManager.SkinVoiceType MpNegative = SkinVoiceManager.VoiceType.MpBarks[7];
      public static readonly SkinVoiceManager.SkinVoiceType MpRegroup = SkinVoiceManager.VoiceType.MpBarks[8];
      public static readonly SkinVoiceManager.SkinVoiceType Idle = new SkinVoiceManager.SkinVoiceType(nameof (Idle));
      public static readonly SkinVoiceManager.SkinVoiceType Neigh = new SkinVoiceManager.SkinVoiceType(nameof (Neigh));
      public static readonly SkinVoiceManager.SkinVoiceType Collide = new SkinVoiceManager.SkinVoiceType(nameof (Collide));
    }
  }
}
