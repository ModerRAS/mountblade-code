#include "TaleWorlds.Native.Split.h"

// 99_part_09_part026.c - 1 个函数

// 函数: void FUN_1805c95ac(void)
void FUN_1805c95ac(void)

{
  longlong *unaff_RBX;
  undefined4 unaff_R15D;
  
  FUN_180508010();
  *(undefined4 *)((longlong)unaff_RBX + 0x178c) = 0;
  if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
    *(uint *)((longlong)unaff_RBX + 0x158c) =
         *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
  }
  *(undefined4 *)((longlong)unaff_RBX + 0x215c) = unaff_R15D;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1805c9600(longlong *param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5
             ,undefined4 *param_6,int *param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  uint *puVar13;
  byte *pbVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  bool bVar25;
  bool bVar26;
  float fVar27;
  undefined4 uVar29;
  undefined8 uVar28;
  float fVar30;
  int iStack_d4;
  int iStack_d0;
  uint uStack_cc;
  undefined4 auStack_c8 [2];
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined1 auStack_a8 [112];
  
  if ((param_2 == 2) && (cVar7 = func_0x000180522f60(*param_1), cVar7 != '\0')) {
    fVar27 = 0.0;
    uVar29 = 0;
  }
  else {
    lVar22 = *(longlong *)(*param_1 + 0x8f8);
    lVar23 = *(longlong *)(lVar22 + 0x9f0);
    uStack_cc = *(uint *)(*param_1 + 0x564) >> 0x1f ^ 1;
    bVar25 = lVar23 != 0;
    if ((lVar23 == 0) ||
       ((*(uint *)((longlong)*(int *)(lVar23 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar23 + 0xd0))
         >> 0x1c & 1) != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((lVar23 == 0) || (bVar4)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((lVar23 == 0) || (!bVar5)) {
      lVar23 = 0;
      do {
        if (!bVar25) {
          iVar20 = 0;
          lVar12 = *(longlong *)(lVar22 + 0xe0) - *(longlong *)(lVar22 + 0xd8);
          lVar10 = lVar12 >> 0x3f;
          lVar12 = lVar12 / 0xa0 + lVar10;
          if (lVar12 != lVar10) {
            puVar13 = (uint *)(*(longlong *)(lVar22 + 0xd8) + 0x58);
            do {
              if ((*puVar13 & 0x80000) != 0) {
                bVar25 = true;
                if (!bVar5) goto LAB_1805c977e;
                goto LAB_1805c97fa;
              }
              iVar20 = iVar20 + 1;
              puVar13 = puVar13 + 0x28;
            } while ((ulonglong)(longlong)iVar20 < (ulonglong)(lVar12 - lVar10));
          }
        }
        if (!bVar5) {
LAB_1805c977e:
          iVar20 = 0;
          lVar12 = *(longlong *)(lVar22 + 0xe0) - *(longlong *)(lVar22 + 0xd8);
          lVar10 = lVar12 >> 0x3f;
          lVar12 = lVar12 / 0xa0 + lVar10;
          if (lVar12 != lVar10) {
            puVar13 = (uint *)(*(longlong *)(lVar22 + 0xd8) + 0x50);
            do {
              if ((*puVar13 >> 0x1c & 1) != 0) {
                bVar5 = true;
                if (bVar25) goto LAB_1805c97fa;
                break;
              }
              iVar20 = iVar20 + 1;
              puVar13 = puVar13 + 0x28;
            } while ((ulonglong)(longlong)iVar20 < (ulonglong)(lVar12 - lVar10));
          }
        }
        lVar23 = lVar23 + 1;
        lVar22 = lVar22 + 0x1f8;
      } while (lVar23 < 5);
    }
LAB_1805c97fa:
    lVar22 = 4;
    fVar27 = 0.0;
    uVar29 = 0;
    uStack_c0 = 4;
    uVar19 = uStack_cc;
    do {
      lStack_b8 = lVar22 * 0x1f8;
      lStack_b0 = *(longlong *)(*param_1 + 0x8f8);
      plVar24 = (longlong *)(lStack_b0 + 8 + lStack_b8);
      if (0 < (int)plVar24[6]) {
        lVar23 = plVar24[0x1a];
        uVar1 = *(ulonglong *)((longlong)(int)plVar24[0x1e] * 0xa0 + 0x50 + lVar23);
        uVar9 = (uint)uVar1;
        if (((((uVar1 >> 9 & 1) == 0) || (0 < (short)plVar24[1])) &&
            ((cVar7 = func_0x000180534fb0(plVar24), cVar7 == '\0' || (0 < (short)plVar24[1])))) &&
           ((uVar9 & 0x103) != 0x100)) {
          bVar6 = false;
          if (bVar5) {
            iVar21 = 0;
            iVar20 = (int)((plVar24[0x1b] - lVar23) / 0xa0);
            if (0 < iVar20) {
              lVar10 = 0;
              do {
                if ((*(byte *)(lVar23 + 0x50 + lVar10) & 0x10) == 0) {
                  bVar6 = true;
                  break;
                }
                iVar21 = iVar21 + 1;
                lVar10 = lVar10 + 0xa0;
              } while (iVar21 < iVar20);
            }
          }
          iVar17 = 0;
          lVar10 = 0;
          iVar21 = (int)(plVar24[0x1b] - lVar23 >> 0x3f);
          iVar20 = (int)((plVar24[0x1b] - lVar23) / 0xa0) + iVar21;
          if (iVar20 != iVar21 && -1 < iVar20 - iVar21) {
            do {
              if (param_2 == 1) {
                if ((*(byte *)(lVar10 * 0xa0 + 0x50 + lVar23) & 0x41) == 1) {
                  bVar26 = (~(byte)(*(uint *)(lVar10 * 0xa0 + 0x58 + lVar23) >> 0x13) & 1) == 0;
                  goto LAB_1805c9b87;
                }
              }
              else if (param_2 == 2) {
                lVar12 = lVar10 * 0xa0;
                if ((*(byte *)(lVar12 + 0x50 + lVar23) >> 1 & 1) != 0) {
                  bVar26 = false;
                  if ((*(uint *)(lVar12 + 0x58 + lVar23) & 0x2000000) == 0) {
                    lVar16 = *param_1;
                    if ((*(longlong **)(lVar16 + 0x628) == plVar24) &&
                       (*(int *)(lVar16 + 0x644) == iVar17)) {
                      iVar21 = *(int *)(lVar16 + 0x638);
                      iVar20 = *(int *)(lVar16 + 0x63c);
                    }
                    else {
                      auStack_c8[0] = 0xffffffff;
                      iStack_d0 = -1;
                      iStack_d4 = -1;
                      FUN_18050e440(lVar16,plVar24,&iStack_d0,&iStack_d4,auStack_c8,auStack_a8,
                                    iVar17);
                      lVar23 = plVar24[0x1a];
                      iVar21 = iStack_d0;
                      iVar20 = iStack_d4;
                    }
                    uVar1 = *(ulonglong *)(lVar12 + 0x50 + lVar23);
                    if ((((((uVar1 >> 8 & 1) == 0) && (1 < iVar20)) && (*plVar24 != 0)) &&
                        (0 < *(short *)(*plVar24 + 8))) ||
                       ((0 < iVar21 &&
                        (((*(int *)(*param_1 + 0x564) < 0 ||
                          ((*(uint *)(*param_1 + 0x56c) & 0x2000000) != 0)) ||
                         (lVar23 = plVar24[0x1a], (uVar1 >> 0x12 & 1) == 0)))))) {
                      cVar7 = func_0x000180507950(plVar24);
                      if (cVar7 != '\0') {
                        iVar20 = 0;
                        lVar12 = plVar24[0x1b] - lVar23 >> 0x3f;
                        lVar16 = (plVar24[0x1b] - lVar23) / 0xa0 + lVar12;
                        if (lVar16 != lVar12) {
                          pbVar14 = (byte *)(lVar23 + 0x50);
LAB_1805c9a90:
                          if ((*pbVar14 & 1) == 0) goto code_r0x0001805c9a95;
                          if (iVar21 < 2) {
                            lVar12 = 0;
                            lVar23 = 0;
                            do {
                              if (((lVar12 != lVar22) &&
                                  (lVar16 = *(longlong *)(*param_1 + 0x8f8),
                                  0 < *(int *)(lVar16 + 0x38 + lVar23))) &&
                                 ((lVar2 = *(longlong *)(lVar16 + 0xd8 + lVar23),
                                  (*(uint *)((longlong)*(int *)(lVar16 + 0xf8 + lVar23) * 0xa0 +
                                             0x50 + lVar2) >> 9 & 1) == 0 ||
                                  (0 < *(short *)(lVar16 + 0x10 + lVar23))))) {
                                lVar15 = *(longlong *)(lVar16 + 0xe0 + lVar23) - lVar2;
                                iVar20 = 0;
                                lVar16 = lVar15 >> 0x3f;
                                lVar15 = lVar15 / 0xa0 + lVar16;
                                if (lVar15 != lVar16) {
                                  pbVar14 = (byte *)(lVar2 + 0x50);
                                  do {
                                    if ((*pbVar14 & 1) != 0) goto LAB_1805c9aa7;
                                    iVar20 = iVar20 + 1;
                                    pbVar14 = pbVar14 + 0xa0;
                                  } while ((ulonglong)(longlong)iVar20 <
                                           (ulonglong)(lVar15 - lVar16));
                                }
                              }
                              lVar12 = lVar12 + 1;
                              lVar23 = lVar23 + 0x1f8;
                            } while (lVar23 < 0x9d8);
                            bVar26 = true;
                            goto LAB_1805c9b87;
                          }
                        }
                      }
LAB_1805c9aa7:
                      bVar26 = true;
                    }
                  }
                  bVar26 = !bVar26;
LAB_1805c9b87:
                  lVar23 = lVar10 * 0xa0;
                  if (!bVar26) {
                    cVar7 = (char)uVar19;
                    if (bVar25) {
                      iVar20 = *(int *)(lVar23 + 0x5c + plVar24[0x1a]);
                      bVar18 = *(byte *)((longlong)*(int *)(lVar23 + 100 + plVar24[0x1a]) * 0x170 +
                                         0x140 + _DAT_180c95ff0);
                      bVar11 = bVar18;
                      if ((iVar20 == 0xf) && ((*(uint *)(*param_1 + 0x56c) & 0x1000000) != 0)) {
                        bVar11 = bVar18 & 0xfd;
                      }
                      if (cVar7 == '\0') {
                        bVar3 = bVar11 & 1;
                      }
                      else {
                        bVar3 = bVar11 & 2;
                      }
                      if ((bVar3 != 0) || ((bVar11 & 8) != 0)) goto LAB_1805c9bec;
                    }
                    else {
LAB_1805c9bec:
                      iVar20 = *(int *)(lVar23 + 0x5c + plVar24[0x1a]);
                      bVar18 = *(byte *)((longlong)*(int *)(lVar23 + 100 + plVar24[0x1a]) * 0x170 +
                                         0x140 + _DAT_180c95ff0);
                      bVar11 = bVar18;
                      if ((iVar20 == 0xf) && ((*(uint *)(*param_1 + 0x56c) & 0x1000000) != 0)) {
                        bVar11 = bVar18 & 0xfd;
                      }
                      if (cVar7 == '\0') {
                        bVar3 = bVar11 & 1;
                      }
                      else {
                        bVar3 = bVar11 & 2;
                      }
                      if ((bVar3 != 0) || ((bVar11 & 4) != 0)) goto LAB_1805c9e29;
                    }
                    if ((cVar7 == '\0') ||
                       (((iVar20 == 0xf && ((*(uint *)(*param_1 + 0x56c) & 0x1000000) != 0)) ||
                        ((~bVar18 & 2) != 0)))) {
                      if (param_6 == (undefined4 *)0x0) {
                        fVar27 = 1.0;
                        uVar29 = 0;
                        goto FUN_1805c9ef1;
                      }
                      if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
                        lVar12 = *(longlong *)
                                  (*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
                        param_1[0x15] = lVar12;
                        *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
                      }
                      else {
                        lVar12 = param_1[0x15];
                      }
                      if ((lVar12 == 0) || (*(int *)(lVar12 + 0x30) < 1)) {
LAB_1805c9d0e:
                        uVar8 = 0;
                      }
                      else {
                        lVar16 = (longlong)*(int *)(lVar12 + 0xf0) * 0xa0;
                        if ((((*(uint *)(lVar16 + 0x50 + *(longlong *)(lVar12 + 0xd0)) >> 9 & 1) !=
                              0) && (*(short *)(lVar12 + 8) < 1)) ||
                           ((*(byte *)((longlong)
                                       *(int *)(lVar16 + 100 + *(longlong *)(lVar12 + 0xd0)) * 0x170
                                       + 0x140 + _DAT_180c95ff0) & 0x10) == 0)) goto LAB_1805c9d0e;
                        uVar8 = 1;
                      }
                      uVar28 = FUN_1805ca260(param_1,plVar24,iVar17,param_3,param_4,param_5,uVar8);
                      fVar30 = (float)uVar28;
                      lVar12 = plVar24[0x1a];
                      bVar18 = *(byte *)(lVar23 + 0x50 + lVar12) >> 4 & 1;
                      if ((bVar18 == 0) || ((!bVar6 && (!bVar4)))) {
                        if ((bVar18 != 0) && (bVar4)) {
                          if ((*(byte *)(param_1 + 2) & 0x10) == 0) {
                            FUN_1805d3770(param_1 + 1);
                            lVar12 = *(longlong *)(lStack_b8 + 0xd8 + lStack_b0);
                          }
                          if (7.0 < *(float *)((longlong)param_1 + 0xa4)) goto LAB_1805c9def;
                        }
                        if (((bVar5) && ((*(uint *)(lVar23 + 0x50 + lVar12) >> 0x17 & 1) != 0)) ||
                           (((*(uint *)((longlong)param_1 + 0x209c) >> 2 & 1) != 0 &&
                            (((bVar18 != 0 && (bVar5)) ||
                             ((*(byte *)((longlong)*(int *)(lVar23 + 100 + lVar12) * 0x170 + 0x140 +
                                        _DAT_180c95ff0) & 0x10) != 0)))))) goto LAB_1805c9def;
                      }
                      else {
LAB_1805c9def:
                        fVar30 = fVar30 * 1e-06;
                      }
                      uVar19 = uStack_cc;
                      if (fVar27 < fVar30) {
                        *param_6 = (int)uStack_c0;
                        *param_7 = iVar17;
                        fVar27 = fVar30;
                        uVar29 = (int)((ulonglong)uVar28 >> 0x20);
                      }
                    }
                  }
                }
              }
              else if (param_2 == 3) {
                bVar26 = (*(byte *)(lVar10 * 0xa0 + 0x50 + lVar23) & 0x40) == 0;
                goto LAB_1805c9b87;
              }
LAB_1805c9e29:
              lVar23 = plVar24[0x1a];
              iVar17 = iVar17 + 1;
              lVar10 = lVar10 + 1;
            } while (iVar17 < (int)((plVar24[0x1b] - lVar23) / 0xa0));
          }
        }
      }
      lVar22 = lVar22 + -1;
      uVar9 = (int)uStack_c0 - 1;
      uStack_c0 = (ulonglong)uVar9;
    } while (-1 < (int)uVar9);
  }
FUN_1805c9ef1:
  return CONCAT44(uVar29,fVar27);
code_r0x0001805c9a95:
  iVar20 = iVar20 + 1;
  pbVar14 = pbVar14 + 0xa0;
  if ((ulonglong)(lVar16 - lVar12) <= (ulonglong)(longlong)iVar20) goto LAB_1805c9aa7;
  goto LAB_1805c9a90;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1805c9641(void)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  longlong in_RAX;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  uint *puVar11;
  byte *pbVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int unaff_ESI;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *unaff_R15;
  bool bVar23;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  char cStack0000000000000040;
  char cStack0000000000000041;
  char cStack0000000000000042;
  int iStack0000000000000044;
  int in_stack_00000048;
  uint uStack000000000000004c;
  undefined4 in_stack_00000050;
  ulonglong uStack0000000000000058;
  longlong lStack0000000000000060;
  longlong lStack0000000000000068;
  int in_stack_00000128;
  undefined1 in_stack_00000138;
  undefined4 *in_stack_00000148;
  int *in_stack_00000150;
  
  lVar20 = *(longlong *)(in_RAX + 0x8f8);
  lVar21 = *(longlong *)(lVar20 + 0x9f0);
  uStack000000000000004c = *(uint *)(in_RAX + 0x564) >> 0x1f ^ 1;
  cStack0000000000000042 = lVar21 != 0;
  if ((lVar21 == 0) ||
     ((*(uint *)((longlong)*(int *)(lVar21 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar21 + 0xd0)) >>
       0x1c & 1) != 0)) {
    cStack0000000000000041 = '\0';
  }
  else {
    cStack0000000000000041 = '\x01';
  }
  if ((lVar21 == 0) || (cStack0000000000000041 != '\0')) {
    cStack0000000000000040 = '\0';
  }
  else {
    cStack0000000000000040 = '\x01';
  }
  if ((lVar21 == 0) || (cStack0000000000000040 == '\0')) {
    lVar21 = 0;
    do {
      if ((bool)cStack0000000000000042 == false) {
        iVar18 = 0;
        lVar10 = *(longlong *)(lVar20 + 0xe0) - *(longlong *)(lVar20 + 0xd8);
        lVar8 = lVar10 >> 0x3f;
        lVar10 = lVar10 / 0xa0 + lVar8;
        if (lVar10 != lVar8) {
          puVar11 = (uint *)(*(longlong *)(lVar20 + 0xd8) + 0x58);
          do {
            if ((*puVar11 & 0x80000) != 0) {
              cStack0000000000000042 = true;
              if (cStack0000000000000040 == '\0') goto LAB_1805c977e;
              goto LAB_1805c97fa;
            }
            iVar18 = iVar18 + 1;
            puVar11 = puVar11 + 0x28;
          } while ((ulonglong)(longlong)iVar18 < (ulonglong)(lVar10 - lVar8));
        }
      }
      if (cStack0000000000000040 == '\0') {
LAB_1805c977e:
        iVar18 = 0;
        lVar10 = *(longlong *)(lVar20 + 0xe0) - *(longlong *)(lVar20 + 0xd8);
        lVar8 = lVar10 >> 0x3f;
        lVar10 = lVar10 / 0xa0 + lVar8;
        if (lVar10 != lVar8) {
          puVar11 = (uint *)(*(longlong *)(lVar20 + 0xd8) + 0x50);
          do {
            if ((*puVar11 >> 0x1c & 1) != 0) {
              cStack0000000000000040 = '\x01';
              if ((bool)cStack0000000000000042 != false) goto LAB_1805c97fa;
              break;
            }
            iVar18 = iVar18 + 1;
            puVar11 = puVar11 + 0x28;
          } while ((ulonglong)(longlong)iVar18 < (ulonglong)(lVar10 - lVar8));
        }
      }
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x1f8;
    } while (lVar21 < 5);
  }
LAB_1805c97fa:
  lVar20 = 4;
  fVar27 = 0.0;
  uVar28 = 0;
  uStack0000000000000058 = 4;
  uVar17 = uStack000000000000004c;
  do {
    cVar6 = cStack0000000000000040;
    lStack0000000000000060 = lVar20 * 0x1f8;
    lStack0000000000000068 = *(longlong *)(*unaff_R15 + 0x8f8);
    plVar22 = (longlong *)(lStack0000000000000068 + 8 + lStack0000000000000060);
    if (0 < (int)plVar22[6]) {
      lVar21 = plVar22[0x1a];
      uVar1 = *(ulonglong *)((longlong)(int)plVar22[0x1e] * 0xa0 + 0x50 + lVar21);
      uVar7 = (uint)uVar1;
      if (((((uVar1 >> 9 & 1) == 0) || (0 < (short)plVar22[1])) &&
          ((cVar5 = func_0x000180534fb0(plVar22), cVar5 == '\0' || (0 < (short)plVar22[1])))) &&
         ((uVar7 & 0x103) != 0x100)) {
        bVar4 = false;
        if (cVar6 != '\0') {
          iVar19 = 0;
          iVar18 = (int)((plVar22[0x1b] - lVar21) / 0xa0);
          if (0 < iVar18) {
            lVar8 = 0;
            do {
              if ((*(byte *)(lVar21 + 0x50 + lVar8) & 0x10) == 0) {
                bVar4 = true;
                break;
              }
              iVar19 = iVar19 + 1;
              lVar8 = lVar8 + 0xa0;
            } while (iVar19 < iVar18);
          }
        }
        iVar15 = 0;
        lVar8 = 0;
        iVar19 = (int)(plVar22[0x1b] - lVar21 >> 0x3f);
        iVar18 = (int)((plVar22[0x1b] - lVar21) / 0xa0) + iVar19;
        fVar24 = extraout_XMM0_Da;
        if (iVar18 != iVar19 && -1 < iVar18 - iVar19) {
          do {
            if (unaff_ESI == 1) {
              unaff_ESI = in_stack_00000128;
              if ((*(byte *)(lVar8 * 0xa0 + 0x50 + lVar21) & 0x41) == 1) {
                bVar23 = (~(byte)(*(uint *)(lVar8 * 0xa0 + 0x58 + lVar21) >> 0x13) & 1) == 0;
                goto LAB_1805c9b87;
              }
            }
            else if (unaff_ESI == 2) {
              lVar10 = lVar8 * 0xa0;
              unaff_ESI = in_stack_00000128;
              if ((*(byte *)(lVar10 + 0x50 + lVar21) >> 1 & 1) != 0) {
                bVar23 = false;
                if ((*(uint *)(lVar10 + 0x58 + lVar21) & 0x2000000) == 0) {
                  lVar14 = *unaff_R15;
                  if ((*(longlong **)(lVar14 + 0x628) == plVar22) &&
                     (*(int *)(lVar14 + 0x644) == iVar15)) {
                    iVar19 = *(int *)(lVar14 + 0x638);
                    iVar18 = *(int *)(lVar14 + 0x63c);
                  }
                  else {
                    in_stack_00000050 = 0xffffffff;
                    in_stack_00000048 = -1;
                    iStack0000000000000044 = -1;
                    fVar24 = (float)FUN_18050e440(lVar14,plVar22,&stack0x00000048,
                                                  (longlong)&stack0x00000040 + 4,&stack0x00000050);
                    lVar21 = plVar22[0x1a];
                    iVar19 = in_stack_00000048;
                    iVar18 = iStack0000000000000044;
                  }
                  uVar1 = *(ulonglong *)(lVar10 + 0x50 + lVar21);
                  if ((((((uVar1 >> 8 & 1) == 0) && (1 < iVar18)) && (*plVar22 != 0)) &&
                      (0 < *(short *)(*plVar22 + 8))) ||
                     ((0 < iVar19 &&
                      (((*(int *)(*unaff_R15 + 0x564) < 0 ||
                        ((*(uint *)(*unaff_R15 + 0x56c) & 0x2000000) != 0)) ||
                       (lVar21 = plVar22[0x1a], (uVar1 >> 0x12 & 1) == 0)))))) {
                    cVar6 = func_0x000180507950(plVar22);
                    fVar24 = extraout_XMM0_Da_00;
                    if (cVar6 != '\0') {
                      iVar18 = 0;
                      lVar10 = plVar22[0x1b] - lVar21 >> 0x3f;
                      lVar14 = (plVar22[0x1b] - lVar21) / 0xa0 + lVar10;
                      if (lVar14 != lVar10) {
                        pbVar12 = (byte *)(lVar21 + 0x50);
LAB_1805c9a90:
                        if ((*pbVar12 & 1) == 0) goto code_r0x0001805c9a95;
                        if (iVar19 < 2) {
                          lVar10 = 0;
                          lVar21 = 0;
                          do {
                            if (((lVar10 != lVar20) &&
                                (lVar14 = *(longlong *)(*unaff_R15 + 0x8f8),
                                0 < *(int *)(lVar14 + 0x38 + lVar21))) &&
                               ((lVar2 = *(longlong *)(lVar14 + 0xd8 + lVar21),
                                (*(uint *)((longlong)*(int *)(lVar14 + 0xf8 + lVar21) * 0xa0 + 0x50
                                          + lVar2) >> 9 & 1) == 0 ||
                                (0 < *(short *)(lVar14 + 0x10 + lVar21))))) {
                              lVar13 = *(longlong *)(lVar14 + 0xe0 + lVar21) - lVar2;
                              iVar18 = 0;
                              lVar14 = lVar13 >> 0x3f;
                              lVar13 = lVar13 / 0xa0 + lVar14;
                              if (lVar13 != lVar14) {
                                pbVar12 = (byte *)(lVar2 + 0x50);
                                do {
                                  if ((*pbVar12 & 1) != 0) goto LAB_1805c9aa7;
                                  iVar18 = iVar18 + 1;
                                  pbVar12 = pbVar12 + 0xa0;
                                } while ((ulonglong)(longlong)iVar18 < (ulonglong)(lVar13 - lVar14))
                                ;
                              }
                            }
                            lVar10 = lVar10 + 1;
                            lVar21 = lVar21 + 0x1f8;
                          } while (lVar21 < 0x9d8);
                          bVar23 = true;
                          goto LAB_1805c9b87;
                        }
                      }
                    }
LAB_1805c9aa7:
                    bVar23 = true;
                  }
                }
                bVar23 = !bVar23;
LAB_1805c9b87:
                lVar21 = lVar8 * 0xa0;
                unaff_ESI = in_stack_00000128;
                if (!bVar23) {
                  cVar6 = (char)uVar17;
                  if (cStack0000000000000042 == '\0') {
LAB_1805c9bec:
                    iVar18 = *(int *)(lVar21 + 0x5c + plVar22[0x1a]);
                    bVar16 = *(byte *)((longlong)*(int *)(lVar21 + 100 + plVar22[0x1a]) * 0x170 +
                                       0x140 + _DAT_180c95ff0);
                    bVar9 = bVar16;
                    if ((iVar18 == 0xf) && ((*(uint *)(*unaff_R15 + 0x56c) & 0x1000000) != 0)) {
                      bVar9 = bVar16 & 0xfd;
                    }
                    if (cVar6 == '\0') {
                      bVar3 = bVar9 & 1;
                    }
                    else {
                      bVar3 = bVar9 & 2;
                    }
                    if ((bVar3 != 0) || ((bVar9 & 4) != 0)) goto LAB_1805c9e29;
                  }
                  else {
                    iVar18 = *(int *)(lVar21 + 0x5c + plVar22[0x1a]);
                    bVar16 = *(byte *)((longlong)*(int *)(lVar21 + 100 + plVar22[0x1a]) * 0x170 +
                                       0x140 + _DAT_180c95ff0);
                    bVar9 = bVar16;
                    if ((iVar18 == 0xf) && ((*(uint *)(*unaff_R15 + 0x56c) & 0x1000000) != 0)) {
                      bVar9 = bVar16 & 0xfd;
                    }
                    if (cVar6 == '\0') {
                      bVar3 = bVar9 & 1;
                    }
                    else {
                      bVar3 = bVar9 & 2;
                    }
                    if ((bVar3 != 0) || ((bVar9 & 8) != 0)) goto LAB_1805c9bec;
                  }
                  if ((cVar6 == '\0') ||
                     (((iVar18 == 0xf && ((*(uint *)(*unaff_R15 + 0x56c) & 0x1000000) != 0)) ||
                      ((~bVar16 & 2) != 0)))) {
                    if (in_stack_00000148 == (undefined4 *)0x0) {
                      fVar27 = 1.0;
                      uVar28 = 0;
                      goto LAB_1805c9e96;
                    }
                    if ((*(uint *)(unaff_R15 + 2) & 0x20) == 0) {
                      unaff_R15[0x15] =
                           *(longlong *)(*(longlong *)(*(longlong *)unaff_R15[1] + 0x8f8) + 0x9e8);
                      *(uint *)(unaff_R15 + 2) = *(uint *)(unaff_R15 + 2) | 0x20;
                    }
                    uVar25 = FUN_1805ca260(fVar24,plVar22,iVar15,iVar18,in_stack_00000138);
                    fVar26 = (float)uVar25;
                    lVar10 = plVar22[0x1a];
                    bVar16 = *(byte *)(lVar21 + 0x50 + lVar10) >> 4 & 1;
                    fVar24 = fVar26;
                    if ((bVar16 == 0) || ((!bVar4 && (cStack0000000000000041 == '\0')))) {
                      if ((bVar16 != 0) && (cStack0000000000000041 != '\0')) {
                        if ((*(byte *)(unaff_R15 + 2) & 0x10) == 0) {
                          fVar24 = (float)FUN_1805d3770(unaff_R15 + 1);
                          lVar10 = *(longlong *)
                                    (lStack0000000000000060 + 0xd8 + lStack0000000000000068);
                        }
                        if (7.0 < *(float *)((longlong)unaff_R15 + 0xa4)) goto LAB_1805c9def;
                      }
                      if (((cStack0000000000000040 != '\0') &&
                          ((*(uint *)(lVar21 + 0x50 + lVar10) >> 0x17 & 1) != 0)) ||
                         (((*(uint *)((longlong)unaff_R15 + 0x209c) >> 2 & 1) != 0 &&
                          (((bVar16 != 0 && (cStack0000000000000040 != '\0')) ||
                           ((*(byte *)((longlong)*(int *)(lVar21 + 100 + lVar10) * 0x170 + 0x140 +
                                      _DAT_180c95ff0) & 0x10) != 0)))))) goto LAB_1805c9def;
                    }
                    else {
LAB_1805c9def:
                      fVar26 = fVar26 * 1e-06;
                    }
                    uVar17 = uStack000000000000004c;
                    if (fVar27 < fVar26) {
                      *in_stack_00000148 = (int)uStack0000000000000058;
                      *in_stack_00000150 = iVar15;
                      fVar27 = fVar26;
                      uVar28 = (int)((ulonglong)uVar25 >> 0x20);
                    }
                  }
                }
              }
            }
            else if (unaff_ESI == 3) {
              bVar23 = (*(byte *)(lVar8 * 0xa0 + 0x50 + lVar21) & 0x40) == 0;
              goto LAB_1805c9b87;
            }
LAB_1805c9e29:
            lVar21 = plVar22[0x1a];
            iVar15 = iVar15 + 1;
            lVar8 = lVar8 + 1;
          } while (iVar15 < (int)((plVar22[0x1b] - lVar21) / 0xa0));
        }
      }
    }
    lVar20 = lVar20 + -1;
    uVar7 = (int)uStack0000000000000058 - 1;
    uStack0000000000000058 = (ulonglong)uVar7;
  } while (-1 < (int)uVar7);
LAB_1805c9e96:
  return CONCAT44(uVar28,fVar27);
code_r0x0001805c9a95:
  iVar18 = iVar18 + 1;
  pbVar12 = pbVar12 + 0xa0;
  if ((ulonglong)(lVar14 - lVar10) <= (ulonglong)(longlong)iVar18) goto LAB_1805c9aa7;
  goto LAB_1805c9a90;
}






