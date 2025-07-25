// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.SettlementMusiciansCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Objects;
using SandBox.Objects.Usables;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class SettlementMusiciansCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnMissionStartedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionStarted));
    }

    private void OnMissionStarted(IMission mission)
    {
      if (!(mission is Mission mission1) || CampaignMission.Current == null || PlayerEncounter.LocationEncounter == null || PlayerEncounter.LocationEncounter.Settlement == null || CampaignMission.Current.Location == null)
        return;
      IEnumerable<MusicianGroup> allWithType = mission1.MissionObjects.FindAllWithType<MusicianGroup>();
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      foreach (MusicianGroup musicianGroup in allWithType)
        musicianGroup.SetPlayList(this.CreateRandomPlayList(settlement));
    }

    private List<SettlementMusicData> CreateRandomPlayList(Settlement settlement)
    {
      List<string> listOfLocationTags = new List<string>();
      string stringId = CampaignMission.Current.Location.StringId;
      if (stringId == "center")
      {
        listOfLocationTags.Add("lordshall");
        listOfLocationTags.Add("tavern");
      }
      else
        listOfLocationTags.Add(stringId);
      Dictionary<CultureObject, float> source = new Dictionary<CultureObject, float>();
      MBReadOnlyList<CultureObject> objectTypeList = MBObjectManager.Instance.GetObjectTypeList<CultureObject>();
      Town town = settlement.Town;
      double num1;
      if (town == null)
      {
        Village village = settlement.Village;
        num1 = village != null ? (double) village.Bound.Town.Loyalty : 100.0;
      }
      else
        num1 = (double) town.Loyalty;
      float num2 = (float) (num1 * 0.0099999997764825821);
      float num3 = 0.0f;
      foreach (CultureObject cultureObject in (List<CultureObject>) objectTypeList)
      {
        CultureObject c = cultureObject;
        source.Add(c, 0.0f);
        float num4 = Kingdom.All.Sum<Kingdom>((Func<Kingdom, float>) (k => c != k.Culture ? 0.0f : k.TotalStrength));
        if ((double) num4 > (double) num3)
          num3 = num4;
      }
      foreach (Kingdom other in (List<Kingdom>) Kingdom.All)
      {
        float num5 = (Campaign.MapDiagonal - Campaign.Current.Models.MapDistanceModel.GetDistance(other.FactionMidSettlement, settlement.MapFaction.FactionMidSettlement)) / Campaign.MaximumDistanceBetweenTwoSettlements;
        float b = (float) ((double) num5 * (double) num5 * (double) num5 * 2.0 + (settlement.MapFaction.IsAtWarWith((IFaction) other) ? 1.0 : 2.0) * (double) num2);
        source[other.Culture] = MathF.Max(source[other.Culture], b);
      }
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
        source[kingdom.Culture] += (float) ((double) kingdom.TotalStrength / (double) num3 * 0.5);
      foreach (Town allTown in (List<Town>) Town.AllTowns)
      {
        float num6 = (Campaign.MapDiagonal - Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, allTown.Settlement)) / Campaign.MapDiagonal;
        float num7 = num6 * num6 * num6 * (MathF.Min(allTown.Prosperity, 5000f) * 0.0002f);
        source[allTown.Culture] += num7;
      }
      source[settlement.Culture] += 10f;
      source[settlement.MapFaction.Culture] += num2 * 5f;
      List<SettlementMusicData> list = MBObjectManager.Instance.GetObjectTypeList<SettlementMusicData>().Where<SettlementMusicData>((Func<SettlementMusicData, bool>) (x => listOfLocationTags.Contains(x.LocationId))).ToList<SettlementMusicData>();
      KeyValuePair<CultureObject, float> maxWeightedCulture = source.MaxBy<KeyValuePair<CultureObject, float>, float>((Func<KeyValuePair<CultureObject, float>, float>) (x => x.Value));
      float num8 = (float) list.Count<SettlementMusicData>((Func<SettlementMusicData, bool>) (x => x.Culture == maxWeightedCulture.Key)) / maxWeightedCulture.Value;
      List<SettlementMusicData> randomPlayList = new List<SettlementMusicData>();
      foreach (KeyValuePair<CultureObject, float> keyValuePair in source)
      {
        int count = MBRandom.RoundRandomized(num8 * keyValuePair.Value);
        if (count > 0)
          this.PopulatePlayList(randomPlayList, list, keyValuePair.Key, count);
      }
      if (randomPlayList.IsEmpty<SettlementMusicData>())
        randomPlayList = list;
      randomPlayList.Shuffle<SettlementMusicData>();
      return randomPlayList;
    }

    private void PopulatePlayList(
      List<SettlementMusicData> playList,
      List<SettlementMusicData> settlementMusicDatas,
      CultureObject culture,
      int count)
    {
      List<SettlementMusicData> list = settlementMusicDatas.Where<SettlementMusicData>((Func<SettlementMusicData, bool>) (x => x.Culture == culture)).ToList<SettlementMusicData>();
      list.Shuffle<SettlementMusicData>();
      for (int index = 0; index < count && index < list.Count; ++index)
        playList.Add(list[index]);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
