#include "TaleWorlds.Native.Split.h"

// 99_part_13_part086_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808e4b5b(void)
void FUN_1808e4b5b(void)

{
  return;
}



undefined8 FUN_1808e4b70(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  
  if ((*(int *)(param_1 + 0x40) != 0) || (*(int *)(param_1 + 0x50) != 0)) {
    return 0x1c;
  }
  plVar4 = (longlong *)*param_2;
  if (plVar4 == param_2) {
    if ((longlong *)param_2[1] == param_2) {
      return 0;
    }
    if (plVar4 == param_2) {
      iVar3 = 0;
      goto LAB_1808e4bda;
    }
  }
  iVar3 = 0;
  do {
    plVar4 = (longlong *)*plVar4;
    iVar3 = iVar3 + 1;
  } while (plVar4 != param_2);
LAB_1808e4bda:
  plVar4 = (longlong *)0x0;
  *(int *)(param_1 + 0x88) = iVar3;
  uVar5 = FUN_1808e5270(param_1 + 0x38,iVar3);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar5 = FUN_1808e5210(param_1 + 0x48,iVar3);
  if ((int)uVar5 == 0) {
    plVar6 = (longlong *)(*param_2 + -8);
    if (*param_2 == 0) {
      plVar6 = plVar4;
    }
    plVar12 = plVar4;
    if (plVar6 != (longlong *)0x0) {
      plVar12 = plVar6 + 1;
    }
    if (plVar12 != param_2) {
      do {
        plVar6 = plVar12 + 2;
        if (plVar12 == (longlong *)0x0) {
          plVar6 = (longlong *)&DAT_00000018;
        }
        iVar9 = *(int *)(param_1 + 0x40) + 1;
        uVar5 = *(undefined8 *)(*plVar6 + 0x10);
        uVar1 = *(undefined8 *)(*plVar6 + 0x18);
        uVar10 = (int)*(uint *)(param_1 + 0x44) >> 0x1f;
        iVar3 = (*(uint *)(param_1 + 0x44) ^ uVar10) - uVar10;
        if (iVar3 < iVar9) {
          iVar11 = (int)((float)iVar3 * 1.5);
          iVar3 = iVar9;
          if (iVar9 <= iVar11) {
            iVar3 = iVar11;
          }
          if (iVar3 < 4) {
            iVar11 = 4;
          }
          else if (iVar11 < iVar9) {
            iVar11 = iVar9;
          }
          uVar7 = FUN_180748010(param_1 + 0x38,iVar11);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
        }
        puVar8 = (undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x40) * 0x10 + *(longlong *)(param_1 + 0x38));
        *puVar8 = uVar5;
        puVar8[1] = uVar1;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        plVar6 = plVar12 + 4;
        if (plVar12 == (longlong *)0x0) {
          plVar6 = (longlong *)0x28;
        }
        iVar9 = *(int *)(param_1 + 0x50) + 1;
        lVar2 = *plVar6;
        uVar10 = (int)*(uint *)(param_1 + 0x54) >> 0x1f;
        iVar3 = (*(uint *)(param_1 + 0x54) ^ uVar10) - uVar10;
        if (iVar3 < iVar9) {
          iVar11 = (int)((float)iVar3 * 1.5);
          iVar3 = iVar9;
          if (iVar9 <= iVar11) {
            iVar3 = iVar11;
          }
          if (iVar3 < 0x10) {
            iVar11 = 0x10;
          }
          else if (iVar11 < iVar9) {
            iVar11 = iVar9;
          }
          uVar5 = FUN_180747e10(param_1 + 0x48,iVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        *(int *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 4) =
             (int)lVar2;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        plVar6 = (longlong *)(*plVar12 + -8);
        if (*plVar12 == 0) {
          plVar6 = plVar4;
        }
        plVar12 = plVar4;
        if (plVar6 != (longlong *)0x0) {
          plVar12 = plVar6 + 1;
        }
      } while (plVar12 != param_2);
    }
    return 0;
  }
  return uVar5;
}



undefined8 FUN_1808e4b93(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong in_RAX;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 unaff_RBX;
  longlong *plVar12;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBX;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x18) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R14;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R15;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  plVar4 = (longlong *)*param_2;
  if (plVar4 == param_2) {
    if ((longlong *)param_2[1] == param_2) {
      return 0;
    }
    if (plVar4 == param_2) {
      iVar3 = 0;
      goto LAB_1808e4bda;
    }
  }
  iVar3 = 0;
  do {
    plVar4 = (longlong *)*plVar4;
    iVar3 = iVar3 + 1;
  } while (plVar4 != unaff_RDI);
LAB_1808e4bda:
  plVar4 = (longlong *)0x0;
  *(int *)(param_1 + 0x88) = iVar3;
  uVar5 = FUN_1808e5270(param_1 + 0x38,iVar3);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar5 = FUN_1808e5210(unaff_RSI + 0x48,iVar3);
  if ((int)uVar5 == 0) {
    plVar6 = (longlong *)(*unaff_RDI + -8);
    if (*unaff_RDI == 0) {
      plVar6 = plVar4;
    }
    plVar12 = plVar4;
    if (plVar6 != (longlong *)0x0) {
      plVar12 = plVar6 + 1;
    }
    if (plVar12 != unaff_RDI) {
      do {
        plVar6 = plVar12 + 2;
        if (plVar12 == (longlong *)0x0) {
          plVar6 = (longlong *)&DAT_00000018;
        }
        iVar9 = *(int *)(unaff_RSI + 0x40) + 1;
        uVar5 = *(undefined8 *)(*plVar6 + 0x10);
        uVar1 = *(undefined8 *)(*plVar6 + 0x18);
        uVar10 = (int)*(uint *)(unaff_RSI + 0x44) >> 0x1f;
        iVar3 = (*(uint *)(unaff_RSI + 0x44) ^ uVar10) - uVar10;
        if (iVar3 < iVar9) {
          iVar11 = (int)((float)iVar3 * 1.5);
          iVar3 = iVar9;
          if (iVar9 <= iVar11) {
            iVar3 = iVar11;
          }
          if (iVar3 < 4) {
            iVar11 = 4;
          }
          else if (iVar11 < iVar9) {
            iVar11 = iVar9;
          }
          uVar7 = FUN_180748010(unaff_RSI + 0x38,iVar11);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
        }
        puVar8 = (undefined8 *)
                 ((longlong)*(int *)(unaff_RSI + 0x40) * 0x10 + *(longlong *)(unaff_RSI + 0x38));
        *puVar8 = uVar5;
        puVar8[1] = uVar1;
        *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 1;
        plVar6 = plVar12 + 4;
        if (plVar12 == (longlong *)0x0) {
          plVar6 = (longlong *)0x28;
        }
        iVar9 = *(int *)(unaff_RSI + 0x50) + 1;
        lVar2 = *plVar6;
        uVar10 = (int)*(uint *)(unaff_RSI + 0x54) >> 0x1f;
        iVar3 = (*(uint *)(unaff_RSI + 0x54) ^ uVar10) - uVar10;
        if (iVar3 < iVar9) {
          iVar11 = (int)((float)iVar3 * 1.5);
          iVar3 = iVar9;
          if (iVar9 <= iVar11) {
            iVar3 = iVar11;
          }
          if (iVar3 < 0x10) {
            iVar11 = 0x10;
          }
          else if (iVar11 < iVar9) {
            iVar11 = iVar9;
          }
          uVar5 = FUN_180747e10(unaff_RSI + 0x48,iVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        *(int *)(*(longlong *)(unaff_RSI + 0x48) + (longlong)*(int *)(unaff_RSI + 0x50) * 4) =
             (int)lVar2;
        *(int *)(unaff_RSI + 0x50) = *(int *)(unaff_RSI + 0x50) + 1;
        plVar6 = (longlong *)(*plVar12 + -8);
        if (*plVar12 == 0) {
          plVar6 = plVar4;
        }
        plVar12 = plVar4;
        if (plVar6 != (longlong *)0x0) {
          plVar12 = plVar6 + 1;
        }
      } while (plVar12 != unaff_RDI);
    }
    return 0;
  }
  return uVar5;
}



undefined8 FUN_1808e4d6d(void)

{
  return 0x1c;
}



undefined8 FUN_1808e4d80(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar15 = (longlong *)0x0;
  plVar13 = (longlong *)(*(longlong *)(param_2 + 8) + -0x20);
  if (*(longlong *)(param_2 + 8) == 0) {
    plVar13 = plVar15;
  }
  plVar3 = plVar15;
  if (plVar13 != (longlong *)0x0) {
    plVar3 = plVar13 + 4;
  }
  do {
    if (plVar3 == (longlong *)(param_2 + 8)) {
      return 0;
    }
    lVar14 = (longlong)*(int *)(param_1 + 0x60);
    uVar11 = (int)*(uint *)(param_1 + 100) >> 0x1f;
    plVar13 = plVar3 + -4;
    if (plVar3 == (longlong *)0x0) {
      plVar13 = plVar15;
    }
    iVar4 = (*(uint *)(param_1 + 100) ^ uVar11) - uVar11;
    iVar10 = *(int *)(param_1 + 0x60) + 1;
    if (iVar4 < iVar10) {
      iVar12 = (int)((float)iVar4 * 1.5);
      iVar4 = iVar10;
      if (iVar10 <= iVar12) {
        iVar4 = iVar12;
      }
      if (iVar4 < 2) {
        iVar12 = 2;
      }
      else if (iVar12 < iVar10) {
        iVar12 = iVar10;
      }
      uVar6 = FUN_1808676f0(param_1 + 0x58,iVar12);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x58);
    *(undefined8 *)(lVar2 + lVar14 * 0x18) = 0;
    *(undefined8 *)(lVar2 + 8 + lVar14 * 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x10 + lVar14 * 0x18) = 0;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    lVar2 = *(longlong *)(param_1 + 0x58);
    plVar7 = (longlong *)(**(code **)*plVar13)(plVar13);
    (**(code **)(*plVar7 + 0x30))(plVar7,&uStack_48);
    puVar1 = (undefined8 *)(lVar2 + lVar14 * 0x18);
    *puVar1 = uStack_48;
    puVar1[1] = uStack_40;
    *(undefined8 *)(lVar2 + 0x10 + lVar14 * 0x18) = 0;
    lVar8 = (**(code **)*plVar13)(plVar13);
    switch(*(undefined2 *)(lVar8 + 0xc)) {
    case 10:
    case 0xf:
      lVar8 = (**(code **)(*plVar13 + 0xa0))(plVar13);
      if (lVar8 != 0) {
        puVar9 = (undefined4 *)((longlong)plVar3 + 0x11c);
        if (plVar3 == (longlong *)0x0) {
          puVar9 = (undefined4 *)0x13c;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar14 * 0x18) = *puVar9;
        puVar9 = (undefined4 *)((longlong)plVar3 + 0x13c);
        if (plVar3 == (longlong *)0x0) {
          puVar9 = (undefined4 *)0x15c;
        }
        uVar5 = *puVar9;
        goto code_r0x0001808e4f61;
      }
      break;
    case 0xc:
    case 0xd:
      lVar14 = (**(code **)(*plVar13 + 0x98))(plVar13);
      if ((lVar14 != 0) && (uVar6 = FUN_1808e4d80(param_1,lVar14 + 0x118), (int)uVar6 != 0)) {
        return uVar6;
      }
      break;
    case 0xe:
      lVar8 = (**(code **)(*plVar13 + 0xa8))(plVar13);
      if (lVar8 != 0) {
        uVar5 = func_0x000180855b70(lVar8 + 200);
        *(undefined4 *)(lVar2 + 0x10 + lVar14 * 0x18) = uVar5;
        uVar5 = *(undefined4 *)(lVar8 + 0x1d4);
        goto code_r0x0001808e4f61;
      }
      break;
    case 0x1d:
      uVar5 = func_0x0001808cb6e0(plVar13);
      *(undefined4 *)(lVar2 + 0x10 + lVar14 * 0x18) = uVar5;
      uVar5 = func_0x0001808cb2b0(plVar13);
code_r0x0001808e4f61:
      *(undefined4 *)(lVar2 + 0x14 + lVar14 * 0x18) = uVar5;
    }
    plVar13 = (longlong *)(*plVar3 + -0x20);
    if (*plVar3 == 0) {
      plVar13 = plVar15;
    }
    plVar3 = plVar15;
    if (plVar13 != (longlong *)0x0) {
      plVar3 = plVar13 + 4;
    }
  } while( true );
}



undefined8 FUN_1808e4fe0(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  
  param_3[0] = 0;
  param_3[1] = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  *param_3 = iVar1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  do {
    if ((plVar10 < *(longlong **)(param_2 + 0x10)) ||
       (*(longlong **)(param_2 + 0x10) + *(int *)(param_2 + 0x18) <= plVar10)) {
      *param_3 = iVar1;
      if (iVar1 != *(int *)(param_1 + 0x80)) {
        param_3[1] = *(int *)(param_1 + 0x80) - iVar1;
      }
      return 0;
    }
    lVar2 = *plVar10;
    cVar4 = FUN_1808b2340(lVar2);
    if (cVar4 != '\0') {
      lVar11 = (longlong)*(int *)(param_1 + 0x80);
      uVar8 = (int)*(uint *)(param_1 + 0x84) >> 0x1f;
      iVar5 = (*(uint *)(param_1 + 0x84) ^ uVar8) - uVar8;
      iVar7 = *(int *)(param_1 + 0x80) + 1;
      if (iVar5 < iVar7) {
        iVar9 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar7;
        if (iVar7 <= iVar9) {
          iVar5 = iVar9;
        }
        if (iVar5 < 8) {
          iVar9 = 8;
        }
        else if (iVar9 < iVar7) {
          iVar9 = iVar7;
        }
        uVar6 = FUN_180882f00(param_1 + 0x78,iVar9);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar11 * 8) = 0;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      lVar3 = *(longlong *)(param_1 + 0x78);
      *(undefined4 *)(lVar3 + lVar11 * 8) = *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + 0x40);
      uVar12 = func_0x0001808b2330(lVar2);
      *(undefined4 *)(lVar3 + 4 + lVar11 * 8) = uVar12;
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



undefined8 FUN_1808e5120(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char cStackX_8;
  undefined7 uStackX_9;
  int aiStackX_20 [2];
  int aiStack_28 [2];
  undefined8 uStack_20;
  
  if (param_1 != 0) {
    iVar3 = 0;
    aiStackX_20[0] = 0;
    uVar2 = FUN_18073f4a0(param_1,aiStackX_20);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar4 = 0;
    if (0 < aiStackX_20[0]) {
      do {
        iVar1 = FUN_18073f240(param_1,iVar4,&uStack_20);
        if ((iVar1 == 0) && (iVar1 = FUN_18073fbb0(uStack_20,&cStackX_8), iVar1 == 0)) {
          if (cStackX_8 == '\0') {
            *param_2 = *param_2 + 1;
          }
          *param_3 = *param_3 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < aiStackX_20[0]);
    }
    aiStack_28[0] = 0;
    uVar2 = FUN_18073f570(param_1,aiStack_28);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (0 < aiStack_28[0]) {
      do {
        uVar2 = FUN_18073f370(param_1,iVar3,&cStackX_8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808e5120(CONCAT71(uStackX_9,cStackX_8),param_2,param_3);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < aiStack_28[0]);
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0001808e51d0)
// WARNING: Removing unreachable block (ram,0x0001808e51e3)
// WARNING: Removing unreachable block (ram,0x0001808e51f7)

undefined8 FUN_1808e5157(void)

{
  int iVar1;
  undefined8 uVar2;
  int unaff_EBX;
  int *unaff_RBP;
  int *unaff_RSI;
  int iVar3;
  undefined8 in_stack_00000028;
  char in_stack_00000050;
  int in_stack_00000068;
  
  iVar3 = unaff_EBX;
  if (unaff_EBX < in_stack_00000068) {
    do {
      iVar1 = FUN_18073f240();
      if ((iVar1 == 0) && (iVar1 = FUN_18073fbb0(in_stack_00000028,&stack0x00000050), iVar1 == 0)) {
        if (in_stack_00000050 == (char)unaff_EBX) {
          *unaff_RBP = *unaff_RBP + 1;
        }
        *unaff_RSI = *unaff_RSI + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_stack_00000068);
  }
  uVar2 = FUN_18073f570();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_1808e51c3(void)

{
  undefined8 uVar1;
  int unaff_EBX;
  int iStackX_20;
  undefined8 in_stack_00000050;
  
  if (unaff_EBX < iStackX_20) {
    do {
      uVar1 = FUN_18073f370();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1808e5120(in_stack_00000050);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EBX = unaff_EBX + 1;
    } while (unaff_EBX < iStackX_20);
  }
  return 0;
}



undefined8 FUN_1808e5210(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  uVar3 = (int)*(uint *)(param_1 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)(param_1 + 0xc) ^ uVar3) - uVar3;
  if (iVar1 < param_2) {
    fVar5 = (float)iVar1 * 1.5;
    iVar4 = (int)fVar5;
    iVar1 = iVar4;
    if (iVar4 < param_2) {
      iVar1 = param_2;
    }
    if (iVar1 < 0x10) {
      iVar4 = 0x10;
    }
    else if (iVar4 < param_2) {
      iVar4 = param_2;
    }
    uVar2 = FUN_180747e10(fVar5,iVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 FUN_1808e5270(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  uVar3 = (int)*(uint *)(param_1 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)(param_1 + 0xc) ^ uVar3) - uVar3;
  if (iVar1 < param_2) {
    fVar5 = (float)iVar1 * 1.5;
    iVar4 = (int)fVar5;
    iVar1 = iVar4;
    if (iVar4 < param_2) {
      iVar1 = param_2;
    }
    if (iVar1 < 4) {
      iVar4 = 4;
    }
    else if (iVar4 < param_2) {
      iVar4 = param_2;
    }
    uVar2 = FUN_180748010(fVar5,iVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 thunk_FUN_1808e52f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  
  if (*(int *)(param_1 + 0x14c) < 1) {
    return 0;
  }
  lVar19 = (longlong)*(short *)(param_1 + 0x144);
  uVar16 = 0;
  uVar15 = uVar16;
  if (3 < lVar19) {
    lVar12 = (lVar19 - 4U >> 2) + 1;
    uVar15 = lVar12 * 4;
    lVar18 = param_1 + 200;
    do {
      auVar20 = sqrtps(*(undefined1 (*) [16])(lVar18 + -4),*(undefined1 (*) [16])(lVar18 + -4));
      *(undefined1 (*) [16])(lVar18 + -4) = auVar20;
      lVar12 = lVar12 + -1;
      lVar18 = lVar18 + 0x10;
    } while (lVar12 != 0);
  }
  if ((longlong)uVar15 < lVar19) {
    pfVar9 = (float *)(param_1 + 0xc4 + uVar15 * 4);
    do {
      uVar15 = uVar15 + 1;
      *pfVar9 = SQRT(*pfVar9);
      pfVar9 = pfVar9 + 1;
    } while ((longlong)uVar15 < lVar19);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar13 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f;
  iVar7 = (*(uint *)(param_1 + 0x1c) ^ uVar13) - uVar13;
  uVar13 = iVar3 + 1;
  if (iVar7 < (int)uVar13) {
    uVar14 = (uint)((float)iVar7 * 1.5);
    uVar8 = uVar13;
    if ((int)uVar13 <= (int)uVar14) {
      uVar8 = uVar14;
    }
    if ((-1 < (int)uVar8) && (uVar16 = (ulonglong)uVar14, (int)uVar14 < (int)uVar13)) {
      uVar16 = (ulonglong)uVar13;
    }
    uVar10 = FUN_180883010(param_1 + 0x10,uVar16);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
  }
  lVar18 = (longlong)iVar3 * 0x278;
  FUN_1808e3ab0(*(longlong *)(param_1 + 0x10) + lVar18,1);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  lVar12 = 2;
  lVar19 = *(longlong *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar18 + lVar19) = *(undefined8 *)(param_1 + 0x30);
  ((undefined8 *)(lVar18 + lVar19))[1] = uVar10;
  *(undefined8 *)(lVar18 + 0x24 + lVar19) = 0;
  *(undefined4 *)(lVar18 + 0x2c + lVar19) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(lVar18 + 0x30 + lVar19) = 0;
  *(undefined4 *)(lVar18 + 0x34 + lVar19) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(lVar18 + 0x38 + lVar19) = 0;
  puVar11 = (undefined8 *)(param_1 + 0x40);
  puVar17 = (undefined8 *)(lVar19 + 0x150 + lVar18);
  do {
    puVar1 = puVar17 + 0x10;
    uVar10 = puVar11[1];
    puVar2 = puVar11 + 0x10;
    *puVar17 = *puVar11;
    puVar17[1] = uVar10;
    uVar10 = puVar11[3];
    puVar17[2] = puVar11[2];
    puVar17[3] = uVar10;
    uVar10 = puVar11[5];
    puVar17[4] = puVar11[4];
    puVar17[5] = uVar10;
    uVar10 = puVar11[7];
    puVar17[6] = puVar11[6];
    puVar17[7] = uVar10;
    uVar10 = puVar11[9];
    puVar17[8] = puVar11[8];
    puVar17[9] = uVar10;
    uVar10 = puVar11[0xb];
    puVar17[10] = puVar11[10];
    puVar17[0xb] = uVar10;
    uVar10 = puVar11[0xd];
    puVar17[0xc] = puVar11[0xc];
    puVar17[0xd] = uVar10;
    uVar4 = *(undefined4 *)((longlong)puVar11 + 0x74);
    uVar5 = *(undefined4 *)(puVar11 + 0xf);
    uVar6 = *(undefined4 *)((longlong)puVar11 + 0x7c);
    *(undefined4 *)(puVar17 + 0xe) = *(undefined4 *)(puVar11 + 0xe);
    *(undefined4 *)((longlong)puVar17 + 0x74) = uVar4;
    *(undefined4 *)(puVar17 + 0xf) = uVar5;
    *(undefined4 *)((longlong)puVar17 + 0x7c) = uVar6;
    lVar12 = lVar12 + -1;
    puVar11 = puVar2;
    puVar17 = puVar1;
  } while (lVar12 != 0);
  *puVar1 = *puVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x40,0,0x108);
}



undefined8 FUN_1808e52f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  
  if (*(int *)(param_1 + 0x14c) < 1) {
    return 0;
  }
  lVar19 = (longlong)*(short *)(param_1 + 0x144);
  uVar16 = 0;
  uVar15 = uVar16;
  if (3 < lVar19) {
    lVar12 = (lVar19 - 4U >> 2) + 1;
    uVar15 = lVar12 * 4;
    lVar18 = param_1 + 200;
    do {
      auVar20 = sqrtps(*(undefined1 (*) [16])(lVar18 + -4),*(undefined1 (*) [16])(lVar18 + -4));
      *(undefined1 (*) [16])(lVar18 + -4) = auVar20;
      lVar12 = lVar12 + -1;
      lVar18 = lVar18 + 0x10;
    } while (lVar12 != 0);
  }
  if ((longlong)uVar15 < lVar19) {
    pfVar9 = (float *)(param_1 + 0xc4 + uVar15 * 4);
    do {
      uVar15 = uVar15 + 1;
      *pfVar9 = SQRT(*pfVar9);
      pfVar9 = pfVar9 + 1;
    } while ((longlong)uVar15 < lVar19);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  uVar13 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f;
  iVar7 = (*(uint *)(param_1 + 0x1c) ^ uVar13) - uVar13;
  uVar13 = iVar3 + 1;
  if (iVar7 < (int)uVar13) {
    uVar14 = (uint)((float)iVar7 * 1.5);
    uVar8 = uVar13;
    if ((int)uVar13 <= (int)uVar14) {
      uVar8 = uVar14;
    }
    if ((-1 < (int)uVar8) && (uVar16 = (ulonglong)uVar14, (int)uVar14 < (int)uVar13)) {
      uVar16 = (ulonglong)uVar13;
    }
    uVar10 = FUN_180883010(param_1 + 0x10,uVar16);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
  }
  lVar18 = (longlong)iVar3 * 0x278;
  FUN_1808e3ab0(*(longlong *)(param_1 + 0x10) + lVar18,1);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  lVar12 = 2;
  lVar19 = *(longlong *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar18 + lVar19) = *(undefined8 *)(param_1 + 0x30);
  ((undefined8 *)(lVar18 + lVar19))[1] = uVar10;
  *(undefined8 *)(lVar18 + 0x24 + lVar19) = 0;
  *(undefined4 *)(lVar18 + 0x2c + lVar19) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(lVar18 + 0x30 + lVar19) = 0;
  *(undefined4 *)(lVar18 + 0x34 + lVar19) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(lVar18 + 0x38 + lVar19) = 0;
  puVar11 = (undefined8 *)(param_1 + 0x40);
  puVar17 = (undefined8 *)(lVar19 + 0x150 + lVar18);
  do {
    puVar1 = puVar17 + 0x10;
    uVar10 = puVar11[1];
    puVar2 = puVar11 + 0x10;
    *puVar17 = *puVar11;
    puVar17[1] = uVar10;
    uVar10 = puVar11[3];
    puVar17[2] = puVar11[2];
    puVar17[3] = uVar10;
    uVar10 = puVar11[5];
    puVar17[4] = puVar11[4];
    puVar17[5] = uVar10;
    uVar10 = puVar11[7];
    puVar17[6] = puVar11[6];
    puVar17[7] = uVar10;
    uVar10 = puVar11[9];
    puVar17[8] = puVar11[8];
    puVar17[9] = uVar10;
    uVar10 = puVar11[0xb];
    puVar17[10] = puVar11[10];
    puVar17[0xb] = uVar10;
    uVar10 = puVar11[0xd];
    puVar17[0xc] = puVar11[0xc];
    puVar17[0xd] = uVar10;
    uVar4 = *(undefined4 *)((longlong)puVar11 + 0x74);
    uVar5 = *(undefined4 *)(puVar11 + 0xf);
    uVar6 = *(undefined4 *)((longlong)puVar11 + 0x7c);
    *(undefined4 *)(puVar17 + 0xe) = *(undefined4 *)(puVar11 + 0xe);
    *(undefined4 *)((longlong)puVar17 + 0x74) = uVar4;
    *(undefined4 *)(puVar17 + 0xf) = uVar5;
    *(undefined4 *)((longlong)puVar17 + 0x7c) = uVar6;
    lVar12 = lVar12 + -1;
    puVar11 = puVar2;
    puVar17 = puVar1;
  } while (lVar12 != 0);
  *puVar1 = *puVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x40,0,0x108);
}



undefined8 FUN_1808e54e0(longlong param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int aiStackX_8 [2];
  int aiStackX_20 [2];
  int aiStack_38 [2];
  undefined8 uStack_30;
  undefined8 auStack_28 [2];
  
  if (param_1 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
      return 0;
    }
  }
  else {
    uVar1 = FUN_18073c380(param_1,0xffffffff,&uStack_30);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    aiStackX_8[0] = 0;
    FUN_1807402d0(uStack_30,0,aiStackX_8);
    if (param_2 != (int *)0x0) {
      *param_2 = aiStackX_8[0];
    }
    if (param_3 != (int *)0x0) {
      aiStackX_20[0] = 0;
      aiStack_38[0] = 0;
      uVar1 = FUN_18073c380(param_1,0xfffffffd,auStack_28);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      FUN_1807402d0(auStack_28[0],aiStackX_20,aiStack_38);
      aiStackX_8[0] = (aiStackX_20[0] - aiStack_38[0]) + aiStackX_8[0];
      iVar2 = 0;
      if (0 < aiStackX_8[0]) {
        iVar2 = aiStackX_8[0];
      }
      *param_3 = iVar2;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808e55b0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 0x12) = param_3;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[0x13] = 0;
  lVar3 = func_0x0001808e3470(*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x4d0),
                              *(undefined4 *)(*(longlong *)(param_2 + 0x90) + 0x774));
  param_1[2] = lVar3;
  *param_1 = param_2;
  uVar4 = *(uint *)((longlong)param_1 + 0x34);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[6]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (param_1[5] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[5],&UNK_180957f70,0x100,1);
    }
    param_1[5] = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  iVar1 = (int)param_1[6];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar1 * 0x6c + param_1[5],0,(ulonglong)(uint)-iVar1 * 0x6c);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  uVar4 = *(uint *)((longlong)param_1 + 0x24);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[4]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (param_1[3] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[3],&UNK_180957f70,0x100,1);
    }
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  iVar1 = (int)param_1[4];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
      memset(param_1[3] + (longlong)iVar1 * 0x28,0,(ulonglong)(uint)-iVar1 * 0x28);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  uVar4 = *(uint *)((longlong)param_1 + 0x44);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[8]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (param_1[7] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1[7],&UNK_180957f70,0x100,1);
    }
    param_1[7] = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  iVar1 = (int)param_1[8];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset((longlong)iVar1 * 0x10 + param_1[7],0,(longlong)-iVar1 << 4);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  uVar4 = (int)*(uint *)((longlong)param_1 + 0x54) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_1 + 0x54) ^ uVar4) - uVar4) < 0) &&
     (uVar2 = FUN_180747e10(param_1 + 9,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  iVar1 = (int)param_1[10];
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 10) = 0;
    return 0;
  }
                    // WARNING: Subroutine does not return
  memset(param_1[9] + (longlong)iVar1 * 4,0,(longlong)-iVar1 << 2);
}



// WARNING: Removing unreachable block (ram,0x0001808af533)
// WARNING: Removing unreachable block (ram,0x0001808af547)
// WARNING: Removing unreachable block (ram,0x0001808af581)
// WARNING: Removing unreachable block (ram,0x0001808af589)
// WARNING: Removing unreachable block (ram,0x0001808af69c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808e5790(undefined4 *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *(undefined1 *)(param_1 + 8) = param_3;
  *param_1 = 2;
  uVar2 = func_0x0001808e3470(*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x4d0));
  plVar1 = (longlong *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = uVar2;
  *(longlong *)(param_1 + 10) = param_2;
  uVar3 = (int)param_1[7] >> 0x1f;
  if ((int)((param_1[7] ^ uVar3) - uVar3) < 0) {
    if (0 < (int)param_1[6]) {
      return 0x1c;
    }
    if ((0 < (int)param_1[7]) && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*plVar1,&UNK_180957f70,0x100,1);
    }
    *plVar1 = 0;
    param_1[7] = 0;
  }
  uVar3 = param_1[6];
  if ((int)uVar3 < 0) {
    if ((int)uVar3 < 0) {
      lVar4 = (longlong)(int)uVar3 * 0x278 + 0x264 + *plVar1;
      *(undefined8 *)(lVar4 + -0x264) = 0;
      *(undefined8 *)(lVar4 + -0x25c) = 0;
      *(undefined8 *)(lVar4 + -0x254) = 0;
      *(undefined8 *)(lVar4 + -0x24c) = 0;
      *(undefined8 *)(lVar4 + -0x244) = 0;
      *(undefined8 *)(lVar4 + -0x23c) = 0;
      *(undefined8 *)(lVar4 + -0x234) = 0;
      *(undefined8 *)(lVar4 + -0x22c) = 0;
      *(undefined8 *)(lVar4 + -0x224) = 0;
                    // WARNING: Subroutine does not return
      memset(lVar4 + -0x21c,0,0x108);
    }
  }
  else if ((0 < (int)uVar3) && (0 < (int)uVar3)) {
    lVar4 = *plVar1 + 600;
    uVar5 = (ulonglong)uVar3;
    do {
      FUN_1808723c0(lVar4 + 0x10);
      FUN_180872300(lVar4);
      lVar4 = lVar4 + 0x278;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  param_1[6] = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 thunk_FUN_1808e3970(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  int *piStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  uStack_60 = 0;
  puStack_68 = &UNK_180981b60;
  puStack_58 = &UNK_180981b58;
  ppuStack_50 = &puStack_68;
  uVar2 = FUN_18089a690(&puStack_58,param_1);
  if ((int)uVar2 == 0) {
    puStack_58 = &UNK_180981b58;
    iVar1 = (int)uStack_60;
    iVar4 = iVar1 + 0xc;
    piVar3 = (int *)FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar4,&UNK_180988f00,0x28,
                                  0);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0x26;
    }
    else {
      *piVar3 = iVar4;
      *(undefined2 *)(piVar3 + 2) = 0x608;
      *(undefined1 *)((longlong)piVar3 + 10) = 3;
      puStack_38 = &UNK_180984ff8;
      piStack_30 = piVar3 + 3;
      lStack_28 = (longlong)iVar1;
      ppuStack_40 = &puStack_38;
      lStack_20 = 0;
      puStack_48 = &UNK_180981b58;
      uVar2 = FUN_18089a690(&puStack_48,param_1);
      if ((int)uVar2 == 0) {
        if (lStack_20 == lStack_28) {
          *param_2 = (longlong)piVar3;
          uVar2 = 0;
        }
        else {
          uVar2 = 0x1c;
        }
      }
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






