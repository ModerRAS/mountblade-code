// Decompiled with JetBrains decompiler
// Type: System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

#nullable enable
namespace System.Diagnostics.CodeAnalysis
{
  [AttributeUsage(AttributeTargets.Method | AttributeTargets.Property, Inherited = false, AllowMultiple = true)]
  [ExcludeFromCodeCoverage]
  [DebuggerNonUserCode]
  internal sealed class MemberNotNullWhenAttribute : Attribute
  {
    public bool ReturnValue { get; }

    public string[] Members { get; }

    public MemberNotNullWhenAttribute(bool returnValue, string member)
    {
      this.ReturnValue = returnValue;
      this.Members = new string[1]{ member };
    }

    public MemberNotNullWhenAttribute(bool returnValue, params string[] members)
    {
      this.ReturnValue = returnValue;
      this.Members = members;
    }
  }
}
