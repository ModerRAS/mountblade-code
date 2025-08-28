#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part546.c - 7 个函数

// 函数: void FUN_180568ac0(uint64_t *param_1,void **param_2)
void FUN_180568ac0(uint64_t *param_1,void **param_2)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int32_t uVar6;
  void *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  int8_t auStack_bf8 [32];
  int *piStack_bd8;
  void *puStack_bd0;
  int8_t *puStack_bc8;
  uint uStack_bb8;
  uint uStack_bb4;
  int iStack_bb0;
  uint uStack_bac;
  uint uStack_ba8;
  int iStack_ba4;
  uint uStack_ba0;
  uint uStack_b9c;
  int iStack_b98;
  uint uStack_b94;
  uint uStack_b90;
  int iStack_b8c;
  uint uStack_b88;
  uint uStack_b84;
  uint uStack_b80;
  int iStack_b7c;
  uint uStack_b78;
  uint uStack_b74;
  int *piStack_b70;
  int *piStack_b68;
  void *puStack_b60;
  int16_t uStack_b58;
  int8_t uStack_b56;
  longlong lStack_b50;
  longlong lStack_b48;
  longlong lStack_b40;
  int16_t uStack_b38;
  int8_t uStack_b36;
  longlong alStack_b30 [2];
  uint64_t *puStack_b20;
  void **ppuStack_b18;
  void *puStack_b10;
  void *puStack_b08;
  uint uStack_b00;
  int32_t uStack_af8;
  int8_t auStack_aec [4];
  void *puStack_ae8;
  int8_t uStack_ae0;
  uint64_t uStack_ad8;
  void **ppuStack_ad0;
  int8_t auStack_ac8 [24];
  char cStack_ab0;
  void *puStack_aa8;
  longlong lStack_aa0;
  int32_t uStack_a90;
  int8_t auStack_a88 [64];
  int8_t auStack_a48 [1024];
  int8_t auStack_648 [512];
  int8_t auStack_448 [512];
  int8_t auStack_248 [512];
  ulonglong uStack_48;
  
  uStack_ad8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_bf8;
  uVar9 = 0;
  puStack_b20 = param_1;
  ppuStack_b18 = param_2;
  ppuStack_ad0 = param_2;
  FUN_180569560();
  FUN_1800baa40(&puStack_b10);
  if (0 < *(int *)(param_2 + 2)) {
    FUN_1806277c0(&puStack_b10,uStack_b00 + *(int *)(param_2 + 2));
                    // WARNING: Subroutine does not return
    memcpy(puStack_b08 + uStack_b00,param_2[1],(longlong)(*(int *)(param_2 + 2) + 1));
  }
  alStack_b30[0] = -1;
  puVar7 = &system_buffer_ptr;
  if (puStack_b08 != (void *)0x0) {
    puVar7 = puStack_b08;
  }
  FUN_18063ba00(alStack_b30,puVar7,5,0x104);
  lVar12 = alStack_b30[0];
  uVar8 = uVar9;
  if (alStack_b30[0] == -1) {
    puStack_bd0 = &system_buffer_ptr;
    if (param_2[1] != (void *)0x0) {
      puStack_bd0 = param_2[1];
    }
    piStack_bd8 = (int *)&unknown_var_8736_ptr;
    FUN_1800623b0(system_message_context,0,0x10000000000,8);
    puVar7 = &system_buffer_ptr;
    if (param_2[1] != (void *)0x0) {
      puVar7 = param_2[1];
    }
    FUN_180627160(&unknown_var_8776_ptr,puVar7);
    goto LAB_1805693bf;
  }
  do {
    uVar10 = 0x1000000;
    if (4 - uVar8 < 0x1000000) {
      uVar10 = 4 - uVar8 & 0xffffffff;
    }
    uStack_bb8 = 0;
    piStack_bd8 = (int *)0x0;
    iVar4 = ReadFile(lVar12,(longlong)&iStack_bb0 + uVar8,uVar10,&uStack_bb8);
    if (iVar4 == 0) goto LAB_18056945f;
  } while ((uStack_bb8 != 0) && (uVar8 = uVar8 + uStack_bb8, uVar8 < 4));
  if (uVar8 == 4) {
    iVar4 = 0x200;
    if (iStack_bb0 + 1 < 0x200) {
      iVar4 = iStack_bb0 + 1;
    }
    uVar8 = uVar9;
    uVar10 = uVar9;
    if (iVar4 != 0) {
      do {
        uVar10 = (longlong)iVar4 - uVar8;
        uVar11 = 0x1000000;
        if (uVar10 < 0x1000000) {
          uVar11 = uVar10 & 0xffffffff;
        }
        uStack_bb4 = 0;
        piStack_bd8 = (int *)0x0;
        iVar5 = ReadFile(lVar12,auStack_648 + uVar8,uVar11,&uStack_bb4);
        uVar10 = uVar9;
      } while (((iVar5 != 0) && (uVar10 = uVar8, uStack_bb4 != 0)) &&
              (uVar10 = uVar8 + uStack_bb4, uVar8 = uVar10, uVar10 < (ulonglong)(longlong)iVar4));
    }
    iVar4 = 0x200;
    if (iStack_bb0 + 1 < 0x200) {
      iVar4 = iStack_bb0 + 1;
    }
    uVar8 = uVar9;
    if (uVar10 == (longlong)iVar4) {
      do {
        uVar10 = 0x1000000;
        if (4 - uVar8 < 0x1000000) {
          uVar10 = 4 - uVar8 & 0xffffffff;
        }
        uStack_bac = 0;
        piStack_bd8 = (int *)0x0;
        iVar4 = ReadFile(lVar12,(longlong)&iStack_ba4 + uVar8,uVar10,&uStack_bac);
        if (iVar4 == 0) goto LAB_18056945f;
      } while ((uStack_bac != 0) && (uVar8 = uVar8 + uStack_bac, uVar8 < 4));
      if (uVar8 == 4) {
        iVar4 = 0x200;
        if (iStack_ba4 + 1 < 0x200) {
          iVar4 = iStack_ba4 + 1;
        }
        uVar8 = uVar9;
        uVar10 = uVar9;
        if (iVar4 != 0) {
          do {
            uVar10 = (longlong)iVar4 - uVar8;
            uVar11 = 0x1000000;
            if (uVar10 < 0x1000000) {
              uVar11 = uVar10 & 0xffffffff;
            }
            uStack_ba8 = 0;
            piStack_bd8 = (int *)0x0;
            iVar5 = ReadFile(lVar12,auStack_448 + uVar8,uVar11,&uStack_ba8);
            uVar10 = uVar9;
          } while (((iVar5 != 0) && (uVar10 = uVar8, uStack_ba8 != 0)) &&
                  (uVar8 = uVar8 + uStack_ba8, uVar10 = uVar8, uVar8 < (ulonglong)(longlong)iVar4));
        }
        iVar4 = 0x200;
        if (iStack_ba4 + 1 < 0x200) {
          iVar4 = iStack_ba4 + 1;
        }
        uVar8 = uVar9;
        if (uVar10 == (longlong)iVar4) {
          do {
            uVar10 = 0x1000000;
            if (4 - uVar8 < 0x1000000) {
              uVar10 = 4 - uVar8 & 0xffffffff;
            }
            uStack_ba0 = 0;
            piStack_bd8 = (int *)0x0;
            iVar4 = ReadFile(lVar12,(longlong)&iStack_b98 + uVar8,uVar10,&uStack_ba0);
            if (iVar4 == 0) goto LAB_18056945f;
          } while ((uStack_ba0 != 0) && (uVar8 = uVar8 + uStack_ba0, uVar8 < 4));
          if (uVar8 == 4) {
            iVar4 = 0x200;
            if (iStack_b98 + 1 < 0x200) {
              iVar4 = iStack_b98 + 1;
            }
            uVar8 = uVar9;
            uVar10 = uVar9;
            if (iVar4 != 0) {
              do {
                uVar10 = (longlong)iVar4 - uVar8;
                uVar11 = 0x1000000;
                if (uVar10 < 0x1000000) {
                  uVar11 = uVar10 & 0xffffffff;
                }
                uStack_b9c = 0;
                piStack_bd8 = (int *)0x0;
                iVar5 = ReadFile(lVar12,auStack_248 + uVar8,uVar11,&uStack_b9c);
                uVar10 = uVar9;
              } while (((iVar5 != 0) && (uVar10 = uVar8, uStack_b9c != 0)) &&
                      (uVar8 = uVar8 + uStack_b9c, uVar10 = uVar8,
                      uVar8 < (ulonglong)(longlong)iVar4));
            }
            iVar4 = 0x200;
            if (iStack_b98 + 1 < 0x200) {
              iVar4 = iStack_b98 + 1;
            }
            uVar8 = uVar9;
            if (uVar10 == (longlong)iVar4) {
              do {
                uVar10 = 0x1000000;
                if (4 - uVar8 < 0x1000000) {
                  uVar10 = 4 - uVar8 & 0xffffffff;
                }
                uStack_b94 = 0;
                piStack_bd8 = (int *)0x0;
                iVar4 = ReadFile(lVar12,(longlong)&iStack_b8c + uVar8,uVar10,&uStack_b94);
                if (iVar4 == 0) goto LAB_18056945f;
              } while ((uStack_b94 != 0) && (uVar8 = uVar8 + uStack_b94, uVar8 < 4));
              if (uVar8 == 4) {
                iVar4 = 0x40;
                if (iStack_b8c + 1 < 0x40) {
                  iVar4 = iStack_b8c + 1;
                }
                uVar8 = uVar9;
                uVar10 = uVar9;
                if (iVar4 != 0) {
                  do {
                    uVar10 = (longlong)iVar4 - uVar8;
                    uVar11 = 0x1000000;
                    if (uVar10 < 0x1000000) {
                      uVar11 = uVar10 & 0xffffffff;
                    }
                    uStack_b90 = 0;
                    piStack_bd8 = (int *)0x0;
                    iVar5 = ReadFile(lVar12,auStack_a88 + uVar8,uVar11,&uStack_b90);
                    uVar10 = uVar9;
                  } while (((iVar5 != 0) && (uVar10 = uVar8, uStack_b90 != 0)) &&
                          (uVar10 = uVar8 + uStack_b90, uVar8 = uVar10,
                          uVar10 < (ulonglong)(longlong)iVar4));
                }
                iVar4 = 0x40;
                if (iStack_b8c + 1 < 0x40) {
                  iVar4 = iStack_b8c + 1;
                }
                uVar8 = uVar9;
                if (uVar10 == (longlong)iVar4) {
                  do {
                    uVar10 = 0x1000000;
                    if (4 - uVar8 < 0x1000000) {
                      uVar10 = 4 - uVar8 & 0xffffffff;
                    }
                    uStack_b88 = 0;
                    piStack_bd8 = (int *)0x0;
                    iVar4 = ReadFile(lVar12,auStack_aec + uVar8,uVar10,&uStack_b88);
                    if (iVar4 == 0) goto LAB_18056945f;
                  } while ((uStack_b88 != 0) && (uVar8 = uVar8 + uStack_b88, uVar8 < 4));
                  uVar10 = uVar9;
                  if (uVar8 == 4) {
                    do {
                      uVar8 = 0x1000000;
                      if (4 - uVar10 < 0x1000000) {
                        uVar8 = 4 - uVar10 & 0xffffffff;
                      }
                      uStack_b84 = 0;
                      piStack_bd8 = (int *)0x0;
                      iVar4 = ReadFile(lVar12,(longlong)&iStack_b7c + uVar10,uVar8,&uStack_b84);
                      if (iVar4 == 0) goto LAB_18056945f;
                    } while ((uStack_b84 != 0) && (uVar10 = uVar10 + uStack_b84, uVar10 < 4));
                    if (uVar10 == 4) {
                      do {
                        uVar8 = 0x1000000;
                        if (4 - uVar9 < 0x1000000) {
                          uVar8 = 4 - uVar9 & 0xffffffff;
                        }
                        uStack_b80 = 0;
                        piStack_bd8 = (int *)0x0;
                        iVar4 = ReadFile(lVar12,(longlong)&uStack_b74 + uVar9,uVar8,&uStack_b80);
                        if (iVar4 == 0) goto LAB_18056945f;
                      } while ((uStack_b80 != 0) && (uVar9 = uVar9 + uStack_b80, uVar9 < 4));
                      if (uVar9 == 4) {
                        lStack_b50 = 0;
                        lStack_b40 = 0;
                        uStack_b38 = 0;
                        uStack_b36 = 3;
                        lStack_b48 = 0;
                        FUN_180639bf0(&lStack_b50,(longlong)(iStack_b7c + 1));
                        piStack_b70 = (int *)0x0;
                        puStack_b60 = (void *)0x0;
                        uStack_b58 = 0;
                        uStack_b56 = 3;
                        piStack_b68 = (int *)0x0;
                        FUN_180639bf0(&piStack_b70,(longlong)(iStack_b7c + 1));
                        uVar1 = uStack_b74;
                        uVar9 = (ulonglong)uStack_b74;
                        if (uStack_b74 == 0) {
LAB_1805691fd:
                          LOCK();
                          SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
                          UNLOCK();
                          CloseHandle(alStack_b30[0]);
                          lVar12 = -1;
                          alStack_b30[0] = -1;
                          puStack_ae8 = &unknown_var_3856_ptr;
                          uStack_ae0 = 1;
                          puStack_bd0 = puStack_b60;
                          piStack_bd8 = piStack_b68;
                          FUN_18021f710(&puStack_ae8,auStack_ac8,lStack_b48,
                                        (longlong)(int)uStack_b74);
                          piVar2 = piStack_b70;
                          if ((cStack_ab0 == '\0') &&
                             (piStack_b68 = piStack_b70 + 1, 0 < *piStack_b70)) {
                            iVar4 = *piStack_b68;
                            piVar13 = piStack_b70 + 2;
                            piStack_b68 = piVar13;
                            lVar12 = FUN_1805696d0(puStack_b20);
                            *(int *)(lVar12 + 0x5a0) = *piVar13;
                            *(int32_t *)(lVar12 + 0x5a4) = 0;
                            piVar13 = piVar2 + 4;
                            *(double *)(lVar12 + 0x5a8) = (double)(float)piVar2[3];
                            piStack_b68 = piVar13;
                            FUN_18055f4e0(lVar12,iVar4);
                            FUN_180569620(lVar12,iVar4);
                    // WARNING: Subroutine does not return
                            memcpy(*(uint64_t *)(lVar12 + 0x598),piVar13,
                                   (longlong)
                                   (int)((uint)((*(uint *)(lVar12 + 0x5c8) & 7) != 0) +
                                        ((int)*(uint *)(lVar12 + 0x5c8) >> 3)));
                          }
                          ppuStack_b18 = &puStack_aa8;
                          puStack_aa8 = &unknown_var_3456_ptr;
                          if (lStack_aa0 != 0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900();
                          }
                          lStack_aa0 = 0;
                          uStack_a90 = 0;
                          puStack_aa8 = &unknown_var_720_ptr;
                          lVar14 = lStack_b50;
                        }
                        else {
                          if ((ulonglong)((lStack_b40 - lStack_b48) + lStack_b50) <= uVar9) {
                            FUN_180639bf0(&lStack_b50,uVar9 + (lStack_b48 - lStack_b50));
                          }
                          lVar3 = lStack_b48;
                          lVar14 = lStack_b50;
                          uVar8 = 0;
                          if (uVar1 != 0) {
                            while( true ) {
                              uVar10 = 0x1000000;
                              if (uVar9 - uVar8 < 0x1000000) {
                                uVar10 = uVar9 - uVar8 & 0xffffffff;
                              }
                              uStack_b78 = 0;
                              piStack_bd8 = (int *)0x0;
                              iVar4 = ReadFile(lVar12,lVar3 + uVar8,uVar10,&uStack_b78);
                              if (iVar4 == 0) break;
                              if ((uStack_b78 == 0) || (uVar8 = uVar8 + uStack_b78, uVar9 <= uVar8))
                              goto LAB_180569148;
                            }
                            uVar8 = 0;
                          }
LAB_180569148:
                          if ((uint)uVar8 == uVar1) goto LAB_1805691fd;
                          uVar6 = GetLastError();
                          puStack_bc8 = (int8_t *)0x0;
                          puStack_bd0 = (void *)CONCAT44(puStack_bd0._4_4_,0x400);
                          piStack_bd8 = (int *)auStack_a48;
                          iVar4 = FormatMessageA(0x1000,0,uVar6,0x400);
                          if (iVar4 == 0) {
                            uVar6 = GetLastError();
                            FUN_180626f80(&unknown_var_3400_ptr,uVar6);
                          }
                          puStack_bd0 = &system_buffer_ptr;
                          if (param_2[1] != (void *)0x0) {
                            puStack_bd0 = param_2[1];
                          }
                          puStack_bc8 = auStack_a48;
                          piStack_bd8 = (int *)&unknown_var_8672_ptr;
                          FUN_1800623b0(system_message_context,0,0x10000000000,3);
                        }
                        if (((char)uStack_b58 == '\0') && (piStack_b70 != (int *)0x0)) {
                    // WARNING: Subroutine does not return
                          FUN_18064e900(piStack_b70);
                        }
                        if (((char)uStack_b38 == '\0') && (lVar14 != 0)) {
                    // WARNING: Subroutine does not return
                          FUN_18064e900(lVar14);
                        }
                        goto LAB_1805693bf;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_18056945f:
  uVar6 = GetLastError();
  puStack_bc8 = (int8_t *)0x0;
  puStack_bd0 = (void *)CONCAT44(puStack_bd0._4_4_,0x400);
  piStack_bd8 = (int *)auStack_a48;
  iVar4 = FormatMessageA(0x1000,0,uVar6,0x400);
  if (iVar4 == 0) {
    uVar6 = GetLastError();
    FUN_180626f80(&unknown_var_3400_ptr,uVar6);
  }
  puStack_bd0 = &system_buffer_ptr;
  if (param_2[1] != (void *)0x0) {
    puStack_bd0 = param_2[1];
  }
  puStack_bc8 = auStack_a48;
  piStack_bd8 = (int *)&unknown_var_8672_ptr;
  FUN_1800623b0(system_message_context,0,0x10000000000,3);
LAB_1805693bf:
  puStack_b20[0xcd] = *puStack_b20;
  if (lVar12 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(alStack_b30[0]);
    alStack_b30[0] = -1;
  }
  puStack_b10 = &unknown_var_3456_ptr;
  if (puStack_b08 == (void *)0x0) {
    puStack_b08 = (void *)0x0;
    uStack_af8 = 0;
    puStack_b10 = &unknown_var_720_ptr;
    *param_2 = &unknown_var_3456_ptr;
    if (param_2[1] == (void *)0x0) {
      param_2[1] = (void *)0x0;
      *(int32_t *)(param_2 + 3) = 0;
      *param_2 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_bf8);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180569560(longlong *param_1)
void FUN_180569560(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != param_1) {
    do {
      lVar1 = plVar2[2];
      plVar2 = (longlong *)*plVar2;
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + 0x588) == 0) {
          *(uint64_t *)(lVar1 + 0x588) = 0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar1);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    } while (plVar2 != param_1);
    plVar2 = (longlong *)*param_1;
  }
  if (plVar2 == param_1) {
    *param_1 = (longlong)param_1;
    param_1[1] = (longlong)param_1;
    param_1[3] = 0;
    *(int32_t *)(param_1 + 0xbe) = 0;
    *(uint64_t *)((longlong)param_1 + 0x5e4) = 0;
                    // WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
    memset(param_1[0xb7],0,(longlong)((int)param_1[0xb6] >> 3));
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar2);
}





// 函数: void FUN_18056957c(void)
void FUN_18056957c(void)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  
  while( true ) {
    lVar1 = unaff_RBX[2];
    unaff_RBX = (longlong *)*unaff_RBX;
    if (lVar1 != 0) break;
    if (unaff_RBX == unaff_RDI) {
      if ((longlong *)*unaff_RDI != unaff_RDI) {
                    // WARNING: Subroutine does not return
        FUN_18064e900((longlong *)*unaff_RDI);
      }
      *unaff_RDI = (longlong)unaff_RDI;
      unaff_RDI[1] = (longlong)unaff_RDI;
      unaff_RDI[3] = unaff_RBP;
      *(int *)(unaff_RDI + 0xbe) = (int)unaff_RBP;
      *(longlong *)((longlong)unaff_RDI + 0x5e4) = unaff_RBP;
                    // WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
      memset(unaff_RDI[0xb7],0,(longlong)((int)unaff_RDI[0xb6] >> 3));
      return;
    }
  }
  if (*(longlong *)(lVar1 + 0x588) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong *)(lVar1 + 0x588) = unaff_RBP;
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar1);
}





// 函数: void FUN_1805695ba(void)
void FUN_1805695ba(void)

{
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  longlong unaff_RDI;
  
  if (unaff_RBX != unaff_RDI) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong *)unaff_RDI = unaff_RDI;
  *(longlong *)(unaff_RDI + 8) = unaff_RDI;
  *(uint64_t *)(unaff_RDI + 0x18) = unaff_RBP;
  *(int *)(unaff_RDI + 0x5f0) = (int)unaff_RBP;
  *(uint64_t *)(unaff_RDI + 0x5e4) = unaff_RBP;
                    // WARNING: Could not recover jumptable at 0x0001808ffc3b. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memset(*(uint64_t *)(unaff_RDI + 0x5b8),0,(longlong)(*(int *)(unaff_RDI + 0x5b0) >> 3));
  return;
}





// 函数: void FUN_180569620(longlong param_1,int param_2)
void FUN_180569620(longlong param_1,int param_2)

{
  FUN_18055f4e0(param_1,*(int *)(param_1 + 0x5c4) + param_2);
  *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + param_2;
  if (*(int *)(param_1 + 0x5c8) < *(int *)(param_1 + 0x5c4)) {
    *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c4);
  }
  return;
}





// 函数: void FUN_180569670(longlong param_1)
void FUN_180569670(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x5c4) & 7;
  iVar2 = 8 - uVar1;
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    FUN_18055f4e0(param_1,*(uint *)(param_1 + 0x5c4) + iVar2);
    *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + iVar2;
    if (*(int *)(param_1 + 0x5c8) < *(int *)(param_1 + 0x5c4)) {
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c4);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805696d0(void)
void FUN_1805696d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18062b1e0(system_memory_pool_ptr,0x5d0,8,3);
  *(uint64_t *)(lVar1 + 0x598) = 0;
  *(int32_t *)(lVar1 + 0x590) = 0;
  *(uint64_t *)(lVar1 + 0x5a0) = 0;
  *(uint64_t *)(lVar1 + 0x588) = 0;
  *(uint64_t *)(lVar1 + 0x5a0) = render_system_memory;
  *(uint64_t *)(lVar1 + 0x5c0) = 0;
  *(longlong *)(lVar1 + 0x598) = lVar1;
  *(int32_t *)(lVar1 + 0x590) = 0x2c40;
  *(int32_t *)(lVar1 + 0x5c8) = 0;
                    // WARNING: Subroutine does not return
  memset(lVar1,0,0x588);
}





