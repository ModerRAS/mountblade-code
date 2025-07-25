// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBSubModuleBase
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MBSubModuleBase
  {
    protected internal virtual void OnSubModuleLoad()
    {
    }

    protected internal virtual void OnSubModuleUnloaded()
    {
    }

    protected internal virtual void OnBeforeInitialModuleScreenSetAsRoot()
    {
    }

    public virtual void OnConfigChanged()
    {
    }

    protected internal virtual void OnGameStart(Game game, IGameStarter gameStarterObject)
    {
    }

    protected internal virtual void OnApplicationTick(float dt)
    {
    }

    protected internal virtual void AfterAsyncTickTick(float dt)
    {
    }

    protected internal virtual void InitializeGameStarter(Game game, IGameStarter starterObject)
    {
    }

    public virtual void OnGameLoaded(Game game, object initializerObject)
    {
    }

    public virtual void OnNewGameCreated(Game game, object initializerObject)
    {
    }

    public virtual void BeginGameStart(Game game)
    {
    }

    public virtual void OnCampaignStart(Game game, object starterObject)
    {
    }

    public virtual void RegisterSubModuleObjects(bool isSavedCampaign)
    {
    }

    public virtual void AfterRegisterSubModuleObjects(bool isSavedCampaign)
    {
    }

    public virtual void OnMultiplayerGameStart(Game game, object starterObject)
    {
    }

    public virtual void OnGameInitializationFinished(Game game)
    {
    }

    public virtual void OnAfterGameInitializationFinished(Game game, object starterObject)
    {
    }

    public virtual bool DoLoading(Game game) => true;

    public virtual void OnGameEnd(Game game)
    {
    }

    public virtual void OnMissionBehaviorInitialize(Mission mission)
    {
    }

    public virtual void OnBeforeMissionBehaviorInitialize(Mission mission)
    {
    }

    public virtual void OnInitialState()
    {
    }

    protected internal virtual void OnNetworkTick(float dt)
    {
    }
  }
}
