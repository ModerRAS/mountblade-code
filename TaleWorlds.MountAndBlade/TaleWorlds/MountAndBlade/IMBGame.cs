// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBGame
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBGame
  {
    [EngineMethod("start_new", false)]
    void StartNew();

    [EngineMethod("load_module_data", false)]
    void LoadModuleData(bool isLoadGame);
  }
}
