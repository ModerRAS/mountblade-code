// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BannerlordTableauManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class BannerlordTableauManager
  {
    private static Scene[] _tableauCharacterScenes = new Scene[5];
    private static bool _isTableauRenderSystemInitialized = false;
    public static BannerlordTableauManager.RequestCharacterTableauSetupDelegate RequestCallback;

    public static Scene[] TableauCharacterScenes
    {
      get => BannerlordTableauManager._tableauCharacterScenes;
    }

    public static void RequestCharacterTableauRender(
      int characterCodeId,
      string path,
      GameEntity poseEntity,
      Camera cameraObject,
      int tableauType)
    {
      MBAPI.IMBBannerlordTableauManager.RequestCharacterTableauRender(characterCodeId, path, poseEntity.Pointer, cameraObject.Pointer, tableauType);
    }

    public static void ClearManager()
    {
      BannerlordTableauManager._tableauCharacterScenes = (Scene[]) null;
      BannerlordTableauManager.RequestCallback = (BannerlordTableauManager.RequestCharacterTableauSetupDelegate) null;
      BannerlordTableauManager._isTableauRenderSystemInitialized = false;
    }

    public static void InitializeCharacterTableauRenderSystem()
    {
      if (BannerlordTableauManager._isTableauRenderSystemInitialized)
        return;
      MBAPI.IMBBannerlordTableauManager.InitializeCharacterTableauRenderSystem();
      BannerlordTableauManager._isTableauRenderSystemInitialized = true;
    }

    public static int GetNumberOfPendingTableauRequests()
    {
      return MBAPI.IMBBannerlordTableauManager.GetNumberOfPendingTableauRequests();
    }

    [MBCallback]
    internal static void RequestCharacterTableauSetup(
      int characterCodeId,
      Scene scene,
      GameEntity poseEntity)
    {
      BannerlordTableauManager.RequestCallback(characterCodeId, scene, poseEntity);
    }

    [MBCallback]
    internal static void RegisterCharacterTableauScene(Scene scene, int type)
    {
      BannerlordTableauManager.TableauCharacterScenes[type] = scene;
    }

    public delegate void RequestCharacterTableauSetupDelegate(
      int characterCodeId,
      Scene scene,
      GameEntity poseEntity);
  }
}
