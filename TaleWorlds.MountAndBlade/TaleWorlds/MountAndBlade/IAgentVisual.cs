// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IAgentVisual
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IAgentVisual
  {
    void SetAction(ActionIndexCache actionName, float startProgress = 0.0f, bool forceFaceMorphRestart = true);

    MBAgentVisuals GetVisuals();

    MatrixFrame GetFrame();

    BodyProperties GetBodyProperties();

    void SetBodyProperties(BodyProperties bodyProperties);

    bool GetIsFemale();

    string GetCharacterObjectID();

    void SetCharacterObjectID(string id);

    Equipment GetEquipment();

    void SetClothingColors(uint color1, uint color2);

    void GetClothingColors(out uint color1, out uint color2);

    AgentVisualsData GetCopyAgentVisualsData();

    void Refresh(
      bool needBatchedVersionForWeaponMeshes,
      AgentVisualsData data,
      bool forceUseFaceCache = false);
  }
}
