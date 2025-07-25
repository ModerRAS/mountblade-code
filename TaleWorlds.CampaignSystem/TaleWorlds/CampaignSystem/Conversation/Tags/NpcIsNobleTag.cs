// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.NpcIsNobleTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class NpcIsNobleTag : ConversationTag
  {
    public const string Id = "NpcIsNobleTag";

    public override string StringId => nameof (NpcIsNobleTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      Hero heroObject = character.HeroObject;
      if (heroObject == null)
        return false;
      bool? isNoble = heroObject.Clan?.IsNoble;
      bool flag = true;
      return isNoble.GetValueOrDefault() == flag & isNoble.HasValue;
    }
  }
}
