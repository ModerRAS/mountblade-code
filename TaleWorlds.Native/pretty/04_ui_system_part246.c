#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part246.c - 7 个函数

// 函数: void FUN_18080b1b0(longlong param_1,int32_t *param_2,uint64_t param_3)
void FUN_18080b1b0(longlong param_1,int32_t *param_2,uint64_t param_3)

{
  int iVar1;
  longlong lVar2;
  int8_t auStack_a8 [32];
  uint uStack_88;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar2 + 0x1010) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar2 + 0x1090,param_2,0xa30);
  }
  if (*(int *)(lVar2 + 0x1d8) == 0) {
    *(int32_t *)(lVar2 + 0x1008) = 0;
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (*(int *)(lVar2 + 0x1008) != 0) {
    uStack_88 = param_2[4] + 7 >> 3;
    iVar1 = FUN_180827240(lVar2 + 0x1018,param_3,param_2[2],*param_2);
    if (iVar1 == 0) goto FUN_18080b37e;
  }
  (**(code **)(*(longlong *)(param_1 + 8) + 0x28))
            (param_1,param_2,param_3,*(uint64_t *)(*(longlong *)(param_1 + 8) + 0x68));
FUN_18080b37e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_a8);
}





// 函数: void FUN_18080b1e6(longlong param_1,uint64_t param_2)
void FUN_18080b1e6(longlong param_1,uint64_t param_2)

{
  uint64_t unaff_RBP;
  longlong in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
                    // WARNING: Subroutine does not return
  memcpy(param_1 + 0x1090,param_2,0xa30);
}





// 函数: void FUN_18080b37e(void)
void FUN_18080b37e(void)

{
  ulonglong in_stack_00000070;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18080b396(void)
void FUN_18080b396(void)

{
  longlong unaff_RDI;
  ulonglong in_stack_00000070;
  
  (**(code **)(*(longlong *)(unaff_RDI + 8) + 0x28))();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18080b3aa(longlong param_1)
void FUN_18080b3aa(longlong param_1)

{
  int iVar1;
  longlong unaff_RDI;
  ulonglong in_stack_00000070;
  
  if (*(int *)(param_1 + 0x1d8) == 0) {
    *(int32_t *)(param_1 + 0x1008) = 0;
    param_1 = *(longlong *)(unaff_RDI + 8);
  }
  if ((*(int *)(param_1 + 0x1008) == 0) || (iVar1 = FUN_180827240(param_1 + 0x1018), iVar1 != 0)) {
    (**(code **)(*(longlong *)(unaff_RDI + 8) + 0x28))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_18080b430(longlong param_1,uint64_t param_2)

{
  byte bVar1;
  longlong lVar2;
  int8_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) {
    return 0xffffff7f;
  }
  iVar4 = FUN_18080b990(param_2,8);
  *(int *)(lVar2 + 0x18) = iVar4 + 1;
  uVar6 = func_0x0001807b1830(0x10,(iVar4 + 1) * 0x78);
  uVar7 = 0;
  *(uint64_t *)(lVar2 + 0x48) = uVar6;
  uVar9 = uVar7;
  if (0 < *(int *)(lVar2 + 0x18)) {
    do {
      iVar4 = FUN_180828690(param_2,(longlong)(int)uVar9 * 0x78 + *(longlong *)(lVar2 + 0x48));
      if (iVar4 != 0) goto LAB_18080b6e2;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(lVar2 + 0x18));
  }
  for (iVar4 = FUN_18080b990(param_2,6); -1 < iVar4; iVar4 = iVar4 + -1) {
    iVar5 = FUN_18080b990(param_2,0x10);
    if (iVar5 != 0) goto LAB_18080b6e2;
  }
  iVar4 = FUN_18080b990(param_2,6);
  *(int *)(lVar2 + 0x10) = iVar4 + 1;
  uVar6 = func_0x0001807b17e0((iVar4 + 1) * 8);
  *(uint64_t *)(lVar2 + 0x38) = uVar6;
  uVar6 = func_0x0001807b17e0(*(int32_t *)(lVar2 + 0x10));
  *(uint64_t *)(lVar2 + 0x30) = uVar6;
  uVar9 = uVar7;
  uVar10 = uVar7;
  if (0 < *(int *)(lVar2 + 0x10)) {
    do {
      uVar3 = FUN_18080b990(param_2,0x10);
      *(int8_t *)(uVar9 + *(longlong *)(lVar2 + 0x30)) = uVar3;
      bVar1 = *(byte *)(uVar9 + *(longlong *)(lVar2 + 0x30));
      if (1 < bVar1) goto LAB_18080b6e2;
      if (bVar1 != 0) {
        uVar6 = FUN_1808296c0(param_1,param_2);
        *(uint64_t *)(*(longlong *)(lVar2 + 0x38) + uVar9 * 8) = uVar6;
      }
      if (*(longlong *)(*(longlong *)(lVar2 + 0x38) + uVar9 * 8) == 0) goto LAB_18080b6e2;
      uVar8 = (int)uVar10 + 1;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(lVar2 + 0x10));
  }
  iVar4 = FUN_18080b990(param_2,6);
  *(int *)(lVar2 + 0x14) = iVar4 + 1;
  uVar6 = func_0x0001807b17e0((iVar4 + 1) * 0x28);
  *(uint64_t *)(lVar2 + 0x40) = uVar6;
  uVar9 = uVar7;
  if (0 < *(int *)(lVar2 + 0x14)) {
    do {
      iVar4 = FUN_18082a950(*(longlong *)(lVar2 + 0x40) + (longlong)(int)uVar9 * 0x28,param_1,
                            param_2);
      if (iVar4 != 0) goto LAB_18080b6e2;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(lVar2 + 0x14));
  }
  iVar4 = FUN_18080b990(param_2,6);
  *(int *)(lVar2 + 0xc) = iVar4 + 1;
  uVar6 = func_0x0001807b17e0((iVar4 + 1) * 0x28);
  *(uint64_t *)(lVar2 + 0x28) = uVar6;
  uVar9 = uVar7;
  if (0 < *(int *)(lVar2 + 0xc)) {
    do {
      iVar4 = FUN_18080b990(param_2,0x10);
      if (iVar4 != 0) goto LAB_18080b6e2;
      iVar4 = FUN_18082aca0(*(longlong *)(lVar2 + 0x28) + (longlong)(int)uVar9 * 0x28,param_1,
                            param_2);
      if (iVar4 != 0) goto LAB_18080b6e2;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(lVar2 + 0xc));
  }
  iVar4 = FUN_18080b990(param_2,6);
  *(int *)(lVar2 + 8) = iVar4 + 1;
  uVar6 = func_0x0001807b17e0((iVar4 + 1) * 2);
  *(uint64_t *)(lVar2 + 0x20) = uVar6;
  uVar9 = uVar7;
  if (0 < *(int *)(lVar2 + 8)) {
    do {
      uVar3 = FUN_18080b990(param_2,1);
      *(int8_t *)(uVar9 + *(longlong *)(lVar2 + 0x20)) = uVar3;
      iVar4 = FUN_18080b990(param_2,0x10);
      if ((iVar4 != 0) || (iVar4 = FUN_18080b990(param_2,0x10), iVar4 != 0)) goto LAB_18080b6e2;
      uVar3 = FUN_18080b990(param_2,8);
      *(int8_t *)(uVar9 + 1 + *(longlong *)(lVar2 + 0x20)) = uVar3;
      if (*(int *)(lVar2 + 0xc) <= (int)(uint)*(byte *)(uVar9 + 1 + *(longlong *)(lVar2 + 0x20)))
      goto LAB_18080b6e2;
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar9 = uVar9 + 2;
    } while ((int)uVar8 < *(int *)(lVar2 + 8));
  }
  iVar4 = FUN_18080b990(param_2,1);
  if (iVar4 == 1) {
    uVar6 = 0;
  }
  else {
LAB_18080b6e2:
    uVar6 = 0xffffff7b;
  }
  return uVar6;
}



uint FUN_18080b710(uint64_t param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = FUN_18080b990(param_2,8);
  iVar9 = 0;
  iVar8 = 0;
  iVar2 = iVar2 + 1;
  iVar11 = iVar2 * 0x78;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_1808281a0(param_2);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      iVar8 = iVar8 + 1;
      iVar11 = (iVar11 + 0xfU & 0xfffffff0) + iVar3;
    } while (iVar8 < iVar2);
  }
  iVar2 = FUN_18080b990(param_2,6);
  if (-1 < iVar2) {
    uVar7 = *(uint *)(param_2 + 2);
    do {
      uVar4 = uVar7 + 0x10;
      uVar7 = uVar4 & 7;
      *param_2 = *param_2 + ((longlong)(int)uVar4 >> 3);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    *(uint *)(param_2 + 2) = uVar7;
  }
  iVar2 = FUN_18080b990(param_2,6);
  iVar2 = iVar2 + 1;
  iVar8 = 0;
  uVar7 = iVar2 * 9 + 3 + (iVar11 + 3U & 0xfffffffc) & 0xfffffffc;
  if (0 < iVar2) {
    do {
      FUN_18080b990(param_2,0x10);
      iVar11 = FUN_180829400(param_1,param_2);
      if (iVar11 < 0) {
        return 0xffffffff;
      }
      iVar8 = iVar8 + 1;
      uVar7 = uVar7 + (iVar11 + 3U & 0xfffffffc);
    } while (iVar8 < iVar2);
  }
  iVar2 = FUN_18080b990(param_2,6);
  iVar2 = iVar2 + 1;
  uVar7 = iVar2 * 0x28 + uVar7;
  if (0 < iVar2) {
    do {
      iVar8 = FUN_18082a780(param_1,param_2);
      if (iVar8 < 0) {
        return 0xffffffff;
      }
      iVar9 = iVar9 + 1;
      uVar7 = uVar7 + 3 + iVar8 & 0xfffffffc;
    } while (iVar9 < iVar2);
  }
  iVar2 = FUN_18080b990(param_2,6);
  uVar4 = iVar2 + 1;
  uVar7 = uVar7 + uVar4 * 0x28;
  if (0 < (int)uVar4) {
    uVar10 = (ulonglong)uVar4;
    do {
      uVar4 = (int)param_2[2] + 0x10;
      *(uint *)(param_2 + 2) = uVar4 & 7;
      *param_2 = *param_2 + ((longlong)(int)uVar4 >> 3);
      iVar2 = FUN_18082ab40(param_1,param_2);
      uVar7 = uVar7 + iVar2 + 3 & 0xfffffffc;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  iVar2 = FUN_18080b990(param_2,6);
  uVar4 = iVar2 + 1;
  if (0 < (int)uVar4) {
    uVar14 = *(uint *)(param_2 + 2);
    lVar12 = *param_2;
    uVar10 = (ulonglong)uVar4;
    do {
      uVar1 = uVar14 + 1;
      uVar13 = (uVar1 & 7) + 0x10;
      uVar6 = (uVar13 & 7) + 0x10;
      uVar5 = (uVar6 & 7) + 8;
      uVar14 = uVar5 & 7;
      lVar12 = lVar12 + ((longlong)(int)uVar1 >> 3) +
               (ulonglong)(uVar5 >> 3) + (ulonglong)(uVar6 >> 3) + (ulonglong)(uVar13 >> 3);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    *(uint *)(param_2 + 2) = uVar14;
    *param_2 = lVar12;
  }
  return uVar4 * 2 + 3 + uVar7 & 0xfffffffc;
}



uint FUN_18080b990(longlong *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)*param_1;
  iVar1 = (int)param_1[2];
  uVar3 = *puVar2 >> ((byte)iVar1 & 0x1f);
  if (param_2 < 0x20) {
    uVar3 = uVar3 & (1 << ((byte)param_2 & 0x1f)) - 1U;
  }
  else if (iVar1 != 0) {
    uVar3 = uVar3 | (uint)(byte)puVar2[1] << (0x20 - (byte)iVar1 & 0x1f);
  }
  *(uint *)(param_1 + 2) = iVar1 + param_2 & 7;
  *param_1 = ((longlong)(iVar1 + param_2) >> 3) + (longlong)puVar2;
  return uVar3;
}





// 函数: void FUN_18080ba00(longlong param_1,float *param_2,longlong param_3,float *param_4,int param_5,
void FUN_18080ba00(longlong param_1,float *param_2,longlong param_3,float *param_4,int param_5,
                  int param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar16 = *(longlong *)(param_1 + 0x10) + (longlong)param_5 * 4;
  lVar14 = *(longlong *)(param_1 + 8) + (longlong)param_6 * 4;
  uVar9 = (int)param_7 >> 3;
  if (0 < (int)param_8) {
    uVar10 = (ulonglong)param_8;
    lVar15 = lVar16;
    do {
      lVar16 = lVar15 + -4;
      lVar11 = 0;
      if (uVar9 != 0) {
        lVar11 = (ulonglong)uVar9 << 3;
        pfVar12 = (float *)(lVar15 + 0xffc);
        uVar13 = uVar9;
        do {
          *param_2 = pfVar12[-0x400];
          param_2[1] = pfVar12[-0x200];
          param_2[2] = *pfVar12;
          param_2[3] = pfVar12[0x200];
          param_2[4] = pfVar12[0x400];
          param_2[5] = pfVar12[0x600];
          param_2[6] = pfVar12[0x800];
          param_2[7] = pfVar12[0xa00];
          param_2 = param_2 + 8;
          uVar13 = uVar13 - 1;
          pfVar12 = pfVar12 + 0x1000;
        } while (uVar13 != 0);
      }
      if ((param_7 & 7) != 0) {
        pfVar12 = (float *)(lVar11 * 0x800 + lVar16);
        uVar13 = param_7 & 7;
        do {
          fVar6 = *pfVar12;
          pfVar12 = pfVar12 + 0x200;
          *param_2 = fVar6;
          param_2 = param_2 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar10 = uVar10 - 1;
      lVar15 = lVar16;
    } while (uVar10 != 0);
  }
  if (0 < (int)param_9) {
    uVar10 = (ulonglong)param_9;
    lVar15 = lVar16;
    do {
      fVar6 = *(float *)(param_3 + -4);
      param_3 = param_3 + -4;
      fVar3 = *param_4;
      lVar16 = lVar15 + -4;
      lVar11 = 0;
      if (uVar9 != 0) {
        pfVar12 = (float *)(lVar15 + 0xffc);
        lVar11 = (ulonglong)uVar9 << 3;
        pfVar8 = (float *)(lVar14 + 0x2000);
        uVar13 = uVar9;
        do {
          *param_2 = fVar3 * pfVar8[-0x800] + fVar6 * pfVar12[-0x400];
          param_2[1] = fVar3 * pfVar8[-0x400] + fVar6 * pfVar12[-0x200];
          param_2[2] = fVar6 * *pfVar12 + fVar3 * *pfVar8;
          param_2[3] = fVar3 * pfVar8[0x400] + fVar6 * pfVar12[0x200];
          param_2[4] = fVar3 * pfVar8[0x800] + fVar6 * pfVar12[0x400];
          param_2[5] = fVar3 * pfVar8[0xc00] + fVar6 * pfVar12[0x600];
          param_2[6] = fVar3 * pfVar8[0x1000] + fVar6 * pfVar12[0x800];
          pfVar1 = pfVar12 + 0xa00;
          pfVar12 = pfVar12 + 0x1000;
          pfVar2 = pfVar8 + 0x1400;
          pfVar8 = pfVar8 + 0x2000;
          param_2[7] = fVar6 * *pfVar1 + fVar3 * *pfVar2;
          param_2 = param_2 + 8;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if ((param_7 & 7) != 0) {
        pfVar8 = (float *)(lVar11 * 0x800 + lVar16);
        pfVar12 = (float *)(lVar11 * 0x1000 + lVar14);
        uVar13 = param_7 & 7;
        do {
          fVar4 = *pfVar8;
          pfVar8 = pfVar8 + 0x200;
          fVar5 = *pfVar12;
          pfVar12 = pfVar12 + 0x400;
          *param_2 = fVar6 * fVar4 + fVar3 * fVar5;
          param_2 = param_2 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar14 = lVar14 + 4;
      param_4 = param_4 + 1;
      uVar10 = uVar10 - 1;
      lVar15 = lVar16;
    } while (uVar10 != 0);
  }
  if (0 < (int)param_10) {
    param_3 = param_3 - lVar14;
    uVar10 = (ulonglong)param_10;
    lVar15 = lVar14;
    lVar11 = lVar16;
    do {
      fVar6 = *(float *)(param_3 + -4 + lVar15);
      lVar14 = lVar15 + -4;
      fVar3 = *(float *)((longlong)param_4 + (lVar11 - lVar16));
      lVar7 = 0;
      if (uVar9 != 0) {
        pfVar12 = (float *)(lVar15 + 0x1ffc);
        lVar7 = (ulonglong)uVar9 << 3;
        pfVar8 = (float *)(lVar11 + 0x1000);
        uVar13 = uVar9;
        do {
          *param_2 = fVar6 * pfVar8[-0x400] - fVar3 * pfVar12[-0x800];
          param_2[1] = fVar6 * pfVar8[-0x200] - fVar3 * pfVar12[-0x400];
          param_2[2] = fVar6 * *pfVar8 - fVar3 * *pfVar12;
          param_2[3] = fVar6 * pfVar8[0x200] - fVar3 * pfVar12[0x400];
          param_2[4] = fVar6 * pfVar8[0x400] - fVar3 * pfVar12[0x800];
          param_2[5] = fVar6 * pfVar8[0x600] - fVar3 * pfVar12[0xc00];
          param_2[6] = fVar6 * pfVar8[0x800] - fVar3 * pfVar12[0x1000];
          pfVar1 = pfVar8 + 0xa00;
          pfVar8 = pfVar8 + 0x1000;
          pfVar2 = pfVar12 + 0x1400;
          pfVar12 = pfVar12 + 0x2000;
          param_2[7] = fVar6 * *pfVar1 - fVar3 * *pfVar2;
          param_2 = param_2 + 8;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if ((param_7 & 7) != 0) {
        pfVar8 = (float *)(lVar7 * 0x1000 + lVar14);
        pfVar12 = (float *)(lVar7 * 0x800 + lVar11);
        uVar13 = param_7 & 7;
        do {
          fVar4 = *pfVar12;
          pfVar12 = pfVar12 + 0x200;
          fVar5 = *pfVar8;
          pfVar8 = pfVar8 + 0x400;
          *param_2 = fVar6 * fVar4 - fVar3 * fVar5;
          param_2 = param_2 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar11 = lVar11 + 4;
      uVar10 = uVar10 - 1;
      lVar15 = lVar14;
    } while (uVar10 != 0);
  }
  if (0 < (int)param_11) {
    uVar10 = (ulonglong)param_11;
    do {
      lVar16 = 0;
      if (uVar9 != 0) {
        lVar16 = (ulonglong)uVar9 << 3;
        pfVar12 = (float *)(lVar14 + 0x1ffc);
        uVar13 = uVar9;
        do {
          *param_2 = -pfVar12[-0x800];
          param_2[1] = -pfVar12[-0x400];
          param_2[2] = -*pfVar12;
          param_2[3] = -pfVar12[0x400];
          param_2[4] = -pfVar12[0x800];
          param_2[5] = -pfVar12[0xc00];
          param_2[6] = -pfVar12[0x1000];
          param_2[7] = -pfVar12[0x1400];
          param_2 = param_2 + 8;
          uVar13 = uVar13 - 1;
          pfVar12 = pfVar12 + 0x2000;
        } while (uVar13 != 0);
      }
      if ((param_7 & 7) != 0) {
        pfVar12 = (float *)(lVar16 * 0x1000 + lVar14 + -4);
        uVar13 = param_7 & 7;
        do {
          fVar6 = *pfVar12;
          pfVar12 = pfVar12 + 0x400;
          *param_2 = -fVar6;
          param_2 = param_2 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar10 = uVar10 - 1;
      lVar14 = lVar14 + -4;
    } while (uVar10 != 0);
  }
  return;
}





// 函数: void FUN_18080ba14(longlong param_1,float *param_2,longlong param_3,float *param_4)
void FUN_18080ba14(longlong param_1,float *param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong in_RAX;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  longlong in_R10;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint unaff_R15D;
  int in_stack_00000048;
  uint in_stack_00000058;
  uint in_stack_00000060;
  uint in_stack_00000068;
  uint in_stack_00000070;
  
  lVar16 = in_RAX + in_R10 * 4;
  lVar14 = *(longlong *)(param_1 + 8) + (longlong)in_stack_00000048 * 4;
  uVar9 = (int)unaff_R15D >> 3;
  if (0 < (int)in_stack_00000058) {
    uVar10 = (ulonglong)in_stack_00000058;
    lVar15 = lVar16;
    do {
      lVar16 = lVar15 + -4;
      lVar11 = 0;
      if (uVar9 != 0) {
        lVar11 = (ulonglong)uVar9 << 3;
        pfVar12 = (float *)(lVar15 + 0xffc);
        uVar13 = uVar9;
        do {
          *param_2 = pfVar12[-0x400];
          param_2[1] = pfVar12[-0x200];
          param_2[2] = *pfVar12;
          param_2[3] = pfVar12[0x200];
          param_2[4] = pfVar12[0x400];
          param_2[5] = pfVar12[0x600];
          param_2[6] = pfVar12[0x800];
          param_2[7] = pfVar12[0xa00];
          param_2 = param_2 + 8;
          uVar13 = uVar13 - 1;
          pfVar12 = pfVar12 + 0x1000;
        } while (uVar13 != 0);
      }
      if ((unaff_R15D & 7) != 0) {
        pfVar12 = (float *)(lVar11 * 0x800 + lVar16);
        uVar13 = unaff_R15D & 7;
        do {
          fVar6 = *pfVar12;
          pfVar12 = pfVar12 + 0x200;
          *param_2 = fVar6;
          param_2 = param_2 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar10 = uVar10 - 1;
      lVar15 = lVar16;
    } while (uVar10 != 0);
  }
  if (0 < (int)in_stack_00000060) {
    uVar10 = (ulonglong)in_stack_00000060;
    lVar15 = lVar16;
    do {
      fVar6 = *(float *)(param_3 + -4);
      param_3 = param_3 + -4;
      fVar3 = *param_4;
      lVar16 = lVar15 + -4;
      lVar11 = 0;
      if (uVar9 != 0) {
        pfVar12 = (float *)(lVar15 + 0xffc);
        lVar11 = (ulonglong)uVar9 << 3;
        pfVar8 = (float *)(lVar14 + 0x2000);
        uVar13 = uVar9;
        do {
          *param_2 = fVar3 * pfVar8[-0x800] + fVar6 * pfVar12[-0x400];
          param_2[1] = fVar3 * pfVar8[-0x400] + fVar6 * pfVar12[-0x200];
          param_2[2] = fVar6 * *pfVar12 + fVar3 * *pfVar8;
          param_2[3] = fVar3 * pfVar8[0x400] + fVar6 * pfVar12[0x200];
          param_2[4] = fVar3 * pfVar8[0x800] + fVar6 * pfVar12[0x400];
          param_2[5] = fVar3 * pfVar8[0xc00] + fVar6 * pfVar12[0x600];
          param_2[6] = fVar3 * pfVar8[0x1000] + fVar6 * pfVar12[0x800];
          pfVar1 = pfVar12 + 0xa00;
          pfVar12 = pfVar12 + 0x1000;
          pfVar2 = pfVar8 + 0x1400;
          pfVar8 = pfVar8 + 0x2000;
          param_2[7] = fVar6 * *pfVar1 + fVar3 * *pfVar2;
          param_2 = param_2 + 8;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if ((unaff_R15D & 7) != 0) {
        pfVar8 = (float *)(lVar11 * 0x800 + lVar16);
        pfVar12 = (float *)(lVar11 * 0x1000 + lVar14);
        uVar13 = unaff_R15D & 7;
        do {
          fVar4 = *pfVar8;
          pfVar8 = pfVar8 + 0x200;
          fVar5 = *pfVar12;
          pfVar12 = pfVar12 + 0x400;
          *param_2 = fVar6 * fVar4 + fVar3 * fVar5;
          param_2 = param_2 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar14 = lVar14 + 4;
      param_4 = param_4 + 1;
      uVar10 = uVar10 - 1;
      lVar15 = lVar16;
    } while (uVar10 != 0);
  }
  if (0 < (int)in_stack_00000068) {
    param_3 = param_3 - lVar14;
    uVar10 = (ulonglong)in_stack_00000068;
    lVar15 = lVar14;
    lVar11 = lVar16;
    do {
      fVar6 = *(float *)(param_3 + -4 + lVar15);
      lVar14 = lVar15 + -4;
      fVar3 = *(float *)((longlong)param_4 + (lVar11 - lVar16));
      lVar7 = 0;
      if (uVar9 != 0) {
        pfVar12 = (float *)(lVar15 + 0x1ffc);
        lVar7 = (ulonglong)uVar9 << 3;
        pfVar8 = (float *)(lVar11 + 0x1000);
        uVar13 = uVar9;
        do {
          *param_2 = fVar6 * pfVar8[-0x400] - fVar3 * pfVar12[-0x800];
          param_2[1] = fVar6 * pfVar8[-0x200] - fVar3 * pfVar12[-0x400];
          param_2[2] = fVar6 * *pfVar8 - fVar3 * *pfVar12;
          param_2[3] = fVar6 * pfVar8[0x200] - fVar3 * pfVar12[0x400];
          param_2[4] = fVar6 * pfVar8[0x400] - fVar3 * pfVar12[0x800];
          param_2[5] = fVar6 * pfVar8[0x600] - fVar3 * pfVar12[0xc00];
          param_2[6] = fVar6 * pfVar8[0x800] - fVar3 * pfVar12[0x1000];
          pfVar1 = pfVar8 + 0xa00;
          pfVar8 = pfVar8 + 0x1000;
          pfVar2 = pfVar12 + 0x1400;
          pfVar12 = pfVar12 + 0x2000;
          param_2[7] = fVar6 * *pfVar1 - fVar3 * *pfVar2;
          param_2 = param_2 + 8;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if ((unaff_R15D & 7) != 0) {
        pfVar8 = (float *)(lVar7 * 0x1000 + lVar14);
        pfVar12 = (float *)(lVar7 * 0x800 + lVar11);
        uVar13 = unaff_R15D & 7;
        do {
          fVar4 = *pfVar12;
          pfVar12 = pfVar12 + 0x200;
          fVar5 = *pfVar8;
          pfVar8 = pfVar8 + 0x400;
          *param_2 = fVar6 * fVar4 - fVar3 * fVar5;
          param_2 = param_2 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      lVar11 = lVar11 + 4;
      uVar10 = uVar10 - 1;
      lVar15 = lVar14;
    } while (uVar10 != 0);
  }
  if (0 < (int)in_stack_00000070) {
    uVar10 = (ulonglong)in_stack_00000070;
    do {
      lVar16 = 0;
      if (uVar9 != 0) {
        lVar16 = (ulonglong)uVar9 << 3;
        pfVar12 = (float *)(lVar14 + 0x1ffc);
        uVar13 = uVar9;
        do {
          *param_2 = -pfVar12[-0x800];
          param_2[1] = -pfVar12[-0x400];
          param_2[2] = -*pfVar12;
          param_2[3] = -pfVar12[0x400];
          param_2[4] = -pfVar12[0x800];
          param_2[5] = -pfVar12[0xc00];
          param_2[6] = -pfVar12[0x1000];
          param_2[7] = -pfVar12[0x1400];
          param_2 = param_2 + 8;
          uVar13 = uVar13 - 1;
          pfVar12 = pfVar12 + 0x2000;
        } while (uVar13 != 0);
      }
      if ((unaff_R15D & 7) != 0) {
        pfVar12 = (float *)(lVar16 * 0x1000 + lVar14 + -4);
        uVar13 = unaff_R15D & 7;
        do {
          fVar6 = *pfVar12;
          pfVar12 = pfVar12 + 0x400;
          *param_2 = -fVar6;
          param_2 = param_2 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar10 = uVar10 - 1;
      lVar14 = lVar14 + -4;
    } while (uVar10 != 0);
  }
  return;
}





