#include "TaleWorlds.Native.Split.h"

// 99_part_03_part017.c - 4 个函数

// 函数: void FUN_1801db810(longlong *param_1,int param_2,int param_3)
void FUN_1801db810(longlong *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  uVar14 = (ulonglong)param_2;
  if (param_2 < param_3) {
    plVar9 = (longlong *)*param_1;
    lVar15 = uVar14 * 4;
    uVar12 = plVar9[1] - *plVar9 >> 3;
    do {
      iVar10 = 0;
      if (uVar12 != 0) {
        lVar6 = *plVar9;
        lVar16 = 0;
        do {
          uVar12 = *(ulonglong *)(lVar6 + lVar16);
          puVar1 = (undefined8 *)param_1[4];
          uVar13 = *(uint *)(*(longlong *)param_1[1] + lVar15);
          iVar11 = (int)(plVar9[1] - lVar6 >> 3) * (int)uVar14 + iVar10;
          uVar2 = *(ulonglong *)param_1[5];
          puVar7 = (undefined8 *)puVar1[2];
          puVar4 = puVar1;
          if (puVar7 == (undefined8 *)0x0) {
LAB_1801db948:
            puVar5 = puVar1;
          }
          else {
            do {
              if (((ulonglong)puVar7[4] < uVar2) ||
                 (((ulonglong)puVar7[4] <= uVar2 &&
                  (((ulonglong)puVar7[5] < uVar12 ||
                   (((ulonglong)puVar7[5] <= uVar12 &&
                    ((*(uint *)(puVar7 + 6) < uVar13 ||
                     ((*(uint *)(puVar7 + 6) <= uVar13 &&
                      (*(ushort *)((longlong)puVar7 + 0x34) < (ushort)*(byte *)param_1[2])))))))))))
                 ) {
                puVar8 = (undefined8 *)*puVar7;
                bVar3 = true;
              }
              else {
                puVar8 = (undefined8 *)puVar7[1];
                bVar3 = false;
              }
              puVar5 = puVar7;
              if (bVar3) {
                puVar5 = puVar4;
              }
              puVar4 = puVar5;
              puVar7 = puVar8;
            } while (puVar8 != (undefined8 *)0x0);
            if (((puVar5 == puVar1) || (uVar2 < (ulonglong)puVar5[4])) ||
               ((uVar2 <= (ulonglong)puVar5[4] &&
                ((uVar12 < (ulonglong)puVar5[5] ||
                 ((uVar12 <= (ulonglong)puVar5[5] &&
                  ((uVar13 < *(uint *)(puVar5 + 6) ||
                   ((uVar13 <= *(uint *)(puVar5 + 6) &&
                    ((ushort)*(byte *)param_1[2] < *(ushort *)((longlong)puVar5 + 0x34)))))))))))))
            goto LAB_1801db948;
          }
          iVar10 = iVar10 + 1;
          lVar16 = lVar16 + 8;
          *(bool *)((longlong)iVar11 + *(longlong *)param_1[3]) = puVar5 == puVar1;
          plVar9 = (longlong *)*param_1;
          lVar6 = *plVar9;
          uVar12 = plVar9[1] - lVar6 >> 3;
        } while ((ulonglong)(longlong)iVar10 < uVar12);
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      lVar15 = lVar15 + 4;
    } while ((int)uVar13 < param_3);
  }
  return;
}






// 函数: void FUN_1801db831(undefined8 param_1,undefined8 param_2,int param_3)
void FUN_1801db831(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong in_RAX;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 unaff_RBX;
  int iVar9;
  undefined8 unaff_RBP;
  int iVar10;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar11;
  longlong *in_R10;
  uint uVar12;
  ulonglong unaff_R12;
  undefined8 unaff_R13;
  longlong lVar13;
  undefined8 *unaff_R14;
  undefined8 unaff_R15;
  longlong lVar14;
  int in_stack_00000070;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + 0x20) = unaff_RSI;
  lVar6 = in_R10[1];
  lVar14 = *in_R10;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R13;
  lVar13 = unaff_R12 * 4;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R15;
  uVar11 = lVar6 - lVar14 >> 3;
  do {
    iVar9 = 0;
    if (uVar11 != 0) {
      lVar6 = *in_R10;
      lVar14 = 0;
      do {
        uVar11 = *(ulonglong *)(lVar6 + lVar14);
        puVar1 = (undefined8 *)unaff_R14[4];
        uVar12 = *(uint *)(*(longlong *)unaff_R14[1] + lVar13);
        iVar10 = (int)(in_R10[1] - lVar6 >> 3) * (int)unaff_R12 + iVar9;
        uVar2 = *(ulonglong *)unaff_R14[5];
        puVar7 = (undefined8 *)puVar1[2];
        puVar4 = puVar1;
        if (puVar7 == (undefined8 *)0x0) {
LAB_1801db948:
          puVar5 = puVar1;
        }
        else {
          do {
            if (((ulonglong)puVar7[4] < uVar2) ||
               (((ulonglong)puVar7[4] <= uVar2 &&
                (((ulonglong)puVar7[5] < uVar11 ||
                 (((ulonglong)puVar7[5] <= uVar11 &&
                  ((*(uint *)(puVar7 + 6) < uVar12 ||
                   ((*(uint *)(puVar7 + 6) <= uVar12 &&
                    (*(ushort *)((longlong)puVar7 + 0x34) < (ushort)*(byte *)unaff_R14[2])))))))))))
               ) {
              puVar8 = (undefined8 *)*puVar7;
              bVar3 = true;
            }
            else {
              puVar8 = (undefined8 *)puVar7[1];
              bVar3 = false;
            }
            puVar5 = puVar7;
            if (bVar3) {
              puVar5 = puVar4;
            }
            puVar4 = puVar5;
            puVar7 = puVar8;
          } while (puVar8 != (undefined8 *)0x0);
          if (((puVar5 == puVar1) || (uVar2 < (ulonglong)puVar5[4])) ||
             ((uVar2 <= (ulonglong)puVar5[4] &&
              ((uVar11 < (ulonglong)puVar5[5] ||
               ((uVar11 <= (ulonglong)puVar5[5] &&
                ((uVar12 < *(uint *)(puVar5 + 6) ||
                 ((uVar12 <= *(uint *)(puVar5 + 6) &&
                  ((ushort)*(byte *)unaff_R14[2] < *(ushort *)((longlong)puVar5 + 0x34)))))))))))))
          goto LAB_1801db948;
        }
        iVar9 = iVar9 + 1;
        lVar14 = lVar14 + 8;
        *(bool *)((longlong)iVar10 + *(longlong *)unaff_R14[3]) = puVar5 == puVar1;
        in_R10 = (longlong *)*unaff_R14;
        lVar6 = *in_R10;
        uVar11 = in_R10[1] - lVar6 >> 3;
        param_3 = in_stack_00000070;
      } while ((ulonglong)(longlong)iVar9 < uVar11);
    }
    uVar12 = (int)unaff_R12 + 1;
    unaff_R12 = (ulonglong)uVar12;
    lVar13 = lVar13 + 4;
    if (param_3 <= (int)uVar12) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1801db9b8(void)
void FUN_1801db9b8(void)

{
  return;
}






// 函数: void FUN_1801db9d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801db9d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  int iVar6;
  longlong *plVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iStackX_18;
  undefined *puStack_d0;
  byte *pbStack_c8;
  int iStack_c0;
  ulonglong uStack_b8;
  longlong *plStack_b0;
  undefined *puStack_a8;
  longlong lStack_a0;
  undefined4 uStack_90;
  undefined2 uStack_88;
  longlong *plStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  longlong *plStack_50;
  undefined1 auStack_48 [16];
  
  uStack_60 = 0xfffffffffffffffe;
  plStack_80 = (longlong *)0x0;
  lStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 3;
  FUN_1800b7eb0(0,&plStack_80,param_3,param_4,0);
  iStackX_18 = 0;
  uVar4 = lStack_78 - (longlong)plStack_80 >> 3;
  plVar7 = plStack_80;
  if (uVar4 != 0) {
    do {
      uVar14 = 0;
      lVar2 = *plVar7;
      lVar13 = *(longlong *)(lVar2 + 0x38);
      uVar16 = uVar14;
      plStack_b0 = plVar7;
      if (*(longlong *)(lVar2 + 0x40) - lVar13 >> 4 != 0) {
        do {
          if ((*(uint *)(*(longlong *)(uVar14 + lVar13) + 0x100) & 0x400000) != 0) {
            lVar13 = *(longlong *)(*(longlong *)(uVar14 + lVar13) + 0x1b8);
            puStack_d0 = &UNK_180a3c3e0;
            uStack_b8 = 0;
            pbStack_c8 = (byte *)0x0;
            iStack_c0 = 0;
            FUN_1806277c0(&puStack_d0,*(undefined4 *)(lVar13 + 0x20));
            if (0 < *(int *)(lVar13 + 0x20)) {
              puVar8 = &DAT_18098bc73;
              if (*(undefined **)(lVar13 + 0x18) != (undefined *)0x0) {
                puVar8 = *(undefined **)(lVar13 + 0x18);
              }
                    // WARNING: Subroutine does not return
              memcpy(pbStack_c8,puVar8,(longlong)(*(int *)(lVar13 + 0x20) + 1));
            }
            if ((*(longlong *)(lVar13 + 0x18) != 0) && (iStack_c0 = 0, pbStack_c8 != (byte *)0x0)) {
              *pbStack_c8 = 0;
            }
            puVar11 = (undefined8 *)param_2[2];
            puVar9 = param_2;
            if (puVar11 == (undefined8 *)0x0) {
LAB_1801dbba7:
              puVar10 = param_2;
            }
            else {
              do {
                if (iStack_c0 == 0) {
                  bVar3 = false;
                  puVar12 = (undefined8 *)puVar11[1];
                }
                else {
                  if (*(int *)(puVar11 + 6) == 0) {
                    bVar3 = true;
                  }
                  else {
                    pbVar5 = pbStack_c8;
                    do {
                      uVar15 = (uint)pbVar5[puVar11[5] - (longlong)pbStack_c8];
                      iVar6 = *pbVar5 - uVar15;
                      if (*pbVar5 != uVar15) break;
                      pbVar5 = pbVar5 + 1;
                    } while (uVar15 != 0);
                    bVar3 = 0 < iVar6;
                    if (iVar6 < 1) {
                      puVar12 = (undefined8 *)puVar11[1];
                      goto LAB_1801dbb6a;
                    }
                  }
                  puVar12 = (undefined8 *)*puVar11;
                }
LAB_1801dbb6a:
                puVar10 = puVar11;
                if (bVar3) {
                  puVar10 = puVar9;
                }
                puVar9 = puVar10;
                puVar11 = puVar12;
              } while (puVar12 != (undefined8 *)0x0);
              if (puVar10 == param_2) goto LAB_1801dbba7;
              if (*(int *)(puVar10 + 6) != 0) {
                if (iStack_c0 != 0) {
                  pbVar5 = (byte *)puVar10[5];
                  lVar13 = (longlong)pbStack_c8 - (longlong)pbVar5;
                  do {
                    bVar1 = *pbVar5;
                    uVar15 = (uint)pbVar5[lVar13];
                    if (bVar1 != uVar15) break;
                    pbVar5 = pbVar5 + 1;
                  } while (uVar15 != 0);
                  if ((int)(bVar1 - uVar15) < 1) goto LAB_1801dbbaa;
                }
                goto LAB_1801dbba7;
              }
            }
LAB_1801dbbaa:
            if (puVar10 != param_2) goto LAB_1801dbcca;
            FUN_180627ae0(&puStack_a8,&puStack_d0);
            uStack_88 = 0;
            FUN_1801eac40(param_2,auStack_48);
            ppuStack_58 = &puStack_a8;
            puStack_a8 = &UNK_180a3c3e0;
            if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_a0 = 0;
            uStack_90 = 0;
            puStack_a8 = &UNK_18098bcb0;
            puVar11 = (undefined8 *)param_2[2];
            puVar9 = param_2;
            if (puVar11 == (undefined8 *)0x0) {
LAB_1801dbcc7:
              puVar10 = param_2;
            }
            else {
              do {
                if (iStack_c0 == 0) {
                  bVar3 = false;
                  puVar12 = (undefined8 *)puVar11[1];
                }
                else {
                  if (*(int *)(puVar11 + 6) == 0) {
                    bVar3 = true;
                  }
                  else {
                    pbVar5 = pbStack_c8;
                    do {
                      uVar15 = (uint)pbVar5[puVar11[5] - (longlong)pbStack_c8];
                      iVar6 = *pbVar5 - uVar15;
                      if (*pbVar5 != uVar15) break;
                      pbVar5 = pbVar5 + 1;
                    } while (uVar15 != 0);
                    bVar3 = 0 < iVar6;
                    if (iVar6 < 1) {
                      puVar12 = (undefined8 *)puVar11[1];
                      goto LAB_1801dbc87;
                    }
                  }
                  puVar12 = (undefined8 *)*puVar11;
                }
LAB_1801dbc87:
                puVar10 = puVar11;
                if (bVar3) {
                  puVar10 = puVar9;
                }
                puVar9 = puVar10;
                puVar11 = puVar12;
              } while (puVar12 != (undefined8 *)0x0);
              if (puVar10 == param_2) goto LAB_1801dbcc7;
              if (*(int *)(puVar10 + 6) != 0) {
                if (iStack_c0 != 0) {
                  pbVar5 = (byte *)puVar10[5];
                  lVar13 = (longlong)pbStack_c8 - (longlong)pbVar5;
                  do {
                    bVar1 = *pbVar5;
                    uVar15 = (uint)pbVar5[lVar13];
                    if (bVar1 != uVar15) break;
                    pbVar5 = pbVar5 + 1;
                  } while (uVar15 != 0);
                  if ((int)(bVar1 - uVar15) < 1) goto LAB_1801dbcca;
                }
                goto LAB_1801dbcc7;
              }
            }
LAB_1801dbcca:
            plVar7 = *(longlong **)(*(longlong *)(lVar2 + 0x3c8) + 0x20);
            plStack_50 = plVar7;
            if (plVar7 == (longlong *)0x0) {
              *(undefined1 *)((longlong)puVar10 + 0x41) = 1;
            }
            else {
              (**(code **)(*plVar7 + 0x28))(plVar7);
              (**(code **)(*plVar7 + 0x38))(plVar7);
              *(undefined1 *)(puVar10 + 8) = 1;
            }
            puStack_d0 = &UNK_180a3c3e0;
            if (pbStack_c8 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            pbStack_c8 = (byte *)0x0;
            uStack_b8 = uStack_b8 & 0xffffffff00000000;
            puStack_d0 = &UNK_18098bcb0;
          }
          uVar15 = (int)uVar16 + 1;
          uVar14 = uVar14 + 0x10;
          lVar13 = *(longlong *)(lVar2 + 0x38);
          uVar16 = (ulonglong)uVar15;
        } while ((ulonglong)(longlong)(int)uVar15 <
                 (ulonglong)(*(longlong *)(lVar2 + 0x40) - lVar13 >> 4));
      }
      iStackX_18 = iStackX_18 + 1;
      plStack_b0 = plStack_b0 + 1;
      plVar7 = plStack_b0;
    } while ((ulonglong)(longlong)iStackX_18 < uVar4);
  }
  if (plStack_80 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plStack_80);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




