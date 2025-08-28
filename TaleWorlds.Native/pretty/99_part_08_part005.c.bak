#include "TaleWorlds.Native.Split.h"

// 99_part_08_part005.c - 11 个函数

// 函数: void FUN_1804df7cb(char *param_1,char *param_2,longlong param_3)
void FUN_1804df7cb(char *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int16_t uVar5;
  int16_t uVar6;
  char cVar7;
  longlong in_RAX;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cStack0000000000000050;
  char cStack0000000000000051;
  char cStack0000000000000052;
  
  lVar8 = in_RAX - (longlong)param_1;
  do {
    if ((lVar8 < 0x57) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_1804dfad0(param_1,param_2);
        pcVar10 = param_2 + -(longlong)param_1;
        if (5 < (longlong)pcVar10) {
          param_2 = param_2 + -3;
          do {
            _cStack0000000000000050 = *(int16_t *)param_2;
            cStack0000000000000052 = param_2[2];
            *(int16_t *)param_2 = *(int16_t *)param_1;
            param_2[2] = param_1[2];
            FUN_1804dfc80(param_1,0,(longlong)pcVar10 / 3 + -1,0,&stack0x00000050);
            param_2 = param_2 + -3;
            pcVar10 = param_2 + (3 - (longlong)param_1);
          } while (5 < (longlong)pcVar10);
        }
      }
      return;
    }
    cVar1 = *param_1;
    lVar8 = ((longlong)param_2 - (longlong)param_1) / 6;
    cVar2 = param_1[lVar8 * 3];
    pcVar10 = param_1 + lVar8 * 3;
    bVar13 = SBORROW1(cVar1,cVar2);
    cVar7 = cVar1 - cVar2;
    bVar12 = cVar1 == cVar2;
    if (bVar12) {
      cVar3 = pcVar10[1];
      cVar4 = param_1[1];
      bVar13 = SBORROW1(cVar4,cVar3);
      cVar7 = cVar4 - cVar3;
      bVar12 = cVar4 == cVar3;
    }
    cVar3 = param_2[-3];
    if (bVar12 || bVar13 != cVar7 < '\0') {
      bVar13 = SBORROW1(cVar1,cVar3);
      cVar7 = cVar1 - cVar3;
      bVar12 = cVar1 == cVar3;
      if (bVar12) {
        cVar1 = param_2[-2];
        cVar4 = param_1[1];
        bVar13 = SBORROW1(cVar4,cVar1);
        cVar7 = cVar4 - cVar1;
        bVar12 = cVar4 == cVar1;
      }
      pcVar11 = param_1;
      if (bVar12 || bVar13 != cVar7 < '\0') {
        bVar14 = SBORROW1(cVar2,cVar3);
        bVar13 = (char)(cVar2 - cVar3) < '\0';
        bVar12 = cVar2 == cVar3;
        if (bVar12) {
          cVar1 = param_2[-2];
          cVar2 = pcVar10[1];
          bVar14 = SBORROW1(cVar2,cVar1);
          bVar13 = (char)(cVar2 - cVar1) < '\0';
          bVar12 = cVar2 == cVar1;
        }
        goto LAB_1804df88c;
      }
    }
    else {
      bVar13 = SBORROW1(cVar2,cVar3);
      cVar7 = cVar2 - cVar3;
      bVar12 = cVar2 == cVar3;
      if (bVar12) {
        cVar2 = param_2[-2];
        cVar4 = pcVar10[1];
        bVar13 = SBORROW1(cVar4,cVar2);
        cVar7 = cVar4 - cVar2;
        bVar12 = cVar4 == cVar2;
      }
      pcVar11 = pcVar10;
      if (bVar12 || bVar13 != cVar7 < '\0') {
        bVar14 = SBORROW1(cVar1,cVar3);
        cVar2 = cVar1 - cVar3;
        bVar12 = cVar1 == cVar3;
        if (bVar12) {
          cVar1 = param_2[-2];
          cVar7 = param_1[1];
          bVar14 = SBORROW1(cVar7,cVar1);
          cVar2 = cVar7 - cVar1;
          bVar12 = cVar7 == cVar1;
        }
        bVar13 = cVar2 < '\0';
        pcVar10 = param_1;
LAB_1804df88c:
        pcVar11 = pcVar10;
        if (!bVar12 && bVar14 == bVar13) {
          pcVar11 = param_2 + -3;
        }
      }
    }
    uVar5 = *(int16_t *)pcVar11;
    cStack0000000000000052 = pcVar11[2];
    cStack0000000000000051 = (char)((ushort)uVar5 >> 8);
    cStack0000000000000050 = (char)uVar5;
    pcVar10 = param_2;
    pcVar11 = param_1;
    while( true ) {
      while( true ) {
        cVar1 = *pcVar11;
        bVar13 = SBORROW1(cVar1,cStack0000000000000050);
        cVar2 = cVar1 - cStack0000000000000050;
        bVar12 = cVar1 == cStack0000000000000050;
        if (bVar12) {
          cVar1 = pcVar11[1];
          bVar13 = SBORROW1(cVar1,cStack0000000000000051);
          cVar2 = cVar1 - cStack0000000000000051;
          bVar12 = cVar1 == cStack0000000000000051;
        }
        if (bVar12 || bVar13 != cVar2 < '\0') break;
        pcVar11 = pcVar11 + 3;
      }
      do {
        pcVar9 = pcVar10;
        cVar1 = pcVar9[-3];
        pcVar10 = pcVar9 + -3;
        bVar13 = SBORROW1(cStack0000000000000050,cVar1);
        cVar2 = cStack0000000000000050 - cVar1;
        bVar12 = cStack0000000000000050 == cVar1;
        if (bVar12) {
          cVar1 = pcVar9[-2];
          bVar13 = SBORROW1(cStack0000000000000051,cVar1);
          cVar2 = cStack0000000000000051 - cVar1;
          bVar12 = cStack0000000000000051 == cVar1;
        }
      } while (!bVar12 && bVar13 == cVar2 < '\0');
      if (pcVar10 <= pcVar11) break;
      uVar6 = *(int16_t *)pcVar11;
      cVar1 = pcVar11[2];
      *(int16_t *)pcVar11 = *(int16_t *)pcVar10;
      pcVar11[2] = pcVar9[-1];
      pcVar11 = pcVar11 + 3;
      *(int16_t *)pcVar10 = uVar6;
      pcVar9[-1] = cVar1;
    }
    param_3 = param_3 + -1;
    _cStack0000000000000050 = uVar5;
    FUN_1804df7c0(pcVar11,param_2,param_3);
    lVar8 = (longlong)pcVar11 - (longlong)param_1;
    param_2 = pcVar11;
  } while( true );
}






// 函数: void FUN_1804df7e6(void)
void FUN_1804df7e6(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int16_t uVar5;
  char cVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  char cStack0000000000000050;
  char cStack0000000000000051;
  
  do {
    pcVar10 = unaff_RSI;
    if (unaff_RBP < 1) break;
    cVar1 = *unaff_RDI;
    lVar7 = ((longlong)unaff_RSI - (longlong)unaff_RDI) / 6;
    cVar2 = unaff_RDI[lVar7 * 3];
    pcVar10 = unaff_RDI + lVar7 * 3;
    bVar12 = SBORROW1(cVar1,cVar2);
    cVar6 = cVar1 - cVar2;
    bVar11 = cVar1 == cVar2;
    if (bVar11) {
      cVar3 = pcVar10[1];
      cVar4 = unaff_RDI[1];
      bVar12 = SBORROW1(cVar4,cVar3);
      cVar6 = cVar4 - cVar3;
      bVar11 = cVar4 == cVar3;
    }
    cVar3 = unaff_RSI[-3];
    if (bVar11 || bVar12 != cVar6 < '\0') {
      bVar12 = SBORROW1(cVar1,cVar3);
      cVar6 = cVar1 - cVar3;
      bVar11 = cVar1 == cVar3;
      if (bVar11) {
        cVar1 = unaff_RSI[-2];
        cVar4 = unaff_RDI[1];
        bVar12 = SBORROW1(cVar4,cVar1);
        cVar6 = cVar4 - cVar1;
        bVar11 = cVar4 == cVar1;
      }
      pcVar9 = unaff_RDI;
      if (bVar11 || bVar12 != cVar6 < '\0') {
        bVar13 = SBORROW1(cVar2,cVar3);
        bVar12 = (char)(cVar2 - cVar3) < '\0';
        bVar11 = cVar2 == cVar3;
        if (bVar11) {
          cVar1 = unaff_RSI[-2];
          cVar2 = pcVar10[1];
          bVar13 = SBORROW1(cVar2,cVar1);
          bVar12 = (char)(cVar2 - cVar1) < '\0';
          bVar11 = cVar2 == cVar1;
        }
        goto LAB_1804df88c;
      }
    }
    else {
      bVar12 = SBORROW1(cVar2,cVar3);
      cVar6 = cVar2 - cVar3;
      bVar11 = cVar2 == cVar3;
      if (bVar11) {
        cVar2 = unaff_RSI[-2];
        cVar4 = pcVar10[1];
        bVar12 = SBORROW1(cVar4,cVar2);
        cVar6 = cVar4 - cVar2;
        bVar11 = cVar4 == cVar2;
      }
      pcVar9 = pcVar10;
      if (bVar11 || bVar12 != cVar6 < '\0') {
        bVar13 = SBORROW1(cVar1,cVar3);
        cVar2 = cVar1 - cVar3;
        bVar11 = cVar1 == cVar3;
        if (bVar11) {
          cVar1 = unaff_RSI[-2];
          cVar6 = unaff_RDI[1];
          bVar13 = SBORROW1(cVar6,cVar1);
          cVar2 = cVar6 - cVar1;
          bVar11 = cVar6 == cVar1;
        }
        bVar12 = cVar2 < '\0';
        pcVar10 = unaff_RDI;
LAB_1804df88c:
        pcVar9 = pcVar10;
        if (!bVar11 && bVar13 == bVar12) {
          pcVar9 = unaff_RSI + -3;
        }
      }
    }
    cStack0000000000000051 = (char)((ushort)*(int16_t *)pcVar9 >> 8);
    cStack0000000000000050 = (char)*(int16_t *)pcVar9;
    pcVar9 = unaff_RSI;
    pcVar10 = unaff_RDI;
    while( true ) {
      while( true ) {
        cVar1 = *pcVar10;
        bVar12 = SBORROW1(cVar1,cStack0000000000000050);
        cVar2 = cVar1 - cStack0000000000000050;
        bVar11 = cVar1 == cStack0000000000000050;
        if (bVar11) {
          cVar1 = pcVar10[1];
          bVar12 = SBORROW1(cVar1,cStack0000000000000051);
          cVar2 = cVar1 - cStack0000000000000051;
          bVar11 = cVar1 == cStack0000000000000051;
        }
        if (bVar11 || bVar12 != cVar2 < '\0') break;
        pcVar10 = pcVar10 + 3;
      }
      do {
        pcVar8 = pcVar9;
        cVar1 = pcVar8[-3];
        pcVar9 = pcVar8 + -3;
        bVar12 = SBORROW1(cStack0000000000000050,cVar1);
        cVar2 = cStack0000000000000050 - cVar1;
        bVar11 = cStack0000000000000050 == cVar1;
        if (bVar11) {
          cVar1 = pcVar8[-2];
          bVar12 = SBORROW1(cStack0000000000000051,cVar1);
          cVar2 = cStack0000000000000051 - cVar1;
          bVar11 = cStack0000000000000051 == cVar1;
        }
      } while (!bVar11 && bVar12 == cVar2 < '\0');
      if (pcVar9 <= pcVar10) break;
      uVar5 = *(int16_t *)pcVar10;
      cVar1 = pcVar10[2];
      *(int16_t *)pcVar10 = *(int16_t *)pcVar9;
      pcVar10[2] = pcVar8[-1];
      pcVar10 = pcVar10 + 3;
      *(int16_t *)pcVar9 = uVar5;
      pcVar8[-1] = cVar1;
    }
    unaff_RBP = unaff_RBP + -1;
    FUN_1804df7c0(pcVar10,unaff_RSI,unaff_RBP);
    unaff_RSI = pcVar10;
  } while (0x56 < (longlong)pcVar10 - (longlong)unaff_RDI);
  if ((unaff_RBP == 0) && (FUN_1804dfad0(), 5 < (longlong)pcVar10 - (longlong)unaff_RDI)) {
    pcVar10 = pcVar10 + -3;
    do {
      *(int16_t *)pcVar10 = *(int16_t *)unaff_RDI;
      pcVar10[2] = unaff_RDI[2];
      FUN_1804dfc80();
      pcVar10 = pcVar10 + -3;
    } while (5 < (longlong)(pcVar10 + (3 - (longlong)unaff_RDI)));
  }
  return;
}






// 函数: void FUN_1804df935(void)
void FUN_1804df935(void)

{
  int16_t *puVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int16_t *unaff_RDI;
  int8_t uStack0000000000000052;
  
  if (unaff_RBP == 0) {
    FUN_1804dfad0();
    if (5 < unaff_RSI - (longlong)unaff_RDI) {
      puVar1 = (int16_t *)(unaff_RSI + -3);
      do {
        uStack0000000000000052 = *(int8_t *)(puVar1 + 1);
        *puVar1 = *unaff_RDI;
        *(int8_t *)(puVar1 + 1) = *(int8_t *)(unaff_RDI + 1);
        FUN_1804dfc80();
        puVar1 = (int16_t *)((longlong)puVar1 + -3);
      } while (5 < (longlong)puVar1 + (3 - (longlong)unaff_RDI));
    }
  }
  return;
}






// 函数: void FUN_1804df943(void)
void FUN_1804df943(void)

{
  int16_t *puVar1;
  longlong unaff_RSI;
  int16_t *unaff_RDI;
  int8_t uStack0000000000000052;
  
  FUN_1804dfad0();
  if (5 < unaff_RSI - (longlong)unaff_RDI) {
    puVar1 = (int16_t *)(unaff_RSI + -3);
    do {
      uStack0000000000000052 = *(int8_t *)(puVar1 + 1);
      *puVar1 = *unaff_RDI;
      *(int8_t *)(puVar1 + 1) = *(int8_t *)(unaff_RDI + 1);
      FUN_1804dfc80();
      puVar1 = (int16_t *)((longlong)puVar1 + -3);
    } while (5 < (longlong)puVar1 + (3 - (longlong)unaff_RDI));
  }
  return;
}



longlong FUN_1804dfad0(longlong param_1,longlong param_2)

{
  int16_t *puVar1;
  int16_t *puVar2;
  int8_t uVar3;
  char cVar4;
  char cVar5;
  int16_t uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  char cStackX_8;
  char cStackX_9;
  
  lVar9 = (param_2 - param_1) * 0x5555555555555556;
  lVar8 = (param_2 - param_1) / 3;
  if (1 < lVar8) {
    lVar11 = (lVar8 + -2 >> 1) + 1;
    lVar12 = lVar11 * 2 + 2;
    lVar14 = param_1 + lVar11 * 3;
    do {
      uVar6 = *(int16_t *)(lVar14 + -3);
      uVar3 = *(int8_t *)(lVar14 + -1);
      lVar11 = lVar11 + -1;
      lVar12 = lVar12 + -2;
      lVar13 = lVar11;
      lVar9 = lVar12;
      while (lVar9 < lVar8) {
        lVar10 = param_1 + lVar9 * 2;
        cVar4 = *(char *)(lVar9 + lVar10);
        cVar5 = *(char *)(lVar9 + -3 + lVar10);
        bVar16 = SBORROW1(cVar4,cVar5);
        cVar7 = cVar4 - cVar5;
        bVar15 = cVar4 == cVar5;
        if (bVar15) {
          cVar4 = *(char *)(lVar9 + -2 + lVar10);
          cVar5 = *(char *)(lVar9 + 1 + lVar10);
          bVar16 = SBORROW1(cVar5,cVar4);
          cVar7 = cVar5 - cVar4;
          bVar15 = cVar5 == cVar4;
        }
        puVar1 = (int16_t *)(param_1 + lVar13 * 3);
        lVar13 = lVar9 + -1;
        if (bVar15 || bVar16 != cVar7 < '\0') {
          lVar13 = lVar9;
        }
        lVar9 = param_1 + lVar13 * 2;
        *puVar1 = *(int16_t *)(lVar13 + lVar9);
        *(int8_t *)(puVar1 + 1) = *(int8_t *)(lVar13 + 2 + lVar9);
        lVar9 = lVar13 * 2 + 2;
      }
      if (lVar9 == lVar8) {
        puVar1 = (int16_t *)(param_1 + lVar13 * 3);
        lVar10 = param_1 + lVar9 * 2;
        lVar13 = lVar9 + -1;
        *puVar1 = *(int16_t *)(lVar9 + -3 + lVar10);
        *(int8_t *)(puVar1 + 1) = *(int8_t *)(lVar9 + -1 + lVar10);
      }
      if (lVar11 < lVar13) {
        cStackX_9 = (char)((ushort)uVar6 >> 8);
        cStackX_8 = (char)uVar6;
        do {
          lVar10 = lVar13 + -1 >> 1;
          lVar9 = param_1 + lVar10 * 2;
          puVar1 = (int16_t *)(lVar10 + lVar9);
          cVar4 = *(char *)(lVar10 + lVar9);
          bVar16 = SBORROW1(cVar4,cStackX_8);
          cVar5 = cVar4 - cStackX_8;
          bVar15 = cVar4 == cStackX_8;
          if (bVar15) {
            cVar4 = *(char *)((longlong)puVar1 + 1);
            bVar16 = SBORROW1(cVar4,cStackX_9);
            cVar5 = cVar4 - cStackX_9;
            bVar15 = cVar4 == cStackX_9;
          }
          if (bVar15 || bVar16 != cVar5 < '\0') break;
          puVar2 = (int16_t *)(param_1 + lVar13 * 3);
          *puVar2 = *puVar1;
          *(int8_t *)(puVar2 + 1) = *(int8_t *)(puVar1 + 1);
          lVar13 = lVar10;
        } while (lVar11 < lVar10);
      }
      lVar9 = param_1 + lVar13 * 2;
      *(int16_t *)(lVar13 + lVar9) = uVar6;
      *(int8_t *)(lVar13 + 2 + lVar9) = uVar3;
      lVar14 = lVar14 + -3;
    } while (lVar11 != 0);
  }
  return lVar9;
}






// 函数: void FUN_1804dfafd(longlong param_1)
void FUN_1804dfafd(longlong param_1)

{
  int16_t *puVar1;
  longlong lVar2;
  int16_t *puVar3;
  int8_t uVar4;
  char cVar5;
  char cVar6;
  int16_t uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong unaff_RSI;
  longlong lVar12;
  longlong in_R11;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  char cStack0000000000000030;
  char cStack0000000000000031;
  
  lVar10 = (unaff_RSI + -2 >> 1) + 1;
  lVar11 = lVar10 * 2 + 2;
  lVar13 = param_1 + lVar10 * 3;
  do {
    uVar7 = *(int16_t *)(lVar13 + -3);
    uVar4 = *(int8_t *)(lVar13 + -1);
    lVar10 = lVar10 + -1;
    lVar11 = lVar11 + -2;
    lVar12 = lVar10;
    lVar2 = lVar11;
    while (lVar2 < unaff_RSI) {
      lVar9 = in_R11 + lVar2 * 2;
      cVar5 = *(char *)(lVar2 + lVar9);
      cVar6 = *(char *)(lVar2 + -3 + lVar9);
      bVar15 = SBORROW1(cVar5,cVar6);
      cVar8 = cVar5 - cVar6;
      bVar14 = cVar5 == cVar6;
      if (bVar14) {
        cVar5 = *(char *)(lVar2 + -2 + lVar9);
        cVar6 = *(char *)(lVar2 + 1 + lVar9);
        bVar15 = SBORROW1(cVar6,cVar5);
        cVar8 = cVar6 - cVar5;
        bVar14 = cVar6 == cVar5;
      }
      puVar1 = (int16_t *)(in_R11 + lVar12 * 3);
      lVar12 = lVar2 + -1;
      if (bVar14 || bVar15 != cVar8 < '\0') {
        lVar12 = lVar2;
      }
      lVar2 = in_R11 + lVar12 * 2;
      *puVar1 = *(int16_t *)(lVar12 + lVar2);
      *(int8_t *)(puVar1 + 1) = *(int8_t *)(lVar12 + 2 + lVar2);
      lVar2 = lVar12 * 2 + 2;
    }
    if (lVar2 == unaff_RSI) {
      puVar1 = (int16_t *)(in_R11 + lVar12 * 3);
      lVar9 = in_R11 + lVar2 * 2;
      lVar12 = lVar2 + -1;
      *puVar1 = *(int16_t *)(lVar2 + -3 + lVar9);
      *(int8_t *)(puVar1 + 1) = *(int8_t *)(lVar2 + -1 + lVar9);
    }
    if (lVar10 < lVar12) {
      cStack0000000000000031 = (char)((ushort)uVar7 >> 8);
      cStack0000000000000030 = (char)uVar7;
      do {
        lVar9 = lVar12 + -1 >> 1;
        lVar2 = in_R11 + lVar9 * 2;
        puVar1 = (int16_t *)(lVar9 + lVar2);
        cVar5 = *(char *)(lVar9 + lVar2);
        bVar15 = SBORROW1(cVar5,cStack0000000000000030);
        cVar6 = cVar5 - cStack0000000000000030;
        bVar14 = cVar5 == cStack0000000000000030;
        if (bVar14) {
          cVar5 = *(char *)((longlong)puVar1 + 1);
          bVar15 = SBORROW1(cVar5,cStack0000000000000031);
          cVar6 = cVar5 - cStack0000000000000031;
          bVar14 = cVar5 == cStack0000000000000031;
        }
        if (bVar14 || bVar15 != cVar6 < '\0') break;
        puVar3 = (int16_t *)(in_R11 + lVar12 * 3);
        *puVar3 = *puVar1;
        *(int8_t *)(puVar3 + 1) = *(int8_t *)(puVar1 + 1);
        lVar12 = lVar9;
      } while (lVar10 < lVar9);
    }
    lVar2 = in_R11 + lVar12 * 2;
    *(int16_t *)(lVar12 + lVar2) = uVar7;
    *(int8_t *)(lVar12 + 2 + lVar2) = uVar4;
    lVar13 = lVar13 + -3;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1804dfc75(void)
void FUN_1804dfc75(void)

{
  return;
}






// 函数: void FUN_1804dfc80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char *param_5
void FUN_1804dfc80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char *param_5
                  )

{
  longlong lVar1;
  int16_t *puVar2;
  int16_t *puVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  
  lVar4 = param_4 * 2;
  while (lVar8 = lVar4 + 2, lVar8 < param_3) {
    lVar1 = param_1 + lVar8 * 2;
    cVar5 = *(char *)(lVar4 + -1 + lVar1);
    cVar6 = *(char *)(lVar8 + lVar1);
    bVar10 = SBORROW1(cVar6,cVar5);
    cVar7 = cVar6 - cVar5;
    bVar9 = cVar6 == cVar5;
    if (bVar9) {
      cVar5 = *(char *)(lVar8 + lVar1 + -2);
      cVar6 = *(char *)(lVar8 + lVar1 + 1);
      bVar10 = SBORROW1(cVar6,cVar5);
      cVar7 = cVar6 - cVar5;
      bVar9 = cVar6 == cVar5;
    }
    puVar2 = (int16_t *)(param_1 + param_4 * 3);
    param_4 = lVar4 + 1;
    if (bVar9 || bVar10 != cVar7 < '\0') {
      param_4 = lVar8;
    }
    lVar4 = param_1 + param_4 * 2;
    *puVar2 = *(int16_t *)(param_4 + lVar4);
    *(int8_t *)(puVar2 + 1) = *(int8_t *)(param_4 + 2 + lVar4);
    lVar4 = param_4 * 2;
  }
  if (lVar8 == param_3) {
    puVar2 = (int16_t *)(param_1 + param_4 * 3);
    lVar8 = param_1 + lVar8 * 2;
    param_4 = lVar4 + 1;
    *puVar2 = *(int16_t *)(lVar4 + -1 + lVar8);
    *(int8_t *)(puVar2 + 1) = *(int8_t *)(lVar4 + 1 + lVar8);
  }
  while (param_2 < param_4) {
    cVar5 = *param_5;
    lVar8 = param_4 + -1 >> 1;
    lVar4 = param_1 + lVar8 * 2;
    puVar2 = (int16_t *)(lVar8 + lVar4);
    cVar6 = *(char *)(lVar8 + lVar4);
    bVar10 = SBORROW1(cVar6,cVar5);
    cVar7 = cVar6 - cVar5;
    bVar9 = cVar6 == cVar5;
    if (bVar9) {
      cVar5 = param_5[1];
      cVar6 = *(char *)((longlong)puVar2 + 1);
      bVar10 = SBORROW1(cVar6,cVar5);
      cVar7 = cVar6 - cVar5;
      bVar9 = cVar6 == cVar5;
    }
    if (bVar9 || bVar10 != cVar7 < '\0') break;
    puVar3 = (int16_t *)(param_1 + param_4 * 3);
    *puVar3 = *puVar2;
    *(int8_t *)(puVar3 + 1) = *(int8_t *)(puVar2 + 1);
    param_4 = lVar8;
  }
  param_1 = param_1 + param_4 * 2;
  *(int16_t *)(param_1 + param_4) = *(int16_t *)param_5;
  *(char *)(param_1 + 2 + param_4) = param_5[2];
  return;
}






// 函数: void FUN_1804dfdb0(longlong param_1,longlong param_2)
void FUN_1804dfdb0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 2);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + lVar3 * 4);
      if ((uVar1 != 0xffffffff) &&
         (uVar1 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_2 + 11000) + (longlong)((int)uVar1 >> 10) * 8) +
                            0x1c + (longlong)(int)(*(uint *)(param_2 + 0x2b18) & uVar1) * 0xd8),
         uVar1 != 0xffffffff)) {
        FUN_1802fb280(*(uint64_t *)
                       (*(longlong *)
                         (*(longlong *)(param_2 + 0x698) + (longlong)((int)uVar1 >> 10) * 8) + 8 +
                       (longlong)(int)(*(uint *)(param_2 + 0x6b8) & uVar1) * 0x30));
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}






// 函数: void FUN_1804dfddc(void)
void FUN_1804dfddc(void)

{
  uint uVar1;
  longlong lVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(*(longlong *)(unaff_RSI + 0x18) + lVar2 * 4);
    if (uVar1 != 0xffffffff) {
      uVar1 = *(uint *)(*(longlong *)
                         (*(longlong *)(unaff_RDI + 11000) + (longlong)((int)uVar1 >> 10) * 8) +
                        0x1c + (longlong)(int)(*(uint *)(unaff_RDI + 0x2b18) & uVar1) * 0xd8);
      if (uVar1 != 0xffffffff) {
        FUN_1802fb280(*(uint64_t *)
                       (*(longlong *)
                         (*(longlong *)(unaff_RDI + 0x698) + (longlong)((int)uVar1 >> 10) * 8) + 8 +
                       (longlong)(int)(*(uint *)(unaff_RDI + 0x6b8) & uVar1) * 0x30));
      }
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 < unaff_RBP);
  return;
}






// 函数: void FUN_1804dfe6a(void)
void FUN_1804dfe6a(void)

{
  return;
}



longlong * FUN_1804dfe80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}



longlong * FUN_1804dfed0(longlong *param_1,longlong *param_2)

{
  param_1 = (longlong *)*param_1;
  *param_2 = (longlong)param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  return param_2;
}






// 函数: void FUN_1804dff20(longlong *param_1)
void FUN_1804dff20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int32_t *puVar3;
  longlong *plVar4;
  
  *(int8_t *)(param_1 + 1) = 1;
  plVar4 = (longlong *)*param_1;
  *param_1 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  *(uint64_t *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(uint64_t *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  *(uint64_t *)((longlong)param_1 + 0x1c) = 0xffffffffffffffff;
  plVar4 = param_1 + 0x12;
  puVar3 = (int32_t *)((longlong)param_1 + 0x24);
  lVar2 = 8;
  do {
    *puVar3 = 0xffffffff;
    plVar1 = (longlong *)*plVar4;
    *plVar4 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    puVar3 = puVar3 + 1;
    plVar4 = plVar4 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[10] = param_1[9];
  param_1[0xe] = param_1[0xd];
  *(int32_t *)(param_1 + 0x11) = 0x1010101;
  return;
}






