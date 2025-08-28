#include "TaleWorlds.Native.Split.h"

// 03_rendering_part497.c - 8 个函数

// 函数: void FUN_180532390(longlong param_1,float param_2)
void FUN_180532390(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  
  if ((*(int *)(param_1 + 0x568) - 3U < 2) &&
     (lVar1 = *(longlong *)(param_1 + 0x658), (ushort)(*(short *)(lVar1 + 0x40) - 3U) < 2)) {
    puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + 0xf0);
    (**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,&fStack_98);
    if ((-1e+06 <= fStack_68) &&
       (((**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,&fStack_98),
        fStack_68 < 1e+06 &&
        (lVar3 = *(longlong *)(param_1 + 0x660),
        fVar7 = *(float *)(lVar3 + 0x438) - *(float *)(param_1 + 0x550),
        fVar5 = *(float *)(lVar3 + 0x440) - *(float *)(param_1 + 0x558),
        fVar6 = *(float *)(lVar3 + 0x43c) - *(float *)(param_1 + 0x554),
        fVar5 = (fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) * 0.75 + 200.0,
        (fVar5 / (fVar5 * 10.0 + 10000.0)) * *(float *)(lVar3 + 0x8220) <
        param_2 + *(float *)(lVar1 + 0x34))))) {
      (**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,&fStack_98);
      fStack_80 = 0.0;
      fStack_90 = 0.0;
      fVar5 = fStack_88 * fStack_88 + fStack_84 * fStack_84;
      auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar8._0_4_;
      uStack_8c = 0x7f7fffff;
      fStack_98 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fStack_78 = 0.0;
      fStack_74 = 0.0;
      fStack_70 = 1.0;
      uStack_6c = 0;
      fStack_88 = fStack_88 * fStack_98;
      fStack_98 = fStack_84 * fStack_98;
      fStack_94 = -fStack_88;
      fStack_84 = fStack_98;
      cVar4 = FUN_18063b400(&fStack_98);
      if ((cVar4 != '\0') &&
         (((cVar4 = FUN_18063b400(&fStack_88), cVar4 != '\0' &&
           (cVar4 = FUN_18063b400(&fStack_78), cVar4 != '\0')) &&
          (cVar4 = FUN_18063b400(&fStack_68), cVar4 != '\0')))) {
        auVar8._4_4_ = fStack_94;
        auVar8._0_4_ = fStack_98;
        auVar8._8_4_ = fStack_90;
        auVar8._12_4_ = uStack_8c;
        *(undefined1 (*) [16])(param_1 + 0x520) = auVar8;
        *(float *)(param_1 + 0x530) = fStack_88;
        *(float *)(param_1 + 0x534) = fStack_84;
        *(float *)(param_1 + 0x538) = fStack_80;
        *(undefined4 *)(param_1 + 0x53c) = uStack_7c;
        *(float *)(param_1 + 0x540) = fStack_78;
        *(float *)(param_1 + 0x544) = fStack_74;
        *(float *)(param_1 + 0x548) = fStack_70;
        *(undefined4 *)(param_1 + 0x54c) = uStack_6c;
        *(float *)(param_1 + 0x550) = fStack_68;
        *(float *)(param_1 + 0x554) = fStack_64;
        *(float *)(param_1 + 0x558) = fStack_60;
        *(undefined4 *)(param_1 + 0x55c) = uStack_5c;
        fVar5 = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0);
        fStack_98 = fStack_98 * fVar5;
        fStack_94 = fStack_94 * fVar5;
        fStack_90 = fStack_90 * fVar5;
        fStack_88 = fStack_88 * fVar5;
        fStack_84 = fStack_84 * fVar5;
        fStack_80 = fStack_80 * fVar5;
        fStack_78 = fStack_78 * fVar5;
        fStack_74 = fStack_74 * fVar5;
        fStack_70 = fStack_70 * fVar5;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
        if (((((fStack_68 != *(float *)(lVar1 + 0x60)) || (fStack_64 != *(float *)(lVar1 + 100))) ||
             ((fStack_60 != *(float *)(lVar1 + 0x68) ||
              ((fStack_98 != *(float *)(lVar1 + 0x30) || (fStack_94 != *(float *)(lVar1 + 0x34))))))
             ) || (fStack_90 != *(float *)(lVar1 + 0x38))) ||
           (((((fStack_88 != *(float *)(lVar1 + 0x40) || (fStack_84 != *(float *)(lVar1 + 0x44))) ||
              (fStack_80 != *(float *)(lVar1 + 0x48))) ||
             ((fStack_78 != *(float *)(lVar1 + 0x50) || (fStack_74 != *(float *)(lVar1 + 0x54)))))
            || (fStack_70 != *(float *)(lVar1 + 0x58))))) {
          *(ulonglong *)(lVar1 + 0x30) = CONCAT44(fStack_94,fStack_98);
          *(ulonglong *)(lVar1 + 0x38) = CONCAT44(uStack_8c,fStack_90);
          *(ulonglong *)(lVar1 + 0x40) = CONCAT44(fStack_84,fStack_88);
          *(ulonglong *)(lVar1 + 0x48) = CONCAT44(uStack_7c,fStack_80);
          *(float *)(lVar1 + 0x50) = fStack_78;
          *(float *)(lVar1 + 0x54) = fStack_74;
          *(float *)(lVar1 + 0x58) = fStack_70;
          *(undefined4 *)(lVar1 + 0x5c) = uStack_6c;
          *(float *)(lVar1 + 0x60) = fStack_68;
          *(float *)(lVar1 + 100) = fStack_64;
          *(float *)(lVar1 + 0x68) = fStack_60;
          *(undefined4 *)(lVar1 + 0x6c) = uStack_5c;
          FUN_180254610();
          FUN_1802eace0();
        }
      }
    }
  }
  return;
}





// 函数: void FUN_1805323c0(longlong param_1)
void FUN_1805323c0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  char cVar16;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R11;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float unaff_XMM6_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RDI;
  lVar2 = *(longlong *)(param_1 + 0x658);
  if ((ushort)(*(short *)(lVar2 + 0x40) - 3U) < 2) {
    lVar3 = *(longlong *)(lVar2 + 0x18);
    *(undefined8 *)(in_R11 + 8) = unaff_RSI;
    puVar4 = *(undefined8 **)(lVar3 + 0xf0);
    (**(code **)(*(longlong *)*puVar4 + 200))((longlong *)*puVar4,unaff_RBP + -0x39);
    if (((-1e+06 <= *(float *)(unaff_RBP + -9)) &&
        ((**(code **)(*(longlong *)*puVar4 + 200))((longlong *)*puVar4,unaff_RBP + -0x39),
        *(float *)(unaff_RBP + -9) < 1e+06)) &&
       (lVar3 = *(longlong *)(unaff_RBX + 0x660),
       fVar19 = *(float *)(lVar3 + 0x438) - *(float *)(unaff_RBX + 0x550),
       fVar17 = *(float *)(lVar3 + 0x440) - *(float *)(unaff_RBX + 0x558),
       fVar18 = *(float *)(lVar3 + 0x43c) - *(float *)(unaff_RBX + 0x554),
       fVar17 = (fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) * 0.75 + 200.0,
       (fVar17 / (fVar17 * 10.0 + 10000.0)) * *(float *)(lVar3 + 0x8220) <
       unaff_XMM6_Da + *(float *)(lVar2 + 0x34))) {
      (**(code **)(*(longlong *)*puVar4 + 200))((longlong *)*puVar4,unaff_RBP + -0x39);
      fVar17 = *(float *)(unaff_RBP + -0x25);
      fVar18 = *(float *)(unaff_RBP + -0x29);
      *(undefined4 *)(unaff_RBP + -0x21) = 0;
      *(undefined4 *)(unaff_RBP + -0x31) = 0;
      fVar19 = fVar18 * fVar18 + fVar17 * fVar17;
      auVar21 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar24 = auVar21._0_4_;
      *(undefined4 *)(unaff_RBP + -0x2d) = 0x7f7fffff;
      fVar19 = fVar24 * 0.5 * (3.0 - fVar19 * fVar24 * fVar24);
      *(undefined4 *)(unaff_RBP + -0x19) = 0;
      *(undefined4 *)(unaff_RBP + -0x15) = 0;
      *(undefined4 *)(unaff_RBP + -0x11) = 0x3f800000;
      *(undefined4 *)(unaff_RBP + -0xd) = 0;
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
        auVar21 = *(undefined1 (*) [16])(unaff_RBP + -0x39);
        fVar22 = *(float *)(unaff_RBP + -0x29);
        uVar5 = *(undefined4 *)(unaff_RBP + -0x25);
        uVar6 = *(undefined4 *)(unaff_RBP + -0x21);
        uVar7 = *(undefined4 *)(unaff_RBP + -0x1d);
        fVar23 = *(float *)(unaff_RBP + -0x19);
        uVar8 = *(undefined4 *)(unaff_RBP + -0x15);
        uVar9 = *(undefined4 *)(unaff_RBP + -0x11);
        uVar10 = *(undefined4 *)(unaff_RBP + -0xd);
        lVar2 = *(longlong *)(unaff_RBX + 0x6d8);
        fVar11 = *(float *)(unaff_RBP + -9);
        uVar12 = *(undefined4 *)(unaff_RBP + -5);
        uVar13 = *(undefined4 *)(unaff_RBP + -1);
        uVar14 = *(undefined4 *)(unaff_RBP + 3);
        fVar17 = *(float *)(unaff_RBP + -0x35);
        fVar18 = *(float *)(unaff_RBP + -0x31);
        *(undefined1 (*) [16])(unaff_RBX + 0x520) = auVar21;
        *(float *)(unaff_RBX + 0x530) = fVar22;
        *(undefined4 *)(unaff_RBX + 0x534) = uVar5;
        *(undefined4 *)(unaff_RBX + 0x538) = uVar6;
        *(undefined4 *)(unaff_RBX + 0x53c) = uVar7;
        fVar19 = *(float *)(unaff_RBP + -0x11);
        *(float *)(unaff_RBX + 0x540) = fVar23;
        *(undefined4 *)(unaff_RBX + 0x544) = uVar8;
        *(undefined4 *)(unaff_RBX + 0x548) = uVar9;
        *(undefined4 *)(unaff_RBX + 0x54c) = uVar10;
        fVar24 = *(float *)(unaff_RBP + -0x15);
        fVar25 = *(float *)(unaff_RBP + -0x25);
        *(float *)(unaff_RBX + 0x550) = fVar11;
        *(undefined4 *)(unaff_RBX + 0x554) = uVar12;
        *(undefined4 *)(unaff_RBX + 0x558) = uVar13;
        *(undefined4 *)(unaff_RBX + 0x55c) = uVar14;
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
          uVar15 = *(undefined8 *)(unaff_RBP + -0x31);
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(unaff_RBP + -0x39);
          *(undefined8 *)(lVar2 + 0x38) = uVar15;
          uVar15 = *(undefined8 *)(unaff_RBP + -0x21);
          *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(unaff_RBP + -0x29);
          *(undefined8 *)(lVar2 + 0x48) = uVar15;
          uVar5 = *(undefined4 *)(unaff_RBP + -0x15);
          uVar6 = *(undefined4 *)(unaff_RBP + -0x11);
          uVar7 = *(undefined4 *)(unaff_RBP + -0xd);
          *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(unaff_RBP + -0x19);
          *(undefined4 *)(lVar2 + 0x54) = uVar5;
          *(undefined4 *)(lVar2 + 0x58) = uVar6;
          *(undefined4 *)(lVar2 + 0x5c) = uVar7;
          uVar5 = *(undefined4 *)(unaff_RBP + -5);
          uVar6 = *(undefined4 *)(unaff_RBP + -1);
          uVar7 = *(undefined4 *)(unaff_RBP + 3);
          *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(unaff_RBP + -9);
          *(undefined4 *)(lVar2 + 100) = uVar5;
          *(undefined4 *)(lVar2 + 0x68) = uVar6;
          *(undefined4 *)(lVar2 + 0x6c) = uVar7;
          FUN_180254610();
          FUN_1802eace0();
        }
      }
    }
  }
  return;
}





// 函数: void FUN_1805323e5(void)
void FUN_1805323e5(void)

{
  float fVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  char cVar15;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  longlong in_R11;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float unaff_XMM6_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RSI;
  puVar2 = *(undefined8 **)(in_RAX + 0xf0);
  (**(code **)(*(longlong *)*puVar2 + 200))();
  if (((-1e+06 <= *(float *)(unaff_RBP + -9)) &&
      ((**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,unaff_RBP + -0x39),
      *(float *)(unaff_RBP + -9) < 1e+06)) &&
     (lVar3 = *(longlong *)(unaff_RBX + 0x660),
     fVar18 = *(float *)(lVar3 + 0x438) - *(float *)(unaff_RBX + 0x550),
     fVar16 = *(float *)(lVar3 + 0x440) - *(float *)(unaff_RBX + 0x558),
     fVar17 = *(float *)(lVar3 + 0x43c) - *(float *)(unaff_RBX + 0x554),
     fVar16 = (fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16) * 0.75 + 200.0,
     (fVar16 / (fVar16 * 10.0 + 10000.0)) * *(float *)(lVar3 + 0x8220) <
     unaff_XMM6_Da + *(float *)(unaff_RDI + 0x34))) {
    (**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,unaff_RBP + -0x39);
    fVar16 = *(float *)(unaff_RBP + -0x25);
    fVar17 = *(float *)(unaff_RBP + -0x29);
    *(undefined4 *)(unaff_RBP + -0x21) = 0;
    *(undefined4 *)(unaff_RBP + -0x31) = 0;
    fVar18 = fVar17 * fVar17 + fVar16 * fVar16;
    auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar23 = auVar20._0_4_;
    *(undefined4 *)(unaff_RBP + -0x2d) = 0x7f7fffff;
    fVar18 = fVar23 * 0.5 * (3.0 - fVar18 * fVar23 * fVar23);
    *(undefined4 *)(unaff_RBP + -0x19) = 0;
    *(undefined4 *)(unaff_RBP + -0x15) = 0;
    *(undefined4 *)(unaff_RBP + -0x11) = 0x3f800000;
    *(undefined4 *)(unaff_RBP + -0xd) = 0;
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
      auVar20 = *(undefined1 (*) [16])(unaff_RBP + -0x39);
      fVar21 = *(float *)(unaff_RBP + -0x29);
      uVar4 = *(undefined4 *)(unaff_RBP + -0x25);
      uVar5 = *(undefined4 *)(unaff_RBP + -0x21);
      uVar6 = *(undefined4 *)(unaff_RBP + -0x1d);
      fVar22 = *(float *)(unaff_RBP + -0x19);
      uVar7 = *(undefined4 *)(unaff_RBP + -0x15);
      uVar8 = *(undefined4 *)(unaff_RBP + -0x11);
      uVar9 = *(undefined4 *)(unaff_RBP + -0xd);
      lVar3 = *(longlong *)(unaff_RBX + 0x6d8);
      fVar10 = *(float *)(unaff_RBP + -9);
      uVar11 = *(undefined4 *)(unaff_RBP + -5);
      uVar12 = *(undefined4 *)(unaff_RBP + -1);
      uVar13 = *(undefined4 *)(unaff_RBP + 3);
      fVar16 = *(float *)(unaff_RBP + -0x35);
      fVar17 = *(float *)(unaff_RBP + -0x31);
      *(undefined1 (*) [16])(unaff_RBX + 0x520) = auVar20;
      *(float *)(unaff_RBX + 0x530) = fVar21;
      *(undefined4 *)(unaff_RBX + 0x534) = uVar4;
      *(undefined4 *)(unaff_RBX + 0x538) = uVar5;
      *(undefined4 *)(unaff_RBX + 0x53c) = uVar6;
      fVar18 = *(float *)(unaff_RBP + -0x11);
      *(float *)(unaff_RBX + 0x540) = fVar22;
      *(undefined4 *)(unaff_RBX + 0x544) = uVar7;
      *(undefined4 *)(unaff_RBX + 0x548) = uVar8;
      *(undefined4 *)(unaff_RBX + 0x54c) = uVar9;
      fVar23 = *(float *)(unaff_RBP + -0x15);
      fVar24 = *(float *)(unaff_RBP + -0x25);
      *(float *)(unaff_RBX + 0x550) = fVar10;
      *(undefined4 *)(unaff_RBX + 0x554) = uVar11;
      *(undefined4 *)(unaff_RBX + 0x558) = uVar12;
      *(undefined4 *)(unaff_RBX + 0x55c) = uVar13;
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
        uVar14 = *(undefined8 *)(unaff_RBP + -0x31);
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(unaff_RBP + -0x39);
        *(undefined8 *)(lVar3 + 0x38) = uVar14;
        uVar14 = *(undefined8 *)(unaff_RBP + -0x21);
        *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(unaff_RBP + -0x29);
        *(undefined8 *)(lVar3 + 0x48) = uVar14;
        uVar4 = *(undefined4 *)(unaff_RBP + -0x15);
        uVar5 = *(undefined4 *)(unaff_RBP + -0x11);
        uVar6 = *(undefined4 *)(unaff_RBP + -0xd);
        *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(unaff_RBP + -0x19);
        *(undefined4 *)(lVar3 + 0x54) = uVar4;
        *(undefined4 *)(lVar3 + 0x58) = uVar5;
        *(undefined4 *)(lVar3 + 0x5c) = uVar6;
        uVar4 = *(undefined4 *)(unaff_RBP + -5);
        uVar5 = *(undefined4 *)(unaff_RBP + -1);
        uVar6 = *(undefined4 *)(unaff_RBP + 3);
        *(undefined4 *)(lVar3 + 0x60) = *(undefined4 *)(unaff_RBP + -9);
        *(undefined4 *)(lVar3 + 100) = uVar4;
        *(undefined4 *)(lVar3 + 0x68) = uVar5;
        *(undefined4 *)(lVar3 + 0x6c) = uVar6;
        FUN_180254610();
        FUN_1802eace0();
      }
    }
  }
  return;
}





// 函数: void FUN_1805325cf(undefined8 param_1,undefined8 param_2,float param_3,float param_4)
void FUN_1805325cf(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float in_XMM4_Da;
  undefined4 in_XMM4_Db;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = *(float *)(unaff_RBP + -0x11);
  *(float *)(unaff_RBX + 0x540) = in_XMM4_Da;
  *(undefined4 *)(unaff_RBX + 0x544) = in_XMM4_Db;
  *(undefined4 *)(unaff_RBX + 0x548) = in_XMM4_Dc;
  *(undefined4 *)(unaff_RBX + 0x54c) = in_XMM4_Dd;
  fVar8 = *(float *)(unaff_RBP + -0x15);
  fVar9 = *(float *)(unaff_RBP + -0x25);
  *(float *)(unaff_RBX + 0x550) = (float)param_2;
  *(int *)(unaff_RBX + 0x554) = (int)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(unaff_RBX + 0x558) = in_XMM1_Dc;
  *(undefined4 *)(unaff_RBX + 0x55c) = in_XMM1_Dd;
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
    uVar6 = *(undefined8 *)(unaff_RBP + -0x31);
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(unaff_RBP + -0x39);
    *(undefined8 *)(lVar2 + 0x38) = uVar6;
    uVar6 = *(undefined8 *)(unaff_RBP + -0x21);
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(unaff_RBP + -0x29);
    *(undefined8 *)(lVar2 + 0x48) = uVar6;
    uVar3 = *(undefined4 *)(unaff_RBP + -0x15);
    uVar4 = *(undefined4 *)(unaff_RBP + -0x11);
    uVar5 = *(undefined4 *)(unaff_RBP + -0xd);
    *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(unaff_RBP + -0x19);
    *(undefined4 *)(lVar2 + 0x54) = uVar3;
    *(undefined4 *)(lVar2 + 0x58) = uVar4;
    *(undefined4 *)(lVar2 + 0x5c) = uVar5;
    uVar3 = *(undefined4 *)(unaff_RBP + -5);
    uVar4 = *(undefined4 *)(unaff_RBP + -1);
    uVar5 = *(undefined4 *)(unaff_RBP + 3);
    *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)(unaff_RBP + -9);
    *(undefined4 *)(lVar2 + 100) = uVar3;
    *(undefined4 *)(lVar2 + 0x68) = uVar4;
    *(undefined4 *)(lVar2 + 0x6c) = uVar5;
    FUN_180254610();
    FUN_1802eace0();
  }
  return;
}





// 函数: void FUN_180532713(void)
void FUN_180532713(void)

{
  return;
}





// 函数: void FUN_18053271b(void)
void FUN_18053271b(void)

{
  return;
}





// 函数: void FUN_180532723(void)
void FUN_180532723(void)

{
  return;
}





// 函数: void FUN_180532740(longlong param_1,float param_2)
void FUN_180532740(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  
  if ((*(int *)(param_1 + 0x568) - 3U < 2) &&
     (lVar1 = *(longlong *)(param_1 + 0x658), (ushort)(*(short *)(lVar1 + 0x40) - 3U) < 2)) {
    puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0x18) + 0xf0);
    (**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,&fStack_98);
    if ((-1e+06 <= fStack_68) &&
       (((**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,&fStack_98),
        fStack_68 < 1e+06 &&
        (lVar3 = *(longlong *)(param_1 + 0x660),
        fVar7 = *(float *)(lVar3 + 0x438) - *(float *)(param_1 + 0x550),
        fVar5 = *(float *)(lVar3 + 0x440) - *(float *)(param_1 + 0x558),
        fVar6 = *(float *)(lVar3 + 0x43c) - *(float *)(param_1 + 0x554),
        fVar5 = (fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) * 0.32 + 79.36508,
        (fVar5 / (fVar5 * 18.0 + 10000.0)) * *(float *)(lVar3 + 0x8220) <
        param_2 + *(float *)(lVar1 + 0x34))))) {
      (**(code **)(*(longlong *)*puVar2 + 200))((longlong *)*puVar2,&fStack_98);
      fStack_80 = 0.0;
      fStack_90 = 0.0;
      fVar5 = fStack_88 * fStack_88 + fStack_84 * fStack_84;
      auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar8._0_4_;
      uStack_8c = 0x7f7fffff;
      fStack_98 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fStack_78 = 0.0;
      fStack_74 = 0.0;
      fStack_70 = 1.0;
      uStack_6c = 0;
      fStack_88 = fStack_88 * fStack_98;
      fStack_98 = fStack_84 * fStack_98;
      fStack_94 = -fStack_88;
      fStack_84 = fStack_98;
      cVar4 = FUN_18063b400(&fStack_98);
      if ((cVar4 != '\0') &&
         (((cVar4 = FUN_18063b400(&fStack_88), cVar4 != '\0' &&
           (cVar4 = FUN_18063b400(&fStack_78), cVar4 != '\0')) &&
          (cVar4 = FUN_18063b400(&fStack_68), cVar4 != '\0')))) {
        auVar8._4_4_ = fStack_94;
        auVar8._0_4_ = fStack_98;
        auVar8._8_4_ = fStack_90;
        auVar8._12_4_ = uStack_8c;
        *(undefined1 (*) [16])(param_1 + 0x520) = auVar8;
        *(float *)(param_1 + 0x530) = fStack_88;
        *(float *)(param_1 + 0x534) = fStack_84;
        *(float *)(param_1 + 0x538) = fStack_80;
        *(undefined4 *)(param_1 + 0x53c) = uStack_7c;
        *(float *)(param_1 + 0x540) = fStack_78;
        *(float *)(param_1 + 0x544) = fStack_74;
        *(float *)(param_1 + 0x548) = fStack_70;
        *(undefined4 *)(param_1 + 0x54c) = uStack_6c;
        *(float *)(param_1 + 0x550) = fStack_68;
        *(float *)(param_1 + 0x554) = fStack_64;
        *(float *)(param_1 + 0x558) = fStack_60;
        *(undefined4 *)(param_1 + 0x55c) = uStack_5c;
        fVar5 = *(float *)(*(longlong *)(param_1 + 0x6d8) + 0x8c0);
        fStack_98 = fStack_98 * fVar5;
        fStack_94 = fStack_94 * fVar5;
        fStack_90 = fStack_90 * fVar5;
        fStack_88 = fStack_88 * fVar5;
        fStack_84 = fStack_84 * fVar5;
        fStack_80 = fStack_80 * fVar5;
        fStack_78 = fStack_78 * fVar5;
        fStack_74 = fStack_74 * fVar5;
        fStack_70 = fStack_70 * fVar5;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8);
        if (((((fStack_68 != *(float *)(lVar1 + 0x60)) || (fStack_64 != *(float *)(lVar1 + 100))) ||
             ((fStack_60 != *(float *)(lVar1 + 0x68) ||
              ((fStack_98 != *(float *)(lVar1 + 0x30) || (fStack_94 != *(float *)(lVar1 + 0x34))))))
             ) || (fStack_90 != *(float *)(lVar1 + 0x38))) ||
           (((((fStack_88 != *(float *)(lVar1 + 0x40) || (fStack_84 != *(float *)(lVar1 + 0x44))) ||
              (fStack_80 != *(float *)(lVar1 + 0x48))) ||
             ((fStack_78 != *(float *)(lVar1 + 0x50) || (fStack_74 != *(float *)(lVar1 + 0x54)))))
            || (fStack_70 != *(float *)(lVar1 + 0x58))))) {
          *(ulonglong *)(lVar1 + 0x30) = CONCAT44(fStack_94,fStack_98);
          *(ulonglong *)(lVar1 + 0x38) = CONCAT44(uStack_8c,fStack_90);
          *(ulonglong *)(lVar1 + 0x40) = CONCAT44(fStack_84,fStack_88);
          *(ulonglong *)(lVar1 + 0x48) = CONCAT44(uStack_7c,fStack_80);
          *(float *)(lVar1 + 0x50) = fStack_78;
          *(float *)(lVar1 + 0x54) = fStack_74;
          *(float *)(lVar1 + 0x58) = fStack_70;
          *(undefined4 *)(lVar1 + 0x5c) = uStack_6c;
          *(float *)(lVar1 + 0x60) = fStack_68;
          *(float *)(lVar1 + 100) = fStack_64;
          *(float *)(lVar1 + 0x68) = fStack_60;
          *(undefined4 *)(lVar1 + 0x6c) = uStack_5c;
          FUN_180254610();
          FUN_1802eace0();
        }
      }
    }
  }
  return;
}





