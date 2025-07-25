﻿// Decompiled with JetBrains decompiler
// Type: StoryMode.CharacterCreationContent.StoryModeCharacterCreationContent
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using Helpers;
using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace StoryMode.CharacterCreationContent
{
  public class StoryModeCharacterCreationContent : CharacterCreationContentBase
  {
    protected StoryModeCharacterCreationContent.OccupationTypes _familyOccupationType;
    protected TextObject _educationIntroductoryText = new TextObject("{=!}{EDUCATION_INTRO}");
    protected TextObject _youthIntroductoryText = new TextObject("{=!}{YOUTH_INTRO}");

    public override TextObject ReviewPageDescription
    {
      get
      {
        return new TextObject("{=wbhKgpmr}You prepare to set off with your brother on a mission of vengeance and rescue. Here is your character. Continue if you are ready, or go back to make changes.");
      }
    }

    public override IEnumerable<Type> CharacterCreationStages
    {
      get
      {
        yield return typeof (CharacterCreationCultureStage);
        yield return typeof (CharacterCreationFaceGeneratorStage);
        yield return typeof (CharacterCreationGenericStage);
        yield return typeof (CharacterCreationReviewStage);
        yield return typeof (CharacterCreationOptionsStage);
      }
    }

    protected override void OnCultureSelected()
    {
      this.SelectedTitleType = 1;
      this.SelectedParentType = 0;
      TextObject clanNameforPlayer = FactionHelper.GenerateClanNameforPlayer();
      Clan.PlayerClan.ChangeClanName(clanNameforPlayer, clanNameforPlayer);
    }

    public override int GetSelectedParentType() => this.SelectedParentType;

    public override void OnCharacterCreationFinalized()
    {
    }

    protected override void OnInitialized(CharacterCreation characterCreation)
    {
      this.AddParentsMenu(characterCreation);
      this.AddChildhoodMenu(characterCreation);
      this.AddEducationMenu(characterCreation);
      this.AddYouthMenu(characterCreation);
      this.AddAdulthoodMenu(characterCreation);
      this.AddEscapeMenu(characterCreation);
    }

    protected override void OnApplyCulture()
    {
      StoryModeHeroes.LittleBrother.Culture = this.GetSelectedCulture();
      StoryModeHeroes.LittleSister.Culture = this.GetSelectedCulture();
    }

    protected void AddParentsMenu(CharacterCreation characterCreation)
    {
      CharacterCreationMenu menu = new CharacterCreationMenu(new TextObject("{=b4lDDcli}Family"), new TextObject("{=XgFU1pCx}You were born into a family of..."), new CharacterCreationOnInit(this.ParentsOnInit));
      CharacterCreationCategory creationCategory1 = menu.AddMenuCategory(new CharacterCreationOnCondition(this.EmpireParentsOnCondition));
      MBList<SkillObject> effectedSkills1 = new MBList<SkillObject>();
      effectedSkills1.Add(DefaultSkills.Riding);
      effectedSkills1.Add(DefaultSkills.Polearm);
      creationCategory1.AddCategoryOption(new TextObject("{=InN5ZZt3}A landlord's retainers"), effectedSkills1, DefaultCharacterAttributes.Vigor, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.EmpireLandlordsRetainerOnConsequence), new CharacterCreationApplyFinalEffects(this.EmpireLandlordsRetainerOnApply), new TextObject("{=ivKl4mV2}Your father was a trusted lieutenant of the local landowning aristocrat. He rode with the lord's cavalry, fighting as an armored lancer."));
      MBList<SkillObject> effectedSkills2 = new MBList<SkillObject>();
      effectedSkills2.Add(DefaultSkills.Trade);
      effectedSkills2.Add(DefaultSkills.Charm);
      creationCategory1.AddCategoryOption(new TextObject("{=651FhzdR}Urban merchants"), effectedSkills2, DefaultCharacterAttributes.Social, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.EmpireMerchantOnConsequence), new CharacterCreationApplyFinalEffects(this.EmpireMerchantOnApply), new TextObject("{=FQntPChs}Your family were merchants in one of the main cities of the Empire. They sometimes organized caravans to nearby towns, and discussed issues in the town council."));
      MBList<SkillObject> effectedSkills3 = new MBList<SkillObject>();
      effectedSkills3.Add(DefaultSkills.Athletics);
      effectedSkills3.Add(DefaultSkills.Polearm);
      creationCategory1.AddCategoryOption(new TextObject("{=sb4gg8Ak}Freeholders"), effectedSkills3, DefaultCharacterAttributes.Endurance, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.EmpireFreeholderOnConsequence), new CharacterCreationApplyFinalEffects(this.EmpireFreeholderOnApply), new TextObject("{=09z8Q08f}Your family were small farmers with just enough land to feed themselves and make a small profit. People like them were the pillars of the imperial rural economy, as well as the backbone of the levy."));
      MBList<SkillObject> effectedSkills4 = new MBList<SkillObject>();
      effectedSkills4.Add(DefaultSkills.Crafting);
      effectedSkills4.Add(DefaultSkills.Crossbow);
      creationCategory1.AddCategoryOption(new TextObject("{=v48N6h1t}Urban artisans"), effectedSkills4, DefaultCharacterAttributes.Intelligence, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.EmpireArtisanOnConsequence), new CharacterCreationApplyFinalEffects(this.EmpireArtisanOnApply), new TextObject("{=ueCm5y1C}Your family owned their own workshop in a city, making goods from raw materials brought in from the countryside. Your father played an active if minor role in the town council, and also served in the militia."));
      MBList<SkillObject> effectedSkills5 = new MBList<SkillObject>();
      effectedSkills5.Add(DefaultSkills.Scouting);
      effectedSkills5.Add(DefaultSkills.Bow);
      creationCategory1.AddCategoryOption(new TextObject("{=7eWmU2mF}Foresters"), effectedSkills5, DefaultCharacterAttributes.Control, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.EmpireWoodsmanOnConsequence), new CharacterCreationApplyFinalEffects(this.EmpireWoodsmanOnApply), new TextObject("{=yRFSzSDZ}Your family lived in a village, but did not own their own land. Instead, your father supplemented paid jobs with long trips in the woods, hunting and trapping, always keeping a wary eye for the lord's game wardens."));
      MBList<SkillObject> effectedSkills6 = new MBList<SkillObject>();
      effectedSkills6.Add(DefaultSkills.Roguery);
      effectedSkills6.Add(DefaultSkills.Throwing);
      creationCategory1.AddCategoryOption(new TextObject("{=aEke8dSb}Urban vagabonds"), effectedSkills6, DefaultCharacterAttributes.Cunning, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.EmpireVagabondOnConsequence), new CharacterCreationApplyFinalEffects(this.EmpireVagabondOnApply), new TextObject("{=Jvf6K7TZ}Your family numbered among the many poor migrants living in the slums that grow up outside the walls of imperial cities, making whatever money they could from a variety of odd jobs. Sometimes they did service for one of the Empire's many criminal gangs, and you had an early look at the dark side of life."));
      CharacterCreationCategory creationCategory2 = menu.AddMenuCategory(new CharacterCreationOnCondition(this.VlandianParentsOnCondition));
      MBList<SkillObject> effectedSkills7 = new MBList<SkillObject>();
      effectedSkills7.Add(DefaultSkills.Riding);
      effectedSkills7.Add(DefaultSkills.Polearm);
      creationCategory2.AddCategoryOption(new TextObject("{=2TptWc4m}A baron's retainers"), effectedSkills7, DefaultCharacterAttributes.Social, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.VlandiaBaronsRetainerOnConsequence), new CharacterCreationApplyFinalEffects(this.VlandiaBaronsRetainerOnApply), new TextObject("{=0Suu1Q9q}Your father was a bailiff for a local feudal magnate. He looked after his liege's estates, resolved disputes in the village, and helped train the village levy. He rode with the lord's cavalry, fighting as an armored knight."));
      MBList<SkillObject> effectedSkills8 = new MBList<SkillObject>();
      effectedSkills8.Add(DefaultSkills.Trade);
      effectedSkills8.Add(DefaultSkills.Charm);
      creationCategory2.AddCategoryOption(new TextObject("{=651FhzdR}Urban merchants"), effectedSkills8, DefaultCharacterAttributes.Intelligence, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.VlandiaMerchantOnConsequence), new CharacterCreationApplyFinalEffects(this.VlandiaMerchantOnApply), new TextObject("{=qNZFkxJb}Your family were merchants in one of the main cities of the kingdom. They organized caravans to nearby towns and were active in the local merchant's guild."));
      MBList<SkillObject> effectedSkills9 = new MBList<SkillObject>();
      effectedSkills9.Add(DefaultSkills.Polearm);
      effectedSkills9.Add(DefaultSkills.Crossbow);
      creationCategory2.AddCategoryOption(new TextObject("{=RDfXuVxT}Yeomen"), effectedSkills9, DefaultCharacterAttributes.Endurance, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.VlandiaYeomanOnConsequence), new CharacterCreationApplyFinalEffects(this.VlandiaYeomanOnApply), new TextObject("{=BLZ4mdhb}Your family were small farmers with just enough land to feed themselves and make a small profit. People like them were the pillars of the kingdom's economy, as well as the backbone of the levy."));
      MBList<SkillObject> effectedSkills10 = new MBList<SkillObject>();
      effectedSkills10.Add(DefaultSkills.Crafting);
      effectedSkills10.Add(DefaultSkills.TwoHanded);
      creationCategory2.AddCategoryOption(new TextObject("{=p2KIhGbE}Urban blacksmith"), effectedSkills10, DefaultCharacterAttributes.Vigor, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.VlandiaBlacksmithOnConsequence), new CharacterCreationApplyFinalEffects(this.VlandiaBlacksmithOnApply), new TextObject("{=btsMpRcA}Your family owned a smithy in a city. Your father played an active if minor role in the town council, and also served in the militia."));
      MBList<SkillObject> effectedSkills11 = new MBList<SkillObject>();
      effectedSkills11.Add(DefaultSkills.Scouting);
      effectedSkills11.Add(DefaultSkills.Crossbow);
      creationCategory2.AddCategoryOption(new TextObject("{=YcnK0Thk}Hunters"), effectedSkills11, DefaultCharacterAttributes.Control, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.VlandiaHunterOnConsequence), new CharacterCreationApplyFinalEffects(this.VlandiaHunterOnApply), new TextObject("{=yRFSzSDZ}Your family lived in a village, but did not own their own land. Instead, your father supplemented paid jobs with long trips in the woods, hunting and trapping, always keeping a wary eye for the lord's game wardens."));
      MBList<SkillObject> effectedSkills12 = new MBList<SkillObject>();
      effectedSkills12.Add(DefaultSkills.Roguery);
      effectedSkills12.Add(DefaultSkills.Crossbow);
      creationCategory2.AddCategoryOption(new TextObject("{=ipQP6aVi}Mercenaries"), effectedSkills12, DefaultCharacterAttributes.Cunning, this.FocusToAdd, this.SkillLevelToAdd, this.AttributeLevelToAdd, (CharacterCreationOnCondition) null, new CharacterCreationOnSelect(this.VlandiaMercenaryOnConsequence), new CharacterCreationApplyFinalEffects(this.VlandiaMercenaryOnApply), new TextObject("{=yYhX6JQC}Your father joined one of Vlandia's many mercenary companies, composed of men who got such a taste for war in their lord's service that they never took well to peace. Their crossbowmen were much valued across Calradia. Your mother was a camp follower, taking you along in the wake of bloody campaigns."));
      CharacterCreationCategory creationCategory3 = menu.AddMenuCategory(new CharacterCreationOnCondition(this.SturgianParentsOnCondition));
      TextObject text1 = new TextObject("{=mc78FEbA}A boyar's companions");
      MBList<SkillObject> effectedSkills13 = new MBList<SkillObject>();
      effectedSkills13.Add(DefaultSkills.Riding);
      effectedSkills13.Add(DefaultSkills.TwoHanded);
      CharacterAttribute social1 = DefaultCharacterAttributes.Social;
      int focusToAdd1 = this.FocusToAdd;
      int skillLevelToAdd1 = this.SkillLevelToAdd;
      int attributeLevelToAdd1 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect1 = new CharacterCreationOnSelect(this.SturgiaBoyarsCompanionOnConsequence);
      CharacterCreationApplyFinalEffects onApply1 = new CharacterCreationApplyFinalEffects(this.SturgiaBoyarsCompanionOnApply);
      TextObject descriptionText1 = new TextObject("{=hob3WVkU}Your father was a member of a boyar's druzhina, the 'companions' that make up his retinue. He sat at his lord's table in the great hall, oversaw the boyar's estates, and stood by his side in the center of the shield wall in battle.");
      creationCategory3.AddCategoryOption(text1, effectedSkills13, social1, focusToAdd1, skillLevelToAdd1, attributeLevelToAdd1, (CharacterCreationOnCondition) null, onSelect1, onApply1, descriptionText1);
      TextObject text2 = new TextObject("{=HqzVBfpl}Urban traders");
      MBList<SkillObject> effectedSkills14 = new MBList<SkillObject>();
      effectedSkills14.Add(DefaultSkills.Trade);
      effectedSkills14.Add(DefaultSkills.Tactics);
      CharacterAttribute cunning1 = DefaultCharacterAttributes.Cunning;
      int focusToAdd2 = this.FocusToAdd;
      int skillLevelToAdd2 = this.SkillLevelToAdd;
      int attributeLevelToAdd2 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect2 = new CharacterCreationOnSelect(this.SturgiaTraderOnConsequence);
      CharacterCreationApplyFinalEffects onApply2 = new CharacterCreationApplyFinalEffects(this.SturgiaTraderOnApply);
      TextObject descriptionText2 = new TextObject("{=bjVMtW3W}Your family were merchants who lived in one of Sturgia's great river ports, organizing the shipment of the north's bounty of furs, honey and other goods to faraway lands.");
      creationCategory3.AddCategoryOption(text2, effectedSkills14, cunning1, focusToAdd2, skillLevelToAdd2, attributeLevelToAdd2, (CharacterCreationOnCondition) null, onSelect2, onApply2, descriptionText2);
      TextObject text3 = new TextObject("{=zrpqSWSh}Free farmers");
      MBList<SkillObject> effectedSkills15 = new MBList<SkillObject>();
      effectedSkills15.Add(DefaultSkills.Athletics);
      effectedSkills15.Add(DefaultSkills.Polearm);
      CharacterAttribute endurance1 = DefaultCharacterAttributes.Endurance;
      int focusToAdd3 = this.FocusToAdd;
      int skillLevelToAdd3 = this.SkillLevelToAdd;
      int attributeLevelToAdd3 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect3 = new CharacterCreationOnSelect(this.SturgiaFreemanOnConsequence);
      CharacterCreationApplyFinalEffects onApply3 = new CharacterCreationApplyFinalEffects(this.SturgiaFreemanOnApply);
      TextObject descriptionText3 = new TextObject("{=Mcd3ZyKq}Your family had just enough land to feed themselves and make a small profit. People like them were the pillars of the kingdom's economy, as well as the backbone of the levy.");
      creationCategory3.AddCategoryOption(text3, effectedSkills15, endurance1, focusToAdd3, skillLevelToAdd3, attributeLevelToAdd3, (CharacterCreationOnCondition) null, onSelect3, onApply3, descriptionText3);
      TextObject text4 = new TextObject("{=v48N6h1t}Urban artisans");
      MBList<SkillObject> effectedSkills16 = new MBList<SkillObject>();
      effectedSkills16.Add(DefaultSkills.Crafting);
      effectedSkills16.Add(DefaultSkills.OneHanded);
      CharacterAttribute intelligence1 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd4 = this.FocusToAdd;
      int skillLevelToAdd4 = this.SkillLevelToAdd;
      int attributeLevelToAdd4 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect4 = new CharacterCreationOnSelect(this.SturgiaArtisanOnConsequence);
      CharacterCreationApplyFinalEffects onApply4 = new CharacterCreationApplyFinalEffects(this.SturgiaArtisanOnApply);
      TextObject descriptionText4 = new TextObject("{=ueCm5y1C}Your family owned their own workshop in a city, making goods from raw materials brought in from the countryside. Your father played an active if minor role in the town council, and also served in the militia.");
      creationCategory3.AddCategoryOption(text4, effectedSkills16, intelligence1, focusToAdd4, skillLevelToAdd4, attributeLevelToAdd4, (CharacterCreationOnCondition) null, onSelect4, onApply4, descriptionText4);
      TextObject text5 = new TextObject("{=YcnK0Thk}Hunters");
      MBList<SkillObject> effectedSkills17 = new MBList<SkillObject>();
      effectedSkills17.Add(DefaultSkills.Scouting);
      effectedSkills17.Add(DefaultSkills.Bow);
      CharacterAttribute vigor1 = DefaultCharacterAttributes.Vigor;
      int focusToAdd5 = this.FocusToAdd;
      int skillLevelToAdd5 = this.SkillLevelToAdd;
      int attributeLevelToAdd5 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect5 = new CharacterCreationOnSelect(this.SturgiaHunterOnConsequence);
      CharacterCreationApplyFinalEffects onApply5 = new CharacterCreationApplyFinalEffects(this.SturgiaHunterOnApply);
      TextObject descriptionText5 = new TextObject("{=WyZ2UtFF}Your family had no taste for the authority of the boyars. They made their living deep in the woods, slashing and burning fields which they tended for a year or two before moving on. They hunted and trapped fox, hare, ermine, and other fur-bearing animals.");
      creationCategory3.AddCategoryOption(text5, effectedSkills17, vigor1, focusToAdd5, skillLevelToAdd5, attributeLevelToAdd5, (CharacterCreationOnCondition) null, onSelect5, onApply5, descriptionText5);
      TextObject text6 = new TextObject("{=TPoK3GSj}Vagabonds");
      MBList<SkillObject> effectedSkills18 = new MBList<SkillObject>();
      effectedSkills18.Add(DefaultSkills.Roguery);
      effectedSkills18.Add(DefaultSkills.Throwing);
      CharacterAttribute control1 = DefaultCharacterAttributes.Control;
      int focusToAdd6 = this.FocusToAdd;
      int skillLevelToAdd6 = this.SkillLevelToAdd;
      int attributeLevelToAdd6 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect6 = new CharacterCreationOnSelect(this.SturgiaVagabondOnConsequence);
      CharacterCreationApplyFinalEffects onApply6 = new CharacterCreationApplyFinalEffects(this.SturgiaVagabondOnApply);
      TextObject descriptionText6 = new TextObject("{=2SDWhGmQ}Your family numbered among the poor migrants living in the slums that grow up outside the walls of the river cities, making whatever money they could from a variety of odd jobs. Sometimes they did services for one of the region's many criminal gangs.");
      creationCategory3.AddCategoryOption(text6, effectedSkills18, control1, focusToAdd6, skillLevelToAdd6, attributeLevelToAdd6, (CharacterCreationOnCondition) null, onSelect6, onApply6, descriptionText6);
      CharacterCreationCategory creationCategory4 = menu.AddMenuCategory(new CharacterCreationOnCondition(this.AseraiParentsOnCondition));
      TextObject text7 = new TextObject("{=Sw8OxnNr}Kinsfolk of an emir");
      MBList<SkillObject> effectedSkills19 = new MBList<SkillObject>();
      effectedSkills19.Add(DefaultSkills.Riding);
      effectedSkills19.Add(DefaultSkills.Throwing);
      CharacterAttribute endurance2 = DefaultCharacterAttributes.Endurance;
      int focusToAdd7 = this.FocusToAdd;
      int skillLevelToAdd7 = this.SkillLevelToAdd;
      int attributeLevelToAdd7 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect7 = new CharacterCreationOnSelect(this.AseraiTribesmanOnConsequence);
      CharacterCreationApplyFinalEffects onApply7 = new CharacterCreationApplyFinalEffects(this.AseraiTribesmanOnApply);
      TextObject descriptionText7 = new TextObject("{=MFrIHJZM}Your family was from a smaller offshoot of an emir's tribe. Your father's land gave him enough income to afford a horse but he was not quite wealthy enough to buy the armor needed to join the heavier cavalry. He fought as one of the light horsemen for which the desert is famous.");
      creationCategory4.AddCategoryOption(text7, effectedSkills19, endurance2, focusToAdd7, skillLevelToAdd7, attributeLevelToAdd7, (CharacterCreationOnCondition) null, onSelect7, onApply7, descriptionText7);
      TextObject text8 = new TextObject("{=ngFVgwDD}Warrior-slaves");
      MBList<SkillObject> effectedSkills20 = new MBList<SkillObject>();
      effectedSkills20.Add(DefaultSkills.Riding);
      effectedSkills20.Add(DefaultSkills.Polearm);
      CharacterAttribute vigor2 = DefaultCharacterAttributes.Vigor;
      int focusToAdd8 = this.FocusToAdd;
      int skillLevelToAdd8 = this.SkillLevelToAdd;
      int attributeLevelToAdd8 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect8 = new CharacterCreationOnSelect(this.AseraiWariorSlaveOnConsequence);
      CharacterCreationApplyFinalEffects onApply8 = new CharacterCreationApplyFinalEffects(this.AseraiWariorSlaveOnApply);
      TextObject descriptionText8 = new TextObject("{=GsPC2MgU}Your father was part of one of the slave-bodyguards maintained by the Aserai emirs. He fought by his master's side with tribe's armored cavalry, and was freed - perhaps for an act of valor, or perhaps he paid for his freedom with his share of the spoils of battle. He then married your mother.");
      creationCategory4.AddCategoryOption(text8, effectedSkills20, vigor2, focusToAdd8, skillLevelToAdd8, attributeLevelToAdd8, (CharacterCreationOnCondition) null, onSelect8, onApply8, descriptionText8);
      TextObject text9 = new TextObject("{=651FhzdR}Urban merchants");
      MBList<SkillObject> effectedSkills21 = new MBList<SkillObject>();
      effectedSkills21.Add(DefaultSkills.Trade);
      effectedSkills21.Add(DefaultSkills.Charm);
      CharacterAttribute social2 = DefaultCharacterAttributes.Social;
      int focusToAdd9 = this.FocusToAdd;
      int skillLevelToAdd9 = this.SkillLevelToAdd;
      int attributeLevelToAdd9 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect9 = new CharacterCreationOnSelect(this.AseraiMerchantOnConsequence);
      CharacterCreationApplyFinalEffects onApply9 = new CharacterCreationApplyFinalEffects(this.AseraiMerchantOnApply);
      TextObject descriptionText9 = new TextObject("{=1zXrlaav}Your family were respected traders in an oasis town. They ran caravans across the desert, and were experts in the finer points of negotiating passage through the desert tribes' territories.");
      creationCategory4.AddCategoryOption(text9, effectedSkills21, social2, focusToAdd9, skillLevelToAdd9, attributeLevelToAdd9, (CharacterCreationOnCondition) null, onSelect9, onApply9, descriptionText9);
      TextObject text10 = new TextObject("{=g31pXuqi}Oasis farmers");
      MBList<SkillObject> effectedSkills22 = new MBList<SkillObject>();
      effectedSkills22.Add(DefaultSkills.Athletics);
      effectedSkills22.Add(DefaultSkills.OneHanded);
      CharacterAttribute endurance3 = DefaultCharacterAttributes.Endurance;
      int focusToAdd10 = this.FocusToAdd;
      int skillLevelToAdd10 = this.SkillLevelToAdd;
      int attributeLevelToAdd10 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect10 = new CharacterCreationOnSelect(this.AseraiOasisFarmerOnConsequence);
      CharacterCreationApplyFinalEffects onApply10 = new CharacterCreationApplyFinalEffects(this.AseraiOasisFarmerOnApply);
      TextObject descriptionText10 = new TextObject("{=5P0KqBAw}Your family tilled the soil in one of the oases of the Nahasa and tended the palm orchards that produced the desert's famous dates. Your father was a member of the main foot levy of his tribe, fighting with his kinsmen under the emir's banner.");
      creationCategory4.AddCategoryOption(text10, effectedSkills22, endurance3, focusToAdd10, skillLevelToAdd10, attributeLevelToAdd10, (CharacterCreationOnCondition) null, onSelect10, onApply10, descriptionText10);
      TextObject text11 = new TextObject("{=EEedqolz}Bedouin");
      MBList<SkillObject> effectedSkills23 = new MBList<SkillObject>();
      effectedSkills23.Add(DefaultSkills.Scouting);
      effectedSkills23.Add(DefaultSkills.Bow);
      CharacterAttribute cunning2 = DefaultCharacterAttributes.Cunning;
      int focusToAdd11 = this.FocusToAdd;
      int skillLevelToAdd11 = this.SkillLevelToAdd;
      int attributeLevelToAdd11 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect11 = new CharacterCreationOnSelect(this.AseraiBedouinOnConsequence);
      CharacterCreationApplyFinalEffects onApply11 = new CharacterCreationApplyFinalEffects(this.AseraiBedouinOnApply);
      TextObject descriptionText11 = new TextObject("{=PKhcPbBX}Your family were part of a nomadic clan, crisscrossing the wastes between wadi beds and wells to feed their herds of goats and camels on the scraggly scrubs of the Nahasa.");
      creationCategory4.AddCategoryOption(text11, effectedSkills23, cunning2, focusToAdd11, skillLevelToAdd11, attributeLevelToAdd11, (CharacterCreationOnCondition) null, onSelect11, onApply11, descriptionText11);
      TextObject text12 = new TextObject("{=tRIrbTvv}Urban back-alley thugs");
      MBList<SkillObject> effectedSkills24 = new MBList<SkillObject>();
      effectedSkills24.Add(DefaultSkills.Roguery);
      effectedSkills24.Add(DefaultSkills.Polearm);
      CharacterAttribute control2 = DefaultCharacterAttributes.Control;
      int focusToAdd12 = this.FocusToAdd;
      int skillLevelToAdd12 = this.SkillLevelToAdd;
      int attributeLevelToAdd12 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect12 = new CharacterCreationOnSelect(this.AseraiBackAlleyThugOnConsequence);
      CharacterCreationApplyFinalEffects onApply12 = new CharacterCreationApplyFinalEffects(this.AseraiBackAlleyThugOnApply);
      TextObject descriptionText12 = new TextObject("{=6bUSbsKC}Your father worked for a fitiwi, one of the strongmen who keep order in the poorer quarters of the oasis towns. He resolved disputes over land, dice and insults, imposing his authority with the fitiwi's traditional staff.");
      creationCategory4.AddCategoryOption(text12, effectedSkills24, control2, focusToAdd12, skillLevelToAdd12, attributeLevelToAdd12, (CharacterCreationOnCondition) null, onSelect12, onApply12, descriptionText12);
      CharacterCreationCategory creationCategory5 = menu.AddMenuCategory(new CharacterCreationOnCondition(this.BattanianParentsOnCondition));
      TextObject text13 = new TextObject("{=GeNKQlHR}Members of the chieftain's hearthguard");
      MBList<SkillObject> effectedSkills25 = new MBList<SkillObject>();
      effectedSkills25.Add(DefaultSkills.TwoHanded);
      effectedSkills25.Add(DefaultSkills.Bow);
      CharacterAttribute vigor3 = DefaultCharacterAttributes.Vigor;
      int focusToAdd13 = this.FocusToAdd;
      int skillLevelToAdd13 = this.SkillLevelToAdd;
      int attributeLevelToAdd13 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect13 = new CharacterCreationOnSelect(this.BattaniaChieftainsHearthguardOnConsequence);
      CharacterCreationApplyFinalEffects onApply13 = new CharacterCreationApplyFinalEffects(this.BattaniaChieftainsHearthguardOnApply);
      TextObject descriptionText13 = new TextObject("{=LpH8SYFL}Your family were the trusted kinfolk of a Battanian chieftain, and sat at his table in his great hall. Your father assisted his chief in running the affairs of the clan and trained with the traditional weapons of the Battanian elite, the two-handed sword or falx and the bow.");
      creationCategory5.AddCategoryOption(text13, effectedSkills25, vigor3, focusToAdd13, skillLevelToAdd13, attributeLevelToAdd13, (CharacterCreationOnCondition) null, onSelect13, onApply13, descriptionText13);
      TextObject text14 = new TextObject("{=AeBzTj6w}Healers");
      MBList<SkillObject> effectedSkills26 = new MBList<SkillObject>();
      effectedSkills26.Add(DefaultSkills.Medicine);
      effectedSkills26.Add(DefaultSkills.Charm);
      CharacterAttribute intelligence2 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd14 = this.FocusToAdd;
      int skillLevelToAdd14 = this.SkillLevelToAdd;
      int attributeLevelToAdd14 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect14 = new CharacterCreationOnSelect(this.BattaniaHealerOnConsequence);
      CharacterCreationApplyFinalEffects onApply14 = new CharacterCreationApplyFinalEffects(this.BattaniaHealerOnApply);
      TextObject descriptionText14 = new TextObject("{=j6py5Rv5}Your parents were healers who gathered herbs and treated the sick. As a living reservoir of Battanian tradition, they were also asked to adjudicate many disputes between the clans.");
      creationCategory5.AddCategoryOption(text14, effectedSkills26, intelligence2, focusToAdd14, skillLevelToAdd14, attributeLevelToAdd14, (CharacterCreationOnCondition) null, onSelect14, onApply14, descriptionText14);
      TextObject text15 = new TextObject("{=tGEStbxb}Tribespeople");
      MBList<SkillObject> effectedSkills27 = new MBList<SkillObject>();
      effectedSkills27.Add(DefaultSkills.Athletics);
      effectedSkills27.Add(DefaultSkills.Throwing);
      CharacterAttribute control3 = DefaultCharacterAttributes.Control;
      int focusToAdd15 = this.FocusToAdd;
      int skillLevelToAdd15 = this.SkillLevelToAdd;
      int attributeLevelToAdd15 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect15 = new CharacterCreationOnSelect(this.BattaniaTribesmanOnConsequence);
      CharacterCreationApplyFinalEffects onApply15 = new CharacterCreationApplyFinalEffects(this.BattaniaTribesmanOnApply);
      TextObject descriptionText15 = new TextObject("{=WchH8bS2}Your family were middle-ranking members of a Battanian clan, who tilled their own land. Your father fought with the kern, the main body of his people's warriors, joining in the screaming charges for which the Battanians were famous.");
      creationCategory5.AddCategoryOption(text15, effectedSkills27, control3, focusToAdd15, skillLevelToAdd15, attributeLevelToAdd15, (CharacterCreationOnCondition) null, onSelect15, onApply15, descriptionText15);
      TextObject text16 = new TextObject("{=BCU6RezA}Smiths");
      MBList<SkillObject> effectedSkills28 = new MBList<SkillObject>();
      effectedSkills28.Add(DefaultSkills.Crafting);
      effectedSkills28.Add(DefaultSkills.TwoHanded);
      CharacterAttribute endurance4 = DefaultCharacterAttributes.Endurance;
      int focusToAdd16 = this.FocusToAdd;
      int skillLevelToAdd16 = this.SkillLevelToAdd;
      int attributeLevelToAdd16 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect16 = new CharacterCreationOnSelect(this.BattaniaSmithOnConsequence);
      CharacterCreationApplyFinalEffects onApply16 = new CharacterCreationApplyFinalEffects(this.BattaniaSmithOnApply);
      TextObject descriptionText16 = new TextObject("{=kg9YtrOg}Your family were smiths, a revered profession among the Battanians. They crafted everything from fine filigree jewelry in geometric designs to the well-balanced longswords favored by the Battanian aristocracy.");
      creationCategory5.AddCategoryOption(text16, effectedSkills28, endurance4, focusToAdd16, skillLevelToAdd16, attributeLevelToAdd16, (CharacterCreationOnCondition) null, onSelect16, onApply16, descriptionText16);
      TextObject text17 = new TextObject("{=7eWmU2mF}Foresters");
      MBList<SkillObject> effectedSkills29 = new MBList<SkillObject>();
      effectedSkills29.Add(DefaultSkills.Scouting);
      effectedSkills29.Add(DefaultSkills.Tactics);
      CharacterAttribute cunning3 = DefaultCharacterAttributes.Cunning;
      int focusToAdd17 = this.FocusToAdd;
      int skillLevelToAdd17 = this.SkillLevelToAdd;
      int attributeLevelToAdd17 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect17 = new CharacterCreationOnSelect(this.BattaniaWoodsmanOnConsequence);
      CharacterCreationApplyFinalEffects onApply17 = new CharacterCreationApplyFinalEffects(this.BattaniaWoodsmanOnApply);
      TextObject descriptionText17 = new TextObject("{=7jBroUUQ}Your family had little land of their own, so they earned their living from the woods, hunting and trapping. They taught you from an early age that skills like finding game trails and killing an animal with one shot could make the difference between eating and starvation.");
      creationCategory5.AddCategoryOption(text17, effectedSkills29, cunning3, focusToAdd17, skillLevelToAdd17, attributeLevelToAdd17, (CharacterCreationOnCondition) null, onSelect17, onApply17, descriptionText17);
      TextObject text18 = new TextObject("{=SpJqhEEh}Bards");
      MBList<SkillObject> effectedSkills30 = new MBList<SkillObject>();
      effectedSkills30.Add(DefaultSkills.Roguery);
      effectedSkills30.Add(DefaultSkills.Charm);
      CharacterAttribute social3 = DefaultCharacterAttributes.Social;
      int focusToAdd18 = this.FocusToAdd;
      int skillLevelToAdd18 = this.SkillLevelToAdd;
      int attributeLevelToAdd18 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect18 = new CharacterCreationOnSelect(this.BattaniaBardOnConsequence);
      CharacterCreationApplyFinalEffects onApply18 = new CharacterCreationApplyFinalEffects(this.BattaniaBardOnApply);
      TextObject descriptionText18 = new TextObject("{=aVzcyhhy}Your father was a bard, drifting from chieftain's hall to chieftain's hall making his living singing the praises of one Battanian aristocrat and mocking his enemies, then going to his enemy's hall and doing the reverse. You learned from him that a clever tongue could spare you  from a life toiling in the fields, if you kept your wits about you.");
      creationCategory5.AddCategoryOption(text18, effectedSkills30, social3, focusToAdd18, skillLevelToAdd18, attributeLevelToAdd18, (CharacterCreationOnCondition) null, onSelect18, onApply18, descriptionText18);
      CharacterCreationCategory creationCategory6 = menu.AddMenuCategory(new CharacterCreationOnCondition(this.KhuzaitParentsOnCondition));
      TextObject text19 = new TextObject("{=FVaRDe2a}A noyan's kinsfolk");
      MBList<SkillObject> effectedSkills31 = new MBList<SkillObject>();
      effectedSkills31.Add(DefaultSkills.Riding);
      effectedSkills31.Add(DefaultSkills.Polearm);
      CharacterAttribute endurance5 = DefaultCharacterAttributes.Endurance;
      int focusToAdd19 = this.FocusToAdd;
      int skillLevelToAdd19 = this.SkillLevelToAdd;
      int attributeLevelToAdd19 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect19 = new CharacterCreationOnSelect(this.KhuzaitNoyansKinsmanOnConsequence);
      CharacterCreationApplyFinalEffects onApply19 = new CharacterCreationApplyFinalEffects(this.KhuzaitNoyansKinsmanOnApply);
      TextObject descriptionText19 = new TextObject("{=jAs3kDXh}Your family were the trusted kinsfolk of a Khuzait noyan, and shared his meals in the chieftain's yurt. Your father assisted his chief in running the affairs of the clan and fought in the core of armored lancers in the center of the Khuzait battle line.");
      creationCategory6.AddCategoryOption(text19, effectedSkills31, endurance5, focusToAdd19, skillLevelToAdd19, attributeLevelToAdd19, (CharacterCreationOnCondition) null, onSelect19, onApply19, descriptionText19);
      TextObject text20 = new TextObject("{=TkgLEDRM}Merchants");
      MBList<SkillObject> effectedSkills32 = new MBList<SkillObject>();
      effectedSkills32.Add(DefaultSkills.Trade);
      effectedSkills32.Add(DefaultSkills.Charm);
      CharacterAttribute social4 = DefaultCharacterAttributes.Social;
      int focusToAdd20 = this.FocusToAdd;
      int skillLevelToAdd20 = this.SkillLevelToAdd;
      int attributeLevelToAdd20 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect20 = new CharacterCreationOnSelect(this.KhuzaitMerchantOnConsequence);
      CharacterCreationApplyFinalEffects onApply20 = new CharacterCreationApplyFinalEffects(this.KhuzaitMerchantOnApply);
      TextObject descriptionText20 = new TextObject("{=qPg3IDiq}Your family came from one of the merchant clans that dominated the cities in eastern Calradia before the Khuzait conquest. They adjusted quickly to their new masters, keeping the caravan routes running and ensuring that the tariff revenues that once went into imperial coffers now flowed to the khanate.");
      creationCategory6.AddCategoryOption(text20, effectedSkills32, social4, focusToAdd20, skillLevelToAdd20, attributeLevelToAdd20, (CharacterCreationOnCondition) null, onSelect20, onApply20, descriptionText20);
      TextObject text21 = new TextObject("{=tGEStbxb}Tribespeople");
      MBList<SkillObject> effectedSkills33 = new MBList<SkillObject>();
      effectedSkills33.Add(DefaultSkills.Bow);
      effectedSkills33.Add(DefaultSkills.Riding);
      CharacterAttribute control4 = DefaultCharacterAttributes.Control;
      int focusToAdd21 = this.FocusToAdd;
      int skillLevelToAdd21 = this.SkillLevelToAdd;
      int attributeLevelToAdd21 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect21 = new CharacterCreationOnSelect(this.KhuzaitTribesmanOnConsequence);
      CharacterCreationApplyFinalEffects onApply21 = new CharacterCreationApplyFinalEffects(this.KhuzaitTribesmanOnApply);
      TextObject descriptionText21 = new TextObject("{=URgZ4ai4}Your family were middle-ranking members of one of the Khuzait clans. He had some  herds of his own, but was not rich. When the Khuzait horde was summoned to battle, he fought with the horse archers, shooting and wheeling and wearing down the enemy before the lancers delivered the final punch.");
      creationCategory6.AddCategoryOption(text21, effectedSkills33, control4, focusToAdd21, skillLevelToAdd21, attributeLevelToAdd21, (CharacterCreationOnCondition) null, onSelect21, onApply21, descriptionText21);
      TextObject text22 = new TextObject("{=gQ2tAvCz}Farmers");
      MBList<SkillObject> effectedSkills34 = new MBList<SkillObject>();
      effectedSkills34.Add(DefaultSkills.Polearm);
      effectedSkills34.Add(DefaultSkills.Throwing);
      CharacterAttribute vigor4 = DefaultCharacterAttributes.Vigor;
      int focusToAdd22 = this.FocusToAdd;
      int skillLevelToAdd22 = this.SkillLevelToAdd;
      int attributeLevelToAdd22 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect22 = new CharacterCreationOnSelect(this.KhuzaitFarmerOnConsequence);
      CharacterCreationApplyFinalEffects onApply22 = new CharacterCreationApplyFinalEffects(this.KhuzaitFarmerOnApply);
      TextObject descriptionText22 = new TextObject("{=5QSGoRFj}Your family tilled one of the small patches of arable land in the steppes for generations. When the Khuzaits came, they ceased paying taxes to the emperor and providing conscripts for his army, and served the khan instead.");
      creationCategory6.AddCategoryOption(text22, effectedSkills34, vigor4, focusToAdd22, skillLevelToAdd22, attributeLevelToAdd22, (CharacterCreationOnCondition) null, onSelect22, onApply22, descriptionText22);
      TextObject text23 = new TextObject("{=vfhVveLW}Shamans");
      MBList<SkillObject> effectedSkills35 = new MBList<SkillObject>();
      effectedSkills35.Add(DefaultSkills.Medicine);
      effectedSkills35.Add(DefaultSkills.Charm);
      CharacterAttribute intelligence3 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd23 = this.FocusToAdd;
      int skillLevelToAdd23 = this.SkillLevelToAdd;
      int attributeLevelToAdd23 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect23 = new CharacterCreationOnSelect(this.KhuzaitShamanOnConsequence);
      CharacterCreationApplyFinalEffects onApply23 = new CharacterCreationApplyFinalEffects(this.KhuzaitShamanOnApply);
      TextObject descriptionText23 = new TextObject("{=WOKNhaG2}Your family were guardians of the sacred traditions of the Khuzaits, channelling the spirits of the wilderness and of the ancestors. They tended the sick and dispensed wisdom, resolving disputes and providing practical advice.");
      creationCategory6.AddCategoryOption(text23, effectedSkills35, intelligence3, focusToAdd23, skillLevelToAdd23, attributeLevelToAdd23, (CharacterCreationOnCondition) null, onSelect23, onApply23, descriptionText23);
      TextObject text24 = new TextObject("{=Xqba1Obq}Nomads");
      MBList<SkillObject> effectedSkills36 = new MBList<SkillObject>();
      effectedSkills36.Add(DefaultSkills.Scouting);
      effectedSkills36.Add(DefaultSkills.Riding);
      CharacterAttribute cunning4 = DefaultCharacterAttributes.Cunning;
      int focusToAdd24 = this.FocusToAdd;
      int skillLevelToAdd24 = this.SkillLevelToAdd;
      int attributeLevelToAdd24 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect24 = new CharacterCreationOnSelect(this.KhuzaitNomadOnConsequence);
      CharacterCreationApplyFinalEffects onApply24 = new CharacterCreationApplyFinalEffects(this.KhuzaitNomadOnApply);
      TextObject descriptionText24 = new TextObject("{=9aoQYpZs}Your family's clan never pledged its loyalty to the khan and never settled down, preferring to live out in the deep steppe away from his authority. They remain some of the finest trackers and scouts in the grasslands, as the ability to spot an enemy coming and move quickly is often all that protects their herds from their neighbors' predations.");
      creationCategory6.AddCategoryOption(text24, effectedSkills36, cunning4, focusToAdd24, skillLevelToAdd24, attributeLevelToAdd24, (CharacterCreationOnCondition) null, onSelect24, onApply24, descriptionText24);
      characterCreation.AddNewMenu(menu);
    }

    protected void AddChildhoodMenu(CharacterCreation characterCreation)
    {
      CharacterCreationMenu menu = new CharacterCreationMenu(new TextObject("{=8Yiwt1z6}Early Childhood"), new TextObject("{=character_creation_content_16}As a child you were noted for..."), new CharacterCreationOnInit(this.ChildhoodOnInit));
      CharacterCreationCategory creationCategory = menu.AddMenuCategory();
      TextObject text1 = new TextObject("{=kmM68Qx4}your leadership skills.");
      MBList<SkillObject> effectedSkills1 = new MBList<SkillObject>();
      effectedSkills1.Add(DefaultSkills.Leadership);
      effectedSkills1.Add(DefaultSkills.Tactics);
      CharacterAttribute cunning = DefaultCharacterAttributes.Cunning;
      int focusToAdd1 = this.FocusToAdd;
      int skillLevelToAdd1 = this.SkillLevelToAdd;
      int attributeLevelToAdd1 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect1 = new CharacterCreationOnSelect(this.ChildhoodYourLeadershipSkillsOnConsequence);
      CharacterCreationApplyFinalEffects onApply1 = new CharacterCreationApplyFinalEffects(this.ChildhoodGoodLeadingOnApply);
      TextObject descriptionText1 = new TextObject("{=FfNwXtii}If the wolf pup gang of your early childhood had an alpha, it was definitely you. All the other kids followed your lead as you decided what to play and where to play, and led them in games and mischief.");
      creationCategory.AddCategoryOption(text1, effectedSkills1, cunning, focusToAdd1, skillLevelToAdd1, attributeLevelToAdd1, (CharacterCreationOnCondition) null, onSelect1, onApply1, descriptionText1);
      TextObject text2 = new TextObject("{=5HXS8HEY}your brawn.");
      MBList<SkillObject> effectedSkills2 = new MBList<SkillObject>();
      effectedSkills2.Add(DefaultSkills.TwoHanded);
      effectedSkills2.Add(DefaultSkills.Throwing);
      CharacterAttribute vigor = DefaultCharacterAttributes.Vigor;
      int focusToAdd2 = this.FocusToAdd;
      int skillLevelToAdd2 = this.SkillLevelToAdd;
      int attributeLevelToAdd2 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect2 = new CharacterCreationOnSelect(this.ChildhoodYourBrawnOnConsequence);
      CharacterCreationApplyFinalEffects onApply2 = new CharacterCreationApplyFinalEffects(this.ChildhoodGoodAthleticsOnApply);
      TextObject descriptionText2 = new TextObject("{=YKzuGc54}You were big, and other children looked to have you around in any scrap with children from a neighboring village. You pushed a plough and threw an axe like an adult.");
      creationCategory.AddCategoryOption(text2, effectedSkills2, vigor, focusToAdd2, skillLevelToAdd2, attributeLevelToAdd2, (CharacterCreationOnCondition) null, onSelect2, onApply2, descriptionText2);
      TextObject text3 = new TextObject("{=QrYjPUEf}your attention to detail.");
      MBList<SkillObject> effectedSkills3 = new MBList<SkillObject>();
      effectedSkills3.Add(DefaultSkills.Athletics);
      effectedSkills3.Add(DefaultSkills.Bow);
      CharacterAttribute control = DefaultCharacterAttributes.Control;
      int focusToAdd3 = this.FocusToAdd;
      int skillLevelToAdd3 = this.SkillLevelToAdd;
      int attributeLevelToAdd3 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect3 = new CharacterCreationOnSelect(this.ChildhoodAttentionToDetailOnConsequence);
      CharacterCreationApplyFinalEffects onApply3 = new CharacterCreationApplyFinalEffects(this.ChildhoodGoodMemoryOnApply);
      TextObject descriptionText3 = new TextObject("{=JUSHAPnu}You were quick on your feet and attentive to what was going on around you. Usually you could run away from trouble, though you could give a good account of yourself in a fight with other children if cornered.");
      creationCategory.AddCategoryOption(text3, effectedSkills3, control, focusToAdd3, skillLevelToAdd3, attributeLevelToAdd3, (CharacterCreationOnCondition) null, onSelect3, onApply3, descriptionText3);
      TextObject text4 = new TextObject("{=Y3UcaX74}your aptitude for numbers.");
      MBList<SkillObject> effectedSkills4 = new MBList<SkillObject>();
      effectedSkills4.Add(DefaultSkills.Engineering);
      effectedSkills4.Add(DefaultSkills.Trade);
      CharacterAttribute intelligence = DefaultCharacterAttributes.Intelligence;
      int focusToAdd4 = this.FocusToAdd;
      int skillLevelToAdd4 = this.SkillLevelToAdd;
      int attributeLevelToAdd4 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect4 = new CharacterCreationOnSelect(this.ChildhoodAptitudeForNumbersOnConsequence);
      CharacterCreationApplyFinalEffects onApply4 = new CharacterCreationApplyFinalEffects(this.ChildhoodGoodMathOnApply);
      TextObject descriptionText4 = new TextObject("{=DFidSjIf}Most children around you had only the most rudimentary education, but you lingered after class to study letters and mathematics. You were fascinated by the marketplace - weights and measures, tallies and accounts, the chatter about profits and losses.");
      creationCategory.AddCategoryOption(text4, effectedSkills4, intelligence, focusToAdd4, skillLevelToAdd4, attributeLevelToAdd4, (CharacterCreationOnCondition) null, onSelect4, onApply4, descriptionText4);
      TextObject text5 = new TextObject("{=GEYzLuwb}your way with people.");
      MBList<SkillObject> effectedSkills5 = new MBList<SkillObject>();
      effectedSkills5.Add(DefaultSkills.Charm);
      effectedSkills5.Add(DefaultSkills.Leadership);
      CharacterAttribute social = DefaultCharacterAttributes.Social;
      int focusToAdd5 = this.FocusToAdd;
      int skillLevelToAdd5 = this.SkillLevelToAdd;
      int attributeLevelToAdd5 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect5 = new CharacterCreationOnSelect(this.ChildhoodWayWithPeopleOnConsequence);
      CharacterCreationApplyFinalEffects onApply5 = new CharacterCreationApplyFinalEffects(this.ChildhoodGoodMannersOnApply);
      TextObject descriptionText5 = new TextObject("{=w2TEQq26}You were always attentive to other people, good at guessing their motivations. You studied how individuals were swayed, and tried out what you learned from adults on your friends.");
      creationCategory.AddCategoryOption(text5, effectedSkills5, social, focusToAdd5, skillLevelToAdd5, attributeLevelToAdd5, (CharacterCreationOnCondition) null, onSelect5, onApply5, descriptionText5);
      TextObject text6 = new TextObject("{=MEgLE2kj}your skill with horses.");
      MBList<SkillObject> effectedSkills6 = new MBList<SkillObject>();
      effectedSkills6.Add(DefaultSkills.Riding);
      effectedSkills6.Add(DefaultSkills.Medicine);
      CharacterAttribute endurance = DefaultCharacterAttributes.Endurance;
      int focusToAdd6 = this.FocusToAdd;
      int skillLevelToAdd6 = this.SkillLevelToAdd;
      int attributeLevelToAdd6 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect6 = new CharacterCreationOnSelect(this.ChildhoodSkillsWithHorsesOnConsequence);
      CharacterCreationApplyFinalEffects onApply6 = new CharacterCreationApplyFinalEffects(this.ChildhoodAffinityWithAnimalsOnApply);
      TextObject descriptionText6 = new TextObject("{=ngazFofr}You were always drawn to animals, and spent as much time as possible hanging out in the village stables. You could calm horses, and were sometimes called upon to break in new colts. You learned the basics of veterinary arts, much of which is applicable to humans as well.");
      creationCategory.AddCategoryOption(text6, effectedSkills6, endurance, focusToAdd6, skillLevelToAdd6, attributeLevelToAdd6, (CharacterCreationOnCondition) null, onSelect6, onApply6, descriptionText6);
      characterCreation.AddNewMenu(menu);
    }

    protected void AddEducationMenu(CharacterCreation characterCreation)
    {
      CharacterCreationMenu menu = new CharacterCreationMenu(new TextObject("{=rcoueCmk}Adolescence"), this._educationIntroductoryText, new CharacterCreationOnInit(this.EducationOnInit));
      CharacterCreationCategory creationCategory = menu.AddMenuCategory();
      TextObject text1 = new TextObject("{=RKVNvimC}herded the sheep.");
      MBList<SkillObject> effectedSkills1 = new MBList<SkillObject>();
      effectedSkills1.Add(DefaultSkills.Athletics);
      effectedSkills1.Add(DefaultSkills.Throwing);
      CharacterAttribute control1 = DefaultCharacterAttributes.Control;
      int focusToAdd1 = this.FocusToAdd;
      int skillLevelToAdd1 = this.SkillLevelToAdd;
      int attributeLevelToAdd1 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition1 = new CharacterCreationOnCondition(this.RuralAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect1 = new CharacterCreationOnSelect(this.RuralAdolescenceHerderOnConsequence);
      CharacterCreationApplyFinalEffects onApply1 = new CharacterCreationApplyFinalEffects(this.RuralAdolescenceHerderOnApply);
      TextObject descriptionText1 = new TextObject("{=KfaqPpbK}You went with other fleet-footed youths to take the villages' sheep, goats or cattle to graze in pastures near the village. You were in charge of chasing down stray beasts, and always kept a big stone on hand to be hurled at lurking predators if necessary.");
      creationCategory.AddCategoryOption(text1, effectedSkills1, control1, focusToAdd1, skillLevelToAdd1, attributeLevelToAdd1, optionCondition1, onSelect1, onApply1, descriptionText1);
      TextObject text2 = new TextObject("{=bTKiN0hr}worked in the village smithy.");
      MBList<SkillObject> effectedSkills2 = new MBList<SkillObject>();
      effectedSkills2.Add(DefaultSkills.TwoHanded);
      effectedSkills2.Add(DefaultSkills.Crafting);
      CharacterAttribute vigor1 = DefaultCharacterAttributes.Vigor;
      int focusToAdd2 = this.FocusToAdd;
      int skillLevelToAdd2 = this.SkillLevelToAdd;
      int attributeLevelToAdd2 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition2 = new CharacterCreationOnCondition(this.RuralAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect2 = new CharacterCreationOnSelect(this.RuralAdolescenceSmithyOnConsequence);
      CharacterCreationApplyFinalEffects onApply2 = new CharacterCreationApplyFinalEffects(this.RuralAdolescenceSmithyOnApply);
      TextObject descriptionText2 = new TextObject("{=y6j1bJTH}You were apprenticed to the local smith. You learned how to heat and forge metal, hammering for hours at a time until your muscles ached.");
      creationCategory.AddCategoryOption(text2, effectedSkills2, vigor1, focusToAdd2, skillLevelToAdd2, attributeLevelToAdd2, optionCondition2, onSelect2, onApply2, descriptionText2);
      TextObject text3 = new TextObject("{=tI8ZLtoA}repaired projects.");
      MBList<SkillObject> effectedSkills3 = new MBList<SkillObject>();
      effectedSkills3.Add(DefaultSkills.Crafting);
      effectedSkills3.Add(DefaultSkills.Engineering);
      CharacterAttribute intelligence1 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd3 = this.FocusToAdd;
      int skillLevelToAdd3 = this.SkillLevelToAdd;
      int attributeLevelToAdd3 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition3 = new CharacterCreationOnCondition(this.RuralAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect3 = new CharacterCreationOnSelect(this.RuralAdolescenceRepairmanOnConsequence);
      CharacterCreationApplyFinalEffects onApply3 = new CharacterCreationApplyFinalEffects(this.RuralAdolescenceRepairmanOnApply);
      TextObject descriptionText3 = new TextObject("{=6LFj919J}You helped dig wells, rethatch houses, and fix broken plows. You learned about the basics of construction, as well as what it takes to keep a farming community prosperous.");
      creationCategory.AddCategoryOption(text3, effectedSkills3, intelligence1, focusToAdd3, skillLevelToAdd3, attributeLevelToAdd3, optionCondition3, onSelect3, onApply3, descriptionText3);
      TextObject text4 = new TextObject("{=TRwgSLD2}gathered herbs in the wild.");
      MBList<SkillObject> effectedSkills4 = new MBList<SkillObject>();
      effectedSkills4.Add(DefaultSkills.Medicine);
      effectedSkills4.Add(DefaultSkills.Scouting);
      CharacterAttribute endurance1 = DefaultCharacterAttributes.Endurance;
      int focusToAdd4 = this.FocusToAdd;
      int skillLevelToAdd4 = this.SkillLevelToAdd;
      int attributeLevelToAdd4 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition4 = new CharacterCreationOnCondition(this.RuralAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect4 = new CharacterCreationOnSelect(this.RuralAdolescenceGathererOnConsequence);
      CharacterCreationApplyFinalEffects onApply4 = new CharacterCreationApplyFinalEffects(this.RuralAdolescenceGathererOnApply);
      TextObject descriptionText4 = new TextObject("{=9ks4u5cH}You were sent by the village healer up into the hills to look for useful medicinal plants. You learned which herbs healed wounds or brought down a fever, and how to find them.");
      creationCategory.AddCategoryOption(text4, effectedSkills4, endurance1, focusToAdd4, skillLevelToAdd4, attributeLevelToAdd4, optionCondition4, onSelect4, onApply4, descriptionText4);
      TextObject text5 = new TextObject("{=T7m7ReTq}hunted small game.");
      MBList<SkillObject> effectedSkills5 = new MBList<SkillObject>();
      effectedSkills5.Add(DefaultSkills.Bow);
      effectedSkills5.Add(DefaultSkills.Tactics);
      CharacterAttribute control2 = DefaultCharacterAttributes.Control;
      int focusToAdd5 = this.FocusToAdd;
      int skillLevelToAdd5 = this.SkillLevelToAdd;
      int attributeLevelToAdd5 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition5 = new CharacterCreationOnCondition(this.RuralAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect5 = new CharacterCreationOnSelect(this.RuralAdolescenceHunterOnConsequence);
      CharacterCreationApplyFinalEffects onApply5 = new CharacterCreationApplyFinalEffects(this.RuralAdolescenceHunterOnApply);
      TextObject descriptionText5 = new TextObject("{=RuvSk3QT}You accompanied a local hunter as he went into the wilderness, helping him set up traps and catch small animals.");
      creationCategory.AddCategoryOption(text5, effectedSkills5, control2, focusToAdd5, skillLevelToAdd5, attributeLevelToAdd5, optionCondition5, onSelect5, onApply5, descriptionText5);
      TextObject text6 = new TextObject("{=qAbMagWq}sold product at the market.");
      MBList<SkillObject> effectedSkills6 = new MBList<SkillObject>();
      effectedSkills6.Add(DefaultSkills.Trade);
      effectedSkills6.Add(DefaultSkills.Charm);
      CharacterAttribute social1 = DefaultCharacterAttributes.Social;
      int focusToAdd6 = this.FocusToAdd;
      int skillLevelToAdd6 = this.SkillLevelToAdd;
      int attributeLevelToAdd6 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition6 = new CharacterCreationOnCondition(this.RuralAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect6 = new CharacterCreationOnSelect(this.RuralAdolescenceHelperOnConsequence);
      CharacterCreationApplyFinalEffects onApply6 = new CharacterCreationApplyFinalEffects(this.RuralAdolescenceHelperOnApply);
      TextObject descriptionText6 = new TextObject("{=DIgsfYfz}You took your family's goods to the nearest town to sell your produce and buy supplies. It was hard work, but you enjoyed the hubbub of the marketplace.");
      creationCategory.AddCategoryOption(text6, effectedSkills6, social1, focusToAdd6, skillLevelToAdd6, attributeLevelToAdd6, optionCondition6, onSelect6, onApply6, descriptionText6);
      TextObject text7 = new TextObject("{=nOfSqRnI}at the town watch's training ground.");
      MBList<SkillObject> effectedSkills7 = new MBList<SkillObject>();
      effectedSkills7.Add(DefaultSkills.Crossbow);
      effectedSkills7.Add(DefaultSkills.Tactics);
      CharacterAttribute control3 = DefaultCharacterAttributes.Control;
      int focusToAdd7 = this.FocusToAdd;
      int skillLevelToAdd7 = this.SkillLevelToAdd;
      int attributeLevelToAdd7 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition7 = new CharacterCreationOnCondition(this.UrbanAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect7 = new CharacterCreationOnSelect(this.UrbanAdolescenceWatcherOnConsequence);
      CharacterCreationApplyFinalEffects onApply7 = new CharacterCreationApplyFinalEffects(this.UrbanAdolescenceWatcherOnApply);
      TextObject descriptionText7 = new TextObject("{=qnqdEJOv}You watched the town's watch practice shooting and perfect their plans to defend the walls in case of a siege.");
      creationCategory.AddCategoryOption(text7, effectedSkills7, control3, focusToAdd7, skillLevelToAdd7, attributeLevelToAdd7, optionCondition7, onSelect7, onApply7, descriptionText7);
      TextObject text8 = new TextObject("{=8a6dnLd2}with the alley gangs.");
      MBList<SkillObject> effectedSkills8 = new MBList<SkillObject>();
      effectedSkills8.Add(DefaultSkills.Roguery);
      effectedSkills8.Add(DefaultSkills.OneHanded);
      CharacterAttribute cunning = DefaultCharacterAttributes.Cunning;
      int focusToAdd8 = this.FocusToAdd;
      int skillLevelToAdd8 = this.SkillLevelToAdd;
      int attributeLevelToAdd8 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition8 = new CharacterCreationOnCondition(this.UrbanAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect8 = new CharacterCreationOnSelect(this.UrbanAdolescenceGangerOnConsequence);
      CharacterCreationApplyFinalEffects onApply8 = new CharacterCreationApplyFinalEffects(this.UrbanAdolescenceGangerOnApply);
      TextObject descriptionText8 = new TextObject("{=1SUTcF0J}The gang leaders who kept watch over the slums of Calradian cities were always in need of poor youth to run messages and back them up in turf wars, while thrill-seeking merchants' sons and daughters sometimes slummed it in their company as well.");
      creationCategory.AddCategoryOption(text8, effectedSkills8, cunning, focusToAdd8, skillLevelToAdd8, attributeLevelToAdd8, optionCondition8, onSelect8, onApply8, descriptionText8);
      TextObject text9 = new TextObject("{=7Hv984Sf}at docks and building sites.");
      MBList<SkillObject> effectedSkills9 = new MBList<SkillObject>();
      effectedSkills9.Add(DefaultSkills.Athletics);
      effectedSkills9.Add(DefaultSkills.Crafting);
      CharacterAttribute vigor2 = DefaultCharacterAttributes.Vigor;
      int focusToAdd9 = this.FocusToAdd;
      int skillLevelToAdd9 = this.SkillLevelToAdd;
      int attributeLevelToAdd9 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition9 = new CharacterCreationOnCondition(this.UrbanAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect9 = new CharacterCreationOnSelect(this.UrbanAdolescenceDockerOnConsequence);
      CharacterCreationApplyFinalEffects onApply9 = new CharacterCreationApplyFinalEffects(this.UrbanAdolescenceDockerOnApply);
      TextObject descriptionText9 = new TextObject("{=bhdkegZ4}All towns had their share of projects that were constantly in need of both skilled and unskilled labor. You learned how hoists and scaffolds were constructed, how planks and stones were hewn and fitted, and other skills.");
      creationCategory.AddCategoryOption(text9, effectedSkills9, vigor2, focusToAdd9, skillLevelToAdd9, attributeLevelToAdd9, optionCondition9, onSelect9, onApply9, descriptionText9);
      TextObject text10 = new TextObject("{=kbcwb5TH}in the markets and caravanserais.");
      MBList<SkillObject> effectedSkills10 = new MBList<SkillObject>();
      effectedSkills10.Add(DefaultSkills.Trade);
      effectedSkills10.Add(DefaultSkills.Charm);
      CharacterAttribute social2 = DefaultCharacterAttributes.Social;
      int focusToAdd10 = this.FocusToAdd;
      int skillLevelToAdd10 = this.SkillLevelToAdd;
      int attributeLevelToAdd10 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition10 = new CharacterCreationOnCondition(this.UrbanPoorAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect10 = new CharacterCreationOnSelect(this.UrbanAdolescenceMarketerOnConsequence);
      CharacterCreationApplyFinalEffects onApply10 = new CharacterCreationApplyFinalEffects(this.UrbanAdolescenceMarketerOnApply);
      TextObject descriptionText10 = new TextObject("{=lLJh7WAT}You worked in the marketplace, selling trinkets and drinks to busy shoppers.");
      creationCategory.AddCategoryOption(text10, effectedSkills10, social2, focusToAdd10, skillLevelToAdd10, attributeLevelToAdd10, optionCondition10, onSelect10, onApply10, descriptionText10);
      TextObject text11 = new TextObject("{=kbcwb5TH}in the markets and caravanserais.");
      MBList<SkillObject> effectedSkills11 = new MBList<SkillObject>();
      effectedSkills11.Add(DefaultSkills.Trade);
      effectedSkills11.Add(DefaultSkills.Charm);
      CharacterAttribute social3 = DefaultCharacterAttributes.Social;
      int focusToAdd11 = this.FocusToAdd;
      int skillLevelToAdd11 = this.SkillLevelToAdd;
      int attributeLevelToAdd11 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition11 = new CharacterCreationOnCondition(this.UrbanRichAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect11 = new CharacterCreationOnSelect(this.UrbanAdolescenceMarketerOnConsequence);
      CharacterCreationApplyFinalEffects onApply11 = new CharacterCreationApplyFinalEffects(this.UrbanAdolescenceMarketerOnApply);
      TextObject descriptionText11 = new TextObject("{=rmMcwSn8}You helped your family handle their business affairs, going down to the marketplace to make purchases and oversee the arrival of caravans.");
      creationCategory.AddCategoryOption(text11, effectedSkills11, social3, focusToAdd11, skillLevelToAdd11, attributeLevelToAdd11, optionCondition11, onSelect11, onApply11, descriptionText11);
      TextObject text12 = new TextObject("{=mfRbx5KE}reading and studying.");
      MBList<SkillObject> effectedSkills12 = new MBList<SkillObject>();
      effectedSkills12.Add(DefaultSkills.Engineering);
      effectedSkills12.Add(DefaultSkills.Leadership);
      CharacterAttribute intelligence2 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd12 = this.FocusToAdd;
      int skillLevelToAdd12 = this.SkillLevelToAdd;
      int attributeLevelToAdd12 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition12 = new CharacterCreationOnCondition(this.UrbanPoorAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect12 = new CharacterCreationOnSelect(this.UrbanAdolescenceTutorOnConsequence);
      CharacterCreationApplyFinalEffects onApply12 = new CharacterCreationApplyFinalEffects(this.UrbanAdolescenceDockerOnApply);
      TextObject descriptionText12 = new TextObject("{=elQnygal}Your family scraped up the money for a rudimentary schooling and you took full advantage, reading voraciously on history, mathematics, and philosophy and discussing what you read with your tutor and classmates.");
      creationCategory.AddCategoryOption(text12, effectedSkills12, intelligence2, focusToAdd12, skillLevelToAdd12, attributeLevelToAdd12, optionCondition12, onSelect12, onApply12, descriptionText12);
      TextObject text13 = new TextObject("{=etG87fB7}with your tutor.");
      MBList<SkillObject> effectedSkills13 = new MBList<SkillObject>();
      effectedSkills13.Add(DefaultSkills.Engineering);
      effectedSkills13.Add(DefaultSkills.Leadership);
      CharacterAttribute intelligence3 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd13 = this.FocusToAdd;
      int skillLevelToAdd13 = this.SkillLevelToAdd;
      int attributeLevelToAdd13 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition13 = new CharacterCreationOnCondition(this.UrbanRichAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect13 = new CharacterCreationOnSelect(this.UrbanAdolescenceTutorOnConsequence);
      CharacterCreationApplyFinalEffects onApply13 = new CharacterCreationApplyFinalEffects(this.UrbanAdolescenceDockerOnApply);
      TextObject descriptionText13 = new TextObject("{=hXl25avg}Your family arranged for a private tutor and you took full advantage, reading voraciously on history, mathematics, and philosophy and discussing what you read with your tutor and classmates.");
      creationCategory.AddCategoryOption(text13, effectedSkills13, intelligence3, focusToAdd13, skillLevelToAdd13, attributeLevelToAdd13, optionCondition13, onSelect13, onApply13, descriptionText13);
      TextObject text14 = new TextObject("{=FKpLEamz}caring for horses.");
      MBList<SkillObject> effectedSkills14 = new MBList<SkillObject>();
      effectedSkills14.Add(DefaultSkills.Riding);
      effectedSkills14.Add(DefaultSkills.Steward);
      CharacterAttribute endurance2 = DefaultCharacterAttributes.Endurance;
      int focusToAdd14 = this.FocusToAdd;
      int skillLevelToAdd14 = this.SkillLevelToAdd;
      int attributeLevelToAdd14 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition14 = new CharacterCreationOnCondition(this.UrbanRichAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect14 = new CharacterCreationOnSelect(this.UrbanAdolescenceHorserOnConsequence);
      CharacterCreationApplyFinalEffects onApply14 = new CharacterCreationApplyFinalEffects(this.UrbanAdolescenceDockerOnApply);
      TextObject descriptionText14 = new TextObject("{=Ghz90npw}Your family owned a few horses at the town stables and you took charge of their care. Many evenings you would take them out beyond the walls and gallup through the fields, racing other youth.");
      creationCategory.AddCategoryOption(text14, effectedSkills14, endurance2, focusToAdd14, skillLevelToAdd14, attributeLevelToAdd14, optionCondition14, onSelect14, onApply14, descriptionText14);
      TextObject text15 = new TextObject("{=vH7GtuuK}working at the stables.");
      MBList<SkillObject> effectedSkills15 = new MBList<SkillObject>();
      effectedSkills15.Add(DefaultSkills.Riding);
      effectedSkills15.Add(DefaultSkills.Steward);
      CharacterAttribute endurance3 = DefaultCharacterAttributes.Endurance;
      int focusToAdd15 = this.FocusToAdd;
      int skillLevelToAdd15 = this.SkillLevelToAdd;
      int attributeLevelToAdd15 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition15 = new CharacterCreationOnCondition(this.UrbanPoorAdolescenceOnCondition);
      CharacterCreationOnSelect onSelect15 = new CharacterCreationOnSelect(this.UrbanAdolescenceHorserOnConsequence);
      CharacterCreationApplyFinalEffects onApply15 = new CharacterCreationApplyFinalEffects(this.UrbanAdolescenceDockerOnApply);
      TextObject descriptionText15 = new TextObject("{=csUq1RCC}You were employed as a hired hand at the town's stables. The overseers recognized that you had a knack for horses, and you were allowed to exercise them and sometimes even break in new steeds.");
      creationCategory.AddCategoryOption(text15, effectedSkills15, endurance3, focusToAdd15, skillLevelToAdd15, attributeLevelToAdd15, optionCondition15, onSelect15, onApply15, descriptionText15);
      characterCreation.AddNewMenu(menu);
    }

    protected void AddYouthMenu(CharacterCreation characterCreation)
    {
      CharacterCreationMenu menu = new CharacterCreationMenu(new TextObject("{=ok8lSW6M}Youth"), this._youthIntroductoryText, new CharacterCreationOnInit(this.YouthOnInit));
      CharacterCreationCategory creationCategory = menu.AddMenuCategory();
      TextObject text1 = new TextObject("{=CITG915d}joined a commander's staff.");
      MBList<SkillObject> effectedSkills1 = new MBList<SkillObject>();
      effectedSkills1.Add(DefaultSkills.Steward);
      effectedSkills1.Add(DefaultSkills.Tactics);
      CharacterAttribute cunning1 = DefaultCharacterAttributes.Cunning;
      int focusToAdd1 = this.FocusToAdd;
      int skillLevelToAdd1 = this.SkillLevelToAdd;
      int attributeLevelToAdd1 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition1 = new CharacterCreationOnCondition(this.YouthCommanderOnCondition);
      CharacterCreationOnSelect onSelect1 = new CharacterCreationOnSelect(this.YouthCommanderOnConsequence);
      CharacterCreationApplyFinalEffects onApply1 = new CharacterCreationApplyFinalEffects(this.YouthCommanderOnApply);
      TextObject descriptionText1 = new TextObject("{=Ay0G3f7I}Your family arranged for you to be part of the staff of an imperial strategos. You were not given major responsibilities - mostly carrying messages and tending to his horse -- but it did give you a chance to see how campaigns were planned and men were deployed in battle.");
      creationCategory.AddCategoryOption(text1, effectedSkills1, cunning1, focusToAdd1, skillLevelToAdd1, attributeLevelToAdd1, optionCondition1, onSelect1, onApply1, descriptionText1);
      TextObject text2 = new TextObject("{=bhE2i6OU}served as a baron's groom.");
      MBList<SkillObject> effectedSkills2 = new MBList<SkillObject>();
      effectedSkills2.Add(DefaultSkills.Steward);
      effectedSkills2.Add(DefaultSkills.Tactics);
      CharacterAttribute cunning2 = DefaultCharacterAttributes.Cunning;
      int focusToAdd2 = this.FocusToAdd;
      int skillLevelToAdd2 = this.SkillLevelToAdd;
      int attributeLevelToAdd2 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition2 = new CharacterCreationOnCondition(this.YouthGroomOnCondition);
      CharacterCreationOnSelect onSelect2 = new CharacterCreationOnSelect(this.YouthGroomOnConsequence);
      CharacterCreationApplyFinalEffects onApply2 = new CharacterCreationApplyFinalEffects(this.YouthGroomOnApply);
      TextObject descriptionText2 = new TextObject("{=iZKtGI6Y}Your family arranged for you to accompany a minor baron of the Vlandian kingdom. You were not given major responsibilities - mostly carrying messages and tending to his horse -- but it did give you a chance to see how campaigns were planned and men were deployed in battle.");
      creationCategory.AddCategoryOption(text2, effectedSkills2, cunning2, focusToAdd2, skillLevelToAdd2, attributeLevelToAdd2, optionCondition2, onSelect2, onApply2, descriptionText2);
      TextObject text3 = new TextObject("{=F2bgujPo}were a chieftain's servant.");
      MBList<SkillObject> effectedSkills3 = new MBList<SkillObject>();
      effectedSkills3.Add(DefaultSkills.Steward);
      effectedSkills3.Add(DefaultSkills.Tactics);
      CharacterAttribute cunning3 = DefaultCharacterAttributes.Cunning;
      int focusToAdd3 = this.FocusToAdd;
      int skillLevelToAdd3 = this.SkillLevelToAdd;
      int attributeLevelToAdd3 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition3 = new CharacterCreationOnCondition(this.YouthChieftainOnCondition);
      CharacterCreationOnSelect onSelect3 = new CharacterCreationOnSelect(this.YouthChieftainOnConsequence);
      CharacterCreationApplyFinalEffects onApply3 = new CharacterCreationApplyFinalEffects(this.YouthChieftainOnApply);
      TextObject descriptionText3 = new TextObject("{=7AYJ3SjK}Your family arranged for you to accompany a chieftain of your people. You were not given major responsibilities - mostly carrying messages and tending to his horse -- but it did give you a chance to see how campaigns were planned and men were deployed in battle.");
      creationCategory.AddCategoryOption(text3, effectedSkills3, cunning3, focusToAdd3, skillLevelToAdd3, attributeLevelToAdd3, optionCondition3, onSelect3, onApply3, descriptionText3);
      TextObject text4 = new TextObject("{=h2KnarLL}trained with the cavalry.");
      MBList<SkillObject> effectedSkills4 = new MBList<SkillObject>();
      effectedSkills4.Add(DefaultSkills.Riding);
      effectedSkills4.Add(DefaultSkills.Polearm);
      CharacterAttribute endurance1 = DefaultCharacterAttributes.Endurance;
      int focusToAdd4 = this.FocusToAdd;
      int skillLevelToAdd4 = this.SkillLevelToAdd;
      int attributeLevelToAdd4 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition4 = new CharacterCreationOnCondition(this.YouthCavalryOnCondition);
      CharacterCreationOnSelect onSelect4 = new CharacterCreationOnSelect(this.YouthCavalryOnConsequence);
      CharacterCreationApplyFinalEffects onApply4 = new CharacterCreationApplyFinalEffects(this.YouthCavalryOnApply);
      TextObject descriptionText4 = new TextObject("{=7cHsIMLP}You could never have bought the equipment on your own, but you were a good enough rider so that the local lord lent you a horse and equipment. You joined the armored cavalry, training with the lance.");
      creationCategory.AddCategoryOption(text4, effectedSkills4, endurance1, focusToAdd4, skillLevelToAdd4, attributeLevelToAdd4, optionCondition4, onSelect4, onApply4, descriptionText4);
      TextObject text5 = new TextObject("{=zsC2t5Hb}trained with the hearth guard.");
      MBList<SkillObject> effectedSkills5 = new MBList<SkillObject>();
      effectedSkills5.Add(DefaultSkills.Riding);
      effectedSkills5.Add(DefaultSkills.Polearm);
      CharacterAttribute endurance2 = DefaultCharacterAttributes.Endurance;
      int focusToAdd5 = this.FocusToAdd;
      int skillLevelToAdd5 = this.SkillLevelToAdd;
      int attributeLevelToAdd5 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition5 = new CharacterCreationOnCondition(this.YouthHearthGuardOnCondition);
      CharacterCreationOnSelect onSelect5 = new CharacterCreationOnSelect(this.YouthHearthGuardOnConsequence);
      CharacterCreationApplyFinalEffects onApply5 = new CharacterCreationApplyFinalEffects(this.YouthHearthGuardOnApply);
      TextObject descriptionText5 = new TextObject("{=RmbWW6Bm}You were a big and imposing enough youth that the chief's guard allowed you to train alongside them, in preparation to join them some day.");
      creationCategory.AddCategoryOption(text5, effectedSkills5, endurance2, focusToAdd5, skillLevelToAdd5, attributeLevelToAdd5, optionCondition5, onSelect5, onApply5, descriptionText5);
      TextObject text6 = new TextObject("{=aTncHUfL}stood guard with the garrisons.");
      MBList<SkillObject> effectedSkills6 = new MBList<SkillObject>();
      effectedSkills6.Add(DefaultSkills.Crossbow);
      effectedSkills6.Add(DefaultSkills.Engineering);
      CharacterAttribute intelligence1 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd6 = this.FocusToAdd;
      int skillLevelToAdd6 = this.SkillLevelToAdd;
      int attributeLevelToAdd6 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition6 = new CharacterCreationOnCondition(this.YouthGarrisonOnCondition);
      CharacterCreationOnSelect onSelect6 = new CharacterCreationOnSelect(this.YouthGarrisonOnConsequence);
      CharacterCreationApplyFinalEffects onApply6 = new CharacterCreationApplyFinalEffects(this.YouthGarrisonOnApply);
      TextObject descriptionText6 = new TextObject("{=63TAYbkx}Urban troops spend much of their time guarding the town walls. Most of their training was in missile weapons, especially useful during sieges.");
      creationCategory.AddCategoryOption(text6, effectedSkills6, intelligence1, focusToAdd6, skillLevelToAdd6, attributeLevelToAdd6, optionCondition6, onSelect6, onApply6, descriptionText6);
      TextObject text7 = new TextObject("{=aTncHUfL}stood guard with the garrisons.");
      MBList<SkillObject> effectedSkills7 = new MBList<SkillObject>();
      effectedSkills7.Add(DefaultSkills.Bow);
      effectedSkills7.Add(DefaultSkills.Engineering);
      CharacterAttribute intelligence2 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd7 = this.FocusToAdd;
      int skillLevelToAdd7 = this.SkillLevelToAdd;
      int attributeLevelToAdd7 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition7 = new CharacterCreationOnCondition(this.YouthOtherGarrisonOnCondition);
      CharacterCreationOnSelect onSelect7 = new CharacterCreationOnSelect(this.YouthOtherGarrisonOnConsequence);
      CharacterCreationApplyFinalEffects onApply7 = new CharacterCreationApplyFinalEffects(this.YouthOtherGarrisonOnApply);
      TextObject descriptionText7 = new TextObject("{=1EkEElZd}Urban troops spend much of their time guarding the town walls. Most of their training was in missile weapons.");
      creationCategory.AddCategoryOption(text7, effectedSkills7, intelligence2, focusToAdd7, skillLevelToAdd7, attributeLevelToAdd7, optionCondition7, onSelect7, onApply7, descriptionText7);
      TextObject text8 = new TextObject("{=VlXOgIX6}rode with the scouts.");
      MBList<SkillObject> effectedSkills8 = new MBList<SkillObject>();
      effectedSkills8.Add(DefaultSkills.Riding);
      effectedSkills8.Add(DefaultSkills.Bow);
      CharacterAttribute endurance3 = DefaultCharacterAttributes.Endurance;
      int focusToAdd8 = this.FocusToAdd;
      int skillLevelToAdd8 = this.SkillLevelToAdd;
      int attributeLevelToAdd8 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition8 = new CharacterCreationOnCondition(this.YouthOutridersOnCondition);
      CharacterCreationOnSelect onSelect8 = new CharacterCreationOnSelect(this.YouthOutridersOnConsequence);
      CharacterCreationApplyFinalEffects onApply8 = new CharacterCreationApplyFinalEffects(this.YouthOutridersOnApply);
      TextObject descriptionText8 = new TextObject("{=888lmJqs}All of Calradia's kingdoms recognize the value of good light cavalry and horse archers, and are sure to recruit nomads and borderers with the skills to fulfill those duties. You were a good enough rider that your neighbors pitched in to buy you a small pony and a good bow so that you could fulfill their levy obligations.");
      creationCategory.AddCategoryOption(text8, effectedSkills8, endurance3, focusToAdd8, skillLevelToAdd8, attributeLevelToAdd8, optionCondition8, onSelect8, onApply8, descriptionText8);
      TextObject text9 = new TextObject("{=VlXOgIX6}rode with the scouts.");
      MBList<SkillObject> effectedSkills9 = new MBList<SkillObject>();
      effectedSkills9.Add(DefaultSkills.Riding);
      effectedSkills9.Add(DefaultSkills.Bow);
      CharacterAttribute endurance4 = DefaultCharacterAttributes.Endurance;
      int focusToAdd9 = this.FocusToAdd;
      int skillLevelToAdd9 = this.SkillLevelToAdd;
      int attributeLevelToAdd9 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition9 = new CharacterCreationOnCondition(this.YouthOtherOutridersOnCondition);
      CharacterCreationOnSelect onSelect9 = new CharacterCreationOnSelect(this.YouthOtherOutridersOnConsequence);
      CharacterCreationApplyFinalEffects onApply9 = new CharacterCreationApplyFinalEffects(this.YouthOtherOutridersOnApply);
      TextObject descriptionText9 = new TextObject("{=sYuN6hPD}All of Calradia's kingdoms recognize the value of good light cavalry, and are sure to recruit nomads and borderers with the skills to fulfill those duties. You were a good enough rider that your neighbors pitched in to buy you a small pony and a sheaf of javelins so that you could fulfill their levy obligations.");
      creationCategory.AddCategoryOption(text9, effectedSkills9, endurance4, focusToAdd9, skillLevelToAdd9, attributeLevelToAdd9, optionCondition9, onSelect9, onApply9, descriptionText9);
      TextObject text10 = new TextObject("{=a8arFSra}trained with the infantry.");
      MBList<SkillObject> effectedSkills10 = new MBList<SkillObject>();
      effectedSkills10.Add(DefaultSkills.Polearm);
      effectedSkills10.Add(DefaultSkills.OneHanded);
      CharacterAttribute vigor = DefaultCharacterAttributes.Vigor;
      int focusToAdd10 = this.FocusToAdd;
      int skillLevelToAdd10 = this.SkillLevelToAdd;
      int attributeLevelToAdd10 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect10 = new CharacterCreationOnSelect(this.YouthInfantryOnConsequence);
      CharacterCreationApplyFinalEffects onApply10 = new CharacterCreationApplyFinalEffects(this.YouthInfantryOnApply);
      TextObject descriptionText10 = new TextObject("{=afH90aNs}Levy armed with spear and shield, drawn from smallholding farmers, have always been the backbone of most armies of Calradia.");
      creationCategory.AddCategoryOption(text10, effectedSkills10, vigor, focusToAdd10, skillLevelToAdd10, attributeLevelToAdd10, (CharacterCreationOnCondition) null, onSelect10, onApply10, descriptionText10);
      TextObject text11 = new TextObject("{=oMbOIPc9}joined the skirmishers.");
      MBList<SkillObject> effectedSkills11 = new MBList<SkillObject>();
      effectedSkills11.Add(DefaultSkills.Throwing);
      effectedSkills11.Add(DefaultSkills.OneHanded);
      CharacterAttribute control1 = DefaultCharacterAttributes.Control;
      int focusToAdd11 = this.FocusToAdd;
      int skillLevelToAdd11 = this.SkillLevelToAdd;
      int attributeLevelToAdd11 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition10 = new CharacterCreationOnCondition(this.YouthSkirmisherOnCondition);
      CharacterCreationOnSelect onSelect11 = new CharacterCreationOnSelect(this.YouthSkirmisherOnConsequence);
      CharacterCreationApplyFinalEffects onApply11 = new CharacterCreationApplyFinalEffects(this.YouthSkirmisherOnApply);
      TextObject descriptionText11 = new TextObject("{=bXAg5w19}Younger recruits, or those of a slighter build, or those too poor to buy shield and armor tend to join the skirmishers. Fighting with bow and javelin, they try to stay out of reach of the main enemy forces.");
      creationCategory.AddCategoryOption(text11, effectedSkills11, control1, focusToAdd11, skillLevelToAdd11, attributeLevelToAdd11, optionCondition10, onSelect11, onApply11, descriptionText11);
      TextObject text12 = new TextObject("{=cDWbwBwI}joined the kern.");
      MBList<SkillObject> effectedSkills12 = new MBList<SkillObject>();
      effectedSkills12.Add(DefaultSkills.Throwing);
      effectedSkills12.Add(DefaultSkills.OneHanded);
      CharacterAttribute control2 = DefaultCharacterAttributes.Control;
      int focusToAdd12 = this.FocusToAdd;
      int skillLevelToAdd12 = this.SkillLevelToAdd;
      int attributeLevelToAdd12 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition11 = new CharacterCreationOnCondition(this.YouthKernOnCondition);
      CharacterCreationOnSelect onSelect12 = new CharacterCreationOnSelect(this.YouthKernOnConsequence);
      CharacterCreationApplyFinalEffects onApply12 = new CharacterCreationApplyFinalEffects(this.YouthKernOnApply);
      TextObject descriptionText12 = new TextObject("{=tTb28jyU}Many Battanians fight as kern, versatile troops who could both harass the enemy line with their javelins or join in the final screaming charge once it weakened.");
      creationCategory.AddCategoryOption(text12, effectedSkills12, control2, focusToAdd12, skillLevelToAdd12, attributeLevelToAdd12, optionCondition11, onSelect12, onApply12, descriptionText12);
      TextObject text13 = new TextObject("{=GFUggps8}marched with the camp followers.");
      MBList<SkillObject> effectedSkills13 = new MBList<SkillObject>();
      effectedSkills13.Add(DefaultSkills.Roguery);
      effectedSkills13.Add(DefaultSkills.Throwing);
      CharacterAttribute cunning4 = DefaultCharacterAttributes.Cunning;
      int focusToAdd13 = this.FocusToAdd;
      int skillLevelToAdd13 = this.SkillLevelToAdd;
      int attributeLevelToAdd13 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition12 = new CharacterCreationOnCondition(this.YouthCamperOnCondition);
      CharacterCreationOnSelect onSelect13 = new CharacterCreationOnSelect(this.YouthCamperOnConsequence);
      CharacterCreationApplyFinalEffects onApply13 = new CharacterCreationApplyFinalEffects(this.YouthCamperOnApply);
      TextObject descriptionText13 = new TextObject("{=64rWqBLN}You avoided service with one of the main forces of your realm's armies, but followed instead in the train - the troops' wives, lovers and servants, and those who make their living by caring for, entertaining, or cheating the soldiery.");
      creationCategory.AddCategoryOption(text13, effectedSkills13, cunning4, focusToAdd13, skillLevelToAdd13, attributeLevelToAdd13, optionCondition12, onSelect13, onApply13, descriptionText13);
      characterCreation.AddNewMenu(menu);
    }

    protected void AddAdulthoodMenu(CharacterCreation characterCreation)
    {
      MBTextManager.SetTextVariable("EXP_VALUE", this.SkillLevelToAdd);
      CharacterCreationMenu menu = new CharacterCreationMenu(new TextObject("{=MafIe9yI}Young Adulthood"), new TextObject("{=4WYY0X59}Before you set out for a life of adventure, your biggest achievement was..."), new CharacterCreationOnInit(this.AccomplishmentOnInit));
      CharacterCreationCategory creationCategory = menu.AddMenuCategory();
      TextObject text1 = new TextObject("{=8bwpVpgy}you defeated an enemy in battle.");
      MBList<SkillObject> effectedSkills1 = new MBList<SkillObject>();
      effectedSkills1.Add(DefaultSkills.OneHanded);
      effectedSkills1.Add(DefaultSkills.TwoHanded);
      CharacterAttribute vigor = DefaultCharacterAttributes.Vigor;
      int focusToAdd1 = this.FocusToAdd;
      int skillLevelToAdd1 = this.SkillLevelToAdd;
      int attributeLevelToAdd1 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect1 = new CharacterCreationOnSelect(this.AccomplishmentDefeatedEnemyOnConsequence);
      CharacterCreationApplyFinalEffects onApply1 = new CharacterCreationApplyFinalEffects(this.AccomplishmentDefeatedEnemyOnApply);
      TextObject descriptionText1 = new TextObject("{=1IEroJKs}Not everyone who musters for the levy marches to war, and not everyone who goes on campaign sees action. You did both, and you also took down an enemy warrior in direct one-to-one combat, in the full view of your comrades.");
      MBList<TraitObject> effectedTraits1 = new MBList<TraitObject>();
      effectedTraits1.Add(DefaultTraits.Valor);
      creationCategory.AddCategoryOption(text1, effectedSkills1, vigor, focusToAdd1, skillLevelToAdd1, attributeLevelToAdd1, (CharacterCreationOnCondition) null, onSelect1, onApply1, descriptionText1, effectedTraits1, 1, 20);
      TextObject text2 = new TextObject("{=mP3uFbcq}you led a successful manhunt.");
      MBList<SkillObject> effectedSkills2 = new MBList<SkillObject>();
      effectedSkills2.Add(DefaultSkills.Tactics);
      effectedSkills2.Add(DefaultSkills.Leadership);
      CharacterAttribute cunning1 = DefaultCharacterAttributes.Cunning;
      int focusToAdd2 = this.FocusToAdd;
      int skillLevelToAdd2 = this.SkillLevelToAdd;
      int attributeLevelToAdd2 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition1 = new CharacterCreationOnCondition(this.AccomplishmentPosseOnConditions);
      CharacterCreationOnSelect onSelect2 = new CharacterCreationOnSelect(this.AccomplishmentExpeditionOnConsequence);
      CharacterCreationApplyFinalEffects onApply2 = new CharacterCreationApplyFinalEffects(this.AccomplishmentExpeditionOnApply);
      TextObject descriptionText2 = new TextObject("{=4f5xwzX0}When your community needed to organize a posse to pursue horse thieves, you were the obvious choice. You hunted down the raiders, surrounded them and forced their surrender, and took back your stolen property.");
      MBList<TraitObject> effectedTraits2 = new MBList<TraitObject>();
      effectedTraits2.Add(DefaultTraits.Calculating);
      creationCategory.AddCategoryOption(text2, effectedSkills2, cunning1, focusToAdd2, skillLevelToAdd2, attributeLevelToAdd2, optionCondition1, onSelect2, onApply2, descriptionText2, effectedTraits2, 1, 10);
      TextObject text3 = new TextObject("{=wfbtS71d}you led a caravan.");
      MBList<SkillObject> effectedSkills3 = new MBList<SkillObject>();
      effectedSkills3.Add(DefaultSkills.Tactics);
      effectedSkills3.Add(DefaultSkills.Leadership);
      CharacterAttribute cunning2 = DefaultCharacterAttributes.Cunning;
      int focusToAdd3 = this.FocusToAdd;
      int skillLevelToAdd3 = this.SkillLevelToAdd;
      int attributeLevelToAdd3 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition2 = new CharacterCreationOnCondition(this.AccomplishmentMerchantOnCondition);
      CharacterCreationOnSelect onSelect3 = new CharacterCreationOnSelect(this.AccomplishmentMerchantOnConsequence);
      CharacterCreationApplyFinalEffects onApply3 = new CharacterCreationApplyFinalEffects(this.AccomplishmentExpeditionOnApply);
      TextObject descriptionText3 = new TextObject("{=joRHKCkm}Your family needed someone trustworthy to take a caravan to a neighboring town. You organized supplies, ensured a constant watch to keep away bandits, and brought it safely to its destination.");
      MBList<TraitObject> effectedTraits3 = new MBList<TraitObject>();
      effectedTraits3.Add(DefaultTraits.Calculating);
      creationCategory.AddCategoryOption(text3, effectedSkills3, cunning2, focusToAdd3, skillLevelToAdd3, attributeLevelToAdd3, optionCondition2, onSelect3, onApply3, descriptionText3, effectedTraits3, 1, 10);
      TextObject text4 = new TextObject("{=x1HTX5hq}you saved your village from a flood.");
      MBList<SkillObject> effectedSkills4 = new MBList<SkillObject>();
      effectedSkills4.Add(DefaultSkills.Tactics);
      effectedSkills4.Add(DefaultSkills.Leadership);
      CharacterAttribute cunning3 = DefaultCharacterAttributes.Cunning;
      int focusToAdd4 = this.FocusToAdd;
      int skillLevelToAdd4 = this.SkillLevelToAdd;
      int attributeLevelToAdd4 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition3 = new CharacterCreationOnCondition(this.AccomplishmentSavedVillageOnCondition);
      CharacterCreationOnSelect onSelect4 = new CharacterCreationOnSelect(this.AccomplishmentSavedVillageOnConsequence);
      CharacterCreationApplyFinalEffects onApply4 = new CharacterCreationApplyFinalEffects(this.AccomplishmentExpeditionOnApply);
      TextObject descriptionText4 = new TextObject("{=bWlmGDf3}When a sudden storm caused the local stream to rise suddenly, your neighbors needed quick-thinking leadership. You provided it, directing them to build levees to save their homes.");
      MBList<TraitObject> effectedTraits4 = new MBList<TraitObject>();
      effectedTraits4.Add(DefaultTraits.Calculating);
      creationCategory.AddCategoryOption(text4, effectedSkills4, cunning3, focusToAdd4, skillLevelToAdd4, attributeLevelToAdd4, optionCondition3, onSelect4, onApply4, descriptionText4, effectedTraits4, 1, 10);
      TextObject text5 = new TextObject("{=s8PNllPN}you saved your city quarter from a fire.");
      MBList<SkillObject> effectedSkills5 = new MBList<SkillObject>();
      effectedSkills5.Add(DefaultSkills.Tactics);
      effectedSkills5.Add(DefaultSkills.Leadership);
      CharacterAttribute cunning4 = DefaultCharacterAttributes.Cunning;
      int focusToAdd5 = this.FocusToAdd;
      int skillLevelToAdd5 = this.SkillLevelToAdd;
      int attributeLevelToAdd5 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition4 = new CharacterCreationOnCondition(this.AccomplishmentSavedStreetOnCondition);
      CharacterCreationOnSelect onSelect5 = new CharacterCreationOnSelect(this.AccomplishmentSavedStreetOnConsequence);
      CharacterCreationApplyFinalEffects onApply5 = new CharacterCreationApplyFinalEffects(this.AccomplishmentExpeditionOnApply);
      TextObject descriptionText5 = new TextObject("{=ZAGR6PYc}When a sudden blaze broke out in a back alley, your neighbors needed quick-thinking leadership and you provided it. You organized a bucket line to the nearest well, putting the fire out before any homes were lost.");
      MBList<TraitObject> effectedTraits5 = new MBList<TraitObject>();
      effectedTraits5.Add(DefaultTraits.Calculating);
      creationCategory.AddCategoryOption(text5, effectedSkills5, cunning4, focusToAdd5, skillLevelToAdd5, attributeLevelToAdd5, optionCondition4, onSelect5, onApply5, descriptionText5, effectedTraits5, 1, 10);
      TextObject text6 = new TextObject("{=xORjDTal}you invested some money in a workshop.");
      MBList<SkillObject> effectedSkills6 = new MBList<SkillObject>();
      effectedSkills6.Add(DefaultSkills.Trade);
      effectedSkills6.Add(DefaultSkills.Crafting);
      CharacterAttribute intelligence1 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd6 = this.FocusToAdd;
      int skillLevelToAdd6 = this.SkillLevelToAdd;
      int attributeLevelToAdd6 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition5 = new CharacterCreationOnCondition(this.AccomplishmentUrbanOnCondition);
      CharacterCreationOnSelect onSelect6 = new CharacterCreationOnSelect(this.AccomplishmentWorkshopOnConsequence);
      CharacterCreationApplyFinalEffects onApply6 = new CharacterCreationApplyFinalEffects(this.AccomplishmentWorkshopOnApply);
      TextObject descriptionText6 = new TextObject("{=PyVqDLBu}Your parents didn't give you much money, but they did leave just enough for you to secure a loan against a larger amount to build a small workshop. You paid back what you borrowed, and sold your enterprise for a profit.");
      MBList<TraitObject> effectedTraits6 = new MBList<TraitObject>();
      effectedTraits6.Add(DefaultTraits.Calculating);
      creationCategory.AddCategoryOption(text6, effectedSkills6, intelligence1, focusToAdd6, skillLevelToAdd6, attributeLevelToAdd6, optionCondition5, onSelect6, onApply6, descriptionText6, effectedTraits6, 1, 10);
      TextObject text7 = new TextObject("{=xKXcqRJI}you invested some money in land.");
      MBList<SkillObject> effectedSkills7 = new MBList<SkillObject>();
      effectedSkills7.Add(DefaultSkills.Trade);
      effectedSkills7.Add(DefaultSkills.Crafting);
      CharacterAttribute intelligence2 = DefaultCharacterAttributes.Intelligence;
      int focusToAdd7 = this.FocusToAdd;
      int skillLevelToAdd7 = this.SkillLevelToAdd;
      int attributeLevelToAdd7 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition6 = new CharacterCreationOnCondition(this.AccomplishmentRuralOnCondition);
      CharacterCreationOnSelect onSelect7 = new CharacterCreationOnSelect(this.AccomplishmentWorkshopOnConsequence);
      CharacterCreationApplyFinalEffects onApply7 = new CharacterCreationApplyFinalEffects(this.AccomplishmentWorkshopOnApply);
      TextObject descriptionText7 = new TextObject("{=cbF9jdQo}Your parents didn't give you much money, but they did leave just enough for you to purchase a plot of unused land at the edge of the village. You cleared away rocks and dug an irrigation ditch, raised a few seasons of crops, than sold it for a considerable profit.");
      MBList<TraitObject> effectedTraits7 = new MBList<TraitObject>();
      effectedTraits7.Add(DefaultTraits.Calculating);
      creationCategory.AddCategoryOption(text7, effectedSkills7, intelligence2, focusToAdd7, skillLevelToAdd7, attributeLevelToAdd7, optionCondition6, onSelect7, onApply7, descriptionText7, effectedTraits7, 1, 10);
      TextObject text8 = new TextObject("{=TbNRtUjb}you hunted a dangerous animal.");
      MBList<SkillObject> effectedSkills8 = new MBList<SkillObject>();
      effectedSkills8.Add(DefaultSkills.Polearm);
      effectedSkills8.Add(DefaultSkills.Crossbow);
      CharacterAttribute control1 = DefaultCharacterAttributes.Control;
      int focusToAdd8 = this.FocusToAdd;
      int skillLevelToAdd8 = this.SkillLevelToAdd;
      int attributeLevelToAdd8 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition7 = new CharacterCreationOnCondition(this.AccomplishmentRuralOnCondition);
      CharacterCreationOnSelect onSelect8 = new CharacterCreationOnSelect(this.AccomplishmentSiegeHunterOnConsequence);
      CharacterCreationApplyFinalEffects onApply8 = new CharacterCreationApplyFinalEffects(this.AccomplishmentSiegeHunterOnApply);
      TextObject descriptionText8 = new TextObject("{=I3PcdaaL}Wolves, bears are a constant menace to the flocks of northern Calradia, while hyenas and leopards trouble the south. You went with a group of your fellow villagers and fired the missile that brought down the beast.");
      MBList<TraitObject> effectedTraits8 = new MBList<TraitObject>();
      effectedTraits8.Add(DefaultTraits.Valor);
      creationCategory.AddCategoryOption(text8, effectedSkills8, control1, focusToAdd8, skillLevelToAdd8, attributeLevelToAdd8, optionCondition7, onSelect8, onApply8, descriptionText8, effectedTraits8, 1, 5);
      TextObject text9 = new TextObject("{=WbHfGCbd}you survived a siege.");
      MBList<SkillObject> effectedSkills9 = new MBList<SkillObject>();
      effectedSkills9.Add(DefaultSkills.Bow);
      effectedSkills9.Add(DefaultSkills.Crossbow);
      CharacterAttribute control2 = DefaultCharacterAttributes.Control;
      int focusToAdd9 = this.FocusToAdd;
      int skillLevelToAdd9 = this.SkillLevelToAdd;
      int attributeLevelToAdd9 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition8 = new CharacterCreationOnCondition(this.AccomplishmentUrbanOnCondition);
      CharacterCreationOnSelect onSelect9 = new CharacterCreationOnSelect(this.AccomplishmentSiegeHunterOnConsequence);
      CharacterCreationApplyFinalEffects onApply9 = new CharacterCreationApplyFinalEffects(this.AccomplishmentSiegeHunterOnApply);
      TextObject descriptionText9 = new TextObject("{=FhZPjhli}Your hometown was briefly placed under siege, and you were called to defend the walls. Everyone did their part to repulse the enemy assault, and everyone is justly proud of what they endured.");
      creationCategory.AddCategoryOption(text9, effectedSkills9, control2, focusToAdd9, skillLevelToAdd9, attributeLevelToAdd9, optionCondition8, onSelect9, onApply9, descriptionText9, renownToAdd: 5);
      TextObject text10 = new TextObject("{=kNXet6Um}you had a famous escapade in town.");
      MBList<SkillObject> effectedSkills10 = new MBList<SkillObject>();
      effectedSkills10.Add(DefaultSkills.Athletics);
      effectedSkills10.Add(DefaultSkills.Roguery);
      CharacterAttribute endurance1 = DefaultCharacterAttributes.Endurance;
      int focusToAdd10 = this.FocusToAdd;
      int skillLevelToAdd10 = this.SkillLevelToAdd;
      int attributeLevelToAdd10 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition9 = new CharacterCreationOnCondition(this.AccomplishmentRuralOnCondition);
      CharacterCreationOnSelect onSelect10 = new CharacterCreationOnSelect(this.AccomplishmentEscapadeOnConsequence);
      CharacterCreationApplyFinalEffects onApply10 = new CharacterCreationApplyFinalEffects(this.AccomplishmentEscapadeOnApply);
      TextObject descriptionText10 = new TextObject("{=DjeAJtix}Maybe it was a love affair, or maybe you cheated at dice, or maybe you just chose your words poorly when drinking with a dangerous crowd. Anyway, on one of your trips into town you got into the kind of trouble from which only a quick tongue or quick feet get you out alive.");
      MBList<TraitObject> effectedTraits9 = new MBList<TraitObject>();
      effectedTraits9.Add(DefaultTraits.Valor);
      creationCategory.AddCategoryOption(text10, effectedSkills10, endurance1, focusToAdd10, skillLevelToAdd10, attributeLevelToAdd10, optionCondition9, onSelect10, onApply10, descriptionText10, effectedTraits9, 1, 5);
      TextObject text11 = new TextObject("{=qlOuiKXj}you had a famous escapade.");
      MBList<SkillObject> effectedSkills11 = new MBList<SkillObject>();
      effectedSkills11.Add(DefaultSkills.Athletics);
      effectedSkills11.Add(DefaultSkills.Roguery);
      CharacterAttribute endurance2 = DefaultCharacterAttributes.Endurance;
      int focusToAdd11 = this.FocusToAdd;
      int skillLevelToAdd11 = this.SkillLevelToAdd;
      int attributeLevelToAdd11 = this.AttributeLevelToAdd;
      CharacterCreationOnCondition optionCondition10 = new CharacterCreationOnCondition(this.AccomplishmentUrbanOnCondition);
      CharacterCreationOnSelect onSelect11 = new CharacterCreationOnSelect(this.AccomplishmentEscapadeOnConsequence);
      CharacterCreationApplyFinalEffects onApply11 = new CharacterCreationApplyFinalEffects(this.AccomplishmentEscapadeOnApply);
      TextObject descriptionText11 = new TextObject("{=lD5Ob3R4}Maybe it was a love affair, or maybe you cheated at dice, or maybe you just chose your words poorly when drinking with a dangerous crowd. Anyway, you got into the kind of trouble from which only a quick tongue or quick feet get you out alive.");
      MBList<TraitObject> effectedTraits10 = new MBList<TraitObject>();
      effectedTraits10.Add(DefaultTraits.Valor);
      creationCategory.AddCategoryOption(text11, effectedSkills11, endurance2, focusToAdd11, skillLevelToAdd11, attributeLevelToAdd11, optionCondition10, onSelect11, onApply11, descriptionText11, effectedTraits10, 1, 5);
      TextObject text12 = new TextObject("{=Yqm0Dics}you treated people well.");
      MBList<SkillObject> effectedSkills12 = new MBList<SkillObject>();
      effectedSkills12.Add(DefaultSkills.Charm);
      effectedSkills12.Add(DefaultSkills.Steward);
      CharacterAttribute social = DefaultCharacterAttributes.Social;
      int focusToAdd12 = this.FocusToAdd;
      int skillLevelToAdd12 = this.SkillLevelToAdd;
      int attributeLevelToAdd12 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect12 = new CharacterCreationOnSelect(this.AccomplishmentTreaterOnConsequence);
      CharacterCreationApplyFinalEffects onApply12 = new CharacterCreationApplyFinalEffects(this.AccomplishmentTreaterOnApply);
      TextObject descriptionText12 = new TextObject("{=dDmcqTzb}Yours wasn't the kind of reputation that local legends are made of, but it was the kind that wins you respect among those around you. You were consistently fair and honest in your business dealings and helpful to those in trouble. In doing so, you got a sense of what made people tick.");
      MBList<TraitObject> effectedTraits11 = new MBList<TraitObject>();
      effectedTraits11.Add(DefaultTraits.Mercy);
      effectedTraits11.Add(DefaultTraits.Generosity);
      effectedTraits11.Add(DefaultTraits.Honor);
      creationCategory.AddCategoryOption(text12, effectedSkills12, social, focusToAdd12, skillLevelToAdd12, attributeLevelToAdd12, (CharacterCreationOnCondition) null, onSelect12, onApply12, descriptionText12, effectedTraits11, 1, 5);
      characterCreation.AddNewMenu(menu);
    }

    protected void AddEscapeMenu(CharacterCreation characterCreation)
    {
      MBTextManager.SetTextVariable("EXP_VALUE", this.SkillLevelToAdd);
      CharacterCreationMenu menu = new CharacterCreationMenu(new TextObject("{=peNBA0WW}Story Background"), new TextObject("{=jg3T5AyE}Like many families in Calradia, your life was upended by war. Your home was ravaged by the passage of army after army. Eventually, you sold your property and set off with your father, mother, brother, and your two younger siblings to a new town you'd heard was safer. But you did not make it. Along the way, the inn at which you were staying was attacked by raiders. Your parents were slain and your two youngest siblings seized, but you and your brother survived because..."), new CharacterCreationOnInit(this.EscapeOnInit));
      CharacterCreationCategory creationCategory = menu.AddMenuCategory();
      TextObject text1 = new TextObject("{=6vCHovVH}you subdued a raider.");
      MBList<SkillObject> effectedSkills1 = new MBList<SkillObject>();
      effectedSkills1.Add(DefaultSkills.OneHanded);
      effectedSkills1.Add(DefaultSkills.Athletics);
      CharacterAttribute vigor = DefaultCharacterAttributes.Vigor;
      int focusToAdd1 = this.FocusToAdd;
      int skillLevelToAdd1 = this.SkillLevelToAdd;
      int attributeLevelToAdd1 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect1 = new CharacterCreationOnSelect(this.EscapeSubdueRaiderOnConsequence);
      CharacterCreationApplyFinalEffects onApply1 = new CharacterCreationApplyFinalEffects(this.EscapeSubdueRaiderOnApply);
      TextObject descriptionText1 = new TextObject("{=CvBoRaFv}You were able to grab a knife in the confusion of the attack. You stabbed a raider blocking your way.");
      creationCategory.AddCategoryOption(text1, effectedSkills1, vigor, focusToAdd1, skillLevelToAdd1, attributeLevelToAdd1, (CharacterCreationOnCondition) null, onSelect1, onApply1, descriptionText1);
      TextObject text2 = new TextObject("{=2XhW49TX}you drove them off with arrows.");
      MBList<SkillObject> effectedSkills2 = new MBList<SkillObject>();
      effectedSkills2.Add(DefaultSkills.Bow);
      effectedSkills2.Add(DefaultSkills.Tactics);
      CharacterAttribute control = DefaultCharacterAttributes.Control;
      int focusToAdd2 = this.FocusToAdd;
      int skillLevelToAdd2 = this.SkillLevelToAdd;
      int attributeLevelToAdd2 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect2 = new CharacterCreationOnSelect(this.EscapeDrawArrowsOnConsequence);
      CharacterCreationApplyFinalEffects onApply2 = new CharacterCreationApplyFinalEffects(this.EscapeDrawArrowsOnApply);
      TextObject descriptionText2 = new TextObject("{=ccf67J3J}You grabbed a bow and sent a few arrows the raiders' way. They took cover, giving you the opportunity to flee with your brother.");
      creationCategory.AddCategoryOption(text2, effectedSkills2, control, focusToAdd2, skillLevelToAdd2, attributeLevelToAdd2, (CharacterCreationOnCondition) null, onSelect2, onApply2, descriptionText2);
      TextObject text3 = new TextObject("{=gOI8lKcl}you rode off on a fast horse.");
      MBList<SkillObject> effectedSkills3 = new MBList<SkillObject>();
      effectedSkills3.Add(DefaultSkills.Riding);
      effectedSkills3.Add(DefaultSkills.Scouting);
      CharacterAttribute endurance = DefaultCharacterAttributes.Endurance;
      int focusToAdd3 = this.FocusToAdd;
      int skillLevelToAdd3 = this.SkillLevelToAdd;
      int attributeLevelToAdd3 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect3 = new CharacterCreationOnSelect(this.EscapeFastHorseOnConsequence);
      CharacterCreationApplyFinalEffects onApply3 = new CharacterCreationApplyFinalEffects(this.EscapeFastHorseOnApply);
      TextObject descriptionText3 = new TextObject("{=cepWNzEA}Jumping on the two remaining horses in the inn's burning stable, you and your brother broke out of the encircling raiders and rode off.");
      creationCategory.AddCategoryOption(text3, effectedSkills3, endurance, focusToAdd3, skillLevelToAdd3, attributeLevelToAdd3, (CharacterCreationOnCondition) null, onSelect3, onApply3, descriptionText3);
      TextObject text4 = new TextObject("{=EdUppdLZ}you tricked the raiders.");
      MBList<SkillObject> effectedSkills4 = new MBList<SkillObject>();
      effectedSkills4.Add(DefaultSkills.Roguery);
      effectedSkills4.Add(DefaultSkills.Tactics);
      CharacterAttribute cunning = DefaultCharacterAttributes.Cunning;
      int focusToAdd4 = this.FocusToAdd;
      int skillLevelToAdd4 = this.SkillLevelToAdd;
      int attributeLevelToAdd4 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect4 = new CharacterCreationOnSelect(this.EscapeRoadOffWithBrotherOnConsequence);
      CharacterCreationApplyFinalEffects onApply4 = new CharacterCreationApplyFinalEffects(this.EscapeRoadOffWithBrotherOnApply);
      TextObject descriptionText4 = new TextObject("{=ZqOvtLBM}In the confusion of the attack you shouted that someone had found treasure in the back room. You then made your way out of the undefended entrance with your brother.");
      creationCategory.AddCategoryOption(text4, effectedSkills4, cunning, focusToAdd4, skillLevelToAdd4, attributeLevelToAdd4, (CharacterCreationOnCondition) null, onSelect4, onApply4, descriptionText4);
      TextObject text5 = new TextObject("{=qhAhPWdp}you organized the travelers to break out.");
      MBList<SkillObject> effectedSkills5 = new MBList<SkillObject>();
      effectedSkills5.Add(DefaultSkills.Leadership);
      effectedSkills5.Add(DefaultSkills.Charm);
      CharacterAttribute social = DefaultCharacterAttributes.Social;
      int focusToAdd5 = this.FocusToAdd;
      int skillLevelToAdd5 = this.SkillLevelToAdd;
      int attributeLevelToAdd5 = this.AttributeLevelToAdd;
      CharacterCreationOnSelect onSelect5 = new CharacterCreationOnSelect(this.EscapeOrganizeTravellersOnConsequence);
      CharacterCreationApplyFinalEffects onApply5 = new CharacterCreationApplyFinalEffects(this.EscapeOrganizeTravellersOnApply);
      TextObject descriptionText5 = new TextObject("{=Lmfi0cYk}You encouraged the few travellers in the inn to break out in a coordinated fashion. Raiders killed or captured most but you and your brother were able to escape.");
      creationCategory.AddCategoryOption(text5, effectedSkills5, social, focusToAdd5, skillLevelToAdd5, attributeLevelToAdd5, (CharacterCreationOnCondition) null, onSelect5, onApply5, descriptionText5);
      characterCreation.AddNewMenu(menu);
    }

    protected void ParentsOnInit(CharacterCreation characterCreation)
    {
      characterCreation.IsPlayerAlone = false;
      characterCreation.HasSecondaryCharacter = false;
      this.ClearMountEntity(characterCreation);
      characterCreation.ClearFaceGenPrefab();
      if (this.PlayerBodyProperties != CharacterObject.PlayerCharacter.GetBodyProperties(CharacterObject.PlayerCharacter.Equipment, -1))
      {
        this.PlayerBodyProperties = CharacterObject.PlayerCharacter.GetBodyProperties(CharacterObject.PlayerCharacter.Equipment, -1);
        BodyProperties motherBodyProperties = this.PlayerBodyProperties;
        BodyProperties fatherBodyProperties = this.PlayerBodyProperties;
        FaceGen.GenerateParentKey(this.PlayerBodyProperties, CharacterObject.PlayerCharacter.Race, ref motherBodyProperties, ref fatherBodyProperties);
        motherBodyProperties = new BodyProperties(new DynamicBodyProperties(33f, 0.3f, 0.2f), motherBodyProperties.StaticProperties);
        fatherBodyProperties = new BodyProperties(new DynamicBodyProperties(33f, 0.5f, 0.5f), fatherBodyProperties.StaticProperties);
        this.MotherFacegenCharacter = new FaceGenChar(motherBodyProperties, CharacterObject.PlayerCharacter.Race, new Equipment(), true, "anim_mother_1");
        this.FatherFacegenCharacter = new FaceGenChar(fatherBodyProperties, CharacterObject.PlayerCharacter.Race, new Equipment(), false, "anim_father_1");
      }
      characterCreation.ChangeFaceGenChars(new List<FaceGenChar>()
      {
        this.MotherFacegenCharacter,
        this.FatherFacegenCharacter
      });
      this.ChangeParentsOutfit(characterCreation);
      this.ChangeParentsAnimation(characterCreation);
    }

    protected void ChangeParentsOutfit(
      CharacterCreation characterCreation,
      string fatherItemId = "",
      string motherItemId = "",
      bool isLeftHandItemForFather = true,
      bool isLeftHandItemForMother = true)
    {
      characterCreation.ClearFaceGenPrefab();
      List<Equipment> equipmentList = new List<Equipment>();
      Equipment equipment1 = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>("mother_char_creation_" + (object) this.SelectedParentType + "_" + this.GetSelectedCulture().StringId)?.DefaultEquipment ?? MBEquipmentRoster.EmptyEquipment;
      Equipment equipment2 = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>("father_char_creation_" + (object) this.SelectedParentType + "_" + this.GetSelectedCulture().StringId)?.DefaultEquipment ?? MBEquipmentRoster.EmptyEquipment;
      Monster baseMonsterFromRace = FaceGen.GetBaseMonsterFromRace(characterCreation.FaceGenChars[0].Race);
      if (motherItemId != "")
      {
        ItemObject itemObject = Game.Current.ObjectManager.GetObject<ItemObject>(motherItemId);
        if (itemObject != null)
          equipment1.AddEquipmentToSlotWithoutAgent(isLeftHandItemForMother ? EquipmentIndex.WeaponItemBeginSlot : EquipmentIndex.Weapon1, new EquipmentElement(itemObject));
        else
          characterCreation.ChangeCharacterPrefab(motherItemId, isLeftHandItemForMother ? baseMonsterFromRace.MainHandItemBoneIndex : baseMonsterFromRace.OffHandItemBoneIndex);
      }
      if (fatherItemId != "")
      {
        ItemObject itemObject = Game.Current.ObjectManager.GetObject<ItemObject>(fatherItemId);
        if (itemObject != null)
          equipment2.AddEquipmentToSlotWithoutAgent(isLeftHandItemForFather ? EquipmentIndex.WeaponItemBeginSlot : EquipmentIndex.Weapon1, new EquipmentElement(itemObject));
      }
      equipmentList.Add(equipment1);
      equipmentList.Add(equipment2);
      characterCreation.ChangeCharactersEquipment(equipmentList);
    }

    protected void ChangeParentsAnimation(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "anim_mother_" + (object) this.SelectedParentType,
        "anim_father_" + (object) this.SelectedParentType
      });
    }

    protected void SetParentAndOccupationType(
      CharacterCreation characterCreation,
      int parentType,
      StoryModeCharacterCreationContent.OccupationTypes occupationType,
      string fatherItemId = "",
      string motherItemId = "",
      bool isLeftHandItemForFather = true,
      bool isLeftHandItemForMother = true)
    {
      this.SelectedParentType = parentType;
      this._familyOccupationType = occupationType;
      characterCreation.ChangeFaceGenChars(new List<FaceGenChar>()
      {
        this.MotherFacegenCharacter,
        this.FatherFacegenCharacter
      });
      this.ChangeParentsAnimation(characterCreation);
      this.ChangeParentsOutfit(characterCreation, fatherItemId, motherItemId, isLeftHandItemForFather, isLeftHandItemForMother);
    }

    protected void EmpireLandlordsRetainerOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 1, StoryModeCharacterCreationContent.OccupationTypes.Retainer);
    }

    protected void EmpireMerchantOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 2, StoryModeCharacterCreationContent.OccupationTypes.Merchant);
    }

    protected void EmpireFreeholderOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 3, StoryModeCharacterCreationContent.OccupationTypes.Farmer);
    }

    protected void EmpireArtisanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 4, StoryModeCharacterCreationContent.OccupationTypes.Artisan);
    }

    protected void EmpireWoodsmanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 5, StoryModeCharacterCreationContent.OccupationTypes.Hunter);
    }

    protected void EmpireVagabondOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 6, StoryModeCharacterCreationContent.OccupationTypes.Vagabond);
    }

    protected void EmpireLandlordsRetainerOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void EmpireMerchantOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void EmpireFreeholderOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void EmpireArtisanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void EmpireWoodsmanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void EmpireVagabondOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void VlandiaBaronsRetainerOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 1, StoryModeCharacterCreationContent.OccupationTypes.Retainer);
    }

    protected void VlandiaMerchantOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 2, StoryModeCharacterCreationContent.OccupationTypes.Merchant);
    }

    protected void VlandiaYeomanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 3, StoryModeCharacterCreationContent.OccupationTypes.Farmer);
    }

    protected void VlandiaBlacksmithOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 4, StoryModeCharacterCreationContent.OccupationTypes.Artisan);
    }

    protected void VlandiaHunterOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 5, StoryModeCharacterCreationContent.OccupationTypes.Hunter);
    }

    protected void VlandiaMercenaryOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 6, StoryModeCharacterCreationContent.OccupationTypes.Mercenary);
    }

    protected void VlandiaBaronsRetainerOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void VlandiaMerchantOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void VlandiaYeomanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void VlandiaBlacksmithOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void VlandiaHunterOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void VlandiaMercenaryOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void SturgiaBoyarsCompanionOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 1, StoryModeCharacterCreationContent.OccupationTypes.Retainer);
    }

    protected void SturgiaTraderOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 2, StoryModeCharacterCreationContent.OccupationTypes.Merchant);
    }

    protected void SturgiaFreemanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 3, StoryModeCharacterCreationContent.OccupationTypes.Farmer);
    }

    protected void SturgiaArtisanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 4, StoryModeCharacterCreationContent.OccupationTypes.Artisan);
    }

    protected void SturgiaHunterOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 5, StoryModeCharacterCreationContent.OccupationTypes.Hunter);
    }

    protected void SturgiaVagabondOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 6, StoryModeCharacterCreationContent.OccupationTypes.Vagabond);
    }

    protected void SturgiaBoyarsCompanionOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void SturgiaTraderOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void SturgiaFreemanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void SturgiaArtisanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void SturgiaHunterOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void SturgiaVagabondOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void AseraiTribesmanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 1, StoryModeCharacterCreationContent.OccupationTypes.Retainer);
    }

    protected void AseraiWariorSlaveOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 2, StoryModeCharacterCreationContent.OccupationTypes.Mercenary);
    }

    protected void AseraiMerchantOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 3, StoryModeCharacterCreationContent.OccupationTypes.Merchant);
    }

    protected void AseraiOasisFarmerOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 4, StoryModeCharacterCreationContent.OccupationTypes.Farmer);
    }

    protected void AseraiBedouinOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 5, StoryModeCharacterCreationContent.OccupationTypes.Herder);
    }

    protected void AseraiBackAlleyThugOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 6, StoryModeCharacterCreationContent.OccupationTypes.Artisan);
    }

    protected void AseraiTribesmanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void AseraiWariorSlaveOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void AseraiMerchantOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void AseraiOasisFarmerOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void AseraiBedouinOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void AseraiBackAlleyThugOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void BattaniaChieftainsHearthguardOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 1, StoryModeCharacterCreationContent.OccupationTypes.Retainer);
    }

    protected void BattaniaHealerOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 2, StoryModeCharacterCreationContent.OccupationTypes.Healer);
    }

    protected void BattaniaTribesmanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 3, StoryModeCharacterCreationContent.OccupationTypes.Farmer);
    }

    protected void BattaniaSmithOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 4, StoryModeCharacterCreationContent.OccupationTypes.Artisan);
    }

    protected void BattaniaWoodsmanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 5, StoryModeCharacterCreationContent.OccupationTypes.Hunter);
    }

    protected void BattaniaBardOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 6, StoryModeCharacterCreationContent.OccupationTypes.Bard);
    }

    protected void BattaniaChieftainsHearthguardOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void BattaniaHealerOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void BattaniaTribesmanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void BattaniaSmithOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void BattaniaWoodsmanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void BattaniaBardOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void KhuzaitNoyansKinsmanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 1, StoryModeCharacterCreationContent.OccupationTypes.Retainer);
    }

    protected void KhuzaitMerchantOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 2, StoryModeCharacterCreationContent.OccupationTypes.Merchant);
    }

    protected void KhuzaitTribesmanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 3, StoryModeCharacterCreationContent.OccupationTypes.Herder);
    }

    protected void KhuzaitFarmerOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 4, StoryModeCharacterCreationContent.OccupationTypes.Farmer);
    }

    protected void KhuzaitShamanOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 5, StoryModeCharacterCreationContent.OccupationTypes.Healer);
    }

    protected void KhuzaitNomadOnConsequence(CharacterCreation characterCreation)
    {
      this.SetParentAndOccupationType(characterCreation, 6, StoryModeCharacterCreationContent.OccupationTypes.Herder);
    }

    protected void KhuzaitNoyansKinsmanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void KhuzaitMerchantOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void KhuzaitTribesmanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void KhuzaitFarmerOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void KhuzaitShamanOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected void KhuzaitNomadOnApply(CharacterCreation characterCreation)
    {
      this.FinalizeParents();
    }

    protected bool EmpireParentsOnCondition() => this.GetSelectedCulture().StringId == "empire";

    protected bool VlandianParentsOnCondition() => this.GetSelectedCulture().StringId == "vlandia";

    protected bool SturgianParentsOnCondition() => this.GetSelectedCulture().StringId == "sturgia";

    protected bool AseraiParentsOnCondition() => this.GetSelectedCulture().StringId == "aserai";

    protected bool BattanianParentsOnCondition()
    {
      return this.GetSelectedCulture().StringId == "battania";
    }

    protected bool KhuzaitParentsOnCondition() => this.GetSelectedCulture().StringId == "khuzait";

    protected void FinalizeParents()
    {
      CharacterObject character1 = Game.Current.ObjectManager.GetObject<CharacterObject>("main_hero_mother");
      CharacterObject character2 = Game.Current.ObjectManager.GetObject<CharacterObject>("main_hero_father");
      CharacterObject characterObject = StoryModeHeroes.ElderBrother.CharacterObject;
      character1.HeroObject.ModifyPlayersFamilyAppearance(this.MotherFacegenCharacter.BodyProperties.StaticProperties);
      character2.HeroObject.ModifyPlayersFamilyAppearance(this.FatherFacegenCharacter.BodyProperties.StaticProperties);
      character1.HeroObject.Weight = this.MotherFacegenCharacter.BodyProperties.Weight;
      character1.HeroObject.Build = this.MotherFacegenCharacter.BodyProperties.Build;
      character2.HeroObject.Weight = this.FatherFacegenCharacter.BodyProperties.Weight;
      character2.HeroObject.Build = this.FatherFacegenCharacter.BodyProperties.Build;
      EquipmentHelper.AssignHeroEquipmentFromEquipment(character1.HeroObject, this.MotherFacegenCharacter.Equipment);
      EquipmentHelper.AssignHeroEquipmentFromEquipment(character2.HeroObject, this.FatherFacegenCharacter.Equipment);
      EquipmentHelper.AssignHeroEquipmentFromEquipment(characterObject.HeroObject, characterObject.Equipment);
      character1.Culture = Hero.MainHero.Culture;
      character2.Culture = Hero.MainHero.Culture;
      characterObject.Culture = Hero.MainHero.Culture;
      StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter);
      TextObject text1 = GameTexts.FindText("str_player_little_brother_name", Hero.MainHero.Culture.StringId);
      StoryModeHeroes.LittleBrother.SetName(text1, text1);
      StoryModeHeroes.LittleBrother.SetHasMet();
      TextObject parent1 = new TextObject("{=h68qCoz3}{PLAYER_LITTLE_BROTHER.NAME} is the little brother of {PLAYER.LINK}. He has been abducted by bandits, who intend to sell him into slavery.");
      StringHelpers.SetCharacterProperties("PLAYER_LITTLE_BROTHER", StoryModeHeroes.LittleBrother.CharacterObject, parent1);
      StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent1);
      StoryModeHeroes.LittleBrother.EncyclopediaText = parent1;
      TextObject text2 = GameTexts.FindText("str_player_little_sister_name", Hero.MainHero.Culture.StringId);
      StoryModeHeroes.LittleSister.SetName(text2, text2);
      StoryModeHeroes.LittleSister.SetHasMet();
      TextObject parent2 = new TextObject("{=epB0x816}{PLAYER_LITTLE_SISTER.NAME} is the little sister of {PLAYER.LINK}. She has been abducted by bandits, who intend to sell her into slavery.");
      StringHelpers.SetCharacterProperties("PLAYER_LITTLE_SISTER", StoryModeHeroes.LittleSister.CharacterObject, parent2);
      StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent2);
      StoryModeHeroes.LittleSister.EncyclopediaText = parent2;
      TextObject text3 = GameTexts.FindText("str_player_father_name", Hero.MainHero.Culture.StringId);
      character2.HeroObject.SetName(text3, text3);
      TextObject parent3 = new TextObject("{=XmvaRfLM}{PLAYER_FATHER.NAME} was the father of {PLAYER.LINK}. He was slain when raiders attacked the inn at which his family was staying.");
      StringHelpers.SetCharacterProperties("PLAYER_FATHER", character2, parent3);
      StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent3);
      character2.HeroObject.EncyclopediaText = parent3;
      TextObject text4 = GameTexts.FindText("str_player_mother_name", Hero.MainHero.Culture.StringId);
      character1.HeroObject.SetName(text4, text4);
      TextObject parent4 = new TextObject("{=hrhvEWP8}{PLAYER_MOTHER.NAME} was the mother of {PLAYER.LINK}. She was slain when raiders attacked the inn at which her family was staying.");
      StringHelpers.SetCharacterProperties("PLAYER_MOTHER", character1, parent4);
      StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent4);
      character1.HeroObject.EncyclopediaText = parent4;
      TextObject text5 = GameTexts.FindText("str_player_brother_name", Hero.MainHero.Culture.StringId);
      characterObject.HeroObject.SetName(text5, text5);
      TextObject parent5 = new TextObject("{=bsWSecYa}{PLAYER_BROTHER.NAME} is the elder brother of {PLAYER.LINK}. He has gone in search of the family's two youngest siblings, {PLAYER_LITTLE_BROTHER.NAME} and {PLAYER_LITTLE_SISTER.NAME}.");
      StringHelpers.SetCharacterProperties("PLAYER_BROTHER", characterObject, parent5);
      StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent5);
      StringHelpers.SetCharacterProperties("PLAYER_LITTLE_BROTHER", StoryModeHeroes.LittleBrother.CharacterObject, parent5);
      StringHelpers.SetCharacterProperties("PLAYER_LITTLE_SISTER", StoryModeHeroes.LittleSister.CharacterObject, parent5);
      characterObject.HeroObject.EncyclopediaText = parent5;
      character1.HeroObject.UpdateHomeSettlement();
      character2.HeroObject.UpdateHomeSettlement();
      characterObject.HeroObject.UpdateHomeSettlement();
      character1.HeroObject.SetHasMet();
      character2.HeroObject.SetHasMet();
      characterObject.HeroObject.SetHasMet();
    }

    protected List<FaceGenChar> ChangePlayerFaceWithAge(float age, string actionName = "act_childhood_schooled")
    {
      List<FaceGenChar> faceGenCharList = new List<FaceGenChar>();
      BodyProperties originalBodyProperties = CharacterObject.PlayerCharacter.GetBodyProperties(CharacterObject.PlayerCharacter.Equipment, -1);
      originalBodyProperties = FaceGen.GetBodyPropertiesWithAge(ref originalBodyProperties, age);
      faceGenCharList.Add(new FaceGenChar(originalBodyProperties, CharacterObject.PlayerCharacter.Race, new Equipment(), CharacterObject.PlayerCharacter.IsFemale, actionName));
      return faceGenCharList;
    }

    protected Equipment ChangePlayerOutfit(CharacterCreation characterCreation, string outfit)
    {
      List<Equipment> equipmentList = new List<Equipment>();
      Equipment defaultEquipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>(outfit)?.DefaultEquipment;
      if (defaultEquipment == null)
      {
        Debug.FailedAssert("item shouldn't be null!", "C:\\Develop\\MB3\\Source\\Bannerlord\\StoryMode\\CharacterCreationContent\\StoryModeCharacterCreationContent.cs", nameof (ChangePlayerOutfit), 1036);
        defaultEquipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>("player_char_creation_default").DefaultEquipment;
      }
      equipmentList.Add(defaultEquipment);
      characterCreation.ChangeCharactersEquipment(equipmentList);
      return defaultEquipment;
    }

    protected void ChangePlayerMount(CharacterCreation characterCreation, Hero hero)
    {
      if (!hero.CharacterObject.HasMount())
        return;
      FaceGenMount newMount = new FaceGenMount(MountCreationKey.GetRandomMountKey(hero.CharacterObject.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, hero.CharacterObject.GetMountKeySeed()), hero.CharacterObject.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, hero.CharacterObject.Equipment[EquipmentIndex.HorseHarness].Item, "act_horse_stand_1");
      characterCreation.SetFaceGenMount(newMount);
    }

    protected void ClearMountEntity(CharacterCreation characterCreation)
    {
      characterCreation.ClearFaceGenMounts();
    }

    protected void ClearCharacters(CharacterCreation characterCreation)
    {
      characterCreation.ClearFaceGenChars();
    }

    protected void ChildhoodOnInit(CharacterCreation characterCreation)
    {
      characterCreation.IsPlayerAlone = true;
      characterCreation.HasSecondaryCharacter = false;
      characterCreation.ClearFaceGenPrefab();
      characterCreation.ChangeFaceGenChars(this.ChangePlayerFaceWithAge((float) this.ChildhoodAge));
      string outfit = "player_char_creation_childhood_age_" + this.GetSelectedCulture().StringId + "_" + (object) this.SelectedParentType + (Hero.MainHero.IsFemale ? "_f" : "_m");
      this.ChangePlayerOutfit(characterCreation, outfit);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_schooled"
      });
      this.ClearMountEntity(characterCreation);
    }

    protected void ChildhoodYourLeadershipSkillsOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_leader"
      });
    }

    protected void ChildhoodYourBrawnOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_athlete"
      });
    }

    protected void ChildhoodAttentionToDetailOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_memory"
      });
    }

    protected void ChildhoodAptitudeForNumbersOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_numbers"
      });
    }

    protected void ChildhoodWayWithPeopleOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_manners"
      });
    }

    protected void ChildhoodSkillsWithHorsesOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_animals"
      });
    }

    protected void ChildhoodGoodLeadingOnApply(CharacterCreation characterCreation)
    {
    }

    protected void ChildhoodGoodAthleticsOnApply(CharacterCreation characterCreation)
    {
    }

    protected void ChildhoodGoodMemoryOnApply(CharacterCreation characterCreation)
    {
    }

    protected void ChildhoodGoodMathOnApply(CharacterCreation characterCreation)
    {
    }

    protected void ChildhoodGoodMannersOnApply(CharacterCreation characterCreation)
    {
    }

    protected void ChildhoodAffinityWithAnimalsOnApply(CharacterCreation characterCreation)
    {
    }

    protected void EducationOnInit(CharacterCreation characterCreation)
    {
      characterCreation.IsPlayerAlone = true;
      characterCreation.HasSecondaryCharacter = false;
      characterCreation.ClearFaceGenPrefab();
      TextObject textObject1 = new TextObject("{=WYvnWcXQ}Like all village children you helped out in the fields. You also...");
      TextObject textObject2 = new TextObject("{=DsCkf6Pb}Growing up, you spent most of your time...");
      this._educationIntroductoryText.SetTextVariable("EDUCATION_INTRO", this.RuralType() ? textObject1 : textObject2);
      characterCreation.ChangeFaceGenChars(this.ChangePlayerFaceWithAge((float) this.EducationAge));
      string outfit = "player_char_creation_education_age_" + this.GetSelectedCulture().StringId + "_" + (object) this.SelectedParentType + (Hero.MainHero.IsFemale ? "_f" : "_m");
      this.ChangePlayerOutfit(characterCreation, outfit);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_schooled"
      });
      this.ClearMountEntity(characterCreation);
    }

    protected bool RuralType()
    {
      return this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Retainer || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Farmer || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Hunter || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Bard || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Herder || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Vagabond || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Healer || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Artisan;
    }

    protected bool RichParents()
    {
      return this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Retainer || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Merchant;
    }

    protected bool RuralChildhoodOnCondition() => this.RuralType();

    protected bool UrbanChildhoodOnCondition() => !this.RuralType();

    protected bool RuralAdolescenceOnCondition() => this.RuralType();

    protected bool UrbanAdolescenceOnCondition() => !this.RuralType();

    protected bool UrbanRichAdolescenceOnCondition() => !this.RuralType() && this.RichParents();

    protected bool UrbanPoorAdolescenceOnCondition() => !this.RuralType() && !this.RichParents();

    protected void RefreshPropsAndClothing(
      CharacterCreation characterCreation,
      bool isChildhoodStage,
      string itemId,
      bool isLeftHand,
      string secondItemId = "")
    {
      characterCreation.ClearFaceGenPrefab();
      characterCreation.ClearCharactersEquipment();
      string str;
      if (!isChildhoodStage)
        str = "player_char_creation_education_age_" + this.GetSelectedCulture().StringId + "_" + (object) this.SelectedParentType;
      else
        str = "player_char_creation_childhood_age_" + this.GetSelectedCulture().StringId + "_" + (object) this.SelectedParentType;
      string outfit = str + (Hero.MainHero.IsFemale ? "_f" : "_m");
      Equipment equipment = this.ChangePlayerOutfit(characterCreation, outfit).Clone();
      if (Game.Current.ObjectManager.GetObject<ItemObject>(itemId) != null)
      {
        ItemObject itemObject1 = Game.Current.ObjectManager.GetObject<ItemObject>(itemId);
        equipment.AddEquipmentToSlotWithoutAgent(isLeftHand ? EquipmentIndex.WeaponItemBeginSlot : EquipmentIndex.Weapon1, new EquipmentElement(itemObject1));
        if (secondItemId != "")
        {
          ItemObject itemObject2 = Game.Current.ObjectManager.GetObject<ItemObject>(secondItemId);
          equipment.AddEquipmentToSlotWithoutAgent(isLeftHand ? EquipmentIndex.Weapon1 : EquipmentIndex.WeaponItemBeginSlot, new EquipmentElement(itemObject2));
        }
      }
      else
      {
        Monster baseMonsterFromRace = FaceGen.GetBaseMonsterFromRace(characterCreation.FaceGenChars[0].Race);
        characterCreation.ChangeCharacterPrefab(itemId, isLeftHand ? baseMonsterFromRace.MainHandItemBoneIndex : baseMonsterFromRace.OffHandItemBoneIndex);
      }
      characterCreation.ChangeCharactersEquipment(new List<Equipment>()
      {
        equipment
      });
    }

    protected void RuralAdolescenceHerderOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_streets"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "carry_bostaff_rogue1", true);
    }

    protected void RuralAdolescenceSmithyOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_militia"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "peasant_hammer_1_t1", true);
    }

    protected void RuralAdolescenceRepairmanOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_grit"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "carry_hammer", true);
    }

    protected void RuralAdolescenceGathererOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_peddlers"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "_to_carry_bd_basket_a", true);
    }

    protected void RuralAdolescenceHunterOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_sharp"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "composite_bow", true);
    }

    protected void RuralAdolescenceHelperOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_manners"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "", true);
    }

    protected void UrbanAdolescenceWatcherOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_fox"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "", true);
    }

    protected void UrbanAdolescenceMarketerOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_manners"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "", true);
    }

    protected void UrbanAdolescencePreacherOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_leader"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "", true);
    }

    protected void UrbanAdolescenceGangerOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_athlete"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "", true);
    }

    protected void UrbanAdolescenceDockerOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_peddlers"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "_to_carry_bd_basket_a", true);
    }

    protected void UrbanAdolescenceHorserOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_peddlers_2"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "_to_carry_bd_fabric_c", true);
    }

    protected void UrbanAdolescenceTutorOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_book"
      });
      this.RefreshPropsAndClothing(characterCreation, false, "character_creation_notebook", false);
    }

    protected void RuralAdolescenceHerderOnApply(CharacterCreation characterCreation)
    {
    }

    protected void RuralAdolescenceSmithyOnApply(CharacterCreation characterCreation)
    {
    }

    protected void RuralAdolescenceRepairmanOnApply(CharacterCreation characterCreation)
    {
    }

    protected void RuralAdolescenceGathererOnApply(CharacterCreation characterCreation)
    {
    }

    protected void RuralAdolescenceHunterOnApply(CharacterCreation characterCreation)
    {
    }

    protected void RuralAdolescenceHelperOnApply(CharacterCreation characterCreation)
    {
    }

    protected void UrbanAdolescenceWatcherOnApply(CharacterCreation characterCreation)
    {
    }

    protected void UrbanAdolescenceMarketerOnApply(CharacterCreation characterCreation)
    {
    }

    protected void UrbanAdolescencePreacherOnApply(CharacterCreation characterCreation)
    {
    }

    protected void UrbanAdolescenceGangerOnApply(CharacterCreation characterCreation)
    {
    }

    protected void UrbanAdolescenceDockerOnApply(CharacterCreation characterCreation)
    {
    }

    protected void UrbanAdolescenceTutorOnApply(CharacterCreation characterCreation)
    {
    }

    protected void YouthOnInit(CharacterCreation characterCreation)
    {
      characterCreation.IsPlayerAlone = true;
      characterCreation.HasSecondaryCharacter = false;
      characterCreation.ClearFaceGenPrefab();
      TextObject textObject1 = new TextObject("{=F7OO5SAa}As a youngster growing up in Calradia, war was never too far away. You...");
      TextObject textObject2 = new TextObject("{=5kbeAC7k}In wartorn Calradia, especially in frontier or tribal areas, some women as well as men learn to fight from an early age. You...");
      this._youthIntroductoryText.SetTextVariable("YOUTH_INTRO", CharacterObject.PlayerCharacter.IsFemale ? textObject2 : textObject1);
      characterCreation.ChangeFaceGenChars(this.ChangePlayerFaceWithAge((float) this.YouthAge));
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_schooled"
      });
      if (this.SelectedTitleType < 1 || this.SelectedTitleType > 10)
        this.SelectedTitleType = 1;
      this.RefreshPlayerAppearance(characterCreation);
    }

    protected void RefreshPlayerAppearance(CharacterCreation characterCreation)
    {
      string outfit = "player_char_creation_" + this.GetSelectedCulture().StringId + "_" + (object) this.SelectedTitleType + (Hero.MainHero.IsFemale ? "_f" : "_m");
      this.ChangePlayerOutfit(characterCreation, outfit);
      this.ApplyEquipments(characterCreation);
    }

    protected bool YouthCommanderOnCondition()
    {
      return this.GetSelectedCulture().StringId == "empire" && this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Retainer;
    }

    protected void YouthCommanderOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthGroomOnCondition()
    {
      return this.GetSelectedCulture().StringId == "vlandia" && this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Retainer;
    }

    protected void YouthCommanderOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 10;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_decisive"
      });
    }

    protected void YouthGroomOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 10;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_sharp"
      });
    }

    protected void YouthChieftainOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 10;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_ready"
      });
    }

    protected void YouthCavalryOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 9;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_apprentice"
      });
    }

    protected void YouthHearthGuardOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 9;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_athlete"
      });
    }

    protected void YouthOutridersOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 2;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_gracious"
      });
    }

    protected void YouthOtherOutridersOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 2;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_gracious"
      });
    }

    protected void YouthInfantryOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 3;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_fierce"
      });
    }

    protected void YouthSkirmisherOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 4;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_fox"
      });
    }

    protected void YouthGarrisonOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 1;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_vibrant"
      });
    }

    protected void YouthOtherGarrisonOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 1;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_sharp"
      });
    }

    protected void YouthKernOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 8;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_apprentice"
      });
    }

    protected void YouthCamperOnConsequence(CharacterCreation characterCreation)
    {
      this.SelectedTitleType = 5;
      this.RefreshPlayerAppearance(characterCreation);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_militia"
      });
    }

    protected void YouthGroomOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthChieftainOnCondition()
    {
      return (this.GetSelectedCulture().StringId == "battania" || this.GetSelectedCulture().StringId == "khuzait") && this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Retainer;
    }

    protected void YouthChieftainOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthCavalryOnCondition()
    {
      return this.GetSelectedCulture().StringId == "empire" || this.GetSelectedCulture().StringId == "khuzait" || this.GetSelectedCulture().StringId == "aserai" || this.GetSelectedCulture().StringId == "vlandia";
    }

    protected void YouthCavalryOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthHearthGuardOnCondition()
    {
      return this.GetSelectedCulture().StringId == "sturgia" || this.GetSelectedCulture().StringId == "battania";
    }

    protected void YouthHearthGuardOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthOutridersOnCondition()
    {
      return this.GetSelectedCulture().StringId == "empire" || this.GetSelectedCulture().StringId == "khuzait";
    }

    protected void YouthOutridersOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthOtherOutridersOnCondition()
    {
      return this.GetSelectedCulture().StringId != "empire" && this.GetSelectedCulture().StringId != "khuzait";
    }

    protected void YouthOtherOutridersOnApply(CharacterCreation characterCreation)
    {
    }

    protected void YouthInfantryOnApply(CharacterCreation characterCreation)
    {
    }

    protected void YouthSkirmisherOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthGarrisonOnCondition()
    {
      return this.GetSelectedCulture().StringId == "empire" || this.GetSelectedCulture().StringId == "vlandia";
    }

    protected void YouthGarrisonOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthOtherGarrisonOnCondition()
    {
      return this.GetSelectedCulture().StringId != "empire" && this.GetSelectedCulture().StringId != "vlandia";
    }

    protected void YouthOtherGarrisonOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthSkirmisherOnCondition() => this.GetSelectedCulture().StringId != "battania";

    protected bool YouthKernOnCondition() => this.GetSelectedCulture().StringId == "battania";

    protected void YouthKernOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool YouthCamperOnCondition()
    {
      return this._familyOccupationType != StoryModeCharacterCreationContent.OccupationTypes.Retainer;
    }

    protected void YouthCamperOnApply(CharacterCreation characterCreation)
    {
    }

    protected void AccomplishmentOnInit(CharacterCreation characterCreation)
    {
      characterCreation.IsPlayerAlone = true;
      characterCreation.HasSecondaryCharacter = false;
      characterCreation.ClearFaceGenPrefab();
      characterCreation.ChangeFaceGenChars(this.ChangePlayerFaceWithAge((float) this.AccomplishmentAge));
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_schooled"
      });
      this.RefreshPlayerAppearance(characterCreation);
    }

    protected void AccomplishmentDefeatedEnemyOnApply(CharacterCreation characterCreation)
    {
    }

    protected void AccomplishmentExpeditionOnApply(CharacterCreation characterCreation)
    {
    }

    protected bool AccomplishmentRuralOnCondition() => this.RuralType();

    protected bool AccomplishmentMerchantOnCondition()
    {
      return this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Merchant;
    }

    protected bool AccomplishmentPosseOnConditions()
    {
      return this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Retainer || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Herder || this._familyOccupationType == StoryModeCharacterCreationContent.OccupationTypes.Mercenary;
    }

    protected bool AccomplishmentSavedVillageOnCondition()
    {
      return this.RuralType() && this._familyOccupationType != StoryModeCharacterCreationContent.OccupationTypes.Retainer && this._familyOccupationType != StoryModeCharacterCreationContent.OccupationTypes.Herder;
    }

    protected bool AccomplishmentSavedStreetOnCondition()
    {
      return !this.RuralType() && this._familyOccupationType != StoryModeCharacterCreationContent.OccupationTypes.Merchant && this._familyOccupationType != StoryModeCharacterCreationContent.OccupationTypes.Mercenary;
    }

    protected bool AccomplishmentUrbanOnCondition() => !this.RuralType();

    protected void AccomplishmentWorkshopOnApply(CharacterCreation characterCreation)
    {
    }

    protected void AccomplishmentSiegeHunterOnApply(CharacterCreation characterCreation)
    {
    }

    protected void AccomplishmentEscapadeOnApply(CharacterCreation characterCreation)
    {
    }

    protected void AccomplishmentTreaterOnApply(CharacterCreation characterCreation)
    {
    }

    protected void AccomplishmentDefeatedEnemyOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_athlete"
      });
    }

    protected void AccomplishmentExpeditionOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_gracious"
      });
    }

    protected void AccomplishmentMerchantOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_ready"
      });
    }

    protected void AccomplishmentSavedVillageOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_vibrant"
      });
    }

    protected void AccomplishmentSavedStreetOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_vibrant"
      });
    }

    protected void AccomplishmentWorkshopOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_decisive"
      });
    }

    protected void AccomplishmentSiegeHunterOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_tough"
      });
    }

    protected void AccomplishmentEscapadeOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_clever"
      });
    }

    protected void AccomplishmentTreaterOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_manners"
      });
    }

    protected void EscapeOnInit(CharacterCreation characterCreation)
    {
      characterCreation.IsPlayerAlone = false;
      characterCreation.HasSecondaryCharacter = true;
      characterCreation.ClearFaceGenPrefab();
      this.ClearCharacters(characterCreation);
      this.ClearMountEntity(characterCreation);
      Hero elderBrother = StoryModeHeroes.ElderBrother;
      List<FaceGenChar> newChars = new List<FaceGenChar>();
      BodyProperties originalBodyProperties = CharacterObject.PlayerCharacter.GetBodyProperties(CharacterObject.PlayerCharacter.Equipment, -1);
      originalBodyProperties = FaceGen.GetBodyPropertiesWithAge(ref originalBodyProperties, 23f);
      this.CreateSibling(StoryModeHeroes.LittleBrother);
      this.CreateSibling(StoryModeHeroes.LittleSister);
      BodyProperties bodyProperties = BodyProperties.GetRandomBodyProperties(elderBrother.CharacterObject.Race, elderBrother.IsFemale, this.MotherFacegenCharacter.BodyProperties, this.FatherFacegenCharacter.BodyProperties, 1, Hero.MainHero.Mother.CharacterObject.GetDefaultFaceSeed(1), Hero.MainHero.Father.HairTags, Hero.MainHero.Father.BeardTags, Hero.MainHero.Father.TattooTags);
      bodyProperties = new BodyProperties(new DynamicBodyProperties(elderBrother.Age, 0.5f, 0.5f), bodyProperties.StaticProperties);
      elderBrother.ModifyPlayersFamilyAppearance(bodyProperties.StaticProperties);
      elderBrother.Weight = bodyProperties.Weight;
      elderBrother.Build = bodyProperties.Build;
      newChars.Add(new FaceGenChar(originalBodyProperties, CharacterObject.PlayerCharacter.Race, new Equipment(), CharacterObject.PlayerCharacter.IsFemale, "act_childhood_schooled"));
      newChars.Add(new FaceGenChar(elderBrother.BodyProperties, CharacterObject.PlayerCharacter.Race, new Equipment(), elderBrother.CharacterObject.IsFemale, "act_childhood_schooled"));
      characterCreation.ChangeFaceGenChars(newChars);
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_schooled",
        "act_childhood_schooled"
      });
      this.ChangeStoryStageEquipments(characterCreation);
      List<FaceGenMount> faceGenMountList1 = new List<FaceGenMount>();
      EquipmentElement equipmentElement;
      if (CharacterObject.PlayerCharacter.HasMount())
      {
        equipmentElement = CharacterObject.PlayerCharacter.Equipment[EquipmentIndex.ArmorItemEndSlot];
        ItemObject mountItem = equipmentElement.Item;
        List<FaceGenMount> faceGenMountList2 = faceGenMountList1;
        MountCreationKey randomMountKey = MountCreationKey.GetRandomMountKey(mountItem, CharacterObject.PlayerCharacter.GetMountKeySeed());
        equipmentElement = CharacterObject.PlayerCharacter.Equipment[EquipmentIndex.ArmorItemEndSlot];
        ItemObject horseItem = equipmentElement.Item;
        equipmentElement = CharacterObject.PlayerCharacter.Equipment[EquipmentIndex.HorseHarness];
        ItemObject harnessItem = equipmentElement.Item;
        FaceGenMount faceGenMount = new FaceGenMount(randomMountKey, horseItem, harnessItem);
        faceGenMountList2.Add(faceGenMount);
      }
      if (!elderBrother.CharacterObject.HasMount())
        return;
      equipmentElement = elderBrother.CharacterObject.Equipment[EquipmentIndex.ArmorItemEndSlot];
      ItemObject mountItem1 = equipmentElement.Item;
      List<FaceGenMount> faceGenMountList3 = faceGenMountList1;
      MountCreationKey randomMountKey1 = MountCreationKey.GetRandomMountKey(mountItem1, elderBrother.CharacterObject.GetMountKeySeed());
      equipmentElement = elderBrother.CharacterObject.Equipment[EquipmentIndex.ArmorItemEndSlot];
      ItemObject horseItem1 = equipmentElement.Item;
      equipmentElement = elderBrother.CharacterObject.Equipment[EquipmentIndex.HorseHarness];
      ItemObject harnessItem1 = equipmentElement.Item;
      FaceGenMount faceGenMount1 = new FaceGenMount(randomMountKey1, horseItem1, harnessItem1);
      faceGenMountList3.Add(faceGenMount1);
    }

    protected void ChangeStoryStageEquipments(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharactersEquipment(new List<Equipment>()
      {
        CharacterObject.PlayerCharacter.Equipment,
        StoryModeHeroes.ElderBrother.CharacterObject.Equipment
      });
    }

    protected void EscapeSubdueRaiderOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_fierce",
        "act_childhood_athlete"
      });
    }

    protected void EscapeDrawArrowsOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_gracious",
        "act_childhood_sharp"
      });
    }

    protected void EscapeFastHorseOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_tough",
        "act_childhood_decisive"
      });
    }

    protected void EscapeRoadOffWithBrotherOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_ready",
        "act_childhood_tough"
      });
    }

    protected void EscapeOrganizeTravellersOnConsequence(CharacterCreation characterCreation)
    {
      characterCreation.ChangeCharsAnimation(new List<string>()
      {
        "act_childhood_manners",
        "act_childhood_gracious"
      });
    }

    protected void EscapeSubdueRaiderOnApply(CharacterCreation characterCreation)
    {
    }

    protected void EscapeDrawArrowsOnApply(CharacterCreation characterCreation)
    {
    }

    protected void EscapeFastHorseOnApply(CharacterCreation characterCreation)
    {
    }

    protected void EscapeRoadOffWithBrotherOnApply(CharacterCreation characterCreation)
    {
    }

    protected void EscapeOrganizeTravellersOnApply(CharacterCreation characterCreation)
    {
    }

    protected void ApplyEquipments(CharacterCreation characterCreation)
    {
      this.ClearMountEntity(characterCreation);
      MBEquipmentRoster instance = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>("player_char_creation_" + this.GetSelectedCulture().StringId + "_" + (object) this.SelectedTitleType + (Hero.MainHero.IsFemale ? "_f" : "_m"));
      this.PlayerStartEquipment = instance?.DefaultEquipment ?? MBEquipmentRoster.EmptyEquipment;
      this.PlayerCivilianEquipment = (instance != null ? instance.GetCivilianEquipments().FirstOrDefault<Equipment>() : (Equipment) null) ?? MBEquipmentRoster.EmptyEquipment;
      if (this.PlayerStartEquipment != null && this.PlayerCivilianEquipment != null)
      {
        CharacterObject.PlayerCharacter.Equipment.FillFrom(this.PlayerStartEquipment);
        CharacterObject.PlayerCharacter.FirstCivilianEquipment.FillFrom(this.PlayerCivilianEquipment);
      }
      this.ChangePlayerMount(characterCreation, Hero.MainHero);
      this.ApplyBrotherClothingAndEquipment();
    }

    protected void ApplyBrotherClothingAndEquipment()
    {
      MBEquipmentRoster instance = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>("brother_char_creation_" + this.GetSelectedCulture().StringId);
      Hero elderBrother = StoryModeHeroes.ElderBrother;
      elderBrother.CharacterObject.Equipment.FillFrom(instance?.DefaultEquipment ?? MBEquipmentRoster.EmptyEquipment);
      elderBrother.CharacterObject.FirstCivilianEquipment.FillFrom((instance != null ? instance.GetCivilianEquipments().FirstOrDefault<Equipment>() : (Equipment) null) ?? MBEquipmentRoster.EmptyEquipment);
    }

    protected void CreateSibling(Hero hero)
    {
      BodyProperties bodyProperties = BodyProperties.GetRandomBodyProperties(hero.CharacterObject.Race, hero.IsFemale, this.MotherFacegenCharacter.BodyProperties, this.FatherFacegenCharacter.BodyProperties, 1, Hero.MainHero.Mother.CharacterObject.GetDefaultFaceSeed(1), hero.IsFemale ? Hero.MainHero.Mother.HairTags : Hero.MainHero.Father.HairTags, hero.IsFemale ? Hero.MainHero.Mother.BeardTags : Hero.MainHero.Father.BeardTags, hero.IsFemale ? Hero.MainHero.Mother.TattooTags : Hero.MainHero.Father.TattooTags);
      bodyProperties = new BodyProperties(new DynamicBodyProperties(hero.Age, 0.5f, 0.5f), bodyProperties.StaticProperties);
      hero.ModifyPlayersFamilyAppearance(bodyProperties.StaticProperties);
      hero.Weight = bodyProperties.Weight;
      hero.Build = bodyProperties.Build;
    }

    protected enum OccupationTypes
    {
      Artisan,
      Bard,
      Retainer,
      Merchant,
      Farmer,
      Hunter,
      Vagabond,
      Mercenary,
      Herder,
      Healer,
      NumberOfTypes,
    }
  }
}
