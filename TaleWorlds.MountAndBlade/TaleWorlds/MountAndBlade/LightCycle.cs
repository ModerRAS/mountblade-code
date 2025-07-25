// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.LightCycle
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class LightCycle : ScriptComponentBehavior
  {
    public bool alwaysBurn;
    private bool visibility;

    private void SetVisibility()
    {
      Light light = this.GameEntity.GetLight();
      float timeOfDay = this.Scene.TimeOfDay;
      this.visibility = (double) timeOfDay < 6.0 || (double) timeOfDay > 20.0 || this.Scene.IsAtmosphereIndoor || this.alwaysBurn;
      if ((NativeObject) light != (NativeObject) null)
        light.SetVisibility(this.visibility);
      foreach (GameEntity child in this.GameEntity.GetChildren())
        child.SetVisibilityExcludeParents(this.visibility);
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this.SetVisibility();
      if (this.visibility)
        return;
      List<GameEntity> children = new List<GameEntity>();
      this.GameEntity.GetChildrenRecursive(ref children);
      for (int index = children.Count - 1; index >= 0; --index)
        this.Scene.RemoveEntity(children[index], 0);
      this.GameEntity.RemoveScriptComponent(this.ScriptComponent.Pointer, 0);
    }

    protected internal override void OnEditorTick(float dt) => this.SetVisibility();

    protected internal override bool MovesEntity() => false;
  }
}
