#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part225_sub002_sub002.c - 核心引擎模块第225部分第2子部分第2子部分
// 本文件包含4个函数，主要处理游戏对象的初始化、状态管理和资源清理

// 函数: void process_entity_initialization(longlong *entity_context, longlong *scene_context, char initialization_flags)
// 处理实体初始化过程，包括状态同步、资源分配和组件管理
void process_entity_initialization(longlong *entity_context, longlong *scene_context, char initialization_flags)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong **pplVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  byte bVar24;
  longlong lVar25;
  undefined1 auStack_328 [32];
  char cStack_308;
  undefined8 uStack_300;
  float fStack_2f8;
  undefined4 uStack_2f4;
  uint uStack_2f0;
  longlong *plStack_2e8;
  longlong *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined4 uStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  longlong *plStack_298;
  longlong **pplStack_290;
  longlong **pplStack_288;
  longlong lStack_280;
  longlong *plStack_278;
  longlong *plStack_270;
  longlong *plStack_268;
  longlong *plStack_260;
  longlong **pplStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  uint uStack_238;
  longlong *plStack_230;
  longlong *plStack_228;
  longlong *plStack_220;
  longlong *plStack_218;
  longlong *plStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  longlong *plStack_1f8;
  longlong *plStack_1f0;
  longlong *plStack_1e8;
  longlong *plStack_1e0;
  longlong *plStack_1d8;
  longlong *plStack_1d0;
  longlong *plStack_1c8;
  undefined *puStack_1c0;
  code *pcStack_1b8;
  longlong *plStack_1b0;
  longlong *plStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  longlong alStack_188 [40];
  ulonglong uStack_48;
  
  uStack_190 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_328;
  if (param_1[0xc170] != 0) {
    *(longlong *)(param_1[0x66] + 0x68) = param_1[0xc170];
  }
  plVar14 = (longlong *)0x0;
  plStack_1d8 = param_1;
  if ((*(int *)(param_2[0x6b0] + 0x110) != 0) && ((*(byte *)(param_2 + 0x37b) & 2) != 0)) {
    FUN_180094c20(alStack_188);
    lVar22 = 2;
    lVar20 = 2;
    plVar17 = param_2 + 6;
    plVar21 = alStack_188;
    do {
      plVar19 = plVar21;
      plVar15 = plVar17;
      lVar25 = plVar15[1];
      *plVar19 = *plVar15;
      plVar19[1] = lVar25;
      lVar25 = plVar15[3];
      plVar19[2] = plVar15[2];
      plVar19[3] = lVar25;
      lVar25 = plVar15[5];
      plVar19[4] = plVar15[4];
      plVar19[5] = lVar25;
      lVar25 = plVar15[7];
      plVar19[6] = plVar15[6];
      plVar19[7] = lVar25;
      lVar25 = plVar15[9];
      plVar19[8] = plVar15[8];
      plVar19[9] = lVar25;
      lVar25 = plVar15[0xb];
      plVar19[10] = plVar15[10];
      plVar19[0xb] = lVar25;
      lVar25 = plVar15[0xd];
      plVar19[0xc] = plVar15[0xc];
      plVar19[0xd] = lVar25;
      lVar25 = plVar15[0xf];
      plVar19[0xe] = plVar15[0xe];
      plVar19[0xf] = lVar25;
      lVar20 = lVar20 + -1;
      plVar17 = plVar15 + 0x10;
      plVar21 = plVar19 + 0x10;
    } while (lVar20 != 0);
    lVar20 = plVar15[0x11];
    plVar19[0x10] = plVar15[0x10];
    plVar19[0x11] = lVar20;
    lVar20 = plVar15[0x13];
    plVar19[0x12] = plVar15[0x12];
    plVar19[0x13] = lVar20;
    lVar20 = plVar15[0x15];
    plVar19[0x14] = plVar15[0x14];
    plVar19[0x15] = lVar20;
    uVar12 = *(undefined4 *)((longlong)plVar15 + 0xb4);
    lVar20 = plVar15[0x17];
    uVar7 = *(undefined4 *)((longlong)plVar15 + 0xbc);
    *(int *)(plVar19 + 0x16) = (int)plVar15[0x16];
    *(undefined4 *)((longlong)plVar19 + 0xb4) = uVar12;
    *(int *)(plVar19 + 0x17) = (int)lVar20;
    *(undefined4 *)((longlong)plVar19 + 0xbc) = uVar7;
    puVar3 = (undefined8 *)param_1[0x534];
    if (puVar3 != (undefined8 *)0x0) {
      if ((undefined *)*puVar3 == &UNK_180a21cc8) {
        LOCK();
        *(undefined1 *)(puVar3 + 2) = 0;
        UNLOCK();
        FUN_180049550(puVar3 + 4,0);
      }
      else {
        (**(code **)((undefined *)*puVar3 + 0x78))();
      }
      plVar17 = (longlong *)(param_1[0x534] + 0xc0);
      plVar21 = alStack_188;
      do {
        plVar19 = plVar21;
        plVar15 = plVar17;
        lVar20 = plVar19[1];
        *plVar15 = *plVar19;
        plVar15[1] = lVar20;
        lVar20 = plVar19[3];
        plVar15[2] = plVar19[2];
        plVar15[3] = lVar20;
        lVar20 = plVar19[5];
        plVar15[4] = plVar19[4];
        plVar15[5] = lVar20;
        lVar20 = plVar19[7];
        plVar15[6] = plVar19[6];
        plVar15[7] = lVar20;
        lVar20 = plVar19[9];
        plVar15[8] = plVar19[8];
        plVar15[9] = lVar20;
        lVar20 = plVar19[0xb];
        plVar15[10] = plVar19[10];
        plVar15[0xb] = lVar20;
        lVar20 = plVar19[0xd];
        plVar15[0xc] = plVar19[0xc];
        plVar15[0xd] = lVar20;
        lVar20 = plVar19[0xf];
        plVar15[0xe] = plVar19[0xe];
        plVar15[0xf] = lVar20;
        lVar22 = lVar22 + -1;
        plVar17 = plVar15 + 0x10;
        plVar21 = plVar19 + 0x10;
      } while (lVar22 != 0);
      lVar20 = plVar19[0x11];
      plVar15[0x10] = plVar19[0x10];
      plVar15[0x11] = lVar20;
      lVar20 = plVar19[0x13];
      plVar15[0x12] = plVar19[0x12];
      plVar15[0x13] = lVar20;
      lVar20 = plVar19[0x15];
      plVar15[0x14] = plVar19[0x14];
      plVar15[0x15] = lVar20;
      uVar12 = *(undefined4 *)((longlong)plVar19 + 0xb4);
      lVar20 = plVar19[0x17];
      uVar7 = *(undefined4 *)((longlong)plVar19 + 0xbc);
      *(int *)(plVar15 + 0x16) = (int)plVar19[0x16];
      *(undefined4 *)((longlong)plVar15 + 0xb4) = uVar12;
      *(int *)(plVar15 + 0x17) = (int)lVar20;
      *(undefined4 *)((longlong)plVar15 + 0xbc) = uVar7;
      lVar20 = _DAT_180c82868;
      uStack_300 = &plStack_298;
      plStack_298 = (longlong *)param_1[0x534];
      if (plStack_298 != (longlong *)0x0) {
        (**(code **)(*plStack_298 + 0x28))();
      }
      FUN_18005e110(lVar20,&plStack_298);
    }
  }
  if ((*(char *)((longlong)param_2 + 0x9a31) != '\0') || ((*(byte *)(param_2 + 0x37b) & 0x20) != 0))
  {
    param_1[0x79] = param_1[0x81];
    param_1[0x7a] = param_1[0x82];
    param_1[0x7b] = param_1[0x83];
    param_1[0x7c] = param_1[0x84];
    param_1[0x7d] = param_1[0x85];
    param_1[0x7e] = param_1[0x86];
    param_1[0x7f] = param_1[0x87];
    param_1[0x80] = param_1[0x88];
    lVar20 = param_2[0x1f];
    param_1[0x81] = param_2[0x1e];
    param_1[0x82] = lVar20;
    lVar20 = param_2[0x21];
    param_1[0x83] = param_2[0x20];
    param_1[0x84] = lVar20;
    lVar20 = param_2[0x23];
    param_1[0x85] = param_2[0x22];
    param_1[0x86] = lVar20;
    uVar12 = *(undefined4 *)((longlong)param_2 + 0x124);
    lVar20 = param_2[0x25];
    uVar7 = *(undefined4 *)((longlong)param_2 + 300);
    *(int *)(param_1 + 0x87) = (int)param_2[0x24];
    *(undefined4 *)((longlong)param_1 + 0x43c) = uVar12;
    *(int *)(param_1 + 0x88) = (int)lVar20;
    *(undefined4 *)((longlong)param_1 + 0x444) = uVar7;
    *(undefined1 *)((longlong)param_1 + 0x562) = 1;
  }
  *(char *)((longlong)param_2 + 0x124c4) = (char)param_1[0x1033];
  if ((((param_3 == '\0') || (*(char *)((longlong)param_1 + 0x3e05) == '\0')) ||
      ((*(byte *)(param_1 + 0x7c1) & 2) != 0)) ||
     ((*(int *)(_DAT_180c86920 + 0xc40) < 1 ||
      (cStack_308 = '\x01', *(longlong **)(param_2[0x6b0] + 0x588) != param_1)))) {
    cStack_308 = '\0';
  }
  FUN_1801b65d0(param_1,param_2);
  cVar9 = func_0x0001802e1840(param_2[0x6b0] + 0x560,param_1);
  if (cVar9 != '\0') {
    *(undefined4 *)(param_2[0x6b0] + 0x5e4) = 0xffffffff;
  }
  *(undefined4 *)(param_2[0x6b0] + 0x110) = 0;
  if ((*(char *)((longlong)param_1 + 0x563) == '\0') ||
     (iVar6 = (int)(param_1[0xb6] - param_1[0xb5] >> 0x3f),
     iVar11 = (int)((param_1[0xb6] - param_1[0xb5]) / 0xc) + iVar6,
     iVar11 == iVar6 || iVar11 - iVar6 < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  *(undefined4 *)(param_1 + 0x4cd) = 0;
  *(undefined4 *)(param_2[0x6b0] + 0x628) = 0xffffffff;
  if (((char)param_2[0x1347] == '\0') || (*(char *)((longlong)param_1 + 0x3f61) == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  *(undefined1 *)(param_2 + 0x1347) = uVar10;
  lVar22 = _DAT_180c868c0;
  lVar20 = 1;
  if (bVar8) {
    plVar17 = *(longlong **)(_DAT_180c868c0 + 0x10408);
    plVar21 = *(longlong **)(_DAT_180c868c0 + 0x10400);
    lVar25 = (longlong)plVar17 - (longlong)plVar21 >> 3;
    if (plVar17 < *(longlong **)(_DAT_180c868c0 + 0x10410)) {
      *(longlong **)(_DAT_180c868c0 + 0x10408) = plVar17 + 1;
      *plVar17 = (longlong)(param_1 + 0xae);
    }
    else {
      if ((lVar25 == 0) || (lVar20 = lVar25 * 2, lVar20 != 0)) {
        plVar14 = (longlong *)
                  FUN_18062b420(_DAT_180c8ed18,lVar20 * 8,*(undefined1 *)(_DAT_180c868c0 + 0x10418))
        ;
        plVar17 = *(longlong **)(lVar22 + 0x10408);
        plVar21 = *(longlong **)(lVar22 + 0x10400);
      }
      if (plVar21 != plVar17) {
                    // WARNING: Subroutine does not return
        memmove(plVar14,plVar21,(longlong)plVar17 - (longlong)plVar21);
      }
      *plVar14 = (longlong)(param_1 + 0xae);
      if (*(longlong *)(lVar22 + 0x10400) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong **)(lVar22 + 0x10400) = plVar14;
      *(longlong **)(lVar22 + 0x10408) = plVar14 + 1;
      *(longlong **)(lVar22 + 0x10410) = plVar14 + lVar20;
    }
    *(int *)(param_2[0x6b0] + 0x628) = (int)lVar25;
  }
  if ((int)param_1[0x4f8] < 7) {
    *(undefined1 *)(param_2 + 0x38c) = 1;
    uVar10 = func_0x0001800e2bf0(_DAT_180c86890,param_2);
    *(undefined1 *)((longlong)param_2 + 0x1c61) = uVar10;
    if ((int)param_2[1] == -1) {
      bVar24 = 0;
    }
    else {
      bVar24 = (byte)(int)param_2[3];
    }
    *(byte *)((longlong)param_2 + 0x1c62) = bVar24 & 1;
    uVar12 = func_0x00018024c420(param_2);
    *(undefined4 *)((longlong)param_2 + 0x1c64) = uVar12;
  }
  else {
    FUN_180304010(param_2[0x6b0]);
  }
  pplVar13 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3);
  uStack_300 = pplVar13;
  FUN_180049830(pplVar13);
  *pplVar13 = (longlong *)&UNK_180a0c3d8;
  pplVar13[0x18] = param_1;
  pplVar13[0x19] = param_2;
  pplStack_290 = pplVar13;
  (*(code *)(*pplVar13)[5])(pplVar13);
  plVar14 = param_1 + 0x6c;
  FUN_1800b88d0(plVar14,&pplStack_290);
  if (pplStack_290 != (longlong **)0x0) {
    (*(code *)(*pplStack_290)[7])();
  }
  if ((param_1[0x70] != 0) && (*(char *)((longlong)param_1 + 0x60b91) != '\0')) {
    FUN_18019c6e0(param_1,param_2);
  }
  FUN_1802e5be0(param_1 + 0x1045,param_2);
  if (param_1[0x75] != 0) {
    pplVar13 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3);
    uStack_300 = pplVar13;
    FUN_180049830(pplVar13);
    *pplVar13 = (longlong *)&UNK_180a0c348;
    pplVar13[0x18] = param_1;
    pplVar13[0x19] = param_2;
    pplStack_288 = pplVar13;
    (*(code *)(*pplVar13)[5])(pplVar13);
    FUN_1800b88d0(plVar14,&pplStack_288);
    if (pplStack_288 != (longlong **)0x0) {
      (*(code *)(*pplStack_288)[7])();
    }
  }
  FUN_18005e250(_DAT_180c82868,*plVar14,param_1[0x6d] - *plVar14 >> 3);
  if (((cStack_308 != '\0') && (*(char *)((longlong)param_1 + 0x60b91) != '\0')) &&
     (1 < (int)param_1[0x4f8])) {
    *(undefined4 *)(param_2[0x6b0] + 0x5b0) = *(undefined4 *)((longlong)param_1 + 0x27bc);
    *(undefined4 *)((longlong)param_2 + 0x995c) = *(undefined4 *)(param_2[0x6b0] + 0x5b0);
    lStack_280 = 0;
    iVar11 = FUN_1802e4530(param_2[0x6b0] + 0x560,param_2,&lStack_280);
    if (0 < iVar11) {
      lVar20 = 0;
      do {
        lVar25 = lStack_280;
        lVar22 = param_1[0x103e];
        if (lVar22 != 0) {
          lVar4 = *(longlong *)(lStack_280 + lVar20 * 8);
          fVar1 = *(float *)(lVar22 + 0xc);
          fVar2 = *(float *)(lVar22 + 8);
          *(float *)(lVar4 + 0x11ccc) = fVar1 * *(float *)(lVar22 + 4);
          *(float *)(lVar4 + 0x11cd0) = fVar1 * fVar2;
        }
        FUN_180304010(param_2[0x6b0],*(undefined8 *)(lStack_280 + lVar20 * 8));
        lVar22 = *(longlong *)(lVar25 + lVar20 * 8);
        LOCK();
        plVar14 = param_2 + 0x2349;
        lVar25 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + 1;
        UNLOCK();
        param_2[(longlong)(int)lVar25 + 0x1349] = lVar22;
        uVar16 = *(undefined8 *)((longlong)param_2 + 0x9a3c);
        *(undefined8 *)(lVar22 + 0x9a34) = *(undefined8 *)((longlong)param_2 + 0x9a34);
        *(undefined8 *)(lVar22 + 0x9a3c) = uVar16;
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar11);
    }
  }
  if ((((int)param_1[0xc188] == -1) ||
      (lVar20 = *(longlong *)(param_1[0xc184] + (longlong)(int)param_1[0xc188] * 8), lVar20 == 0))
     || (*(longlong *)(lVar20 + 0x40) == 0)) {
    *(undefined4 *)(param_2 + 0x253e) = *(undefined4 *)((longlong)param_1 + 0x60c44);
  }
  else {
    *(undefined4 *)(param_2 + 0x253e) = 0xffffffff;
  }
  *(undefined4 *)((longlong)param_2 + 0x129f4) = *(undefined4 *)((longlong)param_1 + 0x3ec4);
  if (param_1[0x103e] != 0) {
    *(float *)(param_2 + 0x253f) = *(float *)(param_1 + 0x7d9) * 0.05;
  }
  if (param_1[0xc170] == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = (int)*(undefined8 *)(param_1[0xc170] + 0x1dd0);
  }
  *(float *)((longlong)param_2 + 0x129fc) = (float)iVar11;
  FUN_1801acb30(param_1);
  iVar11 = (int)param_1[0x4f8];
  if (4 < iVar11) {
    FUN_180316460(param_1 + 0xc182);
    iVar11 = (int)param_1[0x4f8];
  }
  if (6 < iVar11) {
    FUN_18031a470(param_1 + 0xc182);
  }
  plVar14 = (longlong *)FUN_1800be440();
  if (plVar14 != (longlong *)0x0) {
    plStack_230 = plVar14;
    (**(code **)(*plVar14 + 0x28))(plVar14);
  }
  plStack_230 = (longlong *)param_2[0x1330];
  param_2[0x1330] = (longlong)plVar14;
  if (plStack_230 != (longlong *)0x0) {
    (**(code **)(*plStack_230 + 0x38))();
  }
  if (((1 < (int)param_1[0x4f8]) && (lVar20 = param_1[100], lVar20 != 0)) &&
     (lVar22 = *(longlong *)(lVar20 + 0x3c8), lVar22 != 0)) {
    bVar8 = false;
    if ((*(longlong *)(lVar22 + 0x20) - *(longlong *)(lVar22 + 0x18) >> 4 != 0) &&
       (*(char *)(*(longlong *)(lVar20 + 0x88) + 0x60b91) != '\0')) {
      FUN_180460970(lVar22,param_2);
      bVar8 = true;
    }
    if (((*(char *)(*(longlong *)(lVar20 + 0x88) + 0x60b91) != '\0') && (bVar8)) &&
       (*(longlong *)(*(longlong *)(lVar20 + 0x3c8) + 0x20) -
        *(longlong *)(*(longlong *)(lVar20 + 0x3c8) + 0x18) >> 4 == 0)) {
      FUN_18045ff20();
    }
  }
  plVar14 = param_1 + 0x1c;
  iVar11 = 0;
  if (param_1[0x1d] - *plVar14 >> 3 != 0) {
    lVar20 = 0;
    do {
      (**(code **)(**(longlong **)(lVar20 + *plVar14) + 0x38))
                (*(longlong **)(lVar20 + *plVar14),param_2,param_1);
      iVar11 = iVar11 + 1;
      lVar20 = lVar20 + 8;
    } while ((ulonglong)(longlong)iVar11 < (ulonglong)(param_1[0x1d] - *plVar14 >> 3));
  }
  if (*(char *)((longlong)param_2 + 0x9a31) != '\0') {
    if (((int)param_1[0x4f8] != 7) && (*(longlong *)(param_2[0x6b0] + 0x530) != 0)) {
      *(undefined4 *)(*(longlong *)(param_2[0x6b0] + 0x530) + 0x40) = 0x41200000;
    }
    plVar17 = (longlong *)param_2[0x6b0];
    if (plVar17[0xa6] != 0) {
      cVar9 = (**(code **)(*plVar17 + 0x78))();
      uVar18 = *(uint *)(*(longlong *)(param_2[0x6b0] + 0x530) + 0x94);
      if (cVar9 == '\0') {
        uVar18 = uVar18 & 0x7fffffff;
      }
      else {
        uVar18 = uVar18 | 0x80000000;
      }
      *(uint *)(*(longlong *)(param_2[0x6b0] + 0x530) + 0x94) = uVar18;
      plVar17 = (longlong *)param_2[0x6b0];
    }
    uVar18 = 0xdfffffff;
    if (plVar17[0xa6] != 0) {
      uVar18 = *(uint *)(plVar17[0xa6] + 0x94);
    }
    if (((*(char *)((longlong)param_1 + 0x2a63) == '\0') || ((int)plVar17[0x22] == 0)) ||
       (lVar20 = FUN_180244ff0(plVar17[0x23]), lVar20 == 0)) {
      uVar18 = uVar18 & 0xfffff7ff;
    }
    else {
      uVar18 = uVar18 | 0x800;
    }
    uVar12 = func_0x0001801f2a40();
    *(undefined4 *)(param_2 + 0x133d) = uVar12;
    FUN_180303b70(param_2[0x6b0],uVar18,param_2);
    plVar17 = *(longlong **)(param_2[0x6b0] + 0x530);
    if (plVar17 != (longlong *)0x0) {
      plStack_228 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_228 = (longlong *)param_2[0x1337];
    param_2[0x1337] = (longlong)plVar17;
    if (plStack_228 != (longlong *)0x0) {
      (**(code **)(*plStack_228 + 0x38))();
    }
    plVar17 = *(longlong **)(param_2[0x6b0] + 0x538);
    if (plVar17 != (longlong *)0x0) {
      plStack_220 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_220 = (longlong *)param_2[0x1338];
    param_2[0x1338] = (longlong)plVar17;
    if (plStack_220 != (longlong *)0x0) {
      (**(code **)(*plStack_220 + 0x38))();
    }
    plVar17 = *(longlong **)(param_2[0x6b0] + 0x540);
    if (plVar17 != (longlong *)0x0) {
      plStack_218 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_218 = (longlong *)param_2[0x1339];
    param_2[0x1339] = (longlong)plVar17;
    if (plStack_218 != (longlong *)0x0) {
      (**(code **)(*plStack_218 + 0x38))();
    }
    plVar17 = *(longlong **)(param_2[0x6b0] + 0x550);
    if (plVar17 != (longlong *)0x0) {
      plStack_210 = plVar17;
      (**(code **)(*plVar17 + 0x28))(plVar17);
    }
    plStack_210 = (longlong *)param_2[0x133b];
    param_2[0x133b] = (longlong)plVar17;
    if (plStack_210 != (longlong *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    *(undefined4 *)(param_2 + 0x249b) = *(undefined4 *)((longlong)param_1 + 0x3f54);
    *(int *)(param_2 + 0x249a) = (int)param_1[0x7eb];
    *(undefined4 *)((longlong)param_2 + 0x124d4) = *(undefined4 *)((longlong)param_1 + 0x3f5c);
    *(char *)((longlong)param_2 + 0x124dc) = (char)param_1[0x7ec];
  }
  plVar17 = *(longlong **)(param_2[0x6b0] + 0x558);
  if (plVar17 != (longlong *)0x0) {
    plStack_208 = plVar17;
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  plStack_208 = (longlong *)param_2[0x133c];
  param_2[0x133c] = (longlong)plVar17;
  if (plStack_208 != (longlong *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  plVar17 = *(longlong **)(param_2[0x6b0] + 0x548);
  if (plVar17 != (longlong *)0x0) {
    plStack_200 = plVar17;
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  plStack_200 = (longlong *)param_2[0x133a];
  param_2[0x133a] = (longlong)plVar17;
  if (plStack_200 != (longlong *)0x0) {
    (**(code **)(*plStack_200 + 0x38))();
  }
  if (param_1 == (longlong *)0xffffffffffffc950) {
    *(undefined1 *)((longlong)param_2 + 0x11cf4) = 0;
  }
  else {
    FUN_1801c1c40(param_2 + 0x23a0);
    *(undefined1 *)((longlong)param_2 + 0x11cf4) = 1;
  }
  lVar20 = param_1[0x103e];
  if (lVar20 != 0) {
    fVar1 = *(float *)(lVar20 + 0xc);
    fVar2 = *(float *)(lVar20 + 8);
    *(float *)((longlong)param_2 + 0x11ccc) = fVar1 * *(float *)(lVar20 + 4);
    *(float *)(param_2 + 0x239a) = fVar1 * fVar2;
  }
  *(undefined4 *)((longlong)param_2 + 0x124e4) = *(undefined4 *)((longlong)param_1 + 0x5b9c);
  lVar20 = param_1[0xc170];
  if (lVar20 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x11cd4) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11cdc) = 0;
    plVar17 = (longlong *)param_2[0x1332];
    param_2[0x1332] = 0;
    plStack_1f0 = plVar17;
  }
  else {
    uVar16 = *(undefined8 *)(lVar20 + 0x1c18);
    *(undefined8 *)((longlong)param_2 + 0x11cd4) = *(undefined8 *)(lVar20 + 0x1c10);
    *(undefined8 *)((longlong)param_2 + 0x11cdc) = uVar16;
    plVar21 = *(longlong **)(param_1[0xc170] + 0x1c48);
    if (plVar21 != (longlong *)0x0) {
      plStack_1f8 = plVar21;
      (**(code **)(*plVar21 + 0x28))(plVar21);
    }
    plVar17 = (longlong *)param_2[0x1332];
    param_2[0x1332] = (longlong)plVar21;
    plStack_1f8 = plVar17;
  }
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x38))();
  }
  plVar17 = (longlong *)param_1[0x518];
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17,0,param_2 + 6);
  }
  uVar18 = 0;
  lVar20 = param_2[0x6b0];
  lVar22 = 0x118;
  plStack_2e8 = (longlong *)0x118;
  if (*(int *)(lVar20 + 0x110) != 0) {
    do {
      lVar20 = *(longlong *)(lVar22 + lVar20);
      if (((param_1[100] != 0) && ((*(byte *)(lVar20 + 0x1bd8) & 0x20) != 0)) &&
         ((*(byte *)(lVar20 + 0x1bd9) & 2) == 0)) {
        FUN_18031e320(param_1[100],lVar20);
      }
      *(undefined1 *)(lVar20 + 0x1c60) = 1;
      if (((*(int *)(lVar20 + 0x124bc) == 0) && (*(int *)(lVar20 + 0x2920) == 0)) &&
         ((*(int *)(lVar20 + 0x2108) == 0 && (*(int *)(lVar20 + 0x1fe0) == 0)))) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (((*(int *)(_DAT_180c86890 + 0x12d8) == 0x12) || ((*(byte *)(lVar20 + 0x1bd8) & 0x20) == 0)
          ) || (((*(longlong *)(lVar20 + 0x99b8) == 0 ||
                 ((*(uint *)(*(longlong *)(lVar20 + 0x99b8) + 0x98) & 0x8000101e) == 0)) &&
                (((*(char *)(lVar20 + 0x124c4) == '\0' && (!bVar8)) &&
                 (*(int *)(lVar20 + 0x1bdc) == 0)))))) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      *(undefined1 *)(lVar20 + 0x1c61) = uVar10;
      if (*(int *)(lVar20 + 8) == -1) {
        bVar24 = 0;
      }
      else {
        bVar24 = (byte)*(undefined4 *)(lVar20 + 0x18);
      }
      *(byte *)(lVar20 + 0x1c62) = bVar24 & 1;
      uVar12 = func_0x00018024c420(lVar20);
      *(undefined4 *)(lVar20 + 0x1c64) = uVar12;
      uVar18 = uVar18 + 1;
      lVar22 = lVar22 + 8;
      lVar20 = param_2[0x6b0];
    } while (uVar18 < *(uint *)(lVar20 + 0x110));
  }
  plVar17 = (longlong *)0x118;
  lVar20 = param_1[0x1040];
  if (lVar20 != 0) {
    uStack_2d8 = *(undefined8 *)(lVar20 + 0x70);
    uStack_2d0 = *(undefined8 *)(lVar20 + 0x78);
    fStack_2f8 = *(float *)(param_2 + 0x25) - *(float *)((longlong)param_1 + 0x3e14) * 2000.0;
    fStack_2a4 = *(float *)((longlong)param_2 + 0x124) - *(float *)(param_1 + 0x7c2) * 2000.0;
    fStack_2a8 = *(float *)(param_2 + 0x24) - *(float *)((longlong)param_1 + 0x3e0c) * 2000.0;
    uStack_300 = (longlong **)CONCAT44(fStack_2a4,fStack_2a8);
    uStack_2f4 = 0x7f7fffff;
    uStack_29c = 0x7f7fffff;
    uStack_2c8 = *(undefined8 *)((longlong)param_1 + 0x3e0c);
    uStack_2c0 = *(undefined8 *)((longlong)param_1 + 0x3e14);
    fStack_2b8 = 0.0;
    fStack_2b4 = 0.0;
    fStack_2b0 = 1.0;
    uStack_2ac = 0x7f7fffff;
    fStack_2a0 = fStack_2f8;
    FUN_180084ae0(&uStack_2d8);
    uStack_2d8 = CONCAT44(uStack_2d8._4_4_ * 200.0,(float)uStack_2d8 * 200.0);
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(float)uStack_2d0 * 200.0);
    uStack_2c8 = CONCAT44(uStack_2c8._4_4_ * 200.0,(float)uStack_2c8 * 200.0);
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0 * 200.0);
    fStack_2b8 = fStack_2b8 * 200.0;
    fStack_2b4 = fStack_2b4 * 200.0;
    fStack_2b0 = fStack_2b0 * 200.0;
    FUN_1802ea790(param_1[0x1040]);
    *(byte *)(param_1[0x1040] + 0x2e8) = *(byte *)(param_1[0x1040] + 0x2e8) & 0xef;
  }
  if ((param_1[0x103f] != 0) && (*(char *)(_DAT_180c86890 + 0x1504) == '\x01')) {
    FUN_1802ee720();
  }
  if (param_1[0x89] != 0) {
    FUN_18037c8d0();
  }
  lVar20 = _DAT_180c82868;
  if (*(int *)(param_2[0x6b0] + 0x110) != 0) {
    if ((*(byte *)(param_2 + 0x37b) & 2) != 0) {
      plVar21 = (longlong *)param_1[0x534];
      if ((plVar21 != (longlong *)0x0) && (_DAT_180c82868 != 0)) {
        uStack_300 = &plStack_278;
        plStack_278 = plVar21;
        (**(code **)(*plVar21 + 0x28))();
        FUN_18005e6a0(lVar20,&plStack_278,0);
      }
      if (*(char *)(_DAT_180c86950 + 0x162f) != '\0') {
        FUN_180389b20(param_1 + 0x534);
      }
      if ((*(char *)(_DAT_180c86950 + 0x1630) != '\0') &&
         ((longlong *)param_1[0x535] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x535] + 0x40))();
      }
    }
    param_1[1999] = param_1[0x7ce];
    uStack_2f0 = 0;
    lVar20 = param_2[0x6b0];
    if (*(int *)(lVar20 + 0x110) != 0) {
      do {
        uStack_300 = *(longlong ***)(lVar20 + (longlong)plVar17);
        if ((*(uint *)((longlong)uStack_300 + 4) & 0x8000000) == 0) {
          plVar21 = (longlong *)param_1[1999];
          if (plVar21 < (longlong *)param_1[2000]) {
            param_1[1999] = (longlong)(plVar21 + 1);
            *plVar21 = (longlong)uStack_300;
          }
          else {
            plVar17 = (longlong *)param_1[0x7ce];
            lVar22 = (longlong)plVar21 - (longlong)plVar17 >> 3;
            lVar20 = 1;
            if ((lVar22 == 0) || (lVar20 = lVar22 * 2, lVar20 != 0)) {
              plVar15 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar20 * 8,(char)param_1[0x7d1]);
              plVar21 = (longlong *)param_1[1999];
              plVar17 = (longlong *)param_1[0x7ce];
            }
            else {
              plVar15 = (longlong *)0x0;
            }
            if (plVar17 != plVar21) {
                    // WARNING: Subroutine does not return
              memmove(plVar15,plVar17,(longlong)plVar21 - (longlong)plVar17);
            }
            *plVar15 = (longlong)uStack_300;
            if (param_1[0x7ce] != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            param_1[0x7ce] = (longlong)plVar15;
            param_1[1999] = (longlong)(plVar15 + 1);
            param_1[2000] = (longlong)(plVar15 + lVar20);
            plVar17 = plStack_2e8;
          }
        }
        uStack_2f0 = uStack_2f0 + 1;
        plVar17 = plVar17 + 1;
        lVar20 = param_2[0x6b0];
        plStack_2e8 = plVar17;
      } while (uStack_2f0 < *(uint *)(lVar20 + 0x110));
    }
    uStack_300 = (longlong **)&lStack_250;
    lVar20 = param_1[1999] - param_1[0x7ce] >> 3;
    uStack_238 = *(uint *)(param_1 + 0x7d1);
    if (lVar20 == 0) {
      lStack_250 = 0;
    }
    else {
      lStack_250 = FUN_18062b420(_DAT_180c8ed18,lVar20 * 8,uStack_238 & 0xff);
    }
    lStack_240 = lStack_250 + lVar20 * 8;
    lVar20 = param_1[0x7ce];
    lStack_248 = lStack_250;
    if (lVar20 != param_1[1999]) {
                    // WARNING: Subroutine does not return
      memmove(lStack_250,lVar20,param_1[1999] - lVar20);
    }
    FUN_1801c1af0(plVar14,&lStack_250);
    iVar11 = 0;
    if (param_1[0x1d] - *plVar14 >> 3 != 0) {
      lVar20 = 0;
      do {
        (**(code **)(**(longlong **)(lVar20 + *plVar14) + 0x18))
                  (*(longlong **)(lVar20 + *plVar14),param_1,param_2);
        iVar11 = iVar11 + 1;
        lVar20 = lVar20 + 8;
      } while ((ulonglong)(longlong)iVar11 < (ulonglong)(param_1[0x1d] - *plVar14 >> 3));
    }
    uVar16 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    uStack_300 = &plStack_1d0;
    puStack_1c0 = &UNK_1801bc960;
    pcStack_1b8 = FUN_1801bc8d0;
    plStack_2e8 = param_1;
    plStack_2e0 = param_2;
    plStack_1d0 = param_1;
    plStack_1c8 = param_2;
    plVar14 = (longlong *)FUN_18006b640(uVar16,&plStack_1d0);
    if (plVar14 != (longlong *)0x0) {
      plStack_1e8 = plVar14;
      (**(code **)(*plVar14 + 0x28))(plVar14);
    }
    plStack_1e8 = (longlong *)param_1[0xc18e];
    param_1[0xc18e] = (longlong)plVar14;
    if (plStack_1e8 != (longlong *)0x0) {
      (**(code **)(*plStack_1e8 + 0x38))();
    }
    *(undefined8 *)(param_1[0xc18e] + 0x18) = 0xfffffffffffffffc;
    lVar20 = _DAT_180c82868;
    plVar14 = (longlong *)param_1[0xc18e];
    if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
      uStack_300 = &plStack_270;
      plStack_270 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
      FUN_18005e110(lVar20,&plStack_270);
    }
    else {
      (**(code **)(*plVar14 + 0x60))();
      plVar14 = (longlong *)param_1[0xc18e];
      if (*(code **)(*plVar14 + 0x70) == (code *)&UNK_180049530) {
        LOCK();
        *(undefined1 *)(plVar14 + 2) = 1;
        UNLOCK();
        FUN_1800466d0(plVar14 + 4);
      }
      else {
        (**(code **)(*plVar14 + 0x70))();
      }
    }
    uVar16 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
    uStack_300 = &plStack_1b0;
    puStack_1a0 = &UNK_1801bc890;
    puStack_198 = &UNK_1801bc880;
    plStack_2e8 = param_1;
    plStack_2e0 = param_2;
    plStack_1b0 = param_1;
    plStack_1a8 = param_2;
    plVar14 = (longlong *)FUN_18006b640(uVar16,&plStack_1b0);
    if (plVar14 != (longlong *)0x0) {
      plStack_1e0 = plVar14;
      (**(code **)(*plVar14 + 0x28))(plVar14);
    }
    plStack_1e0 = (longlong *)param_1[0xc18f];
    param_1[0xc18f] = (longlong)plVar14;
    if (plStack_1e0 != (longlong *)0x0) {
      (**(code **)(*plStack_1e0 + 0x38))();
    }
    *(undefined8 *)(param_1[0xc18f] + 0x18) = 0xfffffffffffffffe;
    lVar20 = _DAT_180c82868;
    plVar14 = (longlong *)param_1[0xc18f];
    if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
      uStack_300 = &plStack_268;
      plStack_268 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
      FUN_18005e110(lVar20,&plStack_268);
    }
    else {
      (**(code **)(*plVar14 + 0x60))();
      plVar14 = (longlong *)param_1[0xc18f];
      if (*(code **)(*plVar14 + 0x70) == (code *)&UNK_180049530) {
        LOCK();
        *(undefined1 *)(plVar14 + 2) = 1;
        UNLOCK();
        FUN_1800466d0(plVar14 + 4);
      }
      else {
        (**(code **)(*plVar14 + 0x70))();
      }
    }
    if (param_1[0x89] != 0) {
      FUN_180374f40(param_1[0x89],param_2);
    }
    if ((*(char *)((longlong)param_1 + 0x563) != '\0') &&
       (iVar6 = (int)(param_1[0xb6] - param_1[0xb5] >> 0x3f),
       iVar11 = (int)((param_1[0xb6] - param_1[0xb5]) / 0xc) + iVar6,
       iVar11 != iVar6 && -1 < iVar11 - iVar6)) {
      pplVar13 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0xe8,8,3);
      bVar24 = *(byte *)(param_2 + 0x37b);
      uStack_300 = pplVar13;
      FUN_180049830(pplVar13);
      *pplVar13 = (longlong *)&UNK_180a0c2b8;
      pplVar13[0x18] = param_1;
      pplVar13[0x19] = param_2;
      *(byte *)(pplVar13 + 0x1a) = bVar24 >> 1 & 1;
      pplVar13[0x1b] = param_1 + 0x4e3;
      pplVar13[0x1c] = param_1 + 0x4cf;
      pplStack_258 = pplVar13;
      (*(code *)(*pplVar13)[5])(pplVar13);
      pplStack_258 = (longlong **)param_1[0x4ce];
      param_1[0x4ce] = (longlong)pplVar13;
      if (pplStack_258 != (longlong **)0x0) {
        (*(code *)(*pplStack_258)[7])();
      }
      lVar20 = _DAT_180c82868;
      plVar14 = (longlong *)param_1[0x4ce];
      if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
        pplStack_258 = &plStack_260;
        plStack_260 = plVar14;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x28))();
        }
        FUN_18005e110(lVar20,&plStack_260);
      }
      else {
        (**(code **)(*plVar14 + 0x60))();
        puVar3 = (undefined8 *)param_1[0x4ce];
        if ((undefined *)*puVar3 == &UNK_180a0c2b8) {
          LOCK();
          *(undefined1 *)(puVar3 + 2) = 1;
          UNLOCK();
          FUN_1800466d0(puVar3 + 4);
        }
        else {
          (**(code **)((undefined *)*puVar3 + 0x70))();
        }
      }
    }
  }
  lVar25 = _DAT_180c82868;
  plVar14 = param_1 + 0x6c;
  lVar20 = param_1[0x6d];
  lVar22 = *plVar14;
  if (lVar20 - lVar22 >> 3 != 0) {
    do {
      bVar8 = false;
      uVar23 = 0;
      if (lVar20 - lVar22 >> 3 == 0) break;
      do {
        plVar17 = *(longlong **)(lVar22 + uVar23 * 8);
        pcVar5 = *(code **)(*plVar17 + 0x68);
        if (pcVar5 == (code *)&UNK_1800467f0) {
          cVar9 = (char)plVar17[2] != '\0';
        }
        else {
          cVar9 = (*pcVar5)();
        }
        if (cVar9 == '\0') {
          bVar8 = true;
          plVar17 = (longlong *)FUN_18005e890(lVar25);
          cVar9 = (**(code **)(*plVar17 + 0x20))(plVar17,0);
          if (cVar9 == '\0') {
            plVar17 = *(longlong **)(*plVar14 + uVar23 * 8);
            pcVar5 = *(code **)(*plVar17 + 0x80);
            if (pcVar5 == (code *)&UNK_180049760) {
              FUN_1800496b0(plVar17 + 4);
            }
            else {
              (*pcVar5)();
            }
          }
        }
        uVar23 = (ulonglong)((int)uVar23 + 1);
        lVar20 = param_1[0x6d];
        lVar22 = *plVar14;
      } while (uVar23 < (ulonglong)(lVar20 - lVar22 >> 3));
    } while (bVar8);
    FUN_1800b8500(plVar14);
    param_1 = plStack_1d8;
  }
  *(undefined1 *)(param_1 + 2) = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_328);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18019c480(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  lVar4 = *(longlong *)(lVar3 + 0x3a8);
  uVar2 = *(undefined4 *)(lVar3 + 0x43c);
  uVar5 = *(undefined4 *)(lVar3 + 0x440);
  uVar6 = *(undefined4 *)(lVar3 + 0x444);
  uVar7 = *(undefined4 *)(lVar4 + 0x40);
  uVar8 = *(undefined4 *)(lVar4 + 0x44);
  uVar9 = *(undefined4 *)(lVar4 + 0x48);
  uVar10 = *(undefined4 *)(lVar4 + 0x4c);
  *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar3 + 0x438);
  *(undefined4 *)(lVar4 + 0x44) = uVar2;
  *(undefined4 *)(lVar4 + 0x48) = uVar5;
  *(undefined4 *)(lVar4 + 0x4c) = uVar6;
  *(undefined4 *)(lVar4 + 0x30) = uVar7;
  *(undefined4 *)(lVar4 + 0x34) = uVar8;
  *(undefined4 *)(lVar4 + 0x38) = uVar9;
  *(undefined4 *)(lVar4 + 0x3c) = uVar10;
  FUN_1802c6190(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x3a8));
  FUN_18019c5b0(*(longlong *)(param_1 + 200) + 0x12678,
                *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x3a8));
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x3a8);
  lVar4 = *(longlong *)(param_1 + 200);
  uVar11 = *(undefined8 *)(lVar3 + 0x38);
  uVar12 = *(undefined8 *)(lVar3 + 0x40);
  uVar13 = *(undefined8 *)(lVar3 + 0x48);
  uVar14 = *(undefined8 *)(lVar3 + 0x50);
  uVar15 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(lVar4 + 0x126b0) = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar4 + 0x126b8) = uVar11;
  *(undefined8 *)(lVar4 + 0x126c0) = uVar12;
  *(undefined8 *)(lVar4 + 0x126c8) = uVar13;
  *(undefined8 *)(lVar4 + 0x126d0) = uVar14;
  *(undefined8 *)(lVar4 + 0x126d8) = uVar15;
  *(byte *)(*(longlong *)(param_1 + 200) + 0x126a0) = *(byte *)(_DAT_180c86870 + 0x224) & 1;
  *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x12670) = 1;
  LOCK();
  puVar1 = (undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x3a8) + 0x1060);
  uVar2 = *puVar1;
  *puVar1 = 0;
  UNLOCK();
  return uVar2;
}



undefined8 FUN_18019c560(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}



longlong * FUN_18019c5b0(longlong *param_1,longlong *param_2)

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
  *(char *)(param_1 + 5) = (char)param_2[5];
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





