// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.RetrainOutlawPartyMembersBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class RetrainOutlawPartyMembersBehavior : 
    CampaignBehaviorBase,
    IRetrainOutlawPartyMembersCampaignBehavior,
    ICampaignBehavior
  {
    private Dictionary<CharacterObject, int> _retrainTable = new Dictionary<CharacterObject, int>();

    private int GetRetrainedNumberInternal(CharacterObject character)
    {
      int num;
      return !this._retrainTable.TryGetValue(character, out num) ? 0 : num;
    }

    private int SetRetrainedNumberInternal(CharacterObject character, int numberRetrained)
    {
      return this._retrainTable[character] = numberRetrained;
    }

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
    }

    private void DailyTick()
    {
      if ((double) MBRandom.RandomFloat <= 0.5)
        return;
      int num = MBRandom.RandomInt(MobileParty.MainParty.MemberRoster.Count);
      bool flag = false;
      for (int index1 = 0; index1 < MobileParty.MainParty.MemberRoster.Count && !flag; ++index1)
      {
        int index2 = (index1 + num) % MobileParty.MainParty.MemberRoster.Count;
        CharacterObject characterAtIndex = MobileParty.MainParty.MemberRoster.GetCharacterAtIndex(index2);
        if (characterAtIndex.Occupation == Occupation.Bandit)
        {
          int elementNumber = MobileParty.MainParty.MemberRoster.GetElementNumber(index2);
          int retrainedNumberInternal = this.GetRetrainedNumberInternal(characterAtIndex);
          if (retrainedNumberInternal < elementNumber && !flag)
          {
            int numberRetrained = retrainedNumberInternal + 1;
            this.SetRetrainedNumberInternal(characterAtIndex, numberRetrained);
          }
          else if (retrainedNumberInternal > elementNumber)
            this.SetRetrainedNumberInternal(characterAtIndex, elementNumber);
        }
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<CharacterObject, int>>("_retrainTable", ref this._retrainTable);
    }

    public int GetRetrainedNumber(CharacterObject character)
    {
      return character.Occupation == Occupation.Bandit ? MathF.Min(this.GetRetrainedNumberInternal(character), MobileParty.MainParty.MemberRoster.GetTroopCount(character)) : 0;
    }

    public void SetRetrainedNumber(CharacterObject character, int number)
    {
      this.SetRetrainedNumberInternal(character, number);
    }
  }
}
