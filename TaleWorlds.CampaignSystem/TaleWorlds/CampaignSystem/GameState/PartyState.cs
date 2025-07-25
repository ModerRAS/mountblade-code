// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.PartyState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class PartyState : PlayerGameState
  {
    private IPartyScreenLogicHandler _handler;

    public override bool IsMenuState => true;

    public PartyScreenLogic PartyScreenLogic { get; private set; }

    public IPartyScreenLogicHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public void InitializeLogic(PartyScreenLogic partyScreenLogic)
    {
      this.PartyScreenLogic = partyScreenLogic;
    }

    public void RequestUserInput(string text, Action accept, Action cancel)
    {
      if (this.Handler == null)
        return;
      this.Handler.RequestUserInput(text, accept, cancel);
    }
  }
}
