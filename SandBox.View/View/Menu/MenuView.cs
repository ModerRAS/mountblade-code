// Decompiled with JetBrains decompiler
// Type: SandBox.View.Menu.MenuView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Overlay;

#nullable disable
namespace SandBox.View.Menu
{
  public abstract class MenuView : SandboxView
  {
    protected const float ContextAlphaModifier = 8.5f;

    internal bool Removed { get; set; }

    public virtual bool ShouldUpdateMenuAfterRemoved => false;

    public MenuViewContext MenuViewContext { get; internal set; }

    public MenuContext MenuContext { get; internal set; }

    protected internal virtual void OnMenuContextUpdated(MenuContext newMenuContext)
    {
    }

    protected internal virtual void OnOverlayTypeChange(GameOverlays.MenuOverlayType newType)
    {
    }

    protected internal virtual void OnCharacterDeveloperOpened()
    {
    }

    protected internal virtual void OnCharacterDeveloperClosed()
    {
    }

    protected internal virtual void OnBackgroundMeshNameSet(string name)
    {
    }

    protected internal virtual void OnHourlyTick()
    {
    }

    protected internal virtual void OnResume()
    {
    }

    protected internal virtual void OnMapConversationActivated()
    {
    }

    protected internal virtual void OnMapConversationDeactivated()
    {
    }
  }
}
