// Decompiled with JetBrains decompiler
// Type: TaleWorlds.Engine.GauntletUI.UIResourceManager
// Assembly: TaleWorlds.Engine.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 09142970-CF52-41EE-A3E1-A44F7B1BD752
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.Engine.GauntletUI.dll

using System.Collections.Generic;
using TaleWorlds.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.GauntletUI.PrefabSystem;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.Engine.GauntletUI
{
  public static class UIResourceManager
  {
    private static bool _latestUIDebugModeState;

    public static ResourceDepot UIResourceDepot { get; private set; }

    public static WidgetFactory WidgetFactory { get; private set; }

    public static SpriteData SpriteData { get; private set; }

    public static BrushFactory BrushFactory { get; private set; }

    public static FontFactory FontFactory { get; private set; }

    public static TwoDimensionEngineResourceContext ResourceContext { get; private set; }

    private static bool _uiDebugMode => UIConfig.DebugModeEnabled || NativeConfig.GetUIDebugMode;

    public static void Initialize(ResourceDepot resourceDepot, List<string> assemblyOrder)
    {
      UIResourceManager.UIResourceDepot = resourceDepot;
      UIResourceManager.WidgetFactory = new WidgetFactory(UIResourceManager.UIResourceDepot, "Prefabs");
      UIResourceManager.WidgetFactory.PrefabExtensionContext.AddExtension((PrefabExtension) new PrefabDatabindingExtension());
      UIResourceManager.WidgetFactory.Initialize(assemblyOrder);
      UIResourceManager.SpriteData = new SpriteData("SpriteData");
      UIResourceManager.SpriteData.Load(UIResourceManager.UIResourceDepot);
      UIResourceManager.FontFactory = new FontFactory(UIResourceManager.UIResourceDepot);
      UIResourceManager.FontFactory.LoadAllFonts(UIResourceManager.SpriteData);
      UIResourceManager.BrushFactory = new BrushFactory(UIResourceManager.UIResourceDepot, "Brushes", UIResourceManager.SpriteData, UIResourceManager.FontFactory);
      UIResourceManager.BrushFactory.Initialize();
      UIResourceManager.ResourceContext = new TwoDimensionEngineResourceContext();
    }

    public static void Update()
    {
      if (UIResourceManager._latestUIDebugModeState != UIResourceManager._uiDebugMode)
      {
        if (UIResourceManager._uiDebugMode)
          UIResourceManager.UIResourceDepot.StartWatchingChangesInDepot();
        else
          UIResourceManager.UIResourceDepot.StopWatchingChangesInDepot();
        UIResourceManager._latestUIDebugModeState = UIResourceManager._uiDebugMode;
      }
      if (!UIResourceManager._uiDebugMode)
        return;
      UIResourceManager.UIResourceDepot.CheckForChanges();
    }

    public static void OnLanguageChange(string newLanguageCode)
    {
      UIResourceManager.FontFactory.OnLanguageChange(newLanguageCode);
    }

    public static void Clear()
    {
      UIResourceManager.WidgetFactory = (WidgetFactory) null;
      UIResourceManager.SpriteData = (SpriteData) null;
      UIResourceManager.BrushFactory = (BrushFactory) null;
      UIResourceManager.FontFactory = (FontFactory) null;
    }
  }
}
