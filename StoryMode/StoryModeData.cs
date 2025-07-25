// Decompiled with JetBrains decompiler
// Type: StoryMode.StoryModeData
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Library;

#nullable disable
namespace StoryMode
{
  public static class StoryModeData
  {
    private static Kingdom _northernEmpireKingdom;
    private static Kingdom _westernEmpireKingdom;
    private static Kingdom _southernEmpireKingdom;
    private static Kingdom _sturgiaKingdom;
    private static Kingdom _aseraiKingdom;
    private static Kingdom _vlandiaKingdom;
    private static Kingdom _battaniaKingdom;
    private static Kingdom _khuzaitKingdom;

    public static void OnGameEnd()
    {
      StoryModeData._northernEmpireKingdom = (Kingdom) null;
      StoryModeData._westernEmpireKingdom = (Kingdom) null;
      StoryModeData._southernEmpireKingdom = (Kingdom) null;
      StoryModeData._sturgiaKingdom = (Kingdom) null;
      StoryModeData._aseraiKingdom = (Kingdom) null;
      StoryModeData._vlandiaKingdom = (Kingdom) null;
      StoryModeData._battaniaKingdom = (Kingdom) null;
      StoryModeData._khuzaitKingdom = (Kingdom) null;
    }

    public static bool IsKingdomImperial(Kingdom kingdomToCheck)
    {
      return kingdomToCheck != null && kingdomToCheck.Culture == StoryModeData.ImperialCulture;
    }

    public static CultureObject ImperialCulture => StoryModeData.NorthernEmpireKingdom.Culture;

    public static Kingdom NorthernEmpireKingdom
    {
      get
      {
        if (StoryModeData._northernEmpireKingdom != null)
          return StoryModeData._northernEmpireKingdom;
        foreach (Kingdom northernEmpireKingdom in (List<Kingdom>) Kingdom.All)
        {
          if (northernEmpireKingdom.StringId == "empire")
          {
            StoryModeData._northernEmpireKingdom = northernEmpireKingdom;
            return northernEmpireKingdom;
          }
        }
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\StoryModeData.cs", nameof (NorthernEmpireKingdom), 49);
        return (Kingdom) null;
      }
    }

    public static Kingdom WesternEmpireKingdom
    {
      get
      {
        if (StoryModeData._westernEmpireKingdom != null)
          return StoryModeData._westernEmpireKingdom;
        foreach (Kingdom westernEmpireKingdom in (List<Kingdom>) Kingdom.All)
        {
          if (westernEmpireKingdom.StringId == "empire_w")
          {
            StoryModeData._westernEmpireKingdom = westernEmpireKingdom;
            return westernEmpireKingdom;
          }
        }
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\StoryModeData.cs", nameof (WesternEmpireKingdom), 74);
        return (Kingdom) null;
      }
    }

    public static Kingdom SouthernEmpireKingdom
    {
      get
      {
        if (StoryModeData._southernEmpireKingdom != null)
          return StoryModeData._southernEmpireKingdom;
        foreach (Kingdom southernEmpireKingdom in (List<Kingdom>) Kingdom.All)
        {
          if (southernEmpireKingdom.StringId == "empire_s")
          {
            StoryModeData._southernEmpireKingdom = southernEmpireKingdom;
            return southernEmpireKingdom;
          }
        }
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\StoryModeData.cs", nameof (SouthernEmpireKingdom), 99);
        return (Kingdom) null;
      }
    }

    public static Kingdom SturgiaKingdom
    {
      get
      {
        if (StoryModeData._sturgiaKingdom != null)
          return StoryModeData._sturgiaKingdom;
        foreach (Kingdom sturgiaKingdom in (List<Kingdom>) Kingdom.All)
        {
          if (sturgiaKingdom.StringId == "sturgia")
          {
            StoryModeData._sturgiaKingdom = sturgiaKingdom;
            return sturgiaKingdom;
          }
        }
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\StoryModeData.cs", nameof (SturgiaKingdom), 124);
        return (Kingdom) null;
      }
    }

    public static Kingdom AseraiKingdom
    {
      get
      {
        if (StoryModeData._aseraiKingdom != null)
          return StoryModeData._aseraiKingdom;
        foreach (Kingdom aseraiKingdom in (List<Kingdom>) Kingdom.All)
        {
          if (aseraiKingdom.StringId == "aserai")
          {
            StoryModeData._aseraiKingdom = aseraiKingdom;
            return aseraiKingdom;
          }
        }
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\StoryModeData.cs", nameof (AseraiKingdom), 149);
        return (Kingdom) null;
      }
    }

    public static Kingdom VlandiaKingdom
    {
      get
      {
        if (StoryModeData._vlandiaKingdom != null)
          return StoryModeData._vlandiaKingdom;
        foreach (Kingdom vlandiaKingdom in (List<Kingdom>) Kingdom.All)
        {
          if (vlandiaKingdom.StringId == "vlandia")
          {
            StoryModeData._vlandiaKingdom = vlandiaKingdom;
            return vlandiaKingdom;
          }
        }
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\StoryModeData.cs", nameof (VlandiaKingdom), 175);
        return (Kingdom) null;
      }
    }

    public static Kingdom BattaniaKingdom
    {
      get
      {
        if (StoryModeData._battaniaKingdom != null)
          return StoryModeData._battaniaKingdom;
        foreach (Kingdom battaniaKingdom in (List<Kingdom>) Kingdom.All)
        {
          if (battaniaKingdom.StringId == "battania")
          {
            StoryModeData._battaniaKingdom = battaniaKingdom;
            return battaniaKingdom;
          }
        }
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\StoryModeData.cs", nameof (BattaniaKingdom), 202);
        return (Kingdom) null;
      }
    }

    public static Kingdom KhuzaitKingdom
    {
      get
      {
        if (StoryModeData._khuzaitKingdom != null)
          return StoryModeData._khuzaitKingdom;
        foreach (Kingdom khuzaitKingdom in (List<Kingdom>) Kingdom.All)
        {
          if (khuzaitKingdom.StringId == "khuzait")
          {
            StoryModeData._khuzaitKingdom = khuzaitKingdom;
            return khuzaitKingdom;
          }
        }
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\StoryModeData.cs", nameof (KhuzaitKingdom), 228);
        return (Kingdom) null;
      }
    }
  }
}
