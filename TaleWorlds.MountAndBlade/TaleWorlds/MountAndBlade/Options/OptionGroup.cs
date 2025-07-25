// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Options.OptionGroup
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine.Options;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade.Options
{
  public class OptionGroup
  {
    public readonly TextObject GroupName;
    public readonly IEnumerable<IOptionData> Options;

    public OptionGroup(TextObject groupName, IEnumerable<IOptionData> options)
    {
      this.GroupName = groupName;
      this.Options = options;
    }
  }
}
