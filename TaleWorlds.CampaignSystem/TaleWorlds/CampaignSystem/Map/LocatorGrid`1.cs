// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Map.LocatorGrid`1
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Map
{
  internal class LocatorGrid<T> where T : ILocatable<T>
  {
    private const float DefaultGridNodeSize = 5f;
    private const int DefaultGridWidth = 32;
    private const int DefaultGridHeight = 32;
    private readonly T[] _nodes;
    private readonly float _gridNodeSize;
    private readonly int _width;
    private readonly int _height;

    internal LocatorGrid(float gridNodeSize = 5f, int gridWidth = 32, int gridHeight = 32)
    {
      this._width = gridWidth;
      this._height = gridHeight;
      this._gridNodeSize = gridNodeSize;
      this._nodes = new T[this._width * this._height];
    }

    private int MapCoordinates(int x, int y)
    {
      x %= this._width;
      if (x < 0)
        x += this._width;
      y %= this._height;
      if (y < 0)
        y += this._height;
      return y * this._width + x;
    }

    internal bool CheckWhetherPositionsAreInSameNode(Vec2 pos1, ILocatable<T> locatable)
    {
      return this.Pos2NodeIndex(pos1) == locatable.LocatorNodeIndex;
    }

    internal bool UpdateLocator(T locatable)
    {
      ILocatable<T> locatable1 = (ILocatable<T>) locatable;
      int nodeIndex = this.Pos2NodeIndex(locatable1.GetPosition2D);
      if (nodeIndex == locatable1.LocatorNodeIndex)
        return false;
      if (locatable1.LocatorNodeIndex >= 0)
        this.RemoveFromList(locatable1);
      this.AddToList(nodeIndex, locatable);
      locatable1.LocatorNodeIndex = nodeIndex;
      return true;
    }

    private void RemoveFromList(ILocatable<T> locatable)
    {
      if ((object) this._nodes[locatable.LocatorNodeIndex] == locatable)
      {
        this._nodes[locatable.LocatorNodeIndex] = locatable.NextLocatable;
        locatable.NextLocatable = default (T);
      }
      else
      {
        ILocatable<T> locatable1;
        if ((__Boxed<T>) (locatable1 = (ILocatable<T>) this._nodes[locatable.LocatorNodeIndex]) == null)
          return;
        for (; (object) locatable1.NextLocatable != null; locatable1 = (ILocatable<T>) locatable1.NextLocatable)
        {
          if ((object) locatable1.NextLocatable == locatable)
          {
            locatable1.NextLocatable = locatable.NextLocatable;
            locatable.NextLocatable = default (T);
            return;
          }
        }
        Debug.FailedAssert("cannot remove party from MapLocator: " + locatable.ToString(), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Map\\LocatorGrid.cs", nameof (RemoveFromList), 134);
      }
    }

    private void AddToList(int nodeIndex, T locator)
    {
      T node = this._nodes[nodeIndex];
      this._nodes[nodeIndex] = locator;
      locator.NextLocatable = node;
    }

    private T FindLocatableOnNextNode(ref LocatableSearchData<T> data)
    {
      T locatableOnNextNode = default (T);
      do
      {
        ++data.CurrentY;
        if (data.CurrentY > data.MaxYInclusive)
        {
          data.CurrentY = data.MinY;
          ++data.CurrentX;
        }
        if (data.CurrentX <= data.MaxXInclusive)
          locatableOnNextNode = this._nodes[this.MapCoordinates(data.CurrentX, data.CurrentY)];
      }
      while ((object) locatableOnNextNode == null && data.CurrentX <= data.MaxXInclusive);
      return locatableOnNextNode;
    }

    internal T FindNextLocatable(ref LocatableSearchData<T> data)
    {
      if (data.CurrentLocatable != null)
      {
        data.CurrentLocatable = (ILocatable<T>) data.CurrentLocatable.NextLocatable;
        while (data.CurrentLocatable != null && (double) data.CurrentLocatable.GetPosition2D.DistanceSquared(data.Position) >= (double) data.RadiusSquared)
          data.CurrentLocatable = (ILocatable<T>) data.CurrentLocatable.NextLocatable;
      }
label_7:
      while (data.CurrentLocatable == null && data.CurrentX <= data.MaxXInclusive)
      {
        data.CurrentLocatable = (ILocatable<T>) this.FindLocatableOnNextNode(ref data);
        while (true)
        {
          if (data.CurrentLocatable != null && (double) data.CurrentLocatable.GetPosition2D.DistanceSquared(data.Position) >= (double) data.RadiusSquared)
            data.CurrentLocatable = (ILocatable<T>) data.CurrentLocatable.NextLocatable;
          else
            goto label_7;
        }
      }
      return (T) data.CurrentLocatable;
    }

    internal LocatableSearchData<T> StartFindingLocatablesAroundPosition(
      Vec2 position,
      float radius)
    {
      int minX;
      int minY;
      int maxX;
      int maxY;
      this.GetBoundaries(position, radius, out minX, out minY, out maxX, out maxY);
      return new LocatableSearchData<T>(position, radius, minX, minY, maxX, maxY);
    }

    internal void RemoveLocatable(T locatable)
    {
      ILocatable<T> locatable1 = (ILocatable<T>) locatable;
      if (locatable1.LocatorNodeIndex < 0)
        return;
      this.RemoveFromList(locatable1);
    }

    private void GetBoundaries(
      Vec2 position,
      float radius,
      out int minX,
      out int minY,
      out int maxX,
      out int maxY)
    {
      Vec2 vec2 = new Vec2(MathF.Min(radius, (float) ((double) (this._width - 1) * (double) this._gridNodeSize * 0.5)), MathF.Min(radius, (float) ((double) (this._height - 1) * (double) this._gridNodeSize * 0.5)));
      this.GetGridIndices(position - vec2, out minX, out minY);
      this.GetGridIndices(position + vec2, out maxX, out maxY);
    }

    private void GetGridIndices(Vec2 position, out int x, out int y)
    {
      x = MathF.Floor(position.x / this._gridNodeSize);
      y = MathF.Floor(position.y / this._gridNodeSize);
    }

    private int Pos2NodeIndex(Vec2 position)
    {
      int x;
      int y;
      this.GetGridIndices(position, out x, out y);
      return this.MapCoordinates(x, y);
    }
  }
}
