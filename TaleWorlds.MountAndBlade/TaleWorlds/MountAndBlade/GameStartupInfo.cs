// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.GameStartupInfo
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class GameStartupInfo
  {
    public GameStartupType StartupType { get; internal set; }

    public DedicatedServerType DedicatedServerType { get; internal set; }

    public bool PlayerHostedDedicatedServer { get; internal set; }

    public bool IsSinglePlatformServer { get; internal set; }

    public string CustomServerHostIP { get; internal set; } = string.Empty;

    public int ServerPort { get; internal set; }

    public string ServerRegion { get; internal set; }

    public sbyte ServerPriority { get; internal set; }

    public string ServerGameMode { get; internal set; }

    public string CustomGameServerConfigFile { get; internal set; }

    public string CustomGameServerNameOverride { get; internal set; }

    public string CustomGameServerPasswordOverride { get; internal set; }

    public string CustomGameServerAuthToken { get; internal set; }

    public bool CustomGameServerAllowsOptionalModules { get; internal set; } = true;

    public string OverridenUserName { get; internal set; }

    public string PremadeGameType { get; internal set; }

    public int Permission { get; internal set; }

    public string EpicExchangeCode { get; internal set; }

    public bool IsContinueGame { get; internal set; }

    public double ServerBandwidthLimitInMbps { get; internal set; }

    public int ServerTickRate { get; internal set; }
  }
}
