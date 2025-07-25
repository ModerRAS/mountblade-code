// Decompiled with JetBrains decompiler
// Type: TaleWorlds.Engine.GauntletUI.GauntletLayer
// Assembly: TaleWorlds.Engine.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 09142970-CF52-41EE-A3E1-A44F7B1BD752
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.Engine.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using TaleWorlds.GauntletUI;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.GauntletUI.PrefabSystem;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.Engine.GauntletUI
{
  public class GauntletLayer : ScreenLayer
  {
    public readonly TwoDimensionView TwoDimensionView;
    public readonly UIContext UIContext;
    public readonly IGamepadNavigationContext GamepadNavigationContext;
    public readonly List<Tuple<IGauntletMovie, ViewModel>> MoviesAndDataSources;
    public readonly TwoDimensionEnginePlatform TwoDimensionEnginePlatform;
    public readonly EngineInputService EngineInputService;
    public readonly WidgetFactory WidgetFactory;

    public GauntletLayer(int localOrder, string categoryId = "GauntletLayer", bool shouldClear = false)
      : base(localOrder, categoryId)
    {
      this.MoviesAndDataSources = new List<Tuple<IGauntletMovie, ViewModel>>();
      this.WidgetFactory = UIResourceManager.WidgetFactory;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this.TwoDimensionView = TwoDimensionView.CreateTwoDimension();
      if (shouldClear)
      {
        this.TwoDimensionView.SetClearColor((uint) byte.MaxValue);
        this.TwoDimensionView.SetRenderOption(View.ViewRenderOptions.ClearColor, true);
      }
      this.TwoDimensionEnginePlatform = new TwoDimensionEnginePlatform(this.TwoDimensionView);
      TwoDimensionContext twoDimensionContext = new TwoDimensionContext((ITwoDimensionPlatform) this.TwoDimensionEnginePlatform, (ITwoDimensionResourceContext) UIResourceManager.ResourceContext, uiResourceDepot);
      this.EngineInputService = new EngineInputService((IInputContext) this.Input);
      this.UIContext = new UIContext(twoDimensionContext, (IInputContext) this.Input, (IInputService) this.EngineInputService, UIResourceManager.SpriteData, UIResourceManager.FontFactory, UIResourceManager.BrushFactory);
      this.UIContext.ScaleModifier = this.Scale;
      this.UIContext.Initialize();
      this.GamepadNavigationContext = (IGamepadNavigationContext) new GauntletGamepadNavigationContext(new Func<Vector2, bool>(this.GetIsBlockedAtPosition), new Func<int>(this.GetLastScreenOrder), new Func<bool>(this.GetIsAvailableForGamepadNavigation));
      this.UIContext.InitializeGamepadNavigation(this.GamepadNavigationContext);
      this.MouseEnabled = true;
      this.UIContext.EventManager.LoseFocus += new Action(this.EventManagerOnLoseFocus);
      this.UIContext.EventManager.GainFocus += new Action(this.EventManagerOnGainFocus);
      this.UIContext.EventManager.OnGetIsHitThisFrame = new Func<bool>(this.GetIsHitThisFrame);
      this.UIContext.EventManager.UsableArea = this.UsableArea;
    }

    private void EventManagerOnLoseFocus()
    {
      if (this.IsFocusLayer)
        return;
      ScreenManager.TryLoseFocus((ScreenLayer) this);
    }

    private void EventManagerOnGainFocus() => ScreenManager.TrySetFocus((ScreenLayer) this);

    public IGauntletMovie LoadMovie(string movieName, ViewModel dataSource)
    {
      bool generatedPrefabs = UIConfig.GetIsUsingGeneratedPrefabs();
      bool hotReloadEnabled = UIConfig.GetIsHotReloadEnabled();
      IGauntletMovie gauntletMovie = GauntletMovie.Load(this.UIContext, this.WidgetFactory, movieName, (IViewModel) dataSource, !generatedPrefabs, hotReloadEnabled);
      this.MoviesAndDataSources.Add(new Tuple<IGauntletMovie, ViewModel>(gauntletMovie, dataSource));
      return gauntletMovie;
    }

    public void ReleaseMovie(IGauntletMovie movie)
    {
      this.MoviesAndDataSources.Remove(this.MoviesAndDataSources.SingleOrDefault<Tuple<IGauntletMovie, ViewModel>>((Func<Tuple<IGauntletMovie, ViewModel>, bool>) (t => t.Item1 == movie)));
      movie.Release();
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this.TwoDimensionView.SetEnable(true);
    }

    protected override void OnDeactivate()
    {
      this.TwoDimensionView.Clear();
      this.TwoDimensionView.SetEnable(false);
      base.OnDeactivate();
    }

    protected override void Tick(float dt)
    {
      base.Tick(dt);
      this.TwoDimensionEnginePlatform.Reset();
      this.UIContext.Update(dt);
      foreach (Tuple<IGauntletMovie, ViewModel> moviesAndDataSource in this.MoviesAndDataSources)
        moviesAndDataSource.Item1.Update();
      this.ActiveCursor = (CursorType) this.UIContext.ActiveCursorOfContext;
    }

    protected override void LateTick(float dt)
    {
      base.LateTick(dt);
      this.TwoDimensionView.BeginFrame();
      this.UIContext.LateUpdate(dt);
      this.TwoDimensionView.EndFrame();
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      this.EngineInputService.UpdateInputDevices(this.KeyboardEnabled, this.MouseEnabled, this.GamepadEnabled);
    }

    protected override void Update(IReadOnlyList<int> lastKeysPressed)
    {
      this.UIContext.EventManager.FocusedWidget?.HandleInput(lastKeysPressed);
    }

    protected override void OnFinalize()
    {
      foreach (Tuple<IGauntletMovie, ViewModel> moviesAndDataSource in this.MoviesAndDataSources)
        moviesAndDataSource.Item1.Release();
      this.UIContext.EventManager.LoseFocus -= new Action(this.EventManagerOnLoseFocus);
      this.UIContext.EventManager.GainFocus -= new Action(this.EventManagerOnGainFocus);
      this.UIContext.EventManager.OnGetIsHitThisFrame = (Func<bool>) null;
      this.UIContext.OnFinalize();
      base.OnFinalize();
    }

    protected override void RefreshGlobalOrder(ref int currentOrder)
    {
      this.TwoDimensionView.SetRenderOrder(currentOrder);
      ++currentOrder;
    }

    public override void ProcessEvents()
    {
      base.ProcessEvents();
      this.UIContext.UpdateInput(this._usedInputs);
    }

    public override bool HitTest(Vector2 position)
    {
      foreach (Tuple<IGauntletMovie, ViewModel> moviesAndDataSource in this.MoviesAndDataSources)
      {
        if (this.UIContext.HitTest(moviesAndDataSource.Item1.RootWidget, position))
          return true;
      }
      return false;
    }

    private bool GetIsBlockedAtPosition(Vector2 position)
    {
      return ScreenManager.IsLayerBlockedAtPosition((ScreenLayer) this, position);
    }

    public override bool HitTest()
    {
      foreach (Tuple<IGauntletMovie, ViewModel> moviesAndDataSource in this.MoviesAndDataSources)
      {
        if (this.UIContext.HitTest(moviesAndDataSource.Item1.RootWidget))
          return true;
      }
      this.UIContext.EventManager.SetHoveredView((Widget) null);
      return false;
    }

    public override bool FocusTest()
    {
      foreach (Tuple<IGauntletMovie, ViewModel> moviesAndDataSource in this.MoviesAndDataSources)
      {
        if (this.UIContext.FocusTest(moviesAndDataSource.Item1.RootWidget))
          return true;
      }
      return false;
    }

    public override bool IsFocusedOnInput()
    {
      return this.UIContext.EventManager.FocusedWidget is EditableTextWidget;
    }

    protected override void OnLoseFocus() => this.UIContext.EventManager.ClearFocus();

    public override void OnOnScreenKeyboardDone(string inputText)
    {
      base.OnOnScreenKeyboardDone(inputText);
      this.UIContext.OnOnScreenkeyboardTextInputDone(inputText);
    }

    public override void OnOnScreenKeyboardCanceled()
    {
      base.OnOnScreenKeyboardCanceled();
      this.UIContext.OnOnScreenKeyboardCanceled();
    }

    public override void UpdateLayout()
    {
      base.UpdateLayout();
      this.UIContext.ScaleModifier = this.Scale;
      this.UIContext.EventManager.UsableArea = this.UsableArea;
      this.MoviesAndDataSources.ForEach((Action<Tuple<IGauntletMovie, ViewModel>>) (m => m.Item2.RefreshValues()));
      this.MoviesAndDataSources.ForEach((Action<Tuple<IGauntletMovie, ViewModel>>) (m => m.Item1.RefreshBindingWithChildren()));
      this.UIContext.EventManager.UpdateLayout();
    }

    public bool GetIsAvailableForGamepadNavigation()
    {
      if (!this.LastActiveState || !this.IsActive || !this.MouseEnabled && !this.GamepadEnabled)
        return false;
      return this.IsFocusLayer || (this.InputRestrictions.InputUsageMask & InputUsageMask.Mouse) != 0;
    }

    private bool GetIsHitThisFrame() => this.IsHitThisFrame;

    private int GetLastScreenOrder() => this.ScreenOrderInLastFrame;

    public override void DrawDebugInfo()
    {
      foreach (Tuple<IGauntletMovie, ViewModel> moviesAndDataSource in this.MoviesAndDataSources)
      {
        IGauntletMovie gauntletMovie = moviesAndDataSource.Item1;
        ViewModel viewModel = moviesAndDataSource.Item2;
        Imgui.Text("Movie: " + gauntletMovie.MovieName);
        Imgui.Text("Data Source: " + (viewModel?.GetType().Name ?? "No Datasource"));
      }
      base.DrawDebugInfo();
      Imgui.Text("Press 'Shift+F' to take widget hierarchy snapshot.");
      this.UIContext.DrawWidgetDebugInfo();
    }
  }
}
