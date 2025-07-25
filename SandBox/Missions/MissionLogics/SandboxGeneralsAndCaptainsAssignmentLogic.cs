// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.SandboxGeneralsAndCaptainsAssignmentLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class SandboxGeneralsAndCaptainsAssignmentLogic : GeneralsAndCaptainsAssignmentLogic
  {
    public SandboxGeneralsAndCaptainsAssignmentLogic(
      TextObject attackerGeneralName,
      TextObject defenderGeneralName,
      TextObject attackerAllyGeneralName = null,
      TextObject defenderAllyGeneralName = null,
      bool createBodyguard = true)
      : base(attackerGeneralName, defenderGeneralName, attackerAllyGeneralName, defenderAllyGeneralName, createBodyguard)
    {
    }

    protected override void SortCaptainsByPriority(Team team, ref List<Agent> captains)
    {
      EncounterModel encounterModel = Campaign.Current.Models.EncounterModel;
      if (encounterModel != null)
        captains = captains.OrderByDescending<Agent, float>((Func<Agent, float>) (captain => captain != team.GeneralAgent ? (!(captain.Character is CharacterObject character) || character.HeroObject == null ? 0.0f : (float) encounterModel.GetCharacterSergeantScore(character.HeroObject)) : float.MaxValue)).ToList<Agent>();
      else
        base.SortCaptainsByPriority(team, ref captains);
    }
  }
}
