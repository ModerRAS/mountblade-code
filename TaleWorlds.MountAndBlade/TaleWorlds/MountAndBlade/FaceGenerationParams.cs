// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FaceGenerationParams
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Runtime.InteropServices;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [EngineStruct("Face_generation_params", false)]
  public struct FaceGenerationParams
  {
    public int Seed;
    public int CurrentBeard;
    public int CurrentHair;
    public int CurrentEyebrow;
    public int CurrentRace;
    public int CurrentGender;
    public int CurrentFaceTexture;
    public int CurrentMouthTexture;
    public int CurrentFaceTattoo;
    public int CurrentVoice;
    public int HairFilter;
    public int BeardFilter;
    public int TattooFilter;
    public int FaceTextureFilter;
    public float TattooZeroProbability;
    [MarshalAs(UnmanagedType.ByValArray, SizeConst = 320)]
    public float[] KeyWeights;
    public float CurrentAge;
    public float CurrentWeight;
    public float CurrentBuild;
    public float CurrentSkinColorOffset;
    public float CurrentHairColorOffset;
    public float CurrentEyeColorOffset;
    public float FaceDirtAmount;
    [CustomEngineStructMemberData("current_face_tattoo_color_offset_1")]
    public float CurrentFaceTattooColorOffset1;
    public float HeightMultiplier;
    public float VoicePitch;
    [MarshalAs(UnmanagedType.U1)]
    public bool IsHairFlipped;
    [MarshalAs(UnmanagedType.U1)]
    public bool UseCache;
    [MarshalAs(UnmanagedType.U1)]
    public bool UseGpuMorph;
    [MarshalAs(UnmanagedType.U1)]
    public bool Padding2;

    public static FaceGenerationParams Create()
    {
      FaceGenerationParams generationParams;
      generationParams.Seed = 0;
      generationParams.CurrentBeard = 0;
      generationParams.CurrentHair = 0;
      generationParams.CurrentEyebrow = 0;
      generationParams.IsHairFlipped = false;
      generationParams.CurrentRace = 0;
      generationParams.CurrentGender = 0;
      generationParams.CurrentFaceTexture = 0;
      generationParams.CurrentMouthTexture = 0;
      generationParams.CurrentFaceTattoo = 0;
      generationParams.CurrentVoice = 0;
      generationParams.HairFilter = 0;
      generationParams.BeardFilter = 0;
      generationParams.TattooFilter = 0;
      generationParams.FaceTextureFilter = 0;
      generationParams.TattooZeroProbability = 0.0f;
      generationParams.KeyWeights = new float[320];
      generationParams.CurrentAge = 0.0f;
      generationParams.CurrentWeight = 0.0f;
      generationParams.CurrentBuild = 0.0f;
      generationParams.CurrentSkinColorOffset = 0.0f;
      generationParams.CurrentHairColorOffset = 0.0f;
      generationParams.CurrentEyeColorOffset = 0.0f;
      generationParams.FaceDirtAmount = 0.0f;
      generationParams.CurrentFaceTattooColorOffset1 = 0.0f;
      generationParams.HeightMultiplier = 0.0f;
      generationParams.VoicePitch = 0.0f;
      generationParams.UseCache = false;
      generationParams.UseGpuMorph = false;
      generationParams.Padding2 = false;
      return generationParams;
    }

    public void SetRaceGenderAndAdjustParams(int race, int gender, int curAge)
    {
      this.CurrentGender = gender;
      this.CurrentRace = race;
      int hairNum = 0;
      int beardNum = 0;
      int faceTextureNum = 0;
      int mouthTextureNum = 0;
      int eyebrowNum = 0;
      int soundNum = 0;
      int faceTattooNum = 0;
      float scale = 0.0f;
      MBBodyProperties.GetParamsMax(race, gender, curAge, ref hairNum, ref beardNum, ref faceTextureNum, ref mouthTextureNum, ref faceTattooNum, ref soundNum, ref eyebrowNum, ref scale);
      this.CurrentHair = MBMath.ClampInt(this.CurrentHair, 0, hairNum - 1);
      this.CurrentBeard = MBMath.ClampInt(this.CurrentBeard, 0, beardNum - 1);
      this.CurrentFaceTexture = MBMath.ClampInt(this.CurrentFaceTexture, 0, faceTextureNum - 1);
      this.CurrentMouthTexture = MBMath.ClampInt(this.CurrentMouthTexture, 0, mouthTextureNum - 1);
      this.CurrentFaceTattoo = MBMath.ClampInt(this.CurrentFaceTattoo, 0, faceTattooNum - 1);
      this.CurrentVoice = MBMath.ClampInt(this.CurrentVoice, 0, soundNum - 1);
      this.VoicePitch = MBMath.ClampFloat(this.VoicePitch, 0.0f, 1f);
      this.CurrentEyebrow = MBMath.ClampInt(this.CurrentEyebrow, 0, eyebrowNum - 1);
    }

    public void SetRandomParamsExceptKeys(int race, int gender, int minAge, out float scale)
    {
      int hairNum = 0;
      int beardNum = 0;
      int faceTextureNum = 0;
      int mouthTextureNum = 0;
      int eyebrowNum = 0;
      int soundNum = 0;
      int faceTattooNum = 0;
      scale = 0.0f;
      MBBodyProperties.GetParamsMax(race, gender, minAge, ref hairNum, ref beardNum, ref faceTextureNum, ref mouthTextureNum, ref faceTattooNum, ref soundNum, ref eyebrowNum, ref scale);
      this.CurrentHair = MBRandom.RandomInt(hairNum);
      this.CurrentBeard = MBRandom.RandomInt(beardNum);
      this.CurrentFaceTexture = MBRandom.RandomInt(faceTextureNum);
      this.CurrentMouthTexture = MBRandom.RandomInt(mouthTextureNum);
      this.CurrentFaceTattoo = MBRandom.RandomInt(faceTattooNum);
      this.CurrentVoice = MBRandom.RandomInt(soundNum);
      this.VoicePitch = MBRandom.RandomFloat;
      this.CurrentEyebrow = MBRandom.RandomInt(eyebrowNum);
      this.CurrentSkinColorOffset = MBRandom.RandomFloat;
      this.CurrentHairColorOffset = MBRandom.RandomFloat;
      this.CurrentEyeColorOffset = MBRandom.RandomFloat;
      this.CurrentFaceTattooColorOffset1 = MBRandom.RandomFloat;
      this.HeightMultiplier = MBRandom.RandomFloat;
    }
  }
}
