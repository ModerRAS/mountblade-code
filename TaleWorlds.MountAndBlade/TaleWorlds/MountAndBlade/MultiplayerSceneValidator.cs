// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerSceneValidator
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerSceneValidator : ScriptComponentBehavior
  {
    public SimpleButton SelectFaultyEntities;

    protected internal override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      if (!(variableName == "SelectFaultyEntities"))
        return;
      this.SelectInvalidEntities();
    }

    protected internal override void OnSceneSave(string saveFolder)
    {
      base.OnSceneSave(saveFolder);
      foreach (GameEntity invalidEntity in this.GetInvalidEntities())
        ;
    }

    private List<GameEntity> GetInvalidEntities()
    {
      List<GameEntity> invalidEntities = new List<GameEntity>();
      List<GameEntity> entities = new List<GameEntity>();
      this.Scene.GetEntities(ref entities);
      foreach (GameEntity gameEntity in entities)
      {
        foreach (ScriptComponentBehavior scriptComponent in gameEntity.GetScriptComponents())
        {
          if (scriptComponent != null && (scriptComponent.GetType().IsSubclassOf(typeof (MissionObject)) || scriptComponent.GetType() == typeof (MissionObject) && scriptComponent.IsOnlyVisual()))
          {
            invalidEntities.Add(gameEntity);
            break;
          }
        }
      }
      return invalidEntities;
    }

    private void SelectInvalidEntities()
    {
      this.GameEntity.DeselectEntityOnEditor();
      foreach (GameEntity invalidEntity in this.GetInvalidEntities())
        invalidEntity.SelectEntityOnEditor();
    }
  }
}
