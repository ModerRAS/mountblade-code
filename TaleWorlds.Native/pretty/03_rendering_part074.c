#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part074.c - 9 个函数

// 函数: void FUN_18030ac95(float param_1,float param_2)
void FUN_18030ac95(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  int32_t uVar5;
  int32_t uVar6;
  float *pfVar7;
  longlong lVar8;
  bool bVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  longlong lStack0000000000000028;
  int8_t uStack0000000000000030;
  uint64_t *puStack0000000000000038;
  float fStack0000000000000040;
  int32_t uStack0000000000000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  
  fVar19 = (param_2 + param_1) * 8.0 + (float)_DAT_180c8ed30 * 8e-05;
  uVar13 = (uint)fVar19;
  uVar14 = uVar13 & 0x800000ff;
  if ((int)uVar14 < 0) {
    uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
  }
  pfVar7 = *(float **)(unaff_RBX + 0x81f0);
  uVar15 = uVar14 + 1 & 0x800000ff;
  if ((int)uVar15 < 0) {
    uVar15 = (uVar15 - 1 | 0xffffff00) + 1;
  }
  fVar19 = ((*(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar15 * 4) -
            *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar14 * 4)) * (fVar19 - (float)(int)uVar13)
           + *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar14 * 4)) * *pfVar7 + 1.0;
  if (*(int *)(unaff_RDI + 0x70) == 1) {
    fVar21 = pfVar7[3];
    fVar22 = *(float *)(unaff_RDI + 0x74);
    fVar1 = *(float *)(unaff_RDI + 0x78);
    fVar20 = fVar21 * *(float *)(unaff_RDI + 0x7c) * fVar19;
    *(int32_t *)(unaff_RBP + -0x75) = 0x7f7fffff;
    fVar23 = fVar21 * fVar22 * fVar19;
    *(float *)(unaff_RBP + -0x79) = fVar20;
    fVar21 = fVar21 * fVar1 * fVar19;
  }
  else if (*(int *)(unaff_RDI + 0x70) == 2) {
    fVar22 = *(float *)(unaff_RDI + 0x78);
    fVar1 = *(float *)(unaff_RDI + 0x74);
    fVar2 = *(float *)(unaff_RDI + 0x7c);
    fVar21 = fVar19 * pfVar7[3];
    fVar20 = (unaff_XMM8_Db * fVar22 + unaff_XMM8_Da * fVar1 + unaff_XMM8_Dc * fVar2) * fVar21;
    *(float *)(unaff_RBP + -0x75) =
         unaff_XMM8_Dd * fVar22 + unaff_XMM8_Dd * fVar1 + unaff_XMM8_Dd * fVar2;
    fVar23 = (unaff_XMM7_Db * fVar22 + unaff_XMM7_Da * fVar1 + unaff_XMM7_Dc * fVar2) * fVar21;
    *(float *)(unaff_RBP + -0x79) = fVar20;
    fVar21 = (unaff_XMM9_Db * fVar22 + unaff_XMM9_Da * fVar1 + unaff_XMM9_Dc * fVar2) * fVar21;
  }
  else {
    fVar22 = pfVar7[3] * pfVar7[2];
    fVar21 = pfVar7[3] * pfVar7[1];
    fVar23 = fVar22 * unaff_XMM7_Db + unaff_XMM7_Da * fVar21 + unaff_XMM7_Dc * 0.0;
    in_stack_00000050._4_4_ = fVar22 * unaff_XMM9_Db + unaff_XMM9_Da * fVar21 + unaff_XMM9_Dc * 0.0;
    fVar20 = fVar22 * unaff_XMM8_Db + unaff_XMM8_Da * fVar21 + unaff_XMM8_Dc * 0.0;
    in_stack_00000058 =
         CONCAT44(fVar22 * unaff_XMM8_Dd + unaff_XMM8_Dd * fVar21 + unaff_XMM8_Dd * 0.0,fVar20);
    fVar21 = *(float *)(unaff_RBP + -0x7d);
  }
  uVar11 = in_stack_00000058;
  _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
  uVar13 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = uVar13 << 0xd ^ uVar13;
  _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
  lVar18 = *(longlong *)(unaff_RDI + 0x38);
  fVar20 = SQRT(fVar21 * fVar21 + fVar23 * fVar23 + fVar20 * fVar20);
  in_stack_00000050 =
       CONCAT44(in_stack_00000050._4_4_,fVar23 + ((float)(uVar13 - 1) * 4.656613e-11 - 0.1) * fVar20
               );
  uVar10 = in_stack_00000050;
  *(float *)(unaff_RBP + -0x7d) =
       fVar21 + ((float)(_DAT_180bf65b8 - 1) * 4.656613e-11 - 0.1) * fVar20;
  if (lVar18 == 0) {
    bVar9 = true;
    iVar12 = (int)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x40) -
                   *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38) >> 4);
    lVar18 = (longlong)iVar12;
    if (0 < iVar12) {
      uVar5 = *(int32_t *)(unaff_RBP + 0x7f);
      lVar16 = 0;
      do {
        lVar17 = *(longlong *)(lVar16 + *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38));
        lVar8 = *(longlong *)(lVar17 + 0x118);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x118) < 1) {
            bVar9 = false;
          }
          else {
            cVar3 = *(char *)(unaff_RBP + 0x5f);
            puStack0000000000000038 = &stack0x00000050;
            uVar6 = *(int32_t *)(unaff_RBP + 0x67);
            *(int32_t *)(lVar8 + 0x110) = uVar5;
            uStack0000000000000048 = *(int32_t *)(unaff_RDI + 0xb8);
            uStack0000000000000030 = *(int8_t *)(unaff_RDI + 0x44);
            lStack0000000000000028 = unaff_RBP + -0x71;
            fStack0000000000000040 = fVar19;
            in_stack_00000050 = uVar10;
            in_stack_00000058 = uVar11;
            FUN_18024c560(uStack0000000000000048,lVar17,(int)cVar3,uVar6,
                          *(int32_t *)(unaff_RBP + 0x6f));
            *(int32_t *)(lVar8 + 0x118) = 0;
          }
        }
        lVar16 = lVar16 + 0x10;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    if ((*(char *)(unaff_RDI + 0x44) != '\0') && (bVar9)) {
      *(int8_t *)(unaff_RDI + 0x44) = 0;
    }
  }
  else {
    lVar18 = *(longlong *)(lVar18 + 0x118);
    if (0 < *(int *)(lVar18 + 0x118)) {
      puStack0000000000000038 = &stack0x00000050;
      cVar3 = *(char *)(unaff_RBP + 0x5f);
      uVar5 = *(int32_t *)(unaff_RBP + 0x67);
      cVar4 = *(char *)(lVar18 + 0x13d);
      *(int32_t *)(lVar18 + 0x110) = *(int32_t *)(unaff_RBP + 0x7f);
      uStack0000000000000048 = *(int32_t *)(unaff_RDI + 0xb8);
      uStack0000000000000030 = *(int8_t *)(unaff_RDI + 0x44);
      lStack0000000000000028 = unaff_RBP + -0x71;
      fStack0000000000000040 = fVar19;
      FUN_18024c560(uStack0000000000000048,*(uint64_t *)(unaff_RDI + 0x38),(int)cVar3,uVar5,
                    *(int32_t *)(unaff_RBP + 0x6f));
      lVar16 = 0;
      if (((cVar4 == '\0') && (*(char *)(lVar18 + 0x13d) == '\x01')) &&
         (iVar12 = (int)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x40) -
                         *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38) >> 4),
         lVar17 = (longlong)iVar12, 0 < iVar12)) {
        do {
          lVar8 = *(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38) + lVar16) +
                   0x118);
          if (lVar8 != 0) {
            *(int8_t *)(lVar8 + 0x13d) = 1;
          }
          lVar16 = lVar16 + 0x10;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      *(int8_t *)(unaff_RDI + 0x44) = 0;
      *(int32_t *)(lVar18 + 0x118) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030ae8c(float param_1,int param_2,float param_3)
void FUN_18030ae8c(float param_1,int param_2,float param_3)

{
  char cVar1;
  char cVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  bool bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint in_EAX;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong lVar12;
  longlong lVar13;
  float in_XMM1_Da;
  float fVar14;
  float in_XMM4_Da;
  float in_XMM5_Da;
  longlong lStack0000000000000028;
  int8_t uStack0000000000000030;
  uint64_t *puStack0000000000000038;
  int32_t uStack0000000000000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  
  uVar8 = in_stack_00000058;
  uVar10 = param_2 << 5 ^ in_EAX;
  _DAT_180bf65b8 = uVar10 << 0xd ^ uVar10;
  _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
  lVar13 = *(longlong *)(unaff_RDI + 0x38);
  fVar14 = SQRT(in_XMM1_Da + param_1 + param_3);
  in_stack_00000050 =
       CONCAT44(in_stack_00000050._4_4_,
                in_XMM5_Da + ((float)(uVar10 - 1) * 4.656613e-11 - 0.1) * fVar14);
  uVar7 = in_stack_00000050;
  *(float *)(unaff_RBP + -0x7d) =
       in_XMM4_Da + ((float)(_DAT_180bf65b8 - 1) * 4.656613e-11 - 0.1) * fVar14;
  if (lVar13 == 0) {
    bVar6 = true;
    iVar9 = (int)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x40) -
                  *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38) >> 4);
    lVar13 = (longlong)iVar9;
    if (0 < iVar9) {
      uVar3 = *(int32_t *)(unaff_RBP + 0x7f);
      lVar11 = 0;
      do {
        lVar12 = *(longlong *)(lVar11 + *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38));
        lVar5 = *(longlong *)(lVar12 + 0x118);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x118) < 1) {
            bVar6 = false;
          }
          else {
            cVar1 = *(char *)(unaff_RBP + 0x5f);
            puStack0000000000000038 = &stack0x00000050;
            uVar4 = *(int32_t *)(unaff_RBP + 0x67);
            *(int32_t *)(lVar5 + 0x110) = uVar3;
            uStack0000000000000048 = *(int32_t *)(unaff_RDI + 0xb8);
            uStack0000000000000030 = *(int8_t *)(unaff_RDI + 0x44);
            lStack0000000000000028 = unaff_RBP + -0x71;
            in_stack_00000050 = uVar7;
            in_stack_00000058 = uVar8;
            FUN_18024c560(uStack0000000000000048,lVar12,(int)cVar1,uVar4,
                          *(int32_t *)(unaff_RBP + 0x6f));
            *(int32_t *)(lVar5 + 0x118) = 0;
          }
        }
        lVar11 = lVar11 + 0x10;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if ((*(char *)(unaff_RDI + 0x44) != '\0') && (bVar6)) {
      *(int8_t *)(unaff_RDI + 0x44) = 0;
    }
  }
  else {
    lVar13 = *(longlong *)(lVar13 + 0x118);
    if (0 < *(int *)(lVar13 + 0x118)) {
      puStack0000000000000038 = &stack0x00000050;
      cVar1 = *(char *)(unaff_RBP + 0x5f);
      uVar3 = *(int32_t *)(unaff_RBP + 0x67);
      cVar2 = *(char *)(lVar13 + 0x13d);
      *(int32_t *)(lVar13 + 0x110) = *(int32_t *)(unaff_RBP + 0x7f);
      uStack0000000000000048 = *(int32_t *)(unaff_RDI + 0xb8);
      uStack0000000000000030 = *(int8_t *)(unaff_RDI + 0x44);
      lStack0000000000000028 = unaff_RBP + -0x71;
      FUN_18024c560(uStack0000000000000048,*(uint64_t *)(unaff_RDI + 0x38),(int)cVar1,uVar3,
                    *(int32_t *)(unaff_RBP + 0x6f));
      lVar11 = 0;
      if (((cVar2 == '\0') && (*(char *)(lVar13 + 0x13d) == '\x01')) &&
         (iVar9 = (int)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x40) -
                        *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38) >> 4),
         lVar12 = (longlong)iVar9, 0 < iVar9)) {
        do {
          lVar5 = *(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38) + lVar11) +
                   0x118);
          if (lVar5 != 0) {
            *(int8_t *)(lVar5 + 0x13d) = 1;
          }
          lVar11 = lVar11 + 0x10;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      *(int8_t *)(unaff_RDI + 0x44) = 0;
      *(int32_t *)(lVar13 + 0x118) = 0;
    }
  }
  return;
}





// 函数: void FUN_18030b00d(longlong param_1)
void FUN_18030b00d(longlong param_1)

{
  int32_t uVar1;
  char cVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  longlong unaff_RBP;
  longlong lVar10;
  longlong unaff_RDI;
  longlong lVar11;
  longlong lStack0000000000000028;
  int8_t uStack0000000000000030;
  uint64_t *puStack0000000000000038;
  int32_t uStack0000000000000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  
  uVar8 = in_stack_00000058;
  uVar7 = in_stack_00000050;
  bVar6 = true;
  iVar9 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4);
  lVar11 = (longlong)iVar9;
  if (0 < iVar9) {
    uVar1 = *(int32_t *)(unaff_RBP + 0x7f);
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar10 + *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38));
      lVar5 = *(longlong *)(lVar4 + 0x118);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x118) < 1) {
          bVar6 = false;
        }
        else {
          cVar2 = *(char *)(unaff_RBP + 0x5f);
          puStack0000000000000038 = &stack0x00000050;
          uVar3 = *(int32_t *)(unaff_RBP + 0x67);
          *(int32_t *)(lVar5 + 0x110) = uVar1;
          uStack0000000000000048 = *(int32_t *)(unaff_RDI + 0xb8);
          uStack0000000000000030 = *(int8_t *)(unaff_RDI + 0x44);
          lStack0000000000000028 = unaff_RBP + -0x71;
          in_stack_00000050 = uVar7;
          in_stack_00000058 = uVar8;
          FUN_18024c560(uStack0000000000000048,lVar4,(int)cVar2,uVar3,
                        *(int32_t *)(unaff_RBP + 0x6f));
          *(int32_t *)(lVar5 + 0x118) = 0;
        }
      }
      lVar10 = lVar10 + 0x10;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((*(char *)(unaff_RDI + 0x44) != '\0') && (bVar6)) {
    *(int8_t *)(unaff_RDI + 0x44) = 0;
  }
  return;
}





// 函数: void FUN_18030b018(longlong param_1)
void FUN_18030b018(longlong param_1)

{
  int32_t uVar1;
  char cVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  longlong unaff_RBP;
  longlong lVar9;
  longlong unaff_RDI;
  char unaff_R12B;
  longlong lVar10;
  longlong lStack0000000000000028;
  int8_t uStack0000000000000030;
  uint64_t *puStack0000000000000038;
  int32_t uStack0000000000000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  
  uVar7 = in_stack_00000058;
  uVar6 = in_stack_00000050;
  iVar8 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4);
  lVar10 = (longlong)iVar8;
  if (0 < iVar8) {
    uVar1 = *(int32_t *)(unaff_RBP + 0x7f);
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar9 + *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38));
      lVar5 = *(longlong *)(lVar4 + 0x118);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x118) < 1) {
          unaff_R12B = '\0';
        }
        else {
          cVar2 = *(char *)(unaff_RBP + 0x5f);
          puStack0000000000000038 = &stack0x00000050;
          uVar3 = *(int32_t *)(unaff_RBP + 0x67);
          *(int32_t *)(lVar5 + 0x110) = uVar1;
          uStack0000000000000048 = *(int32_t *)(unaff_RDI + 0xb8);
          uStack0000000000000030 = *(int8_t *)(unaff_RDI + 0x44);
          lStack0000000000000028 = unaff_RBP + -0x71;
          in_stack_00000050 = uVar6;
          in_stack_00000058 = uVar7;
          FUN_18024c560(uStack0000000000000048,lVar4,(int)cVar2,uVar3,
                        *(int32_t *)(unaff_RBP + 0x6f));
          *(int32_t *)(lVar5 + 0x118) = 0;
        }
      }
      lVar9 = lVar9 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((*(char *)(unaff_RDI + 0x44) != '\0') && (unaff_R12B != '\0')) {
    *(int8_t *)(unaff_RDI + 0x44) = 0;
  }
  return;
}





// 函数: void FUN_18030b0ef(void)
void FUN_18030b0ef(void)

{
  longlong unaff_RDI;
  char unaff_R12B;
  
  if (unaff_R12B != '\0') {
    *(int8_t *)(unaff_RDI + 0x44) = 0;
  }
  return;
}





// 函数: void FUN_18030b100(void)
void FUN_18030b100(void)

{
  return;
}





// 函数: void FUN_18030b110(void)
void FUN_18030b110(void)

{
  return;
}





// 函数: void FUN_18030b12a(void)
void FUN_18030b12a(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030b138(uint64_t param_1,code *param_2)
void FUN_18030b138(uint64_t param_1,code *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  int32_t uVar8;
  int32_t uVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  float *pfVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar30;
  longlong unaff_R13;
  longlong lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  pfVar25 = (float *)(*param_2)();
  cVar6 = *(char *)(unaff_RBX + 0x3f61);
  fVar12 = *unaff_RSI;
  fVar13 = unaff_RSI[1];
  fVar14 = unaff_RSI[2];
  fVar15 = unaff_RSI[3];
  fVar16 = unaff_RSI[4];
  fVar17 = unaff_RSI[5];
  fVar18 = unaff_RSI[6];
  fVar19 = unaff_RSI[7];
  fVar20 = unaff_RSI[8];
  fVar21 = unaff_RSI[9];
  fVar22 = unaff_RSI[10];
  fVar23 = unaff_RSI[0xb];
  fVar32 = pfVar25[1];
  fVar33 = *pfVar25;
  fVar34 = pfVar25[2];
  fVar1 = pfVar25[5];
  fVar2 = pfVar25[9];
  fVar3 = pfVar25[0xd];
  fVar4 = pfVar25[4];
  fVar35 = fVar32 * fVar16 + fVar33 * fVar12 + fVar34 * fVar20;
  fVar36 = fVar32 * fVar17 + fVar33 * fVar13 + fVar34 * fVar21;
  fVar37 = fVar32 * fVar18 + fVar33 * fVar14 + fVar34 * fVar22;
  fVar5 = pfVar25[6];
  fVar41 = pfVar25[8];
  *(float *)(unaff_RBP + -0x71) = fVar35;
  *(float *)(unaff_RBP + -0x6d) = fVar36;
  *(float *)(unaff_RBP + -0x69) = fVar37;
  *(float *)(unaff_RBP + -0x65) = fVar32 * fVar19 + fVar33 * fVar15 + fVar34 * fVar23;
  fVar42 = fVar1 * fVar16 + fVar4 * fVar12 + fVar5 * fVar20;
  fVar43 = fVar1 * fVar17 + fVar4 * fVar13 + fVar5 * fVar21;
  fVar44 = fVar1 * fVar18 + fVar4 * fVar14 + fVar5 * fVar22;
  fVar32 = pfVar25[10];
  fVar33 = pfVar25[0xc];
  fVar38 = fVar2 * fVar16 + fVar41 * fVar12 + fVar32 * fVar20;
  fVar39 = fVar2 * fVar17 + fVar41 * fVar13 + fVar32 * fVar21;
  fVar40 = fVar2 * fVar18 + fVar41 * fVar14 + fVar32 * fVar22;
  fVar41 = fVar2 * fVar19 + fVar41 * fVar15 + fVar32 * fVar23;
  *(float *)(unaff_RBP + -0x61) = fVar42;
  *(float *)(unaff_RBP + -0x5d) = fVar43;
  *(float *)(unaff_RBP + -0x59) = fVar44;
  *(float *)(unaff_RBP + -0x55) = fVar1 * fVar19 + fVar4 * fVar15 + fVar5 * fVar23;
  fVar32 = pfVar25[0xe];
  fVar34 = unaff_RSI[0xc];
  fVar1 = unaff_RSI[0xd];
  fVar2 = unaff_RSI[0xe];
  fVar4 = unaff_RSI[0xf];
  *(float *)(unaff_RBP + -0x51) = fVar38;
  *(float *)(unaff_RBP + -0x4d) = fVar39;
  *(float *)(unaff_RBP + -0x49) = fVar40;
  *(float *)(unaff_RBP + -0x45) = fVar41;
  *(float *)(unaff_RBP + -0x41) = fVar3 * fVar16 + fVar33 * fVar12 + fVar32 * fVar20 + fVar34;
  *(float *)(unaff_RBP + -0x3d) = fVar3 * fVar17 + fVar33 * fVar13 + fVar32 * fVar21 + fVar1;
  *(float *)(unaff_RBP + -0x39) = fVar3 * fVar18 + fVar33 * fVar14 + fVar32 * fVar22 + fVar2;
  *(float *)(unaff_RBP + -0x35) = fVar3 * fVar19 + fVar33 * fVar15 + fVar32 * fVar23 + fVar4;
  if (((cVar6 != '\0') && ((*(byte *)(unaff_R13 + 0x1bd8) & 0x20) != 0)) &&
     (*(int *)(SYSTEM_STATE_MANAGER + 0x620) != -1)) {
    iVar24 = *(int *)(unaff_RBP + 0x77);
    if (iVar24 <= *(int *)(_DAT_180c8a980 + 0x2f8)) {
      *(int8_t *)(unaff_RDI + 0x44) = 1;
    }
    lVar31 = *(longlong *)(unaff_RDI + 0x48);
    if (*(int *)(lVar31 + 0x328) == *(int *)(_DAT_180c86870 + 0x224)) {
      if (((*(char *)(unaff_RDI + 0xbc) == '\0') &&
          ((*(byte *)(*(longlong *)(lVar31 + 0x3c8) + 0x28) & 1) == 0)) &&
         (*(int *)(_DAT_180c86870 + 0x224) + -1 != iVar24)) {
        *(int8_t *)(unaff_RDI + 0x44) = 1;
      }
      if (*(int *)(unaff_RDI + 0x30) == *(int *)(*(longlong *)(lVar31 + 0x3c8) + 0x10)) {
        fVar32 = (*(float *)(unaff_RBP + -0x3d) * 2.3 + *(float *)(unaff_RBP + -0x41) * 1.7) * 8.0 +
                 (float)_DAT_180c8ed30 * 8e-05;
        uVar26 = (uint)fVar32;
        uVar27 = uVar26 & 0x800000ff;
        if ((int)uVar27 < 0) {
          uVar27 = (uVar27 - 1 | 0xffffff00) + 1;
        }
        pfVar25 = *(float **)(unaff_RBX + 0x81f0);
        uVar28 = uVar27 + 1 & 0x800000ff;
        if ((int)uVar28 < 0) {
          uVar28 = (uVar28 - 1 | 0xffffff00) + 1;
        }
        fVar32 = ((*(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar28 * 4) -
                  *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar27 * 4)) *
                  (fVar32 - (float)(int)uVar26) +
                 *(float *)(&unknown_var_5296_ptr + (longlong)(int)uVar27 * 4)) * *pfVar25 + 1.0;
        if (*(int *)(unaff_RDI + 0x70) == 1) {
          fVar1 = pfVar25[3];
          fVar34 = *(float *)(unaff_RDI + 0x74);
          fVar2 = *(float *)(unaff_RDI + 0x78);
          fVar33 = fVar1 * *(float *)(unaff_RDI + 0x7c) * fVar32;
          *(int32_t *)(unaff_RBP + -0x75) = 0x7f7fffff;
          fVar34 = fVar1 * fVar34 * fVar32;
          *(float *)(unaff_RBP + -0x79) = fVar33;
          fVar32 = fVar1 * fVar2 * fVar32;
        }
        else if (*(int *)(unaff_RDI + 0x70) == 2) {
          fVar1 = *(float *)(unaff_RDI + 0x78);
          fVar2 = *(float *)(unaff_RDI + 0x74);
          fVar3 = *(float *)(unaff_RDI + 0x7c);
          fVar32 = fVar32 * pfVar25[3];
          fVar33 = (fVar39 * fVar1 + fVar38 * fVar2 + fVar40 * fVar3) * fVar32;
          *(float *)(unaff_RBP + -0x75) = fVar41 * fVar1 + fVar41 * fVar2 + fVar41 * fVar3;
          fVar34 = (fVar36 * fVar1 + fVar35 * fVar2 + fVar37 * fVar3) * fVar32;
          *(float *)(unaff_RBP + -0x79) = fVar33;
          fVar32 = (fVar43 * fVar1 + fVar42 * fVar2 + fVar44 * fVar3) * fVar32;
        }
        else {
          fVar33 = pfVar25[3] * pfVar25[2];
          fVar32 = pfVar25[3] * pfVar25[1];
          fVar34 = fVar33 * fVar36 + fVar35 * fVar32 + fVar37 * 0.0;
          fVar33 = fVar33 * fVar39 + fVar38 * fVar32 + fVar40 * 0.0;
          fVar32 = *(float *)(unaff_RBP + -0x7d);
        }
        _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
        _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
        _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
        _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
        _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
        _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
        lVar31 = *(longlong *)(unaff_RDI + 0x38);
        *(float *)(unaff_RBP + -0x7d) =
             fVar32 + ((float)(_DAT_180bf65b8 - 1) * 4.656613e-11 - 0.1) *
                      SQRT(fVar32 * fVar32 + fVar34 * fVar34 + fVar33 * fVar33);
        if (lVar31 == 0) {
          bVar11 = true;
          iVar24 = (int)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x40) -
                         *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38) >> 4);
          lVar31 = (longlong)iVar24;
          if (0 < iVar24) {
            uVar8 = *(int32_t *)(unaff_RBP + 0x7f);
            lVar29 = 0;
            do {
              lVar30 = *(longlong *)(lVar29 + *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38))
              ;
              lVar10 = *(longlong *)(lVar30 + 0x118);
              if (lVar10 != 0) {
                if (*(int *)(lVar10 + 0x118) < 1) {
                  bVar11 = false;
                }
                else {
                  cVar6 = *(char *)(unaff_RBP + 0x5f);
                  uVar9 = *(int32_t *)(unaff_RBP + 0x67);
                  *(int32_t *)(lVar10 + 0x110) = uVar8;
                  FUN_18024c560(*(int32_t *)(unaff_RDI + 0xb8),lVar30,(int)cVar6,uVar9,
                                *(int32_t *)(unaff_RBP + 0x6f));
                  *(int32_t *)(lVar10 + 0x118) = 0;
                }
              }
              lVar29 = lVar29 + 0x10;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
          }
          if ((*(char *)(unaff_RDI + 0x44) != '\0') && (bVar11)) {
            *(int8_t *)(unaff_RDI + 0x44) = 0;
          }
        }
        else {
          lVar31 = *(longlong *)(lVar31 + 0x118);
          if (0 < *(int *)(lVar31 + 0x118)) {
            cVar6 = *(char *)(unaff_RBP + 0x5f);
            uVar8 = *(int32_t *)(unaff_RBP + 0x67);
            cVar7 = *(char *)(lVar31 + 0x13d);
            *(int32_t *)(lVar31 + 0x110) = *(int32_t *)(unaff_RBP + 0x7f);
            FUN_18024c560(*(int32_t *)(unaff_RDI + 0xb8),*(uint64_t *)(unaff_RDI + 0x38),
                          (int)cVar6,uVar8,*(int32_t *)(unaff_RBP + 0x6f));
            lVar29 = 0;
            if (((cVar7 == '\0') && (*(char *)(lVar31 + 0x13d) == '\x01')) &&
               (iVar24 = (int)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x40) -
                               *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38) >> 4),
               lVar30 = (longlong)iVar24, 0 < iVar24)) {
              do {
                lVar10 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x38) + lVar29) + 0x118
                          );
                if (lVar10 != 0) {
                  *(int8_t *)(lVar10 + 0x13d) = 1;
                }
                lVar29 = lVar29 + 0x10;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
            }
            *(int8_t *)(unaff_RDI + 0x44) = 0;
            *(int32_t *)(lVar31 + 0x118) = 0;
          }
        }
      }
    }
  }
  return;
}



int8_t
FUN_18030b140(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int8_t uVar3;
  char cVar4;
  int32_t uVar5;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  ulonglong uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  uStack_88 = *param_5;
  uStack_80 = param_5[1];
  uStack_78 = param_5[2];
  uStack_70 = param_5[3];
  uStack_68 = param_5[4];
  uStack_60 = param_5[5];
  uStack_58 = param_5[6];
  uStack_50 = param_5[7];
  uStack_48 = param_5[8];
  uStack_40 = param_5[9];
  uStack_30 = param_5[0xb];
  uStack_28 = *(int32_t *)(param_5 + 0xc);
  uStack_24 = *(int32_t *)((longlong)param_5 + 100);
  uStack_20 = *(int32_t *)(param_5 + 0xd);
  uStack_1c = *(int32_t *)((longlong)param_5 + 0x6c);
  uVar5 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x260), lVar1 != 0)) {
    uVar5 = *(int32_t *)(lVar1 + 0x180);
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  _uStack_38 = CONCAT44((int)((ulonglong)param_5[10] >> 0x20),uVar5);
  lVar1 = plVar2[0x65];
  uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_2,param_3,param_4,&uStack_88);
  cVar4 = func_0x000180282950(*(uint64_t *)(param_1 + 0x48));
  if (cVar4 != '\0') {
    FUN_18030aab0(param_1,param_2,param_3,param_4,uStack_68 >> 0x20 & 0xff,(int32_t)uStack_68,
                  uStack_70._4_4_,(int)lVar1,uStack_38);
  }
  return uVar3;
}





