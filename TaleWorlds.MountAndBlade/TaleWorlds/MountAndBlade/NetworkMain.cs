// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.NetworkMain
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade.Diamond;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class NetworkMain
  {
    public static LobbyClient GameClient { get; private set; }

    public static CommunityClient CommunityClient { get; private set; }

    public static CustomBattleServer CustomBattleServer { get; private set; }

    public static void SetPeers(
      LobbyClient gameClient,
      CommunityClient communityClient,
      CustomBattleServer customBattleServer)
    {
      NetworkMain.GameClient = gameClient;
      NetworkMain.CommunityClient = communityClient;
      NetworkMain.CustomBattleServer = customBattleServer;
    }
  }
}
