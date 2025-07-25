// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes.TroopRecruitmentNotificationItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes
{
  public class TroopRecruitmentNotificationItemVM : SettlementNotificationItemBaseVM
  {
    private int _recruitAmount;

    public Hero RecruiterHero { get; private set; }

    public TroopRecruitmentNotificationItemVM(
      Action<SettlementNotificationItemBaseVM> onRemove,
      Hero recruiterHero,
      int amount,
      int createdTick)
      : base(onRemove, createdTick)
    {
      this.Text = SandBoxUIHelper.GetRecruitNotificationText(amount);
      this._recruitAmount = amount;
      this.RecruiterHero = recruiterHero;
      this.CharacterName = recruiterHero != null ? recruiterHero.Name.ToString() : "null hero";
      this.CharacterVisual = recruiterHero != null ? new ImageIdentifierVM(SandBoxUIHelper.GetCharacterCode(recruiterHero.CharacterObject)) : new ImageIdentifierVM(ImageIdentifierType.Null);
      this.RelationType = 0;
      this.CreatedTick = createdTick;
      if (recruiterHero == null)
        return;
      this.RelationType = recruiterHero.Clan.IsAtWarWith((IFaction) Hero.MainHero.Clan) ? -1 : 1;
    }

    public void AddNewAction(int addedAmount)
    {
      this._recruitAmount += addedAmount;
      this.Text = SandBoxUIHelper.GetRecruitNotificationText(this._recruitAmount);
    }
  }
}
