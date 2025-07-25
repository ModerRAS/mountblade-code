// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.EducationCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class EducationCampaignBehavior : CampaignBehaviorBase, IEducationLogic
  {
    private const char Separator = ';';
    private const int AttributeIncrease = 1;
    private const int FocusIncrease = 1;
    private const int SkillIncrease = 5;
    private readonly TextObject _pickAttributeText = new TextObject("{=m7iBf6fQ}Pick an Attribute");
    private readonly TextObject _confirmResultsText = new TextObject("{=La9qAlfi}Confirm the Results");
    private readonly TextObject _chooseTalentText = new TextObject("{=K9fcqr0K}Choose a Talent");
    private readonly TextObject _chooseTutorText = new TextObject("{=B7JVLc4u}Choose a Tutor");
    private readonly TextObject _guideTutorText = new TextObject("{=VbWAsWWY}Guide the Tutor");
    private readonly TextObject _chooseFocusText = new TextObject("{=HBZS0bug}Choose a Focus");
    private readonly TextObject _chooseSkillText = new TextObject("{=5BEGa9ZS}Choose a Skill");
    private readonly TextObject _chooseGiftText = new TextObject("{=DcoDtW2A}Choose a Gift");
    private readonly TextObject _chooseAchievementText = new TextObject("{=26sKJehk}Choose an Achievement");
    private Dictionary<Hero, short> _previousEducations = new Dictionary<Hero, short>();
    private readonly TextObject _chooseTaskText = new TextObject("{=SUNKjdZ9}Choose a Task");
    private readonly TextObject _chooseRequestText = new TextObject("{=jNBVoObj}Choose a Request");
    private Hero _activeChild;
    private EducationCampaignBehavior.EducationStage _activeStage;

    public override void RegisterEvents()
    {
      if (CampaignOptions.IsLifeDeathCycleDisabled)
        return;
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnDailyTick));
      CampaignEvents.OnCharacterCreationIsOverEvent.AddNonSerializedListener((object) this, new Action(this.OnCharacterCreationOver));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.HeroComesOfAgeEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroComesOfAge));
    }

    private void OnHeroComesOfAge(Hero hero)
    {
      if (hero.Mother?.Clan != Clan.PlayerClan && hero.Father?.Clan != Clan.PlayerClan)
        return;
      this.DoEducationUntil(hero, EducationCampaignBehavior.ChildAgeState.Count);
      this._previousEducations.Remove(hero);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Hero, short>>("_previousEducations", ref this._previousEducations);
    }

    public void GetOptionProperties(
      Hero child,
      string optionKey,
      List<string> previousOptions,
      out TextObject optionTitle,
      out TextObject description,
      out TextObject effect,
      out (CharacterAttribute, int)[] attributes,
      out (SkillObject, int)[] skills,
      out (SkillObject, int)[] focusPoints,
      out EducationCampaignBehavior.EducationCharacterProperties[] educationCharacterProperties)
    {
      EducationCampaignBehavior.EducationStage stage = this.GetStage(child);
      EducationCampaignBehavior.EducationOption option = stage.GetOption(optionKey);
      description = option.Description;
      effect = option.Effect;
      optionTitle = option.Title;
      educationCharacterProperties = stage.GetCharacterPropertiesForOption(child, option, optionKey, previousOptions);
      if (option.Attributes == null)
      {
        attributes = ((CharacterAttribute, int)[]) null;
      }
      else
      {
        attributes = new (CharacterAttribute, int)[option.Attributes.Length];
        for (int index = 0; index < option.Attributes.Length; ++index)
          attributes[index] = (option.Attributes[index], 1);
      }
      if (option.Skills == null)
      {
        skills = ((SkillObject, int)[]) null;
        focusPoints = ((SkillObject, int)[]) null;
      }
      else
      {
        skills = new (SkillObject, int)[option.Skills.Length];
        focusPoints = new (SkillObject, int)[option.Skills.Length];
        for (int index = 0; index < option.Skills.Length; ++index)
        {
          skills[index] = (option.Skills[index], 5);
          focusPoints[index] = (option.Skills[index], 1);
        }
      }
    }

    public void GetPageProperties(
      Hero child,
      List<string> previousChoices,
      out TextObject title,
      out TextObject description,
      out TextObject instruction,
      out EducationCampaignBehavior.EducationCharacterProperties[] defaultCharacterProperties,
      out string[] availableOptions)
    {
      EducationCampaignBehavior.EducationStage stage = this.GetStage(child);
      EducationCampaignBehavior.EducationPage page = stage.GetPage(previousChoices);
      defaultCharacterProperties = stage.GetCharacterPropertiesForPage(child, page, previousChoices);
      title = page.Title;
      description = page.Description;
      instruction = page.Instruction;
      availableOptions = page.GetAvailableOptions(stage.StringIdToEducationOption(previousChoices));
    }

    public bool IsValidEducationNotification(EducationMapNotification data)
    {
      EducationCampaignBehavior.EducationStage stage = this.GetStage(data.Child);
      return data.Child.IsAlive && data.Age > 0 && (double) data.Child.Age < (double) Campaign.Current.Models.AgeModel.HeroComesOfAge && stage != null;
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail details,
      bool showNotifications)
    {
      if (victim.Clan != Clan.PlayerClan || !this._previousEducations.ContainsKey(victim))
        return;
      this._previousEducations.Remove(victim);
    }

    public void GetStageProperties(Hero child, out int pageCount)
    {
      EducationCampaignBehavior.EducationStage stage = this.GetStage(child);
      pageCount = stage.PageCount;
    }

    private void OnCharacterCreationOver()
    {
      if (!CampaignOptions.IsLifeDeathCycleDisabled)
        return;
      CampaignEventDispatcher.Instance.RemoveListeners((object) this);
    }

    private void OnDailyTick()
    {
      if (MapEvent.PlayerMapEvent != null)
        return;
      foreach (Hero hero in (List<Hero>) Clan.PlayerClan.Heroes)
      {
        if (hero.IsAlive && hero != Hero.MainHero && (double) hero.Age < (double) Campaign.Current.Models.AgeModel.HeroComesOfAge)
        {
          EducationCampaignBehavior.ChildAgeState lastDoneStage = this.GetLastDoneStage(hero);
          if (lastDoneStage != EducationCampaignBehavior.ChildAgeState.Year16)
          {
            EducationCampaignBehavior.ChildAgeState childAgeState = (EducationCampaignBehavior.ChildAgeState) MathF.Max((int) (lastDoneStage + (short) 1), (int) this.GetClosestStage(hero));
            int age = EducationCampaignBehavior.ChildStateToAge(childAgeState);
            if ((hero.BirthDay + CampaignTime.Years((float) age)).IsPast && !this.HasNotificationForAge(hero, age))
            {
              this.DoEducationUntil(hero, childAgeState);
              this.ShowEducationNotification(hero, EducationCampaignBehavior.ChildStateToAge(childAgeState));
            }
          }
        }
      }
    }

    private EducationCampaignBehavior.ChildAgeState GetClosestStage(Hero child)
    {
      EducationCampaignBehavior.ChildAgeState closestStage = EducationCampaignBehavior.ChildAgeState.Year2;
      int num = MathF.Round(child.Age);
      for (EducationCampaignBehavior.ChildAgeState state = EducationCampaignBehavior.ChildAgeState.Year2; state <= EducationCampaignBehavior.ChildAgeState.Year16; ++state)
      {
        if (num >= EducationCampaignBehavior.ChildStateToAge(state))
          closestStage = state;
      }
      return closestStage;
    }

    private EducationCampaignBehavior.ChildAgeState GetLastDoneStage(Hero child)
    {
      short num;
      return this._previousEducations.TryGetValue(child, out num) ? (EducationCampaignBehavior.ChildAgeState) num : EducationCampaignBehavior.ChildAgeState.Invalid;
    }

    private void OnFinalize(
      EducationCampaignBehavior.EducationStage stage,
      Hero child,
      List<string> chosenOptions)
    {
      foreach (string chosenOption in chosenOptions)
        stage.GetOption(chosenOption).OnConsequence(child);
      CampaignEventDispatcher.Instance.OnChildEducationCompleted(child, EducationCampaignBehavior.ChildStateToAge(stage.Target));
      short target = (short) stage.Target;
      if (this._previousEducations.ContainsKey(child))
        this._previousEducations[child] = target;
      else
        this._previousEducations.Add(child, target);
      this._activeStage = (EducationCampaignBehavior.EducationStage) null;
      this._activeChild = (Hero) null;
    }

    private bool HasNotificationForAge(Hero child, int age)
    {
      return Campaign.Current.CampaignInformationManager.InformationDataExists<EducationMapNotification>((Func<EducationMapNotification, bool>) (notification => notification.Child == child && notification.Age == age));
    }

    private void ShowEducationNotification(Hero child, int age)
    {
      TextObject text = GameTexts.FindText("str_education_notification_right");
      text.SetCharacterProperties("CHILD", child.CharacterObject, true);
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new EducationMapNotification(child, age, text));
      if (child.Father == Hero.MainHero || child.Mother == Hero.MainHero)
        Debug.Print(string.Format("Showing Education Notification, Hero: {0}: {1} - Age: {2}.", (object) child.StringId, (object) child.Name, (object) age));
      if (this._previousEducations.ContainsKey(child))
        return;
      this._previousEducations.Add(child, (short) -1);
    }

    private void DoEducationUntil(
      Hero child,
      EducationCampaignBehavior.ChildAgeState childAgeState)
    {
      short num;
      if (!this._previousEducations.TryGetValue(child, out num))
        num = (short) -1;
      for (EducationCampaignBehavior.ChildAgeState state = (EducationCampaignBehavior.ChildAgeState) ((int) num + 1); state < childAgeState; ++state)
      {
        if (state != EducationCampaignBehavior.ChildAgeState.Invalid)
        {
          EducationCampaignBehavior.EducationStage stage = this.GetStage(child, state);
          this.DoStage(child, stage);
        }
      }
    }

    private void DoStage(Hero child, EducationCampaignBehavior.EducationStage stage)
    {
      List<string> stringList = new List<string>();
      for (int index = 0; index < stage.PageCount; ++index)
      {
        string[] availableOptions = stage.GetPage(stringList).GetAvailableOptions(stage.StringIdToEducationOption(stringList));
        stringList.Add(availableOptions.GetRandomElement<string>());
      }
      this.OnFinalize(stage, child, stringList);
    }

    public void Finalize(Hero child, List<string> chosenOptions)
    {
      this.OnFinalize(this.GetStage(child), child, chosenOptions);
    }

    private bool IsHeroChildOfPlayer(Hero child) => Hero.MainHero.Children.Contains(child);

    private bool ChildCultureHasLorekeeper(Hero child)
    {
      return child.Culture.StringId == "khuzait" || child.Culture.StringId == "battania";
    }

    private bool ChildCultureHasBard(Hero child) => child.Culture.StringId == "battania";

    private EducationCampaignBehavior.EducationStage GetStage(Hero child)
    {
      short num;
      EducationCampaignBehavior.ChildAgeState state = !this._previousEducations.TryGetValue(child, out num) || num == (short) -1 ? this.GetClosestStage(child) : (EducationCampaignBehavior.ChildAgeState) ((int) num + 1);
      return this.GetStage(child, state);
    }

    private EducationCampaignBehavior.EducationStage GetStage(
      Hero child,
      EducationCampaignBehavior.ChildAgeState state)
    {
      if (this._activeStage == null || this._activeStage.Target != state || child != this._activeChild)
      {
        this._activeChild = child;
        switch (state)
        {
          case EducationCampaignBehavior.ChildAgeState.Year2:
            this._activeStage = this.CreateStage2(child);
            break;
          case EducationCampaignBehavior.ChildAgeState.Year5:
            this._activeStage = this.CreateStage5(child);
            break;
          case EducationCampaignBehavior.ChildAgeState.Year8:
            this._activeStage = this.CreateStage8(child);
            break;
          case EducationCampaignBehavior.ChildAgeState.Year11:
            this._activeStage = this.CreateStage11(child);
            break;
          case EducationCampaignBehavior.ChildAgeState.Year14:
            this._activeStage = this.CreateStage14(child);
            break;
          case EducationCampaignBehavior.ChildAgeState.Year16:
            this._activeStage = this.CreateStage16(child);
            break;
          default:
            this._activeStage = (EducationCampaignBehavior.EducationStage) null;
            this._activeChild = (Hero) null;
            break;
        }
      }
      StringHelpers.SetCharacterProperties("CHILD", child.CharacterObject);
      return this._activeStage;
    }

    private EducationCampaignBehavior.EducationStage CreateStage2(Hero child)
    {
      EducationCampaignBehavior.EducationStage stage2 = new EducationCampaignBehavior.EducationStage(EducationCampaignBehavior.ChildAgeState.Year2);
      TextObject title1 = new TextObject("{=xc4ossl0}Infancy");
      Dictionary<CharacterAttribute, TextObject> dictionary1 = new Dictionary<CharacterAttribute, TextObject>()
      {
        {
          DefaultCharacterAttributes.Vigor,
          new TextObject("{=h7aX2GOw}This child is quite strong, grabbing whatever {?CHILD.GENDER}she{?}he{\\?} likes climbing out of {?CHILD.GENDER}her{?}his{\\?} cradle whenever {?CHILD.GENDER}her{?}his{\\?} caretaker's back is turned.")
        },
        {
          DefaultCharacterAttributes.Control,
          new TextObject("{=pQSBdHC7}The child has exceptional coordination for someone {?CHILD.GENDER}her{?}his{\\?} age, and can catch a tossed ball and eat by {?CHILD.GENDER}herself{?}himself{\\?}.")
        },
        {
          DefaultCharacterAttributes.Endurance,
          new TextObject("{=xaNpQsjh}The child seems to never tire, running {?CHILD.GENDER}her{?}his{\\?} caretakers ragged, and is rarely cranky.")
        },
        {
          DefaultCharacterAttributes.Cunning,
          new TextObject("{=lF41sN5r}You see the glint of mischief on {?CHILD.GENDER}her{?}his{\\?} smiling face. Any sweet left unattended in the kitchen for even a few minutes is quickly stolen.")
        },
        {
          DefaultCharacterAttributes.Intelligence,
          new TextObject("{=KVDMVbT1}This child started speaking earlier than most of {?CHILD.GENDER}her{?}his{\\?} peers and can even string together simple sentences.")
        },
        {
          DefaultCharacterAttributes.Social,
          new TextObject("{=xXJnW5w0}The child pays close attention to anyone talking to {?CHILD.GENDER}her{?}him{\\?} and sometimes tries to comfort playmates in distress.")
        }
      };
      Dictionary<CharacterAttribute, EducationCampaignBehavior.EducationCharacterProperties> dictionary2 = new Dictionary<CharacterAttribute, EducationCampaignBehavior.EducationCharacterProperties>()
      {
        {
          DefaultCharacterAttributes.Vigor,
          new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_toddler_vigor")
        },
        {
          DefaultCharacterAttributes.Control,
          new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_toddler_control")
        },
        {
          DefaultCharacterAttributes.Endurance,
          new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_toddler_endurance")
        },
        {
          DefaultCharacterAttributes.Cunning,
          new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_toddler_cunning")
        },
        {
          DefaultCharacterAttributes.Intelligence,
          new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_toddler_intelligence")
        },
        {
          DefaultCharacterAttributes.Social,
          new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_toddler_social")
        }
      };
      TextObject description1 = new TextObject("{=Il7pDS8i}People remark on how much {?PLAYER_CHILD}your{?}the{\\?} baby resembles {?CHILD.GENDER}her{?}his{\\?} parents. {CHILD.NAME} definitely has {?PLAYER_IS_FATHER}your{?}{?CHILD.GENDER}her{?}his{\\?} father's{\\?}...");
      description1.SetTextVariable("PLAYER_IS_FATHER", child.Father == Hero.MainHero ? 1 : 0);
      EducationCampaignBehavior.EducationCharacterProperties childProperties1 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_toddler_sleep", string.Empty, false);
      EducationCampaignBehavior.EducationPage educationPage1 = stage2.AddPage(0, title1, description1, this._pickAttributeText, childProperties1);
      (CharacterAttribute, int)[] maxAttributes1;
      this.GetHighestThreeAttributes(child.Father, out maxAttributes1);
      for (int index = 0; index < maxAttributes1.Length; ++index)
      {
        EducationCampaignBehavior.EducationCharacterProperties childProperties2 = dictionary2[maxAttributes1[index].Item1];
        educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(maxAttributes1[index].Item1.Name, dictionary1[maxAttributes1[index].Item1], (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
        {
          maxAttributes1[index].Item1
        }, (SkillObject[]) null, childProperties2));
      }
      TextObject description2 = new TextObject("{=0vWaNd1m}At the same time, {?CHILD.GENDER}she{?}he{\\?} shows {?PLAYER_IS_MOTHER}your{?}{?CHILD.GENDER}her{?}his{\\?} mother's{\\?}....");
      description2.SetTextVariable("PLAYER_IS_MOTHER", child.Mother == Hero.MainHero ? 1 : 0);
      EducationCampaignBehavior.EducationCharacterProperties childProperties3 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_toddler_tantrum", string.Empty, false);
      EducationCampaignBehavior.EducationPage educationPage2 = stage2.AddPage(1, title1, description2, this._pickAttributeText, childProperties3);
      (CharacterAttribute, int)[] maxAttributes2;
      this.GetHighestThreeAttributes(child.Mother, out maxAttributes2);
      for (int index = 0; index < maxAttributes2.Length; ++index)
      {
        EducationCampaignBehavior.EducationCharacterProperties childProperties4 = dictionary2[maxAttributes2[index].Item1];
        educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(maxAttributes2[index].Item1.Name, dictionary1[maxAttributes2[index].Item1], (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
        {
          maxAttributes2[index].Item1
        }, (SkillObject[]) null, childProperties4));
      }
      TextObject description3 = new TextObject("{=taJOTFrb}Despite its tender age, the baby already starts to show some aptitude in {ATR_1} and {ATR_2}.");
      int optionIndexer = 0;
      EducationCampaignBehavior.EducationPage stage_0_page_2 = stage2.AddPage(2, title1, description3, this._confirmResultsText);
      for (int index1 = 0; index1 < Attributes.All.Count; ++index1)
      {
        CharacterAttribute attributeOne = Attributes.All[index1];
        EducationCampaignBehavior.EducationCharacterProperties childProperties5 = dictionary2[attributeOne];
        List<CharacterAttribute> list = Attributes.All.Where<CharacterAttribute>((Func<CharacterAttribute, bool>) (x => x != attributeOne)).ToList<CharacterAttribute>();
        for (int index2 = 0; index2 < Attributes.All.Count - 1; ++index2)
        {
          CharacterAttribute attributeTwo = list[index2];
          int count = Attributes.All.Count;
          TextObject title2 = new TextObject("{=ISoR0vaR}{ATR_1} and {ATR_2}");
          TextObject description4 = new TextObject("{=KiOBbxr3}In addition to {?CHILD.GENDER}her{?}his{\\?} parents traits, this baby also shows promising {ATR_1} and {ATR_2}.");
          title2.SetTextVariable("ATR_1", attributeOne.Name);
          description4.SetTextVariable("ATR_1", attributeOne.Name);
          title2.SetTextVariable("ATR_2", attributeTwo.Name);
          description4.SetTextVariable("ATR_2", attributeTwo.Name);
          EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate condition = (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) ((o, previousOptions) =>
          {
            if (o == stage_0_page_2.Options.FirstOrDefault<EducationCampaignBehavior.EducationOption>())
              optionIndexer = 0;
            int num1 = previousOptions[0].Attributes[0] == previousOptions[1].Attributes[0] ? 1 : 2;
            int num2 = ((IEnumerable<CharacterAttribute>) previousOptions[0].Attributes).Contains<CharacterAttribute>(attributeOne) || ((IEnumerable<CharacterAttribute>) previousOptions[1].Attributes).Contains<CharacterAttribute>(attributeOne) || ((IEnumerable<CharacterAttribute>) previousOptions[0].Attributes).Contains<CharacterAttribute>(attributeTwo) ? 1 : (((IEnumerable<CharacterAttribute>) previousOptions[1].Attributes).Contains<CharacterAttribute>(attributeTwo) ? 1 : 0);
            int num3 = (Attributes.All.Count - num1 - 1) * (Attributes.All.Count - num1);
            int randomValue1 = previousOptions[0].RandomValue;
            int randomValue2 = previousOptions[1].RandomValue;
            int num4 = num3;
            int num5 = (randomValue1 % num4 + randomValue2 % num3) % num3;
            if (num2 == 0)
              ++optionIndexer;
            if (num2 != 0 || num5 != optionIndexer % num3)
              return false;
            stage_0_page_2.Description.SetTextVariable("ATR_1", attributeOne.Name);
            stage_0_page_2.Description.SetTextVariable("ATR_2", attributeTwo.Name);
            return true;
          });
          stage_0_page_2.AddOption(new EducationCampaignBehavior.EducationOption(title2, description4, (TextObject) null, condition, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[2]
          {
            attributeOne,
            attributeTwo
          }, (SkillObject[]) null, childProperties5));
        }
      }
      return stage2;
    }

    private static int ChildStateToAge(EducationCampaignBehavior.ChildAgeState state)
    {
      switch (state)
      {
        case EducationCampaignBehavior.ChildAgeState.Year2:
          return 2;
        case EducationCampaignBehavior.ChildAgeState.Year5:
          return 5;
        case EducationCampaignBehavior.ChildAgeState.Year8:
          return 8;
        case EducationCampaignBehavior.ChildAgeState.Year11:
          return 11;
        case EducationCampaignBehavior.ChildAgeState.Year14:
          return 14;
        case EducationCampaignBehavior.ChildAgeState.Year16:
          return 16;
        default:
          return -1;
      }
    }

    private void Stage2Selection(
      List<SkillObject> skills,
      EducationCampaignBehavior.EducationPage previousPage,
      EducationCampaignBehavior.EducationPage currentPage,
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties,
      EducationCampaignBehavior.EducationCharacterProperties[] tutorProperties)
    {
      for (int index1 = 0; index1 < skills.Count; ++index1)
      {
        int index = index1;
        EducationCampaignBehavior.EducationCharacterProperties childProperty = childProperties[index];
        EducationCampaignBehavior.EducationCharacterProperties tutorProperty = tutorProperties[index];
        SkillObject skill = skills[index];
        TextObject title1 = new TextObject("{=!}{SKILL}");
        TextObject description1 = new TextObject("{=!}{SKILL_DESC}");
        title1.SetTextVariable("SKILL", skill.Name);
        description1.SetTextVariable("SKILL_DESC", previousPage.Options.First<EducationCampaignBehavior.EducationOption>((Func<EducationCampaignBehavior.EducationOption, bool>) (x => ((IEnumerable<SkillObject>) x.Skills).Contains<SkillObject>(skill))).Description);
        EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate condition1 = (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) ((o, previousOptions) =>
        {
          int num = (previousOptions[0].RandomValue % skills.Count + previousOptions[1].RandomValue % skills.Count) % skills.Count != index ? 0 : (previousOptions[1].Skills[0] != skill ? 1 : 0);
          if (num == 0)
            return num != 0;
          currentPage.Description.SetTextVariable("SKILL", skill.Name);
          return num != 0;
        });
        currentPage.AddOption(new EducationCampaignBehavior.EducationOption(title1, description1, (TextObject) null, condition1, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
        {
          skill
        }, childProperty, tutorProperty));
        SkillObject alternativeSkill = skills[(index + MBRandom.RandomInt(1, 6)) % skills.Count];
        TextObject title2 = new TextObject("{=!}{SKILL}");
        TextObject description2 = new TextObject("{=!}{SKILL_DESC}");
        title2.SetTextVariable("SKILL", alternativeSkill.Name);
        description2.SetTextVariable("SKILL_DESC", previousPage.Options.First<EducationCampaignBehavior.EducationOption>((Func<EducationCampaignBehavior.EducationOption, bool>) (x => ((IEnumerable<SkillObject>) x.Skills).Contains<SkillObject>(alternativeSkill))).Description);
        EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate condition2 = (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) ((o, previousOptions) =>
        {
          int num = (previousOptions[0].RandomValue % skills.Count + previousOptions[1].RandomValue % skills.Count) % skills.Count != index ? 0 : (previousOptions[1].Skills[0] == skill ? 1 : 0);
          if (num == 0)
            return num != 0;
          currentPage.Description.SetTextVariable("SKILL", alternativeSkill.Name);
          return num != 0;
        });
        currentPage.AddOption(new EducationCampaignBehavior.EducationOption(title2, description2, (TextObject) null, condition2, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
        {
          alternativeSkill
        }, childProperty, tutorProperty));
      }
    }

    private void Stage16Selection(
      (TextObject, TextObject, SkillObject)[] titleDescSkillTuple,
      EducationCampaignBehavior.EducationPage currentPage,
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties)
    {
      for (int index1 = 0; index1 < titleDescSkillTuple.Length; ++index1)
      {
        int index = index1;
        (TextObject, TextObject, SkillObject) container = titleDescSkillTuple[index];
        EducationCampaignBehavior.EducationCharacterProperties childProperty = childProperties[index];
        SkillObject skill = container.Item3;
        EducationCampaignBehavior.EducationOption option = new EducationCampaignBehavior.EducationOption(new TextObject("{=!}{OUTCOME_TITLE}"), new TextObject("{=!}{OUTCOME_DESC}"), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) ((o, previousOptions) =>
        {
          int num1 = (previousOptions[0].RandomValue % titleDescSkillTuple.Length + previousOptions[1].RandomValue % titleDescSkillTuple.Length) % titleDescSkillTuple.Length;
          SkillObject previousPageSkill = previousOptions[1].Skills[0];
          int num2 = index == num1 ? 1 : 0;
          if (num2 != 0)
          {
            int index2 = ((IReadOnlyList<(TextObject, TextObject, SkillObject)>) titleDescSkillTuple).FindIndex<(TextObject, TextObject, SkillObject)>((Func<(TextObject, TextObject, SkillObject), bool>) (x => x.Item3 == previousPageSkill));
            if (num1 == index2)
              container = titleDescSkillTuple[(index + 1) % titleDescSkillTuple.Length];
            currentPage.Description.SetTextVariable("RANDOM_OUTCOME", container.Item1);
            currentPage.Description.SetTextVariable("SKILL", skill.Name);
          }
          o.Title.SetTextVariable("OUTCOME_TITLE", container.Item1);
          o.Description.SetTextVariable("OUTCOME_DESC", container.Item2);
          return num2 != 0;
        }), (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
        {
          skill
        }, childProperty);
        currentPage.AddOption(option);
      }
    }

    private EducationCampaignBehavior.EducationStage CreateStage5(Hero child)
    {
      EducationCampaignBehavior.EducationStage stage5 = new EducationCampaignBehavior.EducationStage(EducationCampaignBehavior.ChildAgeState.Year5);
      TextObject title = new TextObject("{=8Yiwt1z6}Early Childhood");
      TextObject description1 = new TextObject("{=6PrmgKXa}{CHILD.NAME} is now old enough to play independently with the other children of the estate. You are particularly struck by how {?CHILD.GENDER}she{?}he{\\?}...");
      EducationCampaignBehavior.EducationCharacterProperties childProperties1 = new EducationCampaignBehavior.EducationCharacterProperties("act_inventory_idle_start", string.Empty, false);
      EducationCampaignBehavior.EducationPage educationPage1 = stage5.AddPage(0, title, description1, this._chooseTalentText, childProperties1);
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=aeWZRHy3}takes charge."), new TextObject("{=TyvEmZbC}{CHILD.NAME} is usually the one who decides what games {?CHILD.GENDER}her{?}his{\\?} friends will play, and leads them on imaginary adventures around the estate."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Social
      }, new SkillObject[1]{ DefaultSkills.Leadership }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader")));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=auCinAKs}never tires out."), new TextObject("{=ymt7Ol6x}{?CHILD.GENDER}She{?}He{\\?} seems to have limitless energy, continuing with games long after all the other children have taken a break."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Endurance
      }, new SkillObject[1]{ DefaultSkills.Athletics }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_fierce")));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=fvutqQH6}always hits {?CHILD.GENDER}her{?}his{\\?} mark."), new TextObject("{=i2qOUBF4}The child will win any game that involves throwing and aiming, and the local crows have learned to keep their distance lest they want to be hit by a stone."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Control
      }, new SkillObject[1]{ DefaultSkills.Throwing }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_throw", "spear_new_f_1-9m", false)));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=J80YXzR2}is fascinated by riddles."), new TextObject("{=QuffbfeU}The child asks any adults {?CHILD.GENDER}she{?}he{\\?} sees to ask {?CHILD.GENDER}her{?}him{\\?} one of the riddles that are loved by your people, and never gives up until it is solved."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Intelligence
      }, new SkillObject[1]{ DefaultSkills.Engineering }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_memory")));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=tMkMi5C7}wins wrestling matches."), new TextObject("{=zulqIQQw}Children play rough, and this child is usually the one who winds up on top in any tussle."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Vigor
      }, new SkillObject[1]{ DefaultSkills.TwoHanded }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete")));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=h1GdWZjk}avoids chores."), new TextObject("{=qbLkFkWr}Usually when there is work to be done this child is nowhere to be found. You've learned some of {?CHILD.GENDER}her{?}his{\\?} hiding places, but {?CHILD.GENDER}she{?}he{\\?} always seems to find more."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Cunning
      }, new SkillObject[1]{ DefaultSkills.Roguery }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_spoiled")));
      TextObject description2 = new TextObject("{=GX0B9ngI}{CHILD.NAME} spends time by {?CHILD.GENDER}herself{?}himself{\\?} as well, frequently...");
      EducationCampaignBehavior.EducationPage educationPage2 = stage5.AddPage(1, title, description2, this._chooseTalentText);
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=gkuS35ly}caring for your horses."), new TextObject("{=smdvQWvu}{?PLAYER_CHILD}Your{?}This{\\?} child loves animals of all kinds. You know that one day {?CHILD.GENDER}she{?}he{\\?} will be a great rider."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Riding
      }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true)));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=1Ehm6o1d}shooting at targets."), new TextObject("{=RkQjllml}Given even a few minutes of free time, {?PLAYER_CHILD}your{?}this{\\?} child will line up targets and shoot them with {?CHILD.GENDER}her{?}his{\\?} home-made bow."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Bow
      }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true)));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=25vJYig0}trekking around nearby hills."), new TextObject("{=LJsckbyF}{?PLAYER_CHILD}Your{?}This{\\?} child spends hours exploring the edges of the estate, following animal tracks and looking for edible plants."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Scouting
      }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false)));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=54PfOh98}making {?CHILD.GENDER}her{?}his{\\?} own toys."), new TextObject("{=LfJhIQpb}With a few sticks and a bit of twine, {?CHILD.GENDER}she{?}he{\\?} can make recognizable animals, weapons or dolls."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Crafting
      }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_artisan", "carry_linen", false)));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=hjR0Jvh1}fighting mock battles."), new TextObject("{=hGheavqY}{?PLAYER_CHILD}Your{?}This{\\?} child spends most of {?CHILD.GENDER}her{?}his{\\?} free time fighting imaginary monsters with {?CHILD.GENDER}her{?}his{\\?} wooden toy sword."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.OneHanded
      }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_play_2", "training_sword", false)));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=wX0uzvRE}playing board games."), new TextObject("{=H7NJ0QHQ}You see {?PLAYER_CHILD}your{?}the{\\?} child endlessly re-arranging the pieces, inventing new rules and playing out stories in {?CHILD.GENDER}her{?}his{\\?} head."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Tactics
      }, new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician")));
      foreach (EducationCampaignBehavior.EducationOption option in educationPage2.Options)
        option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      TextObject stage_1_page_2_description = new TextObject("{=Zoes3ojA}{?CHILD.GENDER}Her{?}His{\\?} tutors continue to remark on {CHILD.NAME}'s progress, commending {?CHILD.GENDER}her{?}his{\\?} {ATR}.");
      EducationCampaignBehavior.EducationPage educationPage3 = stage5.AddPage(2, title, stage_1_page_2_description, this._confirmResultsText);
      (TextObject, TextObject, CharacterAttribute[])[] stage_1_page_2_options = new (TextObject, TextObject, CharacterAttribute[])[6]
      {
        (new TextObject("{=VdLkZthN}Mathematical Aptitude"), new TextObject("{=23YF84ib}{?PLAYER_CHILD}Your{?}The{\\?} child quickly solves problems in {?CHILD.GENDER}her{?}his{\\?} head, helping adults with their calculations."), new CharacterAttribute[1]
        {
          DefaultCharacterAttributes.Intelligence
        }),
        (new TextObject("{=6RckjM4S}Presence"), new TextObject("{=Instmiut}Your child is blessed with a strong and sonorous voice, making {?CHILD.GENDER}her{?}him{\\?} seem older and wiser than {?CHILD.GENDER}her{?}his{\\?} years."), new CharacterAttribute[1]
        {
          DefaultCharacterAttributes.Social
        }),
        (new TextObject("{=D1jGAX41}Courage"), new TextObject("{=WOriPdox}When trouble comes, {?PLAYER_CHILD}your child{?}{?CHILD.GENDER}she{?}he{\\?}{\\?} faces it head on."), new CharacterAttribute[1]
        {
          DefaultCharacterAttributes.Vigor
        }),
        (new TextObject("{=0D1ty8JA}Coordination"), new TextObject("{=ZkkHPpT7}Your child excels at any task that requires {?CHILD.GENDER}her{?}him{\\?} to use {?CHILD.GENDER}her{?}his{\\?} hands."), new CharacterAttribute[1]
        {
          DefaultCharacterAttributes.Control
        }),
        (new TextObject("{=JqaKRXNo}Craftiness"), new TextObject("{=1KWhhurv}Your tutor throws up his hands in the air at {CHILD.NAME}'s ability to lie {?CHILD.GENDER}her{?}his{\\?} way out of trouble, but can't help but admire it a little."), new CharacterAttribute[1]
        {
          DefaultCharacterAttributes.Cunning
        }),
        (new TextObject("{=la8jMuQ8}Energy"), new TextObject("{=RUjPcZhF}{?PLAYER_CHILD}Your{?}The{\\?} child is rarely even winded after {?CHILD.GENDER}her{?}his{\\?} daily exercises."), new CharacterAttribute[1]
        {
          DefaultCharacterAttributes.Endurance
        })
      };
      EducationCampaignBehavior.EducationCharacterProperties[] characterPropertiesArray1 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp")
      };
      EducationCampaignBehavior.EducationCharacterProperties[] characterPropertiesArray2 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_numbers"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_fierce"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_genius"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_fierce")
      };
      foreach ((TextObject, TextObject, CharacterAttribute[]) valueTuple in stage_1_page_2_options)
        valueTuple.Item2.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      for (int index1 = 0; index1 < stage_1_page_2_options.Length; ++index1)
      {
        int index = index1;
        EducationCampaignBehavior.EducationCharacterProperties childProperties2 = characterPropertiesArray2[index];
        EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties = characterPropertiesArray1[index];
        (TextObject, TextObject, CharacterAttribute[]) container = stage_1_page_2_options[index1];
        EducationCampaignBehavior.EducationOption option = new EducationCampaignBehavior.EducationOption(container.Item1, container.Item2, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) ((o, previousOptions) =>
        {
          int num = (previousOptions[0].RandomValue % stage_1_page_2_options.Length + previousOptions[1].RandomValue % stage_1_page_2_options.Length) % stage_1_page_2_options.Length == index ? 1 : 0;
          if (num == 0)
            return num != 0;
          stage_1_page_2_description.SetTextVariable("ATR", container.Item3[0].Name);
          return num != 0;
        }), (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, container.Item3, (SkillObject[]) null, childProperties2, specialCharacterProperties);
        educationPage3.AddOption(option);
      }
      return stage5;
    }

    private EducationCampaignBehavior.EducationStage CreateStage8(Hero child)
    {
      TextObject title1 = new TextObject("{=CU3u0c02}Childhood");
      EducationCampaignBehavior.EducationStage stage8 = new EducationCampaignBehavior.EducationStage(EducationCampaignBehavior.ChildAgeState.Year8);
      TextObject description1 = new TextObject("{=lZSu0iOo}{CHILD.NAME} is now at an age when it is customary to assign a well-born child a tutor. You decided to entrust {?CHILD.GENDER}her{?}him{\\?} to your... ");
      EducationCampaignBehavior.EducationCharacterProperties childProperties1 = new EducationCampaignBehavior.EducationCharacterProperties("act_inventory_idle_start", string.Empty, false);
      EducationCampaignBehavior.EducationPage educationPage = stage8.AddPage(0, title1, description1, this._chooseTutorText, childProperties1);
      TextObject title2 = new TextObject("{=aZjz2GfX}Master-at-arms");
      TextObject title3 = new TextObject("{=stewardprofession}Steward");
      TextObject title4 = new TextObject("{=qfzkMuLj}Artisan");
      TextObject title5 = new TextObject("{=a869yxLt}{?IS_BATTANIA_OR_KHUZAIT}Lorekeeper{?}Scholar{\\?}");
      title5.SetTextVariable("IS_BATTANIA_OR_KHUZAIT", this.ChildCultureHasLorekeeper(child) ? 1 : 0);
      TextObject title6 = new TextObject("{=cpLFQzx0}Huntsman");
      TextObject title7 = new TextObject("{=vAjNG9yn}{?IS_BATTANIA}Bard{?}Minstrel{\\?}");
      title7.SetTextVariable("IS_BATTANIA", this.ChildCultureHasBard(child) ? 1 : 0);
      TextObject description2 = new TextObject("{=d2KpUKxc}The master-at-arms is responsible for the training and discipline of your troops. With his help {?PLAYER_CHILD}your{?}the{\\?} child should grow to be a strong warrior.");
      TextObject description3 = new TextObject("{=rB96005A}The steward is in charge of running the day-to-day affairs of your estate. {?PLAYER_CHILD}Your{?}The{\\?} child should learn early how people and supplies are managed.");
      TextObject description4 = new TextObject("{=9sdTLp49}The master artisan supervises the work of any smiths, carpenters or masons that you hire. {?PLAYER_CHILD}Your{?}The{\\?} child will join in the hard work and learn both stamina and craftsmanship.");
      TextObject textObject1 = new TextObject("{=G7yjkafk}The lorekeeper is responsible for teaching children the ancestral knowledge of the clan, including genealogy, law, and medicine. {?PLAYER_CHILD}Your{?}The{\\?} child should gain a respect for learning.");
      TextObject textObject2 = new TextObject("{=XD39Ra5X}The scholar advises a lord on subjects such as history, medicine, heraldry and even engineering. {?PLAYER_CHILD}Your{?}The{\\?} child should gain a respect for learning.");
      TextObject description5 = new TextObject("{=!}{INTELLIGENCE_DESC}");
      TextObject description6 = new TextObject("{=gqUtaPRM}The huntsman organizes hunts and keeps watch for poachers and thieves. Your child should learn how to handle hunting bows and crossbows and the basics of scouting and tracking.");
      TextObject description7 = new TextObject("{=yHB4plew}The {?IS_BATTANIA}bard{?}minstrel{\\?} sings and plays the lute, shawm or the vielle, and chants epic poems of daring deeds and impossible romances. They are also known to show their wards a bit about the seemier side of life.");
      description7.SetTextVariable("IS_BATTANIA", this.ChildCultureHasBard(child) ? 1 : 0);
      TextObject[] textObjectArray = new TextObject[5]
      {
        description2,
        description3,
        description4,
        description5,
        textObject1
      };
      foreach (TextObject textObject3 in textObjectArray)
        textObject3.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      bool flag = this.ChildCultureHasLorekeeper(child);
      description5.SetTextVariable("INTELLIGENCE_DESC", flag ? textObject1 : textObject2);
      EducationCampaignBehavior.EducationCharacterProperties childProperties2 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_arms_2", "training_sword", false);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties1 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor");
      EducationCampaignBehavior.EducationCharacterProperties childProperties3 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties2 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor");
      EducationCampaignBehavior.EducationCharacterProperties childProperties4 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_artisan", "carry_linen", false);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties3 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor");
      EducationCampaignBehavior.EducationCharacterProperties childProperties5 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_book", "character_creation_notebook", true);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties4 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor");
      EducationCampaignBehavior.EducationCharacterProperties childProperties6 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties5 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor");
      EducationCampaignBehavior.EducationCharacterProperties childProperties7 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties6 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true);
      EducationCampaignBehavior.EducationOption stage_2_page_0_option_masterAtArms = new EducationCampaignBehavior.EducationOption(title2, description2, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Vigor
      }, (SkillObject[]) null, childProperties2, specialCharacterProperties1);
      EducationCampaignBehavior.EducationOption stage_2_page_0_option_steward = new EducationCampaignBehavior.EducationOption(title3, description3, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Social
      }, (SkillObject[]) null, childProperties3, specialCharacterProperties2);
      EducationCampaignBehavior.EducationOption stage_2_page_0_option_artisan = new EducationCampaignBehavior.EducationOption(title4, description4, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Endurance
      }, (SkillObject[]) null, childProperties4, specialCharacterProperties3);
      EducationCampaignBehavior.EducationOption stage_2_page_0_option_intelligence = new EducationCampaignBehavior.EducationOption(title5, description5, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Intelligence
      }, (SkillObject[]) null, childProperties5, specialCharacterProperties4);
      EducationCampaignBehavior.EducationOption stage_2_page_0_option_huntsman = new EducationCampaignBehavior.EducationOption(title6, description6, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Control
      }, (SkillObject[]) null, childProperties6, specialCharacterProperties5);
      EducationCampaignBehavior.EducationOption stage_2_page_0_option_cunning = new EducationCampaignBehavior.EducationOption(title7, description7, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Cunning
      }, (SkillObject[]) null, childProperties7, specialCharacterProperties6);
      educationPage.AddOption(stage_2_page_0_option_masterAtArms);
      educationPage.AddOption(stage_2_page_0_option_steward);
      educationPage.AddOption(stage_2_page_0_option_artisan);
      educationPage.AddOption(stage_2_page_0_option_intelligence);
      educationPage.AddOption(stage_2_page_0_option_huntsman);
      educationPage.AddOption(stage_2_page_0_option_cunning);
      TextObject description8 = new TextObject("{=ZjWDqx2Y}You trusted the child of the clan to the master-at-arms, an experienced warrior who no longer rides to the battlefield but has forgotten none of his skills. You had him to focus on...");
      EducationCampaignBehavior.EducationPage previousPage1 = stage8.AddPage(1, title1, description8, this._guideTutorText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_masterAtArms)));
      EducationCampaignBehavior.EducationCharacterProperties childProperties8 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties9 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_guard_up_staff", "carry_bostaff", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties10 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_focus", "training_sword", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties11 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_fierce");
      EducationCampaignBehavior.EducationCharacterProperties childProperties12 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_arms_2", "training_sword", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties13 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties7 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties8 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties9 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties10 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties11 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties12 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor");
      previousPage1.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Riding.Name, new TextObject("{=K08ed2LS}You asked your master-at-arms to make sure that as a noble, this {?CHILD.GENDER}daughter{?}son{\\?} of the clan knows how to hold {?CHILD.GENDER}herself{?}himself{\\?} properly on the saddle."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Riding
      }, childProperties8, specialCharacterProperties7));
      previousPage1.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Polearm.Name, new TextObject("{=LE0NCSPP}Every warrior needs to know the basics. Polearms are used by warriors of all classes, from feudal levies and urban militias to elite lancers."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Polearm
      }, childProperties9, specialCharacterProperties8));
      previousPage1.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.OneHanded.Name, new TextObject("{=PpuRM82X}The sword is the weapon of the noble warrior. It is useful both in the battlefield and in court, where it symbolizes a wearer's willingness to fight to protect {?CHILD.GENDER}her{?}his{\\?} honor."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.OneHanded
      }, childProperties10, specialCharacterProperties9));
      previousPage1.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Athletics.Name, new TextObject("{=C5UrdSgj}Fast legs and stamina are as vital to a warrior's survival as {?CHILD.GENDER}her{?}his{\\?} strength and skill."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Athletics
      }, childProperties11, specialCharacterProperties10));
      previousPage1.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.TwoHanded.Name, new TextObject("{=Adah5bay}The most powerful weapons require years of practice and conditioning to use properly. Their wielders need to start early."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.TwoHanded
      }, childProperties12, specialCharacterProperties11));
      previousPage1.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Bow.Name, new TextObject("{=QakanPLW}It will be years before the child can develop the strength, breathing techniques, and patience needed to wield a powerful bow, but it never hurts to start early."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Bow
      }, childProperties13, specialCharacterProperties12));
      foreach (EducationCampaignBehavior.EducationOption option in previousPage1.Options)
        option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      TextObject description9 = new TextObject("{=BTdTSzxF}You felt that your child should learn first and foremost how to manage the family property and govern your retainers.");
      EducationCampaignBehavior.EducationPage previousPage2 = stage8.AddPage(1, title1, description9, this._guideTutorText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_steward)));
      EducationCampaignBehavior.EducationCharacterProperties childProperties14 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_numbers");
      EducationCampaignBehavior.EducationCharacterProperties childProperties15 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_memory");
      EducationCampaignBehavior.EducationCharacterProperties childProperties16 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners_3");
      EducationCampaignBehavior.EducationCharacterProperties childProperties17 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties18 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader");
      EducationCampaignBehavior.EducationCharacterProperties childProperties19 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_decisive");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties13 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties14 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties15 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties16 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties17 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties18 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor");
      previousPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Steward.Name, new TextObject("{=XsQ5rabf}The first thing that a steward must know is to how to count add numbers together. "), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Steward
      }, childProperties14, specialCharacterProperties13));
      previousPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Trade.Name, new TextObject("{=T0LaDdAs}It is important that the child of the clan learns about the goods and their prices, that kind of understanding will be useful for all {?CHILD.GENDER}her{?}his{\\?} life."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Trade
      }, childProperties15, specialCharacterProperties14));
      previousPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Charm.Name, new TextObject("{=pHmz4GZN}Everything is easier when people are pleased by your presence. Proper grace and etiquette will be useful even among enemies."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Charm
      }, childProperties16, specialCharacterProperties15));
      previousPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Riding.Name, new TextObject("{=hB72eE6b}Horses are among your clan's most valuable assets, so you encouraged your steward to take the child along on his frequent inspections of the stables."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Riding
      }, childProperties17, specialCharacterProperties16));
      previousPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Leadership.Name, new TextObject("{=N1WyvVHY}You instructed the child to pay close attention to how the steward exerts authority."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Leadership
      }, childProperties18, specialCharacterProperties17));
      previousPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Roguery.Name, new TextObject("{=SA4JbVo2}Your steward acts as magistrate in the lord's absence. {?PLAYER_CHILD}Your{?}The{\\?} child will sit at his side as he rules on land disputes, family feuds, and cases of alleged banditry, giving {?CHILD.GENDER}her{?}him{\\?} a look at the darker side of life in Calradia."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Roguery
      }, childProperties19, specialCharacterProperties18));
      foreach (EducationCampaignBehavior.EducationOption option in previousPage2.Options)
        option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      TextObject description10 = new TextObject("{=6apaXF8k}You wanted this child to learn most from those who worked with their hands for a living. You asked an artisan in your employ to teach {?CHILD.GENDER}her{?}him{\\?}...");
      EducationCampaignBehavior.EducationPage previousPage3 = stage8.AddPage(1, title1, description10, this._guideTutorText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_artisan)));
      EducationCampaignBehavior.EducationCharacterProperties childProperties20 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties21 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_memory");
      EducationCampaignBehavior.EducationCharacterProperties childProperties22 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_arms", "training_sword", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties23 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready", "carry_book_left", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties24 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      EducationCampaignBehavior.EducationCharacterProperties childProperties25 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_militia", "carry_hammer", false);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties19 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties20 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties21 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties22 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties23 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties24 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor");
      previousPage3.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Crafting.Name, new TextObject("{=bx6Jhhui}The artisan should make sure that the child knows the basics of smithing, fletching and pole-turning, and that men who work with their hands take pride in their work."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Crafting
      }, childProperties20, specialCharacterProperties19));
      previousPage3.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Trade.Name, new TextObject("{=xHstOUBx}You made sure your artisan taught this child to recognize quality work, as well as its worth in denars."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Trade
      }, childProperties21, specialCharacterProperties20));
      previousPage3.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.OneHanded.Name, new TextObject("{=Ir7BP5bD}The best smiths are those that understand how their tools are used. Your child will be tasked with sparring with the weapons and testing their edges. "), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.OneHanded
      }, childProperties22, specialCharacterProperties21));
      previousPage3.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Engineering.Name, new TextObject("{=N0eHkPV2}A craftsman makes parts and an engineer fits them together. The best artisans learn to do both."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Engineering
      }, childProperties23, specialCharacterProperties22));
      previousPage3.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Steward.Name, new TextObject("{=tyzzUNN7}You instructed the artisan to teach your the child the basics of managing a workshop."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Steward
      }, childProperties24, specialCharacterProperties23));
      previousPage3.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Athletics.Name, new TextObject("{=biqBLGwa}You told the artisan to make sure that {?PLAYER_CHILD}your{?}the{\\?} child works hard, and that {?CHILD.GENDER}she{?}he{\\?} swings the hammer for hours in the blazing heat of the forge. It tempers the soul, you believe."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Athletics
      }, childProperties25, specialCharacterProperties24));
      foreach (EducationCampaignBehavior.EducationOption option in previousPage3.Options)
        option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      TextObject description11 = new TextObject("{=pb8fmbVl}You asked your {?IS_BATTANIA_OR_KHUZAIT}lorekeeper{?}scholar{\\?} to focus particularly on the art of...");
      description11.SetTextVariable("IS_BATTANIA_OR_KHUZAIT", this.ChildCultureHasLorekeeper(child) ? 1 : 0);
      EducationCampaignBehavior.EducationPage previousPage4 = stage8.AddPage(1, title1, description11, this._guideTutorText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_intelligence)));
      EducationCampaignBehavior.EducationCharacterProperties childProperties26 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_gracious", "carry_book", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties27 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_clever_2", "carry_scroll", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties28 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader");
      EducationCampaignBehavior.EducationCharacterProperties childProperties29 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      EducationCampaignBehavior.EducationCharacterProperties childProperties30 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_appearances");
      EducationCampaignBehavior.EducationCharacterProperties childProperties31 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties25 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties26 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties27 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties28 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties29 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties30 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor");
      previousPage4.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Medicine.Name, new TextObject("{=5pGCtBhd}You asked that your child be schooled over the next few years in all the treatises that can be found on human body, its ailments, and their treatments."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Medicine
      }, childProperties26, specialCharacterProperties25));
      previousPage4.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Engineering.Name, new TextObject("{=CtImGA4A}Most tutors teach mathematics from tracing the path of stars in the sky, but you wanted your {?IS_BATTANIA_OR_KHUZAIT}lorekeeper{?}scholar{\\?} to focus on the more practical architectural treatises."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Engineering
      }, childProperties27, specialCharacterProperties26));
      previousPage4.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Leadership.Name, new TextObject("{=Nn8bmGUX}You make sure that the child would be taught the deeds of the leaders of your people, and memorize the rhetoric they used to inspire their followers."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Leadership
      }, childProperties28, specialCharacterProperties27));
      previousPage4.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Charm.Name, new TextObject("{=MgPubWOa}The epics are full of men and women who preferred words to the sword, and who could win the friendship of allies and the admiration of enemies."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Charm
      }, childProperties29, specialCharacterProperties28));
      previousPage4.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Steward.Name, new TextObject("{=c4NPLD0S}Any child of a noble clan needs to know how some kings and emperors accumulated wealth and how others squandered it."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Steward
      }, childProperties30, specialCharacterProperties29));
      previousPage4.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Tactics.Name, new TextObject("{=3iED3Ca9}To craft a tactic one must first have an idea of what has worked in the past and what has failed, and any commander should know the course and outcome of as many battles as possible."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Tactics
      }, childProperties31, specialCharacterProperties30));
      foreach (EducationCampaignBehavior.EducationOption option in previousPage4.Options)
      {
        option.Description.SetTextVariable("IS_BATTANIA_OR_KHUZAIT", this.ChildCultureHasLorekeeper(child) ? 1 : 0);
        option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      }
      TextObject description12 = new TextObject("{=ed5JVSQm}You asked the huntsman to spend as much time as possible outdoors, accustomizing the child to the dangers and hardships of the wild. You asked him to teach the child...");
      EducationCampaignBehavior.EducationPage previousPage5 = stage8.AddPage(1, title1, description12, this._guideTutorText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_huntsman)));
      EducationCampaignBehavior.EducationCharacterProperties childProperties32 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_explorer", "torch_a_wm", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties33 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties34 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_guard_up_staff", "carry_bostaff", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties35 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_gracious", "carry_book", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties36 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties37 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties31 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties32 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties33 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties34 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties35 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor");
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties36 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor");
      previousPage5.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Scouting.Name, new TextObject("{=lbHswWdb}Hunting is all about being aware of your surroundings and tracking your prey. You felt that the same skills would serve a lord well in journeys across the wild."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Scouting
      }, childProperties32, specialCharacterProperties31));
      previousPage5.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Bow.Name, new TextObject("{=ItS9F61H}You told {CHILD.NAME} that any young noble worth {?CHILD.GENDER}her{?}his{\\?} salt should be able to bring down a deer from fifty paces away, or hit a rabbit on the run."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Bow
      }, childProperties33, specialCharacterProperties32));
      previousPage5.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Polearm.Name, new TextObject("{=bZlhwK0a}Bows are all very well for small game, but those who pursue bears, boar or wolves bring spears along."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Polearm
      }, childProperties34, specialCharacterProperties33));
      previousPage5.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Medicine.Name, new TextObject("{=rPP0OSBm}Treating sprained ankles, broken bones and lamed horses are as much a part of a hunting expedition as skinning and gutting your quarry."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Medicine
      }, childProperties35, specialCharacterProperties34));
      previousPage5.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Athletics.Name, new TextObject("{=EbRDo6Lv}A hunter should be able to endure long treks over rough ground and pursue a wounded quarry until it drops."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Athletics
      }, childProperties36, specialCharacterProperties35));
      previousPage5.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Tactics.Name, new TextObject("{=b9nvCgYF}A hunter knows how to prepare a trap and how to draw a prey to it, and, when dangerous predators are about, how to avoid becoming the hunted."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Tactics
      }, childProperties37, specialCharacterProperties36));
      foreach (EducationCampaignBehavior.EducationOption option in previousPage5.Options)
        option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      TextObject description13 = new TextObject("{=CZuYne8X}Singing, dancing and playing an instrument is important but the {?IS_BATTANIA}bard{?}minstrel{\\?} knows more. You asked him to make sure the child is also skilled in...");
      description13.SetTextVariable("IS_BATTANIA", this.ChildCultureHasBard(child) ? 1 : 0);
      EducationCampaignBehavior.EducationPage previousPage6 = stage8.AddPage(1, title1, description13, this._guideTutorText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_cunning)));
      EducationCampaignBehavior.EducationCharacterProperties childProperties38 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      EducationCampaignBehavior.EducationCharacterProperties childProperties39 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_fierce");
      EducationCampaignBehavior.EducationCharacterProperties childProperties40 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_explorer", "torch_a_wm", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties41 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader");
      EducationCampaignBehavior.EducationCharacterProperties childProperties42 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_throw", "spear_new_f_1-9m", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties43 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties37 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties38 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties39 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties40 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties41 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true);
      EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties42 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true);
      previousPage6.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Charm.Name, new TextObject("{=fxDr44K4}A silvered tongue gets you far. You want {CHILD.NAME} to learn how to ferret out people's motivations, flatter their egos, and convince them that their interests are aligned."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Charm
      }, childProperties38, specialCharacterProperties37));
      previousPage6.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Athletics.Name, new TextObject("{=9m5M3Yf9}Some nobles may consider it vulgar and common, but the art of acrobatics is demanding and often has very practical applications."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Athletics
      }, childProperties39, specialCharacterProperties38));
      previousPage6.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Scouting.Name, new TextObject("{=dqg4nlo9}{?IS_BATTANIA}Bard{?}Minstrel{\\?}s frequently sing of nature and the hunt and are often great travellers, skilled at living rough on the land. The child was encouraged to accompany the {?IS_BATTANIA}bard{?}minstrel{\\?} on his roamings."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Scouting
      }, childProperties40, specialCharacterProperties39));
      previousPage6.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Leadership.Name, new TextObject("{=KC7rLf4b}The {?IS_BATTANIA}bard{?}minstrel{\\?} had the child memorize the speeches of epic heroes, teaching {?CHILD.GENDER}her{?}him{\\?} how to appeal to your people's pride in their ancestors."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Leadership
      }, childProperties41, specialCharacterProperties40));
      previousPage6.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Throwing.Name, new TextObject("{=1oPRugXl}Trick knife throws and swift evasions can entertain a marketplace crowd, but are useful on the battlefield as well. "), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Throwing
      }, childProperties42, specialCharacterProperties41));
      previousPage6.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Roguery.Name, new TextObject("{=XDafe4Bg}The {?IS_BATTANIA}bard{?}minstrel{\\?} will take the child along on his adventures in town and you've indicated that you'll turn a blind eye, considering it a useful skill to know how to get in and out of trouble."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Roguery
      }, childProperties43, specialCharacterProperties42));
      foreach (EducationCampaignBehavior.EducationOption option in previousPage6.Options)
      {
        option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
        option.Description.SetTextVariable("IS_BATTANIA", this.ChildCultureHasBard(child) ? 1 : 0);
      }
      TextObject description14 = new TextObject("{=KbnGyw0v}Your master-at-arms is happy with the child's progress. He informs you that {?CHILD.GENDER}she{?}he{\\?} shows some natural talent in {SKILL}.");
      EducationCampaignBehavior.EducationPage currentPage1 = stage8.AddPage(2, title1, description14, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_masterAtArms)));
      List<SkillObject> skills1 = new List<SkillObject>()
      {
        DefaultSkills.Riding,
        DefaultSkills.Athletics,
        DefaultSkills.Bow,
        DefaultSkills.Polearm,
        DefaultSkills.TwoHanded,
        DefaultSkills.OneHanded
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties44 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_guard_up_staff", "carry_bostaff", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_arms_2", "training_sword", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_focus", "training_sword", false)
      };
      EducationCampaignBehavior.EducationCharacterProperties[] tutorProperties1 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_closed_tutor")
      };
      this.Stage2Selection(skills1, previousPage1, currentPage1, childProperties44, tutorProperties1);
      TextObject description15 = new TextObject("{=GvSVxyO0}Your steward is happy with the child's progress. He informs you that {?CHILD.GENDER}she{?}he{\\?} shows some natural talent in {SKILL}.");
      EducationCampaignBehavior.EducationPage currentPage2 = stage8.AddPage(2, title1, description15, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_steward)));
      List<SkillObject> skills2 = new List<SkillObject>()
      {
        DefaultSkills.Riding,
        DefaultSkills.Steward,
        DefaultSkills.Trade,
        DefaultSkills.Charm,
        DefaultSkills.Leadership,
        DefaultSkills.Roguery
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties45 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners_3"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_genius"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader_2"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false)
      };
      EducationCampaignBehavior.EducationCharacterProperties[] tutorProperties2 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident2_tutor")
      };
      this.Stage2Selection(skills2, previousPage2, currentPage2, childProperties45, tutorProperties2);
      TextObject description16 = new TextObject("{=kwgCnueo}Your master artisan is happy with the child's progress. He informs you that {?CHILD.GENDER}she{?}he{\\?} shows some natural talent in {SKILL}.");
      EducationCampaignBehavior.EducationPage currentPage3 = stage8.AddPage(2, title1, description16, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_artisan)));
      List<SkillObject> skills3 = new List<SkillObject>()
      {
        DefaultSkills.Crafting,
        DefaultSkills.OneHanded,
        DefaultSkills.Trade,
        DefaultSkills.Engineering,
        DefaultSkills.Steward,
        DefaultSkills.Athletics
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties46 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_artisan", "carry_linen", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_focus", "training_sword", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_genius"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete")
      };
      EducationCampaignBehavior.EducationCharacterProperties[] tutorProperties3 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_confident_tutor")
      };
      this.Stage2Selection(skills3, previousPage3, currentPage3, childProperties46, tutorProperties3);
      TextObject description17 = new TextObject("{=gp1qYbgb}Your {?IS_BATTANIA_OR_KHUZAIT}lorekeeper{?}scholar{\\?} is happy with the child's progress. He informs you that {?CHILD.GENDER}she{?}he{\\?} shows some natural talent in {SKILL}.");
      description17.SetTextVariable("IS_BATTANIA_OR_KHUZAIT", this.ChildCultureHasLorekeeper(child) ? 1 : 0);
      EducationCampaignBehavior.EducationPage currentPage4 = stage8.AddPage(2, title1, description17, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_intelligence)));
      List<SkillObject> skills4 = new List<SkillObject>()
      {
        DefaultSkills.Medicine,
        DefaultSkills.Charm,
        DefaultSkills.Tactics,
        DefaultSkills.Engineering,
        DefaultSkills.Steward,
        DefaultSkills.Leadership
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties47 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready", "carry_book_left", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_clever_2", "carry_scroll", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners_3"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader_2")
      };
      EducationCampaignBehavior.EducationCharacterProperties[] tutorProperties4 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_demure_tutor")
      };
      this.Stage2Selection(skills4, previousPage4, currentPage4, childProperties47, tutorProperties4);
      foreach (EducationCampaignBehavior.EducationOption option in currentPage4.Options)
      {
        option.Title.SetTextVariable("IS_BATTANIA_OR_KHUZAIT", this.ChildCultureHasLorekeeper(child) ? 1 : 0);
        option.Description.SetTextVariable("IS_BATTANIA_OR_KHUZAIT", this.ChildCultureHasLorekeeper(child) ? 1 : 0);
      }
      TextObject description18 = new TextObject("{=JGEQ68jc}Your huntsman is happy with the child's progress. He informs you that {?CHILD.GENDER}she{?}he{\\?} shows some natural talent in {SKILL}.");
      EducationCampaignBehavior.EducationPage currentPage5 = stage8.AddPage(2, title1, description18, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_huntsman)));
      List<SkillObject> skills5 = new List<SkillObject>()
      {
        DefaultSkills.Scouting,
        DefaultSkills.Bow,
        DefaultSkills.Polearm,
        DefaultSkills.Medicine,
        DefaultSkills.Athletics,
        DefaultSkills.Tactics
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties48 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_explorer", "torch_a_wm", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_guard_up_staff", "carry_bostaff", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready", "carry_book_left", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician")
      };
      EducationCampaignBehavior.EducationCharacterProperties[] tutorProperties5 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hip_tutor")
      };
      this.Stage2Selection(skills5, previousPage5, currentPage5, childProperties48, tutorProperties5);
      TextObject description19 = new TextObject("{=iSppZBje}You don't need to know the full story of the child's escapades in the {?IS_BATTANIA}bard{?}minstrel{\\?}'s company, but the {?IS_BATTANIA}bard{?}minstrel{\\?} does inform you that {?CHILD.GENDER}she{?}he{\\?} shows some natural talent in {SKILL}.");
      description19.SetTextVariable("IS_BATTANIA", this.ChildCultureHasBard(child) ? 1 : 0);
      EducationCampaignBehavior.EducationPage currentPage6 = stage8.AddPage(2, title1, description19, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_2_page_0_option_cunning)));
      List<SkillObject> skills6 = new List<SkillObject>()
      {
        DefaultSkills.Scouting,
        DefaultSkills.Charm,
        DefaultSkills.Leadership,
        DefaultSkills.Throwing,
        DefaultSkills.Athletics,
        DefaultSkills.Roguery
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties49 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_explorer", "torch_a_wm", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader_2"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_throw", "spear_new_f_1-9m", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false)
      };
      EducationCampaignBehavior.EducationCharacterProperties[] tutorProperties6 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_guitar", true)
      };
      this.Stage2Selection(skills6, previousPage6, currentPage6, childProperties49, tutorProperties6);
      foreach (EducationCampaignBehavior.EducationOption option in currentPage6.Options)
      {
        option.Title.SetTextVariable("CUNNING_PROFESSION", this.ChildCultureHasBard(child) ? 1 : 0);
        option.Description.SetTextVariable("CUNNING_PROFESSION", this.ChildCultureHasBard(child) ? 1 : 0);
      }
      return stage8;
    }

    private EducationCampaignBehavior.EducationStage CreateStage11(Hero child)
    {
      TextObject title = new TextObject("{=ok8lSW6M}Youth");
      EducationCampaignBehavior.EducationStage stage11 = new EducationCampaignBehavior.EducationStage(EducationCampaignBehavior.ChildAgeState.Year11);
      TextObject description1 = new TextObject("{=Rmbd2OkI}You are usually away from your estate, but when you are able to spend time with {CHILD.NAME}, you encouraged {?CHILD.GENDER}her{?}him{\\?} to develop...");
      EducationCampaignBehavior.EducationCharacterProperties childProperties1 = new EducationCampaignBehavior.EducationCharacterProperties("act_inventory_idle_start", string.Empty, false);
      EducationCampaignBehavior.EducationPage educationPage1 = stage11.AddPage(0, title, description1, this._chooseFocusText, childProperties1);
      EducationCampaignBehavior.EducationCharacterProperties childProperties2 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete");
      EducationCampaignBehavior.EducationCharacterProperties childProperties3 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_fierce");
      EducationCampaignBehavior.EducationCharacterProperties childProperties4 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_book", "notebook", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties5 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician");
      EducationCampaignBehavior.EducationCharacterProperties childProperties6 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties7 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=m4kr4RXD}{?CHILD.GENDER}her{?}his{\\?} strength."), new TextObject("{=QbwNmxrn}You told {?CHILD.GENDER}her{?}him{\\?} that skill and brains are all very well, but in many situations there is no substitute for sheer brute might."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Vigor
      }, (SkillObject[]) null, childProperties2));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=3fvj2Eti}{?CHILD.GENDER}her{?}his{\\?} endurance."), new TextObject("{=GARAmzFT}To thrive you must learn to travel faster, work longer, and fight harder than anyone who stands against you."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Endurance
      }, (SkillObject[]) null, childProperties3));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=Gitd3DN8}a thirst for knowledge."), new TextObject("{=JHMHcZEp}You have seen many marvels on your travels and heard of many more, and one day, you believe, the philosophers of science will rule the world."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Intelligence
      }, (SkillObject[]) null, childProperties4));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=7P3wiojT}a sharp mind."), new TextObject("{=78dta9Ys}You told {?CHILD.GENDER}her{?}him{\\?} that it is cheaper, safer and wiser to win a battle without fighting, if it is possible to do so."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Cunning
      }, (SkillObject[]) null, childProperties5));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=LEoZ2DV5}a good eye and a steady hand."), new TextObject("{=8mk6gwvh}You told {?CHILD.GENDER}her{?}him{\\?} that a good eye can spot dangers from afar, and a steady hand can take them down before they get close."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Control
      }, (SkillObject[]) null, childProperties6));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=ulFmGvtj}an interest in people."), new TextObject("{=HaAjWFrt}You told {?CHILD.GENDER}her{?}him{\\?} that understanding people's motivations and turning them to your advantage is the difference between a warrior and a king."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Social
      }, (SkillObject[]) null, childProperties7));
      TextObject description2 = new TextObject("{=Y8jAaICu}One day {?PLAYER_CHILD}your{?}the{\\?} child asks you which of your skills was most useful to you. You thought for a while, and answered...");
      description2.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      EducationCampaignBehavior.EducationPage educationPage2 = stage11.AddPage(1, title, description2, this._chooseSkillText);
      EducationCampaignBehavior.EducationCharacterProperties childProperties8 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_guard_up_staff", "carry_bostaff", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties9 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician");
      EducationCampaignBehavior.EducationCharacterProperties childProperties10 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      EducationCampaignBehavior.EducationCharacterProperties childProperties11 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties12 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader_2");
      EducationCampaignBehavior.EducationCharacterProperties childProperties13 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_genius");
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Polearm.Name, new TextObject("{=3lDTSlpU}Even the most skilled swordsman or the strongest axe-wielder is to a lancer as the rabbit is to the eagle."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Polearm
      }, childProperties8));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Tactics.Name, new TextObject("{=2s6cH2kE}Even the finest swordsman can perish if his lord is ignorant of the difference between necessary risks and reckless, unnecessary ones."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Tactics
      }, childProperties9));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Steward.Name, new TextObject("{=ePNba38W}Armies win battles, but farms and towns win wars."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Steward
      }, childProperties10));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Engineering.Name, new TextObject("{=bnPgkPv2}Towers, domes and gates are wonders that we must never take for granted."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Engineering
      }, childProperties11));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Leadership.Name, new TextObject("{=jqstr7ZL}Learn to fire men's pride, stoke their anger and dispel their fears, and they will turn from men into lions who will do anything for you."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Leadership
      }, childProperties12));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(DefaultSkills.Trade.Name, new TextObject("{=T3vJp4PG}Whoever grasps how prices work can pluck silver out of thin air."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Trade
      }, childProperties13));
      TextObject description3 = new TextObject("{=LUro3Sqr}While spending time with {?PLAYER_CHILD}your{?}the{\\?} child, you notice that {?CHILD.GENDER}she{?}he{\\?} shows real ability in {RANDOM_OUTCOME}.");
      description3.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      EducationCampaignBehavior.EducationPage stage_3_page_2 = stage11.AddPage(2, title, description3, this._confirmResultsText);
      (TextObject, TextObject, SkillObject)[] stage_3_page_2_options = new (TextObject, TextObject, SkillObject)[6]
      {
        (DefaultSkills.Athletics.Name, new TextObject("{=tMUla7vz}{?CHILD.GENDER}She{?}He{\\?} is light but strong, and can outrun almost all of {?CHILD.GENDER}her{?}his{\\?} peers."), DefaultSkills.Athletics),
        (DefaultSkills.Riding.Name, new TextObject("{=MdjZ56VR}{?CHILD.GENDER}She{?}He{\\?} sits on the saddle so comfortably, like {?CHILD.GENDER}she{?}he{\\?} was born on it."), DefaultSkills.Riding),
        (DefaultSkills.Crafting.Name, new TextObject("{=OrbOwQGB}Sometimes you spot {?PLAYER_CHILD}your{?}the{\\?} child carving a piece of wood into a face or a fantastic beast, and you could not help but notice the subtle mastery of {?CHILD.GENDER}her{?}his{\\?} hands."), DefaultSkills.Crafting),
        (DefaultSkills.Medicine.Name, new TextObject("{=6EaKsRtu}Accidents are inevitable, and {?PLAYER_CHILD}your{?}the{\\?} child isn't bothered by the sight of blood. {?CHILD.GENDER}She{?}He{\\?} acts quickly to staunch bleeding and prevent infection."), DefaultSkills.Medicine),
        (DefaultSkills.Scouting.Name, new TextObject("{=7Hd5yW7B}{?CHILD.GENDER}She{?}He{\\?} is at home in the wilderness. {?CHILD.GENDER}She{?}He{\\?} moves like a cat, and has very keen ears and eyes."), DefaultSkills.Scouting),
        (DefaultSkills.Charm.Name, new TextObject("{=0FIbRZsi}You can not help but notice how people are put at ease by {?PLAYER_CHILD}your {?CHILD.GENDER}daughter{?}son{\\?}{?}the {?CHILD.GENDER}girl{?}boy{\\?}{\\?} and seek {?CHILD.GENDER}her{?}his{\\?} company."), DefaultSkills.Charm)
      };
      foreach ((TextObject, TextObject, SkillObject) valueTuple in stage_3_page_2_options)
        valueTuple.Item2.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      EducationCampaignBehavior.EducationCharacterProperties[] characterPropertiesArray = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_gracious", "carry_book", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners")
      };
      for (int index1 = 0; index1 < stage_3_page_2_options.Length; ++index1)
      {
        int index = index1;
        EducationCampaignBehavior.EducationCharacterProperties childProperties14 = characterPropertiesArray[index];
        (TextObject textObject, TextObject description4, SkillObject skillObject) = stage_3_page_2_options[index];
        EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate condition = (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) ((o, previousOptions) =>
        {
          int num = (previousOptions[0].RandomValue % stage_3_page_2_options.Length + previousOptions[1].RandomValue % stage_3_page_2_options.Length) % stage_3_page_2_options.Length == index ? 1 : 0;
          if (num == 0)
            return num != 0;
          stage_3_page_2.Description.SetTextVariable("RANDOM_OUTCOME", textObject);
          return num != 0;
        });
        stage_3_page_2.AddOption(new EducationCampaignBehavior.EducationOption(textObject, description4, (TextObject) null, condition, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
        {
          skillObject
        }, childProperties14));
      }
      return stage11;
    }

    private EducationCampaignBehavior.EducationStage CreateStage14(Hero child)
    {
      TextObject title = new TextObject("{=rcoueCmk}Adolescence");
      EducationCampaignBehavior.EducationStage stage14 = new EducationCampaignBehavior.EducationStage(EducationCampaignBehavior.ChildAgeState.Year14);
      TextObject description1 = new TextObject("{=3O1Pg3Ie}At {?CHILD.GENDER}her{?}his{\\?} 14th birthday you gave {CHILD.NAME} a special present. You have seen {?CHILD.GENDER}her{?}him{\\?} treasure it and believe it will shape who {?CHILD.GENDER}she{?}he{\\?} is. You gave {?CHILD.GENDER}her{?}him{\\?}...");
      EducationCampaignBehavior.EducationCharacterProperties childProperties1 = new EducationCampaignBehavior.EducationCharacterProperties("act_inventory_idle_start", string.Empty, false);
      EducationCampaignBehavior.EducationPage educationPage1 = stage14.AddPage(0, title, description1, this._chooseGiftText, childProperties1);
      EducationCampaignBehavior.EducationCharacterProperties childProperties2 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_arms", "vlandia_twohanded_sword_c", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties3 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties4 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_clever_2", "carry_scroll", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties5 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_sharp", "carry_game_left", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties6 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties7 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_appearances");
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=BYadInfL}a well-balanced sword."), new TextObject("{=K31F1yPI}When you pick up this blade you can almost feel it dance in your hand. Its edge can cut through a stout poll or a human hair drifting on the wind. "), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Vigor
      }, new SkillObject[1]{ DefaultSkills.OneHanded }, childProperties2));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=l5aOTKUi}a magnificent steed."), new TextObject("{=DfbYtRyj}You had second thoughts about giving {?PLAYER_CHILD}your{?}the{\\?} child such a spirited animal, but {?CHILD.GENDER}she{?}he{\\?} lept upon its back and galloped like the wind across your pastures."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Endurance
      }, new SkillObject[1]{ DefaultSkills.Riding }, childProperties3));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=bwYRMGIN}a treatise on siegecraft."), new TextObject("{=cr2jmYxg}You remember poring over the hand-drawn schematics of mangonels and towers for hours, imagining that one day you might build one of these awesome instruments of destruction yourself."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Intelligence
      }, new SkillObject[1]{ DefaultSkills.Engineering }, childProperties4));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=iMtCbEb3}a finely carved gameboard."), new TextObject("{=fzxJZZEH}Each piece is a work of art. Even without an opponent one could set it up and gaze upon it for hours, contemplating moves and counter-moves."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Cunning
      }, new SkillObject[1]{ DefaultSkills.Tactics }, childProperties5));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=ocl6ECmt}a well-tempered bow."), new TextObject("{=S3RZLOsv}You can sense the power in the laminated sinews and wood of this weapon. It was made for the calloused hands of a veteran archer and {CHILD.NAME} may need years to be able to fully draw it back, but you know {?CHILD.GENDER}she{?}he{\\?} will be motivated to master it."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Control
      }, new SkillObject[1]{ DefaultSkills.Bow }, childProperties6));
      educationPage1.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=UpgqdJC0}a trip to your realm's court."), new TextObject("{=bTj16PqR}Every well-born youth wants to see the center of it all, where the lords and ladies gather in splendor to converse and connive. You invited the child to see the spectacle first hand, and provided the elegant clothes {?CHILD.GENDER}she{?}he{\\?}'d need to be part of it. "), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Social
      }, new SkillObject[1]{ DefaultSkills.Charm }, childProperties7));
      foreach (EducationCampaignBehavior.EducationOption option in educationPage1.Options)
        option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      TextObject description2 = new TextObject("{=GOt2uRcJ}In adolescence, {?CHILD.GENDER}she{?}he{\\?} began to take on serious responsibilities and compete with adults as a near-equal. {?CHILD.GENDER}She{?}He{\\?} managed to...");
      EducationCampaignBehavior.EducationPage educationPage2 = stage14.AddPage(1, title, description2, this._chooseAchievementText);
      EducationCampaignBehavior.EducationCharacterProperties childProperties8 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_apprentice", "vlandia_twohanded_sword_c", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties9 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties10 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties11 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_gracious", "carry_book", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties12 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties13 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners_3");
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=IMaTTgPJ}defeat {?CHILD.GENDER}her{?}his{\\?} fencing instructor."), new TextObject("{=cnbeJh6Y}After many tries {?CHILD.GENDER}she{?}he{\\?} successfully beat {?CHILD.GENDER}her{?}his{\\?} tutor, fair and square, during sparring."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.OneHanded
      }, childProperties8));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=EP0gEG0L}win a race."), new TextObject("{=7mbE4z2v}{?CHILD.GENDER}She{?}He{\\?} won a friendly horse racing competition, and was rewarded with a magnificent saddle."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Riding
      }, childProperties9));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=ksXTQXOX}craft a weapon."), new TextObject("{=6WUaFzlv}{?PLAYER_CHILD}Your{?}The{\\?} child forged a sword - blade, hilt and pommel. The artisan said that he has never seen such dedication and patience in one so young."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Engineering
      }, childProperties10));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=bX841Jau}learn the arts of healing."), new TextObject("{=3hFT34l1}{?PLAYER_CHILD}Your{?}The{\\?} child helps out the local physician, binding and cleaning wounds and, when the master is absent, prescribing remedies."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Medicine
      }, childProperties11));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=ltbU06Fi}become a crack shot."), new TextObject("{=7JoiyH1Y}You heard that {CHILD.NAME} could put an arrow through an arm ring from 100 paces away, but you didn't believe it until you saw it."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Bow
      }, childProperties12));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=pHbnAZtt}trade like a veteran merchant."), new TextObject("{=oaXAY8bw}{?PLAYER_CHILD}Your{?}The{\\?} child asked to borrow money to trade with a passing caravan. You figure {?CHILD.GENDER}she{?}he{\\?}'d be sharped and learn a lesson, but in fact the {?CHILD.GENDER}girl{?}boy{\\?} secured a very lucrative deal."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Trade
      }, childProperties13));
      foreach (EducationCampaignBehavior.EducationOption option in educationPage2.Options)
        option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      TextObject stage_4_page_2_description = new TextObject("{=jukOfT2Z}Outside events also intruded on {CHILD.NAME}'s adolescence. You believe {?CHILD.GENDER}she{?}he{\\?} was particularly shaped by {RANDOM_OUTCOME}. This event increased {?CHILD.GENDER}her{?}his{\\?} skills in {SKILL_1} and {SKILL_2}.");
      EducationCampaignBehavior.EducationPage educationPage3 = stage14.AddPage(2, title, stage_4_page_2_description, this._confirmResultsText);
      (TextObject, TextObject, SkillObject[])[] stage_4_page_2_option = new (TextObject, TextObject, SkillObject[])[6]
      {
        (new TextObject("{=43zzbI1J}enemy incursions"), new TextObject("{=AaahFmxv}War was never too far away. On more than one occasion, {CHILD.NAME} spotted foes on the horizon and needed to ride away as quickly as possible."), new SkillObject[2]
        {
          DefaultSkills.Athletics,
          DefaultSkills.Riding
        }),
        (new TextObject("{=y9RcWMbQ}a local rivalry"), new TextObject("{=R7A3aPwi}A neighboring noble's brutish son took an interest in persecuting {CHILD.NAME}, but the young {?CHILD.GENDER}woman{?}man{\\?} gave him reason to look elsewhere for his prey."), new SkillObject[2]
        {
          DefaultSkills.OneHanded,
          DefaultSkills.TwoHanded
        }),
        (new TextObject("{=gHgUwteP}natural disasters"), new TextObject("{=lDMrl7sd}Your district saw more than its share of floods and fires, and {CHILD.NAME} joined in the effort to stem the destruction and rebuild afterwards."), new SkillObject[2]
        {
          DefaultSkills.Crafting,
          DefaultSkills.Engineering
        }),
        (new TextObject("{=mzu6exTe}an outbreak of plague"), new TextObject("{=kAtxHSu9}A great illness swept through your lands. Your child applied what {?CHILD.GENDER}she{?}he{\\?} had read in books on nursing fevers and isolating the sick to minimize deaths on your estate."), new SkillObject[2]
        {
          DefaultSkills.Medicine,
          DefaultSkills.Steward
        }),
        (new TextObject("{=Jc1YXXjN}an influx of wild beasts"), new TextObject("{=MX7toYav}{CHILD.NAME} joined a hunting pursuit in pursuit of a pack of wolves who had been ravaging the local livestock. {?CHILD.GENDER}She{?}He{\\?} tracked and took down one of the beasts with an arrow."), new SkillObject[2]
        {
          DefaultSkills.Scouting,
          DefaultSkills.Bow
        }),
        (new TextObject("{=aiBQo2MR}an outbreak of unrest"), new TextObject("{=yym5kCG5}After a particularly hard winter your tenants began to murmur about rising up and seizing your granaries. {CHILD.NAME} convinced them to be patient and wait for relief."), new SkillObject[2]
        {
          DefaultSkills.Charm,
          DefaultSkills.Leadership
        })
      };
      EducationCampaignBehavior.EducationCharacterProperties[] characterPropertiesArray = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_arms_2", "vlandia_twohanded_sword_c", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready", "carry_book_left", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_honor")
      };
      for (int index1 = 0; index1 < stage_4_page_2_option.Length; ++index1)
      {
        int index = index1;
        EducationCampaignBehavior.EducationCharacterProperties childProperties14 = characterPropertiesArray[index];
        (TextObject textObject, TextObject description3, SkillObject[] skills) = stage_4_page_2_option[index];
        EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate condition = (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) ((o, previousOptions) =>
        {
          int num = (previousOptions[0].RandomValue % stage_4_page_2_option.Length + previousOptions[1].RandomValue % stage_4_page_2_option.Length) % stage_4_page_2_option.Length == index ? 1 : 0;
          if (num == 0)
            return num != 0;
          stage_4_page_2_description.SetTextVariable("RANDOM_OUTCOME", textObject);
          stage_4_page_2_description.SetTextVariable("SKILL_1", skills[0].Name);
          stage_4_page_2_description.SetTextVariable("SKILL_2", skills[1].Name);
          return num != 0;
        });
        educationPage3.AddOption(new EducationCampaignBehavior.EducationOption(textObject, description3, (TextObject) null, condition, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, skills, childProperties14));
      }
      return stage14;
    }

    private EducationCampaignBehavior.EducationStage CreateStage16(Hero child)
    {
      TextObject title = new TextObject("{=Ww3uU5e6}Young Adulthood");
      EducationCampaignBehavior.EducationStage stage16 = new EducationCampaignBehavior.EducationStage(EducationCampaignBehavior.ChildAgeState.Year16);
      TextObject description1 = new TextObject("{=yJ0XRD9g}Eventually it was time for {?PLAYER_CHILD}your{?}the{\\?} child to travel far from home. You sent the young {?CHILD.GENDER}woman{?}man{\\?} away...");
      description1.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      EducationCampaignBehavior.EducationCharacterProperties childProperties1 = new EducationCampaignBehavior.EducationCharacterProperties("act_inventory_idle_start", string.Empty, false);
      EducationCampaignBehavior.EducationPage educationPage1 = stage16.AddPage(0, title, description1, this._chooseTaskText, childProperties1);
      EducationCampaignBehavior.EducationCharacterProperties childProperties2 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_apprentice", "vlandia_twohanded_sword_c", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties3 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_genius");
      EducationCampaignBehavior.EducationCharacterProperties childProperties4 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties5 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_honor");
      EducationCampaignBehavior.EducationCharacterProperties childProperties6 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_explorer2", "torch_a_wm", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties7 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      EducationCampaignBehavior.EducationOption stage_5_page_0_warriorOption = new EducationCampaignBehavior.EducationOption(new TextObject("{=Tbv2txJV}as a squire."), new TextObject("{=4CuMDzvd}You asked your best warrior to take {?CHILD.GENDER}her{?}him{\\?} under his wings and make sure {?CHILD.GENDER}she{?}he{\\?} gets the taste of battle without being seriously harmed."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Vigor
      }, new SkillObject[1]{ DefaultSkills.OneHanded }, childProperties2);
      EducationCampaignBehavior.EducationOption stage_5_page_0_merchantOption = new EducationCampaignBehavior.EducationOption(new TextObject("{=N62qjb8s}as an aide."), new TextObject("{=rZkQfBxt}You asked one of the local merchants to take the young {?CHILD.GENDER}woman{?}man{\\?} along with one of his caravans and make {?CHILD.GENDER}her{?}him{\\?} learn the secrets of the trade."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Cunning
      }, new SkillObject[1]{ DefaultSkills.Trade }, childProperties3);
      EducationCampaignBehavior.EducationOption stage_5_page_0_siegeEngineerOption = new EducationCampaignBehavior.EducationOption(new TextObject("{=ezfehKrT}as an apprentice."), new TextObject("{=DOhOpmhV}You found {CHILD.NAME} an apprenticeship with a siege engineer. Even if it can be a bit dangerous, there's no substitute for that kind of practical experience."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Intelligence
      }, new SkillObject[1]{ DefaultSkills.Engineering }, childProperties4);
      EducationCampaignBehavior.EducationOption stage_5_page_0_nobleOption = new EducationCampaignBehavior.EducationOption(new TextObject("{=SF244Jxx}as a noble's ward."), new TextObject("{=KgJaq5dx}You sent the young {?CHILD.GENDER}woman{?}man{\\?} to the hall of one of your fellow lords. There {?CHILD.GENDER}she{?}he{\\?} will learn how a different clan runs its affairs."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Control
      }, new SkillObject[1]{ DefaultSkills.Bow }, childProperties5);
      EducationCampaignBehavior.EducationOption stage_5_page_0_ownWayOption = new EducationCampaignBehavior.EducationOption(new TextObject("{=sdQoXkKq}to find {?CHILD.GENDER}her{?}his{\\?} own way."), new TextObject("{=6q8tY6Sz}You remember your freebooting days fondly. You want {CHILD.NAME} to experience life as you did."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Endurance
      }, new SkillObject[1]{ DefaultSkills.Athletics }, childProperties6);
      EducationCampaignBehavior.EducationOption stage_5_page_0_diplomatOption = new EducationCampaignBehavior.EducationOption(new TextObject("{=bai3aiDB}as an envoy."), new TextObject("{=hjOxidJj}The young {?CHILD.GENDER}woman{?}man{\\?} will spend {?CHILD.GENDER}her{?}his{\\?} time at a diplomatic mission, where {?CHILD.GENDER}she{?}he{\\?} will have chance to interact with people from foreign lands."), (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, new CharacterAttribute[1]
      {
        DefaultCharacterAttributes.Social
      }, new SkillObject[1]{ DefaultSkills.Charm }, childProperties7);
      educationPage1.AddOption(stage_5_page_0_warriorOption);
      educationPage1.AddOption(stage_5_page_0_merchantOption);
      educationPage1.AddOption(stage_5_page_0_siegeEngineerOption);
      educationPage1.AddOption(stage_5_page_0_nobleOption);
      educationPage1.AddOption(stage_5_page_0_ownWayOption);
      educationPage1.AddOption(stage_5_page_0_diplomatOption);
      TextObject description2 = new TextObject("{=V0QmrGda}Before {CHILD.NAME} left, you asked your warrior to make sure that the young {?CHILD.GENDER}woman{?}man{\\?}...");
      EducationCampaignBehavior.EducationPage educationPage2 = stage16.AddPage(1, title, description2, this._chooseRequestText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_5_page_0_warriorOption)));
      TextObject description3 = new TextObject("{=WJSapWab}{?CHILD.GENDER}She{?}He{\\?} had a chance to fight in a few minor skirmishes without getting seriously injured.");
      TextObject description4 = new TextObject("{=La7wkS5M}The young {?CHILD.GENDER}woman{?}man{\\?} defeated several opponents and did honor to your clan's name.");
      TextObject description5 = new TextObject("{=fsr2yhrr}While there were few military feats to accomplish, {CHILD.NAME} still became quite popular among the troops and improved their morale in the process.");
      TextObject description6 = new TextObject("{=CpcWqufH}The young {?CHILD.GENDER}woman{?}man{\\?} was placed in command of a small group of militiamen, including some nearly twice {?CHILD.GENDER}her{?}his{\\?} age, and earned their respect.");
      TextObject description7 = new TextObject("{=VTzvlEV8}Sparring with total strangers, including some who would happily break {?CHILD.GENDER}her{?}his{\\?} teeth if {?CHILD.GENDER}she{?}he{\\?} let them, was a new and valuable experience for {CHILD.NAME}.");
      TextObject description8 = new TextObject("{=FekWDIUm}{?CHILD.GENDER}She{?}He{\\?} helped plan a small expedition in pursuit of a group of brigands.");
      EducationCampaignBehavior.EducationCharacterProperties childProperties8 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_fierce", "vlandia_twohanded_sword_c", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties9 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_guard_up_staff", "carry_bostaff", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties10 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_militia", "vlandia_twohanded_sword_c", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties11 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader_2");
      EducationCampaignBehavior.EducationCharacterProperties childProperties12 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_arms_2", "vlandia_twohanded_sword_c", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties13 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician");
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=6LpwsxYP}gets bloodied."), description3, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.OneHanded
      }, childProperties8));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=hes54oh0}joins in a tournament."), description4, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Polearm
      }, childProperties9));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=z50GdIa3}learns to inspire the soldiers."), description5, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Charm
      }, childProperties10));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=MpdPpIEY}leads a patrol."), description6, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Leadership
      }, childProperties11));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=flCA80Ex}trains really hard."), description7, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.TwoHanded
      }, childProperties12));
      educationPage2.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=UuQDXIFD}hunts down bandits."), description8, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Tactics
      }, childProperties13));
      TextObject description9 = new TextObject("{=cDVNFn4p}Before {CHILD.NAME} left, you told the merchant that {?CHILD.GENDER}she{?}he{\\?} should be entrusted with...");
      EducationCampaignBehavior.EducationPage educationPage3 = stage16.AddPage(1, title, description9, this._chooseRequestText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_5_page_0_merchantOption)));
      TextObject description10 = new TextObject("{=rVIzHhLO}The young {?CHILD.GENDER}woman{?}man{\\?}'s social graces helped put other merchants at ease as they exchanged information and worked out deals.");
      TextObject description11 = new TextObject("{=UYdvhdDl}When cargo went missing, the young {?CHILD.GENDER}woman{?}man{\\?} made the inquiries at the local black market that were necessary to get it back.");
      TextObject description12 = new TextObject("{=bCZbgrLU}The smith came down sick and the young {?CHILD.GENDER}woman{?}man{\\?} had to quickly learn how to craft horseshoes and nails.");
      TextObject description13 = new TextObject("{=1vQul57Y}The caravan got lost and it was {CHILD.NAME} who spotted the landmarks that got it back on track.");
      TextObject description14 = new TextObject("{=cyQXm7VA}The young {?CHILD.GENDER}woman{?}man{\\?} was charged with ensuring they had the food, saddles, animals, teamsters and guards for the journey.");
      TextObject description15 = new TextObject("{=egXc7J72}Caravan guards are not elite troops, and may slack off if not held to a high standard of discipline. {CHILD.NAME} made sure that they stayed sober and alert.");
      EducationCampaignBehavior.EducationCharacterProperties childProperties14 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      EducationCampaignBehavior.EducationCharacterProperties childProperties15 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_fierce", "blacksmith_sword", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties16 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_artisan", "carry_linen", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties17 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_explorer2", "torch_a_wm", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties18 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician");
      EducationCampaignBehavior.EducationCharacterProperties childProperties19 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader");
      educationPage3.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=9NbAzOER}dealing with business partners."), description10, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Charm
      }, childProperties14));
      educationPage3.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=QVZMiaV2}helping recover stolen goods."), description11, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Roguery
      }, childProperties15));
      educationPage3.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=hfaw7Xx9}helping the artisan."), description12, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Crafting
      }, childProperties16));
      educationPage3.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=XYRZIPD8}guiding the caravan."), description13, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Scouting
      }, childProperties17));
      educationPage3.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=JX13Wd65}managing the logistics of travel."), description14, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Steward
      }, childProperties18));
      educationPage3.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=rvqVuM5o}supervising the guards."), description15, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Leadership
      }, childProperties19));
      TextObject description16 = new TextObject("{=U9nsz7pg}Before {CHILD.NAME} left, you asked the siege engineer to make sure that the young {?CHILD.GENDER}woman{?}man{\\?}...");
      EducationCampaignBehavior.EducationPage educationPage4 = stage16.AddPage(1, title, description16, this._chooseRequestText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_5_page_0_siegeEngineerOption)));
      TextObject description17 = new TextObject("{=MUaFiBva}{CHILD.NAME} paid close attention to the experienced engineers and became competent in a profession where small mistakes can have deadly consequences.");
      TextObject description18 = new TextObject("{=3ZZtAYXm}The young {?CHILD.GENDER}woman{?}man{\\?} learned to treat the mangled fingers and concussions without which no siege is complete.");
      TextObject description19 = new TextObject("{=VVBx07cK}The siege engines needed gears and bracings, and the master assigned {?PLAYER_CHILD}your{?}the{\\?} child to assist in forging them.");
      TextObject description20 = new TextObject("{=oCiWOutS}Sieges required tools, oil, good quality timber and, of course, food. It was young {?CHILD.GENDER}woman{?}man{\\?}'s responsibility to have them gathered, stocked and distributed.");
      TextObject description21 = new TextObject("{=ijootCu7}It was easy to get bogged down in the details of hurling rocks and assembling towers, but {CHILD.NAME} kept a keen eye on why some sieges succeeded and others failed.");
      TextObject description22 = new TextObject("{=igkNYcSI}The young {?CHILD.GENDER}woman{?}man{\\?} tells you how engineers have become an unofficial guild that transcends borders. Even men on opposite sides of a siege are known to discuss the technical details of their craft.");
      EducationCampaignBehavior.EducationCharacterProperties childProperties20 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready", "carry_book_left", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties21 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_gracious", "carry_book", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties22 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties23 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_peddlers_2", "carry_sticks", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties24 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician");
      EducationCampaignBehavior.EducationCharacterProperties childProperties25 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      educationPage4.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=L1o5mb69}learns to construct siege engines."), description17, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Engineering
      }, childProperties20));
      educationPage4.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=74pYaU18}treats injuries."), description18, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Medicine
      }, childProperties21));
      educationPage4.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=vsFVlFa4}assists the smiths."), description19, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Crafting
      }, childProperties22));
      educationPage4.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=jL8ntljn}procures supplies."), description20, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Trade
      }, childProperties23));
      educationPage4.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=I6oqLFXh}focuses on the big picture."), description21, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Tactics
      }, childProperties24));
      educationPage4.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=XTmpkNNg}socializes with other engineers."), description22, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Charm
      }, childProperties25));
      TextObject description23 = new TextObject("{=53xrtZst}Before {CHILD.NAME} left, you asked the lord to make sure that the young {?CHILD.GENDER}woman{?}man{\\?}...");
      EducationCampaignBehavior.EducationPage educationPage5 = stage16.AddPage(1, title, description23, this._chooseRequestText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_5_page_0_nobleOption)));
      TextObject description24 = new TextObject("{=aCO0Md8z}When {?CHILD.GENDER}she{?}he{\\?} was ambused on patrol, {CHILD.NAME} fought the attackers off with sheer willpower.");
      TextObject description25 = new TextObject("{=0XOii9tg}The noble did not let {CHILD.NAME} go hand-to-hand with other warriors, but the young {?CHILD.GENDER}woman{?}man{\\?} joined the archers as they traded shots with enemy scouts.");
      TextObject description26 = new TextObject("{=9BoHka98}The young {?CHILD.GENDER}woman{?}man{\\?} pursued enemy scouts while avoiding their main force. There was little fighting but a great deal of riding.");
      TextObject description27 = new TextObject("{=WD6soDM1}It was a minor skirmish but a clear victory nonetheless. {CHILD.NAME} wasn't just there when the commander came up with the winning strategy but also took part in executing it.");
      TextObject description28 = new TextObject("{=1NCVDNri}The noble gave the young adult command of a small group of scouts. {?CHILD.GENDER}She{?}He{\\?} took them on patrol and even though some were twice {?CHILD.GENDER}her{?}his{\\?} age, {?CHILD.GENDER}she{?}he{\\?} won their respect.");
      TextObject description29 = new TextObject("{=EXwX0zrx}The young {?CHILD.GENDER}woman{?}man{\\?} faced a rival clan's outrider in single combat, and handed him a defeat that he wouldn't forget.");
      EducationCampaignBehavior.EducationCharacterProperties childProperties26 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete");
      EducationCampaignBehavior.EducationCharacterProperties childProperties27 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready_bow", "bow_roman_a", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties28 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties29 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician");
      EducationCampaignBehavior.EducationCharacterProperties childProperties30 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_leader_2");
      EducationCampaignBehavior.EducationCharacterProperties childProperties31 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_fierce");
      educationPage5.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=AWuEV99O}unleashes {?CHILD.GENDER}her{?}his{\\?} fighting spirit."), description24, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Athletics
      }, childProperties26));
      educationPage5.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=Mk6dZBQa}skirmishes from a distance."), description25, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Bow
      }, childProperties27));
      educationPage5.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=Mp7dT2u2}chases and is chased."), description26, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Riding
      }, childProperties28));
      educationPage5.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=4pOb934Y}understands how a victory is won."), description27, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Tactics
      }, childProperties29));
      educationPage5.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=eXLxHSls}leads men into enemy territory."), description28, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Leadership
      }, childProperties30));
      educationPage5.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=1BFk0wAV}defeats an enemy."), description29, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.OneHanded
      }, childProperties31));
      TextObject description30 = new TextObject("{=4Bl1LWmZ}Before {CHILD.NAME} left, you encouraged {?CHILD.GENDER}her{?}him{\\?} to...");
      EducationCampaignBehavior.EducationPage educationPage6 = stage16.AddPage(1, title, description30, this._chooseRequestText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_5_page_0_ownWayOption)));
      TextObject description31 = new TextObject("{=WL1zcgYx}{?CHILD.GENDER}She{?}He{\\?} travelled on foot in the company of other pilgrims, often relying on the kindness of strangers for food and shelter.");
      TextObject description32 = new TextObject("{=K1HrvDLO}{?CHILD.GENDER}She{?}He{\\?} won't talk much about it, but you know that {?CHILD.GENDER}she{?}he{\\?} has seen the darker side of Calradia.");
      TextObject description33 = new TextObject("{=Fn7Pgia7}{?CHILD.GENDER}She{?}He{\\?} told you that {?CHILD.GENDER}her{?}his{\\?} skill with a lance paid for much of {?CHILD.GENDER}her{?}his{\\?} journey.");
      TextObject description34 = new TextObject("{=2EOvlPc2}Gripped by wanderlust, {?PLAYER_CHILD}your{?}the{\\?} child rode from the freezing woods of Sturgia to the blazing Nahasa.");
      TextObject description35 = new TextObject("{=KB0fv5Me}The young {?CHILD.GENDER}woman{?}man{\\?} charmed {?CHILD.GENDER}her{?}his{\\?} way into a circle of nobles and was a welcome guest at well-set tables.");
      TextObject description36 = new TextObject("{=UGda4FDZ}{CHILD.NAME} found work with an artisan for a season, keeping {?CHILD.GENDER}her{?}his{\\?} high birth a secret.");
      EducationCampaignBehavior.EducationCharacterProperties childProperties32 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties33 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_streets", "carry_bostaff_rogue1", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties34 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_guard_up_staff", "carry_bostaff", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties35 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties36 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_appearances");
      EducationCampaignBehavior.EducationCharacterProperties childProperties37 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_strenght", "carry_sticks", false);
      educationPage6.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=1LWWvGTT}participate in a pilgrimage."), description31, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Athletics
      }, childProperties32));
      educationPage6.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=8alDLq0s}not to be too choosy about travelling companions."), description32, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Roguery
      }, childProperties33));
      educationPage6.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=RxqCiO7F}competes in tournaments."), description33, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Polearm
      }, childProperties34));
      educationPage6.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=ETfx08db}see as much of the world as {?CHILD.GENDER}she{?}he{\\?} could."), description34, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Riding
      }, childProperties35));
      educationPage6.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=RhJdnAQY}enjoy the high life."), description35, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Charm
      }, childProperties36));
      educationPage6.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=dObod6IZ}do some honest work."), description36, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Crafting
      }, childProperties37));
      TextObject description37 = new TextObject("{=TaAHFZfd}You asked your head of expedition to make sure that your {?CHILD.GENDER}daughter{?}son{\\?}...");
      EducationCampaignBehavior.EducationPage educationPage7 = stage16.AddPage(1, title, description37, this._chooseRequestText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((page, previousOptions) => previousOptions.Contains(stage_5_page_0_diplomatOption)));
      TextObject description38 = new TextObject("{=Q39oLjSu}One of the entourage was thrown from a horse on the road. The young {?CHILD.GENDER}woman{?}man{\\?} set the broken bone and ensured it healed cleanly.");
      TextObject description39 = new TextObject("{=8AjlID6z}You hear talk of incriminating letters and loose tongues paid to stay silent. You're not sure exactly what happened, but {?PLAYER_CHILD}your{?}the{\\?} child seems more worldly than {?CHILD.GENDER}she{?}he{\\?} did when {?CHILD.GENDER}she{?}he{\\?} left.");
      TextObject description40 = new TextObject("{=4nUhnWZ3}There was a great deal of feasting and speech-making. From what you hear, {?CHILD.GENDER}she{?}he{\\?} acquitted {?CHILD.GENDER}herself{?}himself{\\?} well.");
      TextObject description41 = new TextObject("{=aCMZafK5}The fight was over a minor insult, and only to the first blood. But you're still relieved that the first blood in question belonged to the other youth.");
      TextObject description42 = new TextObject("{=5vosR2YO}The host was the kind of man who likes to do his negotiations from the saddle in pursuit of deer, and {CHILD.NAME} joined in every expedition.");
      TextObject description43 = new TextObject("{=taKIDPxj}Embassies carry gifts and attract bandits. Fighting them off made the trip much more exciting than {?CHILD.GENDER}she{?}he{\\?} had expected.");
      EducationCampaignBehavior.EducationCharacterProperties childProperties38 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready", "carry_book_left", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties39 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_hardened");
      EducationCampaignBehavior.EducationCharacterProperties childProperties40 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners");
      EducationCampaignBehavior.EducationCharacterProperties childProperties41 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_apprentice", "training_sword", false);
      EducationCampaignBehavior.EducationCharacterProperties childProperties42 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true);
      EducationCampaignBehavior.EducationCharacterProperties childProperties43 = new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician");
      educationPage7.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=6jgjJ3Ts}help anyone in need."), description38, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Medicine
      }, childProperties38));
      educationPage7.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=FfZpLoVD}dabble in intrigue."), description39, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Roguery
      }, childProperties39));
      educationPage7.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=EzbzOsJo}burnish {?CHILD.GENDER}her{?}his{\\?} social skills."), description40, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Charm
      }, childProperties40));
      educationPage7.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=bdYtcgyB}never back down from a challenge."), description41, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.OneHanded
      }, childProperties41));
      educationPage7.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=hrlBxgzs}enjoy the pleasures of the hunt."), description42, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Riding
      }, childProperties42));
      educationPage7.AddOption(new EducationCampaignBehavior.EducationOption(new TextObject("{=XMaeSoRq}never let down {?CHILD.GENDER}her{?}his{\\?} guard."), description43, (TextObject) null, (EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate) null, (EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate) null, (CharacterAttribute[]) null, new SkillObject[1]
      {
        DefaultSkills.Tactics
      }, childProperties43));
      EducationCampaignBehavior.EducationPage[] educationPageArray = new EducationCampaignBehavior.EducationPage[6]
      {
        educationPage2,
        educationPage3,
        educationPage5,
        educationPage6,
        educationPage4,
        educationPage7
      };
      foreach (EducationCampaignBehavior.EducationPage educationPage8 in educationPageArray)
      {
        foreach (EducationCampaignBehavior.EducationOption option in educationPage8.Options)
          option.Description.SetTextVariable("PLAYER_CHILD", this.IsHeroChildOfPlayer(child) ? 1 : 0);
      }
      TextObject textObject1 = new TextObject("{=4VxFPTT0}got bloodied.");
      TextObject textObject2 = new TextObject("{=VAFmTAtx}won a tournament.");
      TextObject textObject3 = new TextObject("{=DiE5Mh2J}learned to inspire the soldiers.");
      TextObject textObject4 = new TextObject("{=hYTcXbyS}led a patrol.");
      TextObject textObject5 = new TextObject("{=webjbgTa}trained really hard.");
      TextObject textObject6 = new TextObject("{=SCpINAZ1}hunted down bandits.");
      TextObject textObject7 = new TextObject("{=YVyId3wX}dealt with business partners.");
      TextObject textObject8 = new TextObject("{=SBHwIaVP}recovered stolen goods.");
      TextObject textObject9 = new TextObject("{=o9XKbana}helped the artisan.");
      TextObject textObject10 = new TextObject("{=brixvCjC}guided the caravan.");
      TextObject textObject11 = new TextObject("{=CVVttuuQ}managed the logistics of travel.");
      TextObject textObject12 = new TextObject("{=xXOLhxRl}supervised the guards.");
      TextObject textObject13 = new TextObject("{=MHsa7s99}learned to construct siege engines.");
      TextObject textObject14 = new TextObject("{=SXbW99CH}treated injuries.");
      TextObject textObject15 = new TextObject("{=SGVW6NXR}assisted the smith.");
      TextObject textObject16 = new TextObject("{=9mWxhzDG}procured supplies.");
      TextObject textObject17 = new TextObject("{=a1PPbzbi}focused on the big picture.");
      TextObject textObject18 = new TextObject("{=nyatGUkU}socialized with other engineers.");
      TextObject textObject19 = new TextObject("{=g7lNg1ea}unleashed {?CHILD.GENDER}her{?}his{\\?} fighting spirit.");
      TextObject textObject20 = new TextObject("{=KjR0HhJv}skirmished from a distance.");
      TextObject textObject21 = new TextObject("{=SSavEblm}chased and was chased.");
      TextObject textObject22 = new TextObject("{=plYfFg4A}learned how a victory is won.");
      TextObject textObject23 = new TextObject("{=2OdXZUg9}led men into enemy territory.");
      TextObject textObject24 = new TextObject("{=SnEjsXsH}defeated an enemy.");
      TextObject textObject25 = new TextObject("{=9QLPm1o6}joined a pilgrimage.");
      TextObject textObject26 = new TextObject("{=E90ArBnZ}fell in with the wrong crowd.");
      TextObject textObject27 = new TextObject("{=VAFmTAtx}won a tournament.");
      TextObject textObject28 = new TextObject("{=7hYUleHh}rode to the edge of the world.");
      TextObject textObject29 = new TextObject("{=PgN4BFNs}enjoyed the high life.");
      TextObject textObject30 = new TextObject("{=lsddqaAx}did some honest work.");
      TextObject textObject31 = new TextObject("{=gCBZlAzs}treated an injury.");
      TextObject textObject32 = new TextObject("{=CNYoZKyf}dabbled in intrigue.");
      TextObject textObject33 = new TextObject("{=83n7Oa7e}burnished {?CHILD.GENDER}her{?}his{\\?} social skills.");
      TextObject textObject34 = new TextObject("{=p5Wo8rNb}won a duel.");
      TextObject textObject35 = new TextObject("{=O9amiAiB}joined a hunting party.");
      TextObject textObject36 = new TextObject("{=XFZcqNBB}battled brigands.");
      TextObject description44 = new TextObject("{=Yk3xrawy}When {?CHILD.GENDER}she{?}he{\\?} returns, {CHILD.NAME} tells you the story of how {?CHILD.GENDER}she{?}he{\\?} {RANDOM_OUTCOME} That event increased {?CHILD.GENDER}her{?}his{\\?} skill in {SKILL}.");
      EducationCampaignBehavior.EducationPage currentPage1 = stage16.AddPage(2, title, description44, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((p, previousOptions) => previousOptions.Contains(stage_5_page_0_warriorOption)));
      (TextObject, TextObject, SkillObject)[] titleDescSkillTuple1 = new (TextObject, TextObject, SkillObject)[6]
      {
        (textObject1, description3, DefaultSkills.OneHanded),
        (textObject2, description4, DefaultSkills.Polearm),
        (textObject3, description5, DefaultSkills.Charm),
        (textObject4, description6, DefaultSkills.Leadership),
        (textObject5, description7, DefaultSkills.TwoHanded),
        (textObject6, description8, DefaultSkills.Tactics)
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties44 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_apprentice", "vlandia_twohanded_sword_c", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_militia", "carry_bostaff_rogue1", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_conversation_confident_loop"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_conversation_hip_loop"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_arms_2", "vlandia_twohanded_sword_c", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_conversation_closed_loop")
      };
      this.Stage16Selection(titleDescSkillTuple1, currentPage1, childProperties44);
      EducationCampaignBehavior.EducationPage currentPage2 = stage16.AddPage(2, title, description44, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((p, previousOptions) => previousOptions.Contains(stage_5_page_0_merchantOption)));
      (TextObject, TextObject, SkillObject)[] titleDescSkillTuple2 = new (TextObject, TextObject, SkillObject)[6]
      {
        (textObject7, description10, DefaultSkills.Charm),
        (textObject8, description11, DefaultSkills.Roguery),
        (textObject9, description12, DefaultSkills.Crafting),
        (textObject10, description13, DefaultSkills.Scouting),
        (textObject11, description14, DefaultSkills.Steward),
        (textObject12, description15, DefaultSkills.Leadership)
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties45 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_conversation_confident_loop"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_artisan", "carry_linen", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_vibrant"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_conversation_confident_loop"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_conversation_hip_loop")
      };
      this.Stage16Selection(titleDescSkillTuple2, currentPage2, childProperties45);
      EducationCampaignBehavior.EducationPage currentPage3 = stage16.AddPage(2, title, description44, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((p, previousOptions) => previousOptions.Contains(stage_5_page_0_siegeEngineerOption)));
      (TextObject, TextObject, SkillObject)[] titleDescSkillTuple3 = new (TextObject, TextObject, SkillObject)[6]
      {
        (textObject13, description17, DefaultSkills.Engineering),
        (textObject14, description18, DefaultSkills.Medicine),
        (textObject15, description19, DefaultSkills.Crafting),
        (textObject16, description20, DefaultSkills.Trade),
        (textObject17, description21, DefaultSkills.Tactics),
        (textObject18, description22, DefaultSkills.Charm)
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties46 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_gracious", "carry_book", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_artisan", "carry_linen", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_genius"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners")
      };
      this.Stage16Selection(titleDescSkillTuple3, currentPage3, childProperties46);
      EducationCampaignBehavior.EducationPage currentPage4 = stage16.AddPage(2, title, description44, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((p, previousOptions) => previousOptions.Contains(stage_5_page_0_nobleOption)));
      (TextObject, TextObject, SkillObject)[] titleDescSkillTuple4 = new (TextObject, TextObject, SkillObject)[6]
      {
        (textObject19, description24, DefaultSkills.Athletics),
        (textObject20, description25, DefaultSkills.Bow),
        (textObject21, description26, DefaultSkills.Riding),
        (textObject22, description27, DefaultSkills.Tactics),
        (textObject23, description28, DefaultSkills.Leadership),
        (textObject24, description29, DefaultSkills.OneHanded)
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties47 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_conversation_confident2_loop"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_conversation_hip_loop"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_apprentice", "training_sword", false)
      };
      this.Stage16Selection(titleDescSkillTuple4, currentPage4, childProperties47);
      EducationCampaignBehavior.EducationPage currentPage5 = stage16.AddPage(2, title, description44, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((p, previousOptions) => previousOptions.Contains(stage_5_page_0_ownWayOption)));
      (TextObject, TextObject, SkillObject)[] titleDescSkillTuple5 = new (TextObject, TextObject, SkillObject)[6]
      {
        (textObject25, description31, DefaultSkills.Athletics),
        (textObject26, description32, DefaultSkills.Roguery),
        (textObject27, description33, DefaultSkills.Polearm),
        (textObject28, description34, DefaultSkills.Riding),
        (textObject29, description35, DefaultSkills.Charm),
        (textObject30, description36, DefaultSkills.Crafting)
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties48 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_athlete"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_guard_up_staff", "carry_bostaff", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_grit", "carry_hammer", false)
      };
      this.Stage16Selection(titleDescSkillTuple5, currentPage5, childProperties48);
      EducationCampaignBehavior.EducationPage currentPage6 = stage16.AddPage(2, title, description44, this._confirmResultsText, condition: (EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate) ((p, previousOptions) => previousOptions.Contains(stage_5_page_0_diplomatOption)));
      (TextObject, TextObject, SkillObject)[] titleDescSkillTuple6 = new (TextObject, TextObject, SkillObject)[6]
      {
        (textObject31, description38, DefaultSkills.Medicine),
        (textObject32, description39, DefaultSkills.Roguery),
        (textObject33, description40, DefaultSkills.Charm),
        (textObject34, description41, DefaultSkills.OneHanded),
        (textObject35, description42, DefaultSkills.Riding),
        (textObject36, description43, DefaultSkills.Tactics)
      };
      EducationCampaignBehavior.EducationCharacterProperties[] childProperties49 = new EducationCampaignBehavior.EducationCharacterProperties[6]
      {
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_ready", "carry_book", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_roguery", "carry_bostaff_rogue1", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_manners"),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_apprentice", "vlandia_twohanded_sword_c", false),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_riding_2", "carry_saddle", true),
        new EducationCampaignBehavior.EducationCharacterProperties("act_childhood_tactician")
      };
      this.Stage16Selection(titleDescSkillTuple6, currentPage6, childProperties49);
      return stage16;
    }

    private void GetHighestThreeAttributes(Hero hero, out (CharacterAttribute, int)[] maxAttributes)
    {
      (CharacterAttribute, int)[] source = new (CharacterAttribute, int)[Attributes.All.Count];
      for (int index = 0; index < Attributes.All.Count; ++index)
      {
        CharacterAttribute charAttribute = Attributes.All[index];
        source[index] = (charAttribute, hero != null ? hero.GetAttributeValue(charAttribute) : MBRandom.RandomInt(1, 10));
      }
      maxAttributes = ((IEnumerable<(CharacterAttribute, int)>) source).OrderByDescending<(CharacterAttribute, int), int>((Func<(CharacterAttribute, int), int>) (x => x.Item2)).Take<(CharacterAttribute, int)>(3).ToArray<(CharacterAttribute, int)>();
    }

    private enum ChildAgeState : short
    {
      Invalid = -1, // 0xFFFF
      First = 0,
      Year2 = 0,
      Year5 = 1,
      Year8 = 2,
      Year11 = 3,
      Year14 = 4,
      Last = 5,
      Year16 = 5,
      Count = 6,
    }

    private class EducationOption
    {
      public readonly EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate Condition;
      private readonly EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate _consequence;
      public readonly TextObject Title;
      public readonly TextObject Description;
      public readonly TextObject Effect;
      public readonly CharacterAttribute[] Attributes;
      public readonly SkillObject[] Skills;
      public readonly EducationCampaignBehavior.EducationCharacterProperties ChildProperties;
      public readonly EducationCampaignBehavior.EducationCharacterProperties SpecialCharacterProperties;
      public readonly int RandomValue;

      public void OnConsequence(Hero child)
      {
        EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate consequence = this._consequence;
        if (consequence != null)
        {
          int num = consequence(this) ? 1 : 0;
        }
        foreach (CharacterAttribute attribute in this.Attributes)
          child.HeroDeveloper.AddAttribute(attribute, 1, false);
        foreach (SkillObject skill in this.Skills)
        {
          child.HeroDeveloper.AddFocus(skill, 1, false);
          child.HeroDeveloper.ChangeSkillLevel(skill, 5);
        }
      }

      public EducationOption(
        TextObject title,
        TextObject description,
        TextObject effect,
        EducationCampaignBehavior.EducationOption.EducationOptionConditionDelegate condition,
        EducationCampaignBehavior.EducationOption.EducationOptionConsequenceDelegate consequence,
        CharacterAttribute[] attributes,
        SkillObject[] skills,
        EducationCampaignBehavior.EducationCharacterProperties childProperties,
        EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties = default (EducationCampaignBehavior.EducationCharacterProperties))
      {
        this.Title = title;
        this.Description = description;
        this.Condition = condition;
        this._consequence = consequence;
        this.Attributes = attributes ?? new CharacterAttribute[0];
        this.Skills = skills ?? new SkillObject[0];
        this.Effect = this.GetEffectText(effect ?? TextObject.Empty);
        this.ChildProperties = childProperties;
        this.SpecialCharacterProperties = specialCharacterProperties;
        this.RandomValue = MBRandom.RandomInt(0, int.MaxValue);
      }

      private TextObject GetEffectText(TextObject effect)
      {
        TextObject effectText = new TextObject("{=JfBTbsX2}{EFFECT_DESCRIPTION}{NEW_LINE_1}{SKILL_DESCRIPTION}{NEW_LINE_2}{ATTRIBUTE_DESCRIPTION}");
        TextObject variable1 = TextObject.Empty;
        TextObject variable2 = TextObject.Empty;
        if (this.Skills.Length == 1)
        {
          variable1 = new TextObject("{=I88vSwpb}{SKILL1} gains {NUMBER_FP} Focus Point and {NUMBER_SP} Skill Points.");
          variable1.SetTextVariable("SKILL1", this.Skills[0].Name);
        }
        else if (this.Skills.Length == 2)
        {
          variable1 = new TextObject("{=bvRVu0fO}{SKILL1} and {SKILL2} gain {NUMBER_FP} Focus Point and {NUMBER_SP} Skill Points.");
          variable1.SetTextVariable("SKILL1", this.Skills[0].Name);
          variable1.SetTextVariable("SKILL2", this.Skills[1].Name);
        }
        if (this.Attributes.Length == 1)
        {
          variable2 = new TextObject("{=bm2DzxEl}{ATTRIBUTE1} is increased by {NUMBER_AP}.");
          variable2.SetTextVariable("ATTRIBUTE1", ((IEnumerable<CharacterAttribute>) this.Attributes).ElementAt<CharacterAttribute>(0).Name);
        }
        else if (this.Attributes.Length == 2)
        {
          variable2 = new TextObject("{=2sQQh02s}{ATTRIBUTE1} and {ATTRIBUTE2} are increased by {NUMBER_AP}.");
          variable2.SetTextVariable("ATTRIBUTE1", this.Attributes[0].Name);
          variable2.SetTextVariable("ATTRIBUTE2", this.Attributes[1].Name);
        }
        variable2.SetTextVariable("NUMBER_AP", 1);
        variable1.SetTextVariable("NUMBER_FP", 1);
        variable1.SetTextVariable("NUMBER_SP", 5);
        effectText.SetTextVariable("SKILL_DESCRIPTION", variable1);
        effectText.SetTextVariable("ATTRIBUTE_DESCRIPTION", variable2);
        effectText.SetTextVariable("EFFECT_DESCRIPTION", effect);
        if (effect != TextObject.Empty && (variable1 != TextObject.Empty || variable2 != TextObject.Empty))
          effectText.SetTextVariable("NEW_LINE_1", "\n");
        else
          effectText.SetTextVariable("NEW_LINE_1", TextObject.Empty);
        if (variable1 != TextObject.Empty && variable2 != TextObject.Empty)
          effectText.SetTextVariable("NEW_LINE_2", "\n");
        else
          effectText.SetTextVariable("NEW_LINE_2", TextObject.Empty);
        return effectText;
      }

      public delegate bool EducationOptionConditionDelegate(
        EducationCampaignBehavior.EducationOption option,
        List<EducationCampaignBehavior.EducationOption> previousOptions);

      public delegate bool EducationOptionConsequenceDelegate(
        EducationCampaignBehavior.EducationOption option);
    }

    private class EducationStage
    {
      private List<List<EducationCampaignBehavior.EducationPage>> _superPages;
      public readonly EducationCampaignBehavior.ChildAgeState Target;

      public int PageCount => this._superPages.Count;

      public EducationStage(EducationCampaignBehavior.ChildAgeState targetAge)
      {
        this.Target = targetAge;
        this._superPages = new List<List<EducationCampaignBehavior.EducationPage>>();
      }

      public EducationCampaignBehavior.EducationPage AddPage(
        int pageIndex,
        TextObject title,
        TextObject description,
        TextObject instruction,
        EducationCampaignBehavior.EducationCharacterProperties childProperties = default (EducationCampaignBehavior.EducationCharacterProperties),
        EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties = default (EducationCampaignBehavior.EducationCharacterProperties),
        EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate condition = null)
      {
        while (pageIndex >= this._superPages.Count)
          this._superPages.Add(new List<EducationCampaignBehavior.EducationPage>());
        EducationCampaignBehavior.EducationPage educationPage = new EducationCampaignBehavior.EducationPage(pageIndex.ToString() + ";" + (object) this._superPages[pageIndex].Count, title, description, instruction, childProperties, specialCharacterProperties, condition);
        this._superPages[pageIndex].Add(educationPage);
        return educationPage;
      }

      private Equipment GetChildEquipmentForOption(
        Hero child,
        string optionKey,
        List<string> previousOptions)
      {
        string[] strArray = optionKey.Split(';');
        int result;
        if (!int.TryParse(strArray[0], out result))
          Debug.FailedAssert("/keys/ isnt set correctly", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\EducationCampaignBehavior.cs", nameof (GetChildEquipmentForOption), 206);
        Equipment equipment = (Equipment) null;
        if (this.Target == EducationCampaignBehavior.ChildAgeState.Year8)
          equipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>(string.Format("child_education_equipments_stage_{0}_page_0_branch_child_{1}", (object) (int) this.Target, (object) child.Culture.StringId))?.DefaultEquipment;
        else if (this.Target == EducationCampaignBehavior.ChildAgeState.Year16 && result > 0)
          equipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>(string.Format("child_education_equipments_stage_{0}_page_0_branch_{1}_{2}", (object) (int) this.Target, (object) previousOptions[0].Split(';')[2], (object) child.Culture.StringId))?.DefaultEquipment;
        else if (this.Target != EducationCampaignBehavior.ChildAgeState.Year2)
          equipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>(string.Format("child_education_equipments_stage_{0}_page_{1}_branch_{2}_{3}", (object) (int) this.Target, (object) strArray[0], (object) strArray[2], (object) child.Culture.StringId))?.DefaultEquipment;
        return equipment ?? MBEquipmentRoster.EmptyEquipment;
      }

      private Equipment GetChildEquipmentForPage(
        Hero child,
        EducationCampaignBehavior.EducationPage page,
        List<string> previousOptions)
      {
        Equipment equipment = (Equipment) null;
        if (this.Target == EducationCampaignBehavior.ChildAgeState.Year8 && previousOptions.Count == 0)
          equipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>(string.Format("child_education_equipments_stage_{0}_page_0_branch_child_{1}", (object) (int) this.Target, (object) child.Culture.StringId))?.DefaultEquipment;
        else if (previousOptions.Count > 0)
          equipment = this.GetChildEquipmentForOption(child, previousOptions[0], previousOptions);
        else if (this.Target != EducationCampaignBehavior.ChildAgeState.Year2)
          equipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>(string.Format("child_education_equipments_stage_{0}_page_0_branch_default_{1}", (object) (int) this.Target, (object) child.Culture.StringId))?.DefaultEquipment;
        return equipment ?? MBEquipmentRoster.EmptyEquipment;
      }

      private EducationCampaignBehavior.EducationCharacterProperties GetChildPropertiesForOption(
        Hero child,
        string optionKey,
        List<string> previousOptions)
      {
        string[] strArray = optionKey.Split(';');
        EducationCampaignBehavior.EducationOption option = this.GetOption(optionKey);
        if (!int.TryParse(strArray[0], out int _))
          Debug.FailedAssert("/keys/ isnt set correctly", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\EducationCampaignBehavior.cs", nameof (GetChildPropertiesForOption), (int) byte.MaxValue);
        Equipment equipmentForOption = this.GetChildEquipmentForOption(child, optionKey, previousOptions);
        return new EducationCampaignBehavior.EducationCharacterProperties(child.CharacterObject, equipmentForOption, option.ChildProperties.ActionId, option.ChildProperties.PrefabId, option.ChildProperties.UseOffHand);
      }

      private EducationCampaignBehavior.EducationCharacterProperties GetChildPropertiesForPage(
        Hero child,
        EducationCampaignBehavior.EducationPage page,
        List<string> previousOptions)
      {
        EducationCampaignBehavior.EducationCharacterProperties propertiesForPage;
        if (previousOptions.Count == 0 || page.ChildProperties != EducationCampaignBehavior.EducationCharacterProperties.Invalid)
        {
          string actionId = page.ChildProperties.ActionId;
          string prefabId = page.ChildProperties.PrefabId;
          bool useOffHand = page.ChildProperties.UseOffHand;
          propertiesForPage = new EducationCampaignBehavior.EducationCharacterProperties(child.CharacterObject, this.GetChildEquipmentForPage(child, page, previousOptions), actionId, prefabId, useOffHand);
        }
        else
          propertiesForPage = this.GetChildPropertiesForOption(child, previousOptions[0], previousOptions);
        return propertiesForPage;
      }

      private CharacterObject GetSpecialCharacterForOption(
        Hero child,
        string optionKey,
        List<string> previousOptions)
      {
        string[] strArray = optionKey.Split(';');
        int result;
        if (!int.TryParse(strArray[0], out result))
          Debug.FailedAssert("/keys/ isnt set correctly", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\EducationCampaignBehavior.cs", nameof (GetSpecialCharacterForOption), 298);
        CharacterObject characterForOption = (CharacterObject) null;
        if (this.Target == EducationCampaignBehavior.ChildAgeState.Year8)
        {
          if (result == 0)
            characterForOption = Game.Current.ObjectManager.GetObject<CharacterObject>(string.Format("child_education_templates_stage_{0}_page_0_branch_{1}_{2}", (object) (int) this.Target, (object) strArray[2], (object) child.Culture.StringId));
          else
            characterForOption = Game.Current.ObjectManager.GetObject<CharacterObject>(string.Format("child_education_templates_stage_{0}_page_0_branch_{1}_{2}", (object) (int) this.Target, (object) previousOptions[0].Split(';')[2], (object) child.Culture.StringId));
        }
        return characterForOption;
      }

      private EducationCampaignBehavior.EducationCharacterProperties GetSpecialCharacterPropertiesForPage(
        Hero child,
        EducationCampaignBehavior.EducationPage page,
        List<string> previousOptions)
      {
        EducationCampaignBehavior.EducationCharacterProperties propertiesForPage = EducationCampaignBehavior.EducationCharacterProperties.Invalid;
        if (this.Target == EducationCampaignBehavior.ChildAgeState.Year8)
        {
          if (page.SpecialCharacterProperties != EducationCampaignBehavior.EducationCharacterProperties.Invalid)
          {
            string actionId = page.SpecialCharacterProperties.ActionId;
            string prefabId = page.SpecialCharacterProperties.PrefabId;
            bool useOffHand = page.SpecialCharacterProperties.UseOffHand;
            CharacterObject characterForOption = this.GetSpecialCharacterForOption(child, previousOptions[0], previousOptions);
            propertiesForPage = new EducationCampaignBehavior.EducationCharacterProperties(characterForOption, characterForOption.Equipment, actionId, prefabId, useOffHand);
          }
          if (previousOptions.Count > 0)
            propertiesForPage = this.GetSpecialCharacterPropertiesForOption(child, previousOptions[0], previousOptions);
        }
        return propertiesForPage;
      }

      private EducationCampaignBehavior.EducationCharacterProperties GetSpecialCharacterPropertiesForOption(
        Hero child,
        string optionKey,
        List<string> previousOptions)
      {
        EducationCampaignBehavior.EducationCharacterProperties propertiesForOption = EducationCampaignBehavior.EducationCharacterProperties.Invalid;
        if (this.Target == EducationCampaignBehavior.ChildAgeState.Year8)
        {
          EducationCampaignBehavior.EducationOption option = this.GetOption(optionKey);
          CharacterObject characterForOption = this.GetSpecialCharacterForOption(child, optionKey, previousOptions);
          propertiesForOption = new EducationCampaignBehavior.EducationCharacterProperties(characterForOption, characterForOption.Equipment, option.SpecialCharacterProperties.ActionId, option.SpecialCharacterProperties.PrefabId, option.SpecialCharacterProperties.UseOffHand);
        }
        return propertiesForOption;
      }

      public EducationCampaignBehavior.EducationOption GetOption(string optionKey)
      {
        string[] strArray = optionKey.Split(';');
        return this._superPages[int.Parse(strArray[0])][int.Parse(strArray[1])].GetOption(optionKey);
      }

      public EducationCampaignBehavior.EducationPage GetPage(List<string> previousOptionKeys)
      {
        List<EducationCampaignBehavior.EducationOption> educationOption = this.StringIdToEducationOption(previousOptionKeys);
        List<EducationCampaignBehavior.EducationPage> superPage = this._superPages[previousOptionKeys.Count];
        for (int index = 0; index < superPage.Count; ++index)
        {
          EducationCampaignBehavior.EducationPage page = superPage[index];
          if ((page.Condition == null || page.Condition(page, educationOption)) && page.GetAvailableOptions(educationOption).Length != 0)
            return page;
        }
        Debug.FailedAssert("Education page not found", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\EducationCampaignBehavior.cs", nameof (GetPage), 389);
        return (EducationCampaignBehavior.EducationPage) null;
      }

      public List<EducationCampaignBehavior.EducationOption> StringIdToEducationOption(
        List<string> previousOptionKeys)
      {
        List<EducationCampaignBehavior.EducationOption> educationOption = new List<EducationCampaignBehavior.EducationOption>();
        foreach (string previousOptionKey in previousOptionKeys)
          educationOption.Add(this.GetOption(previousOptionKey));
        return educationOption;
      }

      public override string ToString() => this.Target.ToString();

      internal EducationCampaignBehavior.EducationCharacterProperties[] GetCharacterPropertiesForPage(
        Hero child,
        EducationCampaignBehavior.EducationPage page,
        List<string> previousChoices)
      {
        EducationCampaignBehavior.EducationCharacterProperties propertiesForPage1 = this.GetChildPropertiesForPage(child, page, previousChoices);
        EducationCampaignBehavior.EducationCharacterProperties propertiesForPage2 = this.GetSpecialCharacterPropertiesForPage(child, page, previousChoices);
        List<EducationCampaignBehavior.EducationCharacterProperties> characterPropertiesList = new List<EducationCampaignBehavior.EducationCharacterProperties>();
        if (propertiesForPage1 != EducationCampaignBehavior.EducationCharacterProperties.Invalid)
          characterPropertiesList.Add(propertiesForPage1);
        if (propertiesForPage2 != EducationCampaignBehavior.EducationCharacterProperties.Invalid)
          characterPropertiesList.Add(propertiesForPage2);
        return characterPropertiesList.ToArray();
      }

      internal EducationCampaignBehavior.EducationCharacterProperties[] GetCharacterPropertiesForOption(
        Hero child,
        EducationCampaignBehavior.EducationOption option,
        string optionKey,
        List<string> previousOptions)
      {
        EducationCampaignBehavior.EducationCharacterProperties propertiesForOption1 = this.GetChildPropertiesForOption(child, optionKey, previousOptions);
        EducationCampaignBehavior.EducationCharacterProperties propertiesForOption2 = this.GetSpecialCharacterPropertiesForOption(child, optionKey, previousOptions);
        List<EducationCampaignBehavior.EducationCharacterProperties> characterPropertiesList = new List<EducationCampaignBehavior.EducationCharacterProperties>();
        if (propertiesForOption1 != EducationCampaignBehavior.EducationCharacterProperties.Invalid)
          characterPropertiesList.Add(propertiesForOption1);
        if (propertiesForOption2 != EducationCampaignBehavior.EducationCharacterProperties.Invalid)
          characterPropertiesList.Add(propertiesForOption2);
        return characterPropertiesList.ToArray();
      }
    }

    public struct EducationCharacterProperties
    {
      public readonly CharacterObject Character;
      public readonly Equipment Equipment;
      public readonly string ActionId;
      public readonly string PrefabId;
      public readonly bool UseOffHand;
      public static readonly EducationCampaignBehavior.EducationCharacterProperties Default = new EducationCampaignBehavior.EducationCharacterProperties("act_inventory_idle_start");
      public static readonly EducationCampaignBehavior.EducationCharacterProperties Invalid = new EducationCampaignBehavior.EducationCharacterProperties();

      public EducationCharacterProperties(
        CharacterObject character,
        Equipment equipment,
        string actionId,
        string prefabId,
        bool useOffHand)
      {
        this.Character = character;
        this.Equipment = equipment;
        this.ActionId = actionId;
        this.PrefabId = prefabId;
        this.UseOffHand = useOffHand;
      }

      public EducationCharacterProperties(string actionId, string prefabId, bool useOffHand)
        : this((CharacterObject) null, (Equipment) null, actionId, prefabId, useOffHand)
      {
      }

      public EducationCharacterProperties(string actionId)
        : this((CharacterObject) null, (Equipment) null, actionId, string.Empty, false)
      {
      }

      public static bool operator ==(
        EducationCampaignBehavior.EducationCharacterProperties a,
        EducationCampaignBehavior.EducationCharacterProperties b)
      {
        return a.Character == b.Character && a.Equipment == b.Equipment && a.ActionId == b.ActionId && a.PrefabId == b.PrefabId;
      }

      public static bool operator !=(
        EducationCampaignBehavior.EducationCharacterProperties a,
        EducationCampaignBehavior.EducationCharacterProperties b)
      {
        return !(a == b);
      }

      public bool Equals(
        EducationCampaignBehavior.EducationCharacterProperties other)
      {
        return this.Character.Equals((object) other.Character) && this.Equipment.Equals((object) other.Equipment) && this.ActionId.Equals(other.ActionId) && this.PrefabId.Equals(other.PrefabId);
      }

      public override bool Equals(object obj)
      {
        return obj != null && obj is EducationCampaignBehavior.EducationCharacterProperties other && this.Equals(other);
      }

      public override int GetHashCode()
      {
        return ((this.ActionId.GetHashCode() * 397 ^ this.Character.GetHashCode()) * 397 ^ this.Equipment.GetHashCode()) * 397 ^ this.PrefabId.GetHashCode();
      }

      public sbyte GetUsedHandBoneIndex()
      {
        return !this.UseOffHand ? FaceGen.GetBaseMonsterFromRace(this.Character.Race).MainHandItemBoneIndex : FaceGen.GetBaseMonsterFromRace(this.Character.Race).OffHandItemBoneIndex;
      }
    }

    private class EducationPage
    {
      public readonly EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate Condition;
      public readonly TextObject Title;
      public readonly TextObject Description;
      public readonly TextObject Instruction;
      private readonly string _id;
      private int _keyIndex;
      private readonly Dictionary<string, EducationCampaignBehavior.EducationOption> _options;
      public readonly EducationCampaignBehavior.EducationCharacterProperties ChildProperties;
      public readonly EducationCampaignBehavior.EducationCharacterProperties SpecialCharacterProperties;

      public IEnumerable<EducationCampaignBehavior.EducationOption> Options
      {
        get => (IEnumerable<EducationCampaignBehavior.EducationOption>) this._options.Values;
      }

      public EducationPage(
        string id,
        TextObject title,
        TextObject description,
        TextObject instruction,
        EducationCampaignBehavior.EducationCharacterProperties childProperties,
        EducationCampaignBehavior.EducationCharacterProperties specialCharacterProperties,
        EducationCampaignBehavior.EducationPage.EducationPageConditionDelegate condition = null)
      {
        this._id = id;
        this.Condition = condition;
        this.Title = title;
        this.Description = description;
        this.Instruction = instruction;
        this._options = new Dictionary<string, EducationCampaignBehavior.EducationOption>();
        this._keyIndex = 0;
        this.ChildProperties = childProperties;
        this.SpecialCharacterProperties = specialCharacterProperties;
      }

      public void AddOption(EducationCampaignBehavior.EducationOption option)
      {
        this._options.Add(this._id + ";" + this._keyIndex.ToString(), option);
        ++this._keyIndex;
      }

      public EducationCampaignBehavior.EducationOption GetOption(string optionKey)
      {
        EducationCampaignBehavior.EducationOption option;
        this._options.TryGetValue(optionKey, out option);
        return option;
      }

      public string[] GetAvailableOptions(
        List<EducationCampaignBehavior.EducationOption> previousEducationOptions)
      {
        List<string> stringList = new List<string>();
        foreach (KeyValuePair<string, EducationCampaignBehavior.EducationOption> option in this._options)
        {
          if (option.Value.Condition == null || option.Value.Condition(option.Value, previousEducationOptions))
            stringList.Add(option.Key);
        }
        return stringList.ToArray();
      }

      public delegate bool EducationPageConditionDelegate(
        EducationCampaignBehavior.EducationPage page,
        List<EducationCampaignBehavior.EducationOption> previousOptions);
    }
  }
}
