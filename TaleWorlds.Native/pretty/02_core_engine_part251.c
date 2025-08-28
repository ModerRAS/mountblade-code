#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part251.c - 16 个函数

// 函数: void FUN_180217300(longlong *param_1)
void FUN_180217300(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  longlong lStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [232];
  uint64_t uStack_30;
  ulonglong uStack_18;
  
  iVar2 = 0;
  if (param_1[0x57] - param_1[0x56] >> 4 != 0) {
    do {
      uStack_30 = 0x18021733e;
      (**(code **)(*param_1 + 0x120))(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while ((ulonglong)(longlong)iVar2 < (ulonglong)(param_1[0x57] - param_1[0x56] >> 4));
  }
  lVar1 = param_1[0x60];
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  lStack_128 = 0;
  iVar2 = FUN_180754f10(lVar1,&uStack_120,&lStack_128);
  if (((iVar2 != 0) || (iVar2 = func_0x000180753860(uStack_120), iVar2 != 0)) &&
     ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar2,3,lVar1,&unknown_var_7112_ptr);
  }
  if (lStack_128 != 0) {
    FUN_180743d80();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180217370(longlong param_1)
void FUN_180217370(longlong param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong *plVar3;
  int8_t auStackX_8 [8];
  longlong *plStackX_10;
  int8_t auStack_d0 [200];
  
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0xb8,8,3);
  plVar3 = (longlong *)FUN_180211930(uVar2);
  if (plVar3 != (longlong *)0x0) {
    plStackX_10 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plStackX_10 = *(longlong **)(param_1 + 0x488);
  *(longlong **)(param_1 + 0x488) = plVar3;
  if (plStackX_10 != (longlong *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  lVar1 = *(longlong *)(param_1 + 0x488);
  *(int32_t *)(lVar1 + 0x60) = 0;
  *(int32_t *)(lVar1 + 100) = 0;
  *(int32_t *)(lVar1 + 0x68) = 0;
  *(int32_t *)(lVar1 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0x480) = 0;
  auStackX_8[0] = 0;
  FUN_18073acc0(*(uint64_t *)(param_1 + 0x370),0,auStackX_8);
  if (*(longlong *)(lVar1 + 0x60) != 0) {
    FUN_18073ebd0();
  }
                    // WARNING: Subroutine does not return
  memset(auStack_d0,0,200);
}





// 函数: void FUN_1802174c0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802174c0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  FUN_18073b310(*(uint64_t *)(param_1 + 0x370),0,param_3,param_4,0xfffffffffffffffe);
  FUN_18073ebd0(*(uint64_t *)(lVar1 + 0x60));
  plVar2 = *(longlong **)(param_1 + 0x488);
  *(uint64_t *)(param_1 + 0x488) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180217530(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180217530(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock(param_1 + 0x260);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  if (*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&unknown_var_5328_ptr,0,param_4,uVar2);
  }
  iVar1 = _Mtx_unlock(param_1 + 0x260);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_180217650(longlong param_1,uint64_t param_2,uint param_3,uint *param_4)
void FUN_180217650(longlong param_1,uint64_t param_2,uint param_3,uint *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int aiStackX_8 [2];
  int aiStackX_20 [2];
  uint64_t auStack_38 [2];
  
  *param_4 = 0;
  lVar2 = *(longlong *)(param_1 + 0x488);
  aiStackX_8[0] = 0;
  FUN_18073e110(*(uint64_t *)(lVar2 + 0x60),aiStackX_8,2);
  iVar3 = FUN_18073a710(*(uint64_t *)(param_1 + 0x370),0,aiStackX_20);
  iVar1 = *(int *)(param_1 + 0x480);
  if ((aiStackX_20[0] != iVar1) && (iVar3 == 0)) {
    aiStackX_20[0] = aiStackX_20[0] - iVar1;
    if (aiStackX_20[0] < 0) {
      aiStackX_20[0] = aiStackX_20[0] + aiStackX_8[0];
    }
    FUN_18073e940(*(uint64_t *)(lVar2 + 0x60),iVar1 * 2,aiStackX_20[0] * 2,auStack_38,0,param_4,0)
    ;
    uVar4 = *param_4;
    if (param_3 < *param_4) {
      *param_4 = param_3;
      uVar4 = param_3;
    }
                    // WARNING: Subroutine does not return
    memcpy(param_2,auStack_38[0],uVar4);
  }
  return;
}





// 函数: void FUN_180217740(longlong param_1,uint64_t param_2,int param_3,int param_4)
void FUN_180217740(longlong param_1,uint64_t param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint64_t *puVar4;
  
  iVar3 = _Mtx_lock(param_1 + 0x260);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  puVar4 = (uint64_t *)((longlong)param_4 * 0x10 + *(longlong *)(param_1 + 0x2b0));
  piVar2 = (int *)*puVar4;
  iVar3 = piVar2[2];
  iVar1 = *piVar2;
  FUN_1800f6ad0(piVar2,(longlong)((iVar3 - iVar1) + param_3));
                    // WARNING: Subroutine does not return
  memcpy((longlong)(iVar3 - iVar1) + *(longlong *)*puVar4,param_2,(longlong)param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802177f0(longlong param_1)
void FUN_1802177f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int32_t uVar4;
  int32_t *puVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  int8_t auStack_1a8 [32];
  int8_t auStack_188 [8];
  void *puStack_180;
  int32_t *puStack_178;
  int32_t uStack_170;
  ulonglong uStack_168;
  int iStack_160;
  float fStack_15c;
  uint64_t uStack_158;
  int8_t auStack_150 [8];
  uint64_t uStack_148;
  int8_t auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1a8;
  FUN_1801299b0(&unknown_var_5280_ptr,0,0);
  plVar1 = *(longlong **)(param_1 + 0x38);
  lVar6 = *plVar1;
  plVar7 = plVar1;
  if (lVar6 == 0) {
    plVar7 = plVar1 + 1;
    lVar6 = *plVar7;
    while (lVar6 == 0) {
      plVar7 = plVar7 + 1;
      lVar6 = *plVar7;
    }
  }
  if (lVar6 != plVar1[*(longlong *)(param_1 + 0x40)]) {
    do {
      plVar1 = *(longlong **)(lVar6 + 8);
      FUN_180846610(plVar1[0xf],auStack_138,0x100,auStack_150);
      if ((void *)*plVar1 == &unknown_var_2656_ptr) {
        iVar3 = FUN_180846a90(plVar1[0x10],&iStack_160);
        FUN_180211a30(iVar3,&system_buffer_ptr);
        if ((iVar3 == 0) && ((iStack_160 == 0 || (iStack_160 == 3)))) {
          cVar2 = '\x01';
        }
        else {
          cVar2 = '\0';
        }
      }
      else {
        cVar2 = (**(code **)((void *)*plVar1 + 0x80))(plVar1);
      }
      if ((void *)*plVar1 == &unknown_var_2656_ptr) {
        FUN_180846810(plVar1[0x10],auStack_188);
      }
      else {
        (**(code **)((void *)*plVar1 + 0x90))(plVar1);
      }
      if (cVar2 != '\0') {
        if ((void *)*plVar1 == &unknown_var_2656_ptr) {
          iVar3 = FUN_1808473f0(plVar1[0x10],&fStack_15c,0);
          fVar8 = fStack_15c;
          if (iVar3 != 0) {
            fVar8 = 0.0;
          }
        }
        else {
          fVar8 = (float)(**(code **)((void *)*plVar1 + 0x108))(plVar1);
        }
        FUN_18010f010(&unknown_var_5296_ptr,auStack_138,(double)fVar8);
        puStack_180 = &system_data_buffer_ptr;
        uStack_168 = 0;
        puStack_178 = (int32_t *)0x0;
        uStack_170 = 0;
        puStack_178 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
        *(int8_t *)puStack_178 = 0;
        uVar4 = FUN_18064e990(puStack_178);
        uStack_168 = CONCAT44(uStack_168._4_4_,uVar4);
        *puStack_178 = 0x706f7453;
        *(int16_t *)(puStack_178 + 1) = 0x5f;
        uStack_170 = 5;
        System_DataHandler(&puStack_180,&unknown_var_552_ptr,auStack_138);
        uStack_158 = 0;
        puVar5 = (int32_t *)&system_buffer_ptr;
        if (puStack_178 != (int32_t *)0x0) {
          puVar5 = puStack_178;
        }
        cVar2 = FUN_18010f6f0(puVar5,&uStack_158,0);
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0x68))(plVar1);
        }
        puStack_180 = &system_data_buffer_ptr;
        if (puStack_178 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_178 = (int32_t *)0x0;
        uStack_168 = uStack_168 & 0xffffffff00000000;
        puStack_180 = &system_state_ptr;
      }
      lVar6 = *(longlong *)(lVar6 + 0x10);
      while (lVar6 == 0) {
        plVar7 = plVar7 + 1;
        lVar6 = *plVar7;
      }
    } while (lVar6 != *(longlong *)
                       (*(longlong *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x40) * 8));
  }
  FUN_18012cfe0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1a8);
}





// 函数: void FUN_180217b00(longlong *param_1,ulonglong param_2)
void FUN_180217b00(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  uint64_t unaff_RDI;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  lVar5 = param_2 * 8;
  if (0x1fffffffffffffff < param_2) {
    lVar5 = -1;
  }
  puVar4 = (uint64_t *)FUN_180067110(lVar5);
  puVar3 = (uint64_t *)param_1[1];
  puVar8 = puVar4;
  for (puVar6 = (uint64_t *)*param_1; puVar6 != puVar3; puVar6 = puVar6 + 1) {
    *puVar8 = *puVar6;
    puVar8 = puVar8 + 1;
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar9 = param_1[2] - lVar5 & 0xfffffffffffffff8;
    lVar7 = lVar5;
    if (0xfff < uVar9) {
      lVar7 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar7) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar5 - lVar7,uVar9 + 0x27,lVar7,param_2,unaff_RDI);
      }
    }
    free(lVar7);
  }
  *param_1 = (longlong)puVar4;
  param_1[1] = (longlong)(puVar4 + (lVar1 - lVar2 >> 3));
  param_1[2] = (longlong)(puVar4 + param_2);
  return;
}





// 函数: void FUN_180217bb0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)
void FUN_180217bb0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uVar3 + 0x27);
      }
    }
    free(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180217c40(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180217c40(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  void *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t *puVar6;
  void *puVar7;
  
  if ((ulonglong)((param_1[2] - *param_1) / 0x98) < 0x514) {
    puVar3 = (uint64_t *)
             FUN_18062b420(system_memory_pool_ptr,0x303e0,(char)param_1[3],param_4,0xfffffffffffffffe);
    puVar6 = (uint64_t *)*param_1;
    puVar1 = (uint64_t *)param_1[1];
    puVar4 = puVar3;
    if (puVar6 != puVar1) {
      lVar5 = (longlong)puVar6 - (longlong)puVar3;
      do {
        *puVar4 = &system_state_ptr;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 2) = 0;
        *puVar4 = &unknown_var_3432_ptr;
        puVar4[1] = puVar4 + 3;
        *(int32_t *)(puVar4 + 2) = 0;
        *(int8_t *)(puVar4 + 3) = 0;
        *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar5 + 0x10 + (longlong)puVar4);
        puVar2 = *(void **)(lVar5 + 8 + (longlong)puVar4);
        puVar7 = &system_buffer_ptr;
        if (puVar2 != (void *)0x0) {
          puVar7 = puVar2;
        }
        strcpy_s(puVar4[1],0x80,puVar7);
        puVar4 = puVar4 + 0x13;
      } while ((uint64_t *)(lVar5 + (longlong)puVar4) != puVar1);
      puVar1 = (uint64_t *)param_1[1];
      puVar6 = (uint64_t *)*param_1;
      if (puVar6 != puVar1) {
        do {
          (**(code **)*puVar6)(puVar6,0);
          puVar6 = puVar6 + 0x13;
        } while (puVar6 != puVar1);
        puVar6 = (uint64_t *)*param_1;
      }
    }
    if (puVar6 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)puVar4;
    param_1[2] = (longlong)(puVar3 + 0x607c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180217db0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180217db0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  void *puVar10;
  uint64_t uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar11 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar8 = *param_1;
  lVar5 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  lVar6 = (lVar2 - lVar8) / 0x26 + (lVar2 - lVar8 >> 0x3f);
  lVar6 = (lVar6 >> 2) - (lVar6 >> 0x3f);
  if (lVar6 != 0) {
    lVar5 = FUN_18062b420(system_memory_pool_ptr,lVar6 * 0x98,uVar1 & 0xff,param_4,0xfffffffffffffffe,0,0,0,
                          uVar1);
  }
  lVar6 = lVar6 * 0x98 + lVar5;
  if (lVar8 != lVar2) {
    puVar9 = (int32_t *)(lVar5 + 0x10);
    lVar12 = lVar5;
    lVar13 = lVar6;
    lVar14 = lVar6;
    do {
      *(void **)(puVar9 + -4) = &system_state_ptr;
      *(uint64_t *)(puVar9 + -2) = 0;
      *puVar9 = 0;
      *(void **)(puVar9 + -4) = &unknown_var_3432_ptr;
      *(int32_t **)(puVar9 + -2) = puVar9 + 2;
      *puVar9 = 0;
      *(int8_t *)(puVar9 + 2) = 0;
      *puVar9 = *(int32_t *)(lVar8 + 0x10);
      puVar10 = &system_buffer_ptr;
      if (*(void **)(lVar8 + 8) != (void *)0x0) {
        puVar10 = *(void **)(lVar8 + 8);
      }
      strcpy_s(*(uint64_t *)(puVar9 + -2),0x80,puVar10,param_4,uVar11,lVar12,lVar13,lVar14);
      lVar8 = lVar8 + 0x98;
      puVar9 = puVar9 + 0x26;
    } while (lVar8 != lVar2);
  }
  puVar3 = (uint64_t *)*param_1;
  *param_1 = lVar5;
  puVar4 = (uint64_t *)param_1[1];
  param_1[1] = lVar6;
  param_1[2] = lVar6;
  *(uint *)(param_1 + 3) = uVar1;
  for (puVar7 = puVar3; puVar7 != puVar4; puVar7 = puVar7 + 0x13) {
    (**(code **)*puVar7)(puVar7,0);
  }
  if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180217f60(ulonglong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180217f60(ulonglong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  void *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar6 = param_1[1];
  if (uVar6 < param_1[2]) {
    param_1[1] = uVar6 + 0x98;
    FUN_180049b30(uVar6);
    return;
  }
  uVar8 = *param_1;
  lVar10 = (longlong)(uVar6 - uVar8) / 0x98;
  puVar3 = (uint64_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_18021800d;
  }
  puVar3 = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr,lVar10 * 0x98,(char)param_1[3],param_4,0xfffffffffffffffe);
  uVar6 = param_1[1];
  uVar8 = *param_1;
LAB_18021800d:
  puVar4 = puVar3;
  if (uVar8 != uVar6) {
    lVar9 = uVar8 - (longlong)puVar3;
    do {
      *puVar4 = &system_state_ptr;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0;
      *puVar4 = &unknown_var_3432_ptr;
      puVar4[1] = puVar4 + 3;
      *(int32_t *)(puVar4 + 2) = 0;
      *(int8_t *)(puVar4 + 3) = 0;
      *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar9 + 0x10 + (longlong)puVar4);
      puVar1 = *(void **)(lVar9 + 8 + (longlong)puVar4);
      puVar7 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar7 = puVar1;
      }
      strcpy_s(puVar4[1],0x80,puVar7);
      puVar4 = puVar4 + 0x13;
    } while (lVar9 + (longlong)puVar4 != uVar6);
  }
  FUN_180049b30(puVar4,param_2);
  puVar2 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
  if (puVar5 != puVar2) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 0x13;
    } while (puVar5 != puVar2);
    puVar5 = (uint64_t *)*param_1;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *param_1 = (ulonglong)puVar3;
    param_1[1] = (ulonglong)(puVar4 + 0x13);
    param_1[2] = (ulonglong)(puVar3 + lVar10 * 0x13);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}





// 函数: void FUN_180218120(longlong *param_1)
void FUN_180218120(longlong *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 0x13;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (longlong)puVar2;
  return;
}





// 函数: void FUN_180218190(longlong param_1)
void FUN_180218190(longlong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        FUN_180211720(puVar2 + 4);
        *puVar2 = &system_data_buffer_ptr;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(int32_t *)(puVar2 + 3) = 0;
          *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_180218290(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar3 = func_0x000180218bc0(param_1,*(uint64_t *)(*(longlong *)(param_1 + 8) + uVar2 * 8),
                              param_4);
  if (lVar3 == 0) {
    FUN_18066c220(param_1 + 0x20,&param_5,*(int32_t *)(param_1 + 0x10),
                  *(int32_t *)(param_1 + 0x18),1);
    lVar3 = FUN_18062b420(system_memory_pool_ptr,0x88,*(int8_t *)(param_1 + 0x2c));
    FUN_180627ae0(lVar3,param_4);
                    // WARNING: Subroutine does not return
    memset(lVar3 + 0x20,0,0x60);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  *param_2 = lVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 0;
  return param_2;
}





// 函数: void FUN_180218550(longlong *param_1)
void FUN_180218550(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_180211720(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1802185b0(longlong *param_1)
void FUN_1802185b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180218620(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int32_t uVar5;
  bool bVar6;
  
  plVar1 = (longlong *)param_1[2];
  plVar3 = param_1;
  if (plVar1 != (longlong *)0x0) {
    do {
      if ((ulonglong)plVar1[4] < *param_2) {
        plVar1 = (longlong *)*plVar1;
      }
      else {
        plVar3 = plVar1;
        plVar1 = (longlong *)plVar1[1];
      }
    } while (plVar1 != (longlong *)0x0);
  }
  if ((plVar3 != param_1) && ((ulonglong)plVar3[4] <= *param_2)) goto FUN_180218724;
  plVar1 = (longlong *)*param_1;
  if ((plVar3 == plVar1) || (plVar3 == param_1)) {
    if ((param_1[4] != 0) && (uVar4 = *param_2, plVar3 = plVar1, (ulonglong)plVar1[4] < uVar4)) {
LAB_1802186cd:
      bVar6 = false;
      plVar1 = plVar3;
      goto LAB_1802186cf;
    }
FUN_180218739:
    bVar6 = true;
    plVar1 = param_1;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
      do {
        plVar1 = plVar3;
        bVar6 = *param_2 < (ulonglong)plVar1[4];
        if (bVar6) {
          plVar3 = (longlong *)plVar1[1];
        }
        else {
          plVar3 = (longlong *)*plVar1;
        }
      } while (plVar3 != (longlong *)0x0);
    }
    plVar3 = plVar1;
    if (bVar6) {
      if (plVar1 != (longlong *)param_1[1]) {
        plVar3 = (longlong *)func_0x00018066b9a0(plVar1);
        goto LAB_180218784;
      }
      uVar4 = *param_2;
    }
    else {
LAB_180218784:
      uVar4 = *param_2;
      if (uVar4 <= (ulonglong)plVar3[4]) {
FUN_180218724:
        return plVar3 + 5;
      }
    }
LAB_18021878d:
    if ((plVar1 != param_1) && ((ulonglong)plVar1[4] <= uVar4)) {
      uVar5 = 1;
      goto LAB_1802186de;
    }
  }
  else {
    plVar1 = (longlong *)func_0x00018066bd70();
    uVar4 = *param_2;
    if ((uVar4 <= (ulonglong)plVar3[4]) || ((ulonglong)plVar1[4] <= uVar4)) goto FUN_180218739;
    if (*plVar3 == 0) goto LAB_1802186cd;
    bVar6 = true;
LAB_1802186cf:
    if (plVar1 == (longlong *)0x0) goto FUN_180218739;
    if (!bVar6) goto LAB_18021878d;
  }
  uVar5 = 0;
LAB_1802186de:
  lVar2 = FUN_18062b420(system_memory_pool_ptr,0x30,(char)param_1[5]);
  *(ulonglong *)(lVar2 + 0x20) = *param_2;
  *(int32_t *)(lVar2 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar2,plVar1,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180218675(uint64_t param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  longlong *unaff_RDI;
  ulonglong *unaff_R14;
  bool bVar3;
  
  plVar1 = (longlong *)*unaff_RDI;
  if ((unaff_RBX == plVar1) || (unaff_RBX == unaff_RDI)) {
    if ((unaff_RDI[4] != 0) && (unaff_RBX = plVar1, (ulonglong)plVar1[4] < *param_2))
    goto LAB_1802186cf;
  }
  else {
    plVar1 = (longlong *)func_0x00018066bd70();
    if (((ulonglong)unaff_RBX[4] < *unaff_R14) && (*unaff_R14 < (ulonglong)plVar1[4])) {
      if (*unaff_RBX != 0) {
        unaff_RBX = plVar1;
      }
LAB_1802186cf:
      if (unaff_RBX != (longlong *)0x0) goto LAB_1802186de;
    }
  }
  bVar3 = true;
  unaff_RBX = unaff_RDI;
  if ((longlong *)unaff_RDI[2] != (longlong *)0x0) {
    plVar1 = (longlong *)unaff_RDI[2];
    do {
      unaff_RBX = plVar1;
      bVar3 = *unaff_R14 < (ulonglong)unaff_RBX[4];
      if (bVar3) {
        plVar1 = (longlong *)unaff_RBX[1];
      }
      else {
        plVar1 = (longlong *)*unaff_RBX;
      }
    } while (plVar1 != (longlong *)0x0);
  }
  plVar1 = unaff_RBX;
  if (bVar3) {
    if (unaff_RBX == (longlong *)unaff_RDI[1]) goto LAB_1802186de;
    plVar1 = (longlong *)func_0x00018066b9a0(unaff_RBX);
  }
  if (*unaff_R14 <= (ulonglong)plVar1[4]) {
    return plVar1 + 5;
  }
LAB_1802186de:
  lVar2 = FUN_18062b420(system_memory_pool_ptr,0x30,(char)unaff_RDI[5]);
  *(ulonglong *)(lVar2 + 0x20) = *unaff_R14;
  *(int32_t *)(lVar2 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar2,unaff_RBX);
}



longlong FUN_180218724(void)

{
  longlong unaff_RBX;
  
  return unaff_RBX + 0x28;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180218739(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *unaff_RDI;
  ulonglong *unaff_R14;
  bool bVar4;
  
  bVar4 = true;
  puVar3 = unaff_RDI;
  if ((uint64_t *)unaff_RDI[2] != (uint64_t *)0x0) {
    puVar2 = (uint64_t *)unaff_RDI[2];
    do {
      puVar3 = puVar2;
      bVar4 = *unaff_R14 < (ulonglong)puVar3[4];
      if (bVar4) {
        puVar2 = (uint64_t *)puVar3[1];
      }
      else {
        puVar2 = (uint64_t *)*puVar3;
      }
    } while (puVar2 != (uint64_t *)0x0);
  }
  puVar2 = puVar3;
  if (bVar4) {
    if (puVar3 == (uint64_t *)unaff_RDI[1]) goto LAB_18021878d;
    puVar2 = (uint64_t *)func_0x00018066b9a0(puVar3);
  }
  if (*unaff_R14 <= (ulonglong)puVar2[4]) {
    return puVar2 + 5;
  }
LAB_18021878d:
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 5));
  *(ulonglong *)(lVar1 + 0x20) = *unaff_R14;
  *(int32_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



