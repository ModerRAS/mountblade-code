// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.WallSegment
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Objects.Siege;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class WallSegment : SynchedMissionObject, IPointDefendable, ICastleKeyPosition
  {
    private const string WaitPositionTag = "wait_pos";
    private const string MiddlePositionTag = "middle_pos";
    private const string AttackerWaitPositionTag = "attacker_wait_pos";
    private const string SolidChildTag = "solid_child";
    private const string BrokenChildTag = "broken_child";
    [EditableScriptComponentVariable(true)]
    private int _properGroundOutsideNavmeshID = -1;
    [EditableScriptComponentVariable(true)]
    private int _properGroundInsideNavmeshID = -1;
    [EditableScriptComponentVariable(true)]
    private int _underDebrisOutsideNavmeshID = -1;
    [EditableScriptComponentVariable(true)]
    private int _underDebrisInsideNavmeshID = -1;
    [EditableScriptComponentVariable(true)]
    private int _overDebrisOutsideNavmeshID = -1;
    [EditableScriptComponentVariable(true)]
    private int _overDebrisInsideNavmeshID = -1;
    [EditableScriptComponentVariable(true)]
    private int _underDebrisGenericNavmeshID = -1;
    [EditableScriptComponentVariable(true)]
    private int _overDebrisGenericNavmeshID = -1;
    [EditableScriptComponentVariable(true)]
    private int _onSolidWallGenericNavmeshID = -1;
    public string SideTag;

    public TacticalPosition MiddlePosition { get; private set; }

    public TacticalPosition WaitPosition { get; private set; }

    public TacticalPosition AttackerWaitPosition { get; private set; }

    public IPrimarySiegeWeapon AttackerSiegeWeapon { get; set; }

    public IEnumerable<DefencePoint> DefencePoints { get; protected set; }

    public bool IsBreachedWall { get; private set; }

    public WorldFrame MiddleFrame { get; private set; }

    public WorldFrame DefenseWaitFrame { get; private set; }

    public WorldFrame AttackerWaitFrame { get; private set; } = WorldFrame.Invalid;

    public FormationAI.BehaviorSide DefenseSide { get; private set; }

    public Vec3 GetPosition() => this.GameEntity.GlobalPosition;

    public WallSegment() => this.AttackerSiegeWeapon = (IPrimarySiegeWeapon) null;

    protected internal override void OnInit()
    {
      base.OnInit();
      switch (this.SideTag)
      {
        case "left":
          this.DefenseSide = FormationAI.BehaviorSide.Left;
          break;
        case "middle":
          this.DefenseSide = FormationAI.BehaviorSide.Middle;
          break;
        case "right":
          this.DefenseSide = FormationAI.BehaviorSide.Right;
          break;
        default:
          this.DefenseSide = FormationAI.BehaviorSide.BehaviorSideNotSet;
          break;
      }
      GameEntity entity = this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (ce => ce.HasTag("solid_child")));
      List<GameEntity> gameEntityList1 = new List<GameEntity>();
      List<GameEntity> gameEntityList2 = new List<GameEntity>();
      List<GameEntity> source1;
      List<GameEntity> source2;
      if ((NativeObject) entity != (NativeObject) null)
      {
        source1 = entity.CollectChildrenEntitiesWithTag("middle_pos");
        source2 = entity.CollectChildrenEntitiesWithTag("wait_pos");
      }
      else
      {
        source1 = this.GameEntity.CollectChildrenEntitiesWithTag("middle_pos");
        source2 = this.GameEntity.CollectChildrenEntitiesWithTag("wait_pos");
      }
      MatrixFrame globalFrame1;
      if (source1.Count > 0)
      {
        GameEntity gameEntity = source1.FirstOrDefault<GameEntity>();
        this.MiddlePosition = gameEntity.GetFirstScriptOfType<TacticalPosition>();
        globalFrame1 = gameEntity.GetGlobalFrame();
      }
      else
        globalFrame1 = this.GameEntity.GetGlobalFrame();
      this.MiddleFrame = new WorldFrame(globalFrame1.rotation, globalFrame1.origin.ToWorldPosition());
      if (source2.Count > 0)
      {
        GameEntity gameEntity = source2.FirstOrDefault<GameEntity>();
        this.WaitPosition = gameEntity.GetFirstScriptOfType<TacticalPosition>();
        MatrixFrame globalFrame2 = gameEntity.GetGlobalFrame();
        this.DefenseWaitFrame = new WorldFrame(globalFrame2.rotation, globalFrame2.origin.ToWorldPosition());
      }
      else
        this.DefenseWaitFrame = this.MiddleFrame;
    }

    protected internal override bool MovesEntity() => false;

    public void OnChooseUsedWallSegment(bool isBroken)
    {
      GameEntity gameEntity1 = this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (ce => ce.HasTag("solid_child")));
      GameEntity entity = this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (ce => ce.HasTag("broken_child")));
      Scene scene = this.GameEntity.Scene;
      if (isBroken)
      {
        gameEntity1.GetFirstScriptOfType<WallSegment>().SetDisabledSynched();
        entity.GetFirstScriptOfType<WallSegment>().SetVisibleSynched(true);
        if (!GameNetwork.IsClientOrReplay)
        {
          if (this._properGroundOutsideNavmeshID > 0 && this._underDebrisOutsideNavmeshID > 0)
            scene.SeparateFacesWithId(this._properGroundOutsideNavmeshID, this._underDebrisOutsideNavmeshID);
          if (this._properGroundInsideNavmeshID > 0 && this._underDebrisInsideNavmeshID > 0)
            scene.SeparateFacesWithId(this._properGroundInsideNavmeshID, this._underDebrisInsideNavmeshID);
          if (this._underDebrisOutsideNavmeshID > 0)
            scene.SetAbilityOfFacesWithId(this._underDebrisOutsideNavmeshID, false);
          if (this._underDebrisInsideNavmeshID > 0)
            scene.SetAbilityOfFacesWithId(this._underDebrisInsideNavmeshID, false);
          if (this._underDebrisGenericNavmeshID > 0)
            scene.SetAbilityOfFacesWithId(this._underDebrisGenericNavmeshID, false);
          if (this._overDebrisOutsideNavmeshID > 0)
          {
            scene.SetAbilityOfFacesWithId(this._overDebrisOutsideNavmeshID, true);
            if (this._properGroundOutsideNavmeshID > 0)
              scene.MergeFacesWithId(this._overDebrisOutsideNavmeshID, this._properGroundOutsideNavmeshID, 0);
          }
          if (this._overDebrisInsideNavmeshID > 0)
          {
            scene.SetAbilityOfFacesWithId(this._overDebrisInsideNavmeshID, true);
            if (this._properGroundInsideNavmeshID > 0)
              scene.MergeFacesWithId(this._overDebrisInsideNavmeshID, this._properGroundInsideNavmeshID, 1);
          }
          if (this._overDebrisGenericNavmeshID > 0)
            scene.SetAbilityOfFacesWithId(this._overDebrisGenericNavmeshID, true);
          if (this._onSolidWallGenericNavmeshID > 0)
            scene.SetAbilityOfFacesWithId(this._onSolidWallGenericNavmeshID, false);
          foreach (StrategicArea strategicArea in gameEntity1.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (c => c.HasScriptOfType<StrategicArea>())).Select<GameEntity, StrategicArea>((Func<GameEntity, StrategicArea>) (c => c.GetFirstScriptOfType<StrategicArea>())))
            strategicArea.OnParentGameEntityVisibilityChanged(false);
          foreach (StrategicArea strategicArea in entity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (c => c.HasScriptOfType<StrategicArea>())).Select<GameEntity, StrategicArea>((Func<GameEntity, StrategicArea>) (c => c.GetFirstScriptOfType<StrategicArea>())))
            strategicArea.OnParentGameEntityVisibilityChanged(true);
        }
        this.IsBreachedWall = true;
        List<GameEntity> source1 = entity.CollectChildrenEntitiesWithTag("middle_pos");
        if (source1.Count > 0)
        {
          GameEntity gameEntity2 = source1.FirstOrDefault<GameEntity>();
          this.MiddlePosition = gameEntity2.GetFirstScriptOfType<TacticalPosition>();
          MatrixFrame globalFrame = gameEntity2.GetGlobalFrame();
          this.MiddleFrame = new WorldFrame(globalFrame.rotation, globalFrame.origin.ToWorldPosition());
        }
        else
        {
          MBDebug.ShowWarning("Broken child of wall does not have middle position");
          MatrixFrame globalFrame = entity.GetGlobalFrame();
          this.MiddleFrame = new WorldFrame(globalFrame.rotation, new WorldPosition(scene, UIntPtr.Zero, globalFrame.origin, false));
        }
        List<GameEntity> source2 = entity.CollectChildrenEntitiesWithTag("wait_pos");
        if (source2.Count > 0)
        {
          GameEntity gameEntity3 = source2.FirstOrDefault<GameEntity>();
          this.WaitPosition = gameEntity3.GetFirstScriptOfType<TacticalPosition>();
          MatrixFrame globalFrame = gameEntity3.GetGlobalFrame();
          this.DefenseWaitFrame = new WorldFrame(globalFrame.rotation, globalFrame.origin.ToWorldPosition());
        }
        else
          this.DefenseWaitFrame = this.MiddleFrame;
        gameEntity1.GetFirstScriptOfType<WallSegment>()?.SetDisabledAndMakeInvisible(true);
        GameEntity gameEntity4 = entity.CollectChildrenEntitiesWithTag("attacker_wait_pos").FirstOrDefault<GameEntity>();
        if (!((NativeObject) gameEntity4 != (NativeObject) null))
          return;
        MatrixFrame globalFrame1 = gameEntity4.GetGlobalFrame();
        this.AttackerWaitFrame = new WorldFrame(globalFrame1.rotation, globalFrame1.origin.ToWorldPosition());
        this.AttackerWaitPosition = gameEntity4.GetFirstScriptOfType<TacticalPosition>();
      }
      else
      {
        if (GameNetwork.IsClientOrReplay)
          return;
        gameEntity1.GetFirstScriptOfType<WallSegment>().SetVisibleSynched(true);
        entity.GetFirstScriptOfType<WallSegment>().SetDisabledSynched();
        if (this._overDebrisOutsideNavmeshID > 0)
          scene.SetAbilityOfFacesWithId(this._overDebrisOutsideNavmeshID, false);
        if (this._overDebrisInsideNavmeshID > 0)
          scene.SetAbilityOfFacesWithId(this._overDebrisInsideNavmeshID, false);
        if (this._overDebrisGenericNavmeshID > 0)
          scene.SetAbilityOfFacesWithId(this._overDebrisGenericNavmeshID, false);
        foreach (StrategicArea strategicArea in gameEntity1.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (c => c.HasScriptOfType<StrategicArea>())).Select<GameEntity, StrategicArea>((Func<GameEntity, StrategicArea>) (c => c.GetFirstScriptOfType<StrategicArea>())))
          strategicArea.OnParentGameEntityVisibilityChanged(true);
        foreach (StrategicArea strategicArea in entity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (c => c.HasScriptOfType<StrategicArea>())).Select<GameEntity, StrategicArea>((Func<GameEntity, StrategicArea>) (c => c.GetFirstScriptOfType<StrategicArea>())))
          strategicArea.OnParentGameEntityVisibilityChanged(false);
      }
    }

    protected internal override void OnEditorValidate() => base.OnEditorValidate();

    protected internal override bool OnCheckForProblems()
    {
      bool flag = base.OnCheckForProblems();
      if (!this.Scene.IsMultiplayerScene() && this.SideTag == "left")
      {
        List<GameEntity> entities = new List<GameEntity>();
        this.Scene.GetEntities(ref entities);
        int num = 0;
        foreach (GameEntity gameEntity in entities)
        {
          if (this.GameEntity.GetUpgradeLevelOfEntity() == gameEntity.GetUpgradeLevelOfEntity() && gameEntity.GetFirstScriptOfType<SiegeLadderSpawner>() != null)
            ++num;
        }
        if (num != 4)
        {
          MBEditor.AddEntityWarning(this.GameEntity, "The siege ladder count in the scene is not 4, for upgrade level " + this.GameEntity.GetUpgradeLevelOfEntity().ToString() + ". Current siege ladder count: " + num.ToString());
          flag = true;
        }
      }
      return flag;
    }
  }
}
