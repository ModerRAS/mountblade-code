#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part442.c - 10 个函数

// 函数: void FUN_18050c740(int64_t param_1,int param_2,uint param_3,char param_4)
void FUN_18050c740(int64_t param_1,int param_2,uint param_3,char param_4)

{
  bool bVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t unaff_RSI;
  int64_t lVar6;
  int32_t uVar7;
  int64_t lVar8;
  
  lVar2 = (int64_t)param_2 * 0x1f8 + *(int64_t *)(param_1 + 0x8f8);
  lVar6 = *(int64_t *)(lVar2 + 0xd8);
  if (*(int *)(lVar2 + 0x38) < 1) {
    iVar3 = *(int *)(lVar2 + 0xf8);
    bVar1 = false;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0xf8);
    if (((*(uint *)((int64_t)iVar3 * 0xa0 + 0x50 + lVar6) >> 9 & 1) == 0) ||
       (0 < *(short *)(lVar2 + 0x10))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  uVar4 = (uint)*(uint64_t *)((int64_t)iVar3 * 0xa0 + 0x50 + lVar6);
  if (bVar1) {
    iVar3 = *(int *)((int64_t)iVar3 * 0xa0 + 0x60 + lVar6);
    FUN_18050c450(param_1,param_2,param_3);
    if ((param_4 != '\0') && ((uVar4 & 0x102) == 2)) {
      iVar5 = 0;
      lVar6 = 0;
      do {
        lVar2 = *(int64_t *)(param_1 + 0x8f8) + lVar6;
        if ((0 < *(int *)(lVar2 + 0x38)) &&
           (((lVar8 = (int64_t)*(int *)(lVar2 + 0xf8) * 0xa0 + *(int64_t *)(lVar2 + 0xd8),
             (*(uint *)(lVar8 + 0x50) >> 9 & 1) == 0 || (0 < *(short *)(lVar2 + 0x10))) &&
            (*(int *)(lVar8 + 0x5c) == iVar3)))) {
          FUN_18050c450(param_1,iVar5,param_3 & 0xfffffffd | 1);
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x1f8;
      } while (iVar5 < 4);
    }
  }
  else if ((uVar4 & 0x103) == 0x100) {
    FUN_18050c450(param_1,param_2,param_3 & 0xfffffffd | 1);
  }
  lVar6 = 0;
  uVar7 = 0xffffffff;
  iVar3 = *(int *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e0);
  lVar2 = lVar6;
  if ((-1 < iVar3) &&
     (lVar2 = (int64_t)iVar3 * 0x1f8 + 8 + *(int64_t *)(param_1 + 0x8f8), lVar2 != 0)) {
    uVar7 = *(int32_t *)(lVar2 + 0xf0);
  }
  lVar8 = lVar6;
  if (lVar2 != 0) {
    lVar8 = FUN_18050e440(param_1,lVar2,&stack0x00000010,&stack0x00000018,&stack0x00000008,
                          &stack0x00000020,uVar7);
    lVar6 = unaff_RSI;
  }
  *(int64_t *)(param_1 + 0x628) = lVar6;
  *(int64_t *)(param_1 + 0x630) = lVar8;
  *(uint64_t *)(param_1 + 0x638) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x640) = CONCAT44(uVar7,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050cca0(int64_t param_1)
void FUN_18050cca0(int64_t param_1)

{
  ushort *puVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int32_t uVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  float fVar14;
  int8_t auStackX_8 [8];
  uint64_t in_stack_ffffffffffffffb8;
  
  lVar7 = *(int64_t *)(param_1 + 0x590);
  if (lVar7 == 0) {
    return;
  }
  lVar11 = *(int64_t *)(param_1 + 0x8f8);
  if (*(char *)(lVar11 + 0xa24) == -1) {
    return;
  }
  if (-1 < *(char *)(lVar11 + 0xa26)) {
    in_stack_ffffffffffffffb8 =
         CONCAT44((int)(in_stack_ffffffffffffffb8 >> 0x20),*(int32_t *)(param_1 + 0x56c));
    cVar4 = FUN_1805377e0(lVar11,(int)*(char *)(lVar11 + 0xa26),(int)*(char *)(lVar11 + 0xa25),
                          *(uint *)(param_1 + 0x564) >> 0x1f ^ 1,in_stack_ffffffffffffffb8);
    if (cVar4 == '\0') {
      bVar3 = false;
      goto LAB_18050cd1a;
    }
  }
  iVar8 = *(int *)(lVar7 + 0x2498);
  bVar3 = true;
  if ((iVar8 != -1) && (*(int *)((int64_t)iVar8 * 0x68 + 0x58 + render_system_config) == 0x21)) {
    cVar4 = *(char *)(*(int64_t *)(param_1 + 0x8f8) + 0xa24);
    if (cVar4 == '\0') {
      *(int8_t *)(*(int64_t *)(param_1 + 0x8f8) + 0xa24) = 1;
      lVar7 = *(int64_t *)(param_1 + 0x8f8);
      lVar11 = (int64_t)*(char *)(lVar7 + 0xa25);
      iVar8 = *(int *)(lVar7 + 0x9e0 + lVar11 * 4);
      if (iVar8 == -1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(int32_t *)((int64_t)iVar8 * 0x1f8 + 0xf8 + lVar7);
      }
      *(int *)(lVar7 + 0x9f8 + lVar11 * 4) = iVar8;
      *(int32_t *)(lVar7 + 0xa00 + lVar11 * 4) = uVar6;
      lVar7 = *(int64_t *)(param_1 + 0x8f8);
      if (*(char *)(lVar7 + 0xa26) < '\0') {
        return;
      }
      FUN_180536e20(lVar7,(int)*(char *)(lVar7 + 0xa25),0xffffffff,
                    CONCAT71((int7)(int3)((uint)iVar8 >> 8),1),
                    in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
      FUN_18050c1c0(param_1);
      return;
    }
    if (cVar4 != '\x01') {
      return;
    }
    lVar7 = (**(code **)(**(int64_t **)(param_1 + 0x590) + 0x128))
                      (*(int64_t **)(param_1 + 0x590),1);
    fVar2 = *(float *)(lVar7 + 0x78);
    fVar14 = (float)(**(code **)(**(int64_t **)(param_1 + 0x590) + 0x90))
                              (*(int64_t **)(param_1 + 0x590),1);
    if (fVar14 <= fVar2) {
      return;
    }
    lVar7 = *(int64_t *)(param_1 + 0x8f8);
    cVar4 = *(char *)(lVar7 + 0xa26);
    lVar11 = *(int64_t *)(lVar7 + 0x9e8);
    if (-1 < cVar4) {
      lVar13 = (int64_t)cVar4 * 0x1f8;
      lVar12 = lVar7;
      cVar5 = FUN_18058f970(lVar7 + 8 + lVar13);
      if ((cVar5 != '\0') &&
         ((*(uint *)((int64_t)*(int *)(lVar13 + 0xf8 + lVar12) * 0xa0 + 0x58 +
                    *(int64_t *)(lVar13 + 0xd8 + lVar12)) & 0x80000) == 0)) {
        bVar10 = (byte)((uint)*(int32_t *)(lVar12 + 0x9e4) >> 0x1f);
        FUN_180531300(param_1,(int)cVar4,(byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1,
                      bVar10 ^ 1,bVar10,1,0);
        lVar7 = *(int64_t *)(param_1 + 0x8f8);
      }
    }
    FUN_180536cd0(lVar7);
    lVar7 = *(int64_t *)(param_1 + 0x8f8);
    iVar8 = *(int *)(lVar7 + 0x9e0);
    iVar9 = *(int *)(lVar7 + 0x9e4);
    if (iVar8 < 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(int32_t *)((int64_t)iVar8 * 0x1f8 + 0xf8 + lVar7);
    }
    *(int *)(lVar7 + 0x9f8) = iVar8;
    *(int32_t *)(lVar7 + 0xa00) = uVar6;
    lVar7 = *(int64_t *)(param_1 + 0x8f8);
    if (iVar9 < 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(int32_t *)((int64_t)iVar9 * 0x1f8 + 0xf8 + lVar7);
    }
    *(int *)(lVar7 + 0x9fc) = iVar9;
    *(int32_t *)(lVar7 + 0xa04) = uVar6;
    *(int8_t *)(*(int64_t *)(param_1 + 0x8f8) + 0xa24) = 0xff;
    if (((lVar11 != *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8)) && (system_status_flag != 1))
       && (system_status_flag != 4)) {
      lVar7 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x130) + 0x8f8) + 0x9e8);
      if (lVar7 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar7 + 0xd0)
                        );
      }
      lVar7 = (int64_t)iVar8 * 0x170 + render_system_config;
      *(int32_t *)(param_1 + 0x208) = 0xffffffff;
      FUN_1805b1d30(param_1 + 0x138,lVar7);
      *(uint64_t *)(param_1 + 0x280) = 0;
      *(uint64_t *)(param_1 + 0x290) = 0;
    }
    FUN_18050c1c0(param_1);
    return;
  }
LAB_18050cd1a:
  *(int8_t *)(*(int64_t *)(param_1 + 0x8f8) + 0xa24) = 0xff;
  if ((*(char *)(*(int64_t *)(param_1 + 0x8f8) + 0xa27) == '\0') || (!bVar3)) {
    FUN_1800623b0(system_message_context,0,0x40,0xd,&unknown_var_6616_ptr);
    lVar7 = *(int64_t *)(param_1 + 0x8f8);
    iVar8 = *(int *)(lVar7 + 0x9f8 + (int64_t)*(char *)(lVar7 + 0xa25) * 4);
    if (-1 < iVar8) {
      cVar4 = FUN_1805377e0(lVar7,iVar8,(int)*(char *)(lVar7 + 0xa25),
                            *(uint *)(param_1 + 0x564) >> 0x1f ^ 1,*(int32_t *)(param_1 + 0x56c))
      ;
      if (cVar4 == '\0') {
        iVar8 = -1;
      }
      else {
        lVar7 = *(int64_t *)(param_1 + 0x8f8);
        FUN_180537bd0(lVar7,iVar8,
                      *(int32_t *)(lVar7 + 0xa00 + (int64_t)*(char *)(lVar7 + 0xa25) * 4),
                      auStackX_8);
        if (*(int *)(param_1 + 0x570) == 1) {
          puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
          *puVar1 = *puVar1 | 0x20;
        }
      }
    }
    lVar7 = *(int64_t *)(param_1 + 0x8f8);
    FUN_180536e20(lVar7,(int)*(char *)(lVar7 + 0xa25),iVar8,*(int8_t *)(lVar7 + 0xa28),
                  *(int8_t *)(lVar7 + 0xa29));
    lVar7 = *(int64_t *)(param_1 + 0x8f8);
    iVar9 = 1 - *(char *)(lVar7 + 0xa25);
    iVar8 = *(int *)(lVar7 + 0x9f8 + (int64_t)iVar9 * 4);
    if (-1 < iVar8) {
      cVar4 = FUN_1805377e0(lVar7,iVar8,iVar9,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,
                            *(int32_t *)(param_1 + 0x56c));
      if (cVar4 == '\0') {
        iVar8 = -1;
      }
      else {
        FUN_180537bd0(*(int64_t *)(param_1 + 0x8f8),iVar8,
                      *(int32_t *)(*(int64_t *)(param_1 + 0x8f8) + 0xa00 + (int64_t)iVar9 * 4),
                      auStackX_8);
        if (*(int *)(param_1 + 0x570) == 1) {
          puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
          *puVar1 = *puVar1 | 0x20;
        }
      }
    }
    lVar7 = *(int64_t *)(param_1 + 0x8f8);
    FUN_180536e20(lVar7,iVar9,iVar8,*(int8_t *)(lVar7 + 0xa28),*(int8_t *)(lVar7 + 0xa29));
  }
  else {
    lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8);
    FUN_180536cd0();
    if (((lVar7 != *(int64_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e8)) && (system_status_flag != 1))
       && (system_status_flag != 4)) {
      lVar7 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x130) + 0x8f8) + 0x9e8);
      if (lVar7 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar7 + 0xd0)
                        );
      }
      lVar7 = (int64_t)iVar8 * 0x170 + render_system_config;
      *(int32_t *)(param_1 + 0x208) = 0xffffffff;
      FUN_1805b1d30(param_1 + 0x138,lVar7);
      *(uint64_t *)(param_1 + 0x280) = 0;
      *(uint64_t *)(param_1 + 0x290) = 0;
    }
  }
  FUN_18050c1c0(param_1);
  lVar7 = *(int64_t *)(param_1 + 0x6e0);
  if ((lVar7 != 0) && (*(int *)(param_1 + 0x570) == 1)) {
    *(uint64_t *)(lVar7 + 0x1398) =
         *(uint64_t *)(&system_error_code + (int64_t)*(int *)(lVar7 + 0x13a0) * 8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050ccd5(int64_t param_1,uint64_t param_2)
void FUN_18050ccd5(int64_t param_1,uint64_t param_2)

{
  ushort *puVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int32_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t unaff_RBX;
  int iVar9;
  int64_t unaff_RDI;
  byte bVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  float fVar14;
  int32_t extraout_XMM0_Da;
  uint64_t in_stack_00000020;
  
  if (-1 < (int)param_2) {
    in_stack_00000020 =
         CONCAT44((int)(in_stack_00000020 >> 0x20),*(int32_t *)(unaff_RDI + 0x56c));
    cVar4 = FUN_1805377e0(param_1,param_2,(int)*(char *)(param_1 + 0xa25),
                          *(uint *)(unaff_RDI + 0x564) >> 0x1f ^ 1,in_stack_00000020);
    if (cVar4 == '\0') {
      bVar3 = false;
      goto LAB_18050cd1a;
    }
  }
  bVar3 = true;
  if ((*(int *)(unaff_RBX + 0x2498) != -1) &&
     (*(int *)((int64_t)*(int *)(unaff_RBX + 0x2498) * 0x68 + 0x58 + render_system_config) == 0x21)) {
    cVar4 = *(char *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa24);
    if (cVar4 == '\0') {
      *(int8_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa24) = 1;
      lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
      lVar11 = (int64_t)*(char *)(lVar7 + 0xa25);
      iVar8 = *(int *)(lVar7 + 0x9e0 + lVar11 * 4);
      if (iVar8 == -1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(int32_t *)((int64_t)iVar8 * 0x1f8 + 0xf8 + lVar7);
      }
      *(int *)(lVar7 + 0x9f8 + lVar11 * 4) = iVar8;
      *(int32_t *)(lVar7 + 0xa00 + lVar11 * 4) = uVar6;
      lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
      if (*(char *)(lVar7 + 0xa26) < '\0') {
        return;
      }
      FUN_180536e20(lVar7,(int)*(char *)(lVar7 + 0xa25),0xffffffff,
                    CONCAT71((int7)(int3)((uint)iVar8 >> 8),1),
                    in_stack_00000020 & 0xffffffffffffff00);
      FUN_18050c1c0();
      return;
    }
    if (cVar4 != '\x01') {
      return;
    }
    lVar7 = (**(code **)(**(int64_t **)(unaff_RDI + 0x590) + 0x128))
                      (*(int64_t **)(unaff_RDI + 0x590),1);
    fVar2 = *(float *)(lVar7 + 0x78);
    fVar14 = (float)(**(code **)(**(int64_t **)(unaff_RDI + 0x590) + 0x90))
                              (*(int64_t **)(unaff_RDI + 0x590),1);
    if (fVar14 <= fVar2) {
      return;
    }
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    cVar4 = *(char *)(lVar7 + 0xa26);
    lVar11 = *(int64_t *)(lVar7 + 0x9e8);
    if (-1 < cVar4) {
      lVar13 = (int64_t)cVar4 * 0x1f8;
      lVar12 = lVar7;
      cVar5 = FUN_18058f970(lVar7 + 8 + lVar13);
      if ((cVar5 != '\0') &&
         ((*(uint *)((int64_t)*(int *)(lVar13 + 0xf8 + lVar12) * 0xa0 + 0x58 +
                    *(int64_t *)(lVar13 + 0xd8 + lVar12)) & 0x80000) == 0)) {
        bVar10 = (byte)((uint)*(int32_t *)(lVar12 + 0x9e4) >> 0x1f);
        FUN_180531300(extraout_XMM0_Da,(int)cVar4,
                      (byte)((uint)*(int32_t *)(unaff_RDI + 0x564) >> 0x1f) ^ 1,bVar10 ^ 1,bVar10
                     );
        lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
      }
    }
    FUN_180536cd0(lVar7);
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    iVar8 = *(int *)(lVar7 + 0x9e0);
    iVar9 = *(int *)(lVar7 + 0x9e4);
    if (iVar8 < 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(int32_t *)((int64_t)iVar8 * 0x1f8 + 0xf8 + lVar7);
    }
    *(int *)(lVar7 + 0x9f8) = iVar8;
    *(int32_t *)(lVar7 + 0xa00) = uVar6;
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    if (iVar9 < 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(int32_t *)((int64_t)iVar9 * 0x1f8 + 0xf8 + lVar7);
    }
    *(int *)(lVar7 + 0x9fc) = iVar9;
    *(int32_t *)(lVar7 + 0xa04) = uVar6;
    *(int8_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa24) = 0xff;
    if (((lVar11 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0x9e8)) &&
        (system_status_flag != 1)) && (system_status_flag != 4)) {
      lVar7 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x130) + 0x8f8) + 0x9e8);
      if (lVar7 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar7 + 0xd0)
                        );
      }
      lVar7 = (int64_t)iVar8 * 0x170 + render_system_config;
      *(int32_t *)(unaff_RDI + 0x208) = 0xffffffff;
      FUN_1805b1d30(unaff_RDI + 0x138,lVar7);
      *(uint64_t *)(unaff_RDI + 0x280) = 0;
      *(uint64_t *)(unaff_RDI + 0x290) = 0;
    }
    FUN_18050c1c0();
    return;
  }
LAB_18050cd1a:
  *(int8_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa24) = 0xff;
  if ((*(char *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa27) == '\0') || (!bVar3)) {
    FUN_1800623b0(system_message_context,0,0x40,0xd,&unknown_var_6616_ptr);
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    iVar8 = *(int *)(lVar7 + 0x9f8 + (int64_t)*(char *)(lVar7 + 0xa25) * 4);
    if (-1 < iVar8) {
      cVar4 = FUN_1805377e0(lVar7,iVar8,(int)*(char *)(lVar7 + 0xa25),
                            *(uint *)(unaff_RDI + 0x564) >> 0x1f ^ 1,
                            *(int32_t *)(unaff_RDI + 0x56c));
      if (cVar4 == '\0') {
        iVar8 = -1;
      }
      else {
        lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
        FUN_180537bd0(lVar7,iVar8,
                      *(int32_t *)(lVar7 + 0xa00 + (int64_t)*(char *)(lVar7 + 0xa25) * 4),
                      &stack0x00000070);
        if (*(int *)(unaff_RDI + 0x570) == 1) {
          puVar1 = (ushort *)(*(int64_t *)(unaff_RDI + 0x6e0) + 0x130);
          *puVar1 = *puVar1 | 0x20;
        }
      }
    }
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    FUN_180536e20(lVar7,(int)*(char *)(lVar7 + 0xa25),iVar8,*(int8_t *)(lVar7 + 0xa28),
                  *(int8_t *)(lVar7 + 0xa29));
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    iVar9 = 1 - *(char *)(lVar7 + 0xa25);
    iVar8 = *(int *)(lVar7 + 0x9f8 + (int64_t)iVar9 * 4);
    if (-1 < iVar8) {
      cVar4 = FUN_1805377e0(lVar7,iVar8,iVar9,*(uint *)(unaff_RDI + 0x564) >> 0x1f ^ 1,
                            *(int32_t *)(unaff_RDI + 0x56c));
      if (cVar4 == '\0') {
        iVar8 = -1;
      }
      else {
        FUN_180537bd0(*(int64_t *)(unaff_RDI + 0x8f8),iVar8,
                      *(int32_t *)
                       (*(int64_t *)(unaff_RDI + 0x8f8) + 0xa00 + (int64_t)iVar9 * 4),
                      &stack0x00000070);
        if (*(int *)(unaff_RDI + 0x570) == 1) {
          puVar1 = (ushort *)(*(int64_t *)(unaff_RDI + 0x6e0) + 0x130);
          *puVar1 = *puVar1 | 0x20;
        }
      }
    }
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    FUN_180536e20(lVar7,iVar9,iVar8,*(int8_t *)(lVar7 + 0xa28),*(int8_t *)(lVar7 + 0xa29));
  }
  else {
    lVar7 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0x9e8);
    FUN_180536cd0();
    if (((lVar7 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0x9e8)) && (system_status_flag != 1)
        ) && (system_status_flag != 4)) {
      lVar7 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x130) + 0x8f8) + 0x9e8);
      if (lVar7 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar7 + 0xd0)
                        );
      }
      lVar7 = (int64_t)iVar8 * 0x170 + render_system_config;
      *(int32_t *)(unaff_RDI + 0x208) = 0xffffffff;
      FUN_1805b1d30(unaff_RDI + 0x138,lVar7);
      *(uint64_t *)(unaff_RDI + 0x280) = 0;
      *(uint64_t *)(unaff_RDI + 0x290) = 0;
    }
  }
  FUN_18050c1c0();
  lVar7 = *(int64_t *)(unaff_RDI + 0x6e0);
  if ((lVar7 != 0) && (*(int *)(unaff_RDI + 0x570) == 1)) {
    *(uint64_t *)(lVar7 + 0x1398) =
         *(uint64_t *)(&system_error_code + (int64_t)*(int *)(lVar7 + 0x13a0) * 8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050ce90(int64_t *param_1)
void FUN_18050ce90(int64_t *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  char cVar5;
  int32_t uVar6;
  int64_t lVar7;
  int iVar8;
  int unaff_ESI;
  int64_t unaff_RDI;
  byte bVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  int32_t extraout_XMM0_Da;
  
  lVar7 = (**(code **)(*param_1 + 0x128))();
  fVar1 = *(float *)(lVar7 + 0x78);
  fVar12 = (float)(**(code **)(**(int64_t **)(unaff_RDI + 0x590) + 0x90))
                            (*(int64_t **)(unaff_RDI + 0x590),unaff_ESI);
  if (fVar1 < fVar12) {
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    cVar2 = *(char *)(lVar7 + 0xa26);
    lVar4 = *(int64_t *)(lVar7 + 0x9e8);
    if (-1 < cVar2) {
      lVar11 = (int64_t)cVar2 * 0x1f8;
      lVar10 = lVar7;
      cVar5 = FUN_18058f970(lVar7 + 8 + lVar11);
      if ((cVar5 != '\0') &&
         ((*(uint *)((int64_t)*(int *)(lVar11 + 0xf8 + lVar10) * 0xa0 + 0x58 +
                    *(int64_t *)(lVar11 + 0xd8 + lVar10)) & 0x80000) == 0)) {
        bVar9 = (byte)((uint)*(int32_t *)(lVar10 + 0x9e4) >> 0x1f);
        FUN_180531300(extraout_XMM0_Da,(int)cVar2,
                      (byte)((uint)*(int32_t *)(unaff_RDI + 0x564) >> 0x1f) ^ (byte)unaff_ESI,
                      bVar9 ^ (byte)unaff_ESI,bVar9);
        lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
      }
    }
    FUN_180536cd0(lVar7);
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    iVar8 = *(int *)(lVar7 + 0x9e0);
    iVar3 = *(int *)(lVar7 + 0x9e4);
    if (iVar8 < 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(int32_t *)((int64_t)iVar8 * 0x1f8 + 0xf8 + lVar7);
    }
    *(int *)(lVar7 + 0x9f8) = iVar8;
    *(int32_t *)(lVar7 + 0xa00) = uVar6;
    lVar7 = *(int64_t *)(unaff_RDI + 0x8f8);
    if (iVar3 < 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(int32_t *)((int64_t)iVar3 * 0x1f8 + 0xf8 + lVar7);
    }
    *(int *)(lVar7 + 0x9fc) = iVar3;
    *(int32_t *)(lVar7 + 0xa04) = uVar6;
    *(int8_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa24) = 0xff;
    if (((lVar4 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0x9e8)) &&
        (system_status_flag != unaff_ESI)) && (system_status_flag != 4)) {
      lVar7 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x130) + 0x8f8) + 0x9e8);
      if (lVar7 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int64_t)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar7 + 0xd0)
                        );
      }
      lVar7 = (int64_t)iVar8 * 0x170 + render_system_config;
      *(int32_t *)(unaff_RDI + 0x208) = 0xffffffff;
      FUN_1805b1d30(unaff_RDI + 0x138,lVar7);
      *(uint64_t *)(unaff_RDI + 0x280) = 0;
      *(uint64_t *)(unaff_RDI + 0x290) = 0;
    }
    FUN_18050c1c0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050cec3(void)
void FUN_18050cec3(void)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int32_t uVar4;
  int64_t lVar5;
  int iVar6;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t lVar7;
  int64_t lVar8;
  
  lVar5 = *(int64_t *)(unaff_RDI + 0x8f8);
  lVar2 = *(int64_t *)(lVar5 + 0x9e8);
  if (-1 < *(char *)(lVar5 + 0xa26)) {
    lVar8 = (int64_t)*(char *)(lVar5 + 0xa26) * 0x1f8;
    lVar7 = lVar5;
    cVar3 = FUN_18058f970(lVar5 + 8 + lVar8);
    if ((cVar3 != '\0') &&
       ((*(uint *)((int64_t)*(int *)(lVar8 + 0xf8 + lVar7) * 0xa0 + 0x58 +
                  *(int64_t *)(lVar8 + 0xd8 + lVar7)) & 0x80000) == 0)) {
      FUN_180531300();
      lVar5 = *(int64_t *)(unaff_RDI + 0x8f8);
    }
  }
  FUN_180536cd0(lVar5);
  lVar5 = *(int64_t *)(unaff_RDI + 0x8f8);
  iVar6 = *(int *)(lVar5 + 0x9e0);
  iVar1 = *(int *)(lVar5 + 0x9e4);
  if (iVar6 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(int32_t *)((int64_t)iVar6 * 0x1f8 + 0xf8 + lVar5);
  }
  *(int *)(lVar5 + 0x9f8) = iVar6;
  *(int32_t *)(lVar5 + 0xa00) = uVar4;
  lVar5 = *(int64_t *)(unaff_RDI + 0x8f8);
  if (iVar1 < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(int32_t *)((int64_t)iVar1 * 0x1f8 + 0xf8 + lVar5);
  }
  *(int *)(lVar5 + 0x9fc) = iVar1;
  *(int32_t *)(lVar5 + 0xa04) = uVar4;
  *(int8_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa24) = 0xff;
  if (((lVar2 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0x9e8)) &&
      (system_status_flag != unaff_ESI)) && (system_status_flag != 4)) {
    lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x130) + 0x8f8) + 0x9e8);
    if (lVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int64_t)*(int *)(lVar5 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar5 + 0xd0));
    }
    lVar5 = (int64_t)iVar6 * 0x170 + render_system_config;
    *(int32_t *)(unaff_RDI + 0x208) = 0xffffffff;
    FUN_1805b1d30(unaff_RDI + 0x138,lVar5);
    *(uint64_t *)(unaff_RDI + 0x280) = 0;
    *(uint64_t *)(unaff_RDI + 0x290) = 0;
  }
  FUN_18050c1c0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050ceca(void)
void FUN_18050ceca(void)

{
  int iVar1;
  char cVar2;
  int32_t uVar3;
  int64_t lVar4;
  int iVar5;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t in_R11;
  int64_t lVar6;
  int64_t lVar7;
  
  lVar4 = *(int64_t *)(in_R11 + 0x9e8);
  if (-1 < *(char *)(in_R11 + 0xa26)) {
    lVar7 = (int64_t)*(char *)(in_R11 + 0xa26) * 0x1f8;
    lVar6 = in_R11;
    cVar2 = FUN_18058f970(in_R11 + 8 + lVar7);
    if ((cVar2 != '\0') &&
       ((*(uint *)((int64_t)*(int *)(lVar7 + 0xf8 + lVar6) * 0xa0 + 0x58 +
                  *(int64_t *)(lVar7 + 0xd8 + lVar6)) & 0x80000) == 0)) {
      FUN_180531300();
      in_R11 = *(int64_t *)(unaff_RDI + 0x8f8);
    }
  }
  FUN_180536cd0(in_R11);
  lVar6 = *(int64_t *)(unaff_RDI + 0x8f8);
  iVar5 = *(int *)(lVar6 + 0x9e0);
  iVar1 = *(int *)(lVar6 + 0x9e4);
  if (iVar5 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(int32_t *)((int64_t)iVar5 * 0x1f8 + 0xf8 + lVar6);
  }
  *(int *)(lVar6 + 0x9f8) = iVar5;
  *(int32_t *)(lVar6 + 0xa00) = uVar3;
  lVar6 = *(int64_t *)(unaff_RDI + 0x8f8);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(int32_t *)((int64_t)iVar1 * 0x1f8 + 0xf8 + lVar6);
  }
  *(int *)(lVar6 + 0x9fc) = iVar1;
  *(int32_t *)(lVar6 + 0xa04) = uVar3;
  *(int8_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa24) = 0xff;
  if (((lVar4 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0x9e8)) &&
      (system_status_flag != unaff_ESI)) && (system_status_flag != 4)) {
    lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x130) + 0x8f8) + 0x9e8);
    if (lVar4 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar4 + 0xd0));
    }
    lVar4 = (int64_t)iVar5 * 0x170 + render_system_config;
    *(int32_t *)(unaff_RDI + 0x208) = 0xffffffff;
    FUN_1805b1d30(unaff_RDI + 0x138,lVar4);
    *(uint64_t *)(unaff_RDI + 0x280) = 0;
    *(uint64_t *)(unaff_RDI + 0x290) = 0;
  }
  FUN_18050c1c0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050cef2(int64_t param_1)
void FUN_18050cef2(int64_t param_1)

{
  int iVar1;
  char cVar2;
  int32_t uVar3;
  int64_t in_RAX;
  int iVar4;
  uint64_t unaff_RBX;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t in_R11;
  int64_t lVar5;
  int64_t unaff_R15;
  
  lVar5 = in_RAX * 0x1f8;
  cVar2 = FUN_18058f970(param_1 + lVar5);
  if ((cVar2 != '\0') &&
     ((*(uint *)((int64_t)*(int *)(lVar5 + 0xf8 + in_R11) * 0xa0 + 0x58 +
                *(int64_t *)(lVar5 + 0xd8 + in_R11)) & 0x80000) == 0)) {
    FUN_180531300();
    unaff_RBX = *(uint64_t *)(unaff_RDI + 0x8f8);
  }
  FUN_180536cd0(unaff_RBX);
  lVar5 = *(int64_t *)(unaff_RDI + 0x8f8);
  iVar4 = *(int *)(lVar5 + 0x9e0);
  iVar1 = *(int *)(lVar5 + 0x9e4);
  if (iVar4 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(int32_t *)((int64_t)iVar4 * 0x1f8 + 0xf8 + lVar5);
  }
  *(int *)(lVar5 + 0x9f8) = iVar4;
  *(int32_t *)(lVar5 + 0xa00) = uVar3;
  lVar5 = *(int64_t *)(unaff_RDI + 0x8f8);
  if (iVar1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(int32_t *)((int64_t)iVar1 * 0x1f8 + 0xf8 + lVar5);
  }
  *(int *)(lVar5 + 0x9fc) = iVar1;
  *(int32_t *)(lVar5 + 0xa04) = uVar3;
  *(int8_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa24) = 0xff;
  if (((unaff_R15 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0x9e8)) &&
      (system_status_flag != unaff_ESI)) && (system_status_flag != 4)) {
    lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x130) + 0x8f8) + 0x9e8);
    if (lVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int64_t)*(int *)(lVar5 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar5 + 0xd0));
    }
    lVar5 = (int64_t)iVar4 * 0x170 + render_system_config;
    *(int32_t *)(unaff_RDI + 0x208) = 0xffffffff;
    FUN_1805b1d30(unaff_RDI + 0x138,lVar5);
    *(uint64_t *)(unaff_RDI + 0x280) = 0;
    *(uint64_t *)(unaff_RDI + 0x290) = 0;
  }
  FUN_18050c1c0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050cf80(void)
void FUN_18050cf80(void)

{
  int iVar1;
  int32_t uVar2;
  int64_t lVar3;
  int iVar4;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t unaff_R15;
  
  FUN_180536cd0();
  lVar3 = *(int64_t *)(unaff_RDI + 0x8f8);
  iVar4 = *(int *)(lVar3 + 0x9e0);
  iVar1 = *(int *)(lVar3 + 0x9e4);
  if (iVar4 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(int32_t *)((int64_t)iVar4 * 0x1f8 + 0xf8 + lVar3);
  }
  *(int *)(lVar3 + 0x9f8) = iVar4;
  *(int32_t *)(lVar3 + 0xa00) = uVar2;
  lVar3 = *(int64_t *)(unaff_RDI + 0x8f8);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(int32_t *)((int64_t)iVar1 * 0x1f8 + 0xf8 + lVar3);
  }
  *(int *)(lVar3 + 0x9fc) = iVar1;
  *(int32_t *)(lVar3 + 0xa04) = uVar2;
  *(int8_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0xa24) = 0xff;
  if (((unaff_R15 != *(int64_t *)(*(int64_t *)(unaff_RDI + 0x8f8) + 0x9e8)) &&
      (system_status_flag != unaff_ESI)) && (system_status_flag != 4)) {
    lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x130) + 0x8f8) + 0x9e8);
    if (lVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar3 + 0xd0));
    }
    lVar3 = (int64_t)iVar4 * 0x170 + render_system_config;
    *(int32_t *)(unaff_RDI + 0x208) = 0xffffffff;
    FUN_1805b1d30(unaff_RDI + 0x138,lVar3);
    *(uint64_t *)(unaff_RDI + 0x280) = 0;
    *(uint64_t *)(unaff_RDI + 0x290) = 0;
  }
  FUN_18050c1c0();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050d015(void)
void FUN_18050d015(void)

{
  int64_t lVar1;
  int iVar2;
  int unaff_ESI;
  int64_t unaff_RDI;
  
  if ((system_status_flag != unaff_ESI) && (system_status_flag != 4)) {
    lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(unaff_RDI + 0x130) + 0x8f8) + 0x9e8);
    if (lVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int64_t)*(int *)(lVar1 + 0xf0) * 0xa0 + 100 + *(int64_t *)(lVar1 + 0xd0));
    }
    lVar1 = (int64_t)iVar2 * 0x170 + render_system_config;
    *(int32_t *)(unaff_RDI + 0x208) = 0xffffffff;
    FUN_1805b1d30(unaff_RDI + 0x138,lVar1);
    *(uint64_t *)(unaff_RDI + 0x280) = 0;
    *(uint64_t *)(unaff_RDI + 0x290) = 0;
  }
  FUN_18050c1c0();
  return;
}





// 函数: void FUN_18050d297(void)
void FUN_18050d297(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



