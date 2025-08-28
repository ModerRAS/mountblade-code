#include "TaleWorlds.Native.Split.h"

// 03_rendering_part537.c - 20 个函数

// 函数: void FUN_18055f1d0(longlong param_1)
void FUN_18055f1d0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined4 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = _DAT_180c966e8;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(longlong *)(param_1 + 0x598) = param_1;
  *(undefined4 *)(param_1 + 0x590) = 0x2c40;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x588);
}



undefined8 FUN_18055f260(longlong param_1,uint *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = param_3[2];
  iVar4 = *(int *)(param_1 + 0x5c4);
  iVar6 = iVar4 + iVar1;
  if (iVar6 <= *(int *)(param_1 + 0x5c8)) {
    uVar5 = iVar4 >> 0x1f & 0x1f;
    iVar4 = iVar4 + uVar5;
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar4 >> 5) * 4);
    *(int *)(param_1 + 0x5c4) = iVar6;
    uVar5 = (uint)(uVar2 >> (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x3f)) &
            (int)(1L << ((byte)iVar1 & 0x3f)) - 1U;
    if ((param_3[2] == 0x20) && (*param_3 == -0x80000000)) {
      bVar3 = true;
    }
    else {
      iVar1 = *param_3;
      uVar5 = iVar1 + uVar5;
      iVar4 = param_3[1];
      if ((iVar4 < (int)uVar5) || ((int)uVar5 < iVar1)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((int)uVar5 < iVar1) || (iVar4 < (int)uVar5)) {
        FUN_180627340(&UNK_180a35a20,&UNK_180a359f0,iVar1,iVar4,uVar5,&UNK_18098c860);
        FUN_180626f80(&UNK_180a359a0,*param_3,param_3[1]);
      }
    }
    *param_2 = uVar5;
    if (bVar3) {
      return 1;
    }
  }
  return 0;
}



undefined8 FUN_18055f294(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  int in_EAX;
  int iVar4;
  undefined4 unaff_EBX;
  int *unaff_RDI;
  uint uVar5;
  longlong in_R10;
  byte in_R11B;
  uint *unaff_R14;
  undefined *puStack0000000000000028;
  
  iVar4 = in_EAX + (param_2 & 0x1f);
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x598) + (longlong)(iVar4 >> 5) * 4);
  *(undefined4 *)(in_R10 + 0x5c4) = unaff_EBX;
  uVar5 = (uint)(uVar2 >> (((byte)iVar4 & 0x1f) - (char)(param_2 & 0x1f) & 0x3f)) &
          (int)(1L << (in_R11B & 0x3f)) - 1U;
  if ((unaff_RDI[2] == 0x20) && (*unaff_RDI == -0x80000000)) {
    bVar3 = true;
  }
  else {
    iVar4 = *unaff_RDI;
    uVar5 = iVar4 + uVar5;
    iVar1 = unaff_RDI[1];
    if ((iVar1 < (int)uVar5) || ((int)uVar5 < iVar4)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((int)uVar5 < iVar4) || (iVar1 < (int)uVar5)) {
      puStack0000000000000028 = &UNK_18098c860;
      FUN_180627340(&UNK_180a35a20,&UNK_180a359f0,iVar4,iVar1,uVar5);
      FUN_180626f80(&UNK_180a359a0,*unaff_RDI,unaff_RDI[1]);
    }
  }
  *unaff_R14 = uVar5;
  if (!bVar3) {
    return 0;
  }
  return 1;
}



undefined1 FUN_18055f353(void)

{
  return 1;
}





// 函数: void FUN_18055f380(longlong *param_1)
void FUN_18055f380(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  _Mtx_destroy_in_situ();
  if (param_1[0x16f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x16f] = 0;
  if (param_1[0xb5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xb5] = 0;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x5d8) {
    if (*(longlong *)(lVar2 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar2 + 0x588) = 0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18055f400(longlong param_1)
void FUN_18055f400(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x588) = 0;
  return;
}





// 函数: void FUN_18055f440(longlong *param_1)
void FUN_18055f440(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x5d8) {
    if (*(longlong *)(lVar2 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar2 + 0x588) = 0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18055f4c0(longlong *param_1)
void FUN_18055f4c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x5d8) {
    if (*(longlong *)(lVar2 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar2 + 0x588) = 0;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055f4e0(longlong param_1,uint param_2)
void FUN_18055f4e0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((0x2c40 < (int)param_2) &&
     (uVar4 = (ulonglong)param_2, *(int *)(param_1 + 0x590) < (int)param_2)) {
    uVar2 = (int)param_2 >> 0x1f & 0x3f;
    param_2 = param_2 + uVar2;
    if ((param_2 & 0x3f) != uVar2) {
      uVar4 = (ulonglong)(uint)((((int)param_2 >> 6) + 1) * 0x40);
    }
    iVar3 = (int)uVar4;
    *(int *)(param_1 + 0x590) = iVar3;
    if (iVar3 >> 3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)(iVar3 >> 3),CONCAT71((int7)(uVar4 >> 8),3));
      iVar3 = *(int *)(param_1 + 0x590);
    }
                    // WARNING: Subroutine does not return
    memset(uVar1,0,(longlong)(iVar3 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055f505(undefined8 param_1,undefined8 param_2,int param_3)
void FUN_18055f505(undefined8 param_1,undefined8 param_2,int param_3)

{
  int in_EAX;
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong unaff_RBX;
  
  uVar3 = in_EAX >> 0x1f & 0x3f;
  uVar1 = in_EAX + uVar3;
  if ((uVar1 & 0x3f) != uVar3) {
    param_3 = (((int)uVar1 >> 6) + 1) * 0x40;
  }
  *(int *)(unaff_RBX + 0x590) = param_3;
  if (param_3 >> 3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18062b420(_DAT_180c8ed18,(longlong)(param_3 >> 3),3);
    param_3 = *(int *)(unaff_RBX + 0x590);
  }
                    // WARNING: Subroutine does not return
  memset(uVar2,0,(longlong)(param_3 >> 3));
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18055f5ba(void)
void FUN_18055f5ba(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055f5c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18055f5c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb8] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = _DAT_180c966e8;
  param_1[0xbc] = 0;
  param_1[0xb7] = param_1 + 4;
  *(undefined4 *)(param_1 + 0xb6) = 0x2c40;
  *(undefined4 *)(param_1 + 0xbd) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 4,0,0x588,param_4,0xfffffffffffffffe);
}



float FUN_18055f6f0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1[2];
  if (fVar1 == 0.0) {
    return param_2;
  }
  if ((fVar1 * 0.5 + param_1[1] < param_2) || (fVar2 = *param_1, param_2 < fVar2 - fVar1 * 0.5)) {
    FUN_180627340(&UNK_180a35aa0,&UNK_180a35b40,(double)*param_1,(double)param_1[1],(double)param_2,
                  &UNK_18098c850);
    FUN_180626f80(&UNK_180a35af0,(double)*param_1,(double)param_1[1]);
    fVar1 = param_1[2];
    fVar2 = *param_1;
  }
  return (float)(int)((param_2 - fVar2) / fVar1 + 0.5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055f7e0(longlong *param_1,ulonglong param_2)
void FUN_18055f7e0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[1];
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar2 >> 5)) {
    uVar5 = param_2;
    if (param_2 != 0) {
      do {
        *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar2 + 0xc) = _DAT_180c966e8;
        *puVar2 = 0;
        *(undefined8 *)((longlong)puVar2 + 0x14) = _DAT_180c966e8;
        *(undefined2 *)(puVar2 + 1) = 0x101;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 4;
      } while (uVar5 != 0);
      puVar2 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar2 + param_2 * 4);
    return;
  }
  puVar3 = (undefined8 *)*param_1;
  lVar1 = (longlong)puVar2 - (longlong)puVar3 >> 5;
  uVar5 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < lVar1 + param_2) {
    uVar5 = lVar1 + param_2;
  }
  lVar1 = 0;
  if (uVar5 != 0) {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar5 << 5,(char)param_1[3]);
    puVar3 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
  }
  if (puVar3 != puVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,puVar3,(longlong)puVar2 - (longlong)puVar3);
  }
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0xc);
    uVar4 = param_2;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      *puVar2 = _DAT_180c966e8;
      *(undefined8 *)((longlong)puVar2 + -0xc) = 0;
      puVar2[1] = _DAT_180c966e8;
      *(undefined2 *)((longlong)puVar2 + -4) = 0x101;
      uVar4 = uVar4 - 1;
      puVar2 = puVar2 + 4;
    } while (uVar4 != 0);
  }
  if (*param_1 == 0) {
    *param_1 = lVar1;
    param_1[2] = uVar5 * 0x20 + lVar1;
    param_1[1] = param_2 * 0x20 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055f814(longlong param_1,longlong param_2)
void FUN_18055f814(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong unaff_RSI;
  longlong *unaff_R14;
  
  lVar1 = in_RAX >> 5;
  uVar4 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(lVar1 + unaff_RSI)) {
    uVar4 = lVar1 + unaff_RSI;
  }
  lVar1 = 0;
  if (uVar4 != 0) {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar4 << 5,*(undefined1 *)(param_1 + 0x18));
    param_2 = *unaff_R14;
    unaff_RBX = unaff_R14[1];
  }
  if (param_2 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,param_2,unaff_RBX - param_2);
  }
  if (unaff_RSI != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0xc);
    lVar3 = unaff_RSI;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      *puVar2 = _DAT_180c966e8;
      *(undefined8 *)((longlong)puVar2 + -0xc) = 0;
      puVar2[1] = _DAT_180c966e8;
      *(undefined2 *)((longlong)puVar2 + -4) = 0x101;
      lVar3 = lVar3 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar3 != 0);
  }
  if (*unaff_R14 == 0) {
    *unaff_R14 = lVar1;
    unaff_R14[2] = uVar4 * 0x20 + lVar1;
    unaff_R14[1] = unaff_RSI * 0x20 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055f903(void)
void FUN_18055f903(void)

{
  longlong lVar1;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  lVar1 = unaff_RSI;
  if (unaff_RSI != 0) {
    do {
      *(undefined8 *)((longlong)unaff_RBX + 0xc) = 0;
      *(undefined8 *)((longlong)unaff_RBX + 0x14) = 0;
      *(undefined8 *)((longlong)unaff_RBX + 0xc) = _DAT_180c966e8;
      *unaff_RBX = 0;
      *(undefined8 *)((longlong)unaff_RBX + 0x14) = _DAT_180c966e8;
      *(undefined2 *)(unaff_RBX + 1) = 0x101;
      lVar1 = lVar1 + -1;
      unaff_RBX = unaff_RBX + 4;
    } while (lVar1 != 0);
    unaff_RBX = *(undefined8 **)(unaff_R14 + 8);
  }
  *(undefined8 **)(unaff_R14 + 8) = unaff_RBX + unaff_RSI * 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055f960(double *param_1,undefined8 *param_2)
void FUN_18055f960(double *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lStackX_8;
  
  if (*(char *)((longlong)param_1 + 9) != '\0') {
    lVar1 = _DAT_180c8ed58;
    if (_DAT_180c8ed58 == 0) {
      QueryPerformanceCounter(&lStackX_8);
      lVar1 = lStackX_8;
    }
    lVar1 = lVar1 - _DAT_180c8ed48;
    *(undefined8 *)((longlong)param_1 + 0xc) = *param_2;
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = (double)lVar1 * _DAT_180c8ed50;
    return;
  }
  *(undefined2 *)(param_1 + 1) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055fa00(longlong *param_1,ulonglong param_2)
void FUN_18055fa00(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined4 *)param_1[1];
  puVar4 = (undefined4 *)*param_1;
  uVar3 = (longlong)puVar5 - (longlong)puVar4 >> 3;
  if (param_2 <= uVar3) {
    param_1[1] = (longlong)(puVar4 + param_2 * 2);
    return;
  }
  param_2 = param_2 - uVar3;
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar5 >> 3)) {
    uVar3 = param_2;
    if (param_2 != 0) {
      do {
        *puVar5 = 0xffffffff;
        *(undefined2 *)(puVar5 + 1) = 0;
        puVar5 = puVar5 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar5 = (undefined4 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar5 + param_2 * 2);
    return;
  }
  uVar6 = uVar3 * 2;
  if (uVar3 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < uVar3 + param_2) {
    uVar6 = uVar3 + param_2;
  }
  puVar2 = (undefined4 *)0x0;
  if (uVar6 != 0) {
    puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,(char)param_1[3]);
    puVar4 = (undefined4 *)*param_1;
    puVar5 = (undefined4 *)param_1[1];
  }
  uVar3 = param_2;
  puVar1 = puVar2;
  if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar4,(longlong)puVar5 - (longlong)puVar4);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0xffffffff;
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1 = puVar1 + 2;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar2;
  param_1[2] = (longlong)(puVar2 + uVar6 * 2);
  param_1[1] = (longlong)(puVar2 + param_2 * 2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055fa32(longlong param_1,undefined4 *param_2)
void FUN_18055fa32(longlong param_1,undefined4 *param_2)

{
  longlong in_RAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 *unaff_RBX;
  longlong *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  
  if (unaff_RDI <= (ulonglong)(in_RAX >> 3)) {
    uVar4 = unaff_RDI;
    if (unaff_RDI != 0) {
      do {
        *unaff_RBX = 0xffffffff;
        *(undefined2 *)(unaff_RBX + 1) = 0;
        unaff_RBX = unaff_RBX + 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      unaff_RBX = (undefined4 *)unaff_RSI[1];
    }
    unaff_RSI[1] = (longlong)(unaff_RBX + unaff_RDI * 2);
    return;
  }
  uVar4 = param_1 * 2;
  if (param_1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < param_1 + unaff_RDI) {
    uVar4 = param_1 + unaff_RDI;
  }
  puVar1 = (undefined4 *)0x0;
  if (uVar4 != 0) {
    puVar1 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)unaff_RSI[3]);
    param_2 = (undefined4 *)*unaff_RSI;
    unaff_RBX = (undefined4 *)unaff_RSI[1];
  }
  if (param_2 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,param_2,(longlong)unaff_RBX - (longlong)param_2);
  }
  puVar2 = puVar1;
  uVar3 = unaff_RDI;
  if (unaff_RDI != 0) {
    do {
      *puVar2 = 0xffffffff;
      *(undefined2 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = (longlong)puVar1;
    unaff_RSI[2] = (longlong)(puVar1 + uVar4 * 2);
    unaff_RSI[1] = (longlong)(puVar1 + unaff_RDI * 2);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18055fb0d(void)
void FUN_18055fb0d(void)

{
  longlong lVar1;
  undefined4 *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar1 = unaff_RDI;
  if (unaff_RDI != 0) {
    do {
      *unaff_RBX = 0xffffffff;
      *(undefined2 *)(unaff_RBX + 1) = 0;
      unaff_RBX = unaff_RBX + 2;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(undefined4 **)(unaff_RSI + 8);
  }
  *(undefined4 **)(unaff_RSI + 8) = unaff_RBX + unaff_RDI * 2;
  return;
}





// 函数: void FUN_18055fb4d(undefined8 param_1,longlong param_2)
void FUN_18055fb4d(undefined8 param_1,longlong param_2)

{
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(longlong *)(unaff_RSI + 8) = param_2 + unaff_RDI * 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055fb60(longlong *param_1,int param_2,longlong *param_3)
void FUN_18055fb60(longlong *param_1,int param_2,longlong *param_3)

{
  short *psVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  
  psVar1 = (short *)((longlong)param_1 + 0x44);
  iVar12 = 0;
  while( true ) {
    iVar6 = 0;
    while (*(char *)((longlong)param_1 + 0x46) != '\0') {
      if (10000 < iVar6) {
        Sleep(0);
      }
      iVar6 = iVar6 + 1;
    }
    LOCK();
    *psVar1 = *psVar1 + 1;
    UNLOCK();
    if (*(char *)((longlong)param_1 + 0x46) == '\0') break;
    LOCK();
    *psVar1 = *psVar1 + -1;
    UNLOCK();
  }
  LOCK();
  *psVar1 = *psVar1 + -1;
  UNLOCK();
  if ((int)(param_1[1] - *param_1 >> 5) < param_2) {
    do {
      iVar6 = 0;
      while (*(char *)((longlong)param_1 + 0x46) != '\0') {
        if (10000 < iVar6) {
          Sleep(0);
        }
        iVar6 = iVar6 + 1;
      }
      LOCK();
      bVar13 = *(char *)((longlong)param_1 + 0x46) == '\0';
      if (bVar13) {
        *(char *)((longlong)param_1 + 0x46) = '\x01';
      }
      UNLOCK();
    } while (!bVar13);
    iVar6 = 0;
    while (*psVar1 != 0) {
      if (10000 < iVar6) {
        Sleep(0);
      }
      iVar6 = iVar6 + 1;
    }
    uVar4 = param_1[1] - *param_1 >> 5;
    if (uVar4 < (ulonglong)(longlong)param_2) {
      FUN_18055f7e0(param_1,(longlong)param_2 - uVar4);
      iVar6 = (int)uVar4;
      if (iVar6 < param_2) {
        lVar8 = (longlong)iVar6 * 0xd08;
        lVar5 = (longlong)iVar6 << 5;
        uVar4 = (ulonglong)(uint)(param_2 - iVar6);
        lVar11 = lVar8;
        iVar6 = _DAT_180c966e8;
        do {
          lVar3 = *param_3;
          iVar7 = *(int *)(lVar3 + 0xd00 + lVar8);
          if ((iVar6 < iVar7) ||
             ((iVar7 == iVar6 && (_DAT_180c966ec < *(int *)(lVar3 + 0xd04 + lVar8))))) {
            FUN_18055f960(*param_1 + lVar5,lVar3 + 0xd00 + lVar11);
            iVar6 = _DAT_180c966e8;
          }
          lVar5 = lVar5 + 0x20;
          lVar11 = lVar11 + 0xd08;
          lVar8 = lVar8 + 0xd08;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x46) = 0;
  }
  iVar6 = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
  uVar4 = (ulonglong)iVar6;
  plVar2 = param_1 + 9;
  while( true ) {
    iVar7 = 0;
    while (*(char *)((longlong)param_1 + 0x4a) != '\0') {
      if (10000 < iVar7) {
        Sleep(0);
      }
      iVar7 = iVar7 + 1;
    }
    LOCK();
    *(short *)plVar2 = (short)*plVar2 + 1;
    UNLOCK();
    if (*(char *)((longlong)param_1 + 0x4a) == '\0') break;
    LOCK();
    *(short *)plVar2 = (short)*plVar2 + -1;
    UNLOCK();
  }
  LOCK();
  *(short *)plVar2 = (short)*plVar2 + -1;
  UNLOCK();
  if ((int)(param_1[5] - param_1[4] >> 3) < iVar6) {
    do {
      iVar6 = 0;
      while (*(char *)((longlong)param_1 + 0x4a) != '\0') {
        if (10000 < iVar6) {
          Sleep(0);
        }
        iVar6 = iVar6 + 1;
      }
      LOCK();
      bVar13 = *(char *)((longlong)param_1 + 0x4a) == '\0';
      if (bVar13) {
        *(char *)((longlong)param_1 + 0x4a) = '\x01';
      }
      UNLOCK();
    } while (!bVar13);
    while ((short)*plVar2 != 0) {
      if (10000 < iVar12) {
        Sleep(0);
      }
      iVar12 = iVar12 + 1;
    }
    uVar9 = param_1[5] - param_1[4] >> 3;
    if (uVar9 < uVar4) {
      FUN_18055fa00(param_1 + 4,uVar4);
      lVar11 = (longlong)(int)uVar9;
      if (lVar11 < (longlong)uVar4) {
        lVar5 = lVar11 * 0xd080 + 0xd08;
        iVar12 = _DAT_180c966e8;
        do {
          uVar10 = 2;
          do {
            lVar8 = *param_3;
            iVar6 = *(int *)(lVar5 + -8 + lVar8);
            if ((iVar12 < iVar6) ||
               ((iVar6 == iVar12 && (_DAT_180c966ec < *(int *)(lVar5 + -4 + lVar8))))) {
              lVar8 = param_1[4] + lVar11 * 8;
              *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | (ushort)(1 << (uVar10 - 2 & 0x1f));
              lVar8 = *param_3;
              iVar12 = _DAT_180c966e8;
            }
            iVar6 = *(int *)(lVar5 + 0xd00 + lVar8);
            if ((iVar12 < iVar6) ||
               ((iVar6 == iVar12 && (_DAT_180c966ec < *(int *)(lVar5 + 0xd04 + lVar8))))) {
              lVar8 = param_1[4] + lVar11 * 8;
              *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | (ushort)(1 << (uVar10 - 1 & 0x1f));
              lVar8 = *param_3;
              iVar12 = _DAT_180c966e8;
            }
            iVar6 = *(int *)(lVar5 + 0x1a08 + lVar8);
            if ((iVar12 < iVar6) ||
               ((iVar6 == iVar12 && (_DAT_180c966ec < *(int *)(lVar5 + 0x1a0c + lVar8))))) {
              lVar8 = param_1[4] + lVar11 * 8;
              *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | (ushort)(1 << (uVar10 & 0x1f));
              lVar8 = *param_3;
              iVar12 = _DAT_180c966e8;
            }
            iVar6 = *(int *)(lVar5 + 10000 + lVar8);
            if ((iVar12 < iVar6) ||
               ((iVar6 == iVar12 && (_DAT_180c966ec < *(int *)(lVar5 + 0x2714 + lVar8))))) {
              lVar8 = param_1[4] + lVar11 * 8;
              *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | (ushort)(1 << (uVar10 + 1 & 0x1f));
              lVar8 = *param_3;
              iVar12 = _DAT_180c966e8;
            }
            iVar6 = *(int *)(lVar5 + 0x3418 + lVar8);
            if ((iVar12 < iVar6) ||
               ((iVar6 == iVar12 && (_DAT_180c966ec < *(int *)(lVar5 + 0x341c + lVar8))))) {
              lVar8 = param_1[4] + lVar11 * 8;
              *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | (ushort)(1 << (uVar10 + 2 & 0x1f));
              lVar8 = *param_3;
              iVar12 = _DAT_180c966e8;
            }
            iVar6 = *(int *)(lVar5 + 0x4120 + lVar8);
            if ((iVar12 < iVar6) ||
               ((iVar6 == iVar12 && (_DAT_180c966ec < *(int *)(lVar5 + 0x4124 + lVar8))))) {
              lVar8 = param_1[4] + lVar11 * 8;
              *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | (ushort)(1 << (uVar10 + 3 & 0x1f));
              lVar8 = *param_3;
              iVar12 = _DAT_180c966e8;
            }
            iVar6 = *(int *)(lVar5 + 0x4e28 + lVar8);
            if ((iVar12 < iVar6) ||
               ((iVar6 == iVar12 && (_DAT_180c966ec < *(int *)(lVar5 + 0x4e2c + lVar8))))) {
              lVar8 = param_1[4] + lVar11 * 8;
              *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | (ushort)(1 << (uVar10 + 4 & 0x1f));
              lVar8 = *param_3;
              iVar12 = _DAT_180c966e8;
            }
            iVar6 = *(int *)(lVar5 + lVar8 + 0x5b30);
            if ((iVar12 < iVar6) ||
               ((iVar6 == iVar12 && (_DAT_180c966ec < *(int *)(lVar5 + lVar8 + 0x5b34))))) {
              lVar8 = param_1[4] + lVar11 * 8;
              *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | (ushort)(1 << (uVar10 + 5 & 0x1f));
              iVar12 = _DAT_180c966e8;
            }
            lVar5 = lVar5 + 0x6840;
            iVar6 = uVar10 + 6;
            uVar10 = uVar10 + 8;
          } while (iVar6 < 0x10);
          lVar11 = lVar11 + 1;
        } while (lVar11 < (longlong)uVar4);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  }
  return;
}





// 函数: void FUN_180560090(longlong param_1)
void FUN_180560090(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined8 *)(param_1 + 0xcf4) = 0;
                    // WARNING: Subroutine does not return
  memset(*(undefined8 *)(param_1 + 0xcc8),0,(longlong)(*(int *)(param_1 + 0xcc0) >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180560140(undefined4 *param_1)
void FUN_180560140(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x7f7fffff;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0xbe4ccccd;
  param_1[0x11] = 0xbe4ccccd;
  *(undefined8 *)(param_1 + 0x12) = 0x3ecccccd;
  *(undefined2 *)(param_1 + 0x14) = 0x100;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined8 *)(param_1 + 0x17) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x22) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x24) = 0xff;
  *(undefined8 *)(param_1 + 0x25) = 0;
  param_1[0x21] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  param_1[0x27] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f800000;
  param_1[0x34] = 0xbe4ccccd;
  param_1[0x35] = 0xbe4ccccd;
  *(undefined8 *)(param_1 + 0x36) = 0x3ecccccd;
  *(undefined2 *)(param_1 + 0x38) = 0x100;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined8 *)(param_1 + 0x3b) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x46) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x48) = 0xff;
  *(undefined8 *)(param_1 + 0x49) = 0;
  param_1[0x45] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)(param_1 + 0x41) = 0;
  *(undefined8 *)(param_1 + 0x43) = 0;
  param_1[0x4b] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x56) = 0xff;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  param_1[0x57] = 0;
  *(undefined8 *)(param_1 + 0x340) = _DAT_180c966e8;
  *(undefined8 *)(param_1 + 0x1c9) = 0;
                    // WARNING: Subroutine does not return
  memset(*(undefined8 *)(param_1 + 0x1be),0,(longlong)((int)param_1[0x1bc] >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



