#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part601.c - 7 个函数

// 函数: void FUN_180598f80(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
void FUN_180598f80(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
                  char param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint64_t *puVar5;
  longlong lVar6;
  bool bVar7;
  uint64_t *puVar8;
  char cVar9;
  uint64_t *puVar10;
  int *piVar11;
  float fVar12;
  int32_t uVar13;
  float fVar14;
  float fVar15;
  int iStackX_8;
  
  FUN_180598210();
  if ((system_status_flag == 1) || (system_status_flag == 4)) {
    bVar7 = true;
    if (*(int *)(param_4 + 0x178) != 2) goto LAB_180599164;
  }
  else {
    bVar7 = false;
  }
  if ((*(uint *)(param_4 + 0x24) >> 0xb & 1) != 0) {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      if ((((((*(uint *)(param_4 + 0xc0) >> 0xd & 1) != 0) &&
            ((*(uint *)(param_4 + 0x24) >> 0xf & 1) != 0)) && (*(char *)(param_4 + 0x98) == '\0'))
          && ((((*(uint *)(param_4 + 0xb4) & 0x3c0) == 0 &&
               ((*(uint *)(param_4 + 0xc0) & 0x800b) == 0)) &&
              ((*(int *)(param_4 + 0x28) == 0 &&
               ((4 < *(int *)(param_4 + 0x7c) - 0x12U &&
                (((*(ulonglong *)(param_4 + 0x68) | *(ulonglong *)(param_4 + 0x60)) & 0x3000000000)
                 == 0)))))))) &&
         ((*(int *)(param_4 + 0xac) == -1 &&
          ((*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
            *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
            *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c) <= 0.0036 ||
           (((*(uint *)(param_4 + 0xb4) & 0x7c00) == 0 &&
            ((*(uint *)(param_4 + 0xdc) & 0x2000) == 0)))))))) {
        uVar1 = *(uint *)(param_1 + 8);
        *(uint *)(param_1 + 8) = uVar1 | 0x10;
        if (!bVar7) {
          *(uint *)(param_1 + 8) = uVar1 | 0x410;
        }
      }
    }
    else if (((((*(uint *)(param_4 + 0xb4) & 0x3c0) != 0) ||
              ((*(uint *)(param_4 + 0xc0) & 0xc00b) != 0)) || (*(int *)(param_4 + 0x28) != 0)) ||
            (((*(int *)(param_4 + 0x7c) - 0x12U < 5 ||
              (((*(ulonglong *)(param_4 + 0x68) | *(ulonglong *)(param_4 + 0x60)) & 0x3000000000) !=
               0)) || ((*(int *)(param_4 + 0xac) != -1 ||
                       ((0.0036 < *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                                  *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                                  *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c) &&
                        (((*(uint *)(param_4 + 0xb4) & 0x7c00) != 0 ||
                         ((*(uint *)(param_4 + 0xdc) & 0x2000) != 0)))))))))) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffef;
    }
    if ((*(uint *)(param_4 + 0xc0) >> 0xb & 1) == 0) {
      if ((*(uint *)(param_4 + 0xc0) >> 0xc & 1) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffb;
      }
    }
    else {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
    }
  }
LAB_180599164:
  if (((((*(byte *)(param_1 + 0x40) & 3) != 1) ||
       (fVar14 = 0.0, *(float *)(param_1 + 0x44) <= 0.0 && *(float *)(param_1 + 0x44) != 0.0)) ||
      (*(int *)(param_4 + 0x28) != 0)) ||
     ((0x21 < *(int *)(param_4 + 0x90) ||
      (((*(uint *)(param_4 + 0x68) | *(uint *)(param_4 + 0x60)) >> 0x18 & 1) != 0)))) {
    *(int32_t *)(param_1 + 0x148) = 0xccbebc20;
  }
  else {
    cVar9 = func_0x00018057c520(param_1 + 0xa0,*(uint *)(param_4 + 0x24) >> 8 & 0xffffff01);
    if ((*(uint *)(param_4 + 0x24) & 0x800) == 0) {
      if ((((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) &&
         (*(int *)(param_4 + 0x178) != 2)) {
        fVar15 = 0.9;
      }
      else {
        fVar15 = 1.0;
      }
      if (((((*(byte *)(param_4 + 0xc0) & 8) != 0) && (cVar9 != '\0')) &&
          (fVar14 < *(float *)(param_1 + 0x144))) &&
         ((fVar15 * *(float *)(param_4 + 0x16c) < *(float *)(param_1 + 0x20) &&
          ((system_status_flag - 2U < 2 || (3 < *(int *)(param_4 + 0x78) - 0x18U)))))) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x4000;
        if ((*(int *)(param_4 + 0x17c) == 2) ||
           (((system_status_flag - 2U & 0xfffffffc) != 0 || (system_status_flag == 4)))) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (*(int *)(param_4 + 0x14c) < 5) {
          if (bVar7) {
            uVar13 = 0xbfcccccd;
          }
          else {
            uVar13 = 0xbfb33333;
          }
        }
        else if (bVar7) {
          uVar13 = 0xc0266666;
        }
        else {
          uVar13 = 0xc019999a;
        }
        *(int32_t *)(param_1 + 0x144) = uVar13;
        *(int32_t *)(param_1 + 0x148) = 0xbecccccd;
      }
      if ((fVar14 < *(float *)(param_1 + 0x148)) &&
         (*(int32_t *)(param_1 + 0x148) = 0xccbebc20, *(int *)(param_4 + 0x78) == 0x18)) {
        iVar2 = *(int *)(param_4 + 0x70);
        puVar5 = *(uint64_t **)(*(longlong *)(param_4 + 0x58) + 0xf0);
        piVar11 = (int *)*puVar5;
        puVar10 = puVar5;
        if (piVar11 == (int *)0x0) {
          piVar11 = (int *)puVar5[1];
          puVar8 = puVar5;
          while (puVar10 = puVar8 + 1, piVar11 == (int *)0x0) {
            piVar11 = (int *)puVar8[2];
            puVar8 = puVar10;
          }
        }
        while (piVar11 != (int *)puVar5[*(longlong *)(*(longlong *)(param_4 + 0x58) + 0xf8)]) {
          iVar3 = piVar11[1];
          if ((iVar2 == iVar3) ||
             (((((longlong)iVar2 != -1 && (iVar3 != -1)) &&
               (lVar6 = *(longlong *)
                         ((longlong)*(int *)(param_4 + 0x94) * 0xe0 + render_system_config + 0x78),
               iVar4 = *(int *)(lVar6 + 4 + (longlong)iVar2 * 8),
               iVar4 == *(int *)(lVar6 + 4 + (longlong)iVar3 * 8))) && (iVar4 != -1)))) {
            iStackX_8 = (*piVar11 >> 1 & 7U) - 1;
            break;
          }
          piVar11 = *(int **)(piVar11 + 2);
          while (piVar11 == (int *)0x0) {
            puVar8 = puVar10 + 1;
            puVar10 = puVar10 + 1;
            piVar11 = (int *)*puVar8;
          }
        }
        fVar14 = SQRT((float)*(int *)(param_4 + 0x154) / *(float *)(param_4 + 0x158)) *
                 *(float *)(param_4 + 0x15c) * *(float *)(param_4 + 0x150);
        if (iStackX_8 == 2) {
          fVar14 = fVar14 * 0.8;
        }
        *(float *)(param_1 + 0x118) = fVar14 + *(float *)(param_1 + 0x118);
        *(int32_t *)(param_1 + 0x154) = 0xbecccccd;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
      }
    }
    else {
      if ((((*(char *)(param_4 + 0x98) == '\0') && ((*(byte *)(param_4 + 0xc0) & 8) != 0)) &&
          ((cVar9 != '\0' &&
           (fVar14 < *(float *)(param_1 + 0x144) || fVar14 == *(float *)(param_1 + 0x144))))) &&
         ((system_status_flag - 2U < 2 || (3 < *(int *)(param_4 + 0x78) - 0x18U)))) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x4000;
        if (((system_status_flag - 2U & 0xfffffffc) != 0) ||
           ((system_status_flag == 4 || (fVar15 = fVar14, *(int *)(param_4 + 0x178) == 2)))) {
          fVar15 = 0.2;
        }
        fVar12 = -render_system_config;
        *(int32_t *)(param_1 + 0x148) = 0xbe19999a;
        *(float *)(param_1 + 0x144) = fVar12 - fVar15;
      }
      if (fVar14 < *(float *)(param_1 + 0x148)) {
        *(int32_t *)(param_1 + 0x148) = 0xccbebc20;
        *(int32_t *)(param_1 + 0x154) = 0xbecccccd;
        if (*(int *)(param_4 + 0x78) - 0x18U < 4) {
          *(int32_t *)(param_1 + 0x2c) = 0;
          if (*(char *)(param_4 + 0x9b) != '\0') {
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
          if (*(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c) +
              *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) < 4.0) {
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
          fVar14 = *(float *)(param_4 + 0x158);
          iVar2 = *(int *)(param_4 + 0x154);
          fVar15 = *(float *)(param_4 + 0x15c);
          fVar12 = *(float *)(param_4 + 0x150);
          *(float *)(param_1 + 0x114) = *(float *)(param_1 + 0x114) + 0.0;
          *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x110) + 0.0;
          *(float *)(param_1 + 0x118) =
               SQRT((float)iVar2 / fVar14) * fVar12 * fVar15 + *(float *)(param_1 + 0x118);
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
        }
      }
    }
  }
  if ((((*(byte *)(param_4 + 0xc0) & 8) != 0) && ((*(uint *)(param_1 + 8) >> 0xe & 1) == 0)) &&
     (param_5 == '\0')) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x4000000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180598f8a(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_180598f8a(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint64_t *puVar5;
  longlong lVar6;
  bool bVar7;
  uint64_t *puVar8;
  char cVar9;
  int iVar10;
  uint64_t *puVar11;
  longlong unaff_RBP;
  int *piVar12;
  float fVar13;
  int32_t uVar14;
  float fVar15;
  float fVar16;
  
  FUN_180598210();
  if ((system_status_flag == 1) || (system_status_flag == 4)) {
    bVar7 = true;
    if (*(int *)(param_4 + 0x178) != 2) goto LAB_180599164;
  }
  else {
    bVar7 = false;
  }
  if ((*(uint *)(param_4 + 0x24) >> 0xb & 1) != 0) {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      if ((((((*(uint *)(param_4 + 0xc0) >> 0xd & 1) != 0) &&
            ((*(uint *)(param_4 + 0x24) >> 0xf & 1) != 0)) && (*(char *)(param_4 + 0x98) == '\0'))
          && ((((*(uint *)(param_4 + 0xb4) & 0x3c0) == 0 &&
               ((*(uint *)(param_4 + 0xc0) & 0x800b) == 0)) &&
              ((*(int *)(param_4 + 0x28) == 0 &&
               ((4 < *(int *)(param_4 + 0x7c) - 0x12U &&
                (((*(ulonglong *)(param_4 + 0x68) | *(ulonglong *)(param_4 + 0x60)) & 0x3000000000)
                 == 0)))))))) &&
         ((*(int *)(param_4 + 0xac) == -1 &&
          ((*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
            *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
            *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c) <= 0.0036 ||
           (((*(uint *)(param_4 + 0xb4) & 0x7c00) == 0 &&
            ((*(uint *)(param_4 + 0xdc) & 0x2000) == 0)))))))) {
        uVar2 = *(uint *)(param_1 + 8);
        *(uint *)(param_1 + 8) = uVar2 | 0x10;
        if (!bVar7) {
          *(uint *)(param_1 + 8) = uVar2 | 0x410;
        }
      }
    }
    else if (((((*(uint *)(param_4 + 0xb4) & 0x3c0) != 0) ||
              ((*(uint *)(param_4 + 0xc0) & 0xc00b) != 0)) || (*(int *)(param_4 + 0x28) != 0)) ||
            (((*(int *)(param_4 + 0x7c) - 0x12U < 5 ||
              (((*(ulonglong *)(param_4 + 0x68) | *(ulonglong *)(param_4 + 0x60)) & 0x3000000000) !=
               0)) || ((*(int *)(param_4 + 0xac) != -1 ||
                       ((0.0036 < *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                                  *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                                  *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c) &&
                        (((*(uint *)(param_4 + 0xb4) & 0x7c00) != 0 ||
                         ((*(uint *)(param_4 + 0xdc) & 0x2000) != 0)))))))))) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffef;
    }
    if ((*(uint *)(param_4 + 0xc0) >> 0xb & 1) == 0) {
      if ((*(uint *)(param_4 + 0xc0) >> 0xc & 1) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffb;
      }
    }
    else {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
    }
  }
LAB_180599164:
  if (((((*(byte *)(param_1 + 0x40) & 3) != 1) ||
       (fVar15 = 0.0, *(float *)(param_1 + 0x44) <= 0.0 && *(float *)(param_1 + 0x44) != 0.0)) ||
      (*(int *)(param_4 + 0x28) != 0)) ||
     ((0x21 < *(int *)(param_4 + 0x90) ||
      (((*(uint *)(param_4 + 0x68) | *(uint *)(param_4 + 0x60)) >> 0x18 & 1) != 0)))) {
    *(int32_t *)(param_1 + 0x148) = 0xccbebc20;
  }
  else {
    cVar9 = func_0x00018057c520(param_1 + 0xa0,*(uint *)(param_4 + 0x24) >> 8 & 0xffffff01);
    if ((*(uint *)(param_4 + 0x24) & 0x800) == 0) {
      if ((((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) &&
         (*(int *)(param_4 + 0x178) != 2)) {
        fVar16 = 0.9;
      }
      else {
        fVar16 = 1.0;
      }
      if (((((*(byte *)(param_4 + 0xc0) & 8) != 0) && (cVar9 != '\0')) &&
          (fVar15 < *(float *)(param_1 + 0x144))) &&
         ((fVar16 * *(float *)(param_4 + 0x16c) < *(float *)(param_1 + 0x20) &&
          ((system_status_flag - 2U < 2 || (3 < *(int *)(param_4 + 0x78) - 0x18U)))))) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x4000;
        if ((*(int *)(param_4 + 0x17c) == 2) ||
           (((system_status_flag - 2U & 0xfffffffc) != 0 || (system_status_flag == 4)))) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (*(int *)(param_4 + 0x14c) < 5) {
          if (bVar7) {
            uVar14 = 0xbfcccccd;
          }
          else {
            uVar14 = 0xbfb33333;
          }
        }
        else if (bVar7) {
          uVar14 = 0xc0266666;
        }
        else {
          uVar14 = 0xc019999a;
        }
        *(int32_t *)(param_1 + 0x144) = uVar14;
        *(int32_t *)(param_1 + 0x148) = 0xbecccccd;
      }
      if ((fVar15 < *(float *)(param_1 + 0x148)) &&
         (*(int32_t *)(param_1 + 0x148) = 0xccbebc20, *(int *)(param_4 + 0x78) == 0x18)) {
        iVar10 = *(int *)(param_4 + 0x70);
        puVar5 = *(uint64_t **)(*(longlong *)(param_4 + 0x58) + 0xf0);
        piVar12 = (int *)*puVar5;
        puVar11 = puVar5;
        if (piVar12 == (int *)0x0) {
          piVar12 = (int *)puVar5[1];
          puVar8 = puVar5;
          while (puVar11 = puVar8 + 1, piVar12 == (int *)0x0) {
            piVar12 = (int *)puVar8[2];
            puVar8 = puVar11;
          }
        }
        while (piVar12 != (int *)puVar5[*(longlong *)(*(longlong *)(param_4 + 0x58) + 0xf8)]) {
          iVar3 = piVar12[1];
          if ((iVar10 == iVar3) ||
             (((((longlong)iVar10 != -1 && (iVar3 != -1)) &&
               (lVar6 = *(longlong *)
                         ((longlong)*(int *)(param_4 + 0x94) * 0xe0 + render_system_config + 0x78),
               iVar4 = *(int *)(lVar6 + 4 + (longlong)iVar10 * 8),
               iVar4 == *(int *)(lVar6 + 4 + (longlong)iVar3 * 8))) && (iVar4 != -1)))) {
            iVar10 = (*piVar12 >> 1 & 7U) - 1;
            goto LAB_180599695;
          }
          piVar12 = *(int **)(piVar12 + 2);
          while (piVar12 == (int *)0x0) {
            puVar8 = puVar11 + 1;
            puVar11 = puVar11 + 1;
            piVar12 = (int *)*puVar8;
          }
        }
        iVar10 = *(int *)(unaff_RBP + 0x18);
LAB_180599695:
        fVar15 = SQRT((float)*(int *)(param_4 + 0x154) / *(float *)(param_4 + 0x158)) *
                 *(float *)(param_4 + 0x15c) * *(float *)(param_4 + 0x150);
        if (iVar10 == 2) {
          fVar15 = fVar15 * 0.8;
        }
        *(float *)(param_1 + 0x118) = fVar15 + *(float *)(param_1 + 0x118);
        *(int32_t *)(param_1 + 0x154) = 0xbecccccd;
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
      }
    }
    else {
      if ((((*(char *)(param_4 + 0x98) == '\0') && ((*(byte *)(param_4 + 0xc0) & 8) != 0)) &&
          ((cVar9 != '\0' &&
           (fVar15 < *(float *)(param_1 + 0x144) || fVar15 == *(float *)(param_1 + 0x144))))) &&
         ((system_status_flag - 2U < 2 || (3 < *(int *)(param_4 + 0x78) - 0x18U)))) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x4000;
        if (((system_status_flag - 2U & 0xfffffffc) != 0) ||
           ((system_status_flag == 4 || (fVar16 = fVar15, *(int *)(param_4 + 0x178) == 2)))) {
          fVar16 = 0.2;
        }
        fVar13 = -render_system_config;
        *(int32_t *)(param_1 + 0x148) = 0xbe19999a;
        *(float *)(param_1 + 0x144) = fVar13 - fVar16;
      }
      if (fVar15 < *(float *)(param_1 + 0x148)) {
        *(int32_t *)(param_1 + 0x148) = 0xccbebc20;
        *(int32_t *)(param_1 + 0x154) = 0xbecccccd;
        if (*(int *)(param_4 + 0x78) - 0x18U < 4) {
          *(int32_t *)(param_1 + 0x2c) = 0;
          *(uint64_t *)(unaff_RBP + 0x18) = 0;
          if (*(char *)(param_4 + 0x9b) != '\0') {
            iVar10 = *(int *)(param_4 + 0x80);
            fVar15 = *(float *)(param_1 + 0x84);
            *(int32_t *)(unaff_RBP + 0x1c) = 0;
            if (iVar10 == 6) {
              fVar15 = fVar15 * -0.4;
            }
            else {
              fVar15 = fVar15 * 0.4;
            }
            *(float *)(unaff_RBP + 0x18) = fVar15;
            *(uint64_t *)(unaff_RBP + 0x18) = *(uint64_t *)(unaff_RBP + 0x18);
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
          if (*(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c) +
              *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) < 4.0) {
            *(uint64_t *)(unaff_RBP + 0x18) = *(uint64_t *)(param_1 + 0x1c);
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
          fVar15 = *(float *)(unaff_RBP + 0x18);
          fVar16 = *(float *)(param_4 + 0x158);
          iVar10 = *(int *)(param_4 + 0x154);
          fVar13 = *(float *)(param_4 + 0x15c);
          fVar1 = *(float *)(param_4 + 0x150);
          *(float *)(param_1 + 0x114) = *(float *)(unaff_RBP + 0x1c) + *(float *)(param_1 + 0x114);
          *(float *)(param_1 + 0x110) = fVar15 + *(float *)(param_1 + 0x110);
          *(float *)(param_1 + 0x118) =
               SQRT((float)iVar10 / fVar16) * fVar1 * fVar13 + *(float *)(param_1 + 0x118);
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x8000;
        }
      }
    }
  }
  if ((((*(byte *)(param_4 + 0xc0) & 8) != 0) && ((*(uint *)(param_1 + 8) >> 0xe & 1) == 0)) &&
     (*(char *)(unaff_RBP + 0x38) == '\0')) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x4000000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18059916a(void)
void FUN_18059916a(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  longlong lVar5;
  bool bVar6;
  uint64_t *puVar7;
  char in_AL;
  char cVar8;
  int iVar9;
  uint64_t *puVar10;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int *piVar11;
  float fVar12;
  int32_t uVar13;
  float fVar14;
  float fVar15;
  
  if ((((in_AL != '\x01') ||
       (fVar14 = 0.0, *(float *)(unaff_RDI + 0x44) <= 0.0 && *(float *)(unaff_RDI + 0x44) != 0.0))
      || (*(int *)(unaff_RSI + 0x28) != 0)) ||
     ((0x21 < *(int *)(unaff_RSI + 0x90) ||
      (((*(uint *)(unaff_RSI + 0x68) | *(uint *)(unaff_RSI + 0x60)) >> 0x18 & 1) != 0)))) {
    *(int32_t *)(unaff_RDI + 0x148) = 0xccbebc20;
  }
  else {
    cVar8 = func_0x00018057c520(unaff_RDI + 0xa0,*(uint *)(unaff_RSI + 0x24) >> 8 & 0xffffff01);
    if ((*(uint *)(unaff_RSI + 0x24) & 0x800) == 0) {
      if ((((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) &&
         (*(int *)(unaff_RSI + 0x178) != 2)) {
        fVar15 = 0.9;
      }
      else {
        fVar15 = 1.0;
      }
      if (((((*(byte *)(unaff_RSI + 0xc0) & 8) != 0) && (cVar8 != '\0')) &&
          (fVar14 < *(float *)(unaff_RDI + 0x144))) &&
         ((fVar15 * *(float *)(unaff_RSI + 0x16c) < *(float *)(unaff_RDI + 0x20) &&
          ((system_status_flag - 2U < 2 || (3 < *(int *)(unaff_RSI + 0x78) - 0x18U)))))) {
        *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000;
        if ((*(int *)(unaff_RSI + 0x17c) == 2) ||
           (((system_status_flag - 2U & 0xfffffffc) != 0 || (system_status_flag == 4)))) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (*(int *)(unaff_RSI + 0x14c) < 5) {
          if (bVar6) {
            uVar13 = 0xbfcccccd;
          }
          else {
            uVar13 = 0xbfb33333;
          }
        }
        else if (bVar6) {
          uVar13 = 0xc0266666;
        }
        else {
          uVar13 = 0xc019999a;
        }
        *(int32_t *)(unaff_RDI + 0x144) = uVar13;
        *(int32_t *)(unaff_RDI + 0x148) = 0xbecccccd;
      }
      if ((fVar14 < *(float *)(unaff_RDI + 0x148)) &&
         (*(int32_t *)(unaff_RDI + 0x148) = 0xccbebc20, *(int *)(unaff_RSI + 0x78) == 0x18)) {
        iVar9 = *(int *)(unaff_RSI + 0x70);
        puVar4 = *(uint64_t **)(*(longlong *)(unaff_RSI + 0x58) + 0xf0);
        piVar11 = (int *)*puVar4;
        puVar10 = puVar4;
        if (piVar11 == (int *)0x0) {
          piVar11 = (int *)puVar4[1];
          puVar7 = puVar4;
          while (puVar10 = puVar7 + 1, piVar11 == (int *)0x0) {
            piVar11 = (int *)puVar7[2];
            puVar7 = puVar10;
          }
        }
        while (piVar11 != (int *)puVar4[*(longlong *)(*(longlong *)(unaff_RSI + 0x58) + 0xf8)]) {
          iVar2 = piVar11[1];
          if ((iVar9 == iVar2) ||
             (((((longlong)iVar9 != -1 && (iVar2 != -1)) &&
               (lVar5 = *(longlong *)
                         ((longlong)*(int *)(unaff_RSI + 0x94) * 0xe0 + render_system_config + 0x78),
               iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar9 * 8),
               iVar3 == *(int *)(lVar5 + 4 + (longlong)iVar2 * 8))) && (iVar3 != -1)))) {
            iVar9 = (*piVar11 >> 1 & 7U) - 1;
            goto LAB_180599695;
          }
          piVar11 = *(int **)(piVar11 + 2);
          while (piVar11 == (int *)0x0) {
            puVar7 = puVar10 + 1;
            puVar10 = puVar10 + 1;
            piVar11 = (int *)*puVar7;
          }
        }
        iVar9 = *(int *)(unaff_RBP + 0x18);
LAB_180599695:
        fVar14 = SQRT((float)*(int *)(unaff_RSI + 0x154) / *(float *)(unaff_RSI + 0x158)) *
                 *(float *)(unaff_RSI + 0x15c) * *(float *)(unaff_RSI + 0x150);
        if (iVar9 == 2) {
          fVar14 = fVar14 * 0.8;
        }
        *(float *)(unaff_RDI + 0x118) = fVar14 + *(float *)(unaff_RDI + 0x118);
        *(int32_t *)(unaff_RDI + 0x154) = 0xbecccccd;
        *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x8000;
      }
    }
    else {
      if ((((*(char *)(unaff_RSI + 0x98) == '\0') && ((*(byte *)(unaff_RSI + 0xc0) & 8) != 0)) &&
          ((cVar8 != '\0' &&
           (fVar14 < *(float *)(unaff_RDI + 0x144) || fVar14 == *(float *)(unaff_RDI + 0x144))))) &&
         ((system_status_flag - 2U < 2 || (3 < *(int *)(unaff_RSI + 0x78) - 0x18U)))) {
        *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000;
        if (((system_status_flag - 2U & 0xfffffffc) != 0) ||
           ((system_status_flag == 4 || (fVar15 = fVar14, *(int *)(unaff_RSI + 0x178) == 2)))) {
          fVar15 = 0.2;
        }
        fVar12 = -render_system_config;
        *(int32_t *)(unaff_RDI + 0x148) = 0xbe19999a;
        *(float *)(unaff_RDI + 0x144) = fVar12 - fVar15;
      }
      if (fVar14 < *(float *)(unaff_RDI + 0x148)) {
        *(int32_t *)(unaff_RDI + 0x148) = 0xccbebc20;
        *(int32_t *)(unaff_RDI + 0x154) = 0xbecccccd;
        if (*(int *)(unaff_RSI + 0x78) - 0x18U < 4) {
          *(int32_t *)(unaff_RDI + 0x2c) = 0;
          *(uint64_t *)(unaff_RBP + 0x18) = 0;
          if (*(char *)(unaff_RSI + 0x9b) != '\0') {
            iVar9 = *(int *)(unaff_RSI + 0x80);
            fVar14 = *(float *)(unaff_RDI + 0x84);
            *(int32_t *)(unaff_RBP + 0x1c) = 0;
            if (iVar9 == 6) {
              fVar14 = fVar14 * -0.4;
            }
            else {
              fVar14 = fVar14 * 0.4;
            }
            *(float *)(unaff_RBP + 0x18) = fVar14;
            *(uint64_t *)(unaff_RBP + 0x18) = *(uint64_t *)(unaff_RBP + 0x18);
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
          if (*(float *)(unaff_RDI + 0x1c) * *(float *)(unaff_RDI + 0x1c) +
              *(float *)(unaff_RDI + 0x20) * *(float *)(unaff_RDI + 0x20) < 4.0) {
            *(uint64_t *)(unaff_RBP + 0x18) = *(uint64_t *)(unaff_RDI + 0x1c);
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
          fVar14 = *(float *)(unaff_RBP + 0x18);
          fVar15 = *(float *)(unaff_RSI + 0x158);
          iVar9 = *(int *)(unaff_RSI + 0x154);
          fVar12 = *(float *)(unaff_RSI + 0x15c);
          fVar1 = *(float *)(unaff_RSI + 0x150);
          *(float *)(unaff_RDI + 0x114) =
               *(float *)(unaff_RBP + 0x1c) + *(float *)(unaff_RDI + 0x114);
          *(float *)(unaff_RDI + 0x110) = fVar14 + *(float *)(unaff_RDI + 0x110);
          *(float *)(unaff_RDI + 0x118) =
               SQRT((float)iVar9 / fVar15) * fVar1 * fVar12 + *(float *)(unaff_RDI + 0x118);
          *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x8000;
        }
      }
    }
  }
  if ((((*(byte *)(unaff_RSI + 0xc0) & 8) != 0) && ((*(uint *)(unaff_RDI + 8) >> 0xe & 1) == 0)) &&
     (*(char *)(unaff_RBP + 0x38) == '\0')) {
    *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000000;
  }
  return;
}





// 函数: void FUN_18059931c(float param_1)
void FUN_18059931c(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (*(float *)(unaff_RDI + 0x1c) * *(float *)(unaff_RDI + 0x1c) + param_1 * param_1 < 4.0) {
    *(uint64_t *)(unaff_RBP + 0x18) = *(uint64_t *)(unaff_RDI + 0x1c);
                    // WARNING: Subroutine does not return
    FUN_1808fd400();
  }
  fVar1 = *(float *)(unaff_RBP + 0x18);
  fVar2 = *(float *)(unaff_RSI + 0x158);
  iVar5 = *(int *)(unaff_RSI + 0x154);
  fVar3 = *(float *)(unaff_RSI + 0x15c);
  fVar4 = *(float *)(unaff_RSI + 0x150);
  *(float *)(unaff_RDI + 0x114) = *(float *)(unaff_RBP + 0x1c) + *(float *)(unaff_RDI + 0x114);
  *(float *)(unaff_RDI + 0x110) = fVar1 + *(float *)(unaff_RDI + 0x110);
  *(float *)(unaff_RDI + 0x118) =
       SQRT((float)iVar5 / fVar2) * fVar4 * fVar3 + *(float *)(unaff_RDI + 0x118);
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x8000;
  if ((((*(byte *)(unaff_RSI + 0xc0) & 8) != 0) && ((*(uint *)(unaff_RDI + 8) >> 0xe & 1) == 0)) &&
     (*(char *)(unaff_RBP + 0x38) == '\0')) {
    *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000000;
  }
  return;
}





// 函数: void FUN_18059934f(void)
void FUN_18059934f(void)

{
  longlong unaff_RDI;
  
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(unaff_RDI + 0x34));
}





// 函数: void FUN_180599446(void)
void FUN_180599446(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  fVar1 = *(float *)(unaff_RBP + 0x18);
  fVar2 = *(float *)(unaff_RSI + 0x158);
  iVar5 = *(int *)(unaff_RSI + 0x154);
  fVar3 = *(float *)(unaff_RSI + 0x15c);
  fVar4 = *(float *)(unaff_RSI + 0x150);
  *(float *)(unaff_RDI + 0x114) = *(float *)(unaff_RBP + 0x1c) + *(float *)(unaff_RDI + 0x114);
  *(float *)(unaff_RDI + 0x110) = fVar1 + *(float *)(unaff_RDI + 0x110);
  *(float *)(unaff_RDI + 0x118) =
       SQRT((float)iVar5 / fVar2) * fVar4 * fVar3 + *(float *)(unaff_RDI + 0x118);
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x8000;
  if ((((*(byte *)(unaff_RSI + 0xc0) & 8) != 0) && ((*(uint *)(unaff_RDI + 8) >> 0xe & 1) == 0)) &&
     (*(char *)(unaff_RBP + 0x38) == '\0')) {
    *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000000;
  }
  return;
}





// 函数: void FUN_180599455(float param_1)
void FUN_180599455(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float in_XMM5_Da;
  
  fVar1 = *(float *)(unaff_RSI + 0x158);
  iVar4 = *(int *)(unaff_RSI + 0x154);
  fVar2 = *(float *)(unaff_RSI + 0x15c);
  fVar3 = *(float *)(unaff_RSI + 0x150);
  *(float *)(unaff_RDI + 0x114) = param_1 + *(float *)(unaff_RDI + 0x114);
  *(float *)(unaff_RDI + 0x110) = in_XMM5_Da + *(float *)(unaff_RDI + 0x110);
  *(float *)(unaff_RDI + 0x118) =
       SQRT((float)iVar4 / fVar1) * fVar3 * fVar2 + *(float *)(unaff_RDI + 0x118);
  *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x8000;
  if ((((*(byte *)(unaff_RSI + 0xc0) & 8) != 0) && ((*(uint *)(unaff_RDI + 8) >> 0xe & 1) == 0)) &&
     (*(char *)(unaff_RBP + 0x38) == '\0')) {
    *(uint *)(unaff_RDI + 8) = *(uint *)(unaff_RDI + 8) | 0x4000000;
  }
  return;
}





