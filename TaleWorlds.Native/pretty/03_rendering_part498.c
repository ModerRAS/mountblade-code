#include "TaleWorlds.Native.Split.h"

// 03_rendering_part498.c - 9 个函数

// 函数: void FUN_180532770(longlong param_1)
void FUN_180532770(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  float fVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  uint64_t uVar15;
  char cVar16;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  longlong in_R11;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
  float fVar23;
  float unaff_XMM6_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  lVar2 = *(longlong *)(param_1 + 0x658);
  if ((ushort)(*(short *)(lVar2 + 0x40) - 3U) < 2) {
    lVar3 = *(longlong *)(lVar2 + 0x18);
    *(uint64_t *)(in_R11 + 8) = unaff_RSI;
    puVar4 = *(uint64_t **)(lVar3 + 0xf0);
    (**(code **)(*(longlong *)*puVar4 + 200))((longlong *)*puVar4,unaff_RBP + -0x39);
    if (((-1e+06 <= *(float *)(unaff_RBP + -9)) &&
        ((**(code **)(*(longlong *)*puVar4 + 200))((longlong *)*puVar4,unaff_RBP + -0x39),
        *(float *)(unaff_RBP + -9) < 1e+06)) &&
       (lVar3 = *(longlong *)(unaff_RBX + 0x660),
       fVar19 = *(float *)(lVar3 + 0x438) - *(float *)(unaff_RBX + 0x550),
       fVar17 = *(float *)(lVar3 + 0x440) - *(float *)(unaff_RBX + 0x558),
       fVar18 = *(float *)(lVar3 + 0x43c) - *(float *)(unaff_RBX + 0x554),
       fVar17 = (fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) * 0.32 + 79.36508,
       (fVar17 / (fVar17 * 18.0 + 10000.0)) * *(float *)(lVar3 + 0x8220) <
       unaff_XMM6_Da + *(float *)(lVar2 + 0x34))) {
      (**(code **)(*(longlong *)*puVar4 + 200))((longlong *)*puVar4,unaff_RBP + -0x39);
      fVar17 = *(float *)(unaff_RBP + -0x25);
      fVar18 = *(float *)(unaff_RBP + -0x29);
      *(int32_t *)(unaff_RBP + -0x21) = 0;
      *(int32_t *)(unaff_RBP + -0x31) = 0;
      fVar19 = fVar18 * fVar18 + fVar17 * fVar17;
      auVar21 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar24 = auVar21._0_4_;
      *(int32_t *)(unaff_RBP + -0x2d) = 0x7f7fffff;
      fVar19 = fVar24 * 0.5 * (3.0 - fVar19 * fVar24 * fVar24);
      *(int32_t *)(unaff_RBP + -0x19) = 0;
      *(int32_t *)(unaff_RBP + -0x15) = 0;
      *(int32_t *)(unaff_RBP + -0x11) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0xd) = 0;
      fVar18 = fVar18 * fVar19;
      fVar17 = fVar17 * fVar19;
      *(float *)(unaff_RBP + -0x29) = fVar18;
      *(float *)(unaff_RBP + -0x35) = -fVar18;
      *(float *)(unaff_RBP + -0x25) = fVar17;
      *(float *)(unaff_RBP + -0x39) = fVar17;
      cVar16 = FUN_18063b400(unaff_RBP + -0x39);
      if (((cVar16 != '\0') && (cVar16 = FUN_18063b400(unaff_RBP + -0x29), cVar16 != '\0')) &&
         ((cVar16 = FUN_18063b400(unaff_RBP + -0x19), cVar16 != '\0' &&
          (cVar16 = FUN_18063b400(unaff_RBP + -9), cVar16 != '\0')))) {
        auVar21 = *(int8_t (*) [16])(unaff_RBP + -0x39);
        fVar22 = *(float *)(unaff_RBP + -0x29);
        uVar5 = *(int32_t *)(unaff_RBP + -0x25);
        uVar6 = *(int32_t *)(unaff_RBP + -0x21);
        uVar7 = *(int32_t *)(unaff_RBP + -0x1d);
        fVar23 = *(float *)(unaff_RBP + -0x19);
        uVar8 = *(int32_t *)(unaff_RBP + -0x15);
        uVar9 = *(int32_t *)(unaff_RBP + -0x11);
        uVar10 = *(int32_t *)(unaff_RBP + -0xd);
        lVar2 = *(longlong *)(unaff_RBX + 0x6d8);
        fVar11 = *(float *)(unaff_RBP + -9);
        uVar12 = *(int32_t *)(unaff_RBP + -5);
        uVar13 = *(int32_t *)(unaff_RBP + -1);
        uVar14 = *(int32_t *)(unaff_RBP + 3);
        fVar17 = *(float *)(unaff_RBP + -0x35);
        fVar18 = *(float *)(unaff_RBP + -0x31);
        *(int8_t (*) [16])(unaff_RBX + 0x520) = auVar21;
        *(float *)(unaff_RBX + 0x530) = fVar22;
        *(int32_t *)(unaff_RBX + 0x534) = uVar5;
        *(int32_t *)(unaff_RBX + 0x538) = uVar6;
        *(int32_t *)(unaff_RBX + 0x53c) = uVar7;
        fVar19 = *(float *)(unaff_RBP + -0x11);
        *(float *)(unaff_RBX + 0x540) = fVar23;
        *(int32_t *)(unaff_RBX + 0x544) = uVar8;
        *(int32_t *)(unaff_RBX + 0x548) = uVar9;
        *(int32_t *)(unaff_RBX + 0x54c) = uVar10;
        fVar24 = *(float *)(unaff_RBP + -0x15);
        fVar25 = *(float *)(unaff_RBP + -0x25);
        *(float *)(unaff_RBX + 0x550) = fVar11;
        *(int32_t *)(unaff_RBX + 0x554) = uVar12;
        *(int32_t *)(unaff_RBX + 0x558) = uVar13;
        *(int32_t *)(unaff_RBX + 0x55c) = uVar14;
        fVar1 = *(float *)(lVar2 + 0x8c0);
        fVar20 = auVar21._0_4_ * fVar1;
        fVar17 = fVar17 * fVar1;
        *(float *)(unaff_RBP + -0x39) = fVar20;
        fVar18 = fVar18 * fVar1;
        *(float *)(unaff_RBP + -0x35) = fVar17;
        fVar22 = fVar22 * fVar1;
        *(float *)(unaff_RBP + -0x31) = fVar18;
        fVar25 = fVar25 * fVar1;
        *(float *)(unaff_RBP + -0x29) = fVar22;
        fVar26 = *(float *)(unaff_RBP + -0x21) * fVar1;
        *(float *)(unaff_RBP + -0x25) = fVar25;
        fVar23 = fVar23 * fVar1;
        *(float *)(unaff_RBP + -0x21) = fVar26;
        fVar24 = fVar24 * fVar1;
        *(float *)(unaff_RBP + -0x19) = fVar23;
        fVar19 = fVar19 * fVar1;
        *(float *)(unaff_RBP + -0x15) = fVar24;
        *(float *)(unaff_RBP + -0x11) = fVar19;
        lVar2 = *(longlong *)(lVar2 + 0x8a8);
        if (((fVar11 != *(float *)(lVar2 + 0x60)) ||
            (*(float *)(unaff_RBP + -5) != *(float *)(lVar2 + 100))) ||
           ((*(float *)(unaff_RBP + -1) != *(float *)(lVar2 + 0x68) ||
            ((((((fVar20 != *(float *)(lVar2 + 0x30) || (fVar17 != *(float *)(lVar2 + 0x34))) ||
                (fVar18 != *(float *)(lVar2 + 0x38))) ||
               ((fVar22 != *(float *)(lVar2 + 0x40) || (fVar25 != *(float *)(lVar2 + 0x44))))) ||
              ((fVar26 != *(float *)(lVar2 + 0x48) ||
               ((fVar23 != *(float *)(lVar2 + 0x50) || (fVar24 != *(float *)(lVar2 + 0x54))))))) ||
             (fVar19 != *(float *)(lVar2 + 0x58))))))) {
          uVar15 = *(uint64_t *)(unaff_RBP + -0x31);
          *(uint64_t *)(lVar2 + 0x30) = *(uint64_t *)(unaff_RBP + -0x39);
          *(uint64_t *)(lVar2 + 0x38) = uVar15;
          uVar15 = *(uint64_t *)(unaff_RBP + -0x21);
          *(uint64_t *)(lVar2 + 0x40) = *(uint64_t *)(unaff_RBP + -0x29);
          *(uint64_t *)(lVar2 + 0x48) = uVar15;
          uVar5 = *(int32_t *)(unaff_RBP + -0x15);
          uVar6 = *(int32_t *)(unaff_RBP + -0x11);
          uVar7 = *(int32_t *)(unaff_RBP + -0xd);
          *(int32_t *)(lVar2 + 0x50) = *(int32_t *)(unaff_RBP + -0x19);
          *(int32_t *)(lVar2 + 0x54) = uVar5;
          *(int32_t *)(lVar2 + 0x58) = uVar6;
          *(int32_t *)(lVar2 + 0x5c) = uVar7;
          uVar5 = *(int32_t *)(unaff_RBP + -5);
          uVar6 = *(int32_t *)(unaff_RBP + -1);
          uVar7 = *(int32_t *)(unaff_RBP + 3);
          *(int32_t *)(lVar2 + 0x60) = *(int32_t *)(unaff_RBP + -9);
          *(int32_t *)(lVar2 + 100) = uVar5;
          *(int32_t *)(lVar2 + 0x68) = uVar6;
          *(int32_t *)(lVar2 + 0x6c) = uVar7;
          FUN_180254610();
          FUN_1802eace0();
        }
      }
    }
  }
  return;
}





// 函数: void FUN_180532795(void)
void FUN_180532795(void)

{
  float fVar1;
  uint64_t *puVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  float fVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  uint64_t uVar14;
  char cVar15;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  longlong in_R11;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float unaff_XMM6_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  puVar2 = *(uint64_t **)(in_RAX + 0xf0);
  (**(code **)(*(longlong *)*puVar2 + 200))();
  if (((-1e+06 <= *(float *)(unaff_RBP + -9)) &&
      ((**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,unaff_RBP + -0x39),
      *(float *)(unaff_RBP + -9) < 1e+06)) &&
     (lVar3 = *(longlong *)(unaff_RBX + 0x660),
     fVar18 = *(float *)(lVar3 + 0x438) - *(float *)(unaff_RBX + 0x550),
     fVar16 = *(float *)(lVar3 + 0x440) - *(float *)(unaff_RBX + 0x558),
     fVar17 = *(float *)(lVar3 + 0x43c) - *(float *)(unaff_RBX + 0x554),
     fVar16 = (fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16) * 0.32 + 79.36508,
     (fVar16 / (fVar16 * 18.0 + 10000.0)) * *(float *)(lVar3 + 0x8220) <
     unaff_XMM6_Da + *(float *)(unaff_RDI + 0x34))) {
    (**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,unaff_RBP + -0x39);
    fVar16 = *(float *)(unaff_RBP + -0x25);
    fVar17 = *(float *)(unaff_RBP + -0x29);
    *(int32_t *)(unaff_RBP + -0x21) = 0;
    *(int32_t *)(unaff_RBP + -0x31) = 0;
    fVar18 = fVar17 * fVar17 + fVar16 * fVar16;
    auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar23 = auVar20._0_4_;
    *(int32_t *)(unaff_RBP + -0x2d) = 0x7f7fffff;
    fVar18 = fVar23 * 0.5 * (3.0 - fVar18 * fVar23 * fVar23);
    *(int32_t *)(unaff_RBP + -0x19) = 0;
    *(int32_t *)(unaff_RBP + -0x15) = 0;
    *(int32_t *)(unaff_RBP + -0x11) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0xd) = 0;
    fVar17 = fVar17 * fVar18;
    fVar16 = fVar16 * fVar18;
    *(float *)(unaff_RBP + -0x29) = fVar17;
    *(float *)(unaff_RBP + -0x35) = -fVar17;
    *(float *)(unaff_RBP + -0x25) = fVar16;
    *(float *)(unaff_RBP + -0x39) = fVar16;
    cVar15 = FUN_18063b400(unaff_RBP + -0x39);
    if (((cVar15 != '\0') && (cVar15 = FUN_18063b400(unaff_RBP + -0x29), cVar15 != '\0')) &&
       ((cVar15 = FUN_18063b400(unaff_RBP + -0x19), cVar15 != '\0' &&
        (cVar15 = FUN_18063b400(unaff_RBP + -9), cVar15 != '\0')))) {
      auVar20 = *(int8_t (*) [16])(unaff_RBP + -0x39);
      fVar21 = *(float *)(unaff_RBP + -0x29);
      uVar4 = *(int32_t *)(unaff_RBP + -0x25);
      uVar5 = *(int32_t *)(unaff_RBP + -0x21);
      uVar6 = *(int32_t *)(unaff_RBP + -0x1d);
      fVar22 = *(float *)(unaff_RBP + -0x19);
      uVar7 = *(int32_t *)(unaff_RBP + -0x15);
      uVar8 = *(int32_t *)(unaff_RBP + -0x11);
      uVar9 = *(int32_t *)(unaff_RBP + -0xd);
      lVar3 = *(longlong *)(unaff_RBX + 0x6d8);
      fVar10 = *(float *)(unaff_RBP + -9);
      uVar11 = *(int32_t *)(unaff_RBP + -5);
      uVar12 = *(int32_t *)(unaff_RBP + -1);
      uVar13 = *(int32_t *)(unaff_RBP + 3);
      fVar16 = *(float *)(unaff_RBP + -0x35);
      fVar17 = *(float *)(unaff_RBP + -0x31);
      *(int8_t (*) [16])(unaff_RBX + 0x520) = auVar20;
      *(float *)(unaff_RBX + 0x530) = fVar21;
      *(int32_t *)(unaff_RBX + 0x534) = uVar4;
      *(int32_t *)(unaff_RBX + 0x538) = uVar5;
      *(int32_t *)(unaff_RBX + 0x53c) = uVar6;
      fVar18 = *(float *)(unaff_RBP + -0x11);
      *(float *)(unaff_RBX + 0x540) = fVar22;
      *(int32_t *)(unaff_RBX + 0x544) = uVar7;
      *(int32_t *)(unaff_RBX + 0x548) = uVar8;
      *(int32_t *)(unaff_RBX + 0x54c) = uVar9;
      fVar23 = *(float *)(unaff_RBP + -0x15);
      fVar24 = *(float *)(unaff_RBP + -0x25);
      *(float *)(unaff_RBX + 0x550) = fVar10;
      *(int32_t *)(unaff_RBX + 0x554) = uVar11;
      *(int32_t *)(unaff_RBX + 0x558) = uVar12;
      *(int32_t *)(unaff_RBX + 0x55c) = uVar13;
      fVar1 = *(float *)(lVar3 + 0x8c0);
      fVar19 = auVar20._0_4_ * fVar1;
      fVar16 = fVar16 * fVar1;
      *(float *)(unaff_RBP + -0x39) = fVar19;
      fVar17 = fVar17 * fVar1;
      *(float *)(unaff_RBP + -0x35) = fVar16;
      fVar21 = fVar21 * fVar1;
      *(float *)(unaff_RBP + -0x31) = fVar17;
      fVar24 = fVar24 * fVar1;
      *(float *)(unaff_RBP + -0x29) = fVar21;
      fVar25 = *(float *)(unaff_RBP + -0x21) * fVar1;
      *(float *)(unaff_RBP + -0x25) = fVar24;
      fVar22 = fVar22 * fVar1;
      *(float *)(unaff_RBP + -0x21) = fVar25;
      fVar23 = fVar23 * fVar1;
      *(float *)(unaff_RBP + -0x19) = fVar22;
      fVar18 = fVar18 * fVar1;
      *(float *)(unaff_RBP + -0x15) = fVar23;
      *(float *)(unaff_RBP + -0x11) = fVar18;
      lVar3 = *(longlong *)(lVar3 + 0x8a8);
      if (((fVar10 != *(float *)(lVar3 + 0x60)) ||
          (*(float *)(unaff_RBP + -5) != *(float *)(lVar3 + 100))) ||
         ((*(float *)(unaff_RBP + -1) != *(float *)(lVar3 + 0x68) ||
          ((((((fVar19 != *(float *)(lVar3 + 0x30) || (fVar16 != *(float *)(lVar3 + 0x34))) ||
              (fVar17 != *(float *)(lVar3 + 0x38))) ||
             ((fVar21 != *(float *)(lVar3 + 0x40) || (fVar24 != *(float *)(lVar3 + 0x44))))) ||
            ((fVar25 != *(float *)(lVar3 + 0x48) ||
             ((fVar22 != *(float *)(lVar3 + 0x50) || (fVar23 != *(float *)(lVar3 + 0x54))))))) ||
           (fVar18 != *(float *)(lVar3 + 0x58))))))) {
        uVar14 = *(uint64_t *)(unaff_RBP + -0x31);
        *(uint64_t *)(lVar3 + 0x30) = *(uint64_t *)(unaff_RBP + -0x39);
        *(uint64_t *)(lVar3 + 0x38) = uVar14;
        uVar14 = *(uint64_t *)(unaff_RBP + -0x21);
        *(uint64_t *)(lVar3 + 0x40) = *(uint64_t *)(unaff_RBP + -0x29);
        *(uint64_t *)(lVar3 + 0x48) = uVar14;
        uVar4 = *(int32_t *)(unaff_RBP + -0x15);
        uVar5 = *(int32_t *)(unaff_RBP + -0x11);
        uVar6 = *(int32_t *)(unaff_RBP + -0xd);
        *(int32_t *)(lVar3 + 0x50) = *(int32_t *)(unaff_RBP + -0x19);
        *(int32_t *)(lVar3 + 0x54) = uVar4;
        *(int32_t *)(lVar3 + 0x58) = uVar5;
        *(int32_t *)(lVar3 + 0x5c) = uVar6;
        uVar4 = *(int32_t *)(unaff_RBP + -5);
        uVar5 = *(int32_t *)(unaff_RBP + -1);
        uVar6 = *(int32_t *)(unaff_RBP + 3);
        *(int32_t *)(lVar3 + 0x60) = *(int32_t *)(unaff_RBP + -9);
        *(int32_t *)(lVar3 + 100) = uVar4;
        *(int32_t *)(lVar3 + 0x68) = uVar5;
        *(int32_t *)(lVar3 + 0x6c) = uVar6;
        FUN_180254610();
        FUN_1802eace0();
      }
    }
  }
  return;
}





// 函数: void FUN_18053297f(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void FUN_18053297f(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  float in_XMM4_Da;
  int32_t in_XMM4_Db;
  int32_t in_XMM4_Dc;
  int32_t in_XMM4_Dd;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = *(float *)(unaff_RBP + -0x11);
  *(float *)(unaff_RBX + 0x540) = in_XMM4_Da;
  *(int32_t *)(unaff_RBX + 0x544) = in_XMM4_Db;
  *(int32_t *)(unaff_RBX + 0x548) = in_XMM4_Dc;
  *(int32_t *)(unaff_RBX + 0x54c) = in_XMM4_Dd;
  fVar8 = *(float *)(unaff_RBP + -0x15);
  fVar9 = *(float *)(unaff_RBP + -0x25);
  *(float *)(unaff_RBX + 0x550) = (float)param_2;
  *(int *)(unaff_RBX + 0x554) = (int)((ulonglong)param_2 >> 0x20);
  *(int32_t *)(unaff_RBX + 0x558) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBX + 0x55c) = in_XMM1_Dd;
  fVar1 = *(float *)(in_RAX + 0x8c0);
  *(float *)(unaff_RBP + -0x39) = param_3 * fVar1;
  *(float *)(unaff_RBP + -0x35) = in_XMM5_Da * fVar1;
  *(float *)(unaff_RBP + -0x31) = unaff_XMM6_Da * fVar1;
  fVar9 = fVar9 * fVar1;
  *(float *)(unaff_RBP + -0x29) = param_4 * fVar1;
  fVar10 = *(float *)(unaff_RBP + -0x21) * fVar1;
  *(float *)(unaff_RBP + -0x25) = fVar9;
  *(float *)(unaff_RBP + -0x21) = fVar10;
  fVar8 = fVar8 * fVar1;
  *(float *)(unaff_RBP + -0x19) = in_XMM4_Da * fVar1;
  fVar7 = fVar7 * fVar1;
  *(float *)(unaff_RBP + -0x15) = fVar8;
  *(float *)(unaff_RBP + -0x11) = fVar7;
  lVar2 = *(longlong *)(in_RAX + 0x8a8);
  if ((((((float)param_2 != *(float *)(lVar2 + 0x60)) ||
        (*(float *)(unaff_RBP + -5) != *(float *)(lVar2 + 100))) ||
       (*(float *)(unaff_RBP + -1) != *(float *)(lVar2 + 0x68))) ||
      ((((param_3 * fVar1 != *(float *)(lVar2 + 0x30) ||
         (in_XMM5_Da * fVar1 != *(float *)(lVar2 + 0x34))) ||
        ((unaff_XMM6_Da * fVar1 != *(float *)(lVar2 + 0x38) ||
         ((param_4 * fVar1 != *(float *)(lVar2 + 0x40) || (fVar9 != *(float *)(lVar2 + 0x44)))))))
       || (fVar10 != *(float *)(lVar2 + 0x48))))) ||
     (((in_XMM4_Da * fVar1 != *(float *)(lVar2 + 0x50) || (fVar8 != *(float *)(lVar2 + 0x54))) ||
      (fVar7 != *(float *)(lVar2 + 0x58))))) {
    uVar6 = *(uint64_t *)(unaff_RBP + -0x31);
    *(uint64_t *)(lVar2 + 0x30) = *(uint64_t *)(unaff_RBP + -0x39);
    *(uint64_t *)(lVar2 + 0x38) = uVar6;
    uVar6 = *(uint64_t *)(unaff_RBP + -0x21);
    *(uint64_t *)(lVar2 + 0x40) = *(uint64_t *)(unaff_RBP + -0x29);
    *(uint64_t *)(lVar2 + 0x48) = uVar6;
    uVar3 = *(int32_t *)(unaff_RBP + -0x15);
    uVar4 = *(int32_t *)(unaff_RBP + -0x11);
    uVar5 = *(int32_t *)(unaff_RBP + -0xd);
    *(int32_t *)(lVar2 + 0x50) = *(int32_t *)(unaff_RBP + -0x19);
    *(int32_t *)(lVar2 + 0x54) = uVar3;
    *(int32_t *)(lVar2 + 0x58) = uVar4;
    *(int32_t *)(lVar2 + 0x5c) = uVar5;
    uVar3 = *(int32_t *)(unaff_RBP + -5);
    uVar4 = *(int32_t *)(unaff_RBP + -1);
    uVar5 = *(int32_t *)(unaff_RBP + 3);
    *(int32_t *)(lVar2 + 0x60) = *(int32_t *)(unaff_RBP + -9);
    *(int32_t *)(lVar2 + 100) = uVar3;
    *(int32_t *)(lVar2 + 0x68) = uVar4;
    *(int32_t *)(lVar2 + 0x6c) = uVar5;
    FUN_180254610();
    FUN_1802eace0();
  }
  return;
}





// 函数: void FUN_180532ac3(void)
void FUN_180532ac3(void)

{
  return;
}





// 函数: void FUN_180532acb(void)
void FUN_180532acb(void)

{
  return;
}





// 函数: void FUN_180532ad3(void)
void FUN_180532ad3(void)

{
  return;
}





// 函数: void FUN_180532af0(longlong param_1)
void FUN_180532af0(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2110) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong **)(param_1 + 0x20f0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20f0) + 0x38))();
  }
  FUN_1805d8810();
  FUN_1803968e0(param_1 + 0x290);
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1);
}





// 函数: void FUN_180532b80(longlong param_1)
void FUN_180532b80(longlong param_1)

{
  if (param_1 != 0) {
    FUN_18058f420();
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_1);
  }
  return;
}



ulonglong FUN_180532ba0(uint64_t param_1,uint64_t *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  
  lVar4 = FUN_180532e80();
  if (lVar4 == 0) {
    return 0;
  }
  uVar1 = *(ulonglong *)(lVar4 + 0x20);
  if ((uVar1 & 0x1f) == 0) {
    uVar5 = (*(longlong *)(lVar4 + 0x28) - uVar1) - 0x20;
    if ((0x8000000000000000 < uVar5) &&
       (plVar2 = *(longlong **)(lVar4 + 0x60), plVar2 != (longlong *)0x0)) {
      uVar5 = *plVar2 - 1U & plVar2[1] + 1U;
      puVar6 = *(ulonglong **)(plVar2[3] + uVar5 * 8);
      if ((*puVar6 == 1) || (puVar6[1] == 0)) {
        *puVar6 = uVar1;
        plVar2[1] = uVar5;
      }
      else {
        uVar5 = FUN_18005f430(lVar4);
        if ((char)uVar5 == '\0') goto LAB_180532ca3;
        plVar2 = *(longlong **)(lVar4 + 0x60);
        uVar5 = *plVar2 - 1U & plVar2[1] + 1U;
        puVar6 = *(ulonglong **)(plVar2[3] + uVar5 * 8);
        *puVar6 = uVar1;
        plVar2[1] = uVar5;
      }
      uVar5 = FUN_18005ff50(*(uint64_t *)(lVar4 + 0x50));
      if (uVar5 != 0) {
        *(uint64_t *)(uVar5 + 0x108) = 0;
        puVar6[1] = uVar5;
        *(ulonglong *)(lVar4 + 0x40) = uVar5;
        goto LAB_180532cba;
      }
      plVar2 = *(longlong **)(lVar4 + 0x60);
      uVar5 = plVar2[1] - 1;
      plVar2[1] = *plVar2 - 1U & uVar5;
      puVar6[1] = 0;
    }
LAB_180532ca3:
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
LAB_180532cba:
    uVar3 = *param_2;
    *(uint64_t *)(*(longlong *)(lVar4 + 0x40) + (ulonglong)((uint)uVar1 & 0x1f) * 8) = uVar3;
    *(ulonglong *)(lVar4 + 0x20) = uVar1 + 1;
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar5;
}





// 函数: void FUN_180532d00(uint64_t *param_1)
void FUN_180532d00(uint64_t *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  *param_1 = &unknown_var_7144_ptr;
  uVar3 = param_1[4];
  lVar9 = 0;
  uVar4 = param_1[5];
  for (uVar10 = uVar4; uVar10 != uVar3; uVar10 = uVar10 + 1) {
    if ((uVar10 & 0x1f) == 0) {
      if (lVar9 != 0) {
        lVar6 = param_1[10];
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -0x80000000;
        UNLOCK();
        if (iVar2 == 0) {
          lVar8 = *(longlong *)(lVar6 + 0x28);
          do {
            *(longlong *)(lVar9 + 0x138) = lVar8;
            *(int32_t *)(lVar9 + 0x130) = 1;
            plVar5 = (longlong *)(lVar6 + 0x28);
            LOCK();
            lVar7 = *plVar5;
            bVar11 = lVar8 == lVar7;
            if (bVar11) {
              *plVar5 = lVar9;
              lVar7 = lVar8;
            }
            UNLOCK();
            if (bVar11) break;
            LOCK();
            piVar1 = (int *)(lVar9 + 0x130);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 0x7fffffff;
            UNLOCK();
            lVar8 = lVar7;
          } while (iVar2 == 1);
        }
      }
LAB_180532da2:
      plVar5 = (longlong *)param_1[0xc];
      lVar9 = *(longlong *)
               (*(longlong *)
                 (plVar5[3] +
                 (plVar5[1] +
                  ((uVar10 & 0xffffffffffffffe0) - **(longlong **)(plVar5[3] + plVar5[1] * 8) >> 5)
                 & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_180532da2;
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && ((uVar4 != uVar3 || ((uVar3 & 0x1f) != 0)))) {
    lVar6 = param_1[10];
    LOCK();
    piVar1 = (int *)(lVar9 + 0x130);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 == 0) {
      lVar8 = *(longlong *)(lVar6 + 0x28);
      do {
        *(longlong *)(lVar9 + 0x138) = lVar8;
        *(int32_t *)(lVar9 + 0x130) = 1;
        plVar5 = (longlong *)(lVar6 + 0x28);
        LOCK();
        lVar7 = *plVar5;
        bVar11 = lVar8 == lVar7;
        if (bVar11) {
          *plVar5 = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar11) break;
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (iVar2 == 1);
    }
  }
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &unknown_var_7128_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180532e80(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint64_t *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint64_t *puVar15;
  bool bVar16;
  bool bVar17;
  
  uVar5 = GetCurrentThreadId();
  uVar14 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar13 = (ulonglong)(uVar14 >> 0x10 ^ uVar14);
  puVar7 = (ulonglong *)param_1[6];
  for (puVar3 = puVar7; uVar6 = uVar13, puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[2])
  {
    while( true ) {
      uVar6 = uVar6 & *puVar3 - 1;
      uVar14 = *(uint *)(uVar6 * 0x10 + puVar3[1]);
      if (uVar14 == uVar5) {
        puVar15 = *(uint64_t **)(puVar3[1] + 8 + uVar6 * 0x10);
        if (puVar3 == puVar7) {
          return puVar15;
        }
        do {
          uVar13 = uVar13 & *puVar7 - 1;
          if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
            puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
            LOCK();
            bVar17 = *puVar2 == 0;
            if (bVar17) {
              *puVar2 = uVar5;
            }
            UNLOCK();
            if (bVar17) {
              *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar15;
              return puVar15;
            }
          }
          uVar13 = uVar13 + 1;
        } while( true );
      }
      if (uVar14 == 0) break;
      uVar6 = uVar6 + 1;
    }
  }
  LOCK();
  plVar1 = param_1 + 7;
  lVar9 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  uVar6 = lVar9 + 1;
  puVar15 = (uint64_t *)0x0;
  while( true ) {
    if (*puVar7 >> 1 <= uVar6) {
      LOCK();
      puVar2 = (uint *)(param_1 + 0x4b);
      uVar14 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      if ((uVar14 & 1) == 0) {
        puVar3 = (ulonglong *)param_1[6];
        puVar7 = puVar3;
        uVar12 = *puVar3;
        if (*puVar3 >> 1 <= uVar6) {
          do {
            uVar4 = uVar12;
            uVar12 = uVar4 * 2;
          } while ((uVar4 & 0x7fffffffffffffff) <= uVar6);
          puVar7 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x20 + 0x1f,10);
          if (puVar7 == (ulonglong *)0x0) {
            LOCK();
            param_1[7] = param_1[7] + -1;
            UNLOCK();
            *(int32_t *)(param_1 + 0x4b) = 0;
            return (uint64_t *)0x0;
          }
          *puVar7 = uVar12;
          puVar7[1] = (ulonglong)(-(int)(puVar7 + 3) & 7) + (longlong)(puVar7 + 3);
          puVar11 = puVar15;
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(uint64_t *)((longlong)puVar11 + puVar7[1] + 8) = 0;
            *(int32_t *)((longlong)puVar11 + puVar7[1]) = 0;
            puVar11 = puVar11 + 2;
          }
          puVar7[2] = (ulonglong)puVar3;
          param_1[6] = (longlong)puVar7;
        }
        *(int32_t *)(param_1 + 0x4b) = 0;
      }
    }
    if (uVar6 < (*puVar7 >> 2) + (*puVar7 >> 1)) break;
    puVar7 = (ulonglong *)param_1[6];
  }
  puVar11 = (uint64_t *)*param_1;
  while (puVar11 != (uint64_t *)0x0) {
    if ((*(char *)(puVar11 + 2) != '\0') && (*(char *)(puVar11 + 9) == '\0')) {
      bVar17 = true;
      LOCK();
      bVar16 = *(char *)(puVar11 + 2) == '\x01';
      if (bVar16) {
        *(char *)(puVar11 + 2) = '\0';
      }
      UNLOCK();
      if (bVar16) goto LAB_18053318b;
    }
    plVar1 = puVar11 + 1;
    puVar11 = (uint64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      puVar11 = puVar15;
    }
  }
  bVar17 = false;
  puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x68,10);
  puVar11 = puVar15;
  if (puVar8 != (uint64_t *)0x0) {
    puVar8[1] = 0;
    *(int8_t *)(puVar8 + 2) = 0;
    puVar8[3] = 0;
    *puVar8 = &unknown_var_7128_ptr;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(int8_t *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &unknown_var_7144_ptr;
    puVar8[0xb] = 0x20;
    puVar8[0xc] = 0;
    FUN_18005f430(puVar8);
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    lVar9 = *param_1;
    do {
      puVar11 = (uint64_t *)(lVar9 + 8);
      if (lVar9 == 0) {
        puVar11 = puVar15;
      }
      puVar8[1] = puVar11;
      LOCK();
      lVar10 = *param_1;
      bVar16 = lVar9 == lVar10;
      if (bVar16) {
        *param_1 = (longlong)puVar8;
        lVar10 = lVar9;
      }
      UNLOCK();
      lVar9 = lVar10;
      puVar11 = puVar8;
    } while (!bVar16);
  }
LAB_18053318b:
  if (puVar11 == (uint64_t *)0x0) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
    return (uint64_t *)0x0;
  }
  if (bVar17) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
  }
  do {
    uVar13 = uVar13 & *puVar7 - 1;
    if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
      puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
      LOCK();
      bVar17 = *puVar2 == 0;
      if (bVar17) {
        *puVar2 = uVar5;
      }
      UNLOCK();
      if (bVar17) {
        *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar11;
        return puVar11;
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}





