#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part201.c - 13 个函数

// 函数: void write_engine_module_info(longlong module_base, undefined8 param_2, undefined8 param_3, undefined8 param_4)
void write_engine_module_info(longlong module_base, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined1 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  uint uStack_18;
  
  FUN_180627ae0(&puStack_28, module_base + 0x270, param_3, param_4, 0xfffffffffffffffe);
  iVar3 = uStack_18 + 0x11;
  FUN_1806277c0(&puStack_28, iVar3);
  puVar1 = (undefined4 *)(puStack_20 + uStack_18);
  *puVar1 = 0x69676e65;
  puVar1[1] = 0x6d5f656e;
  puVar1[2] = 0x6c75646f;
  puVar1[3] = 0x6e692e65;
  *(undefined2 *)(puVar1 + 4) = 0x69;
  puVar2 = &DAT_18098bc73;
  if (puStack_20 != (undefined *)0x0) {
    puVar2 = puStack_20;
  }
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_18 = iVar3;
  FUN_18062dee0(&uStack_40, puVar2, &UNK_1809fcfbc);
  lVar4 = lStack_38;
  if (lStack_38 == 0) {
    puVar2 = &DAT_18098bc73;
    if (puStack_20 != (undefined *)0x0) {
      puVar2 = puStack_20;
    }
    FUN_180626ee0(&UNK_180a09d40, puVar2);
  }
  else {
    FUN_1800aecf0(_DAT_180c8a9c8, &uStack_40);
    lVar4 = lStack_38;
    if (lStack_38 != 0) {
      fclose(lStack_38);
      lStack_38 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
      lVar4 = 0;
    }
  }
  if (lVar4 != 0) {
    fclose(lVar4);
    lStack_38 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_28 = &UNK_180a3c3e0;
  if (puStack_20 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * process_engine_data(longlong param_1, longlong *param_2, longlong param_3, undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puStackX_8;
  longlong lStackX_10;
  
  lVar4 = FUN_18062b420(_DAT_180c8ed18, 0xc0, *(undefined1 *)(param_1 + 0x28), param_4,
                        0xfffffffffffffffe);
  puVar1 = (undefined8 *)(lVar4 + 0x20);
  puStackX_8 = puVar1;
  FUN_180049b30(puVar1, param_3);
  *(undefined4 *)(lVar4 + 0xb8) = *(undefined4 *)(param_3 + 0x58);
  lStackX_10 = lVar4;
  lVar5 = FUN_1800590b0(param_1, &puStackX_8, puVar1);
  if ((char)puStackX_8 == '\0') {
    *puVar1 = &UNK_18098bcb0;
    if (lVar4 != 0) {
      puStackX_8 = puVar1;
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
    *param_2 = lVar5;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar5 != param_1) {
    if (*(int *)(lVar5 + 0x30) == 0) {
LAB_1801807e7:
      uVar8 = 1;
      goto LAB_1801807f2;
    }
    if (*(int *)(lVar4 + 0x30) != 0) {
      pbVar6 = *(byte **)(lVar5 + 0x28);
      lVar7 = *(longlong *)(lVar4 + 0x28) - (longlong)pbVar6;
      do {
        bVar2 = *pbVar6;
        uVar3 = (uint)pbVar6[lVar7];
        if (bVar2 != uVar3) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar2 - uVar3) < 1) goto LAB_1801807e7;
    }
  }
  uVar8 = 0;
LAB_1801807f2:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4, lVar5, param_1, uVar8);
}



// WARNING: Removing unreachable block (ram,0x000180362701)
// WARNING: Removing unreachable block (ram,0x000180362738)
// WARNING: Removing unreachable block (ram,0x000180362708)
// WARNING: Removing unreachable block (ram,0x000180362712)
// WARNING: Removing unreachable block (ram,0x000180362720)
// WARNING: Removing unreachable block (ram,0x000180362727)
// WARNING: Removing unreachable block (ram,0x000180362732)
// WARNING: Removing unreachable block (ram,0x00018036273a)
// WARNING: Removing unreachable block (ram,0x00018036275a)
// WARNING: Removing unreachable block (ram,0x000180362770)
// WARNING: Removing unreachable block (ram,0x00018036277e)
// WARNING: Removing unreachable block (ram,0x000180362785)
// WARNING: Removing unreachable block (ram,0x00018036273f)
// WARNING: Removing unreachable block (ram,0x0001803627bb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_render_context(undefined8 param_1, undefined8 param_2)
void initialize_render_context(undefined8 param_1, undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar13;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined4 uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  longlong lVar12;
  
  puVar4 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, 0x150, 8, 3);
  uStack_48 = 0xfffffffffffffffe;
  puVar7 = puVar4;
  FUN_1803456e0(puVar4, param_2, param_1);
  *puVar7 = &UNK_180a20018;
  plVar8 = puVar7 + 0x12;
  *plVar8 = (longlong)&UNK_18098bcb0;
  iVar13 = 0;
  puVar7[0x13] = 0;
  *(undefined4 *)(puVar7 + 0x14) = 0;
  *plVar8 = (longlong)&UNK_180a3c3e0;
  puVar7[0x15] = 0;
  puVar7[0x13] = 0;
  *(undefined4 *)(puVar7 + 0x14) = 0;
  plVar10 = puVar4 + 0x16;
  *plVar10 = (longlong)&UNK_18098bcb0;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = 0;
  *plVar10 = (longlong)&UNK_180a3c3e0;
  puVar4[0x19] = 0;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = 0;
  puVar7 = puVar4 + 0x1a;
  puVar4[0x1d] = 0;
  *(undefined4 *)(puVar4 + 0x1f) = 3;
  *puVar7 = puVar7;
  puVar4[0x1b] = puVar7;
  puVar4[0x1c] = 0;
  *(undefined1 *)(puVar4 + 0x1d) = 0;
  puVar4[0x1e] = 0;
  puVar4[0x24] = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  *(undefined1 *)((longlong)puVar4 + 0x8a) = 1;
  (**(code **)(*plVar8 + 0x10))(plVar8, &DAT_18098bc73);
  (**(code **)(*plVar10 + 0x10))(plVar10, &UNK_180a1ff90);
  plVar10 = puVar4 + 0x20;
  *plVar10 = (longlong)&UNK_180a1ff90;
  puVar4[0x21] = &UNK_180a07998;
  puVar4[0x22] = &UNK_180a1ff8c;
  puVar4[0x23] = &UNK_180a1ff80;
  do {
    lVar1 = *plVar10;
    puStack_128 = &UNK_180a3c3e0;
    uStack_110 = 0;
    puStack_120 = (undefined8 *)0x0;
    uStack_118 = 0;
    if (lVar1 != 0) {
      lVar11 = -1;
      do {
        lVar12 = lVar11;
        lVar11 = lVar12 + 1;
      } while (*(char *)(lVar1 + lVar11) != '\0');
      if ((int)lVar11 != 0) {
        iVar9 = (int)lVar12 + 2;
        iVar13 = iVar9;
        if (iVar9 < 0x10) {
          iVar13 = 0x10;
        }
        puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18, (longlong)iVar13, 0x13);
        *puVar5 = 0;
        puStack_120 = (undefined8 *)puVar5;
        uVar3 = FUN_18064e990(puVar5);
        uStack_110 = CONCAT44(uStack_110._4_4_, uVar3);
                    // WARNING: Subroutine does not return
        memcpy(puVar5, lVar1, iVar9);
      }
    }
    uStack_118 = 0;
    puVar6 = puVar7;
    for (puVar2 = (undefined8 *)puVar4[0x1c]; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[1]) {
      puVar6 = puVar2;
    }
    if ((puVar6 == puVar7) || (*(int *)(puVar6 + 6) != 0)) {
      puVar6 = (undefined8 *)FUN_1800c2ab0(puVar7, auStack_40);
      puVar6 = (undefined8 *)*puVar6;
    }
    *(int *)(puVar6 + 8) = iVar13;
    puStack_120 = (undefined8 *)0x0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    puStack_128 = &UNK_18098bcb0;
    iVar13 = iVar13 + 1;
    plVar10 = plVar10 + 1;
  } while (iVar13 < 4);
  plVar10 = (longlong *)puVar4[0x24];
  puVar4[0x24] = 0;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x38))();
  }
  *(undefined1 *)(puVar4 + 0x29) = 0;
  *(undefined2 *)(puVar4 + 0x11) = 0;
  puStack_128 = &UNK_180a3c3e0;
  uStack_110 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_118 = 0;
  puVar7 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
  *(undefined1 *)puVar7 = 0;
  puStack_120 = puVar7;
  uVar3 = FUN_18064e990(puVar7);
  uStack_110 = CONCAT44(uStack_110._4_4_, uVar3);
  *puVar7 = 0x615020746e657645;
  *(undefined2 *)(puVar7 + 1) = 0x6874;
  *(undefined1 *)((longlong)puVar7 + 10) = 0;
  uStack_118 = 10;
  FUN_1803460a0(puVar4, &puStack_128, puVar4 + 0x12, 9);
  puStack_128 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void create_display_manager(undefined8 param_1, undefined8 param_2)
void create_display_manager(undefined8 param_1, undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, 0x88, 8, 3, 0xfffffffffffffffe);
  puVar3 = puVar2;
  FUN_1803456e0(puVar2, param_2, param_1);
  *puVar3 = &UNK_180a1ef60;
  puVar3[0xf] = 0;
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_, uVar1);
  *puVar3 = 0x614d206c61636544;
  *(undefined4 *)(puVar3 + 1) = 0x69726574;
  *(undefined2 *)((longlong)puVar3 + 0xc) = 0x6c61;
  *(undefined1 *)((longlong)puVar3 + 0xe) = 0;
  uStack_30 = 0xe;
  FUN_1803460a0(puVar2, &puStack_40, puVar2 + 0xf, 10);
  puStack_40 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}





// 函数: void initialize_graphics_subsystem(void)
void initialize_graphics_subsystem(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void process_render_bounds(longlong param_1, int param_2, float *param_3, float *param_4, float *param_5,
void process_render_bounds(longlong param_1, int param_2, float *param_3, float *param_4, float *param_5,
                  float *param_6, longlong *param_7, undefined8 param_8)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_18;
  float fStackX_1c;
  undefined8 uVar12;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  longlong *plStack_48;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  
  plVar4 = param_7;
  uVar12 = 0xfffffffffffffffe;
  if (param_2 < 0x200) {
    pfVar7 = (float *)(((longlong)param_2 + 4U) * 0x1c + param_1);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x48);
    for (piVar5 = *(int **)(lVar3 + ((ulonglong)(longlong)param_2 %
                                    (ulonglong)*(uint *)(param_1 + 0x50)) * 8); piVar5 != (int *)0x0
        ; piVar5 = *(int **)(piVar5 + 8)) {
      if (param_2 == *piVar5) {
        lVar6 = *(longlong *)(param_1 + 0x50);
        goto LAB_180181af9;
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x50);
    piVar5 = *(int **)(lVar3 + lVar6 * 8);
LAB_180181af9:
    if (piVar5 == *(int **)(lVar3 + lVar6 * 8)) {
      pfVar7 = (float *)(param_1 + 0x20);
    }
    else {
      pfVar7 = (float *)(piVar5 + 1);
    }
  }
  fVar9 = *param_3;
  fStack_88 = param_3[2];
  uStack_78 = *(undefined8 *)(param_3 + 2);
  fStack_8c = (pfVar7[3] - pfVar7[1]) * param_6[1];
  fVar10 = pfVar7[2];
  fVar11 = *pfVar7;
  fVar8 = param_3[1] + (param_6[1] * pfVar7[5] - fStack_8c);
  fStack_8c = fVar8 + fStack_8c;
  fStack_90 = fVar9 + (fVar10 - fVar11) * *param_6;
  uStack_84 = 0x7f7fffff;
  fVar1 = *param_4;
  if ((fVar1 < fStack_90) && (fVar2 = *param_5, fVar9 < fVar2)) {
    if (fVar9 < fVar1) {
      fVar11 = fVar10 - ((fStack_90 - fVar1) * (fVar10 - fVar11)) / (fStack_90 - fVar9);
      fVar9 = fVar1;
    }
    _fStack_80 = CONCAT44(fVar8, fVar9);
    if (fVar2 < fStack_90) {
      fVar10 = ((fVar2 - fVar9) * (fVar10 - fVar11)) / (fStack_90 - fVar9) + fVar11;
      fStack_90 = fVar2;
    }
    param_6 = (float *)param_7;
    if (param_7 != (longlong *)0x0) {
      (**(code **)(*param_7 + 0x28))(param_7);
    }
    plStack_70 = (longlong *)0x0;
    plStack_68 = (longlong *)0x0;
    param_6 = (float *)auStack_60;
    plStack_48 = (longlong *)0x0;
    uStack_58 = 0;
    auStack_60[0] = 0;
    FUN_18022f2e0(&plStack_70, plVar4, 0);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    param_6 = (float *)CONCAT44(pfVar7[3], fVar10);
    fStackX_1c = pfVar7[1];
    fStackX_18 = fVar11;
    FUN_180235ae0(&plStack_70, &fStack_80, &fStack_90, &fStackX_18, &param_6, param_8, uVar12);
    if ((plStack_70 != (longlong *)0x0) && (plStack_68 != (longlong *)0x0)) {
      if (cStack_3e != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(auStack_60);
      if (cStack_40 != '\0') {
        FUN_180079520(plStack_70);
      }
      if (cStack_3f != '\0') {
        FUN_180079520(plStack_70);
      }
      plVar4 = plStack_68;
      param_6 = (float *)plStack_68;
      plStack_68 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
    }
    param_6 = (float *)auStack_60;
    FUN_18007f6a0(auStack_60);
    if (plStack_48 != (longlong *)0x0) {
      (**(code **)(*plStack_48 + 0x38))();
    }
    if (plStack_68 != (longlong *)0x0) {
      (**(code **)(*plStack_68 + 0x38))();
    }
    if (plStack_70 != (longlong *)0x0) {
      (**(code **)(*plStack_70 + 0x38))();
    }
  }
  return;
}



float calculate_render_distance(longlong param_1, int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_2 < 0x200) {
    param_1 = ((longlong)param_2 + 4U) * 0x1c + param_1;
    return *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  for (piVar2 = *(int **)(lVar1 + ((ulonglong)(longlong)param_2 %
                                  (ulonglong)*(uint *)(param_1 + 0x50)) * 8); piVar2 != (int *)0x0;
      piVar2 = *(int **)(piVar2 + 8)) {
    if (param_2 == *piVar2) goto LAB_180181dc2;
  }
  piVar2 = (int *)0x0;
LAB_180181dc2:
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(lVar1 + *(longlong *)(param_1 + 0x50) * 8);
  }
  if (piVar2 == *(int **)(lVar1 + *(longlong *)(param_1 + 0x50) * 8)) {
    return *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x30);
  }
  return (float)piVar2[7] + (float)piVar2[5];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_shader_parameters(undefined8 param_1, longlong param_2, ulonglong param_3, int *param_4,
void process_shader_parameters(undefined8 param_1, longlong param_2, ulonglong param_3, int *param_4,
                  longlong *param_5, float *param_6, float param_7)

{
  undefined1 uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  float fVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined *puVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined4 uVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  float fVar29;
  undefined4 uVar30;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  uint uStack_a8;
  ulonglong uStack_a0;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  
  fVar5 = param_7;
  plVar4 = param_5;
  uStack_c0 = 0xfffffffffffffffe;
  uVar30 = 0;
  fVar29 = 0.0;
  bVar3 = false;
  uVar19 = (ulonglong)*param_4;
  iVar9 = (int)*param_5;
  uVar16 = param_3;
  uVar20 = uVar19;
  if (*param_4 < iVar9) {
    do {
      iVar17 = (int)uVar16;
      iVar18 = (int)uVar20;
      if (iVar17 <= iVar18) {
        return;
      }
      if (bVar3) {
        bVar7 = false;
        if (*(int *)(param_2 + uVar19 * 4) != 0x3e) {
          bVar7 = bVar3;
        }
      }
      else {
        iVar8 = *(int *)(param_2 + uVar19 * 4);
        if (iVar8 == 0x3c) {
          iVar8 = iVar18 + 5;
          if (((((iVar9 <= iVar8) || (iVar17 <= iVar8)) ||
               (*(int *)(param_2 + 4 + uVar19 * 4) != 0x69)) ||
              ((*(int *)(param_2 + 8 + uVar19 * 4) != 0x6d ||
               (*(int *)(param_2 + 0xc + uVar19 * 4) != 0x67)))) ||
             (*(int *)(param_2 + 0x10 + uVar19 * 4) != 0x3d)) {
            bVar7 = true;
            goto LAB_18018222c;
          }
          uVar19 = uVar19 + 5;
          puStack_b8 = &UNK_180a3c3e0;
          uStack_a0 = 0;
          puStack_b0 = (undefined *)0x0;
          uStack_a8 = 0;
          iVar18 = iVar8;
          if (iVar8 < (int)*plVar4) {
            uVar16 = uVar19;
            do {
              uVar19 = uVar16;
              iVar18 = iVar8;
              if ((longlong)iVar17 <= (longlong)uVar16) break;
              uVar1 = *(undefined1 *)(param_2 + uVar16 * 4);
              FUN_1806277c0(&puStack_b8);
              puStack_b0[uStack_a8] = uVar1;
              puStack_b0[uStack_a8 + 1] = 0;
              uStack_a8 = uStack_a8 + 1;
              iVar18 = iVar8 + 1;
              uVar19 = uVar16 + 1;
              if (((longlong)uVar19 < (longlong)iVar17) && (*(int *)(param_2 + uVar19 * 4) == 0x3e))
              {
                iVar18 = iVar8 + 2;
                uVar19 = uVar16 + 2;
                break;
              }
              uVar16 = uVar19;
              iVar8 = iVar18;
            } while (iVar18 < (int)*plVar4);
          }
          uVar14 = 0;
          lVar11 = 0;
          if (uStack_a8 != 0) {
            do {
              if (puStack_b0[lVar11] == ' ') {
                puStack_b0[lVar11] = 0x5f;
              }
              uVar14 = uVar14 + 1;
              lVar11 = lVar11 + 1;
            } while (uVar14 < uStack_a8);
          }
          plVar12 = (longlong *)FUN_1800b33d0(_DAT_180c86930, &param_5, &puStack_b8);
          puVar6 = puStack_b0;
          if (param_5 == (longlong *)0x0) {
            if ((uStack_a8 == 0xb) && (iVar9 = strcmp(puStack_b0, &UNK_180a03008), iVar9 == 0)) {
              FUN_180626ee0(&UNK_180a02a80, &UNK_180a03008);
            }
            else {
              puVar15 = &DAT_18098bc73;
              if (puVar6 != (undefined *)0x0) {
                puVar15 = puVar6;
              }
              FUN_180627020(&UNK_180a02a20, puVar15, &UNK_180a0a2a8);
              puVar13 = (undefined8 *)FUN_1800befa0(_DAT_180c86898, &plStack_c8);
              plVar2 = (longlong *)*puVar13;
              *puVar13 = 0;
              if (param_5 != (longlong *)0x0) {
                lVar11 = *param_5;
                param_5 = plVar2;
                (**(code **)(lVar11 + 0x38))();
                plVar2 = param_5;
              }
              param_5 = plVar2;
              if (plStack_c8 != (longlong *)0x0) {
                (**(code **)(*plStack_c8 + 0x38))();
              }
            }
          }
          lVar11 = *plVar12;
          uVar30 = 0;
          if (param_5 != (longlong *)0x0) {
            (**(code **)(*param_5 + 0x38))();
          }
          if (lVar11 != 0) {
            fVar29 = fVar29 + ((*(float *)(lVar11 + 0x284) - *(float *)(lVar11 + 0x274)) * *param_6)
                              / (*(float *)(lVar11 + 0x288) - *(float *)(lVar11 + 0x278));
          }
          puStack_b8 = &UNK_180a3c3e0;
          if (puStack_b0 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_b0 = (undefined *)0x0;
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
          puStack_b8 = &UNK_18098bcb0;
        }
        else if (iVar8 == 9) {
          uVar10 = FUN_180181d80(param_1, 0x20, uVar16, iVar9, uVar30);
          auVar22._8_4_ = (int)extraout_XMM0_Qb;
          auVar22._0_8_ = extraout_XMM0_Qa;
          auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
          auVar23._4_12_ = auVar22._4_12_;
          auVar23._0_4_ = ((float)extraout_XMM0_Qa + fVar29) * 5.0;
          iVar9 = (int)auVar23._0_4_;
          uVar28 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
          auVar25._0_8_ = auVar23._0_8_;
          if (auVar23._0_4_ <= 0.0) {
            if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar23._0_4_)) {
              auVar27._8_4_ = uVar28;
              auVar27._0_8_ = auVar25._0_8_;
              auVar27._12_4_ = uVar28;
              auVar26._8_8_ = auVar27._8_8_;
              auVar26._4_4_ = auVar23._0_4_;
              auVar26._0_4_ = auVar23._0_4_;
              uVar14 = movmskps(uVar10, auVar26);
              auVar23 = ZEXT416((uint)(float)(int)(iVar9 + (uVar14 & 1 ^ 1)));
            }
            fVar29 = auVar23._0_4_ - 1e-08;
          }
          else {
            if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar23._0_4_)) {
              auVar25._8_4_ = uVar28;
              auVar25._12_4_ = uVar28;
              auVar24._8_8_ = auVar25._8_8_;
              auVar24._4_4_ = auVar23._0_4_;
              auVar24._0_4_ = auVar23._0_4_;
              uVar14 = movmskps(uVar10, auVar24);
              auVar23 = ZEXT416((uint)(float)(int)(iVar9 + (uVar14 & 1 ^ 1)));
            }
            fVar29 = auVar23._0_4_ + 1e-08;
          }
          fVar29 = (float)(int)fVar29 * 0.2;
        }
        else {
          fVar21 = (float)FUN_180181d80();
          fVar29 = fVar29 + fVar21 * fVar5;
        }
        uVar16 = param_3 & 0xffffffff;
        bVar7 = bVar3;
      }
LAB_18018222c:
      bVar3 = bVar7;
      uVar19 = uVar19 + 1;
      iVar9 = (int)*plVar4;
      uVar20 = (ulonglong)(iVar18 + 1U);
    } while ((int)(iVar18 + 1U) < iVar9);
  }
  return;
}





// 函数: void cleanup_graphics_resources(void)
void cleanup_graphics_resources(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void release_render_target(longlong param_1)
void release_render_target(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
find_render_target_data(longlong param_1, undefined8 *param_2, undefined8 param_3, int *param_4, ulonglong param_5
             )

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  char acStackX_8 [4];
  uint uStackX_c;
  
  param_5 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  piVar2 = *(int **)(lVar1 + param_5 * 8);
  if (piVar2 != (int *)0x0) {
    do {
      if (*param_4 == *piVar2) {
        *param_2 = piVar2;
        param_2[1] = lVar1 + param_5 * 8;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar2 = *(int **)(piVar2 + 8);
    } while (piVar2 != (int *)0x0);
  }
  FUN_18066c220(param_1 + 0x20, acStackX_8, (ulonglong)*(uint *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18), 1);
  piVar2 = (int *)FUN_18062b420(_DAT_180c8ed18, 0x28, *(undefined1 *)(param_1 + 0x2c));
  *piVar2 = *param_4;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  piVar2[8] = 0;
  piVar2[9] = 0;
  if (acStackX_8[0] != '\0') {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18, (ulonglong)uStackX_c * 8 + 8, 8,
                          *(undefined1 *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3, 0, (ulonglong)uStackX_c * 8);
  }
  *(undefined8 *)(piVar2 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 8) + param_5 * 8);
  *(int **)(*(longlong *)(param_1 + 8) + param_5 * 8) = piVar2;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  *param_2 = piVar2;
  param_2[1] = lVar1 + param_5 * 8;
  *(undefined1 *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void register_render_target(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
void register_render_target(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 *unaff_R15;
  char cStack0000000000000060;
  uint uStack0000000000000064;
  
  FUN_18066c220(param_1, &stack0x00000060, param_3, param_4, 1);
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, 0x28, *(undefined1 *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 1) = 0;
  *(undefined8 *)(puVar2 + 3) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  if (cStack0000000000000060 != '\0') {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18, (ulonglong)uStack0000000000000064 * 8 + 8, 8,
                          *(undefined1 *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3, 0, (ulonglong)uStack0000000000000064 * 8);
  }
  *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(undefined4 **)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void assign_render_target(undefined8 param_1, undefined8 param_2)
void assign_render_target(undefined8 param_1, undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(undefined1 *)(unaff_R15 + 2) = 0;
  return;
}





// 函数: void activate_render_target(void)
void activate_render_target(void)

{
  longlong lVar1;
  ulonglong in_RAX;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  if ((1 < in_RAX) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_R14;
  *(undefined8 *)(unaff_R12 + 0x20) = *(undefined8 *)(unaff_R14 + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void deactivate_render_target(void)
void deactivate_render_target(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(undefined8 *)(unaff_R12 + 0x20) = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void cleanup_render_target_manager(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
void cleanup_render_target_manager(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1, plVar1 != param_1, param_3, param_4, 0xfffffffffffffffe);
    param_1[7] = 0;
  }
  return;
}



undefined8 * release_texture_resource(undefined8 *param_1, ulonglong param_2)

{
  *param_1 = &UNK_180a0ad58;
  if ((param_2 & 1) != 0) {
    free(param_1, 8);
  }
  return param_1;
}



undefined8 *
release_render_resource(undefined8 *param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a0ad28;
  if (param_1[1] != 0) {
    NVGSDK_Release();
  }
  if (param_1[2] != 0) {
    FUN_180188120();
  }
  *param_1 = &UNK_180a0ad58;
  if ((param_2 & 1) != 0) {
    free(param_1, 0x18, param_3, param_4, uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address