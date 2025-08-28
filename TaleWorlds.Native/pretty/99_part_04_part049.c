#include "TaleWorlds.Native.Split.h"

// 99_part_04_part049.c - 6 个函数

// 函数: void FUN_1802b4fde(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
void FUN_1802b4fde(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  ulonglong param_9,int32_t param_10,int32_t param_11)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  float *pfVar7;
  ulonglong uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong lVar13;
  void *puVar14;
  uint64_t *unaff_RBX;
  uint64_t *puVar15;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char *pcVar16;
  void *puVar17;
  longlong in_R10;
  char *unaff_R14;
  float extraout_XMM0_Da;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int aiStackX_20 [2];
  
code_r0x0001802b4fde:
  lVar13 = 0;
  pcVar10 = unaff_R14;
LAB_1802b4fe3:
  if (lVar13 == param_4) {
    pcVar16 = pcVar10 + lVar13;
    if (pcVar16 <= pcVar10) {
LAB_1802b5007:
      pcVar10 = "emitter";
      do {
        pcVar16 = pcVar10;
        pcVar10 = pcVar16 + 1;
      } while (*pcVar10 != '\0');
      puVar15 = (uint64_t *)unaff_RBX[6];
      while( true ) {
        if (puVar15 == (uint64_t *)0x0) goto FUN_1802b54b3;
        if ((char *)*puVar15 == (char *)0x0) {
          pcVar10 = (char *)0x0;
          pcVar11 = unaff_R14;
        }
        else {
          pcVar10 = (char *)puVar15[2];
          pcVar11 = (char *)*puVar15;
        }
        if (pcVar10 == pcVar16 + -0x180a18047) break;
LAB_1802b5106:
        puVar15 = (uint64_t *)puVar15[0xb];
      }
      pcVar10 = pcVar10 + (longlong)pcVar11;
      if (pcVar11 < pcVar10) {
        lVar13 = (longlong)&UNK_180a18048 - (longlong)pcVar11;
        do {
          if (*pcVar11 != pcVar11[lVar13]) goto LAB_1802b5106;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar10);
      }
LAB_1802b50e0:
      pcVar10 = "guid";
      do {
        pcVar16 = pcVar10;
        pcVar10 = pcVar16 + 1;
      } while (*pcVar10 != '\0');
      for (puVar1 = (uint64_t *)puVar15[8]; puVar1 != (uint64_t *)0x0;
          puVar1 = (uint64_t *)puVar1[6]) {
        if ((char *)*puVar1 == (char *)0x0) {
          pcVar10 = (char *)0x0;
          pcVar11 = unaff_R14;
        }
        else {
          pcVar10 = (char *)puVar1[2];
          pcVar11 = (char *)*puVar1;
        }
        if (pcVar10 == pcVar16 + -0x180a04c43) {
          pcVar10 = pcVar10 + (longlong)pcVar11;
          if (pcVar10 <= pcVar11) break;
          lVar13 = (longlong)&UNK_180a04c44 - (longlong)pcVar11;
          while (*pcVar11 == pcVar11[lVar13]) {
            pcVar11 = pcVar11 + 1;
            if (pcVar10 <= pcVar11) goto LAB_1802b515c;
          }
        }
      }
LAB_1802b515c:
      pfVar7 = (float *)FUN_1802c0460(&param_5);
      plVar2 = *(longlong **)(unaff_RSI + 200);
      param_1 = *pfVar7;
      param_7._4_4_ = pfVar7[1];
      param_8._0_4_ = pfVar7[2];
      param_8._4_4_ = pfVar7[3];
      lVar13 = 0;
      iVar9 = (int)(*(longlong *)(unaff_RSI + 0xd0) - (longlong)plVar2 >> 3);
      param_7._0_4_ = param_1;
      if (0 < iVar9) {
        plVar12 = plVar2;
        do {
          if ((*(longlong *)*plVar12 == *(longlong *)pfVar7) &&
             (((longlong *)*plVar12)[1] == *(longlong *)(pfVar7 + 2))) {
            if (plVar2[lVar13] != 0) {
              param_1 = (float)FUN_180264330(plVar2[lVar13],puVar15);
            }
            break;
          }
          lVar13 = lVar13 + 1;
          plVar12 = plVar12 + 1;
        } while (lVar13 < iVar9);
      }
      pcVar10 = "emitter";
      do {
        pcVar16 = pcVar10;
        pcVar10 = pcVar16 + 1;
      } while (*pcVar10 != '\0');
      puVar15 = (uint64_t *)puVar15[0xb];
      do {
        if (puVar15 == (uint64_t *)0x0) goto FUN_1802b54b3;
        if ((char *)*puVar15 == (char *)0x0) {
          pcVar10 = (char *)0x0;
          pcVar11 = unaff_R14;
        }
        else {
          pcVar10 = (char *)puVar15[2];
          pcVar11 = (char *)*puVar15;
        }
        if (pcVar10 == pcVar16 + -0x180a18047) {
          pcVar10 = pcVar10 + (longlong)pcVar11;
          if (pcVar10 <= pcVar11) goto LAB_1802b50e0;
          lVar13 = (longlong)&UNK_180a18048 - (longlong)pcVar11;
          while (*pcVar11 == pcVar11[lVar13]) {
            pcVar11 = pcVar11 + 1;
            if (pcVar10 <= pcVar11) goto LAB_1802b50e0;
          }
        }
        puVar15 = (uint64_t *)puVar15[0xb];
      } while( true );
    }
    lVar13 = in_R10 - (longlong)pcVar10;
    while (*pcVar10 == pcVar10[lVar13]) {
      pcVar10 = pcVar10 + 1;
      if (pcVar16 <= pcVar10) goto LAB_1802b5007;
    }
  }
  unaff_RBX = (uint64_t *)unaff_RBX[0xb];
  if (unaff_RBX != (uint64_t *)0x0) {
    pcVar10 = (char *)*unaff_RBX;
    if (pcVar10 == (char *)0x0) goto code_r0x0001802b4fde;
    lVar13 = unaff_RBX[2];
    goto LAB_1802b4fe3;
  }
  cVar6 = FUN_1802b61b0(*(uint64_t *)(unaff_RSI + 0x68));
  if (cVar6 == '\0') {
    puVar14 = *(void **)(*(longlong *)(unaff_RSI + 0x68) + 0x50);
    puVar17 = &DAT_18098bc73;
    if (puVar14 != (void *)0x0) {
      puVar17 = puVar14;
    }
    puVar14 = &DAT_18098bc73;
    if (*(void **)(unaff_RSI + 0x50) != (void *)0x0) {
      puVar14 = *(void **)(unaff_RSI + 0x50);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_180a18060,puVar14,puVar17);
  }
  pcVar10 = "emitters";
  do {
    pcVar16 = pcVar10;
    pcVar10 = pcVar16 + 1;
  } while (*pcVar10 != '\0');
  puVar15 = *(uint64_t **)(unaff_RDI + 0x30);
  while( true ) {
    param_1 = extraout_XMM0_Da;
    if (puVar15 == (uint64_t *)0x0) goto FUN_1802b54b3;
    if ((char *)*puVar15 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar11 = unaff_R14;
    }
    else {
      pcVar10 = (char *)puVar15[2];
      pcVar11 = (char *)*puVar15;
    }
    if (pcVar10 == pcVar16 + -0x180a1804f) break;
LAB_1802b52ae:
    puVar15 = (uint64_t *)puVar15[0xb];
  }
  pcVar10 = pcVar11 + (longlong)pcVar10;
  if (pcVar11 < pcVar10) {
    lVar13 = (longlong)&UNK_180a18050 - (longlong)pcVar11;
    do {
      if (*pcVar11 != pcVar11[lVar13]) goto LAB_1802b52ae;
      pcVar11 = pcVar11 + 1;
    } while (pcVar11 < pcVar10);
  }
  pcVar10 = "emitter";
  do {
    pcVar16 = pcVar10;
    pcVar10 = pcVar16 + 1;
  } while (*pcVar10 != '\0');
  puVar15 = (uint64_t *)puVar15[6];
  while( true ) {
    if (puVar15 == (uint64_t *)0x0) goto FUN_1802b54b3;
    if ((char *)*puVar15 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar11 = unaff_R14;
    }
    else {
      pcVar10 = (char *)puVar15[2];
      pcVar11 = (char *)*puVar15;
    }
    if (pcVar10 == pcVar16 + -0x180a18047) break;
FUN_1802b532e:
    puVar15 = (uint64_t *)puVar15[0xb];
  }
  pcVar10 = pcVar10 + (longlong)pcVar11;
  uVar4 = unaff_XMM6_Da;
  uVar5 = unaff_XMM6_Dc;
  if (pcVar11 < pcVar10) {
    lVar13 = (longlong)&UNK_180a18048 - (longlong)pcVar11;
    do {
      if (*pcVar11 != pcVar11[lVar13]) goto FUN_1802b532e;
      pcVar11 = pcVar11 + 1;
      uVar4 = unaff_XMM6_Da;
      uVar5 = unaff_XMM6_Dc;
    } while (pcVar11 < pcVar10);
  }
LAB_1802b5304:
  param_11 = uVar5;
  param_10 = uVar4;
  pcVar10 = "_index_";
  do {
    pcVar16 = pcVar10;
    pcVar10 = pcVar16 + 1;
  } while (*pcVar10 != '\0');
  for (puVar1 = (uint64_t *)puVar15[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar11 = unaff_R14;
    }
    else {
      pcVar10 = (char *)puVar1[2];
      pcVar11 = (char *)*puVar1;
    }
    if (pcVar10 == pcVar16 + -0x180a1692f) {
      pcVar10 = pcVar10 + (longlong)pcVar11;
      if (pcVar10 <= pcVar11) {
LAB_1802b5374:
        pcVar10 = unaff_R14;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar10 = (char *)puVar1[1];
        }
        uVar8 = 0xffffffffffffffff;
        do {
          uVar8 = uVar8 + 1;
        } while (pcVar10[uVar8] != '\0');
        if (((uVar8 < 3) || (*pcVar10 != '0')) ||
           (puVar14 = &UNK_180a3cb84, (pcVar10[1] + 0xa8U & 0xdf) != 0)) {
          puVar14 = &UNK_180a063a0;
        }
        param_1 = (float)FUN_18010cbc0(param_1,puVar14,aiStackX_20);
        if ((ulonglong)(longlong)aiStackX_20[0] <
            (ulonglong)(*(longlong *)(unaff_RSI + 0xd0) - *(longlong *)(unaff_RSI + 200) >> 3)) {
          FUN_180264330(*(uint64_t *)
                         (*(longlong *)(unaff_RSI + 200) + (longlong)aiStackX_20[0] * 8),puVar15);
          lVar13 = *(longlong *)(unaff_RSI + 200);
          lVar3 = *(longlong *)(lVar13 + (longlong)aiStackX_20[0] * 8);
          *(float *)(lVar3 + 0x8c) = *(float *)(lVar3 + 0x8c) * 0.0016666667;
          lVar13 = *(longlong *)(lVar13 + (longlong)aiStackX_20[0] * 8);
          param_1 = *(float *)(lVar13 + 0x90) * 0.0016666667;
          *(float *)(lVar13 + 0x90) = param_1;
        }
        break;
      }
      lVar13 = (longlong)&UNK_180a16930 - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar13]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar10 <= pcVar11) goto LAB_1802b5374;
      }
    }
  }
  pcVar10 = "emitter";
  do {
    pcVar16 = pcVar10;
    pcVar10 = pcVar16 + 1;
  } while (*pcVar10 != '\0');
  puVar15 = (uint64_t *)puVar15[0xb];
  do {
    if (puVar15 == (uint64_t *)0x0) {
FUN_1802b54b3:
      FUN_18026a670(param_1,unaff_RSI + 0xa8);
      *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(param_9 ^ (ulonglong)&stack0x00000000);
    }
    if ((char *)*puVar15 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar11 = unaff_R14;
    }
    else {
      pcVar10 = (char *)puVar15[2];
      pcVar11 = (char *)*puVar15;
    }
    if (pcVar10 == pcVar16 + -0x180a18047) {
      pcVar10 = pcVar10 + (longlong)pcVar11;
      uVar4 = param_10;
      uVar5 = param_11;
      if (pcVar10 <= pcVar11) goto LAB_1802b5304;
      lVar13 = (longlong)&UNK_180a18048 - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar13]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar10 <= pcVar11) goto LAB_1802b5304;
      }
    }
    puVar15 = (uint64_t *)puVar15[0xb];
  } while( true );
}






// 函数: void FUN_1802b52f0(float param_1)
void FUN_1802b52f0(float param_1)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  void *puVar7;
  uint64_t *unaff_RBX;
  longlong unaff_RSI;
  char *unaff_RDI;
  uint64_t *puVar8;
  char *pcVar9;
  char *unaff_R14;
  int aiStackX_20 [2];
  ulonglong in_stack_00000048;
  
LAB_1802b5304:
  pcVar9 = "_index_";
  do {
    pcVar5 = pcVar9;
    pcVar9 = pcVar5 + 1;
  } while (*pcVar9 != '\0');
  puVar8 = (uint64_t *)unaff_RBX[8];
  pcVar9 = unaff_RDI;
  if (puVar8 != (uint64_t *)0x0) {
LAB_1802b5320:
    if ((char *)*puVar8 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = unaff_R14;
    }
    else {
      pcVar2 = (char *)puVar8[2];
      pcVar4 = (char *)*puVar8;
    }
    if (pcVar2 != pcVar5 + -0x180a1692f) goto LAB_1802b545e;
    pcVar2 = pcVar2 + (longlong)pcVar4;
    if (pcVar4 < pcVar2) {
      lVar6 = (longlong)&UNK_180a16930 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar6]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1802b5374;
      }
      goto LAB_1802b545e;
    }
LAB_1802b5374:
    pcVar5 = unaff_R14;
    if ((char *)puVar8[1] != (char *)0x0) {
      pcVar5 = (char *)puVar8[1];
    }
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (pcVar5[uVar3] != '\0');
    if (((uVar3 < 3) || (*pcVar5 != '0')) ||
       (puVar7 = &UNK_180a3cb84, (pcVar5[1] + 0xa8U & 0xdf) != 0)) {
      puVar7 = &UNK_180a063a0;
    }
    param_1 = (float)FUN_18010cbc0(param_1,puVar7,aiStackX_20);
    if ((ulonglong)(longlong)aiStackX_20[0] <
        (ulonglong)(*(longlong *)(unaff_RSI + 0xd0) - *(longlong *)(unaff_RSI + 200) >> 3)) {
      FUN_180264330(*(uint64_t *)(*(longlong *)(unaff_RSI + 200) + (longlong)aiStackX_20[0] * 8),
                    unaff_RBX);
      lVar6 = *(longlong *)(unaff_RSI + 200);
      lVar1 = *(longlong *)(lVar6 + (longlong)aiStackX_20[0] * 8);
      *(float *)(lVar1 + 0x8c) = *(float *)(lVar1 + 0x8c) * 0.0016666667;
      lVar6 = *(longlong *)(lVar6 + (longlong)aiStackX_20[0] * 8);
      param_1 = *(float *)(lVar6 + 0x90) * 0.0016666667;
      *(float *)(lVar6 + 0x90) = param_1;
    }
  }
LAB_1802b5435:
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  unaff_RBX = (uint64_t *)unaff_RBX[0xb];
  do {
    if (unaff_RBX == (uint64_t *)0x0) {
      FUN_18026a670(param_1,unaff_RSI + 0xa8);
      *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
    }
    if ((char *)*unaff_RBX == (char *)0x0) {
      lVar6 = 0;
      pcVar5 = unaff_R14;
    }
    else {
      lVar6 = unaff_RBX[2];
      pcVar5 = (char *)*unaff_RBX;
    }
    if (lVar6 == (longlong)pcVar9 - (longlong)unaff_RDI) {
      pcVar2 = pcVar5 + lVar6;
      if (pcVar2 <= pcVar5) goto LAB_1802b5304;
      lVar6 = (longlong)unaff_RDI - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar6]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802b5304;
      }
    }
    unaff_RBX = (uint64_t *)unaff_RBX[0xb];
  } while( true );
LAB_1802b545e:
  puVar8 = (uint64_t *)puVar8[6];
  if (puVar8 == (uint64_t *)0x0) goto LAB_1802b5435;
  goto LAB_1802b5320;
}






// 函数: void FUN_1802b532e(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1802b532e(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  void *puVar8;
  uint64_t *unaff_RBX;
  longlong unaff_RSI;
  char *unaff_RDI;
  uint64_t *puVar9;
  char *unaff_R14;
  int aiStackX_20 [2];
  ulonglong in_stack_00000048;
  
  while (unaff_RBX = (uint64_t *)unaff_RBX[0xb], unaff_RBX != (uint64_t *)0x0) {
    if ((char *)*unaff_RBX == (char *)0x0) {
      lVar7 = 0;
      pcVar4 = unaff_R14;
    }
    else {
      lVar7 = unaff_RBX[2];
      pcVar4 = (char *)*unaff_RBX;
    }
    if (lVar7 == param_4) {
      pcVar6 = pcVar4 + lVar7;
      if (pcVar6 <= pcVar4) goto LAB_1802b5304;
      lVar7 = (longlong)unaff_RDI - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar6 <= pcVar4) goto LAB_1802b5304;
      }
    }
  }
FUN_1802b54b3:
  FUN_18026a670(param_1,unaff_RSI + 0xa8);
  *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
LAB_1802b5304:
  pcVar4 = "_index_";
  do {
    pcVar6 = pcVar4;
    pcVar4 = pcVar6 + 1;
  } while (*pcVar4 != '\0');
  puVar9 = (uint64_t *)unaff_RBX[8];
  pcVar4 = unaff_RDI;
  if (puVar9 != (uint64_t *)0x0) {
LAB_1802b5320:
    if ((char *)*puVar9 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar5 = unaff_R14;
    }
    else {
      pcVar2 = (char *)puVar9[2];
      pcVar5 = (char *)*puVar9;
    }
    if (pcVar2 != pcVar6 + -0x180a1692f) goto LAB_1802b545e;
    pcVar2 = pcVar2 + (longlong)pcVar5;
    if (pcVar5 < pcVar2) {
      lVar7 = (longlong)&UNK_180a16930 - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar7]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802b5374;
      }
      goto LAB_1802b545e;
    }
LAB_1802b5374:
    pcVar6 = unaff_R14;
    if ((char *)puVar9[1] != (char *)0x0) {
      pcVar6 = (char *)puVar9[1];
    }
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (pcVar6[uVar3] != '\0');
    if (((uVar3 < 3) || (*pcVar6 != '0')) ||
       (puVar8 = &UNK_180a3cb84, (pcVar6[1] + 0xa8U & 0xdf) != 0)) {
      puVar8 = &UNK_180a063a0;
    }
    param_1 = (float)FUN_18010cbc0(param_1,puVar8,aiStackX_20);
    if ((ulonglong)(longlong)aiStackX_20[0] <
        (ulonglong)(*(longlong *)(unaff_RSI + 0xd0) - *(longlong *)(unaff_RSI + 200) >> 3)) {
      FUN_180264330(*(uint64_t *)(*(longlong *)(unaff_RSI + 200) + (longlong)aiStackX_20[0] * 8),
                    unaff_RBX);
      lVar7 = *(longlong *)(unaff_RSI + 200);
      lVar1 = *(longlong *)(lVar7 + (longlong)aiStackX_20[0] * 8);
      *(float *)(lVar1 + 0x8c) = *(float *)(lVar1 + 0x8c) * 0.0016666667;
      lVar7 = *(longlong *)(lVar7 + (longlong)aiStackX_20[0] * 8);
      param_1 = *(float *)(lVar7 + 0x90) * 0.0016666667;
      *(float *)(lVar7 + 0x90) = param_1;
    }
  }
LAB_1802b5435:
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  unaff_RBX = (uint64_t *)unaff_RBX[0xb];
  if (unaff_RBX != (uint64_t *)0x0) {
    do {
      if ((char *)*unaff_RBX == (char *)0x0) {
        lVar7 = 0;
        pcVar6 = unaff_R14;
      }
      else {
        lVar7 = unaff_RBX[2];
        pcVar6 = (char *)*unaff_RBX;
      }
      if (lVar7 == (longlong)pcVar4 - (longlong)unaff_RDI) {
        pcVar2 = pcVar6 + lVar7;
        if (pcVar2 <= pcVar6) goto LAB_1802b5304;
        lVar7 = (longlong)unaff_RDI - (longlong)pcVar6;
        while (*pcVar6 == pcVar6[lVar7]) {
          pcVar6 = pcVar6 + 1;
          if (pcVar2 <= pcVar6) goto LAB_1802b5304;
        }
      }
      unaff_RBX = (uint64_t *)unaff_RBX[0xb];
      if (unaff_RBX == (uint64_t *)0x0) break;
    } while( true );
  }
  goto FUN_1802b54b3;
LAB_1802b545e:
  puVar9 = (uint64_t *)puVar9[6];
  if (puVar9 == (uint64_t *)0x0) goto LAB_1802b5435;
  goto LAB_1802b5320;
}






// 函数: void FUN_1802b5340(float param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
void FUN_1802b5340(float param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  void *puVar6;
  uint64_t *unaff_RBX;
  char *unaff_RBP;
  longlong unaff_RSI;
  char *unaff_RDI;
  char *pcVar7;
  char *pcVar8;
  longlong in_R10;
  char *unaff_R14;
  float unaff_XMM6_Da;
  int aiStackX_20 [2];
  ulonglong in_stack_00000048;
  
code_r0x0001802b5340:
  lVar5 = 0;
  pcVar4 = unaff_R14;
  do {
    pcVar7 = unaff_RDI;
    if (lVar5 == in_R10) {
      pcVar1 = pcVar4 + lVar5;
      if (pcVar4 < pcVar1) {
        lVar5 = (longlong)unaff_RBP - (longlong)pcVar4;
        do {
          if (*pcVar4 != pcVar4[lVar5]) goto LAB_1802b545e;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < pcVar1);
      }
      pcVar4 = unaff_R14;
      if ((char *)param_4[1] != (char *)0x0) {
        pcVar4 = (char *)param_4[1];
      }
      uVar3 = 0xffffffffffffffff;
      do {
        uVar3 = uVar3 + 1;
      } while (pcVar4[uVar3] != '\0');
      if (((uVar3 < 3) || (*pcVar4 != '0')) ||
         (puVar6 = &UNK_180a3cb84, (pcVar4[1] + 0xa8U & 0xdf) != 0)) {
        puVar6 = &UNK_180a063a0;
      }
      param_1 = (float)FUN_18010cbc0(param_1,puVar6,aiStackX_20);
      if ((ulonglong)(longlong)aiStackX_20[0] <
          (ulonglong)(*(longlong *)(unaff_RSI + 0xd0) - *(longlong *)(unaff_RSI + 200) >> 3)) {
        FUN_180264330(*(uint64_t *)(*(longlong *)(unaff_RSI + 200) + (longlong)aiStackX_20[0] * 8)
                      ,unaff_RBX);
        lVar5 = *(longlong *)(unaff_RSI + 200);
        lVar2 = *(longlong *)(lVar5 + (longlong)aiStackX_20[0] * 8);
        *(float *)(lVar2 + 0x8c) = *(float *)(lVar2 + 0x8c) * unaff_XMM6_Da;
        lVar5 = *(longlong *)(lVar5 + (longlong)aiStackX_20[0] * 8);
        param_1 = *(float *)(lVar5 + 0x90) * unaff_XMM6_Da;
        *(float *)(lVar5 + 0x90) = param_1;
      }
LAB_1802b5435:
      do {
        pcVar7 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      unaff_RBX = (uint64_t *)unaff_RBX[0xb];
      do {
        if (unaff_RBX == (uint64_t *)0x0) {
          FUN_18026a670(param_1,unaff_RSI + 0xa8);
          *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
                    // WARNING: Subroutine does not return
          FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
        }
        if ((char *)*unaff_RBX == (char *)0x0) {
          lVar5 = 0;
          pcVar4 = unaff_R14;
        }
        else {
          lVar5 = unaff_RBX[2];
          pcVar4 = (char *)*unaff_RBX;
        }
        if (lVar5 == (longlong)pcVar7 - (longlong)unaff_RDI) {
          pcVar1 = pcVar4 + lVar5;
          pcVar8 = unaff_RBP;
          if (pcVar1 <= pcVar4) goto LAB_1802b5307;
          lVar5 = (longlong)unaff_RDI - (longlong)pcVar4;
          while (*pcVar4 == pcVar4[lVar5]) {
            pcVar4 = pcVar4 + 1;
            if (pcVar1 <= pcVar4) goto LAB_1802b5307;
          }
        }
        unaff_RBX = (uint64_t *)unaff_RBX[0xb];
      } while( true );
    }
LAB_1802b545e:
    param_4 = (uint64_t *)param_4[6];
    if (param_4 == (uint64_t *)0x0) goto LAB_1802b5435;
LAB_1802b5320:
    pcVar4 = (char *)*param_4;
    if (pcVar4 == (char *)0x0) goto code_r0x0001802b5340;
    lVar5 = param_4[2];
  } while( true );
LAB_1802b5307:
  do {
    pcVar8 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  param_4 = (uint64_t *)unaff_RBX[8];
  in_R10 = (longlong)pcVar8 - (longlong)unaff_RBP;
  pcVar7 = unaff_RDI;
  if (param_4 != (uint64_t *)0x0) goto LAB_1802b5320;
  goto LAB_1802b5435;
}






// 函数: void FUN_1802b54b3(void)
void FUN_1802b54b3(void)

{
  longlong unaff_RSI;
  ulonglong in_stack_00000048;
  
  FUN_18026a670();
  *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b5530(longlong param_1,longlong param_2,longlong param_3,char param_4)
void FUN_1802b5530(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  int8_t auVar1 [16];
  char cVar2;
  longlong lVar3;
  int iVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint64_t *puVar8;
  char cVar9;
  longlong lVar10;
  void *puVar11;
  int8_t auStack_168 [32];
  uint uStack_148;
  uint uStack_140;
  uint uStack_138;
  uint uStack_130;
  uint uStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  char cStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  uint64_t *puStack_e0;
  uint64_t uStack_d8;
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  uint8_t auStack_b0 [72];
  int8_t auStack_68 [40];
  ulonglong uStack_40;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  cVar9 = '\0';
  cStack_f8 = param_4;
  lStack_f0 = param_2;
  lStack_e8 = param_3;
  if ((*(uint *)(param_1 + 0x70) & 0xfffffffd) != 0) goto LAB_1802b58d6;
  puVar5 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  *(int32_t *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  puVar5[8] = 0;
  pcVar6 = "effect";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  *puVar5 = &UNK_180a17ea8;
  puVar5[2] = pcVar7 + -0x180a17ea7;
  lVar3 = *(longlong *)(param_1 + 0x68);
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == *(int *)(lVar3 + 0x28)) {
    if (iVar4 == 0) {
LAB_1802b562d:
      if (*(int *)(lVar3 + 0x28) != 0) goto LAB_1802b5631;
    }
    else {
      pcVar6 = *(char **)(param_1 + 0x20);
      pcVar7 = pcVar6;
      do {
        cVar9 = *pcVar7;
        cVar2 = pcVar7[*(longlong *)(lVar3 + 0x20) - (longlong)pcVar6];
        if (cVar9 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (cVar9 != cVar2) goto LAB_1802b5635;
    }
  }
  else {
    if (iVar4 == 0) goto LAB_1802b562d;
LAB_1802b5631:
    pcVar6 = *(char **)(param_1 + 0x20);
LAB_1802b5635:
    pcVar7 = "";
    if (pcVar6 != (char *)0x0) {
      pcVar7 = pcVar6;
    }
    FUN_180630b20(param_2,puVar5,&UNK_180a18088,pcVar7);
  }
  puVar8 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[4] = 0;
  *(int32_t *)(puVar8 + 5) = 1;
  puVar8[6] = 0;
  puVar8[8] = 0;
  pcVar6 = "emitter_overrides";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  *puVar8 = &UNK_180a18098;
  puVar8[2] = pcVar7 + -0x180a18097;
  iVar4 = (int)(*(longlong *)(param_1 + 0xd0) - *(longlong *)(param_1 + 200) >> 3);
  if (0 < iVar4) {
    lVar10 = 0;
    do {
      FUN_1802b18a0(*(uint64_t *)(*(longlong *)(param_1 + 200) + lVar10 * 8),param_2,puVar8,
                    *(uint64_t *)(*(longlong *)(lVar3 + 200) + lVar10 * 8));
      lVar10 = lVar10 + 1;
      param_3 = lStack_e8;
    } while (lVar10 < iVar4);
  }
  if ((puVar8[6] != 0) || (puVar8[8] != 0)) {
    if (puVar5[6] == 0) {
      puVar8[10] = 0;
      puVar5[6] = puVar8;
      puVar5[7] = puVar8;
      puVar8[4] = puVar5;
      puVar8[0xb] = 0;
    }
    else {
      puVar8[10] = puVar5[7];
      *(uint64_t **)(puVar5[7] + 0x58) = puVar8;
      puVar5[7] = puVar8;
      puVar8[4] = puVar5;
      puVar8[0xb] = 0;
    }
  }
  if ((puVar5[6] != 0) || (cVar9 = cStack_f8, puVar5[8] != 0)) {
    if (*(longlong *)(param_3 + 0x30) == 0) {
      puVar5[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar5;
    }
    else {
      puVar5[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(longlong *)(param_3 + 0x38) + 0x58) = puVar5;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar5;
    puVar5[4] = param_3;
    puVar5[0xb] = 0;
    puStack_c8 = &UNK_1809fcc58;
    puStack_c0 = auStack_b0;
    uStack_b8 = 0;
    auStack_b0[0] = 0;
    auVar1 = *(int8_t (*) [16])(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) + 0xc);
    uStack_108 = auVar1._14_2_ & 0xff;
    uStack_110 = auVar1._12_4_ >> 8 & 0xff;
    uStack_118 = auVar1._12_4_ & 0xff;
    uStack_120 = auVar1._11_4_ & 0xff;
    uStack_128 = auVar1._10_4_ & 0xff;
    uStack_130 = auVar1._9_4_ & 0xff;
    uStack_148 = auVar1._4_4_ & 0xffff;
    uStack_100 = (uint)auVar1[0xf];
    uStack_138 = (uint)auVar1[8];
    uStack_140 = (uint)auVar1._6_2_;
    FUN_180626eb0(auStack_68,0x28,&UNK_180a3d070);
    (**(code **)(puStack_c8 + 0x18))(&puStack_c8,auStack_68,0x26);
    param_2 = lStack_f0;
    puVar11 = &DAT_18098bc73;
    if (puStack_c0 != (void *)0x0) {
      puVar11 = puStack_c0;
    }
    FUN_180630b20(lStack_f0,puVar5,&UNK_180a17e68,puVar11);
    puStack_c8 = &UNK_18098bcb0;
    cVar9 = '\0';
  }
LAB_1802b58d6:
  if (((*(int *)(param_1 + 0x70) == 1) && (cStack_f8 == '\x01')) || (cVar9 != '\0')) {
    puStack_e0 = (uint64_t *)FUN_1804c1300(param_2 + 0x60,0x60);
    *puStack_e0 = 0;
    puStack_e0[1] = 0;
    puStack_e0[4] = 0;
    *(int32_t *)(puStack_e0 + 5) = 1;
    puStack_e0[6] = 0;
    puStack_e0[8] = 0;
    pcVar6 = "effect_ref";
    do {
      pcVar7 = pcVar6;
      pcVar6 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    *puStack_e0 = &UNK_180a17eb0;
    puStack_e0[2] = pcVar7 + -0x180a17eaf;
    puStack_c8 = &UNK_1809fcc58;
    puStack_c0 = auStack_b0;
    uStack_b8 = 0;
    auStack_b0[0] = 0;
    auVar1 = *(int8_t (*) [16])(*(longlong *)(param_1 + 0x10) + 0xc);
    uStack_108 = auVar1._14_2_ & 0xff;
    uStack_110 = auVar1._12_4_ >> 8 & 0xff;
    uStack_118 = auVar1._12_4_ & 0xff;
    uStack_120 = auVar1._11_4_ & 0xff;
    uStack_128 = auVar1._10_4_ & 0xff;
    uStack_130 = auVar1._9_4_ & 0xff;
    uStack_148 = auVar1._4_4_ & 0xffff;
    uStack_100 = (uint)auVar1[0xf];
    uStack_138 = (uint)auVar1[8];
    uStack_140 = (uint)auVar1._6_2_;
    FUN_180626eb0(auStack_68,0x28,&UNK_180a3d070);
    (**(code **)(puStack_c8 + 0x18))(&puStack_c8,auStack_68,0x26);
    puVar5 = puStack_e0;
    puVar11 = &DAT_18098bc73;
    if (puStack_c0 != (void *)0x0) {
      puVar11 = puStack_c0;
    }
    FUN_180630b20(lStack_f0,puStack_e0,&UNK_180a17e68,puVar11);
    if (*(longlong *)(lStack_e8 + 0x30) == 0) {
      puVar5[10] = 0;
      *(uint64_t **)(lStack_e8 + 0x30) = puVar5;
    }
    else {
      puVar5[10] = *(uint64_t *)(lStack_e8 + 0x38);
      *(uint64_t **)(*(longlong *)(lStack_e8 + 0x38) + 0x58) = puVar5;
    }
    *(uint64_t **)(lStack_e8 + 0x38) = puVar5;
    puVar5[4] = lStack_e8;
    puVar5[0xb] = 0;
    puStack_c8 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1802b5ac0(longlong *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x108,8,3,0,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_1802b6690(uVar2);
  if ((int)plVar3[0xe] == 1) {
    FUN_180626f80(&UNK_180a180d0);
  }
  else {
    if (plVar3[2] != param_1[2]) {
      plVar3[2] = param_1[2];
    }
    FUN_180627be0(plVar3 + 9,param_1 + 9);
    FUN_18026d3f0(plVar3 + 0x15,param_1 + 0x15);
    FUN_18026a670(plVar3,plVar3 + 0x15);
    *(int *)(plVar3 + 8) = (int)plVar3[8] + 1;
  }
  if ((int)param_1[0xe] == 1) {
    (**(code **)(*param_1 + 0x28))(param_1);
    plVar1 = (longlong *)plVar3[0xd];
    plVar3[0xd] = (longlong)param_1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  else if ((int)param_1[0xe] == 2) {
    FUN_180056f10(plVar3 + 0xd,param_1);
  }
  else {
    FUN_180080810(plVar3 + 0xd,param_1 + 0xd);
  }
  *param_2 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return param_2;
}



longlong * FUN_1802b5be0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)(param_1 + 0x88) + 8 + (longlong)param_3 * 0x28) +
            (longlong)param_4 * 8);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




