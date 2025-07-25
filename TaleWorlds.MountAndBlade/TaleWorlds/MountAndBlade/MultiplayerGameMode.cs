// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerGameMode
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade.Diamond;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MultiplayerGameMode
  {
    public string Name { get; private set; }

    protected MultiplayerGameMode(string name) => this.Name = name;

    public abstract void JoinCustomGame(JoinGameData joinGameData);

    public abstract void StartMultiplayerGame(string scene);
  }
}
