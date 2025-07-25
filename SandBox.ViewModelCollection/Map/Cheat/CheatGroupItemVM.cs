// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Map.Cheat.CheatGroupItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;

#nullable disable
namespace SandBox.ViewModelCollection.Map.Cheat
{
  public class CheatGroupItemVM : CheatItemBaseVM
  {
    public readonly GameplayCheatGroup CheatGroup;
    private readonly Action<CheatGroupItemVM> _onSelectCheatGroup;

    public CheatGroupItemVM(
      GameplayCheatGroup cheatGroup,
      Action<CheatGroupItemVM> onSelectCheatGroup)
    {
      this.CheatGroup = cheatGroup;
      this._onSelectCheatGroup = onSelectCheatGroup;
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Name = this.CheatGroup.GetName()?.ToString();
    }

    public override void ExecuteAction()
    {
      Action<CheatGroupItemVM> selectCheatGroup = this._onSelectCheatGroup;
      if (selectCheatGroup == null)
        return;
      selectCheatGroup(this);
    }
  }
}
