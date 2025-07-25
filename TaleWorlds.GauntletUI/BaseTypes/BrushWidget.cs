// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.BrushWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class BrushWidget : Widget
  {
    private Brush _originalBrush;
    private Brush _clonedBrush;
    private bool _animRestarted;
    protected bool _isInsideCache;

    [Editor(false)]
    public Brush Brush
    {
      get
      {
        if (this._originalBrush == null)
        {
          this._originalBrush = this.Context.DefaultBrush;
          this._clonedBrush = this._originalBrush.Clone();
          this.BrushRenderer.Brush = this.ReadOnlyBrush;
        }
        else if (this._clonedBrush == null)
        {
          this._clonedBrush = this._originalBrush.Clone();
          this.BrushRenderer.Brush = this.ReadOnlyBrush;
        }
        return this._clonedBrush;
      }
      set
      {
        if (this._originalBrush == value)
          return;
        this._originalBrush = value;
        this._clonedBrush = (Brush) null;
        this.OnBrushChanged();
        this.OnPropertyChanged<Brush>(value, nameof (Brush));
      }
    }

    public Brush ReadOnlyBrush
    {
      get
      {
        if (this._clonedBrush != null)
          return this._clonedBrush;
        if (this._originalBrush == null)
          this._originalBrush = this.Context.DefaultBrush;
        return this._originalBrush;
      }
    }

    [Editor(false)]
    public new Sprite Sprite
    {
      get => this.ReadOnlyBrush.DefaultStyle.GetLayer("Default").Sprite;
      set => this.Brush.DefaultStyle.GetLayer("Default").Sprite = value;
    }

    public void ForceUseBrush(Brush brush) => this._clonedBrush = brush;

    public BrushRenderer BrushRenderer { get; private set; }

    public BrushWidget(UIContext context)
      : base(context)
    {
      this.BrushRenderer = new BrushRenderer();
      this.EventFire += new Action<Widget, string, object[]>(this.BrushWidget_EventFire);
    }

    private void BrushWidget_EventFire(Widget arg1, string eventName, object[] arg3)
    {
      if (this.ReadOnlyBrush == null)
        return;
      AudioProperty eventAudioProperty = this.ReadOnlyBrush.SoundProperties.GetEventAudioProperty(eventName);
      if (eventAudioProperty == null || eventAudioProperty.AudioName == null || eventAudioProperty.AudioName.Equals(""))
        return;
      this.EventManager.Context.TwoDimensionContext.PlaySound(eventAudioProperty.AudioName);
    }

    public override void UpdateBrushes(float dt)
    {
      if (this.IsVisible)
      {
        this._isInsideCache = new Rectangle(this._cachedGlobalPosition.X, this._cachedGlobalPosition.Y, this.MeasuredSize.X, this.MeasuredSize.Y).IsCollide(new Rectangle(this.EventManager.LeftUsableAreaStart, this.EventManager.TopUsableAreaStart, this.EventManager.PageSize.X, this.EventManager.PageSize.Y));
        if (this._isInsideCache)
          this.UpdateBrushRendererInternal(dt);
      }
      if (this.IsVisible && this._isInsideCache && this.BrushRenderer.IsUpdateNeeded())
        return;
      this.UnRegisterUpdateBrushes();
    }

    protected void UpdateBrushRendererInternal(float dt)
    {
      if (this.Context?.TwoDimensionContext?.Platform == null)
      {
        Debug.FailedAssert("Trying to update brush renderer after context or platform is finalized", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\BaseTypes\\BrushWidget.cs", nameof (UpdateBrushRendererInternal), 141);
      }
      else
      {
        this.BrushRenderer.ForcePixelPerfectPlacement = this.ForcePixelPerfectRenderPlacement;
        this.BrushRenderer.UseLocalTimer = !this.UseGlobalTimeForAnimation;
        this.BrushRenderer.Brush = this.ReadOnlyBrush;
        this.BrushRenderer.CurrentState = this.CurrentState;
        this.BrushRenderer.Update(this.Context.TwoDimensionContext.Platform.ApplicationTime, dt);
        if (!this.RestartAnimationFirstFrame || this._animRestarted)
          return;
        this.EventManager.AddLateUpdateAction((Widget) this, (Action<float>) (_dt =>
        {
          if (!this.RestartAnimationFirstFrame)
            return;
          this.BrushRenderer.RestartAnimation();
        }), 5);
        this._animRestarted = true;
      }
    }

    public override void SetState(string stateName)
    {
      if (this.CurrentState != stateName)
      {
        if (this.EventManager != null && this.ReadOnlyBrush != null)
        {
          AudioProperty stateAudioProperty = this.ReadOnlyBrush.SoundProperties.GetStateAudioProperty(stateName);
          if (stateAudioProperty != null)
          {
            if (stateAudioProperty.AudioName != null && !stateAudioProperty.AudioName.Equals(""))
              this.EventManager.Context.TwoDimensionContext.PlaySound(stateAudioProperty.AudioName);
            else
              Debug.FailedAssert("Widget with id \"" + this.Id + "\" has a sound having no audioName for event \"" + stateName + "\"!", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\BaseTypes\\BrushWidget.cs", nameof (SetState), 181);
          }
        }
        this.RegisterUpdateBrushes();
      }
      base.SetState(stateName);
    }

    protected override void RefreshState()
    {
      base.RefreshState();
      this.RegisterUpdateBrushes();
    }

    protected override void OnRender(
      TwoDimensionContext twoDimensionContext,
      TwoDimensionDrawContext drawContext)
    {
      if (!this._isInsideCache || this.BrushRenderer.IsUpdateNeeded())
        this.HandleUpdateNeededOnRender();
      this.BrushRenderer.Render(drawContext, this._cachedGlobalPosition, this.Size, this._scaleToUse, this.Context.ContextAlpha);
    }

    protected void HandleUpdateNeededOnRender()
    {
      this.UpdateBrushRendererInternal(this.EventManager.CachedDt);
      if (this.BrushRenderer.IsUpdateNeeded())
        this.RegisterUpdateBrushes();
      this._isInsideCache = true;
    }

    protected override void OnConnectedToRoot()
    {
      base.OnConnectedToRoot();
      this.BrushRenderer.SetSeed(this._seed);
    }

    public override void UpdateAnimationPropertiesSubTask(float alphaFactor)
    {
      this.Brush.GlobalAlphaFactor = alphaFactor;
      foreach (Widget child in this.Children)
        child.UpdateAnimationPropertiesSubTask(alphaFactor);
    }

    public virtual void OnBrushChanged() => this.RegisterUpdateBrushes();

    protected void RegisterUpdateBrushes()
    {
      this.EventManager.RegisterWidgetForEvent(WidgetContainer.ContainerType.UpdateBrushes, (Widget) this);
    }

    protected void UnRegisterUpdateBrushes()
    {
      this.EventManager.UnRegisterWidgetForEvent(WidgetContainer.ContainerType.UpdateBrushes, (Widget) this);
    }
  }
}
