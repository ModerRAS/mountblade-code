#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part240.c - 6 个函数

// 函数: void FUN_1808054b4(void)
void FUN_1808054b4(void)

{
  return;
}



undefined8
FUN_1808054c0(longlong *param_1,int param_2,longlong param_3,int param_4,uint *param_5,
             undefined4 *param_6,undefined4 *param_7)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort uVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  
  lVar2 = *param_1;
  if ((param_3 != 0) && (0 < param_4)) {
    WideCharToMultiByte(0xfde9,0,*(undefined8 *)(lVar2 + ((longlong)param_2 + 0xc) * 0x10),
                        0xffffffff,param_3,param_4 + -1,0,0);
  }
  if (param_5 != (uint *)0x0) {
    uVar7 = 0x811c9dc5;
    puVar3 = *(ushort **)((longlong)param_2 * 0x10 + 0xb8 + lVar2);
    uVar1 = *puVar3;
    uVar6 = uVar1;
    while (uVar1 != 0) {
      cVar5 = (char)uVar6;
      puVar3 = puVar3 + 1;
      uVar4 = uVar1 >> 8;
      uVar1 = *puVar3;
      uVar6 = uVar1 & 0xff;
      uVar7 = (((int)cVar5 ^ uVar7) * 0x1000193 ^ (int)(char)uVar4) * 0x1000193;
    }
    param_5[0] = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
    *param_5 = uVar7;
  }
  *param_6 = 48000;
  *param_7 = 8;
  return 0;
}



undefined8 FUN_1808055a0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = (*(code *)param_1[2])(0x3d8,0,&UNK_18097ee40,0x1ee);
    *param_1 = lVar1;
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar1,0,0x3d8);
    }
    return 0x26;
  }
  if ((*(char *)(lVar1 + 0xb0) == '\0') && (uVar2 = FUN_1808051c0(param_1), (int)uVar2 != 0)) {
    return uVar2;
  }
  *param_2 = *(undefined4 *)(lVar1 + 0x2b8);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180805640(longlong *param_1,int param_2,undefined8 param_3,int *param_4,undefined4 *param_5
void FUN_180805640(longlong *param_1,int param_2,undefined8 param_3,int *param_4,undefined4 *param_5
                  ,undefined4 *param_6,undefined4 *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 **ppuVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 auStack_f8 [32];
  longlong *plStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 **ppuStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  if (*param_4 == 48000) {
    *param_4 = 48000;
    *param_5 = 8;
    *param_6 = 0xc;
    *param_7 = 5;
    plVar1 = (longlong *)*param_1;
    if ((int)plVar1[0x57] != 0) {
      puVar7 = (undefined8 *)0x0;
      lVar5 = plVar1[(longlong)param_2 * 2 + 0x17];
      plVar1[4] = 0;
      ppuVar4 = (undefined4 **)CoTaskMemAlloc(0x30);
      if (ppuVar4 != (undefined4 **)0x0) {
        uStack_90 = 0xb7b4e913;
        iStack_8c = 0x474002f7;
        iStack_88 = -0x5304725d;
        uStack_84 = 0xb3b;
        uStack_82 = 0x84de;
        CoCreateGuid(ppuVar4);
        *(undefined4 *)(ppuVar4 + 4) = 2;
        *(undefined4 *)((longlong)ppuVar4 + 0x24) = 2;
        ppuVar4[2] = (undefined4 *)CONCAT44(iStack_8c,uStack_90);
        ppuVar4[3] = (undefined4 *)CONCAT26(uStack_82,CONCAT24(uStack_84,iStack_88));
        *(undefined4 *)(ppuVar4 + 5) = 0xe;
        *(undefined4 *)((longlong)ppuVar4 + 0x2c) = 0x209aa;
        uStack_b0 = 0x41;
        uStack_a8 = 0x30;
        lStack_98 = 0;
        plStack_b8 = (longlong *)0x0;
        ppuStack_a0 = ppuVar4;
        iVar3 = (**(code **)(**(longlong **)(*param_1 + 0x2c0) + 0x28))
                          (*(longlong **)(*param_1 + 0x2c0),lVar5,&plStack_b8);
        if (-1 < iVar3) {
          plStack_d8 = &lStack_98;
          iVar3 = (**(code **)(*plStack_b8 + 0x18))(plStack_b8,&UNK_18097eeb8,0x17,&uStack_b0);
          if (((iVar3 + 0x80000000U & 0x80000000) != 0) || (iVar3 == -0x7fffbffe)) {
            (**(code **)(*plStack_b8 + 0x10))();
            if (iVar3 != -0x7fffbffe) {
              plVar1[4] = lStack_98;
            }
            plVar2 = (longlong *)plVar1[4];
            if (plVar2 != (longlong *)0x0) {
              uStack_82 = 0x20;
              uStack_80 = 0;
              uStack_84 = 4;
              iStack_8c = *param_4;
              uStack_90 = 0x10003;
              plStack_b8 = (longlong *)((ulonglong)plStack_b8 & 0xffffffff00000000);
              iStack_88 = iStack_8c * 4;
              iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,&plStack_b8);
              if (-1 < iVar3) {
                lVar5 = CreateEventA(0,0,0,0);
                plVar1[2] = lVar5;
                if (lVar5 != 0) {
                  puStack_78 = &uStack_90;
                  ppuStack_a0 = &puStack_78;
                  uStack_58 = 0;
                  uStack_70 = 0x1ffe;
                  uStack_68 = CONCAT44(6,(int)plStack_b8);
                  uStack_b0 = 0x41;
                  uStack_a8 = 0x28;
                  lStack_60 = lVar5;
                  iVar3 = (**(code **)(*(longlong *)plVar1[4] + 0x50))
                                    ((longlong *)plVar1[4],&uStack_b0,&UNK_18097eec8,plVar1 + 5);
                  if (-1 < iVar3) {
                    lVar5 = CreateEventA(0,0,0,0);
                    plVar1[3] = lVar5;
                    if (lVar5 != 0) {
                      uStack_70 = 6;
                      uStack_68 = 0x700000000;
                      lStack_60 = lVar5;
                      iVar3 = (**(code **)(*(longlong *)plVar1[4] + 0x50))
                                        ((longlong *)plVar1[4],&uStack_b0,&UNK_18097eec8,plVar1 + 6)
                      ;
                      if (-1 < iVar3) {
                        ppuVar4 = &puStack_78;
                        puStack_78 = (undefined4 *)0x400000002;
                        uStack_70 = 0x1000000008;
                        uStack_58 = 0x40000000200;
                        uStack_50 = 0x100000000800;
                        uStack_68 = 0x4000000020;
                        lStack_60 = 0x10000000080;
                        puVar6 = puVar7;
                        do {
                          iVar3 = (**(code **)(*(longlong *)plVar1[5] + 0x50))
                                            ((longlong *)plVar1[5],*(undefined4 *)ppuVar4,
                                             plVar1 + (longlong)(int)puVar6 + 7);
                          if (iVar3 < 0) goto FUN_180805aea;
                          uVar8 = (int)puVar6 + 1;
                          puVar6 = (undefined8 *)(ulonglong)uVar8;
                          ppuVar4 = (undefined4 **)((longlong)ppuVar4 + 4);
                        } while ((int)uVar8 < 0xc);
                        ppuVar4 = &puStack_78;
                        puVar6 = puVar7;
                        do {
                          iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x50))
                                            ((longlong *)plVar1[6],*(undefined4 *)ppuVar4,
                                             plVar1 + (longlong)(int)puVar6 + 0x13);
                          if (iVar3 < 0) goto FUN_180805aea;
                          uVar8 = (int)puVar6 + 1;
                          puVar6 = (undefined8 *)(ulonglong)uVar8;
                          ppuVar4 = (undefined4 **)((longlong)ppuVar4 + 4);
                        } while ((int)uVar8 < 2);
                        lVar5 = (*(code *)param_1[2])(0xc000,0,&UNK_18097ee40,0x2e7);
                        *plVar1 = lVar5;
                        if (lVar5 != 0) {
                          lVar5 = (*(code *)param_1[2])(0x2000,0,&UNK_18097ee40,0x2ed);
                          plVar1[1] = lVar5;
                          if (((lVar5 != 0) &&
                              (iVar3 = (**(code **)(*(longlong *)plVar1[5] + 0x28))(), -1 < iVar3))
                             && (iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x28))(), -1 < iVar3)
                             ) {
                            uStack_c8 = 1;
                            uStack_d0 = 0;
                            plStack_d8 = (longlong *)((ulonglong)plStack_d8 & 0xffffffff00000000);
                            puVar6 = (undefined8 *)
                                     FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x10,
                                                   &UNK_18097ee40,0x301);
                            if (puVar6 != (undefined8 *)0x0) {
                              *(undefined4 *)(puVar6 + 1) = 0;
                              *puVar6 = &UNK_18097ecf0;
                              puVar7 = puVar6;
                            }
                            plVar1[0x59] = (longlong)puVar7;
                            if ((puVar7 != (undefined8 *)0x0) &&
                               (iVar3 = (**(code **)(*(longlong *)plVar1[0x58] + 0x30))(),
                               -1 < iVar3)) {
                              *(undefined4 *)(plVar1[0x59] + 8) = 1;
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
FUN_180805aea:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180805689(longlong *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)
void FUN_180805689(longlong *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *in_RAX;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong unaff_RBP;
  int *unaff_RSI;
  undefined4 *puVar10;
  uint uVar11;
  longlong *unaff_R12;
  ulonglong uVar12;
  undefined4 uStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  *in_RAX = 8;
  *param_3 = 0xc;
  *param_4 = 5;
  param_1 = (longlong *)*param_1;
  if ((int)param_1[0x57] != 0) {
    puVar9 = (undefined8 *)0x0;
    lVar7 = param_1[(longlong)param_2 * 2 + 0x17];
    param_1[4] = 0;
    lVar6 = CoTaskMemAlloc(0x30);
    if (lVar6 != 0) {
      *(undefined4 *)(unaff_RBP + -0x69) = 0xb7b4e913;
      *(undefined4 *)(unaff_RBP + -0x65) = 0x474002f7;
      *(undefined4 *)(unaff_RBP + -0x61) = 0xacfb8da3;
      *(undefined4 *)(unaff_RBP + -0x5d) = 0x84de0b3b;
      CoCreateGuid(lVar6);
      uVar3 = *(undefined8 *)(unaff_RBP + -0x69);
      uVar4 = *(undefined8 *)(unaff_RBP + -0x61);
      *(undefined4 *)(lVar6 + 0x20) = 2;
      *(undefined4 *)(lVar6 + 0x24) = 2;
      *(undefined8 *)(lVar6 + 0x10) = uVar3;
      *(undefined8 *)(lVar6 + 0x18) = uVar4;
      *(undefined4 *)(lVar6 + 0x28) = 0xe;
      *(undefined4 *)(lVar6 + 0x2c) = 0x209aa;
      lVar1 = *unaff_R12;
      in_stack_00000048 = 0x41;
      in_stack_00000050 = 0x30;
      *(longlong *)(unaff_RBP + -0x79) = lVar6;
      *(undefined8 *)(unaff_RBP + -0x71) = 0;
      _uStack0000000000000040 = (longlong *)0x0;
      iVar5 = (**(code **)(**(longlong **)(lVar1 + 0x2c0) + 0x28))
                        (*(longlong **)(lVar1 + 0x2c0),lVar7,&stack0x00000040);
      if (-1 < iVar5) {
        uVar12 = unaff_RBP - 0x71;
        iVar5 = (**(code **)(*_uStack0000000000000040 + 0x18))
                          (_uStack0000000000000040,&UNK_18097eeb8,0x17,&stack0x00000048,uVar12);
        if (((iVar5 + 0x80000000U & 0x80000000) != 0) || (iVar5 == -0x7fffbffe)) {
          (**(code **)(*_uStack0000000000000040 + 0x10))();
          if (iVar5 != -0x7fffbffe) {
            param_1[4] = *(longlong *)(unaff_RBP + -0x71);
          }
          plVar2 = (longlong *)param_1[4];
          if (plVar2 != (longlong *)0x0) {
            *(undefined4 *)(unaff_RBP + -0x5b) = 0x20;
            *(undefined2 *)(unaff_RBP + -0x5d) = 4;
            iVar5 = *unaff_RSI;
            *(int *)(unaff_RBP + -0x65) = iVar5;
            *(undefined4 *)(unaff_RBP + -0x69) = 0x10003;
            _uStack0000000000000040 =
                 (longlong *)((ulonglong)_uStack0000000000000040 & 0xffffffff00000000);
            *(int *)(unaff_RBP + -0x61) = iVar5 * 4;
            iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,&stack0x00000040);
            if (-1 < iVar5) {
              lVar7 = CreateEventA(0,0,0,0);
              param_1[2] = lVar7;
              if (lVar7 != 0) {
                *(longlong *)(unaff_RBP + -0x39) = lVar7;
                *(longlong *)(unaff_RBP + -0x51) = unaff_RBP + -0x69;
                *(undefined4 *)(unaff_RBP + -0x41) = uStack0000000000000040;
                plVar2 = (longlong *)param_1[4];
                *(undefined8 *)(unaff_RBP + -0x31) = 0;
                *(undefined8 *)(unaff_RBP + -0x49) = 0x1ffe;
                *(undefined4 *)(unaff_RBP + -0x3d) = 6;
                in_stack_00000048 = 0x41;
                in_stack_00000050 = 0x28;
                *(longlong *)(unaff_RBP + -0x79) = unaff_RBP + -0x51;
                iVar5 = (**(code **)(*plVar2 + 0x50))
                                  (plVar2,&stack0x00000048,&UNK_18097eec8,param_1 + 5);
                if (-1 < iVar5) {
                  lVar7 = CreateEventA(0,0,0,0);
                  param_1[3] = lVar7;
                  if (lVar7 != 0) {
                    plVar2 = (longlong *)param_1[4];
                    *(undefined8 *)(unaff_RBP + -0x49) = 6;
                    *(undefined4 *)(unaff_RBP + -0x41) = 0;
                    *(undefined4 *)(unaff_RBP + -0x3d) = 7;
                    *(longlong *)(unaff_RBP + -0x39) = lVar7;
                    iVar5 = (**(code **)(*plVar2 + 0x50))
                                      (plVar2,&stack0x00000048,&UNK_18097eec8,param_1 + 6);
                    if (-1 < iVar5) {
                      puVar10 = (undefined4 *)(unaff_RBP + -0x51);
                      *(undefined8 *)(unaff_RBP + -0x51) = 0x400000002;
                      *(undefined8 *)(unaff_RBP + -0x49) = 0x1000000008;
                      *(undefined8 *)(unaff_RBP + -0x31) = 0x40000000200;
                      *(undefined8 *)(unaff_RBP + -0x29) = 0x100000000800;
                      *(undefined8 *)(unaff_RBP + -0x41) = 0x4000000020;
                      *(undefined8 *)(unaff_RBP + -0x39) = 0x10000000080;
                      puVar8 = puVar9;
                      do {
                        iVar5 = (**(code **)(*(longlong *)param_1[5] + 0x50))
                                          ((longlong *)param_1[5],*puVar10,
                                           param_1 + (longlong)(int)puVar8 + 7);
                        if (iVar5 < 0) goto LAB_180805ac2;
                        uVar11 = (int)puVar8 + 1;
                        puVar8 = (undefined8 *)(ulonglong)uVar11;
                        puVar10 = puVar10 + 1;
                      } while ((int)uVar11 < 0xc);
                      puVar10 = (undefined4 *)(unaff_RBP + -0x51);
                      puVar8 = puVar9;
                      do {
                        iVar5 = (**(code **)(*(longlong *)param_1[6] + 0x50))
                                          ((longlong *)param_1[6],*puVar10,
                                           param_1 + (longlong)(int)puVar8 + 0x13);
                        if (iVar5 < 0) goto LAB_180805ac2;
                        uVar11 = (int)puVar8 + 1;
                        puVar8 = (undefined8 *)(ulonglong)uVar11;
                        puVar10 = puVar10 + 1;
                      } while ((int)uVar11 < 2);
                      lVar7 = (*(code *)unaff_R12[2])(0xc000,0,&UNK_18097ee40,0x2e7);
                      *param_1 = lVar7;
                      if (lVar7 != 0) {
                        lVar7 = (*(code *)unaff_R12[2])(0x2000,0,&UNK_18097ee40,0x2ed);
                        param_1[1] = lVar7;
                        if (((lVar7 != 0) &&
                            (iVar5 = (**(code **)(*(longlong *)param_1[5] + 0x28))(), -1 < iVar5))
                           && (iVar5 = (**(code **)(*(longlong *)param_1[6] + 0x28))(), -1 < iVar5))
                        {
                          puVar8 = (undefined8 *)
                                   FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x10,
                                                 &UNK_18097ee40,0x301,uVar12 & 0xffffffff00000000);
                          if (puVar8 != (undefined8 *)0x0) {
                            *(undefined4 *)(puVar8 + 1) = 0;
                            *puVar8 = &UNK_18097ecf0;
                            puVar9 = puVar8;
                          }
                          param_1[0x59] = (longlong)puVar9;
                          if ((puVar9 != (undefined8 *)0x0) &&
                             (iVar5 = (**(code **)(*(longlong *)param_1[0x58] + 0x30))(), -1 < iVar5
                             )) {
                            *(undefined4 *)(param_1[0x59] + 8) = 1;
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
LAB_180805ac2:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x21) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180805aea(void)
void FUN_180805aea(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x21) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180805b10(longlong *param_1)
void FUN_180805b10(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  int aiStack_a4 [7];
  undefined1 auStack_88 [96];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  puVar1 = (undefined8 *)*param_1;
  iVar2 = WaitForSingleObject(puVar1[2],100);
  if (iVar2 != -1) {
    if (iVar2 == 0x102) {
      *(undefined1 *)(puVar1 + 0x15) = 1;
      (*(code *)param_1[6])(param_1);
    }
    else {
      aiStack_a4[0] = 0;
      uStack_a8 = 0;
      iVar2 = (**(code **)(*(longlong *)puVar1[5] + 0x40))
                        ((longlong *)puVar1[5],aiStack_a4,&uStack_a8);
      if (-1 < iVar2) {
        if (aiStack_a4[0] != *(int *)((longlong)puVar1 + 0xac)) {
          *(int *)((longlong)puVar1 + 0xac) = aiStack_a4[0];
        }
        iVar2 = (*(code *)param_1[1])(param_1,*puVar1,uStack_a8);
        if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
          memset(auStack_88,0,0x60);
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_c8);
}





// 函数: void FUN_180805b77(longlong *param_1)
void FUN_180805b77(longlong *param_1)

{
  int iVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R15;
  
  *(undefined4 *)(unaff_RBP + -0x45) = 0;
  *(undefined4 *)(unaff_RBP + -0x49) = 0;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,unaff_RBP + -0x45);
  if (-1 < iVar1) {
    if (*(int *)(unaff_RBP + -0x45) != *(int *)(unaff_RSI + 0xac)) {
      *(int *)(unaff_RSI + 0xac) = *(int *)(unaff_RBP + -0x45);
    }
    iVar1 = (**(code **)(unaff_R15 + 8))();
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      memset(unaff_RBP + -0x29,0,0x60);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x37) ^ (ulonglong)&stack0x00000000);
}





