#include "TaleWorlds.Native.Split.h"

// 99_part_03_part070.c - 3 个函数

// 函数: void FUN_18023c450(longlong *param_1,char param_2,undefined4 param_3,undefined1 *param_4)
void FUN_18023c450(longlong *param_1,char param_2,undefined4 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  longlong *plStack_1d0;
  undefined1 auStack_1c8 [16];
  code *pcStack_1b8;
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  longlong *plStack_1a0;
  char cStack_198;
  undefined1 auStack_190 [16];
  code *pcStack_180;
  code *pcStack_178;
  undefined4 uStack_170;
  undefined8 auStack_168 [2];
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  code *pcStack_130;
  undefined1 auStack_120 [16];
  code *pcStack_110;
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [64];
  
  uStack_148 = 0xfffffffffffffffe;
  if ((*(uint *)(param_1 + 0x2c) & 0xfffffffd) == 0) {
    LOCK();
    iVar2 = (int)param_1[0x70];
    bVar9 = iVar2 == 0;
    if (bVar9) {
      *(int *)(param_1 + 0x70) = 1;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar9) {
      if (param_1[0x15] == 0) {
        FUN_18023ab60();
        param_1[0x68] = (longlong)*(int *)(_DAT_180c86870 + 0x224);
        LOCK();
        *(undefined4 *)(param_1 + 0x70) = 2;
        UNLOCK();
        LOCK();
        *(undefined1 *)((longlong)param_1 + 900) = 1;
        UNLOCK();
      }
      else {
        pcStack_1b8 = (code *)0x0;
        pcStack_1b0 = _guard_check_icall;
        plStack_1d0 = param_1;
        if (auStack_1c8 != param_4) {
          pcVar8 = *(code **)(param_4 + 0x10);
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(auStack_1c8,param_4,1);
            pcVar8 = *(code **)(param_4 + 0x10);
          }
          pcStack_1b0 = *(code **)(param_4 + 0x18);
          pcStack_1b8 = pcVar8;
        }
        pcStack_180 = (code *)0x0;
        pcStack_178 = _guard_check_icall;
        uStack_1a8 = param_3;
        plStack_1a0 = param_1;
        cStack_198 = param_2;
        if (auStack_190 != param_4) {
          pcVar8 = *(code **)(param_4 + 0x10);
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(auStack_190,param_4,1);
            pcVar8 = *(code **)(param_4 + 0x10);
          }
          pcStack_178 = *(code **)(param_4 + 0x18);
          pcStack_180 = pcVar8;
        }
        uStack_170 = param_3;
        if ((undefined *)*param_1 == &UNK_180a14060) {
          LOCK();
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)((undefined *)*param_1 + 0x28))(param_1);
        }
        if (((*(byte *)(param_1 + 0x65) & 0x80) == 0) && (param_2 == '\0')) {
          plVar7 = *(longlong **)(param_1[0x15] + 0x88);
          pcVar8 = *(code **)(*plVar7 + 0x70);
          lVar3 = FUN_18023cb40(auStack_a0,&plStack_1a0);
          lVar4 = FUN_18023cb40(auStack_68,lVar3);
          pcStack_158 = FUN_18023e120;
          puStack_150 = &UNK_18023e110;
          uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x38,8,DAT_180bf65bc);
          FUN_18023cb40(uVar5,lVar4);
          lVar6 = lVar4 + 0x10;
          auStack_168[0] = uVar5;
          if (*(code **)(lVar4 + 0x20) != (code *)0x0) {
            (**(code **)(lVar4 + 0x20))(lVar6,0,0);
          }
          if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
            (**(code **)(lVar3 + 0x20))(lVar3 + 0x10,0,0);
          }
          uVar5 = FUN_18023c3b0(auStack_100,&plStack_1d0);
          FUN_18023dc00(auStack_140,uVar5);
          (*pcVar8)(plVar7,&DAT_180a01050,param_1[0x15] + 0xc,0,auStack_140,auStack_168,lVar6);
          if (pcStack_130 != (code *)0x0) {
            (*pcStack_130)(auStack_140,0,0);
          }
          if (pcStack_158 != (code *)0x0) {
            (*pcStack_158)(auStack_168,0,0);
          }
        }
        else {
          plVar7 = *(longlong **)(param_1[0x15] + 0x88);
          pcVar8 = *(code **)(*plVar7 + 0x60);
          uVar5 = FUN_18023c3b0(auStack_d0,&plStack_1d0);
          FUN_18023dc00(auStack_120,uVar5);
          cVar1 = (*pcVar8)(plVar7,&DAT_180a01050,param_1[0x15] + 0xc,0,auStack_120);
          if (pcStack_110 != (code *)0x0) {
            (*pcStack_110)(auStack_120,0,0);
          }
          if (cVar1 == '\0') {
            FUN_18023c860(&plStack_1a0);
          }
        }
        if (pcStack_180 != (code *)0x0) {
          (*pcStack_180)(auStack_190,0,0);
        }
        if (pcStack_1b8 != (code *)0x0) {
          (*pcStack_1b8)(auStack_1c8,0,0);
        }
      }
    }
    else if ((iVar2 == 1) && (param_2 != '\0')) {
      while (uVar5 = _DAT_180c82868, (int)param_1[0x70] == 1) {
        lVar6 = FUN_18005e890(_DAT_180c82868);
        if (lVar6 != 0) {
          plVar7 = (longlong *)FUN_18005e890(uVar5);
          (**(code **)(*plVar7 + 0x20))(plVar7,0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023c860(undefined8 *param_1)
void FUN_18023c860(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong ****pppplVar5;
  code *pcVar6;
  longlong ***ppplStackX_8;
  longlong ***ppplStackX_10;
  longlong ***ppplStackX_18;
  longlong ***ppplStackX_20;
  longlong **pplStack_b8;
  longlong *aplStack_b0 [2];
  code *pcStack_a0;
  code *pcStack_98;
  undefined4 uStack_90;
  longlong **pplStack_88;
  longlong **applStack_80 [2];
  code *pcStack_70;
  code *pcStack_68;
  undefined4 uStack_60;
  longlong *aplStack_58 [4];
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pplStack_b8 = (longlong **)*param_1;
  ppplStackX_8 = (longlong ***)aplStack_b0;
  pcStack_a0 = (code *)0x0;
  pcStack_98 = _guard_check_icall;
  if (aplStack_b0 != (longlong **)(param_1 + 2)) {
    pcVar6 = (code *)param_1[4];
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(aplStack_b0,param_1 + 2,1);
      pcVar6 = (code *)param_1[4];
    }
    pcStack_98 = (code *)param_1[5];
    pcStack_a0 = pcVar6;
  }
  uStack_90 = *(undefined4 *)(param_1 + 6);
  iVar2 = _Thrd_id();
  if (iVar2 == *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48)) {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x40,8,3);
    ppplStackX_8 = (longlong ***)aplStack_58;
    ppplStackX_10 = &pplStack_88;
    pplStack_88 = pplStack_b8;
    ppplStackX_18 = applStack_80;
    pcStack_70 = (code *)0x0;
    pcStack_68 = _guard_check_icall;
    if (pcStack_a0 != (code *)0x0) {
      (*pcStack_a0)(applStack_80,aplStack_b0,1);
    }
    pcStack_70 = pcStack_a0;
    pcStack_68 = pcStack_98;
    uStack_60 = uStack_90;
    uVar4 = FUN_18023db30(aplStack_58,&pplStack_88);
    pppplVar5 = (longlong ****)FUN_18005c2a0(uVar3,uVar4);
    ppplStackX_8 = (longlong ***)pppplVar5;
    if (pppplVar5 != (longlong ****)0x0) {
      (*(code *)(*pppplVar5)[5])(pppplVar5);
    }
    (*(code *)(*pppplVar5)[0xc])(pppplVar5);
  }
  else {
    if (*(char *)(param_1 + 1) == '\0') {
      uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x40,8,3);
      ppplStackX_8 = (longlong ***)aplStack_58;
      ppplStackX_10 = &pplStack_88;
      uVar4 = FUN_18023c3b0(&pplStack_88,&pplStack_b8);
      uVar4 = FUN_18023db30(aplStack_58,uVar4);
      pppplVar5 = (longlong ****)FUN_18005c2a0(uVar3,uVar4);
      ppplStackX_18 = (longlong ***)pppplVar5;
      if (pppplVar5 != (longlong ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      lVar1 = _DAT_180c82868;
      ppplStackX_10 = (longlong ***)&ppplStackX_8;
      ppplStackX_8 = (longlong ***)pppplVar5;
      if (pppplVar5 != (longlong ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      FUN_18005e370(lVar1,&ppplStackX_8);
    }
    else {
      uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      ppplStackX_8 = (longlong ***)aplStack_58;
      ppplStackX_10 = &pplStack_88;
      uVar4 = FUN_18023c3b0(&pplStack_88,&pplStack_b8);
      uVar4 = FUN_18023db30(aplStack_58,uVar4);
      pppplVar5 = (longlong ****)FUN_1800ed900(uVar3,uVar4);
      ppplStackX_18 = (longlong ***)pppplVar5;
      if (pppplVar5 != (longlong ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      lVar1 = _DAT_180c82868;
      ppplStackX_10 = (longlong ***)&ppplStackX_8;
      ppplStackX_8 = (longlong ***)pppplVar5;
      if (pppplVar5 != (longlong ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      FUN_18005e370(lVar1,&ppplStackX_8);
      lVar1 = _DAT_180c82868;
      ppplStackX_20 = (longlong ***)&ppplStackX_10;
      ppplStackX_10 = (longlong ***)pppplVar5;
      if (pppplVar5 != (longlong ****)0x0) {
        (*(code *)(*pppplVar5)[5])(pppplVar5);
      }
      FUN_18005e6a0(lVar1,&ppplStackX_10,0);
    }
    if (pppplVar5 == (longlong ****)0x0) goto LAB_18023cb0e;
  }
  (*(code *)(*pppplVar5)[7])(pppplVar5);
LAB_18023cb0e:
  ppplStackX_8 = (longlong ***)aplStack_b0;
  if (pcStack_a0 != (code *)0x0) {
    (*pcStack_a0)(aplStack_b0,0,0);
  }
  return;
}



undefined8 *
FUN_18023cb40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[4] = 0;
  param_1[5] = _guard_check_icall;
  if (param_1 + 2 != param_2 + 2) {
    pcVar1 = (code *)param_2[4];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 2,param_2 + 2,1,param_4,0xfffffffffffffffe);
      pcVar1 = (code *)param_2[4];
    }
    param_1[4] = pcVar1;
    param_1[5] = param_2[5];
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return param_1;
}



undefined1 FUN_18023cbe0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong alStackX_10 [3];
  longlong *aplStack_30 [2];
  code *pcStack_20;
  code *pcStack_18;
  
  uVar5 = *(undefined8 *)(param_1 + 0x2ec);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0x2e4);
  *(undefined8 *)(param_2 + 0x1c) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x2fc);
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x2f4);
  *(undefined8 *)(param_2 + 0x2c) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x30c);
  *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_1 + 0x304);
  *(undefined8 *)(param_2 + 0x3c) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x31c);
  *(undefined8 *)(param_2 + 0x44) = *(undefined8 *)(param_1 + 0x314);
  *(undefined8 *)(param_2 + 0x4c) = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 0x328);
  uVar3 = *(undefined4 *)(param_1 + 0x32c);
  uVar4 = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x324);
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  *(undefined4 *)(param_2 + 0x5c) = uVar3;
  *(undefined4 *)(param_2 + 0x60) = uVar4;
  *(undefined8 *)(param_2 + 100) = *(undefined8 *)(param_1 + 0x334);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x88);
  pcStack_20 = (code *)&UNK_18023e0d0;
  pcStack_18 = FUN_18023e030;
  aplStack_30[0] = alStackX_10;
  alStackX_10[0] = param_2;
  uVar6 = (**(code **)(*plVar1 + 0x60))
                    (plVar1,&DAT_180a01050,*(longlong *)(param_1 + 0xa8) + 0xc,0,aplStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(aplStack_30,0,0);
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023ccc0(longlong *param_1)
void FUN_18023ccc0(longlong *param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined1 auStack_4e8 [32];
  char cStack_4c8;
  longlong ***ppplStack_4c0;
  int iStack_4b8;
  longlong **pplStack_4b0;
  longlong **pplStack_4a8;
  longlong *plStack_4a0;
  longlong *plStack_498;
  longlong *plStack_490;
  longlong *plStack_488;
  longlong *plStack_480;
  longlong *plStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  longlong lStack_458;
  undefined4 uStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined *puStack_430;
  code *pcStack_428;
  longlong *aplStack_420 [2];
  undefined *puStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  longlong *plStack_3f8;
  longlong **pplStack_3f0;
  longlong *plStack_3e8;
  longlong *plStack_3e0;
  longlong *plStack_3d8;
  longlong *plStack_3c8;
  undefined1 *puStack_3c0;
  undefined4 uStack_3b8;
  undefined1 auStack_3b0 [128];
  undefined4 uStack_330;
  longlong lStack_328;
  longlong *plStack_320;
  longlong *plStack_2e8;
  undefined1 *puStack_2e0;
  undefined4 uStack_2d8;
  undefined1 auStack_2d0 [128];
  undefined4 uStack_250;
  longlong lStack_248;
  longlong *plStack_240;
  longlong *plStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined4 uStack_170;
  undefined8 uStack_168;
  longlong *plStack_128;
  undefined1 *puStack_120;
  undefined4 uStack_118;
  undefined1 auStack_110 [128];
  undefined4 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_48;
  
  lVar12 = *(longlong *)(param_1[0x15] + 0x20);
  *(undefined2 *)((longlong)param_1 + 0x332) = *(undefined2 *)(lVar12 + 0x34);
  *(uint *)(param_1 + 0x65) = *(uint *)(lVar12 + 0x18) | *(uint *)(lVar12 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x324) = *(undefined4 *)(lVar12 + 0x20);
  *(undefined2 *)((longlong)param_1 + 0x32c) = *(undefined2 *)(lVar12 + 0x28);
  *(undefined2 *)((longlong)param_1 + 0x32e) = *(undefined2 *)(lVar12 + 0x2c);
  *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(lVar12 + 0x30);
  *(undefined1 *)((longlong)param_1 + 0x334) = *(undefined1 *)(lVar12 + 0x37);
  *(undefined1 *)((longlong)param_1 + 0x335) = *(undefined1 *)(lVar12 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x336) = *(undefined1 *)(lVar12 + 0x38);
  if ((*(char *)(lVar12 + 0x1c) == '\0') && ((*(uint *)(lVar12 + 0x24) & 0x40000000) == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | bVar5;
  FUN_180627be0(param_1 + 0x71);
  param_1[0x4f] = *(longlong *)(lVar12 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  if (((*(uint *)(lVar12 + 0x24) & 0x200000) != 0) &&
     (((sVar1 = *(short *)((longlong)param_1 + 0x32c),
       sVar1 != *(short *)((longlong)param_1 + 0x32e) ||
       ((((sVar1 != 0x40 && (sVar1 != 0x200)) && (sVar1 != 0x400)) &&
        ((sVar1 != 0x800 && (sVar1 != 0x1000)))))) ||
      ((*(int *)((longlong)param_1 + 0x324) != 0xe &&
       (2 < *(int *)((longlong)param_1 + 0x324) - 0x12U)))))) {
    FUN_180627020(&UNK_180a13e90);
  }
  uStack_400 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_4e8;
  cStack_4c8 = '\0';
  plStack_478 = param_1 + 0x44;
  iVar6 = _Mtx_lock();
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  puVar14 = (undefined8 *)param_1[0x3e];
  if (puVar14 == (undefined8 *)0x0) {
    if ((int)param_1[0x70] == 2) {
      puVar14 = (undefined8 *)0x0;
      if (((int)param_1[0x2c] - 4U & 0xfffffffd) == 0) {
        lVar12 = _DAT_180c86870;
        puVar13 = puVar14;
        cVar4 = '\0';
        if (*(short *)((longlong)param_1 + 0x332) != 0) {
          do {
            bVar5 = *(byte *)((longlong)param_1 + 0x335);
            iVar6 = (int)puVar13;
            puVar13 = puVar14;
            if (bVar5 != 0) {
              do {
                lVar3 = param_1[0x3b];
                iVar7 = (int)puVar13;
                puVar13 = puVar14;
                if (lVar3 != 0) {
                  if (lVar12 != 0) {
                    param_1[0x68] = (longlong)*(int *)(lVar12 + 0x224);
                    bVar5 = *(byte *)((longlong)param_1 + 0x335);
                  }
                  puVar13 = (undefined8 *)
                            ((longlong)(int)((uint)bVar5 * iVar6 + iVar7) * 0x10 + lVar3);
                }
                if (puVar13 != (undefined8 *)0x0) {
                  puVar13 = puVar14;
                  if (lVar3 != 0) {
                    if (lVar12 != 0) {
                      param_1[0x68] = (longlong)*(int *)(lVar12 + 0x224);
                    }
                    puVar13 = (undefined8 *)
                              ((longlong)(int)((uint)bVar5 * iVar6 + iVar7) * 0x10 + lVar3);
                  }
                  if (DAT_180c8ecee == '\0') {
                    if (puVar13[1] != 0) {
                      iVar2 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
                      iVar8 = _Thrd_id();
                      if (iVar8 == iVar2) {
                        lVar12 = _DAT_180c86870;
                        if ((longlong *)puVar13[1] != (longlong *)0x0) {
                          (**(code **)(*(longlong *)puVar13[1] + 0x10))();
                          lVar12 = _DAT_180c86870;
                        }
                      }
                      else {
                        ppplStack_4c0 = (longlong ***)&plStack_128;
                        plStack_128 = (longlong *)&UNK_1809fcc28;
                        puStack_120 = auStack_110;
                        uStack_118 = 0;
                        auStack_110[0] = 0;
                        uStack_90 = 0x13;
                        uStack_88 = puVar13[1];
                        uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
                        plVar10 = (longlong *)FUN_18005ce30(uVar9,&plStack_128);
                        plStack_3e8 = plVar10;
                        if (plVar10 != (longlong *)0x0) {
                          (**(code **)(*plVar10 + 0x28))(plVar10);
                        }
                        lVar12 = _DAT_180c82868;
                        ppplStack_4c0 = (longlong ***)&plStack_498;
                        plStack_498 = plVar10;
                        if (plVar10 != (longlong *)0x0) {
                          (**(code **)(*plVar10 + 0x28))(plVar10);
                        }
                        FUN_18005e370(lVar12,&plStack_498);
                        if (plVar10 != (longlong *)0x0) {
                          (**(code **)(*plVar10 + 0x38))(plVar10);
                        }
                        ppplStack_4c0 = (longlong ***)&plStack_128;
                        plStack_128 = (longlong *)&UNK_18098bcb0;
                        lVar12 = _DAT_180c86870;
                      }
                    }
                    *puVar13 = 0;
                    puVar13[1] = 0;
                    bVar5 = *(byte *)((longlong)param_1 + 0x335);
                  }
                }
                puVar13 = (undefined8 *)(ulonglong)(iVar7 + 1U);
              } while ((int)(iVar7 + 1U) < (int)(uint)bVar5);
            }
            puVar13 = (undefined8 *)(ulonglong)(iVar6 + 1U);
            cVar4 = cStack_4c8;
          } while ((int)(iVar6 + 1U) < (int)(uint)*(ushort *)((longlong)param_1 + 0x332));
        }
      }
      else {
        cVar4 = '\0';
        if ((((int)param_1[0x2c] - 3U & 0xfffffffd) == 0) &&
           (iStack_4b8 = 0, lVar12 = _DAT_180c86870, puVar13 = puVar14, puVar16 = puVar14,
           *(short *)((longlong)param_1 + 0x332) != 0)) {
          do {
            do {
              if (param_1[0x3c] != 0) {
                if (lVar12 != 0) {
                  param_1[0x68] = (longlong)*(int *)(lVar12 + 0x224);
                }
                puVar15 = (undefined8 *)
                          ((longlong)((int)puVar13 + (int)puVar16) * 0x10 + param_1[0x3c]);
                if (puVar15 != (undefined8 *)0x0) {
                  if (lVar12 != 0) {
                    param_1[0x68] = (longlong)*(int *)(lVar12 + 0x224);
                  }
                  if (DAT_180c8ecee == '\0') {
                    iVar6 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
                    iVar7 = _Thrd_id();
                    if (iVar7 == iVar6) {
                      if ((longlong *)puVar15[1] != (longlong *)0x0) {
                        (**(code **)(*(longlong *)puVar15[1] + 0x10))();
                        puVar15[1] = 0;
                      }
                    }
                    else {
                      pplStack_4b0 = &plStack_208;
                      plStack_208 = (longlong *)&UNK_1809fcc28;
                      puStack_200 = auStack_1f0;
                      uStack_1f8 = 0;
                      auStack_1f0[0] = 0;
                      uStack_170 = 0x13;
                      uStack_168 = puVar15[1];
                      uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
                      pplVar11 = (longlong **)FUN_18005ce30(uVar9,&plStack_208);
                      pplStack_3f0 = pplVar11;
                      if (pplVar11 != (longlong **)0x0) {
                        (*(code *)(*pplVar11)[5])(pplVar11);
                      }
                      lVar12 = _DAT_180c82868;
                      ppplStack_4c0 = &pplStack_4b0;
                      pplStack_4b0 = pplVar11;
                      if (pplVar11 != (longlong **)0x0) {
                        (*(code *)(*pplVar11)[5])(pplVar11);
                      }
                      FUN_18005e370(lVar12,&pplStack_4b0);
                      puVar15[1] = 0;
                      if (pplVar11 != (longlong **)0x0) {
                        (*(code *)(*pplVar11)[7])(pplVar11);
                      }
                      ppplStack_4c0 = (longlong ***)&plStack_208;
                      plStack_208 = (longlong *)&UNK_18098bcb0;
                    }
                    *puVar15 = 0;
                    puVar15[1] = 0;
                    lVar12 = _DAT_180c86870;
                  }
                }
              }
              uVar17 = (int)puVar13 + 1;
              puVar13 = (undefined8 *)(ulonglong)uVar17;
            } while ((int)uVar17 < 2);
            iStack_4b8 = iStack_4b8 + 1;
            puVar13 = puVar14;
            cVar4 = cStack_4c8;
            puVar16 = (undefined8 *)(ulonglong)((int)puVar16 + 2);
          } while (iStack_4b8 < (int)(uint)*(ushort *)((longlong)param_1 + 0x332));
        }
      }
      if (param_1[0x3b] != 0) {
        ppplStack_4c0 = (longlong ***)&plStack_3c8;
        plStack_3c8 = (longlong *)&UNK_1809fcc28;
        puStack_3c0 = auStack_3b0;
        uStack_3b8 = 0;
        auStack_3b0[0] = 0;
        uStack_330 = 0x2b;
        lStack_328 = param_1[0x3b];
        plStack_320 = param_1;
        if (cVar4 != '\0') {
          plStack_320 = (longlong *)0x0;
        }
        uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
        plVar10 = (longlong *)FUN_18005ce30(uVar9,&plStack_3c8);
        plStack_3e0 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        iVar6 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
        iVar7 = _Thrd_id();
        lVar12 = _DAT_180c82868;
        if (iVar7 == iVar6) {
          (**(code **)(*plVar10 + 0x60))(plVar10);
        }
        else {
          ppplStack_4c0 = (longlong ***)&plStack_490;
          plStack_490 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10);
          }
          FUN_18005e370(lVar12,&plStack_490);
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        ppplStack_4c0 = (longlong ***)&plStack_3c8;
        plStack_3c8 = (longlong *)&UNK_18098bcb0;
      }
      if (param_1[0x3c] != 0) {
        ppplStack_4c0 = (longlong ***)&plStack_2e8;
        plStack_2e8 = (longlong *)&UNK_1809fcc28;
        puStack_2e0 = auStack_2d0;
        uStack_2d8 = 0;
        auStack_2d0[0] = 0;
        uStack_250 = 0x2c;
        lStack_248 = param_1[0x3c];
        plStack_240 = param_1;
        if (cVar4 != '\0') {
          plStack_240 = (longlong *)0x0;
        }
        uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
        plVar10 = (longlong *)FUN_18005ce30(uVar9,&plStack_2e8);
        plStack_3d8 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        iVar6 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
        iVar7 = _Thrd_id();
        lVar12 = _DAT_180c82868;
        if (iVar7 == iVar6) {
          (**(code **)(*plVar10 + 0x60))(plVar10);
        }
        else {
          ppplStack_4c0 = (longlong ***)&plStack_488;
          plStack_488 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10);
          }
          FUN_18005e370(lVar12,&plStack_488);
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        ppplStack_4c0 = (longlong ***)&plStack_2e8;
        plStack_2e8 = (longlong *)&UNK_18098bcb0;
      }
      FUN_1802a01a0(param_1 + 0x2d);
      FUN_1802a01a0(param_1 + 0x34);
      FUN_1802a0bb0(param_1 + 0x3f);
      if (*(int *)((longlong)param_1 + 0x36c) != 0) {
        *(undefined4 *)((longlong)param_1 + 0x36c) = 1;
        pplStack_4a8 = (longlong **)param_1[0x6e];
        param_1[0x6e] = 0;
        if (pplStack_4a8 != (longlong **)0x0) {
          (*(code *)(*pplStack_4a8)[7])();
        }
      }
      if (cVar4 == '\0') {
        FUN_1806279c0(&puStack_460,param_1 + 2);
        uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
        ppplStack_4c0 = (longlong ***)aplStack_420;
        puStack_410 = &UNK_18023ea40;
        puStack_408 = &UNK_18023e9a0;
        aplStack_420[0] = param_1;
        plVar10 = (longlong *)FUN_18006b640(uVar9,aplStack_420);
        uStack_470 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        LOCK();
        *(undefined1 *)(param_1 + 0x19) = 1;
        UNLOCK();
        iVar6 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
        iVar7 = _Thrd_id();
        lVar12 = _DAT_180c82868;
        if (iVar7 == iVar6) {
          (**(code **)(*plVar10 + 0x60))(plVar10);
        }
        else {
          ppplStack_4c0 = (longlong ***)&plStack_480;
          plStack_480 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x28))(plVar10);
          }
          FUN_18005e370(lVar12,&plStack_480);
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10);
        }
        puStack_460 = &UNK_180a3c3e0;
        if (lStack_458 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_458 = 0;
        uStack_448 = 0;
        puStack_460 = &UNK_18098bcb0;
      }
      LOCK();
      *(undefined4 *)(param_1 + 0x70) = 0;
      UNLOCK();
    }
    else if (*(char *)((longlong)param_1 + 0xc9) != '\0') {
      if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_1[0x3b] = 0;
      if (param_1[0x3c] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_1[0x3c] = 0;
    }
  }
  else {
    plVar10 = (longlong *)puVar14[1];
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
    iVar7 = _Thrd_id();
    if (iVar7 == iVar6) {
      cVar4 = FUN_1802e5280(plVar10,puVar14);
      if (cVar4 != '\0') {
        (**(code **)(*(longlong *)plVar10[0x29] + 0x168))((longlong *)plVar10[0x29],*puVar14);
        *puVar14 = 0;
        FUN_1802e5110(puVar14);
        param_1[0x3e] = 0;
        LOCK();
        *(undefined4 *)(param_1 + 0x70) = 0;
        UNLOCK();
        goto LAB_18023ba58;
      }
    }
    else {
      uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
      pplStack_4a8 = (longlong **)&uStack_440;
      puStack_430 = &UNK_1802e5240;
      pcStack_428 = FUN_1802e51e0;
      uStack_470._0_4_ = SUB84(plVar10,0);
      uStack_470._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
      uStack_468._0_4_ = SUB84(puVar14,0);
      uStack_468._4_4_ = (undefined4)((ulonglong)puVar14 >> 0x20);
      uStack_440 = (undefined4)uStack_470;
      uStack_43c = uStack_470._4_4_;
      uStack_438 = (undefined4)uStack_468;
      uStack_434 = uStack_468._4_4_;
      uStack_470 = plVar10;
      uStack_468 = puVar14;
      plVar10 = (longlong *)FUN_18006b640(uVar9,&uStack_440);
      plStack_3f8 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10);
      }
      lVar12 = _DAT_180c82868;
      pplStack_4a8 = &plStack_4a0;
      plStack_4a0 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10);
      }
      FUN_18005e370(lVar12,&plStack_4a0);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10);
      }
    }
    param_1[0x3e] = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x70) = 0;
    UNLOCK();
  }
LAB_18023ba58:
  iVar6 = _Mtx_unlock(plStack_478);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_4e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




