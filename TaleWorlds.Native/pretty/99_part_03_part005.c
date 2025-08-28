#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part005.c - 4 个函数

// 函数: void FUN_1801c92a0(longlong param_1)
void FUN_1801c92a0(longlong param_1)

{
  *(uint64_t *)(param_1 + 0x80) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0x80) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x60) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(int32_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x60) = &system_state_ptr;
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x38))();
  }
  *(uint64_t *)(param_1 + 0x28) = &system_data_buffer_ptr;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &system_state_ptr;
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
  }
  return;
}



longlong FUN_1801c9340(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_18009e8e0();
  FUN_180627ae0(param_1 + 0x60,param_2 + 0x60,param_3,param_4,uVar1);
  FUN_180627ae0(param_1 + 0x80,param_2 + 0x80);
  *(int32_t *)(param_1 + 0xa0) = *(int32_t *)(param_2 + 0xa0);
  *(int32_t *)(param_1 + 0xa4) = *(int32_t *)(param_2 + 0xa4);
  *(int32_t *)(param_1 + 0xa8) = *(int32_t *)(param_2 + 0xa8);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c93c0(void)
void FUN_1801c93c0(void)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  void *puVar6;
  int iVar7;
  int8_t auStack_388 [32];
  int32_t uStack_368;
  uint64_t uStack_360;
  longlong lStack_358;
  int32_t uStack_350;
  int32_t uStack_348;
  uint64_t uStack_340;
  void **ppuStack_338;
  void *puStack_328;
  int8_t *puStack_320;
  uint uStack_318;
  uint64_t uStack_310;
  int32_t uStack_308;
  uint64_t uStack_300;
  void *puStack_2f8;
  void *puStack_2f0;
  int iStack_2e8;
  uint8_t auStack_2e0 [16];
  void *puStack_2d0;
  int8_t *puStack_2c8;
  int32_t uStack_2c0;
  int8_t auStack_2b8 [96];
  void *apuStack_258 [68];
  ulonglong uStack_38;
  
  lVar1 = system_global_data_ptr;
  uStack_300 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_388;
  uStack_308 = 0;
  puVar4 = (uint64_t *)(system_global_data_ptr + 0xa8);
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x120,8,3);
  uVar2 = FUN_18029a3c0(uVar2);
  *puVar4 = uVar2;
  puStack_2f8 = &system_config_ptr;
  puStack_2f0 = auStack_2e0;
  auStack_2e0[0] = 0;
  iStack_2e8 = 6;
  strcpy_s(auStack_2e0,0x10,&unknown_var_2588_ptr);
  uStack_308 = 1;
  puStack_328 = &system_data_buffer_ptr;
  uStack_310 = 0;
  puStack_320 = (int8_t *)0x0;
  uStack_318 = 0;
  FUN_1806277c0(&puStack_328,iStack_2e8);
  if (0 < iStack_2e8) {
    puVar6 = &system_buffer_ptr;
    if (puStack_2f0 != (void *)0x0) {
      puVar6 = puStack_2f0;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_320,puVar6,(longlong)(iStack_2e8 + 1));
  }
  if (puStack_2f0 != (void *)0x0) {
    uStack_318 = 0;
    if (puStack_320 != (int8_t *)0x0) {
      *puStack_320 = 0;
    }
  }
  uStack_308 = 0;
  puStack_2f8 = &system_state_ptr;
  iVar7 = uStack_318 + 0x1b;
  FUN_1806277c0(&puStack_328,iVar7);
  puVar5 = (int32_t *)(puStack_320 + uStack_318);
  *puVar5 = 0x64616853;
  puVar5[1] = 0x2f737265;
  puVar5[2] = 0x72756f53;
  puVar5[3] = 0x2f736563;
  *(uint64_t *)(puVar5 + 4) = 0x6b6361626c6c6166;
  puVar5[6] = 0x73722e;
  uStack_318 = iVar7;
  lVar3 = FUN_180624440(apuStack_258,&puStack_328);
  puVar6 = &system_buffer_ptr;
  if (*(void **)(lVar3 + 8) != (void *)0x0) {
    puVar6 = *(void **)(lVar3 + 8);
  }
  (**(code **)(puStack_328 + 0x10))(&puStack_328,puVar6);
  apuStack_258[0] = &system_state_ptr;
  if (*(longlong *)(lVar1 + 0x88) == 0) {
    puStack_2d0 = &unknown_var_672_ptr;
    puStack_2c8 = auStack_2b8;
    auStack_2b8[0] = 0;
    uStack_2c0 = 0;
    strcpy_s(auStack_2b8,0x20,&system_buffer_ptr);
    lStack_358 = lVar1 + 0x90;
    ppuStack_338 = &puStack_2d0;
    uStack_340 = 0;
    uStack_348 = 0;
    uStack_350 = 0xffffffff;
    uStack_360 = 0;
    uStack_368 = 0;
    uVar2 = FUN_1800a6420(system_message_buffer,&puStack_328,&unknown_var_632_ptr,0);
    *(uint64_t *)(lVar1 + 0x88) = uVar2;
    puStack_2d0 = &system_state_ptr;
  }
  puVar4 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0xb8,8,0x11);
  *(int32_t *)(puVar4 + 8) = 0x7f0000;
  puVar4[6] = 0xffffffffffffffff;
  puVar4[7] = 0xffffffffffffffff;
  puVar4[5] = 0xdeadbeef;
  *puVar4 = 0xffffffffffffffff;
  puVar4[1] = 0;
  *(int32_t *)(puVar4 + 2) = 0;
  puVar4[3] = 0;
  *(int32_t *)(puVar4 + 4) = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(puVar4 + 9,0,0x70);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801c9940(longlong param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar5 = system_global_data_ptr;
  *(int8_t *)(param_1 + 0x310) = 0;
  *(int8_t *)(*(longlong *)(param_1 + 0x50) + 0x358) = 0;
  while (uVar1 = system_context_ptr, *(int *)(lVar5 + 0x30c) != 0) {
    lVar2 = FUN_18005e890(system_context_ptr);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_18005e890(uVar1);
      (**(code **)(*plVar3 + 0x20))(plVar3,0);
    }
  }
  lVar5 = system_resource_state + 0xac0;
  *(int8_t *)(param_1 + 0x310) = 1;
  FUN_1802ab3f0(lVar5);
  FUN_1801c7fd0();
  lVar5 = system_operation_state;
  uVar6 = 0;
  uVar4 = *(longlong *)(system_operation_state + 0x1870) - *(longlong *)(system_operation_state + 0x1868) >> 3;
  uVar8 = uVar6;
  if (uVar4 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar6 + *(longlong *)(lVar5 + 0x1868)) + 0xb0))();
      uVar6 = uVar6 + 8;
      uVar7 = (int)uVar8 + 1;
      uVar4 = (ulonglong)(int)uVar7;
      uVar8 = (ulonglong)uVar7;
    } while (uVar4 < (ulonglong)(*(longlong *)(lVar5 + 0x1870) - *(longlong *)(lVar5 + 0x1868) >> 3)
            );
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c9a40(void)
void FUN_1801c9a40(void)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = system_global_data_ptr;
  lVar7 = 0;
  do {
    lVar6 = *(longlong *)(lVar3 + 0x50) + 0x10 + lVar7;
    lVar5 = lVar6 + 0x30;
    for (lVar4 = *(longlong *)(lVar6 + 0x38); lVar4 != lVar5; lVar4 = func_0x00018066bd70(lVar4)) {
      plVar1 = *(longlong **)(lVar4 + 0x28);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar1 = 0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar1);
      }
      *(uint64_t *)(lVar4 + 0x28) = 0;
    }
    puVar2 = *(uint64_t **)(lVar6 + 0x40);
    if (puVar2 != (uint64_t *)0x0) {
      FUN_18004b790(lVar5,*puVar2);
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
    *(longlong *)lVar5 = lVar5;
    *(longlong *)(lVar6 + 0x38) = lVar5;
    *(uint64_t *)(lVar6 + 0x40) = 0;
    *(int8_t *)(lVar6 + 0x48) = 0;
    *(uint64_t *)(lVar6 + 0x50) = 0;
    for (lVar5 = *(longlong *)(lVar6 + 8); lVar5 != lVar6; lVar5 = func_0x00018066bd70(lVar5)) {
      plVar1 = *(longlong **)(lVar5 + 0x28);
      switch(*(int32_t *)(lVar6 + 0x6c)) {
      case 0:
        lVar4 = *plVar1;
        break;
      case 1:
        lVar4 = plVar1[1];
        break;
      case 2:
        lVar4 = plVar1[4];
        break;
      case 3:
        lVar4 = plVar1[3];
        break;
      case 4:
        lVar4 = plVar1[2];
        break;
      case 5:
        lVar4 = plVar1[5];
        break;
      default:
        goto LAB_1801c9b5f;
      }
      if ((lVar4 != 0) && (*(longlong **)(lVar4 + 0x18) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x10))();
      }
LAB_1801c9b5f:
    }
    FUN_1800572d0(lVar6);
    lVar7 = lVar7 + 0x70;
    *(int32_t *)(lVar6 + 0x68) = 0xffffffff;
    if (0x29f < lVar7) {
      return;
    }
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001801ca224)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c9bd0(longlong ****param_1,uint64_t param_2)
void FUN_1801c9bd0(longlong ****param_1,uint64_t param_2)

{
  int8_t auVar1 [16];
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  longlong ***ppplVar5;
  int iVar6;
  ulonglong uVar7;
  longlong ****pppplVar8;
  longlong *****ppppplVar9;
  byte *pbVar10;
  uint64_t *puVar11;
  uint uVar12;
  longlong *****ppppplVar13;
  longlong ****pppplVar14;
  void *puVar15;
  uint uVar16;
  longlong *plVar17;
  int8_t *puVar18;
  longlong *****ppppplVar19;
  longlong lVar20;
  uint *puVar21;
  int8_t *puVar22;
  void *puVar23;
  ulonglong uVar24;
  int8_t (*pauVar25) [16];
  uint64_t uVar26;
  uint64_t *puVar27;
  longlong lVar28;
  longlong ****pppplStackX_8;
  uint64_t uStackX_10;
  longlong ****pppplStackX_18;
  longlong ****pppplStackX_20;
  void *puStack_238;
  int8_t *puStack_230;
  int32_t uStack_228;
  ulonglong uStack_220;
  void *puStack_218;
  void *puStack_210;
  int32_t uStack_208;
  ulonglong uStack_200;
  longlong ****pppplStack_1f8;
  longlong ****pppplStack_1f0;
  longlong ****pppplStack_1e8;
  longlong ****pppplStack_1e0;
  uint64_t uStack_1d8;
  longlong lStack_1d0;
  int32_t uStack_1c8;
  int32_t uStack_1c0;
  longlong ****pppplStack_1b8;
  longlong *plStack_1b0;
  longlong ***ppplStack_1a8;
  int16_t auStack_1a0 [2];
  int32_t uStack_19c;
  uint64_t uStack_198;
  uint64_t uStack_190;
  longlong lStack_188;
  longlong lStack_180;
  int8_t auStack_178 [16];
  void *puStack_168;
  int8_t auStack_160 [8];
  int8_t auStack_158 [152];
  longlong **applStack_c0 [13];
  int8_t auStack_58 [24];
  
  uStack_190 = 0xfffffffffffffffe;
  uStack_1c0 = 0;
  uStack_1c8 = 3;
  pppplStack_1f0 = (longlong ****)&pppplStack_1f0;
  pppplStack_1e8 = (longlong ****)&pppplStack_1f0;
  pppplStack_1e0 = (longlong ****)0x0;
  uStack_1d8 = 0;
  lStack_1d0 = 0;
  ppplStack_1a8 = (longlong ***)system_resource_state;
  uVar7 = (longlong)system_resource_state[0x159] - (longlong)system_resource_state[0x158] >> 3;
  pppplStackX_8 = param_1;
  uStackX_10 = param_2;
  if ((int)uVar7 != 0) {
    pppplStackX_18 = (longlong ****)0x0;
    pppplVar8 = (longlong ****)(uVar7 & 0xffffffff);
    do {
      pppplVar14 = pppplStackX_18;
      plVar3 = *(longlong **)((longlong)pppplStackX_18 + (longlong)ppplStack_1a8[0x158]);
      pppplStackX_20 = pppplVar8;
      plStack_1b0 = plVar3;
      FUN_1800b31f0(system_resource_state,&pppplStackX_8,plVar3 + 6,0);
      if (pppplStackX_8 != (longlong ****)0x0) {
        puVar11 = (uint64_t *)plVar3[1];
        pauVar25 = (int8_t (*) [16])*puVar11;
        puVar27 = puVar11;
        if (pauVar25 == (int8_t (*) [16])0x0) {
          puVar27 = puVar11 + 1;
          pauVar25 = (int8_t (*) [16])*puVar27;
          while (pauVar25 == (int8_t (*) [16])0x0) {
            puVar27 = puVar27 + 1;
            pauVar25 = (int8_t (*) [16])*puVar27;
          }
        }
        plVar17 = plVar3;
        if (pauVar25 != (int8_t (*) [16])puVar11[plVar3[2]]) {
          do {
            auVar1 = *pauVar25;
            auStack_178 = auVar1;
            pppplStack_1b8 = (longlong ****)auVar1._8_8_;
            pppplStack_1f8 = (longlong ****)((ulonglong)auVar1._8_8_ >> 0x20);
            ppppplVar13 = &pppplStack_1f0;
            if ((longlong *****)pppplStack_1e0 != (longlong *****)0x0) {
              ppppplVar9 = (longlong *****)pppplStack_1e0;
              do {
                if ((int)plVar3[8] == 0) {
                  bVar4 = false;
                  ppppplVar19 = (longlong *****)ppppplVar9[1];
                }
                else {
                  if (*(int *)(ppppplVar9 + 6) == 0) {
                    bVar4 = true;
                  }
                  else {
                    pbVar10 = (byte *)plVar3[7];
                    lVar20 = (longlong)ppppplVar9[5] - (longlong)pbVar10;
                    do {
                      uVar12 = (uint)pbVar10[lVar20];
                      iVar6 = *pbVar10 - uVar12;
                      if (*pbVar10 != uVar12) break;
                      pbVar10 = pbVar10 + 1;
                    } while (uVar12 != 0);
                    bVar4 = 0 < iVar6;
                    if (iVar6 < 1) {
                      ppppplVar19 = (longlong *****)ppppplVar9[1];
                      goto LAB_1801c9d87;
                    }
                  }
                  ppppplVar19 = (longlong *****)*ppppplVar9;
                }
LAB_1801c9d87:
                if (bVar4) {
                  ppppplVar9 = ppppplVar13;
                }
                ppppplVar13 = ppppplVar9;
                ppppplVar9 = ppppplVar19;
              } while (ppppplVar19 != (longlong *****)0x0);
            }
            if (ppppplVar13 == &pppplStack_1f0) {
LAB_1801c9ddb:
              if ((ppppplVar13 == (longlong *****)pppplStack_1f0) ||
                 (ppppplVar13 == &pppplStack_1f0)) {
                if ((lStack_1d0 != 0) && ((int)plVar3[8] != 0)) {
                  ppppplVar13 = (longlong *****)pppplStack_1f0;
                  if (*(int *)(pppplStack_1f0 + 6) != 0) {
                    pbVar10 = (byte *)plVar3[7];
                    lVar20 = (longlong)pppplStack_1f0[5] - (longlong)pbVar10;
                    do {
                      bVar2 = *pbVar10;
                      uVar12 = (uint)pbVar10[lVar20];
                      if (bVar2 != uVar12) break;
                      pbVar10 = pbVar10 + 1;
                    } while (uVar12 != 0);
                    if ((int)(bVar2 - uVar12) < 1) goto LAB_1801c9f88;
                  }
LAB_1801c9ebf:
                  bVar4 = false;
LAB_1801c9ec1:
                  if (ppppplVar13 != (longlong *****)0x0) {
                    if ((bVar4) || (ppppplVar13 == &pppplStack_1f0)) goto LAB_1801c9f0f;
                    if (*(int *)(ppppplVar13 + 6) == 0) goto LAB_1801c9f07;
                    pppplVar8 = ppppplVar13[5];
                    lVar20 = plVar3[7] - (longlong)pppplVar8;
                    goto LAB_1801c9ef0;
                  }
                }
              }
              else {
                ppppplVar9 = (longlong *****)func_0x00018066bd70(ppppplVar13);
                if ((int)plVar3[8] != 0) {
                  if (*(int *)(ppppplVar13 + 6) != 0) {
                    pbVar10 = (byte *)plVar3[7];
                    lVar20 = (longlong)ppppplVar13[5] - (longlong)pbVar10;
                    do {
                      bVar2 = *pbVar10;
                      uVar12 = (uint)pbVar10[lVar20];
                      if (bVar2 != uVar12) break;
                      pbVar10 = pbVar10 + 1;
                    } while (uVar12 != 0);
                    if ((int)(bVar2 - uVar12) < 1) goto LAB_1801c9f88;
                  }
                  if (*(int *)(ppppplVar9 + 6) != 0) {
                    pppplVar8 = ppppplVar9[5];
                    lVar20 = plVar3[7] - (longlong)pppplVar8;
                    do {
                      bVar2 = *(byte *)pppplVar8;
                      uVar12 = (uint)*(byte *)((longlong)pppplVar8 + lVar20);
                      if (bVar2 != uVar12) break;
                      pppplVar8 = (longlong ****)((longlong)pppplVar8 + 1);
                    } while (uVar12 != 0);
                    if (0 < (int)(bVar2 - uVar12)) {
                      if (*ppppplVar13 == (longlong ****)0x0) goto LAB_1801c9ebf;
                      bVar4 = true;
                      ppppplVar13 = ppppplVar9;
                      goto LAB_1801c9ec1;
                    }
                  }
                }
              }
LAB_1801c9f88:
              puVar11 = (uint64_t *)FUN_18009c940(&pppplStack_1f0,auStack_58);
              ppppplVar13 = (longlong *****)*puVar11;
              plVar17 = plStack_1b0;
            }
            else if (*(int *)(ppppplVar13 + 6) != 0) {
              if ((int)plVar3[8] != 0) {
                pppplVar8 = ppppplVar13[5];
                lVar20 = plVar3[7] - (longlong)pppplVar8;
                do {
                  bVar2 = *(byte *)pppplVar8;
                  uVar12 = (uint)*(byte *)((longlong)pppplVar8 + lVar20);
                  if (bVar2 != uVar12) break;
                  pppplVar8 = (longlong ****)((longlong)pppplVar8 + 1);
                } while (uVar12 != 0);
                if ((int)(bVar2 - uVar12) < 1) goto LAB_1801c9fa3;
              }
              goto LAB_1801c9ddb;
            }
LAB_1801c9fa3:
            auStack_1a0[0] = auVar1._12_2_;
            uStack_19c = auVar1._8_4_;
            uStack_198 = auStack_178._0_8_;
            FUN_1801e8de0(ppppplVar13 + 8,&puStack_238,auStack_1a0);
            pauVar25 = *(int8_t (**) [16])(pauVar25[1] + 8);
            while (pauVar25 == (int8_t (*) [16])0x0) {
              puVar27 = puVar27 + 1;
              pauVar25 = (int8_t (*) [16])*puVar27;
            }
            pppplVar14 = pppplStackX_18;
            pppplVar8 = pppplStackX_20;
          } while (pauVar25 != *(int8_t (**) [16])(plVar17[1] + plVar17[2] * 8));
        }
      }
      if (pppplStackX_8 != (longlong ****)0x0) {
        (*(code *)(*pppplStackX_8)[7])();
      }
      pppplStackX_18 = pppplVar14 + 1;
      pppplVar8 = (longlong ****)((longlong)pppplVar8 - 1);
    } while (pppplVar8 != (longlong ****)0x0);
    pppplStackX_20 = (longlong ****)0x0;
  }
  puStack_218 = &system_data_buffer_ptr;
  uStack_200 = 0;
  puStack_210 = (void *)0x0;
  uStack_208 = 0;
  pppplStack_1f8 = pppplStack_1e8;
  ppppplVar13 = (longlong *****)pppplStack_1e8;
  if ((longlong *****)pppplStack_1e8 != &pppplStack_1f0) {
    do {
      uVar12 = 0;
      puStack_238 = &system_data_buffer_ptr;
      uStack_220 = 0;
      puStack_230 = (int8_t *)0x0;
      uStack_228 = 0;
      pppplStack_1f8 = (longlong ****)ppppplVar13;
      if (*(int *)(ppppplVar13 + 6) != 0) {
        iVar6 = *(int *)(ppppplVar13 + 6) + 1;
        if (iVar6 < 0x10) {
          iVar6 = 0x10;
        }
        puStack_230 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar6,0x13);
        *puStack_230 = 0;
        uVar7 = (ulonglong)puStack_230 & 0xffffffffffc00000;
        if (uVar7 != 0) {
          lVar20 = ((longlong)puStack_230 - uVar7 >> 0x10) * 0x50 + 0x80 + uVar7;
          puVar21 = (uint *)(lVar20 - (ulonglong)*(uint *)(lVar20 + 4));
          if ((*(byte *)((longlong)puVar21 + 0xe) & 2) == 0) {
            uVar12 = puVar21[7];
            if (0x3ffffff < uVar12) {
              uVar12 = *puVar21 << 0x10;
            }
          }
          else {
            uVar12 = puVar21[7];
            if (uVar12 < 0x4000000) {
              uVar24 = (ulonglong)uVar12;
            }
            else {
              uVar24 = (ulonglong)*puVar21 << 0x10;
            }
            if (0x3ffffff < uVar12) {
              uVar12 = *puVar21 << 0x10;
            }
            uVar12 = uVar12 - (int)(((longlong)puStack_230 -
                                    (((longlong)((longlong)puVar21 + (-0x80 - uVar7)) / 0x50) *
                                     0x10000 + uVar7)) % uVar24);
          }
        }
        uStack_220 = CONCAT44(uStack_220._4_4_,uVar12);
        if (*(int *)(ppppplVar13 + 6) != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puStack_230,ppppplVar13[5],*(int *)(ppppplVar13 + 6) + 1);
        }
      }
      puVar18 = puStack_230;
      if (ppppplVar13[5] != (longlong ****)0x0) {
        uStack_228 = 0;
        if (puStack_230 != (int8_t *)0x0) {
          *puStack_230 = 0;
        }
        uStack_220 = uStack_220 & 0xffffffff;
      }
      pppplStack_1b8 = (longlong ****)(ppppplVar13 + 8);
      FUN_1800b31f0(system_resource_state,&pppplStackX_18,&puStack_238,0);
      if (pppplStackX_18 == (longlong ****)0x0) {
        puStack_238 = &system_data_buffer_ptr;
        if (puVar18 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar18);
        }
      }
      else {
        plStack_1b0 = (longlong *)FUN_180240a60();
        puVar22 = &system_buffer_ptr;
        if (puVar18 != (int8_t *)0x0) {
          puVar22 = puVar18;
        }
        System_DataHandler(&puStack_218,&unknown_var_676_ptr,puVar22);
        ppppplVar9 = (longlong *****)ppppplVar13[9];
        pppplStackX_20 = (longlong ****)ppppplVar9;
        if (ppppplVar9 != ppppplVar13 + 8) {
          do {
            uVar12 = *(uint *)((longlong)ppppplVar9 + 0x24);
            ppplStack_1a8 = (longlong ***)ppppplVar9[5];
            uVar7 = (ulonglong)ppplStack_1a8 >> 0x20;
            pppplStackX_20 = (longlong ****)ppppplVar9;
            System_DataHandler(&puStack_218,&unknown_var_744_ptr,*(int16_t *)(ppppplVar9 + 4));
            System_DataHandler(&puStack_218,&unknown_var_768_ptr,uVar12);
            uVar16 = 1;
            puVar27 = (uint64_t *)&system_state_6758;
            lVar20 = 0x20;
            do {
              if ((uVar12 & uVar16) != 0) {
                puVar15 = &system_buffer_ptr;
                if ((void *)*puVar27 != (void *)0x0) {
                  puVar15 = (void *)*puVar27;
                }
                System_DataHandler(&puStack_218,&unknown_var_704_ptr,puVar15);
              }
              ppplVar5 = ppplStack_1a8;
              uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
              puVar27 = puVar27 + 0xb;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            System_DataHandler(&puStack_218,&unknown_var_712_ptr,uVar7);
            plVar3 = plStack_1b0;
            lVar20 = *plStack_1b0;
            if ((plStack_1b0[1] - lVar20) / 0x60 != 0) {
              uVar7 = 1;
              lVar28 = 0;
              iVar6 = 0;
              do {
                if (((ulonglong)ppplVar5 & uVar7) != 0) {
                  puVar15 = *(void **)(lVar28 + 8 + lVar20);
                  puVar23 = &system_buffer_ptr;
                  if (puVar15 != (void *)0x0) {
                    puVar23 = puVar15;
                  }
                  System_DataHandler(&puStack_218,&unknown_var_704_ptr,puVar23);
                  lVar20 = *plVar3;
                }
                iVar6 = iVar6 + 1;
                uVar7 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
                lVar28 = lVar28 + 0x60;
                ppppplVar9 = (longlong *****)pppplStackX_20;
              } while ((ulonglong)(longlong)iVar6 < (ulonglong)((plVar3[1] - lVar20) / 0x60));
            }
            ppppplVar9 = (longlong *****)func_0x00018066bd70(ppppplVar9);
            puVar18 = puStack_230;
            ppppplVar13 = (longlong *****)pppplStack_1f8;
            pppplStackX_20 = (longlong ****)ppppplVar9;
          } while (ppppplVar9 != (longlong *****)pppplStack_1b8);
        }
        if (pppplStackX_18 != (longlong ****)0x0) {
          (*(code *)(*pppplStackX_18)[7])();
        }
        puStack_238 = &system_data_buffer_ptr;
        if (puVar18 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar18);
        }
      }
      uStack_220 = uStack_220 & 0xffffffff00000000;
      puStack_230 = (int8_t *)0x0;
      puStack_238 = &system_state_ptr;
      pppplStack_1f8 = (longlong ****)func_0x00018066bd70(ppppplVar13);
      ppppplVar13 = (longlong *****)pppplStack_1f8;
    } while ((longlong *****)pppplStack_1f8 != &pppplStack_1f0);
  }
  puStack_168 = &unknown_var_2368_ptr;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(applStack_c0);
  uStack_1c0 = 4;
  __0__basic_ostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (&puStack_168,auStack_160,0,0);
  *(void **)(auStack_160 + (longlong)*(int *)(puStack_168 + 4) + -8) = &unknown_var_2384_ptr;
  *(int *)(auStack_178 + (longlong)*(int *)(puStack_168 + 4) + 0xc) =
       *(int *)(puStack_168 + 4) + -0xa8;
  FUN_18009ec20(auStack_160);
  lVar20 = FUN_1800c4800(auStack_160,uStackX_10,2);
  if (lVar20 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              (auStack_160 + (longlong)*(int *)(puStack_168 + 4) + -8,2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              (auStack_160 + (longlong)*(int *)(puStack_168 + 4) + -8,0);
  }
  puVar15 = &system_buffer_ptr;
  if (puStack_210 != (void *)0x0) {
    puVar15 = puStack_210;
  }
  uVar26 = FUN_1800a1160(&puStack_168,puVar15);
  __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
            (uVar26,FUN_1801e7680);
  lVar20 = FUN_1800a19c0(auStack_160);
  if (lVar20 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              (auStack_160 + (longlong)*(int *)(puStack_168 + 4) + -8,2);
  }
  pppplStackX_8 = (longlong ****)applStack_c0;
  *(void **)(auStack_160 + (longlong)*(int *)(puStack_168 + 4) + -8) = &unknown_var_2384_ptr;
  *(int *)(auStack_178 + (longlong)*(int *)(puStack_168 + 4) + 0xc) =
       *(int *)(puStack_168 + 4) + -0xa8;
  FUN_18009fb60(auStack_160);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_158);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(applStack_c0);
  pppplVar8 = pppplStack_1e0;
  puStack_218 = &system_data_buffer_ptr;
  if (puStack_210 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_210 = (void *)0x0;
  uStack_200 = uStack_200 & 0xffffffff00000000;
  puStack_218 = &system_state_ptr;
  pppplStackX_8 = pppplStack_1e0;
  if ((longlong *****)pppplStack_1e0 == (longlong *****)0x0) {
    return;
  }
  FUN_1800593f0(&pppplStack_1f0,*pppplStack_1e0);
  ppppplVar13 = (longlong *****)(pppplVar8 + 4);
  pppplStackX_20 = pppplVar8 + 8;
  pppplStackX_18 = (longlong ****)ppppplVar13;
  FUN_18004b730();
  *ppppplVar13 = (longlong ****)&system_data_buffer_ptr;
  pppplStackX_8 = (longlong ****)ppppplVar13;
  if ((longlong ****)pppplVar8[5] != (longlong ****)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pppplVar8[5] = (longlong ***)0x0;
  *(int32_t *)(pppplVar8 + 7) = 0;
  *ppppplVar13 = (longlong ****)&system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(pppplVar8);
  while (pppplVar8 = (longlong ****)((longlong)pppplVar8 + 1), uVar12 != 0) {
LAB_1801c9ef0:
    bVar2 = *(byte *)pppplVar8;
    uVar12 = (uint)*(byte *)((longlong)pppplVar8 + lVar20);
    if (bVar2 != uVar12) break;
  }
  if ((int)(bVar2 - uVar12) < 1) {
LAB_1801c9f07:
    uVar26 = 1;
  }
  else {
LAB_1801c9f0f:
    uVar26 = 0;
  }
  lVar20 = FUN_18062b420(system_memory_pool_ptr,0x70,(int8_t)uStack_1c8);
  lStack_188 = lVar20 + 0x20;
  FUN_180627ae0(lStack_188,plVar3 + 6);
  lStack_180 = lVar20 + 0x40;
  *(uint64_t *)(lVar20 + 0x58) = 0;
  *(int32_t *)(lVar20 + 0x68) = 3;
  *(longlong *)lStack_180 = lStack_180;
  *(longlong *)(lVar20 + 0x48) = lStack_180;
  *(uint64_t *)(lVar20 + 0x50) = 0;
  *(int8_t *)(lVar20 + 0x58) = 0;
  *(uint64_t *)(lVar20 + 0x60) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar20,ppppplVar13,&pppplStack_1f0,uVar26);
}



// WARNING: Removing unreachable block (ram,0x0001801cabd0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




