// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.SiegeLordsHallFightModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class SiegeLordsHallFightModel : GameModel
  {
    public abstract float AreaLostRatio { get; }

    public abstract float AttackerDefenderTroopCountRatio { get; }

    public abstract int DefenderTroopNumberForSuccessfulPullBack { get; }

    public abstract float DefenderMaxArcherRatio { get; }

    public abstract int MaxDefenderSideTroopCount { get; }

    public abstract int MaxDefenderArcherCount { get; }

    public abstract int MaxAttackerSideTroopCount { get; }

    public abstract FlattenedTroopRoster GetPriorityListForLordsHallFightMission(
      MapEvent playerMapEvent,
      BattleSideEnum side,
      int troopCount);
  }
}
