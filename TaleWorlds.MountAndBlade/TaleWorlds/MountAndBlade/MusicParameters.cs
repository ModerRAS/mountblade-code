// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MusicParameters
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections;
using System.Globalization;
using System.IO;
using System.Xml;
using TaleWorlds.Library;
using TaleWorlds.ModuleManager;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MusicParameters
  {
    private static float[] _parameters;
    public const float ZeroIntensity = 0.0f;

    public static int SmallBattleTreshold => (int) MusicParameters._parameters[0];

    public static int MediumBattleTreshold => (int) MusicParameters._parameters[1];

    public static int LargeBattleTreshold => (int) MusicParameters._parameters[2];

    public static float SmallBattleDistanceTreshold => MusicParameters._parameters[3];

    public static float MediumBattleDistanceTreshold => MusicParameters._parameters[4];

    public static float LargeBattleDistanceTreshold => MusicParameters._parameters[5];

    public static float MaxBattleDistanceTreshold => MusicParameters._parameters[6];

    public static float MinIntensity => MusicParameters._parameters[7];

    public static float DefaultStartIntensity => MusicParameters._parameters[8];

    public static float PlayerChargeEffectMultiplierOnIntensity => MusicParameters._parameters[9];

    public static float BattleSizeEffectOnStartIntensity => MusicParameters._parameters[10];

    public static float RandomEffectMultiplierOnStartIntensity => MusicParameters._parameters[11];

    public static float FriendlyTroopDeadEffectOnIntensity => MusicParameters._parameters[12];

    public static float EnemyTroopDeadEffectOnIntensity => MusicParameters._parameters[13];

    public static float PlayerTroopDeadEffectMultiplierOnIntensity
    {
      get => MusicParameters._parameters[14];
    }

    public static float BattleRatioTresholdOnIntensity => MusicParameters._parameters[15];

    public static float BattleTurnsOneSideCooldown => MusicParameters._parameters[16];

    public static float CampaignDarkModeThreshold => MusicParameters._parameters[17];

    public static void LoadFromXml()
    {
      MusicParameters._parameters = new float[18];
      string path = ModuleHelper.GetModuleFullPath("Native") + "ModuleData/music_parameters.xml";
      XmlDocument xmlDocument = new XmlDocument();
      StreamReader streamReader = new StreamReader(path);
      string end = streamReader.ReadToEnd();
      xmlDocument.LoadXml(end);
      streamReader.Close();
      foreach (XmlNode childNode in xmlDocument.ChildNodes)
      {
        if (childNode.NodeType == XmlNodeType.Element && childNode.Name == "music_parameters")
        {
          IEnumerator enumerator = childNode.ChildNodes.GetEnumerator();
          try
          {
            while (enumerator.MoveNext())
            {
              XmlNode current = (XmlNode) enumerator.Current;
              if (current.NodeType == XmlNodeType.Element)
              {
                MusicParameters.MusicParametersEnum index = (MusicParameters.MusicParametersEnum) Enum.Parse(typeof (MusicParameters.MusicParametersEnum), current.Attributes["id"].Value);
                float num = float.Parse(current.Attributes["value"].Value, (IFormatProvider) CultureInfo.InvariantCulture);
                MusicParameters._parameters[(int) index] = num;
              }
            }
            break;
          }
          finally
          {
            if (enumerator is IDisposable disposable)
              disposable.Dispose();
          }
        }
      }
      Debug.Print("MusicParameters have been resetted.", color: Debug.DebugColor.Green, debugFilter: 281474976710656UL);
    }

    private enum MusicParametersEnum
    {
      SmallBattleTreshold,
      MediumBattleTreshold,
      LargeBattleTreshold,
      SmallBattleDistanceTreshold,
      MediumBattleDistanceTreshold,
      LargeBattleDistanceTreshold,
      MaxBattleDistanceTreshold,
      MinIntensity,
      DefaultStartIntensity,
      PlayerChargeEffectMultiplierOnIntensity,
      BattleSizeEffectOnStartIntensity,
      RandomEffectMultiplierOnStartIntensity,
      FriendlyTroopDeadEffectOnIntensity,
      EnemyTroopDeadEffectOnIntensity,
      PlayerTroopDeadEffectMultiplierOnIntensity,
      BattleRatioTresholdOnIntensity,
      BattleTurnsOneSideCooldown,
      CampaignDarkModeThreshold,
      Count,
    }
  }
}
