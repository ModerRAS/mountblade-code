// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Missions.NameMarker.MissionNameMarkerTargetVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.Objects;
using SandBox.Objects.AreaMarkers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.Missions.NameMarker
{
  public class MissionNameMarkerTargetVM : ViewModel
  {
    public const string NameTypeNeutral = "Normal";
    public const string NameTypeFriendly = "Friendly";
    public const string NameTypeEnemy = "Enemy";
    public const string NameTypeNoble = "Noble";
    public const string NameTypePassage = "Passage";
    public const string NameTypeEnemyPassage = "Passage";
    public const string IconTypeCommonArea = "common_area";
    public const string IconTypeCharacter = "character";
    public const string IconTypePrisoner = "prisoner";
    public const string IconTypeNoble = "noble";
    public const string IconTypeBarber = "barber";
    public const string IconTypeBlacksmith = "blacksmith";
    public const string IconTypeGameHost = "game_host";
    public const string IconTypeHermit = "hermit";
    private Func<Vec3> _getPosition = (Func<Vec3>) (() => Vec3.Zero);
    private Func<string> _getMarkerObjectName = (Func<string>) (() => string.Empty);
    private MBBindingList<QuestMarkerVM> _quests;
    private Vec2 _screenPosition;
    private int _distance;
    private string _name;
    private string _iconType = string.Empty;
    private string _nameType = string.Empty;
    private bool _isEnabled;
    private bool _isTracked;
    private bool _isQuestMainStory;
    private bool _isEnemy;
    private bool _isFriendly;

    public bool IsAdditionalTargetAgent { get; private set; }

    public bool IsMovingTarget { get; }

    public Agent TargetAgent { get; }

    public Alley TargetAlley { get; }

    public PassageUsePoint TargetPassageUsePoint { get; private set; }

    public Vec3 WorldPosition => this._getPosition();

    public MissionNameMarkerTargetVM(CommonAreaMarker commonAreaMarker)
    {
      this.IsMovingTarget = false;
      this.NameType = "Passage";
      this.IconType = "common_area";
      this.Quests = new MBBindingList<QuestMarkerVM>();
      this.TargetAlley = Hero.MainHero.CurrentSettlement.Alleys[commonAreaMarker.AreaIndex - 1];
      this.UpdateAlleyStatus();
      this._getPosition = (Func<Vec3>) (() => commonAreaMarker.GetPosition());
      this._getMarkerObjectName = (Func<string>) (() => commonAreaMarker.GetName().ToString());
      CampaignEvents.AlleyOwnerChanged.AddNonSerializedListener((object) this, new Action<Alley, Hero, Hero>(this.OnAlleyOwnerChanged));
      this.RefreshValues();
    }

    public MissionNameMarkerTargetVM(WorkshopType workshopType, Vec3 signPosition)
    {
      this.IsMovingTarget = false;
      this.NameType = "Passage";
      this.IconType = workshopType.StringId;
      this.Quests = new MBBindingList<QuestMarkerVM>();
      this._getPosition = (Func<Vec3>) (() => signPosition);
      this._getMarkerObjectName = (Func<string>) (() => workshopType.Name.ToString());
      this.RefreshValues();
    }

    public MissionNameMarkerTargetVM(PassageUsePoint passageUsePoint)
    {
      this.TargetPassageUsePoint = passageUsePoint;
      this.IsMovingTarget = false;
      this.NameType = "Passage";
      this.IconType = passageUsePoint.ToLocation.StringId;
      this.Quests = new MBBindingList<QuestMarkerVM>();
      this._getPosition = (Func<Vec3>) (() => passageUsePoint.GameEntity.GlobalPosition);
      this._getMarkerObjectName = (Func<string>) (() => passageUsePoint.ToLocation.Name.ToString());
      this.RefreshValues();
    }

    public MissionNameMarkerTargetVM(Agent agent, bool isAdditionalTargetAgent)
    {
      this.IsMovingTarget = true;
      this.TargetAgent = agent;
      this.NameType = "Normal";
      this.IconType = "character";
      this.IsAdditionalTargetAgent = isAdditionalTargetAgent;
      this.Quests = new MBBindingList<QuestMarkerVM>();
      CharacterObject character = (CharacterObject) agent.Character;
      if (character != null)
      {
        Hero heroObject = character.HeroObject;
        if ((heroObject != null ? (heroObject.IsLord ? 1 : 0) : 0) != 0)
        {
          this.IconType = "noble";
          this.NameType = "Noble";
          if (FactionManager.IsAtWarAgainstFaction(character.HeroObject.MapFaction, Hero.MainHero.MapFaction))
          {
            this.NameType = "Enemy";
            this.IsEnemy = true;
          }
          else if (FactionManager.IsAlliedWithFaction(character.HeroObject.MapFaction, Hero.MainHero.MapFaction))
          {
            this.NameType = "Friendly";
            this.IsFriendly = true;
          }
        }
        if (character.HeroObject != null && character.HeroObject.IsPrisoner)
          this.IconType = "prisoner";
        if (agent.IsHuman && agent != Agent.Main && !this.IsAdditionalTargetAgent)
          this.UpdateQuestStatus();
        if (character == Settlement.CurrentSettlement?.Culture?.Barber)
          this.IconType = "barber";
        else if (character == Settlement.CurrentSettlement?.Culture?.Blacksmith)
          this.IconType = "blacksmith";
        else if (character == Settlement.CurrentSettlement?.Culture?.TavernGamehost)
          this.IconType = "game_host";
        else if (character.StringId == "sp_hermit")
          this.IconType = "hermit";
      }
      this._getPosition = (Func<Vec3>) (() => agent.Position with
      {
        z = agent.GetEyeGlobalPosition().Z
      });
      this._getMarkerObjectName = (Func<string>) (() => agent.Name);
      this.RefreshValues();
    }

    public MissionNameMarkerTargetVM(Vec3 position, string name, string iconType)
    {
      this.NameType = "Passage";
      this.IconType = iconType;
      this.Quests = new MBBindingList<QuestMarkerVM>();
      this._getPosition = (Func<Vec3>) (() => position);
      this._getMarkerObjectName = (Func<string>) (() => name);
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Name = this._getMarkerObjectName();
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      CampaignEvents.AlleyOwnerChanged.ClearListeners((object) this);
    }

    private void OnAlleyOwnerChanged(Alley alley, Hero newOwner, Hero oldOwner)
    {
      if (this.TargetAlley != alley || newOwner != Hero.MainHero && oldOwner != Hero.MainHero)
        return;
      this.UpdateAlleyStatus();
    }

    private void UpdateAlleyStatus()
    {
      if (this.TargetAlley == null)
        return;
      Hero owner = this.TargetAlley.Owner;
      if (owner != null)
      {
        if (owner == Hero.MainHero)
        {
          this.NameType = "Friendly";
          this.IsFriendly = true;
          this.IsEnemy = false;
        }
        else
        {
          this.NameType = "Passage";
          this.IsFriendly = false;
          this.IsEnemy = true;
        }
      }
      else
      {
        this.NameType = "Normal";
        this.IsFriendly = false;
        this.IsEnemy = false;
      }
    }

    public void UpdateQuestStatus(SandBoxUIHelper.IssueQuestFlags issueQuestFlags)
    {
      foreach (SandBoxUIHelper.IssueQuestFlags issueQuestFlagsValue in SandBoxUIHelper.IssueQuestFlagsValues)
      {
        SandBoxUIHelper.IssueQuestFlags questFlag = issueQuestFlagsValue;
        if (questFlag != SandBoxUIHelper.IssueQuestFlags.None && (issueQuestFlags & questFlag) != SandBoxUIHelper.IssueQuestFlags.None && this.Quests.AllQ<QuestMarkerVM>((Func<QuestMarkerVM, bool>) (q => q.IssueQuestFlag != questFlag)))
        {
          this.Quests.Add(new QuestMarkerVM(questFlag));
          if ((questFlag & SandBoxUIHelper.IssueQuestFlags.ActiveIssue) != SandBoxUIHelper.IssueQuestFlags.None && (questFlag & SandBoxUIHelper.IssueQuestFlags.AvailableIssue) != SandBoxUIHelper.IssueQuestFlags.None && (questFlag & SandBoxUIHelper.IssueQuestFlags.TrackedIssue) != SandBoxUIHelper.IssueQuestFlags.None)
            this.IsTracked = true;
          else if ((questFlag & SandBoxUIHelper.IssueQuestFlags.ActiveIssue) != SandBoxUIHelper.IssueQuestFlags.None && (questFlag & SandBoxUIHelper.IssueQuestFlags.ActiveStoryQuest) != SandBoxUIHelper.IssueQuestFlags.None && (questFlag & SandBoxUIHelper.IssueQuestFlags.TrackedStoryQuest) != SandBoxUIHelper.IssueQuestFlags.None)
            this.IsQuestMainStory = true;
        }
      }
      this.Quests.Sort((IComparer<QuestMarkerVM>) new MissionNameMarkerTargetVM.QuestMarkerComparer());
    }

    public void UpdateQuestStatus()
    {
      this.Quests.Clear();
      SandBoxUIHelper.IssueQuestFlags issueQuestFlags = SandBoxUIHelper.IssueQuestFlags.None;
      Hero heroObject = ((CharacterObject) this.TargetAgent?.Character)?.HeroObject;
      if (heroObject != null)
      {
        List<(SandBoxUIHelper.IssueQuestFlags, TextObject, TextObject)> questStateOfHero = SandBoxUIHelper.GetQuestStateOfHero(heroObject);
        for (int index = 0; index < questStateOfHero.Count; ++index)
          issueQuestFlags |= questStateOfHero[index].Item1;
      }
      if (this.TargetAgent != null && (this.TargetAgent.Character is CharacterObject character ? character.HeroObject?.Clan?.Leader : (Hero) null) != Hero.MainHero)
      {
        Settlement currentSettlement = Settlement.CurrentSettlement;
        int num;
        if (currentSettlement == null)
        {
          num = 0;
        }
        else
        {
          bool? isVisualTracked = currentSettlement.LocationComplex?.FindCharacter((IAgent) this.TargetAgent)?.IsVisualTracked;
          bool flag = true;
          num = isVisualTracked.GetValueOrDefault() == flag & isVisualTracked.HasValue ? 1 : 0;
        }
        if (num != 0)
          issueQuestFlags |= SandBoxUIHelper.IssueQuestFlags.TrackedIssue;
      }
      foreach (SandBoxUIHelper.IssueQuestFlags issueQuestFlagsValue in SandBoxUIHelper.IssueQuestFlagsValues)
      {
        if (issueQuestFlagsValue != SandBoxUIHelper.IssueQuestFlags.None && (issueQuestFlags & issueQuestFlagsValue) != SandBoxUIHelper.IssueQuestFlags.None)
        {
          this.Quests.Add(new QuestMarkerVM(issueQuestFlagsValue));
          if ((issueQuestFlagsValue & SandBoxUIHelper.IssueQuestFlags.ActiveIssue) != SandBoxUIHelper.IssueQuestFlags.None && (issueQuestFlagsValue & SandBoxUIHelper.IssueQuestFlags.AvailableIssue) != SandBoxUIHelper.IssueQuestFlags.None && (issueQuestFlagsValue & SandBoxUIHelper.IssueQuestFlags.TrackedIssue) != SandBoxUIHelper.IssueQuestFlags.None)
            this.IsTracked = true;
          else if ((issueQuestFlagsValue & SandBoxUIHelper.IssueQuestFlags.ActiveIssue) != SandBoxUIHelper.IssueQuestFlags.None && (issueQuestFlagsValue & SandBoxUIHelper.IssueQuestFlags.ActiveStoryQuest) != SandBoxUIHelper.IssueQuestFlags.None && (issueQuestFlagsValue & SandBoxUIHelper.IssueQuestFlags.TrackedStoryQuest) != SandBoxUIHelper.IssueQuestFlags.None)
            this.IsQuestMainStory = true;
        }
      }
      this.Quests.Sort((IComparer<QuestMarkerVM>) new MissionNameMarkerTargetVM.QuestMarkerComparer());
    }

    [DataSourceProperty]
    public MBBindingList<QuestMarkerVM> Quests
    {
      get => this._quests;
      set
      {
        if (value == this._quests)
          return;
        this._quests = value;
        this.OnPropertyChangedWithValue<MBBindingList<QuestMarkerVM>>(value, nameof (Quests));
      }
    }

    [DataSourceProperty]
    public Vec2 ScreenPosition
    {
      get => this._screenPosition;
      set
      {
        if ((double) value.x == (double) this._screenPosition.x && (double) value.y == (double) this._screenPosition.y)
          return;
        this._screenPosition = value;
        this.OnPropertyChangedWithValue(value, nameof (ScreenPosition));
      }
    }

    [DataSourceProperty]
    public string Name
    {
      get => this._name;
      set
      {
        if (!(value != this._name))
          return;
        this._name = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Name));
      }
    }

    [DataSourceProperty]
    public string IconType
    {
      get => this._iconType;
      set
      {
        if (!(value != this._iconType))
          return;
        this._iconType = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (IconType));
      }
    }

    [DataSourceProperty]
    public string NameType
    {
      get => this._nameType;
      set
      {
        if (!(value != this._nameType))
          return;
        this._nameType = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (NameType));
      }
    }

    [DataSourceProperty]
    public int Distance
    {
      get => this._distance;
      set
      {
        if (value == this._distance)
          return;
        this._distance = value;
        this.OnPropertyChangedWithValue(value, nameof (Distance));
      }
    }

    [DataSourceProperty]
    public bool IsEnabled
    {
      get => this._isEnabled;
      set
      {
        if (value == this._isEnabled)
          return;
        this._isEnabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsEnabled));
      }
    }

    [DataSourceProperty]
    public bool IsTracked
    {
      get => this._isTracked;
      set
      {
        if (value == this._isTracked)
          return;
        this._isTracked = value;
        this.OnPropertyChangedWithValue(value, nameof (IsTracked));
      }
    }

    [DataSourceProperty]
    public bool IsQuestMainStory
    {
      get => this._isQuestMainStory;
      set
      {
        if (value == this._isQuestMainStory)
          return;
        this._isQuestMainStory = value;
        this.OnPropertyChangedWithValue(value, nameof (IsQuestMainStory));
      }
    }

    [DataSourceProperty]
    public bool IsEnemy
    {
      get => this._isEnemy;
      set
      {
        if (value == this._isEnemy)
          return;
        this._isEnemy = value;
        this.OnPropertyChangedWithValue(value, nameof (IsEnemy));
      }
    }

    [DataSourceProperty]
    public bool IsFriendly
    {
      get => this._isFriendly;
      set
      {
        if (value == this._isFriendly)
          return;
        this._isFriendly = value;
        this.OnPropertyChangedWithValue(value, nameof (IsFriendly));
      }
    }

    private class QuestMarkerComparer : IComparer<QuestMarkerVM>
    {
      public int Compare(QuestMarkerVM x, QuestMarkerVM y)
      {
        return x.QuestMarkerType.CompareTo(y.QuestMarkerType);
      }
    }
  }
}
