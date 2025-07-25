// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.IMapStateHandler
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public interface IMapStateHandler
  {
    void OnRefreshState();

    void OnMainPartyEncounter();

    void BeforeTick(float dt);

    void Tick(float dt);

    void AfterTick(float dt);

    void AfterWaitTick(float dt);

    void OnIdleTick(float dt);

    void OnSignalPeriodicEvents();

    void OnExit();

    void ResetCamera(bool resetDistance, bool teleportToMainParty);

    void TeleportCameraToMainParty();

    void FastMoveCameraToMainParty();

    bool IsCameraLockedToPlayerParty();

    void StartCameraAnimation(Vec2 targetPosition, float animationStopDuration);

    void OnHourlyTick();

    void OnMenuModeTick(float dt);

    void OnEnteringMenuMode(MenuContext menuContext);

    void OnExitingMenuMode();

    void OnBattleSimulationStarted(BattleSimulation battleSimulation);

    void OnBattleSimulationEnded();

    void OnGameplayCheatsEnabled();

    void OnMapConversationStarts(
      ConversationCharacterData playerCharacterData,
      ConversationCharacterData conversationPartnerData);

    void OnMapConversationOver();

    void OnPlayerSiegeActivated();

    void OnPlayerSiegeDeactivated();

    void OnSiegeEngineClick(MatrixFrame siegeEngineFrame);
  }
}
