#include "TaleWorlds.Native.Split.h"

// 99_part_11_part048.c - 1 个函数

// 函数: void FUN_1807ad4b0(longlong param_1,undefined8 param_2,uint param_3)
void FUN_1807ad4b0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_c8 [32];
  ulonglong uStack_a8;
  int iStack_98;
  undefined1 auStack_94 [4];
  uint uStack_90;
  int iStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [4];
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  iVar2 = func_0x00018076a7d0(*(undefined8 *)(param_1 + 0x170),&iStack_98);
  iVar3 = iStack_98;
  if (iVar2 == 0) {
    iStack_98 = iStack_98 + -8;
    uVar7 = 4;
    iVar3 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),iVar3,0);
    if (iVar3 == 0) {
LAB_1807ad540:
      uStack_a8 = 0;
      iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_80,1);
      if (iVar3 != 0) goto FUN_1807ae28f;
      iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d130,4);
      if (((iVar3 == 0) || (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d138,4), iVar3 == 0))
         || (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d140,4), iVar3 == 0))
      goto LAB_1807ae229;
      iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d148,4);
      if (iVar3 == 0) {
        uStack_a8 = 0;
        iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),param_1 + 0x178,4,1);
        if (iVar3 != 0) goto FUN_1807ae28f;
        uStack_a8 = uStack_a8 & 0xffffffff00000000;
        lVar4 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                              *(int *)(param_1 + 0x178) * 0x128,&UNK_18095d150,0x72);
        *(longlong *)(param_1 + 0x180) = lVar4;
joined_r0x0001807ad723:
        if (lVar4 == 0) goto FUN_1807ae28f;
      }
      else {
        iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d1c4);
        if (iVar3 == 0) {
          uStack_a8 = 0;
          iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_88,4,1);
          if (iVar3 == 0) {
            uStack_a8 = 0;
            iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),param_1 + 0x188,4,1);
            if (iVar3 == 0) {
              uStack_a8 = uStack_a8 & 0xffffffff00000000;
              lVar4 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                                    *(int *)(param_1 + 0x188) * 0x38,&UNK_18095d150,0x8d);
              *(longlong *)(param_1 + 8) = lVar4;
              if (lVar4 != 0) {
                uStack_a8 = uStack_a8 & 0xffffffff00000000;
                lVar4 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                                      *(int *)(param_1 + 0x188) * 0x128,&UNK_18095d150,0x93);
                *(longlong *)(param_1 + 400) = lVar4;
                goto joined_r0x0001807ad723;
              }
            }
          }
          goto FUN_1807ae28f;
        }
        iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d1cc);
        if (iVar3 == 0) {
          uStack_a8 = 0;
          iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_94,1,4);
          if ((iVar3 == 0) && (iVar3 = FUN_1807ad4b0(param_1,auStack_94,uStack_7c), iVar3 == 0)) {
            iVar3 = func_0x00018076b6b0(auStack_94,&UNK_18095d1d4,4);
            if (iVar3 == 0) {
              *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
            }
            else {
              iVar3 = func_0x00018076b6b0(auStack_94,&UNK_18095d1dc,4);
              if (iVar3 == 0) {
                *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
              }
              else {
                iVar3 = func_0x00018076b6b0(auStack_94,&UNK_18095d1e4,4);
                if (iVar3 == 0) {
                  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
                }
              }
            }
            goto LAB_1807ae229;
          }
          goto FUN_1807ae28f;
        }
        iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d140,4);
        if (iVar3 == 0) {
          uStack_a8 = 0;
          iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),auStack_50,1,0x10);
joined_r0x0001807ad98f:
          if (iVar3 != 0) goto FUN_1807ae28f;
        }
        else {
          iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d1ec,4);
          if (iVar3 == 0) {
            uStack_a8 = 0;
            iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),
                                  *(longlong *)(param_1 + 0x180) + 0x100 +
                                  (longlong)*(int *)(param_1 + 0x17c) * 0x128,1);
            if (iVar3 == 0) {
              uStack_a8 = uStack_a8 & 0xffffffff00000000;
              uVar5 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                                    *(int *)((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x100 +
                                            *(longlong *)(param_1 + 0x180)) * 0x48,&UNK_18095d150,
                                    0xd1);
              *(undefined8 *)
               ((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x110 + *(longlong *)(param_1 + 0x180)
               ) = uVar5;
              if (*(longlong *)
                   ((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x110 +
                   *(longlong *)(param_1 + 0x180)) != 0) {
                *(undefined4 *)(param_1 + 0x19c) = 0;
                goto LAB_1807ae229;
              }
            }
            goto FUN_1807ae28f;
          }
          iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d1f4,4);
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 0x17c);
            lVar4 = (ulonglong)*(uint *)(param_1 + 0x19c) * 9;
LAB_1807ad95d:
            iVar2 = 0xc;
            lVar4 = *(longlong *)((longlong)iVar3 * 0x128 + 0x110 + *(longlong *)(param_1 + 0x180))
                    + lVar4 * 8;
LAB_1807ad976:
            uStack_a8 = 0;
            iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),lVar4,1,iVar2);
            goto joined_r0x0001807ad98f;
          }
          iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d1fc,4);
          if (iVar3 == 0) {
            uVar8 = 0x24;
            if (uStack_7c < 0x24) {
              uVar8 = uStack_7c;
            }
            iVar3 = func_0x00018076b6b0(param_2,&UNK_18095d1d4,4);
            if (iVar3 != 0) {
              iVar3 = func_0x00018076b6b0(param_2,&UNK_18095d1e4,4);
              if (iVar3 == 0) {
                uStack_a8 = 0;
                iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),
                                      (ulonglong)*(uint *)(param_1 + 0x19c) * 0x48 + 0xc +
                                      *(longlong *)
                                       ((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x110 +
                                       *(longlong *)(param_1 + 0x180)),1,uVar8);
                goto joined_r0x0001807ad98f;
              }
              goto LAB_1807ae229;
            }
            uStack_a8 = 0;
            iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),
                                  *(longlong *)(param_1 + 400) + 0x104 +
                                  (longlong)*(int *)(param_1 + 0x18c) * 0x128,1,uVar8);
            if (iVar3 != 0) goto FUN_1807ae28f;
            if (*(int *)((longlong)*(int *)(param_1 + 0x18c) * 0x128 + 0x114 +
                        *(longlong *)(param_1 + 400)) != 0) {
              *(undefined4 *)
               ((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 0x28 + *(longlong *)(param_1 + 8)) = 2;
              *(undefined4 *)
               ((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 0x20 + *(longlong *)(param_1 + 8)) =
                   *(undefined4 *)
                    ((longlong)*(int *)(param_1 + 0x18c) * 0x128 + 0x120 +
                    *(longlong *)(param_1 + 400));
              lVar4 = (longlong)*(int *)(param_1 + 0x18c) * 0x128;
              *(int *)((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 0x24 +
                      *(longlong *)(param_1 + 8)) =
                   *(int *)(lVar4 + 0x120 + *(longlong *)(param_1 + 400)) + -1 +
                   *(int *)(lVar4 + 0x124 + *(longlong *)(param_1 + 400));
            }
          }
          else {
            iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d204,4);
            if (iVar3 == 0) {
              iVar3 = *(int *)(param_1 + 0x17c);
              lVar4 = (ulonglong)*(uint *)(param_1 + 0x19c) * 9 + 6;
              goto LAB_1807ad95d;
            }
            iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d20c,4);
            if (iVar3 == 0) {
              uStack_a8 = 0;
              iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&uStack_90,1,8);
              if (iVar3 != 0) goto FUN_1807ae28f;
              if (8 < uStack_90) {
                FUN_18076a440(*(undefined8 *)(param_1 + 0x170),uStack_90 - 8,1);
              }
              uStack_a8 = uStack_a8 & 0xffffffff00000000;
              if (*(uint *)((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x100 +
                           *(longlong *)(param_1 + 0x180)) <= *(uint *)(param_1 + 0x19c)) {
                uVar5 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iStack_8c * 0xc,
                                      &UNK_18095d150,0x172);
                *(undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x120 +
                 *(longlong *)(param_1 + 0x180)) = uVar5;
                lVar4 = (longlong)*(int *)(param_1 + 0x17c) * 0x128 + *(longlong *)(param_1 + 0x180)
                ;
                if (*(longlong *)(lVar4 + 0x120) != 0) {
                  *(int *)(lVar4 + 0x118) = iStack_8c;
                  iVar2 = iStack_8c * 0xc;
                  lVar4 = *(longlong *)
                           ((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x120 +
                           *(longlong *)(param_1 + 0x180));
                  goto LAB_1807ad976;
                }
                goto FUN_1807ae28f;
              }
              uVar5 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),iStack_8c * 0xc,
                                    &UNK_18095d150,0x153);
              *(undefined8 *)
               (*(longlong *)
                 ((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x110 +
                 *(longlong *)(param_1 + 0x180)) + 0x40 +
               (ulonglong)*(uint *)(param_1 + 0x19c) * 0x48) = uVar5;
              lVar4 = *(longlong *)
                       ((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x110 +
                       *(longlong *)(param_1 + 0x180));
              if (*(longlong *)(lVar4 + 0x40 + (ulonglong)*(uint *)(param_1 + 0x19c) * 0x48) == 0)
              goto FUN_1807ae28f;
              *(int *)(lVar4 + (ulonglong)*(uint *)(param_1 + 0x19c) * 0x48 + 0x3c) = iStack_8c;
              iVar2 = iStack_8c * 0xc;
              lVar4 = *(longlong *)
                       (*(longlong *)
                         ((longlong)*(int *)(param_1 + 0x17c) * 0x128 + 0x110 +
                         *(longlong *)(param_1 + 0x180)) + 0x40 +
                       (ulonglong)*(uint *)(param_1 + 0x19c) * 0x48);
              goto LAB_1807ad976;
            }
            iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d214,4);
            if (iVar3 == 0) {
              uStack_a8 = 0;
              uVar8 = uStack_7c;
              if (0x28 < uStack_7c) {
                uVar8 = 0x28;
              }
              uStack_78 = 0;
              uStack_70 = 0;
              uStack_68 = 0;
              uStack_60 = 0;
              uStack_58 = 0;
              iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&uStack_78,1,uVar8);
              if ((iVar3 != 0) ||
                 ((0x28 < uStack_7c &&
                  (iVar3 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),uStack_7c - 0x28,1),
                  iVar3 != 0)))) goto FUN_1807ae28f;
              if (uStack_70._6_2_ == 8) {
                *(undefined4 *)
                 ((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 8 + *(longlong *)(param_1 + 8)) = 1;
              }
              else if (uStack_70._6_2_ == 0x10) {
                *(undefined4 *)
                 ((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 8 + *(longlong *)(param_1 + 8)) = 2;
              }
              else if (uStack_70._6_2_ == 0x18) {
                *(undefined4 *)
                 ((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 8 + *(longlong *)(param_1 + 8)) = 3;
              }
              else if (uStack_70._6_2_ == 0x20) {
                if ((short)uStack_78 == 1) {
                  *(undefined4 *)
                   ((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 8 + *(longlong *)(param_1 + 8)) = 4
                  ;
                }
                else if ((short)uStack_78 == 3) {
                  *(undefined4 *)
                   ((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 8 + *(longlong *)(param_1 + 8)) = 5
                  ;
                }
              }
              *(uint *)((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 0xc +
                       *(longlong *)(param_1 + 8)) = (uint)uStack_78._2_2_;
              *(undefined4 *)
               ((longlong)*(int *)(param_1 + 0x18c) * 0x38 + 0x10 + *(longlong *)(param_1 + 8)) =
                   uStack_78._4_4_;
            }
            else {
              iVar3 = func_0x00018076b6b0(auStack_80,&UNK_180a25b48,4);
              if (iVar3 == 0) {
                lVar4 = (longlong)*(int *)(param_1 + 0x18c) * 0x38 + *(longlong *)(param_1 + 8);
                if (*(uint *)(lVar4 + 0xc) != 0) {
                  iVar3 = *(int *)(lVar4 + 8);
                  if (iVar3 == 1) {
                    uVar6 = 8;
LAB_1807adf11:
                    auVar1._8_8_ = 0;
                    auVar1._0_8_ = uVar6;
                    uVar8 = (uint)((SUB168((ZEXT416(uStack_7c) << 3) / auVar1,0) & 0xffffffff) /
                                  (ulonglong)*(uint *)(lVar4 + 0xc));
                  }
                  else {
                    if (iVar3 == 2) {
                      uVar6 = 0x10;
                      goto LAB_1807adf11;
                    }
                    if (iVar3 == 3) {
                      uVar6 = 0x18;
                      goto LAB_1807adf11;
                    }
                    if ((iVar3 == 4) || (uVar8 = uStack_7c, iVar3 == 5)) {
                      uVar6 = 0x20;
                      goto LAB_1807adf11;
                    }
                  }
                  *(uint *)(lVar4 + 0x18) = uVar8;
                }
                iVar3 = func_0x00018076a7d0(*(undefined8 *)(param_1 + 0x170),
                                            *(longlong *)(param_1 + 400) + 0x100 +
                                            (longlong)*(int *)(param_1 + 0x18c) * 0x128);
                goto joined_r0x0001807ad98f;
              }
              iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d21c,4);
              if (iVar3 == 0) {
                if (*(int *)(param_1 + 0x17c) < *(int *)(param_1 + 0x178)) {
                    // WARNING: Subroutine does not return
                  memset((longlong)*(int *)(param_1 + 0x17c) * 0x128 +
                         *(longlong *)(param_1 + 0x180),0,0x100);
                }
                if (*(int *)(param_1 + 0x18c) < *(int *)(param_1 + 0x188)) {
                    // WARNING: Subroutine does not return
                  memset((longlong)*(int *)(param_1 + 0x18c) * 0x128 + *(longlong *)(param_1 + 400),
                         0,0x100);
                }
              }
              else {
                iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d224,4);
                if ((((((iVar3 != 0) &&
                       (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d22c,4), iVar3 != 0)) &&
                      (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d234,4), iVar3 != 0)) &&
                     (((iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d23c,4), iVar3 != 0 &&
                       (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d244,4), iVar3 != 0)) &&
                      ((iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d24c,4), iVar3 != 0 &&
                       ((iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d254,4), iVar3 != 0 &&
                        (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d25c,4), iVar3 != 0)))))))
                     ) && (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d264,4), iVar3 != 0)) &&
                   (((((iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d26c,4), iVar3 != 0 &&
                       (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d274,4), iVar3 != 0)) &&
                      (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d27c,4), iVar3 != 0)) &&
                     ((iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d284,4), iVar3 != 0 &&
                      (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d28c,4), iVar3 != 0)))) &&
                    ((iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d294,4), iVar3 != 0 &&
                     (iVar3 = func_0x00018076b6b0(auStack_80,&UNK_18095d29c,4), iVar3 != 0)))))) {
                  FUN_18076a440(*(undefined8 *)(param_1 + 0x170),uStack_7c,1);
                }
              }
            }
          }
        }
      }
LAB_1807ae229:
      uVar7 = uVar7 + 8 + uStack_7c;
      iStack_98 = iStack_98 + 8 + uStack_7c;
      if ((uStack_7c & 1) != 0) {
        uVar7 = uVar7 + 1;
        iStack_98 = iStack_98 + 1;
      }
      if (((param_3 <= uVar7) || (uVar7 == 0)) ||
         (iVar3 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),iStack_98 + 8,0), iVar3 != 0))
      goto FUN_1807ae28f;
      goto LAB_1807ad540;
    }
  }
FUN_1807ae28f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




