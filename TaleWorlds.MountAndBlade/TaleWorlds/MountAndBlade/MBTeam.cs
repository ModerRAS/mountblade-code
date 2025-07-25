// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBTeam
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct MBTeam
  {
    public readonly int Index;
    private readonly Mission _mission;

    internal MBTeam(Mission mission, int index)
    {
      this._mission = mission;
      this.Index = index;
    }

    public static MBTeam InvalidTeam => new MBTeam((Mission) null, -1);

    public override int GetHashCode() => this.Index;

    public override bool Equals(object obj) => ((MBTeam) obj).Index == this.Index;

    public static bool operator ==(MBTeam team1, MBTeam team2) => team1.Index == team2.Index;

    public static bool operator !=(MBTeam team1, MBTeam team2) => team1.Index != team2.Index;

    public bool IsValid => this.Index >= 0;

    public bool IsEnemyOf(MBTeam otherTeam)
    {
      return MBAPI.IMBTeam.IsEnemy(this._mission.Pointer, this.Index, otherTeam.Index);
    }

    public void SetIsEnemyOf(MBTeam otherTeam, bool isEnemyOf)
    {
      MBAPI.IMBTeam.SetIsEnemy(this._mission.Pointer, this.Index, otherTeam.Index, isEnemyOf);
    }

    public override string ToString() => "Mission Team: " + (object) this.Index;
  }
}
