#include "TaleWorlds.Native.Split.h"

// 99_part_01_part007.c - 2 个函数

// 函数: void FUN_1800a4c50(undefined **param_1,undefined4 *param_2,longlong param_3)
void FUN_1800a4c50(undefined **param_1,undefined4 *param_2,longlong param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined *puVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 auStack_1a8 [32];
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  uint auStack_150 [6];
  longlong lStack_138;
  undefined8 uStack_130;
  uint auStack_128 [6];
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulonglong uStack_40;
  
  uStack_110 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_3 + 0x140) = *param_2;
  *(undefined4 *)(param_3 + 0x144) = uVar2;
  *(undefined4 *)(param_3 + 0x148) = uVar3;
  *(undefined4 *)(param_3 + 0x14c) = uVar4;
  *(undefined8 *)(param_3 + 0x150) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_3 + 0x158) = param_2[6];
  uVar1 = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)(param_3 + 0x32c) = *(undefined2 *)param_2;
  *(undefined2 *)(param_3 + 0x32e) = uVar1;
  *(undefined2 *)(param_3 + 0x332) = *(undefined2 *)(param_2 + 2);
  uVar14 = param_2[3];
  *(uint *)(param_3 + 0x324) = uVar14;
  uStack_17c = param_2[2];
  uVar12 = uStack_17c * 2;
  uStack_180 = uVar14;
  ppuStack_178 = param_1;
  ppuStack_170 = (undefined **)param_2;
  if (uVar12 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar12 << 4,3);
    iVar6 = 0;
    puVar9 = puVar7;
    do {
      *puVar9 = 0;
      puVar9[1] = 0;
      iVar6 = iVar6 + 1;
      puVar9 = puVar9 + 2;
    } while ((ulonglong)(longlong)iVar6 < (ulonglong)uVar12);
  }
  plVar10 = (longlong *)0x0;
  *(undefined8 **)(param_3 + 0x1e0) = puVar7;
  if (uVar14 == 0x17) {
    uStack_188 = 0x2f;
  }
  else {
    if (uVar14 != 0x18) {
      if (uVar14 == 0x19) {
        uStack_60 = 0x35;
        uVar14 = 0x37;
        uStack_184 = 0x38;
        uStack_188 = 0;
      }
      else if (uVar14 == 0x1a) {
        uStack_60 = 0x27;
        uVar14 = 0x28;
        uStack_184 = 0x29;
        uStack_188 = 0;
      }
      else if (uVar14 == 0x2f) {
        uStack_188 = 0x16;
        uStack_184 = 0x15;
        uStack_60 = 0x13;
        uVar14 = 0x14;
      }
      else {
        uStack_188 = uStack_180;
        uStack_184 = uStack_180;
        uStack_60 = uStack_180;
        uVar14 = uStack_180;
      }
      goto LAB_1800a4de0;
    }
    uStack_188 = 0;
  }
  uStack_184 = 0x2e;
  uVar14 = 0x2d;
  uStack_60 = 0x2c;
LAB_1800a4de0:
  uStack_70 = *(undefined4 *)ppuStack_170;
  uStack_6c = *(undefined4 *)((longlong)ppuStack_170 + 4);
  uStack_68 = 1;
  uStack_5c = 1;
  uStack_54 = 0;
  uStack_50 = 0x48;
  uStack_48 = 0;
  uStack_64 = uStack_17c;
  iVar6 = (**(code **)(**(longlong **)((longlong)param_1 + 0x1d78) + 0x28))
                    (*(longlong **)((longlong)param_1 + 0x1d78),&uStack_70,0,&uStack_130);
  if (iVar6 < 0) {
    FUN_180220810(iVar6,&UNK_180a019f8);
  }
  *(undefined8 *)(param_3 + 0x170) = uStack_130;
  *(longlong *)(param_3 + 0x168) = param_3;
  plVar8 = plVar10;
  plVar16 = plVar10;
  plVar13 = plVar10;
  if (uStack_17c != 0) {
    do {
      do {
        uStack_158 = 0;
        uStack_168 = (ulonglong)uVar14;
        if (*(int *)(param_3 + 0x160) == 3) {
          uStack_168 = CONCAT44(3,uVar14);
        }
        else if (*(int *)(param_3 + 0x160) == 5) {
          uStack_168 = CONCAT44(4,uVar14);
          uStack_158 = CONCAT44(1,(int)plVar13);
        }
        uStack_160 = 0;
        iVar6 = (int)plVar8;
        if (iVar6 == 0) {
          uVar12 = 1;
          if (uStack_188 != 0) {
            uVar12 = 3;
          }
          uStack_160 = (ulonglong)uVar12;
        }
        lStack_138 = 0;
        (**(code **)(**(longlong **)((longlong)ppuStack_178 + 0x1d78) + 0x50))
                  (*(longlong **)((longlong)ppuStack_178 + 0x1d78),*(undefined8 *)(param_3 + 0x170),
                   &uStack_168,&lStack_138);
        lVar5 = _DAT_180c86870;
        iVar15 = (int)plVar16;
        plVar8 = plVar10;
        if (*(longlong *)(param_3 + 0x1e0) != 0) {
          if (_DAT_180c86870 != 0) {
            *(longlong *)(param_3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
          }
          plVar8 = (longlong *)((longlong)(iVar15 + iVar6) * 0x10 + *(longlong *)(param_3 + 0x1e0));
        }
        plVar8[1] = lStack_138;
        plVar8 = plVar10;
        if (*(longlong *)(param_3 + 0x1e0) != 0) {
          if (lVar5 != 0) {
            *(longlong *)(param_3 + 0x340) = (longlong)*(int *)(lVar5 + 0x224);
            *(longlong *)(param_3 + 0x340) = (longlong)*(int *)(lVar5 + 0x224);
          }
          plVar8 = (longlong *)((longlong)(iVar15 + iVar6) * 0x10 + *(longlong *)(param_3 + 0x1e0));
        }
        *plVar8 = param_3;
        plVar8 = (longlong *)(ulonglong)(iVar6 + 1U);
      } while ((int)(iVar6 + 1U) < 2);
      uVar12 = (int)plVar13 + 1;
      plVar8 = plVar10;
      param_1 = ppuStack_178;
      plVar16 = (longlong *)(ulonglong)(iVar15 + 2);
      plVar13 = (longlong *)(ulonglong)uVar12;
    } while (uVar12 < uStack_17c);
  }
  auStack_150[0] = uStack_184;
  if (*(int *)(param_3 + 0x160) == 5) {
    auStack_150[1] = 5;
    auStack_150[2] = 0;
    auStack_150[3] = 0xffffffff;
    auStack_150[4] = 0;
    auStack_150[5] = uStack_17c;
  }
  else {
    auStack_150[1] = 4;
    auStack_150[2] = 0;
    auStack_150[3] = 1;
  }
  if (*(char *)((longlong)ppuStack_170 + 0x15) != '\0') {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x1d78) + 0x38))
              (*(longlong **)((longlong)param_1 + 0x1d78),*(undefined8 *)(param_3 + 0x170),
               auStack_150,param_3 + 0x178);
  }
  if (uStack_188 != 0) {
    auStack_128[1] = 4;
    auStack_128[2] = 0;
    auStack_128[0] = uStack_188;
    auStack_128[3] = 1;
    (**(code **)(**(longlong **)((longlong)param_1 + 0x1d78) + 0x38))
              (*(longlong **)((longlong)param_1 + 0x1d78),*(undefined8 *)(param_3 + 0x170),
               auStack_128,param_3 + 0x1b0);
  }
  FUN_18023ce10(param_3);
  *(uint *)(param_3 + 0x324) = uStack_180;
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
  ppuStack_170 = &puStack_108;
  puStack_108 = &UNK_1809fcc28;
  puStack_100 = auStack_f0;
  auStack_f0[0] = 0;
  uStack_f8 = *(undefined4 *)(param_3 + 0x20);
  puVar11 = &DAT_18098bc73;
  if (*(undefined **)(param_3 + 0x18) != (undefined *)0x0) {
    puVar11 = *(undefined **)(param_3 + 0x18);
  }
  strcpy_s(auStack_f0,0x80,puVar11);
  ppuStack_178 = &puStack_108;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_1a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a5110(longlong param_1,int *param_2,longlong param_3)
void FUN_1800a5110(longlong param_1,int *param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_268 [32];
  undefined **ppuStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  int iStack_220;
  int iStack_21c;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  int iStack_1c4;
  undefined8 uStack_1b8;
  int *piStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [128];
  undefined1 auStack_110 [152];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  uStack_1b8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  piStack_1b0 = param_2;
  FUN_1800a5750(param_3 + 0xd0);
  iVar3 = param_2[1];
  *(short *)(param_3 + 0x32c) = (short)*param_2;
  *(short *)(param_3 + 0x32e) = (short)iVar3;
  *(short *)(param_3 + 0x332) = (short)param_2[2];
  iVar3 = param_2[3];
  *(char *)(param_3 + 0x335) = (char)iVar3;
  *(int *)(param_3 + 0x35c) = iVar3;
  *(int *)(param_3 + 0x324) = param_2[4];
  iVar3 = *param_2;
  iStack_74 = param_2[1];
  iStack_70 = param_2[3];
  uStack_6c = 1;
  uVar11 = (ulonglong)(uint)param_2[4];
  iStack_78 = iVar3;
  uStack_68 = func_0x0001800ab000(uVar11);
  uStack_64 = 1;
  uVar6 = 0;
  iVar12 = param_2[7];
  uVar5 = uVar6;
  if (iVar12 != 0) {
    if (iVar12 == 1) {
      uVar5 = 1;
    }
    else if (iVar12 == 2) {
      uVar5 = 3;
    }
    else {
      uVar5 = 0;
      if (iVar12 == 3) {
        uVar5 = 2;
      }
    }
  }
  uStack_5c = (undefined4)uVar5;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_54 = uStack_58;
  if (*(char *)((longlong)param_2 + 0x21) != '\0') {
    uStack_54 = 0x20000;
  }
  if (*(char *)((longlong)param_2 + 0x22) != '\0') {
    uStack_54 = uStack_54 | 0x10000;
  }
  if ((char)param_2[8] != '\0') {
    uStack_58 = 8;
  }
  if (*(char *)((longlong)param_2 + 0x23) != '\0') {
    uStack_58 = uStack_58 | 0x80;
  }
  if (*(longlong *)(param_2 + 10) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_1f8 = *(undefined8 *)(*(longlong *)(param_2 + 10) + 0x10);
    uStack_1ec = 0;
    iStack_1f0 = func_0x000180225d90(uVar11 & 0xffffffff);
    iStack_1f0 = iStack_1f0 * iVar3;
    puVar9 = &uStack_1f8;
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x28))
                    (*(longlong **)(param_1 + 0x1d78),&iStack_78,puVar9,&uStack_210);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&UNK_180a01a78);
  }
  iVar3 = func_0x000180225d90(param_2[4]);
  *(int *)(param_3 + 0x368) = iVar3 * *param_2;
  *(undefined8 *)(param_3 + 0x170) = uStack_210;
  ppuStack_248 = (undefined **)FUN_180049b30(auStack_110,param_3 + 0x10);
  *ppuStack_248 = &UNK_18098bcb0;
  *(longlong *)(param_3 + 0x168) = param_3;
  if ((char)param_2[8] != '\0') {
    uVar1 = *(ushort *)(param_3 + 0x332);
    bVar7 = *(byte *)(param_3 + 0x335);
    uVar8 = *(uint *)(param_3 + 0x35c);
    uVar4 = (uint)bVar7;
    if ((int)uVar8 < (int)(uint)bVar7) {
      uVar4 = uVar8;
    }
    uVar5 = uVar6;
    if (uVar4 * uVar1 != 0) {
      uVar5 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)(uVar4 * uVar1) * 8,
                            CONCAT71((uint7)(byte)(uVar1 >> 8),3));
      bVar7 = *(byte *)(param_3 + 0x335);
      uVar8 = *(uint *)(param_3 + 0x35c);
      uVar1 = *(ushort *)(param_3 + 0x332);
    }
    *(ulonglong *)(param_3 + 0x180) = uVar5;
    uVar4 = (uint)bVar7;
    if ((int)uVar8 < (int)(uint)bVar7) {
      uVar4 = uVar8;
    }
    *(uint *)(param_3 + 0x188) = uVar4 * uVar1;
    uStack_1cc = 4;
    iVar3 = param_2[5];
    if (iVar3 == 0) {
      iVar3 = param_2[4];
    }
    uStack_1d0 = func_0x0001800ab000(iVar3);
    iStack_1c4 = param_2[3];
    uStack_1c8 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x38))
              (*(longlong **)(param_1 + 0x1d78),*(undefined8 *)(param_3 + 0x170),&uStack_1d0,
               param_3 + 0x178);
    if (*(short *)(param_3 + 0x332) != 0) {
      do {
        iVar3 = 0;
        bVar7 = *(byte *)(param_3 + 0x335);
        uVar8 = *(uint *)(param_3 + 0x35c);
        uVar4 = (uint)bVar7;
        if ((int)uVar8 < (int)(uint)bVar7) {
          uVar4 = uVar8;
        }
        iVar12 = (int)uVar6;
        if (0 < (int)uVar4) {
          do {
            uVar4 = (uint)bVar7;
            if ((int)uVar8 < (int)(uint)bVar7) {
              uVar4 = uVar8;
            }
            uStack_208 = 0;
            uStack_234 = 1;
            if (*(short *)(param_3 + 0x332) == 1) {
              uStack_23c = 4;
            }
            else {
              uStack_23c = 5;
              uStack_22c = 1;
              iStack_230 = iVar12;
            }
            iVar2 = param_2[5];
            if (iVar2 == 0) {
              iVar2 = param_2[4];
            }
            iStack_238 = iVar3;
            uStack_240 = func_0x0001800ab000(iVar2);
            (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x38))
                      (*(longlong **)(param_1 + 0x1d78),*(undefined8 *)(param_3 + 0x170),&uStack_240
                       ,&uStack_208);
            *(undefined8 *)
             (*(longlong *)(param_3 + 0x180) + (longlong)(int)(uVar4 * iVar12 + iVar3) * 8) =
                 uStack_208;
            iVar3 = iVar3 + 1;
            bVar7 = *(byte *)(param_3 + 0x335);
            uVar8 = *(uint *)(param_3 + 0x35c);
            uVar4 = (uint)bVar7;
            if ((int)uVar8 < (int)(uint)bVar7) {
              uVar4 = uVar8;
            }
          } while (iVar3 < (int)uVar4);
        }
        uVar6 = (ulonglong)(iVar12 + 1U);
      } while (iVar12 + 1U < (uint)*(ushort *)(param_3 + 0x332));
    }
  }
  uVar5 = 0;
  if (*(char *)((longlong)param_2 + 0x23) != '\0') {
    uVar1 = *(ushort *)(param_3 + 0x332);
    bVar7 = *(byte *)(param_3 + 0x335);
    uVar8 = *(uint *)(param_3 + 0x35c);
    uVar4 = (uint)bVar7;
    if ((int)uVar8 < (int)(uint)bVar7) {
      uVar4 = uVar8;
    }
    uVar6 = uVar5;
    if (uVar4 * uVar1 != 0) {
      uVar6 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)(uVar4 * uVar1) * 8,
                            CONCAT71((uint7)(byte)(uVar1 >> 8),3));
      bVar7 = *(byte *)(param_3 + 0x335);
      uVar8 = *(uint *)(param_3 + 0x35c);
      uVar1 = *(ushort *)(param_3 + 0x332);
    }
    *(ulonglong *)(param_3 + 0x210) = uVar6;
    uVar4 = (uint)bVar7;
    if ((int)uVar8 < (int)(uint)bVar7) {
      uVar4 = uVar8;
    }
    *(uint *)(param_3 + 0x218) = uVar4 * uVar1;
    uStack_1e4 = 4;
    iVar3 = param_2[6];
    if (iVar3 == 0) {
      iVar3 = param_2[4];
    }
    uStack_1e8 = func_0x0001800ab000(iVar3);
    (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x40))
              (*(longlong **)(param_1 + 0x1d78),*(undefined8 *)(param_3 + 0x170),&uStack_1e8,
               param_3 + 0x208);
    *(longlong *)(param_3 + 0x200) = param_3;
    if (*(short *)(param_3 + 0x332) != 0) {
      do {
        iVar3 = 0;
        bVar7 = *(byte *)(param_3 + 0x335);
        uVar8 = *(uint *)(param_3 + 0x35c);
        uVar4 = (uint)bVar7;
        if ((int)uVar8 < (int)(uint)bVar7) {
          uVar4 = uVar8;
        }
        iVar12 = (int)uVar5;
        if (0 < (int)uVar4) {
          do {
            uVar4 = (uint)bVar7;
            if ((int)uVar8 < (int)(uint)bVar7) {
              uVar4 = uVar8;
            }
            uStack_200 = 0;
            if (*(short *)(param_3 + 0x332) == 1) {
              uStack_224 = 4;
            }
            else {
              uStack_224 = 5;
              uStack_218 = 1;
              iStack_21c = iVar12;
            }
            iVar2 = param_2[6];
            if (iVar2 == 0) {
              iVar2 = param_2[4];
            }
            iStack_220 = iVar3;
            uStack_228 = func_0x0001800ab000(iVar2);
            (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x40))
                      (*(longlong **)(param_1 + 0x1d78),*(undefined8 *)(param_3 + 0x170),&uStack_228
                       ,&uStack_200);
            *(undefined8 *)
             (*(longlong *)(param_3 + 0x210) + (longlong)(int)(uVar4 * iVar12 + iVar3) * 8) =
                 uStack_200;
            iVar3 = iVar3 + 1;
            bVar7 = *(byte *)(param_3 + 0x335);
            uVar8 = *(uint *)(param_3 + 0x35c);
            uVar4 = (uint)bVar7;
            if ((int)uVar8 < (int)(uint)bVar7) {
              uVar4 = uVar8;
            }
          } while (iVar3 < (int)uVar4);
        }
        uVar5 = (ulonglong)(iVar12 + 1U);
      } while (iVar12 + 1U < (uint)*(ushort *)(param_3 + 0x332));
    }
  }
  ppuStack_248 = &puStack_1a8;
  puStack_1a8 = &UNK_1809fcc28;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = *(undefined4 *)(param_3 + 0x20);
  puVar10 = &DAT_18098bc73;
  if (*(undefined **)(param_3 + 0x18) != (undefined *)0x0) {
    puVar10 = *(undefined **)(param_3 + 0x18);
  }
  strcpy_s(auStack_190,0x80,puVar10);
  ppuStack_248 = &puStack_1a8;
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
  ppuStack_248 = *(undefined ***)(param_3 + 0xf8);
  *(undefined8 *)(param_3 + 0xf8) = 0;
  if (ppuStack_248 != (undefined **)0x0) {
    (**(code **)((longlong)*ppuStack_248 + 0x38))();
  }
  if (*(longlong **)(param_2 + 10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 10) + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_268);
}



undefined4 * FUN_1800a5750(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  plVar1 = *(longlong **)(param_2 + 10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 10);
  *(longlong **)(param_1 + 10) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




