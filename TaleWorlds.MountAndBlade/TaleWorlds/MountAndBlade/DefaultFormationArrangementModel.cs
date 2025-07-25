// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DefaultFormationArrangementModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DefaultFormationArrangementModel : FormationArrangementModel
  {
    private static readonly DefaultFormationArrangementModel.RelativeFormationPosition[] BannerBearerLineFormationPositions = new DefaultFormationArrangementModel.RelativeFormationPosition[6]
    {
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, true, 1),
      new DefaultFormationArrangementModel.RelativeFormationPosition(false, 0, false, 0),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 0),
      new DefaultFormationArrangementModel.RelativeFormationPosition(false, 0, true, 1),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, true, 1, 0.5f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 0, 0.5f)
    };
    private static readonly DefaultFormationArrangementModel.RelativeFormationPosition[] BannerBearerCircularFormationPositions = new DefaultFormationArrangementModel.RelativeFormationPosition[6]
    {
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 0, 0.5f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 1, 0.833f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 1, 0.167f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 2, 0.666f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 2),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 2, 0.333f)
    };
    private static readonly DefaultFormationArrangementModel.RelativeFormationPosition[] BannerBearerSkeinFormationPositions = new DefaultFormationArrangementModel.RelativeFormationPosition[6]
    {
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 0, 0.5f, 0.5f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 0),
      new DefaultFormationArrangementModel.RelativeFormationPosition(false, 0, false, 0),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 0, rankFractionalOffset: 0.5f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(false, 0, false, 0, rankFractionalOffset: 0.5f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, true, 1, 0.5f)
    };
    private static readonly DefaultFormationArrangementModel.RelativeFormationPosition[] BannerBearerSquareFormationPositions = new DefaultFormationArrangementModel.RelativeFormationPosition[6]
    {
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 0, 0.5f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 1, 0.833f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 1, 0.167f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 2, 0.666f),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 2),
      new DefaultFormationArrangementModel.RelativeFormationPosition(true, 0, false, 2, 0.333f)
    };

    public override List<FormationArrangementModel.ArrangementPosition> GetBannerBearerPositions(
      Formation formation,
      int maxCount)
    {
      List<FormationArrangementModel.ArrangementPosition> bannerBearerPositions = new List<FormationArrangementModel.ArrangementPosition>();
      if (formation == null || !(formation.Arrangement is LineFormation arrangement))
        return bannerBearerPositions;
      DefaultFormationArrangementModel.RelativeFormationPosition[] formationPositionArray = (DefaultFormationArrangementModel.RelativeFormationPosition[]) null;
      int fileCount;
      int rankCount;
      arrangement.GetFormationInfo(out fileCount, out rankCount);
      switch (arrangement)
      {
        case CircularFormation _:
          formationPositionArray = DefaultFormationArrangementModel.BannerBearerCircularFormationPositions;
          goto label_7;
        case SkeinFormation _:
          formationPositionArray = DefaultFormationArrangementModel.BannerBearerSkeinFormationPositions;
          goto label_7;
        case SquareFormation _:
          formationPositionArray = DefaultFormationArrangementModel.BannerBearerSquareFormationPositions;
          goto label_7;
        case TransposedLineFormation _:
        case WedgeFormation _:
label_7:
          int num = 0;
          if (formationPositionArray != null)
          {
            foreach (DefaultFormationArrangementModel.RelativeFormationPosition formationPosition in formationPositionArray)
            {
              if (num < maxCount)
              {
                FormationArrangementModel.ArrangementPosition foundPosition = formationPosition.GetArrangementPosition(fileCount, rankCount);
                if (DefaultFormationArrangementModel.SearchOccupiedInLineFormation(arrangement, foundPosition.FileIndex, foundPosition.RankIndex, fileCount, formationPosition.FromLeftFile, out foundPosition))
                {
                  bannerBearerPositions.Add(foundPosition);
                  ++num;
                }
              }
              else
                break;
            }
          }
          return bannerBearerPositions;
        default:
          formationPositionArray = DefaultFormationArrangementModel.BannerBearerLineFormationPositions;
          goto label_7;
      }
    }

    private static bool SearchOccupiedInLineFormation(
      LineFormation lineFormation,
      int fileIndex,
      int rankIndex,
      int fileCount,
      bool searchLeftToRight,
      out FormationArrangementModel.ArrangementPosition foundPosition)
    {
      if (lineFormation.GetUnit(fileIndex, rankIndex) != null)
      {
        foundPosition = new FormationArrangementModel.ArrangementPosition(fileIndex, rankIndex);
        return true;
      }
      int fileIndex1 = MathF.Min(fileIndex + 1, fileCount - 1);
      int fileIndex2 = MathF.Max(fileIndex - 1, 0);
      foundPosition = FormationArrangementModel.ArrangementPosition.Invalid;
      if (searchLeftToRight)
      {
        if (DefaultFormationArrangementModel.SearchOccupiedFileLeftToRight(lineFormation, fileIndex1, rankIndex, fileCount, ref foundPosition) || DefaultFormationArrangementModel.SearchOccupiedFileRightToLeft(lineFormation, fileIndex2, rankIndex, ref foundPosition))
          return true;
      }
      else if (DefaultFormationArrangementModel.SearchOccupiedFileRightToLeft(lineFormation, fileIndex2, rankIndex, ref foundPosition) || DefaultFormationArrangementModel.SearchOccupiedFileLeftToRight(lineFormation, fileIndex1, rankIndex, fileCount, ref foundPosition))
        return true;
      return false;
    }

    private static bool SearchOccupiedFileRightToLeft(
      LineFormation lineFormation,
      int fileIndex,
      int rankIndex,
      ref FormationArrangementModel.ArrangementPosition foundPosition)
    {
      for (int fileIndex1 = fileIndex; fileIndex1 >= 0; --fileIndex1)
      {
        if (lineFormation.GetUnit(fileIndex1, rankIndex) != null)
        {
          foundPosition = new FormationArrangementModel.ArrangementPosition(fileIndex1, rankIndex);
          return true;
        }
      }
      return false;
    }

    private static bool SearchOccupiedFileLeftToRight(
      LineFormation lineFormation,
      int fileIndex,
      int rankIndex,
      int fileCount,
      ref FormationArrangementModel.ArrangementPosition foundPosition)
    {
      for (int fileIndex1 = fileIndex; fileIndex1 < fileCount; ++fileIndex1)
      {
        if (lineFormation.GetUnit(fileIndex1, rankIndex) != null)
        {
          foundPosition = new FormationArrangementModel.ArrangementPosition(fileIndex1, rankIndex);
          return true;
        }
      }
      return false;
    }

    private struct RelativeFormationPosition
    {
      public readonly bool FromLeftFile;
      public readonly int FileOffset;
      public readonly float FileFractionalOffset;
      public readonly bool FromFrontRank;
      public readonly int RankOffset;
      public readonly float RankFractionalOffset;

      public RelativeFormationPosition(
        bool fromLeftFile,
        int fileOffset,
        bool fromFrontRank,
        int rankOffset,
        float fileFractionalOffset = 0.0f,
        float rankFractionalOffset = 0.0f)
      {
        this.FromLeftFile = fromLeftFile;
        this.FileOffset = fileOffset;
        this.FileFractionalOffset = MathF.Clamp(fileFractionalOffset, 0.0f, 1f);
        this.FromFrontRank = fromFrontRank;
        this.RankOffset = rankOffset;
        this.RankFractionalOffset = MathF.Clamp(rankFractionalOffset, 0.0f, 1f);
      }

      public FormationArrangementModel.ArrangementPosition GetArrangementPosition(
        int fileCount,
        int rankCount)
      {
        if ((fileCount <= 0 ? 0 : (rankCount > 0 ? 1 : 0)) == 0)
          return FormationArrangementModel.ArrangementPosition.Invalid;
        int num1;
        int num2;
        if (this.FromLeftFile)
        {
          num1 = 1;
          num2 = 0;
        }
        else
        {
          num1 = -1;
          num2 = fileCount - 1;
        }
        int num3 = MathF.Round((float) this.FileOffset + this.FileFractionalOffset * (float) (fileCount - 1));
        int fileIndex = MBMath.ClampIndex(num2 + num1 * num3, 0, fileCount);
        int num4;
        int num5;
        if (this.FromFrontRank)
        {
          num4 = 1;
          num5 = 0;
        }
        else
        {
          num4 = -1;
          num5 = rankCount - 1;
        }
        int num6 = MathF.Round((float) this.RankOffset + this.RankFractionalOffset * (float) (rankCount - 1));
        int rankIndex = MBMath.ClampIndex(num5 + num4 * num6, 0, rankCount);
        return new FormationArrangementModel.ArrangementPosition(fileIndex, rankIndex);
      }
    }
  }
}
