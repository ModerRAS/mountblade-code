// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBProfileSelectionScreenBase
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.PlatformService;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MBProfileSelectionScreenBase : ScreenBase, IGameStateListener
  {
    private ProfileSelectionState _state;

    public MBProfileSelectionScreenBase(ProfileSelectionState state) => this._state = state;

    protected override sealed void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (ScreenManager.TopScreen != this)
        return;
      this.OnProfileSelectionTick(dt);
    }

    protected virtual void OnProfileSelectionTick(float dt)
    {
    }

    protected void OnActivateProfileSelection() => PlatformServices.Instance.LoginUser();

    void IGameStateListener.OnActivate()
    {
    }

    void IGameStateListener.OnDeactivate()
    {
    }

    void IGameStateListener.OnFinalize()
    {
    }

    void IGameStateListener.OnInitialize()
    {
      Utilities.DisableGlobalLoadingWindow();
      LoadingWindow.DisableGlobalLoadingWindow();
    }
  }
}
