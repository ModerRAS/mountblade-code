// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBBodyProperties
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MBBodyProperties
  {
    public static int GetNumEditableDeformKeys(int race, bool initialGender, int age)
    {
      return MBAPI.IMBFaceGen.GetNumEditableDeformKeys(race, initialGender, (float) age);
    }

    public static void GetParamsFromKey(
      ref FaceGenerationParams faceGenerationParams,
      BodyProperties bodyProperties,
      bool earsAreHidden,
      bool mouthHidden)
    {
      MBAPI.IMBFaceGen.GetParamsFromKey(ref faceGenerationParams, ref bodyProperties, earsAreHidden, mouthHidden);
    }

    public static void GetParamsMax(
      int race,
      int curGender,
      int curAge,
      ref int hairNum,
      ref int beardNum,
      ref int faceTextureNum,
      ref int mouthTextureNum,
      ref int faceTattooNum,
      ref int soundNum,
      ref int eyebrowNum,
      ref float scale)
    {
      MBAPI.IMBFaceGen.GetParamsMax(race, curGender, (float) curAge, ref hairNum, ref beardNum, ref faceTextureNum, ref mouthTextureNum, ref faceTattooNum, ref soundNum, ref eyebrowNum, ref scale);
    }

    public static void GetZeroProbabilities(
      int race,
      int curGender,
      float curAge,
      ref float tattooZeroProbability)
    {
      MBAPI.IMBFaceGen.GetZeroProbabilities(race, curGender, curAge, ref tattooZeroProbability);
    }

    public static void ProduceNumericKeyWithParams(
      FaceGenerationParams faceGenerationParams,
      bool earsAreHidden,
      bool mouthIsHidden,
      ref BodyProperties bodyProperties)
    {
      MBAPI.IMBFaceGen.ProduceNumericKeyWithParams(ref faceGenerationParams, earsAreHidden, mouthIsHidden, ref bodyProperties);
    }

    public static void TransformFaceKeysToDefaultFace(ref FaceGenerationParams faceGenerationParams)
    {
      MBAPI.IMBFaceGen.TransformFaceKeysToDefaultFace(ref faceGenerationParams);
    }

    public static void ProduceNumericKeyWithDefaultValues(
      ref BodyProperties initialBodyProperties,
      bool earsAreHidden,
      bool mouthIsHidden,
      int race,
      int gender,
      int age)
    {
      MBAPI.IMBFaceGen.ProduceNumericKeyWithDefaultValues(ref initialBodyProperties, earsAreHidden, mouthIsHidden, race, gender, (float) age);
    }

    public static BodyProperties GetRandomBodyProperties(
      int race,
      bool isFemale,
      BodyProperties bodyPropertiesMin,
      BodyProperties bodyPropertiesMax,
      int hairCoverType,
      int seed,
      string hairTags,
      string beardTags,
      string tatooTags)
    {
      BodyProperties outBodyProperties = new BodyProperties();
      MBAPI.IMBFaceGen.GetRandomBodyProperties(race, isFemale ? 1 : 0, ref bodyPropertiesMin, ref bodyPropertiesMax, hairCoverType, seed, hairTags, beardTags, tatooTags, ref outBodyProperties);
      return outBodyProperties;
    }

    public static DeformKeyData GetDeformKeyData(int keyNo, int race, int gender, int age)
    {
      DeformKeyData deformKeyData = new DeformKeyData();
      MBAPI.IMBFaceGen.GetDeformKeyData(keyNo, ref deformKeyData, race, gender, (float) age);
      return deformKeyData;
    }

    public static int GetFaceGenInstancesLength(int race, int gender, int age)
    {
      return MBAPI.IMBFaceGen.GetFaceGenInstancesLength(race, gender, (float) age);
    }

    public static bool EnforceConstraints(ref FaceGenerationParams faceGenerationParams)
    {
      return MBAPI.IMBFaceGen.EnforceConstraints(ref faceGenerationParams);
    }

    public static float GetScaleFromKey(int race, int gender, BodyProperties bodyProperties)
    {
      return MBAPI.IMBFaceGen.GetScaleFromKey(race, gender, ref bodyProperties);
    }

    public static int GetHairColorCount(int race, int curGender, int age)
    {
      return MBAPI.IMBFaceGen.GetHairColorCount(race, curGender, (float) age);
    }

    public static List<uint> GetHairColorGradientPoints(int race, int curGender, int age)
    {
      int hairColorCount = MBBodyProperties.GetHairColorCount(race, curGender, age);
      List<uint> colorGradientPoints = new List<uint>();
      Vec3[] colors = new Vec3[hairColorCount];
      MBAPI.IMBFaceGen.GetHairColorGradientPoints(race, curGender, (float) age, colors);
      foreach (Vec3 vec3 in colors)
        colorGradientPoints.Add(MBMath.ColorFromRGBA(vec3.x, vec3.y, vec3.z, 1f));
      return colorGradientPoints;
    }

    public static int GetTatooColorCount(int race, int curGender, int age)
    {
      return MBAPI.IMBFaceGen.GetTatooColorCount(race, curGender, (float) age);
    }

    public static List<uint> GetTatooColorGradientPoints(int race, int curGender, int age)
    {
      int tatooColorCount = MBBodyProperties.GetTatooColorCount(race, curGender, age);
      List<uint> colorGradientPoints = new List<uint>();
      Vec3[] colors = new Vec3[tatooColorCount];
      MBAPI.IMBFaceGen.GetTatooColorGradientPoints(race, curGender, (float) age, colors);
      foreach (Vec3 vec3 in colors)
        colorGradientPoints.Add(MBMath.ColorFromRGBA(vec3.x, vec3.y, vec3.z, 1f));
      return colorGradientPoints;
    }

    public static int GetSkinColorCount(int race, int curGender, int age)
    {
      return MBAPI.IMBFaceGen.GetSkinColorCount(race, curGender, (float) age);
    }

    public static BodyMeshMaturityType GetMaturityType(float age)
    {
      return (BodyMeshMaturityType) MBAPI.IMBFaceGen.GetMaturityType(age);
    }

    public static string[] GetRaceIds() => MBAPI.IMBFaceGen.GetRaceIds().Split(';');

    public static List<uint> GetSkinColorGradientPoints(int race, int curGender, int age)
    {
      int skinColorCount = MBBodyProperties.GetSkinColorCount(race, curGender, age);
      List<uint> colorGradientPoints = new List<uint>();
      Vec3[] colors = new Vec3[skinColorCount];
      MBAPI.IMBFaceGen.GetSkinColorGradientPoints(race, curGender, (float) age, colors);
      foreach (Vec3 vec3 in colors)
        colorGradientPoints.Add(MBMath.ColorFromRGBA(vec3.x, vec3.y, vec3.z, 1f));
      return colorGradientPoints;
    }

    public static List<bool> GetVoiceTypeUsableForPlayerData(
      int race,
      int curGender,
      float age,
      int voiceTypeCount)
    {
      bool[] flagArray = new bool[voiceTypeCount];
      MBAPI.IMBFaceGen.GetVoiceTypeUsableForPlayerData(race, curGender, age, flagArray);
      return new List<bool>((IEnumerable<bool>) flagArray);
    }

    public static void SetHair(ref BodyProperties bodyProperties, int hair, int beard, int tattoo)
    {
      FaceGenerationParams faceGenerationParams = FaceGenerationParams.Create();
      MBBodyProperties.GetParamsFromKey(ref faceGenerationParams, bodyProperties, false, false);
      if (hair > -1)
        faceGenerationParams.CurrentHair = hair;
      if (beard > -1)
        faceGenerationParams.CurrentBeard = beard;
      if (tattoo > -1)
        faceGenerationParams.CurrentFaceTattoo = tattoo;
      MBBodyProperties.ProduceNumericKeyWithParams(faceGenerationParams, false, false, ref bodyProperties);
    }

    public static void SetBody(ref BodyProperties bodyProperties, int build, int weight)
    {
      FaceGenerationParams faceGenerationParams = FaceGenerationParams.Create();
      MBBodyProperties.GetParamsFromKey(ref faceGenerationParams, bodyProperties, false, false);
      MBBodyProperties.ProduceNumericKeyWithParams(faceGenerationParams, false, false, ref bodyProperties);
    }

    public static void SetPigmentation(
      ref BodyProperties bodyProperties,
      int skinColor,
      int hairColor,
      int eyeColor)
    {
      FaceGenerationParams faceGenerationParams = FaceGenerationParams.Create();
      MBBodyProperties.GetParamsFromKey(ref faceGenerationParams, bodyProperties, false, false);
      MBBodyProperties.ProduceNumericKeyWithParams(faceGenerationParams, false, false, ref bodyProperties);
    }

    public static void GenerateParentKey(
      BodyProperties childBodyProperties,
      int race,
      ref BodyProperties motherBodyProperties,
      ref BodyProperties fatherBodyProperties)
    {
      FaceGenerationParams faceGenerationParams1 = FaceGenerationParams.Create();
      FaceGenerationParams faceGenerationParams2 = FaceGenerationParams.Create();
      FaceGenerationParams faceGenerationParams3 = FaceGenerationParams.Create();
      MBBodyProperties.GenerationType[] generationTypeArray = new MBBodyProperties.GenerationType[4];
      for (int index = 0; index < generationTypeArray.Length; ++index)
        generationTypeArray[index] = (MBBodyProperties.GenerationType) MBRandom.RandomInt(2);
      MBBodyProperties.GetParamsFromKey(ref faceGenerationParams1, childBodyProperties, false, false);
      int genInstancesLength = MBBodyProperties.GetFaceGenInstancesLength(race, faceGenerationParams1.CurrentGender, (int) faceGenerationParams1.CurrentAge);
      for (int keyNo = 0; keyNo < genInstancesLength; ++keyNo)
      {
        DeformKeyData deformKeyData = MBBodyProperties.GetDeformKeyData(keyNo, race, faceGenerationParams1.CurrentGender, (int) faceGenerationParams1.CurrentAge);
        if (deformKeyData.GroupId >= 0 && deformKeyData.GroupId != 0 && deformKeyData.GroupId != 5 && deformKeyData.GroupId != 6)
        {
          float num = MBRandom.RandomFloat * MathF.Min(faceGenerationParams1.KeyWeights[keyNo], 1f - faceGenerationParams1.KeyWeights[keyNo]);
          if (generationTypeArray[deformKeyData.GroupId - 1] == MBBodyProperties.GenerationType.FromMother)
          {
            faceGenerationParams3.KeyWeights[keyNo] = faceGenerationParams1.KeyWeights[keyNo];
            faceGenerationParams2.KeyWeights[keyNo] = faceGenerationParams1.KeyWeights[keyNo] + num;
          }
          else if (generationTypeArray[deformKeyData.GroupId - 1] == MBBodyProperties.GenerationType.FromFather)
          {
            faceGenerationParams2.KeyWeights[keyNo] = faceGenerationParams1.KeyWeights[keyNo];
            faceGenerationParams3.KeyWeights[keyNo] = faceGenerationParams1.KeyWeights[keyNo] + num;
          }
          else
          {
            faceGenerationParams3.KeyWeights[keyNo] = faceGenerationParams1.KeyWeights[keyNo] + num;
            faceGenerationParams2.KeyWeights[keyNo] = faceGenerationParams1.KeyWeights[keyNo] - num;
          }
        }
      }
      faceGenerationParams2.CurrentAge = faceGenerationParams1.CurrentAge + (float) MBRandom.RandomInt(18, 25);
      faceGenerationParams2.SetRandomParamsExceptKeys(race, 0, (int) faceGenerationParams2.CurrentAge, out float _);
      faceGenerationParams2.CurrentFaceTattoo = 0;
      faceGenerationParams3.CurrentAge = faceGenerationParams1.CurrentAge + (float) MBRandom.RandomInt(18, 22);
      faceGenerationParams3.SetRandomParamsExceptKeys(race, 1, (int) faceGenerationParams3.CurrentAge, out float _);
      faceGenerationParams3.CurrentFaceTattoo = 0;
      faceGenerationParams3.HeightMultiplier = faceGenerationParams2.HeightMultiplier * MBRandom.RandomFloatRanged(0.7f, 0.9f);
      if (faceGenerationParams3.CurrentHair == 0)
        faceGenerationParams3.CurrentHair = 1;
      float num1 = MBRandom.RandomFloat * MathF.Min(faceGenerationParams1.CurrentSkinColorOffset, 1f - faceGenerationParams1.CurrentSkinColorOffset);
      float num2 = MBRandom.RandomFloat * MathF.Min(faceGenerationParams1.CurrentHairColorOffset, 1f - faceGenerationParams1.CurrentHairColorOffset);
      int num3 = MBRandom.RandomInt(2);
      if (num3 == 1)
      {
        faceGenerationParams2.CurrentSkinColorOffset = faceGenerationParams1.CurrentSkinColorOffset + num1;
        faceGenerationParams3.CurrentSkinColorOffset = faceGenerationParams1.CurrentSkinColorOffset - num1;
      }
      else
      {
        faceGenerationParams2.CurrentSkinColorOffset = faceGenerationParams1.CurrentSkinColorOffset - num1;
        faceGenerationParams3.CurrentSkinColorOffset = faceGenerationParams1.CurrentSkinColorOffset + num1;
      }
      if (num3 == 1)
      {
        faceGenerationParams2.CurrentHairColorOffset = faceGenerationParams1.CurrentHairColorOffset + num2;
        faceGenerationParams3.CurrentHairColorOffset = faceGenerationParams1.CurrentHairColorOffset - num2;
      }
      else
      {
        faceGenerationParams2.CurrentHairColorOffset = faceGenerationParams1.CurrentHairColorOffset - num2;
        faceGenerationParams3.CurrentHairColorOffset = faceGenerationParams1.CurrentHairColorOffset + num2;
      }
      MBBodyProperties.ProduceNumericKeyWithParams(faceGenerationParams3, false, false, ref motherBodyProperties);
      MBBodyProperties.ProduceNumericKeyWithParams(faceGenerationParams2, false, false, ref fatherBodyProperties);
    }

    public static BodyProperties GetBodyPropertiesWithAge(
      ref BodyProperties bodyProperties,
      float age)
    {
      FaceGenerationParams faceGenerationParams = new FaceGenerationParams();
      MBBodyProperties.GetParamsFromKey(ref faceGenerationParams, bodyProperties, false, false);
      faceGenerationParams.CurrentAge = age;
      BodyProperties bodyProperties1 = new BodyProperties();
      MBBodyProperties.ProduceNumericKeyWithParams(faceGenerationParams, false, false, ref bodyProperties1);
      return bodyProperties1;
    }

    public enum GenerationType
    {
      FromMother,
      FromFather,
      Count,
    }
  }
}
