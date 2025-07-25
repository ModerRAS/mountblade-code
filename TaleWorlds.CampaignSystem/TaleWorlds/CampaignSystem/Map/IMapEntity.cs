// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Map.IMapEntity
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Map
{
  public interface IMapEntity
  {
    Vec2 InteractionPosition { get; }

    TextObject Name { get; }

    bool OnMapClick(bool followModifierUsed);

    void OnHover();

    void OnOpenEncyclopedia();

    bool IsMobileEntity { get; }

    bool ShowCircleAroundEntity { get; }

    bool IsEnemyOf(IFaction faction);

    bool IsAllyOf(IFaction faction);

    void GetMountAndHarnessVisualIdsForPartyIcon(
      out string mountStringId,
      out string harnessStringId);

    void OnPartyInteraction(MobileParty mobileParty);
  }
}
