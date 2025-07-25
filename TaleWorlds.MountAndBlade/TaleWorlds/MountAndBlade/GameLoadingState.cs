// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.GameLoadingState
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class GameLoadingState : GameState
  {
    private bool _loadingFinished;
    private MBGameManager _gameLoader;

    public override bool IsMusicMenuState => true;

    public void SetLoadingParameters(MBGameManager gameLoader)
    {
      Game.OnGameCreated += new Action(this.OnGameCreated);
      this._gameLoader = gameLoader;
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!this._loadingFinished)
      {
        this._loadingFinished = this._gameLoader.DoLoadingForGameManager();
      }
      else
      {
        GameStateManager.Current = Game.Current.GameStateManager;
        this._gameLoader.OnLoadFinished();
      }
    }

    private void OnGameCreated()
    {
      Game.OnGameCreated -= new Action(this.OnGameCreated);
      Game.Current.OnItemDeserializedEvent += (Action<ItemObject>) (itemObject =>
      {
        if (itemObject.Type != ItemObject.ItemTypeEnum.HandArmor)
          return;
        Utilities.RegisterMeshForGPUMorph(itemObject.MultiMeshName);
      });
    }
  }
}
