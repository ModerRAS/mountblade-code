// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBSoundEvent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MBSoundEvent
  {
    public static bool PlaySound(int soundCodeId, ref Vec3 position)
    {
      return MBAPI.IMBSoundEvent.PlaySound(soundCodeId, ref position);
    }

    public static bool PlaySound(int soundCodeId, Vec3 position)
    {
      Vec3 position1 = position;
      return MBAPI.IMBSoundEvent.PlaySound(soundCodeId, ref position1);
    }

    public static bool PlaySound(int soundCodeId, ref SoundEventParameter parameter, Vec3 position)
    {
      Vec3 position1 = position;
      return MBSoundEvent.PlaySound(soundCodeId, ref parameter, ref position1);
    }

    public static bool PlaySound(
      string soundPath,
      ref SoundEventParameter parameter,
      Vec3 position)
    {
      int eventIdFromString = SoundEvent.GetEventIdFromString(soundPath);
      Vec3 vec3 = position;
      ref SoundEventParameter local1 = ref parameter;
      ref Vec3 local2 = ref vec3;
      return MBSoundEvent.PlaySound(eventIdFromString, ref local1, ref local2);
    }

    public static bool PlaySound(
      int soundCodeId,
      ref SoundEventParameter parameter,
      ref Vec3 position)
    {
      return MBAPI.IMBSoundEvent.PlaySoundWithParam(soundCodeId, parameter, ref position);
    }

    public static void PlayEventFromSoundBuffer(string eventId, byte[] soundData, Scene scene)
    {
      MBAPI.IMBSoundEvent.CreateEventFromSoundBuffer(eventId, soundData, (NativeObject) scene != (NativeObject) null ? scene.Pointer : UIntPtr.Zero);
    }

    public static void CreateEventFromExternalFile(
      string programmerEventName,
      string soundFilePath,
      Scene scene)
    {
      MBAPI.IMBSoundEvent.CreateEventFromExternalFile(programmerEventName, soundFilePath, (NativeObject) scene != (NativeObject) null ? scene.Pointer : UIntPtr.Zero);
    }
  }
}
