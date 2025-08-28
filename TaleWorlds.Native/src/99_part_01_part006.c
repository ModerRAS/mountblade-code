#include "TaleWorlds.Native.Split.h"

// 99_part_01_part006.c - 3 个函数

// 函数: void FUN_1800a3880(longlong param_1,int param_2,int param_3,char param_4)
void FUN_1800a3880(longlong param_1,int param_2,int param_3,char param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_258 [32];
  undefined4 uStack_238;
  undefined4 uStack_230;
  longlong *plStack_228;
  longlong *plStack_220;
  undefined8 uStack_218;
  longlong *plStack_210;
  longlong *plStack_208;
  longlong *plStack_200;
  longlong *plStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  longlong alStack_1e0 [2];
  undefined *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [128];
  undefined *puStack_120;
  undefined1 *puStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [128];
  undefined8 uStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong uStack_48;
  ulonglong uVar14;
  
  uStack_1c0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
  iVar4 = _Thrd_id();
  uVar14 = 0;
  if (iVar4 == iVar5) {
    if (*(longlong *)(param_1 + 0x121e0) != 0) {
      FUN_18023b050();
      plStack_208 = *(longlong **)(param_1 + 0x121e0);
      *(undefined8 *)(param_1 + 0x121e0) = 0;
      if (plStack_208 != (longlong *)0x0) {
        (**(code **)(*plStack_208 + 0x38))();
      }
    }
    FUN_18029c9d0(*(undefined8 *)(param_1 + 0x1cd8));
  }
  else {
    FUN_18005e630(_DAT_180c82868);
    plStack_210 = alStack_1e0;
    puStack_1d0 = &UNK_1800adcc0;
    pcStack_1c8 = FUN_1800adc50;
    alStack_1e0[0] = param_1;
    FUN_18005c650(alStack_1e0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x48))
            (*(longlong **)(param_1 + 0x1d70),0,&UNK_180a026e0,&plStack_228);
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x10))();
    plStack_228 = (longlong *)0x0;
  }
  if (param_4 != '\0') {
    if (*(int *)(_DAT_180c86920 + 0x1ea0) == 2) {
      iStack_60 = 0x3c;
      iStack_5c = 1;
      fVar17 = 3.4028235e+38;
      lVar11 = *(longlong *)(_DAT_180c86870 + 0x78);
      uVar15 = *(longlong *)(_DAT_180c86870 + 0x80) - lVar11 >> 4;
      if (uVar15 != 0) {
        uVar13 = uVar14;
        do {
          if (((float)param_2 == *(float *)(lVar11 + uVar13 * 0x10)) &&
             ((float)param_3 == *(float *)(lVar11 + 4 + uVar13 * 0x10))) {
            fVar1 = *(float *)(lVar11 + 0xc + uVar13 * 0x10);
            fVar2 = *(float *)(lVar11 + 8 + uVar13 * 0x10);
            fVar16 = ABS(fVar2 / fVar1 - *(float *)(_DAT_180c86920 + 0x1e30));
            if (fVar16 < fVar17) {
              iStack_60 = (int)fVar2;
              iStack_5c = (int)fVar1;
              fVar17 = fVar16;
            }
          }
          uVar13 = (ulonglong)((int)uVar13 + 1);
        } while (uVar13 < uVar15);
      }
      uStack_58 = *(undefined4 *)(param_1 + 0x1d80);
      uStack_54 = 0;
      uStack_50 = 0;
      iStack_68 = param_2;
      iStack_64 = param_3;
      (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x78))
                (*(longlong **)(param_1 + 0x1d70),&plStack_220);
      if (plStack_220 == (longlong *)0x0) {
        uStack_88 = CONCAT44(iStack_64,iStack_68);
        uStack_80 = CONCAT44(iStack_5c,iStack_60);
        uStack_78 = CONCAT44(uStack_54,uStack_58);
        uStack_70 = uStack_50;
        (**(code **)**(undefined8 **)(param_1 + 0x1d78))
                  (*(undefined8 **)(param_1 + 0x1d78),&UNK_180a026d0,&plStack_200);
        (**(code **)(*plStack_200 + 0x30))(plStack_200,&UNK_180a026c0,&plStack_1f8);
        (**(code **)(*plStack_1f8 + 0x38))(plStack_1f8,0,&plStack_220);
      }
      else {
        (**(code **)(*plStack_220 + 0x48))
                  (plStack_220,&iStack_68,&uStack_88,*(undefined8 *)(param_1 + 0x1d78));
      }
      (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x70))
                (*(longlong **)(param_1 + 0x1d70),&uStack_88);
      (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x50))
                (*(longlong **)(param_1 + 0x1d70),1,plStack_220);
      FUN_18006b4c0(_DAT_180c86920,uStack_88 & 0xffffffff);
      FUN_18006b440(_DAT_180c86920,uStack_88._4_4_);
      FUN_1800ae230((uStack_80 & 0xffffffff) / (uStack_80 >> 0x20),
                    (uStack_80 & 0xffffffff) % (uStack_80 >> 0x20));
      uStack_80 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x70))();
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x50))(*(longlong **)(param_1 + 0x1d70),0,0);
    }
  }
  if (*(char *)(param_1 + 0x121b8) == '\0') {
    uStack_230 = 2;
  }
  else {
    uStack_230 = 0x802;
  }
  uStack_238 = 0;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x68))
                    (*(longlong **)(param_1 + 0x1d70),0,param_2,param_3);
  if (iVar5 < 0) {
    if ((iVar5 + 0x7785fffbU & 0xfffffffd) == 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x138))();
      FUN_180220810(uVar6,&UNK_180a025d0);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x48))
              (*(longlong **)(param_1 + 0x1d70),0,&UNK_180a026e0,&plStack_228);
    uStack_218 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x48))
              (*(longlong **)(param_1 + 0x1d78),plStack_228,0,&uStack_218);
    uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
    plVar8 = (longlong *)FUN_18023a2e0(uVar7,4);
    if (plVar8 != (longlong *)0x0) {
      plStack_210 = plVar8;
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    plStack_210 = *(longlong **)(param_1 + 0x121e0);
    *(longlong **)(param_1 + 0x121e0) = plVar8;
    if (plStack_210 != (longlong *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x10);
    (**(code **)(*plVar8 + 0x10))(plVar8,&UNK_180a01928);
    *(longlong **)(*(longlong *)(param_1 + 0x121e0) + 0x170) = plStack_228;
    ppuStack_1f0 = &puStack_120;
    puStack_120 = &UNK_1809fcc28;
    puStack_118 = auStack_108;
    auStack_108[0] = 0;
    uStack_110 = 0x15;
    strcpy_s(auStack_108,0x80,&UNK_180a01928);
    ppuStack_1e8 = &puStack_120;
    *(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x168) = *(longlong *)(param_1 + 0x121e0);
    puVar9 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,3);
    puVar10 = puVar9;
    do {
      *puVar10 = 0;
      puVar10[1] = 0;
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
      puVar10 = puVar10 + 2;
    } while (uVar12 == 0);
    *(undefined8 **)(*(longlong *)(param_1 + 0x121e0) + 0x1d8) = puVar9;
    *(undefined2 *)(*(longlong *)(param_1 + 0x121e0) + 0x332) = 1;
    lVar11 = *(longlong *)(param_1 + 0x121e0);
    *(undefined1 *)(lVar11 + 0x335) = 1;
    *(undefined4 *)(lVar11 + 0x35c) = 1;
    lVar3 = _DAT_180c86870;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x1d8);
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    *(undefined8 *)(lVar11 + 8) = uStack_218;
    lVar11 = *(longlong *)(param_1 + 0x121e0);
    *(longlong *)(lVar11 + 0x340) = (longlong)*(int *)(lVar3 + 0x224);
    LOCK();
    *(undefined4 *)(lVar11 + 0x380) = 2;
    UNLOCK();
    LOCK();
    *(undefined1 *)(lVar11 + 900) = 1;
    UNLOCK();
    FUN_18023ce10(*(undefined8 *)(param_1 + 0x121e0));
    if ((*(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x1d8) != 0) && (_DAT_180c86870 != 0)) {
      *(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    ppuStack_1e8 = &puStack_1b8;
    puStack_1b8 = &UNK_1809fcc28;
    puStack_1b0 = auStack_1a0;
    auStack_1a0[0] = 0;
    uStack_1a8 = 0x15;
    strcpy_s(auStack_1a0,0x80,&UNK_180a01928);
    ppuStack_1f0 = &puStack_1b8;
    puStack_1b8 = &UNK_18098bcb0;
    lVar11 = *(longlong *)(param_1 + 0x121e0);
    plVar8 = *(longlong **)(lVar11 + 0x1d8);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar11 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      lVar11 = *(longlong *)(param_1 + 0x121e0);
    }
    *plVar8 = lVar11;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1800a3f00(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  int aiStackX_8 [2];
  
  FUN_1802055a0(_DAT_180c8aa50);
  iVar1 = *(int *)(_DAT_180c86920 + 0x1f80);
  if (0 < *(int *)(param_1 + 0x1d5c)) {
    iVar1 = 1;
  }
  if ((((param_2 != (undefined8 *)0x0) || (*(char *)(param_1 + 0x121b8) == '\0')) ||
      ((**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x58))
                 (*(longlong **)(param_1 + 0x1d70),aiStackX_8,0), aiStackX_8[0] != 0)) ||
     (uVar5 = 0x200, iVar1 != 0)) {
    uVar5 = 0;
  }
  iVar4 = 0;
  if ((-1 < iVar1) && (iVar4 = iVar1, 4 < iVar1)) {
    iVar4 = 4;
  }
  if (param_2 == (undefined8 *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x1d70);
  }
  else {
    plVar3 = (longlong *)*param_2;
  }
  iVar1 = (**(code **)(*plVar3 + 0x40))(plVar3,iVar4,uVar5);
  if (iVar1 < 0) {
    if ((iVar1 + 0x7785fffbU & 0xfffffffd) == 0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x138))();
      FUN_180220810(uVar2,&UNK_180a025d0);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a4010(longlong param_1,uint param_2,int param_3,int param_4,uint param_5,
void FUN_1800a4010(longlong param_1,uint param_2,int param_3,int param_4,uint param_5,
                  undefined4 param_6,longlong param_7,longlong param_8)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_168 [32];
  undefined4 uStack_148;
  undefined8 uStack_144;
  int iStack_13c;
  uint uStack_138;
  undefined8 *puStack_130;
  uint uStack_128;
  uint uStack_124;
  longlong lStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  puVar6 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_128 = param_2 & 1;
  if (uStack_128 != 0) {
    uStack_e8 = 8;
  }
  uStack_124 = param_2 & 4;
  if (uStack_124 != 0) {
    uStack_e8 = uStack_e8 | 0x80;
  }
  if ((param_2 & 0x200) != 0) {
    uStack_e8 = uStack_e8 | 4;
  }
  if ((param_2 >> 10 & 1) != 0) {
    uStack_e8 = uStack_e8 | 1;
  }
  if ((param_2 >> 0xb & 1) != 0) {
    uStack_e8 = uStack_e8 | 2;
  }
  if ((param_2 & 0x10) != 0) {
    uStack_e4 = 0x20000;
  }
  if ((param_2 & 0x20) != 0) {
    uStack_e4 = 0x10000;
  }
  uVar1 = param_5;
  lStack_120 = param_1;
  if ((((param_2 & 0x140) == 0) && ((param_2 & 0xc00) == 0)) && ((param_2 & 0x200) == 0)) {
    uVar1 = func_0x000180225d90(param_6);
  }
  iStack_f0 = uVar1 * param_4;
  uStack_e0 = (uint)puVar6;
  uStack_ec = uStack_e0;
  if (param_3 != 0) {
    if (param_3 == 1) {
      uStack_ec = 1;
    }
    else if (param_3 == 2) {
      uStack_ec = 3;
    }
    else if (param_3 == 3) {
      uStack_ec = 2;
    }
  }
  uStack_dc = uStack_e0;
  if ((param_2 & 0x40) != 0) {
    uStack_e0 = 0x40;
    uStack_dc = param_5;
  }
  bVar7 = (param_2 & 0x401) != 0x401;
  if (!bVar7) {
    uStack_e0 = uStack_e0 | 0x20;
  }
  if ((param_2 >> 8 & 1) != 0) {
    uStack_e0 = uStack_e0 | 0x10;
  }
  puVar4 = puVar6;
  if (param_7 != 0) {
    uStack_108 = *(undefined8 *)(param_7 + 0x10);
    puVar4 = &uStack_108;
    puStack_100 = puVar6;
  }
  puStack_130 = puVar6;
  puStack_118 = puVar6;
  puStack_110 = puVar6;
  iVar2 = (**(code **)(**(longlong **)(lStack_120 + 0x1d78) + 0x18))
                    (*(longlong **)(lStack_120 + 0x1d78),&iStack_f0,puVar4,&puStack_130);
  if (iVar2 < 0) {
    FUN_180220810(iVar2,&UNK_180a018e0);
  }
  else {
    lVar3 = lStack_120;
    if (uStack_128 != 0) {
      uStack_144 = 0xb;
      uStack_138 = 0;
      if (bVar7) {
        iStack_13c = param_4;
        uStack_148 = func_0x0001800ab000(param_6);
      }
      else {
        uStack_138 = 1;
        uStack_148 = 0x27;
        iStack_13c = (param_5 >> 2) * param_4;
      }
      lVar3 = lStack_120;
      iVar2 = (**(code **)(**(longlong **)(lStack_120 + 0x1d78) + 0x38))
                        (*(longlong **)(lStack_120 + 0x1d78),puStack_130,&uStack_148,&puStack_118);
      if (iVar2 < 0) {
        FUN_180220810(iVar2,&UNK_180a019a0);
        goto LAB_1800a4380;
      }
    }
    if (uStack_124 != 0) {
      uStack_144 = 1;
      uStack_138 = 0;
      if ((param_2 & 8) != 0) {
        uStack_138 = 2;
      }
      if (!bVar7) {
        uStack_138 = uStack_138 | 1;
      }
      if ((param_2 & 0x40) == 0) {
        if (bVar7) {
          iStack_13c = param_4;
          uStack_148 = func_0x0001800ab000(param_6);
        }
        else {
          uStack_148 = 0x27;
          iStack_13c = param_4;
        }
      }
      else {
        uStack_148 = 0;
        iStack_13c = param_4;
      }
      iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x1d78) + 0x40))
                        (*(longlong **)(lVar3 + 0x1d78),puStack_130,&uStack_148,&puStack_110);
      if (iVar2 < 0) {
        FUN_180220810(iVar2,&UNK_180a01940);
        goto LAB_1800a4380;
      }
    }
    *(undefined8 **)(param_8 + 0x10) = puStack_130;
    *(undefined8 **)(param_8 + 0x18) = puStack_118;
    *(undefined8 **)(param_8 + 0x20) = puStack_110;
    puStack_d8 = &UNK_1809fcc28;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = *(undefined4 *)(param_8 + 0x60);
    puVar5 = &DAT_18098bc73;
    if (*(undefined **)(param_8 + 0x58) != (undefined *)0x0) {
      puVar5 = *(undefined **)(param_8 + 0x58);
    }
    strcpy_s(auStack_c0,0x80,puVar5);
    puStack_d8 = &UNK_18098bcb0;
  }
LAB_1800a4380:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a43c0(undefined **param_1,uint *param_2,longlong param_3)
void FUN_1800a43c0(undefined **param_1,uint *param_2,longlong param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ushort uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar21;
  undefined1 auStack_2f8 [32];
  char cStack_2d8;
  char cStack_2d7;
  undefined **ppuStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined8 uStack_2bc;
  undefined8 uStack_2b4;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  uint uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  longlong lStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined4 uStack_260;
  undefined8 uStack_25c;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined1 *puStack_238;
  undefined4 uStack_230;
  undefined1 auStack_228 [128];
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [128];
  undefined1 auStack_110 [152];
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint uStack_50;
  ulonglong uStack_48;
  ulonglong uVar20;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_2f8;
  uVar11 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_3 + 0x108) = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 0x110) = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_3 + 0x118) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_3 + 0x120) = uVar11;
  uVar18 = param_2[9];
  uVar19 = param_2[10];
  uVar9 = param_2[0xb];
  *(uint *)(param_3 + 0x128) = param_2[8];
  *(uint *)(param_3 + 300) = uVar18;
  *(uint *)(param_3 + 0x130) = uVar19;
  *(uint *)(param_3 + 0x134) = uVar9;
  *(undefined8 *)(param_3 + 0x138) = *(undefined8 *)(param_2 + 0xc);
  uVar18 = param_2[1];
  *(short *)(param_3 + 0x32c) = (short)*param_2;
  *(short *)(param_3 + 0x32e) = (short)uVar18;
  *(short *)(param_3 + 0x332) = (short)param_2[2];
  uVar18 = param_2[3];
  *(char *)(param_3 + 0x335) = (char)uVar18;
  *(uint *)(param_3 + 0x35c) = uVar18;
  uVar19 = param_2[4];
  *(uint *)(param_3 + 0x324) = uVar19;
  uVar9 = param_2[10];
  if ((char)uVar9 != '\0') {
    *(uint *)(param_3 + 0x328) = *(uint *)(param_3 + 0x328) | 0x2000;
  }
  cVar1 = (char)param_2[9];
  if (cVar1 != '\0') {
    *(undefined1 *)(param_3 + 0x355) = 1;
  }
  uVar15 = 0;
  uStack_70 = uVar15;
  if (cVar1 == '\0') {
    uStack_70 = uVar18;
  }
  uVar18 = 0xffffffff;
  uVar20 = 0xffffffff;
  if (uStack_70 == 0) {
    uVar4 = uVar20;
    uVar3 = param_2[1];
    if ((int)param_2[1] < (int)*param_2) {
      uVar3 = *param_2;
    }
    for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
      uVar18 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar18;
    }
    uStack_70 = uVar18 + 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uVar3 = *param_2;
  uVar17 = param_2[1];
  uStack_6c = param_2[2];
  ppuStack_2d0 = param_1;
  uStack_78 = uVar3;
  uStack_74 = uVar17;
  uVar7 = func_0x0001800ab000(uVar19);
  ppuVar6 = ppuStack_2d0;
  uVar19 = (uint)uVar20;
  uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uVar7);
  uStack_64 = 1;
  uStack_5c = 0;
  uVar18 = 0x20;
  cStack_2d8 = *(char *)((longlong)param_2 + 0x25);
  if (cStack_2d8 != '\0') {
    uVar18 = 0x28;
  }
  if (cVar1 != '\0') {
    uVar15 = 1;
    uStack_50 = 1;
    if ((int)uVar17 < (int)uVar3) {
      uVar17 = uVar3;
    }
    for (; uVar17 != 0; uVar17 = uVar17 >> 1) {
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
    }
    *(char *)(param_3 + 0x335) = (char)(uVar19 + 1);
    *(uint *)(param_3 + 0x35c) = uVar19 + 1;
    *(undefined1 *)(param_3 + 0x355) = 1;
  }
  if ((char)uVar9 != '\0') {
    uStack_50 = uVar15 | 4;
  }
  cStack_2d7 = *(char *)((longlong)param_2 + 0x26);
  if (cStack_2d7 != '\0') {
    uVar18 = uVar18 | 0x80;
  }
  uStack_58 = CONCAT44(uStack_58._4_4_,uVar18);
  uStack_68 = uVar7;
  iVar8 = (**(code **)(*(longlong *)ppuStack_2d0[0x3af] + 0x28))
                    (ppuStack_2d0[0x3af],&uStack_78,0,&uStack_270);
  if (iVar8 < 0) {
    FUN_180220810(iVar8,&UNK_180a01a28);
  }
  *(undefined8 *)(param_3 + 0x170) = uStack_270;
  ppuStack_2d0 = (undefined **)FUN_180049b30(auStack_110,param_3 + 0x10);
  *ppuStack_2d0 = &UNK_18098bcb0;
  *(longlong *)(param_3 + 0x168) = param_3;
  uVar13 = *(ushort *)(param_3 + 0x332);
  uVar18 = (uint)*(byte *)(param_3 + 0x335);
  if ((int)*(uint *)(param_3 + 0x35c) < (int)(uint)*(byte *)(param_3 + 0x335)) {
    uVar18 = *(uint *)(param_3 + 0x35c);
  }
  uVar18 = uVar18 * uVar13;
  if (uVar18 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar18 << 4,5);
    iVar8 = 0;
    puVar14 = puVar10;
    do {
      *puVar14 = 0;
      puVar14[1] = 0;
      iVar8 = iVar8 + 1;
      puVar14 = puVar14 + 2;
    } while ((ulonglong)(longlong)iVar8 < (ulonglong)uVar18);
    uVar13 = *(ushort *)(param_3 + 0x332);
  }
  uVar18 = 0;
  *(undefined8 **)(param_3 + 0x1d8) = puVar10;
  if (uVar13 != 0) {
    plVar21 = (longlong *)0x0;
    do {
      uVar19 = (uint)*(byte *)(param_3 + 0x335);
      if ((int)*(uint *)(param_3 + 0x35c) < (int)(uint)*(byte *)(param_3 + 0x335)) {
        uVar19 = *(uint *)(param_3 + 0x35c);
      }
      if (0 < (int)uVar19) {
        ppuStack_2d0 = &puStack_240;
        plVar12 = plVar21;
        do {
          uStack_2bc = 0;
          uStack_2b4 = 0;
          uStack_2c0 = 0;
          iVar8 = (int)plVar12;
          if (*(int *)(param_3 + 0x160) == 4) {
            uVar7 = 4;
LAB_1800a46f5:
            uStack_2bc = CONCAT44(iVar8,uVar7);
          }
          else if (*(int *)(param_3 + 0x160) == 6) {
            uVar7 = 5;
            uStack_2b4 = CONCAT44(1,uVar18);
            goto LAB_1800a46f5;
          }
          lStack_278 = 0;
          (**(code **)(*(longlong *)ppuVar6[0x3af] + 0x48))
                    (ppuVar6[0x3af],*(undefined8 *)(param_3 + 0x170),&uStack_2c0,&lStack_278);
          lVar5 = _DAT_180c86870;
          plVar12 = plVar21;
          if (*(longlong *)(param_3 + 0x1d8) != 0) {
            if (_DAT_180c86870 != 0) {
              *(longlong *)(param_3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
            }
            plVar12 = (longlong *)
                      ((longlong)(int)(*(byte *)(param_3 + 0x335) * uVar18 + iVar8) * 0x10 +
                      *(longlong *)(param_3 + 0x1d8));
          }
          plVar12[1] = lStack_278;
          if ((*(longlong *)(param_3 + 0x1d8) != 0) && (lVar5 != 0)) {
            *(longlong *)(param_3 + 0x340) = (longlong)*(int *)(lVar5 + 0x224);
          }
          ppuStack_268 = &puStack_240;
          puStack_240 = &UNK_1809fcc28;
          puStack_238 = auStack_228;
          auStack_228[0] = 0;
          uStack_230 = *(undefined4 *)(param_3 + 0x20);
          puVar16 = &DAT_18098bc73;
          if (*(undefined **)(param_3 + 0x18) != (undefined *)0x0) {
            puVar16 = *(undefined **)(param_3 + 0x18);
          }
          strcpy_s(auStack_228,0x80,puVar16);
          puStack_240 = &UNK_18098bcb0;
          plVar12 = plVar21;
          if (*(longlong *)(param_3 + 0x1d8) != 0) {
            if (_DAT_180c86870 != 0) {
              *(longlong *)(param_3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
            }
            plVar12 = (longlong *)
                      ((longlong)(int)(*(byte *)(param_3 + 0x335) * uVar18 + iVar8) * 0x10 +
                      *(longlong *)(param_3 + 0x1d8));
          }
          *plVar12 = param_3;
          plVar12 = (longlong *)(ulonglong)(iVar8 + 1U);
          uVar19 = (uint)*(byte *)(param_3 + 0x335);
          if ((int)*(uint *)(param_3 + 0x35c) < (int)(uint)*(byte *)(param_3 + 0x335)) {
            uVar19 = *(uint *)(param_3 + 0x35c);
          }
        } while ((int)(iVar8 + 1U) < (int)uVar19);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(ushort *)(param_3 + 0x332));
    uVar7 = (undefined4)uStack_2c8;
  }
  uVar11 = 0;
  if (cStack_2d8 != '\0') {
    uVar13 = *(ushort *)(param_3 + 0x332);
    uVar19 = (uint)*(byte *)(param_3 + 0x335);
    uVar18 = *(uint *)(param_3 + 0x35c);
    uVar9 = uVar19;
    if ((int)uVar18 < (int)(uint)*(byte *)(param_3 + 0x335)) {
      uVar9 = uVar18;
    }
    if (uVar9 * uVar13 != 0) {
      uVar11 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)(uVar9 * uVar13) * 8,
                             CONCAT71((uint7)(byte)(uVar13 >> 8),3));
      uVar19 = (uint)*(byte *)(param_3 + 0x335);
      uVar18 = *(uint *)(param_3 + 0x35c);
      uVar13 = *(ushort *)(param_3 + 0x332);
    }
    *(undefined8 *)(param_3 + 0x180) = uVar11;
    if ((int)uVar18 < (int)uVar19) {
      uVar19 = uVar18;
    }
    *(uint *)(param_3 + 0x188) = uVar19 * uVar13;
    (**(code **)(*(longlong *)ppuVar6[0x3af] + 0x38))
              (ppuVar6[0x3af],*(undefined8 *)(param_3 + 0x170),0,param_3 + 0x178);
    uVar18 = 0;
    if (*(short *)(param_3 + 0x332) != 0) {
      do {
        iVar8 = 0;
        uVar15 = (uint)*(byte *)(param_3 + 0x335);
        uVar19 = *(uint *)(param_3 + 0x35c);
        uVar9 = uVar15;
        if ((int)uVar19 < (int)(uint)*(byte *)(param_3 + 0x335)) {
          uVar9 = uVar19;
        }
        if (0 < (int)uVar9) {
          do {
            if ((int)uVar19 < (int)uVar15) {
              uVar15 = uVar19;
            }
            uStack_2c8 = 0;
            uStack_284 = 1;
            if (*(short *)(param_3 + 0x332) == 1) {
              uStack_28c = 4;
            }
            else {
              uStack_28c = 5;
              uStack_27c = 1;
              uStack_280 = uVar18;
            }
            uStack_290 = uVar7;
            iStack_288 = iVar8;
            (**(code **)(*(longlong *)ppuVar6[0x3af] + 0x38))
                      (ppuVar6[0x3af],*(undefined8 *)(param_3 + 0x170),&uStack_290,&uStack_2c8);
            *(undefined8 *)
             (*(longlong *)(param_3 + 0x180) + (longlong)(int)(uVar15 * uVar18 + iVar8) * 8) =
                 uStack_2c8;
            iVar8 = iVar8 + 1;
            bVar2 = *(byte *)(param_3 + 0x335);
            uVar19 = *(uint *)(param_3 + 0x35c);
            uVar15 = (uint)bVar2;
            uVar9 = (uint)bVar2;
            if ((int)uVar19 < (int)(uint)bVar2) {
              uVar9 = uVar19;
            }
          } while (iVar8 < (int)uVar9);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(ushort *)(param_3 + 0x332));
    }
  }
  if (cStack_2d7 != '\0') {
    uVar13 = *(ushort *)(param_3 + 0x332);
    uVar19 = (uint)*(byte *)(param_3 + 0x335);
    uVar18 = *(uint *)(param_3 + 0x35c);
    uVar9 = uVar19;
    if ((int)uVar18 < (int)(uint)*(byte *)(param_3 + 0x335)) {
      uVar9 = uVar18;
    }
    if (uVar9 * uVar13 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)(uVar9 * uVar13) * 8,
                             CONCAT71((uint7)(byte)(uVar13 >> 8),3));
      uVar19 = (uint)*(byte *)(param_3 + 0x335);
      uVar18 = *(uint *)(param_3 + 0x35c);
      uVar13 = *(ushort *)(param_3 + 0x332);
    }
    *(undefined8 *)(param_3 + 0x210) = uVar11;
    if ((int)uVar18 < (int)uVar19) {
      uVar19 = uVar18;
    }
    *(uint *)(param_3 + 0x218) = uVar19 * uVar13;
    uStack_25c = 4;
    uStack_260 = uVar7;
    (**(code **)(*(longlong *)ppuVar6[0x3af] + 0x40))
              (ppuVar6[0x3af],*(undefined8 *)(param_3 + 0x170),&uStack_260,param_3 + 0x208);
    *(longlong *)(param_3 + 0x200) = param_3;
    uVar18 = 0;
    if (*(short *)(param_3 + 0x332) != 0) {
      do {
        iVar8 = 0;
        uVar15 = (uint)*(byte *)(param_3 + 0x335);
        uVar19 = *(uint *)(param_3 + 0x35c);
        uVar9 = uVar15;
        if ((int)uVar19 < (int)(uint)*(byte *)(param_3 + 0x335)) {
          uVar9 = uVar19;
        }
        if (0 < (int)uVar9) {
          do {
            if ((int)uVar19 < (int)uVar15) {
              uVar15 = uVar19;
            }
            ppuStack_2d0 = (undefined **)0x0;
            if (*(short *)(param_3 + 0x332) == 1) {
              uStack_2a4 = 4;
            }
            else {
              uStack_2a4 = 5;
              uStack_298 = 1;
              uStack_29c = uVar18;
            }
            uStack_2a8 = uVar7;
            iStack_2a0 = iVar8;
            (**(code **)(*(longlong *)ppuVar6[0x3af] + 0x40))
                      (ppuVar6[0x3af],*(undefined8 *)(param_3 + 0x170),&uStack_2a8,&ppuStack_2d0);
            *(undefined ***)
             (*(longlong *)(param_3 + 0x210) + (longlong)(int)(uVar15 * uVar18 + iVar8) * 8) =
                 ppuStack_2d0;
            iVar8 = iVar8 + 1;
            bVar2 = *(byte *)(param_3 + 0x335);
            uVar19 = *(uint *)(param_3 + 0x35c);
            uVar15 = (uint)bVar2;
            uVar9 = (uint)bVar2;
            if ((int)uVar19 < (int)(uint)bVar2) {
              uVar9 = uVar19;
            }
          } while (iVar8 < (int)uVar9);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(ushort *)(param_3 + 0x332));
    }
  }
  FUN_18023ce10(param_3);
  LOCK();
  _DAT_180d48d28 = 0;
  UNLOCK();
  *(longlong *)(param_3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
  LOCK();
  *(undefined4 *)(param_3 + 0x380) = 2;
  UNLOCK();
  LOCK();
  *(undefined1 *)(param_3 + 900) = 1;
  UNLOCK();
  FUN_18023a940(param_3);
  ppuStack_268 = &puStack_1a8;
  puStack_1a8 = &UNK_1809fcc28;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = *(undefined4 *)(param_3 + 0x20);
  puVar16 = &DAT_18098bc73;
  if (*(undefined **)(param_3 + 0x18) != (undefined *)0x0) {
    puVar16 = *(undefined **)(param_3 + 0x18);
  }
  strcpy_s(auStack_190,0x80,puVar16);
  ppuStack_2d0 = &puStack_1a8;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_2f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




