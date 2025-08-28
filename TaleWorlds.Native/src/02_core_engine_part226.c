#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part226.c - 2 个函数

// 函数: void FUN_18019c6e0(longlong param_1,longlong param_2)
void FUN_18019c6e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  float fVar13;
  float fVar14;
  float fStackX_8;
  float fStackX_c;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined2 uStack_158;
  undefined1 uStack_156;
  undefined4 uStack_154;
  undefined1 uStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined2 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  uStack_a8 = 0xfffffffffffffffe;
  lVar9 = *(longlong *)(param_1 + 0x380);
  if ((lVar9 != 0) && (*(longlong *)(param_1 + 0x81f0) != 0)) {
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x81f0) + 4);
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
    uVar8 = FUN_1801c1880(lVar9,&UNK_180a0b2e8);
    *(undefined8 *)(param_2 + 0x12610) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&UNK_180a0b2e0);
    *(undefined8 *)(param_2 + 0x12618) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&UNK_180a0b300);
    *(undefined8 *)(param_2 + 0x12620) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&UNK_180a0b2f0);
    *(undefined8 *)(param_2 + 0x12628) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&UNK_180a0b318);
    *(undefined8 *)(param_2 + 0x12630) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&UNK_180a0b310);
    *(undefined8 *)(param_2 + 0x12638) = uVar8;
    uVar8 = FUN_1801c1880(lVar9,&UNK_180a0b338);
    *(undefined8 *)(param_2 + 0x12640) = uVar8;
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
    *(undefined1 *)(param_1 + 0x3f31) = 0;
    lVar9 = *(longlong *)(param_1 + 0x380);
    uVar8 = *(undefined8 *)(lVar9 + 0x98);
    *(undefined8 *)(param_2 + 0x12650) = *(undefined8 *)(lVar9 + 0x90);
    *(undefined8 *)(param_2 + 0x12658) = uVar8;
    uVar8 = *(undefined8 *)(lVar9 + 0xa8);
    *(undefined8 *)(param_2 + 0x12660) = *(undefined8 *)(lVar9 + 0xa0);
    *(undefined8 *)(param_2 + 0x12668) = uVar8;
    *(undefined1 *)(param_2 + 0x125b0) = 1;
    uStack_98 = 0x3f800000;
    uStack_90 = 0;
    uStack_88 = 0x3f80000000000000;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0x3f800000;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_5c = 0x3f800000;
    uStack_60 = *(undefined4 *)(param_1 + 0x3ec4);
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
        FUN_18022cd30(plVar2,1,*(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0x40));
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x3a0) + 0x1b8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        FUN_18022cd30(plVar3,0,*(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0x38));
        FUN_18022cd30(plVar3,1,*(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0x40));
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
      uVar8 = *(undefined8 *)(param_1 + 0x3e9c);
      *(undefined8 *)(lVar9 + 0x238) = *(undefined8 *)(param_1 + 0x3e94);
      *(undefined8 *)(lVar9 + 0x240) = uVar8;
      lVar9 = *(longlong *)(param_1 + 0x398);
      uVar8 = *(undefined8 *)(param_1 + 0x3eac);
      *(undefined8 *)(lVar9 + 0x248) = *(undefined8 *)(param_1 + 0x3ea4);
      *(undefined8 *)(lVar9 + 0x250) = uVar8;
      lVar9 = *(longlong *)(param_1 + 0x3a0);
      uVar8 = *(undefined8 *)(param_1 + 0x3e9c);
      *(undefined8 *)(lVar9 + 0x238) = *(undefined8 *)(param_1 + 0x3e94);
      *(undefined8 *)(lVar9 + 0x240) = uVar8;
      lVar9 = *(longlong *)(param_1 + 0x3a0);
      uVar8 = *(undefined8 *)(param_1 + 0x3eac);
      *(undefined8 *)(lVar9 + 0x248) = *(undefined8 *)(param_1 + 0x3ea4);
      *(undefined8 *)(lVar9 + 0x250) = uVar8;
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
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,9);
          uVar8 = FUN_180084ea0(uVar8);
          *(undefined8 *)(lVar9 + 0x1d8) = uVar8;
          LOCK();
          *(undefined1 *)(lVar9 + 0xf9) = 1;
          UNLOCK();
        }
        FUN_1802decc0(lVar10,param_2,*(undefined8 *)(param_1 + 0x398),&uStack_98,&uStack_118);
        uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x398) + 0x1d8);
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x398) + 0x1b8);
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
          uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,9);
          uVar8 = FUN_180084ea0(uVar8);
          *(undefined8 *)(lVar9 + 0x1d8) = uVar8;
          LOCK();
          *(undefined1 *)(lVar9 + 0xf9) = 1;
          UNLOCK();
        }
        FUN_1802decc0(lVar11,param_2,*(undefined8 *)(param_1 + 0x3a0),&uStack_98,&uStack_118);
        uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x1d8);
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x3a0) + 0x1b8);
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
    *(undefined1 *)(param_2 + 0x125b0) = 0;
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



// 函数: void FUN_18019d190(undefined8 *param_1,ulonglong param_2)
void FUN_18019d190(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined8 *puStackX_8;
  ulonglong uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined8 uStack_d0;
  float fStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  uint uStack_a0;
  ulonglong uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  plVar1 = (longlong *)*_DAT_180c86960;
  puStackX_8 = param_1;
  uStackX_10 = param_2;
  iVar5 = _Mtx_lock(0x180c91970);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar13 = _DAT_180c8a9b0;
  uStackX_18 = _DAT_180c8a9b0;
  uStackX_20 = _DAT_180c8a9b0;
  _DAT_180c8a9b0 = *plVar1;
  if (*(char *)(param_1 + 0xc0e7) == '\0') {
    FUN_180199930(param_1);
  }
  FUN_1801299b0(&UNK_1809fd0c0,0,0);
  uStackX_10 = 0;
  cVar4 = FUN_18010f6f0(&UNK_180a068d0,&uStackX_10,0);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 0xc0e7) = 0;
  }
  puVar9 = &DAT_18098bc73;
  if ((undefined *)param_1[0x9c] != (undefined *)0x0) {
    puVar9 = (undefined *)param_1[0x9c];
  }
  FUN_18010f010(&UNK_180a0b328,puVar9);
  if (*(int *)(param_1 + 0xc0ea) != 0) {
    puVar9 = &DAT_18098bc73;
    if ((undefined *)param_1[0xc0e9] != (undefined *)0x0) {
      puVar9 = (undefined *)param_1[0xc0e9];
    }
    FUN_18010f010(&UNK_180a0b358,puVar9);
  }
  if (*(int *)(param_1 + 0xc0ee) != 0) {
    puVar9 = &DAT_18098bc73;
    if ((undefined *)param_1[0xc0ed] != (undefined *)0x0) {
      puVar9 = (undefined *)param_1[0xc0ed];
    }
    FUN_18010f010(&UNK_180a0b348,puVar9);
  }
  if (*(int *)(param_1 + 0x606) != 0) {
    puVar9 = &DAT_18098bc73;
    if ((undefined *)param_1[0x605] != (undefined *)0x0) {
      puVar9 = (undefined *)param_1[0x605];
    }
    FUN_18010f010(&UNK_180a0b378,puVar9);
  }
  lVar8 = FUN_180149750(*(undefined4 *)((longlong)param_1 + 0x3054));
  puVar9 = &DAT_18098bc73;
  if (*(undefined **)(lVar8 + 8) != (undefined *)0x0) {
    puVar9 = *(undefined **)(lVar8 + 8);
  }
  FUN_18010f010(&UNK_180a0b368,puVar9);
  FUN_18010f010(&UNK_180a0b390,(double)*(float *)((longlong)param_1 + 0x3044));
  puVar9 = &DAT_180a0b3b8;
  if (*(char *)((longlong)param_1 + 0x607a2) != '\0') {
    puVar9 = &UNK_180a0b388;
  }
  FUN_18010f010(&UNK_180a0b3a8,puVar9);
  puStack_b0 = &UNK_180a3c3e0;
  uStack_98 = 0;
  puStack_a8 = (undefined1 *)0x0;
  uStack_a0 = 0;
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_78 = 3;
  FUN_1801b84e0(param_1 + 0xc060,&puStack_90);
  (**(code **)(puStack_b0 + 0x10))(&puStack_b0,&DAT_18098bc73);
  uVar10 = (longlong)puStack_88 - (longlong)puStack_90 >> 5;
  uStackX_10 = uVar10;
  if (uVar10 != 0) {
    iVar5 = 1;
    puVar18 = puStack_90 + 1;
    do {
      puVar9 = &DAT_18098bc73;
      if ((undefined *)*puVar18 != (undefined *)0x0) {
        puVar9 = (undefined *)*puVar18;
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
          if (puStack_a8 == (undefined1 *)0x0) {
            if ((int)uVar15 < 0x10) {
              uVar15 = 0x10;
            }
            puStack_a8 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar15,0x13);
            *puStack_a8 = 0;
          }
          else {
            if (uVar15 <= (uint)uStack_98) goto LAB_18019d47d;
            puStack_a8 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_a8,uVar15,0x10,0x13);
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
          if (puStack_a8 == (undefined1 *)0x0) {
            if ((int)uVar7 < 0x10) {
              uVar7 = 0x10;
            }
            puStack_a8 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar7,0x13);
            *puStack_a8 = 0;
          }
          else {
            uVar10 = uStackX_10;
            if (uVar7 <= (uint)uStack_98) goto LAB_18019d50f;
            puStack_a8 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_a8,uVar7,0x10,0x13);
          }
          uVar6 = FUN_18064e990(puStack_a8);
          uStack_98 = CONCAT44(uStack_98._4_4_,uVar6);
          uVar10 = uStackX_10;
        }
LAB_18019d50f:
        *(undefined2 *)(puStack_a8 + uStack_a0) = 0x202c;
        *(undefined1 *)((longlong)(puStack_a8 + uStack_a0) + 2) = 0;
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
  puVar9 = &DAT_180a0b3b8;
  if ((0 < (int)uStack_a0) && (lVar8 = strstr(puStack_a8,&UNK_180a0b3d4), lVar8 != 0)) {
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
  puVar11 = &DAT_18098bc73;
  if (puStack_a8 != (undefined1 *)0x0) {
    puVar11 = puStack_a8;
  }
  FUN_18010f010(&UNK_180a0b3c0,puVar11);
  FUN_18010f010(&UNK_180a0b3f0,*(undefined4 *)((longlong)param_1 + 0x607a4));
  FUN_18010f010(&UNK_180a0b3e0,*(undefined4 *)(param_1 + 0xc0f5));
  FUN_18010f010(&UNK_180a0b420,*(undefined4 *)((longlong)param_1 + 0x607ac));
  FUN_18010f010(&UNK_180a0b408,(longlong)(param_1[0x5dd] - param_1[0x5dc]) >> 3);
  FUN_18010f010(&UNK_180a0b450,
                (int)((*(int *)(param_1 + 0xc0f7) >> 0x1f & 0x3ffU) + *(int *)(param_1 + 0xc0f7)) >>
                10);
  FUN_18010f010(&UNK_180a0b438,*(undefined4 *)(param_1 + 0xc0f8));
  FUN_18010f010(&UNK_180a0b498,*(undefined4 *)((longlong)param_1 + 0x607c4));
  FUN_18010f010(&UNK_180a0b480,*(undefined4 *)(param_1 + 0xc0f9));
  FUN_18010f010(&UNK_180a0b4e0,*(undefined4 *)((longlong)param_1 + 0x607cc));
  FUN_18010f010(&UNK_180a0b4b0,(double)*(float *)(param_1 + 0x87),
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
  FUN_18010f010(&UNK_180a0b518,(double)*(float *)(param_1 + 0x7ea));
  FUN_18010f010(&UNK_180a0b500,(double)fVar19);
  puVar12 = &DAT_180a0b3b8;
  if (*(char *)((longlong)param_1 + 0x607a1) != '\0') {
    puVar12 = &UNK_180a0b388;
  }
  FUN_18010f010(&UNK_180a0b550,puVar12);
  if ((0.0 < *(float *)((longlong)param_1 + 0x300c) * *(float *)((longlong)param_1 + 0x300c) +
             *(float *)(param_1 + 0x602) * *(float *)(param_1 + 0x602)) ||
     (0.0 < *(float *)((longlong)param_1 + 0x3004) * *(float *)((longlong)param_1 + 0x3004) +
            *(float *)(param_1 + 0x601) * *(float *)(param_1 + 0x601))) {
    puVar9 = &UNK_180a0b388;
  }
  FUN_18010f010(&UNK_180a0b530,puVar9);
  if (*(char *)((longlong)param_1 + 0x564) == '\0') {
    puVar9 = &DAT_180a0b57c;
  }
  else {
    puVar9 = *(undefined **)(&UNK_180a0c288 + (longlong)*(int *)(param_1 + 0xad) * 8);
  }
  FUN_18010f010(&UNK_180a0b568,puVar9);
  puStackX_8 = (undefined8 *)0x0;
  cVar4 = FUN_18010f6f0(&UNK_180a0b5a0,&puStackX_8,0);
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0xc0f4) == '\0') goto LAB_18019d905;
  }
  else {
    *(undefined1 *)(param_1 + 0xc0f4) = 1;
  }
  lVar8 = _DAT_180c8a9b0;
  if (*(int *)(param_1 + 0xc0f2) != 0) {
    puStackX_8 = (undefined8 *)CONCAT71(puStackX_8._1_7_,1);
    *(undefined4 *)(_DAT_180c8a9b0 + 0x1c04) = 0x43c80000;
    *(undefined4 *)(lVar8 + 0x1c08) = 0x43960000;
    *(undefined4 *)(lVar8 + 0x1bd4) = 4;
    FUN_1801299b0(&UNK_180a0b590,&puStackX_8,0);
    uStackX_10 = 0xbf800000bf800000;
    puVar9 = &DAT_18098bc73;
    if ((undefined *)param_1[0xc0f1] != (undefined *)0x0) {
      puVar9 = (undefined *)param_1[0xc0f1];
    }
    FUN_1801166f0(&UNK_180a0b5d8,puVar9,*(undefined4 *)(param_1 + 0xc0f2),&uStackX_10,0x104400,0,0);
    if ((char)puStackX_8 == '\0') {
      *(undefined1 *)(param_1 + 0xc0f4) = 0;
    }
    FUN_18012cfe0();
  }
LAB_18019d905:
  puStackX_8 = (undefined8 *)0x0;
  cVar4 = FUN_18010f6f0(&UNK_180a0b5b8,&puStackX_8,0);
  FUN_18012cfe0();
  puVar2 = puVar18;
  if (cVar4 != '\0') {
    puStackX_8 = &uStack_d0;
    uStack_d0 = param_1 + 0xc182;
    puStack_c0 = &UNK_18031c220;
    pcStack_b8 = FUN_18031c090;
    FUN_18005c650(&uStack_d0);
  }
  for (; puVar2 != puVar3; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0);
  }
  if (puVar18 == (undefined8 *)0x0) {
    puStack_b0 = &UNK_180a3c3e0;
    if (puStack_a8 == (undefined1 *)0x0) {
      puStack_a8 = (undefined1 *)0x0;
      uStack_98 = uStack_98 & 0xffffffff00000000;
      puStack_b0 = &UNK_18098bcb0;
      _DAT_180c8a9b0 = uVar13;
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

ulonglong FUN_18019da10(undefined4 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong ****pppplVar2;
  longlong ***ppplVar3;
  longlong ***ppplVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
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
        param_1 = powf(0x40000000,*(undefined4 *)((longlong)in_RCX + 0x2c));
      }
      *(undefined4 *)(lVar10 + 0x11cec) = param_1;
    }
  }
  lVar10 = alStackX_10[0];
  *(undefined1 *)(alStackX_10[0] + 0x12c09) = *(undefined1 *)(in_RCX + 3);
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
  if (*(char *)(_DAT_180c86890 + 0x12e0) != '\0') {
    param_1 = FUN_18019d190(in_RCX);
  }
  if (in_RCX[0xc170] != (longlong ****)0x0) {
    cVar6 = FUN_180160500(param_1,0x5f);
    if (cVar6 != '\0') {


