#include "TaleWorlds.Native.Split.h"

// 99_part_04_part042.c - 3 个函数

// 函数: void FUN_1802aeb00(char *param_1,float param_2,undefined8 param_3,undefined8 param_4,
void FUN_1802aeb00(char *param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  undefined8 in_RDX;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [96];
  
  if (*param_1 != '\0') {
    fVar8 = param_2 + *(float *)(param_1 + 4);
    *(float *)(param_1 + 4) = fVar8;
    if (*(float *)(param_1 + 0x14) <= fVar8 && fVar8 != *(float *)(param_1 + 0x14)) {
      if (*(int *)(param_1 + 0x88) != *(int *)(*(longlong *)(param_1 + 0x18) + 0x30)) {
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x260) + 0xb38) = 0;
        *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x30);
      }
      FUN_1802aecf0(param_1,in_RDX,param_3,param_4,param_5);
    }
  }
  iVar1 = (int)((*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) / 0x88);
  lVar7 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar6);
      if (*(int *)(*(longlong *)(*plVar3 + 0x48) + 0x70) == 0) {
        iVar1 = (int)((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x60) -
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x58)) / 0x70);
        lVar4 = (longlong)iVar1;
        if (0 < iVar1) {
          lVar2 = 0;
          do {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x58) + lVar2;
            FUN_1802ac500(lVar5,auStack_78,auStack_b8);
            if (((ulonglong)(longlong)*(int *)(lVar5 + 0x58) <
                 (ulonglong)(plVar3[10] - plVar3[9] >> 2)) &&
               (iVar1 = *(int *)(plVar3[9] + (longlong)*(int *)(lVar5 + 0x58) * 4), iVar1 != -1)) {
              FUN_1802aeb00((longlong)iVar1 * 0x90 + plVar3[5],param_2,auStack_78,auStack_b8,param_5
                           );
            }
            lVar2 = lVar2 + 0x70;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      else {
        FUN_1802b6970(plVar3,param_2,param_5);
      }
      lVar6 = lVar6 + 0x88;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}






// 函数: void FUN_1802aeba6(void)
void FUN_1802aeba6(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RBP;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_R15;
  
  lVar7 = 0;
  do {
    plVar4 = (longlong *)(*(longlong *)(unaff_RBP + 0x30) + lVar7);
    if (*(int *)(*(longlong *)(*plVar4 + 0x48) + 0x70) == 0) {
      iVar1 = (int)((*(longlong *)(*(longlong *)(unaff_RBP + 0x20) + 0x60) -
                    *(longlong *)(*(longlong *)(unaff_RBP + 0x20) + 0x58)) / 0x70);
      lVar5 = (longlong)iVar1;
      if (0 < iVar1) {
        lVar3 = 0;
        do {
          lVar6 = *(longlong *)(*(longlong *)(unaff_RBP + 0x20) + 0x58) + lVar3;
          FUN_1802ac500(lVar6,&stack0x00000070,&stack0x00000030);
          lVar2 = plVar4[9];
          if (((ulonglong)(longlong)*(int *)(lVar6 + 0x58) < (ulonglong)(plVar4[10] - lVar2 >> 2))
             && (iVar1 = *(int *)(lVar2 + (longlong)*(int *)(lVar6 + 0x58) * 4), iVar1 != -1)) {
            FUN_1802aeb00((longlong)iVar1 * 0x90 + plVar4[5],lVar2,&stack0x00000070,&stack0x00000030
                         );
          }
          lVar3 = lVar3 + 0x70;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    else {
      FUN_1802b6970(plVar4);
    }
    lVar7 = lVar7 + 0x88;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
  return;
}






// 函数: void FUN_1802aecd5(void)
void FUN_1802aecd5(void)

{
  return;
}






