// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.CharacterCreation.CharacterCreationFaceGeneratorView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.CharacterCreation;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.GauntletUI.BodyGenerator;
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.CharacterCreation
{
  [CharacterCreationStageView(typeof (CharacterCreationFaceGeneratorStage))]
  public class CharacterCreationFaceGeneratorView : CharacterCreationStageViewBase
  {
    private BodyGeneratorView _faceGeneratorView;
    private readonly TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation _characterCreation;
    private EscapeMenuVM _escapeMenuDatasource;
    private IGauntletMovie _escapeMenuMovie;

    public CharacterCreationFaceGeneratorView(
      TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation characterCreation,
      ControlCharacterCreationStage affirmativeAction,
      TextObject affirmativeActionText,
      ControlCharacterCreationStage negativeAction,
      TextObject negativeActionText,
      ControlCharacterCreationStage onRefresh,
      ControlCharacterCreationStageReturnInt getCurrentStageIndexAction,
      ControlCharacterCreationStageReturnInt getTotalStageCountAction,
      ControlCharacterCreationStageReturnInt getFurthestIndexAction,
      ControlCharacterCreationStageWithInt goToIndexAction)
      : base(affirmativeAction, negativeAction, onRefresh, getTotalStageCountAction, getCurrentStageIndexAction, getFurthestIndexAction, goToIndexAction)
    {
      this._characterCreation = characterCreation;
      Equipment defaultEquipment = Game.Current.ObjectManager.GetObject<MBEquipmentRoster>("player_char_creation_show_" + CharacterObject.PlayerCharacter?.Culture?.StringId)?.DefaultEquipment;
      CharacterCreationFaceGeneratorView faceGeneratorView1 = this;
      // ISSUE: virtual method pointer
      ControlCharacterCreationStage characterCreationStage1 = new ControlCharacterCreationStage((object) faceGeneratorView1, __vmethodptr(faceGeneratorView1, NextStage));
      TextObject textObject1 = affirmativeActionText;
      CharacterCreationFaceGeneratorView faceGeneratorView2 = this;
      // ISSUE: virtual method pointer
      ControlCharacterCreationStage characterCreationStage2 = new ControlCharacterCreationStage((object) faceGeneratorView2, __vmethodptr(faceGeneratorView2, PreviousStage));
      TextObject textObject2 = negativeActionText;
      CharacterObject characterObject = Hero.MainHero.CharacterObject;
      Equipment equipment = defaultEquipment;
      ControlCharacterCreationStageReturnInt creationStageReturnInt1 = getCurrentStageIndexAction;
      ControlCharacterCreationStageReturnInt creationStageReturnInt2 = getTotalStageCountAction;
      ControlCharacterCreationStageReturnInt creationStageReturnInt3 = getFurthestIndexAction;
      ControlCharacterCreationStageWithInt creationStageWithInt = goToIndexAction;
      this._faceGeneratorView = new BodyGeneratorView(characterCreationStage1, textObject1, characterCreationStage2, textObject2, (BasicCharacterObject) characterObject, false, (IFaceGeneratorCustomFilter) null, equipment, creationStageReturnInt1, creationStageReturnInt2, creationStageReturnInt3, creationStageWithInt);
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this._faceGeneratorView.OnFinalize();
      this._faceGeneratorView = (BodyGeneratorView) null;
    }

    public override IEnumerable<ScreenLayer> GetLayers()
    {
      return (IEnumerable<ScreenLayer>) new List<ScreenLayer>()
      {
        (ScreenLayer) this._faceGeneratorView.SceneLayer,
        (ScreenLayer) this._faceGeneratorView.GauntletLayer
      };
    }

    public override void PreviousStage() => this._negativeAction.Invoke();

    public override void NextStage()
    {
      this._characterCreation.ChangeFaceGenChars(new List<FaceGenChar>()
      {
        new FaceGenChar(this._faceGeneratorView.BodyGen.CurrentBodyProperties, this._faceGeneratorView.BodyGen.Race, new Equipment(), this._faceGeneratorView.BodyGen.IsFemale)
      });
      this._affirmativeAction.Invoke();
    }

    public override void Tick(float dt) => this._faceGeneratorView.OnTick(dt);

    public override int GetVirtualStageCount() => 1;

    public override void GoToIndex(int index) => this._goToIndexAction.Invoke(index);

    public override void LoadEscapeMenuMovie()
    {
      this._escapeMenuDatasource = new EscapeMenuVM((IEnumerable<EscapeMenuItemVM>) this.GetEscapeMenuItems((CharacterCreationStageViewBase) this), (TextObject) null);
      this._escapeMenuMovie = this._faceGeneratorView.GauntletLayer.LoadMovie("EscapeMenu", (ViewModel) this._escapeMenuDatasource);
    }

    public override void ReleaseEscapeMenuMovie()
    {
      this._faceGeneratorView.GauntletLayer.ReleaseMovie(this._escapeMenuMovie);
      this._escapeMenuDatasource = (EscapeMenuVM) null;
      this._escapeMenuMovie = (IGauntletMovie) null;
    }
  }
}
