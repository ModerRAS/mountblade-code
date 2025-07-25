// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.EquipmentControllerLeaveLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class EquipmentControllerLeaveLogic : MissionLogic
  {
    public bool IsEquipmentSelectionActive { get; private set; }

    public void SetIsEquipmentSelectionActive(bool isActive)
    {
      this.IsEquipmentSelectionActive = isActive;
      Debug.Print("IsEquipmentSelectionActive: " + isActive.ToString());
    }

    public override InquiryData OnEndMissionRequest(out bool canLeave)
    {
      canLeave = !this.IsEquipmentSelectionActive;
      return (InquiryData) null;
    }
  }
}
