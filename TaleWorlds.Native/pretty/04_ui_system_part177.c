#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part177.c - 2 个函数

// 函数: void FUN_18076f280(longlong param_1,char param_2)
void FUN_18076f280(longlong param_1,char param_2)

{
  *(int32_t *)(param_1 + 0x230) = 0x3f800000;
  FUN_180765990(*(uint64_t *)(param_1 + 0x218));
  *(int32_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x260) = 0;
  *(uint64_t *)(param_1 + 600) = 0;
  *(int32_t *)(param_1 + 0x270) = 0;
  *(uint64_t *)(param_1 + 0x268) = 0;
  *(int32_t *)(param_1 + 0x280) = 0;
  *(uint64_t *)(param_1 + 0x278) = 0;
  *(int32_t *)(param_1 + 0x290) = 0;
  *(uint64_t *)(param_1 + 0x288) = 0;
  *(uint64_t *)(param_1 + 0x298) = 1;
  *(int32_t *)(param_1 + 0x2a0) = 0x3f800000;
  *(int32_t *)(param_1 + 0x2a4) = 1;
  if (param_2 != '\0') {
    *(uint64_t *)(param_1 + 0x220) = 0;
    *(uint64_t *)(param_1 + 0x48) = 0;
    *(uint64_t *)(param_1 + 0x40) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(uint64_t *)(param_1 + 8) = 0;
    *(int32_t *)(param_1 + 0x2c) = 0x100000;
    *(int32_t *)(param_1 + 0x28) = 0x100000;
    *(int8_t *)(param_1 + 0x50) = 0;
    *(int16_t *)(param_1 + 0x30) = 0;
    *(uint64_t *)(param_1 + 0x38) = 0;
  }
  return;
}



int FUN_18076f350(longlong param_1,ulonglong param_2,int32_t param_3)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  float fVar8;
  float fVar9;
  float fStackX_8;
  float fStackX_10;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    func_0x000180743c20(lVar1,5);
  }
  fStackX_10 = *(float *)(param_1 + 0x230);
  puVar2 = *(uint64_t **)(param_1 + 0x238);
  puVar7 = (uint64_t *)0x0;
  puVar6 = (uint64_t *)((param_2 >> 0x14) - 0x40);
  if (param_2 >> 0x14 < 0x40) {
    puVar6 = puVar7;
  }
  do {
    puVar3 = puVar2;
    if (puVar3 == (uint64_t *)(param_1 + 0x238)) {
LAB_18076f469:
      iVar4 = FUN_18076f100(param_1,(longlong)puVar6 << 0x14,0xfffffffffff00000,0);
      if (((iVar4 == 0) &&
          (iVar4 = FUN_18076e380(param_1,(longlong)puVar6 << 0x14,fStackX_10), iVar4 == 0)) &&
         (iVar4 = FUN_18076e380(param_1,param_2,param_3), iVar4 == 0)) {
        iVar4 = 0;
      }
      if ((lVar1 != 0) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar1,5);
      }
      return iVar4;
    }
    fStackX_8 = (float)puVar3[2];
    if (puVar6 <= (uint64_t *)((ulonglong)puVar3[3] >> 0x14)) {
      if (puVar7 != (uint64_t *)0x0) {
        lVar5 = (longlong)puVar6 - ((ulonglong)puVar7[3] >> 0x14);
        fVar8 = (float)lVar5;
        if (lVar5 < 0) {
          fVar8 = fVar8 + 1.8446744e+19;
        }
        lVar5 = (longlong)((ulonglong)puVar3[3] >> 0x14) - ((ulonglong)puVar7[3] >> 0x14);
        fVar9 = (float)lVar5;
        if (lVar5 < 0) {
          fVar9 = fVar9 + 1.8446744e+19;
        }
        fVar8 = fVar8 / fVar9;
        fVar9 = 0.0;
        if ((0.0 <= fVar8) && (fVar9 = fVar8, 1.0 <= fVar8)) {
          fVar9 = 1.0;
        }
        fStackX_10 = (float)puVar7[2];
        fStackX_10 = (fStackX_8 - fStackX_10) * fVar9 + fStackX_10;
      }
      goto LAB_18076f469;
    }
    fStackX_10 = fStackX_8;
    puVar2 = (uint64_t *)*puVar3;
    puVar7 = puVar3;
  } while( true );
}



uint64_t FUN_18076f4f0(longlong param_1,uint64_t param_2,int8_t param_3)

{
  uint64_t uVar1;
  int8_t *puStackX_8;
  
  if ((*(uint *)(param_1 + 100) >> 8 & 1) != 0) {
    *(uint64_t *)(param_1 + 0x220) = param_2;
    return 0;
  }
  uVar1 = FUN_180743700(*(uint64_t *)(param_1 + 0xa8),&puStackX_8,0x18,param_3);
  if ((int)uVar1 == 0) {
    *puStackX_8 = 0x10;
    *(longlong *)(puStackX_8 + 8) = param_1;
    *(uint64_t *)(puStackX_8 + 0x10) = param_2;
    uVar1 = func_0x000180743b40(*(uint64_t *)(param_1 + 0xa8),puStackX_8,param_3);
  }
  return uVar1;
}





// 函数: void FUN_18076f5d0(longlong param_1)
void FUN_18076f5d0(longlong param_1)

{
  FUN_180765c40(*(longlong *)(param_1 + 0x218),
                *(int32_t *)(*(longlong *)(param_1 + 0x218) + 0x90),0x40,
                (ulonglong)
                CONCAT21((short)((uint)*(int32_t *)(param_1 + 100) >> 0x10),
                         ~(byte)((uint)*(int32_t *)(param_1 + 100) >> 8)) & 0xffffffffffffff01,1)
  ;
  return;
}



int FUN_18076f660(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int32_t *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStackX_8;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    func_0x000180743c20(lVar2);
  }
  fVar19 = 1.0;
  plVar1 = (longlong *)(param_1 + 0x238);
  uVar14 = 0;
  bVar6 = false;
  fVar18 = 1.0;
  iVar8 = 0;
  if (((longlong *)*plVar1 != plVar1) || (*(longlong **)(param_1 + 0x240) != plVar1)) {
    puVar12 = (int32_t *)(param_1 + 0x260);
    plVar15 = (longlong *)*plVar1;
    uVar16 = uVar14;
    do {
      plVar3 = (longlong *)*plVar15;
      plVar9 = plVar3;
      if (plVar3 == plVar1) {
        plVar9 = plVar15;
      }
      uVar11 = plVar9[3];
      uVar7 = *(uint *)((longlong)*(ulonglong **)(param_1 + 0x228) + 0x24);
      uVar4 = **(ulonglong **)(param_1 + 0x228);
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      uVar10 = *(ulonglong *)(param_1 + 0x18);
      if (*(ulonglong *)(param_1 + 0x18) <= uVar4) {
        uVar10 = uVar4;
      }
      if (uVar11 < uVar10) {
        uVar11 = -((uVar10 - uVar11) / (ulonglong)uVar7);
      }
      else {
        uVar11 = (uVar11 - uVar10) / (ulonglong)uVar7;
      }
      if ((longlong)uVar11 < 0) {
        fStackX_8 = (float)plVar15[2];
        if (!bVar6) {
          fVar18 = fStackX_8;
        }
        bVar6 = true;
        *(longlong **)plVar15[1] = plVar3;
        *(longlong *)(*plVar15 + 8) = plVar15[1];
        plVar15[1] = (longlong)plVar15;
        *plVar15 = (longlong)plVar15;
        plVar15[3] = -1;
        plVar15[2] = 0;
        lVar13 = *(longlong *)(param_1 + 0xa8);
        plVar15[1] = *(longlong *)(lVar13 + 0x10818);
        *plVar15 = lVar13 + 0x10810;
        *(longlong **)(lVar13 + 0x10818) = plVar15;
        *(longlong **)plVar15[1] = plVar15;
        fVar19 = fStackX_8;
      }
      else {
        uVar16 = (ulonglong)((int)uVar16 + 1);
        *(longlong *)(puVar12 + -2) = plVar15[3];
        uVar14 = uVar14 + 1;
        fStackX_8 = (float)plVar15[2];
        *puVar12 = fStackX_8;
        puVar12 = puVar12 + 4;
      }
      iVar8 = (int)uVar16;
    } while ((plVar3 != plVar1) && (plVar15 = plVar3, (longlong)uVar14 < 4));
  }
  *(int *)(param_1 + 0x29c) = iVar8;
  *(int32_t *)(param_1 + 0x298) = 0;
  if (bVar6) {
    if (iVar8 == 0) {
      *(int32_t *)(*(longlong *)(param_1 + 0x218) + 0x70) = 0;
      *(float *)(*(longlong *)(param_1 + 0x218) + 0x74) = fVar19;
      *(float *)(*(longlong *)(param_1 + 0x218) + 0x78) = fVar19;
      *(float *)(param_1 + 0x2a0) = fVar19;
    }
    else {
      plVar15 = (longlong *)*plVar1;
      if ((plVar15 != plVar1) || (*(longlong **)(param_1 + 0x240) != plVar1)) {
        fVar17 = 0.0;
        for (; plVar15 != plVar1; plVar15 = (longlong *)*plVar15) {
          fStackX_8 = (float)plVar15[2];
          if (fVar17 <= fStackX_8) {
            fVar17 = fStackX_8;
          }
        }
        *(float *)(param_1 + 0x2a0) = fVar17;
      }
    }
  }
  lVar13 = (longlong)iVar8;
  if (lVar13 < 4) {
    puVar12 = (int32_t *)((lVar13 + 0x26) * 0x10 + param_1);
    lVar13 = 4 - lVar13;
    do {
      *(uint64_t *)(puVar12 + -2) = 0;
      *puVar12 = 0;
      puVar12 = puVar12 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if ((iVar8 == 0) && (bVar6)) {
    if ((fVar18 == *(float *)(param_1 + 0x230)) && (fVar18 != fVar19)) {
      puVar5 = *(ulonglong **)(param_1 + 0x228);
      uVar7 = *(uint *)((longlong)puVar5 + 0x24);
      uVar14 = *(ulonglong *)(param_1 + 0x18);
      if (*(ulonglong *)(param_1 + 0x18) <= *puVar5) {
        uVar14 = *puVar5;
      }
      iVar8 = FUN_18076e380(param_1,uVar14);
      if (((iVar8 != 0) ||
          (iVar8 = FUN_18076e380(param_1,(ulonglong)uVar7 * 0x40 + uVar14,fVar19), iVar8 != 0)) ||
         (iVar8 = FUN_18076f660(param_1), iVar8 != 0)) goto LAB_18076f928;
    }
    *(float *)(param_1 + 0x230) = fVar19;
  }
  iVar8 = 0;
LAB_18076f928:
  if ((lVar2 != 0) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar2,5);
  }
  return iVar8;
}



int FUN_18076f670(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong in_RAX;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  longlong lVar12;
  uint64_t unaff_RBX;
  ulonglong uVar13;
  longlong *plVar14;
  longlong unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  ulonglong uVar15;
  uint64_t unaff_R15;
  float fVar16;
  float fVar17;
  int32_t unaff_XMM6_Da;
  float fVar18;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float fStack0000000000000070;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM6_Dd;
  if (unaff_R12 != 0) {
    func_0x000180743c20();
  }
  fVar18 = 1.0;
  plVar1 = (longlong *)(param_1 + 0x238);
  uVar13 = 0;
  bVar5 = false;
  fVar17 = 1.0;
  iVar7 = 0;
  if (((longlong *)*plVar1 != plVar1) || (*(longlong **)(param_1 + 0x240) != plVar1)) {
    puVar11 = (int32_t *)(param_1 + 0x260);
    plVar14 = (longlong *)*plVar1;
    uVar15 = uVar13;
    do {
      plVar2 = (longlong *)*plVar14;
      plVar8 = plVar2;
      if (plVar2 == plVar1) {
        plVar8 = plVar14;
      }
      uVar10 = plVar8[3];
      uVar6 = *(uint *)((longlong)*(ulonglong **)(param_1 + 0x228) + 0x24);
      uVar3 = **(ulonglong **)(param_1 + 0x228);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      uVar9 = *(ulonglong *)(param_1 + 0x18);
      if (*(ulonglong *)(param_1 + 0x18) <= uVar3) {
        uVar9 = uVar3;
      }
      if (uVar10 < uVar9) {
        uVar10 = -((uVar9 - uVar10) / (ulonglong)uVar6);
      }
      else {
        uVar10 = (uVar10 - uVar9) / (ulonglong)uVar6;
      }
      if ((longlong)uVar10 < 0) {
        fStack0000000000000070 = (float)plVar14[2];
        if (!bVar5) {
          fVar17 = fStack0000000000000070;
        }
        bVar5 = true;
        *(longlong **)plVar14[1] = plVar2;
        *(longlong *)(*plVar14 + 8) = plVar14[1];
        plVar14[1] = (longlong)plVar14;
        *plVar14 = (longlong)plVar14;
        plVar14[3] = -1;
        plVar14[2] = 0;
        lVar12 = *(longlong *)(param_1 + 0xa8);
        plVar14[1] = *(longlong *)(lVar12 + 0x10818);
        *plVar14 = lVar12 + 0x10810;
        *(longlong **)(lVar12 + 0x10818) = plVar14;
        *(longlong **)plVar14[1] = plVar14;
        fVar18 = fStack0000000000000070;
      }
      else {
        uVar15 = (ulonglong)((int)uVar15 + 1);
        *(longlong *)(puVar11 + -2) = plVar14[3];
        uVar13 = uVar13 + 1;
        fStack0000000000000070 = (float)plVar14[2];
        *puVar11 = fStack0000000000000070;
        puVar11 = puVar11 + 4;
      }
      iVar7 = (int)uVar15;
    } while ((plVar2 != plVar1) && (plVar14 = plVar2, (longlong)uVar13 < 4));
  }
  *(int *)(param_1 + 0x29c) = iVar7;
  *(int32_t *)(param_1 + 0x298) = 0;
  if (bVar5) {
    if (iVar7 == 0) {
      *(int32_t *)(*(longlong *)(param_1 + 0x218) + 0x70) = 0;
      *(float *)(*(longlong *)(param_1 + 0x218) + 0x74) = fVar18;
      *(float *)(*(longlong *)(param_1 + 0x218) + 0x78) = fVar18;
      *(float *)(param_1 + 0x2a0) = fVar18;
    }
    else {
      plVar14 = (longlong *)*plVar1;
      if ((plVar14 != plVar1) || (*(longlong **)(param_1 + 0x240) != plVar1)) {
        fVar16 = 0.0;
        for (; plVar14 != plVar1; plVar14 = (longlong *)*plVar14) {
          fStack0000000000000070 = (float)plVar14[2];
          if (fVar16 <= fStack0000000000000070) {
            fVar16 = fStack0000000000000070;
          }
        }
        *(float *)(param_1 + 0x2a0) = fVar16;
      }
    }
  }
  lVar12 = (longlong)iVar7;
  if (lVar12 < 4) {
    puVar11 = (int32_t *)((lVar12 + 0x26) * 0x10 + param_1);
    lVar12 = 4 - lVar12;
    do {
      *(uint64_t *)(puVar11 + -2) = 0;
      *puVar11 = 0;
      puVar11 = puVar11 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if ((iVar7 == 0) && (bVar5)) {
    if ((fVar17 == *(float *)(param_1 + 0x230)) && (fVar17 != fVar18)) {
      puVar4 = *(ulonglong **)(param_1 + 0x228);
      uVar6 = *(uint *)((longlong)puVar4 + 0x24);
      uVar13 = *(ulonglong *)(param_1 + 0x18);
      if (*(ulonglong *)(param_1 + 0x18) <= *puVar4) {
        uVar13 = *puVar4;
      }
      iVar7 = FUN_18076e380(param_1,uVar13);
      if (((iVar7 != 0) ||
          (iVar7 = FUN_18076e380(param_1,(ulonglong)uVar6 * 0x40 + uVar13,fVar18), iVar7 != 0)) ||
         (iVar7 = FUN_18076f660(param_1), iVar7 != 0)) goto LAB_18076f928;
    }
    *(float *)(param_1 + 0x230) = fVar18;
  }
  iVar7 = 0;
LAB_18076f928:
  if ((unaff_R12 != 0) && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(unaff_R12,5);
  }
  return iVar7;
}



int FUN_18076f67e(float param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong in_RAX;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  longlong lVar12;
  longlong unaff_RBX;
  ulonglong uVar13;
  float *pfVar14;
  longlong *plVar15;
  longlong unaff_R12;
  char unaff_R13B;
  uint64_t unaff_R14;
  ulonglong uVar16;
  uint64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  float fVar17;
  int32_t unaff_XMM6_Da;
  float fVar18;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float fStack0000000000000070;
  
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM6_Dd;
  if (unaff_R12 != 0) {
    param_1 = (float)func_0x000180743c20();
    unaff_R13B = '\x01';
  }
  fVar18 = 1.0;
  plVar1 = (longlong *)(unaff_RBX + 0x238);
  uVar13 = 0;
  bVar5 = false;
  fVar17 = 1.0;
  iVar7 = 0;
  if (((longlong *)*plVar1 != plVar1) || (*(longlong **)(unaff_RBX + 0x240) != plVar1)) {
    pfVar14 = (float *)(unaff_RBX + 0x260);
    plVar15 = (longlong *)*plVar1;
    uVar16 = uVar13;
    do {
      plVar2 = (longlong *)*plVar15;
      plVar8 = plVar2;
      if (plVar2 == plVar1) {
        plVar8 = plVar15;
      }
      uVar10 = plVar8[3];
      uVar6 = *(uint *)((longlong)*(ulonglong **)(unaff_RBX + 0x228) + 0x24);
      uVar3 = **(ulonglong **)(unaff_RBX + 0x228);
      if (uVar6 == 0) {
        uVar6 = 1;
      }
      uVar9 = *(ulonglong *)(unaff_RBX + 0x18);
      if (*(ulonglong *)(unaff_RBX + 0x18) <= uVar3) {
        uVar9 = uVar3;
      }
      if (uVar10 < uVar9) {
        uVar10 = -((uVar9 - uVar10) / (ulonglong)uVar6);
      }
      else {
        uVar10 = (uVar10 - uVar9) / (ulonglong)uVar6;
      }
      if ((longlong)uVar10 < 0) {
        fStack0000000000000070 = (float)plVar15[2];
        if (!bVar5) {
          fVar17 = fStack0000000000000070;
        }
        bVar5 = true;
        *(longlong **)plVar15[1] = plVar2;
        *(longlong *)(*plVar15 + 8) = plVar15[1];
        plVar15[1] = (longlong)plVar15;
        *plVar15 = (longlong)plVar15;
        plVar15[3] = -1;
        plVar15[2] = 0;
        lVar12 = *(longlong *)(unaff_RBX + 0xa8);
        plVar15[1] = *(longlong *)(lVar12 + 0x10818);
        *plVar15 = lVar12 + 0x10810;
        *(longlong **)(lVar12 + 0x10818) = plVar15;
        *(longlong **)plVar15[1] = plVar15;
        fVar18 = fStack0000000000000070;
      }
      else {
        uVar16 = (ulonglong)((int)uVar16 + 1);
        *(longlong *)(pfVar14 + -2) = plVar15[3];
        uVar13 = uVar13 + 1;
        fStack0000000000000070 = (float)plVar15[2];
        *pfVar14 = fStack0000000000000070;
        pfVar14 = pfVar14 + 4;
        param_1 = fStack0000000000000070;
      }
      iVar7 = (int)uVar16;
    } while ((plVar2 != plVar1) && (plVar15 = plVar2, (longlong)uVar13 < 4));
  }
  *(int *)(unaff_RBX + 0x29c) = iVar7;
  *(int32_t *)(unaff_RBX + 0x298) = 0;
  if (bVar5) {
    if (iVar7 == 0) {
      *(int32_t *)(*(longlong *)(unaff_RBX + 0x218) + 0x70) = 0;
      *(float *)(*(longlong *)(unaff_RBX + 0x218) + 0x74) = fVar18;
      *(float *)(*(longlong *)(unaff_RBX + 0x218) + 0x78) = fVar18;
      *(float *)(unaff_RBX + 0x2a0) = fVar18;
    }
    else {
      plVar15 = (longlong *)*plVar1;
      if ((plVar15 != plVar1) || (*(longlong **)(unaff_RBX + 0x240) != plVar1)) {
        param_1 = 0.0;
        for (; plVar15 != plVar1; plVar15 = (longlong *)*plVar15) {
          fStack0000000000000070 = (float)plVar15[2];
          if (param_1 <= fStack0000000000000070) {
            param_1 = fStack0000000000000070;
          }
        }
        *(float *)(unaff_RBX + 0x2a0) = param_1;
      }
    }
  }
  lVar12 = (longlong)iVar7;
  if (lVar12 < 4) {
    puVar11 = (int32_t *)((lVar12 + 0x26) * 0x10 + unaff_RBX);
    lVar12 = 4 - lVar12;
    do {
      *(uint64_t *)(puVar11 + -2) = 0;
      *puVar11 = 0;
      puVar11 = puVar11 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if ((iVar7 == 0) && (bVar5)) {
    if ((fVar17 == *(float *)(unaff_RBX + 0x230)) && (fVar17 != fVar18)) {
      puVar4 = *(ulonglong **)(unaff_RBX + 0x228);
      uVar6 = *(uint *)((longlong)puVar4 + 0x24);
      uVar13 = *(ulonglong *)(unaff_RBX + 0x18);
      if (*(ulonglong *)(unaff_RBX + 0x18) <= *puVar4) {
        uVar13 = *puVar4;
      }
      iVar7 = FUN_18076e380(param_1,uVar13);
      if (((iVar7 != 0) ||
          (iVar7 = FUN_18076e380(extraout_XMM0_Da,(ulonglong)uVar6 * 0x40 + uVar13,fVar18),
          iVar7 != 0)) || (iVar7 = FUN_18076f660(), iVar7 != 0)) goto LAB_18076f928;
    }
    *(float *)(unaff_RBX + 0x230) = fVar18;
  }
  iVar7 = 0;
LAB_18076f928:
  if ((unaff_R13B != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(unaff_R12,5);
  }
  return iVar7;
}



int FUN_18076f6db(float param_1,uint64_t param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  longlong lVar10;
  longlong unaff_RBX;
  float *pfVar11;
  longlong in_R10;
  char unaff_R13B;
  int unaff_R14D;
  char unaff_R15B;
  int32_t extraout_XMM0_Da;
  float in_XMM2_Da;
  float unaff_XMM6_Da;
  float fStack0000000000000070;
  longlong in_stack_00000078;
  
  pfVar11 = (float *)(unaff_RBX + 0x260);
  do {
    plVar1 = (longlong *)*param_3;
    plVar6 = plVar1;
    if (plVar1 == param_4) {
      plVar6 = param_3;
    }
    uVar8 = plVar6[3];
    uVar4 = *(uint *)((longlong)*(ulonglong **)(unaff_RBX + 0x228) + 0x24);
    uVar2 = **(ulonglong **)(unaff_RBX + 0x228);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    uVar7 = *(ulonglong *)(unaff_RBX + 0x18);
    if (*(ulonglong *)(unaff_RBX + 0x18) <= uVar2) {
      uVar7 = uVar2;
    }
    if (uVar8 < uVar7) {
      uVar8 = -((uVar7 - uVar8) / (ulonglong)uVar4);
    }
    else {
      uVar8 = (uVar8 - uVar7) / (ulonglong)uVar4;
    }
    if ((longlong)uVar8 < 0) {
      _fStack0000000000000070 = param_3[2];
      if (unaff_R15B == '\0') {
        in_XMM2_Da = fStack0000000000000070;
      }
      unaff_R15B = '\x01';
      *(longlong **)param_3[1] = plVar1;
      *(longlong *)(*param_3 + 8) = param_3[1];
      param_3[1] = (longlong)param_3;
      *param_3 = (longlong)param_3;
      param_3[3] = -1;
      param_3[2] = 0;
      lVar10 = *(longlong *)(unaff_RBX + 0xa8);
      param_3[1] = *(longlong *)(lVar10 + 0x10818);
      *param_3 = lVar10 + 0x10810;
      *(longlong **)(lVar10 + 0x10818) = param_3;
      *(longlong **)param_3[1] = param_3;
      unaff_XMM6_Da = fStack0000000000000070;
    }
    else {
      unaff_R14D = unaff_R14D + 1;
      *(longlong *)(pfVar11 + -2) = param_3[3];
      in_R10 = in_R10 + 1;
      _fStack0000000000000070 = param_3[2];
      *pfVar11 = fStack0000000000000070;
      pfVar11 = pfVar11 + 4;
      param_1 = fStack0000000000000070;
    }
  } while ((plVar1 != param_4) && (param_3 = plVar1, in_R10 < 4));
  *(int *)(unaff_RBX + 0x29c) = unaff_R14D;
  *(int32_t *)(unaff_RBX + 0x298) = 0;
  if (unaff_R15B != '\0') {
    if (unaff_R14D == 0) {
      *(int32_t *)(*(longlong *)(unaff_RBX + 0x218) + 0x70) = 0;
      *(float *)(*(longlong *)(unaff_RBX + 0x218) + 0x74) = unaff_XMM6_Da;
      *(float *)(*(longlong *)(unaff_RBX + 0x218) + 0x78) = unaff_XMM6_Da;
      *(float *)(unaff_RBX + 0x2a0) = unaff_XMM6_Da;
    }
    else {
      plVar1 = (longlong *)*param_4;
      if ((plVar1 != param_4) || ((longlong *)param_4[1] != param_4)) {
        param_1 = 0.0;
        for (; plVar1 != param_4; plVar1 = (longlong *)*plVar1) {
          _fStack0000000000000070 = plVar1[2];
          if (param_1 <= fStack0000000000000070) {
            param_1 = fStack0000000000000070;
          }
        }
        *(float *)(unaff_RBX + 0x2a0) = param_1;
      }
    }
  }
  lVar10 = (longlong)unaff_R14D;
  if (lVar10 < 4) {
    puVar9 = (int32_t *)((lVar10 + 0x26) * 0x10 + unaff_RBX);
    lVar10 = 4 - lVar10;
    do {
      *(uint64_t *)(puVar9 + -2) = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((unaff_R14D == 0) && (unaff_R15B != '\0')) {
    if ((in_XMM2_Da == *(float *)(unaff_RBX + 0x230)) && (in_XMM2_Da != unaff_XMM6_Da)) {
      puVar3 = *(ulonglong **)(unaff_RBX + 0x228);
      uVar4 = *(uint *)((longlong)puVar3 + 0x24);
      uVar8 = *(ulonglong *)(unaff_RBX + 0x18);
      if (*(ulonglong *)(unaff_RBX + 0x18) <= *puVar3) {
        uVar8 = *puVar3;
      }
      iVar5 = FUN_18076e380(param_1,uVar8);
      if (((iVar5 != 0) ||
          (iVar5 = FUN_18076e380(extraout_XMM0_Da,(ulonglong)uVar4 * 0x40 + uVar8,unaff_XMM6_Da),
          iVar5 != 0)) || (iVar5 = FUN_18076f660(), iVar5 != 0)) goto LAB_18076f928;
    }
    *(float *)(unaff_RBX + 0x230) = unaff_XMM6_Da;
  }
  iVar5 = 0;
LAB_18076f928:
  if ((unaff_R13B != '\0') && (in_stack_00000078 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(in_stack_00000078,5);
  }
  return iVar5;
}



ulonglong FUN_18076f7ef(float param_1,uint64_t param_2,float param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  int32_t *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  ulonglong uVar8;
  int32_t uVar9;
  ulonglong in_R10;
  longlong unaff_R12;
  char unaff_R13B;
  int unaff_R14D;
  char unaff_R15B;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float unaff_XMM6_Da;
  float fStack0000000000000070;
  
  *(int *)(unaff_RBX + 0x29c) = unaff_R14D;
  uVar9 = (int32_t)in_R10;
  *(int32_t *)(unaff_RBX + 0x298) = uVar9;
  if (unaff_R15B != '\0') {
    if (unaff_R14D == 0) {
      *(int32_t *)(*(longlong *)(unaff_RBX + 0x218) + 0x70) = uVar9;
      *(float *)(*(longlong *)(unaff_RBX + 0x218) + 0x74) = unaff_XMM6_Da;
      *(float *)(*(longlong *)(unaff_RBX + 0x218) + 0x78) = unaff_XMM6_Da;
      *(float *)(unaff_RBX + 0x2a0) = unaff_XMM6_Da;
    }
    else {
      plVar1 = (longlong *)*param_4;
      if ((plVar1 != param_4) || ((longlong *)param_4[1] != param_4)) {
        param_1 = 0.0;
        for (; plVar1 != param_4; plVar1 = (longlong *)*plVar1) {
          fStack0000000000000070 = (float)plVar1[2];
          if (param_1 <= fStack0000000000000070) {
            param_1 = fStack0000000000000070;
          }
        }
        *(float *)(unaff_RBX + 0x2a0) = param_1;
      }
    }
  }
  lVar6 = (longlong)unaff_R14D;
  if (lVar6 < 4) {
    puVar5 = (int32_t *)((lVar6 + 0x26) * 0x10 + unaff_RBX);
    lVar6 = 4 - lVar6;
    do {
      *(ulonglong *)(puVar5 + -2) = in_R10;
      *puVar5 = uVar9;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((unaff_R14D == 0) && (unaff_R15B != '\0')) {
    if ((param_3 == *(float *)(unaff_RBX + 0x230)) && (param_3 != unaff_XMM6_Da)) {
      puVar2 = *(ulonglong **)(unaff_RBX + 0x228);
      uVar4 = *(uint *)((longlong)puVar2 + 0x24);
      uVar7 = *(ulonglong *)(unaff_RBX + 0x18);
      if (*(ulonglong *)(unaff_RBX + 0x18) <= *puVar2) {
        uVar7 = *puVar2;
      }
      uVar3 = FUN_18076e380(param_1,uVar7);
      uVar8 = (ulonglong)uVar3;
      param_1 = extraout_XMM0_Da;
      if (uVar3 != 0) goto LAB_18076f928;
      uVar4 = FUN_18076e380(extraout_XMM0_Da,(ulonglong)uVar4 * 0x40 + uVar7);
      uVar8 = (ulonglong)uVar4;
      param_1 = extraout_XMM0_Da_00;
      if (uVar4 != 0) goto LAB_18076f928;
      uVar4 = FUN_18076f660();
      uVar8 = (ulonglong)uVar4;
      param_1 = extraout_XMM0_Da_01;
      if (uVar4 != 0) goto LAB_18076f928;
      in_R10 = 0;
    }
    *(float *)(unaff_RBX + 0x230) = unaff_XMM6_Da;
  }
  uVar8 = in_R10 & 0xffffffff;
LAB_18076f928:
  if ((unaff_R13B != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(param_1,5);
  }
  return uVar8;
}



int FUN_18076f8bb(uint64_t param_1,uint64_t param_2,float param_3)

{
  longlong unaff_RBX;
  int in_R10D;
  longlong unaff_R12;
  char unaff_R13B;
  char unaff_R15B;
  float unaff_XMM6_Da;
  
  if (unaff_R15B != '\0') {
    if ((param_3 == *(float *)(unaff_RBX + 0x230)) && (param_3 != unaff_XMM6_Da)) {
      in_R10D = FUN_18076e380();
      if ((in_R10D != 0) ||
         ((in_R10D = FUN_18076e380(), in_R10D != 0 || (in_R10D = FUN_18076f660(), in_R10D != 0))))
      goto LAB_18076f928;
      in_R10D = 0;
    }
    *(float *)(unaff_RBX + 0x230) = unaff_XMM6_Da;
  }
LAB_18076f928:
  if ((unaff_R13B != '\0') && (unaff_R12 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return in_R10D;
}



int32_t FUN_18076f949(void)

{
  int32_t unaff_EDI;
  longlong unaff_R12;
  
  if (unaff_R12 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EDI;
}





