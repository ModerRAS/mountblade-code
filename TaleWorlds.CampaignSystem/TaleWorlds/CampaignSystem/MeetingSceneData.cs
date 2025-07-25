// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.MeetingSceneData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public struct MeetingSceneData
  {
    public string SceneID { get; private set; }

    public string CultureString { get; private set; }

    public CultureObject Culture
    {
      get => MBObjectManager.Instance.GetObject<CultureObject>(this.CultureString);
    }

    public MeetingSceneData(string sceneID, string cultureString)
    {
      this.SceneID = sceneID;
      this.CultureString = cultureString;
    }
  }
}
