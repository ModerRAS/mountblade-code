#include "TaleWorlds.Native.Split.h"

// 99_part_04_part063.c - 16 个函数

// 函数: void FUN_1802bf590(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
void FUN_1802bf590(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  char *pcVar4;
  uint64_t *puVar5;
  char *pcVar6;
  int *piVar7;
  
  FUN_18062f990(param_4,param_5,&DAT_180a04ee4);
  FUN_18062f990(param_4,param_5,&UNK_180a16290);
  FUN_180416900(param_1 + 8,&UNK_180a15b70,param_4,param_5);
  if (*(longlong *)(param_1 + 0x40) != *(longlong *)(param_1 + 0x48)) {
    puVar3 = (uint64_t *)FUN_1804c1300(param_4 + 0x60,0x60);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    *(int32_t *)(puVar3 + 5) = 1;
    puVar3[6] = 0;
    puVar3[8] = 0;
    pcVar4 = "curve";
    do {
      pcVar6 = pcVar4;
      pcVar4 = pcVar6 + 1;
    } while (*pcVar4 != '\0');
    *puVar3 = &UNK_180a180f4;
    puVar3[2] = pcVar6 + -0x180a180f3;
    FUN_180630b20(param_4,puVar3,&DAT_180a03a84,&UNK_180a15ff8);
    FUN_180630c80(param_4,puVar3,&UNK_180a015b0,1);
    FUN_18062f990(param_4,puVar3,&DAT_180a0b1c0);
    FUN_18062f990(param_4,puVar3,&UNK_180a180b0);
    if (*(longlong *)(param_5 + 0x30) == 0) {
      puVar3[10] = 0;
      *(uint64_t **)(param_5 + 0x30) = puVar3;
    }
    else {
      puVar3[10] = *(uint64_t *)(param_5 + 0x38);
      *(uint64_t **)(*(longlong *)(param_5 + 0x38) + 0x58) = puVar3;
    }
    *(uint64_t **)(param_5 + 0x38) = puVar3;
    puVar3[4] = param_5;
    puVar3[0xb] = 0;
    puVar5 = (uint64_t *)FUN_1804c1300(param_4 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar4 = "keys";
    do {
      pcVar6 = pcVar4;
      pcVar4 = pcVar6 + 1;
    } while (*pcVar4 != '\0');
    *puVar5 = &UNK_180a180c4;
    puVar5[2] = pcVar6 + -0x180a180c3;
    if (puVar3[6] == 0) {
      puVar5[10] = 0;
      puVar3[6] = puVar5;
    }
    else {
      puVar5[10] = puVar3[7];
      *(uint64_t **)(puVar3[7] + 0x58) = puVar5;
    }
    puVar3[7] = puVar5;
    puVar5[4] = puVar3;
    puVar5[0xb] = 0;
    piVar7 = *(int **)(param_1 + 0x40);
    if (piVar7 != *(int **)(param_1 + 0x48)) {
      do {
        iVar1 = *piVar7;
        iVar2 = piVar7[4];
        puVar3 = (uint64_t *)FUN_1804c1300(param_4 + 0x60,0x60);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[4] = 0;
        *(int32_t *)(puVar3 + 5) = 1;
        puVar3[6] = 0;
        puVar3[8] = 0;
        pcVar4 = "key";
        do {
          pcVar6 = pcVar4;
          pcVar4 = pcVar6 + 1;
        } while (*pcVar4 != '\0');
        *puVar3 = &UNK_180a18108;
        puVar3[2] = pcVar6 + -0x180a18107;
        FUN_18062f990(param_4,puVar3,&UNK_180a1810c,(float)iVar1 * 0.03448276);
        FUN_18062f990(param_4,puVar3,&UNK_180a0696c);
        FUN_1806307a0(param_4,puVar3,&UNK_180a18100,&stack0x00000008);
        if (puVar5[6] == 0) {
          puVar3[10] = 0;
          puVar5[6] = puVar3;
        }
        else {
          puVar3[10] = puVar5[7];
          *(uint64_t **)(puVar5[7] + 0x58) = puVar3;
        }
        puVar5[7] = puVar3;
        puVar3[4] = puVar5;
        puVar3[0xb] = 0;
        puVar3 = (uint64_t *)FUN_1804c1300(param_4 + 0x60,0x60);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[4] = 0;
        *(int32_t *)(puVar3 + 5) = 1;
        puVar3[6] = 0;
        puVar3[8] = 0;
        pcVar4 = "key";
        do {
          pcVar6 = pcVar4;
          pcVar4 = pcVar6 + 1;
        } while (*pcVar4 != '\0');
        *puVar3 = &UNK_180a18108;
        puVar3[2] = pcVar6 + -0x180a18107;
        FUN_18062f990(param_4,puVar3,&UNK_180a1810c,(float)iVar2 * 0.03448276);
        FUN_18062f990(param_4,puVar3,&UNK_180a0696c);
        FUN_1806307a0(param_4,puVar3,&UNK_180a18100,&stack0x00000008);
        if (puVar5[6] == 0) {
          puVar3[10] = 0;
          puVar5[6] = puVar3;
        }
        else {
          puVar3[10] = puVar5[7];
          *(uint64_t **)(puVar5[7] + 0x58) = puVar3;
        }
        puVar5[7] = puVar3;
        piVar7 = piVar7 + 8;
        puVar3[4] = puVar5;
        puVar3[0xb] = 0;
      } while (piVar7 != *(int **)(param_1 + 0x48));
    }
  }
  return;
}






// 函数: void FUN_1802bf620(int32_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_1802bf620(int32_t *param_1,uint64_t param_2,uint64_t param_3)

{
  FUN_18062f990(param_2,param_3,&DAT_180a04ee4,param_1[1]);
  FUN_18062f990(param_2,param_3,&UNK_180a16290,*param_1);
  return;
}



uint64_t *
FUN_1802bf680(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *(int32_t *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0x41c64e6d;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0x1b;
  param_1[0x10] = &UNK_18098bcb0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0x10] = &UNK_180a3c3e0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(int32_t *)(param_1 + 0x22) = 3;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(int32_t *)(param_1 + 0x29) = 3;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(int32_t *)(param_1 + 0x2d) = 3;
  *param_1 = param_2;
  *(int32_t *)((longlong)param_1 + 0x44) = 0;
  param_1[0x1e] = 0;
  *(int32_t *)((longlong)param_1 + 0xa4) = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(int16_t *)(param_1 + 0x14) = 0;
  *(int32_t *)((longlong)param_1 + 0xc) = 0xffffffff;
  param_1[0x16] = 0x3f800000;
  param_1[0x17] = 0;
  param_1[0x18] = 0x3f80000000000000;
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1a) = 0;
  *(int32_t *)((longlong)param_1 + 0xd4) = 0;
  *(int32_t *)(param_1 + 0x1b) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0xdc) = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  *(int32_t *)((longlong)param_1 + 0xe4) = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  *(int32_t *)((longlong)param_1 + 0xec) = 0x3f800000;
  FUN_18005c830(param_1 + 10,0,&UNK_180a3c3e0,param_4,0xfffffffffffffffe);
  *(int8_t *)(param_1 + 0xf) = 0;
  *(int32_t *)(param_1 + 1) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802bf7f0(longlong *param_1,ulonglong param_2)
void FUN_1802bf7f0(longlong *param_1,ulonglong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  
  puVar8 = (uint64_t *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)puVar8) / 0x70) < param_2) {
    if (param_2 == 0) {
      puVar7 = (uint64_t *)0x0;
    }
    else {
      puVar7 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,param_2 * 0x70,(char)param_1[3]);
      puVar8 = (uint64_t *)*param_1;
    }
    puVar2 = (uint64_t *)param_1[1];
    puVar9 = puVar7;
    if (puVar8 != puVar2) {
      do {
        uVar6 = puVar8[1];
        *puVar9 = *puVar8;
        puVar9[1] = uVar6;
        uVar6 = puVar8[3];
        puVar9[2] = puVar8[2];
        puVar9[3] = uVar6;
        uVar6 = puVar8[5];
        puVar9[4] = puVar8[4];
        puVar9[5] = uVar6;
        uVar6 = puVar8[7];
        puVar9[6] = puVar8[6];
        puVar9[7] = uVar6;
        uVar6 = puVar8[9];
        puVar9[8] = puVar8[8];
        puVar9[9] = uVar6;
        uVar6 = puVar8[0xb];
        puVar9[10] = puVar8[10];
        puVar9[0xb] = uVar6;
        puVar1 = puVar8 + 0xc;
        uVar3 = *(int32_t *)((longlong)puVar8 + 100);
        uVar4 = *(int32_t *)(puVar8 + 0xd);
        uVar5 = *(int32_t *)((longlong)puVar8 + 0x6c);
        puVar8 = puVar8 + 0xe;
        *(int32_t *)(puVar9 + 0xc) = *(int32_t *)puVar1;
        *(int32_t *)((longlong)puVar9 + 100) = uVar3;
        *(int32_t *)(puVar9 + 0xd) = uVar4;
        *(int32_t *)((longlong)puVar9 + 0x6c) = uVar5;
        puVar9 = puVar9 + 0xe;
      } while (puVar8 != puVar2);
      puVar8 = (uint64_t *)*param_1;
    }
    if (puVar8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = (longlong)puVar7;
    param_1[1] = (longlong)puVar9;
    param_1[2] = (longlong)(puVar7 + param_2 * 0xe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802bf82e(uint64_t *param_1)
void FUN_1802bf82e(uint64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  longlong unaff_RBP;
  uint64_t *unaff_RDI;
  
  if (unaff_RBP == 0) {
    puVar7 = (uint64_t *)0x0;
  }
  else {
    puVar7 = (uint64_t *)
             FUN_18062b420(_DAT_180c8ed18,unaff_RBP * 0x70,*(int8_t *)(unaff_RDI + 3));
    param_1 = (uint64_t *)*unaff_RDI;
  }
  puVar2 = (uint64_t *)unaff_RDI[1];
  puVar8 = puVar7;
  if (param_1 != puVar2) {
    do {
      uVar6 = param_1[1];
      *puVar8 = *param_1;
      puVar8[1] = uVar6;
      uVar6 = param_1[3];
      puVar8[2] = param_1[2];
      puVar8[3] = uVar6;
      uVar6 = param_1[5];
      puVar8[4] = param_1[4];
      puVar8[5] = uVar6;
      uVar6 = param_1[7];
      puVar8[6] = param_1[6];
      puVar8[7] = uVar6;
      uVar6 = param_1[9];
      puVar8[8] = param_1[8];
      puVar8[9] = uVar6;
      uVar6 = param_1[0xb];
      puVar8[10] = param_1[10];
      puVar8[0xb] = uVar6;
      puVar1 = param_1 + 0xc;
      uVar3 = *(int32_t *)((longlong)param_1 + 100);
      uVar4 = *(int32_t *)(param_1 + 0xd);
      uVar5 = *(int32_t *)((longlong)param_1 + 0x6c);
      param_1 = param_1 + 0xe;
      *(int32_t *)(puVar8 + 0xc) = *(int32_t *)puVar1;
      *(int32_t *)((longlong)puVar8 + 100) = uVar3;
      *(int32_t *)(puVar8 + 0xd) = uVar4;
      *(int32_t *)((longlong)puVar8 + 0x6c) = uVar5;
      puVar8 = puVar8 + 0xe;
    } while (param_1 != puVar2);
    param_1 = (uint64_t *)*unaff_RDI;
  }
  if (param_1 == (uint64_t *)0x0) {
    *unaff_RDI = puVar7;
    unaff_RDI[1] = puVar8;
    unaff_RDI[2] = puVar7 + unaff_RBP * 0xe;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802bf8dc(void)
void FUN_1802bf8dc(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1802bf8f0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int32_t uVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  
  uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x170,8,3,0xfffffffffffffffe);
  lVar7 = FUN_1802bf680(uVar6,*(uint64_t *)(param_1 + 0x308));
  *(int32_t *)(lVar7 + 0x44) = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar2 = *(longlong **)(lVar7 + 0x48);
  *(longlong **)(lVar7 + 0x48) = param_2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if ((*(uint *)(*(longlong *)(lVar7 + 0x48) + 0x68) & 0x800000) != 0) {
    *(int32_t *)(lVar7 + 0x44) = 1;
  }
  auVar11._0_4_ =
       (*(float *)((longlong)param_2 + 0x6cc) + *(float *)(param_2 + 0xd9)) *
       *(float *)(param_2 + 0xe0) *
       (*(float *)((longlong)param_2 + 0x4ac) + *(float *)(param_2 + 0x95)) *
       *(float *)(param_2 + 0x9c);
  uVar3 = (int32_t)*(longlong *)(lVar7 + 0x48);
  if (auVar11._0_4_ <= 0.0) {
    iVar9 = (int)auVar11._0_4_;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar11._0_4_)) {
      auVar12._4_4_ = auVar11._0_4_;
      auVar12._0_4_ = auVar11._0_4_;
      auVar12._8_8_ = 0;
      uVar4 = movmskps(uVar3,auVar12);
      auVar11._0_4_ = (float)(int)(iVar9 + (uVar4 & 1 ^ 1));
    }
    auVar11._0_4_ = auVar11._0_4_ - 1e-08;
  }
  else {
    iVar9 = (int)auVar11._0_4_;
    if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar11._0_4_)) {
      auVar11._4_4_ = auVar11._0_4_;
      auVar11._8_8_ = 0;
      uVar4 = movmskps(uVar3,auVar11);
      auVar11._0_4_ = (float)(int)(iVar9 + (uVar4 & 1 ^ 1));
    }
    auVar11._0_4_ = auVar11._0_4_ + 1e-08;
  }
  FUN_1802bf7f0(lVar7 + 0x58,(longlong)(int)auVar11._0_4_);
  LOCK();
  puVar1 = (uint *)(param_1 + 0x3a0);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar5 = uVar4 >> 10;
  if (*(longlong *)(param_1 + 0x3a8 + (ulonglong)uVar5 * 8) == 0) {
    lVar8 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
    plVar2 = (longlong *)(param_1 + 0x3a8 + (ulonglong)uVar5 * 8);
    LOCK();
    bVar10 = *plVar2 == 0;
    if (bVar10) {
      *plVar2 = lVar8;
    }
    UNLOCK();
    if ((!bVar10) && (lVar8 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  *(longlong *)
   (*(longlong *)(param_1 + 0x3a8 + (ulonglong)uVar5 * 8) + (ulonglong)(uVar4 + uVar5 * -0x400) * 8)
       = lVar7;
  return lVar7;
}






// 函数: void FUN_1802bfac0(longlong *param_1)
void FUN_1802bfac0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  while( true ) {
    if (plVar4 == plVar2) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(uint64_t *)(lVar3 + 0xf0) = 0;
      }
    }
    if (plVar4[0xd] != 0) break;
    if (plVar4[9] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    FUN_1802c00d0();
    if (plVar4[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar4 = plVar4 + 0x11;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802bfb90(longlong *param_1)
void FUN_1802bfb90(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)param_1[1];
  plVar4 = (longlong *)*param_1;
  while( true ) {
    if (plVar4 == plVar2) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(uint64_t *)(lVar3 + 0xf0) = 0;
      }
    }
    if (plVar4[0xd] != 0) break;
    if (plVar4[9] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    FUN_1802c00d0();
    if (plVar4[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar4 = plVar4 + 0x11;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



float * FUN_1802bfc90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar6 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  auVar4 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
  fVar5 = auVar4._0_4_;
  fVar5 = fVar5 * 0.5 * (3.0 - fVar6 * fVar5 * fVar5);
  *param_1 = fVar1 * fVar5;
  param_1[1] = fVar2 * fVar5;
  param_1[2] = fVar3 * fVar5;
  fVar1 = param_1[5];
  fVar2 = param_1[4];
  fVar3 = param_1[6];
  *param_2 = fVar5 * fVar6;
  fVar6 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  auVar4 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
  fVar5 = auVar4._0_4_;
  fVar5 = fVar5 * 0.5 * (3.0 - fVar6 * fVar5 * fVar5);
  param_1[4] = fVar2 * fVar5;
  param_1[5] = fVar1 * fVar5;
  param_1[6] = fVar3 * fVar5;
  fVar1 = param_1[9];
  fVar2 = param_1[8];
  fVar3 = param_1[10];
  param_2[1] = fVar5 * fVar6;
  fVar6 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  auVar4 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
  fVar5 = auVar4._0_4_;
  fVar5 = fVar5 * 0.5 * (3.0 - fVar6 * fVar5 * fVar5);
  param_1[9] = fVar1 * fVar5;
  param_1[10] = fVar3 * fVar5;
  param_2[2] = fVar5 * fVar6;
  param_1[8] = fVar2 * fVar5;
  return param_2;
}






// 函数: void FUN_1802bfe50(float *param_1)
void FUN_1802bfe50(float *param_1)

{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  FUN_1802bfc90(param_1,&fStack_38);
  fVar5 = param_1[10] * param_1[5] - param_1[9] * param_1[6];
  *param_1 = fVar5;
  fVar6 = param_1[8] * param_1[6] - param_1[10] * param_1[4];
  param_1[1] = fVar6;
  fVar4 = param_1[9] * param_1[4] - param_1[5] * param_1[8];
  fVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  param_1[1] = fVar6 * fVar1;
  param_1[2] = fVar4 * fVar1;
  *param_1 = fVar5 * fVar1;
  param_1[8] = fVar6 * fVar1 * param_1[6] - fVar4 * fVar1 * param_1[5];
  param_1[9] = param_1[4] * param_1[2] - *param_1 * param_1[6];
  param_1[10] = *param_1 * param_1[5] - param_1[4] * param_1[1];
  *param_1 = fStack_38 * *param_1;
  param_1[1] = fStack_38 * param_1[1];
  param_1[2] = fStack_38 * param_1[2];
  param_1[4] = fStack_34 * param_1[4];
  param_1[5] = fStack_34 * param_1[5];
  param_1[6] = fStack_34 * param_1[6];
  param_1[9] = fStack_30 * param_1[9];
  param_1[8] = fStack_30 * param_1[8];
  param_1[10] = fStack_30 * param_1[10];
  return;
}






// 函数: void FUN_1802c0000(longlong param_1,longlong *param_2)
void FUN_1802c0000(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x68);
  *(longlong **)(param_1 + 0x68) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}






// 函数: void FUN_1802c00d0(longlong *param_1)
void FUN_1802c00d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x90) {
    FUN_1802b13d0(lVar2);
    if (*(longlong *)(lVar2 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (*(longlong **)(lVar2 + 0x58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x58) + 0x38))();
    }
    FUN_1802bfac0();
    if (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802c0180(longlong *param_1)
void FUN_1802c0180(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x90) {
    FUN_1802b13d0(lVar2);
    if (*(longlong *)(lVar2 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (*(longlong **)(lVar2 + 0x58) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x58) + 0x38))();
    }
    FUN_1802bfac0();
    if (*(longlong **)(lVar2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



ulonglong FUN_1802c01a0(longlong param_1)

{
  short sVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int8_t auStack_28 [40];
  
  uVar3 = 0;
  uVar4 = uVar3;
  uVar5 = uVar3;
  do {
    cVar2 = *(char *)(uVar4 + param_1);
    if ((byte)(cVar2 - 0x30U) < 10) {
      sVar1 = cVar2 + -0x30;
    }
    else if ((byte)(cVar2 + 0x9fU) < 6) {
      sVar1 = cVar2 + -0x57;
    }
    else {
      if (5 < (byte)(cVar2 + 0xbfU)) {
        FUN_1802c0230(auStack_28);
                    // WARNING: Subroutine does not return
        _CxxThrowException(auStack_28,&UNK_180bd8a60);
      }
      sVar1 = cVar2 + -0x37;
    }
    uVar4 = uVar4 + 1;
    cVar2 = (char)uVar3;
    uVar3 = uVar3 + 4;
    uVar5 = (ulonglong)(ushort)((ushort)uVar5 | sVar1 << (0xcU - cVar2 & 0x1f));
  } while (uVar3 < 0x10);
  return uVar5;
}



uint64_t * FUN_1802c0230(uint64_t *param_1)

{
  void *puStack_20;
  int8_t uStack_18;
  
  *param_1 = &UNK_18098b928;
  param_1[1] = 0;
  param_1[2] = 0;
  puStack_20 = &UNK_180a185f0;
  uStack_18 = 1;
  __std_exception_copy(&puStack_20);
  *param_1 = &UNK_180a18630;
  *param_1 = &UNK_180a18618;
  return param_1;
}






// 函数: void FUN_1802c02a0(uint64_t *param_1)
void FUN_1802c02a0(uint64_t *param_1)

{
  *param_1 = &UNK_18098b928;
  __std_exception_destroy(param_1 + 1);
  return;
}



uint64_t *
FUN_1802c02d0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_18098b928;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t * FUN_1802c0330(uint64_t *param_1,longlong param_2)

{
  *param_1 = &UNK_18098b928;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = &UNK_180a18630;
  *param_1 = &UNK_180a18618;
  return param_1;
}



uint64_t * FUN_1802c0390(uint64_t *param_1,longlong param_2)

{
  *param_1 = &UNK_18098b928;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = &UNK_180a18630;
  return param_1;
}



byte FUN_1802c03e0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  byte bVar5;
  int8_t auStack_28 [40];
  
  bVar5 = 0;
  uVar2 = 0;
  uVar4 = uVar2;
  do {
    cVar1 = *(char *)(uVar2 + param_1);
    if ((byte)(cVar1 - 0x30U) < 10) {
      cVar1 = cVar1 + -0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x57;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) {
        FUN_1802c0230(auStack_28);
                    // WARNING: Subroutine does not return
        _CxxThrowException(auStack_28,&UNK_180bd8a60);
      }
      cVar1 = cVar1 + -0x37;
    }
    uVar2 = uVar2 + 1;
    cVar3 = (char)uVar4;
    uVar4 = uVar4 + 4;
    bVar5 = bVar5 | cVar1 << (4U - cVar3 & 0x1f);
  } while (uVar4 < 8);
  return bVar5;
}



uint * FUN_1802c0460(uint *param_1,char *param_2)

{
  int8_t uVar1;
  char cVar2;
  int16_t uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  uint uVar12;
  int8_t auStack_28 [32];
  
  pcVar7 = param_2 + 1;
  if (*param_2 != '{') {
    pcVar7 = param_2;
  }
  uVar12 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  lVar11 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar9 = 0;
  do {
    cVar2 = pcVar7[lVar11];
    if ((byte)(cVar2 - 0x30U) < 10) {
      iVar5 = cVar2 + -0x30;
    }
    else if ((byte)(cVar2 + 0x9fU) < 6) {
      iVar5 = cVar2 + -0x57;
    }
    else {
      if (5 < (byte)(cVar2 + 0xbfU)) {
        FUN_1802c0230(auStack_28);
                    // WARNING: Subroutine does not return
        _CxxThrowException(auStack_28,&UNK_180bd8a60);
      }
      iVar5 = cVar2 + -0x37;
    }
    lVar11 = lVar11 + 1;
    cVar2 = (char)uVar9;
    uVar9 = uVar9 + 4;
    uVar12 = uVar12 | iVar5 << (0x1cU - cVar2 & 0x1f);
  } while (uVar9 < 0x20);
  cVar2 = pcVar7[8];
  *param_1 = uVar12;
  pcVar7 = pcVar7 + (ulonglong)(cVar2 == '-') + 8;
  uVar3 = FUN_1802c01a0(pcVar7);
  cVar2 = pcVar7[4];
  pcVar8 = pcVar7 + 4;
  *(int16_t *)(param_1 + 1) = uVar3;
  if (cVar2 == '-') {
    pcVar8 = pcVar7 + 5;
  }
  uVar3 = FUN_1802c01a0(pcVar8);
  *(int16_t *)((longlong)param_1 + 6) = uVar3;
  pcVar8 = pcVar8 + (ulonglong)(pcVar8[4] == '-') + 4;
  uVar1 = FUN_1802c03e0(pcVar8);
  *(int8_t *)(param_1 + 2) = uVar1;
  uVar1 = FUN_1802c03e0(pcVar8 + 2);
  uVar9 = 0;
  cVar2 = pcVar8[4];
  *(int8_t *)((longlong)param_1 + 9) = uVar1;
  pcVar8 = pcVar8 + (ulonglong)(cVar2 == '-') + 4;
  do {
    bVar10 = 0;
    lVar11 = 0;
    uVar6 = 0;
    do {
      cVar2 = pcVar8[lVar11];
      if ((byte)(cVar2 - 0x30U) < 10) {
        cVar2 = cVar2 + -0x30;
      }
      else if ((byte)(cVar2 + 0x9fU) < 6) {
        cVar2 = cVar2 + -0x57;
      }
      else {
        if (5 < (byte)(cVar2 + 0xbfU)) {
          FUN_1802c0230(auStack_28);
                    // WARNING: Subroutine does not return
          _CxxThrowException(auStack_28,&UNK_180bd8a60);
        }
        cVar2 = cVar2 + -0x37;
      }
      lVar11 = lVar11 + 1;
      cVar4 = (char)uVar6;
      uVar6 = uVar6 + 4;
      bVar10 = bVar10 | cVar2 << (4U - cVar4 & 0x1f);
    } while (uVar6 < 8);
    *(byte *)(uVar9 + 10 + (longlong)param_1) = bVar10;
    pcVar8 = pcVar8 + 2;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 6);
  return param_1;
}






// 函数: void FUN_1802c04de(void)
void FUN_1802c04de(void)

{
  int8_t uVar1;
  char cVar2;
  int16_t uVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int32_t in_R10D;
  longlong in_R11;
  ulonglong uVar9;
  int32_t *unaff_R14;
  int8_t auStackX_20 [8];
  
  cVar2 = *(char *)(in_R11 + 8);
  *unaff_R14 = in_R10D;
  lVar6 = (ulonglong)(cVar2 == '-') + in_R11 + 8;
  uVar3 = FUN_1802c01a0(lVar6);
  cVar2 = *(char *)(lVar6 + 4);
  lVar7 = lVar6 + 4;
  *(int16_t *)(unaff_R14 + 1) = uVar3;
  if (cVar2 == '-') {
    lVar7 = lVar6 + 5;
  }
  uVar3 = FUN_1802c01a0(lVar7);
  *(int16_t *)((longlong)unaff_R14 + 6) = uVar3;
  lVar7 = (ulonglong)(*(char *)(lVar7 + 4) == '-') + lVar7 + 4;
  uVar1 = FUN_1802c03e0(lVar7);
  *(int8_t *)(unaff_R14 + 2) = uVar1;
  uVar1 = FUN_1802c03e0(lVar7 + 2);
  uVar9 = 0;
  cVar2 = *(char *)(lVar7 + 4);
  *(int8_t *)((longlong)unaff_R14 + 9) = uVar1;
  lVar7 = (ulonglong)(cVar2 == '-') + lVar7 + 4;
  do {
    bVar8 = 0;
    lVar6 = 0;
    uVar5 = 0;
    do {
      cVar2 = *(char *)(lVar7 + lVar6);
      if ((byte)(cVar2 - 0x30U) < 10) {
        cVar2 = cVar2 + -0x30;
      }
      else if ((byte)(cVar2 + 0x9fU) < 6) {
        cVar2 = cVar2 + -0x57;
      }
      else {
        if (5 < (byte)(cVar2 + 0xbfU)) {
          FUN_1802c0230(auStackX_20);
                    // WARNING: Subroutine does not return
          _CxxThrowException(auStackX_20,&UNK_180bd8a60);
        }
        cVar2 = cVar2 + -0x37;
      }
      lVar6 = lVar6 + 1;
      cVar4 = (char)uVar5;
      uVar5 = uVar5 + 4;
      bVar8 = bVar8 | cVar2 << (4U - cVar4 & 0x1f);
    } while (uVar5 < 8);
    *(byte *)(uVar9 + 10 + (longlong)unaff_R14) = bVar8;
    lVar7 = lVar7 + 2;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 6);
  return;
}






// 函数: void FUN_1802c0580(void)
void FUN_1802c0580(void)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  longlong in_R10;
  ulonglong in_R11;
  longlong unaff_R14;
  int8_t auStackX_20 [8];
  
  do {
    bVar5 = 0;
    lVar4 = 0;
    uVar3 = 0;
    do {
      cVar1 = *(char *)(in_R10 + lVar4);
      if ((byte)(cVar1 - 0x30U) < 10) {
        cVar1 = cVar1 + -0x30;
      }
      else if ((byte)(cVar1 + 0x9fU) < 6) {
        cVar1 = cVar1 + -0x57;
      }
      else {
        if (5 < (byte)(cVar1 + 0xbfU)) {
          FUN_1802c0230(auStackX_20);
                    // WARNING: Subroutine does not return
          _CxxThrowException(auStackX_20,&UNK_180bd8a60);
        }
        cVar1 = cVar1 + -0x37;
      }
      lVar4 = lVar4 + 1;
      cVar2 = (char)uVar3;
      uVar3 = uVar3 + 4;
      bVar5 = bVar5 | cVar1 << (4U - cVar2 & 0x1f);
    } while (uVar3 < 8);
    *(byte *)(in_R11 + 10 + unaff_R14) = bVar5;
    in_R10 = in_R10 + 2;
    in_R11 = in_R11 + 1;
  } while (in_R11 < 6);
  return;
}






// 函数: void FUN_1802c0630(longlong param_1,uint64_t param_2,longlong *param_3)
void FUN_1802c0630(longlong param_1,uint64_t param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  *(longlong **)(param_1 + 0x28) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  FUN_1802c06b0(param_1,param_2);
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  return;
}






// 函数: void FUN_1802c06b0(longlong param_1,longlong param_2)
void FUN_1802c06b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  int32_t auStackX_8 [8];
  
  fVar5 = 0.0;
  if (((*(uint *)(param_2 + 0x60) >> 0x1d & 1) != 0) && (0.0 < *(float *)(param_2 + 100))) {
    fVar5 = 5000.0 - *(float *)(param_2 + 100);
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = plVar3[7];
    iVar1 = 0;
    if (plVar3[8] - lVar4 >> 4 != 0) {
      lVar2 = 0;
      do {
        lVar4 = *(longlong *)(lVar2 + lVar4);
        lVar2 = lVar2 + 0x10;
        iVar1 = iVar1 + 1;
        *(int32_t *)(lVar4 + 0x2a8) = 0;
        *(int32_t *)(lVar4 + 0x2ac) = 0;
        *(int32_t *)(lVar4 + 0x2b0) = 0x3f800000;
        *(float *)(lVar4 + 0x2b4) = fVar5;
        lVar4 = plVar3[7];
      } while ((ulonglong)(longlong)iVar1 < (ulonglong)(plVar3[8] - lVar4 >> 4));
      plVar3 = *(longlong **)(param_1 + 0x28);
    }
    *(int32_t *)(param_1 + 0x20) = *(int32_t *)((longlong)plVar3 + 0x244);
    auStackX_8[0] = 0x31;
    if ((~(byte)((uint)*(int32_t *)(param_2 + 0x60) >> 0x1c) & 1) == 0) {
      auStackX_8[0] = 1;
    }
    (**(code **)(*plVar3 + 0x128))(plVar3,auStackX_8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




