// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encounters.LocationEncounter
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encounters
{
  public class LocationEncounter
  {
    public bool IsInsideOfASettlement;

    public Settlement Settlement { get; }

    public List<AccompanyingCharacter> CharactersAccompanyingPlayer { get; private set; }

    protected LocationEncounter(Settlement settlement)
    {
      this.Settlement = settlement;
      this.CharactersAccompanyingPlayer = new List<AccompanyingCharacter>();
    }

    public void AddAccompanyingCharacter(LocationCharacter locationCharacter, bool isFollowing = false)
    {
      if (this.CharactersAccompanyingPlayer.Any<AccompanyingCharacter>((Func<AccompanyingCharacter, bool>) (x => x.LocationCharacter.Character == locationCharacter.Character)))
        return;
      this.CharactersAccompanyingPlayer.Add(new AccompanyingCharacter(locationCharacter, isFollowing));
    }

    public AccompanyingCharacter GetAccompanyingCharacter(LocationCharacter locationCharacter)
    {
      return this.CharactersAccompanyingPlayer.Find((Predicate<AccompanyingCharacter>) (x => x.LocationCharacter == locationCharacter));
    }

    public AccompanyingCharacter GetAccompanyingCharacter(CharacterObject character)
    {
      return this.CharactersAccompanyingPlayer.Find((Predicate<AccompanyingCharacter>) (x => x.LocationCharacter?.Character == character));
    }

    public void RemoveAccompanyingCharacter(LocationCharacter locationCharacter)
    {
      if (!this.CharactersAccompanyingPlayer.Any<AccompanyingCharacter>((Func<AccompanyingCharacter, bool>) (x => x.LocationCharacter == locationCharacter)))
        return;
      this.CharactersAccompanyingPlayer.Remove(this.CharactersAccompanyingPlayer.Find((Predicate<AccompanyingCharacter>) (x => x.LocationCharacter == locationCharacter)));
    }

    public void RemoveAccompanyingCharacter(Hero hero)
    {
      for (int index = this.CharactersAccompanyingPlayer.Count - 1; index >= 0; --index)
      {
        if (this.CharactersAccompanyingPlayer[index].LocationCharacter.Character.IsHero && this.CharactersAccompanyingPlayer[index].LocationCharacter.Character.HeroObject == hero)
        {
          this.CharactersAccompanyingPlayer.Remove(this.CharactersAccompanyingPlayer[index]);
          break;
        }
      }
    }

    public void RemoveAllAccompanyingCharacters() => this.CharactersAccompanyingPlayer.Clear();

    public void OnCharacterLocationChanged(
      LocationCharacter locationCharacter,
      Location fromLocation,
      Location toLocation)
    {
      if ((fromLocation != CampaignMission.Current.Location || toLocation != null) && (fromLocation != null || toLocation != CampaignMission.Current.Location))
        return;
      CampaignMission.Current.OnCharacterLocationChanged(locationCharacter, fromLocation, toLocation);
    }

    public virtual bool IsWorkshopLocation(Location location) => false;

    public virtual bool IsTavern(Location location) => false;

    public virtual IMission CreateAndOpenMissionController(
      Location nextLocation,
      Location previousLocation = null,
      CharacterObject talkToChar = null,
      string playerSpecialSpawnTag = null)
    {
      return (IMission) null;
    }
  }
}
