#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part066.c - 12 个函数

// 函数: void FUN_1805b5330(longlong param_1,double param_2,longlong param_3,ulonglong param_4)
void FUN_1805b5330(longlong param_1,double param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  ushort uVar2;
  int *piVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int32_t uVar15;
  double dVar16;
  int32_t uVar17;
  ulonglong uStackX_8;
  longlong alStack_98 [12];
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    uVar14 = 0;
    uVar15 = 0;
    uVar17 = 0x408f4000;
    param_4 = param_4 & 0xffff;
    uStackX_8 = param_4;
    if (param_4 != 0) {
      lVar8 = 0;
      do {
        if ((uint)(*(longlong *)(param_1 + 0x5830) - *(longlong *)(param_1 + 0x5828) >> 3) <=
            (uint)uVar14) break;
        piVar3 = *(int **)(*(longlong *)(param_1 + 0x5828) + uVar14 * 8);
        iVar9 = *(int *)(param_3 + lVar8 * 8);
        iVar11 = *piVar3;
        if ((iVar9 < iVar11) ||
           ((iVar9 == iVar11 && (*(int *)(param_3 + 4 + lVar8 * 8) < piVar3[1])))) {
LAB_1805b54dc:
          lVar8 = lVar8 + 1;
        }
        else {
          if ((iVar9 <= iVar11) &&
             ((iVar9 != iVar11 || (*(int *)(param_3 + 4 + lVar8 * 8) <= piVar3[1])))) {
            if ((*(longlong *)(param_1 + 0x5948) - *(longlong *)(param_1 + 0x5940) >> 5 != 0) &&
               (iVar9 = 0, 0 < piVar3[5])) {
              piVar10 = piVar3 + 6;
              do {
                func_0x0001805b3aa0(param_1 + 0x5940,(short)*piVar10);
                iVar9 = iVar9 + 1;
                piVar10 = (int *)((longlong)piVar10 + 2);
                param_4 = uStackX_8;
              } while (iVar9 < piVar3[5]);
            }
            FUN_18055c030(param_1 + 0x5888,piVar3);
            dVar16 = param_2 - *(double *)(piVar3 + 2);
            lVar6 = *(longlong *)(param_1 + 0x5828) + uVar14 * 8;
            alStack_98[0] = *(longlong *)(*(longlong *)(param_1 + 0x5828) + uVar14 * 8);
            lVar1 = lVar6 + 8;
            if (dVar16 <= 0.001) {
              dVar16 = 0.001;
            }
            if ((double)CONCAT44(uVar17,uVar15) <= dVar16) {
              dVar16 = (double)CONCAT44(uVar17,uVar15);
            }
            uVar15 = SUB84(dVar16,0);
            uVar17 = (int32_t)((ulonglong)dVar16 >> 0x20);
            if (lVar6 != lVar1) {
              lVar4 = *(longlong *)(param_1 + 0x5830);
              if (lVar1 != lVar4) {
                    // WARNING: Subroutine does not return
                memmove(lVar6,lVar1,lVar4 - lVar1);
              }
              *(longlong *)(param_1 + 0x5830) = lVar4 + -8;
            }
            FUN_18005ea90(param_1 + 0x5808);
            goto LAB_1805b54dc;
          }
          uVar14 = (ulonglong)((uint)uVar14 + 1);
        }
      } while (lVar8 < (longlong)param_4);
    }
    lVar8 = system_system_data_config;
    if (system_system_data_config == 0) {
      QueryPerformanceCounter(alStack_98);
      lVar8 = alStack_98[0];
    }
    uVar14 = uStackX_8;
    iVar12 = 0;
    iVar11 = 0;
    iVar9 = 0;
    uVar13 = *(longlong *)(param_1 + 0x5898) - *(longlong *)(param_1 + 0x5890) >> 5;
    if (uVar13 != 0) {
      pcVar5 = (char *)(*(longlong *)(param_1 + 0x5890) + 0x1c);
      do {
        if ((*(double *)(pcVar5 + -0x14) + 1.0 < (double)(lVar8 - system_system_data_config) * system_system_data_config)
           && (iVar11 = iVar11 + 1, *pcVar5 != '\0')) {
          iVar12 = iVar12 + 1;
        }
        iVar9 = iVar9 + 1;
        pcVar5 = pcVar5 + 0x20;
      } while ((ulonglong)(longlong)iVar9 < uVar13);
    }
    if (iVar11 < 1) {
      dVar16 = 0.0;
    }
    else {
      dVar16 = (double)iVar12 / (double)iVar11;
    }
    *(double *)(param_1 + 0x58c0) = dVar16;
    if ((double)CONCAT44(uVar17,uVar15) < 900.0) {
      *(double *)(param_1 + 0x58e8) =
           *(double *)(param_1 + 0x58e8) * 0.8 + (double)CONCAT44(uVar17,uVar15) * 200.0;
    }
    uVar13 = 0;
    *(double *)(param_1 + 0x58e0) = dVar16;
    if (param_4 != 0) {
      lVar8 = 0;
      do {
        if ((uint)(*(longlong *)(param_1 + 0x5870) - *(longlong *)(param_1 + 0x5868) >> 3) <=
            (uint)uVar13) {
          return;
        }
        piVar3 = *(int **)(*(longlong *)(param_1 + 0x5868) + uVar13 * 8);
        iVar9 = *(int *)(param_3 + lVar8 * 8);
        iVar11 = *piVar3;
        if ((iVar9 < iVar11) ||
           ((iVar9 == iVar11 && (*(int *)(param_3 + 4 + lVar8 * 8) < piVar3[1])))) {
LAB_1805b57d1:
          lVar8 = lVar8 + 1;
        }
        else {
          if ((iVar9 <= iVar11) &&
             ((iVar9 != iVar11 || (*(int *)(param_3 + 4 + lVar8 * 8) <= piVar3[1])))) {
            if ((*(longlong *)(param_1 + 0x5948) - *(longlong *)(param_1 + 0x5940) >> 5 != 0) &&
               (iVar9 = 0, 0 < piVar3[5])) {
              puVar7 = (ushort *)(piVar3 + 6);
              do {
                uVar2 = *puVar7;
                lVar1 = *(longlong *)(param_1 + 0x5940);
                iVar12 = *piVar3;
                lVar6 = (ulonglong)uVar2 * 0x20;
                iVar11 = *(int *)(lVar6 + 0x14 + lVar1);
                if ((iVar11 < iVar12) ||
                   ((iVar12 == iVar11 && (*(int *)(lVar6 + 0x18 + lVar1) < piVar3[1])))) {
                  if ((*(char *)(lVar6 + 8 + lVar1) != '\0') &&
                     ((*(int *)(lVar6 + 0xc + lVar1) == iVar12 &&
                      (*(int *)(lVar6 + 0x10 + lVar1) == piVar3[1])))) {
                    *(int8_t *)(lVar6 + 9 + lVar1) = 1;
                  }
                  *(uint64_t *)(lVar6 + 0x14 + lVar1) = *(uint64_t *)piVar3;
                  if (*(char *)(lVar6 + 9 + lVar1) != '\0') {
                    *(ushort *)(*(longlong *)(param_1 + 0x5960) + 4 + (ulonglong)(uVar2 >> 4) * 8) =
                         *(ushort *)
                          (*(longlong *)(param_1 + 0x5960) + 4 + (ulonglong)(uVar2 >> 4) * 8) &
                         ~(ushort)(1 << (uVar2 & 0xf));
                  }
                }
                iVar9 = iVar9 + 1;
                puVar7 = puVar7 + 1;
              } while (iVar9 < piVar3[5]);
            }
            dVar16 = param_2 - *(double *)(piVar3 + 2);
            if (dVar16 <= 0.001) {
              dVar16 = 0.001;
            }
            dVar16 = ((dVar16 + 0.016666666666666666) - *(double *)(param_1 + 0x58b8)) * 0.05 +
                     *(double *)(param_1 + 0x58b8);
            *(double *)(param_1 + 0x58b8) = dVar16;
            if (1.0 < dVar16) {
              *(uint64_t *)(param_1 + 0x58b8) = 0x3ff0000000000000;
            }
            lVar6 = *(longlong *)(param_1 + 0x5868) + uVar13 * 8;
            uStackX_8 = *(ulonglong *)(*(longlong *)(param_1 + 0x5868) + uVar13 * 8);
            lVar1 = lVar6 + 8;
            if (lVar6 != lVar1) {
              lVar4 = *(longlong *)(param_1 + 0x5870);
              if (lVar1 != lVar4) {
                    // WARNING: Subroutine does not return
                memmove(lVar6,lVar1,lVar4 - lVar1);
              }
              *(longlong *)(param_1 + 0x5870) = lVar4 + -8;
            }
            FUN_18005ea90(param_1 + 0x5848,&uStackX_8);
            goto LAB_1805b57d1;
          }
          uVar13 = (ulonglong)((uint)uVar13 + 1);
        }
      } while (lVar8 < (longlong)uVar14);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b535b(void)
void FUN_1805b535b(void)

{
  longlong lVar1;
  ushort uVar2;
  int *piVar3;
  longlong lVar4;
  longlong in_RAX;
  char *pcVar5;
  longlong lVar6;
  uint64_t unaff_RBX;
  ushort *puVar7;
  uint64_t unaff_RBP;
  longlong lVar8;
  int iVar9;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int *piVar10;
  int iVar11;
  int iVar12;
  ulonglong in_R9;
  ulonglong uVar13;
  uint64_t unaff_R12;
  ulonglong uVar14;
  uint64_t unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  int32_t uVar15;
  double dVar16;
  int32_t uVar17;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  longlong lStackX_20;
  ulonglong uStack00000000000000c0;
  longlong in_stack_000000d0;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R12;
  uVar14 = 0;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R13;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM6_Dd;
  uVar15 = 0;
  uVar17 = 0x408f4000;
  in_R9 = in_R9 & 0xffff;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM7_Dd;
  uStack00000000000000c0 = in_R9;
  if (in_R9 != 0) {
    lVar8 = 0;
    do {
      if ((uint)(*(longlong *)(unaff_R15 + 0x5830) - *(longlong *)(unaff_R15 + 0x5828) >> 3) <=
          (uint)uVar14) break;
      piVar3 = *(int **)(*(longlong *)(unaff_R15 + 0x5828) + uVar14 * 8);
      iVar9 = *(int *)(unaff_R14 + lVar8 * 8);
      iVar11 = *piVar3;
      if ((iVar9 < iVar11) ||
         ((iVar9 == iVar11 && (*(int *)(unaff_R14 + 4 + lVar8 * 8) < piVar3[1])))) {
LAB_1805b54dc:
        lVar8 = lVar8 + 1;
      }
      else {
        if ((iVar9 <= iVar11) &&
           ((iVar9 != iVar11 || (*(int *)(unaff_R14 + 4 + lVar8 * 8) <= piVar3[1])))) {
          if ((*(longlong *)(unaff_R15 + 0x5948) - *(longlong *)(unaff_R15 + 0x5940) >> 5 != 0) &&
             (iVar9 = 0, 0 < piVar3[5])) {
            piVar10 = piVar3 + 6;
            do {
              func_0x0001805b3aa0(unaff_R15 + 0x5940,(short)*piVar10);
              iVar9 = iVar9 + 1;
              piVar10 = (int *)((longlong)piVar10 + 2);
              in_R9 = uStack00000000000000c0;
            } while (iVar9 < piVar3[5]);
          }
          FUN_18055c030(unaff_R15 + 0x5888,piVar3);
          dVar16 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) - *(double *)(piVar3 + 2);
          lVar6 = *(longlong *)(unaff_R15 + 0x5828) + uVar14 * 8;
          lStackX_20 = *(longlong *)(*(longlong *)(unaff_R15 + 0x5828) + uVar14 * 8);
          lVar1 = lVar6 + 8;
          if (dVar16 <= 0.001) {
            dVar16 = 0.001;
          }
          if ((double)CONCAT44(uVar17,uVar15) <= dVar16) {
            dVar16 = (double)CONCAT44(uVar17,uVar15);
          }
          uVar15 = SUB84(dVar16,0);
          uVar17 = (int32_t)((ulonglong)dVar16 >> 0x20);
          if (lVar6 != lVar1) {
            lVar4 = *(longlong *)(unaff_R15 + 0x5830);
            if (lVar1 != lVar4) {
                    // WARNING: Subroutine does not return
              memmove(lVar6,lVar1,lVar4 - lVar1);
            }
            *(longlong *)(unaff_R15 + 0x5830) = lVar4 + -8;
          }
          FUN_18005ea90(unaff_R15 + 0x5808);
          unaff_R14 = in_stack_000000d0;
          goto LAB_1805b54dc;
        }
        uVar14 = (ulonglong)((uint)uVar14 + 1);
      }
    } while (lVar8 < (longlong)in_R9);
  }
  lVar8 = system_system_data_config;
  if (system_system_data_config == 0) {
    QueryPerformanceCounter(&lStackX_20);
    lVar8 = lStackX_20;
  }
  uVar14 = uStack00000000000000c0;
  iVar12 = 0;
  iVar11 = 0;
  iVar9 = 0;
  uVar13 = *(longlong *)(unaff_R15 + 0x5898) - *(longlong *)(unaff_R15 + 0x5890) >> 5;
  if (uVar13 != 0) {
    pcVar5 = (char *)(*(longlong *)(unaff_R15 + 0x5890) + 0x1c);
    do {
      if ((*(double *)(pcVar5 + -0x14) + 1.0 < (double)(lVar8 - system_system_data_config) * system_system_data_config) &&
         (iVar11 = iVar11 + 1, *pcVar5 != '\0')) {
        iVar12 = iVar12 + 1;
      }
      iVar9 = iVar9 + 1;
      pcVar5 = pcVar5 + 0x20;
    } while ((ulonglong)(longlong)iVar9 < uVar13);
  }
  if (iVar11 < 1) {
    dVar16 = 0.0;
  }
  else {
    dVar16 = (double)iVar12 / (double)iVar11;
  }
  *(double *)(unaff_R15 + 0x58c0) = dVar16;
  if ((double)CONCAT44(uVar17,uVar15) < 900.0) {
    *(double *)(unaff_R15 + 0x58e8) =
         *(double *)(unaff_R15 + 0x58e8) * 0.8 + (double)CONCAT44(uVar17,uVar15) * 200.0;
  }
  uVar13 = 0;
  *(double *)(unaff_R15 + 0x58e0) = dVar16;
  if (in_R9 != 0) {
    lVar8 = 0;
    do {
      if ((uint)(*(longlong *)(unaff_R15 + 0x5870) - *(longlong *)(unaff_R15 + 0x5868) >> 3) <=
          (uint)uVar13) {
        return;
      }
      piVar3 = *(int **)(*(longlong *)(unaff_R15 + 0x5868) + uVar13 * 8);
      iVar9 = *(int *)(unaff_R14 + lVar8 * 8);
      iVar11 = *piVar3;
      if ((iVar9 < iVar11) ||
         ((iVar9 == iVar11 && (*(int *)(unaff_R14 + 4 + lVar8 * 8) < piVar3[1])))) {
LAB_1805b57d1:
        lVar8 = lVar8 + 1;
      }
      else {
        if ((iVar9 <= iVar11) &&
           ((iVar9 != iVar11 || (*(int *)(unaff_R14 + 4 + lVar8 * 8) <= piVar3[1])))) {
          if ((*(longlong *)(unaff_R15 + 0x5948) - *(longlong *)(unaff_R15 + 0x5940) >> 5 != 0) &&
             (iVar9 = 0, 0 < piVar3[5])) {
            puVar7 = (ushort *)(piVar3 + 6);
            do {
              uVar2 = *puVar7;
              lVar1 = *(longlong *)(unaff_R15 + 0x5940);
              iVar12 = *piVar3;
              lVar6 = (ulonglong)uVar2 * 0x20;
              iVar11 = *(int *)(lVar6 + 0x14 + lVar1);
              if ((iVar11 < iVar12) ||
                 ((iVar12 == iVar11 && (*(int *)(lVar6 + 0x18 + lVar1) < piVar3[1])))) {
                if ((*(char *)(lVar6 + 8 + lVar1) != '\0') &&
                   ((*(int *)(lVar6 + 0xc + lVar1) == iVar12 &&
                    (*(int *)(lVar6 + 0x10 + lVar1) == piVar3[1])))) {
                  *(int8_t *)(lVar6 + 9 + lVar1) = 1;
                }
                *(uint64_t *)(lVar6 + 0x14 + lVar1) = *(uint64_t *)piVar3;
                if (*(char *)(lVar6 + 9 + lVar1) != '\0') {
                  *(ushort *)(*(longlong *)(unaff_R15 + 0x5960) + 4 + (ulonglong)(uVar2 >> 4) * 8) =
                       *(ushort *)
                        (*(longlong *)(unaff_R15 + 0x5960) + 4 + (ulonglong)(uVar2 >> 4) * 8) &
                       ~(ushort)(1 << (uVar2 & 0xf));
                }
              }
              iVar9 = iVar9 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar9 < piVar3[5]);
          }
          dVar16 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) - *(double *)(piVar3 + 2);
          if (dVar16 <= 0.001) {
            dVar16 = 0.001;
          }
          dVar16 = ((dVar16 + 0.016666666666666666) - *(double *)(unaff_R15 + 0x58b8)) * 0.05 +
                   *(double *)(unaff_R15 + 0x58b8);
          *(double *)(unaff_R15 + 0x58b8) = dVar16;
          if (1.0 < dVar16) {
            *(uint64_t *)(unaff_R15 + 0x58b8) = 0x3ff0000000000000;
          }
          lVar6 = *(longlong *)(unaff_R15 + 0x5868) + uVar13 * 8;
          uStack00000000000000c0 = *(uint64_t *)(*(longlong *)(unaff_R15 + 0x5868) + uVar13 * 8);
          lVar1 = lVar6 + 8;
          if (lVar6 != lVar1) {
            lVar4 = *(longlong *)(unaff_R15 + 0x5870);
            if (lVar1 != lVar4) {
                    // WARNING: Subroutine does not return
              memmove(lVar6,lVar1,lVar4 - lVar1);
            }
            *(longlong *)(unaff_R15 + 0x5870) = lVar4 + -8;
          }
          FUN_18005ea90(unaff_R15 + 0x5848,&stack0x000000c0);
          goto LAB_1805b57d1;
        }
        uVar13 = (ulonglong)((uint)uVar13 + 1);
      }
    } while (lVar8 < (longlong)uVar14);
  }
  return;
}






// 函数: void FUN_1805b5609(void)
void FUN_1805b5609(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  int iVar9;
  longlong unaff_R12;
  uint64_t unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  double dVar10;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  uint64_t uStack00000000000000c0;
  
  do {
    if ((uint)(*(longlong *)(unaff_R15 + 0x5870) - *(longlong *)(unaff_R15 + 0x5868) >> 3) <=
        (uint)unaff_RSI) {
      return;
    }
    piVar4 = *(int **)(*(longlong *)(unaff_R15 + 0x5868) + unaff_RSI * 8);
    iVar9 = *(int *)(unaff_R14 + unaff_RDI * 8);
    iVar2 = *piVar4;
    if ((iVar9 < iVar2) ||
       ((iVar9 == iVar2 && (*(int *)(unaff_R14 + 4 + unaff_RDI * 8) < piVar4[1])))) {
LAB_1805b57d1:
      unaff_RDI = unaff_RDI + 1;
    }
    else {
      if ((iVar9 <= iVar2) &&
         ((iVar9 != iVar2 || (*(int *)(unaff_R14 + 4 + unaff_RDI * 8) <= piVar4[1])))) {
        if ((*(longlong *)(unaff_R15 + 0x5948) - *(longlong *)(unaff_R15 + 0x5940) >> 5 != 0) &&
           (iVar9 = 0, 0 < piVar4[5])) {
          puVar8 = (ushort *)(piVar4 + 6);
          do {
            uVar1 = *puVar8;
            lVar5 = *(longlong *)(unaff_R15 + 0x5940);
            iVar3 = *piVar4;
            lVar7 = (ulonglong)uVar1 * 0x20;
            iVar2 = *(int *)(lVar7 + 0x14 + lVar5);
            if ((iVar2 < iVar3) ||
               ((iVar3 == iVar2 && (*(int *)(lVar7 + 0x18 + lVar5) < piVar4[1])))) {
              if ((*(char *)(lVar7 + 8 + lVar5) != '\0') &&
                 ((*(int *)(lVar7 + 0xc + lVar5) == iVar3 &&
                  (*(int *)(lVar7 + 0x10 + lVar5) == piVar4[1])))) {
                *(int8_t *)(lVar7 + 9 + lVar5) = 1;
              }
              *(uint64_t *)(lVar7 + 0x14 + lVar5) = *(uint64_t *)piVar4;
              if (*(char *)(lVar7 + 9 + lVar5) != '\0') {
                *(ushort *)(*(longlong *)(unaff_R15 + 0x5960) + 4 + (ulonglong)(uVar1 >> 4) * 8) =
                     *(ushort *)
                      (*(longlong *)(unaff_R15 + 0x5960) + 4 + (ulonglong)(uVar1 >> 4) * 8) &
                     ~(ushort)(1 << (uVar1 & 0xf));
              }
            }
            iVar9 = iVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar9 < piVar4[5]);
        }
        dVar10 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) - *(double *)(piVar4 + 2);
        if (dVar10 <= (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da)) {
          dVar10 = (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
        }
        dVar10 = ((dVar10 + (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da)) -
                 *(double *)(unaff_R15 + 0x58b8)) * 0.05 + *(double *)(unaff_R15 + 0x58b8);
        *(double *)(unaff_R15 + 0x58b8) = dVar10;
        if ((double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) <= dVar10 &&
            dVar10 != (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da)) {
          *(uint64_t *)(unaff_R15 + 0x58b8) = unaff_R13;
        }
        lVar7 = *(longlong *)(unaff_R15 + 0x5868) + unaff_RSI * 8;
        uStack00000000000000c0 = *(uint64_t *)(*(longlong *)(unaff_R15 + 0x5868) + unaff_RSI * 8);
        lVar5 = lVar7 + 8;
        if (lVar7 != lVar5) {
          lVar6 = *(longlong *)(unaff_R15 + 0x5870);
          if (lVar5 != lVar6) {
                    // WARNING: Subroutine does not return
            memmove(lVar7,lVar5,lVar6 - lVar5);
          }
          *(longlong *)(unaff_R15 + 0x5870) = lVar6 + -8;
        }
        FUN_18005ea90(unaff_R15 + 0x5848,&stack0x000000c0);
        goto LAB_1805b57d1;
      }
      unaff_RSI = (ulonglong)((uint)unaff_RSI + 1);
    }
    if (unaff_R12 <= unaff_RDI) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1805b57e3(void)
void FUN_1805b57e3(void)

{
  return;
}






// 函数: void FUN_1805b5823(void)
void FUN_1805b5823(void)

{
  return;
}






// 函数: void FUN_1805b5835(void)
void FUN_1805b5835(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  uint uVar9;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  int iVar10;
  longlong unaff_R12;
  uint64_t unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  double dVar11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  uint64_t uStack00000000000000c0;
  
code_r0x0001805b5835:
  uVar9 = (int)unaff_RSI + 1;
  unaff_RSI = (ulonglong)uVar9;
  do {
    if ((unaff_R12 <= unaff_RDI) ||
       ((uint)(*(longlong *)(unaff_R15 + 0x5870) - *(longlong *)(unaff_R15 + 0x5868) >> 3) <= uVar9)
       ) {
      return;
    }
    piVar4 = *(int **)(*(longlong *)(unaff_R15 + 0x5868) + unaff_RSI * 8);
    iVar10 = *(int *)(unaff_R14 + unaff_RDI * 8);
    iVar2 = *piVar4;
    if ((iVar2 <= iVar10) &&
       ((iVar10 != iVar2 || (piVar4[1] <= *(int *)(unaff_R14 + 4 + unaff_RDI * 8))))) {
      if ((iVar2 < iVar10) ||
         ((iVar10 == iVar2 && (piVar4[1] < *(int *)(unaff_R14 + 4 + unaff_RDI * 8)))))
      goto code_r0x0001805b5835;
      if ((*(longlong *)(unaff_R15 + 0x5948) - *(longlong *)(unaff_R15 + 0x5940) >> 5 != 0) &&
         (iVar10 = 0, 0 < piVar4[5])) {
        puVar8 = (ushort *)(piVar4 + 6);
        do {
          uVar1 = *puVar8;
          lVar5 = *(longlong *)(unaff_R15 + 0x5940);
          iVar3 = *piVar4;
          lVar7 = (ulonglong)uVar1 * 0x20;
          iVar2 = *(int *)(lVar7 + 0x14 + lVar5);
          if ((iVar2 < iVar3) || ((iVar3 == iVar2 && (*(int *)(lVar7 + 0x18 + lVar5) < piVar4[1]))))
          {
            if ((*(char *)(lVar7 + 8 + lVar5) != '\0') &&
               ((*(int *)(lVar7 + 0xc + lVar5) == iVar3 &&
                (*(int *)(lVar7 + 0x10 + lVar5) == piVar4[1])))) {
              *(int8_t *)(lVar7 + 9 + lVar5) = 1;
            }
            *(uint64_t *)(lVar7 + 0x14 + lVar5) = *(uint64_t *)piVar4;
            if (*(char *)(lVar7 + 9 + lVar5) != '\0') {
              *(ushort *)(*(longlong *)(unaff_R15 + 0x5960) + 4 + (ulonglong)(uVar1 >> 4) * 8) =
                   *(ushort *)(*(longlong *)(unaff_R15 + 0x5960) + 4 + (ulonglong)(uVar1 >> 4) * 8)
                   & ~(ushort)(1 << (uVar1 & 0xf));
            }
          }
          iVar10 = iVar10 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar10 < piVar4[5]);
      }
      dVar11 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) - *(double *)(piVar4 + 2);
      if (dVar11 <= (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da)) {
        dVar11 = (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
      }
      dVar11 = ((dVar11 + (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da)) -
               *(double *)(unaff_R15 + 0x58b8)) * (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da) +
               *(double *)(unaff_R15 + 0x58b8);
      *(double *)(unaff_R15 + 0x58b8) = dVar11;
      if ((double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) <= dVar11 &&
          dVar11 != (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da)) {
        *(uint64_t *)(unaff_R15 + 0x58b8) = unaff_R13;
      }
      lVar7 = *(longlong *)(unaff_R15 + 0x5868) + unaff_RSI * 8;
      uStack00000000000000c0 = *(uint64_t *)(*(longlong *)(unaff_R15 + 0x5868) + unaff_RSI * 8);
      lVar5 = lVar7 + 8;
      if (lVar7 != lVar5) {
        lVar6 = *(longlong *)(unaff_R15 + 0x5870);
        if (lVar5 != lVar6) {
                    // WARNING: Subroutine does not return
          memmove(lVar7,lVar5,lVar6 - lVar5);
        }
        *(longlong *)(unaff_R15 + 0x5870) = lVar6 + -8;
      }
      FUN_18005ea90(unaff_R15 + 0x5848,&stack0x000000c0);
    }
    unaff_RDI = unaff_RDI + 1;
  } while( true );
}






// 函数: void FUN_1805b5840(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805b5840(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x31) == '\0') {
    iVar1 = _Mtx_lock(param_1 + 0x5990);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    iVar1 = _Mtx_lock(param_1 + 0x57b8);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    FUN_180618ce0(param_1 + 0x4bf8,param_2,param_3,param_4,uVar2);
    iVar1 = _Mtx_unlock(param_1 + 0x57b8);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    iVar1 = _Mtx_unlock(param_1 + 0x5990);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  return;
}



uint64_t FUN_1805b5900(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    return 0;
  }
  iVar1 = _Mtx_lock(param_1 + 0x5990);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_lock(param_1 + 0x57b8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(uint64_t *)(param_1 + 0x51dc) = 0;
                    // WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x51b0),0,(longlong)(*(int *)(param_1 + 0x51a8) >> 3));
}






// 函数: void FUN_1805b5950(longlong param_1)
void FUN_1805b5950(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    *(int32_t *)(param_1 + 0x51dc) = 0;
    FUN_180618ce0(param_1 + 0x4bf8,param_1 + 0x4c18);
    iVar1 = _Mtx_unlock(param_1 + 0x57b8);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    iVar1 = _Mtx_unlock(param_1 + 0x5990);
    if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805b59b7. Too many branches
                    // WARNING: Treating indirect jump as call
      __Throw_C_error_std__YAXH_Z(iVar1);
      return;
    }
  }
  return;
}






// 函数: void FUN_1805b5977(void)
void FUN_1805b5977(void)

{
  int iVar1;
  longlong unaff_RDI;
  
  FUN_180618ce0();
  iVar1 = _Mtx_unlock(unaff_RDI + 0x57b8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_unlock(unaff_RDI + 0x5990);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805b59b7. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}






// 函数: void FUN_1805b5997(void)
void FUN_1805b5997(void)

{
  int32_t in_EAX;
  int iVar1;
  longlong unaff_RDI;
  
  __Throw_C_error_std__YAXH_Z(in_EAX);
  iVar1 = _Mtx_unlock(unaff_RDI + 0x5990);
  if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805b59b7. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar1);
    return;
  }
  return;
}






// 函数: void FUN_1805b59d0(longlong param_1,longlong param_2)
void FUN_1805b59d0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    iVar1 = _Mtx_lock(param_1 + 0x5990);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    iVar1 = *(int *)(param_2 + 0x5c8);
    iVar2 = _Mtx_lock(param_1 + 0x4ba8);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x4ba0) * 8 + -0x21 <= *(int *)(lVar3 + 0x5c8) + iVar1) {
      FUN_1805fa870(param_1 + 0x50);
      *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + -8) + 0x5c4) = 0;
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    *(int32_t *)(param_1 + 0x78) = *(int32_t *)(lVar3 + 0x5c8);
    FUN_180646200(lVar3,param_2,*(int32_t *)(param_2 + 0x5c8));
    FUN_1805faa20(param_1 + 0x50);
    iVar1 = _Mtx_unlock(param_1 + 0x5990);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  return;
}



longlong FUN_1805b5ad0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    return 0;
  }
  iVar1 = _Mtx_lock(param_1 + 0x5990);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  iVar1 = _Mtx_lock(param_1 + 0x4ba8);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x4ba0) * 8 + -0x21 <= *(int *)(lVar2 + 0x5c8) + 0x28) {
    FUN_1805fa870(param_1 + 0x50);
    *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + -8) + 0x5c4) = 0;
    lVar2 = *(longlong *)(param_1 + 0x70);
  }
  *(int32_t *)(param_1 + 0x78) = *(int32_t *)(lVar2 + 0x5c8);
  return lVar2;
}






// 函数: void FUN_1805b5b20(longlong param_1)
void FUN_1805b5b20(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    FUN_1805faa20(param_1 + 0x50);
    iVar1 = _Mtx_unlock(param_1 + 0x5990);
    if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805b5b50. Too many branches
                    // WARNING: Treating indirect jump as call
      __Throw_C_error_std__YAXH_Z(iVar1);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




