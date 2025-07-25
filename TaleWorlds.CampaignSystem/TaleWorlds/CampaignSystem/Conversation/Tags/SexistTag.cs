// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.SexistTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class SexistTag : ConversationTag
  {
    public const string Id = "SexistTag";

    public override string StringId => nameof (SexistTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      bool flag = character.HeroObject.Clan.Heroes.Any<Hero>((Func<Hero, bool>) (x => x.IsFemale && x.IsCommander));
      int num1 = character.GetTraitLevel(DefaultTraits.Calculating) + character.GetTraitLevel(DefaultTraits.Mercy);
      int num2 = character.GetTraitLevel(DefaultTraits.Valor) + character.GetTraitLevel(DefaultTraits.Generosity);
      return num1 < 0 && num2 <= 0 && !flag;
    }
  }
}
