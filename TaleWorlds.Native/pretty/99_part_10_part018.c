#include "TaleWorlds.Native.Split.h"

// 99_part_10_part018.c - 1 个函数

// 函数: void FUN_1806ad980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)
void FUN_1806ad980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uStackX_18;
  undefined4 auStackX_20 [2];
  
  uStackX_18 = param_3;
  auStackX_20[0] = param_4;
  FUN_1806ad9b0(param_1,param_2,&uStackX_18,auStackX_20,&stack0x00000028);
  return;
}



int FUN_1806ad9b0(longlong param_1,uint param_2,longlong *param_3,uint *param_4,uint *param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x80))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_2 * 8), lVar1 != 0)) {
    uVar11 = 0;
    iVar7 = 0;
    if (-1 < *(int *)(lVar1 + 0x1c)) {
      iVar7 = FUN_1806ad9b0();
    }
    uVar10 = *(uint *)(lVar1 + 0x78);
    uVar8 = *param_5;
    uVar3 = uVar8;
    if (uVar10 < uVar8) {
      uVar3 = uVar10;
    }
    uVar4 = uVar10 - uVar3;
    if (*param_4 < uVar10 - uVar3) {
      uVar4 = *param_4;
    }
    uVar12 = uVar11;
    if (uVar4 != 0) {
      do {
        iVar5 = (int)uVar11;
        uVar10 = iVar5 + 1;
        uVar11 = (ulonglong)uVar10;
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + (ulonglong)(iVar5 + uVar3) * 8);
        lVar9 = *param_3 + uVar12;
        uVar6 = *(undefined8 *)(lVar2 + 0x10);
        *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar2 + 8);
        *(undefined8 *)(lVar9 + 0x10) = uVar6;
        *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
        uVar6 = *(undefined8 *)(lVar2 + 0x40);
        *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(lVar9 + 0x40) = uVar6;
        *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar2 + 0x48);
        *(undefined4 *)(lVar9 + 0x4c) = *(undefined4 *)(lVar2 + 0x4c);
        *(undefined4 *)(lVar9 + 0x50) = *(undefined4 *)(lVar2 + 0x50);
        *(undefined4 *)(lVar9 + 0x54) = *(undefined4 *)(lVar2 + 0x54);
        uVar12 = uVar12 + 0x58;
      } while (uVar10 < uVar4);
      uVar8 = *param_5;
    }
    *param_5 = uVar8 - uVar3;
    *param_4 = *param_4 - uVar4;
    *param_3 = *param_3 + (ulonglong)uVar4 * 0x58;
    return uVar4 + iVar7;
  }
  return 0;
}



int FUN_1806ad9f0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar11;
  uint *unaff_R15;
  uint *in_stack_00000060;
  
  uVar10 = 0;
  iVar6 = 0;
  if (-1 < param_2) {
    iVar6 = FUN_1806ad9b0();
  }
  uVar9 = *(uint *)(unaff_RDI + 0x78);
  uVar7 = *in_stack_00000060;
  uVar2 = uVar7;
  if (uVar9 < uVar7) {
    uVar2 = uVar9;
  }
  uVar3 = uVar9 - uVar2;
  if (*unaff_R15 < uVar9 - uVar2) {
    uVar3 = *unaff_R15;
  }
  uVar11 = uVar10;
  if (uVar3 != 0) {
    do {
      iVar4 = (int)uVar10;
      uVar9 = iVar4 + 1;
      uVar10 = (ulonglong)uVar9;
      lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x70) + (ulonglong)(iVar4 + uVar2) * 8);
      lVar8 = *unaff_RSI + uVar11;
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(lVar1 + 0x30);
      uVar5 = *(undefined8 *)(lVar1 + 0x40);
      *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined8 *)(lVar8 + 0x40) = uVar5;
      *(undefined4 *)(lVar8 + 0x48) = *(undefined4 *)(lVar1 + 0x48);
      *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)(lVar1 + 0x4c);
      *(undefined4 *)(lVar8 + 0x50) = *(undefined4 *)(lVar1 + 0x50);
      *(undefined4 *)(lVar8 + 0x54) = *(undefined4 *)(lVar1 + 0x54);
      uVar11 = uVar11 + 0x58;
    } while (uVar9 < uVar3);
    uVar7 = *in_stack_00000060;
  }
  *in_stack_00000060 = uVar7 - uVar2;
  *unaff_R15 = *unaff_R15 - uVar3;
  *unaff_RSI = *unaff_RSI + (ulonglong)uVar3 * 0x58;
  return uVar3 + iVar6;
}



undefined8 FUN_1806adad6(void)

{
  return 0;
}



uint FUN_1806adc80(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = (**(code **)(*param_1 + 0xb0))();
  if (param_4 < uVar3) {
    uVar3 = param_4;
  }
  iVar4 = (**(code **)(*param_1 + 0xb0))(param_1);
  uVar7 = iVar4 - uVar3;
  if (param_3 < iVar4 - uVar3) {
    uVar7 = param_3;
  }
  uVar8 = 0;
  if (uVar7 != 0) {
    puVar5 = (undefined8 *)(param_2 + 0x58);
    do {
      uVar6 = uVar8 + uVar3;
      uVar8 = uVar8 + 1;
      lVar1 = *(longlong *)(param_1[0x1b] + (ulonglong)uVar6 * 8);
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      puVar5[-10] = *(undefined8 *)(lVar1 + 8);
      puVar5[-9] = uVar2;
      *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(lVar1 + 0x18);
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      puVar5[-7] = *(undefined8 *)(lVar1 + 0x20);
      puVar5[-6] = uVar2;
      *(undefined4 *)(puVar5 + -5) = *(undefined4 *)(lVar1 + 0x30);
      puVar5[-4] = *(undefined8 *)(lVar1 + 0x38);
      puVar5[-3] = *(undefined8 *)(lVar1 + 0x40);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(lVar1 + 0x48);
      puVar5[-1] = *(undefined8 *)(lVar1 + 0x50);
      *puVar5 = *(undefined8 *)(lVar1 + 0x58);
      puVar5 = puVar5 + 0xc;
    } while (uVar8 < uVar7);
  }
  return uVar7;
}



uint FUN_1806add80(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar2 - param_4 < param_3) {
    param_3 = iVar2 - param_4;
  }
  uVar7 = 0;
  uVar3 = 0xffffffff;
  uVar4 = uVar7;
  if ((int)param_1[5] != 0) {
    uVar1 = *(uint *)param_1[4];
    uVar3 = (ulonglong)uVar1;
    uVar4 = 0;
    if (uVar1 == 0xffffffff) {
      uVar4 = uVar7;
      do {
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
        if (uVar1 == *(uint *)((longlong)param_1 + 0x2c)) break;
        uVar1 = ((uint *)param_1[4])[uVar4];
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 == 0xffffffff);
    }
  }
  if (param_4 != 0) {
    uVar5 = (ulonglong)param_4;
    do {
      uVar1 = *(uint *)(param_1[3] + uVar3 * 4);
      uVar3 = (ulonglong)uVar1;
      if (uVar1 == 0xffffffff) {
        do {
          uVar1 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar1;
          if (uVar1 == *(uint *)((longlong)param_1 + 0x2c)) break;
          uVar1 = *(uint *)(param_1[4] + uVar4 * 4);
          uVar3 = (ulonglong)uVar1;
        } while (uVar1 == 0xffffffff);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_3 != 0) {
    do {
      if ((int)uVar3 == -1) {
        return param_3;
      }
      *(undefined8 *)(param_2 + uVar7 * 8) = *(undefined8 *)(param_1[2] + 8 + uVar3 * 0x10);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar1 = *(uint *)(param_1[3] + uVar3 * 4);
      uVar3 = (ulonglong)uVar1;
      if (uVar1 == 0xffffffff) {
        do {
          uVar1 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar1;
          if (uVar1 == *(uint *)((longlong)param_1 + 0x2c)) break;
          uVar1 = *(uint *)(param_1[4] + uVar4 * 4);
          uVar3 = (ulonglong)uVar1;
        } while (uVar1 == 0xffffffff);
      }
    } while (uVar6 < param_3);
  }
  return param_3;
}



undefined8 * FUN_1806ade90(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  iVar8 = 1;
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (undefined8 *)FUN_1806aa830(param_1,iVar8);
  puVar7 = (undefined8 *)*param_1;
  uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      uVar10 = uVar6;
    }
    puVar9 = puVar3;
    if (uVar10 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar10);
      uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (longlong)puVar3;
  *(int *)((longlong)param_1 + 0xc) = iVar8;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}



undefined8 * FUN_1806adf60(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  iVar8 = 1;
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (undefined8 *)FUN_1806aa8d0(param_1,iVar8);
  puVar7 = (undefined8 *)*param_1;
  uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      uVar10 = uVar6;
    }
    puVar9 = puVar3;
    if (uVar10 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar10);
      uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (longlong)puVar3;
  *(int *)((longlong)param_1 + 0xc) = iVar8;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}



undefined8 * FUN_1806ae030(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  iVar8 = 1;
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (undefined8 *)FUN_1806aa970(param_1,iVar8);
  puVar7 = (undefined8 *)*param_1;
  uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      uVar10 = uVar6;
    }
    puVar9 = puVar3;
    if (uVar10 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar10);
      uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (longlong)puVar3;
  *(int *)((longlong)param_1 + 0xc) = iVar8;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}



undefined4 * FUN_1806ae100(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  
  uVar8 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  if (uVar8 == 0) {
    uVar18 = 1;
LAB_1806ae130:
    if ((ulonglong)uVar18 * 0x78 != 0) {
      plVar9 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar10 = (longlong *)PxGetFoundation();
      cVar7 = (**(code **)(*plVar10 + 0x28))(plVar10);
      if (cVar7 == '\0') {
        puVar11 = &UNK_18094a1f0;
      }
      else {
        puVar11 = (undefined *)__std_type_info_name(0x180bfc3c8,0x180c827e0);
      }
      puVar12 = (undefined4 *)
                (**(code **)(*plVar9 + 8))
                          (plVar9,(ulonglong)uVar18 * 0x78,puVar11,&UNK_18094abe0,0x229);
      goto LAB_1806ae1a1;
    }
  }
  else {
    uVar18 = uVar8 * 2;
    if (uVar8 != 0) goto LAB_1806ae130;
  }
  puVar12 = (undefined4 *)0x0;
LAB_1806ae1a1:
  uVar13 = (ulonglong)*(uint *)(param_1 + 1);
  if (puVar12 < puVar12 + uVar13 * 0x1e) {
    puVar14 = puVar12 + 6;
    puVar16 = (undefined4 *)(*param_1 + 0x18);
    do {
      *(undefined **)(puVar14 + -6) = &UNK_18094a9a8;
      uVar6 = *(undefined8 *)(puVar16 + -2);
      *(undefined8 *)(puVar14 + -4) = *(undefined8 *)(puVar16 + -4);
      *(undefined8 *)(puVar14 + -2) = uVar6;
      *puVar14 = *puVar16;
      *(undefined8 *)(puVar14 + 2) = *(undefined8 *)(puVar16 + 2);
      *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar16 + 4);
      puVar14[6] = puVar16[6];
      uVar6 = *(undefined8 *)(puVar16 + 10);
      *(undefined8 *)(puVar14 + 8) = *(undefined8 *)(puVar16 + 8);
      *(undefined8 *)(puVar14 + 10) = uVar6;
      puVar14[0xc] = puVar16[0xc];
      puVar14[0xd] = puVar16[0xd];
      puVar14[0xe] = puVar16[0xe];
      puVar14[0xf] = puVar16[0xf];
      uVar6 = *(undefined8 *)(puVar16 + 0x12);
      *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(puVar16 + 0x10);
      *(undefined8 *)(puVar14 + 0x12) = uVar6;
      puVar14[0x14] = puVar16[0x14];
      puVar14[0x15] = puVar16[0x15];
      puVar14[0x16] = puVar16[0x16];
      puVar14[0x17] = puVar16[0x17];
      puVar1 = puVar14 + 0x18;
      puVar14 = puVar14 + 0x1e;
      puVar16 = puVar16 + 0x1e;
    } while (puVar1 < puVar12 + uVar13 * 0x1e);
    uVar13 = (ulonglong)*(uint *)(param_1 + 1);
  }
  *(undefined **)(puVar12 + uVar13 * 0x1e) = &UNK_18094a9a8;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar12 + uVar13 * 0x1e + 2) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((longlong)(puVar12 + uVar13 * 0x1e + 2) + 8) = uVar6;
  puVar12[uVar13 * 0x1e + 6] = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(puVar12 + uVar13 * 0x1e + 8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(puVar12 + uVar13 * 0x1e + 10) = *(undefined8 *)(param_2 + 0x28);
  puVar12[uVar13 * 0x1e + 0xc] = *(undefined4 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(puVar12 + uVar13 * 0x1e + 0xe) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)((longlong)(puVar12 + uVar13 * 0x1e + 0xe) + 8) = uVar6;
  puVar12[uVar13 * 0x1e + 0x12] = *(undefined4 *)(param_2 + 0x48);
  puVar12[uVar13 * 0x1e + 0x13] = *(undefined4 *)(param_2 + 0x4c);
  puVar12[uVar13 * 0x1e + 0x14] = *(undefined4 *)(param_2 + 0x50);
  puVar12[uVar13 * 0x1e + 0x15] = *(undefined4 *)(param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 100);
  puVar14 = puVar12 + uVar13 * 0x1e + 0x16;
  *puVar14 = *(undefined4 *)(param_2 + 0x58);
  puVar14[1] = uVar3;
  puVar14[2] = uVar4;
  puVar14[3] = uVar5;
  puVar12[uVar13 * 0x1e + 0x1a] = *(undefined4 *)(param_2 + 0x68);
  puVar12[uVar13 * 0x1e + 0x1b] = *(undefined4 *)(param_2 + 0x6c);
  puVar12[uVar13 * 0x1e + 0x1c] = *(undefined4 *)(param_2 + 0x70);
  puVar12[uVar13 * 0x1e + 0x1d] = *(undefined4 *)(param_2 + 0x74);
  puVar15 = (undefined8 *)*param_1;
  puVar17 = puVar15 + (ulonglong)*(uint *)(param_1 + 1) * 0xf;
  for (; puVar15 < puVar17; puVar15 = puVar15 + 0xf) {
    *puVar15 = &UNK_18094a9a8;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar2 = *param_1, lVar2 != 0)) {
    plVar9 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar2);
  }
  uVar8 = *(uint *)(param_1 + 1);
  *(uint *)((longlong)param_1 + 0xc) = uVar18;
  *param_1 = (longlong)puVar12;
  *(uint *)(param_1 + 1) = uVar8 + 1;
  return puVar12 + (ulonglong)uVar8 * 0x1e;
}



undefined4 * FUN_1806ae13b(void)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  
  plVar9 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar10 = (longlong *)PxGetFoundation();
  cVar8 = (**(code **)(*plVar10 + 0x28))(plVar10);
  if (cVar8 != '\0') {
    __std_type_info_name(0x180bfc3c8,0x180c827e0);
  }
  puVar11 = (undefined4 *)(**(code **)(*plVar9 + 8))(plVar9);
  uVar12 = (ulonglong)*(uint *)(unaff_RBX + 1);
  if (puVar11 < puVar11 + uVar12 * 0x1e) {
    puVar13 = puVar11 + 6;
    puVar15 = (undefined4 *)(*unaff_RBX + 0x18);
    do {
      *(undefined **)(puVar13 + -6) = &UNK_18094a9a8;
      uVar7 = *(undefined8 *)(puVar15 + -2);
      *(undefined8 *)(puVar13 + -4) = *(undefined8 *)(puVar15 + -4);
      *(undefined8 *)(puVar13 + -2) = uVar7;
      *puVar13 = *puVar15;
      *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar15 + 2);
      *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar15 + 4);
      puVar13[6] = puVar15[6];
      uVar7 = *(undefined8 *)(puVar15 + 10);
      *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(puVar15 + 8);
      *(undefined8 *)(puVar13 + 10) = uVar7;
      puVar13[0xc] = puVar15[0xc];
      puVar13[0xd] = puVar15[0xd];
      puVar13[0xe] = puVar15[0xe];
      puVar13[0xf] = puVar15[0xf];
      uVar7 = *(undefined8 *)(puVar15 + 0x12);
      *(undefined8 *)(puVar13 + 0x10) = *(undefined8 *)(puVar15 + 0x10);
      *(undefined8 *)(puVar13 + 0x12) = uVar7;
      puVar13[0x14] = puVar15[0x14];
      puVar13[0x15] = puVar15[0x15];
      puVar13[0x16] = puVar15[0x16];
      puVar13[0x17] = puVar15[0x17];
      puVar1 = puVar13 + 0x18;
      puVar13 = puVar13 + 0x1e;
      puVar15 = puVar15 + 0x1e;
    } while (puVar1 < puVar11 + uVar12 * 0x1e);
    uVar12 = (ulonglong)*(uint *)(unaff_RBX + 1);
  }
  *(undefined **)(puVar11 + uVar12 * 0x1e) = &UNK_18094a9a8;
  uVar7 = *(undefined8 *)(unaff_RBP + 0x10);
  *(undefined8 *)(puVar11 + uVar12 * 0x1e + 2) = *(undefined8 *)(unaff_RBP + 8);
  *(undefined8 *)((longlong)(puVar11 + uVar12 * 0x1e + 2) + 8) = uVar7;
  puVar11[uVar12 * 0x1e + 6] = *(undefined4 *)(unaff_RBP + 0x18);
  *(undefined8 *)(puVar11 + uVar12 * 0x1e + 8) = *(undefined8 *)(unaff_RBP + 0x20);
  *(undefined8 *)(puVar11 + uVar12 * 0x1e + 10) = *(undefined8 *)(unaff_RBP + 0x28);
  puVar11[uVar12 * 0x1e + 0xc] = *(undefined4 *)(unaff_RBP + 0x30);
  uVar7 = *(undefined8 *)(unaff_RBP + 0x40);
  *(undefined8 *)(puVar11 + uVar12 * 0x1e + 0xe) = *(undefined8 *)(unaff_RBP + 0x38);
  *(undefined8 *)((longlong)(puVar11 + uVar12 * 0x1e + 0xe) + 8) = uVar7;
  puVar11[uVar12 * 0x1e + 0x12] = *(undefined4 *)(unaff_RBP + 0x48);
  puVar11[uVar12 * 0x1e + 0x13] = *(undefined4 *)(unaff_RBP + 0x4c);
  puVar11[uVar12 * 0x1e + 0x14] = *(undefined4 *)(unaff_RBP + 0x50);
  puVar11[uVar12 * 0x1e + 0x15] = *(undefined4 *)(unaff_RBP + 0x54);
  uVar4 = *(undefined4 *)(unaff_RBP + 0x5c);
  uVar5 = *(undefined4 *)(unaff_RBP + 0x60);
  uVar6 = *(undefined4 *)(unaff_RBP + 100);
  puVar13 = puVar11 + uVar12 * 0x1e + 0x16;
  *puVar13 = *(undefined4 *)(unaff_RBP + 0x58);
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  puVar13[3] = uVar6;
  puVar11[uVar12 * 0x1e + 0x1a] = *(undefined4 *)(unaff_RBP + 0x68);
  puVar11[uVar12 * 0x1e + 0x1b] = *(undefined4 *)(unaff_RBP + 0x6c);
  puVar11[uVar12 * 0x1e + 0x1c] = *(undefined4 *)(unaff_RBP + 0x70);
  puVar11[uVar12 * 0x1e + 0x1d] = *(undefined4 *)(unaff_RBP + 0x74);
  puVar14 = (undefined8 *)*unaff_RBX;
  puVar16 = puVar14 + (ulonglong)*(uint *)(unaff_RBX + 1) * 0xf;
  for (; puVar14 < puVar16; puVar14 = puVar14 + 0xf) {
    *puVar14 = &UNK_18094a9a8;
  }
  if ((-1 < *(int *)((longlong)unaff_RBX + 0xc)) && (lVar3 = *unaff_RBX, lVar3 != 0)) {
    plVar9 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar3);
  }
  uVar2 = *(uint *)(unaff_RBX + 1);
  *(undefined4 *)((longlong)unaff_RBX + 0xc) = unaff_ESI;
  *unaff_RBX = (longlong)puVar11;
  *(uint *)(unaff_RBX + 1) = uVar2 + 1;
  return puVar11 + (ulonglong)uVar2 * 0x1e;
}



longlong FUN_1806ae19f(void)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  
  uVar8 = (ulonglong)*(uint *)(unaff_RBX + 1);
  if ((undefined4 *)(uVar8 * 0x78) != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)&DAT_00000018;
    puVar12 = (undefined4 *)(*unaff_RBX + 0x18);
    do {
      *(undefined **)(puVar9 + -6) = &UNK_18094a9a8;
      uVar7 = *(undefined8 *)(puVar12 + -2);
      *(undefined8 *)(puVar9 + -4) = *(undefined8 *)(puVar12 + -4);
      *(undefined8 *)(puVar9 + -2) = uVar7;
      *puVar9 = *puVar12;
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar12 + 2);
      *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar12 + 4);
      puVar9[6] = puVar12[6];
      uVar7 = *(undefined8 *)(puVar12 + 10);
      *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(puVar12 + 8);
      *(undefined8 *)(puVar9 + 10) = uVar7;
      puVar9[0xc] = puVar12[0xc];
      puVar9[0xd] = puVar12[0xd];
      puVar9[0xe] = puVar12[0xe];
      puVar9[0xf] = puVar12[0xf];
      uVar7 = *(undefined8 *)(puVar12 + 0x12);
      *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar12 + 0x10);
      *(undefined8 *)(puVar9 + 0x12) = uVar7;
      puVar9[0x14] = puVar12[0x14];
      puVar9[0x15] = puVar12[0x15];
      puVar9[0x16] = puVar12[0x16];
      puVar9[0x17] = puVar12[0x17];
      puVar1 = puVar9 + 0x18;
      puVar9 = puVar9 + 0x1e;
      puVar12 = puVar12 + 0x1e;
    } while (puVar1 < (undefined4 *)(uVar8 * 0x78));
    uVar8 = (ulonglong)*(uint *)(unaff_RBX + 1);
  }
  puVar11 = (undefined8 *)(uVar8 * 0x78);
  *puVar11 = &UNK_18094a9a8;
  uVar7 = *(undefined8 *)(unaff_RBP + 0x10);
  puVar11[1] = *(undefined8 *)(unaff_RBP + 8);
  puVar11[2] = uVar7;
  *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(unaff_RBP + 0x18);
  puVar11[4] = *(undefined8 *)(unaff_RBP + 0x20);
  puVar11[5] = *(undefined8 *)(unaff_RBP + 0x28);
  *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(unaff_RBP + 0x30);
  uVar7 = *(undefined8 *)(unaff_RBP + 0x40);
  puVar11[7] = *(undefined8 *)(unaff_RBP + 0x38);
  puVar11[8] = uVar7;
  *(undefined4 *)(puVar11 + 9) = *(undefined4 *)(unaff_RBP + 0x48);
  *(undefined4 *)((longlong)puVar11 + 0x4c) = *(undefined4 *)(unaff_RBP + 0x4c);
  *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(unaff_RBP + 0x50);
  *(undefined4 *)((longlong)puVar11 + 0x54) = *(undefined4 *)(unaff_RBP + 0x54);
  uVar4 = *(undefined4 *)(unaff_RBP + 0x5c);
  uVar5 = *(undefined4 *)(unaff_RBP + 0x60);
  uVar6 = *(undefined4 *)(unaff_RBP + 100);
  *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(unaff_RBP + 0x58);
  *(undefined4 *)((longlong)puVar11 + 0x5c) = uVar4;
  *(undefined4 *)(puVar11 + 0xc) = uVar5;
  *(undefined4 *)((longlong)puVar11 + 100) = uVar6;
  *(undefined4 *)(puVar11 + 0xd) = *(undefined4 *)(unaff_RBP + 0x68);
  *(undefined4 *)((longlong)puVar11 + 0x6c) = *(undefined4 *)(unaff_RBP + 0x6c);
  *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(unaff_RBP + 0x70);
  *(undefined4 *)((longlong)puVar11 + 0x74) = *(undefined4 *)(unaff_RBP + 0x74);
  puVar11 = (undefined8 *)*unaff_RBX;
  puVar13 = puVar11 + (ulonglong)*(uint *)(unaff_RBX + 1) * 0xf;
  for (; puVar11 < puVar13; puVar11 = puVar11 + 0xf) {
    *puVar11 = &UNK_18094a9a8;
  }
  if ((-1 < *(int *)((longlong)unaff_RBX + 0xc)) && (lVar3 = *unaff_RBX, lVar3 != 0)) {
    plVar10 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar10 + 0x10))(plVar10,lVar3);
  }
  uVar2 = *(uint *)(unaff_RBX + 1);
  *(undefined4 *)((longlong)unaff_RBX + 0xc) = unaff_ESI;
  *unaff_RBX = 0;
  *(uint *)(unaff_RBX + 1) = uVar2 + 1;
  return (ulonglong)uVar2 * 0x78;
}



longlong FUN_1806ae340(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  
  iVar11 = 1;
  uVar6 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  if (uVar6 != 0) {
    iVar11 = uVar6 * 2;
  }
  lVar7 = FUN_1806aaa10(param_1,iVar11);
  func_0x0001806aac60(lVar7,(ulonglong)*(uint *)(param_1 + 1) * 0x78 + lVar7,*param_1);
  puVar9 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 1) * 0x78 + lVar7);
  *puVar9 = &UNK_18094a9a8;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  puVar9[1] = *(undefined8 *)(param_2 + 8);
  puVar9[2] = uVar5;
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(param_2 + 0x18);
  puVar9[4] = *(undefined8 *)(param_2 + 0x20);
  puVar9[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  puVar9[7] = *(undefined8 *)(param_2 + 0x38);
  puVar9[8] = uVar5;
  *(undefined4 *)(puVar9 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)puVar9 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)puVar9 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = *(undefined4 *)(param_2 + 0x60);
  uVar4 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)puVar9 + 0x5c) = uVar2;
  *(undefined4 *)(puVar9 + 0xc) = uVar3;
  *(undefined4 *)((longlong)puVar9 + 100) = uVar4;
  *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)puVar9 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)puVar9 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  puVar9 = (undefined8 *)*param_1;
  puVar10 = puVar9 + (ulonglong)*(uint *)(param_1 + 1) * 0xf;
  for (; puVar9 < puVar10; puVar9 = puVar9 + 0xf) {
    *puVar9 = &UNK_18094a9a8;
  }
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar1 = *param_1, lVar1 != 0)) {
    plVar8 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar8 + 0x10))(plVar8,lVar1);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *param_1 = lVar7;
  *(int *)((longlong)param_1 + 0xc) = iVar11;
  *(uint *)(param_1 + 1) = uVar6 + 1;
  return (ulonglong)uVar6 * 0x78 + lVar7;
}



undefined8 * FUN_1806ae480(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  iVar8 = 1;
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (undefined8 *)FUN_1806aaab0(param_1,iVar8);
  puVar7 = (undefined8 *)*param_1;
  uVar4 = (ulonglong)*(uint *)(param_1 + 1);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      uVar10 = uVar6;
    }
    puVar9 = puVar3;
    if (uVar10 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar10);
      uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((longlong)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (longlong)puVar3;
  *(int *)((longlong)param_1 + 0xc) = iVar8;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}



uint FUN_1806ae5f0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pbVar2 = (byte *)*param_2;
  uVar5 = 0x1505;
  uVar4 = 0x1505;
  uVar3 = 0x1505;
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  pbVar2 = (byte *)param_2[1];
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar4 = uVar4 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  pbVar2 = (byte *)param_2[2];
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar5 = uVar5 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  return param_3 - 1U & (uVar5 ^ uVar4 ^ uVar3);
}



uint FUN_1806ae680(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  pbVar2 = (byte *)*param_2;
  uVar3 = 0x1505;
  uVar4 = 0x1505;
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar4 = uVar4 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  pbVar2 = (byte *)param_2[1];
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  return (uVar3 ^ uVar4) & *(int *)(param_1 + 0x24) - 1U;
}






