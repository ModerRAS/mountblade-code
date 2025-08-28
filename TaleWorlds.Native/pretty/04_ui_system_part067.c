#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part067.c - 6 个函数

// 函数: void FUN_18069e6e0(int64_t param_1)
void FUN_18069e6e0(int64_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int32_t uVar7;
  int iVar8;
  int32_t *puVar9;
  int64_t lVar10;
  int32_t *puVar11;
  int *piVar12;
  int32_t *puVar13;
  uint64_t uVar14;
  int32_t *puVar15;
  uint64_t uVar16;
  int8_t auStack_118 [32];
  int64_t lStack_f8;
  int64_t lStack_f0;
  int iStack_e8;
  int iStack_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  int iStack_c0;
  int iStack_b8;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int iStack_70;
  int iStack_6c;
  int64_t lStack_68;
  uint uStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int aiStack_40 [4];
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  lVar6 = *(int64_t *)(param_1 + 0x778);
  uStack_60 = *(uint *)(param_1 + 0xba4);
  uVar14 = (uint64_t)(int)uStack_60;
  lStack_58 = *(int64_t *)(param_1 + 0xbf8);
  lStack_a0 = *(int64_t *)(lVar6 + 0x38);
  lStack_98 = *(int64_t *)(lVar6 + 0x40);
  lStack_90 = *(int64_t *)(lVar6 + 0x48);
  lStack_88 = *(int64_t *)(param_1 + 0xaa8);
  lStack_68 = *(int64_t *)(param_1 + 0xab0);
  lStack_78 = *(int64_t *)(param_1 + 0xab8);
  uStack_a8 = *(int32_t *)(param_1 + 0xbd0);
  uVar7 = *(int32_t *)(param_1 + 0x2e38);
  iStack_6c = 0;
  uVar16 = uVar14;
  uStack_a4 = uVar7;
  lStack_80 = lVar6;
  lStack_48 = param_1;
  if (0 < *(int *)(param_1 + 0xbb4)) {
    do {
      iStack_70 = 0;
      if (0 < *(int *)(param_1 + 3000)) {
        do {
          lVar5 = lStack_58;
          lVar10 = lStack_68;
          lVar4 = lStack_78;
          if (uVar14 == 1) {
            iVar3 = FUN_18069e4f0(lStack_58,aiStack_40);
            lVar6 = lStack_80;
          }
          else {
            iVar3 = 0;
            if ((int)uVar16 == 0) {
              iVar3 = 4;
            }
          }
          if (iVar3 == 0) {
            func_0x00018001cb80(lStack_a0,*(int32_t *)(lVar6 + 0x10),lStack_88,
                                *(int32_t *)(param_1 + 0xa80));
            lVar6 = lStack_80;
            func_0x00018001cc90(lStack_98,*(int32_t *)(lStack_80 + 0x24),lVar10,
                                *(int32_t *)(param_1 + 0xa94));
            func_0x00018001cc90(lStack_90,*(int32_t *)(lVar6 + 0x24),lVar4,
                                *(int32_t *)(param_1 + 0xa94));
            uVar7 = uStack_a4;
          }
          else if (iVar3 < 4) {
            iVar3 = 0;
            piVar12 = aiStack_40;
            do {
              iVar8 = 0;
              lStack_50 = 2;
              do {
                if (*piVar12 == 0) {
                  lVar5 = (int64_t)((*(int *)(lVar6 + 0x24) * iVar3 + iVar8) * 4);
                  puVar9 = (int32_t *)(lVar5 + lStack_90);
                  puVar15 = (int32_t *)(lVar5 + lStack_98);
                  lVar5 = (int64_t)((iVar3 * *(int *)(param_1 + 0xa94) + iVar8) * 4);
                  puVar11 = (int32_t *)(lVar10 + lVar5);
                  puVar13 = (int32_t *)(lVar4 + lVar5);
                  func_0x00018001cc90((*(int *)(lVar6 + 0x10) * iVar3 + iVar8) * 8 + lStack_a0,
                                      *(int *)(lVar6 + 0x10),
                                      (*(int *)(param_1 + 0xa80) * iVar3 + iVar8) * 8 + lStack_88);
                  *puVar11 = *puVar15;
                  *puVar13 = *puVar9;
                  puVar11 = (int32_t *)((int64_t)puVar11 + (int64_t)*(int *)(param_1 + 0xa94));
                  puVar13 = (int32_t *)((int64_t)puVar13 + (int64_t)*(int *)(param_1 + 0xa94));
                  puVar15 = (int32_t *)((int64_t)puVar15 + (int64_t)*(int *)(lStack_80 + 0x24))
                  ;
                  puVar9 = (int32_t *)((int64_t)puVar9 + (int64_t)*(int *)(lStack_80 + 0x24));
                  *puVar11 = *puVar15;
                  *puVar13 = *puVar9;
                  puVar11 = (int32_t *)((int64_t)puVar11 + (int64_t)*(int *)(param_1 + 0xa94));
                  puVar13 = (int32_t *)((int64_t)puVar13 + (int64_t)*(int *)(param_1 + 0xa94));
                  puVar15 = (int32_t *)((int64_t)puVar15 + (int64_t)*(int *)(lStack_80 + 0x24))
                  ;
                  puVar9 = (int32_t *)((int64_t)puVar9 + (int64_t)*(int *)(lStack_80 + 0x24));
                  *puVar11 = *puVar15;
                  *puVar13 = *puVar9;
                  iVar1 = *(int *)(lStack_80 + 0x24);
                  iVar2 = *(int *)(param_1 + 0xa94);
                  *(int32_t *)((int64_t)iVar2 + (int64_t)puVar11) =
                       *(int32_t *)((int64_t)iVar1 + (int64_t)puVar15);
                  *(int32_t *)((int64_t)puVar13 + (int64_t)iVar2) =
                       *(int32_t *)((int64_t)puVar9 + (int64_t)iVar1);
                }
                else {
                  iStack_e0 = *(int *)(lVar6 + 0x24);
                  iStack_b8 = *(int *)(param_1 + 0xa94);
                  iStack_c0 = *(int *)(param_1 + 0xa80);
                  iStack_e8 = *(int *)(lVar6 + 0x10);
                  lStack_d0 = (int64_t)((iStack_b8 * iVar3 + iVar8) * 4);
                  lStack_c8 = lStack_78 + lStack_d0;
                  lStack_d0 = lVar10 + lStack_d0;
                  lStack_f8 = (int64_t)((iStack_e0 * iVar3 + iVar8) * 4);
                  lStack_f0 = lStack_90 + lStack_f8;
                  lStack_f8 = lStack_f8 + lStack_98;
                  lStack_d8 = (iStack_c0 * iVar3 + iVar8) * 8 + lStack_88;
                  FUN_18069dfe0(8,uStack_a8,uStack_a4,(iStack_e8 * iVar3 + iVar8) * 8 + lStack_a0);
                  param_1 = lStack_48;
                }
                iVar8 = iVar8 + 1;
                piVar12 = piVar12 + 1;
                lStack_50 = lStack_50 + -1;
                lVar6 = lStack_80;
                lVar10 = lStack_68;
                lVar4 = lStack_78;
              } while (lStack_50 != 0);
              iVar3 = iVar3 + 1;
            } while (iVar3 < 2);
            uVar16 = (uint64_t)uStack_60;
            lStack_50 = 0;
            lVar5 = lStack_58;
            uVar7 = uStack_a4;
          }
          else {
            iStack_b8 = *(int *)(param_1 + 0xa94);
            iStack_c0 = *(int *)(param_1 + 0xa80);
            iStack_e0 = *(int *)(lVar6 + 0x24);
            iStack_e8 = *(int *)(lVar6 + 0x10);
            lStack_f8 = lStack_98;
            lStack_f0 = lStack_90;
            lStack_d8 = lStack_88;
            lStack_d0 = lVar10;
            lStack_c8 = lVar4;
            FUN_18069dfe0(0x10,uStack_a8,uVar7,lStack_a0);
          }
          lStack_68 = lVar10 + 8;
          iStack_70 = iStack_70 + 1;
          lStack_a0 = lStack_a0 + 0x10;
          lStack_98 = lStack_98 + 8;
          lStack_90 = lStack_90 + 8;
          lStack_88 = lStack_88 + 0x10;
          lStack_78 = lVar4 + 8;
          lStack_58 = lVar5 + 0x4c;
          uVar14 = (uint64_t)(int)uVar16;
          lVar6 = lStack_80;
        } while (iStack_70 < *(int *)(param_1 + 3000));
      }
      iVar3 = *(int *)(param_1 + 3000);
      lStack_58 = lStack_58 + 0x4c;
      iStack_6c = iStack_6c + 1;
      lStack_a0 = lStack_a0 + (*(int *)(lVar6 + 0x10) - iVar3) * 0x10;
      lVar4 = (int64_t)((*(int *)(lVar6 + 0x24) - iVar3) * 8);
      lStack_98 = lStack_98 + lVar4;
      lStack_90 = lStack_90 + lVar4;
      lStack_88 = lStack_88 + (*(int *)(param_1 + 0xa80) - iVar3) * 0x10;
      lVar4 = (int64_t)((*(int *)(param_1 + 0xa94) - iVar3) * 8);
      lStack_68 = lStack_68 + lVar4;
      lStack_78 = lStack_78 + lVar4;
      uVar14 = (uint64_t)(int)uVar16;
    } while (iStack_6c < *(int *)(param_1 + 0xbb4));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_118);
}





// 函数: void FUN_18069e7c0(int32_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_18069e7c0(int32_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t lVar4;
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int32_t *puVar5;
  int64_t unaff_RDI;
  int32_t *puVar6;
  int64_t in_R10;
  int64_t in_R11;
  int unaff_R12D;
  int *piVar7;
  int iVar8;
  int64_t unaff_R14;
  int32_t *puVar9;
  int unaff_R15D;
  int32_t *puVar10;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int64_t in_stack_00000078;
  int64_t in_stack_00000080;
  int64_t in_stack_00000088;
  int64_t in_stack_00000090;
  int64_t in_stack_00000098;
  int64_t in_stack_000000a0;
  int iStack00000000000000a8;
  int iStack00000000000000ac;
  int64_t in_stack_000000b0;
  int in_stack_000000b8;
  int64_t in_stack_000000c0;
  int64_t lStack00000000000000c8;
  int64_t in_stack_000000d0;
  uint64_t in_stack_000000e8;
  
  iVar8 = unaff_R12D + 4;
  do {
    iStack00000000000000a8 = 0;
    if (0 < *(int *)(unaff_RBP + 3000)) {
      do {
        if (in_RAX == 1) {
          iVar3 = FUN_18069e4f0(unaff_RSI,&stack0x000000d8);
          param_2 = in_stack_00000098;
          param_3 = in_stack_00000088;
          param_4 = in_stack_00000080;
          in_R10 = in_stack_00000078;
          in_R11 = in_stack_00000090;
          param_1 = uStack0000000000000070;
        }
        else {
          iVar3 = 0;
          if (unaff_R15D == 0) {
            iVar3 = iVar8;
          }
        }
        if (iVar3 == 0) {
          func_0x00018001cb80(in_R10,*(int32_t *)(param_2 + 0x10),in_R11,
                              *(int32_t *)(unaff_RBP + 0xa80));
          func_0x00018001cc90(in_stack_00000080,*(int32_t *)(in_stack_00000098 + 0x24),unaff_RDI,
                              *(int32_t *)(unaff_RBP + 0xa94));
          func_0x00018001cc90(in_stack_00000088,*(int32_t *)(in_stack_00000098 + 0x24),unaff_R14,
                              *(int32_t *)(unaff_RBP + 0xa94));
          unaff_EBX = uStack0000000000000074;
        }
        else if (iVar3 < 4) {
          iVar8 = 0;
          piVar7 = (int *)&stack0x000000d8;
          do {
            iVar3 = 0;
            lStack00000000000000c8 = 2;
            do {
              if (*piVar7 == 0) {
                lVar4 = (int64_t)((*(int *)(param_2 + 0x24) * iVar8 + iVar3) * 4);
                puVar5 = (int32_t *)(lVar4 + param_3);
                puVar10 = (int32_t *)(lVar4 + param_4);
                lVar4 = (int64_t)((iVar8 * *(int *)(unaff_RBP + 0xa94) + iVar3) * 4);
                puVar6 = (int32_t *)(unaff_RDI + lVar4);
                puVar9 = (int32_t *)(unaff_R14 + lVar4);
                func_0x00018001cc90((*(int *)(param_2 + 0x10) * iVar8 + iVar3) * 8 + in_R10,
                                    *(int *)(param_2 + 0x10),
                                    (*(int *)(unaff_RBP + 0xa80) * iVar8 + iVar3) * 8 + in_R11);
                *puVar6 = *puVar10;
                *puVar9 = *puVar5;
                puVar6 = (int32_t *)((int64_t)puVar6 + (int64_t)*(int *)(unaff_RBP + 0xa94));
                puVar9 = (int32_t *)((int64_t)puVar9 + (int64_t)*(int *)(unaff_RBP + 0xa94));
                puVar10 = (int32_t *)
                          ((int64_t)puVar10 + (int64_t)*(int *)(in_stack_00000098 + 0x24));
                puVar5 = (int32_t *)
                         ((int64_t)puVar5 + (int64_t)*(int *)(in_stack_00000098 + 0x24));
                *puVar6 = *puVar10;
                *puVar9 = *puVar5;
                puVar6 = (int32_t *)((int64_t)puVar6 + (int64_t)*(int *)(unaff_RBP + 0xa94));
                puVar9 = (int32_t *)((int64_t)puVar9 + (int64_t)*(int *)(unaff_RBP + 0xa94));
                puVar10 = (int32_t *)
                          ((int64_t)puVar10 + (int64_t)*(int *)(in_stack_00000098 + 0x24));
                puVar5 = (int32_t *)
                         ((int64_t)puVar5 + (int64_t)*(int *)(in_stack_00000098 + 0x24));
                *puVar6 = *puVar10;
                *puVar9 = *puVar5;
                iVar1 = *(int *)(in_stack_00000098 + 0x24);
                iVar2 = *(int *)(unaff_RBP + 0xa94);
                *(int32_t *)((int64_t)iVar2 + (int64_t)puVar6) =
                     *(int32_t *)((int64_t)iVar1 + (int64_t)puVar10);
                *(int32_t *)((int64_t)puVar9 + (int64_t)iVar2) =
                     *(int32_t *)((int64_t)puVar5 + (int64_t)iVar1);
              }
              else {
                FUN_18069dfe0(8,uStack0000000000000070,uStack0000000000000074,
                              (*(int *)(param_2 + 0x10) * iVar8 + iVar3) * 8 + in_stack_00000078,
                              (*(int *)(param_2 + 0x24) * iVar8 + iVar3) * 4 + param_4);
                unaff_RBP = in_stack_000000d0;
              }
              iVar3 = iVar3 + 1;
              piVar7 = piVar7 + 1;
              lStack00000000000000c8 = lStack00000000000000c8 + -1;
              param_2 = in_stack_00000098;
              unaff_RDI = in_stack_000000b0;
              param_3 = in_stack_00000088;
              param_4 = in_stack_00000080;
              in_R10 = in_stack_00000078;
              in_R11 = in_stack_00000090;
              unaff_R14 = in_stack_000000a0;
            } while (lStack00000000000000c8 != 0);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
          iVar8 = 4;
          unaff_RSI = in_stack_000000c0;
          unaff_R15D = in_stack_000000b8;
          unaff_EBX = uStack0000000000000074;
        }
        else {
          FUN_18069dfe0(0x10,param_1,unaff_EBX,in_R10,param_4);
        }
        unaff_RDI = unaff_RDI + 8;
        iStack00000000000000a8 = iStack00000000000000a8 + 1;
        in_R10 = in_stack_00000078 + 0x10;
        param_4 = in_stack_00000080 + 8;
        param_3 = in_stack_00000088 + 8;
        in_R11 = in_stack_00000090 + 0x10;
        unaff_R14 = unaff_R14 + 8;
        unaff_RSI = unaff_RSI + 0x4c;
        in_RAX = (int64_t)unaff_R15D;
        param_2 = in_stack_00000098;
        unaff_R12D = iStack00000000000000ac;
        param_1 = uStack0000000000000070;
        in_stack_00000078 = in_R10;
        in_stack_00000080 = param_4;
        in_stack_00000088 = param_3;
        in_stack_00000090 = in_R11;
        in_stack_000000a0 = unaff_R14;
        in_stack_000000b0 = unaff_RDI;
        in_stack_000000c0 = unaff_RSI;
      } while (iStack00000000000000a8 < *(int *)(unaff_RBP + 3000));
    }
    iVar3 = *(int *)(unaff_RBP + 3000);
    unaff_RSI = unaff_RSI + 0x4c;
    unaff_R12D = unaff_R12D + 1;
    in_R10 = in_R10 + (*(int *)(param_2 + 0x10) - iVar3) * 0x10;
    lVar4 = (int64_t)((*(int *)(param_2 + 0x24) - iVar3) * 8);
    param_4 = param_4 + lVar4;
    param_3 = param_3 + lVar4;
    in_R11 = in_R11 + (*(int *)(unaff_RBP + 0xa80) - iVar3) * 0x10;
    lVar4 = (int64_t)((*(int *)(unaff_RBP + 0xa94) - iVar3) * 8);
    unaff_RDI = unaff_RDI + lVar4;
    unaff_R14 = unaff_R14 + lVar4;
    in_RAX = (int64_t)unaff_R15D;
    param_1 = uStack0000000000000070;
    in_stack_00000078 = in_R10;
    in_stack_00000080 = param_4;
    in_stack_00000088 = param_3;
    in_stack_00000090 = in_R11;
    in_stack_000000a0 = unaff_R14;
    iStack00000000000000ac = unaff_R12D;
    in_stack_000000b0 = unaff_RDI;
    in_stack_000000c0 = unaff_RSI;
  } while (unaff_R12D < *(int *)(unaff_RBP + 0xbb4));
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000e8 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18069ec52(void)
void FUN_18069ec52(void)

{
  uint64_t in_stack_000000e8;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000e8 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void SystemCore_Handler(int64_t *param_1)
void SystemCore_Handler(int64_t *param_1)

{
  byte bVar1;
  int32_t uVar2;
  uint64_t uVar3;
  byte bVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int8_t auStack_68 [32];
  byte abStack_48 [16];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  pbVar10 = (byte *)param_1[1];
  iVar11 = (int)param_1[3];
  uVar3 = *param_1 - (int64_t)pbVar10;
  iVar6 = 0x30 - iVar11;
  uVar8 = param_1[2];
  iVar12 = (iVar6 - (int)(uVar3 * 8)) + 8;
  if ((code *)param_1[4] != (code *)0x0) {
    uVar2 = (int32_t)uVar3;
    if (9 < uVar3) {
      uVar2 = 9;
    }
    (*(code *)param_1[4])(param_1[5],pbVar10,abStack_48,uVar2);
    pbVar10 = abStack_48;
  }
  iVar7 = 0;
  if (((iVar12 < 0) || (iVar11 = iVar11 + 0x40000000, iVar7 = iVar12, uVar3 * 8 != 0)) &&
     (iVar7 <= iVar6)) {
    lVar5 = param_1[1];
    uVar9 = iVar6 - iVar7;
    do {
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      lVar5 = lVar5 + 1;
      bVar4 = (byte)iVar6;
      iVar6 = iVar6 + -8;
      uVar8 = uVar8 | (uint64_t)bVar1 << (bVar4 & 0x3f);
      param_1[1] = lVar5;
    } while (iVar7 <= iVar6);
    *(uint *)(param_1 + 3) = iVar11 + ((uVar9 >> 3) + 1) * 8;
  }
  else {
    *(int *)(param_1 + 3) = iVar11;
  }
  param_1[2] = uVar8;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_68);
}



int32_t
FUN_18069ed90(int64_t *param_1,int64_t param_2,uint param_3,int64_t param_4,int64_t param_5)

{
  param_1[1] = param_2;
  *param_1 = (uint64_t)param_3 + param_2;
  param_1[5] = param_5;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0xfffffff8;
  *(int32_t *)((int64_t)param_1 + 0x1c) = 0xff;
  param_1[4] = param_4;
  if ((param_3 != 0) && (param_2 == 0)) {
    return 1;
  }
  SystemCore_Handler();
  return 0;
}





// 函数: void FUN_18069ef30(int64_t param_1,int64_t param_2,char *param_3,char *param_4,int64_t param_5,
void FUN_18069ef30(int64_t param_1,int64_t param_2,char *param_3,char *param_4,int64_t param_5,
                  uint64_t param_6,int64_t param_7,int param_8,int param_9,int param_10,
                  int param_11)

{
  byte bVar1;
  byte bVar2;
  int64_t lVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  int32_t uStackX_8;
  int iStackX_10;
  int iStack_68;
  
  iStackX_10 = 0x10;
  iStack_68 = 3;
  uVar12 = 0;
  iVar6 = SystemCore_Monitor(param_1,0x6e);
  if (iVar6 != 0) {
    iStackX_10 = 4;
    iStack_68 = 2;
    iVar6 = SystemCore_Monitor(param_1,0x6f);
    if (iVar6 != 0) {
      iStack_68 = SystemCore_Monitor(param_1,0x96);
      iStackX_10 = 2;
    }
  }
  lVar8 = (int64_t)iStack_68 * 0x10;
  do {
    bVar1 = (&ui_system_data_1328_ptr)[(int)uVar12 + lVar8];
    if ((bVar1 & 3) == 0) {
      if (*param_3 == '\t') {
        uStackX_8 = *(int *)(param_3 + (int64_t)(int)(uint)bVar1 * 4 + 0x18);
      }
      else {
        uStackX_8 = *(int *)(param_3 + 4);
      }
    }
    else {
      uStackX_8 = *(int *)(param_2 + 8 + (int64_t)(int)(uint)bVar1 * 4);
    }
    if ((bVar1 & 0xfc) == 0) {
      if (*param_4 == '\t') {
        iVar6 = *(int *)(param_4 + (int64_t)(int)(uint)bVar1 * 4 + 0x3c);
      }
      else {
        iVar6 = *(int *)(param_4 + 4);
      }
    }
    else {
      iVar6 = *(int *)(param_2 + -4 + (uint64_t)bVar1 * 4);
    }
    lVar3 = ((int64_t)(int)(((uint)(iVar6 == 0) * 2 | (uint)(uStackX_8 == 0)) * 2) |
            (uint64_t)(uStackX_8 == iVar6)) * 3;
    uVar13 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)(byte)(&ui_system_data_1120_ptr)[lVar3] >> 8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      SystemCore_Handler(param_1);
    }
    uVar10 = *(uint64_t *)(param_1 + 0x10);
    uVar9 = (uint64_t)uVar13 << 0x38;
    bVar15 = uVar10 < uVar9;
    if (!bVar15) {
      uVar13 = *(int *)(param_1 + 0x1c) - uVar13;
      uVar10 = uVar10 - uVar9;
    }
    bVar1 = (&processed_var_8608_ptr)[uVar13];
    iVar11 = *(int *)(param_1 + 0x18) - (uint)bVar1;
    iVar14 = uVar13 << (bVar1 & 0x1f);
    *(uint64_t *)(param_1 + 0x10) = uVar10 << (bVar1 & 0x3f);
    *(int *)(param_1 + 0x18) = iVar11;
    *(int *)(param_1 + 0x1c) = iVar14;
    if (bVar15) {
LAB_18069f21f:
      sVar4 = (short)uStackX_8;
    }
    else {
      uVar13 = ((uint)(byte)(&ui_system_data_1121_ptr)[lVar3] * (iVar14 + -1) >> 8) + 1;
      if (iVar11 < 0) {
        SystemCore_Handler(param_1);
      }
      uVar10 = *(uint64_t *)(param_1 + 0x10);
      uVar9 = (uint64_t)uVar13 << 0x38;
      bVar15 = uVar10 < uVar9;
      if (!bVar15) {
        uVar13 = *(int *)(param_1 + 0x1c) - uVar13;
        uVar10 = uVar10 - uVar9;
      }
      bVar2 = (&processed_var_8608_ptr)[uVar13];
      iVar14 = *(int *)(param_1 + 0x18) - (uint)bVar2;
      iVar11 = uVar13 << (bVar2 & 0x1f);
      *(uint64_t *)(param_1 + 0x10) = uVar10 << (bVar2 & 0x3f);
      *(int *)(param_1 + 0x18) = iVar14;
      *(int *)(param_1 + 0x1c) = iVar11;
      uStackX_8 = iVar6;
      if (bVar15) goto LAB_18069f21f;
      iVar6 = 0 << (bVar1 & 0x1f);
      uStackX_8 = 0;
      uVar13 = ((uint)(byte)(&ui_system_data_1122_ptr)[lVar3] * (iVar11 + -1) >> 8) + 1;
      if (iVar14 < 0) {
        SystemCore_Handler(param_1);
      }
      uVar10 = *(uint64_t *)(param_1 + 0x10);
      uVar9 = (uint64_t)uVar13;
      if (uVar9 << 0x38 <= uVar10) {
        iVar6 = 1;
        uVar13 = *(int *)(param_1 + 0x1c) - uVar13;
        uVar10 = uVar10 - (uVar9 << 0x38);
      }
      bVar1 = (&processed_var_8608_ptr)[uVar13];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      *(uint64_t *)(param_1 + 0x10) = uVar10 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar13 << (bVar1 & 0x1f);
      if (iVar6 == 0) goto LAB_18069f21f;
      sVar4 = FUN_18069ff30(param_1,param_7);
      sVar4 = sVar4 * 2 + (short)param_6;
      sVar5 = FUN_18069ff30(param_1,param_7 + 0x13);
      uStackX_8 = CONCAT22(sVar5 * 2 + param_6._2_2_,sVar4);
    }
    iVar6 = (int)(short)((uint)uStackX_8 >> 0x10);
    *(byte *)(param_5 + 10) =
         *(byte *)(param_5 + 10) |
         (((sVar4 < param_10 || param_11 < sVar4) || iVar6 < param_8) || param_9 < iVar6);
    uVar13 = (uint)(byte)(&ui_system_data_1144_ptr)[iStack_68];
    pbVar7 = &ui_system_data_1056_ptr +
             (int)((uVar12 & 0xff) * (uint)(byte)(&ui_system_data_1144_ptr)[iStack_68]) + lVar8;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      *(int *)(param_2 + 0xc + (uint64_t)bVar1 * 4) = uStackX_8;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar12 = uVar12 + 1;
    if (iStackX_10 <= (int)uVar12) {
      *(char *)(param_5 + 8) = (char)iStack_68;
      return;
    }
  } while( true );
}





// 函数: void FUN_18069f2f0(int64_t param_1)
void FUN_18069f2f0(int64_t param_1)

{
  int64_t lVar1;
  byte bVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  int64_t lVar8;
  bool bVar9;
  
  lVar1 = param_1 + 0x42c0;
  iVar3 = SystemCore_Monitor(lVar1,0x80);
  *(int *)(param_1 + 0x1e80) = iVar3;
  *(int8_t *)(param_1 + 0x4417) = 0;
  if (iVar3 != 0) {
    uVar6 = 0;
    iVar3 = 7;
    do {
      uVar7 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
      if (*(int *)(param_1 + 0x42d8) < 0) {
        SystemCore_Handler(lVar1);
      }
      uVar5 = *(uint64_t *)(param_1 + 0x42d0);
      uVar4 = (uint64_t)uVar7 << 0x38;
      bVar9 = uVar4 <= uVar5;
      if (bVar9) {
        uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
        uVar5 = uVar5 - uVar4;
      }
      bVar2 = (&processed_var_8608_ptr)[uVar7];
      *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
      uVar6 = uVar6 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
      *(uint64_t *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
      iVar3 = iVar3 + -1;
      *(uint *)(param_1 + 0x42dc) = uVar7 << (bVar2 & 0x1f);
    } while (-1 < iVar3);
    *(char *)(param_1 + 0x4417) = (char)uVar6;
  }
  if (*(int *)(param_1 + 0x1e64) != 0) {
    uVar6 = 0;
    iVar3 = 7;
    do {
      uVar7 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
      if (*(int *)(param_1 + 0x42d8) < 0) {
        SystemCore_Handler(lVar1);
      }
      uVar5 = *(uint64_t *)(param_1 + 0x42d0);
      uVar4 = (uint64_t)uVar7 << 0x38;
      bVar9 = uVar4 <= uVar5;
      if (bVar9) {
        uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
        uVar5 = uVar5 - uVar4;
      }
      bVar2 = (&processed_var_8608_ptr)[uVar7];
      *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
      uVar6 = uVar6 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
      *(uint64_t *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
      iVar3 = iVar3 + -1;
      *(uint *)(param_1 + 0x42dc) = uVar7 << (bVar2 & 0x1f);
    } while (-1 < iVar3);
    *(char *)(param_1 + 0x4414) = (char)uVar6;
    uVar6 = 0;
    iVar3 = 7;
    do {
      uVar7 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
      if (*(int *)(param_1 + 0x42d8) < 0) {
        SystemCore_Handler(lVar1);
      }
      uVar5 = *(uint64_t *)(param_1 + 0x42d0);
      uVar4 = (uint64_t)uVar7 << 0x38;
      bVar9 = uVar4 <= uVar5;
      if (bVar9) {
        uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
        uVar5 = uVar5 - uVar4;
      }
      bVar2 = (&processed_var_8608_ptr)[uVar7];
      *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
      uVar6 = uVar6 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
      *(uint64_t *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
      iVar3 = iVar3 + -1;
      *(uint *)(param_1 + 0x42dc) = uVar7 << (bVar2 & 0x1f);
    } while (-1 < iVar3);
    *(char *)(param_1 + 0x4415) = (char)uVar6;
    uVar6 = 0;
    iVar3 = 7;
    do {
      uVar7 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
      if (*(int *)(param_1 + 0x42d8) < 0) {
        SystemCore_Handler(lVar1);
      }
      uVar5 = *(uint64_t *)(param_1 + 0x42d0);
      uVar4 = (uint64_t)uVar7 << 0x38;
      bVar9 = uVar4 <= uVar5;
      if (bVar9) {
        uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
        uVar5 = uVar5 - uVar4;
      }
      bVar2 = (&processed_var_8608_ptr)[uVar7];
      *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
      uVar6 = uVar6 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
      *(uint64_t *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
      iVar3 = iVar3 + -1;
      *(uint *)(param_1 + 0x42dc) = uVar7 << (bVar2 & 0x1f);
    } while (-1 < iVar3);
    *(char *)(param_1 + 0x4416) = (char)uVar6;
    iVar3 = SystemCore_Monitor(lVar1,0x80);
    if (iVar3 != 0) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        iVar3 = 7;
        do {
          uVar7 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
          if (*(int *)(param_1 + 0x42d8) < 0) {
            SystemCore_Handler(lVar1);
          }
          uVar5 = *(uint64_t *)(param_1 + 0x42d0);
          uVar4 = (uint64_t)uVar7 << 0x38;
          bVar9 = uVar4 <= uVar5;
          if (bVar9) {
            uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
            uVar5 = uVar5 - uVar4;
          }
          bVar2 = (&processed_var_8608_ptr)[uVar7];
          *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
          uVar6 = uVar6 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
          *(uint64_t *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
          iVar3 = iVar3 + -1;
          *(uint *)(param_1 + 0x42dc) = uVar7 << (bVar2 & 0x1f);
        } while (-1 < iVar3);
        *(char *)(lVar8 + 0x308b + param_1) = (char)uVar6;
        lVar8 = lVar8 + 1;
      } while (lVar8 < 4);
    }
    iVar3 = SystemCore_Monitor(lVar1,0x80);
    if (iVar3 != 0) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        iVar3 = 7;
        do {
          uVar7 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
          if (*(int *)(param_1 + 0x42d8) < 0) {
            SystemCore_Handler(lVar1);
          }
          uVar5 = *(uint64_t *)(param_1 + 0x42d0);
          uVar4 = (uint64_t)uVar7 << 0x38;
          bVar9 = uVar4 <= uVar5;
          if (bVar9) {
            uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
            uVar5 = uVar5 - uVar4;
          }
          bVar2 = (&processed_var_8608_ptr)[uVar7];
          *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
          uVar6 = uVar6 | (uint)bVar9 << ((byte)iVar3 & 0x1f);
          *(uint64_t *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
          iVar3 = iVar3 + -1;
          *(uint *)(param_1 + 0x42dc) = uVar7 << (bVar2 & 0x1f);
        } while (-1 < iVar3);
        *(char *)(lVar8 + 0x308f + param_1) = (char)uVar6;
        lVar8 = lVar8 + 1;
      } while (lVar8 < 3);
    }
    FUN_1806a0150(lVar1,param_1 + 0x34b5);
  }
  return;
}





