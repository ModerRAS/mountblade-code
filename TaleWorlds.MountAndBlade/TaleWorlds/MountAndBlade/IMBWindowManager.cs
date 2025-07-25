// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBWindowManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBWindowManager
  {
    [EngineMethod("erase_message_lines", false)]
    void EraseMessageLines();

    [EngineMethod("world_to_screen", false)]
    float WorldToScreen(
      UIntPtr cameraPointer,
      Vec3 worldSpacePosition,
      ref float screenX,
      ref float screenY,
      ref float w);

    [EngineMethod("world_to_screen_with_fixed_z", false)]
    float WorldToScreenWithFixedZ(
      UIntPtr cameraPointer,
      Vec3 cameraPosition,
      Vec3 worldSpacePosition,
      ref float screenX,
      ref float screenY,
      ref float w);

    [EngineMethod("dont_change_cursor_pos", false)]
    void DontChangeCursorPos();

    [EngineMethod("pre_display", false)]
    void PreDisplay();

    [EngineMethod("screen_to_world", false)]
    void ScreenToWorld(
      UIntPtr pointer,
      float screenX,
      float screenY,
      float z,
      ref Vec3 worldSpacePosition);
  }
}
