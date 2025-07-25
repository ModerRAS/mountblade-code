// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Map.IMapPoint
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Map
{
  public interface IMapPoint
  {
    void OnGameInitialized();

    TextObject Name { get; }

    Vec2 Position2D { get; }

    PathFaceRecord CurrentNavigationFace { get; }

    Vec3 GetLogicalPosition();

    IFaction MapFaction { get; }

    bool IsInspected { get; }

    bool IsVisible { get; }

    bool IsActive { get; set; }
  }
}
