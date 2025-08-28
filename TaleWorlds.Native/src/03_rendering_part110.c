#include "TaleWorlds.Native.Split.h"

// 03_rendering_part110.c - 6 个函数

// 函数: void FUN_180333a00(longlong param_1,uint param_2)
void FUN_180333a00(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong **ppuVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  uint auStackX_10 [2];
  ulonglong *puStackX_18;
  ulonglong **ppuStackX_20;
  uint *puStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint *puStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  ulonglong *puStack_60;
  ulonglong **ppuStack_58;
  
  uStack_68 = 0xfffffffffffffffe;
  uVar21 = (ulonglong)param_2;
  puVar7 = (ulonglong *)FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
  FUN_180049830(puVar7);
  *puVar7 = (ulonglong)&UNK_180a1b248;
  puVar1 = puVar7 + 0x18;
  *puVar1 = 0;
  puVar7[0x19] = 0;
  puVar7[0x1a] = 0;
  *(undefined4 *)(puVar7 + 0x1b) = 3;
  puStackX_18 = puVar1;
  puStack_60 = puVar7;
  (**(code **)(*puVar7 + 0x28))(puVar7);
  iVar6 = _Mtx_lock(param_1 + 0xa20);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  puStack_88 = (uint *)0x0;
  puStack_80 = (uint *)0x0;
  uStack_78 = 0;
  uStack_70 = 3;
  FUN_18032b1c0(param_1,&puStack_88,param_2,1);
  ppuStackX_20 = (ulonglong **)puStack_88;
  if (puStack_88 != puStack_80) {
    do {
      uVar2 = *(uint *)ppuStackX_20;
      uVar9 = (ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0xa00);
      for (puVar8 = *(uint **)(*(longlong *)(param_1 + 0x9f8) + uVar9 * 8); puVar8 != (uint *)0x0;
          puVar8 = *(uint **)(puVar8 + 4)) {
        if (uVar2 == *puVar8) {
          if (puVar8 != (uint *)0x0) goto LAB_180333bb3;
          break;
        }
      }
      FUN_18066c220(param_1 + 0xa10,&puStackX_18,(ulonglong)*(uint *)(param_1 + 0xa00),
                    *(undefined4 *)(param_1 + 0xa08),1);
      puVar8 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0xa1c));
      *puVar8 = uVar2;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      if ((char)puStackX_18 != '\0') {
        uVar9 = (ulonglong)uVar2 % ((ulonglong)puStackX_18 >> 0x20);
        FUN_18033bf30(param_1 + 0x9f0);
      }
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 0x9f8) + uVar9 * 8);
      *(uint **)(*(longlong *)(param_1 + 0x9f8) + uVar9 * 8) = puVar8;
      *(longlong *)(param_1 + 0xa08) = *(longlong *)(param_1 + 0xa08) + 1;
LAB_180333bb3:
      lVar10 = *(longlong *)(puVar8 + 2);
      uVar23 = 0;
      lVar15 = *(longlong *)(lVar10 + 8);
      for (puVar8 = *(uint **)(lVar15 + (uVar21 % (ulonglong)*(uint *)(lVar10 + 0x10)) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
        if (param_2 == *puVar8) {
          uVar9 = *(ulonglong *)(lVar10 + 0x10);
          goto LAB_180333bee;
        }
      }
      uVar9 = *(ulonglong *)(lVar10 + 0x10);
      puVar8 = *(uint **)(lVar15 + uVar9 * 8);
LAB_180333bee:
      if (puVar8 != *(uint **)(lVar15 + uVar9 * 8)) {
        uVar23 = *(undefined8 *)(puVar8 + 2);
        puVar8 = (uint *)(lVar15 + (uVar21 % (uVar9 & 0xffffffff)) * 8);
        puVar12 = *(uint **)puVar8;
        while ((puVar12 != (uint *)0x0 && (param_2 != *puVar12))) {
          puVar8 = puVar12 + 4;
          puVar12 = *(uint **)puVar8;
        }
        puVar20 = (uint *)0x0;
        if (puVar12 != (uint *)0x0) {
          do {
            puVar19 = puVar12;
            if (param_2 != *puVar19) break;
            *(undefined8 *)puVar8 = *(undefined8 *)(puVar19 + 4);
            *(uint **)(puVar19 + 4) = puVar20;
            *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + -1;
            puVar12 = *(uint **)puVar8;
            puVar20 = puVar19;
          } while (*(uint **)puVar8 != (uint *)0x0);
          if (puVar20 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar20);
          }
        }
      }
      puVar22 = (undefined8 *)puVar7[0x19];
      if (puVar22 < (undefined8 *)puVar7[0x1a]) {
        puVar7[0x19] = (ulonglong)(puVar22 + 1);
        *puVar22 = uVar23;
      }
      else {
        puVar18 = (undefined8 *)*puVar1;
        lVar10 = (longlong)puVar22 - (longlong)puVar18 >> 3;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_180333cae:
          puVar11 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar10 * 8,(char)puVar7[0x1b]);
          puVar22 = (undefined8 *)puVar7[0x19];
          puVar18 = (undefined8 *)*puVar1;
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_180333cae;
          puVar11 = (undefined8 *)0x0;
        }
        if (puVar18 != puVar22) {
                    // WARNING: Subroutine does not return
          memmove(puVar11,puVar18,(longlong)puVar22 - (longlong)puVar18);
        }
        *puVar11 = uVar23;
        if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar1 = (ulonglong)puVar11;
        puVar7[0x19] = (ulonglong)(puVar11 + 1);
        puVar7[0x1a] = (ulonglong)(puVar11 + lVar10);
      }
      ppuStackX_20 = (ulonglong **)((longlong)ppuStackX_20 + 4);
    } while (ppuStackX_20 != (ulonglong **)puStack_80);
  }
  if (puStack_88 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  iVar6 = _Mtx_unlock(param_1 + 0xa20);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  uVar23 = _DAT_180c82868;
  ppuStackX_20 = &puStackX_18;
  puStackX_18 = puVar7;
  (**(code **)(*puVar7 + 0x28))(puVar7);
  FUN_18005e110(uVar23,&puStackX_18);
  puStack_a8 = (uint *)0x0;
  puStack_a0 = (uint *)0x0;
  uStack_98 = 0;
  uStack_90 = 3;
  FUN_18032afa0(param_1,&puStack_a8,param_2);
  if (puStack_a8 != puStack_a0) {
    puVar8 = puStack_a8;
    do {
      uVar2 = *puVar8;
      uVar9 = (ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0x6c8);
      for (puVar12 = *(uint **)(*(longlong *)(param_1 + 0x6c0) + uVar9 * 8); puVar12 != (uint *)0x0;
          puVar12 = *(uint **)(puVar12 + 4)) {
        if (uVar2 == *puVar12) {
          if (puVar12 != (uint *)0x0) goto LAB_180333e7e;
          break;
        }
      }
      FUN_18066c220(param_1 + 0x6d8,&puStackX_18,(ulonglong)*(uint *)(param_1 + 0x6c8),
                    *(undefined4 *)(param_1 + 0x6d0),1);
      puVar12 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x6e4));
      *puVar12 = uVar2;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      if ((char)puStackX_18 != '\0') {
        uVar9 = (ulonglong)uVar2 % ((ulonglong)puStackX_18 >> 0x20);
        FUN_18033bf30(param_1 + 0x6b8);
      }
      *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + uVar9 * 8);
      *(uint **)(*(longlong *)(param_1 + 0x6c0) + uVar9 * 8) = puVar12;
      *(longlong *)(param_1 + 0x6d0) = *(longlong *)(param_1 + 0x6d0) + 1;
LAB_180333e7e:
      lVar10 = *(longlong *)(puVar12 + 2);
      lVar15 = *(longlong *)(lVar10 + 8);
      for (puVar12 = *(uint **)(lVar15 + (uVar21 % (ulonglong)*(uint *)(lVar10 + 0x10)) * 8);
          puVar12 != (uint *)0x0; puVar12 = *(uint **)(puVar12 + 4)) {
        if (param_2 == *puVar12) {
          lVar13 = *(longlong *)(lVar10 + 0x10);
          goto LAB_180333eb9;
        }
      }
      lVar13 = *(longlong *)(lVar10 + 0x10);
      puVar12 = *(uint **)(lVar15 + lVar13 * 8);
LAB_180333eb9:
      ppuVar5 = ppuStackX_20;
      if (puVar12 != *(uint **)(lVar15 + lVar13 * 8)) {
        ppuStackX_20 = *(ulonglong ***)(puVar12 + 2);
        if (ppuStackX_20 != (ulonglong **)0x0) {
          *(undefined **)((longlong)ppuStackX_20 + 0x50) = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12 = (uint *)(*(longlong *)(lVar10 + 8) +
                          (uVar21 % (ulonglong)*(uint *)(lVar10 + 0x10)) * 8);
        puVar20 = *(uint **)puVar12;
        while ((puVar20 != (uint *)0x0 && (param_2 != *puVar20))) {
          puVar12 = puVar20 + 4;
          puVar20 = *(uint **)puVar12;
        }
        puVar19 = (uint *)0x0;
        ppuVar5 = (ulonglong **)0x0;
        if (puVar20 != (uint *)0x0) {
          do {
            puVar14 = puVar20;
            if (param_2 != *puVar14) break;
            *(undefined8 *)puVar12 = *(undefined8 *)(puVar14 + 4);
            *(uint **)(puVar14 + 4) = puVar19;
            *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + -1;
            puVar20 = *(uint **)puVar12;
            puVar19 = puVar14;
          } while (*(uint **)puVar12 != (uint *)0x0);
          if (puVar19 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar19);
          }
        }
      }
      ppuStackX_20 = ppuVar5;
      puVar8 = puVar8 + 1;
    } while (puVar8 != puStack_a0);
  }
  lVar10 = *(longlong *)(param_1 + 0x570);
  for (puVar8 = *(uint **)(lVar10 + (uVar21 % (ulonglong)*(uint *)(param_1 + 0x578)) * 8);
      puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
    if (param_2 == *puVar8) {
      lVar15 = *(longlong *)(param_1 + 0x578);
      goto LAB_180333fbc;
    }
  }
  lVar15 = *(longlong *)(param_1 + 0x578);
  puVar8 = *(uint **)(lVar10 + lVar15 * 8);
LAB_180333fbc:
  if (puVar8 != *(uint **)(lVar10 + lVar15 * 8)) {
    puStackX_18 = *(ulonglong **)(puVar8 + 2);
    if (puStackX_18 != (ulonglong *)0x0) {
      if (*puStackX_18 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puStackX_18);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8 = (uint *)(*(longlong *)(param_1 + 0x570) +
                     (uVar21 % (ulonglong)*(uint *)(param_1 + 0x578)) * 8);
    puVar12 = *(uint **)puVar8;
    while ((puVar12 != (uint *)0x0 && (param_2 != *puVar12))) {
      puVar8 = puVar12 + 4;
      puVar12 = *(uint **)puVar8;
    }
    puVar20 = (uint *)0x0;
    if (puVar12 != (uint *)0x0) {
      do {
        puVar19 = puVar12;
        if (param_2 != *puVar19) break;
        *(undefined8 *)puVar8 = *(undefined8 *)(puVar19 + 4);
        *(uint **)(puVar19 + 4) = puVar20;
        *(longlong *)(param_1 + 0x580) = *(longlong *)(param_1 + 0x580) + -1;
        puVar12 = *(uint **)puVar8;
        puVar20 = puVar19;
      } while (*(uint **)puVar8 != (uint *)0x0);
      if (puVar20 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar20);
      }
    }
  }
  puVar1 = (ulonglong *)(param_1 + 0x818);
  puVar17 = puVar1;
  puVar3 = *(ulonglong **)(param_1 + 0x828);
  while (puVar16 = puVar1, puVar4 = *(ulonglong **)(param_1 + 0x828), puVar3 != (ulonglong *)0x0) {
    if (param_2 < (uint)puVar3[4]) {
      puVar17 = puVar3;
      puVar3 = (ulonglong *)puVar3[1];
    }
    else {
      puVar3 = (ulonglong *)*puVar3;
    }
  }
  while (puVar8 = puStack_a8, puVar4 != (ulonglong *)0x0) {
    if ((uint)puVar4[4] < param_2) {
      puVar4 = (ulonglong *)*puVar4;
    }
    else {
      puVar16 = puVar4;
      puVar4 = (ulonglong *)puVar4[1];
    }
  }
  while (puStackX_18 = puVar1, puStack_a8 = puVar8, puVar16 != puVar17) {
    ppuVar5 = (ulonglong **)puVar16[5];
    ppuStackX_20 = ppuVar5;
    if (ppuVar5 != (ulonglong **)0x0) {
      FUN_1808fc8a8(ppuVar5 + 7,0x30,4,FUN_18004a130);
      ppuStack_58 = ppuVar5 + 3;
      *ppuStack_58 = (ulonglong *)&UNK_180a3c3e0;
      if (ppuVar5[4] == (ulonglong *)0x0) {
        ppuVar5[4] = (ulonglong *)0x0;
        *(undefined4 *)(ppuVar5 + 6) = 0;
        *ppuStack_58 = (ulonglong *)&UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(ppuVar5);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar16 = (ulonglong *)func_0x00018066bd70(puVar16);
    puVar1 = puStackX_18;
    puVar8 = puStack_a8;
  }
  auStackX_10[0] = param_2;
  FUN_18033ad80(param_1 + 0x4a8,auStackX_10);
  auStackX_10[0] = param_2;
  FUN_18033ad80(param_1 + 0x638,auStackX_10);
  puVar17 = (ulonglong *)puVar1[2];
  puVar3 = puVar1;
  while (puVar4 = puVar17, puVar16 = (ulonglong *)puVar1[2], puVar17 = puVar1,
        puVar4 != (ulonglong *)0x0) {
    if (param_2 < (uint)puVar4[4]) {
      puVar17 = (ulonglong *)puVar4[1];
      puVar3 = puVar4;
    }
    else {
      puVar17 = (ulonglong *)*puVar4;
    }
  }
  while (puVar4 = puVar16, puVar16 = puVar17, puVar4 != (ulonglong *)0x0) {
    if ((uint)puVar4[4] < param_2) {
      puVar16 = (ulonglong *)*puVar4;
    }
    else {
      puVar16 = (ulonglong *)puVar4[1];
      puVar17 = puVar4;
    }
  }
  for (; puVar16 != puVar3; puVar16 = (ulonglong *)func_0x00018066bd70(puVar16)) {
  }
  if ((puVar17 == (ulonglong *)puVar1[1]) && (puVar3 == puVar1)) {
    puVar22 = (undefined8 *)puVar1[2];
    if (puVar22 != (undefined8 *)0x0) {
      FUN_18004b790(puVar1,*puVar22);
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar22);
    }
    *puVar1 = (ulonglong)puVar1;
    puVar1[1] = (ulonglong)puVar1;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
  }
  else {
    while (puVar4 = puVar17, puVar4 != puVar3) {
      puVar1[4] = puVar1[4] - 1;
      puVar17 = (ulonglong *)func_0x00018066bd70(puVar4);
      FUN_18066ba00(puVar4,puVar1);
      if (puVar4 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar4);
      }
    }
  }
  if (puVar8 == (uint *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001803342c7. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*puVar7 + 0x38))();
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803342d0(longlong param_1,char param_2,char param_3)
void FUN_1803342d0(longlong param_1,char param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_40;
  longlong lStack_38;
  
  uVar5 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      fclose();
      *(undefined8 *)(lVar2 + 8) = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
      lVar2 = *(longlong *)(param_1 + 0x200);
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        fclose();
        *(undefined8 *)(lVar2 + 8) = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3,uVar5);
  if (param_2 == '\0') {
    puVar4 = &UNK_180a1b238;
    if (param_3 != '\0') {
      puVar4 = &UNK_180a0cf4c;
    }
  }
  else {
    puVar4 = &UNK_180a01ff0;
  }
  lVar2 = FUN_180334430(param_1,&puStack_40);
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(lVar2 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(lVar2 + 8);
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_18062dee0(puVar1,puVar3,puVar4);
  *(undefined8 **)(param_1 + 0x200) = puVar1;
  puStack_40 = &UNK_180a3c3e0;
  if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



undefined8 *
FUN_180334430(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_180627be0(param_2,param_1 + 0x208,0,param_4,2,0xfffffffffffffffe);
  iVar1 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar1 + 0xd);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x7461645f6f70692f;
  *(undefined4 *)(puVar2 + 1) = 0x69622e61;
  *(undefined2 *)((longlong)puVar2 + 0xc) = 0x6e;
  *(int *)(param_2 + 2) = iVar1 + 0xd;
  return param_2;
}



undefined8 *
FUN_180334500(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_180627be0(param_2,param_1 + 0x208,0,param_4,2,0xfffffffffffffffe);
  iVar1 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar1 + 0x10);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x5f7265646165682f;
  puVar2[1] = 0x6e69622e61746164;
  *(undefined1 *)(puVar2 + 2) = 0;
  *(int *)(param_2 + 2) = iVar1 + 0x10;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803345c0(undefined8 param_1)
void FUN_1803345c0(undefined8 param_1)

{
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [40];
  undefined8 uStack_150;
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  FUN_180320f40(param_1,auStack_178);
                    // WARNING: Subroutine does not return
  memset(auStack_148,0,0x100);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803347d0(longlong param_1,ulonglong *param_2,uint param_3)
void FUN_1803347d0(longlong param_1,ulonglong *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined8 *)(param_1 + 0x818);
  puVar7 = *(undefined8 **)(param_1 + 0x828);
  puVar5 = puVar7;
  puVar6 = puVar4;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      if (param_3 < *(uint *)(puVar5 + 4)) {
        puVar6 = puVar5;
        puVar5 = (undefined8 *)puVar5[1];
      }
      else {
        puVar5 = (undefined8 *)*puVar5;
      }
    } while (puVar5 != (undefined8 *)0x0);
    while (puVar7 != (undefined8 *)0x0) {
      if (*(uint *)(puVar7 + 4) < param_3) {
        puVar7 = (undefined8 *)*puVar7;
      }
      else {
        puVar4 = puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
    }
  }
  do {
    if (puVar4 == puVar6) {
      return;
    }
    puVar5 = (undefined8 *)param_2[1];
    uVar1 = puVar4[5];
    if (puVar5 < (undefined8 *)param_2[2]) {
      param_2[1] = (ulonglong)(puVar5 + 1);
      *puVar5 = uVar1;
    }
    else {
      puVar7 = (undefined8 *)*param_2;
      lVar2 = (longlong)puVar5 - (longlong)puVar7 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180334893:
        puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)param_2[3]);
        puVar7 = (undefined8 *)*param_2;
        puVar5 = (undefined8 *)param_2[1];
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180334893;
        puVar3 = (undefined8 *)0x0;
      }
      if (puVar7 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar7,(longlong)puVar5 - (longlong)puVar7);
      }
      *puVar3 = uVar1;
      if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_2 = (ulonglong)puVar3;
      param_2[2] = (ulonglong)(puVar3 + lVar2);
      param_2[1] = (ulonglong)(puVar3 + 1);
    }
    puVar4 = (undefined8 *)func_0x00018066bd70(puVar4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033483c(void)
void FUN_18033483c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong *unaff_RBX;
  longlong unaff_RSI;
  undefined8 *puVar5;
  longlong unaff_R12;
  
  do {
    puVar5 = (undefined8 *)unaff_RBX[1];
    uVar1 = *(undefined8 *)(unaff_RSI + 0x28);
    if (puVar5 < (undefined8 *)unaff_RBX[2]) {
      unaff_RBX[1] = (ulonglong)(puVar5 + 1);
      *puVar5 = uVar1;
    }
    else {
      puVar4 = (undefined8 *)*unaff_RBX;
      lVar2 = (longlong)puVar5 - (longlong)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180334893:
        puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)unaff_RBX[3]);
        puVar4 = (undefined8 *)*unaff_RBX;
        puVar5 = (undefined8 *)unaff_RBX[1];
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180334893;
        puVar3 = (undefined8 *)0x0;
      }
      if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(longlong)puVar5 - (longlong)puVar4);
      }
      *puVar3 = uVar1;
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *unaff_RBX = (ulonglong)puVar3;
      unaff_RBX[2] = (ulonglong)(puVar3 + lVar2);
      unaff_RBX[1] = (ulonglong)(puVar3 + 1);
    }
    unaff_RSI = func_0x00018066bd70(unaff_RSI);
    if (unaff_RSI == unaff_R12) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180334921(void)
void FUN_180334921(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180334930(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong lStackX_18;
  longlong *plStackX_20;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [8];
  longlong *plStack_60;
  undefined4 uStack_58;
  longlong *plStack_50;
  
  uVar9 = 0xfffffffffffffffe;
  uVar8 = 0;
  lVar1 = param_1 + 0xb78;
  lStackX_18 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = *(int *)(param_2 + 0x70);
  lVar2 = *(longlong *)(param_1 + 0x9c8);
  piVar7 = *(int **)(lVar2 + ((ulonglong)(longlong)iVar3 % (ulonglong)*(uint *)(param_1 + 0x9d0)) *
                             8);
  do {
    if (piVar7 == (int *)0x0) {
      lVar4 = *(longlong *)(param_1 + 0x9d0);
      piVar7 = *(int **)(lVar2 + lVar4 * 8);
LAB_1803349b9:
      if (piVar7 == *(int **)(lVar2 + lVar4 * 8)) {
        plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,iVar3);
        plVar5 = (longlong *)FUN_18033a740(param_1 + 0xb48,&plStackX_8);
        lVar2 = *plVar5;
        uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,9,uVar8,uVar9);
        plVar5 = (longlong *)FUN_180075030(uVar9,0,1);
        plStackX_20 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        plVar6 = (longlong *)FUN_1800b30d0(_DAT_180c86930,&plStackX_8,param_2 + 0x110,1);
        plVar6 = (longlong *)*plVar6;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        plStackX_8 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6);
        }
        FUN_180076910(plVar5,&plStackX_8);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6);
        }
        plStackX_8 = (longlong *)0x0;
        plStack_50 = (longlong *)0x0;
        auStack_68[0] = 0;
        uStack_58 = 1;
        plStack_60 = plVar5;
        FUN_18007f4c0(auStack_68);
        plVar6 = *(longlong **)(lVar2 + 8);
        if (plVar6 != (longlong *)0x0) {
          plStackX_10 = plVar6;
          (**(code **)(*plVar6 + 0x28))(plVar6);
        }
        plStackX_10 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          lVar2 = *plStack_50;
          plStack_50 = plVar6;
          (**(code **)(lVar2 + 0x38))();
          plVar6 = plStack_50;
        }
        plStack_50 = plVar6;
        FUN_18007f6a0(auStack_68);
        if (plStack_50 != (longlong *)0x0) {
          (**(code **)(*plStack_50 + 0x38))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        FUN_18033ca70(param_1 + 0x9c0,auStack_68);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x38))();
          (**(code **)(*plVar5 + 0x38))(plVar5);
        }
      }
      else {
        plVar5 = *(longlong **)(piVar7 + 2);
      }
      iVar3 = _Mtx_unlock(lVar1);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      return plVar5;
    }
    if (iVar3 == *piVar7) {
      lVar4 = *(longlong *)(param_1 + 0x9d0);
      goto LAB_1803349b9;
    }
    piVar7 = *(int **)(piVar7 + 4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



