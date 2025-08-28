#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part062.c - 7 个函数

// 函数: void FUN_1807f5040(longlong param_1)
void FUN_1807f5040(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int8_t auStack_98 [32];
  uint *puStack_78;
  uint uStack_70;
  int8_t uStack_68;
  byte bStack_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  uint uStack_54;
  byte abStack_50 [4];
  ushort auStack_4c [2];
  int iStack_48;
  int8_t auStack_44 [4];
  int iStack_40;
  uint uStack_3c;
  char cStack_38;
  int32_t uStack_37;
  ulonglong uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  uVar4 = 0;
  iVar1 = func_0x00018076a7d0(*(uint64_t *)(param_1 + 0x170),&iStack_40);
  if (iVar1 == 0) {
    puStack_78 = &uStack_54;
    iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_4c,1,2);
    if ((iVar1 == 0) && (uStack_54 == 2)) {
      puStack_78 = &uStack_54;
      iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),abStack_50,1);
      if ((iVar1 == 0) && (uStack_54 == 1)) {
        puStack_78 = &uStack_54;
        iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&bStack_58,1,4);
        if ((iVar1 == 0) && (uStack_54 == 4)) {
          uVar5 = 10;
          uVar3 = (((uint)bStack_58 * 0x80 + (uint)bStack_57) * 0x80 + (uint)bStack_56) * 0x80 +
                  (uint)bStack_55;
          uStack_3c = uVar3 + 10;
          if ((abStack_50[0] & 0x10) == 0) {
            uStack_3c = uVar3;
          }
          iStack_48 = uStack_3c + 7 + iStack_40;
          do {
            uStack_37 = 0;
            cStack_38 = '\0';
            if (auStack_4c[0] < 3) {
              puStack_78 = &uStack_54;
              iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&cStack_38,3);
              if ((iVar1 != 0) || (uStack_54 != 1)) goto FUN_1807f550e;
              puStack_78 = &uStack_54;
              iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&bStack_58,3);
              if ((iVar1 != 0) || (uStack_54 != 1)) goto FUN_1807f550e;
              uVar4 = (uint)CONCAT21(CONCAT11(bStack_58,bStack_57),bStack_56);
LAB_1807f52fe:
              if ((((((byte)(cStack_38 - 0x20U) < 0x60) || (cStack_38 == '\0')) &&
                   (((byte)((char)uStack_37 - 0x20U) < 0x60 || ((char)uStack_37 == '\0')))) &&
                  (((byte)(uStack_37._1_1_ - 0x20U) < 0x60 || (uStack_37._1_1_ == '\0')))) &&
                 (((byte)(uStack_37._2_1_ - 0x20U) < 0x60 || (uStack_37._2_1_ == '\0'))))
              goto LAB_1807f534a;
            }
            else {
              if (2 < auStack_4c[0]) {
                puStack_78 = &uStack_54;
                iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&cStack_38,4);
                if ((iVar1 == 0) && (uStack_54 == 1)) {
                  puStack_78 = &uStack_54;
                  iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&bStack_58,4);
                  if ((iVar1 == 0) && (uStack_54 == 1)) {
                    puStack_78 = &uStack_54;
                    iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_44,2);
                    if ((iVar1 == 0) && (uStack_54 == 1)) {
                      if (auStack_4c[0] == 3) {
                        iVar1 = (((uint)bStack_58 * 0x100 + (uint)bStack_57) * 0x100 +
                                (uint)bStack_56) * 0x100;
                      }
                      else {
                        iVar1 = (((uint)bStack_58 * 0x80 + (uint)bStack_57) * 0x80 + (uint)bStack_56
                                ) * 0x80;
                      }
                      uVar4 = iVar1 + (uint)bStack_55;
                      goto LAB_1807f52fe;
                    }
                  }
                }
                goto FUN_1807f550e;
              }
LAB_1807f534a:
              if (uVar4 - 1 < 0xfffff) {
                uStack_68 = 1;
                uStack_70 = uStack_70 & 0xffffff00;
                puStack_78 = (uint *)((ulonglong)puStack_78 & 0xffffffff00000000);
                lVar2 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar4,&unknown_var_4032_ptr,
                                      0x27a);
                if (lVar2 == 0) {
                  FUN_18076a440(*(uint64_t *)(param_1 + 0x170),iStack_48,0);
                }
                else {
                  puStack_78 = &uStack_54;
                  iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),lVar2,1,uVar4);
                  if (iVar1 == 0) {
                    if (uStack_54 != uVar4) {
                      puStack_78 = (uint *)CONCAT71(puStack_78._1_7_,1);
                    // WARNING: Subroutine does not return
                      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_4032_ptr,
                                    0x287);
                    }
                    if (cStack_38 != 'T') {
                      uStack_68 = 0;
                      uStack_70 = 0;
                      puStack_78 = (uint *)CONCAT44(puStack_78._4_4_,uVar4);
                      FUN_180772fe0(param_1,2,&cStack_38,lVar2);
                      puStack_78 = (uint *)CONCAT71(puStack_78._1_7_,1);
                    // WARNING: Subroutine does not return
                      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_4032_ptr,
                                    0x2ad);
                    }
                    // WARNING: Subroutine does not return
                    memmove(lVar2,lVar2 + 1,uVar4 - 1);
                  }
                }
                goto FUN_1807f550e;
              }
            }
            if ((uVar4 != 0) &&
               (iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),uVar4,1), iVar1 != 0))
            goto FUN_1807f550e;
            uVar5 = uVar5 + 10 + uVar4;
          } while (uVar5 < uStack_3c);
          FUN_18076a440(*(uint64_t *)(param_1 + 0x170),iStack_48,0);
        }
      }
    }
  }
FUN_1807f550e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f5085(uint64_t param_1)
void FUN_1807f5085(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint unaff_EBX;
  longlong unaff_RBP;
  uint uVar5;
  longlong unaff_R15;
  ulonglong uVar6;
  
  iVar2 = *(int *)(unaff_RBP + -0x28);
  iVar1 = FUN_180769ed0(param_1,unaff_RBP + -0x34,unaff_EBX + 1,unaff_EBX + 2);
  if ((((iVar1 == 0) && (*(int *)(unaff_RBP + -0x3c) == 2)) &&
      (iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x38,1,1,
                             unaff_RBP + -0x3c), iVar1 == 0)) && (*(int *)(unaff_RBP + -0x3c) == 1))
  {
    uVar6 = unaff_RBP - 0x3c;
    iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x40,unaff_EBX + 1,
                          unaff_EBX + 4,uVar6);
    if ((iVar1 == 0) && (*(int *)(unaff_RBP + -0x3c) == 4)) {
      uVar5 = unaff_EBX + 10;
      iVar4 = (((uint)*(byte *)(unaff_RBP + -0x40) * 0x80 + (uint)*(byte *)(unaff_RBP + -0x3f)) *
               0x80 + (uint)*(byte *)(unaff_RBP + -0x3e)) * 0x80 +
              (uint)*(byte *)(unaff_RBP + -0x3d);
      iVar1 = iVar4 + 10;
      if ((*(byte *)(unaff_RBP + -0x38) & 0x10) == 0) {
        iVar1 = iVar4;
      }
      *(int *)(unaff_RBP + -0x24) = iVar1;
      *(int *)(unaff_RBP + -0x30) = iVar1 + 7 + iVar2;
      do {
        *(int32_t *)(unaff_RBP + -0x1f) = 0;
        *(int8_t *)(unaff_RBP + -0x20) = 0;
        if (*(ushort *)(unaff_RBP + -0x34) < 3) {
          iVar2 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x20,3,1,
                                unaff_RBP + -0x3c);
          if ((iVar2 != 0) || (*(int *)(unaff_RBP + -0x3c) != 1)) goto FUN_1807f5506;
          uVar6 = unaff_RBP - 0x3c;
          iVar2 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x40,3,1,uVar6);
          if ((iVar2 != 0) || (*(int *)(unaff_RBP + -0x3c) != 1)) goto FUN_1807f5506;
          unaff_EBX = (uint)CONCAT21(CONCAT11(*(int8_t *)(unaff_RBP + -0x40),
                                              *(int8_t *)(unaff_RBP + -0x3f)),
                                     *(int8_t *)(unaff_RBP + -0x3e));
LAB_1807f52fe:
          if ((((((byte)(*(char *)(unaff_RBP + -0x20) - 0x20U) < 0x60) ||
                (*(char *)(unaff_RBP + -0x20) == '\0')) &&
               (((byte)(*(char *)(unaff_RBP + -0x1f) - 0x20U) < 0x60 ||
                (*(char *)(unaff_RBP + -0x1f) == '\0')))) &&
              (((byte)(*(char *)(unaff_RBP + -0x1e) - 0x20U) < 0x60 ||
               (*(char *)(unaff_RBP + -0x1e) == '\0')))) &&
             (((byte)(*(char *)(unaff_RBP + -0x1d) - 0x20U) < 0x60 ||
              (*(char *)(unaff_RBP + -0x1d) == '\0')))) goto LAB_1807f534a;
        }
        else {
          if (2 < *(ushort *)(unaff_RBP + -0x34)) {
            iVar2 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x20,4,1,
                                  unaff_RBP + -0x3c);
            if (((iVar2 == 0) && (*(int *)(unaff_RBP + -0x3c) == 1)) &&
               ((iVar2 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x40,4,1,
                                       unaff_RBP + -0x3c), iVar2 == 0 &&
                (*(int *)(unaff_RBP + -0x3c) == 1)))) {
              uVar6 = unaff_RBP - 0x3c;
              iVar2 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x2c,2,1,uVar6);
              if ((iVar2 == 0) && (*(int *)(unaff_RBP + -0x3c) == 1)) {
                if (*(short *)(unaff_RBP + -0x34) == 3) {
                  iVar2 = (((uint)*(byte *)(unaff_RBP + -0x40) * 0x100 +
                           (uint)*(byte *)(unaff_RBP + -0x3f)) * 0x100 +
                          (uint)*(byte *)(unaff_RBP + -0x3e)) * 0x100;
                }
                else {
                  iVar2 = (((uint)*(byte *)(unaff_RBP + -0x40) * 0x80 +
                           (uint)*(byte *)(unaff_RBP + -0x3f)) * 0x80 +
                          (uint)*(byte *)(unaff_RBP + -0x3e)) * 0x80;
                }
                unaff_EBX = iVar2 + (uint)*(byte *)(unaff_RBP + -0x3d);
                goto LAB_1807f52fe;
              }
            }
            goto FUN_1807f5506;
          }
LAB_1807f534a:
          if (unaff_EBX - 1 < 0xfffff) {
            lVar3 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_EBX,&unknown_var_4032_ptr,
                                  0x27a,uVar6 & 0xffffffff00000000);
            if (lVar3 == 0) {
              FUN_18076a440(*(uint64_t *)(unaff_R15 + 0x170),*(int32_t *)(unaff_RBP + -0x30),0)
              ;
            }
            else {
              iVar2 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),lVar3,1,unaff_EBX,
                                    unaff_RBP + -0x3c);
              if (iVar2 == 0) {
                if (*(uint *)(unaff_RBP + -0x3c) != unaff_EBX) {
                    // WARNING: Subroutine does not return
                  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_4032_ptr,0x287,1
                               );
                }
                if (*(char *)(unaff_RBP + -0x20) != 'T') {
                  FUN_180772fe0();
                    // WARNING: Subroutine does not return
                  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_4032_ptr,0x2ad,1
                               );
                }
                    // WARNING: Subroutine does not return
                memmove(lVar3,lVar3 + 1,unaff_EBX - 1);
              }
            }
            goto FUN_1807f5506;
          }
        }
        if ((unaff_EBX != 0) &&
           (iVar2 = FUN_18076a440(*(uint64_t *)(unaff_R15 + 0x170),unaff_EBX,1), iVar2 != 0))
        goto FUN_1807f5506;
        uVar5 = uVar5 + 10 + unaff_EBX;
      } while (uVar5 < *(uint *)(unaff_RBP + -0x24));
      FUN_18076a440(*(uint64_t *)(unaff_R15 + 0x170),*(int32_t *)(unaff_RBP + -0x30),0);
    }
  }
FUN_1807f5506:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x18) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f50b2(void)
void FUN_1807f50b2(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint unaff_EBX;
  longlong unaff_RBP;
  int unaff_EDI;
  uint uVar4;
  longlong unaff_R15;
  bool in_ZF;
  ulonglong uVar5;
  
  if (((in_ZF) &&
      (iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x38,1,1,
                             unaff_RBP + -0x3c), iVar1 == 0)) && (*(int *)(unaff_RBP + -0x3c) == 1))
  {
    uVar5 = unaff_RBP - 0x3c;
    iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x40,unaff_EBX + 1,
                          unaff_EBX + 4,uVar5);
    if ((iVar1 == 0) && (*(int *)(unaff_RBP + -0x3c) == 4)) {
      uVar4 = unaff_EBX + 10;
      iVar3 = (((uint)*(byte *)(unaff_RBP + -0x40) * 0x80 + (uint)*(byte *)(unaff_RBP + -0x3f)) *
               0x80 + (uint)*(byte *)(unaff_RBP + -0x3e)) * 0x80 +
              (uint)*(byte *)(unaff_RBP + -0x3d);
      iVar1 = iVar3 + 10;
      if ((*(byte *)(unaff_RBP + -0x38) & 0x10) == 0) {
        iVar1 = iVar3;
      }
      *(int *)(unaff_RBP + -0x24) = iVar1;
      *(int *)(unaff_RBP + -0x30) = iVar1 + 7 + unaff_EDI;
      do {
        *(int32_t *)(unaff_RBP + -0x1f) = 0;
        *(int8_t *)(unaff_RBP + -0x20) = 0;
        if (*(ushort *)(unaff_RBP + -0x34) < 3) {
          iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x20,3,1,
                                unaff_RBP + -0x3c);
          if ((iVar1 != 0) || (*(int *)(unaff_RBP + -0x3c) != 1)) goto LAB_1807f54ec;
          uVar5 = unaff_RBP - 0x3c;
          iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x40,3,1,uVar5);
          if ((iVar1 != 0) || (*(int *)(unaff_RBP + -0x3c) != 1)) goto LAB_1807f54ec;
          unaff_EBX = (uint)CONCAT21(CONCAT11(*(int8_t *)(unaff_RBP + -0x40),
                                              *(int8_t *)(unaff_RBP + -0x3f)),
                                     *(int8_t *)(unaff_RBP + -0x3e));
LAB_1807f52fe:
          if ((((((byte)(*(char *)(unaff_RBP + -0x20) - 0x20U) < 0x60) ||
                (*(char *)(unaff_RBP + -0x20) == '\0')) &&
               (((byte)(*(char *)(unaff_RBP + -0x1f) - 0x20U) < 0x60 ||
                (*(char *)(unaff_RBP + -0x1f) == '\0')))) &&
              (((byte)(*(char *)(unaff_RBP + -0x1e) - 0x20U) < 0x60 ||
               (*(char *)(unaff_RBP + -0x1e) == '\0')))) &&
             (((byte)(*(char *)(unaff_RBP + -0x1d) - 0x20U) < 0x60 ||
              (*(char *)(unaff_RBP + -0x1d) == '\0')))) goto LAB_1807f534a;
        }
        else {
          if (2 < *(ushort *)(unaff_RBP + -0x34)) {
            iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x20,4,1,
                                  unaff_RBP + -0x3c);
            if (((iVar1 == 0) && (*(int *)(unaff_RBP + -0x3c) == 1)) &&
               ((iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x40,4,1,
                                       unaff_RBP + -0x3c), iVar1 == 0 &&
                (*(int *)(unaff_RBP + -0x3c) == 1)))) {
              uVar5 = unaff_RBP - 0x3c;
              iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),unaff_RBP + -0x2c,2,1,uVar5);
              if ((iVar1 == 0) && (*(int *)(unaff_RBP + -0x3c) == 1)) {
                if (*(short *)(unaff_RBP + -0x34) == 3) {
                  iVar1 = (((uint)*(byte *)(unaff_RBP + -0x40) * 0x100 +
                           (uint)*(byte *)(unaff_RBP + -0x3f)) * 0x100 +
                          (uint)*(byte *)(unaff_RBP + -0x3e)) * 0x100;
                }
                else {
                  iVar1 = (((uint)*(byte *)(unaff_RBP + -0x40) * 0x80 +
                           (uint)*(byte *)(unaff_RBP + -0x3f)) * 0x80 +
                          (uint)*(byte *)(unaff_RBP + -0x3e)) * 0x80;
                }
                unaff_EBX = iVar1 + (uint)*(byte *)(unaff_RBP + -0x3d);
                goto LAB_1807f52fe;
              }
            }
            goto LAB_1807f54ec;
          }
LAB_1807f534a:
          if (unaff_EBX - 1 < 0xfffff) {
            lVar2 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_EBX,&unknown_var_4032_ptr,
                                  0x27a,uVar5 & 0xffffffff00000000);
            if (lVar2 == 0) {
              FUN_18076a440(*(uint64_t *)(unaff_R15 + 0x170),*(int32_t *)(unaff_RBP + -0x30),0)
              ;
            }
            else {
              iVar1 = FUN_180769ed0(*(uint64_t *)(unaff_R15 + 0x170),lVar2,1,unaff_EBX,
                                    unaff_RBP + -0x3c);
              if (iVar1 == 0) {
                if (*(uint *)(unaff_RBP + -0x3c) != unaff_EBX) {
                    // WARNING: Subroutine does not return
                  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_4032_ptr,0x287,1
                               );
                }
                if (*(char *)(unaff_RBP + -0x20) != 'T') {
                  FUN_180772fe0();
                    // WARNING: Subroutine does not return
                  FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&unknown_var_4032_ptr,0x2ad,1
                               );
                }
                    // WARNING: Subroutine does not return
                memmove(lVar2,lVar2 + 1,unaff_EBX - 1);
              }
            }
            goto LAB_1807f54ec;
          }
        }
        if ((unaff_EBX != 0) &&
           (iVar1 = FUN_18076a440(*(uint64_t *)(unaff_R15 + 0x170),unaff_EBX,1), iVar1 != 0))
        goto LAB_1807f54ec;
        uVar4 = uVar4 + 10 + unaff_EBX;
      } while (uVar4 < *(uint *)(unaff_RBP + -0x24));
      FUN_18076a440(*(uint64_t *)(unaff_R15 + 0x170),*(int32_t *)(unaff_RBP + -0x30),0);
    }
  }
LAB_1807f54ec:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x18) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807f5506(void)
void FUN_1807f5506(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x18) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807f550e(void)
void FUN_1807f550e(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x18) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f5530(longlong param_1)
void FUN_1807f5530(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int8_t auStack_78 [32];
  int *piStack_58;
  byte abStack_48 [4];
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  int8_t auStack_34 [4];
  int aiStack_30 [2];
  longlong lStack_28;
  longlong lStack_20;
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_78;
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),0xffffff80,2);
  while (iVar1 == 0) {
    piStack_58 = &iStack_44;
    iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&lStack_28,1);
    if ((iVar1 != 0) || (iStack_44 != 3)) goto LAB_1807f5961;
    iVar1 = func_0x00018076b6b0(&lStack_28,&unknown_var_7324_ptr,3);
    if (iVar1 == 0) {
      iVar1 = FUN_1807f4c40(param_1);
      if (iVar1 != 0) goto LAB_1807f5961;
      uVar4 = uVar4 - 0x80;
      iVar1 = func_0x00018076a7d0(*(uint64_t *)(param_1 + 0x170),&uStack_3c);
      if (iVar1 != 0) goto LAB_1807f5961;
      if (uStack_3c < 0x81) break;
    }
    else {
      iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),uVar4 - 10,2);
      if (iVar1 != 0) {
        if (iVar1 != 0xe) goto LAB_1807f5961;
        break;
      }
      piStack_58 = &iStack_44;
      iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&lStack_28,1);
      if ((iVar1 != 0) || (iStack_44 != 3)) goto LAB_1807f5961;
      iVar1 = func_0x00018076b6b0(&lStack_28,&unknown_var_3976_ptr,3);
      if (iVar1 != 0) break;
      piStack_58 = &iStack_40;
      iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),auStack_34,1);
      if ((iVar1 != 0) || (iStack_40 != 2)) goto LAB_1807f5961;
      piStack_58 = &iStack_40;
      iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),abStack_48,1);
      if ((iVar1 != 0) || (iStack_40 != 1)) goto LAB_1807f5961;
      piStack_58 = &iStack_40;
      iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&cStack_38,1);
      if ((iVar1 != 0) || (iStack_40 != 4)) goto LAB_1807f5961;
      iVar2 = ((cStack_38 * 0x80 + (int)cStack_37) * 0x80 + (int)cStack_36) * 0x80 + (int)cStack_35;
      iVar1 = iVar2 + 10;
      if ((abStack_48[0] & 0x10) == 0) {
        iVar1 = iVar2;
      }
      iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),3 - iVar1,1);
      if ((((iVar1 != 0) ||
           (iVar2 = func_0x00018076a7d0(*(uint64_t *)(param_1 + 0x170),aiStack_30),
           iVar1 = aiStack_30[0], iVar2 != 0)) || (iVar2 = FUN_1807f5040(param_1), iVar2 != 0)) ||
         ((iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),iVar1 + -3,0), iVar1 != 0 ||
          (iVar1 = func_0x00018076a7d0(*(uint64_t *)(param_1 + 0x170),&uStack_3c),
          uVar4 = uStack_3c, iVar1 != 0)))) goto LAB_1807f5961;
    }
    iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),uVar4 - 0x80,2);
  }
  iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),0,0);
  if (iVar1 == 0) {
    piStack_58 = &iStack_44;
    iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&lStack_28,1);
    if (iVar1 == 0) {
      while (iStack_44 == 0x10) {
        iVar1 = func_0x00018076b6b0(&lStack_28,&unknown_var_7324_ptr,3);
        if (iVar1 == 0) {
          iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),0xfffffff3,1);
          if (iVar1 != 0) break;
          iVar1 = FUN_1807f4c40(param_1);
        }
        else {
          iVar1 = func_0x00018076b6b0(&lStack_28,&unknown_var_3980_ptr,3);
          if (iVar1 != 0) {
            if ((lStack_28 == 0x11cf668e75b22630) && (lStack_20 == 0x6cce6200aa00d9a6)) {
              iVar1 = FUN_1807f4270(param_1);
              if (iVar1 == 0) {
                FUN_18076a440(*(uint64_t *)(param_1 + 0x170),uVar3,0);
              }
            }
            else {
              FUN_18076a440(*(uint64_t *)(param_1 + 0x170),uVar3,0);
            }
            break;
          }
          iVar1 = FUN_18076a440(*(uint64_t *)(param_1 + 0x170),0xfffffff3,1);
          if (iVar1 != 0) break;
          iVar1 = FUN_1807f5040(param_1);
        }
        if ((iVar1 != 0) ||
           (iVar1 = func_0x00018076a7d0(*(uint64_t *)(param_1 + 0x170),&uStack_3c),
           uVar3 = uStack_3c, iVar1 != 0)) break;
        piStack_58 = &iStack_44;
        iVar1 = FUN_180769ed0(*(uint64_t *)(param_1 + 0x170),&lStack_28,1);
        if (iVar1 != 0) break;
      }
    }
  }
LAB_1807f5961:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}



ulonglong FUN_1807f59c0(longlong param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)

{
  char cVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_180767db0(*(longlong *)(param_1 + 0x198) + 0x10);
    if (cVar1 != '\0') {
      FUN_18076abd0(1);
    }
  }
  uVar2 = FUN_1807685b0(*(uint64_t *)(param_1 + 0x1f0),param_2,param_3,param_4);
  if (cVar1 != '\0') {
    FUN_18076abd0(0);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



int FUN_1807f5af0(longlong *param_1,longlong *param_2,int32_t *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  void *puVar3;
  
  *param_2 = param_1[0x45];
  if ((param_1[0x43] == 0) &&
     ((param_1[0x41] != 0 || (*(longlong *)(param_1[0x33] + 0x11808) == 0)))) {
    iVar2 = (**(code **)(*param_1 + 0x30))
                      (param_1,param_2[4],*(int32_t *)((longlong)param_2 + 0xc),param_2 + 5);
  }
  else {
    puVar3 = &unknown_var_7264_ptr;
    *(int32_t *)((longlong)param_1 + 0x1dc) = 0x2e;
    if (param_4 == '\0') {
      puVar3 = &unknown_var_7248_ptr;
    }
    param_2[6] = (longlong)puVar3;
    if ((code *)param_1[0x43] == (code *)0x0) {
      if (*(code **)(param_1[0x33] + 0x11808) != (code *)0x0) {
        (**(code **)(param_1[0x33] + 0x11808))(param_2,param_1[0x46]);
      }
    }
    else {
      (*(code *)param_1[0x43])(param_2,param_1[0x46]);
    }
    if (param_4 == '\0') {
      iVar2 = *(int *)((longlong)param_1 + 0x1dc);
      if (iVar2 == 0x2e) {
        return 0x2e;
      }
    }
    else if (param_1[0x3e] == 0) {
      iVar2 = *(int *)((longlong)param_1 + 0x1dc);
      iVar1 = 0x2e;
      while ((iVar2 == 0x2e && (iVar2 = iVar1, *(char *)((longlong)param_1 + 0x3c) == '\0'))) {
        FUN_180768bf0(10);
        iVar2 = *(int *)((longlong)param_1 + 0x1dc);
        iVar1 = iVar2;
      }
    }
    else {
      FUN_180768940();
      iVar2 = *(int *)((longlong)param_1 + 0x1dc);
    }
  }
  *param_3 = (int)param_2[5];
  return iVar2;
}



uint64_t FUN_1807f5cc0(longlong param_1)

{
  code *pcVar1;
  
  if (*(code **)(param_1 + 0x200) == (code *)0x0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x198) + 0x117f0);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(uint64_t *)(param_1 + 0x228),*(uint64_t *)(param_1 + 0x230));
    }
  }
  else {
    (**(code **)(param_1 + 0x200))
              (*(uint64_t *)(param_1 + 0x228),*(uint64_t *)(param_1 + 0x230));
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1807688f0();
    *(uint64_t *)(param_1 + 0x1f0) = 0;
  }
  return 0;
}



ulonglong FUN_1807f5d30(longlong *param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((code *)param_1[0x3f] == (code *)0x0) {
    if (*(code **)(param_1[0x33] + 0x117e8) != (code *)0x0) {
      uVar1 = (**(code **)(param_1[0x33] + 0x117e8))(param_2,param_3,param_1 + 0x45,param_1[0x46]);
      goto LAB_1807f5d91;
    }
  }
  else {
    uVar1 = (*(code *)param_1[0x3f])(param_2,param_3,param_1 + 0x45,param_1[0x46]);
LAB_1807f5d91:
    uVar3 = (ulonglong)uVar1;
    if (uVar1 != 0) goto LAB_1807f5dba;
  }
  uVar1 = (**(code **)(*param_1 + 0x38))(param_1,0);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == 0xe) {
    *(uint *)((longlong)param_1 + 0x194) = *(uint *)((longlong)param_1 + 0x194) & 0xfffffffe;
    uVar3 = 0;
  }
LAB_1807f5dba:
  param_1[0x3e] = 0;
  if ((param_1[0x43] != 0) ||
     ((param_1[0x41] == 0 && (*(longlong *)(param_1[0x33] + 0x11808) != 0)))) {
    uVar2 = FUN_1807688b0(param_1 + 0x3e);
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return uVar3;
}



uint64_t FUN_1807f5e10(longlong param_1)

{
  uint64_t uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 0x208);
  if ((pcVar2 == (code *)0x0) &&
     (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x198) + 0x117f8), pcVar2 == (code *)0x0)) {
    *(int32_t *)(param_1 + 0x1dc) = 0;
    return 0;
  }
  uVar1 = (*pcVar2)(*(uint64_t *)(param_1 + 0x228));
  *(int *)(param_1 + 0x1dc) = (int)uVar1;
  return uVar1;
}



uint64_t FUN_1807f5e70(longlong param_1,uint64_t param_2)

{
  code *pcVar1;
  uint64_t uVar2;
  
  if ((*(longlong *)(param_1 + 0x218) == 0) &&
     ((*(longlong *)(param_1 + 0x208) != 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0x198) + 0x11808) == 0)))) {
    if (*(code **)(param_1 + 0x210) == (code *)0x0) {
      pcVar1 = *(code **)(*(longlong *)(param_1 + 0x198) + 0x11800);
      if ((pcVar1 != (code *)0x0) &&
         (uVar2 = (*pcVar1)(*(uint64_t *)(param_1 + 0x228),param_2,
                            *(uint64_t *)(param_1 + 0x230)), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
    else {
      uVar2 = (**(code **)(param_1 + 0x210))
                        (*(uint64_t *)(param_1 + 0x228),param_2,*(uint64_t *)(param_1 + 0x230));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return 0;
}






// 函数: void FUN_1807f5ef0(uint64_t *param_1)
void FUN_1807f5ef0(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  func_0x000180768c10();
  *param_1 = &unknown_var_4200_ptr;
  puVar1 = param_1 + 0x42;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = puVar1;
  *puVar1 = puVar1;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(int32_t *)(param_1 + 0x49) = 0;
  *(int32_t *)(param_1 + 0x4a) = 0;
  *(int16_t *)((longlong)param_1 + 0x24c) = 1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(int8_t *)(param_1 + 0x4b) = 0;
  *(int32_t *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x3e] = 0xffffffffffffffff;
  *(uint *)((longlong)param_1 + 0x194) = *(uint *)((longlong)param_1 + 0x194) & 0xfffffffe;
  *(int32_t *)(param_1 + 7) = 3;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x4c,0,0x100);
}



uint64_t * FUN_1807f5fa0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_1552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x2288);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




