#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part088.c - 13 个函数

// 函数: void FUN_18071cbe0(longlong param_1)
void FUN_18071cbe0(longlong param_1)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  longlong unaff_RSI;
  int iVar3;
  
  iVar2 = func_0x00018070b980((longlong)in_EAX / (longlong)*(int *)(param_1 + 0x11bc) & 0xffffffff,
                              (longlong)in_EAX % (longlong)*(int *)(param_1 + 0x11bc) & 0xffffffff);
  iVar3 = *(int *)(unaff_RSI + 0x1260);
  sVar1 = func_0x00018070b980(0x3c0000);
  iVar3 = (iVar2 + -0x800 +
          (int)((ulonglong)
                ((longlong)(short)(((short)(iVar2 + -0x800) - sVar1) + 0x800) *
                (longlong)
                (int)((ulonglong)((longlong)(short)iVar3 * (longlong)(iVar3 * -4)) >> 0x10)) >> 0x10
               )) - (*(int *)(unaff_RSI + 8) >> 8);
  if (iVar3 < 0) {
    iVar3 = iVar3 * 3;
  }
  if (iVar3 < 0x34) {
    sVar1 = (short)iVar3;
    if (iVar3 < -0x33) {
      sVar1 = -0x33;
    }
  }
  else {
    sVar1 = 0x33;
  }
  *(int *)(unaff_RSI + 8) =
       (int)((ulonglong)((longlong)((int)sVar1 * (int)*(short *)(unaff_RSI + 0x11b0)) * 0x199a) >>
            0x10) + *(int *)(unaff_RSI + 8);
  iVar3 = func_0x00018070b980(100);
  iVar2 = func_0x00018070b980(0x3c);
  if (iVar3 * 0x100 < iVar2 * 0x100) {
    iVar2 = func_0x00018070b980(0x3c);
    iVar3 = *(int *)(unaff_RSI + 8);
    if (iVar3 == iVar2 * 0x100 || SBORROW4(iVar3,iVar2 * 0x100) != iVar3 + iVar2 * -0x100 < 0) {
      iVar2 = func_0x00018070b980(100);
      iVar3 = *(int *)(unaff_RSI + 8);
      if (iVar3 < iVar2 * 0x100) goto LAB_18071cce0;
      goto LAB_18071cd2d;
    }
  }
  else {
    iVar2 = func_0x00018070b980(100);
    iVar3 = *(int *)(unaff_RSI + 8);
    if (iVar3 != iVar2 * 0x100 && SBORROW4(iVar3,iVar2 * 0x100) == iVar3 + iVar2 * -0x100 < 0) {
LAB_18071cce0:
      iVar3 = func_0x00018070b980(100);
      *(int *)(unaff_RSI + 8) = iVar3 << 8;
      return;
    }
    iVar2 = func_0x00018070b980(0x3c);
    iVar3 = *(int *)(unaff_RSI + 8);
    if (iVar2 * 0x100 <= iVar3) goto LAB_18071cd2d;
  }
  iVar3 = func_0x00018070b980(0x3c);
  iVar3 = iVar3 << 8;
LAB_18071cd2d:
  *(int *)(unaff_RSI + 8) = iVar3;
  return;
}





// 函数: void FUN_18071cbe5(longlong param_1)
void FUN_18071cbe5(longlong param_1)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  longlong unaff_RSI;
  int iVar3;
  
  iVar2 = func_0x00018070b980((longlong)in_EAX / (longlong)*(int *)(param_1 + 0x11bc) & 0xffffffff,
                              (longlong)in_EAX % (longlong)*(int *)(param_1 + 0x11bc) & 0xffffffff);
  iVar3 = *(int *)(unaff_RSI + 0x1260);
  sVar1 = func_0x00018070b980(0x3c0000);
  iVar3 = (iVar2 + -0x800 +
          (int)((ulonglong)
                ((longlong)(short)(((short)(iVar2 + -0x800) - sVar1) + 0x800) *
                (longlong)
                (int)((ulonglong)((longlong)(short)iVar3 * (longlong)(iVar3 * -4)) >> 0x10)) >> 0x10
               )) - (*(int *)(unaff_RSI + 8) >> 8);
  if (iVar3 < 0) {
    iVar3 = iVar3 * 3;
  }
  if (iVar3 < 0x34) {
    sVar1 = (short)iVar3;
    if (iVar3 < -0x33) {
      sVar1 = -0x33;
    }
  }
  else {
    sVar1 = 0x33;
  }
  *(int *)(unaff_RSI + 8) =
       (int)((ulonglong)((longlong)((int)sVar1 * (int)*(short *)(unaff_RSI + 0x11b0)) * 0x199a) >>
            0x10) + *(int *)(unaff_RSI + 8);
  iVar3 = func_0x00018070b980(100);
  iVar2 = func_0x00018070b980(0x3c);
  if (iVar3 * 0x100 < iVar2 * 0x100) {
    iVar2 = func_0x00018070b980(0x3c);
    iVar3 = *(int *)(unaff_RSI + 8);
    if (iVar3 == iVar2 * 0x100 || SBORROW4(iVar3,iVar2 * 0x100) != iVar3 + iVar2 * -0x100 < 0) {
      iVar2 = func_0x00018070b980(100);
      iVar3 = *(int *)(unaff_RSI + 8);
      if (iVar3 < iVar2 * 0x100) goto LAB_18071cce0;
      goto LAB_18071cd2d;
    }
  }
  else {
    iVar2 = func_0x00018070b980(100);
    iVar3 = *(int *)(unaff_RSI + 8);
    if (iVar3 != iVar2 * 0x100 && SBORROW4(iVar3,iVar2 * 0x100) == iVar3 + iVar2 * -0x100 < 0) {
LAB_18071cce0:
      iVar3 = func_0x00018070b980(100);
      *(int *)(unaff_RSI + 8) = iVar3 << 8;
      return;
    }
    iVar2 = func_0x00018070b980(0x3c);
    iVar3 = *(int *)(unaff_RSI + 8);
    if (iVar2 * 0x100 <= iVar3) goto LAB_18071cd2d;
  }
  iVar3 = func_0x00018070b980(0x3c);
  iVar3 = iVar3 << 8;
LAB_18071cd2d:
  *(int *)(unaff_RSI + 8) = iVar3;
  return;
}





// 函数: void FUN_18071cc58(uint64_t param_1,int param_2)
void FUN_18071cc58(uint64_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong unaff_RSI;
  short sVar3;
  int unaff_EDI;
  
  iVar1 = unaff_EDI * 3;
  if (iVar1 < 0x34) {
    sVar3 = (short)iVar1;
    if (iVar1 < -0x33) {
      sVar3 = -0x33;
    }
  }
  else {
    sVar3 = 0x33;
  }
  *(int *)(unaff_RSI + 8) =
       (int)((ulonglong)((longlong)((int)sVar3 * (int)*(short *)(unaff_RSI + 0x11b0)) * 0x199a) >>
            0x10) + param_2;
  iVar1 = func_0x00018070b980(100);
  iVar2 = func_0x00018070b980(0x3c);
  if (iVar1 * 0x100 < iVar2 * 0x100) {
    iVar2 = func_0x00018070b980(0x3c);
    iVar1 = *(int *)(unaff_RSI + 8);
    if (iVar1 == iVar2 * 0x100 || SBORROW4(iVar1,iVar2 * 0x100) != iVar1 + iVar2 * -0x100 < 0) {
      iVar2 = func_0x00018070b980(100);
      iVar1 = *(int *)(unaff_RSI + 8);
      if (iVar1 < iVar2 * 0x100) goto LAB_18071cce0;
      goto LAB_18071cd2d;
    }
  }
  else {
    iVar2 = func_0x00018070b980(100);
    iVar1 = *(int *)(unaff_RSI + 8);
    if (iVar1 != iVar2 * 0x100 && SBORROW4(iVar1,iVar2 * 0x100) == iVar1 + iVar2 * -0x100 < 0) {
LAB_18071cce0:
      iVar1 = func_0x00018070b980(100);
      *(int *)(unaff_RSI + 8) = iVar1 << 8;
      return;
    }
    iVar2 = func_0x00018070b980(0x3c);
    iVar1 = *(int *)(unaff_RSI + 8);
    if (iVar2 * 0x100 <= iVar1) goto LAB_18071cd2d;
  }
  iVar1 = func_0x00018070b980(0x3c);
  iVar1 = iVar1 << 8;
LAB_18071cd2d:
  *(int *)(unaff_RSI + 8) = iVar1;
  return;
}





// 函数: void FUN_18071ccba(void)
void FUN_18071ccba(void)

{
  int iVar1;
  int iVar2;
  longlong unaff_RSI;
  
  iVar1 = func_0x00018070b980(0x3c);
  iVar2 = *(int *)(unaff_RSI + 8);
  if (iVar2 == iVar1 * 0x100 || SBORROW4(iVar2,iVar1 * 0x100) != iVar2 + iVar1 * -0x100 < 0) {
    iVar1 = func_0x00018070b980(100);
    iVar2 = *(int *)(unaff_RSI + 8);
    if (iVar2 < iVar1 * 0x100) {
      iVar2 = func_0x00018070b980(100);
      *(int *)(unaff_RSI + 8) = iVar2 << 8;
      return;
    }
  }
  else {
    iVar2 = func_0x00018070b980(0x3c);
    iVar2 = iVar2 << 8;
  }
  *(int *)(unaff_RSI + 8) = iVar2;
  return;
}





// 函数: void FUN_18071cd40(longlong param_1)
void FUN_18071cd40(longlong param_1)

{
  (**(code **)(&UNK_180954ae0 + (ulonglong)(*(uint *)(param_1 + 0x13ec) & 7) * 8))
            (param_1,param_1 + 0x13f2);
  if (0xc < *(int *)(param_1 + 0x11b0)) {
    *(int8_t *)(param_1 + 0x12a5) = 1;
    *(uint64_t *)(param_1 + 0x17cc) = 0;
    *(int8_t *)((longlong)*(int *)(param_1 + 0x167c) + 0x1278 + param_1) = 1;
    return;
  }
  *(int *)(param_1 + 0x17d0) = *(int *)(param_1 + 0x17d0) + 1;
  *(int8_t *)(param_1 + 0x12a5) = 0;
  if (9 < *(int *)(param_1 + 0x17d0)) {
    if (*(int *)(param_1 + 0x17d0) < 0x1f) goto LAB_18071cd9c;
    *(int32_t *)(param_1 + 0x17d0) = 10;
  }
  *(int32_t *)(param_1 + 0x17cc) = 0;
LAB_18071cd9c:
  *(int8_t *)((longlong)*(int *)(param_1 + 0x167c) + 0x1278 + param_1) = 0;
  return;
}





// 函数: void FUN_18071cde0(void)
void FUN_18071cde0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18071ce0f(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_18071ce0f(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  uint64_t in_RAX;
  short *psVar7;
  longlong lVar8;
  longlong unaff_RBP;
  float *pfVar9;
  longlong lVar10;
  int8_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  uint64_t uStack0000000000000068;
  longlong lStack0000000000000070;
  
  *(uint64_t *)(unaff_RBP + 0x35a0) = in_RAX;
  *(uint64_t *)(unaff_RBP + 0x35a8) = in_RAX;
  uStack0000000000000038 = (int32_t)in_RAX;
  uStack0000000000000030 = (int8_t)in_RAX;
  bVar4 = *(byte *)(param_1 + 0x1208);
  *(int *)(param_1 + 0x1208) = *(int *)(param_1 + 0x1208) + 1;
  *(byte *)(param_1 + 0x12aa) = bVar4 & 3;
  lVar1 = param_1 + 0x1c1c + (longlong)*(int *)(param_1 + 0x11ec) * 4;
  lVar2 = unaff_RBP + 0x35e0 + (longlong)*(int *)(param_1 + 0x11ec) * 4;
  uStack0000000000000044 = uStack0000000000000038;
  uStack0000000000000048 = uStack0000000000000038;
  uStack0000000000000058 = uStack0000000000000038;
  uStack000000000000005c = param_4;
  uStack0000000000000068 = param_2;
  lStack0000000000000070 = lVar1;
  FUN_180724e90(param_1 + 0x10,param_1 + 0x13f2,*(int32_t *)(param_1 + 0x11e4));
  iVar6 = *(int *)(param_1 + 0x11e4) + -1;
  lVar10 = (longlong)(*(int *)(param_1 + 0x11dc) * 5);
  lVar8 = (longlong)iVar6;
  if (-1 < iVar6) {
    if (2 < lVar8) {
      psVar7 = (short *)(param_1 + 0x13f0 + lVar8 * 2);
      pfVar9 = (float *)(lVar1 + (lVar10 + -3 + lVar8) * 4);
      do {
        lVar3 = lVar10 + lVar8;
        lVar8 = lVar8 + -4;
        *(float *)(lVar1 + lVar3 * 4) = (float)(int)psVar7[1];
        *(float *)(lVar1 + -4 + lVar3 * 4) = (float)(int)*psVar7;
        pfVar9[1] = (float)(int)psVar7[-1];
        *pfVar9 = (float)(int)psVar7[-2];
        psVar7 = psVar7 + -4;
        pfVar9 = pfVar9 + -4;
      } while (2 < lVar8);
    }
    if (-1 < lVar8) {
      psVar7 = (short *)(param_1 + 0x13f2 + lVar8 * 2);
      do {
        sVar5 = *psVar7;
        psVar7 = psVar7 + -1;
        lVar3 = lVar8 + lVar10;
        lVar8 = lVar8 + -1;
        *(float *)(lVar1 + lVar3 * 4) = (float)(int)sVar5;
      } while (-1 < lVar8);
    }
  }
  lVar8 = (longlong)(*(int *)(param_1 + 0x11dc) * 5);
  *(float *)(lVar1 + lVar8 * 4) = *(float *)(lVar1 + lVar8 * 4) + 1e-06;
  lVar8 = (longlong)((*(int *)(param_1 + 0x11e4) >> 3) + *(int *)(param_1 + 0x11dc) * 5);
  *(float *)(lVar1 + lVar8 * 4) = *(float *)(lVar1 + lVar8 * 4) + 1e-06;
  lVar8 = (longlong)(*(int *)(param_1 + 0x11dc) * 5 + (*(int *)(param_1 + 0x11e4) >> 3) * 2);
  *(float *)(lVar1 + lVar8 * 4) = *(float *)(lVar1 + lVar8 * 4) - 1e-06;
  lVar8 = (longlong)(*(int *)(param_1 + 0x11dc) * 5 + (*(int *)(param_1 + 0x11e4) >> 3) * 3);
  *(float *)(lVar1 + lVar8 * 4) = *(float *)(lVar1 + lVar8 * 4) - 1e-06;
  lVar8 = (longlong)(*(int *)(param_1 + 0x11dc) * 5 + (*(int *)(param_1 + 0x11e4) >> 3) * 4);
  *(float *)(lVar1 + lVar8 * 4) = *(float *)(lVar1 + lVar8 * 4) + 1e-06;
  lVar8 = (longlong)(((*(int *)(param_1 + 0x11e4) >> 3) + *(int *)(param_1 + 0x11dc)) * 5);
  *(float *)(lVar1 + lVar8 * 4) = *(float *)(lVar1 + lVar8 * 4) + 1e-06;
  lVar8 = (longlong)(*(int *)(param_1 + 0x11dc) * 5 + (*(int *)(param_1 + 0x11e4) >> 3) * 6);
  *(float *)(lVar1 + lVar8 * 4) = *(float *)(lVar1 + lVar8 * 4) - 1e-06;
  lVar8 = (longlong)(*(int *)(param_1 + 0x11dc) * 5 + (*(int *)(param_1 + 0x11e4) >> 3) * 7);
  *(float *)(lVar1 + lVar8 * 4) = *(float *)(lVar1 + lVar8 * 4) - 1e-06;
  if (*(int *)(param_1 + 0x1244) == 0) {
    FUN_1807260d0(param_1,unaff_RBP + 0x21b0,unaff_RBP + 0x35e0,lVar1,
                  *(int32_t *)(param_1 + 0x13ec));
    FUN_180724f40(param_1,unaff_RBP + 0x21b0,lVar2,lVar1);
    FUN_1807263d0(param_1,unaff_RBP + 0x21b0,lVar2,lVar1,param_4);
    FUN_180726700(param_1,unaff_RBP + 0x21b0,param_4);
    if ((*(int *)(param_1 + 0x17d8) != 0) && (0x4d < *(int *)(param_1 + 0x11b0))) {
      *(int32_t *)(param_1 + 0x127c + (longlong)*(int *)(param_1 + 0x167c) * 4) = 1;
                    // WARNING: Subroutine does not return
      memcpy(unaff_RBP + 0x24a0,param_1 + 0x90,0x1100);
    }
    uStack0000000000000034 = 0;
    uStack0000000000000054 = 0;
    func_0x0001807249a0(param_1 + 0x1288,*(int32_t *)(param_1 + 0x11e0));
    uStack000000000000004c = 0xffffffff;
                    // WARNING: Subroutine does not return
    memcpy(unaff_RBP + -0x50,param_1 + 0x90,0x1100);
  }
                    // WARNING: Subroutine does not return
  memmove(param_1 + 0x1c1c,param_1 + ((longlong)*(int *)(param_1 + 0x11e4) + 0x707) * 4,
          (longlong)(*(int *)(param_1 + 0x11dc) * 5 + *(int *)(param_1 + 0x11ec)) << 2);
}





// 函数: void FUN_18071d0bf(void)
void FUN_18071d0bf(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t uStack0000000000000034;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000054;
  
  FUN_1807260d0();
  FUN_180724f40();
  FUN_1807263d0();
  FUN_180726700();
  if ((*(int *)(unaff_RBX + 0x17d8) != 0) && (0x4d < *(int *)(unaff_RBX + 0x11b0))) {
    *(int32_t *)(unaff_RBX + 0x127c + (longlong)*(int *)(unaff_RBX + 0x167c) * 4) = 1;
                    // WARNING: Subroutine does not return
    memcpy(unaff_RBP + 0x24a0,unaff_RBX + 0x90,0x1100);
  }
  uStack0000000000000034 = 0;
  uStack0000000000000054 = 0;
  func_0x0001807249a0(unaff_RBX + 0x1288,*(int32_t *)(unaff_RBX + 0x11e0));
  uStack000000000000004c = 0xffffffff;
                    // WARNING: Subroutine does not return
  memcpy(unaff_RBP + -0x50,unaff_RBX + 0x90,0x1100);
}





// 函数: void FUN_18071da89(void)
void FUN_18071da89(void)

{
  longlong unaff_RBX;
  
                    // WARNING: Subroutine does not return
  memmove(unaff_RBX + 0x1c1c,unaff_RBX + ((longlong)*(int *)(unaff_RBX + 0x11e4) + 0x707) * 4,
          (longlong)(*(int *)(unaff_RBX + 0x11dc) * 5 + *(int *)(unaff_RBX + 0x11ec)) << 2);
}





// 函数: void FUN_18071dadd(void)
void FUN_18071dadd(void)

{
  longlong unaff_RBP;
  int32_t *unaff_R15;
  
  *unaff_R15 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x4060) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18071db50(uint64_t param_1)
void FUN_18071db50(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x13ec);
}



int FUN_18071dbc0(longlong param_1,int32_t *param_2,int32_t param_3,int32_t param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(int32_t *)(param_1 + 0x17c8) = param_2[0xc];
  *(int32_t *)(param_1 + 0x1240) = param_2[0xd];
  iVar2 = param_2[2];
  *(int *)(param_1 + 0x11c8) = iVar2;
  *(int32_t *)(param_1 + 0x11d0) = param_2[3];
  *(int32_t *)(param_1 + 0x11d4) = param_2[4];
  *(int32_t *)(param_1 + 0x11d8) = param_2[5];
  *(int32_t *)(param_1 + 0x17d4) = param_2[10];
  *(int32_t *)(param_1 + 0x1680) = *param_2;
  *(int32_t *)(param_1 + 0x1684) = param_2[1];
  *(int32_t *)(param_1 + 0x11b4) = param_3;
  *(int32_t *)(param_1 + 0x1688) = param_4;
  if ((*(int *)(param_1 + 0x1238) != 0) && (*(int *)(param_1 + 0x1244) == 0)) {
    iVar1 = 0;
    if ((iVar2 != *(int *)(param_1 + 0x11cc)) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x11dc))) {
      iVar1 = FUN_18071e260(param_1);
    }
    return iVar1;
  }
  iVar2 = func_0x000180727c30(param_1,param_2);
  if (param_5 != 0) {
    iVar2 = param_5;
  }
  iVar3 = FUN_18071e260(param_1,iVar2);
  iVar4 = FUN_18071dfc0(param_1,iVar2,param_2[6]);
  iVar5 = func_0x00018071dd40(param_1,param_2[9]);
  *(int32_t *)(param_1 + 0x1204) = param_2[8];
  iVar2 = param_2[0xb];
  iVar1 = *(int *)(param_1 + 0x17d8);
  *(int *)(param_1 + 0x17d8) = iVar2;
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x17dc) = 7;
    }
    else {
      iVar1 = 7 - (int)((ulonglong)((longlong)*(int *)(param_1 + 0x1204) * 0x6666) >> 0x10);
      iVar2 = 2;
      if (2 < iVar1) {
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 0x17dc) = iVar2;
    }
  }
  *(int32_t *)(param_1 + 0x1238) = 1;
  return iVar5 + iVar3 + iVar4;
}



int FUN_18071dc71(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  func_0x000180727c30();
  iVar1 = FUN_18071e260();
  iVar2 = FUN_18071dfc0();
  iVar3 = func_0x00018071dd40();
  *(int32_t *)(unaff_RSI + 0x1204) = *(int32_t *)(unaff_R14 + 0x20);
  iVar5 = *(int *)(unaff_R14 + 0x2c);
  iVar4 = *(int *)(unaff_RSI + 0x17d8);
  *(int *)(unaff_RSI + 0x17d8) = iVar5;
  if (iVar5 != 0) {
    if (iVar4 == 0) {
      *(int32_t *)(unaff_RSI + 0x17dc) = 7;
    }
    else {
      iVar4 = 7 - (int)((ulonglong)((longlong)*(int *)(unaff_RSI + 0x1204) * 0x6666) >> 0x10);
      iVar5 = 2;
      if (2 < iVar4) {
        iVar5 = iVar4;
      }
      *(int *)(unaff_RSI + 0x17dc) = iVar5;
    }
  }
  *(int32_t *)(unaff_RSI + 0x1238) = 1;
  return iVar3 + iVar1 + iVar2;
}



int32_t FUN_18071dce5(int param_1,uint64_t param_2,int32_t param_3)

{
  int iVar1;
  int iVar2;
  longlong unaff_RSI;
  
  if (param_1 == 0) {
    *(int32_t *)(unaff_RSI + 0x17dc) = 7;
  }
  else {
    iVar1 = 7 - (int)((ulonglong)((longlong)*(int *)(unaff_RSI + 0x1204) * 0x6666) >> 0x10);
    iVar2 = 2;
    if (2 < iVar1) {
      iVar2 = iVar1;
    }
    *(int *)(unaff_RSI + 0x17dc) = iVar2;
  }
  *(int32_t *)(unaff_RSI + 0x1238) = 1;
  return param_3;
}



int32_t FUN_18071dfc0(longlong param_1,int param_2,ulonglong param_3)

{
  void *puVar1;
  int iVar2;
  int32_t uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = (uint)param_3;
  if (uVar4 != *(uint *)(param_1 + 0x1200)) {
    if ((0x3c < uVar4) || ((0x1000010000100400U >> (param_3 & 0x3f) & 1) == 0)) {
      uVar3 = 0xffffff99;
    }
    iVar2 = (int)(short)param_2;
    if ((int)uVar4 < 0xb) {
      *(int32_t *)(param_1 + 0x1678) = 1;
      *(uint *)(param_1 + 0x11e0) = (uVar4 == 10) + 1;
      *(int *)(param_1 + 0x11e4) = (short)param_3 * iVar2;
      *(int *)(param_1 + 0x11c0) = iVar2 * 0xe;
      puVar1 = &UNK_180954814;
      if (*(int *)(param_1 + 0x11dc) != 8) {
        puVar1 = &UNK_180954828;
      }
    }
    else {
      *(int32_t *)(param_1 + 0x11e0) = 4;
      *(int *)(param_1 + 0x11e4) = iVar2 * 0x14;
      *(int *)(param_1 + 0x11c0) = iVar2 * 0x18;
      puVar1 = &UNK_180954818;
      *(int *)(param_1 + 0x1678) = (int)uVar4 / 0x14;
      if (*(int *)(param_1 + 0x11dc) != 8) {
        puVar1 = &UNK_1809547f0;
      }
    }
    *(void **)(param_1 + 0x1250) = puVar1;
    *(uint *)(param_1 + 0x1200) = uVar4;
    *(int32_t *)(param_1 + 0x11fc) = 0;
  }
  if (*(int *)(param_1 + 0x11dc) == param_2) {
    return uVar3;
  }
  *(uint64_t *)(param_1 + 0x1c10) = 0;
  *(int32_t *)(param_1 + 0x1c18) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x90,0,0x1120);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18071e260(longlong param_1,int param_2)
void FUN_18071e260(longlong param_1,int param_2)

{
  int8_t auStack_48 [8];
  int iStack_40;
  int iStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_48;
  iStack_40 = *(int *)(param_1 + 0x11dc);
  if ((iStack_40 != param_2) || (*(int *)(param_1 + 0x11cc) != *(int *)(param_1 + 0x11c8))) {
    if (iStack_40 != 0) {
      iStack_3c = *(int *)(param_1 + 0x11e0) * 10 + 5;
      iStack_40 = iStack_40 * iStack_3c;
      iStack_3c = iStack_3c * param_2;
                    // WARNING: Subroutine does not return
      FUN_1808fd200();
    }
    FUN_18071b320(param_1 + 0x1698,*(int *)(param_1 + 0x11c8),param_2 * 1000,1);
  }
  *(int32_t *)(param_1 + 0x11cc) = *(int32_t *)(param_1 + 0x11c8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_48);
}





// 函数: void FUN_18071e580(float *param_1,uint64_t param_2,int param_3)
void FUN_18071e580(float *param_1,uint64_t param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  iVar5 = 0;
  if (3 < param_3) {
    pfVar4 = param_1 + 10;
    uVar3 = (param_3 - 4U >> 2) + 1;
    uVar6 = (ulonglong)uVar3;
    iVar5 = uVar3 * 4;
    do {
      fVar7 = pfVar4[-2];
      fVar8 = pfVar4[-1];
      pfVar4[-2] = *param_1 - fVar7;
      pfVar4[-1] = pfVar4[-9] - fVar8;
      fVar1 = pfVar4[-9];
      fVar2 = pfVar4[-8];
      *param_1 = fVar7 + *param_1;
      pfVar4[-9] = fVar8 + fVar1;
      fVar7 = (pfVar4[1] + *pfVar4) * 0.70710677;
      fVar8 = (pfVar4[1] - *pfVar4) * 0.70710677;
      *pfVar4 = fVar2 - fVar7;
      pfVar4[1] = pfVar4[-7] - fVar8;
      pfVar4[-8] = fVar7 + pfVar4[-8];
      pfVar4[-7] = fVar8 + pfVar4[-7];
      fVar7 = pfVar4[3];
      fVar8 = pfVar4[2];
      pfVar4[2] = pfVar4[-6] - fVar7;
      pfVar4[3] = fVar8 + pfVar4[-5];
      pfVar4[-6] = fVar7 + pfVar4[-6];
      pfVar4[-5] = pfVar4[-5] - fVar8;
      fVar7 = (pfVar4[5] - pfVar4[4]) * 0.70710677;
      fVar8 = (pfVar4[5] + pfVar4[4]) * -0.70710677;
      pfVar4[4] = pfVar4[-4] - fVar7;
      pfVar4[5] = pfVar4[-3] - fVar8;
      pfVar4[-4] = fVar7 + pfVar4[-4];
      pfVar4[-3] = fVar8 + pfVar4[-3];
      fVar7 = pfVar4[0xe];
      fVar8 = pfVar4[0xf];
      pfVar4[0xe] = pfVar4[6] - fVar7;
      pfVar4[0xf] = pfVar4[7] - fVar8;
      pfVar4[6] = fVar7 + pfVar4[6];
      pfVar4[7] = fVar8 + pfVar4[7];
      fVar7 = (pfVar4[0x11] + pfVar4[0x10]) * 0.70710677;
      fVar8 = (pfVar4[0x11] - pfVar4[0x10]) * 0.70710677;
      pfVar4[0x10] = pfVar4[8] - fVar7;
      pfVar4[0x11] = pfVar4[9] - fVar8;
      pfVar4[8] = fVar7 + pfVar4[8];
      pfVar4[9] = fVar8 + pfVar4[9];
      fVar7 = pfVar4[0x13];
      fVar8 = pfVar4[0x12];
      pfVar4[0x12] = pfVar4[10] - fVar7;
      pfVar4[0x13] = fVar8 + pfVar4[0xb];
      pfVar4[10] = fVar7 + pfVar4[10];
      pfVar4[0xb] = pfVar4[0xb] - fVar8;
      fVar7 = (pfVar4[0x15] - pfVar4[0x14]) * 0.70710677;
      fVar8 = (pfVar4[0x15] + pfVar4[0x14]) * -0.70710677;
      pfVar4[0x14] = pfVar4[0xc] - fVar7;
      pfVar4[0x15] = pfVar4[0xd] - fVar8;
      pfVar4[0xc] = fVar7 + pfVar4[0xc];
      pfVar4[0xd] = fVar8 + pfVar4[0xd];
      fVar7 = pfVar4[0x1e];
      fVar8 = pfVar4[0x1f];
      pfVar4[0x1e] = pfVar4[0x16] - fVar7;
      pfVar4[0x1f] = pfVar4[0x17] - fVar8;
      pfVar4[0x16] = fVar7 + pfVar4[0x16];
      pfVar4[0x17] = fVar8 + pfVar4[0x17];
      fVar8 = (pfVar4[0x21] - pfVar4[0x20]) * 0.70710677;
      fVar7 = (pfVar4[0x21] + pfVar4[0x20]) * 0.70710677;
      pfVar4[0x20] = pfVar4[0x18] - fVar7;
      pfVar4[0x21] = pfVar4[0x19] - fVar8;
      pfVar4[0x18] = fVar7 + pfVar4[0x18];
      pfVar4[0x19] = fVar8 + pfVar4[0x19];
      fVar7 = pfVar4[0x23];
      fVar8 = pfVar4[0x22];
      pfVar4[0x22] = pfVar4[0x1a] - fVar7;
      pfVar4[0x23] = fVar8 + pfVar4[0x1b];
      pfVar4[0x1a] = fVar7 + pfVar4[0x1a];
      pfVar4[0x1b] = pfVar4[0x1b] - fVar8;
      fVar7 = (pfVar4[0x25] - pfVar4[0x24]) * 0.70710677;
      param_1 = param_1 + 0x40;
      fVar8 = (pfVar4[0x25] + pfVar4[0x24]) * -0.70710677;
      pfVar4[0x24] = pfVar4[0x1c] - fVar7;
      pfVar4[0x25] = pfVar4[0x1d] - fVar8;
      pfVar4[0x1c] = fVar7 + pfVar4[0x1c];
      pfVar4[0x1d] = fVar8 + pfVar4[0x1d];
      fVar7 = pfVar4[0x2e];
      fVar8 = pfVar4[0x2f];
      pfVar4[0x2e] = pfVar4[0x26] - fVar7;
      pfVar4[0x2f] = pfVar4[0x27] - fVar8;
      pfVar4[0x26] = fVar7 + pfVar4[0x26];
      pfVar4[0x27] = fVar8 + pfVar4[0x27];
      fVar8 = (pfVar4[0x31] - pfVar4[0x30]) * 0.70710677;
      fVar7 = (pfVar4[0x31] + pfVar4[0x30]) * 0.70710677;
      pfVar4[0x30] = pfVar4[0x28] - fVar7;
      pfVar4[0x31] = pfVar4[0x29] - fVar8;
      pfVar4[0x28] = fVar7 + pfVar4[0x28];
      pfVar4[0x29] = fVar8 + pfVar4[0x29];
      fVar7 = pfVar4[0x33];
      fVar8 = pfVar4[0x32];
      pfVar4[0x32] = pfVar4[0x2a] - fVar7;
      pfVar4[0x33] = fVar8 + pfVar4[0x2b];
      pfVar4[0x2a] = fVar7 + pfVar4[0x2a];
      pfVar4[0x2b] = pfVar4[0x2b] - fVar8;
      fVar8 = (pfVar4[0x35] + pfVar4[0x34]) * -0.70710677;
      fVar7 = (pfVar4[0x35] - pfVar4[0x34]) * 0.70710677;
      pfVar4[0x34] = pfVar4[0x2c] - fVar7;
      pfVar4[0x35] = pfVar4[0x2d] - fVar8;
      pfVar4[0x2c] = fVar7 + pfVar4[0x2c];
      pfVar4[0x2d] = fVar8 + pfVar4[0x2d];
      pfVar4 = pfVar4 + 0x40;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (iVar5 < param_3) {
    param_1 = param_1 + 10;
    uVar6 = (ulonglong)(uint)(param_3 - iVar5);
    do {
      fVar7 = param_1[-2];
      fVar8 = param_1[-1];
      param_1[-2] = param_1[-10] - fVar7;
      param_1[-1] = param_1[-9] - fVar8;
      param_1[-10] = fVar7 + param_1[-10];
      param_1[-9] = fVar8 + param_1[-9];
      fVar7 = (param_1[1] + *param_1) * 0.70710677;
      fVar8 = (param_1[1] - *param_1) * 0.70710677;
      *param_1 = param_1[-8] - fVar7;
      param_1[1] = param_1[-7] - fVar8;
      param_1[-8] = fVar7 + param_1[-8];
      param_1[-7] = fVar8 + param_1[-7];
      fVar7 = param_1[3];
      fVar8 = param_1[2];
      param_1[2] = param_1[-6] - fVar7;
      param_1[3] = fVar8 + param_1[-5];
      param_1[-6] = fVar7 + param_1[-6];
      param_1[-5] = param_1[-5] - fVar8;
      fVar7 = (param_1[5] - param_1[4]) * 0.70710677;
      fVar8 = (param_1[5] + param_1[4]) * -0.70710677;
      param_1[4] = param_1[-4] - fVar7;
      param_1[5] = param_1[-3] - fVar8;
      param_1[-4] = fVar7 + param_1[-4];
      param_1[-3] = fVar8 + param_1[-3];
      param_1 = param_1 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}





