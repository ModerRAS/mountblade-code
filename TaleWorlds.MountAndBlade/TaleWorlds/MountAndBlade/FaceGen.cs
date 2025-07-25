// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FaceGen
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class FaceGen : IFaceGen
  {
    private readonly Dictionary<string, int> _raceNamesDictionary;
    private readonly string[] _raceNamesArray;
    private readonly Dictionary<string, Monster> _monstersDictionary;
    private readonly Monster[] _monstersArray;

    private FaceGen()
    {
      this._raceNamesDictionary = new Dictionary<string, int>();
      this._raceNamesArray = MBAPI.IMBFaceGen.GetRaceIds().Split(';');
      for (int index = 0; index < this._raceNamesArray.Length; ++index)
        this._raceNamesDictionary[this._raceNamesArray[index]] = index;
      this._monstersDictionary = new Dictionary<string, Monster>();
      this._monstersArray = new Monster[this._raceNamesArray.Length];
    }

    public static void CreateInstance() => TaleWorlds.Core.FaceGen.SetInstance((IFaceGen) new FaceGen());

    public Monster GetMonster(string monsterID)
    {
      Monster monster;
      if (!this._monstersDictionary.TryGetValue(monsterID, out monster))
      {
        monster = Game.Current.ObjectManager.GetObject<Monster>(monsterID);
        this._monstersDictionary[monsterID] = monster;
      }
      return monster;
    }

    public Monster GetMonsterWithSuffix(int race, string suffix)
    {
      return this.GetMonster(this._raceNamesArray[race] + suffix);
    }

    public Monster GetBaseMonsterFromRace(int race)
    {
      if (race >= 0 && race < this._monstersArray.Length)
      {
        Monster monsters = this._monstersArray[race];
        if (monsters == null)
        {
          monsters = Game.Current.ObjectManager.GetObject<Monster>(this._raceNamesArray[race]);
          this._monstersArray[race] = monsters;
        }
        return monsters;
      }
      Debug.FailedAssert("Monster race index is out of bounds: " + (object) race, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\FaceGen.cs", nameof (GetBaseMonsterFromRace), 64);
      return (Monster) null;
    }

    public BodyProperties GetRandomBodyProperties(
      int race,
      bool isFemale,
      BodyProperties bodyPropertiesMin,
      BodyProperties bodyPropertiesMax,
      int hairCoverType,
      int seed,
      string hairTags,
      string beardTags,
      string tattooTags)
    {
      return MBBodyProperties.GetRandomBodyProperties(race, isFemale, bodyPropertiesMin, bodyPropertiesMax, hairCoverType, seed, hairTags, beardTags, tattooTags);
    }

    void IFaceGen.GenerateParentBody(
      BodyProperties childBodyProperties,
      int race,
      ref BodyProperties motherBodyProperties,
      ref BodyProperties fatherBodyProperties)
    {
      MBBodyProperties.GenerateParentKey(childBodyProperties, race, ref motherBodyProperties, ref fatherBodyProperties);
    }

    void IFaceGen.SetHair(ref BodyProperties bodyProperties, int hair, int beard, int tattoo)
    {
      MBBodyProperties.SetHair(ref bodyProperties, hair, beard, tattoo);
    }

    void IFaceGen.SetBody(ref BodyProperties bodyProperties, int build, int weight)
    {
      MBBodyProperties.SetBody(ref bodyProperties, build, weight);
    }

    void IFaceGen.SetPigmentation(
      ref BodyProperties bodyProperties,
      int skinColor,
      int hairColor,
      int eyeColor)
    {
      MBBodyProperties.SetPigmentation(ref bodyProperties, skinColor, hairColor, eyeColor);
    }

    public BodyProperties GetBodyPropertiesWithAge(ref BodyProperties bodyProperties, float age)
    {
      return MBBodyProperties.GetBodyPropertiesWithAge(ref bodyProperties, age);
    }

    public void GetParamsFromBody(
      ref FaceGenerationParams faceGenerationParams,
      BodyProperties bodyProperties,
      bool earsAreHidden,
      bool mouthIsHidden)
    {
      MBBodyProperties.GetParamsFromKey(ref faceGenerationParams, bodyProperties, earsAreHidden, mouthIsHidden);
    }

    public BodyMeshMaturityType GetMaturityTypeWithAge(float age)
    {
      return MBBodyProperties.GetMaturityType(age);
    }

    public int GetRaceCount() => this._raceNamesArray.Length;

    public int GetRaceOrDefault(string raceId) => this._raceNamesDictionary[raceId];

    public string GetBaseMonsterNameFromRace(int race) => this._raceNamesArray[race];

    public string[] GetRaceNames() => (string[]) this._raceNamesArray.Clone();
  }
}
