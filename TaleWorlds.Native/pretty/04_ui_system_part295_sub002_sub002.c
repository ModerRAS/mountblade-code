#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part295_sub002_sub002.c - 1 个函数

// 函数: void FUN_18082ed00(int *param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_18082ed00(int *param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  uint64_t auStack_58 [2];
  longlong lStack_48;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  auStack_58[0] = param_2;
  if (0 < param_1[2]) {
    lStack_48 = (longlong)(param_4 / *param_1);
                    // WARNING: Subroutine does not return
    FUN_1808fd200(param_1,0xffffffffffffff0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(_DAT_180bf00a8);
}



uint64_t
FUN_18082f0a0(int *param_1,longlong param_2,int param_3,int param_4,uint64_t param_5,int param_6)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  
  iVar14 = 0;
  if (0 < param_1[2]) {
    lVar9 = (longlong)(param_3 / param_4);
    iVar2 = (param_6 + param_3) / param_4;
    if (param_3 / param_4 < iVar2) {
      uVar15 = 0;
      do {
        iVar10 = param_1[0x11];
        iVar3 = FUN_18082d710(param_5,param_1[0x10]);
        if (iVar3 < 0) {
          iVar3 = param_1[2];
          uVar7 = 0;
LAB_18082f164:
          uVar4 = FUN_18082d710(param_5,iVar10);
          while ((int)uVar4 < 0) {
            if (iVar10 < 2) {
              if ((int)uVar4 < 0) {
                return 0xffffffff;
              }
              break;
            }
            iVar10 = iVar10 + -1;
            uVar4 = FUN_18082d710(param_5,iVar10);
          }
          uVar4 = uVar4 << 0x10 | uVar4 >> 0x10;
          iVar11 = iVar3 - uVar7;
          uVar4 = (uVar4 >> 8 ^ uVar4 << 8) & 0xff00ff ^ uVar4 << 8;
          uVar4 = (uVar4 >> 4 ^ uVar4 << 4) & 0xf0f0f0f ^ uVar4 << 4;
          uVar4 = (uVar4 >> 2 ^ uVar4 * 4) & 0x33333333 ^ uVar4 * 4;
          uVar4 = (uVar4 >> 1 ^ uVar4 * 2) & 0x55555555 ^ uVar4 * 2;
          if (1 < iVar11) {
            do {
              iVar11 = iVar11 >> 1;
              iVar5 = iVar11 + uVar7;
              iVar6 = iVar11;
              if (uVar4 < *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 4)) {
                iVar6 = 0;
              }
              uVar7 = uVar7 + iVar6;
              iVar6 = 0;
              if (uVar4 < *(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 4)) {
                iVar6 = iVar11;
              }
              iVar3 = iVar3 - iVar6;
              iVar11 = iVar3 - uVar7;
            } while (1 < iVar11);
          }
          iVar3 = (int)*(char *)(*(longlong *)(param_1 + 0xc) + (longlong)(int)uVar7);
          if (iVar10 < iVar3) {
            func_0x00018082d690(param_5,iVar10);
            return 0xffffffff;
          }
        }
        else {
          uVar4 = *(uint *)(*(longlong *)(param_1 + 0xe) + (longlong)iVar3 * 4);
          if ((int)uVar4 < 0) {
            uVar7 = (int)uVar4 >> 0xf & 0x7fff;
            iVar3 = param_1[2] - (uVar4 & 0x7fff);
            goto LAB_18082f164;
          }
          uVar7 = uVar4 - 1;
          iVar3 = (int)*(char *)(*(longlong *)(param_1 + 0xc) + (longlong)(int)uVar7);
        }
        func_0x00018082d690(param_5,iVar3);
        if (uVar7 == 0xffffffff) {
          return 0xffffffff;
        }
        pfVar12 = (float *)(*(longlong *)(param_1 + 6) + (longlong)(int)(*param_1 * uVar7) * 4);
        lVar8 = lVar9;
        uVar13 = 0;
        if (0 < *param_1) {
          do {
            lVar9 = *(longlong *)(param_2 + uVar15 * 8);
            iVar10 = iVar14 + 1;
            bVar16 = iVar10 != param_4;
            iVar14 = 0;
            if (bVar16) {
              iVar14 = iVar10;
            }
            *(float *)(lVar9 + lVar8 * 4) = *(float *)(lVar9 + lVar8 * 4) + *pfVar12;
            lVar9 = lVar8 + 1;
            if (bVar16) {
              lVar9 = lVar8;
            }
            uVar1 = uVar15 + 1;
            uVar15 = 0;
            if (bVar16) {
              uVar15 = uVar1;
            }
            uVar7 = (int)uVar13 + 1;
            pfVar12 = pfVar12 + 1;
            lVar8 = lVar9;
            uVar13 = (ulonglong)uVar7;
          } while ((int)uVar7 < *param_1);
        }
      } while (lVar9 < iVar2);
    }
  }
  return 0;
}



int32_t FUN_18082f330(uint64_t param_1,uint64_t param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int32_t uVar12;
  ulonglong uVar8;
  int32_t uVar13;
  
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  uVar12 = 0xffffffff;
  uVar13 = 0xffffffff;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xc] = 1;
  iVar1 = FUN_18082d7f0(param_2,0x18);
  uVar4 = uVar12;
  if (iVar1 != 0x564342) goto LAB_18082f494;
  iVar1 = FUN_18082d7f0(param_2,0x10);
  *param_3 = iVar1;
  iVar1 = FUN_18082d7f0(param_2,0x18);
  param_3[1] = iVar1;
  if (iVar1 == -1) goto LAB_18082f494;
  iVar2 = func_0x00018082e5b0(*param_3);
  iVar1 = func_0x00018082e5b0(iVar1);
  if (0x18 < iVar2 + iVar1) goto LAB_18082f494;
  iVar1 = FUN_18082d7f0(param_2,1);
  if (iVar1 == 0) {
    lVar5 = FUN_1807c4200(param_1,param_3[1] << 2);
    *(longlong *)(param_3 + 2) = lVar5;
    if (lVar5 != 0) {
      iVar1 = FUN_18082d7f0(param_2,1);
      uVar10 = 0;
      if (iVar1 == 0) {
        uVar11 = uVar10;
        if (0 < param_3[1]) {
          do {
            iVar1 = FUN_18082d7f0(param_2,5);
            uVar4 = uVar13;
            if (iVar1 == -1) goto LAB_18082f494;
            uVar7 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar7;
            *(int *)(uVar11 + *(longlong *)(param_3 + 2)) = iVar1 + 1;
            uVar11 = uVar11 + 4;
          } while ((int)uVar7 < param_3[1]);
        }
      }
      else {
        uVar11 = uVar10;
        if (0 < param_3[1]) {
          do {
            iVar1 = FUN_18082d7f0(param_2,1);
            if (iVar1 == 0) {
              *(int32_t *)(uVar11 + *(longlong *)(param_3 + 2)) = 0;
            }
            else {
              iVar1 = FUN_18082d7f0(param_2,5);
              uVar4 = uVar13;
              if (iVar1 == -1) goto LAB_18082f494;
              *(int *)(uVar11 + *(longlong *)(param_3 + 2)) = iVar1 + 1;
            }
            uVar7 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar7;
            uVar11 = uVar11 + 4;
          } while ((int)uVar7 < param_3[1]);
        }
      }
      goto LAB_18082f55b;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0xffffffff;
    }
    iVar1 = FUN_18082d7f0(param_2,5);
    lVar5 = FUN_1807c4200(param_1,param_3[1] << 2);
    *(longlong *)(param_3 + 2) = lVar5;
    if (lVar5 != 0) {
      iVar2 = param_3[1];
      uVar9 = 0;
      uVar10 = uVar9;
      uVar11 = uVar9;
      if (0 < iVar2) {
        do {
          iVar1 = iVar1 + 1;
          uVar3 = func_0x00018082e5b0(iVar2 - (int)uVar11);
          iVar2 = FUN_18082d7f0(param_2,uVar3);
          if (iVar2 == -1) goto LAB_18082f494;
          uVar8 = uVar9;
          if (0 < iVar2) {
            do {
              if (param_3[1] <= (int)uVar11) break;
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              uVar11 = (ulonglong)((int)uVar11 + 1);
              *(int *)(*(longlong *)(param_3 + 2) + uVar10 * 4) = iVar1;
              uVar10 = uVar10 + 1;
            } while ((int)uVar7 < iVar2);
          }
          iVar2 = param_3[1];
        } while ((int)uVar11 < iVar2);
      }
LAB_18082f55b:
      lVar5 = 0;
      iVar1 = FUN_18082d7f0(param_2,4);
      param_3[4] = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      uVar4 = uVar12;
      if (1 < iVar1 - 1U) goto LAB_18082f494;
      iVar1 = FUN_18082d7f0(param_2,0x20);
      param_3[5] = iVar1;
      iVar1 = FUN_18082d7f0(param_2,0x20);
      param_3[6] = iVar1;
      iVar1 = FUN_18082d7f0(param_2,4);
      param_3[7] = iVar1 + 1;
      iVar1 = FUN_18082d7f0(param_2,1);
      param_3[8] = iVar1;
      uVar4 = uVar13;
      if (iVar1 == -1) goto LAB_18082f494;
      iVar1 = 0;
      if (param_3[4] == 1) {
        if (*param_3 != 0) {
          iVar1 = FUN_18082e1e0(param_3);
        }
      }
      else if (param_3[4] == 2) {
        iVar1 = *param_3 * param_3[1];
      }
      lVar6 = FUN_1807c4200(param_1,iVar1 * 4);
      *(longlong *)(param_3 + 10) = lVar6;
      if (lVar6 != 0) {
        if (0 < iVar1) {
          do {
            uVar4 = FUN_18082d7f0(param_2,param_3[7]);
            *(int32_t *)(*(longlong *)(param_3 + 10) + lVar5 * 4) = uVar4;
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar1);
        }
        if (iVar1 == 0) {
          return 0;
        }
        uVar4 = uVar13;
        if (*(int *)(*(longlong *)(param_3 + 10) + -4 + (longlong)iVar1 * 4) != -1) {
          return 0;
        }
        goto LAB_18082f494;
      }
    }
  }
  uVar4 = 0xffffff75;
LAB_18082f494:
  FUN_18082e110(param_1,param_3);
  return uVar4;
}



uint FUN_18082f650(longlong param_1,uint64_t param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)(param_1 + 0x44);
  iVar2 = FUN_18082d710(param_2,*(int32_t *)(param_1 + 0x40));
  if (iVar2 < 0) {
    iVar2 = *(int *)(param_1 + 8);
    uVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 4);
    if (-1 < (int)uVar3) {
      func_0x00018082d690(param_2,(int)*(char *)(*(longlong *)(param_1 + 0x30) + -1 +
                                                (longlong)(int)uVar3));
      return uVar3 - 1;
    }
    uVar7 = (int)uVar3 >> 0xf & 0x7fff;
    iVar2 = *(int *)(param_1 + 8) - (uVar3 & 0x7fff);
  }
  uVar3 = FUN_18082d710(param_2,iVar6);
  do {
    if (-1 < (int)uVar3) {
LAB_18082f701:
      uVar3 = uVar3 << 0x10 | uVar3 >> 0x10;
      uVar3 = (uVar3 >> 8 ^ uVar3 << 8) & 0xff00ff ^ uVar3 << 8;
      uVar3 = (uVar3 >> 4 ^ uVar3 << 4) & 0xf0f0f0f ^ uVar3 << 4;
      uVar3 = (uVar3 >> 2 ^ uVar3 * 4) & 0x33333333 ^ uVar3 * 4;
      uVar3 = (uVar3 >> 1 ^ uVar3 * 2) & 0x55555555 ^ uVar3 * 2;
      iVar4 = iVar2 - uVar7;
      if (1 < iVar4) {
        do {
          iVar4 = iVar4 >> 1;
          iVar1 = iVar4 + uVar7;
          iVar5 = iVar4;
          if (uVar3 < *(uint *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 4)) {
            iVar5 = 0;
          }
          uVar7 = uVar7 + iVar5;
          iVar5 = 0;
          if (uVar3 < *(uint *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 4)) {
            iVar5 = iVar4;
          }
          iVar2 = iVar2 - iVar5;
          iVar4 = iVar2 - uVar7;
        } while (1 < iVar4);
      }
      if (iVar6 < *(char *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar7)) {
        func_0x00018082d690(param_2,iVar6);
LAB_18082f7cb:
        uVar7 = 0xffffffff;
      }
      else {
        func_0x00018082d690(param_2);
      }
      return uVar7;
    }
    if (iVar6 < 2) {
      if ((int)uVar3 < 0) goto LAB_18082f7cb;
      goto LAB_18082f701;
    }
    iVar6 = iVar6 + -1;
    uVar3 = FUN_18082d710(param_2,iVar6);
  } while( true );
}



uint64_t FUN_18082f8b0(uint64_t param_1,longlong *param_2)

{
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  if (param_2[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1);
  }
  if (param_2[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1);
  }
                    // WARNING: Subroutine does not return
  memset(param_2,0,0x178);
}



uint64_t FUN_18082f920(uint64_t param_1,longlong param_2)

{
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,0x178);
  }
  return 0xffffffff;
}



uint64_t FUN_18082fa20(uint64_t param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint64_t uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  
  lVar19 = param_3[2];
  iVar15 = (int)param_3[3];
  lVar10 = *param_3;
  iVar14 = 0;
  bVar3 = *(byte *)(lVar10 + 5);
  cVar4 = *(char *)(lVar10 + 4);
  bVar18 = bVar3 & 2;
  uVar7 = *(uint64_t *)(lVar10 + 6);
  iVar16 = *(int *)(lVar10 + 0xe);
  iVar11 = *(int *)(lVar10 + 0x12);
  uVar8 = (uint)*(byte *)(lVar10 + 0x1a);
  if (param_2 == (longlong *)0x0) {
    return 0xffffffff;
  }
  lVar20 = *param_2;
  if (lVar20 == 0) {
    return 0xffffffff;
  }
  iVar13 = (int)param_2[2];
  iVar6 = *(int *)((longlong)param_2 + 0x34);
  if (iVar13 != 0) {
    piVar1 = (int *)((longlong)param_2 + 0xc);
    *piVar1 = *piVar1 - iVar13;
    if (*piVar1 != 0) {
                    // WARNING: Subroutine does not return
      memmove(lVar20,lVar20 + iVar13,(longlong)*(int *)((longlong)param_2 + 0xc));
    }
    *(int32_t *)(param_2 + 2) = 0;
  }
  if (iVar6 != 0) {
    iVar13 = *(int *)((longlong)param_2 + 0x2c) - iVar6;
    if (iVar13 != 0) {
                    // WARNING: Subroutine does not return
      memmove(param_2[3],param_2[3] + (longlong)iVar6 * 4,(longlong)iVar13 << 2);
    }
    *(int32_t *)((longlong)param_2 + 0x34) = 0;
    *(int *)(param_2 + 6) = (int)param_2[6] - iVar6;
    *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) - iVar6;
  }
  if (iVar16 != (int)param_2[0x2c]) {
    return 0xffffffff;
  }
  if (cVar4 != '\0') {
    return 0xffffffff;
  }
  lVar20 = (longlong)(int)uVar8;
  iVar16 = uVar8 + 1;
  if ((int)param_2[5] <= *(int *)((longlong)param_2 + 0x2c) + iVar16) {
    lVar9 = FUN_1807c4260(param_1,param_2[3],((int)param_2[5] + iVar16) * 4 + 0x80);
    if (lVar9 == 0) goto LAB_18082fd03;
    param_2[3] = lVar9;
    lVar9 = FUN_1807c4260(param_1,param_2[4],((int)param_2[5] + iVar16) * 8 + 0x100);
    if (lVar9 == 0) goto LAB_18082fd03;
    param_2[4] = lVar9;
    *(uint *)(param_2 + 5) = (int)param_2[5] + uVar8 + 0x21;
  }
  if (iVar11 != *(int *)((longlong)param_2 + 0x164)) {
    iVar16 = (int)param_2[6];
    if (iVar16 < *(int *)((longlong)param_2 + 0x2c)) {
      iVar13 = *(int *)((longlong)param_2 + 0xc);
      uVar12 = (ulonglong)(uint)(*(int *)((longlong)param_2 + 0x2c) - iVar16);
      pbVar17 = (byte *)(param_2[3] + (longlong)iVar16 * 4);
      do {
        bVar5 = *pbVar17;
        pbVar17 = pbVar17 + 4;
        iVar13 = iVar13 - (uint)bVar5;
        *(int *)((longlong)param_2 + 0xc) = iVar13;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    *(int *)((longlong)param_2 + 0x2c) = iVar16;
    if (*(int *)((longlong)param_2 + 0x164) != -1) {
      *(int32_t *)(param_2[3] + (longlong)iVar16 * 4) = 0x400;
      *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) + 1;
      *(int *)(param_2 + 6) = (int)param_2[6] + 1;
    }
  }
  iVar16 = 0;
  if (((bVar3 & 1) != 0) &&
     (((*(int *)((longlong)param_2 + 0x2c) < 1 ||
       (*(int *)(param_2[3] + -4 + (longlong)*(int *)((longlong)param_2 + 0x2c) * 4) == 0x400)) &&
      (bVar18 = 0, iVar16 = iVar14, uVar8 != 0)))) {
    lVar9 = 0;
    do {
      bVar5 = *(byte *)(lVar9 + 0x1b + lVar10);
      lVar19 = lVar19 + (ulonglong)bVar5;
      iVar15 = iVar15 - (uint)bVar5;
      iVar14 = iVar14 + 1;
      iVar16 = iVar14;
      if (bVar5 < 0xff) break;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar20);
  }
  if (iVar15 == 0) {
    lVar19 = (longlong)iVar16;
    iVar15 = -1;
    if (lVar19 < lVar20) {
      iVar16 = *(int *)((longlong)param_2 + 0x2c);
      do {
        bVar5 = *(byte *)(lVar19 + 0x1b + lVar10);
        *(uint *)(param_2[3] + (longlong)iVar16 * 4) = (uint)bVar5;
        *(uint64_t *)(param_2[4] + (longlong)*(int *)((longlong)param_2 + 0x2c) * 8) =
             0xffffffffffffffff;
        if (bVar18 != 0) {
          puVar2 = (uint *)(param_2[3] + (longlong)*(int *)((longlong)param_2 + 0x2c) * 4);
          *puVar2 = *puVar2 | 0x100;
          bVar18 = 0;
        }
        if (bVar5 != 0xff) {
          iVar15 = *(int *)((longlong)param_2 + 0x2c);
        }
        iVar16 = *(int *)((longlong)param_2 + 0x2c) + 1;
        lVar19 = lVar19 + 1;
        *(int *)((longlong)param_2 + 0x2c) = iVar16;
        if (bVar5 != 0xff) {
          *(int *)(param_2 + 6) = iVar16;
        }
      } while (lVar19 < lVar20);
      if (iVar15 != -1) {
        *(uint64_t *)(param_2[4] + (longlong)iVar15 * 8) = uVar7;
      }
    }
    if ((bVar3 & 4) != 0) {
      *(int32_t *)(param_2 + 0x2b) = 1;
      if (0 < *(int *)((longlong)param_2 + 0x2c)) {
        puVar2 = (uint *)(param_2[3] + -4 + (longlong)*(int *)((longlong)param_2 + 0x2c) * 4);
        *puVar2 = *puVar2 | 0x200;
      }
    }
    *(int *)((longlong)param_2 + 0x164) = iVar11 + 1;
    return 0;
  }
  iVar11 = *(int *)((longlong)param_2 + 0xc);
  if ((int)param_2[1] <= iVar11 + iVar15) {
    lVar10 = FUN_1807c4260(param_1,*param_2,(int)param_2[1] + 0x400 + iVar15);
    if (lVar10 == 0) {
LAB_18082fd03:
      FUN_18082f8b0(param_1,param_2);
      return 0xffffffff;
    }
    *param_2 = lVar10;
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar15 + 0x400;
    iVar11 = *(int *)((longlong)param_2 + 0xc);
  }
                    // WARNING: Subroutine does not return
  memcpy((longlong)iVar11 + *param_2,lVar19,(longlong)iVar15);
}



longlong FUN_18082feb0(uint64_t param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((int)param_2[1] < 0) {
    return 0;
  }
  iVar2 = (int)param_2[2];
  if (iVar2 != 0) {
    *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) - iVar2;
    if (0 < *(int *)((longlong)param_2 + 0xc)) {
                    // WARNING: Subroutine does not return
      memmove(*param_2,(longlong)iVar2 + *param_2);
    }
    *(int32_t *)(param_2 + 2) = 0;
  }
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  if ((int)param_2[1] - iVar2 < param_3) {
    iVar3 = param_3 + 0x1000 + iVar2;
    if (*param_2 == 0) {
      lVar1 = FUN_1807c4200(param_1,iVar3);
    }
    else {
      lVar1 = FUN_1807c4260(param_1,*param_2,iVar3);
    }
    if (lVar1 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      return 0;
    }
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    *param_2 = lVar1;
    *(int *)(param_2 + 1) = iVar3;
  }
  return (longlong)iVar2 + *param_2;
}



uint64_t FUN_18082ff80(uint64_t param_1,longlong *param_2)

{
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return 0;
}



int FUN_18082ffe0(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  
  lVar7 = *param_1;
  iVar11 = *(int *)((longlong)param_1 + 0xc) - (int)param_1[2];
  pbVar1 = (byte *)(lVar7 + (int)param_1[2]);
  if (-1 < (int)param_1[1]) {
    iVar9 = (int)param_1[3];
    uVar8 = 0;
    if (iVar9 == 0) {
      if (iVar11 < 0x1b) {
        return 0;
      }
      if (*(int *)pbVar1 != 0x5367674f) goto LAB_180830143;
      iVar9 = pbVar1[0x1a] + 0x1b;
      if (iVar11 < iVar9) {
        return 0;
      }
      if (pbVar1[0x1a] != 0) {
        iVar5 = *(int *)((longlong)param_1 + 0x1c);
        pbVar10 = pbVar1 + 0x1b;
        uVar6 = uVar8;
        do {
          bVar2 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          iVar5 = iVar5 + (uint)bVar2;
          uVar4 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar4;
          *(int *)((longlong)param_1 + 0x1c) = iVar5;
        } while ((int)uVar4 < (int)(uint)pbVar1[0x1a]);
      }
      *(int *)(param_1 + 3) = iVar9;
    }
    if (*(int *)((longlong)param_1 + 0x1c) + iVar9 <= iVar11) {
      iVar9 = *(int *)(pbVar1 + 0x16);
      pbVar1[0x16] = 0;
      pbVar1[0x17] = 0;
      pbVar1[0x18] = 0;
      pbVar1[0x19] = 0;
      uVar4 = *(uint *)(param_1 + 3);
      pbVar10 = pbVar1 + (int)uVar4;
      if (0 < (int)uVar4) {
        uVar6 = (ulonglong)uVar4;
        pbVar12 = pbVar1;
        do {
          bVar2 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          uVar8 = (ulonglong)
                  (*(uint *)(&UNK_180980740 + (uVar8 >> 0x18 ^ (ulonglong)bVar2) * 4) ^
                  (int)uVar8 << 8);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar4 = (uint)uVar8;
      if (0 < *(int *)((longlong)param_1 + 0x1c)) {
        uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
        do {
          bVar2 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          uVar4 = *(uint *)(&UNK_180980740 + (uVar8 >> 0x18 ^ (ulonglong)bVar2) * 4) ^
                  (int)uVar8 << 8;
          uVar8 = (ulonglong)uVar4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      pbVar1[0x16] = (byte)uVar4;
      pbVar1[0x17] = (byte)(uVar4 >> 8);
      pbVar1[0x18] = (byte)(uVar4 >> 0x10);
      pbVar1[0x19] = (byte)(uVar4 >> 0x18);
      if (iVar9 == *(int *)(pbVar1 + 0x16)) {
        iVar11 = (int)param_1[2];
        lVar7 = *param_1;
        if (param_2 != (longlong *)0x0) {
          *param_2 = iVar11 + lVar7;
          *(int *)(param_2 + 1) = (int)param_1[3];
          param_2[2] = (longlong)(int)param_1[3] + iVar11 + lVar7;
          *(int32_t *)(param_2 + 3) = *(int32_t *)((longlong)param_1 + 0x1c);
          iVar11 = (int)param_1[2];
        }
        iVar9 = *(int *)((longlong)param_1 + 0x1c) + (int)param_1[3];
        *(int32_t *)((longlong)param_1 + 0x14) = 0;
        param_1[3] = 0;
        *(int *)(param_1 + 2) = iVar11 + iVar9;
        return iVar9;
      }
      *(int *)(pbVar1 + 0x16) = iVar9;
      lVar7 = *param_1;
LAB_180830143:
      param_1[3] = 0;
      lVar3 = memchr(pbVar1 + 1,0x4f,(longlong)(iVar11 + -1));
      if (lVar3 == 0) {
        lVar3 = *(int *)((longlong)param_1 + 0xc) + lVar7;
      }
      *(int *)(param_1 + 2) = (int)lVar3 - (int)lVar7;
      return (int)pbVar1 - (int)lVar3;
    }
  }
  return 0;
}



int FUN_18083009e(uint param_1,uint64_t param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  longlong lVar2;
  int in_EAX;
  longlong lVar3;
  int iVar4;
  longlong *unaff_RBX;
  ulonglong uVar5;
  int iVar6;
  byte *unaff_RDI;
  int in_R10D;
  byte *pbVar7;
  longlong *unaff_R14;
  longlong unaff_R15;
  
  if (0 < (int)param_1) {
    uVar5 = (ulonglong)param_1;
    pbVar7 = unaff_RDI;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      param_3 = *(uint *)(&UNK_180980740 + ((ulonglong)(param_3 >> 0x18) ^ (ulonglong)bVar1) * 4) ^
                param_3 << 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((int)unaff_R15 < *(int *)((longlong)unaff_RBX + 0x1c)) {
    uVar5 = (ulonglong)*(uint *)((longlong)unaff_RBX + 0x1c);
    do {
      bVar1 = *param_4;
      param_4 = param_4 + 1;
      param_3 = *(uint *)(&UNK_180980740 + ((ulonglong)(param_3 >> 0x18) ^ (ulonglong)bVar1) * 4) ^
                param_3 << 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  unaff_RDI[0x16] = (byte)param_3;
  unaff_RDI[0x17] = (byte)(param_3 >> 8);
  unaff_RDI[0x18] = (byte)(param_3 >> 0x10);
  unaff_RDI[0x19] = (byte)(param_3 >> 0x18);
  if (in_EAX == *(int *)(unaff_RDI + 0x16)) {
    iVar4 = (int)unaff_RBX[2];
    lVar2 = *unaff_RBX;
    if (unaff_R14 != (longlong *)0x0) {
      *unaff_R14 = iVar4 + lVar2;
      *(int *)(unaff_R14 + 1) = (int)unaff_RBX[3];
      unaff_R14[2] = (longlong)(int)unaff_RBX[3] + iVar4 + lVar2;
      *(int32_t *)(unaff_R14 + 3) = *(int32_t *)((longlong)unaff_RBX + 0x1c);
      iVar4 = (int)unaff_RBX[2];
    }
    iVar6 = *(int *)((longlong)unaff_RBX + 0x1c) + (int)unaff_RBX[3];
    *(int *)((longlong)unaff_RBX + 0x14) = (int)unaff_R15;
    unaff_RBX[3] = unaff_R15;
    *(int *)(unaff_RBX + 2) = iVar4 + iVar6;
  }
  else {
    *(int *)(unaff_RDI + 0x16) = in_EAX;
    lVar2 = *unaff_RBX;
    unaff_RBX[3] = unaff_R15;
    lVar3 = memchr(unaff_RDI + 1,0x4f,(longlong)(in_R10D + -1));
    if (lVar3 == 0) {
      lVar3 = *(int *)((longlong)unaff_RBX + 0xc) + lVar2;
    }
    iVar6 = (int)unaff_RDI - (int)lVar3;
    *(int *)(unaff_RBX + 2) = (int)lVar3 - (int)lVar2;
  }
  return iVar6;
}



int FUN_18083013d(void)

{
  longlong lVar1;
  int32_t in_EAX;
  longlong lVar2;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  int in_R10D;
  longlong unaff_R15;
  
  *(int32_t *)(unaff_RDI + 0x16) = in_EAX;
  lVar1 = *unaff_RBX;
  unaff_RBX[3] = unaff_R15;
  lVar2 = memchr(unaff_RDI + 1,0x4f,(longlong)(in_R10D + -1));
  if (lVar2 == 0) {
    lVar2 = *(int *)((longlong)unaff_RBX + 0xc) + lVar1;
  }
  *(int *)(unaff_RBX + 2) = (int)lVar2 - (int)lVar1;
  return (int)unaff_RDI - (int)lVar2;
}



uint64_t FUN_180830210(longlong *param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = *(uint *)((longlong)param_1 + 0x34);
  uVar8 = (ulonglong)(int)uVar7;
  if ((int)param_1[6] <= (int)uVar7) {
    return 0;
  }
  puVar2 = (uint *)(param_1[3] + uVar8 * 4);
  uVar3 = *puVar2;
  if ((uVar3 >> 10 & 1) == 0) {
    if ((param_2 != (longlong *)0x0) || (param_3 != 0)) {
      uVar6 = uVar3 & 0xff;
      uVar5 = uVar3 & 0x200;
      uVar4 = uVar6;
      while (uVar4 == 0xff) {
        puVar1 = puVar2 + 1;
        puVar2 = puVar2 + 1;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar4 = *puVar1 & 0xff;
        if ((*puVar1 & 0x200) != 0) {
          uVar5 = 0x200;
        }
        uVar6 = uVar6 + uVar4;
      }
      if (param_2 != (longlong *)0x0) {
        *(uint *)(param_2 + 2) = uVar5;
        *(uint *)((longlong)param_2 + 0xc) = uVar3 & 0x100;
        *param_2 = (longlong)(int)param_1[2] + *param_1;
        param_2[4] = param_1[0x2d];
        param_2[3] = *(longlong *)(param_1[4] + (longlong)(int)uVar7 * 8);
        *(uint *)(param_2 + 1) = uVar6;
      }
      if (param_3 != 0) {
        *(uint *)(param_1 + 2) = (int)param_1[2] + uVar6;
        param_1[0x2d] = param_1[0x2d] + 1;
        *(uint *)((longlong)param_1 + 0x34) = uVar7 + 1;
      }
    }
    return 1;
  }
  param_1[0x2d] = param_1[0x2d] + 1;
  *(uint *)((longlong)param_1 + 0x34) = uVar7 + 1;
  return 0xffffffff;
}



uint64_t FUN_18083022d(longlong param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong in_RAX;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  uint uVar6;
  int iVar7;
  ulonglong in_R10;
  longlong *in_R11;
  
  puVar2 = (uint *)(in_RAX + in_R10 * 4);
  uVar3 = *puVar2;
  if ((uVar3 >> 10 & 1) == 0) {
    if ((in_R11 != (longlong *)0x0) || (unaff_ESI != 0)) {
      uVar6 = uVar3 & 0xff;
      uVar5 = uVar3 & 0x200;
      uVar4 = uVar6;
      while (iVar7 = (int)in_R10, uVar4 == 0xff) {
        puVar1 = puVar2 + 1;
        puVar2 = puVar2 + 1;
        in_R10 = (ulonglong)(iVar7 + 1);
        uVar4 = *puVar1 & 0xff;
        if ((*puVar1 & 0x200) != 0) {
          uVar5 = 0x200;
        }
        uVar6 = uVar6 + uVar4;
      }
      if (in_R11 != (longlong *)0x0) {
        *(uint *)(in_R11 + 2) = uVar5;
        *(uint *)((longlong)in_R11 + 0xc) = uVar3 & 0x100;
        *in_R11 = (longlong)(int)param_4[2] + *param_4;
        in_R11[4] = param_4[0x2d];
        in_R11[3] = *(longlong *)(param_4[4] + (longlong)iVar7 * 8);
        *(uint *)(in_R11 + 1) = uVar6;
      }
      if (unaff_ESI != 0) {
        *(uint *)(param_4 + 2) = (int)param_4[2] + uVar6;
        param_4[0x2d] = param_4[0x2d] + 1;
        *(int *)((longlong)param_4 + 0x34) = iVar7 + 1;
      }
    }
    return 1;
  }
  *(longlong *)(param_1 + 0x168) = *(longlong *)(param_1 + 0x168) + 1;
  *(int *)(param_1 + 0x34) = (int)in_R10 + 1;
  return 0xffffffff;
}



uint64_t FUN_180830262(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong unaff_RBX;
  int unaff_ESI;
  uint unaff_EDI;
  uint uVar4;
  longlong *in_R9;
  int in_R10D;
  longlong *in_R11;
  
  if ((in_R11 != (longlong *)0x0) || (unaff_ESI != 0)) {
    uVar4 = unaff_EDI & 0xff;
    uVar3 = unaff_EDI & 0x200;
    uVar2 = uVar4;
    while (uVar2 == 0xff) {
      puVar1 = (uint *)(unaff_RBX + 4);
      unaff_RBX = unaff_RBX + 4;
      in_R10D = in_R10D + 1;
      uVar2 = *puVar1 & 0xff;
      if ((*puVar1 & 0x200) != 0) {
        uVar3 = 0x200;
      }
      uVar4 = uVar4 + uVar2;
    }
    if (in_R11 != (longlong *)0x0) {
      *(uint *)(in_R11 + 2) = uVar3;
      *(uint *)((longlong)in_R11 + 0xc) = unaff_EDI & 0x100;
      *in_R11 = (longlong)(int)in_R9[2] + *in_R9;
      in_R11[4] = in_R9[0x2d];
      in_R11[3] = *(longlong *)(in_R9[4] + (longlong)in_R10D * 8);
      *(uint *)(in_R11 + 1) = uVar4;
    }
    if (unaff_ESI != 0) {
      *(uint *)(in_R9 + 2) = (int)in_R9[2] + uVar4;
      in_R9[0x2d] = in_R9[0x2d] + 1;
      *(int *)((longlong)in_R9 + 0x34) = in_R10D + 1;
    }
  }
  return 1;
}



uint64_t FUN_180830275(uint64_t param_1,uint param_2,int param_3,longlong *param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong unaff_RBX;
  int unaff_ESI;
  uint unaff_EDI;
  int in_R10D;
  longlong *in_R11;
  
  param_2 = param_2 & 0x200;
  if (param_3 == 0xff) {
    do {
      puVar1 = (uint *)(unaff_RBX + 4);
      unaff_RBX = unaff_RBX + 4;
      in_R10D = in_R10D + 1;
      uVar2 = *puVar1 & 0xff;
      if ((*puVar1 & 0x200) != 0) {
        param_2 = 0x200;
      }
      param_3 = param_3 + uVar2;
    } while (uVar2 == 0xff);
  }
  if (in_R11 != (longlong *)0x0) {
    *(uint *)(in_R11 + 2) = param_2;
    *(uint *)((longlong)in_R11 + 0xc) = unaff_EDI & 0x100;
    *in_R11 = (longlong)(int)param_4[2] + *param_4;
    in_R11[4] = param_4[0x2d];
    in_R11[3] = *(longlong *)(param_4[4] + (longlong)in_R10D * 8);
    *(int *)(in_R11 + 1) = param_3;
  }
  if (unaff_ESI != 0) {
    *(int *)(param_4 + 2) = (int)param_4[2] + param_3;
    param_4[0x2d] = param_4[0x2d] + 1;
    *(int *)((longlong)param_4 + 0x34) = in_R10D + 1;
  }
  return 1;
}



uint64_t FUN_1808302b7(uint64_t param_1,int32_t param_2,int param_3,longlong *param_4)

{
  int unaff_ESI;
  int32_t unaff_EDI;
  int in_R10D;
  longlong *in_R11;
  
  *(int32_t *)(in_R11 + 2) = param_2;
  *(int32_t *)((longlong)in_R11 + 0xc) = unaff_EDI;
  *in_R11 = (longlong)(int)param_4[2] + *param_4;
  in_R11[4] = param_4[0x2d];
  in_R11[3] = *(longlong *)(param_4[4] + (longlong)in_R10D * 8);
  *(int *)(in_R11 + 1) = param_3;
  if (unaff_ESI != 0) {
    *(int *)(param_4 + 2) = (int)param_4[2] + param_3;
    param_4[0x2d] = param_4[0x2d] + 1;
    *(int *)((longlong)param_4 + 0x34) = in_R10D + 1;
  }
  return 1;
}



int FUN_180830310(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(uint64_t **)(param_2 + 0x70) != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1,**(uint64_t **)(param_2 + 0x70));
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    lVar1 = FUN_1807c4260(param_1,*(uint64_t *)(param_2 + 0x58),
                          *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68));
    *(longlong *)(param_2 + 0x58) = lVar1;
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68);
    *(int32_t *)(param_2 + 0x68) = 0;
    iVar2 = -0x8b;
    if (lVar1 != 0) {
      iVar2 = 0;
    }
  }
  *(int32_t *)(param_2 + 0x60) = 0;
  *(uint64_t *)(param_2 + 0x70) = 0;
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1);
  }
                    // WARNING: Subroutine does not return
  memset(param_2,0,0x88);
}



int FUN_180830319(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(uint64_t **)(param_2 + 0x70) != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1,**(uint64_t **)(param_2 + 0x70));
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    lVar1 = FUN_1807c4260(param_1,*(uint64_t *)(param_2 + 0x58),
                          *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68));
    *(longlong *)(param_2 + 0x58) = lVar1;
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + *(int *)(param_2 + 0x68);
    *(int32_t *)(param_2 + 0x68) = 0;
    iVar2 = -0x8b;
    if (lVar1 != 0) {
      iVar2 = 0;
    }
  }
  *(int32_t *)(param_2 + 0x60) = 0;
  *(uint64_t *)(param_2 + 0x70) = 0;
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(longlong *)(param_2 + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    FUN_1807c41d0(param_1);
  }
                    // WARNING: Subroutine does not return
  memset(param_2,0,0x88);
}







