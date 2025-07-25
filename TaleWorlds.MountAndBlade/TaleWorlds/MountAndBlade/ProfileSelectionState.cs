// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ProfileSelectionState
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine.Options;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ProfileSelectionState : GameState
  {
    public bool IsDirectPlayPossible { get; private set; } = true;

    public event ProfileSelectionState.OnProfileSelectionEvent OnProfileSelection;

    public void OnProfileSelected()
    {
      NativeOptions.ReadRGLConfigFiles();
      BannerlordConfig.Initialize();
      ProfileSelectionState.OnProfileSelectionEvent profileSelection = this.OnProfileSelection;
      if (profileSelection != null)
        profileSelection();
      this.StartGame();
    }

    public void StartGame() => Module.CurrentModule.SetInitialModuleScreenAsRootScreen();

    public delegate void OnProfileSelectionEvent();
  }
}
