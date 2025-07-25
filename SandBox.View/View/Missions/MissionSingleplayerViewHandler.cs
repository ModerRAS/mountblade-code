// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionSingleplayerViewHandler
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Xml;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.ModuleManager;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionSingleplayerViewHandler : MissionView
  {
    public override void OnMissionScreenInitialize()
    {
      base.OnMissionScreenInitialize();
      if (this.MissionScreen.SceneLayer.Input.IsCategoryRegistered(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory")))
        return;
      this.MissionScreen.SceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
    }

    public override void OnMissionScreenTick(float dt)
    {
      base.OnMissionScreenTick(dt);
      if (this.Mission == null || this.MissionScreen.IsPhotoModeEnabled || this.Mission.MissionEnded)
        return;
      if (this.Input.IsGameKeyPressed(38))
      {
        if (this.Mission.IsInventoryAccessAllowed)
          InventoryManager.OpenScreenAsInventory(new InventoryManager.DoneLogicExtrasDelegate(this.OnInventoryScreenDone));
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText(this.Mission.Mode == MissionMode.Battle || this.Mission.Mode == MissionMode.Duel ? "str_cannot_reach_inventory_during_battle" : "str_cannot_reach_inventory").ToString()));
      }
      else if (this.Input.IsGameKeyPressed(42))
      {
        if (this.Mission.IsQuestScreenAccessAllowed)
          Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<QuestsState>());
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_cannot_open_quests").ToString()));
      }
      else if (!this.Input.IsControlDown() && this.Input.IsGameKeyPressed(43))
      {
        if (this.Mission.IsPartyWindowAccessAllowed)
          PartyScreenManager.OpenScreenAsNormal();
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_cannot_open_party").ToString()));
      }
      else if (this.Input.IsGameKeyPressed(39))
      {
        if (this.Mission.IsEncyclopediaWindowAccessAllowed)
          Campaign.Current.EncyclopediaManager.GoToLink("LastPage", "");
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_cannot_open_encyclopedia").ToString()));
      }
      else if (this.Input.IsGameKeyPressed(40))
      {
        if (this.Mission.IsKingdomWindowAccessAllowed && Hero.MainHero.MapFaction.IsKingdomFaction)
          Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<KingdomState>());
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_cannot_open_kingdom").ToString()));
      }
      else if (this.Input.IsGameKeyPressed(41))
      {
        if (this.Mission.IsClanWindowAccessAllowed)
          Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<ClanState>());
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_cannot_open_clan").ToString()));
      }
      else if (this.Input.IsGameKeyPressed(37))
      {
        if (this.Mission.IsCharacterWindowAccessAllowed)
          Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<CharacterDeveloperState>());
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_cannot_open_character").ToString()));
      }
      else if (this.Input.IsGameKeyPressed(36))
      {
        if (this.Mission.IsBannerWindowAccessAllowed && Campaign.Current.IsBannerEditorEnabled)
          Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<BannerEditorState>());
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_cannot_open_banner").ToString()));
      }
      else
      {
        if ((Campaign.Current == null || Campaign.Current.GameMode != CampaignGameMode.Tutorial) && EditorGame.Current == null || !this.DebugInput.IsHotKeyDown("MissionSingleplayerUiHandlerHotkeyUpdateItems"))
          return;
        MBDebug.ShowWarning("spitems.xml and mpitems.xml will be reloaded!");
        foreach (XmlNode childNode in Game.Current.ObjectManager.LoadXMLFromFileSkipValidation(ModuleHelper.GetModuleFullPath("Native") + "ModuleData/mpitems.xml", ModuleHelper.GetModuleFullPath("Sandbox") + "ModuleData/spitems.xsd").ChildNodes[1].ChildNodes)
        {
          XmlAttributeCollection attributes = childNode.Attributes;
          if (attributes != null)
          {
            ItemObject itemObject = Game.Current.ObjectManager.GetObject<ItemObject>(attributes["id"].InnerText);
            MBObjectManager.Instance.UnregisterObject((MBObjectBase) itemObject);
            itemObject?.Deserialize(Game.Current.ObjectManager, childNode);
          }
        }
        string path = BasePath.Name + "/Modules/SandBoxCore/ModuleData/spitems";
        foreach (FileInfo file in new DirectoryInfo(path).GetFiles("*.xml"))
        {
          foreach (XmlNode childNode in Game.Current.ObjectManager.LoadXMLFromFileSkipValidation(path + "/" + file.Name, ModuleHelper.GetModuleFullPath("Sandbox") + "ModuleData/spitems.xsd").ChildNodes[1].ChildNodes)
          {
            XmlAttributeCollection attributes = childNode.Attributes;
            if (attributes != null)
            {
              ItemObject itemObject = Game.Current.ObjectManager.GetObject<ItemObject>(attributes["id"].InnerText);
              MBObjectManager.Instance.UnregisterObject((MBObjectBase) itemObject);
              itemObject?.Deserialize(Game.Current.ObjectManager, childNode);
            }
          }
        }
      }
    }

    private void OnInventoryScreenDone()
    {
      if (Mission.Current?.Agents == null)
        return;
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        if (agent != null)
        {
          CharacterObject character = (CharacterObject) agent.Character;
          Campaign current = Campaign.Current;
          if (((current != null ? (current.GameMode == CampaignGameMode.Tutorial ? 1 : 0) : 0) != 0 ? (!agent.IsMainAgent ? 0 : (character != null ? 1 : 0)) : (!agent.IsHuman || character == null || !character.IsHero ? 0 : (character.HeroObject?.PartyBelongedTo == MobileParty.MainParty ? 1 : 0))) != 0)
            agent.UpdateSpawnEquipmentAndRefreshVisuals(Mission.Current.DoesMissionRequireCivilianEquipment ? character.FirstCivilianEquipment : character.FirstBattleEquipment);
        }
      }
    }

    [Conditional("DEBUG")]
    private void OnDebugTick()
    {
      if (!this.DebugInput.IsHotKeyDown("MissionSingleplayerUiHandlerHotkeyJoinEnemyTeam"))
        return;
      this.Mission.JoinEnemyTeam();
    }
  }
}
