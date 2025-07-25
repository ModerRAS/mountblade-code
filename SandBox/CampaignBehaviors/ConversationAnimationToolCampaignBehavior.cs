// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.ConversationAnimationToolCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Engine;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class ConversationAnimationToolCampaignBehavior : CampaignBehaviorBase
  {
    private static bool _isToolEnabled = false;
    private static int _characterType = -1;
    private static int _characterState = -1;
    private static int _characterGender = -1;
    private static int _characterAge = -1;
    private static int _characterWoundedState = -1;
    private static int _equipmentType = -1;
    private static int _relationType = -1;
    private static int _personaType = -1;

    public override void RegisterEvents()
    {
      CampaignEvents.TickEvent.AddNonSerializedListener((object) this, new Action<float>(this.Tick));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void Tick(float dt)
    {
      if (!ConversationAnimationToolCampaignBehavior._isToolEnabled)
        return;
      ConversationAnimationToolCampaignBehavior.StartImGUIWindow("Conversation Animation Test Tool");
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Character Type:", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("0 for noble, 1 for notable, 2 for companion, 3 for troop", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUIIntegerField("Enter character type: ", ref ConversationAnimationToolCampaignBehavior._characterType, false, false);
      ConversationAnimationToolCampaignBehavior.Separator();
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Character State:", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("0 for active, 1 for prisoner", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUIIntegerField("Enter character state: ", ref ConversationAnimationToolCampaignBehavior._characterState, false, false);
      ConversationAnimationToolCampaignBehavior.Separator();
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Character Gender:", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("0 for male, 1 for female", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUIIntegerField("Enter character gender: ", ref ConversationAnimationToolCampaignBehavior._characterGender, false, false);
      ConversationAnimationToolCampaignBehavior.Separator();
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Character Age:", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Enter a custom age or leave -1 for not changing the age value", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUIIntegerField("Enter character age: ", ref ConversationAnimationToolCampaignBehavior._characterAge, false, false);
      ConversationAnimationToolCampaignBehavior.Separator();
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Character Wounded State:", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Change to 1 to change character state to wounded", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUIIntegerField("Enter character wounded state: ", ref ConversationAnimationToolCampaignBehavior._characterWoundedState, false, false);
      ConversationAnimationToolCampaignBehavior.Separator();
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Character Equipment Type:", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Change to 1 to change to equipment to civilian, default equipment is battle", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUIIntegerField("Enter equipment type: ", ref ConversationAnimationToolCampaignBehavior._equipmentType, false, false);
      ConversationAnimationToolCampaignBehavior.Separator();
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Character Relation With Main Hero:", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Leave -1 for no change, 0 for enemy, 1 for neutral, 2 for friend", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUIIntegerField("Enter relation type: ", ref ConversationAnimationToolCampaignBehavior._relationType, false, false);
      ConversationAnimationToolCampaignBehavior.Separator();
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Character Persona Type:", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUITextArea("Leave -1 for no change, 0 for curt, 1 for earnest, 2 for ironic, 3 for softspoken", false, false);
      ConversationAnimationToolCampaignBehavior.ImGUIIntegerField("Enter persona type: ", ref ConversationAnimationToolCampaignBehavior._personaType, false, false);
      ConversationAnimationToolCampaignBehavior.Separator();
      if (ConversationAnimationToolCampaignBehavior.ImGUIButton(" Start Conversation ", true))
        ConversationAnimationToolCampaignBehavior.StartConversation();
      ConversationAnimationToolCampaignBehavior.EndImGUIWindow();
    }

    public static void CloseConversationAnimationTool()
    {
      ConversationAnimationToolCampaignBehavior._isToolEnabled = false;
      ConversationAnimationToolCampaignBehavior._characterType = -1;
      ConversationAnimationToolCampaignBehavior._characterState = -1;
      ConversationAnimationToolCampaignBehavior._characterGender = -1;
      ConversationAnimationToolCampaignBehavior._characterAge = -1;
      ConversationAnimationToolCampaignBehavior._characterWoundedState = -1;
      ConversationAnimationToolCampaignBehavior._equipmentType = -1;
      ConversationAnimationToolCampaignBehavior._relationType = -1;
      ConversationAnimationToolCampaignBehavior._personaType = -1;
    }

    private static void StartConversation()
    {
      bool flag1 = true;
      bool flag2 = true;
      Occupation neededOccupation = Occupation.NotAssigned;
      switch (ConversationAnimationToolCampaignBehavior._characterType)
      {
        case 0:
          neededOccupation = Occupation.Lord;
          break;
        case 1:
          neededOccupation = Occupation.Merchant;
          break;
        case 2:
          neededOccupation = Occupation.Wanderer;
          break;
        case 3:
          neededOccupation = Occupation.Soldier;
          flag2 = false;
          break;
        default:
          flag1 = false;
          break;
      }
      if (!flag1)
        return;
      bool flag3 = false;
      bool flag4 = false;
      switch (ConversationAnimationToolCampaignBehavior._characterState)
      {
        case 0:
          flag3 = true;
          break;
        case 1:
          flag4 = true;
          break;
        default:
          flag1 = false;
          break;
      }
      if (!flag1)
        return;
      bool isFemale = false;
      switch (ConversationAnimationToolCampaignBehavior._characterGender)
      {
        case 0:
          isFemale = false;
          break;
        case 1:
          isFemale = true;
          break;
        default:
          flag1 = false;
          break;
      }
      if (!flag1)
        return;
      bool flag5 = false;
      if (ConversationAnimationToolCampaignBehavior._characterAge == -1)
        flag5 = false;
      else if (ConversationAnimationToolCampaignBehavior._characterAge > 0 && ConversationAnimationToolCampaignBehavior._characterAge <= 128)
        flag5 = true;
      else
        flag1 = false;
      if (!flag1)
        return;
      bool flag6 = ConversationAnimationToolCampaignBehavior._characterWoundedState == 1;
      bool flag7 = ConversationAnimationToolCampaignBehavior._equipmentType == 1;
      if (ConversationAnimationToolCampaignBehavior._relationType != 0 && ConversationAnimationToolCampaignBehavior._relationType != 1 && ConversationAnimationToolCampaignBehavior._relationType != 2)
        return;
      CharacterObject character = (CharacterObject) null;
      if (flag2)
      {
        Hero prisonerCharacter = (Hero) null;
        foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
        {
          if (allAliveHero != Hero.MainHero && allAliveHero.Occupation == neededOccupation && allAliveHero.IsFemale == isFemale && (allAliveHero.PartyBelongedTo == null || allAliveHero.PartyBelongedTo.MapEvent == null))
          {
            prisonerCharacter = allAliveHero;
            break;
          }
        }
        if (prisonerCharacter == null)
          prisonerCharacter = HeroCreator.CreateHeroAtOccupation(neededOccupation);
        if (flag5)
          prisonerCharacter.SetBirthDay(HeroHelper.GetRandomBirthDayForAge((float) ConversationAnimationToolCampaignBehavior._characterAge));
        if (flag4)
          TakePrisonerAction.Apply(PartyBase.MainParty, prisonerCharacter);
        if (flag6)
          prisonerCharacter.MakeWounded();
        if (flag3)
          prisonerCharacter.ChangeState(Hero.CharacterStates.Active);
        prisonerCharacter.UpdatePlayerGender(isFemale);
        character = prisonerCharacter.CharacterObject;
      }
      else
      {
        foreach (CharacterObject characterObject in (List<CharacterObject>) CharacterObject.All)
        {
          if (characterObject.Occupation == neededOccupation && characterObject.IsFemale == isFemale)
          {
            character = characterObject;
            break;
          }
        }
        if (character == null)
          character = Campaign.Current.ObjectManager.GetObject<CultureObject>("empire").BasicTroop;
      }
      if (character == null)
        return;
      if (character.IsHero && ConversationAnimationToolCampaignBehavior._relationType != -1)
      {
        Hero heroObject = character.HeroObject;
        float relationWithPlayer = heroObject.GetRelationWithPlayer();
        float relation = 0.0f;
        if (ConversationAnimationToolCampaignBehavior._relationType == 0 && !heroObject.IsEnemy(Hero.MainHero))
          relation = (float) (-(double) relationWithPlayer - 15.0);
        else if (ConversationAnimationToolCampaignBehavior._relationType == 1 && !heroObject.IsNeutral(Hero.MainHero))
          relation = -relationWithPlayer;
        else if (ConversationAnimationToolCampaignBehavior._relationType == 2 && !heroObject.IsFriend(Hero.MainHero))
          relation = (float) (-(double) relationWithPlayer + 15.0);
        ChangeRelationAction.ApplyPlayerRelation(heroObject, (int) relation);
      }
      CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter), new ConversationCharacterData(character, isCivilianEquipmentRequiredForLeader: flag7, isCivilianEquipmentRequiredForBodyGuardCharacters: flag7));
      ConversationAnimationToolCampaignBehavior.CloseConversationAnimationTool();
    }

    private static void StartImGUIWindow(string str)
    {
      Imgui.BeginMainThreadScope();
      Imgui.Begin(str);
    }

    private static void ImGUITextArea(string text, bool separatorNeeded, bool onSameLine)
    {
      Imgui.Text(text);
      ConversationAnimationToolCampaignBehavior.ImGUISeparatorSameLineHandler(separatorNeeded, onSameLine);
    }

    private static bool ImGUIButton(string buttonText, bool smallButton)
    {
      return smallButton ? Imgui.SmallButton(buttonText) : Imgui.Button(buttonText);
    }

    private static void ImGUIIntegerField(
      string fieldText,
      ref int value,
      bool separatorNeeded,
      bool onSameLine)
    {
      Imgui.InputInt(fieldText, ref value);
      ConversationAnimationToolCampaignBehavior.ImGUISeparatorSameLineHandler(separatorNeeded, onSameLine);
    }

    private static void ImGUICheckBox(
      string text,
      ref bool is_checked,
      bool separatorNeeded,
      bool onSameLine)
    {
      Imgui.Checkbox(text, ref is_checked);
      ConversationAnimationToolCampaignBehavior.ImGUISeparatorSameLineHandler(separatorNeeded, onSameLine);
    }

    private static void ImGUISeparatorSameLineHandler(bool separatorNeeded, bool onSameLine)
    {
      if (separatorNeeded)
        ConversationAnimationToolCampaignBehavior.Separator();
      if (!onSameLine)
        return;
      ConversationAnimationToolCampaignBehavior.OnSameLine();
    }

    private static void OnSameLine() => Imgui.SameLine();

    private static void Separator() => Imgui.Separator();

    private static void EndImGUIWindow()
    {
      Imgui.End();
      Imgui.EndMainThreadScope();
    }
  }
}
