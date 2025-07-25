// Decompiled with JetBrains decompiler
// Type: CompanionRecruiter.MCMSettings
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

using MCM.Abstractions.Attributes;
using MCM.Abstractions.Attributes.v2;
using MCM.Abstractions.Base.Global;

#nullable enable
namespace CompanionRecruiter
{
  public class MCMSettings : AttributeGlobalSettings<MCMSettings>
  {
    public virtual string Id => "CompanionRecruiter";

    public virtual string DisplayName => "领主招募流浪者";

    public virtual string FolderName => "领主招募流浪者";

    public virtual string FormatType => "xml";

    [SettingPropertyBool("开启日志", Order = 1, HintText = "开启领主招募流浪者日志！", RequireRestart = false)]
    [SettingPropertyGroup("设置", GroupOrder = 0)]
    public bool EnableLog { get; set; } = false;
  }
}
