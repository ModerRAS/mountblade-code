// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Inventory.TransferCommandResult
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Inventory
{
  public class TransferCommandResult
  {
    public CharacterObject TransferCharacter { get; private set; }

    public bool IsCivilianEquipment { get; private set; }

    public Equipment TransferEquipment
    {
      get
      {
        return !this.IsCivilianEquipment ? this.TransferCharacter?.FirstBattleEquipment : this.TransferCharacter?.FirstCivilianEquipment;
      }
    }

    public InventoryLogic.InventorySide ResultSide { get; private set; }

    public ItemRosterElement EffectedItemRosterElement { get; private set; }

    public int EffectedNumber { get; private set; }

    public int FinalNumber { get; private set; }

    public EquipmentIndex EffectedEquipmentIndex { get; private set; }

    public TransferCommandResult()
    {
    }

    public TransferCommandResult(
      InventoryLogic.InventorySide resultSide,
      ItemRosterElement effectedItemRosterElement,
      int effectedNumber,
      int finalNumber,
      EquipmentIndex effectedEquipmentIndex,
      CharacterObject transferCharacter,
      bool isCivilianEquipment)
    {
      this.ResultSide = resultSide;
      this.EffectedItemRosterElement = effectedItemRosterElement;
      this.EffectedNumber = effectedNumber;
      this.FinalNumber = finalNumber;
      this.EffectedEquipmentIndex = effectedEquipmentIndex;
      this.TransferCharacter = transferCharacter;
      this.IsCivilianEquipment = isCivilianEquipment;
    }
  }
}
