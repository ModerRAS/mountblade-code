// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.PrisonBreakModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class PrisonBreakModel : GameModel
  {
    public abstract bool CanPlayerStagePrisonBreak(Settlement settlement);

    public abstract int GetPrisonBreakStartCost(Hero prisonerHero);

    public abstract int GetRelationRewardOnPrisonBreak(Hero prisonerHero);

    public abstract float GetRogueryRewardOnPrisonBreak(Hero prisonerHero, bool isSuccess);
  }
}
