// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.ClanState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class ClanState : TaleWorlds.Core.GameState
  {
    private IClanStateHandler _handler;

    public override bool IsMenuState => true;

    public Hero InitialSelectedHero { get; private set; }

    public PartyBase InitialSelectedParty { get; private set; }

    public Settlement InitialSelectedSettlement { get; private set; }

    public Workshop InitialSelectedWorkshop { get; private set; }

    public Alley InitialSelectedAlley { get; private set; }

    public IClanStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public ClanState()
    {
    }

    public ClanState(Hero initialSelectedHero) => this.InitialSelectedHero = initialSelectedHero;

    public ClanState(PartyBase initialSelectedParty)
    {
      this.InitialSelectedParty = initialSelectedParty;
    }

    public ClanState(Settlement initialSelectedSettlement)
    {
      this.InitialSelectedSettlement = initialSelectedSettlement;
    }

    public ClanState(Workshop initialSelectedWorkshop)
    {
      this.InitialSelectedWorkshop = initialSelectedWorkshop;
    }

    public ClanState(Alley initialSelectedAlley)
    {
      this.InitialSelectedAlley = initialSelectedAlley;
    }
  }
}
