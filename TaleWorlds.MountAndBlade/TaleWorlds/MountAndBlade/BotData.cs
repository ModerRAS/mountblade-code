// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BotData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BotData
  {
    public int AliveCount;
    public int KillCount;
    public int DeathCount;
    public int AssistCount;

    public int Score => this.KillCount * 3 + this.AssistCount;

    public BotData()
    {
    }

    public BotData(int kill, int assist, int death, int alive)
    {
      this.KillCount = kill;
      this.DeathCount = death;
      this.AssistCount = assist;
      this.AliveCount = alive;
    }

    public bool IsAnyValid
    {
      get
      {
        return this.KillCount != 0 || this.DeathCount != 0 || this.AssistCount != 0 || this.AliveCount != 0;
      }
    }

    public void ResetKillDeathAssist()
    {
      this.KillCount = 0;
      this.DeathCount = 0;
      this.AssistCount = 0;
    }
  }
}
