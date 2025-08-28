#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part036.c - 5 个函数

// 函数: void FUN_1801eea70(uint64_t param_1)
void FUN_1801eea70(uint64_t param_1)

{
  int64_t in_RAX;
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t lVar4;
  bool in_CF;
  
  if (in_CF) {
    in_RAX = unaff_RDI;
  }
  lVar4 = in_R10 + 2 + in_RAX;
  lVar1 = CoreMemoryPoolAllocator(param_1,lVar4 * 8);
  lVar3 = 0;
  if (unaff_EBP == 0) {
    lVar3 = unaff_RDI;
  }
  plVar2 = (int64_t *)(lVar1 + ((unaff_RBX[5] - *unaff_RBX >> 3) + lVar3) * 8);
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memcpy(plVar2);
  }
  *unaff_RBX = lVar1;
  unaff_RBX[1] = lVar4;
  unaff_RBX[5] = (int64_t)plVar2;
  lVar3 = *plVar2;
  unaff_RBX[3] = lVar3;
  unaff_RBX[4] = lVar3 + 0x100;
  plVar2 = (int64_t *)(unaff_RSI + -8 + (int64_t)plVar2);
  unaff_RBX[9] = (int64_t)plVar2;
  lVar3 = *plVar2;
  unaff_RBX[7] = lVar3;
  unaff_RBX[8] = lVar3 + 0x100;
  return;
}






// 函数: void FUN_1801eeae6(void)
void FUN_1801eeae6(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  *(int64_t **)(unaff_RBX + 0x28) = unaff_RDI;
  lVar1 = *unaff_RDI;
  *(int64_t *)(unaff_RBX + 0x18) = lVar1;
  *(int64_t *)(unaff_RBX + 0x20) = lVar1 + 0x100;
  plVar2 = (int64_t *)(unaff_RSI + -8 + (int64_t)unaff_RDI);
  *(int64_t **)(unaff_RBX + 0x48) = plVar2;
  lVar1 = *plVar2;
  *(int64_t *)(unaff_RBX + 0x38) = lVar1;
  *(int64_t *)(unaff_RBX + 0x40) = lVar1 + 0x100;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801eeb30(uint64_t param_1,int64_t param_2)
void FUN_1801eeb30(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  ushort uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint64_t uVar15;
  byte bVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  int64_t lVar20;
  int iVar21;
  int64_t lVar22;
  int iVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint64_t uStackX_8;
  int iStackX_10;
  int64_t lStackX_18;
  int iStackX_20;
  int64_t lStack_d0;
  int64_t lStack_a0;
  int32_t uStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  uint64_t uStack_78;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  uint64_t uStack_64;
  int32_t uStack_5c;
  int64_t lStack_58;
  uint64_t uStack_50;
  
  lVar6 = system_system_data_memory;
  uStack_50 = 0xfffffffffffffffe;
  lVar22 = system_system_data_memory + 0x80;
  uStackX_8 = param_1;
  lStack_58 = lVar22;
  iVar8 = _Mtx_lock(lVar22);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  lVar1 = param_2 + 0xb8;
  puVar2 = (uint64_t *)(lVar6 + 0x20);
  puVar17 = *(uint64_t **)(lVar6 + 0x30);
  puVar11 = puVar2;
  if (puVar17 != (uint64_t *)0x0) {
    do {
      iVar8 = memcmp(puVar17 + 4,lVar1);
      if (iVar8 < 0) {
        puVar18 = (uint64_t *)*puVar17;
      }
      else {
        puVar18 = (uint64_t *)puVar17[1];
        puVar11 = puVar17;
      }
      puVar17 = puVar18;
    } while (puVar18 != (uint64_t *)0x0);
    if ((puVar11 != puVar2) && (iVar8 = memcmp(lVar1,puVar11 + 4), -1 < iVar8)) goto LAB_1801ef2d7;
  }
  uStack_98 = 0;
  lStack_a0 = param_2;
  FUN_18007f770(&lStack_a0);
  bVar16 = *(byte *)(param_2 + 0xfd) & 0x20;
  lVar26 = param_2;
  if (bVar16 == 0) {
    lVar26 = func_0x000180085de0(*(uint64_t *)(param_2 + 0x1b0));
  }
  iVar8 = *(int *)(lVar26 + 0x200);
  lVar26 = (int64_t)iVar8;
  if (bVar16 == 0) {
    param_2 = func_0x000180085de0(*(uint64_t *)(param_2 + 0x1b0));
  }
  iStackX_20 = *(int *)(param_2 + 0x1f8);
  uVar7 = *(ushort *)(lStack_90 + 0xc0);
  uVar15 = (uint64_t)uVar7;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_64 = 0xffffffffffffffff;
  uStack_5c = 0xffffffff;
  uStack_70 = (uint)uVar7;
  uVar13 = (uint)uVar7;
  iStack_6c = iStackX_20;
  iStack_68 = iVar8;
  if (uStack_70 != 0) {
    iVar23 = uVar13 * iStackX_20 * 3;
    if (iVar23 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar23 * 2);
    }
    iVar23 = uVar13 * iVar8 * 3;
    lStack_88 = lVar9;
    if (iVar23 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar23 * 2);
    }
    lStack_80 = lVar10;
    if (iVar8 == 0) {
      uStack_78 = 0;
    }
    else {
      uStack_78 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar26 * 2);
    }
    lStackX_18 = uStack_78;
    if (uVar13 != 0) {
      iVar23 = 0;
      uStackX_8 = uStackX_8 & 0xffffffff00000000;
      lStack_d0 = 0;
      iStackX_10 = 0;
      do {
        lVar22 = *(int64_t *)(lStack_90 + 0xb0);
        lVar19 = 0;
        if (0 < lVar26) {
          lVar25 = 0;
          lVar27 = 0;
          iVar21 = iStackX_10;
          do {
            iVar3 = *(int *)(lVar27 + *(int64_t *)(lStack_90 + 0x68));
            lVar20 = (int64_t)iVar3;
            lVar24 = *(int64_t *)(lStack_d0 + 8 + lVar22);
            lVar4 = *(int64_t *)(lStack_90 + 0x18);
            lVar5 = *(int64_t *)(lStack_d0 + 0x30 + lVar22);
            fVar30 = *(float *)(lVar24 + 8 + lVar20 * 0x10) - *(float *)(lVar4 + 8 + lVar20 * 0x10);
            fVar29 = *(float *)(lVar24 + 4 + lVar20 * 0x10) - *(float *)(lVar4 + 4 + lVar20 * 0x10);
            fVar28 = *(float *)(lVar24 + lVar20 * 0x10) - *(float *)(lVar4 + lVar20 * 0x10);
            fVar12 = ABS(fVar28);
            if ((uint)fVar12 < 0x477fe001) {
              if ((uint)fVar12 < 0x38800000) {
                uVar13 = ((uint)fVar28 & 0x7fffff | 0x800000) >>
                         (0x71U - (char)((uint)fVar12 >> 0x17) & 0x1f);
              }
              else {
                uVar13 = (int)fVar12 + 0xc8000000;
              }
              uVar7 = (ushort)((uVar13 >> 0xd & 1) + 0xfff + uVar13 >> 0xd) & 0x7fff;
            }
            else {
              uVar7 = 0x7fff;
              if (((uint)fVar28 & 0x7f800000) != 0x7f800000 || ((uint)fVar28 & 0x7fffff) == 0) {
                uVar7 = 0x7c00;
              }
            }
            lVar24 = (int64_t)((iVar23 + iVar3) * 3);
            *(ushort *)(lVar9 + lVar24 * 2) = uVar7 | (ushort)((uint)fVar28 >> 0x10) & 0x8000;
            fVar12 = ABS(fVar29);
            if ((uint)fVar12 < 0x477fe001) {
              if ((uint)fVar12 < 0x38800000) {
                uVar13 = ((uint)fVar29 & 0x7fffff | 0x800000) >>
                         (0x71U - (char)((uint)fVar12 >> 0x17) & 0x1f);
              }
              else {
                uVar13 = (int)fVar12 + 0xc8000000;
              }
              uVar7 = (ushort)((uVar13 >> 0xd & 1) + 0xfff + uVar13 >> 0xd) & 0x7fff;
            }
            else {
              uVar7 = 0x7fff;
              if (((uint)fVar29 & 0x7f800000) != 0x7f800000 || ((uint)fVar29 & 0x7fffff) == 0) {
                uVar7 = 0x7c00;
              }
            }
            *(ushort *)(lVar9 + 2 + lVar24 * 2) = uVar7 | (ushort)((uint)fVar29 >> 0x10) & 0x8000;
            fVar12 = ABS(fVar30);
            if ((uint)fVar12 < 0x477fe001) {
              if ((uint)fVar12 < 0x38800000) {
                uVar13 = ((uint)fVar30 & 0x7fffff | 0x800000) >>
                         (0x71U - (char)((uint)fVar12 >> 0x17) & 0x1f);
              }
              else {
                uVar13 = (int)fVar12 + 0xc8000000;
              }
              uVar7 = (ushort)((uVar13 >> 0xd & 1) + 0xfff + uVar13 >> 0xd) & 0x7fff;
            }
            else {
              uVar7 = 0x7fff;
              if (((uint)fVar30 & 0x7f800000) != 0x7f800000 || ((uint)fVar30 & 0x7fffff) == 0) {
                uVar7 = 0x7c00;
              }
            }
            *(ushort *)(lVar9 + 4 + lVar24 * 2) = uVar7 | (ushort)((uint)fVar30 >> 0x10) & 0x8000;
            uVar13 = *(uint *)(lVar25 + lVar5);
            uVar14 = uVar13 & 0x7fffffff;
            if (uVar14 < 0x477fe001) {
              if (uVar14 < 0x38800000) {
                uVar14 = (uVar13 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar14 >> 0x17) & 0x1f);
              }
              else {
                uVar14 = uVar14 + 0xc8000000;
              }
              uVar7 = (ushort)((uVar14 >> 0xd & 1) + 0xfff + uVar14 >> 0xd) & 0x7fff;
            }
            else {
              uVar7 = 0x7fff;
              if ((uVar13 & 0x7f800000) != 0x7f800000 || (uVar13 & 0x7fffff) == 0) {
                uVar7 = 0x7c00;
              }
            }
            lVar24 = (int64_t)iVar21;
            *(ushort *)(lVar10 + lVar24 * 2) = uVar7 | (ushort)(uVar13 >> 0x10) & 0x8000;
            uVar13 = *(uint *)(lVar25 + 4 + lVar5);
            uVar14 = uVar13 & 0x7fffffff;
            if (uVar14 < 0x477fe001) {
              if (uVar14 < 0x38800000) {
                uVar14 = (uVar13 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar14 >> 0x17) & 0x1f);
              }
              else {
                uVar14 = uVar14 + 0xc8000000;
              }
              uVar7 = (ushort)((uVar14 >> 0xd & 1) + 0xfff + uVar14 >> 0xd) & 0x7fff;
            }
            else {
              uVar7 = 0x7fff;
              if ((uVar13 & 0x7f800000) != 0x7f800000 || (uVar13 & 0x7fffff) == 0) {
                uVar7 = 0x7c00;
              }
            }
            *(ushort *)(lVar10 + 2 + lVar24 * 2) = uVar7 | (ushort)(uVar13 >> 0x10) & 0x8000;
            uVar13 = *(uint *)(lVar25 + 8 + lVar5);
            lStackX_18 = CONCAT44(lStackX_18._4_4_,uVar13);
            uVar14 = uVar13 & 0x7fffffff;
            if (uVar14 < 0x477fe001) {
              if (uVar14 < 0x38800000) {
                uVar14 = (uVar13 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar14 >> 0x17) & 0x1f);
              }
              else {
                uVar14 = uVar14 + 0xc8000000;
              }
              uVar7 = (ushort)((uVar14 >> 0xd & 1) + 0xfff + uVar14 >> 0xd) & 0x7fff;
            }
            else {
              uVar7 = 0x7fff;
              if ((uVar13 & 0x7f800000) != 0x7f800000 || (uVar13 & 0x7fffff) == 0) {
                uVar7 = 0x7c00;
              }
            }
            *(ushort *)(lVar10 + 4 + lVar24 * 2) = uVar7 | (ushort)(uVar13 >> 0x10) & 0x8000;
            *(short *)(uStack_78 + lVar19 * 2) = (short)iVar3;
            iVar21 = iVar21 + 3;
            lVar19 = lVar19 + 1;
            lVar27 = lVar27 + 0x5c;
            lVar25 = lVar25 + 0x10;
            iVar23 = (int)uStackX_8;
          } while (lVar19 < lVar26);
        }
        iVar23 = iVar23 + iStackX_20;
        uStackX_8 = CONCAT44(uStackX_8._4_4_,iVar23);
        iStackX_10 = iStackX_10 + iVar8 * 3;
        lStack_d0 = lStack_d0 + 0x50;
        uVar15 = uVar15 - 1;
        lVar22 = lStack_58;
      } while (uVar15 != 0);
    }
  }
  puVar11 = puVar2;
  puVar17 = *(uint64_t **)(lVar6 + 0x30);
  while (puVar17 != (uint64_t *)0x0) {
    iVar8 = memcmp(puVar17 + 4,lVar1,0x10);
    if (iVar8 < 0) {
      puVar17 = (uint64_t *)*puVar17;
    }
    else {
      puVar11 = puVar17;
      puVar17 = (uint64_t *)puVar17[1];
    }
  }
  if ((puVar11 == puVar2) || (iVar8 = memcmp(lVar1,puVar11 + 4,0x10), iVar8 < 0)) {
    puVar11 = (uint64_t *)FUN_1801f04c0(puVar2,&uStackX_8);
    puVar11 = (uint64_t *)*puVar11;
  }
  puVar11[6] = lStack_88;
  puVar11[7] = lStack_80;
  *(int32_t *)(puVar11 + 8) = (int32_t)uStack_78;
  *(int32_t *)((int64_t)puVar11 + 0x44) = uStack_78._4_4_;
  *(uint *)(puVar11 + 9) = uStack_70;
  *(int *)((int64_t)puVar11 + 0x4c) = iStack_6c;
  *(int *)(puVar11 + 10) = iStack_68;
  *(int32_t *)((int64_t)puVar11 + 0x54) = (int32_t)uStack_64;
  *(int32_t *)(puVar11 + 0xb) = uStack_64._4_4_;
  *(int32_t *)((int64_t)puVar11 + 0x5c) = uStack_5c;
  *(int16_t *)(lVar6 + 0xe8) = 0x101;
  SystemManager_Validator(&lStack_a0);
LAB_1801ef2d7:
  iVar8 = _Mtx_unlock(lVar22);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801ef300(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_2 + 0xb8);
  uVar4 = *(uint64_t *)(param_2 + 0xc0);
  uVar6 = ((((((((uVar6 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar6 >> 8 & 0xff) *
                0x100000001b3 ^ uVar6 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar6 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar6 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x38) *
          0x7ba81627b075296b;
  uVar6 = (uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar5 = (uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = *(uint64_t *)(param_3 + 0xb8);
  uVar4 = ((((((((uVar4 >> 8 & 0xff ^ (uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                 0x100000001b3 ^ uVar4 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar4 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x28 & 0xff) *
             0x100000001b3 ^ uVar4 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x38) * 0x100000001b3
          ^ uVar5) * -0x622015f714c7d297;
  uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar5) * -0x622015f714c7d297;
  uVar4 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar6 = ((((((((uVar6 >> 8 & 0xff ^ (uVar6 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                 0x100000001b3 ^ uVar6 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar6 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x28 & 0xff) *
             0x100000001b3 ^ uVar6 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x38) * 0x100000001b3
          ^ uVar4) * -0x622015f714c7d297;
  uVar4 = (uVar6 >> 0x2f ^ uVar6 ^ uVar4) * -0x622015f714c7d297;
  uVar6 = *(uint64_t *)(param_3 + 0xc0);
  uVar4 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  puVar3 = (uint64_t *)(system_system_data_memory + 0x50);
  uVar6 = (((((((((uVar6 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar6 >> 8 & 0xff) *
                 0x100000001b3 ^ uVar6 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar6 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x28 & 0xff) *
             0x100000001b3 ^ uVar6 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x38) * 0x100000001b3
          ^ uVar4) * -0x622015f714c7d297;
  puVar2 = *(uint64_t **)(system_system_data_memory + 0x60);
  uVar6 = (uVar6 >> 0x2f ^ uVar6 ^ uVar4) * -0x622015f714c7d297;
  uVar6 = (uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  puVar1 = puVar3;
  if (puVar2 != (uint64_t *)0x0) {
    do {
      if ((uint64_t)puVar2[4] < uVar6) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar1 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    } while (puVar2 != (uint64_t *)0x0);
    if ((puVar1 != puVar3) && ((uint64_t)puVar1[4] <= uVar6)) goto LAB_1801ef603;
  }
  puVar1 = puVar3;
LAB_1801ef603:
  return CONCAT71((int7)((uint64_t)puVar1 >> 8),puVar1 != puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801ef620(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_2 + 0xb8);
  uVar4 = *(uint64_t *)(param_2 + 0xc0);
  uVar6 = ((((((((uVar6 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar6 >> 8 & 0xff) *
                0x100000001b3 ^ uVar6 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar6 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar6 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x38) *
          0x7ba81627b075296b;
  uVar6 = (uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar5 = (uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar6 = *(uint64_t *)(param_3 + 0xb8);
  uVar4 = (((((((((uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar4 >> 8 & 0xff) *
                 0x100000001b3 ^ uVar4 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar4 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x28 & 0xff) *
             0x100000001b3 ^ uVar4 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x38) * 0x100000001b3
          ^ uVar5) * -0x622015f714c7d297;
  uVar4 = (uVar4 >> 0x2f ^ uVar4 ^ uVar5) * -0x622015f714c7d297;
  uVar4 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar6 = ((((((((uVar6 >> 8 & 0xff ^ (uVar6 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                 0x100000001b3 ^ uVar6 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar6 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x28 & 0xff) *
             0x100000001b3 ^ uVar6 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x38) * 0x100000001b3
          ^ uVar4) * -0x622015f714c7d297;
  uVar4 = (uVar6 >> 0x2f ^ uVar6 ^ uVar4) * -0x622015f714c7d297;
  uVar6 = *(uint64_t *)(param_3 + 0xc0);
  uVar4 = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  puVar3 = (uint64_t *)(system_system_data_memory + 0x50);
  uVar6 = (((((((((uVar6 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar6 >> 8 & 0xff) *
                 0x100000001b3 ^ uVar6 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar6 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x28 & 0xff) *
             0x100000001b3 ^ uVar6 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar6 >> 0x38) * 0x100000001b3
          ^ uVar4) * -0x622015f714c7d297;
  puVar2 = *(uint64_t **)(system_system_data_memory + 0x60);
  uVar6 = (uVar6 >> 0x2f ^ uVar6 ^ uVar4) * -0x622015f714c7d297;
  uVar6 = (uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  puVar1 = puVar3;
  if (puVar2 != (uint64_t *)0x0) {
    do {
      if ((uint64_t)puVar2[4] < uVar6) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar1 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    } while (puVar2 != (uint64_t *)0x0);
    if ((puVar1 != puVar3) && ((uint64_t)puVar1[4] <= uVar6)) goto LAB_1801ef923;
  }
  puVar1 = puVar3;
LAB_1801ef923:
  if (puVar1 == puVar3) {
    return (uint64_t *)0x0;
  }
  return puVar1 + 5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ef950(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1801ef950(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  int32_t param_5)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int iVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  bool bVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int32_t uStack_58;
  int32_t uStack_54;
  
  lVar4 = system_system_data_memory;
  uVar16 = 0xfffffffffffffffe;
  lVar10 = system_system_data_memory + 0x80;
  lVar15 = lVar10;
  iVar5 = _Mtx_lock(lVar10);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar12 = *(uint64_t *)(param_2 + 0xb8);
  uVar12 = ((((((((uVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar12 >> 8 & 0xff) *
                 0x100000001b3 ^ uVar12 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x18 & 0xff) *
               0x100000001b3 ^ uVar12 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x28 & 0xff) *
             0x100000001b3 ^ uVar12 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x38) *
           0x7ba81627b075296b;
  uVar12 = (uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
  uVar13 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
  uVar12 = *(uint64_t *)(param_2 + 0xc0);
  uVar12 = (((((((((uVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar12 >> 8 & 0xff) *
                  0x100000001b3 ^ uVar12 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x18 & 0xff) *
                0x100000001b3 ^ uVar12 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x28 & 0xff) *
              0x100000001b3 ^ uVar12 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x38) *
            0x100000001b3 ^ uVar13) * -0x622015f714c7d297;
  uVar12 = (uVar12 >> 0x2f ^ uVar13 ^ uVar12) * -0x622015f714c7d297;
  uVar13 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
  uVar12 = *(uint64_t *)(param_3 + 0xb8);
  uVar12 = (((((((((uVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar12 >> 8 & 0xff) *
                  0x100000001b3 ^ uVar12 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x18 & 0xff) *
                0x100000001b3 ^ uVar12 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x28 & 0xff) *
              0x100000001b3 ^ uVar12 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x38) *
            0x100000001b3 ^ uVar13) * -0x622015f714c7d297;
  uVar12 = (uVar12 ^ uVar12 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
  uVar13 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
  uVar12 = *(uint64_t *)(param_3 + 0xc0);
  uVar12 = (((((((((uVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar12 >> 8 & 0xff) *
                  0x100000001b3 ^ uVar12 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x18 & 0xff) *
                0x100000001b3 ^ uVar12 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x28 & 0xff) *
              0x100000001b3 ^ uVar12 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x38) *
            0x100000001b3 ^ uVar13) * -0x622015f714c7d297;
  uVar12 = (uVar12 ^ uVar12 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
  uVar12 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
  puVar1 = (uint64_t *)(lVar4 + 0x50);
  puVar6 = *(uint64_t **)(lVar4 + 0x60);
  puVar8 = puVar1;
  if (*(uint64_t **)(lVar4 + 0x60) != (uint64_t *)0x0) {
    do {
      if ((uint64_t)puVar6[4] < uVar12) {
        puVar7 = (uint64_t *)*puVar6;
      }
      else {
        puVar7 = (uint64_t *)puVar6[1];
        puVar8 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    if ((puVar8 != puVar1) && ((uint64_t)puVar8[4] <= uVar12)) goto LAB_1801efd83;
  }
  lVar11 = 0;
  plVar3 = *(int64_t **)(lVar4 + 0x78);
  LOCK();
  plVar2 = plVar3 + 1;
  lVar10 = *plVar2;
  *plVar2 = *plVar2 + 0x68;
  UNLOCK();
  uVar13 = lVar10 + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar11;
  if (uVar13 + 0x58 < (uint64_t)plVar3[3]) {
    lVar9 = *plVar3 + uVar13;
  }
  *(uint64_t *)(lVar9 + 0x20) = uVar12;
  *(uint64_t *)(lVar9 + 0x28) = 0;
  *(uint64_t *)(lVar9 + 0x30) = 0;
  uStack_58 = (int32_t)param_4;
  uStack_54 = (int32_t)((uint64_t)param_4 >> 0x20);
  *(int32_t *)(lVar9 + 0x38) = uStack_58;
  *(int32_t *)(lVar9 + 0x3c) = uStack_54;
  *(int32_t *)(lVar9 + 0x40) = 0;
  *(int32_t *)(lVar9 + 0x44) = 0;
  *(int32_t *)(lVar9 + 0x48) = param_5;
  *(int32_t *)(lVar9 + 0x4c) = 0xffffffff;
  *(int32_t *)(lVar9 + 0x50) = 0xffffffff;
  *(int32_t *)(lVar9 + 0x54) = 0xffffffff;
  bVar14 = true;
  puVar6 = puVar1;
  puVar8 = *(uint64_t **)(lVar4 + 0x60);
  while (puVar8 != (uint64_t *)0x0) {
    bVar14 = uVar12 < (uint64_t)puVar8[4];
    puVar6 = puVar8;
    if (bVar14) {
      puVar8 = (uint64_t *)puVar8[1];
    }
    else {
      puVar8 = (uint64_t *)*puVar8;
    }
  }
  puVar8 = puVar6;
  lVar10 = lVar15;
  if (bVar14) {
    if (puVar6 == *(uint64_t **)(lVar4 + 0x58)) goto LAB_1801efd4e;
    puVar8 = (uint64_t *)func_0x00018066b9a0(puVar6);
    lVar10 = lVar15;
  }
  if (*(uint64_t *)(lVar9 + 0x20) <= (uint64_t)puVar8[4]) {
    *(int8_t *)(lVar4 + 0xe9) = 1;
LAB_1801efd83:
    iVar5 = _Mtx_unlock(lVar10);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    return;
  }
LAB_1801efd4e:
  if ((puVar6 != puVar1) && ((uint64_t)puVar6[4] <= *(uint64_t *)(lVar9 + 0x20))) {
    lVar11 = 1;
  }
                    // WARNING: Subroutine does not return
  SystemStateController(lVar9,puVar6,puVar1,lVar11,lVar10,uVar16);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801efdb0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  
  puVar3 = (uint64_t *)(system_system_data_memory + 0x20);
  puVar2 = puVar3;
  puVar4 = *(uint64_t **)(system_system_data_memory + 0x30);
  if (*(uint64_t **)(system_system_data_memory + 0x30) != (uint64_t *)0x0) {
    do {
      iVar1 = memcmp(puVar4 + 4,param_2 + 0xb8,0x10);
      if (iVar1 < 0) {
        puVar5 = (uint64_t *)*puVar4;
      }
      else {
        puVar5 = (uint64_t *)puVar4[1];
        puVar2 = puVar4;
      }
      puVar4 = puVar5;
    } while (puVar5 != (uint64_t *)0x0);
    if (puVar2 != puVar3) {
      iVar1 = memcmp(param_2 + 0xb8,puVar2 + 4,0x10);
      if (-1 < iVar1) goto LAB_1801efe25;
    }
  }
  puVar2 = puVar3;
LAB_1801efe25:
  if (puVar2 == puVar3) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    puVar2 = puVar2 + 6;
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801efe50(void)
void FUN_1801efe50(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int iVar8;
  int8_t auStack_138 [32];
  int32_t uStack_118;
  int32_t uStack_110;
  int32_t uStack_108;
  int32_t uStack_100;
  int iStack_f8;
  int64_t *plStack_f0;
  int8_t uStack_e8;
  int32_t uStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  uint64_t uStack_b0;
  int64_t lStack_a8;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [32];
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  lVar3 = system_system_data_memory;
  uStack_b0 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  lVar1 = system_system_data_memory + 0x80;
  lStack_a8 = lVar1;
  iVar5 = _Mtx_lock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if (*(char *)(lVar3 + 0xe8) != '\0') {
    iVar5 = 0;
    iVar8 = iVar5;
    for (lVar6 = *(int64_t *)(lVar3 + 0x28); lVar6 != lVar3 + 0x20;
        lVar6 = func_0x00018066bd70(lVar6)) {
      *(int *)(lVar6 + 0x54) = iVar5;
      iVar5 = iVar5 + *(int *)(lVar6 + 0x4c) * *(int *)(lVar6 + 0x48) * 3;
      *(int *)(lVar6 + 0x58) = iVar8;
      iVar8 = iVar8 + *(int *)(lVar6 + 0x50) * *(int *)(lVar6 + 0x48) * 3;
    }
    FUN_180081350();
    FUN_180081350();
    plVar4 = plStack_d0;
    lVar6 = *(int64_t *)(lVar3 + 0x28);
    if (lVar6 != lVar3 + 0x20) {
                    // WARNING: Subroutine does not return
      memcpy(plStack_d0[2] + (int64_t)*(int *)(lVar6 + 0x54) * 2,*(uint64_t *)(lVar6 + 0x30),
             (int64_t)(*(int *)(lVar6 + 0x4c) * *(int *)(lVar6 + 0x48) * 6));
    }
    puStack_a0 = &processed_var_672_ptr;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0xf;
    strcpy_s(auStack_88,0x20,&processed_var_4320_ptr);
    uStack_e0 = 1;
    uStack_e8 = 0;
    plStack_f0 = plVar4;
    uStack_100 = 2;
    uStack_108 = 0xd;
    uStack_110 = 0;
    uStack_118 = 1;
    iStack_f8 = iVar5;
    puVar7 = (uint64_t *)SystemCore_ConfigManager();
    uVar2 = *puVar7;
    *puVar7 = 0;
    plStack_c8 = *(int64_t **)(lVar3 + 0xd0);
    *(uint64_t *)(lVar3 + 0xd0) = uVar2;
    if (plStack_c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_c8 + 0x38))();
    }
    if (plStack_c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_c0 + 0x38))();
    }
    plVar4 = plStack_d8;
    puStack_a0 = &system_state_ptr;
    puStack_68 = &processed_var_672_ptr;
    puStack_60 = auStack_50;
    auStack_50[0] = 0;
    uStack_58 = 0x10;
    strcpy_s(auStack_50,0x20,&processed_var_4360_ptr);
    uStack_e0 = 1;
    uStack_e8 = 0;
    plStack_f0 = plVar4;
    uStack_100 = 2;
    uStack_108 = 0xd;
    uStack_110 = 1;
    uStack_118 = 1;
    iStack_f8 = iVar8;
    puVar7 = (uint64_t *)SystemCore_ConfigManager();
    uVar2 = *puVar7;
    *puVar7 = 0;
    plStack_c8 = *(int64_t **)(lVar3 + 0xd8);
    *(uint64_t *)(lVar3 + 0xd8) = uVar2;
    if (plStack_c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_c8 + 0x38))();
    }
    if (plStack_b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_b8 + 0x38))();
    }
    puStack_68 = &system_state_ptr;
    *(int8_t *)(lVar3 + 0xe8) = 0;
    if (plStack_d8 != (int64_t *)0x0) {
      (**(code **)(*plStack_d8 + 0x38))();
    }
    if (plStack_d0 != (int64_t *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
  }
  iVar5 = _Mtx_unlock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




