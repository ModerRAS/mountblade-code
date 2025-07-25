// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.NameplateVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Tutorial;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate
{
  public class NameplateVM : ViewModel
  {
    protected bool _bindIsTargetedByTutorial;
    private Vec2 _position;
    private bool _isVisibleOnMap;
    private string _factionColor;
    private int _sizeType;
    private bool _isTargetedByTutorial;
    private float _distanceToCamera;

    public double Scale { get; set; }

    public int NameplateOrder { get; set; }

    public NameplateVM()
    {
      if (Game.Current == null)
        return;
      Game.Current.EventManager.RegisterEvent<TutorialNotificationElementChangeEvent>(new Action<TutorialNotificationElementChangeEvent>(this.OnTutorialNotificationElementChanged));
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      Game.Current.EventManager.UnregisterEvent<TutorialNotificationElementChangeEvent>(new Action<TutorialNotificationElementChangeEvent>(this.OnTutorialNotificationElementChanged));
    }

    private void OnTutorialNotificationElementChanged(TutorialNotificationElementChangeEvent obj)
    {
      this.RefreshTutorialStatus(obj?.NewNotificationElementID ?? string.Empty);
    }

    public virtual void Initialize(GameEntity strategicEntity) => this.SizeType = 1;

    public virtual void RefreshDynamicProperties(bool forceUpdate)
    {
    }

    public virtual void RefreshPosition()
    {
    }

    public virtual void RefreshRelationStatus()
    {
    }

    public virtual void RefreshTutorialStatus(string newTutorialHighlightElementID)
    {
    }

    public int SizeType
    {
      get => this._sizeType;
      set
      {
        if (value == this._sizeType)
          return;
        this._sizeType = value;
        this.OnPropertyChangedWithValue(value, nameof (SizeType));
      }
    }

    public string FactionColor
    {
      get => this._factionColor;
      set
      {
        if (!(value != this._factionColor))
          return;
        this._factionColor = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (FactionColor));
      }
    }

    public float DistanceToCamera
    {
      get => this._distanceToCamera;
      set
      {
        if ((double) value == (double) this._distanceToCamera)
          return;
        this._distanceToCamera = value;
        this.OnPropertyChangedWithValue(value, nameof (DistanceToCamera));
      }
    }

    public bool IsVisibleOnMap
    {
      get => this._isVisibleOnMap;
      set
      {
        if (value == this._isVisibleOnMap)
          return;
        this._isVisibleOnMap = value;
        this.OnPropertyChangedWithValue(value, nameof (IsVisibleOnMap));
      }
    }

    public bool IsTargetedByTutorial
    {
      get => this._isTargetedByTutorial;
      set
      {
        if (value == this._isTargetedByTutorial)
          return;
        this._isTargetedByTutorial = value;
        this.OnPropertyChangedWithValue(value, nameof (IsTargetedByTutorial));
        this.OnPropertyChanged("ShouldShowFullName");
        this.OnPropertyChanged("IsTracked");
      }
    }

    public Vec2 Position
    {
      get => this._position;
      set
      {
        if (!(this._position != value))
          return;
        this._position = value;
        this.OnPropertyChangedWithValue(value, nameof (Position));
      }
    }

    protected enum NameplateSize
    {
      Small,
      Normal,
      Big,
    }
  }
}
