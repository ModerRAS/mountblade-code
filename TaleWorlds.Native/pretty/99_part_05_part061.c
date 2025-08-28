#include "TaleWorlds.Native.Split.h"

// 99_part_05_part061.c - 3 个函数

// 函数: void FUN_1802fdde2(uint64_t param_1)
void FUN_1802fdde2(uint64_t param_1)

{
  uint *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
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
  uint64_t uVar31;
  char cVar32;
  int64_t in_RAX;
  uint64_t uVar33;
  int64_t lVar34;
  int64_t lVar35;
  float *pfVar36;
  uint64_t uVar37;
  int64_t lVar38;
  uint64_t uVar39;
  char cVar40;
  uint uVar41;
  int64_t lVar42;
  int32_t *unaff_RBP;
  char cVar43;
  uint64_t unaff_RSI;
  int64_t lVar44;
  int64_t unaff_RDI;
  char cVar45;
  int64_t in_R11;
  uint64_t *puVar46;
  char cVar47;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t uVar48;
  uint64_t unaff_R14;
  float *pfVar49;
  float *pfVar50;
  int32_t in_XMM0_Da;
  int32_t extraout_XMM0_Da;
  float fVar51;
  float fVar52;
  int8_t auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
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
  int32_t unaff_XMM13_Da;
  float fVar76;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  char cStack0000000000000040;
  char cStack0000000000000041;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  int32_t uStack0000000000000064;
  int64_t in_stack_00000068;
  float *in_stack_00000070;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  if ((in_RAX != 0) && (*(int64_t *)(in_RAX + 0x1000) != 0)) {
    in_XMM0_Da = FUN_1802fc520(param_1,0);
  }
  lVar34 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x10) + 0x20);
  if ((*(byte *)(unaff_RDI + 0xa8) & 1) == 0) {
    FUN_1802fac00(in_XMM0_Da,*(int64_t *)(unaff_RDI + 0x10) + 0x70);
  }
  uVar33 = (**(code **)(**(int64_t **)(lVar34 + 0x318) + 0xd8))();
  lVar34 = FUN_1803009f0();
  *(uint64_t *)(lVar34 + 0x1000) = uVar33;
  FUN_1802fd530(extraout_XMM0_Da,unaff_RBP + 0x44,unaff_RBP + 0x144);
  lVar34 = *(int64_t *)(unaff_RDI + 0xd0);
  if (lVar34 == 0) {
    pfVar50 = (float *)&system_data_02f0;
    pfVar49 = (float *)&system_data_02f0;
  }
  else {
    pfVar50 = (float *)(lVar34 + 0x1018);
    pfVar49 = (float *)(lVar34 + 0x1008);
  }
  lVar34 = *(int64_t *)(unaff_RDI + 0x10);
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
      lVar34 = (int64_t)cVar43 * 0x1b0 + *(int64_t *)(*(int64_t *)(unaff_RDI + 0x208) + 0x140);
      if (0.0 < *(float *)(lVar34 + 0x134)) {
        lVar38 = *(int64_t *)(unaff_RDI + 0x18);
        lVar42 = (int64_t)cVar43 * 0x100;
        cVar45 = *(char *)(lVar38 + 0xa0 + lVar42);
        if (-1 < cVar45) {
          lVar35 = (int64_t)cVar45 * 0x100;
          lVar44 = *(int64_t *)(lVar35 + 0xf0 + lVar38);
          while ((lVar44 == 0 && (cVar45 = *(char *)(lVar35 + 0xa0 + lVar38), cVar45 != -1))) {
            lVar35 = (int64_t)cVar45 * 0x100;
            lVar44 = *(int64_t *)(lVar35 + 0xf0 + lVar38);
          }
        }
        uVar37 = uVar48;
        if (*(int64_t *)(unaff_RDI + 0xd0) != 0) {
          uVar37 = *(uint64_t *)(*(int64_t *)(unaff_RDI + 0xd0) + 0x1000);
        }
        uVar33 = FUN_180431180(uVar37,*(uint64_t *)(unaff_RDI + 0x10),cVar45,lVar34,
                               SQRT(fVar52 * fVar52 + fVar76 * fVar76 + fVar51 * fVar51));
        *(uint64_t *)(lVar42 + 0xf0 + *(int64_t *)(unaff_RDI + 0x18)) = uVar33;
      }
      cVar45 = *(char *)(unaff_RDI + 0x20);
      cVar43 = cVar43 + '\x01';
    } while (cVar43 < cVar45);
  }
  lVar34 = *(int64_t *)(unaff_RDI + 0x208);
  lVar38 = *(int64_t *)(lVar34 + 0x160) - *(int64_t *)(lVar34 + 0x158);
  iVar5 = (int)(lVar38 >> 0x3f);
  iVar4 = (int)(lVar38 / 0x60) + iVar5;
  uVar37 = uVar48;
  if (iVar4 != iVar5 && -1 < iVar4 - iVar5) {
    do {
      lVar34 = FUN_18040d0c0((int64_t)(int)uVar37 * 0x60 + *(int64_t *)(lVar34 + 0x158));
      if (lVar34 != 0) {
        uVar39 = uVar48;
        if (*(int64_t *)(unaff_RDI + 0xd0) != 0) {
          uVar39 = *(uint64_t *)(*(int64_t *)(unaff_RDI + 0xd0) + 0x1000);
        }
        in_stack_00000068 = lVar34;
        SystemInitializer(uVar39 + 600,&stack0x00000068);
      }
      lVar34 = *(int64_t *)(unaff_RDI + 0x208);
      uVar41 = (int)uVar37 + 1;
      uVar37 = (uint64_t)uVar41;
    } while ((int)uVar41 <
             (int)((*(int64_t *)(lVar34 + 0x160) - *(int64_t *)(lVar34 + 0x158)) / 0x60));
    cVar45 = *(char *)(unaff_RDI + 0x20);
  }
  cVar40 = '\0';
  fVar76 = 3.4028235e+38;
  in_stack_00000070 = (float *)(*(int64_t *)(unaff_RDI + 0x10) + 0x70);
  cVar32 = -1;
  cVar43 = -1;
  cStack0000000000000040 = -1;
  if ('\0' < cVar45) {
    do {
      lVar34 = *(int64_t *)(unaff_RDI + 0x18);
      lVar42 = (int64_t)cVar40;
      lVar38 = lVar42 * 0x100;
      puVar2 = *(uint64_t **)(lVar38 + 0xf0 + lVar34);
      fVar51 = fVar76;
      cVar45 = cStack0000000000000040;
      cVar43 = cVar32;
      if (puVar2 != (uint64_t *)0x0) {
        lVar44 = lVar42 * 0x1b0 + *(int64_t *)(*(int64_t *)(unaff_RDI + 0x208) + 0x140);
        do {
          LOCK();
          puVar1 = (uint *)(lVar38 + lVar34);
          uVar41 = *puVar1;
          *puVar1 = *puVar1 | 1;
          UNLOCK();
        } while ((uVar41 & 1) != 0);
        puVar46 = (uint64_t *)(lVar38 + 4 + lVar34);
        uVar33 = *puVar46;
        uVar31 = puVar46[1];
        pfVar36 = (float *)(lVar38 + 0x14 + lVar34);
        fVar6 = *pfVar36;
        fVar7 = pfVar36[1];
        fVar8 = pfVar36[2];
        fVar9 = pfVar36[3];
        *(uint64_t *)(unaff_RBP + 0x3c) = uVar33;
        *(uint64_t *)(unaff_RBP + 0x3e) = uVar31;
        unaff_RBP[0x40] = fVar6;
        unaff_RBP[0x41] = fVar7;
        unaff_RBP[0x42] = fVar8;
        unaff_RBP[0x43] = fVar9;
        *(int32_t *)(lVar38 + lVar34) = 0;
        *(uint64_t *)(unaff_RBP + 4) = uVar33;
        *(uint64_t *)(unaff_RBP + 6) = uVar31;
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
        plVar3 = (int64_t *)*puVar46;
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
        (**(code **)(*(int64_t *)*puVar2 + 0x140))();
        (**(code **)(*(int64_t *)*puVar2 + 0xb8))
                  ((int64_t *)*puVar2,unaff_RBP + lVar42 * 4 + 0x44);
        (**(code **)(*(int64_t *)*puVar2 + 0xa8))
                  ((int64_t *)*puVar2,unaff_RBP + lVar42 * 4 + 0x144);
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
    puVar2 = *(uint64_t **)((int64_t)cVar43 * 0x100 + 0xf0 + *(int64_t *)(unaff_RDI + 0x18));
    (**(code **)(*(int64_t *)*puVar2 + 0xe0))();
    plVar3 = (int64_t *)*puVar2;
    (**(code **)(*plVar3 + 0xf8))(plVar3,&system_data_02f0,pfVar49);
  }
  if (*(int64_t *)(unaff_RDI + 0xd0) != 0) {
    uVar48 = *(uint64_t *)(*(int64_t *)(unaff_RDI + 0xd0) + 0x1000);
  }
  FUN_180431380(uVar48);
  if (*(float *)(unaff_RDI + 0x3c) < 0.0) {
    fVar76 = 0.1;
  }
  else {
    fVar76 = *(float *)(unaff_RDI + 0x3c) + 1.1920929e-07;
  }
  *(float *)(unaff_RDI + 0x34) = fVar76;
  *(int16_t *)(unaff_RDI + 0x40) = 2;
  if ((*(int64_t *)(unaff_RDI + 0x130) != 0) || (*(int64_t *)(unaff_RDI + 0x138) != 0)) {
    (**(code **)(unaff_RDI + 0x138))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x244) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802fe0d8(void)
void FUN_1802fe0d8(void)

{
  uint *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t *plVar5;
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
  uint64_t uVar31;
  uint64_t uVar32;
  char in_AL;
  float *pfVar33;
  char unaff_BL;
  int32_t *unaff_RBP;
  int64_t lVar34;
  int64_t unaff_RDI;
  int64_t lVar35;
  uint64_t *puVar36;
  uint64_t unaff_R13;
  int64_t lVar37;
  float *unaff_R15;
  float fVar38;
  float fVar39;
  int8_t auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  char cStack0000000000000040;
  char cStack0000000000000041;
  uint64_t *puStack0000000000000048;
  uint64_t in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  int32_t uStack0000000000000064;
  float *in_stack_00000070;
  
  do {
    lVar4 = *(int64_t *)(unaff_RDI + 0x18);
    lVar37 = (int64_t)unaff_BL;
    lVar35 = lVar37 * 0x100;
    puVar36 = *(uint64_t **)(lVar35 + 0xf0 + lVar4);
    puStack0000000000000048 = puVar36;
    if (puVar36 != (uint64_t *)0x0) {
      lVar34 = lVar37 * 0x1b0 + *(int64_t *)(*(int64_t *)(unaff_RDI + 0x208) + 0x140);
      do {
        LOCK();
        puVar1 = (uint *)(lVar35 + lVar4);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      puVar2 = (uint64_t *)(lVar35 + 4 + lVar4);
      uVar31 = *puVar2;
      uVar32 = puVar2[1];
      pfVar33 = (float *)(lVar35 + 0x14 + lVar4);
      fVar6 = *pfVar33;
      fVar7 = pfVar33[1];
      fVar8 = pfVar33[2];
      fVar9 = pfVar33[3];
      *(uint64_t *)(unaff_RBP + 0x3c) = uVar31;
      *(uint64_t *)(unaff_RBP + 0x3e) = uVar32;
      unaff_RBP[0x40] = fVar6;
      unaff_RBP[0x41] = fVar7;
      unaff_RBP[0x42] = fVar8;
      unaff_RBP[0x43] = fVar9;
      *(int *)(lVar35 + lVar4) = (int)unaff_R13;
      *(uint64_t *)(unaff_RBP + 4) = uVar31;
      *(uint64_t *)(unaff_RBP + 6) = uVar32;
      *unaff_RBP = 0;
      unaff_RBP[1] = 0;
      unaff_RBP[2] = 0x3f800000;
      unaff_RBP[3] = 0x7f7fffff;
      unaff_RBP[8] = fVar6;
      unaff_RBP[9] = fVar7;
      unaff_RBP[10] = fVar8;
      unaff_RBP[0xb] = fVar9;
      FUN_180645340(unaff_RBP + -0x10,lVar34 + 0x114,(float *)(lVar34 + 0x124));
      FUN_18063b5f0(unaff_RBP + 0xc,unaff_RBP + 4);
      fVar54 = (float)unaff_RBP[0xc];
      fVar55 = (float)unaff_RBP[0xd];
      fVar56 = (float)unaff_RBP[0xe];
      fVar10 = (float)unaff_RBP[0xf];
      fVar11 = (float)unaff_RBP[0x10];
      fVar12 = (float)unaff_RBP[0x11];
      fVar13 = (float)unaff_RBP[0x12];
      fVar14 = (float)unaff_RBP[0x13];
      fVar15 = (float)unaff_RBP[0x14];
      fVar16 = (float)unaff_RBP[0x15];
      fVar17 = (float)unaff_RBP[0x16];
      fVar18 = (float)unaff_RBP[0x17];
      fVar38 = (float)unaff_RBP[-0xf];
      fVar39 = (float)unaff_RBP[-0x10];
      fVar41 = (float)unaff_RBP[-0xe];
      fVar46 = (float)unaff_RBP[-0xb];
      fVar48 = (float)unaff_RBP[-7];
      fVar50 = (float)unaff_RBP[-3];
      fVar57 = (float)unaff_RBP[-0xc];
      fVar42 = fVar38 * fVar11 + fVar39 * fVar54 + fVar41 * fVar15;
      fVar43 = fVar38 * fVar12 + fVar39 * fVar55 + fVar41 * fVar16;
      fVar44 = fVar38 * fVar13 + fVar39 * fVar56 + fVar41 * fVar17;
      fVar58 = (float)unaff_RBP[-10];
      fVar59 = (float)unaff_RBP[-8];
      fVar45 = fVar46 * fVar11 + fVar57 * fVar54 + fVar58 * fVar15;
      fVar47 = fVar46 * fVar12 + fVar57 * fVar55 + fVar58 * fVar16;
      fVar49 = fVar46 * fVar13 + fVar57 * fVar56 + fVar58 * fVar17;
      fVar60 = (float)unaff_RBP[-6];
      fVar61 = (float)unaff_RBP[-4];
      unaff_RBP[0x20] = fVar11;
      unaff_RBP[0x21] = fVar12;
      unaff_RBP[0x22] = fVar13;
      unaff_RBP[0x23] = fVar14;
      fVar19 = in_stack_00000070[4];
      fVar20 = in_stack_00000070[5];
      fVar21 = in_stack_00000070[6];
      fVar22 = in_stack_00000070[7];
      fVar51 = fVar48 * fVar11 + fVar59 * fVar54 + fVar60 * fVar15;
      fVar52 = fVar48 * fVar12 + fVar59 * fVar55 + fVar60 * fVar16;
      fVar53 = fVar48 * fVar13 + fVar59 * fVar56 + fVar60 * fVar17;
      fVar62 = (float)unaff_RBP[-2];
      unaff_RBP[0x1c] = fVar54;
      unaff_RBP[0x1d] = fVar55;
      unaff_RBP[0x1e] = fVar56;
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
      fVar54 = fVar50 * fVar11 + fVar61 * fVar54 + fVar62 * fVar15 + fVar6;
      fVar55 = fVar50 * fVar12 + fVar61 * fVar55 + fVar62 * fVar16 + fVar7;
      fVar56 = fVar50 * fVar13 + fVar61 * fVar56 + fVar62 * fVar17 + fVar8;
      unaff_RBP[0x28] = fVar6;
      unaff_RBP[0x29] = fVar7;
      unaff_RBP[0x2a] = fVar8;
      unaff_RBP[0x2b] = fVar9;
      unaff_RBP[0x2c] = fVar42;
      unaff_RBP[0x2d] = fVar43;
      unaff_RBP[0x2e] = fVar44;
      unaff_RBP[0x2f] = fVar38 * fVar14 + fVar39 * fVar10 + fVar41 * fVar18;
      unaff_RBP[0x38] = fVar54;
      unaff_RBP[0x39] = fVar55;
      unaff_RBP[0x3a] = fVar56;
      unaff_RBP[0x3b] = fVar50 * fVar14 + fVar61 * fVar10 + fVar62 * fVar18 + fVar9;
      unaff_RBP[0x30] = fVar45;
      unaff_RBP[0x31] = fVar47;
      unaff_RBP[0x32] = fVar49;
      unaff_RBP[0x33] = fVar46 * fVar14 + fVar57 * fVar10 + fVar58 * fVar18;
      unaff_RBP[0x34] = fVar51;
      unaff_RBP[0x35] = fVar52;
      unaff_RBP[0x36] = fVar53;
      unaff_RBP[0x37] = fVar48 * fVar14 + fVar59 * fVar10 + fVar60 * fVar18;
      fVar57 = fVar43 * fVar19 + fVar42 * fVar23 + fVar44 * fVar27;
      fVar58 = fVar43 * fVar20 + fVar42 * fVar24 + fVar44 * fVar28;
      fVar59 = fVar43 * fVar21 + fVar42 * fVar25 + fVar44 * fVar29;
      unaff_RBP[-0x20] = fVar57;
      unaff_RBP[-0x1f] = fVar58;
      unaff_RBP[-0x1e] = fVar59;
      unaff_RBP[-0x1d] = fVar43 * fVar22 + fVar42 * fVar26 + fVar44 * fVar30;
      fVar60 = fVar47 * fVar19 + fVar45 * fVar23 + fVar49 * fVar27;
      fVar61 = fVar47 * fVar20 + fVar45 * fVar24 + fVar49 * fVar28;
      fVar62 = fVar47 * fVar21 + fVar45 * fVar25 + fVar49 * fVar29;
      unaff_RBP[-0x1c] = fVar60;
      unaff_RBP[-0x1b] = fVar61;
      unaff_RBP[-0x1a] = fVar62;
      unaff_RBP[-0x19] = fVar47 * fVar22 + fVar45 * fVar26 + fVar49 * fVar30;
      fVar46 = fVar52 * fVar19 + fVar51 * fVar23 + fVar53 * fVar27;
      fVar48 = fVar52 * fVar20 + fVar51 * fVar24 + fVar53 * fVar28;
      fVar50 = fVar52 * fVar21 + fVar51 * fVar25 + fVar53 * fVar29;
      unaff_RBP[-0x18] = fVar46;
      unaff_RBP[-0x17] = fVar48;
      unaff_RBP[-0x16] = fVar50;
      unaff_RBP[-0x15] = fVar52 * fVar22 + fVar51 * fVar26 + fVar53 * fVar30;
      fVar38 = in_stack_00000070[0xd];
      fVar39 = in_stack_00000070[0xe];
      fVar41 = in_stack_00000070[0xf];
      unaff_RBP[-0x14] =
           fVar55 * fVar19 + fVar54 * fVar23 + fVar56 * fVar27 + in_stack_00000070[0xc];
      unaff_RBP[-0x13] = fVar55 * fVar20 + fVar54 * fVar24 + fVar56 * fVar28 + fVar38;
      unaff_RBP[-0x12] = fVar55 * fVar21 + fVar54 * fVar25 + fVar56 * fVar29 + fVar39;
      unaff_RBP[-0x11] = fVar55 * fVar22 + fVar54 * fVar26 + fVar56 * fVar30 + fVar41;
      fVar38 = fVar57 * fVar57 + fVar58 * fVar58 + fVar59 * fVar59;
      auVar40 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
      fVar39 = auVar40._0_4_;
      fVar38 = fVar39 * 0.5 * (3.0 - fVar38 * fVar39 * fVar39);
      unaff_RBP[-0x20] = fVar57 * fVar38;
      plVar5 = (int64_t *)*puVar36;
      unaff_RBP[-0x1f] = fVar58 * fVar38;
      unaff_RBP[-0x1e] = fVar59 * fVar38;
      fVar38 = fVar60 * fVar60 + fVar61 * fVar61 + fVar62 * fVar62;
      auVar40 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
      fVar39 = auVar40._0_4_;
      fVar38 = fVar39 * 0.5 * (3.0 - fVar38 * fVar39 * fVar39);
      unaff_RBP[-0x1b] = fVar61 * fVar38;
      unaff_RBP[-0x1a] = fVar62 * fVar38;
      unaff_RBP[-0x1c] = fVar60 * fVar38;
      fVar38 = fVar46 * fVar46 + fVar48 * fVar48 + fVar50 * fVar50;
      auVar40 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
      fVar39 = auVar40._0_4_;
      fVar38 = fVar39 * 0.5 * (3.0 - fVar38 * fVar39 * fVar39);
      unaff_RBP[-0x18] = fVar46 * fVar38;
      unaff_RBP[-0x17] = fVar48 * fVar38;
      unaff_RBP[-0x16] = fVar50 * fVar38;
      (**(code **)(*plVar5 + 0x98))(plVar5,unaff_RBP + -0x20);
      (**(code **)(*(int64_t *)*puStack0000000000000048 + 0x140))();
      (**(code **)(*(int64_t *)*puStack0000000000000048 + 0xb8))
                ((int64_t *)*puStack0000000000000048,unaff_RBP + lVar37 * 4 + 0x44);
      (**(code **)(*(int64_t *)*puStack0000000000000048 + 0xa8))
                ((int64_t *)*puStack0000000000000048,unaff_RBP + lVar37 * 4 + 0x144);
      in_AL = cStack0000000000000040;
      if (cStack0000000000000041 != (char)unaff_R13) {
        uStack0000000000000064 = 0x7f7fffff;
        fStack0000000000000058 = (*(float *)(lVar34 + 0x114) + *(float *)(lVar34 + 0x124)) * 0.5;
        fStack000000000000005c = (*(float *)(lVar34 + 0x128) + *(float *)(lVar34 + 0x118)) * 0.5;
        fStack0000000000000060 = (*(float *)(lVar34 + 300) + *(float *)(lVar34 + 0x11c)) * 0.5;
        pfVar33 = (float *)FUN_1801c0fb0(unaff_RBP + 4,unaff_RBP + 0x18,&stack0x00000058);
        fVar41 = *unaff_R15 - ((float)unaff_RBP[0x40] + *pfVar33);
        fVar39 = unaff_R15[1] - ((float)unaff_RBP[0x41] + pfVar33[1]);
        fVar38 = unaff_R15[2] - ((float)unaff_RBP[0x42] + pfVar33[2]);
        fVar38 = fVar41 * fVar41 + fVar39 * fVar39 + fVar38 * fVar38;
        if (fVar38 < unaff_XMM13_Da) {
          unaff_XMM13_Da = fVar38;
          cStack0000000000000040 = unaff_BL;
          in_AL = unaff_BL;
        }
      }
    }
    unaff_BL = unaff_BL + '\x01';
  } while (unaff_BL < *(char *)(unaff_RDI + 0x20));
  if ((cStack0000000000000041 != '\0') && (in_AL != -1)) {
    puVar36 = *(uint64_t **)((int64_t)in_AL * 0x100 + 0xf0 + *(int64_t *)(unaff_RDI + 0x18));
    (**(code **)(*(int64_t *)*puVar36 + 0xe0))();
    plVar5 = (int64_t *)*puVar36;
    (**(code **)(*plVar5 + 0xf8))(plVar5,&system_data_02f0,in_stack_00000050);
  }
  if (*(int64_t *)(unaff_RDI + 0xd0) != 0) {
    unaff_R13 = *(uint64_t *)(*(int64_t *)(unaff_RDI + 0xd0) + 0x1000);
  }
  FUN_180431380(unaff_R13);
  if (*(float *)(unaff_RDI + 0x3c) < unaff_XMM14_Da) {
    fVar38 = 0.1;
  }
  else {
    fVar38 = *(float *)(unaff_RDI + 0x3c) + 1.1920929e-07;
  }
  *(float *)(unaff_RDI + 0x34) = fVar38;
  *(int16_t *)(unaff_RDI + 0x40) = 2;
  if ((*(int64_t *)(unaff_RDI + 0x130) != 0) || (*(int64_t *)(unaff_RDI + 0x138) != 0)) {
    (**(code **)(unaff_RDI + 0x138))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x244) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1802fe6b9(void)
void FUN_1802fe6b9(void)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  char in_AL;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  char unaff_R12B;
  uint64_t unaff_R13;
  float fVar3;
  float unaff_XMM14_Da;
  
  if ((unaff_R12B != '\0') && (in_AL != -1)) {
    puVar1 = *(uint64_t **)((int64_t)in_AL * 0x100 + 0xf0 + *(int64_t *)(unaff_RDI + 0x18));
    (**(code **)(*(int64_t *)*puVar1 + 0xe0))();
    plVar2 = (int64_t *)*puVar1;
    (**(code **)(*plVar2 + 0xf8))(plVar2,&system_data_02f0);
  }
  if (*(int64_t *)(unaff_RDI + 0xd0) != 0) {
    unaff_R13 = *(uint64_t *)(*(int64_t *)(unaff_RDI + 0xd0) + 0x1000);
  }
  FUN_180431380(unaff_R13);
  if (*(float *)(unaff_RDI + 0x3c) < unaff_XMM14_Da) {
    fVar3 = 0.1;
  }
  else {
    fVar3 = *(float *)(unaff_RDI + 0x3c) + 1.1920929e-07;
  }
  *(float *)(unaff_RDI + 0x34) = fVar3;
  *(int16_t *)(unaff_RDI + 0x40) = 2;
  if ((*(int64_t *)(unaff_RDI + 0x130) != 0) || (*(int64_t *)(unaff_RDI + 0x138) != 0)) {
    (**(code **)(unaff_RDI + 0x138))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x910) ^ (uint64_t)&stack0x00000000);
}






