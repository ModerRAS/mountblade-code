#include "TaleWorlds.Native.Split.h"

// 99_part_07_part033.c - 2 个函数

// 函数: void FUN_1804b9700(void)
void FUN_1804b9700(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RBP;
  int iVar9;
  ulonglong uVar10;
  undefined8 *unaff_RDI;
  char *pcVar11;
  longlong in_R9;
  longlong in_R10;
  uint uVar12;
  longlong unaff_R14;
  char *unaff_R15;
  
  if (unaff_RDI != (undefined8 *)0x0) {
LAB_1804b9710:
    if ((char *)*unaff_RDI == (char *)0x0) {
      lVar5 = 0;
      pcVar2 = unaff_R15;
    }
    else {
      lVar5 = unaff_RDI[2];
      pcVar2 = (char *)*unaff_RDI;
    }
    if (lVar5 != in_R9) goto LAB_1804b97ce;
    pcVar11 = pcVar2 + lVar5;
    if (pcVar2 < pcVar11) {
      lVar5 = in_R10 - (longlong)pcVar2;
      while (*pcVar2 == pcVar2[lVar5]) {
        pcVar2 = pcVar2 + 1;
        if (pcVar11 <= pcVar2) goto LAB_1804b9791;
      }
      goto LAB_1804b97ce;
    }
LAB_1804b9791:
    pcVar2 = "skin_color_gradient_point";
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar2 != '\0');
    for (puVar6 = (undefined8 *)unaff_RDI[6]; puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)puVar6[0xb]) {
      if ((char *)*puVar6 == (char *)0x0) {
        pcVar2 = (char *)0x0;
        pcVar3 = unaff_R15;
      }
      else {
        pcVar2 = (char *)puVar6[2];
        pcVar3 = (char *)*puVar6;
      }
      if (pcVar2 == pcVar4 + -0x180a2e84f) {
        pcVar2 = pcVar2 + (longlong)pcVar3;
        if (pcVar2 <= pcVar3) {
LAB_1804b9811:
          uVar10 = 0;
LAB_1804b9820:
          uVar10 = (ulonglong)((int)uVar10 + 1);
          pcVar2 = "skin_color_gradient_point";
          do {
            pcVar4 = pcVar2;
            pcVar2 = pcVar4 + 1;
          } while (*pcVar2 != '\0');
          puVar6 = (undefined8 *)puVar6[0xb];
          if (puVar6 != (undefined8 *)0x0) {
            do {
              if ((char *)*puVar6 == (char *)0x0) {
                pcVar2 = (char *)0x0;
                pcVar3 = unaff_R15;
              }
              else {
                pcVar2 = (char *)puVar6[2];
                pcVar3 = (char *)*puVar6;
              }
              if (pcVar2 == pcVar4 + -0x180a2e84f) {
                pcVar2 = pcVar2 + (longlong)pcVar3;
                if (pcVar2 <= pcVar3) goto LAB_1804b9820;
                pcVar11 = &UNK_180a2e850 + -(longlong)pcVar3;
                while (*pcVar3 == pcVar11[(longlong)pcVar3]) {
                  pcVar3 = pcVar3 + 1;
                  if (pcVar2 <= pcVar3) goto LAB_1804b9820;
                }
              }
              puVar6 = (undefined8 *)puVar6[0xb];
              if (puVar6 == (undefined8 *)0x0) break;
            } while( true );
          }
          goto LAB_1804b985d;
        }
        pcVar11 = &UNK_180a2e850 + -(longlong)pcVar3;
        while (*pcVar3 == pcVar11[(longlong)pcVar3]) {
          pcVar3 = pcVar3 + 1;
          if (pcVar2 <= pcVar3) goto LAB_1804b9811;
        }
      }
    }
    uVar10 = 0;
LAB_1804b985d:
    iVar9 = (int)uVar10;
    *(int *)(unaff_R14 + 0x5d0) = iVar9;
    lVar5 = unaff_RDI[6];
    if (iVar9 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9 << 4,
                            CONCAT71((int7)((ulonglong)pcVar11 >> 8),0x12));
    }
    *(undefined8 *)(unaff_R14 + 0x5c8) = uVar1;
    if (0 < iVar9) {
      lVar8 = 0;
      do {
        FUN_180631960(lVar5,&DAT_18098be48,*(longlong *)(unaff_R14 + 0x5c8) + lVar8);
        lVar5 = *(longlong *)(lVar5 + 0x58);
        lVar8 = lVar8 + 0x10;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
LAB_1804b98f8:
  pcVar2 = "eye_color_gradient_points";
  do {
    pcVar11 = pcVar2;
    pcVar2 = pcVar11 + 1;
  } while (*pcVar2 != '\0');
  puVar6 = *(undefined8 **)(unaff_RBP + 0x30);
  do {
    if (puVar6 == (undefined8 *)0x0) goto LAB_1804b9a50;
    if ((char *)*puVar6 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = unaff_R15;
    }
    else {
      pcVar2 = (char *)puVar6[2];
      pcVar4 = (char *)*puVar6;
    }
    if (pcVar2 == pcVar11 + -0x180a2e82f) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_1804b9957:
        pcVar2 = "eye_color_gradient_point";
        do {
          pcVar11 = pcVar2;
          pcVar2 = pcVar11 + 1;
        } while (*pcVar2 != '\0');
        for (puVar7 = (undefined8 *)puVar6[6]; puVar7 != (undefined8 *)0x0;
            puVar7 = (undefined8 *)puVar7[0xb]) {
          if ((char *)*puVar7 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar4 = unaff_R15;
          }
          else {
            pcVar2 = (char *)puVar7[2];
            pcVar4 = (char *)*puVar7;
          }
          if (pcVar2 == pcVar11 + -0x180a2e88f) {
            pcVar2 = pcVar4 + (longlong)pcVar2;
            if (pcVar2 <= pcVar4) {
LAB_1804b99c6:
              uVar10 = 0;
LAB_1804b99d0:
              uVar12 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar12;
              pcVar2 = "eye_color_gradient_point";
              do {
                pcVar11 = pcVar2;
                pcVar2 = pcVar11 + 1;
              } while (*pcVar2 != '\0');
              puVar7 = (undefined8 *)puVar7[0xb];
              do {
                if (puVar7 == (undefined8 *)0x0) {
                  if (1 < (int)uVar12) {
                    *(uint *)(unaff_R14 + 0x7d4) = uVar12;
                  }
                  goto LAB_1804b9a15;
                }
                if ((char *)*puVar7 == (char *)0x0) {
                  pcVar2 = (char *)0x0;
                  pcVar4 = unaff_R15;
                }
                else {
                  pcVar2 = (char *)puVar7[2];
                  pcVar4 = (char *)*puVar7;
                }
                if (pcVar2 == pcVar11 + -0x180a2e88f) {
                  pcVar2 = pcVar2 + (longlong)pcVar4;
                  if (pcVar2 <= pcVar4) goto LAB_1804b99d0;
                  lVar5 = (longlong)&UNK_180a2e890 - (longlong)pcVar4;
                  while (*pcVar4 == pcVar4[lVar5]) {
                    pcVar4 = pcVar4 + 1;
                    if (pcVar2 <= pcVar4) goto LAB_1804b99d0;
                  }
                }
                puVar7 = (undefined8 *)puVar7[0xb];
              } while( true );
            }
            lVar5 = (longlong)&UNK_180a2e890 - (longlong)pcVar4;
            while (*pcVar4 == pcVar4[lVar5]) {
              pcVar4 = pcVar4 + 1;
              if (pcVar2 <= pcVar4) goto LAB_1804b99c6;
            }
          }
        }
        uVar10 = 0;
LAB_1804b9a15:
        lVar5 = puVar6[6];
        if (0 < (int)uVar10) {
          lVar8 = unaff_R14 + 0x5d4;
          do {
            FUN_180631960(lVar5,&DAT_18098be48,lVar8);
            lVar5 = *(longlong *)(lVar5 + 0x58);
            lVar8 = lVar8 + 0x10;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
LAB_1804b9a50:
        pcVar2 = "hair_color_gradient_points";
        do {
          pcVar11 = pcVar2;
          pcVar2 = pcVar11 + 1;
        } while (*pcVar2 != '\0');
        puVar6 = *(undefined8 **)(unaff_RBP + 0x30);
        do {
          if (puVar6 == (undefined8 *)0x0) {
            return;
          }
          if ((char *)*puVar6 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar4 = unaff_R15;
          }
          else {
            pcVar2 = (char *)puVar6[2];
            pcVar4 = (char *)*puVar6;
          }
          if (pcVar2 == pcVar11 + -0x180a2e86f) {
            pcVar2 = pcVar2 + (longlong)pcVar4;
            if (pcVar2 <= pcVar4) {
LAB_1804b9b12:
              pcVar2 = "hair_color_gradient_point";
              do {
                pcVar11 = pcVar2;
                pcVar2 = pcVar11 + 1;
              } while (*pcVar2 != '\0');
              puVar7 = (undefined8 *)puVar6[6];
              do {
                if (puVar7 == (undefined8 *)0x0) {
                  uVar12 = 0;
LAB_1804b9bde:
                  lVar5 = puVar6[6];
                  if (0 < (int)uVar12) {
                    lVar8 = unaff_R14 + 0x7d8;
                    uVar10 = (ulonglong)uVar12;
                    do {
                      FUN_180631960(lVar5,&DAT_18098be48,lVar8);
                      lVar5 = *(longlong *)(lVar5 + 0x58);
                      lVar8 = lVar8 + 0x10;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  return;
                }
                if ((char *)*puVar7 == (char *)0x0) {
                  pcVar2 = (char *)0x0;
                  pcVar4 = unaff_R15;
                }
                else {
                  pcVar2 = (char *)puVar7[2];
                  pcVar4 = (char *)*puVar7;
                }
                if (pcVar2 == pcVar11 + -0x180a2e98f) {
                  pcVar2 = pcVar2 + (longlong)pcVar4;
                  if (pcVar2 <= pcVar4) {
LAB_1804b9b91:
                    uVar12 = 0;
LAB_1804b9ba0:
                    uVar12 = uVar12 + 1;
                    pcVar2 = "hair_color_gradient_point";
                    do {
                      pcVar11 = pcVar2;
                      pcVar2 = pcVar11 + 1;
                    } while (*pcVar2 != '\0');
                    puVar7 = (undefined8 *)puVar7[0xb];
                    do {
                      if (puVar7 == (undefined8 *)0x0) {
                        if (1 < (int)uVar12) {
                          *(uint *)(unaff_R14 + 0x9d8) = uVar12;
                        }
                        goto LAB_1804b9bde;
                      }
                      if ((char *)*puVar7 == (char *)0x0) {
                        pcVar2 = (char *)0x0;
                        pcVar4 = unaff_R15;
                      }
                      else {
                        pcVar2 = (char *)puVar7[2];
                        pcVar4 = (char *)*puVar7;
                      }
                      if (pcVar2 == pcVar11 + -0x180a2e98f) {
                        pcVar2 = pcVar4 + (longlong)pcVar2;
                        if (pcVar2 <= pcVar4) goto LAB_1804b9ba0;
                        lVar5 = (longlong)&UNK_180a2e990 - (longlong)pcVar4;
                        while (*pcVar4 == pcVar4[lVar5]) {
                          pcVar4 = pcVar4 + 1;
                          if (pcVar2 <= pcVar4) goto LAB_1804b9ba0;
                        }
                      }
                      puVar7 = (undefined8 *)puVar7[0xb];
                    } while( true );
                  }
                  lVar5 = (longlong)&UNK_180a2e990 - (longlong)pcVar4;
                  while (*pcVar4 == pcVar4[lVar5]) {
                    pcVar4 = pcVar4 + 1;
                    if (pcVar2 <= pcVar4) goto LAB_1804b9b91;
                  }
                }
                puVar7 = (undefined8 *)puVar7[0xb];
              } while( true );
            }
            lVar5 = (longlong)&UNK_180a2e870 - (longlong)pcVar4;
            while (*pcVar4 == pcVar4[lVar5]) {
              pcVar4 = pcVar4 + 1;
              if (pcVar2 <= pcVar4) goto LAB_1804b9b12;
            }
          }
          puVar6 = (undefined8 *)puVar6[0xb];
        } while( true );
      }
      lVar5 = (longlong)&UNK_180a2e830 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1804b9957;
      }
    }
    puVar6 = (undefined8 *)puVar6[0xb];
  } while( true );
LAB_1804b97ce:
  unaff_RDI = (undefined8 *)unaff_RDI[0xb];
  if (unaff_RDI == (undefined8 *)0x0) goto LAB_1804b98f8;
  goto LAB_1804b9710;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804b971e(undefined8 param_1,undefined8 *param_2)
void FUN_1804b971e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  char *unaff_RBX;
  longlong lVar7;
  longlong unaff_RBP;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong unaff_RDI;
  longlong lVar10;
  longlong in_R10;
  char *pcVar11;
  int in_R11D;
  uint uVar12;
  longlong unaff_R14;
  char *unaff_R15;
  
code_r0x0001804b971e:
  lVar10 = 0;
  pcVar2 = unaff_R15;
LAB_1804b9723:
  if (lVar10 == in_R10) {
    pcVar11 = pcVar2 + lVar10;
    if (pcVar2 < pcVar11) {
      lVar10 = (longlong)unaff_RBX - (longlong)pcVar2;
      do {
        if (*pcVar2 != pcVar2[lVar10]) goto LAB_1804b9756;
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 < pcVar11);
    }
    in_R11D = in_R11D + 1;
    pcVar2 = unaff_RBX;
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    param_2 = (undefined8 *)param_2[0xb];
    in_R10 = (longlong)pcVar2 - (longlong)unaff_RBX;
  }
  else {
LAB_1804b9756:
    param_2 = (undefined8 *)param_2[0xb];
  }
  if (param_2 != (undefined8 *)0x0) {
    pcVar2 = (char *)*param_2;
    if (pcVar2 == (char *)0x0) goto code_r0x0001804b971e;
    lVar10 = param_2[2];
    goto LAB_1804b9723;
  }
  *(int *)(unaff_R14 + 0x5c4) = in_R11D;
  if (in_R11D != 0) {
    lVar10 = *(longlong *)(unaff_RDI + 0x30);
    iVar6 = 0;
    if (0 < in_R11D) {
      do {
        FUN_180631960(lVar10,&DAT_18098be48,unaff_R14 + 0x3c4 + (longlong)iVar6 * 0x10);
        lVar10 = *(longlong *)(lVar10 + 0x58);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_R14 + 0x5c4));
    }
  }
  pcVar2 = "skin_color_gradient_points";
  do {
    pcVar11 = pcVar2;
    pcVar2 = pcVar11 + 1;
  } while (*pcVar2 != '\0');
  puVar9 = *(undefined8 **)(unaff_RBP + 0x30);
  if (puVar9 != (undefined8 *)0x0) {
LAB_1804b9710:
    if ((char *)*puVar9 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_R15;
    }
    else {
      pcVar2 = (char *)puVar9[2];
      pcVar3 = (char *)*puVar9;
    }
    if (pcVar2 != pcVar11 + -0x180a2e8df) goto LAB_1804b97ce;
    pcVar2 = pcVar3 + (longlong)pcVar2;
    if (pcVar3 < pcVar2) {
      lVar10 = (longlong)&UNK_180a2e8e0 - (longlong)pcVar3;
      do {
        if (*pcVar3 != pcVar3[lVar10]) goto LAB_1804b97ce;
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 < pcVar2);
    }
    pcVar11 = "skin_color_gradient_point";
    do {
      pcVar3 = pcVar11;
      pcVar11 = pcVar3 + 1;
    } while (*pcVar11 != '\0');
    puVar5 = (undefined8 *)puVar9[6];
    do {
      if (puVar5 == (undefined8 *)0x0) {
        uVar8 = 0;
LAB_1804b985d:
        iVar6 = (int)uVar8;
        *(int *)(unaff_R14 + 0x5d0) = iVar6;
        lVar10 = puVar9[6];
        if (iVar6 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar6 << 4,
                                CONCAT71((int7)((ulonglong)pcVar2 >> 8),0x12));
        }
        *(undefined8 *)(unaff_R14 + 0x5c8) = uVar1;
        if (0 < iVar6) {
          lVar7 = 0;
          do {
            FUN_180631960(lVar10,&DAT_18098be48,*(longlong *)(unaff_R14 + 0x5c8) + lVar7);
            lVar10 = *(longlong *)(lVar10 + 0x58);
            lVar7 = lVar7 + 0x10;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        break;
      }
      if ((char *)*puVar5 == (char *)0x0) {
        pcVar11 = (char *)0x0;
        pcVar4 = unaff_R15;
      }
      else {
        pcVar11 = (char *)puVar5[2];
        pcVar4 = (char *)*puVar5;
      }
      if (pcVar11 == pcVar3 + -0x180a2e84f) {
        pcVar11 = pcVar11 + (longlong)pcVar4;
        if (pcVar4 < pcVar11) {
          pcVar2 = &UNK_180a2e850 + -(longlong)pcVar4;
          do {
            if (*pcVar4 != pcVar2[(longlong)pcVar4]) goto LAB_1804b984e;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 < pcVar11);
        }
        uVar8 = 0;
LAB_1804b9820:
        uVar8 = (ulonglong)((int)uVar8 + 1);
        pcVar11 = "skin_color_gradient_point";
        do {
          pcVar3 = pcVar11;
          pcVar11 = pcVar3 + 1;
        } while (*pcVar11 != '\0');
        puVar5 = (undefined8 *)puVar5[0xb];
        if (puVar5 != (undefined8 *)0x0) {
          do {
            if ((char *)*puVar5 == (char *)0x0) {
              pcVar11 = (char *)0x0;
              pcVar4 = unaff_R15;
            }
            else {
              pcVar11 = (char *)puVar5[2];
              pcVar4 = (char *)*puVar5;
            }
            if (pcVar11 == pcVar3 + -0x180a2e84f) {
              pcVar11 = pcVar11 + (longlong)pcVar4;
              if (pcVar11 <= pcVar4) goto LAB_1804b9820;
              pcVar2 = &UNK_180a2e850 + -(longlong)pcVar4;
              while (*pcVar4 == pcVar2[(longlong)pcVar4]) {
                pcVar4 = pcVar4 + 1;
                if (pcVar11 <= pcVar4) goto LAB_1804b9820;
              }
            }
            puVar5 = (undefined8 *)puVar5[0xb];
            if (puVar5 == (undefined8 *)0x0) break;
          } while( true );
        }
        goto LAB_1804b985d;
      }
LAB_1804b984e:
      puVar5 = (undefined8 *)puVar5[0xb];
    } while( true );
  }
LAB_1804b98f8:
  pcVar2 = "eye_color_gradient_points";
  do {
    pcVar11 = pcVar2;
    pcVar2 = pcVar11 + 1;
  } while (*pcVar2 != '\0');
  puVar9 = *(undefined8 **)(unaff_RBP + 0x30);
  while( true ) {
    if (puVar9 == (undefined8 *)0x0) goto LAB_1804b9a50;
    if ((char *)*puVar9 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_R15;
    }
    else {
      pcVar2 = (char *)puVar9[2];
      pcVar3 = (char *)*puVar9;
    }
    if (pcVar2 == pcVar11 + -0x180a2e82f) break;
LAB_1804b998e:
    puVar9 = (undefined8 *)puVar9[0xb];
  }
  pcVar2 = pcVar2 + (longlong)pcVar3;
  if (pcVar3 < pcVar2) {
    lVar10 = (longlong)&UNK_180a2e830 - (longlong)pcVar3;
    do {
      if (*pcVar3 != pcVar3[lVar10]) goto LAB_1804b998e;
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 < pcVar2);
  }
  pcVar2 = "eye_color_gradient_point";
  do {
    pcVar11 = pcVar2;
    pcVar2 = pcVar11 + 1;
  } while (*pcVar2 != '\0');
  puVar5 = (undefined8 *)puVar9[6];
  if (puVar5 != (undefined8 *)0x0) {
    while( true ) {
      if ((char *)*puVar5 == (char *)0x0) {
        pcVar2 = (char *)0x0;
        pcVar3 = unaff_R15;
      }
      else {
        pcVar2 = (char *)puVar5[2];
        pcVar3 = (char *)*puVar5;
      }
      if (pcVar2 == pcVar11 + -0x180a2e88f) break;
LAB_1804b9a05:
      puVar5 = (undefined8 *)puVar5[0xb];
      if (puVar5 == (undefined8 *)0x0) goto LAB_1804b9a12;
    }
    pcVar2 = pcVar3 + (longlong)pcVar2;
    if (pcVar3 < pcVar2) {
      lVar10 = (longlong)&UNK_180a2e890 - (longlong)pcVar3;
      do {
        if (*pcVar3 != pcVar3[lVar10]) goto LAB_1804b9a05;
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 < pcVar2);
    }
    uVar8 = 0;
LAB_1804b99d0:
    uVar12 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar12;
    pcVar2 = "eye_color_gradient_point";
    do {
      pcVar11 = pcVar2;
      pcVar2 = pcVar11 + 1;
    } while (*pcVar2 != '\0');
    puVar5 = (undefined8 *)puVar5[0xb];
    do {
      if (puVar5 == (undefined8 *)0x0) {
        if (1 < (int)uVar12) {
          *(uint *)(unaff_R14 + 0x7d4) = uVar12;
        }
        goto LAB_1804b9a15;
      }
      if ((char *)*puVar5 == (char *)0x0) {
        pcVar2 = (char *)0x0;
        pcVar3 = unaff_R15;
      }
      else {
        pcVar2 = (char *)puVar5[2];
        pcVar3 = (char *)*puVar5;
      }
      if (pcVar2 == pcVar11 + -0x180a2e88f) {
        pcVar2 = pcVar2 + (longlong)pcVar3;
        if (pcVar2 <= pcVar3) goto LAB_1804b99d0;
        lVar10 = (longlong)&UNK_180a2e890 - (longlong)pcVar3;
        while (*pcVar3 == pcVar3[lVar10]) {
          pcVar3 = pcVar3 + 1;
          if (pcVar2 <= pcVar3) goto LAB_1804b99d0;
        }
      }
      puVar5 = (undefined8 *)puVar5[0xb];
    } while( true );
  }
LAB_1804b9a12:
  uVar8 = 0;
LAB_1804b9a15:
  lVar10 = puVar9[6];
  if (0 < (int)uVar8) {
    lVar7 = unaff_R14 + 0x5d4;
    do {
      FUN_180631960(lVar10,&DAT_18098be48,lVar7);
      lVar10 = *(longlong *)(lVar10 + 0x58);
      lVar7 = lVar7 + 0x10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
LAB_1804b9a50:
  pcVar2 = "hair_color_gradient_points";
  do {
    pcVar11 = pcVar2;
    pcVar2 = pcVar11 + 1;
  } while (*pcVar2 != '\0');
  puVar9 = *(undefined8 **)(unaff_RBP + 0x30);
  while( true ) {
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
    if ((char *)*puVar9 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_R15;
    }
    else {
      pcVar2 = (char *)puVar9[2];
      pcVar3 = (char *)*puVar9;
    }
    if (pcVar2 == pcVar11 + -0x180a2e86f) break;
LAB_1804b9b4e:
    puVar9 = (undefined8 *)puVar9[0xb];
  }
  pcVar2 = pcVar2 + (longlong)pcVar3;
  if (pcVar3 < pcVar2) {
    lVar10 = (longlong)&UNK_180a2e870 - (longlong)pcVar3;
    do {
      if (*pcVar3 != pcVar3[lVar10]) goto LAB_1804b9b4e;
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 < pcVar2);
  }
  pcVar2 = "hair_color_gradient_point";
  do {
    pcVar11 = pcVar2;
    pcVar2 = pcVar11 + 1;
  } while (*pcVar2 != '\0');
  puVar5 = (undefined8 *)puVar9[6];
  while( true ) {
    if (puVar5 == (undefined8 *)0x0) {
      uVar12 = 0;
      goto LAB_1804b9bde;
    }
    if ((char *)*puVar5 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_R15;
    }
    else {
      pcVar2 = (char *)puVar5[2];
      pcVar3 = (char *)*puVar5;
    }
    if (pcVar2 == pcVar11 + -0x180a2e98f) break;
LAB_1804b9bce:
    puVar5 = (undefined8 *)puVar5[0xb];
  }
  pcVar2 = pcVar2 + (longlong)pcVar3;
  if (pcVar3 < pcVar2) {
    lVar10 = (longlong)&UNK_180a2e990 - (longlong)pcVar3;
    do {
      if (*pcVar3 != pcVar3[lVar10]) goto LAB_1804b9bce;
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 < pcVar2);
  }
  uVar12 = 0;
LAB_1804b9ba0:
  uVar12 = uVar12 + 1;
  pcVar2 = "hair_color_gradient_point";
  do {
    pcVar11 = pcVar2;
    pcVar2 = pcVar11 + 1;
  } while (*pcVar2 != '\0');
  puVar5 = (undefined8 *)puVar5[0xb];
  do {
    if (puVar5 == (undefined8 *)0x0) {
      if (1 < (int)uVar12) {
        *(uint *)(unaff_R14 + 0x9d8) = uVar12;
      }
LAB_1804b9bde:
      lVar10 = puVar9[6];
      if (0 < (int)uVar12) {
        lVar7 = unaff_R14 + 0x7d8;
        uVar8 = (ulonglong)uVar12;
        do {
          FUN_180631960(lVar10,&DAT_18098be48,lVar7);
          lVar10 = *(longlong *)(lVar10 + 0x58);
          lVar7 = lVar7 + 0x10;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      return;
    }
    if ((char *)*puVar5 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar3 = unaff_R15;
    }
    else {
      pcVar2 = (char *)puVar5[2];
      pcVar3 = (char *)*puVar5;
    }
    if (pcVar2 == pcVar11 + -0x180a2e98f) {
      pcVar2 = pcVar3 + (longlong)pcVar2;
      if (pcVar2 <= pcVar3) goto LAB_1804b9ba0;
      lVar10 = (longlong)&UNK_180a2e990 - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar10]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_1804b9ba0;
      }
    }
    puVar5 = (undefined8 *)puVar5[0xb];
  } while( true );
LAB_1804b97ce:
  puVar9 = (undefined8 *)puVar9[0xb];
  if (puVar9 == (undefined8 *)0x0) goto LAB_1804b98f8;
  goto LAB_1804b9710;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




