// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterCreationContent.FaceGenChar
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterCreationContent
{
  public class FaceGenChar
  {
    public BodyProperties BodyProperties { get; private set; }

    public int Race { get; private set; }

    public Equipment Equipment { get; private set; }

    public bool IsFemale { get; private set; }

    public string ActionName { get; set; }

    public FaceGenChar(
      BodyProperties bodyProperties,
      int race,
      Equipment equipment,
      bool isFemale,
      string actionName = "act_inventory_idle_start")
    {
      this.BodyProperties = bodyProperties;
      this.Race = race;
      this.Equipment = equipment;
      this.IsFemale = isFemale;
      this.ActionName = actionName;
    }
  }
}
