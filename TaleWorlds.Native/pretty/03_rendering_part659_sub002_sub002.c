#include "TaleWorlds.Native.Split.h"

// 03_rendering_part659_sub002_sub002.c - 1 个函数

// 函数: void FUN_180640835(void)
void FUN_180640835(void)

{
  char cVar1;
  longlong in_RAX;
  uint64_t *unaff_RBX;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_R15;
  longlong lVar6;
  bool bVar7;
  uint64_t uStack0000000000000068;
  
  puVar2 = (uint64_t *)(in_RAX + -8);
  do {
    uStack0000000000000068 = *puVar2;
    lVar6 = unaff_R15 + -1;
    lVar5 = 0;
    lVar4 = 2;
    *puVar2 = *unaff_RBX;
    bVar7 = lVar6 == 2;
    lVar3 = lVar5;
    if (2 < lVar6) {
      do {
        cVar1 = func_0x00018063e940(unaff_RBX + lVar4,unaff_RBX + lVar4 + -1);
        lVar5 = lVar4;
        if (cVar1 != '\0') {
          lVar5 = lVar4 + -1;
        }
        unaff_RBX[lVar3] = unaff_RBX[lVar5];
        lVar4 = lVar5 * 2 + 2;
        bVar7 = lVar4 == lVar6;
        lVar3 = lVar5;
      } while (lVar4 < lVar6);
    }
    if (bVar7) {
      unaff_RBX[lVar5] = unaff_RBX[lVar4 + -1];
      lVar5 = lVar4 + -1;
    }
    while (0 < lVar5) {
      lVar4 = lVar5 + -1 >> 1;
      cVar1 = func_0x00018063e940(unaff_RBX + lVar4,&stack0x00000068);
      if (cVar1 == '\0') break;
      unaff_RBX[lVar5] = unaff_RBX[lVar4];
      lVar5 = lVar4;
    }
    puVar2 = puVar2 + -1;
    unaff_RBX[lVar5] = uStack0000000000000068;
    unaff_R15 = (8 - (longlong)unaff_RBX) + (longlong)puVar2 >> 3;
    if (unaff_R15 < 2) {
      return;
    }
  } while( true );
}



uint64_t FUN_180640a00(longlong param_1,int *param_2,short *param_3,uint param_4,int param_5)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int32_t uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  char *pcVar15;
  short *psVar16;
  short *psVar17;
  longlong lVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  ulonglong *puVar23;
  char *pcVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  int iVar29;
  int *piVar30;
  
  if (param_1 != 0) {
                    // WARNING: Subroutine does not return
    memset(param_1,0,0x4020);
  }
  if (param_4 < 0x7e000001) {
    iVar5 = param_4 + 0x10 + (int)param_4 / 0xff;
  }
  else {
    iVar5 = 0;
  }
  if (param_5 < iVar5) {
    pcVar24 = (char *)((longlong)param_3 + (longlong)param_5);
    lVar18 = (longlong)param_2 - (ulonglong)uRam0000000000004000;
    iVar5 = (int)lVar18;
    if ((int)param_4 < 0x1000b) {
      if (param_4 < 0x7e000001) {
        iRam0000000000004018 = iRam0000000000004018 + param_4;
        uRam0000000000004000 = uRam0000000000004000 + param_4;
        uRam0000000000004006 = 3;
        piVar21 = param_2;
        if (0xc < (int)param_4) {
          func_0x0001806409a0(param_2,(uint)(*param_2 * -0x61c8864f) >> 0x13,0,3,lVar18);
          piVar22 = (int *)((longlong)param_2 + 1);
LAB_180641392:
          iVar6 = *piVar22;
          iVar27 = 1;
          iVar29 = 0x40;
          do {
            piVar30 = piVar22;
            lVar28 = (longlong)iVar27;
            puVar4 = (ushort *)((ulonglong)((uint)(iVar6 * -0x61c8864f) >> 0x13) * 2);
            iVar27 = iVar29 >> 6;
            piVar22 = (int *)((longlong)piVar30 + lVar28);
            iVar29 = iVar29 + 1;
            if ((int *)((longlong)param_2 + (longlong)(int)param_4 + -0xb) < piVar22)
            goto LAB_18064170e;
            iVar6 = *piVar22;
            piVar20 = (int *)((ulonglong)*puVar4 + lVar18);
            *puVar4 = (short)piVar30 - (short)lVar18;
          } while (*piVar20 != *piVar30);
          if (piVar21 < piVar30 && param_2 < piVar20) {
            do {
              piVar22 = (int *)((longlong)piVar20 - 1);
              piVar19 = (int *)((longlong)piVar30 - 1);
              if (*(char *)((longlong)piVar30 - 1) != *(char *)((longlong)piVar20 - 1)) break;
              piVar20 = piVar22;
              piVar30 = piVar19;
            } while (param_2 < piVar22 && piVar21 < piVar19);
          }
          psVar16 = (short *)((longlong)param_3 + 1);
          uVar25 = (int)piVar30 - (int)piVar21;
          if (pcVar24 < (char *)((ulonglong)uVar25 / 0xff + 8 + (ulonglong)uVar25 +
                                (longlong)psVar16)) {
            return 0;
          }
          if (uVar25 < 0xf) {
            *(char *)param_3 = (char)uVar25 << 4;
          }
          else {
            uVar26 = uVar25 - 0xf;
            *(char *)param_3 = -0x10;
            if (0xfe < (int)uVar26) {
              uVar9 = (ulonglong)uVar26 / 0xff;
              psVar17 = psVar16;
              for (uVar10 = uVar9; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(char *)psVar17 = -1;
                psVar17 = (short *)((longlong)psVar17 + 1);
              }
              psVar16 = (short *)((longlong)psVar16 + uVar9);
              uVar26 = uVar26 + (int)uVar9 * -0xff;
            }
            *(char *)psVar16 = (char)uVar26;
            psVar16 = (short *)((longlong)psVar16 + 1);
          }
          psVar17 = (short *)((ulonglong)uVar25 + (longlong)psVar16);
          lVar28 = (longlong)piVar21 - (longlong)psVar16;
          do {
            *(uint64_t *)psVar16 = *(uint64_t *)((longlong)psVar16 + lVar28);
            psVar16 = psVar16 + 4;
          } while (psVar16 < psVar17);
          puVar1 = (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -0xc);
          piVar21 = piVar30;
          psVar16 = param_3;
          do {
            puVar13 = (ulonglong *)(piVar20 + 1);
            puVar11 = (ulonglong *)(piVar21 + 1);
            *psVar17 = (short)piVar21 - (short)piVar20;
            param_3 = psVar17 + 1;
            puVar12 = puVar11;
            if (puVar11 < puVar1) {
              if ((*puVar11 ^ *puVar13) == 0) {
                puVar12 = (ulonglong *)(piVar21 + 3);
                puVar13 = (ulonglong *)(piVar20 + 3);
                goto LAB_180641532;
              }
              uVar25 = func_0x000180640950(*puVar11 ^ *puVar13);
            }
            else {
LAB_180641532:
              for (; puVar12 < puVar1; puVar12 = puVar12 + 1) {
                if ((*puVar12 ^ *puVar13) != 0) {
                  iVar6 = func_0x000180640950(*puVar12 ^ *puVar13);
                  uVar25 = ((int)puVar12 - (int)puVar11) + iVar6;
                  goto LAB_18064159e;
                }
                puVar13 = puVar13 + 1;
              }
              if ((puVar12 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -8)) &&
                 ((int)*puVar13 == (int)*puVar12)) {
                puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                puVar13 = (ulonglong *)((longlong)puVar13 + 4);
              }
              if ((puVar12 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -6)) &&
                 ((short)*puVar13 == (short)*puVar12)) {
                puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                puVar13 = (ulonglong *)((longlong)puVar13 + 2);
              }
              if ((puVar12 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -5)) &&
                 ((char)*puVar13 == (char)*puVar12)) {
                puVar12 = (ulonglong *)((longlong)puVar12 + 1);
              }
              uVar25 = (int)puVar12 - (int)puVar11;
            }
LAB_18064159e:
            piVar21 = (int *)((longlong)piVar21 + (ulonglong)uVar25 + 4);
            if (pcVar24 < (char *)((longlong)psVar17 + (ulonglong)(uVar25 + 0xf0) / 0xff + 8)) {
              return 0;
            }
            if (uVar25 < 0xf) {
              *(char *)psVar16 = (char)*psVar16 + (char)uVar25;
            }
            else {
              uVar25 = uVar25 - 0xf;
              *(char *)psVar16 = (char)*psVar16 + '\x0f';
              param_3[0] = -1;
              param_3[1] = -1;
              if (0x3fb < uVar25) {
                uVar9 = (ulonglong)uVar25 / 0x3fc;
                do {
                  param_3 = param_3 + 2;
                  uVar25 = uVar25 - 0x3fc;
                  param_3[0] = -1;
                  param_3[1] = -1;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              pcVar15 = (char *)((longlong)param_3 + (ulonglong)uVar25 / 0xff);
              *pcVar15 = (char)uVar25 + (char)((ulonglong)uVar25 / 0xff);
              param_3 = (short *)(pcVar15 + 1);
            }
            if ((int *)((longlong)param_2 + (longlong)(int)param_4 + -0xb) <= piVar21) break;
            func_0x0001806409a0((longlong)piVar21 + -2,
                                (uint)(*(int *)((longlong)piVar21 + -2) * -0x61c8864f) >> 0x13,0,3,
                                lVar18);
            uVar26 = (uint)(*piVar21 * -0x61c8864f) >> 0x13;
            uVar25 = func_0x0001806409e0(uVar26,0,3);
            piVar20 = (int *)((ulonglong)uVar25 + lVar18);
            func_0x000180640980((int)piVar21 - iVar5,uVar26,0,3);
            if (*piVar20 != *piVar21) goto LAB_1806416f4;
            psVar17 = (short *)((longlong)param_3 + 1);
            *(char *)param_3 = '\0';
            psVar16 = param_3;
          } while( true );
        }
LAB_18064170e:
        uVar9 = (longlong)param_2 + ((longlong)(int)param_4 - (longlong)piVar21);
        if ((char *)((longlong)param_3 + (uVar9 + 0xf0) / 0xff + uVar9 + 1) <= pcVar24) {
          if (uVar9 < 0xf) {
            *(char *)param_3 = (char)uVar9 << 4;
          }
          else {
            *(char *)param_3 = -0x10;
            uVar10 = uVar9 - 0xf;
            psVar16 = (short *)((longlong)param_3 + 1);
            param_3 = psVar16;
            if (0xfe < uVar10) {
              uVar14 = uVar10 / 0xff;
              param_3 = (short *)((longlong)psVar16 + uVar14);
              for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(char *)psVar16 = -1;
                psVar16 = (short *)((longlong)psVar16 + 1);
              }
              uVar10 = uVar10 % 0xff;
            }
            *(char *)param_3 = (char)uVar10;
          }
                    // WARNING: Subroutine does not return
          memcpy((char *)((longlong)param_3 + 1),piVar21,uVar9);
        }
      }
    }
    else if (param_4 < 0x7e000001) {
      iRam0000000000004018 = iRam0000000000004018 + param_4;
      uRam0000000000004000 = uRam0000000000004000 + param_4;
      uRam0000000000004006 = 2;
      uVar7 = func_0x000180640960(*(uint64_t *)param_2,2);
      func_0x0001806409a0(param_2,uVar7,0,2,lVar18);
      piVar21 = param_2;
LAB_18064180b:
      uVar25 = func_0x000180640960(*(uint64_t *)((longlong)piVar21 + 1),2);
      iVar6 = 0x40;
      uVar9 = (ulonglong)uVar25;
      iVar27 = 1;
      piVar22 = (int *)((longlong)piVar21 + 1);
      do {
        piVar20 = piVar22;
        uVar26 = (int)piVar20 - iVar5;
        puVar3 = (uint *)(uVar9 * 4);
        uVar25 = *puVar3;
        piVar22 = (int *)((longlong)piVar20 + (longlong)iVar27);
        iVar27 = iVar6 >> 6;
        iVar6 = iVar6 + 1;
        piVar30 = piVar21;
        if ((int *)((longlong)param_2 + (longlong)(int)param_4 + -0xb) < piVar22)
        goto LAB_180641bbf;
        piVar19 = (int *)(lVar18 + (ulonglong)uVar25);
        uVar8 = func_0x000180640960(*(uint64_t *)piVar22,2);
        uVar9 = (ulonglong)uVar8;
        *puVar3 = uVar26;
      } while ((uVar25 + 0xffff < uVar26) || (*piVar19 != *piVar20));
      piVar30 = piVar20;
      if (param_2 < piVar19 && piVar21 < piVar20) {
        do {
          piVar22 = (int *)((longlong)piVar19 - 1);
          piVar2 = (int *)((longlong)piVar20 - 1);
          piVar30 = piVar20;
          if (*(char *)((longlong)piVar20 - 1) != *(char *)((longlong)piVar19 - 1)) break;
          piVar19 = piVar22;
          piVar30 = piVar2;
          piVar20 = piVar2;
        } while (param_2 < piVar22 && piVar21 < piVar2);
      }
      psVar16 = (short *)((longlong)param_3 + 1);
      uVar25 = (int)piVar30 - (int)piVar21;
      if ((char *)((longlong)psVar16 + (ulonglong)uVar25 + (ulonglong)uVar25 / 0xff + 8) <= pcVar24)
      {
        if (uVar25 < 0xf) {
          *(char *)param_3 = (char)uVar25 << 4;
        }
        else {
          uVar26 = uVar25 - 0xf;
          *(char *)param_3 = -0x10;
          if (0xfe < (int)uVar26) {
            uVar9 = (ulonglong)uVar26 / 0xff;
            psVar17 = psVar16;
            for (uVar10 = uVar9; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(char *)psVar17 = -1;
              psVar17 = (short *)((longlong)psVar17 + 1);
            }
            psVar16 = (short *)((longlong)psVar16 + uVar9);
            uVar26 = uVar26 + (int)uVar9 * -0xff;
          }
          *(char *)psVar16 = (char)uVar26;
          psVar16 = (short *)((longlong)psVar16 + 1);
        }
        psVar17 = (short *)((longlong)psVar16 + (ulonglong)uVar25);
        lVar28 = (longlong)piVar21 - (longlong)psVar16;
        do {
          *(uint64_t *)psVar16 = *(uint64_t *)(lVar28 + (longlong)psVar16);
          psVar16 = psVar16 + 4;
        } while (psVar16 < psVar17);
        puVar1 = (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -0xc);
        psVar16 = param_3;
        do {
          puVar13 = (ulonglong *)(piVar19 + 1);
          puVar11 = (ulonglong *)(piVar30 + 1);
          *psVar17 = (short)piVar30 - (short)piVar19;
          param_3 = psVar17 + 1;
          puVar12 = puVar11;
          if (puVar11 < puVar1) {
            if ((*puVar11 ^ *puVar13) == 0) {
              puVar12 = (ulonglong *)(piVar30 + 3);
              puVar13 = (ulonglong *)(piVar19 + 3);
              goto LAB_1806419f2;
            }
            uVar25 = func_0x000180640950(*puVar11 ^ *puVar13);
            uVar9 = (ulonglong)uVar25;
          }
          else {
LAB_1806419f2:
            for (; puVar12 < puVar1; puVar12 = puVar12 + 1) {
              if ((*puVar12 ^ *puVar13) != 0) {
                iVar6 = func_0x000180640950(*puVar12 ^ *puVar13);
                uVar9 = (ulonglong)(uint)(((int)puVar12 - (int)puVar11) + iVar6);
                goto LAB_180641a5e;
              }
              puVar13 = puVar13 + 1;
            }
            if ((puVar12 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -8)) &&
               ((int)*puVar13 == (int)*puVar12)) {
              puVar12 = (ulonglong *)((longlong)puVar12 + 4);
              puVar13 = (ulonglong *)((longlong)puVar13 + 4);
            }
            if ((puVar12 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -6)) &&
               ((short)*puVar13 == (short)*puVar12)) {
              puVar12 = (ulonglong *)((longlong)puVar12 + 2);
              puVar13 = (ulonglong *)((longlong)puVar13 + 2);
            }
            if ((puVar12 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -5)) &&
               ((char)*puVar13 == (char)*puVar12)) {
              puVar12 = (ulonglong *)((longlong)puVar12 + 1);
            }
            uVar9 = (ulonglong)(uint)((int)puVar12 - (int)puVar11);
          }
LAB_180641a5e:
          uVar25 = (uint)uVar9;
          piVar30 = (int *)((longlong)piVar30 + uVar9 + 4);
          if (pcVar24 < (char *)((longlong)psVar17 + (ulonglong)(uVar25 + 0xf0) / 0xff + 8)) {
            return 0;
          }
          if (uVar25 < 0xf) {
            *(char *)psVar16 = (char)uVar9 + (char)*psVar16;
          }
          else {
            uVar25 = uVar25 - 0xf;
            uVar9 = (ulonglong)uVar25;
            *(char *)psVar16 = (char)*psVar16 + '\x0f';
            param_3[0] = -1;
            param_3[1] = -1;
            if (0x3fb < uVar25) {
              uVar10 = (ulonglong)uVar25 / 0x3fc;
              do {
                param_3 = param_3 + 2;
                uVar9 = (ulonglong)((int)uVar9 - 0x3fc);
                param_3[0] = -1;
                param_3[1] = -1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            pcVar15 = (char *)((longlong)param_3 + uVar9 / 0xff);
            *pcVar15 = (char)(uVar9 / 0xff) + (char)uVar9;
            param_3 = (short *)(pcVar15 + 1);
          }
          if ((int *)((longlong)param_2 + (longlong)(int)param_4 + -0xb) <= piVar30) {
LAB_180641bbf:
            uVar9 = (longlong)param_2 + ((longlong)(int)param_4 - (longlong)piVar30);
            if (pcVar24 < (char *)((longlong)param_3 + uVar9 + 1 + (uVar9 + 0xf0) / 0xff)) {
              return 0;
            }
            if (uVar9 < 0xf) {
              *(char *)param_3 = (char)uVar9 << 4;
            }
            else {
              *(char *)param_3 = -0x10;
              uVar10 = uVar9 - 0xf;
              psVar16 = (short *)((longlong)param_3 + 1);
              param_3 = psVar16;
              if (0xfe < uVar10) {
                uVar14 = uVar10 / 0xff;
                param_3 = (short *)((longlong)psVar16 + uVar14);
                for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(char *)psVar16 = -1;
                  psVar16 = (short *)((longlong)psVar16 + 1);
                }
                uVar10 = uVar10 % 0xff;
              }
              *(char *)param_3 = (char)uVar10;
            }
                    // WARNING: Subroutine does not return
            memcpy((char *)((longlong)param_3 + 1),piVar30,uVar9);
          }
          uVar7 = func_0x000180640960(*(uint64_t *)((longlong)piVar30 + -2),2);
          func_0x0001806409a0((longlong)piVar30 + -2,uVar7,0,2,lVar18);
          uVar8 = (int)piVar30 - iVar5;
          uVar26 = func_0x000180640960(*(uint64_t *)piVar30,2);
          uVar25 = *(uint *)((ulonglong)uVar26 * 4);
          *(uint *)((ulonglong)uVar26 * 4) = uVar8;
          piVar19 = (int *)((ulonglong)uVar25 + lVar18);
          piVar21 = piVar30;
          if ((uVar25 + 0xffff < uVar8) || (*piVar19 != *piVar30)) goto LAB_18064180b;
          psVar17 = (short *)((longlong)param_3 + 1);
          *(char *)param_3 = '\0';
          psVar16 = param_3;
        } while( true );
      }
    }
  }
  else {
    puVar1 = (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -5);
    lVar18 = (longlong)param_2 - (ulonglong)uRam0000000000004000;
    iVar5 = (int)lVar18;
    if ((int)param_4 < 0x1000b) {
      if (param_4 < 0x7e000001) {
        iRam0000000000004018 = iRam0000000000004018 + param_4;
        uRam0000000000004000 = uRam0000000000004000 + param_4;
        uRam0000000000004006 = 3;
        piVar21 = param_2;
        if ((int)param_4 < 0xd) {
LAB_180640e2a:
          uVar9 = (longlong)param_2 + ((longlong)(int)param_4 - (longlong)piVar21);
          if (uVar9 < 0xf) {
            *(char *)param_3 = (char)uVar9 << 4;
          }
          else {
            *(char *)param_3 = -0x10;
            uVar10 = uVar9 - 0xf;
            psVar16 = (short *)((longlong)param_3 + 1);
            param_3 = psVar16;
            if (0xfe < uVar10) {
              uVar14 = uVar10 / 0xff;
              param_3 = (short *)((longlong)psVar16 + uVar14);
              for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(char *)psVar16 = -1;
                psVar16 = (short *)((longlong)psVar16 + 1);
              }
              uVar10 = uVar10 % 0xff;
            }
            *(char *)param_3 = (char)uVar10;
          }
                    // WARNING: Subroutine does not return
          memcpy((char *)((longlong)param_3 + 1),piVar21,uVar9);
        }
        func_0x0001806409a0(param_2,(uint)(*param_2 * -0x61c8864f) >> 0x13,0,3,lVar18);
        piVar22 = (int *)((longlong)param_2 + 1);
        piVar30 = param_2;
LAB_180640b17:
        iVar6 = *piVar22;
        iVar27 = 1;
        iVar29 = 0x40;
        do {
          piVar20 = piVar22;
          uVar9 = (ulonglong)((uint)(iVar6 * -0x61c8864f) >> 0x13);
          piVar22 = (int *)((longlong)piVar20 + (longlong)iVar27);
          iVar27 = iVar29 >> 6;
          iVar29 = iVar29 + 1;
          piVar21 = piVar30;
          if ((int *)((longlong)param_2 + (longlong)(int)param_4 + -0xb) < piVar22)
          goto LAB_180640e2a;
          iVar6 = *piVar22;
          piVar19 = (int *)(lVar18 + (ulonglong)*(ushort *)(uVar9 * 2));
          func_0x000180640980((int)piVar20 - iVar5,uVar9,0,3);
        } while (*piVar19 != *piVar20);
        piVar21 = piVar20;
        if (piVar30 < piVar20 && param_2 < piVar19) {
          do {
            piVar22 = (int *)((longlong)piVar19 - 1);
            piVar2 = (int *)((longlong)piVar20 - 1);
            piVar21 = piVar20;
            if (*(char *)((longlong)piVar20 - 1) != *(char *)((longlong)piVar19 - 1)) break;
            piVar19 = piVar22;
            piVar20 = piVar2;
            piVar21 = piVar2;
          } while (param_2 < piVar22 && piVar30 < piVar2);
        }
        pcVar24 = (char *)((longlong)param_3 + 1);
        uVar25 = (int)piVar21 - (int)piVar30;
        if (uVar25 < 0xf) {
          *(char *)param_3 = (char)uVar25 << 4;
        }
        else {
          uVar26 = uVar25 - 0xf;
          *(char *)param_3 = -0x10;
          if (0xfe < (int)uVar26) {
            uVar9 = (ulonglong)uVar26 / 0xff;
            pcVar15 = pcVar24;
            for (uVar10 = uVar9; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar15 = -1;
              pcVar15 = pcVar15 + 1;
            }
            pcVar24 = pcVar24 + uVar9;
            uVar26 = uVar26 + (int)uVar9 * -0xff;
          }
          *pcVar24 = (char)uVar26;
          pcVar24 = pcVar24 + 1;
        }
        pcVar15 = pcVar24 + uVar25;
        func_0x000180640920(pcVar24,piVar30,pcVar15);
        puVar13 = (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -0xc);
        psVar16 = param_3;
        do {
          func_0x000180640910(pcVar15,(short)piVar21 - (short)piVar19);
          puVar11 = (ulonglong *)(piVar19 + 1);
          param_3 = (short *)(pcVar15 + 2);
          puVar12 = (ulonglong *)(piVar21 + 1);
          puVar23 = puVar12;
          if (puVar12 < puVar13) {
            if ((*puVar12 ^ *puVar11) == 0) {
              puVar23 = (ulonglong *)(piVar21 + 3);
              puVar11 = (ulonglong *)(piVar19 + 3);
              goto LAB_180640ca7;
            }
            uVar25 = func_0x000180640950(*puVar12 ^ *puVar11);
          }
          else {
LAB_180640ca7:
            for (; puVar23 < puVar13; puVar23 = puVar23 + 1) {
              if ((*puVar23 ^ *puVar11) != 0) {
                iVar6 = func_0x000180640950(*puVar23 ^ *puVar11);
                uVar25 = ((int)puVar23 - (int)puVar12) + iVar6;
                goto LAB_180640d0c;
              }
              puVar11 = puVar11 + 1;
            }
            if ((puVar23 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -8)) &&
               ((int)*puVar11 == (int)*puVar23)) {
              puVar23 = (ulonglong *)((longlong)puVar23 + 4);
              puVar11 = (ulonglong *)((longlong)puVar11 + 4);
            }
            if ((puVar23 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -6)) &&
               ((short)*puVar11 == (short)*puVar23)) {
              puVar23 = (ulonglong *)((longlong)puVar23 + 2);
              puVar11 = (ulonglong *)((longlong)puVar11 + 2);
            }
            if ((puVar23 < puVar1) && ((char)*puVar11 == (char)*puVar23)) {
              puVar23 = (ulonglong *)((longlong)puVar23 + 1);
            }
            uVar25 = (int)puVar23 - (int)puVar12;
          }
LAB_180640d0c:
          piVar21 = (int *)((longlong)piVar21 + (ulonglong)uVar25 + 4);
          if (uVar25 < 0xf) {
            *(char *)psVar16 = (char)uVar25 + (char)*psVar16;
          }
          else {
            uVar25 = uVar25 - 0xf;
            *(char *)psVar16 = (char)*psVar16 + '\x0f';
            param_3[0] = -1;
            param_3[1] = -1;
            if (0x3fb < uVar25) {
              uVar9 = (ulonglong)uVar25 / 0x3fc;
              do {
                param_3 = param_3 + 2;
                uVar25 = uVar25 - 0x3fc;
                param_3[0] = -1;
                param_3[1] = -1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            pcVar24 = (char *)((longlong)param_3 + (ulonglong)uVar25 / 0xff);
            *pcVar24 = (char)uVar25 + (char)((ulonglong)uVar25 / 0xff);
            param_3 = (short *)(pcVar24 + 1);
          }
          if ((int *)((longlong)param_2 + (longlong)(int)param_4 + -0xb) <= piVar21)
          goto LAB_180640e2a;
          func_0x0001806409a0((longlong)piVar21 + -2,
                              (uint)(*(int *)((longlong)piVar21 + -2) * -0x61c8864f) >> 0x13,0,3,
                              lVar18);
          uVar26 = (uint)(*piVar21 * -0x61c8864f) >> 0x13;
          uVar25 = func_0x0001806409e0(uVar26,0,3);
          piVar19 = (int *)((ulonglong)uVar25 + lVar18);
          func_0x000180640980((int)piVar21 - iVar5,uVar26,0,3);
          if (*piVar19 != *piVar21) goto LAB_180640e1d;
          pcVar15 = (char *)((longlong)param_3 + 1);
          *(char *)param_3 = '\0';
          psVar16 = param_3;
        } while( true );
      }
    }
    else if (param_4 < 0x7e000001) {
      iRam0000000000004018 = iRam0000000000004018 + param_4;
      uRam0000000000004000 = uRam0000000000004000 + param_4;
      uRam0000000000004006 = 2;
      uVar7 = func_0x000180640960(*(uint64_t *)param_2,2);
      func_0x0001806409a0(param_2,uVar7,0,2,lVar18);
      uVar25 = func_0x000180640960(*(uint64_t *)((longlong)param_2 + 1),2);
      uVar9 = (ulonglong)uVar25;
      iVar6 = 0x40;
      iVar27 = 1;
      piVar21 = (int *)((longlong)param_2 + 1);
      piVar22 = param_2;
LAB_180640f1b:
      do {
        piVar30 = piVar21;
        uVar26 = (int)piVar30 - iVar5;
        uVar25 = *(uint *)(uVar9 * 4);
        puVar3 = (uint *)(uVar9 * 4);
        piVar21 = (int *)((longlong)piVar30 + (longlong)iVar27);
        iVar27 = iVar6 >> 6;
        iVar6 = iVar6 + 1;
        if ((int *)((longlong)param_2 + (longlong)(int)param_4 + -0xb) < piVar21) {
LAB_18064128b:
          uVar9 = (longlong)param_2 + ((longlong)(int)param_4 - (longlong)piVar22);
          if (uVar9 < 0xf) {
            *(char *)param_3 = (char)uVar9 << 4;
          }
          else {
            *(char *)param_3 = -0x10;
            uVar10 = uVar9 - 0xf;
            psVar16 = (short *)((longlong)param_3 + 1);
            param_3 = psVar16;
            if (0xfe < uVar10) {
              uVar14 = uVar10 / 0xff;
              param_3 = (short *)((longlong)psVar16 + uVar14);
              for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(char *)psVar16 = -1;
                psVar16 = (short *)((longlong)psVar16 + 1);
              }
              uVar10 = uVar10 % 0xff;
            }
            *(char *)param_3 = (char)uVar10;
          }
                    // WARNING: Subroutine does not return
          memcpy((char *)((longlong)param_3 + 1),piVar22,uVar9);
        }
        piVar20 = (int *)(lVar18 + (ulonglong)uVar25);
        uVar8 = func_0x000180640960(*(uint64_t *)piVar21,2);
        uVar9 = (ulonglong)uVar8;
        *puVar3 = uVar26;
      } while ((uVar25 + 0xffff < uVar26) || (*piVar20 != *piVar30));
      if (param_2 < piVar20 && piVar22 < piVar30) {
        do {
          piVar21 = (int *)((longlong)piVar20 - 1);
          piVar19 = (int *)((longlong)piVar30 - 1);
          if (*(char *)((longlong)piVar30 - 1) != *(char *)((longlong)piVar20 - 1)) break;
          piVar20 = piVar21;
          piVar30 = piVar19;
        } while (param_2 < piVar21 && piVar22 < piVar19);
      }
      pcVar24 = (char *)((longlong)param_3 + 1);
      uVar25 = (int)piVar30 - (int)piVar22;
      if (uVar25 < 0xf) {
        *(char *)param_3 = (char)uVar25 << 4;
      }
      else {
        uVar26 = uVar25 - 0xf;
        *(char *)param_3 = -0x10;
        if (0xfe < (int)uVar26) {
          uVar9 = (ulonglong)uVar26 / 0xff;
          pcVar15 = pcVar24;
          for (uVar10 = uVar9; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar15 = -1;
            pcVar15 = pcVar15 + 1;
          }
          pcVar24 = pcVar24 + uVar9;
          uVar26 = uVar26 + (int)uVar9 * -0xff;
        }
        *pcVar24 = (char)uVar26;
        pcVar24 = pcVar24 + 1;
      }
      pcVar15 = pcVar24 + uVar25;
      lVar28 = (longlong)piVar22 - (longlong)pcVar24;
      do {
        *(uint64_t *)pcVar24 = *(uint64_t *)(pcVar24 + lVar28);
        pcVar24 = pcVar24 + 8;
      } while (pcVar24 < pcVar15);
      puVar13 = (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -0xc);
      piVar22 = piVar30;
      do {
        func_0x000180640910(pcVar15,(short)piVar22 - (short)piVar20);
        puVar11 = (ulonglong *)(piVar22 + 1);
        psVar16 = (short *)(pcVar15 + 2);
        puVar12 = (ulonglong *)(piVar20 + 1);
        puVar23 = puVar11;
        if (puVar11 < puVar13) {
          if ((*puVar11 ^ *puVar12) == 0) {
            puVar23 = (ulonglong *)(piVar22 + 3);
            puVar12 = (ulonglong *)(piVar20 + 3);
            goto LAB_1806410c7;
          }
          uVar25 = func_0x000180640950(*puVar11 ^ *puVar12);
        }
        else {
LAB_1806410c7:
          for (; puVar23 < puVar13; puVar23 = puVar23 + 1) {
            if ((*puVar23 ^ *puVar12) != 0) {
              iVar6 = func_0x000180640950(*puVar23 ^ *puVar12);
              uVar25 = ((int)puVar23 - (int)puVar11) + iVar6;
              goto LAB_18064112e;
            }
            puVar12 = puVar12 + 1;
          }
          if ((puVar23 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -8)) &&
             ((int)*puVar12 == (int)*puVar23)) {
            puVar23 = (ulonglong *)((longlong)puVar23 + 4);
            puVar12 = (ulonglong *)((longlong)puVar12 + 4);
          }
          if ((puVar23 < (ulonglong *)((longlong)param_2 + (longlong)(int)param_4 + -6)) &&
             ((short)*puVar12 == (short)*puVar23)) {
            puVar23 = (ulonglong *)((longlong)puVar23 + 2);
            puVar12 = (ulonglong *)((longlong)puVar12 + 2);
          }
          if ((puVar23 < puVar1) && ((char)*puVar12 == (char)*puVar23)) {
            puVar23 = (ulonglong *)((longlong)puVar23 + 1);
          }
          uVar25 = (int)puVar23 - (int)puVar11;
        }
LAB_18064112e:
        piVar22 = (int *)((longlong)piVar22 + (ulonglong)uVar25 + 4);
        if (uVar25 < 0xf) {
          *(char *)param_3 = (char)uVar25 + (char)*param_3;
          param_3 = psVar16;
        }
        else {
          uVar25 = uVar25 - 0xf;
          *(char *)param_3 = (char)*param_3 + '\x0f';
          psVar16[0] = -1;
          psVar16[1] = -1;
          if (0x3fb < uVar25) {
            uVar9 = (ulonglong)uVar25 / 0x3fc;
            do {
              psVar16 = psVar16 + 2;
              uVar25 = uVar25 - 0x3fc;
              psVar16[0] = -1;
              psVar16[1] = -1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          pcVar24 = (char *)((longlong)psVar16 + (ulonglong)uVar25 / 0xff);
          *pcVar24 = (char)uVar25 + (char)((ulonglong)uVar25 / 0xff);
          param_3 = (short *)(pcVar24 + 1);
        }
        if ((int *)((longlong)param_2 + (longlong)(int)param_4 + -0xb) <= piVar22)
        goto LAB_18064128b;
        uVar7 = func_0x000180640960(*(uint64_t *)((longlong)piVar22 + -2),2);
        func_0x0001806409a0((longlong)piVar22 + -2,uVar7,0,2,lVar18);
        uVar7 = func_0x000180640960(*(uint64_t *)piVar22,2);
        uVar26 = (int)piVar22 - iVar5;
        uVar25 = func_0x0001806409e0(uVar7,0,2);
        piVar20 = (int *)((ulonglong)uVar25 + lVar18);
        func_0x000180640980(uVar26,uVar7,0,2);
        if ((uVar25 + 0xffff < uVar26) || (*piVar20 != *piVar22)) goto LAB_180641260;
        pcVar15 = (char *)((longlong)param_3 + 1);
        *(char *)param_3 = '\0';
      } while( true );
    }
  }
  return 0;
LAB_1806416f4:
  piVar22 = (int *)((longlong)piVar21 + 1);
  goto LAB_180641392;
LAB_180641260:
  uVar25 = func_0x000180640960(*(uint64_t *)((longlong)piVar22 + 1),2);
  iVar27 = 1;
  uVar9 = (ulonglong)uVar25;
  iVar6 = 0x40;
  piVar21 = (int *)((longlong)piVar22 + 1);
  goto LAB_180640f1b;
LAB_180640e1d:
  piVar22 = (int *)((longlong)piVar21 + 1);
  piVar30 = piVar21;
  goto LAB_180640b17;
}







