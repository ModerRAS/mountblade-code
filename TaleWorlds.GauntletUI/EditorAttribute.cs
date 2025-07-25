// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.EditorAttribute
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  [AttributeUsage(AttributeTargets.Property, AllowMultiple = false)]
  public class EditorAttribute : Attribute
  {
    public readonly bool IncludeInnerProperties;

    public EditorAttribute(bool includeInnerProperties = false)
    {
      this.IncludeInnerProperties = includeInnerProperties;
    }
  }
}
