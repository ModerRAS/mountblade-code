// Decompiled with JetBrains decompiler
// Type: TaleWorlds.ScreenSystem.ScreenBase
// Assembly: TaleWorlds.ScreenSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 93A4E59A-2741-4DEE-9F6A-10E242791002
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.ScreenSystem.dll

using System.Collections.Generic;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.ScreenSystem
{
  public abstract class ScreenBase
  {
    private readonly List<ScreenComponent> _components;
    private readonly MBList<ScreenLayer> _layers;
    private readonly List<ScreenLayer> _layersCopy;
    protected bool _shouldTickLayersThisFrame = true;
    private bool _isInitialized;

    public event ScreenBase.OnLayerAddedEvent OnAddLayer;

    public event ScreenBase.OnLayerRemovedEvent OnRemoveLayer;

    public IInputContext DebugInput => Input.DebugInput;

    public MBReadOnlyList<ScreenLayer> Layers => (MBReadOnlyList<ScreenLayer>) this._layers;

    public bool IsActive { get; private set; }

    public bool IsPaused { get; private set; }

    internal void HandleInitialize()
    {
      Debug.Print(this.ToString() + "::HandleInitialize");
      if (this._isInitialized)
        return;
      this._isInitialized = true;
      this.OnInitialize();
      Debug.ReportMemoryBookmark("ScreenBase Initialized: " + this.GetType().Name);
    }

    internal void HandleFinalize()
    {
      Debug.Print(this.ToString() + "::HandleFinalize");
      if (this._isInitialized)
      {
        this._isInitialized = false;
        this.OnFinalize();
        for (int index = this._layers.Count - 1; index >= 0; --index)
          this._layers[index].HandleFinalize();
      }
      this.IsActive = false;
      this.OnAddLayer = (ScreenBase.OnLayerAddedEvent) null;
      this.OnRemoveLayer = (ScreenBase.OnLayerRemovedEvent) null;
    }

    internal void HandleActivate()
    {
      Debug.Print(this.ToString() + "::HandleActivate");
      if (this.IsActive)
        return;
      this.IsActive = true;
      for (int index = this._layers.Count - 1; index >= 0; --index)
      {
        ScreenLayer layer = this._layers[index];
        if (!layer.IsActive)
          layer.HandleActivate();
      }
      this.OnActivate();
    }

    internal void HandleDeactivate()
    {
      Debug.Print(this.ToString() + "::HandleDeactivate");
      if (!this.IsActive)
        return;
      this.IsActive = false;
      for (int index = this._layers.Count - 1; index >= 0; --index)
      {
        ScreenLayer layer = this._layers[index];
        if (layer.IsActive)
          layer.HandleDeactivate();
      }
      this.OnDeactivate();
    }

    internal void HandleResume()
    {
      Debug.Print(this.ToString() + "::HandleResume");
      if (!this.IsPaused)
        return;
      for (int index = this._layers.Count - 1; index >= 0; --index)
      {
        ScreenLayer layer = this._layers[index];
        if (!layer.IsActive)
          layer.HandleActivate();
      }
      this.IsPaused = false;
      this.OnResume();
    }

    internal void HandlePause()
    {
      Debug.Print(this.ToString() + "::HandlePause");
      if (this.IsPaused)
        return;
      for (int index = this._layers.Count - 1; index >= 0; --index)
      {
        ScreenLayer layer = this._layers[index];
        if (layer.IsActive)
          layer.HandleDeactivate();
      }
      this.IsPaused = true;
      this.OnPause();
    }

    internal void FrameTick(float dt)
    {
      this._shouldTickLayersThisFrame = true;
      if (this.IsActive)
        this.OnFrameTick(dt);
      if (!this.IsActive)
        return;
      if (!this._shouldTickLayersThisFrame)
        dt = 0.0f;
      for (int index = 0; index < this._layers.Count; ++index)
      {
        if (this._layers[index].IsActive)
          this._layersCopy.Add(this._layers[index]);
      }
      for (int index = 0; index < this._layersCopy.Count; ++index)
      {
        if (!this._layersCopy[index].Finalized)
          this._layersCopy[index].Tick(dt);
      }
      ScreenManager.UpdateLateTickLayers(this._layersCopy);
    }

    public void ActivateAllLayers()
    {
      foreach (ScreenLayer layer in (List<ScreenLayer>) this._layers)
      {
        if (!layer.IsActive)
          layer.HandleActivate();
      }
    }

    public void DeactivateAllLayers()
    {
      foreach (ScreenLayer layer in (List<ScreenLayer>) this._layers)
      {
        if (layer.IsActive)
          layer.HandleDeactivate();
      }
    }

    public void Deactivate()
    {
      if (!this.IsActive)
        return;
      this.HandleDeactivate();
      this.IsActive = false;
    }

    public void Activate()
    {
      if (this.IsActive)
        return;
      this.HandleActivate();
      this.IsActive = true;
    }

    public virtual void UpdateLayout()
    {
      for (int index = 0; index < this._layers.Count; ++index)
      {
        if (!this._layers[index].Finalized)
          this._layers[index].UpdateLayout();
      }
    }

    internal void IdleTick(float dt) => this.OnIdleTick(dt);

    protected virtual void OnInitialize()
    {
    }

    protected virtual void OnFinalize()
    {
    }

    protected virtual void OnPause()
    {
    }

    protected virtual void OnResume()
    {
    }

    protected virtual void OnActivate()
    {
    }

    protected virtual void OnDeactivate()
    {
    }

    protected virtual void OnFrameTick(float dt)
    {
    }

    protected virtual void OnIdleTick(float dt)
    {
    }

    public virtual void OnFocusChangeOnGameWindow(bool focusGained)
    {
    }

    public void AddComponent(ScreenComponent component) => this._components.Add(component);

    public T FindComponent<T>() where T : ScreenComponent
    {
      foreach (ScreenComponent component1 in this._components)
      {
        if (component1 is T component2)
          return component2;
      }
      return default (T);
    }

    public void AddLayer(ScreenLayer layer)
    {
      if (layer == null || layer.Finalized)
        Debug.FailedAssert("Trying to add a null or finalized layer", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.ScreenSystem\\ScreenBase.cs", nameof (AddLayer), 334);
      else if (!this._layers.Contains(layer))
      {
        this._layers.Add(layer);
        this._layers.Sort();
        if (this.IsActive)
        {
          layer.LastActiveState = true;
          layer.HandleActivate();
        }
        ScreenBase.OnLayerAddedEvent onAddLayer = this.OnAddLayer;
        if (onAddLayer == null)
          return;
        onAddLayer(layer);
      }
      else
        Debug.FailedAssert("Layer is already added to the screen!", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.ScreenSystem\\ScreenBase.cs", nameof (AddLayer), 353);
    }

    public void RemoveLayer(ScreenLayer layer)
    {
      if (this.IsActive)
      {
        layer.LastActiveState = false;
        layer.HandleDeactivate();
      }
      layer.HandleFinalize();
      this._layers.Remove(layer);
      ScreenBase.OnLayerRemovedEvent onRemoveLayer = this.OnRemoveLayer;
      if (onRemoveLayer != null)
        onRemoveLayer(layer);
      ScreenManager.RefreshGlobalOrder();
    }

    public bool HasLayer(ScreenLayer layer) => this._layers.Contains(layer);

    public T FindLayer<T>() where T : ScreenLayer
    {
      foreach (ScreenLayer layer1 in (List<ScreenLayer>) this._layers)
      {
        if (layer1 is T layer2)
          return layer2;
      }
      return default (T);
    }

    public T FindLayer<T>(string name) where T : ScreenLayer
    {
      foreach (ScreenLayer layer1 in (List<ScreenLayer>) this._layers)
      {
        if (layer1 is T layer2 && layer2.Name == name)
          return layer2;
      }
      return default (T);
    }

    public void SetLayerCategoriesState(string[] categoryIds, bool isActive)
    {
      foreach (ScreenLayer layer in (List<ScreenLayer>) this._layers)
      {
        if (categoryIds.IndexOf<string>(layer._categoryId) >= 0)
        {
          if (isActive && !layer.IsActive)
            layer.HandleActivate();
          else if (!isActive && layer.IsActive)
            layer.HandleDeactivate();
        }
      }
    }

    public void SetLayerCategoriesStateAndToggleOthers(string[] categoryIds, bool isActive)
    {
      foreach (ScreenLayer layer in (List<ScreenLayer>) this._layers)
      {
        if (categoryIds.IndexOf<string>(layer._categoryId) >= 0)
        {
          if (isActive && !layer.IsActive)
            layer.HandleActivate();
          else if (!isActive && layer.IsActive)
            layer.HandleDeactivate();
        }
        else if (layer.IsActive)
          layer.HandleDeactivate();
        else
          layer.HandleActivate();
      }
    }

    public void SetLayerCategoriesStateAndDeactivateOthers(string[] categoryIds, bool isActive)
    {
      foreach (ScreenLayer layer in (List<ScreenLayer>) this._layers)
      {
        if (categoryIds.IndexOf<string>(layer._categoryId) >= 0)
        {
          if (isActive && !layer.IsActive)
            layer.HandleActivate();
          else if (!isActive && layer.IsActive)
            layer.HandleDeactivate();
        }
        else if (layer.IsActive)
          layer.HandleDeactivate();
      }
    }

    protected ScreenBase()
    {
      this.IsPaused = true;
      this.IsActive = false;
      this._components = new List<ScreenComponent>();
      this._layers = new MBList<ScreenLayer>();
      this._layersCopy = new List<ScreenLayer>();
    }

    public virtual bool MouseVisible { get; set; }

    internal void Update(IReadOnlyList<int> lastKeysPressed)
    {
      if (!this.IsActive)
        return;
      foreach (ScreenLayer layer in (List<ScreenLayer>) this._layers)
      {
        if (layer.IsActive)
          layer.Update(lastKeysPressed);
      }
    }

    public delegate void OnLayerAddedEvent(ScreenLayer addedLayer);

    public delegate void OnLayerRemovedEvent(ScreenLayer removedLayer);
  }
}
