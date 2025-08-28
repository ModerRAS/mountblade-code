#include "TaleWorlds.Native.Split.h"

// 99_part_07_part045.c - 13 个函数

// 函数: void FUN_1804c60b0(undefined8 param_1,undefined8 param_2)
void FUN_1804c60b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined *puStack_40;
  undefined4 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x78,8,3,0xfffffffffffffffe);
  puVar4 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar4 = &UNK_180a2f7d0;
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (undefined4 *)0x0;
  uStack_30 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar3 = 0x74747542;
  *(undefined2 *)(puVar3 + 1) = 0x6e6f;
  *(undefined1 *)((longlong)puVar3 + 6) = 0;
  uStack_30 = 6;
  FUN_1803460a0(puVar2,&puStack_40,puVar2 + 0xe,0xb);
  puStack_40 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c61e0(longlong param_1)
void FUN_1804c61e0(longlong param_1)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStackX_18 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (0 < _DAT_180c961d0) {
    FUN_1804c31d0(_DAT_180c961b0 + 0xe10,&uStack_78,auStackX_18);
    lVar3 = *(longlong *)(param_1 + 0x18);
    uStack_68 = *(undefined4 *)(lVar3 + 0x60);
    uStack_64 = *(undefined4 *)(lVar3 + 100);
    uStack_60 = *(undefined4 *)(lVar3 + 0x68);
    uStack_5c = *(undefined4 *)(lVar3 + 0x6c);
    FUN_18063b5f0(&uStack_38,&uStack_78);
    puVar2 = (undefined4 *)(lVar3 + 0x30);
    uVar4 = *(undefined4 *)(lVar3 + 0x60);
    uVar5 = *(undefined4 *)(lVar3 + 100);
    uVar6 = *(undefined4 *)(lVar3 + 0x68);
    uVar7 = *(undefined4 *)(lVar3 + 0x6c);
    uStack_78 = uStack_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    uStack_68 = uStack_28;
    uStack_64 = uStack_24;
    uStack_60 = uStack_20;
    uStack_5c = uStack_1c;
    uStack_58 = uStack_18;
    uStack_54 = uStack_14;
    uStack_50 = uStack_10;
    uStack_4c = uStack_c;
    uStack_48 = uVar4;
    uStack_44 = uVar5;
    uStack_40 = uVar6;
    uStack_3c = uVar7;
    cVar1 = func_0x000180285980(puVar2,&uStack_78);
    if (cVar1 != '\0') {
      *puVar2 = uStack_38;
      puVar2[1] = uStack_34;
      puVar2[2] = uStack_30;
      puVar2[3] = uStack_2c;
      puVar2[4] = uStack_28;
      puVar2[5] = uStack_24;
      puVar2[6] = uStack_20;
      puVar2[7] = uStack_1c;
      puVar2[8] = uStack_18;
      puVar2[9] = uStack_14;
      puVar2[10] = uStack_10;
      puVar2[0xb] = uStack_c;
      puVar2[0xc] = uVar4;
      puVar2[0xd] = uVar5;
      puVar2[0xe] = uVar6;
      puVar2[0xf] = uVar7;
      FUN_180254610(lVar3);
      FUN_1802eace0();
    }
  }
  return;
}






// 函数: void FUN_1804c62a0(float *param_1,float *param_2)
void FUN_1804c62a0(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  
  if ((param_1 != param_2) && (pfVar12 = param_1 + 10, pfVar12 != param_2)) {
    pfVar13 = param_1 + 0x10;
    do {
      fVar2 = *pfVar12;
      pfVar10 = pfVar13 + -4;
      fVar3 = pfVar13[-5];
      uVar4 = *(undefined8 *)pfVar10;
      uVar5 = *(undefined8 *)(pfVar13 + -2);
      uVar6 = *(undefined8 *)pfVar13;
      uVar7 = *(undefined8 *)(pfVar13 + 2);
      pfVar9 = pfVar10;
      pfVar11 = pfVar12;
      pfVar1 = pfVar12;
      while (pfVar1 != param_1) {
        pfVar1 = pfVar9 + -0xc;
        if (fVar2 <= pfVar9[-0xc]) break;
        *pfVar11 = pfVar9[-0xc];
        pfVar11 = pfVar11 + -10;
        uVar8 = *(undefined8 *)(pfVar9 + -4);
        *(undefined8 *)(pfVar10 + 4) = *(undefined8 *)(pfVar9 + -6);
        *(undefined8 *)(pfVar10 + 6) = uVar8;
        uVar8 = *(undefined8 *)(pfVar9 + -8);
        *(undefined8 *)pfVar10 = *(undefined8 *)(pfVar9 + -10);
        *(undefined8 *)(pfVar10 + 2) = uVar8;
        pfVar10[-1] = pfVar9[-0xb];
        pfVar10 = pfVar10 + -10;
        pfVar9 = pfVar9 + -10;
      }
      *pfVar11 = fVar2;
      pfVar12 = pfVar12 + 10;
      *(undefined8 *)(pfVar11 + 6) = uVar6;
      *(undefined8 *)(pfVar11 + 8) = uVar7;
      pfVar13 = pfVar13 + 10;
      *(undefined8 *)(pfVar11 + 2) = uVar4;
      *(undefined8 *)(pfVar11 + 4) = uVar5;
      pfVar11[1] = fVar3;
    } while (pfVar12 != param_2);
  }
  return;
}






// 函数: void FUN_1804c6370(float *param_1,float *param_2,longlong param_3,undefined1 param_4)
void FUN_1804c6370(float *param_1,float *param_2,longlong param_3,undefined1 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  
  lVar15 = (longlong)param_2 - (longlong)param_1;
  while ((0x487 < lVar15 && (0 < param_3))) {
    fVar18 = *param_1;
    fVar2 = param_2[-10];
    lVar15 = ((longlong)param_2 - (longlong)param_1) / 0x50;
    fVar3 = param_1[lVar15 * 10];
    fVar5 = fVar3;
    pfVar17 = param_1 + lVar15 * 10;
    pfVar16 = param_1;
    fVar4 = fVar18;
    if (fVar3 < fVar18) {
      fVar5 = fVar18;
      pfVar17 = param_1;
      pfVar16 = param_1 + lVar15 * 10;
      fVar4 = fVar3;
    }
    if ((fVar4 <= fVar2) && (pfVar16 = pfVar17, fVar2 < fVar5)) {
      pfVar16 = param_2 + -10;
    }
    fVar2 = *pfVar16;
    fVar3 = pfVar16[2];
    pfVar17 = param_2;
    pfVar16 = param_1;
    while( true ) {
      while (fVar2 < fVar18) {
        pfVar1 = pfVar16 + 10;
        pfVar16 = pfVar16 + 10;
        fVar18 = *pfVar1;
      }
      pfVar17 = pfVar17 + -10;
      if (*pfVar17 <= fVar2 && fVar2 != *pfVar17) {
        do {
          pfVar17 = pfVar17 + -10;
        } while (*pfVar17 <= fVar2 && fVar2 != *pfVar17);
      }
      if (pfVar17 <= pfVar16) break;
      fVar18 = *pfVar16;
      fVar4 = pfVar16[1];
      uVar12 = *(undefined8 *)(pfVar16 + 2);
      uVar13 = *(undefined8 *)(pfVar16 + 4);
      fVar5 = pfVar16[6];
      fVar6 = pfVar16[7];
      fVar7 = pfVar16[8];
      fVar8 = pfVar16[9];
      *pfVar16 = *pfVar17;
      uVar14 = *(undefined8 *)(pfVar17 + 8);
      *(undefined8 *)(pfVar16 + 6) = *(undefined8 *)(pfVar17 + 6);
      *(undefined8 *)(pfVar16 + 8) = uVar14;
      fVar9 = pfVar17[3];
      fVar10 = pfVar17[4];
      fVar11 = pfVar17[5];
      pfVar16[2] = pfVar17[2];
      pfVar16[3] = fVar9;
      pfVar16[4] = fVar10;
      pfVar16[5] = fVar11;
      pfVar16[1] = pfVar17[1];
      pfVar16 = pfVar16 + 10;
      *pfVar17 = fVar18;
      pfVar17[6] = fVar5;
      pfVar17[7] = fVar6;
      pfVar17[8] = fVar7;
      pfVar17[9] = fVar8;
      *(undefined8 *)(pfVar17 + 2) = uVar12;
      *(undefined8 *)(pfVar17 + 4) = uVar13;
      pfVar17[1] = fVar4;
      fVar18 = *pfVar16;
    }
    param_3 = param_3 + -1;
    FUN_1804c6370(pfVar16,param_2,param_3,param_4,fVar2,fVar3);
    lVar15 = (longlong)pfVar16 - (longlong)param_1;
    param_2 = pfVar16;
  }
  if (param_3 == 0) {
    FUN_1804c64f0(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_1804c637d(float *param_1,float *param_2,longlong param_3,undefined1 param_4)
void FUN_1804c637d(float *param_1,float *param_2,longlong param_3,undefined1 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong in_RAX;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  
  lVar14 = in_RAX - (longlong)param_1;
  while ((0x487 < lVar14 && (0 < param_3))) {
    fVar17 = *param_1;
    fVar2 = param_2[-10];
    lVar14 = ((longlong)param_2 - (longlong)param_1) / 0x50;
    fVar3 = param_1[lVar14 * 10];
    fVar5 = fVar3;
    pfVar16 = param_1 + lVar14 * 10;
    pfVar15 = param_1;
    fVar4 = fVar17;
    if (fVar3 < fVar17) {
      fVar5 = fVar17;
      pfVar16 = param_1;
      pfVar15 = param_1 + lVar14 * 10;
      fVar4 = fVar3;
    }
    if ((fVar4 <= fVar2) && (pfVar15 = pfVar16, fVar2 < fVar5)) {
      pfVar15 = param_2 + -10;
    }
    fVar2 = *pfVar15;
    pfVar16 = param_2;
    pfVar15 = param_1;
    while( true ) {
      while (fVar2 < fVar17) {
        pfVar1 = pfVar15 + 10;
        pfVar15 = pfVar15 + 10;
        fVar17 = *pfVar1;
      }
      pfVar16 = pfVar16 + -10;
      if (*pfVar16 <= fVar2 && fVar2 != *pfVar16) {
        do {
          pfVar16 = pfVar16 + -10;
        } while (*pfVar16 <= fVar2 && fVar2 != *pfVar16);
      }
      if (pfVar16 <= pfVar15) break;
      fVar17 = *pfVar15;
      fVar3 = pfVar15[1];
      uVar11 = *(undefined8 *)(pfVar15 + 2);
      uVar12 = *(undefined8 *)(pfVar15 + 4);
      fVar4 = pfVar15[6];
      fVar5 = pfVar15[7];
      fVar6 = pfVar15[8];
      fVar7 = pfVar15[9];
      *pfVar15 = *pfVar16;
      uVar13 = *(undefined8 *)(pfVar16 + 8);
      *(undefined8 *)(pfVar15 + 6) = *(undefined8 *)(pfVar16 + 6);
      *(undefined8 *)(pfVar15 + 8) = uVar13;
      fVar8 = pfVar16[3];
      fVar9 = pfVar16[4];
      fVar10 = pfVar16[5];
      pfVar15[2] = pfVar16[2];
      pfVar15[3] = fVar8;
      pfVar15[4] = fVar9;
      pfVar15[5] = fVar10;
      pfVar15[1] = pfVar16[1];
      pfVar15 = pfVar15 + 10;
      *pfVar16 = fVar17;
      pfVar16[6] = fVar4;
      pfVar16[7] = fVar5;
      pfVar16[8] = fVar6;
      pfVar16[9] = fVar7;
      *(undefined8 *)(pfVar16 + 2) = uVar11;
      *(undefined8 *)(pfVar16 + 4) = uVar12;
      pfVar16[1] = fVar3;
      fVar17 = *pfVar15;
    }
    param_3 = param_3 + -1;
    FUN_1804c6370(pfVar15,param_2,param_3,param_4);
    lVar14 = (longlong)pfVar15 - (longlong)param_1;
    param_2 = pfVar15;
  }
  if (param_3 == 0) {
    FUN_1804c64f0(param_1,param_2,param_2,param_4);
  }
  return;
}






// 函数: void FUN_1804c639e(undefined4 param_1)
void FUN_1804c639e(undefined4 param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float *pfVar15;
  undefined1 unaff_BL;
  longlong unaff_RBP;
  float *unaff_RSI;
  float *pfVar16;
  float *in_R10;
  float fVar17;
  
  do {
    pfVar16 = in_R10;
    if (unaff_RBP < 1) break;
    fVar17 = *unaff_RSI;
    fVar2 = in_R10[-10];
    lVar4 = ((longlong)in_R10 - (longlong)unaff_RSI) / 0x50;
    fVar3 = unaff_RSI[lVar4 * 10];
    fVar6 = fVar3;
    pfVar16 = unaff_RSI + lVar4 * 10;
    pfVar15 = unaff_RSI;
    fVar5 = fVar17;
    if (fVar3 < fVar17) {
      fVar6 = fVar17;
      pfVar16 = unaff_RSI;
      pfVar15 = unaff_RSI + lVar4 * 10;
      fVar5 = fVar3;
    }
    if ((fVar5 <= fVar2) && (pfVar15 = pfVar16, fVar2 < fVar6)) {
      pfVar15 = in_R10 + -10;
    }
    fVar2 = *pfVar15;
    pfVar15 = in_R10;
    pfVar16 = unaff_RSI;
    while( true ) {
      while (fVar2 < fVar17) {
        pfVar1 = pfVar16 + 10;
        pfVar16 = pfVar16 + 10;
        fVar17 = *pfVar1;
      }
      pfVar15 = pfVar15 + -10;
      if (*pfVar15 <= fVar2 && fVar2 != *pfVar15) {
        do {
          pfVar15 = pfVar15 + -10;
        } while (*pfVar15 <= fVar2 && fVar2 != *pfVar15);
      }
      if (pfVar15 <= pfVar16) break;
      fVar17 = *pfVar16;
      fVar3 = pfVar16[1];
      uVar12 = *(undefined8 *)(pfVar16 + 2);
      uVar13 = *(undefined8 *)(pfVar16 + 4);
      fVar5 = pfVar16[6];
      fVar6 = pfVar16[7];
      fVar7 = pfVar16[8];
      fVar8 = pfVar16[9];
      *pfVar16 = *pfVar15;
      uVar14 = *(undefined8 *)(pfVar15 + 8);
      *(undefined8 *)(pfVar16 + 6) = *(undefined8 *)(pfVar15 + 6);
      *(undefined8 *)(pfVar16 + 8) = uVar14;
      fVar9 = pfVar15[3];
      fVar10 = pfVar15[4];
      fVar11 = pfVar15[5];
      pfVar16[2] = pfVar15[2];
      pfVar16[3] = fVar9;
      pfVar16[4] = fVar10;
      pfVar16[5] = fVar11;
      pfVar16[1] = pfVar15[1];
      pfVar16 = pfVar16 + 10;
      *pfVar15 = fVar17;
      pfVar15[6] = fVar5;
      pfVar15[7] = fVar6;
      pfVar15[8] = fVar7;
      pfVar15[9] = fVar8;
      *(undefined8 *)(pfVar15 + 2) = uVar12;
      *(undefined8 *)(pfVar15 + 4) = uVar13;
      pfVar15[1] = fVar3;
      fVar17 = *pfVar16;
    }
    unaff_RBP = unaff_RBP + -1;
    param_1 = FUN_1804c6370(pfVar16,in_R10,unaff_RBP,unaff_BL);
    in_R10 = pfVar16;
  } while (0x487 < (longlong)pfVar16 - (longlong)unaff_RSI);
  if (unaff_RBP == 0) {
    FUN_1804c64f0(param_1,pfVar16,pfVar16,unaff_BL);
  }
  return;
}






// 函数: void FUN_1804c64c6(void)
void FUN_1804c64c6(void)

{
  longlong unaff_RBP;
  
  if (unaff_RBP == 0) {
    FUN_1804c64f0();
  }
  return;
}






// 函数: void FUN_1804c64d0(void)
void FUN_1804c64d0(void)

{
  FUN_1804c64f0();
  return;
}






// 函数: void FUN_1804c64f0(float *param_1,float *param_2,float *param_3,undefined1 param_4)
void FUN_1804c64f0(float *param_1,float *param_2,float *param_3,undefined1 param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong lVar8;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = ((longlong)param_2 - (longlong)param_1) / 0x28;
  if (1 < lVar2) {
    lVar8 = (lVar2 + -2 >> 1) + 1;
    pfVar7 = param_1 + (lVar8 * 5 + 3) * 2;
    do {
      fStack_58 = pfVar7[-0x10];
      fStack_54 = pfVar7[-0xf];
      lVar8 = lVar8 + -1;
      uStack_50 = *(undefined8 *)(pfVar7 + -0xe);
      uStack_48 = *(undefined8 *)(pfVar7 + -0xc);
      uStack_40 = *(undefined8 *)(pfVar7 + -10);
      uStack_38 = *(undefined8 *)(pfVar7 + -8);
      FUN_1804c6710(param_1,lVar8,lVar2,lVar8,&fStack_58,param_4);
      pfVar7 = pfVar7 + -10;
    } while (lVar8 != 0);
  }
  if (param_2 < param_3) {
    pfVar7 = param_2 + 2;
    do {
      fStack_58 = pfVar7[-2];
      if (*param_1 < fStack_58) {
        uStack_50 = *(undefined8 *)pfVar7;
        uStack_48 = *(undefined8 *)(pfVar7 + 2);
        fStack_54 = pfVar7[-1];
        uStack_40 = *(undefined8 *)(pfVar7 + 4);
        uStack_38 = *(undefined8 *)(pfVar7 + 6);
        pfVar7[-2] = *param_1;
        uVar6 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(pfVar7 + 4) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(pfVar7 + 6) = uVar6;
        fVar3 = param_1[3];
        fVar4 = param_1[4];
        fVar5 = param_1[5];
        *pfVar7 = param_1[2];
        pfVar7[1] = fVar3;
        pfVar7[2] = fVar4;
        pfVar7[3] = fVar5;
        pfVar7[-1] = param_1[1];
        FUN_1804c6710(param_1,0,lVar2,0,&fStack_58,param_4);
      }
      pfVar1 = pfVar7 + 8;
      pfVar7 = pfVar7 + 10;
    } while (pfVar1 < param_3);
  }
  if (1 < lVar2) {
    param_2 = param_2 + -8;
    do {
      fStack_58 = param_2[-2];
      fStack_54 = param_2[-1];
      uStack_50 = *(undefined8 *)param_2;
      uStack_48 = *(undefined8 *)(param_2 + 2);
      uStack_40 = *(undefined8 *)(param_2 + 4);
      uStack_38 = *(undefined8 *)(param_2 + 6);
      param_2[-2] = *param_1;
      uVar6 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_2 + 6) = uVar6;
      fVar3 = param_1[3];
      fVar4 = param_1[4];
      fVar5 = param_1[5];
      *param_2 = param_1[2];
      param_2[1] = fVar3;
      param_2[2] = fVar4;
      param_2[3] = fVar5;
      param_2[-1] = param_1[1];
      FUN_1804c6710(param_1,0,((0x20 - (longlong)param_1) + (longlong)param_2) / 0x28 + -1,0,
                    &fStack_58,param_4);
      param_2 = param_2 + -10;
    } while (0x4f < (0x20 - (longlong)param_1) + (longlong)param_2);
  }
  return;
}






// 函数: void FUN_1804c6507(float *param_1,float *param_2,float *param_3)
void FUN_1804c6507(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  float *pfVar7;
  longlong lVar8;
  longlong in_R11;
  undefined8 unaff_R15;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_R15;
  lVar2 = ((longlong)param_2 - (longlong)param_1) / 0x28;
  if (1 < lVar2) {
    *(undefined8 *)(in_R11 + 8) = unaff_RBP;
    lVar8 = (lVar2 + -2 >> 1) + 1;
    pfVar7 = param_1 + (lVar8 * 5 + 3) * 2;
    do {
      fStack0000000000000030 = pfVar7[-0x10];
      fStack0000000000000034 = pfVar7[-0xf];
      lVar8 = lVar8 + -1;
      uStack0000000000000038 = *(undefined8 *)(pfVar7 + -0xe);
      uStack0000000000000040 = *(undefined8 *)(pfVar7 + -0xc);
      uStack0000000000000048 = *(undefined8 *)(pfVar7 + -10);
      uStack0000000000000050 = *(undefined8 *)(pfVar7 + -8);
      FUN_1804c6710(param_1,lVar8,lVar2,lVar8,&stack0x00000030);
      pfVar7 = pfVar7 + -10;
    } while (lVar8 != 0);
  }
  if (param_2 < param_3) {
    pfVar7 = param_2 + 2;
    do {
      fStack0000000000000030 = pfVar7[-2];
      if (*param_1 < fStack0000000000000030) {
        uStack0000000000000038 = *(undefined8 *)pfVar7;
        uStack0000000000000040 = *(undefined8 *)(pfVar7 + 2);
        fStack0000000000000034 = pfVar7[-1];
        uStack0000000000000048 = *(undefined8 *)(pfVar7 + 4);
        uStack0000000000000050 = *(undefined8 *)(pfVar7 + 6);
        pfVar7[-2] = *param_1;
        uVar6 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(pfVar7 + 4) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(pfVar7 + 6) = uVar6;
        fVar3 = param_1[3];
        fVar4 = param_1[4];
        fVar5 = param_1[5];
        *pfVar7 = param_1[2];
        pfVar7[1] = fVar3;
        pfVar7[2] = fVar4;
        pfVar7[3] = fVar5;
        pfVar7[-1] = param_1[1];
        FUN_1804c6710(param_1,0,lVar2,0,&stack0x00000030);
      }
      pfVar1 = pfVar7 + 8;
      pfVar7 = pfVar7 + 10;
    } while (pfVar1 < param_3);
  }
  if (1 < lVar2) {
    param_2 = param_2 + -8;
    do {
      fStack0000000000000030 = param_2[-2];
      fStack0000000000000034 = param_2[-1];
      uStack0000000000000038 = *(undefined8 *)param_2;
      uStack0000000000000040 = *(undefined8 *)(param_2 + 2);
      uStack0000000000000048 = *(undefined8 *)(param_2 + 4);
      uStack0000000000000050 = *(undefined8 *)(param_2 + 6);
      param_2[-2] = *param_1;
      uVar6 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_2 + 6) = uVar6;
      fVar3 = param_1[3];
      fVar4 = param_1[4];
      fVar5 = param_1[5];
      *param_2 = param_1[2];
      param_2[1] = fVar3;
      param_2[2] = fVar4;
      param_2[3] = fVar5;
      param_2[-1] = param_1[1];
      FUN_1804c6710(param_1,0,((0x20 - (longlong)param_1) + (longlong)param_2) / 0x28 + -1,0,
                    &stack0x00000030);
      param_2 = param_2 + -10;
    } while (0x4f < (0x20 - (longlong)param_1) + (longlong)param_2);
  }
  return;
}






// 函数: void FUN_1804c6541(longlong param_1)
void FUN_1804c6541(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 unaff_RBP;
  undefined8 *puVar8;
  float *unaff_RSI;
  longlong lVar9;
  float *pfVar10;
  longlong in_R11;
  longlong unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  float *unaff_R15;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBP;
  lVar9 = (unaff_R14 + -2 >> 1) + 1;
  puVar8 = (undefined8 *)(param_1 + (lVar9 * 5 + 3) * 8);
  do {
    fStack0000000000000030 = *(float *)(puVar8 + -8);
    fStack0000000000000034 = *(float *)((longlong)puVar8 + -0x3c);
    lVar9 = lVar9 + -1;
    uStack0000000000000038 = puVar8[-7];
    uStack0000000000000040 = puVar8[-6];
    uStack0000000000000048 = puVar8[-5];
    uStack0000000000000050 = puVar8[-4];
    FUN_1804c6710(*(undefined4 *)(puVar8 + -7),lVar9);
    puVar8 = puVar8 + -5;
  } while (lVar9 != 0);
  if (unaff_R13 < unaff_R15) {
    pfVar10 = unaff_R13 + 2;
    do {
      fStack0000000000000030 = pfVar10[-2];
      fVar2 = *unaff_RSI;
      if (fVar2 < fStack0000000000000030) {
        uStack0000000000000038 = *(undefined8 *)pfVar10;
        uStack0000000000000040 = *(undefined8 *)(pfVar10 + 2);
        fStack0000000000000034 = pfVar10[-1];
        uStack0000000000000048 = *(undefined8 *)(pfVar10 + 4);
        uStack0000000000000050 = *(undefined8 *)(pfVar10 + 6);
        pfVar10[-2] = fVar2;
        uVar7 = *(undefined8 *)(unaff_RSI + 8);
        *(undefined8 *)(pfVar10 + 4) = *(undefined8 *)(unaff_RSI + 6);
        *(undefined8 *)(pfVar10 + 6) = uVar7;
        fVar3 = unaff_RSI[2];
        fVar4 = unaff_RSI[3];
        fVar5 = unaff_RSI[4];
        fVar6 = unaff_RSI[5];
        *pfVar10 = fVar3;
        pfVar10[1] = fVar4;
        pfVar10[2] = fVar5;
        pfVar10[3] = fVar6;
        pfVar10[-1] = unaff_RSI[1];
        FUN_1804c6710(fVar3,0,fVar2,0,&stack0x00000030);
      }
      pfVar1 = pfVar10 + 8;
      pfVar10 = pfVar10 + 10;
    } while (pfVar1 < unaff_R15);
  }
  if (1 < unaff_R14) {
    pfVar10 = unaff_R13 + -8;
    do {
      fStack0000000000000030 = pfVar10[-2];
      fStack0000000000000034 = pfVar10[-1];
      uStack0000000000000038 = *(undefined8 *)pfVar10;
      uStack0000000000000040 = *(undefined8 *)(pfVar10 + 2);
      uStack0000000000000048 = *(undefined8 *)(pfVar10 + 4);
      uStack0000000000000050 = *(undefined8 *)(pfVar10 + 6);
      pfVar10[-2] = *unaff_RSI;
      uVar7 = *(undefined8 *)(unaff_RSI + 8);
      *(undefined8 *)(pfVar10 + 4) = *(undefined8 *)(unaff_RSI + 6);
      *(undefined8 *)(pfVar10 + 6) = uVar7;
      fVar2 = unaff_RSI[2];
      fVar3 = unaff_RSI[3];
      fVar4 = unaff_RSI[4];
      fVar5 = unaff_RSI[5];
      *pfVar10 = fVar2;
      pfVar10[1] = fVar3;
      pfVar10[2] = fVar4;
      pfVar10[3] = fVar5;
      pfVar10[-1] = unaff_RSI[1];
      lVar9 = SUB168(SEXT816(unaff_R12) * SEXT816((0x20 - (longlong)unaff_RSI) + (longlong)pfVar10),
                     8);
      FUN_1804c6710(fVar2,0,(-1 - (lVar9 >> 0x3f)) + (lVar9 >> 4),0,&stack0x00000030);
      pfVar10 = pfVar10 + -10;
    } while (0x4f < (0x20 - (longlong)unaff_RSI) + (longlong)pfVar10);
  }
  return;
}






// 函数: void FUN_1804c65bb(void)
void FUN_1804c65bb(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  float *unaff_RSI;
  float *pfVar9;
  longlong unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  float *unaff_R15;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  if (unaff_R13 < unaff_R15) {
    pfVar9 = unaff_R13 + 2;
    do {
      fStack0000000000000030 = pfVar9[-2];
      fVar2 = *unaff_RSI;
      if (fVar2 < fStack0000000000000030) {
        uStack0000000000000038 = *(undefined8 *)pfVar9;
        uStack0000000000000040 = *(undefined8 *)(pfVar9 + 2);
        fStack0000000000000034 = pfVar9[-1];
        uStack0000000000000048 = *(undefined8 *)(pfVar9 + 4);
        uStack0000000000000050 = *(undefined8 *)(pfVar9 + 6);
        pfVar9[-2] = fVar2;
        uVar7 = *(undefined8 *)(unaff_RSI + 8);
        *(undefined8 *)(pfVar9 + 4) = *(undefined8 *)(unaff_RSI + 6);
        *(undefined8 *)(pfVar9 + 6) = uVar7;
        fVar3 = unaff_RSI[2];
        fVar4 = unaff_RSI[3];
        fVar5 = unaff_RSI[4];
        fVar6 = unaff_RSI[5];
        *pfVar9 = fVar3;
        pfVar9[1] = fVar4;
        pfVar9[2] = fVar5;
        pfVar9[3] = fVar6;
        pfVar9[-1] = unaff_RSI[1];
        FUN_1804c6710(fVar3,0,fVar2,0,&stack0x00000030);
      }
      pfVar1 = pfVar9 + 8;
      pfVar9 = pfVar9 + 10;
    } while (pfVar1 < unaff_R15);
  }
  if (1 < unaff_R14) {
    pfVar9 = unaff_R13 + -8;
    do {
      fStack0000000000000030 = pfVar9[-2];
      fStack0000000000000034 = pfVar9[-1];
      uStack0000000000000038 = *(undefined8 *)pfVar9;
      uStack0000000000000040 = *(undefined8 *)(pfVar9 + 2);
      uStack0000000000000048 = *(undefined8 *)(pfVar9 + 4);
      uStack0000000000000050 = *(undefined8 *)(pfVar9 + 6);
      pfVar9[-2] = *unaff_RSI;
      uVar7 = *(undefined8 *)(unaff_RSI + 8);
      *(undefined8 *)(pfVar9 + 4) = *(undefined8 *)(unaff_RSI + 6);
      *(undefined8 *)(pfVar9 + 6) = uVar7;
      fVar2 = unaff_RSI[2];
      fVar3 = unaff_RSI[3];
      fVar4 = unaff_RSI[4];
      fVar5 = unaff_RSI[5];
      *pfVar9 = fVar2;
      pfVar9[1] = fVar3;
      pfVar9[2] = fVar4;
      pfVar9[3] = fVar5;
      pfVar9[-1] = unaff_RSI[1];
      lVar8 = SUB168(SEXT816(unaff_R12) * SEXT816((0x20 - (longlong)unaff_RSI) + (longlong)pfVar9),8
                    );
      FUN_1804c6710(fVar2,0,(-1 - (lVar8 >> 0x3f)) + (lVar8 >> 4),0,&stack0x00000030);
      pfVar9 = pfVar9 + -10;
    } while (0x4f < (0x20 - (longlong)unaff_RSI) + (longlong)pfVar9);
  }
  return;
}






// 函数: void FUN_1804c6657(void)
void FUN_1804c6657(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *unaff_RSI;
  undefined8 *puVar7;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  puVar7 = (undefined8 *)(unaff_R13 + -0x20);
  do {
    uStack0000000000000030 = *(undefined4 *)(puVar7 + -1);
    uStack0000000000000034 = *(undefined4 *)((longlong)puVar7 + -4);
    uStack0000000000000038 = *puVar7;
    uStack0000000000000040 = puVar7[1];
    uStack0000000000000048 = puVar7[2];
    uStack0000000000000050 = puVar7[3];
    *(undefined4 *)(puVar7 + -1) = *unaff_RSI;
    uVar5 = *(undefined8 *)(unaff_RSI + 8);
    puVar7[2] = *(undefined8 *)(unaff_RSI + 6);
    puVar7[3] = uVar5;
    uVar1 = unaff_RSI[2];
    uVar2 = unaff_RSI[3];
    uVar3 = unaff_RSI[4];
    uVar4 = unaff_RSI[5];
    *(undefined4 *)puVar7 = uVar1;
    *(undefined4 *)((longlong)puVar7 + 4) = uVar2;
    *(undefined4 *)(puVar7 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0xc) = uVar4;
    *(undefined4 *)((longlong)puVar7 + -4) = unaff_RSI[1];
    lVar6 = SUB168(SEXT816(unaff_R12) * SEXT816((0x20 - (longlong)unaff_RSI) + (longlong)puVar7),8);
    FUN_1804c6710(uVar1,0,(-1 - (lVar6 >> 0x3f)) + (lVar6 >> 4),0,&stack0x00000030);
    puVar7 = puVar7 + -5;
  } while (0x4f < (0x20 - (longlong)unaff_RSI) + (longlong)puVar7);
  return;
}






