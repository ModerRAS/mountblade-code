// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Map.Cheat.CheatActionItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;

#nullable disable
namespace SandBox.ViewModelCollection.Map.Cheat
{
  public class CheatActionItemVM : CheatItemBaseVM
  {
    public readonly GameplayCheatItem Cheat;
    private readonly Action<CheatActionItemVM> _onCheatExecuted;

    public CheatActionItemVM(GameplayCheatItem cheat, Action<CheatActionItemVM> onCheatExecuted)
    {
      this._onCheatExecuted = onCheatExecuted;
      this.Cheat = cheat;
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Name = this.Cheat?.GetName().ToString();
    }

    public override void ExecuteAction()
    {
      this.Cheat?.ExecuteCheat();
      Action<CheatActionItemVM> onCheatExecuted = this._onCheatExecuted;
      if (onCheatExecuted == null)
        return;
      onCheatExecuted(this);
    }
  }
}
