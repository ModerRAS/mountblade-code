// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterCreationContent.FaceGenMount
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterCreationContent
{
  public class FaceGenMount
  {
    public MountCreationKey MountKey { get; private set; }

    public ItemObject HorseItem { get; private set; }

    public ItemObject HarnessItem { get; private set; }

    public string ActionName { get; set; }

    public FaceGenMount(
      MountCreationKey mountKey,
      ItemObject horseItem,
      ItemObject harnessItem,
      string actionName = "act_inventory_idle_start")
    {
      this.MountKey = mountKey;
      this.HorseItem = horseItem;
      this.HarnessItem = harnessItem;
      this.ActionName = actionName;
    }
  }
}
