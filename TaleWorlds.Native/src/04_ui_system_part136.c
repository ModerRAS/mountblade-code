#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part136.c - 4 个函数

// 函数: void FUN_180748ea0(longlong param_1,undefined4 param_2)
void FUN_180748ea0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18078ae40(param_1,param_2,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x116c4) = param_2;
    *(undefined4 *)(param_1 + 0x116c8) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180749060(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x4d0,&UNK_180958000,0x146,
                        in_stack_ffffffffffffffd8 & 0xffffffff00000000,0,1);
  plVar2 = (longlong *)0x0;
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1807714c0(lVar1);
  }
  plVar4 = (longlong *)(param_1 + 0x11418);
  *plVar4 = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    iVar5 = 0x26;
    plVar4 = (longlong *)0x0;
  }
  else {
    iVar5 = func_0x000180772860(plVar2,param_1);
    if (iVar5 == 0) {
      FUN_180772810(*plVar4,param_1 + 0x11420);
      iVar5 = FUN_1807aafb0(*plVar4);
      if (iVar5 == 0) {
        uVar3 = FUN_1807cfb70();
        iVar5 = FUN_180772560(*plVar4,uVar3,0,0);
        if (iVar5 == 0) {
          uVar3 = FUN_1807d0140();
          iVar5 = FUN_180772560(*plVar4,uVar3,0,0);
          if (iVar5 == 0) {
            uVar3 = FUN_1807cf540();
            iVar5 = FUN_180772560(*plVar4,uVar3,0,0);
            if (iVar5 == 0) {
              uVar3 = FUN_1807cf8d0();
              iVar5 = FUN_180772560(*plVar4,uVar3,0,0);
              if (iVar5 == 0) {
                uVar3 = func_0x0001807af8c0();
                iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0xfa,0);
                if (iVar5 == 0) {
                  uVar3 = func_0x0001807c9f10();
                  iVar5 = FUN_180771ed0(*plVar4,uVar3,param_1 + 0x11524,600,0);
                  if (iVar5 == 0) {
                    uVar3 = func_0x0001807c3740();
                    iVar5 = FUN_180771ed0(*plVar4,uVar3,0,800,0);
                    if (iVar5 == 0) {
                      uVar3 = func_0x0001807ab550();
                      iVar5 = FUN_180771ed0(*plVar4,uVar3,0,1000,0);
                      if (iVar5 == 0) {
                        uVar3 = func_0x0001807aef60();
                        iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x44c,0);
                        if (iVar5 == 0) {
                          uVar3 = func_0x0001807bf230();
                          iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x4b0,0);
                          if (iVar5 == 0) {
                            uVar3 = func_0x0001807c6810();
                            iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x514,0);
                            if (iVar5 == 0) {
                              uVar3 = func_0x0001807cb310();
                              iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x578,0);
                              if (iVar5 == 0) {
                                uVar3 = func_0x0001807b2210();
                                iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x5dc,0);
                                if (iVar5 == 0) {
                                  uVar3 = func_0x0001807b9340();
                                  iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x640,0);
                                  if (iVar5 == 0) {
                                    uVar3 = func_0x0001807ad2f0();
                                    iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x6a4,0);
                                    if (iVar5 == 0) {
                                      uVar3 = func_0x0001807ac2a0();
                                      iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x76c,0);
                                      if (iVar5 == 0) {
                                        uVar3 = func_0x0001807c1df0();
                                        iVar5 = FUN_180771ed0(*plVar4,uVar3,param_1 + 0x11528,0x960,
                                                              0);
                                        if (iVar5 == 0) {
                                          uVar3 = func_0x0001807c42c0();
                                          iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x992,0);
                                          if (iVar5 == 0) {
                                            uVar3 = func_0x0001807c6360();
                                            iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0x9c4,0);
                                            if (iVar5 == 0) {
                                              uVar3 = func_0x0001807cf310();
                                              iVar5 = FUN_180771ed0(*plVar4,uVar3,0,0xa28,0);
                                              if (iVar5 == 0) {
                                                uVar3 = FUN_180798860();
                                                iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                if (iVar5 == 0) {
                                                  uVar3 = FUN_1807a2720();
                                                  iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                  if (iVar5 == 0) {
                                                    uVar3 = FUN_180791e20();
                                                    iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                    if (iVar5 == 0) {
                                                      uVar3 = FUN_180793ff0();
                                                      iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                      if (iVar5 == 0) {
                                                        uVar3 = FUN_180794e70();
                                                        iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                        if (iVar5 == 0) {
                                                          uVar3 = FUN_18077b2c0();
                                                          iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0)
                                                          ;
                                                          if (iVar5 == 0) {
                                                            uVar3 = FUN_18077d3d0();
                                                            iVar5 = FUN_180772160(*plVar4,uVar3,0,0,
                                                                                  0);
                                                            if (iVar5 == 0) {
                                                              uVar3 = FUN_180776090();
                                                              iVar5 = FUN_180772160(*plVar4,uVar3,0,
                                                                                    0,0);
                                                              if (iVar5 == 0) {
                                                                uVar3 = FUN_180777010();
                                                                iVar5 = FUN_180772160(*plVar4,uVar3,
                                                                                      0,0,0);
                                                                if (iVar5 == 0) {
                                                                  uVar3 = FUN_18077a570();
                                                                  iVar5 = FUN_180772160(*plVar4,
                                                  uVar3,0,0,0);
                                                  if (iVar5 == 0) {
                                                    uVar3 = FUN_1807a57f0();
                                                    iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                    if (iVar5 == 0) {
                                                      uVar3 = FUN_1807a75f0();
                                                      iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                      if (iVar5 == 0) {
                                                        uVar3 = FUN_180775120();
                                                        iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                        if (iVar5 == 0) {
                                                          uVar3 = FUN_180795c00();
                                                          iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0)
                                                          ;
                                                          if (iVar5 == 0) {
                                                            uVar3 = FUN_180796620();
                                                            iVar5 = FUN_180772160(*plVar4,uVar3,0,0,
                                                                                  0);
                                                            if (iVar5 == 0) {
                                                              uVar3 = FUN_180799620();
                                                              uVar6 = 0;
                                                              iVar5 = FUN_180772160(*plVar4,uVar3,0,
                                                                                    0,0);
                                                              if (iVar5 == 0) {
                                                                uVar3 = FUN_18079d1f0();
                                                                iVar5 = FUN_180772100(*plVar4,uVar3,
                                                                                      0,0,CONCAT44(
                                                  uVar6,0x24));
                                                  if (iVar5 == 0) {
                                                    uVar3 = FUN_1807a01e0();
                                                    iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                    if (iVar5 == 0) {
                                                      uVar3 = FUN_1807744e0();
                                                      iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                      if (iVar5 == 0) {
                                                        uVar3 = FUN_18077e570();
                                                        iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                        if (iVar5 == 0) {
                                                          uVar3 = FUN_18077efd0();
                                                          iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0)
                                                          ;
                                                          if (iVar5 == 0) {
                                                            uVar3 = FUN_180781cc0();
                                                            iVar5 = FUN_180772160(*plVar4,uVar3,0,0,
                                                                                  0);
                                                            if (iVar5 == 0) {
                                                              uVar3 = FUN_180791b60();
                                                              iVar5 = FUN_180772160(*plVar4,uVar3,0,
                                                                                    0,0);
                                                              if (iVar5 == 0) {
                                                                uVar3 = FUN_180771090();
                                                                iVar5 = FUN_180772160(*plVar4,uVar3,
                                                                                      0,0,0);
                                                                if (iVar5 == 0) {
                                                                  uVar3 = FUN_18076ff30();
                                                                  iVar5 = FUN_180772160(*plVar4,
                                                  uVar3,0,0,0);
                                                  if (iVar5 == 0) {
                                                    uVar3 = func_0x00018076e530();
                                                    iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                    if (iVar5 == 0) {
                                                      uVar3 = FUN_180783810();
                                                      iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                      if (iVar5 == 0) {
                                                        uVar3 = FUN_180779050();
                                                        iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0);
                                                        if (iVar5 == 0) {
                                                          uVar3 = FUN_1807a86a0();
                                                          iVar5 = FUN_180772160(*plVar4,uVar3,0,0,0)
                                                          ;
                                                          if (iVar5 == 0) {
                                                            uVar3 = FUN_1807aa050();
                                                            iVar5 = FUN_180772160(*plVar4,uVar3,0,0,
                                                                                  0);
                                                            if (iVar5 == 0) {
                                                              uVar3 = FUN_1807806c0();
                                                              iVar5 = FUN_180772160(*plVar4,uVar3,0,
                                                                                    0,0);
                                                              if (iVar5 == 0) {
                                                                uVar3 = FUN_180797e50();
                                                                iVar5 = FUN_180772160(*plVar4,uVar3,
                                                                                      0,0,0);
                                                                if (iVar5 == 0) {
                                                                  *(undefined1 *)(param_1 + 9) = 1;
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
  if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
    FUN_1807726d0(*plVar4,0);
    *plVar4 = 0;
  }
  return iVar5;
}





// 函数: void FUN_1807498f0(longlong param_1,undefined4 param_2)
void FUN_1807498f0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 9) == '\0') && (iVar1 = FUN_180749060(), iVar1 != 0)) {
    return;
  }
  FUN_180772870(*(undefined8 *)(param_1 + 0x11418),param_2,0);
  return;
}



// WARNING: Removing unreachable block (ram,0x00018078c678)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_18078c0a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auStack_188 [32];
  float *pfStack_168;
  char acStack_158 [4];
  float fStack_154;
  float fStack_150;
  uint uStack_14c;
  float afStack_148 [2];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [48];
  ulonglong uStack_70;
  
  uStack_70 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  if (*(char *)(param_1 + 8) != '\0') {
    if ((*(code **)(param_1 + 0x11838) != (code *)0x0) &&
       ((*(uint *)(param_1 + 0x11840) & 0x400) != 0)) {
      pfStack_168 = *(float **)(param_1 + 0x11670);
      (**(code **)(param_1 + 0x11838))(param_1,0x400,0,0);
    }
    FUN_180772cd0(param_1 + 0x11678);
    if (*(int *)(param_1 + 0x116b4) == 0) {
      FUN_180768b70(param_1 + 0x116b4);
    }
    FUN_180768b70(&uStack_14c);
    uVar8 = uStack_14c;
    if (*(uint *)(param_1 + 0x116b4) <= uStack_14c) {
      uVar8 = uStack_14c - *(int *)(param_1 + 0x116b4);
    }
    *(uint *)(param_1 + 0x116b4) = uStack_14c;
    if ((*(longlong *)(param_1 + 0x6b0) == 0) || (iVar5 = func_0x000180069ee0(), iVar5 == 0)) {
      puVar1 = (undefined8 *)(param_1 + 0x12758);
      puVar3 = (undefined8 *)*puVar1;
      fVar11 = 0.0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      for (; puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
        uVar4 = puVar3[2];
        func_0x0001807673f0(uVar4,acStack_158);
        if (acStack_158[0] != '\0') {
          FUN_1807671a0(uVar4,param_1 + 0x11080,&fStack_150,&fStack_154);
          if (0.0 < fStack_150) {
            func_0x0001807673c0(uVar4,auStack_110,0,0);
            pfStack_168 = afStack_148;
            iVar5 = FUN_180785c10(param_1 + 0x12438,param_1 + 0x11080,auStack_110,0);
            if (iVar5 != 0) goto FUN_18078c746;
            fStack_150 = fStack_150 * (1.0 - afStack_148[0]);
            fStack_154 = fStack_154 * (1.0 - afStack_148[0]);
          }
          if (0.001 <= fStack_154) {
            uStack_100 = 0;
            uStack_f8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_e0 = 0;
            uStack_d8 = 0;
            func_0x000180767410(uVar4,&uStack_100);
            FUN_180767800(&uStack_140,&uStack_100,fStack_154);
            fVar11 = fVar11 + fStack_154;
          }
        }
      }
      if (((undefined8 *)*puVar1 != puVar1) || (*(undefined8 **)(param_1 + 0x12760) != puVar1)) {
        if (fVar11 < 1.0) {
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          func_0x000180746970(param_1,*(undefined4 *)(param_1 + 0x11654),&uStack_d0);
          FUN_180767800(&uStack_140,&uStack_d0,1.0 - fVar11);
          fVar11 = 1.0;
        }
        FUN_180767270(auStack_a0,&uStack_140,1.0 / fVar11);
        FUN_180743940(param_1,*(undefined4 *)(param_1 + 0x11654),auStack_a0,1);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x11708);
      do {
        if (puVar1 == (undefined8 *)(param_1 + 0x11708)) {
          iVar5 = FUN_18078baf0(param_1,uVar8);
          if ((iVar5 != 0) || (iVar5 = FUN_18078c760(param_1,uVar8), iVar5 != 0)) break;
          if (*(longlong *)(param_1 + 0x670) != 0) {
            FUN_180772c50(param_1 + 0x11678,1);
            iVar5 = FUN_180789300(*(undefined8 *)(param_1 + 0x670));
            if (iVar5 != 0) break;
            FUN_180772c50(param_1 + 0x11678,0);
          }
          iVar5 = FUN_18078a600(param_1,1);
          if (iVar5 == 0) {
            uVar7 = 0;
            uVar9 = uVar7;
            uVar10 = uVar7;
            if (*(int *)(param_1 + 0x694) < 1) goto LAB_18078c477;
            goto LAB_18078c440;
          }
          break;
        }
        puVar3 = (undefined8 *)*puVar1;
        iVar5 = FUN_180754a30(puVar1[2],uVar8,0);
        puVar1 = puVar3;
      } while (iVar5 == 0);
    }
  }
  goto FUN_18078c746;
  while( true ) {
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    uVar10 = uVar10 + 0x38;
    if (*(int *)(param_1 + 0x694) <= (int)uVar8) break;
LAB_18078c440:
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x6a0) + 0x30 + uVar10);
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x31) != '\0')) &&
       (iVar5 = FUN_180748290(param_1,uVar9), iVar5 != 0)) goto FUN_18078c746;
  }
LAB_18078c477:
  if (((*(longlong *)(param_1 + 0x11838) != 0) && ((*(uint *)(param_1 + 0x11840) & 0x1000) != 0)) &&
     (iVar5 = FUN_1807499f0(param_1), iVar5 != 0x39)) {
    if (iVar5 != 0) goto FUN_18078c746;
    if (*(char *)(param_1 + 0x6a8) != '\0') {
      pfStack_168 = *(float **)(param_1 + 0x11670);
      *(undefined1 *)(param_1 + 0x6a8) = 0;
      (**(code **)(param_1 + 0x11838))(param_1,0x1000,0,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x11400)) {
    lVar6 = param_1 + 0x110ed;
    do {
      *(undefined2 *)(lVar6 + -1) = 0;
      lVar6 = lVar6 + 0x70;
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x11400));
  }
  *(undefined1 *)(param_1 + 0x12440) = 0;
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    FUN_18078c950(param_1);
  }
  lVar6 = *(longlong *)(param_1 + 0x670);
  if ((lVar6 != 0) && (0 < *(int *)(param_1 + 0x10f70))) {
    if (param_1 != 0) {
      func_0x000180743c20(param_1,7);
      lVar6 = *(longlong *)(param_1 + 0x670);
    }
    uVar2 = *(undefined4 *)(lVar6 + 0x318);
    for (puVar1 = *(undefined8 **)(param_1 + 0x10f58); puVar1 != (undefined8 *)(param_1 + 0x10f58);
        puVar1 = (undefined8 *)*puVar1) {
      lVar6 = puVar1[2];
      if (*(char *)(lVar6 + 0x212) != '\0') {
        FUN_18075a370(lVar6,uVar2);
      }
      if (*(char *)(lVar6 + 0x426) != '\0') {
        FUN_18075a370(lVar6 + 0x214,uVar2);
      }
    }
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(param_1,7);
    }
  }
  iVar5 = FUN_180743660(param_1);
  if (iVar5 == 0) {
    if (param_1 != 0) {
      func_0x000180743c20(param_1,6);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10ff0);
    while (puVar1 != (undefined8 *)(param_1 + 0x10ff0)) {
      lVar6 = puVar1[2];
      puVar1 = (undefined8 *)*puVar1;
      if (((*(longlong *)(lVar6 + 0x120) != 0) && ((*(byte *)(lVar6 + 0x11a) & 0x40) != 0)) &&
         ((*(uint *)(lVar6 + 100) >> 10 & 1) == 0)) {
        (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0,0x40,0);
      }
    }
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(param_1,6);
    }
    puVar1 = puRam0000000000012780;
    if ((lRam0000000000012770 == 0) ||
       (iVar5 = FUN_1807d0fe0(), puVar1 = puRam0000000000012780, iVar5 == 0)) {
      for (; puVar1 != (undefined8 *)0x12780; puVar1 = (undefined8 *)*puVar1) {
        lVar6 = puVar1[2];
        if ((*(code **)(lVar6 + 0x120) != (code *)0x0) && ((*(byte *)(lVar6 + 0x11a) & 4) != 0)) {
          (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0,4,0);
        }
      }
      FUN_180772cf0(0x11678,0x5f);
      if ((pcRam0000000000011838 != (code *)0x0) && ((uRam0000000000011840 & 0x800) != 0)) {
        pfStack_168 = pfRam0000000000011670;
        (*pcRam0000000000011838)(0,0x800,0,0);
      }
    }
  }
FUN_18078c746:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_70 ^ (ulonglong)auStack_188);
}



int FUN_180749940(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x10);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x694)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x30 + *(longlong *)(param_1 + 0x6a0)) != 0) {
        iVar1 = FUN_180788e60(*(undefined8 *)(param_1 + 0x670));
        if (iVar1 != 0) goto LAB_1807499b3;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (iVar3 < *(int *)(param_1 + 0x694));
  }
  iVar1 = 0;
LAB_1807499b3:
  if (param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(param_1,0x10);
  }
  return iVar1;
}



int FUN_180749946(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x10);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x694)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x30 + *(longlong *)(param_1 + 0x6a0)) != 0) {
        iVar1 = FUN_180788e60(*(undefined8 *)(param_1 + 0x670));
        if (iVar1 != 0) goto LAB_1807499b3;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (iVar3 < *(int *)(param_1 + 0x694));
  }
  iVar1 = 0;
LAB_1807499b3:
  if (param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(param_1,0x10);
  }
  return iVar1;
}





// 函数: void FUN_1807499c7(void)
void FUN_1807499c7(void)

{
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807499f0(longlong param_1)
void FUN_1807499f0(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_1a8 [64];
  int aiStack_168 [3];
  int iStack_15c;
  int aiStack_158 [8];
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  ulonglong uVar7;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  if (*(char *)(param_1 + 8) == '\0') goto FUN_180749e0b;
  uVar7 = 0;
  iStack_15c = 0;
  aiStack_158[0] = 0;
  piVar1 = (int *)(param_1 + 0x698);
  if (*(longlong *)(*(longlong *)(param_1 + 0x670) + 0x3e0) == 0) {
LAB_180749ae6:
    if (iStack_15c == *piVar1) goto FUN_180749e0b;
  }
  else {
    aiStack_168[0] = 0;
    FUN_180768b70(aiStack_168);
    iStack_15c = *piVar1;
    if ((*(int *)(param_1 + 0x6ac) == 0) ||
       (999 < (uint)(aiStack_168[0] - *(int *)(param_1 + 0x6ac)))) {
      lVar3 = *(longlong *)(param_1 + 0x670);
      *(int *)(param_1 + 0x6ac) = aiStack_168[0];
      uVar6 = lVar3 + 8;
      if (lVar3 == 0) {
        uVar6 = uVar7;
      }
      iVar4 = (**(code **)(lVar3 + 0x3e0))(uVar6,&iStack_15c,aiStack_158);
      if (iVar4 != 0) goto FUN_180749e0b;
    }
    if (aiStack_158[0] == 0) goto LAB_180749ae6;
  }
  uVar6 = uVar7;
  if (0 < *(int *)(param_1 + 0x694)) {
    do {
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      puVar2 = (uint *)(uVar6 + 0x18 + *(longlong *)(param_1 + 0x6a0));
      *puVar2 = *puVar2 & 0xfffffffe;
      uVar6 = uVar6 + 0x38;
    } while ((int)uVar5 < *(int *)(param_1 + 0x694));
  }
  *piVar1 = 0;
  if (0 < iStack_15c) {
                    // WARNING: Subroutine does not return
    memset(auStack_138,0,0x100);
  }
  *(undefined1 *)(param_1 + 0x6a8) = 1;
FUN_180749e0b:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1a8);
}





