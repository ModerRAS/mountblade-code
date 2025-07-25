// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.GameOver.StatCategory
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System.Collections.Generic;

#nullable disable
namespace SandBox.ViewModelCollection.GameOver
{
  public class StatCategory
  {
    public readonly IEnumerable<StatItem> Items;
    public readonly string ID;

    public StatCategory(string id, IEnumerable<StatItem> items)
    {
      this.ID = id;
      this.Items = items;
    }
  }
}
