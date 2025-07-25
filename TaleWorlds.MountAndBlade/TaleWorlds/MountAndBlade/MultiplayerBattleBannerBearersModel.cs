// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerBattleBannerBearersModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerBattleBannerBearersModel : BattleBannerBearersModel
  {
    public override int GetMinimumFormationTroopCountToBearBanners() => int.MaxValue;

    public override float GetBannerInteractionDistance(Agent interactingAgent) => float.MaxValue;

    public override bool CanAgentPickUpAnyBanner(Agent agent) => false;

    public override bool CanBannerBearerProvideEffectToFormation(Agent agent, Formation formation)
    {
      return false;
    }

    public override bool CanAgentBecomeBannerBearer(Agent agent) => false;

    public override int GetAgentBannerBearingPriority(Agent agent) => 0;

    public override bool CanFormationDeployBannerBearers(Formation formation) => false;

    public override int GetDesiredNumberOfBannerBearersForFormation(Formation formation) => 0;

    public override ItemObject GetBannerBearerReplacementWeapon(BasicCharacterObject agentCharacter)
    {
      return (ItemObject) null;
    }
  }
}
