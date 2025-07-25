// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.GameOverState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class GameOverState : TaleWorlds.Core.GameState
  {
    private IGameOverStateHandler _handler;

    public override bool IsMenuState => true;

    public IGameOverStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public GameOverState.GameOverReason Reason { get; private set; }

    public GameOverState()
    {
    }

    public GameOverState(GameOverState.GameOverReason reason) => this.Reason = reason;

    public static GameOverState CreateForVictory()
    {
      return Game.Current?.GameStateManager.CreateState<GameOverState>((object) GameOverState.GameOverReason.Victory);
    }

    public static GameOverState CreateForRetirement()
    {
      return Game.Current?.GameStateManager.CreateState<GameOverState>((object) GameOverState.GameOverReason.Retirement);
    }

    public static GameOverState CreateForClanDestroyed()
    {
      return Game.Current?.GameStateManager.CreateState<GameOverState>((object) GameOverState.GameOverReason.ClanDestroyed);
    }

    public enum GameOverReason
    {
      Retirement,
      ClanDestroyed,
      Victory,
    }
  }
}
