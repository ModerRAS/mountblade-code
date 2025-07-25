// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes.IssueSolvedByLordNotificationItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes
{
  public class IssueSolvedByLordNotificationItemVM : SettlementNotificationItemBaseVM
  {
    public IssueSolvedByLordNotificationItemVM(
      Action<SettlementNotificationItemBaseVM> onRemove,
      Hero hero,
      int createdTick)
      : base(onRemove, createdTick)
    {
      this.Text = new TextObject("{=TFJTOYea}Solved an issue").ToString();
      this.CharacterName = hero?.Name?.ToString() ?? "";
      this.CharacterVisual = new ImageIdentifierVM(SandBoxUIHelper.GetCharacterCode(hero.CharacterObject));
      this.RelationType = 0;
      this.CreatedTick = createdTick;
      int num;
      if (hero != null)
      {
        bool? nullable = hero.Clan?.IsAtWarWith((IFaction) Hero.MainHero.Clan);
        bool flag = true;
        if (nullable.GetValueOrDefault() == flag & nullable.HasValue)
        {
          num = -1;
          goto label_4;
        }
      }
      num = 1;
label_4:
      this.RelationType = num;
    }
  }
}
