// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.UIContext
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class UIContext
  {
    private readonly float ReferenceHeight;
    private readonly float InverseReferenceHeight;
    private const float ReferenceAspectRatio = 1.77777779f;
    private const float ReferenceAspectRatioCoeff = 0.98f;
    private IInputContext _inputContext;
    private IInputService _inputService;
    private bool _initializedWithExistingResources;
    private bool _previousFrameMouseEnabled;
    private bool IsDebugWidgetInformationFroze;
    private UIContext.DebugWidgetTreeNode _currentRootNode;

    public UIContext.MouseCursors ActiveCursorOfContext { get; set; }

    public bool IsDynamicScaleEnabled { get; set; } = true;

    public float ScaleModifier { get; set; } = 1f;

    public float ContextAlpha { get; set; } = 1f;

    public float Scale { get; private set; }

    public float CustomScale { get; private set; }

    public float CustomInverseScale { get; private set; }

    public string CurrentLanugageCode { get; private set; }

    public Random UIRandom { get; private set; }

    public float InverseScale { get; private set; }

    public EventManager EventManager { get; private set; }

    public Widget Root => this.EventManager.Root;

    public ResourceDepot ResourceDepot => this.TwoDimensionContext.ResourceDepot;

    public TwoDimensionContext TwoDimensionContext { get; private set; }

    public IEnumerable<Brush> Brushes => this.BrushFactory.Brushes;

    public Brush DefaultBrush => this.BrushFactory.DefaultBrush;

    public SpriteData SpriteData { get; private set; }

    public BrushFactory BrushFactory { get; private set; }

    public FontFactory FontFactory { get; private set; }

    public IGamepadNavigationContext GamepadNavigation { get; private set; }

    public UIContext(
      TwoDimensionContext twoDimensionContext,
      IInputContext inputContext,
      IInputService inputService,
      SpriteData spriteData,
      FontFactory fontFactory,
      BrushFactory brushFactory)
    {
      this.TwoDimensionContext = twoDimensionContext;
      this._inputContext = inputContext;
      this._inputService = inputService;
      this.GamepadNavigation = (IGamepadNavigationContext) new EmptyGamepadNavigationContext();
      this.SpriteData = spriteData;
      this.FontFactory = fontFactory;
      this.BrushFactory = brushFactory;
      this._initializedWithExistingResources = true;
      this.ReferenceHeight = twoDimensionContext.Platform.ReferenceHeight;
      this.InverseReferenceHeight = 1f / this.ReferenceHeight;
    }

    public UIContext(
      TwoDimensionContext twoDimensionContext,
      IInputContext inputContext,
      IInputService inputService)
    {
      this.TwoDimensionContext = twoDimensionContext;
      this._inputContext = inputContext;
      this._inputService = inputService;
      this.GamepadNavigation = (IGamepadNavigationContext) new EmptyGamepadNavigationContext();
      this._initializedWithExistingResources = false;
      this.ReferenceHeight = twoDimensionContext.Platform.ReferenceHeight;
      this.InverseReferenceHeight = 1f / this.ReferenceHeight;
    }

    public Brush GetBrush(string name) => this.BrushFactory.GetBrush(name);

    public void Initialize()
    {
      if (!this._initializedWithExistingResources)
      {
        this.SpriteData = new SpriteData("SpriteData");
        this.SpriteData.Load(this.ResourceDepot);
        this.FontFactory = new FontFactory(this.ResourceDepot);
        this.FontFactory.LoadAllFonts(this.SpriteData);
        this.BrushFactory = new BrushFactory(this.ResourceDepot, "Brushes", this.SpriteData, this.FontFactory);
        this.BrushFactory.Initialize();
      }
      this.EventManager = new EventManager(this);
      this.EventManager.InputService = this._inputService;
      this.EventManager.InputContext = this._inputContext;
      this.EventManager.UpdateMousePosition(this._inputContext.GetPointerPosition());
      Widget root = this.Root;
      root.WidthSizePolicy = SizePolicy.Fixed;
      root.HeightSizePolicy = SizePolicy.Fixed;
      root.SuggestedWidth = this.TwoDimensionContext.Width;
      root.SuggestedHeight = this.TwoDimensionContext.Height;
      this.UIRandom = new Random();
      this.UpdateScale();
    }

    public void InitializeGamepadNavigation(IGamepadNavigationContext context)
    {
      this.GamepadNavigation = context;
    }

    private void UpdateScale()
    {
      float num1;
      if (this.TwoDimensionContext != null)
      {
        num1 = this.TwoDimensionContext.Height * this.InverseReferenceHeight;
        float num2 = this.TwoDimensionContext.Width / this.TwoDimensionContext.Height;
        if ((double) num2 < 1.7422223091125488)
        {
          float num3 = num2 / 1.74222231f;
          num1 *= num3;
        }
      }
      else
        num1 = 1f;
      if ((double) this.Scale == (double) num1 && (double) this.CustomScale == (double) this.Scale * (double) this.ScaleModifier)
        return;
      this.Scale = num1;
      this.CustomScale = this.Scale * this.ScaleModifier;
      this.InverseScale = 1f / num1;
      this.CustomInverseScale = 1f / this.CustomScale;
      this.EventManager.UpdateLayout();
    }

    public void OnFinalize()
    {
      this.EventManager.OnFinalize();
      this.GamepadNavigation.OnFinalize();
    }

    public void Update(float dt)
    {
      this.ActiveCursorOfContext = UIContext.MouseCursors.Default;
      if (!this._initializedWithExistingResources)
        this.BrushFactory.CheckForUpdates();
      if (this.IsDynamicScaleEnabled)
        this.UpdateScale();
      Widget root = this.Root;
      root.SuggestedWidth = this.TwoDimensionContext.Width;
      root.SuggestedHeight = this.TwoDimensionContext.Height;
      this.EventManager.Update(dt);
    }

    public void LateUpdate(float dt)
    {
      this.EventManager.CalculateCanvas(new Vector2(this.TwoDimensionContext.Width, this.TwoDimensionContext.Height), dt);
      this.EventManager.LateUpdate(dt);
      this.EventManager.RecalculateCanvas();
      this.EventManager.UpdateBrushes(dt);
      this.EventManager.Render(this.TwoDimensionContext);
    }

    public void OnOnScreenkeyboardTextInputDone(string inputText)
    {
      if (this.EventManager.FocusedWidget is EditableTextWidget focusedWidget)
        focusedWidget.SetAllText(inputText);
      this.EventManager.ClearFocus();
    }

    public void OnOnScreenKeyboardCanceled() => this.EventManager.ClearFocus();

    public bool HitTest(Widget root, Vector2 position) => EventManager.HitTest(root, position);

    public bool HitTest(Widget root)
    {
      return EventManager.HitTest(root, this._inputContext.GetPointerPosition());
    }

    public bool FocusTest(Widget root) => this.EventManager.FocusTest(root);

    public void UpdateInput(TaleWorlds.Library.InputType handleInputs)
    {
      if (this._inputService.MouseEnabled)
      {
        this.EventManager.UpdateMousePosition(this._inputContext.GetPointerPosition());
        if (handleInputs.HasAnyFlag<TaleWorlds.Library.InputType>(TaleWorlds.Library.InputType.MouseButton))
        {
          this.EventManager.MouseMove();
          InputKey[] clickKeys = this._inputContext.GetClickKeys();
          for (int index = 0; index < clickKeys.Length; ++index)
          {
            if (this._inputContext.IsKeyPressed(clickKeys[index]))
            {
              this.EventManager.MouseDown();
              break;
            }
          }
          for (int index = 0; index < clickKeys.Length; ++index)
          {
            if (this._inputContext.IsKeyReleased(clickKeys[index]))
            {
              this.EventManager.MouseUp();
              break;
            }
          }
          if (this._inputContext.IsKeyPressed(InputKey.RightMouseButton))
            this.EventManager.MouseAlternateDown();
          if (this._inputContext.IsKeyReleased(InputKey.RightMouseButton))
            this.EventManager.MouseAlternateUp();
        }
        if (handleInputs.HasAnyFlag<TaleWorlds.Library.InputType>(TaleWorlds.Library.InputType.MouseWheel))
          this.EventManager.MouseScroll();
        this.EventManager.RightStickMovement();
        this._previousFrameMouseEnabled = true;
      }
      else
      {
        if (!this._previousFrameMouseEnabled)
          return;
        this.EventManager.UpdateMousePosition(new Vector2(-5000f, -5000f));
        this.EventManager.MouseMove();
        this.EventManager.SetHoveredView((Widget) null);
        this._previousFrameMouseEnabled = false;
      }
    }

    public void OnMovieLoaded(string movieName) => this.GamepadNavigation.OnMovieLoaded(movieName);

    public void OnMovieReleased(string movieName)
    {
      this.GamepadNavigation.OnMovieReleased(movieName);
    }

    public void DrawWidgetDebugInfo()
    {
      if (Input.IsKeyDown(InputKey.LeftShift) && Input.IsKeyPressed(InputKey.F))
      {
        this.IsDebugWidgetInformationFroze = !this.IsDebugWidgetInformationFroze;
        this._currentRootNode = new UIContext.DebugWidgetTreeNode(this.TwoDimensionContext, this.Root, 0);
      }
      if (!this.IsDebugWidgetInformationFroze)
        return;
      this._currentRootNode?.DebugDraw();
    }

    public enum MouseCursors
    {
      System,
      Default,
      Attack,
      Move,
      HorizontalResize,
      VerticalResize,
      DiagonalRightResize,
      DiagonalLeftResize,
      Rotate,
      Custom,
      Disabled,
      RightClickLink,
    }

    private class DebugWidgetTreeNode
    {
      private readonly TwoDimensionContext _context;
      private readonly Widget _current;
      private readonly List<UIContext.DebugWidgetTreeNode> _children;
      private readonly string _fullIDPath;
      private readonly string _displayedName;
      private readonly int _depth;
      private bool _isShowingArea;

      private string ID
      {
        get
        {
          return string.Format("{0}.{1}.{2}", (object) this._depth, (object) this._current.GetSiblingIndex(), (object) this._fullIDPath);
        }
      }

      public DebugWidgetTreeNode(TwoDimensionContext context, Widget current, int depth)
      {
        this._context = context;
        this._current = current;
        this._depth = depth;
        Widget current1 = this._current;
        this._fullIDPath = (current1 != null ? current1.GetFullIDPath() : (string) null) ?? string.Empty;
        int num = this._fullIDPath.LastIndexOf('\\');
        if (num != -1)
          this._displayedName = this._fullIDPath.Substring(num + 1);
        if (string.IsNullOrEmpty(this._displayedName))
          this._displayedName = this._current.Id;
        this._children = new List<UIContext.DebugWidgetTreeNode>();
        this.AddChildren();
      }

      private void AddChildren()
      {
        foreach (Widget child in this._current.Children)
        {
          if (child.ParentWidget == this._current)
            this._children.Add(new UIContext.DebugWidgetTreeNode(this._context, child, this._depth + 1));
        }
      }

      public void DebugDraw()
      {
        if (this._context.DrawDebugTreeNode(this._displayedName + "###Root." + this.ID))
        {
          if (this._context.IsDebugItemHovered())
            this.DrawArea();
          this._context.DrawCheckbox("Show Area###Area." + this.ID, ref this._isShowingArea);
          if (this._isShowingArea)
            this.DrawArea();
          this.DrawProperties();
          this.DrawChildren();
          this._context.PopDebugTreeNode();
        }
        else
        {
          if (!this._context.IsDebugItemHovered())
            return;
          this.DrawArea();
        }
      }

      private void DrawProperties()
      {
        if (!this._context.DrawDebugTreeNode("Properties###Properties." + this.ID))
          return;
        this._context.DrawDebugText("General");
        this._context.DrawDebugText("\tID: " + (string.IsNullOrEmpty(this._current.Id) ? "_No ID_" : this._current.Id));
        this._context.DrawDebugText("\tPath: " + this._current.GetFullIDPath());
        this._context.DrawDebugText(string.Format("\tVisible: {0}", (object) this._current.IsVisible));
        this._context.DrawDebugText(string.Format("\tEnabled: {0}", (object) this._current.IsEnabled));
        this._context.DrawDebugText("\nSize");
        this._context.DrawDebugText(string.Format("\tWidth Size Policy: {0}", (object) this._current.WidthSizePolicy));
        this._context.DrawDebugText(string.Format("\tHeight Size Policy: {0}", (object) this._current.HeightSizePolicy));
        this._context.DrawDebugText(string.Format("\tSize: {0}", (object) this._current.Size));
        this._context.DrawDebugText("\nPosition");
        this._context.DrawDebugText(string.Format("\tGlobal Position: {0}", (object) this._current.GlobalPosition));
        this._context.DrawDebugText(string.Format("\tLocal Position: {0}", (object) this._current.LocalPosition));
        this._context.DrawDebugText(string.Format("\tPosition Offset: <{0}, {1}>", (object) this._current.PositionXOffset, (object) this._current.PositionYOffset));
        this._context.DrawDebugText("\nEvents");
        this._context.DrawDebugText("\tCurrent State: " + this._current.CurrentState);
        this._context.DrawDebugText(string.Format("\tCan Accept Events: {0}", (object) this._current.CanAcceptEvents));
        this._context.DrawDebugText(string.Format("\tPasses Events To Children: {0}", (object) !this._current.DoNotPassEventsToChildren));
        this._context.DrawDebugText("\nVisuals");
        if (this._current is BrushWidget current1)
          this._context.DrawDebugText("\tBrush: " + current1.Brush.Name);
        if (this._current is TextWidget current3)
          this._context.DrawDebugText("\tText: " + current3.Text);
        else if (this._current is RichTextWidget current2)
          this._context.DrawDebugText("\tText: " + current2.Text);
        else if (current1 != null)
        {
          this._context.DrawDebugText("\tSprite: " + (current1.BrushRenderer?.CurrentStyle?.GetLayer(current1.BrushRenderer.CurrentState)?.Sprite?.Name ?? "None"));
          this._context.DrawDebugText("\tColor: " + current1.Brush?.GetLayer(current1.CurrentState)?.ToString());
        }
        else
        {
          this._context.DrawDebugText("\tSprite: " + (this._current.Sprite?.Name ?? "None"));
          this._context.DrawDebugText("\tColor: " + this._current.Color.ToString());
        }
        this._context.PopDebugTreeNode();
      }

      private void DrawChildren()
      {
        if (this._children.Count <= 0 || !this._context.DrawDebugTreeNode("Children###Children." + this.ID))
          return;
        foreach (UIContext.DebugWidgetTreeNode child in this._children)
          child.DebugDraw();
        this._context.PopDebugTreeNode();
      }

      private void DrawArea()
      {
        float x = this._current.GlobalPosition.X;
        float y = this._current.GlobalPosition.Y;
        float num1 = this._current.GlobalPosition.X + this._current.Size.X;
        float num2 = this._current.GlobalPosition.Y + this._current.Size.Y;
        if ((double) x == (double) num1 || (double) y == (double) num2 || (double) this._current.Size.X == 0.0 || (double) this._current.Size.Y == 0.0)
          return;
        float num3 = 2f;
        double num4 = (double) num3 / 2.0;
        double num5 = (double) num3 / 2.0;
        double num6 = (double) num3 / 2.0;
        double num7 = (double) num3 / 2.0;
        double num8 = (double) num3 / 2.0;
        double num9 = (double) num3 / 2.0;
        double num10 = (double) num3 / 2.0;
        double num11 = (double) num3 / 2.0;
      }
    }
  }
}
