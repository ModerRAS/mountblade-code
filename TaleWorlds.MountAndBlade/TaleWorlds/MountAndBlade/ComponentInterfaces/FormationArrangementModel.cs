// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ComponentInterfaces.FormationArrangementModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.ComponentInterfaces
{
  public abstract class FormationArrangementModel : GameModel
  {
    public abstract List<FormationArrangementModel.ArrangementPosition> GetBannerBearerPositions(
      Formation formation,
      int maxCount);

    public struct ArrangementPosition
    {
      public readonly int FileIndex;
      public readonly int RankIndex;

      public bool IsValid => this.FileIndex > -1 && this.RankIndex > -1;

      public static FormationArrangementModel.ArrangementPosition Invalid
      {
        get => new FormationArrangementModel.ArrangementPosition();
      }

      public ArrangementPosition(int fileIndex = -1, int rankIndex = -1)
      {
        this.FileIndex = fileIndex;
        this.RankIndex = rankIndex;
      }
    }
  }
}
