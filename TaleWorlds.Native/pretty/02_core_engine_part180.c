#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part180.c - 1 个函数

// 函数: void FUN_1801659e0(void)
void FUN_1801659e0(void)

{
  longlong *plVar1;
  code *pcVar2;
  int8_t auStack_138 [32];
  void **ppuStack_118;
  uint64_t uStack_108;
  void *puStack_100;
  int8_t *puStack_f8;
  int32_t uStack_f0;
  int8_t auStack_e8 [32];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [32];
  void *puStack_90;
  int8_t *puStack_88;
  int32_t uStack_80;
  int8_t auStack_78 [32];
  void *puStack_58;
  int8_t *puStack_50;
  int32_t uStack_48;
  int8_t auStack_40 [32];
  ulonglong uStack_20;
  
  uStack_108 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_138;
  plVar1 = *(longlong **)(core_system_data_memory + 0x18);
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
    puStack_58 = &unknown_var_672_ptr;
    puStack_50 = auStack_40;
    auStack_40[0] = 0;
    uStack_48 = 5;
    strcpy_s(auStack_40,0x20,&unknown_var_9744_ptr);
    puStack_90 = &unknown_var_672_ptr;
    puStack_88 = auStack_78;
    auStack_78[0] = 0;
    uStack_80 = 5;
    strcpy_s(auStack_78,0x20,&unknown_var_9736_ptr);
    puStack_c8 = &unknown_var_672_ptr;
    puStack_c0 = auStack_b0;
    auStack_b0[0] = 0;
    uStack_b8 = 7;
    strcpy_s(auStack_b0,0x20,&unknown_var_48_ptr);
    puStack_100 = &unknown_var_672_ptr;
    puStack_f8 = auStack_e8;
    auStack_e8[0] = 0;
    uStack_f0 = 0xe;
    strcpy_s(auStack_e8,0x20,&unknown_var_56_ptr);
    ppuStack_118 = &puStack_58;
    (*pcVar2)(plVar1,&puStack_100,&puStack_c8,&puStack_90);
    puStack_100 = &unknown_var_720_ptr;
    puStack_c8 = &unknown_var_720_ptr;
    puStack_90 = &unknown_var_720_ptr;
    puStack_58 = &unknown_var_720_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180165bb0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  void *puVar7;
  void *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  void *puStack_68;
  int8_t *puStack_60;
  uint uStack_58;
  uint64_t uStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  iVar11 = 0;
  lVar1 = *param_4;
  if (((param_4[1] - lVar1 & 0xffffffffffffffe0U) == 0) || (*(int *)(lVar1 + 0x10) == 0)) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x21);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x20676e697373694d;
    puVar2[1] = 0x6574656d61726170;
    puVar2[2] = 0x6120656d614e2072;
    puVar2[3] = 0x207865646e692074;
    *(int16_t *)(puVar2 + 4) = 0x30;
    *(int32_t *)(param_2 + 2) = 0x21;
    return param_2;
  }
  puStack_68 = &unknown_var_3456_ptr;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  puStack_60 = (int8_t *)0x0;
  uStack_58 = 0;
  plStack_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  uStack_38 = 0;
  uStack_30 = 3;
  FUN_1800b6780(lVar1,&plStack_48);
  plVar4 = plStack_40;
  if (plStack_48 < plStack_40) {
    plVar10 = plStack_48;
    do {
      lVar1 = *plVar10;
      puVar8 = &system_buffer_ptr;
      if (*(void **)(*param_4 + 8) != (void *)0x0) {
        puVar8 = *(void **)(*param_4 + 8);
      }
      puVar7 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        puVar7 = *(void **)(lVar1 + 0x18);
      }
      lVar6 = strstr(puVar7,puVar8);
      if (lVar6 != 0) {
        iVar11 = iVar11 + 1;
        if (0 < *(int *)(lVar1 + 0x20)) {
          iVar11 = uStack_58 + *(int *)(lVar1 + 0x20);
          if (iVar11 != 0) {
            uVar9 = iVar11 + 1;
            if (puStack_60 == (int8_t *)0x0) {
              if ((int)uVar9 < 0x10) {
                uVar9 = 0x10;
              }
              puStack_60 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar9,0x13);
              *puStack_60 = 0;
            }
            else {
              if (uVar9 <= (uint)uStack_50) goto LAB_180165d0e;
              puStack_60 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_60,uVar9,0x10,0x13);
            }
            uStack_50._0_4_ = FUN_18064e990(puStack_60);
          }
LAB_180165d0e:
                    // WARNING: Subroutine does not return
          memcpy(puStack_60 + uStack_58,*(uint64_t *)(lVar1 + 0x18),
                 (longlong)(*(int *)(lVar1 + 0x20) + 1));
        }
        uVar9 = uStack_58 + 1;
        if (uVar9 != 0) {
          uVar5 = uStack_58 + 2;
          if (puStack_60 == (int8_t *)0x0) {
            if ((int)uVar5 < 0x10) {
              uVar5 = 0x10;
            }
            puStack_60 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar5,0x13);
            *puStack_60 = 0;
          }
          else {
            if (uVar5 <= (uint)uStack_50) goto LAB_180165d8d;
            puStack_60 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_60,uVar5,0x10,0x13);
          }
          uStack_50._0_4_ = FUN_18064e990(puStack_60);
        }
LAB_180165d8d:
        *(int16_t *)(puStack_60 + uStack_58) = 10;
        uStack_58 = uVar9;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 < plVar4);
  }
  FUN_180628040(&puStack_68,&unknown_var_9768_ptr,iVar11);
  iVar11 = uStack_58 + 4;
  if (iVar11 != 0) {
    uVar9 = uStack_58 + 5;
    if (puStack_60 == (int8_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puStack_60 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar9,0x13);
      *puStack_60 = 0;
    }
    else {
      if (uVar9 <= (uint)uStack_50) goto LAB_180165e38;
      puStack_60 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_60,uVar9,0x10,0x13);
    }
    uStack_50._0_4_ = FUN_18064e990(puStack_60);
  }
LAB_180165e38:
  plVar3 = plStack_48;
  *(int32_t *)(puStack_60 + uStack_58) = 0x656e6f44;
  *(int8_t *)((longlong)(puStack_60 + uStack_58) + 4) = 0;
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  *(int *)(param_2 + 2) = iVar11;
  param_2[1] = puStack_60;
  *(int32_t *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  *(uint *)(param_2 + 3) = (uint)uStack_50;
  uStack_58 = 0;
  puStack_60 = (int8_t *)0x0;
  uStack_50 = 0;
  for (plVar10 = plStack_48; plVar10 != plVar4; plVar10 = plVar10 + 1) {
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x38))();
    }
  }
  if (plVar3 == (longlong *)0x0) {
    puStack_68 = &unknown_var_3456_ptr;
    if (puStack_60 == (int8_t *)0x0) {
      return param_2;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar3);
}



uint64_t *
FUN_180165f80(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  void *puVar7;
  void *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plStack_58;
  longlong *plStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  uVar10 = 0;
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  plStack_58 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  uStack_48 = 0;
  uStack_40 = 3;
  FUN_1800b7eb0(0,&plStack_58,param_3,param_4,1,0xfffffffffffffffe);
  lVar2 = param_4[1];
  lVar3 = *param_4;
  uVar11 = (ulonglong)((longlong)plStack_50 + (7 - (longlong)plStack_58)) >> 3;
  if (plStack_50 < plStack_58) {
    uVar11 = uVar10;
  }
  plVar12 = plStack_58;
  uVar13 = uVar10;
  if (uVar11 != 0) {
    do {
      lVar5 = *plVar12;
      iVar9 = 0;
      for (uVar4 = *(ulonglong *)(lVar5 + 0x38); uVar4 < *(ulonglong *)(lVar5 + 0x40);
          uVar4 = uVar4 + 0x10) {
        iVar6 = iVar9 + 1;
        if ((*(byte *)(uVar4 + 8) & 1) == 0) {
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
      }
      if ((int)((longlong)(*(ulonglong *)(lVar5 + 0x40) - *(longlong *)(lVar5 + 0x38)) >> 4) ==
          iVar9) {
        if (lVar2 - lVar3 >> 5 == 1) {
          puVar8 = &system_buffer_ptr;
          if (*(void **)(*param_4 + 8) != (void *)0x0) {
            puVar8 = *(void **)(*param_4 + 8);
          }
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar5 + 0x1f8) != (void *)0x0) {
            puVar7 = *(void **)(lVar5 + 0x1f8);
          }
          lVar5 = strstr(puVar7,puVar8);
          if (lVar5 == 0) goto LAB_18016612b;
        }
        uVar13 = (ulonglong)((int)uVar13 + 1);
        lVar5 = *plVar12;
        if (0 < *(int *)(lVar5 + 0x200)) {
          FUN_1806277c0(param_2,*(int *)(param_2 + 2) + *(int *)(lVar5 + 0x200));
                    // WARNING: Subroutine does not return
          memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],*(uint64_t *)(lVar5 + 0x1f8),
                 (longlong)(*(int *)(lVar5 + 0x200) + 1));
        }
        iVar9 = *(int *)(param_2 + 2) + 1;
        FUN_1806277c0(param_2,iVar9);
        *(int16_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 10;
        *(int *)(param_2 + 2) = iVar9;
      }
LAB_18016612b:
      plVar12 = plVar12 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  plVar12 = plStack_58;
  FUN_180628040(param_2,&unknown_var_9856_ptr,uVar13);
  iVar9 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar9 + 4);
  uVar1 = *(uint *)(param_2 + 2);
  lVar2 = param_2[1];
  *(int32_t *)((ulonglong)uVar1 + lVar2) = 0x656e6f44;
  *(int8_t *)((int32_t *)((ulonglong)uVar1 + lVar2) + 1) = 0;
  *(int *)(param_2 + 2) = iVar9 + 4;
  if (plVar12 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar12);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801661b0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  void *puVar7;
  void *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  void *puStack_68;
  int8_t *puStack_60;
  uint uStack_58;
  uint64_t uStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  iVar11 = 0;
  lVar1 = *param_4;
  if (((param_4[1] - lVar1 & 0xffffffffffffffe0U) == 0) || (*(int *)(lVar1 + 0x10) == 0)) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x21);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x20676e697373694d;
    puVar2[1] = 0x6574656d61726170;
    puVar2[2] = 0x6120656d614e2072;
    puVar2[3] = 0x207865646e692074;
    *(int16_t *)(puVar2 + 4) = 0x30;
    *(int32_t *)(param_2 + 2) = 0x21;
    return param_2;
  }
  puStack_68 = &unknown_var_3456_ptr;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  puStack_60 = (int8_t *)0x0;
  uStack_58 = 0;
  plStack_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  uStack_38 = 0;
  uStack_30 = 3;
  FUN_1800b6940(lVar1,&plStack_48);
  plVar4 = plStack_40;
  if (plStack_48 < plStack_40) {
    plVar10 = plStack_48;
    do {
      lVar1 = *plVar10;
      puVar8 = &system_buffer_ptr;
      if (*(void **)(*param_4 + 8) != (void *)0x0) {
        puVar8 = *(void **)(*param_4 + 8);
      }
      puVar7 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        puVar7 = *(void **)(lVar1 + 0x18);
      }
      lVar6 = strstr(puVar7,puVar8);
      if (lVar6 != 0) {
        iVar11 = iVar11 + 1;
        if (0 < *(int *)(lVar1 + 0x20)) {
          iVar11 = uStack_58 + *(int *)(lVar1 + 0x20);
          if (iVar11 != 0) {
            uVar9 = iVar11 + 1;
            if (puStack_60 == (int8_t *)0x0) {
              if ((int)uVar9 < 0x10) {
                uVar9 = 0x10;
              }
              puStack_60 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar9,0x13);
              *puStack_60 = 0;
            }
            else {
              if (uVar9 <= (uint)uStack_50) goto LAB_18016630e;
              puStack_60 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_60,uVar9,0x10,0x13);
            }
            uStack_50._0_4_ = FUN_18064e990(puStack_60);
          }
LAB_18016630e:
                    // WARNING: Subroutine does not return
          memcpy(puStack_60 + uStack_58,*(uint64_t *)(lVar1 + 0x18),
                 (longlong)(*(int *)(lVar1 + 0x20) + 1));
        }
        uVar9 = uStack_58 + 1;
        if (uVar9 != 0) {
          uVar5 = uStack_58 + 2;
          if (puStack_60 == (int8_t *)0x0) {
            if ((int)uVar5 < 0x10) {
              uVar5 = 0x10;
            }
            puStack_60 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar5,0x13);
            *puStack_60 = 0;
          }
          else {
            if (uVar5 <= (uint)uStack_50) goto LAB_18016638d;
            puStack_60 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_60,uVar5,0x10,0x13);
          }
          uStack_50._0_4_ = FUN_18064e990(puStack_60);
        }
LAB_18016638d:
        *(int16_t *)(puStack_60 + uStack_58) = 10;
        uStack_58 = uVar9;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 < plVar4);
  }
  FUN_180628040(&puStack_68,&unknown_var_9832_ptr,iVar11);
  iVar11 = uStack_58 + 4;
  if (iVar11 != 0) {
    uVar9 = uStack_58 + 5;
    if (puStack_60 == (int8_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puStack_60 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar9,0x13);
      *puStack_60 = 0;
    }
    else {
      if (uVar9 <= (uint)uStack_50) goto LAB_180166438;
      puStack_60 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_60,uVar9,0x10,0x13);
    }
    uStack_50._0_4_ = FUN_18064e990(puStack_60);
  }
LAB_180166438:
  plVar3 = plStack_48;
  *(int32_t *)(puStack_60 + uStack_58) = 0x656e6f44;
  *(int8_t *)((longlong)(puStack_60 + uStack_58) + 4) = 0;
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  *(int *)(param_2 + 2) = iVar11;
  param_2[1] = puStack_60;
  *(int32_t *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  *(uint *)(param_2 + 3) = (uint)uStack_50;
  uStack_58 = 0;
  puStack_60 = (int8_t *)0x0;
  uStack_50 = 0;
  for (plVar10 = plStack_48; plVar10 != plVar4; plVar10 = plVar10 + 1) {
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x38))();
    }
  }
  if (plVar3 == (longlong *)0x0) {
    puStack_68 = &unknown_var_3456_ptr;
    if (puStack_60 == (int8_t *)0x0) {
      return param_2;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180166580(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  void *puVar7;
  void *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  void *puStack_68;
  int8_t *puStack_60;
  uint uStack_58;
  uint64_t uStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  iVar11 = 0;
  lVar1 = *param_4;
  if (((param_4[1] - lVar1 & 0xffffffffffffffe0U) == 0) || (*(int *)(lVar1 + 0x10) == 0)) {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x21);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x20676e697373694d;
    puVar2[1] = 0x6574656d61726170;
    puVar2[2] = 0x6120656d614e2072;
    puVar2[3] = 0x207865646e692074;
    *(int16_t *)(puVar2 + 4) = 0x30;
    *(int32_t *)(param_2 + 2) = 0x21;
    return param_2;
  }
  puStack_68 = &unknown_var_3456_ptr;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  puStack_60 = (int8_t *)0x0;
  uStack_58 = 0;
  plStack_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  uStack_38 = 0;
  uStack_30 = 3;
  FUN_1800b6b20(lVar1,&plStack_48);
  plVar4 = plStack_40;
  if (plStack_48 < plStack_40) {
    plVar10 = plStack_48;
    do {
      lVar1 = *plVar10;
      puVar8 = &system_buffer_ptr;
      if (*(void **)(*param_4 + 8) != (void *)0x0) {
        puVar8 = *(void **)(*param_4 + 8);
      }
      puVar7 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        puVar7 = *(void **)(lVar1 + 0x18);
      }
      lVar6 = strstr(puVar7,puVar8);
      if (lVar6 != 0) {
        iVar11 = iVar11 + 1;
        if (0 < *(int *)(lVar1 + 0x20)) {
          iVar11 = uStack_58 + *(int *)(lVar1 + 0x20);
          if (iVar11 != 0) {
            uVar9 = iVar11 + 1;
            if (puStack_60 == (int8_t *)0x0) {
              if ((int)uVar9 < 0x10) {
                uVar9 = 0x10;
              }
              puStack_60 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar9,0x13);
              *puStack_60 = 0;
            }
            else {
              if (uVar9 <= (uint)uStack_50) goto LAB_1801666de;
              puStack_60 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_60,uVar9,0x10,0x13);
            }
            uStack_50._0_4_ = FUN_18064e990(puStack_60);
          }
LAB_1801666de:
                    // WARNING: Subroutine does not return
          memcpy(puStack_60 + uStack_58,*(uint64_t *)(lVar1 + 0x18),
                 (longlong)(*(int *)(lVar1 + 0x20) + 1));
        }
        uVar9 = uStack_58 + 1;
        if (uVar9 != 0) {
          uVar5 = uStack_58 + 2;
          if (puStack_60 == (int8_t *)0x0) {
            if ((int)uVar5 < 0x10) {
              uVar5 = 0x10;
            }
            puStack_60 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar5,0x13);
            *puStack_60 = 0;
          }
          else {
            if (uVar5 <= (uint)uStack_50) goto LAB_18016675d;
            puStack_60 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_60,uVar5,0x10,0x13);
          }
          uStack_50._0_4_ = FUN_18064e990(puStack_60);
        }
LAB_18016675d:
        *(int16_t *)(puStack_60 + uStack_58) = 10;
        uStack_58 = uVar9;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 < plVar4);
  }
  FUN_180628040(&puStack_68,&unknown_var_9888_ptr,iVar11);
  iVar11 = uStack_58 + 4;
  if (iVar11 != 0) {
    uVar9 = uStack_58 + 5;
    if (puStack_60 == (int8_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puStack_60 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar9,0x13);
      *puStack_60 = 0;
    }
    else {
      if (uVar9 <= (uint)uStack_50) goto LAB_180166808;
      puStack_60 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_60,uVar9,0x10,0x13);
    }
    uStack_50._0_4_ = FUN_18064e990(puStack_60);
  }
LAB_180166808:
  plVar3 = plStack_48;
  *(int32_t *)(puStack_60 + uStack_58) = 0x656e6f44;
  *(int8_t *)((longlong)(puStack_60 + uStack_58) + 4) = 0;
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  *(int *)(param_2 + 2) = iVar11;
  param_2[1] = puStack_60;
  *(int32_t *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  *(uint *)(param_2 + 3) = (uint)uStack_50;
  uStack_58 = 0;
  puStack_60 = (int8_t *)0x0;
  uStack_50 = 0;
  for (plVar10 = plStack_48; plVar10 != plVar4; plVar10 = plVar10 + 1) {
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x38))();
    }
  }
  if (plVar3 == (longlong *)0x0) {
    puStack_68 = &unknown_var_3456_ptr;
    if (puStack_60 == (int8_t *)0x0) {
      return param_2;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180166950(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t uVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  uVar5 = 0;
  while (lVar4 = core_system_data_memory, core_system_data_memory != 0) {
    lVar3 = FUN_18006eec0(core_system_data_memory);
    if (lVar3 == 0) {
      lVar3 = FUN_18006eec0(lVar4 + 0x78);
      if (lVar3 == 0) {
        lVar4 = FUN_18006eec0(lVar4 + 0xf0);
        if (lVar4 == 0) break;
      }
    }
    FUN_18020f150(*(uint64_t *)(*(longlong *)(system_context_ptr + 8) + 8));
    lVar4 = system_message_buffer + 0x20;
    iVar2 = _Mtx_lock(lVar4);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    iVar2 = _Mtx_unlock(lVar4);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    if (core_system_data_memory != 0) {
      FUN_18006eb30();
    }
    FUN_18020f150(*(uint64_t *)(*(longlong *)(system_context_ptr + 8) + 8));
    lVar4 = system_message_buffer + 0x20;
    iVar2 = _Mtx_lock(lVar4);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    iVar2 = _Mtx_unlock(lVar4);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
  FUN_18005e630(system_context_ptr);
  *(int32_t *)(core_system_data_memory + 0x60) = 1;
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,4,param_3,param_4,uVar5,uVar6);
  puVar1 = (int32_t *)param_2[1];
  *puVar1 = 0x656e6f44;
  *(int8_t *)(puVar1 + 1) = 0;
  *(int32_t *)(param_2 + 2) = 4;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180166b10(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int32_t *puVar2;
  longlong *plVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plStack_78;
  longlong lStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  
  plVar8 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 3;
  FUN_1800b7eb0(0,&plStack_78,param_3,param_4,0,0xfffffffffffffffe,0,0,0,3);
  uVar15 = 0;
  lVar11 = lStack_70 - (longlong)plStack_78 >> 3;
  plVar7 = plVar3;
  plVar12 = plStack_78;
  plVar16 = plVar8;
  if (lVar11 != 0) {
    do {
      lVar4 = 1;
      plVar1 = (longlong *)*plVar12;
      lVar13 = 0;
      uVar6 = (ulonglong)*(uint *)(plVar1 + 0xb);
      plVar3 = plVar7;
      uVar14 = (uint)plVar16;
      if ((int)*(uint *)(plVar1 + 0xb) < 1) {
LAB_180166c0c:
        if (plVar9 < plVar8) {
          plVar10 = plVar9 + 1;
          *plVar9 = (longlong)plVar1;
        }
        else {
          lVar13 = (longlong)plVar9 - (longlong)plVar7 >> 3;
          if ((lVar13 == 0) || (lVar4 = lVar13 * 2, lVar4 != 0)) {
            plVar3 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar4 * 8,3);
          }
          else {
            plVar3 = (longlong *)0x0;
          }
          if (plVar7 != plVar9) {
                    // WARNING: Subroutine does not return
            memmove(plVar3,plVar7,(longlong)plVar9 - (longlong)plVar7);
          }
          *plVar3 = (longlong)plVar1;
          plVar10 = plVar3 + 1;
          if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar7);
          }
          plVar8 = plVar3 + lVar4;
          uVar14 = uVar15;
        }
      }
      else {
        pbVar5 = (byte *)(plVar1[7] + 8);
        do {
          if ((*pbVar5 & 1) == 0) {
            lVar13 = lVar4;
          }
          pbVar5 = pbVar5 + 0x10;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        plVar10 = plVar9;
        if ((char)lVar13 == '\0') goto LAB_180166c0c;
      }
      if (*(code **)(*plVar1 + 0x198) == (code *)&unknown_var_2544_ptr) {
        lVar4 = (longlong)plVar1 + 0x214;
      }
      else {
        lVar4 = (**(code **)(*plVar1 + 0x198))(plVar1);
      }
      *(float *)(plVar1 + 0xd) = *(float *)(lVar4 + 0x30) * 166.19792;
      uVar15 = uVar14 + 1;
      plVar7 = plVar3;
      plVar9 = plVar10;
      plVar12 = plVar12 + 1;
      plVar16 = (longlong *)(ulonglong)uVar15;
    } while ((int)uVar15 != lVar11);
  }
  plVar8 = plStack_78;
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,5);
  puVar2 = (int32_t *)param_2[1];
  *puVar2 = 0x656e6f44;
  *(int16_t *)(puVar2 + 1) = 0x2e;
  *(int32_t *)(param_2 + 2) = 5;
  if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar8);
  }
  if (plVar3 == (longlong *)0x0) {
    return param_2;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



