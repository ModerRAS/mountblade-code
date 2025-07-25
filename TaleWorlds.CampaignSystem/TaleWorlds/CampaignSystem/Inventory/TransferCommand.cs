// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Inventory.TransferCommand
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Inventory
{
  public struct TransferCommand
  {
    public TransferCommand.CommandType TypeOfCommand { get; private set; }

    public Equipment CharacterEquipment
    {
      get
      {
        return !this.IsCivilianEquipment ? this.Character?.FirstBattleEquipment : this.Character?.FirstCivilianEquipment;
      }
    }

    public InventoryLogic.InventorySide FromSide { get; private set; }

    public InventoryLogic.InventorySide ToSide { get; private set; }

    public EquipmentIndex FromEquipmentIndex { get; private set; }

    public EquipmentIndex ToEquipmentIndex { get; private set; }

    public int Amount { get; private set; }

    public ItemRosterElement ElementToTransfer { get; private set; }

    public CharacterObject Character { get; private set; }

    public bool IsCivilianEquipment { get; private set; }

    public static TransferCommand Transfer(
      int amount,
      InventoryLogic.InventorySide fromSide,
      InventoryLogic.InventorySide toSide,
      ItemRosterElement elementToTransfer,
      EquipmentIndex fromEquipmentIndex,
      EquipmentIndex toEquipmentIndex,
      CharacterObject character,
      bool civilianEquipment)
    {
      return new TransferCommand()
      {
        TypeOfCommand = TransferCommand.CommandType.Transfer,
        FromSide = fromSide,
        ToSide = toSide,
        ElementToTransfer = elementToTransfer,
        FromEquipmentIndex = fromEquipmentIndex,
        ToEquipmentIndex = toEquipmentIndex,
        Character = character,
        Amount = amount,
        IsCivilianEquipment = civilianEquipment
      };
    }

    public enum CommandType
    {
      Transfer,
    }
  }
}
