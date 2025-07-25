// Decompiled with JetBrains decompiler
// Type: SandBox.MapSceneCreator
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem.Map;

#nullable disable
namespace SandBox
{
  public class MapSceneCreator : IMapSceneCreator
  {
    IMapScene IMapSceneCreator.CreateMapScene() => (IMapScene) new MapScene();
  }
}
