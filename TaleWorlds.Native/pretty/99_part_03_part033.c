#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part033.c - 12 个函数

// 函数: void FUN_1801eca96(void)
void FUN_1801eca96(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  do {
    plVar1 = *(longlong **)(unaff_RBX + 0x28);
    switch(*(int32_t *)(unaff_RDI + 0x6c)) {
    case 0:
      lVar2 = *plVar1;
      break;
    case 1:
      lVar2 = plVar1[1];
      break;
    case 2:
      lVar2 = plVar1[4];
      break;
    case 3:
      lVar2 = plVar1[3];
      break;
    case 4:
      lVar2 = plVar1[2];
      break;
    case 5:
      lVar2 = plVar1[5];
      break;
    default:
      goto LAB_1801ecaf0;
    }
    if ((lVar2 != 0) && (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x10))();
    }
LAB_1801ecaf0:
    unaff_RBX = func_0x00018066bd70(unaff_RBX);
    if (unaff_RBX == unaff_RDI) {
      lVar2 = *(longlong *)(unaff_RDI + 0x10);
      if (lVar2 == 0) {
        *(longlong *)unaff_RDI = unaff_RDI;
        *(uint64_t *)(unaff_RDI + 0x10) = 0;
        *(int8_t *)(unaff_RDI + 0x18) = 0;
        *(uint64_t *)(unaff_RDI + 0x20) = 0;
        *(longlong *)(unaff_RDI + 8) = unaff_RDI;
        return;
      }
      FUN_18004b790();
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  } while( true );
}






// 函数: void FUN_1801ecb05(void)
void FUN_1801ecb05(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar1 != 0) {
    FUN_18004b790();
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  *(longlong *)unaff_RDI = unaff_RDI;
  *(uint64_t *)(unaff_RDI + 0x10) = 0;
  *(int8_t *)(unaff_RDI + 0x18) = 0;
  *(uint64_t *)(unaff_RDI + 0x20) = 0;
  *(longlong *)(unaff_RDI + 8) = unaff_RDI;
  return;
}



longlong FUN_1801ecb30(longlong param_1)

{
  longlong lVar1;
  
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0x11;
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 8) = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  lVar1 = param_1 + 0x30;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x58) = 0x11;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x38) = lVar1;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int8_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x68) = 0xffffffff;
  *(int32_t *)(param_1 + 0x6c) = 0;
  return param_1;
}






// 函数: void FUN_1801ecbb0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ecbb0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  FUN_1801de530();
  FUN_18004b730();
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_18004b790(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  return;
}






// 函数: void FUN_1801ecbf0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ecbf0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801bdf70(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1801ecc10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ecc10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801bdf70(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1801ecc40(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801ecc40(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801bdf70(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



uint64_t * FUN_1801ecc70(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_4192_ptr;
  FUN_1808fc838(param_1 + 2,0x70,6,FUN_1801ecb30,FUN_1801ecbb0);
  param_1[0x56] = &unknown_var_720_ptr;
  param_1[0x57] = 0;
  *(int32_t *)(param_1 + 0x58) = 0;
  param_1[0x56] = &unknown_var_3456_ptr;
  param_1[0x59] = 0;
  param_1[0x57] = 0;
  *(int32_t *)(param_1 + 0x58) = 0;
  param_1[0x5a] = &unknown_var_720_ptr;
  param_1[0x5b] = 0;
  *(int32_t *)(param_1 + 0x5c) = 0;
  param_1[0x5a] = &unknown_var_3456_ptr;
  param_1[0x5d] = 0;
  param_1[0x5b] = 0;
  *(int32_t *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(int32_t *)(param_1 + 0x61) = 3;
  puVar1 = param_1 + 0x65;
  param_1[0x68] = 0;
  *(int32_t *)(param_1 + 0x6a) = 0x11;
  *puVar1 = puVar1;
  param_1[0x66] = puVar1;
  param_1[0x67] = 0;
  *(int8_t *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  puVar1 = param_1 + 0x6d;
  param_1[0x70] = 0;
  *(int32_t *)(param_1 + 0x72) = 3;
  *puVar1 = puVar1;
  param_1[0x6e] = puVar1;
  param_1[0x6f] = 0;
  *(int8_t *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  *(int32_t *)((longlong)param_1 + 0x7c) = 0;
  *(int32_t *)((longlong)param_1 + 0xec) = 1;
  *(int32_t *)((longlong)param_1 + 0x15c) = 2;
  *(int32_t *)((longlong)param_1 + 0x1cc) = 3;
  *(int32_t *)((longlong)param_1 + 0x23c) = 4;
  *(int32_t *)((longlong)param_1 + 0x2ac) = 5;
  *(int8_t *)(param_1 + 0x6b) = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ece20(int8_t *param_1)
void FUN_1801ece20(int8_t *param_1)

{
  int8_t *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  puVar1 = param_1 + 4;
  lVar5 = 0x100;
  lVar3 = 0x100;
  do {
    func_0x00018013d940(puVar1);
    puVar1 = puVar1 + 0x18;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = (uint64_t *)(param_1 + 0x1804);
  lVar3 = 0x100;
  puVar4 = puVar2;
  do {
    func_0x00018005d390(puVar4);
    puVar4 = puVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(uint64_t *)(param_1 + 0x2020) = 0;
  *(int32_t *)(param_1 + 0x202c) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x2030) = 0;
  *(uint64_t *)(param_1 + 0x2038) = 0;
  *(uint64_t *)(param_1 + 0x2040) = 0;
  *(int32_t *)(param_1 + 0x2048) = 3;
  *param_1 = 1;
  puVar1 = param_1 + 0x18;
  lVar3 = 0x100;
  do {
    *(uint64_t *)(puVar1 + -0x14) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x18;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar1 = (int8_t *)FUN_18062b1e0(system_memory_pool_ptr,0x78,8,3,uVar6);
  *(int32_t *)(puVar1 + 0xc) = 0x42f00000;
  FUN_180287d30(puVar1 + 0x10);
  *puVar1 = 0;
  *(uint64_t *)(puVar1 + 4) = 0;
  *(uint64_t *)(puVar1 + 0x60) = 0;
  *(uint64_t *)(puVar1 + 0x68) = 0;
  *(uint64_t *)(puVar1 + 0x70) = 0;
  *(int8_t **)(param_1 + 0x2010) = puVar1;
  uVar6 = FUN_18062b1e0(system_memory_pool_ptr,0xa0,8,3);
  FUN_1803f5640(uVar6);
  *(uint64_t *)(param_1 + 0x2008) = uVar6;
  lVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x350,8,3);
  FUN_1801edff0(lVar3);
  *(uint64_t *)(lVar3 + 0x6c) = 0;
  *(uint64_t *)(lVar3 + 0x74) = 0;
  *(int8_t *)(lVar3 + 0x58) = 0;
  *(uint64_t *)(lVar3 + 0x5c) = 0x7f7fffff;
  *(int32_t *)(lVar3 + 0x68) = 0xbf800000;
  *(uint64_t *)(lVar3 + 0x6c) = 0;
  *(uint64_t *)(lVar3 + 0x74) = 0;
  *(int32_t *)(lVar3 + 100) = 0;
  *(int8_t *)(lVar3 + 0x7e) = 0;
                    // WARNING: Subroutine does not return
  memset(lVar3 + 0x8c,0,0x104);
}






// 函数: void FUN_1801ed150(void)
void FUN_1801ed150(void)

{
  int8_t auStack_68 [88];
  uint64_t uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
                    // WARNING: Subroutine does not return
  memset(auStack_68,0,0x58);
}






// 函数: void FUN_1801ed4b0(longlong *param_1)
void FUN_1801ed4b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x10;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x100;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}






// 函数: void FUN_1801ed4d0(longlong *param_1)
void FUN_1801ed4d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x10;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x100;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}






// 函数: void FUN_1801ed4f0(longlong *param_1)
void FUN_1801ed4f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 0x10;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x100;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ed510(uint64_t param_1,float param_2)
void FUN_1801ed510(uint64_t param_1,float param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  longlong *plVar3;
  int32_t uVar6;
  longlong lVar4;
  int32_t *puVar5;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong *puVar11;
  int8_t *puVar12;
  char *pcVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t uStackX_8;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int8_t auStack_a8 [16];
  ulonglong uStack_98;
  ulonglong uStack_90;
  uint64_t uStack_88;
  int iStack_80;
  
  pcVar2 = system_system_data_config;
  if (*(int *)(*(longlong *)(system_system_data_config + 0x2010) + 0x68) < 1) {
    if (*(int *)(*(longlong *)(system_system_data_config + 0x2010) + 0x68) < 0) {
      uStackX_8 = 0x3f800000;
    }
    else {
      pcVar2[0x1f2c] = '\0';
      pcVar2[0x1f2d] = '\0';
      pcVar2[0x1f2e] = '\0';
      pcVar2[0x1f2f] = '\0';
      pcVar2[0x1f30] = '\0';
      pcVar2[0x1f31] = '\0';
      pcVar2[0x1f32] = '\0';
      pcVar2[0x1f33] = '\0';
      pcVar2[0x1590] = '\0';
      uStackX_8 = 0;
      *(ushort *)(pcVar2 + 0x158c) = *(ushort *)(pcVar2 + 0x158c) | 2;
    }
    *(uint64_t *)(pcVar2 + 0x1f34) = uStackX_8;
    pcVar2[0x15a8] = '\0';
    *(ushort *)(pcVar2 + 0x15a4) = *(ushort *)(pcVar2 + 0x15a4) | ((float)uStackX_8 <= 0.7) + 1;
  }
  else {
    pcVar2[0x1f2c] = '\0';
    pcVar2[0x1f2d] = '\0';
    pcVar2[0x1f2e] = -0x80;
    pcVar2[0x1f2f] = '?';
    pcVar2[0x1f30] = '\0';
    pcVar2[0x1f31] = '\0';
    pcVar2[0x1f32] = '\0';
    pcVar2[0x1f33] = '\0';
    pcVar2[0x1590] = '\0';
    *(ushort *)(pcVar2 + 0x158c) = *(ushort *)(pcVar2 + 0x158c) | 1;
  }
  pcVar10 = *(char **)(pcVar2 + 0x2010);
  if (*(char *)(system_operation_state + 0x1609) == '\0') {
    if (*pcVar10 == '\0') {
      FUN_180287ed0(pcVar10,(int)(*(float *)(system_operation_state + 0x17ec) * 0.5),
                    (int)(*(float *)(system_operation_state + 0x17f0) * 0.5));
    }
  }
  else if (*pcVar10 != '\0') {
    *pcVar10 = '\0';
  }
  *(int32_t *)(pcVar10 + 0x6c) = *(int32_t *)(pcVar10 + 0x60);
  *(int32_t *)(pcVar10 + 0x70) = *(int32_t *)(pcVar10 + 100);
  *(int32_t *)(pcVar10 + 0x74) = *(int32_t *)(pcVar10 + 0x68);
  pcVar10[0x68] = '\0';
  pcVar10[0x69] = '\0';
  pcVar10[0x6a] = '\0';
  pcVar10[0x6b] = '\0';
  pcVar10[0x60] = '\0';
  pcVar10[0x61] = '\0';
  pcVar10[0x62] = '\0';
  pcVar10[99] = '\0';
  pcVar10[100] = '\0';
  pcVar10[0x65] = '\0';
  pcVar10[0x66] = '\0';
  pcVar10[0x67] = '\0';
  FUN_18030f390(*(uint64_t *)(pcVar2 + 0x2018));
  if ((*pcVar2 != '\0') &&
     (*(char *)(*(longlong *)(system_main_module_state + 8) + 0xbc +
               (ulonglong)(*(uint *)(*(longlong *)(system_main_module_state + 8) + 0x13c) & 1) * 0x48) == '\0'
     )) {
    FUN_1801ed150(pcVar2);
  }
  lVar14 = *(longlong *)(pcVar2 + 0x2018);
  lVar8 = *(longlong *)(lVar14 + 0x10);
  if (lVar8 != *(longlong *)(lVar14 + 0x30)) {
    do {
      uVar7 = (ulonglong)*(byte *)(lVar8 + 4);
      uStackX_8._0_4_ = (float)*(uint64_t *)(lVar8 + 8);
      *(uint64_t *)(pcVar2 + uVar7 * 8 + 0x1804) = *(uint64_t *)(lVar8 + 8);
      pcVar2[uVar7 * 0x18 + 0x18] = '\0';
      *(ushort *)(pcVar2 + uVar7 * 0x18 + 0x14) =
           *(ushort *)(pcVar2 + uVar7 * 0x18 + 0x14) | ((float)uStackX_8 <= 0.7) + 1;
      lVar8 = *(longlong *)(lVar14 + 0x10) + 0x10;
      if (lVar8 == *(longlong *)(lVar14 + 0x20)) {
        if (*(longlong *)(lVar14 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar3 = (longlong *)(*(longlong *)(lVar14 + 0x28) + 8);
        *(longlong **)(lVar14 + 0x28) = plVar3;
        lVar8 = *plVar3;
        *(longlong *)(lVar14 + 0x18) = lVar8;
        *(longlong *)(lVar14 + 0x20) = lVar8 + 0x100;
      }
      *(longlong *)(lVar14 + 0x10) = lVar8;
    } while (lVar8 != *(longlong *)(lVar14 + 0x30));
  }
  plVar3 = *(longlong **)(pcVar2 + 0x2008);
  uStack_c0 = 0;
  do {
    puVar11 = (ulonglong *)*plVar3;
    uVar7 = *puVar11;
    if ((uVar7 == puVar11[1]) && (puVar11[1] = puVar11[8], uVar7 == puVar11[8])) {
      if (puVar11 == (ulonglong *)plVar3[8]) break;
      puVar11 = (ulonglong *)*plVar3;
      puVar11[1] = puVar11[8];
      uVar7 = *puVar11;
      if (uVar7 != puVar11[8]) goto LAB_1801ed809;
      puVar1 = (ulonglong *)puVar11[0x10];
      uVar7 = *puVar1;
      puVar1[1] = puVar1[8];
      *plVar3 = (longlong)puVar1;
      puVar11 = (ulonglong *)(puVar1[0x11] + uVar7 * 0x10);
      uStack_c8 = *puVar11;
      uStack_c0 = puVar11[1];
      *puVar1 = puVar1[0x12] & uVar7 + 1;
    }
    else {
LAB_1801ed809:
      puVar1 = (ulonglong *)(puVar11[0x11] + uVar7 * 0x10);
      uStack_c8 = *puVar1;
      uStack_c0 = puVar1[1];
      *puVar11 = puVar11[0x12] & uVar7 + 1;
    }
    uStackX_8._0_4_ = (float)uStack_c0;
    uVar7 = uStack_c8 >> 0x20 & 0xff;
    *(ulonglong *)(pcVar2 + uVar7 * 8 + 0x1804) = uStack_c0;
    pcVar2[uVar7 * 0x18 + 0x18] = '\0';
    *(ushort *)(pcVar2 + uVar7 * 0x18 + 0x14) =
         *(ushort *)(pcVar2 + uVar7 * 0x18 + 0x14) | ((float)uStackX_8 <= 0.7) + 1;
  } while( true );
LAB_1801ed890:
  puVar11 = (ulonglong *)plVar3[10];
  uVar7 = *puVar11;
  if ((uVar7 == puVar11[1]) && (puVar11[1] = puVar11[8], uVar7 == puVar11[8])) {
    if (puVar11 == (ulonglong *)plVar3[0x12]) {
      lVar14 = *(longlong *)(pcVar2 + 0x2010);
      uStack_90 = 0;
      goto FUN_1801eda00;
    }
    puVar11 = (ulonglong *)plVar3[10];
    puVar11[1] = puVar11[8];
    uVar7 = *puVar11;
    if (uVar7 != puVar11[8]) goto LAB_1801ed8fb;
    puVar11 = (ulonglong *)puVar11[0x10];
    uVar7 = *puVar11;
    puVar11[1] = puVar11[8];
    plVar3[10] = (longlong)puVar11;
    uVar9 = puVar11[0x12];
    uVar6 = (int32_t)((ulonglong)*(uint64_t *)(puVar11[0x11] + uVar7 * 8) >> 0x20);
  }
  else {
LAB_1801ed8fb:
    uVar9 = puVar11[0x12];
    uVar6 = (int32_t)((ulonglong)*(uint64_t *)(puVar11[0x11] + uVar7 * 8) >> 0x20);
  }
  *puVar11 = uVar9 & uVar7 + 1;
  puVar5 = *(int32_t **)(pcVar2 + 0x2038);
  if (puVar5 < *(int32_t **)(pcVar2 + 0x2040)) {
    *(int32_t **)(pcVar2 + 0x2038) = puVar5 + 1;
    *puVar5 = uVar6;
  }
  else {
    lVar14 = *(longlong *)(pcVar2 + 0x2030);
    lVar8 = (longlong)puVar5 - lVar14 >> 2;
    if (lVar8 == 0) {
      lVar8 = 1;
LAB_1801ed969:
      lVar4 = FUN_18062b420(system_memory_pool_ptr,lVar8 * 4,pcVar2[0x2048]);
      puVar5 = *(int32_t **)(pcVar2 + 0x2038);
      lVar14 = *(longlong *)(pcVar2 + 0x2030);
    }
    else {
      lVar8 = lVar8 * 2;
      if (lVar8 != 0) goto LAB_1801ed969;
      lVar4 = 0;
    }
    puVar5 = (int32_t *)FUN_180059350(lVar14,puVar5,lVar4);
    *puVar5 = uVar6;
    if (*(longlong *)(pcVar2 + 0x2030) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(pcVar2 + 0x2030) = lVar4;
    *(longlong *)(pcVar2 + 0x2040) = lVar4 + lVar8 * 4;
    *(int32_t **)(pcVar2 + 0x2038) = puVar5 + 1;
  }
  goto LAB_1801ed890;
FUN_1801eda00:
  puVar11 = *(ulonglong **)(lVar14 + 0x10);
  uVar7 = *puVar11;
  if ((uVar7 == puVar11[1]) && (puVar11[1] = puVar11[8], uVar7 == puVar11[8])) {
    if (puVar11 == *(ulonglong **)(lVar14 + 0x50)) goto LAB_1801edb41;
    puVar11 = *(ulonglong **)(lVar14 + 0x10);
    puVar11[1] = puVar11[8];
    uVar7 = *puVar11;
    if (uVar7 != puVar11[8]) goto LAB_1801eda8e;
    puVar11 = (ulonglong *)puVar11[0x10];
    uVar7 = *puVar11;
    puVar11[1] = puVar11[8];
    *(ulonglong **)(lVar14 + 0x10) = puVar11;
    uVar9 = puVar11[0x11];
    lVar8 = uVar7 * 0x1c;
    uStack_98 = *(ulonglong *)(uVar9 + lVar8);
    uStack_90 = ((ulonglong *)(uVar9 + lVar8))[1];
    iStack_80 = *(int *)(uVar9 + 0x18 + lVar8);
    uStack_88 = *(uint64_t *)(uVar9 + 0x10 + lVar8);
    *puVar11 = puVar11[0x12] & uVar7 + 1;
  }
  else {
LAB_1801eda8e:
    uVar9 = puVar11[0x11];
    lVar8 = uVar7 * 0x1c;
    uStack_98 = *(ulonglong *)(lVar8 + uVar9);
    uStack_90 = ((ulonglong *)(lVar8 + uVar9))[1];
    iStack_80 = *(int *)(lVar8 + 0x18 + uVar9);
    uStack_88 = *(uint64_t *)(lVar8 + 0x10 + uVar9);
    *puVar11 = uVar7 + 1 & puVar11[0x12];
  }
  if ((int)uStack_98 == 0) {
    *(int *)(*(longlong *)(pcVar2 + 0x2010) + 0x60) =
         *(int *)(*(longlong *)(pcVar2 + 0x2010) + 0x60) + (int)uStack_88;
    *(int *)(*(longlong *)(pcVar2 + 0x2010) + 100) =
         *(int *)(*(longlong *)(pcVar2 + 0x2010) + 100) + (int)((ulonglong)uStack_88 >> 0x20);
  }
  else if ((int)uStack_98 == 3) {
    *(int *)(*(longlong *)(pcVar2 + 0x2010) + 0x68) =
         *(int *)(*(longlong *)(pcVar2 + 0x2010) + 0x68) + iStack_80;
  }
  else {
    uStackX_8._0_4_ = (float)uStack_90;
    uVar7 = uStack_98 >> 0x20 & 0xff;
    *(ulonglong *)(pcVar2 + uVar7 * 8 + 0x1804) = uStack_90;
    pcVar2[uVar7 * 0x18 + 0x18] = '\0';
    *(ushort *)(pcVar2 + uVar7 * 0x18 + 0x14) =
         *(ushort *)(pcVar2 + uVar7 * 0x18 + 0x14) | ((float)uStackX_8 <= 0.7) + 1;
  }
  goto FUN_1801eda00;
LAB_1801edb41:
  pcVar2[0x2020] = '\0';
  lVar14 = system_operation_state;
  pcVar2[0x2021] = '\0';
  pcVar2[0x2022] = '\0';
  pcVar2[0x2023] = '\0';
  pcVar2[0x2024] = '\0';
  pcVar2[0x2025] = '\0';
  pcVar2[0x2026] = '\0';
  pcVar2[0x2027] = '\0';
  if (((-1 < *(int *)(*(longlong *)(pcVar2 + 0x2018) + 0x330)) &&
      (*(char *)(system_operation_state + 0x1609) != '\0')) && (pcVar2[0x2028] == '\0')) {
    uStackX_8._4_4_ = (float)((ulonglong)*(uint64_t *)(pcVar2 + 0x14d4) >> 0x20);
    uStackX_8._0_4_ = (float)*(uint64_t *)(pcVar2 + 0x14d4);
    if (SQRT(uStackX_8._4_4_ * uStackX_8._4_4_ + (float)uStackX_8 * (float)uStackX_8) != 0.0) {
      fVar17 = *(float *)(system_operation_state + 0x17f0);
      fVar15 = (float)expf(*(float *)(SYSTEM_STATE_MANAGER + 0x16c0) * 4.0);
      fVar18 = *(float *)(pcVar2 + 0x202c);
      fVar16 = (float)powf();
      lVar8 = system_main_module_state;
      param_2 = fVar15 * 125.0 * fVar18 * fVar16 * param_2;
      fVar18 = (float)uStackX_8 * param_2 * *(float *)(lVar14 + 0x17ec) * 0.00052083336;
      fVar17 = uStackX_8._4_4_ * param_2 * fVar17 * -0.0009259259;
      *(float *)(pcVar2 + 0x2020) = fVar18;
      *(float *)(pcVar2 + 0x2024) = fVar17;
      uStackX_8 = CONCAT44((int)fVar17,(int)fVar18);
      FUN_180174080(*(uint64_t *)(lVar8 + 8),uStackX_8);
      lVar14 = *(longlong *)(system_main_module_state + 8);
      uVar7 = (ulonglong)(*(uint *)(lVar14 + 0x13c) & 1);
      lVar8 = *(longlong *)(system_main_module_state + 8);
      uVar9 = (ulonglong)(*(uint *)(lVar8 + 0x13c) & 1);
      iStack_d4 = *(int *)(lVar8 + 0xf0 + uVar9 * 0x48) + *(int *)(lVar14 + 0xb0 + uVar7 * 0x48);
      iStack_d8 = *(int *)(lVar8 + 0xec + uVar9 * 0x48) + *(int *)(lVar14 + 0xac + uVar7 * 0x48);
      iStack_cc = *(int *)(lVar14 + 0xb8 + uVar7 * 0x48) + iStack_d4;
      iStack_d0 = *(int *)(lVar14 + 0xb4 + uVar7 * 0x48) + iStack_d8;
      FUN_180171fb0(*(uint64_t *)(system_main_module_state + 8),&iStack_d8);
    }
  }
  if (pcVar2[0x2029] == '\0') {
    if (pcVar2[0x2028] == '\0') goto LAB_1801ede50;
    FUN_180171d50(*(uint64_t *)(system_main_module_state + 8),&iStack_b8,0);
    fVar17 = (float)(iStack_b0 - iStack_b8) * *(float *)(system_operation_state + 0x17e0);
    FUN_180093780(fVar17,(int)fVar17 + iStack_b8,
                  (int)((float)(iStack_ac - iStack_b4) * *(float *)(system_operation_state + 0x17e4)) +
                  iStack_b4);
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),*(int8_t *)(system_operation_state + 0x160a),
                  *(int32_t *)(system_operation_state + 0x160c));
    puVar12 = (int8_t *)0x0;
  }
  else {
    if (pcVar2[0x2028] != '\0') goto LAB_1801ede50;
    FUN_180171d50(*(uint64_t *)(system_main_module_state + 8),auStack_a8,0);
    FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),0,1);
    puVar12 = auStack_a8;
  }
  FUN_180171fb0(*(uint64_t *)(system_main_module_state + 8),puVar12);
LAB_1801ede50:
  lVar14 = 0x100;
  pcVar10 = pcVar2 + 0x16;
  pcVar13 = pcVar2 + 0x1804;
  do {
    *(int16_t *)pcVar10 = *(int16_t *)(pcVar10 + -2);
    *(uint64_t *)(pcVar10 + -10) = *(uint64_t *)(pcVar10 + -0x12);
    *(uint64_t *)(pcVar10 + -0x12) = *(uint64_t *)pcVar13;
    pcVar10[2] = '\0';
    lVar14 = lVar14 + -1;
    pcVar10 = pcVar10 + 0x18;
    pcVar13 = pcVar13 + 8;
  } while (lVar14 != 0);
  pcVar2[0x2029] = pcVar2[0x2028];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




