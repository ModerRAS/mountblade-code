// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DestructableMissionObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [Obsolete]
  public class DestructableMissionObject : MissionObject
  {
    protected internal override void OnEditorInit()
    {
      Debug.FailedAssert("This scene is using old prefabs with the old destruction system, please update!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\DestructableMissionObject.cs", nameof (OnEditorInit), 18);
    }

    protected internal override void OnInit()
    {
      Debug.FailedAssert("This scene is using old prefabs with the old destruction system, please update! The game will now close!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\DestructableMissionObject.cs", nameof (OnInit), 23);
      Environment.Exit(0);
    }
  }
}
