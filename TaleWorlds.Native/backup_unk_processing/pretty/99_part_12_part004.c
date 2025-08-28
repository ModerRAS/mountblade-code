#include "TaleWorlds.Native.Split.h"

// 99_part_12_part004.c - 6 个函数

// 函数: void FUN_1807c9b50(longlong param_1,int param_2,int param_3,int param_4,int param_5)
void FUN_1807c9b50(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  uint64_t *puVar2;
  uint uVar3;
  int iVar4;
  int8_t auStack_a8 [32];
  int32_t uStack_88;
  int iStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int iStack_74;
  int16_t uStack_70;
  int16_t uStack_6e;
  int iStack_6c;
  int iStack_68;
  int16_t uStack_64;
  ushort uStack_62;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    uVar3 = 0;
    if (param_2 == 1) {
      uVar3 = 8;
    }
    else if (param_2 == 2) {
      uVar3 = 0x10;
    }
    else if (param_2 == 3) {
      uVar3 = 0x18;
    }
    else if ((param_2 == 4) || (param_2 == 5)) {
      uVar3 = 0x20;
    }
    FUN_180768620(param_1,0);
    bVar1 = false;
    uStack_80 = 0x20746d66;
    uStack_7c = 0x28;
    if (((param_2 == 5) || (2 < param_3)) || (0x10 < uVar3)) {
      bVar1 = true;
    }
    uStack_70 = 1;
    uStack_50 = 0;
    if (bVar1) {
      uStack_70 = 0xfffe;
    }
    uStack_62 = (ushort)uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    iVar4 = param_4 * param_3 * uVar3;
    iStack_68 = (int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3;
    uStack_64 = (int16_t)((int)(param_3 * uVar3 + ((int)(param_3 * uVar3) >> 0x1f & 7U)) >> 3);
    if (bVar1) {
      uStack_60 = CONCAT62((uint6)uStack_62,0x16);
      puVar2 = (uint64_t *)&system_data_c8e8;
      if (param_2 == 5) {
        puVar2 = (uint64_t *)&system_data_c8f8;
      }
      uStack_58 = *puVar2;
      uStack_50 = puVar2[1];
    }
    iStack_74 = param_5;
    iStack_84 = param_5 + 0x38;
    uStack_78 = 0x61746164;
    uStack_88 = 0x46464952;
    uStack_6e = (short)param_3;
    iStack_6c = param_4;
    FUN_180768650(param_1,&uStack_88,8);
    FUN_180768650(param_1,&UNK_18097c504,4);
    FUN_180768650(param_1,&uStack_80,8);
    FUN_180768650(param_1,&uStack_70,0x28);
    FUN_180768650(param_1,&uStack_78,8);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_a8);
}






// 函数: void FUN_1807c9b88(int32_t param_1)
void FUN_1807c9b88(int32_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  bool bVar4;
  int16_t uVar5;
  int32_t *puVar6;
  uint uVar7;
  longlong unaff_RBP;
  int unaff_EDI;
  int unaff_R14D;
  int unaff_R15D;
  int iVar8;
  int32_t uVar9;
  
  uVar7 = 0;
  if (unaff_EDI == 1) {
    uVar7 = 8;
  }
  else if (unaff_EDI == 2) {
    uVar7 = 0x10;
  }
  else if (unaff_EDI == 3) {
    uVar7 = 0x18;
  }
  else if ((unaff_EDI == 4) || (unaff_EDI == 5)) {
    uVar7 = 0x20;
  }
  FUN_180768620(param_1,0);
  bVar4 = false;
  *(int32_t *)(unaff_RBP + -0x58) = 0x20746d66;
  *(int32_t *)(unaff_RBP + -0x54) = 0x28;
  if (((unaff_EDI == 5) || (2 < unaff_R14D)) || (0x10 < uVar7)) {
    bVar4 = true;
  }
  *(int *)(unaff_RBP + -0x44) = unaff_R15D;
  uVar5 = 1;
  *(short *)(unaff_RBP + -0x46) = (short)unaff_R14D;
  *(uint64_t *)(unaff_RBP + -0x28) = 0;
  if (bVar4) {
    uVar5 = 0xfffe;
  }
  *(short *)(unaff_RBP + -0x3a) = (short)uVar7;
  *(int16_t *)(unaff_RBP + -0x48) = uVar5;
  uVar9 = 0;
  *(uint64_t *)(unaff_RBP + -0x38) = 0;
  *(uint64_t *)(unaff_RBP + -0x30) = 0;
  iVar8 = unaff_R15D * unaff_R14D * uVar7;
  *(int *)(unaff_RBP + -0x40) = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
  *(short *)(unaff_RBP + -0x3c) =
       (short)((int)(unaff_R14D * uVar7 + ((int)(unaff_R14D * uVar7) >> 0x1f & 7U)) >> 3);
  if (bVar4) {
    *(short *)(unaff_RBP + -0x36) = (short)uVar7;
    *(int16_t *)(unaff_RBP + -0x38) = 0x16;
    puVar6 = (int32_t *)&system_data_c8e8;
    if (unaff_EDI == 5) {
      puVar6 = (int32_t *)&system_data_c8f8;
    }
    uVar9 = *puVar6;
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *(int32_t *)(unaff_RBP + -0x30) = uVar9;
    *(int32_t *)(unaff_RBP + -0x2c) = uVar1;
    *(int32_t *)(unaff_RBP + -0x28) = uVar2;
    *(int32_t *)(unaff_RBP + -0x24) = uVar3;
  }
  *(int *)(unaff_RBP + -0x4c) = *(int *)(unaff_RBP + 0x50);
  *(int32_t *)(unaff_RBP + -0x50) = 0x61746164;
  *(int32_t *)(unaff_RBP + -0x60) = 0x46464952;
  *(int *)(unaff_RBP + -0x5c) = *(int *)(unaff_RBP + 0x50) + 0x38;
  uVar9 = FUN_180768650(uVar9,unaff_RBP + -0x60,8);
  uVar9 = FUN_180768650(uVar9,&UNK_18097c504,4);
  uVar9 = FUN_180768650(uVar9,unaff_RBP + -0x58,8);
  uVar9 = FUN_180768650(uVar9,unaff_RBP + -0x48,0x28);
  FUN_180768650(uVar9,unaff_RBP + -0x50,8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c9cfc(void)
void FUN_1807c9cfc(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x20) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807c9db0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x230);
  if ((lVar1 != 0) && (lVar1 != param_1 + 0x208)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),lVar1,&UNK_18097c920,0x1ae,1);
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x1f8),
                  &UNK_18097c920,0x1b3,1);
  }
  *(int32_t *)(param_1 + 0x200) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x1e8),
                  &UNK_18097c920,0x1b9,1);
  }
  *(int32_t *)(param_1 + 0x1e0) = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ca010(longlong param_1,uint param_2)
void FUN_1807ca010(longlong param_1,uint param_2)

{
  int *piVar1;
  uint64_t *puVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short *psVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int8_t auStack_88 [32];
  ulonglong uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  uint uStack_48;
  int8_t auStack_44 [4];
  uint auStack_40 [2];
  uint64_t uStack_38;
  int8_t auStack_30 [4];
  int32_t uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  *(int32_t *)(param_1 + 0x28) = 0xf;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  uStack_68 = 0;
  iVar13 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_30,1,8);
  if ((iVar13 != 0) || (iVar13 = func_0x00018076b6b0(auStack_30,&UNK_18095d2a4,4), iVar13 != 0))
  goto FUN_1807ca2c6;
  uStack_68 = 0;
  iVar13 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_44,1,4);
  if ((iVar13 != 0) || (iVar13 = func_0x00018076b6b0(auStack_44,&UNK_18097c504,4), iVar13 != 0))
  goto FUN_1807ca2c6;
  *(uint64_t *)(param_1 + 0x1a8) = 0;
  *(uint64_t *)(param_1 + 0x1b0) = 0;
  *(uint64_t *)(param_1 + 0x1b8) = 0;
  *(uint64_t *)(param_1 + 0x1c0) = 0;
  *(uint64_t *)(param_1 + 0x1c8) = 0;
  *(uint64_t *)(param_1 + 0x1d0) = 0;
  *(uint64_t *)(param_1 + 0x1d8) = 0;
  *(uint64_t **)(param_1 + 8) = (uint64_t *)(param_1 + 0x1a8);
  *(int32_t *)(param_1 + 0x110) = 0xffffffff;
  *(uint64_t *)(param_1 + 0x1e8) = 0;
  *(int32_t *)(param_1 + 0x1e0) = 0;
  iVar13 = FUN_1808168c0(param_1,uStack_2c,0);
  if ((iVar13 != 0) || (*(longlong *)(param_1 + 0x230) == 0)) goto FUN_1807ca2c6;
  if (*(int *)(param_1 + 0x110) == -1) {
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x230),
                  &UNK_18097c920,0x95);
  }
  puVar2 = (uint64_t *)(param_1 + 0x180);
  *puVar2 = 0;
  *(uint64_t *)(param_1 + 0x188) = 0;
  *(uint64_t *)(param_1 + 400) = 0;
  *(uint64_t *)(param_1 + 0x198) = 0;
  *(uint64_t *)(param_1 + 0x1a0) = 0;
  psVar6 = *(short **)(param_1 + 0x230);
  *(int16_t *)puVar2 = 1;
  sVar3 = *psVar6;
  if ((sVar3 == 0x50) || (sVar3 == 0x55)) goto FUN_1807ca2c6;
  if (sVar3 == -2) {
    if (((*(longlong *)(psVar6 + 0xc) != 0x10000000000001) ||
        (*(longlong *)(psVar6 + 0x10) != 0x719b3800aa000080)) &&
       ((*(longlong *)(psVar6 + 0xc) != 0x10000000000003 ||
        (*(longlong *)(psVar6 + 0x10) != 0x719b3800aa000080)))) goto FUN_1807ca2c6;
    uVar12 = *(uint64_t *)(psVar6 + 4);
    *puVar2 = *(uint64_t *)psVar6;
    *(uint64_t *)(param_1 + 0x188) = uVar12;
    uVar12 = *(uint64_t *)(psVar6 + 0xc);
    *(uint64_t *)(param_1 + 400) = *(uint64_t *)(psVar6 + 8);
    *(uint64_t *)(param_1 + 0x198) = uVar12;
    *(uint64_t *)(param_1 + 0x1a0) = *(uint64_t *)(psVar6 + 0x10);
    *(int *)(*(longlong *)(param_1 + 8) + 0x18) =
         (int)(SUB168((ZEXT416(*(uint *)(*(longlong *)(param_1 + 8) + 0x14)) << 3) /
                      ZEXT216(*(ushort *)(param_1 + 0x18e)),0) /
              (ulonglong)*(ushort *)(param_1 + 0x182));
    lVar15 = *(longlong *)(param_1 + 8);
    if ((*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x18) == 0x10000000000003) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x20) == 0x719b3800aa000080)) {
      *(int32_t *)(lVar15 + 8) = 5;
      goto LAB_1807ca2a3;
    }
    sVar4 = *(short *)(param_1 + 0x18e);
    if (sVar4 == 8) {
      *(int32_t *)(lVar15 + 8) = 1;
    }
    else if (sVar4 == 0x10) {
      *(int32_t *)(lVar15 + 8) = 2;
    }
    else if (sVar4 == 0x18) {
      *(int32_t *)(lVar15 + 8) = 3;
    }
    else {
      if (sVar4 != 0x20) goto FUN_1807ca2c6;
      *(int32_t *)(lVar15 + 8) = 4;
    }
  }
  else if ((sVar3 - 1U & 0xfffd) == 0) {
    uVar9 = *(int32_t *)(psVar6 + 2);
    uVar10 = *(int32_t *)(psVar6 + 4);
    uVar11 = *(int32_t *)(psVar6 + 6);
    *(int32_t *)puVar2 = *(int32_t *)psVar6;
    *(int32_t *)(param_1 + 0x184) = uVar9;
    *(int32_t *)(param_1 + 0x188) = uVar10;
    *(int32_t *)(param_1 + 0x18c) = uVar11;
    *(short *)(param_1 + 400) = psVar6[8];
    *(int *)(*(longlong *)(param_1 + 8) + 0x18) =
         (int)(SUB168((ZEXT416(*(uint *)(*(longlong *)(param_1 + 8) + 0x14)) << 3) /
                      ZEXT216(*(ushort *)(param_1 + 0x18e)),0) /
              (ulonglong)*(ushort *)(param_1 + 0x182));
    lVar15 = *(longlong *)(param_1 + 8);
    if (sVar3 == 3) {
      *(int32_t *)(lVar15 + 8) = 5;
LAB_1807ca2a3:
      if (*(short *)(param_1 + 0x18e) != 0x20) goto FUN_1807ca2c6;
    }
    else {
      sVar4 = *(short *)(param_1 + 0x18e);
      if (sVar4 == 8) {
        *(int32_t *)(lVar15 + 8) = 1;
      }
      else if (sVar4 == 0x10) {
        *(int32_t *)(lVar15 + 8) = 2;
      }
      else if (sVar4 == 0x18) {
        *(int32_t *)(lVar15 + 8) = 3;
      }
      else {
        if (sVar4 != 0x20) goto FUN_1807ca2c6;
        *(int32_t *)(lVar15 + 8) = 4;
      }
    }
  }
  else if ((sVar3 == 0x11) || (sVar3 == 0x69)) {
    uVar9 = *(int32_t *)(psVar6 + 2);
    uVar10 = *(int32_t *)(psVar6 + 4);
    uVar11 = *(int32_t *)(psVar6 + 6);
    *(int32_t *)puVar2 = *(int32_t *)psVar6;
    *(int32_t *)(param_1 + 0x184) = uVar9;
    *(int32_t *)(param_1 + 0x188) = uVar10;
    *(int32_t *)(param_1 + 0x18c) = uVar11;
    *(short *)(param_1 + 400) = psVar6[8];
    if ((psVar6[8] != 2) ||
       (((2 < (ushort)psVar6[1] || (uVar5 = psVar6[6], uVar5 == 0)) ||
        ((int)(((uint)uVar5 / (uint)(ushort)psVar6[1]) * 2 + -7) < (int)(uint)(ushort)psVar6[9]))))
    goto FUN_1807ca2c6;
    lVar15 = *(longlong *)(param_1 + 8);
    uVar14 = (*(uint *)(lVar15 + 0x14) / (uint)uVar5) * (uint)(ushort)psVar6[9];
    if (*(uint *)(lVar15 + 0x18) < uVar14) {
      *(uint *)(lVar15 + 0x18) = uVar14;
    }
    else {
      *(uint *)(lVar15 + 0x18) = *(uint *)(lVar15 + 0x18) / (uint)uVar5;
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
      *piVar1 = *piVar1 + 1;
      *(uint *)(*(longlong *)(param_1 + 8) + 0x18) =
           *(int *)(*(longlong *)(param_1 + 8) + 0x18) * (uint)(ushort)psVar6[6];
    }
    *(int32_t *)(*(longlong *)(param_1 + 8) + 8) = 2;
    uVar5 = *(short *)(param_1 + 0x182) * 2;
    *(int16_t *)puVar2 = 1;
    *(int16_t *)(param_1 + 0x18e) = 0x10;
    *(ushort *)(param_1 + 0x18c) = uVar5;
    *(uint *)(param_1 + 0x188) = *(int *)(param_1 + 0x184) * (uint)uVar5;
    uVar5 = psVar6[9];
    *(uint *)(param_1 + 0x1f0) = (uint)uVar5;
    if ((param_2 >> 9 & 1) == 0) {
      *(uint *)(*(longlong *)(param_1 + 8) + 0x1c) = (uint)uVar5;
      *(uint *)(param_1 + 0x200) = (uint)*(ushort *)(*(longlong *)(param_1 + 0x230) + 0xc);
    }
    else {
      *(int32_t *)(param_1 + 0x200) = 0;
    }
  }
  else {
    uStack_68 = CONCAT44(uStack_68._4_4_,0x10000);
    iVar13 = acmFormatSuggest(0,psVar6,puVar2,0x12);
    if (iVar13 != 0) goto FUN_1807ca2c6;
    uStack_50 = 4;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    iVar13 = acmStreamOpen(&uStack_38,0,*(uint64_t *)(param_1 + 0x230),puVar2);
    if (iVar13 != 0) goto FUN_1807ca2c6;
    sVar4 = *(short *)(param_1 + 0x18e);
    *(uint64_t *)(param_1 + 0x178) = uStack_38;
    lVar15 = *(longlong *)(param_1 + 8);
    if (sVar4 == 8) {
      *(int32_t *)(lVar15 + 8) = 1;
    }
    else if (sVar4 == 0x10) {
      *(int32_t *)(lVar15 + 8) = 2;
    }
    else if (sVar4 == 0x18) {
      *(int32_t *)(lVar15 + 8) = 3;
    }
    else {
      if (sVar4 != 0x20) goto FUN_1807ca2c6;
      *(int32_t *)(lVar15 + 8) = 4;
    }
    *(uint *)(*(longlong *)(param_1 + 8) + 0xc) = (uint)*(ushort *)(param_1 + 0x182);
    acmStreamSize(uStack_38,*(int32_t *)(*(longlong *)(param_1 + 8) + 0x14),&uStack_48,0);
    lVar15 = *(longlong *)(param_1 + 8);
    uVar17 = 0x10;
    if (*(uint *)(lVar15 + 0xc) != 0) {
      iVar13 = *(int *)(lVar15 + 8);
      if (iVar13 == 1) {
        uVar16 = 8;
LAB_1807ca473:
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        uStack_48 = (uint)((SUB168((ZEXT416(uStack_48) << 3) / auVar7,0) & 0xffffffff) /
                          (ulonglong)*(uint *)(lVar15 + 0xc));
      }
      else {
        uVar16 = uVar17;
        if (iVar13 == 2) goto LAB_1807ca473;
        if (iVar13 == 3) {
          uVar16 = 0x18;
          goto LAB_1807ca473;
        }
        if ((iVar13 == 4) || (iVar13 == 5)) {
          uVar16 = 0x20;
          goto LAB_1807ca473;
        }
      }
      *(uint *)(lVar15 + 0x18) = uStack_48;
    }
    uVar5 = *(ushort *)(*(longlong *)(param_1 + 0x230) + 0xc);
    if (uVar5 != 0) {
      *(uint *)(param_1 + 0x200) = (uint)uVar5;
      acmStreamSize(uStack_38,uVar5,auStack_40,0);
      if (auStack_40[0] == 0) goto FUN_1807ca2c6;
      lVar15 = *(longlong *)(param_1 + 8);
      if (*(uint *)(lVar15 + 0xc) != 0) {
        iVar13 = *(int *)(lVar15 + 8);
        if (iVar13 == 1) {
          uVar17 = 8;
        }
        else if (iVar13 != 2) {
          if (iVar13 == 3) {
            uVar17 = 0x18;
          }
          else {
            uVar17 = 0x20;
            if ((iVar13 != 4) && (iVar13 != 5)) {
              *(uint *)(lVar15 + 0x1c) = auStack_40[0];
              goto LAB_1807ca6d1;
            }
          }
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        *(int *)(lVar15 + 0x1c) =
             (int)((SUB168((ZEXT416(auStack_40[0]) << 3) / auVar8,0) & 0xffffffff) /
                  (ulonglong)*(uint *)(lVar15 + 0xc));
      }
    }
  }
LAB_1807ca6d1:
  iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((((iVar13 == 1) || (iVar13 == 2)) || (iVar13 == 3)) || ((iVar13 == 4 || (iVar13 == 5)))) {
    if (*(int *)(param_1 + 0x200) != 0) {
      uStack_68 = uStack_68 & 0xffffffff00000000;
      lVar15 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(int *)(param_1 + 0x200),
                             &UNK_18097c920,0x178);
      *(longlong *)(param_1 + 0x1f8) = lVar15;
      if (lVar15 == 0) goto FUN_1807ca2c6;
    }
    *(uint *)(*(longlong *)(param_1 + 8) + 0xc) =
         (uint)*(ushort *)(*(longlong *)(param_1 + 0x230) + 2);
    *(int32_t *)(*(longlong *)(param_1 + 8) + 0x10) =
         *(int32_t *)(*(longlong *)(param_1 + 0x230) + 4);
    if (*(uint *)(param_1 + 0x114) < *(uint *)(param_1 + 0x118)) {
      *(uint *)(*(longlong *)(param_1 + 8) + 0x20) = *(uint *)(param_1 + 0x114);
      *(int32_t *)(*(longlong *)(param_1 + 8) + 0x24) = *(int32_t *)(param_1 + 0x118);
      *(int32_t *)(*(longlong *)(param_1 + 8) + 0x28) = 2;
    }
    if (((sVar3 == 0x11) || (sVar3 == 0x69)) && ((param_2 >> 9 & 1) != 0)) {
      *(int32_t *)(param_1 + 0xa4) = 2;
      *(uint *)(param_1 + 0x200) = (uint)*(ushort *)(*(longlong *)(param_1 + 0x230) + 0xc);
      *(int32_t *)(param_1 + 0x18) = 0;
    }
    else {
      *(int32_t *)(param_1 + 0xa4) = 0;
      *(int32_t *)(param_1 + 0x18) = 0;
    }
  }
FUN_1807ca2c6:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ca099(void)
void FUN_1807ca099(void)

{
  int *piVar1;
  uint64_t *puVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short *psVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong unaff_RBX;
  int32_t unaff_EBP;
  ulonglong uVar17;
  uint unaff_R14D;
  int unaff_R15D;
  int32_t unaff_000000bc;
  int32_t extraout_XMM0_Da;
  uint in_stack_00000040;
  uint in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  ulonglong in_stack_00000060;
  
  iVar13 = func_0x00018076b6b0(&stack0x00000058,&UNK_18095d2a4,unaff_R15D + 4);
  if (iVar13 != 0) goto LAB_1807ca2b6;
  iVar13 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),&stack0x00000044,unaff_EBP,
                         unaff_R15D + 4);
  if ((iVar13 != 0) ||
     (iVar13 = func_0x00018076b6b0(&stack0x00000044,&UNK_18097c504,unaff_R15D + 4), iVar13 != 0))
  goto LAB_1807ca2b6;
  *(uint64_t *)(unaff_RBX + 0x1a8) = 0;
  *(uint64_t *)(unaff_RBX + 0x1b0) = 0;
  *(uint64_t *)(unaff_RBX + 0x1b8) = 0;
  *(uint64_t *)(unaff_RBX + 0x1c0) = 0;
  *(uint64_t *)(unaff_RBX + 0x1c8) = 0;
  *(uint64_t *)(unaff_RBX + 0x1d0) = 0;
  *(uint64_t *)(unaff_RBX + 0x1d8) = 0;
  *(uint64_t **)(unaff_RBX + 8) = (uint64_t *)(unaff_RBX + 0x1a8);
  *(int32_t *)(unaff_RBX + 0x110) = 0xffffffff;
  *(ulonglong *)(unaff_RBX + 0x1e8) = CONCAT44(unaff_000000bc,unaff_R15D);
  *(int *)(unaff_RBX + 0x1e0) = unaff_R15D;
  iVar13 = FUN_1808168c0(extraout_XMM0_Da,in_stack_00000058._4_4_,0);
  if ((iVar13 != 0) || (*(longlong *)(unaff_RBX + 0x230) == 0)) goto LAB_1807ca2b6;
  if (*(int *)(unaff_RBX + 0x110) == -1) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x230),
                  &UNK_18097c920,0x95,(char)unaff_EBP);
  }
  puVar2 = (uint64_t *)(unaff_RBX + 0x180);
  *puVar2 = 0;
  *(uint64_t *)(unaff_RBX + 0x188) = 0;
  *(uint64_t *)(unaff_RBX + 400) = 0;
  *(uint64_t *)(unaff_RBX + 0x198) = 0;
  *(uint64_t *)(unaff_RBX + 0x1a0) = 0;
  psVar6 = *(short **)(unaff_RBX + 0x230);
  *(short *)puVar2 = (short)unaff_EBP;
  sVar3 = *psVar6;
  if ((sVar3 == 0x50) || (sVar3 == 0x55)) goto LAB_1807ca2b6;
  if (sVar3 == -2) {
    if (((*(longlong *)(psVar6 + 0xc) != 0x10000000000001) ||
        (*(longlong *)(psVar6 + 0x10) != 0x719b3800aa000080)) &&
       ((*(longlong *)(psVar6 + 0xc) != 0x10000000000003 ||
        (*(longlong *)(psVar6 + 0x10) != 0x719b3800aa000080)))) goto LAB_1807ca2b6;
    uVar12 = *(uint64_t *)(psVar6 + 4);
    *puVar2 = *(uint64_t *)psVar6;
    *(uint64_t *)(unaff_RBX + 0x188) = uVar12;
    uVar12 = *(uint64_t *)(psVar6 + 0xc);
    *(uint64_t *)(unaff_RBX + 400) = *(uint64_t *)(psVar6 + 8);
    *(uint64_t *)(unaff_RBX + 0x198) = uVar12;
    *(uint64_t *)(unaff_RBX + 0x1a0) = *(uint64_t *)(psVar6 + 0x10);
    *(int *)(*(longlong *)(unaff_RBX + 8) + 0x18) =
         (int)(SUB168((ZEXT416(*(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14)) << 3) /
                      ZEXT216(*(ushort *)(unaff_RBX + 0x18e)),0) /
              (ulonglong)*(ushort *)(unaff_RBX + 0x182));
    lVar15 = *(longlong *)(unaff_RBX + 8);
    if ((*(longlong *)(*(longlong *)(unaff_RBX + 0x230) + 0x18) == 0x10000000000003) &&
       (*(longlong *)(*(longlong *)(unaff_RBX + 0x230) + 0x20) == 0x719b3800aa000080)) {
      *(int32_t *)(lVar15 + 8) = 5;
      goto LAB_1807ca2a3;
    }
    sVar4 = *(short *)(unaff_RBX + 0x18e);
    if (sVar4 == 8) {
      *(int32_t *)(lVar15 + 8) = unaff_EBP;
    }
    else if (sVar4 == 0x10) {
      *(int32_t *)(lVar15 + 8) = 2;
    }
    else if (sVar4 == 0x18) {
      *(int32_t *)(lVar15 + 8) = 3;
    }
    else {
      if (sVar4 != 0x20) goto LAB_1807ca2b6;
      *(int32_t *)(lVar15 + 8) = 4;
    }
  }
  else if ((sVar3 - 1U & 0xfffd) == 0) {
    uVar9 = *(int32_t *)(psVar6 + 2);
    uVar10 = *(int32_t *)(psVar6 + 4);
    uVar11 = *(int32_t *)(psVar6 + 6);
    *(int32_t *)puVar2 = *(int32_t *)psVar6;
    *(int32_t *)(unaff_RBX + 0x184) = uVar9;
    *(int32_t *)(unaff_RBX + 0x188) = uVar10;
    *(int32_t *)(unaff_RBX + 0x18c) = uVar11;
    *(short *)(unaff_RBX + 400) = psVar6[8];
    *(int *)(*(longlong *)(unaff_RBX + 8) + 0x18) =
         (int)(SUB168((ZEXT416(*(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14)) << 3) /
                      ZEXT216(*(ushort *)(unaff_RBX + 0x18e)),0) /
              (ulonglong)*(ushort *)(unaff_RBX + 0x182));
    lVar15 = *(longlong *)(unaff_RBX + 8);
    if (sVar3 == 3) {
      *(int32_t *)(lVar15 + 8) = 5;
LAB_1807ca2a3:
      if (*(short *)(unaff_RBX + 0x18e) != 0x20) goto LAB_1807ca2b6;
    }
    else {
      sVar4 = *(short *)(unaff_RBX + 0x18e);
      if (sVar4 == 8) {
        *(int32_t *)(lVar15 + 8) = unaff_EBP;
      }
      else if (sVar4 == 0x10) {
        *(int32_t *)(lVar15 + 8) = 2;
      }
      else if (sVar4 == 0x18) {
        *(int32_t *)(lVar15 + 8) = 3;
      }
      else {
        if (sVar4 != 0x20) goto LAB_1807ca2b6;
        *(int32_t *)(lVar15 + 8) = 4;
      }
    }
  }
  else if ((sVar3 == 0x11) || (sVar3 == 0x69)) {
    uVar9 = *(int32_t *)(psVar6 + 2);
    uVar10 = *(int32_t *)(psVar6 + 4);
    uVar11 = *(int32_t *)(psVar6 + 6);
    *(int32_t *)puVar2 = *(int32_t *)psVar6;
    *(int32_t *)(unaff_RBX + 0x184) = uVar9;
    *(int32_t *)(unaff_RBX + 0x188) = uVar10;
    *(int32_t *)(unaff_RBX + 0x18c) = uVar11;
    *(short *)(unaff_RBX + 400) = psVar6[8];
    if ((psVar6[8] != 2) ||
       (((2 < (ushort)psVar6[1] || (uVar5 = psVar6[6], uVar5 == 0)) ||
        ((int)(((uint)uVar5 / (uint)(ushort)psVar6[1]) * 2 + -7) < (int)(uint)(ushort)psVar6[9]))))
    goto LAB_1807ca2b6;
    lVar15 = *(longlong *)(unaff_RBX + 8);
    uVar14 = (*(uint *)(lVar15 + 0x14) / (uint)uVar5) * (uint)(ushort)psVar6[9];
    if (*(uint *)(lVar15 + 0x18) < uVar14) {
      *(uint *)(lVar15 + 0x18) = uVar14;
    }
    else {
      *(uint *)(lVar15 + 0x18) = *(uint *)(lVar15 + 0x18) / (uint)uVar5;
      piVar1 = (int *)(*(longlong *)(unaff_RBX + 8) + 0x18);
      *piVar1 = *piVar1 + 1;
      *(uint *)(*(longlong *)(unaff_RBX + 8) + 0x18) =
           *(int *)(*(longlong *)(unaff_RBX + 8) + 0x18) * (uint)(ushort)psVar6[6];
    }
    *(int32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = 2;
    uVar5 = *(short *)(unaff_RBX + 0x182) * 2;
    *(short *)puVar2 = (short)unaff_EBP;
    *(int16_t *)(unaff_RBX + 0x18e) = 0x10;
    *(ushort *)(unaff_RBX + 0x18c) = uVar5;
    *(uint *)(unaff_RBX + 0x188) = *(int *)(unaff_RBX + 0x184) * (uint)uVar5;
    uVar5 = psVar6[9];
    *(uint *)(unaff_RBX + 0x1f0) = (uint)uVar5;
    if ((unaff_R14D >> 9 & 1) == 0) {
      *(uint *)(*(longlong *)(unaff_RBX + 8) + 0x1c) = (uint)uVar5;
      *(uint *)(unaff_RBX + 0x200) = (uint)*(ushort *)(*(longlong *)(unaff_RBX + 0x230) + 0xc);
    }
    else {
      *(int *)(unaff_RBX + 0x200) = unaff_R15D;
    }
  }
  else {
    iVar13 = acmFormatSuggest(0,psVar6,puVar2,0x12,0x10000);
    if (iVar13 != 0) goto LAB_1807ca2b6;
    iVar13 = acmStreamOpen(&stack0x00000050,0,*(uint64_t *)(unaff_RBX + 0x230),puVar2);
    if (iVar13 != 0) goto LAB_1807ca2b6;
    sVar4 = *(short *)(unaff_RBX + 0x18e);
    *(uint64_t *)(unaff_RBX + 0x178) = in_stack_00000050;
    lVar15 = *(longlong *)(unaff_RBX + 8);
    if (sVar4 == 8) {
      *(int32_t *)(lVar15 + 8) = unaff_EBP;
    }
    else if (sVar4 == 0x10) {
      *(int32_t *)(lVar15 + 8) = 2;
    }
    else if (sVar4 == 0x18) {
      *(int32_t *)(lVar15 + 8) = 3;
    }
    else {
      if (sVar4 != 0x20) goto LAB_1807ca2b6;
      *(int32_t *)(lVar15 + 8) = 4;
    }
    *(uint *)(*(longlong *)(unaff_RBX + 8) + 0xc) = (uint)*(ushort *)(unaff_RBX + 0x182);
    acmStreamSize(in_stack_00000050,*(int32_t *)(*(longlong *)(unaff_RBX + 8) + 0x14),
                  &stack0x00000040,0);
    lVar15 = *(longlong *)(unaff_RBX + 8);
    uVar17 = 0x10;
    if (*(uint *)(lVar15 + 0xc) != 0) {
      iVar13 = *(int *)(lVar15 + 8);
      if (iVar13 == 1) {
        uVar16 = 8;
LAB_1807ca473:
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar16;
        uVar14 = (uint)((SUB168((ZEXT416(in_stack_00000040) << 3) / auVar7,0) & 0xffffffff) /
                       (ulonglong)*(uint *)(lVar15 + 0xc));
      }
      else {
        uVar16 = uVar17;
        if (iVar13 == 2) goto LAB_1807ca473;
        if (iVar13 == 3) {
          uVar16 = 0x18;
          goto LAB_1807ca473;
        }
        if ((iVar13 == 4) || (uVar14 = in_stack_00000040, iVar13 == 5)) {
          uVar16 = 0x20;
          goto LAB_1807ca473;
        }
      }
      *(uint *)(lVar15 + 0x18) = uVar14;
    }
    uVar5 = *(ushort *)(*(longlong *)(unaff_RBX + 0x230) + 0xc);
    if (uVar5 != 0) {
      *(uint *)(unaff_RBX + 0x200) = (uint)uVar5;
      acmStreamSize(in_stack_00000050,uVar5,&stack0x00000048,0);
      if (in_stack_00000048 == 0) goto LAB_1807ca2b6;
      lVar15 = *(longlong *)(unaff_RBX + 8);
      if (*(uint *)(lVar15 + 0xc) != 0) {
        iVar13 = *(int *)(lVar15 + 8);
        if (iVar13 == 1) {
          uVar17 = 8;
        }
        else if (iVar13 != 2) {
          if (iVar13 == 3) {
            uVar17 = 0x18;
          }
          else {
            uVar17 = 0x20;
            if ((iVar13 != 4) && (iVar13 != 5)) {
              *(uint *)(lVar15 + 0x1c) = in_stack_00000048;
              goto LAB_1807ca6d1;
            }
          }
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        *(int *)(lVar15 + 0x1c) =
             (int)((SUB168((ZEXT416(in_stack_00000048) << 3) / auVar8,0) & 0xffffffff) /
                  (ulonglong)*(uint *)(lVar15 + 0xc));
      }
    }
  }
LAB_1807ca6d1:
  iVar13 = *(int *)(*(longlong *)(unaff_RBX + 8) + 8);
  if ((((iVar13 == 1) || (iVar13 == 2)) || (iVar13 == 3)) || ((iVar13 == 4 || (iVar13 == 5)))) {
    if (*(int *)(unaff_RBX + 0x200) != 0) {
      lVar15 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(int *)(unaff_RBX + 0x200),
                             &UNK_18097c920,0x178,unaff_R15D);
      *(longlong *)(unaff_RBX + 0x1f8) = lVar15;
      if (lVar15 == 0) goto LAB_1807ca2b6;
    }
    *(uint *)(*(longlong *)(unaff_RBX + 8) + 0xc) =
         (uint)*(ushort *)(*(longlong *)(unaff_RBX + 0x230) + 2);
    *(int32_t *)(*(longlong *)(unaff_RBX + 8) + 0x10) =
         *(int32_t *)(*(longlong *)(unaff_RBX + 0x230) + 4);
    if (*(uint *)(unaff_RBX + 0x114) < *(uint *)(unaff_RBX + 0x118)) {
      *(uint *)(*(longlong *)(unaff_RBX + 8) + 0x20) = *(uint *)(unaff_RBX + 0x114);
      *(int32_t *)(*(longlong *)(unaff_RBX + 8) + 0x24) = *(int32_t *)(unaff_RBX + 0x118);
      *(int32_t *)(*(longlong *)(unaff_RBX + 8) + 0x28) = 2;
    }
    if (((sVar3 == 0x11) || (sVar3 == 0x69)) && ((unaff_R14D >> 9 & 1) != 0)) {
      *(int32_t *)(unaff_RBX + 0xa4) = 2;
      *(uint *)(unaff_RBX + 0x200) = (uint)*(ushort *)(*(longlong *)(unaff_RBX + 0x230) + 0xc);
      *(int *)(unaff_RBX + 0x18) = unaff_R15D;
    }
    else {
      *(int *)(unaff_RBX + 0xa4) = unaff_R15D;
      *(int *)(unaff_RBX + 0x18) = unaff_R15D;
    }
  }
LAB_1807ca2b6:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807ca2c6(void)
void FUN_1807ca2c6(void)

{
  ulonglong in_stack_00000060;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




