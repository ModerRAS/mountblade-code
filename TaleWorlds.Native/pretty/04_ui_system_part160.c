#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part160.c - 1 个函数

// 函数: void FUN_180760e8e(int32_t param_1)
void FUN_180760e8e(int32_t param_1)

{
  int32_t uVar1;
  float fVar2;
  code *pcVar3;
  uint64_t *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint64_t uVar12;
  longlong lVar13;
  uint64_t *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint64_t uVar17;
  longlong unaff_RBX;
  longlong *unaff_RBP;
  uint64_t *puVar18;
  char unaff_DIL;
  longlong lVar19;
  uint uVar20;
  uint unaff_R12D;
  longlong *plVar21;
  longlong unaff_R13;
  longlong *plVar22;
  char unaff_R15B;
  bool bVar23;
  float fVar24;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  ulonglong in_stack_00000020;
  uint8_t uVar26;
  ulonglong uVar25;
  char cStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  int iStack000000000000004c;
  int iStack0000000000000050;
  int iStack0000000000000054;
  uint64_t *in_stack_00000060;
  longlong in_stack_00000068;
  int32_t uVar27;
  
  if ((unaff_R12D == 0) || ((*(uint *)(unaff_RBX + 100) & 0x10001) != 0)) {
LAB_180761b18:
    if ((unaff_DIL != '\0') &&
       (puVar14 = *(uint64_t **)(unaff_RBX + 0x138), puVar14 != (uint64_t *)0x0)) {
      if (0 < *(int *)(puVar14 + 1)) {
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + -1;
        puVar14 = *(uint64_t **)(unaff_RBX + 0x138);
      }
      if (*(int *)(puVar14 + 1) == 0) {
        if (puVar14[3] != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(longlong *)(unaff_RBX + 0x140) + 0x10bd0,puVar14[3],&system_buffer_ptr,0,1);
        }
        *puVar14 = *(uint64_t *)(*(longlong *)(unaff_RBX + 0x140) + 0x107a8);
        *(uint64_t *)(*(longlong *)(unaff_RBX + 0x140) + 0x107a8) =
             *(uint64_t *)(unaff_RBX + 0x138);
      }
      *(longlong *)(unaff_RBX + 0x138) = unaff_R13;
      *(uint64_t *)(unaff_RBX + 0x148) = 0;
      *(int32_t *)(unaff_RBX + 0x150) = 0xffffffff;
    }
    lVar13 = *(longlong *)(unaff_RBX + 0x210);
    if (lVar13 != 0) {
      lVar11 = *(longlong *)(unaff_RBX + 0xa8);
      bVar23 = lVar11 != 0;
      if (bVar23) {
        param_1 = func_0x000180743c20(lVar11,7);
        lVar13 = *(longlong *)(unaff_RBX + 0x210);
      }
      if ((lVar13 == 0) || (lVar15 = lVar13 + 0x214, *(char *)(lVar13 + 0x426) == '\0')) {
        lVar15 = unaff_R13;
      }
      if (*(longlong *)(unaff_RBX + 0x138) != 0) {
        unaff_R13 = *(longlong *)(*(longlong *)(unaff_RBX + 0x138) + 0x10);
      }
      iVar7 = FUN_180762e40(param_1,unaff_R13,unaff_R12D,*(int32_t *)(unaff_RBX + 0x148),lVar15);
      if (iVar7 != 0) {
        if ((bVar23) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_180743d60(lVar11,7);
        }
        goto LAB_180762032;
      }
      if ((bVar23) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar11,7);
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
      plVar21 = *(longlong **)(unaff_RBX + 400);
      if (plVar21 != (longlong *)(unaff_RBX + 400)) {
        do {
          lVar13 = *(longlong *)((longlong)plVar21 + 0x10);
          lVar11 = *(longlong *)(lVar13 + 0x60);
          if ((*(short *)(lVar11 + 0x5a) != 0) || ((*(byte *)(lVar13 + 0x7c) & 1) != 0)) {
            iVar7 = (int)*(short *)(lVar11 + 0x1b0);
            uVar8 = *(uint *)(lVar13 + 0x7c) & 1;
            plVar21 = (longlong *)(lVar11 + 0x138 + (ulonglong)uVar8 * 0x20);
            if (uVar8 == 0) {
              iVar7 = *(short *)(lVar11 + 0x1a8) - iVar7;
            }
            if (*(ushort *)(lVar11 + 0x118) == 0) {
              if (*(longlong *)(lVar11 + 0x138) == 0) {
                if (iVar7 < 2) {
                  if (*(longlong *)(lVar13 + 0x40) == 0) {
                    uVar8 = *(uint *)(*(longlong *)(lVar13 + 0x58) + 0x148);
                    if (uVar8 != 0) {
                      iVar7 = *(int *)(*(longlong *)(lVar13 + 0x58) + 0x14c);
                      goto LAB_180761d5c;
                    }
                  }
                  else {
                    uVar8 = (uint)*(short *)(lVar13 + 0x3a);
                    iVar7 = 0;
LAB_180761d5c:
                    if (uVar8 != 0) goto LAB_180761db7;
                  }
                  uVar8 = *(uint *)(lVar11 + 0x1c0);
                  if (uVar8 == 0) {
                    iVar7 = 2;
                    uVar8 = 1;
                  }
                  else {
                    iVar7 = 0;
                  }
                }
                else {
                  iVar7 = iStack000000000000004c;
                  if (iStack000000000000004c == 0) {
                    iVar7 = *(int *)(*(longlong *)(lVar11 + 0xa8) + 0x1193c);
                  }
                  if (iVar7 == 1) {
                    uVar8 = *(uint *)(*(longlong *)(lVar11 + 0xa8) + 0x6d4);
                  }
                  else {
                    uVar8 = func_0x0001807462a0(iVar7);
                  }
                }
              }
              else {
                uVar8 = *(uint *)(lVar11 + 0x148);
                iVar7 = *(int *)(lVar11 + 0x14c);
              }
            }
            else {
              iVar7 = *(int *)(lVar11 + 0xc4);
              uVar8 = (uint)*(ushort *)(lVar11 + 0x118);
            }
LAB_180761db7:
            if ((*(longlong *)(unaff_RBX + 0x138) == 0) || (uStack0000000000000044 == 0)) {
LAB_180761fe9:
              if (*(int *)(lVar13 + 0x6c) != 0) {
                func_0x000180765bd0(lVar13);
              }
            }
            else {
              if ((*plVar21 == 0) && (*(longlong *)(lVar13 + 0x40) == 0)) {
                if ((((*(float *)(lVar13 + 0x80) == *(float *)(lVar13 + 0x68)) &&
                     (*(float *)(lVar13 + 0x80) == 1.0)) && (*(float *)(lVar13 + 0x68) == 1.0)) &&
                   (*(short *)(lVar11 + 0x1a8) < 2)) {
                  uVar20 = *(uint *)(unaff_RBX + 0x148);
                  iVar6 = *(int *)(unaff_RBX + 0x14c);
                  if ((uVar20 != uVar8) || (iVar6 != iVar7)) {
                    if ((iVar6 == 0) && (iVar6 = iStack000000000000004c, 0 < (int)uVar20)) {
                      iVar6 = func_0x000180746b50(uVar20);
                    }
                    uVar9 = func_0x0001807462a0(iVar6);
                    if (uVar9 != 0) {
                      uVar20 = uVar9;
                    }
                    iStack0000000000000050 = iVar7;
                    if (iVar7 == 0) {
                      if ((int)uVar8 < 1) {
                        iStack0000000000000050 = iStack000000000000004c;
                      }
                      else {
                        iStack0000000000000050 = func_0x000180746b50(uVar8);
                      }
                    }
                    uVar10 = func_0x0001807462a0(iStack0000000000000050);
                    uVar9 = uVar8;
                    if (uVar10 != 0) {
                      uVar9 = uVar10;
                    }
                    if ((uVar20 != uVar9) || (iVar6 != iStack0000000000000050)) goto LAB_180761ebf;
                  }
                  if (uStack0000000000000044 != 0) {
                    FUN_18075d580(unaff_RBX + 0x138,plVar21);
                  }
                  goto LAB_180761fe9;
                }
              }
LAB_180761ebf:
              lVar15 = *plVar21;
              uVar20 = *(uint *)(lVar11 + 100) >> 0xf & 1;
              if (lVar15 == 0) {
                iVar6 = FUN_18075a100(plVar21,*(uint64_t *)(unaff_RBX + 0xa8),uVar8,0,0);
                if (iVar6 != 0) goto LAB_180762032;
                lVar15 = *plVar21;
                uVar20 = 1;
                *(int *)((longlong)plVar21 + 0x14) = iVar7;
              }
              if ((uVar20 != 0) &&
                 (((iStack0000000000000054 != 0 || (uStack0000000000000044 < uStack0000000000000048)
                   ) || ((*(longlong *)(lVar13 + 0x40) != 0 &&
                         ((int)*(short *)(lVar13 + 0x3a) != (int)plVar21[2])))))) {
                if (lVar15 != 0) {
                  lVar15 = *(longlong *)(lVar15 + 0x10);
                }
                    // WARNING: Subroutine does not return
                memset(lVar15,0,(ulonglong)(uStack0000000000000048 * (int)plVar21[2]) << 2);
              }
              lVar16 = 0;
              if ((*(int *)((longlong)plVar21 + 0x14) == 1) || (*(int *)(unaff_RBX + 0x14c) == 1)) {
                uVar17 = 1;
              }
              else {
                uVar17 = 0;
              }
              lVar19 = lVar16;
              if (*(longlong *)(unaff_RBX + 0x138) != 0) {
                lVar19 = *(longlong *)(*(longlong *)(unaff_RBX + 0x138) + 0x10);
              }
              if (lVar15 != 0) {
                lVar16 = *(longlong *)(lVar15 + 0x10);
              }
              FUN_1807636f0(lVar13,lVar16 + (ulonglong)
                                            (uint)((int)plVar21[2] * iStack0000000000000054) * 4,
                            lVar19 + (ulonglong)
                                     (uint)(*(int *)(unaff_RBX + 0x148) * iStack0000000000000054) *
                                     4,uVar17,(int)plVar21[2]);
            }
          }
          LOCK();
          *(uint *)(lVar11 + 100) = *(uint *)(lVar11 + 100) & 0xffff7fff;
          UNLOCK();
          plVar21 = *(longlong **)(lVar13 + 0x20);
        } while (plVar21 != (longlong *)(unaff_RBX + 400));
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
    goto LAB_180762032;
  }
  unaff_RBP[-0xc] = unaff_R13;
  param_1 = 0;
  *(int32_t *)(unaff_RBP + -0xb) = 0xffffffff;
  unaff_RBP[-0xe] = 0;
  unaff_RBP[-0xd] = 0;
  uVar26 = (uint8_t)(in_stack_00000020 >> 8);
  iVar7 = (int)unaff_R13;
  if (unaff_R15B == '\0') {
    if (((*(float *)(unaff_RBX + 0x1cc) == 0.0) && (*(float *)(unaff_RBX + 0x1d8) == 0.0)) ||
       (*(longlong *)(unaff_RBX + 0x138) == unaff_R13)) goto LAB_180761b18;
    uVar27 = *(int32_t *)(unaff_RBX + 0x14c);
    uVar1 = *(int32_t *)(unaff_RBX + 0x148);
    uVar17 = *(uint64_t *)(unaff_RBX + 0xa8);
    unaff_RBP[0x42] = (longlong)(unaff_RBP + 0x41);
    unaff_RBP[0x41] = (longlong)(unaff_RBP + 0x41);
    unaff_RBP[0x45] = (longlong)(unaff_RBP + 0x44);
    unaff_RBP[0x44] = (longlong)(unaff_RBP + 0x44);
    unaff_RBP[0x43] = unaff_R13;
    unaff_RBP[0x46] = unaff_R13;
    unaff_RBP[0x48] = unaff_R13;
    *(int *)(unaff_RBP + 0x47) = iVar7;
    unaff_RBP[0x4a] = unaff_R13;
    *(int *)(unaff_RBP + 0x49) = iVar7;
    unaff_RBP[0x54] = unaff_R13;
    *(int *)(unaff_RBP + 0x53) = iVar7;
    unaff_RBP[0x40] = unaff_R13;
    unaff_RBP[0x4b] = unaff_R13;
    unaff_RBP[0x4c] = unaff_R13;
    iVar7 = FUN_18075a100(unaff_RBP + -0xe,uVar17,uVar1,uVar27,CONCAT71(uVar26,(char)unaff_R13));
    if (iVar7 == 0) {
      if (*(longlong *)(unaff_RBX + 0x138) != 0) {
        unaff_R13 = *(longlong *)(*(longlong *)(unaff_RBX + 0x138) + 0x10);
      }
                    // WARNING: Subroutine does not return
      memcpy(extraout_XMM0_Da_00,unaff_R13,
             (ulonglong)(*(int *)(unaff_RBX + 0x148) * unaff_R12D) << 2);
    }
    puVar14 = (uint64_t *)unaff_RBP[-0xe];
  }
  else {
    in_stack_00000060 = (uint64_t *)0x0;
    in_stack_00000068 = 0;
    if (*(longlong *)(unaff_RBX + 0xe8) == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = *(int *)(*(longlong *)(unaff_RBX + 0xe8) + 0x28);
    }
    lVar13 = unaff_RBP[-10];
    plVar21 = (longlong *)(unaff_RBX + 0x138);
    uVar27 = *(int32_t *)((longlong)unaff_RBP + -0x4c);
    if ((*plVar21 == 0) && (iVar6 != 0)) {
      in_stack_00000020 = CONCAT71(uVar26,1);
      iVar5 = FUN_18075a100(plVar21,*(uint64_t *)(unaff_RBX + 0xa8),uVar27,(int)lVar13,
                            in_stack_00000020);
      if (iVar5 == 0) goto LAB_180760f3a;
LAB_180760fbb:
      puVar14 = (uint64_t *)unaff_RBP[-0xe];
      puVar18 = in_stack_00000060;
    }
    else {
LAB_180760f3a:
      uVar25 = in_stack_00000020 & 0xffffffffffffff00;
      iVar5 = FUN_18075a100(&stack0x00000060,*(uint64_t *)(unaff_RBX + 0xa8),uVar27,(int)lVar13,
                            uVar25);
      if (iVar5 != 0) goto LAB_180760fbb;
      if ((*(uint *)(unaff_RBX + 100) >> 3 & 1) != 0) {
        lVar13 = *(longlong *)(unaff_RBX + 0x158);
        if (((lVar13 == 0) || (*(longlong *)(lVar13 + 0x10) == 0)) ||
           (*(int *)(unaff_RBX + 0x168) != *(int *)(unaff_RBX + 0x148))) {
          uVar25 = CONCAT71((int7)(uVar25 >> 8),1);
          iVar5 = FUN_18075a100((longlong *)(unaff_RBX + 0x158),*(uint64_t *)(unaff_RBX + 0xa8),
                                *(int32_t *)(unaff_RBX + 0x148),*(int32_t *)(unaff_RBX + 0xc4)
                                ,uVar25);
          if (iVar5 != 0) {
            FUN_18075f8e0(&stack0x00000060);
            goto LAB_180760fbb;
          }
        }
      }
      puVar18 = in_stack_00000060;
      lVar13 = 0;
      lVar11 = lVar13;
      if (*plVar21 != 0) {
        lVar11 = *(longlong *)(*plVar21 + 0x10);
      }
      unaff_RBP[-3] = lVar11;
      lVar11 = lVar13;
      if (in_stack_00000060 != (uint64_t *)0x0) {
        lVar11 = in_stack_00000060[2];
      }
      unaff_RBP[-0xf] = lVar11;
      lVar11 = lVar13;
      if (*(longlong *)(unaff_RBX + 0x158) != 0) {
        lVar11 = *(longlong *)(*(longlong *)(unaff_RBX + 0x158) + 0x10);
      }
      *(longlong *)(unaff_RBX + 200) = lVar11;
      *(int32_t *)(unaff_RBX + 0xd0) = *(int32_t *)(unaff_RBX + 0x168);
      if (iVar6 == 0) {
        uStack0000000000000044 = (uint)*(ushort *)(unaff_RBX + 0x5a);
      }
      if ((*(float *)(unaff_RBX + 0x1c4) == 1.0) && (*(float *)(unaff_RBX + 0x1d0) == 1.0)) {
        puVar14 = (uint64_t *)unaff_RBP[-0xe];
        pcVar3 = *(code **)(unaff_RBX + 0x128);
        if (pcVar3 != (code *)0x0) {
          *(int32_t *)((longlong)unaff_RBP + -0x44) = *(int32_t *)(unaff_RBX + 0x148);
          *(int32_t *)(unaff_RBP + -9) = 0;
          unaff_RBP[0x5d] = (longlong)(unaff_RBP + -9);
          *(int32_t *)(unaff_RBP + -8) = 0;
          unaff_RBP[0x5c] = (longlong)unaff_RBP + -0x44;
          unaff_RBP[0x5e] = (longlong)(unaff_RBP + -3);
          *(int32_t *)(unaff_RBP + 0x5f) = *(int32_t *)(unaff_RBX + 0x14c);
          unaff_RBP[0x58] = (longlong)(unaff_RBP + -8);
          unaff_RBP[0x57] = (longlong)unaff_RBP + -0x7c;
          unaff_RBP[0x59] = (longlong)(unaff_RBP + -0xf);
          uVar27 = (int32_t)((ulonglong)unaff_R13 >> 0x20);
          *(int32_t *)(unaff_RBP + 0x5a) = uVar27;
          uVar25 = uVar25 & 0xffffffff00000000;
          *(int *)((longlong)unaff_RBP + -0x7c) = iVar7;
          *(int *)(unaff_RBP + 0x5b) = iVar6;
          *(int32_t *)(unaff_RBP + 0x56) = 1;
          *(longlong *)(unaff_RBX + 0xb0) = unaff_RBX;
          iVar5 = (*pcVar3)((longlong *)(unaff_RBX + 0xb0),uStack0000000000000044,unaff_RBP + 0x5b,
                            unaff_RBP + 0x56,uVar25);
          if (iVar5 == 0xb) {
            cStack0000000000000040 = '\x01';
          }
          else if ((iVar5 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
            *(int8_t *)(unaff_RBP + 0x60) = 0;
                    // WARNING: Subroutine does not return
            FUN_180749ef0(iVar5,7);
          }
          if ((((*(longlong *)(unaff_RBX + 0xe8) != 0) &&
               (*(longlong *)(*(longlong *)(unaff_RBX + 0xe8) + 0x48) != 0)) &&
              (iVar5 = *(int *)((longlong)unaff_RBP + -0x7c), iVar7 != iVar5)) &&
             (iVar5 <= *(int *)(*(longlong *)(unaff_RBX + 0xa8) + 0x107b0))) {
            if (iVar5 != 0) {
              iVar7 = iVar5;
            }
            unaff_R13 = CONCAT44(uVar27,iVar7);
          }
        }
        if (iVar6 == 0) {
          if (*(ushort *)(unaff_RBX + 0x58) != 0) {
                    // WARNING: Subroutine does not return
            memmove(unaff_RBP[-0xf] + (ulonglong)(iVar7 * (uint)*(ushort *)(unaff_RBX + 0x58)) * 4,
                    unaff_RBP[-0xf],(ulonglong)(iVar7 * uStack0000000000000044) << 2);
          }
                    // WARNING: Subroutine does not return
          memset(unaff_RBP[-0xf] +
                 (ulonglong)((uStack0000000000000044 + iStack0000000000000054) * iVar7) * 4,0,
                 (ulonglong)
                 ((uStack0000000000000048 - iStack0000000000000054) - uStack0000000000000044) *
                 (longlong)iVar7 * 4);
        }
        uVar27 = (int32_t)((ulonglong)unaff_R13 >> 0x20);
        if ((*(float *)(unaff_RBX + 0x1c8) == 1.0) && (*(float *)(unaff_RBX + 0x1d4) == 1.0)) {
          fVar24 = *(float *)(unaff_RBX + 0x1cc);
          if ((fVar24 != 0.0) || (*(float *)(unaff_RBX + 0x1d8) != 0.0)) {
            uVar1 = *(int32_t *)(unaff_RBX + 0x1d8);
            uVar17 = *(uint64_t *)(unaff_RBX + 0xa8);
            unaff_RBP[0x2c] = (longlong)(unaff_RBP + 0x2b);
            unaff_RBP[0x2d] = 0;
            unaff_RBP[0x2b] = (longlong)(unaff_RBP + 0x2b);
            unaff_RBP[0x30] = 0;
            unaff_RBP[0x2f] = (longlong)(unaff_RBP + 0x2e);
            plVar22 = unaff_RBP + -0xe;
            if (puVar14 == (uint64_t *)0x0) {
              plVar22 = plVar21;
            }
            unaff_RBP[0x32] = 0;
            *(int32_t *)(unaff_RBP + 0x31) = 0;
            unaff_RBP[0x34] = 0;
            *(int32_t *)(unaff_RBP + 0x33) = 0;
            unaff_RBP[0x3e] = 0;
            *(int32_t *)(unaff_RBP + 0x3d) = 0;
            unaff_RBP[0x2a] = 0;
            unaff_RBP[0x35] = 0;
            unaff_RBP[0x36] = 0;
            unaff_RBP[0x2e] = (longlong)(unaff_RBP + 0x2e);
            func_0x000180763630(unaff_RBP + 0x2a,uVar17,uVar1);
            fVar24 = *(float *)(unaff_RBX + 0x1cc);
            uVar17 = 0;
            fVar2 = *(float *)(unaff_RBX + 0x1d8);
            *(int32_t *)((longlong)unaff_RBP + 0x1d4) = 0x40;
            *(float *)(unaff_RBP + 0x37) = fVar24;
            if (fVar24 == fVar2) {
              *(int32_t *)((longlong)unaff_RBP + 0x1d4) = 0;
            }
            uVar12 = uVar17;
            if (*plVar22 != 0) {
              uVar12 = *(uint64_t *)(*plVar22 + 0x10);
            }
            if (puVar18 != (uint64_t *)0x0) {
              uVar17 = puVar18[2];
            }
            FUN_1807636f0(unaff_RBP + 0x2a,uVar17,uVar12,0,iVar7);
            FUN_18075f8e0(unaff_RBP + -0xe);
            fVar24 = *(float *)(unaff_RBX + 0x1cc);
          }
          if (((*(float *)(unaff_RBX + 0x1c8) != 0.0) || (*(float *)(unaff_RBX + 0x1d4) != 0.0)) ||
             ((fVar24 != 0.0 || (unaff_DIL = '\x01', *(float *)(unaff_RBX + 0x1d8) != 0.0)))) {
            unaff_DIL = cStack0000000000000040;
          }
          *(int32_t *)(unaff_RBX + 0x1d0) = *(int32_t *)(unaff_RBX + 0x1c4);
          *(float *)(unaff_RBX + 0x1d4) = *(float *)(unaff_RBX + 0x1c8);
          *(float *)(unaff_RBX + 0x1d8) = fVar24;
          FUN_18075f8e0(unaff_RBX + 0x158);
          param_1 = FUN_18075f8e0(plVar21);
          if ((*plVar21 == 0) ||
             (iVar6 = FUN_18075f8e0(plVar21), param_1 = extraout_XMM0_Da, iVar6 == 0)) {
            *(longlong *)(unaff_RBX + 0x140) = in_stack_00000068;
            *(int32_t *)(unaff_RBX + 0x150) = 0xffffffff;
            in_stack_00000060 = (uint64_t *)0x0;
            in_stack_00000068 = 0;
            *plVar21 = (longlong)puVar18;
            *(int *)(unaff_RBX + 0x148) = iVar7;
            *(int32_t *)(unaff_RBX + 0x14c) = uVar27;
          }
          LOCK();
          *(uint *)(unaff_RBX + 100) = *(uint *)(unaff_RBX + 100) | 0x10000;
          UNLOCK();
          *(int32_t *)(unaff_RBX + 0x1c0) = *(int32_t *)(unaff_RBX + 0x148);
          if (in_stack_00000060 != (uint64_t *)0x0) {
            iVar7 = *(int *)(in_stack_00000060 + 1);
            if (0 < iVar7) {
              iVar7 = iVar7 + -1;
              *(int *)(in_stack_00000060 + 1) = iVar7;
            }
            if (iVar7 == 0) {
              if (in_stack_00000060[3] != 0) {
                    // WARNING: Subroutine does not return
                FUN_180742250(in_stack_00000068 + 0x10bd0,in_stack_00000060[3],&system_buffer_ptr,0,1);
              }
              *in_stack_00000060 = *(uint64_t *)(in_stack_00000068 + 0x107a8);
              *(uint64_t **)(in_stack_00000068 + 0x107a8) = in_stack_00000060;
            }
          }
          unaff_R13 = 0;
          puVar14 = (uint64_t *)unaff_RBP[-0xe];
          unaff_R12D = uStack0000000000000048;
          if (puVar14 != (uint64_t *)0x0) {
            iVar7 = *(int *)(puVar14 + 1);
            if (0 < iVar7) {
              iVar7 = iVar7 + -1;
              *(int *)(puVar14 + 1) = iVar7;
            }
            if (iVar7 == 0) {
              lVar13 = unaff_RBP[-0xd];
              if (puVar14[3] != 0) {
                    // WARNING: Subroutine does not return
                FUN_180742250(lVar13 + 0x10bd0,puVar14[3],&system_buffer_ptr,0,1);
              }
              *puVar14 = *(uint64_t *)(lVar13 + 0x107a8);
              *(uint64_t **)(lVar13 + 0x107a8) = puVar14;
            }
          }
          goto LAB_180761b18;
        }
        uVar17 = *(uint64_t *)(unaff_RBX + 0xa8);
        unaff_RBP[0x16] = (longlong)(unaff_RBP + 0x15);
        unaff_RBP[0x17] = 0;
        unaff_RBP[0x15] = (longlong)(unaff_RBP + 0x15);
        unaff_RBP[0x1a] = 0;
        unaff_RBP[0x19] = (longlong)(unaff_RBP + 0x18);
        unaff_RBP[0x1c] = 0;
        *(int32_t *)(unaff_RBP + 0x1b) = 0;
        unaff_RBP[0x1e] = 0;
        *(int32_t *)(unaff_RBP + 0x1d) = 0;
        unaff_RBP[0x28] = 0;
        *(int32_t *)(unaff_RBP + 0x27) = 0;
        unaff_RBP[0x14] = 0;
        unaff_RBP[0x1f] = 0;
        unaff_RBP[0x20] = 0;
        unaff_RBP[-5] = 0;
        unaff_RBP[0x18] = (longlong)(unaff_RBP + 0x18);
        unaff_RBP[-7] = 0;
        unaff_RBP[-6] = 0;
        *(int32_t *)(unaff_RBP + -4) = 0xffffffff;
        iVar6 = FUN_18075a100(unaff_RBP + -7,uVar17,iVar7,uVar27,uVar25 & 0xffffffffffffff00);
        if (iVar6 == 0) {
          uVar12 = 0;
          uVar17 = uVar12;
          if (puVar18 != (uint64_t *)0x0) {
            uVar17 = puVar18[2];
          }
          if (unaff_RBP[-7] != 0) {
            uVar12 = *(uint64_t *)(unaff_RBP[-7] + 0x10);
          }
                    // WARNING: Subroutine does not return
          memcpy(uVar12,uVar17,(ulonglong)(iVar7 * uStack0000000000000044) << 2);
        }
        puVar4 = (uint64_t *)unaff_RBP[-7];
        if (puVar4 != (uint64_t *)0x0) {
          iVar7 = *(int *)(puVar4 + 1);
          if (0 < iVar7) {
            iVar7 = iVar7 + -1;
            *(int *)(puVar4 + 1) = iVar7;
          }
          if (iVar7 == 0) {
            lVar13 = unaff_RBP[-6];
            if (puVar4[3] != 0) {
                    // WARNING: Subroutine does not return
              FUN_180742250(lVar13 + 0x10bd0,puVar4[3],&system_buffer_ptr,0,1);
            }
            *puVar4 = *(uint64_t *)(lVar13 + 0x107a8);
            *(uint64_t **)(lVar13 + 0x107a8) = puVar4;
          }
        }
      }
      else {
        uVar27 = *(int32_t *)(unaff_RBX + 0x14c);
        uVar1 = *(int32_t *)(unaff_RBX + 0x148);
        uVar17 = *(uint64_t *)(unaff_RBX + 0xa8);
        *unaff_RBP = (longlong)(unaff_RBP + -1);
        unaff_RBP[-1] = (longlong)(unaff_RBP + -1);
        unaff_RBP[3] = (longlong)(unaff_RBP + 2);
        unaff_RBP[2] = (longlong)(unaff_RBP + 2);
        unaff_RBP[1] = 0;
        unaff_RBP[4] = 0;
        unaff_RBP[6] = 0;
        *(int32_t *)(unaff_RBP + 5) = 0;
        unaff_RBP[8] = 0;
        *(int32_t *)(unaff_RBP + 7) = 0;
        unaff_RBP[0x12] = 0;
        *(int32_t *)(unaff_RBP + 0x11) = 0;
        unaff_RBP[-2] = 0;
        unaff_RBP[9] = 0;
        unaff_RBP[10] = 0;
        iVar7 = FUN_18075a100(unaff_RBP + -0xe,uVar17,uVar1,uVar27,uVar25 & 0xffffffffffffff00);
        if (iVar7 == 0) {
          lVar11 = lVar13;
          if (*plVar21 != 0) {
            lVar11 = *(longlong *)(*plVar21 + 0x10);
          }
          if (unaff_RBP[-0xe] != 0) {
            lVar13 = *(longlong *)(unaff_RBP[-0xe] + 0x10);
          }
                    // WARNING: Subroutine does not return
          memcpy(lVar13,lVar11,
                 (ulonglong)(*(int *)(unaff_RBX + 0x148) * uStack0000000000000044) << 2);
        }
        puVar14 = (uint64_t *)unaff_RBP[-0xe];
      }
    }
    if (puVar18 != (uint64_t *)0x0) {
      iVar7 = *(int *)(puVar18 + 1);
      if (0 < iVar7) {
        iVar7 = iVar7 + -1;
        *(int *)(puVar18 + 1) = iVar7;
      }
      if (iVar7 == 0) {
        if (puVar18[3] != 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(in_stack_00000068 + 0x10bd0,puVar18[3],&system_buffer_ptr,0,1);
        }
        *puVar18 = *(uint64_t *)(in_stack_00000068 + 0x107a8);
        *(uint64_t **)(in_stack_00000068 + 0x107a8) = puVar18;
      }
    }
  }
  if (puVar14 != (uint64_t *)0x0) {
    iVar7 = *(int *)(puVar14 + 1);
    if (0 < iVar7) {
      iVar7 = iVar7 + -1;
      *(int *)(puVar14 + 1) = iVar7;
    }
    if (iVar7 == 0) {
      if (puVar14[3] != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(unaff_RBP[-0xd] + 0x10bd0,puVar14[3],&system_buffer_ptr,0,1);
      }
      lVar13 = unaff_RBP[-0xd];
      *puVar14 = *(uint64_t *)(lVar13 + 0x107a8);
      *(uint64_t **)(lVar13 + 0x107a8) = puVar14;
    }
  }
LAB_180762032:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x80] ^ (ulonglong)&stack0x00000000);
}





