// Decompiled with JetBrains decompiler
// Type: StoryMode.Extensions.Extensions
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace StoryMode.Extensions
{
  public static class Extensions
  {
    public static bool IsTrainingField(this Settlement settlement)
    {
      return settlement.SettlementComponent is StoryMode.TrainingField;
    }

    public static StoryMode.TrainingField TrainingField(this Settlement settlement)
    {
      return settlement.SettlementComponent as StoryMode.TrainingField;
    }
  }
}
