// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BasicGameStarter
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BasicGameStarter : IGameStarter
  {
    private List<GameModel> _models;

    IEnumerable<GameModel> IGameStarter.Models => (IEnumerable<GameModel>) this._models;

    public BasicGameStarter() => this._models = new List<GameModel>();

    void IGameStarter.AddModel(GameModel gameModel) => this._models.Add(gameModel);
  }
}
