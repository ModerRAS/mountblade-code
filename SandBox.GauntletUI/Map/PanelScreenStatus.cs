// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.PanelScreenStatus
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  public readonly struct PanelScreenStatus
  {
    public readonly bool IsCharacterScreenOpen;
    public readonly bool IsPartyScreenOpen;
    public readonly bool IsQuestsScreenOpen;
    public readonly bool IsInventoryScreenOpen;
    public readonly bool IsClanScreenOpen;
    public readonly bool IsKingdomScreenOpen;
    public readonly bool IsAnyPanelScreenOpen;
    public readonly bool IsCurrentScreenLocksNavigation;

    public PanelScreenStatus(ScreenBase screen)
    {
      this.IsCharacterScreenOpen = false;
      this.IsPartyScreenOpen = false;
      this.IsQuestsScreenOpen = false;
      this.IsInventoryScreenOpen = false;
      this.IsClanScreenOpen = false;
      this.IsKingdomScreenOpen = false;
      this.IsAnyPanelScreenOpen = true;
      this.IsCurrentScreenLocksNavigation = false;
      switch (screen)
      {
        case GauntletCharacterDeveloperScreen _:
          this.IsCharacterScreenOpen = true;
          break;
        case GauntletPartyScreen _:
          this.IsPartyScreenOpen = true;
          break;
        case GauntletQuestsScreen _:
          this.IsQuestsScreenOpen = true;
          break;
        case GauntletInventoryScreen _:
          this.IsInventoryScreenOpen = true;
          break;
        case GauntletClanScreen _:
          this.IsClanScreenOpen = true;
          break;
        case GauntletKingdomScreen gauntletKingdomScreen:
          this.IsKingdomScreenOpen = true;
          this.IsCurrentScreenLocksNavigation = gauntletKingdomScreen != null && gauntletKingdomScreen.IsMakingDecision;
          break;
        default:
          this.IsAnyPanelScreenOpen = false;
          break;
      }
    }
  }
}
