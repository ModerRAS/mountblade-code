#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part008_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801cdb50(uint64_t *******param_1,longlong param_2,longlong *param_3,ulonglong param_4,
void FUN_1801cdb50(uint64_t *******param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  int32_t param_5,char param_6,int32_t param_7,uint64_t param_8,
                  int32_t param_9,char param_10,char param_11,longlong *param_12)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  uint64_t uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int32_t uVar10;
  uint uVar11;
  uint64_t *******pppppppuVar12;
  uint64_t *******pppppppuVar13;
  uint64_t *******pppppppuVar14;
  uint64_t *******pppppppuVar15;
  void *puVar16;
  uint *puVar17;
  longlong lVar18;
  ulonglong *puVar19;
  uint64_t ******ppppppuVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  byte bVar25;
  char cVar26;
  void *puVar27;
  uint64_t uVar28;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t *****pppppuVar29;
  uint64_t *****extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t *******pppppppuStackX_8;
  char cStackX_10;
  uint64_t *******pppppppuStackX_18;
  char cStackX_20;
  uint64_t *******in_stack_fffffffffffffde0;
  uint64_t *******pppppppuStack_208;
  char cStack_200;
  uint64_t *******pppppppuStack_1f8;
  uint64_t *******pppppppuStack_1f0;
  uint64_t uStack_1e8;
  ulonglong uStack_1e0;
  uint64_t *******pppppppuStack_1d8;
  uint64_t *******pppppppuStack_1d0;
  uint64_t *******pppppppuStack_1c8;
  ulonglong uStack_1c0;
  uint64_t *******pppppppuStack_1b8;
  uint64_t *******pppppppuStack_1b0;
  uint64_t *******pppppppuStack_1a8;
  uint uStack_1a0;
  uint uStack_198;
  ulonglong uStack_190;
  uint uStack_188;
  longlong lStack_180;
  uint64_t *******pppppppuStack_178;
  uint64_t *******pppppppuStack_170;
  uint64_t *******pppppppuStack_168;
  uint uStack_160;
  int32_t uStack_158;
  longlong lStack_150;
  longlong lStack_148;
  uint64_t uStack_140;
  int32_t uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  longlong alStack_d0 [3];
  int32_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  
  uStack_b0 = 0xfffffffffffffffe;
  lVar18 = (param_3[1] - *param_3) / 6 + (param_3[1] - *param_3 >> 0x3f);
  pppppppuVar15 = (uint64_t *******)0x0;
  uVar23 = 0;
  lVar18 = (lVar18 >> 3) - (lVar18 >> 0x3f);
  uStack_160 = *(uint *)(param_3 + 3);
  pppppppuVar12 = pppppppuVar15;
  pppppppuStackX_8 = param_1;
  if (lVar18 != 0) {
    pppppppuVar12 =
         (uint64_t *******)FUN_18062b420(system_memory_pool_ptr,lVar18 * 0x30,uStack_160 & 0xff);
  }
  pppppppuStack_168 = pppppppuVar12 + lVar18 * 6;
  lVar18 = param_3[1];
  pppppppuStack_178 = pppppppuVar12;
  pppppppuStack_170 = pppppppuVar12;
  for (lVar21 = *param_3; lVar21 != lVar18; lVar21 = lVar21 + 0x30) {
    pppppppuStackX_8 = pppppppuVar12;
    FUN_180627ae0(pppppppuVar12,lVar21);
    pppppppuVar12[4] = *(uint64_t *******)(lVar21 + 0x20);
    *(int8_t *)(pppppppuVar12 + 5) = *(int8_t *)(lVar21 + 0x28);
    pppppppuVar12 = pppppppuVar12 + 6;
  }
  lVar18 = *(longlong *)(param_2 + 0x1e0);
  uVar22 = *(ulonglong *)(param_2 + 0x140);
  uVar24 = *(ulonglong *)(lVar18 + 0x1608);
  lStack_180 = lVar18;
  pppppppuStack_170 = pppppppuVar12;
  if (uVar24 == 0xffffffffffffffff) {
    FUN_180240b30();
    uVar24 = *(ulonglong *)(lVar18 + 0x1608);
    lVar18 = *(longlong *)(param_2 + 0x1e0);
  }
  uVar22 = uVar22 & ~uVar24;
  uStack_190 = uVar22;
  if (((param_4 != 0) && (*(int *)(lVar18 + 0x20) == 0xd)) &&
     (iVar9 = strcmp(*(uint64_t *)(lVar18 + 0x18),&unknown_var_1264_ptr), iVar9 == 0)) {
    uStack_190 = uVar22 & ~param_4;
  }
  alStack_d0[0] = 0;
  alStack_d0[1] = 0;
  alStack_d0[2] = 0;
  uStack_b8 = 3;
  lStack_110 = 0;
  lStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 3;
  lStack_130 = 0;
  lStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 3;
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 3;
  lStack_f0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 3;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 3;
  cVar7 = FUN_18022e5d0(param_2);
  if (cVar7 == '\0') {
    lVar18 = *(longlong *)(param_2 + 200);
    uVar23 = 0;
    if (lVar18 != 0) {
      if ((*(byte *)(lVar18 + 0x2e0) & 1) == 0) {
        uVar23 = 0;
        if (*(int *)(lVar18 + 0x324) == 0x14) {
          uVar23 = 0x40000;
        }
      }
      else {
        uVar23 = 0x10000;
      }
    }
    lVar18 = *(longlong *)(param_2 + 0xd0);
    if (lVar18 != 0) {
      if ((*(byte *)(lVar18 + 0x2e0) & 1) == 0) {
        if (*(int *)(lVar18 + 0x324) == 0x14) {
          uVar23 = uVar23 | 0x80000;
        }
      }
      else {
        uVar23 = uVar23 | 0x20000;
      }
    }
  }
  puVar27 = *(void **)(*(longlong *)(param_2 + 0x1e0) + 0x18);
  puVar16 = &system_buffer_ptr;
  if (puVar27 != (void *)0x0) {
    puVar16 = puVar27;
  }
  lVar18 = strstr(puVar16);
  if ((lVar18 == 0) && (param_6 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((char)param_5 != '\0') ||
     (pppppppuStackX_8 = (uint64_t *******)((ulonglong)pppppppuStackX_8 & 0xffffffffffffff00),
     bVar4)) {
    pppppppuStackX_8 = (uint64_t *******)CONCAT71(pppppppuStackX_8._1_7_,1);
  }
  uVar11 = *(uint *)(*(longlong *)(param_2 + 0x1e0) + 0x1c4);
  if ((0xc < uVar11) || (cStackX_10 = '\x01', (0x1966U >> (uVar11 & 0x1f) & 1) == 0)) {
    cStackX_10 = '\0';
  }
  uStack_188 = *(uint *)(param_2 + 0x138) >> 5 & 0xffffff01;
  cVar7 = *(char *)(param_2 + 0x13c);
  pppppppuStackX_18 = (uint64_t *******)CONCAT71(pppppppuStackX_18._1_7_,cVar7);
  if ((char)param_7 != '\0') {
    pppppppuStack_1d8 = (uint64_t *******)&system_data_buffer_ptr;
    uStack_1c0 = 0;
    pppppppuStack_1d0 = (uint64_t *******)0x0;
    pppppppuStack_1c8 = (uint64_t *******)((ulonglong)pppppppuStack_1c8 & 0xffffffff00000000);
    pppppppuVar12 = (uint64_t *******)FUN_18062b420(system_memory_pool_ptr,0x1b,0x13);
    *(int8_t *)pppppppuVar12 = 0;
    pppppppuStack_1d0 = pppppppuVar12;
    uVar10 = FUN_18064e990(pppppppuVar12);
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar10);
    *pppppppuVar12 = (uint64_t ******)0x5f656c6261736964;
    pppppppuVar12[1] = (uint64_t ******)0x635f786574726576;
    pppppppuVar12[2] = (uint64_t ******)0x706c615f726f6c6f;
    *(int16_t *)(pppppppuVar12 + 3) = 0x6168;
    *(int8_t *)((longlong)pppppppuVar12 + 0x1a) = 0;
    pppppppuStack_1c8 = (uint64_t *******)CONCAT44(pppppppuStack_1c8._4_4_,0x1a);
    if (pppppppuStack_170 < pppppppuStack_168) {
      FUN_1801eb800(pppppppuStack_170,&pppppppuStack_1d8,0x1800467e0);
      pppppppuStack_170 = pppppppuStack_170 + 6;
    }
    else {
      FUN_1801e8f50(&pppppppuStack_178,&pppppppuStack_1d8);
      pppppppuVar12 = pppppppuStack_1d0;
    }
    pppppppuStack_1d8 = (uint64_t *******)&system_data_buffer_ptr;
    if (pppppppuVar12 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(pppppppuVar12);
    }
    pppppppuStack_1d0 = (uint64_t *******)0x0;
    uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
    pppppppuStack_1d8 = (uint64_t *******)&system_state_ptr;
    pppppppuStack_1f8 = (uint64_t *******)&system_data_buffer_ptr;
    uStack_1e0 = 0;
    pppppppuStack_1f0 = (uint64_t *******)0x0;
    uStack_1e8 = (uint64_t *******)((ulonglong)uStack_1e8._4_4_ << 0x20);
    pppppppuVar12 = (uint64_t *******)FUN_18062b420(system_memory_pool_ptr,0x1c,0x13);
    *(int8_t *)pppppppuVar12 = 0;
    pppppppuStack_1f0 = pppppppuVar12;
    uVar10 = FUN_18064e990(pppppppuVar12);
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar10);
    *pppppppuVar12 = (uint64_t ******)0x7070616d5f657375;
    pppppppuVar12[1] = (uint64_t ******)0x68746f6c635f6465;
    pppppppuVar12[2] = (uint64_t ******)0x74616c756d69735f;
    *(int32_t *)(pppppppuVar12 + 3) = 0x6e6f69;
    uStack_1e8 = (uint64_t *******)CONCAT44(uStack_1e8._4_4_,0x1b);
    if (pppppppuStack_170 < pppppppuStack_168) {
      FUN_1801eb800(pppppppuStack_170,&pppppppuStack_1f8,0x1800467e0);
      pppppppuStack_170 = pppppppuStack_170 + 6;
    }
    else {
      FUN_1801e8f50(&pppppppuStack_178);
      pppppppuVar12 = pppppppuStack_1f0;
    }
    pppppppuStack_1f8 = (uint64_t *******)&system_data_buffer_ptr;
    if (pppppppuVar12 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(pppppppuVar12);
    }
    pppppppuStack_1f0 = (uint64_t *******)0x0;
    uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
    pppppppuStack_1f8 = (uint64_t *******)&system_state_ptr;
  }
  if ((*(longlong *)(param_2 + 0xb8) != 0) &&
     ((*(uint *)(*(longlong *)(param_2 + 0xb8) + 0x328) >> 0xf & 1) == 0)) {
    lVar18 = *(longlong *)(param_2 + 0x1e0);
    uVar22 = *(ulonglong *)(lVar18 + 0x15d0);
    if (uVar22 == 0xffffffffffffffff) {
      FUN_180240b30(lVar18);
      uVar22 = *(ulonglong *)(lVar18 + 0x15d0);
    }
    uStack_190 = uStack_190 | uVar22;
  }
  bVar25 = (byte)(*(uint *)(param_2 + 0x138) >> 0x13) & 1;
  cVar8 = func_0x00018022cda0(param_2);
  if ((cVar8 == '\0') || (bVar25 != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  cVar8 = *(char *)(param_2 + 0x13c);
  if (((cVar8 == '\x06') || (cVar8 == '\0')) || (bVar25 != 0)) {
    uVar11 = *(uint *)(param_2 + 0x138);
    if ((uVar11 & 4) != 0) goto LAB_1801ce092;
    uVar10 = 1;
  }
  else {
    uVar11 = *(uint *)(param_2 + 0x138);
LAB_1801ce092:
    uVar10 = 0;
  }
  if (((uVar11 & 0x2000010c) == 0) &&
     (((cVar8 == '\x06' || (cVar8 == '\0')) || ((uVar11 >> 0x12 & 1) != 0)))) {
    cStack_200 = '\x01';
  }
  else {
    cStack_200 = '\0';
  }
  if (bVar5) {
LAB_1801ce0ec:
    if ((*(uint *)(param_2 + 0x138) & 0x40000) == 0) {
      bVar5 = false;
      goto LAB_1801ce0ff;
    }
  }
  else {
    puVar27 = &system_buffer_ptr;
    if (*(void **)(param_2 + 0x2d8) != (void *)0x0) {
      puVar27 = *(void **)(param_2 + 0x2d8);
    }
    lVar18 = strstr(puVar27,&unknown_var_5544_ptr);
    if (lVar18 != 0) goto LAB_1801ce0ec;
  }
  bVar5 = true;
LAB_1801ce0ff:
  cVar8 = param_10;
  if ((*(char *)(param_2 + 0x13c) == '\x01') && ((*(uint *)(param_2 + 0x138) & 0x80000) != 0)) {
    cStackX_20 = '\x01';
    bVar5 = false;
    uVar10 = 1;
  }
  else {
    cStackX_20 = '\0';
  }
  if (!bVar4) {
    uVar10 = 1;
  }
  uStack_198 = 0;
  cVar26 = (char)param_9;
  if ((char)param_9 != '\0') {
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x700) == 2) {
      uStack_198 = 0x400;
    }
    else {
      uStack_198 = 0;
      if (*(int *)(SYSTEM_STATE_MANAGER + 0x700) == 0) {
        uStack_198 = 0x200;
      }
    }
  }
  uVar11 = uStack_198;
  uStack_158 = uVar10;
  if (bVar5) {
    pppppppuStack_1d8 = (uint64_t *******)0x0;
    pppppppuStack_1d0 = (uint64_t *******)0x0;
    pppppppuStack_1c8 = (uint64_t *******)0x0;
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,3);
    if (param_10 != '\0') {
      pppppppuStack_208 = (uint64_t *******)CONCAT44(pppppppuStack_208._4_4_,8);
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    }
    if (cVar26 == '\0') {
      pppppppuStack_208._0_4_ = 0x400;
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
      pppppppuStack_208 = (uint64_t *******)CONCAT44(pppppppuStack_208._4_4_,0x200);
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    }
    pppppppuStack_208._0_4_ = 0x20;
    FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    pppppppuStack_208._0_4_ = 0x10;
    FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    pppppppuStack_208._0_4_ = 0x80000000;
    FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    pppppppuStack_208._0_4_ = 0x200000;
    FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    if ((char)pppppppuStackX_8 != '\0') {
      pppppppuStack_208._0_4_ = 0x8000;
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    }
    if ((char)param_5 != '\0') {
      pppppppuStack_208._0_4_ = 2;
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
      pppppppuStack_208._0_4_ = 0x80;
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    }
    if ((cVar7 == '\x06') && (cVar8 != '\0')) {
      pppppppuStack_208._0_4_ = 0x100000;
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    }
    if (cStackX_10 != '\0') {
      pppppppuStack_208._0_4_ = 0x40000000;
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    }
    if ((char)param_7 != '\0') {
      pppppppuStack_208._0_4_ = 0x100;
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    }
    pppppppuStack_208 = (uint64_t *******)CONCAT44(pppppppuStack_208._4_4_,0x2000);
    uVar28 = FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStack_208);
    uVar1 = uVar11 | uVar23 | 0x400000;
    if ((char)uStack_188 == '\0') {
      uVar1 = uVar11 | uVar23;
    }
    FUN_1801d7910(uVar28,uVar1,alStack_d0,&pppppppuStack_1d8,*(uint64_t *)(param_2 + 0x1e0));
    pppppppuStack_1b8 = (uint64_t *******)0x0;
    pppppppuStack_1b0 = (uint64_t *******)0x0;
    pppppppuStack_1a8 = (uint64_t *******)0x0;
    uStack_1a0 = 3;
    uVar28 = FUN_1801d7c90();
    pppppppuVar14 = pppppppuStack_1b0;
    pppppppuVar12 = pppppppuStack_1b8;
    pppppppuStack_208 = &pppppppuStack_1f8;
    uVar22 = (longlong)pppppppuStack_1b0 - (longlong)pppppppuStack_1b8;
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uStack_1a0);
    pppppppuVar13 = pppppppuVar15;
    if (7 < uVar22) {
      pppppppuVar13 =
           (uint64_t *******)
           FUN_18062b420(system_memory_pool_ptr,((longlong)uVar22 >> 3) * 8,uStack_1a0 & 0xff);
      uVar28 = extraout_XMM0_Qa;
    }
    uStack_1e8 = pppppppuVar13 + ((longlong)uVar22 >> 3);
    pppppppuStack_1f8 = pppppppuVar13;
    pppppppuStack_1f0 = pppppppuVar13;
    if (pppppppuVar12 != pppppppuVar14) {
                    // WARNING: Subroutine does not return
      memmove(pppppppuVar13,pppppppuVar12,uVar22);
    }
    in_stack_fffffffffffffde0 = &pppppppuStack_1f8;
    FUN_1801d9f30(uVar28,param_2,param_8,lStack_180,alStack_d0,in_stack_fffffffffffffde0,0xffffffff)
    ;
    if (pppppppuVar12 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(pppppppuVar12);
    }
    if (pppppppuStack_1d8 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    cVar7 = (char)pppppppuStackX_18;
    cVar26 = (char)param_9;
  }
  cVar8 = param_10;
  if ((char)uStack_158 != '\0') {
    pppppppuStack_1f8 = (uint64_t *******)0x0;
    pppppppuStack_1f0 = (uint64_t *******)0x0;
    uStack_1e8 = (uint64_t *******)0x0;
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,3);
    if (param_10 != '\0') {
      pppppppuStackX_18 = (uint64_t *******)CONCAT44(pppppppuStackX_18._4_4_,8);
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
    }
    if (cVar26 == '\0') {
      pppppppuStackX_18._0_4_ = 0x400;
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
      pppppppuStackX_18 = (uint64_t *******)CONCAT44(pppppppuStackX_18._4_4_,0x200);
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
    }
    pppppppuStackX_18._0_4_ = 0x800000;
    FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
    if ((param_11 != '\0') && (cVar26 == '\0')) {
      pppppppuStackX_18._0_4_ = 0x1000000;
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
    }
    if ((char)pppppppuStackX_8 != '\0') {
      pppppppuStackX_18._0_4_ = 0x8000;
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
    }
    if ((char)param_5 != '\0') {
      pppppppuStackX_18._0_4_ = 2;
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
      pppppppuStackX_18._0_4_ = 0x80;
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
    }
    if ((cVar7 == '\x06') && (cVar8 != '\0')) {
      pppppppuStackX_18._0_4_ = 0x100000;
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
    }
    if (cStackX_10 != '\0') {
      pppppppuStackX_18._0_4_ = 0x40000000;
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
    }
    if ((char)param_7 != '\0') {
      pppppppuStackX_18._0_4_ = 0x100;
      FUN_1800571e0(&pppppppuStack_1f8,&pppppppuStackX_18);
    }
    uVar11 = uStack_198 | uVar23 | 0x400000;
    if ((char)uStack_188 == '\0') {
      uVar11 = uStack_198 | uVar23;
    }
    uVar23 = uVar11 | 4;
    if (cStackX_20 == '\0') {
      uVar23 = uVar11;
    }
    FUN_1801d7910(uVar11,uVar23,&lStack_110,&pppppppuStack_1f8,*(uint64_t *)(param_2 + 0x1e0));
    uVar22 = lStack_108 - lStack_110 >> 2;
    pppppppuVar12 = pppppppuVar15;
    if (0xf < uVar22) {
      puVar19 = (ulonglong *)(lStack_110 + 0x20);
      do {
        puVar19[-4] = puVar19[-4] & 0xffc78f00ffc78f;
        puVar19[-3] = puVar19[-3] & 0xffc78f00ffc78f;
        puVar19[-2] = puVar19[-2] & 0xffc78f00ffc78f;
        puVar19[-1] = puVar19[-1] & 0xffc78f00ffc78f;
        *puVar19 = *puVar19 & 0xffc78f00ffc78f;
        puVar19[1] = puVar19[1] & 0xffc78f00ffc78f;
        puVar19[2] = puVar19[2] & 0xffc78f00ffc78f;
        puVar19[3] = puVar19[3] & 0xffc78f00ffc78f;
        uVar23 = (int)pppppppuVar12 + 0x10;
        pppppppuVar12 = (uint64_t *******)(ulonglong)uVar23;
        puVar19 = puVar19 + 8;
      } while ((ulonglong)(longlong)(int)uVar23 < uVar22 - ((uint)uVar22 & 0xf));
    }
    if ((ulonglong)(longlong)(int)pppppppuVar12 < uVar22) {
      puVar17 = (uint *)(lStack_110 + (longlong)(int)pppppppuVar12 * 4);
      do {
        *puVar17 = *puVar17 & 0xffc78f;
        uVar23 = (int)pppppppuVar12 + 1;
        pppppppuVar12 = (uint64_t *******)(ulonglong)uVar23;
        puVar17 = puVar17 + 1;
      } while ((ulonglong)(longlong)(int)uVar23 < uVar22);
    }
    pppppppuStack_1b8 = (uint64_t *******)0x0;
    pppppppuStack_1b0 = (uint64_t *******)0x0;
    pppppppuStack_1a8 = (uint64_t *******)0x0;
    uStack_1a0 = 3;
    uVar28 = FUN_1801d7c90(pppppppuVar12,param_2,uStack_190,&pppppppuStack_1b8,&pppppppuStack_178,
                           (ulonglong)in_stack_fffffffffffffde0 & 0xffffffffffffff00);
    pppppppuVar14 = pppppppuStack_1b0;
    pppppppuVar12 = pppppppuStack_1b8;
    pppppppuStackX_18 = &pppppppuStack_1d8;
    uVar22 = (longlong)pppppppuStack_1b0 - (longlong)pppppppuStack_1b8;
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uStack_1a0);
    pppppppuVar13 = pppppppuVar15;
    if (7 < uVar22) {
      pppppppuVar13 =
           (uint64_t *******)
           FUN_18062b420(system_memory_pool_ptr,((longlong)uVar22 >> 3) * 8,uStack_1a0 & 0xff);
      uVar28 = extraout_XMM0_Qa_00;
    }
    pppppppuStack_1c8 = pppppppuVar13 + ((longlong)uVar22 >> 3);
    pppppppuStack_1d8 = pppppppuVar13;
    pppppppuStack_1d0 = pppppppuVar13;
    if (pppppppuVar12 != pppppppuVar14) {
                    // WARNING: Subroutine does not return
      memmove(pppppppuVar13,pppppppuVar12,uVar22);
    }
    FUN_1801d9f30(uVar28,param_2,param_8,*(uint64_t *)(lStack_180 + 0x1678),&lStack_110,
                  &pppppppuStack_1d8,0xffffffff);
    if (pppppppuVar12 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(pppppppuVar12);
    }
    if (pppppppuStack_1f8 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (cStack_200 != '\0') {
    pppppppuStack_1d8 = (uint64_t *******)0x0;
    pppppppuStack_1d0 = (uint64_t *******)0x0;
    pppppppuStack_1c8 = (uint64_t *******)0x0;
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,3);
    if ((char)param_9 == '\0') {
      pppppppuStackX_18 = (uint64_t *******)CONCAT44(pppppppuStackX_18._4_4_,0x400);
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStackX_18);
    }
    if ((char)pppppppuStackX_8 != '\0') {
      pppppppuStackX_8 = (uint64_t *******)CONCAT44(pppppppuStackX_8._4_4_,0x8000);
      FUN_1800571e0(&pppppppuStack_1d8,&pppppppuStackX_8);
    }
    if ((char)param_5 != '\0') {
      param_5 = 2;
      FUN_1800571e0(&pppppppuStack_1d8,&param_5);
      param_5 = 0x80;
      FUN_1800571e0(&pppppppuStack_1d8,&param_5);
    }
    if (cStackX_10 != '\0') {
      param_5 = 0x40000000;
      FUN_1800571e0(&pppppppuStack_1d8,&param_5);
    }
    if ((char)param_7 != '\0') {
      param_5 = 0x100;
      FUN_1800571e0(&pppppppuStack_1d8,&param_5);
    }
    FUN_1801d7910();
    uVar22 = lStack_128 - lStack_130 >> 2;
    pppppppuVar12 = pppppppuVar15;
    if (0xf < uVar22) {
      puVar19 = (ulonglong *)(lStack_130 + 0x20);
      do {
        puVar19[-4] = puVar19[-4] & 0x4000818240008182;
        puVar19[-3] = puVar19[-3] & 0x4000818240008182;
        puVar19[-2] = puVar19[-2] & 0x4000818240008182;
        puVar19[-1] = puVar19[-1] & 0x4000818240008182;
        *puVar19 = *puVar19 & 0x4000818240008182;
        puVar19[1] = puVar19[1] & 0x4000818240008182;
        puVar19[2] = puVar19[2] & 0x4000818240008182;
        puVar19[3] = puVar19[3] & 0x4000818240008182;
        uVar23 = (int)pppppppuVar12 + 0x10;
        pppppppuVar12 = (uint64_t *******)(ulonglong)uVar23;
        puVar19 = puVar19 + 8;
      } while ((ulonglong)(longlong)(int)uVar23 < uVar22 - ((uint)uVar22 & 0xf));
    }
    if ((ulonglong)(longlong)(int)pppppppuVar12 < uVar22) {
      puVar17 = (uint *)(lStack_130 + (longlong)(int)pppppppuVar12 * 4);
      do {
        *puVar17 = *puVar17 & 0x40008182;
        uVar23 = (int)pppppppuVar12 + 1;
        pppppppuVar12 = (uint64_t *******)(ulonglong)uVar23;
        puVar17 = puVar17 + 1;
      } while ((ulonglong)(longlong)(int)uVar23 < uVar22);
    }
    cVar7 = FUN_18022d360(param_2);
    if (cVar7 == '\0') {
      bVar25 = *(byte *)(param_2 + 0x38c);
      if (bVar25 == 9) {
        uVar23 = *(uint *)(param_2 + 0x388);
        if ((uVar23 >> 0x1e & 1) == 0) {
          if ((uVar23 >> 0x1c & 1) == 0) {
            bVar25 = (byte)(uVar23 >> 0x18);
            if ((int)uVar23 < 0) {
              if ((uVar23 >> 0x1b & 1) == 0) {
                bVar25 = bVar25 & 1 | 0xc;
              }
              else {
                bVar25 = bVar25 & 1 | 0xe;
              }
            }
            else if ((uVar23 >> 0x19 & 1) == 0) {
              bVar25 = bVar25 & 1;
            }
            else if ((uVar23 >> 0x1b & 1) == 0) {
              bVar25 = bVar25 & 1 | 2;
            }
            else {
              bVar25 = ((uVar23 >> 0x18 & 1) != 0) + 7;
            }
          }
          else {
            bVar25 = 4;
          }
        }
        else {
          bVar25 = 9;
        }
        *(byte *)(param_2 + 0x38c) = bVar25;
      }
    }
    else if (((*(ulonglong *)(param_2 + 0x140) &
              *(ulonglong *)(*(longlong *)(param_2 + 0x1e0) + 0x1580)) == 0) ||
            (*(float *)(param_2 + 600) <= 0.0)) {
      bVar25 = 10;
    }
    else {
      bVar25 = 0xb;
    }
    pppppppuStack_1f8 = (uint64_t *******)0x0;
    pppppppuStack_1f0 = (uint64_t *******)0x0;
    uStack_1e8 = (uint64_t *******)0x0;
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,3);
    uVar28 = FUN_1801d7c90();
    pppppppuVar12 = pppppppuStack_1f8;
    pppppppuStackX_8 = &pppppppuStack_1b8;
    lVar21 = (longlong)pppppppuStack_1f0 - (longlong)pppppppuStack_1f8;
    lVar18 = lVar21 >> 3;
    uStack_1a0 = (uint)uStack_1e0;
    pppppppuVar14 = pppppppuVar15;
    if (lVar18 != 0) {
      pppppppuVar14 =
           (uint64_t *******)FUN_18062b420(system_memory_pool_ptr,lVar18 * 8,(uint)uStack_1e0 & 0xff);
      uVar28 = extraout_XMM0_Qa_01;
    }
    uVar6 = param_8;
    pppppppuStack_1a8 = pppppppuVar14 + lVar18;
    pppppppuStack_1b8 = pppppppuVar14;
    pppppppuStack_1b0 = pppppppuVar14;
    if (pppppppuVar12 != pppppppuStack_1f0) {
                    // WARNING: Subroutine does not return
      memmove(pppppppuVar14,pppppppuVar12,lVar21);
    }
    pppppppuVar14 = &pppppppuStack_1b8;
    uVar28 = FUN_1801d9f30(uVar28,param_2,param_8,*(uint64_t *)(lStack_180 + 0x1680),&lStack_130,
                           pppppppuVar14,bVar25);
    if ((char)param_7 != '\0') {
      pppppppuStackX_8 = &pppppppuStack_1b8;
      uStack_1a0 = (uint)uStack_1e0;
      pppppppuVar14 = pppppppuVar15;
      if (lVar18 != 0) {
        pppppppuVar14 =
             (uint64_t *******)FUN_18062b420(system_memory_pool_ptr,lVar18 * 8,(uint)uStack_1e0 & 0xff);
        uVar28 = extraout_XMM0_Qa_02;
      }
      pppppppuStack_1a8 = pppppppuVar14 + lVar18;
      pppppppuStack_1b8 = pppppppuVar14;
      pppppppuStack_1b0 = pppppppuVar14;
      if (pppppppuVar12 != pppppppuStack_1f0) {
                    // WARNING: Subroutine does not return
        memmove(pppppppuVar14,pppppppuVar12,lVar21);
      }
      pppppppuVar14 = &pppppppuStack_1b8;
      FUN_1801d9f30(uVar28,param_2,uVar6,*(uint64_t *)(lStack_180 + 0x1680),&lStack_130,
                    pppppppuVar14,0xffffffff);
    }
    if (pppppppuVar12 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(pppppppuVar12);
    }
    if (pppppppuStack_1d8 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pppppppuStack_1d8 = (uint64_t *******)0x0;
    pppppppuStack_1d0 = (uint64_t *******)0x0;
    pppppppuStack_1c8 = (uint64_t *******)0x0;
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,3);
    if ((char)param_9 == '\0') {
      param_5 = 0x400;
      FUN_1800571e0(&pppppppuStack_1d8,&param_5);
      param_5 = 0x200;
      FUN_1800571e0(&pppppppuStack_1d8,&param_5);
    }
    if ((char)param_7 != '\0') {
      param_5 = 0x100;
      FUN_1800571e0(&pppppppuStack_1d8,&param_5);
    }
    FUN_1801d7910();
    uVar22 = lStack_148 - lStack_150 >> 2;
    pppppppuVar12 = pppppppuVar15;
    if (0xf < uVar22) {
      puVar19 = (ulonglong *)(lStack_150 + 0x20);
      do {
        puVar19[-4] = puVar19[-4] & 0x20878200208782;
        puVar19[-3] = puVar19[-3] & 0x20878200208782;
        puVar19[-2] = puVar19[-2] & 0x20878200208782;
        puVar19[-1] = puVar19[-1] & 0x20878200208782;
        *puVar19 = *puVar19 & 0x20878200208782;
        puVar19[1] = puVar19[1] & 0x20878200208782;
        puVar19[2] = puVar19[2] & 0x20878200208782;
        puVar19[3] = puVar19[3] & 0x20878200208782;
        uVar23 = (int)pppppppuVar12 + 0x10;
        pppppppuVar12 = (uint64_t *******)(ulonglong)uVar23;
        puVar19 = puVar19 + 8;
      } while ((ulonglong)(longlong)(int)uVar23 < uVar22 - ((uint)uVar22 & 0xf));
    }
    if ((ulonglong)(longlong)(int)pppppppuVar12 < uVar22) {
      puVar17 = (uint *)(lStack_150 + (longlong)(int)pppppppuVar12 * 4);
      do {
        *puVar17 = *puVar17 & 0x208782;
        uVar23 = (int)pppppppuVar12 + 1;
        pppppppuVar12 = (uint64_t *******)(ulonglong)uVar23;
        puVar17 = puVar17 + 1;
      } while ((ulonglong)(longlong)(int)uVar23 < uVar22);
    }
    pppppppuStack_1f8 = (uint64_t *******)0x0;
    pppppppuStack_1f0 = (uint64_t *******)0x0;
    uStack_1e8 = (uint64_t *******)0x0;
    uStack_1e0 = CONCAT44(uStack_1e0._4_4_,3);
    pppppuVar29 = (uint64_t *****)
                  FUN_1801d7c90(pppppppuVar12,param_2,uStack_190,&pppppppuStack_1f8,
                                &pppppppuStack_178,(ulonglong)pppppppuVar14 & 0xffffffffffffff00);
    pppppppuVar14 = pppppppuStack_1f0;
    pppppppuVar12 = pppppppuStack_1f8;
    uVar22 = *(ulonglong *)(param_2 + 0x390);
    if (uVar22 != 0) {
      uVar24 = (longlong)pppppppuStack_1f0 - (longlong)pppppppuStack_1f8 >> 3;
      pppppppuVar13 = pppppppuVar15;
      if (7 < uVar24) {
        uVar2 = ~uVar22;
        uVar3 = ~uVar22;
        ppppppuVar20 = pppppppuStack_1f8 + 4;
        do {
          ppppppuVar20[-4] = (uint64_t *****)((ulonglong)ppppppuVar20[-4] & uVar2);
          ppppppuVar20[-3] = (uint64_t *****)((ulonglong)ppppppuVar20[-3] & uVar3);
          ppppppuVar20[-2] = (uint64_t *****)(uVar2 & (ulonglong)ppppppuVar20[-2]);
          ppppppuVar20[-1] = (uint64_t *****)(uVar3 & (ulonglong)ppppppuVar20[-1]);
          *ppppppuVar20 = (uint64_t *****)((ulonglong)*ppppppuVar20 & uVar2);
          ppppppuVar20[1] = (uint64_t *****)((ulonglong)ppppppuVar20[1] & uVar3);
          pppppuVar29 = (uint64_t *****)((ulonglong)ppppppuVar20[2] & uVar2);
          ppppppuVar20[2] = pppppuVar29;
          ppppppuVar20[3] = (uint64_t *****)((ulonglong)ppppppuVar20[3] & uVar3);
          uVar23 = (int)pppppppuVar13 + 8;
          pppppppuVar13 = (uint64_t *******)(ulonglong)uVar23;
          ppppppuVar20 = ppppppuVar20 + 8;
        } while ((ulonglong)(longlong)(int)uVar23 < uVar24 - ((uint)uVar24 & 7));
      }
      if ((ulonglong)(longlong)(int)pppppppuVar13 < uVar24) {
        ppppppuVar20 = pppppppuStack_1f8 + (int)pppppppuVar13;
        do {
          *ppppppuVar20 = (uint64_t *****)((ulonglong)*ppppppuVar20 & ~uVar22);
          uVar23 = (int)pppppppuVar13 + 1;
          pppppppuVar13 = (uint64_t *******)(ulonglong)uVar23;
          ppppppuVar20 = ppppppuVar20 + 1;
        } while ((ulonglong)(longlong)(int)uVar23 < uVar24);
      }
    }
    pppppppuStackX_8 = &pppppppuStack_1b8;
    lVar21 = (longlong)pppppppuStack_1f0 - (longlong)pppppppuStack_1f8;
    lVar18 = lVar21 >> 3;
    uStack_1a0 = (uint)uStack_1e0;
    pppppppuVar13 = pppppppuVar15;
    if (lVar18 != 0) {
      pppppppuVar13 =
           (uint64_t *******)FUN_18062b420(system_memory_pool_ptr,lVar18 * 8,(uint)uStack_1e0 & 0xff);
      pppppuVar29 = extraout_XMM0_Qa_03;
    }
    pppppppuStack_1a8 = pppppppuVar13 + lVar18;
    pppppppuStack_1b8 = pppppppuVar13;
    pppppppuStack_1b0 = pppppppuVar13;
    if (pppppppuVar12 != pppppppuVar14) {
                    // WARNING: Subroutine does not return
      memmove(pppppppuVar13,pppppppuVar12,lVar21);
    }
    uVar28 = FUN_1801d9f30(pppppuVar29,param_2,param_8,*(uint64_t *)(lStack_180 + 0x1688),
                           &lStack_150,&pppppppuStack_1b8,0xffffffff);
    if ((char)param_7 != '\0') {
      pppppppuStackX_8 = &pppppppuStack_1b8;
      uStack_1a0 = (uint)uStack_1e0;
      pppppppuVar13 = pppppppuVar15;
      if (lVar18 != 0) {
        pppppppuVar13 =
             (uint64_t *******)FUN_18062b420(system_memory_pool_ptr,lVar18 * 8,(uint)uStack_1e0 & 0xff);
        uVar28 = extraout_XMM0_Qa_04;
      }
      pppppppuStack_1a8 = pppppppuVar13 + lVar18;
      pppppppuStack_1b8 = pppppppuVar13;
      pppppppuStack_1b0 = pppppppuVar13;
      if (pppppppuVar12 != pppppppuVar14) {
                    // WARNING: Subroutine does not return
        memmove(pppppppuVar13,pppppppuVar12,lVar21);
      }
      FUN_1801d9f30(uVar28,param_2,param_8,*(uint64_t *)(lStack_180 + 0x1688),&lStack_150,
                    &pppppppuStack_1b8,0xffffffff);
    }
    if (pppppppuVar12 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(pppppppuVar12);
    }
    if (pppppppuStack_1d8 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  pppppppuStack_1f8 = (uint64_t *******)0x0;
  pppppppuStack_1f0 = (uint64_t *******)0x0;
  uStack_1e8 = (uint64_t *******)0x0;
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,3);
  param_5 = 0x40000000;
  FUN_1800571e0(&pppppppuStack_1f8,&param_5);
  if ((char)param_9 == '\0') {
    param_9 = 0x400;
    FUN_1800571e0(&pppppppuStack_1f8,&param_9);
  }
  param_9 = 0x20000000;
  uVar28 = FUN_1800571e0(&pppppppuStack_1f8,&param_9);
  if ((char)param_7 != '\0') {
    param_7 = 0x100;
    uVar28 = FUN_1800571e0(&pppppppuStack_1f8,&param_7);
  }
  FUN_1801d7910(uVar28,uStack_198,&lStack_f0,&pppppppuStack_1f8,*(uint64_t *)(param_2 + 0x1e0));
  lVar18 = lStack_f0;
  uVar22 = lStack_e8 - lStack_f0 >> 2;
  pppppppuVar12 = pppppppuVar15;
  if (0xf < uVar22) {
    puVar19 = (ulonglong *)(lStack_f0 + 0x20);
    do {
      puVar19[-4] = puVar19[-4] & 0x6020818060208180;
      puVar19[-3] = puVar19[-3] & 0x6020818060208180;
      puVar19[-2] = puVar19[-2] & 0x6020818060208180;
      puVar19[-1] = puVar19[-1] & 0x6020818060208180;
      *puVar19 = *puVar19 & 0x6020818060208180;
      puVar19[1] = puVar19[1] & 0x6020818060208180;
      puVar19[2] = puVar19[2] & 0x6020818060208180;
      puVar19[3] = puVar19[3] & 0x6020818060208180;
      uVar23 = (int)pppppppuVar12 + 0x10;
      pppppppuVar12 = (uint64_t *******)(ulonglong)uVar23;
      puVar19 = puVar19 + 8;
    } while ((ulonglong)(longlong)(int)uVar23 < uVar22 - ((uint)uVar22 & 0xf));
  }
  if ((ulonglong)(longlong)(int)pppppppuVar12 < uVar22) {
    puVar17 = (uint *)(lStack_f0 + (longlong)(int)pppppppuVar12 * 4);
    do {
      *puVar17 = *puVar17 & 0x60208180;
      uVar23 = (int)pppppppuVar12 + 1;
      pppppppuVar12 = (uint64_t *******)(ulonglong)uVar23;
      puVar17 = puVar17 + 1;
    } while ((ulonglong)(longlong)(int)uVar23 < uVar22);
  }
  pppppppuStack_1d8 = (uint64_t *******)0x0;
  pppppppuStack_1d0 = (uint64_t *******)0x0;
  pppppppuStack_1c8 = (uint64_t *******)0x0;
  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,3);
  uVar28 = FUN_1801d7c90();
  pppppppuVar14 = pppppppuStack_1d0;
  pppppppuVar12 = pppppppuStack_1d8;
  pppppppuStackX_8 = &pppppppuStack_1b8;
  uVar22 = (longlong)pppppppuStack_1d0 - (longlong)pppppppuStack_1d8;
  uStack_1a0 = (uint)uStack_1c0;
  if (7 < uVar22) {
    pppppppuVar15 =
         (uint64_t *******)
         FUN_18062b420(system_memory_pool_ptr,((longlong)uVar22 >> 3) * 8,(uint)uStack_1c0 & 0xff);
    uVar28 = extraout_XMM0_Qa_05;
  }
  pppppppuStack_1a8 = pppppppuVar15 + ((longlong)uVar22 >> 3);
  pppppppuStack_1b8 = pppppppuVar15;
  pppppppuStack_1b0 = pppppppuVar15;
  if (pppppppuVar12 != pppppppuVar14) {
                    // WARNING: Subroutine does not return
    memmove(pppppppuVar15,pppppppuVar12,uVar22);
  }
  FUN_1801d9f30(uVar28,param_2,param_8,*(uint64_t *)(lStack_180 + 0x1690),&lStack_f0,
                &pppppppuStack_1b8,0xffffffff);
  if (pppppppuVar12 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(pppppppuVar12);
  }
  if (pppppppuStack_1f8 != (uint64_t *******)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (lVar18 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar18);
  }
  if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (lStack_130 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (lStack_110 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (alStack_d0[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180080df0(&pppppppuStack_178);
  if ((longlong *)*param_12 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_12 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






