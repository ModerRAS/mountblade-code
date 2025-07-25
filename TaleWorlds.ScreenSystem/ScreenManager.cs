// Decompiled with JetBrains decompiler
// Type: TaleWorlds.ScreenSystem.ScreenManager
// Assembly: TaleWorlds.ScreenSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 93A4E59A-2741-4DEE-9F6A-10E242791002
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.ScreenSystem.dll

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.Diagnostics;
using System.Linq;
using System.Numerics;
using System.Reflection;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.ScreenSystem
{
  public static class ScreenManager
  {
    private static IScreenManagerEngineConnection _engineInterface;
    private static Vec2 _usableArea = new Vec2(1f, 1f);
    private static List<ScreenLayer> _lateTickLayers;
    private static ObservableCollection<ScreenBase> _screenList;
    private static ObservableCollection<GlobalLayer> _globalLayers;
    private static List<ScreenLayer> _sortedLayers = new List<ScreenLayer>(16);
    private static ScreenLayer[] _sortedActiveLayersCopyForUpdate = new ScreenLayer[16];
    private static bool _isSortedActiveLayersDirty = true;
    private static bool _focusedLayerChangedThisFrame;
    private static bool _isMouseInputActiveLastFrame;
    private static bool _isScreenDebugInformationEnabled;
    private static bool _activeMouseVisible = true;
    private static IReadOnlyList<int> _lastPressedKeys;
    private static bool _globalOrderDirty;
    private static bool _isRefreshActive = false;

    public static IScreenManagerEngineConnection EngineInterface => ScreenManager._engineInterface;

    public static float Scale { get; private set; } = 1f;

    public static Vec2 UsableArea
    {
      get => ScreenManager._usableArea;
      private set
      {
        if (!(value != ScreenManager._usableArea))
          return;
        ScreenManager._usableArea = value;
        ScreenManager.OnUsableAreaChanged(ScreenManager._usableArea);
      }
    }

    public static bool IsEnterButtonRDown => ScreenManager._engineInterface.GetIsEnterButtonRDown();

    public static event ScreenManager.OnPushScreenEvent OnPushScreen;

    public static event ScreenManager.OnPopScreenEvent OnPopScreen;

    public static event ScreenManager.OnControllerDisconnectedEvent OnControllerDisconnected;

    public static List<ScreenLayer> SortedLayers
    {
      get
      {
        if (!ScreenManager._isSortedActiveLayersDirty)
        {
          int count1 = ScreenManager._sortedLayers.Count;
          int? count2 = ScreenManager.TopScreen?.Layers.Count;
          int? count3 = ScreenManager._globalLayers?.Count;
          int? nullable = count2.HasValue & count3.HasValue ? new int?(count2.GetValueOrDefault() + count3.GetValueOrDefault()) : new int?();
          int valueOrDefault = nullable.GetValueOrDefault();
          if (count1 == valueOrDefault & nullable.HasValue)
            goto label_16;
        }
        ScreenManager._isMouseInputActiveLastFrame = false;
        ScreenManager._sortedLayers.Clear();
        if (ScreenManager.TopScreen != null)
        {
          for (int index = 0; index < ScreenManager.TopScreen.Layers.Count; ++index)
          {
            ScreenLayer layer = ScreenManager.TopScreen.Layers[index];
            if (layer != null)
              ScreenManager._sortedLayers.Add(layer);
          }
        }
        foreach (GlobalLayer globalLayer in (Collection<GlobalLayer>) ScreenManager._globalLayers)
          ScreenManager._sortedLayers.Add(globalLayer.Layer);
        ScreenManager._sortedLayers.Sort();
        ScreenManager._isSortedActiveLayersDirty = false;
label_16:
        return ScreenManager._sortedLayers;
      }
    }

    public static ScreenBase TopScreen { get; private set; }

    public static ScreenLayer FocusedLayer { get; private set; }

    public static ScreenLayer FirstHitLayer { get; private set; }

    static ScreenManager()
    {
      ScreenManager._globalLayers = new ObservableCollection<GlobalLayer>();
      ScreenManager._screenList = new ObservableCollection<ScreenBase>();
      ScreenManager._screenList.CollectionChanged += new NotifyCollectionChangedEventHandler(ScreenManager.OnScreenListChanged);
      ScreenManager._globalLayers.CollectionChanged += new NotifyCollectionChangedEventHandler(ScreenManager.OnGlobalListChanged);
      ScreenManager.FocusedLayer = (ScreenLayer) null;
      ScreenManager.FirstHitLayer = (ScreenLayer) null;
    }

    public static void Initialize(IScreenManagerEngineConnection engineInterface)
    {
      ScreenManager._engineInterface = engineInterface;
    }

    internal static void RefreshGlobalOrder()
    {
      if (ScreenManager._isRefreshActive)
        return;
      ScreenManager._isRefreshActive = true;
      int currentOrder1 = -2000;
      int currentOrder2 = 10000;
      for (int index = 0; index < ScreenManager.SortedLayers.Count; ++index)
      {
        if (ScreenManager.SortedLayers[index] != null)
        {
          if (!ScreenManager.SortedLayers[index].Finalized)
          {
            ScreenLayer sortedLayer = ScreenManager.SortedLayers[index];
            if ((sortedLayer != null ? (sortedLayer.IsActive ? 1 : 0) : 0) != 0)
              ScreenManager.SortedLayers[index]?.RefreshGlobalOrder(ref currentOrder1);
            else
              ScreenManager.SortedLayers[index]?.RefreshGlobalOrder(ref currentOrder2);
          }
          ScreenManager._globalOrderDirty = false;
        }
      }
      ScreenManager._isRefreshActive = false;
    }

    public static void RemoveGlobalLayer(GlobalLayer layer)
    {
      TaleWorlds.Library.Debug.Print(nameof (RemoveGlobalLayer));
      ScreenManager._globalLayers.Remove(layer);
      layer.Layer.HandleDeactivate();
      ScreenManager._globalOrderDirty = true;
    }

    public static void AddGlobalLayer(GlobalLayer layer, bool isFocusable)
    {
      TaleWorlds.Library.Debug.Print(nameof (AddGlobalLayer));
      int index1 = ScreenManager._globalLayers.Count;
      for (int index2 = 0; index2 < ScreenManager._globalLayers.Count; ++index2)
      {
        if (ScreenManager._globalLayers[index2].Layer.InputRestrictions.Order >= layer.Layer.InputRestrictions.Order)
        {
          index1 = index2;
          break;
        }
      }
      ScreenManager._globalLayers.Insert(index1, layer);
      layer.Layer.HandleActivate();
      ScreenManager._globalOrderDirty = true;
    }

    public static void OnConstrainStateChanged(bool isConstrained)
    {
      TaleWorlds.Library.Debug.Print("OnConstrainStateChanged: " + isConstrained.ToString());
      ScreenManager.OnGameWindowFocusChange(!isConstrained);
    }

    public static bool ScreenTypeExistsAtList(ScreenBase screen)
    {
      Type type = screen.GetType();
      foreach (object screen1 in (Collection<ScreenBase>) ScreenManager._screenList)
      {
        if (screen1.GetType() == type)
          return true;
      }
      return false;
    }

    public static void UpdateLayout()
    {
      foreach (GlobalLayer globalLayer in (Collection<GlobalLayer>) ScreenManager._globalLayers)
        globalLayer.UpdateLayout();
      foreach (ScreenBase screen in (Collection<ScreenBase>) ScreenManager._screenList)
        screen.UpdateLayout();
    }

    public static void SetSuspendLayer(ScreenLayer layer, bool isSuspended)
    {
      if (isSuspended)
        layer.HandleDeactivate();
      else
        layer.HandleActivate();
      layer.LastActiveState = !isSuspended;
    }

    public static void OnFinalize()
    {
      ScreenManager.DeactivateAndFinalizeAllScreens();
      ScreenManager._screenList.CollectionChanged -= new NotifyCollectionChangedEventHandler(ScreenManager.OnScreenListChanged);
      ScreenManager._globalLayers.CollectionChanged -= new NotifyCollectionChangedEventHandler(ScreenManager.OnGlobalListChanged);
      ScreenManager._screenList = (ObservableCollection<ScreenBase>) null;
      ScreenManager._globalLayers = (ObservableCollection<GlobalLayer>) null;
      ScreenManager.FocusedLayer = (ScreenLayer) null;
    }

    private static void DeactivateAndFinalizeAllScreens()
    {
      TaleWorlds.Library.Debug.Print(nameof (DeactivateAndFinalizeAllScreens));
      for (int index = ScreenManager._screenList.Count - 1; index >= 0; --index)
        ScreenManager._screenList[index].HandlePause();
      for (int index = ScreenManager._screenList.Count - 1; index >= 0; --index)
        ScreenManager._screenList[index].HandleDeactivate();
      for (int index = ScreenManager._screenList.Count - 1; index >= 0; --index)
        ScreenManager._screenList[index].HandleFinalize();
      ScreenManager._screenList.Clear();
      Common.MemoryCleanupGC();
    }

    internal static void UpdateLateTickLayers(List<ScreenLayer> layers)
    {
      ScreenManager._lateTickLayers = layers;
    }

    public static void Tick(float dt, bool activeMouseVisible)
    {
      for (int index = 0; index < ScreenManager._globalLayers.Count; ++index)
        ScreenManager._globalLayers[index]?.EarlyTick(dt);
      ScreenManager.Update();
      ScreenManager._lateTickLayers = (List<ScreenLayer>) null;
      if (ScreenManager.TopScreen != null)
      {
        ScreenManager.TopScreen.FrameTick(dt);
        ScreenManager.FindPredecessor(ScreenManager.TopScreen)?.IdleTick(dt);
      }
      for (int index = 0; index < ScreenManager._globalLayers.Count; ++index)
        ScreenManager._globalLayers[index]?.Tick(dt);
      ScreenManager.LateUpdate(dt, activeMouseVisible);
      ScreenManager.ShowScreenDebugInformation();
    }

    public static void LateTick(float dt)
    {
      if (ScreenManager._lateTickLayers != null)
      {
        for (int index = 0; index < ScreenManager._lateTickLayers.Count; ++index)
        {
          if (!ScreenManager._lateTickLayers[index].Finalized)
            ScreenManager._lateTickLayers[index].LateTick(dt);
        }
        ScreenManager._lateTickLayers.Clear();
      }
      for (int index = 0; index < ScreenManager._globalLayers.Count; ++index)
        ScreenManager._globalLayers[index].LateTick(dt);
    }

    public static void OnPlatformScreenKeyboardRequested(
      string initialText,
      string descriptionText,
      int maxLength,
      int keyboardTypeEnum)
    {
      Action<string, string, int, int> platformTextRequested = ScreenManager.PlatformTextRequested;
      if (platformTextRequested == null)
        return;
      platformTextRequested(initialText, descriptionText, maxLength, keyboardTypeEnum);
    }

    public static void OnOnscreenKeyboardDone(string inputText)
    {
      ScreenManager.FocusedLayer?.OnOnScreenKeyboardDone(inputText);
    }

    public static void OnOnscreenKeyboardCanceled()
    {
      ScreenManager.FocusedLayer?.OnOnScreenKeyboardCanceled();
    }

    public static void OnGameWindowFocusChange(bool focusGained)
    {
      TaleWorlds.Library.Debug.Print("OnGameWindowFocusChange: " + focusGained.ToString());
      TaleWorlds.Library.Debug.Print("TopScreen: " + ScreenManager.TopScreen?.GetType()?.Name);
      bool flag = false;
      if (!Debugger.IsAttached && !flag)
        ScreenManager.TopScreen?.OnFocusChangeOnGameWindow(focusGained);
      if (!focusGained)
        return;
      Action focusGained1 = ScreenManager.FocusGained;
      if (focusGained1 == null)
        return;
      focusGained1();
    }

    public static event Action FocusGained;

    public static event Action<string, string, int, int> PlatformTextRequested;

    public static void ReplaceTopScreen(ScreenBase screen)
    {
      TaleWorlds.Library.Debug.Print("ReplaceToTopScreen");
      if (ScreenManager._screenList.Count > 0)
      {
        ScreenManager.TopScreen.HandlePause();
        ScreenManager.TopScreen.HandleDeactivate();
        ScreenManager.TopScreen.HandleFinalize();
        ScreenManager.OnPopScreenEvent onPopScreen = ScreenManager.OnPopScreen;
        if (onPopScreen != null)
          onPopScreen(ScreenManager.TopScreen);
        ScreenManager._screenList.Remove(ScreenManager.TopScreen);
      }
      ScreenManager._screenList.Add(screen);
      screen.HandleInitialize();
      screen.HandleActivate();
      screen.HandleResume();
      ScreenManager._globalOrderDirty = true;
      ScreenManager.OnPushScreenEvent onPushScreen = ScreenManager.OnPushScreen;
      if (onPushScreen == null)
        return;
      onPushScreen(screen);
    }

    public static List<ScreenLayer> GetPersistentInputRestrictions()
    {
      List<ScreenLayer> inputRestrictions = new List<ScreenLayer>();
      foreach (GlobalLayer globalLayer in (Collection<GlobalLayer>) ScreenManager._globalLayers)
        inputRestrictions.Add(globalLayer.Layer);
      return inputRestrictions;
    }

    public static void SetAndActivateRootScreen(ScreenBase screen)
    {
      TaleWorlds.Library.Debug.Print(nameof (SetAndActivateRootScreen));
      if (ScreenManager.TopScreen != null)
        throw new Exception("TopScreen is not null.");
      ScreenManager._screenList.Add(screen);
      screen.HandleInitialize();
      screen.HandleActivate();
      screen.HandleResume();
      ScreenManager._globalOrderDirty = true;
      ScreenManager.OnPushScreenEvent onPushScreen = ScreenManager.OnPushScreen;
      if (onPushScreen == null)
        return;
      onPushScreen(screen);
    }

    public static void CleanAndPushScreen(ScreenBase screen)
    {
      TaleWorlds.Library.Debug.Print(nameof (CleanAndPushScreen));
      ScreenManager.DeactivateAndFinalizeAllScreens();
      ScreenManager._screenList.Add(screen);
      screen.HandleInitialize();
      screen.HandleActivate();
      screen.HandleResume();
      ScreenManager._globalOrderDirty = true;
      ScreenManager.OnPushScreenEvent onPushScreen = ScreenManager.OnPushScreen;
      if (onPushScreen == null)
        return;
      onPushScreen(screen);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("cb_clear_siege_machine_selection", "ui")]
    public static string ClearSiegeMachineSelection(List<string> args)
    {
      ScreenBase screenBase = ScreenManager._screenList.FirstOrDefault<ScreenBase>((Func<ScreenBase, bool>) (x => x.GetType().GetMethod("ClearSiegeMachineSelections") != (MethodInfo) null));
      screenBase?.GetType().GetMethod("ClearSiegeMachineSelections").Invoke((object) screenBase, (object[]) null);
      return "Siege machine selections have been cleared.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("cb_copy_battle_layout_to_clipboard", "ui")]
    public static string CopyCustomBattle(List<string> args)
    {
      ScreenBase screenBase = ScreenManager._screenList.FirstOrDefault<ScreenBase>((Func<ScreenBase, bool>) (x => x.GetType().GetMethod("CopyBattleLayoutToClipboard") != (MethodInfo) null));
      if (screenBase == null)
        return "Something went wrong";
      screenBase.GetType().GetMethod("CopyBattleLayoutToClipboard").Invoke((object) screenBase, (object[]) null);
      return "Custom battle layout has been copied to clipboard as text.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("cb_apply_battle_layout_from_string", "ui")]
    public static string ApplyCustomBattleLayout(List<string> args)
    {
      ScreenBase screenBase = ScreenManager._screenList.FirstOrDefault<ScreenBase>((Func<ScreenBase, bool>) (x => x.GetType().GetMethod(nameof (ApplyCustomBattleLayout)) != (MethodInfo) null));
      if (screenBase == null || args.Count <= 0)
        return "Something went wrong.";
      string source = args.Aggregate<string>((Func<string, string, string>) ((i, j) => i + " " + j));
      if (source.Count<char>() <= 5)
        return "Argument is not right.";
      screenBase.GetType().GetMethod(nameof (ApplyCustomBattleLayout)).Invoke((object) screenBase, new object[1]
      {
        (object) source
      });
      return "Applied new layout from text.";
    }

    public static void PushScreen(ScreenBase screen)
    {
      TaleWorlds.Library.Debug.Print(nameof (PushScreen));
      if (ScreenManager._screenList.Count > 0)
      {
        ScreenManager.TopScreen.HandlePause();
        if (ScreenManager.TopScreen.IsActive)
          ScreenManager.TopScreen.HandleDeactivate();
      }
      ScreenManager._screenList.Add(screen);
      screen.HandleInitialize();
      screen.HandleActivate();
      screen.HandleResume();
      ScreenManager._globalOrderDirty = true;
      ScreenManager.OnPushScreenEvent onPushScreen = ScreenManager.OnPushScreen;
      if (onPushScreen == null)
        return;
      onPushScreen(screen);
    }

    public static void PopScreen()
    {
      TaleWorlds.Library.Debug.Print(nameof (PopScreen));
      if (ScreenManager._screenList.Count > 0)
      {
        ScreenManager.TopScreen.HandlePause();
        ScreenManager.TopScreen.HandleDeactivate();
        ScreenManager.TopScreen.HandleFinalize();
        TaleWorlds.Library.Debug.Print("PopScreen - " + ScreenManager.TopScreen.GetType().ToString());
        ScreenManager.OnPopScreenEvent onPopScreen = ScreenManager.OnPopScreen;
        if (onPopScreen != null)
          onPopScreen(ScreenManager.TopScreen);
        ScreenManager._screenList.Remove(ScreenManager.TopScreen);
      }
      if (ScreenManager._screenList.Count > 0)
      {
        ScreenBase topScreen1 = ScreenManager.TopScreen;
        ScreenManager.TopScreen.HandleActivate();
        ScreenBase topScreen2 = ScreenManager.TopScreen;
        if (topScreen1 == topScreen2)
          ScreenManager.TopScreen.HandleResume();
      }
      ScreenManager._globalOrderDirty = true;
    }

    public static void CleanScreens()
    {
      TaleWorlds.Library.Debug.Print(nameof (CleanScreens));
      while (ScreenManager._screenList.Count > 0)
      {
        ScreenManager.TopScreen.HandlePause();
        ScreenManager.TopScreen.HandleDeactivate();
        ScreenManager.TopScreen.HandleFinalize();
        ScreenManager.OnPopScreenEvent onPopScreen = ScreenManager.OnPopScreen;
        if (onPopScreen != null)
          onPopScreen(ScreenManager.TopScreen);
        ScreenManager._screenList.Remove(ScreenManager.TopScreen);
      }
      ScreenManager._globalOrderDirty = true;
    }

    private static ScreenBase FindPredecessor(ScreenBase screen)
    {
      ScreenBase predecessor = (ScreenBase) null;
      int num = ScreenManager._screenList.IndexOf(screen);
      if (num > 0)
        predecessor = ScreenManager._screenList[num - 1];
      return predecessor;
    }

    public static void Update(IReadOnlyList<int> lastKeysPressed)
    {
      ScreenManager._lastPressedKeys = lastKeysPressed;
      ScreenBase topScreen = ScreenManager.TopScreen;
      if ((topScreen != null ? (topScreen.IsActive ? 1 : 0) : 0) != 0)
        ScreenManager.TopScreen.Update(ScreenManager._lastPressedKeys);
      for (int index = 0; index < ScreenManager._globalLayers.Count; ++index)
      {
        GlobalLayer globalLayer = ScreenManager._globalLayers[index];
        if (globalLayer.Layer.IsActive)
          globalLayer.Update(ScreenManager._lastPressedKeys);
      }
    }

    private static bool? GetMouseInput()
    {
      bool flag1 = false;
      if (Input.IsKeyDown(InputKey.LeftMouseButton) || Input.IsKeyDown(InputKey.RightMouseButton) || Input.IsKeyDown(InputKey.MiddleMouseButton) || Input.IsKeyDown(InputKey.X1MouseButton) || Input.IsKeyDown(InputKey.X2MouseButton) || Input.IsKeyDown(ScreenManager.IsEnterButtonRDown ? InputKey.ControllerRDown : InputKey.ControllerRRight))
        flag1 = true;
      bool flag2;
      if (!ScreenManager._isMouseInputActiveLastFrame & flag1)
      {
        flag2 = true;
      }
      else
      {
        if (!ScreenManager._isMouseInputActiveLastFrame || flag1)
          return new bool?();
        flag2 = false;
      }
      ScreenManager._isMouseInputActiveLastFrame = flag2;
      return new bool?(flag2);
    }

    public static void EarlyUpdate(Vec2 usableArea)
    {
      ScreenManager.UsableArea = usableArea;
      ScreenManager.RefreshGlobalOrder();
      TaleWorlds.Library.InputType p1 = TaleWorlds.Library.InputType.None;
      for (int index = 0; index < ScreenManager.SortedLayers.Count; ++index)
      {
        ScreenLayer sortedLayer = ScreenManager.SortedLayers[index];
        if ((sortedLayer != null ? (sortedLayer.IsActive ? 1 : 0) : 0) != 0)
          ScreenManager.SortedLayers[index].MouseEnabled = true;
      }
      bool? mouseInput = ScreenManager.GetMouseInput();
      for (int index = ScreenManager.SortedLayers.Count - 1; index >= 0; --index)
      {
        ScreenLayer sortedLayer = ScreenManager.SortedLayers[index];
        if (sortedLayer != null && sortedLayer.IsActive && !sortedLayer.Finalized)
        {
          bool? isMousePressed = new bool?();
          bool? nullable = mouseInput;
          bool flag = false;
          if (nullable.GetValueOrDefault() == flag & nullable.HasValue)
            isMousePressed = new bool?(false);
          TaleWorlds.Library.InputType handledInputs = TaleWorlds.Library.InputType.None;
          InputUsageMask inputUsageMask = sortedLayer.InputUsageMask;
          sortedLayer.ScreenOrderInLastFrame = index;
          sortedLayer.IsHitThisFrame = false;
          if (sortedLayer.HitTest())
          {
            if (ScreenManager.FirstHitLayer == null)
            {
              ScreenManager.FirstHitLayer = sortedLayer;
              ScreenManager._engineInterface.ActivateMouseCursor(sortedLayer.ActiveCursor);
            }
            if (!p1.HasAnyFlag<TaleWorlds.Library.InputType>(TaleWorlds.Library.InputType.MouseButton) && inputUsageMask.HasAnyFlag<InputUsageMask>(InputUsageMask.MouseButtons))
            {
              isMousePressed = mouseInput;
              handledInputs |= TaleWorlds.Library.InputType.MouseButton;
              p1 |= TaleWorlds.Library.InputType.MouseButton;
              sortedLayer.IsHitThisFrame = true;
            }
            if (!p1.HasAnyFlag<TaleWorlds.Library.InputType>(TaleWorlds.Library.InputType.MouseWheel) && inputUsageMask.HasAnyFlag<InputUsageMask>(InputUsageMask.MouseWheels))
            {
              handledInputs |= TaleWorlds.Library.InputType.MouseWheel;
              p1 |= TaleWorlds.Library.InputType.MouseWheel;
              sortedLayer.IsHitThisFrame = true;
            }
          }
          if (!p1.HasAnyFlag<TaleWorlds.Library.InputType>(TaleWorlds.Library.InputType.Key) && ScreenManager.FocusTest(sortedLayer))
          {
            handledInputs |= TaleWorlds.Library.InputType.Key;
            p1 |= TaleWorlds.Library.InputType.Key;
          }
          sortedLayer.EarlyProcessEvents(handledInputs, isMousePressed);
        }
      }
    }

    private static void Update()
    {
      int length = 0;
      for (int index = 0; index < ScreenManager.SortedLayers.Count; ++index)
      {
        if (ScreenManager.SortedLayers[index].IsActive)
          ++length;
      }
      if (ScreenManager._sortedActiveLayersCopyForUpdate.Length < length)
        ScreenManager._sortedActiveLayersCopyForUpdate = new ScreenLayer[length];
      int index1 = 0;
      for (int index2 = 0; index2 < ScreenManager.SortedLayers.Count; ++index2)
      {
        ScreenLayer sortedLayer = ScreenManager.SortedLayers[index2];
        if (sortedLayer.IsActive)
        {
          ScreenManager._sortedActiveLayersCopyForUpdate[index1] = sortedLayer;
          ++index1;
        }
      }
      for (int index3 = index1 - 1; index3 >= 0; --index3)
      {
        ScreenLayer screenLayer = ScreenManager._sortedActiveLayersCopyForUpdate[index3];
        if (!screenLayer.Finalized)
          screenLayer.ProcessEvents();
      }
      for (int index4 = 0; index4 < ScreenManager._sortedActiveLayersCopyForUpdate.Length; ++index4)
        ScreenManager._sortedActiveLayersCopyForUpdate[index4] = (ScreenLayer) null;
    }

    private static void LateUpdate(float dt, bool activeMouseVisible)
    {
      for (int index = 0; index < ScreenManager.SortedLayers.Count; ++index)
      {
        ScreenLayer sortedLayer = ScreenManager.SortedLayers[index];
        if (sortedLayer != null && sortedLayer.IsActive)
          sortedLayer.LateProcessEvents();
      }
      for (int index = 0; index < ScreenManager.SortedLayers.Count; ++index)
      {
        ScreenLayer sortedLayer = ScreenManager.SortedLayers[index];
        if (sortedLayer != null && sortedLayer.IsActive)
        {
          sortedLayer.OnLateUpdate(dt);
          if (sortedLayer != ScreenManager.FocusedLayer || ScreenManager._focusedLayerChangedThisFrame)
            sortedLayer.Input.ResetLastDownKeys();
        }
      }
      if (!ScreenManager._focusedLayerChangedThisFrame)
        ScreenManager.FocusedLayer?.Input?.UpdateLastDownKeys();
      ScreenManager._focusedLayerChangedThisFrame = false;
      ScreenManager.FirstHitLayer = (ScreenLayer) null;
      ScreenManager.UpdateMouseVisibility(activeMouseVisible);
      if (!ScreenManager._globalOrderDirty)
        return;
      ScreenManager.RefreshGlobalOrder();
    }

    internal static void UpdateMouseVisibility(bool activeMouseVisible)
    {
      for (int index = 0; index < ScreenManager.SortedLayers.Count; ++index)
      {
        ScreenLayer sortedLayer = ScreenManager.SortedLayers[index];
        if (sortedLayer.IsActive && sortedLayer.InputRestrictions.MouseVisibility)
        {
          if (ScreenManager._activeMouseVisible)
            return;
          ScreenManager.SetMouseVisible(true);
          return;
        }
      }
      if (!ScreenManager._activeMouseVisible)
        return;
      ScreenManager.SetMouseVisible(false);
    }

    public static bool IsControllerActive()
    {
      return Input.IsControllerConnected && Input.IsGamepadActive && !Input.IsMouseActive && ScreenManager._engineInterface.GetMouseVisible();
    }

    public static bool IsMouseCursorHidden()
    {
      return !Input.IsMouseActive && ScreenManager._engineInterface.GetMouseVisible();
    }

    public static bool IsMouseCursorActive()
    {
      return Input.IsMouseActive && ScreenManager._engineInterface.GetMouseVisible();
    }

    public static bool IsLayerBlockedAtPosition(ScreenLayer layer, Vector2 position)
    {
      for (int index = ScreenManager.SortedLayers.Count - 1; index >= 0; --index)
      {
        ScreenLayer sortedLayer = ScreenManager.SortedLayers[index];
        if (layer == sortedLayer)
          return false;
        if (sortedLayer != null && sortedLayer.IsActive && !sortedLayer.Finalized && sortedLayer.HitTest(position) && (sortedLayer.InputUsageMask.HasAnyFlag<InputUsageMask>(InputUsageMask.MouseButtons) || sortedLayer.InputUsageMask.HasAnyFlag<InputUsageMask>(InputUsageMask.MouseWheels)))
          return layer != ScreenManager.SortedLayers[index];
      }
      return false;
    }

    private static void SetMouseVisible(bool value)
    {
      ScreenManager._activeMouseVisible = value;
      ScreenManager._engineInterface.SetMouseVisible(value);
    }

    public static bool GetMouseVisibility() => ScreenManager._activeMouseVisible;

    public static void TrySetFocus(ScreenLayer layer)
    {
      if (ScreenManager.FocusedLayer != null && ScreenManager.FocusedLayer.InputRestrictions.Order > layer.InputRestrictions.Order && layer.IsActive || !layer.IsFocusLayer && !layer.FocusTest())
        return;
      if (ScreenManager.FocusedLayer != layer)
      {
        ScreenManager._focusedLayerChangedThisFrame = true;
        if (ScreenManager.FocusedLayer != null)
          ScreenManager.FocusedLayer.OnLoseFocus();
      }
      ScreenManager.FocusedLayer = layer;
    }

    public static void TryLoseFocus(ScreenLayer layer)
    {
      if (ScreenManager.FocusedLayer != layer)
        return;
      ScreenManager.FocusedLayer?.OnLoseFocus();
      for (int index = ScreenManager.SortedLayers.Count - 1; index >= 0; --index)
      {
        ScreenLayer sortedLayer = ScreenManager.SortedLayers[index];
        if (sortedLayer.IsActive && sortedLayer.IsFocusLayer && layer != sortedLayer)
        {
          ScreenManager.FocusedLayer = sortedLayer;
          ScreenManager._focusedLayerChangedThisFrame = true;
          return;
        }
      }
      ScreenManager.FocusedLayer = (ScreenLayer) null;
    }

    private static bool FocusTest(ScreenLayer layer)
    {
      if (Input.IsGamepadActive && layer.InputRestrictions.CanOverrideFocusOnHit)
        return layer.IsHitThisFrame;
      return ScreenManager.FocusedLayer == layer;
    }

    public static void OnScaleChange(float newScale)
    {
      ScreenManager.Scale = newScale;
      foreach (GlobalLayer globalLayer in (Collection<GlobalLayer>) ScreenManager._globalLayers)
        globalLayer.UpdateLayout();
      foreach (ScreenBase screen in (Collection<ScreenBase>) ScreenManager._screenList)
        screen.UpdateLayout();
    }

    public static void OnControllerDisconnect()
    {
      ScreenManager.OnControllerDisconnectedEvent controllerDisconnected = ScreenManager.OnControllerDisconnected;
      if (controllerDisconnected == null)
        return;
      controllerDisconnected();
    }

    private static void OnScreenListChanged(object sender, NotifyCollectionChangedEventArgs e)
    {
      TaleWorlds.Library.Debug.Print(nameof (OnScreenListChanged));
      ScreenManager._isSortedActiveLayersDirty = true;
      ObservableCollection<ScreenBase> screenList = ScreenManager._screenList;
      // ISSUE: explicit non-virtual call
      if ((screenList != null ? (__nonvirtual (screenList.Count) > 0 ? 1 : 0) : 0) != 0)
      {
        if (ScreenManager.TopScreen != null)
        {
          ScreenManager.TopScreen.OnAddLayer -= new ScreenBase.OnLayerAddedEvent(ScreenManager.OnLayerAddedToTopLayer);
          ScreenManager.TopScreen.OnRemoveLayer -= new ScreenBase.OnLayerRemovedEvent(ScreenManager.OnLayerRemovedFromTopLayer);
        }
        ScreenManager.TopScreen = ScreenManager._screenList[ScreenManager._screenList.Count - 1];
        if (ScreenManager.TopScreen != null)
        {
          ScreenManager.TopScreen.OnAddLayer += new ScreenBase.OnLayerAddedEvent(ScreenManager.OnLayerAddedToTopLayer);
          ScreenManager.TopScreen.OnRemoveLayer += new ScreenBase.OnLayerRemovedEvent(ScreenManager.OnLayerRemovedFromTopLayer);
        }
      }
      else
      {
        if (ScreenManager.TopScreen != null)
        {
          ScreenManager.TopScreen.OnAddLayer -= new ScreenBase.OnLayerAddedEvent(ScreenManager.OnLayerAddedToTopLayer);
          ScreenManager.TopScreen.OnRemoveLayer -= new ScreenBase.OnLayerRemovedEvent(ScreenManager.OnLayerRemovedFromTopLayer);
        }
        ScreenManager.TopScreen = (ScreenBase) null;
      }
      ScreenManager._isSortedActiveLayersDirty = true;
    }

    private static void OnLayerAddedToTopLayer(ScreenLayer layer)
    {
      ScreenManager._isSortedActiveLayersDirty = true;
    }

    private static void OnLayerRemovedFromTopLayer(ScreenLayer layer)
    {
      ScreenManager._isSortedActiveLayersDirty = true;
    }

    private static void OnGlobalListChanged(object sender, NotifyCollectionChangedEventArgs e)
    {
      ScreenManager._isSortedActiveLayersDirty = true;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_screen_debug_information_enabled", "ui")]
    public static string SetScreenDebugInformationEnabled(List<string> args)
    {
      string str = "Usage: ui.set_screen_debug_information_enabled [True/False]";
      bool result;
      if (args.Count != 1 || !bool.TryParse(args[0], out result))
        return str;
      ScreenManager.SetScreenDebugInformationEnabled(result);
      return "Success.";
    }

    public static void SetScreenDebugInformationEnabled(bool isEnabled)
    {
      ScreenManager._isScreenDebugInformationEnabled = isEnabled;
    }

    private static void ShowScreenDebugInformation()
    {
      if (!ScreenManager._isScreenDebugInformationEnabled)
        return;
      ScreenManager._engineInterface.BeginDebugPanel("Screen Debug Information");
      for (int index = 0; index < ScreenManager.SortedLayers.Count; ++index)
      {
        ScreenLayer sortedLayer = ScreenManager.SortedLayers[index];
        if (ScreenManager._engineInterface.DrawDebugTreeNode(string.Format("{0}###{1}.{2}.{3}", (object) sortedLayer.GetType().Name, (object) sortedLayer.Name, (object) index, (object) sortedLayer.Name.GetDeterministicHashCode())))
        {
          sortedLayer.DrawDebugInfo();
          ScreenManager._engineInterface.PopDebugTreeNode();
        }
      }
      ScreenManager._engineInterface.EndDebugPanel();
    }

    private static void OnUsableAreaChanged(Vec2 newUsableArea) => ScreenManager.UpdateLayout();

    public delegate void OnPushScreenEvent(ScreenBase pushedScreen);

    public delegate void OnPopScreenEvent(ScreenBase poppedScreen);

    public delegate void OnControllerDisconnectedEvent();
  }
}
