// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBBannerlordTableauManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBBannerlordTableauManager
  {
    [EngineMethod("request_character_tableau_render", false)]
    void RequestCharacterTableauRender(
      int characterCodeId,
      string path,
      UIntPtr poseEntity,
      UIntPtr cameraObject,
      int tableauType);

    [EngineMethod("initialize_character_tableau_render_system", false)]
    void InitializeCharacterTableauRenderSystem();

    [EngineMethod("get_number_of_pending_tableau_requests", false)]
    int GetNumberOfPendingTableauRequests();
  }
}
