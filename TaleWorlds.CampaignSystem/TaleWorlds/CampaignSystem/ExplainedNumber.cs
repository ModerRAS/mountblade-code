// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ExplainedNumber
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public struct ExplainedNumber
  {
    private static readonly TextObject LimitMinText = new TextObject("{=GNalaRaN}Minimum");
    private static readonly TextObject LimitMaxText = new TextObject("{=cfjTtxWv}Maximum");
    private static readonly TextObject BaseText = new TextObject("{=basevalue}Base");
    private float? _limitMinValue;
    private float? _limitMaxValue;
    private ExplainedNumber.StatExplainer _explainer;
    private float _sumOfFactors;

    public float ResultNumber
    {
      get
      {
        return MathF.Clamp(this.BaseNumber + this.BaseNumber * this._sumOfFactors, this.LimitMinValue, this.LimitMaxValue);
      }
    }

    public float BaseNumber { get; private set; }

    public bool IncludeDescriptions => this._explainer != null;

    public float LimitMinValue
    {
      get => !this._limitMinValue.HasValue ? float.MinValue : this._limitMinValue.Value;
    }

    public float LimitMaxValue
    {
      get => !this._limitMaxValue.HasValue ? float.MaxValue : this._limitMaxValue.Value;
    }

    public ExplainedNumber(float baseNumber = 0.0f, bool includeDescriptions = false, TextObject baseText = null)
    {
      this.BaseNumber = baseNumber;
      this._explainer = includeDescriptions ? new ExplainedNumber.StatExplainer() : (ExplainedNumber.StatExplainer) null;
      this._sumOfFactors = 0.0f;
      this._limitMinValue = new float?(float.MinValue);
      this._limitMaxValue = new float?(float.MaxValue);
      if (this._explainer == null || this.BaseNumber.ApproximatelyEqualsTo(0.0f))
        return;
      this._explainer.AddLine((baseText ?? ExplainedNumber.BaseText).ToString(), this.BaseNumber, ExplainedNumber.StatExplainer.OperationType.Base);
    }

    public string GetExplanations()
    {
      if (this._explainer == null)
        return "";
      MBStringBuilder mbStringBuilder = new MBStringBuilder();
      mbStringBuilder.Initialize(callerMemberName: nameof (GetExplanations));
      foreach ((string name, float number) line in this._explainer.GetLines(this.BaseNumber, this.ResultNumber))
      {
        string str = string.Format("{0} : {1}{2:0.##}\n", (object) line.name, (double) line.number > 1.0 / 1000.0 ? (object) "+" : (object) "", (object) line.number);
        mbStringBuilder.Append<string>(str);
      }
      return mbStringBuilder.ToStringAndRelease();
    }

    public List<(string name, float number)> GetLines()
    {
      return this._explainer == null ? new List<(string, float)>() : this._explainer.GetLines(this.BaseNumber, this.ResultNumber);
    }

    public void AddFromExplainedNumber(ExplainedNumber explainedNumber, TextObject baseText)
    {
      if (explainedNumber._explainer != null && this._explainer != null)
      {
        if (explainedNumber._explainer.BaseLine.HasValue && explainedNumber._explainer.BaseLine.HasValue && !explainedNumber.BaseNumber.ApproximatelyEqualsTo(0.0f))
        {
          float number = explainedNumber._explainer.BaseLine.Value.Number + explainedNumber._explainer.BaseLine.Value.Number * explainedNumber._sumOfFactors;
          this._explainer.AddLine(baseText?.ToString() ?? ExplainedNumber.BaseText.ToString(), number, ExplainedNumber.StatExplainer.OperationType.Add);
        }
        foreach (ExplainedNumber.StatExplainer.ExplanationLine line in explainedNumber._explainer.Lines)
        {
          if (line.OperationType == ExplainedNumber.StatExplainer.OperationType.Add)
          {
            float number = line.Number + line.Number * explainedNumber._sumOfFactors;
            this._explainer.AddLine(line.Name, number, line.OperationType);
          }
        }
      }
      this.BaseNumber += explainedNumber.ResultNumber;
    }

    public void Add(float value, TextObject description = null, TextObject variable = null)
    {
      if (value.ApproximatelyEqualsTo(0.0f))
        return;
      this.BaseNumber += value;
      if (description == null || this._explainer == null || value.ApproximatelyEqualsTo(0.0f))
        return;
      if (variable != null)
        description.SetTextVariable("A0", variable);
      this._explainer.AddLine(description.ToString(), value, ExplainedNumber.StatExplainer.OperationType.Add);
    }

    public void AddFactor(float value, TextObject description = null)
    {
      if (value.ApproximatelyEqualsTo(0.0f))
        return;
      this._sumOfFactors += value;
      if (description == null || this._explainer == null || value.ApproximatelyEqualsTo(0.0f))
        return;
      this._explainer.AddLine(description.ToString(), MathF.Round(value, 3) * 100f, ExplainedNumber.StatExplainer.OperationType.Multiply);
    }

    public void LimitMin(float minValue)
    {
      this._limitMinValue = new float?(minValue);
      if (this._explainer == null)
        return;
      this._explainer.AddLine(ExplainedNumber.LimitMinText.ToString(), minValue, ExplainedNumber.StatExplainer.OperationType.LimitMin);
    }

    public void LimitMax(float maxValue)
    {
      this._limitMaxValue = new float?(maxValue);
      if (this._explainer == null)
        return;
      this._explainer.AddLine(ExplainedNumber.LimitMaxText.ToString(), maxValue, ExplainedNumber.StatExplainer.OperationType.LimitMax);
    }

    public void Clamp(float minValue, float maxValue)
    {
      this.LimitMin(minValue);
      this.LimitMax(maxValue);
    }

    private class StatExplainer
    {
      public List<ExplainedNumber.StatExplainer.ExplanationLine> Lines { get; private set; } = new List<ExplainedNumber.StatExplainer.ExplanationLine>();

      public ExplainedNumber.StatExplainer.ExplanationLine? BaseLine { get; private set; }

      public ExplainedNumber.StatExplainer.ExplanationLine? LimitMinLine { get; private set; }

      public ExplainedNumber.StatExplainer.ExplanationLine? LimitMaxLine { get; private set; }

      public List<(string name, float number)> GetLines(float baseNumber, float resultNumber)
      {
        List<(string, float)> lines = new List<(string, float)>();
        if (this.BaseLine.HasValue)
        {
          List<(string, float)> valueTupleList = lines;
          ExplainedNumber.StatExplainer.ExplanationLine? baseLine = this.BaseLine;
          string name = baseLine.Value.Name;
          baseLine = this.BaseLine;
          double number = (double) baseLine.Value.Number;
          (string, float) valueTuple = (name, (float) number);
          valueTupleList.Add(valueTuple);
        }
        foreach (ExplainedNumber.StatExplainer.ExplanationLine line in this.Lines)
        {
          float num = line.Number;
          if (line.OperationType == ExplainedNumber.StatExplainer.OperationType.Multiply)
            num = (float) ((double) baseNumber * (double) num * 0.0099999997764825821);
          lines.Add((line.Name, num));
        }
        ExplainedNumber.StatExplainer.ExplanationLine? nullable;
        if (this.LimitMinLine.HasValue && (double) this.LimitMinLine.Value.Number > (double) resultNumber)
        {
          List<(string, float)> valueTupleList = lines;
          nullable = this.LimitMinLine;
          string name = nullable.Value.Name;
          nullable = this.LimitMinLine;
          double number = (double) nullable.Value.Number;
          (string, float) valueTuple = (name, (float) number);
          valueTupleList.Add(valueTuple);
        }
        nullable = this.LimitMaxLine;
        if (nullable.HasValue)
        {
          nullable = this.LimitMaxLine;
          if ((double) nullable.Value.Number < (double) resultNumber)
          {
            List<(string, float)> valueTupleList = lines;
            nullable = this.LimitMaxLine;
            string name = nullable.Value.Name;
            nullable = this.LimitMaxLine;
            double number = (double) nullable.Value.Number;
            (string, float) valueTuple = (name, (float) number);
            valueTupleList.Add(valueTuple);
          }
        }
        return lines;
      }

      public void AddLine(
        string name,
        float number,
        ExplainedNumber.StatExplainer.OperationType opType)
      {
        ExplainedNumber.StatExplainer.ExplanationLine explanationLine = new ExplainedNumber.StatExplainer.ExplanationLine(name, number, opType);
        switch (opType)
        {
          case ExplainedNumber.StatExplainer.OperationType.Base:
            this.BaseLine = new ExplainedNumber.StatExplainer.ExplanationLine?(explanationLine);
            break;
          case ExplainedNumber.StatExplainer.OperationType.Add:
          case ExplainedNumber.StatExplainer.OperationType.Multiply:
            int index1 = -1;
            for (int index2 = 0; index2 < this.Lines.Count; ++index2)
            {
              if (this.Lines[index2].Name.Equals(name) && this.Lines[index2].OperationType == opType)
              {
                index1 = index2;
                break;
              }
            }
            if (index1 < 0)
            {
              this.Lines.Add(explanationLine);
              break;
            }
            explanationLine = new ExplainedNumber.StatExplainer.ExplanationLine(name, number + this.Lines[index1].Number, opType);
            this.Lines[index1] = explanationLine;
            break;
          case ExplainedNumber.StatExplainer.OperationType.LimitMin:
            this.LimitMinLine = new ExplainedNumber.StatExplainer.ExplanationLine?(explanationLine);
            break;
          case ExplainedNumber.StatExplainer.OperationType.LimitMax:
            this.LimitMaxLine = new ExplainedNumber.StatExplainer.ExplanationLine?(explanationLine);
            break;
        }
      }

      public enum OperationType
      {
        Base,
        Add,
        Multiply,
        LimitMin,
        LimitMax,
      }

      public readonly struct ExplanationLine
      {
        public readonly float Number;
        public readonly string Name;
        public readonly ExplainedNumber.StatExplainer.OperationType OperationType;

        public ExplanationLine(
          string name,
          float number,
          ExplainedNumber.StatExplainer.OperationType operationType)
        {
          this.Name = name;
          this.Number = number;
          this.OperationType = operationType;
        }
      }
    }
  }
}
