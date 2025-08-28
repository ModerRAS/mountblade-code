#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part139.c - 15 个函数

// 函数: void FUN_18074b650(undefined8 param_1,undefined8 param_2,undefined4 *param_3)
void FUN_18074b650(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_1,param_2,&UNK_180958180,*param_3,*(undefined2 *)(param_3 + 1),
                *(undefined2 *)((longlong)param_3 + 6),*(undefined1 *)(param_3 + 2),
                *(undefined1 *)((longlong)param_3 + 9),*(undefined1 *)((longlong)param_3 + 10),
                *(undefined1 *)((longlong)param_3 + 0xb),*(undefined1 *)(param_3 + 3),
                *(undefined1 *)((longlong)param_3 + 0xd),*(undefined1 *)((longlong)param_3 + 0xe),
                *(undefined1 *)((longlong)param_3 + 0xf));
}



undefined8 FUN_18074b6f0(undefined1 *param_1,int param_2,float *param_3)

{
  float fVar1;
  undefined1 uVar2;
  
  fVar1 = *param_3;
  if ((((fVar1 == 0.0) || (fVar1 == 1.0)) && ((param_3[1] == 0.0 || (param_3[1] == 1.0)))) &&
     (((param_3[2] == 0.0 || (param_3[2] == 1.0)) && (7 < param_2)))) {
    *param_1 = 0x7b;
    uVar2 = 0x30;
    if (*param_3 != 0.0) {
      uVar2 = 0x31;
    }
    param_1[1] = uVar2;
    uVar2 = 0x30;
    param_1[2] = 0x2c;
    if (param_3[1] != 0.0) {
      uVar2 = 0x31;
    }
    param_1[3] = uVar2;
    uVar2 = 0x30;
    param_1[4] = 0x2c;
    if (param_3[2] != 0.0) {
      uVar2 = 0x31;
    }
    param_1[5] = uVar2;
    *(undefined2 *)(param_1 + 6) = 0x7d;
    return 7;
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390((double)param_3[2],(double)param_3[1],&UNK_180958170,(double)fVar1,
                (double)param_3[1],(double)param_3[2]);
}



undefined8 FUN_18074b880(undefined2 *param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    if (1 < param_2) {
      *param_1 = 0x30;
      return 1;
    }
    uVar2 = FUN_18076b930();
    return uVar2;
  }
  iVar1 = func_0x00018076b690(param_3);
  if (iVar1 + 1 <= param_2) {
                    // WARNING: Subroutine does not return
    memcpy(param_1,param_3,(longlong)(iVar1 + 1));
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_1,param_2,&UNK_1809fe7f8,param_3);
}





// 函数: void FUN_18074b89f(void)
void FUN_18074b89f(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = func_0x00018076b690();
  if (iVar1 + 1 <= unaff_EDI) {
                    // WARNING: Subroutine does not return
    memcpy();
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390();
}





// 函数: void FUN_18074b8d6(undefined8 param_1)
void FUN_18074b8d6(undefined8 param_1)

{
  undefined4 unaff_EDI;
  
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_1,unaff_EDI,&UNK_1809fe7f8);
}



undefined8 FUN_18074b8e9(undefined2 *param_1)

{
  undefined8 uVar1;
  int unaff_EDI;
  undefined *puStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  if (1 < unaff_EDI) {
    *param_1 = 0x30;
    return 1;
  }
  puStack0000000000000040 = &UNK_1809fd0a0;
  uStack0000000000000048 = 0;
  uVar1 = FUN_18076b930();
  return uVar1;
}





// 函数: void FUN_18074b930(undefined8 param_1,undefined8 param_2,undefined4 *param_3)
void FUN_18074b930(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_1,param_2,&UNK_1809581b4,param_3,*param_3);
  }
  FUN_18076b930();
  return;
}



uint FUN_18074b970(undefined1 *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  if (0 < param_2) {
    *param_1 = 0x7b;
  }
  uVar4 = (uint)(0 < param_2);
  if (param_4 != 0) {
    if (param_2 <= (int)uVar4) {
      return uVar4;
    }
    uVar1 = *param_3;
    pcVar2 = param_1 + uVar4;
    if ((9 < uVar1) || ((int)(param_2 - uVar4) < 2)) {
                    // WARNING: Subroutine does not return
      FUN_18076b390(pcVar2,param_2 - uVar4,&UNK_1809fd0a0);
    }
    pcVar2[1] = '\0';
    *pcVar2 = (char)uVar1 + '0';
    uVar4 = uVar4 + 1;
    if (1 < (longlong)param_4) {
      lVar5 = 1;
      do {
        if (param_2 <= (int)uVar4) {
          return uVar4;
        }
        iVar3 = param_2 - (uVar4 + 1);
        pcVar2 = param_1 + (longlong)(int)uVar4 + 1;
        param_1[(int)uVar4] = 0x2c;
        uVar1 = param_3[lVar5];
        if ((9 < uVar1) || (iVar3 < 2)) {
                    // WARNING: Subroutine does not return
          FUN_18076b390(pcVar2,iVar3,&UNK_1809fd0a0);
        }
        pcVar2[1] = '\0';
        *pcVar2 = (char)uVar1 + '0';
        uVar4 = uVar4 + 2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_4);
    }
  }
  if ((int)uVar4 < param_2) {
    param_1[(int)uVar4] = 0x7d;
    uVar4 = uVar4 + 1;
  }
  return uVar4;
}





// 函数: void FUN_18074ba80(undefined8 param_1,undefined8 param_2,undefined4 *param_3)
void FUN_18074ba80(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_1,param_2,&UNK_1809581c0,param_3,*param_3);
  }
  FUN_18076b930();
  return;
}





// 函数: void FUN_18074bac0(undefined8 param_1,undefined8 param_2,float *param_3)
void FUN_18074bac0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  if (param_3 != (float *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390((double)*param_3,param_2,&UNK_1809581d8,param_3,(double)*param_3);
  }
  FUN_18076b930();
  return;
}



uint FUN_18074bb00(undefined1 *param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  if (0 < param_2) {
    *param_1 = 0x7b;
  }
  uVar4 = (uint)(0 < param_2);
  if (param_4 != 0) {
    if (param_2 <= (int)uVar4) {
      return uVar4;
    }
    fVar1 = *param_3;
    puVar2 = (undefined2 *)(param_1 + uVar4);
    if ((int)(param_2 - uVar4) < 2) {
LAB_18074bb80:
                    // WARNING: Subroutine does not return
      FUN_18076b390(puVar2,param_2 - uVar4,&UNK_18094c0a0,(double)fVar1);
    }
    if (fVar1 == 0.0) {
      *puVar2 = 0x30;
    }
    else {
      if (fVar1 != 1.0) goto LAB_18074bb80;
      *puVar2 = 0x31;
    }
    uVar4 = uVar4 + 1;
    if (1 < (longlong)param_4) {
      lVar5 = 1;
      do {
        if (param_2 <= (int)uVar4) {
          return uVar4;
        }
        iVar3 = param_2 - (uVar4 + 1);
        puVar2 = (undefined2 *)(param_1 + (longlong)(int)uVar4 + 1);
        param_1[(int)uVar4] = 0x2c;
        fVar1 = param_3[lVar5];
        if (iVar3 < 2) {
LAB_18074bbf9:
                    // WARNING: Subroutine does not return
          FUN_18076b390(puVar2,iVar3,&UNK_18094c0a0,(double)fVar1);
        }
        if (fVar1 == 0.0) {
          *puVar2 = 0x30;
        }
        else {
          if (fVar1 != 1.0) goto LAB_18074bbf9;
          *puVar2 = 0x31;
        }
        uVar4 = uVar4 + 2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_4);
    }
  }
  if ((int)uVar4 < param_2) {
    param_1[(int)uVar4] = 0x7d;
    uVar4 = uVar4 + 1;
  }
  return uVar4;
}





// 函数: void FUN_18074bc50(undefined8 param_1,undefined4 param_2,undefined4 *param_3)
void FUN_18074bc50(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_1,param_2,&UNK_1809581f8,param_3,*param_3,*(undefined2 *)(param_3 + 1),
                  *(undefined2 *)((longlong)param_3 + 6),*(undefined1 *)(param_3 + 2),
                  *(undefined1 *)((longlong)param_3 + 9),*(undefined1 *)((longlong)param_3 + 10),
                  *(undefined1 *)((longlong)param_3 + 0xb),*(undefined1 *)(param_3 + 3),
                  *(undefined1 *)((longlong)param_3 + 0xd),*(undefined1 *)((longlong)param_3 + 0xe),
                  *(undefined1 *)((longlong)param_3 + 0xf));
  }
  FUN_18076b930();
  return;
}





// 函数: void FUN_18074bc81(undefined8 param_1,undefined4 param_2,longlong param_3,undefined4 param_4)
void FUN_18074bc81(undefined8 param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined4 unaff_R15D;
  undefined4 uStack0000000000000028;
  uint uStack0000000000000030;
  uint uStack0000000000000038;
  uint uStack0000000000000040;
  uint uStack0000000000000048;
  uint uStack0000000000000050;
  undefined4 uStack0000000000000068;
  uint uStack0000000000000070;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  bVar1 = *(byte *)(param_3 + 0xb);
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  bVar2 = *(byte *)(param_3 + 8);
  *(undefined8 *)(in_RAX + 0x18) = unaff_RSI;
  bVar3 = *(byte *)(param_3 + 9);
  *(undefined8 *)(in_RAX + -0x18) = unaff_RDI;
  uStack0000000000000070 = (uint)*(byte *)(param_3 + 0xf);
  uStack0000000000000050 = (uint)bVar1;
  uStack0000000000000048 = (uint)*(byte *)(param_3 + 10);
  uStack0000000000000040 = (uint)bVar3;
  uStack0000000000000038 = (uint)bVar2;
  uStack0000000000000030 = (uint)*(ushort *)(param_3 + 6);
  uStack0000000000000028 = param_2;
  uStack0000000000000068 = param_4;
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_1,unaff_R15D,&UNK_1809581f8);
}





// 函数: void FUN_18074bd20(void)
void FUN_18074bd20(void)

{
  undefined8 uStack0000000000000068;
  undefined *puStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  
  puStack00000000000000b0 = &UNK_1809581bc;
  uStack00000000000000b8 = 0;
  uStack0000000000000068 = 0x18076b3a8;
  FUN_18076b930();
  return;
}





// 函数: void FUN_18074bd40(undefined8 param_1,undefined8 param_2,float *param_3)
void FUN_18074bd40(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uStackX_20;
  
  if (param_3 != (float *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390((double)param_3[2],(double)param_3[1],&UNK_1809581e8,param_3,(double)*param_3,
                  (double)param_3[1],(double)param_3[2]);
  }
  uStackX_20 = 0;
  FUN_18076b930(param_1,param_2,&UNK_1809581bc,&uStackX_20);
  return;
}





// 函数: void FUN_18074bdb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)
void FUN_18074bdb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  if (param_3 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_1,param_2,&UNK_1809581c8,param_3,*param_3);
  }
  FUN_18076b930();
  return;
}





// 函数: void FUN_18074bdf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)
void FUN_18074bdf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  if (param_3 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_1,param_2,&UNK_1809581d0,param_3,*param_3);
  }
  FUN_18076b930();
  return;
}





// 函数: void FUN_18074be30(undefined8 param_1,undefined8 param_2,char *param_3)
void FUN_18074be30(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined *puVar1;
  
  if (param_3 != (char *)0x0) {
    puVar1 = &UNK_180a06420;
    if (*param_3 != '\0') {
      puVar1 = &UNK_180a06418;
    }
                    // WARNING: Subroutine does not return
    FUN_18076b390(param_1,param_2,&UNK_1809581e0,param_3,puVar1);
  }
  FUN_18076b930();
  return;
}





// 函数: void FUN_18074be90(undefined8 param_1,int param_2,char param_3)
void FUN_18074be90(undefined8 param_1,int param_2,char param_3)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_180a06420;
  if (param_3 != '\0') {
    puVar2 = &UNK_180a06418;
  }
  iVar1 = func_0x00018076b690(puVar2);
  if (iVar1 + 1 <= param_2) {
                    // WARNING: Subroutine does not return
    memcpy(param_1,puVar2,(longlong)(iVar1 + 1));
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_1,param_2,&UNK_1809fe7f8,puVar2);
}



ulonglong FUN_18074bf10(longlong *param_1,int param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  short sVar12;
  longlong *plVar13;
  ulonglong uVar14;
  bool bVar15;
  int aiStackX_10 [2];
  int aiStackX_18 [2];
  undefined8 uStackX_20;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  aiStackX_10[0] = param_2;
  iVar4 = (**(code **)(*param_1 + 0x138))(param_1,param_3,0);
  if ((iVar4 == 0) && (uVar6 = (**(code **)(*param_1 + 0x118))(param_1,param_3), (int)uVar6 != 0)) {
    return uVar6;
  }
  uStackX_20 = param_1[0xc];
  lVar10 = param_1[0xd];
  lVar3 = param_1[0xe];
  if (uStackX_20 == 0) {
    return 9;
  }
  uVar6 = 0;
  if (aiStackX_10[0] == -1) {
    aiStackX_10[0] = 0;
  }
  else {
    if (aiStackX_10[0] == -3) {
      aiStackX_10[0] = (int)param_1[3];
    }
    else if ((aiStackX_10[0] == -2) &&
            (uVar7 = (**(code **)(*param_1 + 0x138))(param_1,lVar3,aiStackX_10), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (aiStackX_10[0] < 0) {
      return 0x1f;
    }
  }
  if ((int)param_1[3] < aiStackX_10[0]) {
    return 0x1f;
  }
  *(longlong **)(param_3 + 0x1f8) = param_1;
  uVar7 = FUN_1807603e0(param_3);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(lVar10 + 8);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
  LOCK();
  *(uint *)(param_3 + 100) = *(uint *)(param_3 + 100) | 0x40;
  UNLOCK();
  uVar7 = FUN_180762070(param_3,1);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  lVar10 = param_1[1];
  bVar15 = lVar10 != 0;
  if (bVar15) {
    func_0x000180743c20(lVar10,1);
  }
  uVar7 = uStackX_20;
  uVar5 = FUN_1807593d0(uStackX_20,param_3,0xffffffff,aiStackX_10[0],1,0);
  if ((uVar5 != 0) ||
     ((aiStackX_10[0] == 0 && (uVar5 = FUN_18076f4f0(lVar3,param_3 + 8,0), uVar5 != 0)))) {
    if (!bVar15) {
      return (ulonglong)uVar5;
    }
    if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar10,1);
    }
    return (ulonglong)uVar5;
  }
  if ((bVar15) && (lVar10 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar10,1);
  }
  plVar1 = param_1 + 0x22;
  for (plVar13 = (longlong *)*plVar1; plVar13 != plVar1; plVar13 = (longlong *)*plVar13) {
    uVar9 = plVar13[2];
    sVar12 = (short)(uVar9 >> 0x10);
    uStackX_20 = uVar9;
    if (aiStackX_10[0] <= sVar12) {
      uStackX_20._4_4_ = (undefined4)(uVar9 >> 0x20);
      uStackX_20._0_4_ = CONCAT22(sVar12 + 1,(short)uVar9);
      plVar13[2] = uStackX_20;
    }
  }
  iVar4 = func_0x00018075e5b0(param_3,0xffffffff,aiStackX_18);
  if (iVar4 == 0) {
    puVar2 = (undefined8 *)(param_3 + 0x90);
    if (((((undefined8 *)*puVar2 != puVar2) || (*(undefined8 **)(param_3 + 0x98) != puVar2)) ||
        (0x7ffe < aiStackX_18[0])) || (0x7ffe < aiStackX_10[0])) {
      return 0x1c;
    }
    uStackX_20._0_4_ = CONCAT22((short)aiStackX_10[0],(short)aiStackX_18[0]);
    *(ulonglong *)(param_3 + 0xa0) = uStackX_20;
    plVar13 = (longlong *)*plVar1;
    if (plVar13 != plVar1) {
      uVar8 = (ulonglong)plVar13[2] >> 0x10 & 0xffff;
      uVar9 = (ulonglong)plVar13[2] >> 0x10;
      do {
        sVar12 = (short)uVar9;
        if (aiStackX_10[0] <= (short)uVar8) break;
        plVar13 = (longlong *)*plVar13;
        uVar8 = (ulonglong)plVar13[2] >> 0x10;
        sVar12 = (short)((ulonglong)plVar13[2] >> 0x10);
        uVar9 = uVar8;
      } while (plVar13 != plVar1);
      if ((plVar13 != plVar1) && (sVar12 == aiStackX_10[0])) {
        return 0x1c;
      }
    }
    *(longlong *)(param_3 + 0x98) = plVar13[1];
    *puVar2 = plVar13;
    plVar13[1] = (longlong)puVar2;
    **(longlong **)(param_3 + 0x98) = (longlong)puVar2;
    uVar9 = (**(code **)(*param_1 + 0x208))(param_1);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
  }
  lVar10 = FUN_180741e10(param_1[1] + 0x10848,(int)param_1[3] * 8 + 8,&DAT_18098bc73,0,0,0,1);
  if (lVar10 == 0) {
    uVar6 = 0x26;
  }
  else {
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    uVar9 = uVar6;
    uVar8 = uVar6;
    uVar14 = uVar6;
    if (0 < (int)param_1[3]) {
      do {
        uVar11 = param_3;
        if ((int)uVar9 != aiStackX_10[0]) {
          uVar11 = uVar7;
          if (param_1[2] != 0) {
            uVar11 = *(ulonglong *)(param_1[2] + uVar14);
          }
          uVar14 = uVar14 + 8;
        }
        *(ulonglong *)(lVar10 + uVar8) = uVar11;
        uVar5 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar5;
        uVar8 = uVar8 + 8;
      } while ((int)uVar5 < (int)param_1[3]);
    }
    if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(param_1[1] + 0x10848,param_1[2],&DAT_18098bc73,0,1);
    }
    param_1[2] = lVar10;
    if ((aiStackX_10[0] == 0) || (aiStackX_10[0] == (int)param_1[3] + -1)) {
      uVar7 = uVar6;
      if (aiStackX_10[0] == 0) {
        uVar7 = param_3;
      }
      if (aiStackX_10[0] == (int)param_1[3] + -1) {
        uVar6 = param_3;
      }
      uVar6 = (**(code **)(*param_1 + 0x1e8))(param_1,uVar7,uVar6);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}



ulonglong FUN_18074c014(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  short sVar10;
  longlong *plVar11;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  ulonglong unaff_R12;
  bool bVar12;
  undefined8 in_stack_00000040;
  int in_stack_00000098;
  int in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  lVar3 = _uStack00000000000000a8;
  LOCK();
  *(uint *)(unaff_RSI + 100) = *(uint *)(unaff_RSI + 100) | 0x40;
  UNLOCK();
  uVar6 = FUN_180762070();
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  lVar8 = unaff_RBX[1];
  bVar12 = lVar8 != 0;
  if (bVar12) {
    func_0x000180743c20(lVar8,1);
  }
  uVar4 = FUN_1807593d0(_uStack00000000000000a8);
  if ((uVar4 != 0) ||
     ((in_stack_00000098 == (int)unaff_R12 &&
      (uVar4 = FUN_18076f4f0(in_stack_00000040,unaff_RSI + 8,0), uVar4 != 0)))) {
    if (!bVar12) {
      return (ulonglong)uVar4;
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar8,1);
    }
    return (ulonglong)uVar4;
  }
  if ((bVar12) && (lVar8 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar8,1);
  }
  plVar1 = unaff_RBX + 0x22;
  for (plVar11 = (longlong *)*plVar1; plVar11 != plVar1; plVar11 = (longlong *)*plVar11) {
    lVar8 = plVar11[2];
    sVar10 = (short)((ulonglong)lVar8 >> 0x10);
    _uStack00000000000000a8 = lVar8;
    if (in_stack_00000098 <= sVar10) {
      uStack00000000000000ac = (undefined4)((ulonglong)lVar8 >> 0x20);
      uStack00000000000000a8 = CONCAT22(sVar10 + 1,(short)lVar8);
      plVar11[2] = _uStack00000000000000a8;
    }
  }
  iVar5 = func_0x00018075e5b0();
  if (iVar5 == 0) {
    puVar2 = (undefined8 *)(unaff_RSI + 0x90);
    if (((((undefined8 *)*puVar2 != puVar2) || (*(undefined8 **)(unaff_RSI + 0x98) != puVar2)) ||
        (0x7ffe < in_stack_000000a0)) || (0x7ffe < in_stack_00000098)) {
      return 0x1c;
    }
    uStack00000000000000ac = (undefined4)((ulonglong)_uStack00000000000000a8 >> 0x20);
    uStack00000000000000a8 = CONCAT22((short)in_stack_00000098,(short)in_stack_000000a0);
    *(longlong *)(unaff_RSI + 0xa0) = _uStack00000000000000a8;
    plVar11 = (longlong *)*plVar1;
    if (plVar11 != plVar1) {
      uVar7 = (ulonglong)plVar11[2] >> 0x10 & 0xffff;
      uVar6 = (ulonglong)plVar11[2] >> 0x10;
      do {
        sVar10 = (short)uVar6;
        if (in_stack_00000098 <= (short)uVar7) break;
        plVar11 = (longlong *)*plVar11;
        uVar7 = (ulonglong)plVar11[2] >> 0x10;
        sVar10 = (short)((ulonglong)plVar11[2] >> 0x10);
        uVar6 = uVar7;
      } while (plVar11 != plVar1);
      if ((plVar11 != plVar1) && (sVar10 == in_stack_00000098)) {
        return 0x1c;
      }
    }
    *(longlong *)(unaff_RSI + 0x98) = plVar11[1];
    *puVar2 = plVar11;
    plVar11[1] = (longlong)puVar2;
    **(longlong **)(unaff_RSI + 0x98) = (longlong)puVar2;
    uVar6 = (**(code **)(*unaff_RBX + 0x208))();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  lVar8 = FUN_180741e10(unaff_RBX[1] + 0x10848,(int)unaff_RBX[3] * 8 + 8,&DAT_18098bc73,0);
  if (lVar8 == 0) {
    uVar6 = 0x26;
  }
  else {
    *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
    uVar7 = unaff_R12 & 0xffffffff;
    uVar6 = unaff_R12;
    if ((int)unaff_R12 < (int)unaff_RBX[3]) {
      do {
        lVar9 = unaff_RSI;
        if ((int)uVar7 != in_stack_00000098) {
          lVar9 = lVar3;
          if (unaff_RBX[2] != 0) {
            lVar9 = *(longlong *)(unaff_RBX[2] + uVar6);
          }
          uVar6 = uVar6 + 8;
        }
        *(longlong *)(lVar8 + unaff_R12) = lVar9;
        uVar4 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar4;
        unaff_R12 = unaff_R12 + 8;
      } while ((int)uVar4 < (int)unaff_RBX[3]);
    }
    if (unaff_RBX[2] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(unaff_RBX[1] + 0x10848,unaff_RBX[2],&DAT_18098bc73,0,1);
    }
    unaff_RBX[2] = lVar8;
    if (((in_stack_00000098 != 0) && (in_stack_00000098 != (int)unaff_RBX[3] + -1)) ||
       (uVar6 = (**(code **)(*unaff_RBX + 0x1e8))(), (int)uVar6 == 0)) {
      uVar6 = 0;
    }
  }
  return uVar6;
}



ulonglong FUN_18074c039(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  short sVar10;
  longlong *plVar11;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R12;
  bool bVar12;
  undefined8 in_stack_00000040;
  int in_stack_00000098;
  int in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  lVar3 = _uStack00000000000000a8;
  bVar12 = unaff_RDI != 0;
  if (bVar12) {
    func_0x000180743c20();
  }
  uVar4 = FUN_1807593d0(_uStack00000000000000a8);
  if ((uVar4 != 0) ||
     ((in_stack_00000098 == (int)unaff_R12 &&
      (uVar4 = FUN_18076f4f0(in_stack_00000040,unaff_RSI + 8,0), uVar4 != 0)))) {
    if (!bVar12) {
      return (ulonglong)uVar4;
    }
    if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
      FUN_180743d60();
    }
    return (ulonglong)uVar4;
  }
  if ((bVar12) && (unaff_RDI != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  plVar1 = unaff_RBX + 0x22;
  for (plVar11 = (longlong *)*plVar1; plVar11 != plVar1; plVar11 = (longlong *)*plVar11) {
    lVar8 = plVar11[2];
    sVar10 = (short)((ulonglong)lVar8 >> 0x10);
    _uStack00000000000000a8 = lVar8;
    if (in_stack_00000098 <= sVar10) {
      uStack00000000000000ac = (undefined4)((ulonglong)lVar8 >> 0x20);
      uStack00000000000000a8 = CONCAT22(sVar10 + 1,(short)lVar8);
      plVar11[2] = _uStack00000000000000a8;
    }
  }
  iVar5 = func_0x00018075e5b0();
  if (iVar5 == 0) {
    puVar2 = (undefined8 *)(unaff_RSI + 0x90);
    if (((((undefined8 *)*puVar2 != puVar2) || (*(undefined8 **)(unaff_RSI + 0x98) != puVar2)) ||
        (0x7ffe < in_stack_000000a0)) || (0x7ffe < in_stack_00000098)) {
      return 0x1c;
    }
    uStack00000000000000ac = (undefined4)((ulonglong)_uStack00000000000000a8 >> 0x20);
    uStack00000000000000a8 = CONCAT22((short)in_stack_00000098,(short)in_stack_000000a0);
    *(longlong *)(unaff_RSI + 0xa0) = _uStack00000000000000a8;
    plVar11 = (longlong *)*plVar1;
    if (plVar11 != plVar1) {
      uVar6 = (ulonglong)plVar11[2] >> 0x10 & 0xffff;
      uVar7 = (ulonglong)plVar11[2] >> 0x10;
      do {
        sVar10 = (short)uVar7;
        if (in_stack_00000098 <= (short)uVar6) break;
        plVar11 = (longlong *)*plVar11;
        uVar6 = (ulonglong)plVar11[2] >> 0x10;
        sVar10 = (short)((ulonglong)plVar11[2] >> 0x10);
        uVar7 = uVar6;
      } while (plVar11 != plVar1);
      if ((plVar11 != plVar1) && (sVar10 == in_stack_00000098)) {
        return 0x1c;
      }
    }
    *(longlong *)(unaff_RSI + 0x98) = plVar11[1];
    *puVar2 = plVar11;
    plVar11[1] = (longlong)puVar2;
    **(longlong **)(unaff_RSI + 0x98) = (longlong)puVar2;
    uVar7 = (**(code **)(*unaff_RBX + 0x208))();
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  lVar8 = FUN_180741e10(unaff_RBX[1] + 0x10848,(int)unaff_RBX[3] * 8 + 8,&DAT_18098bc73,0);
  if (lVar8 == 0) {
    uVar7 = 0x26;
  }
  else {
    *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
    uVar6 = unaff_R12 & 0xffffffff;
    uVar7 = unaff_R12;
    if ((int)unaff_R12 < (int)unaff_RBX[3]) {
      do {
        lVar9 = unaff_RSI;
        if ((int)uVar6 != in_stack_00000098) {
          lVar9 = lVar3;
          if (unaff_RBX[2] != 0) {
            lVar9 = *(longlong *)(unaff_RBX[2] + uVar7);
          }
          uVar7 = uVar7 + 8;
        }
        *(longlong *)(lVar8 + unaff_R12) = lVar9;
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
        unaff_R12 = unaff_R12 + 8;
      } while ((int)uVar4 < (int)unaff_RBX[3]);
    }
    if (unaff_RBX[2] != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(unaff_RBX[1] + 0x10848,unaff_RBX[2],&DAT_18098bc73,0,1);
    }
    unaff_RBX[2] = lVar8;
    if (((in_stack_00000098 != 0) && (in_stack_00000098 != (int)unaff_RBX[3] + -1)) ||
       (uVar7 = (**(code **)(*unaff_RBX + 0x1e8))(), (int)uVar7 == 0)) {
      uVar7 = 0;
    }
  }
  return uVar7;
}





// 函数: void FUN_18074c0e4(void)
void FUN_18074c0e4(void)

{
  return;
}





