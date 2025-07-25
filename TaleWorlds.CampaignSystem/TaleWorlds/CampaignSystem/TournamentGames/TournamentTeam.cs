// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.TournamentGames.TournamentTeam
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.TournamentGames
{
  public class TournamentTeam
  {
    private List<TournamentParticipant> _participants;

    public int TeamSize { get; private set; }

    public uint TeamColor { get; private set; }

    public Banner TeamBanner { get; private set; }

    public bool IsPlayerTeam { get; private set; }

    public IEnumerable<TournamentParticipant> Participants
    {
      get => this._participants.AsEnumerable<TournamentParticipant>();
    }

    public int Score
    {
      get
      {
        int score = 0;
        foreach (TournamentParticipant participant in this._participants)
          score += participant.Score;
        return score;
      }
    }

    public TournamentTeam(int teamSize, uint teamColor, Banner teamBanner)
    {
      this.TeamColor = teamColor;
      this.TeamBanner = teamBanner;
      this.TeamSize = teamSize;
      this._participants = new List<TournamentParticipant>();
    }

    public bool IsParticipantRequired() => this._participants.Count < this.TeamSize;

    public void AddParticipant(TournamentParticipant participant)
    {
      participant.IsAssigned = true;
      this._participants.Add(participant);
      participant.SetTeam(this);
      if (!participant.IsPlayer)
        return;
      this.IsPlayerTeam = true;
    }
  }
}
