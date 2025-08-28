#include "TaleWorlds.Native.Split.h"

// 99_part_12_part061.c - 5 个函数

// 函数: void FUN_1807f4270(longlong param_1)
void FUN_1807f4270(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_f8 [32];
  uint *puStack_d8;
  int iStack_d0;
  undefined1 uStack_c8;
  uint uStack_b8;
  ushort auStack_b4 [2];
  ushort auStack_b0 [2];
  short asStack_ac [2];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  ushort auStack_94 [2];
  ulonglong uStack_90;
  uint uStack_88;
  int aiStack_84 [3];
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_90 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))
                    (*(longlong **)(param_1 + 0x170),&uStack_88);
  if (iVar1 == 0) {
    uStack_70 = (ulonglong)uStack_88;
    uVar6 = 0;
    while (iVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),uVar6 & 0xffffffff,0), iVar1 == 0)
    {
      puStack_d8 = &uStack_b8;
      iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&lStack_50);
      if ((iVar1 != 0) || (uStack_b8 != 0x18)) break;
      if ((lStack_50 == 0x11cf668e75b22630) && (lStack_48 == 0x6cce6200aa00d9a6)) {
        puStack_d8 = &uStack_b8;
        iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),aiStack_84);
        if ((iVar1 != 0) || (uStack_b8 != 6)) break;
        lStack_78 = 0x1e;
        uVar9 = 0;
        if (0 < aiStack_84[0]) {
          do {
            iVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),(int)uVar6 + (int)lStack_78,0);
            if (iVar1 != 0) goto FUN_1807f4c16;
            puStack_d8 = &uStack_b8;
            iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&lStack_68);
            if ((iVar1 != 0) || (uStack_b8 != 0x18)) goto FUN_1807f4c16;
            if ((lStack_68 == 0x11cf668e75b22633) && (lStack_60 == 0x6cce6200aa00d9a6)) {
              puStack_d8 = &uStack_b8;
              uStack_a8 = 0;
              uStack_a4 = 0;
              uStack_a0 = 0;
              uStack_9c = 0;
              uStack_98 = 0;
              iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&uStack_a8,2);
              if ((iVar1 != 0) || (uStack_b8 != 1)) goto FUN_1807f4c16;
              puStack_d8 = &uStack_b8;
              iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&uStack_a4,2);
              if ((iVar1 != 0) || (uStack_b8 != 1)) goto FUN_1807f4c16;
              puStack_d8 = &uStack_b8;
              iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&uStack_a0,2);
              if ((iVar1 != 0) || (uStack_b8 != 1)) goto FUN_1807f4c16;
              puStack_d8 = &uStack_b8;
              iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&uStack_9c,2);
              if ((iVar1 != 0) || (uStack_b8 != 1)) goto FUN_1807f4c16;
              puStack_d8 = &uStack_b8;
              iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&uStack_98);
              if ((iVar1 != 0) || (uStack_b8 != 1)) goto FUN_1807f4c16;
              if (uStack_a8 != 0) {
                puStack_d8 = &uStack_b8;
                iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (uStack_b8 != uStack_a8)) goto FUN_1807f4c16;
                uVar4 = uStack_a8;
                if ((int)uStack_a8 < 0) {
                  uVar4 = uStack_a8 + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = uStack_a8 - 2;
                }
                uStack_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = FUN_180772fe0(param_1,6,&UNK_18095b4f8,uVar7);
                if (iVar1 != 0) goto FUN_1807f4c16;
              }
              if (uStack_a4 != 0) {
                puStack_d8 = &uStack_b8;
                iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (uStack_b8 != uStack_a4)) goto FUN_1807f4c16;
                uVar4 = uStack_a4;
                if ((int)uStack_a4 < 0) {
                  uVar4 = uStack_a4 + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = uStack_a4 - 2;
                }
                uStack_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = FUN_180772fe0(param_1,6,&UNK_18097dfb4,uVar7);
                if (iVar1 != 0) goto FUN_1807f4c16;
              }
              if (uStack_a0 != 0) {
                puStack_d8 = &uStack_b8;
                iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (uStack_b8 != uStack_a0)) goto FUN_1807f4c16;
                uVar4 = uStack_a0;
                if ((int)uStack_a0 < 0) {
                  uVar4 = uStack_a0 + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = uStack_a0 - 2;
                }
                uStack_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = FUN_180772fe0(param_1,6,&UNK_18097dfc0,uVar7);
                if (iVar1 != 0) goto FUN_1807f4c16;
              }
              if (uStack_9c != 0) {
                puStack_d8 = &uStack_b8;
                iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (uStack_b8 != uStack_9c)) goto FUN_1807f4c16;
                uVar4 = uStack_9c;
                if ((int)uStack_9c < 0) {
                  uVar4 = uStack_9c + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = uStack_9c - 2;
                }
                uStack_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = FUN_180772fe0(param_1,6,&UNK_18097dfd0,uVar7);
                if (iVar1 != 0) goto FUN_1807f4c16;
              }
              uVar6 = uStack_90;
              if (uStack_98 != 0) {
                puStack_d8 = &uStack_b8;
                iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),0x180c312d0,1);
                if ((iVar1 != 0) || (uStack_b8 != uStack_98)) goto FUN_1807f4c16;
                uVar4 = uStack_98;
                if ((int)uStack_98 < 0) {
                  uVar4 = uStack_98 + 1;
                }
                iVar1 = ((int)uVar4 >> 1) + -1;
                iVar2 = wcstombs(0x180c322e0,0x180c312d0,0x1000);
                if (iVar2 == iVar1) {
                  iVar5 = ((int)uVar4 >> 1) + -1;
                }
                else {
                  iVar5 = uStack_98 - 2;
                }
                uStack_c8 = 0;
                uVar7 = 0x180c322e0;
                iStack_d0 = (iVar2 != iVar1) + 3;
                puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,iVar5);
                if (iVar2 != iVar1) {
                  uVar7 = 0x180c312d0;
                }
                iVar1 = FUN_180772fe0(param_1,6,&UNK_18097dfdc,uVar7);
                uVar6 = uStack_90;
                if (iVar1 != 0) goto FUN_1807f4c16;
              }
            }
            else if ((lStack_68 == 0x11d2e307d2d0a440) && (lStack_60 == 0x50a85ec9a000f097)) {
              puStack_d8 = &uStack_b8;
              iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),asStack_ac);
              if ((iVar1 != 0) || (uStack_b8 != 1)) goto FUN_1807f4c16;
              if (asStack_ac[0] != 0) {
                puStack_d8 = &uStack_b8;
                iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_b0,2);
                if ((iVar1 == 0) && (uStack_b8 == 1)) {
                  puStack_d8 = &uStack_b8;
                  iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),0x180c34300,1,auStack_b0[0]
                                       );
                  if ((iVar1 == 0) && (uStack_b8 == auStack_b0[0])) {
                    wcstombs(0x180c332f0,0x180c34300,0x1000);
                    puStack_d8 = &uStack_b8;
                    iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_94,2);
                    if ((iVar1 == 0) && (uStack_b8 == 1)) {
                      puStack_d8 = &uStack_b8;
                      iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_b4,2);
                      if ((iVar1 == 0) && (uStack_b8 == 1)) {
                        puStack_d8 = (uint *)((ulonglong)puStack_d8 & 0xffffffff00000000);
                        lVar3 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),auStack_b4[0],
                                              &UNK_18097df40,0x42d);
                        if (lVar3 != 0) {
                          puStack_d8 = &uStack_b8;
                          iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),lVar3,1,
                                                auStack_b4[0]);
                          if ((iVar1 == 0) &&
                             (uVar4 = (uint)auStack_b4[0], uStack_b8 == auStack_b4[0])) {
                            if (auStack_94[0] == 0) {
                              iVar1 = (auStack_b4[0] >> 1) - 1;
                              iVar2 = wcstombs(0x180c34300,lVar3,0x1000);
                              uStack_c8 = 0;
                              lVar8 = 0x180c34300;
                              if (iVar2 != iVar1) {
                                lVar8 = lVar3;
                              }
                              iStack_d0 = (iVar2 != iVar1) + 3;
                              iVar5 = (auStack_b4[0] >> 1) - 1;
                              if (iVar2 != iVar1) {
                                iVar5 = uVar4 - 2;
                              }
                              puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,iVar5);
                              iVar1 = FUN_180772fe0(param_1,6,0x180c332f0,lVar8);
                            }
                            else {
                              uStack_c8 = 0;
                              if (auStack_94[0] == 2) {
                                iStack_d0 = 0;
                                puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,uVar4);
                                iVar1 = FUN_180772fe0(param_1,6,0x180c332f0,lVar3);
                              }
                              else if (auStack_94[0] - 3 < 3) {
                                iStack_d0 = 1;
                                puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,uVar4);
                                iVar1 = FUN_180772fe0(param_1,6,0x180c332f0,lVar3);
                              }
                              else {
                                iStack_d0 = 3;
                                puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,uVar4);
                                iVar1 = FUN_180772fe0(param_1,6,0x180c332f0,lVar3);
                              }
                            }
                            if (iVar1 == 0) {
                              uVar6 = (ulonglong)puStack_d8 >> 8;
                              puStack_d8 = (uint *)CONCAT71((int7)uVar6,1);
                    // WARNING: Subroutine does not return
                              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar3,
                                            &UNK_18097df40,0x46a);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto FUN_1807f4c16;
              }
            }
            uVar4 = (int)uVar9 + 1;
            lStack_78 = lStack_78 + lStack_58;
            uVar9 = (ulonglong)uVar4;
          } while ((int)uVar4 < aiStack_84[0]);
        }
      }
      uVar6 = uVar6 + lStack_40;
      uStack_90 = uVar6;
      if ((uStack_70 <= uVar6) || (lStack_40 == 0)) break;
    }
  }
FUN_1807f4c16:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f42bc(ulonglong param_1)
void FUN_1807f42bc(ulonglong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 in_RAX;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  int unaff_R14D;
  
  *(undefined8 *)(unaff_RBP + -0x11) = in_RAX;
  do {
    iVar3 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),param_1 & 0xffffffff,0);
    if (((iVar3 != 0) ||
        (iVar3 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + 0xf,1,0x18,
                               unaff_RBP + -0x59), iVar3 != 0)) ||
       (*(int *)(unaff_RBP + -0x59) != 0x18)) goto LAB_1807f4bf6;
    if ((*(longlong *)(unaff_RBP + 0xf) == 0x11cf668e75b22630) &&
       (*(longlong *)(unaff_RBP + 0x17) == 0x6cce6200aa00d9a6)) {
      iVar3 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x25,1,6,
                            unaff_RBP + -0x59);
      if ((iVar3 != 0) || (*(int *)(unaff_RBP + -0x59) != 6)) {
LAB_1807f4bf6:
                    // WARNING: Subroutine does not return
        FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
      }
      lVar5 = 0x1e;
      *(undefined8 *)(unaff_RBP + -0x19) = 0x1e;
      iVar3 = unaff_R14D;
      if (0 < *(int *)(unaff_RBP + -0x25)) {
        do {
          iVar4 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),(int)unaff_RDI + (int)lVar5,0);
          if (((iVar4 != 0) ||
              (iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -9,1,0x18,
                                     unaff_RBP + -0x59), iVar4 != 0)) ||
             (*(int *)(unaff_RBP + -0x59) != 0x18)) goto LAB_1807f4bf6;
          if ((*(longlong *)(unaff_RBP + -9) == 0x11cf668e75b22633) &&
             (*(longlong *)(unaff_RBP + -1) == 0x6cce6200aa00d9a6)) {
            uVar2 = *(undefined8 *)(unaff_RBX + 0x170);
            *(int *)(unaff_RBP + -0x49) = unaff_R14D;
            *(int *)(unaff_RBP + -0x45) = unaff_R14D;
            *(int *)(unaff_RBP + -0x41) = unaff_R14D;
            *(int *)(unaff_RBP + -0x3d) = unaff_R14D;
            *(int *)(unaff_RBP + -0x39) = unaff_R14D;
            iVar4 = FUN_180769ed0(uVar2,unaff_RBP + -0x49,2,1,unaff_RBP + -0x59);
            if ((((((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != 1)) ||
                  (iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x45,2,1,
                                         unaff_RBP + -0x59), iVar4 != 0)) ||
                 ((*(int *)(unaff_RBP + -0x59) != 1 ||
                  (iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x41,2,1,
                                         unaff_RBP + -0x59), iVar4 != 0)))) ||
                (((*(int *)(unaff_RBP + -0x59) != 1 ||
                  ((iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x3d,2,1,
                                          unaff_RBP + -0x59), iVar4 != 0 ||
                   (*(int *)(unaff_RBP + -0x59) != 1)))) ||
                 (iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x39,2,1,
                                        unaff_RBP + -0x59), iVar4 != 0)))) ||
               (*(int *)(unaff_RBP + -0x59) != 1)) goto LAB_1807f4bf6;
            if (*(int *)(unaff_RBP + -0x49) != 0) {
              iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x49),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x49)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = FUN_180772fe0();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            if (*(int *)(unaff_RBP + -0x45) != 0) {
              iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x45),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x45)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = FUN_180772fe0();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            if (*(int *)(unaff_RBP + -0x41) != 0) {
              iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x41),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x41)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = FUN_180772fe0();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            if (*(int *)(unaff_RBP + -0x3d) != 0) {
              iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x3d),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x3d)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = FUN_180772fe0();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            if (*(int *)(unaff_RBP + -0x39) != 0) {
              iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),0x180c312d0,1,
                                    *(int *)(unaff_RBP + -0x39),unaff_RBP + -0x59);
              if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != *(int *)(unaff_RBP + -0x39)))
              goto LAB_1807f4bf6;
              wcstombs(0x180c322e0,0x180c312d0,0x1000);
              iVar4 = FUN_180772fe0();
              if (iVar4 != 0) goto LAB_1807f4bf6;
            }
            unaff_RDI = *(ulonglong *)(unaff_RBP + -0x31);
          }
          else if ((*(longlong *)(unaff_RBP + -9) == 0x11d2e307d2d0a440) &&
                  (*(longlong *)(unaff_RBP + -1) == 0x50a85ec9a000f097)) {
            iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x4d,2,1,
                                  unaff_RBP + -0x59);
            if ((iVar4 != 0) || (*(int *)(unaff_RBP + -0x59) != 1)) goto LAB_1807f4bf6;
            if ((ushort)unaff_R14D < *(ushort *)(unaff_RBP + -0x4d)) {
              iVar3 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x51,2,1,
                                    unaff_RBP + -0x59);
              if ((((iVar3 == 0) && (*(int *)(unaff_RBP + -0x59) == 1)) &&
                  (iVar3 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),0x180c34300,1,
                                         *(undefined2 *)(unaff_RBP + -0x51),unaff_RBP + -0x59),
                  iVar3 == 0)) &&
                 (*(uint *)(unaff_RBP + -0x59) == (uint)*(ushort *)(unaff_RBP + -0x51))) {
                wcstombs(0x180c332f0,0x180c34300,0x1000);
                iVar3 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x35,2,1,
                                      unaff_RBP + -0x59);
                if ((((iVar3 == 0) && (*(int *)(unaff_RBP + -0x59) == 1)) &&
                    ((iVar3 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x55,2,1
                                            ,unaff_RBP + -0x59), iVar3 == 0 &&
                     ((*(int *)(unaff_RBP + -0x59) == 1 &&
                      (lVar5 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                                             *(undefined2 *)(unaff_RBP + -0x55),&UNK_18097df40,0x42d
                                             ,unaff_R14D), lVar5 != 0)))))) &&
                   ((iVar3 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),lVar5,1,
                                           *(undefined2 *)(unaff_RBP + -0x55),unaff_RBP + -0x59),
                    iVar3 == 0 &&
                    (*(uint *)(unaff_RBP + -0x59) == (uint)*(ushort *)(unaff_RBP + -0x55))))) {
                  uVar1 = *(ushort *)(unaff_RBP + -0x35);
                  if (uVar1 == 0) {
                    wcstombs(0x180c34300,lVar5,0x1000);
                    iVar3 = FUN_180772fe0();
                  }
                  else if (uVar1 == 2) {
                    iVar3 = FUN_180772fe0();
                  }
                  else if (uVar1 - 3 < 3) {
                    iVar3 = FUN_180772fe0();
                  }
                  else {
                    iVar3 = FUN_180772fe0();
                  }
                  if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
                    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar5,&UNK_18097df40,0x46a
                                  ,1);
                  }
                }
              }
              goto LAB_1807f4bf6;
            }
          }
          iVar3 = iVar3 + 1;
          lVar5 = *(longlong *)(unaff_RBP + -0x19) + *(longlong *)(unaff_RBP + 7);
          *(longlong *)(unaff_RBP + -0x19) = lVar5;
        } while (iVar3 < *(int *)(unaff_RBP + -0x25));
      }
    }
    param_1 = unaff_RDI + *(longlong *)(unaff_RBP + 0x1f);
    *(ulonglong *)(unaff_RBP + -0x31) = param_1;
    if ((*(ulonglong *)(unaff_RBP + -0x11) <= param_1) ||
       (unaff_RDI = param_1, *(longlong *)(unaff_RBP + 0x1f) == 0)) goto LAB_1807f4bf6;
  } while( true );
}






// 函数: void FUN_1807f4c16(void)
void FUN_1807f4c16(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807f4c2f(void)
void FUN_1807f4c2f(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f4c40(longlong param_1)
void FUN_1807f4c40(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  int *piStack_68;
  undefined4 uStack_60;
  undefined1 uStack_58;
  int aiStack_48 [2];
  ulonglong auStack_40 [3];
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  undefined1 auStack_20 [8];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  piStack_68 = aiStack_48;
  iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_40,1);
  if ((iVar1 == 0) && (aiStack_48[0] == 0x1e)) {
    iVar1 = func_0x00018076b690(auStack_40);
    if (iVar1 != 0) {
      iVar1 = func_0x00018076b690(auStack_40);
      uStack_58 = 0;
      uStack_60 = 3;
      piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
      FUN_180772fe0(param_1,1,&UNK_18095b4f8,auStack_40);
    }
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_22 = 0;
    piStack_68 = aiStack_48;
    iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_40,1);
    if ((iVar1 == 0) && (aiStack_48[0] == 0x1e)) {
      iVar1 = func_0x00018076b690(auStack_40);
      if (iVar1 != 0) {
        iVar1 = func_0x00018076b690(auStack_40);
        uStack_58 = 0;
        uStack_60 = 3;
        piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
        FUN_180772fe0(param_1,1,&UNK_18097df10,auStack_40);
      }
      auStack_40[0] = 0;
      auStack_40[1] = 0;
      auStack_40[2] = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_22 = 0;
      piStack_68 = aiStack_48;
      iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_40,1);
      if ((iVar1 == 0) && (aiStack_48[0] == 0x1e)) {
        iVar1 = func_0x00018076b690(auStack_40);
        if (iVar1 != 0) {
          iVar1 = func_0x00018076b690(auStack_40);
          uStack_58 = 0;
          uStack_60 = 3;
          piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
          FUN_180772fe0(param_1,1,&UNK_18097df18,auStack_40);
        }
        auStack_40[0] = 0;
        auStack_40[1] = 0;
        auStack_40[2] = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_22 = 0;
        piStack_68 = aiStack_48;
        iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_40,1);
        if ((iVar1 == 0) && (aiStack_48[0] == 4)) {
          iVar1 = func_0x00018076b690(auStack_40);
          if (iVar1 != 0) {
            iVar1 = func_0x00018076b690(auStack_40);
            uStack_58 = 0;
            uStack_60 = 3;
            piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
            FUN_180772fe0(param_1,1,&UNK_18097df20,auStack_40);
          }
          auStack_40[0] = 0;
          auStack_40[1] = 0;
          auStack_40[2] = 0;
          uStack_28 = 0;
          uStack_24 = 0;
          uStack_22 = 0;
          piStack_68 = aiStack_48;
          iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_40,1);
          if ((iVar1 == 0) && (aiStack_48[0] == 0x1e)) {
            iVar1 = func_0x00018076b690(auStack_40);
            if (iVar1 != 0) {
              iVar1 = func_0x00018076b690(auStack_40);
              uStack_58 = 0;
              uStack_60 = 3;
              piStack_68 = (int *)CONCAT44(piStack_68._4_4_,iVar1 + 1);
              FUN_180772fe0(param_1,1,&UNK_18097df28,auStack_40);
            }
            if (((char)uStack_24 == '\0') && (uStack_24._1_1_ != '\0')) {
                    // WARNING: Subroutine does not return
              FUN_18076b390(auStack_20,8,&UNK_1809fd0a0,uStack_24._1_1_);
            }
            auStack_40[0] = 0;
            auStack_40[1] = 0;
            auStack_40[2] = 0;
            uStack_28 = 0;
            uStack_24 = 0;
            uStack_22 = 0;
            piStack_68 = aiStack_48;
            iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_40,1);
            if ((iVar1 == 0) && (aiStack_48[0] == 1)) {
                    // WARNING: Subroutine does not return
              FUN_18076b390(auStack_20,8,&UNK_1809fd0a0,auStack_40[0] & 0xff);
            }
          }
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




