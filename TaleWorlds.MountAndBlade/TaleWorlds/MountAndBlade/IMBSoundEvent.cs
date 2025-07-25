// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBSoundEvent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBSoundEvent
  {
    [EngineMethod("create_event_from_external_file", false)]
    int CreateEventFromExternalFile(
      string programmerSoundEventName,
      string filePath,
      UIntPtr scene);

    [EngineMethod("create_event_from_sound_buffer", false)]
    int CreateEventFromSoundBuffer(
      string programmerSoundEventName,
      byte[] soundBuffer,
      UIntPtr scene);

    [EngineMethod("play_sound", false)]
    bool PlaySound(int fmodEventIndex, ref Vec3 position);

    [EngineMethod("play_sound_with_int_param", false)]
    bool PlaySoundWithIntParam(
      int fmodEventIndex,
      int paramIndex,
      float paramVal,
      ref Vec3 position);

    [EngineMethod("play_sound_with_str_param", false)]
    bool PlaySoundWithStrParam(
      int fmodEventIndex,
      string paramName,
      float paramVal,
      ref Vec3 position);

    [EngineMethod("play_sound_with_param", false)]
    bool PlaySoundWithParam(int soundCodeId, SoundEventParameter parameter, ref Vec3 position);
  }
}
