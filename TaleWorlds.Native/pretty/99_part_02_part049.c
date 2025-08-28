#include "TaleWorlds.Native.Split.h"

// 99_part_02_part049.c - 5 个函数

// 函数: void FUN_1801ba720(longlong param_1)
void FUN_1801ba720(longlong param_1)

{
  uint *puVar1;
  undefined1 auStack_d8 [32];
  code *pcStack_b8;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_18;
  
  if (param_1 != 0) {
    uStack_a8 = 0xfffffffffffffffe;
    uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + 0x328);
      *puVar1 = *puVar1 & 0xdfffffff;
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x60) + 0x328);
      *puVar1 = *puVar1 & 0xdfffffff;
    }
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    pcStack_b8 = FUN_180045af0;
    lStack_a0 = param_1;
    FUN_1808fc838(auStack_70,8,2,&SUB_18005d5f0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_180247d00(param_1,&uStack_98);
    FUN_18024e1f0(&uStack_98);
    FUN_18024e1f0(param_1);
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ba850(longlong *param_1,uint param_2,int param_3)
void FUN_1801ba850(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  bool bVar17;
  uint uStackX_10;
  int iStackX_20;
  longlong lStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined2 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined2 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_40;
  
  uStackX_10 = param_2;
  if ((int)param_2 < param_3) {
    do {
      lVar1 = *(longlong *)
               (*(longlong *)
                 ((longlong)*(int *)param_1[1] * 0x908 + *param_1 + 8 +
                 (ulonglong)(uStackX_10 >> 0xc) * 8) +
               (ulonglong)(uStackX_10 + (uStackX_10 >> 0xc) * -0x1000) * 8);
      if ((*(char *)param_1[2] != '\0') || ((*(byte *)(lVar1 + 0x2e8) & 0xb) == 0xb)) {
        bVar17 = false;
        iStackX_20 = 0;
        if (0 < *(int *)param_1[3]) {
          lStack_b8 = 0;
          do {
            iVar10 = 0;
            lVar15 = *(longlong *)(lStack_b8 + param_1[4]);
            if (((*(uint *)(lVar15 + 4) & 0x1000000) == 0) &&
               (cVar2 = FUN_1801ab580(param_1[5],lVar1,*(undefined8 *)param_1[6]), cVar2 != '\0')) {
              lVar13 = param_1[7];
              if (*(longlong *)(lVar1 + 0x260) != 0) {
                FUN_1801bcce0(*(longlong *)(lVar1 + 0x260),lVar1 + 0x70,lVar13,
                              *(undefined4 *)(param_1[5] + 0x8220));
              }
              if ((*(uint *)(lVar15 + 4) & 0x100) == 0) {
                FUN_1802e73b0(lVar1,lVar13 + 0x30,lVar15);
              }
              iStack_a0 = (int)*(float *)(lVar1 + 0x2c0);
              uStack_a4 = 0;
              uStack_9c = 0xff00;
              uStack_98 = 0;
              uStack_90 = 0xffffffffffffffff;
              uStack_88 = 0xffffffff;
              uStack_84 = 0xff;
              uStack_80 = 0xffffffff;
              uStack_a8 = *(undefined4 *)(lVar1 + 0x2b8);
              uStack_78 = (uint)(*(char *)(lVar1 + 0x2e4) == '\0');
              uStack_7c = 0;
              uStack_74 = 0x400;
              uStack_70 = 0;
              uStack_68 = 0;
              uStack_60 = 0;
              uStack_58 = 0;
              uStack_54 = 0;
              uStack_40 = 0;
              FUN_1802e7550(lVar1,lVar15,&uStack_a8);
              plVar6 = *(longlong **)(lVar1 + 0x1c0);
              iVar3 = (int)(*(longlong *)(lVar1 + 0x1c8) - (longlong)plVar6 >> 3);
              if ((!bVar17) && (0 < iVar3)) {
                lVar15 = (longlong)iVar3;
                if ((*(char *)param_1[8] == '\0') && (lVar13 = lVar15, iVar3 = 0, 0 < lVar15)) {
                  do {
                    lVar4 = *plVar6;
                    plVar6 = plVar6 + 1;
                    iVar3 = iVar10 + 1;
                    if ((*(uint *)(lVar4 + 0x2ac) & 0x10000000) != 0) {
                      iVar3 = iVar10;
                    }
                    lVar13 = lVar13 + -1;
                    iVar10 = iVar3;
                  } while (lVar13 != 0);
                }
                puVar12 = (uint *)((longlong)*(int *)param_1[9] * 0x908 + *param_1);
                if (iVar3 == 0) {
                  uVar14 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar14 = *puVar12;
                  *puVar12 = *puVar12 + iVar3;
                  UNLOCK();
                  uVar11 = (ulonglong)(uVar14 >> 0xc);
                  uVar9 = (ulonglong)(iVar3 + -1 + uVar14 >> 0xc);
                  if (uVar11 <= uVar9) {
                    pcVar8 = (char *)((longlong)puVar12 + uVar11 + 0x808);
                    lVar13 = (uVar9 - uVar11) + 1;
                    puVar16 = puVar12 + (ulonglong)(uVar14 >> 0xc) * 2 + 2;
                    do {
                      iVar10 = (int)uVar11;
                      if (*(longlong *)puVar16 == 0) {
                        lVar4 = FUN_18062b420(_DAT_180c8ed18,0x8000,0x25);
                        LOCK();
                        bVar17 = *(longlong *)(puVar12 + (longlong)iVar10 * 2 + 2) == 0;
                        if (bVar17) {
                          *(longlong *)(puVar12 + (longlong)iVar10 * 2 + 2) = lVar4;
                        }
                        UNLOCK();
                        if (bVar17) {
                          LOCK();
                          *(undefined1 *)((longlong)iVar10 + 0x808 + (longlong)puVar12) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900(lVar4);
                          }
                          do {
                          } while (*pcVar8 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar8 != '\0');
                      }
                      uVar11 = (ulonglong)(iVar10 + 1);
                      puVar16 = puVar16 + 2;
                      pcVar8 = pcVar8 + 1;
                      lVar13 = lVar13 + -1;
                    } while (lVar13 != 0);
                  }
                }
                lVar13 = 0;
                if (0 < lVar15) {
                  do {
                    lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x1c0) + lVar13 * 8);
                    if ((*(char *)param_1[8] != '\0') ||
                       ((*(uint *)(lVar4 + 0x2ac) & 0x10000000) == 0)) {
                      uVar5 = uVar14 >> 0xc;
                      uVar7 = uVar14 + uVar5 * -0x1000;
                      uVar14 = uVar14 + 1;
                      *(longlong *)
                       (*(longlong *)
                         ((longlong)*(int *)param_1[9] * 0x908 + *param_1 + 8 + (ulonglong)uVar5 * 8
                         ) + (ulonglong)uVar7 * 8) = lVar4;
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < lVar15);
                }
                bVar17 = true;
              }
            }
            lStack_b8 = lStack_b8 + 8;
            iStackX_20 = iStackX_20 + 1;
          } while (iStackX_20 < *(int *)param_1[3]);
        }
      }
      uStackX_10 = uStackX_10 + 1;
    } while ((int)uStackX_10 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801ba86c(longlong *param_1,uint param_2)
void FUN_1801ba86c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong in_RAX;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 unaff_RBX;
  char *pcVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  int iVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  undefined8 unaff_RDI;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong lVar15;
  undefined8 unaff_R14;
  uint *puVar16;
  longlong lVar17;
  bool bVar18;
  byte bStack0000000000000028;
  undefined4 uStack0000000000000030;
  undefined1 uStack0000000000000038;
  longlong lStack0000000000000040;
  longlong lStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  int iStack0000000000000058;
  undefined2 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined1 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  uint uStack0000000000000080;
  undefined2 uStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined1 uStack00000000000000a4;
  undefined8 in_stack_000000b8;
  uint in_stack_00000108;
  int in_stack_00000110;
  int iStack0000000000000118;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  *(undefined8 *)(in_RAX + -0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x20) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R14;
  do {
    lVar4 = *(longlong *)
             (*(longlong *)
               ((longlong)*(int *)param_1[1] * 0x908 + *param_1 + 8 +
               (ulonglong)(param_2 >> 0xc) * 8) +
             (ulonglong)(param_2 + (param_2 >> 0xc) * -0x1000) * 8);
    if ((*(char *)param_1[2] != '\0') || ((*(byte *)(lVar4 + 0x2e8) & 0xb) == 0xb)) {
      bVar18 = false;
      iStack0000000000000118 = 0;
      if (0 < *(int *)param_1[3]) {
        lStack0000000000000040 = 0;
        lStack0000000000000048 = lVar4;
        do {
          lVar17 = lStack0000000000000040;
          iVar10 = 0;
          lVar15 = *(longlong *)(lStack0000000000000040 + param_1[4]);
          bStack0000000000000028 = 0;
          if (*(int *)(lVar15 + 8) != -1) {
            bStack0000000000000028 = (byte)*(undefined4 *)(lVar15 + 0x18);
          }
          if ((*(uint *)(lVar15 + 4) & 0x1000000) == 0) {
            bStack0000000000000028 = bStack0000000000000028 & 1;
            uStack0000000000000030 = *(undefined4 *)(lVar15 + 0x174);
            uStack0000000000000038 = *(undefined1 *)param_1[2];
            cVar2 = FUN_1801ab580(param_1[5],lVar4,*(undefined8 *)param_1[6]);
            if (cVar2 != '\0') {
              lVar13 = param_1[7];
              if (*(longlong *)(lVar4 + 0x260) != 0) {
                FUN_1801bcce0(*(longlong *)(lVar4 + 0x260),lVar4 + 0x70,lVar13,
                              *(undefined4 *)(param_1[5] + 0x8220));
              }
              if ((*(uint *)(lVar15 + 4) & 0x100) == 0) {
                FUN_1802e73b0(lVar4,lVar13 + 0x30,lVar15);
              }
              iStack0000000000000058 = (int)*(float *)(lVar4 + 0x2c0);
              uStack0000000000000054 = 0;
              uStack000000000000005c = 0xff00;
              in_stack_00000060 = 0;
              in_stack_00000068 = 0xffffffffffffffff;
              uStack0000000000000070 = 0xffffffff;
              uStack0000000000000074 = 0xff;
              uStack0000000000000078 = 0xffffffff;
              uStack0000000000000050 = *(undefined4 *)(lVar4 + 0x2b8);
              uStack0000000000000080 = (uint)(*(char *)(lVar4 + 0x2e4) == '\0');
              uStack000000000000007c = 0;
              uStack0000000000000084 = 0x400;
              in_stack_00000088 = 0;
              in_stack_00000090 = 0;
              in_stack_00000098 = 0;
              uStack00000000000000a0 = 0;
              uStack00000000000000a4 = 0;
              in_stack_000000b8 = 0;
              FUN_1802e7550(lVar4,lVar15,&stack0x00000050);
              plVar6 = *(longlong **)(lVar4 + 0x1c0);
              iVar3 = (int)(*(longlong *)(lVar4 + 0x1c8) - (longlong)plVar6 >> 3);
              if ((!bVar18) && (0 < iVar3)) {
                lVar15 = (longlong)iVar3;
                if ((*(char *)param_1[8] == '\0') && (lVar13 = lVar15, iVar3 = 0, 0 < lVar15)) {
                  do {
                    lVar1 = *plVar6;
                    plVar6 = plVar6 + 1;
                    iVar3 = iVar10 + 1;
                    if ((*(uint *)(lVar1 + 0x2ac) & 0x10000000) != 0) {
                      iVar3 = iVar10;
                    }
                    lVar13 = lVar13 + -1;
                    iVar10 = iVar3;
                  } while (lVar13 != 0);
                }
                puVar12 = (uint *)((longlong)*(int *)param_1[9] * 0x908 + *param_1);
                if (iVar3 == 0) {
                  uVar14 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar14 = *puVar12;
                  *puVar12 = *puVar12 + iVar3;
                  UNLOCK();
                  uVar11 = (ulonglong)(uVar14 >> 0xc);
                  uVar9 = (ulonglong)(iVar3 + -1 + uVar14 >> 0xc);
                  lVar4 = lStack0000000000000048;
                  if (uVar11 <= uVar9) {
                    pcVar8 = (char *)((longlong)puVar12 + uVar11 + 0x808);
                    lVar13 = (uVar9 - uVar11) + 1;
                    puVar16 = puVar12 + (ulonglong)(uVar14 >> 0xc) * 2 + 2;
                    do {
                      iVar10 = (int)uVar11;
                      if (*(longlong *)puVar16 == 0) {
                        lVar4 = FUN_18062b420(_DAT_180c8ed18,0x8000,0x25);
                        LOCK();
                        bVar18 = *(longlong *)(puVar12 + (longlong)iVar10 * 2 + 2) == 0;
                        if (bVar18) {
                          *(longlong *)(puVar12 + (longlong)iVar10 * 2 + 2) = lVar4;
                        }
                        UNLOCK();
                        if (bVar18) {
                          LOCK();
                          *(undefined1 *)((longlong)iVar10 + 0x808 + (longlong)puVar12) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900(lVar4);
                          }
                          do {
                          } while (*pcVar8 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar8 != '\0');
                      }
                      uVar11 = (ulonglong)(iVar10 + 1);
                      puVar16 = puVar16 + 2;
                      pcVar8 = pcVar8 + 1;
                      lVar13 = lVar13 + -1;
                      lVar4 = lStack0000000000000048;
                      lVar17 = lStack0000000000000040;
                    } while (lVar13 != 0);
                  }
                }
                lVar13 = 0;
                if (0 < lVar15) {
                  do {
                    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x1c0) + lVar13 * 8);
                    if ((*(char *)param_1[8] != '\0') ||
                       ((*(uint *)(lVar1 + 0x2ac) & 0x10000000) == 0)) {
                      uVar5 = uVar14 >> 0xc;
                      uVar7 = uVar14 + uVar5 * -0x1000;
                      uVar14 = uVar14 + 1;
                      *(longlong *)
                       (*(longlong *)
                         ((longlong)*(int *)param_1[9] * 0x908 + *param_1 + 8 + (ulonglong)uVar5 * 8
                         ) + (ulonglong)uVar7 * 8) = lVar1;
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < lVar15);
                }
                bVar18 = true;
              }
            }
          }
          lStack0000000000000040 = lVar17 + 8;
          iStack0000000000000118 = iStack0000000000000118 + 1;
        } while (iStack0000000000000118 < *(int *)param_1[3]);
      }
    }
    param_2 = in_stack_00000108 + 1;
    in_stack_00000108 = param_2;
  } while ((int)param_2 < in_stack_00000110);
  return;
}






// 函数: void FUN_1801bac74(void)
void FUN_1801bac74(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bac80(longlong *param_1,uint param_2,int param_3)
void FUN_1801bac80(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  bool bVar17;
  uint uStackX_10;
  int iStackX_20;
  longlong lStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined2 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined2 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_40;
  
  uStackX_10 = param_2;
  if ((int)param_2 < param_3) {
    do {
      lVar1 = *(longlong *)
               (*(longlong *)
                 ((longlong)*(int *)param_1[1] * 0x908 + *param_1 + 8 +
                 (ulonglong)(uStackX_10 >> 0xc) * 8) +
               (ulonglong)(uStackX_10 + (uStackX_10 >> 0xc) * -0x1000) * 8);
      if ((*(char *)param_1[2] != '\0') || ((*(byte *)(lVar1 + 0x2e8) & 0xb) == 0xb)) {
        bVar17 = false;
        iStackX_20 = 0;
        if (0 < *(int *)param_1[3]) {
          lStack_b8 = 0;
          do {
            iVar10 = 0;
            lVar15 = *(longlong *)(lStack_b8 + param_1[4]);
            if (((*(uint *)(lVar15 + 4) & 0x1000000) == 0) &&
               (cVar2 = FUN_1801ab580(param_1[5],lVar1,*(undefined8 *)param_1[6]), cVar2 != '\0')) {
              lVar13 = param_1[7];
              if (*(longlong *)(lVar1 + 0x260) != 0) {
                FUN_1801bcdd0(*(longlong *)(lVar1 + 0x260),lVar1 + 0x70,lVar13,
                              *(undefined4 *)(param_1[5] + 0x8220));
              }
              if ((*(uint *)(lVar15 + 4) & 0x100) == 0) {
                FUN_1802e73b0(lVar1,lVar13 + 0x30,lVar15);
              }
              iStack_a0 = (int)*(float *)(lVar1 + 0x2c0);
              uStack_a4 = 0;
              uStack_9c = 0xff00;
              uStack_98 = 0;
              uStack_90 = 0xffffffffffffffff;
              uStack_88 = 0xffffffff;
              uStack_84 = 0xff;
              uStack_80 = 0xffffffff;
              uStack_a8 = *(undefined4 *)(lVar1 + 0x2b8);
              uStack_78 = (uint)(*(char *)(lVar1 + 0x2e4) == '\0');
              uStack_7c = 0;
              uStack_74 = 0x400;
              uStack_70 = 0;
              uStack_68 = 0;
              uStack_60 = 0;
              uStack_58 = 0;
              uStack_54 = 0;
              uStack_40 = 0;
              FUN_1802e7550(lVar1,lVar15,&uStack_a8);
              plVar6 = *(longlong **)(lVar1 + 0x1c0);
              iVar3 = (int)(*(longlong *)(lVar1 + 0x1c8) - (longlong)plVar6 >> 3);
              if ((!bVar17) && (0 < iVar3)) {
                lVar15 = (longlong)iVar3;
                if ((*(char *)param_1[8] == '\0') && (lVar13 = lVar15, iVar3 = 0, 0 < lVar15)) {
                  do {
                    lVar4 = *plVar6;
                    plVar6 = plVar6 + 1;
                    iVar3 = iVar10 + 1;
                    if ((*(uint *)(lVar4 + 0x2ac) & 0x10000000) != 0) {
                      iVar3 = iVar10;
                    }
                    lVar13 = lVar13 + -1;
                    iVar10 = iVar3;
                  } while (lVar13 != 0);
                }
                puVar12 = (uint *)((longlong)*(int *)param_1[9] * 0x908 + *param_1);
                if (iVar3 == 0) {
                  uVar14 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar14 = *puVar12;
                  *puVar12 = *puVar12 + iVar3;
                  UNLOCK();
                  uVar11 = (ulonglong)(uVar14 >> 0xc);
                  uVar9 = (ulonglong)(iVar3 + -1 + uVar14 >> 0xc);
                  if (uVar11 <= uVar9) {
                    pcVar8 = (char *)((longlong)puVar12 + uVar11 + 0x808);
                    lVar13 = (uVar9 - uVar11) + 1;
                    puVar16 = puVar12 + (ulonglong)(uVar14 >> 0xc) * 2 + 2;
                    do {
                      iVar10 = (int)uVar11;
                      if (*(longlong *)puVar16 == 0) {
                        lVar4 = FUN_18062b420(_DAT_180c8ed18,0x8000,0x25);
                        LOCK();
                        bVar17 = *(longlong *)(puVar12 + (longlong)iVar10 * 2 + 2) == 0;
                        if (bVar17) {
                          *(longlong *)(puVar12 + (longlong)iVar10 * 2 + 2) = lVar4;
                        }
                        UNLOCK();
                        if (bVar17) {
                          LOCK();
                          *(undefined1 *)((longlong)iVar10 + 0x808 + (longlong)puVar12) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900(lVar4);
                          }
                          do {
                          } while (*pcVar8 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar8 != '\0');
                      }
                      uVar11 = (ulonglong)(iVar10 + 1);
                      puVar16 = puVar16 + 2;
                      pcVar8 = pcVar8 + 1;
                      lVar13 = lVar13 + -1;
                    } while (lVar13 != 0);
                  }
                }
                lVar13 = 0;
                if (0 < lVar15) {
                  do {
                    lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x1c0) + lVar13 * 8);
                    if ((*(char *)param_1[8] != '\0') ||
                       ((*(uint *)(lVar4 + 0x2ac) & 0x10000000) == 0)) {
                      uVar5 = uVar14 >> 0xc;
                      uVar7 = uVar14 + uVar5 * -0x1000;
                      uVar14 = uVar14 + 1;
                      *(longlong *)
                       (*(longlong *)
                         ((longlong)*(int *)param_1[9] * 0x908 + *param_1 + 8 + (ulonglong)uVar5 * 8
                         ) + (ulonglong)uVar7 * 8) = lVar4;
                    }
                    lVar13 = lVar13 + 1;
                  } while (lVar13 < lVar15);
                }
                bVar17 = true;
              }
            }
            lStack_b8 = lStack_b8 + 8;
            iStackX_20 = iStackX_20 + 1;
          } while (iStackX_20 < *(int *)param_1[3]);
        }
      }
      uStackX_10 = uStackX_10 + 1;
    } while ((int)uStackX_10 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




