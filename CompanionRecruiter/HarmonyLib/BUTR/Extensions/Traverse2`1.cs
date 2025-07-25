// Decompiled with JetBrains decompiler
// Type: HarmonyLib.BUTR.Extensions.Traverse2`1
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

using System;

#nullable enable
namespace HarmonyLib.BUTR.Extensions
{
  internal class Traverse2<T>
  {
    private readonly Traverse2 _traverse;

    public T? Value
    {
      get => this._traverse.GetValue<T>();
      set => this._traverse.SetValue((object) value);
    }

    private Traverse2() => this._traverse = new Traverse2((Type) null);

    public Traverse2(Traverse2 traverse) => this._traverse = traverse;
  }
}
