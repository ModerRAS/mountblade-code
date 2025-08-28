#include "TaleWorlds.Native.Split.h"

// 99_part_05_part022.c - 8 个函数

// 函数: void FUN_1802e7550(longlong param_1,byte *param_2,undefined8 *param_3)
void FUN_1802e7550(longlong param_1,byte *param_2,undefined8 *param_3)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_98 = *param_3;
  uStack_90 = param_3[1];
  uStack_88 = param_3[2];
  uStack_80 = param_3[3];
  lVar3 = *(longlong *)(param_1 + 0xf0);
  uStack_78 = param_3[4];
  uStack_70 = param_3[5];
  uStack_58 = param_3[8];
  uStack_50 = param_3[9];
  uStack_68 = param_3[6];
  uStack_60 = param_3[7];
  uStack_38 = *(undefined4 *)(param_3 + 0xc);
  uStack_34 = *(undefined4 *)((longlong)param_3 + 100);
  uStack_30 = *(undefined4 *)(param_3 + 0xd);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x6c);
  uStack_48 = param_3[10];
  uStack_40 = param_3[0xb];
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0xf8) - lVar3 >> 3 != 0) {
    lVar6 = 0;
    do {
      fVar1 = *(float *)(param_2 + 0x174);
      lVar3 = (**(code **)(**(longlong **)(lVar6 + lVar3) + 0x198))();
      if ((fVar1 <= 0.0) ||
         (fVar7 = (float)func_0x000180285a90(param_1 + 0x70,*(undefined4 *)(lVar3 + 0x30)),
         fVar1 <= fVar7)) {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      if ((*param_2 & 0x40) != 0) {
        bVar4 = bVar4 | (byte)((uint)*(undefined4 *)(param_1 + 0x2ac) >> 0x1e) & 1;
      }
      if (bVar4 == 0) {
        plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0xf0));
        (**(code **)(*plVar2 + 0x1c8))
                  (plVar2,param_2,*(undefined8 *)(param_1 + 0x20),param_1 + 0x70,&uStack_98);
      }
      lVar3 = *(longlong *)(param_1 + 0xf0);
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar3 >> 3));
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1802fa300(*(longlong *)(param_1 + 0x260),param_2,&uStack_98);
  }
  *(byte *)(param_1 + 0x2e9) = *(byte *)(param_1 + 0x2e9) | 2;
  return;
}






// 函数: void FUN_1802e75b1(undefined8 param_1,longlong param_2)
void FUN_1802e75b1(undefined8 param_1,longlong param_2)

{
  float fVar1;
  longlong in_RAX;
  longlong lVar2;
  byte bVar3;
  longlong unaff_RBX;
  int iVar4;
  undefined8 unaff_RBP;
  byte *unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar5;
  longlong in_R11;
  undefined8 unaff_R14;
  float fVar6;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 in_XMM1_Qa;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBP;
  iVar4 = 0;
  *(int *)(in_R11 + -0x38) = (int)param_1;
  *(int *)(in_R11 + -0x34) = (int)((ulonglong)param_1 >> 0x20);
  *(undefined4 *)(in_R11 + -0x30) = in_XMM0_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = in_XMM0_Dd;
  *(undefined8 *)(in_R11 + 0x18) = unaff_R14;
  *(int *)(in_R11 + -0x48) = (int)in_XMM1_Qa;
  *(int *)(in_R11 + -0x44) = (int)((ulonglong)in_XMM1_Qa >> 0x20);
  *(undefined4 *)(in_R11 + -0x40) = in_XMM1_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = in_XMM1_Dd;
  if (in_RAX >> 3 != 0) {
    *(undefined8 *)(in_R11 + 0x10) = unaff_RDI;
    lVar5 = 0;
    *(undefined4 *)(in_R11 + -0x18) = unaff_XMM6_Da;
    *(undefined4 *)(in_R11 + -0x14) = unaff_XMM6_Db;
    *(undefined4 *)(in_R11 + -0x10) = unaff_XMM6_Dc;
    *(undefined4 *)(in_R11 + -0xc) = unaff_XMM6_Dd;
    *(undefined4 *)(in_R11 + -0x28) = unaff_XMM7_Da;
    *(undefined4 *)(in_R11 + -0x24) = unaff_XMM7_Db;
    *(undefined4 *)(in_R11 + -0x20) = unaff_XMM7_Dc;
    *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
    do {
      fVar1 = *(float *)(unaff_RSI + 0x174);
      lVar2 = (**(code **)(**(longlong **)(lVar5 + param_2) + 0x198))();
      if ((fVar1 <= 0.0) ||
         (fVar6 = (float)func_0x000180285a90(unaff_RBX + 0x70,*(undefined4 *)(lVar2 + 0x30)),
         fVar1 <= fVar6)) {
        bVar3 = 0;
      }
      else {
        bVar3 = 1;
      }
      if ((*unaff_RSI & 0x40) != 0) {
        bVar3 = bVar3 | (byte)((uint)*(undefined4 *)(unaff_RBX + 0x2ac) >> 0x1e) & 1;
      }
      if (bVar3 == 0) {
        (**(code **)(**(longlong **)(lVar5 + *(longlong *)(unaff_RBX + 0xf0)) + 0x1c8))();
      }
      param_2 = *(longlong *)(unaff_RBX + 0xf0);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((ulonglong)(longlong)iVar4 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0xf8) - param_2 >> 3));
  }
  if (*(longlong *)(unaff_RBX + 0x260) != 0) {
    FUN_1802fa300();
  }
  *(byte *)(unaff_RBX + 0x2e9) = *(byte *)(unaff_RBX + 0x2e9) | 2;
  return;
}






// 函数: void FUN_1802e75d2(undefined8 param_1,longlong param_2)
void FUN_1802e75d2(undefined8 param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  byte bVar3;
  longlong unaff_RBX;
  uint unaff_EBP;
  byte *unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  longlong in_R11;
  float fVar5;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RDI;
  uVar4 = (ulonglong)unaff_EBP;
  *(undefined4 *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
  do {
    fVar1 = *(float *)(unaff_RSI + 0x174);
    lVar2 = (**(code **)(**(longlong **)(uVar4 + param_2) + 0x198))();
    if (fVar1 <= 0.0) {
LAB_1802e7621:
      bVar3 = 0;
    }
    else {
      fVar5 = (float)func_0x000180285a90(unaff_RBX + 0x70,*(undefined4 *)(lVar2 + 0x30));
      if (fVar1 <= fVar5) goto LAB_1802e7621;
      bVar3 = 1;
    }
    if ((*unaff_RSI & 0x40) != 0) {
      bVar3 = bVar3 | (byte)((uint)*(undefined4 *)(unaff_RBX + 0x2ac) >> 0x1e) & 1;
    }
    if (bVar3 == 0) {
      (**(code **)(**(longlong **)(uVar4 + *(longlong *)(unaff_RBX + 0xf0)) + 0x1c8))();
    }
    param_2 = *(longlong *)(unaff_RBX + 0xf0);
    unaff_EBP = unaff_EBP + 1;
    uVar4 = uVar4 + 8;
    if ((ulonglong)(*(longlong *)(unaff_RBX + 0xf8) - param_2 >> 3) <=
        (ulonglong)(longlong)(int)unaff_EBP) {
      if (*(longlong *)(unaff_RBX + 0x260) != 0) {
        FUN_1802fa300();
      }
      *(byte *)(unaff_RBX + 0x2e9) = *(byte *)(unaff_RBX + 0x2e9) | 2;
      return;
    }
  } while( true );
}






// 函数: void FUN_1802e76a1(void)
void FUN_1802e76a1(void)

{
  longlong unaff_RBX;
  
  if (*(longlong *)(unaff_RBX + 0x260) != 0) {
    FUN_1802fa300();
  }
  *(byte *)(unaff_RBX + 0x2e9) = *(byte *)(unaff_RBX + 0x2e9) | 2;
  return;
}






// 函数: void FUN_1802e76bd(void)
void FUN_1802e76bd(void)

{
  longlong unaff_RBX;
  
  FUN_1802fa300();
  *(byte *)(unaff_RBX + 0x2e9) = *(byte *)(unaff_RBX + 0x2e9) | 2;
  return;
}






// 函数: void FUN_1802e76f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)
void FUN_1802e76f0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  longlong *plStackX_8;
  undefined8 uStackX_10;
  undefined8 uVar26;
  
  uVar26 = 0xfffffffffffffffe;
  iVar17 = 0;
  uStackX_10 = param_2;
  if (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0) {
    lVar14 = 0;
    do {
      plVar19 = *(longlong **)(lVar14 + *(longlong *)(param_1 + 0xf0));
      (**(code **)(*plVar19 + 0x1d0))(plVar19,param_2,param_3,param_1 + 0x70,uVar26);
      iVar17 = iVar17 + 1;
      lVar14 = lVar14 + 8;
    } while ((ulonglong)(longlong)iVar17 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
  }
  lVar14 = FUN_1803a0010(param_4,param_1);
  if (lVar14 != 0) {
    plVar4 = *(longlong **)(lVar14 + 8);
    lVar18 = *plVar4;
    plVar19 = plVar4;
    if (lVar18 == 0) {
      plVar19 = plVar4 + 1;
      lVar18 = *plVar19;
      while (lVar18 == 0) {
        plVar19 = plVar19 + 1;
        lVar18 = *plVar19;
      }
    }
    if (lVar18 != plVar4[*(longlong *)(lVar14 + 0x10)]) {
      do {
        FUN_1803a02b0(param_4,&plStackX_8,*(undefined8 *)(lVar18 + 8));
        (**(code **)(*plStackX_8 + 0xe0))
                  (plStackX_8,
                   CONCAT31((uint3)(*(uint *)(param_1 + 0x2ac) >> 0x1e),
                            ~(byte)(*(uint *)(param_1 + 0x2ac) >> 0x16)) & 0xffffff01);
        plVar4 = plStackX_8;
        FUN_180279640(plStackX_8,*(undefined8 *)(lVar18 + 8),0);
        lVar15 = *plVar4;
        if (*(code **)(lVar15 + 0x158) == (code *)&UNK_18027d980) {
          pfVar16 = (float *)(plVar4 + 0x66);
        }
        else {
          pfVar16 = (float *)(**(code **)(lVar15 + 0x158))(plVar4);
          lVar15 = *plVar4;
        }
        fVar5 = *(float *)(param_1 + 0x70);
        fVar6 = *(float *)(param_1 + 0x74);
        fVar7 = *(float *)(param_1 + 0x78);
        fVar8 = *(float *)(param_1 + 0x80);
        fVar9 = *(float *)(param_1 + 0x84);
        fVar10 = *(float *)(param_1 + 0x88);
        fVar11 = *(float *)(param_1 + 0x90);
        fVar12 = *(float *)(param_1 + 0x94);
        fVar13 = *(float *)(param_1 + 0x98);
        fVar1 = pfVar16[1];
        fVar2 = pfVar16[2];
        fVar3 = *pfVar16;
        fVar20 = fVar3 * fVar5 + fVar1 * fVar8 + fVar2 * fVar11;
        fVar21 = fVar3 * fVar6 + fVar1 * fVar9 + fVar2 * fVar12;
        fVar22 = fVar3 * fVar7 + fVar1 * fVar10 + fVar2 * fVar13;
        fVar1 = pfVar16[5];
        fVar2 = pfVar16[6];
        fVar3 = pfVar16[4];
        fVar23 = fVar3 * fVar5 + fVar1 * fVar8 + fVar2 * fVar11;
        fVar24 = fVar3 * fVar6 + fVar1 * fVar9 + fVar2 * fVar12;
        fVar25 = fVar3 * fVar7 + fVar1 * fVar10 + fVar2 * fVar13;
        fVar1 = pfVar16[9];
        fVar2 = pfVar16[10];
        fVar3 = pfVar16[8];
        (**(code **)(lVar15 + 0x1a0))
                  (plVar4,(fVar25 * fVar21 - fVar22 * fVar24) *
                          (fVar3 * fVar5 + fVar1 * fVar8 + fVar2 * fVar11) +
                          (fVar3 * fVar6 + fVar1 * fVar9 + fVar2 * fVar12) *
                          (fVar22 * fVar23 - fVar25 * fVar20) +
                          (fVar3 * fVar7 + fVar1 * fVar10 + fVar2 * fVar13) *
                          (fVar24 * fVar20 - fVar23 * fVar21) < 0.0);
        (**(code **)(*plStackX_8 + 0x1d0))(plStackX_8,uStackX_10,param_3,param_1 + 0x70);
        FUN_180279640(plVar4,*(undefined8 *)(lVar18 + 8),1);
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        lVar18 = *(longlong *)(lVar18 + 0x10);
        while (lVar18 == 0) {
          plVar19 = plVar19 + 1;
          lVar18 = *plVar19;
        }
      } while (lVar18 != *(longlong *)(*(longlong *)(lVar14 + 8) + *(longlong *)(lVar14 + 0x10) * 8)
              );
    }
  }
  return;
}






// 函数: void FUN_1802e7a50(undefined8 param_1,undefined4 param_2)
void FUN_1802e7a50(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined *puVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  longlong *plStack_38;
  
  uStack_40 = 0xfffffffffffffffe;
  plStack_60 = (longlong *)0x0;
  plStack_58 = (longlong *)0x0;
  iVar6 = 0;
  uStack_50 = 0;
  uStack_48 = 3;
  FUN_1802e92b0(0,&plStack_60,1);
  plVar4 = plStack_58;
  plVar3 = plStack_60;
  uVar8 = (longlong)plStack_58 - (longlong)plStack_60 >> 3;
  plVar7 = plStack_60;
  plVar2 = plVar3;
  if (uVar8 != 0) {
    do {
      plVar1 = *(longlong **)(*plVar7 + 0x1b8);
      if ((char)plVar1[0x7b] == '\0') {
        plStack_38 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        FUN_18022cb40(plVar1,&plStack_68);
        puVar5 = &DAT_18098bc73;
        if ((undefined *)plVar1[3] != (undefined *)0x0) {
          puVar5 = (undefined *)plVar1[3];
        }
        (**(code **)(plStack_68[2] + 0x10))(plStack_68 + 2,puVar5);
        *(undefined1 *)(plStack_68 + 0x7b) = 1;
        FUN_180076910(*plVar7,&plStack_68);
        if (plStack_68 != (longlong *)0x0) {
          (**(code **)(*plStack_68 + 0x38))();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1);
        }
      }
      FUN_18022bc30(*(undefined8 *)(*plVar7 + 0x1b8),param_2);
      iVar6 = iVar6 + 1;
      plVar7 = plVar7 + 1;
    } while ((ulonglong)(longlong)iVar6 < uVar8);
  }
  for (; plVar2 != plVar4; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar3);
  }
  return;
}



ulonglong FUN_1802e7bc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar8 = 0;
  uVar10 = uVar8;
  uVar9 = uVar8;
  uVar5 = uVar8;
  if (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar10 + *(longlong *)(param_1 + 0xf0));
      iVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1,param_2);
      uVar11 = (int)uVar5 + 1;
      uVar9 = (ulonglong)(uint)((int)uVar9 + iVar2);
      uVar10 = uVar10 + 8;
      uVar5 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
  }
  lVar6 = *(longlong *)(param_1 + 0x260);
  if (lVar6 != 0) {
    lVar4 = *(longlong *)(lVar6 + 0x1a8);
    uVar10 = uVar8;
    uVar5 = uVar8;
    if (*(longlong *)(lVar6 + 0x1b0) - lVar4 >> 3 != 0) {
      do {
        iVar2 = (**(code **)(**(longlong **)(uVar5 + lVar4) + 0x1a8))
                          (*(longlong **)(uVar5 + lVar4),param_2);
        lVar4 = *(longlong *)(lVar6 + 0x1a8);
        uVar11 = (int)uVar10 + 1;
        uVar9 = (ulonglong)(uint)((int)uVar9 + iVar2);
        uVar10 = (ulonglong)uVar11;
        uVar5 = uVar5 + 8;
      } while ((ulonglong)(longlong)(int)uVar11 <
               (ulonglong)(*(longlong *)(lVar6 + 0x1b0) - lVar4 >> 3));
      lVar6 = *(longlong *)(param_1 + 0x260);
    }
    if ('\0' < (char)*(byte *)(lVar6 + 0x20)) {
      uVar5 = (ulonglong)*(byte *)(lVar6 + 0x20);
      uVar10 = uVar8;
      do {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x260) + 0x18);
        iVar2 = (int)(*(longlong *)(lVar6 + 0xb8 + uVar10) - *(longlong *)(lVar6 + 0xb0 + uVar10) >>
                     3);
        uVar7 = uVar8;
        if (0 < iVar2) {
          do {
            plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0xb0 + uVar10) + uVar7 * 8);
            iVar3 = (**(code **)(*plVar1 + 0x1a8))(plVar1,param_2);
            uVar9 = (ulonglong)(uint)((int)uVar9 + iVar3);
            uVar7 = uVar7 + 1;
          } while ((longlong)uVar7 < (longlong)iVar2);
        }
        uVar10 = uVar10 + 0x100;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x1c0);
  uVar10 = uVar8;
  if (*(longlong *)(param_1 + 0x1c8) - lVar6 >> 3 != 0) {
    do {
      if ((*(char *)(param_2 + 0x11) == '\0') ||
         ((*(byte *)(*(longlong *)(uVar8 + lVar6) + 0x2e8) & 0xb) == 0xb)) {
        iVar2 = FUN_1802e7bc0(*(undefined8 *)(uVar8 + lVar6),param_2);
        uVar9 = (ulonglong)(uint)((int)uVar9 + iVar2);
      }
      lVar6 = *(longlong *)(param_1 + 0x1c0);
      uVar11 = (int)uVar10 + 1;
      uVar8 = uVar8 + 8;
      uVar10 = (ulonglong)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - lVar6 >> 3));
  }
  return uVar9;
}



ulonglong FUN_1802e7be5(void)

{
  int iVar1;
  int iVar2;
  longlong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_R14;
  uint uVar9;
  
  uVar7 = unaff_RBP & 0xffffffff;
  uVar8 = unaff_RBP & 0xffffffff;
  if (in_RAX != 0) {
    uVar4 = unaff_RBP & 0xffffffff;
    do {
      iVar1 = (**(code **)(**(longlong **)(uVar4 + *(longlong *)(unaff_R14 + 0xf0)) + 0x1a8))();
      uVar4 = uVar4 + 8;
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
      uVar7 = (ulonglong)(uint)((int)uVar7 + iVar1);
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(unaff_R14 + 0xf8) - *(longlong *)(unaff_R14 + 0xf0) >> 3));
  }
  lVar5 = *(longlong *)(unaff_R14 + 0x260);
  if (lVar5 != 0) {
    lVar3 = *(longlong *)(lVar5 + 0x1a8);
    uVar4 = unaff_RBP & 0xffffffff;
    uVar8 = unaff_RBP;
    if (*(longlong *)(lVar5 + 0x1b0) - lVar3 >> 3 != 0) {
      do {
        iVar1 = (**(code **)(**(longlong **)(uVar8 + lVar3) + 0x1a8))();
        lVar3 = *(longlong *)(lVar5 + 0x1a8);
        uVar9 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar9;
        uVar7 = (ulonglong)(uint)((int)uVar7 + iVar1);
        uVar8 = uVar8 + 8;
      } while ((ulonglong)(longlong)(int)uVar9 <
               (ulonglong)(*(longlong *)(lVar5 + 0x1b0) - lVar3 >> 3));
      lVar5 = *(longlong *)(unaff_R14 + 0x260);
    }
    if ('\0' < (char)*(byte *)(lVar5 + 0x20)) {
      uVar4 = (ulonglong)*(byte *)(lVar5 + 0x20);
      uVar8 = unaff_RBP;
      do {
        lVar5 = *(longlong *)(*(longlong *)(unaff_R14 + 0x260) + 0x18);
        iVar1 = (int)(*(longlong *)(lVar5 + 0xb8 + uVar8) - *(longlong *)(lVar5 + 0xb0 + uVar8) >> 3
                     );
        uVar6 = unaff_RBP;
        if (0 < iVar1) {
          do {
            iVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0xb0 + uVar8) + uVar6 * 8) +
                                0x1a8))();
            uVar7 = (ulonglong)(uint)((int)uVar7 + iVar2);
            uVar6 = uVar6 + 1;
          } while ((longlong)uVar6 < (longlong)iVar1);
        }
        uVar8 = uVar8 + 0x100;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  lVar5 = *(longlong *)(unaff_R14 + 0x1c0);
  uVar8 = unaff_RBP;
  if (*(longlong *)(unaff_R14 + 0x1c8) - lVar5 >> 3 != 0) {
    do {
      if ((*(char *)(unaff_RSI + 0x11) == '\0') ||
         ((*(byte *)(*(longlong *)(unaff_RBP + lVar5) + 0x2e8) & 0xb) == 0xb)) {
        iVar1 = FUN_1802e7bc0(*(undefined8 *)(unaff_RBP + lVar5));
        uVar7 = (ulonglong)(uint)((int)uVar7 + iVar1);
      }
      lVar5 = *(longlong *)(unaff_R14 + 0x1c0);
      uVar9 = (int)uVar8 + 1;
      unaff_RBP = unaff_RBP + 8;
      uVar8 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(unaff_R14 + 0x1c8) - lVar5 >> 3));
  }
  return uVar7;
}



int FUN_1802e7c5b(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong in_RAX;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_R14;
  
  uVar3 = unaff_RBP & 0xffffffff;
  uVar7 = unaff_RBP;
  if (in_RAX >> 3 != 0) {
    do {
      iVar1 = (**(code **)(**(longlong **)(uVar7 + param_2) + 0x1a8))();
      param_2 = *(longlong *)(unaff_RBX + 0x1a8);
      uVar6 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar6;
      unaff_EDI = unaff_EDI + iVar1;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1b0) - param_2 >> 3));
    unaff_RBX = *(longlong *)(unaff_R14 + 0x260);
  }
  if ('\0' < (char)*(byte *)(unaff_RBX + 0x20)) {
    uVar3 = (ulonglong)*(byte *)(unaff_RBX + 0x20);
    uVar7 = unaff_RBP;
    do {
      lVar5 = *(longlong *)(*(longlong *)(unaff_R14 + 0x260) + 0x18);
      iVar1 = (int)(*(longlong *)(lVar5 + 0xb8 + uVar7) - *(longlong *)(lVar5 + 0xb0 + uVar7) >> 3);
      uVar4 = unaff_RBP;
      if (0 < iVar1) {
        do {
          iVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0xb0 + uVar7) + uVar4 * 8) +
                              0x1a8))();
          unaff_EDI = unaff_EDI + iVar2;
          uVar4 = uVar4 + 1;
        } while ((longlong)uVar4 < (longlong)iVar1);
      }
      uVar7 = uVar7 + 0x100;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar5 = *(longlong *)(unaff_R14 + 0x1c0);
  uVar7 = unaff_RBP;
  if (*(longlong *)(unaff_R14 + 0x1c8) - lVar5 >> 3 != 0) {
    do {
      if ((*(char *)(unaff_RSI + 0x11) == '\0') ||
         ((*(byte *)(*(longlong *)(unaff_RBP + lVar5) + 0x2e8) & 0xb) == 0xb)) {
        iVar1 = FUN_1802e7bc0(*(undefined8 *)(unaff_RBP + lVar5));
        unaff_EDI = unaff_EDI + iVar1;
      }
      lVar5 = *(longlong *)(unaff_R14 + 0x1c0);
      uVar6 = (int)uVar7 + 1;
      unaff_RBP = unaff_RBP + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(unaff_R14 + 0x1c8) - lVar5 >> 3));
  }
  return unaff_EDI;
}



int FUN_1802e7cbc(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_R14;
  longlong lStack0000000000000050;
  
  uVar6 = unaff_RBP;
  lStack0000000000000050 = param_2;
  do {
    lVar5 = *(longlong *)(*(longlong *)(unaff_R14 + 0x260) + 0x18);
    iVar2 = (int)(*(longlong *)(lVar5 + 0xb8 + uVar6) - *(longlong *)(lVar5 + 0xb0 + uVar6) >> 3);
    uVar3 = unaff_RBP;
    if (0 < iVar2) {
      do {
        iVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0xb0 + uVar6) + uVar3 * 8) +
                            0x1a8))();
        unaff_EDI = unaff_EDI + iVar1;
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)iVar2);
    }
    uVar6 = uVar6 + 0x100;
    lStack0000000000000050 = lStack0000000000000050 + -1;
  } while (lStack0000000000000050 != 0);
  lVar5 = *(longlong *)(unaff_R14 + 0x1c0);
  if (*(longlong *)(unaff_R14 + 0x1c8) - lVar5 >> 3 != 0) {
    lStack0000000000000050 = 0;
    uVar6 = unaff_RBP;
    do {
      if ((*(char *)(unaff_RSI + 0x11) == '\0') ||
         ((*(byte *)(*(longlong *)(unaff_RBP + lVar5) + 0x2e8) & 0xb) == 0xb)) {
        iVar2 = FUN_1802e7bc0(*(undefined8 *)(unaff_RBP + lVar5));
        unaff_EDI = unaff_EDI + iVar2;
      }
      lVar5 = *(longlong *)(unaff_R14 + 0x1c0);
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
      unaff_RBP = unaff_RBP + 8;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(unaff_R14 + 0x1c8) - lVar5 >> 3));
  }
  return unaff_EDI;
}



int FUN_1802e7d3e(void)

{
  int iVar1;
  uint uVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong lVar4;
  longlong unaff_R14;
  
  lVar4 = *(longlong *)(unaff_R14 + 0x1c0);
  uVar3 = unaff_RBP;
  if (*(longlong *)(unaff_R14 + 0x1c8) - lVar4 >> 3 != 0) {
    do {
      if ((*(char *)(unaff_RSI + 0x11) == '\0') ||
         ((*(byte *)(*(longlong *)(unaff_RBP + lVar4) + 0x2e8) & 0xb) == 0xb)) {
        iVar1 = FUN_1802e7bc0(*(undefined8 *)(unaff_RBP + lVar4));
        unaff_EDI = unaff_EDI + iVar1;
      }
      lVar4 = *(longlong *)(unaff_R14 + 0x1c0);
      uVar2 = (int)uVar3 + 1;
      unaff_RBP = unaff_RBP + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(unaff_R14 + 0x1c8) - lVar4 >> 3));
  }
  return unaff_EDI;
}



int FUN_1802e7d43(void)

{
  int iVar1;
  uint uVar2;
  ulonglong unaff_RBP;
  ulonglong uVar3;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong lVar4;
  longlong unaff_R14;
  
  lVar4 = *(longlong *)(unaff_R14 + 0x1c0);
  uVar3 = unaff_RBP;
  if (*(longlong *)(unaff_R14 + 0x1c8) - lVar4 >> 3 != 0) {
    do {
      if ((*(char *)(unaff_RSI + 0x11) == '\0') ||
         ((*(byte *)(*(longlong *)(unaff_RBP + lVar4) + 0x2e8) & 0xb) == 0xb)) {
        iVar1 = FUN_1802e7bc0(*(undefined8 *)(unaff_RBP + lVar4));
        unaff_EDI = unaff_EDI + iVar1;
      }
      lVar4 = *(longlong *)(unaff_R14 + 0x1c0);
      uVar2 = (int)uVar3 + 1;
      unaff_RBP = unaff_RBP + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(unaff_R14 + 0x1c8) - lVar4 >> 3));
  }
  return unaff_EDI;
}



int FUN_1802e7d62(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong unaff_R14;
  ulonglong uVar3;
  
  uVar3 = unaff_RBP;
  do {
    if ((*(char *)(unaff_RSI + 0x11) == '\0') ||
       ((*(byte *)(*(longlong *)(unaff_RBP + param_3) + 0x2e8) & 0xb) == 0xb)) {
      iVar1 = FUN_1802e7bc0(*(undefined8 *)(unaff_RBP + param_3));
      unaff_EDI = unaff_EDI + iVar1;
    }
    param_3 = *(longlong *)(unaff_R14 + 0x1c0);
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    unaff_RBP = unaff_RBP + 8;
  } while ((ulonglong)(longlong)(int)uVar2 <
           (ulonglong)(*(longlong *)(unaff_R14 + 0x1c8) - param_3 >> 3));
  return unaff_EDI;
}






// 函数: void FUN_1802e7dc0(longlong param_1)
void FUN_1802e7dc0(longlong param_1)

{
  if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      FUN_1802e7e20();
    }
    else {
      FUN_18063ad30(*(longlong *)(param_1 + 0x28),*(longlong *)(param_1 + 0x28) + 0xf8,
                    param_1 + 0x70);
    }
    *(undefined2 *)(param_1 + 0x2b0) = *(undefined2 *)(param_1 + 0x2b4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




