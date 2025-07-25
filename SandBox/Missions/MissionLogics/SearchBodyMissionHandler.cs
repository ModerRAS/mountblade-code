// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.SearchBodyMissionHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class SearchBodyMissionHandler : MissionLogic
  {
    public override void OnAgentInteraction(Agent userAgent, Agent agent)
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
        return;
      if (Game.Current.GameStateManager.ActiveState is MissionState)
      {
        if (this.Mission.Mode == MissionMode.Conversation || this.Mission.Mode == MissionMode.Battle || !this.IsSearchable(agent))
          return;
        this.AddItemsToPlayer(agent);
      }
      else
        Debug.FailedAssert("Agent interaction must occur in MissionState.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\SearchBodyMissionHandler.cs", nameof (OnAgentInteraction), 26);
    }

    public override bool IsThereAgentAction(Agent userAgent, Agent otherAgent)
    {
      return Mission.Current.Mode != MissionMode.Battle && this.Mission.Mode != MissionMode.Duel && this.Mission.Mode != MissionMode.Conversation && this.IsSearchable(otherAgent);
    }

    private bool IsSearchable(Agent agent)
    {
      return !agent.IsActive() && agent.IsHuman && agent.Character.IsHero;
    }

    private void AddItemsToPlayer(Agent interactedAgent)
    {
      CharacterObject character = (CharacterObject) interactedAgent.Character;
      if (MBRandom.RandomInt(2) == 0)
      {
        character.HeroObject.SpecialItems.Add(MBObjectManager.Instance.GetObject<ItemObject>("leafblade_throwing_knife"));
      }
      else
      {
        character.HeroObject.SpecialItems.Add(MBObjectManager.Instance.GetObject<ItemObject>("falchion_sword_t2"));
        character.HeroObject.SpecialItems.Add(MBObjectManager.Instance.GetObject<ItemObject>("cleaver_sword_t3"));
      }
      foreach (ItemObject specialItem in (List<ItemObject>) character.HeroObject.SpecialItems)
      {
        PartyBase.MainParty.ItemRoster.AddToCounts(specialItem, 1);
        MBTextManager.SetTextVariable("ITEM_NAME", specialItem.Name, false);
        InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_item_taken").ToString()));
      }
      character.HeroObject.SpecialItems.Clear();
    }
  }
}
