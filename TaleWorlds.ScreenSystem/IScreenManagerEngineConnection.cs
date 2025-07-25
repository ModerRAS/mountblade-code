// Decompiled with JetBrains decompiler
// Type: TaleWorlds.ScreenSystem.IScreenManagerEngineConnection
// Assembly: TaleWorlds.ScreenSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 93A4E59A-2741-4DEE-9F6A-10E242791002
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.ScreenSystem.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.ScreenSystem
{
  public interface IScreenManagerEngineConnection
  {
    float RealScreenResolutionWidth { get; }

    float RealScreenResolutionHeight { get; }

    float AspectRatio { get; }

    Vec2 DesktopResolution { get; }

    void ActivateMouseCursor(CursorType mouseId);

    void SetMouseVisible(bool value);

    bool GetMouseVisible();

    bool GetIsEnterButtonRDown();

    void BeginDebugPanel(string panelTitle);

    void EndDebugPanel();

    void DrawDebugText(string text);

    bool DrawDebugTreeNode(string text);

    void PopDebugTreeNode();
  }
}
