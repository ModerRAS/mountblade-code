// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ComponentInterfaces.BattleInitializationModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.ComponentInterfaces
{
  public abstract class BattleInitializationModel : GameModel
  {
    public const int MinimumTroopCountForPlayerDeployment = 20;
    private bool _cachedCanPlayerSideDeployWithOOB;
    private bool _isCanPlayerSideDeployWithOOBCached;
    private bool _isInitialized;

    public bool BypassPlayerDeployment { get; private set; }

    public abstract List<FormationClass> GetAllAvailableTroopTypes();

    protected abstract bool CanPlayerSideDeployWithOrderOfBattleAux();

    public bool CanPlayerSideDeployWithOrderOfBattle()
    {
      if (!this._isCanPlayerSideDeployWithOOBCached)
      {
        this._cachedCanPlayerSideDeployWithOOB = !this.BypassPlayerDeployment && this.CanPlayerSideDeployWithOrderOfBattleAux();
        this._isCanPlayerSideDeployWithOOBCached = true;
      }
      return this._cachedCanPlayerSideDeployWithOOB;
    }

    public void InitializeModel()
    {
      this._isCanPlayerSideDeployWithOOBCached = false;
      this._isInitialized = true;
    }

    public void FinalizeModel() => this._isInitialized = false;

    public void SetBypassPlayerDeployment(bool value) => this.BypassPlayerDeployment = value;
  }
}
