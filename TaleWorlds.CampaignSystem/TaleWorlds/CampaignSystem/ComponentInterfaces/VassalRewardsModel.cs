// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.VassalRewardsModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class VassalRewardsModel : GameModel
  {
    public abstract float InfluenceReward { get; }

    public abstract int RelationRewardWithLeader { get; }

    public abstract TroopRoster GetTroopRewardsForJoiningKingdom(Kingdom kingdom);

    public abstract ItemRoster GetEquipmentRewardsForJoiningKingdom(Kingdom kingdom);
  }
}
