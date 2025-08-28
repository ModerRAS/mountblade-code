#include "TaleWorlds.Native.Split.h"

// 99_part_11_part060.c - 2 个函数

// 函数: void FUN_1807bf330(longlong param_1,undefined4 param_2,undefined8 param_3)
void FUN_1807bf330(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_308 [32];
  ulonglong uStack_2e8;
  undefined4 uStack_2e0;
  undefined1 uStack_2d8;
  char cStack_2c8;
  undefined1 uStack_2c7;
  undefined1 uStack_2c6;
  undefined1 uStack_2c5;
  undefined1 auStack_2a4 [4];
  undefined4 uStack_2a0;
  undefined8 uStack_288;
  char acStack_158 [32];
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_308;
  uStack_2a0 = param_2;
  uStack_288 = param_3;
  if ((*(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 8;
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))
                      (*(longlong **)(param_1 + 0x170),auStack_2a4);
    if (iVar3 == 0) {
      *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) =
           *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) | 4;
      iVar3 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0x438,0);
      lVar5 = *(longlong *)(param_1 + 0x170);
      if (iVar3 == 0) {
        uStack_2e8 = 0;
        iVar3 = FUN_180769ed0(lVar5,&cStack_2c8,1,4);
        if ((iVar3 == 0) &&
           (((((iVar3 = func_0x00018076b6b0(&cStack_2c8,&UNK_18097c3c0,4), iVar3 == 0 ||
               (iVar3 = func_0x00018076b6b0(&cStack_2c8,&UNK_18097c3c8,4), iVar3 == 0)) ||
              (iVar3 = func_0x00018076b6b0(&cStack_2c8,&UNK_18097c3d0,4), iVar3 == 0)) ||
             ((iVar3 = func_0x00018076b6b0(&cStack_2c8,&UNK_18097c3d8,4), iVar3 == 0 ||
              (iVar3 = func_0x00018076b6b0(&uStack_2c6,&UNK_18097c3e0,2), iVar3 == 0)))) ||
            (iVar3 = func_0x00018076b6b0(&uStack_2c7,&UNK_18097c3e4,3), iVar3 == 0)))) {
          iVar3 = func_0x00018076b6b0(&cStack_2c8,&UNK_18097c3c0,4);
          iVar4 = 0;
          if (iVar3 == 0) {
            iVar4 = 4;
          }
          else {
            iVar3 = func_0x00018076b6b0(&cStack_2c8,&UNK_18097c3c8,4);
            if (iVar3 == 0) {
              iVar4 = 4;
            }
            else {
              iVar3 = func_0x00018076b6b0(&cStack_2c8,&UNK_18097c3e8,4);
              if (iVar3 == 0) {
                iVar4 = 4;
              }
              else {
                iVar3 = func_0x00018076b6b0(&cStack_2c8,&UNK_18097c3d0,4);
                if (iVar3 == 0) {
                  iVar4 = 6;
                }
                else {
                  iVar3 = func_0x00018076b6b0(&cStack_2c8,&UNK_18097c3d8,4);
                  if (iVar3 == 0) {
                    iVar4 = 8;
                  }
                  else {
                    iVar3 = func_0x00018076b6b0(&uStack_2c6,&UNK_18097c3e0,2);
                    if (iVar3 == 0) {
                      uStack_2c5 = 0;
                      iVar4 = atoi(&cStack_2c8);
                    }
                    else {
                      iVar3 = func_0x00018076b6b0(&uStack_2c7,&UNK_18097c3e4,3);
                      if (iVar3 == 0) {
                        iVar4 = cStack_2c8 + -0x30;
                      }
                    }
                  }
                }
              }
            }
          }
          *(int *)(param_1 + 0x3c8) = iVar4;
          if ((iVar4 < 1) || (0x20 < *(int *)(param_1 + 0x3c8))) {
            *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) =
                 *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
          }
          else {
            uStack_2d8 = 0;
            uStack_2e0 = 1;
            uStack_2e8 = CONCAT44(uStack_2e8._4_4_,4);
            iVar3 = FUN_180772fe0(param_1,9,&UNK_18097bf38,(int *)(param_1 + 0x3c8));
            if (iVar3 == 0) {
              iVar3 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0,0);
              if (iVar3 == 0) {
                uStack_2e8 = 0;
                *(undefined8 *)(param_1 + 0x3d0) = 0;
                *(undefined8 *)(param_1 + 0x3d8) = 0;
                *(undefined8 *)(param_1 + 0x3e0) = 0;
                *(undefined8 *)(param_1 + 1000) = 0;
                *(undefined8 *)(param_1 + 0x3f0) = 0;
                *(undefined8 *)(param_1 + 0x3f8) = 0;
                *(undefined8 *)(param_1 + 0x400) = 0;
                *(undefined8 *)(param_1 + 0x408) = 0;
                *(undefined8 *)(param_1 + 0x410) = 0;
                *(undefined8 *)(param_1 + 0x418) = 0;
                *(undefined8 *)(param_1 + 0x420) = 0;
                *(undefined8 *)(param_1 + 0x428) = 0;
                *(undefined8 *)(param_1 + 0x430) = 0;
                *(undefined8 *)(param_1 + 0x438) = 0;
                *(undefined8 *)(param_1 + 0x440) = 0;
                *(undefined8 *)(param_1 + 0x448) = 0;
                *(undefined8 *)(param_1 + 0x450) = 0;
                *(undefined8 *)(param_1 + 0x458) = 0;
                *(undefined8 *)(param_1 + 0x460) = 0;
                *(undefined8 *)(param_1 + 0x468) = 0;
                *(undefined8 *)(param_1 + 0x470) = 0;
                *(undefined8 *)(param_1 + 0x478) = 0;
                *(undefined8 *)(param_1 + 0x480) = 0;
                *(undefined8 *)(param_1 + 0x488) = 0;
                *(undefined8 *)(param_1 + 0x490) = 0;
                *(undefined8 *)(param_1 + 0x498) = 0;
                *(undefined8 *)(param_1 + 0x4a0) = 0;
                *(undefined8 *)(param_1 + 0x4a8) = 0;
                *(undefined8 *)(param_1 + 0x4b0) = 0;
                *(undefined8 *)(param_1 + 0x4b8) = 0;
                *(undefined8 *)(param_1 + 0x4c0) = 0;
                *(undefined8 *)(param_1 + 0x4c8) = 0;
                *(undefined8 *)(param_1 + 0x4d0) = 0;
                *(undefined8 *)(param_1 + 0x4d8) = 0;
                *(undefined8 *)(param_1 + 0x4e0) = 0;
                *(undefined8 *)(param_1 + 0x4e8) = 0;
                *(undefined8 *)(param_1 + 0x4f0) = 0;
                *(undefined8 *)(param_1 + 0x4f8) = 0;
                *(undefined8 *)(param_1 + 0x500) = 0;
                *(undefined8 *)(param_1 + 0x508) = 0;
                *(undefined8 *)(param_1 + 0x510) = 0;
                *(undefined8 *)(param_1 + 0x518) = 0;
                *(undefined8 *)(param_1 + 0x520) = 0;
                *(undefined8 *)(param_1 + 0x528) = 0;
                *(undefined8 *)(param_1 + 0x530) = 0;
                *(undefined8 *)(param_1 + 0x538) = 0;
                *(undefined8 *)(param_1 + 0x540) = 0;
                *(undefined8 *)(param_1 + 0x548) = 0;
                *(undefined8 *)(param_1 + 0x550) = 0;
                *(undefined8 *)(param_1 + 0x558) = 0;
                *(undefined8 *)(param_1 + 0x560) = 0;
                *(undefined8 *)(param_1 + 0x568) = 0;
                *(undefined8 *)(param_1 + 0x570) = 0;
                *(undefined8 *)(param_1 + 0x578) = 0;
                *(undefined8 *)(param_1 + 0x580) = 0;
                *(undefined8 *)(param_1 + 0x588) = 0;
                *(undefined8 *)(param_1 + 0x590) = 0;
                *(undefined8 *)(param_1 + 0x598) = 0;
                *(undefined8 *)(param_1 + 0x5a0) = 0;
                *(undefined8 *)(param_1 + 0x5a8) = 0;
                *(undefined8 *)(param_1 + 0x5b0) = 0;
                *(undefined8 *)(param_1 + 0x5b8) = 0;
                *(undefined8 *)(param_1 + 0x5c0) = 0;
                *(undefined8 *)(param_1 + 0x5c8) = 0;
                *(undefined8 *)(param_1 + 0x278) = 0;
                *(undefined4 *)(param_1 + 0xbd8) = 0x3f4ccccd;
                *(undefined4 *)(param_1 + 0xbd4) = 0x3f800000;
                *(undefined1 *)(param_1 + 0xbea) = 1;
                *(undefined4 *)(param_1 + 0x8fc) = 0x1f;
                *(undefined4 *)(param_1 + 0x860) = 6;
                *(undefined4 *)(param_1 + 0x864) = 0x7d;
                *(undefined4 *)(param_1 + 0x8f0) = 0;
                *(undefined4 *)(param_1 + 0xbd0) = 0;
                iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),param_1 + 0x178,1);
                if (iVar3 == 0) {
                  uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
                  lVar5 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                                        *(int *)(param_1 + 0x8fc) << 3,&UNK_18097c3f0,0x542);
                  *(longlong *)(param_1 + 0x848) = lVar5;
                  if (lVar5 != 0) {
                    if (*(int *)(param_1 + 0x8fc) < 1) {
                      iVar3 = FUN_1807697a0(*(undefined8 *)(param_1 + 0x170),param_1 + 0x8ec);
                      lVar5 = *(longlong *)(param_1 + 0x170);
                      if (iVar3 == 0) {
                        iVar3 = FUN_180769720(lVar5,0);
                        if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
                          memset(param_1 + 0x290,0,0x100);
                        }
                        *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) =
                             *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
                      }
                      else {
                        *(uint *)(lVar5 + 0x194) = *(uint *)(lVar5 + 0x194) & 0xfffffffb;
                      }
                    }
                    else {
                      uStack_2e8 = 0;
                      **(longlong **)(param_1 + 0x848) = param_1 + 0xc20;
                      puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x848);
                      *puVar1 = 0;
                      puVar1[1] = 0;
                      puVar1[2] = 0;
                      puVar1[3] = 0;
                      puVar1[4] = 0;
                      puVar1[5] = 0;
                      puVar1[6] = 0;
                      iVar3 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),acStack_158,1,0x16);
                      uVar8 = uVar6;
                      if (iVar3 == 0) {
                        do {
                          if (acStack_158[uVar6] < ' ') {
                            if (0x15 < uVar6) {
                              FUN_1808fcdc8(uVar8,0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            acStack_158[uVar6] = '\0';
                          }
                          uVar7 = (int)uVar8 + 1;
                          uVar6 = uVar6 + 1;
                          uVar8 = (ulonglong)uVar7;
                        } while (uVar7 < 0x16);
                    // WARNING: Subroutine does not return
                        FUN_18076b390(auStack_138,0x100,&UNK_18097bf60,0);
                      }
                      *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) =
                           *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
                    }
                  }
                }
                else {
                  *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) =
                       *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
                }
              }
              else {
                *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) =
                     *(uint *)(*(longlong *)(param_1 + 0x170) + 0x194) & 0xfffffffb;
              }
            }
          }
          goto FUN_1807c01ad;
        }
        lVar5 = *(longlong *)(param_1 + 0x170);
      }
      *(uint *)(lVar5 + 0x194) = *(uint *)(lVar5 + 0x194) & 0xfffffffb;
    }
  }
FUN_1807c01ad:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_308);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807bf388(longlong param_1)
void FUN_1807bf388(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar8;
  char cStack0000000000000040;
  undefined1 uStack0000000000000043;
  
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))();
  if (iVar3 == 0) {
    *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
         *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) | 4;
    iVar3 = FUN_18076a440(*(undefined8 *)(unaff_RDI + 0x170),0x438,0);
    lVar5 = *(longlong *)(unaff_RDI + 0x170);
    if (iVar3 == 0) {
      iVar3 = FUN_180769ed0(lVar5,&stack0x00000040,1,4,0);
      if ((iVar3 == 0) &&
         (((((iVar3 = func_0x00018076b6b0(&stack0x00000040,&UNK_18097c3c0,4), iVar3 == 0 ||
             (iVar3 = func_0x00018076b6b0(&stack0x00000040,&UNK_18097c3c8,4), iVar3 == 0)) ||
            (iVar3 = func_0x00018076b6b0(&stack0x00000040,&UNK_18097c3d0,4), iVar3 == 0)) ||
           ((iVar3 = func_0x00018076b6b0(&stack0x00000040,&UNK_18097c3d8,4), iVar3 == 0 ||
            (iVar3 = func_0x00018076b6b0((longlong)&stack0x00000040 + 2,&UNK_18097c3e0,2),
            iVar3 == 0)))) ||
          (iVar3 = func_0x00018076b6b0((longlong)&stack0x00000040 + 1,&UNK_18097c3e4,3), iVar3 == 0)
          ))) {
        iVar3 = func_0x00018076b6b0(&stack0x00000040,&UNK_18097c3c0,4);
        iVar4 = 0;
        if (iVar3 == 0) {
          iVar4 = 4;
        }
        else {
          iVar3 = func_0x00018076b6b0(&stack0x00000040,&UNK_18097c3c8,4);
          if (iVar3 == 0) {
            iVar4 = 4;
          }
          else {
            iVar3 = func_0x00018076b6b0(&stack0x00000040,&UNK_18097c3e8,4);
            if (iVar3 == 0) {
              iVar4 = 4;
            }
            else {
              iVar3 = func_0x00018076b6b0(&stack0x00000040,&UNK_18097c3d0,4);
              if (iVar3 == 0) {
                iVar4 = 6;
              }
              else {
                iVar3 = func_0x00018076b6b0(&stack0x00000040,&UNK_18097c3d8,4);
                if (iVar3 == 0) {
                  iVar4 = 8;
                }
                else {
                  iVar3 = func_0x00018076b6b0((longlong)&stack0x00000040 + 2,&UNK_18097c3e0,2);
                  if (iVar3 == 0) {
                    uStack0000000000000043 = 0;
                    iVar4 = atoi(&stack0x00000040);
                  }
                  else {
                    iVar3 = func_0x00018076b6b0((longlong)&stack0x00000040 + 1,&UNK_18097c3e4,3);
                    if (iVar3 == 0) {
                      iVar4 = cStack0000000000000040 + -0x30;
                    }
                  }
                }
              }
            }
          }
        }
        *(int *)(unaff_RDI + 0x3c8) = iVar4;
        if ((iVar4 < 1) || (0x20 < *(int *)(unaff_RDI + 0x3c8))) {
          *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
               *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
        }
        else {
          iVar3 = FUN_180772fe0();
          if (iVar3 == 0) {
            iVar3 = FUN_18076a440(*(undefined8 *)(unaff_RDI + 0x170),0,0);
            if (iVar3 == 0) {
              uVar8 = 0;
              *(undefined8 *)(unaff_RDI + 0x3d0) = 0;
              *(undefined8 *)(unaff_RDI + 0x3d8) = 0;
              *(undefined8 *)(unaff_RDI + 0x3e0) = 0;
              *(undefined8 *)(unaff_RDI + 1000) = 0;
              *(undefined8 *)(unaff_RDI + 0x3f0) = 0;
              *(undefined8 *)(unaff_RDI + 0x3f8) = 0;
              *(undefined8 *)(unaff_RDI + 0x400) = 0;
              *(undefined8 *)(unaff_RDI + 0x408) = 0;
              *(undefined8 *)(unaff_RDI + 0x410) = 0;
              *(undefined8 *)(unaff_RDI + 0x418) = 0;
              *(undefined8 *)(unaff_RDI + 0x420) = 0;
              *(undefined8 *)(unaff_RDI + 0x428) = 0;
              *(undefined8 *)(unaff_RDI + 0x430) = 0;
              *(undefined8 *)(unaff_RDI + 0x438) = 0;
              *(undefined8 *)(unaff_RDI + 0x440) = 0;
              *(undefined8 *)(unaff_RDI + 0x448) = 0;
              *(undefined8 *)(unaff_RDI + 0x450) = 0;
              *(undefined8 *)(unaff_RDI + 0x458) = 0;
              *(undefined8 *)(unaff_RDI + 0x460) = 0;
              *(undefined8 *)(unaff_RDI + 0x468) = 0;
              *(undefined8 *)(unaff_RDI + 0x470) = 0;
              *(undefined8 *)(unaff_RDI + 0x478) = 0;
              *(undefined8 *)(unaff_RDI + 0x480) = 0;
              *(undefined8 *)(unaff_RDI + 0x488) = 0;
              *(undefined8 *)(unaff_RDI + 0x490) = 0;
              *(undefined8 *)(unaff_RDI + 0x498) = 0;
              *(undefined8 *)(unaff_RDI + 0x4a0) = 0;
              *(undefined8 *)(unaff_RDI + 0x4a8) = 0;
              *(undefined8 *)(unaff_RDI + 0x4b0) = 0;
              *(undefined8 *)(unaff_RDI + 0x4b8) = 0;
              *(undefined8 *)(unaff_RDI + 0x4c0) = 0;
              *(undefined8 *)(unaff_RDI + 0x4c8) = 0;
              *(undefined8 *)(unaff_RDI + 0x4d0) = 0;
              *(undefined8 *)(unaff_RDI + 0x4d8) = 0;
              *(undefined8 *)(unaff_RDI + 0x4e0) = 0;
              *(undefined8 *)(unaff_RDI + 0x4e8) = 0;
              *(undefined8 *)(unaff_RDI + 0x4f0) = 0;
              *(undefined8 *)(unaff_RDI + 0x4f8) = 0;
              *(undefined8 *)(unaff_RDI + 0x500) = 0;
              *(undefined8 *)(unaff_RDI + 0x508) = 0;
              *(undefined8 *)(unaff_RDI + 0x510) = 0;
              *(undefined8 *)(unaff_RDI + 0x518) = 0;
              *(undefined8 *)(unaff_RDI + 0x520) = 0;
              *(undefined8 *)(unaff_RDI + 0x528) = 0;
              *(undefined8 *)(unaff_RDI + 0x530) = 0;
              *(undefined8 *)(unaff_RDI + 0x538) = 0;
              *(undefined8 *)(unaff_RDI + 0x540) = 0;
              *(undefined8 *)(unaff_RDI + 0x548) = 0;
              *(undefined8 *)(unaff_RDI + 0x550) = 0;
              *(undefined8 *)(unaff_RDI + 0x558) = 0;
              *(undefined8 *)(unaff_RDI + 0x560) = 0;
              *(undefined8 *)(unaff_RDI + 0x568) = 0;
              *(undefined8 *)(unaff_RDI + 0x570) = 0;
              *(undefined8 *)(unaff_RDI + 0x578) = 0;
              *(undefined8 *)(unaff_RDI + 0x580) = 0;
              *(undefined8 *)(unaff_RDI + 0x588) = 0;
              *(undefined8 *)(unaff_RDI + 0x590) = 0;
              *(undefined8 *)(unaff_RDI + 0x598) = 0;
              *(undefined8 *)(unaff_RDI + 0x5a0) = 0;
              *(undefined8 *)(unaff_RDI + 0x5a8) = 0;
              *(undefined8 *)(unaff_RDI + 0x5b0) = 0;
              *(undefined8 *)(unaff_RDI + 0x5b8) = 0;
              *(undefined8 *)(unaff_RDI + 0x5c0) = 0;
              *(undefined8 *)(unaff_RDI + 0x5c8) = 0;
              *(undefined8 *)(unaff_RDI + 0x278) = 0;
              *(undefined4 *)(unaff_RDI + 0xbd8) = 0x3f4ccccd;
              *(undefined4 *)(unaff_RDI + 0xbd4) = 0x3f800000;
              *(undefined1 *)(unaff_RDI + 0xbea) = 1;
              *(undefined4 *)(unaff_RDI + 0x8fc) = 0x1f;
              *(undefined4 *)(unaff_RDI + 0x860) = 6;
              *(undefined4 *)(unaff_RDI + 0x864) = 0x7d;
              *(undefined4 *)(unaff_RDI + 0x8f0) = 0;
              *(undefined4 *)(unaff_RDI + 0xbd0) = 0;
              iVar3 = FUN_180769ed0(*(undefined8 *)(unaff_RDI + 0x170),unaff_RDI + 0x178,1,0x14,0);
              if (iVar3 == 0) {
                lVar5 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),
                                      *(int *)(unaff_RDI + 0x8fc) << 3,&UNK_18097c3f0,0x542,
                                      uVar8 & 0xffffffff00000000);
                *(longlong *)(unaff_RDI + 0x848) = lVar5;
                if (lVar5 != 0) {
                  if (*(int *)(unaff_RDI + 0x8fc) < 1) {
                    iVar3 = FUN_1807697a0(*(undefined8 *)(unaff_RDI + 0x170),unaff_RDI + 0x8ec);
                    lVar5 = *(longlong *)(unaff_RDI + 0x170);
                    if (iVar3 == 0) {
                      iVar3 = FUN_180769720(lVar5,0);
                      if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
                        memset(unaff_RDI + 0x290,0,0x100);
                      }
                      *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
                           *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
                    }
                    else {
                      *(uint *)(lVar5 + 0x194) = *(uint *)(lVar5 + 0x194) & 0xfffffffb;
                    }
                  }
                  else {
                    **(longlong **)(unaff_RDI + 0x848) = unaff_RDI + 0xc20;
                    puVar1 = (undefined8 *)**(undefined8 **)(unaff_RDI + 0x848);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    puVar1[2] = 0;
                    puVar1[3] = 0;
                    puVar1[4] = 0;
                    puVar1[5] = 0;
                    puVar1[6] = 0;
                    iVar3 = FUN_180769ed0(*(undefined8 *)(unaff_RDI + 0x170),unaff_RBP + 0xb0,1,0x16
                                          ,0);
                    uVar8 = uVar6;
                    if (iVar3 == 0) {
                      do {
                        if (*(char *)(unaff_RBP + 0xb0 + uVar6) < ' ') {
                          if (0x15 < uVar6) {
                            FUN_1808fcdc8(uVar8,0);
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          *(undefined1 *)(unaff_RBP + 0xb0 + uVar6) = 0;
                        }
                        uVar7 = (int)uVar8 + 1;
                        uVar6 = uVar6 + 1;
                        uVar8 = (ulonglong)uVar7;
                      } while (uVar7 < 0x16);
                    // WARNING: Subroutine does not return
                      FUN_18076b390(unaff_RBP + 0xd0,0x100,&UNK_18097bf60,0);
                    }
                    *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
                         *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
                  }
                }
              }
              else {
                *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
                     *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
              }
            }
            else {
              *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) =
                   *(uint *)(*(longlong *)(unaff_RDI + 0x170) + 0x194) & 0xfffffffb;
            }
          }
        }
        goto FUN_1807c01a5;
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x170);
    }
    *(uint *)(lVar5 + 0x194) = *(uint *)(lVar5 + 0x194) & 0xfffffffb;
  }
FUN_1807c01a5:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




