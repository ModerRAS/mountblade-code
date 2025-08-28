#include "TaleWorlds.Native.Split.h"

// 99_part_08_part054.c - 2 个函数

// 函数: void FUN_1805ae0f0(int *param_1,uint param_2)
void FUN_1805ae0f0(int *param_1,uint param_2)

{
  int64_t *plVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint auStackX_10 [2];
  
  puVar3 = (uint64_t *)
           ((uint64_t)(param_2 & 0xf) * 0x40 +
           *(int64_t *)(*(int64_t *)(param_1 + 10) + (uint64_t)(param_2 >> 4) * 8));
  auStackX_10[0] = param_2;
  if ((void *)*puVar3 == &unknown_var_5520_ptr) {
    puVar3[2] = 0;
    plVar1 = (int64_t *)puVar3[3];
    puVar3[3] = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  else {
    (**(code **)((void *)*puVar3 + 0x10))(puVar3);
  }
  *(int32_t *)(puVar3 + 1) = 0;
  FUN_1800571e0(param_1 + 2,auStackX_10);
  if (*param_1 - 1U == param_2) {
    *param_1 = 0;
    uVar2 = param_1[1] - 1;
    if (-1 < (int)uVar2) {
      while (*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 10) + (uint64_t)(uVar2 >> 4) * 8) + 8 +
                     (uint64_t)(uVar2 & 0xf) * 0x40) == 0) {
        uVar2 = uVar2 - 1;
        if ((int)uVar2 < 0) {
          return;
        }
      }
      *param_1 = uVar2 + 1;
    }
  }
  return;
}



int8_t FUN_1805ae1e0(uint64_t param_1,int32_t param_2,int8_t param_3)

{
  char cVar1;
  
  cVar1 = FUN_180645c10(param_1,0,&system_param1_ptr);
  if (cVar1 != '\0') {
    cVar1 = FUN_180645c10(param_1,7,&unknown_var_3472_ptr);
    if (cVar1 != '\0') {
      cVar1 = FUN_180645c10(param_1,param_2,&unknown_var_3424_ptr);
      if (cVar1 != '\0') {
        cVar1 = FUN_180645c10(param_1,param_3,&system_param1_ptr);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



char FUN_1805ae280(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  char cVar2;
  uint64_t uStackX_20;
  
  cVar2 = FUN_18055f260(param_1,param_2,&unknown_var_3424_ptr);
  if (cVar2 != '\0') {
    cVar2 = FUN_18055f260(param_1,param_3 + 4,&system_data_bc90);
    if (cVar2 != '\0') {
      cVar2 = FUN_18055f260(param_1,(int64_t)param_3 + 0x24,&unknown_var_3408_ptr);
      if (cVar2 != '\0') {
        cVar2 = FUN_18055f260(param_1,param_3 + 5,&system_data_buffer_ptr);
        if (cVar2 != '\0') {
          cVar2 = FUN_18055f260(param_1,(int64_t)param_3 + 0x2c,&unknown_var_3424_ptr);
          if (cVar2 != '\0') {
            uStackX_20 = CONCAT44(uStackX_20._4_4_,(int)*(char *)(param_3 + 6));
            cVar2 = FUN_18055f260(param_1,&uStackX_20,&unknown_var_3440_ptr);
            *(char *)(param_3 + 6) = (char)uStackX_20;
            if (cVar2 != '\0') {
              cVar2 = FUN_18055f260(param_1,(int64_t)param_3 + 0x34,&unknown_var_3200_ptr);
              if (cVar2 != '\0') {
                cVar2 = FUN_180646700(param_1,(int64_t)param_3 + 0x3c,&unknown_var_3168_ptr);
                if (cVar2 != '\0') {
                  cVar2 = FUN_180646700(param_1,param_3 + 8,&unknown_var_3168_ptr);
                  if (cVar2 != '\0') {
                    cVar2 = FUN_180646700(param_1,(int64_t)param_3 + 0x44,&unknown_var_3184_ptr);
                    if (cVar2 != '\0') {
                      uStackX_20 = 0;
                      cVar2 = FUN_180646140(param_1,&uStackX_20,0x27);
                      uVar1 = uStackX_20;
                      if (cVar2 != '\0') {
                        if (0x7fffffffff < uStackX_20) {
                          FUN_180627340(&unknown_var_928_ptr,&unknown_var_7360_ptr,0,0x7fffffffff,uStackX_20,
                                        &unknown_var_3712_ptr);
                          FUN_180626f80(&unknown_var_1168_ptr,0,0x7fffffffff);
                        }
                        param_3[10] = uVar1;
                        if (uVar1 < 0x8000000000) {
                          cVar2 = FUN_180646500(param_1,param_3 + 0xb,&unknown_var_3216_ptr);
                          if (cVar2 != '\0') {
                            cVar2 = FUN_18055f260(param_1,(int64_t)param_3 + 0x5c,&unknown_var_3088_ptr);
                            if (cVar2 != '\0') {
                              uStackX_20._0_4_ = (uint)(*(char *)(param_3 + 0xc) != '\0');
                              cVar2 = FUN_18055f260(param_1,&uStackX_20,&system_param1_ptr);
                              *(bool *)(param_3 + 0xc) = (uint)uStackX_20 != 0;
                              if (cVar2 != '\0') {
                                uStackX_20 = CONCAT44(uStackX_20._4_4_,
                                                      (uint)(*(char *)((int64_t)param_3 + 0x61) !=
                                                            '\0'));
                                cVar2 = FUN_18055f260(param_1,&uStackX_20,&system_param1_ptr);
                                *(bool *)((int64_t)param_3 + 0x61) = (uint)uStackX_20 != 0;
                                if (cVar2 != '\0') {
                                  uStackX_20 = CONCAT44(uStackX_20._4_4_,
                                                        (uint)((char)uStackX_20 != '\0'));
                                  cVar2 = FUN_18055f260(param_1,&uStackX_20,&system_param1_ptr);
                                  if ((cVar2 == '\0') || ((uint)uStackX_20 == 0)) {
                                    *(int8_t *)(param_3 + 7) = 0xff;
                                  }
                                  else {
                                    uStackX_20 = CONCAT44(uStackX_20._4_4_,
                                                          (int)*(char *)(param_3 + 7));
                                    cVar2 = FUN_18055f260(param_1,&uStackX_20,&unknown_var_3072_ptr);
                                    *(char *)(param_3 + 7) = (char)uStackX_20;
                                  }
                                  if (cVar2 != '\0') {
                                    uStackX_20 = CONCAT44(uStackX_20._4_4_,
                                                          (uint)((char)uStackX_20 != '\0'));
                                    cVar2 = FUN_18055f260(param_1,&uStackX_20,&system_param1_ptr);
                                    if ((cVar2 != '\0') && ((uint)uStackX_20 != 0)) {
                                      cVar2 = FUN_180646700(param_1,param_3,&unknown_var_3136_ptr);
                                      if (cVar2 != '\0') {
                                        cVar2 = FUN_180646700(param_1,(int64_t)param_3 + 4,
                                                              &unknown_var_3136_ptr);
                                        if (cVar2 != '\0') {
                                          cVar2 = FUN_180646700(param_1,param_3 + 1,&unknown_var_3152_ptr);
                                          if (cVar2 != '\0') {
                                            cVar2 = FUN_180646700(param_1,param_3 + 2,&unknown_var_3104_ptr
                                                                 );
                                            if (cVar2 != '\0') {
                                              cVar2 = FUN_180646700(param_1,(int64_t)param_3 + 0x14
                                                                    ,&unknown_var_3104_ptr);
                                              if (cVar2 != '\0') {
                                                cVar2 = FUN_180646700(param_1,param_3 + 3,
                                                                      &unknown_var_3120_ptr);
                                                if (cVar2 != '\0') {
                                                  *(int8_t *)((int64_t)param_3 + 0x61) = 1;
                                                  return '\x01';
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      *(int8_t *)((int64_t)param_3 + 0x61) = 0;
                                      return '\0';
                                    }
                                    param_3[2] = 0;
                                    param_3[3] = 0;
                                    *(char *)((int64_t)param_3 + 0x61) = cVar2;
                                    *param_3 = 0;
                                    param_3[1] = 0;
                                    return cVar2;
                                  }
                                  return '\0';
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
  return '\0';
}



char FUN_1805ae3cf(int32_t param_1)

{
  char cVar1;
  uint64_t *unaff_RBX;
  int iVar2;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t uVar3;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  int32_t extraout_XMM0_Da_10;
  char cStack0000000000000068;
  
  if (0x7fffffffff < unaff_RSI) {
    FUN_180627340(&unknown_var_928_ptr,&unknown_var_7360_ptr,0,0x7fffffffff);
    FUN_180626f80(&unknown_var_1168_ptr,0,0x7fffffffff);
    param_1 = extraout_XMM0_Da;
  }
  unaff_RBX[10] = unaff_RSI;
  if (unaff_RSI < 0x8000000000) {
    cVar1 = FUN_180646500(param_1,unaff_RBX + 0xb,&unknown_var_3216_ptr);
    if (cVar1 != '\0') {
      cVar1 = FUN_18055f260(extraout_XMM0_Da_00,(int64_t)unaff_RBX + 0x5c,&unknown_var_3088_ptr);
      if (cVar1 != '\0') {
        iVar2 = (int)unaff_RBP;
        _cStack0000000000000068 =
             (int)CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),
                           *(char *)(unaff_RBX + 0xc) != (char)(unaff_RBP & 0xffffffff));
        cVar1 = FUN_18055f260(extraout_XMM0_Da_01,&stack0x00000068,&system_param1_ptr);
        *(bool *)(unaff_RBX + 0xc) = _cStack0000000000000068 != iVar2;
        if (cVar1 != '\0') {
          _cStack0000000000000068 =
               (int)CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),
                             *(char *)((int64_t)unaff_RBX + 0x61) != (char)(unaff_RBP & 0xffffffff)
                            );
          cVar1 = FUN_18055f260(extraout_XMM0_Da_02,&stack0x00000068,&system_param1_ptr);
          *(bool *)((int64_t)unaff_RBX + 0x61) = _cStack0000000000000068 != iVar2;
          if (cVar1 != '\0') {
            _cStack0000000000000068 =
                 (int)CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),
                               cStack0000000000000068 != (char)(unaff_RBP & 0xffffffff));
            cVar1 = FUN_18055f260(extraout_XMM0_Da_03,&stack0x00000068,&system_param1_ptr);
            if ((cVar1 == '\0') || (_cStack0000000000000068 == iVar2)) {
              *(int8_t *)(unaff_RBX + 7) = 0xff;
              uVar3 = extraout_XMM0_Da_04;
            }
            else {
              _cStack0000000000000068 = (int)*(char *)(unaff_RBX + 7);
              cVar1 = FUN_18055f260(extraout_XMM0_Da_04,&stack0x00000068,&unknown_var_3072_ptr);
              *(char *)(unaff_RBX + 7) = cStack0000000000000068;
              uVar3 = extraout_XMM0_Da_05;
            }
            if (cVar1 != '\0') {
              _cStack0000000000000068 =
                   (int)CONCAT71((int7)(unaff_RBP >> 8),cStack0000000000000068 != (char)unaff_RBP);
              cVar1 = FUN_18055f260(uVar3,&stack0x00000068,&system_param1_ptr);
              if ((cVar1 != '\0') && (_cStack0000000000000068 != 0)) {
                cVar1 = FUN_180646700();
                if (cVar1 != '\0') {
                  cVar1 = FUN_180646700(extraout_XMM0_Da_06,(int64_t)unaff_RBX + 4,&unknown_var_3136_ptr);
                  if (cVar1 != '\0') {
                    cVar1 = FUN_180646700(extraout_XMM0_Da_07,unaff_RBX + 1,&unknown_var_3152_ptr);
                    if (cVar1 != '\0') {
                      cVar1 = FUN_180646700(extraout_XMM0_Da_08,unaff_RBX + 2,&unknown_var_3104_ptr);
                      if (cVar1 != '\0') {
                        cVar1 = FUN_180646700(extraout_XMM0_Da_09,(int64_t)unaff_RBX + 0x14,
                                              &unknown_var_3104_ptr);
                        if (cVar1 != '\0') {
                          cVar1 = FUN_180646700(extraout_XMM0_Da_10,unaff_RBX + 3,&unknown_var_3120_ptr);
                          if (cVar1 != '\0') {
                            *(int8_t *)((int64_t)unaff_RBX + 0x61) = 1;
                            return '\x01';
                          }
                        }
                      }
                    }
                  }
                }
                *(int8_t *)((int64_t)unaff_RBX + 0x61) = 0;
                return '\0';
              }
              unaff_RBX[2] = 0;
              unaff_RBX[3] = 0;
              *(char *)((int64_t)unaff_RBX + 0x61) = cVar1;
              *unaff_RBX = 0;
              unaff_RBX[1] = 0;
              return cVar1;
            }
            return '\0';
          }
        }
      }
    }
  }
  return '\0';
}



char FUN_1805ae430(int32_t param_1)

{
  char cVar1;
  uint64_t *unaff_RBX;
  int iVar2;
  uint64_t unaff_RBP;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t uVar3;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  int32_t extraout_XMM0_Da_08;
  int32_t extraout_XMM0_Da_09;
  char cStack0000000000000068;
  
  cVar1 = FUN_180646500(param_1,unaff_RBX + 0xb,&unknown_var_3216_ptr);
  if (cVar1 != '\0') {
    cVar1 = FUN_18055f260(extraout_XMM0_Da,(int64_t)unaff_RBX + 0x5c,&unknown_var_3088_ptr);
    if (cVar1 != '\0') {
      iVar2 = (int)unaff_RBP;
      _cStack0000000000000068 =
           (int)CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),
                         *(char *)(unaff_RBX + 0xc) != (char)(unaff_RBP & 0xffffffff));
      cVar1 = FUN_18055f260(extraout_XMM0_Da_00,&stack0x00000068,&system_param1_ptr);
      *(bool *)(unaff_RBX + 0xc) = _cStack0000000000000068 != iVar2;
      if (cVar1 != '\0') {
        _cStack0000000000000068 =
             (int)CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),
                           *(char *)((int64_t)unaff_RBX + 0x61) != (char)(unaff_RBP & 0xffffffff));
        cVar1 = FUN_18055f260(extraout_XMM0_Da_01,&stack0x00000068,&system_param1_ptr);
        *(bool *)((int64_t)unaff_RBX + 0x61) = _cStack0000000000000068 != iVar2;
        if (cVar1 != '\0') {
          _cStack0000000000000068 =
               (int)CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),
                             cStack0000000000000068 != (char)(unaff_RBP & 0xffffffff));
          cVar1 = FUN_18055f260(extraout_XMM0_Da_02,&stack0x00000068,&system_param1_ptr);
          if ((cVar1 == '\0') || (_cStack0000000000000068 == iVar2)) {
            *(int8_t *)(unaff_RBX + 7) = 0xff;
            uVar3 = extraout_XMM0_Da_03;
          }
          else {
            _cStack0000000000000068 = (int)*(char *)(unaff_RBX + 7);
            cVar1 = FUN_18055f260(extraout_XMM0_Da_03,&stack0x00000068,&unknown_var_3072_ptr);
            *(char *)(unaff_RBX + 7) = cStack0000000000000068;
            uVar3 = extraout_XMM0_Da_04;
          }
          if (cVar1 != '\0') {
            _cStack0000000000000068 =
                 (int)CONCAT71((int7)(unaff_RBP >> 8),cStack0000000000000068 != (char)unaff_RBP);
            cVar1 = FUN_18055f260(uVar3,&stack0x00000068,&system_param1_ptr);
            if ((cVar1 != '\0') && (_cStack0000000000000068 != 0)) {
              cVar1 = FUN_180646700();
              if (cVar1 != '\0') {
                cVar1 = FUN_180646700(extraout_XMM0_Da_05,(int64_t)unaff_RBX + 4,&unknown_var_3136_ptr);
                if (cVar1 != '\0') {
                  cVar1 = FUN_180646700(extraout_XMM0_Da_06,unaff_RBX + 1,&unknown_var_3152_ptr);
                  if (cVar1 != '\0') {
                    cVar1 = FUN_180646700(extraout_XMM0_Da_07,unaff_RBX + 2,&unknown_var_3104_ptr);
                    if (cVar1 != '\0') {
                      cVar1 = FUN_180646700(extraout_XMM0_Da_08,(int64_t)unaff_RBX + 0x14,
                                            &unknown_var_3104_ptr);
                      if (cVar1 != '\0') {
                        cVar1 = FUN_180646700(extraout_XMM0_Da_09,unaff_RBX + 3,&unknown_var_3120_ptr);
                        if (cVar1 != '\0') {
                          *(int8_t *)((int64_t)unaff_RBX + 0x61) = 1;
                          return '\x01';
                        }
                      }
                    }
                  }
                }
              }
              *(int8_t *)((int64_t)unaff_RBX + 0x61) = 0;
              return '\0';
            }
            unaff_RBX[2] = 0;
            unaff_RBX[3] = 0;
            *(char *)((int64_t)unaff_RBX + 0x61) = cVar1;
            *unaff_RBX = 0;
            unaff_RBX[1] = 0;
            return cVar1;
          }
          return '\0';
        }
      }
    }
  }
  return '\0';
}



char FUN_1805ae650(uint64_t param_1,int32_t param_2,int32_t *param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_180645c10(param_1,0,&system_param1_ptr);
  if (((((cVar1 != '\0') && (cVar1 = FUN_180645c10(param_1,0xb,&unknown_var_3472_ptr), cVar1 != '\0')) &&
       (cVar1 = FUN_180645c10(param_1,param_2,&unknown_var_3424_ptr), cVar1 != '\0')) &&
      (((cVar1 = FUN_180645c10(param_1,param_3[8],&system_data_bc90), cVar1 != '\0' &&
        (cVar1 = FUN_180645c10(param_1,param_3[9],&unknown_var_3408_ptr), cVar1 != '\0')) &&
       ((cVar1 = FUN_180645c10(param_1,param_3[10],&system_data_buffer_ptr), cVar1 != '\0' &&
        ((cVar1 = FUN_180645c10(param_1,param_3[0xb],&unknown_var_3424_ptr), cVar1 != '\0' &&
         (cVar1 = FUN_180645c10(param_1,(int)*(char *)(param_3 + 0xc),&unknown_var_3440_ptr), cVar1 != '\0'
         )))))))) &&
     ((cVar1 = FUN_180645c10(param_1,param_3[0xd],&unknown_var_3200_ptr), cVar1 != '\0' &&
      (((((cVar1 = FUN_18056eb00(param_1,param_3 + 0xf,&unknown_var_3168_ptr), cVar1 != '\0' &&
          (cVar1 = FUN_180645ea0(param_1,*(uint64_t *)(param_3 + 0x14),&unknown_var_6904_ptr),
          cVar1 != '\0')) &&
         (cVar1 = FUN_180645ce0(param_1,param_3[0x16],&unknown_var_3216_ptr), cVar1 != '\0')) &&
        ((cVar1 = FUN_180645c10(param_1,param_3[0x17],&unknown_var_3088_ptr), cVar1 != '\0' &&
         (cVar1 = FUN_180645c10(param_1,*(char *)(param_3 + 0x18) != '\0',&system_param1_ptr),
         cVar1 != '\0')))) &&
       (cVar1 = FUN_180645c10(param_1,*(char *)((int64_t)param_3 + 0x61) != '\0',&system_param1_ptr),
       cVar1 != '\0')))))) {
    cVar1 = *(char *)(param_3 + 0xe);
    cVar2 = FUN_180645c10(param_1,-(cVar1 >> 7) ^ 1,&system_param1_ptr);
    if (cVar2 != '\0') {
      if ((byte)-(cVar1 >> 7) == 0) {
        cVar2 = FUN_180645c10(param_1,(int)*(char *)(param_3 + 0xe),&unknown_var_3072_ptr);
      }
      if (cVar2 != '\0') {
        if ((((float)param_3[4] == 0.0) && ((float)param_3[5] == 0.0)) && ((float)param_3[6] == 0.0)
           ) {
          cVar1 = '\0';
        }
        else {
          cVar1 = '\x01';
        }
        cVar2 = FUN_180645c10(param_1,cVar1,&system_param1_ptr);
        if ((cVar2 != '\0') && (cVar1 != '\0')) {
          cVar1 = FUN_180645fa0(param_1,*param_3,&unknown_var_3136_ptr);
          if ((cVar1 == '\0') ||
             (((cVar1 = FUN_180645fa0(param_1,param_3[1],&unknown_var_3136_ptr), cVar1 == '\0' ||
               (cVar1 = FUN_180645fa0(param_1,param_3[2],&unknown_var_3152_ptr), cVar1 == '\0')) ||
              (cVar1 = FUN_18056eb00(param_1,param_3 + 4,&unknown_var_3104_ptr), cVar1 == '\0')))) {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x01';
          }
        }
      }
    }
    return cVar2;
  }
  return '\0';
}



char FUN_1805ae844(float param_1)

{
  char cVar1;
  char cVar2;
  int32_t *unaff_RDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  
  if (((param_1 == (float)unaff_RDI[4]) && (param_1 == (float)unaff_RDI[5])) &&
     (param_1 == (float)unaff_RDI[6])) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  cVar1 = FUN_180645c10(param_1,cVar2,&system_param1_ptr);
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    cVar2 = FUN_180645fa0(extraout_XMM0_Da,*unaff_RDI,&unknown_var_3136_ptr);
    if (((cVar2 != '\0') &&
        ((cVar2 = FUN_180645fa0(extraout_XMM0_Da_00,unaff_RDI[1],&unknown_var_3136_ptr), cVar2 != '\0' &&
         (cVar2 = FUN_180645fa0(extraout_XMM0_Da_01,unaff_RDI[2],&unknown_var_3152_ptr), cVar2 != '\0'))))
       && (cVar2 = FUN_18056eb00(extraout_XMM0_Da_02,unaff_RDI + 4,&unknown_var_3104_ptr), cVar2 != '\0'))
    {
      return '\x01';
    }
    cVar1 = '\0';
  }
  return cVar1;
}






// 函数: void FUN_1805ae8e4(void)
void FUN_1805ae8e4(void)

{
  return;
}



int8_t FUN_1805ae8f4(void)

{
  return 0;
}



int8_t FUN_1805ae8f8(void)

{
  return 0;
}



int8_t
FUN_1805ae910(uint64_t param_1,int32_t param_2,int32_t *param_3,int8_t param_4,
             uint64_t param_5)

{
  char cVar1;
  
  cVar1 = FUN_180645c10(param_1,0,&system_param1_ptr);
  if (((((cVar1 != '\0') && (cVar1 = FUN_180645c10(param_1,0x14,&unknown_var_3472_ptr), cVar1 != '\0')) &&
       (cVar1 = FUN_180645c10(param_1,param_2,&system_data_bcc0), cVar1 != '\0')) &&
      ((cVar1 = FUN_180645fa0(param_1,*param_3,&unknown_var_3264_ptr), cVar1 != '\0' &&
       (cVar1 = FUN_180645fa0(param_1,param_3[1],&unknown_var_3264_ptr), cVar1 != '\0')))) &&
     ((cVar1 = FUN_180645fa0(param_1,param_3[2],&unknown_var_3280_ptr), cVar1 != '\0' &&
      ((cVar1 = FUN_180645c10(param_1,param_4,&system_param1_ptr), cVar1 != '\0' &&
       (cVar1 = FUN_1805aea10(param_1,param_5), cVar1 != '\0')))))) {
    return 1;
  }
  return 0;
}



uint64_t FUN_1805aea10(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int64_t lVar6;
  char *pcVar7;
  bool bVar8;
  
  bVar8 = true;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + 0xc0);
    if (4 < *(int *)(param_2 + 0xc0)) {
      iVar5 = 4;
    }
    lVar6 = (int64_t)iVar5;
    if (0 < iVar5) {
      pcVar7 = (char *)(param_2 + 0x28);
      do {
        if (((bVar8) && (cVar2 = FUN_180645c10(param_1,1), cVar2 != '\0')) &&
           (cVar2 = FUN_180645c10(param_1,*(int32_t *)(pcVar7 + -8)), cVar2 != '\0')) {
          cVar2 = FUN_180645c10(param_1,*pcVar7 != '\0',&system_param1_ptr);
          bVar8 = cVar2 != '\0';
          if (*pcVar7 != '\0') {
            if (!bVar8) goto LAB_1805aeb00;
            uVar3 = FUN_18055f6f0(&unknown_var_3024_ptr,*(int32_t *)(pcVar7 + -4));
            iVar5 = *(int *)(param_1 + 0x5c4);
            bVar4 = (byte)iVar5 & 0x1f;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 0x1f;
              bVar4 = bVar4 - 0x20;
            }
            puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x598) + (int64_t)(iVar5 >> 5) * 4);
            *puVar1 = *puVar1 | (uint64_t)uVar3 << (bVar4 & 0x3f);
            bVar8 = true;
            *(int *)(param_1 + 0x5c4) = *(int *)(param_1 + 0x5c4) + 5;
            *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 5;
          }
        }
        else {
LAB_1805aeb00:
          bVar8 = false;
        }
        pcVar7 = pcVar7 + 0x30;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (!bVar8) {
        return 0;
      }
    }
  }
  cVar2 = FUN_180645c10(param_1,0,&system_param1_ptr);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



uint64_t FUN_1805aea44(uint64_t param_1,int64_t param_2,char param_3)

{
  uint64_t *puVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  char *pcVar6;
  
  pcVar6 = (char *)(param_2 + 0x28);
  do {
    if (param_3 == '\0') {
LAB_1805aeb00:
      param_3 = false;
    }
    else {
      cVar2 = FUN_180645c10();
      if (cVar2 == '\0') goto LAB_1805aeb00;
      cVar2 = FUN_180645c10();
      if (cVar2 == '\0') goto LAB_1805aeb00;
      cVar2 = FUN_180645c10();
      param_3 = cVar2 != '\0';
      if (*pcVar6 != '\0') {
        if (!(bool)param_3) goto LAB_1805aeb00;
        uVar3 = FUN_18055f6f0(&unknown_var_3024_ptr,*(int32_t *)(pcVar6 + -4));
        iVar5 = *(int *)(unaff_RBX + 0x5c4);
        bVar4 = (byte)iVar5 & 0x1f;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0x1f;
          bVar4 = bVar4 - 0x20;
        }
        puVar1 = (uint64_t *)(*(int64_t *)(unaff_RBX + 0x598) + (int64_t)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 | (uint64_t)uVar3 << (bVar4 & 0x3f);
        param_3 = true;
        *(int *)(unaff_RBX + 0x5c4) = *(int *)(unaff_RBX + 0x5c4) + 5;
        *(int *)(unaff_RBX + 0x5c8) = *(int *)(unaff_RBX + 0x5c8) + 5;
      }
    }
    pcVar6 = pcVar6 + 0x30;
    unaff_RSI = unaff_RSI + -1;
    if (unaff_RSI == 0) {
      if ((bool)param_3 != false) {
        cVar2 = FUN_180645c10();
        if (cVar2 != '\0') {
          return 1;
        }
      }
      return 0;
    }
  } while( true );
}



int8_t FUN_1805aeb1b(void)

{
  char cVar1;
  
  cVar1 = FUN_180645c10();
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



char FUN_1805aeb50(uint64_t param_1,int64_t param_2)

{
  char cVar1;
  int32_t *puVar2;
  int iVar3;
  bool bVar4;
  uint auStackX_18 [4];
  
  auStackX_18[0] = 0;
  cVar1 = FUN_18055f260(param_1,auStackX_18,&system_param1_ptr);
  iVar3 = 0;
  bVar4 = auStackX_18[0] != 0;
  if (auStackX_18[0] != 0) {
    puVar2 = (int32_t *)(param_2 + 0x24);
    do {
      if (cVar1 == '\0') {
LAB_1805aec10:
        cVar1 = '\0';
      }
      else {
        cVar1 = FUN_18055f260(param_1,param_2 + 0x20 + (int64_t)iVar3 * 0x30);
        if (cVar1 == '\0') goto LAB_1805aec10;
        auStackX_18[0] = 0;
        cVar1 = FUN_18055f260(param_1,auStackX_18);
        if (cVar1 == '\0') goto LAB_1805aec10;
        if (auStackX_18[0] == 0) {
          *puVar2 = 0x3f800000;
        }
        else {
          cVar1 = FUN_180646700(param_1,param_2 + 0x24 + (int64_t)iVar3 * 0x30);
          if (cVar1 == '\0') goto LAB_1805aec10;
        }
        auStackX_18[0] = (uint)bVar4;
        cVar1 = FUN_18055f260(param_1,auStackX_18);
        bVar4 = auStackX_18[0] != 0;
        if (cVar1 == '\0') goto LAB_1805aec10;
        cVar1 = '\x01';
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0xc;
    } while (bVar4);
  }
  return cVar1;
}



// WARNING: Removing unreachable block (ram,0x0001805aebf6)

char FUN_1805aeb95(uint64_t param_1,uint64_t param_2,char param_3)

{
  char cVar1;
  int32_t *puVar2;
  int unaff_R12D;
  char unaff_R14B;
  int64_t unaff_R15;
  
  puVar2 = (int32_t *)(unaff_R15 + 0x24);
  do {
    if (((param_3 == '\0') || (cVar1 = FUN_18055f260(), cVar1 == '\0')) ||
       (cVar1 = FUN_18055f260(), cVar1 == '\0')) {
LAB_1805aec10:
      param_3 = '\0';
    }
    else {
      *puVar2 = 0x3f800000;
      cVar1 = FUN_18055f260();
      unaff_R14B = CONCAT31((int3)((uint)unaff_R12D >> 8),unaff_R14B != '\0') != unaff_R12D;
      if (cVar1 == '\0') goto LAB_1805aec10;
      param_3 = '\x01';
    }
    puVar2 = puVar2 + 0xc;
    if (unaff_R14B == '\0') {
      return param_3;
    }
  } while( true );
}



int8_t FUN_1805aec28(uint64_t param_1,uint64_t param_2,int8_t param_3)

{
  return param_3;
}



char FUN_1805aec39(void)

{
  char cVar1;
  int32_t *unaff_RBX;
  int unaff_R12D;
  char unaff_R14B;
  int iStack0000000000000060;
  
code_r0x0001805aec39:
  *unaff_RBX = 0x3f800000;
LAB_1805aec3f:
  iStack0000000000000060 = CONCAT31((int3)((uint)unaff_R12D >> 8),unaff_R14B != '\0');
  cVar1 = FUN_18055f260();
  unaff_R14B = iStack0000000000000060 != unaff_R12D;
  if (cVar1 == '\0') goto LAB_1805aec10;
  cVar1 = '\x01';
  do {
    unaff_RBX = unaff_RBX + 0xc;
    if (!(bool)unaff_R14B) {
      return cVar1;
    }
    if (cVar1 != '\0') {
      cVar1 = FUN_18055f260();
      if (cVar1 != '\0') {
        iStack0000000000000060 = unaff_R12D;
        cVar1 = FUN_18055f260();
        if (cVar1 != '\0') {
          if (iStack0000000000000060 == unaff_R12D) goto code_r0x0001805aec39;
          cVar1 = FUN_180646700();
          if (cVar1 != '\0') goto LAB_1805aec3f;
        }
      }
    }
LAB_1805aec10:
    cVar1 = '\0';
  } while( true );
}



char FUN_1805aec80(uint64_t param_1,float *param_2,uint64_t param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  int iStackX_18;
  int32_t uStackX_1c;
  
  _iStackX_18 = CONCAT44((int)((uint64_t)param_3 >> 0x20),0xffffffff);
  fVar7 = 0.0;
  cVar2 = FUN_18055f260(param_1,&iStackX_18,&unknown_var_3056_ptr);
  iVar1 = iStackX_18;
  lVar4 = (int64_t)iStackX_18;
  iVar3 = 0;
  pfVar5 = param_2;
  pfVar6 = param_2;
  do {
    if (iVar3 != iVar1) {
      if (cVar2 == '\0') {
LAB_1805aecf5:
        cVar2 = '\0';
      }
      else {
        cVar2 = FUN_180646700(param_1,pfVar5);
        if (cVar2 == '\0') goto LAB_1805aecf5;
        cVar2 = '\x01';
      }
      fVar7 = fVar7 + *pfVar6 * *pfVar6;
    }
    iVar3 = iVar3 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar6 = pfVar6 + 1;
    if (3 < iVar3) {
      param_2[lVar4] = SQRT(1.0 - fVar7);
      return cVar2;
    }
  } while( true );
}






