#include "TaleWorlds.Native.Split.h"

// 99_part_11_part049.c - 9 个函数

// 函数: void FUN_1807ad502(undefined8 param_1,int param_2)
void FUN_1807ad502(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  short sVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint uVar9;
  int iVar10;
  uint unaff_R15D;
  ulonglong uVar11;
  
  uVar9 = in_EAX + 4;
  *(int *)(unaff_RBP + -0x39) = param_2;
  iVar4 = FUN_18076a440(param_1,param_2 + 8);
  if (iVar4 != 0) {
LAB_1807ae26f:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f) ^ (ulonglong)&stack0x00000000);
  }
  uVar1 = in_EAX + 0x28;
LAB_1807ad540:
  iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x21,1,8,0);
  if (iVar4 != 0) goto LAB_1807ae26f;
  iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d130,4);
  if (((iVar4 == 0) || (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d138,4), iVar4 == 0)
      ) || (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d140,4), iVar4 == 0))
  goto LAB_1807ae229;
  iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d148,4);
  if (iVar4 == 0) {
    uVar11 = 0;
    iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBX + 0x178,4,1,0);
    if (iVar4 != 0) goto LAB_1807ae26f;
    lVar7 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                          *(int *)(unaff_RBX + 0x178) * 0x128,&UNK_18095d150,0x72,
                          uVar11 & 0xffffffff00000000);
    *(longlong *)(unaff_RBX + 0x180) = lVar7;
joined_r0x0001807ad723:
    if (lVar7 == 0) goto LAB_1807ae26f;
  }
  else {
    iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d1c4);
    if (iVar4 == 0) {
      iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x29,4,1,0);
      if (iVar4 == 0) {
        uVar11 = 0;
        iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBX + 0x188,4,1,0);
        if (iVar4 == 0) {
          uVar11 = uVar11 & 0xffffffff00000000;
          lVar7 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                                *(int *)(unaff_RBX + 0x188) * 0x38,&UNK_18095d150,0x8d,uVar11);
          *(longlong *)(unaff_RBX + 8) = lVar7;
          if (lVar7 != 0) {
            lVar7 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                                  *(int *)(unaff_RBX + 0x188) * 0x128,&UNK_18095d150,0x93,
                                  uVar11 & 0xffffffff00000000);
            *(longlong *)(unaff_RBX + 400) = lVar7;
            goto joined_r0x0001807ad723;
          }
        }
      }
      goto LAB_1807ae26f;
    }
    iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d1cc);
    if (iVar4 == 0) {
      iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x35,1,4,0);
      if ((iVar4 == 0) && (iVar4 = FUN_1807ad4b0(), iVar4 == 0)) {
        iVar4 = func_0x00018076b6b0(unaff_RBP + -0x35,&UNK_18095d1d4,4);
        if (iVar4 == 0) {
          *(int *)(unaff_RBX + 0x18c) = *(int *)(unaff_RBX + 0x18c) + 1;
        }
        else {
          iVar4 = func_0x00018076b6b0(unaff_RBP + -0x35,&UNK_18095d1dc,4);
          if (iVar4 == 0) {
            *(int *)(unaff_RBX + 0x17c) = *(int *)(unaff_RBX + 0x17c) + 1;
          }
          else {
            iVar4 = func_0x00018076b6b0(unaff_RBP + -0x35,&UNK_18095d1e4,4);
            if (iVar4 == 0) {
              *(int *)(unaff_RBX + 0x19c) = *(int *)(unaff_RBX + 0x19c) + 1;
            }
          }
        }
        goto LAB_1807ae229;
      }
      goto LAB_1807ae26f;
    }
    iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d140,4);
    if (iVar4 == 0) {
      iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + 0xf,1,0x10,0);
joined_r0x0001807adb24:
      if (iVar4 != 0) goto LAB_1807ae26f;
    }
    else {
      iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d1ec,4);
      if (iVar4 == 0) {
        uVar11 = 0;
        iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),
                              *(longlong *)(unaff_RBX + 0x180) + 0x100 +
                              (longlong)*(int *)(unaff_RBX + 0x17c) * 0x128,1,0xc,0);
        if (iVar4 == 0) {
          uVar8 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                                *(int *)((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x100 +
                                        *(longlong *)(unaff_RBX + 0x180)) * 0x48,&UNK_18095d150,0xd1
                                ,uVar11 & 0xffffffff00000000);
          *(undefined8 *)
           ((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 + *(longlong *)(unaff_RBX + 0x180)
           ) = uVar8;
          if (*(longlong *)
               ((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
               *(longlong *)(unaff_RBX + 0x180)) != 0) {
            *(undefined4 *)(unaff_RBX + 0x19c) = 0;
            goto LAB_1807ae229;
          }
        }
        goto LAB_1807ae26f;
      }
      iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d1f4,4);
      if (iVar4 == 0) {
        iVar4 = *(int *)(unaff_RBX + 0x17c);
        lVar7 = (ulonglong)*(uint *)(unaff_RBX + 0x19c) * 9;
LAB_1807ad95d:
        iVar10 = 0xc;
        lVar7 = *(longlong *)((longlong)iVar4 * 0x128 + 0x110 + *(longlong *)(unaff_RBX + 0x180)) +
                lVar7 * 8;
LAB_1807ad976:
        iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),lVar7,1,iVar10,0);
        goto joined_r0x0001807adb24;
      }
      iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d1fc,4);
      if (iVar4 == 0) {
        uVar6 = 0x24;
        if (*(uint *)(unaff_RBP + -0x1d) < 0x24) {
          uVar6 = *(undefined4 *)(unaff_RBP + -0x1d);
        }
        iVar4 = func_0x00018076b6b0();
        if (iVar4 != 0) {
          iVar4 = func_0x00018076b6b0();
          if (iVar4 == 0) {
            iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),
                                  (ulonglong)*(uint *)(unaff_RBX + 0x19c) * 0x48 + 0xc +
                                  *(longlong *)
                                   ((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
                                   *(longlong *)(unaff_RBX + 0x180)),1,uVar6,0);
            goto joined_r0x0001807adb24;
          }
          goto LAB_1807ae229;
        }
        iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),
                              *(longlong *)(unaff_RBX + 400) + 0x104 +
                              (longlong)*(int *)(unaff_RBX + 0x18c) * 0x128,1,uVar6,0);
        if (iVar4 != 0) goto LAB_1807ae26f;
        if (*(int *)((longlong)*(int *)(unaff_RBX + 0x18c) * 0x128 + 0x114 +
                    *(longlong *)(unaff_RBX + 400)) != 0) {
          *(undefined4 *)
           ((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0x28 + *(longlong *)(unaff_RBX + 8)) = 2;
          *(undefined4 *)
           ((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0x20 + *(longlong *)(unaff_RBX + 8)) =
               *(undefined4 *)
                ((longlong)*(int *)(unaff_RBX + 0x18c) * 0x128 + 0x120 +
                *(longlong *)(unaff_RBX + 400));
          lVar7 = (longlong)*(int *)(unaff_RBX + 0x18c) * 0x128;
          *(int *)((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0x24 +
                  *(longlong *)(unaff_RBX + 8)) =
               *(int *)(lVar7 + 0x120 + *(longlong *)(unaff_RBX + 400)) + -1 +
               *(int *)(lVar7 + 0x124 + *(longlong *)(unaff_RBX + 400));
        }
      }
      else {
        iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d204,4);
        if (iVar4 == 0) {
          iVar4 = *(int *)(unaff_RBX + 0x17c);
          lVar7 = (ulonglong)*(uint *)(unaff_RBX + 0x19c) * 9 + 6;
          goto LAB_1807ad95d;
        }
        iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d20c,4);
        if (iVar4 == 0) {
          uVar11 = 0;
          iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),unaff_RBP + -0x31,1,8,0);
          if (iVar4 != 0) goto LAB_1807ae26f;
          uVar5 = (uint)*(undefined8 *)(unaff_RBP + -0x31);
          if (8 < uVar5) {
            FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),uVar5 - 8,1);
          }
          iVar4 = *(int *)(unaff_RBP + -0x2d) * 0xc;
          if (*(uint *)((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x100 +
                       *(longlong *)(unaff_RBX + 0x180)) <= *(uint *)(unaff_RBX + 0x19c)) {
            uVar8 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar4,&UNK_18095d150,0x172
                                  ,uVar11 & 0xffffffff00000000);
            *(undefined8 *)
             ((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x120 +
             *(longlong *)(unaff_RBX + 0x180)) = uVar8;
            lVar7 = (longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + *(longlong *)(unaff_RBX + 0x180)
            ;
            if (*(longlong *)(lVar7 + 0x120) != 0) {
              *(undefined4 *)(lVar7 + 0x118) = *(undefined4 *)(unaff_RBP + -0x2d);
              iVar10 = *(int *)(unaff_RBP + -0x2d) * 0xc;
              lVar7 = *(longlong *)
                       ((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x120 +
                       *(longlong *)(unaff_RBX + 0x180));
              goto LAB_1807ad976;
            }
            goto LAB_1807ae26f;
          }
          uVar8 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iVar4,&UNK_18095d150,0x153,
                                uVar11 & 0xffffffff00000000);
          *(undefined8 *)
           (*(longlong *)
             ((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
             *(longlong *)(unaff_RBX + 0x180)) + 0x40 +
           (ulonglong)*(uint *)(unaff_RBX + 0x19c) * 0x48) = uVar8;
          lVar7 = *(longlong *)
                   ((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
                   *(longlong *)(unaff_RBX + 0x180));
          if (*(longlong *)(lVar7 + 0x40 + (ulonglong)*(uint *)(unaff_RBX + 0x19c) * 0x48) == 0)
          goto LAB_1807ae26f;
          *(undefined4 *)(lVar7 + (ulonglong)*(uint *)(unaff_RBX + 0x19c) * 0x48 + 0x3c) =
               *(undefined4 *)(unaff_RBP + -0x2d);
          iVar10 = *(int *)(unaff_RBP + -0x2d) * 0xc;
          lVar7 = *(longlong *)
                   (*(longlong *)
                     ((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
                     *(longlong *)(unaff_RBX + 0x180)) + 0x40 +
                   (ulonglong)*(uint *)(unaff_RBX + 0x19c) * 0x48);
          goto LAB_1807ad976;
        }
        iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d214,4);
        if (iVar4 == 0) {
          uVar8 = *(undefined8 *)(unaff_RBX + 0x170);
          uVar5 = *(uint *)(unaff_RBP + -0x1d);
          if (uVar1 < *(uint *)(unaff_RBP + -0x1d)) {
            uVar5 = uVar1;
          }
          *(undefined8 *)(unaff_RBP + -0x19) = 0;
          *(undefined8 *)(unaff_RBP + -0x11) = 0;
          *(undefined8 *)(unaff_RBP + -9) = 0;
          *(undefined8 *)(unaff_RBP + -1) = 0;
          *(undefined8 *)(unaff_RBP + 7) = 0;
          iVar4 = FUN_180769ed0(uVar8,unaff_RBP + -0x19,1,uVar5,0);
          if ((iVar4 != 0) ||
             ((uVar1 < *(uint *)(unaff_RBP + -0x1d) &&
              (iVar4 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),
                                     *(uint *)(unaff_RBP + -0x1d) - 0x28,1), iVar4 != 0))))
          goto LAB_1807ae26f;
          sVar3 = *(short *)(unaff_RBP + -0xb);
          if (sVar3 == 8) {
            *(undefined4 *)
             ((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(longlong *)(unaff_RBX + 8)) = 1;
          }
          else if (sVar3 == 0x10) {
            *(undefined4 *)
             ((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(longlong *)(unaff_RBX + 8)) = 2;
          }
          else if (sVar3 == 0x18) {
            *(undefined4 *)
             ((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(longlong *)(unaff_RBX + 8)) = 3;
          }
          else if (sVar3 == 0x20) {
            sVar3 = (short)*(undefined8 *)(unaff_RBP + -0x19);
            if (sVar3 == 1) {
              *(undefined4 *)
               ((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(longlong *)(unaff_RBX + 8)) = 4
              ;
            }
            else if (sVar3 == 3) {
              *(undefined4 *)
               ((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(longlong *)(unaff_RBX + 8)) = 5
              ;
            }
          }
          *(uint *)((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0xc +
                   *(longlong *)(unaff_RBX + 8)) = (uint)*(ushort *)(unaff_RBP + -0x17);
          *(undefined4 *)
           ((longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0x10 + *(longlong *)(unaff_RBX + 8)) =
               *(undefined4 *)(unaff_RBP + -0x15);
        }
        else {
          iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_180a25b48,4);
          if (iVar4 == 0) {
            lVar7 = (longlong)*(int *)(unaff_RBX + 0x18c) * 0x38 + *(longlong *)(unaff_RBX + 8);
            if (*(uint *)(lVar7 + 0xc) != 0) {
              iVar4 = *(int *)(lVar7 + 8);
              if (iVar4 == 1) {
                uVar11 = 8;
LAB_1807adf11:
                auVar2._8_8_ = 0;
                auVar2._0_8_ = uVar11;
                uVar6 = (undefined4)
                        ((SUB168((ZEXT416(*(uint *)(unaff_RBP + -0x1d)) << 3) / auVar2,0) &
                         0xffffffff) / (ulonglong)*(uint *)(lVar7 + 0xc));
              }
              else {
                if (iVar4 == 2) {
                  uVar11 = 0x10;
                  goto LAB_1807adf11;
                }
                if (iVar4 == 3) {
                  uVar11 = 0x18;
                  goto LAB_1807adf11;
                }
                if ((iVar4 == 4) || (iVar4 == 5)) {
                  uVar11 = 0x20;
                  goto LAB_1807adf11;
                }
                uVar6 = *(undefined4 *)(unaff_RBP + -0x1d);
              }
              *(undefined4 *)(lVar7 + 0x18) = uVar6;
            }
            iVar4 = func_0x00018076a7d0(*(undefined8 *)(unaff_RBX + 0x170),
                                        *(longlong *)(unaff_RBX + 400) + 0x100 +
                                        (longlong)*(int *)(unaff_RBX + 0x18c) * 0x128);
            goto joined_r0x0001807adb24;
          }
          iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d21c,4);
          if (iVar4 == 0) {
            if (*(int *)(unaff_RBX + 0x17c) < *(int *)(unaff_RBX + 0x178)) {
                    // WARNING: Subroutine does not return
              memset((longlong)*(int *)(unaff_RBX + 0x17c) * 0x128 +
                     *(longlong *)(unaff_RBX + 0x180),0,0x100);
            }
            if (*(int *)(unaff_RBX + 0x18c) < *(int *)(unaff_RBX + 0x188)) {
                    // WARNING: Subroutine does not return
              memset((longlong)*(int *)(unaff_RBX + 0x18c) * 0x128 + *(longlong *)(unaff_RBX + 400),
                     0,0x100);
            }
          }
          else {
            iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d224,4);
            if (((((iVar4 != 0) &&
                  (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d22c,4), iVar4 != 0)) &&
                 (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d234,4), iVar4 != 0)) &&
                ((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d23c,4), iVar4 != 0 &&
                 (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d244,4), iVar4 != 0)))) &&
               ((((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d24c,4), iVar4 != 0 &&
                  ((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d254,4), iVar4 != 0 &&
                   (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d25c,4), iVar4 != 0))))
                 && (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d264,4), iVar4 != 0))
                && ((((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d26c,4), iVar4 != 0
                      && (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d274,4),
                         iVar4 != 0)) &&
                     (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d27c,4), iVar4 != 0))
                    && (((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d284,4),
                         iVar4 != 0 &&
                         (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d28c,4),
                         iVar4 != 0)) &&
                        ((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d294,4),
                         iVar4 != 0 &&
                         (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&UNK_18095d29c,4),
                         iVar4 != 0)))))))))) {
              FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),*(undefined4 *)(unaff_RBP + -0x1d),1)
              ;
            }
          }
        }
      }
    }
  }
LAB_1807ae229:
  uVar5 = *(uint *)(unaff_RBP + -0x1d);
  uVar9 = uVar9 + 8 + uVar5;
  iVar4 = *(int *)(unaff_RBP + -0x39) + 8 + uVar5;
  *(int *)(unaff_RBP + -0x39) = iVar4;
  if ((uVar5 & 1) != 0) {
    uVar9 = uVar9 + 1;
    iVar4 = iVar4 + 1;
    *(int *)(unaff_RBP + -0x39) = iVar4;
  }
  if (((unaff_R15D <= uVar9) || (uVar9 == 0)) ||
     (iVar4 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),iVar4 + 8,0), iVar4 != 0))
  goto LAB_1807ae26f;
  goto LAB_1807ad540;
}






// 函数: void FUN_1807ae28f(void)
void FUN_1807ae28f(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1f) ^ (ulonglong)&stack0x00000000);
}



ulonglong FUN_1807ae2c0(longlong param_1,ulonglong *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint auStackX_8 [2];
  
  uVar6 = 0x20;
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if (iVar1 == 1) {
    lVar3 = 8;
  }
  else if (iVar1 == 2) {
    lVar3 = 0x10;
  }
  else if (iVar1 == 3) {
    lVar3 = 0x18;
  }
  else {
    if ((iVar1 != 4) && (iVar1 != 5)) goto LAB_1807ae330;
    lVar3 = 0x20;
  }
  param_3 = (uint)((ulonglong)param_3 * lVar3 >> 3);
LAB_1807ae330:
  uVar4 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),param_2,1,
                        *(int *)(*(longlong *)(param_1 + 8) + 0xc) * param_3,auStackX_8);
  uVar7 = uVar4 & 0xffffffff;
  if ((uVar4 & 0xffffffef) == 0) {
    if ((*(int *)((longlong)*(int *)(param_1 + 0x198) * 0x38 + 8 + *(longlong *)(param_1 + 8)) == 1)
       && (uVar5 = 0, auStackX_8[0] != 0)) {
      if (0x3f < auStackX_8[0]) {
        do {
          uVar5 = uVar5 + 0x40;
          *param_2 = *param_2 ^ 0x8080808080808080;
          param_2[1] = param_2[1] ^ 0x8080808080808080;
          param_2[2] = param_2[2] ^ 0x8080808080808080;
          param_2[3] = param_2[3] ^ 0x8080808080808080;
          param_2[4] = param_2[4] ^ 0x8080808080808080;
          param_2[5] = param_2[5] ^ 0x8080808080808080;
          param_2[6] = param_2[6] ^ 0x8080808080808080;
          param_2[7] = param_2[7] ^ 0x8080808080808080;
          param_2 = param_2 + 8;
        } while (uVar5 < (auStackX_8[0] & 0xffffffc0));
      }
      if (uVar5 < auStackX_8[0]) {
        uVar4 = (ulonglong)(auStackX_8[0] - uVar5);
        do {
          *(byte *)param_2 = (byte)*param_2 ^ 0x80;
          param_2 = (ulonglong *)((longlong)param_2 + 1);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    uVar5 = *(uint *)(*(longlong *)(param_1 + 8) + 0xc);
    uVar4 = uVar7;
    if (uVar5 != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 8);
      if (iVar1 == 1) {
        uVar6 = 8;
      }
      else if (iVar1 == 2) {
        uVar6 = 0x10;
      }
      else if (iVar1 == 3) {
        uVar6 = 0x18;
      }
      else if ((iVar1 != 4) && (iVar1 != 5)) {
        *param_4 = auStackX_8[0];
        return uVar7;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      *param_4 = (uint)((SUB168((ZEXT416(auStackX_8[0]) << 3) / auVar2,0) & 0xffffffff) /
                       (ulonglong)uVar5);
    }
  }
  return uVar4;
}



ulonglong FUN_1807ae480(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((param_2 < 0) || ((*(int *)(param_1 + 0x18) != 0 && (*(int *)(param_1 + 0x18) <= param_2)))) {
    return 0x20;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) & 1) == 0) goto LAB_1807ae550;
  iVar2 = *(int *)(param_1 + 0x198);
  if (param_2 != *(int *)(param_1 + 0x198)) {
    *(int *)(param_1 + 0x198) = param_2;
    iVar2 = param_2;
  }
  lVar5 = (longlong)iVar2 * 0x38;
  iVar1 = *(int *)(lVar5 + 8 + *(longlong *)(param_1 + 8));
  if (iVar1 == 1) {
    lVar3 = 8;
LAB_1807ae515:
    param_3 = (uint)((ulonglong)param_3 * lVar3 >> 3);
  }
  else {
    if (iVar1 == 2) {
      lVar3 = 0x10;
      goto LAB_1807ae515;
    }
    if (iVar1 == 3) {
      lVar3 = 0x18;
      goto LAB_1807ae515;
    }
    if ((iVar1 == 4) || (iVar1 == 5)) {
      lVar3 = 0x20;
      goto LAB_1807ae515;
    }
  }
  uVar4 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),
                        *(int *)(lVar5 + 0xc + *(longlong *)(param_1 + 8)) * param_3 +
                        *(int *)((longlong)iVar2 * 0x128 + 0x100 + *(longlong *)(param_1 + 400)),0);
  uVar6 = (uint)uVar4;
  if (uVar6 != 0) {
    return uVar4;
  }
LAB_1807ae550:
  return (ulonglong)uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ae610(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)
void FUN_1807ae610(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_138 [32];
  int *piStack_118;
  int *piStack_110;
  int iStack_108;
  uint *puStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined4 *puStack_e8;
  uint auStack_d8 [36];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  iVar7 = 0;
  puStack_e8 = param_4;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0xc)) {
    do {
      lVar2 = 0;
      puStack_f8 = (uint *)0x0;
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x18))
                        (*(longlong **)(param_1 + 0x170),&puStack_f8,0x8c);
      if (iVar1 != 0) goto LAB_1807ae76b;
      if (puStack_f8 == (uint *)0x0) {
        piStack_118 = (int *)0x0;
        iVar1 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_d8,1,0x8c);
        if (iVar1 != 0) goto LAB_1807ae76b;
        puStack_f8 = auStack_d8;
      }
      iStack_ec = (int)(short)puStack_f8[2];
      lVar5 = 8;
      uVar4 = *puStack_f8;
      uVar3 = puStack_f8[1];
      iStack_f0 = (int)*(short *)((longlong)puStack_f8 + 10);
      lVar6 = (longlong)iVar7 * 2 + param_2;
      iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0xc);
      do {
        piStack_110 = &iStack_f0;
        piStack_118 = &iStack_ec;
        iStack_108 = iVar1;
        FUN_1807ae7d0((longlong)puStack_f8 + lVar2 + 0xc,lVar6,uVar4 & 7,uVar3 & 0xf);
        lVar2 = lVar2 + 0x10;
        uVar4 = uVar4 >> 4;
        uVar3 = uVar3 >> 4;
        iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0xc);
        lVar6 = lVar6 + (longlong)(iVar1 << 5) * 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(longlong *)(param_1 + 8) + 0xc));
  }
  *puStack_e8 = 0x100;
LAB_1807ae76b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_138);
}






// 函数: void FUN_1807ae7d0(uint *param_1,undefined2 *param_2,int param_3,char param_4,int *param_5,
void FUN_1807ae7d0(uint *param_1,undefined2 *param_2,int param_3,char param_4,int *param_5,
                  int *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = (longlong)param_7;
  bVar3 = 0x16 - param_4;
  lVar6 = 4;
  iVar7 = (int)(char)(&UNK_18095d2b4)[param_3];
  iVar8 = (int)(char)(&UNK_18095d2bc)[param_3];
  iVar5 = *param_5;
  iVar2 = *param_6;
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar2 = (((int)(uVar1 << 0x1c) >> (bVar3 & 0x1f)) - iVar2 * iVar8) + iVar5 * iVar7 >> 6;
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *param_2 = (short)iVar2;
    param_2 = param_2 + lVar4;
    iVar5 = (((int)((uVar1 >> 4) << 0x1c) >> (bVar3 & 0x1f)) - iVar5 * iVar8) + iVar2 * iVar7 >> 6;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    *param_2 = (short)iVar5;
    param_2 = param_2 + lVar4;
    iVar2 = (((int)((uVar1 >> 8) << 0x1c) >> (bVar3 & 0x1f)) - iVar2 * iVar8) + iVar5 * iVar7 >> 6;
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *param_2 = (short)iVar2;
    param_2 = param_2 + lVar4;
    iVar5 = (((int)((uVar1 >> 0xc) << 0x1c) >> (bVar3 & 0x1f)) - iVar5 * iVar8) + iVar2 * iVar7 >> 6
    ;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    *param_2 = (short)iVar5;
    param_2 = param_2 + lVar4;
    iVar2 = (((int)((uVar1 >> 0x10) << 0x1c) >> (bVar3 & 0x1f)) - iVar2 * iVar8) + iVar5 * iVar7 >>
            6;
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *param_2 = (short)iVar2;
    param_2 = param_2 + lVar4;
    iVar5 = (((int)((uVar1 >> 0x14) << 0x1c) >> (bVar3 & 0x1f)) - iVar5 * iVar8) + iVar2 * iVar7 >>
            6;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    *param_2 = (short)iVar5;
    param_2 = param_2 + lVar4;
    iVar2 = (((int)((uVar1 >> 0x18) << 0x1c) >> (bVar3 & 0x1f)) - iVar2 * iVar8) + iVar5 * iVar7 >>
            6;
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *param_2 = (short)iVar2;
    iVar5 = (((int)((uVar1 >> 0x18 & 0xf0) << 0x18) >> (bVar3 & 0x1f)) - iVar5 * iVar8) +
            iVar2 * iVar7 >> 6;
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
    else if (0x7fff < iVar5) {
      iVar5 = 0x7fff;
    }
    param_2[lVar4] = (short)iVar5;
    param_2 = param_2 + lVar4 + lVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *param_5 = iVar5;
  *param_6 = iVar2;
  return;
}



bool FUN_1807aea80(undefined8 param_1,longlong param_2)

{
  uint auStackX_10 [2];
  uint auStackX_18 [4];
  
  func_0x00018076a7d0(*(undefined8 *)(param_2 + 0x170),auStackX_18);
  (**(code **)(**(longlong **)(param_2 + 0x170) + 0x10))
            (*(longlong **)(param_2 + 0x170),auStackX_10);
  return auStackX_10[0] <= auStackX_18[0];
}



undefined8 FUN_1807aeac0(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  uint auStackX_18 [4];
  
  iVar1 = (**(code **)(**(longlong **)(param_3 + 0x170) + 0x10))
                    (*(longlong **)(param_3 + 0x170),auStackX_18);
  if (iVar1 == 0) {
    *param_2 = (ulonglong)auStackX_18[0];
    return 0;
  }
  return 1;
}






// 函数: void FUN_1807aeb00(void)
void FUN_1807aeb00(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1807aeba8(undefined8 param_1,longlong param_2)
void FUN_1807aeba8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong unaff_RSI;
  longlong lVar3;
  ulonglong in_stack_00001040;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(unaff_RSI + 0x28) + lVar3);
      if (uVar1 < 0x1000) {
                    // WARNING: Subroutine does not return
        memcpy(&stack0x00000040,*(undefined8 *)(*(longlong *)(unaff_RSI + 0x28) + 8 + lVar3),uVar1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < *(int *)(unaff_RSI + 0x20));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807aebc8(void)
void FUN_1807aebc8(void)

{
  uint uVar1;
  int unaff_EBP;
  longlong unaff_RSI;
  uint unaff_R12D;
  ulonglong uVar2;
  ulonglong in_stack_00001040;
  
  uVar2 = (ulonglong)unaff_R12D;
  do {
    uVar1 = *(uint *)(*(longlong *)(unaff_RSI + 0x28) + uVar2);
    if (uVar1 < 0x1000) {
                    // WARNING: Subroutine does not return
      memcpy(&stack0x00000040,*(undefined8 *)(*(longlong *)(unaff_RSI + 0x28) + 8 + uVar2),uVar1);
    }
    unaff_EBP = unaff_EBP + 1;
    uVar2 = uVar2 + 0x10;
  } while (unaff_EBP < *(int *)(unaff_RSI + 0x20));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807aec98(void)
void FUN_1807aec98(void)

{
  ulonglong in_stack_00001040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807aeca8(void)
void FUN_1807aeca8(void)

{
  ulonglong in_stack_00001040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (ulonglong)&stack0x00000000);
}






