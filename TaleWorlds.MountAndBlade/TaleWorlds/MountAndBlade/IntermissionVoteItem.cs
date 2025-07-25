// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IntermissionVoteItem
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class IntermissionVoteItem
  {
    public readonly string Id;
    public readonly int Index;

    public int VoteCount { get; private set; }

    public IntermissionVoteItem(string id, int index)
    {
      this.Id = id;
      this.Index = index;
      this.VoteCount = 0;
    }

    public void SetVoteCount(int voteCount) => this.VoteCount = voteCount;

    public void IncreaseVoteCount(int incrementAmount) => this.VoteCount += incrementAmount;
  }
}
