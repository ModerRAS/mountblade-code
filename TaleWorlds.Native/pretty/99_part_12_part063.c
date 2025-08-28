#include "TaleWorlds.Native.Split.h"

// 99_part_12_part063.c - 8 个函数

// 函数: void FUN_1807f5fd0(longlong param_1,longlong param_2,int param_3)
void FUN_1807f5fd0(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_158 [32];
  int8_t auStack_138 [16];
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  if (param_3 != 0) {
    if (*(char *)(param_1 + 600) == '\0') {
      FUN_1807aa900(*(uint64_t *)(param_1 + 0x1f0));
    }
    else {
      while( true ) {
        iVar3 = *(int *)(param_1 + 0x25c);
        if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
          memset(auStack_128,0,0x100);
        }
        if (param_3 <= iVar3) {
          iVar3 = param_3;
        }
        iVar2 = FUN_1807aa900(*(uint64_t *)(param_1 + 0x1f0),param_2,iVar3);
        if (iVar2 != 0) break;
        param_3 = param_3 - iVar3;
        param_2 = param_2 + iVar3;
        piVar1 = (int *)(param_1 + 0x25c);
        *piVar1 = *piVar1 - iVar3;
        if (((*piVar1 == 0) &&
            (iVar3 = FUN_1807aa9c0(*(uint64_t *)(param_1 + 0x1f0),auStack_138,2), iVar3 != 0)) ||
           (param_3 == 0)) break;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}



int32_t FUN_1807f6100(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 == (longlong *)0x0) {
    return 0x1f;
  }
  if (((longlong *)*param_2 == param_2) && ((longlong *)param_2[1] == param_2)) {
    lVar2 = *(longlong *)(param_1 + 0x198);
    if (lVar2 != 0) {
      func_0x000180743c20(lVar2,0xb);
    }
    plVar1 = (longlong *)(param_1 + 0x210);
    plVar3 = (longlong *)*plVar1;
    if ((plVar3 != plVar1) || (*(longlong **)(param_1 + 0x218) != plVar1)) {
      plVar4 = (longlong *)param_2[1];
      **(longlong **)(param_1 + 0x218) = *plVar4;
      plVar3[1] = (longlong)plVar4;
      *plVar4 = (longlong)plVar3;
      *plVar1 = (longlong)plVar1;
      *(longlong **)(param_1 + 0x218) = plVar1;
    }
    if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar2,0xb);
    }
    return 0;
  }
  return 0x1c;
}



uint64_t FUN_1807f6132(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  lVar2 = *(longlong *)(unaff_RSI + 0x198);
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2,0xb);
  }
  plVar1 = (longlong *)(unaff_RSI + 0x210);
  plVar3 = (longlong *)*plVar1;
  if ((plVar3 != plVar1) || (*(longlong **)(unaff_RSI + 0x218) != plVar1)) {
    plVar4 = *(longlong **)(unaff_RBX + 8);
    **(longlong **)(unaff_RSI + 0x218) = *plVar4;
    plVar3[1] = (longlong)plVar4;
    *plVar4 = (longlong)plVar3;
    *plVar1 = (longlong)plVar1;
    *(longlong **)(unaff_RSI + 0x218) = plVar1;
  }
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,0xb);
  }
  return 0;
}



uint64_t FUN_1807f61ad(void)

{
  return 0x1c;
}






// 函数: void FUN_1807f61c0(void)
void FUN_1807f61c0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f6294(void)
void FUN_1807f6294(void)

{
  int iVar1;
  
  iVar1 = FUN_1807ff2a0();
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18076b390();
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0));
}






// 函数: void FUN_1807f6918(void)
void FUN_1807f6918(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1090) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f6940(void)
void FUN_1807f6940(void)

{
  int32_t *puVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  void *puVar6;
  longlong *unaff_R15;
  
  do {
    iVar2 = FUN_1807aa9c0(unaff_R15[0x3e]);
    if (iVar2 != 0) break;
    iVar2 = FUN_18076b6f0(&UNK_18097e170);
    if (iVar2 == 0) {
      puVar1 = *(int32_t **)(unaff_RBP + -0x80);
      if (puVar1 != (int32_t *)0x0) {
        uVar3 = atoi(unaff_RBX + 0xf);
        *puVar1 = uVar3;
      }
    }
    else {
      iVar2 = FUN_18076b6f0(&UNK_18097e180);
      if (iVar2 != 0) {
        iVar2 = FUN_18076b6f0(&UNK_18097e198);
        if (iVar2 == 0) {
          *(uint *)((longlong)unaff_R15 + 0x194) = *(uint *)((longlong)unaff_R15 + 0x194) | 1;
        }
        else {
          iVar2 = FUN_18076b6f0(&UNK_18097e1b0);
          if (iVar2 == 0) {
            *(int8_t *)(unaff_R15 + 0x4b) = 1;
          }
          else {
            iVar2 = FUN_18076b6f0(&UNK_18097e1d0);
            if (iVar2 == 0) {
              uVar3 = atoi(unaff_RBX + 0xc);
              *(int32_t *)(unaff_R15 + 0x40) = uVar3;
            }
            else {
              iVar2 = FUN_18076b6f0(&UNK_18097e1e0);
              if (iVar2 == 0) {
                uVar4 = func_0x00018076b370(unaff_RBX + 7);
                iVar2 = func_0x00018076b690(uVar4);
                puVar6 = &UNK_18097e1e8;
              }
              else {
                iVar2 = FUN_18076b6f0(&UNK_18097e1f0);
                if (iVar2 == 0) {
                  uVar4 = func_0x00018076b370(unaff_RBX + 8);
                  iVar2 = func_0x00018076b690(uVar4);
                  puVar6 = &UNK_18097e200;
                }
                else {
                  iVar2 = FUN_18076b6f0(&UNK_18097e208);
                  if (iVar2 == 0) {
                    uVar4 = func_0x00018076b370(unaff_RBX + 0xc);
                    iVar2 = func_0x00018076b690(uVar4);
                    puVar6 = &UNK_18097e218;
                  }
                  else {
                    iVar2 = FUN_18076b6f0(&UNK_18097e228);
                    if (iVar2 == 0) {
                      uVar4 = func_0x00018076b370(unaff_RBX + 0xc);
                      iVar2 = func_0x00018076b690(uVar4);
                      puVar6 = &UNK_18097e238;
                    }
                    else {
                      iVar2 = FUN_18076b6f0(&UNK_18097e248);
                      if (iVar2 == 0) {
                        uVar4 = func_0x00018076b370(unaff_RBX + 9);
                        iVar2 = func_0x00018076b690(uVar4);
                        puVar6 = &UNK_18097e258;
                      }
                      else {
                        iVar2 = FUN_18076b6f0(&UNK_18097e268);
                        if (iVar2 == 0) {
                          uVar4 = func_0x00018076b370(unaff_RBX + 10);
                          iVar2 = func_0x00018076b690(uVar4);
                          puVar6 = &UNK_18097e278;
                        }
                        else {
                          iVar2 = FUN_18076b6f0(&UNK_18097e288);
                          if (iVar2 == 0) {
                            uVar4 = func_0x00018076b370(unaff_RBX + 8);
                            iVar2 = func_0x00018076b690(uVar4);
                            puVar6 = &UNK_18097e298;
                          }
                          else {
                            iVar2 = FUN_18076b6f0(&UNK_18097e2a0);
                            if (iVar2 == 0) {
                              uVar4 = func_0x00018076b370(unaff_RBX + 8);
                              iVar2 = func_0x00018076b690(uVar4);
                              puVar6 = &UNK_18097e2b0;
                            }
                            else {
                              iVar2 = FUN_18076b6f0(&UNK_18097e2b8);
                              if (iVar2 == 0) {
                                uVar4 = func_0x00018076b370(unaff_RBX + 8);
                                iVar2 = func_0x00018076b690(uVar4);
                                puVar6 = &UNK_18097e2c8;
                              }
                              else {
                                iVar2 = FUN_18076b6f0(&UNK_18097e2d0);
                                if (iVar2 != 0) goto LAB_1807f6c89;
                                uVar4 = func_0x00018076b370(unaff_RBX + 8);
                                iVar2 = func_0x00018076b690(uVar4);
                                puVar6 = &UNK_18097e2e0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              FUN_1807d84c0(unaff_R15 + 0x42,4,puVar6,uVar4,iVar2 + 1);
            }
          }
        }
      }
    }
LAB_1807f6c89:
    iVar2 = FUN_18076b6f0(&UNK_18097e2e8);
    if (iVar2 == 0) {
      uVar4 = func_0x00018076b370(unaff_RBX + 0xd);
      iVar2 = func_0x00018076b690(uVar4);
      puVar6 = &UNK_18097e2f8;
LAB_1807f6ef1:
      FUN_1807d84c0(unaff_R15 + 0x42,5,puVar6,uVar4,iVar2 + 1);
    }
    else {
      iVar2 = FUN_18076b6f0(&UNK_18097e308);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 0x11);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e320;
        goto LAB_1807f6ef1;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097e330);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 0xc);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e340;
        goto LAB_1807f6ef1;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097e350);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 10);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e360;
        goto LAB_1807f6ef1;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097e370);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 0xb);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e380;
        goto LAB_1807f6ef1;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097e390);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 9);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e3a0;
        goto LAB_1807f6ef1;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097e3a8);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 9);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e3b8;
        goto LAB_1807f6ef1;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097e3c0);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 9);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e3d0;
        goto LAB_1807f6ef1;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097e3d8);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 9);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e3e8;
        goto LAB_1807f6ef1;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097e3f0);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 0x10);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e408;
        goto LAB_1807f6ef1;
      }
      iVar2 = FUN_18076b6f0(&UNK_18097e418);
      if (iVar2 == 0) {
        uVar4 = func_0x00018076b370(unaff_RBX + 0xd);
        iVar2 = func_0x00018076b690(uVar4);
        puVar6 = &UNK_18097e428;
        goto LAB_1807f6ef1;
      }
    }
    iVar2 = func_0x00018076b690();
  } while (iVar2 != 0);
  if ((int)unaff_R15[0x40] != 0) {
    *(int *)((longlong)unaff_R15 + 0x204) = (int)unaff_R15[0x40];
    lVar5 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0xff1,&UNK_18097e050,0x298,0);
    unaff_R15[0x41] = lVar5;
    if (lVar5 == 0) {
      (**(code **)(*unaff_R15 + 0x28))();
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0));
    }
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0));
}






// 函数: void FUN_1807f7090(void)
void FUN_1807f7090(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t FUN_1807f7400(longlong param_1)

{
  FUN_1807ff260(*(uint64_t *)(param_1 + 0x1f0));
  *(uint64_t *)(param_1 + 0x1f0) = 0xffffffffffffffff;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807f7430(longlong param_1)

{
  uint64_t uVar1;
  
  if (*(longlong *)(param_1 + 0x1f0) != -1) {
    uVar1 = FUN_1807ff260();
    *(uint64_t *)(param_1 + 0x1f0) = 0xffffffffffffffff;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x208) == 0) {
    _DAT_180c2c740 = _DAT_180c2c740 + -1;
    if ((_DAT_180c2c740 == 0) && (uVar1 = FUN_1807ff7f0(), (int)uVar1 != 0)) {
      return uVar1;
    }
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x208),
                &UNK_18097e050,0x309,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807f74b0(longlong param_1,uint64_t param_2,int32_t *param_3)
void FUN_1807f74b0(longlong param_1,uint64_t param_2,int32_t *param_3)

{
  int iVar1;
  int8_t auStack_898 [80];
  int8_t uStack_848;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_898;
  uStack_848 = 0;
  iVar1 = FUN_1807aa7e0();
  if (iVar1 == 0) {
    *param_3 = 0xffffffff;
                    // WARNING: Subroutine does not return
    memset(param_1 + 0x1280,0,0x1000);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_898);
}






// 函数: void FUN_1807f74e9(void)
void FUN_1807f74e9(void)

{
  longlong unaff_RBX;
  int32_t *unaff_RDI;
  
  *unaff_RDI = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x1280,0,0x1000);
}






