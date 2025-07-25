// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.CampaignBehaviors.ThirdPhaseCampaignBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.Library;

#nullable disable
namespace StoryMode.GameComponents.CampaignBehaviors
{
  public class ThirdPhaseCampaignBehavior : CampaignBehaviorBase
  {
    private List<Tuple<Kingdom, Kingdom>> _warsToEnforcePeaceNextWeek = new List<Tuple<Kingdom, Kingdom>>();

    public override void RegisterEvents()
    {
      CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
      CampaignEvents.WeeklyTickEvent.AddNonSerializedListener((object) this, new Action(this.WeeklyTick));
      CampaignEvents.CanKingdomBeDiscontinuedEvent.AddNonSerializedListener((object) this, new ReferenceAction<Kingdom, bool>(this.CanKingdomBeDiscontinued));
    }

    private void OnWarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail detail)
    {
      if (!(faction1 is Kingdom kingdom1) || !(faction2 is Kingdom kingdom2) || StoryModeManager.Current.MainStoryLine.ThirdPhase == null)
        return;
      MBReadOnlyList<Kingdom> oppositionKingdoms = StoryModeManager.Current.MainStoryLine.ThirdPhase.OppositionKingdoms;
      MBReadOnlyList<Kingdom> allyKingdoms = StoryModeManager.Current.MainStoryLine.ThirdPhase.AllyKingdoms;
      if ((oppositionKingdoms.IndexOf(kingdom1) < 0 || oppositionKingdoms.IndexOf(kingdom2) < 0) && (allyKingdoms.IndexOf(kingdom1) < 0 || allyKingdoms.IndexOf(kingdom2) < 0))
        return;
      this._warsToEnforcePeaceNextWeek.Add(new Tuple<Kingdom, Kingdom>(kingdom1, kingdom2));
    }

    private void WeeklyTick()
    {
      foreach (Tuple<Kingdom, Kingdom> tuple in new List<Tuple<Kingdom, Kingdom>>((IEnumerable<Tuple<Kingdom, Kingdom>>) this._warsToEnforcePeaceNextWeek))
        MakePeaceAction.Apply((IFaction) tuple.Item1, (IFaction) tuple.Item2);
    }

    private void CanKingdomBeDiscontinued(Kingdom kingdom, ref bool result)
    {
      if (StoryModeManager.Current.MainStoryLine.ThirdPhase == null || !StoryModeManager.Current.MainStoryLine.ThirdPhase.OppositionKingdoms.Contains(kingdom))
        return;
      result = false;
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<Tuple<Kingdom, Kingdom>>>("_warsToEnforcePeaceNextWeek", ref this._warsToEnforcePeaceNextWeek);
    }
  }
}
