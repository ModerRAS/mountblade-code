// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.GameOver.StatItem
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

#nullable disable
namespace SandBox.ViewModelCollection.GameOver
{
  public class StatItem
  {
    public readonly string ID;
    public readonly string Value;
    public readonly StatItem.StatType Type;

    public StatItem(string id, string value, StatItem.StatType type = StatItem.StatType.None)
    {
      this.ID = id;
      this.Value = value;
      this.Type = type;
    }

    public enum StatType
    {
      None,
      Influence,
      Issue,
      Tournament,
      Gold,
      Crime,
      Kill,
    }
  }
}
