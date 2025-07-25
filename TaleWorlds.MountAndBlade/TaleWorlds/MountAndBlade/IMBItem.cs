// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBItem
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBItem
  {
    [EngineMethod("get_item_usage_index", false)]
    int GetItemUsageIndex(string itemusagename);

    [EngineMethod("get_item_holster_index", false)]
    int GetItemHolsterIndex(string itemholstername);

    [EngineMethod("get_item_is_passive_usage", false)]
    bool GetItemIsPassiveUsage(string itemUsageName);

    [EngineMethod("get_holster_frame_by_index", false)]
    void GetHolsterFrameByIndex(int index, ref MatrixFrame outFrame);

    [EngineMethod("get_item_usage_set_flags", false)]
    int GetItemUsageSetFlags(string ItemUsageName);

    [EngineMethod("get_item_usage_reload_action_code", false)]
    int GetItemUsageReloadActionCode(
      string itemUsageName,
      int usageDirection,
      bool isMounted,
      int leftHandUsageSetIndex,
      bool isLeftStance);

    [EngineMethod("get_item_usage_strike_type", false)]
    int GetItemUsageStrikeType(
      string itemUsageName,
      int usageDirection,
      bool isMounted,
      int leftHandUsageSetIndex,
      bool isLeftStance);

    [EngineMethod("get_missile_range", false)]
    float GetMissileRange(float shot_speed, float z_diff);
  }
}
