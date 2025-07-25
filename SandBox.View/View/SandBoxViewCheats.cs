// Decompiled with JetBrains decompiler
// Type: SandBox.View.SandBoxViewCheats
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.View.Map;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View
{
  public static class SandBoxViewCheats
  {
    [CommandLineFunctionality.CommandLineArgumentFunction("illumination", "global")]
    private static string TryGlobalIllumination(List<string> values)
    {
      string str = "";
      foreach (Settlement objectType in (List<Settlement>) MBObjectManager.Instance.GetObjectTypeList<Settlement>())
      {
        if (objectType.Culture != null && objectType.MapFaction != null)
        {
          str = str + objectType.Position2D.x.ToString() + "," + objectType.Position2D.y.ToString() + ",";
          str += (string) (object) objectType.MapFaction.Color;
          str += "-";
        }
      }
      MapScreen topScreen = ScreenManager.TopScreen as MapScreen;
      MBMapScene.GetGlobalIlluminationOfString((Scene) typeof (MapScreen).GetField("_mapScene", BindingFlags.Instance | BindingFlags.NonPublic).GetValue((object) topScreen), str);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("remove_all_circle_notifications", "campaign")]
    public static string ClearAllCircleNotifications(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      MapScreen.Instance.MapNotificationView.ResetNotifications();
      return "Cleared";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_custom_maximum_map_height", "campaign")]
    private static string SetCustomMaximumHeight(List<string> strings)
    {
      string str = string.Format("Format is \"campaign.set_custom_maximum_map_height [MaxHeight]\".\n If the given number is below the current base maximum: {0}, it won't be used.", (object) Campaign.MapMaximumHeight);
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return str;
      int result;
      if (CampaignCheats.CheckParameters(strings, 1) && int.TryParse(strings[0], out result))
      {
        System.Type type = typeof (MapCameraView);
        PropertyInfo property = type.GetProperty("Instance", BindingFlags.Static | BindingFlags.NonPublic);
        MapCameraView mapCameraView = (MapCameraView) property.GetValue((object) null);
        type.GetField("_customMaximumCameraHeight", BindingFlags.Instance | BindingFlags.NonPublic).SetValue((object) mapCameraView, (object) (float) result);
        property.SetValue((object) null, (object) mapCameraView);
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("focus_tournament", "campaign")]
    public static string FocusTournament(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.focus_tournament\".";
      Settlement first = Settlement.FindFirst((Func<Settlement, bool>) (x => x.IsTown && Campaign.Current.TournamentManager.GetTournamentGame(x.Town) != null));
      if (first == null)
        return "There isn't any tournament right now.";
      ((MapCameraView) typeof (MapCameraView).GetProperty("Instance", BindingFlags.Static | BindingFlags.NonPublic).GetValue((object) null)).SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
      first.Party.SetAsCameraFollowParty();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("focus_hostile_army", "campaign")]
    public static string FocusHostileArmy(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.focus_hostile_army\".";
      Army army = (Army) null;
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (kingdom != Clan.PlayerClan.MapFaction && !kingdom.Armies.IsEmpty<Army>() && kingdom.IsAtWarWith(Clan.PlayerClan.MapFaction))
          army = kingdom.Armies.GetRandomElement<Army>();
        if (army != null)
          break;
      }
      if (army == null)
        return "There isn't any hostile army right now.";
      ((MapCameraView) typeof (MapCameraView).GetProperty("Instance", BindingFlags.Static | BindingFlags.NonPublic).GetValue((object) null)).SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
      army.LeaderParty.Party.SetAsCameraFollowParty();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("focus_mobile_party", "campaign")]
    public static string FocusMobileParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.focus_mobile_party [PartyName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str1;
      string str2 = CampaignCheats.ConcatenateString(strings);
      foreach (MobileParty mobileParty in (List<MobileParty>) MobileParty.All)
      {
        if (string.Equals(str2.Replace(" ", ""), mobileParty.Name.ToString().Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          ((MapCameraView) typeof (MapCameraView).GetProperty("Instance", BindingFlags.Static | BindingFlags.NonPublic).GetValue((object) null)).SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
          mobileParty.Party.SetAsCameraFollowParty();
          return "Success";
        }
      }
      return "Party is not found: " + str2 + "\n" + str1;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("focus_hero", "campaign")]
    public static string FocusHero(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.focus_hero [HeroName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      string heroName = CampaignCheats.ConcatenateString(strings);
      Hero hero = CampaignCheats.GetHero(heroName);
      if (hero == null)
        return "Hero is not found: " + heroName + "\n" + str;
      MapCameraView mapCameraView = (MapCameraView) typeof (MapCameraView).GetProperty("Instance", BindingFlags.Static | BindingFlags.NonPublic).GetValue((object) null);
      if (hero.CurrentSettlement != null)
      {
        mapCameraView.SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
        hero.CurrentSettlement.Party.SetAsCameraFollowParty();
        return "Success";
      }
      if (hero.PartyBelongedTo != null)
      {
        mapCameraView.SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
        hero.PartyBelongedTo.Party.SetAsCameraFollowParty();
        return "Success";
      }
      if (hero.PartyBelongedToAsPrisoner == null)
        return "Party is not found: " + heroName + "\n" + str;
      mapCameraView.SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
      hero.PartyBelongedToAsPrisoner.SetAsCameraFollowParty();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("focus_infested_hideout", "campaign")]
    public static string FocusInfestedHideout(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.focus_infested_hideout [Optional: Number of troops]\".";
      if (CampaignCheats.CheckHelp(strings))
        return str;
      MBList<Settlement> mbList1 = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (t => t.IsHideout && t.Parties.Count > 0)).ToMBList<Settlement>();
      if (mbList1.IsEmpty<Settlement>())
        return "All hideouts are empty!";
      Settlement randomElement;
      if (strings.Count > 0)
      {
        int troopCount = -1;
        int.TryParse(strings[0], out troopCount);
        if (troopCount == -1)
          return "Incorrect input.\n" + str;
        MBList<Settlement> mbList2 = mbList1.Where<Settlement>((Func<Settlement, bool>) (t => t.Parties.Sum<MobileParty>((Func<MobileParty, int>) (p => p.MemberRoster.TotalManCount)) >= troopCount)).ToMBList<Settlement>();
        if (mbList2.IsEmpty<Settlement>())
          return "Can't find suitable hideout.";
        randomElement = mbList2.GetRandomElement<Settlement>();
      }
      else
        randomElement = mbList1.GetRandomElement<Settlement>();
      if (randomElement == null)
        return "Unable to find such a hideout.";
      ((MapCameraView) typeof (MapCameraView).GetProperty("Instance", BindingFlags.Static | BindingFlags.NonPublic).GetValue((object) null)).SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
      randomElement.Party.SetAsCameraFollowParty();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("focus_issue", "campaign")]
    public static string FocusIssues(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.focus_issue [IssueName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str1;
      MapCameraView mapCameraView = (MapCameraView) typeof (MapCameraView).GetProperty("Instance", BindingFlags.Static | BindingFlags.NonPublic).GetValue((object) null);
      string str2 = CampaignCheats.ConcatenateString(strings);
      IssueBase issueBase = (IssueBase) null;
      foreach (KeyValuePair<Hero, IssueBase> issue in Campaign.Current.IssueManager.Issues)
      {
        issue.Value.Title.ToString();
        if (issue.Value.Title.ToString().ToLower().Replace(" ", "").Contains(str2.ToLower().Replace(" ", "")))
        {
          if (issue.Value.IssueSettlement != null)
          {
            issueBase = issue.Value;
            mapCameraView.SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
            issue.Value.IssueSettlement.Party.SetAsCameraFollowParty();
          }
          else if (issue.Value.IssueOwner.PartyBelongedTo != null)
          {
            issueBase = issue.Value;
            mapCameraView.SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
            issue.Value.IssueOwner.PartyBelongedTo?.Party.SetAsCameraFollowParty();
          }
          else if (issue.Value.IssueOwner.CurrentSettlement != null)
          {
            issueBase = issue.Value;
            mapCameraView.SetCameraMode(MapCameraView.CameraFollowMode.FollowParty);
            issue.Value.IssueOwner.CurrentSettlement.Party.SetAsCameraFollowParty();
          }
          if (issueBase != null)
            return "Found issue: " + issueBase.Title.ToString() + ". Issue Owner: " + issueBase.IssueOwner.Name.ToString();
        }
      }
      return "Issue Not Found.\n" + str1;
    }
  }
}
