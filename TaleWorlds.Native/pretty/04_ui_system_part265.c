#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part265.c - 1 个函数

// 函数: void FUN_180819940(undefined8 param_1,longlong param_2)
void FUN_180819940(undefined8 param_1,longlong param_2)

{
  FUN_180830440(param_1,param_2 + 0x210);
  FUN_180830310(param_1,param_2 + 0x288);
  *(undefined4 *)(param_2 + 0x80) = 2;
  return;
}



undefined8
FUN_180819980(undefined8 param_1,longlong param_2,undefined1 *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puStackX_18;
  undefined1 auStack_78 [8];
  int iStack_70;
  undefined1 auStack_58 [48];
  undefined1 *puVar6;
  
  puVar11 = (undefined1 *)0x0;
  puStackX_18 = param_3;
LAB_1808199b3:
  if ((*(int *)(param_2 + 0x80) != 3) || (uVar5 = FUN_18081a600(param_1,param_2), -1 < (int)uVar5))
  {
    iVar3 = 0;
    if (*(int *)(param_2 + 0x80) == 4) {
      while( true ) {
        puVar6 = auStack_58;
        if (puStackX_18 != (undefined1 *)0x0) {
          puVar6 = puStackX_18;
        }
        iVar2 = func_0x00018082f9e0(param_2 + 0x98,puVar6);
        puStackX_18 = (undefined1 *)0x0;
        if (iVar2 == -1) {
          return 0xfffffffd;
        }
        if (iVar2 == -0x8b) {
          return 0xffffff75;
        }
        if (iVar2 < 1) break;
        puVar10 = *(undefined1 **)(puVar6 + 0x18);
        iVar2 = FUN_180831820(param_1,param_2 + 0x288,puVar6);
        if (iVar2 == -0x8b) {
          return 0xffffff75;
        }
        puStackX_18 = puVar11;
        if (iVar2 == 0) {
          iVar2 = FUN_180831150(param_2 + 0x210,0);
          if (iVar2 == 0) {
            FUN_180830680(param_2 + 0x210,param_2 + 0x288);
            iVar2 = FUN_180831150(param_2 + 0x210,0);
            *(float *)(param_2 + 0x90) = (float)iVar2 + *(float *)(param_2 + 0x90);
            *(float *)(param_2 + 0x8c) =
                 (float)(*(int *)(puVar6 + 8) << 3) + *(float *)(param_2 + 0x8c);
            if ((puVar10 != (undefined1 *)0xffffffffffffffff) && (*(int *)(puVar6 + 0x10) == 0)) {
              if ((*(int *)(param_2 + 8) != 0) && (iVar3 = *(int *)(param_2 + 0x88), 0 < iVar3)) {
                puVar10 = puVar10 + -*(longlong *)
                                      (*(longlong *)(param_2 + 0x60) + (longlong)(iVar3 * 2) * 8);
              }
              iVar2 = FUN_180831150(param_2 + 0x210,0);
              lVar13 = (longlong)iVar3;
              puVar6 = puVar11;
              if (-1 < (longlong)puVar10) {
                puVar6 = puVar10;
              }
              lVar12 = (longlong)puVar6 - (longlong)iVar2;
              puVar6 = puVar11;
              puVar10 = puVar11;
              if (1 < lVar13) {
                plVar7 = (longlong *)(*(longlong *)(param_2 + 0x60) + 0x18);
                lVar9 = (lVar13 - 2U >> 1) + 1;
                puVar6 = (undefined1 *)(lVar9 * 2);
                do {
                  puVar10 = puVar10 + plVar7[-2];
                  puVar11 = puVar11 + *plVar7;
                  plVar7 = plVar7 + 4;
                  lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
              }
              if ((longlong)puVar6 < lVar13) {
                lVar12 = lVar12 + *(longlong *)
                                   (*(longlong *)(param_2 + 0x60) + 8 + (longlong)puVar6 * 0x10);
              }
              *(undefined1 **)(param_2 + 0x78) = puVar11 + (longlong)puVar10 + lVar12;
            }
            return 1;
          }
          return 0xffffff7f;
        }
      }
    }
    if (*(int *)(param_2 + 0x80) < 2) {
LAB_180819b29:
      iVar3 = *(int *)(param_2 + 0x80);
      if (iVar3 != 4) goto LAB_180819b38;
      goto LAB_180819bea;
    }
    do {
      if (param_4 == 0) {
        return 0;
      }
      lVar13 = FUN_18081a120(param_1,param_2,auStack_78,0xffffffffffffffff);
      if (lVar13 < 0) goto LAB_180819d42;
      iVar3 = *(int *)(param_2 + 0x80);
      *(float *)(param_2 + 0x8c) = (float)(iStack_70 * 8) + *(float *)(param_2 + 0x8c);
      if (iVar3 != 4) goto LAB_180819b38;
      iVar3 = func_0x00018082f880(auStack_78);
      if (*(int *)(param_2 + 0x84) == iVar3) goto LAB_180819b29;
      iVar3 = func_0x00018082f7f0(auStack_78);
    } while (iVar3 == 0);
    if (param_5 == 0) {
LAB_180819d42:
      uVar5 = 0xfffffffe;
    }
    else {
      FUN_180830440(param_1,param_2 + 0x210);
      FUN_180830310(param_1,param_2 + 0x288);
      iVar3 = 2;
      *(undefined4 *)(param_2 + 0x80) = 2;
      if (*(int *)(param_2 + 8) == 0) {
        FUN_180816fb0(param_1,*(undefined8 *)(param_2 + 0x68));
        FUN_180816ee0(param_1,*(undefined8 *)(param_2 + 0x70));
        goto LAB_180819b29;
      }
LAB_180819b38:
      if (2 < iVar3) goto LAB_180819bea;
      if (*(int *)(param_2 + 8) != 0) goto code_r0x000180819b47;
      uVar5 = FUN_180819d70(param_1,param_2,*(undefined8 *)(param_2 + 0x68),
                            *(undefined8 *)(param_2 + 0x70),0,0,auStack_78);
      if ((int)uVar5 == 0) {
        *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + 1;
        *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x1f8);
        goto LAB_180819bea;
      }
    }
  }
  return uVar5;
code_r0x000180819b47:
  iVar3 = func_0x00018082f880(auStack_78);
  uVar1 = *(uint *)(param_2 + 0x40);
  uVar4 = 0;
  if (0 < (int)uVar1) {
    piVar8 = *(int **)(param_2 + 0x58);
    puVar6 = puVar11;
    do {
      uVar4 = (uint)puVar6;
      if (*piVar8 == iVar3) break;
      uVar4 = uVar4 + 1;
      puVar6 = (undefined1 *)(ulonglong)uVar4;
      piVar8 = piVar8 + 1;
    } while ((int)uVar4 < (int)uVar1);
  }
  if (uVar4 != uVar1) {
    *(int *)(param_2 + 0x84) = iVar3;
    *(uint *)(param_2 + 0x88) = uVar4;
    func_0x00018082fe60(param_2 + 0x98,iVar3);
    *(undefined4 *)(param_2 + 0x80) = 3;
LAB_180819bea:
    FUN_18082fa20(param_1,param_2 + 0x98,auStack_78);
  }
  goto LAB_1808199b3;
}



ulonglong FUN_180819d70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       longlong *param_5,int *param_6,undefined1 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [48];
  
  iVar7 = 0;
  uVar4 = 0xffffff75;
  if (param_7 == (undefined1 *)0x0) {
    lVar5 = FUN_18081a120(param_1,param_2,auStack_88,0x2134);
    if (lVar5 == -0x80) {
      return 0xffffffffffffff80;
    }
    if (lVar5 == -0x8b) goto LAB_18081a067;
    if (lVar5 < 0) {
      return 0xffffff7c;
    }
    param_7 = auStack_88;
  }
  iVar1 = FUN_180817180(param_1,param_3);
  if (iVar1 != 0) goto LAB_18081a067;
  func_0x000180816f90(param_4);
  *(undefined4 *)(param_2 + 0x80) = 2;
  iVar1 = func_0x00018082f7f0(param_7);
  while (iVar1 != 0) {
    if (param_5 != (longlong *)0x0) {
      iVar1 = *param_6;
      piVar6 = (int *)*param_5;
      iVar2 = func_0x00018082f880(param_7);
      if (piVar6 != (int *)0x0) {
        while (iVar1 != 0) {
          iVar1 = iVar1 + -1;
          if (*piVar6 == iVar2) {
            if (*param_5 != 0) {
                    // WARNING: Subroutine does not return
              FUN_1807c41d0(param_1);
            }
            *param_5 = 0;
            *param_6 = 0;
            goto LAB_18081a037;
          }
          piVar6 = piVar6 + 1;
        }
      }
      uVar3 = func_0x00018082f880(param_7);
      iVar1 = *param_6;
      *param_6 = iVar1 + 1;
      if (*param_5 == 0) {
        lVar5 = FUN_1807c4200(param_1,4);
      }
      else {
        lVar5 = FUN_1807c4260(param_1,*param_5,(iVar1 + 1) * 4);
      }
      *param_5 = lVar5;
      if (lVar5 == 0) goto LAB_18081a067;
      *(undefined4 *)(lVar5 + -4 + (longlong)*param_6 * 4) = uVar3;
    }
    if (*(int *)(param_2 + 0x80) < 3) {
      uVar3 = func_0x00018082f880(param_7);
      func_0x00018082fe60(param_2 + 0x98,uVar3);
      FUN_18082fa20(param_1,param_2 + 0x98,param_7);
      iVar1 = func_0x00018082f9e0(param_2 + 0x98,auStack_68);
      if ((0 < iVar1) && (iVar1 = FUN_180817430(auStack_68), iVar1 != 0)) {
        *(undefined4 *)(param_2 + 0x80) = 3;
        iVar1 = FUN_1808171d0(param_1,param_3,param_4,auStack_68);
        if (iVar1 != 0) goto LAB_18081a037;
      }
    }
    lVar5 = FUN_18081a120(param_1,param_2,param_7,0x2134);
    if (lVar5 == -0x80) {
      uVar4 = 0xffffff80;
      goto LAB_18081a03c;
    }
    if (lVar5 == -0x8b) goto LAB_18081a03c;
    if (lVar5 < 0) goto LAB_18081a098;
    if ((*(int *)(param_2 + 0x80) == 3) &&
       (iVar1 = func_0x00018082f880(param_7), *(int *)(param_2 + 0x1f8) == iVar1)) {
      FUN_18082fa20(param_1,param_2 + 0x98,param_7);
      break;
    }
    iVar1 = func_0x00018082f7f0(param_7);
  }
  iVar1 = iVar7;
  if (*(int *)(param_2 + 0x80) == 3) {
    do {
      if (1 < iVar1) {
        return 0;
      }
      while (iVar2 = func_0x00018082f9e0(param_2 + 0x98,auStack_68), iVar2 != 0) {
        if (iVar2 == -1) goto LAB_18081a037;
        uVar4 = FUN_1808171d0(param_1,param_3,param_4,auStack_68);
        if (uVar4 != 0) goto LAB_18081a03c;
        iVar1 = iVar1 + 1;
        if (1 < iVar1) {
          return 0;
        }
      }
      if (1 < iVar1) {
        return 0;
      }
      while( true ) {
        lVar5 = FUN_18081a120(param_1,param_2,param_7,0x2134);
        if (lVar5 < 0) goto LAB_18081a037;
        iVar2 = func_0x00018082f880(param_7);
        if (*(int *)(param_2 + 0x1f8) == iVar2) break;
        iVar2 = func_0x00018082f7f0(param_7);
        if (iVar2 != 0) {
          if (iVar7 != 0) goto LAB_18081a037;
          iVar7 = 1;
        }
      }
      FUN_18082fa20(param_1,param_2 + 0x98,param_7);
    } while( true );
  }
LAB_18081a098:
  uVar4 = 0xffffff7c;
  goto LAB_18081a03c;
LAB_18081a037:
  uVar4 = 0xffffff7b;
LAB_18081a03c:
  FUN_180816fb0(param_1,param_3);
  FUN_180816ee0(param_1,param_4);
  *(undefined4 *)(param_2 + 0x80) = 2;
LAB_18081a067:
  return (ulonglong)uVar4;
}



longlong FUN_18081a120(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  
  if (0 < param_4) {
    param_4 = param_4 + param_2[2];
  }
  while( true ) {
    while( true ) {
      if ((0 < param_4) && (param_4 <= param_2[2])) {
        return -1;
      }
      iVar1 = FUN_18082ffe0(param_2 + 4,param_3);
      if (-1 < iVar1) break;
      param_2[2] = param_2[2] - (longlong)iVar1;
    }
    if (iVar1 != 0) {
      lVar3 = param_2[2];
      param_2[2] = iVar1 + lVar3;
      return lVar3;
    }
    if (param_4 == 0) {
      return -1;
    }
    puVar2 = (undefined4 *)_errno();
    *puVar2 = 0;
    if (param_2[0x62] == 0) {
      return -0x80;
    }
    if (*param_2 == 0) {
      return -2;
    }
    lVar3 = FUN_18082feb0(param_1,param_2 + 4,0x2134);
    if (lVar3 == 0) {
      return -0x8b;
    }
    iVar1 = (*(code *)param_2[0x62])(lVar3,1,0x2134,*param_2);
    if (0 < iVar1) {
      func_0x0001808301f0(param_2 + 4,iVar1);
    }
    if (iVar1 == 0) break;
    if (iVar1 == -0x8b) {
      return -0x8b;
    }
    if (iVar1 < 0) {
      return -0x80;
    }
  }
  piVar4 = (int *)_errno();
  if (*piVar4 != 0) {
    return -0x80;
  }
  return -2;
}



longlong FUN_18081a260(undefined8 param_1,longlong *param_2,int *param_3,int param_4,int *param_5,
                      undefined8 *param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lStackX_10;
  undefined1 auStack_58 [32];
  
  lVar1 = param_2[2];
  lVar9 = -1;
  lVar8 = -1;
  lStackX_10 = -1;
  iVar3 = -1;
  uVar10 = 0xffffffffffffffff;
  lVar4 = lVar1;
  do {
    lVar5 = lVar4 + -0x2134;
    lVar4 = 0;
    if (-1 < lVar5) {
      lVar4 = lVar5;
    }
    if (*param_2 == 0) {
      return -0x81;
    }
    if (((code *)param_2[99] == (code *)0x0) ||
       (iVar2 = (*(code *)param_2[99])(*param_2,lVar4,0), iVar2 == -1)) {
      return -0x80;
    }
    param_2[2] = lVar4;
    func_0x0001808301d0(param_2 + 4);
    lVar5 = param_2[2];
    lVar6 = lVar8;
    while (lVar8 = lVar6, lVar5 < lVar1) {
      lVar6 = FUN_18081a120(param_1,param_2,auStack_58,lVar1 - lVar5);
      if (lVar6 == -0x80) {
        return -0x80;
      }
      if (lVar6 == -0x8b) {
        return -0x8b;
      }
      lVar8 = lStackX_10;
      if (lVar6 < 0) break;
      iVar3 = func_0x00018082f880(auStack_58);
      uVar10 = func_0x00018082f820(auStack_58);
      if (iVar3 == *param_5) {
        *param_6 = uVar10;
        lVar9 = lVar6;
      }
      if ((param_3 != (int *)0x0) && (piVar7 = param_3, iVar2 = param_4, param_4 != 0)) {
        do {
          iVar2 = iVar2 + -1;
          if (*piVar7 == iVar3) goto LAB_18081a3a5;
          piVar7 = piVar7 + 1;
        } while (iVar2 != 0);
      }
      lVar9 = -1;
LAB_18081a3a5:
      lStackX_10 = lVar6;
      lVar5 = param_2[2];
    }
    if (lVar8 != -1) {
      if (lVar9 < 0) {
        *param_5 = iVar3;
        *param_6 = uVar10;
        lVar9 = lVar8;
      }
      return lVar9;
    }
  } while( true );
}



longlong FUN_18081a430(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [48];
  
  lVar5 = param_2[0x3f];
  iVar6 = -1;
  lVar7 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        iVar1 = FUN_18082ffe0(param_2 + 4,auStack_78);
        if (-1 < iVar1) break;
        param_2[2] = param_2[2] - (longlong)iVar1;
      }
      if (iVar1 == 0) break;
      lVar4 = param_2[2];
      param_2[2] = iVar1 + lVar4;
      if ((lVar4 < 0) || (iVar1 = func_0x00018082f7f0(auStack_78), iVar1 != 0)) goto LAB_18081a5c6;
      iVar1 = func_0x00018082f880(auStack_78);
      if (iVar1 == (int)lVar5) {
        FUN_18082fa20(param_1,param_2 + 0x13,auStack_78);
        iVar1 = func_0x00018082f9e0(param_2 + 0x13,auStack_58);
        while (iVar1 != 0) {
          iVar2 = iVar6;
          if ((0 < iVar1) && (iVar2 = FUN_1808317a0(param_3,auStack_58), iVar6 != -1)) {
            lVar7 = lVar7 + ((longlong)(iVar2 + iVar6) >> 2);
          }
          iVar1 = func_0x00018082f9e0(param_2 + 0x13,auStack_58);
          iVar6 = iVar2;
        }
        lVar4 = func_0x00018082f820(auStack_78);
        if (lVar4 != -1) {
          lVar5 = func_0x00018082f820(auStack_78);
          lVar7 = lVar5 - lVar7;
          goto LAB_18081a5c6;
        }
      }
    }
    puVar3 = (undefined4 *)_errno();
    *puVar3 = 0;
    if (((param_2[0x62] == 0) || (*param_2 == 0)) ||
       (lVar4 = FUN_18082feb0(param_1,param_2 + 4,0x2134), lVar4 == 0)) goto LAB_18081a5c6;
    iVar1 = (*(code *)param_2[0x62])(lVar4,1,0x2134,*param_2);
    if (0 < iVar1) {
      func_0x0001808301f0(param_2 + 4,iVar1);
    }
    if (iVar1 == 0) break;
    if (iVar1 < 0) {
LAB_18081a5c6:
      lVar5 = 0;
      if (-1 < lVar7) {
        lVar5 = lVar7;
      }
      return lVar5;
    }
  }
  _errno();
  goto LAB_18081a5c6;
}



undefined8 FUN_18081a600(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (3 < *(int *)(param_2 + 0x80)) {
    return 0;
  }
  if (*(int *)(param_2 + 0x80) < 3) {
    return 0xffffff7f;
  }
  lVar3 = *(longlong *)(param_2 + 0x68);
  if (*(int *)(param_2 + 8) != 0) {
    lVar3 = lVar3 + (longlong)*(int *)(param_2 + 0x88) * 0x28;
  }
  iVar1 = FUN_1808310a0(param_1,param_2 + 0x210,lVar3);
  if (iVar1 != -0x8b) {
    if (iVar1 != 0) {
      return 0xffffff77;
    }
    uVar2 = FUN_180830400(param_1,param_2 + 0x210,param_2 + 0x288);
    if ((int)uVar2 == 0) {
      *(undefined4 *)(param_2 + 0x80) = 4;
      *(undefined8 *)(param_2 + 0x8c) = uVar2;
      return uVar2;
    }
  }
  return 0xffffff75;
}



undefined8 FUN_18081a640(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong unaff_RBX;
  
  iVar1 = FUN_1808310a0();
  if (iVar1 != -0x8b) {
    if (iVar1 != 0) {
      return 0xffffff77;
    }
    uVar2 = FUN_180830400();
    if ((int)uVar2 == 0) {
      *(undefined4 *)(unaff_RBX + 0x80) = 4;
      *(undefined8 *)(unaff_RBX + 0x8c) = uVar2;
      return uVar2;
    }
  }
  return 0xffffff75;
}



undefined8 FUN_18081a685(void)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  
  uVar1 = FUN_180830400();
  if ((int)uVar1 == 0) {
    *(undefined4 *)(unaff_RBX + 0x80) = 4;
    *(undefined8 *)(unaff_RBX + 0x8c) = uVar1;
    return uVar1;
  }
  return 0xffffff75;
}



undefined8 FUN_18081a6c0(void)

{
  return 0xffffff75;
}



undefined8 FUN_18081a6e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (*param_1 == 0) {
    return 0xffffff7f;
  }
  if ((code *)param_1[99] != (code *)0x0) {
    iVar1 = (*(code *)param_1[99])(*param_1,param_2,0);
    if (iVar1 != -1) {
      param_1[2] = param_2;
      func_0x0001808301d0(param_1 + 4);
      return 0;
    }
  }
  return 0xffffff80;
}





