#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part004.c - 13 个函数

// 函数: void FUN_1803a6d01(void)
void FUN_1803a6d01(void)

{
  int64_t lVar1;
  uint64_t *unaff_RDI;
  int64_t unaff_R14;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_R14 + 0x28));
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RDI;
  *(int32_t *)(lVar1 + 0x28) = *(int32_t *)(unaff_RDI + 1);
  *(int32_t *)(lVar1 + 0x2c) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



int64_t FUN_1803a6d7c(void)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)FUN_1803a6db0();
  return *plVar1 + 0x2c;
}



int64_t FUN_1803a6d94(void)

{
  int64_t unaff_RBX;
  
  return unaff_RBX + 0x2c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803a6db0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,int *param_4)

{
  bool bVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  
  bVar1 = true;
  puVar5 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar2 = (uint64_t *)param_1[2];
    do {
      puVar5 = puVar2;
      if (*param_4 < *(int *)(puVar5 + 4)) {
        puVar2 = (uint64_t *)puVar5[1];
        bVar1 = true;
      }
      else {
        if (*(int *)(puVar5 + 4) < *param_4) {
LAB_1803a6e19:
          bVar1 = false;
        }
        else {
          if (param_4[1] < *(int *)((int64_t)puVar5 + 0x24)) {
            puVar2 = (uint64_t *)puVar5[1];
            bVar1 = true;
            goto LAB_1803a6e1f;
          }
          if (*(int *)((int64_t)puVar5 + 0x24) < param_4[1]) goto LAB_1803a6e19;
          bVar1 = param_4[2] < *(int *)(puVar5 + 5);
          if (param_4[2] < *(int *)(puVar5 + 5)) {
            puVar2 = (uint64_t *)puVar5[1];
            goto LAB_1803a6e1f;
          }
        }
        puVar2 = (uint64_t *)*puVar5;
      }
LAB_1803a6e1f:
    } while (puVar2 != (uint64_t *)0x0);
  }
  puVar2 = puVar5;
  if (bVar1) {
    if (puVar5 != (uint64_t *)param_1[1]) {
      puVar2 = (uint64_t *)func_0x00018066b9a0(puVar5);
      goto LAB_1803a6e3d;
    }
  }
  else {
LAB_1803a6e3d:
    if (*param_4 <= *(int *)(puVar2 + 4)) {
      if (*param_4 < *(int *)(puVar2 + 4)) {
LAB_1803a6e5b:
        *param_2 = puVar2;
        *(int8_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if ((param_4[1] <= *(int *)((int64_t)puVar2 + 0x24)) &&
         ((param_4[1] < *(int *)((int64_t)puVar2 + 0x24) || (param_4[2] <= *(int *)(puVar2 + 5)))))
      goto LAB_1803a6e5b;
    }
  }
  if (puVar5 != param_1) {
    if (*(int *)(puVar5 + 4) <= *param_4) {
      if (*param_4 <= *(int *)(puVar5 + 4)) {
        if ((param_4[1] < *(int *)((int64_t)puVar5 + 0x24)) ||
           ((param_4[1] <= *(int *)((int64_t)puVar5 + 0x24) && (param_4[2] < *(int *)(puVar5 + 5)))
           )) goto LAB_1803a6ea6;
      }
      uVar4 = 1;
      goto LAB_1803a6ea8;
    }
  }
LAB_1803a6ea6:
  uVar4 = 0;
LAB_1803a6ea8:
  lVar3 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 5));
  *(uint64_t *)(lVar3 + 0x20) = *(uint64_t *)param_4;
  *(int *)(lVar3 + 0x28) = param_4[2];
  *(int32_t *)(lVar3 + 0x2c) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,puVar5,param_1,uVar4);
}






// 函数: void FUN_1803a6f10(int64_t *param_1,int64_t param_2)
void FUN_1803a6f10(int64_t *param_1,int64_t param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)(param_2 + 8);
  if (uVar1 != uVar2) {
    lVar5 = *param_1;
    lVar4 = *param_1;
    uVar6 = *(uint *)(param_1 + 1);
    while (uVar6 = uVar6 + 1, uVar6 != uVar2) {
      iVar3 = *(int *)(*(int64_t *)(lVar4 + 8 + (uint64_t)(uVar6 >> 0xb) * 8) +
                      (uint64_t)(uVar6 + (uVar6 >> 0xb) * -0x800) * 4);
      uVar7 = uVar6;
      uVar8 = uVar6;
      while (uVar8 != uVar1) {
        uVar8 = uVar8 - 1;
        if (iVar3 <= *(int *)(*(int64_t *)(lVar5 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) +
                             (uint64_t)(uVar8 & 0x7ff) * 4)) break;
        *(int32_t *)
         (*(int64_t *)(lVar5 + 8 + (uint64_t)(uVar7 >> 0xb) * 8) +
         (uint64_t)(uVar7 + (uVar7 >> 0xb) * -0x800) * 4) =
             *(int32_t *)
              (*(int64_t *)(lVar5 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) +
              (uint64_t)(uVar8 & 0x7ff) * 4);
        uVar7 = uVar7 - 1;
      }
      *(int *)(*(int64_t *)(lVar5 + 8 + (uint64_t)(uVar7 >> 0xb) * 8) +
              (uint64_t)(uVar7 + (uVar7 >> 0xb) * -0x800) * 4) = iVar3;
    }
  }
  return;
}






// 函数: void FUN_1803a6f4a(void)
void FUN_1803a6f4a(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBP;
  uint in_R11D;
  uint unaff_R14D;
  int64_t unaff_retaddr;
  uint uStackX_8;
  
  do {
    iVar1 = *(int *)(*(int64_t *)(unaff_retaddr + 8 + (uint64_t)(in_R11D >> 0xb) * 8) +
                    (uint64_t)(in_R11D + (in_R11D >> 0xb) * -0x800) * 4);
    uVar2 = uStackX_8;
    uVar3 = in_R11D;
    while (uVar3 != unaff_EBP) {
      uStackX_8 = uStackX_8 - 1;
      if (iVar1 <= *(int *)(*(int64_t *)(unaff_retaddr + 8 + (uint64_t)(uStackX_8 >> 0xb) * 8) +
                           (uint64_t)(uStackX_8 & 0x7ff) * 4)) break;
      *(int32_t *)
       (*(int64_t *)(unaff_retaddr + 8 + (uint64_t)(uVar2 >> 0xb) * 8) +
       (uint64_t)(uVar2 + (uVar2 >> 0xb) * -0x800) * 4) =
           *(int32_t *)
            (*(int64_t *)(unaff_retaddr + 8 + (uint64_t)(uStackX_8 >> 0xb) * 8) +
            (uint64_t)(uStackX_8 & 0x7ff) * 4);
      uVar2 = uVar2 - 1;
      uVar3 = uStackX_8;
    }
    in_R11D = in_R11D + 1;
    *(int *)(*(int64_t *)(unaff_retaddr + 8 + (uint64_t)(uVar2 >> 0xb) * 8) +
            (uint64_t)(uVar2 + (uVar2 >> 0xb) * -0x800) * 4) = iVar1;
    uStackX_8 = in_R11D;
    if (in_R11D == unaff_R14D) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1803a7044(void)
void FUN_1803a7044(void)

{
  return;
}






// 函数: void FUN_1803a7050(int64_t *param_1,int64_t param_2)
void FUN_1803a7050(int64_t *param_1,int64_t param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar7 = *param_1;
  lVar6 = *param_1;
  lVar5 = *param_1;
  uVar3 = *(uint *)(param_2 + 8);
  for (uVar9 = *(uint *)(param_1 + 1); uVar9 != uVar3; uVar9 = uVar9 + 1) {
    uVar1 = uVar9 - 1;
    iVar4 = *(int *)(*(int64_t *)(lVar5 + 8 + (uint64_t)(uVar9 >> 0xb) * 8) +
                    (uint64_t)(uVar9 + (uVar9 >> 0xb) * -0x800) * 4);
    iVar2 = *(int *)(*(int64_t *)(lVar7 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
                    (uint64_t)(uVar1 + (uVar1 >> 0xb) * -0x800) * 4);
    uVar8 = uVar9;
    while (iVar2 < iVar4) {
      uVar10 = uVar1 - 1;
      *(int32_t *)
       (*(int64_t *)(lVar6 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) +
       (uint64_t)(uVar8 + (uVar8 >> 0xb) * -0x800) * 4) =
           *(int32_t *)
            (*(int64_t *)(lVar7 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
            (uint64_t)(uVar1 + (uVar1 >> 0xb) * -0x800) * 4);
      uVar8 = uVar8 - 1;
      uVar1 = uVar10;
      iVar2 = *(int *)(*(int64_t *)(lVar7 + 8 + (uint64_t)(uVar10 >> 0xb) * 8) +
                      (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 4);
    }
    *(int *)(*(int64_t *)(lVar6 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) +
            (uint64_t)(uVar8 + (uVar8 >> 0xb) * -0x800) * 4) = iVar4;
  }
  return;
}






// 函数: void FUN_1803a7078(uint64_t param_1,uint64_t param_2)
void FUN_1803a7078(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  uint unaff_EBP;
  uint in_R10D;
  uint uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint in_XMM1_Dc;
  int32_t uStackX_10;
  int32_t uStackX_14;
  
  uVar7 = (int)param_2;
  uVar8 = (int)((uint64_t)param_2 >> 0x20);
  do {
    uVar1 = in_R10D - 1;
    lVar4 = CONCAT44(uVar8,uVar7);
    iVar3 = *(int *)(*(int64_t *)
                      (CONCAT44(uStackX_14,uStackX_10) + 8 + (uint64_t)(in_R10D >> 0xb) * 8) +
                    (uint64_t)(in_R10D + (in_R10D >> 0xb) * -0x800) * 4);
    iVar2 = *(int *)(*(int64_t *)(lVar4 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
                    (uint64_t)(uVar1 + (uVar1 >> 0xb) * -0x800) * 4);
    uVar5 = in_XMM1_Dc;
    while (iVar2 < iVar3) {
      uVar6 = uVar1 - 1;
      *(int32_t *)
       (*(int64_t *)(CONCAT44(uVar8,uVar7) + 8 + (uint64_t)(uVar5 >> 0xb) * 8) +
       (uint64_t)(uVar5 + (uVar5 >> 0xb) * -0x800) * 4) =
           *(int32_t *)
            (*(int64_t *)(lVar4 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
            (uint64_t)(uVar1 + (uVar1 >> 0xb) * -0x800) * 4);
      uVar5 = uVar5 - 1;
      uVar1 = uVar6;
      iVar2 = *(int *)(*(int64_t *)(lVar4 + 8 + (uint64_t)(uVar6 >> 0xb) * 8) +
                      (uint64_t)(uVar6 + (uVar6 >> 0xb) * -0x800) * 4);
    }
    in_XMM1_Dc = in_R10D + 1;
    *(int *)(*(int64_t *)(CONCAT44(uVar8,uVar7) + 8 + (uint64_t)(uVar5 >> 0xb) * 8) +
            (uint64_t)(uVar5 + (uVar5 >> 0xb) * -0x800) * 4) = iVar3;
    uVar7 = uStackX_10;
    uVar8 = uStackX_14;
    in_R10D = in_XMM1_Dc;
  } while (in_XMM1_Dc != unaff_EBP);
  return;
}






// 函数: void FUN_1803a7185(void)
void FUN_1803a7185(void)

{
  return;
}






// 函数: void FUN_1803a7190(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_1803a7190(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int iVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint64_t uVar14;
  uint uVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  uint uStack_80;
  int32_t uStack_7c;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  lVar17 = (int64_t)(int)param_2[1];
  uVar14 = (uint64_t)(int)param_1[1];
  lVar16 = lVar17 - uVar14;
  do {
    if ((lVar16 < 0x1d) || (param_3 < 1)) {
      if (param_3 == 0) {
        lStack_68 = *param_2;
        lStack_60 = param_2[1];
        uStack_48 = (int32_t)*param_1;
        uStack_44 = *(int32_t *)((int64_t)param_1 + 4);
        uStack_40 = (int32_t)param_1[1];
        uStack_3c = *(int32_t *)((int64_t)param_1 + 0xc);
        lStack_58 = lStack_68;
        lStack_50 = lStack_60;
        FUN_1803a7400(&uStack_48,&lStack_58,&lStack_68,param_4);
      }
      return;
    }
    uVar15 = (int)lVar17 - 1;
    uVar11 = uVar15 >> 0xb;
    iVar13 = (int)uVar14;
    uVar8 = (int)(((int64_t)(int)lVar17 - (int64_t)iVar13) / 2) + iVar13;
    uVar12 = uVar8 >> 0xb;
    uVar14 = uVar14 >> 0xb & 0x1fffff;
    iVar9 = *(int *)(*(int64_t *)(*param_1 + 8 + (uint64_t)uVar12 * 8) +
                    (uint64_t)(uVar8 + uVar12 * -0x800) * 4);
    iVar13 = *(int *)(*(int64_t *)(*param_1 + 8 + uVar14 * 8) +
                     (uint64_t)(uint)(iVar13 + (int)uVar14 * -0x800) * 4);
    iVar3 = *(int *)(*(int64_t *)(*param_2 + 8 + (uint64_t)uVar11 * 8) +
                    (uint64_t)(uVar15 + uVar11 * -0x800) * 4);
    if (iVar9 < iVar13) {
      iVar10 = iVar9;
      if (iVar9 <= iVar3) {
        iVar5 = iVar13 - iVar3;
        iVar9 = iVar13;
LAB_1803a7267:
        iVar10 = iVar9;
        if (iVar9 != iVar3 && SBORROW4(iVar9,iVar3) == iVar5 < 0) {
          iVar10 = iVar3;
        }
      }
    }
    else {
      iVar10 = iVar13;
      if (iVar13 <= iVar3) {
        iVar5 = iVar9 - iVar3;
        goto LAB_1803a7267;
      }
    }
    uStack_88 = (int32_t)*param_2;
    uStack_84 = *(int32_t *)((int64_t)param_2 + 4);
    lVar17 = *param_2;
    uStack_80 = *(uint *)(param_2 + 1);
    uStack_7c = *(int32_t *)((int64_t)param_2 + 0xc);
    lVar7 = *param_1;
    lVar16 = *param_1;
    uStack_90 = *(uint *)(param_1 + 1);
    uVar6 = *(int32_t *)((int64_t)param_1 + 0xc);
    uVar8 = uStack_80;
    while( true ) {
      while( true ) {
        uVar11 = uStack_90 >> 0xb;
        if (*(int *)(*(int64_t *)(lVar16 + 8 + (uint64_t)uVar11 * 8) +
                    (uint64_t)(uStack_90 + uVar11 * -0x800) * 4) <= iVar10) break;
        uStack_90 = uStack_90 + 1;
      }
      uVar8 = uVar8 - 1;
      iVar9 = *(int *)(*(int64_t *)(lVar17 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) +
                      (uint64_t)(uVar8 + (uVar8 >> 0xb) * -0x800) * 4);
      while (iVar9 < iVar10) {
        uVar8 = uVar8 - 1;
        iVar9 = *(int *)(*(int64_t *)(lVar17 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) +
                        (uint64_t)(uVar8 + (uVar8 >> 0xb) * -0x800) * 4);
      }
      if ((int)uVar8 <= (int)uStack_90) break;
      uVar12 = uStack_90 + uVar11 * -0x800;
      uStack_90 = uStack_90 + 1;
      puVar1 = (int32_t *)
               (*(int64_t *)(lVar17 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) +
               (uint64_t)(uVar8 + (uVar8 >> 0xb) * -0x800) * 4);
      puVar2 = (int32_t *)
               (*(int64_t *)(lVar16 + 8 + (uint64_t)uVar11 * 8) + (uint64_t)uVar12 * 4);
      uVar4 = *puVar2;
      *puVar2 = *puVar1;
      *puVar1 = uVar4;
    }
    lVar17 = CONCAT44(uVar6,uStack_90);
    param_3 = param_3 + -1;
    lStack_78 = lVar7;
    lStack_70 = lVar17;
    FUN_1803a7190(&lStack_78,&uStack_88,param_3,param_4);
    uVar14 = (uint64_t)(int)param_1[1];
    *param_2 = lVar7;
    param_2[1] = lVar17;
    lVar17 = (int64_t)(int)param_2[1];
    lVar16 = lVar17 - uVar14;
  } while( true );
}






// 函数: void FUN_1803a71a7(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,
void FUN_1803a71a7(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,int64_t param_8,
                  int64_t param_9,int64_t param_10,int64_t param_11,int64_t param_12,
                  int64_t param_13,int32_t param_14,int32_t param_15)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int iVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int64_t in_RAX;
  uint uVar13;
  uint uVar14;
  int8_t unaff_BL;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar15;
  uint64_t unaff_RDI;
  uint64_t uVar16;
  uint uVar17;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t uStack0000000000000074;
  int32_t uStack000000000000007c;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  uVar16 = (uint64_t)(int)param_1[1];
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  if (0x1c < (int64_t)(in_R11 - uVar16)) {
    *(uint64_t *)(in_RAX + 8) = unaff_RBP;
    *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
    *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
    *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
    *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
    *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
    *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
    do {
      if (param_3 < 1) break;
      uVar17 = (int)in_R11 - 1;
      uVar13 = uVar17 >> 0xb;
      iVar15 = (int)uVar16;
      uVar10 = (int)(((int64_t)(int)in_R11 - (int64_t)iVar15) / 2) + iVar15;
      uVar14 = uVar10 >> 0xb;
      uVar16 = uVar16 >> 0xb & 0x1fffff;
      iVar11 = *(int *)(*(int64_t *)(*param_1 + 8 + (uint64_t)uVar14 * 8) +
                       (uint64_t)(uVar10 + uVar14 * -0x800) * 4);
      iVar15 = *(int *)(*(int64_t *)(*param_1 + 8 + uVar16 * 8) +
                       (uint64_t)(uint)(iVar15 + (int)uVar16 * -0x800) * 4);
      iVar3 = *(int *)(*(int64_t *)(*param_2 + 8 + (uint64_t)uVar13 * 8) +
                      (uint64_t)(uVar17 + uVar13 * -0x800) * 4);
      if (iVar11 < iVar15) {
        iVar12 = iVar11;
        if (iVar11 <= iVar3) {
          iVar5 = iVar15 - iVar3;
          iVar11 = iVar15;
LAB_1803a7267:
          iVar12 = iVar11;
          if (iVar11 != iVar3 && SBORROW4(iVar11,iVar3) == iVar5 < 0) {
            iVar12 = iVar3;
          }
        }
      }
      else {
        iVar12 = iVar15;
        if (iVar15 <= iVar3) {
          iVar5 = iVar11 - iVar3;
          goto LAB_1803a7267;
        }
      }
      param_6._0_4_ = (int32_t)*param_2;
      param_6._4_4_ = *(int32_t *)((int64_t)param_2 + 4);
      lVar7 = *param_2;
      param_7._0_4_ = *(uint *)(param_2 + 1);
      param_7._4_4_ = *(int32_t *)((int64_t)param_2 + 0xc);
      lVar9 = *param_1;
      lVar8 = *param_1;
      param_5._0_4_ = *(uint *)(param_1 + 1);
      uVar6 = *(int32_t *)((int64_t)param_1 + 0xc);
      uVar10 = (uint)param_7;
      while( true ) {
        while( true ) {
          uVar13 = (uint)param_5 >> 0xb;
          if (*(int *)(*(int64_t *)(lVar8 + 8 + (uint64_t)uVar13 * 8) +
                      (uint64_t)((uint)param_5 + uVar13 * -0x800) * 4) <= iVar12) break;
          param_5._0_4_ = (uint)param_5 + 1;
        }
        uVar10 = uVar10 - 1;
        iVar11 = *(int *)(*(int64_t *)(lVar7 + 8 + (uint64_t)(uVar10 >> 0xb) * 8) +
                         (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 4);
        while (iVar11 < iVar12) {
          uVar10 = uVar10 - 1;
          iVar11 = *(int *)(*(int64_t *)(lVar7 + 8 + (uint64_t)(uVar10 >> 0xb) * 8) +
                           (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 4);
        }
        if ((int)uVar10 <= (int)(uint)param_5) break;
        uVar14 = (uint)param_5 + uVar13 * -0x800;
        param_5._0_4_ = (uint)param_5 + 1;
        puVar1 = (int32_t *)
                 (*(int64_t *)(lVar7 + 8 + (uint64_t)(uVar10 >> 0xb) * 8) +
                 (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 4);
        puVar2 = (int32_t *)
                 (*(int64_t *)(lVar8 + 8 + (uint64_t)uVar13 * 8) + (uint64_t)uVar14 * 4);
        uVar4 = *puVar2;
        *puVar2 = *puVar1;
        *puVar1 = uVar4;
      }
      lVar7 = CONCAT44(uVar6,(uint)param_5);
      param_3 = param_3 + -1;
      param_8 = lVar9;
      param_9 = lVar7;
      FUN_1803a7190(&param_8,&param_6,param_3,unaff_BL);
      uVar16 = (uint64_t)(int)param_1[1];
      *param_2 = lVar9;
      param_2[1] = lVar7;
      in_R11 = (int64_t)(int)param_2[1];
    } while (0x1c < (int64_t)(in_R11 - uVar16));
  }
  if (param_3 == 0) {
    param_10 = *param_2;
    param_11 = param_2[1];
    param_14 = (int32_t)*param_1;
    uStack0000000000000074 = *(int32_t *)((int64_t)param_1 + 4);
    param_15 = (int32_t)param_1[1];
    uStack000000000000007c = *(int32_t *)((int64_t)param_1 + 0xc);
    param_12 = param_10;
    param_13 = param_11;
    FUN_1803a7400(&param_14,&param_12,&param_10,unaff_BL);
  }
  return;
}






// 函数: void FUN_1803a71cc(void)
void FUN_1803a71cc(void)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int iVar3;
  int32_t uVar4;
  int iVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int64_t in_RAX;
  uint uVar13;
  uint64_t uVar14;
  uint uVar15;
  int8_t unaff_BL;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar16;
  uint64_t unaff_RDI;
  uint uVar17;
  int64_t in_R11;
  int64_t unaff_R12;
  int64_t *unaff_R13;
  uint64_t unaff_R14;
  int64_t *unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint uStack0000000000000028;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  uint uStack0000000000000038;
  int32_t uStack000000000000003c;
  int64_t in_stack_00000040;
  int64_t in_stack_00000048;
  int64_t in_stack_00000050;
  int64_t in_stack_00000058;
  int64_t in_stack_00000060;
  int64_t in_stack_00000068;
  int32_t in_stack_00000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  int32_t uStack000000000000007c;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R14;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  do {
    if (unaff_R12 < 1) break;
    uVar17 = (int)in_R11 - 1;
    uVar13 = uVar17 >> 0xb;
    iVar16 = (int)unaff_RDI;
    uVar10 = (int)(((int64_t)(int)in_R11 - (int64_t)iVar16) / 2) + iVar16;
    uVar15 = uVar10 >> 0xb;
    uVar14 = unaff_RDI >> 0xb & 0x1fffff;
    iVar11 = *(int *)(*(int64_t *)(*unaff_R13 + 8 + (uint64_t)uVar15 * 8) +
                     (uint64_t)(uVar10 + uVar15 * -0x800) * 4);
    iVar16 = *(int *)(*(int64_t *)(*unaff_R13 + 8 + uVar14 * 8) +
                     (uint64_t)(uint)(iVar16 + (int)uVar14 * -0x800) * 4);
    iVar3 = *(int *)(*(int64_t *)(*unaff_R15 + 8 + (uint64_t)uVar13 * 8) +
                    (uint64_t)(uVar17 + uVar13 * -0x800) * 4);
    if (iVar11 < iVar16) {
      iVar12 = iVar11;
      if (iVar11 <= iVar3) {
        iVar5 = iVar16 - iVar3;
        iVar11 = iVar16;
LAB_1803a7267:
        iVar12 = iVar11;
        if (iVar11 != iVar3 && SBORROW4(iVar11,iVar3) == iVar5 < 0) {
          iVar12 = iVar3;
        }
      }
    }
    else {
      iVar12 = iVar16;
      if (iVar16 <= iVar3) {
        iVar5 = iVar11 - iVar3;
        goto LAB_1803a7267;
      }
    }
    uStack0000000000000030 = (int32_t)*unaff_R15;
    uStack0000000000000034 = *(int32_t *)((int64_t)unaff_R15 + 4);
    lVar7 = *unaff_R15;
    uStack0000000000000038 = *(uint *)(unaff_R15 + 1);
    uStack000000000000003c = *(int32_t *)((int64_t)unaff_R15 + 0xc);
    lVar9 = *unaff_R13;
    lVar8 = *unaff_R13;
    uStack0000000000000028 = *(uint *)(unaff_R13 + 1);
    uVar6 = *(int32_t *)((int64_t)unaff_R13 + 0xc);
    uVar10 = uStack0000000000000038;
    while( true ) {
      while( true ) {
        uVar13 = uStack0000000000000028 >> 0xb;
        if (*(int *)(*(int64_t *)(lVar8 + 8 + (uint64_t)uVar13 * 8) +
                    (uint64_t)(uStack0000000000000028 + uVar13 * -0x800) * 4) <= iVar12) break;
        uStack0000000000000028 = uStack0000000000000028 + 1;
      }
      uVar10 = uVar10 - 1;
      iVar11 = *(int *)(*(int64_t *)(lVar7 + 8 + (uint64_t)(uVar10 >> 0xb) * 8) +
                       (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 4);
      while (iVar11 < iVar12) {
        uVar10 = uVar10 - 1;
        iVar11 = *(int *)(*(int64_t *)(lVar7 + 8 + (uint64_t)(uVar10 >> 0xb) * 8) +
                         (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 4);
      }
      if ((int)uVar10 <= (int)uStack0000000000000028) break;
      uVar15 = uStack0000000000000028 + uVar13 * -0x800;
      uStack0000000000000028 = uStack0000000000000028 + 1;
      puVar1 = (int32_t *)
               (*(int64_t *)(lVar7 + 8 + (uint64_t)(uVar10 >> 0xb) * 8) +
               (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 4);
      puVar2 = (int32_t *)
               (*(int64_t *)(lVar8 + 8 + (uint64_t)uVar13 * 8) + (uint64_t)uVar15 * 4);
      uVar4 = *puVar2;
      *puVar2 = *puVar1;
      *puVar1 = uVar4;
    }
    lVar7 = CONCAT44(uVar6,uStack0000000000000028);
    unaff_R12 = unaff_R12 + -1;
    in_stack_00000040 = lVar9;
    in_stack_00000048 = lVar7;
    FUN_1803a7190(&stack0x00000040,&stack0x00000030,unaff_R12,unaff_BL);
    unaff_RDI = (uint64_t)(int)unaff_R13[1];
    *unaff_R15 = lVar9;
    unaff_R15[1] = lVar7;
    in_R11 = (int64_t)(int)unaff_R15[1];
  } while (0x1c < (int64_t)(in_R11 - unaff_RDI));
  if (unaff_R12 == 0) {
    in_stack_00000050 = *unaff_R15;
    in_stack_00000058 = unaff_R15[1];
    in_stack_00000070 = (int32_t)*unaff_R13;
    uStack0000000000000074 = *(int32_t *)((int64_t)unaff_R13 + 4);
    in_stack_00000078 = (int32_t)unaff_R13[1];
    uStack000000000000007c = *(int32_t *)((int64_t)unaff_R13 + 0xc);
    in_stack_00000060 = in_stack_00000050;
    in_stack_00000068 = in_stack_00000058;
    FUN_1803a7400(&stack0x00000070,&stack0x00000060,&stack0x00000050,unaff_BL);
  }
  return;
}






// 函数: void FUN_1803a73ae(void)
void FUN_1803a73ae(void)

{
  int8_t unaff_BL;
  int64_t unaff_R12;
  int32_t *unaff_R13;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  if (unaff_R12 == 0) {
    uStack0000000000000050 = *unaff_R15;
    uStack0000000000000058 = unaff_R15[1];
    uStack0000000000000070 = *unaff_R13;
    uStack0000000000000074 = unaff_R13[1];
    uStack0000000000000078 = unaff_R13[2];
    uStack000000000000007c = unaff_R13[3];
    uStack0000000000000060 = uStack0000000000000050;
    uStack0000000000000068 = uStack0000000000000058;
    FUN_1803a7400(&stack0x00000070,&stack0x00000060,&stack0x00000050,unaff_BL);
  }
  return;
}






// 函数: void FUN_1803a73c3(void)
void FUN_1803a73c3(void)

{
  int8_t unaff_BL;
  int32_t *unaff_R13;
  uint64_t *unaff_R15;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  int32_t uStack000000000000007c;
  
  uStack0000000000000050 = *unaff_R15;
  uStack0000000000000058 = unaff_R15[1];
  uStack0000000000000070 = *unaff_R13;
  uStack0000000000000074 = unaff_R13[1];
  uStack0000000000000078 = unaff_R13[2];
  uStack000000000000007c = unaff_R13[3];
  uStack0000000000000060 = uStack0000000000000050;
  uStack0000000000000068 = uStack0000000000000058;
  FUN_1803a7400(&stack0x00000070,&stack0x00000060,&stack0x00000050,unaff_BL);
  return;
}






// 函数: void FUN_1803a7400(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_1803a7400(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  int64_t lVar9;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [2];
  int64_t lStackX_18;
  int32_t auStackX_20 [2];
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar6 = (int64_t)(int)param_2[1] - (int64_t)(int)lVar1;
  if (1 < lVar6) {
    lVar7 = (lVar6 + -2 >> 1) + 1;
    do {
      lStack_78 = *param_1;
      lStack_70 = param_1[1];
      lVar7 = lVar7 + -1;
      uVar5 = (int)lVar7 + (int)lVar1;
      uVar4 = uVar5 >> 0xb;
      auStackX_20[0] =
           *(int32_t *)
            (*(int64_t *)(lVar3 + 8 + (uint64_t)uVar4 * 8) +
            (uint64_t)(uVar5 + uVar4 * -0x800) * 4);
      FUN_1803a76b0(&lStack_78,lVar7,lVar6,lVar7,auStackX_20,param_4);
    } while (lVar7 != 0);
  }
  lVar3 = *param_2;
  uVar4 = *(uint *)(param_2 + 1);
  lStack_70 = param_2[1];
  iVar2 = *(int *)(param_3 + 8);
  lStack_78 = lVar3;
  if ((int)uVar4 < iVar2) {
    uVar5 = *(uint *)(param_1 + 1);
    lVar6 = *param_1;
    lStackX_18 = (uint64_t)(uVar5 >> 0xb) * 8;
    lVar1 = (uint64_t)(uVar5 - (uVar5 & 0xfffff800)) * 4;
    do {
      uVar8 = uVar4 >> 0xb;
      if (*(int *)(*(int64_t *)(lStackX_18 + 8 + lVar6) + lVar1) <
          *(int *)(*(int64_t *)(lVar3 + 8 + (uint64_t)uVar8 * 8) +
                  (uint64_t)(uVar4 + uVar8 * -0x800) * 4)) {
        lStack_68 = *param_1;
        lStack_60 = param_1[1];
        lVar7 = param_2[1];
        auStackX_8[0] =
             *(int32_t *)
              (*(int64_t *)(lVar3 + 8 + (uint64_t)uVar8 * 8) +
              (uint64_t)(uVar4 + uVar8 * -0x800) * 4);
        *(int32_t *)
         (*(int64_t *)(lVar3 + 8 + (uint64_t)uVar8 * 8) + (uint64_t)(uVar4 + uVar8 * -0x800) * 4)
             = *(int32_t *)(*(int64_t *)(lStackX_18 + 8 + lVar6) + lVar1);
        FUN_1803a76b0(&lStack_68,0,(int64_t)(int)lVar7 - (int64_t)(int)uVar5,0,auStackX_8,param_4)
        ;
        lVar6 = *param_1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar2);
  }
  lVar3 = *param_2;
  uVar4 = *(uint *)(param_2 + 1);
  lStack_60 = param_2[1];
  lVar1 = param_1[1];
  if (1 < (int64_t)(int)uVar4 - (int64_t)(int)lVar1) {
    lVar7 = *param_1;
    lVar9 = param_1[1];
    uVar5 = (uint)lVar9;
    lVar6 = lVar7 + (uint64_t)(uVar5 >> 0xb) * 8;
    lStack_68 = lVar3;
    do {
      uVar8 = uVar4 - 1;
      auStackX_10[0] =
           *(int32_t *)
            (*(int64_t *)(lVar3 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) +
            (uint64_t)(uVar8 & 0x7ff) * 4);
      *(int32_t *)
       (*(int64_t *)(lVar3 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) + (uint64_t)(uVar8 & 0x7ff) * 4) =
           *(int32_t *)
            (*(int64_t *)(lVar6 + 8) + (uint64_t)(uVar5 + (uVar5 >> 0xb) * -0x800) * 4);
      lStack_58 = lVar7;
      lStack_50 = lVar9;
      FUN_1803a76b0(&lStack_58,0,((int64_t)(int)uVar4 - (int64_t)(int)uVar5) + -1,0,auStackX_10,
                    param_4);
      uVar4 = uVar8;
    } while (1 < (int64_t)(int)uVar8 - (int64_t)(int)lVar1);
  }
  return;
}






