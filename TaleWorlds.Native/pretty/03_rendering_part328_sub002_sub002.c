#include "TaleWorlds.Native.Split.h"

// 03_rendering_part328_sub002_sub002.c - 1 个函数

// 函数: void FUN_18043cae0(longlong *param_1,uint64_t *param_2)
void FUN_18043cae0(longlong *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  if (param_1 != (longlong *)0x0) {
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
  longlong *plVar1;
  int32_t uVar2;
  longlong *plStackX_8;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  FUN_1802f63a0(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_20 = SUB84(plVar1,0);
  uStack_1c = (int32_t)((ulonglong)plVar1 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



uint64_t
FUN_18043cbd0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *puVar4;
  uint64_t uVar5;
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  lVar2 = lStack_28;
  if (iStack_20 == 0xf) {
    iVar1 = strcmp(lStack_28,&UNK_180a297f0);
    if (iVar1 == 0) {
      uVar5 = 0x34;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&UNK_180a29788);
    if (iVar1 == 0) {
      uVar5 = 0x48;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&UNK_180a29858);
    if (iVar1 == 0) {
      uVar5 = 0x24;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&UNK_180a29868);
    if (iVar1 == 0) {
      uVar5 = 0x40;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&UNK_180a299c0);
    if (iVar1 == 0) {
      uVar5 = 0x18;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&UNK_180a29a88);
    if (iVar1 == 0) {
      uVar5 = 4;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&UNK_180a29ab0);
    if (iVar1 == 0) {
      uVar5 = 0x28;
      goto LAB_18043d0b9;
    }
  }
  else if (iStack_20 == 0x18) {
    iVar1 = strcmp(lStack_28,&UNK_180a29798);
    if (iVar1 == 0) {
      uVar5 = 4;
      goto LAB_18043d0b9;
    }
LAB_18043cff5:
    iVar1 = strcmp(lVar2,&UNK_180a299d0);
    if (iVar1 == 0) {
      uVar5 = 0x10;
      goto LAB_18043d0b9;
    }
  }
  else if (iStack_20 == 0x13) {
    iVar1 = strcmp(lStack_28,&UNK_180a297b8);
    if (iVar1 == 0) {
      uVar5 = 0xc;
      goto LAB_18043d0b9;
    }
LAB_18043cfad:
    iVar1 = strcmp(lVar2,&UNK_180a29990);
    if (iVar1 == 0) {
      uVar5 = 0x1c;
      goto LAB_18043d0b9;
    }
  }
  else if (iStack_20 == 0x1a) {
    iVar1 = strcmp(lStack_28,&UNK_180a297d0);
    if (iVar1 == 0) {
      uVar5 = 0x20;
      goto LAB_18043d0b9;
    }
  }
  else if (iStack_20 == 0x17) {
    iVar1 = strcmp(lStack_28,&UNK_180a29878);
    if (iVar1 == 0) {
      uVar5 = 4;
      goto LAB_18043d0b9;
    }
LAB_18043cdbd:
    iVar1 = strcmp(lVar2,&UNK_180a29828);
    if (iVar1 == 0) {
      uVar5 = 0x3c;
      goto LAB_18043d0b9;
    }
    iVar1 = strcmp(lVar2,&UNK_180a29840);
    if (iVar1 == 0) {
      uVar5 = 0x1e8;
      goto LAB_18043d0b9;
    }
  }
  else {
    if (iStack_20 == 0x22) {
      puVar4 = &UNK_180a29890;
    }
    else {
      if (iStack_20 != 0xc) {
        if (iStack_20 == 0x12) {
          iVar1 = strcmp(lStack_28,&UNK_180a29810);
          if (iVar1 == 0) {
            uVar5 = 0x1e98;
            goto LAB_18043d0b9;
          }
LAB_18043cdfe:
          iVar1 = strcmp(lVar2,&UNK_180a29930);
          if (iVar1 == 0) {
            uVar5 = 4;
            goto LAB_18043d0b9;
          }
LAB_18043d039:
          iVar1 = strcmp(lVar2,&UNK_180a29af0);
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
              if (*(char *)(lStack_28 + lVar2) != (&UNK_180a29944)[lVar2]) goto LAB_18043d0b7;
              lVar2 = lVar3;
            } while (lVar3 != 4);
            goto LAB_18043d0b9;
          }
          if (iStack_20 == 0x24) {
            iVar1 = strcmp(lStack_28,&UNK_180a29948);
            if (iVar1 == 0) {
              uVar5 = 1;
              goto LAB_18043d0b9;
            }
LAB_18043cf4d:
            iVar1 = strcmp(lVar2,&UNK_180a29a10);
            if (iVar1 == 0) {
              uVar5 = 0x80;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0x19) {
            iVar1 = strcmp(lStack_28,&UNK_180a29970);
            if (iVar1 == 0) {
              uVar5 = 2;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0x1c) {
            iVar1 = strcmp(lStack_28,&UNK_180a298b8);
            if (iVar1 == 0) {
              uVar5 = 0x4c;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0x20) {
            iVar1 = strcmp(lStack_28,&UNK_180a298d8);
            if (iVar1 == 0) {
              uVar5 = 0x298;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0x1d) {
            iVar1 = strcmp(lStack_28,&UNK_180a29900);
            if (iVar1 == 0) {
              uVar5 = 0x24;
              goto LAB_18043d0b9;
            }
          }
          else if (iStack_20 == 0xe) {
            puVar4 = &UNK_180a29920;
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
                iVar1 = strcmp(lStack_28,&UNK_180a29a38);
                if (iVar1 == 0) {
                  uVar5 = 0x48;
                  goto LAB_18043d0b9;
                }
                goto LAB_18043d0b7;
              }
              if (iStack_20 == 0x23) {
                puVar4 = &UNK_180a29a60;
                goto LAB_18043d074;
              }
              if (iStack_20 == 0x13) goto LAB_18043cfad;
              if (iStack_20 == 0x10) {
                iVar1 = strcmp(lStack_28,&UNK_180a299a8);
                if (iVar1 == 0) {
                  uVar5 = 8;
                  goto LAB_18043d0b9;
                }
LAB_18043d019:
                iVar1 = strcmp(lVar2,&UNK_180a29ad8);
                if (iVar1 == 0) {
                  uVar5 = 4;
                  goto LAB_18043d0b9;
                }
LAB_18043d087:
                iVar1 = strcmp(lVar2,&UNK_180a29a98);
                if (iVar1 == 0) {
                  uVar5 = 4;
                  goto LAB_18043d0b9;
                }
                puVar4 = &UNK_180a29ac0;
                goto LAB_18043d0a9;
              }
              if (iStack_20 == 0x18) goto LAB_18043cff5;
              if (iStack_20 == 0x10) goto LAB_18043d019;
              if (iStack_20 != 0x12) {
                if (iStack_20 == 0xd) {
                  puVar4 = &UNK_180a29b08;
                  goto LAB_18043d074;
                }
                if (iStack_20 == 0xc) goto LAB_18043d06a;
                if (iStack_20 != 0x10) goto LAB_18043d0b7;
                goto LAB_18043d087;
              }
              goto LAB_18043d039;
            }
            iVar1 = strcmp(lStack_28,&UNK_180a299f0);
            if (iVar1 == 0) {
              uVar5 = 0x88;
              goto LAB_18043d0b9;
            }
          }
        }
        goto LAB_18043d0b7;
      }
      iVar1 = strcmp(lStack_28,&UNK_180a29800);
      if (iVar1 == 0) {
        uVar5 = 1;
        goto LAB_18043d0b9;
      }
LAB_18043d06a:
      puVar4 = &UNK_180a29b18;
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
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 == 0) {
    return uVar5;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t
FUN_18043d100(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)

{
  char cVar1;
  void *puVar2;
  uint64_t uVar3;
  int8_t auStack_50 [32];
  int8_t auStack_30 [40];
  
  FUN_180627910(auStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_180627910(auStack_50,param_2);
  cVar1 = FUN_180629850(auStack_30,&UNK_180a297f0,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_180629850(auStack_30,&UNK_180a29788,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_180629850(auStack_30,&UNK_180a297b8,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_180629850(auStack_30,&UNK_180a297d0,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_180629850(auStack_30,&UNK_180a29858,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_180629850(auStack_30,&UNK_180a29868,1);
            if (cVar1 == '\0') {
              cVar1 = FUN_180629850(auStack_30,&UNK_180a29810,1);
              if (cVar1 == '\0') {
                cVar1 = FUN_180629850(auStack_30,&UNK_180a29828,1);
                if (cVar1 == '\0') {
                  cVar1 = FUN_180629850(auStack_30,&UNK_180a29840,1);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_180629850(auStack_30,&UNK_180a29944,1);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_180629850(auStack_30,&UNK_180a298b8,1);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_180629850(auStack_30,&UNK_180a298d8,1);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_180629850(auStack_30,&UNK_180a29900,1);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_180629850(auStack_30,&UNK_180a29920,1);
                            if (cVar1 == '\0') {
                              cVar1 = FUN_180629850(auStack_30,&UNK_180a299f0,1);
                              if (cVar1 == '\0') {
                                cVar1 = FUN_180629850(auStack_30,&UNK_180a29a10,1);
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_180629850(auStack_30,&UNK_180a29a38,1);
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_180629850(auStack_30,&UNK_180a29990,1);
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_180629850(auStack_30,&UNK_180a299a8,1);
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_180629850(auStack_30,&UNK_180a299c0,1);
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_180629850(auStack_30,&UNK_180a299d0,1);
                                          if (cVar1 == '\0') {
                                            cVar1 = FUN_180629850(auStack_30,&UNK_180a29ad8,1);
                                            if (cVar1 == '\0') {
                                              cVar1 = FUN_180629850(auStack_30,&UNK_180a29af0,1);
                                              if (cVar1 == '\0') {
                                                cVar1 = FUN_180629850(auStack_30,&UNK_180a29a88,1);
                                                if (cVar1 != '\0') {
                                                  puVar2 = &UNK_180a05a30;
                                                  goto LAB_18043e263;
                                                }
                                                cVar1 = FUN_180629850(auStack_30,&UNK_180a29a98,1);
                                                if (cVar1 != '\0') goto LAB_18043e25c;
                                                cVar1 = FUN_180629850(auStack_30,&UNK_180a29ab0,1);
                                                if (cVar1 == '\0') {
                                                  cVar1 = FUN_180629850(auStack_30,&UNK_180a29ac0,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    cVar1 = FUN_180629850(auStack_50,&DAT_180a06a48,
                                                                          1);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = FUN_180629850(auStack_50,
                                                                            &UNK_180a2a1e8,1);
                                                      if (cVar1 != '\0') goto LAB_18043e151;
                                                      cVar1 = FUN_180629850(auStack_50,
                                                                            &UNK_180a2a200,1);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = FUN_180629850(auStack_50,
                                                                              &UNK_180a2a210,1);
                                                        if (cVar1 == '\0') {
                                                          puVar2 = &DAT_180a06b58;
                                                          goto LAB_18043e598;
                                                        }
                                                        goto LAB_18043e23e;
                                                      }
                                                      goto LAB_18043d27c;
                                                    }
                                                  }
                                                }
                                                else {
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a228,1)
                                                  ;
                                                  if (cVar1 == '\0') {
                                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2a234,
                                                                          1);
                                                    if (cVar1 != '\0') goto LAB_18043e151;
                                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2481c,
                                                                          1);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = FUN_180629850(auStack_50,
                                                                            &UNK_180a05a30,1);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = FUN_180629850(auStack_50,
                                                                              &UNK_180a2a240,1);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = FUN_180629850(auStack_50,
                                                                                &UNK_180a0e7d8,1);
                                                          if (cVar1 == '\0') {
                                                            puVar2 = &UNK_180a2a250;
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
                                                cVar1 = FUN_180629850(auStack_50,&UNK_180a0bc90,1);
                                                if (cVar1 == '\0') {
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a0e0,1)
                                                  ;
                                                  if (cVar1 != '\0') goto LAB_18043e073;
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a0f0,1)
                                                  ;
                                                  if (cVar1 != '\0') goto LAB_18043e2f3;
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a1a8,1)
                                                  ;
                                                  if (cVar1 != '\0') {
LAB_18043e314:
                                                    uVar3 = 0x6c;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a1b8,1)
                                                  ;
                                                  if (cVar1 != '\0') goto LAB_18043e335;
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a1c8,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x8c;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a1d8,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0xa4;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a158,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0xa8;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a168,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0xbc;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a178,1)
                                                  ;
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0xc4;
                                                    goto LAB_18043e26e;
                                                  }
                                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2a188,1)
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
                                              puVar2 = &UNK_180a21988;
LAB_18043e263:
                                              FUN_180629850(auStack_50,puVar2,1);
                                            }
                                          }
                                          else {
                                            cVar1 = FUN_180629850(auStack_50,&DAT_180a06ee8,1);
                                            if (cVar1 == '\0') {
                                              cVar1 = FUN_180629850(auStack_50,&DAT_180a06ed8,1);
                                              if (cVar1 != '\0') goto LAB_18043e151;
                                              cVar1 = FUN_180629850(auStack_50,&DAT_180a06ea8,1);
                                              if (cVar1 != '\0') goto LAB_18043d27c;
                                              cVar1 = FUN_180629850(auStack_50,&DAT_180a06a00,1);
                                              if (cVar1 != '\0') goto LAB_18043e23e;
                                            }
                                          }
                                        }
                                        else {
                                          cVar1 = FUN_180629850(auStack_50,&UNK_180a21988,1);
                                          if (cVar1 == '\0') {
                                            cVar1 = FUN_180629850(auStack_50,&UNK_180a2481c,1);
                                            if (cVar1 != '\0') goto LAB_18043e151;
                                            cVar1 = FUN_180629850(auStack_50,&UNK_180a2a0d8,1);
                                            if (cVar1 != '\0') goto LAB_18043e1bc;
                                          }
                                        }
                                      }
                                      else {
                                        cVar1 = FUN_180629850(auStack_50,&DAT_180a069f0,1);
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_180629850(auStack_50,&DAT_180a06a28,1);
                                          if (cVar1 != '\0') goto LAB_18043e151;
                                        }
                                      }
                                    }
                                    else {
                                      cVar1 = FUN_180629850(auStack_50,&UNK_180a2a130,1);
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_180629850(auStack_50,&UNK_180a2a148,1);
                                        if (cVar1 != '\0') goto LAB_18043e151;
                                        cVar1 = FUN_180629850(auStack_50,&UNK_180a2a0c0,1);
                                        if (cVar1 != '\0') {
LAB_18043e1bc:
                                          uVar3 = 0x14;
                                          goto LAB_18043e26e;
                                        }
                                        cVar1 = FUN_180629850(auStack_50,&DAT_180a06ec0,1);
                                        if (cVar1 != '\0') goto LAB_18043e0fd;
                                      }
                                    }
                                  }
                                  else {
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2a0b4,1);
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_180629850(auStack_50,&UNK_180a2a048,1);
                                      if (cVar1 != '\0') goto LAB_18043d27c;
                                      cVar1 = FUN_180629850(auStack_50,&UNK_180a2a058,1);
                                      if (cVar1 != '\0') goto LAB_18043e5ac;
                                      cVar1 = FUN_180629850(auStack_50,&UNK_180a2a070,1);
                                      if (cVar1 != '\0') {
LAB_18043e0fd:
                                        uVar3 = 0x18;
                                        goto LAB_18043e26e;
                                      }
                                      cVar1 = FUN_180629850(auStack_50,&UNK_180a2a080,1);
                                      if (cVar1 != '\0') {
LAB_18043e033:
                                        uVar3 = 0x28;
                                        goto LAB_18043e26e;
                                      }
                                      cVar1 = FUN_180629850(auStack_50,&UNK_180a2a100,1);
                                      if (cVar1 != '\0') goto LAB_18043d593;
                                      cVar1 = FUN_180629850(auStack_50,&UNK_180a2a118,1);
                                      if (cVar1 != '\0') goto LAB_18043e073;
                                    }
                                  }
                                }
                                else {
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29e90,1);
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29e98,1);
                                    if (cVar1 != '\0') goto LAB_18043e151;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29ea0,1);
                                    if (cVar1 != '\0') goto LAB_18043d27c;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29e28,1);
                                    if (cVar1 != '\0') goto LAB_18043e23e;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2481c,1);
                                    if (cVar1 != '\0') goto LAB_18043e5ac;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2a000,1);
                                    if (cVar1 != '\0') goto LAB_18043e1bc;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2a010,1);
                                    if (cVar1 != '\0') goto LAB_18043e0fd;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29f08,1);
                                    if (cVar1 != '\0') goto LAB_18043d306;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29f18,1);
                                    if (cVar1 != '\0') goto LAB_18043d375;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29f28,1);
                                    if (cVar1 != '\0') goto LAB_18043d20d;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29f38,1);
                                    if (cVar1 != '\0') goto LAB_18043e033;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29eb0,1);
                                    if (cVar1 != '\0') goto LAB_18043d454;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29ef0,1);
                                    if (cVar1 != '\0') goto LAB_18043d1b9;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29f70,1);
                                    if (cVar1 != '\0') goto LAB_18043d593;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2a028,1);
                                    if (cVar1 != '\0') goto LAB_18043e073;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2a038,1);
                                    if (cVar1 != '\0') goto LAB_18043de8e;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29fc8,1);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x54;
                                      goto LAB_18043e26e;
                                    }
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29fd8,1);
                                    if (cVar1 != '\0') goto LAB_18043ded0;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29fe4,1);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x5c;
                                      goto LAB_18043e26e;
                                    }
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29ff0,1);
                                    if (cVar1 != '\0') goto LAB_18043df12;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2a088,1);
                                    if (cVar1 != '\0') goto LAB_18043df33;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2246c,1);
                                    if (cVar1 != '\0') goto LAB_18043e2f3;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2a098,1);
                                    if (cVar1 != '\0') goto LAB_18043e335;
                                    cVar1 = FUN_180629850(auStack_50,&UNK_180a2a0a8,1);
                                    if (cVar1 != '\0') goto LAB_18043df8e;
                                  }
                                }
                              }
                              else {
                                cVar1 = FUN_180629850(auStack_50,&UNK_180a29e90,1);
                                if (cVar1 == '\0') {
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29e98,1);
                                  if (cVar1 != '\0') goto LAB_18043e151;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29ea0,1);
                                  if (cVar1 != '\0') goto LAB_18043d27c;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29e28,1);
                                  if (cVar1 != '\0') {
LAB_18043e23e:
                                    uVar3 = 0xc;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29e38,1);
                                  if (cVar1 != '\0') goto LAB_18043e5ac;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29e50,1);
                                  if (cVar1 != '\0') goto LAB_18043e0fd;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29e68,1);
                                  if (cVar1 != '\0') goto LAB_18043d306;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2481c,1);
                                  if (cVar1 != '\0') goto LAB_18043d375;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f08,1);
                                  if (cVar1 != '\0') goto LAB_18043d20d;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f18,1);
                                  if (cVar1 != '\0') goto LAB_18043e033;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f28,1);
                                  if (cVar1 != '\0') {
LAB_18043d454:
                                    uVar3 = 0x2c;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f38,1);
                                  if (cVar1 != '\0') {
LAB_18043d1b9:
                                    uVar3 = 0x30;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29eb0,1);
                                  if (cVar1 != '\0') goto LAB_18043dae8;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29ec0,1);
                                  if (cVar1 != '\0') goto LAB_18043d593;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29ed8,1);
                                  if (cVar1 != '\0') {
                                    uVar3 = 0x3c;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29ef0,1);
                                  if (cVar1 != '\0') goto LAB_18043e073;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f70,1);
                                  if (cVar1 != '\0') goto LAB_18043d75c;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f80,1);
                                  if (cVar1 != '\0') goto LAB_18043db7b;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a0e7d8,1);
                                  if (cVar1 != '\0') {
LAB_18043ded0:
                                    uVar3 = 0x58;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a2246c,1);
                                  if (cVar1 != '\0') goto LAB_18043df12;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f98,1);
                                  if (cVar1 != '\0') {
LAB_18043df33:
                                    uVar3 = 100;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29fb0,1);
                                  if (cVar1 != '\0') goto LAB_18043e2f3;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a0a23c,1);
                                  if (cVar1 != '\0') goto LAB_18043e314;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a0a20c,1);
                                  if (cVar1 != '\0') goto LAB_18043e335;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f4c,1);
                                  if (cVar1 != '\0') {
                                    uVar3 = 0x74;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f54,1);
                                  if (cVar1 != '\0') goto LAB_18043df8e;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f5c,1);
                                  if (cVar1 != '\0') {
                                    uVar3 = 0x7c;
                                    goto LAB_18043e26e;
                                  }
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a29f64,1);
                                  if (cVar1 != '\0') goto LAB_18043dc9b;
                                  cVar1 = FUN_180629850(auStack_50,&UNK_180a0ee30,1);
                                  if (cVar1 != '\0') {
                                    uVar3 = 0x84;
                                    goto LAB_18043e26e;
                                  }
                                }
                              }
                            }
                            else {
                              cVar1 = FUN_180629850(auStack_50,&UNK_180a1a478,1);
                              if (cVar1 == '\0') {
                                puVar2 = &UNK_180a1a490;
LAB_18043e598:
                                cVar1 = FUN_180629850(auStack_50,puVar2,1);
                                if (cVar1 != '\0') goto LAB_18043e5ac;
                              }
                            }
                          }
                          else {
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a29e88,1);
                            if (cVar1 == '\0') {
                              puVar2 = &UNK_180a0696c;
                              goto LAB_18043d361;
                            }
                          }
                        }
                        else {
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29d48,1);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a2481c,1);
                            if (cVar1 != '\0') goto LAB_18043e073;
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a29d58,1);
                            if (cVar1 != '\0') {
LAB_18043db7b:
                              uVar3 = 0x50;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a29d60,1);
                            if (cVar1 != '\0') {
LAB_18043df12:
                              uVar3 = 0x60;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a29df0,1);
                            if (cVar1 != '\0') {
LAB_18043e2f3:
                              uVar3 = 0x68;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a29e00,1);
                            if (cVar1 != '\0') {
LAB_18043e335:
                              uVar3 = 0x70;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a29e10,1);
                            if (cVar1 != '\0') {
LAB_18043df8e:
                              uVar3 = 0x78;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&DAT_180a29e24,1);
                            if (cVar1 != '\0') {
LAB_18043dc9b:
                              uVar3 = 0x80;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a29dd8,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x180;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a29de4,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x280;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&DAT_180a29de8,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x288;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&UNK_1809fd068,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x28c;
                              goto LAB_18043e26e;
                            }
                            cVar1 = FUN_180629850(auStack_50,&UNK_180a29dec,1);
                            if (cVar1 != '\0') {
                              uVar3 = 0x290;
                              goto LAB_18043e26e;
                            }
                          }
                        }
                      }
                      else {
                        cVar1 = FUN_180629850(auStack_50,&UNK_180a29d10,1);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29c70,1);
                          if (cVar1 != '\0') {
LAB_18043e073:
                            uVar3 = 0x40;
                            goto LAB_18043e26e;
                          }
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29c88,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x41;
                            goto LAB_18043e26e;
                          }
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29c98,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x42;
                            goto LAB_18043e26e;
                          }
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29cb0,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x43;
                            goto LAB_18043e26e;
                          }
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29d70,1);
                          if (cVar1 != '\0') {
LAB_18043de8e:
                            uVar3 = 0x44;
                            goto LAB_18043e26e;
                          }
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29d88,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x45;
                            goto LAB_18043e26e;
                          }
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29da8,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x46;
                            goto LAB_18043e26e;
                          }
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29dc8,1);
                          if (cVar1 != '\0') {
                            uVar3 = 0x47;
                            goto LAB_18043e26e;
                          }
                          cVar1 = FUN_180629850(auStack_50,&UNK_180a29d28,1);
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
                    cVar1 = FUN_180629850(auStack_50,&UNK_180a0ee30,1);
                    if (cVar1 != '\0') {
                      uVar3 = 0x1e0;
                      goto LAB_18043e26e;
                    }
                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29cf8,1);
                    if (cVar1 != '\0') {
                      uVar3 = 0x1e4;
                      goto LAB_18043e26e;
                    }
                  }
                }
                else {
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a16808,1);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_180629850(auStack_50,&UNK_180a157fc,1);
                    if (cVar1 != '\0') goto LAB_18043e5ac;
                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29bb0,1);
                    if (cVar1 != '\0') goto LAB_18043d375;
                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29c08,1);
                    if (cVar1 != '\0') goto LAB_18043d20d;
                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29cc8,1);
                    if (cVar1 != '\0') {
LAB_18043dae8:
                      uVar3 = 0x34;
                      goto LAB_18043e26e;
                    }
                    cVar1 = FUN_180629850(auStack_50,&UNK_180a29ce0,1);
                    if (cVar1 != '\0') {
LAB_18043d593:
                      uVar3 = 0x38;
                      goto LAB_18043e26e;
                    }
                  }
                }
              }
              else {
                cVar1 = FUN_180629850(auStack_50,&UNK_180a29be0,1);
                if (cVar1 != '\0') {
                  uVar3 = 0x1e80;
                  goto LAB_18043e26e;
                }
                cVar1 = FUN_180629850(auStack_50,&UNK_180a29be8,1);
                if (cVar1 != '\0') {
                  uVar3 = 0x1e88;
                  goto LAB_18043e26e;
                }
                cVar1 = FUN_180629850(auStack_50,&UNK_180a29bf0,1);
                if (cVar1 != '\0') {
                  uVar3 = 0x1e90;
                  goto LAB_18043e26e;
                }
              }
            }
            else {
              cVar1 = FUN_180629850(auStack_50,&UNK_180a29b8c,1);
              if (cVar1 == '\0') {
                cVar1 = FUN_180629850(auStack_50,&UNK_180a29b98,1);
                if (cVar1 != '\0') goto LAB_18043d27c;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a29bb0,1);
                if (cVar1 != '\0') goto LAB_18043e5ac;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a29c10,1);
                if (cVar1 != '\0') goto LAB_18043e1bc;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a29c28,1);
                if (cVar1 != '\0') goto LAB_18043e0fd;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a29c40,1);
                if (cVar1 != '\0') goto LAB_18043d306;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a29c58,1);
                if (cVar1 != '\0') goto LAB_18043d454;
              }
            }
          }
          else {
            cVar1 = FUN_180629850(auStack_50,&UNK_180a29bdc,1);
            if (cVar1 == '\0') {
              cVar1 = FUN_180629850(auStack_50,&UNK_180a29b88,1);
              if (cVar1 != '\0') {
LAB_18043e5ac:
                uVar3 = 0x10;
                goto LAB_18043e26e;
              }
              puVar2 = &UNK_180a1a490;
LAB_18043d361:
              cVar1 = FUN_180629850(auStack_50,puVar2,1);
              if (cVar1 != '\0') goto LAB_18043d375;
            }
          }
        }
        else {
          cVar1 = FUN_180629850(auStack_50,&UNK_180a29bc0,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_180629850(auStack_50,&UNK_180a29bd0,1);
            if (cVar1 != '\0') goto LAB_18043e151;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a157fc,1);
            if (cVar1 != '\0') goto LAB_18043e23e;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a2481c,1);
            if (cVar1 != '\0') {
LAB_18043d306:
              uVar3 = 0x1c;
              goto LAB_18043e26e;
            }
          }
        }
      }
      else {
        cVar1 = FUN_180629850(auStack_50,&UNK_180a29b44,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_180629850(auStack_50,&UNK_180a29b48,1);
          if (cVar1 != '\0') {
LAB_18043e151:
            uVar3 = 4;
            goto LAB_18043e26e;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a29bbc,1);
          if (cVar1 != '\0') goto LAB_18043d27c;
        }
      }
    }
    else {
      cVar1 = FUN_180629850(auStack_50,&UNK_180a29b28,1);
      if (cVar1 == '\0') {
        puVar2 = &UNK_180a29b38;
LAB_18043d1f9:
        cVar1 = FUN_180629850(auStack_50,puVar2,1);
        if (cVar1 != '\0') {
LAB_18043d20d:
          uVar3 = 0x24;
          goto LAB_18043e26e;
        }
      }
    }
  }
  else {
    cVar1 = FUN_180629850(auStack_50,&UNK_180a29b50,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_180629850(auStack_50,&UNK_180a29b60,1);
      if (cVar1 != '\0') goto LAB_18043e5ac;
      cVar1 = FUN_180629850(auStack_50,&UNK_180a29b70,1);
      if (cVar1 != '\0') {
LAB_18043d375:
        uVar3 = 0x20;
        goto LAB_18043e26e;
      }
      cVar1 = FUN_180629850(auStack_50,&UNK_180a29b80,1);
      if (cVar1 != '\0') goto LAB_18043d1b9;
    }
  }
  uVar3 = 0;
LAB_18043e26e:
  FUN_180627b90(auStack_50);
  FUN_180627b90(auStack_30);
  return uVar3;
}



longlong * FUN_18043e5c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}



int32_t * FUN_18043e630(int32_t *param_1,uint64_t param_2,char param_3,uint64_t param_4)

{
  uint uVar1;
  longlong *plVar2;
  int32_t uVar3;
  longlong *plStackX_8;
  int8_t auStackX_18 [8];
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  auStackX_18[0] = 4;
  FUN_1801af320(param_2,&plStackX_8,auStackX_18,param_4,&DAT_180a00300,1,0xfffffffffffffffe);
  plVar2 = plStackX_8;
  *(byte *)((longlong)plStackX_8 + 0x2e9) = *(byte *)((longlong)plStackX_8 + 0x2e9) | 1;
  if (param_3 == '\0') {
    uVar1 = *(uint *)((longlong)plStackX_8 + 0x2ac);
    *(uint *)((longlong)plStackX_8 + 0x2ac) = uVar1 | 0x2020000;
    FUN_1802ee810(plStackX_8,uVar1);
    FUN_1802ee990(plVar2,uVar1);
  }
  plVar2 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  uStack_20 = SUB84(plVar2,0);
  uStack_1c = (int32_t)((ulonglong)plVar2 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar3;
  param_1[3] = uStack_14;
  if (plStackX_8 != (longlong *)0x0) {
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
  longlong *plVar4;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,3,0xfffffffffffffffe);
  plVar4 = (longlong *)FUN_1802e6b00(uVar3,4);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  *(byte *)((longlong)plVar4 + 0x2e9) = *(byte *)((longlong)plVar4 + 0x2e9) | 1;
  uVar1 = *(uint *)((longlong)plVar4 + 0x2ac);
  *(uint *)((longlong)plVar4 + 0x2ac) = uVar1 | 0x2020000;
  FUN_1802ee810(plVar4,uVar1);
  FUN_1802ee990(plVar4,uVar1);
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uStack_20 = SUB84(plVar4,0);
  uStack_1c = (int32_t)((ulonglong)plVar4 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  (**(code **)(*plVar4 + 0x38))(plVar4);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_18043e7f0(longlong param_1,byte param_2,char param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong alStack_b8 [2];
  int32_t uStack_a8;
  uint64_t uStack_98;
  uint uStack_90;
  int32_t uStack_8c;
  ushort uStack_88;
  int8_t uStack_86;
  int32_t uStack_84;
  int8_t uStack_80;
  uint64_t uStack_78;
  longlong lStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int8_t *puStack_50;
  int8_t auStack_48 [8];
  void *puStack_40;
  ulonglong uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  longlong *plStack_18;
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
  alStack_b8[0] = FUN_18062b420(_DAT_180c8ed18,0x1000,0xd);
  LOCK();
  alStack_b8[1] = 0;
  UNLOCK();
  uStack_a8 = 0;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x40000000;
  plStack_18 = alStack_b8;
  uStack_38 = 1;
  puStack_40 = &DAT_180be0000;
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
    FUN_18064e900();
  }
  alStack_b8[0] = 0;
  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return iVar1 == 0;
}







