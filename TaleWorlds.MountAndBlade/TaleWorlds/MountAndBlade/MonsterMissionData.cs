// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MonsterMissionData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MonsterMissionData : IMonsterMissionData
  {
    private MBActionSet _actionSet;
    private MBActionSet _femaleActionSet;

    public Monster Monster { get; private set; }

    public CapsuleData BodyCapsule
    {
      get
      {
        return new CapsuleData(this.Monster.BodyCapsuleRadius, this.Monster.BodyCapsulePoint1, this.Monster.BodyCapsulePoint2);
      }
    }

    public CapsuleData CrouchedBodyCapsule
    {
      get
      {
        return new CapsuleData(this.Monster.CrouchedBodyCapsuleRadius, this.Monster.CrouchedBodyCapsulePoint1, this.Monster.CrouchedBodyCapsulePoint2);
      }
    }

    public MBActionSet ActionSet
    {
      get
      {
        if (!this._actionSet.IsValid && !string.IsNullOrEmpty(this.Monster.ActionSetCode))
          this._actionSet = MBActionSet.GetActionSet(this.Monster.ActionSetCode);
        return this._actionSet;
      }
    }

    public MBActionSet FemaleActionSet
    {
      get
      {
        if (!this._femaleActionSet.IsValid && !string.IsNullOrEmpty(this.Monster.FemaleActionSetCode))
          this._femaleActionSet = MBActionSet.GetActionSet(this.Monster.FemaleActionSetCode);
        return this._femaleActionSet;
      }
    }

    public MonsterMissionData(Monster monster)
    {
      this._actionSet = MBActionSet.InvalidActionSet;
      this._femaleActionSet = MBActionSet.InvalidActionSet;
      this.Monster = monster;
    }
  }
}
