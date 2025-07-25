// Decompiled with JetBrains decompiler
// Type: CompanionRecruiter.CompanionStruct
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

using TaleWorlds.SaveSystem;

#nullable enable
namespace CompanionRecruiter
{
  public class CompanionStruct
  {
    [SaveableField(1)]
    public string HeroId;
    [SaveableField(2)]
    public string RoleId;

    public CompanionStruct(string heroId, string roleId)
    {
      this.HeroId = heroId;
      this.RoleId = roleId;
    }
  }
}
