#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part248.c - 2 个函数

// 函数: void FUN_1802147c0(uint64_t *param_1)
void FUN_1802147c0(uint64_t *param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int32_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  int iVar10;
  int64_t lVar11;
  uint64_t uVar12;
  int8_t auStack_1a8 [32];
  uint64_t uStack_188;
  char cStack_180;
  char cStack_178;
  int64_t *plStack_160;
  int64_t *plStack_158;
  int64_t *plStack_150;
  uint64_t *puStack_148;
  uint64_t *puStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  uint64_t uStack_128;
  int8_t auStack_118 [224];
  uint64_t uStack_38;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1a8;
  iVar10 = 0;
  if (*(char *)(param_1 + 0x86) != '\0') {
    uVar4 = timeGetTime();
    plVar8 = param_1 + 0x87;
    lVar11 = 9;
    do {
      if ((uint64_t)plVar8[0xb] <= (uint64_t)uVar4) {
        cVar3 = (**(code **)(*(int64_t *)*plVar8 + 0xd8))();
        if (cVar3 == '\0') {
          uStack_188 = 0;
          cStack_180 = cVar3;
          cStack_178 = cVar3;
          plVar7 = (int64_t *)FUN_1801580f0(param_1,&plStack_160,&unknown_var_3472_ptr,*plVar8 + 0x18);
          lVar1 = *plVar7;
          *plVar7 = 0;
          plStack_158 = (int64_t *)*plVar8;
          *plVar8 = lVar1;
          if (plStack_158 != (int64_t *)0x0) {
            (**(code **)(*plStack_158 + 0x38))();
          }
          if (plStack_160 != (int64_t *)0x0) {
            (**(code **)(*plStack_160 + 0x38))();
          }
        }
        (**(code **)(*(int64_t *)*plVar8 + 0x60))();
        plVar8[0xb] = 0xffffffff;
      }
      plVar8 = plVar8 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (-1 < *(int *)(*(int64_t *)(core_system_data_memory + 0x2018) + 0x330)) {
    FUN_1808451c0(param_1[0x6d],&unknown_var_4464_ptr,&plStack_150);
    FUN_1808453c0(plStack_150,&plStack_158);
    if (plStack_158 == (int64_t *)0x0) {
      *(int8_t *)((int64_t)param_1 + 0x401) = 1;
    }
    else if (*(char *)((int64_t)param_1 + 0x401) != '\0') {
      *(int8_t *)((int64_t)param_1 + 0x401) = 0;
                    // WARNING: Subroutine does not return
      memset(auStack_118,0,0xd8);
    }
  }
  if ((void *)*param_1 == &unknown_var_5528_ptr) {
    FUN_180156300();
    puStack_148 = (uint64_t *)0x0;
    puStack_140 = (uint64_t *)0x0;
    uStack_138 = 0;
    uStack_130 = 3;
    plVar8 = param_1 + 0xc;
    plStack_150 = plVar8;
    iVar5 = _Mtx_lock(plVar8);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    puVar2 = (uint64_t *)param_1[0x82];
    param_1[0x82] = 0;
    lVar11 = param_1[0x83];
    param_1[0x83] = 0;
    uStack_138 = param_1[0x84];
    param_1[0x84] = 0;
    uStack_130 = *(int32_t *)(param_1 + 0x85);
    *(int32_t *)(param_1 + 0x85) = 3;
    puStack_148 = puVar2;
    puStack_140 = (uint64_t *)lVar11;
    iVar5 = _Mtx_unlock(plVar8);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    uVar12 = lVar11 - (int64_t)puVar2 >> 3;
    puVar9 = puVar2;
    if (uVar12 != 0) {
      do {
        uVar6 = FUN_180849230(*puVar9);
        FUN_180211a30(uVar6,&system_buffer_ptr);
        iVar10 = iVar10 + 1;
        puVar9 = puVar9 + 1;
      } while ((uint64_t)(int64_t)iVar10 < uVar12);
    }
    puStack_140 = puVar2;
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar2);
    }
  }
  else {
    (**(code **)((void *)*param_1 + 0x200))(param_1);
  }
  if (*(char *)(param_1 + 0x42) == '\0') {
    uVar6 = FUN_18084b410(param_1[0x6d]);
    FUN_180211a30(uVar6,&unknown_var_4408_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_1a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180214ad0(uint64_t param_1,int param_2,int64_t param_3,int64_t param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  uint64_t uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (((param_5 == 0) && (*(uint64_t **)(param_3 + 0x18) != (uint64_t *)0x0)) &&
     (*(uint64_t **)(param_4 + 0x18) != (uint64_t *)0x0)) {
    fVar13 = 0.0;
    pfVar5 = (float *)**(uint64_t **)(param_3 + 0x18);
    pfVar6 = (float *)**(uint64_t **)(param_4 + 0x18);
    iVar2 = **(int **)(param_3 + 8);
    fVar14 = 1.0;
    if (param_2 != 0) {
      do {
        param_2 = param_2 + -1;
        iVar8 = 0;
        if (3 < iVar2) {
          uVar4 = (iVar2 - 4U >> 2) + 1;
          uVar7 = (uint64_t)uVar4;
          iVar8 = uVar4 * 4;
          do {
            fVar12 = *pfVar5;
            *pfVar6 = fVar12;
            fVar11 = pfVar5[1];
            pfVar6[1] = fVar11;
            fVar10 = pfVar5[2];
            pfVar6[2] = fVar10;
            pfVar1 = pfVar5 + 3;
            pfVar5 = pfVar5 + 4;
            fVar12 = fVar12 * 0.5;
            fVar11 = fVar11 * 0.5;
            if (fVar12 <= fVar13) {
              fVar12 = fVar13;
            }
            fVar10 = fVar10 * 0.5;
            fVar9 = *pfVar1 * 0.5;
            pfVar6[3] = *pfVar1;
            pfVar6 = pfVar6 + 4;
            if (fVar12 <= fVar11) {
              fVar12 = fVar11;
            }
            if (fVar12 <= fVar10) {
              fVar12 = fVar10;
            }
            fVar13 = fVar12;
            if (fVar12 <= fVar9) {
              fVar13 = fVar9;
            }
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (iVar8 < iVar2) {
          uVar7 = (uint64_t)(uint)(iVar2 - iVar8);
          fVar12 = fVar13;
          do {
            fVar13 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            *pfVar6 = fVar13;
            fVar13 = fVar13 * 0.5;
            pfVar6 = pfVar6 + 1;
            if (fVar13 <= fVar12) {
              fVar13 = fVar12;
            }
            uVar7 = uVar7 - 1;
            fVar12 = fVar13;
          } while (uVar7 != 0);
        }
      } while (param_2 != 0);
    }
    lVar3 = *(int64_t *)(core_system_data_memory + 0x2018);
    iVar2 = *(int *)(lVar3 + 100);
    if (iVar2 == 1) {
      fVar14 = 0.1;
    }
    else if ((iVar2 == 2) || (iVar2 == 4)) {
      fVar14 = 0.05;
    }
    *(int8_t *)(lVar3 + 0x80) = 1;
    *(float *)(lVar3 + 0x84) = fVar14 * fVar13;
    *(float *)(lVar3 + 0x88) = fVar14 * fVar13;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180214b09(float *param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  int *in_RAX;
  uint64_t uVar5;
  int iVar6;
  int in_R11D;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_XMM5_Da;
  float fVar11;
  
  iVar2 = *in_RAX;
  fVar11 = 1.0;
  if (in_R11D != 0) {
    do {
      in_R11D = in_R11D + -1;
      iVar6 = 0;
      if (3 < iVar2) {
        uVar4 = (iVar2 - 4U >> 2) + 1;
        uVar5 = (uint64_t)uVar4;
        iVar6 = uVar4 * 4;
        do {
          fVar10 = *param_1;
          *param_2 = fVar10;
          fVar9 = param_1[1];
          param_2[1] = fVar9;
          fVar8 = param_1[2];
          param_2[2] = fVar8;
          pfVar1 = param_1 + 3;
          param_1 = param_1 + 4;
          fVar10 = fVar10 * 0.5;
          fVar9 = fVar9 * 0.5;
          if (fVar10 <= in_XMM5_Da) {
            fVar10 = in_XMM5_Da;
          }
          fVar8 = fVar8 * 0.5;
          fVar7 = *pfVar1 * 0.5;
          param_2[3] = *pfVar1;
          param_2 = param_2 + 4;
          if (fVar10 <= fVar9) {
            fVar10 = fVar9;
          }
          if (fVar10 <= fVar8) {
            fVar10 = fVar8;
          }
          in_XMM5_Da = fVar10;
          if (fVar10 <= fVar7) {
            in_XMM5_Da = fVar7;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (iVar6 < iVar2) {
        uVar5 = (uint64_t)(uint)(iVar2 - iVar6);
        fVar10 = in_XMM5_Da;
        do {
          fVar9 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = fVar9;
          in_XMM5_Da = fVar9 * 0.5;
          param_2 = param_2 + 1;
          if (in_XMM5_Da <= fVar10) {
            in_XMM5_Da = fVar10;
          }
          uVar5 = uVar5 - 1;
          fVar10 = in_XMM5_Da;
        } while (uVar5 != 0);
      }
    } while (in_R11D != 0);
  }
  lVar3 = *(int64_t *)(core_system_data_memory + 0x2018);
  iVar2 = *(int *)(lVar3 + 100);
  if (iVar2 == 1) {
    fVar11 = 0.1;
  }
  else if ((iVar2 == 2) || (iVar2 == 4)) {
    fVar11 = 0.05;
  }
  *(int8_t *)(lVar3 + 0x80) = 1;
  *(float *)(lVar3 + 0x84) = fVar11 * in_XMM5_Da;
  *(float *)(lVar3 + 0x88) = fVar11 * in_XMM5_Da;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180214b21(float *param_1,float *param_2)

{
  float *pfVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  int iVar5;
  int in_R10D;
  int in_R11D;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_XMM5_Da;
  float unaff_XMM7_Da;
  
  do {
    in_R11D = in_R11D + -1;
    iVar5 = 0;
    if (3 < in_R10D) {
      uVar3 = (in_R10D - 4U >> 2) + 1;
      uVar4 = (uint64_t)uVar3;
      iVar5 = uVar3 * 4;
      do {
        fVar9 = *param_1;
        *param_2 = fVar9;
        fVar8 = param_1[1];
        param_2[1] = fVar8;
        fVar7 = param_1[2];
        param_2[2] = fVar7;
        pfVar1 = param_1 + 3;
        param_1 = param_1 + 4;
        fVar9 = fVar9 * 0.5;
        fVar8 = fVar8 * 0.5;
        if (fVar9 <= in_XMM5_Da) {
          fVar9 = in_XMM5_Da;
        }
        fVar7 = fVar7 * 0.5;
        fVar6 = *pfVar1 * 0.5;
        param_2[3] = *pfVar1;
        param_2 = param_2 + 4;
        if (fVar9 <= fVar8) {
          fVar9 = fVar8;
        }
        if (fVar9 <= fVar7) {
          fVar9 = fVar7;
        }
        in_XMM5_Da = fVar9;
        if (fVar9 <= fVar6) {
          in_XMM5_Da = fVar6;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (iVar5 < in_R10D) {
      uVar4 = (uint64_t)(uint)(in_R10D - iVar5);
      fVar9 = in_XMM5_Da;
      do {
        fVar8 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = fVar8;
        in_XMM5_Da = fVar8 * 0.5;
        param_2 = param_2 + 1;
        if (in_XMM5_Da <= fVar9) {
          in_XMM5_Da = fVar9;
        }
        uVar4 = uVar4 - 1;
        fVar9 = in_XMM5_Da;
      } while (uVar4 != 0);
    }
  } while (in_R11D != 0);
  lVar2 = *(int64_t *)(core_system_data_memory + 0x2018);
  iVar5 = *(int *)(lVar2 + 100);
  if (iVar5 == 1) {
    unaff_XMM7_Da = 0.1;
  }
  else if ((iVar5 == 2) || (iVar5 == 4)) {
    unaff_XMM7_Da = 0.05;
  }
  *(int8_t *)(lVar2 + 0x80) = 1;
  *(float *)(lVar2 + 0x84) = unaff_XMM7_Da * in_XMM5_Da;
  *(float *)(lVar2 + 0x88) = unaff_XMM7_Da * in_XMM5_Da;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180214bf0(void)

{
  int iVar1;
  int64_t lVar2;
  float in_XMM5_Da;
  float unaff_XMM7_Da;
  
  lVar2 = *(int64_t *)(core_system_data_memory + 0x2018);
  iVar1 = *(int *)(lVar2 + 100);
  if (iVar1 == 1) {
    unaff_XMM7_Da = 0.1;
  }
  else if ((iVar1 == 2) || (iVar1 == 4)) {
    unaff_XMM7_Da = 0.05;
  }
  *(int8_t *)(lVar2 + 0x80) = 1;
  *(float *)(lVar2 + 0x84) = unaff_XMM7_Da * in_XMM5_Da;
  *(float *)(lVar2 + 0x88) = unaff_XMM7_Da * in_XMM5_Da;
  return 0;
}



uint64_t FUN_180214c41(void)

{
  return 0;
}



int32_t FUN_180214c50(int64_t param_1)

{
  int32_t uVar1;
  int32_t auStackX_8 [8];
  
  uVar1 = FUN_18073a840(*(uint64_t *)(param_1 + 0x370),auStackX_8,0,0);
  FUN_180211a30(uVar1,&system_buffer_ptr);
  return auStackX_8[0];
}



int32_t FUN_180214c90(int64_t param_1)

{
  int32_t uVar1;
  int32_t auStackX_8 [8];
  
  uVar1 = FUN_180739a50(*(uint64_t *)(param_1 + 0x370),auStackX_8,0);
  FUN_180211a30(uVar1,&system_buffer_ptr);
  return auStackX_8[0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180214cc0(int64_t param_1)
void FUN_180214cc0(int64_t param_1)

{
  int32_t uVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint uVar8;
  uint uVar9;
  int iVar10;
  void *puStack_50;
  uint64_t *puStack_48;
  uint uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int64_t lVar7;
  
  uStack_30 = 0x180214cd0;
  iVar3 = FUN_18073baf0(*(uint64_t *)(param_1 + 0x370));
  if (iVar3 == 0) {
    return;
  }
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (uint64_t *)0x0;
  uStack_40 = 0;
  puStack_48 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puStack_48 = 0;
  uVar1 = FUN_18064e990(puStack_48);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puStack_48 = 0x726520444f4d460a;
  *(int32_t *)(puStack_48 + 1) = 0x21726f72;
  *(int16_t *)((int64_t)puStack_48 + 0xc) = 0x2820;
  *(int8_t *)((int64_t)puStack_48 + 0xe) = 0;
  uStack_40 = 0xe;
  FUN_180628380(&puStack_50,iVar3);
  uVar2 = uStack_40;
  uVar8 = uStack_40 + 2;
  if (uVar8 != 0) {
    uVar9 = uStack_40 + 3;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puStack_48 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)(int)uVar9,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar9 <= (uint)uStack_38) goto LAB_180211b66;
      puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar9,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211b66:
  *(int16_t *)((uint64_t)uStack_40 + (int64_t)puStack_48) = 0x2029;
  *(int8_t *)((int16_t *)((uint64_t)uStack_40 + (int64_t)puStack_48) + 1) = 0;
  uVar9 = uVar2 + 3;
  uStack_40 = uVar8;
  if (uVar9 != 0) {
    uVar8 = uVar2 + 4;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      puStack_48 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)(int)uVar8,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar8 <= (uint)uStack_38) goto LAB_180211be9;
      puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar8,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211be9:
  *(int16_t *)((uint64_t)uStack_40 + (int64_t)puStack_48) = 0x22;
  lVar6 = -1;
  do {
    lVar4 = lVar6;
    lVar6 = lVar4 + 1;
  } while ((&unknown_var_660_ptr)[lVar4] != '\0');
  iVar10 = (int)(lVar4 + 1);
  uStack_40 = uVar9;
  if (0 < iVar10) {
    iVar10 = uVar9 + iVar10;
    if (iVar10 != 0) {
      uVar2 = iVar10 + 1;
      if (puStack_48 == (uint64_t *)0x0) {
        if ((int)uVar2 < 0x10) {
          uVar2 = 0x10;
        }
        puStack_48 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
        *(int8_t *)puStack_48 = 0;
      }
      else {
        if (uVar2 <= (uint)uStack_38) goto LAB_180211c85;
        puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar2,0x10,0x13);
      }
      uVar1 = FUN_18064e990(puStack_48);
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
    }
LAB_180211c85:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((uint64_t)uStack_40 + (int64_t)puStack_48),&system_buffer_ptr,
           (int64_t)((int)lVar4 + 2));
  }
  uVar8 = uVar2 + 5;
  if (uVar8 != 0) {
    uVar2 = uVar2 + 6;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_48 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_38) goto LAB_180211d03;
      puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211d03:
  *(int16_t *)((uint64_t)uStack_40 + (int64_t)puStack_48) = 0x2022;
  *(int8_t *)((int16_t *)((uint64_t)uStack_40 + (int64_t)puStack_48) + 1) = 0;
  uStack_40 = uVar8;
  lVar4 = func_0x00018021a140(iVar3);
  lVar6 = -1;
  if (lVar4 != 0) {
    do {
      lVar7 = lVar6;
      lVar6 = lVar7 + 1;
    } while (*(char *)(lVar4 + lVar6) != '\0');
    if (0 < (int)lVar6) {
      iVar3 = uVar8 + (int)lVar6;
      if (iVar3 != 0) {
        uVar2 = iVar3 + 1;
        if (puStack_48 == (uint64_t *)0x0) {
          if ((int)uVar2 < 0x10) {
            uVar2 = 0x10;
          }
          puStack_48 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
          *(int8_t *)puStack_48 = 0;
        }
        else {
          if (uVar2 <= (uint)uStack_38) goto LAB_180211da7;
          puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar2,0x10,0x13);
        }
        uVar1 = FUN_18064e990(puStack_48);
        uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
      }
LAB_180211da7:
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((uint64_t)uStack_40 + (int64_t)puStack_48),lVar4,
             (int64_t)((int)lVar7 + 2));
    }
  }
  iVar3 = uStack_40 + 1;
  if (iVar3 != 0) {
    uVar2 = uStack_40 + 2;
    if (puStack_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_48 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *(int8_t *)puStack_48 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_38) goto LAB_180211e24;
      puStack_48 = (uint64_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_48,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_48);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
LAB_180211e24:
  *(int16_t *)((uint64_t)uStack_40 + (int64_t)puStack_48) = 10;
  puVar5 = (uint64_t *)&system_buffer_ptr;
  if (puStack_48 != (uint64_t *)0x0) {
    puVar5 = puStack_48;
  }
  uStack_40 = iVar3;
  FUN_1800623b0(system_message_context,0,0x1000000000000,3,puVar5);
  puStack_50 = &system_data_buffer_ptr;
  if (puStack_48 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}



int32_t FUN_180214cf0(int64_t param_1)

{
  int32_t auStackX_8 [2];
  int8_t auStackX_10 [24];
  
  FUN_180739950(*(uint64_t *)(param_1 + 0x370),auStackX_8,auStackX_10);
  return auStackX_8[0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



