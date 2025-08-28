#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part463_sub001.c - 5 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part463.c - 5 个函数


// 函数: void FUN_180515a6e(uint64_t param_1,float *param_2,int64_t param_3,int64_t param_4)
void FUN_180515a6e(uint64_t param_1,float *param_2,int64_t param_3,int64_t param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  float *pfVar7;
  uint *puVar8;
  int64_t unaff_RBX;
  float *unaff_RBP;
  int64_t lVar9;
  int64_t lVar10;
  int8_t auVar11 [16];
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
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  
  FUN_18063b5f0();
  fVar22 = unaff_RBP[0x18];
  fVar24 = unaff_RBP[0x19];
  unaff_RBP[-0x1c] = 3.4028235e+38;
  fVar27 = unaff_RBP[0x14];
  fVar20 = unaff_RBP[0x15];
  unaff_RBP[-0x18] = 3.4028235e+38;
  fVar25 = unaff_RBP[0x10];
  fVar14 = unaff_RBP[0x11];
  unaff_RBP[-0x14] = 3.4028235e+38;
  uVar5 = *(uint64_t *)(param_2 + 4);
  uVar6 = *(uint64_t *)(param_2 + 6);
  fVar26 = *(float *)(param_3 + 0x98);
  fVar13 = *(float *)(param_3 + 0x84);
  fVar12 = *(float *)(param_3 + 0x74);
  fVar28 = *(float *)(param_3 + 0x80);
  fVar1 = *(float *)(param_3 + 0x70);
  unaff_RBP[0x24] = fVar25;
  unaff_RBP[0x25] = fVar14;
  unaff_RBP[0x26] = unaff_RBP[0x12];
  unaff_RBP[0x27] = unaff_RBP[0x13];
  *(uint64_t *)(unaff_RBP + 0x30) = uVar5;
  *(uint64_t *)(unaff_RBP + 0x32) = uVar6;
  fStack0000000000000064 = fVar27 * fVar12 + fVar20 * fVar13;
  in_stack_00000060 = fVar27 * fVar1 + fVar20 * fVar28;
  in_stack_00000058 = unaff_RBP[0x12] * fVar26;
  unaff_RBP[0x28] = fVar27;
  unaff_RBP[0x29] = fVar20;
  unaff_RBP[0x2a] = unaff_RBP[0x16];
  unaff_RBP[0x2b] = unaff_RBP[0x17];
  unaff_RBP[0x2c] = fVar22;
  unaff_RBP[0x2d] = fVar24;
  unaff_RBP[0x2e] = unaff_RBP[0x1a];
  unaff_RBP[0x2f] = unaff_RBP[0x1b];
  in_stack_00000050 = fVar25 * fVar1 + fVar14 * fVar28;
  in_stack_00000068 = unaff_RBP[0x16] * fVar26;
  fStack000000000000005c = unaff_RBP[-0x1c];
  fStack0000000000000054 = fVar25 * fVar12 + fVar14 * fVar13;
  fStack000000000000006c = unaff_RBP[-0x18];
  unaff_RBP[-0x1f] = in_stack_00000050;
  unaff_RBP[-0x1e] = fStack0000000000000054;
  unaff_RBP[-0x1d] = in_stack_00000058;
  unaff_RBP[-0x1c] = fStack000000000000005c;
  fStack0000000000000040 = (float)uVar5;
  fStack0000000000000044 = (float)((uint64_t)uVar5 >> 0x20);
  fStack0000000000000048 = (float)uVar6;
  fVar20 = *param_2;
  fVar25 = param_2[1];
  fVar14 = param_2[2];
  fVar16 = param_2[3];
  fVar17 = *(float *)(param_4 + 0x90);
  fVar21 = *(float *)(param_4 + 0x94);
  fVar23 = *(float *)(param_4 + 0x98);
  fVar29 = *(float *)(param_4 + 0x9c);
  fVar27 = *(float *)(param_4 + 0x18);
  unaff_RBP[-0x1b] = in_stack_00000060;
  unaff_RBP[-0x1a] = fStack0000000000000064;
  unaff_RBP[-0x19] = in_stack_00000068;
  unaff_RBP[-0x18] = fStack000000000000006c;
  unaff_RBP[-0x17] = fVar22 * fVar1 + fVar24 * fVar28;
  unaff_RBP[-0x16] = fVar22 * fVar12 + fVar24 * fVar13;
  unaff_RBP[-0x15] = unaff_RBP[0x1a] * fVar26;
  unaff_RBP[-0x14] = unaff_RBP[-0x14];
  fVar26 = *(float *)(param_4 + 0x14);
  fVar22 = *(float *)(param_4 + 0x10);
  fVar15 = fVar23 * fVar16 * -1.0 + fVar20 * fVar21 * -1.0 + fVar17 * fVar25 + fVar29 * fVar14;
  fVar18 = fVar29 * fVar25 * -1.0 + fVar20 * fVar23 * -1.0 + fVar17 * fVar14 + fVar21 * fVar16;
  fVar19 = fVar21 * fVar14 * -1.0 + fVar20 * fVar29 * -1.0 + fVar17 * fVar16 + fVar23 * fVar25;
  fVar20 = fVar29 * fVar16 * 1.0 + fVar20 * fVar17 * 1.0 + fVar23 * fVar14 + fVar21 * fVar25;
  in_stack_00000070 = *(float *)(param_4 + 0x50);
  fVar24 = *(float *)(param_3 + 0xa0);
  fVar27 = (fStack0000000000000048 * *(float *)(param_3 + 0x98) + *(float *)(param_3 + 0xa8)) * 0.7
           + fVar27 * 0.3;
  *unaff_RBP = fVar20;
  unaff_RBP[1] = fVar15;
  unaff_RBP[2] = fVar18;
  unaff_RBP[3] = fVar19;
  fVar28 = (fStack0000000000000040 * fVar1 + fStack0000000000000044 * fVar28 + fVar24) * 0.7 +
           fVar22 * 0.3;
  fStack0000000000000074 = *(float *)(param_4 + 0x54);
  fVar26 = (fStack0000000000000040 * fVar12 + fStack0000000000000044 * fVar13 +
           *(float *)(param_3 + 0xa4)) * 0.7 + fVar26 * 0.3;
  in_stack_00000070 = in_stack_00000070 - fVar28;
  in_stack_00000078 = *(float *)(param_4 + 0x58) - fVar27;
  unaff_RBP[-0x20] = fVar26;
  fStack0000000000000074 = fStack0000000000000074 - fVar26;
  fStack000000000000007c = 3.4028235e+38;
  fVar13 = in_stack_00000070 * in_stack_00000070 + fStack0000000000000074 * fStack0000000000000074 +
           in_stack_00000078 * in_stack_00000078;
  _fStack0000000000000040 = CONCAT44(fStack0000000000000074,in_stack_00000070);
  _fStack0000000000000048 = CONCAT44(0x7f7fffff,in_stack_00000078);
  auVar11 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar26 = auVar11._0_4_;
  fVar26 = fVar26 * 0.5 * (3.0 - fVar13 * fVar26 * fVar26);
  in_stack_00000070 = in_stack_00000070 * fVar26;
  fStack0000000000000074 = fStack0000000000000074 * fVar26;
  in_stack_00000078 = in_stack_00000078 * fVar26;
  *(float *)(param_4 + 0x59c) = fVar26 * fVar13;
  lVar10 = *(int64_t *)(unaff_RBX + 0x728);
  if (0.1 < *(float *)(lVar10 + 0x59c) || *(float *)(lVar10 + 0x59c) == 0.1) {
    fVar16 = in_stack_00000078 * fStack0000000000000064 - fStack0000000000000074 * in_stack_00000068
    ;
    fVar12 = in_stack_00000060 * fStack0000000000000074 - fStack0000000000000064 * in_stack_00000070
    ;
    fVar14 = in_stack_00000068 * in_stack_00000070 - in_stack_00000060 * in_stack_00000078;
    fVar26 = fVar14 * fVar14 + fVar16 * fVar16 + fVar12 * fVar12;
    auVar11 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
    fVar13 = auVar11._0_4_;
    fVar29 = fVar13 * 0.5 * (3.0 - fVar26 * fVar13 * fVar13);
    fVar16 = fVar29 * fVar16;
    fVar14 = fVar29 * fVar14;
    fVar29 = fVar29 * fVar12;
    fVar23 = fStack0000000000000074 * fVar29 - in_stack_00000078 * fVar14;
    fVar17 = fVar14 * in_stack_00000070 - fStack0000000000000074 * fVar16;
    fVar15 = in_stack_00000078 * fVar16 - fVar29 * in_stack_00000070;
    FUN_18063b5f0(unaff_RBP + -0x13);
    fVar26 = unaff_RBP[-0xd];
    fVar13 = unaff_RBP[-9];
    fVar12 = unaff_RBP[-0x12];
    fVar28 = unaff_RBP[-0x11];
    fVar21 = fVar28 * fStack000000000000005c;
    fVar20 = fVar26 * fStack000000000000006c;
    fVar1 = unaff_RBP[-0xe];
    fVar27 = unaff_RBP[-10];
    fVar22 = unaff_RBP[-0x13];
    fVar24 = unaff_RBP[-0xf];
    fVar25 = fVar24 * fStack000000000000006c;
    in_stack_00000060 = fVar12 * fVar16 + fVar1 * fVar23 + fVar27 * in_stack_00000070;
    fStack0000000000000064 = fVar12 * fVar14 + fVar1 * fVar15 + fVar27 * fStack0000000000000074;
    in_stack_00000068 = fVar12 * fVar29 + fVar1 * fVar17 + fVar27 * in_stack_00000078;
    fStack000000000000006c =
         fVar12 * fStack000000000000005c + fVar1 * fStack000000000000006c +
         fVar27 * fStack000000000000007c;
    fVar12 = unaff_RBP[-0xb];
    in_stack_00000050 = fVar22 * fVar16 + fVar24 * fVar23 + fVar12 * in_stack_00000070;
    fStack0000000000000054 = fVar22 * fVar14 + fVar24 * fVar15 + fVar12 * fStack0000000000000074;
    in_stack_00000058 = fVar22 * fVar29 + fVar24 * fVar17 + fVar12 * in_stack_00000078;
    fStack000000000000005c =
         fVar22 * fStack000000000000005c + fVar25 + fVar12 * fStack000000000000007c;
    in_stack_00000070 = fVar28 * fVar16 + fVar26 * fVar23 + fVar13 * in_stack_00000070;
    fStack0000000000000074 = fVar28 * fVar14 + fVar26 * fVar15 + fVar13 * fStack0000000000000074;
    in_stack_00000078 = fVar28 * fVar29 + fVar26 * fVar17 + fVar13 * in_stack_00000078;
    fStack000000000000007c = fVar21 + fVar20 + fVar13 * fStack000000000000007c;
    FUN_18063b470(unaff_RBP + 4,&stack0x00000050);
    uVar5 = *(uint64_t *)(unaff_RBP + 6);
    *(uint64_t *)(lVar10 + 0x40) = *(uint64_t *)(unaff_RBP + 4);
    *(uint64_t *)(lVar10 + 0x48) = uVar5;
  }
  else {
    *(int32_t *)(lVar10 + 0x59c) = 0x3dcccccd;
    lVar10 = *(int64_t *)(unaff_RBX + 0x728);
    fVar26 = *(float *)(lVar10 + 0x40);
    fVar13 = *(float *)(lVar10 + 0x44);
    fVar12 = *(float *)(lVar10 + 0x48);
    fVar1 = *(float *)(lVar10 + 0x4c);
    fVar22 = fVar12 * fVar19 * 1.0 + fVar26 * fVar15 * 1.0 + (fVar20 * fVar13 - fVar1 * fVar18);
    fVar24 = fVar1 * fVar15 * 1.0 + fVar26 * fVar18 * 1.0 + (fVar20 * fVar12 - fVar13 * fVar19);
    fVar25 = fVar13 * fVar18 * 1.0 + fVar26 * fVar19 * 1.0 + (fVar20 * fVar1 - fVar12 * fVar15);
    fVar26 = fVar1 * fVar19 * -1.0 + fVar12 * fVar18 * -1.0 + (fVar20 * fVar26 - fVar13 * fVar15);
    unaff_RBP[0x1c] = fVar26;
    unaff_RBP[0x1d] = fVar22;
    unaff_RBP[0x1e] = fVar24;
    unaff_RBP[0x1f] = fVar25;
    fVar28 = (fVar26 * fVar24 + fVar22 * fVar25) * 0.2 + fVar28;
    fVar26 = (fVar24 * fVar25 - fVar26 * fVar22) * 0.2 + unaff_RBP[-0x20];
    fVar27 = (0.1 - (fVar24 * fVar24 + fVar22 * fVar22) * 0.2) + fVar27;
    *(float *)(lVar10 + 0x50) = fVar28;
    *(float *)(lVar10 + 0x54) = fVar26;
    *(float *)(lVar10 + 0x58) = fVar27;
    *(int32_t *)(lVar10 + 0x5c) = 0x7f7fffff;
    _fStack0000000000000040 = CONCAT44(fVar26,fVar28);
    _fStack0000000000000048 = CONCAT44(0x7f7fffff,fVar27);
    iVar3 = *(int *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5a4);
    if (-1 < iVar3) {
      lVar10 = *(int64_t *)(unaff_RBX + 0x8d8);
      lVar9 = (int64_t)iVar3 * 0xa60;
      puVar8 = (uint *)((int64_t)*(char *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5a8) * 0x100 +
                       *(int64_t *)(*(int64_t *)(lVar9 + 0x36f8 + lVar10) + 0x18));
      do {
        LOCK();
        uVar2 = *puVar8;
        *puVar8 = *puVar8 | 1;
        UNLOCK();
      } while ((uVar2 & 1) != 0);
      fVar26 = (float)puVar8[1];
      fVar13 = (float)puVar8[2];
      fVar12 = (float)puVar8[3];
      fVar28 = (float)puVar8[4];
      fVar1 = (float)puVar8[5];
      fVar27 = (float)puVar8[6];
      fVar22 = (float)puVar8[7];
      fVar24 = (float)puVar8[8];
      unaff_RBP[0x3c] = fVar26;
      unaff_RBP[0x3d] = fVar13;
      unaff_RBP[0x3e] = fVar12;
      unaff_RBP[0x3f] = fVar28;
      unaff_RBP[0x40] = fVar1;
      unaff_RBP[0x41] = fVar27;
      unaff_RBP[0x42] = fVar22;
      unaff_RBP[0x43] = fVar24;
      *puVar8 = 0;
      lVar10 = *(int64_t *)(lVar9 + 0x3778 + lVar10);
      lVar9 = *(int64_t *)(unaff_RBX + 0x728);
      unaff_RBP[8] = fVar26;
      unaff_RBP[9] = fVar13;
      unaff_RBP[10] = fVar12;
      unaff_RBP[0xb] = fVar28;
      unaff_RBP[0xc] = fVar1;
      unaff_RBP[0xd] = fVar27;
      unaff_RBP[0xe] = fVar22;
      unaff_RBP[0xf] = fVar24;
      pfVar7 = (float *)FUN_180534930(*(int64_t *)(lVar10 + 0x8a8) + 0x70,unaff_RBP + 0x20,
                                      lVar9 + 0x50);
      _fStack0000000000000040 = CONCAT44(pfVar7[1] - fVar27,*pfVar7 - fVar1);
      _fStack0000000000000048 = CONCAT44(0x7f7fffff,pfVar7[2] - fVar22);
      FUN_180285b40(unaff_RBP + 8,unaff_RBP + -7,&stack0x00000040);
      puVar4 = *(uint64_t **)(unaff_RBX + 0x728);
      uVar5 = *(uint64_t *)(unaff_RBP + -5);
      *puVar4 = *(uint64_t *)(unaff_RBP + -7);
      puVar4[1] = uVar5;
    }
  }
  lVar10 = *(int64_t *)(unaff_RBX + 0x728);
  FUN_180575360(*(uint64_t *)(unaff_RBX + 0x590),lVar10 + 0x50,lVar10 + 0x40,
                *(float *)(lVar10 + 0x59c) / *(float *)(*(int64_t *)(unaff_RBX + 0x6d8) + 0x8c0),
                0x7149f2ca);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x44) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180515e40(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180515e40(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint64_t uVar12;
  float *pfVar13;
  uint *puVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar15;
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  float unaff_XMM6_Dc;
  float unaff_XMM6_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  int32_t uStack000000000000004c;
  
  *(int32_t *)(param_3 + 0x59c) = 0x3dcccccd;
  lVar3 = *(int64_t *)(unaff_RBX + 0x728);
  fVar19 = *(float *)(lVar3 + 0x40);
  fVar5 = *(float *)(lVar3 + 0x44);
  fVar6 = *(float *)(lVar3 + 0x48);
  fVar7 = *(float *)(lVar3 + 0x4c);
  fVar16 = fVar6 * unaff_XMM6_Dd * 1.0 + fVar19 * unaff_XMM6_Db * 1.0 +
           (unaff_XMM6_Da * fVar5 - fVar7 * unaff_XMM6_Dc);
  fVar17 = fVar7 * unaff_XMM6_Db * 1.0 + fVar19 * unaff_XMM6_Dc * 1.0 +
           (unaff_XMM6_Da * fVar6 - fVar5 * unaff_XMM6_Dd);
  fVar18 = fVar5 * unaff_XMM6_Dc * 1.0 + fVar19 * unaff_XMM6_Dd * 1.0 +
           (unaff_XMM6_Da * fVar7 - fVar6 * unaff_XMM6_Db);
  fVar19 = fVar7 * unaff_XMM6_Dd * -1.0 + fVar6 * unaff_XMM6_Dc * -1.0 +
           (unaff_XMM6_Da * fVar19 - fVar5 * unaff_XMM6_Db);
  *(float *)(unaff_RBP + 0x70) = fVar19;
  *(float *)(unaff_RBP + 0x74) = fVar16;
  *(float *)(unaff_RBP + 0x78) = fVar17;
  *(float *)(unaff_RBP + 0x7c) = fVar18;
  fStack0000000000000040 = (fVar19 * fVar17 + fVar16 * fVar18) * 0.2 + unaff_XMM10_Da;
  fStack0000000000000044 = (fVar17 * fVar18 - fVar19 * fVar16) * 0.2 + *(float *)(unaff_RBP + -0x80)
  ;
  fStack0000000000000048 =
       (unaff_XMM8_Da - (fVar17 * fVar17 + fVar16 * fVar16) * 0.2) + unaff_XMM9_Da;
  *(float *)(lVar3 + 0x50) = fStack0000000000000040;
  *(float *)(lVar3 + 0x54) = fStack0000000000000044;
  *(float *)(lVar3 + 0x58) = fStack0000000000000048;
  *(int32_t *)(lVar3 + 0x5c) = 0x7f7fffff;
  uStack000000000000004c = 0x7f7fffff;
  iVar2 = *(int *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5a4);
  if (-1 < iVar2) {
    lVar3 = *(int64_t *)(unaff_RBX + 0x8d8);
    lVar15 = (int64_t)iVar2 * 0xa60;
    puVar14 = (uint *)((int64_t)*(char *)(*(int64_t *)(unaff_RBX + 0x728) + 0x5a8) * 0x100 +
                      *(int64_t *)(*(int64_t *)(lVar15 + 0x36f8 + lVar3) + 0x18));
    do {
      LOCK();
      uVar1 = *puVar14;
      *puVar14 = *puVar14 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uVar1 = puVar14[1];
    uVar8 = puVar14[2];
    uVar9 = puVar14[3];
    uVar10 = puVar14[4];
    fVar19 = (float)puVar14[5];
    fVar5 = (float)puVar14[6];
    fVar6 = (float)puVar14[7];
    uVar11 = puVar14[8];
    *(uint *)(unaff_RBP + 0xf0) = uVar1;
    *(uint *)(unaff_RBP + 0xf4) = uVar8;
    *(uint *)(unaff_RBP + 0xf8) = uVar9;
    *(uint *)(unaff_RBP + 0xfc) = uVar10;
    *(float *)(unaff_RBP + 0x100) = fVar19;
    *(float *)(unaff_RBP + 0x104) = fVar5;
    *(float *)(unaff_RBP + 0x108) = fVar6;
    *(uint *)(unaff_RBP + 0x10c) = uVar11;
    *puVar14 = 0;
    lVar3 = *(int64_t *)(lVar15 + 0x3778 + lVar3);
    lVar15 = *(int64_t *)(unaff_RBX + 0x728);
    *(uint *)(unaff_RBP + 0x20) = uVar1;
    *(uint *)(unaff_RBP + 0x24) = uVar8;
    *(uint *)(unaff_RBP + 0x28) = uVar9;
    *(uint *)(unaff_RBP + 0x2c) = uVar10;
    *(float *)(unaff_RBP + 0x30) = fVar19;
    *(float *)(unaff_RBP + 0x34) = fVar5;
    *(float *)(unaff_RBP + 0x38) = fVar6;
    *(uint *)(unaff_RBP + 0x3c) = uVar11;
    pfVar13 = (float *)FUN_180534930(*(int64_t *)(lVar3 + 0x8a8) + 0x70,unaff_RBP + 0x80,
                                     lVar15 + 0x50);
    uStack000000000000004c = 0x7f7fffff;
    fStack0000000000000040 = *pfVar13 - fVar19;
    fStack0000000000000044 = pfVar13[1] - fVar5;
    fStack0000000000000048 = pfVar13[2] - fVar6;
    FUN_180285b40(unaff_RBP + 0x20,unaff_RBP + -0x1c,&stack0x00000040);
    puVar4 = *(uint64_t **)(unaff_RBX + 0x728);
    uVar12 = *(uint64_t *)(unaff_RBP + -0x14);
    *puVar4 = *(uint64_t *)(unaff_RBP + -0x1c);
    puVar4[1] = uVar12;
  }
  lVar3 = *(int64_t *)(unaff_RBX + 0x728);
  FUN_180575360(*(uint64_t *)(unaff_RBX + 0x590),lVar3 + 0x50,lVar3 + 0x40,
                *(float *)(lVar3 + 0x59c) / *(float *)(*(int64_t *)(unaff_RBX + 0x6d8) + 0x8c0),
                0x7149f2ca);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x110) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180516299(void)
void FUN_180516299(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x110) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805162e0(int64_t param_1)
void FUN_1805162e0(int64_t param_1)

{
  int64_t lVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  float fVar4;
  int32_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  float fVar9;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
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
  float fVar31;
  int8_t auStack_138 [32];
  int32_t uStack_118;
  int8_t uStack_110;
  int8_t uStack_108;
  uint64_t uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  fVar28 = 1.0 - *(float *)(*(int64_t *)(param_1 + 0x590) + 0xa600);
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d8) + 0x8a8);
  fVar28 = fVar28 + fVar28;
  lVar8 = *(int64_t *)(param_1 + 0x728);
  if (1.0 <= fVar28) {
    fVar28 = 1.0;
  }
  fVar31 = *(float *)(lVar1 + 0x98) * *(float *)(lVar8 + 0xb8) + *(float *)(lVar1 + 0xa8);
  fVar30 = *(float *)(lVar8 + 0xb4) * *(float *)(lVar1 + 0x80) +
           *(float *)(lVar8 + 0xb0) * *(float *)(lVar1 + 0x70) + *(float *)(lVar1 + 0xa0);
  fVar29 = *(float *)(lVar8 + 0xb0) * *(float *)(lVar1 + 0x74) +
           *(float *)(lVar8 + 0xb4) * *(float *)(lVar1 + 0x84) + *(float *)(lVar1 + 0xa4);
  uVar5 = FUN_18063b470(&uStack_d8,param_1 + 0x520);
  lVar1 = *(int64_t *)(param_1 + 0x728);
  fVar19 = *(float *)(lVar1 + 0x90);
  fVar21 = *(float *)(lVar1 + 0x94);
  fVar22 = *(float *)(lVar1 + 0x98);
  fVar23 = *(float *)(lVar1 + 0x9c);
  fVar24 = (float)uStack_d0 * fVar23 * 1.0 + (float)uStack_d8 * fVar21 * 1.0 +
           (fVar19 * uStack_d8._4_4_ - uStack_d0._4_4_ * fVar22);
  fVar25 = uStack_d0._4_4_ * fVar21 * 1.0 + (float)uStack_d8 * fVar22 * 1.0 +
           (fVar19 * (float)uStack_d0 - uStack_d8._4_4_ * fVar23);
  fVar26 = uStack_d8._4_4_ * fVar22 * 1.0 + (float)uStack_d8 * fVar23 * 1.0 +
           (fVar19 * uStack_d0._4_4_ - (float)uStack_d0 * fVar21);
  fVar27 = uStack_d0._4_4_ * fVar23 * -1.0 + (float)uStack_d0 * fVar22 * -1.0 +
           (fVar19 * (float)uStack_d8 - uStack_d8._4_4_ * fVar21);
  if ((*(byte *)(lVar1 + 0x5ac) & 0x40) == 0) {
    fVar21 = 1.0 - fVar28;
    fVar19 = fVar28 * 0.3 + 0.7;
    fStack_f8 = fVar21 * *(float *)(lVar1 + 0x10) * 0.3 + fVar30 * fVar19;
    fStack_f4 = *(float *)(lVar1 + 0x14) * 0.3 * fVar21 + fVar29 * fVar19;
    fStack_f0 = *(float *)(lVar1 + 0x18) * 0.3 * fVar21 + fVar31 * fVar19;
    uStack_ec = 0x7f7fffff;
    if (0.001 <= fVar28) {
      if (fVar28 <= 0.999) {
        fVar19 = *(float *)(lVar1 + 0x40);
        fVar22 = *(float *)(lVar1 + 0x44);
        fVar23 = *(float *)(lVar1 + 0x48);
        fVar29 = *(float *)(lVar1 + 0x4c);
        fVar30 = fVar25 * fVar23;
        fVar31 = fVar26 * fVar29;
        uStack_c8 = 0xbf800000;
        uStack_c4 = 0xbf800000;
        uStack_c0 = 0xbf800000;
        uStack_bc = 0xbf800000;
        auVar10._0_4_ = fVar30 + fVar27 * fVar19;
        auVar10._4_4_ = fVar31 + fVar24 * fVar22;
        auVar10._8_4_ = fVar30 + fVar30;
        auVar10._12_4_ = fVar31 + fVar31;
        auVar13._4_12_ = auVar10._4_12_;
        auVar13._0_4_ = auVar10._0_4_ + auVar10._4_4_;
        uStack_d8 = 0x3f8000003f800000;
        uStack_d0 = 0x3f8000003f800000;
        uVar6 = movmskps(uVar5,auVar13);
        uVar7 = (uint64_t)(uVar6 & 1);
        fVar30 = *(float *)(&uStack_d8 + uVar7 * 2);
        fVar31 = *(float *)(&uStack_d0 + uVar7 * 2);
        fVar24 = *(float *)((int64_t)&uStack_d8 + uVar7 * 0x10 + 4) * fVar24;
        fVar26 = *(float *)((int64_t)&uStack_d0 + uVar7 * 0x10 + 4) * fVar26;
        if (0.9995 < ABS(auVar13._0_4_)) {
          fVar27 = fVar21 * fVar19 + fVar28 * fVar30 * fVar27;
          fVar30 = fVar21 * fVar22 + fVar28 * fVar24;
          fVar31 = fVar21 * fVar23 + fVar28 * fVar31 * fVar25;
          fVar29 = fVar21 * fVar29 + fVar28 * fVar26;
          fVar28 = fVar29 * fVar29 + fVar27 * fVar27;
          fVar19 = fVar31 * fVar31 + fVar30 * fVar30;
          fVar26 = fVar28 + fVar30 * fVar30 + fVar31 * fVar31;
          fVar25 = fVar19 + fVar27 * fVar27 + fVar29 * fVar29;
          auVar3._4_4_ = fVar28 + fVar19 + 1.1754944e-38;
          auVar3._0_4_ = fVar19 + fVar28 + 1.1754944e-38;
          auVar3._8_4_ = fVar26 + 1.1754944e-38;
          auVar3._12_4_ = fVar25 + 1.1754944e-38;
          auVar10 = rsqrtps(auVar13,auVar3);
          fVar21 = auVar10._0_4_;
          fVar22 = auVar10._4_4_;
          fVar23 = auVar10._8_4_;
          fVar24 = auVar10._12_4_;
          fVar27 = fVar27 * (3.0 - fVar21 * fVar21 * (fVar19 + fVar28)) * fVar21 * 0.5;
          fVar30 = fVar30 * (3.0 - fVar22 * fVar22 * (fVar28 + fVar19)) * fVar22 * 0.5;
          fVar31 = fVar31 * (3.0 - fVar23 * fVar23 * fVar26) * fVar23 * 0.5;
          fVar29 = fVar29 * (3.0 - fVar24 * fVar24 * fVar25) * fVar24 * 0.5;
        }
        else {
          fVar21 = (float)acosf();
          fVar14 = (float)sinf();
          fVar16 = (float)sinf(fVar21 - fVar21 * fVar28);
          fVar16 = fVar16 * (1.0 / fVar14);
          fVar28 = (float)sinf(fVar21 * fVar28);
          fVar28 = fVar28 * (1.0 / fVar14);
          fVar27 = fVar16 * fVar19 + fVar28 * fVar30 * fVar27;
          fVar30 = fVar16 * fVar22 + fVar28 * fVar24;
          fVar31 = fVar16 * fVar23 + fVar28 * fVar31 * fVar25;
          fVar29 = fVar16 * fVar29 + fVar28 * fVar26;
        }
        uStack_d8 = CONCAT44(fVar30,fVar27);
        uStack_d0 = CONCAT44(fVar29,fVar31);
      }
      else {
        uStack_d8 = CONCAT44(fVar24,fVar27);
        uStack_d0 = CONCAT44(fVar26,fVar25);
      }
    }
    else {
      uStack_d8 = *(uint64_t *)(lVar1 + 0x40);
      uStack_d0 = *(uint64_t *)(lVar1 + 0x48);
    }
    uStack_100 = *(uint64_t *)(param_1 + 0x658);
    fVar28 = 0.0;
    lVar8 = *(int64_t *)(param_1 + 0x590);
    uStack_108 = *(int8_t *)(lVar8 + 0x2600);
    uStack_118 = 0x7149f2ca;
  }
  else {
    fVar14 = *(float *)(lVar1 + 0xa0);
    fVar16 = *(float *)(lVar1 + 0xa4);
    fVar20 = *(float *)(lVar1 + 0xa8);
    fVar4 = *(float *)(lVar1 + 0xac);
    fVar9 = 1.0 - fVar28;
    fVar15 = fVar22 * fVar4 * -1.0 + fVar14 * fVar21 * -1.0 + fVar19 * fVar16 + fVar23 * fVar20;
    fVar17 = fVar23 * fVar16 * -1.0 + fVar14 * fVar22 * -1.0 + fVar19 * fVar20 + fVar21 * fVar4;
    fVar18 = fVar21 * fVar20 * -1.0 + fVar14 * fVar23 * -1.0 + fVar19 * fVar4 + fVar22 * fVar16;
    fVar19 = fVar23 * fVar4 * 1.0 + fVar14 * fVar19 * 1.0 + fVar22 * fVar20 + fVar21 * fVar16;
    fVar21 = fVar25 * fVar18 * 1.0 + fVar27 * fVar15 * 1.0 + (fVar19 * fVar24 - fVar26 * fVar17);
    fVar22 = fVar26 * fVar15 * 1.0 + fVar27 * fVar17 * 1.0 + (fVar19 * fVar25 - fVar24 * fVar18);
    fVar23 = fVar24 * fVar17 * 1.0 + fVar27 * fVar18 * 1.0 + (fVar19 * fVar26 - fVar25 * fVar15);
    fVar19 = fVar26 * fVar18 * -1.0 + fVar25 * fVar17 * -1.0 + (fVar19 * fVar27 - fVar24 * fVar15);
    fVar14 = fVar21 * fVar23;
    fVar20 = fVar19 * fVar22;
    fVar16 = fVar22 * fVar23 - fVar19 * fVar21;
    fVar19 = *(float *)(lVar1 + 0x59c);
    fStack_f0 = fVar9 * *(float *)(lVar1 + 0x58) +
                ((1.0 - (fVar21 * fVar21 + fVar21 * fVar21 + fVar22 * fVar22 + fVar22 * fVar22)) *
                 fVar19 + fVar31) * fVar28;
    uStack_ec = 0x7f7fffff;
    fVar21 = *(float *)(lVar1 + 0x40);
    fVar22 = *(float *)(lVar1 + 0x44);
    fVar23 = *(float *)(lVar1 + 0x48);
    fVar31 = *(float *)(lVar1 + 0x4c);
    fStack_f4 = ((fVar16 + fVar16) * fVar19 + fVar29) * fVar28 + fVar9 * *(float *)(lVar1 + 0x54);
    fStack_f8 = fVar9 * *(float *)(lVar1 + 0x50) +
                ((fVar20 + fVar20 + fVar14 + fVar14) * fVar19 + fVar30) * fVar28;
    fVar29 = *(float *)(lVar1 + 0x78) * *(float *)(lVar1 + 100) -
             *(float *)(lVar1 + 0x74) * *(float *)(lVar1 + 0x68);
    fVar19 = *(float *)(lVar1 + 0x70) * *(float *)(lVar1 + 0x68) -
             *(float *)(lVar1 + 0x60) * *(float *)(lVar1 + 0x78);
    fVar28 = *(float *)(lVar1 + 0x60) * *(float *)(lVar1 + 0x74) -
             *(float *)(lVar1 + 0x70) * *(float *)(lVar1 + 100);
    fStack_e8 = fVar9;
    if (((fVar29 != 0.0) || (fVar19 != 0.0)) || (fVar28 != 0.0)) {
      fVar19 = fVar29 * fVar29 + fVar19 * fVar19 + fVar28 * fVar28;
      auVar10 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar28 = auVar10._0_4_;
      fVar19 = fVar28 * 0.5 * (3.0 - fVar19 * fVar28 * fVar28) * fVar19;
      fVar28 = 0.0;
      if ((0.0 <= fVar19) && (fVar28 = fVar19, 1.0 <= fVar19)) {
        fVar28 = 1.0;
      }
      fVar28 = (float)asinf(fVar28);
                    // WARNING: Subroutine does not return
      FUN_1808fd400(fVar28 * 0.5);
    }
    if (0.001 <= fVar9) {
      if (fVar9 <= 0.999) {
        fVar28 = fVar23 * fVar25;
        fVar19 = fVar31 * fVar26;
        uStack_c8 = 0xbf800000;
        uStack_c4 = 0xbf800000;
        uStack_c0 = 0xbf800000;
        uStack_bc = 0xbf800000;
        auVar11._0_4_ = fVar28 + fVar21 * fVar27;
        auVar11._4_4_ = fVar19 + fVar22 * fVar24;
        auVar11._8_4_ = fVar28 + fVar28;
        auVar11._12_4_ = fVar19 + fVar19;
        auVar12._4_12_ = auVar11._4_12_;
        auVar12._0_4_ = auVar11._0_4_ + auVar11._4_4_;
        uStack_d8 = 0x3f8000003f800000;
        uStack_d0 = 0x3f8000003f800000;
        uVar6 = movmskps(uVar5,auVar12);
        uVar7 = (uint64_t)(uVar6 & 1);
        fVar28 = *(float *)(&uStack_d8 + uVar7 * 2);
        fVar19 = *(float *)(&uStack_d0 + uVar7 * 2);
        fVar22 = *(float *)((int64_t)&uStack_d8 + uVar7 * 0x10 + 4) * fVar22;
        fVar31 = *(float *)((int64_t)&uStack_d0 + uVar7 * 0x10 + 4) * fVar31;
        if (0.9995 < ABS(auVar12._0_4_)) {
          fVar29 = 1.0 - fVar9;
          fVar21 = fVar29 * fVar27 + fVar9 * fVar28 * fVar21;
          fVar22 = fVar29 * fVar24 + fVar9 * fVar22;
          fVar23 = fVar29 * fVar25 + fVar9 * fVar19 * fVar23;
          fVar31 = fVar29 * fVar26 + fVar9 * fVar31;
          fVar28 = fVar31 * fVar31 + fVar21 * fVar21;
          fVar19 = fVar23 * fVar23 + fVar22 * fVar22;
          fVar29 = fVar28 + fVar22 * fVar22 + fVar23 * fVar23;
          fVar30 = fVar19 + fVar21 * fVar21 + fVar31 * fVar31;
          auVar2._4_4_ = fVar28 + fVar19 + 1.1754944e-38;
          auVar2._0_4_ = fVar19 + fVar28 + 1.1754944e-38;
          auVar2._8_4_ = fVar29 + 1.1754944e-38;
          auVar2._12_4_ = fVar30 + 1.1754944e-38;
          auVar10 = rsqrtps(auVar12,auVar2);
          fVar24 = auVar10._0_4_;
          fVar26 = auVar10._4_4_;
          fVar25 = auVar10._8_4_;
          fVar27 = auVar10._12_4_;
          fVar21 = fVar21 * (3.0 - fVar24 * fVar24 * (fVar19 + fVar28)) * fVar24 * 0.5;
          fVar22 = fVar22 * (3.0 - fVar26 * fVar26 * (fVar28 + fVar19)) * fVar26 * 0.5;
          fVar23 = fVar23 * (3.0 - fVar25 * fVar25 * fVar29) * fVar25 * 0.5;
          fVar31 = fVar31 * (3.0 - fVar27 * fVar27 * fVar30) * fVar27 * 0.5;
        }
        else {
          fVar29 = (float)acosf();
          fVar30 = (float)sinf();
          fVar14 = (float)sinf(fVar29 - fVar29 * fVar9);
          fVar14 = fVar14 * (1.0 / fVar30);
          fVar29 = (float)sinf(fVar29 * fVar9);
          fVar29 = fVar29 * (1.0 / fVar30);
          fVar21 = fVar14 * fVar27 + fVar29 * fVar28 * fVar21;
          fVar22 = fVar14 * fVar24 + fVar29 * fVar22;
          fVar23 = fVar14 * fVar25 + fVar29 * fVar19 * fVar23;
          fVar31 = fVar14 * fVar26 + fVar29 * fVar31;
        }
      }
      uStack_d8 = CONCAT44(fVar22,fVar21);
      uStack_d0 = CONCAT44(fVar31,fVar23);
    }
    else {
      uStack_d8 = CONCAT44(fVar24,fVar27);
      uStack_d0 = CONCAT44(fVar26,fVar25);
    }
    lVar8 = *(int64_t *)(param_1 + 0x590);
    fVar28 = *(float *)(lVar1 + 0x59c) / *(float *)(*(int64_t *)(param_1 + 0x6d8) + 0x8c0);
    uStack_100 = *(uint64_t *)(param_1 + 0x658);
    uStack_108 = *(int8_t *)(lVar8 + 0x2600);
    uStack_118 = 0x3f800000;
  }
  uStack_110 = 0;
  FUN_180575360(lVar8,&fStack_f8,&uStack_d8,fVar28);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_b8 ^ (uint64_t)auStack_138);
}






