// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BodyGenerator
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BodyGenerator
  {
    public const string FaceGenTeethAnimationName = "facegen_teeth";
    public BodyProperties CurrentBodyProperties;
    public BodyProperties BodyPropertiesMin;
    public BodyProperties BodyPropertiesMax;
    public int Race;
    public bool IsFemale;

    public BasicCharacterObject Character { get; private set; }

    public BodyGenerator(BasicCharacterObject troop)
    {
      this.Character = troop;
      MBDebug.Print("FaceGen set character> character face key: " + (object) troop.GetBodyProperties(troop.Equipment));
      this.Race = this.Character.Race;
      this.IsFemale = this.Character.IsFemale;
    }

    public FaceGenerationParams InitBodyGenerator(bool isDressed)
    {
      this.CurrentBodyProperties = this.Character.GetBodyProperties(this.Character.Equipment);
      FaceGenerationParams faceGenerationParams = FaceGenerationParams.Create() with
      {
        CurrentRace = this.Character.Race,
        CurrentGender = this.Character.IsFemale ? 1 : 0,
        CurrentAge = this.Character.Age
      };
      MBBodyProperties.GetParamsFromKey(ref faceGenerationParams, this.CurrentBodyProperties, isDressed && this.Character.Equipment.EarsAreHidden, isDressed && this.Character.Equipment.MouthIsHidden);
      faceGenerationParams.SetRaceGenderAndAdjustParams(faceGenerationParams.CurrentRace, faceGenerationParams.CurrentGender, (int) faceGenerationParams.CurrentAge);
      return faceGenerationParams;
    }

    public void RefreshFace(FaceGenerationParams faceGenerationParams, bool hasEquipment)
    {
      MBBodyProperties.ProduceNumericKeyWithParams(faceGenerationParams, hasEquipment && this.Character.Equipment.EarsAreHidden, hasEquipment && this.Character.Equipment.MouthIsHidden, ref this.CurrentBodyProperties);
      this.Race = faceGenerationParams.CurrentRace;
      this.IsFemale = faceGenerationParams.CurrentGender == 1;
    }

    public void SaveCurrentCharacter()
    {
      this.Character.UpdatePlayerCharacterBodyProperties(this.CurrentBodyProperties, this.Race, this.IsFemale);
    }
  }
}
