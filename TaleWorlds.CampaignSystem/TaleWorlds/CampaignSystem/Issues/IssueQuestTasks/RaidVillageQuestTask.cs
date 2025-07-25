// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.IssueQuestTasks.RaidVillageQuestTask
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Issues.IssueQuestTasks
{
  public class RaidVillageQuestTask : QuestTaskBase
  {
    [SaveableField(50)]
    private readonly Village _targetVillage;

    public RaidVillageQuestTask(
      Village village,
      Action onSucceededAction,
      Action onFailedAction,
      Action onCanceledAction,
      DialogFlow dialogFlow = null)
      : base(dialogFlow, onSucceededAction, onFailedAction, onCanceledAction)
    {
      this._targetVillage = village;
    }

    public void OnVillageLooted(Village village)
    {
      if (this._targetVillage != village)
        return;
      this.Finish(this._targetVillage.Owner.MapEvent.AttackerSide.LeaderParty == MobileParty.MainParty.Party ? QuestTaskBase.FinishStates.Success : QuestTaskBase.FinishStates.Fail);
    }

    public void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification)
    {
      if (FactionManager.IsAtWarAgainstFaction((IFaction) newKingdom, this._targetVillage.Settlement.MapFaction))
        return;
      this.Finish(QuestTaskBase.FinishStates.Cancel);
    }

    public override void SetReferences()
    {
      CampaignEvents.VillageLooted.AddNonSerializedListener((object) this, new Action<Village>(this.OnVillageLooted));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
    }
  }
}
