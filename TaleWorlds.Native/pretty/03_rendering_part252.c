#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part252.c - 6 个函数

// 函数: void FUN_18040c55f(float param_1)
void FUN_18040c55f(float param_1)

{
  int8_t auVar1 [16];
  int unaff_EBX;
  char unaff_SIL;
  float *unaff_RDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  int8_t in_XMM2 [16];
  int8_t auVar5 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  
  if (unaff_XMM13_Da <= unaff_XMM6_Da) {
    if ((param_1 <= unaff_XMM6_Da) && (param_1 = unaff_XMM13_Da, unaff_XMM6_Da <= unaff_XMM13_Da)) {
      param_1 = unaff_XMM6_Da;
    }
  }
  else {
    param_1 = unaff_XMM6_Da;
    if (unaff_SIL == '\0') {
      return;
    }
  }
  if (unaff_EBX != 0) {
    if (unaff_EBX != 1) {
      if (in_stack_00000068 < unaff_XMM11_Da) {
        unaff_XMM12_Da = 0.5;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400(unaff_XMM12_Da * param_1);
    }
    if (unaff_XMM11_Da <= fStack0000000000000064) {
      unaff_XMM10_Da = -1.0;
    }
    FUN_18040f4d0(&stack0x00000040,unaff_XMM10_Da * param_1);
    if (1e-05 < unaff_XMM14_Da) {
      auVar5._4_4_ = unaff_XMM7_Db;
      auVar5._0_4_ = unaff_XMM7_Da;
      auVar5._8_4_ = unaff_XMM7_Dc;
      auVar5._12_4_ = unaff_XMM7_Dd;
      in_XMM2._4_12_ = auVar5._4_12_;
      in_XMM2._0_4_ =
           unaff_XMM7_Da * unaff_XMM7_Da + unaff_XMM8_Da * unaff_XMM8_Da +
           unaff_XMM9_Da * unaff_XMM9_Da;
      if ((0.98010004 < in_XMM2._0_4_) && (in_XMM2._0_4_ < 1.0201)) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(unaff_XMM14_Da * 0.5);
      }
    }
    fVar2 = fStack000000000000004c * fStack000000000000004c +
            fStack0000000000000040 * fStack0000000000000040;
    fVar3 = fStack0000000000000048 * fStack0000000000000048 +
            fStack0000000000000044 * fStack0000000000000044;
    fVar9 = fVar2 + fStack0000000000000044 * fStack0000000000000044 +
                    fStack0000000000000048 * fStack0000000000000048;
    fVar10 = fVar3 + fStack0000000000000040 * fStack0000000000000040 +
                     fStack000000000000004c * fStack000000000000004c;
    auVar1._4_4_ = fVar2 + fVar3 + 1.1754944e-38;
    auVar1._0_4_ = fVar3 + fVar2 + 1.1754944e-38;
    auVar1._8_4_ = fVar9 + 1.1754944e-38;
    auVar1._12_4_ = fVar10 + 1.1754944e-38;
    auVar5 = rsqrtps(in_XMM2,auVar1);
    fVar4 = auVar5._0_4_;
    fVar6 = auVar5._4_4_;
    fVar7 = auVar5._8_4_;
    fVar8 = auVar5._12_4_;
    *unaff_RDI = (3.0 - fVar4 * fVar4 * (fVar3 + fVar2)) * fVar4 * 0.5 * fStack0000000000000040;
    unaff_RDI[1] = (3.0 - fVar6 * fVar6 * (fVar2 + fVar3)) * fVar6 * 0.5 * fStack0000000000000044;
    unaff_RDI[2] = (3.0 - fVar7 * fVar7 * fVar9) * fVar7 * 0.5 * fStack0000000000000048;
    unaff_RDI[3] = (3.0 - fVar8 * fVar8 * fVar10) * fVar8 * 0.5 * fStack000000000000004c;
    return;
  }
  if (fStack0000000000000060 < unaff_XMM11_Da) {
    unaff_XMM12_Da = 0.5;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(unaff_XMM12_Da * param_1);
}





// 函数: void FUN_18040c864(void)
void FUN_18040c864(void)

{
  return;
}



int64_t FUN_18040c880(uint64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4,
                      float param_5,char param_6)

{
  char cVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  uint64_t uStack_70;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint64_t uStack_50;
  int64_t lStack_48;
  char cStack_40;
  
  fVar4 = param_5;
  uVar6 = 0xfffffffffffffffe;
  fVar5 = (float)(*(int *)(param_3 + 400) - *(int *)(param_3 + 0x18c)) * param_5 +
          (float)*(int *)(param_3 + 0x18c);
  param_5 = (float)CONCAT31(param_5._1_3_,1);
  FUN_180405240(&uStack_50,param_3,fVar5,0);
  FUN_18040dbf0(uStack_50,param_2,param_4,fVar5,param_1,&param_5,uVar6);
  if ((cStack_40 == '\0') && (*(char *)(lStack_48 + 0x194) != '\0')) {
    LOCK();
    *(int *)(lStack_48 + 0xd8) = *(int *)(lStack_48 + 0xd8) + -1;
    UNLOCK();
  }
  cVar1 = FUN_1804044a0(param_3);
  if (cVar1 != '\0') {
    if ((param_6 == '\0') && (lVar2 = FUN_18040db80(param_3), lVar2 != 0)) {
      uStack_70 = *(uint64_t *)(lVar2 + 8);
      fStack_68 = (float)*(uint64_t *)(lVar2 + 0x10);
      fVar3 = *(float *)(lVar2 + 0x18);
    }
    else {
      fVar3 = 1.0;
      fStack_68 = 0.0;
      uStack_70 = 0;
    }
    FUN_180404500(param_3,&fStack_60,fVar5);
    fVar4 = fVar4 / fVar3;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    *(float *)(param_2 + 0x10) = (fStack_60 - fVar4 * (float)uStack_70) + *(float *)(param_2 + 0x10)
    ;
    *(float *)(param_2 + 0x14) = (fStack_5c - fVar4 * uStack_70._4_4_) + *(float *)(param_2 + 0x14);
    *(float *)(param_2 + 0x18) = (fStack_58 - fVar4 * fStack_68) + *(float *)(param_2 + 0x18);
    return param_2;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18040ca50(int64_t param_1)

{
  uint64_t *puVar1;
  
  *(uint64_t *)(param_1 + 0x114) = 0;
  *(uint64_t *)(param_1 + 0x11c) = 0;
  *(uint64_t *)(param_1 + 0x124) = 0;
  *(uint64_t *)(param_1 + 300) = 0;
  *(int32_t *)(param_1 + 0x134) = 0xbf800000;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x150) = 0;
  *(int32_t *)(param_1 + 0x158) = 0xbf800000;
  *(uint64_t *)(param_1 + 0x15c) = 0;
  *(uint64_t *)(param_1 + 0x164) = 0;
  *(uint64_t *)(param_1 + 0x16c) = 0;
  *(uint64_t *)(param_1 + 0x174) = 0;
  *(int32_t *)(param_1 + 0x17c) = 0xbf800000;
  *(uint64_t *)(param_1 + 0x188) = &system_state_ptr;
  *(uint64_t *)(param_1 + 400) = 0;
  *(int32_t *)(param_1 + 0x198) = 0;
  *(uint64_t *)(param_1 + 0x188) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x1a0) = 0;
  *(uint64_t *)(param_1 + 400) = 0;
  *(int32_t *)(param_1 + 0x198) = 0;
  *(int16_t *)(param_1 + 0xf0) = 0xff;
  *(uint64_t *)(param_1 + 0xf8) = 0;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60,8,3,0xfffffffffffffffe);
  *(uint64_t *)((int64_t)puVar1 + 0x14) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x1c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x24) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x2c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x34) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x3c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x44) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x4c) = 0;
  *(uint64_t *)((int64_t)puVar1 + 0x54) = 0;
  *(int32_t *)((int64_t)puVar1 + 0x5c) = 0;
  *puVar1 = &system_state_ptr;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  *puVar1 = &unknown_var_3480_ptr;
  puVar1[1] = puVar1 + 3;
  *(int32_t *)(puVar1 + 2) = 0;
  *(int8_t *)(puVar1 + 3) = 0;
  *(uint64_t **)(param_1 + 0x180) = puVar1;
  *(uint64_t *)(param_1 + 0x114) = 0;
  *(uint64_t *)(param_1 + 0x11c) = 0;
  *(uint64_t *)(param_1 + 0x124) = 0;
  *(uint64_t *)(param_1 + 300) = 0;
  *(int32_t *)(param_1 + 0x134) = 0xbf800000;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x150) = 0;
  *(int32_t *)(param_1 + 0x158) = 0xbf800000;
  *(uint64_t *)(param_1 + 0x15c) = 0;
  *(uint64_t *)(param_1 + 0x164) = 0;
  *(uint64_t *)(param_1 + 0x16c) = 0;
  *(uint64_t *)(param_1 + 0x174) = 0;
  *(int32_t *)(param_1 + 0x17c) = 0xbf800000;
  *(int32_t *)(*(int64_t *)(param_1 + 0x180) + 0x58) = 0xbf800000;
  *(int8_t *)(param_1 + 0x104) = 0xff;
  *(uint64_t *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x110) = 0xffffffff;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18040cc40(int64_t param_1)
void FUN_18040cc40(int64_t param_1)

{
  char *pcVar1;
  uint64_t *puVar2;
  byte bVar3;
  char cVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char cVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  
  bVar3 = *(byte *)(param_1 + 0x148);
  uVar7 = 0;
  if ('\0' < (char)bVar3) {
    uVar8 = (uint64_t)bVar3;
    uVar11 = (uint64_t)bVar3;
    uVar5 = uVar7;
    do {
      cVar9 = *(char *)(uVar5 + 0xf0 + *(int64_t *)(param_1 + 0x140));
      if (-1 < cVar9) {
        pcVar1 = (char *)((int64_t)cVar9 * 0x1b0 + 0xf1 + *(int64_t *)(param_1 + 0x140));
        *pcVar1 = *pcVar1 + '\x01';
      }
      uVar5 = uVar5 + 0x1b0;
      uVar11 = uVar11 - 1;
      uVar12 = uVar7;
    } while (uVar11 != 0);
    do {
      lVar10 = uVar12 + *(int64_t *)(param_1 + 0x140);
      if (*(int64_t *)(lVar10 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      cVar9 = *(char *)(lVar10 + 0xf1);
      *(uint64_t *)(lVar10 + 0xf8) = 0;
      if ('\0' < cVar9) {
        uVar5 = uVar7;
        if (cVar9 != '\0') {
          uVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)cVar9);
        }
        *(uint64_t *)(lVar10 + 0xf8) = uVar5;
      }
      *(int8_t *)(lVar10 + 0xf1) = 0;
      uVar8 = uVar8 - 1;
      uVar12 = uVar12 + 0x1b0;
    } while (uVar8 != 0);
  }
  cVar9 = '\0';
  uVar5 = uVar7;
  if ('\0' < (char)bVar3) {
    do {
      lVar10 = *(int64_t *)(param_1 + 0x140);
      cVar4 = *(char *)(uVar5 + 0xf0 + lVar10);
      if (-1 < cVar4) {
        lVar6 = (int64_t)cVar4 * 0x1b0;
        *(char *)((int64_t)*(char *)(lVar6 + 0xf1 + lVar10) + *(int64_t *)(lVar6 + 0xf8 + lVar10))
             = cVar9;
        pcVar1 = (char *)(lVar6 + 0xf1 + *(int64_t *)(param_1 + 0x140));
        *pcVar1 = *pcVar1 + '\x01';
      }
      cVar9 = cVar9 + '\x01';
      uVar5 = uVar5 + 0x1b0;
    } while (cVar9 < (char)bVar3);
    uVar8 = (uint64_t)bVar3;
    uVar5 = uVar7;
    do {
      *(uint64_t *)(uVar5 + 0xe0 + *(int64_t *)(param_1 + 0x140)) = 0;
      *(uint64_t *)(uVar5 + 0xe8 + *(int64_t *)(param_1 + 0x140)) = 0;
      uVar8 = uVar8 - 1;
      uVar5 = uVar5 + 0x1b0;
    } while (uVar8 != 0);
  }
  cVar9 = bVar3 - 1;
  if (-1 < cVar9) {
    uVar5 = (uint64_t)cVar9;
    lVar10 = uVar5 * 0x1b0;
    do {
      *(uint64_t *)(*(int64_t *)(param_1 + 0x140) + 0xe8 + lVar10) =
           *(uint64_t *)(*(int64_t *)(param_1 + 0x140) + 0xe8 + lVar10) | 1L << (uVar5 & 0x3f);
      lVar6 = *(int64_t *)(param_1 + 0x140);
      cVar4 = *(char *)(lVar10 + 0xf0 + lVar6);
      if (-1 < cVar4) {
        puVar2 = (uint64_t *)((int64_t)cVar4 * 0x1b0 + 0xe8 + lVar6);
        *puVar2 = *puVar2 | *(uint64_t *)(lVar10 + 0xe8 + lVar6);
      }
      uVar5 = uVar5 - 1;
      lVar10 = lVar10 + -0x1b0;
      cVar9 = cVar9 + -1;
    } while (-1 < cVar9);
  }
  if ('\0' < (char)bVar3) {
    uVar8 = (uint64_t)bVar3;
    uVar5 = uVar7;
    do {
      *(uint64_t *)(*(int64_t *)(param_1 + 0x140) + 0xe0 + uVar7) =
           *(uint64_t *)(*(int64_t *)(param_1 + 0x140) + 0xe0 + uVar7) | 1L << (uVar5 & 0x3f);
      lVar10 = *(int64_t *)(param_1 + 0x140);
      cVar9 = *(char *)(lVar10 + 0xf0 + uVar7);
      if (-1 < cVar9) {
        puVar2 = (uint64_t *)(lVar10 + 0xe0 + uVar7);
        *puVar2 = *puVar2 | *(uint64_t *)((int64_t)cVar9 * 0x1b0 + 0xe0 + lVar10);
      }
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + 0x1b0;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18040cc5f(void)
void FUN_18040cc5f(void)

{
  char *pcVar1;
  uint64_t *puVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t unaff_RBX;
  uint64_t uVar6;
  int64_t unaff_RDI;
  char cVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  byte unaff_R15B;
  
  uVar4 = unaff_RBX & 0xffffffff;
  uVar6 = (uint64_t)unaff_R15B;
  uVar9 = (uint64_t)unaff_R15B;
  do {
    cVar7 = *(char *)(uVar4 + 0xf0 + *(int64_t *)(unaff_RDI + 0x140));
    if (-1 < cVar7) {
      pcVar1 = (char *)((int64_t)cVar7 * 0x1b0 + 0xf1 + *(int64_t *)(unaff_RDI + 0x140));
      *pcVar1 = *pcVar1 + '\x01';
    }
    uVar4 = uVar4 + 0x1b0;
    uVar9 = uVar9 - 1;
    uVar10 = unaff_RBX;
  } while (uVar9 != 0);
  do {
    lVar8 = uVar10 + *(int64_t *)(unaff_RDI + 0x140);
    if (*(int64_t *)(lVar8 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    cVar7 = *(char *)(lVar8 + 0xf1);
    *(uint64_t *)(lVar8 + 0xf8) = unaff_RBX;
    if ('\0' < cVar7) {
      uVar4 = unaff_RBX;
      if (cVar7 != '\0') {
        uVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)cVar7);
      }
      *(uint64_t *)(lVar8 + 0xf8) = uVar4;
    }
    *(char *)(lVar8 + 0xf1) = (char)unaff_RBX;
    uVar6 = uVar6 - 1;
    uVar10 = uVar10 + 0x1b0;
  } while (uVar6 != 0);
  cVar7 = '\0';
  uVar4 = unaff_RBX;
  if ('\0' < (char)unaff_R15B) {
    do {
      lVar8 = *(int64_t *)(unaff_RDI + 0x140);
      cVar3 = *(char *)(uVar4 + 0xf0 + lVar8);
      if (-1 < cVar3) {
        lVar5 = (int64_t)cVar3 * 0x1b0;
        *(char *)((int64_t)*(char *)(lVar5 + 0xf1 + lVar8) + *(int64_t *)(lVar5 + 0xf8 + lVar8)) =
             cVar7;
        pcVar1 = (char *)(lVar5 + 0xf1 + *(int64_t *)(unaff_RDI + 0x140));
        *pcVar1 = *pcVar1 + '\x01';
      }
      cVar7 = cVar7 + '\x01';
      uVar4 = uVar4 + 0x1b0;
    } while (cVar7 < (char)unaff_R15B);
    uVar6 = (uint64_t)unaff_R15B;
    uVar4 = unaff_RBX;
    do {
      *(uint64_t *)(uVar4 + 0xe0 + *(int64_t *)(unaff_RDI + 0x140)) = unaff_RBX;
      *(uint64_t *)(uVar4 + 0xe8 + *(int64_t *)(unaff_RDI + 0x140)) = unaff_RBX;
      uVar6 = uVar6 - 1;
      uVar4 = uVar4 + 0x1b0;
    } while (uVar6 != 0);
  }
  cVar7 = unaff_R15B - 1;
  if (-1 < cVar7) {
    uVar4 = (uint64_t)cVar7;
    lVar8 = uVar4 * 0x1b0;
    do {
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x140) + 0xe8 + lVar8) =
           *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x140) + 0xe8 + lVar8) | 1L << (uVar4 & 0x3f);
      lVar5 = *(int64_t *)(unaff_RDI + 0x140);
      cVar3 = *(char *)(lVar8 + 0xf0 + lVar5);
      if (-1 < cVar3) {
        puVar2 = (uint64_t *)((int64_t)cVar3 * 0x1b0 + 0xe8 + lVar5);
        *puVar2 = *puVar2 | *(uint64_t *)(lVar8 + 0xe8 + lVar5);
      }
      uVar4 = uVar4 - 1;
      lVar8 = lVar8 + -0x1b0;
      cVar7 = cVar7 + -1;
    } while (-1 < cVar7);
  }
  if ('\0' < (char)unaff_R15B) {
    uVar6 = (uint64_t)unaff_R15B;
    uVar4 = unaff_RBX;
    do {
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x140) + 0xe0 + unaff_RBX) =
           *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x140) + 0xe0 + unaff_RBX) |
           1L << (uVar4 & 0x3f);
      lVar8 = *(int64_t *)(unaff_RDI + 0x140);
      cVar7 = *(char *)(lVar8 + 0xf0 + unaff_RBX);
      if (-1 < cVar7) {
        puVar2 = (uint64_t *)(lVar8 + 0xe0 + unaff_RBX);
        *puVar2 = *puVar2 | *(uint64_t *)((int64_t)cVar7 * 0x1b0 + 0xe0 + lVar8);
      }
      uVar4 = uVar4 + 1;
      unaff_RBX = unaff_RBX + 0x1b0;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}





// 函数: void FUN_18040cd31(void)
void FUN_18040cd31(void)

{
  char *pcVar1;
  uint64_t *puVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t unaff_RBX;
  int64_t unaff_RDI;
  char cVar6;
  int64_t lVar7;
  uint64_t uVar8;
  byte unaff_R15B;
  
  cVar6 = '\0';
  uVar8 = unaff_RBX;
  if ('\0' < (char)unaff_R15B) {
    do {
      lVar7 = *(int64_t *)(unaff_RDI + 0x140);
      cVar3 = *(char *)(uVar8 + 0xf0 + lVar7);
      if (-1 < cVar3) {
        lVar4 = (int64_t)cVar3 * 0x1b0;
        *(char *)((int64_t)*(char *)(lVar4 + 0xf1 + lVar7) + *(int64_t *)(lVar4 + 0xf8 + lVar7)) =
             cVar6;
        pcVar1 = (char *)(lVar4 + 0xf1 + *(int64_t *)(unaff_RDI + 0x140));
        *pcVar1 = *pcVar1 + '\x01';
      }
      cVar6 = cVar6 + '\x01';
      uVar8 = uVar8 + 0x1b0;
    } while (cVar6 < (char)unaff_R15B);
    uVar5 = (uint64_t)unaff_R15B;
    uVar8 = unaff_RBX;
    do {
      *(uint64_t *)(uVar8 + 0xe0 + *(int64_t *)(unaff_RDI + 0x140)) = unaff_RBX;
      *(uint64_t *)(uVar8 + 0xe8 + *(int64_t *)(unaff_RDI + 0x140)) = unaff_RBX;
      uVar5 = uVar5 - 1;
      uVar8 = uVar8 + 0x1b0;
    } while (uVar5 != 0);
  }
  cVar6 = unaff_R15B - 1;
  if (-1 < cVar6) {
    uVar8 = (uint64_t)cVar6;
    lVar7 = uVar8 * 0x1b0;
    do {
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x140) + 0xe8 + lVar7) =
           *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x140) + 0xe8 + lVar7) | 1L << (uVar8 & 0x3f);
      lVar4 = *(int64_t *)(unaff_RDI + 0x140);
      cVar3 = *(char *)(lVar7 + 0xf0 + lVar4);
      if (-1 < cVar3) {
        puVar2 = (uint64_t *)((int64_t)cVar3 * 0x1b0 + 0xe8 + lVar4);
        *puVar2 = *puVar2 | *(uint64_t *)(lVar7 + 0xe8 + lVar4);
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x1b0;
      cVar6 = cVar6 + -1;
    } while (-1 < cVar6);
  }
  if ('\0' < (char)unaff_R15B) {
    uVar5 = (uint64_t)unaff_R15B;
    uVar8 = unaff_RBX;
    do {
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x140) + 0xe0 + unaff_RBX) =
           *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x140) + 0xe0 + unaff_RBX) |
           1L << (uVar8 & 0x3f);
      lVar7 = *(int64_t *)(unaff_RDI + 0x140);
      cVar6 = *(char *)(lVar7 + 0xf0 + unaff_RBX);
      if (-1 < cVar6) {
        puVar2 = (uint64_t *)(lVar7 + 0xe0 + unaff_RBX);
        *puVar2 = *puVar2 | *(uint64_t *)((int64_t)cVar6 * 0x1b0 + 0xe0 + lVar7);
      }
      uVar8 = uVar8 + 1;
      unaff_RBX = unaff_RBX + 0x1b0;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}





// 函数: void FUN_18040cec0(int64_t param_1,uint64_t *param_2)
void FUN_18040cec0(int64_t param_1,uint64_t *param_2)

{
  float *pfVar1;
  int8_t auVar2 [16];
  double dVar3;
  double dVar4;
  uint64_t uVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uVar5 = param_2[1];
  *(uint64_t *)(param_1 + 0x50) = *param_2;
  *(uint64_t *)(param_1 + 0x58) = uVar5;
  uVar5 = param_2[3];
  *(uint64_t *)(param_1 + 0x60) = param_2[2];
  *(uint64_t *)(param_1 + 0x68) = uVar5;
  uVar5 = param_2[5];
  *(uint64_t *)(param_1 + 0x70) = param_2[4];
  *(uint64_t *)(param_1 + 0x78) = uVar5;
  uVar5 = param_2[7];
  *(uint64_t *)(param_1 + 0x80) = param_2[6];
  *(uint64_t *)(param_1 + 0x88) = uVar5;
  *(int32_t *)(param_1 + 0x5c) = 0;
  *(int32_t *)(param_1 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0x7c) = 0;
  *(int32_t *)(param_1 + 0x8c) = 0x3f800000;
  *(float *)(param_1 + 0x100) =
       SQRT(*(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80) +
            *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x84) +
            *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88));
  FUN_1802f5bc0(param_1 + 0x50);
  FUN_18063b470(&uStack_18,param_1 + 0x50);
  pfVar1 = (float *)(param_1 + 0x90);
  *(uint64_t *)pfVar1 = CONCAT44(uStack_14,uStack_18);
  *(uint64_t *)(param_1 + 0x98) = CONCAT44(uStack_c,uStack_10);
  dVar4 = (double)*(float *)(param_1 + 0x94);
  dVar13 = (double)*(float *)(param_1 + 0x98);
  dVar10 = (double)*(float *)(param_1 + 0x9c);
  dVar12 = (double)*pfVar1;
  auVar7._0_8_ = dVar12 * dVar12;
  auVar7._8_8_ = 0;
  dVar3 = dVar4 * dVar4 + dVar13 * dVar13 + dVar10 * dVar10 + auVar7._0_8_;
  if (dVar3 <= 1e-07) {
    fVar11 = 1.0;
    fVar9 = 0.0;
    fVar6 = 0.0;
    fVar8 = 0.0;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar3;
    auVar7 = sqrtpd(auVar7,auVar2);
    dVar3 = 1.0 / auVar7._0_8_;
    fVar11 = (float)(dVar3 * dVar12);
    fVar9 = (float)(dVar3 * dVar10);
    fVar6 = (float)(dVar3 * dVar13);
    fVar8 = (float)(dVar3 * dVar4);
  }
  *(float *)(param_1 + 0x94) = fVar8;
  *(float *)(param_1 + 0x98) = fVar6;
  *(float *)(param_1 + 0x9c) = fVar9;
  *pfVar1 = fVar11;
  return;
}





