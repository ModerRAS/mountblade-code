// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Persuasion.PersuasionTask
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Persuasion
{
  public class PersuasionTask
  {
    public readonly MBList<PersuasionOptionArgs> Options;
    public TextObject SpokenLine;
    public TextObject ImmediateFailLine;
    public TextObject FinalFailLine;
    public TextObject TryLaterLine;
    public readonly int ReservationType;

    public PersuasionTask(int reservationType)
    {
      this.Options = new MBList<PersuasionOptionArgs>();
      this.ReservationType = reservationType;
    }

    public void AddOptionToTask(PersuasionOptionArgs option) => this.Options.Add(option);

    public void BlockAllOptions()
    {
      foreach (PersuasionOptionArgs option in (List<PersuasionOptionArgs>) this.Options)
        option.BlockTheOption(true);
    }

    public void UnblockAllOptions()
    {
      foreach (PersuasionOptionArgs option in (List<PersuasionOptionArgs>) this.Options)
        option.BlockTheOption(false);
    }

    public void ApplyEffects(float moveToNextStageChance, float blockRandomOptionChance)
    {
      if ((double) moveToNextStageChance > (double) MBRandom.RandomFloat)
      {
        this.BlockAllOptions();
      }
      else
      {
        if ((double) blockRandomOptionChance <= (double) MBRandom.RandomFloat)
          return;
        this.Options.GetRandomElementWithPredicate<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => !x.IsBlocked))?.BlockTheOption(true);
      }
    }
  }
}
