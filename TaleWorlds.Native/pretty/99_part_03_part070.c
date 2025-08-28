#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part070.c - 3 个函数

// 函数: void FUN_18023c450(int64_t *param_1,char param_2,int32_t param_3,int8_t *param_4)
void FUN_18023c450(int64_t *param_1,char param_2,int32_t param_3,int8_t *param_4)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  code *pcVar8;
  bool bVar9;
  int64_t *plStack_1d0;
  int8_t auStack_1c8 [16];
  code *pcStack_1b8;
  code *pcStack_1b0;
  int32_t uStack_1a8;
  int64_t *plStack_1a0;
  char cStack_198;
  int8_t auStack_190 [16];
  code *pcStack_180;
  code *pcStack_178;
  int32_t uStack_170;
  uint64_t auStack_168 [2];
  code *pcStack_158;
  void *puStack_150;
  uint64_t uStack_148;
  int8_t auStack_140 [16];
  code *pcStack_130;
  int8_t auStack_120 [16];
  code *pcStack_110;
  int8_t auStack_100 [48];
  int8_t auStack_d0 [48];
  int8_t auStack_a0 [56];
  int8_t auStack_68 [64];
  
  uStack_148 = 0xfffffffffffffffe;
  if ((*(uint *)(param_1 + 0x2c) & 0xfffffffd) == 0) {
    LOCK();
    iVar2 = (int)param_1[0x70];
    bVar9 = iVar2 == 0;
    if (bVar9) {
      *(int *)(param_1 + 0x70) = 1;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar9) {
      if (param_1[0x15] == 0) {
        FUN_18023ab60();
        param_1[0x68] = (int64_t)*(int *)(system_main_module_state + 0x224);
        LOCK();
        *(int32_t *)(param_1 + 0x70) = 2;
        UNLOCK();
        LOCK();
        *(int8_t *)((int64_t)param_1 + 900) = 1;
        UNLOCK();
      }
      else {
        pcStack_1b8 = (code *)0x0;
        pcStack_1b0 = _guard_check_icall;
        plStack_1d0 = param_1;
        if (auStack_1c8 != param_4) {
          pcVar8 = *(code **)(param_4 + 0x10);
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(auStack_1c8,param_4,1);
            pcVar8 = *(code **)(param_4 + 0x10);
          }
          pcStack_1b0 = *(code **)(param_4 + 0x18);
          pcStack_1b8 = pcVar8;
        }
        pcStack_180 = (code *)0x0;
        pcStack_178 = _guard_check_icall;
        uStack_1a8 = param_3;
        plStack_1a0 = param_1;
        cStack_198 = param_2;
        if (auStack_190 != param_4) {
          pcVar8 = *(code **)(param_4 + 0x10);
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(auStack_190,param_4,1);
            pcVar8 = *(code **)(param_4 + 0x10);
          }
          pcStack_178 = *(code **)(param_4 + 0x18);
          pcStack_180 = pcVar8;
        }
        uStack_170 = param_3;
        if ((void *)*param_1 == &unknown_var_8720_ptr) {
          LOCK();
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)((void *)*param_1 + 0x28))(param_1);
        }
        if (((*(byte *)(param_1 + 0x65) & 0x80) == 0) && (param_2 == '\0')) {
          plVar7 = *(int64_t **)(param_1[0x15] + 0x88);
          pcVar8 = *(code **)(*plVar7 + 0x70);
          lVar3 = FUN_18023cb40(auStack_a0,&plStack_1a0);
          lVar4 = FUN_18023cb40(auStack_68,lVar3);
          pcStack_158 = FUN_18023e120;
          puStack_150 = &unknown_var_2320_ptr;
          uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,system_allocation_flags);
          FUN_18023cb40(uVar5,lVar4);
          lVar6 = lVar4 + 0x10;
          auStack_168[0] = uVar5;
          if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
            (**(code **)(lVar4 + 0x20))(lVar6,0,0);
          }
          if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
            (**(code **)(lVar3 + 0x20))(lVar3 + 0x10,0,0);
          }
          uVar5 = FUN_18023c3b0(auStack_100,&plStack_1d0);
          FUN_18023dc00(auStack_140,uVar5);
          (*pcVar8)(plVar7,&system_data_1050,param_1[0x15] + 0xc,0,auStack_140,auStack_168,lVar6);
          if (pcStack_130 != (code *)0x0) {
            (*pcStack_130)(auStack_140,0,0);
          }
          if (pcStack_158 != (code *)0x0) {
            (*pcStack_158)(auStack_168,0,0);
          }
        }
        else {
          plVar7 = *(int64_t **)(param_1[0x15] + 0x88);
          pcVar8 = *(code **)(*plVar7 + 0x60);
          uVar5 = FUN_18023c3b0(auStack_d0,&plStack_1d0);
          FUN_18023dc00(auStack_120,uVar5);
          cVar1 = (*pcVar8)(plVar7,&system_data_1050,param_1[0x15] + 0xc,0,auStack_120);
          if (pcStack_110 != (code *)0x0) {
            (*pcStack_110)(auStack_120,0,0);
          }
          if (cVar1 == '\0') {
            FUN_18023c860(&plStack_1a0);
          }
        }
        if (pcStack_180 != (code *)0x0) {
          (*pcStack_180)(auStack_190,0,0);
        }
        if (pcStack_1b8 != (code *)0x0) {
          (*pcStack_1b8)(auStack_1c8,0,0);
        }
      }
    }
    else if ((iVar2 == 1) && (param_2 != '\0')) {
      while (uVar5 = system_context_ptr, (int)param_1[0x70] == 1) {
        lVar6 = FUN_18005e890(system_context_ptr);
        if (lVar6 != 0) {
          plVar7 = (int64_t *)FUN_18005e890(uVar5);
          (**(code **)(*plVar7 + 0x20))(plVar7,0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023c860(uint64_t *param_1)
void FUN_18023c860(uint64_t *param_1)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t ****pppplVar5;
  code *pcVar6;
  int64_t ***ppplStackX_8;
  int64_t ***ppplStackX_10;
  int64_t ***ppplStackX_18;
  int64_t ***ppplStackX_20;
  int64_t **pplStack_b8;
  int64_t *aplStack_b0 [2];
  code *pcStack_a0;
  code *pcStack_98;
  int32_t uStack_90;
  int64_t **pplStack_88;
  int64_t **applStack_80 [2];
  code *pcStack_70;
  code *pcStack_68;
  int32_t uStack_60;
  int64_t *aplStack_58 [4];
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pplStack_b8 = (int64_t **)*param_1;
  ppplStackX_8 = (int64_t ***)aplStack_b0;
  pcStack_a0 = (code *)0x0;
  pcStack_98 = _guard_check_icall;
  if (aplStack_b0 != (int64_t **)(param_1 + 2)) {
    pcVar6 = (code *)param_1[4];
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(aplStack_b0,param_1 + 2,1);
      pcVar6 = (code *)param_1[4];
    }
    pcStack_98 = (code *)param_1[5];
    pcStack_a0 = pcVar6;
  }
  uStack_90 = *(int32_t *)(param_1 + 6);
  iVar2 = _Thrd_id();
  if (iVar2 == *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48)) {
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,3);
    ppplStackX_8 = (int64_t ***)aplStack_58;
    ppplStackX_10 = &pplStack_88;
    pplStack_88 = pplStack_b8;
    ppplStackX_18 = applStack_80;
    pcStack_70 = (code *)0x0;
    pcStack_68 = _guard_check_icall;
    if (pcStack_a0 != (code *)0x0) {
      (*pcStack_a0)(applStack_80,aplStack_b0,1);
    }
    pcStack_70 = pcStack_a0;
    pcStack_68 = pcStack_98;
    uStack_60 = uStack_90;
    uVar4 = FUN_18023db30(aplStack_58,&pplStack_88);
    pppplVar5 = (int64_t ****)FUN_18005c2a0(uVar3,uVar4);
    ppplStackX_8 = (int64_t ***)pppplVar5;
    if (pppplVar5 != (int64_t ****)0x0) {
      (*(code *)(*pppplVar5)[5])(pppplVar5);
    }
    (*(code *)(*pppplVar5)[0xc])(pppplVar5);
  }
  else {
    if (*(char *)(param_1 + 1) == '\0') {
      uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,3);
      ppplStackX_8 = (int64_t ***)aplStack_58;
      ppplStackX_10 = &pplStack_88;
      uVar4 = FUN_18023c3b0(&pplStack_88,&pplStack_b8);
      uVar4 = FUN_18023db30(aplStack_58,uVar4);
      pppplVar5 = (int64_t ****)FUN_18005c2a0(uVar3,uVar4);
      ppplStackX_18 = (int64_t ***)pppplVar5;
      if (pppplVar5 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      lVar1 = system_context_ptr;
      ppplStackX_10 = (int64_t ***)&ppplStackX_8;
      ppplStackX_8 = (int64_t ***)pppplVar5;
      if (pppplVar5 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      FUN_18005e370(lVar1,&ppplStackX_8);
    }
    else {
      uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      ppplStackX_8 = (int64_t ***)aplStack_58;
      ppplStackX_10 = &pplStack_88;
      uVar4 = FUN_18023c3b0(&pplStack_88,&pplStack_b8);
      uVar4 = FUN_18023db30(aplStack_58,uVar4);
      pppplVar5 = (int64_t ****)FUN_1800ed900(uVar3,uVar4);
      ppplStackX_18 = (int64_t ***)pppplVar5;
      if (pppplVar5 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      lVar1 = system_context_ptr;
      ppplStackX_10 = (int64_t ***)&ppplStackX_8;
      ppplStackX_8 = (int64_t ***)pppplVar5;
      if (pppplVar5 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      FUN_18005e370(lVar1,&ppplStackX_8);
      lVar1 = system_context_ptr;
      ppplStackX_20 = (int64_t ***)&ppplStackX_10;
      ppplStackX_10 = (int64_t ***)pppplVar5;
      if (pppplVar5 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      FUN_18005e6a0(lVar1,&ppplStackX_10,0);
    }
    if (pppplVar5 == (int64_t ****)0x0) goto LAB_18023cb0e;
  }
  (*(code *)(*pppplVar5)[7])(pppplVar5);
LAB_18023cb0e:
  ppplStackX_8 = (int64_t ***)aplStack_b0;
  if (pcStack_a0 != (code *)0x0) {
    (*pcStack_a0)(aplStack_b0,0,0);
  }
  return;
}



uint64_t *
FUN_18023cb40(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  
  *param_1 = *param_2;
  *(int8_t *)(param_1 + 1) = *(int8_t *)(param_2 + 1);
  param_1[4] = 0;
  param_1[5] = _guard_check_icall;
  if (param_1 + 2 != param_2 + 2) {
    pcVar1 = (code *)param_2[4];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 2,param_2 + 2,1,param_4,0xfffffffffffffffe);
      pcVar1 = (code *)param_2[4];
    }
    param_1[4] = pcVar1;
    param_1[5] = param_2[5];
  }
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 6);
  return param_1;
}



int8_t FUN_18023cbe0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int8_t uVar6;
  int64_t alStackX_10 [3];
  int64_t *aplStack_30 [2];
  code *pcStack_20;
  code *pcStack_18;
  
  uVar5 = *(uint64_t *)(param_1 + 0x2ec);
  *(uint64_t *)(param_2 + 0x14) = *(uint64_t *)(param_1 + 0x2e4);
  *(uint64_t *)(param_2 + 0x1c) = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0x2fc);
  *(uint64_t *)(param_2 + 0x24) = *(uint64_t *)(param_1 + 0x2f4);
  *(uint64_t *)(param_2 + 0x2c) = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0x30c);
  *(uint64_t *)(param_2 + 0x34) = *(uint64_t *)(param_1 + 0x304);
  *(uint64_t *)(param_2 + 0x3c) = uVar5;
  uVar5 = *(uint64_t *)(param_1 + 0x31c);
  *(uint64_t *)(param_2 + 0x44) = *(uint64_t *)(param_1 + 0x314);
  *(uint64_t *)(param_2 + 0x4c) = uVar5;
  uVar2 = *(int32_t *)(param_1 + 0x328);
  uVar3 = *(int32_t *)(param_1 + 0x32c);
  uVar4 = *(int32_t *)(param_1 + 0x330);
  *(int32_t *)(param_2 + 0x54) = *(int32_t *)(param_1 + 0x324);
  *(int32_t *)(param_2 + 0x58) = uVar2;
  *(int32_t *)(param_2 + 0x5c) = uVar3;
  *(int32_t *)(param_2 + 0x60) = uVar4;
  *(uint64_t *)(param_2 + 100) = *(uint64_t *)(param_1 + 0x334);
  plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xa8) + 0x88);
  pcStack_20 = (code *)&unknown_var_2256_ptr;
  pcStack_18 = FUN_18023e030;
  aplStack_30[0] = alStackX_10;
  alStackX_10[0] = param_2;
  uVar6 = (**(code **)(*plVar1 + 0x60))
                    (plVar1,&system_data_1050,*(int64_t *)(param_1 + 0xa8) + 0xc,0,aplStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(aplStack_30,0,0);
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023ccc0(int64_t *param_1)
void FUN_18023ccc0(int64_t *param_1)

{
  short sVar1;
  int iVar2;
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t **pplVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint uVar17;
  int8_t auStack_4e8 [32];
  char cStack_4c8;
  int64_t ***ppplStack_4c0;
  int iStack_4b8;
  int64_t **pplStack_4b0;
  int64_t **pplStack_4a8;
  int64_t *plStack_4a0;
  int64_t *plStack_498;
  int64_t *plStack_490;
  int64_t *plStack_488;
  int64_t *plStack_480;
  int64_t *plStack_478;
  uint64_t uStack_470;
  uint64_t uStack_468;
  void *puStack_460;
  int64_t lStack_458;
  int32_t uStack_448;
  int32_t uStack_440;
  int32_t uStack_43c;
  int32_t uStack_438;
  int32_t uStack_434;
  void *puStack_430;
  code *pcStack_428;
  int64_t *aplStack_420 [2];
  void *puStack_410;
  void *puStack_408;
  uint64_t uStack_400;
  int64_t *plStack_3f8;
  int64_t **pplStack_3f0;
  int64_t *plStack_3e8;
  int64_t *plStack_3e0;
  int64_t *plStack_3d8;
  int64_t *plStack_3c8;
  int8_t *puStack_3c0;
  int32_t uStack_3b8;
  int8_t auStack_3b0 [128];
  int32_t uStack_330;
  int64_t lStack_328;
  int64_t *plStack_320;
  int64_t *plStack_2e8;
  int8_t *puStack_2e0;
  int32_t uStack_2d8;
  int8_t auStack_2d0 [128];
  int32_t uStack_250;
  int64_t lStack_248;
  int64_t *plStack_240;
  int64_t *plStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [128];
  int32_t uStack_170;
  uint64_t uStack_168;
  int64_t *plStack_128;
  int8_t *puStack_120;
  int32_t uStack_118;
  int8_t auStack_110 [128];
  int32_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_48;
  
  lVar12 = *(int64_t *)(param_1[0x15] + 0x20);
  *(int16_t *)((int64_t)param_1 + 0x332) = *(int16_t *)(lVar12 + 0x34);
  *(uint *)(param_1 + 0x65) = *(uint *)(lVar12 + 0x18) | *(uint *)(lVar12 + 0x24);
  *(int32_t *)((int64_t)param_1 + 0x324) = *(int32_t *)(lVar12 + 0x20);
  *(int16_t *)((int64_t)param_1 + 0x32c) = *(int16_t *)(lVar12 + 0x28);
  *(int16_t *)((int64_t)param_1 + 0x32e) = *(int16_t *)(lVar12 + 0x2c);
  *(int16_t *)(param_1 + 0x66) = *(int16_t *)(lVar12 + 0x30);
  *(int8_t *)((int64_t)param_1 + 0x334) = *(int8_t *)(lVar12 + 0x37);
  *(int8_t *)((int64_t)param_1 + 0x335) = *(int8_t *)(lVar12 + 0x36);
  *(int8_t *)((int64_t)param_1 + 0x336) = *(int8_t *)(lVar12 + 0x38);
  if ((*(char *)(lVar12 + 0x1c) == '\0') && ((*(uint *)(lVar12 + 0x24) & 0x40000000) == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | bVar5;
  FUN_180627be0(param_1 + 0x71);
  param_1[0x4f] = *(int64_t *)(lVar12 + 0x68);
  *(int32_t *)((int64_t)param_1 + 0x35c) = 0;
  if (((*(uint *)(lVar12 + 0x24) & 0x200000) != 0) &&
     (((sVar1 = *(short *)((int64_t)param_1 + 0x32c),
       sVar1 != *(short *)((int64_t)param_1 + 0x32e) ||
       ((((sVar1 != 0x40 && (sVar1 != 0x200)) && (sVar1 != 0x400)) &&
        ((sVar1 != 0x800 && (sVar1 != 0x1000)))))) ||
      ((*(int *)((int64_t)param_1 + 0x324) != 0xe &&
       (2 < *(int *)((int64_t)param_1 + 0x324) - 0x12U)))))) {
    FUN_180627020(&unknown_var_8256_ptr);
  }
  uStack_400 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4e8;
  cStack_4c8 = '\0';
  plStack_478 = param_1 + 0x44;
  iVar6 = _Mtx_lock();
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  puVar14 = (uint64_t *)param_1[0x3e];
  if (puVar14 == (uint64_t *)0x0) {
    if ((int)param_1[0x70] == 2) {
      puVar14 = (uint64_t *)0x0;
      if (((int)param_1[0x2c] - 4U & 0xfffffffd) == 0) {
        lVar12 = system_main_module_state;
        puVar13 = puVar14;
        cVar4 = '\0';
        if (*(short *)((int64_t)param_1 + 0x332) != 0) {
          do {
            bVar5 = *(byte *)((int64_t)param_1 + 0x335);
            iVar6 = (int)puVar13;
            puVar13 = puVar14;
            if (bVar5 != 0) {
              do {
                lVar3 = param_1[0x3b];
                iVar7 = (int)puVar13;
                puVar13 = puVar14;
                if (lVar3 != 0) {
                  if (lVar12 != 0) {
                    param_1[0x68] = (int64_t)*(int *)(lVar12 + 0x224);
                    bVar5 = *(byte *)((int64_t)param_1 + 0x335);
                  }
                  puVar13 = (uint64_t *)
                            ((int64_t)(int)((uint)bVar5 * iVar6 + iVar7) * 0x10 + lVar3);
                }
                if (puVar13 != (uint64_t *)0x0) {
                  puVar13 = puVar14;
                  if (lVar3 != 0) {
                    if (lVar12 != 0) {
                      param_1[0x68] = (int64_t)*(int *)(lVar12 + 0x224);
                    }
                    puVar13 = (uint64_t *)
                              ((int64_t)(int)((uint)bVar5 * iVar6 + iVar7) * 0x10 + lVar3);
                  }
                  if (system_data_ecee == '\0') {
                    if (puVar13[1] != 0) {
                      iVar2 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
                      iVar8 = _Thrd_id();
                      if (iVar8 == iVar2) {
                        lVar12 = system_main_module_state;
                        if ((int64_t *)puVar13[1] != (int64_t *)0x0) {
                          (**(code **)(*(int64_t *)puVar13[1] + 0x10))();
                          lVar12 = system_main_module_state;
                        }
                      }
                      else {
                        ppplStack_4c0 = (int64_t ***)&plStack_128;
                        plStack_128 = (int64_t *)&unknown_var_3432_ptr;
                        puStack_120 = auStack_110;
                        uStack_118 = 0;
                        auStack_110[0] = 0;
                        uStack_90 = 0x13;
                        uStack_88 = puVar13[1];
                        uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
                        plVar10 = (int64_t *)FUN_18005ce30(uVar9,&plStack_128);
                        plStack_3e8 = plVar10;
                        if (plVar10 != (int64_t *)0x0) {
                          (**(code **)(*plVar10 + 0x28))(plVar10);
                        }
                        lVar12 = system_context_ptr;
                        ppplStack_4c0 = (int64_t ***)&plStack_498;
                        plStack_498 = plVar10;
                        if (plVar10 != (int64_t *)0x0) {
                          (**(code **)(*plVar10 + 0x28))(plVar10);
                        }
                        FUN_18005e370(lVar12,&plStack_498);
                        if (plVar10 != (int64_t *)0x0) {
                          (**(code **)(*plVar10 + 0x38))(plVar10);
                        }
                        ppplStack_4c0 = (int64_t ***)&plStack_128;
                        plStack_128 = (int64_t *)&system_state_ptr;
                        lVar12 = system_main_module_state;
                      }
                    }
                    *puVar13 = 0;
                    puVar13[1] = 0;
                    bVar5 = *(byte *)((int64_t)param_1 + 0x335);
                  }
                }
                puVar13 = (uint64_t *)(uint64_t)(iVar7 + 1U);
              } while ((int)(iVar7 + 1U) < (int)(uint)bVar5);
            }
            puVar13 = (uint64_t *)(uint64_t)(iVar6 + 1U);
            cVar4 = cStack_4c8;
          } while ((int)(iVar6 + 1U) < (int)(uint)*(ushort *)((int64_t)param_1 + 0x332));
        }
      }
      else {
        cVar4 = '\0';
        if ((((int)param_1[0x2c] - 3U & 0xfffffffd) == 0) &&
           (iStack_4b8 = 0, lVar12 = system_main_module_state, puVar13 = puVar14, puVar16 = puVar14,
           *(short *)((int64_t)param_1 + 0x332) != 0)) {
          do {
            do {
              if (param_1[0x3c] != 0) {
                if (lVar12 != 0) {
                  param_1[0x68] = (int64_t)*(int *)(lVar12 + 0x224);
                }
                puVar15 = (uint64_t *)
                          ((int64_t)((int)puVar13 + (int)puVar16) * 0x10 + param_1[0x3c]);
                if (puVar15 != (uint64_t *)0x0) {
                  if (lVar12 != 0) {
                    param_1[0x68] = (int64_t)*(int *)(lVar12 + 0x224);
                  }
                  if (system_data_ecee == '\0') {
                    iVar6 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
                    iVar7 = _Thrd_id();
                    if (iVar7 == iVar6) {
                      if ((int64_t *)puVar15[1] != (int64_t *)0x0) {
                        (**(code **)(*(int64_t *)puVar15[1] + 0x10))();
                        puVar15[1] = 0;
                      }
                    }
                    else {
                      pplStack_4b0 = &plStack_208;
                      plStack_208 = (int64_t *)&unknown_var_3432_ptr;
                      puStack_200 = auStack_1f0;
                      uStack_1f8 = 0;
                      auStack_1f0[0] = 0;
                      uStack_170 = 0x13;
                      uStack_168 = puVar15[1];
                      uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
                      pplVar11 = (int64_t **)FUN_18005ce30(uVar9,&plStack_208);
                      pplStack_3f0 = pplVar11;
                      if (pplVar11 != (int64_t **)0x0) {
                        (*(code *)(*pplVar11)[5])(pplVar11);
                      }
                      lVar12 = system_context_ptr;
                      ppplStack_4c0 = &pplStack_4b0;
                      pplStack_4b0 = pplVar11;
                      if (pplVar11 != (int64_t **)0x0) {
                        (*(code *)(*pplVar11)[5])(pplVar11);
                      }
                      FUN_18005e370(lVar12,&pplStack_4b0);
                      puVar15[1] = 0;
                      if (pplVar11 != (int64_t **)0x0) {
                        (*(code *)(*pplVar11)[7])(pplVar11);
                      }
                      ppplStack_4c0 = (int64_t ***)&plStack_208;
                      plStack_208 = (int64_t *)&system_state_ptr;
                    }
                    *puVar15 = 0;
                    puVar15[1] = 0;
                    lVar12 = system_main_module_state;
                  }
                }
              }
              uVar17 = (int)puVar13 + 1;
              puVar13 = (uint64_t *)(uint64_t)uVar17;
            } while ((int)uVar17 < 2);
            iStack_4b8 = iStack_4b8 + 1;
            puVar13 = puVar14;
            cVar4 = cStack_4c8;
            puVar16 = (uint64_t *)(uint64_t)((int)puVar16 + 2);
          } while (iStack_4b8 < (int)(uint)*(ushort *)((int64_t)param_1 + 0x332));
        }
      }
      if (param_1[0x3b] != 0) {
        ppplStack_4c0 = (int64_t ***)&plStack_3c8;
        plStack_3c8 = (int64_t *)&unknown_var_3432_ptr;
        puStack_3c0 = auStack_3b0;
        uStack_3b8 = 0;
        auStack_3b0[0] = 0;
        uStack_330 = 0x2b;
        lStack_328 = param_1[0x3b];
        plStack_320 = param_1;
        if (cVar4 != '\0') {
          plStack_320 = (int64_t *)0x0;
        }
        uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        plVar10 = (int64_t *)FUN_18005ce30(uVar9,&plStack_3c8);
        plStack_3e0 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        iVar6 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
        iVar7 = _Thrd_id();
        lVar12 = system_context_ptr;
        if (iVar7 == iVar6) {
          (**(code **)(*plVar10 + 0x60))(plVar10);
        }
        else {
          ppplStack_4c0 = (int64_t ***)&plStack_490;
          plStack_490 = plVar10;
          if (plVar10 != (int64_t *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10);
          }
          FUN_18005e370(lVar12,&plStack_490);
        }
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        ppplStack_4c0 = (int64_t ***)&plStack_3c8;
        plStack_3c8 = (int64_t *)&system_state_ptr;
      }
      if (param_1[0x3c] != 0) {
        ppplStack_4c0 = (int64_t ***)&plStack_2e8;
        plStack_2e8 = (int64_t *)&unknown_var_3432_ptr;
        puStack_2e0 = auStack_2d0;
        uStack_2d8 = 0;
        auStack_2d0[0] = 0;
        uStack_250 = 0x2c;
        lStack_248 = param_1[0x3c];
        plStack_240 = param_1;
        if (cVar4 != '\0') {
          plStack_240 = (int64_t *)0x0;
        }
        uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        plVar10 = (int64_t *)FUN_18005ce30(uVar9,&plStack_2e8);
        plStack_3d8 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        iVar6 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
        iVar7 = _Thrd_id();
        lVar12 = system_context_ptr;
        if (iVar7 == iVar6) {
          (**(code **)(*plVar10 + 0x60))(plVar10);
        }
        else {
          ppplStack_4c0 = (int64_t ***)&plStack_488;
          plStack_488 = plVar10;
          if (plVar10 != (int64_t *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10);
          }
          FUN_18005e370(lVar12,&plStack_488);
        }
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        ppplStack_4c0 = (int64_t ***)&plStack_2e8;
        plStack_2e8 = (int64_t *)&system_state_ptr;
      }
      FUN_1802a01a0(param_1 + 0x2d);
      FUN_1802a01a0(param_1 + 0x34);
      FUN_1802a0bb0(param_1 + 0x3f);
      if (*(int *)((int64_t)param_1 + 0x36c) != 0) {
        *(int32_t *)((int64_t)param_1 + 0x36c) = 1;
        pplStack_4a8 = (int64_t **)param_1[0x6e];
        param_1[0x6e] = 0;
        if (pplStack_4a8 != (int64_t **)0x0) {
          (*(code *)(*pplStack_4a8)[7])();
        }
      }
      if (cVar4 == '\0') {
        FUN_1806279c0(&puStack_460,param_1 + 2);
        uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
        ppplStack_4c0 = (int64_t ***)aplStack_420;
        puStack_410 = &unknown_var_4672_ptr;
        puStack_408 = &unknown_var_4512_ptr;
        aplStack_420[0] = param_1;
        plVar10 = (int64_t *)FUN_18006b640(uVar9,aplStack_420);
        uStack_470 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        LOCK();
        *(int8_t *)(param_1 + 0x19) = 1;
        UNLOCK();
        iVar6 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
        iVar7 = _Thrd_id();
        lVar12 = system_context_ptr;
        if (iVar7 == iVar6) {
          (**(code **)(*plVar10 + 0x60))(plVar10);
        }
        else {
          ppplStack_4c0 = (int64_t ***)&plStack_480;
          plStack_480 = plVar10;
          if (plVar10 != (int64_t *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10);
          }
          FUN_18005e370(lVar12,&plStack_480);
        }
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        puStack_460 = &system_data_buffer_ptr;
        if (lStack_458 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_458 = 0;
        uStack_448 = 0;
        puStack_460 = &system_state_ptr;
      }
      LOCK();
      *(int32_t *)(param_1 + 0x70) = 0;
      UNLOCK();
    }
    else if (*(char *)((int64_t)param_1 + 0xc9) != '\0') {
      if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_1[0x3b] = 0;
      if (param_1[0x3c] != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_1[0x3c] = 0;
    }
  }
  else {
    plVar10 = (int64_t *)puVar14[1];
    iVar6 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
    iVar7 = _Thrd_id();
    if (iVar7 == iVar6) {
      cVar4 = FUN_1802e5280(plVar10,puVar14);
      if (cVar4 != '\0') {
        (**(code **)(*(int64_t *)plVar10[0x29] + 0x168))((int64_t *)plVar10[0x29],*puVar14);
        *puVar14 = 0;
        FUN_1802e5110(puVar14);
        param_1[0x3e] = 0;
        LOCK();
        *(int32_t *)(param_1 + 0x70) = 0;
        UNLOCK();
        goto LAB_18023ba58;
      }
    }
    else {
      uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pplStack_4a8 = (int64_t **)&uStack_440;
      puStack_430 = &unknown_var_6656_ptr;
      pcStack_428 = FUN_1802e51e0;
      uStack_470._0_4_ = SUB84(plVar10,0);
      uStack_470._4_4_ = (int32_t)((uint64_t)plVar10 >> 0x20);
      uStack_468._0_4_ = SUB84(puVar14,0);
      uStack_468._4_4_ = (int32_t)((uint64_t)puVar14 >> 0x20);
      uStack_440 = (int32_t)uStack_470;
      uStack_43c = uStack_470._4_4_;
      uStack_438 = (int32_t)uStack_468;
      uStack_434 = uStack_468._4_4_;
      uStack_470 = plVar10;
      uStack_468 = puVar14;
      plVar10 = (int64_t *)FUN_18006b640(uVar9,&uStack_440);
      plStack_3f8 = plVar10;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10);
      }
      lVar12 = system_context_ptr;
      pplStack_4a8 = &plStack_4a0;
      plStack_4a0 = plVar10;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10);
      }
      FUN_18005e370(lVar12,&plStack_4a0);
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10);
      }
    }
    param_1[0x3e] = 0;
    LOCK();
    *(int32_t *)(param_1 + 0x70) = 0;
    UNLOCK();
  }
LAB_18023ba58:
  iVar6 = _Mtx_unlock(plStack_478);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_4e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




