// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionObjectId
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct MissionObjectId
  {
    public readonly int Id;
    public readonly bool CreatedAtRuntime;
    public static readonly MissionObjectId Invalid = new MissionObjectId(-1);

    public MissionObjectId(int id, bool createdAtRuntime = false)
    {
      this.Id = id;
      this.CreatedAtRuntime = createdAtRuntime;
    }

    public static bool operator ==(MissionObjectId a, MissionObjectId b)
    {
      return a.Id == b.Id && a.CreatedAtRuntime == b.CreatedAtRuntime;
    }

    public static bool operator !=(MissionObjectId a, MissionObjectId b)
    {
      return a.Id != b.Id || a.CreatedAtRuntime != b.CreatedAtRuntime;
    }

    public override bool Equals(object obj)
    {
      return obj is MissionObjectId missionObjectId && missionObjectId.Id == this.Id && missionObjectId.CreatedAtRuntime == this.CreatedAtRuntime;
    }

    public override int GetHashCode()
    {
      int id = this.Id;
      if (this.CreatedAtRuntime)
        id |= 1073741824;
      return id.GetHashCode();
    }

    public override string ToString()
    {
      return this.Id.ToString() + " - " + this.CreatedAtRuntime.ToString();
    }
  }
}
