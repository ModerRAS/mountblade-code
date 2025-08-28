#include "TaleWorlds.Native.Split.h"

// 03_rendering_part138.c - 5 个函数

// 函数: void FUN_18034e7c2(void)
void FUN_18034e7c2(void)

{
  uint uVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
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
  uint *puVar25;
  int unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_R11;
  uint64_t unaff_R12;
  ulonglong uVar26;
  uint unaff_R13D;
  longlong unaff_R14;
  int unaff_R15D;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float fStackX_20;
  float fStackX_24;
  float in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_R12;
  uVar26 = (ulonglong)unaff_R13D;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  do {
    puVar25 = (uint *)((longlong)(char)unaff_EBX * 0x100 + *(longlong *)(unaff_RDI + 0x18));
    do {
      LOCK();
      uVar1 = *puVar25;
      *puVar25 = *puVar25 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uVar1 = puVar25[1];
    uVar3 = puVar25[2];
    uVar4 = puVar25[3];
    uVar5 = puVar25[4];
    fVar6 = (float)puVar25[5];
    fVar7 = (float)puVar25[6];
    fVar8 = (float)puVar25[7];
    uVar9 = puVar25[8];
    *(uint *)(unaff_RBP + -0x19) = uVar1;
    *(uint *)(unaff_RBP + -0x15) = uVar3;
    *(uint *)(unaff_RBP + -0x11) = uVar4;
    *(uint *)(unaff_RBP + -0xd) = uVar5;
    *(float *)(unaff_RBP + -9) = fVar6;
    *(float *)(unaff_RBP + -5) = fVar7;
    *(float *)(unaff_RBP + -1) = fVar8;
    *(uint *)(unaff_RBP + 3) = uVar9;
    *puVar25 = unaff_R13D;
    *(uint *)(unaff_RBP + -0x79) = uVar1;
    *(uint *)(unaff_RBP + -0x75) = uVar3;
    *(uint *)(unaff_RBP + -0x71) = uVar4;
    *(uint *)(unaff_RBP + -0x6d) = uVar5;
    *(float *)(unaff_RBP + -0x69) = fVar6;
    *(float *)(unaff_RBP + -0x65) = fVar7;
    *(float *)(unaff_RBP + -0x61) = fVar8;
    *(uint *)(unaff_RBP + -0x5d) = uVar9;
    FUN_18063b5f0(&fStackX_20,unaff_RBP + -0x79);
    fVar10 = *(float *)(unaff_RSI + 0x70);
    fVar11 = *(float *)(unaff_RSI + 0x74);
    fVar12 = *(float *)(unaff_RSI + 0x78);
    fVar13 = *(float *)(unaff_RSI + 0x7c);
    fVar14 = *(float *)(unaff_RSI + 0x80);
    fVar15 = *(float *)(unaff_RSI + 0x84);
    fVar16 = *(float *)(unaff_RSI + 0x88);
    fVar17 = *(float *)(unaff_RSI + 0x8c);
    fVar18 = *(float *)(unaff_RSI + 0x90);
    fVar19 = *(float *)(unaff_RSI + 0x94);
    fVar20 = *(float *)(unaff_RSI + 0x98);
    fVar21 = *(float *)(unaff_RSI + 0x9c);
    uVar2 = *(uint64_t *)(uVar26 + *(longlong *)(unaff_R14 + 0x78));
    *(float *)(unaff_RBP + -0x59) =
         fStackX_24 * fVar14 + fStackX_20 * fVar10 + in_stack_00000028 * fVar18;
    *(float *)(unaff_RBP + -0x55) =
         fStackX_24 * fVar15 + fStackX_20 * fVar11 + in_stack_00000028 * fVar19;
    *(float *)(unaff_RBP + -0x51) =
         fStackX_24 * fVar16 + fStackX_20 * fVar12 + in_stack_00000028 * fVar20;
    *(float *)(unaff_RBP + -0x4d) =
         fStackX_24 * fVar17 + fStackX_20 * fVar13 + in_stack_00000028 * fVar21;
    *(float *)(unaff_RBP + -0x49) =
         fStack0000000000000034 * fVar14 + fStack0000000000000030 * fVar10 +
         in_stack_00000038 * fVar18;
    *(float *)(unaff_RBP + -0x45) =
         fStack0000000000000034 * fVar15 + fStack0000000000000030 * fVar11 +
         in_stack_00000038 * fVar19;
    *(float *)(unaff_RBP + -0x41) =
         fStack0000000000000034 * fVar16 + fStack0000000000000030 * fVar12 +
         in_stack_00000038 * fVar20;
    *(float *)(unaff_RBP + -0x3d) =
         fStack0000000000000034 * fVar17 + fStack0000000000000030 * fVar13 +
         in_stack_00000038 * fVar21;
    *(float *)(unaff_RBP + -0x39) =
         fStack0000000000000044 * fVar14 + fStack0000000000000040 * fVar10 +
         in_stack_00000048 * fVar18;
    *(float *)(unaff_RBP + -0x35) =
         fStack0000000000000044 * fVar15 + fStack0000000000000040 * fVar11 +
         in_stack_00000048 * fVar19;
    *(float *)(unaff_RBP + -0x31) =
         fStack0000000000000044 * fVar16 + fStack0000000000000040 * fVar12 +
         in_stack_00000048 * fVar20;
    *(float *)(unaff_RBP + -0x2d) =
         fStack0000000000000044 * fVar17 + fStack0000000000000040 * fVar13 +
         in_stack_00000048 * fVar21;
    fVar22 = *(float *)(unaff_RSI + 0xa4);
    fVar23 = *(float *)(unaff_RSI + 0xa8);
    fVar24 = *(float *)(unaff_RSI + 0xac);
    *(float *)(unaff_RBP + -0x29) =
         fVar7 * fVar14 + fVar6 * fVar10 + fVar8 * fVar18 + *(float *)(unaff_RSI + 0xa0);
    *(float *)(unaff_RBP + -0x25) = fVar7 * fVar15 + fVar6 * fVar11 + fVar8 * fVar19 + fVar22;
    *(float *)(unaff_RBP + -0x21) = fVar7 * fVar16 + fVar6 * fVar12 + fVar8 * fVar20 + fVar23;
    *(float *)(unaff_RBP + -0x1d) = fVar7 * fVar17 + fVar6 * fVar13 + fVar8 * fVar21 + fVar24;
    FUN_1802ea790(uVar2,unaff_RBP + -0x59);
    unaff_EBX = unaff_EBX + 1;
    uVar26 = uVar26 + 8;
  } while (unaff_EBX < unaff_R15D);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 7) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18034e92a(void)
void FUN_18034e92a(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 7) ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_18034e960(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte *pbVar8;
  int iVar9;
  void *puVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar16;
  int iVar17;
  uint64_t uVar18;
  void *puStack_80;
  int8_t *puStack_78;
  uint uStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  ulonglong uVar15;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x260);
  cVar3 = *(char *)(lVar5 + 0x20);
  lStack_60 = 0;
  lStack_58 = 0;
  iVar17 = 0;
  uStack_50 = 0;
  uStack_48 = 3;
  FUN_1802e8c60(*(uint64_t *)(param_1 + 0x70),&lStack_60,param_3,param_4,0xfffffffffffffffe);
  uVar18 = 0;
  if ('\0' < cVar3) {
    do {
      uVar13 = 0;
      lVar12 = *(longlong *)
                ((longlong)(char)iVar17 * 0x1b0 +
                 *(longlong *)(*(longlong *)(lVar5 + 0x208) + 0x140) + 0x180);
      puStack_80 = &UNK_180a3c3e0;
      uStack_68 = 0;
      puStack_78 = (int8_t *)0x0;
      uStack_70 = 0;
      FUN_1806277c0(&puStack_80,*(int32_t *)(lVar12 + 0x10));
      if (0 < *(int *)(lVar12 + 0x10)) {
        puVar10 = &DAT_18098bc73;
        if (*(void **)(lVar12 + 8) != (void *)0x0) {
          puVar10 = *(void **)(lVar12 + 8);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_78,puVar10,(longlong)(*(int *)(lVar12 + 0x10) + 1));
      }
      if ((*(longlong *)(lVar12 + 8) != 0) && (uStack_70 = 0, puStack_78 != (int8_t *)0x0)) {
        *puStack_78 = 0;
      }
      iVar11 = uStack_70 + 7;
      FUN_1806277c0(&puStack_80,iVar11);
      *(uint64_t *)(puStack_78 + uStack_70) = 0x7265706c65685f;
      uVar16 = lStack_58 - lStack_60 >> 3;
      uVar15 = uVar13;
      uStack_70 = iVar11;
      if (uVar16 != 0) {
        do {
          lVar12 = *(longlong *)(lStack_60 + uVar13 * 8);
          iVar4 = *(int *)(lVar12 + 0x298);
          iVar9 = iVar11;
          if (iVar4 == iVar11) {
            if (iVar4 != 0) {
              pbVar8 = *(byte **)(lVar12 + 0x290);
              lVar12 = (longlong)puStack_78 - (longlong)pbVar8;
              do {
                pbVar1 = pbVar8 + lVar12;
                iVar9 = (uint)*pbVar8 - (uint)*pbVar1;
                if (iVar9 != 0) break;
                pbVar8 = pbVar8 + 1;
              } while (*pbVar1 != 0);
            }
LAB_18034eafd:
            if (iVar9 == 0) {
              plVar6 = *(longlong **)(lStack_60 + uVar13 * 8);
              plVar2 = (longlong *)(*(longlong *)(param_1 + 0x78) + uVar13 * 8);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x28))(plVar6);
              }
              plVar7 = (longlong *)*plVar2;
              *plVar2 = (longlong)plVar6;
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x38))();
              }
              uVar18 = 1;
              break;
            }
          }
          else if (iVar4 == 0) goto LAB_18034eafd;
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          uVar13 = uVar13 + 1;
        } while ((ulonglong)(longlong)(int)uVar14 < uVar16);
      }
      puStack_80 = &UNK_180a3c3e0;
      if (puStack_78 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_78 = (int8_t *)0x0;
      uStack_68 = uStack_68 & 0xffffffff00000000;
      puStack_80 = &UNK_18098bcb0;
      iVar17 = iVar17 + 1;
    } while (iVar17 < cVar3);
  }
  if (lStack_60 == 0) {
    return uVar18;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034ebc0(longlong param_1)
void FUN_18034ebc0(longlong param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  bool bVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  char cVar20;
  char cVar21;
  uint *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint64_t uStack_30;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x260);
  if ((*(longlong *)(lVar4 + 0x10) == 0) || (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x20) == 0)
     ) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if ('\0' < (char)*(byte *)(lVar4 + 0x20)) {
    lVar23 = 0;
    uVar24 = (ulonglong)*(byte *)(lVar4 + 0x20);
    do {
      lVar5 = *(longlong *)(param_1 + 0x70);
      puVar22 = (uint *)(lVar23 * 0x100 + *(longlong *)(lVar4 + 0x18));
      fVar7 = *(float *)(lVar5 + 0x90);
      fVar8 = *(float *)(lVar5 + 0x94);
      fVar9 = *(float *)(lVar5 + 0x98);
      fVar10 = *(float *)(lVar5 + 0x9c);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar23 * 8);
      fVar11 = *(float *)(lVar5 + 0x80);
      fVar12 = *(float *)(lVar5 + 0x84);
      fVar13 = *(float *)(lVar5 + 0x88);
      fVar14 = *(float *)(lVar5 + 0x70);
      fVar15 = *(float *)(lVar5 + 0x74);
      fVar16 = *(float *)(lVar5 + 0x78);
      fVar25 = *(float *)(lVar6 + 0x74);
      fVar26 = *(float *)(lVar6 + 0x84);
      fVar27 = *(float *)(lVar6 + 0x70);
      fVar1 = *(float *)(lVar6 + 0x78);
      fVar2 = *(float *)(lVar6 + 0x80);
      fStack_b8 = fVar25 * fVar15 + fVar27 * fVar14 + fVar1 * fVar16;
      fStack_b4 = fVar25 * fVar12 + fVar27 * fVar11 + fVar1 * fVar13;
      fStack_b0 = fVar25 * fVar8 + fVar27 * fVar7 + fVar1 * fVar9;
      fStack_ac = fVar25 * fVar10 + fVar27 * fVar10 + fVar1 * fVar10;
      fVar25 = *(float *)(lVar6 + 0x88);
      fVar27 = *(float *)(lVar6 + 0x90);
      fVar1 = *(float *)(lVar6 + 0x94);
      fStack_a8 = fVar26 * fVar15 + fVar2 * fVar14 + fVar25 * fVar16;
      fStack_a4 = fVar26 * fVar12 + fVar2 * fVar11 + fVar25 * fVar13;
      fStack_a0 = fVar26 * fVar8 + fVar2 * fVar7 + fVar25 * fVar9;
      fStack_9c = fVar26 * fVar10 + fVar2 * fVar10 + fVar25 * fVar10;
      fVar25 = *(float *)(lVar6 + 0x98);
      fStack_98 = fVar1 * fVar15 + fVar27 * fVar14 + fVar25 * fVar16;
      fStack_94 = fVar1 * fVar12 + fVar27 * fVar11 + fVar25 * fVar13;
      fStack_90 = fVar1 * fVar8 + fVar27 * fVar7 + fVar25 * fVar9;
      fStack_8c = fVar1 * fVar10 + fVar27 * fVar10 + fVar25 * fVar10;
      fVar25 = *(float *)(lVar6 + 0xa0) - *(float *)(lVar5 + 0xa0);
      fVar27 = *(float *)(lVar6 + 0xa4) - *(float *)(lVar5 + 0xa4);
      fVar26 = *(float *)(lVar6 + 0xa8) - *(float *)(lVar5 + 0xa8);
      fStack_88 = fVar27 * fVar15 + fVar25 * fVar14 + fVar26 * fVar16;
      fStack_84 = fVar27 * fVar12 + fVar25 * fVar11 + fVar26 * fVar13;
      fStack_80 = fVar27 * fVar8 + fVar25 * fVar7 + fVar26 * fVar9;
      fStack_7c = fVar27 * fVar10 + fVar25 * fVar10 + fVar26 * fVar10;
      FUN_18063b470(&uStack_f8,&fStack_b8);
      uStack_c8 = CONCAT44(fStack_84,fStack_88);
      uStack_c0 = CONCAT44(fStack_7c,fStack_80);
      uStack_d8 = uStack_f8;
      uVar19 = uStack_d8;
      uStack_d0 = uStack_f0;
      uVar18 = uStack_d0;
      do {
        LOCK();
        uVar3 = *puVar22;
        *puVar22 = *puVar22 | 1;
        UNLOCK();
      } while ((uVar3 & 1) != 0);
      uStack_d8._0_4_ = (uint)uStack_f8;
      uStack_d8._4_4_ = (uint)((ulonglong)uStack_f8 >> 0x20);
      uStack_d0._0_4_ = (uint)uStack_f0;
      uStack_d0._4_4_ = (uint)((ulonglong)uStack_f0 >> 0x20);
      puVar22[1] = (uint)uStack_d8;
      puVar22[2] = uStack_d8._4_4_;
      puVar22[3] = (uint)uStack_d0;
      puVar22[4] = uStack_d0._4_4_;
      puVar22[5] = (uint)fStack_88;
      puVar22[6] = (uint)fStack_84;
      puVar22[7] = (uint)fStack_80;
      puVar22[8] = (uint)fStack_7c;
      *puVar22 = 0;
      uStack_d8 = uVar19;
      uStack_d0 = uVar18;
      if (bVar17) {
        FUN_1802feba0(lVar4,(longlong)(ulonglong)(uint)((int)puVar22 - *(int *)(lVar4 + 0x18)) >> 8
                            & 0xff);
      }
      if ((char)puVar22[0x28] != -1) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)(char)puVar22[0x28] * 8);
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar23 * 8);
        fVar7 = *(float *)(lVar5 + 0x90);
        fVar8 = *(float *)(lVar5 + 0x94);
        fVar9 = *(float *)(lVar5 + 0x98);
        fVar10 = *(float *)(lVar5 + 0x9c);
        fVar11 = *(float *)(lVar5 + 0x80);
        fVar12 = *(float *)(lVar5 + 0x84);
        fVar13 = *(float *)(lVar5 + 0x88);
        fVar14 = *(float *)(lVar5 + 0x70);
        fVar15 = *(float *)(lVar5 + 0x74);
        fVar16 = *(float *)(lVar5 + 0x78);
        fVar25 = *(float *)(lVar6 + 0x74);
        fVar26 = *(float *)(lVar6 + 0x84);
        fVar27 = *(float *)(lVar6 + 0x70);
        fVar1 = *(float *)(lVar6 + 0x78);
        fVar2 = *(float *)(lVar6 + 0x80);
        fStack_78 = fVar25 * fVar15 + fVar27 * fVar14 + fVar1 * fVar16;
        fStack_74 = fVar25 * fVar12 + fVar27 * fVar11 + fVar1 * fVar13;
        fStack_70 = fVar25 * fVar8 + fVar27 * fVar7 + fVar1 * fVar9;
        fStack_6c = fVar25 * fVar10 + fVar27 * fVar10 + fVar1 * fVar10;
        fVar25 = *(float *)(lVar6 + 0x88);
        fVar27 = *(float *)(lVar6 + 0x90);
        fVar1 = *(float *)(lVar6 + 0x94);
        fStack_68 = fVar26 * fVar15 + fVar2 * fVar14 + fVar25 * fVar16;
        fStack_64 = fVar26 * fVar12 + fVar2 * fVar11 + fVar25 * fVar13;
        fStack_60 = fVar26 * fVar8 + fVar2 * fVar7 + fVar25 * fVar9;
        fStack_5c = fVar26 * fVar10 + fVar2 * fVar10 + fVar25 * fVar10;
        fVar25 = *(float *)(lVar6 + 0x98);
        fStack_58 = fVar1 * fVar15 + fVar27 * fVar14 + fVar25 * fVar16;
        fStack_54 = fVar1 * fVar12 + fVar27 * fVar11 + fVar25 * fVar13;
        fStack_50 = fVar1 * fVar8 + fVar27 * fVar7 + fVar25 * fVar9;
        fStack_4c = fVar1 * fVar10 + fVar27 * fVar10 + fVar25 * fVar10;
        fVar25 = *(float *)(lVar6 + 0xa0) - *(float *)(lVar5 + 0xa0);
        fVar27 = *(float *)(lVar6 + 0xa4) - *(float *)(lVar5 + 0xa4);
        fVar26 = *(float *)(lVar6 + 0xa8) - *(float *)(lVar5 + 0xa8);
        fStack_48 = fVar27 * fVar15 + fVar25 * fVar14 + fVar26 * fVar16;
        fStack_44 = fVar27 * fVar12 + fVar25 * fVar11 + fVar26 * fVar13;
        fStack_40 = fVar27 * fVar8 + fVar25 * fVar7 + fVar26 * fVar9;
        fStack_3c = fVar27 * fVar10 + fVar25 * fVar10 + fVar26 * fVar10;
        FUN_18063b470(&uStack_e8,&fStack_78);
        puVar22[0xc] = uStack_e8;
        puVar22[0xd] = uStack_e4;
        puVar22[0xe] = uStack_e0;
        puVar22[0xf] = uStack_dc;
        *(ulonglong *)(puVar22 + 0x10) = CONCAT44(fStack_44,fStack_48);
        *(ulonglong *)(puVar22 + 0x12) = CONCAT44(fStack_3c,fStack_40);
      }
      lVar23 = lVar23 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  cVar20 = *(char *)(lVar4 + 0x20);
  cVar21 = '\0';
  if ('\0' < cVar20) {
    do {
      uStack_30 = 0x1802fba8b;
      FUN_1802feba0(lVar4,cVar21);
      cVar20 = *(char *)(lVar4 + 0x20);
      cVar21 = cVar21 + '\x01';
    } while (cVar21 < cVar20);
  }
  if (*(longlong *)(lVar4 + 0xd0) != 0) {
    uStack_30 = 0x1802fbb12;
    FUN_180300a60((longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28,
                  *(longlong *)(lVar4 + 0xd0),*(int32_t *)(lVar4 + 0x44),(int)cVar20);
    *(ushort *)(lVar4 + 0xa8) = *(ushort *)(lVar4 + 0xa8) | 8;
    return;
  }
  uStack_30 = 0x1802fbadf;
  uVar19 = FUN_18062b1e0(_DAT_180c8ed18,0x1028,8,3);
                    // WARNING: Subroutine does not return
  uStack_30 = 0x1802fbaf2;
  memset(uVar19,0,0x1028);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034ec05(uint64_t param_1,byte param_2,uint64_t param_3,uint64_t param_4,
void FUN_18034ec05(uint64_t param_1,byte param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
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
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  char cVar26;
  char cVar27;
  uint *puVar28;
  longlong unaff_RBP;
  longlong lVar29;
  longlong unaff_RDI;
  longlong unaff_R13;
  ulonglong uVar30;
  char unaff_R15B;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint64_t uStackX_20;
  uint64_t uStack00000000000000e8;
  
  lVar29 = 0;
  uVar30 = (ulonglong)param_2;
  do {
    lVar5 = *(longlong *)(unaff_R13 + 0x70);
    puVar28 = (uint *)(lVar29 * 0x100 + *(longlong *)(unaff_RDI + 0x18));
    fVar7 = *(float *)(lVar5 + 0x90);
    fVar8 = *(float *)(lVar5 + 0x94);
    fVar9 = *(float *)(lVar5 + 0x98);
    fVar10 = *(float *)(lVar5 + 0x9c);
    lVar6 = *(longlong *)(*(longlong *)(unaff_R13 + 0x78) + lVar29 * 8);
    fVar11 = *(float *)(lVar5 + 0x80);
    fVar12 = *(float *)(lVar5 + 0x84);
    fVar13 = *(float *)(lVar5 + 0x88);
    fVar14 = *(float *)(lVar5 + 0x70);
    fVar15 = *(float *)(lVar5 + 0x74);
    fVar16 = *(float *)(lVar5 + 0x78);
    fVar33 = *(float *)(lVar6 + 0x74);
    fVar32 = *(float *)(lVar6 + 0x84);
    fVar34 = *(float *)(lVar6 + 0x70);
    fVar1 = *(float *)(lVar6 + 0x78);
    fVar2 = *(float *)(lVar6 + 0x80);
    fVar3 = *(float *)(lVar6 + 0x88);
    fVar4 = *(float *)(lVar6 + 0x90);
    *(float *)(unaff_RBP + -0x59) = fVar33 * fVar15 + fVar34 * fVar14 + fVar1 * fVar16;
    *(float *)(unaff_RBP + -0x55) = fVar33 * fVar12 + fVar34 * fVar11 + fVar1 * fVar13;
    *(float *)(unaff_RBP + -0x51) = fVar33 * fVar8 + fVar34 * fVar7 + fVar1 * fVar9;
    *(float *)(unaff_RBP + -0x4d) = fVar33 * fVar10 + fVar34 * fVar10 + fVar1 * fVar10;
    fVar33 = *(float *)(lVar6 + 0x94);
    fVar34 = *(float *)(lVar6 + 0x98);
    *(float *)(unaff_RBP + -0x49) = fVar32 * fVar15 + fVar2 * fVar14 + fVar3 * fVar16;
    *(float *)(unaff_RBP + -0x45) = fVar32 * fVar12 + fVar2 * fVar11 + fVar3 * fVar13;
    *(float *)(unaff_RBP + -0x41) = fVar32 * fVar8 + fVar2 * fVar7 + fVar3 * fVar9;
    *(float *)(unaff_RBP + -0x3d) = fVar32 * fVar10 + fVar2 * fVar10 + fVar3 * fVar10;
    fVar32 = *(float *)(lVar6 + 0xa0) - *(float *)(lVar5 + 0xa0);
    *(float *)(unaff_RBP + -0x39) = fVar33 * fVar15 + fVar4 * fVar14 + fVar34 * fVar16;
    *(float *)(unaff_RBP + -0x35) = fVar33 * fVar12 + fVar4 * fVar11 + fVar34 * fVar13;
    *(float *)(unaff_RBP + -0x31) = fVar33 * fVar8 + fVar4 * fVar7 + fVar34 * fVar9;
    *(float *)(unaff_RBP + -0x2d) = fVar33 * fVar10 + fVar4 * fVar10 + fVar34 * fVar10;
    fVar34 = *(float *)(lVar6 + 0xa4) - *(float *)(lVar5 + 0xa4);
    fVar33 = *(float *)(lVar6 + 0xa8) - *(float *)(lVar5 + 0xa8);
    *(float *)(unaff_RBP + -0x29) = fVar34 * fVar15 + fVar32 * fVar14 + fVar33 * fVar16;
    *(float *)(unaff_RBP + -0x25) = fVar34 * fVar12 + fVar32 * fVar11 + fVar33 * fVar13;
    *(float *)(unaff_RBP + -0x21) = fVar34 * fVar8 + fVar32 * fVar7 + fVar33 * fVar9;
    *(float *)(unaff_RBP + -0x1d) = fVar34 * fVar10 + fVar32 * fVar10 + fVar33 * fVar10;
    FUN_18063b470(&uStackX_20,unaff_RBP + -0x59);
    *(uint64_t *)(unaff_RBP + -0x79) = uStackX_20;
    *(uint64_t *)(unaff_RBP + -0x71) = param_5;
    *(uint64_t *)(unaff_RBP + -0x69) = *(uint64_t *)(unaff_RBP + -0x29);
    *(uint64_t *)(unaff_RBP + -0x61) = *(uint64_t *)(unaff_RBP + -0x21);
    do {
      LOCK();
      uVar31 = *puVar28;
      *puVar28 = *puVar28 | 1;
      UNLOCK();
    } while ((uVar31 & 1) != 0);
    uVar31 = *(uint *)(unaff_RBP + -0x79);
    uVar17 = *(uint *)(unaff_RBP + -0x75);
    uVar18 = *(uint *)(unaff_RBP + -0x71);
    uVar19 = *(uint *)(unaff_RBP + -0x6d);
    uVar20 = *(uint *)(unaff_RBP + -0x69);
    uVar21 = *(uint *)(unaff_RBP + -0x65);
    uVar22 = *(uint *)(unaff_RBP + -0x61);
    uVar23 = *(uint *)(unaff_RBP + -0x5d);
    puVar28[1] = uVar31;
    puVar28[2] = uVar17;
    puVar28[3] = uVar18;
    puVar28[4] = uVar19;
    puVar28[5] = uVar20;
    puVar28[6] = uVar21;
    puVar28[7] = uVar22;
    puVar28[8] = uVar23;
    *puVar28 = 0;
    if (unaff_R15B != '\0') {
      uVar31 = FUN_1802feba0(uVar31,(longlong)
                                    (ulonglong)(uint)((int)puVar28 - *(int *)(unaff_RDI + 0x18)) >>
                                    8 & 0xff);
    }
    if ((char)puVar28[0x28] != -1) {
      lVar5 = *(longlong *)(*(longlong *)(unaff_R13 + 0x78) + (longlong)(char)puVar28[0x28] * 8);
      lVar6 = *(longlong *)(*(longlong *)(unaff_R13 + 0x78) + lVar29 * 8);
      fVar7 = *(float *)(lVar5 + 0x90);
      fVar8 = *(float *)(lVar5 + 0x94);
      fVar9 = *(float *)(lVar5 + 0x98);
      fVar10 = *(float *)(lVar5 + 0x9c);
      fVar11 = *(float *)(lVar5 + 0x80);
      fVar12 = *(float *)(lVar5 + 0x84);
      fVar13 = *(float *)(lVar5 + 0x88);
      fVar14 = *(float *)(lVar5 + 0x70);
      fVar15 = *(float *)(lVar5 + 0x74);
      fVar16 = *(float *)(lVar5 + 0x78);
      fVar33 = *(float *)(lVar6 + 0x74);
      fVar32 = *(float *)(lVar6 + 0x84);
      fVar34 = *(float *)(lVar6 + 0x70);
      fVar1 = *(float *)(lVar6 + 0x78);
      fVar2 = *(float *)(lVar6 + 0x80);
      fVar3 = *(float *)(lVar6 + 0x88);
      fVar4 = *(float *)(lVar6 + 0x90);
      *(float *)(unaff_RBP + -0x19) = fVar33 * fVar15 + fVar34 * fVar14 + fVar1 * fVar16;
      *(float *)(unaff_RBP + -0x15) = fVar33 * fVar12 + fVar34 * fVar11 + fVar1 * fVar13;
      *(float *)(unaff_RBP + -0x11) = fVar33 * fVar8 + fVar34 * fVar7 + fVar1 * fVar9;
      *(float *)(unaff_RBP + -0xd) = fVar33 * fVar10 + fVar34 * fVar10 + fVar1 * fVar10;
      fVar33 = *(float *)(lVar6 + 0x94);
      fVar34 = *(float *)(lVar6 + 0x98);
      *(float *)(unaff_RBP + -9) = fVar32 * fVar15 + fVar2 * fVar14 + fVar3 * fVar16;
      *(float *)(unaff_RBP + -5) = fVar32 * fVar12 + fVar2 * fVar11 + fVar3 * fVar13;
      *(float *)(unaff_RBP + -1) = fVar32 * fVar8 + fVar2 * fVar7 + fVar3 * fVar9;
      *(float *)(unaff_RBP + 3) = fVar32 * fVar10 + fVar2 * fVar10 + fVar3 * fVar10;
      fVar32 = *(float *)(lVar6 + 0xa0) - *(float *)(lVar5 + 0xa0);
      *(float *)(unaff_RBP + 7) = fVar33 * fVar15 + fVar4 * fVar14 + fVar34 * fVar16;
      *(float *)(unaff_RBP + 0xb) = fVar33 * fVar12 + fVar4 * fVar11 + fVar34 * fVar13;
      *(float *)(unaff_RBP + 0xf) = fVar33 * fVar8 + fVar4 * fVar7 + fVar34 * fVar9;
      *(float *)(unaff_RBP + 0x13) = fVar33 * fVar10 + fVar4 * fVar10 + fVar34 * fVar10;
      fVar34 = *(float *)(lVar6 + 0xa4) - *(float *)(lVar5 + 0xa4);
      fVar33 = *(float *)(lVar6 + 0xa8) - *(float *)(lVar5 + 0xa8);
      *(float *)(unaff_RBP + 0x17) = fVar34 * fVar15 + fVar32 * fVar14 + fVar33 * fVar16;
      *(float *)(unaff_RBP + 0x1b) = fVar34 * fVar12 + fVar32 * fVar11 + fVar33 * fVar13;
      *(float *)(unaff_RBP + 0x1f) = fVar34 * fVar8 + fVar32 * fVar7 + fVar33 * fVar9;
      *(float *)(unaff_RBP + 0x23) = fVar34 * fVar10 + fVar32 * fVar10 + fVar33 * fVar10;
      FUN_18063b470(&param_6,unaff_RBP + -0x19);
      uVar25 = *(uint64_t *)(unaff_RBP + 0x17);
      uVar24 = *(uint64_t *)(unaff_RBP + 0x1f);
      puVar28[0xc] = (uint)param_6;
      puVar28[0xd] = param_6._4_4_;
      puVar28[0xe] = (uint)param_7;
      puVar28[0xf] = param_7._4_4_;
      *(uint64_t *)(puVar28 + 0x10) = uVar25;
      *(uint64_t *)(puVar28 + 0x12) = uVar24;
      uVar31 = (uint)param_6;
    }
    lVar29 = lVar29 + 1;
    uVar30 = uVar30 - 1;
  } while (uVar30 != 0);
  cVar26 = *(char *)(unaff_RDI + 0x20);
  cVar27 = '\0';
  if ('\0' < cVar26) {
    do {
      uStack00000000000000e8 = 0x1802fba8b;
      uVar31 = FUN_1802feba0(uVar31,cVar27);
      cVar26 = *(char *)(unaff_RDI + 0x20);
      cVar27 = cVar27 + '\x01';
    } while (cVar27 < cVar26);
  }
  if (*(longlong *)(unaff_RDI + 0xd0) != 0) {
    uStack00000000000000e8 = 0x1802fbb12;
    FUN_180300a60((longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28,
                  *(longlong *)(unaff_RDI + 0xd0),*(int32_t *)(unaff_RDI + 0x44),(int)cVar26);
    *(ushort *)(unaff_RDI + 0xa8) = *(ushort *)(unaff_RDI + 0xa8) | 8;
    return;
  }
  uStack00000000000000e8 = 0x1802fbadf;
  uVar25 = FUN_18062b1e0(_DAT_180c8ed18,0x1028,8,3);
                    // WARNING: Subroutine does not return
  uStack00000000000000e8 = 0x1802fbaf2;
  memset(uVar25,0,0x1028);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034ef52(void)
void FUN_18034ef52(void)

{
  uint64_t uVar1;
  char cVar2;
  char cVar3;
  longlong unaff_RDI;
  uint64_t uStack00000000000000e8;
  uint64_t in_stack_00000108;
  uint64_t in_stack_00000110;
  uint64_t uStack0000000000000128;
  uint64_t uStack0000000000000138;
  
  uStack0000000000000128 = in_stack_00000110;
  uStack0000000000000138 = in_stack_00000108;
  cVar2 = *(char *)(unaff_RDI + 0x20);
  cVar3 = '\0';
  if ('\0' < cVar2) {
    do {
      uStack00000000000000e8 = 0x1802fba8b;
      FUN_1802feba0();
      cVar2 = *(char *)(unaff_RDI + 0x20);
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < cVar2);
  }
  if (*(longlong *)(unaff_RDI + 0xd0) != 0) {
    uStack00000000000000e8 = 0x1802fbb12;
    FUN_180300a60((longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28,
                  *(longlong *)(unaff_RDI + 0xd0),*(int32_t *)(unaff_RDI + 0x44),(int)cVar2);
    *(ushort *)(unaff_RDI + 0xa8) = *(ushort *)(unaff_RDI + 0xa8) | 8;
    return;
  }
  uStack00000000000000e8 = 0x1802fbadf;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x1028,8,3);
                    // WARNING: Subroutine does not return
  uStack00000000000000e8 = 0x1802fbaf2;
  memset(uVar1,0,0x1028);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



