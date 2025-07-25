// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ComponentInterfaces.BattleBannerBearersModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.ComponentInterfaces
{
  public abstract class BattleBannerBearersModel : GameModel
  {
    public const float DefaultDetachmentCostMultiplier = 10f;
    private BannerBearerLogic _bannerBearerLogic;

    protected BannerBearerLogic BannerBearerLogic => this._bannerBearerLogic;

    public void InitializeModel(BannerBearerLogic bannerBearerLogic)
    {
      this._bannerBearerLogic = bannerBearerLogic;
    }

    public void FinalizeModel() => this._bannerBearerLogic = (BannerBearerLogic) null;

    public bool IsFormationBanner(Formation formation, SpawnedItemEntity item)
    {
      if (formation == null)
        return false;
      BannerBearerLogic bannerBearerLogic = this.BannerBearerLogic;
      return bannerBearerLogic != null && bannerBearerLogic.IsFormationBanner(formation, item);
    }

    public bool IsBannerSearchingAgent(Agent agent)
    {
      BannerBearerLogic bannerBearerLogic = this.BannerBearerLogic;
      return bannerBearerLogic != null && bannerBearerLogic.IsBannerSearchingAgent(agent);
    }

    public bool IsInteractableFormationBanner(SpawnedItemEntity item, Agent interactingAgent)
    {
      Formation formationFromBanner = this.BannerBearerLogic?.GetFormationFromBanner(item);
      if (formationFromBanner == null || formationFromBanner.Captain == interactingAgent || interactingAgent.Formation == formationFromBanner)
        return true;
      return interactingAgent.IsPlayerControlled && interactingAgent.Team == formationFromBanner.Team;
    }

    public bool HasFormationBanner(Formation formation)
    {
      return formation != null && this.BannerBearerLogic?.GetFormationBanner(formation) != null;
    }

    public bool HasBannerOnGround(Formation formation)
    {
      if (formation == null)
        return false;
      BannerBearerLogic bannerBearerLogic = this.BannerBearerLogic;
      return bannerBearerLogic != null && bannerBearerLogic.HasBannerOnGround(formation);
    }

    public ItemObject GetFormationBanner(Formation formation)
    {
      if (formation == null)
        return (ItemObject) null;
      return this.BannerBearerLogic?.GetFormationBanner(formation);
    }

    public List<Agent> GetFormationBannerBearers(Formation formation)
    {
      if (formation == null)
        return new List<Agent>();
      BannerBearerLogic bannerBearerLogic = this.BannerBearerLogic;
      return bannerBearerLogic != null ? bannerBearerLogic.GetFormationBannerBearers(formation) : new List<Agent>();
    }

    public BannerComponent GetActiveBanner(Formation formation)
    {
      if (formation == null)
        return (BannerComponent) null;
      return this.BannerBearerLogic?.GetActiveBanner(formation);
    }

    public abstract int GetMinimumFormationTroopCountToBearBanners();

    public abstract float GetBannerInteractionDistance(Agent interactingAgent);

    public abstract bool CanBannerBearerProvideEffectToFormation(Agent agent, Formation formation);

    public abstract bool CanAgentPickUpAnyBanner(Agent agent);

    public abstract bool CanAgentBecomeBannerBearer(Agent agent);

    public abstract int GetAgentBannerBearingPriority(Agent agent);

    public abstract bool CanFormationDeployBannerBearers(Formation formation);

    public abstract int GetDesiredNumberOfBannerBearersForFormation(Formation formation);

    public abstract ItemObject GetBannerBearerReplacementWeapon(BasicCharacterObject agentCharacter);
  }
}
