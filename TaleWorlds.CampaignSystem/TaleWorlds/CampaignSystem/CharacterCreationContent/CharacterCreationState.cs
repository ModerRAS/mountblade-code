// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreationState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterCreationContent
{
  public class CharacterCreationState : PlayerGameState
  {
    private CharacterCreation _characterCreation;
    private ICharacterCreationStateHandler _handler;
    private readonly List<KeyValuePair<int, Type>> _stages;
    private int _stageIndex = -1;
    private int _furthestStageIndex;
    public readonly CharacterCreationContentBase CurrentCharacterCreationContent;

    public CharacterCreation CharacterCreation
    {
      get => this._characterCreation;
      private set => this._characterCreation = value;
    }

    public ICharacterCreationStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public CharacterCreationStageBase CurrentStage { get; private set; }

    public CharacterCreationState(CharacterCreationContentBase baseContent)
    {
      this.CharacterCreation = new CharacterCreation();
      this.CurrentCharacterCreationContent = baseContent;
      this.CurrentCharacterCreationContent.Initialize(this.CharacterCreation);
      this._stages = new List<KeyValuePair<int, Type>>();
      int key = 0;
      foreach (Type characterCreationStage in this.CurrentCharacterCreationContent.CharacterCreationStages)
      {
        if (characterCreationStage.IsSubclassOf(typeof (CharacterCreationStageBase)))
          this._stages.Add(new KeyValuePair<int, Type>(key, characterCreationStage));
        else
          Debug.FailedAssert("Invalid character creation stage type: " + characterCreationStage.Name, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CharacterCreationContent\\CharacterCreationState.cs", ".ctor", 54);
      }
    }

    public CharacterCreationState()
    {
    }

    protected override void OnInitialize()
    {
      base.OnInitialize();
      Game.Current.GameStateManager.RegisterActiveStateDisableRequest((object) this);
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      if (this._stageIndex != -1 || this.CharacterCreation == null)
        return;
      this.NextStage();
    }

    public void FinalizeCharacterCreation()
    {
      this.CharacterCreation.ApplyFinalEffects();
      Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this);
      Game.Current.GameStateManager.CleanAndPushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<MapState>());
      PartyBase.MainParty.SetVisualAsDirty();
      this._handler?.OnCharacterCreationFinalized();
      this.CurrentCharacterCreationContent.OnCharacterCreationFinalized();
      CampaignEventDispatcher.Instance.OnCharacterCreationIsOver();
    }

    public void NextStage()
    {
      ++this._stageIndex;
      this.CurrentStage?.OnFinalize();
      this._furthestStageIndex = MathF.Max(this._furthestStageIndex, this._stageIndex);
      if (this._stageIndex == this._stages.Count)
      {
        this.FinalizeCharacterCreation();
      }
      else
      {
        this.CreateStage(this._stages[this._stageIndex].Value);
        this.Refresh();
      }
    }

    public void PreviousStage()
    {
      this.CurrentStage?.OnFinalize();
      --this._stageIndex;
      this.CreateStage(this._stages[this._stageIndex].Value);
      this.Refresh();
    }

    private void CreateStage(Type type)
    {
      this.CurrentStage = Activator.CreateInstance(type, (object) this) as CharacterCreationStageBase;
      this._handler?.OnStageCreated(this.CurrentStage);
    }

    public void Refresh()
    {
      if (this.CurrentStage == null || this._stageIndex < 0 || this._stageIndex >= this._stages.Count)
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CharacterCreationContent\\CharacterCreationState.cs", nameof (Refresh), 139);
      else
        this._handler?.OnRefresh();
    }

    public int GetTotalStagesCount() => this._stages.Count;

    public int GetIndexOfCurrentStage() => this._stageIndex;

    public int GetFurthestIndex() => this._furthestStageIndex;

    public void GoToStage(int stageIndex)
    {
      if (stageIndex < 0 || stageIndex >= this._stages.Count || stageIndex == this._stageIndex || stageIndex > this._furthestStageIndex)
        return;
      this._stageIndex = stageIndex + 1;
      this.PreviousStage();
    }
  }
}
