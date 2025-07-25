// Decompiled with JetBrains decompiler
// Type: CompanionRecruiter.SubModule
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

using HarmonyLib;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable enable
namespace CompanionRecruiter
{
  public class SubModule : MBSubModuleBase
  {
    protected virtual void OnGameStart(Game game, IGameStarter gameStarterObject)
    {
      base.OnGameStart(game, gameStarterObject);
      if (!(game.GameType is Campaign))
        return;
      this.AddBehaviors(gameStarterObject as CampaignGameStarter);
    }

    protected virtual void OnSubModuleLoad()
    {
      base.OnSubModuleLoad();
      new Harmony("jianghe.CompanionRecruiter").PatchAll();
    }

    private void AddBehaviors(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new CompanionRecruiterBehavior());
    }
  }
}
