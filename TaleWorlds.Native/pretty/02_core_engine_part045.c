#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part045.c - 28 个函数

// 函数: void FUN_1800856c7(void)
void FUN_1800856c7(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  longlong in_RAX;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong unaff_RBP;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *unaff_R13;
  longlong *unaff_R14;
  
  if (in_RAX == 0) {
    uVar9 = unaff_RBP & 0xffffffff;
    uVar8 = 0;
  }
  else {
    uVar9 = FUN_18062b420(_DAT_180c8ed18,in_RAX * 4,0xf);
    uVar8 = (undefined2)unaff_R14[2];
  }
  unaff_R14[1] = uVar9;
  lVar10 = FUN_1800855e0(uVar8);
  *unaff_R14 = lVar10;
  uVar16 = unaff_RBP & 0xffffffff;
  uVar3 = *(ushort *)(unaff_R14 + 2);
  uVar9 = unaff_RBP;
  if ((ushort)unaff_RBP < uVar3) {
    do {
      puVar14 = (uint *)(*unaff_R13 + uVar9);
      puVar13 = (uint *)(*unaff_R14 + uVar9);
      uVar15 = *puVar14;
      uVar4 = puVar13[1];
      if ((int)uVar4 < (int)uVar15) {
        if (uVar15 == 0) {
          if ((int)uVar4 < 2) {
            puVar13[1] = 8;
          }
          else {
            puVar13[1] = ((int)uVar4 >> 1) + uVar4;
          }
        }
        else {
          puVar13[1] = uVar15;
        }
        FUN_1800846d0(puVar13);
      }
      *puVar13 = uVar15;
      uVar12 = unaff_RBP & 0xffffffff;
      if (*puVar14 != 0) {
        do {
          iVar11 = (int)uVar12;
          uVar12 = (ulonglong)(iVar11 + 1U);
          puVar1 = (undefined4 *)(*(longlong *)(puVar14 + 2) + (longlong)iVar11 * 0x10);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined4 *)(*(longlong *)(puVar13 + 2) + (longlong)iVar11 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
        } while (iVar11 + 1U < *puVar14);
      }
      uVar15 = puVar14[10];
      uVar4 = puVar13[0xb];
      if ((int)uVar4 < (int)uVar15) {
        if (uVar15 == 0) {
          if ((int)uVar4 < 2) {
            puVar13[0xb] = 8;
          }
          else {
            puVar13[0xb] = ((int)uVar4 >> 1) + uVar4;
          }
        }
        else {
          puVar13[0xb] = uVar15;
        }
        FUN_1800846d0(puVar13 + 10);
      }
      puVar13[10] = uVar15;
      unaff_RBP = 0;
      uVar12 = unaff_RBP;
      if (puVar14[10] != 0) {
        do {
          iVar11 = (int)uVar12;
          uVar12 = (ulonglong)(iVar11 + 1U);
          puVar1 = (undefined4 *)(*(longlong *)(puVar14 + 0xc) + (longlong)iVar11 * 0x10);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined4 *)(*(longlong *)(puVar13 + 0xc) + (longlong)iVar11 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
        } while (iVar11 + 1U < puVar14[10]);
      }
      uVar3 = *(ushort *)(unaff_R14 + 2);
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      uVar9 = uVar9 + 0x50;
    } while ((int)uVar15 < (int)(uint)uVar3);
  }
                    // WARNING: Subroutine does not return
  memcpy(unaff_R14[1],unaff_R13[1],(ulonglong)uVar3 << 2);
}





// 函数: void FUN_180085714(void)
void FUN_180085714(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong unaff_RBP;
  uint *puVar11;
  int unaff_R12D;
  longlong *unaff_R13;
  longlong *unaff_R14;
  ulonglong uVar12;
  
  uVar12 = unaff_RBP;
  do {
    puVar11 = (uint *)(*unaff_R13 + uVar12);
    puVar10 = (uint *)(*unaff_R14 + uVar12);
    uVar3 = *puVar11;
    uVar4 = puVar10[1];
    if ((int)uVar4 < (int)uVar3) {
      if (uVar3 == 0) {
        if ((int)uVar4 < 2) {
          puVar10[1] = 8;
        }
        else {
          puVar10[1] = ((int)uVar4 >> 1) + uVar4;
        }
      }
      else {
        puVar10[1] = uVar3;
      }
      FUN_1800846d0(puVar10);
    }
    *puVar10 = uVar3;
    uVar9 = unaff_RBP & 0xffffffff;
    if (*puVar11 != 0) {
      do {
        iVar8 = (int)uVar9;
        uVar9 = (ulonglong)(iVar8 + 1U);
        puVar1 = (undefined4 *)(*(longlong *)(puVar11 + 2) + (longlong)iVar8 * 0x10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(*(longlong *)(puVar10 + 2) + (longlong)iVar8 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
      } while (iVar8 + 1U < *puVar11);
    }
    uVar3 = puVar11[10];
    uVar4 = puVar10[0xb];
    if ((int)uVar4 < (int)uVar3) {
      if (uVar3 == 0) {
        if ((int)uVar4 < 2) {
          puVar10[0xb] = 8;
        }
        else {
          puVar10[0xb] = ((int)uVar4 >> 1) + uVar4;
        }
      }
      else {
        puVar10[0xb] = uVar3;
      }
      FUN_1800846d0(puVar10 + 10);
    }
    puVar10[10] = uVar3;
    unaff_RBP = 0;
    uVar9 = unaff_RBP;
    if (puVar11[10] != 0) {
      do {
        iVar8 = (int)uVar9;
        uVar9 = (ulonglong)(iVar8 + 1U);
        puVar1 = (undefined4 *)(*(longlong *)(puVar11 + 0xc) + (longlong)iVar8 * 0x10);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(*(longlong *)(puVar10 + 0xc) + (longlong)iVar8 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
      } while (iVar8 + 1U < puVar11[10]);
    }
    unaff_R12D = unaff_R12D + 1;
    uVar12 = uVar12 + 0x50;
  } while (unaff_R12D < (int)(uint)*(ushort *)(unaff_R14 + 2));
                    // WARNING: Subroutine does not return
  memcpy(unaff_R14[1],unaff_R13[1],(ulonglong)*(ushort *)(unaff_R14 + 2) << 2);
}





// 函数: void FUN_180085826(void)
void FUN_180085826(void)

{
  ushort in_AX;
  longlong unaff_R13;
  longlong unaff_R14;
  
                    // WARNING: Subroutine does not return
  memcpy(*(undefined8 *)(unaff_R14 + 8),*(undefined8 *)(unaff_R13 + 8),(ulonglong)in_AX << 2);
}





// 函数: void FUN_180085840(void)
void FUN_180085840(void)

{
  return;
}



longlong FUN_180085900(longlong param_1)

{
  if ((((*(byte *)(param_1 + 0xfd) & 0x40) == 0) || (*(longlong *)(param_1 + 0x210) == 0)) &&
     (*(longlong *)(param_1 + 0x1b0) != 0)) {
    param_1 = FUN_180085900(*(longlong *)(param_1 + 0x1b0));
  }
  return param_1;
}





// 函数: void FUN_180085970(undefined8 param_1,undefined4 param_2)
void FUN_180085970(undefined8 param_1,undefined4 param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}





// 函数: void FUN_180085ac0(undefined8 param_1,undefined4 param_2)
void FUN_180085ac0(undefined8 param_1,undefined4 param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}





// 函数: void FUN_180085c10(undefined8 param_1,undefined4 param_2)
void FUN_180085c10(undefined8 param_1,undefined4 param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180085e30(int *param_1)
void FUN_180085e30(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1[1] < 1) {
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)param_1[1] * 0x14,(char)param_1[8]);
  if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x14);
  }
  *(undefined8 *)(param_1 + 2) = uVar1;
  return;
}





// 函数: void FUN_180085e55(void)
void FUN_180085e55(void)

{
  undefined8 uVar1;
  int *unaff_RBX;
  
  uVar1 = FUN_18062b420();
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0x14);
  }
  *(undefined8 *)(unaff_RBX + 2) = uVar1;
  return;
}





// 函数: void FUN_180085e9b(longlong param_1)
void FUN_180085e9b(longlong param_1)

{
  longlong unaff_RBX;
  
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(unaff_RBX + 8) = 0;
  return;
}





// 函数: void FUN_180085ec0(int *param_1,int *param_2)
void FUN_180085ec0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(char *)(param_1 + 8) = (char)param_2[8];
  if (param_1[1] < param_2[1]) {
    param_1[1] = param_2[1];
    FUN_180085e30(param_1);
    iVar1 = *param_1;
    uVar2 = *(undefined8 *)(param_2 + 2);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 2);
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy(*(undefined8 *)(param_1 + 2),uVar2,(longlong)iVar1 * 0x14);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180085f20(int *param_1)
void FUN_180085f20(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1[1] < 1) {
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)param_1[1] * 0xc,(char)param_1[8]);
  if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0xc);
  }
  *(undefined8 *)(param_1 + 2) = uVar1;
  return;
}





// 函数: void FUN_180085f45(void)
void FUN_180085f45(void)

{
  undefined8 uVar1;
  int *unaff_RBX;
  
  uVar1 = FUN_18062b420();
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0xc);
  }
  *(undefined8 *)(unaff_RBX + 2) = uVar1;
  return;
}





// 函数: void FUN_180085f8b(longlong param_1)
void FUN_180085f8b(longlong param_1)

{
  longlong unaff_RBX;
  
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(unaff_RBX + 8) = 0;
  return;
}





// 函数: void FUN_180085fb0(int *param_1,int *param_2)
void FUN_180085fb0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(char *)(param_1 + 8) = (char)param_2[8];
  if (param_1[1] < param_2[1]) {
    param_1[1] = param_2[1];
    FUN_180085f20(param_1);
    iVar1 = *param_1;
    uVar2 = *(undefined8 *)(param_2 + 2);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 2);
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy(*(undefined8 *)(param_1 + 2),uVar2,(longlong)iVar1 * 0xc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180086010(int *param_1)
void FUN_180086010(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1[1] < 1) {
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)param_1[1] * 0x5c,(char)param_1[8]);
  if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x5c);
  }
  *(undefined8 *)(param_1 + 2) = uVar1;
  return;
}





// 函数: void FUN_180086031(void)
void FUN_180086031(void)

{
  undefined8 uVar1;
  int *unaff_RBX;
  
  uVar1 = FUN_18062b420();
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0x5c);
  }
  *(undefined8 *)(unaff_RBX + 2) = uVar1;
  return;
}





// 函数: void FUN_180086073(longlong param_1)
void FUN_180086073(longlong param_1)

{
  longlong unaff_RBX;
  
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(unaff_RBX + 8) = 0;
  return;
}





// 函数: void FUN_180086090(int *param_1,int *param_2)
void FUN_180086090(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(char *)(param_1 + 8) = (char)param_2[8];
  if (param_1[1] < param_2[1]) {
    param_1[1] = param_2[1];
    FUN_180086010(param_1);
    iVar1 = *param_1;
    uVar2 = *(undefined8 *)(param_2 + 2);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 2);
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy(*(undefined8 *)(param_1 + 2),uVar2,(longlong)iVar1 * 0x5c);
  return;
}





// 函数: void FUN_1800860f0(int *param_1,int *param_2)
void FUN_1800860f0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(char *)(param_1 + 8) = (char)param_2[8];
  if (param_1[1] < param_2[1]) {
    param_1[1] = param_2[1];
    FUN_1800846d0(param_1);
    iVar1 = *param_1;
    uVar2 = *(undefined8 *)(param_2 + 2);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 2);
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy(*(undefined8 *)(param_1 + 2),uVar2,(longlong)iVar1 << 4);
  return;
}



undefined1 FUN_1800861a0(float *param_1)

{
  char cVar1;
  
  if ((((((ABS(*param_1 - 1.0) < 0.0001) && (ABS(param_1[1]) < 0.0001)) &&
        (ABS(param_1[2]) < 0.0001)) &&
       ((ABS(param_1[4]) < 0.0001 && (ABS(param_1[5] - 1.0) < 0.0001)))) &&
      ((ABS(param_1[6]) < 0.0001 && ((ABS(param_1[8]) < 0.0001 && (ABS(param_1[9]) < 0.0001)))))) &&
     (ABS(param_1[10] - 1.0) < 0.0001)) {
    cVar1 = func_0x000180086150(param_1 + 0xc,&DAT_180a00330);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180086270(ulonglong *param_1,undefined8 *param_2)
void FUN_180086270(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    param_1[1] = (ulonglong)(puVar7 + 3);
    uVar4 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar4;
    puVar7[2] = param_2[2];
    return;
  }
  puVar8 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar8) / 0x18;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      puVar5 = (undefined4 *)0x0;
      goto LAB_180086316;
    }
  }
  puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x18,(char)param_1[3]);
  puVar8 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
LAB_180086316:
  if (puVar8 != puVar7) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar8,(longlong)puVar7 - (longlong)puVar8);
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *puVar5 = *(undefined4 *)param_2;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(undefined8 *)(puVar5 + 4) = param_2[2];
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (ulonglong)puVar5;
  param_1[2] = (ulonglong)(puVar5 + lVar6 * 6);
  param_1[1] = (ulonglong)(puVar5 + 6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800862bb(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)
void FUN_1800862bb(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong *unaff_RBX;
  undefined4 *unaff_RBP;
  longlong lVar5;
  longlong unaff_RDI;
  
  if (param_1 / 0x18 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = (param_1 / 0x18) * 2;
    if (lVar5 == 0) {
      puVar4 = (undefined4 *)0x0;
      goto LAB_180086316;
    }
  }
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar5 * 0x18,(char)unaff_RBX[3]);
  param_4 = *unaff_RBX;
  unaff_RDI = unaff_RBX[1];
LAB_180086316:
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar4,param_4,unaff_RDI - param_4);
  }
  uVar1 = unaff_RBP[1];
  uVar2 = unaff_RBP[2];
  uVar3 = unaff_RBP[3];
  *puVar4 = *unaff_RBP;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(unaff_RBP + 4);
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = (longlong)puVar4;
  unaff_RBX[2] = (longlong)(puVar4 + lVar5 * 6);
  unaff_RBX[1] = (longlong)(puVar4 + 6);
  return;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800863a0(ulonglong *param_1,undefined8 *param_2)
void FUN_1800863a0(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    param_1[1] = (ulonglong)(puVar8 + 2);
    uVar4 = param_2[1];
    *puVar8 = *param_2;
    puVar8[1] = uVar4;
    return;
  }
  puVar6 = (undefined8 *)*param_1;
  lVar7 = (longlong)puVar8 - (longlong)puVar6 >> 4;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
      goto LAB_18008642b;
    }
  }
  puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar7 << 4,(char)param_1[3]);
  puVar6 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
LAB_18008642b:
  if (puVar6 != puVar8) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar6,(longlong)puVar8 - (longlong)puVar6);
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *puVar5 = *(undefined4 *)param_2;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (ulonglong)puVar5;
  param_1[2] = (ulonglong)(puVar5 + lVar7 * 4);
  param_1[1] = (ulonglong)(puVar5 + 4);
  return;
}



undefined8 *
FUN_180086490(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[4] = &UNK_180a3c3e0;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = &UNK_18098bcb0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180086530(longlong *param_1)
void FUN_180086530(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_180080060();
  }
  return;
}



undefined8 *
FUN_180086570(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc28;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    *(int *)(param_1 + 2) = (int)lVar1;
    strcpy_s(param_1[1],0x80,param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180086600(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a14ff8;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180086670(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb0,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a01240;
  return puVar1;
}



undefined8 FUN_1800866f0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1802566c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180086740(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a01188;
  puVar1[0x16] = 0;
  return puVar1;
}



longlong FUN_1800867d0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))();
  }
  FUN_1802566c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180086830(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a010d0;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800868d0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a00f10;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180086960(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a00e58;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180086a00(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a00d78;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180086aa0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a00ca8;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180086b40(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a00be0;
  puVar1[0x16] = 0;
  return puVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180086bd0(longlong param_1,undefined8 param_2,longlong param_3)
void FUN_180086bd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 8) = 0;
  }
  FUN_180142300(*_DAT_180c86870,&puStack_30,param_2);
  puVar1 = &DAT_18098bc73;
  if (_DAT_180bf6658 != (undefined *)0x0) {
    puVar1 = _DAT_180bf6658;
  }
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_3 + 8);
  }
  puVar2 = &DAT_18098bc73;
  if (puStack_28 != (undefined *)0x0) {
    puVar2 = puStack_28;
  }
  FUN_180628040(param_1,&UNK_180a00550,puVar2,puVar3,puVar1);
  puStack_30 = &UNK_180a3c3e0;
  if (puStack_28 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



undefined8 * FUN_180086ca0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 3;
  puVar1 = param_1 + 9;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 3;
  *puVar1 = puVar1;
  param_1[10] = puVar1;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  puVar1 = param_1 + 0xf;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x1a;
  *puVar1 = puVar1;
  param_1[0x10] = puVar1;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  puVar1 = param_1 + 0x16;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x1a;
  *puVar1 = puVar1;
  param_1[0x17] = puVar1;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  puVar1 = param_1 + 0x1c;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x21) = 3;
  *puVar1 = puVar1;
  param_1[0x1d] = puVar1;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x1a;
  param_1[0x15] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  return param_1;
}





// 函数: void FUN_180086dc0(longlong *param_1)
void FUN_180086dc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_180089640(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180086de0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180086de0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18008d810(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180086e10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180086e10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18008d810(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



