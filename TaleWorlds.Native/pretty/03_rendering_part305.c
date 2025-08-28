#include "TaleWorlds.Native.Split.h"

// 03_rendering_part305.c - 1 个函数

// 函数: void FUN_18042dad0(longlong param_1,int param_2,int *param_3,longlong *param_4)
void FUN_18042dad0(longlong param_1,int param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  int32_t *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  byte *pbVar23;
  ulonglong uVar24;
  int iStackX_8;
  uint uStack_78;
  longlong lStack_70;
  int *piStack_60;
  longlong lStack_58;
  
  piStack_60 = (int *)0x0;
  puVar3 = (int32_t *)realloc(0,10);
  if (puVar3 != (int32_t *)0x0) {
    piStack_60 = puVar3 + 2;
    puVar3[1] = 0;
    *puVar3 = 2;
  }
  *(int8_t *)((longlong)piStack_60[-1] + (longlong)piStack_60) = 0x78;
  piStack_60[-1] = piStack_60[-1] + 1;
  iVar15 = piStack_60[-2];
  if (iVar15 <= piStack_60[-1] + 1) {
    iVar15 = iVar15 * 2 + 1;
    piVar4 = (int *)realloc(piStack_60 + -2,(longlong)iVar15 + 8);
    if (piVar4 != (int *)0x0) {
      piStack_60 = piVar4 + 2;
      *piVar4 = iVar15;
    }
  }
  lStack_58 = 0x4000;
  uVar18 = 3;
  iVar15 = 0;
  *(int8_t *)((longlong)piStack_60[-1] + (longlong)piStack_60) = 0x5e;
  uVar9 = 3;
  piStack_60[-1] = piStack_60[-1] + 1;
  plVar20 = param_4;
  for (lVar10 = 0x4000; lVar10 != 0; lVar10 = lVar10 + -1) {
    *plVar20 = 0;
    plVar20 = plVar20 + 1;
  }
  iVar19 = 0;
  if (0 < param_2 + -3) {
    do {
      lVar21 = 0;
      lVar22 = (longlong)iVar19;
      uVar14 = 3;
      pbVar23 = (byte *)(param_1 + lVar22);
      uStack_78 = 3;
      lStack_70 = 0;
      uVar13 = (uint)pbVar23[2] * 0x10000 + (uint)pbVar23[1] * 0x100 + (uint)*pbVar23;
      uVar13 = uVar13 ^ uVar13 * 8;
      uVar13 = uVar13 + (uVar13 >> 5);
      uVar13 = uVar13 ^ uVar13 * 0x10;
      uVar13 = uVar13 + (uVar13 >> 0x11);
      uVar13 = (uVar13 >> 6) + uVar13 & 0x3fff;
      lVar10 = param_4[uVar13];
      plVar20 = param_4 + uVar13;
      if (lVar10 == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = *(int *)(lVar10 + -4);
      }
      if (0 < iVar15) {
        do {
          lVar12 = *(longlong *)(lVar10 + lVar21 * 8);
          if ((longlong)(iVar19 + -0x8000) < lVar12 - param_1) {
            uVar13 = 0;
            if (0 < param_2 - iVar19) {
              uVar11 = 0;
              uVar24 = 0;
              do {
                uVar13 = (uint)uVar24;
                uVar14 = uStack_78;
                if ((0x101 < (longlong)uVar11) || (*(byte *)(lVar12 + uVar11) != pbVar23[uVar11]))
                break;
                uVar13 = uVar13 + 1;
                uVar24 = (ulonglong)uVar13;
                uVar11 = uVar11 + 1;
              } while ((longlong)uVar11 < (longlong)(param_2 - iVar19));
            }
            if ((int)uVar14 <= (int)uVar13) {
              uStack_78 = uVar13;
              lStack_70 = lVar12;
              uVar14 = uVar13;
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < iVar15);
      }
      iVar15 = 2;
      if ((lVar10 != 0) && (*(int *)(lVar10 + -4) == 0x10)) {
                    // WARNING: Subroutine does not return
        memmove(lVar10,lVar10 + 0x40,0x40);
      }
      if (lVar10 == 0) {
LAB_18042dd33:
        lVar21 = lVar10 + -8;
        if (lVar10 == 0) {
          lVar21 = 0;
        }
        piVar4 = (int *)realloc(lVar21,(longlong)(iVar15 * 8) + 8);
        if (piVar4 != (int *)0x0) {
          if (*plVar20 == 0) {
            piVar4[1] = 0;
          }
          *plVar20 = (longlong)(piVar4 + 2);
          *piVar4 = iVar15;
        }
      }
      else if (*(int *)(lVar10 + -8) <= *(int *)(lVar10 + -4) + 1) {
        if (lVar10 != 0) {
          iVar15 = *(int *)(lVar10 + -8) * 2 + 1;
        }
        goto LAB_18042dd33;
      }
      *(byte **)(*plVar20 + (longlong)*(int *)(*plVar20 + -4) * 8) = pbVar23;
      *(int *)(*plVar20 + -4) = *(int *)(*plVar20 + -4) + 1;
      bVar7 = (byte)uVar9;
      if (lStack_70 == 0) {
LAB_18042e428:
        bVar8 = *pbVar23;
        if (bVar8 < 0x90) {
          uVar14 = bVar8 + 0x30;
          piVar4 = (int *)0x0;
          iVar15 = 8;
          do {
            iVar16 = iVar15;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)piVar4 * 2 | uVar13;
            piVar4 = (int *)(ulonglong)uVar13;
            iVar15 = iVar16 + -1;
          } while (iVar15 != 0);
          uVar9 = uVar9 + 8;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          if (7 < (int)uVar9) {
            uVar11 = (ulonglong)(uVar9 >> 3);
            uVar9 = uVar9 + (uVar9 >> 3) * -8;
            do {
              iVar15 = iVar16;
              if (piStack_60 == (int *)0x0) {
LAB_18042e49d:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4,(longlong)(iVar15 + 1) + 8);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar15 + 1;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar15 = piStack_60[-2] * 2;
                goto LAB_18042e49d;
              }
              *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else {
          uVar14 = bVar8 + 0x100;
          piVar4 = (int *)0x0;
          iVar15 = 9;
          do {
            iVar16 = iVar15;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)piVar4 * 2 | uVar13;
            piVar4 = (int *)(ulonglong)uVar13;
            iVar15 = iVar16 + -1;
          } while (iVar15 != 0);
          uVar9 = uVar9 + 9;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          if (7 < (int)uVar9) {
            uVar11 = (ulonglong)(uVar9 >> 3);
            uVar9 = uVar9 + (uVar9 >> 3) * -8;
            do {
              iVar15 = iVar16;
              if (piStack_60 == (int *)0x0) {
LAB_18042e54d:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4,(longlong)(iVar15 + 1) + 8);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar15 + 1;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar15 = piStack_60[-2] * 2;
                goto LAB_18042e54d;
              }
              *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        uStack_78 = 1;
      }
      else {
        uVar14 = (uint)*(byte *)(lVar22 + 3 + param_1) * 0x10000 +
                 (uint)*(byte *)(lVar22 + 2 + param_1) * 0x100 +
                 (uint)*(byte *)(lVar22 + 1 + param_1);
        uVar14 = uVar14 ^ uVar14 * 8;
        uVar14 = uVar14 + (uVar14 >> 5);
        uVar14 = uVar14 ^ uVar14 * 0x10;
        uVar14 = uVar14 + (uVar14 >> 0x11);
        iVar15 = 0;
        lVar21 = 0;
        lVar10 = param_4[(uVar14 >> 6) + uVar14 & 0x3fff];
        if (lVar10 != 0) {
          iVar15 = *(int *)(lVar10 + -4);
        }
        if (0 < iVar15) {
          do {
            iVar16 = 0;
            lVar22 = *(longlong *)(lVar10 + lVar21 * 8);
            if ((longlong)(iVar19 + -0x7fff) < lVar22 - param_1) {
              lVar12 = 0;
              iVar1 = (param_2 - iVar19) + -1;
              if (0 < iVar1) {
                do {
                  if ((0x101 < lVar12) || (*(byte *)(lVar22 + lVar12) != pbVar23[lVar12 + 1]))
                  break;
                  iVar16 = iVar16 + 1;
                  lVar12 = lVar12 + 1;
                } while (lVar12 < iVar1);
              }
              if ((int)uStack_78 < iVar16) goto LAB_18042e428;
            }
            lVar21 = lVar21 + 1;
          } while (lVar21 < iVar15);
        }
        uVar17 = 0;
        iStackX_8 = (int)param_1;
        uVar14 = 0;
        iVar15 = (iStackX_8 - (int)lStack_70) + iVar19;
        uVar11 = uVar17;
        uVar24 = uVar17;
        if (3 < (int)uStack_78) {
          do {
            lVar10 = uVar24 * 2;
            uVar24 = uVar24 + 1;
            uVar14 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar14;
          } while ((int)(*(ushort *)(&UNK_180a291f4 + lVar10) - 1) < (int)uStack_78);
        }
        iVar16 = uVar14 + 0x101;
        if (iVar16 < 0x90) {
          uVar14 = uVar14 + 0x131;
          iVar16 = 8;
          do {
            iVar1 = iVar16;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)uVar17 * 2 | uVar13;
            uVar17 = (ulonglong)uVar13;
            iVar16 = iVar1 + -1;
          } while (iVar16 != 0);
          iVar1 = iVar1 + 1;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          uVar14 = uVar9 + 8;
          if (7 < (int)uVar14) {
            uVar11 = (ulonglong)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042df4f:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042df4f;
              }
              *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else if (iVar16 < 0x100) {
          uVar14 = uVar14 + 0x201;
          iVar16 = 9;
          do {
            iVar1 = iVar16;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)uVar17 * 2 | uVar13;
            uVar17 = (ulonglong)uVar13;
            iVar16 = iVar1 + -1;
          } while (iVar16 != 0);
          iVar1 = iVar1 + 1;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          uVar14 = uVar9 + 9;
          if (7 < (int)uVar14) {
            uVar11 = (ulonglong)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e00e:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e00e;
              }
              *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else if (iVar16 < 0x118) {
          uVar14 = uVar14 + 1;
          iVar16 = 7;
          do {
            iVar1 = iVar16;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)uVar17 * 2 | uVar13;
            uVar17 = (ulonglong)uVar13;
            iVar16 = iVar1 + -1;
          } while (iVar16 != 0);
          iVar1 = iVar1 + 1;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          uVar14 = uVar9 + 7;
          if (7 < (int)uVar14) {
            uVar11 = (ulonglong)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e0ce:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e0ce;
              }
              *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else {
          uVar14 = uVar14 + 0xa9;
          iVar16 = 8;
          do {
            iVar1 = iVar16;
            uVar13 = uVar14 & 1;
            uVar14 = (int)uVar14 >> 1;
            uVar13 = (int)uVar17 * 2 | uVar13;
            uVar17 = (ulonglong)uVar13;
            iVar16 = iVar1 + -1;
          } while (iVar16 != 0);
          iVar1 = iVar1 + 1;
          uVar18 = uVar18 | uVar13 << (bVar7 & 0x1f);
          uVar14 = uVar9 + 8;
          if (7 < (int)uVar14) {
            uVar11 = (ulonglong)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e17e:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e17e;
              }
              *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        if ((&UNK_180a291d0)[uVar24] != 0) {
          bVar7 = (byte)uVar14;
          uVar14 = uVar14 + (byte)(&UNK_180a291d0)[uVar24];
          uVar18 = uVar18 | uStack_78 - *(ushort *)(&UNK_180a291f0 + uVar24 * 2) << (bVar7 & 0x1f);
          if (7 < (int)uVar14) {
            uVar11 = (ulonglong)(uVar14 >> 3);
            uVar14 = uVar14 + (uVar14 >> 3) * -8;
            do {
              iVar16 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e23e:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar16;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar16 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e23e;
              }
              *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        uVar13 = 0;
        uVar9 = 0;
        lVar10 = 0;
        if (1 < iVar15) {
          do {
            lVar21 = lVar10 * 2;
            lVar10 = lVar10 + 1;
            uVar9 = uVar9 + 1;
          } while ((int)(*(ushort *)(&UNK_180a29194 + lVar21) - 1) < iVar15);
        }
        iVar16 = 5;
        do {
          uVar2 = uVar9 & 1;
          uVar9 = (int)uVar9 >> 1;
          uVar13 = uVar13 * 2 | uVar2;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        uVar9 = uVar14 + 5;
        uVar18 = uVar18 | uVar13 << ((byte)uVar14 & 0x1f);
        if (7 < (int)uVar9) {
          uVar11 = (ulonglong)(uVar9 >> 3);
          uVar9 = uVar9 + (uVar9 >> 3) * -8;
          do {
            iVar16 = iVar1;
            if (piStack_60 == (int *)0x0) {
LAB_18042e311:
              piVar4 = piStack_60 + -2;
              if (piStack_60 == (int *)0x0) {
                piVar4 = (int *)0x0;
              }
              piVar4 = (int *)realloc(piVar4,(longlong)iVar16 + 8);
              if (piVar4 != (int *)0x0) {
                if (piStack_60 == (int *)0x0) {
                  piVar4[1] = 0;
                }
                piStack_60 = piVar4 + 2;
                *piVar4 = iVar16;
              }
            }
            else if (piStack_60[-2] <= piStack_60[-1] + 1) {
              iVar16 = piStack_60[-2] * 2 + 1;
              goto LAB_18042e311;
            }
            *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
            piStack_60[-1] = piStack_60[-1] + 1;
            uVar18 = uVar18 >> 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if ((&UNK_180a29630)[lVar10] != 0) {
          uVar18 = uVar18 | iVar15 - (uint)*(ushort *)(&UNK_180a29190 + lVar10 * 2) <<
                            ((byte)uVar9 & 0x1f);
          uVar9 = uVar9 + (byte)(&UNK_180a29630)[lVar10];
          if (7 < (int)uVar9) {
            uVar11 = (ulonglong)(uVar9 >> 3);
            uVar9 = uVar9 + (uVar9 >> 3) * -8;
            do {
              iVar15 = iVar1;
              if (piStack_60 == (int *)0x0) {
LAB_18042e3d3:
                piVar4 = piStack_60 + -2;
                if (piStack_60 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                piVar4 = (int *)realloc(piVar4,(longlong)iVar15 + 8);
                if (piVar4 != (int *)0x0) {
                  if (piStack_60 == (int *)0x0) {
                    piVar4[1] = 0;
                  }
                  piStack_60 = piVar4 + 2;
                  *piVar4 = iVar15;
                }
              }
              else if (piStack_60[-2] <= piStack_60[-1] + 1) {
                iVar15 = piStack_60[-2] * 2 + 1;
                goto LAB_18042e3d3;
              }
              *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
              piStack_60[-1] = piStack_60[-1] + 1;
              uVar18 = uVar18 >> 8;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      iVar15 = iVar19 + uStack_78;
      iVar19 = iVar15;
    } while (iVar15 < param_2 + -3);
  }
  lVar21 = (longlong)param_2;
  lVar10 = (longlong)iVar15;
  if (lVar10 < lVar21) {
    pbVar23 = (byte *)(param_1 + lVar10);
    lVar10 = lVar21 - lVar10;
    do {
      uVar14 = 0;
      bVar7 = *pbVar23;
      bVar8 = (byte)uVar9;
      if (bVar7 < 0x90) {
        uVar13 = bVar7 + 0x30;
        iVar15 = 8;
        do {
          uVar2 = uVar13 & 1;
          uVar13 = (int)uVar13 >> 1;
          uVar14 = uVar14 * 2 | uVar2;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        uVar9 = uVar9 + 8;
        uVar18 = uVar18 | uVar14 << (bVar8 & 0x1f);
        if (7 < (int)uVar9) {
          uVar11 = (ulonglong)(uVar9 >> 3);
          uVar9 = uVar9 + (uVar9 >> 3) * -8;
          do {
            if (piStack_60 == (int *)0x0) {
              iVar15 = 2;
LAB_18042e665:
              piVar4 = piStack_60 + -2;
              if (piStack_60 == (int *)0x0) {
                piVar4 = (int *)0x0;
              }
              piVar4 = (int *)realloc(piVar4,(longlong)iVar15 + 8);
              if (piVar4 != (int *)0x0) {
                if (piStack_60 == (int *)0x0) {
                  piVar4[1] = 0;
                }
                piStack_60 = piVar4 + 2;
                *piVar4 = iVar15;
              }
            }
            else if (piStack_60[-2] <= piStack_60[-1] + 1) {
              iVar15 = piStack_60[-2] * 2 + 1;
              goto LAB_18042e665;
            }
            *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
            piStack_60[-1] = piStack_60[-1] + 1;
            uVar18 = uVar18 >> 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      else {
        uVar13 = bVar7 + 0x100;
        iVar15 = 9;
        do {
          uVar2 = uVar13 & 1;
          uVar13 = (int)uVar13 >> 1;
          uVar14 = uVar14 * 2 | uVar2;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        uVar9 = uVar9 + 9;
        uVar18 = uVar18 | uVar14 << (bVar8 & 0x1f);
        if (7 < (int)uVar9) {
          uVar11 = (ulonglong)(uVar9 >> 3);
          uVar9 = uVar9 + (uVar9 >> 3) * -8;
          do {
            if (piStack_60 == (int *)0x0) {
              iVar15 = 2;
LAB_18042e711:
              piVar4 = piStack_60 + -2;
              if (piStack_60 == (int *)0x0) {
                piVar4 = (int *)0x0;
              }
              piVar4 = (int *)realloc(piVar4,(longlong)iVar15 + 8);
              if (piVar4 != (int *)0x0) {
                if (piStack_60 == (int *)0x0) {
                  piVar4[1] = 0;
                }
                piStack_60 = piVar4 + 2;
                *piVar4 = iVar15;
              }
            }
            else if (piStack_60[-2] <= piStack_60[-1] + 1) {
              iVar15 = piStack_60[-2] * 2 + 1;
              goto LAB_18042e711;
            }
            *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
            piStack_60[-1] = piStack_60[-1] + 1;
            uVar18 = uVar18 >> 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
      pbVar23 = pbVar23 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  piVar4 = (int *)0x0;
  iVar15 = 7;
  do {
    iVar19 = iVar15;
    iVar15 = iVar19 + -1;
  } while (iVar15 != 0);
  uVar14 = uVar9 + 7;
  uVar18 = uVar18 | 0 << ((byte)uVar9 & 0x1f);
  if (7 < (int)uVar14) {
    uVar11 = (ulonglong)(uVar14 >> 3);
    uVar14 = uVar14 + (uVar14 >> 3) * -8;
    do {
      iVar15 = iVar19;
      if (piStack_60 == (int *)0x0) {
LAB_18042e7e2:
        piVar5 = piStack_60 + -2;
        if (piStack_60 == (int *)0x0) {
          piVar5 = piVar4;
        }
        piVar5 = (int *)realloc(piVar5,(longlong)(iVar15 + 1) + 8);
        if (piVar5 != (int *)0x0) {
          if (piStack_60 == (int *)0x0) {
            piVar5[1] = 0;
          }
          piStack_60 = piVar5 + 2;
          *piVar5 = iVar15 + 1;
        }
      }
      else if (piStack_60[-2] <= piStack_60[-1] + 1) {
        iVar15 = piStack_60[-2] * 2;
        goto LAB_18042e7e2;
      }
      *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
      piStack_60[-1] = piStack_60[-1] + 1;
      uVar18 = uVar18 >> 8;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  while (plVar20 = param_4, uVar14 != 0) {
    uVar14 = uVar14 + 1;
    if (7 < (int)uVar14) {
      uVar11 = (ulonglong)(uVar14 >> 3);
      uVar14 = uVar14 + (uVar14 >> 3) * -8;
      do {
        if (piStack_60 == (int *)0x0) {
          iVar15 = 2;
LAB_18042e87d:
          piVar5 = piStack_60 + -2;
          if (piStack_60 == (int *)0x0) {
            piVar5 = piVar4;
          }
          piVar5 = (int *)realloc(piVar5,(longlong)iVar15 + 8);
          if (piVar5 != (int *)0x0) {
            if (piStack_60 == (int *)0x0) {
              piVar5[1] = 0;
            }
            piStack_60 = piVar5 + 2;
            *piVar5 = iVar15;
          }
        }
        else if (piStack_60[-2] <= piStack_60[-1] + 1) {
          iVar15 = piStack_60[-2] * 2 + 1;
          goto LAB_18042e87d;
        }
        *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar18;
        piStack_60[-1] = piStack_60[-1] + 1;
        uVar18 = uVar18 >> 8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  do {
    if (*plVar20 != 0) {
      free(*plVar20 + -8);
    }
    lStack_58 = lStack_58 + -1;
    plVar20 = plVar20 + 1;
  } while (lStack_58 != 0);
  free(param_4);
  uVar9 = 1;
  if (0 < lVar21) {
    lVar10 = (longlong)(param_2 % 0x15b0);
    piVar5 = piVar4;
    do {
      lVar22 = 0;
      if (0 < lVar10) {
        do {
          lVar12 = lVar22 + 1;
          uVar9 = uVar9 + *(byte *)((longlong)piVar5 + lVar22 + param_1);
          piVar4 = (int *)(ulonglong)((int)piVar4 + uVar9);
          lVar22 = lVar12;
        } while (lVar12 < lVar10);
      }
      piVar5 = (int *)((longlong)piVar5 + lVar10);
      lVar10 = 0x15b0;
      uVar9 = uVar9 % 0xfff1;
      piVar4 = (int *)(ulonglong)(uint)((int)piVar4 + (int)((ulonglong)piVar4 / 0xfff1) * -0xfff1);
    } while ((longlong)piVar5 < lVar21);
  }
  if (piStack_60 == (int *)0x0) {
    iVar15 = 2;
  }
  else {
    iVar15 = piStack_60[-2];
    if (piStack_60[-1] + 1 < iVar15) goto LAB_18042e9f9;
    iVar15 = iVar15 * 2 + 1;
  }
  piVar5 = piStack_60 + -2;
  if (piStack_60 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  piVar5 = (int *)realloc(piVar5,(longlong)iVar15 + 8);
  if (piVar5 != (int *)0x0) {
    if (piStack_60 == (int *)0x0) {
      piVar5[1] = 0;
    }
    piStack_60 = piVar5 + 2;
    *piVar5 = iVar15;
  }
LAB_18042e9f9:
  piVar5 = piStack_60 + -2;
  *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)((ulonglong)piVar4 >> 8);
  piStack_60[-1] = piStack_60[-1] + 1;
  if (*piVar5 <= piStack_60[-1] + 1) {
    iVar15 = *piVar5 * 2 + 1;
    piVar6 = (int *)realloc(piVar5,(longlong)iVar15 + 8);
    if (piVar6 != (int *)0x0) {
      piStack_60 = piVar6 + 2;
      *piVar6 = iVar15;
      piVar5 = piVar6;
    }
  }
  *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)piVar4;
  piStack_60[-1] = piStack_60[-1] + 1;
  if (*piVar5 <= piStack_60[-1] + 1) {
    iVar15 = *piVar5 * 2 + 1;
    piVar4 = (int *)realloc(piVar5,(longlong)iVar15 + 8);
    if (piVar4 != (int *)0x0) {
      piStack_60 = piVar4 + 2;
      *piVar4 = iVar15;
      piVar5 = piVar4;
    }
  }
  *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)(uVar9 >> 8);
  piStack_60[-1] = piStack_60[-1] + 1;
  if (*piVar5 <= piStack_60[-1] + 1) {
    iVar15 = *piVar5 * 2 + 1;
    piVar4 = (int *)realloc(piVar5,(longlong)iVar15 + 8);
    if (piVar4 != (int *)0x0) {
      piStack_60 = piVar4 + 2;
      *piVar4 = iVar15;
      piVar5 = piVar4;
    }
  }
  *(char *)((longlong)piStack_60[-1] + (longlong)piStack_60) = (char)uVar9;
  piStack_60[-1] = piStack_60[-1] + 1;
  iVar15 = piStack_60[-1];
  *param_3 = iVar15;
                    // WARNING: Subroutine does not return
  memmove(piVar5,piStack_60,(longlong)iVar15);
}



uint FUN_18042eb00(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = param_1 - param_3;
  uVar6 = (uVar5 + param_2) - param_3;
  uVar1 = (uVar5 + param_2) - param_1;
  uVar4 = (int)uVar1 >> 0x1f;
  iVar7 = (uVar1 ^ uVar4) - uVar4;
  iVar3 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  uVar1 = (int)uVar6 >> 0x1f;
  iVar2 = (uVar6 ^ uVar1) - uVar1;
  if ((iVar7 <= iVar3) && (iVar7 <= iVar2)) {
    return param_1 & 0xff;
  }
  param_2 = param_2 & 0xff;
  if (iVar2 < iVar3) {
    param_2 = param_3 & 0xff;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



