// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.View.Map
{
  public abstract class MapView : SandboxView
  {
    protected const float ContextAlphaModifier = 8.5f;

    public MapScreen MapScreen { get; internal set; }

    public MapState MapState { get; internal set; }

    protected internal virtual void CreateLayout()
    {
    }

    protected internal virtual void OnResume()
    {
    }

    protected internal virtual void OnHourlyTick()
    {
    }

    protected internal virtual void OnStartWait(string waitMenuId)
    {
    }

    protected internal virtual void OnMainPartyEncounter()
    {
    }

    protected internal virtual void OnDispersePlayerLeadedArmy()
    {
    }

    protected internal virtual void OnArmyLeft()
    {
    }

    protected internal virtual bool IsEscaped() => false;

    protected internal virtual bool IsOpeningEscapeMenuOnFocusChangeAllowed() => true;

    protected internal virtual void OnOverlayCreated()
    {
    }

    protected internal virtual void OnOverlayClosed()
    {
    }

    protected internal virtual void OnMenuModeTick(float dt)
    {
    }

    protected internal virtual void OnMapScreenUpdate(float dt)
    {
    }

    protected internal virtual void OnIdleTick(float dt)
    {
    }

    protected internal virtual void OnMapTerrainClick()
    {
    }

    protected internal virtual void OnSiegeEngineClick(MatrixFrame siegeEngineFrame)
    {
    }

    protected internal virtual void OnMapConversationStart()
    {
    }

    protected internal virtual void OnMapConversationUpdate(
      ConversationCharacterData playerConversationData,
      ConversationCharacterData partnerConversationData)
    {
    }

    protected internal virtual void OnMapConversationOver()
    {
    }
  }
}
