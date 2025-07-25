// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.IDropContainer
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public interface IDropContainer
  {
    Predicate<Widget> AcceptDropPredicate { get; set; }

    Vector2 GetDropGizmoPosition(Vector2 draggedWidgetPosition);
  }
}
