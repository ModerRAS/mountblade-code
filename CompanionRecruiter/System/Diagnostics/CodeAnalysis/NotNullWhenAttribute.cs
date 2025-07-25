// Decompiled with JetBrains decompiler
// Type: System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

#nullable disable
namespace System.Diagnostics.CodeAnalysis
{
  [AttributeUsage(AttributeTargets.Parameter, Inherited = false)]
  [ExcludeFromCodeCoverage]
  [DebuggerNonUserCode]
  internal sealed class NotNullWhenAttribute : Attribute
  {
    public bool ReturnValue { get; }

    public NotNullWhenAttribute(bool returnValue) => this.ReturnValue = returnValue;
  }
}
