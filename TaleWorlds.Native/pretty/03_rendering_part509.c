#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part509.c - 9 个函数

// 函数: void FUN_18053cee0(uint64_t *param_1)
void FUN_18053cee0(uint64_t *param_1)

{
  byte *pbVar1;
  int32_t *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int32_t uVar6;
  int32_t uVar7;
  char cVar8;
  int16_t uVar9;
  short sVar10;
  int16_t uVar11;
  int iVar12;
  int32_t uVar13;
  byte *pbVar14;
  uint64_t uVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong lVar18;
  void *puVar19;
  longlong *plVar20;
  longlong lVar21;
  void *puVar22;
  longlong lVar23;
  float fVar24;
  int8_t auStack_198 [32];
  uint64_t uStack_178;
  void *puStack_168;
  int8_t *puStack_160;
  int iStack_158;
  int8_t auStack_150 [72];
  void *puStack_108;
  int8_t *puStack_100;
  int iStack_f8;
  int8_t auStack_f0 [72];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  ulonglong uStack_48;
  
  lVar5 = *(longlong *)(param_1[0x40] + 0x20);
  cVar8 = FUN_18053c4b0();
  if (cVar8 == '\0') {
                    // WARNING: Subroutine does not return
    FUN_1808fd200();
  }
  uStack_178 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_198;
  *(int32_t *)(param_1 + 0x3b) = *(int32_t *)(lVar5 + 0x14);
  *(int32_t *)((longlong)param_1 + 0x1dc) = *(int32_t *)(lVar5 + 0x18);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(lVar5 + 0x1c);
  uVar17 = *(ulonglong *)(lVar5 + 0x38);
  param_1[0x3a] = uVar17;
  *(int32_t *)((longlong)param_1 + 0x1e4) = *(int32_t *)(lVar5 + 0x140);
  *(int32_t *)(param_1 + 0x3d) = *(int32_t *)(lVar5 + 0x144);
  uVar17 = *(byte *)(lVar5 + 0x20) | uVar17;
  param_1[0x3a] = uVar17;
  param_1[0x3a] = (longlong)*(int *)(lVar5 + 0x40) << 0x3c | uVar17;
  fVar24 = *(float *)(lVar5 + 0x44);
  if (fVar24 < 0.0) {
    *(int32_t *)((longlong)param_1 + 0x6c) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar24) {
      fVar24 = 0.99;
    }
    *(float *)((longlong)param_1 + 0x6c) = fVar24;
  }
  fVar24 = *(float *)(lVar5 + 0x48);
  if (fVar24 < 0.0) {
    *(int32_t *)(param_1 + 0xe) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar24) {
      fVar24 = 0.99;
    }
    *(float *)(param_1 + 0xe) = fVar24;
  }
  fVar24 = *(float *)(lVar5 + 0x4c);
  if (fVar24 < 0.0) {
    *(int32_t *)((longlong)param_1 + 0x74) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar24) {
      fVar24 = 0.99;
    }
    *(float *)((longlong)param_1 + 0x74) = fVar24;
  }
  fVar24 = *(float *)(lVar5 + 0x50);
  if (fVar24 < 0.0) {
    *(int32_t *)(param_1 + 0xf) = 0xbf800000;
  }
  else {
    if (0.99 <= fVar24) {
      fVar24 = 0.99;
    }
    *(float *)(param_1 + 0xf) = fVar24;
  }
  *(int16_t *)((longlong)param_1 + 0x7c) = 0xffff;
  if (0 < *(int *)(lVar5 + 0x68)) {
    iVar12 = (**(code **)(*_DAT_180c86878 + 0xd0))(_DAT_180c86878,lVar5 + 0x58);
    if (iVar12 < 0) {
      puVar22 = &system_buffer_ptr;
      if ((void *)param_1[3] != (void *)0x0) {
        puVar22 = (void *)param_1[3];
      }
      puVar19 = &system_buffer_ptr;
      if (*(void **)(lVar5 + 0x60) != (void *)0x0) {
        puVar19 = *(void **)(lVar5 + 0x60);
      }
      FUN_180626f80(&unknown_var_8408_ptr,puVar19,puVar22);
    }
    *(short *)((longlong)param_1 + 0x7c) = (short)iVar12;
  }
  if (*(int *)(lVar5 + 0x88) < 1) {
    *(int16_t *)((longlong)param_1 + 500) = 0xffff;
  }
  else {
    uVar9 = FUN_180571e20(&system_data_60c0,lVar5 + 0x78);
    *(int16_t *)((longlong)param_1 + 500) = uVar9;
  }
  uVar3 = *(uint *)(lVar5 + 0xa8);
  uVar17 = (ulonglong)uVar3;
  if (*(longlong *)(lVar5 + 0xa0) != 0) {
    FUN_1806277c0(param_1 + 0x36,uVar17);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(param_1[0x37],*(uint64_t *)(lVar5 + 0xa0),uVar17);
  }
  *(int32_t *)(param_1 + 0x38) = 0;
  lVar23 = param_1[0x37];
  if (lVar23 != 0) {
    *(int8_t *)(uVar17 + lVar23) = 0;
  }
  *(int32_t *)((longlong)param_1 + 0x1cc) = *(int32_t *)(lVar5 + 0xb4);
  if (*(int *)(lVar5 + 0xa8) < 1) {
    *(int32_t *)(param_1 + 0x3f) = 0xffffffff;
  }
  else {
    uVar13 = FUN_1805344c0(lVar23,lVar5 + 0x98);
    *(int32_t *)(param_1 + 0x3f) = uVar13;
  }
  bVar16 = ((char)*(int32_t *)(lVar5 + 0x138) + '\x01') * '\x10';
  *(byte *)(param_1 + 0x35) = bVar16 | *(byte *)(param_1 + 0x35) & 0xf;
  *(byte *)(param_1 + 0x35) = bVar16 | (char)*(int32_t *)(lVar5 + 0x13c) + 1U;
  lVar23 = 0;
  if (*(int *)(lVar5 + 0x180) < 1) {
    if (0 < *(int *)(lVar5 + 0x128)) {
      puStack_a8 = &unknown_var_3480_ptr;
      puStack_a0 = auStack_90;
      auStack_90[0] = 0;
      uStack_98 = *(int32_t *)(lVar5 + 0x128);
      puVar22 = &system_buffer_ptr;
      if (*(void **)(lVar5 + 0x120) != (void *)0x0) {
        puVar22 = *(void **)(lVar5 + 0x120);
      }
      strcpy_s(auStack_90,0x40,puVar22);
      sVar10 = FUN_1804e5820(&system_data_5ed0,&puStack_a8);
      puStack_a8 = &unknown_var_720_ptr;
LAB_18053cd7a:
      *(short *)((longlong)param_1 + 0x7e) = sVar10;
      goto LAB_18053cd7e;
    }
    *(int16_t *)((longlong)param_1 + 0x7e) = 0xffff;
  }
  else {
    puStack_168 = &unknown_var_3480_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    iStack_158 = *(int *)(lVar5 + 0x180);
    puVar22 = &system_buffer_ptr;
    if (*(void **)(lVar5 + 0x178) != (void *)0x0) {
      puVar22 = *(void **)(lVar5 + 0x178);
    }
    strcpy_s(auStack_150,0x40,puVar22);
    lVar18 = lVar23;
    if (((0 < iStack_158) && (iVar12 = FUN_18053a2e0(&system_data_5f30,&puStack_168), iVar12 != -1)) &&
       (iVar12 = *(int *)(_DAT_180c95f68 + (longlong)iVar12 * 4), iVar12 != -1)) {
      lVar18 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar12 * 8);
    }
    lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x200) + 0x20);
    puStack_168 = &unknown_var_720_ptr;
    puStack_108 = &unknown_var_3480_ptr;
    puStack_100 = auStack_f0;
    auStack_f0[0] = 0;
    iStack_f8 = *(int *)(lVar5 + 0x1a0);
    puVar22 = &system_buffer_ptr;
    if (*(void **)(lVar5 + 0x198) != (void *)0x0) {
      puVar22 = *(void **)(lVar5 + 0x198);
    }
    strcpy_s(auStack_f0,0x40,puVar22);
    if (((0 < iStack_f8) && (iVar12 = FUN_18053a2e0(&system_data_5f30,&puStack_108), iVar12 != -1)) &&
       (iVar12 = *(int *)(_DAT_180c95f68 + (longlong)iVar12 * 4), iVar12 != -1)) {
      lVar23 = *(longlong *)(_DAT_180c95f88 + (longlong)iVar12 * 8);
    }
    lVar23 = *(longlong *)(*(longlong *)(lVar23 + 0x200) + 0x20);
    puStack_108 = &unknown_var_720_ptr;
    iVar12 = *(int *)(lVar23 + 0x128);
    iVar4 = *(int *)(lVar18 + 0x128);
    if (iVar4 == iVar12) {
      if (iVar4 != 0) {
        pbVar14 = *(byte **)(lVar18 + 0x120);
        lVar21 = *(longlong *)(lVar23 + 0x120) - (longlong)pbVar14;
        do {
          pbVar1 = pbVar14 + lVar21;
          iVar12 = (uint)*pbVar14 - (uint)*pbVar1;
          if (iVar12 != 0) break;
          pbVar14 = pbVar14 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18053cb9d:
      if (iVar12 == 0) {
        puStack_108 = &unknown_var_3480_ptr;
        puStack_100 = auStack_f0;
        auStack_f0[0] = 0;
        iStack_f8 = *(int *)(lVar18 + 0x128);
        puVar22 = &system_buffer_ptr;
        if (*(void **)(lVar18 + 0x120) != (void *)0x0) {
          puVar22 = *(void **)(lVar18 + 0x120);
        }
        strcpy_s(auStack_f0,0x40,puVar22);
        sVar10 = FUN_1804e5820(&system_data_5ed0,&puStack_108);
        puStack_108 = &unknown_var_720_ptr;
        goto LAB_18053cd7a;
      }
    }
    else if (iVar4 == 0) goto LAB_18053cb9d;
    puStack_a8 = &unknown_var_3480_ptr;
    puStack_a0 = auStack_90;
    auStack_90[0] = 0;
    uStack_98 = *(int32_t *)(lVar18 + 0x128);
    puVar22 = &system_buffer_ptr;
    if (*(void **)(lVar18 + 0x120) != (void *)0x0) {
      puVar22 = *(void **)(lVar18 + 0x120);
    }
    strcpy_s(auStack_90,0x40,puVar22);
    uVar9 = FUN_1804e5820(&system_data_5ed0,&puStack_a8);
    puStack_a8 = &unknown_var_720_ptr;
    puStack_168 = &unknown_var_3480_ptr;
    puStack_160 = auStack_150;
    auStack_150[0] = 0;
    iStack_158 = *(int *)(lVar23 + 0x128);
    puVar22 = &system_buffer_ptr;
    if (*(void **)(lVar23 + 0x120) != (void *)0x0) {
      puVar22 = *(void **)(lVar23 + 0x120);
    }
    strcpy_s(auStack_150,0x40,puVar22);
    uVar11 = FUN_1804e5820(&system_data_5ed0,&puStack_168);
    puStack_168 = &unknown_var_720_ptr;
    sVar10 = FUN_1804e58d0(&system_data_5ed0,uVar9,uVar11,
                           *(int32_t *)(&unknown_var_5192_ptr + (longlong)*(char *)(lVar5 + 0x1b0) * 4))
    ;
    *(short *)((longlong)param_1 + 0x7e) = sVar10;
LAB_18053cd7e:
    if (sVar10 != -1) {
      puVar2 = (int32_t *)((longlong)sVar10 * 0x68 + _DAT_180c95ed0);
      uVar13 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *(int32_t *)param_1 = *puVar2;
      *(int32_t *)((longlong)param_1 + 4) = uVar13;
      *(int32_t *)(param_1 + 1) = uVar6;
      *(int32_t *)((longlong)param_1 + 0xc) = uVar7;
      goto LAB_18053cdb2;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_18053cdb2:
  if (*(int *)(lVar5 + 200) < 1) {
    *(int32_t *)((longlong)param_1 + 0x1ec) = 0xffffffff;
  }
  else {
    uVar13 = FUN_18055b2f0(&system_data_6150,lVar5 + 0xb8);
    *(int32_t *)((longlong)param_1 + 0x1ec) = uVar13;
  }
  if (*(int *)(lVar5 + 0x108) < 1) {
    *(int32_t *)(param_1 + 0x3e) = 0xffffffff;
  }
  else {
    uVar13 = FUN_18055b2f0(&system_data_6150,lVar5 + 0xf8);
    *(int32_t *)(param_1 + 0x3e) = uVar13;
  }
  plVar20 = param_1 + 0x33;
  lVar23 = 2;
  do {
    if (*plVar20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar20 = plVar20 + 1;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  iVar12 = (int)(*(longlong *)(lVar5 + 0x158) - *(longlong *)(lVar5 + 0x150) >> 3);
  lVar23 = 0;
  if (0 < iVar12) {
    do {
      uVar15 = (**(code **)**(uint64_t **)(*(longlong *)(lVar5 + 0x150) + lVar23 * 8))();
      plVar20 = param_1 + 0x33;
      lVar18 = 0;
      do {
        if (*plVar20 == 0) {
          param_1[lVar18 + 0x33] = uVar15;
          goto LAB_18053ce9e;
        }
        lVar18 = lVar18 + 1;
        plVar20 = plVar20 + 1;
      } while (lVar18 < 2);
      FUN_180626f80(&unknown_var_6592_ptr,2);
LAB_18053ce9e:
      lVar23 = lVar23 + 1;
    } while (lVar23 < iVar12);
  }
  FUN_18053d480(param_1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18053cf40(uint64_t param_1,uint64_t param_2,char param_3)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x60,0x10,4,0xfffffffffffffffe);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(int32_t *)(puVar1 + 3) = 4;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(int32_t *)(puVar1 + 6) = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(int32_t *)(puVar1 + 9) = 0;
  *(uint64_t *)((longlong)puVar1 + 0x4c) = 0xffffffffffffffff;
  *(int32_t *)((longlong)puVar1 + 0x54) = 0;
  if (param_3 != '\0') {
    FUN_180562920(puVar1,param_1);
    return puVar1;
  }
  FUN_180562920(puVar1,param_1);
  return puVar1;
}





// 函数: void FUN_18053d000(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5)
void FUN_18053d000(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5)

{
  int32_t uVar1;
  float fVar2;
  float fVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  longlong alStack_70 [7];
  longlong *plStack_38;
  
  uVar1 = *(int32_t *)(param_4 + 8);
  fVar2 = *(float *)(param_4 + 0x10);
  fVar3 = *(float *)(param_4 + 0xc);
  plStack_38 = (longlong *)0x0;
  puVar4 = *(uint64_t **)(param_3 + 0x38);
  if (puVar4 != (uint64_t *)0x0) {
    plStack_38 = (longlong *)
                 (**(code **)*puVar4)(puVar4,alStack_70,param_3,param_4,0xfffffffffffffffe);
  }
  *(int *)(param_1 + 0x18c) = (int)fVar3;
  *(int *)(param_1 + 400) = (int)fVar2;
  *(int32_t *)(param_1 + 0x188) = uVar1;
  *(char *)(param_1 + 0x194) = param_5;
  if (param_5 == '\0') {
    *(longlong *)(param_1 + 0x88) = param_2;
    *(int32_t *)(param_1 + 0x80) = *(int32_t *)(param_2 + 0x54);
    plVar5 = *(longlong **)(param_1 + 0xd0);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != (longlong *)(param_1 + 0x98));
      *(uint64_t *)(param_1 + 0xd0) = 0;
    }
  }
  else {
    if (param_5 == '\x01') {
      *(longlong *)(param_1 + 0x90) = param_2;
    }
    else {
      *(longlong *)(param_1 + 0x88) = param_2;
    }
    FUN_180405430(param_1 + 0x98,alStack_70);
  }
  if (plStack_38 != (longlong *)0x0) {
    (**(code **)(*plStack_38 + 0x20))
              (plStack_38,CONCAT71((int7)((ulonglong)alStack_70 >> 8),plStack_38 != alStack_70));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053d120(uint64_t param_1,uint64_t param_2,ulonglong *param_3,float param_4,
void FUN_18053d120(uint64_t param_1,uint64_t param_2,ulonglong *param_3,float param_4,
                  float param_5,float param_6,char param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int8_t auVar6 [16];
  int8_t auStack_a8 [32];
  longlong *plStack_88;
  uint64_t uStack_78;
  longlong alStack_70 [3];
  int32_t uStack_58;
  uint64_t uStack_50;
  int8_t auStack_48 [24];
  ulonglong uStack_30;
  ulonglong uStack_28;
  int iStack_20;
  char cStack_1c;
  int16_t uStack_1b;
  int8_t uStack_19;
  ulonglong uStack_18;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_a8;
  iVar4 = (int)param_5;
  if (param_7 != '\0') {
    iVar1 = (int)param_4;
    auVar6._0_4_ = ((float)(iVar4 - iVar1) / param_6) * 3.0 + (float)iVar1;
    iVar4 = (int)auVar6._0_4_;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar6._0_4_)) {
      auVar6._4_4_ = auVar6._0_4_;
      auVar6._8_8_ = 0;
      uVar2 = movmskps(iVar1,auVar6);
      auVar6._0_4_ = (float)(int)(iVar4 + (uVar2 & 1 ^ 1));
    }
    iVar4 = (int)auVar6._0_4_;
  }
  auVar6._0_4_ = (float)iVar4;
  if (param_4 <= (float)iVar4) {
    auVar6._0_4_ = param_4;
  }
  uStack_1b = 0;
  uStack_19 = 0;
  uStack_30 = *param_3;
  uStack_28 = param_3[1];
  iStack_20 = (int)auVar6._0_4_;
  cStack_1c = param_7;
  plVar5 = *(longlong **)
            (_DAT_180c91d28 +
            ((CONCAT14(param_7,iStack_20) ^ uStack_28 ^ uStack_30) % (_DAT_180c91d30 & 0xffffffff))
            * 8);
  do {
    if (plVar5 == (longlong *)0x0) {
LAB_18053d267:
      plVar5 = *(longlong **)(_DAT_180c91d28 + _DAT_180c91d30 * 8);
LAB_18053d26b:
      uStack_78 = param_2;
      if (plVar5 == *(longlong **)(_DAT_180c91d28 + _DAT_180c91d30 * 8)) {
        alStack_70[0] = 0;
        alStack_70[1] = 0;
        alStack_70[2] = 0;
        uStack_58 = 3;
        FUN_18005ea90(alStack_70,&uStack_78);
        plStack_88 = alStack_70;
        FUN_18053f310(0x180c91d20,auStack_48);
        if (alStack_70[0] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else {
        FUN_18005ea90(plVar5 + 3,&uStack_78);
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_a8);
    }
    lVar3 = uStack_30 - *plVar5;
    if ((lVar3 == 0) && (lVar3 = uStack_28 - plVar5[1], lVar3 == 0)) {
      lVar3 = (ulonglong)CONCAT14(param_7,iStack_20) - plVar5[2];
    }
    if (lVar3 == 0) {
      if (plVar5 != (longlong *)0x0) goto LAB_18053d26b;
      goto LAB_18053d267;
    }
    plVar5 = (longlong *)plVar5[7];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053d300(ulonglong *param_1,float param_2,float param_3,float param_4,char param_5)
void FUN_18053d300(ulonglong *param_1,float param_2,float param_3,float param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  int8_t auVar8 [16];
  int8_t auStack_28 [16];
  int iStack_18;
  char cStack_14;
  int16_t uStack_13;
  int8_t uStack_11;
  ulonglong uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_28;
  iVar6 = (int)param_3;
  if (param_5 != '\0') {
    iVar1 = (int)param_2;
    auVar8._0_4_ = ((float)(iVar6 - iVar1) / param_4) * 3.0 + (float)iVar1;
    iVar6 = (int)auVar8._0_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar8._0_4_)) {
      auVar8._4_4_ = auVar8._0_4_;
      auVar8._8_8_ = 0;
      uVar2 = movmskps(iVar1,auVar8);
      auVar8._0_4_ = (float)(int)(iVar6 + (uVar2 & 1 ^ 1));
    }
    iVar6 = (int)auVar8._0_4_;
  }
  fVar7 = (float)iVar6;
  auVar8._0_4_ = fVar7;
  if (param_2 < fVar7) {
    auVar8._0_4_ = param_2;
    param_2 = fVar7;
  }
  iStack_18 = (int)auVar8._0_4_;
  cStack_14 = param_5;
  uStack_13 = 0;
  uStack_11 = 0;
  puVar4 = *(ulonglong **)
            (_DAT_180c91d28 +
            ((*param_1 ^ param_1[1] ^ (ulonglong)CONCAT14(param_5,iStack_18)) %
            (_DAT_180c91d30 & 0xffffffff)) * 8);
  do {
    if (puVar4 == (ulonglong *)0x0) {
LAB_18053d40b:
      puVar4 = *(ulonglong **)(_DAT_180c91d28 + _DAT_180c91d30 * 8);
LAB_18053d40f:
      if (puVar4 != *(ulonglong **)(_DAT_180c91d28 + _DAT_180c91d30 * 8)) {
        plVar3 = (longlong *)puVar4[3];
        iVar6 = (int)((longlong)(puVar4[4] - (longlong)plVar3) >> 3);
        if (0 < iVar6) {
          lVar5 = 0;
          do {
            if (param_2 <= (float)*(int *)(*plVar3 + 0x4c)) {
                    // WARNING: Subroutine does not return
              FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_28);
            }
            lVar5 = lVar5 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar5 < iVar6);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_28);
    }
    if (((*param_1 == *puVar4) && (param_1[1] == puVar4[1])) &&
       ((ulonglong)CONCAT14(param_5,iStack_18) == puVar4[2])) {
      if (puVar4 != (ulonglong *)0x0) goto LAB_18053d40f;
      goto LAB_18053d40b;
    }
    puVar4 = (ulonglong *)puVar4[7];
  } while( true );
}





// 函数: void FUN_18053d480(longlong param_1)
void FUN_18053d480(longlong param_1)

{
  ulonglong uVar1;
  void *puVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x1d0);
  if (((uVar1 & 0x10000000000) != 0) && ((uVar1 >> 0x17 & 1) != 0)) {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x18);
    }
    FUN_180626f80(&unknown_var_8272_ptr,puVar2);
    *(ulonglong *)(param_1 + 0x1d0) = *(ulonglong *)(param_1 + 0x1d0) & 0xfffffeffffffffff;
    uVar1 = *(ulonglong *)(param_1 + 0x1d0);
  }
  if (((uVar1 >> 0xe & 1) != 0) && ((uVar1 & 0x4000000000) != 0)) {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x18);
    }
    FUN_180626f80(&unknown_var_8576_ptr,puVar2);
    *(ulonglong *)(param_1 + 0x1d0) = *(ulonglong *)(param_1 + 0x1d0) & 0xffffffffffffbfff;
    uVar1 = *(ulonglong *)(param_1 + 0x1d0);
  }
  if (((uVar1 >> 0xe & 1) != 0) && (*(int *)(param_1 + 0x1f0) != -1)) {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x18);
    }
    FUN_180626f80(&unknown_var_8464_ptr,puVar2);
    *(ulonglong *)(param_1 + 0x1d0) = *(ulonglong *)(param_1 + 0x1d0) & 0xffffffffffffbfff;
    uVar1 = *(ulonglong *)(param_1 + 0x1d0);
  }
  if (((uVar1 & 0x4000000000) != 0) && (*(int *)(param_1 + 0x1f0) != -1)) {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x18);
    }
    FUN_180626f80(&unknown_var_9184_ptr,puVar2);
    *(ulonglong *)(param_1 + 0x1d0) = *(ulonglong *)(param_1 + 0x1d0) & 0xffffffbfffffffff;
    uVar1 = *(ulonglong *)(param_1 + 0x1d0);
  }
  if (((uVar1 >> 0x14 & 1) != 0) && (*(int *)(param_1 + 0x1ec) == -1)) {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x18);
    }
    FUN_180626f80(&unknown_var_9008_ptr,puVar2);
    *(ulonglong *)(param_1 + 0x1d0) = *(ulonglong *)(param_1 + 0x1d0) & 0xffffffffffefffff;
    uVar1 = *(ulonglong *)(param_1 + 0x1d0);
  }
  if (((uVar1 >> 0xe & 1) != 0) && (*(float *)(param_1 + 0x1e8) != 0.0)) {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x18);
    }
    FUN_180626f80(&unknown_var_9440_ptr,puVar2);
    uVar1 = *(ulonglong *)(param_1 + 0x1d0);
    *(int32_t *)(param_1 + 0x1e8) = 0;
  }
  if (((uVar1 & 0x4000000000) != 0) && (*(float *)(param_1 + 0x1e8) != 0.0)) {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x18);
    }
    FUN_180626f80(&unknown_var_9312_ptr,puVar2);
    *(int32_t *)(param_1 + 0x1e8) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053d710(longlong *param_1,ulonglong param_2)
void FUN_18053d710(longlong *param_1,ulonglong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  
  puVar5 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  uVar3 = (longlong)puVar5 - (longlong)puVar4 >> 3;
  if (param_2 <= uVar3) {
    param_1[1] = (longlong)(puVar4 + param_2);
    return;
  }
  param_2 = param_2 - uVar3;
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar5 >> 3)) {
    uVar3 = param_2;
    if (param_2 != 0) {
      do {
        *puVar5 = 0xffffffffffffffff;
        puVar5 = puVar5 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar5 = (uint64_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar5 + param_2);
    return;
  }
  uVar6 = uVar3 * 2;
  if (uVar3 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < uVar3 + param_2) {
    uVar6 = uVar3 + param_2;
  }
  if (uVar6 == 0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,(char)param_1[3]);
    puVar4 = (uint64_t *)*param_1;
    puVar5 = (uint64_t *)param_1[1];
  }
  uVar3 = param_2;
  puVar1 = puVar2;
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar4,(longlong)puVar5 - (longlong)puVar4);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 1;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar2;
  param_1[2] = (longlong)(puVar2 + uVar6);
  param_1[1] = (longlong)(puVar2 + param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053d756(longlong param_1,longlong param_2)
void FUN_18053d756(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  uVar4 = param_1 * 2;
  if (param_1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(param_1 + unaff_RDI)) {
    uVar4 = param_1 + unaff_RDI;
  }
  if (uVar4 == 0) {
    puVar1 = (uint64_t *)0x0;
  }
  else {
    puVar1 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)unaff_RSI[3]);
    param_2 = *unaff_RSI;
    unaff_RBX = unaff_RSI[1];
  }
  if (param_2 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,param_2,unaff_RBX - param_2);
  }
  puVar2 = puVar1;
  lVar3 = unaff_RDI;
  if (unaff_RDI != 0) {
    do {
      *puVar2 = 0xffffffffffffffff;
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RSI = (longlong)puVar1;
  unaff_RSI[2] = (longlong)(puVar1 + uVar4);
  unaff_RSI[1] = (longlong)(puVar1 + unaff_RDI);
  return;
}





// 函数: void FUN_18053d81c(void)
void FUN_18053d81c(void)

{
  longlong lVar1;
  uint64_t *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = unaff_RDI;
  if (unaff_RDI != 0) {
    do {
      *unaff_RBX = 0xffffffffffffffff;
      unaff_RBX = unaff_RBX + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(uint64_t **)(unaff_RSI + 8);
  }
  *(uint64_t **)(unaff_RSI + 8) = unaff_RBX + unaff_RDI;
  return;
}





// 函数: void FUN_18053d880(longlong *param_1)
void FUN_18053d880(longlong *param_1)

{
  longlong *plVar1;
  
  for (plVar1 = (longlong *)*param_1; plVar1 != (longlong *)param_1[1]; plVar1 = plVar1 + 4) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



