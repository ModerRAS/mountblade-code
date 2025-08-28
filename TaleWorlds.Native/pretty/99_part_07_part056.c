#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part056.c - 6 个函数

// 函数: void FUN_1804d2430(int64_t *param_1,uint param_2,int param_3)
void FUN_1804d2430(int64_t *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  code *pcVar10;
  uint uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int8_t uVar17;
  int32_t uVar18;
  int iVar19;
  int32_t uVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint64_t uVar23;
  int32_t uVar24;
  uint uStackX_10;
  
  uVar23 = (uint64_t)(int)param_2;
  uVar12 = uVar23;
  uStackX_10 = param_2;
  if ((int)param_2 < param_3) {
    do {
      lVar13 = SYSTEM_STATE_MANAGER;
      lVar16 = system_main_module_state;
      lVar6 = *param_1;
      uVar14 = (uint)uVar12;
      if ((int)uVar14 < *(int *)(lVar6 + 0x564)) {
        uVar12 = (int64_t)*(int *)(lVar6 + 0x5b0) & uVar23;
        lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 0x590) + (int64_t)((int)uVar14 >> 10) * 8);
        if ((*(int *)(lVar7 + uVar12 * 0x18) != -1) &&
           (puVar1 = (uint *)(lVar7 + (uVar12 * 3 + 1) * 8), puVar1 != (uint *)0x0)) {
          uVar2 = *puVar1;
          lVar22 = (int64_t)(int)(*(uint *)(lVar6 + 0x2b18) & uVar2) * 0xd8;
          lVar7 = *(int64_t *)(*(int64_t *)(lVar6 + 11000) + (int64_t)((int)uVar2 >> 10) * 8);
          uVar3 = *(uint *)(lVar7 + 0x14 + lVar22);
          if ((*(char *)(*(int64_t *)
                          (*(int64_t *)(lVar6 + 0x3f8) + (int64_t)((int)uVar3 >> 10) * 8) + 8 +
                        (int64_t)(int)(*(uint *)(lVar6 + 0x418) & uVar3) * 0xc) != '\0') &&
             ((*(byte *)(*(int64_t *)
                          (*(int64_t *)(lVar6 + 0x3a0) + (int64_t)((int)uVar2 >> 10) * 8) + 8 +
                        (int64_t)(int)(*(uint *)(lVar6 + 0x3c0) & uVar2) * 0xc) & 1) != 0)) {
            uVar2 = *(uint *)(lVar7 + 0x18 + lVar22);
            uVar3 = *(uint *)(lVar7 + 0x1c + lVar22);
            iVar19 = 0;
            uVar4 = *(uint *)(lVar6 + 0x4a8);
            lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x488) + (int64_t)((int)uVar2 >> 10) * 8);
            lVar8 = *(int64_t *)(*(int64_t *)(puVar1 + 2) + 0x48);
            uVar5 = *(int32_t *)(lVar8 + 0x328);
            lVar15 = *(int64_t *)(lVar8 + 0x38);
            if (*(int64_t *)(lVar8 + 0x40) - lVar15 >> 4 != 0) {
              lVar21 = 0;
              do {
                *(char *)(*(int64_t *)(lVar21 + lVar15) + 0xf5) =
                     (*(int *)(lVar13 + 0xe00) != 0) + -1;
                uVar14 = *(uint *)(lVar7 + 0x14 + lVar22);
                lVar15 = *param_1;
                uVar14 = *(int *)(*(int64_t *)
                                   (*(int64_t *)(lVar15 + 0x2cf0) +
                                   (int64_t)((int)uVar14 >> 10) * 8) + 8 +
                                 (int64_t)(int)(*(uint *)(lVar15 + 0x2d10) & uVar14) * 0xc) -
                         *(int *)(lVar15 + 0xa8);
                if ((int)uVar14 < 0) {
                  uVar14 = 0;
                }
                else {
                  uVar11 = *(int *)(lVar8 + 0x58) - 1;
                  if ((int)uVar11 < (int)uVar14) {
                    uVar14 = uVar11;
                  }
                }
                uVar11 = *(uint *)(lVar21 + 8 + *(int64_t *)(lVar8 + 0x38));
                if ((((uVar11 >> (uVar14 & 0x1f) & 1) != 0) && ((uVar11 & 1) != 0)) &&
                   ((*(uint *)(*(int64_t *)(lVar21 + *(int64_t *)(lVar8 + 0x38)) + 0x100) &
                    0x400000) != 0)) {
                  *(int32_t *)(*(int64_t *)(*(int64_t *)(puVar1 + 2) + 0x48) + 0x328) =
                       *(int32_t *)(lVar16 + 0x224);
                }
                lVar15 = *(int64_t *)(lVar8 + 0x38);
                iVar19 = iVar19 + 1;
                lVar21 = lVar21 + 0x10;
                uVar14 = uStackX_10;
              } while ((uint64_t)(int64_t)iVar19 <
                       (uint64_t)(*(int64_t *)(lVar8 + 0x40) - lVar15 >> 4));
            }
            uVar17 = 0;
            uVar20 = 0;
            uVar18 = 0;
            uVar24 = 0;
            if (uVar3 != 0xffffffff) {
              lVar13 = (int64_t)(int)(*(uint *)(*param_1 + 0x6b8) & uVar3);
              lVar16 = *(int64_t *)
                        (*(int64_t *)(*param_1 + 0x698) + (int64_t)((int)uVar3 >> 10) * 8);
              uVar17 = *(int8_t *)(lVar16 + 0x10 + lVar13 * 0x30);
              uVar20 = *(int32_t *)(lVar16 + 0x14 + lVar13 * 0x30);
              uVar18 = *(int32_t *)(lVar16 + 0x18 + lVar13 * 0x30);
              uVar24 = *(int32_t *)(lVar16 + 0x28 + lVar13 * 0x30);
            }
            uVar9 = *(uint64_t *)(puVar1 + 2);
            lVar16 = *(int64_t *)param_1[1];
            pcVar10 = *(code **)(**(int64_t **)(lVar16 + 0x3580) + 0xb8);
            if (pcVar10 == (code *)&ui_system_data_128_ptr) {
              lVar13 = (*(int64_t **)(lVar16 + 0x3580))[0xda];
            }
            else {
              lVar13 = (*pcVar10)();
              lVar16 = *(int64_t *)param_1[1];
            }
            FUN_18030aab0(uVar9,lVar16,lVar13,lVar6 + (int64_t)(int)(uVar4 & uVar2) * 0x48 + 8,
                          uVar17,uVar20,uVar18,uVar5,uVar24);
            pcVar10 = *(code **)(**(int64_t **)(*(int64_t *)param_1[1] + 0x3580) + 0xb8);
            if (pcVar10 != (code *)&ui_system_data_128_ptr) {
              (*pcVar10)();
            }
          }
        }
      }
      uStackX_10 = uVar14 + 1;
      uVar23 = uVar23 + 1;
      uVar12 = (uint64_t)uStackX_10;
    } while ((int)uStackX_10 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d2454(uint64_t param_1,uint64_t param_2,int param_3)
void FUN_1804d2454(uint64_t param_1,uint64_t param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint64_t uVar3;
  code *pcVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t in_RAX;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int8_t uVar12;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar13;
  uint64_t unaff_RDI;
  int64_t lVar14;
  uint64_t unaff_R12;
  uint64_t uVar15;
  uint64_t unaff_R13;
  int64_t lVar16;
  uint64_t unaff_R14;
  int64_t *unaff_R15;
  int32_t uStack0000000000000050;
  int64_t lStack0000000000000060;
  int64_t lStack0000000000000068;
  uint in_stack_000000c8;
  int in_stack_000000d0;
  uint uStack00000000000000d8;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R13;
  uVar15 = unaff_R14;
  do {
    lVar5 = SYSTEM_STATE_MANAGER;
    lVar8 = system_main_module_state;
    lVar11 = *unaff_R15;
    uVar9 = (uint)unaff_R14;
    if ((int)uVar9 < *(int *)(lVar11 + 0x564)) {
      uVar7 = (int64_t)*(int *)(lVar11 + 0x5b0) & uVar15;
      lVar16 = *(int64_t *)(*(int64_t *)(lVar11 + 0x590) + (int64_t)((int)uVar9 >> 10) * 8);
      param_3 = in_stack_000000d0;
      if ((*(int *)(lVar16 + uVar7 * 0x18) != -1) &&
         (puVar1 = (uint *)(lVar16 + (uVar7 * 3 + 1) * 8), puVar1 != (uint *)0x0)) {
        uVar6 = *puVar1;
        lVar16 = (int64_t)(int)(*(uint *)(lVar11 + 0x2b18) & uVar6) * 0xd8;
        lStack0000000000000060 =
             *(int64_t *)(*(int64_t *)(lVar11 + 11000) + (int64_t)((int)uVar6 >> 10) * 8);
        uVar2 = *(uint *)(lStack0000000000000060 + 0x14 + lVar16);
        if ((*(char *)(*(int64_t *)
                        (*(int64_t *)(lVar11 + 0x3f8) + (int64_t)((int)uVar2 >> 10) * 8) + 8 +
                      (int64_t)(int)(*(uint *)(lVar11 + 0x418) & uVar2) * 0xc) != '\0') &&
           ((*(byte *)(*(int64_t *)
                        (*(int64_t *)(lVar11 + 0x3a0) + (int64_t)((int)uVar6 >> 10) * 8) + 8 +
                      (int64_t)(int)(*(uint *)(lVar11 + 0x3c0) & uVar6) * 0xc) & 1) != 0)) {
          uVar6 = *(uint *)(lStack0000000000000060 + 0x18 + lVar16);
          uStack00000000000000d8 = *(uint *)(lStack0000000000000060 + 0x1c + lVar16);
          iVar13 = 0;
          lStack0000000000000068 =
               *(int64_t *)(*(int64_t *)(lVar11 + 0x488) + (int64_t)((int)uVar6 >> 10) * 8) +
               (int64_t)(int)(*(uint *)(lVar11 + 0x4a8) & uVar6) * 0x48 + 8;
          lVar11 = *(int64_t *)(*(int64_t *)(puVar1 + 2) + 0x48);
          uStack0000000000000050 = *(int32_t *)(lVar11 + 0x328);
          lVar10 = *(int64_t *)(lVar11 + 0x38);
          if (*(int64_t *)(lVar11 + 0x40) - lVar10 >> 4 != 0) {
            lVar14 = 0;
            do {
              *(char *)(*(int64_t *)(lVar14 + lVar10) + 0xf5) = (*(int *)(lVar5 + 0xe00) != 0) + -1
              ;
              uVar9 = *(uint *)(lStack0000000000000060 + 0x14 + lVar16);
              lVar10 = *unaff_R15;
              uVar9 = *(int *)(*(int64_t *)
                                (*(int64_t *)(lVar10 + 0x2cf0) + (int64_t)((int)uVar9 >> 10) * 8)
                               + 8 + (int64_t)(int)(*(uint *)(lVar10 + 0x2d10) & uVar9) * 0xc) -
                      *(int *)(lVar10 + 0xa8);
              if ((int)uVar9 < 0) {
                uVar9 = 0;
              }
              else {
                uVar6 = *(int *)(lVar11 + 0x58) - 1;
                if ((int)uVar6 < (int)uVar9) {
                  uVar9 = uVar6;
                }
              }
              uVar6 = *(uint *)(lVar14 + 8 + *(int64_t *)(lVar11 + 0x38));
              if ((((uVar6 >> (uVar9 & 0x1f) & 1) != 0) && ((uVar6 & 1) != 0)) &&
                 ((*(uint *)(*(int64_t *)(lVar14 + *(int64_t *)(lVar11 + 0x38)) + 0x100) &
                  0x400000) != 0)) {
                *(int32_t *)(*(int64_t *)(*(int64_t *)(puVar1 + 2) + 0x48) + 0x328) =
                     *(int32_t *)(lVar8 + 0x224);
              }
              lVar10 = *(int64_t *)(lVar11 + 0x38);
              iVar13 = iVar13 + 1;
              lVar14 = lVar14 + 0x10;
              uVar9 = in_stack_000000c8;
            } while ((uint64_t)(int64_t)iVar13 <
                     (uint64_t)(*(int64_t *)(lVar11 + 0x40) - lVar10 >> 4));
          }
          uVar12 = 0;
          if (uStack00000000000000d8 != 0xffffffff) {
            uVar12 = *(int8_t *)
                      (*(int64_t *)
                        (*(int64_t *)(*unaff_R15 + 0x698) +
                        (int64_t)((int)uStack00000000000000d8 >> 10) * 8) + 0x10 +
                      (int64_t)(int)(*(uint *)(*unaff_R15 + 0x6b8) & uStack00000000000000d8) * 0x30
                      );
          }
          uVar3 = *(uint64_t *)(puVar1 + 2);
          lVar11 = *(int64_t *)unaff_R15[1];
          pcVar4 = *(code **)(**(int64_t **)(lVar11 + 0x3580) + 0xb8);
          if (pcVar4 == (code *)&ui_system_data_128_ptr) {
            lVar8 = (*(int64_t **)(lVar11 + 0x3580))[0xda];
          }
          else {
            lVar8 = (*pcVar4)();
            lVar11 = *(int64_t *)unaff_R15[1];
          }
          FUN_18030aab0(uVar3,lVar11,lVar8,lStack0000000000000068,uVar12);
          pcVar4 = *(code **)(**(int64_t **)(*(int64_t *)unaff_R15[1] + 0x3580) + 0xb8);
          if (pcVar4 != (code *)&ui_system_data_128_ptr) {
            (*pcVar4)();
          }
        }
      }
    }
    in_stack_000000c8 = uVar9 + 1;
    unaff_R14 = (uint64_t)in_stack_000000c8;
    uVar15 = uVar15 + 1;
  } while ((int)in_stack_000000c8 < param_3);
  return;
}






// 函数: void FUN_1804d27cb(void)
void FUN_1804d27cb(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d27d7(uint64_t param_1,uint64_t param_2,code *param_3)
void FUN_1804d27d7(uint64_t param_1,uint64_t param_2,code *param_3)

{
  uint *puVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  code *pcVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int8_t unaff_BL;
  uint64_t unaff_RSI;
  int iVar12;
  int64_t lVar13;
  uint64_t unaff_R12;
  int64_t lVar14;
  code *unaff_R13;
  int unaff_R14D;
  int64_t *unaff_R15;
  int64_t in_stack_00000068;
  int in_stack_000000d0;
  
  do {
    lVar8 = (*param_3)();
    lVar11 = *(int64_t *)unaff_R15[1];
    while( true ) {
      FUN_18030aab0(unaff_RSI,lVar11,lVar8,in_stack_00000068,unaff_BL);
      pcVar5 = *(code **)(**(int64_t **)(*(int64_t *)unaff_R15[1] + 0x3580) + 0xb8);
      if (pcVar5 != unaff_R13) {
        (*pcVar5)();
      }
      do {
        do {
          do {
            lVar11 = SYSTEM_STATE_MANAGER;
            lVar8 = system_main_module_state;
            unaff_R14D = unaff_R14D + 1;
            unaff_R12 = unaff_R12 + 1;
            if (in_stack_000000d0 <= unaff_R14D) {
              return;
            }
            lVar3 = *unaff_R15;
          } while (*(int *)(lVar3 + 0x564) <= unaff_R14D);
          uVar7 = (int64_t)*(int *)(lVar3 + 0x5b0) & unaff_R12;
          lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x590) + (int64_t)(unaff_R14D >> 10) * 8);
        } while ((*(int *)(lVar4 + uVar7 * 0x18) == -1) ||
                (puVar1 = (uint *)(lVar4 + (uVar7 * 3 + 1) * 8), puVar1 == (uint *)0x0));
        uVar9 = *puVar1;
        lVar14 = (int64_t)(int)(*(uint *)(lVar3 + 0x2b18) & uVar9) * 0xd8;
        lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 11000) + (int64_t)((int)uVar9 >> 10) * 8);
        uVar2 = *(uint *)(lVar4 + 0x14 + lVar14);
      } while ((*(char *)(*(int64_t *)
                           (*(int64_t *)(lVar3 + 0x3f8) + (int64_t)((int)uVar2 >> 10) * 8) + 8 +
                         (int64_t)(int)(*(uint *)(lVar3 + 0x418) & uVar2) * 0xc) == '\0') ||
              ((*(byte *)(*(int64_t *)
                           (*(int64_t *)(lVar3 + 0x3a0) + (int64_t)((int)uVar9 >> 10) * 8) + 8 +
                         (int64_t)(int)(*(uint *)(lVar3 + 0x3c0) & uVar9) * 0xc) & 1) == 0));
      uVar9 = *(uint *)(lVar4 + 0x18 + lVar14);
      uVar2 = *(uint *)(lVar4 + 0x1c + lVar14);
      iVar12 = 0;
      in_stack_00000068 =
           *(int64_t *)(*(int64_t *)(lVar3 + 0x488) + (int64_t)((int)uVar9 >> 10) * 8) +
           (int64_t)(int)(*(uint *)(lVar3 + 0x4a8) & uVar9) * 0x48 + 8;
      lVar3 = *(int64_t *)(*(int64_t *)(puVar1 + 2) + 0x48);
      lVar10 = *(int64_t *)(lVar3 + 0x38);
      if (*(int64_t *)(lVar3 + 0x40) - lVar10 >> 4 != 0) {
        lVar13 = 0;
        do {
          *(char *)(*(int64_t *)(lVar13 + lVar10) + 0xf5) = (*(int *)(lVar11 + 0xe00) != 0) + -1;
          uVar9 = *(uint *)(lVar4 + 0x14 + lVar14);
          lVar10 = *unaff_R15;
          uVar9 = *(int *)(*(int64_t *)
                            (*(int64_t *)(lVar10 + 0x2cf0) + (int64_t)((int)uVar9 >> 10) * 8) + 8
                          + (int64_t)(int)(*(uint *)(lVar10 + 0x2d10) & uVar9) * 0xc) -
                  *(int *)(lVar10 + 0xa8);
          if ((int)uVar9 < 0) {
            uVar9 = 0;
          }
          else {
            uVar6 = *(int *)(lVar3 + 0x58) - 1;
            if ((int)uVar6 < (int)uVar9) {
              uVar9 = uVar6;
            }
          }
          uVar6 = *(uint *)(lVar13 + 8 + *(int64_t *)(lVar3 + 0x38));
          if ((((uVar6 >> (uVar9 & 0x1f) & 1) != 0) && ((uVar6 & 1) != 0)) &&
             ((*(uint *)(*(int64_t *)(lVar13 + *(int64_t *)(lVar3 + 0x38)) + 0x100) & 0x400000) !=
              0)) {
            *(int32_t *)(*(int64_t *)(*(int64_t *)(puVar1 + 2) + 0x48) + 0x328) =
                 *(int32_t *)(lVar8 + 0x224);
          }
          lVar10 = *(int64_t *)(lVar3 + 0x38);
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + 0x10;
        } while ((uint64_t)(int64_t)iVar12 <
                 (uint64_t)(*(int64_t *)(lVar3 + 0x40) - lVar10 >> 4));
      }
      unaff_BL = 0;
      if (uVar2 != 0xffffffff) {
        unaff_BL = *(int8_t *)
                    (*(int64_t *)
                      (*(int64_t *)(*unaff_R15 + 0x698) + (int64_t)((int)uVar2 >> 10) * 8) + 0x10
                    + (int64_t)(int)(*(uint *)(*unaff_R15 + 0x6b8) & uVar2) * 0x30);
      }
      unaff_R13 = (code *)&ui_system_data_128_ptr;
      unaff_RSI = *(uint64_t *)(puVar1 + 2);
      lVar11 = *(int64_t *)unaff_R15[1];
      param_3 = *(code **)(**(int64_t **)(lVar11 + 0x3580) + 0xb8);
      if (param_3 != (code *)&ui_system_data_128_ptr) break;
      lVar8 = (*(int64_t **)(lVar11 + 0x3580))[0xda];
    }
  } while( true );
}






// 函数: void FUN_1804d27f0(int64_t *param_1,int param_2,int param_3)
void FUN_1804d27f0(int64_t *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  uVar9 = (uint64_t)param_2;
  uVar10 = uVar9;
  if (param_2 < param_3) {
    do {
      lVar3 = *param_1;
      iVar8 = (int)uVar9;
      if (iVar8 < *(int *)(lVar3 + 0x614)) {
        uVar9 = (int64_t)*(int *)(lVar3 + 0x660) & uVar10;
        lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x640) + (int64_t)(iVar8 >> 10) * 8);
        if (((*(int *)(lVar4 + uVar9 * 0xc) != -1) &&
            (puVar6 = (uint *)(lVar4 + uVar9 * 0xc + 8), puVar6 != (uint *)0x0)) &&
           (uVar1 = *puVar6, (int)uVar1 < *(int *)(lVar3 + 0x2c3c))) {
          lVar4 = (int64_t)((int)uVar1 >> 10) * 8;
          piVar7 = (int *)((int64_t)(int)(*(uint *)(lVar3 + 0x2c88) & uVar1) * 0x68 +
                          *(int64_t *)(*(int64_t *)(lVar3 + 0x2c68) + lVar4));
          if ((*piVar7 != -1) && (piVar7 != (int *)0xfffffffffffffff8)) {
            uVar2 = piVar7[5];
            if ((uVar2 != 0xffffffff) &&
               ((uVar2 = *(uint *)(*(int64_t *)
                                    (*(int64_t *)(lVar3 + 11000) + (int64_t)((int)uVar2 >> 10) * 8
                                    ) + 0x1c +
                                  (int64_t)(int)(*(uint *)(lVar3 + 0x2b18) & uVar2) * 0xd8),
                uVar2 != 0xffffffff &&
                (plVar5 = *(int64_t **)
                           (*(int64_t *)
                             (*(int64_t *)
                               (*(int64_t *)(lVar3 + 0x698) + (int64_t)((int)uVar2 >> 10) * 8) + 8
                             + (int64_t)(int)(*(uint *)(lVar3 + 0x6b8) & uVar2) * 0x30) + 0x210),
                plVar5 != (int64_t *)0x0)))) {
              (**(code **)(*plVar5 + 0x48))();
            }
            uVar2 = piVar7[4];
            if (uVar2 != 0xffffffff) {
              lVar3 = *param_1;
              if ((((*(char *)(*(int64_t *)(lVar4 + *(int64_t *)(lVar3 + 0x3f8)) + 8 +
                              (int64_t)(int)(uVar1 & *(uint *)(lVar3 + 0x418)) * 0xc) != '\0') ||
                   (*(char *)(*(int64_t *)
                               (*(int64_t *)(lVar3 + 0x3f8) + (int64_t)((int)uVar2 >> 10) * 8) + 8
                             + (int64_t)(int)(uVar2 & *(uint *)(lVar3 + 0x418)) * 0xc) != '\0')) &&
                  (uVar1 = *(uint *)(*(int64_t *)
                                      (*(int64_t *)(lVar3 + 0x2c68) +
                                      (int64_t)((int)uVar2 >> 10) * 8) + 0x14 +
                                    (int64_t)(int)(*(uint *)(lVar3 + 0x2c88) & uVar2) * 0x68),
                  uVar1 != 0xffffffff)) &&
                 ((uVar1 = *(uint *)(*(int64_t *)
                                      (*(int64_t *)(lVar3 + 11000) +
                                      (int64_t)((int)uVar1 >> 10) * 8) + 0x1c +
                                    (int64_t)(int)(*(uint *)(lVar3 + 0x2b18) & uVar1) * 0xd8),
                  uVar1 != 0xffffffff &&
                  (plVar5 = *(int64_t **)
                             (*(int64_t *)
                               (*(int64_t *)
                                 (*(int64_t *)(lVar3 + 0x698) + (int64_t)((int)uVar1 >> 10) * 8) +
                                8 + (int64_t)(int)(*(uint *)(lVar3 + 0x6b8) & uVar1) * 0x30) +
                             0x210), plVar5 != (int64_t *)0x0)))) {
                (**(code **)(*plVar5 + 0x48))();
              }
            }
          }
        }
      }
      uVar9 = (uint64_t)(iVar8 + 1U);
      uVar10 = uVar10 + 1;
    } while ((int)(iVar8 + 1U) < param_3);
  }
  return;
}






// 函数: void FUN_1804d280c(void)
void FUN_1804d280c(void)

{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  uint64_t unaff_RBX;
  uint64_t uVar10;
  int unaff_R12D;
  int64_t *unaff_R15;
  
  uVar10 = unaff_RBX;
  do {
    lVar3 = *unaff_R15;
    iVar9 = (int)unaff_RBX;
    if (iVar9 < *(int *)(lVar3 + 0x614)) {
      uVar6 = (int64_t)*(int *)(lVar3 + 0x660) & uVar10;
      lVar4 = *(int64_t *)(*(int64_t *)(lVar3 + 0x640) + (int64_t)(iVar9 >> 10) * 8);
      if (((*(int *)(lVar4 + uVar6 * 0xc) != -1) &&
          (puVar7 = (uint *)(lVar4 + uVar6 * 0xc + 8), puVar7 != (uint *)0x0)) &&
         (uVar1 = *puVar7, (int)uVar1 < *(int *)(lVar3 + 0x2c3c))) {
        lVar4 = (int64_t)((int)uVar1 >> 10) * 8;
        piVar8 = (int *)((int64_t)(int)(*(uint *)(lVar3 + 0x2c88) & uVar1) * 0x68 +
                        *(int64_t *)(*(int64_t *)(lVar3 + 0x2c68) + lVar4));
        if ((*piVar8 != -1) && (piVar8 != (int *)0xfffffffffffffff8)) {
          uVar2 = piVar8[5];
          if (uVar2 != 0xffffffff) {
            uVar2 = *(uint *)(*(int64_t *)
                               (*(int64_t *)(lVar3 + 11000) + (int64_t)((int)uVar2 >> 10) * 8) +
                              0x1c + (int64_t)(int)(*(uint *)(lVar3 + 0x2b18) & uVar2) * 0xd8);
            if (uVar2 != 0xffffffff) {
              plVar5 = *(int64_t **)
                        (*(int64_t *)
                          (*(int64_t *)
                            (*(int64_t *)(lVar3 + 0x698) + (int64_t)((int)uVar2 >> 10) * 8) + 8 +
                          (int64_t)(int)(*(uint *)(lVar3 + 0x6b8) & uVar2) * 0x30) + 0x210);
              if (plVar5 != (int64_t *)0x0) {
                (**(code **)(*plVar5 + 0x48))();
              }
            }
          }
          uVar2 = piVar8[4];
          if (uVar2 != 0xffffffff) {
            lVar3 = *unaff_R15;
            if (((*(char *)(*(int64_t *)(lVar4 + *(int64_t *)(lVar3 + 0x3f8)) + 8 +
                           (int64_t)(int)(uVar1 & *(uint *)(lVar3 + 0x418)) * 0xc) != '\0') ||
                (*(char *)(*(int64_t *)
                            (*(int64_t *)(lVar3 + 0x3f8) + (int64_t)((int)uVar2 >> 10) * 8) + 8 +
                          (int64_t)(int)(uVar2 & *(uint *)(lVar3 + 0x418)) * 0xc) != '\0')) &&
               ((uVar1 = *(uint *)(*(int64_t *)
                                    (*(int64_t *)(lVar3 + 0x2c68) +
                                    (int64_t)((int)uVar2 >> 10) * 8) + 0x14 +
                                  (int64_t)(int)(*(uint *)(lVar3 + 0x2c88) & uVar2) * 0x68),
                uVar1 != 0xffffffff &&
                (uVar1 = *(uint *)(*(int64_t *)
                                    (*(int64_t *)(lVar3 + 11000) + (int64_t)((int)uVar1 >> 10) * 8
                                    ) + 0x1c +
                                  (int64_t)(int)(*(uint *)(lVar3 + 0x2b18) & uVar1) * 0xd8),
                uVar1 != 0xffffffff)))) {
              plVar5 = *(int64_t **)
                        (*(int64_t *)
                          (*(int64_t *)
                            (*(int64_t *)(lVar3 + 0x698) + (int64_t)((int)uVar1 >> 10) * 8) + 8 +
                          (int64_t)(int)(*(uint *)(lVar3 + 0x6b8) & uVar1) * 0x30) + 0x210);
              if (plVar5 != (int64_t *)0x0) {
                (**(code **)(*plVar5 + 0x48))();
              }
            }
          }
        }
      }
    }
    unaff_RBX = (uint64_t)(iVar9 + 1U);
    uVar10 = uVar10 + 1;
  } while ((int)(iVar9 + 1U) < unaff_R12D);
  return;
}






