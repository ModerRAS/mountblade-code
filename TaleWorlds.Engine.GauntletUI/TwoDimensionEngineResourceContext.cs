// Decompiled with JetBrains decompiler
// Type: TaleWorlds.Engine.GauntletUI.TwoDimensionEngineResourceContext
// Assembly: TaleWorlds.Engine.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 09142970-CF52-41EE-A3E1-A44F7B1BD752
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.Engine.GauntletUI.dll

using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.Engine.GauntletUI
{
  public class TwoDimensionEngineResourceContext : ITwoDimensionResourceContext
  {
    TaleWorlds.TwoDimension.Texture ITwoDimensionResourceContext.LoadTexture(
      ResourceDepot resourceDepot,
      string name)
    {
      string[] strArray = name.Split('\\');
      TaleWorlds.Engine.Texture fromResource = TaleWorlds.Engine.Texture.GetFromResource(strArray[strArray.Length - 1]);
      fromResource.SetTextureAsAlwaysValid();
      fromResource.PreloadTexture(true);
      return new TaleWorlds.TwoDimension.Texture((TaleWorlds.TwoDimension.ITexture) new EngineTexture(fromResource));
    }
  }
}
