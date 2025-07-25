// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBVoiceManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBVoiceManager
  {
    [EngineMethod("get_voice_type_index", false)]
    int GetVoiceTypeIndex(string voiceType);

    [EngineMethod("get_voice_definition_count_with_monster_sound_and_collision_info_class_name", false)]
    int GetVoiceDefinitionCountWithMonsterSoundAndCollisionInfoClassName(string className);

    [EngineMethod("get_voice_definitions_with_monster_sound_and_collision_info_class_name", false)]
    void GetVoiceDefinitionListWithMonsterSoundAndCollisionInfoClassName(
      string className,
      int[] definitionIndices);
  }
}
