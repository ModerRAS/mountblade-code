// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SaveCompability.BattleTypeEnumResolver
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.Library;
using TaleWorlds.SaveSystem.Resolvers;

#nullable disable
namespace TaleWorlds.CampaignSystem.SaveCompability
{
  public class BattleTypeEnumResolver : IEnumResolver
  {
    public string ResolveObject(string originalObject)
    {
      if (string.IsNullOrEmpty(originalObject))
      {
        Debug.FailedAssert("EndCaptivityDetail data is null or empty", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\SaveCompability\\BattleTypeEnumResolver.cs", nameof (ResolveObject), 16);
        return MapEvent.BattleTypes.None.ToString();
      }
      return originalObject.Equals("AlleyFight") ? MapEvent.BattleTypes.None.ToString() : originalObject;
    }
  }
}
