#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part075_sub002_sub002.c - 1 个函数

// 函数: void FUN_18087c9b0(uint64_t param_1,uint64_t param_2)
void FUN_18087c9b0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18086acf0();
  if (iVar1 == 0) {
    iVar1 = FUN_18086ab10(param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_18086c290(param_1,param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_18086b2d0(param_1,param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_18086b8b0(param_1,param_2);
          if (iVar1 == 0) {
            iVar1 = FUN_180869d10(param_1,param_2);
            if (iVar1 == 0) {
              iVar1 = FUN_18086be90(param_1,param_2);
              if (iVar1 == 0) {
                iVar1 = FUN_18086c670(param_1,param_2);
                if (iVar1 == 0) {
                  iVar1 = FUN_18086c870(param_1,param_2);
                  if (iVar1 == 0) {
                    iVar1 = FUN_18086d070(param_1,param_2);
                    if (iVar1 == 0) {
                      iVar1 = FUN_18086ce70(param_1,param_2);
                      if (iVar1 == 0) {
                        iVar1 = FUN_18086a710(param_1,param_2);
                        if (iVar1 == 0) {
                          iVar1 = FUN_18086d270(param_1,param_2);
                          if (iVar1 == 0) {
                            iVar1 = FUN_18086a510(param_1,param_2);
                            if (iVar1 == 0) {
                              iVar1 = FUN_180869f10(param_1,param_2);
                              if (iVar1 == 0) {
                                iVar1 = FUN_18086ca70(param_1,param_2);
                                if (iVar1 == 0) {
                                  iVar1 = FUN_18086aed0(param_1,param_2);
                                  if (iVar1 == 0) {
                                    iVar1 = FUN_180869b10(param_1,param_2);
                                    if (iVar1 == 0) {
                                      iVar1 = FUN_18086b6b0(param_1,param_2);
                                      if (iVar1 == 0) {
                                        iVar1 = FUN_18086c470(param_1,param_2);
                                        if (iVar1 == 0) {
                                          iVar1 = FUN_18086c090(param_1,param_2);
                                          if (iVar1 == 0) {
                                            iVar1 = FUN_18086a110(param_1,param_2);
                                            if (iVar1 == 0) {
                                              iVar1 = FUN_18086b4b0(param_1,param_2);
                                              if (iVar1 == 0) {
                                                iVar1 = FUN_18086a910(param_1,param_2);
                                                if (iVar1 == 0) {
                                                  iVar1 = FUN_18086bc90(param_1,param_2);
                                                  if (iVar1 == 0) {
                                                    iVar1 = FUN_18086ba90(param_1,param_2);
                                                    if (iVar1 == 0) {
                                                      iVar1 = FUN_18086a310(param_1,param_2);
                                                      if (iVar1 == 0) {
                                                        iVar1 = FUN_18086b0d0(param_1,param_2);
                                                        if (iVar1 == 0) {
                                                          FUN_18086cc70(param_1,param_2);
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
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18087cbd0(int64_t param_1,int32_t param_2,uint64_t param_3,uint param_4,
                 uint64_t param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t uVar10;
  int32_t uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  float fVar15;
  int aiStackX_8 [2];
  uint64_t in_stack_ffffffffffffff98;
  int32_t uVar17;
  uint64_t uVar16;
  uint64_t in_stack_ffffffffffffffa0;
  int64_t alStack_38 [2];
  
  uVar10 = param_3 & 0xffffffff;
  iVar4 = FUN_18073a4c0(*(uint64_t *)(param_1 + 0x78),aiStackX_8);
  lVar8 = param_1;
  if (iVar4 != 0) goto LAB_18087dbb3;
  if ((aiStackX_8[0] - 4U < 2) && ((param_3 & 4) == 0)) {
    uVar10 = (uint64_t)((uint)param_3 | 4);
  }
  *(int32_t *)(param_1 + 0x1c) = param_2;
  uVar9 = (uint)uVar10;
  *(uint *)(param_1 + 0x20) = uVar9;
  uVar12 = param_4 | 0x10000;
  if ((uVar10 & 1) == 0) {
    uVar12 = param_4;
  }
  uVar13 = uVar12 | (uVar9 & 0x20 | 1) << 0x11;
  iVar4 = FUN_18073ab80(*(uint64_t *)(param_1 + 0x78),param_2,uVar13,param_5);
  if ((iVar4 != 0) &&
     ((((*(byte *)(param_1 + 0x24) & 1) == 0 ||
       (iVar4 = FUN_18073bcf0(*(uint64_t *)(param_1 + 0x78),2), iVar4 != 0)) ||
      (iVar4 = FUN_18073ab80(*(uint64_t *)(param_1 + 0x78),param_2,uVar13,param_5), iVar4 != 0))))
  goto LAB_18087dbb3;
  bVar14 = ~(byte)(uVar10 >> 2) & 1;
  iVar4 = FUN_18088c380(*(int32_t *)(param_1 + 0x18),*(int32_t *)(param_1 + 0x2c8));
  if ((iVar4 != 0) || (iVar4 = FUN_1807682e0(param_1 + 0xa0,0), iVar4 != 0)) goto LAB_18087dbb3;
  func_0x00018088a120(param_1);
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  uVar11 = 0;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_5856_ptr,0x27c,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x358;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_1688_ptr;
  puVar5[4] = param_1;
  *puVar5 = &unknown_var_4296_ptr;
  *(uint64_t **)(param_1 + 0x8d0) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_5856_ptr,0x27d,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x388;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_4268_ptr;
  puVar5[4] = param_1;
  *puVar5 = &unknown_var_4296_ptr;
  *(uint64_t **)(param_1 + 0x8d8) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_5856_ptr,0x27e,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x3b8;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_4260_ptr;
  puVar5[4] = param_1;
  *puVar5 = &unknown_var_4336_ptr;
  *(uint64_t **)(param_1 + 0x8e0) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_5856_ptr,0x27f,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 1000;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_4276_ptr;
  puVar5[4] = param_1;
  *puVar5 = &unknown_var_4296_ptr;
  *(uint64_t **)(param_1 + 0x8e8) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_5856_ptr,0x280,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x78);
  uVar1 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x418;
  puVar5[3] = &unknown_var_4284_ptr;
  puVar5[4] = uVar7;
  *puVar5 = &unknown_var_4384_ptr;
  puVar5[2] = uVar1;
  *(uint64_t **)(param_1 + 0x8f0) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_5856_ptr,0x281,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x78);
  uVar1 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x448;
  puVar5[3] = &unknown_var_292_ptr;
  puVar5[4] = uVar7;
  *puVar5 = &unknown_var_4424_ptr;
  puVar5[2] = uVar1;
  *(uint64_t **)(param_1 + 0x8f8) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_5856_ptr,0x282,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x478;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_4292_ptr;
  *puVar5 = &unknown_var_4424_ptr;
  *(uint64_t **)(param_1 + 0x900) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_5856_ptr,0x283,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x4a8;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_4300_ptr;
  *puVar5 = &unknown_var_4424_ptr;
  *(uint64_t **)(param_1 + 0x908) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_5856_ptr,0x284,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x4d8;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_4308_ptr;
  puVar5[4] = param_1;
  *puVar5 = &unknown_var_4464_ptr;
  *(uint64_t **)(param_1 + 0x910) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_5856_ptr,0x285,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x328;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_4252_ptr;
  *puVar5 = &unknown_var_4248_ptr;
  *(uint64_t **)(param_1 + 0x8c8) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_5856_ptr,0x286,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  puVar5[2] = 0;
  puVar5[1] = param_1 + 0x838;
  puVar5[3] = 0;
  *puVar5 = &unknown_var_4504_ptr;
  *(uint64_t **)(param_1 + 0xa88) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_5856_ptr,0x287,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0xa88);
  puVar5[1] = param_1 + 0x508;
  puVar5[2] = 0;
  *puVar5 = &unknown_var_4504_ptr;
  puVar5[3] = 0;
  puVar5[4] = uVar7;
  *(uint64_t **)(param_1 + 0x918) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_5856_ptr,0x288,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  puVar5[2] = 0;
  puVar5[1] = param_1 + 0x868;
  puVar5[3] = 0;
  *puVar5 = &unknown_var_4424_ptr;
  *(uint64_t **)(param_1 + 0xa90) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_5856_ptr,0x289,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  puVar5[2] = 0;
  puVar5[1] = param_1 + 0x748;
  puVar5[3] = 0;
  *puVar5 = &unknown_var_4424_ptr;
  *(uint64_t **)(param_1 + 0xa98) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&unknown_var_5856_ptr,0x28a,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  puVar5[2] = param_1;
  *puVar5 = &unknown_var_4672_ptr;
  puVar5[1] = param_1 + 0x898;
  *(uint64_t **)(param_1 + 0xaa0) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x28,&unknown_var_5856_ptr,0x28b,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0xa88);
  puVar5[1] = param_1 + 0x718;
  puVar5[2] = 0;
  *puVar5 = &unknown_var_4424_ptr;
  puVar5[3] = 0;
  puVar5[4] = uVar7;
  *(uint64_t **)(param_1 + 0xa70) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x40,&unknown_var_5856_ptr,0x28d,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x8e0);
  uVar1 = *(uint64_t *)(param_1 + 0x8c8);
  uVar2 = *(uint64_t *)(param_1 + 0x918);
  uVar3 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x778;
  puVar5[3] = &unknown_var_4332_ptr;
  puVar5[4] = uVar1;
  puVar5[5] = uVar2;
  puVar5[6] = uVar7;
  *puVar5 = &unknown_var_4632_ptr;
  puVar5[2] = uVar3;
  puVar5[7] = param_1;
  *(uint64_t **)(param_1 + 0xa60) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_5856_ptr,0x28e,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x7a8;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_4340_ptr;
  *puVar5 = &unknown_var_4424_ptr;
  *(uint64_t **)(param_1 + 0xa68) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_5856_ptr,0x28f,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x7d8;
  puVar5[2] = uVar7;
  puVar5[3] = &unknown_var_4348_ptr;
  *puVar5 = &unknown_var_4424_ptr;
  *(uint64_t **)(param_1 + 0xa78) = puVar5;
  in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 & 0xffffffffffffff00;
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  puVar5 = (uint64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x20,&unknown_var_5856_ptr,0x290,
                         in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,1);
  if (puVar5 == (uint64_t *)0x0) {
    iVar4 = 0x26;
    goto LAB_18087dbb3;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x90);
  puVar5[1] = param_1 + 0x808;
  puVar5[3] = &unknown_var_4356_ptr;
  *puVar5 = &unknown_var_4424_ptr;
  puVar5[2] = uVar7;
  *(uint64_t **)(param_1 + 0xa80) = puVar5;
  *(int64_t *)(*(int64_t *)(param_1 + 800) + 8) = param_1;
  if ((uVar12 & 0x10000) != 0) {
    alStack_38[0] = 0;
    iVar4 = FUN_180749e60(*(uint64_t *)(param_1 + 0x78),alStack_38,0);
    if ((iVar4 != 0) ||
       (iVar4 = FUN_1808e27f0(*(uint64_t *)(alStack_38[0] + 0x12770),param_1,param_1 + 0xac0),
       iVar4 != 0)) goto LAB_18087dbb3;
  }
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
LAB_18087d6de:
    if ((uVar10 & 1) != 0) goto LAB_18087d6e3;
  }
  else {
    *(int8_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x158) = 1;
    alStack_38[0] = 0;
    iVar4 = FUN_180749e60(*(uint64_t *)(param_1 + 0x78),alStack_38,0);
    if ((iVar4 != 0) || (iVar4 = FUN_1807455f0(alStack_38[0]), iVar4 != 0)) goto LAB_18087dbb3;
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) goto LAB_18087d6de;
LAB_18087d6e3:
    alStack_38[0] = 0;
    iVar4 = FUN_180749e60(*(uint64_t *)(param_1 + 0x78),alStack_38,0);
    if (iVar4 != 0) goto LAB_18087dbb3;
    if (*(int64_t *)(param_1 + 0x88) != 0) {
      iVar4 = 0x1c;
      goto LAB_18087dbb3;
    }
    lVar6 = *(int64_t *)(alStack_38[0] + 0x12770);
    *(int64_t *)(param_1 + 0x88) = lVar6;
    if (lVar6 == 0) {
      iVar4 = 0x1c;
      goto LAB_18087dbb3;
    }
  }
  in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffff00000000;
  lVar6 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x538,&unknown_var_5856_ptr,0x2b3,
                        in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0 & 0xffffffffffffff00,1);
  uVar17 = (int32_t)(in_stack_ffffffffffffff98 >> 0x20);
  if (lVar6 == 0) {
    iVar4 = 0x26;
  }
  else {
    uVar7 = FUN_18088cbf0(lVar6);
    *(uint64_t *)(param_1 + 0x98) = uVar7;
    iVar4 = FUN_18088e480(uVar7,param_1,bVar14,(float)*(int *)(param_1 + 0x2cc) * 0.001);
    if (iVar4 == 0) {
      if ((bVar14 != 0) &&
         (fVar15 = *(float *)(*(int64_t *)(param_1 + 0x98) + 0x194) * 2000.0, 0.0 < fVar15)) {
        uVar11 = (int32_t)(int64_t)(fVar15 * 48.0);
      }
      iVar4 = func_0x0001808676e0(param_1 + 0x60,param_1);
      if (iVar4 == 0) {
        if (*(int64_t *)(param_1 + 0x90) == 0) {
          iVar4 = 0x26;
        }
        else {
          uVar16 = CONCAT44(uVar17,uVar13);
          iVar4 = FUN_1808c0760(*(int64_t *)(param_1 + 0x90),*(uint64_t *)(param_1 + 0x78),
                                *(uint64_t *)(param_1 + 800),uVar10,uVar16,param_1 + 0x60,uVar11,
                                *(int32_t *)(param_1 + 0x2d0),*(int32_t *)(param_1 + 0x2d4));
          if (iVar4 == 0) {
            lVar6 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x70,&unknown_var_5856_ptr,0x2c6,
                                  uVar16 & 0xffffffff00000000,0,1);
            if (lVar6 == 0) {
              iVar4 = 0x26;
            }
            else {
              uVar7 = func_0x0001808e2ff0(lVar6);
              *(uint64_t *)(param_1 + 0xa8) = uVar7;
              iVar4 = FUN_1808e3620(uVar7,*(uint64_t *)(param_1 + 0x88));
              if ((((iVar4 == 0) &&
                   (iVar4 = (**(code **)(**(int64_t **)(param_1 + 0xaa0) + 8))
                                      (*(int64_t **)(param_1 + 0xaa0),param_1 + 0xc0), iVar4 == 0))
                  && (iVar4 = FUN_1808db1d0(*(uint64_t *)(param_1 + 0xaa0),
                                            *(uint64_t *)(param_1 + 0xc0)), iVar4 == 0)) &&
                 (((((*(byte *)(param_1 + 0x24) & 1) == 0 && ((uVar10 & 1) == 0)) ||
                   (iVar4 = FUN_18087dbf0(param_1,*(uint64_t *)(param_1 + 0x88),
                                          *(uint64_t *)(param_1 + 800)), iVar4 == 0)) &&
                  (iVar4 = func_0x000180866b40(*(uint64_t *)(param_1 + 0x80),param_1), iVar4 == 0)
                  ))) {
                uVar10 = param_1 + 0x104;
                uVar16 = param_1 + 0xf8;
                puVar5 = (uint64_t *)(param_1 + 0xe0);
                lVar8 = 0;
                iVar4 = FUN_180739420(*(uint64_t *)(param_1 + 0x78),0,puVar5,param_1 + 0xec,uVar16
                                      ,uVar10);
                if (iVar4 == 0) {
                  *(uint64_t *)(param_1 + 0x260) = *puVar5;
                  *(int32_t *)(param_1 + 0x268) = *(int32_t *)(param_1 + 0xe8);
                  *(uint64_t *)(param_1 + 0x110) = *puVar5;
                  *(uint64_t *)(param_1 + 0x118) = *(uint64_t *)(param_1 + 0xe8);
                  *(uint64_t *)(param_1 + 0x120) = *(uint64_t *)(param_1 + 0xf0);
                  *(uint64_t *)(param_1 + 0x128) = *(uint64_t *)(param_1 + 0xf8);
                  *(uint64_t *)(param_1 + 0x130) = *(uint64_t *)(param_1 + 0x100);
                  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(param_1 + 0x108);
                  *(uint64_t *)(param_1 + 0x26c) = *(uint64_t *)(param_1 + 0x260);
                  *(int32_t *)(param_1 + 0x274) = *(int32_t *)(param_1 + 0x268);
                  *(uint64_t *)(param_1 + 0x140) = *puVar5;
                  *(uint64_t *)(param_1 + 0x148) = *(uint64_t *)(param_1 + 0xe8);
                  *(uint64_t *)(param_1 + 0x150) = *(uint64_t *)(param_1 + 0xf0);
                  *(uint64_t *)(param_1 + 0x158) = *(uint64_t *)(param_1 + 0xf8);
                  *(uint64_t *)(param_1 + 0x160) = *(uint64_t *)(param_1 + 0x100);
                  *(uint64_t *)(param_1 + 0x168) = *(uint64_t *)(param_1 + 0x108);
                  *(uint64_t *)(param_1 + 0x278) = *(uint64_t *)(param_1 + 0x260);
                  *(int32_t *)(param_1 + 0x280) = *(int32_t *)(param_1 + 0x268);
                  *(uint64_t *)(param_1 + 0x170) = *puVar5;
                  *(uint64_t *)(param_1 + 0x178) = *(uint64_t *)(param_1 + 0xe8);
                  *(uint64_t *)(param_1 + 0x180) = *(uint64_t *)(param_1 + 0xf0);
                  *(uint64_t *)(param_1 + 0x188) = *(uint64_t *)(param_1 + 0xf8);
                  *(uint64_t *)(param_1 + 400) = *(uint64_t *)(param_1 + 0x100);
                  *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_1 + 0x108);
                  *(uint64_t *)(param_1 + 0x284) = *(uint64_t *)(param_1 + 0x260);
                  *(int32_t *)(param_1 + 0x28c) = *(int32_t *)(param_1 + 0x268);
                  *(uint64_t *)(param_1 + 0x1a0) = *puVar5;
                  *(uint64_t *)(param_1 + 0x1a8) = *(uint64_t *)(param_1 + 0xe8);
                  *(uint64_t *)(param_1 + 0x1b0) = *(uint64_t *)(param_1 + 0xf0);
                  *(uint64_t *)(param_1 + 0x1b8) = *(uint64_t *)(param_1 + 0xf8);
                  *(uint64_t *)(param_1 + 0x1c0) = *(uint64_t *)(param_1 + 0x100);
                  *(uint64_t *)(param_1 + 0x1c8) = *(uint64_t *)(param_1 + 0x108);
                  *(uint64_t *)(param_1 + 0x290) = *(uint64_t *)(param_1 + 0x260);
                  *(int32_t *)(param_1 + 0x298) = *(int32_t *)(param_1 + 0x268);
                  *(uint64_t *)(param_1 + 0x1d0) = *puVar5;
                  *(uint64_t *)(param_1 + 0x1d8) = *(uint64_t *)(param_1 + 0xe8);
                  *(uint64_t *)(param_1 + 0x1e0) = *(uint64_t *)(param_1 + 0xf0);
                  *(uint64_t *)(param_1 + 0x1e8) = *(uint64_t *)(param_1 + 0xf8);
                  *(uint64_t *)(param_1 + 0x1f0) = *(uint64_t *)(param_1 + 0x100);
                  *(uint64_t *)(param_1 + 0x1f8) = *(uint64_t *)(param_1 + 0x108);
                  *(uint64_t *)(param_1 + 0x29c) = *(uint64_t *)(param_1 + 0x260);
                  *(int32_t *)(param_1 + 0x2a4) = *(int32_t *)(param_1 + 0x268);
                  *(uint64_t *)(param_1 + 0x200) = *puVar5;
                  *(uint64_t *)(param_1 + 0x208) = *(uint64_t *)(param_1 + 0xe8);
                  *(uint64_t *)(param_1 + 0x210) = *(uint64_t *)(param_1 + 0xf0);
                  *(uint64_t *)(param_1 + 0x218) = *(uint64_t *)(param_1 + 0xf8);
                  *(uint64_t *)(param_1 + 0x220) = *(uint64_t *)(param_1 + 0x100);
                  *(uint64_t *)(param_1 + 0x228) = *(uint64_t *)(param_1 + 0x108);
                  *(uint64_t *)(param_1 + 0x2a8) = *(uint64_t *)(param_1 + 0x260);
                  *(int32_t *)(param_1 + 0x2b0) = *(int32_t *)(param_1 + 0x268);
                  *(uint64_t *)(param_1 + 0x230) = *puVar5;
                  *(uint64_t *)(param_1 + 0x238) = *(uint64_t *)(param_1 + 0xe8);
                  *(int32_t *)(param_1 + 0x240) = *(int32_t *)(param_1 + 0xf0);
                  *(int32_t *)(param_1 + 0x244) = *(int32_t *)(param_1 + 0xf4);
                  *(int32_t *)(param_1 + 0x248) = *(int32_t *)(param_1 + 0xf8);
                  *(int32_t *)(param_1 + 0x24c) = *(int32_t *)(param_1 + 0xfc);
                  *(uint64_t *)(param_1 + 0x250) = *(uint64_t *)(param_1 + 0x100);
                  *(uint64_t *)(param_1 + 600) = *(uint64_t *)(param_1 + 0x108);
                  *(uint64_t *)(param_1 + 0x2b4) = *(uint64_t *)(param_1 + 0x260);
                  *(int32_t *)(param_1 + 700) = *(int32_t *)(param_1 + 0x268);
                  lVar6 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x1a8,&unknown_var_5856_ptr
                                        ,0x2e5,uVar16 & 0xffffffff00000000,
                                        uVar10 & 0xffffffffffffff00,1);
                  if (lVar6 == 0) {
                    iVar4 = 0x26;
                  }
                  else {
                    uVar7 = FUN_1808dfa10(lVar6);
                    *(uint64_t *)(param_1 + 0xac8) = uVar7;
                    iVar4 = FUN_1808dfeb0(uVar7,*(uint64_t *)(param_1 + 0x78),
                                          ~(byte)(uVar9 >> 4) & 1);
                    if (iVar4 == 0) {
                      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
                      return 0;
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
LAB_18087dbb3:
  if (lVar8 != 0) {
    FUN_180874b30(lVar8);
  }
  return iVar4;
}



uint64_t FUN_18087dbf0(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  
  if ((*(int64_t *)(param_1 + 0x80) == 0) || (*(int64_t *)(param_1 + 0x88) == 0)) {
    uVar1 = 0x1c;
  }
  else {
    uVar1 = FUN_18073a840(*(uint64_t *)(param_1 + 0x78),0,auStackX_8,0);
    if ((int)uVar1 == 0) {
      uVar1 = func_0x000180866440(*(uint64_t *)(param_1 + 0x80),param_2,param_3,auStackX_8[0]);
      return uVar1;
    }
  }
  return uVar1;
}



uint64_t DataStreamProcessor(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar7 = (int)param_1[1] + -1;
  if (-1 < iVar7) {
    lVar1 = *param_1;
    lVar8 = *param_2 + 0x10;
    do {
      iVar3 = memcmp(*(int64_t *)(lVar1 + (int64_t)iVar7 * 8) + 0x10,lVar8,0x10);
      if (iVar3 < 0) {
        iVar9 = iVar7 + 1;
        break;
      }
      iVar3 = (iVar7 + iVar9) / 2;
      lVar2 = *(int64_t *)(lVar1 + (int64_t)iVar3 * 8);
      iVar4 = memcmp(lVar8,lVar2 + 0x10,0x10);
      if (iVar4 < 0) {
        uVar6 = 0xffffffff;
      }
      else {
        iVar4 = memcmp(lVar2 + 0x10,lVar8,0x10);
        uVar6 = (uint)(iVar4 < 0);
        if (uVar6 == 0) {
          return 0x1c;
        }
      }
      iVar4 = iVar3 + -1;
      if (-1 < (int)uVar6) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      if (-1 < (int)uVar6) {
        iVar9 = iVar3 + 1;
      }
    } while (iVar9 <= iVar7);
  }
  uVar5 = FUN_18087df20(param_1,iVar9,param_2);
  return uVar5;
}



uint64_t FUN_18087dd70(int64_t *param_1,uint *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar7;
  int iVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int64_t lVar6;
  
  uVar5 = FUN_180876000();
  if ((int)uVar5 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar9 = (int64_t)
            (int)((param_2[3] ^ param_2[2] ^ param_2[1] ^ *param_2) & (int)param_1[1] - 1U);
    piVar12 = (int *)(*param_1 + lVar9 * 4);
    iVar3 = *(int *)(*param_1 + lVar9 * 4);
    if (iVar3 != -1) {
      lVar9 = param_1[2];
      do {
        lVar6 = (int64_t)iVar3;
        if ((*(int64_t *)(lVar9 + lVar6 * 0x24) == *(int64_t *)param_2) &&
           (*(int64_t *)(lVar9 + 8 + lVar6 * 0x24) == *(int64_t *)(param_2 + 2))) {
          return 0x1c;
        }
        iVar3 = *(int *)(lVar9 + 0x10 + lVar6 * 0x24);
        piVar12 = (int *)(lVar9 + 0x10 + lVar6 * 0x24);
      } while (iVar3 != -1);
    }
    iVar3 = (int)param_1[4];
    lVar9 = (int64_t)iVar3;
    if (iVar3 == -1) {
      iVar3 = (int)param_1[3];
      uVar10 = (int)*(uint *)((int64_t)param_1 + 0x1c) >> 0x1f;
      uVar5 = *(uint64_t *)param_2;
      uVar2 = *(uint64_t *)(param_2 + 2);
      iVar4 = (*(uint *)((int64_t)param_1 + 0x1c) ^ uVar10) - uVar10;
      iVar8 = iVar3 + 1;
      uStack_44 = (int32_t)*param_3;
      uStack_40 = (int32_t)((uint64_t)*param_3 >> 0x20);
      uStack_3c = (int32_t)param_3[1];
      uStack_38 = (int32_t)((uint64_t)param_3[1] >> 0x20);
      if (iVar4 < iVar8) {
        iVar11 = (int)((float)iVar4 * 1.5);
        iVar4 = iVar8;
        if (iVar8 <= iVar11) {
          iVar4 = iVar11;
        }
        if (iVar4 < 1) {
          iVar11 = 1;
        }
        else if (iVar11 < iVar8) {
          iVar11 = iVar8;
        }
        uVar7 = FUN_180883420(param_1 + 2,iVar11);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
      }
      lVar6 = (int64_t)(int)param_1[3];
      lVar9 = param_1[2];
      puVar1 = (uint64_t *)(lVar9 + lVar6 * 0x24);
      *puVar1 = uVar5;
      puVar1[1] = uVar2;
      puVar1 = (uint64_t *)(lVar9 + 0x10 + lVar6 * 0x24);
      *puVar1 = CONCAT44(uStack_44,0xffffffff);
      puVar1[1] = CONCAT44(uStack_3c,uStack_40);
      *(int32_t *)(lVar9 + 0x20 + lVar6 * 0x24) = uStack_38;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      lVar6 = param_1[2];
      *(int32_t *)(param_1 + 4) = *(int32_t *)(lVar6 + 0x10 + lVar9 * 0x24);
      *(int32_t *)(lVar6 + 0x10 + lVar9 * 0x24) = 0xffffffff;
      uVar5 = *(uint64_t *)(param_2 + 2);
      puVar1 = (uint64_t *)(lVar6 + lVar9 * 0x24);
      *puVar1 = *(uint64_t *)param_2;
      puVar1[1] = uVar5;
      uVar5 = param_3[1];
      puVar1 = (uint64_t *)(lVar6 + 0x14 + lVar9 * 0x24);
      *puVar1 = *param_3;
      puVar1[1] = uVar5;
    }
    *piVar12 = iVar3;
    *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + 1;
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_18087dd92(void)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint64_t uVar7;
  int iVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  uint *unaff_RBX;
  int64_t *unaff_RSI;
  int *piVar12;
  uint64_t *unaff_R15;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  int32_t uStack0000000000000040;
  int64_t lVar6;
  
  if (in_EAX == 0) {
    return 0x1c;
  }
  lVar9 = (int64_t)(int)((unaff_RBX[3] ^ unaff_RBX[2] ^ unaff_RBX[1] ^ *unaff_RBX) & in_EAX - 1U);
  piVar12 = (int *)(*unaff_RSI + lVar9 * 4);
  iVar4 = *(int *)(*unaff_RSI + lVar9 * 4);
  if (iVar4 != -1) {
    lVar9 = unaff_RSI[2];
    do {
      lVar6 = (int64_t)iVar4;
      if ((*(int64_t *)(lVar9 + lVar6 * 0x24) == *(int64_t *)unaff_RBX) &&
         (*(int64_t *)(lVar9 + 8 + lVar6 * 0x24) == *(int64_t *)(unaff_RBX + 2))) {
        return 0x1c;
      }
      iVar4 = *(int *)(lVar9 + 0x10 + lVar6 * 0x24);
      piVar12 = (int *)(lVar9 + 0x10 + lVar6 * 0x24);
    } while (iVar4 != -1);
  }
  iVar4 = (int)unaff_RSI[4];
  lVar9 = (int64_t)iVar4;
  if (iVar4 == -1) {
    iVar4 = (int)unaff_RSI[3];
    uVar10 = (int)*(uint *)((int64_t)unaff_RSI + 0x1c) >> 0x1f;
    uVar2 = *(uint64_t *)unaff_RBX;
    uVar3 = *(uint64_t *)(unaff_RBX + 2);
    iVar5 = (*(uint *)((int64_t)unaff_RSI + 0x1c) ^ uVar10) - uVar10;
    uStack0000000000000030 = 0xffffffff;
    iVar8 = iVar4 + 1;
    uStack0000000000000034 = (int32_t)*unaff_R15;
    uStack0000000000000038 = (int32_t)((uint64_t)*unaff_R15 >> 0x20);
    uStack000000000000003c = (int32_t)unaff_R15[1];
    uStack0000000000000040 = (int32_t)((uint64_t)unaff_R15[1] >> 0x20);
    if (iVar5 < iVar8) {
      iVar11 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar8;
      if (iVar8 <= iVar11) {
        iVar5 = iVar11;
      }
      if (iVar5 < 1) {
        iVar11 = 1;
      }
      else if (iVar11 < iVar8) {
        iVar11 = iVar8;
      }
      uVar7 = FUN_180883420(unaff_RSI + 2,iVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    lVar6 = (int64_t)(int)unaff_RSI[3];
    lVar9 = unaff_RSI[2];
    puVar1 = (uint64_t *)(lVar9 + lVar6 * 0x24);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1 = (uint64_t *)(lVar9 + 0x10 + lVar6 * 0x24);
    *puVar1 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
    puVar1[1] = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    *(int32_t *)(lVar9 + 0x20 + lVar6 * 0x24) = uStack0000000000000040;
    *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + 1;
  }
  else {
    lVar6 = unaff_RSI[2];
    *(int32_t *)(unaff_RSI + 4) = *(int32_t *)(lVar6 + 0x10 + lVar9 * 0x24);
    *(int32_t *)(lVar6 + 0x10 + lVar9 * 0x24) = 0xffffffff;
    uVar2 = *(uint64_t *)(unaff_RBX + 2);
    puVar1 = (uint64_t *)(lVar6 + lVar9 * 0x24);
    *puVar1 = *(uint64_t *)unaff_RBX;
    puVar1[1] = uVar2;
    uVar2 = unaff_R15[1];
    puVar1 = (uint64_t *)(lVar6 + 0x14 + lVar9 * 0x24);
    *puVar1 = *unaff_R15;
    puVar1[1] = uVar2;
  }
  *piVar12 = iVar4;
  *(int *)((int64_t)unaff_RSI + 0x24) = *(int *)((int64_t)unaff_RSI + 0x24) + 1;
  return 0;
}







