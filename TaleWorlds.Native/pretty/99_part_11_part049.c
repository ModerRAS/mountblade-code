#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part049.c - 9 个函数

// 函数: void FUN_1807ad502(uint64_t param_1,int param_2)
void FUN_1807ad502(uint64_t param_1,int param_2)

{
  uint uVar1;
  int8_t auVar2 [16];
  short sVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar9;
  int iVar10;
  uint unaff_R15D;
  uint64_t uVar11;
  
  uVar9 = in_EAX + 4;
  *(int *)(unaff_RBP + -0x39) = param_2;
  iVar4 = FUN_18076a440(param_1,param_2 + 8);
  if (iVar4 != 0) {
LAB_1807ae26f:
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&stack0x00000000);
  }
  uVar1 = in_EAX + 0x28;
LAB_1807ad540:
  iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x21,1,8,0);
  if (iVar4 != 0) goto LAB_1807ae26f;
  iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9360_ptr,4);
  if (((iVar4 == 0) || (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9368_ptr,4), iVar4 == 0)
      ) || (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&render_data_ptr,4), iVar4 == 0))
  goto LAB_1807ae229;
  iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9384_ptr,4);
  if (iVar4 == 0) {
    uVar11 = 0;
    iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBX + 0x178,4,1,0);
    if (iVar4 != 0) goto LAB_1807ae26f;
    lVar7 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                          *(int *)(unaff_RBX + 0x178) * 0x128,&unknown_var_9392_ptr,0x72,
                          uVar11 & 0xffffffff00000000);
    *(int64_t *)(unaff_RBX + 0x180) = lVar7;
joined_r0x0001807ad723:
    if (lVar7 == 0) goto LAB_1807ae26f;
  }
  else {
    iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9508_ptr);
    if (iVar4 == 0) {
      iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x29,4,1,0);
      if (iVar4 == 0) {
        uVar11 = 0;
        iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBX + 0x188,4,1,0);
        if (iVar4 == 0) {
          uVar11 = uVar11 & 0xffffffff00000000;
          lVar7 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                *(int *)(unaff_RBX + 0x188) * 0x38,&unknown_var_9392_ptr,0x8d,uVar11);
          *(int64_t *)(unaff_RBX + 8) = lVar7;
          if (lVar7 != 0) {
            lVar7 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                  *(int *)(unaff_RBX + 0x188) * 0x128,&unknown_var_9392_ptr,0x93,
                                  uVar11 & 0xffffffff00000000);
            *(int64_t *)(unaff_RBX + 400) = lVar7;
            goto joined_r0x0001807ad723;
          }
        }
      }
      goto LAB_1807ae26f;
    }
    iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9516_ptr);
    if (iVar4 == 0) {
      iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x35,1,4,0);
      if ((iVar4 == 0) && (iVar4 = FUN_1807ad4b0(), iVar4 == 0)) {
        iVar4 = func_0x00018076b6b0(unaff_RBP + -0x35,&unknown_var_9524_ptr,4);
        if (iVar4 == 0) {
          *(int *)(unaff_RBX + 0x18c) = *(int *)(unaff_RBX + 0x18c) + 1;
        }
        else {
          iVar4 = func_0x00018076b6b0(unaff_RBP + -0x35,&unknown_var_9532_ptr,4);
          if (iVar4 == 0) {
            *(int *)(unaff_RBX + 0x17c) = *(int *)(unaff_RBX + 0x17c) + 1;
          }
          else {
            iVar4 = func_0x00018076b6b0(unaff_RBP + -0x35,&system_pattern1_ptr,4);
            if (iVar4 == 0) {
              *(int *)(unaff_RBX + 0x19c) = *(int *)(unaff_RBX + 0x19c) + 1;
            }
          }
        }
        goto LAB_1807ae229;
      }
      goto LAB_1807ae26f;
    }
    iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&render_data_ptr,4);
    if (iVar4 == 0) {
      iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + 0xf,1,0x10,0);
joined_r0x0001807adb24:
      if (iVar4 != 0) goto LAB_1807ae26f;
    }
    else {
      iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9548_ptr,4);
      if (iVar4 == 0) {
        uVar11 = 0;
        iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),
                              *(int64_t *)(unaff_RBX + 0x180) + 0x100 +
                              (int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128,1,0xc,0);
        if (iVar4 == 0) {
          uVar8 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                *(int *)((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x100 +
                                        *(int64_t *)(unaff_RBX + 0x180)) * 0x48,&unknown_var_9392_ptr,0xd1
                                ,uVar11 & 0xffffffff00000000);
          *(uint64_t *)
           ((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 + *(int64_t *)(unaff_RBX + 0x180)
           ) = uVar8;
          if (*(int64_t *)
               ((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
               *(int64_t *)(unaff_RBX + 0x180)) != 0) {
            *(int32_t *)(unaff_RBX + 0x19c) = 0;
            goto LAB_1807ae229;
          }
        }
        goto LAB_1807ae26f;
      }
      iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9556_ptr,4);
      if (iVar4 == 0) {
        iVar4 = *(int *)(unaff_RBX + 0x17c);
        lVar7 = (uint64_t)*(uint *)(unaff_RBX + 0x19c) * 9;
LAB_1807ad95d:
        iVar10 = 0xc;
        lVar7 = *(int64_t *)((int64_t)iVar4 * 0x128 + 0x110 + *(int64_t *)(unaff_RBX + 0x180)) +
                lVar7 * 8;
LAB_1807ad976:
        iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),lVar7,1,iVar10,0);
        goto joined_r0x0001807adb24;
      }
      iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9564_ptr,4);
      if (iVar4 == 0) {
        uVar6 = 0x24;
        if (*(uint *)(unaff_RBP + -0x1d) < 0x24) {
          uVar6 = *(int32_t *)(unaff_RBP + -0x1d);
        }
        iVar4 = func_0x00018076b6b0();
        if (iVar4 != 0) {
          iVar4 = func_0x00018076b6b0();
          if (iVar4 == 0) {
            iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),
                                  (uint64_t)*(uint *)(unaff_RBX + 0x19c) * 0x48 + 0xc +
                                  *(int64_t *)
                                   ((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
                                   *(int64_t *)(unaff_RBX + 0x180)),1,uVar6,0);
            goto joined_r0x0001807adb24;
          }
          goto LAB_1807ae229;
        }
        iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),
                              *(int64_t *)(unaff_RBX + 400) + 0x104 +
                              (int64_t)*(int *)(unaff_RBX + 0x18c) * 0x128,1,uVar6,0);
        if (iVar4 != 0) goto LAB_1807ae26f;
        if (*(int *)((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x128 + 0x114 +
                    *(int64_t *)(unaff_RBX + 400)) != 0) {
          *(int32_t *)
           ((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0x28 + *(int64_t *)(unaff_RBX + 8)) = 2;
          *(int32_t *)
           ((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0x20 + *(int64_t *)(unaff_RBX + 8)) =
               *(int32_t *)
                ((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x128 + 0x120 +
                *(int64_t *)(unaff_RBX + 400));
          lVar7 = (int64_t)*(int *)(unaff_RBX + 0x18c) * 0x128;
          *(int *)((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0x24 +
                  *(int64_t *)(unaff_RBX + 8)) =
               *(int *)(lVar7 + 0x120 + *(int64_t *)(unaff_RBX + 400)) + -1 +
               *(int *)(lVar7 + 0x124 + *(int64_t *)(unaff_RBX + 400));
        }
      }
      else {
        iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9572_ptr,4);
        if (iVar4 == 0) {
          iVar4 = *(int *)(unaff_RBX + 0x17c);
          lVar7 = (uint64_t)*(uint *)(unaff_RBX + 0x19c) * 9 + 6;
          goto LAB_1807ad95d;
        }
        iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9580_ptr,4);
        if (iVar4 == 0) {
          uVar11 = 0;
          iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x31,1,8,0);
          if (iVar4 != 0) goto LAB_1807ae26f;
          uVar5 = (uint)*(uint64_t *)(unaff_RBP + -0x31);
          if (8 < uVar5) {
            FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),uVar5 - 8,1);
          }
          iVar4 = *(int *)(unaff_RBP + -0x2d) * 0xc;
          if (*(uint *)((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x100 +
                       *(int64_t *)(unaff_RBX + 0x180)) <= *(uint *)(unaff_RBX + 0x19c)) {
            uVar8 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar4,&unknown_var_9392_ptr,0x172
                                  ,uVar11 & 0xffffffff00000000);
            *(uint64_t *)
             ((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x120 +
             *(int64_t *)(unaff_RBX + 0x180)) = uVar8;
            lVar7 = (int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + *(int64_t *)(unaff_RBX + 0x180)
            ;
            if (*(int64_t *)(lVar7 + 0x120) != 0) {
              *(int32_t *)(lVar7 + 0x118) = *(int32_t *)(unaff_RBP + -0x2d);
              iVar10 = *(int *)(unaff_RBP + -0x2d) * 0xc;
              lVar7 = *(int64_t *)
                       ((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x120 +
                       *(int64_t *)(unaff_RBX + 0x180));
              goto LAB_1807ad976;
            }
            goto LAB_1807ae26f;
          }
          uVar8 = FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar4,&unknown_var_9392_ptr,0x153,
                                uVar11 & 0xffffffff00000000);
          *(uint64_t *)
           (*(int64_t *)
             ((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
             *(int64_t *)(unaff_RBX + 0x180)) + 0x40 +
           (uint64_t)*(uint *)(unaff_RBX + 0x19c) * 0x48) = uVar8;
          lVar7 = *(int64_t *)
                   ((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
                   *(int64_t *)(unaff_RBX + 0x180));
          if (*(int64_t *)(lVar7 + 0x40 + (uint64_t)*(uint *)(unaff_RBX + 0x19c) * 0x48) == 0)
          goto LAB_1807ae26f;
          *(int32_t *)(lVar7 + (uint64_t)*(uint *)(unaff_RBX + 0x19c) * 0x48 + 0x3c) =
               *(int32_t *)(unaff_RBP + -0x2d);
          iVar10 = *(int *)(unaff_RBP + -0x2d) * 0xc;
          lVar7 = *(int64_t *)
                   (*(int64_t *)
                     ((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 + 0x110 +
                     *(int64_t *)(unaff_RBX + 0x180)) + 0x40 +
                   (uint64_t)*(uint *)(unaff_RBX + 0x19c) * 0x48);
          goto LAB_1807ad976;
        }
        iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9588_ptr,4);
        if (iVar4 == 0) {
          uVar8 = *(uint64_t *)(unaff_RBX + 0x170);
          uVar5 = *(uint *)(unaff_RBP + -0x1d);
          if (uVar1 < *(uint *)(unaff_RBP + -0x1d)) {
            uVar5 = uVar1;
          }
          *(uint64_t *)(unaff_RBP + -0x19) = 0;
          *(uint64_t *)(unaff_RBP + -0x11) = 0;
          *(uint64_t *)(unaff_RBP + -9) = 0;
          *(uint64_t *)(unaff_RBP + -1) = 0;
          *(uint64_t *)(unaff_RBP + 7) = 0;
          iVar4 = FUN_180769ed0(uVar8,unaff_RBP + -0x19,1,uVar5,0);
          if ((iVar4 != 0) ||
             ((uVar1 < *(uint *)(unaff_RBP + -0x1d) &&
              (iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),
                                     *(uint *)(unaff_RBP + -0x1d) - 0x28,1), iVar4 != 0))))
          goto LAB_1807ae26f;
          sVar3 = *(short *)(unaff_RBP + -0xb);
          if (sVar3 == 8) {
            *(int32_t *)
             ((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(int64_t *)(unaff_RBX + 8)) = 1;
          }
          else if (sVar3 == 0x10) {
            *(int32_t *)
             ((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(int64_t *)(unaff_RBX + 8)) = 2;
          }
          else if (sVar3 == 0x18) {
            *(int32_t *)
             ((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(int64_t *)(unaff_RBX + 8)) = 3;
          }
          else if (sVar3 == 0x20) {
            sVar3 = (short)*(uint64_t *)(unaff_RBP + -0x19);
            if (sVar3 == 1) {
              *(int32_t *)
               ((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(int64_t *)(unaff_RBX + 8)) = 4
              ;
            }
            else if (sVar3 == 3) {
              *(int32_t *)
               ((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 8 + *(int64_t *)(unaff_RBX + 8)) = 5
              ;
            }
          }
          *(uint *)((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0xc +
                   *(int64_t *)(unaff_RBX + 8)) = (uint)*(ushort *)(unaff_RBP + -0x17);
          *(int32_t *)
           ((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + 0x10 + *(int64_t *)(unaff_RBX + 8)) =
               *(int32_t *)(unaff_RBP + -0x15);
        }
        else {
          iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_1144_ptr,4);
          if (iVar4 == 0) {
            lVar7 = (int64_t)*(int *)(unaff_RBX + 0x18c) * 0x38 + *(int64_t *)(unaff_RBX + 8);
            if (*(uint *)(lVar7 + 0xc) != 0) {
              iVar4 = *(int *)(lVar7 + 8);
              if (iVar4 == 1) {
                uVar11 = 8;
LAB_1807adf11:
                auVar2._8_8_ = 0;
                auVar2._0_8_ = uVar11;
                uVar6 = (int32_t)
                        ((SUB168((ZEXT416(*(uint *)(unaff_RBP + -0x1d)) << 3) / auVar2,0) &
                         0xffffffff) / (uint64_t)*(uint *)(lVar7 + 0xc));
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
                uVar6 = *(int32_t *)(unaff_RBP + -0x1d);
              }
              *(int32_t *)(lVar7 + 0x18) = uVar6;
            }
            iVar4 = func_0x00018076a7d0(*(uint64_t *)(unaff_RBX + 0x170),
                                        *(int64_t *)(unaff_RBX + 400) + 0x100 +
                                        (int64_t)*(int *)(unaff_RBX + 0x18c) * 0x128);
            goto joined_r0x0001807adb24;
          }
          iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9596_ptr,4);
          if (iVar4 == 0) {
            if (*(int *)(unaff_RBX + 0x17c) < *(int *)(unaff_RBX + 0x178)) {
                    // WARNING: Subroutine does not return
              memset((int64_t)*(int *)(unaff_RBX + 0x17c) * 0x128 +
                     *(int64_t *)(unaff_RBX + 0x180),0,0x100);
            }
            if (*(int *)(unaff_RBX + 0x18c) < *(int *)(unaff_RBX + 0x188)) {
                    // WARNING: Subroutine does not return
              memset((int64_t)*(int *)(unaff_RBX + 0x18c) * 0x128 + *(int64_t *)(unaff_RBX + 400),
                     0,0x100);
            }
          }
          else {
            iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9604_ptr,4);
            if (((((iVar4 != 0) &&
                  (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9612_ptr,4), iVar4 != 0)) &&
                 (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9620_ptr,4), iVar4 != 0)) &&
                ((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9628_ptr,4), iVar4 != 0 &&
                 (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9636_ptr,4), iVar4 != 0)))) &&
               ((((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9644_ptr,4), iVar4 != 0 &&
                  ((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9652_ptr,4), iVar4 != 0 &&
                   (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9660_ptr,4), iVar4 != 0))))
                 && (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9668_ptr,4), iVar4 != 0))
                && ((((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9676_ptr,4), iVar4 != 0
                      && (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9684_ptr,4),
                         iVar4 != 0)) &&
                     (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9692_ptr,4), iVar4 != 0))
                    && (((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9700_ptr,4),
                         iVar4 != 0 &&
                         (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9708_ptr,4),
                         iVar4 != 0)) &&
                        ((iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9716_ptr,4),
                         iVar4 != 0 &&
                         (iVar4 = func_0x00018076b6b0(unaff_RBP + -0x21,&unknown_var_9724_ptr,4),
                         iVar4 != 0)))))))))) {
              FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),*(int32_t *)(unaff_RBP + -0x1d),1)
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
     (iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),iVar4 + 8,0), iVar4 != 0))
  goto LAB_1807ae26f;
  goto LAB_1807ad540;
}






// 函数: void FUN_1807ae28f(void)
void FUN_1807ae28f(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1f) ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_1807ae2c0(int64_t param_1,uint64_t *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int8_t auVar2 [16];
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint auStackX_8 [2];
  
  uVar6 = 0x20;
  iVar1 = *(int *)(*(int64_t *)(param_1 + 8) + 8);
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
  param_3 = (uint)((uint64_t)param_3 * lVar3 >> 3);
LAB_1807ae330:
  uVar4 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),param_2,1,
                        *(int *)(*(int64_t *)(param_1 + 8) + 0xc) * param_3,auStackX_8);
  uVar7 = uVar4 & 0xffffffff;
  if ((uVar4 & 0xffffffef) == 0) {
    if ((*(int *)((int64_t)*(int *)(param_1 + 0x198) * 0x38 + 8 + *(int64_t *)(param_1 + 8)) == 1)
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
        uVar4 = (uint64_t)(auStackX_8[0] - uVar5);
        do {
          *(byte *)param_2 = (byte)*param_2 ^ 0x80;
          param_2 = (uint64_t *)((int64_t)param_2 + 1);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    uVar5 = *(uint *)(*(int64_t *)(param_1 + 8) + 0xc);
    uVar4 = uVar7;
    if (uVar5 != 0) {
      iVar1 = *(int *)(*(int64_t *)(param_1 + 8) + 8);
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
                       (uint64_t)uVar5);
    }
  }
  return uVar4;
}



uint64_t FUN_1807ae480(int64_t param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((param_2 < 0) || ((*(int *)(param_1 + 0x18) != 0 && (*(int *)(param_1 + 0x18) <= param_2)))) {
    return 0x20;
  }
  if ((*(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 1) == 0) goto LAB_1807ae550;
  iVar2 = *(int *)(param_1 + 0x198);
  if (param_2 != *(int *)(param_1 + 0x198)) {
    *(int *)(param_1 + 0x198) = param_2;
    iVar2 = param_2;
  }
  lVar5 = (int64_t)iVar2 * 0x38;
  iVar1 = *(int *)(lVar5 + 8 + *(int64_t *)(param_1 + 8));
  if (iVar1 == 1) {
    lVar3 = 8;
LAB_1807ae515:
    param_3 = (uint)((uint64_t)param_3 * lVar3 >> 3);
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
  uVar4 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),
                        *(int *)(lVar5 + 0xc + *(int64_t *)(param_1 + 8)) * param_3 +
                        *(int *)((int64_t)iVar2 * 0x128 + 0x100 + *(int64_t *)(param_1 + 400)),0);
  uVar6 = (uint)uVar4;
  if (uVar6 != 0) {
    return uVar4;
  }
LAB_1807ae550:
  return (uint64_t)uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807ae610(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)
void FUN_1807ae610(int64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int8_t auStack_138 [32];
  int *piStack_118;
  int *piStack_110;
  int iStack_108;
  uint *puStack_f8;
  int iStack_f0;
  int iStack_ec;
  int32_t *puStack_e8;
  uint auStack_d8 [36];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  iVar7 = 0;
  puStack_e8 = param_4;
  if (0 < *(int *)(*(int64_t *)(param_1 + 8) + 0xc)) {
    do {
      lVar2 = 0;
      puStack_f8 = (uint *)0x0;
      iVar1 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x18))
                        (*(int64_t **)(param_1 + 0x170),&puStack_f8,0x8c);
      if (iVar1 != 0) goto LAB_1807ae76b;
      if (puStack_f8 == (uint *)0x0) {
        piStack_118 = (int *)0x0;
        iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_d8,1,0x8c);
        if (iVar1 != 0) goto LAB_1807ae76b;
        puStack_f8 = auStack_d8;
      }
      iStack_ec = (int)(short)puStack_f8[2];
      lVar5 = 8;
      uVar4 = *puStack_f8;
      uVar3 = puStack_f8[1];
      iStack_f0 = (int)*(short *)((int64_t)puStack_f8 + 10);
      lVar6 = (int64_t)iVar7 * 2 + param_2;
      iVar1 = *(int *)(*(int64_t *)(param_1 + 8) + 0xc);
      do {
        piStack_110 = &iStack_f0;
        piStack_118 = &iStack_ec;
        iStack_108 = iVar1;
        FUN_1807ae7d0((int64_t)puStack_f8 + lVar2 + 0xc,lVar6,uVar4 & 7,uVar3 & 0xf);
        lVar2 = lVar2 + 0x10;
        uVar4 = uVar4 >> 4;
        uVar3 = uVar3 >> 4;
        iVar1 = *(int *)(*(int64_t *)(param_1 + 8) + 0xc);
        lVar6 = lVar6 + (int64_t)(iVar1 << 5) * 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(int64_t *)(param_1 + 8) + 0xc));
  }
  *puStack_e8 = 0x100;
LAB_1807ae76b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_138);
}






// 函数: void FUN_1807ae7d0(uint *param_1,int16_t *param_2,int param_3,char param_4,int *param_5,
void FUN_1807ae7d0(uint *param_1,int16_t *param_2,int param_3,char param_4,int *param_5,
                  int *param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = (int64_t)param_7;
  bVar3 = 0x16 - param_4;
  lVar6 = 4;
  iVar7 = (int)(char)(&unknown_var_9748_ptr)[param_3];
  iVar8 = (int)(char)(&unknown_var_9756_ptr)[param_3];
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



bool FUN_1807aea80(uint64_t param_1,int64_t param_2)

{
  uint auStackX_10 [2];
  uint auStackX_18 [4];
  
  func_0x00018076a7d0(*(uint64_t *)(param_2 + 0x170),auStackX_18);
  (**(code **)(**(int64_t **)(param_2 + 0x170) + 0x10))
            (*(int64_t **)(param_2 + 0x170),auStackX_10);
  return auStackX_10[0] <= auStackX_18[0];
}



uint64_t FUN_1807aeac0(uint64_t param_1,uint64_t *param_2,int64_t param_3)

{
  int iVar1;
  uint auStackX_18 [4];
  
  iVar1 = (**(code **)(**(int64_t **)(param_3 + 0x170) + 0x10))
                    (*(int64_t **)(param_3 + 0x170),auStackX_18);
  if (iVar1 == 0) {
    *param_2 = (uint64_t)auStackX_18[0];
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






// 函数: void FUN_1807aeba8(uint64_t param_1,int64_t param_2)
void FUN_1807aeba8(uint64_t param_1,int64_t param_2)

{
  uint uVar1;
  int iVar2;
  int64_t unaff_RSI;
  int64_t lVar3;
  uint64_t in_stack_00001040;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(*(int64_t *)(unaff_RSI + 0x28) + lVar3);
      if (uVar1 < 0x1000) {
                    // WARNING: Subroutine does not return
        memcpy(&stack0x00000040,*(uint64_t *)(*(int64_t *)(unaff_RSI + 0x28) + 8 + lVar3),uVar1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < *(int *)(unaff_RSI + 0x20));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807aebc8(void)
void FUN_1807aebc8(void)

{
  uint uVar1;
  int unaff_EBP;
  int64_t unaff_RSI;
  uint unaff_R12D;
  uint64_t uVar2;
  uint64_t in_stack_00001040;
  
  uVar2 = (uint64_t)unaff_R12D;
  do {
    uVar1 = *(uint *)(*(int64_t *)(unaff_RSI + 0x28) + uVar2);
    if (uVar1 < 0x1000) {
                    // WARNING: Subroutine does not return
      memcpy(&stack0x00000040,*(uint64_t *)(*(int64_t *)(unaff_RSI + 0x28) + 8 + uVar2),uVar1);
    }
    unaff_EBP = unaff_EBP + 1;
    uVar2 = uVar2 + 0x10;
  } while (unaff_EBP < *(int *)(unaff_RSI + 0x20));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807aec98(void)
void FUN_1807aec98(void)

{
  uint64_t in_stack_00001040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1807aeca8(void)
void FUN_1807aeca8(void)

{
  uint64_t in_stack_00001040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001040 ^ (uint64_t)&stack0x00000000);
}






