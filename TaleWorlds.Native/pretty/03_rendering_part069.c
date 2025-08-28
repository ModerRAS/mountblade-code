#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part069.c - 4 个函数

// 函数: void FUN_180306d80(uint64_t *param_1,int param_2)
void FUN_180306d80(uint64_t *param_1,int param_2)

{
  int8_t uVar1;
  longlong lVar2;
  uint uVar4;
  uint uVar5;
  void *puVar6;
  int8_t auStack_d8 [32];
  uint64_t *puStack_b8;
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  void *puStack_a0;
  void *puStack_98;
  int32_t uStack_90;
  uint8_t auStack_88 [32];
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  ulonglong uStack_30;
  longlong lVar3;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_d8;
  *param_1 = &unknown_var_3952_ptr;
  uVar5 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  *param_1 = &unknown_var_3832_ptr;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  LOCK();
  *(int32_t *)(param_1 + 0xf) = 0;
  UNLOCK();
  uVar4 = uVar5;
  do {
    param_1[(longlong)(int)uVar4 + 0x10] = 0;
    LOCK();
    *(int8_t *)((longlong)param_1 + (longlong)(int)uVar4 + 0x880) = 1;
    UNLOCK();
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  LOCK();
  *(int32_t *)(param_1 + 0x130) = 0;
  UNLOCK();
  uVar4 = uVar5;
  do {
    param_1[(longlong)(int)uVar4 + 0x131] = 0;
    LOCK();
    *(int8_t *)((longlong)param_1 + (longlong)(int)uVar4 + 0x1188) = 1;
    UNLOCK();
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x100);
  LOCK();
  *(int32_t *)(param_1 + 0x251) = 0;
  UNLOCK();
  do {
    param_1[(longlong)(int)uVar5 + 0x252] = 0;
    LOCK();
    *(int8_t *)((longlong)param_1 + (longlong)(int)uVar5 + 0x1a90) = 1;
    UNLOCK();
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x100);
  param_1[0x372] = 0;
  param_1[0x373] = 0;
  param_1[0x374] = 0;
  *(int32_t *)(param_1 + 0x375) = 3;
  puStack_b8 = param_1 + 0x376;
  puStack_a8 = param_1;
  _Mtx_init_in_situ(puStack_b8,2);
  puStack_b8 = param_1 + 0x380;
  *puStack_b8 = &unknown_var_720_ptr;
  param_1[0x381] = 0;
  *(int32_t *)(param_1 + 0x382) = 0;
  *puStack_b8 = &unknown_var_672_ptr;
  param_1[0x381] = param_1 + 899;
  *(int32_t *)(param_1 + 0x382) = 0;
  *(int8_t *)(param_1 + 899) = 0;
  *(uint64_t *)((longlong)param_1 + 0x1c3c) = 0;
  param_1[0x389] = 0;
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0x15;
  strcpy_s(auStack_50,0x20,&unknown_var_3800_ptr);
  uVar1 = FUN_180051f00(system_main_module_state,&puStack_68);
  *(int8_t *)(param_1 + 0x38a) = uVar1;
  puStack_68 = &unknown_var_720_ptr;
  FUN_1803073e0(param_1);
  *(int *)(param_1 + 0x387) = param_2;
  puStack_a0 = &unknown_var_672_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xc;
  strcpy_s(auStack_88,0x20,&unknown_var_3784_ptr);
  *(int32_t *)(param_1 + 0x382) = uStack_90;
  puVar6 = &system_buffer_ptr;
  if (puStack_98 != (void *)0x0) {
    puVar6 = puStack_98;
  }
  strcpy_s(param_1[0x381],0x20,puVar6);
  puStack_a0 = &unknown_var_720_ptr;
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (*(char *)(*(longlong *)(&unknown_var_6504_ptr + (longlong)param_2 * 8) + lVar2) != '\0');
  if ((0 < (int)lVar2) && (*(uint *)(param_1 + 0x382) + (int)lVar2 < 0x1f)) {
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x382) + param_1[0x381],
           *(longlong *)(&unknown_var_6504_ptr + (longlong)param_2 * 8),(longlong)((int)lVar3 + 2));
  }
  *(uint64_t *)((longlong)param_1 + 0x1c3c) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_d8);
}



uint64_t FUN_180307050(uint64_t param_1,ulonglong param_2)

{
  FUN_180307090();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1c58);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00018030715f)
// WARNING: Removing unreachable block (ram,0x000180307170)
// WARNING: Removing unreachable block (ram,0x00018030718a)
// WARNING: Removing unreachable block (ram,0x000180307193)
// WARNING: Removing unreachable block (ram,0x0001803071b0)
// WARNING: Removing unreachable block (ram,0x0001803071b5)
// WARNING: Removing unreachable block (ram,0x0001803071be)
// WARNING: Removing unreachable block (ram,0x0001803071cc)
// WARNING: Removing unreachable block (ram,0x0001803071dd)
// WARNING: Removing unreachable block (ram,0x0001803071f4)
// WARNING: Removing unreachable block (ram,0x0001803071fd)
// WARNING: Removing unreachable block (ram,0x000180307221)
// WARNING: Removing unreachable block (ram,0x000180307240)
// WARNING: Removing unreachable block (ram,0x000180307250)
// WARNING: Removing unreachable block (ram,0x0001803072a1)
// WARNING: Removing unreachable block (ram,0x0001803072a7)
// WARNING: Removing unreachable block (ram,0x0001803072ce)
// WARNING: Removing unreachable block (ram,0x0001803072e7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180307090(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180307090(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_3832_ptr;
  FUN_180306c30();
  plVar1 = param_1 + 0x372;
  lVar3 = param_1[0x373] - *plVar1 >> 3;
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_18062b420(system_memory_pool_ptr,lVar3 * 8,*(uint *)(param_1 + 0x375) & 0xff,param_4,uVar4);
  }
  lVar2 = *plVar1;
  if (lVar2 != param_1[0x373]) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,lVar2,param_1[0x373] - lVar2);
  }
  if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  if ((longlong *)param_1[0x389] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x389] + 0x38))();
  }
  param_1[0x380] = &unknown_var_720_ptr;
  _Mtx_destroy_in_situ();
  if (*plVar1 == 0) {
    FUN_1800e7d00(param_1 + 0x251);
    FUN_1800e7d00(param_1 + 0x130);
    FUN_1800e7d00(param_1 + 0xf);
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xe] + 0x38))();
    }
    if ((longlong *)param_1[0xd] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xd] + 0x38))();
    }
    *param_1 = &unknown_var_3952_ptr;
    if (param_1[1] == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803073e0(longlong param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_1803073e0(longlong param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  int32_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t *puVar8;
  int32_t *puVar9;
  int iVar10;
  longlong lStackX_10;
  int32_t uVar11;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  uint uStack_80;
  int8_t auStack_78 [32];
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int8_t uStack_4c;
  int8_t uStack_4b;
  uint64_t uStack_48;
  
  lVar7 = ((longlong)render_system_control_config - (longlong)render_system_control_config) / 0x38;
  uStack_80 = render_system_control_config;
  if (lVar7 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_18062b420(system_memory_pool_ptr,lVar7 * 0x38,render_system_control_config & 0xff,param_4,0,
                          0xfffffffffffffffe);
  }
  puVar2 = render_system_control_config;
  lStack_88 = lVar7 * 0x38 + lVar3;
  lStack_98 = lVar3;
  if (render_system_control_config != render_system_control_config) {
    puVar9 = render_system_control_config + 9;
    lStack_90 = lVar3;
    do {
      FUN_180627ae0(lVar3,puVar9 + -9);
      *(int32_t *)(lVar3 + 0x20) = puVar9[-1];
      *(int32_t *)(lVar3 + 0x24) = *puVar9;
      *(int32_t *)(lVar3 + 0x28) = puVar9[1];
      *(int8_t *)(lVar3 + 0x2c) = *(int8_t *)(puVar9 + 2);
      *(int8_t *)(lVar3 + 0x2d) = *(int8_t *)((longlong)puVar9 + 9);
      *(uint64_t *)(lVar3 + 0x30) = *(uint64_t *)(puVar9 + 3);
      lVar3 = lVar3 + 0x38;
      puVar1 = puVar9 + 5;
      puVar9 = puVar9 + 0xe;
    } while (puVar1 != puVar2);
  }
  uVar11 = 1;
  iVar10 = 0;
  lStack_90 = lVar3;
  if ((lVar3 - lStack_98) / 0x38 != 0) {
    lStackX_10 = 0;
    do {
      uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x560,8,3,uVar11);
      lVar7 = lStackX_10 + lStack_98;
      FUN_180627ae0(auStack_78,lVar7);
      uStack_58 = *(int32_t *)(lVar7 + 0x20);
      uStack_54 = *(int32_t *)(lVar7 + 0x24);
      uStack_50 = *(int32_t *)(lVar7 + 0x28);
      uStack_4c = *(int8_t *)(lVar7 + 0x2c);
      uStack_4b = *(int8_t *)(lVar7 + 0x2d);
      uStack_48 = *(uint64_t *)(lVar7 + 0x30);
      uVar4 = FUN_1803a6710(uVar4,auStack_78);
      puVar8 = *(uint64_t **)(param_1 + 0x1b98);
      if (puVar8 < *(uint64_t **)(param_1 + 0x1ba0)) {
        *(uint64_t **)(param_1 + 0x1b98) = puVar8 + 1;
        *puVar8 = uVar4;
      }
      else {
        puVar6 = *(uint64_t **)(param_1 + 0x1b90);
        lVar7 = (longlong)puVar8 - (longlong)puVar6 >> 3;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_1803075e0:
          puVar5 = (uint64_t *)
                   FUN_18062b420(system_memory_pool_ptr,lVar7 * 8,*(int8_t *)(param_1 + 0x1ba8));
          puVar8 = *(uint64_t **)(param_1 + 0x1b98);
          puVar6 = *(uint64_t **)(param_1 + 0x1b90);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_1803075e0;
          puVar5 = (uint64_t *)0x0;
        }
        if (puVar6 != puVar8) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,puVar6,(longlong)puVar8 - (longlong)puVar6);
        }
        *puVar5 = uVar4;
        if (*(longlong *)(param_1 + 0x1b90) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t **)(param_1 + 0x1b90) = puVar5;
        *(uint64_t **)(param_1 + 0x1b98) = puVar5 + 1;
        *(uint64_t **)(param_1 + 0x1ba0) = puVar5 + lVar7;
      }
      iVar10 = iVar10 + 1;
      lStackX_10 = lStackX_10 + 0x38;
    } while ((ulonglong)(longlong)iVar10 < (ulonglong)((lStack_90 - lStack_98) / 0x38));
  }
  FUN_180309520(&lStack_98);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803076d0(longlong param_1,longlong *param_2,uint64_t *param_3,uint64_t *param_4,
void FUN_1803076d0(longlong param_1,longlong *param_2,uint64_t *param_3,uint64_t *param_4,
                  longlong param_5,float param_6,float param_7)

{
  uint64_t uVar1;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  float fVar17;
  uint64_t *puVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  int32_t uVar25;
  float fVar26;
  int32_t uStackX_10;
  int32_t uStackX_14;
  int32_t uStackX_18;
  int32_t uStackX_1c;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  
  puVar18 = (uint64_t *)(**(code **)(*param_2 + 0x218))(param_2);
  fVar17 = *(float *)(puVar18 + 2);
  fVar24 = *(float *)((longlong)puVar18 + 0x14);
  fVar3 = *(float *)(puVar18 + 3);
  uVar25 = *(int32_t *)((longlong)puVar18 + 0x1c);
  uVar5 = puVar18[6];
  uVar6 = puVar18[7];
  uVar1 = *puVar18;
  uVar2 = puVar18[1];
  uVar7 = puVar18[4];
  uVar8 = puVar18[5];
  *param_4 = uVar5;
  param_4[1] = uVar6;
  fVar26 = SQRT(fVar17 * fVar17 + fVar24 * fVar24 + fVar3 * fVar3);
  *(float *)((longlong)param_4 + 0xc) = fVar26 * 1.5;
  if ((void *)*param_2 == &unknown_var_1008_ptr) {
    puVar18 = (uint64_t *)((longlong)param_2 + 0x244);
  }
  else {
    puVar18 = (uint64_t *)(**(code **)((void *)*param_2 + 0x220))(param_2);
  }
  uVar9 = *puVar18;
  uVar10 = puVar18[1];
  uVar11 = puVar18[2];
  uVar12 = puVar18[3];
  uVar13 = puVar18[4];
  uVar14 = puVar18[5];
  uVar15 = puVar18[6];
  uVar16 = puVar18[7];
  param_4[2] = uVar9;
  param_4[3] = uVar10;
  param_4[4] = uVar11;
  param_4[5] = uVar12;
  param_4[6] = uVar13;
  param_4[7] = uVar14;
  param_4[8] = uVar15;
  param_4[9] = uVar16;
  *param_3 = uVar9;
  param_3[1] = uVar10;
  param_3[8] = uVar1;
  param_3[9] = uVar2;
  *(float *)(param_3 + 10) = fVar17;
  *(float *)((longlong)param_3 + 0x54) = fVar24;
  *(float *)(param_3 + 0xb) = fVar3;
  *(int32_t *)((longlong)param_3 + 0x5c) = uVar25;
  param_3[2] = uVar11;
  param_3[3] = uVar12;
  param_3[4] = uVar13;
  param_3[5] = uVar14;
  param_3[0xc] = uVar7;
  param_3[0xd] = uVar8;
  param_3[6] = uVar15;
  param_3[7] = uVar16;
  param_3[0xe] = uVar5;
  param_3[0xf] = uVar6;
  if ((((*(float *)(param_2 + 10) == 0.0) && (*(float *)((longlong)param_2 + 0x54) == 0.0)) &&
      (*(float *)(param_2 + 0xb) == 0.0)) && (*(float *)((longlong)param_2 + 0x5c) == 0.0)) {
    lVar21 = 0x3f8000003f800000;
    lVar22 = 0;
  }
  else {
    lVar21 = param_2[10];
    lVar22 = param_2[0xb];
  }
  param_3[0x10] = lVar21;
  param_3[0x11] = lVar22;
  lVar21 = param_2[0x2b];
  if (*(longlong *)(lVar21 + 0xb8) == 0) {
LAB_180307880:
    uStackX_10 = 0;
    uStackX_14 = 0;
    uStackX_18 = 0;
    uStackX_1c = 0;
  }
  else {
    lVar19 = (longlong)*(int *)(param_1 + 0x1c38);
    lVar22 = *(longlong *)(*(longlong *)(lVar21 + 0xb8) + 0x280);
    if (*(char *)(lVar22 + lVar19 * 0x14) == '\0') goto LAB_180307880;
    uVar1 = *(uint64_t *)(lVar22 + 4 + lVar19 * 0x14);
    uVar2 = *(uint64_t *)(lVar22 + 0xc + lVar19 * 0x14);
    uStackX_18 = (int32_t)uVar1;
    uStackX_1c = (int32_t)((ulonglong)uVar1 >> 0x20);
    uStackX_10 = (int32_t)uVar2;
    uStackX_14 = (int32_t)((ulonglong)uVar2 >> 0x20);
  }
  *(int32_t *)(param_3 + 0x12) = uStackX_10;
  *(int32_t *)((longlong)param_3 + 0x94) = uStackX_14;
  *(int32_t *)(param_3 + 0x13) = uStackX_18;
  *(int32_t *)((longlong)param_3 + 0x9c) = uStackX_1c;
  if (((*(byte *)(param_2 + 0xe) & 2) == 0) || (*(longlong *)(lVar21 + 200) == 0)) {
LAB_1803078fd:
    uStack_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    lVar19 = (longlong)*(int *)(param_1 + 0x1c38);
    lVar22 = *(longlong *)(*(longlong *)(lVar21 + 200) + 0x280);
    if (*(char *)(lVar22 + lVar19 * 0x14) == '\0') goto LAB_1803078fd;
    uStack_b0 = *(uint64_t *)(lVar22 + 4 + lVar19 * 0x14);
    uStack_b8 = *(uint64_t *)(lVar22 + 0xc + lVar19 * 0x14);
  }
  param_3[0x16] = uStack_b8;
  param_3[0x17] = uStack_b0;
  if (((*(byte *)(param_2 + 0xe) & 4) != 0) && (*(longlong *)(lVar21 + 0xd8) != 0)) {
    lVar19 = (longlong)*(int *)(param_1 + 0x1c38);
    lVar22 = *(longlong *)(*(longlong *)(lVar21 + 0xd8) + 0x280);
    if (*(char *)(lVar22 + lVar19 * 0x14) != '\0') {
      uStack_b0 = *(uint64_t *)(lVar22 + 4 + lVar19 * 0x14);
      uStack_b8 = *(uint64_t *)(lVar22 + 0xc + lVar19 * 0x14);
      goto LAB_180307986;
    }
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
LAB_180307986:
  uVar25 = 0x3f800000;
  param_3[0x14] = uStack_b8;
  param_3[0x15] = uStack_b0;
  fVar3 = *(float *)(param_2 + 0x51);
  fVar4 = *(float *)((longlong)param_2 + 0x28c);
  fVar17 = *(float *)(lVar21 + 0x2ac);
  fVar24 = *(float *)(lVar21 + 0x2b0);
  fVar23 = 1.0;
  *(float *)(param_3 + 0x1a) = *(float *)((longlong)param_2 + 0x284) * *(float *)(lVar21 + 0x2a8);
  *(float *)((longlong)param_3 + 0xd4) = fVar3 * fVar17;
  *(float *)(param_3 + 0x1b) = fVar4 * fVar24;
  *(int32_t *)((longlong)param_3 + 0xdc) = 0x7f7fffff;
  *(float *)((longlong)param_3 + 0xdc) = *(float *)(param_2 + 0x52) * *(float *)(lVar21 + 0x2b4);
  if (0.0 < *(float *)((longlong)param_2 + 100)) {
    fVar23 = 1.0 - *(float *)(param_2 + 6) / (*(float *)((longlong)param_2 + 100) + 1e-09);
    if (0.0 <= fVar23) {
      if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
    }
    else {
      fVar23 = 0.0;
    }
  }
  fVar17 = *(float *)(param_2 + 0xc);
  if (fVar17 == 0.0) {
    fVar17 = *(float *)(lVar21 + 0x298);
  }
  *(float *)(param_3 + 0x1c) = fVar17 * fVar23;
  lVar22 = SYSTEM_STATE_MANAGER;
  fStack_74 = (float)((ulonglong)uVar5 >> 0x20);
  fStack_78 = (float)uVar5;
  fStack_70 = (float)uVar6;
  fVar24 = -(((*(float *)(param_5 + 0x18) * fStack_74 + *(float *)(param_5 + 8) * fStack_78 +
               *(float *)(param_5 + 0x28) * fStack_70 + *(float *)(param_5 + 0x38)) * param_7) /
            fVar26);
  fVar17 = (float)(((uint)fVar24 & 0x807fffff) + 0x3f800000);
  param_6 = (((2.0 - fVar17 * 0.33333334) * fVar17 - 0.6666667) +
            (float)(int)(((int)fVar24 >> 0x17 & 0xffU) - 0x80)) * param_6;
  if (param_6 <= 0.0) {
    param_6 = 0.0;
  }
  param_6 = param_6 + 1.0;
  *(float *)((longlong)param_3 + 0xc4) = param_6;
  if (*(int *)(lVar22 + 0x700) == 1) {
    *(float *)((longlong)param_3 + 0xc4) = param_6 + param_6;
  }
  *(int32_t *)(param_3 + 0x19) = *(int32_t *)(lVar21 + 0x278);
  *(int32_t *)((longlong)param_3 + 0xcc) = *(int32_t *)(lVar21 + 0x268);
  *(int32_t *)(param_3 + 0x18) = *(int32_t *)(lVar21 + 0x270);
  *(int32_t *)((longlong)param_3 + 0xe4) = *(int32_t *)(lVar21 + 0x274);
  if (param_2[0x2d] != *(longlong *)(param_2[0x2b] + 0x140)) {
    FUN_1802f65b0(param_2);
  }
  lVar21 = param_2[0x10];
  param_3[0x1e] = param_2[0xf];
  param_3[0x1f] = lVar21;
  if (*(char *)((longlong)param_2 + 0x74) == '\0') {
    uVar25 = 0;
  }
  *(int32_t *)((longlong)param_3 + 0xfc) = uVar25;
  uVar20 = *(uint *)(param_2 + 0xe);
  if ((uVar20 >> 0xb & 1) != 0) {
    fVar17 = *(float *)((longlong)param_3 + 0xc4);
    if (3.0 <= fVar17) {
      fVar17 = 3.0;
    }
    *(float *)((longlong)param_3 + 0xc4) = fVar17;
    uVar20 = *(uint *)(param_2 + 0xe);
  }
  *(uint *)(param_3 + 0x1d) = uVar20;
  lVar21 = param_2[0x12];
  param_3[0x20] = param_2[0x11];
  param_3[0x21] = lVar21;
  lVar21 = param_2[0x14];
  param_3[0x22] = param_2[0x13];
  param_3[0x23] = lVar21;
  lVar21 = param_2[0x16];
  param_3[0x24] = param_2[0x15];
  param_3[0x25] = lVar21;
  lVar21 = param_2[0x18];
  param_3[0x26] = param_2[0x17];
  param_3[0x27] = lVar21;
  lVar21 = param_2[0x1a];
  param_3[0x28] = param_2[0x19];
  param_3[0x29] = lVar21;
  lVar21 = param_2[0x1c];
  param_3[0x2a] = param_2[0x1b];
  param_3[0x2b] = lVar21;
  lVar21 = param_2[0x1e];
  param_3[0x2c] = param_2[0x1d];
  param_3[0x2d] = lVar21;
  lVar21 = param_2[0x20];
  param_3[0x2e] = param_2[0x1f];
  param_3[0x2f] = lVar21;
  lVar21 = param_2[0x22];
  param_3[0x30] = param_2[0x21];
  param_3[0x31] = lVar21;
  lVar21 = param_2[0x24];
  param_3[0x32] = param_2[0x23];
  param_3[0x33] = lVar21;
  lVar21 = param_2[0x26];
  param_3[0x34] = param_2[0x25];
  param_3[0x35] = lVar21;
  if (((uVar20 >> 0xc & 1) != 0) && (*(float *)(param_3 + 0x24) == 0.0)) {
    *(uint *)(param_3 + 0x1d) = uVar20 & 0xffffefff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



