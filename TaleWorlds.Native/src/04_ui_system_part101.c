#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part101.c - 17 个函数

// 函数: void FUN_180729270(longlong param_1,longlong param_2)
void FUN_180729270(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = 0;
  *(int *)(param_1 + 0x105c) = (int)*(char *)(param_1 + 0xae5);
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    uVar5 = (ulonglong)*(int *)(param_1 + 0x914);
    iVar6 = 0;
    if (0 < *(int *)(param_2 + -4 + uVar5 * 4)) {
      do {
        iVar7 = (int)uVar5;
        if (iVar6 == iVar7) break;
        uVar1 = *(uint *)(param_1 + 0x914);
        uVar5 = (ulonglong)uVar1;
        lVar4 = (longlong)((iVar7 - iVar6) * 5);
        iVar7 = (int)*(short *)(param_2 + 0x5e + lVar4 * 2) +
                (int)*(short *)(param_2 + 0x5c + lVar4 * 2) +
                (int)*(short *)(param_2 + 0x5a + lVar4 * 2) +
                (int)*(short *)(param_2 + 0x58 + lVar4 * 2) +
                (int)*(short *)(param_2 + 0x56 + lVar4 * 2);
        if (iVar3 < iVar7) {
          lVar4 = (longlong)((short)(*(short *)(param_1 + 0x914) - (short)iVar6) * 5 + -5);
          *(undefined8 *)(param_1 + 0x1068) = *(undefined8 *)(param_2 + 0x60 + lVar4 * 2);
          *(undefined2 *)(param_1 + 0x1070) = *(undefined2 *)(param_2 + 0x68 + lVar4 * 2);
          *(int *)(param_1 + 0x1064) =
               *(int *)(param_2 + -4 + (longlong)(int)(uVar1 - iVar6) * 4) << 8;
          iVar3 = iVar7;
        }
        iVar6 = iVar6 + 1;
      } while (*(int *)(param_1 + 0x91c) * iVar6 < *(int *)(param_2 + -4 + (longlong)(int)uVar1 * 4)
              );
    }
    *(undefined8 *)(param_1 + 0x1068) = 0;
    *(undefined2 *)(param_1 + 0x1070) = 0;
    *(short *)(param_1 + 0x106c) = (short)iVar3;
    if (iVar3 < 0x2ccd) {
      iVar6 = 1;
      if (1 < iVar3) {
        iVar6 = iVar3;
      }
      iVar3 = (int)(short)(0xb33400 / (longlong)iVar6);
      *(short *)(param_1 + 0x1068) = (short)(*(short *)(param_1 + 0x1068) * iVar3 >> 10);
      *(short *)(param_1 + 0x106a) = (short)(*(short *)(param_1 + 0x106a) * iVar3 >> 10);
      *(short *)(param_1 + 0x106c) = (short)(*(short *)(param_1 + 0x106c) * iVar3 >> 10);
      *(short *)(param_1 + 0x106e) = (short)(*(short *)(param_1 + 0x106e) * iVar3 >> 10);
      uVar2 = (undefined2)(*(short *)(param_1 + 0x1070) * iVar3 >> 10);
    }
    else {
      if (iVar3 < 0x3cce) goto LAB_180729492;
      iVar6 = 1;
      if (1 < iVar3) {
        iVar6 = iVar3;
      }
      iVar3 = (int)(short)(0xf334000 / (longlong)iVar6);
      *(short *)(param_1 + 0x1068) = (short)(*(short *)(param_1 + 0x1068) * iVar3 >> 0xe);
      *(short *)(param_1 + 0x106a) = (short)(*(short *)(param_1 + 0x106a) * iVar3 >> 0xe);
      *(short *)(param_1 + 0x106c) = (short)(*(short *)(param_1 + 0x106c) * iVar3 >> 0xe);
      *(short *)(param_1 + 0x106e) = (short)(*(short *)(param_1 + 0x106e) * iVar3 >> 0xe);
      uVar2 = (undefined2)(*(short *)(param_1 + 0x1070) * iVar3 >> 0xe);
    }
  }
  else {
    uVar2 = 0;
    *(int *)(param_1 + 0x1064) = *(short *)(param_1 + 0x90c) * 0x1200;
    *(undefined8 *)(param_1 + 0x1068) = 0;
  }
  *(undefined2 *)(param_1 + 0x1070) = uVar2;
LAB_180729492:
                    // WARNING: Subroutine does not return
  memcpy(param_1 + 0x1072,param_2 + 0x40,(longlong)*(int *)(param_1 + 0x924) * 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807294f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)
void FUN_1807294f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 auStack_68 [32];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  iVar8 = *(int *)(param_1 + 0x90c);
  lVar1 = param_1 + 0xaec;
  if (iVar8 != *(int *)(param_1 + 0x1054)) {
    iVar5 = *(int *)(param_1 + 0x924);
    iVar7 = 0;
    iVar4 = 0;
    if (0 < iVar5) {
      puVar2 = (undefined2 *)(param_1 + 0xfec);
      do {
        iVar4 = iVar4 + (int)(0x7fff / (longlong)(iVar5 + 1));
        iVar7 = iVar7 + 1;
        *puVar2 = (short)iVar4;
        puVar2 = puVar2 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x924));
      iVar8 = *(int *)(param_1 + 0x90c);
    }
    *(undefined4 *)(param_1 + 0x104c) = 0;
    *(undefined4 *)(param_1 + 0x1050) = 0x307880;
    *(int *)(param_1 + 0x1054) = iVar8;
  }
  if (*(int *)(param_1 + 0x1058) == 0) {
    if (*(int *)(param_1 + 0x105c) == 0) {
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 0x924)) {
        psVar6 = (short *)(param_1 + 0xfec);
        do {
          iVar8 = iVar8 + 1;
          *psVar6 = (short)((ulonglong)
                            (uint)((int)*(short *)((param_1 - lVar1) + 0x428 + (longlong)psVar6) -
                                  (int)*psVar6) * 0x3fdc >> 0x10) + *psVar6;
          psVar6 = psVar6 + 1;
        } while (iVar8 < *(int *)(param_1 + 0x924));
      }
      iVar8 = *(int *)(param_1 + 0x914);
      iVar5 = 0;
      iVar4 = 0;
      if (0 < iVar8) {
        piVar9 = (int *)(param_2 + 0x10);
        do {
          iVar7 = *piVar9;
          piVar9 = piVar9 + 1;
          iVar4 = iVar4 + 1;
          if (iVar7 <= iVar5) {
            iVar7 = iVar5;
          }
          iVar5 = iVar7;
        } while (iVar4 < iVar8);
      }
                    // WARNING: Subroutine does not return
      memmove(lVar1 + (longlong)*(int *)(param_1 + 0x91c) * 4,lVar1,
              (longlong)((iVar8 + -1) * *(int *)(param_1 + 0x91c)) << 2);
    }
    if (*(int *)(param_1 + 0x1058) == 0) {
                    // WARNING: Subroutine does not return
      memset(param_1 + 0x100c,0,(longlong)*(int *)(param_1 + 0x924) << 2);
    }
  }
  uVar3 = (longlong)param_4 * 4 + 0x4f;
  if (uVar3 <= (longlong)param_4 * 4 + 0x40U) {
    uVar3 = 0xffffffffffffff0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd200(uVar3 & 0xfffffffffffffff0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180729ba0(longlong param_1,longlong param_2,int param_3)
void FUN_180729ba0(longlong param_1,longlong param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined4 uStack_88;
  short asStack_78 [16];
  short asStack_58 [16];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  lVar4 = 0;
  uStack_88 = *(undefined4 *)(param_1 + 0x914);
  FUN_1807249d0(param_2 + 0x10,param_1 + 0xac8,param_1 + 0x908,param_3 == 2);
  FUN_180734390(asStack_78,param_1 + 0xad0,*(undefined8 *)(param_1 + 0xac0));
  FUN_18072f4d0(param_2 + 0x40,asStack_78,*(undefined4 *)(param_1 + 0x924),
                *(undefined4 *)(param_1 + 0x1060));
  if (*(int *)(param_1 + 0x948) == 1) {
    *(undefined1 *)(param_1 + 0xae7) = 4;
    cVar3 = '\x04';
  }
  else {
    cVar3 = *(char *)(param_1 + 0xae7);
  }
  uVar2 = *(uint *)(param_1 + 0x924);
  if ('\x03' < cVar3) {
                    // WARNING: Subroutine does not return
    memcpy(param_2 + 0x20,param_2 + 0x40,(longlong)(int)uVar2 * 2);
  }
  if (0 < (int)uVar2) {
    uVar5 = (ulonglong)uVar2;
    do {
      sVar1 = *(short *)((param_1 - (longlong)asStack_78) + 0x928 + (longlong)asStack_78 + lVar4);
      *(short *)((longlong)asStack_58 + lVar4) =
           (short)(((int)*(short *)((longlong)asStack_78 + lVar4) - (int)sVar1) * (int)cVar3 >> 2) +
           sVar1;
      lVar4 = lVar4 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_18072f4d0(param_2 + 0x20,asStack_58,(longlong)(int)uVar2,*(undefined4 *)(param_1 + 0x1060));
                    // WARNING: Subroutine does not return
  memcpy(param_1 + 0x928,asStack_78,(longlong)*(int *)(param_1 + 0x924) * 2);
}





// 函数: void FUN_180729bbd(longlong param_1,undefined8 param_2,int param_3)
void FUN_180729bbd(longlong param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  longlong unaff_RSI;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = 0;
  FUN_1807249d0(unaff_RSI + 0x10,param_1 + 0xac8,param_1 + 0x908,param_3 == 2,
                *(undefined4 *)(param_1 + 0x914));
  FUN_180734390(&stack0x00000030,param_1 + 0xad0,*(undefined8 *)(param_1 + 0xac0));
  FUN_18072f4d0(unaff_RSI + 0x40,&stack0x00000030,*(undefined4 *)(param_1 + 0x924),
                *(undefined4 *)(param_1 + 0x1060));
  if (*(int *)(param_1 + 0x948) == 1) {
    *(undefined1 *)(param_1 + 0xae7) = 4;
    cVar3 = '\x04';
  }
  else {
    cVar3 = *(char *)(param_1 + 0xae7);
  }
  uVar2 = *(uint *)(param_1 + 0x924);
  if ('\x03' < cVar3) {
                    // WARNING: Subroutine does not return
    memcpy(unaff_RSI + 0x20,unaff_RSI + 0x40,(longlong)(int)uVar2 * 2);
  }
  if (0 < (int)uVar2) {
    uVar5 = (ulonglong)uVar2;
    do {
      sVar1 = *(short *)((param_1 - (longlong)&stack0x00000030) + 0x928 +
                        (longlong)(&stack0x00000030 + lVar4));
      *(short *)(&stack0x00000050 + lVar4) =
           (short)(((int)*(short *)(&stack0x00000030 + lVar4) - (int)sVar1) * (int)cVar3 >> 2) +
           sVar1;
      lVar4 = lVar4 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_18072f4d0(unaff_RSI + 0x20,&stack0x00000050,(longlong)(int)uVar2,
                *(undefined4 *)(param_1 + 0x1060));
                    // WARNING: Subroutine does not return
  memcpy(param_1 + 0x928,&stack0x00000030,(longlong)*(int *)(param_1 + 0x924) * 2);
}





// 函数: void FUN_180729c5d(undefined8 param_1,undefined8 param_2,ulonglong param_3)
void FUN_180729c5d(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  short sVar1;
  char in_AL;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar2;
  
  uVar2 = param_3 & 0xffffffff;
  do {
    sVar1 = *(short *)((unaff_RBX - (longlong)&stack0x00000030) + 0x928 +
                      (longlong)(&stack0x00000030 + unaff_RDI));
    *(short *)(&stack0x00000050 + unaff_RDI) =
         (short)(((int)*(short *)(&stack0x00000030 + unaff_RDI) - (int)sVar1) * (int)in_AL >> 2) +
         sVar1;
    unaff_RDI = unaff_RDI + 2;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  FUN_18072f4d0(unaff_RSI + 0x20,&stack0x00000050,param_3,*(undefined4 *)(unaff_RBX + 0x1060));
                    // WARNING: Subroutine does not return
  memcpy(unaff_RBX + 0x928,&stack0x00000030,(longlong)*(int *)(unaff_RBX + 0x924) * 2);
}





// 函数: void FUN_180729cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_180729cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  FUN_18072f4d0(unaff_RSI + 0x20,&stack0x00000050,param_3,*(undefined4 *)(unaff_RBX + 0x1060));
                    // WARNING: Subroutine does not return
  memcpy(unaff_RBX + 0x928,&stack0x00000030,(longlong)*(int *)(unaff_RBX + 0x924) * 2);
}





// 函数: void FUN_180729d55(void)
void FUN_180729d55(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  short *psVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  int unaff_EDI;
  char *pcVar5;
  ulonglong in_stack_00000070;
  
  FUN_1807342b0(*(undefined2 *)(unaff_RBX + 0xae2),*(undefined1 *)(unaff_RBX + 0xae4));
  lVar2 = *(longlong *)(&UNK_180954878 + (longlong)*(char *)(unaff_RBX + 0xae8) * 8);
  if (unaff_EDI < *(int *)(unaff_RBX + 0x914)) {
    pcVar5 = (char *)(unaff_RBX + 0xacc);
    psVar4 = (short *)(unaff_RSI + 0x62);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      unaff_EDI = unaff_EDI + 1;
      lVar3 = (longlong)cVar1 * 5;
      psVar4[-1] = (short)*(char *)(lVar3 + lVar2) << 7;
      *psVar4 = (short)*(char *)(lVar2 + 1 + lVar3) << 7;
      psVar4[1] = (short)*(char *)(lVar2 + 2 + lVar3) << 7;
      psVar4[2] = (short)*(char *)(lVar2 + 3 + lVar3) << 7;
      psVar4[3] = (short)*(char *)(lVar2 + 4 + lVar3) << 7;
      psVar4 = psVar4 + 5;
    } while (unaff_EDI < *(int *)(unaff_RBX + 0x914));
  }
  *(int *)(unaff_RSI + 0x88) =
       (int)*(short *)(&UNK_1809535e0 + (longlong)*(char *)(unaff_RBX + 0xae9) * 2);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180729e70(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_180729e70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_108 [72];
  undefined8 uStack_c0;
  undefined8 uStack_a8;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  uVar1 = (longlong)*(int *)(param_1 + 0x920) * 2;
  uVar2 = uVar1 + 0xf;
  if (uVar2 <= uVar1) {
    uVar2 = 0xffffffffffffff0;
  }
  uStack_c0 = param_2;
  uStack_a8 = param_3;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(uVar2 & 0xfffffffffffffff0);
}





// 函数: void FUN_18072a9c0(int *param_1,longlong param_2,longlong param_3,short *param_4,int param_5)
void FUN_18072a9c0(int *param_1,longlong param_2,longlong param_3,short *param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < (longlong)param_5) {
    lVar3 = 0;
    do {
      iVar1 = *(short *)(param_3 + lVar3 * 2) * 0x100 + *param_1;
      *(int *)(param_2 + lVar3 * 4) = iVar1;
      lVar3 = lVar3 + 1;
      lVar2 = (longlong)(iVar1 * 4);
      *param_1 = (int)((ulonglong)(*param_4 * lVar2) >> 0x10) + param_1[1];
      param_1[1] = (int)((ulonglong)(param_4[1] * lVar2) >> 0x10);
    } while (lVar3 < param_5);
  }
  return;
}





// 函数: void FUN_18072aa30(int *param_1,int *param_2,short *param_3,uint param_4)
void FUN_18072aa30(int *param_1,int *param_2,short *param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_4 == 0) {
    iVar9 = 0x20;
  }
  else {
    iVar9 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar9 = 0x1f - iVar9;
  }
  iVar8 = 0;
  bVar4 = (byte)(0x1f - iVar9);
  iVar10 = iVar8;
  uVar6 = param_4;
  if (0 < (int)(param_4 - 1)) {
    uVar3 = (param_4 - 2 >> 1) + 1;
    uVar5 = (ulonglong)uVar3;
    iVar10 = uVar3 * 2;
    psVar7 = param_3;
    do {
      psVar1 = psVar7 + 1;
      sVar2 = *psVar7;
      psVar7 = psVar7 + 2;
      uVar6 = uVar6 + ((uint)((int)*psVar1 * (int)*psVar1 + (int)sVar2 * (int)sVar2) >>
                      (bVar4 & 0x1f));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar10 < (int)param_4) {
    uVar6 = uVar6 + ((uint)((int)param_3[iVar10] * (int)param_3[iVar10]) >> (bVar4 & 0x1f));
  }
  if (uVar6 == 0) {
    iVar10 = 0x20;
  }
  else {
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar10 = 0x1f - iVar10;
  }
  iVar9 = ((0x1f - iVar9) - iVar10) + 3;
  if (iVar9 < 0) {
    iVar9 = iVar8;
  }
  iVar10 = iVar8;
  if (0 < (int)(param_4 - 1)) {
    uVar6 = (param_4 - 2 >> 1) + 1;
    uVar5 = (ulonglong)uVar6;
    iVar10 = uVar6 * 2;
    psVar7 = param_3;
    do {
      psVar1 = psVar7 + 1;
      sVar2 = *psVar7;
      psVar7 = psVar7 + 2;
      iVar8 = iVar8 + ((uint)((int)sVar2 * (int)sVar2 + (int)*psVar1 * (int)*psVar1) >>
                      ((byte)iVar9 & 0x1f));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar10 < (int)param_4) {
    iVar8 = iVar8 + ((uint)((int)param_3[iVar10] * (int)param_3[iVar10]) >> ((byte)iVar9 & 0x1f));
  }
  *param_2 = iVar9;
  *param_1 = iVar8;
  return;
}





// 函数: void FUN_18072aa36(int *param_1,int *param_2,short *param_3,uint param_4)
void FUN_18072aa36(int *param_1,int *param_2,short *param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_4 == 0) {
    iVar9 = 0x20;
  }
  else {
    iVar9 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar9 = 0x1f - iVar9;
  }
  iVar8 = 0;
  bVar4 = (byte)(0x1f - iVar9);
  iVar10 = iVar8;
  uVar6 = param_4;
  if (0 < (int)(param_4 - 1)) {
    uVar3 = (param_4 - 2 >> 1) + 1;
    uVar5 = (ulonglong)uVar3;
    iVar10 = uVar3 * 2;
    psVar7 = param_3;
    do {
      psVar1 = psVar7 + 1;
      sVar2 = *psVar7;
      psVar7 = psVar7 + 2;
      uVar6 = uVar6 + ((uint)((int)*psVar1 * (int)*psVar1 + (int)sVar2 * (int)sVar2) >>
                      (bVar4 & 0x1f));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar10 < (int)param_4) {
    uVar6 = uVar6 + ((uint)((int)param_3[iVar10] * (int)param_3[iVar10]) >> (bVar4 & 0x1f));
  }
  if (uVar6 == 0) {
    iVar10 = 0x20;
  }
  else {
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar10 = 0x1f - iVar10;
  }
  iVar9 = ((0x1f - iVar9) - iVar10) + 3;
  if (iVar9 < 0) {
    iVar9 = iVar8;
  }
  iVar10 = iVar8;
  if (0 < (int)(param_4 - 1)) {
    uVar6 = (param_4 - 2 >> 1) + 1;
    uVar5 = (ulonglong)uVar6;
    iVar10 = uVar6 * 2;
    psVar7 = param_3;
    do {
      psVar1 = psVar7 + 1;
      sVar2 = *psVar7;
      psVar7 = psVar7 + 2;
      iVar8 = iVar8 + ((uint)((int)sVar2 * (int)sVar2 + (int)*psVar1 * (int)*psVar1) >>
                      ((byte)iVar9 & 0x1f));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar10 < (int)param_4) {
    iVar8 = iVar8 + ((uint)((int)param_3[iVar10] * (int)param_3[iVar10]) >> ((byte)iVar9 & 0x1f));
  }
  *param_2 = iVar9;
  *param_1 = iVar8;
  return;
}





// 函数: void FUN_18072aa3e(int *param_1,int *param_2,short *param_3,int param_4)
void FUN_18072aa3e(int *param_1,int *param_2,short *param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  uint unaff_EBX;
  ulonglong uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_4 == 0) {
    iVar9 = 0x20;
  }
  else {
    iVar9 = 0x1f;
    if (unaff_EBX != 0) {
      for (; unaff_EBX >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar9 = 0x1f - iVar9;
  }
  iVar8 = 0;
  iVar10 = 0;
  bVar4 = (byte)(0x1f - iVar9);
  uVar6 = unaff_EBX;
  if (0 < (int)(unaff_EBX - 1)) {
    uVar3 = (unaff_EBX - 2 >> 1) + 1;
    uVar5 = (ulonglong)uVar3;
    iVar10 = uVar3 * 2;
    psVar7 = param_3;
    do {
      psVar1 = psVar7 + 1;
      sVar2 = *psVar7;
      psVar7 = psVar7 + 2;
      uVar6 = uVar6 + ((uint)((int)*psVar1 * (int)*psVar1 + (int)sVar2 * (int)sVar2) >>
                      (bVar4 & 0x1f));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar10 < (int)unaff_EBX) {
    uVar6 = uVar6 + ((uint)((int)param_3[iVar10] * (int)param_3[iVar10]) >> (bVar4 & 0x1f));
  }
  if (uVar6 == 0) {
    iVar10 = 0x20;
  }
  else {
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar10 = 0x1f - iVar10;
  }
  iVar11 = 0;
  iVar9 = ((0x1f - iVar9) - iVar10) + 3;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  if (0 < (int)(unaff_EBX - 1)) {
    uVar6 = (unaff_EBX - 2 >> 1) + 1;
    uVar5 = (ulonglong)uVar6;
    iVar11 = uVar6 * 2;
    psVar7 = param_3;
    do {
      psVar1 = psVar7 + 1;
      sVar2 = *psVar7;
      psVar7 = psVar7 + 2;
      iVar8 = iVar8 + ((uint)((int)sVar2 * (int)sVar2 + (int)*psVar1 * (int)*psVar1) >>
                      ((byte)iVar9 & 0x1f));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar11 < (int)unaff_EBX) {
    iVar8 = iVar8 + ((uint)((int)param_3[iVar11] * (int)param_3[iVar11]) >> ((byte)iVar9 & 0x1f));
  }
  *param_2 = iVar9;
  *param_1 = iVar8;
  return;
}





// 函数: void FUN_18072aa86(int param_1,undefined8 param_2,uint param_3,int param_4)
void FUN_18072aa86(int param_1,undefined8 param_2,uint param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  uint in_EAX;
  uint uVar3;
  int unaff_EBX;
  int unaff_ESI;
  ulonglong uVar4;
  short *psVar5;
  int in_R11D;
  int iVar6;
  int iVar7;
  int *unaff_R12;
  short *unaff_R14;
  int *unaff_R15;
  
  uVar3 = (in_EAX >> 1) + 1;
  uVar4 = (ulonglong)uVar3;
  iVar6 = uVar3 * 2;
  psVar5 = unaff_R14;
  do {
    psVar1 = psVar5 + 1;
    sVar2 = *psVar5;
    psVar5 = psVar5 + 2;
    param_3 = param_3 + ((uint)((int)*psVar1 * (int)*psVar1 + (int)sVar2 * (int)sVar2) >>
                        ((byte)param_1 & 0x1f));
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  if (iVar6 < unaff_EBX) {
    param_3 = param_3 + ((uint)((int)unaff_R14[iVar6] * (int)unaff_R14[iVar6]) >>
                        ((byte)param_1 & 0x1f));
  }
  if (param_3 == 0) {
    iVar6 = 0x20;
  }
  else {
    iVar6 = 0x1f;
    if (param_3 != 0) {
      for (; param_3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar6 = in_R11D - iVar6;
  }
  iVar6 = (param_1 - iVar6) + 3;
  if (iVar6 < 0) {
    iVar6 = param_4;
  }
  iVar7 = param_4;
  if (0 < unaff_ESI) {
    uVar3 = (unaff_ESI - 1U >> 1) + 1;
    uVar4 = (ulonglong)uVar3;
    iVar7 = uVar3 * 2;
    psVar5 = unaff_R14;
    do {
      psVar1 = psVar5 + 1;
      sVar2 = *psVar5;
      psVar5 = psVar5 + 2;
      param_4 = param_4 + ((uint)((int)sVar2 * (int)sVar2 + (int)*psVar1 * (int)*psVar1) >>
                          ((byte)iVar6 & 0x1f));
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (iVar7 < unaff_EBX) {
    param_4 = param_4 + ((uint)((int)unaff_R14[iVar7] * (int)unaff_R14[iVar7]) >>
                        ((byte)iVar6 & 0x1f));
  }
  *unaff_R15 = iVar6;
  *unaff_R12 = param_4;
  return;
}





// 函数: void FUN_18072aac5(int param_1,undefined8 param_2,uint param_3,int param_4)
void FUN_18072aac5(int param_1,undefined8 param_2,uint param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  short *psVar4;
  ulonglong uVar5;
  int in_R11D;
  int iVar6;
  int iVar7;
  int *unaff_R12;
  short *unaff_R14;
  int *unaff_R15;
  
  if (unaff_EBP < unaff_EBX) {
    param_3 = param_3 + ((uint)((int)unaff_R14[unaff_EBP] * (int)unaff_R14[unaff_EBP]) >>
                        ((byte)param_1 & 0x1f));
  }
  if (param_3 == 0) {
    iVar6 = 0x20;
  }
  else {
    iVar6 = 0x1f;
    if (param_3 != 0) {
      for (; param_3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar6 = in_R11D - iVar6;
  }
  iVar6 = (param_1 - iVar6) + 3;
  if (iVar6 < 0) {
    iVar6 = param_4;
  }
  iVar7 = param_4;
  if (0 < unaff_ESI) {
    uVar3 = (unaff_ESI - 1U >> 1) + 1;
    uVar5 = (ulonglong)uVar3;
    iVar7 = uVar3 * 2;
    psVar4 = unaff_R14;
    do {
      psVar1 = psVar4 + 1;
      sVar2 = *psVar4;
      psVar4 = psVar4 + 2;
      param_4 = param_4 + ((uint)((int)sVar2 * (int)sVar2 + (int)*psVar1 * (int)*psVar1) >>
                          ((byte)iVar6 & 0x1f));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar7 < unaff_EBX) {
    param_4 = param_4 + ((uint)((int)unaff_R14[iVar7] * (int)unaff_R14[iVar7]) >>
                        ((byte)iVar6 & 0x1f));
  }
  *unaff_R15 = iVar6;
  *unaff_R12 = param_4;
  return;
}





// 函数: void FUN_18072aae3(int param_1,undefined8 param_2,uint param_3,int param_4)
void FUN_18072aae3(int param_1,undefined8 param_2,uint param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_ESI;
  short *psVar5;
  ulonglong uVar6;
  int in_R11D;
  int iVar7;
  int *unaff_R12;
  short *unaff_R14;
  int *unaff_R15;
  
  iVar4 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar4 = (param_1 - (in_R11D - iVar4)) + 3;
  if (iVar4 < 0) {
    iVar4 = param_4;
  }
  iVar7 = param_4;
  if (0 < unaff_ESI) {
    uVar3 = (unaff_ESI - 1U >> 1) + 1;
    uVar6 = (ulonglong)uVar3;
    iVar7 = uVar3 * 2;
    psVar5 = unaff_R14;
    do {
      psVar1 = psVar5 + 1;
      sVar2 = *psVar5;
      psVar5 = psVar5 + 2;
      param_4 = param_4 + ((uint)((int)sVar2 * (int)sVar2 + (int)*psVar1 * (int)*psVar1) >>
                          ((byte)iVar4 & 0x1f));
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (iVar7 < unaff_EBX) {
    param_4 = param_4 + ((uint)((int)unaff_R14[iVar7] * (int)unaff_R14[iVar7]) >>
                        ((byte)iVar4 & 0x1f));
  }
  *unaff_R15 = iVar4;
  *unaff_R12 = param_4;
  return;
}





// 函数: void FUN_18072ab4f(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)
void FUN_18072ab4f(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int in_R11D;
  int *unaff_R12;
  longlong unaff_R14;
  undefined4 *unaff_R15;
  
  iVar1 = (int)*(short *)(unaff_R14 + (longlong)in_R11D * 2);
  *unaff_R15 = param_1;
  *unaff_R12 = param_4 + ((uint)(iVar1 * iVar1) >> ((byte)param_1 & 0x1f));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18072ab70(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  byte bVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar16 [16];
  int iVar22;
  undefined1 auVar17 [16];
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulonglong uVar10;
  
  uVar7 = 0;
  lVar8 = (longlong)(int)param_4;
  uVar13 = 0;
  auVar27 = ZEXT416(param_3);
  uVar6 = uVar7;
  uVar9 = uVar13;
  if (((0 < (int)param_4) && (uVar6 = 0, 7 < param_4)) && (1 < _DAT_180bf00b0)) {
    iVar14 = 0;
    iVar18 = 0;
    iVar20 = 0;
    iVar22 = 0;
    iVar15 = 0;
    iVar19 = 0;
    iVar21 = 0;
    iVar23 = 0;
    uVar4 = param_4 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    puVar5 = (ulonglong *)(param_1 + 8);
    uVar6 = uVar7;
    uVar10 = uVar7;
    do {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *(ulonglong *)((param_2 - param_1) + -8 + (longlong)puVar5);
      uVar9 = (int)uVar10 + 8;
      uVar10 = (ulonglong)uVar9;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = puVar5[-1];
      auVar26 = pmovsxwd(in_XMM2,auVar16);
      auVar16 = pmovsxwd(auVar16,auVar24);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = *puVar5;
      uVar6 = uVar6 + 8;
      auVar16 = pmulld(auVar16,auVar26);
      iVar14 = (auVar16._0_4_ >> auVar27) + iVar14;
      iVar18 = (auVar16._4_4_ >> auVar27) + iVar18;
      iVar20 = (auVar16._8_4_ >> auVar27) + iVar20;
      iVar22 = (auVar16._12_4_ >> auVar27) + iVar22;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *(ulonglong *)((param_2 - param_1) + -0x10 + (longlong)(puVar5 + 2));
      in_XMM2 = pmovsxwd(auVar26,auVar17);
      auVar16 = pmovsxwd(auVar17,auVar25);
      auVar16 = pmulld(auVar16,in_XMM2);
      iVar15 = (auVar16._0_4_ >> auVar27) + iVar15;
      iVar19 = (auVar16._4_4_ >> auVar27) + iVar19;
      iVar21 = (auVar16._8_4_ >> auVar27) + iVar21;
      iVar23 = (auVar16._12_4_ >> auVar27) + iVar23;
      puVar5 = puVar5 + 2;
    } while ((longlong)uVar6 < (longlong)(int)(param_4 - uVar4));
    uVar6 = (ulonglong)(uint)(iVar15 + iVar14 + iVar21 + iVar20 + iVar19 + iVar18 + iVar23 + iVar22)
    ;
  }
  lVar12 = (longlong)(int)uVar9;
  uVar9 = 0;
  iVar14 = (int)uVar6;
  if (lVar12 < lVar8) {
    bVar3 = (byte)param_3;
    if (1 < lVar8 - lVar12) {
      lVar1 = lVar12 * 2;
      lVar11 = ((lVar8 - lVar12) - 2U >> 1) + 1;
      lVar12 = lVar12 + lVar11 * 2;
      psVar2 = (short *)(param_2 + 2 + lVar1);
      uVar6 = uVar7;
      do {
        uVar13 = (int)uVar6 +
                 ((int)*(short *)((param_1 - param_2) + -2 + (longlong)psVar2) * (int)psVar2[-1] >>
                 (bVar3 & 0x1f));
        uVar6 = (ulonglong)uVar13;
        uVar9 = (int)uVar7 +
                ((int)*(short *)((param_1 - param_2) + -4 + (longlong)(psVar2 + 2)) * (int)*psVar2
                >> (bVar3 & 0x1f));
        uVar7 = (ulonglong)uVar9;
        lVar11 = lVar11 + -1;
        psVar2 = psVar2 + 2;
      } while (lVar11 != 0);
    }
    if (lVar12 < lVar8) {
      iVar14 = iVar14 + ((int)*(short *)(param_1 + lVar12 * 2) *
                         (int)*(short *)(param_2 + lVar12 * 2) >> (bVar3 & 0x1f));
    }
    uVar6 = (ulonglong)(uVar9 + uVar13 + iVar14);
  }
  return uVar6;
}





// 函数: void FUN_18072ad20(longlong param_1,int *param_2,int *param_3,int *param_4,undefined2 *param_5,
void FUN_18072ad20(longlong param_1,int *param_2,int *param_3,int *param_4,undefined2 *param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  lVar8 = (longlong)param_6;
  if (0 < lVar8) {
    param_1 = param_1 - (longlong)param_5;
    do {
      lVar7 = (longlong)*(short *)(param_1 + (longlong)param_5);
      iVar6 = *param_4 * 4 + (int)((ulonglong)(*param_2 * lVar7) >> 0x10) * 4;
      lVar5 = (longlong)iVar6;
      iVar4 = (((int)((ulonglong)(-iVar1 & 0x3fff) * lVar5 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulonglong)((short)(-iVar1 >> 0xe) * lVar5) >> 0x10) + param_4[1];
      *param_4 = iVar4;
      *param_4 = (int)((ulonglong)(param_2[1] * lVar7) >> 0x10) + iVar4;
      iVar4 = (((int)((ulonglong)(-iVar2 & 0x3fff) * lVar5 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulonglong)((short)(-iVar2 >> 0xe) * lVar5) >> 0x10);
      param_4[1] = iVar4;
      param_4[1] = (int)((ulonglong)(param_2[2] * lVar7) >> 0x10) + iVar4;
      iVar4 = iVar6 + 0x3fff >> 0xe;
      if (iVar4 < 0x8000) {
        uVar3 = (undefined2)iVar4;
        if (iVar4 < -0x8000) {
          uVar3 = 0x8000;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *param_5 = uVar3;
      param_5 = param_5 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}





