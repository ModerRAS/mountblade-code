// Decompiled with JetBrains decompiler
// Type: StoryMode.StoryModeGameManager
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using SandBox;
using StoryMode.CharacterCreationContent;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.ModuleManager;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace StoryMode
{
  public class StoryModeGameManager : SandBoxGameManager
  {
    protected override void DoLoadingForGameManager(
      GameManagerLoadingSteps gameManagerLoadingStep,
      out GameManagerLoadingSteps nextStep)
    {
      if (gameManagerLoadingStep != GameManagerLoadingSteps.SecondInitializeThirdState)
      {
        base.DoLoadingForGameManager(gameManagerLoadingStep, out nextStep);
      }
      else
      {
        MBGlobals.InitializeReferences();
        MBDebug.Print("Initializing new game begin...");
        CampaignStoryMode campaignStoryMode = new CampaignStoryMode(CampaignGameMode.Campaign);
        Game.CreateGame((TaleWorlds.Core.GameType) campaignStoryMode, (GameManagerBase) this);
        campaignStoryMode.SetLoadingParameters(Campaign.GameLoadingType.NewCampaign);
        MBDebug.Print("Initializing new game end...");
        Game.Current.DoLoading();
        nextStep = GameManagerLoadingSteps.PostInitializeFourthState;
      }
    }

    public override void OnLoadFinished()
    {
      VideoPlaybackState state = Game.Current.GameStateManager.CreateState<VideoPlaybackState>();
      string str = ModuleHelper.GetModuleFullPath("SandBox") + "Videos/CampaignIntro/";
      string subtitleFileBasePath = str + "campaign_intro";
      string videoPath = str + "campaign_intro.ivf";
      string audioPath = str + "campaign_intro.ogg";
      state.SetStartingParameters(videoPath, audioPath, subtitleFileBasePath);
      state.SetOnVideoFinisedDelegate(new Action(this.LaunchStoryModeCharacterCreation));
      Game.Current.GameStateManager.CleanAndPushState((GameState) state);
      this.IsLoaded = true;
    }

    private void LaunchStoryModeCharacterCreation()
    {
      Game.Current.GameStateManager.CleanAndPushState((GameState) Game.Current.GameStateManager.CreateState<CharacterCreationState>((object) new StoryModeCharacterCreationContent()));
    }
  }
}
