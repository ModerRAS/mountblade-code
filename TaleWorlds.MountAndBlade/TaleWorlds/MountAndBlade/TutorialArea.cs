// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TutorialArea
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TutorialArea : MissionObject
  {
    [EditableScriptComponentVariable(true)]
    private TutorialArea.TrainingType _typeOfTraining;
    [EditableScriptComponentVariable(true)]
    private string _tagPrefix = "A_";
    private readonly List<TutorialArea.TutorialEntity> _tagWeapon = new List<TutorialArea.TutorialEntity>();
    private readonly List<VolumeBox> _volumeBoxes = new List<VolumeBox>();
    private readonly List<GameEntity> _boundaries = new List<GameEntity>();
    private bool _boundariesHidden;
    private readonly List<GameEntity> _highlightedEntities = new List<GameEntity>();
    private readonly List<ItemObject> _allowedWeaponsHelper = new List<ItemObject>();
    private readonly MBList<TrainingIcon> _trainingIcons = new MBList<TrainingIcon>();

    public MBReadOnlyList<TrainingIcon> TrainingIconsReadOnly
    {
      get => (MBReadOnlyList<TrainingIcon>) this._trainingIcons;
    }

    public TutorialArea.TrainingType TypeOfTraining
    {
      get => this._typeOfTraining;
      private set => this._typeOfTraining = value;
    }

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this.GatherWeapons();
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      if (MBEditor.IsEntitySelected(this.GameEntity))
      {
        uint num = 4294901760;
        foreach (TutorialArea.TutorialEntity tutorialEntity in this._tagWeapon)
        {
          foreach (Tuple<GameEntity, MatrixFrame> entity in tutorialEntity.EntityList)
          {
            entity.Item1.SetContourColor(new uint?(num));
            this._highlightedEntities.Add(entity.Item1);
          }
        }
      }
      else
      {
        foreach (GameEntity highlightedEntity in this._highlightedEntities)
          highlightedEntity.SetContourColor(new uint?());
        this._highlightedEntities.Clear();
      }
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      List<GameEntity> entities = new List<GameEntity>();
      this.GameEntity.Scene.GetEntities(ref entities);
      foreach (GameEntity gameEntity in entities)
      {
        foreach (string tag in gameEntity.Tags)
        {
          if (tag.StartsWith(this._tagPrefix) && gameEntity.HasScriptOfType<WeaponSpawner>())
          {
            gameEntity.GetFirstScriptOfType<WeaponSpawner>().SpawnWeapon();
            break;
          }
        }
      }
      this.GatherWeapons();
    }

    public override void AfterMissionStart()
    {
      this.DeactivateAllWeapons(true);
      this.MarkTrainingIcons(false);
    }

    private void GatherWeapons()
    {
      List<GameEntity> entities = new List<GameEntity>();
      this.GameEntity.Scene.GetEntities(ref entities);
      foreach (GameEntity gameEntity in entities)
      {
        foreach (string tag in gameEntity.Tags)
        {
          TrainingIcon firstScriptOfType = gameEntity.GetFirstScriptOfType<TrainingIcon>();
          if (firstScriptOfType != null)
          {
            if (firstScriptOfType.GetTrainingSubTypeTag().StartsWith(this._tagPrefix))
              this._trainingIcons.Add(firstScriptOfType);
          }
          else if (tag == this._tagPrefix + "boundary")
            this.AddBoundary(gameEntity);
          else if (tag.StartsWith(this._tagPrefix))
            this.AddTaggedWeapon(gameEntity, tag);
        }
      }
    }

    public void MarkTrainingIcons(bool mark)
    {
      foreach (TrainingIcon trainingIcon in (List<TrainingIcon>) this._trainingIcons)
        trainingIcon.SetMarked(mark);
    }

    public TrainingIcon GetActiveTrainingIcon()
    {
      foreach (TrainingIcon trainingIcon in (List<TrainingIcon>) this._trainingIcons)
      {
        if (trainingIcon.GetIsActivated())
          return trainingIcon;
      }
      return (TrainingIcon) null;
    }

    private void AddBoundary(GameEntity boundary) => this._boundaries.Add(boundary);

    private void AddTaggedWeapon(GameEntity weapon, string tag)
    {
      if (weapon.HasScriptOfType<VolumeBox>())
      {
        this._volumeBoxes.Add(weapon.GetFirstScriptOfType<VolumeBox>());
      }
      else
      {
        bool flag = false;
        foreach (TutorialArea.TutorialEntity tutorialEntity in this._tagWeapon)
        {
          if (tutorialEntity.Tag == tag)
          {
            tutorialEntity.EntityList.Add(Tuple.Create<GameEntity, MatrixFrame>(weapon, weapon.GetGlobalFrame()));
            if (weapon.HasScriptOfType<DestructableComponent>())
              tutorialEntity.DestructableComponents.Add(weapon.GetFirstScriptOfType<DestructableComponent>());
            else if (weapon.HasScriptOfType<SpawnedItemEntity>())
            {
              tutorialEntity.WeaponList.Add(weapon);
              tutorialEntity.WeaponNames.Add(MBObjectManager.Instance.GetObject<ItemObject>(weapon.GetFirstScriptOfType<SpawnedItemEntity>().WeaponCopy.Item.StringId));
            }
            flag = true;
            break;
          }
        }
        if (flag)
          return;
        List<TutorialArea.TutorialEntity> tagWeapon = this._tagWeapon;
        string tag1 = tag;
        List<Tuple<GameEntity, MatrixFrame>> entityList = new List<Tuple<GameEntity, MatrixFrame>>();
        entityList.Add(Tuple.Create<GameEntity, MatrixFrame>(weapon, weapon.GetGlobalFrame()));
        List<DestructableComponent> destructableComponents = new List<DestructableComponent>();
        List<GameEntity> weapon1 = new List<GameEntity>();
        List<ItemObject> weaponNames = new List<ItemObject>();
        TutorialArea.TutorialEntity tutorialEntity1 = new TutorialArea.TutorialEntity(tag1, entityList, destructableComponents, weapon1, weaponNames);
        tagWeapon.Add(tutorialEntity1);
        if (weapon.HasScriptOfType<DestructableComponent>())
        {
          this._tagWeapon[this._tagWeapon.Count - 1].DestructableComponents.Add(weapon.GetFirstScriptOfType<DestructableComponent>());
        }
        else
        {
          if (!weapon.HasScriptOfType<SpawnedItemEntity>())
            return;
          this._tagWeapon[this._tagWeapon.Count - 1].WeaponList.Add(weapon);
          this._tagWeapon[this._tagWeapon.Count - 1].WeaponNames.Add(MBObjectManager.Instance.GetObject<ItemObject>(weapon.GetFirstScriptOfType<SpawnedItemEntity>().WeaponCopy.Item.StringId));
        }
      }
    }

    public int GetIndexFromTag(string tag)
    {
      for (int index = 0; index < this._tagWeapon.Count; ++index)
      {
        if (this._tagWeapon[index].Tag == tag)
          return index;
      }
      return -1;
    }

    public List<string> GetSubTrainingTags()
    {
      List<string> subTrainingTags = new List<string>();
      foreach (TutorialArea.TutorialEntity tutorialEntity in this._tagWeapon)
        subTrainingTags.Add(tutorialEntity.Tag);
      return subTrainingTags;
    }

    public void ActivateTaggedWeapons(int index)
    {
      if (index >= this._tagWeapon.Count)
        return;
      this.DeactivateAllWeapons(false);
      foreach (Tuple<GameEntity, MatrixFrame> entity in this._tagWeapon[index].EntityList)
        entity.Item1.SetVisibilityExcludeParents(true);
    }

    public void EquipWeaponsToPlayer(int index)
    {
      foreach (GameEntity weapon in this._tagWeapon[index].WeaponList)
        Agent.Main.OnItemPickup(weapon.GetFirstScriptOfType<SpawnedItemEntity>(), EquipmentIndex.None, out bool _);
    }

    public void DeactivateAllWeapons(bool resetDestructibles)
    {
      foreach (TutorialArea.TutorialEntity tutorialEntity in this._tagWeapon)
      {
        if (resetDestructibles)
        {
          foreach (DestructableComponent destructableComponent in tutorialEntity.DestructableComponents)
          {
            destructableComponent.Reset();
            destructableComponent.HitPoint = 1000000f;
            destructableComponent.GameEntity.GetFirstScriptOfType<Markable>()?.DisableMarkerActivation();
          }
        }
        foreach (Tuple<GameEntity, MatrixFrame> entity in tutorialEntity.EntityList)
        {
          if (!entity.Item1.HasScriptOfType<DestructableComponent>())
          {
            if (entity.Item1.HasScriptOfType<SpawnedItemEntity>())
            {
              entity.Item1.GetFirstScriptOfType<SpawnedItemEntity>().StopPhysicsAndSetFrameForClient(entity.Item2, (GameEntity) null);
              entity.Item1.GetFirstScriptOfType<SpawnedItemEntity>().HasLifeTime = false;
            }
            entity.Item1.SetGlobalFrame(entity.Item2);
          }
          entity.Item1.SetVisibilityExcludeParents(false);
        }
      }
      this.HideBoundaries();
    }

    public void ActivateBoundaries()
    {
      if (!this._boundariesHidden)
        return;
      foreach (GameEntity boundary in this._boundaries)
        boundary.SetVisibilityExcludeParents(true);
      this._boundariesHidden = false;
    }

    public void HideBoundaries()
    {
      if (this._boundariesHidden)
        return;
      foreach (GameEntity boundary in this._boundaries)
        boundary.SetVisibilityExcludeParents(false);
      this._boundariesHidden = true;
    }

    public int GetBreakablesCount(int index) => this._tagWeapon[index].DestructableComponents.Count;

    public void MakeDestructible(int index)
    {
      for (int index1 = 0; index1 < this._tagWeapon[index].DestructableComponents.Count; ++index1)
        this._tagWeapon[index].DestructableComponents[index1].HitPoint = this._tagWeapon[index].DestructableComponents[index1].MaxHitPoint;
    }

    public void MarkAllTargets(int index, bool mark)
    {
      foreach (DestructableComponent destructableComponent in this._tagWeapon[index].DestructableComponents)
      {
        if (mark)
          destructableComponent.GameEntity.GetFirstScriptOfType<Markable>()?.ActivateMarkerFor(3f, 10f);
        else
          destructableComponent.GameEntity.GetFirstScriptOfType<Markable>()?.DisableMarkerActivation();
      }
    }

    public void ResetMarkingTargetTimers(int index)
    {
      foreach (ScriptComponentBehavior destructableComponent in this._tagWeapon[index].DestructableComponents)
        destructableComponent.GameEntity.GetFirstScriptOfType<Markable>()?.ResetPassiveDurationTimer();
    }

    public void MakeInDestructible(int index)
    {
      for (int index1 = 0; index1 < this._tagWeapon[index].DestructableComponents.Count; ++index1)
        this._tagWeapon[index].DestructableComponents[index1].HitPoint = 1000000f;
    }

    public bool AllBreakablesAreBroken(int index)
    {
      for (int index1 = 0; index1 < this._tagWeapon[index].DestructableComponents.Count; ++index1)
      {
        if (!this._tagWeapon[index].DestructableComponents[index1].IsDestroyed)
          return false;
      }
      return true;
    }

    public int GetBrokenBreakableCount(int index)
    {
      int brokenBreakableCount = 0;
      for (int index1 = 0; index1 < this._tagWeapon[index].DestructableComponents.Count; ++index1)
      {
        if (this._tagWeapon[index].DestructableComponents[index1].IsDestroyed)
          ++brokenBreakableCount;
      }
      return brokenBreakableCount;
    }

    public int GetUnbrokenBreakableCount(int index)
    {
      int unbrokenBreakableCount = 0;
      for (int index1 = 0; index1 < this._tagWeapon[index].DestructableComponents.Count; ++index1)
      {
        if (!this._tagWeapon[index].DestructableComponents[index1].IsDestroyed)
          ++unbrokenBreakableCount;
      }
      return unbrokenBreakableCount;
    }

    public void ResetBreakables(int index, bool makeIndestructible = true)
    {
      for (int index1 = 0; index1 < this._tagWeapon[index].DestructableComponents.Count; ++index1)
      {
        if (makeIndestructible)
          this._tagWeapon[index].DestructableComponents[index1].HitPoint = 1000000f;
        this._tagWeapon[index].DestructableComponents[index1].Reset();
      }
    }

    public bool HasMainAgentPickedAll(int index)
    {
      foreach (GameEntity weapon in this._tagWeapon[index].WeaponList)
      {
        if (weapon.HasScriptOfType<SpawnedItemEntity>())
          return false;
      }
      return true;
    }

    public void CheckMainAgentEquipment(int index)
    {
      this._allowedWeaponsHelper.Clear();
      this._allowedWeaponsHelper.AddRange((IEnumerable<ItemObject>) this._tagWeapon[index].WeaponNames);
      for (EquipmentIndex i = EquipmentIndex.WeaponItemBeginSlot; i <= EquipmentIndex.Weapon3; i++)
      {
        if (!Mission.Current.MainAgent.Equipment[i].IsEmpty)
        {
          if (this._allowedWeaponsHelper.Exists((Predicate<ItemObject>) (x => x == Mission.Current.MainAgent.Equipment[i].Item)))
          {
            this._allowedWeaponsHelper.Remove(Mission.Current.MainAgent.Equipment[i].Item);
          }
          else
          {
            Mission.Current.MainAgent.DropItem(i);
            MBInformationManager.AddQuickInformation(new TextObject("{=3PP01vFv}Keep away from that weapon."));
          }
        }
      }
    }

    public void CheckWeapons(int index)
    {
      foreach (GameEntity weapon in this._tagWeapon[index].WeaponList)
      {
        if (weapon.HasScriptOfType<SpawnedItemEntity>())
          weapon.GetFirstScriptOfType<SpawnedItemEntity>().HasLifeTime = false;
      }
    }

    public bool IsPositionInsideTutorialArea(Vec3 position, out string[] volumeBoxTags)
    {
      foreach (VolumeBox volumeBox in this._volumeBoxes)
      {
        if (volumeBox.IsPointIn(position))
        {
          volumeBoxTags = volumeBox.GameEntity.Tags;
          return true;
        }
      }
      volumeBoxTags = (string[]) null;
      return false;
    }

    public enum TrainingType
    {
      Bow,
      Melee,
      Mounted,
      AdvancedMelee,
    }

    private struct TutorialEntity
    {
      public string Tag;
      public List<Tuple<GameEntity, MatrixFrame>> EntityList;
      public List<DestructableComponent> DestructableComponents;
      public List<GameEntity> WeaponList;
      public List<ItemObject> WeaponNames;

      public TutorialEntity(
        string tag,
        List<Tuple<GameEntity, MatrixFrame>> entityList,
        List<DestructableComponent> destructableComponents,
        List<GameEntity> weapon,
        List<ItemObject> weaponNames)
      {
        this.Tag = tag;
        this.EntityList = entityList;
        this.DestructableComponents = destructableComponents;
        this.WeaponList = weapon;
        this.WeaponNames = weaponNames;
      }
    }
  }
}
