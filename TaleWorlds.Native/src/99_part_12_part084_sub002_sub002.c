#include "TaleWorlds.Native.Split.h"

// 99_part_12_part084_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808a33b0(void)
void FUN_1808a33b0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1808a33c0(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 auStackX_20 [2];
  undefined8 in_stack_ffffffffffffff48;
  undefined4 *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  int iStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [40];
  
  uVar8 = (uint)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if (*param_3 != 0) {
    return (undefined8 *)0x1c;
  }
  puVar9 = (undefined8 *)FUN_1808ddc20(param_1,auStack_60,0,param_2);
  if ((int)puVar9 != 0) {
    return puVar9;
  }
  uVar7 = *(uint *)(param_1 + 8);
  uStack_74 = uVar7;
  puVar10 = (undefined4 *)FUN_180847820();
  uStack_90 = *puVar10;
  uStack_8c = puVar10[1];
  uStack_88 = puVar10[2];
  uStack_84 = puVar10[3];
  puVar10 = (undefined4 *)FUN_180847820();
  puVar9 = (undefined8 *)0x0;
  uStack_70 = *puVar10;
  uStack_6c = puVar10[1];
  uStack_68 = puVar10[2];
  uStack_64 = puVar10[3];
  if ((0x54 < uVar7) && (puVar11 = (undefined8 *)FUN_1808dde10(param_1,0), (int)puVar11 != 0)) {
    return puVar11;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return (undefined8 *)0x1c;
  }
  lVar1 = *param_1;
  uVar6 = FUN_1808aed00(lVar1,&uStack_90,4);
  puVar11 = (undefined8 *)(ulonglong)uVar6;
  if (uVar6 == 0) {
    uVar6 = FUN_1808aed00(lVar1,&uStack_8c,2);
    puVar11 = (undefined8 *)(ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar6 = FUN_1808aed00(lVar1,(longlong)&uStack_8c + 2,2);
      puVar11 = (undefined8 *)(ulonglong)uVar6;
      if (uVar6 == 0) {
        uVar6 = FUN_1808aed00(lVar1,&uStack_88,8);
        puVar11 = (undefined8 *)(ulonglong)uVar6;
      }
    }
  }
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  puVar11 = (undefined8 *)FUN_180899360(param_1,&uStack_70);
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return (undefined8 *)0x1c;
  }
  plVar2 = (longlong *)*param_1;
  if (*plVar2 == 0) {
    puVar11 = (undefined8 *)0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      puStack_98 = (undefined4 *)((ulonglong)puStack_98 & 0xffffffff00000000);
      puVar11 = (undefined8 *)func_0x00018076a7d0(*plVar2,&puStack_98);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      if ((ulonglong)plVar2[2] < ((ulonglong)puStack_98 & 0xffffffff) + 4) {
        puVar11 = (undefined8 *)0x11;
        goto LAB_1808a3569;
      }
    }
    uVar8 = 0;
    puVar11 = (undefined8 *)FUN_180769ed0(*plVar2,auStackX_20,1,4,0);
  }
LAB_1808a3569:
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return (undefined8 *)0x1c;
  }
  plVar2 = (longlong *)*param_1;
  if (*plVar2 == 0) {
    puVar11 = (undefined8 *)0x1c;
  }
  else {
    if (plVar2[2] != 0) {
      puStack_98 = (undefined4 *)((ulonglong)puStack_98 & 0xffffffff00000000);
      puVar11 = (undefined8 *)func_0x00018076a7d0(*plVar2,&puStack_98);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      if ((ulonglong)plVar2[2] < ((ulonglong)puStack_98 & 0xffffffff) + 4) {
        puVar11 = (undefined8 *)0x11;
        goto LAB_1808a35d8;
      }
    }
    uVar8 = 0;
    puVar11 = (undefined8 *)FUN_180769ed0(*plVar2,&iStack_78,1,4,0);
  }
LAB_1808a35d8:
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  puVar11 = puVar9;
  uVar6 = 0;
  if (0x54 < *(uint *)(param_1 + 8)) {
    if (*(int *)(param_1[1] + 0x18) == 0) {
      plVar2 = (longlong *)*param_1;
      if (*plVar2 == 0) {
        puVar11 = (undefined8 *)0x1c;
      }
      else {
        if (plVar2[2] != 0) {
          puStack_98 = (undefined4 *)((ulonglong)puStack_98 & 0xffffffff00000000);
          puVar11 = (undefined8 *)func_0x00018076a7d0(*plVar2,&puStack_98);
          if ((int)puVar11 != 0) {
            return puVar11;
          }
          if ((ulonglong)plVar2[2] < ((ulonglong)puStack_98 & 0xffffffff) + 4) {
            puVar11 = (undefined8 *)0x11;
            goto LAB_1808a3652;
          }
        }
        uVar8 = 0;
        puVar11 = (undefined8 *)FUN_180769ed0(*plVar2,&puStack_80,1,4,0);
      }
LAB_1808a3652:
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      puVar11 = (undefined8 *)0xd;
      uVar6 = (uint)puStack_80;
      if ((uint)puStack_80 < 3) {
        puVar11 = puVar9;
      }
    }
    else {
      puVar11 = (undefined8 *)0x1c;
      uVar6 = 0;
    }
  }
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if ((0x54 < uVar7) && (puVar11 = (undefined8 *)FUN_1808de0e0(param_1,0), (int)puVar11 != 0)) {
    return puVar11;
  }
  puVar11 = (undefined8 *)0x0;
  if (uVar7 < 0x55) {
    uVar7 = FUN_1808dde10(param_1,0);
    puVar13 = (undefined8 *)(ulonglong)uVar7;
    if (uVar7 != 0) goto LAB_1808a3889;
  }
  if (iStack_78 == 0) {
    puVar12 = (undefined8 *)
              FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x98,&UNK_180986e70,0x98a,
                            (ulonglong)uVar8 << 0x20,0,1);
    if (puVar12 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x26;
      puVar9 = puVar11;
      goto LAB_1808a3889;
    }
    func_0x0001808b0260(puVar12,0x13,&uStack_90);
    *puVar12 = &UNK_180986d98;
    *(undefined4 *)(puVar12 + 6) = uStack_70;
    *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_6c;
    *(undefined4 *)(puVar12 + 7) = uStack_68;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_64;
    *puVar12 = &UNK_180986e10;
    *(undefined4 *)(puVar12 + 8) = auStackX_20[0];
    *(uint *)((longlong)puVar12 + 0x44) = uVar6;
    *(undefined4 *)(puVar12 + 9) = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    *(undefined4 *)(puVar12 + 0x12) = 0;
    uVar8 = FUN_18089aa40(puVar12,param_1);
joined_r0x0001808a3b38:
    puVar13 = (undefined8 *)(ulonglong)uVar8;
joined_r0x0001808a3a67:
    puVar9 = puVar12;
    if (uVar8 != 0) goto LAB_1808a3889;
  }
  else {
    if (iStack_78 == 1) {
      puVar12 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x60,&UNK_180986e70,0x992,
                              (ulonglong)uVar8 << 0x20,0,1);
      if (puVar12 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x26;
        puVar9 = puVar11;
        goto LAB_1808a3889;
      }
      func_0x0001808b0260(puVar12,0x13,&uStack_90);
      *puVar12 = &UNK_180986d98;
      *(undefined4 *)(puVar12 + 6) = uStack_70;
      *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_6c;
      *(undefined4 *)(puVar12 + 7) = uStack_68;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_64;
      *(uint *)((longlong)puVar12 + 0x44) = uVar6;
      puVar9 = (undefined8 *)((longlong)puVar12 + 0x54);
      *(undefined4 *)(puVar12 + 8) = auStackX_20[0];
      *(undefined4 *)puVar9 = 0;
      *(undefined4 *)(puVar12 + 9) = 1;
      *puVar12 = &UNK_180986de8;
      *(undefined4 *)(puVar12 + 10) = 0;
      *(undefined4 *)(puVar12 + 0xb) = 0;
      if (*(uint *)(param_1 + 8) < 0x55) {
        if (*(int *)(param_1[1] + 0x18) == 0) {
          uVar8 = FUN_1808995c0(*param_1,puVar12 + 10);
          puVar13 = (undefined8 *)(ulonglong)uVar8;
          if (uVar8 == 0) {
            if (*(int *)(param_1[1] + 0x18) == 0) goto LAB_1808a3a53;
            puVar13 = (undefined8 *)0x1c;
          }
        }
        else {
          puVar13 = (undefined8 *)0x1c;
        }
      }
      else {
        puVar9 = puVar12 + 0xb;
        if (*(int *)(param_1[1] + 0x18) == 0) {
LAB_1808a3a53:
          uVar8 = FUN_1808995c0(*param_1,puVar9);
          puVar13 = (undefined8 *)(ulonglong)uVar8;
          if (uVar8 == 0) goto LAB_1808a385d;
        }
        else {
          puVar13 = (undefined8 *)0x1c;
        }
      }
      uVar8 = (uint)puVar13;
      goto joined_r0x0001808a3a67;
    }
    if (iStack_78 == 2) {
      puVar12 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x80,&UNK_180986e70,0x99a,
                              (ulonglong)uVar8 << 0x20,0,1);
      if (puVar12 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x26;
        puVar9 = puVar11;
        goto LAB_1808a3889;
      }
      func_0x0001808b0260(puVar12,0x13,&uStack_90);
      *puVar12 = &UNK_180986d98;
      *(undefined4 *)(puVar12 + 6) = uStack_70;
      *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_6c;
      *(undefined4 *)(puVar12 + 7) = uStack_68;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_64;
      *(undefined4 *)(puVar12 + 8) = auStackX_20[0];
      *(uint *)((longlong)puVar12 + 0x44) = uVar6;
      *(undefined4 *)(puVar12 + 9) = 2;
      *puVar12 = &UNK_180986dc0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar10 = (undefined4 *)FUN_180847820();
      uVar3 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      *(undefined4 *)(puVar12 + 0xc) = *puVar10;
      *(undefined4 *)((longlong)puVar12 + 100) = uVar3;
      *(undefined4 *)(puVar12 + 0xd) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0x6c) = uVar5;
      puVar12[0xe] = 0;
      *(undefined4 *)(puVar12 + 0xf) = 0;
      *(undefined1 *)((longlong)puVar12 + 0x7c) = 0;
      uVar8 = FUN_18089b460(puVar12,param_1);
      goto joined_r0x0001808a3b38;
    }
    puVar12 = puVar9;
    if (iStack_78 == 3) {
      puVar12 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x68,&UNK_180986e70,0x9a2,
                              (ulonglong)uVar8 << 0x20,0,1);
      if (puVar12 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x26;
        goto LAB_1808a3889;
      }
      func_0x0001808b0260(puVar12,0x13,&uStack_90);
      *puVar12 = &UNK_180986d98;
      *(undefined4 *)(puVar12 + 6) = uStack_70;
      *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_6c;
      *(undefined4 *)(puVar12 + 7) = uStack_68;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_64;
      *puVar12 = &UNK_180986e38;
      puStack_80 = puVar12 + 0xc;
      *(uint *)((longlong)puVar12 + 0x44) = uVar6;
      *(undefined4 *)(puVar12 + 0xb) = 0;
      *(undefined4 *)puStack_80 = 0;
      *(undefined4 *)((longlong)puVar12 + 0x54) = 0;
      *(undefined4 *)(puVar12 + 8) = auStackX_20[0];
      puStack_98 = (undefined4 *)((longlong)puVar12 + 100);
      *(undefined4 *)((longlong)puVar12 + 0x5c) = 0;
      *puStack_98 = 0;
      *(undefined4 *)(puVar12 + 9) = 3;
      *(undefined4 *)(puVar12 + 10) = 7;
      if (*(int *)(param_1[1] + 0x18) == 0) {
        uVar8 = FUN_1808aed00(*param_1,puVar12 + 10,4);
        puVar13 = (undefined8 *)(ulonglong)uVar8;
        if (uVar8 == 0) {
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar8 = FUN_1808aed00(*param_1,(undefined4 *)((longlong)puVar12 + 0x54),4);
            puVar13 = (undefined8 *)(ulonglong)uVar8;
            if (uVar8 == 0) {
              if (*(int *)(param_1[1] + 0x18) == 0) {
                uVar8 = FUN_1808995c0(*param_1,puVar12 + 0xb);
                puVar13 = (undefined8 *)(ulonglong)uVar8;
                if (uVar8 == 0) {
                  if (*(int *)(param_1[1] + 0x18) == 0) {
                    uVar8 = FUN_1808995c0(*param_1,(undefined4 *)((longlong)puVar12 + 0x5c));
                    puVar13 = (undefined8 *)(ulonglong)uVar8;
                    if (uVar8 == 0) {
                      if (*(int *)(param_1[1] + 0x18) == 0) {
                        uVar8 = FUN_1808995c0(*param_1,puStack_80);
                        puVar13 = (undefined8 *)(ulonglong)uVar8;
                        if (uVar8 == 0) {
                          if (*(int *)(param_1[1] + 0x18) == 0) {
                            uVar8 = FUN_1808995c0(*param_1,puStack_98);
                            puVar13 = (undefined8 *)(ulonglong)uVar8;
                            if (uVar8 == 0) goto LAB_1808a385d;
                          }
                          else {
                            puVar13 = (undefined8 *)0x1c;
                          }
                        }
                      }
                      else {
                        puVar13 = (undefined8 *)0x1c;
                      }
                    }
                  }
                  else {
                    puVar13 = (undefined8 *)0x1c;
                  }
                }
              }
              else {
                puVar13 = (undefined8 *)0x1c;
              }
            }
          }
          else {
            puVar13 = (undefined8 *)0x1c;
          }
        }
      }
      else {
        puVar13 = (undefined8 *)0x1c;
      }
      uVar8 = (uint)puVar13;
      goto joined_r0x0001808a3a67;
    }
  }
LAB_1808a385d:
  if (uStack_74 < 0x55) {
    uVar8 = FUN_1808de0e0(param_1,0);
    puVar13 = (undefined8 *)(ulonglong)uVar8;
    puVar9 = puVar12;
    if (uVar8 != 0) {
LAB_1808a3889:
      if (puVar9 == (undefined8 *)0x0) {
        return puVar13;
      }
      (**(code **)*puVar9)(puVar9,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar9,&UNK_18095b500,0xc6,1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80(param_1,auStack_60);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1808a340d(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong unaff_RBP;
  undefined8 *puVar14;
  longlong *unaff_R14;
  uint uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  undefined8 in_stack_00000020;
  uint uVar17;
  
  uVar17 = (uint)((ulonglong)in_stack_00000020 >> 0x20);
  uVar9 = *(uint *)(unaff_R14 + 8);
  *(uint *)(unaff_RBP + -0x15) = uVar9;
  puVar10 = (undefined4 *)FUN_180847820();
  uVar16 = puVar10[1];
  uVar2 = puVar10[2];
  uVar5 = puVar10[3];
  *(undefined4 *)(unaff_RBP + -0x31) = *puVar10;
  *(undefined4 *)(unaff_RBP + -0x2d) = uVar16;
  *(undefined4 *)(unaff_RBP + -0x29) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x25) = uVar5;
  puVar10 = (undefined4 *)FUN_180847820();
  puVar13 = (undefined8 *)0x0;
  uVar15 = 0;
  uVar16 = *puVar10;
  uVar2 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  *(undefined4 *)(unaff_RBP + -0x11) = uVar16;
  *(undefined4 *)(unaff_RBP + -0xd) = uVar2;
  *(undefined4 *)(unaff_RBP + -9) = uVar5;
  *(undefined4 *)(unaff_RBP + -5) = uVar6;
  if ((0x54 < uVar9) && (puVar11 = (undefined8 *)FUN_1808dde10(uVar16,0), (int)puVar11 != 0)) {
    return puVar11;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != 0) {
    return (undefined8 *)0x1c;
  }
  lVar3 = *unaff_R14;
  uVar8 = FUN_1808aed00(lVar3,unaff_RBP + -0x31,4);
  puVar11 = (undefined8 *)(ulonglong)uVar8;
  uVar16 = extraout_XMM0_Da;
  if (uVar8 == 0) {
    uVar8 = FUN_1808aed00(lVar3,unaff_RBP + -0x2d,2);
    puVar11 = (undefined8 *)(ulonglong)uVar8;
    uVar16 = extraout_XMM0_Da_00;
    if (uVar8 == 0) {
      uVar8 = FUN_1808aed00(lVar3,unaff_RBP + -0x2b,2);
      puVar11 = (undefined8 *)(ulonglong)uVar8;
      uVar16 = extraout_XMM0_Da_01;
      if (uVar8 == 0) {
        uVar8 = FUN_1808aed00(lVar3,unaff_RBP + -0x29,8);
        puVar11 = (undefined8 *)(ulonglong)uVar8;
        uVar16 = extraout_XMM0_Da_02;
      }
    }
  }
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  puVar11 = (undefined8 *)FUN_180899360(uVar16,unaff_RBP + -0x11);
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != 0) {
    return (undefined8 *)0x1c;
  }
  plVar4 = (longlong *)*unaff_R14;
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    puVar11 = (undefined8 *)0x1c;
    uVar16 = extraout_XMM0_Da_03;
  }
  else {
    if (plVar4[2] != 0) {
      *(undefined4 *)(unaff_RBP + -0x39) = 0;
      puVar11 = (undefined8 *)func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      if ((ulonglong)plVar4[2] < (ulonglong)*(uint *)(unaff_RBP + -0x39) + 4) {
        puVar11 = (undefined8 *)0x11;
        uVar16 = extraout_XMM0_Da_04;
        goto LAB_1808a3569;
      }
    }
    uVar17 = 0;
    puVar11 = (undefined8 *)FUN_180769ed0(*plVar4,unaff_RBP + 0x7f,1,4,0);
    uVar16 = extraout_XMM0_Da_05;
  }
LAB_1808a3569:
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != 0) {
    return (undefined8 *)0x1c;
  }
  plVar4 = (longlong *)*unaff_R14;
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    puVar11 = (undefined8 *)0x1c;
  }
  else {
    if (plVar4[2] != 0) {
      *(undefined4 *)(unaff_RBP + -0x39) = 0;
      puVar11 = (undefined8 *)func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      if ((ulonglong)plVar4[2] < (ulonglong)*(uint *)(unaff_RBP + -0x39) + 4) {
        puVar11 = (undefined8 *)0x11;
        uVar16 = extraout_XMM0_Da_06;
        goto LAB_1808a35d8;
      }
    }
    uVar17 = 0;
    puVar11 = (undefined8 *)FUN_180769ed0(*plVar4,unaff_RBP + -0x19,1,4,0);
    uVar16 = extraout_XMM0_Da_07;
  }
LAB_1808a35d8:
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  puVar11 = puVar13;
  if (0x54 < *(uint *)(unaff_R14 + 8)) {
    if (*(int *)(unaff_R14[1] + 0x18) == 0) {
      plVar4 = (longlong *)*unaff_R14;
      lVar3 = *plVar4;
      if (lVar3 == 0) {
        puVar11 = (undefined8 *)0x1c;
      }
      else {
        if (plVar4[2] != 0) {
          *(undefined4 *)(unaff_RBP + -0x39) = 0;
          puVar11 = (undefined8 *)func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
          if ((int)puVar11 != 0) {
            return puVar11;
          }
          if ((ulonglong)plVar4[2] < (ulonglong)*(uint *)(unaff_RBP + -0x39) + 4) {
            puVar11 = (undefined8 *)0x11;
            uVar16 = extraout_XMM0_Da_08;
            goto LAB_1808a3652;
          }
        }
        uVar17 = 0;
        puVar11 = (undefined8 *)FUN_180769ed0(*plVar4,unaff_RBP + -0x21,1,4,0);
        uVar16 = extraout_XMM0_Da_09;
      }
LAB_1808a3652:
      if ((int)puVar11 != 0) {
        return puVar11;
      }
      uVar15 = *(uint *)(unaff_RBP + -0x21);
      puVar11 = (undefined8 *)0xd;
      if (uVar15 < 3) {
        puVar11 = puVar13;
      }
    }
    else {
      puVar11 = (undefined8 *)0x1c;
      uVar15 = 0;
    }
  }
  if ((int)puVar11 != 0) {
    return puVar11;
  }
  if ((0x54 < uVar9) &&
     (puVar11 = (undefined8 *)FUN_1808de0e0(uVar16,0), uVar16 = extraout_XMM0_Da_10,
     (int)puVar11 != 0)) {
    return puVar11;
  }
  puVar11 = (undefined8 *)0x0;
  if (uVar9 < 0x55) {
    uVar9 = FUN_1808dde10(uVar16,0);
    puVar14 = (undefined8 *)(ulonglong)uVar9;
    uVar16 = extraout_XMM0_Da_11;
    if (uVar9 != 0) goto LAB_1808a3889;
  }
  iVar1 = *(int *)(unaff_RBP + -0x19);
  if (iVar1 == 0) {
    puVar12 = (undefined8 *)
              FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x98,&UNK_180986e70,0x98a,
                            (ulonglong)uVar17 << 0x20);
    if (puVar12 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)0x26;
      puVar13 = puVar11;
      goto LAB_1808a3889;
    }
    uVar16 = *(undefined4 *)(unaff_RBP + 0x7f);
    func_0x0001808b0260(puVar12,0x13,unaff_RBP + -0x31);
    *puVar12 = &UNK_180986d98;
    uVar2 = *(undefined4 *)(unaff_RBP + -0xd);
    uVar5 = *(undefined4 *)(unaff_RBP + -9);
    uVar6 = *(undefined4 *)(unaff_RBP + -5);
    *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(unaff_RBP + -0x11);
    *(undefined4 *)((longlong)puVar12 + 0x34) = uVar2;
    *(undefined4 *)(puVar12 + 7) = uVar5;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar6;
    *puVar12 = &UNK_180986e10;
    *(undefined4 *)(puVar12 + 8) = uVar16;
    *(uint *)((longlong)puVar12 + 0x44) = uVar15;
    *(undefined4 *)(puVar12 + 9) = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    *(undefined4 *)(puVar12 + 0x12) = 0;
    uVar9 = FUN_18089aa40(puVar12);
    uVar16 = extraout_XMM0_Da_22;
joined_r0x0001808a3b38:
    puVar14 = (undefined8 *)(ulonglong)uVar9;
joined_r0x0001808a3a67:
    puVar13 = puVar12;
    if (uVar9 != 0) goto LAB_1808a3889;
  }
  else {
    if (iVar1 == 1) {
      puVar12 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x60,&UNK_180986e70,0x992,
                              (ulonglong)uVar17 << 0x20);
      if (puVar12 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x26;
        puVar13 = puVar11;
        goto LAB_1808a3889;
      }
      uVar2 = *(undefined4 *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar12,0x13,unaff_RBP + -0x31);
      *puVar12 = &UNK_180986d98;
      uVar16 = *(undefined4 *)(unaff_RBP + -0x11);
      uVar5 = *(undefined4 *)(unaff_RBP + -0xd);
      uVar6 = *(undefined4 *)(unaff_RBP + -9);
      uVar7 = *(undefined4 *)(unaff_RBP + -5);
      *(undefined4 *)(puVar12 + 6) = uVar16;
      *(undefined4 *)((longlong)puVar12 + 0x34) = uVar5;
      *(undefined4 *)(puVar12 + 7) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar7;
      *(uint *)((longlong)puVar12 + 0x44) = uVar15;
      puVar13 = (undefined8 *)((longlong)puVar12 + 0x54);
      *(undefined4 *)(puVar12 + 8) = uVar2;
      *(undefined4 *)puVar13 = 0;
      *(undefined4 *)(puVar12 + 9) = 1;
      *puVar12 = &UNK_180986de8;
      *(undefined4 *)(puVar12 + 10) = 0;
      *(undefined4 *)(puVar12 + 0xb) = 0;
      if (*(uint *)(unaff_R14 + 8) < 0x55) {
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar9 = FUN_1808995c0(*unaff_R14,puVar12 + 10);
          puVar14 = (undefined8 *)(ulonglong)uVar9;
          uVar16 = extraout_XMM0_Da_20;
          if (uVar9 == 0) {
            if (*(int *)(unaff_R14[1] + 0x18) == 0) goto LAB_1808a3a53;
            puVar14 = (undefined8 *)0x1c;
          }
        }
        else {
          puVar14 = (undefined8 *)0x1c;
        }
      }
      else {
        puVar13 = puVar12 + 0xb;
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
LAB_1808a3a53:
          uVar9 = FUN_1808995c0(*unaff_R14,puVar13);
          puVar14 = (undefined8 *)(ulonglong)uVar9;
          uVar16 = extraout_XMM0_Da_21;
          if (uVar9 == 0) goto LAB_1808a385d;
        }
        else {
          puVar14 = (undefined8 *)0x1c;
        }
      }
      uVar9 = (uint)puVar14;
      goto joined_r0x0001808a3a67;
    }
    if (iVar1 == 2) {
      puVar12 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x80,&UNK_180986e70,0x99a,
                              (ulonglong)uVar17 << 0x20);
      if (puVar12 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x26;
        puVar13 = puVar11;
        goto LAB_1808a3889;
      }
      uVar16 = *(undefined4 *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar12,0x13,unaff_RBP + -0x31);
      *puVar12 = &UNK_180986d98;
      uVar2 = *(undefined4 *)(unaff_RBP + -0xd);
      uVar5 = *(undefined4 *)(unaff_RBP + -9);
      uVar6 = *(undefined4 *)(unaff_RBP + -5);
      *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(unaff_RBP + -0x11);
      *(undefined4 *)((longlong)puVar12 + 0x34) = uVar2;
      *(undefined4 *)(puVar12 + 7) = uVar5;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar6;
      *(undefined4 *)(puVar12 + 8) = uVar16;
      *(uint *)((longlong)puVar12 + 0x44) = uVar15;
      *(undefined4 *)(puVar12 + 9) = 2;
      *puVar12 = &UNK_180986dc0;
      puVar12[10] = 0;
      puVar12[0xb] = 0;
      puVar10 = (undefined4 *)FUN_180847820();
      uVar16 = puVar10[1];
      uVar2 = puVar10[2];
      uVar5 = puVar10[3];
      *(undefined4 *)(puVar12 + 0xc) = *puVar10;
      *(undefined4 *)((longlong)puVar12 + 100) = uVar16;
      *(undefined4 *)(puVar12 + 0xd) = uVar2;
      *(undefined4 *)((longlong)puVar12 + 0x6c) = uVar5;
      puVar12[0xe] = 0;
      *(undefined4 *)(puVar12 + 0xf) = 0;
      *(undefined1 *)((longlong)puVar12 + 0x7c) = 0;
      uVar9 = FUN_18089b460(puVar12);
      uVar16 = extraout_XMM0_Da_19;
      goto joined_r0x0001808a3b38;
    }
    puVar12 = puVar13;
    if (iVar1 == 3) {
      puVar12 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x68,&UNK_180986e70,0x9a2,
                              (ulonglong)uVar17 << 0x20);
      if (puVar12 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x26;
        goto LAB_1808a3889;
      }
      uVar2 = *(undefined4 *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar12,0x13,unaff_RBP + -0x31);
      *puVar12 = &UNK_180986d98;
      uVar16 = *(undefined4 *)(unaff_RBP + -0x11);
      uVar5 = *(undefined4 *)(unaff_RBP + -0xd);
      uVar6 = *(undefined4 *)(unaff_RBP + -9);
      uVar7 = *(undefined4 *)(unaff_RBP + -5);
      *(undefined4 *)(puVar12 + 6) = uVar16;
      *(undefined4 *)((longlong)puVar12 + 0x34) = uVar5;
      *(undefined4 *)(puVar12 + 7) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar7;
      *puVar12 = &UNK_180986e38;
      *(uint *)((longlong)puVar12 + 0x44) = uVar15;
      *(undefined4 *)(puVar12 + 0xb) = 0;
      *(undefined4 *)(puVar12 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x54) = 0;
      *(undefined4 *)(puVar12 + 8) = uVar2;
      *(undefined8 **)(unaff_RBP + -0x21) = puVar12 + 0xc;
      *(undefined4 *)((longlong)puVar12 + 0x5c) = 0;
      *(undefined4 *)((longlong)puVar12 + 100) = 0;
      *(undefined4 *)(puVar12 + 9) = 3;
      *(undefined4 *)(puVar12 + 10) = 7;
      *(undefined4 **)(unaff_RBP + -0x39) = (undefined4 *)((longlong)puVar12 + 100);
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar9 = FUN_1808aed00(*unaff_R14,puVar12 + 10,4);
        puVar14 = (undefined8 *)(ulonglong)uVar9;
        uVar16 = extraout_XMM0_Da_12;
        if (uVar9 == 0) {
          if (*(int *)(unaff_R14[1] + 0x18) == 0) {
            uVar9 = FUN_1808aed00(*unaff_R14,(undefined4 *)((longlong)puVar12 + 0x54),4);
            puVar14 = (undefined8 *)(ulonglong)uVar9;
            uVar16 = extraout_XMM0_Da_13;
            if (uVar9 == 0) {
              if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                uVar9 = FUN_1808995c0(*unaff_R14,puVar12 + 0xb);
                puVar14 = (undefined8 *)(ulonglong)uVar9;
                uVar16 = extraout_XMM0_Da_14;
                if (uVar9 == 0) {
                  if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                    uVar9 = FUN_1808995c0(*unaff_R14,(undefined4 *)((longlong)puVar12 + 0x5c));
                    puVar14 = (undefined8 *)(ulonglong)uVar9;
                    uVar16 = extraout_XMM0_Da_15;
                    if (uVar9 == 0) {
                      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                        uVar9 = FUN_1808995c0(*unaff_R14,*(undefined8 *)(unaff_RBP + -0x21));
                        puVar14 = (undefined8 *)(ulonglong)uVar9;
                        uVar16 = extraout_XMM0_Da_16;
                        if (uVar9 == 0) {
                          if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                            uVar9 = FUN_1808995c0(*unaff_R14,*(undefined8 *)(unaff_RBP + -0x39));
                            puVar14 = (undefined8 *)(ulonglong)uVar9;
                            uVar16 = extraout_XMM0_Da_17;
                            if (uVar9 == 0) goto LAB_1808a385d;
                          }
                          else {
                            puVar14 = (undefined8 *)0x1c;
                          }
                        }
                      }
                      else {
                        puVar14 = (undefined8 *)0x1c;
                      }
                    }
                  }
                  else {
                    puVar14 = (undefined8 *)0x1c;
                  }
                }
              }
              else {
                puVar14 = (undefined8 *)0x1c;
              }
            }
          }
          else {
            puVar14 = (undefined8 *)0x1c;
          }
        }
      }
      else {
        puVar14 = (undefined8 *)0x1c;
      }
      uVar9 = (uint)puVar14;
      goto joined_r0x0001808a3a67;
    }
  }
LAB_1808a385d:
  if (*(uint *)(unaff_RBP + -0x15) < 0x55) {
    uVar9 = FUN_1808de0e0(uVar16,0);
    puVar14 = (undefined8 *)(ulonglong)uVar9;
    puVar13 = puVar12;
    uVar16 = extraout_XMM0_Da_18;
    if (uVar9 != 0) {
LAB_1808a3889:
      if (puVar13 == (undefined8 *)0x0) {
        return puVar14;
      }
      (**(code **)*puVar13)(puVar13,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar13,&UNK_18095b500,0xc6,1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80(uVar16,unaff_RBP + -1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808a3465(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong in_RAX;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  longlong unaff_RBP;
  uint unaff_EDI;
  int iVar13;
  undefined8 *unaff_R13;
  longlong *unaff_R14;
  uint unaff_R15D;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  
  iVar13 = (int)unaff_R13;
  if (*(int *)(in_RAX + 0x18) != iVar13) {
    return 0x1c;
  }
  lVar3 = *unaff_R14;
  uVar8 = FUN_1808aed00(lVar3,unaff_RBP + -0x31,4);
  uVar9 = (ulonglong)uVar8;
  uVar14 = extraout_XMM0_Da;
  if (uVar8 == 0) {
    uVar8 = FUN_1808aed00(lVar3,unaff_RBP + -0x2d,2);
    uVar9 = (ulonglong)uVar8;
    uVar14 = extraout_XMM0_Da_00;
    if (uVar8 == 0) {
      uVar8 = FUN_1808aed00(lVar3,unaff_RBP + -0x2b,2);
      uVar9 = (ulonglong)uVar8;
      uVar14 = extraout_XMM0_Da_01;
      if (uVar8 == 0) {
        uVar8 = FUN_1808aed00(lVar3,unaff_RBP + -0x29,8);
        uVar9 = (ulonglong)uVar8;
        uVar14 = extraout_XMM0_Da_02;
      }
    }
  }
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  uVar9 = FUN_180899360(uVar14,unaff_RBP + -0x11);
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != iVar13) {
    return 0x1c;
  }
  plVar4 = (longlong *)*unaff_R14;
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    uVar9 = 0x1c;
    uVar14 = extraout_XMM0_Da_03;
  }
  else {
    if ((undefined8 *)plVar4[2] != unaff_R13) {
      *(int *)(unaff_RBP + -0x39) = iVar13;
      uVar9 = func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      if ((ulonglong)plVar4[2] < (ulonglong)*(uint *)(unaff_RBP + -0x39) + 4) {
        uVar9 = 0x11;
        uVar14 = extraout_XMM0_Da_04;
        goto LAB_1808a3569;
      }
    }
    uVar9 = FUN_180769ed0(*plVar4,unaff_RBP + 0x7f,1);
    uVar14 = extraout_XMM0_Da_05;
  }
LAB_1808a3569:
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if (*(int *)(unaff_R14[1] + 0x18) != iVar13) {
    return 0x1c;
  }
  plVar4 = (longlong *)*unaff_R14;
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    uVar9 = 0x1c;
  }
  else {
    if ((undefined8 *)plVar4[2] != unaff_R13) {
      *(int *)(unaff_RBP + -0x39) = iVar13;
      uVar9 = func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      if ((ulonglong)plVar4[2] < (ulonglong)*(uint *)(unaff_RBP + -0x39) + 4) {
        uVar9 = 0x11;
        uVar14 = extraout_XMM0_Da_06;
        goto LAB_1808a35d8;
      }
    }
    uVar9 = FUN_180769ed0(*plVar4,unaff_RBP + -0x19,1);
    uVar14 = extraout_XMM0_Da_07;
  }
LAB_1808a35d8:
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if (*(uint *)(unaff_R14 + 8) < 0x55) {
    uVar9 = (ulonglong)unaff_R13 & 0xffffffff;
  }
  else if (*(int *)(unaff_R14[1] + 0x18) == iVar13) {
    plVar4 = (longlong *)*unaff_R14;
    lVar3 = *plVar4;
    if (lVar3 == 0) {
      uVar9 = 0x1c;
    }
    else {
      if ((undefined8 *)plVar4[2] != unaff_R13) {
        *(int *)(unaff_RBP + -0x39) = iVar13;
        uVar9 = func_0x00018076a7d0(lVar3,unaff_RBP + -0x39);
        if ((int)uVar9 != 0) {
          return uVar9;
        }
        if ((ulonglong)plVar4[2] < (ulonglong)*(uint *)(unaff_RBP + -0x39) + 4) {
          uVar9 = 0x11;
          uVar14 = extraout_XMM0_Da_08;
          goto LAB_1808a3652;
        }
      }
      uVar9 = FUN_180769ed0(*plVar4,unaff_RBP + -0x21,1);
      uVar14 = extraout_XMM0_Da_09;
    }
LAB_1808a3652:
    if ((int)uVar9 != 0) {
      return uVar9;
    }
    unaff_R15D = *(uint *)(unaff_RBP + -0x21);
    uVar9 = 0xd;
    if (unaff_R15D < 3) {
      uVar9 = (ulonglong)unaff_R13 & 0xffffffff;
    }
  }
  else {
    uVar9 = 0x1c;
  }
  if ((int)uVar9 != 0) {
    return uVar9;
  }
  if ((0x54 < unaff_EDI) &&
     (uVar9 = FUN_1808de0e0(uVar14,0), uVar14 = extraout_XMM0_Da_10, (int)uVar9 != 0)) {
    return uVar9;
  }
  if (unaff_EDI < 0x55) {
    uVar8 = FUN_1808dde10(uVar14,0);
    uVar9 = (ulonglong)uVar8;
    uVar14 = extraout_XMM0_Da_11;
    if (uVar8 != 0) goto LAB_1808a3889;
  }
  iVar1 = *(int *)(unaff_RBP + -0x19);
  if (iVar1 == 0) {
    puVar10 = (undefined8 *)
              FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x98,&UNK_180986e70,0x98a,
                            (ulonglong)unaff_R13 & 0xffffffff);
    if (puVar10 == (undefined8 *)0x0) {
      uVar9 = 0x26;
      goto LAB_1808a3889;
    }
    uVar14 = *(undefined4 *)(unaff_RBP + 0x7f);
    func_0x0001808b0260(puVar10,0x13,unaff_RBP + -0x31);
    *puVar10 = &UNK_180986d98;
    uVar2 = *(undefined4 *)(unaff_RBP + -0xd);
    uVar5 = *(undefined4 *)(unaff_RBP + -9);
    uVar6 = *(undefined4 *)(unaff_RBP + -5);
    *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(unaff_RBP + -0x11);
    *(undefined4 *)((longlong)puVar10 + 0x34) = uVar2;
    *(undefined4 *)(puVar10 + 7) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar6;
    *puVar10 = &UNK_180986e10;
    *(undefined4 *)(puVar10 + 8) = uVar14;
    *(uint *)((longlong)puVar10 + 0x44) = unaff_R15D;
    *(int *)(puVar10 + 9) = iVar13;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    *(undefined4 *)(puVar10 + 0x12) = 0;
    uVar8 = FUN_18089aa40(puVar10);
    uVar14 = extraout_XMM0_Da_22;
joined_r0x0001808a3b38:
    uVar9 = (ulonglong)uVar8;
    unaff_R13 = puVar10;
joined_r0x0001808a3a67:
    if (uVar8 != 0) goto LAB_1808a3889;
  }
  else {
    if (iVar1 == 1) {
      puVar10 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x60,&UNK_180986e70,0x992,
                              (ulonglong)unaff_R13 & 0xffffffff);
      if (puVar10 == (undefined8 *)0x0) {
        uVar9 = 0x26;
        goto LAB_1808a3889;
      }
      uVar2 = *(undefined4 *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar10,0x13,unaff_RBP + -0x31);
      *puVar10 = &UNK_180986d98;
      uVar14 = *(undefined4 *)(unaff_RBP + -0x11);
      uVar5 = *(undefined4 *)(unaff_RBP + -0xd);
      uVar6 = *(undefined4 *)(unaff_RBP + -9);
      uVar7 = *(undefined4 *)(unaff_RBP + -5);
      *(undefined4 *)(puVar10 + 6) = uVar14;
      *(undefined4 *)((longlong)puVar10 + 0x34) = uVar5;
      *(undefined4 *)(puVar10 + 7) = uVar6;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar7;
      *(uint *)((longlong)puVar10 + 0x44) = unaff_R15D;
      piVar12 = (int *)((longlong)puVar10 + 0x54);
      *(undefined4 *)(puVar10 + 8) = uVar2;
      *piVar12 = iVar13;
      *(undefined4 *)(puVar10 + 9) = 1;
      *puVar10 = &UNK_180986de8;
      *(int *)(puVar10 + 10) = iVar13;
      *(int *)(puVar10 + 0xb) = iVar13;
      unaff_R13 = puVar10;
      if (*(uint *)(unaff_R14 + 8) < 0x55) {
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar8 = FUN_1808995c0(*unaff_R14,puVar10 + 10);
          uVar9 = (ulonglong)uVar8;
          uVar14 = extraout_XMM0_Da_20;
          if (uVar8 == 0) {
            if (*(int *)(unaff_R14[1] + 0x18) == iVar13) goto LAB_1808a3a53;
            uVar9 = 0x1c;
          }
        }
        else {
          uVar9 = 0x1c;
        }
      }
      else {
        piVar12 = (int *)(puVar10 + 0xb);
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
LAB_1808a3a53:
          uVar8 = FUN_1808995c0(*unaff_R14,piVar12);
          uVar9 = (ulonglong)uVar8;
          uVar14 = extraout_XMM0_Da_21;
          if (uVar8 == 0) goto LAB_1808a385d;
        }
        else {
          uVar9 = 0x1c;
        }
      }
      uVar8 = (uint)uVar9;
      goto joined_r0x0001808a3a67;
    }
    if (iVar1 == 2) {
      puVar10 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x80,&UNK_180986e70,0x99a,
                              (ulonglong)unaff_R13 & 0xffffffff);
      if (puVar10 == (undefined8 *)0x0) {
        uVar9 = 0x26;
        goto LAB_1808a3889;
      }
      uVar14 = *(undefined4 *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar10,0x13,unaff_RBP + -0x31);
      *puVar10 = &UNK_180986d98;
      uVar2 = *(undefined4 *)(unaff_RBP + -0xd);
      uVar5 = *(undefined4 *)(unaff_RBP + -9);
      uVar6 = *(undefined4 *)(unaff_RBP + -5);
      *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(unaff_RBP + -0x11);
      *(undefined4 *)((longlong)puVar10 + 0x34) = uVar2;
      *(undefined4 *)(puVar10 + 7) = uVar5;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar6;
      *(undefined4 *)(puVar10 + 8) = uVar14;
      *(uint *)((longlong)puVar10 + 0x44) = unaff_R15D;
      *(undefined4 *)(puVar10 + 9) = 2;
      *puVar10 = &UNK_180986dc0;
      puVar10[10] = unaff_R13;
      puVar10[0xb] = unaff_R13;
      puVar11 = (undefined4 *)FUN_180847820();
      uVar14 = puVar11[1];
      uVar2 = puVar11[2];
      uVar5 = puVar11[3];
      *(undefined4 *)(puVar10 + 0xc) = *puVar11;
      *(undefined4 *)((longlong)puVar10 + 100) = uVar14;
      *(undefined4 *)(puVar10 + 0xd) = uVar2;
      *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
      puVar10[0xe] = unaff_R13;
      *(int *)(puVar10 + 0xf) = iVar13;
      *(char *)((longlong)puVar10 + 0x7c) = (char)unaff_R13;
      uVar8 = FUN_18089b460(puVar10);
      uVar14 = extraout_XMM0_Da_19;
      goto joined_r0x0001808a3b38;
    }
    if (iVar1 == 3) {
      puVar10 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x68,&UNK_180986e70,0x9a2,
                              (ulonglong)unaff_R13 & 0xffffffff);
      if (puVar10 == (undefined8 *)0x0) {
        uVar9 = 0x26;
        goto LAB_1808a3889;
      }
      uVar2 = *(undefined4 *)(unaff_RBP + 0x7f);
      func_0x0001808b0260(puVar10,0x13,unaff_RBP + -0x31);
      *puVar10 = &UNK_180986d98;
      uVar14 = *(undefined4 *)(unaff_RBP + -0x11);
      uVar5 = *(undefined4 *)(unaff_RBP + -0xd);
      uVar6 = *(undefined4 *)(unaff_RBP + -9);
      uVar7 = *(undefined4 *)(unaff_RBP + -5);
      *(undefined4 *)(puVar10 + 6) = uVar14;
      *(undefined4 *)((longlong)puVar10 + 0x34) = uVar5;
      *(undefined4 *)(puVar10 + 7) = uVar6;
      *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar7;
      *puVar10 = &UNK_180986e38;
      *(uint *)((longlong)puVar10 + 0x44) = unaff_R15D;
      *(int *)(puVar10 + 0xb) = iVar13;
      *(undefined4 *)(puVar10 + 0xc) = 0;
      *(int *)((longlong)puVar10 + 0x54) = iVar13;
      *(undefined4 *)(puVar10 + 8) = uVar2;
      *(undefined8 **)(unaff_RBP + -0x21) = puVar10 + 0xc;
      *(undefined4 *)((longlong)puVar10 + 0x5c) = 0;
      *(undefined4 *)((longlong)puVar10 + 100) = 0;
      *(undefined4 *)(puVar10 + 9) = 3;
      *(undefined4 *)(puVar10 + 10) = 7;
      *(undefined4 **)(unaff_RBP + -0x39) = (undefined4 *)((longlong)puVar10 + 100);
      unaff_R13 = puVar10;
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar8 = FUN_1808aed00(*unaff_R14,puVar10 + 10,4);
        uVar9 = (ulonglong)uVar8;
        uVar14 = extraout_XMM0_Da_12;
        if (uVar8 == 0) {
          if (*(int *)(unaff_R14[1] + 0x18) == 0) {
            uVar8 = FUN_1808aed00(*unaff_R14,(int *)((longlong)puVar10 + 0x54),4);
            uVar9 = (ulonglong)uVar8;
            uVar14 = extraout_XMM0_Da_13;
            if (uVar8 == 0) {
              if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                uVar8 = FUN_1808995c0(*unaff_R14,puVar10 + 0xb);
                uVar9 = (ulonglong)uVar8;
                uVar14 = extraout_XMM0_Da_14;
                if (uVar8 == 0) {
                  if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                    uVar8 = FUN_1808995c0(*unaff_R14,(undefined4 *)((longlong)puVar10 + 0x5c));
                    uVar9 = (ulonglong)uVar8;
                    uVar14 = extraout_XMM0_Da_15;
                    if (uVar8 == 0) {
                      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                        uVar8 = FUN_1808995c0(*unaff_R14,*(undefined8 *)(unaff_RBP + -0x21));
                        uVar9 = (ulonglong)uVar8;
                        uVar14 = extraout_XMM0_Da_16;
                        if (uVar8 == 0) {
                          if (*(int *)(unaff_R14[1] + 0x18) == 0) {
                            uVar8 = FUN_1808995c0(*unaff_R14,*(undefined8 *)(unaff_RBP + -0x39));
                            uVar9 = (ulonglong)uVar8;
                            uVar14 = extraout_XMM0_Da_17;
                            if (uVar8 == 0) goto LAB_1808a385d;
                          }
                          else {
                            uVar9 = 0x1c;
                          }
                        }
                      }
                      else {
                        uVar9 = 0x1c;
                      }
                    }
                  }
                  else {
                    uVar9 = 0x1c;
                  }
                }
              }
              else {
                uVar9 = 0x1c;
              }
            }
          }
          else {
            uVar9 = 0x1c;
          }
        }
      }
      else {
        uVar9 = 0x1c;
      }
      uVar8 = (uint)uVar9;
      goto joined_r0x0001808a3a67;
    }
  }
LAB_1808a385d:
  if (*(uint *)(unaff_RBP + -0x15) < 0x55) {
    uVar8 = FUN_1808de0e0(uVar14,0);
    uVar9 = (ulonglong)uVar8;
    uVar14 = extraout_XMM0_Da_18;
    if (uVar8 != 0) {
LAB_1808a3889:
      if (unaff_R13 == (undefined8 *)0x0) {
        return uVar9;
      }
      (**(code **)*unaff_R13)(unaff_R13,0);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),unaff_R13,&UNK_18095b500,0xc6,1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80(uVar14,unaff_RBP + -1);
}








