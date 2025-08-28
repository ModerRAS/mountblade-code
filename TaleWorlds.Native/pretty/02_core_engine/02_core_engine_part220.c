#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part220.c - 8 个函数

// 函数: void FUN_180196d20(longlong param_1)
void FUN_180196d20(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x48) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x28) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 8) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180196de0(undefined8 *param_1)
void FUN_180196de0(undefined8 *param_1)

{
  if (param_1[0x46] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3e] = &UNK_180a3c3e0;
  if (param_1[0x3f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3e] = &UNK_18098bcb0;
  param_1[0x3a] = &UNK_180a3c3e0;
  if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3a] = &UNK_18098bcb0;
  param_1[0x36] = &UNK_180a3c3e0;
  if (param_1[0x37] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x36] = &UNK_18098bcb0;
  param_1[0x32] = &UNK_180a3c3e0;
  if (param_1[0x33] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x32] = &UNK_18098bcb0;
  param_1[0x2e] = &UNK_180a3c3e0;
  if (param_1[0x2f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2e] = &UNK_18098bcb0;
  if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x38))();
  }
  param_1[0x25] = &UNK_180a3c3e0;
  if (param_1[0x26] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x25] = &UNK_18098bcb0;
  param_1[0x1d] = &UNK_180a3c3e0;
  if (param_1[0x1e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1d] = &UNK_18098bcb0;
  param_1[0x19] = &UNK_180a3c3e0;
  if (param_1[0x1a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = &UNK_18098bcb0;
  param_1[0x15] = &UNK_180a3c3e0;
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x15] = &UNK_18098bcb0;
  param_1[0x11] = &UNK_180a3c3e0;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x11] = &UNK_18098bcb0;
  param_1[0xd] = &UNK_180a3c3e0;
  if (param_1[0xe] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xd] = &UNK_18098bcb0;
  param_1[9] = &UNK_180a3c3e0;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[9] = &UNK_18098bcb0;
  param_1[4] = &UNK_180a3c3e0;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = &UNK_18098bcb0;
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180197080(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180197080(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plVar1 = (longlong *)param_1[1];
  for (plVar3 = (longlong *)*param_1; plVar3 != plVar1; plVar3 = plVar3 + 8) {
    plVar2 = (longlong *)plVar3[7];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != plVar3,param_3,param_4,uVar4);
      plVar3[7] = 0;
    }
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_1801970a0(longlong param_1)
void FUN_1801970a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801970c0(undefined8 **param_1,float param_2)
void FUN_1801970c0(undefined8 **param_1,float param_2)

{
  short *psVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 ****ppppuStackX_8;
  float afStackX_10 [2];
  undefined8 ****ppppuStackX_18;
  undefined8 uVar17;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_80;
  float *pfStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  
  uVar17 = 0xfffffffffffffffe;
  afStackX_10[0] = param_2;
  if ((((param_1[99] != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x2a61) != '\0')) &&
      (*(char *)((longlong)param_1 + 0x2a62) != '\0')) && (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0)) {
    (**(code **)(*param_1[99] + 0x40))();
  }
  FUN_180397d70(param_1 + 0xc0fc,param_1 + 0x53a);
  if (((param_1[99] != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x2a61) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x2a62) != '\0' && (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0)))) {
    (**(code **)(*param_1[99] + 0x40))();
  }
  ppppuStackX_8 = (undefined8 ****)&ppuStack_a0;
  ppuStack_98 = (undefined8 **)afStackX_10;
  ppuStack_90 = (undefined8 **)&UNK_1801bca50;
  puStack_88 = &UNK_1801bca40;
  ppuStack_a0 = param_1;
  FUN_18015b810(&ppuStack_a0,0,(longlong)param_1[0x53b] - (longlong)param_1[0x53a] >> 3,0x10,
                0xffffffffffffffff,&ppuStack_a0,uVar17);
  if (((param_1[99] != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x2a61) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x2a62) != '\0' && (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0)))) {
    (**(code **)(*param_1[99] + 0x40))();
  }
  iVar10 = (int)((longlong)param_1[0x537] - (longlong)param_1[0x536] >> 3) + -1;
  lVar14 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      lVar3 = param_1[0x536][lVar14];
      sVar2 = *(short *)(lVar3 + 0x40);
      if (sVar2 != 0) {
        if (sVar2 == 1) {
          if (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0) {
            FUN_1802fddb0(lVar3);
          }
        }
        else if (sVar2 == 4) {
          if ((*(longlong *)(lVar3 + 0xd0) != 0) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + 0x1000) != 0)) {
            FUN_1802fe7c0(lVar3,0);
          }
        }
        else if (sVar2 == 2) {
          if (*(float *)(lVar3 + 0x3c) < 0.0) {
            *(undefined4 *)(lVar3 + 0x34) = 0x3dcccccd;
          }
          else {
            *(float *)(lVar3 + 0x34) = *(float *)(lVar3 + 0x3c) + 1.1920929e-07;
          }
          *(undefined2 *)(lVar3 + 0x40) = 3;
          if ((*(longlong *)(lVar3 + 0x130) != 0) || (*(longlong *)(lVar3 + 0x138) != 0)) {
            (**(code **)(lVar3 + 0x138))(*(longlong *)(lVar3 + 0x130),lVar3);
          }
          if (((byte)*(ushort *)(lVar3 + 0xa8) >> 2 & 1) == 0) {
            *(ushort *)(lVar3 + 0xa8) = *(ushort *)(lVar3 + 0xa8) | 4;
            lVar3 = *(longlong *)(lVar3 + 0x10);
            psVar1 = (short *)(lVar3 + 0x2b0);
            *psVar1 = *psVar1 + 1;
            if (*(longlong *)(lVar3 + 0x168) != 0) {
              func_0x0001802eeba0();
            }
          }
        }
      }
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  if ((((param_1[99] != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x2a61) != '\0')) &&
      (*(char *)((longlong)param_1 + 0x2a62) != '\0')) && (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0)) {
    (**(code **)(*param_1[99] + 0x40))();
  }
  FUN_1801b02f0(param_1);
  if (((param_1[99] != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x2a61) != '\0')) &&
     ((*(char *)((longlong)param_1 + 0x2a62) != '\0' && (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0)))) {
    (**(code **)(*param_1[99] + 0x40))();
  }
  FUN_1802d1da0(param_1[0x4c],afStackX_10[0]);
  FUN_1802d1e30(param_1[0x4c]);
  if (*(int *)(_DAT_180c86870 + 0x340) != 0) {
    (**(code **)(_DAT_180c8a9c0 + 0x118))
              (*(undefined4 *)((longlong)param_1 + 0x286c),afStackX_10[0]);
  }
  ppuStack_a0 = (undefined8 **)0x0;
  ppuStack_98 = (undefined8 **)0x0;
  ppuVar16 = (undefined8 **)0x0;
  ppuStack_90 = (undefined8 **)0x0;
  puStack_88 = (undefined *)CONCAT44(puStack_88._4_4_,3);
  ppppuStackX_8 = (undefined8 ****)((ulonglong)ppppuStackX_8 & 0xffffffff00000000);
  puVar12 = param_1[0x50e];
  if ((longlong)param_1[0x50f] - (longlong)puVar12 >> 3 != 0) {
    ppppuStackX_18 = (undefined8 ****)0x0;
    ppuVar11 = ppuVar16;
    do {
      plVar4 = *(longlong **)((longlong)puVar12 + (longlong)ppppuStackX_18);
      (**(code **)(*plVar4 + 0x88))(plVar4,afStackX_10[0]);
      cVar8 = (**(code **)(*plVar4 + 0x98))(plVar4);
      iVar10 = (int)ppuVar11;
      if (cVar8 != '\0') {
        if (ppuStack_98 < ppuStack_90) {
          *ppuStack_98 = plVar4;
          ppuStack_98 = ppuStack_98 + 1;
        }
        else {
          lVar14 = (longlong)ppuStack_98 - (longlong)ppuStack_a0 >> 3;
          if (lVar14 == 0) {
            lVar14 = 1;
LAB_1801974aa:
            ppuVar11 = (undefined8 **)
                       FUN_18062b420(_DAT_180c8ed18,lVar14 * 8,(ulonglong)puStack_88 & 0xff);
          }
          else {
            lVar14 = lVar14 * 2;
            ppuVar11 = ppuVar16;
            if (lVar14 != 0) goto LAB_1801974aa;
          }
          if (ppuStack_a0 != ppuStack_98) {
                    // WARNING: Subroutine does not return
            memmove(ppuVar11,ppuStack_a0,(longlong)ppuStack_98 - (longlong)ppuStack_a0);
          }
          *ppuVar11 = plVar4;
          if (ppuStack_a0 != (undefined8 **)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_90 = ppuVar11 + lVar14;
          iVar10 = (int)ppppuStackX_8;
          ppuStack_a0 = ppuVar11;
          ppuStack_98 = ppuVar11 + 1;
        }
      }
      uVar13 = iVar10 + 1;
      ppuVar11 = (undefined8 **)(ulonglong)uVar13;
      ppppuStackX_8 = (undefined8 ****)CONCAT44(ppppuStackX_8._4_4_,uVar13);
      ppppuStackX_18 = (undefined8 ****)((longlong)ppppuStackX_18 + 8);
      puVar12 = param_1[0x50e];
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((longlong)param_1[0x50f] - (longlong)puVar12 >> 3));
  }
  ppppuStackX_8 = &pppuStack_80;
  pppuStack_80 = &ppuStack_a0;
  pfStack_78 = afStackX_10;
  puStack_70 = &UNK_1801bca00;
  pcStack_68 = FUN_1801bc9a0;
  FUN_18015b810(&pppuStack_80,0,(longlong)ppuStack_98 - (longlong)ppuStack_a0 >> 3,0x10,
                0xffffffffffffffff,&pppuStack_80);
  fVar7 = afStackX_10[0];
  uVar17 = _DAT_180c82868;
  if (ppuStack_a0 == (undefined8 **)0x0) {
    pfVar5 = (float *)param_1[0x4c];
    ppppuStackX_18 = &ppppuStackX_8;
    ppppuStackX_8 = *(undefined8 *****)(pfVar5 + 0xdc);
    if (ppppuStackX_8 != (undefined8 ****)0x0) {
      (*(code *)(*ppppuStackX_8)[5])();
    }
    FUN_18005e6a0(uVar17,&ppppuStackX_8,0);
    *pfVar5 = fVar7 + *pfVar5;
    if (((param_1[99] != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x2a61) != '\0')) &&
       ((*(char *)((longlong)param_1 + 0x2a62) != '\0' && (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0))))
    {
      (**(code **)(*param_1[99] + 0x40))();
    }
    ppuVar11 = ppuVar16;
    ppuVar15 = ppuVar16;
    if ((longlong)param_1[0x53f] - (longlong)param_1[0x53e] >> 3 != 0) {
      do {
        FUN_1803005b0(*(undefined8 *)((longlong)ppuVar11 + (longlong)param_1[0x53e]));
        uVar13 = (int)ppuVar15 + 1;
        ppuVar11 = ppuVar11 + 1;
        ppuVar15 = (undefined8 **)(ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 <
               (ulonglong)((longlong)param_1[0x53f] - (longlong)param_1[0x53e] >> 3));
    }
    if ((((param_1[99] != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x2a61) != '\0')) &&
        (*(char *)((longlong)param_1 + 0x2a62) != '\0')) && (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0))
    {
      (**(code **)(*param_1[99] + 0x40))();
    }
    puVar12 = param_1[0xb65];
    ppuVar11 = ppuVar16;
    if ((longlong)param_1[0xb66] - (longlong)puVar12 >> 5 != 0) {
      do {
        iVar10 = *(int *)((longlong)puVar12 + (longlong)ppuVar16);
        if (iVar10 == 0) {
          FUN_1802ee610(*(undefined8 *)((longlong)(puVar12 + 1) + (longlong)ppuVar16),
                        *(undefined8 *)((longlong)(puVar12 + 3) + (longlong)ppuVar16));
        }
        else if (iVar10 == 1) {
          FUN_18039f2b0(*(undefined8 *)((longlong)(puVar12 + 1) + (longlong)ppuVar16),
                        *(undefined8 *)((longlong)(puVar12 + 3) + (longlong)ppuVar16));
        }
        else if (iVar10 == 2) {
          uVar17 = *(undefined8 *)((longlong)(puVar12 + 1) + (longlong)ppuVar16);
          uVar6 = *(undefined8 *)((longlong)(puVar12 + 3) + (longlong)ppuVar16);
          uVar9 = FUN_1802fc790(uVar17,uVar6);
          FUN_1802fca80(uVar17,uVar6,uVar9);
        }
        else if (iVar10 == 3) {
          uVar17 = *(undefined8 *)((longlong)(puVar12 + 1) + (longlong)ppuVar16);
          uVar6 = *(undefined8 *)((longlong)(puVar12 + 2) + (longlong)ppuVar16);
          ppppuStackX_18 = &ppppuStackX_8;
          ppppuStackX_8 = *(undefined8 *****)((longlong)(puVar12 + 3) + (longlong)ppuVar16);
          if (ppppuStackX_8 != (undefined8 ****)0x0) {
            (*(code *)(*ppppuStackX_8)[5])();
          }
          FUN_1802f9710(uVar17,&ppppuStackX_8,uVar6);
        }
        uVar13 = (int)ppuVar11 + 1;
        ppuVar16 = ppuVar16 + 4;
        puVar12 = param_1[0xb65];
        ppuVar11 = (undefined8 **)(ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 <
               (ulonglong)((longlong)param_1[0xb66] - (longlong)puVar12 >> 5));
    }
    param_1[0xb66] = puVar12;
    param_1[0x53b] = param_1[0x53a];
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1801977e0(longlong *param_1,int param_2,int param_3)
void FUN_1801977e0(longlong *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  for (lVar8 = (longlong)param_2; lVar8 < param_3; lVar8 = lVar8 + 1) {
    lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x29d0) + lVar8 * 8);
    uVar1 = *(undefined4 *)param_1[1];
    if (((*(byte *)(lVar2 + 0x2e9) & 2) != 0) || ((*(uint *)(lVar2 + 0x2ac) & 0x100) == 0)) {
      lVar7 = 0;
      iVar6 = (int)(*(longlong *)(lVar2 + 0x1e8) - *(longlong *)(lVar2 + 0x1e0) >> 3);
      if (0 < iVar6) {
        do {
          plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x1e0) + lVar7 * 8);
          (**(code **)(*plVar3 + 0x1b8))(plVar3,uVar1,lVar2 + 0x70);
          cVar5 = (**(code **)(*plVar3 + 0x138))(plVar3);
          if (cVar5 != '\0') {
            FUN_1801985e0(*(undefined8 *)(lVar2 + 0x20),plVar3,0,lVar2,0);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar6);
      }
      if (((*(longlong *)(lVar2 + 0x260) != 0) &&
          (FUN_1802fa820(*(longlong *)(lVar2 + 0x260),uVar1,lVar2 + 0x70),
          (*(byte *)(*(longlong *)(lVar2 + 0x260) + 0xa8) >> 2 & 1) != 0)) &&
         (*(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1,
         *(longlong *)(lVar2 + 0x168) != 0)) {
        func_0x0001802eeba0();
      }
      iVar6 = (int)(*(longlong *)(lVar2 + 0x1c8) - *(longlong *)(lVar2 + 0x1c0) >> 3);
      if ((0 < iVar6) &&
         ((((*(byte *)(lVar2 + 0x2e8) & 0x10) != 0 ||
           ((*(longlong **)(lVar2 + 0x270) != (longlong *)0x0 &&
            (cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x270) + 0x70))(), cVar5 != '\0')))) ||
          ((*(uint *)(lVar2 + 0x2ac) & 0x800000) == 0)))) {
        lVar7 = 0;
        if (0 < (longlong)iVar6) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x1c0) + lVar7 * 8);
            if ((*(uint *)(lVar4 + 0x2ac) & 0x20000000) == 0) {
              FUN_1802ebcb0(lVar4,uVar1,1);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar6);
        }
      }
    }
    if ((*(longlong *)(lVar2 + 0x260) != 0) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x260) + 0x28) == 0)) {
      FUN_1803005b0();
    }
    if (*(short *)(lVar2 + 0x2b0) != *(short *)(lVar2 + 0x2b4)) {
      if (*(char *)(lVar2 + 0x2d8) == '\0') {
        FUN_1802e7e20(lVar2);
      }
      else {
        FUN_18063ad30(*(longlong *)(lVar2 + 0x28),*(longlong *)(lVar2 + 0x28) + 0xf8,lVar2 + 0x70);
      }
      *(undefined2 *)(lVar2 + 0x2b0) = *(undefined2 *)(lVar2 + 0x2b4);
    }
  }
  return;
}





// 函数: void FUN_1801977ff(void)
void FUN_1801977ff(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong in_RAX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar7;
  longlong *unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x20) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R14;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  do {
    lVar2 = *(longlong *)(*(longlong *)(*unaff_R12 + 0x29d0) + unaff_R15 * 8);
    uVar1 = *(undefined4 *)unaff_R12[1];
    if (((*(byte *)(lVar2 + 0x2e9) & 2) != 0) || ((*(uint *)(lVar2 + 0x2ac) & 0x100) == 0)) {
      lVar7 = 0;
      iVar6 = (int)(*(longlong *)(lVar2 + 0x1e8) - *(longlong *)(lVar2 + 0x1e0) >> 3);
      if (0 < iVar6) {
        do {
          plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x1e0) + lVar7 * 8);
          (**(code **)(*plVar3 + 0x1b8))(plVar3,uVar1,lVar2 + 0x70);
          cVar5 = (**(code **)(*plVar3 + 0x138))(plVar3);
          if (cVar5 != '\0') {
            FUN_1801985e0(*(undefined8 *)(lVar2 + 0x20),plVar3,0,lVar2,0);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar6);
      }
      if (*(longlong *)(lVar2 + 0x260) != 0) {
        FUN_1802fa820(*(longlong *)(lVar2 + 0x260),uVar1,lVar2 + 0x70);
        if ((*(byte *)(*(longlong *)(lVar2 + 0x260) + 0xa8) >> 2 & 1) != 0) {
          *(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1;
          if (*(longlong *)(lVar2 + 0x168) != 0) {
            func_0x0001802eeba0();
          }
        }
      }
      iVar6 = (int)(*(longlong *)(lVar2 + 0x1c8) - *(longlong *)(lVar2 + 0x1c0) >> 3);
      if (0 < iVar6) {
        if ((*(byte *)(lVar2 + 0x2e8) & 0x10) == 0) {
          if (*(longlong **)(lVar2 + 0x270) != (longlong *)0x0) {
            cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x270) + 0x70))();
            if (cVar5 != '\0') goto LAB_180197948;
          }
          if ((*(uint *)(lVar2 + 0x2ac) & 0x800000) != 0) goto LAB_18019797c;
        }
LAB_180197948:
        lVar7 = 0;
        if (0 < (longlong)iVar6) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x1c0) + lVar7 * 8);
            if ((*(uint *)(lVar4 + 0x2ac) & 0x20000000) == 0) {
              FUN_1802ebcb0(lVar4,uVar1,1);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar6);
        }
      }
    }
LAB_18019797c:
    if ((*(longlong *)(lVar2 + 0x260) != 0) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x260) + 0x28) == 0)) {
      FUN_1803005b0();
    }
    if (*(short *)(lVar2 + 0x2b0) != *(short *)(lVar2 + 0x2b4)) {
      if (*(char *)(lVar2 + 0x2d8) == '\0') {
        FUN_1802e7e20(lVar2);
      }
      else {
        FUN_18063ad30(*(longlong *)(lVar2 + 0x28),*(longlong *)(lVar2 + 0x28) + 0xf8,lVar2 + 0x70);
      }
      *(undefined2 *)(lVar2 + 0x2b0) = *(undefined2 *)(lVar2 + 0x2b4);
    }
    unaff_R15 = unaff_R15 + 1;
    if (unaff_R13 <= unaff_R15) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180197a06(void)
void FUN_180197a06(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



