// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FormationDeploymentOrder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct FormationDeploymentOrder
  {
    private static FormationDeploymentOrder.DeploymentOrderComparer _comparer;

    public int Key { get; private set; }

    public int Offset { get; private set; }

    private FormationDeploymentOrder(FormationClass formationClass, int offset = 0)
    {
      int formationClassPriority = FormationDeploymentOrder.GetFormationClassPriority(formationClass);
      this.Offset = MathF.Max(0, offset);
      this.Key = formationClassPriority + this.Offset * 11;
    }

    public static FormationDeploymentOrder GetDeploymentOrder(FormationClass fClass, int offset = 0)
    {
      return new FormationDeploymentOrder(fClass, offset);
    }

    public static FormationDeploymentOrder.DeploymentOrderComparer GetComparer()
    {
      return FormationDeploymentOrder._comparer ?? (FormationDeploymentOrder._comparer = new FormationDeploymentOrder.DeploymentOrderComparer());
    }

    private static int GetFormationClassPriority(FormationClass fClass)
    {
      switch (fClass)
      {
        case FormationClass.Infantry:
          return 2;
        case FormationClass.Ranged:
          return 5;
        case FormationClass.Cavalry:
          return 4;
        case FormationClass.HorseArcher:
          return 6;
        case FormationClass.NumberOfDefaultFormations:
          return 0;
        case FormationClass.HeavyInfantry:
          return 1;
        case FormationClass.LightCavalry:
          return 7;
        case FormationClass.HeavyCavalry:
          return 3;
        case FormationClass.NumberOfRegularFormations:
          return 9;
        case FormationClass.Bodyguard:
          return 8;
        default:
          return 10;
      }
    }

    public class DeploymentOrderComparer : IComparer<FormationDeploymentOrder>
    {
      public int Compare(FormationDeploymentOrder a, FormationDeploymentOrder b) => a.Key - b.Key;
    }
  }
}
