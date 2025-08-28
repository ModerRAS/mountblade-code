#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part066.c - 14 个函数

// 函数: void FUN_1802379f9(longlong param_1,float *param_2,longlong param_3,int param_4)
void FUN_1802379f9(longlong param_1,float *param_2,longlong param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong in_RAX;
  uint uVar17;
  ulonglong in_R10;
  uint64_t in_XMM3_Qa;
  float fVar19;
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM4_Dd;
  float in_XMM5_Da;
  float in_XMM5_Db;
  float in_XMM5_Dc;
  float in_XMM5_Dd;
  ulonglong uVar18;
  
  fVar19 = (float)((ulonglong)in_XMM3_Qa >> 0x20);
  fVar9 = param_2[0xc];
  fVar10 = param_2[0xd];
  fVar11 = param_2[0xe];
  fVar12 = param_2[0xf];
  do {
    lVar8 = *(longlong *)(in_RAX + 0x18);
    fVar2 = *(float *)(lVar8 + 4 + param_1);
    fVar3 = *(float *)(lVar8 + param_1);
    fVar4 = *(float *)(lVar8 + 8 + param_1);
    pfVar1 = (float *)(lVar8 + param_1);
    *pfVar1 = fVar2 * (float)in_XMM3_Qa + fVar3 * in_XMM4_Da + fVar4 * in_XMM5_Da + fVar9;
    pfVar1[1] = fVar2 * fVar19 + fVar3 * in_XMM4_Db + fVar4 * in_XMM5_Db + fVar10;
    pfVar1[2] = fVar2 * in_XMM3_Dc + fVar3 * in_XMM4_Dc + fVar4 * in_XMM5_Dc + fVar11;
    pfVar1[3] = fVar2 * in_XMM3_Dd + fVar3 * in_XMM4_Dd + fVar4 * in_XMM5_Dd + fVar12;
    in_RAX = *(longlong *)(param_3 + 8);
    if (*(int *)(in_RAX + 0x38) != (int)in_R10) {
      lVar8 = *(longlong *)(in_RAX + 0x40);
      fVar2 = *(float *)(lVar8 + 4 + param_1);
      fVar3 = *(float *)(lVar8 + param_1);
      fVar4 = *(float *)(lVar8 + 8 + param_1);
      pfVar1 = (float *)(lVar8 + param_1);
      *pfVar1 = fVar2 * (float)in_XMM3_Qa + fVar3 * in_XMM4_Da + fVar4 * in_XMM5_Da + fVar9;
      pfVar1[1] = fVar2 * fVar19 + fVar3 * in_XMM4_Db + fVar4 * in_XMM5_Db + fVar10;
      pfVar1[2] = fVar2 * in_XMM3_Dc + fVar3 * in_XMM4_Dc + fVar4 * in_XMM5_Dc + fVar11;
      pfVar1[3] = fVar2 * in_XMM3_Dd + fVar3 * in_XMM4_Dd + fVar4 * in_XMM5_Dd + fVar12;
      in_RAX = *(longlong *)(param_3 + 8);
    }
    param_4 = param_4 + 1;
    param_1 = param_1 + 0x10;
  } while (param_4 < *(int *)(in_RAX + 0x10));
  if ((int)in_R10 < *(int *)(in_RAX + 0x60)) {
    fVar9 = param_2[4];
    fVar10 = param_2[5];
    fVar11 = param_2[6];
    fVar12 = param_2[7];
    fVar19 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    fVar13 = param_2[8];
    fVar14 = param_2[9];
    fVar15 = param_2[10];
    fVar16 = param_2[0xb];
    uVar18 = in_R10;
    do {
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
      lVar8 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x68);
      fVar5 = *(float *)(lVar8 + 0x38 + in_R10);
      fVar6 = *(float *)(lVar8 + 0x34 + in_R10);
      fVar7 = *(float *)(lVar8 + 0x3c + in_R10);
      pfVar1 = (float *)(lVar8 + 0x34 + in_R10);
      *pfVar1 = fVar5 * fVar9 + fVar6 * fVar19 + fVar7 * fVar13;
      pfVar1[1] = fVar5 * fVar10 + fVar6 * fVar2 + fVar7 * fVar14;
      pfVar1[2] = fVar5 * fVar11 + fVar6 * fVar3 + fVar7 * fVar15;
      pfVar1[3] = fVar5 * fVar12 + fVar6 * fVar4 + fVar7 * fVar16;
      in_R10 = in_R10 + 0x5c;
    } while ((int)uVar17 < *(int *)(*(longlong *)(param_3 + 8) + 0x60));
  }
  *(int8_t *)(param_3 + 0x32) = 1;
  *(int8_t *)(param_3 + 0x30) = 1;
  return;
}






// 函数: void FUN_180237a92(uint64_t param_1,float *param_2,longlong param_3)
void FUN_180237a92(uint64_t param_1,float *param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong in_RAX;
  uint uVar18;
  ulonglong in_R10;
  ulonglong uVar19;
  
  if ((int)in_R10 < *(int *)(in_RAX + 0x60)) {
    fVar6 = param_2[4];
    fVar7 = param_2[5];
    fVar8 = param_2[6];
    fVar9 = param_2[7];
    fVar10 = *param_2;
    fVar11 = param_2[1];
    fVar12 = param_2[2];
    fVar13 = param_2[3];
    fVar14 = param_2[8];
    fVar15 = param_2[9];
    fVar16 = param_2[10];
    fVar17 = param_2[0xb];
    uVar19 = in_R10;
    do {
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
      lVar5 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x68);
      fVar2 = *(float *)(lVar5 + 0x38 + in_R10);
      fVar3 = *(float *)(lVar5 + 0x34 + in_R10);
      fVar4 = *(float *)(lVar5 + 0x3c + in_R10);
      pfVar1 = (float *)(lVar5 + 0x34 + in_R10);
      *pfVar1 = fVar2 * fVar6 + fVar3 * fVar10 + fVar4 * fVar14;
      pfVar1[1] = fVar2 * fVar7 + fVar3 * fVar11 + fVar4 * fVar15;
      pfVar1[2] = fVar2 * fVar8 + fVar3 * fVar12 + fVar4 * fVar16;
      pfVar1[3] = fVar2 * fVar9 + fVar3 * fVar13 + fVar4 * fVar17;
      in_R10 = in_R10 + 0x5c;
    } while ((int)uVar18 < *(int *)(*(longlong *)(param_3 + 8) + 0x60));
  }
  *(int8_t *)(param_3 + 0x32) = 1;
  *(int8_t *)(param_3 + 0x30) = 1;
  return;
}






// 函数: void FUN_180237b10(longlong param_1,float *param_2)
void FUN_180237b10(longlong param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar19;
  
  lVar15 = *(longlong *)(param_1 + 8);
  uVar17 = 0;
  if (0 < *(int *)(lVar15 + 0x10)) {
    fVar2 = param_2[0xc];
    fVar3 = param_2[0xd];
    fVar4 = param_2[0xe];
    fVar8 = param_2[8];
    fVar9 = param_2[9];
    fVar10 = param_2[10];
    fVar11 = param_2[0xb];
    fVar12 = *param_2;
    fVar13 = param_2[1];
    fVar14 = param_2[2];
    fVar5 = param_2[4];
    fVar6 = param_2[5];
    fVar7 = param_2[6];
    uVar16 = uVar17;
    uVar19 = uVar17;
    do {
      lVar15 = *(longlong *)(lVar15 + 0x18);
      fVar22 = *(float *)(lVar15 + uVar16) - fVar2;
      fVar20 = *(float *)(lVar15 + 4 + uVar16) - fVar3;
      fVar21 = *(float *)(lVar15 + 8 + uVar16) - fVar4;
      pfVar1 = (float *)(lVar15 + uVar16);
      *pfVar1 = fVar22 * fVar12 + fVar20 * fVar13 + fVar21 * fVar14;
      pfVar1[1] = fVar22 * fVar5 + fVar20 * fVar6 + fVar21 * fVar7;
      pfVar1[2] = fVar22 * fVar8 + fVar20 * fVar9 + fVar21 * fVar10;
      pfVar1[3] = fVar22 * fVar11 + fVar20 * fVar11 + fVar21 * fVar11;
      lVar15 = *(longlong *)(param_1 + 8);
      if (*(int *)(lVar15 + 0x38) != 0) {
        lVar15 = *(longlong *)(lVar15 + 0x40);
        fVar22 = *(float *)(lVar15 + uVar16) - fVar2;
        fVar20 = *(float *)(lVar15 + 4 + uVar16) - fVar3;
        fVar21 = *(float *)(lVar15 + 8 + uVar16) - fVar4;
        pfVar1 = (float *)(lVar15 + uVar16);
        *pfVar1 = fVar22 * fVar12 + fVar20 * fVar13 + fVar21 * fVar14;
        pfVar1[1] = fVar22 * fVar5 + fVar20 * fVar6 + fVar21 * fVar7;
        pfVar1[2] = fVar22 * fVar8 + fVar20 * fVar9 + fVar21 * fVar10;
        pfVar1[3] = fVar22 * fVar11 + fVar20 * fVar11 + fVar21 * fVar11;
        lVar15 = *(longlong *)(param_1 + 8);
      }
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
      uVar16 = uVar16 + 0x10;
    } while ((int)uVar18 < *(int *)(lVar15 + 0x10));
  }
  if (0 < *(int *)(lVar15 + 0x60)) {
    fVar2 = param_2[8];
    fVar3 = param_2[9];
    fVar4 = param_2[10];
    fVar8 = param_2[0xb];
    fVar9 = *param_2;
    fVar10 = param_2[1];
    fVar11 = param_2[2];
    fVar12 = param_2[4];
    fVar13 = param_2[5];
    fVar14 = param_2[6];
    uVar16 = uVar17;
    do {
      uVar18 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar18;
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x68);
      fVar5 = *(float *)(lVar15 + 0x38 + uVar17);
      fVar6 = *(float *)(lVar15 + 0x34 + uVar17);
      fVar7 = *(float *)(lVar15 + 0x3c + uVar17);
      pfVar1 = (float *)(lVar15 + 0x34 + uVar17);
      *pfVar1 = fVar5 * fVar10 + fVar6 * fVar9 + fVar7 * fVar11;
      pfVar1[1] = fVar5 * fVar13 + fVar6 * fVar12 + fVar7 * fVar14;
      pfVar1[2] = fVar5 * fVar3 + fVar6 * fVar2 + fVar7 * fVar4;
      pfVar1[3] = fVar5 * fVar8 + fVar6 * fVar8 + fVar7 * fVar8;
      uVar17 = uVar17 + 0x5c;
    } while ((int)uVar18 < *(int *)(*(longlong *)(param_1 + 8) + 0x60));
  }
  *(int8_t *)(param_1 + 0x32) = 1;
  *(int8_t *)(param_1 + 0x30) = 1;
  return;
}






// 函数: void FUN_180237b2b(uint64_t param_1,float *param_2,longlong param_3,int param_4)
void FUN_180237b2b(uint64_t param_1,float *param_2,longlong param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong in_RAX;
  ulonglong uVar16;
  uint uVar17;
  ulonglong in_R10;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar16 = in_R10 & 0xffffffff;
  fVar2 = param_2[0xc];
  fVar3 = param_2[0xd];
  fVar4 = param_2[0xe];
  fVar9 = param_2[8];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar13 = *param_2;
  fVar14 = param_2[1];
  fVar15 = param_2[2];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  do {
    lVar8 = *(longlong *)(in_RAX + 0x18);
    fVar20 = *(float *)(lVar8 + uVar16) - fVar2;
    fVar18 = *(float *)(lVar8 + 4 + uVar16) - fVar3;
    fVar19 = *(float *)(lVar8 + 8 + uVar16) - fVar4;
    pfVar1 = (float *)(lVar8 + uVar16);
    *pfVar1 = fVar20 * fVar13 + fVar18 * fVar14 + fVar19 * fVar15;
    pfVar1[1] = fVar20 * fVar5 + fVar18 * fVar6 + fVar19 * fVar7;
    pfVar1[2] = fVar20 * fVar9 + fVar18 * fVar10 + fVar19 * fVar11;
    pfVar1[3] = fVar20 * fVar12 + fVar18 * fVar12 + fVar19 * fVar12;
    in_RAX = *(longlong *)(param_3 + 8);
    if (*(int *)(in_RAX + 0x38) != (int)in_R10) {
      lVar8 = *(longlong *)(in_RAX + 0x40);
      fVar20 = *(float *)(lVar8 + uVar16) - fVar2;
      fVar18 = *(float *)(lVar8 + 4 + uVar16) - fVar3;
      fVar19 = *(float *)(lVar8 + 8 + uVar16) - fVar4;
      pfVar1 = (float *)(lVar8 + uVar16);
      *pfVar1 = fVar20 * fVar13 + fVar18 * fVar14 + fVar19 * fVar15;
      pfVar1[1] = fVar20 * fVar5 + fVar18 * fVar6 + fVar19 * fVar7;
      pfVar1[2] = fVar20 * fVar9 + fVar18 * fVar10 + fVar19 * fVar11;
      pfVar1[3] = fVar20 * fVar12 + fVar18 * fVar12 + fVar19 * fVar12;
      in_RAX = *(longlong *)(param_3 + 8);
    }
    param_4 = param_4 + 1;
    uVar16 = uVar16 + 0x10;
  } while (param_4 < *(int *)(in_RAX + 0x10));
  if ((int)in_R10 < *(int *)(in_RAX + 0x60)) {
    fVar2 = param_2[8];
    fVar3 = param_2[9];
    fVar4 = param_2[10];
    fVar9 = param_2[0xb];
    fVar10 = *param_2;
    fVar11 = param_2[1];
    fVar12 = param_2[2];
    fVar13 = param_2[4];
    fVar14 = param_2[5];
    fVar15 = param_2[6];
    uVar16 = in_R10;
    do {
      uVar17 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar17;
      lVar8 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x68);
      fVar5 = *(float *)(lVar8 + 0x38 + in_R10);
      fVar6 = *(float *)(lVar8 + 0x34 + in_R10);
      fVar7 = *(float *)(lVar8 + 0x3c + in_R10);
      pfVar1 = (float *)(lVar8 + 0x34 + in_R10);
      *pfVar1 = fVar5 * fVar11 + fVar6 * fVar10 + fVar7 * fVar12;
      pfVar1[1] = fVar5 * fVar14 + fVar6 * fVar13 + fVar7 * fVar15;
      pfVar1[2] = fVar5 * fVar3 + fVar6 * fVar2 + fVar7 * fVar4;
      pfVar1[3] = fVar5 * fVar9 + fVar6 * fVar9 + fVar7 * fVar9;
      in_R10 = in_R10 + 0x5c;
    } while ((int)uVar17 < *(int *)(*(longlong *)(param_3 + 8) + 0x60));
  }
  *(int8_t *)(param_3 + 0x32) = 1;
  *(int8_t *)(param_3 + 0x30) = 1;
  return;
}






// 函数: void FUN_180237c71(uint64_t param_1,float *param_2,longlong param_3)
void FUN_180237c71(uint64_t param_1,float *param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong in_RAX;
  uint uVar16;
  ulonglong in_R10;
  ulonglong uVar17;
  
  if ((int)in_R10 < *(int *)(in_RAX + 0x60)) {
    fVar6 = param_2[8];
    fVar7 = param_2[9];
    fVar8 = param_2[10];
    fVar9 = param_2[0xb];
    fVar10 = *param_2;
    fVar11 = param_2[1];
    fVar12 = param_2[2];
    fVar13 = param_2[4];
    fVar14 = param_2[5];
    fVar15 = param_2[6];
    uVar17 = in_R10;
    do {
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      lVar5 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x68);
      fVar2 = *(float *)(lVar5 + 0x38 + in_R10);
      fVar3 = *(float *)(lVar5 + 0x34 + in_R10);
      fVar4 = *(float *)(lVar5 + 0x3c + in_R10);
      pfVar1 = (float *)(lVar5 + 0x34 + in_R10);
      *pfVar1 = fVar2 * fVar11 + fVar3 * fVar10 + fVar4 * fVar12;
      pfVar1[1] = fVar2 * fVar14 + fVar3 * fVar13 + fVar4 * fVar15;
      pfVar1[2] = fVar2 * fVar7 + fVar3 * fVar6 + fVar4 * fVar8;
      pfVar1[3] = fVar2 * fVar9 + fVar3 * fVar9 + fVar4 * fVar9;
      in_R10 = in_R10 + 0x5c;
    } while ((int)uVar16 < *(int *)(*(longlong *)(param_3 + 8) + 0x60));
  }
  *(int8_t *)(param_3 + 0x32) = 1;
  *(int8_t *)(param_3 + 0x30) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180237d00(longlong *param_1)
void FUN_180237d00(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  
  if ((*(uint *)(*param_1 + 0x100) & 0x8000000) == 0) {
    lVar2 = param_1[1];
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x14) < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(lVar2 + 0x14) << 4);
    }
                    // WARNING: Subroutine does not return
    memcpy(uVar3,*(uint64_t *)(lVar2 + 0x18),(longlong)iVar1 << 4);
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180238950(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180238950(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *******pppppppuVar3;
  uint64_t *******pppppppuVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  uint uVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  bool bVar15;
  uint64_t uVar16;
  int iStack_e0;
  uint64_t *puStack_c0;
  uint64_t *******pppppppuStack_a0;
  uint64_t *******pppppppuStack_98;
  uint64_t *******pppppppuStack_90;
  ulonglong uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  
  uVar16 = 0xfffffffffffffffe;
  if ((*(uint *)(*param_1 + 0x100) & 0x8000000) == 0) {
    return;
  }
  lVar2 = param_1[1];
  puVar6 = (uint64_t *)0x0;
  uStack_78 = 3;
  pppppppuStack_a0 = &pppppppuStack_a0;
  pppppppuStack_98 = &pppppppuStack_a0;
  pppppppuStack_90 = (uint64_t *******)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_c0 = (uint64_t *)0x0;
  lVar7 = param_1[1];
  puVar13 = (uint64_t *)0x0;
  puVar8 = puVar6;
  puVar12 = puVar6;
  if (0 < *(int *)(lVar7 + 0x88)) {
    do {
      lVar7 = *(longlong *)(lVar7 + 0x90);
      if (puVar13 < puVar6) {
        *puVar13 = *(uint64_t *)((longlong)puVar8 + lVar7);
        *(int32_t *)(puVar13 + 1) = *(int32_t *)((longlong)puVar8 + lVar7 + 8);
        puVar9 = puVar13;
      }
      else {
        lVar10 = ((longlong)puVar13 - (longlong)puStack_c0) / 0xc;
        puVar6 = puStack_c0;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_180238a80:
          puVar9 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar10 * 0xc,3,puStack_c0,uVar16);
          puVar14 = puVar9;
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_180238a80;
          puVar9 = (uint64_t *)0x0;
          puVar14 = puVar9;
        }
        for (; puVar6 != puVar13; puVar6 = (uint64_t *)((longlong)puVar6 + 0xc)) {
          *puVar9 = *puVar6;
          *(int32_t *)(puVar9 + 1) = *(int32_t *)(puVar6 + 1);
          puVar9 = (uint64_t *)((longlong)puVar9 + 0xc);
        }
        *puVar9 = *(uint64_t *)((longlong)puVar8 + lVar7);
        *(int32_t *)(puVar9 + 1) = *(int32_t *)((longlong)puVar8 + lVar7 + 8);
        if (puStack_c0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puStack_c0);
        }
        puVar6 = (uint64_t *)((longlong)puVar14 + lVar10 * 0xc);
        param_4 = 0;
        puStack_c0 = puVar14;
      }
      puVar13 = (uint64_t *)((longlong)puVar9 + 0xc);
      uVar11 = (int)puVar12 + 1;
      lVar7 = param_1[1];
      puVar8 = (uint64_t *)((longlong)puVar8 + 0xc);
      puVar12 = (uint64_t *)(ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(lVar7 + 0x88));
  }
  pppppppuVar3 = pppppppuStack_90;
  if (((longlong)puVar13 - (longlong)puStack_c0) / 0xc == 0) {
    *(uint *)(*param_1 + 0x100) = *(uint *)(*param_1 + 0x100) & 0xf7ffffff;
    *(int8_t *)(param_1 + 6) = 1;
    if (puStack_c0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puStack_c0);
    }
    if (pppppppuStack_90 == (uint64_t *******)0x0) {
      return;
    }
    FUN_18004b790(&pppppppuStack_a0,*pppppppuStack_90);
                    // WARNING: Subroutine does not return
    FUN_18064e900(pppppppuVar3);
  }
  puVar6 = (uint64_t *)((longlong)puStack_c0 + 0xc);
  if (pppppppuStack_90 != (uint64_t *******)0x0) {
    FUN_18004b790(&pppppppuStack_a0,*pppppppuStack_90);
                    // WARNING: Subroutine does not return
    FUN_18064e900(pppppppuVar3);
  }
  pppppppuStack_a0 = &pppppppuStack_a0;
  pppppppuStack_98 = &pppppppuStack_a0;
  pppppppuStack_90 = (uint64_t *******)0x0;
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  uStack_80 = 0;
  uVar1 = *puStack_c0;
  if ((puVar6 < puVar13) && (lVar7 = ((longlong)puVar13 - (longlong)puVar6) / 0xc, 0 < lVar7)) {
    puVar5 = (int32_t *)((longlong)puStack_c0 + 0x14);
    lVar10 = (longlong)puStack_c0 - (longlong)puVar6;
    do {
      *(int32_t *)(lVar10 + -8 + (longlong)puVar5) = puVar5[-2];
      *(int32_t *)(lVar10 + -4 + (longlong)puVar5) = puVar5[-1];
      *(int32_t *)(lVar10 + (longlong)puVar5) = *puVar5;
      lVar7 = lVar7 + -1;
      puVar5 = puVar5 + 3;
    } while (0 < lVar7);
  }
  iStack_e0 = (int)uVar1;
  lVar2 = *(longlong *)(lVar2 + 0x68);
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x28,(int8_t)uStack_78,param_4,uVar16);
  uVar11 = *(uint *)((longlong)iStack_e0 * 0x5c + lVar2);
  *(uint *)(lVar7 + 0x20) = uVar11;
  bVar15 = true;
  pppppppuVar3 = &pppppppuStack_a0;
  pppppppuVar4 = pppppppuStack_90;
  while (pppppppuVar4 != (uint64_t *******)0x0) {
    bVar15 = uVar11 < *(uint *)(pppppppuVar4 + 4);
    pppppppuVar3 = pppppppuVar4;
    if (bVar15) {
      pppppppuVar4 = (uint64_t *******)pppppppuVar4[1];
    }
    else {
      pppppppuVar4 = (uint64_t *******)*pppppppuVar4;
    }
  }
  pppppppuVar4 = pppppppuVar3;
  if (bVar15) {
    if (pppppppuVar3 == pppppppuStack_98) goto LAB_180238cbc;
    pppppppuVar4 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar3);
  }
  if (*(uint *)(lVar7 + 0x20) <= *(uint *)(pppppppuVar4 + 4)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar7);
  }
LAB_180238cbc:
  if (((uint64_t ********)pppppppuVar3 == &pppppppuStack_a0) ||
     (*(uint *)(lVar7 + 0x20) < *(uint *)(pppppppuVar3 + 4))) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,pppppppuVar3,&pppppppuStack_a0,uVar16);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180239390(uint64_t *param_1,uint64_t param_2,uint *param_3)
void FUN_180239390(uint64_t *param_1,uint64_t param_2,uint *param_3)

{
  uint uVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  bool bVar6;
  
  lVar3 = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(param_1 + 5));
  uVar1 = *param_3;
  bVar6 = true;
  *(uint *)(lVar3 + 0x20) = uVar1;
  puVar4 = (uint64_t *)param_1[2];
  puVar2 = param_1;
  while (puVar4 != (uint64_t *)0x0) {
    bVar6 = uVar1 < *(uint *)(puVar4 + 4);
    puVar2 = puVar4;
    if (bVar6) {
      puVar4 = (uint64_t *)puVar4[1];
    }
    else {
      puVar4 = (uint64_t *)*puVar4;
    }
  }
  puVar4 = puVar2;
  if (bVar6) {
    if (puVar2 == (uint64_t *)param_1[1]) goto LAB_18023941e;
    puVar4 = (uint64_t *)func_0x00018066b9a0(puVar2);
  }
  if (*(uint *)(lVar3 + 0x20) <= *(uint *)(puVar4 + 4)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
LAB_18023941e:
  if ((puVar2 == param_1) || (*(uint *)(lVar3 + 0x20) < *(uint *)(puVar2 + 4))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,puVar2,param_1,uVar5);
}






// 函数: void FUN_180239480(uint64_t *param_1,uint64_t *param_2)
void FUN_180239480(uint64_t *param_1,uint64_t *param_2)

{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t auStackX_18 [2];
  
  if (param_1 != param_2) {
    for (puVar3 = param_1 + 1; puVar3 != param_2; puVar3 = puVar3 + 1) {
      auStackX_18[0] = *puVar3;
      puVar4 = puVar3;
      puVar2 = puVar3;
      while (puVar2 != param_1) {
        puVar2 = puVar2 + -1;
        cVar1 = func_0x000180233670(auStackX_18,puVar2);
        if (cVar1 == '\0') break;
        *puVar4 = *puVar2;
        puVar4 = puVar4 + -1;
      }
      *puVar4 = auStackX_18[0];
    }
  }
  return;
}






// 函数: void FUN_180239495(uint64_t *param_1,uint64_t *param_2)
void FUN_180239495(uint64_t *param_1,uint64_t *param_2)

{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uStack0000000000000050;
  
  puVar3 = param_1 + 1;
  do {
    if (puVar3 == param_2) {
      return;
    }
    uStack0000000000000050 = *puVar3;
    puVar4 = puVar3;
    puVar2 = puVar3;
    while (puVar2 != param_1) {
      puVar2 = puVar2 + -1;
      cVar1 = func_0x000180233670(&stack0x00000050,puVar2);
      if (cVar1 == '\0') break;
      *puVar4 = *puVar2;
      puVar4 = puVar4 + -1;
    }
    puVar3 = puVar3 + 1;
    *puVar4 = uStack0000000000000050;
  } while( true );
}






// 函数: void FUN_1802394a9(void)
void FUN_1802394a9(void)

{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *puVar3;
  uint64_t *unaff_R14;
  uint64_t uStack0000000000000050;
  
  do {
    uStack0000000000000050 = *unaff_RSI;
    puVar2 = unaff_RSI;
    puVar3 = unaff_RSI;
    while (puVar2 != unaff_RBP) {
      puVar2 = puVar2 + -1;
      cVar1 = func_0x000180233670(&stack0x00000050,puVar2);
      if (cVar1 == '\0') break;
      *puVar3 = *puVar2;
      puVar3 = puVar3 + -1;
    }
    unaff_RSI = unaff_RSI + 1;
    *puVar3 = uStack0000000000000050;
    if (unaff_RSI == unaff_R14) {
      return;
    }
  } while( true );
}






// 函数: void FUN_180239512(void)
void FUN_180239512(void)

{
  return;
}






// 函数: void FUN_18023951e(void)
void FUN_18023951e(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180239530(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c03c60;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}






// 函数: void FUN_180239610(int param_1,int param_2,longlong *param_3)
void FUN_180239610(int param_1,int param_2,longlong *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  
  param_3 = (longlong *)*param_3;
  lVar9 = (longlong)param_1;
  if (lVar9 < param_2) {
    lVar10 = lVar9 << 4;
    lVar9 = param_2 - lVar9;
    do {
      lVar7 = *(longlong *)(**(longlong **)param_3[1] + 8 + (longlong)*(int *)param_3[2] * 0x50);
      fVar2 = *(float *)param_3[3];
      fVar11 = 1.0 - fVar2;
      lVar8 = *(longlong *)(**(longlong **)param_3[1] + 8 + (longlong)*(int *)param_3[4] * 0x50);
      fVar3 = *(float *)(lVar10 + 4 + lVar8);
      fVar4 = *(float *)(lVar10 + 8 + lVar8);
      fVar5 = *(float *)(lVar10 + 8 + lVar7);
      fVar6 = *(float *)(lVar10 + 4 + lVar7);
      pfVar1 = (float *)(*(longlong *)(*(longlong *)(*param_3 + 8) + 0x40) + lVar10);
      *pfVar1 = fVar11 * *(float *)(lVar10 + lVar7) + fVar2 * *(float *)(lVar10 + lVar8);
      pfVar1[1] = fVar2 * fVar3 + fVar11 * fVar6;
      pfVar1[2] = fVar2 * fVar4 + fVar11 * fVar5;
      pfVar1[3] = 3.4028235e+38;
      lVar10 = lVar10 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180239720(longlong *param_1,longlong *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c03c20;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000180239aa0)
// WARNING: Removing unreachable block (ram,0x000180239ab3)
// WARNING: Removing unreachable block (ram,0x000180239ad0)
// WARNING: Removing unreachable block (ram,0x000180239ae1)
// WARNING: Removing unreachable block (ram,0x000180239ae4)
// WARNING: Removing unreachable block (ram,0x000180239afc)
// WARNING: Removing unreachable block (ram,0x000180239afe)
// WARNING: Removing unreachable block (ram,0x000180239b0b)
// WARNING: Removing unreachable block (ram,0x000180239b10)
// WARNING: Removing unreachable block (ram,0x000180239b2c)
// WARNING: Removing unreachable block (ram,0x000180239b3b)
// WARNING: Removing unreachable block (ram,0x000180239b44)
// WARNING: Removing unreachable block (ram,0x000180239b51)




