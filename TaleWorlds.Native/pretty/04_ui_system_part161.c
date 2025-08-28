#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part161.c - 2 个函数

// 函数: void FUN_18076161b(float param_1)
void FUN_18076161b(float param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint64_t *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint64_t uVar13;
  ulonglong uVar14;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char cVar15;
  longlong unaff_RDI;
  uint64_t uVar16;
  longlong lVar17;
  uint uVar18;
  int8_t uVar19;
  longlong *unaff_R12;
  longlong *plVar20;
  int32_t unaff_R13D;
  int32_t unaff_R15D;
  bool bVar21;
  int32_t uVar22;
  int32_t extraout_XMM0_Da;
  float unaff_XMM7_Da;
  ulonglong in_stack_00000020;
  char cStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  int iStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  uint64_t *in_stack_00000060;
  longlong in_stack_00000068;
  int32_t in_stack_00000078;
  
  if ((param_1 != 0.0) || (*(float *)(unaff_RBX + 0x1d8) != 0.0)) {
    uVar22 = *(int32_t *)(unaff_RBX + 0x1d8);
    uVar13 = *(uint64_t *)(unaff_RBX + 0xa8);
    *(longlong *)(unaff_RBP + 0x160) = unaff_RBP + 0x158;
    *(uint64_t *)(unaff_RBP + 0x168) = 0;
    *(longlong *)(unaff_RBP + 0x158) = unaff_RBP + 0x158;
    *(uint64_t *)(unaff_RBP + 0x180) = 0;
    *(longlong *)(unaff_RBP + 0x178) = unaff_RBP + 0x170;
    plVar20 = (longlong *)(unaff_RBP + -0x70);
    if (unaff_RDI == 0) {
      plVar20 = unaff_R12;
    }
    *(uint64_t *)(unaff_RBP + 400) = 0;
    *(int32_t *)(unaff_RBP + 0x188) = 0;
    *(uint64_t *)(unaff_RBP + 0x1a0) = 0;
    *(int32_t *)(unaff_RBP + 0x198) = 0;
    *(uint64_t *)(unaff_RBP + 0x1f0) = 0;
    *(int32_t *)(unaff_RBP + 0x1e8) = 0;
    *(uint64_t *)(unaff_RBP + 0x150) = 0;
    *(uint64_t *)(unaff_RBP + 0x1a8) = 0;
    *(uint64_t *)(unaff_RBP + 0x1b0) = 0;
    *(longlong *)(unaff_RBP + 0x170) = unaff_RBP + 0x170;
    func_0x000180763630(unaff_RBP + 0x150,uVar13,uVar22);
    fVar1 = *(float *)(unaff_RBX + 0x1cc);
    uVar13 = 0;
    fVar2 = *(float *)(unaff_RBX + 0x1d8);
    *(int32_t *)(unaff_RBP + 0x1d4) = 0x40;
    *(float *)(unaff_RBP + 0x1b8) = fVar1;
    if (fVar1 == fVar2) {
      *(int32_t *)(unaff_RBP + 0x1d4) = 0;
    }
    uVar16 = uVar13;
    if (*plVar20 != 0) {
      uVar16 = *(uint64_t *)(*plVar20 + 0x10);
    }
    if (unaff_RSI != 0) {
      uVar13 = *(uint64_t *)(unaff_RSI + 0x10);
    }
    in_stack_00000020 = CONCAT44((int)(in_stack_00000020 >> 0x20),unaff_R15D);
    FUN_1807636f0(unaff_RBP + 0x150,uVar13,uVar16,0,in_stack_00000020);
    FUN_18075f8e0(unaff_RBP + -0x70);
    param_1 = *(float *)(unaff_RBX + 0x1cc);
  }
  if ((((*(float *)(unaff_RBX + 0x1c8) != 0.0) || (*(float *)(unaff_RBX + 0x1d4) != 0.0)) ||
      (param_1 != 0.0)) || (cVar15 = '\x01', *(float *)(unaff_RBX + 0x1d8) != 0.0)) {
    cVar15 = cStack0000000000000040;
  }
  *(int32_t *)(unaff_RBX + 0x1d0) = *(int32_t *)(unaff_RBX + 0x1c4);
  *(float *)(unaff_RBX + 0x1d4) = *(float *)(unaff_RBX + 0x1c8);
  *(float *)(unaff_RBX + 0x1d8) = param_1;
  FUN_18075f8e0(unaff_RBX + 0x158);
  uVar22 = FUN_18075f8e0();
  if ((*unaff_R12 == 0) || (iVar4 = FUN_18075f8e0(), uVar22 = extraout_XMM0_Da, iVar4 == 0)) {
    unaff_R12[1] = in_stack_00000068;
    *(int32_t *)(unaff_R12 + 3) = in_stack_00000078;
    in_stack_00000060 = (uint64_t *)0x0;
    in_stack_00000068 = 0;
    *unaff_R12 = unaff_RSI;
    *(int32_t *)(unaff_R12 + 2) = unaff_R15D;
    *(int32_t *)((longlong)unaff_R12 + 0x14) = unaff_R13D;
  }
  LOCK();
  *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) | 0x10000;
  UNLOCK();
  *(int32_t *)(unaff_RBX + 0x1c0) = *(int32_t *)(unaff_RBX + 0x148);
  if (in_stack_00000060 != (uint64_t *)0x0) {
    iVar4 = *(int *)(in_stack_00000060 + 1);
    if (0 < iVar4) {
      iVar4 = iVar4 + -1;
      *(int *)(in_stack_00000060 + 1) = iVar4;
    }
    if (iVar4 == 0) {
      if (in_stack_00000060[3] != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(in_stack_00000068 + 0x10bd0,in_stack_00000060[3],&DAT_18098bc73,0,1);
      }
      *in_stack_00000060 = *(uint64_t *)(in_stack_00000068 + 0x107a8);
      *(uint64_t **)(in_stack_00000068 + 0x107a8) = in_stack_00000060;
    }
  }
  uVar14 = 0;
  puVar10 = *(uint64_t **)(unaff_RBP + -0x70);
  if (puVar10 != (uint64_t *)0x0) {
    iVar4 = *(int *)(puVar10 + 1);
    if (0 < iVar4) {
      iVar4 = iVar4 + -1;
      *(int *)(puVar10 + 1) = iVar4;
    }
    if (iVar4 == 0) {
      lVar9 = *(longlong *)(unaff_RBP + -0x68);
      if (puVar10[3] != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(lVar9 + 0x10bd0,puVar10[3],&DAT_18098bc73,0,1);
      }
      *puVar10 = *(uint64_t *)(lVar9 + 0x107a8);
      *(uint64_t **)(lVar9 + 0x107a8) = puVar10;
    }
  }
  if ((cVar15 != '\0') &&
     (puVar10 = *(uint64_t **)(unaff_RBX + 0x138), puVar10 != (uint64_t *)0x0)) {
    if (0 < *(int *)(puVar10 + 1)) {
      *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + -1;
      puVar10 = *(uint64_t **)(unaff_RBX + 0x138);
    }
    if (*(int *)(puVar10 + 1) == 0) {
      if (puVar10[3] != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(longlong *)(unaff_RBX + 0x140) + 0x10bd0,puVar10[3],&DAT_18098bc73,0,1);
      }
      *puVar10 = *(uint64_t *)(*(longlong *)(unaff_RBX + 0x140) + 0x107a8);
      *(uint64_t *)(*(longlong *)(unaff_RBX + 0x140) + 0x107a8) =
           *(uint64_t *)(unaff_RBX + 0x138);
    }
    *(uint64_t *)(unaff_RBX + 0x138) = 0;
    *(uint64_t *)(unaff_RBX + 0x148) = 0;
    *(int32_t *)(unaff_RBX + 0x150) = 0xffffffff;
  }
  lVar9 = *(longlong *)(unaff_RBX + 0x210);
  if (lVar9 != 0) {
    lVar3 = *(longlong *)(unaff_RBX + 0xa8);
    bVar21 = lVar3 != 0;
    if (bVar21) {
      uVar22 = func_0x000180743c20(lVar3,7);
      lVar9 = *(longlong *)(unaff_RBX + 0x210);
    }
    if ((lVar9 == 0) || (in_stack_00000020 = lVar9 + 0x214, *(char *)(lVar9 + 0x426) == '\0')) {
      in_stack_00000020 = uVar14;
    }
    if (*(longlong *)(unaff_RBX + 0x138) != 0) {
      uVar14 = *(ulonglong *)(*(longlong *)(unaff_RBX + 0x138) + 0x10);
    }
    iVar4 = FUN_180762e40(uVar22,uVar14,uStack0000000000000048,*(int32_t *)(unaff_RBX + 0x148),
                          in_stack_00000020);
    if (iVar4 != 0) {
      if ((bVar21) && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar3,7);
      }
      goto LAB_180762032;
    }
    if ((bVar21) && (lVar3 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar3,7);
    }
  }
  if (*(longlong *)(unaff_RBX + 0x138) == 0) {
    LOCK();
    *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) | 0x4000;
    UNLOCK();
  }
  else {
    LOCK();
    *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) & 0xffffbfff;
    UNLOCK();
  }
  if (*(short *)(unaff_RBX + 0x1aa) != 0) {
    plVar20 = *(longlong **)(unaff_RBX + 400);
    if (plVar20 != (longlong *)(unaff_RBX + 400)) {
      do {
        lVar9 = *(longlong *)((longlong)plVar20 + 0x10);
        lVar3 = *(longlong *)(lVar9 + 0x60);
        if ((*(short *)(lVar3 + 0x5a) != 0) || ((*(byte *)(lVar9 + 0x7c) & 1) != 0)) {
          iVar4 = (int)*(short *)(lVar3 + 0x1b0);
          uVar5 = *(uint *)(lVar9 + 0x7c) & 1;
          plVar20 = (longlong *)(lVar3 + 0x138 + (ulonglong)uVar5 * 0x20);
          if (uVar5 == 0) {
            iVar4 = *(short *)(lVar3 + 0x1a8) - iVar4;
          }
          if (*(ushort *)(lVar3 + 0x118) == 0) {
            if (*(longlong *)(lVar3 + 0x138) == 0) {
              if (iVar4 < 2) {
                if (*(longlong *)(lVar9 + 0x40) == 0) {
                  uVar5 = *(uint *)(*(longlong *)(lVar9 + 0x58) + 0x148);
                  if (uVar5 != 0) {
                    iVar4 = *(int *)(*(longlong *)(lVar9 + 0x58) + 0x14c);
                    goto LAB_180761d5c;
                  }
                }
                else {
                  uVar5 = (uint)*(short *)(lVar9 + 0x3a);
                  iVar4 = 0;
LAB_180761d5c:
                  if (uVar5 != 0) goto LAB_180761db7;
                }
                uVar5 = *(uint *)(lVar3 + 0x1c0);
                if (uVar5 == 0) {
                  iVar4 = 2;
                  uVar5 = 1;
                }
                else {
                  iVar4 = 0;
                }
              }
              else {
                iVar4 = iStack000000000000004c;
                if (iStack000000000000004c == 0) {
                  iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa8) + 0x1193c);
                }
                if (iVar4 == 1) {
                  uVar5 = *(uint *)(*(longlong *)(lVar3 + 0xa8) + 0x6d4);
                }
                else {
                  uVar5 = func_0x0001807462a0(iVar4);
                }
              }
            }
            else {
              uVar5 = *(uint *)(lVar3 + 0x148);
              iVar4 = *(int *)(lVar3 + 0x14c);
            }
          }
          else {
            iVar4 = *(int *)(lVar3 + 0xc4);
            uVar5 = (uint)*(ushort *)(lVar3 + 0x118);
          }
LAB_180761db7:
          if ((*(longlong *)(unaff_RBX + 0x138) == 0) || (uStack0000000000000044 == 0)) {
LAB_180761fe9:
            if (*(int *)(lVar9 + 0x6c) != 0) {
              func_0x000180765bd0(lVar9);
            }
          }
          else {
            if ((*plVar20 == 0) && (*(longlong *)(lVar9 + 0x40) == 0)) {
              if ((((*(float *)(lVar9 + 0x80) == *(float *)(lVar9 + 0x68)) &&
                   (*(float *)(lVar9 + 0x80) == unaff_XMM7_Da)) &&
                  (*(float *)(lVar9 + 0x68) == unaff_XMM7_Da)) && (*(short *)(lVar3 + 0x1a8) < 2)) {
                uVar18 = *(uint *)(unaff_RBX + 0x148);
                iVar6 = *(int *)(unaff_RBX + 0x14c);
                if ((uVar18 != uVar5) || (iVar6 != iVar4)) {
                  if ((iVar6 == 0) && (iVar6 = iStack000000000000004c, 0 < (int)uVar18)) {
                    iVar6 = func_0x000180746b50(uVar18);
                  }
                  uVar7 = func_0x0001807462a0(iVar6);
                  if (uVar7 != 0) {
                    uVar18 = uVar7;
                  }
                  iStack0000000000000050 = iVar4;
                  if (iVar4 == 0) {
                    if ((int)uVar5 < 1) {
                      iStack0000000000000050 = iStack000000000000004c;
                    }
                    else {
                      iStack0000000000000050 = func_0x000180746b50(uVar5);
                    }
                  }
                  uVar8 = func_0x0001807462a0(iStack0000000000000050);
                  uVar7 = uVar5;
                  if (uVar8 != 0) {
                    uVar7 = uVar8;
                  }
                  if ((uVar18 != uVar7) || (iVar6 != iStack0000000000000050)) goto LAB_180761ebf;
                }
                if (uStack0000000000000044 != 0) {
                  FUN_18075d580(unaff_RBX + 0x138,plVar20);
                }
                goto LAB_180761fe9;
              }
            }
LAB_180761ebf:
            lVar11 = *plVar20;
            uVar18 = *(uint *)(lVar3 + 100) >> 0xf & 1;
            if (lVar11 == 0) {
              in_stack_00000020 = in_stack_00000020 & 0xffffffffffffff00;
              iVar6 = FUN_18075a100(plVar20,*(uint64_t *)(unaff_RBX + 0xa8),uVar5,0,
                                    in_stack_00000020);
              if (iVar6 != 0) goto LAB_180762032;
              lVar11 = *plVar20;
              uVar18 = 1;
              *(int *)((longlong)plVar20 + 0x14) = iVar4;
            }
            if ((uVar18 != 0) &&
               (((iStack0000000000000054 != 0 || (uStack0000000000000044 < uStack0000000000000048))
                || ((*(longlong *)(lVar9 + 0x40) != 0 &&
                    ((int)*(short *)(lVar9 + 0x3a) != (int)plVar20[2])))))) {
              if (lVar11 != 0) {
                lVar11 = *(longlong *)(lVar11 + 0x10);
              }
                    // WARNING: Subroutine does not return
              memset(lVar11,0,(ulonglong)(uStack0000000000000048 * (int)plVar20[2]) << 2);
            }
            lVar12 = 0;
            if ((*(int *)((longlong)plVar20 + 0x14) == 1) || (*(int *)(unaff_RBX + 0x14c) == 1)) {
              uVar19 = 1;
            }
            else {
              uVar19 = 0;
            }
            lVar17 = lVar12;
            if (*(longlong *)(unaff_RBX + 0x138) != 0) {
              lVar17 = *(longlong *)(*(longlong *)(unaff_RBX + 0x138) + 0x10);
            }
            if (lVar11 != 0) {
              lVar12 = *(longlong *)(lVar11 + 0x10);
            }
            in_stack_00000020 = CONCAT44((int)(in_stack_00000020 >> 0x20),(int)plVar20[2]);
            FUN_1807636f0(lVar9,lVar12 + (ulonglong)(uint)((int)plVar20[2] * iStack0000000000000054)
                                         * 4,
                          lVar17 + (ulonglong)
                                   (uint)(*(int *)(unaff_RBX + 0x148) * iStack0000000000000054) * 4,
                          uVar19,in_stack_00000020);
          }
        }
        LOCK();
        *(uint *)(lVar3 + 100) = *(uint *)(lVar3 + 100) & 0xffff7fff;
        UNLOCK();
        plVar20 = *(longlong **)(lVar9 + 0x20);
      } while (plVar20 != (longlong *)(unaff_RBX + 400));
    }
    FUN_18075f8e0(unaff_RBX + 0x138);
  }
  LOCK();
  *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) & 0xfffeffff;
  UNLOCK();
  *(int32_t *)(unaff_RBX + 0x58) = 0;
  LOCK();
  *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) & 0xffc7ffff;
  UNLOCK();
LAB_180762032:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x400) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1807617cf(void)
void FUN_1807617cf(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  char unaff_DIL;
  longlong lVar12;
  uint uVar13;
  int8_t uVar14;
  uint64_t *unaff_R12;
  longlong *plVar15;
  int32_t unaff_R13D;
  int32_t unaff_R15D;
  bool bVar16;
  int32_t extraout_XMM0_Da;
  int32_t uVar17;
  float unaff_XMM7_Da;
  ulonglong in_stack_00000020;
  uint64_t in_stack_00000040;
  uint uStack0000000000000048;
  int iStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  uint64_t *in_stack_00000060;
  longlong in_stack_00000068;
  int32_t in_stack_00000078;
  
  iVar2 = FUN_18075f8e0();
  if (iVar2 == 0) {
    unaff_R12[1] = in_stack_00000068;
    *(int32_t *)(unaff_R12 + 3) = in_stack_00000078;
    in_stack_00000060 = (uint64_t *)0x0;
    in_stack_00000068 = 0;
    *unaff_R12 = unaff_RSI;
    *(int32_t *)(unaff_R12 + 2) = unaff_R15D;
    *(int32_t *)((longlong)unaff_R12 + 0x14) = unaff_R13D;
  }
  LOCK();
  *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) | 0x10000;
  UNLOCK();
  *(int32_t *)(unaff_RBX + 0x1c0) = *(int32_t *)(unaff_RBX + 0x148);
  if (in_stack_00000060 != (uint64_t *)0x0) {
    iVar2 = *(int *)(in_stack_00000060 + 1);
    if (0 < iVar2) {
      iVar2 = iVar2 + -1;
      *(int *)(in_stack_00000060 + 1) = iVar2;
    }
    if (iVar2 == 0) {
      if (in_stack_00000060[3] != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(in_stack_00000068 + 0x10bd0,in_stack_00000060[3],&DAT_18098bc73,0,1);
      }
      *in_stack_00000060 = *(uint64_t *)(in_stack_00000068 + 0x107a8);
      *(uint64_t **)(in_stack_00000068 + 0x107a8) = in_stack_00000060;
    }
  }
  uVar11 = 0;
  puVar8 = *(uint64_t **)(unaff_RBP + -0x70);
  if (puVar8 != (uint64_t *)0x0) {
    iVar2 = *(int *)(puVar8 + 1);
    if (0 < iVar2) {
      iVar2 = iVar2 + -1;
      *(int *)(puVar8 + 1) = iVar2;
    }
    if (iVar2 == 0) {
      lVar7 = *(longlong *)(unaff_RBP + -0x68);
      if (puVar8[3] != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(lVar7 + 0x10bd0,puVar8[3],&DAT_18098bc73,0,1);
      }
      *puVar8 = *(uint64_t *)(lVar7 + 0x107a8);
      *(uint64_t **)(lVar7 + 0x107a8) = puVar8;
    }
  }
  if ((unaff_DIL != '\0') &&
     (puVar8 = *(uint64_t **)(unaff_RBX + 0x138), puVar8 != (uint64_t *)0x0)) {
    if (0 < *(int *)(puVar8 + 1)) {
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + -1;
      puVar8 = *(uint64_t **)(unaff_RBX + 0x138);
    }
    if (*(int *)(puVar8 + 1) == 0) {
      if (puVar8[3] != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(longlong *)(unaff_RBX + 0x140) + 0x10bd0,puVar8[3],&DAT_18098bc73,0,1);
      }
      *puVar8 = *(uint64_t *)(*(longlong *)(unaff_RBX + 0x140) + 0x107a8);
      *(uint64_t *)(*(longlong *)(unaff_RBX + 0x140) + 0x107a8) =
           *(uint64_t *)(unaff_RBX + 0x138);
    }
    *(uint64_t *)(unaff_RBX + 0x138) = 0;
    *(uint64_t *)(unaff_RBX + 0x148) = 0;
    *(int32_t *)(unaff_RBX + 0x150) = 0xffffffff;
  }
  lVar7 = *(longlong *)(unaff_RBX + 0x210);
  if (lVar7 != 0) {
    lVar1 = *(longlong *)(unaff_RBX + 0xa8);
    bVar16 = lVar1 != 0;
    uVar17 = extraout_XMM0_Da;
    if (bVar16) {
      uVar17 = func_0x000180743c20(lVar1,7);
      lVar7 = *(longlong *)(unaff_RBX + 0x210);
    }
    if ((lVar7 == 0) || (in_stack_00000020 = lVar7 + 0x214, *(char *)(lVar7 + 0x426) == '\0')) {
      in_stack_00000020 = uVar11;
    }
    if (*(longlong *)(unaff_RBX + 0x138) != 0) {
      uVar11 = *(ulonglong *)(*(longlong *)(unaff_RBX + 0x138) + 0x10);
    }
    iVar2 = FUN_180762e40(uVar17,uVar11,uStack0000000000000048,*(int32_t *)(unaff_RBX + 0x148),
                          in_stack_00000020);
    if (iVar2 != 0) {
      if ((bVar16) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar1,7);
      }
      goto LAB_180762032;
    }
    if ((bVar16) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar1,7);
    }
  }
  if (*(longlong *)(unaff_RBX + 0x138) == 0) {
    LOCK();
    *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) | 0x4000;
    UNLOCK();
  }
  else {
    LOCK();
    *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) & 0xffffbfff;
    UNLOCK();
  }
  if (*(short *)(unaff_RBX + 0x1aa) != 0) {
    plVar15 = *(longlong **)(unaff_RBX + 400);
    if (plVar15 != (longlong *)(unaff_RBX + 400)) {
      do {
        lVar7 = *(longlong *)((longlong)plVar15 + 0x10);
        lVar1 = *(longlong *)(lVar7 + 0x60);
        if ((*(short *)(lVar1 + 0x5a) != 0) || ((*(byte *)(lVar7 + 0x7c) & 1) != 0)) {
          iVar2 = (int)*(short *)(lVar1 + 0x1b0);
          uVar3 = *(uint *)(lVar7 + 0x7c) & 1;
          plVar15 = (longlong *)(lVar1 + 0x138 + (ulonglong)uVar3 * 0x20);
          if (uVar3 == 0) {
            iVar2 = *(short *)(lVar1 + 0x1a8) - iVar2;
          }
          if (*(ushort *)(lVar1 + 0x118) == 0) {
            if (*(longlong *)(lVar1 + 0x138) == 0) {
              if (iVar2 < 2) {
                if (*(longlong *)(lVar7 + 0x40) == 0) {
                  uVar3 = *(uint *)(*(longlong *)(lVar7 + 0x58) + 0x148);
                  if (uVar3 != 0) {
                    iVar2 = *(int *)(*(longlong *)(lVar7 + 0x58) + 0x14c);
                    goto LAB_180761d5c;
                  }
                }
                else {
                  uVar3 = (uint)*(short *)(lVar7 + 0x3a);
                  iVar2 = 0;
LAB_180761d5c:
                  if (uVar3 != 0) goto LAB_180761db7;
                }
                uVar3 = *(uint *)(lVar1 + 0x1c0);
                if (uVar3 == 0) {
                  iVar2 = 2;
                  uVar3 = 1;
                }
                else {
                  iVar2 = 0;
                }
              }
              else {
                iVar2 = iStack000000000000004c;
                if (iStack000000000000004c == 0) {
                  iVar2 = *(int *)(*(longlong *)(lVar1 + 0xa8) + 0x1193c);
                }
                if (iVar2 == 1) {
                  uVar3 = *(uint *)(*(longlong *)(lVar1 + 0xa8) + 0x6d4);
                }
                else {
                  uVar3 = func_0x0001807462a0(iVar2);
                }
              }
            }
            else {
              uVar3 = *(uint *)(lVar1 + 0x148);
              iVar2 = *(int *)(lVar1 + 0x14c);
            }
          }
          else {
            iVar2 = *(int *)(lVar1 + 0xc4);
            uVar3 = (uint)*(ushort *)(lVar1 + 0x118);
          }
LAB_180761db7:
          if ((*(longlong *)(unaff_RBX + 0x138) == 0) || (in_stack_00000040._4_4_ == 0)) {
LAB_180761fe9:
            if (*(int *)(lVar7 + 0x6c) != 0) {
              func_0x000180765bd0(lVar7);
            }
          }
          else {
            if ((*plVar15 == 0) && (*(longlong *)(lVar7 + 0x40) == 0)) {
              if ((((*(float *)(lVar7 + 0x80) == *(float *)(lVar7 + 0x68)) &&
                   (*(float *)(lVar7 + 0x80) == unaff_XMM7_Da)) &&
                  (*(float *)(lVar7 + 0x68) == unaff_XMM7_Da)) && (*(short *)(lVar1 + 0x1a8) < 2)) {
                uVar13 = *(uint *)(unaff_RBX + 0x148);
                iVar4 = *(int *)(unaff_RBX + 0x14c);
                if ((uVar13 != uVar3) || (iVar4 != iVar2)) {
                  if ((iVar4 == 0) && (iVar4 = iStack000000000000004c, 0 < (int)uVar13)) {
                    iVar4 = func_0x000180746b50(uVar13);
                  }
                  uVar5 = func_0x0001807462a0(iVar4);
                  if (uVar5 != 0) {
                    uVar13 = uVar5;
                  }
                  iStack0000000000000050 = iVar2;
                  if (iVar2 == 0) {
                    if ((int)uVar3 < 1) {
                      iStack0000000000000050 = iStack000000000000004c;
                    }
                    else {
                      iStack0000000000000050 = func_0x000180746b50(uVar3);
                    }
                  }
                  uVar6 = func_0x0001807462a0(iStack0000000000000050);
                  uVar5 = uVar3;
                  if (uVar6 != 0) {
                    uVar5 = uVar6;
                  }
                  if ((uVar13 != uVar5) || (iVar4 != iStack0000000000000050)) goto LAB_180761ebf;
                }
                if (in_stack_00000040._4_4_ != 0) {
                  FUN_18075d580(unaff_RBX + 0x138,plVar15);
                }
                goto LAB_180761fe9;
              }
            }
LAB_180761ebf:
            lVar9 = *plVar15;
            uVar13 = *(uint *)(lVar1 + 100) >> 0xf & 1;
            if (lVar9 == 0) {
              in_stack_00000020 = in_stack_00000020 & 0xffffffffffffff00;
              iVar4 = FUN_18075a100(plVar15,*(uint64_t *)(unaff_RBX + 0xa8),uVar3,0,
                                    in_stack_00000020);
              if (iVar4 != 0) goto LAB_180762032;
              lVar9 = *plVar15;
              uVar13 = 1;
              *(int *)((longlong)plVar15 + 0x14) = iVar2;
            }
            if ((uVar13 != 0) &&
               (((iStack0000000000000054 != 0 || (in_stack_00000040._4_4_ < uStack0000000000000048))
                || ((*(longlong *)(lVar7 + 0x40) != 0 &&
                    ((int)*(short *)(lVar7 + 0x3a) != (int)plVar15[2])))))) {
              if (lVar9 != 0) {
                lVar9 = *(longlong *)(lVar9 + 0x10);
              }
                    // WARNING: Subroutine does not return
              memset(lVar9,0,(ulonglong)(uStack0000000000000048 * (int)plVar15[2]) << 2);
            }
            lVar10 = 0;
            if ((*(int *)((longlong)plVar15 + 0x14) == 1) || (*(int *)(unaff_RBX + 0x14c) == 1)) {
              uVar14 = 1;
            }
            else {
              uVar14 = 0;
            }
            lVar12 = lVar10;
            if (*(longlong *)(unaff_RBX + 0x138) != 0) {
              lVar12 = *(longlong *)(*(longlong *)(unaff_RBX + 0x138) + 0x10);
            }
            if (lVar9 != 0) {
              lVar10 = *(longlong *)(lVar9 + 0x10);
            }
            in_stack_00000020 = CONCAT44((int)(in_stack_00000020 >> 0x20),(int)plVar15[2]);
            FUN_1807636f0(lVar7,lVar10 + (ulonglong)(uint)((int)plVar15[2] * iStack0000000000000054)
                                         * 4,
                          lVar12 + (ulonglong)
                                   (uint)(*(int *)(unaff_RBX + 0x148) * iStack0000000000000054) * 4,
                          uVar14,in_stack_00000020);
          }
        }
        LOCK();
        *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & 0xffff7fff;
        UNLOCK();
        plVar15 = *(longlong **)(lVar7 + 0x20);
      } while (plVar15 != (longlong *)(unaff_RBX + 400));
    }
    FUN_18075f8e0(unaff_RBX + 0x138);
  }
  LOCK();
  *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) & 0xfffeffff;
  UNLOCK();
  *(int32_t *)(unaff_RBX + 0x58) = 0;
  LOCK();
  *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) & 0xffc7ffff;
  UNLOCK();
LAB_180762032:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x400) ^ (ulonglong)&stack0x00000000);
}





