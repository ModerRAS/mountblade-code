// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.IssueQuestTasks.TalkToNpcQuestTask
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem.Issues.IssueQuestTasks
{
  public class TalkToNpcQuestTask : QuestTaskBase
  {
    private CharacterObject _character;

    public TalkToNpcQuestTask(Hero hero, Action onSucceededAction, DialogFlow dialogFlow = null)
      : base(dialogFlow, onSucceededAction)
    {
      this._character = hero.CharacterObject;
    }

    public TalkToNpcQuestTask(
      CharacterObject character,
      Action onSucceededAction,
      DialogFlow dialogFlow = null)
      : base(dialogFlow, onSucceededAction)
    {
      this._character = character;
    }

    public bool IsTaskCharacter()
    {
      return this._character == CharacterObject.OneToOneConversationCharacter;
    }

    protected override void OnFinished() => this._character = (CharacterObject) null;

    public override void SetReferences()
    {
    }
  }
}
