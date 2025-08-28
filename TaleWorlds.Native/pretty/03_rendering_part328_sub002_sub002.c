#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part328_sub002_sub002.c - 1 个函数

// 函数: void FUN_18043cae0(int64_t *param_1,uint64_t *param_2)
void FUN_18043cae0(int64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  if (param_1 != (int64_t *)0x0) {
    puVar2 = (uint64_t *)(**(code **)(*param_1 + 0x218))();
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    uVar1 = puVar2[3];
    param_2[2] = puVar2[2];
    param_2[3] = uVar1;
    uVar1 = puVar2[5];
    param_2[4] = puVar2[4];
    param_2[5] = uVar1;
    uVar1 = puVar2[7];
    param_2[6] = puVar2[6];
    param_2[7] = uVar1;
    return;
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  return;
}



int32_t *
FUN_18043cb50(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  FUN_1802f63a0(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_20 = SUB84(plVar1,0);
  uStack_1c = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



uint64_t
FUN_18043cbd0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *puVar4;
  uint64_t uVar5;
  void *puStack_30;
  int64_t lStack_28;
  int iStack_20;
  
  CoreMemoryPoolValidator(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  lVar2 = lStack_28;
  if (iStack_20 == 0xf) {
    iVar1 = strcmp(lStack_28,&processed_var_6672_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x34;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&processed_var_6568_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x48;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&processed_var_6776_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x24;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&processed_var_6792_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x40;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&processed_var_7136_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x18;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&processed_var_7336_ptr);
    if (iVar1 == 0) {
      uVar5 = 4;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&processed_var_7376_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x28;
      goto LAB_18043d0b9;
    }
  }
  else if (iStack_20 == 0x18) {
    iVar1 = strcmp(lStack_28,&processed_var_6584_ptr);
    if (iVar1 == 0) {
      uVar5 = 4;
      goto LAB_18043d0b9;
    }
LAB_18043cff5:
    iVar1 = strcmp(lVar2,&processed_var_7152_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x10;
      goto LAB_18043d0b9;
    }
  }
  else if (iStack_20 == 0x13) {
    iVar1 = strcmp(lStack_28,&processed_var_6616_ptr);
    if (iVar1 == 0) {
      uVar5 = 0xc;
      goto LAB_18043d0b9;
    }
LAB_18043cfad:
    iVar1 = strcmp(lVar2,&processed_var_7088_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x1c;
      goto LAB_18043d0b9;
    }
  }
  else if (iStack_20 == 0x1a) {
    iVar1 = strcmp(lStack_28,&processed_var_6640_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x20;
      goto LAB_18043d0b9;
    }
  }
  else if (iStack_20 == 0x17) {
    iVar1 = strcmp(lStack_28,&processed_var_6808_ptr);
    if (iVar1 == 0) {
      uVar5 = 4;
      goto LAB_18043d0b9;
    }
LAB_18043cdbd:
    iVar1 = strcmp(lVar2,&processed_var_6728_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x3c;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&processed_var_6752_ptr);
    if (iVar1 == 0) {
      uVar5 = 0x1e8;
      goto LAB_18043d0b9;
    }
  }
  else {
    if (iStack_20 == 0x22) {
      puVar4 = &processed_var_6832_ptr;
    }
    else {
      if (iStack_20 != 0xc) {
        if (iStack_20 == 0x12) {
          iVar1 = strcmp(lStack_28,&processed_var_6704_ptr);
          if (iVar1 == 0) {
            uVar5 = 0x1e98;
            goto LAB_18043d0b9;
          }
LAB_18043cdfe:
          iVar1 = strcmp(lVar2,&processed_var_6992_ptr);
          if (iVar1 == 0) {
            uVar5 = 4;
            goto LAB_18043d0b9;
          }
LAB_18043d039:
          iVar1 = strcmp(lVar2,&processed_var_7440_ptr);
          if (iVar1 == 0) {
            uVar5 = 0x114;
            goto LAB_18043d0b9;
          }
        }
        else {
          if (iStack_20 == 0x17) goto LAB_18043cdbd;
          if (iStack_20 == 0x12) goto LAB_18043cdfe;
          if (iStack_20 == 3) {
            uVar5 = 4;
            lVar2 = 0;
            do {
              lVar3 = lVar2 + 1;
              if (*(char *)(lStack_28 + lVar2) != (&processed_var_7012_ptr)[lVar2]) goto LAB_18043d0b7;
              lVar2 = lVar3;
            } while (lVar3 != 4);
            goto LAB_18043d0b9;
          }
          if (iStack_20 == 0x24) {
            iVar1 = strcmp(lStack_28,&processed_var_7016_ptr);
            if (iVar1 == 0) {
              uVar5 = 1;
              goto LAB_18043d0b9;
            }
LAB_18043cf4d:
            iVar1 = strcmp(lVar2,&processed_var_7216_ptr);
            if (iVar1 == 0) {
              uVar5 = 0x80;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0x19) {
            iVar1 = strcmp(lStack_28,&processed_var_7056_ptr);
            if (iVar1 == 0) {
              uVar5 = 2;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0x1c) {
            iVar1 = strcmp(lStack_28,&processed_var_6872_ptr);
            if (iVar1 == 0) {
              uVar5 = 0x4c;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0x20) {
            iVar1 = strcmp(lStack_28,&processed_var_6904_ptr);
            if (iVar1 == 0) {
              uVar5 = 0x298;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0x1d) {
            iVar1 = strcmp(lStack_28,&processed_var_6944_ptr);
            if (iVar1 == 0) {
              uVar5 = 0x24;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0xe) {
            puVar4 = &processed_var_6976_ptr;
LAB_18043d0a9:
            iVar1 = strcmp(lVar2,puVar4);
            if (iVar1 == 0) {
              uVar5 = 0x14;
              goto LAB_18043d0b9;
            }
          }
          else {
            if (iStack_20 != 0x1f) {
              if (iStack_20 == 0x24) goto LAB_18043cf4d;
              if (iStack_20 == 0x27) {
                iVar1 = strcmp(lStack_28,&processed_var_7256_ptr);
                if (iVar1 == 0) {
                  uVar5 = 0x48;
                  goto LAB_18043d0b9;
                }
                goto LAB_18043d0b7;
              }
              if (iStack_20 == 0x23) {
                puVar4 = &processed_var_7296_ptr;
                goto LAB_18043d074;
              }
              if (iStack_20 == 0x13) goto LAB_18043cfad;
              if (iStack_20 == 0x10) {
                iVar1 = strcmp(lStack_28,&processed_var_7112_ptr);
                if (iVar1 == 0) {
                  uVar5 = 8;
                  goto LAB_18043d0b9;
                }
LAB_18043d019:
                iVar1 = strcmp(lVar2,&processed_var_7416_ptr);
                if (iVar1 == 0) {
                  uVar5 = 4;
                  goto LAB_18043d0b9;
                }
LAB_18043d087:
                iVar1 = strcmp(lVar2,&processed_var_7352_ptr);
                if (iVar1 == 0) {
                  uVar5 = 4;
                  goto LAB_18043d0b9;
                }
                puVar4 = &processed_var_7392_ptr;
                goto LAB_18043d0a9;
              }
              if (iStack_20 == 0x18) goto LAB_18043cff5;
              if (iStack_20 == 0x10) goto LAB_18043d019;
              if (iStack_20 != 0x12) {
                if (iStack_20 == 0xd) {
                  puVar4 = &processed_var_7464_ptr;
                  goto LAB_18043d074;
                }
                if (iStack_20 == 0xc) goto LAB_18043d06a;
                if (iStack_20 != 0x10) goto LAB_18043d0b7;
                goto LAB_18043d087;
              }
              goto LAB_18043d039;
            }
            iVar1 = strcmp(lStack_28,&processed_var_7184_ptr);
            if (iVar1 == 0) {
              uVar5 = 0x88;
              goto LAB_18043d0b9;
            }
          }
        }
        goto LAB_18043d0b7;
      }
      iVar1 = strcmp(lStack_28,&processed_var_6688_ptr);
      if (iVar1 == 0) {
        uVar5 = 1;
        goto LAB_18043d0b9;
      }
LAB_18043d06a:
      puVar4 = &processed_var_7480_ptr;
    }
LAB_18043d074:
    iVar1 = strcmp(lVar2,puVar4);
    if (iVar1 == 0) {
      uVar5 = 4;
      goto LAB_18043d0b9;
    }
  }
LAB_18043d0b7:
  uVar5 = 0;
LAB_18043d0b9:
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 == 0) {
    return uVar5;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



uint64_t
FUN_18043d100(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)

{
  char cVar1;
  void *puVar2;
  uint64_t uVar3;
  int8_t auStack_50 [32];
  int8_t auStack_30 [40];
  
  CoreMemoryPoolValidator(auStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  CoreMemoryPoolValidator(auStack_50,param_2);
  cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6672_ptr,1);
  if (cVar1 == '\0') {
    cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6568_ptr,1);
    if (cVar1 == '\0') {
      cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6616_ptr,1);
      if (cVar1 == '\0') {
        cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6640_ptr,1);
        if (cVar1 == '\0') {
          cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6776_ptr,1);
          if (cVar1 == '\0') {
            cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6792_ptr,1);
            if (cVar1 == '\0') {
              cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6704_ptr,1);
              if (cVar1 == '\0') {
                cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6728_ptr,1);
                if (cVar1 == '\0') {
                  cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6752_ptr,1);
                  if (cVar1 == '\0') {
                    cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7012_ptr,1);
                    if (cVar1 == '\0') {
                      cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6872_ptr,1);
                      if (cVar1 == '\0') {
                        cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6904_ptr,1);
                        if (cVar1 == '\0') {
                          cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6944_ptr,1);
                          if (cVar1 == '\0') {
                            cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_6976_ptr,1);
                            if (cVar1 == '\0') {
                              cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7184_ptr,1);
                              if (cVar1 == '\0') {
                                cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7216_ptr,1);
                                if (cVar1 == '\0') {
                                  cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7256_ptr,1);
                                  if (cVar1 == '\0') {
                                    cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7088_ptr,1);
                                    if (cVar1 == '\0') {
                                      cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7112_ptr,1);
                                      if (cVar1 == '\0') {
                                        cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7136_ptr,1);
                                        if (cVar1 == '\0') {
                                          cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7152_ptr,1);
                                          if (cVar1 == '\0') {
                                            cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7416_ptr,1);
                                            if (cVar1 == '\0') {
                                              cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7440_ptr,1);
                                              if (cVar1 == '\0') {
                                                cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7336_ptr,1);
                                                if (cVar1 != '\0') {
                                                  puVar2 = &processed_var_9792_ptr;
                                                  goto LAB_18043e263;
                                                }
                                                cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7352_ptr,1);
                                                if (cVar1 != '\0') goto LAB_18043e25c;
                                                cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7376_ptr,1);
                                                if (cVar1 == '\0') {
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_30,&processed_var_7392_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_6a48,
                                                                          1);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,
                                                                            &processed_var_9224_ptr,1);
                                                      if (cVar1 != '\0') goto LAB_18043e151;
                                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,
                                                                            &processed_var_9248_ptr,1);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = CoreSystem_OperationHandler0(auStack_50,
                                                                              &processed_var_9264_ptr,1);
                                                        if (cVar1 == '\0') {
                                                          puVar2 = &system_data_6b58;
                                                          goto LAB_18043e598;
                                                        }
                                                        goto LAB_18043e23e;
                                                      }
                                                      goto LAB_18043d27c;
                                                    }
                                                  }
                                                }
                                                else {
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9288_ptr,1)
                                                  ;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9300_ptr,
                                                                          1);
                                                    if (cVar1 != '\0') goto LAB_18043e151;
                                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_6236_ptr,
                                                                          1);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,
                                                                            &processed_var_9792_ptr,1);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = CoreSystem_OperationHandler0(auStack_50,
                                                                              &processed_var_9312_ptr,1);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = CoreSystem_OperationHandler0(auStack_50,
                                                                                &processed_var_6056_ptr,1);
                                                          if (cVar1 == '\0') {
                                                            puVar2 = &processed_var_9328_ptr;
                                                            goto LAB_18043d1f9;
                                                          }
                                                          goto LAB_18043d375;
                                                        }
                                                        goto LAB_18043d306;
                                                      }
                                                      goto LAB_18043e0fd;
                                                    }
LAB_18043d27c:
                                                    uVar3 = 8;
                                                    goto LAB_18043e26e;
                                                  }
                                                }
                                              }
                                              else {
                                                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_4976_ptr,1);
                                                if (cVar1 == '\0') {
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8960_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') goto LAB_18043e073;
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8976_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') goto LAB_18043e2f3;
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9160_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') {
LAB_18043e314:
                                                    uVar3 = 0x6c;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9176_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') goto LAB_18043e335;
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9192_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x8c;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9208_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0xa4;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9080_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0xa8;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9096_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0xbc;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9112_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0xc4;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9128_ptr,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0xd4;
                                                    goto LAB_18043e26e;
                                                  }
                                                }
                                              }
                                            }
                                            else {
LAB_18043e25c:
                                              puVar2 = &processed_var_4312_ptr;
LAB_18043e263:
                                              CoreSystem_OperationHandler0(auStack_50,puVar2,1);
                                            }
                                          }
                                          else {
                                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_6ee8,1);
                                            if (cVar1 == '\0') {
                                              cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_6ed8,1);
                                              if (cVar1 != '\0') goto LAB_18043e151;
                                              cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_6ea8,1);
                                              if (cVar1 != '\0') goto LAB_18043d27c;
                                              cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_6a00,1);
                                              if (cVar1 != '\0') goto LAB_18043e23e;
                                            }
                                          }
                                        }
                                        else {
                                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_4312_ptr,1);
                                          if (cVar1 == '\0') {
                                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_6236_ptr,1);
                                            if (cVar1 != '\0') goto LAB_18043e151;
                                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8952_ptr,1);
                                            if (cVar1 != '\0') goto LAB_18043e1bc;
                                          }
                                        }
                                      }
                                      else {
                                        cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_69f0,1);
                                        if (cVar1 == '\0') {
                                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_6a28,1);
                                          if (cVar1 != '\0') goto LAB_18043e151;
                                        }
                                      }
                                    }
                                    else {
                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9040_ptr,1);
                                      if (cVar1 == '\0') {
                                        cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9064_ptr,1);
                                        if (cVar1 != '\0') goto LAB_18043e151;
                                        cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8928_ptr,1);
                                        if (cVar1 != '\0') {
LAB_18043e1bc:
                                          uVar3 = 0x14;
                                          goto LAB_18043e26e;
                                        }
                                        cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_6ec0,1);
                                        if (cVar1 != '\0') goto LAB_18043e0fd;
                                      }
                                    }
                                  }
                                  else {
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8916_ptr,1);
                                    if (cVar1 == '\0') {
                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8808_ptr,1);
                                      if (cVar1 != '\0') goto LAB_18043d27c;
                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8824_ptr,1);
                                      if (cVar1 != '\0') goto LAB_18043e5ac;
                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8848_ptr,1);
                                      if (cVar1 != '\0') {
LAB_18043e0fd:
                                        uVar3 = 0x18;
                                        goto LAB_18043e26e;
                                      }
                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8864_ptr,1);
                                      if (cVar1 != '\0') {
LAB_18043e033:
                                        uVar3 = 0x28;
                                        goto LAB_18043e26e;
                                      }
                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8992_ptr,1);
                                      if (cVar1 != '\0') goto LAB_18043d593;
                                      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_9016_ptr,1);
                                      if (cVar1 != '\0') goto LAB_18043e073;
                                    }
                                  }
                                }
                                else {
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8368_ptr,1);
                                  if (cVar1 == '\0') {
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8376_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043e151;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8384_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043d27c;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8264_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043e23e;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_6236_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043e5ac;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8736_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043e1bc;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8752_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043e0fd;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8488_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043d306;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8504_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043d375;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8520_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043d20d;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8536_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043e033;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8400_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043d454;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8464_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043d1b9;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8592_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043d593;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8776_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043e073;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8792_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043de8e;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8680_ptr,1);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x54;
                                      goto LAB_18043e26e;
                                    }
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8696_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043ded0;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8708_ptr,1);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x5c;
                                      goto LAB_18043e26e;
                                    }
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8720_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043df12;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8872_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043df33;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7100_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043e2f3;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8888_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043e335;
                                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8904_ptr,1);
                                    if (cVar1 != '\0') goto LAB_18043df8e;
                                  }
                                }
                              }
                              else {
                                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8368_ptr,1);
                                if (cVar1 == '\0') {
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8376_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043e151;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8384_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043d27c;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8264_ptr,1);
                                  if (cVar1 != '\0') {
LAB_18043e23e:
                                    uVar3 = 0xc;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8280_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043e5ac;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8304_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043e0fd;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8328_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043d306;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_6236_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043d375;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8488_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043d20d;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8504_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043e033;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8520_ptr,1);
                                  if (cVar1 != '\0') {
LAB_18043d454:
                                    uVar3 = 0x2c;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8536_ptr,1);
                                  if (cVar1 != '\0') {
LAB_18043d1b9:
                                    uVar3 = 0x30;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8400_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043dae8;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8416_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043d593;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8440_ptr,1);
                                  if (cVar1 != '\0') {
                                    uVar3 = 0x3c;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8464_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043e073;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8592_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043d75c;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8608_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043db7b;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_6056_ptr,1);
                                  if (cVar1 != '\0') {
LAB_18043ded0:
                                    uVar3 = 0x58;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7100_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043df12;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8632_ptr,1);
                                  if (cVar1 != '\0') {
LAB_18043df33:
                                    uVar3 = 100;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8656_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043e2f3;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8236_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043e314;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8188_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043e335;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8556_ptr,1);
                                  if (cVar1 != '\0') {
                                    uVar3 = 0x74;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8564_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043df8e;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8572_ptr,1);
                                  if (cVar1 != '\0') {
                                    uVar3 = 0x7c;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8580_ptr,1);
                                  if (cVar1 != '\0') goto LAB_18043dc9b;
                                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7680_ptr,1);
                                  if (cVar1 != '\0') {
                                    uVar3 = 0x84;
                                    goto LAB_18043e26e;
                                  }
                                }
                              }
                            }
                            else {
                              cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_4344_ptr,1);
                              if (cVar1 == '\0') {
                                puVar2 = &processed_var_4368_ptr;
LAB_18043e598:
                                cVar1 = CoreSystem_OperationHandler0(auStack_50,puVar2,1);
                                if (cVar1 != '\0') goto LAB_18043e5ac;
                              }
                            }
                          }
                          else {
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8360_ptr,1);
                            if (cVar1 == '\0') {
                              puVar2 = &memory_allocator_3692_ptr;
                              goto LAB_18043d361;
                            }
                          }
                        }
                        else {
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8040_ptr,1);
                          if (cVar1 == '\0') {
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_6236_ptr,1);
                            if (cVar1 != '\0') goto LAB_18043e073;
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8056_ptr,1);
                            if (cVar1 != '\0') {
LAB_18043db7b:
                              uVar3 = 0x50;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8064_ptr,1);
                            if (cVar1 != '\0') {
LAB_18043df12:
                              uVar3 = 0x60;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8208_ptr,1);
                            if (cVar1 != '\0') {
LAB_18043e2f3:
                              uVar3 = 0x68;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8224_ptr,1);
                            if (cVar1 != '\0') {
LAB_18043e335:
                              uVar3 = 0x70;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8240_ptr,1);
                            if (cVar1 != '\0') {
LAB_18043df8e:
                              uVar3 = 0x78;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_9e24,1);
                            if (cVar1 != '\0') {
LAB_18043dc9b:
                              uVar3 = 0x80;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8184_ptr,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x180;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8196_ptr,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x280;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&system_data_9de8,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x288;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_4520_ptr,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x28c;
                              goto LAB_18043e26e;
                            }
                            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8204_ptr,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x290;
                              goto LAB_18043e26e;
                            }
                          }
                        }
                      }
                      else {
                        cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7984_ptr,1);
                        if (cVar1 == '\0') {
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7824_ptr,1);
                          if (cVar1 != '\0') {
LAB_18043e073:
                            uVar3 = 0x40;
                            goto LAB_18043e26e;
                          }
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7848_ptr,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x41;
                            goto LAB_18043e26e;
                          }
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7864_ptr,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x42;
                            goto LAB_18043e26e;
                          }
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7888_ptr,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x43;
                            goto LAB_18043e26e;
                          }
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8080_ptr,1);
                          if (cVar1 != '\0') {
LAB_18043de8e:
                            uVar3 = 0x44;
                            goto LAB_18043e26e;
                          }
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8104_ptr,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x45;
                            goto LAB_18043e26e;
                          }
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8136_ptr,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x46;
                            goto LAB_18043e26e;
                          }
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8168_ptr,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x47;
                            goto LAB_18043e26e;
                          }
                          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8008_ptr,1);
                          if (cVar1 != '\0') {
LAB_18043d75c:
                            uVar3 = 0x48;
                            goto LAB_18043e26e;
                          }
                        }
                      }
                    }
                  }
                  else {
                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7680_ptr,1);
                    if (cVar1 != '\0') {
                      uVar3 = 0x1e0;
                      goto LAB_18043e26e;
                    }
                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7960_ptr,1);
                    if (cVar1 != '\0') {
                      uVar3 = 0x1e4;
                      goto LAB_18043e26e;
                    }
                  }
                }
                else {
                  cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_8872_ptr,1);
                  if (cVar1 == '\0') {
                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_4764_ptr,1);
                    if (cVar1 != '\0') goto LAB_18043e5ac;
                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7632_ptr,1);
                    if (cVar1 != '\0') goto LAB_18043d375;
                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7720_ptr,1);
                    if (cVar1 != '\0') goto LAB_18043d20d;
                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7912_ptr,1);
                    if (cVar1 != '\0') {
LAB_18043dae8:
                      uVar3 = 0x34;
                      goto LAB_18043e26e;
                    }
                    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7936_ptr,1);
                    if (cVar1 != '\0') {
LAB_18043d593:
                      uVar3 = 0x38;
                      goto LAB_18043e26e;
                    }
                  }
                }
              }
              else {
                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7680_ptr,1);
                if (cVar1 != '\0') {
                  uVar3 = 0x1e80;
                  goto LAB_18043e26e;
                }
                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7688_ptr,1);
                if (cVar1 != '\0') {
                  uVar3 = 0x1e88;
                  goto LAB_18043e26e;
                }
                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7696_ptr,1);
                if (cVar1 != '\0') {
                  uVar3 = 0x1e90;
                  goto LAB_18043e26e;
                }
              }
            }
            else {
              cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7596_ptr,1);
              if (cVar1 == '\0') {
                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7608_ptr,1);
                if (cVar1 != '\0') goto LAB_18043d27c;
                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7632_ptr,1);
                if (cVar1 != '\0') goto LAB_18043e5ac;
                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7728_ptr,1);
                if (cVar1 != '\0') goto LAB_18043e1bc;
                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7752_ptr,1);
                if (cVar1 != '\0') goto LAB_18043e0fd;
                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7776_ptr,1);
                if (cVar1 != '\0') goto LAB_18043d306;
                cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7800_ptr,1);
                if (cVar1 != '\0') goto LAB_18043d454;
              }
            }
          }
          else {
            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7676_ptr,1);
            if (cVar1 == '\0') {
              cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7592_ptr,1);
              if (cVar1 != '\0') {
LAB_18043e5ac:
                uVar3 = 0x10;
                goto LAB_18043e26e;
              }
              puVar2 = &processed_var_4368_ptr;
LAB_18043d361:
              cVar1 = CoreSystem_OperationHandler0(auStack_50,puVar2,1);
              if (cVar1 != '\0') goto LAB_18043d375;
            }
          }
        }
        else {
          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7648_ptr,1);
          if (cVar1 == '\0') {
            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7664_ptr,1);
            if (cVar1 != '\0') goto LAB_18043e151;
            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_4764_ptr,1);
            if (cVar1 != '\0') goto LAB_18043e23e;
            cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_6236_ptr,1);
            if (cVar1 != '\0') {
LAB_18043d306:
              uVar3 = 0x1c;
              goto LAB_18043e26e;
            }
          }
        }
      }
      else {
        cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7524_ptr,1);
        if (cVar1 == '\0') {
          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7528_ptr,1);
          if (cVar1 != '\0') {
LAB_18043e151:
            uVar3 = 4;
            goto LAB_18043e26e;
          }
          cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7644_ptr,1);
          if (cVar1 != '\0') goto LAB_18043d27c;
        }
      }
    }
    else {
      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7496_ptr,1);
      if (cVar1 == '\0') {
        puVar2 = &system_config_ptr;
LAB_18043d1f9:
        cVar1 = CoreSystem_OperationHandler0(auStack_50,puVar2,1);
        if (cVar1 != '\0') {
LAB_18043d20d:
          uVar3 = 0x24;
          goto LAB_18043e26e;
        }
      }
    }
  }
  else {
    cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7536_ptr,1);
    if (cVar1 == '\0') {
      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7552_ptr,1);
      if (cVar1 != '\0') goto LAB_18043e5ac;
      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7568_ptr,1);
      if (cVar1 != '\0') {
LAB_18043d375:
        uVar3 = 0x20;
        goto LAB_18043e26e;
      }
      cVar1 = CoreSystem_OperationHandler0(auStack_50,&processed_var_7584_ptr,1);
      if (cVar1 != '\0') goto LAB_18043d1b9;
    }
  }
  uVar3 = 0;
LAB_18043e26e:
  FUN_180627b90(auStack_50);
  FUN_180627b90(auStack_30);
  return uVar3;
}



int64_t * FUN_18043e5c0(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(int64_t **)(param_2 + 0x20);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}



int32_t * FUN_18043e630(int32_t *param_1,uint64_t param_2,char param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int64_t *plStackX_8;
  int8_t auStackX_18 [8];
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  auStackX_18[0] = 4;
  FUN_1801af320(param_2,&plStackX_8,auStackX_18,param_4,&system_data_0300,1,0xfffffffffffffffe);
  plVar2 = plStackX_8;
  *(byte *)((int64_t)plStackX_8 + 0x2e9) = *(byte *)((int64_t)plStackX_8 + 0x2e9) | 1;
  if (param_3 == '\0') {
    uVar1 = *(uint *)((int64_t)plStackX_8 + 0x2ac);
    *(uint *)((int64_t)plStackX_8 + 0x2ac) = uVar1 | 0x2020000;
    FUN_1802ee810(plStackX_8,uVar1);
    FUN_1802ee990(plVar2,uVar1);
  }
  plVar2 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  uStack_20 = SUB84(plVar2,0);
  uStack_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar3;
  param_1[3] = uStack_14;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_18043e720(int32_t *param_1)

{
  uint uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2f0,0x10,3,0xfffffffffffffffe);
  plVar4 = (int64_t *)FUN_1802e6b00(uVar3,4);
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  *(byte *)((int64_t)plVar4 + 0x2e9) = *(byte *)((int64_t)plVar4 + 0x2e9) | 1;
  uVar1 = *(uint *)((int64_t)plVar4 + 0x2ac);
  *(uint *)((int64_t)plVar4 + 0x2ac) = uVar1 | 0x2020000;
  FUN_1802ee810(plVar4,uVar1);
  FUN_1802ee990(plVar4,uVar1);
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uStack_20 = SUB84(plVar4,0);
  uStack_1c = (int32_t)((uint64_t)plVar4 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  (**(code **)(*plVar4 + 0x38))(plVar4);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_18043e7f0(int64_t param_1,byte param_2,char param_3)

{
  int iVar1;
  uint64_t uVar2;
  int64_t alStack_b8 [2];
  int32_t uStack_a8;
  uint64_t uStack_98;
  uint uStack_90;
  int32_t uStack_8c;
  ushort uStack_88;
  int8_t uStack_86;
  int32_t uStack_84;
  int8_t uStack_80;
  uint64_t uStack_78;
  int64_t lStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int8_t *puStack_50;
  int8_t auStack_48 [8];
  void *puStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int64_t *plStack_18;
  uint64_t uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  uVar2 = 0;
  uStack_98 = 0;
  uStack_86 = 0;
  uStack_84 = 0xffffffff;
  uStack_80 = 1;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 3;
  puStack_50 = (int8_t *)0x0;
  uStack_88 = (ushort)param_2;
  uStack_90 = 0;
  if (param_3 != '\0') {
    uStack_90 = 2;
  }
  uStack_90 = uStack_90 | 0x10;
  uStack_8c = 0xffffffff;
  if (*(char *)(param_1 + 0x2e6) == '\0') {
    uStack_8c = 1;
  }
  alStack_b8[0] = 0;
  alStack_b8[0] = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1000,0xd);
  LOCK();
  alStack_b8[1] = 0;
  UNLOCK();
  uStack_a8 = 0;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x40000000;
  plStack_18 = alStack_b8;
  uStack_38 = 1;
  puStack_40 = &system_data_0000;
  uStack_30 = 0;
  uStack_20 = 0;
  puStack_50 = auStack_48;
  iVar1 = FUN_1802e7bc0(param_1,&uStack_98);
  if (uStack_38 != 0) {
    do {
      *(uint64_t *)(puStack_40 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uStack_38);
  }
  uStack_30 = 0;
  if (alStack_b8[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  alStack_b8[0] = 0;
  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return iVar1 == 0;
}







