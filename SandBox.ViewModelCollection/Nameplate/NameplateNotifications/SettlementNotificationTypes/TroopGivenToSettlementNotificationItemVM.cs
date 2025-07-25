// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes.TroopGivenToSettlementNotificationItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes
{
  public class TroopGivenToSettlementNotificationItemVM : SettlementNotificationItemBaseVM
  {
    public Hero GiverHero { get; private set; }

    public TroopRoster Troops { get; private set; }

    public TroopGivenToSettlementNotificationItemVM(
      Action<SettlementNotificationItemBaseVM> onRemove,
      Hero giverHero,
      TroopRoster troops,
      int createdTick)
      : base(onRemove, createdTick)
    {
      this.GiverHero = giverHero;
      this.Troops = troops;
      this.Text = SandBoxUIHelper.GetTroopGivenToSettlementNotificationText(this.Troops.TotalManCount);
      this.CharacterName = this.GiverHero != null ? this.GiverHero.Name.ToString() : "null hero";
      this.CharacterVisual = this.GiverHero != null ? new ImageIdentifierVM(SandBoxUIHelper.GetCharacterCode(this.GiverHero.CharacterObject)) : new ImageIdentifierVM(ImageIdentifierType.Null);
      this.RelationType = 0;
      this.CreatedTick = createdTick;
      if (this.GiverHero == null)
        return;
      this.RelationType = this.GiverHero.Clan.IsAtWarWith((IFaction) Hero.MainHero.Clan) ? -1 : 1;
    }

    public void AddNewAction(TroopRoster newTroops)
    {
      this.Troops.Add(newTroops);
      this.Text = SandBoxUIHelper.GetTroopGivenToSettlementNotificationText(this.Troops.TotalManCount);
    }
  }
}
