// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Extensions.MetaDataExtensions
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Extensions
{
  public static class MetaDataExtensions
  {
    public static string GetUniqueGameId(this MetaData metaData)
    {
      string str;
      return metaData == null || !metaData.TryGetValue("UniqueGameId", out str) ? "" : str;
    }

    public static int GetMainHeroLevel(this MetaData metaData)
    {
      string s;
      return metaData == null || !metaData.TryGetValue("MainHeroLevel", out s) ? 0 : int.Parse(s);
    }

    public static float GetMainPartyFood(this MetaData metaData)
    {
      string s;
      return metaData == null || !metaData.TryGetValue("MainPartyFood", out s) ? 0.0f : float.Parse(s);
    }

    public static int GetMainHeroGold(this MetaData metaData)
    {
      string s;
      return metaData == null || !metaData.TryGetValue("MainHeroGold", out s) ? 0 : int.Parse(s);
    }

    public static float GetClanInfluence(this MetaData metaData)
    {
      string s;
      return metaData == null || !metaData.TryGetValue("ClanInfluence", out s) ? 0.0f : float.Parse(s);
    }

    public static int GetClanFiefs(this MetaData metaData)
    {
      string s;
      return metaData == null || !metaData.TryGetValue("ClanFiefs", out s) ? 0 : int.Parse(s);
    }

    public static int GetMainPartyHealthyMemberCount(this MetaData metaData)
    {
      string s;
      return metaData == null || !metaData.TryGetValue("MainPartyHealthyMemberCount", out s) ? 0 : int.Parse(s);
    }

    public static int GetMainPartyPrisonerMemberCount(this MetaData metaData)
    {
      string s;
      return metaData == null || !metaData.TryGetValue("MainPartyPrisonerMemberCount", out s) ? 0 : int.Parse(s);
    }

    public static int GetMainPartyWoundedMemberCount(this MetaData metaData)
    {
      string s;
      return metaData == null || !metaData.TryGetValue("MainPartyWoundedMemberCount", out s) ? 0 : int.Parse(s);
    }

    public static string GetClanBannerCode(this MetaData metaData)
    {
      string str;
      return metaData == null || !metaData.TryGetValue("ClanBannerCode", out str) ? "" : str;
    }

    public static string GetCharacterName(this MetaData metaData)
    {
      string str;
      return metaData == null || !metaData.TryGetValue("CharacterName", out str) ? "" : str;
    }

    public static string GetCharacterVisualCode(this MetaData metaData)
    {
      string str;
      return metaData == null || !metaData.TryGetValue("MainHeroVisual", out str) ? "" : str;
    }

    public static double GetDayLong(this MetaData metaData)
    {
      string s;
      return metaData == null || !metaData.TryGetValue("DayLong", out s) ? 0.0 : double.Parse(s);
    }

    public static bool GetIronmanMode(this MetaData metaData)
    {
      string s;
      int result;
      return metaData != null && metaData.TryGetValue("IronmanMode", out s) && int.TryParse(s, out result) && result == 1;
    }

    public static int GetPlayerHealthPercentage(this MetaData metaData)
    {
      string s;
      int result;
      return metaData == null || !metaData.TryGetValue("HealthPercentage", out s) || !int.TryParse(s, out result) ? 100 : result;
    }
  }
}
