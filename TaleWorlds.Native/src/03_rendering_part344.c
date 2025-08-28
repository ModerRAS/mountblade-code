#include "TaleWorlds.Native.Split.h"

// 03_rendering_part344.c - 13 个函数

// 函数: void FUN_1804508a0(longlong param_1)
void FUN_1804508a0(longlong param_1)

{
  int iVar1;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = 0xfffffffffffffffe;
    FUN_1803986d0(param_1 + 0x607e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0xffffffff;
    uStack_58 = 1;
    uStack_56 = 0;
    uStack_54 = 0xffffffff;
    uStack_50 = 1;
    uStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 3;
    uStack_20 = 0;
    FUN_1801a3620(param_1,&uStack_68);
    FUN_1800b6620();
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0xffffffff;
    uStack_a6 = 0;
    uStack_a4 = 0xffffffff;
    uStack_a0 = 1;
    uStack_98 = 0;
    lStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 3;
    uStack_70 = 0;
    uStack_a8 = 1;
    do {
      iVar1 = FUN_1801a3620(param_1,&uStack_b8);
    } while (iVar1 != 0);
    if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_1804509e0(undefined8 param_1,undefined8 param_2)
void FUN_1804509e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStackX_8 [4];
  
  auStackX_8[0] = param_2;
  FUN_1801a9fd0(param_1,auStackX_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180450a20(longlong param_1,longlong param_2)
void FUN_180450a20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  plVar6 = *(longlong **)(param_1 + 0x60858);
  if (plVar6 != *(longlong **)(param_1 + 0x60860)) {
    do {
      plVar1 = (longlong *)*plVar6;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = (longlong *)0x0;
      plVar5 = *(longlong **)(param_2 + 0x18);
      if (plVar5 < *(longlong **)(param_2 + 0x20)) {
        *(longlong **)(param_2 + 0x18) = plVar5 + 1;
        *plVar5 = (longlong)plVar1;
      }
      else {
        plVar3 = *(longlong **)(param_2 + 0x10);
        lVar4 = (longlong)plVar5 - (longlong)plVar3 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_180450ac1:
          plVar2 = (longlong *)
                   FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,*(undefined1 *)(param_2 + 0x28),0,uVar8);
          plVar5 = *(longlong **)(param_2 + 0x18);
          plVar3 = *(longlong **)(param_2 + 0x10);
          plVar7 = plVar2;
        }
        else {
          lVar4 = lVar4 * 2;
          plVar7 = plVar2;
          if (lVar4 != 0) goto LAB_180450ac1;
        }
        for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
          *plVar2 = *plVar3;
          *plVar3 = 0;
          plVar2 = plVar2 + 1;
        }
        *plVar2 = (longlong)plVar1;
        plVar1 = *(longlong **)(param_2 + 0x18);
        plVar5 = *(longlong **)(param_2 + 0x10);
        if (plVar5 != plVar1) {
          do {
            if ((longlong *)*plVar5 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar5 + 0x38))();
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
          plVar5 = *(longlong **)(param_2 + 0x10);
        }
        if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar5);
        }
        *(longlong **)(param_2 + 0x10) = plVar7;
        *(longlong **)(param_2 + 0x18) = plVar2 + 1;
        *(longlong **)(param_2 + 0x20) = plVar7 + lVar4;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != *(longlong **)(param_1 + 0x60860));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180450ba0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180450ba0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plStack_60;
  ulonglong uStack_58;
  longlong *plStack_48;
  
  FUN_1801c2360(param_1 + 0x60830,&plStack_60,param_3,param_4,0xfffffffffffffffe);
  uVar8 = uStack_58;
  plVar11 = plStack_48;
  do {
    if (uVar8 == *(ulonglong *)(param_1 + 0x60838)) {
      return;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    puVar2 = (undefined8 *)0x0;
    puVar9 = *(undefined8 **)(param_2 + 0x18);
    if (puVar9 < *(undefined8 **)(param_2 + 0x20)) {
      *(undefined8 **)(param_2 + 0x18) = puVar9 + 1;
      *puVar9 = plVar11;
    }
    else {
      puVar3 = *(undefined8 **)(param_2 + 0x10);
      lVar6 = (longlong)puVar9 - (longlong)puVar3 >> 3;
      if (lVar6 == 0) {
        lVar6 = 1;
LAB_180450c6c:
        puVar2 = (undefined8 *)
                 FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,*(undefined1 *)(param_2 + 0x28));
        puVar9 = *(undefined8 **)(param_2 + 0x18);
        puVar3 = *(undefined8 **)(param_2 + 0x10);
        puVar10 = puVar2;
      }
      else {
        lVar6 = lVar6 * 2;
        puVar10 = puVar2;
        if (lVar6 != 0) goto LAB_180450c6c;
      }
      for (; puVar3 != puVar9; puVar3 = puVar3 + 1) {
        *puVar2 = *puVar3;
        *puVar3 = 0;
        puVar2 = puVar2 + 1;
      }
      *puVar2 = plVar11;
      plVar1 = *(longlong **)(param_2 + 0x18);
      plVar7 = *(longlong **)(param_2 + 0x10);
      if (plVar7 != plVar1) {
        do {
          if ((longlong *)*plVar7 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar7 + 0x38))();
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
        plVar7 = *(longlong **)(param_2 + 0x10);
      }
      if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar7);
      }
      *(undefined8 **)(param_2 + 0x10) = puVar10;
      *(undefined8 **)(param_2 + 0x18) = puVar2 + 1;
      *(undefined8 **)(param_2 + 0x20) = puVar10 + lVar6;
    }
    lVar6 = *plStack_60;
    do {
      uVar8 = uVar8 + 1;
      lVar4 = (uVar8 & 0xffffffff) * 0x10;
      lVar5 = lVar4 + 8 + lVar6;
      if ((*(ulonglong *)(lVar4 + lVar6) & 0xffffffff00000000) == 0) {
        lVar5 = 0;
      }
      if (lVar5 != 0) {
        plVar11 = *(longlong **)(lVar6 + 8 + (uVar8 & 0xffffffff) * 0x10);
        break;
      }
    } while (uVar8 != plStack_60[1]);
  } while( true );
}





// 函数: void FUN_180450d90(void)
void FUN_180450d90(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



undefined8 FUN_180450f10(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x38)) &&
     (lVar3 = *(longlong *)(param_2 + 0x10), lVar3 != 0)) {
    if (((*(uint *)(param_1 + 0xc) & *(uint *)(param_2 + 0x18)) == 0) &&
       ((*(char *)(param_1 + 0x10) == '\0' || (*(uint *)(param_2 + 0x18) != 0)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) && ((*(byte *)(lVar3 + 0x2e8) & 0xb) == 0xb)) {
      lVar11 = *(longlong *)(lVar3 + 0x200);
      iVar9 = 0;
      if (*(longlong *)(lVar3 + 0x208) - lVar11 >> 3 != 0) {
        lVar10 = 0;
        do {
          pcVar4 = *(char **)(*(longlong *)(lVar10 + lVar11) + 0x10);
          if (*pcVar4 != '\0') {
            iVar2 = *(int *)(pcVar4 + 0x18);
            iVar8 = *(int *)(param_1 + 0x28);
            if (iVar2 == iVar8) {
              if (iVar2 != 0) {
                pbVar7 = *(byte **)(pcVar4 + 0x10);
                lVar11 = *(longlong *)(param_1 + 0x20) - (longlong)pbVar7;
                do {
                  pbVar1 = pbVar7 + lVar11;
                  iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
                  if (iVar8 != 0) break;
                  pbVar7 = pbVar7 + 1;
                } while (*pbVar1 != 0);
              }
LAB_180450fed:
              if (iVar8 == 0) goto LAB_18045103e;
            }
            else if (iVar2 == 0) goto LAB_180450fed;
            cVar6 = FUN_180063510(pcVar4 + 0x28,param_1 + 0x18);
            if (cVar6 != '\0') {
LAB_18045103e:
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
              return 1;
            }
          }
          lVar11 = *(longlong *)(lVar3 + 0x200);
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 8;
        } while ((ulonglong)(longlong)iVar9 <
                 (ulonglong)(*(longlong *)(lVar3 + 0x208) - lVar11 >> 3));
      }
    }
  }
  return 0;
}





// 函数: void FUN_180451050(longlong param_1)
void FUN_180451050(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_1804510a0(void)
void FUN_1804510a0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_1804511e0(void)
void FUN_1804511e0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804512f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804512f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_1e8 [32];
  int iStack_1c8;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  uint uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  uint uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  longlong lStack_168;
  int iStack_160;
  undefined4 uStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  longlong lStack_138;
  int iStack_130;
  undefined4 uStack_128;
  undefined *puStack_120;
  longlong lStack_118;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [136];
  ulonglong uStack_58;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  puVar8 = (undefined1 *)0x0;
  uVar11 = 0;
  uStack_198 = 0;
  puStack_f8 = &UNK_1809fcc28;
  puStack_f0 = auStack_e0;
  uStack_e8 = 0;
  auStack_e0[0] = 0;
  lStack_150 = param_1;
  uStack_148 = param_3;
  if (param_2 != 0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(param_2 + lVar7) != '\0');
    uStack_e8 = (undefined4)lVar7;
    strcpy_s(auStack_e0,0x80,param_2);
  }
  FUN_18019e140(&puStack_170,&puStack_f8);
  puStack_f8 = &UNK_18098bcb0;
  puStack_190 = &UNK_180a3c3e0;
  uStack_178 = 0;
  puStack_188 = (undefined1 *)0x0;
  uStack_180 = 0;
  FUN_180627910(&puStack_120,param_2);
  lVar7 = *_DAT_180c86870;
  iVar4 = FUN_1801426a0(lVar7,&puStack_120);
  if (iVar4 < 0) {
LAB_180451418:
    lVar7 = FUN_180628ca0();
  }
  else {
    if ((ulonglong)(*(longlong *)(lVar7 + 0x890) - *(longlong *)(lVar7 + 0x888) >> 5) <=
        (ulonglong)(longlong)iVar4) goto LAB_180451418;
    lVar7 = (longlong)iVar4 * 0x20 + *(longlong *)(lVar7 + 0x888);
  }
  puStack_1b8 = &UNK_180a3c3e0;
  uStack_1a0 = 0;
  puStack_1b0 = (undefined1 *)0x0;
  uStack_1a8 = 0;
  uStack_198 = 1;
  uVar2 = *(uint *)(lVar7 + 0x10);
  uVar14 = (ulonglong)uVar2;
  uVar5 = 0;
  if (*(longlong *)(lVar7 + 8) == 0) {
LAB_180451498:
    uVar11 = uVar5;
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar8,*(undefined8 *)(lVar7 + 8),uVar14);
    }
  }
  else if (uVar2 != 0) {
    iVar4 = uVar2 + 1;
    if ((int)(uVar2 + 1) < 0x10) {
      iVar4 = 0x10;
    }
    puVar8 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x13);
    *puVar8 = 0;
    puStack_1b0 = puVar8;
    uVar5 = FUN_18064e990(puVar8);
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar5);
    goto LAB_180451498;
  }
  if (puVar8 != (undefined1 *)0x0) {
    puVar8[uVar14] = 0;
  }
  uStack_1a0 = CONCAT44(*(uint *)(lVar7 + 0x1c),(undefined4)uStack_1a0);
  if (iStack_160 < 1) {
    uVar14 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0;
    puStack_1b0 = (undefined1 *)0x0;
    uStack_1a0 = 0;
    puStack_1b8 = &UNK_18098bcb0;
    puStack_188 = puVar8;
    uStack_180 = uVar2;
    uStack_178._0_4_ = uVar11;
    uStack_178._4_4_ = *(uint *)(lVar7 + 0x1c);
    FUN_180627910(&puStack_140,param_4);
    lVar7 = lStack_150;
    if (0 < iStack_130) {
      iVar4 = (int)((*(longlong *)(_DAT_180c8a9f8 + 0x3a8) - *(longlong *)(_DAT_180c8a9f8 + 0x3a0))
                   / 0x348);
      if (0 < iVar4) {
        puVar13 = (undefined8 *)(*(longlong *)(_DAT_180c8a9f8 + 0x3a0) + 0x10);
        uVar15 = uVar14;
        do {
          iVar3 = *(int *)(puVar13 + 1);
          iStack_1c8 = (int)uVar15;
          iVar10 = iStack_130;
          if (iVar3 == iStack_130) {
            if (iVar3 != 0) {
              pbVar9 = (byte *)*puVar13;
              lVar12 = lStack_138 - (longlong)pbVar9;
              do {
                pbVar1 = pbVar9 + lVar12;
                iVar10 = (uint)*pbVar9 - (uint)*pbVar1;
                if (iVar10 != 0) break;
                pbVar9 = pbVar9 + 1;
              } while (*pbVar1 != 0);
            }
LAB_18045165d:
            if (iVar10 == 0) goto LAB_18045167c;
          }
          else if (iVar3 == 0) goto LAB_18045165d;
          uVar15 = (ulonglong)(iStack_1c8 + 1);
          uVar14 = uVar14 + 1;
          puVar13 = puVar13 + 0x69;
        } while ((longlong)uVar14 < (longlong)iVar4);
      }
    }
    iStack_1c8 = -1;
LAB_18045167c:
    *(undefined1 *)(lStack_150 + 0x607d0) = 1;
    FUN_1801a6440(lStack_150,_DAT_180c868e8,&puStack_190,uStack_148);
    *(undefined1 *)(lVar7 + 0x607d0) = 0;
    FUN_18019e260(lVar7);
    FUN_1801b3e70(lVar7);
    puStack_140 = &UNK_180a3c3e0;
    if (lStack_138 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_138 = 0;
    uStack_128 = 0;
    puStack_140 = &UNK_18098bcb0;
    puStack_120 = &UNK_180a3c3e0;
    if (lStack_118 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_118 = 0;
    uStack_108 = 0;
    puStack_120 = &UNK_18098bcb0;
    puStack_190 = &UNK_180a3c3e0;
    if (puStack_188 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_188 = (undefined1 *)0x0;
    uStack_178 = (ulonglong)uStack_178._4_4_ << 0x20;
    puStack_190 = &UNK_18098bcb0;
    puStack_170 = &UNK_180a3c3e0;
    if (lStack_168 == 0) {
      lStack_168 = 0;
      uStack_158 = 0;
      puStack_170 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_1e8);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  iVar4 = uVar2 + iStack_160;
  uStack_1a8 = uVar2;
  if (iVar4 != 0) {
    if (puVar8 == (undefined1 *)0x0) {
      iVar4 = iVar4 + 1;
      if (iVar4 < 0x10) {
        iVar4 = 0x10;
      }
      puVar8 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x13);
      *puVar8 = 0;
    }
    else {
      if (iVar4 + 1U <= uVar11) goto LAB_180451541;
      iStack_1c8 = CONCAT31(iStack_1c8._1_3_,0x13);
      puVar8 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar8,iVar4 + 1U,0x10);
    }
    puStack_1b0 = puVar8;
    uVar6 = FUN_18064e990(puVar8);
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar6);
  }
LAB_180451541:
                    // WARNING: Subroutine does not return
  memcpy(puVar8 + uVar14,lStack_168,(longlong)(iStack_160 + 1));
}





// 函数: void FUN_180451770(undefined4 param_1,undefined8 *param_2)
void FUN_180451770(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [64];
  
  puVar2 = (undefined8 *)FUN_1801ac640(param_1,auStack_48);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  uVar1 = puVar2[3];
  param_2[2] = puVar2[2];
  param_2[3] = uVar1;
  uVar1 = puVar2[5];
  param_2[4] = puVar2[4];
  param_2[5] = uVar1;
  uVar1 = puVar2[7];
  param_2[6] = puVar2[6];
  param_2[7] = uVar1;
  return;
}



undefined8 FUN_1804517c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uStackX_8;
  int iStackX_20;
  int iStackX_24;
  float fStack_18;
  float fStack_14;
  undefined8 uStack_10;
  undefined8 extraout_XMM0_Qb;
  
  lVar1 = *(longlong *)(param_1 + 0x2908);
  if (lVar1 == 0) {
    return 0;
  }
  uStack_10 = param_2;
  if (*(char *)(lVar1 + 0x68) != '\0') {
    fVar5 = 1.0 / *(float *)(lVar1 + 0x58);
    fStack_14 = (float)((ulonglong)param_2 >> 0x20);
    fStack_18 = (float)param_2;
    auVar3._0_8_ = (**(code **)(**(longlong **)(lVar1 + 0x50) + 8))
                             (*(longlong **)(lVar1 + 0x50),
                              fVar5 * fStack_14 * (float)*(int *)(lVar1 + 0x60),
                              fVar5 * fStack_18 * (float)*(int *)(lVar1 + 0x60));
    auVar3._8_8_ = extraout_XMM0_Qb;
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = (float)auVar3._0_8_ + *(float *)(lVar1 + 0x5c);
    return auVar4._0_8_;
  }
  uStackX_8 = 0;
  lVar1 = FUN_1803a5130(lVar1,&uStack_10,&iStackX_20,&uStackX_8);
                    // WARNING: Could not recover jumptable at 0x000180451874. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x60) + 8))
                    (*(longlong **)(lVar1 + 0x60),(float)iStackX_24 + uStackX_8._4_4_,
                     (float)iStackX_20 + (float)uStackX_8);
  return uVar2;
}



undefined8 * FUN_180451890(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 auStackX_8 [4];
  undefined1 auStack_18 [16];
  
  if (*(longlong *)(param_2 + 0x2908) != 0) {
    auStackX_8[0] = param_3;
    puVar2 = (undefined8 *)FUN_1803a5440(*(longlong *)(param_2 + 0x2908),auStack_18,auStackX_8,0);
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804519d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)
void FUN_1804519d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 in_R9;
  undefined1 auStackX_8 [8];
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined *puStack_80;
  longlong lStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  longlong lStack_58;
  
  if (param_1 != 0) {
    uVar7 = 0xfffffffffffffffe;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    if (lVar3 != 0) {
      uVar4 = FUN_180627910(&puStack_80,param_2,param_3,in_R9,auStackX_8,0xfffffffffffffffe);
      uVar4 = FUN_1800b08e0(_DAT_180c86930,auStackX_8,uVar4,1);
      FUN_1803aef00(param_1 + 0x3018,uVar4);
      puStack_80 = &UNK_180a3c3e0;
      if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_78 = 0;
      uStack_68 = (code *)((ulonglong)uStack_68._4_4_ << 0x20);
      puStack_80 = &UNK_18098bcb0;
    }
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_3 + lVar3) != '\0');
    if (lVar3 != 0) {
      uVar4 = FUN_180627910(&puStack_60,param_3);
      plVar5 = (longlong *)FUN_1800b08e0(_DAT_180c86930,auStackX_8,uVar4,1);
      plVar2 = (longlong *)*plVar5;
      plVar8 = plVar5;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar6 = *(longlong **)(param_1 + 0x3190);
      *(longlong **)(param_1 + 0x3190) = plVar2;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
      }
      if (*(longlong *)(param_1 + 0x3190) != 0) {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x3190) + 0x328);
        *puVar1 = *puVar1 | 0x20000000;
        puStack_80 = (undefined *)0x0;
        lStack_78 = 0;
        pcStack_70 = (code *)0x0;
        uStack_68 = _guard_check_icall;
        FUN_18023c450(*(undefined8 *)(param_1 + 0x3190),0,0xffffffff,&puStack_80,plVar6,uVar7,plVar8
                     );
        if (pcStack_70 != (code *)0x0) {
          (*pcStack_70)(&puStack_80,0,0);
        }
      }
      *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x38))();
      }
      puStack_60 = &UNK_180a3c3e0;
      if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    *(undefined4 *)(param_1 + 0x3198) = param_4;
    *(uint *)(param_1 + 0x3324) = *(uint *)(param_1 + 0x3324) & 0xfffffffb;
    *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
  }
  return;
}





// 函数: void FUN_180451bd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180451bd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  
  if (param_1 != 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 1;
    uStack_46 = 0;
    uStack_44 = 0xffffffff;
    uStack_40 = 1;
    uStack_38 = 0;
    lStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 3;
    uStack_10 = 0;
    FUN_1801a3620(0,&uStack_58,param_3,param_4,0xfffffffffffffffe);
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



undefined4 FUN_180451ca0(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  char cStack_24;
  
  if (param_1 != 0) {
    uStack_48 = 0;
    uStack_40 = 0x7f7fffff3f800000;
    uStack_38 = 0;
    uStack_30 = 0;
    cStack_24 = '\0';
    uStack_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    uStack_28 = 0;
    FUN_1801aa0f0(uStack_68,&uStack_68,0,auStack_58,param_3,1);
    uVar1 = 0;
    if (cStack_24 != '\0') {
      uVar1 = uStack_28;
    }
    return uVar1;
  }
  return 0;
}



undefined4 FUN_180451cc5(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong in_RAX;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 unaff_XMM6_Da;
  undefined4 uVar4;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStack0000000000000070;
  char cStack0000000000000074;
  
  *(undefined4 *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(int *)(in_RAX + -0x38) = (int)param_1;
  *(int *)(in_RAX + -0x34) = (int)((ulonglong)param_1 >> 0x20);
  *(undefined4 *)(in_RAX + -0x30) = in_XMM0_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = in_XMM0_Dd;
  *(undefined1 *)(in_RAX + -0x24) = 0;
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_RAX + -0x28) = 0;
  *(undefined4 *)(in_RAX + -0x78) = param_3;
  *(undefined4 *)(in_RAX + -0x68) = uVar4;
  *(undefined4 *)(in_RAX + -100) = uVar1;
  *(undefined4 *)(in_RAX + -0x60) = uVar2;
  *(undefined4 *)(in_RAX + -0x5c) = uVar3;
  FUN_1801aa0f0(uVar4,in_RAX + -0x68,0);
  uVar4 = 0;
  if (cStack0000000000000074 != '\0') {
    uVar4 = uStack0000000000000070;
  }
  return uVar4;
}



undefined8 FUN_180451d13(void)

{
  return 0;
}



undefined4
FUN_180451d20(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (param_1 != 0) {
    uStack_38 = 0;
    uStack_30 = 0x7f7fffff3f800000;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_14 = 0;
    uStack_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    uStack_18 = 0;
    FUN_1801aa0f0(uStack_58,&uStack_58,0,auStack_48,param_4,1);
    *param_3 = uStack_38;
    param_3[1] = uStack_30;
    return uStack_18;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180451da0(longlong param_1,undefined4 *param_2,undefined4 *param_3)
void FUN_180451da0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined1 *puStack_a8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_68 [64];
  undefined4 uStack_28;
  ulonglong uStack_18;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_28 = 0;
  if (param_1 != 0) {
    uStack_90 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    uStack_84 = param_3[3];
    uStack_80 = *param_2;
    uStack_7c = param_2[1];
    uStack_78 = param_2[2];
    uStack_74 = param_2[3];
    puStack_a8 = auStack_68;
    FUN_1801ab110(uStack_90,&uStack_80,&uStack_90);
  }
  uStack_28 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



