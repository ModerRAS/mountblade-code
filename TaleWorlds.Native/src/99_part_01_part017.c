#include "TaleWorlds.Native.Split.h"

// 99_part_01_part017.c - 1 个函数

// 函数: void FUN_1800b0a10(undefined8 param_1,undefined8 *param_2,int param_3,longlong param_4,uint param_5,
void FUN_1800b0a10(undefined8 param_1,undefined8 *param_2,int param_3,longlong param_4,uint param_5,
                  int param_6,int param_7,int param_8,int param_9,longlong *param_10,char param_11,
                  uint param_12)

{
  longlong **pplVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  undefined1 auStack_2b8 [32];
  undefined4 *puStack_298;
  uint uStack_290;
  longlong *plStack_288;
  longlong *plStack_280;
  int iStack_278;
  longlong *plStack_270;
  longlong *plStack_268;
  int iStack_260;
  int iStack_25c;
  undefined8 *puStack_258;
  longlong lStack_250;
  longlong *plStack_248;
  longlong *plStack_240;
  longlong **pplStack_238;
  longlong *plStack_230;
  longlong *plStack_228;
  longlong *plStack_220;
  longlong *plStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 auStack_1e0 [8];
  longlong *plStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined4 uStack_1b8;
  undefined1 auStack_1b0 [128];
  undefined4 uStack_130;
  longlong *plStack_128;
  uint uStack_120;
  int iStack_11c;
  longlong *plStack_118;
  undefined4 uStack_110;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  plVar15 = param_10;
  uStack_1f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  iStack_278 = param_8;
  plVar5 = (longlong *)0x0;
  iStack_25c = 0;
  puStack_258 = _DAT_180c86930;
  puVar12 = param_2;
  iVar17 = param_9;
  if (1 < (int)param_12) {
    puVar12 = (undefined8 *)((longlong)(param_9 + -1) % (longlong)(int)param_12 & 0xffffffff);
    iVar17 = ((param_9 + -1) / (int)param_12 + 1) * param_12;
  }
  plStack_268 = (longlong *)0x0;
  iStack_260 = param_3;
  lStack_250 = param_4;
  puStack_208 = param_2;
  puStack_1f0 = param_2;
  if (param_12 < 2) {
    plStack_220 = param_10;
    if (param_10 != (longlong *)0x0) {
      (**(code **)(*param_10 + 0x28))(param_10,puVar12);
    }
    plStack_220 = (longlong *)0x0;
    plStack_268 = plVar15;
  }
  else if (param_10 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_180081480(_DAT_180c8a998,&plStack_228,iVar17 * param_8);
    plVar5 = (longlong *)*plVar5;
    if (plVar5 != (longlong *)0x0) {
      plStack_230 = plVar5;
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plStack_230 = (longlong *)0x0;
    plStack_268 = plVar5;
    if (plStack_228 != (longlong *)0x0) {
      (**(code **)(*plStack_228 + 0x38))();
    }
                    // WARNING: Subroutine does not return
    memcpy(plVar5[2],plVar15[2],(longlong)*(int *)((longlong)plVar15 + 0x1c));
  }
  puVar12 = puStack_258;
  iVar3 = param_6;
  if ((param_6 == 1) && (plStack_268 == (longlong *)0x0)) {
    *param_2 = 0;
    iStack_25c = param_6;
    goto LAB_1800b11f1;
  }
  plStack_270 = (longlong *)0x0;
  plVar15 = plVar5;
  uVar16 = param_5;
  if ((param_6 == 1) || (param_11 == '\0')) {
LAB_1800b0d28:
    plVar18 = plStack_268;
    plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x170,8,3);
    *plVar7 = (longlong)&UNK_180a21690;
    *plVar7 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar7 + 1) = 0;
    *plVar7 = (longlong)&UNK_180a176f8;
    plVar7[6] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = 0;
    plVar7[7] = 0;
    *(undefined4 *)(plVar7 + 8) = 0;
    pplVar1 = (longlong **)(plVar7 + 10);
    *pplVar1 = (longlong *)&UNK_18098bcb0;
    plVar7[0xb] = 0;
    *(undefined4 *)(plVar7 + 0xc) = 0;
    *pplVar1 = (longlong *)&UNK_1809feda8;
    plVar7[0xb] = (longlong)(plVar7 + 0xd);
    *(undefined4 *)(plVar7 + 0xc) = 0;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    *(undefined4 *)(plVar7 + 0x2d) = 0xffffffff;
    plStack_248 = plVar7;
    pplStack_238 = pplVar1;
    plStack_1d8 = plVar7;
    (**(code **)(*plVar7 + 0x28))(plVar7);
    plStack_248 = (undefined8 *)0x0;
    *(uint *)(plVar7 + 7) = uVar16;
    *(int *)((longlong)plVar7 + 0x3c) = iVar17;
    *(int *)(plVar7 + 8) = iStack_278;
    *(int *)((longlong)plVar7 + 0x44) = param_7;
    puVar13 = &DAT_18098bc73;
    if (*(undefined **)(lStack_250 + 8) != (undefined *)0x0) {
      puVar13 = *(undefined **)(lStack_250 + 8);
    }
    plStack_270 = plVar7;
    (*(code *)(*pplVar1)[2])(pplVar1,puVar13);
    iVar3 = param_6;
    *(int *)(plVar7 + 9) = param_6;
    *(int *)(plVar7 + 0x2d) = iStack_260;
    iVar17 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
    iVar4 = _Thrd_id();
    plVar5 = plVar7;
    if (iVar4 == iVar17) {
      uStack_290 = *(uint *)((longlong)plVar7 + 0x44);
      puStack_298 = (undefined4 *)CONCAT44(puStack_298._4_4_,(int)plVar7[8]);
      plStack_288 = plVar18;
      plStack_280 = plVar7;
      FUN_1800a4010(_DAT_180c86938,uVar16,iVar3,*(undefined4 *)((longlong)plVar7 + 0x3c));
    }
    else {
      pplStack_238 = (longlong **)&puStack_1c8;
      uStack_110 = 0;
      puStack_1c8 = &UNK_1809fcc28;
      puStack_1c0 = auStack_1b0;
      uStack_1b8 = 0;
      auStack_1b0[0] = 0;
      uStack_130 = 0x16;
      iStack_11c = iVar3;
      plStack_128 = plVar7;
      uStack_120 = uVar16;
      plStack_118 = plVar18;
      if (plVar18 != (longlong *)0x0) {
        uStack_110 = *(undefined4 *)((longlong)plVar18 + 0x1c);
        if (*(code **)(*plVar18 + 0x28) == (code *)&UNK_180084660) {
          LOCK();
          *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
          UNLOCK();
          plVar5 = plStack_270;
          plVar18 = plStack_268;
        }
        else {
          (**(code **)(*plVar18 + 0x28))(plVar18);
        }
      }
      if ((undefined *)*plVar7 == &UNK_180a176f8) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plVar5 = plStack_270;
        plVar18 = plStack_268;
      }
      else {
        (**(code **)((undefined *)*plVar7 + 0x28))(plVar7);
      }
      uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
      plVar9 = (longlong *)FUN_18005ce30(uVar8,&puStack_1c8);
      ppuStack_200 = (undefined **)plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      lVar11 = _DAT_180c82868;
      pplStack_238 = &plStack_240;
      plStack_240 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      FUN_18005e370(lVar11,&plStack_240);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      ppuStack_200 = &puStack_1c8;
      puStack_1c8 = &UNK_18098bcb0;
    }
    if ((iVar3 != 1) && (param_11 != '\0')) {
      puVar12 = puStack_258 + 0x102;
      puStack_1d0 = puVar12;
      iVar17 = _Mtx_lock(puVar12);
      if (iVar17 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar17);
      }
      puVar14 = (undefined8 *)plVar15[1];
      if (puVar14 < (undefined8 *)plVar15[2]) {
        plVar15[1] = (longlong)(puVar14 + 1);
        *puVar14 = plVar7;
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      else {
        puVar6 = (undefined8 *)*plVar15;
        lVar11 = (longlong)puVar14 - (longlong)puVar6 >> 3;
        if (lVar11 == 0) {
          lVar11 = 1;
LAB_1800b1065:
          puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar11 * 8);
          puVar14 = (undefined8 *)plVar15[1];
          puVar6 = (undefined8 *)*plVar15;
          puStack_258 = puVar10;
        }
        else {
          lVar11 = lVar11 * 2;
          if (lVar11 != 0) goto LAB_1800b1065;
          puStack_258 = (undefined8 *)0x0;
          puVar10 = puStack_258;
        }
        for (; puVar6 != puVar14; puVar6 = puVar6 + 1) {
          *puVar10 = *puVar6;
          *puVar6 = 0;
          puVar10 = puVar10 + 1;
        }
        *puVar10 = plVar7;
        (**(code **)(*plVar7 + 0x28))(plVar7);
        plStack_248 = puVar10 + 1;
        plVar7 = (longlong *)plVar15[1];
        plVar9 = (longlong *)*plVar15;
        if (plVar9 != plVar7) {
          do {
            if ((longlong *)*plVar9 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar9 + 0x38))();
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar7);
          plVar9 = (longlong *)*plVar15;
        }
        if (plVar9 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar9);
        }
        *plVar15 = (longlong)puStack_258;
        plVar15[1] = (longlong)plStack_248;
        plVar15[2] = (longlong)(puStack_258 + lVar11);
      }
      iVar17 = _Mtx_unlock(puVar12);
      if (iVar17 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar17);
      }
    }
  }
  else {
    puStack_210 = puStack_258 + 0x102;
    iVar4 = _Mtx_lock();
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uVar16 = param_5;
    puVar14 = puVar12 + 0xe8;
    puVar6 = puVar14;
    puVar12 = (undefined8 *)puVar12[0xea];
    while (puVar12 != (undefined8 *)0x0) {
      if (*(uint *)(puVar12 + 4) < param_5) {
        puVar12 = (undefined8 *)*puVar12;
      }
      else {
        puVar6 = puVar12;
        puVar12 = (undefined8 *)puVar12[1];
      }
    }
    if ((puVar6 == puVar14) || (param_5 < *(uint *)(puVar6 + 4))) {
      puStack_298 = &param_5;
      puStack_1e8 = puVar6;
      puVar6 = (undefined8 *)FUN_1800b90a0(puVar14,auStack_1e0,puVar14,puVar6);
      puVar6 = (undefined8 *)*puVar6;
    }
    iVar4 = iStack_278;
    plVar15 = (longlong *)puVar6[5];
    do {
      uVar2 = param_5;
      if (plVar15 == (longlong *)puVar6[6]) break;
      plVar18 = (longlong *)*plVar15;
      plVar5 = plStack_270;
      if (((((*(int *)((longlong)plVar18 + 0x44) == param_7) && (*(uint *)(plVar18 + 7) == param_5))
           && (*(int *)((longlong)plVar18 + 0x3c) == iVar17)) &&
          (((int)plVar18[8] == iVar4 && ((int)plVar18[9] == iVar3)))) &&
         (((int)plVar18[0x2d] == iStack_260 && (*(int *)(*plVar15 + 8) == 1)))) {
        if (plVar18 != (longlong *)0x0) {
          plStack_218 = plVar18;
          (**(code **)(*plVar18 + 0x28))(plVar18);
        }
        plStack_218 = plStack_270;
        plVar5 = plVar18;
        if (plStack_270 != (longlong *)0x0) {
          lVar11 = *plStack_270;
          plStack_270 = plVar18;
          (**(code **)(lVar11 + 0x38))();
          plVar5 = plStack_270;
        }
        plStack_270 = plVar5;
        puVar13 = &DAT_18098bc73;
        if (*(undefined **)(lStack_250 + 8) != (undefined *)0x0) {
          puVar13 = *(undefined **)(lStack_250 + 8);
        }
        (**(code **)(plVar18[10] + 0x10))(plVar18 + 10,puVar13);
        plVar5 = plVar18;
      }
      plVar15 = plVar15 + 1;
      uVar16 = uVar2;
    } while (plVar5 == (longlong *)0x0);
    iVar4 = _Mtx_unlock(puStack_210);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    plVar18 = plStack_268;
    plVar15 = puVar6 + 5;
    if (plVar5 == (longlong *)0x0) goto LAB_1800b0d28;
    if (plStack_268 != (longlong *)0x0) {
      if (iVar3 == 3) {
        FUN_18029b390(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),plVar5,plStack_268);
      }
      else {
        uStack_290 = uStack_290 & 0xffffff00;
        puStack_298 = (undefined4 *)
                      CONCAT44(puStack_298._4_4_,*(undefined4 *)((longlong)plStack_268 + 0x1c));
        FUN_18029b1d0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),plVar5,0,plStack_268);
      }
    }
  }
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(undefined4 *)(lStack_250 + 0x10);
  puVar13 = &DAT_18098bc73;
  if (*(undefined **)(lStack_250 + 8) != (undefined *)0x0) {
    puVar13 = *(undefined **)(lStack_250 + 8);
  }
  strcpy_s(auStack_d0,0x80,puVar13);
  puStack_e8 = &UNK_18098bcb0;
  *(undefined4 *)((longlong)plVar5 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  *puStack_208 = plVar5;
  plStack_270 = (longlong *)0x0;
  iStack_25c = 1;
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x38))(plVar18);
  }
LAB_1800b11f1:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




