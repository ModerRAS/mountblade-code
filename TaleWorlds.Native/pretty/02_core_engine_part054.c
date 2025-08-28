#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part054.c - 15 个函数

// 函数: void FUN_18008fbc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_18008fbc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  
  lVar10 = param_4 * 2;
  while (lVar9 = lVar10 + 2, lVar9 < param_3) {
    lVar6 = lVar9 * 0x10;
    iVar3 = *(int *)(lVar6 + 8 + param_1);
    iVar1 = *(int *)(lVar6 + -8 + param_1);
    if (iVar3 == iVar1) {
      lVar4 = *(longlong *)(lVar6 + -0x10 + param_1);
      if (*(int *)(lVar4 + 0x78) == 0) {
        bVar5 = false;
      }
      else if (*(int *)(*(longlong *)(lVar6 + param_1) + 0x78) == 0) {
        bVar5 = true;
      }
      else {
        pbVar7 = *(byte **)(lVar4 + 0x70);
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + param_1) + 0x70) - (longlong)pbVar7;
        do {
          bVar2 = *pbVar7;
          uVar8 = (uint)pbVar7[lVar6];
          if (bVar2 != uVar8) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
        bVar5 = 0 < (int)(bVar2 - uVar8);
      }
    }
    else {
      bVar5 = iVar3 < iVar1;
    }
    lVar6 = lVar10 + 1;
    if (!bVar5) {
      lVar6 = lVar9;
    }
    *(uint64_t *)(param_1 + param_4 * 0x10) = *(uint64_t *)(param_1 + lVar6 * 0x10);
    *(int32_t *)(param_1 + 8 + param_4 * 0x10) = *(int32_t *)(param_1 + 8 + lVar6 * 0x10);
    param_4 = lVar6;
    lVar10 = lVar6 * 2;
  }
  if (lVar9 == param_3) {
    *(uint64_t *)(param_1 + param_4 * 0x10) = *(uint64_t *)(param_1 + -0x10 + lVar9 * 0x10);
    *(int32_t *)(param_1 + 8 + param_4 * 0x10) = *(int32_t *)(param_1 + -8 + lVar9 * 0x10);
    param_4 = lVar10 + 1;
  }
  while (param_2 < param_4) {
    lVar10 = param_4 + -1 >> 1;
    plVar11 = (longlong *)(lVar10 * 0x10 + param_1);
    if ((int)plVar11[1] == (int)param_5[1]) {
      if (*(int *)(*param_5 + 0x78) == 0) {
        bVar5 = false;
      }
      else if (*(int *)(*plVar11 + 0x78) == 0) {
        bVar5 = true;
      }
      else {
        pbVar7 = *(byte **)(*param_5 + 0x70);
        lVar9 = *(longlong *)(*plVar11 + 0x70) - (longlong)pbVar7;
        do {
          bVar2 = *pbVar7;
          uVar8 = (uint)pbVar7[lVar9];
          if (bVar2 != uVar8) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
        bVar5 = 0 < (int)(bVar2 - uVar8);
      }
    }
    else {
      bVar5 = (int)plVar11[1] < (int)param_5[1];
    }
    if (!bVar5) break;
    *(longlong *)(param_1 + param_4 * 0x10) = *plVar11;
    *(int *)(param_1 + 8 + param_4 * 0x10) = (int)plVar11[1];
    param_4 = lVar10;
  }
  *(longlong *)(param_1 + param_4 * 0x10) = *param_5;
  *(int *)(param_1 + 8 + param_4 * 0x10) = (int)param_5[1];
  return;
}



uint64_t *
FUN_18008fd70(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_720_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x218,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_18008fdb0(longlong param_1,longlong param_2)
void FUN_18008fdb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x200) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x00018008fde9. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x200);
    return;
  }
  FUN_180626f80(&unknown_var_616_ptr,0x200,param_2);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}





// 函数: void FUN_18008fe30(longlong param_1,uint64_t param_2,int param_3)
void FUN_18008fe30(longlong param_1,uint64_t param_2,int param_3)

{
  if (param_3 + 1 < 0x200) {
                    // WARNING: Subroutine does not return
    memcpy(*(int8_t **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(int8_t **)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_18008fe51(void)
void FUN_18008fe51(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_18008fe76(int8_t *param_1)
void FUN_18008fe76(int8_t *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(int32_t *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18008fe90(longlong param_1,longlong param_2,longlong param_3)
void FUN_18008fe90(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int8_t auStack_298 [32];
  uint64_t uStack_278;
  void *puStack_268;
  int8_t *puStack_260;
  int32_t uStack_258;
  int8_t auStack_250 [520];
  ulonglong uStack_48;
  
  uStack_278 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_298;
  puStack_268 = &unknown_var_9208_ptr;
  puStack_260 = auStack_250;
  uStack_258 = 0;
  auStack_250[0] = 0;
  lVar1 = strstr(*(uint64_t *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_260,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_268 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180090020(uint64_t param_1,int32_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &unknown_var_9288_ptr;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800900c0(uint64_t param_1,int32_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &unknown_var_9496_ptr;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180090130(uint64_t *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = 0x20;
  FUN_1808fc838(param_1 + 1,8,0x20,&SUB_18005d5f0,FUN_180045af0);
  plVar7 = param_1 + 0x21;
  FUN_1808fc838(plVar7,8,0x20,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(int32_t *)(param_1 + 0x74) = 3;
  FUN_1808fc838(param_1 + 0x76,0x20,0x20,FUN_180627850,FUN_180627b90);
  param_1[0x75] = 0;
  _Mtx_init_in_situ(param_1 + 0x106,0x102);
  do {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,3);
    plVar4 = (longlong *)FUN_180275090(uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plVar1 = (longlong *)plVar7[-0x20];
    plVar7[-0x20] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
    plVar4 = (longlong *)FUN_180075030(uVar3,1);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plVar1 = (longlong *)*plVar7;
    *plVar7 = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    (**(code **)(*(longlong *)(*plVar7 + 0x10) + 0x10))((longlong *)(*plVar7 + 0x10),&unknown_var_1584_ptr)
    ;
    lVar5 = *plVar7;
    if (*(char *)(lVar5 + 0xfa) != '\x01') {
      *(int8_t *)(lVar5 + 0xfa) = 1;
      FUN_180079520(lVar5);
      lVar5 = *plVar7;
    }
    if (*(char *)(lVar5 + 0xfb) != '\x01') {
      *(int8_t *)(lVar5 + 0xfb) = 1;
      FUN_180079520(lVar5);
      lVar5 = *plVar7;
    }
    iVar2 = _Mtx_lock(0x180c91910);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    *(char *)(lVar5 + 0xfc) = *(char *)(lVar5 + 0xfc) + '\x01';
    iVar2 = _Mtx_unlock(0x180c91910);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    plVar7 = plVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *param_1 = 0;
  return param_1;
}





// 函数: void FUN_180090380(longlong param_1)
void FUN_180090380(longlong param_1)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  _Mtx_destroy_in_situ();
  FUN_1808fc8a8(param_1 + 0x3b0,0x20,0x20,FUN_180627b90,uVar1);
  FUN_18005d580();
  FUN_1808fc8a8(param_1 + 0x108,8,0x20,FUN_180045af0);
  FUN_1808fc8a8(param_1 + 8,8,0x20,FUN_180045af0);
  return;
}





// 函数: void FUN_180090420(longlong *param_1)
void FUN_180090420(longlong *param_1)

{
  longlong *plVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  param_1[0x1a5] = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x1a6] * 8) + -100000;
  FUN_180090b80(param_1);
  *(int32_t *)(param_1 + 0x1a7) = 0;
  plVar1 = (longlong *)param_1[0x1a4];
  param_1[0x1a4] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((longlong *)param_1[0x1a4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1a4] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 6,0x20,0x50,FUN_180627b90,uVar2);
  FUN_1808fc8a8(param_1 + 1,8,4,FUN_180045af0);
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}





// 函数: void FUN_1800904f0(longlong param_1)
void FUN_1800904f0(longlong param_1)

{
  FUN_1808fc8a8(param_1 + 8,0x20,0x20,FUN_180627b90,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180090520(uint64_t *param_1)
void FUN_180090520(uint64_t *param_1)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  
  iVar1 = _Mtx_lock(param_1 + 0x106);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *param_1 = 0;
  puVar4 = param_1 + 0x21;
  puVar3 = param_1 + 0x51;
  lVar2 = 0x20;
  do {
    *(int32_t *)(puVar3 + -0x10) = 0x49742400;
    *(int32_t *)puVar3 = 0x3dcccccd;
    (**(code **)(*(longlong *)puVar4[-0x20] + 0xd8))();
    FUN_180076760(*puVar4);
    puVar3 = (uint64_t *)((longlong)puVar3 + 4);
    puVar4 = puVar4 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_180057110(param_1 + 0x71);
  iVar1 = _Mtx_unlock(param_1 + 0x106);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_1800905f0(float *param_1,float param_2)
void FUN_1800905f0(float *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = _Mtx_lock(param_1 + 0x20c);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  param_1[0x82] = param_1[0x82] + param_2;
  param_1[0x83] = param_1[0x83] + param_2;
  param_1[0x84] = param_1[0x84] + param_2;
  param_1[0x85] = param_1[0x85] + param_2;
  param_1[0x86] = param_1[0x86] + param_2;
  param_1[0x87] = param_1[0x87] + param_2;
  param_1[0x88] = param_1[0x88] + param_2;
  param_1[0x89] = param_1[0x89] + param_2;
  param_1[0x8a] = param_1[0x8a] + param_2;
  param_1[0x8b] = param_1[0x8b] + param_2;
  param_1[0x8c] = param_1[0x8c] + param_2;
  param_1[0x8d] = param_1[0x8d] + param_2;
  param_1[0x8e] = param_1[0x8e] + param_2;
  param_1[0x8f] = param_1[0x8f] + param_2;
  param_1[0x90] = param_1[0x90] + param_2;
  param_1[0x91] = param_1[0x91] + param_2;
  param_1[0x92] = param_1[0x92] + param_2;
  param_1[0x93] = param_1[0x93] + param_2;
  param_1[0x94] = param_1[0x94] + param_2;
  param_1[0x95] = param_1[0x95] + param_2;
  param_1[0x96] = param_1[0x96] + param_2;
  param_1[0x97] = param_1[0x97] + param_2;
  param_1[0x98] = param_1[0x98] + param_2;
  param_1[0x99] = param_1[0x99] + param_2;
  param_1[0x9a] = param_1[0x9a] + param_2;
  param_1[0x9b] = param_1[0x9b] + param_2;
  param_1[0x9c] = param_1[0x9c] + param_2;
  param_1[0x9d] = param_1[0x9d] + param_2;
  param_1[0x9e] = param_1[0x9e] + param_2;
  param_1[0x9f] = param_1[0x9f] + param_2;
  param_1[0xa0] = param_1[0xa0] + param_2;
  param_1[0xa1] = param_1[0xa1] + param_2;
  fVar2 = *param_1 - param_2 * 0.1;
  *param_1 = fVar2;
  if (fVar2 < 0.0) {
    *param_1 = 0.0;
  }
  iVar1 = _Mtx_unlock(param_1 + 0x20c);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800909ad)



// 函数: void FUN_180090710(float *param_1,uint64_t param_2,int32_t *param_3)
void FUN_180090710(float *param_1,uint64_t param_2,int32_t *param_3)

{
  float fVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  float fStack_17c;
  uint64_t uStack_178;
  int32_t uStack_170;
  int16_t uStack_16c;
  uint64_t uStack_168;
  uint64_t uStack_160;
  int32_t uStack_158;
  int8_t uStack_154;
  int32_t uStack_150;
  uint64_t uStack_14c;
  int16_t uStack_144;
  uint64_t uStack_140;
  int32_t uStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  int8_t uStack_124;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  
  uStack_c8 = 0xfffffffffffffffe;
  iVar3 = _Mtx_lock(param_1 + 0x20c);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uStack_108 = 0x3f800000;
  uStack_100 = 0;
  uStack_f8 = 0x3f80000000000000;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0x3f800000;
  uStack_d8 = 0x3a03126f;
  _uStack_d0 = CONCAT44(0x3f800000,*param_3);
  fVar10 = 0.1 - *param_1;
  iVar3 = 0;
  do {
    uVar4 = (int)param_1[1] + 0x20 + iVar3 & 0x8000001f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
    }
    lVar6 = (longlong)(int)uVar4;
    if (param_1[lVar6 + 0x82] < 10.0) {
      fVar10 = fVar10 + param_1[lVar6 + 0xa2];
      uStack_d8 = CONCAT44(fVar10,(int32_t)uStack_d8);
      fVar1 = param_1[lVar6 + 0xc2];
      fVar9 = param_1[lVar6 + 0x82] - 6.0;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fStack_17c = 1.0 - fVar9 * 0.16666666;
      uVar4 = (uint)(fStack_17c * 256.0);
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xfe < (int)uVar4) {
        uVar4 = 0xfe;
      }
      uVar7 = (uint)fVar1 & 0xffffff;
      uStack_188 = 0x3f800000;
      uStack_184 = 0x3f800000;
      uStack_180 = 0x3f800000;
      (**(code **)(**(longlong **)(param_1 + lVar6 * 2 + 2) + 0x108))
                (*(longlong **)(param_1 + lVar6 * 2 + 2),&uStack_188);
      plVar2 = *(longlong **)(param_1 + lVar6 * 2 + 2);
      if (*(code **)(*plVar2 + 0xc0) == (code *)&unknown_var_9120_ptr) {
        cVar8 = (plVar2[8] - plVar2[7] & 0xfffffffffffffff0U) == 0;
      }
      else {
        cVar8 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      }
      lVar5 = 0;
      if (cVar8 == '\0') {
        lVar5 = *(longlong *)plVar2[7];
      }
      *(float *)(lVar5 + 0x238) = (float)(uVar7 >> 0x10) * 0.003921569;
      *(float *)(lVar5 + 0x23c) = (float)(uVar7 >> 8 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x240) = (float)((uint)fVar1 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x244) = (float)(uVar4 & 0xff) * 0.003921569;
      uVar4 = ((0xff - uVar4) * 2) / 3;
      if (0xfe < uVar4) {
        uVar4 = 0xfe;
      }
      lVar5 = *(longlong *)(param_1 + lVar6 * 2 + 0x42);
      uVar7 = ((uVar4 | 0xffffff00) << 8 | uVar4) << 8 | uVar4;
      *(float *)(lVar5 + 0x238) = (float)(uVar7 >> 0x10 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x23c) = (float)(uVar7 >> 8 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x240) = (float)(uVar4 & 0xff) * 0.003921569;
      *(float *)(lVar5 + 0x244) = (float)(uVar7 >> 0x18) * 0.003921569;
      uStack_178 = 0;
      uStack_170 = 0xffffffff;
      uStack_16c = 0xff00;
      uStack_168 = 0;
      uStack_160 = 0xffffffffffffffff;
      uStack_158 = 0xffffffff;
      uStack_154 = 0xff;
      uStack_150 = 0xffffffff;
      uStack_14c = 0;
      uStack_144 = 0x400;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_110 = 0;
      FUN_180077750(*(uint64_t *)(param_1 + lVar6 * 2 + 0x42),param_2,&uStack_108,0,&uStack_178);
      (**(code **)(**(longlong **)(param_1 + lVar6 * 2 + 2) + 0x1c8))
                (*(longlong **)(param_1 + lVar6 * 2 + 2),param_2,0,&uStack_108,&uStack_178);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  iVar3 = _Mtx_unlock(param_1 + 0x20c);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}





// 函数: void FUN_180090b80(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180090b80(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *(uint64_t *)(param_1 + 0xd28) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0xd30) * 8);
  plVar2 = *(longlong **)(param_1 + 0xd20);
  *(uint64_t *)(param_1 + 0xd20) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_1 + 0xd3c) = 0xffffffff;
  *(int32_t *)(param_1 + 0x28) = 0xff101010;
  plVar2 = (longlong *)(param_1 + 0x30);
  lVar1 = 0x50;
  plVar3 = plVar2;
  do {
    (**(code **)(*plVar3 + 0x10))(plVar2,&system_buffer_ptr,param_3,param_4,uVar4);
    plVar2 = plVar2 + 4;
    plVar3 = plVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(int32_t *)(param_1 + 0xd04) = 0;
  *(int32_t *)(param_1 + 0xd08) = 0xbcf5c28f;
  *(int32_t *)(param_1 + 0xd00) = 0;
  plVar2 = *(longlong **)(param_1 + 0xd20);
  *(uint64_t *)(param_1 + 0xd20) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_1 + 0xd40) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180090c80(longlong *param_1)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  FUN_1808fc838(param_1 + 1,8,4,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(param_1 + 6,0x20,0x50,FUN_180627850,FUN_180627b90);
  param_1[0x1a4] = 0;
  *(int32_t *)(param_1 + 0x1a6) = 0;
  param_1[0x1a5] = _DAT_180c8ed30;
  plVar3 = (longlong *)param_1[0x1a4];
  param_1[0x1a4] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  param_1[0x1a0] = 0;
  *(int32_t *)(param_1 + 0x1a1) = 0xbcf5c28f;
  plVar3 = (longlong *)param_1[1];
  param_1[1] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[2];
  param_1[2] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[3];
  param_1[3] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[4];
  param_1[4] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x1a7) = 0;
  *(int32_t *)(param_1 + 5) = 0xff101010;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
  plVar3 = (longlong *)FUN_180075030(uVar2,1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = (longlong *)*param_1;
  *param_1 = (longlong)plVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  (**(code **)(*(longlong *)(*param_1 + 0x10) + 0x10))((longlong *)(*param_1 + 0x10),&unknown_var_1688_ptr)
  ;
  return param_1;
}



uint64_t *
FUN_180090e40(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 3;
  FUN_180090130(param_1 + 6);
  FUN_180090c80(param_1 + 0x116);
  param_1[0x2c0] = 0;
  func_0x0001800e7950((longlong)param_1 + 0x1614);
  param_1[0x2d3] = 0;
  FUN_180094c20(param_1 + 0x2d4);
  param_1[0x2fc] = 0;
  *(uint64_t *)((longlong)param_1 + 0x17ec) = 0;
  param_1[0x300] = 0;
  _Mtx_init_in_situ(param_1 + 0x301,2,param_3,param_4,uVar2);
  param_1[0x30b] = 0;
  param_1[0x30d] = 0;
  param_1[0x30e] = 0;
  param_1[0x30f] = 0;
  *(int32_t *)(param_1 + 0x310) = 3;
  *(int16_t *)((longlong)param_1 + 0x1609) = 0x101;
  *(int32_t *)((longlong)param_1 + 0x160c) = 1;
  plVar1 = (longlong *)param_1[0x2c0];
  param_1[0x2c0] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x2fd) = 1;
  FUN_180090520(param_1 + 6);
  *param_1 = 0;
  plVar1 = (longlong *)param_1[0x300];
  param_1[0x300] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x30b];
  param_1[0x30b] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int16_t *)(param_1 + 0x311) = 0x101;
  param_1[0x2fc] = 0x3f0000003f000000;
  *(uint64_t *)((longlong)param_1 + 0x17ec) = 0x4434000044a00000;
  *(int8_t *)(param_1 + 0x2bf) = 0;
  param_1[0x2c4] = 0;
  *(int16_t *)(param_1 + 0x2c5) = 0;
  *(int8_t *)((longlong)param_1 + 0x162a) = 0;
  *(int8_t *)(param_1 + 0x2c2) = 0;
  *(int8_t *)(param_1 + 1) = 0;
  param_1[0x30c] = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180091020(void)
void FUN_180091020(void)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint64_t uVar11;
  int8_t auStack_d8 [32];
  int8_t uStack_b8;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  longlong *plStack_98;
  uint64_t uStack_90;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  lVar6 = _DAT_180c86950;
  uStack_90 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d8;
  *(int8_t *)(_DAT_180c86950 + 0x1889) = *(int8_t *)(_DAT_180c86950 + 0x1888);
  cVar1 = *(char *)(*(longlong *)(_DAT_180c86870 + 8) + 0xbc +
                   (ulonglong)(*(uint *)(*(longlong *)(_DAT_180c86870 + 8) + 0x13c) & 1) * 0x48);
  *(char *)(lVar6 + 0x1888) = cVar1;
  cVar2 = *(char *)(lVar6 + 0x1889);
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x2370) == 0) {
    if (cVar1 == cVar2) goto LAB_1800911c4;
    if (cVar1 != '\0') goto LAB_180091164;
    puStack_88 = &unknown_var_3480_ptr;
    puStack_80 = auStack_70;
    auStack_70[0] = 0;
    uStack_78 = 0x17;
    uVar11 = strcpy_s(auStack_70,0x40,&unknown_var_1664_ptr);
    uStack_b8 = 1;
    uVar11 = FUN_180157390(uVar11,&plStack_98,&puStack_88,0);
    FUN_180060b80(lVar6 + 0x1698,uVar11);
    if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    puStack_88 = &unknown_var_720_ptr;
    (**(code **)(**(longlong **)(lVar6 + 0x1698) + 0x60))();
LAB_180091192:
    (**(code **)(*_DAT_180c86878 + 0x10))();
  }
  else {
LAB_180091164:
    if (*(longlong **)(lVar6 + 0x1698) != (longlong *)0x0) {
      cVar7 = (**(code **)(**(longlong **)(lVar6 + 0x1698) + 0xd8))();
      if (cVar7 != '\0') {
        (**(code **)(**(longlong **)(lVar6 + 0x1698) + 0x68))();
        goto LAB_180091192;
      }
    }
  }
  if (((cVar1 != cVar2) && (_DAT_180c8a9c0 != 0)) && (*(longlong *)(_DAT_180c8a9c0 + 0x10) != 0)) {
    (**(code **)(_DAT_180c8a9c0 + 0x80))(*(int8_t *)(lVar6 + 0x1888));
  }
LAB_1800911c4:
  FUN_180093af0(lVar6);
  FUN_1800905f0(lVar6 + 0x30);
  if ((system_debug_flag == '\0') && (*(int *)(_DAT_180c86908 + 0x7e0) == 0)) {
    if ((**(char **)(_DAT_180c868d0 + 0x2010) == '\0') ||
       (*(char *)(*(longlong *)(_DAT_180c86870 + 8) + 0xbc +
                 (ulonglong)(*(uint *)(*(longlong *)(_DAT_180c86870 + 8) + 0x13c) & 1) * 0x48) ==
        '\0')) {
      FUN_180171fb0(*(uint64_t *)(_DAT_180c86870 + 8),0);
    }
    else {
      lVar3 = *(longlong *)(_DAT_180c86870 + 8);
      uVar8 = (ulonglong)(*(uint *)(lVar3 + 0x13c) & 1);
      lVar4 = *(longlong *)(_DAT_180c86870 + 8);
      uVar9 = (ulonglong)(*(uint *)(lVar4 + 0x13c) & 1);
      lVar5 = *(longlong *)(_DAT_180c86870 + 8);
      uVar10 = (ulonglong)(*(uint *)(lVar5 + 0x13c) & 1);
      iStack_a4 = *(int *)(lVar4 + 0xf0 + uVar9 * 0x48) + *(int *)(lVar3 + 0xb0 + uVar8 * 0x48);
      iStack_a8 = *(int *)(lVar4 + 0xec + uVar9 * 0x48) + *(int *)(lVar3 + 0xac + uVar8 * 0x48);
      iStack_9c = *(int *)(lVar5 + 0xf0 + uVar10 * 0x48) + *(int *)(lVar3 + 0xb8 + uVar8 * 0x48);
      iStack_a0 = *(int *)(lVar5 + 0xec + uVar10 * 0x48) + *(int *)(lVar3 + 0xb4 + uVar8 * 0x48);
      FUN_180171fb0(*(uint64_t *)(_DAT_180c86870 + 8),&iStack_a8);
      lVar3 = *(longlong *)(_DAT_180c868d0 + 0x2010);
      FUN_180093780(lVar3,*(int32_t *)(lVar3 + 4),*(int32_t *)(lVar3 + 8));
      lVar3 = _DAT_180c868d0;
      *(float *)(lVar6 + 0x17e0) =
           (float)*(int *)(*(longlong *)(_DAT_180c868d0 + 0x2010) + 4) / *(float *)(lVar6 + 0x17ec);
      *(float *)(lVar6 + 0x17e4) =
           (float)*(int *)(*(longlong *)(lVar3 + 0x2010) + 8) / *(float *)(lVar6 + 0x17f0);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800913a0(void)
void FUN_1800913a0(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = *(char **)(_DAT_180c868d0 + 0x2010);
  iVar2 = (int)(*(float *)(_DAT_180c86950 + 0x17f0) * *(float *)(_DAT_180c86950 + 0x17e4));
  iVar3 = (int)(*(float *)(_DAT_180c86950 + 0x17ec) * *(float *)(_DAT_180c86950 + 0x17e0));
  if (*pcVar1 == '\0') {
    *(int *)(pcVar1 + 4) = iVar3;
    *(int *)(pcVar1 + 8) = iVar2;
    *pcVar1 = '\x01';
    return;
  }
  if ((*(int *)(pcVar1 + 4) == iVar3) && (*(int *)(pcVar1 + 8) == iVar2)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&unknown_var_9840_ptr,*(int *)(pcVar1 + 4),*(int32_t *)(pcVar1 + 8),iVar3
                ,iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



