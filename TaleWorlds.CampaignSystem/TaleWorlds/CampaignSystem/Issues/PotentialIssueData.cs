// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.PotentialIssueData
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem.Issues
{
  public struct PotentialIssueData
  {
    public PotentialIssueData.StartIssueDelegate OnStartIssue { get; }

    public string IssueId { get; }

    public Type IssueType { get; }

    public IssueBase.IssueFrequency Frequency { get; }

    public object RelatedObject { get; }

    public bool IsValid => this.OnStartIssue != null;

    public PotentialIssueData(
      PotentialIssueData.StartIssueDelegate onStartIssue,
      Type issueType,
      IssueBase.IssueFrequency frequency,
      object relatedObject = null)
    {
      this.OnStartIssue = onStartIssue;
      this.IssueId = issueType.Name;
      this.IssueType = issueType;
      this.Frequency = frequency;
      this.RelatedObject = relatedObject;
    }

    public PotentialIssueData(Type issueType, IssueBase.IssueFrequency frequency)
    {
      this.OnStartIssue = (PotentialIssueData.StartIssueDelegate) null;
      this.IssueId = issueType.Name;
      this.IssueType = issueType;
      this.Frequency = frequency;
      this.RelatedObject = (object) null;
    }

    public delegate IssueBase StartIssueDelegate(in PotentialIssueData pid, Hero issueOwner);
  }
}
