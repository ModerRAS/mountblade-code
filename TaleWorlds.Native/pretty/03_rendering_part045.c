#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part045.c - 13 个函数

// 函数: void FUN_18028fc51(void)
void FUN_18028fc51(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18028fca0(int64_t param_1,int param_2,uint64_t param_3,int64_t *param_4,
                       int *param_5)

{
  char cVar1;
  short sVar2;
  uint64_t uVar3;
  int64_t lVar4;
  char *pcVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint uVar12;
  uint64_t uVar13;
  uint auStackX_10 [2];
  
  uVar6 = 0;
  lVar11 = (int64_t)param_2;
  uVar8 = uVar6;
  if (0 < param_2) {
    pcVar5 = (char *)(param_1 + 0xc);
    lVar4 = lVar11;
    uVar3 = uVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 0xe;
      uVar8 = (uint64_t)((int)uVar3 + 1);
      if (cVar1 != '\x01') {
        uVar8 = uVar3;
      }
      lVar4 = lVar4 + -1;
      uVar3 = uVar8;
    } while (lVar4 != 0);
  }
  iVar9 = (int)uVar8;
  *param_5 = iVar9;
  if (iVar9 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    lVar4 = func_0x000180120ce0((int64_t)iVar9 << 2,SYSTEM_DATA_MANAGER_B);
    *param_4 = lVar4;
    uVar8 = uVar6;
    uVar3 = uVar6;
    uVar13 = uVar6;
    if (lVar4 != 0) {
      do {
        if ((int)uVar13 == 1) {
          if (SYSTEM_DATA_MANAGER_A != 0) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
          }
          uVar3 = func_0x000180120ce0((int64_t)(int)uVar6 << 3,SYSTEM_DATA_MANAGER_B);
          if (uVar3 == 0) {
                    // WARNING: Subroutine does not return
            SystemResourceCleaner(0,SYSTEM_DATA_MANAGER_B);
          }
        }
        uVar6 = 0;
        auStackX_10[0] = 0;
        lVar4 = -1;
        if (0 < lVar11) {
          lVar10 = param_1 + 10;
          lVar7 = lVar11;
          do {
            cVar1 = *(char *)(lVar10 + 2);
            iVar9 = (int)uVar6;
            if (cVar1 == '\x01') {
              if (-1 < lVar4) {
                *(int *)(*param_4 + lVar4 * 4) = iVar9 - (int)uVar8;
              }
              lVar4 = lVar4 + 1;
              uVar8 = (uint64_t)iVar9;
              sVar2 = *(short *)(lVar10 + -8);
              auStackX_10[0] = iVar9 + 1;
              uVar6 = (uint64_t)auStackX_10[0];
              if (uVar3 != 0) {
                *(float *)(uVar3 + uVar8 * 8) = (float)(int)*(short *)(lVar10 + -10);
                *(float *)(uVar3 + 4 + uVar8 * 8) = (float)(int)sVar2;
              }
            }
            else if (cVar1 == '\x02') {
              sVar2 = *(short *)(lVar10 + -8);
              auStackX_10[0] = iVar9 + 1;
              uVar6 = (uint64_t)auStackX_10[0];
              if (uVar3 != 0) {
                *(float *)(uVar3 + (int64_t)iVar9 * 8) = (float)(int)*(short *)(lVar10 + -10);
                *(float *)(uVar3 + 4 + (int64_t)iVar9 * 8) = (float)(int)sVar2;
              }
            }
            else {
              if (cVar1 == '\x03') {
                FUN_18028f6d0(uVar3,auStackX_10);
              }
              else {
                if (cVar1 != '\x04') goto LAB_18028ffb2;
                FUN_18028f8f0(uVar3,auStackX_10);
              }
              uVar6 = (uint64_t)auStackX_10[0];
            }
LAB_18028ffb2:
            lVar10 = lVar10 + 0xe;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        uVar12 = (int)uVar13 + 1;
        *(int *)(*param_4 + lVar4 * 4) = (int)uVar6 - (int)uVar8;
        uVar13 = (uint64_t)uVar12;
        if (1 < (int)uVar12) {
          return uVar3;
        }
      } while( true );
    }
    *param_5 = 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18028fd52(void)

{
  char cVar1;
  short sVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t lVar4;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R14;
  int unaff_R15D;
  int in_stack_000000e8;
  
  do {
    if (unaff_R15D == 1) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      unaff_RDI = func_0x000180120ce0((int64_t)unaff_EBX << 3,SYSTEM_DATA_MANAGER_B);
      if (unaff_RDI == 0) {
                    // WARNING: Subroutine does not return
        SystemResourceCleaner(0,SYSTEM_DATA_MANAGER_B);
      }
    }
    unaff_EBX = 0;
    in_stack_000000e8 = 0;
    lVar6 = -1;
    if (0 < unaff_R12) {
      lVar5 = unaff_R13 + 10;
      lVar4 = unaff_R12;
      do {
        cVar1 = *(char *)(lVar5 + 2);
        if (cVar1 == '\x01') {
          if (-1 < lVar6) {
            *(int *)(*unaff_R14 + lVar6 * 4) = unaff_EBX - (int)unaff_RSI;
          }
          lVar6 = lVar6 + 1;
          unaff_RSI = (int64_t)unaff_EBX;
          sVar2 = *(short *)(lVar5 + -8);
          in_stack_000000e8 = unaff_EBX + 1;
          unaff_EBX = in_stack_000000e8;
          if (unaff_RDI != 0) {
            *(float *)(unaff_RDI + unaff_RSI * 8) = (float)(int)*(short *)(lVar5 + -10);
            *(float *)(unaff_RDI + 4 + unaff_RSI * 8) = (float)(int)sVar2;
          }
        }
        else if (cVar1 == '\x02') {
          sVar2 = *(short *)(lVar5 + -8);
          lVar3 = (int64_t)unaff_EBX;
          in_stack_000000e8 = unaff_EBX + 1;
          unaff_EBX = in_stack_000000e8;
          if (unaff_RDI != 0) {
            *(float *)(unaff_RDI + lVar3 * 8) = (float)(int)*(short *)(lVar5 + -10);
            *(float *)(unaff_RDI + 4 + lVar3 * 8) = (float)(int)sVar2;
          }
        }
        else if (cVar1 == '\x03') {
          FUN_18028f6d0(unaff_RDI,&stack0x000000e8);
          unaff_EBX = in_stack_000000e8;
        }
        else if (cVar1 == '\x04') {
          FUN_18028f8f0(unaff_RDI,&stack0x000000e8);
          unaff_EBX = in_stack_000000e8;
        }
        lVar5 = lVar5 + 0xe;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    unaff_R15D = unaff_R15D + 1;
    *(int *)(*unaff_R14 + lVar6 * 4) = unaff_EBX - (int)unaff_RSI;
  } while (unaff_R15D < 2);
  return unaff_RDI;
}





// 函数: void FUN_18028fffa(void)
void FUN_18028fffa(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290020(void)
void FUN_180290020(void)

{
                    // WARNING: Subroutine does not return
  SystemResourceCleaner(0,SYSTEM_DATA_MANAGER_B);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290070(int64_t param_1,uint64_t param_2,int param_3,int param_4,int32_t param_5,
void FUN_180290070(int64_t param_1,uint64_t param_2,int param_3,int param_4,int32_t param_5,
                  float param_6,float param_7,uint64_t param_8,uint64_t param_9,
                  int32_t param_10)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int iVar15;
  int8_t auVar16 [16];
  int8_t auVar18 [16];
  uint64_t *puStackX_8;
  int iStack_a8;
  int iStack_a4;
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  uint64_t uStack_40;
  int8_t auVar17 [16];
  
  uVar8 = param_10;
  uVar9 = FUN_18028e460(param_1,param_10,&puStackX_8);
  fVar7 = param_7;
  fVar6 = param_6;
  uVar14 = (uint64_t)uVar9;
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar11 = func_0x00018028c210(param_1,uVar8);
    if (iVar11 < 0) goto LAB_18029020c;
    lVar12 = *(int64_t *)(param_1 + 8);
    lVar13 = (int64_t)iVar11;
    bVar3 = *(byte *)(lVar12 + 3 + lVar13);
    uVar10 = (uint)bVar3;
    iVar15 = (int)(short)((ushort)*(byte *)(lVar12 + 8 + lVar13) * 0x100 +
                         (ushort)*(byte *)(lVar12 + 9 + lVar13));
    iVar11 = (int)(short)((ushort)*(byte *)(lVar12 + 2 + lVar13) * 0x100 + (ushort)bVar3);
  }
  else {
    uStack_90 = 1;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar10 = FUN_18028d680(param_1,uVar8,&uStack_90);
    uVar14 = (uint64_t)uVar9;
    iVar15 = 0;
    if (uVar10 != 0) {
      iVar15 = uStack_70._4_4_;
    }
    iVar11 = 0;
    if (uVar10 != 0) {
      iVar11 = (int)uStack_78;
    }
  }
  auVar16._0_4_ = -((float)iVar15 * fVar7);
  auVar17._4_4_ = 0x80000000;
  auVar17._0_4_ = auVar16._0_4_;
  if (((int)auVar16._0_4_ != -0x80000000) && ((float)(int)auVar16._0_4_ != auVar16._0_4_)) {
    auVar17._8_4_ = 0x80000000;
    auVar17._12_4_ = 0x80000000;
    auVar16._8_8_ = auVar17._8_8_;
    auVar16._4_4_ = auVar16._0_4_;
    uVar10 = movmskps(uVar10,auVar16);
    uVar10 = uVar10 & 1;
  }
  auVar18._0_4_ = (float)iVar11 * fVar6;
  if (((int)auVar18._0_4_ != -0x80000000) && ((float)(int)auVar18._0_4_ != auVar18._0_4_)) {
    auVar18._4_4_ = auVar18._0_4_;
    auVar18._8_8_ = 0;
    movmskps(uVar10,auVar18);
  }
LAB_18029020c:
  puVar4 = puStackX_8;
  uStack_a0 = param_5;
  iStack_a8 = param_3;
  iStack_a4 = param_4;
  uStack_98 = param_2;
  if ((param_3 != 0) && (param_4 != 0)) {
    param_5 = 0;
    fVar2 = fVar6;
    if (fVar7 <= fVar6) {
      fVar2 = fVar7;
    }
    puStackX_8 = (uint64_t *)0x0;
    lVar12 = FUN_18028fca0(puVar4,uVar14 & 0xffffffff,0.35 / fVar2,&puStackX_8,&param_5);
    puVar5 = puStackX_8;
    if (lVar12 != 0) {
      FUN_18028f350(&iStack_a8,lVar12,puStackX_8,param_5,fVar6,fVar7);
      if ((puVar5 != (uint64_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      SystemResourceCleaner(puVar5,SYSTEM_DATA_MANAGER_B);
    }
  }
  if ((puVar4 != (uint64_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  if (puVar4 != (uint64_t *)0x0) {
    uVar14 = (uint64_t)puVar4 & 0xffffffffffc00000;
    if (uVar14 != 0) {
      lVar12 = uVar14 + 0x80 + ((int64_t)puVar4 - uVar14 >> 0x10) * 0x50;
      lVar12 = lVar12 - (uint64_t)*(uint *)(lVar12 + 4);
      if ((*(void ***)(uVar14 + 0x70) == &ExceptionList) && (*(char *)(lVar12 + 0xe) == '\0')) {
        *puVar4 = *(uint64_t *)(lVar12 + 0x20);
        *(uint64_t **)(lVar12 + 0x20) = puVar4;
        piVar1 = (int *)(lVar12 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uStack_40 = 0x18064e96c;
          SystemDataCleaner();
          return;
        }
      }
      else {
        uStack_40 = 0x18064e984;
        func_0x00018064e870(uVar14,CONCAT71(0xff000000,*(void ***)(uVar14 + 0x70) == &ExceptionList)
                           );
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029007b(int64_t param_1,uint64_t param_2,int param_3,int param_4)
void FUN_18029007b(int64_t param_1,uint64_t param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  uint uVar9;
  int iVar10;
  int64_t in_RAX;
  int64_t lVar11;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar12;
  uint64_t uVar13;
  int iVar14;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int8_t auVar15 [16];
  int8_t auVar17 [16];
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int in_stack_00000060;
  int iStack0000000000000064;
  int32_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  int iStack0000000000000090;
  uint64_t in_stack_00000098;
  uint64_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  uint64_t in_stack_000000c8;
  uint64_t in_stack_000000f0;
  uint64_t *in_stack_00000110;
  uint in_stack_00000120;
  int32_t in_stack_00000130;
  float in_stack_00000138;
  float in_stack_00000140;
  int32_t in_stack_00000158;
  int8_t auVar16 [16];
  
  uVar8 = in_stack_00000158;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM7_Dd;
  in_stack_00000120 = FUN_18028e460(param_1,in_stack_00000158,in_RAX + 8);
  fVar7 = in_stack_00000140;
  fVar6 = in_stack_00000138;
  uVar13 = (uint64_t)in_stack_00000120;
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar10 = func_0x00018028c210(param_1,uVar8);
    if (iVar10 < 0) goto LAB_18029020c;
    lVar11 = *(int64_t *)(param_1 + 8);
    lVar12 = (int64_t)iVar10;
    bVar3 = *(byte *)(lVar11 + 3 + lVar12);
    uVar9 = (uint)bVar3;
    iVar14 = (int)(short)((ushort)*(byte *)(lVar11 + 8 + lVar12) * 0x100 +
                         (ushort)*(byte *)(lVar11 + 9 + lVar12));
    iVar10 = (int)(short)((ushort)*(byte *)(lVar11 + 2 + lVar12) * 0x100 + (ushort)bVar3);
  }
  else {
    in_stack_00000078 = 1;
    in_stack_000000a0 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000080 = 0;
    in_stack_00000088 = 0;
    _iStack0000000000000090 = 0;
    in_stack_00000098 = 0;
    uVar9 = FUN_18028d680(param_1,uVar8,&stack0x00000078);
    uVar13 = (uint64_t)in_stack_00000120;
    iVar14 = 0;
    if (uVar9 != 0) {
      iVar14 = in_stack_00000098._4_4_;
    }
    iVar10 = 0;
    if (uVar9 != 0) {
      iVar10 = iStack0000000000000090;
    }
  }
  auVar15._0_4_ = -((float)iVar14 * fVar7);
  auVar16._4_4_ = 0x80000000;
  auVar16._0_4_ = auVar15._0_4_;
  if (((int)auVar15._0_4_ != -0x80000000) && ((float)(int)auVar15._0_4_ != auVar15._0_4_)) {
    auVar16._8_4_ = 0x80000000;
    auVar16._12_4_ = 0x80000000;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._4_4_ = auVar15._0_4_;
    uVar9 = movmskps(uVar9,auVar15);
    uVar9 = uVar9 & 1;
  }
  auVar17._0_4_ = (float)iVar10 * fVar6;
  if (((int)auVar17._0_4_ != -0x80000000) && ((float)(int)auVar17._0_4_ != auVar17._0_4_)) {
    auVar17._4_4_ = auVar17._0_4_;
    auVar17._8_8_ = 0;
    movmskps(uVar9,auVar17);
  }
LAB_18029020c:
  puVar4 = in_stack_00000110;
  in_stack_00000068 = in_stack_00000130;
  in_stack_00000060 = param_3;
  iStack0000000000000064 = param_4;
  in_stack_00000070 = param_2;
  if ((param_3 != 0) && (param_4 != 0)) {
    in_stack_00000130 = 0;
    fVar2 = fVar6;
    if (fVar7 <= fVar6) {
      fVar2 = fVar7;
    }
    in_stack_00000110 = (uint64_t *)0x0;
    lVar11 = FUN_18028fca0(puVar4,uVar13 & 0xffffffff,0.35 / fVar2,&stack0x00000110,&stack0x00000130
                          );
    puVar5 = in_stack_00000110;
    if (lVar11 != 0) {
      FUN_18028f350(&stack0x00000060,lVar11,in_stack_00000110,in_stack_00000130,fVar6);
      if ((puVar5 != (uint64_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      SystemResourceCleaner(puVar5,SYSTEM_DATA_MANAGER_B);
    }
  }
  if ((puVar4 != (uint64_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  if (puVar4 != (uint64_t *)0x0) {
    in_stack_000000f0 = 0xfffffffffffffffe;
    uVar13 = (uint64_t)puVar4 & 0xffffffffffc00000;
    if (uVar13 != 0) {
      lVar11 = uVar13 + 0x80 + ((int64_t)puVar4 - uVar13 >> 0x10) * 0x50;
      lVar11 = lVar11 - (uint64_t)*(uint *)(lVar11 + 4);
      if ((*(void ***)(uVar13 + 0x70) == &ExceptionList) && (*(char *)(lVar11 + 0xe) == '\0')) {
        *puVar4 = *(uint64_t *)(lVar11 + 0x20);
        *(uint64_t **)(lVar11 + 0x20) = puVar4;
        piVar1 = (int *)(lVar11 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          in_stack_000000c8 = 0x18064e96c;
          SystemDataCleaner();
          return;
        }
      }
      else {
        in_stack_000000c8 = 0x18064e984;
        func_0x00018064e870(uVar13,CONCAT71(0xff000000,*(void ***)(uVar13 + 0x70) == &ExceptionList)
                           );
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290091(uint64_t param_1,uint64_t param_2,int param_3,int param_4)
void FUN_180290091(uint64_t param_1,uint64_t param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int64_t in_RAX;
  int64_t lVar10;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  int64_t lVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t extraout_XMM0_Qa;
  int8_t auVar14 [16];
  int8_t auVar16 [16];
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int in_stack_00000060;
  int iStack0000000000000064;
  int32_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  uint64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  int iStack0000000000000090;
  uint64_t in_stack_00000098;
  uint64_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  uint64_t in_stack_000000c8;
  uint64_t in_stack_000000f0;
  uint64_t *in_stack_00000110;
  uint in_stack_00000120;
  int32_t in_stack_00000130;
  float in_stack_00000138;
  float in_stack_00000140;
  int8_t auVar15 [16];
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM7_Dd;
  in_stack_00000120 = FUN_18028e460(param_1,unaff_ESI,in_RAX + 8);
  fVar7 = in_stack_00000140;
  fVar6 = in_stack_00000138;
  uVar12 = (uint64_t)in_stack_00000120;
  if (*(int *)(unaff_RDI + 0x4c) == 0) {
    iVar9 = func_0x00018028c210(extraout_XMM0_Qa,unaff_ESI);
    if (iVar9 < 0) goto LAB_18029020c;
    lVar10 = *(int64_t *)(unaff_RDI + 8);
    lVar11 = (int64_t)iVar9;
    bVar3 = *(byte *)(lVar10 + 3 + lVar11);
    uVar8 = (uint)bVar3;
    iVar13 = (int)(short)((ushort)*(byte *)(lVar10 + 8 + lVar11) * 0x100 +
                         (ushort)*(byte *)(lVar10 + 9 + lVar11));
    iVar9 = (int)(short)((ushort)*(byte *)(lVar10 + 2 + lVar11) * 0x100 + (ushort)bVar3);
  }
  else {
    in_stack_00000078 = 1;
    in_stack_000000a0 = 0;
    in_stack_000000a8 = 0;
    in_stack_00000080 = 0;
    in_stack_00000088 = 0;
    _iStack0000000000000090 = 0;
    in_stack_00000098 = 0;
    uVar8 = FUN_18028d680();
    uVar12 = (uint64_t)in_stack_00000120;
    iVar13 = 0;
    if (uVar8 != 0) {
      iVar13 = in_stack_00000098._4_4_;
    }
    iVar9 = 0;
    if (uVar8 != 0) {
      iVar9 = iStack0000000000000090;
    }
  }
  auVar14._0_4_ = -((float)iVar13 * fVar7);
  auVar15._4_4_ = 0x80000000;
  auVar15._0_4_ = auVar14._0_4_;
  if (((int)auVar14._0_4_ != -0x80000000) && ((float)(int)auVar14._0_4_ != auVar14._0_4_)) {
    auVar15._8_4_ = 0x80000000;
    auVar15._12_4_ = 0x80000000;
    auVar14._8_8_ = auVar15._8_8_;
    auVar14._4_4_ = auVar14._0_4_;
    uVar8 = movmskps(uVar8,auVar14);
    uVar8 = uVar8 & 1;
  }
  auVar16._0_4_ = (float)iVar9 * fVar6;
  if (((int)auVar16._0_4_ != -0x80000000) && ((float)(int)auVar16._0_4_ != auVar16._0_4_)) {
    auVar16._4_4_ = auVar16._0_4_;
    auVar16._8_8_ = 0;
    movmskps(uVar8,auVar16);
  }
LAB_18029020c:
  puVar4 = in_stack_00000110;
  in_stack_00000068 = in_stack_00000130;
  in_stack_00000060 = param_3;
  iStack0000000000000064 = param_4;
  in_stack_00000070 = param_2;
  if ((param_3 != 0) && (param_4 != 0)) {
    in_stack_00000130 = 0;
    fVar2 = fVar6;
    if (fVar7 <= fVar6) {
      fVar2 = fVar7;
    }
    in_stack_00000110 = (uint64_t *)0x0;
    lVar10 = FUN_18028fca0(puVar4,uVar12 & 0xffffffff,0.35 / fVar2,&stack0x00000110,&stack0x00000130
                          );
    puVar5 = in_stack_00000110;
    if (lVar10 != 0) {
      FUN_18028f350(&stack0x00000060,lVar10,in_stack_00000110,in_stack_00000130,fVar6);
      if ((puVar5 != (uint64_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      SystemResourceCleaner(puVar5,SYSTEM_DATA_MANAGER_B);
    }
  }
  if ((puVar4 != (uint64_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  if (puVar4 != (uint64_t *)0x0) {
    in_stack_000000f0 = 0xfffffffffffffffe;
    uVar12 = (uint64_t)puVar4 & 0xffffffffffc00000;
    if (uVar12 != 0) {
      lVar10 = uVar12 + 0x80 + ((int64_t)puVar4 - uVar12 >> 0x10) * 0x50;
      lVar10 = lVar10 - (uint64_t)*(uint *)(lVar10 + 4);
      if ((*(void ***)(uVar12 + 0x70) == &ExceptionList) && (*(char *)(lVar10 + 0xe) == '\0')) {
        *puVar4 = *(uint64_t *)(lVar10 + 0x20);
        *(uint64_t **)(lVar10 + 0x20) = puVar4;
        piVar1 = (int *)(lVar10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          in_stack_000000c8 = 0x18064e96c;
          SystemDataCleaner();
          return;
        }
      }
      else {
        in_stack_000000c8 = 0x18064e984;
        func_0x00018064e870(uVar12,CONCAT71(0xff000000,*(void ***)(uVar12 + 0x70) == &ExceptionList)
                           );
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290247(void)
void FUN_180290247(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  uint64_t *unaff_RDI;
  uint64_t uVar3;
  int unaff_R15D;
  int32_t unaff_XMM6_Da;
  int32_t uVar4;
  uint64_t in_stack_000000c8;
  uint64_t in_stack_000000f0;
  int32_t in_stack_00000130;
  
  if (unaff_R15D != 0) {
    uVar4 = (int32_t)((uint64_t)&stack0x00000130 >> 0x20);
    in_stack_00000130 = (int32_t)unaff_RBX;
    lVar2 = FUN_18028fca0();
    if (lVar2 != 0) {
      FUN_18028f350(&stack0x00000060,lVar2,unaff_RBX,in_stack_00000130,CONCAT44(uVar4,unaff_XMM6_Da)
                   );
      if ((unaff_RBX != 0) && (SYSTEM_DATA_MANAGER_A != 0)) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      SystemResourceCleaner(unaff_RBX,SYSTEM_DATA_MANAGER_B);
    }
  }
  if ((unaff_RDI != (uint64_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  if (unaff_RDI == (uint64_t *)0x0) {
    return;
  }
  in_stack_000000f0 = 0xfffffffffffffffe;
  uVar3 = (uint64_t)unaff_RDI & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((int64_t)unaff_RDI - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (uint64_t)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *unaff_RDI = *(uint64_t *)(lVar2 + 0x20);
      *(uint64_t **)(lVar2 + 0x20) = unaff_RDI;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        in_stack_000000c8 = 0x18064e96c;
        SystemDataCleaner();
        return;
      }
    }
    else {
      in_stack_000000c8 = 0x18064e984;
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290353(void)
void FUN_180290353(void)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *unaff_RDI;
  uint64_t uVar3;
  uint64_t uStack00000000000000c8;
  uint64_t uStack00000000000000f0;
  
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  if (unaff_RDI == (uint64_t *)0x0) {
    return;
  }
  uStack00000000000000f0 = 0xfffffffffffffffe;
  uVar3 = (uint64_t)unaff_RDI & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((int64_t)unaff_RDI - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (uint64_t)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *unaff_RDI = *(uint64_t *)(lVar2 + 0x20);
      *(uint64_t **)(lVar2 + 0x20) = unaff_RDI;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uStack00000000000000c8 = 0x18064e96c;
        SystemDataCleaner();
        return;
      }
    }
    else {
      uStack00000000000000c8 = 0x18064e984;
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290380(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
void FUN_180290380(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
                  int32_t param_5)

{
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  if (0 < param_3) {
    uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
    uStack_38 = 0;
                    // WARNING: Subroutine does not return
    memset(&uStack_38,0,param_5);
  }
  return;
}





// 函数: void FUN_1802903aa(void)
void FUN_1802903aa(void)

{
  uint64_t uStackX_20;
  
  uStackX_20 = 0;
                    // WARNING: Subroutine does not return
  memset(&uStackX_20,0);
}





// 函数: void FUN_180290628(void)
void FUN_180290628(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180290630(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
void FUN_180290630(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5)

{
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  if (0 < param_2) {
    uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
    uStack_38 = 0;
                    // WARNING: Subroutine does not return
    memset(&uStack_38,0,param_5);
  }
  return;
}





// 函数: void FUN_18029065d(void)
void FUN_18029065d(void)

{
  uint64_t uStackX_20;
  
  uStackX_20 = 0;
                    // WARNING: Subroutine does not return
  memset(&uStackX_20,0);
}





