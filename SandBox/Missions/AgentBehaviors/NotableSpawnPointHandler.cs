// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.NotableSpawnPointHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Objects.AreaMarkers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class NotableSpawnPointHandler : MissionLogic
  {
    private int _merchantNotableCount;
    private int _gangLeaderNotableCount;
    private int _preacherNotableCount;
    private int _artisanNotableCount;
    private int _ruralNotableCount;
    private GameEntity _currentMerchantSetGameEntity;
    private GameEntity _currentPreacherSetGameEntity;
    private GameEntity _currentGangLeaderSetGameEntity;
    private GameEntity _currentArtisanSetGameEntity;
    private GameEntity _currentRuralNotableSetGameEntity;
    private List<Hero> _workshopAssignedHeroes;

    public override void OnBehaviorInitialize()
    {
      List<GameEntity> list = Mission.Current.Scene.FindEntitiesWithTag("sp_notables_parent").ToList<GameEntity>();
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      this._workshopAssignedHeroes = new List<Hero>();
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.IsGangLeader)
          ++this._gangLeaderNotableCount;
        else if (notable.IsPreacher)
          ++this._preacherNotableCount;
        else if (notable.IsArtisan)
          ++this._artisanNotableCount;
        else if (notable.IsRuralNotable || notable.IsHeadman)
          ++this._ruralNotableCount;
        else if (notable.IsMerchant)
          ++this._merchantNotableCount;
      }
      foreach (GameEntity gameEntity in list.ToList<GameEntity>())
      {
        foreach (GameEntity child in gameEntity.GetChildren())
          this.FindAndSetChild(child);
        foreach (WorkshopAreaMarker areaMarker in this.Mission.ActiveMissionObjects.FindAllWithType<WorkshopAreaMarker>().ToList<WorkshopAreaMarker>().OrderBy<WorkshopAreaMarker, int>((Func<WorkshopAreaMarker, int>) (x => x.AreaIndex)).ToList<WorkshopAreaMarker>())
        {
          if (areaMarker.IsPositionInRange(gameEntity.GlobalPosition) && areaMarker.GetWorkshop().Owner.OwnedWorkshops.First<Workshop>((Func<Workshop, bool>) (x => !x.WorkshopType.IsHidden)).Tag == areaMarker.Tag)
          {
            this.ActivateParentSetInsideWorkshop(areaMarker);
            list.Remove(gameEntity);
            break;
          }
        }
      }
      foreach (GameEntity gameEntity in list)
      {
        foreach (GameEntity child in gameEntity.GetChildren())
          this.FindAndSetChild(child);
        this.ActivateParentSetOutsideWorkshop();
      }
    }

    private void FindAndSetChild(GameEntity childGameEntity)
    {
      if (childGameEntity.HasTag("merchant_notary_talking_set"))
        this._currentMerchantSetGameEntity = childGameEntity;
      else if (childGameEntity.HasTag("preacher_notary_talking_set"))
        this._currentPreacherSetGameEntity = childGameEntity;
      else if (childGameEntity.HasTag("gangleader_sitting_and_talking_with_guards_set"))
        this._currentGangLeaderSetGameEntity = childGameEntity;
      else if (childGameEntity.HasTag("sp_artisan_notary_talking_set"))
      {
        this._currentArtisanSetGameEntity = childGameEntity;
      }
      else
      {
        if (!childGameEntity.HasTag("sp_ruralnotable_notary_talking_set"))
          return;
        this._currentRuralNotableSetGameEntity = childGameEntity;
      }
    }

    private void ActivateParentSetInsideWorkshop(WorkshopAreaMarker areaMarker)
    {
      Hero owner = areaMarker.GetWorkshop().Owner;
      if (!this._workshopAssignedHeroes.Contains(owner))
      {
        this._workshopAssignedHeroes.Add(owner);
        if (owner.IsMerchant)
        {
          this.DeactivateAllExcept(this._currentMerchantSetGameEntity);
          --this._merchantNotableCount;
        }
        else if (owner.IsArtisan)
        {
          this.DeactivateAllExcept(this._currentArtisanSetGameEntity);
          --this._artisanNotableCount;
        }
        else if (owner.IsGangLeader)
        {
          this.DeactivateAllExcept(this._currentGangLeaderSetGameEntity);
          --this._gangLeaderNotableCount;
        }
        else if (owner.IsPreacher)
        {
          this.DeactivateAllExcept(this._currentPreacherSetGameEntity);
          --this._preacherNotableCount;
        }
        else
        {
          if (!owner.IsRuralNotable)
            return;
          this.DeactivateAllExcept(this._currentRuralNotableSetGameEntity);
          --this._ruralNotableCount;
        }
      }
      else
        this.DeactivateAll();
    }

    private void ActivateParentSetOutsideWorkshop()
    {
      if (this._gangLeaderNotableCount > 0)
      {
        this.DeactivateAllExcept(this._currentGangLeaderSetGameEntity);
        --this._gangLeaderNotableCount;
      }
      else if (this._merchantNotableCount > 0)
      {
        this.DeactivateAllExcept(this._currentMerchantSetGameEntity);
        --this._merchantNotableCount;
      }
      else if (this._preacherNotableCount > 0)
      {
        this.DeactivateAllExcept(this._currentPreacherSetGameEntity);
        --this._preacherNotableCount;
      }
      else if (this._artisanNotableCount > 0)
      {
        this.DeactivateAllExcept(this._currentArtisanSetGameEntity);
        --this._artisanNotableCount;
      }
      else if (this._ruralNotableCount > 0)
      {
        this.DeactivateAllExcept(this._currentRuralNotableSetGameEntity);
        --this._ruralNotableCount;
      }
      else
        this.DeactivateAll();
    }

    private void DeactivateAll()
    {
      this.MakeInvisibleAndDeactivate(this._currentGangLeaderSetGameEntity);
      this.MakeInvisibleAndDeactivate(this._currentMerchantSetGameEntity);
      this.MakeInvisibleAndDeactivate(this._currentPreacherSetGameEntity);
      this.MakeInvisibleAndDeactivate(this._currentArtisanSetGameEntity);
      this.MakeInvisibleAndDeactivate(this._currentRuralNotableSetGameEntity);
    }

    private void DeactivateAllExcept(GameEntity gameEntity)
    {
      if ((NativeObject) gameEntity != (NativeObject) this._currentMerchantSetGameEntity)
        this.MakeInvisibleAndDeactivate(this._currentMerchantSetGameEntity);
      if ((NativeObject) gameEntity != (NativeObject) this._currentGangLeaderSetGameEntity)
        this.MakeInvisibleAndDeactivate(this._currentGangLeaderSetGameEntity);
      if ((NativeObject) gameEntity != (NativeObject) this._currentPreacherSetGameEntity)
        this.MakeInvisibleAndDeactivate(this._currentPreacherSetGameEntity);
      if ((NativeObject) gameEntity != (NativeObject) this._currentArtisanSetGameEntity)
        this.MakeInvisibleAndDeactivate(this._currentArtisanSetGameEntity);
      if (!((NativeObject) gameEntity != (NativeObject) this._currentRuralNotableSetGameEntity))
        return;
      this.MakeInvisibleAndDeactivate(this._currentRuralNotableSetGameEntity);
    }

    private void MakeInvisibleAndDeactivate(GameEntity gameEntity)
    {
      gameEntity.SetVisibilityExcludeParents(false);
      gameEntity.GetFirstScriptOfType<UsableMachine>()?.Deactivate();
      foreach (GameEntity child in gameEntity.GetChildren())
        this.MakeInvisibleAndDeactivate(child);
    }
  }
}
