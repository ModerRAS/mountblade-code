#include "TaleWorlds.Native.Split.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part221.c - 3 个函数

// 函数: void FUN_180391f2f(int param_1,uint64_t param_2,uint64_t param_3,int param_4,int64_t param_5,
void FUN_180391f2f(int param_1,uint64_t param_2,uint64_t param_3,int param_4,int64_t param_5,
                  uint64_t param_6,uint64_t param_7,int64_t param_8)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint8_t uVar4;
  bool bVar5;
  int in_EAX;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  uint64_t unaff_RBP;
  int unaff_ESI;
  int iVar16;
  int64_t unaff_RDI;
  int64_t *plVar17;
  int64_t *plVar18;
  int64_t lVar19;
  int64_t in_R10;
  uint64_t uVar20;
  char in_R11B;
  int64_t *plVar21;
  int64_t unaff_R14;
  char cVar22;
  uint uStackX_24;
  int64_t lStack0000000000000050;
  int64_t lStack0000000000000060;
  int64_t in_stack_00000068;
  int64_t in_stack_00000070;
  int64_t in_stack_00000150;
  char in_stack_00000170;
  
  if (((((unaff_ESI < in_EAX) && (-1 < param_1)) &&
       (param_1 < (int)(uint)*(byte *)(in_stack_00000068 + 0xa8))) &&
      ((-1 < param_4 && (param_4 < (int)(uint)*(byte *)(in_stack_00000070 + 0xa8))))) &&
     (in_R10 != 0)) {
    uVar11 = (uint)unaff_RBP;
    uVar7 = unaff_RBP & 0xffffffff;
    lVar15 = *(int64_t *)(unaff_RDI + 0x60 + (int64_t)unaff_ESI * 8);
    lVar2 = *(int64_t *)(in_stack_00000070 + 0x60 + (int64_t)param_4 * 8);
    bVar1 = *(byte *)(in_R10 + 0xa8);
    lVar19 = *(int64_t *)(in_R10 + 0x60 + (int64_t)param_1 * 8);
    lStack0000000000000050 = lVar19;
    lStack0000000000000060 = lVar15;
    if (bVar1 != 0) {
      plVar18 = (int64_t *)(in_R10 + 0x60);
      uStackX_24 = uVar11;
      do {
        uVar13 = (uint)uVar7;
        plVar8 = (int64_t *)*plVar18;
        if ((plVar8[2] != param_5) && (((char)plVar8[4] != '\x02' || (plVar8[3] != param_5)))) {
          if (plVar8[2] != in_stack_00000068) {
            if (((char)plVar8[4] != '\x02') || (plVar8[3] != in_stack_00000068)) {
              uVar12 = unaff_RBP & 0xffffffff;
              uVar7 = unaff_RBP;
              do {
                iVar6 = (int)uVar12;
                if (*plVar8 == *(int64_t *)(lVar15 + uVar7 * 8)) break;
                uVar12 = (uint64_t)((int)uVar12 + 1);
                uVar7 = uVar7 + 1;
                iVar6 = -1;
              } while ((int64_t)uVar7 < 2);
              uVar12 = unaff_RBP & 0xffffffff;
              uVar7 = unaff_RBP;
              do {
                uVar9 = unaff_RBP;
                iVar16 = (int)uVar12;
                if (plVar8[1] == *(int64_t *)(lVar15 + uVar7 * 8)) break;
                uVar12 = (uint64_t)((int)uVar12 + 1);
                uVar7 = uVar7 + 1;
                iVar16 = iVar6;
              } while ((int64_t)uVar7 < 2);
              do {
                lVar15 = plVar8[uVar9];
                plVar17 = plVar8;
                uVar7 = unaff_RBP;
                do {
                  plVar8 = plVar17;
                  if (lVar15 == *(int64_t *)(lVar19 + uVar7 * 8)) {
                    bVar5 = in_R11B == '\0';
                    if ((char)plVar17[4] == '\x02') {
                      if (plVar17[2] == in_R10) {
                        plVar17[2] = plVar17[3];
                      }
                      plVar17[3] = unaff_RBP;
                      *(char *)(plVar17 + 4) = (char)unaff_RBP;
                      if (plVar17[2] != unaff_RBP) {
                        *(int8_t *)(plVar17 + 4) = 1;
                      }
                      SystemCore_ProcessManager(plVar17[2]);
                    }
                    else {
                      FUN_18038d8f0(unaff_R14,plVar17);
                    }
                    uVar4 = (uint8_t)(unaff_RBP >> 8);
                    plVar21 = plVar17;
                    if (uVar9 == 0) {
                      if (bVar5) {
                        plVar21 = (int64_t *)
                                  ((int64_t)(int)CONCAT71(uVar4,iVar16 == 0) * 8 + lVar2);
                      }
                      else {
                        plVar21 = (int64_t *)((int64_t)iVar16 * 8 + lVar2);
                      }
                    }
                    if (uVar9 == 1) {
                      if (bVar5) {
                        lVar19 = *(int64_t *)
                                  (lVar2 + (int64_t)(int)CONCAT71(uVar4,iVar16 == 0) * 8);
                      }
                      else {
                        lVar19 = *(int64_t *)(lVar2 + (int64_t)iVar16 * 8);
                      }
                    }
                    else {
                      lVar19 = plVar17[1];
                    }
                    puVar14 = *(uint64_t **)(unaff_R14 + 0x458);
                    uVar12 = unaff_RBP & 0xffffffff;
                    uVar20 = *(int64_t *)(unaff_R14 + 0x460) - (int64_t)puVar14 >> 3;
                    if (uVar20 != 0) {
                      do {
                        plVar8 = (int64_t *)*puVar14;
                        if (((*plVar8 == *plVar21) && (plVar8[1] == lVar19)) ||
                           ((*plVar8 == lVar19 && (plVar8[1] == *plVar21)))) {
                          *(int8_t *)(plVar8 + 4) = 2;
                          plVar8[3] = param_8;
                          *plVar18 = (int64_t)plVar8;
                          SystemCore_ProcessManager(plVar8[2]);
                          lVar19 = lStack0000000000000050;
                          in_R10 = param_8;
                          goto LAB_1803922c3;
                        }
                        uVar13 = (int)uVar12 + 1;
                        uVar12 = (uint64_t)uVar13;
                        puVar14 = puVar14 + 1;
                      } while ((uint64_t)(int64_t)(int)uVar13 < uVar20);
                    }
                    if (uVar9 == 1) {
                      if (bVar5) {
                        lVar19 = *(int64_t *)
                                  (lVar2 + (int64_t)(int)CONCAT71(uVar4,iVar16 == 0) * 8);
                      }
                      else {
                        lVar19 = *(int64_t *)(lVar2 + (int64_t)iVar16 * 8);
                      }
                    }
                    else {
                      lVar19 = plVar17[1];
                      if (uVar9 == 0) {
                        iVar6 = iVar16;
                        if (bVar5) {
                          iVar6 = (int)CONCAT71(uVar4,iVar16 == 0);
                        }
                        plVar17 = (int64_t *)((int64_t)iVar6 * 8 + lVar2);
                      }
                    }
                    lVar3 = *plVar17;
                    plVar8 = (int64_t *)FUN_18038c180(in_stack_00000150);
                    plVar8[1] = lVar19;
                    *plVar8 = lVar3;
                    *(int8_t *)(plVar8 + 4) = 1;
                    plVar8[2] = param_8;
                    *plVar18 = (int64_t)plVar8;
                    lVar19 = lStack0000000000000050;
                    in_R10 = param_8;
                    unaff_R14 = in_stack_00000150;
                  }
LAB_1803922c3:
                  uVar7 = uVar7 + 1;
                  plVar17 = plVar8;
                  in_R11B = in_stack_00000170;
                } while ((int64_t)uVar7 < 2);
                uVar9 = uVar9 + 1;
                lVar15 = lStack0000000000000060;
                uVar13 = uStackX_24;
              } while ((int64_t)uVar9 < 2);
              goto LAB_180392028;
            }
            plVar8[2] = in_stack_00000068;
          }
          *(int8_t *)(plVar8 + 4) = 1;
          plVar8[3] = unaff_RBP;
          func_0x00018038ac80(plVar8);
          *plVar18 = lVar2;
          *(int8_t *)(lVar2 + 0x20) = 2;
          *(int64_t *)(lVar2 + 0x18) = in_R10;
        }
LAB_180392028:
        bVar1 = *(byte *)(in_R10 + 0xa8);
        uStackX_24 = uVar13 + 1;
        uVar7 = (uint64_t)uStackX_24;
        plVar18 = plVar18 + 1;
        unaff_RDI = param_5;
        in_R11B = in_stack_00000170;
      } while ((int)uStackX_24 < (int)(uint)bVar1);
    }
    uVar7 = unaff_RBP & 0xffffffff;
    if (bVar1 != 0) {
      plVar18 = (int64_t *)(in_R10 + 0x60);
      do {
        lVar15 = *plVar18;
        *(char *)(lVar15 + 0x20) = (char)unaff_RBP;
        cVar22 = *(uint64_t *)(lVar15 + 0x10) != unaff_RBP;
        if ((bool)cVar22) {
          *(int8_t *)(lVar15 + 0x20) = 1;
        }
        if (*(uint64_t *)(lVar15 + 0x18) != unaff_RBP) {
          cVar22 = cVar22 + '\x01';
          *(char *)(lVar15 + 0x20) = cVar22;
        }
        if ((cVar22 == '\x01') && (*(int64_t *)(lVar15 + 0x18) != 0)) {
          *(int64_t *)(lVar15 + 0x10) = *(int64_t *)(lVar15 + 0x18);
          *(uint64_t *)(lVar15 + 0x18) = unaff_RBP;
        }
        bVar1 = *(byte *)(in_R10 + 0xa8);
        uVar13 = (int)uVar7 + 1;
        uVar7 = (uint64_t)uVar13;
        plVar18 = plVar18 + 1;
      } while ((int)uVar13 < (int)(uint)bVar1);
    }
    uVar12 = unaff_RBP & 0xffffffff;
    uVar7 = unaff_RBP;
    if (bVar1 != 0) {
      do {
        plVar18 = *(int64_t **)(in_R10 + 0x60 + uVar7 * 8);
        uVar13 = (int)uVar12 + 1;
        uVar12 = (uint64_t)uVar13;
        uVar9 = unaff_RBP;
        if (uVar13 != bVar1) {
          uVar9 = uVar7 + 1;
        }
        plVar8 = *(int64_t **)(in_R10 + 0x60 + uVar9 * 8);
        if ((*plVar18 == *plVar8) || (uVar10 = 0xffffffff, *plVar18 == plVar8[1])) {
          uVar10 = uVar11;
        }
        if ((plVar18[1] == *plVar8) || (plVar18[1] == plVar8[1])) {
          uVar10 = 1;
        }
        uVar9 = unaff_RBP;
        if (uVar10 == 0) {
          uVar9 = 8;
        }
        *(uint64_t *)(param_8 + 0x80 + uVar7 * 8) = *(uint64_t *)(uVar9 + (int64_t)plVar18);
        bVar1 = *(byte *)(param_8 + 0xa8);
        uVar7 = uVar7 + 1;
        in_R10 = param_8;
      } while ((int)uVar13 < (int)(uint)bVar1);
    }
    SystemCore_ProcessManager(unaff_RDI);
    SystemCore_PerformanceMonitor(unaff_RDI);
    uVar13 = uVar11;
    if (*(int64_t *)(unaff_RDI + 0xb0) != 0) {
      uVar13 = *(uint *)(*(int64_t *)(unaff_RDI + 0xb0) + 0x134);
    }
    if (*(int64_t *)(unaff_RDI + 0xb8) != 0) {
      uVar13 = uVar13 | *(uint *)(*(int64_t *)(unaff_RDI + 0xb8) + 0x134);
    }
    if (*(int64_t *)(unaff_RDI + 0xc0) != 0) {
      uVar13 = uVar13 | *(uint *)(*(int64_t *)(unaff_RDI + 0xc0) + 0x134);
    }
    if (*(int64_t *)(unaff_RDI + 200) != 0) {
      uVar13 = uVar13 | *(uint *)(*(int64_t *)(unaff_RDI + 200) + 0x134);
    }
    uVar10 = 0xffffffff;
    if (uVar13 != 0) {
      uVar10 = uVar13;
    }
    *(uint *)(unaff_RDI + 0x134) = uVar10;
    SystemCore_ProcessManager(in_stack_00000068);
    SystemCore_PerformanceMonitor(in_stack_00000068);
    uVar13 = uVar11;
    if (*(int64_t *)(in_stack_00000068 + 0xb0) != 0) {
      uVar13 = *(uint *)(*(int64_t *)(in_stack_00000068 + 0xb0) + 0x134);
    }
    if (*(int64_t *)(in_stack_00000068 + 0xb8) != 0) {
      uVar13 = uVar13 | *(uint *)(*(int64_t *)(in_stack_00000068 + 0xb8) + 0x134);
    }
    if (*(int64_t *)(in_stack_00000068 + 0xc0) != 0) {
      uVar13 = uVar13 | *(uint *)(*(int64_t *)(in_stack_00000068 + 0xc0) + 0x134);
    }
    if (*(int64_t *)(in_stack_00000068 + 200) != 0) {
      uVar13 = uVar13 | *(uint *)(*(int64_t *)(in_stack_00000068 + 200) + 0x134);
    }
    uVar10 = 0xffffffff;
    if (uVar13 != 0) {
      uVar10 = uVar13;
    }
    *(uint *)(in_stack_00000068 + 0x134) = uVar10;
    SystemCore_ProcessManager(in_stack_00000070);
    SystemCore_PerformanceMonitor(in_stack_00000070);
    if (*(int64_t *)(in_stack_00000070 + 0xb0) != 0) {
      uVar11 = *(uint *)(*(int64_t *)(in_stack_00000070 + 0xb0) + 0x134);
    }
    if (*(int64_t *)(in_stack_00000070 + 0xb8) != 0) {
      uVar11 = uVar11 | *(uint *)(*(int64_t *)(in_stack_00000070 + 0xb8) + 0x134);
    }
    if (*(int64_t *)(in_stack_00000070 + 0xc0) != 0) {
      uVar11 = uVar11 | *(uint *)(*(int64_t *)(in_stack_00000070 + 0xc0) + 0x134);
    }
    if (*(int64_t *)(in_stack_00000070 + 200) != 0) {
      uVar11 = uVar11 | *(uint *)(*(int64_t *)(in_stack_00000070 + 200) + 0x134);
    }
    uVar13 = 0xffffffff;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    *(uint *)(in_stack_00000070 + 0x134) = uVar13;
    SystemCore_ProcessManager(param_8);
    SystemCore_PerformanceMonitor(param_8);
    if (*(int64_t *)(param_8 + 0xb0) != 0) {
      unaff_RBP = (uint64_t)*(uint *)(*(int64_t *)(param_8 + 0xb0) + 0x134);
    }
    uVar11 = (uint)unaff_RBP;
    if (*(int64_t *)(param_8 + 0xb8) != 0) {
      uVar11 = uVar11 | *(uint *)(*(int64_t *)(param_8 + 0xb8) + 0x134);
    }
    if (*(int64_t *)(param_8 + 0xc0) != 0) {
      uVar11 = uVar11 | *(uint *)(*(int64_t *)(param_8 + 0xc0) + 0x134);
    }
    if (*(int64_t *)(param_8 + 200) != 0) {
      uVar11 = uVar11 | *(uint *)(*(int64_t *)(param_8 + 200) + 0x134);
    }
    uVar13 = 0xffffffff;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    *(uint *)(param_8 + 0x134) = uVar13;
    SystemCore_Encoder();
    SystemCore_Encoder();
    SystemCore_Encoder();
    SystemCore_Encoder();
    *(int *)(unaff_R14 + 0x530) = *(int *)(unaff_R14 + 0x530) + 1;
    SystemCore_Encoder();
    *(int *)(unaff_R14 + 0x530) = *(int *)(unaff_R14 + 0x530) + 1;
    SystemCore_Encoder();
  }
  return;
}





// 函数: void FUN_1803925d5(void)
void FUN_1803925d5(void)

{
  return;
}





// 函数: void FUN_1803925de(void)
void FUN_1803925de(void)

{
  return;
}





