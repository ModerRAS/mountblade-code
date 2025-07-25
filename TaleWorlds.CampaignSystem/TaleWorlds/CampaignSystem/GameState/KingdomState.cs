// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.KingdomState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class KingdomState : TaleWorlds.Core.GameState
  {
    private IKingdomStateHandler _handler;

    public override bool IsMenuState => true;

    public Army InitialSelectedArmy { get; private set; }

    public Settlement InitialSelectedSettlement { get; private set; }

    public Clan InitialSelectedClan { get; private set; }

    public PolicyObject InitialSelectedPolicy { get; private set; }

    public Kingdom InitialSelectedKingdom { get; private set; }

    public KingdomDecision InitialSelectedDecision { get; private set; }

    public IKingdomStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public KingdomState()
    {
    }

    public KingdomState(KingdomDecision initialSelectedDecision)
    {
      this.InitialSelectedDecision = initialSelectedDecision;
    }

    public KingdomState(Army initialSelectedArmy) => this.InitialSelectedArmy = initialSelectedArmy;

    public KingdomState(Settlement initialSelectedSettlement)
    {
      this.InitialSelectedSettlement = initialSelectedSettlement;
    }

    public KingdomState(IFaction initialSelectedFaction)
    {
      switch (initialSelectedFaction)
      {
        case Clan clan:
          this.InitialSelectedClan = clan;
          break;
        case Kingdom kingdom:
          this.InitialSelectedKingdom = kingdom;
          break;
      }
    }

    public KingdomState(PolicyObject initialSelectedPolicy)
    {
      this.InitialSelectedPolicy = initialSelectedPolicy;
    }
  }
}
