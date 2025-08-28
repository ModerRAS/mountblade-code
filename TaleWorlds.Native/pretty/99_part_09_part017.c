#include "TaleWorlds.Native.Split.h"

// 99_part_09_part017.c - 7 个函数

// 函数: void FUN_1805c4fc0(int64_t *param_1,int64_t *param_2,int8_t *param_3)
void FUN_1805c4fc0(int64_t *param_1,int64_t *param_2,int8_t *param_3)

{
  uint64_t uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint uVar5;
  
  lVar3 = *param_1;
  *param_3 = 1;
  if (*(int *)(lVar3 + 0x564) != -1) {
    if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
      plVar4 = *(int64_t **)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
      param_1[0x15] = (int64_t)plVar4;
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
    }
    else {
      plVar4 = (int64_t *)param_1[0x15];
    }
    if (((((plVar4 != (int64_t *)0x0) &&
          (uVar1 = *(uint64_t *)((int64_t)(int)plVar4[0x1e] * 0xa0 + 0x50 + plVar4[0x1a]),
          ((byte)uVar1 >> 1 & 1) != 0)) && ((uVar1 >> 8 & 1) == 0)) &&
        ((*plVar4 != 0 && (0 < *(short *)(*plVar4 + 8))))) || (0 < *(int *)(*param_1 + 0x638))) {
      if ((char)param_1[0x438] == '\0') {
        iVar2 = *(int *)((int64_t)param_1 + 0x14b4);
      }
      else {
        iVar2 = *(int *)((int64_t)param_1 + 0x21c4);
      }
      if (((-1 < iVar2) &&
          (lVar3 = *(int64_t *)((int64_t)iVar2 * 0xa60 + 0x3778 + param_1[0x291]), lVar3 != 0)) &&
         (*(char *)(lVar3 + 0x8be) != '\0')) {
        lVar3 = *param_1;
        uVar5 = *(uint *)(param_1 + 2);
        if ((uVar5 >> 0xc & 1) == 0) {
          FUN_1805d4df0(param_1 + 1);
          lVar3 = *param_1;
          uVar5 = *(uint *)(param_1 + 2);
        }
        if ((uVar5 & 1) == 0) {
          FUN_1805d3210(param_1 + 1);
          lVar3 = *param_1;
        }
        uVar5 = *(uint *)(*(int64_t *)(lVar3 + 0x20) + 0x34);
        FUN_1805b6c30(param_1 + 1,uVar5);
                    // WARNING: Subroutine does not return
        AdvancedSystemController(uVar5 ^ 0x80000000);
      }
      goto LAB_1805c54bd;
    }
  }
  *(int32_t *)(param_1 + 0x277) = 0;
  *param_3 = 0;
  param_1[0x273] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x274] * 8);
LAB_1805c54bd:
  *param_2 = param_1[0x38];
  lVar3 = param_1[0x3c];
  param_2[3] = param_1[0x3b];
  param_2[4] = lVar3;
  lVar3 = param_1[0x3e];
  param_2[5] = param_1[0x3d];
  param_2[6] = lVar3;
  param_2[1] = param_1[0x39];
  param_2[2] = param_1[0x3a];
  param_2[7] = param_1[0x3f];
  *(int *)(param_2 + 8) = (int)param_1[0x40];
  return;
}






// 函数: void FUN_1805c50cd(int64_t param_1,uint param_2)
void FUN_1805c50cd(int64_t param_1,uint param_2)

{
  int64_t *unaff_RDI;
  uint uVar1;
  
  if ((param_2 >> 0xc & 1) == 0) {
    FUN_1805d4df0(unaff_RDI + 1);
    param_1 = *unaff_RDI;
    param_2 = *(uint *)(unaff_RDI + 2);
  }
  if ((param_2 & 1) == 0) {
    FUN_1805d3210(unaff_RDI + 1);
    param_1 = *unaff_RDI;
  }
  uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x20) + 0x34);
  FUN_1805b6c30(unaff_RDI + 1,uVar1);
                    // WARNING: Subroutine does not return
  AdvancedSystemController(uVar1 ^ 0x80000000);
}






// 函数: void FUN_1805c50e5(int64_t param_1,uint param_2)
void FUN_1805c50e5(int64_t param_1,uint param_2)

{
  int64_t *unaff_RDI;
  uint uVar1;
  
  if ((param_2 >> 0xc & 1) == 0) {
    FUN_1805d4df0(unaff_RDI + 1);
    param_1 = *unaff_RDI;
    param_2 = *(uint *)(unaff_RDI + 2);
  }
  if ((param_2 & 1) == 0) {
    FUN_1805d3210(unaff_RDI + 1);
    param_1 = *unaff_RDI;
  }
  uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x20) + 0x34);
  FUN_1805b6c30(unaff_RDI + 1,uVar1);
                    // WARNING: Subroutine does not return
  AdvancedSystemController(uVar1 ^ 0x80000000);
}






// 函数: void FUN_1805c5331(void)
void FUN_1805c5331(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  uint64_t uVar6;
  char cVar7;
  float *pfVar8;
  uint64_t *puVar9;
  int64_t *unaff_RDI;
  uint64_t *unaff_R14;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float in_stack_00000120;
  float fStack0000000000000124;
  
  func_0x0001805d4cd0(unaff_RDI + 1);
  lVar5 = *(int64_t *)(unaff_RDI[0x1d] + 0x20);
  pfVar8 = (float *)FUN_1805b6c30(unaff_RDI + 1);
  fVar1 = *pfVar8;
  fVar2 = pfVar8[1];
  fVar3 = *(float *)(lVar5 + 0xc);
  fVar4 = *(float *)(lVar5 + 0x10);
  if ((*(byte *)(unaff_RDI + 2) & 1) == 0) {
    FUN_1805d3210(unaff_RDI + 1);
  }
  in_stack_00000120 =
       (((fVar1 + fVar3) - unaff_XMM11_Da * *(float *)(unaff_RDI + 0xc)) +
       unaff_XMM12_Da * unaff_XMM13_Da * 3.0) - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0xc);
  fStack0000000000000124 =
       (((fVar2 + fVar4) - unaff_XMM11_Da * *(float *)((int64_t)unaff_RDI + 100)) +
       unaff_XMM10_Da * unaff_XMM13_Da * 3.0) - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x10);
  cVar7 = FUN_1805d94e0(unaff_RDI + 0x2f,&stack0x00000120,0x3dcccccd,0x3dcccccd,1);
  if (cVar7 == '\0') {
    if ((*(uint *)(unaff_RDI + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RDI + 1);
    }
    puVar9 = (uint64_t *)FUN_180516f50(unaff_RDI[0x1d],&stack0x00000040);
    *unaff_R14 = *puVar9;
    uVar6 = puVar9[4];
    unaff_R14[3] = puVar9[3];
    unaff_R14[4] = uVar6;
    uVar6 = puVar9[6];
    unaff_R14[5] = puVar9[5];
    unaff_R14[6] = uVar6;
    unaff_R14[1] = puVar9[1];
    unaff_R14[2] = puVar9[2];
    unaff_R14[7] = puVar9[7];
    *(int32_t *)(unaff_R14 + 8) = *(int32_t *)(puVar9 + 8);
  }
  return;
}






// 函数: void FUN_1805c536f(void)
void FUN_1805c536f(void)

{
  uint64_t uVar1;
  char cVar2;
  uint64_t *puVar3;
  int64_t *unaff_RDI;
  uint64_t *unaff_R14;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float in_stack_00000120;
  float fStack0000000000000124;
  
  FUN_1805d3210(unaff_RDI + 1);
  in_stack_00000120 =
       ((unaff_XMM6_Da - unaff_XMM11_Da * *(float *)(unaff_RDI + 0xc)) +
       unaff_XMM12_Da * unaff_XMM13_Da * 3.0) - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0xc);
  fStack0000000000000124 =
       ((unaff_XMM7_Da - unaff_XMM11_Da * *(float *)((int64_t)unaff_RDI + 100)) +
       unaff_XMM10_Da * unaff_XMM13_Da * 3.0) - *(float *)(*(int64_t *)(*unaff_RDI + 0x20) + 0x10);
  cVar2 = FUN_1805d94e0(unaff_RDI + 0x2f,&stack0x00000120,0x3dcccccd,0x3dcccccd,1);
  if (cVar2 == '\0') {
    if ((*(uint *)(unaff_RDI + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RDI + 1);
    }
    puVar3 = (uint64_t *)FUN_180516f50(unaff_RDI[0x1d],&stack0x00000040);
    *unaff_R14 = *puVar3;
    uVar1 = puVar3[4];
    unaff_R14[3] = puVar3[3];
    unaff_R14[4] = uVar1;
    uVar1 = puVar3[6];
    unaff_R14[5] = puVar3[5];
    unaff_R14[6] = uVar1;
    unaff_R14[1] = puVar3[1];
    unaff_R14[2] = puVar3[2];
    unaff_R14[7] = puVar3[7];
    *(int32_t *)(unaff_R14 + 8) = *(int32_t *)(puVar3 + 8);
  }
  return;
}






// 函数: void FUN_1805c543e(void)
void FUN_1805c543e(void)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t unaff_RDI;
  uint64_t *unaff_R14;
  
  if ((*(uint *)(unaff_RDI + 0x10) & 0x200) == 0) {
    func_0x0001805d4cd0(unaff_RDI + 8);
  }
  puVar2 = (uint64_t *)FUN_180516f50(*(uint64_t *)(unaff_RDI + 0xe8),&stack0x00000040);
  *unaff_R14 = *puVar2;
  uVar1 = puVar2[4];
  unaff_R14[3] = puVar2[3];
  unaff_R14[4] = uVar1;
  uVar1 = puVar2[6];
  unaff_R14[5] = puVar2[5];
  unaff_R14[6] = uVar1;
  unaff_R14[1] = puVar2[1];
  unaff_R14[2] = puVar2[2];
  unaff_R14[7] = puVar2[7];
  *(int32_t *)(unaff_R14 + 8) = *(int32_t *)(puVar2 + 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805c5520(int64_t *param_1,int64_t *param_2,int8_t *param_3)
void FUN_1805c5520(int64_t *param_1,int64_t *param_2,int8_t *param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  char cVar7;
  int iVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  float *pfVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  int8_t auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fStackX_8;
  float fStackX_c;
  float fStackX_20;
  float fStackX_24;
  float fStack_c8;
  float fStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int64_t *aplStack_b8 [2];
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int8_t uStack_84;
  
  lVar12 = *param_1;
  lVar14 = param_1[0x438];
  if (*(int *)(lVar12 + 0x564) == -1) {
    *(int32_t *)(param_1 + 0x284) = 0;
    if ((char)lVar14 == '\0') {
      iVar8 = *(int *)((int64_t)param_1 + 0x14b4);
    }
    else {
      iVar8 = *(int *)((int64_t)param_1 + 0x21c4);
    }
    if (((-1 < iVar8) &&
        (lVar14 = *(int64_t *)((int64_t)iVar8 * 0xa60 + 0x3778 + param_1[0x291]), lVar14 != 0)) &&
       (*(char *)(lVar14 + 0x8be) != '\0')) {
      if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
        func_0x0001805d4cd0(param_1 + 1);
      }
      FUN_1805d9040(param_1 + 0x2f,*(int32_t *)(param_1[0x1d] + 0x10));
      *(int32_t *)(param_1 + 0x277) = 0;
      return;
    }
    lVar14 = *(int64_t *)(lVar12 + 0x9d8);
    lVar1 = *(int64_t *)(lVar12 + 0x20);
    if ((lVar14 == 0) || (cVar7 = FUN_18038d0a0(lVar14,lVar1 + 0xc), lVar13 = lVar14, cVar7 == '\0')
       ) {
      lVar13 = 0;
    }
    lVar4 = *(int64_t *)(lVar1 + 0xc);
    lVar5 = *(int64_t *)(lVar1 + 0x14);
    lVar6 = *(int64_t *)(lVar1 + 0xb0);
    lVar1 = *(int64_t *)(lVar1 + 0xb8);
    *param_2 = *(int64_t *)(*(int64_t *)(lVar12 + 0x8d8) + 0x18);
    param_2[3] = lVar4;
    param_2[4] = lVar5;
    param_2[1] = lVar13;
    param_2[5] = lVar6;
    param_2[6] = lVar1;
    param_2[2] = lVar14;
    param_2[7] = lVar4;
    *(int32_t *)(param_2 + 8) = 3;
    *(int32_t *)(param_1 + 0x277) = 0;
    return;
  }
  *param_3 = 1;
  if ((char)lVar14 == '\0') {
    iVar8 = *(int *)((int64_t)param_1 + 0x14b4);
  }
  else {
    iVar8 = *(int *)((int64_t)param_1 + 0x21c4);
  }
  if (-1 < iVar8) {
    lVar14 = param_1[0x291];
    lVar1 = *(int64_t *)((int64_t)iVar8 * 0xa60 + 0x3778 + lVar14);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x8be) != '\0')) {
      if ((int)param_1[0x284] == 0) {
        if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(param_1 + 1);
        }
        lVar12 = param_1[0x1d];
        if (lVar12 != 0) {
          if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
            func_0x0001805d4cd0(param_1 + 1);
            lVar12 = param_1[0x1d];
          }
          cVar7 = FUN_1805dbed0(param_1 + 0x2f,lVar12);
          if (cVar7 == '\0') goto LAB_1805c5c98;
        }
        *(int32_t *)((int64_t)param_1 + 0x12dc) = 0xffffffff;
        func_0x0001805da580();
        *(int32_t *)(param_1 + 0x284) = 1;
        *(int32_t *)(param_1 + 0x285) = 0;
        param_1[0x278] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x279] * 8);
      }
      else if ((int)param_1[0x284] == 2) {
        if (*(char *)((int64_t)param_1 + 0x12f4) == '\0') {
          lVar12 = *(int64_t *)(lVar12 + 0x20);
          fVar19 = *(float *)((int64_t)param_1 + 0x1dc) - *(float *)(lVar12 + 0x10);
          fVar17 = *(float *)(param_1 + 0x3b) - *(float *)(lVar12 + 0xc);
          if ((*(float *)(lVar12 + 0x84) * *(float *)(lVar12 + 0x84) * 1.5625 <=
               fVar19 * fVar19 + fVar17 * fVar17) &&
             ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x279] * 8) -
                     param_1[0x278]) * 1e-05 <= 8.0)) {
            *param_2 = param_1[0x38];
            lVar12 = param_1[0x3c];
            param_2[3] = param_1[0x3b];
            param_2[4] = lVar12;
            lVar12 = param_1[0x3e];
            param_2[5] = param_1[0x3d];
            param_2[6] = lVar12;
            param_2[1] = param_1[0x39];
            param_2[2] = param_1[0x3a];
            param_2[7] = param_1[0x3f];
            *(int *)(param_2 + 8) = (int)param_1[0x40];
            goto LAB_1805c5c98;
          }
          if (((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x279] * 8) -
                      param_1[0x278]) * 1e-05 < 5.0) &&
             (lVar12 = FUN_1805b74c0(param_1 + 1), lVar12 != 0)) {
            uVar10 = FUN_1805b74c0(param_1 + 1);
            cVar7 = FUN_1805dbed0(param_1 + 0x2f,uVar10);
            if (cVar7 != '\0') {
              *(int32_t *)(param_1 + 0x284) = 1;
              goto LAB_1805c5c98;
            }
          }
        }
        else {
          if (2.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x279] * 8) -
                           param_1[0x278]) * 1e-05) {
            uStack_98 = 0;
            aplStack_b8[0] = (int64_t *)0x0;
            FUN_1804ff330(lVar14 + 0x98d230,*(int64_t *)(lVar12 + 0x20) + 0xc,lVar14,aplStack_b8);
            if (aplStack_b8[0] != (int64_t *)0x0) {
              iVar8 = *(int *)((int64_t)param_1 + 0x14e4);
              do {
                lVar12 = *aplStack_b8[0];
                if (((*(int *)(lVar12 + 0x504) == iVar8) && (*(int *)(lVar12 + 0x510) == 3)) &&
                   (*(int *)(lVar12 + 0x508) == 0)) {
                    // WARNING: Subroutine does not return
                  AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar12 + 0x20) + 0x34));
                }
                FUN_1804ff550(param_1[0x291] + 0x98d230,aplStack_b8);
              } while (aplStack_b8[0] != (int64_t *)0x0);
            }
          }
          if ((int)param_1[0x284] == 0) goto LAB_1805c5c98;
          lVar12 = *param_1;
          lVar14 = *(int64_t *)(lVar12 + 0x20);
          fVar19 = *(float *)((int64_t)param_1 + 0x1dc) - *(float *)(lVar14 + 0x10);
          fVar17 = *(float *)(param_1 + 0x3b) - *(float *)(lVar14 + 0xc);
          if (*(float *)(lVar14 + 0x84) * *(float *)(lVar14 + 0x84) * 1.5625 <=
              fVar19 * fVar19 + fVar17 * fVar17) {
            *param_2 = param_1[0x38];
            lVar12 = param_1[0x3c];
            param_2[3] = param_1[0x3b];
            param_2[4] = lVar12;
            lVar12 = param_1[0x3e];
            param_2[5] = param_1[0x3d];
            param_2[6] = lVar12;
            param_2[1] = param_1[0x39];
            param_2[2] = param_1[0x3a];
            param_2[7] = param_1[0x3f];
            *(int *)(param_2 + 8) = (int)param_1[0x40];
            goto LAB_1805c5c98;
          }
          fVar17 = *(float *)((int64_t)param_1 + 0x1314) * 0.75;
          if (fVar17 <= *(float *)(param_1 + 0x260)) {
            fVar17 = 2.0 - *(float *)(param_1 + 0x260) / fVar17;
            if (fVar17 <= 0.0) {
              fVar17 = 0.0;
            }
            if ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x279] * 8) -
                       param_1[0x278]) * 1e-05 <= 8.0 - fVar17 * 3.0) {
              fStack_c8 = *(float *)(param_1 + 0x25f);
              fStack_c4 = *(float *)((int64_t)param_1 + 0x12fc);
              uStack_c0 = *(int32_t *)(lVar14 + 0x14);
              uStack_98 = 0;
              uStack_90 = 0;
              uStack_bc = 0x7f7fffff;
              uStack_84 = 0;
              uStack_a8 = 0;
              uStack_a0 = 0x7f7fffff3f800000;
              uStack_88 = 0;
              FUN_1801aa0f0(*(uint64_t *)(lVar12 + 0x660),&fStack_c8,lVar12,aplStack_b8,0x51b189,
                            (byte)((uint)*(int32_t *)(lVar12 + 0x56c) >> 8) & 1);
              fVar17 = *(float *)(param_1 + 0x25f);
              fVar19 = *(float *)((int64_t)param_1 + 0x12fc);
              uStack_c0 = uStack_88;
              uStack_bc = 0x7f7fffff;
              fStack_c8 = fVar17;
              fStack_c4 = fVar19;
              lVar12 = FUN_180396100(*(int64_t *)(param_1[0x291] + 0x18) + 0x2a68,&fStack_c8,
                                     *(int64_t *)(param_1[0x291] + 0x18) + 0x28c8,1);
              if (lVar12 == 0) {
                plVar9 = (int64_t *)FUN_180516f50(*param_1,aplStack_b8);
                *param_2 = *plVar9;
                lVar12 = plVar9[4];
                param_2[3] = plVar9[3];
                param_2[4] = lVar12;
                lVar12 = plVar9[6];
                param_2[5] = plVar9[5];
                param_2[6] = lVar12;
                param_2[1] = plVar9[1];
                param_2[2] = plVar9[2];
                param_2[7] = plVar9[7];
                *(int *)(param_2 + 8) = (int)plVar9[8];
              }
              else {
                plVar9 = (int64_t *)FUN_180516f50(*param_1,aplStack_b8);
                *param_2 = *plVar9;
                lVar14 = plVar9[4];
                param_2[3] = plVar9[3];
                param_2[4] = lVar14;
                uVar2 = *(int32_t *)((int64_t)plVar9 + 0x2c);
                lVar14 = plVar9[6];
                uVar3 = *(int32_t *)((int64_t)plVar9 + 0x34);
                *(int *)(param_2 + 5) = (int)plVar9[5];
                *(int32_t *)((int64_t)param_2 + 0x2c) = uVar2;
                *(int *)(param_2 + 6) = (int)lVar14;
                *(int32_t *)((int64_t)param_2 + 0x34) = uVar3;
                param_2[1] = plVar9[1];
                param_2[2] = plVar9[2];
                param_2[7] = plVar9[7];
                *(int *)(param_2 + 8) = (int)plVar9[8];
                _fStackX_8 = CONCAT44(fVar19 - *(float *)(lVar12 + 0xec),
                                      fVar17 - *(float *)(lVar12 + 0xe8));
                pfVar11 = (float *)FUN_18038bc40(lVar12,&fStack_c8,(float *)(lVar12 + 0xe8),
                                                 &fStackX_8);
                if ((*pfVar11 != *(float *)(param_2 + 3)) ||
                   (pfVar11[1] != *(float *)((int64_t)param_2 + 0x1c))) {
                  if ((int)param_2[8] != 0) {
                    *(int32_t *)(param_2 + 8) = 0;
                  }
                  param_2[3] = *(int64_t *)pfVar11;
                }
              }
              goto LAB_1805c5c98;
            }
          }
        }
        *(int32_t *)(param_1 + 0x284) = 0;
        lVar12 = FUN_1805b74c0(param_1 + 1);
        FUN_1805d9040(param_1 + 0x2f,*(int32_t *)(lVar12 + 0x10));
      }
LAB_1805c5c98:
      if ((int)param_1[0x284] == 1) {
        lVar12 = *(int64_t *)(*param_1 + 0x20);
        fVar17 = *(float *)(lVar12 + 0x84);
        fVar19 = fVar17 * *(float *)(*param_1 + 0x33c);
        if (*(char *)((int64_t)param_1 + 0x12f4) == '\0') {
          fStackX_c = (float)((uint64_t)*(uint64_t *)(lVar12 + 0x1fc) >> 0x20);
          fStackX_8 = (float)*(uint64_t *)(lVar12 + 0x1fc);
          fVar18 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
          fVar18 = (float)(fVar18 <= 1.1754944e-38) * 1.1754944e-38 + fVar18;
          auVar16 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar15 = auVar16._0_4_;
          fVar18 = fVar15 * 0.5 * ((float)system_data_01f0 - fVar18 * fVar15 * fVar15);
          _fStackX_8 = CONCAT44(fStackX_c * fVar18,fStackX_8 * fVar18);
          if ((*(byte *)(param_1 + 2) & 1) == 0) {
            FUN_1805d3210(param_1 + 1);
          }
          if ((*(float *)(param_1 + 0xd) <= fVar19 * 0.5 &&
               fVar19 * 0.5 != *(float *)(param_1 + 0xd)) &&
             (pfVar11 = (float *)FUN_1805b6d50(param_1 + 1), fVar17 * 0.7 < *pfVar11)) {
            if ((*(byte *)(param_1 + 2) & 1) == 0) {
              FUN_1805d3210(param_1 + 1);
            }
            lVar12 = FUN_1805b74c0(param_1 + 1);
                    // WARNING: Subroutine does not return
            AdvancedSystemController(*(int32_t *)(*(int64_t *)(lVar12 + 0x20) + 0x34));
          }
          pfVar11 = &fStackX_20;
          fStackX_20 = fStackX_8 * fVar19;
          fStackX_24 = fStackX_c * fVar19;
        }
        else {
          fStackX_c = (float)((uint64_t)*(uint64_t *)((int64_t)param_1 + 0x1304) >> 0x20);
          fStackX_8 = (float)*(uint64_t *)((int64_t)param_1 + 0x1304);
          if (fStackX_c * *(float *)(param_1 + 0x262) +
              fStackX_8 * *(float *)((int64_t)param_1 + 0x130c) < 0.0) {
            fStackX_8 = -fStackX_8;
            fStackX_c = -fStackX_c;
          }
          pfVar11 = &fStackX_8;
          fVar17 = *(float *)(param_1 + 0x25f) - *(float *)(lVar12 + 0xc);
          fVar18 = *(float *)((int64_t)param_1 + 0x12fc) - *(float *)(lVar12 + 0x10);
          fVar19 = (fVar19 + fVar19) - (fStackX_c * fVar18 + fStackX_8 * fVar17);
          _fStackX_8 = CONCAT44(fStackX_c * fVar19 + fVar18,fStackX_8 * fVar19 + fVar17);
        }
        cVar7 = FUN_1805d94e0(param_1 + 0x2f,pfVar11);
        if (cVar7 == '\0') {
          *(int32_t *)(param_1 + 0x284) = 0;
          lVar12 = FUN_1805b74c0(param_1 + 1);
          FUN_1805d9040(param_1 + 0x2f,*(int32_t *)(lVar12 + 0x10));
        }
        else {
          *(int32_t *)(param_1 + 0x284) = 2;
        }
      }
      return;
    }
  }
  *param_2 = param_1[0x38];
  lVar12 = param_1[0x3c];
  param_2[3] = param_1[0x3b];
  param_2[4] = lVar12;
  lVar12 = param_1[0x3e];
  param_2[5] = param_1[0x3d];
  param_2[6] = lVar12;
  param_2[1] = param_1[0x39];
  param_2[2] = param_1[0x3a];
  param_2[7] = param_1[0x3f];
  *(int *)(param_2 + 8) = (int)param_1[0x40];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




