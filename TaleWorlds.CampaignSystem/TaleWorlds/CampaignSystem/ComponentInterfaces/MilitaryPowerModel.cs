// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.MilitaryPowerModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class MilitaryPowerModel : GameModel
  {
    public abstract float GetTroopPower(
      float defaultTroopPower,
      float leaderModifier = 0.0f,
      float contextModifier = 0.0f);

    public abstract float GetTroopPower(
      CharacterObject troop,
      BattleSideEnum side,
      MapEvent.PowerCalculationContext context,
      float leaderModifier);

    public abstract float GetContextModifier(
      CharacterObject troop,
      BattleSideEnum battleSideEnum,
      MapEvent.PowerCalculationContext context);

    public abstract float GetLeaderModifierInMapEvent(
      MapEvent mapEvent,
      BattleSideEnum battleSideEnum);

    public abstract float GetDefaultTroopPower(CharacterObject troop);
  }
}
