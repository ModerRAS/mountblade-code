#include "TaleWorlds.Native.Split.h"

// 99_part_08_part003.c - 11 个函数

// 函数: void FUN_1804de090(longlong *param_1,undefined8 param_2)
void FUN_1804de090(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  puVar11 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)*param_1;
  lVar12 = ((longlong)puVar11 - (longlong)puVar7) / 0x68;
  puVar6 = (undefined8 *)0x0;
  if (lVar12 == 0) {
    lVar12 = 1;
  }
  else {
    lVar12 = lVar12 * 2;
    if (lVar12 == 0) goto LAB_1804de118;
  }
  puVar6 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x68,(char)param_1[3],puVar7,0xfffffffffffffffe);
  puVar11 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)*param_1;
LAB_1804de118:
  puVar9 = puVar6;
  if (puVar7 != puVar11) {
    lVar8 = (longlong)puVar6 - (longlong)puVar7;
    puVar7 = puVar7 + 9;
    do {
      uVar5 = puVar7[-8];
      *puVar9 = puVar7[-9];
      puVar9[1] = uVar5;
      uVar5 = puVar7[-6];
      puVar9[2] = puVar7[-7];
      puVar9[3] = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar7 + -0x24);
      uVar3 = *(undefined4 *)(puVar7 + -4);
      uVar4 = *(undefined4 *)((longlong)puVar7 + -0x1c);
      *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar7 + -5);
      *(undefined4 *)((longlong)puVar9 + 0x24) = uVar2;
      *(undefined4 *)(puVar9 + 5) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar4;
      uVar5 = puVar7[-2];
      puVar9[6] = puVar7[-3];
      puVar9[7] = uVar5;
      *(undefined8 *)(lVar8 + -8 + (longlong)puVar7) = puVar7[-1];
      puVar7[-1] = 0;
      *(undefined8 *)(lVar8 + (longlong)puVar7) = *puVar7;
      *puVar7 = 0;
      *(undefined1 *)(lVar8 + 8 + (longlong)puVar7) = *(undefined1 *)(puVar7 + 1);
      *(undefined4 *)(lVar8 + 0xc + (longlong)puVar7) = *(undefined4 *)((longlong)puVar7 + 0xc);
      *(undefined4 *)((longlong)puVar7 + lVar8 + 0x10) = *(undefined4 *)(puVar7 + 2);
      *(undefined4 *)((longlong)puVar7 + lVar8 + 0x14) = *(undefined4 *)((longlong)puVar7 + 0x14);
      *(undefined4 *)((longlong)puVar7 + lVar8 + 0x18) = *(undefined4 *)(puVar7 + 3);
      *(undefined1 *)((longlong)puVar7 + lVar8 + 0x1c) = *(undefined1 *)((longlong)puVar7 + 0x1c);
      puVar9 = puVar9 + 0xd;
      puVar1 = puVar7 + 4;
      puVar7 = puVar7 + 0xd;
    } while (puVar1 != puVar11);
  }
  FUN_1804ddda0(puVar9,param_2);
  lVar8 = param_1[1];
  lVar10 = *param_1;
  if (lVar10 != lVar8) {
    do {
      if (*(longlong **)(lVar10 + 0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar10 + 0x48) + 0x38))();
      }
      if (*(longlong **)(lVar10 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar10 + 0x40) + 0x38))();
      }
      lVar10 = lVar10 + 0x68;
    } while (lVar10 != lVar8);
    lVar10 = *param_1;
  }
  if (lVar10 == 0) {
    *param_1 = (longlong)puVar6;
    param_1[1] = (longlong)(puVar9 + 0xd);
    param_1[2] = (longlong)(puVar6 + lVar12 * 0xd);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804de240(longlong *param_1,undefined8 param_2)
void FUN_1804de240(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  puVar12 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  lVar13 = ((longlong)puVar12 - (longlong)puVar8) / 0x68;
  puVar7 = (undefined4 *)0x0;
  if (lVar13 == 0) {
    lVar13 = 1;
  }
  else {
    lVar13 = lVar13 * 2;
    if (lVar13 == 0) goto LAB_1804de2c8;
  }
  puVar7 = (undefined4 *)
           FUN_18062b420(_DAT_180c8ed18,lVar13 * 0x68,(char)param_1[3],puVar8,0xfffffffffffffffe);
  puVar12 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
LAB_1804de2c8:
  puVar10 = puVar7;
  if (puVar8 != puVar12) {
    lVar9 = (longlong)puVar7 - (longlong)puVar8;
    puVar8 = puVar8 + 1;
    do {
      *puVar10 = *(undefined4 *)(puVar8 + -1);
      *(undefined1 *)((longlong)puVar8 + lVar9 + -4) = *(undefined1 *)((longlong)puVar8 + -4);
      *(undefined1 *)((longlong)puVar8 + lVar9 + -3) = *(undefined1 *)((longlong)puVar8 + -3);
      *(undefined8 *)((longlong)puVar8 + lVar9) = *puVar8;
      *puVar8 = 0;
      *(undefined8 *)((longlong)puVar8 + lVar9 + 8) = puVar8[1];
      puVar8[1] = 0;
      *(undefined4 *)((longlong)puVar8 + lVar9 + 0x10) = *(undefined4 *)(puVar8 + 2);
      uVar6 = *(undefined8 *)((longlong)puVar8 + 0x1c);
      puVar1 = (undefined8 *)((longlong)puVar8 + lVar9 + 0x14);
      *puVar1 = *(undefined8 *)((longlong)puVar8 + 0x14);
      puVar1[1] = uVar6;
      uVar6 = *(undefined8 *)((longlong)puVar8 + 0x2c);
      puVar1 = (undefined8 *)((longlong)puVar8 + lVar9 + 0x24);
      *puVar1 = *(undefined8 *)((longlong)puVar8 + 0x24);
      puVar1[1] = uVar6;
      uVar3 = *(undefined4 *)(puVar8 + 7);
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0x3c);
      uVar5 = *(undefined4 *)(puVar8 + 8);
      puVar2 = (undefined4 *)((longlong)puVar8 + lVar9 + 0x34);
      *puVar2 = *(undefined4 *)((longlong)puVar8 + 0x34);
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      uVar6 = *(undefined8 *)((longlong)puVar8 + 0x4c);
      puVar1 = (undefined8 *)((longlong)puVar8 + lVar9 + 0x44);
      *puVar1 = *(undefined8 *)((longlong)puVar8 + 0x44);
      puVar1[1] = uVar6;
      *(undefined4 *)((longlong)puVar8 + lVar9 + 0x54) = *(undefined4 *)((longlong)puVar8 + 0x54);
      *(undefined4 *)((longlong)puVar8 + lVar9 + 0x58) = *(undefined4 *)(puVar8 + 0xb);
      *(undefined4 *)((longlong)puVar8 + lVar9 + 0x5c) = *(undefined4 *)((longlong)puVar8 + 0x5c);
      puVar10 = puVar10 + 0x1a;
      puVar1 = puVar8 + 0xc;
      puVar8 = puVar8 + 0xd;
    } while (puVar1 != puVar12);
  }
  FUN_1804dde40(puVar10,param_2);
  lVar9 = param_1[1];
  lVar11 = *param_1;
  if (lVar11 != lVar9) {
    do {
      if (*(longlong **)(lVar11 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x38))();
      }
      if (*(longlong **)(lVar11 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar11 + 8) + 0x38))();
      }
      lVar11 = lVar11 + 0x68;
    } while (lVar11 != lVar9);
    lVar11 = *param_1;
  }
  if (lVar11 == 0) {
    *param_1 = (longlong)puVar7;
    param_1[1] = (longlong)(puVar10 + 0x1a);
    param_1[2] = (longlong)(puVar7 + lVar13 * 0x1a);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar11);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804de3f0(longlong *param_1,undefined8 param_2)
void FUN_1804de3f0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  lVar8 = ((longlong)puVar7 - (longlong)puVar3) / 0x30;
  puVar2 = (undefined4 *)0x0;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) goto LAB_1804de47c;
  }
  puVar2 = (undefined4 *)
           FUN_18062b420(_DAT_180c8ed18,lVar8 * 0x30,(char)param_1[3],puVar3,0xfffffffffffffffe);
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
LAB_1804de47c:
  puVar5 = puVar2;
  if (puVar3 != puVar7) {
    lVar4 = (longlong)puVar2 - (longlong)puVar3;
    puVar3 = puVar3 + 2;
    do {
      *puVar5 = *(undefined4 *)(puVar3 + -2);
      *(undefined8 *)(lVar4 + -8 + (longlong)puVar3) = puVar3[-1];
      puVar3[-1] = 0;
      *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
      *puVar3 = 0;
      *(undefined8 *)(lVar4 + 8 + (longlong)puVar3) = puVar3[1];
      puVar3[1] = 0;
      *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
      *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x18 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 3);
      puVar5 = puVar5 + 0xc;
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 6;
    } while (puVar1 != puVar7);
  }
  FUN_1804ddee0(puVar5,param_2);
  lVar4 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar4) {
    do {
      if (*(longlong **)(lVar6 + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x38))();
      }
      if (*(longlong **)(lVar6 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x38))();
      }
      if (*(longlong **)(lVar6 + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar6 + 8) + 0x38))();
      }
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar4);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (longlong)puVar2;
    param_1[1] = (longlong)(puVar5 + 0xc);
    param_1[2] = (longlong)(puVar2 + lVar8 * 0xc);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar6);
}






// 函数: void FUN_1804de580(longlong param_1,longlong param_2)
void FUN_1804de580(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = (int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 2);
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + lVar6 * 4);
      if (uVar1 != 0xffffffff) {
        lVar5 = (longlong)(int)(*(uint *)(param_2 + 0x2b18) & uVar1) * 0xd8;
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 11000) + (longlong)((int)uVar1 >> 10) * 8);
        uVar1 = *(uint *)(lVar3 + 0x1c + lVar5);
        if (uVar1 != 0xffffffff) {
          uVar2 = *(uint *)(lVar3 + 0x18 + lVar5);
          FUN_180387e60(*(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(param_2 + 0x698) + (longlong)((int)uVar1 >> 10) * 8) + 8 +
                         (longlong)(int)(*(uint *)(param_2 + 0x6b8) & uVar1) * 0x30),
                        *(longlong *)
                         (*(longlong *)(param_2 + 0x488) + (longlong)((int)uVar2 >> 10) * 8) +
                        ((longlong)(int)(*(uint *)(param_2 + 0x4a8) & uVar2) * 9 + 1) * 8);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  return;
}






// 函数: void FUN_1804de5ac(void)
void FUN_1804de5ac(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar5 = 0;
  do {
    uVar1 = *(uint *)(*(longlong *)(unaff_RSI + 0x18) + lVar5 * 4);
    if (uVar1 != 0xffffffff) {
      lVar4 = (longlong)(int)(*(uint *)(unaff_RDI + 0x2b18) & uVar1) * 0xd8;
      lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 11000) + (longlong)((int)uVar1 >> 10) * 8);
      uVar1 = *(uint *)(lVar3 + 0x1c + lVar4);
      if (uVar1 != 0xffffffff) {
        uVar2 = *(uint *)(lVar3 + 0x18 + lVar4);
        FUN_180387e60(*(undefined8 *)
                       (*(longlong *)
                         (*(longlong *)(unaff_RDI + 0x698) + (longlong)((int)uVar1 >> 10) * 8) + 8 +
                       (longlong)(int)(*(uint *)(unaff_RDI + 0x6b8) & uVar1) * 0x30),
                      *(longlong *)
                       (*(longlong *)(unaff_RDI + 0x488) + (longlong)((int)uVar2 >> 10) * 8) +
                      ((longlong)(int)(*(uint *)(unaff_RDI + 0x4a8) & uVar2) * 9 + 1) * 8);
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 < unaff_RBP);
  return;
}






// 函数: void FUN_1804de663(void)
void FUN_1804de663(void)

{
  return;
}






// 函数: void FUN_1804de680(char *param_1,char *param_2)
void FUN_1804de680(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  char cStackX_9;
  
  if (param_1 != param_2) {
    iVar7 = 0;
    lVar5 = ((longlong)param_2 - (longlong)param_1) / 3;
    for (lVar6 = lVar5; lVar6 != 0; lVar6 = lVar6 >> 1) {
      iVar7 = iVar7 + 1;
    }
    FUN_1804df7c0(param_1,param_2,(longlong)(iVar7 + -1) * 2);
    if (lVar5 < 0x1d) {
      for (pcVar13 = param_1 + 3; pcVar13 != param_2; pcVar13 = pcVar13 + 3) {
        uVar3 = *(undefined2 *)pcVar13;
        cVar1 = pcVar13[2];
        pcVar12 = pcVar13;
        if (pcVar13 != param_1) {
          cStackX_9 = (char)((ushort)uVar3 >> 8);
          cVar11 = (char)uVar3;
          pcVar10 = pcVar13;
          do {
            cVar2 = pcVar10[-3];
            pcVar9 = pcVar10 + -3;
            bVar15 = SBORROW1(cVar11,cVar2);
            cVar4 = cVar11 - cVar2;
            bVar14 = cVar11 == cVar2;
            if (bVar14) {
              cVar2 = pcVar10[-2];
              bVar15 = SBORROW1(cStackX_9,cVar2);
              cVar4 = cStackX_9 - cVar2;
              bVar14 = cStackX_9 == cVar2;
            }
            if (bVar14 || bVar15 != cVar4 < '\0') break;
            *(undefined2 *)pcVar12 = *(undefined2 *)pcVar9;
            pcVar12[2] = pcVar10[-1];
            pcVar12 = pcVar12 + -3;
            pcVar10 = pcVar9;
          } while (pcVar9 != param_1);
        }
        *(undefined2 *)pcVar12 = uVar3;
        pcVar12[2] = cVar1;
      }
    }
    else {
      pcVar13 = param_1 + 0x54;
      if (param_1 != pcVar13) {
        for (pcVar12 = param_1 + 3; pcVar12 != pcVar13; pcVar12 = pcVar12 + 3) {
          uVar3 = *(undefined2 *)pcVar12;
          cVar1 = pcVar12[2];
          pcVar10 = pcVar12;
          if (pcVar12 != param_1) {
            cStackX_9 = (char)((ushort)uVar3 >> 8);
            cVar11 = (char)uVar3;
            pcVar9 = pcVar12;
            do {
              cVar2 = pcVar9[-3];
              pcVar8 = pcVar9 + -3;
              bVar15 = SBORROW1(cVar11,cVar2);
              cVar4 = cVar11 - cVar2;
              bVar14 = cVar11 == cVar2;
              if (bVar14) {
                cVar2 = pcVar9[-2];
                bVar15 = SBORROW1(cStackX_9,cVar2);
                cVar4 = cStackX_9 - cVar2;
                bVar14 = cStackX_9 == cVar2;
              }
              if (bVar14 || bVar15 != cVar4 < '\0') break;
              *(undefined2 *)pcVar10 = *(undefined2 *)pcVar8;
              pcVar10[2] = pcVar9[-1];
              pcVar10 = pcVar10 + -3;
              pcVar9 = pcVar8;
            } while (pcVar8 != param_1);
          }
          *(undefined2 *)pcVar10 = uVar3;
          pcVar10[2] = cVar1;
        }
      }
      if (pcVar13 != param_2) {
        do {
          uVar3 = *(undefined2 *)pcVar13;
          cVar1 = pcVar13[2];
          cVar11 = (char)uVar3;
          cStackX_9 = (char)((ushort)uVar3 >> 8);
          pcVar10 = pcVar13;
          pcVar12 = pcVar13;
          while( true ) {
            pcVar9 = pcVar12 + -3;
            cVar2 = *pcVar9;
            bVar15 = SBORROW1(cVar11,cVar2);
            cVar4 = cVar11 - cVar2;
            bVar14 = cVar11 == cVar2;
            if (bVar14) {
              cVar2 = pcVar12[-2];
              bVar15 = SBORROW1(cStackX_9,cVar2);
              cVar4 = cStackX_9 - cVar2;
              bVar14 = cStackX_9 == cVar2;
            }
            if (bVar14 || bVar15 != cVar4 < '\0') break;
            *(undefined2 *)pcVar10 = *(undefined2 *)pcVar9;
            pcVar10[2] = pcVar12[-1];
            pcVar10 = pcVar10 + -3;
            pcVar12 = pcVar9;
          }
          pcVar13 = pcVar13 + 3;
          *(undefined2 *)pcVar10 = uVar3;
          pcVar10[2] = cVar1;
        } while (pcVar13 != param_2);
        return;
      }
    }
  }
  return;
}






// 函数: void FUN_1804de696(char *param_1,char *param_2,longlong param_3)
void FUN_1804de696(char *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  char cStack0000000000000031;
  
  iVar7 = 0;
  lVar5 = (param_3 - (longlong)param_1) / 3;
  for (lVar6 = lVar5; lVar6 != 0; lVar6 = lVar6 >> 1) {
    iVar7 = iVar7 + 1;
  }
  FUN_1804df7c0(param_1,param_2,(longlong)(iVar7 + -1) * 2);
  if (lVar5 < 0x1d) {
    for (pcVar13 = param_1 + 3; pcVar13 != param_2; pcVar13 = pcVar13 + 3) {
      uVar3 = *(undefined2 *)pcVar13;
      cVar1 = pcVar13[2];
      pcVar12 = pcVar13;
      if (pcVar13 != param_1) {
        cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
        cVar11 = (char)uVar3;
        pcVar10 = pcVar13;
        do {
          cVar2 = pcVar10[-3];
          pcVar9 = pcVar10 + -3;
          bVar15 = SBORROW1(cVar11,cVar2);
          cVar4 = cVar11 - cVar2;
          bVar14 = cVar11 == cVar2;
          if (bVar14) {
            cVar2 = pcVar10[-2];
            bVar15 = SBORROW1(cStack0000000000000031,cVar2);
            cVar4 = cStack0000000000000031 - cVar2;
            bVar14 = cStack0000000000000031 == cVar2;
          }
          if (bVar14 || bVar15 != cVar4 < '\0') break;
          *(undefined2 *)pcVar12 = *(undefined2 *)pcVar9;
          pcVar12[2] = pcVar10[-1];
          pcVar12 = pcVar12 + -3;
          pcVar10 = pcVar9;
        } while (pcVar9 != param_1);
      }
      *(undefined2 *)pcVar12 = uVar3;
      pcVar12[2] = cVar1;
    }
  }
  else {
    pcVar13 = param_1 + 0x54;
    if (param_1 != pcVar13) {
      for (pcVar12 = param_1 + 3; pcVar12 != pcVar13; pcVar12 = pcVar12 + 3) {
        uVar3 = *(undefined2 *)pcVar12;
        cVar1 = pcVar12[2];
        pcVar10 = pcVar12;
        if (pcVar12 != param_1) {
          cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
          cVar11 = (char)uVar3;
          pcVar9 = pcVar12;
          do {
            cVar2 = pcVar9[-3];
            pcVar8 = pcVar9 + -3;
            bVar15 = SBORROW1(cVar11,cVar2);
            cVar4 = cVar11 - cVar2;
            bVar14 = cVar11 == cVar2;
            if (bVar14) {
              cVar2 = pcVar9[-2];
              bVar15 = SBORROW1(cStack0000000000000031,cVar2);
              cVar4 = cStack0000000000000031 - cVar2;
              bVar14 = cStack0000000000000031 == cVar2;
            }
            if (bVar14 || bVar15 != cVar4 < '\0') break;
            *(undefined2 *)pcVar10 = *(undefined2 *)pcVar8;
            pcVar10[2] = pcVar9[-1];
            pcVar10 = pcVar10 + -3;
            pcVar9 = pcVar8;
          } while (pcVar8 != param_1);
        }
        *(undefined2 *)pcVar10 = uVar3;
        pcVar10[2] = cVar1;
      }
    }
    if (pcVar13 != param_2) {
      do {
        uVar3 = *(undefined2 *)pcVar13;
        cVar1 = pcVar13[2];
        cVar11 = (char)uVar3;
        cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
        pcVar10 = pcVar13;
        pcVar12 = pcVar13;
        while( true ) {
          pcVar9 = pcVar12 + -3;
          cVar2 = *pcVar9;
          bVar15 = SBORROW1(cVar11,cVar2);
          cVar4 = cVar11 - cVar2;
          bVar14 = cVar11 == cVar2;
          if (bVar14) {
            cVar2 = pcVar12[-2];
            bVar15 = SBORROW1(cStack0000000000000031,cVar2);
            cVar4 = cStack0000000000000031 - cVar2;
            bVar14 = cStack0000000000000031 == cVar2;
          }
          if (bVar14 || bVar15 != cVar4 < '\0') break;
          *(undefined2 *)pcVar10 = *(undefined2 *)pcVar9;
          pcVar10[2] = pcVar12[-1];
          pcVar10 = pcVar10 + -3;
          pcVar12 = pcVar9;
        }
        pcVar13 = pcVar13 + 3;
        *(undefined2 *)pcVar10 = uVar3;
        pcVar10[2] = cVar1;
      } while (pcVar13 != param_2);
      return;
    }
  }
  return;
}






// 函数: void FUN_1804de700(void)
void FUN_1804de700(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *unaff_RBX;
  char *unaff_RBP;
  char cVar8;
  char *in_R9;
  char *in_R10;
  bool bVar9;
  bool bVar10;
  char cStack0000000000000031;
  
  do {
    uVar3 = *(undefined2 *)in_R9;
    cVar1 = in_R9[2];
    pcVar6 = in_R9;
    if (in_R9 != unaff_RBX) {
      cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
      cVar8 = (char)uVar3;
      pcVar7 = in_R9;
      do {
        cVar2 = pcVar7[-3];
        pcVar5 = pcVar7 + -3;
        bVar10 = SBORROW1(cVar8,cVar2);
        cVar4 = cVar8 - cVar2;
        bVar9 = cVar8 == cVar2;
        if (bVar9) {
          cVar2 = pcVar7[-2];
          bVar10 = SBORROW1(cStack0000000000000031,cVar2);
          cVar4 = cStack0000000000000031 - cVar2;
          bVar9 = cStack0000000000000031 == cVar2;
        }
        if (bVar9 || bVar10 != cVar4 < '\0') break;
        *(undefined2 *)pcVar6 = *(undefined2 *)pcVar5;
        pcVar6[2] = pcVar7[-1];
        pcVar6 = pcVar6 + -3;
        pcVar7 = pcVar5;
      } while (pcVar5 != unaff_RBX);
    }
    in_R9 = in_R9 + 3;
    *(undefined2 *)pcVar6 = uVar3;
    pcVar6[2] = cVar1;
    if (in_R9 == in_R10) {
      if (in_R10 != unaff_RBP) {
        do {
          uVar3 = *(undefined2 *)in_R10;
          cVar1 = in_R10[2];
          cVar8 = (char)uVar3;
          cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
          pcVar7 = in_R10;
          pcVar6 = in_R10;
          while( true ) {
            pcVar5 = pcVar6 + -3;
            cVar2 = *pcVar5;
            bVar10 = SBORROW1(cVar8,cVar2);
            cVar4 = cVar8 - cVar2;
            bVar9 = cVar8 == cVar2;
            if (bVar9) {
              cVar2 = pcVar6[-2];
              bVar10 = SBORROW1(cStack0000000000000031,cVar2);
              cVar4 = cStack0000000000000031 - cVar2;
              bVar9 = cStack0000000000000031 == cVar2;
            }
            if (bVar9 || bVar10 != cVar4 < '\0') break;
            *(undefined2 *)pcVar7 = *(undefined2 *)pcVar5;
            pcVar7[2] = pcVar6[-1];
            pcVar7 = pcVar7 + -3;
            pcVar6 = pcVar5;
          }
          in_R10 = in_R10 + 3;
          *(undefined2 *)pcVar7 = uVar3;
          pcVar7[2] = cVar1;
        } while (in_R10 != unaff_RBP);
        return;
      }
      return;
    }
  } while( true );
}






// 函数: void FUN_1804de776(void)
void FUN_1804de776(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *unaff_RBP;
  char *in_R10;
  char cVar8;
  bool bVar9;
  bool bVar10;
  char cStack0000000000000031;
  
  if (in_R10 != unaff_RBP) {
    do {
      uVar3 = *(undefined2 *)in_R10;
      cVar1 = in_R10[2];
      cVar8 = (char)uVar3;
      cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
      pcVar7 = in_R10;
      pcVar5 = in_R10;
      while( true ) {
        pcVar6 = pcVar5 + -3;
        cVar2 = *pcVar6;
        bVar10 = SBORROW1(cVar8,cVar2);
        cVar4 = cVar8 - cVar2;
        bVar9 = cVar8 == cVar2;
        if (bVar9) {
          cVar2 = pcVar5[-2];
          bVar10 = SBORROW1(cStack0000000000000031,cVar2);
          cVar4 = cStack0000000000000031 - cVar2;
          bVar9 = cStack0000000000000031 == cVar2;
        }
        if (bVar9 || bVar10 != cVar4 < '\0') break;
        *(undefined2 *)pcVar7 = *(undefined2 *)pcVar6;
        pcVar7[2] = pcVar5[-1];
        pcVar7 = pcVar7 + -3;
        pcVar5 = pcVar6;
      }
      in_R10 = in_R10 + 3;
      *(undefined2 *)pcVar7 = uVar3;
      pcVar7[2] = cVar1;
    } while (in_R10 != unaff_RBP);
    return;
  }
  return;
}






// 函数: void FUN_1804de7ea(void)
void FUN_1804de7ea(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *unaff_RBX;
  undefined2 *unaff_RBP;
  undefined2 *puVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  char cStack0000000000000031;
  
  puVar8 = (undefined2 *)((longlong)unaff_RBX + 3);
  do {
    if (puVar8 == unaff_RBP) {
      return;
    }
    uVar3 = *puVar8;
    uVar1 = *(undefined1 *)(puVar8 + 1);
    puVar7 = puVar8;
    if (puVar8 != unaff_RBX) {
      cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
      cVar9 = (char)uVar3;
      puVar5 = puVar8;
      do {
        cVar2 = *(char *)((longlong)puVar5 + -3);
        puVar6 = (undefined2 *)((longlong)puVar5 + -3);
        bVar11 = SBORROW1(cVar9,cVar2);
        cVar4 = cVar9 - cVar2;
        bVar10 = cVar9 == cVar2;
        if (bVar10) {
          cVar2 = *(char *)(puVar5 + -1);
          bVar11 = SBORROW1(cStack0000000000000031,cVar2);
          cVar4 = cStack0000000000000031 - cVar2;
          bVar10 = cStack0000000000000031 == cVar2;
        }
        if (bVar10 || bVar11 != cVar4 < '\0') break;
        *puVar7 = *puVar6;
        *(undefined1 *)(puVar7 + 1) = *(undefined1 *)((longlong)puVar5 + -1);
        puVar7 = (undefined2 *)((longlong)puVar7 + -3);
        puVar5 = puVar6;
      } while (puVar6 != unaff_RBX);
    }
    puVar8 = (undefined2 *)((longlong)puVar8 + 3);
    *puVar7 = uVar3;
    *(undefined1 *)(puVar7 + 1) = uVar1;
  } while( true );
}






