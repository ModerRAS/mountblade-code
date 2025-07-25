// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.AIBehaviorTuple
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public struct AIBehaviorTuple : IEquatable<AIBehaviorTuple>
  {
    public IMapPoint Party;
    public AiBehavior AiBehavior;
    public bool WillGatherArmy;

    public AIBehaviorTuple(IMapPoint party, AiBehavior aiBehavior, bool willGatherArmy = false)
    {
      this.Party = party;
      this.AiBehavior = aiBehavior;
      this.WillGatherArmy = willGatherArmy;
    }

    public override bool Equals(object obj)
    {
      return obj is AIBehaviorTuple aiBehaviorTuple && aiBehaviorTuple.Party == this.Party && aiBehaviorTuple.AiBehavior == this.AiBehavior && aiBehaviorTuple.WillGatherArmy == this.WillGatherArmy;
    }

    public bool Equals(AIBehaviorTuple other)
    {
      return other.Party == this.Party && other.AiBehavior == this.AiBehavior && other.WillGatherArmy == this.WillGatherArmy;
    }

    public override int GetHashCode()
    {
      int hashCode = ((int) this.AiBehavior).GetHashCode();
      return (this.Party != null ? hashCode * 397 ^ this.Party.GetHashCode() : hashCode) * 397 ^ this.WillGatherArmy.GetHashCode();
    }

    public static bool operator ==(AIBehaviorTuple a, AIBehaviorTuple b)
    {
      return a.Party == b.Party && a.AiBehavior == b.AiBehavior && a.WillGatherArmy == b.WillGatherArmy;
    }

    public static bool operator !=(AIBehaviorTuple a, AIBehaviorTuple b) => !(a == b);
  }
}
