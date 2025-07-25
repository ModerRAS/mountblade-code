// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Tags.NoConflictTag
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Tags
{
  public class NoConflictTag : ConversationTag
  {
    public const string Id = "NoConflictTag";

    public override string StringId => nameof (NoConflictTag);

    public override bool IsApplicableTo(CharacterObject character)
    {
      int num = new HostileRelationshipTag().IsApplicableTo(character) ? 1 : 0;
      bool flag = new PlayerIsEnemyTag().IsApplicableTo(character);
      return num == 0 && !flag;
    }
  }
}
