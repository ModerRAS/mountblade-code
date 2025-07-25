// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.TournamentGames.TournamentParticipant
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.TournamentGames
{
  public class TournamentParticipant
  {
    public int Score { get; private set; }

    public CharacterObject Character { get; private set; }

    public UniqueTroopDescriptor Descriptor { get; private set; }

    public TournamentTeam Team { get; private set; }

    public Equipment MatchEquipment { get; set; }

    public bool IsAssigned { get; set; }

    public bool IsPlayer
    {
      get
      {
        CharacterObject character = this.Character;
        return character != null && character.IsPlayerCharacter;
      }
    }

    public TournamentParticipant(CharacterObject character, UniqueTroopDescriptor descriptor = default (UniqueTroopDescriptor))
    {
      this.Character = character;
      this.Descriptor = descriptor.IsValid ? descriptor : new UniqueTroopDescriptor(Game.Current.NextUniqueTroopSeed);
      this.Team = (TournamentTeam) null;
      this.IsAssigned = false;
    }

    public void SetTeam(TournamentTeam team) => this.Team = team;

    public int AddScore(int score)
    {
      this.Score += score;
      return this.Score;
    }

    public void ResetScore() => this.Score = 0;
  }
}
