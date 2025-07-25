// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.PartyThinkParams
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class PartyThinkParams
  {
    public MobileParty MobilePartyOf;
    private readonly MBList<(AIBehaviorTuple, float)> _aiBehaviorScores;
    public float CurrentObjectiveValue;
    public bool WillGatherAnArmy;
    public bool DoNotChangeBehavior;
    public float StrengthOfLordsWithoutArmy;
    public float StrengthOfLordsWithArmy;
    public float StrengthOfLordsAtSameClanWithoutArmy;

    public MBReadOnlyList<(AIBehaviorTuple, float)> AIBehaviorScores
    {
      get => (MBReadOnlyList<(AIBehaviorTuple, float)>) this._aiBehaviorScores;
    }

    public PartyThinkParams(MobileParty mobileParty)
    {
      this._aiBehaviorScores = new MBList<(AIBehaviorTuple, float)>(16);
      this.MobilePartyOf = mobileParty;
      this.WillGatherAnArmy = false;
      this.DoNotChangeBehavior = false;
      this.CurrentObjectiveValue = 0.0f;
    }

    public void Reset(MobileParty mobileParty)
    {
      this._aiBehaviorScores.Clear();
      this.MobilePartyOf = mobileParty;
      this.WillGatherAnArmy = false;
      this.DoNotChangeBehavior = false;
      this.CurrentObjectiveValue = 0.0f;
      this.StrengthOfLordsWithoutArmy = 0.0f;
      this.StrengthOfLordsWithArmy = 0.0f;
      this.StrengthOfLordsAtSameClanWithoutArmy = 0.0f;
    }

    public void Initialization()
    {
      this.StrengthOfLordsWithoutArmy = 0.0f;
      this.StrengthOfLordsWithArmy = 0.0f;
      this.StrengthOfLordsAtSameClanWithoutArmy = 0.0f;
      foreach (Hero hero in (List<Hero>) this.MobilePartyOf.MapFaction.Heroes)
      {
        if (hero.PartyBelongedTo != null)
        {
          MobileParty partyBelongedTo = hero.PartyBelongedTo;
          if (partyBelongedTo.Army != null)
          {
            this.StrengthOfLordsWithArmy += partyBelongedTo.Party.TotalStrength;
          }
          else
          {
            this.StrengthOfLordsWithoutArmy += partyBelongedTo.Party.TotalStrength;
            if (hero.Clan == this.MobilePartyOf.LeaderHero?.Clan)
              this.StrengthOfLordsAtSameClanWithoutArmy += partyBelongedTo.Party.TotalStrength;
          }
        }
      }
    }

    public bool TryGetBehaviorScore(in AIBehaviorTuple aiBehaviorTuple, out float score)
    {
      foreach ((AIBehaviorTuple, float) aiBehaviorScore in (List<(AIBehaviorTuple, float)>) this._aiBehaviorScores)
      {
        if (aiBehaviorScore.Item1.Equals(aiBehaviorTuple))
        {
          score = aiBehaviorScore.Item2;
          return true;
        }
      }
      score = 0.0f;
      return false;
    }

    public void SetBehaviorScore(in AIBehaviorTuple aiBehaviorTuple, float score)
    {
      for (int index = 0; index < this._aiBehaviorScores.Count; ++index)
      {
        if (this._aiBehaviorScores[index].Item1.Equals(aiBehaviorTuple))
        {
          this._aiBehaviorScores[index] = (this._aiBehaviorScores[index].Item1, score);
          return;
        }
      }
      Debug.FailedAssert("AIBehaviorScore not found.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\ICampaignBehaviorManager.cs", nameof (SetBehaviorScore), 152);
    }

    public void AddBehaviorScore(in (AIBehaviorTuple, float) value)
    {
      this._aiBehaviorScores.Add(value);
    }
  }
}
