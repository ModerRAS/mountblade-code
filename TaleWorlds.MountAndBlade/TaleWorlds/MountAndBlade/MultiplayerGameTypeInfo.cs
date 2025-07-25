// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerGameTypeInfo
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerGameTypeInfo
  {
    public string GameModule { get; private set; }

    public string GameType { get; private set; }

    public List<string> Scenes { get; private set; }

    public MultiplayerGameTypeInfo(string gameModule, string gameType)
    {
      this.GameModule = gameModule;
      this.GameType = gameType;
      this.Scenes = new List<string>();
    }
  }
}
