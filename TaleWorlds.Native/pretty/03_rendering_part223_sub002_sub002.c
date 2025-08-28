#include "TaleWorlds.Native.Split.h"

// 03_rendering_part223_sub002_sub002.c - 1 个函数

// 函数: void FUN_1803935e0(uint64_t *param_1)
void FUN_1803935e0(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



uint64_t
FUN_180393610(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t *param_4,
             uint64_t param_5,int32_t param_6,int64_t param_7,int32_t param_8,
             uint64_t param_9,char *param_10,int32_t param_11)

{
  int32_t *puVar1;
  int32_t *puVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  char cVar13;
  int8_t uVar14;
  int iVar15;
  int iVar16;
  uint64_t uVar17;
  int64_t *plVar18;
  int64_t lVar19;
  float *pfVar20;
  uint64_t *puVar21;
  char *pcVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint uVar25;
  uint64_t uVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  int iVar30;
  int64_t lVar31;
  uint64_t uVar32;
  int32_t extraout_XMM0_Da;
  int32_t uVar33;
  int32_t extraout_XMM0_Da_00;
  float fVar34;
  float fVar35;
  float fVar36;
  uint64_t uStack_108;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  pcVar22 = param_10;
  if (param_10 != (char *)0x0) {
    *param_10 = '\0';
  }
  cVar13 = FUN_180392a30(0,param_2,param_3,param_4,param_5,param_6,param_7,0xffffffff,0,param_8,
                         param_9,param_11);
  if (cVar13 == '\0') {
    uVar24 = 0;
  }
  else {
    if (param_7 != 0) {
      if (*(char *)(param_7 + 0x1024) == '\0') {
        iVar15 = (int)(*(int64_t *)(param_7 + 0x1008) - *(int64_t *)(param_7 + 0x1000) >> 5);
      }
      else {
        iVar15 = *(int *)(param_7 + 0x1020);
      }
      uVar28 = 0;
      if (1 < iVar15) {
        param_10 = (char *)*param_4;
        uVar17 = uVar28;
        do {
          iVar15 = (int)uVar17;
          uVar29 = 0;
          iVar30 = (int)uVar28 + 1;
          uVar17 = func_0x000180396660(param_7);
          iVar16 = (int)uVar28;
          uVar32 = uVar17 & 0xffffffff;
          uVar33 = extraout_XMM0_Da;
          if (iVar30 < (int)uVar17) {
            uVar17 = (uint64_t)*(byte *)(param_7 + 0x1024);
            iVar15 = iVar30;
            do {
              iVar16 = (int)uVar28;
              lVar31 = (int64_t)iVar15 * 0x20;
              cVar13 = (char)uVar17;
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              if (*(int64_t *)(lVar19 + 0x10 + lVar31) != 0) {
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                if ((*(byte *)(*(int64_t *)(lVar19 + 0x10 + lVar31) + 0x139) & 4) != 0) {
                  lVar19 = param_7;
                  if (cVar13 == '\0') {
                    lVar19 = *(int64_t *)(param_7 + 0x1000);
                  }
                  if (*(int64_t *)(*(int64_t *)(lVar19 + 0x10 + lVar31) + 0x118) != 0) {
                    lVar19 = param_7;
                    if (*(char *)(param_7 + 0x1024) == '\0') {
                      lVar19 = *(int64_t *)(param_7 + 0x1000);
                    }
                    lVar27 = param_7;
                    if (*(char *)(param_7 + 0x1024) == '\0') {
                      lVar27 = *(int64_t *)(param_7 + 0x1000);
                    }
                    *(uint64_t *)(lVar27 + lVar31) =
                         *(uint64_t *)(*(int64_t *)(lVar19 + 0x10 + lVar31) + 0xe8);
                    break;
                  }
                }
              }
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              lVar27 = param_7;
              if (*(int64_t *)(lVar19 + 8 + lVar31) != 0) {
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                if ((*(byte *)(*(int64_t *)(*(int64_t *)(lVar19 + 8 + lVar31) + 0x10) + 0x139) & 4
                    ) != 0) {
                  lVar19 = param_7;
                  if (cVar13 == '\0') {
                    lVar19 = *(int64_t *)(param_7 + 0x1000);
                  }
                  if (*(int64_t *)
                       (*(int64_t *)(*(int64_t *)(lVar19 + 8 + lVar31) + 0x10) + 0x118) == 0)
                  goto LAB_180393815;
LAB_1803938fb:
                  lVar19 = param_7;
                  if (cVar13 == '\0') {
                    lVar19 = *(int64_t *)(param_7 + 0x1000);
                  }
                  if (*(int64_t *)(*(int64_t *)(lVar19 + 8 + lVar31) + 0x18) != 0) {
                    lVar19 = param_7;
                    if (cVar13 == '\0') {
                      lVar19 = *(int64_t *)(param_7 + 0x1000);
                    }
                    if ((*(byte *)(*(int64_t *)(*(int64_t *)(lVar19 + 8 + lVar31) + 0x18) + 0x139)
                        & 4) != 0) {
                      lVar19 = param_7;
                      if (cVar13 == '\0') {
                        lVar19 = *(int64_t *)(param_7 + 0x1000);
                      }
                      if (*(int64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar19 + 8 + lVar31) + 0x18) + 0x118) != 0)
                      goto LAB_18039397e;
                    }
                    lVar19 = param_7;
                    if (cVar13 == '\0') {
                      lVar19 = *(int64_t *)(param_7 + 0x1000);
                    }
                    cVar13 = func_0x00018038b3c0(*(uint64_t *)
                                                  (*(int64_t *)(lVar19 + 8 + lVar31) + 0x18));
                    uVar33 = extraout_XMM0_Da_00;
                    if (cVar13 != '\0') goto LAB_18039388e;
                  }
                  goto LAB_18039397e;
                }
LAB_180393815:
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                lVar19 = *(int64_t *)(*(int64_t *)(lVar19 + 8 + lVar31) + 0x10);
                if ((*(byte *)(lVar19 + 0x139) & 4) != 0) {
                  uVar33 = 0x3f12d5e0;
                  if (((*(float *)(lVar19 + 0xd8) <= 0.573576) && (3 < *(byte *)(lVar19 + 0xa8))) &&
                     (*(float *)(lVar19 + 0xe4) <= 0.573576)) {
                    uVar26 = uVar29 & 0xffffffff;
                    plVar18 = (int64_t *)(lVar19 + 0xb0);
                    while ((*plVar18 == 0 ||
                           (uVar25 = (int)uVar26 + 1, uVar26 = (uint64_t)uVar25, (int)uVar25 < 3)))
                    {
                      uVar29 = uVar29 + 1;
                      plVar18 = plVar18 + 1;
                      if (3 < (int64_t)uVar29) goto LAB_18039388e;
                    }
                  }
                  goto LAB_1803938fb;
                }
                if ((*(byte *)(lVar19 + 0x139) & 8) == 0) goto LAB_1803938fb;
LAB_18039388e:
                if (pcVar22 != (char *)0x0) {
                  *pcVar22 = '\x01';
                }
                lVar19 = param_7;
                if (*(char *)(param_7 + 0x1024) == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                puVar21 = *(uint64_t **)(lVar19 + 8 + lVar31);
                pfVar20 = (float *)*puVar21;
                pfVar8 = (float *)puVar21[1];
                fStack_e0 = (*pfVar8 + *pfVar20) * 0.5;
                fStack_dc = (pfVar20[1] + pfVar8[1]) * 0.5;
                if (*(char *)(param_7 + 0x1024) == '\0') {
                  lVar27 = *(int64_t *)(param_7 + 0x1000);
                }
                uVar24 = CONCAT44(fStack_dc,fStack_e0);
LAB_180393a83:
                *(uint64_t *)(lVar27 + lVar31) = uVar24;
                if ((pcVar22 == (char *)0x0) || (*pcVar22 == '\0')) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = 1;
                }
                FUN_18038df30(lVar27,param_7,uVar28 & 0xffffffff,iVar15,&param_10,param_6,uVar14);
                iVar30 = func_0x000180396660(param_7);
                if (iVar15 < iVar30) {
                  cVar13 = *(char *)(param_7 + 0x1024);
                  lVar31 = (int64_t)iVar15 * 0x20;
                  lVar19 = param_7;
                  if (cVar13 == '\0') {
                    lVar19 = *(int64_t *)(param_7 + 0x1000);
                  }
                  if (-1 < *(short *)(lVar31 + 0x18 + lVar19)) {
                    lVar19 = param_7;
                    if (cVar13 == '\0') {
                      lVar19 = *(int64_t *)(param_7 + 0x1000);
                    }
                    puVar3 = (ushort *)(lVar31 + 0x18 + lVar19);
                    *puVar3 = *puVar3 | 0x8000;
                    cVar13 = *(char *)(param_7 + 0x1024);
                    lVar19 = param_7;
                    if (cVar13 == '\0') {
                      lVar19 = *(int64_t *)(param_7 + 0x1000);
                    }
                    if (*(int64_t *)(lVar31 + 8 + lVar19) == 0) {
                      lVar19 = param_7;
                      if (cVar13 == '\0') {
                        lVar19 = *(int64_t *)(param_7 + 0x1000);
                      }
                      pfVar20 = (float *)(*(int64_t *)(lVar31 + 0x10 + lVar19) + 0xe8);
                    }
                    else {
                      lVar19 = param_7;
                      if (cVar13 == '\0') {
                        lVar19 = *(int64_t *)(param_7 + 0x1000);
                      }
                      puVar21 = *(uint64_t **)(lVar31 + 8 + lVar19);
                      pfVar8 = (float *)puVar21[1];
                      pfVar9 = (float *)*puVar21;
                      pfVar20 = &fStack_f8;
                      fStack_f8 = (*pfVar8 + *pfVar9) * 0.5;
                      fStack_f4 = (pfVar9[1] + pfVar8[1]) * 0.5;
                      fStack_f0 = (pfVar9[2] + pfVar8[2]) * 0.5;
                    }
                    lVar19 = param_7;
                    if (cVar13 == '\0') {
                      lVar19 = *(int64_t *)(param_7 + 0x1000);
                    }
                    *(uint64_t *)(lVar31 + lVar19) = *(uint64_t *)pfVar20;
                    cVar13 = *(char *)(param_7 + 0x1024);
                  }
                  lVar19 = param_7;
                  if (cVar13 == '\0') {
                    lVar19 = *(int64_t *)(param_7 + 0x1000);
                  }
                  param_10 = *(char **)(lVar31 + lVar19);
                }
                iVar15 = iVar15 + -1;
                goto LAB_180393e7a;
              }
LAB_18039397e:
              iVar16 = (int)uVar28;
              cVar13 = (char)uVar17;
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              if (*(int64_t *)(lVar19 + 0x10 + lVar31) != 0) {
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                if ((*(byte *)(*(int64_t *)(lVar19 + 0x10 + lVar31) + 0x139) & 4) != 0) {
                  lVar19 = param_7;
                  if (cVar13 == '\0') {
                    lVar19 = *(int64_t *)(param_7 + 0x1000);
                  }
                  if (*(int64_t *)(*(int64_t *)(lVar19 + 0x10 + lVar31) + 0x118) != 0)
                  goto LAB_180393aa6;
                }
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                lVar19 = *(int64_t *)(lVar19 + 0x10 + lVar31);
                if ((*(byte *)(lVar19 + 0x139) & 4) == 0) {
                  if ((*(byte *)(lVar19 + 0x139) & 8) != 0) {
LAB_180393a4b:
                    if (pcVar22 != (char *)0x0) {
                      *pcVar22 = '\x01';
                    }
                    lVar19 = param_7;
                    if (*(char *)(param_7 + 0x1024) == '\0') {
                      lVar19 = *(int64_t *)(param_7 + 0x1000);
                    }
                    uVar24 = *(uint64_t *)(*(int64_t *)(lVar19 + 0x10 + lVar31) + 0xe8);
                    if (*(char *)(param_7 + 0x1024) == '\0') {
                      lVar27 = *(int64_t *)(param_7 + 0x1000);
                    }
                    goto LAB_180393a83;
                  }
                }
                else {
                  uVar33 = 0x3f12d5e0;
                  if (((*(float *)(lVar19 + 0xd8) <= 0.573576) && (3 < *(byte *)(lVar19 + 0xa8))) &&
                     (*(float *)(lVar19 + 0xe4) <= 0.573576)) {
                    uVar26 = 0;
                    plVar18 = (int64_t *)(lVar19 + 0xb0);
                    uVar29 = uVar26;
                    while ((*plVar18 == 0 ||
                           (uVar25 = (int)uVar26 + 1, uVar26 = (uint64_t)uVar25, (int)uVar25 < 3)))
                    {
                      uVar29 = uVar29 + 1;
                      plVar18 = plVar18 + 1;
                      if (3 < (int64_t)uVar29) goto LAB_180393a4b;
                    }
                  }
                }
              }
LAB_180393aa6:
              if ((int)uVar32 <= iVar15 + 1) break;
              uVar29 = 0;
              iVar15 = iVar15 + 1;
            } while( true );
          }
          if (iVar16 == iVar15) {
            lVar31 = (int64_t)iVar15 * 0x20;
            lVar19 = param_7;
            if (*(char *)(param_7 + 0x1024) == '\0') {
              lVar19 = *(int64_t *)(param_7 + 0x1000);
            }
            if (-1 < *(short *)(lVar31 + 0x18 + lVar19)) {
              lVar19 = param_7;
              if (*(char *)(param_7 + 0x1024) == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              puVar3 = (ushort *)(lVar31 + 0x18 + lVar19);
              *puVar3 = *puVar3 | 0x8000;
              cVar13 = *(char *)(param_7 + 0x1024);
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              if (*(int64_t *)(lVar31 + 8 + lVar19) == 0) {
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                puVar21 = (uint64_t *)(*(int64_t *)(lVar31 + 0x10 + lVar19) + 0xe8);
              }
              else {
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                puVar21 = *(uint64_t **)(lVar31 + 8 + lVar19);
                pfVar20 = (float *)puVar21[1];
                pfVar8 = (float *)*puVar21;
                puVar21 = &uStack_108;
                uStack_108 = CONCAT44((pfVar8[1] + pfVar20[1]) * 0.5,(*pfVar20 + *pfVar8) * 0.5);
                fStack_100 = (pfVar8[2] + pfVar20[2]) * 0.5;
              }
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              *(uint64_t *)(lVar31 + lVar19) = *puVar21;
            }
          }
          else {
            if ((pcVar22 == (char *)0x0) || (*pcVar22 == '\0')) {
              uVar14 = 0;
            }
            else {
              uVar14 = 1;
            }
            FUN_18038df30(uVar33,param_7,iVar16,iVar15 + 1,&param_10,param_6,uVar14);
            iVar30 = func_0x000180396660(param_7);
            if (iVar15 < iVar30) {
              cVar13 = *(char *)(param_7 + 0x1024);
              lVar31 = (int64_t)iVar15 * 0x20;
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              if (-1 < *(short *)(lVar31 + 0x18 + lVar19)) {
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                puVar3 = (ushort *)(lVar31 + 0x18 + lVar19);
                *puVar3 = *puVar3 | 0x8000;
                cVar13 = *(char *)(param_7 + 0x1024);
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                if (*(int64_t *)(lVar31 + 8 + lVar19) == 0) {
                  lVar19 = param_7;
                  if (cVar13 == '\0') {
                    lVar19 = *(int64_t *)(param_7 + 0x1000);
                  }
                  pfVar20 = (float *)(*(int64_t *)(lVar31 + 0x10 + lVar19) + 0xe8);
                }
                else {
                  lVar19 = param_7;
                  if (cVar13 == '\0') {
                    lVar19 = *(int64_t *)(param_7 + 0x1000);
                  }
                  puVar21 = *(uint64_t **)(lVar31 + 8 + lVar19);
                  pfVar8 = (float *)puVar21[1];
                  pfVar9 = (float *)*puVar21;
                  pfVar20 = &fStack_ec;
                  fStack_ec = (*pfVar8 + *pfVar9) * 0.5;
                  fStack_e8 = (pfVar9[1] + pfVar8[1]) * 0.5;
                  fStack_e4 = (pfVar9[2] + pfVar8[2]) * 0.5;
                }
                lVar19 = param_7;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                *(uint64_t *)(lVar31 + lVar19) = *(uint64_t *)pfVar20;
                cVar13 = *(char *)(param_7 + 0x1024);
              }
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              param_10 = *(char **)(lVar31 + lVar19);
            }
          }
LAB_180393e7a:
          uVar28 = (uint64_t)(iVar15 + 1U);
          uVar17 = (uint64_t)(iVar15 + 1U);
          iVar15 = func_0x000180396660(param_7);
        } while ((int)uVar28 < iVar15);
      }
      uVar28 = 0;
      iVar15 = 0;
      iVar30 = 0;
      if ((param_2 == 0) || ((*(byte *)(param_2 + 0x139) & 4) == 0)) {
        uVar24 = 1;
      }
      else {
        uVar24 = 0;
      }
      uVar17 = uVar28;
      uVar29 = uVar28;
      iVar16 = func_0x000180396660(param_7);
      if (0 < iVar16) {
        do {
          cVar13 = *(char *)(param_7 + 0x1024);
          iVar15 = (int)uVar29;
          lVar31 = (int64_t)iVar15 * 0x20;
          lVar19 = param_7;
          if (cVar13 == '\0') {
            lVar19 = *(int64_t *)(param_7 + 0x1000);
          }
          iVar30 = (int)uVar17;
          if (*(short *)(lVar19 + 0x18 + lVar31) < 0) {
            if (iVar15 != iVar30) {
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              puVar1 = (int32_t *)(lVar19 + lVar31);
              uVar33 = puVar1[1];
              uVar10 = puVar1[2];
              uVar11 = puVar1[3];
              puVar21 = (uint64_t *)(lVar19 + 0x10 + lVar31);
              uVar24 = *puVar21;
              uVar23 = puVar21[1];
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              puVar2 = (int32_t *)(lVar19 + (int64_t)iVar30 * 0x20);
              *puVar2 = *puVar1;
              puVar2[1] = uVar33;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              puVar21 = (uint64_t *)(lVar19 + 0x10 + (int64_t)iVar30 * 0x20);
              *puVar21 = uVar24;
              puVar21[1] = uVar23;
              cVar13 = *(char *)(param_7 + 0x1024);
            }
            lVar19 = param_7;
            if (cVar13 == '\0') {
              lVar19 = *(int64_t *)(param_7 + 0x1000);
              cVar13 = '\0';
            }
            if (*(int64_t *)(lVar19 + 0x10 + (int64_t)iVar30 * 0x20) != 0) {
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              if ((*(byte *)(*(int64_t *)(lVar19 + 0x10 + (int64_t)iVar30 * 0x20) + 0x139) & 4) !=
                  0) {
                uVar24 = 0;
                uVar17 = (uint64_t)(iVar30 + 1U);
                uVar28 = (uint64_t)(iVar30 + 1U);
                goto LAB_180394031;
              }
            }
            uVar17 = (uint64_t)(iVar30 + 1U);
            uVar24 = 1;
            uVar28 = (uint64_t)(iVar30 + 1U);
          }
          else {
            lVar19 = param_7;
            if (cVar13 == '\0') {
              lVar19 = *(int64_t *)(param_7 + 0x1000);
            }
            if (*(int64_t *)(lVar19 + 0x10 + lVar31) == 0) {
LAB_180393fed:
              uVar23 = 1;
              if ((char)uVar24 == '\x01') goto LAB_180394031;
            }
            else {
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              if ((*(byte *)(*(int64_t *)(lVar19 + 0x10 + lVar31) + 0x139) & 4) == 0)
              goto LAB_180393fed;
              uVar23 = 0;
            }
            uVar24 = uVar23;
            lVar19 = param_7;
            if (cVar13 == '\0') {
              lVar19 = *(int64_t *)(param_7 + 0x1000);
            }
            puVar1 = (int32_t *)(lVar19 + lVar31);
            uVar33 = puVar1[1];
            uVar10 = puVar1[2];
            uVar11 = puVar1[3];
            puVar21 = (uint64_t *)(lVar19 + 0x10 + lVar31);
            uVar23 = *puVar21;
            uVar12 = puVar21[1];
            lVar19 = param_7;
            if (cVar13 == '\0') {
              lVar19 = *(int64_t *)(param_7 + 0x1000);
            }
            puVar2 = (int32_t *)(lVar19 + (int64_t)iVar30 * 0x20);
            *puVar2 = *puVar1;
            puVar2[1] = uVar33;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
            uVar17 = (uint64_t)(iVar30 + 1);
            puVar21 = (uint64_t *)(lVar19 + 0x10 + (int64_t)iVar30 * 0x20);
            *puVar21 = uVar23;
            puVar21[1] = uVar12;
          }
LAB_180394031:
          iVar30 = (int)uVar28;
          uVar29 = (uint64_t)(iVar15 + 1);
          iVar15 = func_0x000180396660(param_7);
        } while ((int)uVar29 < iVar15);
        iVar15 = 0;
      }
      if (0 < iVar30) {
        uVar28 = 0;
        do {
          lVar31 = (int64_t)iVar15 * 0x20;
          lVar19 = param_7;
          if (*(char *)(param_7 + 0x1024) == '\0') {
            lVar19 = *(int64_t *)(param_7 + 0x1000);
          }
          if (-1 < *(short *)(lVar31 + 0x18 + lVar19)) {
            lVar19 = param_7;
            if (*(char *)(param_7 + 0x1024) == '\0') {
              lVar19 = *(int64_t *)(param_7 + 0x1000);
            }
            puVar3 = (ushort *)(lVar31 + 0x18 + lVar19);
            *puVar3 = *puVar3 | 0x8000;
            cVar13 = *(char *)(param_7 + 0x1024);
            iVar16 = iVar15;
            if (iVar15 == 0) {
              pcVar22 = (char *)*param_4;
            }
            else {
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              pcVar22 = *(char **)((int64_t)iVar15 * 0x20 + -0x20 + lVar19);
            }
            do {
              iVar16 = iVar16 + 1;
              lVar19 = param_7;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
            } while (-1 < *(short *)((int64_t)iVar16 * 0x20 + 0x18 + lVar19));
            lVar19 = param_7;
            if (cVar13 == '\0') {
              lVar19 = *(int64_t *)(param_7 + 0x1000);
            }
            uVar24 = *(uint64_t *)((int64_t)iVar16 * 0x20 + lVar19);
            lVar19 = param_7;
            if (cVar13 == '\0') {
              lVar19 = *(int64_t *)(param_7 + 0x1000);
            }
            puVar21 = *(uint64_t **)(lVar31 + 8 + lVar19);
            uStack_108._0_4_ = (float)uVar24;
            param_10._0_4_ = SUB84(pcVar22,0);
            uStack_108._4_4_ = (float)((uint64_t)uVar24 >> 0x20);
            uStack_108._0_4_ = (float)uStack_108 - param_10._0_4_;
            param_10._4_4_ = (float)((uint64_t)pcVar22 >> 0x20);
            uStack_108._4_4_ = uStack_108._4_4_ - param_10._4_4_;
            fVar4 = *(float *)puVar21[1];
            fVar5 = ((float *)puVar21[1])[1];
            fVar6 = *(float *)*puVar21;
            fVar7 = ((float *)*puVar21)[1];
            fVar35 = (fVar5 - fVar7) * (float)uStack_108 - (fVar4 - fVar6) * uStack_108._4_4_;
            lVar19 = param_7;
            if (fVar35 == 0.0) {
LAB_1803943e1:
              fStack_ec = (fVar6 + fVar4) * 0.5;
              fStack_e8 = (fVar7 + fVar5) * 0.5;
              if (cVar13 == '\0') {
                lVar19 = *(int64_t *)(param_7 + 0x1000);
              }
              uVar23 = CONCAT44(fStack_e8,fStack_ec);
            }
            else {
              fVar35 = 1.0 / fVar35;
              fVar36 = ((fVar6 - param_10._0_4_) * (fVar5 - fVar7) -
                       (fVar7 - param_10._4_4_) * (fVar4 - fVar6)) * fVar35;
              fVar35 = ((fVar6 - param_10._0_4_) * uStack_108._4_4_ -
                       (fVar7 - param_10._4_4_) * (float)uStack_108) * fVar35;
              if ((((fVar36 < -0.001) || (1.001 < fVar36)) || (fVar35 < -0.001)) || (1.001 < fVar35)
                 ) goto LAB_1803943e1;
              fVar34 = fVar35;
              if (fVar36 <= fVar35) {
                fVar34 = fVar36;
              }
              if (1.0 < fVar34) goto LAB_1803943e1;
              if (fVar35 <= fVar36) {
                fVar35 = fVar36;
              }
              if (fVar35 < 0.0) goto LAB_1803943e1;
              lVar27 = puVar21[2];
              fStack_f8 = (float)uStack_108 * fVar36 + param_10._0_4_;
              fStack_f4 = uStack_108._4_4_ * fVar36 + param_10._4_4_;
              if ((*(byte *)(lVar27 + 0x139) & 4) == 0) {
                if ((*(byte *)(lVar27 + 0x139) & 8) == 0) goto LAB_180394368;
LAB_180394319:
                fStack_e0 = (fVar4 + fVar6) * 0.5;
                fStack_dc = (fVar7 + fVar5) * 0.5;
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                uVar23 = CONCAT44(fStack_dc,fStack_e0);
              }
              else {
                if (((*(float *)(lVar27 + 0xd8) <= 0.573576) && (3 < *(byte *)(lVar27 + 0xa8))) &&
                   (*(float *)(lVar27 + 0xe4) <= 0.573576)) {
                  plVar18 = (int64_t *)(lVar27 + 0xb0);
                  uVar17 = uVar28;
                  uVar29 = uVar28;
                  do {
                    if ((*plVar18 != 0) &&
                       (uVar25 = (int)uVar17 + 1, uVar17 = (uint64_t)uVar25, 2 < (int)uVar25))
                    goto LAB_180394368;
                    uVar29 = uVar29 + 1;
                    plVar18 = plVar18 + 1;
                  } while ((int64_t)uVar29 < 4);
                  goto LAB_180394319;
                }
LAB_180394368:
                lVar27 = puVar21[3];
                if (lVar27 != 0) {
                  if ((*(byte *)(lVar27 + 0x139) & 4) == 0) {
                    if ((*(byte *)(lVar27 + 0x139) & 8) != 0) goto LAB_180394319;
                  }
                  else if (((*(float *)(lVar27 + 0xd8) <= 0.573576) &&
                           (3 < *(byte *)(lVar27 + 0xa8))) &&
                          (*(float *)(lVar27 + 0xe4) <= 0.573576)) {
                    plVar18 = (int64_t *)(lVar27 + 0xb0);
                    uVar17 = uVar28;
                    uVar29 = uVar28;
                    do {
                      if ((*plVar18 != 0) &&
                         (uVar25 = (int)uVar17 + 1, uVar17 = (uint64_t)uVar25, 2 < (int)uVar25))
                      goto LAB_1803943cb;
                      uVar29 = uVar29 + 1;
                      plVar18 = plVar18 + 1;
                    } while ((int64_t)uVar29 < 4);
                    goto LAB_180394319;
                  }
                }
LAB_1803943cb:
                if (cVar13 == '\0') {
                  lVar19 = *(int64_t *)(param_7 + 0x1000);
                }
                uVar23 = CONCAT44(fStack_f4,fStack_f8);
              }
            }
            *(uint64_t *)(lVar31 + lVar19) = uVar23;
            param_10 = pcVar22;
            uStack_108 = uVar24;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar30);
      }
      FUN_1803967f0(param_7,iVar30);
    }
    uVar24 = 1;
  }
  return uVar24;
}



uint64_t FUN_1803936c3(void)

{
  int32_t *puVar1;
  int32_t *puVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  uint64_t uVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  uint64_t uVar19;
  int64_t *plVar20;
  uint64_t uVar21;
  int64_t lVar22;
  uint64_t *puVar23;
  uint64_t uVar24;
  uint uVar25;
  uint64_t uVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar30;
  int64_t lVar31;
  uint64_t uVar32;
  int64_t unaff_R12;
  uint64_t *unaff_R13;
  int8_t *unaff_R15;
  bool in_ZF;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar33;
  float fVar34;
  float fVar35;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  float fStack000000000000007c;
  int32_t in_stack_00000080;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  int32_t in_stack_000000f0;
  int32_t in_stack_000000f8;
  int32_t in_stack_00000100;
  int32_t in_stack_00000108;
  int32_t in_stack_00000110;
  int32_t in_stack_00000118;
  
  if (in_ZF) {
    iVar17 = (int)(*(int64_t *)(unaff_RBX + 0x1008) - *(int64_t *)(unaff_RBX + 0x1000) >> 5);
  }
  else {
    iVar17 = *(int *)(unaff_RBX + 0x1020);
  }
  uVar28 = 0;
  if (1 < iVar17) {
    *(uint64_t *)(unaff_RBP + 0xb8) = *unaff_R13;
    uVar19 = uVar28;
    do {
      iVar17 = (int)uVar19;
      uVar29 = 0;
      iVar30 = (int)uVar28 + 1;
      uVar19 = func_0x000180396660();
      iVar18 = (int)uVar28;
      uVar32 = uVar19 & 0xffffffff;
      if (iVar30 < (int)uVar19) {
        uVar19 = (uint64_t)*(byte *)(unaff_RBX + 0x1024);
        iVar17 = iVar30;
        do {
          iVar18 = (int)uVar28;
          lVar31 = (int64_t)iVar17 * 0x20;
          cVar16 = (char)uVar19;
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          if (*(int64_t *)(lVar22 + 0x10 + lVar31) != 0) {
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            if ((*(byte *)(*(int64_t *)(lVar22 + 0x10 + lVar31) + 0x139) & 4) != 0) {
              lVar22 = unaff_RBX;
              if (cVar16 == '\0') {
                lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
              }
              if (*(int64_t *)(*(int64_t *)(lVar22 + 0x10 + lVar31) + 0x118) != 0) {
                lVar22 = unaff_RBX;
                if (*(char *)(unaff_RBX + 0x1024) == '\0') {
                  lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                }
                lVar27 = unaff_RBX;
                if (*(char *)(unaff_RBX + 0x1024) == '\0') {
                  lVar27 = *(int64_t *)(unaff_RBX + 0x1000);
                }
                *(uint64_t *)(lVar27 + lVar31) =
                     *(uint64_t *)(*(int64_t *)(lVar22 + 0x10 + lVar31) + 0xe8);
                break;
              }
            }
          }
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          lVar27 = unaff_RBX;
          if (*(int64_t *)(lVar22 + 8 + lVar31) != 0) {
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            if ((*(byte *)(*(int64_t *)(*(int64_t *)(lVar22 + 8 + lVar31) + 0x10) + 0x139) & 4) !=
                0) {
              lVar22 = unaff_RBX;
              if (cVar16 == '\0') {
                lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
              }
              if (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar22 + 8 + lVar31) + 0x10) + 0x118) ==
                  0) goto LAB_180393815;
LAB_1803938fb:
              lVar22 = unaff_RBX;
              if (cVar16 == '\0') {
                lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
              }
              if (*(int64_t *)(*(int64_t *)(lVar22 + 8 + lVar31) + 0x18) != 0) {
                lVar22 = unaff_RBX;
                if (cVar16 == '\0') {
                  lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                }
                if ((*(byte *)(*(int64_t *)(*(int64_t *)(lVar22 + 8 + lVar31) + 0x18) + 0x139) & 4
                    ) != 0) {
                  lVar22 = unaff_RBX;
                  if (cVar16 == '\0') {
                    lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                  }
                  if (*(int64_t *)
                       (*(int64_t *)(*(int64_t *)(lVar22 + 8 + lVar31) + 0x18) + 0x118) != 0)
                  goto LAB_18039397e;
                }
                lVar22 = unaff_RBX;
                if (cVar16 == '\0') {
                  lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                }
                cVar16 = func_0x00018038b3c0(*(uint64_t *)
                                              (*(int64_t *)(lVar22 + 8 + lVar31) + 0x18));
                if (cVar16 != '\0') goto LAB_18039388e;
              }
              goto LAB_18039397e;
            }
LAB_180393815:
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            lVar22 = *(int64_t *)(*(int64_t *)(lVar22 + 8 + lVar31) + 0x10);
            if ((*(byte *)(lVar22 + 0x139) & 4) != 0) {
              if (((*(float *)(lVar22 + 0xd8) <= 0.573576) && (3 < *(byte *)(lVar22 + 0xa8))) &&
                 (*(float *)(lVar22 + 0xe4) <= 0.573576)) {
                uVar26 = uVar29 & 0xffffffff;
                plVar20 = (int64_t *)(lVar22 + 0xb0);
                while ((*plVar20 == 0 ||
                       (uVar25 = (int)uVar26 + 1, uVar26 = (uint64_t)uVar25, (int)uVar25 < 3))) {
                  uVar29 = uVar29 + 1;
                  plVar20 = plVar20 + 1;
                  if (3 < (int64_t)uVar29) goto LAB_18039388e;
                }
              }
              goto LAB_1803938fb;
            }
            if ((*(byte *)(lVar22 + 0x139) & 8) == 0) goto LAB_1803938fb;
LAB_18039388e:
            if (unaff_R15 != (int8_t *)0x0) {
              *unaff_R15 = 1;
            }
            cVar16 = *(char *)(unaff_RBX + 0x1024);
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            puVar23 = *(uint64_t **)(lVar22 + 8 + lVar31);
            pfVar10 = (float *)*puVar23;
            pfVar11 = (float *)puVar23[1];
            fVar33 = pfVar10[1];
            fVar4 = pfVar11[1];
            *(float *)(unaff_RBP + -0x78) = (*pfVar11 + *pfVar10) * 0.5;
            *(float *)(unaff_RBP + -0x74) = (fVar33 + fVar4) * 0.5;
            if (cVar16 == '\0') {
              lVar27 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            uVar21 = *(uint64_t *)(unaff_RBP + -0x78);
LAB_180393a83:
            *(uint64_t *)(lVar27 + lVar31) = uVar21;
            FUN_18038df30();
            iVar30 = func_0x000180396660();
            if (iVar17 < iVar30) {
              cVar16 = *(char *)(unaff_RBX + 0x1024);
              lVar31 = (int64_t)iVar17 * 0x20;
              lVar22 = unaff_RBX;
              if (cVar16 == '\0') {
                lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
              }
              if (-1 < *(short *)(lVar31 + 0x18 + lVar22)) {
                lVar22 = unaff_RBX;
                if (cVar16 == '\0') {
                  lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                }
                puVar3 = (ushort *)(lVar31 + 0x18 + lVar22);
                *puVar3 = *puVar3 | 0x8000;
                cVar16 = *(char *)(unaff_RBX + 0x1024);
                lVar22 = unaff_RBX;
                if (cVar16 == '\0') {
                  lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                }
                if (*(int64_t *)(lVar31 + 8 + lVar22) == 0) {
                  lVar22 = unaff_RBX;
                  if (cVar16 == '\0') {
                    lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                  }
                  puVar23 = (uint64_t *)(*(int64_t *)(lVar31 + 0x10 + lVar22) + 0xe8);
                }
                else {
                  lVar22 = unaff_RBX;
                  if (cVar16 == '\0') {
                    lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                  }
                  puVar23 = *(uint64_t **)(lVar31 + 8 + lVar22);
                  pfVar10 = (float *)puVar23[1];
                  pfVar11 = (float *)*puVar23;
                  puVar23 = (uint64_t *)&stack0x00000070;
                  fStack0000000000000070 = (*pfVar10 + *pfVar11) * 0.5;
                  fStack0000000000000074 = (pfVar11[1] + pfVar10[1]) * 0.5;
                  fStack0000000000000078 = (pfVar11[2] + pfVar10[2]) * 0.5;
                }
                lVar22 = unaff_RBX;
                if (cVar16 == '\0') {
                  lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                }
                *(uint64_t *)(lVar31 + lVar22) = *puVar23;
                cVar16 = *(char *)(unaff_RBX + 0x1024);
              }
              lVar22 = unaff_RBX;
              if (cVar16 == '\0') {
                lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
              }
              *(uint64_t *)(unaff_RBP + 0xb8) = *(uint64_t *)(lVar31 + lVar22);
            }
            iVar17 = iVar17 + -1;
            goto LAB_180393e7a;
          }
LAB_18039397e:
          iVar18 = (int)uVar28;
          cVar16 = (char)uVar19;
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          if (*(int64_t *)(lVar22 + 0x10 + lVar31) != 0) {
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            if ((*(byte *)(*(int64_t *)(lVar22 + 0x10 + lVar31) + 0x139) & 4) != 0) {
              lVar22 = unaff_RBX;
              if (cVar16 == '\0') {
                lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
              }
              if (*(int64_t *)(*(int64_t *)(lVar22 + 0x10 + lVar31) + 0x118) != 0)
              goto LAB_180393aa6;
            }
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            lVar22 = *(int64_t *)(lVar22 + 0x10 + lVar31);
            if ((*(byte *)(lVar22 + 0x139) & 4) == 0) {
              if ((*(byte *)(lVar22 + 0x139) & 8) != 0) {
LAB_180393a4b:
                if (unaff_R15 != (int8_t *)0x0) {
                  *unaff_R15 = 1;
                }
                lVar22 = unaff_RBX;
                if (*(char *)(unaff_RBX + 0x1024) == '\0') {
                  lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
                }
                uVar21 = *(uint64_t *)(*(int64_t *)(lVar22 + 0x10 + lVar31) + 0xe8);
                if (*(char *)(unaff_RBX + 0x1024) == '\0') {
                  lVar27 = *(int64_t *)(unaff_RBX + 0x1000);
                }
                goto LAB_180393a83;
              }
            }
            else if (((*(float *)(lVar22 + 0xd8) <= 0.573576) && (3 < *(byte *)(lVar22 + 0xa8))) &&
                    (*(float *)(lVar22 + 0xe4) <= 0.573576)) {
              uVar26 = 0;
              plVar20 = (int64_t *)(lVar22 + 0xb0);
              uVar29 = uVar26;
              while ((*plVar20 == 0 ||
                     (uVar25 = (int)uVar26 + 1, uVar26 = (uint64_t)uVar25, (int)uVar25 < 3))) {
                uVar29 = uVar29 + 1;
                plVar20 = plVar20 + 1;
                if (3 < (int64_t)uVar29) goto LAB_180393a4b;
              }
            }
          }
LAB_180393aa6:
          if ((int)uVar32 <= iVar17 + 1) break;
          uVar29 = 0;
          iVar17 = iVar17 + 1;
        } while( true );
      }
      if (iVar18 == iVar17) {
        lVar31 = (int64_t)iVar17 * 0x20;
        lVar22 = unaff_RBX;
        if (*(char *)(unaff_RBX + 0x1024) == '\0') {
          lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
        }
        if (-1 < *(short *)(lVar31 + 0x18 + lVar22)) {
          lVar22 = unaff_RBX;
          if (*(char *)(unaff_RBX + 0x1024) == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          puVar3 = (ushort *)(lVar31 + 0x18 + lVar22);
          *puVar3 = *puVar3 | 0x8000;
          cVar16 = *(char *)(unaff_RBX + 0x1024);
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          if (*(int64_t *)(lVar31 + 8 + lVar22) == 0) {
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            puVar23 = (uint64_t *)(*(int64_t *)(lVar31 + 0x10 + lVar22) + 0xe8);
          }
          else {
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            puVar23 = *(uint64_t **)(lVar31 + 8 + lVar22);
            pfVar10 = (float *)puVar23[1];
            pfVar11 = (float *)*puVar23;
            puVar23 = (uint64_t *)&stack0x00000060;
            _fStack0000000000000060 =
                 CONCAT44((pfVar11[1] + pfVar10[1]) * 0.5,(*pfVar10 + *pfVar11) * 0.5);
            in_stack_00000068 = (pfVar11[2] + pfVar10[2]) * 0.5;
          }
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          *(uint64_t *)(lVar31 + lVar22) = *puVar23;
        }
      }
      else {
        FUN_18038df30();
        iVar30 = func_0x000180396660();
        if (iVar17 < iVar30) {
          cVar16 = *(char *)(unaff_RBX + 0x1024);
          lVar31 = (int64_t)iVar17 * 0x20;
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          if (-1 < *(short *)(lVar31 + 0x18 + lVar22)) {
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            puVar3 = (ushort *)(lVar31 + 0x18 + lVar22);
            *puVar3 = *puVar3 | 0x8000;
            cVar16 = *(char *)(unaff_RBX + 0x1024);
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            if (*(int64_t *)(lVar31 + 8 + lVar22) == 0) {
              lVar22 = unaff_RBX;
              if (cVar16 == '\0') {
                lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
              }
              puVar23 = (uint64_t *)(*(int64_t *)(lVar31 + 0x10 + lVar22) + 0xe8);
            }
            else {
              lVar22 = unaff_RBX;
              if (cVar16 == '\0') {
                lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
              }
              puVar23 = *(uint64_t **)(lVar31 + 8 + lVar22);
              pfVar10 = (float *)puVar23[1];
              pfVar11 = (float *)*puVar23;
              puVar23 = (uint64_t *)((int64_t)&stack0x00000078 + 4);
              fStack000000000000007c = (*pfVar10 + *pfVar11) * 0.5;
              fVar33 = pfVar11[2];
              fVar4 = pfVar10[2];
              *(float *)(unaff_RBP + -0x80) = (pfVar11[1] + pfVar10[1]) * 0.5;
              *(float *)(unaff_RBP + -0x7c) = (fVar33 + fVar4) * 0.5;
            }
            lVar22 = unaff_RBX;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            *(uint64_t *)(lVar31 + lVar22) = *puVar23;
            cVar16 = *(char *)(unaff_RBX + 0x1024);
          }
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          *(uint64_t *)(unaff_RBP + 0xb8) = *(uint64_t *)(lVar31 + lVar22);
        }
      }
LAB_180393e7a:
      uVar28 = (uint64_t)(iVar17 + 1U);
      uVar19 = (uint64_t)(iVar17 + 1U);
      iVar17 = func_0x000180396660();
    } while ((int)uVar28 < iVar17);
    unaff_R13 = *(uint64_t **)(unaff_RBP + 0x88);
  }
  uVar28 = 0;
  iVar17 = 0;
  iVar30 = 0;
  if ((unaff_R12 == 0) || ((*(byte *)(unaff_R12 + 0x139) & 4) == 0)) {
    uVar21 = 1;
  }
  else {
    uVar21 = 0;
  }
  uVar19 = uVar28;
  uVar29 = uVar28;
  iVar18 = func_0x000180396660();
  fVar33 = extraout_XMM0_Da;
  if (0 < iVar18) {
    do {
      cVar16 = *(char *)(unaff_RBX + 0x1024);
      iVar17 = (int)uVar29;
      lVar31 = (int64_t)iVar17 * 0x20;
      lVar22 = unaff_RBX;
      if (cVar16 == '\0') {
        lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
      }
      iVar30 = (int)uVar19;
      if (*(short *)(lVar22 + 0x18 + lVar31) < 0) {
        if (iVar17 != iVar30) {
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          puVar1 = (int32_t *)(lVar22 + lVar31);
          uVar12 = puVar1[1];
          uVar13 = puVar1[2];
          uVar14 = puVar1[3];
          puVar23 = (uint64_t *)(lVar22 + 0x10 + lVar31);
          uVar21 = *puVar23;
          uVar24 = puVar23[1];
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          puVar2 = (int32_t *)(lVar22 + (int64_t)iVar30 * 0x20);
          *puVar2 = *puVar1;
          puVar2[1] = uVar12;
          puVar2[2] = uVar13;
          puVar2[3] = uVar14;
          puVar23 = (uint64_t *)(lVar22 + 0x10 + (int64_t)iVar30 * 0x20);
          *puVar23 = uVar21;
          puVar23[1] = uVar24;
          cVar16 = *(char *)(unaff_RBX + 0x1024);
        }
        lVar22 = unaff_RBX;
        if (cVar16 == '\0') {
          lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          cVar16 = '\0';
        }
        if (*(int64_t *)(lVar22 + 0x10 + (int64_t)iVar30 * 0x20) != 0) {
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          if ((*(byte *)(*(int64_t *)(lVar22 + 0x10 + (int64_t)iVar30 * 0x20) + 0x139) & 4) != 0)
          {
            uVar21 = 0;
            uVar19 = (uint64_t)(iVar30 + 1U);
            uVar28 = (uint64_t)(iVar30 + 1U);
            goto LAB_180394031;
          }
        }
        uVar19 = (uint64_t)(iVar30 + 1U);
        uVar21 = 1;
        uVar28 = (uint64_t)(iVar30 + 1U);
      }
      else {
        lVar22 = unaff_RBX;
        if (cVar16 == '\0') {
          lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
        }
        if (*(int64_t *)(lVar22 + 0x10 + lVar31) == 0) {
LAB_180393fed:
          uVar24 = 1;
          if ((char)uVar21 == '\x01') goto LAB_180394031;
        }
        else {
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          if ((*(byte *)(*(int64_t *)(lVar22 + 0x10 + lVar31) + 0x139) & 4) == 0)
          goto LAB_180393fed;
          uVar24 = 0;
        }
        uVar21 = uVar24;
        lVar22 = unaff_RBX;
        if (cVar16 == '\0') {
          lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
        }
        puVar1 = (int32_t *)(lVar22 + lVar31);
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        puVar23 = (uint64_t *)(lVar22 + 0x10 + lVar31);
        uVar24 = *puVar23;
        uVar15 = puVar23[1];
        lVar22 = unaff_RBX;
        if (cVar16 == '\0') {
          lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
        }
        puVar2 = (int32_t *)(lVar22 + (int64_t)iVar30 * 0x20);
        *puVar2 = *puVar1;
        puVar2[1] = uVar12;
        puVar2[2] = uVar13;
        puVar2[3] = uVar14;
        uVar19 = (uint64_t)(iVar30 + 1);
        puVar23 = (uint64_t *)(lVar22 + 0x10 + (int64_t)iVar30 * 0x20);
        *puVar23 = uVar24;
        puVar23[1] = uVar15;
      }
LAB_180394031:
      iVar30 = (int)uVar28;
      uVar29 = (uint64_t)(iVar17 + 1);
      iVar17 = func_0x000180396660();
    } while ((int)uVar29 < iVar17);
    iVar17 = 0;
    fVar33 = extraout_XMM0_Da_00;
  }
  if (0 < iVar30) {
    uVar28 = 0;
    do {
      lVar31 = (int64_t)iVar17 * 0x20;
      lVar22 = unaff_RBX;
      if (*(char *)(unaff_RBX + 0x1024) == '\0') {
        lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
      }
      if (-1 < *(short *)(lVar31 + 0x18 + lVar22)) {
        lVar22 = unaff_RBX;
        if (*(char *)(unaff_RBX + 0x1024) == '\0') {
          lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
        }
        puVar3 = (ushort *)(lVar31 + 0x18 + lVar22);
        *puVar3 = *puVar3 | 0x8000;
        cVar16 = *(char *)(unaff_RBX + 0x1024);
        if (iVar17 == 0) {
          uVar21 = *unaff_R13;
        }
        else {
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          uVar21 = *(uint64_t *)((int64_t)iVar17 * 0x20 + -0x20 + lVar22);
        }
        *(uint64_t *)(unaff_RBP + 0xb8) = uVar21;
        iVar18 = iVar17;
        do {
          iVar18 = iVar18 + 1;
          lVar22 = unaff_RBX;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
        } while (-1 < *(short *)((int64_t)iVar18 * 0x20 + 0x18 + lVar22));
        lVar22 = unaff_RBX;
        if (cVar16 == '\0') {
          lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
        }
        uVar21 = *(uint64_t *)((int64_t)iVar18 * 0x20 + lVar22);
        lVar22 = unaff_RBX;
        if (cVar16 == '\0') {
          lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
        }
        puVar23 = *(uint64_t **)(lVar31 + 8 + lVar22);
        fStack0000000000000060 = (float)uVar21;
        fVar4 = *(float *)(unaff_RBP + 0xb8);
        fStack0000000000000064 = (float)((uint64_t)uVar21 >> 0x20);
        fStack0000000000000060 = fStack0000000000000060 - fVar4;
        fVar5 = *(float *)(unaff_RBP + 0xbc);
        fStack0000000000000064 = fStack0000000000000064 - fVar5;
        fVar6 = *(float *)puVar23[1];
        fVar7 = ((float *)puVar23[1])[1];
        fVar8 = *(float *)*puVar23;
        fVar9 = ((float *)*puVar23)[1];
        fVar33 = (fVar6 - fVar8) * fStack0000000000000064;
        fVar34 = (fVar7 - fVar9) * fStack0000000000000060 - fVar33;
        lVar22 = unaff_RBX;
        if (fVar34 == 0.0) {
LAB_1803943e1:
          fStack000000000000007c = (fVar8 + fVar6) * 0.5;
          *(float *)(unaff_RBP + -0x80) = (fVar9 + fVar7) * 0.5;
          if (cVar16 == '\0') {
            lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          uVar24 = CONCAT44(in_stack_00000080,fStack000000000000007c);
        }
        else {
          fVar34 = 1.0 / fVar34;
          fVar33 = -0.001;
          fVar35 = ((fVar8 - fVar4) * (fVar7 - fVar9) - (fVar9 - fVar5) * (fVar6 - fVar8)) * fVar34;
          fVar34 = ((fVar8 - fVar4) * fStack0000000000000064 -
                   (fVar9 - fVar5) * fStack0000000000000060) * fVar34;
          if ((((fVar35 < -0.001) || (1.001 < fVar35)) || (fVar34 < -0.001)) || (1.001 < fVar34))
          goto LAB_1803943e1;
          fVar33 = fVar34;
          if (fVar35 <= fVar34) {
            fVar33 = fVar35;
          }
          if (1.0 < fVar33) goto LAB_1803943e1;
          if (fVar34 <= fVar35) {
            fVar34 = fVar35;
          }
          if (fVar34 < 0.0) goto LAB_1803943e1;
          lVar27 = puVar23[2];
          fStack0000000000000070 = fStack0000000000000060 * fVar35 + fVar4;
          fStack0000000000000074 = fStack0000000000000064 * fVar35 + fVar5;
          if ((*(byte *)(lVar27 + 0x139) & 4) == 0) {
            if ((*(byte *)(lVar27 + 0x139) & 8) == 0) goto LAB_180394368;
LAB_180394319:
            fVar33 = (fVar6 + fVar8) * 0.5;
            *(float *)(unaff_RBP + -0x78) = fVar33;
            *(float *)(unaff_RBP + -0x74) = (fVar9 + fVar7) * 0.5;
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            uVar24 = *(uint64_t *)(unaff_RBP + -0x78);
          }
          else {
            if (((*(float *)(lVar27 + 0xd8) <= 0.573576) && (3 < *(byte *)(lVar27 + 0xa8))) &&
               (*(float *)(lVar27 + 0xe4) <= 0.573576)) {
              plVar20 = (int64_t *)(lVar27 + 0xb0);
              uVar19 = uVar28;
              uVar29 = uVar28;
              do {
                if ((*plVar20 != 0) &&
                   (uVar25 = (int)uVar19 + 1, uVar19 = (uint64_t)uVar25, 2 < (int)uVar25))
                goto LAB_180394368;
                uVar29 = uVar29 + 1;
                plVar20 = plVar20 + 1;
              } while ((int64_t)uVar29 < 4);
              goto LAB_180394319;
            }
LAB_180394368:
            fVar33 = 0.573576;
            lVar27 = puVar23[3];
            if (lVar27 != 0) {
              if ((*(byte *)(lVar27 + 0x139) & 4) == 0) {
                if ((*(byte *)(lVar27 + 0x139) & 8) != 0) goto LAB_180394319;
              }
              else if (((*(float *)(lVar27 + 0xd8) <= 0.573576) && (3 < *(byte *)(lVar27 + 0xa8)))
                      && (*(float *)(lVar27 + 0xe4) <= 0.573576)) {
                plVar20 = (int64_t *)(lVar27 + 0xb0);
                uVar19 = uVar28;
                uVar29 = uVar28;
                do {
                  if ((*plVar20 != 0) &&
                     (uVar25 = (int)uVar19 + 1, uVar19 = (uint64_t)uVar25, 2 < (int)uVar25))
                  goto LAB_1803943cb;
                  uVar29 = uVar29 + 1;
                  plVar20 = plVar20 + 1;
                } while ((int64_t)uVar29 < 4);
                goto LAB_180394319;
              }
            }
LAB_1803943cb:
            if (cVar16 == '\0') {
              lVar22 = *(int64_t *)(unaff_RBX + 0x1000);
            }
            uVar24 = CONCAT44(fStack0000000000000074,fStack0000000000000070);
          }
        }
        *(uint64_t *)(lVar31 + lVar22) = uVar24;
        _fStack0000000000000060 = uVar21;
      }
      iVar17 = iVar17 + 1;
      in_stack_000000a0 = unaff_XMM15_Da;
      in_stack_000000a8 = unaff_XMM15_Dc;
      in_stack_000000b0 = unaff_XMM14_Da;
      in_stack_000000b8 = unaff_XMM14_Dc;
      in_stack_000000c0 = unaff_XMM13_Da;
      in_stack_000000c8 = unaff_XMM13_Dc;
      in_stack_000000d0 = unaff_XMM12_Da;
      in_stack_000000d8 = unaff_XMM12_Dc;
      in_stack_000000e0 = unaff_XMM11_Da;
      in_stack_000000e8 = unaff_XMM11_Dc;
      in_stack_000000f0 = unaff_XMM10_Da;
      in_stack_000000f8 = unaff_XMM10_Dc;
      in_stack_00000100 = unaff_XMM9_Da;
      in_stack_00000108 = unaff_XMM9_Dc;
      in_stack_00000110 = unaff_XMM8_Da;
      in_stack_00000118 = unaff_XMM8_Dc;
    } while (iVar17 < iVar30);
  }
  FUN_1803967f0(fVar33,iVar30);
  return 1;
}



uint64_t FUN_180394053(float param_1)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int iVar11;
  int64_t lVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t uVar17;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  ushort unaff_DI;
  int64_t lVar18;
  int in_R11D;
  uint64_t *unaff_R13;
  int unaff_R14D;
  uint64_t uVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000060;
  float fStack0000000000000064;
  int32_t in_stack_00000080;
  uint64_t uVar16;
  
  uVar19 = 0;
  do {
    lVar18 = (int64_t)in_R11D * 0x20;
    lVar12 = unaff_RBX;
    if (*(char *)(unaff_RBX + 0x1024) == '\0') {
      lVar12 = *(int64_t *)(unaff_RBX + 0x1000);
    }
    if (-1 < *(short *)(lVar18 + 0x18 + lVar12)) {
      lVar12 = unaff_RBX;
      if (*(char *)(unaff_RBX + 0x1024) == '\0') {
        lVar12 = *(int64_t *)(unaff_RBX + 0x1000);
      }
      puVar1 = (ushort *)(lVar18 + 0x18 + lVar12);
      *puVar1 = *puVar1 | unaff_DI;
      cVar8 = *(char *)(unaff_RBX + 0x1024);
      if (in_R11D == 0) {
        uVar14 = *unaff_R13;
      }
      else {
        lVar12 = unaff_RBX;
        if (cVar8 == '\0') {
          lVar12 = *(int64_t *)(unaff_RBX + 0x1000);
        }
        uVar14 = *(uint64_t *)((int64_t)in_R11D * 0x20 + -0x20 + lVar12);
      }
      *(uint64_t *)(unaff_RBP + 0xb8) = uVar14;
      iVar11 = in_R11D;
      do {
        iVar11 = iVar11 + 1;
        lVar12 = unaff_RBX;
        if (cVar8 == '\0') {
          lVar12 = *(int64_t *)(unaff_RBX + 0x1000);
        }
      } while (-1 < *(short *)((int64_t)iVar11 * 0x20 + 0x18 + lVar12));
      lVar12 = unaff_RBX;
      if (cVar8 == '\0') {
        lVar12 = *(int64_t *)(unaff_RBX + 0x1000);
      }
      uVar14 = *(uint64_t *)((int64_t)iVar11 * 0x20 + lVar12);
      lVar12 = unaff_RBX;
      if (cVar8 == '\0') {
        lVar12 = *(int64_t *)(unaff_RBX + 0x1000);
      }
      puVar9 = *(uint64_t **)(lVar18 + 8 + lVar12);
      fStack0000000000000060 = (float)uVar14;
      fVar2 = *(float *)(unaff_RBP + 0xb8);
      fStack0000000000000064 = (float)((uint64_t)uVar14 >> 0x20);
      fStack0000000000000060 = fStack0000000000000060 - fVar2;
      fVar3 = *(float *)(unaff_RBP + 0xbc);
      fStack0000000000000064 = fStack0000000000000064 - fVar3;
      fVar4 = *(float *)puVar9[1];
      fVar5 = ((float *)puVar9[1])[1];
      fVar6 = *(float *)*puVar9;
      fVar7 = ((float *)*puVar9)[1];
      param_1 = (fVar4 - fVar6) * fStack0000000000000064;
      fVar20 = (fVar5 - fVar7) * fStack0000000000000060 - param_1;
      lVar12 = unaff_RBX;
      if (fVar20 == 0.0) {
LAB_1803943e1:
        *(float *)(unaff_RBP + -0x80) = (fVar7 + fVar5) * 0.5;
        if (cVar8 == '\0') {
          lVar12 = *(int64_t *)(unaff_RBX + 0x1000);
        }
        uVar14 = CONCAT44(in_stack_00000080,(fVar6 + fVar4) * 0.5);
      }
      else {
        fVar20 = 1.0 / fVar20;
        param_1 = -0.001;
        fVar21 = ((fVar6 - fVar2) * (fVar5 - fVar7) - (fVar7 - fVar3) * (fVar4 - fVar6)) * fVar20;
        fVar20 = ((fVar6 - fVar2) * fStack0000000000000064 -
                 (fVar7 - fVar3) * fStack0000000000000060) * fVar20;
        if ((((fVar21 < -0.001) || (1.001 < fVar21)) || (fVar20 < -0.001)) || (1.001 < fVar20))
        goto LAB_1803943e1;
        param_1 = fVar20;
        if (fVar21 <= fVar20) {
          param_1 = fVar21;
        }
        if (1.0 < param_1) goto LAB_1803943e1;
        if (fVar20 <= fVar21) {
          fVar20 = fVar21;
        }
        if (fVar20 < 0.0) goto LAB_1803943e1;
        lVar10 = puVar9[2];
        if ((*(byte *)(lVar10 + 0x139) & 4) == 0) {
          if ((*(byte *)(lVar10 + 0x139) & 8) == 0) goto LAB_180394368;
LAB_180394319:
          param_1 = (fVar4 + fVar6) * 0.5;
          *(float *)(unaff_RBP + -0x78) = param_1;
          *(float *)(unaff_RBP + -0x74) = (fVar7 + fVar5) * 0.5;
          if (cVar8 == '\0') {
            lVar12 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          uVar14 = *(uint64_t *)(unaff_RBP + -0x78);
        }
        else {
          if (((*(float *)(lVar10 + 0xd8) <= 0.573576) && (3 < *(byte *)(lVar10 + 0xa8))) &&
             (*(float *)(lVar10 + 0xe4) <= 0.573576)) {
            plVar13 = (int64_t *)(lVar10 + 0xb0);
            uVar16 = uVar19;
            uVar17 = uVar19;
            do {
              if ((*plVar13 != 0) &&
                 (uVar15 = (int)uVar16 + 1, uVar16 = (uint64_t)uVar15, 2 < (int)uVar15))
              goto LAB_180394368;
              uVar17 = uVar17 + 1;
              plVar13 = plVar13 + 1;
            } while ((int64_t)uVar17 < 4);
            goto LAB_180394319;
          }
LAB_180394368:
          param_1 = 0.573576;
          lVar10 = puVar9[3];
          if (lVar10 != 0) {
            if ((*(byte *)(lVar10 + 0x139) & 4) == 0) {
              if ((*(byte *)(lVar10 + 0x139) & 8) != 0) goto LAB_180394319;
            }
            else if (((*(float *)(lVar10 + 0xd8) <= 0.573576) && (3 < *(byte *)(lVar10 + 0xa8))) &&
                    (*(float *)(lVar10 + 0xe4) <= 0.573576)) {
              plVar13 = (int64_t *)(lVar10 + 0xb0);
              uVar16 = uVar19;
              uVar17 = uVar19;
              do {
                if ((*plVar13 != 0) &&
                   (uVar15 = (int)uVar16 + 1, uVar16 = (uint64_t)uVar15, 2 < (int)uVar15))
                goto LAB_1803943cb;
                uVar17 = uVar17 + 1;
                plVar13 = plVar13 + 1;
              } while ((int64_t)uVar17 < 4);
              goto LAB_180394319;
            }
          }
LAB_1803943cb:
          if (cVar8 == '\0') {
            lVar12 = *(int64_t *)(unaff_RBX + 0x1000);
          }
          uVar14 = CONCAT44(fStack0000000000000064 * fVar21 + fVar3,
                            fStack0000000000000060 * fVar21 + fVar2);
        }
      }
      *(uint64_t *)(lVar18 + lVar12) = uVar14;
    }
    in_R11D = in_R11D + 1;
    unaff_DI = 0x8000;
    if (unaff_R14D <= in_R11D) {
      FUN_1803967f0(param_1,unaff_R14D);
      return 1;
    }
  } while( true );
}



int8_t FUN_180394477(void)

{
  FUN_1803967f0();
  return 1;
}



int8_t FUN_1803944a2(void)

{
  return 1;
}



// WARNING: Removing unreachable block (ram,0x000180394791)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address





