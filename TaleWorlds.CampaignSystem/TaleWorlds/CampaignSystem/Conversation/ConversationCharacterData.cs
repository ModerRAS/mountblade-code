// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.ConversationCharacterData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation
{
  public struct ConversationCharacterData : ISerializableObject
  {
    public CharacterObject Character;
    public PartyBase Party;
    public bool NoHorse;
    public bool NoWeapon;
    public bool NoBodyguards;
    public bool SpawnedAfterFight;
    public bool IsCivilianEquipmentRequiredForLeader;
    public bool IsCivilianEquipmentRequiredForBodyGuardCharacters;

    public ConversationCharacterData(
      CharacterObject character,
      PartyBase party = null,
      bool noHorse = false,
      bool noWeapon = false,
      bool spawnAfterFight = false,
      bool isCivilianEquipmentRequiredForLeader = false,
      bool isCivilianEquipmentRequiredForBodyGuardCharacters = false,
      bool noBodyguards = false)
    {
      this.Character = character;
      this.Party = party;
      this.NoHorse = noHorse;
      this.NoWeapon = noWeapon;
      this.NoBodyguards = noBodyguards;
      this.SpawnedAfterFight = spawnAfterFight;
      this.IsCivilianEquipmentRequiredForLeader = isCivilianEquipmentRequiredForLeader;
      this.IsCivilianEquipmentRequiredForBodyGuardCharacters = isCivilianEquipmentRequiredForBodyGuardCharacters;
    }

    void ISerializableObject.DeserializeFrom(IReader reader)
    {
      this.Character = (CharacterObject) MBObjectManager.Instance.GetObject(new MBGUID(reader.ReadUInt()));
      this.Party = ConversationCharacterData.FindParty(reader.ReadInt());
      this.NoHorse = reader.ReadBool();
      this.NoWeapon = reader.ReadBool();
      this.SpawnedAfterFight = reader.ReadBool();
    }

    void ISerializableObject.SerializeTo(IWriter writer)
    {
      writer.WriteUInt(this.Character.Id.InternalValue);
      writer.WriteInt(this.Party == null ? -1 : this.Party.Index);
      writer.WriteBool(this.NoHorse);
      writer.WriteBool(this.NoWeapon);
      writer.WriteBool(this.SpawnedAfterFight);
    }

    private static PartyBase FindParty(int index)
    {
      MobileParty mobileParty = Campaign.Current.CampaignObjectManager.Find<MobileParty>((Predicate<MobileParty>) (x => x.Party.Index == index));
      if (mobileParty != null)
        return mobileParty.Party;
      return Settlement.All.FirstOrDefaultQ<Settlement>((Func<Settlement, bool>) (x => x.Party.Index == index))?.Party;
    }
  }
}
