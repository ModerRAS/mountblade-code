// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part425.c - 10 个函数
// 函数: void UISystem_9bbcd(uint64_t param_1,float param_2,uint64_t param_3,float param_4,
void UISystem_9bbcd(uint64_t param_1,float param_2,uint64_t param_3,float param_4,
                  uint64_t param_5,int32_t param_6)
{
  int8_t auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint64_t uVar8;
  float fVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  ushort uVar22;
  int iVar23;
  float *pfVar24;
  uint64_t *unaff_RBX;
  ushort unaff_DI;
  int16_t unaff_0000003a;
  int32_t unaff_0000003c;
  ushort uVar25;
  uint64_t *in_R9;
  uint64_t uVar26;
  ushort in_R11W;
  float *unaff_R13;
  uint uVar27;
  uint64_t uVar28;
  double dVar29;
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  double local_buffer_50;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  int32_t local_buffer_80;
  int32_t local_buffer_88;
  int32_t local_buffer_90;
  int32_t local_buffer_98;
  int32_t local_buffer_a0;
  int32_t local_buffer_a8;
  int32_t local_buffer_b0;
  int32_t local_buffer_b8;
  int32_t local_buffer_c0;
  int32_t local_buffer_c8;
  int32_t local_buffer_d0;
  int32_t local_buffer_d8;
  uVar26 = (uint64_t)in_R11W;
  do {
    _fStack0000000000000040 = *in_R9;
    _fStack0000000000000048 = in_R9[1];
    pfVar24 = &local_buffer_00000040;
    uVar28 = _fStack0000000000000040;
    uVar8 = _fStack0000000000000048;
    fVar33 = 0.0;
    iVar23 = CONCAT22(unaff_0000003a,unaff_DI);
    uVar25 = unaff_DI;
    do {
      uVar22 = (ushort)iVar23;
      fVar9 = ABS(*pfVar24);
      if (ABS(*pfVar24) <= fVar33) {
        uVar22 = uVar25;
        fVar9 = fVar33;
      }
      fVar33 = fVar9;
      iVar23 = iVar23 + 1;
      pfVar24 = pfVar24 + 1;
      uVar25 = uVar22;
    } while (iVar23 < 4);
    fStack0000000000000044 = (float)((uint64_t)_fStack0000000000000040 >> 0x20);
    fStack000000000000004c = (float)((uint64_t)_fStack0000000000000048 >> 0x20);
    if (*(float *)((int64_t)&local_buffer_00000040 + (uint64_t)uVar22 * 4) <= 0.0 &&
        *(float *)((int64_t)&local_buffer_00000040 + (uint64_t)uVar22 * 4) != 0.0) {
      fStack0000000000000040 = -fStack0000000000000040;
      fStack0000000000000044 = -fStack0000000000000044;
      fStack0000000000000048 = -fStack0000000000000048;
      fStack000000000000004c = -fStack000000000000004c;
    }
    if (uVar22 != 0) {
      fVar33 = fStack0000000000000040;
      if (fStack0000000000000040 <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack0000000000000040 <= param_4) {
        param_4 = fStack0000000000000040;
      }
    }
    if (uVar22 != 1) {
      fVar33 = fStack0000000000000044;
      if (fStack0000000000000044 <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack0000000000000044 <= param_4) {
        param_4 = fStack0000000000000044;
      }
    }
    if (uVar22 != 2) {
      fVar33 = fStack0000000000000048;
      if (fStack0000000000000048 <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack0000000000000048 <= param_4) {
        param_4 = fStack0000000000000048;
      }
    }
    if (uVar22 != 3) {
      fVar33 = fStack000000000000004c;
      if (fStack000000000000004c <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack000000000000004c <= param_4) {
        param_4 = fStack000000000000004c;
      }
    }
    in_R9 = in_R9 + 2;
    uVar26 = uVar26 - 1;
  } while (uVar26 != 0);
  uVar27 = 1;
  iVar23 = CONCAT22(unaff_0000003a,unaff_DI);
  *(float *)(unaff_RBX + 1) = param_2 + 1.1920929e-07;
  *(float *)((int64_t)unaff_RBX + 0xc) = param_4 - 1.1920929e-07;
  _fStack0000000000000040 = uVar28;
  _fStack0000000000000048 = uVar8;
  uVar10 = unaff_XMM15_Da;
  uVar11 = unaff_XMM15_Dc;
  uVar12 = unaff_XMM14_Da;
  uVar13 = unaff_XMM14_Dc;
  uVar14 = unaff_XMM13_Da;
  uVar15 = unaff_XMM13_Dc;
  uVar16 = unaff_XMM12_Da;
  uVar17 = unaff_XMM12_Dc;
  uVar18 = unaff_XMM11_Da;
  uVar19 = unaff_XMM11_Dc;
  uVar20 = unaff_XMM10_Da;
  uVar21 = unaff_XMM10_Dc;
  if (unaff_DI < in_R11W) {
    do {
      local_buffer_d8 = uVar21;
      local_buffer_d0 = uVar20;
      local_buffer_c8 = uVar19;
      local_buffer_c0 = uVar18;
      local_buffer_b8 = uVar17;
      local_buffer_b0 = uVar16;
      local_buffer_a8 = uVar15;
      local_buffer_a0 = uVar14;
      local_buffer_98 = uVar13;
      local_buffer_90 = uVar12;
      local_buffer_88 = uVar11;
      local_buffer_80 = uVar10;
      local_buffer_58 = 0;
      local_buffer_60 = 0;
      local_buffer_68 = 0;
      local_buffer_70 = 0;
      uVar28 = UISystem_9b8a0();
      param_6 = CONCAT22(unaff_0000003a,unaff_DI);
      RenderingSystem_40F060(uVar28,&local_buffer_00000058,&param_6,&local_buffer_00000040,uVar27);
      dVar35 = (double)fStack0000000000000044;
      dVar2 = (double)fStack0000000000000040;
      dVar4 = (double)fStack0000000000000048;
      dVar6 = (double)fStack000000000000004c;
      auVar30._0_8_ = dVar6 * dVar6;
      auVar30._8_8_ = 0;
      dVar3 = (double)*unaff_R13;
      dVar36 = (double)unaff_R13[1];
      dVar5 = (double)unaff_R13[2];
      auVar31._8_8_ = 0;
      auVar31._0_8_ = dVar35 * dVar35 + dVar2 * dVar2 + dVar4 * dVar4 + auVar30._0_8_;
      auVar31 = sqrtpd(auVar30,auVar31);
      dVar29 = 1.0 / auVar31._0_8_;
      dVar7 = (double)unaff_R13[3];
      auVar32._0_8_ = dVar7 * dVar7;
      auVar32._8_8_ = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar3 * dVar3 + dVar36 * dVar36 + dVar5 * dVar5 + auVar32._0_8_;
      auVar31 = sqrtpd(auVar32,auVar1);
      dVar34 = 1.0 / auVar31._0_8_;
      dVar29 = dVar34 * dVar36 * dVar29 * dVar35 + dVar34 * dVar3 * dVar29 * dVar2 +
               dVar34 * dVar5 * dVar29 * dVar4 + dVar34 * dVar7 * dVar29 * dVar6;
      if (0.0 <= dVar29) {
        if ((1.0 < dVar29) || (dVar29 < -1.0)) {
          dVar29 = 0.0;
        }
        else {
          dVar29 = (double)acos();
          dVar29 = dVar29 + dVar29;
        }
      }
      else {
        dVar29 = 3.4028234663852886e+38;
      }
      if (local_buffer_50 < dVar29) {
        uVar27 = uVar27 + 1;
        if (0x1d < (int)uVar27) break;
        iVar23 = iVar23 + -1;
        unaff_R13 = unaff_R13 + -4;
      }
      iVar23 = iVar23 + 1;
      unaff_R13 = unaff_R13 + 4;
      uVar10 = local_buffer_80;
      uVar11 = local_buffer_88;
      uVar12 = local_buffer_90;
      uVar13 = local_buffer_98;
      uVar14 = local_buffer_a0;
      uVar15 = local_buffer_a8;
      uVar16 = local_buffer_b0;
      uVar17 = local_buffer_b8;
      uVar18 = local_buffer_c0;
      uVar19 = local_buffer_c8;
      uVar20 = local_buffer_d0;
      uVar21 = local_buffer_d8;
    } while (iVar23 < (int)(uint)*(ushort *)(unaff_RBX + 2));
  }
  *(char *)((int64_t)unaff_RBX + 0x12) = (char)uVar27;
  if (*(ushort *)(unaff_RBX + 2) == 0) {
    iVar23 = CONCAT22(unaff_0000003a,unaff_DI);
  }
  else {
    iVar23 = (((uVar27 & 0xff) + 1) * 3 + (uint)*(byte *)((int64_t)unaff_RBX + 0x13)) *
             (uint)*(ushort *)(unaff_RBX + 2) + -1;
    iVar23 = (((int)(iVar23 + (iVar23 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar23 = ((int)(iVar23 + (iVar23 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar23 == 0) {
    uVar28 = CONCAT44(unaff_0000003c,CONCAT22(unaff_0000003a,unaff_DI));
  }
  else {
    uVar28 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar23,4);
  }
  *unaff_RBX = uVar28;
// WARNING: Subroutine does not return
  memset(uVar28,0,(int64_t)iVar23);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9bd21(void)
void UISystem_9bd21(void)
{
  int8_t auVar1 [16];
  double dVar2;
  double dVar3;
  int iVar4;
  uint64_t *unaff_RBX;
  int unaff_ESI;
  int unaff_EDI;
  int32_t unaff_0000003c;
  float *unaff_R13;
  uint unaff_R15D;
  uint64_t uVar5;
  double dVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint local_buffer_28;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  double local_buffer_50;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  do {
    local_buffer_58 = 0;
    local_buffer_60 = 0;
    local_buffer_68 = 0;
    local_buffer_70 = 0;
    local_buffer_28 = unaff_R15D;
    uVar5 = UISystem_9b8a0();
    RenderingSystem_40F060(uVar5,&local_buffer_00000058,&local_buffer_00000030,&local_buffer_00000040,unaff_R15D);
    dVar11 = (double)fStack0000000000000044;
    dVar14 = (double)fStack0000000000000040;
    dVar16 = (double)fStack0000000000000048;
    dVar2 = (double)fStack000000000000004c;
    auVar7._0_8_ = dVar2 * dVar2;
    auVar7._8_8_ = 0;
    dVar15 = (double)*unaff_R13;
    dVar12 = (double)unaff_R13[1];
    dVar6 = (double)unaff_R13[2];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar11 * dVar11 + dVar14 * dVar14 + dVar16 * dVar16 + auVar7._0_8_;
    auVar8 = sqrtpd(auVar7,auVar8);
    dVar13 = 1.0 / auVar8._0_8_;
    dVar3 = (double)unaff_R13[3];
    auVar9._0_8_ = dVar3 * dVar3;
    auVar9._8_8_ = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar15 * dVar15 + dVar12 * dVar12 + dVar6 * dVar6 + auVar9._0_8_;
    auVar8 = sqrtpd(auVar9,auVar1);
    dVar10 = 1.0 / auVar8._0_8_;
    dVar6 = dVar10 * dVar12 * dVar13 * dVar11 + dVar10 * dVar15 * dVar13 * dVar14 +
            dVar10 * dVar6 * dVar13 * dVar16 + dVar10 * dVar3 * dVar13 * dVar2;
    if (0.0 <= dVar6) {
      if ((1.0 < dVar6) || (dVar6 < -1.0)) {
        dVar6 = 0.0;
      }
      else {
        dVar6 = (double)acos();
        dVar6 = dVar6 + dVar6;
      }
    }
    else {
      dVar6 = 3.4028234663852886e+38;
    }
    if (local_buffer_50 < dVar6) {
      unaff_R15D = unaff_R15D + 1;
      if (0x1d < (int)unaff_R15D) break;
      unaff_ESI = unaff_ESI + -1;
      unaff_R13 = unaff_R13 + -4;
    }
    unaff_ESI = unaff_ESI + 1;
    unaff_R13 = unaff_R13 + 4;
  } while (unaff_ESI < (int)(uint)*(ushort *)(unaff_RBX + 2));
  *(char *)((int64_t)unaff_RBX + 0x12) = (char)unaff_R15D;
  iVar4 = unaff_EDI;
  if (*(ushort *)(unaff_RBX + 2) != 0) {
    iVar4 = (((unaff_R15D & 0xff) + 1) * 3 + (uint)*(byte *)((int64_t)unaff_RBX + 0x13)) *
            (uint)*(ushort *)(unaff_RBX + 2) + -1;
    iVar4 = (((int)(iVar4 + (iVar4 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar4 == 0) {
    uVar5 = CONCAT44(unaff_0000003c,unaff_EDI);
  }
  else {
    uVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar4,4);
  }
  *unaff_RBX = uVar5;
// WARNING: Subroutine does not return
  memset(uVar5,0,(int64_t)iVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9bf85(void)
void UISystem_9bf85(void)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int unaff_EDI;
  int32_t unaff_0000003c;
  byte unaff_R15B;
  *(byte *)((int64_t)unaff_RBX + 0x12) = unaff_R15B;
  iVar1 = unaff_EDI;
  if (*(ushort *)(unaff_RBX + 2) != 0) {
    iVar1 = ((unaff_R15B + 1) * 3 + (uint)*(byte *)((int64_t)unaff_RBX + 0x13)) *
            (uint)*(ushort *)(unaff_RBX + 2) + -1;
    iVar1 = (((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar1 == 0) {
    uVar2 = CONCAT44(unaff_0000003c,unaff_EDI);
  }
  else {
    uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar1,4);
  }
  *unaff_RBX = uVar2;
// WARNING: Subroutine does not return
  memset(uVar2,0,(int64_t)iVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9bfb4(uint64_t param_1,ushort param_2)
void UISystem_9bfb4(uint64_t param_1,ushort param_2)
{
  int iVar1;
  uint64_t *unaff_RBX;
  uint64_t unaff_RDI;
  byte unaff_R15B;
  iVar1 = ((unaff_R15B + 1) * 3 + (uint)*(byte *)((int64_t)unaff_RBX + 0x13)) * (uint)param_2 + -1;
  iVar1 = (((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 4;
  if (iVar1 != 0) {
    unaff_RDI = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar1,4);
  }
  *unaff_RBX = unaff_RDI;
// WARNING: Subroutine does not return
  memset(unaff_RDI,0,(int64_t)iVar1);
}
// 函数: void UISystem_9bff8(void)
void UISystem_9bff8(void)
{
  uint64_t *unaff_RBX;
  uint64_t unaff_RDI;
  *unaff_RBX = unaff_RDI;
// WARNING: Subroutine does not return
  memset();
}
// 函数: void UISystem_9c040(void)
void UISystem_9c040(void)
{
  uint *puVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  int64_t *unaff_RBX;
  int unaff_EDI;
  float *unaff_R12;
  uint local_buffer_28;
  uint64_t local_var_30;
  uint64_t local_buffer_78;
  do {
    local_buffer_28 = (uint)*(byte *)((int64_t)unaff_RBX + 0x12);
    UISystem_9b8a0();
    bVar4 = (byte)local_var_30._4_4_ & 0xf;
    iVar3 = local_var_30._4_4_;
    if (local_var_30._4_4_ < 0) {
      iVar3 = local_var_30._4_4_ + 0xf;
      bVar4 = bVar4 - 0x10;
    }
    local_var_30._4_4_ = local_var_30._4_4_ + (uint)*(byte *)((int64_t)unaff_RBX + 0x13);
    unaff_EDI = unaff_EDI + 1;
    fVar2 = *unaff_R12;
    unaff_R12 = unaff_R12 + 1;
    puVar1 = (uint *)(*unaff_RBX + (int64_t)(iVar3 >> 4) * 2);
    *puVar1 = *puVar1 | ((int)fVar2 & 0xffffU) << (bVar4 & 0x1f);
  } while (unaff_EDI < (int)(uint)*(ushort *)(unaff_RBX + 2));
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_78 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_9c0c6(void)
void UISystem_9c0c6(void)
{
  uint64_t local_buffer_78;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_78 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_9c0f0(int64_t *param_1,int32_t *param_2,int64_t param_3)
void UISystem_9c0f0(int64_t *param_1,int32_t *param_2,int64_t param_3)
{
  uint64_t uVar1;
  ushort uVar2;
  int64_t lVar3;
  uint uVar4;
  float *pfVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  *(int32_t *)(param_1 + 9) = *param_2;
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar7 = (uint64_t)uVar2;
  *(ushort *)(param_1 + 6) = uVar2;
  fVar13 = 0.0;
  pfVar5 = *(float **)(param_2 + 0xc);
  cVar6 = '\0';
  fVar14 = fVar13;
  if (uVar2 != 0) {
    do {
      fVar13 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      if (fVar13 <= fVar14) {
        fVar13 = fVar14;
      }
      uVar7 = uVar7 - 1;
      fVar14 = fVar13;
    } while (uVar7 != 0);
  }
  uVar4 = (int)fVar13;
  if ((int)fVar13 < 1) {
    uVar4 = 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
    cVar6 = cVar6 + '\x01';
  }
  *(char *)((int64_t)param_1 + 0x33) = cVar6;
  UISystem_9b010(param_1 + 4,*(uint64_t *)(param_2 + 10),*(uint64_t *)(param_2 + 0xc));
  lVar11 = (int64_t)(int)((*(int64_t *)(param_2 + 4) - *(int64_t *)(param_2 + 2)) / 0x48);
  UISystem_9b770(param_1);
  if (0 < lVar11) {
    lVar8 = 0;
    lVar9 = 0;
    lVar12 = 0;
    do {
      uVar1 = *(uint64_t *)(param_3 + lVar9 * 8);
      fVar13 = 0.0;
      lVar3 = *(int64_t *)(param_2 + 2);
      lVar10 = *param_1 + lVar12;
      uVar2 = *(ushort *)(lVar8 + 0x10 + lVar3);
      *(ushort *)(lVar10 + 0x10) = uVar2;
      pfVar5 = *(float **)(lVar8 + 8 + lVar3);
      if (uVar2 != 0) {
        uVar7 = (uint64_t)uVar2;
        fVar14 = fVar13;
        do {
          fVar13 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          if (fVar13 <= fVar14) {
            fVar13 = fVar14;
          }
          uVar7 = uVar7 - 1;
          fVar14 = fVar13;
        } while (uVar7 != 0);
      }
      uVar4 = (uint)fVar13;
      if ((int)uVar4 < 1) {
        uVar4 = 1;
      }
      cVar6 = '\0';
      for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
        cVar6 = cVar6 + '\x01';
      }
      *(char *)(lVar10 + 0x13) = cVar6;
      UISystem_9bb60(lVar10,*(uint64_t *)(lVar8 + lVar3),*(uint64_t *)(lVar8 + 8 + lVar3),uVar1);
      UISystem_83d80(lVar10 + 0x14,lVar3 + 0x12 + lVar8);
      UISystem_83e80(lVar10 + 0x26,lVar3 + 0x24 + lVar8);
      UISystem_83d80(lVar10 + 0x38,lVar3 + 0x36 + lVar8);
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 0x4a;
      lVar8 = lVar8 + 0x48;
    } while (lVar9 < lVar11);
  }
  *(int32_t *)((int64_t)param_1 + 0x4c) = param_2[0x18];
  *(int32_t *)(param_1 + 10) = param_2[0x19];
  return;
}
// 函数: void UISystem_9c1ae(void)
void UISystem_9c1ae(void)
{
  uint64_t uVar1;
  ushort uVar2;
  int64_t lVar3;
  uint uVar4;
  float *pfVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t unaff_RDI;
  int64_t *unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  int64_t local_buffer_60;
  lVar8 = 0;
  lVar9 = 0;
  lVar11 = 0;
  do {
    uVar1 = *(uint64_t *)(unaff_RDI + lVar9 * 8);
    fVar12 = 0.0;
    lVar3 = *(int64_t *)(unaff_R14 + 8);
    lVar10 = *unaff_R12 + lVar11;
    uVar2 = *(ushort *)(lVar8 + 0x10 + lVar3);
    *(ushort *)(lVar10 + 0x10) = uVar2;
    pfVar5 = *(float **)(lVar8 + 8 + lVar3);
    if (uVar2 != 0) {
      uVar7 = (uint64_t)uVar2;
      fVar13 = fVar12;
      do {
        fVar12 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        if (fVar12 <= fVar13) {
          fVar12 = fVar13;
        }
        uVar7 = uVar7 - 1;
        fVar13 = fVar12;
      } while (uVar7 != 0);
    }
    uVar4 = (uint)fVar12;
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
    cVar6 = '\0';
    for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
      cVar6 = cVar6 + '\x01';
    }
    *(char *)(lVar10 + 0x13) = cVar6;
    UISystem_9bb60(lVar10,*(uint64_t *)(lVar8 + lVar3),*(uint64_t *)(lVar8 + 8 + lVar3),uVar1);
    UISystem_83d80(lVar10 + 0x14,lVar3 + 0x12 + lVar8);
    UISystem_83e80(lVar10 + 0x26,lVar3 + 0x24 + lVar8);
    UISystem_83d80(lVar10 + 0x38,lVar3 + 0x36 + lVar8);
    lVar9 = lVar9 + 1;
    lVar11 = lVar11 + 0x4a;
    lVar8 = lVar8 + 0x48;
    unaff_RDI = local_buffer_60;
  } while (lVar9 < unaff_R13);
  *(int32_t *)((int64_t)unaff_R12 + 0x4c) = *(int32_t *)(unaff_R14 + 0x60);
  *(int32_t *)(unaff_R12 + 10) = *(int32_t *)(unaff_R14 + 100);
  return;
}
// 函数: void UISystem_9c2ac(void)
void UISystem_9c2ac(void)
{
  int64_t unaff_R12;
  int64_t unaff_R14;
  *(int32_t *)(unaff_R12 + 0x4c) = *(int32_t *)(unaff_R14 + 0x60);
  *(int32_t *)(unaff_R12 + 0x50) = *(int32_t *)(unaff_R14 + 100);
  return;
}
uint64_t * UISystem_9c2d0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_9360_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address