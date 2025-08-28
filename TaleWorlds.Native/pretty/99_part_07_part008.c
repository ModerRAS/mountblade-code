#include "TaleWorlds.Native.Split.h"

// 99_part_07_part008.c - 3 个函数

// 函数: void FUN_1804a1800(undefined8 param_1,undefined8 *param_2)
void FUN_1804a1800(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  float fVar6;
  undefined1 auStack_4a8 [32];
  char *pcStack_488;
  undefined4 uStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  undefined4 uStack_460;
  ulonglong uStack_458;
  undefined8 uStack_450;
  undefined8 *puStack_448;
  char acStack_438 [512];
  char acStack_238 [512];
  ulonglong uStack_38;
  
  uStack_450 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_4a8;
  uStack_478 = 0;
  puStack_470 = &UNK_180a3c3e0;
  uStack_458 = 0;
  puStack_468 = (undefined *)0x0;
  uStack_460 = 0;
  puStack_448 = param_2;
  uVar2 = FUN_180623ce0();
  FUN_18005d0e0(uVar2,&puStack_470);
  puVar5 = &DAT_18098bc73;
  if (puStack_468 != (undefined *)0x0) {
    puVar5 = puStack_468;
  }
  FUN_180060680(acStack_438,&UNK_180a2cc80,&DAT_1809fd0f8,puVar5);
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  uStack_478 = 1;
  fVar6 = (float)FUN_180623d40();
  FUN_180060680(acStack_238,&UNK_180a2cc98,(double)fVar6);
  pcStack_488 = acStack_238;
  FUN_1800622d0(_DAT_180c86928,0,7,&UNK_180a2ccb0);
  pcStack_488 = acStack_438;
  FUN_1800622d0(_DAT_180c86928,0,7,&UNK_1809ff840);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_438[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  lVar1 = -1;
  if (0 < iVar3) {
    FUN_1806277c0(param_2,*(int *)(param_2 + 2) + iVar3);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],acStack_438,(longlong)((int)lVar4 + 2));
  }
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_238[lVar4 + 1] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (iVar3 < 1) {
    puStack_470 = &UNK_180a3c3e0;
    if (puStack_468 == (undefined *)0x0) {
      puStack_468 = (undefined *)0x0;
      uStack_458 = uStack_458 & 0xffffffff00000000;
      puStack_470 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_4a8);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1806277c0(param_2,*(int *)(param_2 + 2) + iVar3);
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],acStack_238,(longlong)((int)lVar4 + 2));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1804a1a40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d,param_3,param_4,0,0xfffffffffffffffe);
    puVar2 = (undefined8 *)param_2[1];
    *puVar2 = 0x746f6e2073656f44;
    puVar2[1] = 0x6e6f206b726f7720;
    puVar2[2] = 0x6c7069746c756d20;
    *(undefined4 *)(puVar2 + 3) = 0x72657961;
    *(undefined2 *)((longlong)puVar2 + 0x1c) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x1d;
  }
  else if (((_DAT_180c96070 == 0) || (*(int *)(_DAT_180c96070 + 0x98d930) < 0)) ||
          (lVar3 = _DAT_180c96070 + 0x30a0 + (longlong)*(int *)(_DAT_180c96070 + 0x98d930) * 0xa60,
          lVar3 == 0)) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x15,param_3,param_4,0,0xfffffffffffffffe);
    puVar2 = (undefined8 *)param_2[1];
    *puVar2 = 0x656761206e69614d;
    puVar2[1] = 0x6620746f6e20746e;
    *(undefined4 *)(puVar2 + 2) = 0x646e756f;
    *(undefined2 *)((longlong)puVar2 + 0x14) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x15;
  }
  else {
    FUN_1805369a0(*(undefined8 *)(lVar3 + 0x8f8));
    FUN_18050c1c0(lVar3);
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,5,param_3,param_4,uVar4,uVar5);
    puVar1 = (undefined4 *)param_2[1];
    *puVar1 = 0x656e6f44;
    *(undefined2 *)(puVar1 + 1) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 5;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1804a1c00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined8 uStackX_18;
  undefined4 uVar12;
  undefined8 uVar13;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  char cStack_54;
  
  plVar4 = _DAT_180c96070;
  uVar13 = 0xfffffffffffffffe;
  uVar12 = 0;
  uStackX_18 = param_3;
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d);
    puVar2 = (undefined8 *)param_2[1];
    *puVar2 = 0x746f6e2073656f44;
    puVar2[1] = 0x6e6f206b726f7720;
    puVar2[2] = 0x6c7069746c756d20;
    *(undefined4 *)(puVar2 + 3) = 0x72657961;
    *(undefined2 *)((longlong)puVar2 + 0x1c) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x1d;
  }
  else {
    if (_DAT_180c96070 != (longlong *)0x0) {
      (**(code **)(*_DAT_180c96070 + 0x28))(_DAT_180c96070);
    }
    dVar7 = (double)atof(*(undefined8 *)(*param_4 + 8));
    dVar8 = (double)atof(*(undefined8 *)(*param_4 + 0x28));
    if (((plVar4 == (longlong *)0x0) || (plVar4[3] == 0)) ||
       (lVar3 = plVar4[0x131b26], (int)lVar3 < 0)) {
      *param_2 = &UNK_18098bcb0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *param_2 = &UNK_180a3c3e0;
      param_2[3] = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      FUN_1806277c0(param_2,0x22);
      puVar2 = (undefined8 *)param_2[1];
      *puVar2 = 0x697373696d206f4e;
      puVar2[1] = 0x6f6e20726f206e6f;
      *(undefined4 *)(puVar2 + 2) = 0x69616d20;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0x6761206e;
      *(undefined4 *)(puVar2 + 3) = 0x20746e65;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0x6e756f66;
      *(undefined2 *)(puVar2 + 4) = 0x2e64;
      *(undefined1 *)((longlong)puVar2 + 0x22) = 0;
      *(undefined4 *)(param_2 + 2) = 0x22;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4);
      }
    }
    else {
      uStackX_18 = CONCAT44((float)dVar8,(float)dVar7);
      cVar5 = FUN_1804f6190(plVar4,&uStackX_18);
      if (cVar5 == '\0') {
        *param_2 = &UNK_18098bcb0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        *param_2 = &UNK_180a3c3e0;
        param_2[3] = 0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        FUN_1806277c0(param_2,0x2a);
        puVar2 = (undefined8 *)param_2[1];
        *puVar2 = 0x7369207475706e49;
        puVar2[1] = 0x20666f2074756f20;
        puVar2[2] = 0x662073646e756f62;
        puVar2[3] = 0x6f746f672220726f;
        puVar2[4] = 0x6e616d6d6f632022;
        *(undefined2 *)(puVar2 + 5) = 0x2164;
        *(undefined1 *)((longlong)puVar2 + 0x2a) = 0;
        *(undefined4 *)(param_2 + 2) = 0x2a;
      }
      else {
        plVar6 = plVar4 + (longlong)(int)lVar3 * 0x14c + 0x614;
        uStack_a0 = *(undefined4 *)(plVar6[4] + 0x14);
        uStack_9c = 0x7f7fffff;
        cStack_54 = '\0';
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0x3f800000;
        uStack_6c = 0x7f7fffff;
        uStack_58 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        fStack_a8 = (float)dVar7;
        fStack_a4 = (float)dVar8;
        FUN_1801aa0f0(plVar6[0xcc],&fStack_a8,0,auStack_88,0x51b189,
                      (byte)((uint)*(undefined4 *)((longlong)plVar6 + 0x56c) >> 8) & 1,uVar12,uVar13
                     );
        if (cStack_54 != '\0') {
          if (-1 < *(int *)((longlong)plVar6 + 0x564)) {
            plVar6 = plVar4 + (longlong)*(int *)((longlong)plVar6 + 0x564) * 0x14c + 0x614;
          }
          uVar13 = *(undefined8 *)
                    ((longlong)plVar4 + (longlong)(int)plVar4[0x131b26] * 0xa60 + 0x353c);
          uStackX_18._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
          uStackX_18._0_4_ = (float)uVar13;
          fVar10 = uStackX_18._4_4_ * uStackX_18._4_4_ + (float)uStackX_18 * (float)uStackX_18;
          auVar9 = rsqrtss(ZEXT416((uint)((float)uStackX_18 * (float)uStackX_18)),
                           ZEXT416((uint)fVar10));
          fVar11 = auVar9._0_4_;
          fVar11 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
          fStack_98 = fStack_a8;
          fStack_94 = fStack_a4;
          uStackX_18 = CONCAT44(uStackX_18._4_4_ * fVar11,(float)uStackX_18 * fVar11);
          uStack_90 = uStack_58;
          uStack_8c = uStack_9c;
          FUN_180509f20(plVar6,&fStack_98,&uStackX_18);
        }
        *param_2 = &UNK_18098bcb0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        *param_2 = &UNK_180a3c3e0;
        param_2[3] = 0;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        FUN_1806277c0(param_2,5);
        puVar1 = (undefined4 *)param_2[1];
        *puVar1 = 0x656e6f44;
        *(undefined2 *)(puVar1 + 1) = 0x2e;
        *(undefined4 *)(param_2 + 2) = 5;
      }
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1804a2030(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  
  uVar11 = 0xfffffffffffffffe;
  puVar7 = (undefined1 *)0x0;
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0,param_3,param_4,0,0xfffffffffffffffe);
  *(undefined4 *)(param_2 + 2) = 0;
  if ((undefined1 *)param_2[1] != (undefined1 *)0x0) {
    *(undefined1 *)param_2[1] = 0;
  }
  uVar10 = 1;
  iVar2 = (int)((*(longlong *)(_DAT_180c8a9f8 + 0x3a8) - *(longlong *)(_DAT_180c8a9f8 + 0x3a0)) /
               0x348);
  lVar9 = (longlong)iVar2;
  puVar5 = puVar7;
  puVar8 = puVar7;
  if (0 < iVar2) {
    do {
      lVar1 = *(longlong *)(_DAT_180c8a9f8 + 0x3a0);
      puVar12 = &UNK_180a3c3e0;
      uVar15 = 0;
      puVar13 = (undefined1 *)0x0;
      uVar14 = 0;
      puVar4 = puVar7;
      if (*(int *)(puVar8 + lVar1 + 0x18) != 0) {
        iVar2 = *(int *)(puVar8 + lVar1 + 0x18) + 1;
        if (iVar2 < 0x10) {
          iVar2 = 0x10;
        }
        puVar4 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
        uVar16 = (undefined4)(uVar15 >> 0x20);
        *puVar4 = 0;
        puVar13 = puVar4;
        uVar3 = FUN_18064e990(puVar4);
        uVar15 = CONCAT44(uVar16,uVar3);
        if (*(int *)(puVar8 + lVar1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar4,*(undefined8 *)(puVar8 + lVar1 + 0x10),*(int *)(puVar8 + lVar1 + 0x18) + 1);
        }
      }
      if (*(longlong *)(puVar8 + lVar1 + 0x10) != 0) {
        uVar14 = 0;
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 0;
        }
        uVar15 = uVar15 & 0xffffffff;
      }
      puVar6 = &DAT_18098bc73;
      if (puVar4 != (undefined1 *)0x0) {
        puVar6 = puVar4;
      }
      FUN_180628040(param_2,&UNK_180a2ce78,puVar5,puVar6,uVar10,uVar11,puVar12,puVar13,uVar14,uVar15
                   );
      if (puVar4 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar4);
      }
      puVar5 = (undefined1 *)(ulonglong)((int)puVar5 + 1);
      puVar8 = puVar8 + 0x348;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x0001804a23e0)
// WARNING: Removing unreachable block (ram,0x0001804a23f0)
// WARNING: Removing unreachable block (ram,0x0001804a23fc)
// WARNING: Removing unreachable block (ram,0x0001804a2403)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1804a2230(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uStackX_20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  int iStack_48;
  
  if ((_DAT_180c96070 == 0) || (*(longlong *)(_DAT_180c96070 + 0x18) == 0)) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x17,param_3,param_4,0,0xfffffffffffffffe);
    puVar2 = (undefined8 *)param_2[1];
    *puVar2 = 0x697373694d206f4e;
    puVar2[1] = 0x656e656353206e6f;
    puVar2[2] = 0x21646e756f4620;
    *(undefined4 *)(param_2 + 2) = 0x17;
  }
  else {
    FUN_180627ae0(&puStack_58,*(longlong *)(_DAT_180c96070 + 0x18) + 0x3020);
    uVar8 = 0;
    puStack_78 = &UNK_180a3c3e0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    iVar3 = (int)((*(longlong *)(_DAT_180c8a9f8 + 0x3a8) - *(longlong *)(_DAT_180c8a9f8 + 0x3a0)) /
                 0x348);
    uStackX_20 = 0;
    uVar9 = uVar8;
    if (0 < iVar3) {
      do {
        puVar5 = (undefined1 *)0x0;
        lVar6 = *(longlong *)(_DAT_180c8a9f8 + 0x3a0) + uVar8;
        if (*(int *)(lVar6 + 0x18) != 0) {
          iVar4 = *(int *)(lVar6 + 0x18) + 1;
          if (iVar4 < 0x10) {
            iVar4 = 0x10;
          }
          puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x13);
          *puVar5 = 0;
          FUN_18064e990(puVar5);
          if (*(int *)(lVar6 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puVar5,*(undefined8 *)(lVar6 + 0x10),*(int *)(lVar6 + 0x18) + 1);
          }
        }
        if ((*(longlong *)(lVar6 + 0x10) != 0) && (puVar5 != (undefined1 *)0x0)) {
          *puVar5 = 0;
        }
        if (iStack_48 == 0) {
          uVar8 = uStackX_20;
          if (puVar5 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar5);
          }
          goto LAB_1804a2455;
        }
        if (puVar5 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar5);
        }
        uVar1 = (int)uStackX_20 + 1;
        uStackX_20 = (ulonglong)uVar1;
        uVar9 = uVar9 + 1;
        uVar8 = uVar8 + 0x348;
      } while ((longlong)uVar9 < (longlong)iVar3);
      uVar8 = (ulonglong)uVar1;
    }
LAB_1804a2455:
    puVar7 = &DAT_18098bc73;
    if (puStack_50 != (undefined *)0x0) {
      puVar7 = puStack_50;
    }
    FUN_180628040(&puStack_78,&UNK_180a2ce78,uVar8,puVar7);
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    *(undefined4 *)(param_2 + 2) = uStack_68;
    param_2[1] = uStack_70;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_60._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_60;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
    puStack_78 = &UNK_18098bcb0;
    puStack_58 = &UNK_180a3c3e0;
    if (puStack_50 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1804a25a0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(undefined4 *)(puVar1 + 3) = 0x72657961;
    *(undefined2 *)((longlong)puVar1 + 0x1c) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x1d;
  }
  else {
    FUN_180538220();
    _DAT_180c91044 = (float)sinf(_DAT_180c96380 * 0.017453292);
    _DAT_180c91040 = _DAT_180c96384;
    uStack_38 = 0x3f800000;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_24 = 0x3f800000;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0x3f800000;
    uStack_c = 0;
    _DAT_180c96380 = _DAT_180c91044;
    FUN_180085c10(&uStack_38,_DAT_180c964c0);
    FUN_180085970(&uStack_38,_DAT_180c964b8);
    FUN_180085ac0(&uStack_38,_DAT_180c964bc);
    FUN_18063b470(&uStack_48,&uStack_38);
    _DAT_180c96370 = uStack_48;
    uRam0000000180c96374 = uStack_44;
    uRam0000000180c96378 = uStack_40;
    uRam0000000180c9637c = uStack_3c;
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b);
    puVar1 = (undefined8 *)param_2[1];
    *puVar1 = 0x702065766974614e;
    puVar1[1] = 0x726574656d617261;
    puVar1[2] = 0x64616f6c65722073;
    *(undefined4 *)(puVar1 + 3) = 0x2e6465;
    *(undefined4 *)(param_2 + 2) = 0x1b;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1804a2770(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  undefined8 uStackX_20;
  undefined *puStack_38;
  undefined4 *puStack_30;
  undefined4 uStack_28;
  ulonglong uStack_20;
  
  iVar5 = 0;
  uStackX_20 = param_4;
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d);
    puVar1 = (undefined8 *)param_2[1];
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(undefined4 *)(puVar1 + 3) = 0x72657961;
    *(undefined2 *)((longlong)puVar1 + 0x1c) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x1d;
  }
  else {
    if (((DAT_180c82860 == '\0') || (iVar3 = IsDebuggerPresent(), iVar3 != 0)) &&
       (DAT_180c82842 == '\0')) {
      uVar4 = MessageBoxA(0,&UNK_180a2cec0,&UNK_180a2cea0,0x40004);
      switch(uVar4) {
      case 1:
        break;
      default:
        iVar5 = 1;
        break;
      case 4:
        iVar5 = 2;
        break;
      case 5:
        iVar5 = 3;
        break;
      case 6:
        iVar5 = 4;
        break;
      case 7:
        iVar5 = 5;
      }
      if (iVar5 == 4) {
        FUN_18055a540(&DAT_180c96150);
        FUN_18055b600(&DAT_180c96150);
        FUN_1804e4a10(&DAT_180c95ed0);
        FUN_1805397f0();
        FUN_1804e11e0();
        uStackX_20 = CONCAT44(uStackX_20._4_4_,0xffffffff);
        puStack_38 = &UNK_180a3c3e0;
        uStack_20 = 0;
        puStack_30 = (undefined4 *)0x0;
        uStack_28 = 0;
        puStack_30 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x19,0x13);
        *(undefined1 *)puStack_30 = 0;
        uVar4 = FUN_18064e990(puStack_30);
        uStack_20 = CONCAT44(uStack_20._4_4_,uVar4);
        *puStack_30 = 0x6d696e41;
        puStack_30[1] = 0x6f697461;
        puStack_30[2] = 0x6164206e;
        puStack_30[3] = 0x72206174;
        *(undefined8 *)(puStack_30 + 4) = 0x2e6465726f747365;
        *(undefined1 *)(puStack_30 + 6) = 0;
        uStack_28 = 0x18;
        puVar2 = *(undefined **)*_DAT_180c8ed08;
        if (puVar2 == &UNK_18098bb88) {
          cVar6 = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
        }
        else {
          cVar6 = (**(code **)(puVar2 + 0x50))((undefined8 *)*_DAT_180c8ed08);
        }
        if (cVar6 == '\0') {
          (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                    ((longlong *)_DAT_180c8ed08[1],&puStack_38,&uStackX_20);
        }
        puStack_38 = &UNK_180a3c3e0;
        if (puStack_30 == (undefined4 *)0x0) {
          puStack_30 = (undefined4 *)0x0;
          uStack_20 = uStack_20 & 0xffffffff00000000;
          puStack_38 = &UNK_18098bcb0;
          *param_2 = &UNK_18098bcb0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          *param_2 = &UNK_180a3c3e0;
          param_2[3] = 0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          FUN_1806277c0(param_2,0x18);
          puVar1 = (undefined8 *)param_2[1];
          *puVar1 = 0x6f6974616d696e41;
          puVar1[1] = 0x722061746164206e;
          puVar1[2] = 0x2e646564616f6c65;
          *(undefined1 *)(puVar1 + 3) = 0;
          *(undefined4 *)(param_2 + 2) = 0x18;
          return param_2;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
      FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd,&UNK_180a04f08,&UNK_180a2cea0,
                    &UNK_180a2cec0);
    }
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x22);
    puVar1 = (undefined8 *)param_2[1];
    *puVar1 = 0x6f6974616d696e41;
    puVar1[1] = 0x632061746164206e;
    puVar1[2] = 0x656220746f6e6e61;
    puVar1[3] = 0x6564616f6c657220;
    *(undefined2 *)(puVar1 + 4) = 0x2e64;
    *(undefined1 *)((longlong)puVar1 + 0x22) = 0;
    *(undefined4 *)(param_2 + 2) = 0x22;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1804a2b20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  char cVar8;
  undefined8 uStackX_20;
  undefined *puStack_68;
  undefined4 *puStack_60;
  undefined4 uStack_58;
  ulonglong uStack_50;
  undefined *puStack_48;
  undefined4 *puStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  
  iVar7 = 0;
  uStackX_20 = param_4;
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d);
    puVar1 = (undefined8 *)param_2[1];
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(undefined4 *)(puVar1 + 3) = 0x72657961;
    *(undefined2 *)((longlong)puVar1 + 0x1c) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x1d;
  }
  else {
    if (((DAT_180c82860 == '\0') || (iVar3 = IsDebuggerPresent(), iVar3 != 0)) &&
       (DAT_180c82842 == '\0')) {
      uVar4 = MessageBoxA(0,&UNK_180a2d0a0,&UNK_180a2d080,0x40004);
      switch(uVar4) {
      case 1:
        break;
      default:
        iVar7 = 1;
        break;
      case 4:
        iVar7 = 2;
        break;
      case 5:
        iVar7 = 3;
        break;
      case 6:
        iVar7 = 4;
        break;
      case 7:
        iVar7 = 5;
      }
      if (iVar7 == 4) {
        uVar5 = FUN_18015b2b0(0x10);
        puStack_48 = &UNK_180a3c3e0;
        uStack_30 = 0;
        puStack_40 = (undefined4 *)0x0;
        uStack_38 = 0;
        puVar6 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
        *(undefined1 *)puVar6 = 0;
        puStack_40 = puVar6;
        uVar4 = FUN_18064e990(puVar6);
        *puVar6 = 0x6d657469;
        puVar6[1] = 0x6173755f;
        puVar6[2] = 0x735f6567;
        puVar6[3] = 0x737465;
        uStack_38 = 0xf;
        uStack_30._0_4_ = uVar4;
        FUN_1804e2be0(0x6d657469,&puStack_48);
        puStack_48 = &UNK_180a3c3e0;
        if (puStack_40 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_40 = (undefined4 *)0x0;
        uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
        puStack_48 = &UNK_18098bcb0;
        FUN_18015b3a0(uVar5);
        uStackX_20 = CONCAT44(uStackX_20._4_4_,0xffffffff);
        puStack_68 = &UNK_180a3c3e0;
        uStack_50 = 0;
        puStack_60 = (undefined4 *)0x0;
        uStack_58 = 0;
        puStack_60 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1a,0x13);
        *(undefined1 *)puStack_60 = 0;
        uVar4 = FUN_18064e990(puStack_60);
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        *puStack_60 = 0x6d657449;
        puStack_60[1] = 0x61737520;
        puStack_60[2] = 0x73206567;
        puStack_60[3] = 0x20737465;
        *(undefined8 *)(puStack_60 + 4) = 0x646564616f6c6572;
        *(undefined2 *)(puStack_60 + 6) = 0x2e;
        uStack_58 = 0x19;
        puVar2 = *(undefined **)*_DAT_180c8ed08;
        if (puVar2 == &UNK_18098bb88) {
          cVar8 = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
        }
        else {
          cVar8 = (**(code **)(puVar2 + 0x50))((undefined8 *)*_DAT_180c8ed08);
        }
        if (cVar8 == '\0') {
          (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                    ((longlong *)_DAT_180c8ed08[1],&puStack_68,&uStackX_20);
        }
        puStack_68 = &UNK_180a3c3e0;
        if (puStack_60 == (undefined4 *)0x0) {
          puStack_60 = (undefined4 *)0x0;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          puStack_68 = &UNK_18098bcb0;
          *param_2 = &UNK_18098bcb0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          *param_2 = &UNK_180a3c3e0;
          param_2[3] = 0;
          param_2[1] = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          FUN_1806277c0(param_2,0x19);
          puVar1 = (undefined8 *)param_2[1];
          *puVar1 = 0x617375206d657449;
          puVar1[1] = 0x2073746573206567;
          puVar1[2] = 0x646564616f6c6572;
          *(undefined2 *)(puVar1 + 3) = 0x2e;
          *(undefined4 *)(param_2 + 2) = 0x19;
          return param_2;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
      FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd,&UNK_180a04f08,&UNK_180a2d080,
                    &UNK_180a2d0a0);
    }
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x23);
    puVar1 = (undefined8 *)param_2[1];
    *puVar1 = 0x617375206d657449;
    puVar1[1] = 0x2073746573206567;
    puVar1[2] = 0x6220746f6e6e6163;
    puVar1[3] = 0x64616f6c65722065;
    *(undefined4 *)(puVar1 + 4) = 0x2e6465;
    *(undefined4 *)(param_2 + 2) = 0x23;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a2f30(undefined8 param_1,longlong param_2)
void FUN_1804a2f30(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  
  if ((((DAT_180c96098 != '\0') && (*(int *)(param_2 + 0x10) == 0x11)) &&
      (iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&UNK_180a2d268), iVar1 == 0)) &&
     ((_DAT_180c96070 != 0 && (lVar3 = (longlong)*(int *)(_DAT_180c96070 + 0x52ed94), 0 < lVar3))))
  {
    puVar2 = (uint *)(_DAT_180c96070 + 0x360c);
    do {
      if ((puVar2[-1] == 1) && ((*puVar2 & 0x4000) != 0)) {
        FUN_180543e30(*(undefined8 *)(puVar2 + 0x5b));
      }
      puVar2 = puVar2 + 0x298;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a2f5a(void)
void FUN_1804a2f5a(void)

{
  uint *puVar1;
  longlong lVar2;
  
  if ((_DAT_180c96070 != 0) && (lVar2 = (longlong)*(int *)(_DAT_180c96070 + 0x52ed94), 0 < lVar2)) {
    puVar1 = (uint *)(_DAT_180c96070 + 0x360c);
    do {
      if ((puVar1[-1] == 1) && ((*puVar1 & 0x4000) != 0)) {
        FUN_180543e30(*(undefined8 *)(puVar1 + 0x5b));
      }
      puVar1 = puVar1 + 0x298;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}






