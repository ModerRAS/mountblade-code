#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part049.c - 5 个函数

// 函数: void FUN_1801ba720(int64_t param_1)
void FUN_1801ba720(int64_t param_1)

{
  uint *puVar1;
  int8_t auStack_d8 [32];
  code *pcStack_b8;
  uint64_t uStack_a8;
  int64_t lStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int8_t auStack_70 [16];
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_18;
  
  if (param_1 != 0) {
    uStack_a8 = 0xfffffffffffffffe;
    uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
    if (*(int64_t *)(param_1 + 0x58) != 0) {
      puVar1 = (uint *)(*(int64_t *)(param_1 + 0x58) + 0x328);
      *puVar1 = *puVar1 & 0xdfffffff;
    }
    if (*(int64_t *)(param_1 + 0x60) != 0) {
      puVar1 = (uint *)(*(int64_t *)(param_1 + 0x60) + 0x328);
      *puVar1 = *puVar1 & 0xdfffffff;
    }
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pcStack_b8 = FUN_180045af0;
    lStack_a0 = param_1;
    DataStructureManager(auStack_70,8,2,&SUB_18005d5f0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_180247d00(param_1,&uStack_98);
    FUN_18024e1f0(&uStack_98);
    FUN_18024e1f0(param_1);
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ba850(int64_t *param_1,uint param_2,int param_3)
void FUN_1801ba850(int64_t *param_1,uint param_2,int param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  int64_t *plVar6;
  uint uVar7;
  char *pcVar8;
  uint64_t uVar9;
  int iVar10;
  uint64_t uVar11;
  uint *puVar12;
  int64_t lVar13;
  uint uVar14;
  int64_t lVar15;
  uint *puVar16;
  bool bVar17;
  uint uStackX_10;
  int iStackX_20;
  int64_t lStack_b8;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int iStack_a0;
  int16_t uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int8_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint uStack_78;
  int16_t uStack_74;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int8_t uStack_54;
  uint64_t uStack_40;
  
  uStackX_10 = param_2;
  if ((int)param_2 < param_3) {
    do {
      lVar1 = *(int64_t *)
               (*(int64_t *)
                 ((int64_t)*(int *)param_1[1] * 0x908 + *param_1 + 8 +
                 (uint64_t)(uStackX_10 >> 0xc) * 8) +
               (uint64_t)(uStackX_10 + (uStackX_10 >> 0xc) * -0x1000) * 8);
      if ((*(char *)param_1[2] != '\0') || ((*(byte *)(lVar1 + 0x2e8) & 0xb) == 0xb)) {
        bVar17 = false;
        iStackX_20 = 0;
        if (0 < *(int *)param_1[3]) {
          lStack_b8 = 0;
          do {
            iVar10 = 0;
            lVar15 = *(int64_t *)(lStack_b8 + param_1[4]);
            if (((*(uint *)(lVar15 + 4) & 0x1000000) == 0) &&
               (cVar2 = FUN_1801ab580(param_1[5],lVar1,*(uint64_t *)param_1[6]), cVar2 != '\0')) {
              lVar13 = param_1[7];
              if (*(int64_t *)(lVar1 + 0x260) != 0) {
                FUN_1801bcce0(*(int64_t *)(lVar1 + 0x260),lVar1 + 0x70,lVar13,
                              *(int32_t *)(param_1[5] + 0x8220));
              }
              if ((*(uint *)(lVar15 + 4) & 0x100) == 0) {
                FUN_1802e73b0(lVar1,lVar13 + 0x30,lVar15);
              }
              iStack_a0 = (int)*(float *)(lVar1 + 0x2c0);
              uStack_a4 = 0;
              uStack_9c = 0xff00;
              uStack_98 = 0;
              uStack_90 = 0xffffffffffffffff;
              uStack_88 = 0xffffffff;
              uStack_84 = 0xff;
              uStack_80 = 0xffffffff;
              uStack_a8 = *(int32_t *)(lVar1 + 0x2b8);
              uStack_78 = (uint)(*(char *)(lVar1 + 0x2e4) == '\0');
              uStack_7c = 0;
              uStack_74 = 0x400;
              uStack_70 = 0;
              uStack_68 = 0;
              uStack_60 = 0;
              uStack_58 = 0;
              uStack_54 = 0;
              uStack_40 = 0;
              FUN_1802e7550(lVar1,lVar15,&uStack_a8);
              plVar6 = *(int64_t **)(lVar1 + 0x1c0);
              iVar3 = (int)(*(int64_t *)(lVar1 + 0x1c8) - (int64_t)plVar6 >> 3);
              if ((!bVar17) && (0 < iVar3)) {
                lVar15 = (int64_t)iVar3;
                if ((*(char *)param_1[8] == '\0') && (lVar13 = lVar15, iVar3 = 0, 0 < lVar15)) {
                  do {
                    lVar4 = *plVar6;
                    plVar6 = plVar6 + 1;
                    iVar3 = iVar10 + 1;
                    if ((*(uint *)(lVar4 + 0x2ac) & 0x10000000) != 0) {
                      iVar3 = iVar10;
                    }
                    lVar13 = lVar13 + -1;
                    iVar10 = iVar3;
                  } while (lVar13 != 0);
                }
                puVar12 = (uint *)((int64_t)*(int *)param_1[9] * 0x908 + *param_1);
                if (iVar3 == 0) {
                  uVar14 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar14 = *puVar12;
                  *puVar12 = *puVar12 + iVar3;
                  UNLOCK();
                  uVar11 = (uint64_t)(uVar14 >> 0xc);
                  uVar9 = (uint64_t)(iVar3 + -1 + uVar14 >> 0xc);
                  if (uVar11 <= uVar9) {
                    pcVar8 = (char *)((int64_t)puVar12 + uVar11 + 0x808);
                    lVar13 = (uVar9 - uVar11) + 1;
                    puVar16 = puVar12 + (uint64_t)(uVar14 >> 0xc) * 2 + 2;
                    do {
                      iVar10 = (int)uVar11;
                      if (*(int64_t *)puVar16 == 0) {
                        lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x8000,0x25);
                        LOCK();
                        bVar17 = *(int64_t *)(puVar12 + (int64_t)iVar10 * 2 + 2) == 0;
                        if (bVar17) {
                          *(int64_t *)(puVar12 + (int64_t)iVar10 * 2 + 2) = lVar4;
                        }
                        UNLOCK();
                        if (bVar17) {
                          LOCK();
                          *(int8_t *)((int64_t)iVar10 + 0x808 + (int64_t)puVar12) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
                            CoreMemoryPoolInitializer(lVar4);
                          }
                          do {
                          } while (*pcVar8 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar8 != '\0');
                      }
                      uVar11 = (uint64_t)(iVar10 + 1);
                      puVar16 = puVar16 + 2;
                      pcVar8 = pcVar8 + 1;
                      lVar13 = lVar13 + -1;
                    } while (lVar13 != 0);
                  }
                }
                lVar13 = 0;
                if (0 < lVar15) {
                  do {
                    lVar4 = *(int64_t *)(*(int64_t *)(lVar1 + 0x1c0) + lVar13 * 8);
                    if ((*(char *)param_1[8] != '\0') ||
                       ((*(uint *)(lVar4 + 0x2ac) & 0x10000000) == 0)) {
                      uVar5 = uVar14 >> 0xc;
                      uVar7 = uVar14 + uVar5 * -0x1000;
                      uVar14 = uVar14 + 1;
                      *(int64_t *)
                       (*(int64_t *)
                         ((int64_t)*(int *)param_1[9] * 0x908 + *param_1 + 8 + (uint64_t)uVar5 * 8
                         ) + (uint64_t)uVar7 * 8) = lVar4;
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < lVar15);
                }
                bVar17 = true;
              }
            }
            lStack_b8 = lStack_b8 + 8;
            iStackX_20 = iStackX_20 + 1;
          } while (iStackX_20 < *(int *)param_1[3]);
        }
      }
      uStackX_10 = uStackX_10 + 1;
    } while ((int)uStackX_10 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ba86c(int64_t *param_1,uint param_2)
void FUN_1801ba86c(int64_t *param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t lVar4;
  uint uVar5;
  int64_t *plVar6;
  uint uVar7;
  uint64_t unaff_RBX;
  char *pcVar8;
  uint64_t unaff_RBP;
  uint64_t uVar9;
  int iVar10;
  uint64_t unaff_RSI;
  uint64_t uVar11;
  uint64_t unaff_RDI;
  uint *puVar12;
  int64_t lVar13;
  uint uVar14;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t lVar15;
  uint64_t unaff_R14;
  uint *puVar16;
  int64_t lVar17;
  bool bVar18;
  byte bStack0000000000000028;
  int32_t uStack0000000000000030;
  int8_t uStack0000000000000038;
  int64_t lStack0000000000000040;
  int64_t lStack0000000000000048;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int iStack0000000000000058;
  int16_t uStack000000000000005c;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  int32_t uStack0000000000000070;
  int8_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  uint uStack0000000000000080;
  int16_t uStack0000000000000084;
  uint64_t in_stack_00000088;
  int32_t in_stack_00000090;
  uint64_t in_stack_00000098;
  int32_t uStack00000000000000a0;
  int8_t uStack00000000000000a4;
  uint64_t in_stack_000000b8;
  uint in_stack_00000108;
  int in_stack_00000110;
  int iStack0000000000000118;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  do {
    lVar4 = *(int64_t *)
             (*(int64_t *)
               ((int64_t)*(int *)param_1[1] * 0x908 + *param_1 + 8 +
               (uint64_t)(param_2 >> 0xc) * 8) +
             (uint64_t)(param_2 + (param_2 >> 0xc) * -0x1000) * 8);
    if ((*(char *)param_1[2] != '\0') || ((*(byte *)(lVar4 + 0x2e8) & 0xb) == 0xb)) {
      bVar18 = false;
      iStack0000000000000118 = 0;
      if (0 < *(int *)param_1[3]) {
        lStack0000000000000040 = 0;
        lStack0000000000000048 = lVar4;
        do {
          lVar17 = lStack0000000000000040;
          iVar10 = 0;
          lVar15 = *(int64_t *)(lStack0000000000000040 + param_1[4]);
          bStack0000000000000028 = 0;
          if (*(int *)(lVar15 + 8) != -1) {
            bStack0000000000000028 = (byte)*(int32_t *)(lVar15 + 0x18);
          }
          if ((*(uint *)(lVar15 + 4) & 0x1000000) == 0) {
            bStack0000000000000028 = bStack0000000000000028 & 1;
            uStack0000000000000030 = *(int32_t *)(lVar15 + 0x174);
            uStack0000000000000038 = *(int8_t *)param_1[2];
            cVar2 = FUN_1801ab580(param_1[5],lVar4,*(uint64_t *)param_1[6]);
            if (cVar2 != '\0') {
              lVar13 = param_1[7];
              if (*(int64_t *)(lVar4 + 0x260) != 0) {
                FUN_1801bcce0(*(int64_t *)(lVar4 + 0x260),lVar4 + 0x70,lVar13,
                              *(int32_t *)(param_1[5] + 0x8220));
              }
              if ((*(uint *)(lVar15 + 4) & 0x100) == 0) {
                FUN_1802e73b0(lVar4,lVar13 + 0x30,lVar15);
              }
              iStack0000000000000058 = (int)*(float *)(lVar4 + 0x2c0);
              uStack0000000000000054 = 0;
              uStack000000000000005c = 0xff00;
              in_stack_00000060 = 0;
              in_stack_00000068 = 0xffffffffffffffff;
              uStack0000000000000070 = 0xffffffff;
              uStack0000000000000074 = 0xff;
              uStack0000000000000078 = 0xffffffff;
              uStack0000000000000050 = *(int32_t *)(lVar4 + 0x2b8);
              uStack0000000000000080 = (uint)(*(char *)(lVar4 + 0x2e4) == '\0');
              uStack000000000000007c = 0;
              uStack0000000000000084 = 0x400;
              in_stack_00000088 = 0;
              in_stack_00000090 = 0;
              in_stack_00000098 = 0;
              uStack00000000000000a0 = 0;
              uStack00000000000000a4 = 0;
              in_stack_000000b8 = 0;
              FUN_1802e7550(lVar4,lVar15,&stack0x00000050);
              plVar6 = *(int64_t **)(lVar4 + 0x1c0);
              iVar3 = (int)(*(int64_t *)(lVar4 + 0x1c8) - (int64_t)plVar6 >> 3);
              if ((!bVar18) && (0 < iVar3)) {
                lVar15 = (int64_t)iVar3;
                if ((*(char *)param_1[8] == '\0') && (lVar13 = lVar15, iVar3 = 0, 0 < lVar15)) {
                  do {
                    lVar1 = *plVar6;
                    plVar6 = plVar6 + 1;
                    iVar3 = iVar10 + 1;
                    if ((*(uint *)(lVar1 + 0x2ac) & 0x10000000) != 0) {
                      iVar3 = iVar10;
                    }
                    lVar13 = lVar13 + -1;
                    iVar10 = iVar3;
                  } while (lVar13 != 0);
                }
                puVar12 = (uint *)((int64_t)*(int *)param_1[9] * 0x908 + *param_1);
                if (iVar3 == 0) {
                  uVar14 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar14 = *puVar12;
                  *puVar12 = *puVar12 + iVar3;
                  UNLOCK();
                  uVar11 = (uint64_t)(uVar14 >> 0xc);
                  uVar9 = (uint64_t)(iVar3 + -1 + uVar14 >> 0xc);
                  lVar4 = lStack0000000000000048;
                  if (uVar11 <= uVar9) {
                    pcVar8 = (char *)((int64_t)puVar12 + uVar11 + 0x808);
                    lVar13 = (uVar9 - uVar11) + 1;
                    puVar16 = puVar12 + (uint64_t)(uVar14 >> 0xc) * 2 + 2;
                    do {
                      iVar10 = (int)uVar11;
                      if (*(int64_t *)puVar16 == 0) {
                        lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x8000,0x25);
                        LOCK();
                        bVar18 = *(int64_t *)(puVar12 + (int64_t)iVar10 * 2 + 2) == 0;
                        if (bVar18) {
                          *(int64_t *)(puVar12 + (int64_t)iVar10 * 2 + 2) = lVar4;
                        }
                        UNLOCK();
                        if (bVar18) {
                          LOCK();
                          *(int8_t *)((int64_t)iVar10 + 0x808 + (int64_t)puVar12) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
                            CoreMemoryPoolInitializer(lVar4);
                          }
                          do {
                          } while (*pcVar8 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar8 != '\0');
                      }
                      uVar11 = (uint64_t)(iVar10 + 1);
                      puVar16 = puVar16 + 2;
                      pcVar8 = pcVar8 + 1;
                      lVar13 = lVar13 + -1;
                      lVar4 = lStack0000000000000048;
                      lVar17 = lStack0000000000000040;
                    } while (lVar13 != 0);
                  }
                }
                lVar13 = 0;
                if (0 < lVar15) {
                  do {
                    lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x1c0) + lVar13 * 8);
                    if ((*(char *)param_1[8] != '\0') ||
                       ((*(uint *)(lVar1 + 0x2ac) & 0x10000000) == 0)) {
                      uVar5 = uVar14 >> 0xc;
                      uVar7 = uVar14 + uVar5 * -0x1000;
                      uVar14 = uVar14 + 1;
                      *(int64_t *)
                       (*(int64_t *)
                         ((int64_t)*(int *)param_1[9] * 0x908 + *param_1 + 8 + (uint64_t)uVar5 * 8
                         ) + (uint64_t)uVar7 * 8) = lVar1;
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < lVar15);
                }
                bVar18 = true;
              }
            }
          }
          lStack0000000000000040 = lVar17 + 8;
          iStack0000000000000118 = iStack0000000000000118 + 1;
        } while (iStack0000000000000118 < *(int *)param_1[3]);
      }
    }
    param_2 = in_stack_00000108 + 1;
    in_stack_00000108 = param_2;
  } while ((int)param_2 < in_stack_00000110);
  return;
}






// 函数: void FUN_1801bac74(void)
void FUN_1801bac74(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bac80(int64_t *param_1,uint param_2,int param_3)
void FUN_1801bac80(int64_t *param_1,uint param_2,int param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  int64_t *plVar6;
  uint uVar7;
  char *pcVar8;
  uint64_t uVar9;
  int iVar10;
  uint64_t uVar11;
  uint *puVar12;
  int64_t lVar13;
  uint uVar14;
  int64_t lVar15;
  uint *puVar16;
  bool bVar17;
  uint uStackX_10;
  int iStackX_20;
  int64_t lStack_b8;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int iStack_a0;
  int16_t uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int8_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint uStack_78;
  int16_t uStack_74;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int8_t uStack_54;
  uint64_t uStack_40;
  
  uStackX_10 = param_2;
  if ((int)param_2 < param_3) {
    do {
      lVar1 = *(int64_t *)
               (*(int64_t *)
                 ((int64_t)*(int *)param_1[1] * 0x908 + *param_1 + 8 +
                 (uint64_t)(uStackX_10 >> 0xc) * 8) +
               (uint64_t)(uStackX_10 + (uStackX_10 >> 0xc) * -0x1000) * 8);
      if ((*(char *)param_1[2] != '\0') || ((*(byte *)(lVar1 + 0x2e8) & 0xb) == 0xb)) {
        bVar17 = false;
        iStackX_20 = 0;
        if (0 < *(int *)param_1[3]) {
          lStack_b8 = 0;
          do {
            iVar10 = 0;
            lVar15 = *(int64_t *)(lStack_b8 + param_1[4]);
            if (((*(uint *)(lVar15 + 4) & 0x1000000) == 0) &&
               (cVar2 = FUN_1801ab580(param_1[5],lVar1,*(uint64_t *)param_1[6]), cVar2 != '\0')) {
              lVar13 = param_1[7];
              if (*(int64_t *)(lVar1 + 0x260) != 0) {
                FUN_1801bcdd0(*(int64_t *)(lVar1 + 0x260),lVar1 + 0x70,lVar13,
                              *(int32_t *)(param_1[5] + 0x8220));
              }
              if ((*(uint *)(lVar15 + 4) & 0x100) == 0) {
                FUN_1802e73b0(lVar1,lVar13 + 0x30,lVar15);
              }
              iStack_a0 = (int)*(float *)(lVar1 + 0x2c0);
              uStack_a4 = 0;
              uStack_9c = 0xff00;
              uStack_98 = 0;
              uStack_90 = 0xffffffffffffffff;
              uStack_88 = 0xffffffff;
              uStack_84 = 0xff;
              uStack_80 = 0xffffffff;
              uStack_a8 = *(int32_t *)(lVar1 + 0x2b8);
              uStack_78 = (uint)(*(char *)(lVar1 + 0x2e4) == '\0');
              uStack_7c = 0;
              uStack_74 = 0x400;
              uStack_70 = 0;
              uStack_68 = 0;
              uStack_60 = 0;
              uStack_58 = 0;
              uStack_54 = 0;
              uStack_40 = 0;
              FUN_1802e7550(lVar1,lVar15,&uStack_a8);
              plVar6 = *(int64_t **)(lVar1 + 0x1c0);
              iVar3 = (int)(*(int64_t *)(lVar1 + 0x1c8) - (int64_t)plVar6 >> 3);
              if ((!bVar17) && (0 < iVar3)) {
                lVar15 = (int64_t)iVar3;
                if ((*(char *)param_1[8] == '\0') && (lVar13 = lVar15, iVar3 = 0, 0 < lVar15)) {
                  do {
                    lVar4 = *plVar6;
                    plVar6 = plVar6 + 1;
                    iVar3 = iVar10 + 1;
                    if ((*(uint *)(lVar4 + 0x2ac) & 0x10000000) != 0) {
                      iVar3 = iVar10;
                    }
                    lVar13 = lVar13 + -1;
                    iVar10 = iVar3;
                  } while (lVar13 != 0);
                }
                puVar12 = (uint *)((int64_t)*(int *)param_1[9] * 0x908 + *param_1);
                if (iVar3 == 0) {
                  uVar14 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar14 = *puVar12;
                  *puVar12 = *puVar12 + iVar3;
                  UNLOCK();
                  uVar11 = (uint64_t)(uVar14 >> 0xc);
                  uVar9 = (uint64_t)(iVar3 + -1 + uVar14 >> 0xc);
                  if (uVar11 <= uVar9) {
                    pcVar8 = (char *)((int64_t)puVar12 + uVar11 + 0x808);
                    lVar13 = (uVar9 - uVar11) + 1;
                    puVar16 = puVar12 + (uint64_t)(uVar14 >> 0xc) * 2 + 2;
                    do {
                      iVar10 = (int)uVar11;
                      if (*(int64_t *)puVar16 == 0) {
                        lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x8000,0x25);
                        LOCK();
                        bVar17 = *(int64_t *)(puVar12 + (int64_t)iVar10 * 2 + 2) == 0;
                        if (bVar17) {
                          *(int64_t *)(puVar12 + (int64_t)iVar10 * 2 + 2) = lVar4;
                        }
                        UNLOCK();
                        if (bVar17) {
                          LOCK();
                          *(int8_t *)((int64_t)iVar10 + 0x808 + (int64_t)puVar12) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
                            CoreMemoryPoolInitializer(lVar4);
                          }
                          do {
                          } while (*pcVar8 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar8 != '\0');
                      }
                      uVar11 = (uint64_t)(iVar10 + 1);
                      puVar16 = puVar16 + 2;
                      pcVar8 = pcVar8 + 1;
                      lVar13 = lVar13 + -1;
                    } while (lVar13 != 0);
                  }
                }
                lVar13 = 0;
                if (0 < lVar15) {
                  do {
                    lVar4 = *(int64_t *)(*(int64_t *)(lVar1 + 0x1c0) + lVar13 * 8);
                    if ((*(char *)param_1[8] != '\0') ||
                       ((*(uint *)(lVar4 + 0x2ac) & 0x10000000) == 0)) {
                      uVar5 = uVar14 >> 0xc;
                      uVar7 = uVar14 + uVar5 * -0x1000;
                      uVar14 = uVar14 + 1;
                      *(int64_t *)
                       (*(int64_t *)
                         ((int64_t)*(int *)param_1[9] * 0x908 + *param_1 + 8 + (uint64_t)uVar5 * 8
                         ) + (uint64_t)uVar7 * 8) = lVar4;
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < lVar15);
                }
                bVar17 = true;
              }
            }
            lStack_b8 = lStack_b8 + 8;
            iStackX_20 = iStackX_20 + 1;
          } while (iStackX_20 < *(int *)param_1[3]);
        }
      }
      uStackX_10 = uStackX_10 + 1;
    } while ((int)uStackX_10 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




