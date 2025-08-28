#include "TaleWorlds.Native.Split.h"

// 03_rendering_part051.c - 8 个函数

// 函数: void FUN_180294654(longlong param_1)
void FUN_180294654(longlong param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  longlong unaff_RBX;
  int32_t *unaff_RBP;
  int32_t *unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  int32_t *unaff_R14;
  uint64_t *unaff_R15;
  bool in_ZF;
  int32_t uVar7;
  
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  if (in_ZF) {
    if (*(int *)(param_1 + 0x60) == 0) {
      *(uint64_t *)(unaff_RBP + 7) = 0;
      *(uint64_t *)(unaff_RBP + 0xb) = 0;
      *(uint64_t *)(unaff_RBP + -5) = 0;
      *(uint64_t *)(unaff_RBP + 5) = 0;
      *(uint64_t *)(unaff_RBP + 9) = 0;
      *(uint64_t *)(unaff_RBP + 0xd) = 0;
      *(uint64_t *)(unaff_RBP + -0x10) = 0;
      unaff_RBP[-0xe] = 0;
      *(int8_t *)(unaff_RBP + -0xd) = 1;
      *(int8_t *)(unaff_RBP + -8) = 0;
      *(uint64_t *)(unaff_RBP + -7) = 0;
      *unaff_RBP = 0;
      *(int8_t *)(unaff_RBP + 2) = 0;
      unaff_RBP[3] = 0;
      *(uint64_t *)(unaff_RBP + -0xc) = 0;
      unaff_RBP[-10] = 3;
      unaff_RBP[-9] = 1;
      *(int8_t *)(unaff_RBP + -0x20) = 0;
      *(int8_t *)((longlong)unaff_RBP + -0x7f) = 0;
      *(int8_t *)((longlong)unaff_RBP + -0x7e) = 0x80;
      *(int8_t *)((longlong)unaff_RBP + -0x7d) = 0x3f;
      *(char *)(unaff_RBP + -0x1f) = *(char *)(unaff_RBP + 5);
      *(int8_t *)((longlong)unaff_RBP + -0x7b) = *(int8_t *)((longlong)unaff_RBP + 0x15);
      *(int8_t *)((longlong)unaff_RBP + -0x7a) = *(int8_t *)((longlong)unaff_RBP + 0x16);
      *(int8_t *)((longlong)unaff_RBP + -0x79) = *(int8_t *)((longlong)unaff_RBP + 0x17);
      *(int8_t *)(unaff_RBP + -0x1e) = *(int8_t *)(unaff_RBP + 6);
      *(int8_t *)((longlong)unaff_RBP + -0x77) = *(int8_t *)((longlong)unaff_RBP + 0x19);
      *(int8_t *)((longlong)unaff_RBP + -0x76) = *(int8_t *)((longlong)unaff_RBP + 0x1a);
      *(int8_t *)((longlong)unaff_RBP + -0x75) = *(int8_t *)((longlong)unaff_RBP + 0x1b);
      *(int8_t *)(unaff_RBP + -0x1d) = *(int8_t *)(unaff_RBP + 7);
      *(int8_t *)((longlong)unaff_RBP + -0x73) = *(int8_t *)((longlong)unaff_RBP + 0x1d);
      *(int8_t *)((longlong)unaff_RBP + -0x72) = *(int8_t *)((longlong)unaff_RBP + 0x1e);
      *(int8_t *)((longlong)unaff_RBP + -0x71) = *(int8_t *)((longlong)unaff_RBP + 0x1f);
      *(uint64_t *)(unaff_RBP + -2) = 0;
      *(uint64_t *)(unaff_RBP + 0x10) = 0;
      *(uint64_t *)(unaff_RBP + -0x1c) = *(uint64_t *)(unaff_RBP + 8);
      *(uint64_t *)(unaff_RBP + -0x1a) = *(uint64_t *)(unaff_RBP + 10);
      uVar7 = (int32_t)*(uint64_t *)(unaff_RBP + 0x10);
      unaff_RBP[-0x18] = unaff_RBP[0xc];
      unaff_RBP[-0x17] = unaff_RBP[0xd];
      unaff_RBP[-0x16] = unaff_RBP[0xe];
      unaff_RBP[-0x15] = unaff_RBP[0xf];
      *(uint64_t *)(unaff_RBP + -0x14) = *(uint64_t *)(unaff_RBP + 0x10);
      if (*(char *)(unaff_RBP + 5) == '\0') {
        uVar7 = 0x676f7250;
        unaff_RBP[-0x1b] = 0x70333120;
        unaff_RBP[-0x1f] = 0x676f7250;
        unaff_RBP[-0x1e] = 0x6c437967;
        unaff_RBP[-0x1d] = 0x2e6e6165;
        unaff_RBP[-0x1c] = 0x2c667474;
        *(int16_t *)(unaff_RBP + -0x1a) = 0x78;
      }
      lVar4 = FUN_180294c20(uVar7,&UNK_18098e3b0);
      *(int32_t *)(lVar4 + 0xc) = 0x3f800000;
    }
    FUN_180294f50();
  }
  pbVar3 = *(byte **)(unaff_RBX + 0x18);
  if (pbVar3 != (byte *)0x0) {
    iVar6 = *(int *)(unaff_RBX + 0x28);
    iVar2 = *(int *)(unaff_RBX + 0x2c);
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    puVar5 = (uint *)func_0x000180120ce0((longlong)iVar2 * (longlong)iVar6 * 4,_DAT_180c8a9a8);
    *(uint **)(unaff_RBX + 0x20) = puVar5;
    for (iVar6 = *(int *)(unaff_RBX + 0x2c) * *(int *)(unaff_RBX + 0x28); 0 < iVar6;
        iVar6 = iVar6 + -1) {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *puVar5 = (uint)bVar1 << 0x18 | 0xffffff;
      puVar5 = puVar5 + 1;
    }
  }
  *unaff_R15 = *(uint64_t *)(unaff_RBX + 0x20);
  if (unaff_R14 != (int32_t *)0x0) {
    *unaff_R14 = *(int32_t *)(unaff_RBX + 0x28);
  }
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = *(int32_t *)(unaff_RBX + 0x2c);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x14) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180294835(void)
void FUN_180294835(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_R14;
  uint64_t *unaff_R15;
  
  *unaff_R15 = *(uint64_t *)(unaff_RBX + 0x20);
  if (unaff_R14 != (int32_t *)0x0) {
    *unaff_R14 = *(int32_t *)(unaff_RBX + 0x28);
  }
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = *(int32_t *)(unaff_RBX + 0x2c);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180294849(void)
void FUN_180294849(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t *unaff_RSI;
  int32_t *unaff_R14;
  
  *unaff_R14 = *(int32_t *)(unaff_RBX + 0x28);
  if (unaff_RSI != (int32_t *)0x0) {
    *unaff_RSI = *(int32_t *)(unaff_RBX + 0x2c);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18029485c(void)
void FUN_18029485c(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t *unaff_RSI;
  
  *unaff_RSI = *(int32_t *)(unaff_RBX + 0x2c);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x50) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180294880(longlong param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  uint64_t uVar8;
  longlong lVar9;
  int iVar10;
  uint64_t *puVar11;
  int8_t auStackX_8 [8];
  longlong lStackX_10;
  int8_t *puStackX_18;
  longlong lStackX_20;
  
  if (*(char *)(param_2 + 9) == '\0') {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    lStackX_10 = func_0x000180120ce0(0x70,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
    puStackX_18 = auStackX_8;
    lStackX_20 = lStackX_10;
    if (lStackX_10 != 0) {
      lStackX_10 = FUN_180296a70(lStackX_10);
    }
    FUN_18013d860(param_1 + 0x40,&lStackX_10);
  }
  iVar2 = *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x60) == iVar2) {
    iVar10 = *(int *)(param_1 + 0x60) + 1;
    if (iVar2 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar2 / 2 + iVar2;
    }
    if (iVar10 < iVar7) {
      iVar10 = iVar7;
    }
    if (iVar2 < iVar10) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      uVar8 = func_0x000180120ce0((longlong)iVar10 * 0x88,_DAT_180c8a9a8);
      if (*(longlong *)(param_1 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar8,*(longlong *)(param_1 + 0x68),(longlong)*(int *)(param_1 + 0x60) * 0x88);
      }
      *(uint64_t *)(param_1 + 0x68) = uVar8;
      *(int *)(param_1 + 100) = iVar10;
    }
  }
  lVar9 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
  lVar3 = *(longlong *)(param_1 + 0x68);
  uVar8 = param_2[1];
  *(uint64_t *)(lVar9 + lVar3) = *param_2;
  ((uint64_t *)(lVar9 + lVar3))[1] = uVar8;
  uVar8 = param_2[3];
  puVar11 = (uint64_t *)(lVar9 + 0x10 + lVar3);
  *puVar11 = param_2[2];
  puVar11[1] = uVar8;
  uVar8 = param_2[5];
  puVar11 = (uint64_t *)(lVar9 + 0x20 + lVar3);
  *puVar11 = param_2[4];
  puVar11[1] = uVar8;
  uVar8 = param_2[7];
  puVar11 = (uint64_t *)(lVar9 + 0x30 + lVar3);
  *puVar11 = param_2[6];
  puVar11[1] = uVar8;
  uVar8 = param_2[9];
  puVar11 = (uint64_t *)(lVar9 + 0x40 + lVar3);
  *puVar11 = param_2[8];
  puVar11[1] = uVar8;
  uVar8 = param_2[0xb];
  puVar11 = (uint64_t *)(lVar9 + 0x50 + lVar3);
  *puVar11 = param_2[10];
  puVar11[1] = uVar8;
  uVar8 = param_2[0xd];
  puVar11 = (uint64_t *)(lVar9 + 0x60 + lVar3);
  *puVar11 = param_2[0xc];
  puVar11[1] = uVar8;
  uVar4 = *(int32_t *)((longlong)param_2 + 0x74);
  uVar5 = *(int32_t *)(param_2 + 0xf);
  uVar6 = *(int32_t *)((longlong)param_2 + 0x7c);
  puVar1 = (int32_t *)(lVar9 + 0x70 + lVar3);
  *puVar1 = *(int32_t *)(param_2 + 0xe);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(uint64_t *)(lVar9 + 0x80 + lVar3) = param_2[0x10];
  iVar2 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar2 + 1;
  puVar11 = (uint64_t *)((longlong)iVar2 * 0x88 + *(longlong *)(param_1 + 0x68));
  if (puVar11[0x10] == 0) {
    puVar11[0x10] =
         *(uint64_t *)
          (*(longlong *)(param_1 + 0x48) + -8 + (longlong)*(int *)(param_1 + 0x40) * 8);
  }
  if (*(char *)((longlong)puVar11 + 0xc) == '\0') {
    iVar2 = *(int *)(puVar11 + 1);
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar8 = func_0x000180120ce0((longlong)iVar2,_DAT_180c8a9a8);
    *puVar11 = uVar8;
    *(int8_t *)((longlong)puVar11 + 0xc) = 1;
                    // WARNING: Subroutine does not return
    memcpy(uVar8,*param_2,(longlong)*(int *)(puVar11 + 1));
  }
  FUN_1802943c0(param_1);
  return puVar11[0x10];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180294a90(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void FUN_180294a90(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t *param_5,longlong param_6)

{
  int8_t auStack_158 [32];
  uint64_t uStack_138;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  longlong lStack_100;
  uint64_t uStack_f8;
  longlong lStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  uint64_t uStack_b8;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  longlong lStack_70;
  uint64_t uStack_68;
  ulonglong uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  uint64_t uStack_28;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if (param_5 == (uint64_t *)0x0) {
    uStack_58 = 0x3f800000;
    uStack_a8 = 0;
    uStack_a0 = CONCAT35(uStack_a0._5_3_,0x100000000);
    uStack_98 = 0;
    uStack_90 = 0x100000003;
    uStack_88 = uStack_88 & 0xffffff00;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    lStack_70 = 0;
    uStack_68 = 0x7f7fffff00000000;
    uStack_60 = (uStack_60 >> 8 & 0xffffff) << 8;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    uStack_a8 = *param_5;
    uStack_a0 = param_5[1];
    uStack_98 = param_5[2];
    uStack_90 = param_5[3];
    uStack_88 = (uint)param_5[4];
    uStack_84 = (int32_t)((ulonglong)param_5[4] >> 0x20);
    uStack_80 = (int32_t)param_5[5];
    uStack_7c = (int32_t)((ulonglong)param_5[5] >> 0x20);
    uStack_68 = param_5[8];
    uStack_60 = param_5[9];
    lStack_70 = param_5[7];
    uStack_78 = (int32_t)param_5[6];
    uStack_74 = (int32_t)((ulonglong)param_5[6] >> 0x20);
    uStack_48 = (int32_t)param_5[0xc];
    uStack_44 = (int32_t)((ulonglong)param_5[0xc] >> 0x20);
    uStack_40 = (int32_t)param_5[0xd];
    uStack_3c = (int32_t)((ulonglong)param_5[0xd] >> 0x20);
    uStack_28 = param_5[0x10];
    uStack_58 = (int32_t)param_5[10];
    uStack_54 = (int32_t)((ulonglong)param_5[10] >> 0x20);
    uStack_50 = (int32_t)param_5[0xb];
    uStack_4c = (int32_t)((ulonglong)param_5[0xb] >> 0x20);
    uStack_38 = (int32_t)param_5[0xe];
    uStack_34 = (int32_t)((ulonglong)param_5[0xe] >> 0x20);
    uStack_30 = (int32_t)param_5[0xf];
    uStack_2c = (int32_t)((ulonglong)param_5[0xf] >> 0x20);
  }
  uStack_108 = CONCAT44(uStack_74,uStack_78);
  uStack_118 = CONCAT44(uStack_84,uStack_88);
  uStack_110 = CONCAT44(uStack_7c,uStack_80);
  uStack_120 = uStack_90;
  uStack_e8 = CONCAT44(uStack_54,uStack_58);
  uStack_e0 = CONCAT44(uStack_4c,uStack_50);
  uStack_f8 = uStack_68;
  lStack_f0 = uStack_60;
  uStack_d8 = CONCAT44(uStack_44,uStack_48);
  uStack_d0 = CONCAT44(uStack_3c,uStack_40);
  lStack_100 = lStack_70;
  if (param_6 != 0) {
    lStack_100 = param_6;
  }
  _uStack_128 = CONCAT44(param_4,(int)uStack_98);
  uStack_c8 = uStack_38;
  uStack_c4 = uStack_34;
  uStack_c0 = uStack_30;
  uStack_bc = uStack_2c;
  uStack_b8 = uStack_28;
  _uStack_130 = CONCAT44((int)((ulonglong)uStack_a0 >> 0x20),param_3);
  uStack_138 = param_2;
  FUN_180294880(param_1,&uStack_138);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180294c20(uint64_t param_1,char *param_2,int32_t param_3,uint64_t *param_4,
void FUN_180294c20(uint64_t param_1,char *param_2,int32_t param_3,uint64_t *param_4,
                  uint64_t param_5)

{
  uint64_t uVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  int8_t *puVar5;
  char cVar6;
  int8_t auStack_1b8 [32];
  uint64_t *puStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  int32_t uStack_180;
  int8_t uStack_17c;
  undefined3 uStack_17b;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  longlong lStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  uint64_t uStack_108;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  ulonglong uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint64_t uStack_78;
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_2[lVar2] != '\0');
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
  }
  lVar2 = func_0x000180120ce0((longlong)((((int)lVar2 + 4) / 5) * 4),_DAT_180c8a9a8);
  cVar6 = *param_2;
  if (cVar6 != '\0') {
    pcVar4 = param_2 + 2;
    puVar5 = (int8_t *)(lVar2 + 2);
    do {
      iVar3 = (((((((((int)pcVar4[2] - (('[' < pcVar4[2]) + 0x23)) * 0x55 -
                    (('[' < pcVar4[1]) + 0x23)) + (int)pcVar4[1]) * 0x55 - (('[' < *pcVar4) + 0x23))
                 + (int)*pcVar4) * 0x55 - (('[' < pcVar4[-1]) + 0x23)) + (int)pcVar4[-1]) * 0x55 -
              (('[' < cVar6) + 0x23)) + (int)cVar6;
      puVar5[-2] = (char)iVar3;
      puVar5[-1] = (char)((uint)iVar3 >> 8);
      *puVar5 = (char)((uint)iVar3 >> 0x10);
      puVar5[1] = (char)((uint)iVar3 >> 0x18);
      cVar6 = pcVar4[3];
      pcVar4 = pcVar4 + 5;
      puVar5 = puVar5 + 4;
    } while (cVar6 != '\0');
  }
  iVar3 = (uint)*(byte *)(lVar2 + 8) * 0x1000000 + (uint)*(byte *)(lVar2 + 9) * 0x10000 +
          (uint)*(byte *)(lVar2 + 10) * 0x100 + (uint)*(byte *)(lVar2 + 0xb);
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(iVar3,_DAT_180c8a9a8);
  FUN_180298ee0(uVar1,lVar2);
  if (param_4 == (uint64_t *)0x0) {
    uStack_a8 = 0x3f800000;
    uStack_f8 = 0;
    uStack_f0 = CONCAT35(uStack_f0._5_3_,0x100000000);
    uStack_e8 = 0;
    uStack_e0 = 0x100000003;
    uStack_d8 = uStack_d8 & 0xffffff00;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0x7f7fffff00000000;
    uStack_b0 = (uStack_b0 >> 8 & 0xffffff) << 8;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    uStack_f8 = *param_4;
    uStack_f0 = param_4[1];
    uStack_e8 = param_4[2];
    uStack_e0 = param_4[3];
    uStack_c0 = param_4[7];
    uStack_d8 = (uint)param_4[4];
    uStack_d4 = (int32_t)((ulonglong)param_4[4] >> 0x20);
    uStack_d0 = (int32_t)param_4[5];
    uStack_cc = (int32_t)((ulonglong)param_4[5] >> 0x20);
    uStack_b8 = param_4[8];
    uStack_b0 = param_4[9];
    uStack_c8 = (int32_t)param_4[6];
    uStack_c4 = (int32_t)((ulonglong)param_4[6] >> 0x20);
    uStack_a8 = (int32_t)param_4[10];
    uStack_a4 = (int32_t)((ulonglong)param_4[10] >> 0x20);
    uStack_a0 = (int32_t)param_4[0xb];
    uStack_9c = (int32_t)((ulonglong)param_4[0xb] >> 0x20);
    uStack_98 = (int32_t)param_4[0xc];
    uStack_94 = (int32_t)((ulonglong)param_4[0xc] >> 0x20);
    uStack_90 = (int32_t)param_4[0xd];
    uStack_8c = (int32_t)((ulonglong)param_4[0xd] >> 0x20);
    uStack_78 = param_4[0x10];
    uStack_88 = (int32_t)param_4[0xe];
    uStack_84 = (int32_t)((ulonglong)param_4[0xe] >> 0x20);
    uStack_80 = (int32_t)param_4[0xf];
    uStack_7c = (int32_t)((ulonglong)param_4[0xf] >> 0x20);
  }
  uStack_190 = param_5;
  uStack_188 = uStack_f8;
  uStack_168 = CONCAT44(uStack_d4,uStack_d8);
  uStack_160 = CONCAT44(uStack_cc,uStack_d0);
  uStack_17b = (undefined3)((ulonglong)uStack_f0 >> 0x28);
  _uStack_180 = CONCAT14(1,(int)uStack_f0);
  uStack_178 = uStack_e8;
  uStack_170 = uStack_e0;
  uStack_158 = CONCAT44(uStack_c4,uStack_c8);
  uStack_150 = uStack_c0;
  uStack_138 = CONCAT44(uStack_a4,uStack_a8);
  uStack_130 = CONCAT44(uStack_9c,uStack_a0);
  uStack_148 = uStack_b8;
  lStack_140 = uStack_b0;
  uStack_128 = CONCAT44(uStack_94,uStack_98);
  uStack_120 = CONCAT44(uStack_8c,uStack_90);
  puStack_198 = &uStack_188;
  uStack_118 = uStack_88;
  uStack_114 = uStack_84;
  uStack_110 = uStack_80;
  uStack_10c = uStack_7c;
  uStack_108 = uStack_78;
  FUN_180294a90(param_1,uVar1,iVar3,param_3);
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(lVar2,_DAT_180c8a9a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180294f50(longlong param_1)
void FUN_180294f50(longlong param_1)

{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  int8_t auStack_308 [96];
  uint uStack_2a8;
  uint uStack_294;
  longlong lStack_288;
  longlong lStack_270;
  uint64_t uStack_268;
  int32_t uStack_260;
  int32_t uStack_25c;
  int32_t uStack_258;
  uint64_t uStack_254;
  int32_t uStack_24c;
  uint64_t uStack_248;
  longlong lStack_238;
  uint64_t uStack_230;
  uint64_t uStack_1d8;
  ulonglong uStack_c8;
  
  uStack_1d8 = 0xfffffffffffffffe;
  uStack_c8 = _DAT_180bf00a8 ^ (ulonglong)auStack_308;
  lStack_288 = param_1;
  if (*(int *)(param_1 + 0x70) < 0) {
    uStack_258 = 0xffffffff;
    uStack_254 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uStack_260 = 0x80000000;
    uStack_25c = 0x1b00d9;
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      uStack_25c = 0x20002;
    }
    FUN_180299330(param_1 + 0x50,&uStack_260);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x50) + -1;
  }
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x38) = 0;
  FUN_1802943c0(param_1);
  lStack_270 = 0;
  uStack_268 = 0;
  lStack_238 = 0;
  uStack_230 = 0;
  uVar1 = *(uint *)(param_1 + 0x60);
  uStack_2a8 = uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
    if ((int)uVar1 < 8) {
      uVar3 = 8;
    }
    if (0 < (int)uVar3) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      uStack_268 = func_0x000180120ce0((longlong)(int)uVar3 * 0x110,_DAT_180c8a9a8);
      lStack_270 = (ulonglong)uVar3 << 0x20;
    }
  }
  uVar2 = uStack_268;
  lStack_270 = CONCAT44(lStack_270._4_4_,uVar1);
  uVar3 = *(uint *)(param_1 + 0x40);
  uStack_294 = uVar3;
  if (0 < (int)uVar3) {
    uVar4 = uVar3;
    if ((int)uVar3 < 8) {
      uVar4 = 8;
    }
    if (0 < (int)uVar4) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      uStack_230 = func_0x000180120ce0((longlong)(int)uVar4 << 5,_DAT_180c8a9a8);
      lStack_238 = (ulonglong)uVar4 << 0x20;
    }
  }
  lStack_238 = CONCAT44(lStack_238._4_4_,uVar3);
                    // WARNING: Subroutine does not return
  memset(uVar2,0,(longlong)(int)(uVar1 * 0x110));
}





// 函数: void FUN_180296680(longlong param_1)
void FUN_180296680(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int8_t uVar3;
  longlong lVar4;
  int iVar5;
  int8_t uVar6;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int8_t uVar7;
  
  iVar2 = *(int *)(param_1 + 0x28);
  lVar10 = (longlong)*(int *)(param_1 + 0x70) * 0x20 + *(longlong *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    iVar5 = 0;
    lVar11 = 0;
    do {
      iVar8 = 0;
      do {
        lVar4 = (longlong)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&UNK_180991280)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(lVar4 + *(longlong *)(param_1 + 0x18)) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991280)[lVar11] == 'X') {
          uVar3 = 0xff;
        }
        *(int8_t *)(lVar4 + 0x6d + *(longlong *)(param_1 + 0x18)) = uVar3;
        lVar4 = (longlong)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&UNK_180991281)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 1 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991281)[lVar11] == 'X') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 0x6e + lVar4) = uVar3;
        lVar4 = (longlong)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&UNK_180991282)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 2 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991282)[lVar11] == 'X') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 0x6f + lVar4) = uVar3;
        lVar4 = (longlong)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        uVar6 = 0xff;
        if ((&UNK_180991283)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 3 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991283)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 0x70 + lVar4) = uVar3;
        lVar4 = (longlong)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&UNK_180991284)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 4 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991284)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 0x71 + lVar4) = uVar3;
        lVar4 = (longlong)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&UNK_180991285)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 5 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991285)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 0x72 + lVar4) = uVar3;
        lVar4 = (longlong)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&UNK_180991286)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 6 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991286)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 0x73 + lVar4) = uVar3;
        lVar4 = (longlong)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        uVar7 = 0xff;
        uVar6 = 0xff;
        if ((&UNK_180991287)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 7 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991287)[lVar11] == 'X') {
          uVar3 = uVar7;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 0x74 + lVar4) = uVar3;
        lVar4 = (longlong)
                (int)((uint)*(ushort *)(lVar10 + 8) +
                     ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8);
        uVar3 = 0;
        if ((&UNK_180991288)[lVar11] == '.') {
          uVar3 = 0xff;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 8 + lVar4) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991288)[lVar11] == 'X') {
          uVar3 = uVar7;
        }
        *(int8_t *)(*(longlong *)(param_1 + 0x18) + 0x75 + lVar4) = uVar3;
        iVar9 = (uint)*(ushort *)(lVar10 + 8) +
                ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8;
        uVar3 = 0;
        if ((&UNK_180991289)[lVar11] == '.') {
          uVar3 = uVar7;
        }
        *(int8_t *)((longlong)iVar9 + 9 + *(longlong *)(param_1 + 0x18)) = uVar3;
        uVar3 = 0;
        if ((&UNK_180991289)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)((longlong)iVar9 + 0x76 + *(longlong *)(param_1 + 0x18)) = uVar3;
        iVar9 = (uint)*(ushort *)(lVar10 + 8) +
                ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8;
        uVar3 = 0;
        if ((&UNK_18099128a)[lVar11] == '.') {
          uVar3 = uVar7;
        }
        *(int8_t *)((longlong)iVar9 + 10 + *(longlong *)(param_1 + 0x18)) = uVar3;
        uVar3 = 0;
        if ((&UNK_18099128a)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        *(int8_t *)((longlong)iVar9 + 0x77 + *(longlong *)(param_1 + 0x18)) = uVar3;
        iVar9 = (uint)*(ushort *)(lVar10 + 8) +
                ((uint)*(ushort *)(lVar10 + 10) + iVar5) * iVar2 + iVar8;
        uVar3 = 0;
        if ((&UNK_18099128b)[lVar11] == '.') {
          uVar3 = uVar7;
        }
        *(int8_t *)((longlong)iVar9 + 0xb + *(longlong *)(param_1 + 0x18)) = uVar3;
        uVar3 = 0;
        if ((&UNK_18099128b)[lVar11] == 'X') {
          uVar3 = uVar6;
        }
        lVar11 = lVar11 + 0xc;
        iVar8 = iVar8 + 0xc;
        *(int8_t *)((longlong)iVar9 + 0x78 + *(longlong *)(param_1 + 0x18)) = uVar3;
      } while (iVar8 < 0x6c);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1b);
  }
  else {
    iVar5 = (uint)*(ushort *)(lVar10 + 10) * iVar2 + (uint)*(ushort *)(lVar10 + 8);
    *(int8_t *)(*(longlong *)(param_1 + 0x18) + 1 + (longlong)(iVar5 + iVar2)) = 0xff;
    *(int8_t *)((longlong)(iVar5 + iVar2) + *(longlong *)(param_1 + 0x18)) = 0xff;
    *(int8_t *)(*(longlong *)(param_1 + 0x18) + 1 + (longlong)iVar5) = 0xff;
    *(int8_t *)((longlong)iVar5 + *(longlong *)(param_1 + 0x18)) = 0xff;
  }
  uVar1 = *(ushort *)(lVar10 + 10);
  *(float *)(param_1 + 0x38) = ((float)*(ushort *)(lVar10 + 8) + 0.5) * *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x3c) = ((float)uVar1 + 0.5) * *(float *)(param_1 + 0x34);
  return;
}





