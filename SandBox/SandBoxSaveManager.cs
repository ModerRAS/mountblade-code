// Decompiled with JetBrains decompiler
// Type: SandBox.SandBoxSaveManager
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class SandBoxSaveManager : ISaveManager
  {
    public int GetAutoSaveInterval() => BannerlordConfig.AutoSaveInterval;

    public void OnSaveOver(bool isSuccessful, string newSaveGameName)
    {
      if (!isSuccessful)
        return;
      BannerlordConfig.LatestSaveGameName = newSaveGameName;
      int num = (int) BannerlordConfig.Save();
    }
  }
}
