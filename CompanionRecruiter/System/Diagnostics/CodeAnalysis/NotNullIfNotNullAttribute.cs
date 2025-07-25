// Decompiled with JetBrains decompiler
// Type: System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

#nullable enable
namespace System.Diagnostics.CodeAnalysis
{
  [AttributeUsage(AttributeTargets.Property | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true, Inherited = false)]
  [ExcludeFromCodeCoverage]
  [DebuggerNonUserCode]
  internal sealed class NotNullIfNotNullAttribute : Attribute
  {
    public string ParameterName { get; }

    public NotNullIfNotNullAttribute(string parameterName) => this.ParameterName = parameterName;
  }
}
