#include "TaleWorlds.Native.Split.h"

// 99_part_05_part060.c - 1 个函数

// 函数: void FUN_1802fddde(undefined4 param_1)
void FUN_1802fddde(undefined4 param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  char cVar32;
  longlong in_RAX;
  undefined8 uVar33;
  longlong lVar34;
  longlong lVar35;
  float *pfVar36;
  undefined8 in_RCX;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  char cVar40;
  uint uVar41;
  undefined8 unaff_RBX;
  longlong lVar42;
  undefined4 *unaff_RBP;
  char cVar43;
  undefined8 unaff_RSI;
  longlong lVar44;
  longlong unaff_RDI;
  char cVar45;
  longlong in_R11;
  undefined8 *puVar46;
  char cVar47;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong uVar48;
  undefined8 unaff_R14;
  float *pfVar49;
  float *pfVar50;
  undefined4 extraout_XMM0_Da;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined4 unaff_XMM13_Da;
  float fVar76;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  char cStack0000000000000040;
  char cStack0000000000000041;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  undefined4 uStack0000000000000064;
  longlong in_stack_00000068;
  float *in_stack_00000070;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RSI;
  *(undefined8 *)(in_R11 + 0x20) = unaff_R12;
  *(undefined8 *)(in_R11 + -0x18) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x20) = unaff_R14;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(undefined4 *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(undefined4 *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(undefined4 *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  *(undefined4 *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(undefined4 *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(undefined4 *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(undefined4 *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  if ((in_RAX != 0) && (*(longlong *)(in_RAX + 0x1000) != 0)) {
    param_1 = FUN_1802fc520(in_RCX,0);
  }
  lVar34 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x20);
  if ((*(byte *)(unaff_RDI + 0xa8) & 1) == 0) {
    FUN_1802fac00(param_1,*(longlong *)(unaff_RDI + 0x10) + 0x70);
  }
  uVar33 = (**(code **)(**(longlong **)(lVar34 + 0x318) + 0xd8))();
  lVar34 = FUN_1803009f0();
  *(undefined8 *)(lVar34 + 0x1000) = uVar33;
  FUN_1802fd530(extraout_XMM0_Da,unaff_RBP + 0x44,unaff_RBP + 0x144);
  lVar34 = *(longlong *)(unaff_RDI + 0xd0);
  if (lVar34 == 0) {
    pfVar50 = (float *)&DAT_180a002f0;
    pfVar49 = (float *)&DAT_180a002f0;
  }
  else {
    pfVar50 = (float *)(lVar34 + 0x1018);
    pfVar49 = (float *)(lVar34 + 0x1008);
  }
  lVar34 = *(longlong *)(unaff_RDI + 0x10);
  cVar45 = *(char *)(unaff_RDI + 0x20);
  fVar76 = *(float *)(lVar34 + 0x74);
  fVar51 = *(float *)(lVar34 + 0x78);
  fVar52 = *(float *)(lVar34 + 0x70);
  cVar47 = 0.0 < *pfVar49 * *pfVar49 + pfVar49[1] * pfVar49[1] + pfVar49[2] * pfVar49[2];
  cVar43 = '\0';
  uVar48 = 0;
  cStack0000000000000041 = cVar47;
  if ('\0' < cVar45) {
    do {
      lVar34 = (longlong)cVar43 * 0x1b0 + *(longlong *)(*(longlong *)(unaff_RDI + 0x208) + 0x140);
      if (0.0 < *(float *)(lVar34 + 0x134)) {
        lVar38 = *(longlong *)(unaff_RDI + 0x18);
        lVar42 = (longlong)cVar43 * 0x100;
        cVar45 = *(char *)(lVar38 + 0xa0 + lVar42);
        if (-1 < cVar45) {
          lVar35 = (longlong)cVar45 * 0x100;
          lVar44 = *(longlong *)(lVar35 + 0xf0 + lVar38);
          while ((lVar44 == 0 && (cVar45 = *(char *)(lVar35 + 0xa0 + lVar38), cVar45 != -1))) {
            lVar35 = (longlong)cVar45 * 0x100;
            lVar44 = *(longlong *)(lVar35 + 0xf0 + lVar38);
          }
        }
        uVar37 = uVar48;
        if (*(longlong *)(unaff_RDI + 0xd0) != 0) {
          uVar37 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0xd0) + 0x1000);
        }
        uVar33 = FUN_180431180(uVar37,*(undefined8 *)(unaff_RDI + 0x10),cVar45,lVar34,
                               SQRT(fVar52 * fVar52 + fVar76 * fVar76 + fVar51 * fVar51));
        *(undefined8 *)(lVar42 + 0xf0 + *(longlong *)(unaff_RDI + 0x18)) = uVar33;
      }
      cVar45 = *(char *)(unaff_RDI + 0x20);
      cVar43 = cVar43 + '\x01';
    } while (cVar43 < cVar45);
  }
  lVar34 = *(longlong *)(unaff_RDI + 0x208);
  lVar38 = *(longlong *)(lVar34 + 0x160) - *(longlong *)(lVar34 + 0x158);
  iVar5 = (int)(lVar38 >> 0x3f);
  iVar4 = (int)(lVar38 / 0x60) + iVar5;
  uVar37 = uVar48;
  if (iVar4 != iVar5 && -1 < iVar4 - iVar5) {
    do {
      lVar34 = FUN_18040d0c0((longlong)(int)uVar37 * 0x60 + *(longlong *)(lVar34 + 0x158));
      if (lVar34 != 0) {
        uVar39 = uVar48;
        if (*(longlong *)(unaff_RDI + 0xd0) != 0) {
          uVar39 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0xd0) + 0x1000);
        }
        in_stack_00000068 = lVar34;
        FUN_18005ea90(uVar39 + 600,&stack0x00000068);
      }
      lVar34 = *(longlong *)(unaff_RDI + 0x208);
      uVar41 = (int)uVar37 + 1;
      uVar37 = (ulonglong)uVar41;
    } while ((int)uVar41 <
             (int)((*(longlong *)(lVar34 + 0x160) - *(longlong *)(lVar34 + 0x158)) / 0x60));
    cVar45 = *(char *)(unaff_RDI + 0x20);
  }
  cVar40 = '\0';
  fVar76 = 3.4028235e+38;
  in_stack_00000070 = (float *)(*(longlong *)(unaff_RDI + 0x10) + 0x70);
  cVar32 = -1;
  cVar43 = -1;
  cStack0000000000000040 = -1;
  if ('\0' < cVar45) {
    do {
      lVar34 = *(longlong *)(unaff_RDI + 0x18);
      lVar42 = (longlong)cVar40;
      lVar38 = lVar42 * 0x100;
      puVar2 = *(undefined8 **)(lVar38 + 0xf0 + lVar34);
      fVar51 = fVar76;
      cVar45 = cStack0000000000000040;
      cVar43 = cVar32;
      if (puVar2 != (undefined8 *)0x0) {
        lVar44 = lVar42 * 0x1b0 + *(longlong *)(*(longlong *)(unaff_RDI + 0x208) + 0x140);
        do {
          LOCK();
          puVar1 = (uint *)(lVar38 + lVar34);
          uVar41 = *puVar1;
          *puVar1 = *puVar1 | 1;
          UNLOCK();
        } while ((uVar41 & 1) != 0);
        puVar46 = (undefined8 *)(lVar38 + 4 + lVar34);
        uVar33 = *puVar46;
        uVar31 = puVar46[1];
        pfVar36 = (float *)(lVar38 + 0x14 + lVar34);
        fVar6 = *pfVar36;
        fVar7 = pfVar36[1];
        fVar8 = pfVar36[2];
        fVar9 = pfVar36[3];
        *(undefined8 *)(unaff_RBP + 0x3c) = uVar33;
        *(undefined8 *)(unaff_RBP + 0x3e) = uVar31;
        unaff_RBP[0x40] = fVar6;
        unaff_RBP[0x41] = fVar7;
        unaff_RBP[0x42] = fVar8;
        unaff_RBP[0x43] = fVar9;
        *(undefined4 *)(lVar38 + lVar34) = 0;
        *(undefined8 *)(unaff_RBP + 4) = uVar33;
        *(undefined8 *)(unaff_RBP + 6) = uVar31;
        *unaff_RBP = 0;
        unaff_RBP[1] = 0;
        unaff_RBP[2] = 0x3f800000;
        unaff_RBP[3] = 0x7f7fffff;
        unaff_RBP[8] = fVar6;
        unaff_RBP[9] = fVar7;
        unaff_RBP[10] = fVar8;
        unaff_RBP[0xb] = fVar9;
        puVar46 = puVar2;
        FUN_180645340(unaff_RBP + -0x10,lVar44 + 0x114,(float *)(lVar44 + 0x124));
        FUN_18063b5f0(unaff_RBP + 0xc,unaff_RBP + 4);
        fVar67 = (float)unaff_RBP[0xc];
        fVar68 = (float)unaff_RBP[0xd];
        fVar69 = (float)unaff_RBP[0xe];
        fVar10 = (float)unaff_RBP[0xf];
        fVar11 = (float)unaff_RBP[0x10];
        fVar12 = (float)unaff_RBP[0x11];
        fVar13 = (float)unaff_RBP[0x12];
        fVar14 = (float)unaff_RBP[0x13];
        fVar15 = (float)unaff_RBP[0x14];
        fVar16 = (float)unaff_RBP[0x15];
        fVar17 = (float)unaff_RBP[0x16];
        fVar18 = (float)unaff_RBP[0x17];
        fVar51 = (float)unaff_RBP[-0xf];
        fVar52 = (float)unaff_RBP[-0x10];
        fVar54 = (float)unaff_RBP[-0xe];
        fVar59 = (float)unaff_RBP[-0xb];
        fVar61 = (float)unaff_RBP[-7];
        fVar63 = (float)unaff_RBP[-3];
        fVar70 = (float)unaff_RBP[-0xc];
        fVar55 = fVar51 * fVar11 + fVar52 * fVar67 + fVar54 * fVar15;
        fVar56 = fVar51 * fVar12 + fVar52 * fVar68 + fVar54 * fVar16;
        fVar57 = fVar51 * fVar13 + fVar52 * fVar69 + fVar54 * fVar17;
        fVar71 = (float)unaff_RBP[-10];
        fVar72 = (float)unaff_RBP[-8];
        fVar58 = fVar59 * fVar11 + fVar70 * fVar67 + fVar71 * fVar15;
        fVar60 = fVar59 * fVar12 + fVar70 * fVar68 + fVar71 * fVar16;
        fVar62 = fVar59 * fVar13 + fVar70 * fVar69 + fVar71 * fVar17;
        fVar73 = (float)unaff_RBP[-6];
        fVar74 = (float)unaff_RBP[-4];
        unaff_RBP[0x20] = fVar11;
        unaff_RBP[0x21] = fVar12;
        unaff_RBP[0x22] = fVar13;
        unaff_RBP[0x23] = fVar14;
        fVar19 = in_stack_00000070[4];
        fVar20 = in_stack_00000070[5];
        fVar21 = in_stack_00000070[6];
        fVar22 = in_stack_00000070[7];
        fVar64 = fVar61 * fVar11 + fVar72 * fVar67 + fVar73 * fVar15;
        fVar65 = fVar61 * fVar12 + fVar72 * fVar68 + fVar73 * fVar16;
        fVar66 = fVar61 * fVar13 + fVar72 * fVar69 + fVar73 * fVar17;
        fVar75 = (float)unaff_RBP[-2];
        unaff_RBP[0x1c] = fVar67;
        unaff_RBP[0x1d] = fVar68;
        unaff_RBP[0x1e] = fVar69;
        unaff_RBP[0x1f] = fVar10;
        fVar23 = *in_stack_00000070;
        fVar24 = in_stack_00000070[1];
        fVar25 = in_stack_00000070[2];
        fVar26 = in_stack_00000070[3];
        unaff_RBP[0x24] = fVar15;
        unaff_RBP[0x25] = fVar16;
        unaff_RBP[0x26] = fVar17;
        unaff_RBP[0x27] = fVar18;
        fVar27 = in_stack_00000070[8];
        fVar28 = in_stack_00000070[9];
        fVar29 = in_stack_00000070[10];
        fVar30 = in_stack_00000070[0xb];
        fVar67 = fVar63 * fVar11 + fVar74 * fVar67 + fVar75 * fVar15 + fVar6;
        fVar68 = fVar63 * fVar12 + fVar74 * fVar68 + fVar75 * fVar16 + fVar7;
        fVar69 = fVar63 * fVar13 + fVar74 * fVar69 + fVar75 * fVar17 + fVar8;
        unaff_RBP[0x28] = fVar6;
        unaff_RBP[0x29] = fVar7;
        unaff_RBP[0x2a] = fVar8;
        unaff_RBP[0x2b] = fVar9;
        unaff_RBP[0x2c] = fVar55;
        unaff_RBP[0x2d] = fVar56;
        unaff_RBP[0x2e] = fVar57;
        unaff_RBP[0x2f] = fVar51 * fVar14 + fVar52 * fVar10 + fVar54 * fVar18;
        unaff_RBP[0x38] = fVar67;
        unaff_RBP[0x39] = fVar68;
        unaff_RBP[0x3a] = fVar69;
        unaff_RBP[0x3b] = fVar63 * fVar14 + fVar74 * fVar10 + fVar75 * fVar18 + fVar9;
        unaff_RBP[0x30] = fVar58;
        unaff_RBP[0x31] = fVar60;
        unaff_RBP[0x32] = fVar62;
        unaff_RBP[0x33] = fVar59 * fVar14 + fVar70 * fVar10 + fVar71 * fVar18;
        unaff_RBP[0x34] = fVar64;
        unaff_RBP[0x35] = fVar65;
        unaff_RBP[0x36] = fVar66;
        unaff_RBP[0x37] = fVar61 * fVar14 + fVar72 * fVar10 + fVar73 * fVar18;
        fVar70 = fVar56 * fVar19 + fVar55 * fVar23 + fVar57 * fVar27;
        fVar71 = fVar56 * fVar20 + fVar55 * fVar24 + fVar57 * fVar28;
        fVar72 = fVar56 * fVar21 + fVar55 * fVar25 + fVar57 * fVar29;
        unaff_RBP[-0x20] = fVar70;
        unaff_RBP[-0x1f] = fVar71;
        unaff_RBP[-0x1e] = fVar72;
        unaff_RBP[-0x1d] = fVar56 * fVar22 + fVar55 * fVar26 + fVar57 * fVar30;
        fVar73 = fVar60 * fVar19 + fVar58 * fVar23 + fVar62 * fVar27;
        fVar74 = fVar60 * fVar20 + fVar58 * fVar24 + fVar62 * fVar28;
        fVar75 = fVar60 * fVar21 + fVar58 * fVar25 + fVar62 * fVar29;
        unaff_RBP[-0x1c] = fVar73;
        unaff_RBP[-0x1b] = fVar74;
        unaff_RBP[-0x1a] = fVar75;
        unaff_RBP[-0x19] = fVar60 * fVar22 + fVar58 * fVar26 + fVar62 * fVar30;
        fVar59 = fVar65 * fVar19 + fVar64 * fVar23 + fVar66 * fVar27;
        fVar61 = fVar65 * fVar20 + fVar64 * fVar24 + fVar66 * fVar28;
        fVar63 = fVar65 * fVar21 + fVar64 * fVar25 + fVar66 * fVar29;
        unaff_RBP[-0x18] = fVar59;
        unaff_RBP[-0x17] = fVar61;
        unaff_RBP[-0x16] = fVar63;
        unaff_RBP[-0x15] = fVar65 * fVar22 + fVar64 * fVar26 + fVar66 * fVar30;
        fVar51 = in_stack_00000070[0xd];
        fVar52 = in_stack_00000070[0xe];
        fVar54 = in_stack_00000070[0xf];
        unaff_RBP[-0x14] =
             fVar68 * fVar19 + fVar67 * fVar23 + fVar69 * fVar27 + in_stack_00000070[0xc];
        unaff_RBP[-0x13] = fVar68 * fVar20 + fVar67 * fVar24 + fVar69 * fVar28 + fVar51;
        unaff_RBP[-0x12] = fVar68 * fVar21 + fVar67 * fVar25 + fVar69 * fVar29 + fVar52;
        unaff_RBP[-0x11] = fVar68 * fVar22 + fVar67 * fVar26 + fVar69 * fVar30 + fVar54;
        fVar51 = fVar70 * fVar70 + fVar71 * fVar71 + fVar72 * fVar72;
        auVar53 = rsqrtss(ZEXT416((uint)fVar51),ZEXT416((uint)fVar51));
        fVar52 = auVar53._0_4_;
        fVar51 = fVar52 * 0.5 * (3.0 - fVar51 * fVar52 * fVar52);
        unaff_RBP[-0x20] = fVar70 * fVar51;
        plVar3 = (longlong *)*puVar46;
        unaff_RBP[-0x1f] = fVar71 * fVar51;
        unaff_RBP[-0x1e] = fVar72 * fVar51;
        fVar51 = fVar73 * fVar73 + fVar74 * fVar74 + fVar75 * fVar75;
        auVar53 = rsqrtss(ZEXT416((uint)fVar51),ZEXT416((uint)fVar51));
        fVar52 = auVar53._0_4_;
        fVar51 = fVar52 * 0.5 * (3.0 - fVar51 * fVar52 * fVar52);
        unaff_RBP[-0x1b] = fVar74 * fVar51;
        unaff_RBP[-0x1a] = fVar75 * fVar51;
        unaff_RBP[-0x1c] = fVar73 * fVar51;
        fVar51 = fVar59 * fVar59 + fVar61 * fVar61 + fVar63 * fVar63;
        auVar53 = rsqrtss(ZEXT416((uint)fVar51),ZEXT416((uint)fVar51));
        fVar52 = auVar53._0_4_;
        fVar51 = fVar52 * 0.5 * (3.0 - fVar51 * fVar52 * fVar52);
        unaff_RBP[-0x18] = fVar59 * fVar51;
        unaff_RBP[-0x17] = fVar61 * fVar51;
        unaff_RBP[-0x16] = fVar63 * fVar51;
        (**(code **)(*plVar3 + 0x98))(plVar3,unaff_RBP + -0x20);
        (**(code **)(*(longlong *)*puVar2 + 0x140))();
        (**(code **)(*(longlong *)*puVar2 + 0xb8))
                  ((longlong *)*puVar2,unaff_RBP + lVar42 * 4 + 0x44);
        (**(code **)(*(longlong *)*puVar2 + 0xa8))
                  ((longlong *)*puVar2,unaff_RBP + lVar42 * 4 + 0x144);
        if (cStack0000000000000041 != '\0') {
          uStack0000000000000064 = 0x7f7fffff;
          fStack0000000000000058 = (*(float *)(lVar44 + 0x114) + *(float *)(lVar44 + 0x124)) * 0.5;
          fStack000000000000005c = (*(float *)(lVar44 + 0x128) + *(float *)(lVar44 + 0x118)) * 0.5;
          fStack0000000000000060 = (*(float *)(lVar44 + 300) + *(float *)(lVar44 + 0x11c)) * 0.5;
          pfVar36 = (float *)FUN_1801c0fb0(unaff_RBP + 4,unaff_RBP + 0x18,&stack0x00000058);
          fVar54 = *pfVar50 - ((float)unaff_RBP[0x40] + *pfVar36);
          fVar52 = pfVar50[1] - ((float)unaff_RBP[0x41] + pfVar36[1]);
          fVar51 = pfVar50[2] - ((float)unaff_RBP[0x42] + pfVar36[2]);
          fVar51 = fVar54 * fVar54 + fVar52 * fVar52 + fVar51 * fVar51;
          cVar45 = cVar40;
          cVar43 = cVar40;
          if (fVar51 < fVar76) goto LAB_1802fe66e;
        }
        fVar51 = fVar76;
        cVar45 = cStack0000000000000040;
        cVar43 = cStack0000000000000040;
      }
LAB_1802fe66e:
      cStack0000000000000040 = cVar45;
      cVar40 = cVar40 + '\x01';
      fVar76 = fVar51;
      cVar47 = cStack0000000000000041;
      cVar32 = cVar43;
    } while (cVar40 < *(char *)(unaff_RDI + 0x20));
  }
  if ((cVar47 != '\0') && (cVar43 != -1)) {
    puVar2 = *(undefined8 **)((longlong)cVar43 * 0x100 + 0xf0 + *(longlong *)(unaff_RDI + 0x18));
    (**(code **)(*(longlong *)*puVar2 + 0xe0))();
    plVar3 = (longlong *)*puVar2;
    (**(code **)(*plVar3 + 0xf8))(plVar3,&DAT_180a002f0,pfVar49);
  }
  if (*(longlong *)(unaff_RDI + 0xd0) != 0) {
    uVar48 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0xd0) + 0x1000);
  }
  FUN_180431380(uVar48);
  if (*(float *)(unaff_RDI + 0x3c) < 0.0) {
    fVar76 = 0.1;
  }
  else {
    fVar76 = *(float *)(unaff_RDI + 0x3c) + 1.1920929e-07;
  }
  *(float *)(unaff_RDI + 0x34) = fVar76;
  *(undefined2 *)(unaff_RDI + 0x40) = 2;
  if ((*(longlong *)(unaff_RDI + 0x130) != 0) || (*(longlong *)(unaff_RDI + 0x138) != 0)) {
    (**(code **)(unaff_RDI + 0x138))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x244) ^ (ulonglong)&stack0x00000000);
}






