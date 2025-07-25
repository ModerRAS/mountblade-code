// Decompiled with JetBrains decompiler
// Type: CompanionRecruiter.CompanionRecruiterSaveDefiner
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

using System.Collections.Generic;
using TaleWorlds.SaveSystem;
using TaleWorlds.SaveSystem.Resolvers;

#nullable disable
namespace CompanionRecruiter
{
  public class CompanionRecruiterSaveDefiner : SaveableTypeDefiner
  {
    public CompanionRecruiterSaveDefiner()
      : base(218653738)
    {
    }

    protected virtual void DefineClassTypes()
    {
      this.AddClassDefinition(typeof (CompanionStruct), 1, (IObjectResolver) null);
    }

    protected virtual void DefineContainerDefinitions()
    {
      this.ConstructContainerDefinition(typeof (List<CompanionStruct>));
      this.ConstructContainerDefinition(typeof (Dictionary<string, List<CompanionStruct>>));
    }
  }
}
