// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBCommon
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MBCommon
  {
    private static MBCommon.GameType _currentGameType;

    public static MBCommon.GameType CurrentGameType
    {
      get => MBCommon._currentGameType;
      set
      {
        MBCommon._currentGameType = value;
        MBAPI.IMBWorld.SetGameType((int) value);
      }
    }

    public static void PauseGameEngine()
    {
      MBCommon.IsPaused = true;
      MBAPI.IMBWorld.PauseGame();
    }

    public static void UnPauseGameEngine()
    {
      MBCommon.IsPaused = false;
      MBAPI.IMBWorld.UnpauseGame();
    }

    public static float GetApplicationTime()
    {
      return MBAPI.IMBWorld.GetGlobalTime(MBCommon.TimeType.Application);
    }

    public static float GetTotalMissionTime()
    {
      return MBAPI.IMBWorld.GetGlobalTime(MBCommon.TimeType.Mission);
    }

    public static bool IsDebugMode => false;

    public static void FixSkeletons() => MBAPI.IMBWorld.FixSkeletons();

    public static bool IsPaused { get; private set; }

    public static void CheckResourceModifications() => MBAPI.IMBWorld.CheckResourceModifications();

    public static int Hash(int i, object o)
    {
      int num = i * 397 ^ o.GetHashCode();
      num = num.ToString().GetHashCode();
      return num;
    }

    public enum GameType
    {
      Single,
      MultiClient,
      MultiServer,
      MultiClientServer,
      SingleReplay,
      SingleRecord,
    }

    [EngineStruct("rglTimer_type", false)]
    public enum TimeType
    {
      Application,
      Mission,
    }
  }
}
