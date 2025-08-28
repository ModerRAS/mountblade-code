#include "TaleWorlds.Native.Split.h"

// 03_rendering_part514_sub002.c - 1 个函数

// 函数: void FUN_180543290(longlong param_1,byte *param_2,longlong param_3)
void FUN_180543290(longlong param_1,byte *param_2,longlong param_3)

{
  longlong ***ppplVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *****ppppplVar7;
  longlong lVar8;
  longlong ****pppplVar9;
  undefined8 uVar10;
  float fVar11;
  longlong ****apppplStackX_10 [2];
  longlong ****pppplStackX_20;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_48;
  longlong lStack_40;
  
  uVar10 = 0;
  if ((*param_2 & 0x20) != 0) {
    uVar5 = FUN_1804bc2d0(0x180c95de0,*(undefined4 *)(param_2 + 0x24),
                          *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_3 + 0x53c),
                          *(undefined4 *)(param_2 + 8));
    uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
    ppppplVar7 = (longlong *****)FUN_180275090(uVar6);
    if (ppppplVar7 != (longlong *****)0x0) {
      (*(code *)(*ppppplVar7)[5])(ppppplVar7);
    }
    FUN_180275a60(uVar5,ppppplVar7,1);
    fVar11 = *(float *)(param_3 + 0x540);
    if (0.99 <= fVar11) {
      fVar11 = 0.99;
    }
    ppplVar1 = (*ppppplVar7)[0x21];
    uVar3 = FUN_1804bbc50(0x180c95de0,param_3);
    fStack_64 = (float)(uVar3 >> 0x18) * 0.003921569;
    uStack_70 = (longlong *****)
                CONCAT44((float)(uVar3 >> 8 & 0xff) * 0.003921569,
                         (float)(uVar3 >> 0x10 & 0xff) * 0.003921569);
    fStack_68 = (float)(uVar3 & 0xff) * 0.003921569;
    (*(code *)ppplVar1)(ppppplVar7,&uStack_70);
    fStack_64 = (float)(-(int)(fVar11 * fVar11 * 255.0) - 1U & 0xff) * 0.003921569;
    uStack_70 = (longlong *****)0x0;
    fStack_68 = 0.0;
    pppplVar9 = ppppplVar7[7];
    if (pppplVar9 < ppppplVar7[8]) {
      do {
        ppplVar1 = *pppplVar9;
        ppplVar1[0x49] = (longlong **)0x0;
        ppplVar1[0x4a] = (longlong **)((ulonglong)(uint)fStack_64 << 0x20);
        pppplVar9 = pppplVar9 + 2;
      } while (pppplVar9 < ppppplVar7[8]);
    }
    uVar5 = uVar10;
    if (*(longlong *)(param_1 + 0x8a8) != 0) {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
    }
    FUN_1802fc0f0(uVar5,ppppplVar7);
    pppplStackX_20 = (longlong ****)apppplStackX_10;
    apppplStackX_10[0] = (longlong ****)ppppplVar7;
    (*(code *)(*ppppplVar7)[5])(ppppplVar7);
    FUN_180544860(param_1,5,apppplStackX_10);
    if (((*(int *)(param_2 + 4) != 0) && (*(longlong *)(param_1 + 0x70) == 0)) &&
       (lVar8 = FUN_1804bc420(0x180c95de0,*(undefined4 *)(param_2 + 0x24),
                              *(undefined4 *)(param_2 + 0x20),*(int *)(param_2 + 4),
                              *(undefined4 *)(param_3 + 0x53c)), lVar8 != 0)) {
      FUN_1802759e0(lVar8,&pppplStackX_20);
      uStack_70 = apppplStackX_10;
      apppplStackX_10[0] = pppplStackX_20;
      if ((longlong *****)pppplStackX_20 != (longlong *****)0x0) {
        (*(code *)(*pppplStackX_20)[5])();
      }
      FUN_180544860(param_1,0xb,apppplStackX_10);
      if (*(longlong *)(param_1 + 0x8a8) != 0) {
        uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
      }
      FUN_1802fc0f0(uVar10,*(undefined8 *)(param_1 + 0x70));
      if ((longlong *****)pppplStackX_20 != (longlong *****)0x0) {
        (*(code *)(*pppplStackX_20)[7])();
      }
    }
    (*(code *)(*ppppplVar7)[7])(ppppplVar7);
  }
  uStack_48 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x930);
  lVar8 = lVar2 + 0x2be8;
  uStack_70 = (longlong *****)0x180544afd;
  lStack_40 = lVar8;
  iVar4 = _Mtx_lock(lVar8);
  if (iVar4 != 0) {
    uStack_70 = (longlong *****)0x180544b09;
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uStack_70 = (longlong *****)0x180544b33;
  FUN_1804dd4d0(lVar2 + 0x2b88,&stack0xffffffffffffffe0,&stack0xffffffffffffffd0);
  uStack_70 = (longlong *****)0x180544b3d;
  iVar4 = _Mtx_unlock(lVar8);
  if (iVar4 != 0) {
    uStack_70 = (longlong *****)0x180544b49;
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




