// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.ConversationAnimData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation
{
  public class ConversationAnimData
  {
    [SaveableField(0)]
    public string IdleAnimStart;
    [SaveableField(1)]
    public string IdleAnimLoop;
    [SaveableField(2)]
    public int FamilyType;
    [SaveableField(3)]
    public int MountFamilyType;
    [SaveableField(4)]
    public Dictionary<string, string> Reactions;

    public ConversationAnimData() => this.Reactions = new Dictionary<string, string>();
  }
}
