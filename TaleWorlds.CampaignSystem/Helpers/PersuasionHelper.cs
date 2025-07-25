// Decompiled with JetBrains decompiler
// Type: Helpers.PersuasionHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class PersuasionHelper
  {
    public static TextObject ShowSuccess(PersuasionOptionArgs optionArgs, bool showToPlayer = true)
    {
      return TextObject.Empty;
    }

    public static TextObject GetDefaultPersuasionOptionReaction(PersuasionOptionResult optionResult)
    {
      TextObject persuasionOptionReaction;
      switch (optionResult)
      {
        case PersuasionOptionResult.CriticalFailure:
          persuasionOptionReaction = new TextObject("{=zqapPfSK}No.. No.");
          break;
        case PersuasionOptionResult.Failure:
        case PersuasionOptionResult.Miss:
          persuasionOptionReaction = new TextObject("{=mZmCmC6q}I don't think so.");
          break;
        case PersuasionOptionResult.CriticalSuccess:
          persuasionOptionReaction = new TextObject("{=yNSqDwse}Well... I can't argue with that.");
          break;
        default:
          persuasionOptionReaction = (double) MBRandom.RandomFloat > 0.5 ? new TextObject("{=AmBEgOyq}I see...") : new TextObject("{=hq13B7Ok}Yes.. You might be correct.");
          break;
      }
      return persuasionOptionReaction;
    }
  }
}
