#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part013.c - 4 个函数

// 函数: void FUN_180052200(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180052200(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int32_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint64_t uVar7;
  void *puStack_90;
  uint64_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  
  uVar7 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_1 + 0xd8);
  lVar6 = 0;
  if ((*(longlong *)(param_1 + 0xe0) - *plVar1 & 0xffffffffffffffe0U) != 0) {
    FUN_180057110(param_2);
    uVar5 = *(longlong *)(param_1 + 0xe0) - *plVar1 >> 5;
    if (0 < (int)uVar5) {
      uVar5 = uVar5 & 0xffffffff;
      do {
        if (*(ulonglong *)(param_2 + 8) < *(ulonglong *)(param_2 + 0x10)) {
          *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) + 0x20;
          FUN_180627ae0();
        }
        else {
          FUN_180059820(param_2,*plVar1 + lVar6);
        }
        lVar6 = lVar6 + 0x20;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    return;
  }
  puStack_70 = &unknown_var_3456_ptr;
  uStack_58 = 0;
  puStack_68 = (uint64_t *)0x0;
  uStack_60 = 0;
  puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,0xfffffffffffffffe);
  *(int8_t *)puVar4 = 0;
  puStack_68 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
  *puVar4 = 0x53454c55444f4d5f;
  *(int16_t *)(puVar4 + 1) = 0x2a5f;
  *(int8_t *)((longlong)puVar4 + 10) = 0;
  uStack_60 = 10;
  iVar3 = FUN_180628d60(param_1 + 0x2c0,&puStack_70);
  if (-1 < iVar3) {
    puStack_90 = &unknown_var_3456_ptr;
    uStack_78 = 0;
    puStack_88 = (uint64_t *)0x0;
    uStack_80 = 0;
    puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,uVar7);
    *(int8_t *)puVar4 = 0;
    puStack_88 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar2);
    *puVar4 = 0x454c55444f4d5f2a;
    *(int16_t *)(puVar4 + 1) = 0x5f53;
    *(int8_t *)((longlong)puVar4 + 10) = 0;
    uStack_80 = 10;
    FUN_180628d60(param_1 + 0x2c0,&puStack_90);
    puStack_90 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  puStack_70 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1800524c0(uint64_t param_1,uint64_t param_2)

{
  longlong lVar1;
  int32_t uVar2;
  int iVar3;
  uint64_t *puVar4;
  void *puStack_88;
  uint64_t *puStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  uint64_t *puStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  
  lVar1 = _DAT_180c86870;
  if (*(int *)(_DAT_180c86870 + 200) != 0) {
    FUN_180627ae0(param_2,_DAT_180c86870 + 0xb8);
    return param_2;
  }
  puStack_68 = &unknown_var_3456_ptr;
  uStack_50 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 0;
  puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_60 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  *puVar4 = 0x53454c55444f4d5f;
  *(int16_t *)(puVar4 + 1) = 0x2a5f;
  *(int8_t *)((longlong)puVar4 + 10) = 0;
  uStack_58 = 10;
  iVar3 = FUN_180628d60(lVar1 + 0x2c0,&puStack_68);
  if (-1 < iVar3) {
    puStack_88 = &unknown_var_3456_ptr;
    uStack_70 = 0;
    puStack_80 = (uint64_t *)0x0;
    uStack_78 = 0;
    puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_80 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
    *puVar4 = 0x454c55444f4d5f2a;
    *(int16_t *)(puVar4 + 1) = 0x5f53;
    *(int8_t *)((longlong)puVar4 + 10) = 0;
    uStack_78 = 10;
    FUN_180628d60(lVar1 + 0x2c0,&puStack_88);
    puStack_88 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  puStack_68 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180052940(longlong param_1,float param_2,uint64_t param_3,uint64_t param_4)
void FUN_180052940(longlong param_1,float param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint64_t in_RDX;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int32_t uVar21;
  float fVar22;
  float fStackX_8;
  float fStackX_c;
  
  lVar8 = SYSTEM_STATE_MANAGER;
  if ((*(longlong *)(_DAT_180c86890 + 0x7ab8) == 0) || (*(int *)(SYSTEM_STATE_MANAGER + 0x540) < 1)) {
    bVar14 = *(int *)(SYSTEM_STATE_MANAGER + 0x2140) != 0;
  }
  else {
    bVar14 = false;
  }
  if (bVar14) {
    fVar15 = (float)exp2f(SYSTEM_STATE_MANAGER,in_RDX,param_3,param_4,0xfffffffffffffffe);
    if (*(char *)(param_1 + 0x22d) == '\0') {
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8);
      if ((*(int *)(lVar8 + 0x48) < _DAT_180d49140) &&
         (FUN_1808fcb90(&system_ptr_9140), _DAT_180d49140 == -1)) {
        _DAT_180d49144 = param_2;
        FUN_1808fcb30(&system_ptr_9140);
      }
      fVar16 = (float)exp2f();
      fVar17 = (float)exp2f();
      fVar18 = (float)exp2f();
      fVar19 = (float)exp2f();
      fVar20 = (float)exp2f();
      _DAT_180d49144 = (1.0 - fVar16) * _DAT_180d49144 + fVar16 * param_2;
      fVar2 = (float)*(int *)(SYSTEM_STATE_MANAGER + 0x21b0);
      if (*(float *)(_DAT_180c86870 + 0x1f8) <= (float)*(int *)(SYSTEM_STATE_MANAGER + 0x21b0)) {
        fVar2 = *(float *)(_DAT_180c86870 + 0x1f8);
      }
      fVar22 = *(float *)(SYSTEM_STATE_MANAGER + 0x1e30);
      if (0 < *(int *)(SYSTEM_STATE_MANAGER + 0x1f80)) {
        fVar22 = fVar22 / (float)*(int *)(SYSTEM_STATE_MANAGER + 0x1f80);
      }
      fVar3 = (float)((int)fVar22 + -1);
      if (fVar2 <= (float)((int)fVar22 + -1)) {
        fVar3 = fVar2;
      }
      if ((*(int *)(lVar8 + 0x48) < _DAT_180d49148) &&
         (FUN_1808fcb90(&system_ptr_9148), _DAT_180d49148 == -1)) {
        _DAT_180d4914c = fVar3;
        FUN_1808fcb30(&system_ptr_9148);
      }
      _DAT_180d4914c = (1.0 - fVar16) * _DAT_180d4914c + fVar3 * fVar16;
      fVar18 = ((float)(int)((_DAT_180d49144 / _DAT_180d4914c) / fVar17) * fVar17 - 1.0) * fVar18 *
               fVar19 + fVar18;
      if (fVar18 <= fVar15) {
        fVar18 = fVar15;
      }
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
      fVar20 = (float)(int)((fVar18 + 0.05) / fVar20) * fVar20;
      if ((fVar15 <= fVar20) && (fVar15 = fVar20, 1.0 <= fVar20)) {
        fVar15 = 1.0;
      }
      *(float *)(param_1 + 0x238) = fVar15;
      uVar21 = log2f();
      *(int32_t *)(param_1 + 0x248) = uVar21;
      *(float *)(param_1 + 0x250) = _DAT_180d49144;
      lVar10 = _DAT_180c86950;
      *(int8_t *)(_DAT_180c86950 + 0x162b) = 1;
      lVar8 = SYSTEM_STATE_MANAGER;
    }
    else {
      *(float *)(param_1 + 0x238) = fVar15;
      lVar8 = SYSTEM_STATE_MANAGER;
      lVar10 = _DAT_180c86950;
    }
  }
  else {
    *(int32_t *)(param_1 + 0x238) = 0x3f800000;
    lVar10 = _DAT_180c86950;
  }
  if ((*(longlong *)(_DAT_180c86890 + 0x7ab8) == 0) || (*(int *)(lVar8 + 0x540) < 1)) {
    if (*(int *)(lVar8 + 0x2140) == 0) {
      fVar15 = *(float *)(lVar8 + 0x20d0);
    }
    else {
      fVar15 = 100.0;
    }
    fVar15 = fVar15 * 0.01;
  }
  else {
    fVar15 = 1.0;
  }
  *(float *)(param_1 + 0x234) = fVar15;
  uVar11 = (uint)*(float *)(lVar10 + 0x17ec);
  uVar13 = (uint)*(float *)(lVar10 + 0x17f0);
  uVar12 = uVar11;
  uVar7 = uVar13;
  if (1.0 <= fVar15) {
    fStackX_8 = 1.0;
    fStackX_c = 1.0;
  }
  else {
    while (0 < (int)uVar7) {
      uVar9 = (int)uVar12 % (int)uVar7;
      uVar12 = uVar7;
      uVar7 = uVar9;
    }
    iVar6 = (int)uVar11 / (int)uVar12;
    fStackX_8 = (float)(int)uVar11;
    do {
      uVar11 = (uint)(fStackX_8 * fVar15);
      if (1 < iVar6) {
        uVar11 = ((uVar11 - 1) - (int)(uVar11 - 1) % iVar6) + iVar6;
      }
      uVar1 = (longlong)(int)(((int)uVar13 / (int)uVar12) * uVar11) / (longlong)iVar6;
      uVar7 = (uint)uVar1;
      if (((uVar11 & 1) == 0) && ((uVar1 & 1) == 0)) goto LAB_180052ce3;
      fVar15 = fVar15 + 0.01;
      *(float *)(param_1 + 0x234) = fVar15;
    } while (fVar15 <= 1.0);
    *(int32_t *)(param_1 + 0x234) = 0x3f800000;
LAB_180052ce3:
    fStackX_8 = (float)(int)uVar11 / fStackX_8;
    fStackX_c = (float)(int)uVar7 / (float)(int)uVar13;
    uVar13 = uVar7;
  }
  *(ulonglong *)(param_1 + 0x254) = CONCAT44(fStackX_c,fStackX_8);
  fVar15 = *(float *)(param_1 + 0x238);
  if (1.0 <= fVar15) {
    fStackX_8 = 1.0;
    fStackX_c = 1.0;
  }
  else {
    uVar5 = (ulonglong)uVar13;
    uVar1 = (ulonglong)uVar11;
    uVar12 = uVar11;
    uVar7 = uVar13;
    while (uVar4 = uVar5, 0 < (int)uVar7) {
      uVar12 = (uint)uVar4;
      uVar1 = (longlong)(int)uVar1 % (longlong)(int)uVar12;
      uVar7 = (uint)uVar1;
      uVar5 = uVar1 & 0xffffffff;
      uVar1 = uVar4;
    }
    iVar6 = (int)uVar11 / (int)uVar12;
    do {
      uVar7 = (uint)(fVar15 * (float)(int)uVar11);
      if (1 < iVar6) {
        uVar7 = ((uVar7 - 1) - (int)(uVar7 - 1) % iVar6) + iVar6;
      }
      uVar1 = (longlong)(int)(((int)uVar13 / (int)uVar12) * uVar7) / (longlong)iVar6;
      if (((uVar7 & 1) == 0) && ((uVar1 & 1) == 0)) goto LAB_180052de5;
      fVar15 = fVar15 + 0.01;
      *(float *)(param_1 + 0x238) = fVar15;
    } while (fVar15 <= 1.0);
    *(int32_t *)(param_1 + 0x238) = 0x3f800000;
LAB_180052de5:
    fStackX_8 = (float)(int)uVar7 / (float)(int)uVar11;
    fStackX_c = (float)(int)uVar1 / (float)(int)uVar13;
  }
  *(ulonglong *)(param_1 + 0x25c) = CONCAT44(fStackX_c,fStackX_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180052ef0(longlong *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_180052ef0(longlong *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  longlong alStack_70 [2];
  void *puStack_60;
  void *puStack_58;
  longlong alStack_50 [2];
  void *puStack_40;
  void *puStack_38;
  
  lVar2 = _DAT_180c86870;
  plStackX_8 = param_1;
  if (*(int *)(SYSTEM_STATE_MANAGER + 0xd94) != *(int *)(SYSTEM_STATE_MANAGER + 0xd90)) {
    FUN_18004caf0(_DAT_180c86870,param_2,param_3,param_4,0xfffffffffffffffe);
  }
  lVar3 = _DAT_180c86950;
  if (_DAT_180c86950 != 0) {
    uVar8 = 0;
    lVar7 = *(longlong *)(_DAT_180c86950 + 0x1868);
    uVar10 = uVar8;
    if (*(longlong *)(_DAT_180c86950 + 0x1870) - lVar7 >> 3 != 0) {
      do {
        if (*(longlong **)(uVar8 + lVar7) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(uVar8 + lVar7) + 0x108))();
        }
        uVar9 = (int)uVar10 + 1;
        uVar8 = uVar8 + 8;
        lVar7 = *(longlong *)(lVar3 + 0x1868);
        uVar10 = (ulonglong)uVar9;
      } while ((ulonglong)(longlong)(int)uVar9 <
               (ulonglong)(*(longlong *)(lVar3 + 0x1870) - lVar7 >> 3));
    }
    (**(code **)(_DAT_180c8a9c0 + 0x40))();
  }
  (**(code **)(**(longlong **)(lVar2 + 0x2b0) + 0xd0))();
  if (((*(int *)(SYSTEM_STATE_MANAGER + 0x4d4) != *(int *)(SYSTEM_STATE_MANAGER + 0x4d0)) ||
      (*(int *)(SYSTEM_STATE_MANAGER + 0x314) != *(int *)(SYSTEM_STATE_MANAGER + 0x310))) ||
     (*(int *)(SYSTEM_STATE_MANAGER + 0x544) != *(int *)(SYSTEM_STATE_MANAGER + 0x540))) {
    plStackX_8 = alStack_70;
    puStack_60 = &unknown_var_5376_ptr;
    puStack_58 = &unknown_var_5360_ptr;
    FUN_18005c650(alStack_70);
  }
  if ((_DAT_180c8a9d0 != 0) &&
     ((*(int *)(SYSTEM_STATE_MANAGER + 900) != *(int *)(SYSTEM_STATE_MANAGER + 0x380) ||
      (*(int *)(SYSTEM_STATE_MANAGER + 0x3f4) != *(int *)(SYSTEM_STATE_MANAGER + 0x3f0))))) {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x40,8,3);
    plStackX_8 = alStack_50;
    puStack_40 = &unknown_var_5328_ptr;
    puStack_38 = &unknown_var_5312_ptr;
    plVar5 = (longlong *)FUN_18005c2a0(uVar4,alStack_50);
    plStackX_10 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    uVar4 = _DAT_180c82868;
    pplStackX_18 = &plStackX_8;
    plStackX_8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    FUN_18005e370(uVar4,&plStackX_8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
  }
  lVar3 = SYSTEM_STATE_MANAGER;
  if ((*(longlong *)(_DAT_180c86890 + 0x7ab8) == 0) || (*(int *)(SYSTEM_STATE_MANAGER + 0x540) < 1)) {
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x2140) == 0) {
      fVar11 = *(float *)(SYSTEM_STATE_MANAGER + 0x20d0);
    }
    else {
      fVar11 = 100.0;
    }
    fVar11 = fVar11 * 0.01;
  }
  else {
    fVar11 = 1.0;
  }
  *(float *)(lVar2 + 0x234) = fVar11;
  *(int32_t *)(lVar2 + 0x238) = 0x3f800000;
  fVar12 = 1.0;
  if (*(int *)(lVar3 + 0x1ea0) == 1) {
    iVar1 = *(int *)(lVar3 + 0x1d50);
    piVar6 = (int *)FUN_180171f10(*(uint64_t *)(_DAT_180c86870 + 8),&plStackX_10);
    fVar12 = (float)iVar1 / (float)*piVar6;
    fVar11 = fVar12 * *(float *)(lVar2 + 0x234);
    fVar12 = fVar12 * *(float *)(lVar2 + 0x238);
  }
  if (0.2 <= fVar11) {
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
  }
  else {
    fVar11 = 0.2;
  }
  *(float *)(lVar2 + 0x234) = fVar11;
  if (0.2 <= fVar12) {
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    *(float *)(lVar2 + 0x238) = fVar12;
  }
  else {
    *(int32_t *)(lVar2 + 0x238) = 0x3e4ccccd;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180053200(uint64_t param_1,longlong param_2)
void FUN_180053200(uint64_t param_1,longlong param_2)

{
  int32_t *puVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_1c8 [32];
  void **ppuStack_1a8;
  uint64_t uStack_1a0;
  void *puStack_198;
  uint64_t uStack_190;
  int iStack_188;
  int8_t auStack_e8 [16];
  void *puStack_d8;
  uint64_t uStack_d0;
  int iStack_c8;
  ulonglong uStack_18;
  
  uStack_1a0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1c8;
  FUN_180047d40(auStack_e8,
                (longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 +
                *(longlong *)(_DAT_180c86938 + 0x1d20));
  FUN_180623de0(&puStack_198);
  iVar2 = 0;
  *(int32_t *)(param_2 + 0x10) = 0;
  if (*(int8_t **)(param_2 + 8) != (int8_t *)0x0) {
    **(int8_t **)(param_2 + 8) = 0;
    iVar2 = *(int *)(param_2 + 0x10);
  }
  iVar3 = iVar2 + 5;
  FUN_1806277c0(param_2,iVar3);
  puVar1 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x3a757067;
  *(int16_t *)(puVar1 + 1) = 0x20;
  *(int *)(param_2 + 0x10) = iVar3;
  if (0 < iStack_c8) {
    FUN_1806277c0(param_2,iVar3 + iStack_c8);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),uStack_d0,
           (longlong)(iStack_c8 + 1));
  }
  FUN_1806277c0(param_2,iVar2 + 6);
  *(int16_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 10;
  *(int *)(param_2 + 0x10) = iVar2 + 6;
  iVar3 = iVar2 + 0xb;
  FUN_1806277c0(param_2,iVar3);
  puVar1 = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x3a757063;
  *(int16_t *)(puVar1 + 1) = 0x20;
  *(int *)(param_2 + 0x10) = iVar3;
  if (0 < iStack_188) {
    FUN_1806277c0(param_2,iVar3 + iStack_188);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),uStack_190,
           (longlong)(iStack_188 + 1));
  }
  FUN_1806277c0(param_2,iVar2 + 0xc);
  *(int16_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 10;
  *(int *)(param_2 + 0x10) = iVar2 + 0xc;
  puStack_198 = &unknown_var_720_ptr;
  ppuStack_1a8 = &puStack_d8;
  puStack_d8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_1c8);
}



// WARNING: Removing unreachable block (ram,0x000180053668)
// WARNING: Removing unreachable block (ram,0x0001800536a5)
// WARNING: Removing unreachable block (ram,0x0001800536a9)
// WARNING: Removing unreachable block (ram,0x0001800536b4)
// WARNING: Removing unreachable block (ram,0x0001800536b7)
// WARNING: Removing unreachable block (ram,0x0001800536e1)
// WARNING: Removing unreachable block (ram,0x0001800536e5)
// WARNING: Removing unreachable block (ram,0x0001800536f3)
// WARNING: Removing unreachable block (ram,0x0001800536fb)
// WARNING: Removing unreachable block (ram,0x000180053702)
// WARNING: Removing unreachable block (ram,0x00018005370c)
// WARNING: Removing unreachable block (ram,0x00018005373c)
// WARNING: Removing unreachable block (ram,0x000180053744)
// WARNING: Removing unreachable block (ram,0x000180053747)
// WARNING: Removing unreachable block (ram,0x000180053714)
// WARNING: Removing unreachable block (ram,0x000180053719)
// WARNING: Removing unreachable block (ram,0x000180053760)
// WARNING: Removing unreachable block (ram,0x00018005376e)
// WARNING: Removing unreachable block (ram,0x0001800537b1)
// WARNING: Removing unreachable block (ram,0x0001800537b5)
// WARNING: Removing unreachable block (ram,0x0001800537c0)
// WARNING: Removing unreachable block (ram,0x0001800537c3)
// WARNING: Removing unreachable block (ram,0x0001800537ed)
// WARNING: Removing unreachable block (ram,0x0001800537f1)
// WARNING: Removing unreachable block (ram,0x0001800537ff)
// WARNING: Removing unreachable block (ram,0x000180053807)
// WARNING: Removing unreachable block (ram,0x00018005380c)
// WARNING: Removing unreachable block (ram,0x00018005381c)
// WARNING: Removing unreachable block (ram,0x00018005384b)
// WARNING: Removing unreachable block (ram,0x000180053853)
// WARNING: Removing unreachable block (ram,0x000180053856)
// WARNING: Removing unreachable block (ram,0x000180053824)
// WARNING: Removing unreachable block (ram,0x000180053828)
// WARNING: Removing unreachable block (ram,0x00018005386f)
// WARNING: Removing unreachable block (ram,0x00018005387d)
// WARNING: Removing unreachable block (ram,0x0001800538c8)
// WARNING: Removing unreachable block (ram,0x0001800538cc)
// WARNING: Removing unreachable block (ram,0x0001800538d7)
// WARNING: Removing unreachable block (ram,0x0001800538da)
// WARNING: Removing unreachable block (ram,0x000180053906)
// WARNING: Removing unreachable block (ram,0x00018005390a)
// WARNING: Removing unreachable block (ram,0x000180053918)
// WARNING: Removing unreachable block (ram,0x000180053921)
// WARNING: Removing unreachable block (ram,0x000180053925)
// WARNING: Removing unreachable block (ram,0x000180053931)
// WARNING: Removing unreachable block (ram,0x000180053962)
// WARNING: Removing unreachable block (ram,0x00018005396a)
// WARNING: Removing unreachable block (ram,0x00018005396d)
// WARNING: Removing unreachable block (ram,0x000180053939)
// WARNING: Removing unreachable block (ram,0x00018005393e)
// WARNING: Removing unreachable block (ram,0x000180053987)
// WARNING: Removing unreachable block (ram,0x000180053996)
// WARNING: Removing unreachable block (ram,0x0001800539f8)
// WARNING: Removing unreachable block (ram,0x0001800539fc)
// WARNING: Removing unreachable block (ram,0x000180053a07)
// WARNING: Removing unreachable block (ram,0x000180053a0a)
// WARNING: Removing unreachable block (ram,0x000180053a34)
// WARNING: Removing unreachable block (ram,0x000180053a38)
// WARNING: Removing unreachable block (ram,0x000180053a46)
// WARNING: Removing unreachable block (ram,0x000180053a4e)
// WARNING: Removing unreachable block (ram,0x000180053a53)
// WARNING: Removing unreachable block (ram,0x000180053ad8)
// WARNING: Removing unreachable block (ram,0x000180053a61)
// WARNING: Removing unreachable block (ram,0x000180053aa2)
// WARNING: Removing unreachable block (ram,0x000180053aab)
// WARNING: Removing unreachable block (ram,0x000180053aaf)
// WARNING: Removing unreachable block (ram,0x000180053a69)
// WARNING: Removing unreachable block (ram,0x000180053a74)
// WARNING: Removing unreachable block (ram,0x000180053ade)
// WARNING: Removing unreachable block (ram,0x000180053b28)
// WARNING: Removing unreachable block (ram,0x000180053b2c)
// WARNING: Removing unreachable block (ram,0x000180053b32)
// WARNING: Removing unreachable block (ram,0x000180053b36)
// WARNING: Removing unreachable block (ram,0x000180053b60)
// WARNING: Removing unreachable block (ram,0x000180053b64)
// WARNING: Removing unreachable block (ram,0x000180053b72)
// WARNING: Removing unreachable block (ram,0x000180053b7a)
// WARNING: Removing unreachable block (ram,0x000180053b7e)
// WARNING: Removing unreachable block (ram,0x000180053b8e)
// WARNING: Removing unreachable block (ram,0x000180053bbe)
// WARNING: Removing unreachable block (ram,0x000180053bc6)
// WARNING: Removing unreachable block (ram,0x000180053bc9)
// WARNING: Removing unreachable block (ram,0x000180053b97)
// WARNING: Removing unreachable block (ram,0x000180053b9b)
// WARNING: Removing unreachable block (ram,0x000180053be2)
// WARNING: Removing unreachable block (ram,0x000180053bf0)
// WARNING: Removing unreachable block (ram,0x000180053c4c)
// WARNING: Removing unreachable block (ram,0x000180053c51)
// WARNING: Removing unreachable block (ram,0x000180053c5d)
// WARNING: Removing unreachable block (ram,0x000180053c60)
// WARNING: Removing unreachable block (ram,0x000180053c8e)
// WARNING: Removing unreachable block (ram,0x000180053c93)
// WARNING: Removing unreachable block (ram,0x000180053ca1)
// WARNING: Removing unreachable block (ram,0x000180053caa)
// WARNING: Removing unreachable block (ram,0x000180053caf)
// WARNING: Removing unreachable block (ram,0x000180053cbe)
// WARNING: Removing unreachable block (ram,0x000180053cf1)
// WARNING: Removing unreachable block (ram,0x000180053cf9)
// WARNING: Removing unreachable block (ram,0x000180053cfc)
// WARNING: Removing unreachable block (ram,0x000180053cc6)
// WARNING: Removing unreachable block (ram,0x000180053cce)
// WARNING: Removing unreachable block (ram,0x000180053d15)
// WARNING: Removing unreachable block (ram,0x000180053d23)
// WARNING: Removing unreachable block (ram,0x000180053d8b)
// WARNING: Removing unreachable block (ram,0x000180053d8f)
// WARNING: Removing unreachable block (ram,0x000180053d9a)
// WARNING: Removing unreachable block (ram,0x000180053d9d)
// WARNING: Removing unreachable block (ram,0x000180053dcd)
// WARNING: Removing unreachable block (ram,0x000180053dd1)
// WARNING: Removing unreachable block (ram,0x000180053ddf)
// WARNING: Removing unreachable block (ram,0x000180053de8)
// WARNING: Removing unreachable block (ram,0x000180053ded)
// WARNING: Removing unreachable block (ram,0x000180053dfc)
// WARNING: Removing unreachable block (ram,0x000180053e2f)
// WARNING: Removing unreachable block (ram,0x000180053e37)
// WARNING: Removing unreachable block (ram,0x000180053e3a)
// WARNING: Removing unreachable block (ram,0x000180053e03)
// WARNING: Removing unreachable block (ram,0x000180053e0b)
// WARNING: Removing unreachable block (ram,0x000180053e54)
// WARNING: Removing unreachable block (ram,0x000180053e63)
// WARNING: Removing unreachable block (ram,0x000180053ead)
// WARNING: Removing unreachable block (ram,0x000180053eb5)
// WARNING: Removing unreachable block (ram,0x000180053ee6)
// WARNING: Removing unreachable block (ram,0x000180053ef5)
// WARNING: Removing unreachable block (ram,0x000180053f18)
// WARNING: Removing unreachable block (ram,0x000180053f20)
// WARNING: Removing unreachable block (ram,0x000180053f43)
// WARNING: Removing unreachable block (ram,0x000180053f4b)
// WARNING: Removing unreachable block (ram,0x000180053f74)
// WARNING: Removing unreachable block (ram,0x000180053f79)
// WARNING: Removing unreachable block (ram,0x000180053f98)
// WARNING: Removing unreachable block (ram,0x000180053fa0)
// WARNING: Removing unreachable block (ram,0x000180053fbc)
// WARNING: Removing unreachable block (ram,0x000180053fc4)
// WARNING: Removing unreachable block (ram,0x000180053fe5)
// WARNING: Removing unreachable block (ram,0x000180053fea)
// WARNING: Removing unreachable block (ram,0x000180054035)
// WARNING: Removing unreachable block (ram,0x000180054062)
// WARNING: Removing unreachable block (ram,0x000180054075)
// WARNING: Removing unreachable block (ram,0x00018005407a)
// WARNING: Removing unreachable block (ram,0x0001800540b2)
// WARNING: Removing unreachable block (ram,0x0001800540b7)
// WARNING: Removing unreachable block (ram,0x0001800540d9)
// WARNING: Removing unreachable block (ram,0x0001800540e1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



