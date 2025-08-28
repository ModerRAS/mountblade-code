#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part085.c - 4 个函数

// 函数: void FUN_180718e92(void)
void FUN_180718e92(void)

{
  return;
}



uint FUN_180718ead(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint uVar2;
  byte unaff_DIL;
  int unaff_R13D;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  uint64_t uStack0000000000000028;
  float fStack0000000000000038;
  int iStack0000000000000040;
  uint64_t in_stack_00000118;
  int in_stack_00000130;
  
  iStack0000000000000040 = in_stack_00000130 >> (unaff_DIL & 0x1f);
  fStack0000000000000038 = unaff_XMM7_Da * unaff_XMM8_Da;
  uStack0000000000000028 = param_2;
  iVar1 = FUN_180718bd0();
  iStack0000000000000040 = in_stack_00000130;
  fStack0000000000000038 = unaff_XMM6_Da * unaff_XMM8_Da;
  uStack0000000000000028 = in_stack_00000118;
  uVar2 = FUN_180718bd0();
  return uVar2 | iVar1 << ((byte)(unaff_R13D >> 1) & 0x1f);
}



uint64_t FUN_180718f58(void)

{
  uint64_t uVar1;
  float *pfVar2;
  uint uVar3;
  uint *unaff_RBX;
  byte *unaff_RSI;
  uint uVar4;
  uint64_t unaff_RDI;
  uint uVar5;
  uint uVar6;
  int in_R9D;
  int64_t lVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t in_R11;
  byte unaff_R13B;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar10;
  int in_stack_00000110;
  int64_t in_stack_00000118;
  uint in_stack_00000130;
  
  in_R9D = in_R9D + -1;
  uVar4 = (uint)unaff_RDI;
  uVar5 = (int)(*unaff_RSI + 1) >> 1;
  uVar9 = uVar4;
  if ((int)(uint)unaff_RSI[(int)uVar5] < in_R9D) {
    uVar9 = uVar5;
  }
  if ((int)(uint)unaff_RSI[(int)uVar5] < in_R9D) {
    uVar5 = (uint)*unaff_RSI;
  }
  uVar3 = (int)(uVar5 + 1 + uVar9) >> 1;
  if ((int)(uint)unaff_RSI[(int)uVar3] < in_R9D) {
    uVar9 = uVar3;
    uVar3 = uVar5;
  }
  uVar5 = (int)(uVar3 + 1 + uVar9) >> 1;
  if ((int)(uint)unaff_RSI[(int)uVar5] < in_R9D) {
    uVar9 = uVar5;
    uVar5 = uVar3;
  }
  uVar3 = (int)(uVar5 + 1 + uVar9) >> 1;
  if ((int)(uint)unaff_RSI[(int)uVar3] < in_R9D) {
    uVar9 = uVar3;
    uVar3 = uVar5;
  }
  uVar5 = (int)(uVar3 + 1 + uVar9) >> 1;
  if ((int)(uint)unaff_RSI[(int)uVar5] < in_R9D) {
    uVar9 = uVar5;
    uVar5 = uVar3;
  }
  uVar6 = (int)(uVar5 + 1 + uVar9) >> 1;
  uVar3 = uVar6;
  if ((int)(uint)unaff_RSI[(int)uVar6] < in_R9D) {
    uVar3 = uVar5;
    uVar9 = uVar6;
  }
  if (uVar9 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)unaff_RSI[(int)uVar9];
  }
  if ((int)((uint)unaff_RSI[(int)uVar3] - in_R9D) < (int)(in_R9D - uVar5)) {
    uVar9 = uVar3;
  }
  lVar7 = (int64_t)(int)uVar9;
  if (uVar9 == 0) {
    uVar1 = unaff_RDI & 0xffffffff;
  }
  else {
    uVar1 = (uint64_t)(unaff_RSI[lVar7] + 1);
  }
  uVar5 = unaff_RBX[10] - (int)uVar1;
  unaff_RBX[10] = uVar5;
  if ((int)uVar5 < 0) {
    do {
      if (lVar7 < 1) break;
      uVar5 = uVar5 + (int)uVar1;
      uVar9 = uVar9 - 1;
      unaff_RBX[10] = uVar5;
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) {
        uVar1 = unaff_RDI & 0xffffffff;
      }
      else {
        uVar1 = (uint64_t)
                (*(byte *)(*(short *)(*(int64_t *)(in_R11 + 0x88) +
                                     (int64_t)
                                     (int)(*(int *)(in_R11 + 8) * in_stack_00000110 + unaff_RBX[4])
                                     * 2) + lVar7 + *(int64_t *)(in_R11 + 0x90)) + 1);
      }
      uVar5 = uVar5 - (int)uVar1;
      unaff_RBX[10] = uVar5;
    } while ((int)uVar5 < 0);
  }
  if (uVar9 == 0) {
    if (unaff_RBX[1] == uVar4) {
      uVar1 = unaff_RDI & 0xffffffff;
    }
    else {
      uVar5 = (1 << (unaff_R13B & 0x1f)) - 1;
      in_stack_00000130 = in_stack_00000130 & uVar5;
      if (in_stack_00000130 == 0) {
                    // WARNING: Subroutine does not return
        memset();
      }
      if (in_stack_00000118 == 0) {
        if (3 < unaff_R15) {
          lVar7 = (unaff_R15 - 4U >> 2) + 1;
          unaff_RDI = lVar7 * 4;
          pfVar2 = (float *)(unaff_R14 + 8);
          do {
            uVar9 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
            unaff_RBX[0xe] = uVar9;
            pfVar2[-2] = (float)((int)uVar9 >> 0x14);
            uVar9 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
            unaff_RBX[0xe] = uVar9;
            pfVar2[-1] = (float)((int)uVar9 >> 0x14);
            uVar9 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
            unaff_RBX[0xe] = uVar9;
            *pfVar2 = (float)((int)uVar9 >> 0x14);
            uVar9 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
            unaff_RBX[0xe] = uVar9;
            pfVar2[1] = (float)((int)uVar9 >> 0x14);
            lVar7 = lVar7 + -1;
            pfVar2 = pfVar2 + 4;
          } while (lVar7 != 0);
        }
        for (; in_stack_00000130 = uVar5, (int64_t)unaff_RDI < unaff_R15; unaff_RDI = unaff_RDI + 1
            ) {
          uVar9 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
          unaff_RBX[0xe] = uVar9;
          *(float *)(unaff_R14 + unaff_RDI * 4) = (float)((int)uVar9 >> 0x14);
        }
      }
      else {
        if (3 < unaff_R15) {
          lVar7 = in_stack_00000118 - unaff_R14;
          lVar8 = (unaff_R15 - 4U >> 2) + 1;
          pfVar2 = (float *)(unaff_R14 + 4);
          unaff_RDI = lVar8 * 4;
          do {
            fVar10 = 0.00390625;
            uVar5 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
            unaff_RBX[0xe] = uVar5;
            if ((uVar5 >> 0xf & 1) == 0) {
              fVar10 = -0.00390625;
            }
            pfVar2[-1] = fVar10 + *(float *)(lVar7 + -4 + (int64_t)pfVar2);
            fVar10 = 0.00390625;
            uVar5 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
            unaff_RBX[0xe] = uVar5;
            if ((uVar5 >> 0xf & 1) == 0) {
              fVar10 = -0.00390625;
            }
            *pfVar2 = fVar10 + *(float *)(lVar7 + (int64_t)pfVar2);
            fVar10 = 0.00390625;
            uVar5 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
            unaff_RBX[0xe] = uVar5;
            if ((uVar5 >> 0xf & 1) == 0) {
              fVar10 = -0.00390625;
            }
            pfVar2[1] = fVar10 + *(float *)(lVar7 + 4 + (int64_t)pfVar2);
            fVar10 = 0.00390625;
            uVar5 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
            unaff_RBX[0xe] = uVar5;
            if ((uVar5 >> 0xf & 1) == 0) {
              fVar10 = -0.00390625;
            }
            pfVar2[2] = fVar10 + *(float *)(lVar7 + 8 + (int64_t)pfVar2);
            pfVar2 = pfVar2 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if ((int64_t)unaff_RDI < unaff_R15) {
          pfVar2 = (float *)(unaff_R14 + unaff_RDI * 4);
          lVar7 = unaff_R15 - unaff_RDI;
          do {
            fVar10 = 0.00390625;
            uVar5 = unaff_RBX[0xe] * 0x19660d + 0x3c6ef35f;
            unaff_RBX[0xe] = uVar5;
            if ((uVar5 >> 0xf & 1) == 0) {
              fVar10 = -0.00390625;
            }
            *pfVar2 = fVar10 + *(float *)((int64_t)pfVar2 + (in_stack_00000118 - unaff_R14));
            pfVar2 = pfVar2 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      FUN_180721bd0();
      uVar1 = (uint64_t)in_stack_00000130;
    }
  }
  else if (*unaff_RBX == uVar4) {
    uVar1 = FUN_180721540();
  }
  else {
    uVar1 = FUN_1807213f0();
  }
  return uVar1;
}



int8_t
FUN_1807193b0(int64_t param_1,int64_t param_2,int *param_3,int param_4,int *param_5,uint *param_6,
             int param_7,uint param_8,int param_9,int param_10)

{
  int64_t lVar1;
  short sVar2;
  short *psVar3;
  int8_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  float *pfVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  uint uStack_78;
  uint uStack_74;
  int iStack_6c;
  int iStack_68;
  
  psVar3 = *(short **)(param_1 + 0x20);
  uVar5 = 0;
  uVar6 = (uint64_t)(int)param_8;
  uVar11 = 0;
  uVar15 = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  uVar4 = 0;
  if (8 < ((int)psVar3[uVar6] - (int)psVar3[uVar6 - 1]) * param_10) {
    iStack_6c = 0;
    iStack_68 = 0;
    do {
      iVar9 = 0;
      if (0 < (int)uVar6) {
        psVar8 = psVar3;
        do {
          sVar2 = *psVar8;
          psVar8 = psVar8 + 1;
          iVar12 = 0;
          iVar13 = 0;
          iVar10 = 0;
          uVar11 = ((int)*psVar8 - (int)sVar2) * param_10;
          lVar1 = param_2 + ((int64_t)(sVar2 * param_10) + (int64_t)iStack_68) * 4;
          if (8 < (int)uVar11) {
            uVar5 = (uVar11 - 4 >> 2) + 1;
            fVar17 = (float)(int)uVar11;
            uVar6 = (uint64_t)uVar5;
            pfVar7 = (float *)(lVar1 + 8);
            do {
              fVar16 = pfVar7[-2] * pfVar7[-2] * fVar17;
              iVar14 = iVar12 + 1;
              if (0.25 <= fVar16) {
                iVar14 = iVar12;
              }
              iVar12 = iVar13 + 1;
              if (0.0625 <= fVar16) {
                iVar12 = iVar13;
              }
              iVar13 = iVar10 + 1;
              if (0.015625 <= fVar16) {
                iVar13 = iVar10;
              }
              fVar16 = pfVar7[-1] * pfVar7[-1] * fVar17;
              iVar10 = iVar14 + 1;
              if (0.25 <= fVar16) {
                iVar10 = iVar14;
              }
              iVar14 = iVar12 + 1;
              if (0.0625 <= fVar16) {
                iVar14 = iVar12;
              }
              iVar12 = iVar13 + 1;
              if (0.015625 <= fVar16) {
                iVar12 = iVar13;
              }
              fVar16 = *pfVar7 * *pfVar7 * fVar17;
              iVar13 = iVar10 + 1;
              if (0.25 <= fVar16) {
                iVar13 = iVar10;
              }
              iVar10 = iVar14 + 1;
              if (0.0625 <= fVar16) {
                iVar10 = iVar14;
              }
              iVar14 = iVar12 + 1;
              if (0.015625 <= fVar16) {
                iVar14 = iVar12;
              }
              fVar16 = pfVar7[1] * pfVar7[1] * fVar17;
              iVar12 = iVar13 + 1;
              if (0.25 <= fVar16) {
                iVar12 = iVar13;
              }
              iVar13 = iVar10 + 1;
              if (0.0625 <= fVar16) {
                iVar13 = iVar10;
              }
              iVar10 = iVar14 + 1;
              if (0.015625 <= fVar16) {
                iVar10 = iVar14;
              }
              uVar6 = uVar6 - 1;
              pfVar7 = pfVar7 + 4;
            } while (uVar6 != 0);
            if ((int)(uVar5 * 4) < (int)uVar11) {
              pfVar7 = (float *)(lVar1 + (uint64_t)uVar5 * 0x10);
              uVar6 = (uint64_t)(uVar11 + uVar5 * -4);
              iVar14 = iVar13;
              do {
                fVar16 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                fVar16 = fVar16 * fVar16 * fVar17;
                iVar13 = iVar12 + 1;
                if (0.25 <= fVar16) {
                  iVar13 = iVar12;
                }
                iVar12 = iVar13;
                iVar13 = iVar14 + 1;
                if (0.0625 <= fVar16) {
                  iVar13 = iVar14;
                }
                iVar14 = iVar10 + 1;
                if (0.015625 <= fVar16) {
                  iVar14 = iVar10;
                }
                iVar10 = iVar14;
                uVar6 = uVar6 - 1;
                iVar14 = iVar13;
              } while (uVar6 != 0);
            }
            if (*(int *)(param_1 + 8) + -4 < iVar9) {
              uVar15 = uVar15 + (uint)((iVar13 + iVar12) * 0x20) / uVar11;
            }
            iVar14 = 0;
            if ((int)uVar11 <= iVar10 * 2) {
              iVar14 = 0x100;
            }
            iVar10 = 0;
            if ((int)uVar11 <= iVar13 * 2) {
              iVar10 = 0x100;
            }
            iVar13 = 0;
            if ((int)uVar11 <= iVar12 * 2) {
              iVar13 = 0x100;
            }
            uStack_74 = iVar10 + iVar14 + iVar13 + uStack_74;
            uStack_78 = uStack_78 + 1;
          }
          uVar6 = (uint64_t)param_8;
          iVar9 = iVar9 + 1;
          uVar11 = uStack_78;
          uVar5 = uStack_74;
        } while (iVar9 < (int)param_8);
      }
      iStack_6c = iStack_6c + 1;
      iStack_68 = iStack_68 + *(int *)(param_1 + 0x30) * param_10;
    } while (iStack_6c < param_9);
    uVar4 = 2;
    if (param_7 != 0) {
      if (uVar15 != 0) {
        uVar15 = uVar15 / (uint)((((int)uVar6 - *(int *)(param_1 + 8)) + 4) * param_9);
      }
      iVar9 = (int)(*param_5 + uVar15) >> 1;
      *param_5 = iVar9;
      if (*param_6 == 2) {
        iVar9 = iVar9 + 4;
      }
      else if (*param_6 == 0) {
        iVar9 = iVar9 + -4;
      }
      if (iVar9 < 0x17) {
        *param_6 = (uint)(0x12 < iVar9);
      }
      else {
        *param_6 = 2;
      }
    }
    iVar9 = (int)(uVar5 / uVar11 + *param_3) >> 1;
    *param_3 = iVar9;
    iVar9 = (iVar9 + 0x96) * 3 + param_4 * -0x80 >> 2;
    if (iVar9 < 0x50) {
      uVar4 = 3;
    }
    else if (0xff < iVar9) {
      uVar4 = iVar9 < 0x180;
    }
  }
  return uVar4;
}



int8_t FUN_18071943e(int param_1,int param_2,float param_3,float param_4)

{
  int64_t lVar1;
  short sVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int unaff_EBX;
  uint64_t uVar5;
  float *pfVar6;
  short *unaff_RBP;
  short *psVar7;
  int iVar8;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  int8_t uVar9;
  int in_R8D;
  int iVar10;
  uint in_R9D;
  int iVar11;
  uint in_R10D;
  int iVar12;
  uint uVar13;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint unaff_R13D;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar14;
  float fVar15;
  float in_XMM4_Da;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  int iStackX_8;
  int iStackX_c;
  int iStackX_10;
  short *psStackX_20;
  int64_t in_stack_00000080;
  int64_t in_stack_00000088;
  int *in_stack_00000090;
  int in_stack_00000098;
  int *in_stack_000000a0;
  uint *in_stack_000000a8;
  int in_stack_000000b0;
  int in_stack_000000b8;
  int in_stack_000000c0;
  int in_stack_000000c8;
  
  *(uint64_t *)(in_R11 + -0x28) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  iStackX_c = in_EAX;
  iStackX_10 = param_2;
  do {
    iVar8 = 0;
    psVar7 = unaff_RBP;
    if (0 < param_1) {
      in_R9D = unaff_retaddr;
      in_R10D = unaff_retaddr_00;
      do {
        sVar2 = *unaff_RBP;
        unaff_RBP = unaff_RBP + 1;
        iVar11 = 0;
        iVar4 = 0;
        iVar10 = 0;
        uVar13 = ((int)*unaff_RBP - (int)sVar2) * unaff_EBX;
        lVar1 = unaff_RDI + ((int64_t)(sVar2 * unaff_EBX) + (int64_t)iStackX_10) * 4;
        if (8 < (int)uVar13) {
          uVar3 = (uVar13 - 4 >> 2) + 1;
          fVar15 = (float)(int)uVar13;
          uVar5 = (uint64_t)uVar3;
          pfVar6 = (float *)(lVar1 + 8);
          do {
            fVar14 = pfVar6[-2] * pfVar6[-2] * fVar15;
            iVar12 = iVar11 + 1;
            if (param_3 <= fVar14) {
              iVar12 = iVar11;
            }
            iVar11 = iVar4 + 1;
            if (param_4 <= fVar14) {
              iVar11 = iVar4;
            }
            iVar4 = iVar10 + 1;
            if (in_XMM4_Da <= fVar14) {
              iVar4 = iVar10;
            }
            fVar14 = pfVar6[-1] * pfVar6[-1] * fVar15;
            iVar10 = iVar12 + 1;
            if (param_3 <= fVar14) {
              iVar10 = iVar12;
            }
            iVar12 = iVar11 + 1;
            if (param_4 <= fVar14) {
              iVar12 = iVar11;
            }
            iVar11 = iVar4 + 1;
            if (in_XMM4_Da <= fVar14) {
              iVar11 = iVar4;
            }
            fVar14 = *pfVar6 * *pfVar6 * fVar15;
            iVar4 = iVar10 + 1;
            if (param_3 <= fVar14) {
              iVar4 = iVar10;
            }
            iVar10 = iVar12 + 1;
            if (param_4 <= fVar14) {
              iVar10 = iVar12;
            }
            iVar12 = iVar11 + 1;
            if (in_XMM4_Da <= fVar14) {
              iVar12 = iVar11;
            }
            fVar14 = pfVar6[1] * pfVar6[1] * fVar15;
            iVar11 = iVar4 + 1;
            if (param_3 <= fVar14) {
              iVar11 = iVar4;
            }
            iVar4 = iVar10 + 1;
            if (param_4 <= fVar14) {
              iVar4 = iVar10;
            }
            iVar10 = iVar12 + 1;
            if (in_XMM4_Da <= fVar14) {
              iVar10 = iVar12;
            }
            uVar5 = uVar5 - 1;
            pfVar6 = pfVar6 + 4;
          } while (uVar5 != 0);
          if ((int)(uVar3 * 4) < (int)uVar13) {
            pfVar6 = (float *)(lVar1 + (uint64_t)uVar3 * 0x10);
            uVar5 = (uint64_t)(uVar13 + uVar3 * -4);
            iVar12 = iVar4;
            do {
              fVar14 = *pfVar6;
              pfVar6 = pfVar6 + 1;
              fVar14 = fVar14 * fVar14 * fVar15;
              iVar4 = iVar11 + 1;
              if (param_3 <= fVar14) {
                iVar4 = iVar11;
              }
              iVar11 = iVar4;
              iVar4 = iVar12 + 1;
              if (param_4 <= fVar14) {
                iVar4 = iVar12;
              }
              iVar12 = iVar10 + 1;
              if (in_XMM4_Da <= fVar14) {
                iVar12 = iVar10;
              }
              iVar10 = iVar12;
              uVar5 = uVar5 - 1;
              iVar12 = iVar4;
            } while (uVar5 != 0);
          }
          if (*(int *)(in_stack_00000080 + 8) + -4 < iVar8) {
            unaff_R13D = unaff_R13D + (uint)((iVar4 + iVar11) * 0x20) / uVar13;
          }
          iVar12 = 0;
          if ((int)uVar13 <= iVar10 * 2) {
            iVar12 = 0x100;
          }
          iVar10 = 0;
          if ((int)uVar13 <= iVar4 * 2) {
            iVar10 = 0x100;
          }
          iVar4 = 0;
          if ((int)uVar13 <= iVar11 * 2) {
            iVar4 = 0x100;
          }
          in_R10D = iVar10 + iVar12 + iVar4 + in_R10D;
          in_R9D = in_R9D + 1;
          unaff_RDI = in_stack_00000088;
          unaff_EBX = in_stack_000000c8;
        }
        iVar8 = iVar8 + 1;
        psVar7 = psStackX_20;
        param_1 = in_stack_000000b8;
        in_R8D = iStackX_8;
        unaff_retaddr = in_R9D;
        unaff_retaddr_00 = in_R10D;
      } while (iVar8 < in_stack_000000b8);
    }
    iStackX_c = iStackX_c + 1;
    iStackX_10 = iStackX_10 + in_R8D;
    unaff_RBP = psVar7;
  } while (iStackX_c < in_stack_000000c0);
  uVar9 = 2;
  if (in_stack_000000b0 != 0) {
    if (unaff_R13D != 0) {
      unaff_R13D = unaff_R13D /
                   (uint)(((param_1 - *(int *)(in_stack_00000080 + 8)) + 4) * in_stack_000000c0);
    }
    iVar8 = (int)(*in_stack_000000a0 + unaff_R13D) >> 1;
    *in_stack_000000a0 = iVar8;
    if (*in_stack_000000a8 == 2) {
      iVar8 = iVar8 + 4;
    }
    else if (*in_stack_000000a8 == 0) {
      iVar8 = iVar8 + -4;
    }
    if (iVar8 < 0x17) {
      *in_stack_000000a8 = (uint)(0x12 < iVar8);
    }
    else {
      *in_stack_000000a8 = 2;
    }
  }
  iVar8 = (int)(in_R10D / in_R9D + *in_stack_00000090) >> 1;
  *in_stack_00000090 = iVar8;
  iVar8 = (iVar8 + 0x96) * 3 + in_stack_00000098 * -0x80 >> 2;
  if (iVar8 < 0x50) {
    uVar9 = 3;
  }
  else if (0xff < iVar8) {
    uVar9 = iVar8 < 0x180;
  }
  return uVar9;
}



uint FUN_1807196d4(int param_1,uint64_t param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint in_R10D;
  int in_R11D;
  uint unaff_R13D;
  int unaff_R14D;
  int64_t in_stack_00000080;
  int *in_stack_00000090;
  int in_stack_00000098;
  int *in_stack_000000a0;
  uint *in_stack_000000a8;
  
  if (unaff_R13D != 0) {
    unaff_R13D = unaff_R13D / (uint)(((param_1 - *(int *)(in_stack_00000080 + 8)) + 4) * in_R11D);
  }
  iVar1 = (int)(*in_stack_000000a0 + unaff_R13D) >> 1;
  *in_stack_000000a0 = iVar1;
  if (*in_stack_000000a8 == param_3) {
    iVar1 = iVar1 + 4;
  }
  else if (*in_stack_000000a8 == 0) {
    iVar1 = iVar1 + -4;
  }
  if (iVar1 < 0x17) {
    *in_stack_000000a8 = (uint)(0x12 < iVar1);
  }
  else {
    *in_stack_000000a8 = param_3;
  }
  iVar1 = (int)(in_R10D / param_4 + *in_stack_00000090) >> 1;
  *in_stack_00000090 = iVar1;
  iVar1 = (iVar1 + 0x96) * 3 + in_stack_00000098 * -0x80 >> 2;
  if (iVar1 < 0x50) {
    param_3 = 3;
  }
  else if (unaff_R14D <= iVar1) {
    param_3 = (uint)(iVar1 < 0x180);
  }
  return param_3;
}





// 函数: void FUN_180719789(void)
void FUN_180719789(void)

{
  return;
}





// 函数: void FUN_1807197a0(int64_t param_1,int64_t param_2,float param_3,uint param_4)
void FUN_1807197a0(int64_t param_1,int64_t param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  uint uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint uVar17;
  int64_t lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float afStackX_18 [4];
  float afStack_48 [16];
  uint64_t uVar18;
  
  lVar16 = (int64_t)(int)param_4;
  afStackX_18[0] = 0.0;
  afStack_48[0] = 0.0;
  FUN_1807072c0(param_2,param_1,param_2,param_4,afStackX_18,afStack_48);
  fVar20 = param_3 * param_3 + afStack_48[0];
  fVar21 = afStackX_18[0] * param_3 + afStackX_18[0] * param_3;
  fVar22 = fVar20 - fVar21;
  fVar21 = fVar21 + fVar20;
  if ((0.0006 <= fVar21) && (0.0006 <= fVar22)) {
    uVar14 = 0;
    uVar17 = 0;
    fVar22 = 1.0 / SQRT(fVar22);
    fVar20 = 1.0 / SQRT(fVar21);
    if ((0 < (int)param_4) && (7 < param_4)) {
      uVar12 = param_4 & 0x80000007;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
      }
      lVar13 = param_1 - param_2;
      pfVar11 = (float *)(param_2 + 0x10);
      uVar18 = uVar14;
      do {
        fVar21 = pfVar11[-4];
        fVar23 = pfVar11[-3];
        fVar24 = pfVar11[-2];
        fVar2 = pfVar11[-1];
        uVar17 = (int)uVar18 + 8;
        uVar18 = (uint64_t)uVar17;
        uVar14 = uVar14 + 8;
        pfVar1 = (float *)(lVar13 + -0x10 + (int64_t)pfVar11);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        pfVar11[-4] = (fVar3 * param_3 + fVar21) * fVar20;
        pfVar11[-3] = (fVar4 * param_3 + fVar23) * fVar20;
        pfVar11[-2] = (fVar5 * param_3 + fVar24) * fVar20;
        pfVar11[-1] = (fVar6 * param_3 + fVar2) * fVar20;
        fVar7 = *pfVar11;
        fVar8 = pfVar11[1];
        fVar9 = pfVar11[2];
        fVar10 = pfVar11[3];
        pfVar1 = (float *)(lVar13 + -0x10 + (int64_t)pfVar11);
        *pfVar1 = (fVar3 * param_3 - fVar21) * fVar22;
        pfVar1[1] = (fVar4 * param_3 - fVar23) * fVar22;
        pfVar1[2] = (fVar5 * param_3 - fVar24) * fVar22;
        pfVar1[3] = (fVar6 * param_3 - fVar2) * fVar22;
        pfVar1 = (float *)(lVar13 + (int64_t)pfVar11);
        fVar21 = *pfVar1;
        fVar23 = pfVar1[1];
        fVar24 = pfVar1[2];
        fVar2 = pfVar1[3];
        *pfVar11 = (param_3 * fVar21 + fVar7) * fVar20;
        pfVar11[1] = (param_3 * fVar23 + fVar8) * fVar20;
        pfVar11[2] = (param_3 * fVar24 + fVar9) * fVar20;
        pfVar11[3] = (param_3 * fVar2 + fVar10) * fVar20;
        pfVar1 = (float *)(lVar13 + (int64_t)pfVar11);
        *pfVar1 = (param_3 * fVar21 - fVar7) * fVar22;
        pfVar1[1] = (param_3 * fVar23 - fVar8) * fVar22;
        pfVar1[2] = (param_3 * fVar24 - fVar9) * fVar22;
        pfVar1[3] = (param_3 * fVar2 - fVar10) * fVar22;
        pfVar11 = pfVar11 + 8;
      } while ((int64_t)uVar14 < (int64_t)(int)(param_4 - uVar12));
    }
    lVar13 = (int64_t)(int)uVar17;
    if (lVar13 < lVar16) {
      if (3 < lVar16 - lVar13) {
        pfVar11 = (float *)(param_2 + 4 + lVar13 * 4);
        lVar19 = param_1 - param_2;
        lVar15 = ((lVar16 - lVar13) - 4U >> 2) + 1;
        lVar13 = lVar13 + lVar15 * 4;
        do {
          fVar21 = pfVar11[-1];
          fVar23 = param_3 * *(float *)(lVar19 + -4 + (int64_t)pfVar11);
          fVar24 = param_3 * *(float *)(lVar19 + (int64_t)pfVar11);
          *(float *)(lVar19 + -4 + (int64_t)pfVar11) = (fVar23 - fVar21) * fVar22;
          pfVar11[-1] = (fVar21 + fVar23) * fVar20;
          fVar21 = *pfVar11;
          fVar23 = param_3 * *(float *)(lVar19 + 4 + (int64_t)pfVar11);
          *(float *)(lVar19 + (int64_t)pfVar11) = (fVar24 - fVar21) * fVar22;
          *pfVar11 = (fVar21 + fVar24) * fVar20;
          fVar21 = pfVar11[1];
          fVar24 = param_3 * *(float *)(lVar19 + 8 + (int64_t)pfVar11);
          *(float *)(lVar19 + 4 + (int64_t)pfVar11) = (fVar23 - fVar21) * fVar22;
          pfVar11[1] = (fVar21 + fVar23) * fVar20;
          fVar21 = pfVar11[2];
          *(float *)(lVar19 + 8 + (int64_t)pfVar11) = (fVar24 - fVar21) * fVar22;
          pfVar11[2] = (fVar21 + fVar24) * fVar20;
          pfVar11 = pfVar11 + 4;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (lVar13 < lVar16) {
        pfVar11 = (float *)(param_2 + lVar13 * 4);
        lVar16 = lVar16 - lVar13;
        do {
          fVar21 = *pfVar11;
          fVar23 = param_3 * *(float *)((param_1 - param_2) + (int64_t)pfVar11);
          *(float *)((param_1 - param_2) + (int64_t)pfVar11) = (fVar23 - fVar21) * fVar22;
          *pfVar11 = (fVar21 + fVar23) * fVar20;
          pfVar11 = pfVar11 + 1;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
    }
    return;
  }
                    // WARNING: Subroutine does not return
  memcpy(param_2,param_1,lVar16 * 4);
}





// 函数: void FUN_18071985a(float param_1,float param_2,int param_3,float param_4)
void FUN_18071985a(float param_1,float param_2,int param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  uint uVar13;
  int64_t lVar14;
  int64_t in_RDX;
  int64_t lVar15;
  int64_t unaff_RBX;
  uint uVar16;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar17;
  float fVar18;
  float fVar19;
  float in_XMM4_Da;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  
  param_1 = in_XMM4_Da / param_1;
  param_4 = param_4 / SQRT(param_2);
  uVar16 = (uint)unaff_RSI;
  if ((0 < (int)uVar16) && (7 < uVar16)) {
    uVar13 = uVar16 & 0x80000007;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
    }
    lVar14 = unaff_RBX - unaff_RDI;
    pfVar12 = (float *)(unaff_RDI + 0x10);
    do {
      fVar2 = pfVar12[-4];
      fVar18 = pfVar12[-3];
      fVar19 = pfVar12[-2];
      fVar3 = pfVar12[-1];
      param_3 = param_3 + 8;
      in_RDX = in_RDX + 8;
      pfVar1 = (float *)(lVar14 + -0x10 + (int64_t)pfVar12);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar12[-4] = (fVar4 * unaff_XMM8_Da + fVar2) * param_4;
      pfVar12[-3] = (fVar5 * unaff_XMM8_Db + fVar18) * param_4;
      pfVar12[-2] = (fVar6 * unaff_XMM8_Dc + fVar19) * param_4;
      pfVar12[-1] = (fVar7 * unaff_XMM8_Dd + fVar3) * param_4;
      fVar8 = *pfVar12;
      fVar9 = pfVar12[1];
      fVar10 = pfVar12[2];
      fVar11 = pfVar12[3];
      pfVar1 = (float *)(lVar14 + -0x10 + (int64_t)pfVar12);
      *pfVar1 = (fVar4 * unaff_XMM8_Da - fVar2) * param_1;
      pfVar1[1] = (fVar5 * unaff_XMM8_Db - fVar18) * param_1;
      pfVar1[2] = (fVar6 * unaff_XMM8_Dc - fVar19) * param_1;
      pfVar1[3] = (fVar7 * unaff_XMM8_Dd - fVar3) * param_1;
      pfVar1 = (float *)(lVar14 + (int64_t)pfVar12);
      fVar2 = *pfVar1;
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      fVar3 = pfVar1[3];
      *pfVar12 = (unaff_XMM8_Da * fVar2 + fVar8) * param_4;
      pfVar12[1] = (unaff_XMM8_Db * fVar18 + fVar9) * param_4;
      pfVar12[2] = (unaff_XMM8_Dc * fVar19 + fVar10) * param_4;
      pfVar12[3] = (unaff_XMM8_Dd * fVar3 + fVar11) * param_4;
      pfVar1 = (float *)(lVar14 + (int64_t)pfVar12);
      *pfVar1 = (unaff_XMM8_Da * fVar2 - fVar8) * param_1;
      pfVar1[1] = (unaff_XMM8_Db * fVar18 - fVar9) * param_1;
      pfVar1[2] = (unaff_XMM8_Dc * fVar19 - fVar10) * param_1;
      pfVar1[3] = (unaff_XMM8_Dd * fVar3 - fVar11) * param_1;
      pfVar12 = pfVar12 + 8;
    } while (in_RDX < (int)(uVar16 - uVar13));
  }
  lVar14 = (int64_t)param_3;
  if (lVar14 < unaff_RSI) {
    if (3 < unaff_RSI - lVar14) {
      pfVar12 = (float *)(unaff_RDI + 4 + lVar14 * 4);
      lVar17 = unaff_RBX - unaff_RDI;
      lVar15 = ((unaff_RSI - lVar14) - 4U >> 2) + 1;
      lVar14 = lVar14 + lVar15 * 4;
      do {
        fVar2 = pfVar12[-1];
        fVar18 = unaff_XMM6_Da * *(float *)(lVar17 + -4 + (int64_t)pfVar12);
        fVar19 = unaff_XMM6_Da * *(float *)(lVar17 + (int64_t)pfVar12);
        *(float *)(lVar17 + -4 + (int64_t)pfVar12) = (fVar18 - fVar2) * param_1;
        pfVar12[-1] = (fVar2 + fVar18) * param_4;
        fVar2 = *pfVar12;
        fVar18 = unaff_XMM6_Da * *(float *)(lVar17 + 4 + (int64_t)pfVar12);
        *(float *)(lVar17 + (int64_t)pfVar12) = (fVar19 - fVar2) * param_1;
        *pfVar12 = (fVar2 + fVar19) * param_4;
        fVar2 = pfVar12[1];
        fVar19 = unaff_XMM6_Da * *(float *)(lVar17 + 8 + (int64_t)pfVar12);
        *(float *)(lVar17 + 4 + (int64_t)pfVar12) = (fVar18 - fVar2) * param_1;
        pfVar12[1] = (fVar2 + fVar18) * param_4;
        fVar2 = pfVar12[2];
        *(float *)(lVar17 + 8 + (int64_t)pfVar12) = (fVar19 - fVar2) * param_1;
        pfVar12[2] = (fVar2 + fVar19) * param_4;
        pfVar12 = pfVar12 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (lVar14 < unaff_RSI) {
      pfVar12 = (float *)(unaff_RDI + lVar14 * 4);
      lVar14 = unaff_RSI - lVar14;
      do {
        fVar2 = *pfVar12;
        fVar18 = unaff_XMM6_Da * *(float *)((unaff_RBX - unaff_RDI) + (int64_t)pfVar12);
        *(float *)((unaff_RBX - unaff_RDI) + (int64_t)pfVar12) = (fVar18 - fVar2) * param_1;
        *pfVar12 = (fVar2 + fVar18) * param_4;
        pfVar12 = pfVar12 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}





