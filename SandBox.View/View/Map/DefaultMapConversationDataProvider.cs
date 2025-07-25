// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.DefaultMapConversationDataProvider
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.View.Map
{
  public class DefaultMapConversationDataProvider : IMapConversationDataProvider
  {
    string IMapConversationDataProvider.GetAtmosphereNameFromData(MapConversationTableauData data)
    {
      string str = (double) data.TimeOfDay <= 3.0 || (double) data.TimeOfDay >= 21.0 ? "night" : ((double) data.TimeOfDay <= 8.0 || (double) data.TimeOfDay >= 16.0 ? "sunset" : "noon");
      if (data.Settlement == null || data.Settlement.IsHideout)
      {
        if (data.IsCurrentTerrainUnderSnow)
          return "conv_snow_" + str + "_0";
        switch (data.ConversationTerrainType)
        {
          case TerrainType.Steppe:
            return "conv_steppe_" + str + "_0";
          case TerrainType.Desert:
            return "conv_desert_" + str + "_0";
          case TerrainType.Forest:
            return "conv_forest_" + str + "_0";
          default:
            return "conv_plains_" + str + "_0";
        }
      }
      else
      {
        string lower = Enum.GetName(typeof (CultureCode), (object) data.Settlement.Culture.GetCultureCode()).ToLower();
        if (data.IsInside)
          return "conv_" + lower + "_lordshall_0";
        return "conv_" + lower + "_town_" + str + "_0";
      }
    }
  }
}
