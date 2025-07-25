// Decompiled with JetBrains decompiler
// Type: StoryMode.View.StoryModeViewSubModule
// Assembly: StoryMode.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0D42E731-85DE-4B91-B7A6-53726B566D9F
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.View.dll

using SandBox.View.Map;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace StoryMode.View
{
  public class StoryModeViewSubModule : MBSubModuleBase
  {
    protected override void OnSubModuleLoad()
    {
      base.OnSubModuleLoad();
      TextObject coreContentDisabledReason = new TextObject("{=V8BXjyYq}Disabled during installation.");
      Module.CurrentModule.AddInitialStateOption(new InitialStateOption("StoryModeNewGame", new TextObject("{=sf_menu_storymode_new_game}New Campaign"), 2, (Action) (() => MBGameManager.StartNewGame((MBGameManager) new StoryModeGameManager())), (Func<(bool, TextObject)>) (() => (Module.CurrentModule.IsOnlyCoreContentEnabled, coreContentDisabledReason))));
      Module.CurrentModule.ImguiProfilerTick += new Action(this.OnImguiProfilerTick);
    }

    protected virtual void FillDataForCampaign()
    {
    }

    protected override void OnSubModuleUnloaded()
    {
      Module.CurrentModule.ImguiProfilerTick -= new Action(this.OnImguiProfilerTick);
      base.OnSubModuleUnloaded();
    }

    private void OnImguiProfilerTick()
    {
      if (Campaign.Current == null)
        return;
      MBReadOnlyList<MobileParty> all = MobileParty.All;
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      foreach (MobileParty mobileParty in (List<MobileParty>) all)
      {
        if (mobileParty.IsVisible)
          ++num1;
        PartyVisual visualOfParty = PartyVisualManager.Current.GetVisualOfParty(mobileParty.Party);
        if (visualOfParty.HumanAgentVisuals != null)
          ++num2;
        if (visualOfParty.MountAgentVisuals != null)
          ++num2;
        if (visualOfParty.CaravanMountAgentVisuals != null)
          ++num2;
        ++num3;
      }
      Imgui.BeginMainThreadScope();
      Imgui.Begin("Bannerlord Campaign Statistics");
      Imgui.Columns(2);
      Imgui.Text("Name");
      Imgui.NextColumn();
      Imgui.Text("Count");
      Imgui.NextColumn();
      Imgui.Separator();
      Imgui.Text("Total Mobile Party");
      Imgui.NextColumn();
      Imgui.Text(num3.ToString());
      Imgui.NextColumn();
      Imgui.Text("Visible Mobile Party");
      Imgui.NextColumn();
      Imgui.Text(num1.ToString());
      Imgui.NextColumn();
      Imgui.Text("Total Agent Visuals");
      Imgui.NextColumn();
      Imgui.Text(num2.ToString());
      Imgui.NextColumn();
      Imgui.End();
      Imgui.EndMainThreadScope();
    }
  }
}
