#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part226.c - 2 个函数

// 函数: void FUN_18019c6e0(longlong param_1,longlong param_2)
void FUN_18019c6e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  float fVar13;
  float fVar14;
  float fStackX_8;
  float fStackX_c;
  uint64_t uStack_168;
  int32_t uStack_160;
  int32_t uStack_15c;
  int16_t uStack_158;
  int8_t uStack_156;
  int32_t uStack_154;
  int8_t uStack_150;
  uint64_t uStack_148;
  longlong lStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  int32_t uStack_110;
  int16_t uStack_10c;
  uint64_t uStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  int8_t uStack_f4;
  int32_t uStack_f0;
  uint64_t uStack_ec;
  int16_t uStack_e4;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int8_t uStack_c4;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  
  uStack_a8 = 0xfffffffffffffffe;
  lVar9 = *(longlong *)(param_1 + 0x380);
  if ((lVar9 != 0) && (*(longlong *)(param_1 + 0x81f0) != 0)) {
    uVar8 = *(uint64_t *)(*(longlong *)(param_1 + 0x81f0) + 4);
    fStackX_c = (float)((ulonglong)uVar8 >> 0x20);
    fStackX_8 = (float)uVar8;
    fVar13 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
    if (fVar13 <= 1e-07) {
      fStackX_8 = 0.0;
      fStackX_c = 1.0;
    }
    else {
      fVar13 = 1.0 / SQRT(fVar13);
      fStackX_8 = fStackX_8 * fVar13;
      fStackX_c = fStackX_c * fVar13;
    }
    *(float *)(lVar9 + 0x94) = fStackX_8;
    *(float *)(lVar9 + 0x98) = fStackX_c;
    fVar13 = (*(float *)(*(longlong *)(param_1 + 0x81f0) + 0xc) - 1.0) * 0.33333334;
    if (0.0 <= fVar13) {
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
    }
    else {
      fVar13 = 0.0;
    }
    fVar13 = (4.5 - fVar13 * 3.0) * fVar13 * fVar13 + 1.5;
    if (fVar13 <= 0.001) {
      fVar13 = 0.001;
    }
    *(float *)(*(longlong *)(param_1 + 0x380) + 0xa4) = fVar13;
    lVar9 = *(longlong *)(param_1 + 0x380);
  }
  FUN_18019cf00(param_2 + 0x125b8,lVar9);
  lVar9 = *(longlong *)(param_2 + 0x12608);
  if (lVar9 != 0) {
    uVar8 = FUN_1801c1880(lVar9,&unknown_var_2504_ptr);
    *(uint64_t *)(param_2 + 0x12610) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&unknown_var_2496_ptr);
    *(uint64_t *)(param_2 + 0x12618) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&unknown_var_2528_ptr);
    *(uint64_t *)(param_2 + 0x12620) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&unknown_var_2512_ptr);
    *(uint64_t *)(param_2 + 0x12628) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&unknown_var_2552_ptr);
    *(uint64_t *)(param_2 + 0x12630) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&unknown_var_2544_ptr);
    *(uint64_t *)(param_2 + 0x12638) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&unknown_var_2584_ptr);
    *(uint64_t *)(param_2 + 0x12640) = uVar8;
  }
  bVar5 = true;
  for (lVar9 = *(longlong *)(param_1 + 0x60ba0); lVar9 != param_1 + 0x60b98;
      lVar9 = func_0x00018066bd70(lVar9)) {
    if (*(char *)(*(longlong *)(lVar9 + 0x20) + 0x821) == '\0') {
      bVar5 = false;
    }
  }
  if (bVar5) {
    *(float *)(*(longlong *)(param_1 + 0x380) + 0x90) =
         *(float *)(param_1 + 0x5b9c) + *(float *)(param_1 + 0x5b9c);
    fVar14 = 1.0 - *(float *)(param_1 + 0x3ecc);
    fVar13 = 0.0;
    if ((0.0 <= fVar14) && (fVar13 = fVar14, 1.0 <= fVar14)) {
      fVar13 = 1.0;
    }
    *(float *)(*(longlong *)(param_1 + 0x380) + 0xa8) = fVar13;
    *(float *)(*(longlong *)(param_1 + 0x380) + 0xa0) = *(float *)(param_1 + 0x3ec8) * 50.0 + 0.001;
    *(float *)(*(longlong *)(param_1 + 0x380) + 0x9c) = (float)*(byte *)(param_1 + 0x3f31);
    *(int8_t *)(param_1 + 0x3f31) = 0;
    lVar9 = *(longlong *)(param_1 + 0x380);
    uVar8 = *(uint64_t *)(lVar9 + 0x98);
    *(uint64_t *)(param_2 + 0x12650) = *(uint64_t *)(lVar9 + 0x90);
    *(uint64_t *)(param_2 + 0x12658) = uVar8;
    uVar8 = *(uint64_t *)(lVar9 + 0xa8);
    *(uint64_t *)(param_2 + 0x12660) = *(uint64_t *)(lVar9 + 0xa0);
    *(uint64_t *)(param_2 + 0x12668) = uVar8;
    *(int8_t *)(param_2 + 0x125b0) = 1;
    uStack_98 = 0x3f800000;
    uStack_90 = 0;
    uStack_88 = 0x3f80000000000000;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0x3f800000;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_5c = 0x3f800000;
    uStack_60 = *(int32_t *)(param_1 + 0x3ec4);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x398) + 0x1b8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_15c = 0xffffffff;
    uStack_158 = 1;
    uStack_156 = 0;
    uStack_154 = 0xffffffff;
    uStack_150 = 1;
    uStack_148 = 0;
    lStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 3;
    uStack_120 = 0;
    iVar7 = FUN_18022d470(plVar2,&uStack_168);
    if (iVar7 == 0) {
      if (plVar2[0x17] != *(longlong *)(*(longlong *)(param_1 + 0x380) + 0x38)) {
        FUN_18022cd30(plVar2,0);
        FUN_18022cd30(plVar2,1,*(uint64_t *)(*(longlong *)(param_1 + 0x380) + 0x40));
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x3a0) + 0x1b8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        FUN_18022cd30(plVar3,0,*(uint64_t *)(*(longlong *)(param_1 + 0x380) + 0x38));
        FUN_18022cd30(plVar3,1,*(uint64_t *)(*(longlong *)(param_1 + 0x380) + 0x40));
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3);
        }
      }
      uStack_118 = 0;
      uStack_110 = 0xffffffff;
      uStack_10c = 0xff00;
      uStack_108 = 0;
      uStack_100 = 0xffffffffffffffff;
      uStack_f8 = 0xffffffff;
      uStack_f4 = 0xff;
      uStack_f0 = 0xffffffff;
      uStack_ec = 0;
      uStack_e4 = 0x400;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_b0 = 0;
      lVar9 = *(longlong *)(param_1 + 0x398);
      uVar8 = *(uint64_t *)(param_1 + 0x3e9c);
      *(uint64_t *)(lVar9 + 0x238) = *(uint64_t *)(param_1 + 0x3e94);
      *(uint64_t *)(lVar9 + 0x240) = uVar8;
      lVar9 = *(longlong *)(param_1 + 0x398);
      uVar8 = *(uint64_t *)(param_1 + 0x3eac);
      *(uint64_t *)(lVar9 + 0x248) = *(uint64_t *)(param_1 + 0x3ea4);
      *(uint64_t *)(lVar9 + 0x250) = uVar8;
      lVar9 = *(longlong *)(param_1 + 0x3a0);
      uVar8 = *(uint64_t *)(param_1 + 0x3e9c);
      *(uint64_t *)(lVar9 + 0x238) = *(uint64_t *)(param_1 + 0x3e94);
      *(uint64_t *)(lVar9 + 0x240) = uVar8;
      lVar9 = *(longlong *)(param_1 + 0x3a0);
      uVar8 = *(uint64_t *)(param_1 + 0x3eac);
      *(uint64_t *)(lVar9 + 0x248) = *(uint64_t *)(param_1 + 0x3ea4);
      *(uint64_t *)(lVar9 + 0x250) = uVar8;
      lVar10 = FUN_1800dae20();
      lVar9 = *(longlong *)(param_1 + 0x398);
      lVar12 = *(longlong *)(lVar9 + 0x1b8);
      cVar6 = *(char *)(lVar12 + 0x38c);
      if (cVar6 == '\t') {
        cVar6 = func_0x00018022d300();
        *(char *)(lVar12 + 0x38c) = cVar6;
      }
      cVar6 = FUN_18007b240(lVar9,lVar9 + 0x1e8,cVar6,1);
      if (cVar6 == '\0') {
        *(byte *)(lVar9 + 0xfe) = *(byte *)(lVar9 + 0xfe) & 0xfb;
      }
      lVar9 = *(longlong *)(param_1 + 0x398);
      lVar12 = plVar2[0x52];
      *(longlong *)(lVar9 + 0x2a8) = plVar2[0x51];
      *(longlong *)(lVar9 + 0x2b0) = lVar12;
      lVar9 = *(longlong *)(param_1 + 0x398);
      lVar12 = plVar2[0x54];
      *(longlong *)(lVar9 + 0x2b8) = plVar2[0x53];
      *(longlong *)(lVar9 + 0x2c0) = lVar12;
      lVar11 = FUN_1800dae20();
      lVar9 = *(longlong *)(param_1 + 0x3a0);
      lVar12 = *(longlong *)(lVar9 + 0x1b8);
      cVar6 = *(char *)(lVar12 + 0x38c);
      if (cVar6 == '\t') {
        cVar6 = func_0x00018022d300();
        *(char *)(lVar12 + 0x38c) = cVar6;
      }
      cVar6 = FUN_18007b240(lVar9,lVar9 + 0x1e8,cVar6,1);
      if (cVar6 == '\0') {
        *(byte *)(lVar9 + 0xfe) = *(byte *)(lVar9 + 0xfe) & 0xfb;
      }
      lVar9 = *(longlong *)(param_1 + 0x3a0);
      lVar12 = plVar2[0x52];
      *(longlong *)(lVar9 + 0x2a8) = plVar2[0x51];
      *(longlong *)(lVar9 + 0x2b0) = lVar12;
      lVar9 = *(longlong *)(param_1 + 0x3a0);
      lVar12 = plVar2[0x54];
      *(longlong *)(lVar9 + 0x2b8) = plVar2[0x53];
      *(longlong *)(lVar9 + 0x2c0) = lVar12;
      if (6 < *(int *)(param_1 + 0x27c0)) {
        lVar9 = *(longlong *)(param_1 + 0x398);
        if (*(char *)(lVar9 + 0xf9) == '\0') {
          uVar8 = FUN_18062b1e0(system_memory_pool_ptr,0xc0,8,9);
          uVar8 = FUN_180084ea0(uVar8);
          *(uint64_t *)(lVar9 + 0x1d8) = uVar8;
          LOCK();
          *(int8_t *)(lVar9 + 0xf9) = 1;
          UNLOCK();
        }
        FUN_1802decc0(lVar10,param_2,*(uint64_t *)(param_1 + 0x398),&uStack_98,&uStack_118);
        uVar8 = *(uint64_t *)(*(longlong *)(param_1 + 0x398) + 0x1d8);
        uVar4 = *(uint64_t *)(*(longlong *)(param_1 + 0x398) + 0x1b8);
        uVar1 = *(uint *)(lVar10 + 0x314);
        *(uint *)(lVar10 + 0x314) = uVar1 & *(uint *)(param_2 + 0x1c4);
        cVar6 = FUN_1800d6260(uVar8,param_2,lVar10,0,uVar4,uVar8,0);
        if (cVar6 == '\0') {
          FUN_1800df980(extraout_XMM0_Qa,lVar10,param_2);
          *(longlong *)(param_2 + 0x34e0) = lVar10;
        }
        else {
          *(uint *)(lVar10 + 0x314) = uVar1;
        }
        lVar9 = *(longlong *)(param_1 + 0x3a0);
        if (*(char *)(lVar9 + 0xf9) == '\0') {
          uVar8 = FUN_18062b1e0(system_memory_pool_ptr,0xc0,8,9);
          uVar8 = FUN_180084ea0(uVar8);
          *(uint64_t *)(lVar9 + 0x1d8) = uVar8;
          LOCK();
          *(int8_t *)(lVar9 + 0xf9) = 1;
          UNLOCK();
        }
        FUN_1802decc0(lVar11,param_2,*(uint64_t *)(param_1 + 0x3a0),&uStack_98,&uStack_118);
        uVar8 = *(uint64_t *)(*(longlong *)(param_1 + 0x3a0) + 0x1d8);
        uVar4 = *(uint64_t *)(*(longlong *)(param_1 + 0x3a0) + 0x1b8);
        uVar1 = *(uint *)(lVar11 + 0x314);
        *(uint *)(lVar11 + 0x314) = uVar1 & *(uint *)(param_2 + 0x1c4);
        cVar6 = FUN_1800d6260(uVar8,param_2,lVar11,0,uVar4,uVar8,0);
        if (cVar6 == '\0') {
          FUN_1800df980(extraout_XMM0_Qa_00,lVar11,param_2);
          *(longlong *)(param_2 + 0x34d8) = lVar11;
        }
        else {
          *(uint *)(lVar11 + 0x314) = uVar1;
        }
      }
    }
    if (lStack_140 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  else {
    *(int8_t *)(param_2 + 0x125b0) = 0;
  }
  return;
}



longlong * FUN_18019cf00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)*param_1;
  *param_1 = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[1];
  param_1[1] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[2];
  param_1[2] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[3];
  param_1[3] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[4];
  param_1[4] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[5];
  param_1[5] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[6];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[6];
  param_1[6] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[7];
  param_1[7] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[8];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[8];
  param_1[8] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[9];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[9];
  param_1[9] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = (longlong *)param_2[10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[10];
  param_1[10] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18019d190(uint64_t *param_1,ulonglong param_2)
void FUN_18019d190(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  char cVar4;
  int iVar5;
  int32_t uVar6;
  uint uVar7;
  longlong lVar8;
  void *puVar9;
  ulonglong uVar10;
  int8_t *puVar11;
  void *puVar12;
  uint64_t uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint64_t *puVar18;
  float fVar19;
  uint64_t *puStackX_8;
  ulonglong uStackX_10;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t uStack_d0;
  float fStack_c8;
  void *puStack_c0;
  code *pcStack_b8;
  void *puStack_b0;
  int8_t *puStack_a8;
  uint uStack_a0;
  ulonglong uStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  
  plVar1 = (longlong *)*core_system_data_memory;
  puStackX_8 = param_1;
  uStackX_10 = param_2;
  iVar5 = _Mtx_lock(0x180c91970);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar13 = SYSTEM_DATA_MANAGER_A;
  uStackX_18 = SYSTEM_DATA_MANAGER_A;
  uStackX_20 = SYSTEM_DATA_MANAGER_A;
  SYSTEM_DATA_MANAGER_A = *plVar1;
  if (*(char *)(param_1 + 0xc0e7) == '\0') {
    FUN_180199930(param_1);
  }
  FUN_1801299b0(&unknown_var_4608_ptr,0,0);
  uStackX_10 = 0;
  cVar4 = FUN_18010f6f0(&unknown_var_3536_ptr,&uStackX_10,0);
  if (cVar4 != '\0') {
    *(int8_t *)(param_1 + 0xc0e7) = 0;
  }
  puVar9 = &system_buffer_ptr;
  if ((void *)param_1[0x9c] != (void *)0x0) {
    puVar9 = (void *)param_1[0x9c];
  }
  FUN_18010f010(&unknown_var_2568_ptr,puVar9);
  if (*(int *)(param_1 + 0xc0ea) != 0) {
    puVar9 = &system_buffer_ptr;
    if ((void *)param_1[0xc0e9] != (void *)0x0) {
      puVar9 = (void *)param_1[0xc0e9];
    }
    FUN_18010f010(&unknown_var_2616_ptr,puVar9);
  }
  if (*(int *)(param_1 + 0xc0ee) != 0) {
    puVar9 = &system_buffer_ptr;
    if ((void *)param_1[0xc0ed] != (void *)0x0) {
      puVar9 = (void *)param_1[0xc0ed];
    }
    FUN_18010f010(&unknown_var_2600_ptr,puVar9);
  }
  if (*(int *)(param_1 + 0x606) != 0) {
    puVar9 = &system_buffer_ptr;
    if ((void *)param_1[0x605] != (void *)0x0) {
      puVar9 = (void *)param_1[0x605];
    }
    FUN_18010f010(&unknown_var_2648_ptr,puVar9);
  }
  lVar8 = FUN_180149750(*(int32_t *)((longlong)param_1 + 0x3054));
  puVar9 = &system_buffer_ptr;
  if (*(void **)(lVar8 + 8) != (void *)0x0) {
    puVar9 = *(void **)(lVar8 + 8);
  }
  FUN_18010f010(&unknown_var_2632_ptr,puVar9);
  FUN_18010f010(&unknown_var_2672_ptr,(double)*(float *)((longlong)param_1 + 0x3044));
  puVar9 = &system_data_b3b8;
  if (*(char *)((longlong)param_1 + 0x607a2) != '\0') {
    puVar9 = &unknown_var_2664_ptr;
  }
  FUN_18010f010(&unknown_var_2696_ptr,puVar9);
  puStack_b0 = &system_data_buffer_ptr;
  uStack_98 = 0;
  puStack_a8 = (int8_t *)0x0;
  uStack_a0 = 0;
  puStack_90 = (uint64_t *)0x0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  uStack_78 = 3;
  FUN_1801b84e0(param_1 + 0xc060,&puStack_90);
  (**(code **)(puStack_b0 + 0x10))(&puStack_b0,&system_buffer_ptr);
  uVar10 = (longlong)puStack_88 - (longlong)puStack_90 >> 5;
  uStackX_10 = uVar10;
  if (uVar10 != 0) {
    iVar5 = 1;
    puVar18 = puStack_90 + 1;
    do {
      puVar9 = &system_buffer_ptr;
      if ((void *)*puVar18 != (void *)0x0) {
        puVar9 = (void *)*puVar18;
      }
      lVar8 = -1;
      do {
        lVar16 = lVar8;
        lVar8 = lVar16 + 1;
      } while (puVar9[lVar8] != '\0');
      if (0 < (int)lVar8) {
        iVar5 = uStack_a0 + (int)lVar8;
        if (iVar5 != 0) {
          uVar15 = iVar5 + 1;
          if (puStack_a8 == (int8_t *)0x0) {
            if ((int)uVar15 < 0x10) {
              uVar15 = 0x10;
            }
            puStack_a8 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar15,0x13);
            *puStack_a8 = 0;
          }
          else {
            if (uVar15 <= (uint)uStack_98) goto LAB_18019d47d;
            puStack_a8 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_a8,uVar15,0x10,0x13);
          }
          uVar6 = FUN_18064e990(puStack_a8);
          uStack_98 = CONCAT44(uStack_98._4_4_,uVar6);
        }
LAB_18019d47d:
                    // WARNING: Subroutine does not return
        memcpy(puStack_a8 + uStack_a0,puVar9,(longlong)((int)lVar16 + 2));
      }
      uVar14 = (ulonglong)iVar5;
      if (uVar14 < uVar10) {
        uVar15 = uStack_a0 + 2;
        if (uVar15 != 0) {
          uVar7 = uStack_a0 + 3;
          if (puStack_a8 == (int8_t *)0x0) {
            if ((int)uVar7 < 0x10) {
              uVar7 = 0x10;
            }
            puStack_a8 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar7,0x13);
            *puStack_a8 = 0;
          }
          else {
            uVar10 = uStackX_10;
            if (uVar7 <= (uint)uStack_98) goto LAB_18019d50f;
            puStack_a8 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_a8,uVar7,0x10,0x13);
          }
          uVar6 = FUN_18064e990(puStack_a8);
          uStack_98 = CONCAT44(uStack_98._4_4_,uVar6);
          uVar10 = uStackX_10;
        }
LAB_18019d50f:
        *(int16_t *)(puStack_a8 + uStack_a0) = 0x202c;
        *(int8_t *)((longlong)(puStack_a8 + uStack_a0) + 2) = 0;
        uStack_a0 = uVar15;
      }
      iVar5 = iVar5 + 1;
      puVar18 = puVar18 + 4;
      uVar13 = uStackX_18;
      param_1 = puStackX_8;
    } while (uVar14 < uVar10);
  }
  puVar3 = puStack_88;
  puVar18 = puStack_90;
  puVar9 = &system_data_b3b8;
  if ((0 < (int)uStack_a0) && (lVar8 = strstr(puStack_a8,&unknown_var_2740_ptr), lVar8 != 0)) {
    iVar17 = 6;
    iVar5 = (int)lVar8 - (int)puStack_a8;
    if (uStack_a0 < iVar5 + 6U) {
      iVar17 = uStack_a0 - iVar5;
    }
    uVar15 = iVar5 + iVar17;
    if (uVar15 < uStack_a0) {
      lVar8 = (longlong)(int)uVar15;
      do {
        puStack_a8[lVar8 - iVar17] = puStack_a8[lVar8];
        uVar15 = uVar15 + 1;
        lVar8 = lVar8 + 1;
      } while (uVar15 < uStack_a0);
    }
    uStack_a0 = uStack_a0 - iVar17;
    puStack_a8[uStack_a0] = 0;
  }
  puVar11 = &system_buffer_ptr;
  if (puStack_a8 != (int8_t *)0x0) {
    puVar11 = puStack_a8;
  }
  FUN_18010f010(&unknown_var_2720_ptr,puVar11);
  FUN_18010f010(&unknown_var_2768_ptr,*(int32_t *)((longlong)param_1 + 0x607a4));
  FUN_18010f010(&unknown_var_2752_ptr,*(int32_t *)(param_1 + 0xc0f5));
  FUN_18010f010(&unknown_var_2816_ptr,*(int32_t *)((longlong)param_1 + 0x607ac));
  FUN_18010f010(&unknown_var_2792_ptr,(longlong)(param_1[0x5dd] - param_1[0x5dc]) >> 3);
  FUN_18010f010(&unknown_var_2864_ptr,
                (int)((*(int *)(param_1 + 0xc0f7) >> 0x1f & 0x3ffU) + *(int *)(param_1 + 0xc0f7)) >>
                10);
  FUN_18010f010(&unknown_var_2840_ptr,*(int32_t *)(param_1 + 0xc0f8));
  FUN_18010f010(&unknown_var_2936_ptr,*(int32_t *)((longlong)param_1 + 0x607c4));
  FUN_18010f010(&unknown_var_2912_ptr,*(int32_t *)(param_1 + 0xc0f9));
  FUN_18010f010(&unknown_var_3008_ptr,*(int32_t *)((longlong)param_1 + 0x607cc));
  FUN_18010f010(&unknown_var_2960_ptr,(double)*(float *)(param_1 + 0x87),
                (double)*(float *)((longlong)param_1 + 0x43c),(double)*(float *)(param_1 + 0x88));
  FUN_1801c1720(param_1 + 0x81,&uStack_d0);
  fVar19 = fStack_c8 * 57.29578;
  FUN_1801c1720(param_1 + 0x81,&uStack_d0);
  if ((uStack_d0._4_4_ <= -0.01) || (0.01 <= uStack_d0._4_4_)) {
    fVar19 = fVar19 + 180.0;
  }
  if (fVar19 < 0.0) {
    fVar19 = fVar19 + 360.0;
  }
  FUN_18010f010(&unknown_var_3064_ptr,(double)*(float *)(param_1 + 0x7ea));
  FUN_18010f010(&unknown_var_3040_ptr,(double)fVar19);
  puVar12 = &system_data_b3b8;
  if (*(char *)((longlong)param_1 + 0x607a1) != '\0') {
    puVar12 = &unknown_var_2664_ptr;
  }
  FUN_18010f010(&unknown_var_3120_ptr,puVar12);
  if ((0.0 < *(float *)((longlong)param_1 + 0x300c) * *(float *)((longlong)param_1 + 0x300c) +
             *(float *)(param_1 + 0x602) * *(float *)(param_1 + 0x602)) ||
     (0.0 < *(float *)((longlong)param_1 + 0x3004) * *(float *)((longlong)param_1 + 0x3004) +
            *(float *)(param_1 + 0x601) * *(float *)(param_1 + 0x601))) {
    puVar9 = &unknown_var_2664_ptr;
  }
  FUN_18010f010(&unknown_var_3088_ptr,puVar9);
  if (*(char *)((longlong)param_1 + 0x564) == '\0') {
    puVar9 = &system_data_b57c;
  }
  else {
    puVar9 = *(void **)(&unknown_var_6504_ptr + (longlong)*(int *)(param_1 + 0xad) * 8);
  }
  FUN_18010f010(&unknown_var_3144_ptr,puVar9);
  puStackX_8 = (uint64_t *)0x0;
  cVar4 = FUN_18010f6f0(&unknown_var_3200_ptr,&puStackX_8,0);
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0xc0f4) == '\0') goto LAB_18019d905;
  }
  else {
    *(int8_t *)(param_1 + 0xc0f4) = 1;
  }
  lVar8 = SYSTEM_DATA_MANAGER_A;
  if (*(int *)(param_1 + 0xc0f2) != 0) {
    puStackX_8 = (uint64_t *)CONCAT71(puStackX_8._1_7_,1);
    *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c04) = 0x43c80000;
    *(int32_t *)(lVar8 + 0x1c08) = 0x43960000;
    *(int32_t *)(lVar8 + 0x1bd4) = 4;
    FUN_1801299b0(&unknown_var_3184_ptr,&puStackX_8,0);
    uStackX_10 = 0xbf800000bf800000;
    puVar9 = &system_buffer_ptr;
    if ((void *)param_1[0xc0f1] != (void *)0x0) {
      puVar9 = (void *)param_1[0xc0f1];
    }
    FUN_1801166f0(&unknown_var_3256_ptr,puVar9,*(int32_t *)(param_1 + 0xc0f2),&uStackX_10,0x104400,0,0);
    if ((char)puStackX_8 == '\0') {
      *(int8_t *)(param_1 + 0xc0f4) = 0;
    }
    FUN_18012cfe0();
  }
LAB_18019d905:
  puStackX_8 = (uint64_t *)0x0;
  cVar4 = FUN_18010f6f0(&unknown_var_3224_ptr,&puStackX_8,0);
  FUN_18012cfe0();
  puVar2 = puVar18;
  if (cVar4 != '\0') {
    puStackX_8 = &uStack_d0;
    uStack_d0 = param_1 + 0xc182;
    puStack_c0 = &unknown_var_1904_ptr;
    pcStack_b8 = FUN_18031c090;
    FUN_18005c650(&uStack_d0);
  }
  for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0);
  }
  if (puVar18 == (uint64_t *)0x0) {
    puStack_b0 = &system_data_buffer_ptr;
    if (puStack_a8 == (int8_t *)0x0) {
      puStack_a8 = (int8_t *)0x0;
      uStack_98 = uStack_98 & 0xffffffff00000000;
      puStack_b0 = &system_state_ptr;
      SYSTEM_DATA_MANAGER_A = uVar13;
      iVar5 = _Mtx_unlock(0x180c91970);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18019da10(int32_t param_1,longlong param_2)

{
  int32_t uVar1;
  longlong ****pppplVar2;
  longlong ***ppplVar3;
  longlong ***ppplVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint64_t uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *****in_RCX;
  longlong ****pppplVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *****ppppplVar17;
  longlong ***ppplStackX_8;
  longlong alStackX_10 [2];
  longlong ****pppplStackX_20;
  longlong ***ppplStack_b8;
  longlong ***ppplStack_b0;
  longlong ***ppplStack_a8;
  longlong **pplStack_a0;
  longlong **pplStack_98;
  longlong ****pppplStack_90;
  longlong lStack_88;
  longlong ***ppplStack_80;
  longlong *plStack_78;
  uint64_t uStack_70;
  longlong *plStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  void *puStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x3580) + 0x530);
  alStackX_10[0] = param_2;
  if (lVar10 != 0) {
    lVar8 = *(longlong *)(lVar10 + 0x58) - *(longlong *)(lVar10 + 0x50) >> 3;
    if (lVar8 != 0) {
      if (in_RCX[8] != (longlong ****)0x0) {
        FUN_180080810(*(longlong *)(*(longlong *)(lVar10 + 0x50) + -8 + lVar8 * 8) + 0x168);
      }
      lVar10 = alStackX_10[0];
      if (*(char *)(in_RCX + 3) == '\0') {
        param_1 = 0x3f800000;
      }
      else {
        param_1 = powf(0x40000000,*(int32_t *)((longlong)in_RCX + 0x2c));
      }
      *(int32_t *)(lVar10 + 0x11cec) = param_1;
    }
  }
  lVar10 = alStackX_10[0];
  *(int8_t *)(alStackX_10[0] + 0x12c09) = *(int8_t *)(in_RCX + 3);
  pppplVar13 = in_RCX[0x77];
  if (pppplVar13 != (longlong ****)0x0) {
    ppplStack_a8 = (longlong ***)pppplVar13;
    param_1 = (*(code *)(*pppplVar13)[5])(pppplVar13);
    ppplStack_a8 = *(longlong ****)(lVar10 + 0x124b0);
    *(longlong *****)(lVar10 + 0x124b0) = pppplVar13;
    if (ppplStack_a8 != (longlong ***)0x0) {
      param_1 = (**(code **)((longlong)*ppplStack_a8 + 0x38))();
    }
  }
  pppplVar13 = in_RCX[0x6b];
  if ((pppplVar13 != (longlong ****)0x0) &&
     (pppplVar2 = in_RCX[0xc170], pppplVar2 != (longlong ****)0x0)) {
    ppplVar3 = pppplVar2[0x38a];
    ppplVar4 = pppplVar2[0x389];
    if (ppplVar4 != (longlong ***)0x0) {
      pplStack_a0 = (longlong **)ppplVar4;
      param_1 = (*(code *)(*ppplVar4)[5])(ppplVar4);
    }
    pplStack_a0 = (longlong **)pppplVar13[0xe];
    pppplVar13[0xe] = ppplVar4;
    if ((longlong ***)pplStack_a0 != (longlong ***)0x0) {
      param_1 = (*(code *)(*pplStack_a0)[7])();
    }
    if (ppplVar3 != (longlong ***)0x0) {
      pplStack_98 = (longlong **)ppplVar3;
      param_1 = (*(code *)(*ppplVar3)[5])(ppplVar3);
    }
    pplStack_98 = (longlong **)pppplVar13[0xd];
    pppplVar13[0xd] = ppplVar3;
    if ((longlong ***)pplStack_98 != (longlong ***)0x0) {
      param_1 = (*(code *)(*pplStack_98)[7])();
    }
  }
  uVar16 = 0;
  pppplVar13 = in_RCX[0xc179];
  uVar12 = uVar16;
  uVar15 = uVar16;
  if ((longlong)in_RCX[0xc17a] - (longlong)pppplVar13 >> 6 != 0) {
    do {
      lStack_88 = alStackX_10[0];
      plVar11 = *(longlong **)(uVar12 + 0x38 + (longlong)pppplVar13);
      pppplStack_90 = (longlong ****)in_RCX;
      if (plVar11 == (longlong *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return uVar12;
      }
      param_1 = (**(code **)(*plVar11 + 0x10))(plVar11,&lStack_88,&pppplStack_90);
      uVar14 = (int)uVar15 + 1;
      pppplVar13 = in_RCX[0xc179];
      uVar12 = uVar12 + 0x40;
      uVar15 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)((longlong)in_RCX[0xc17a] - (longlong)pppplVar13 >> 6));
  }
  if (*(char *)(system_parameter_buffer + 0x12e0) != '\0') {
    param_1 = FUN_18019d190(in_RCX);
  }
  if (in_RCX[0xc170] != (longlong ****)0x0) {
    cVar6 = FUN_180160500(param_1,0x5f);
    if (cVar6 != '\0') {


