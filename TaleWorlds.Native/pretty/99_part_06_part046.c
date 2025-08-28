#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part046.c - 7 个函数

// 函数: void FUN_1803d69ed(longlong *param_1,int param_2,int param_3)
void FUN_1803d69ed(longlong *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  longlong lVar10;
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
  char cVar24;
  int iVar25;
  int *piVar26;
  uint64_t unaff_RBX;
  ulonglong uVar27;
  int32_t *unaff_RBP;
  uint uVar28;
  uint64_t unaff_RDI;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  longlong *plVar32;
  uint64_t unaff_R15;
  ulonglong uVar33;
  float fVar34;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int iStack0000000000000038;
  int iStack000000000000003c;
  char cStack0000000000000040;
  uint uStack0000000000000044;
  longlong in_stack_00000048;
  uint64_t in_stack_00000050;
  int32_t uStack0000000000000058;
  int16_t uStack000000000000005c;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  int32_t uStack0000000000000070;
  int8_t uStack0000000000000074;
  int32_t uStack0000000000000078;
  uint64_t uStack000000000000007c;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
  iStack0000000000000030 = param_2;
  iStack0000000000000034 = param_3;
  do {
    uVar27 = 0;
    lVar10 = *(longlong *)(*param_1 + 0x68);
    iStack000000000000003c = iStack0000000000000030 / *(int *)(lVar10 + 0x14);
    iStack0000000000000038 = iStack0000000000000030 % *(int *)(lVar10 + 0x14);
    uVar33 = (ulonglong)(iStack0000000000000038 * 1000 + iStack000000000000003c);
    uVar29 = uVar33 % (ulonglong)*(uint *)(lVar10 + 0x48);
    for (piVar26 = *(int **)(*(longlong *)(lVar10 + 0x40) + uVar29 * 8); piVar26 != (int *)0x0;
        piVar26 = *(int **)(piVar26 + 4)) {
      if ((iStack0000000000000038 == *piVar26) && (iStack000000000000003c == piVar26[1]))
      goto LAB_1803d6b64;
    }
    FUN_18066c220(lVar10 + 0x58,&stack0x00000040,(ulonglong)*(uint *)(lVar10 + 0x48),
                  *(int32_t *)(lVar10 + 0x50),1);
    piVar26 = (int *)FUN_18062b420(system_memory_pool_ptr,0x18,*(int8_t *)(lVar10 + 100));
    *(ulonglong *)piVar26 = CONCAT44(iStack000000000000003c,iStack0000000000000038);
    piVar26[2] = 0;
    piVar26[3] = 0;
    piVar26[4] = 0;
    piVar26[5] = 0;
    if (cStack0000000000000040 != '\0') {
      uVar29 = uVar33 % (ulonglong)uStack0000000000000044;
      FUN_1803b94a0(lVar10 + 0x38,uStack0000000000000044);
    }
    *(uint64_t *)(piVar26 + 4) = *(uint64_t *)(*(longlong *)(lVar10 + 0x40) + uVar29 * 8);
    *(int **)(*(longlong *)(lVar10 + 0x40) + uVar29 * 8) = piVar26;
    *(longlong *)(lVar10 + 0x50) = *(longlong *)(lVar10 + 0x50) + 1;
LAB_1803d6b64:
    lVar10 = *(longlong *)(piVar26 + 2);
    if ((lVar10 != 0) && (uVar29 = uVar27, 0 < *(int *)param_1[1])) {
      do {
        fVar11 = *(float *)(lVar10 + 0x80);
        fVar12 = *(float *)(lVar10 + 0x84);
        fVar13 = *(float *)(lVar10 + 0x88);
        fVar14 = *(float *)(lVar10 + 0x8c);
        plVar32 = (longlong *)param_1[2];
        fVar15 = *(float *)(lVar10 + 0x90);
        fVar16 = *(float *)(lVar10 + 0x94);
        fVar17 = *(float *)(lVar10 + 0x98);
        fVar18 = *(float *)(lVar10 + 0x9c);
        in_stack_00000050 = 0;
        fVar19 = *(float *)(lVar10 + 0xa0);
        fVar20 = *(float *)(lVar10 + 0xa4);
        fVar21 = *(float *)(lVar10 + 0xa8);
        fVar22 = *(float *)(lVar10 + 0xac);
        fVar1 = *(float *)(lVar10 + 0xc4);
        fVar34 = *(float *)(lVar10 + 0xc0);
        fVar2 = *(float *)(lVar10 + 200);
        lVar30 = *(longlong *)(uVar27 + *plVar32);
        fVar3 = *(float *)(lVar10 + 0xd0);
        fVar4 = *(float *)(lVar10 + 0xe4);
        fVar5 = *(float *)(lVar10 + 0xf0);
        uStack0000000000000058 = 0xffffffff;
        uStack000000000000005c = 0xff00;
        in_stack_00000060 = 0;
        in_stack_00000068 = 0xffffffffffffffff;
        uStack0000000000000070 = 0xffffffff;
        uStack0000000000000074 = 0xff;
        fVar6 = *(float *)(lVar10 + 0xd4);
        uStack0000000000000078 = 0xffffffff;
        uStack000000000000007c = 0;
        fVar7 = *(float *)(lVar10 + 0xd8);
        *(int16_t *)(unaff_RBP + -0x1f) = 0x400;
        fVar8 = *(float *)(lVar10 + 0xe0);
        *(uint64_t *)(unaff_RBP + -0x1e) = 0;
        unaff_RBP[-0x10] = fVar1 * fVar15 + fVar34 * fVar11 + fVar2 * fVar19;
        unaff_RBP[-0xf] = fVar1 * fVar16 + fVar34 * fVar12 + fVar2 * fVar20;
        unaff_RBP[-0xe] = fVar1 * fVar17 + fVar34 * fVar13 + fVar2 * fVar21;
        unaff_RBP[-0xd] = fVar1 * fVar18 + fVar34 * fVar14 + fVar2 * fVar22;
        fVar1 = *(float *)(lVar10 + 0xe8);
        unaff_RBP[-0x1c] = 0;
        fVar34 = *(float *)(lVar10 + 0xf4);
        *(uint64_t *)(unaff_RBP + -0x1a) = 0;
        unaff_RBP[-0xc] = fVar3 * fVar11 + fVar6 * fVar15 + fVar7 * fVar19;
        unaff_RBP[-0xb] = fVar3 * fVar12 + fVar6 * fVar16 + fVar7 * fVar20;
        unaff_RBP[-10] = fVar3 * fVar13 + fVar6 * fVar17 + fVar7 * fVar21;
        unaff_RBP[-9] = fVar3 * fVar14 + fVar6 * fVar18 + fVar7 * fVar22;
        fVar2 = *(float *)(lVar10 + 0xf8);
        unaff_RBP[-0x18] = 0;
        fVar3 = *(float *)(lVar10 + 0xb0);
        fVar6 = *(float *)(lVar10 + 0xb4);
        fVar7 = *(float *)(lVar10 + 0xb8);
        fVar23 = *(float *)(lVar10 + 0xbc);
        *(int8_t *)(unaff_RBP + -0x17) = 0;
        unaff_RBP[-8] = fVar4 * fVar15 + fVar8 * fVar11 + fVar1 * fVar19;
        unaff_RBP[-7] = fVar4 * fVar16 + fVar8 * fVar12 + fVar1 * fVar20;
        unaff_RBP[-6] = fVar4 * fVar17 + fVar8 * fVar13 + fVar1 * fVar21;
        unaff_RBP[-5] = fVar4 * fVar18 + fVar8 * fVar14 + fVar1 * fVar22;
        *(uint64_t *)(unaff_RBP + -0x12) = 0;
        unaff_RBP[-0xd] = 0;
        unaff_RBP[-9] = 0;
        unaff_RBP[-5] = 0;
        *(uint64_t *)(unaff_RBP + 4) = 0;
        *(uint64_t *)(unaff_RBP + 6) = 0x7f7fffff00000000;
        *(uint64_t *)(unaff_RBP + 8) = 0;
        *(uint64_t *)(unaff_RBP + 10) = 0x7f7fffff00000000;
        *unaff_RBP = 0;
        unaff_RBP[1] = 0;
        unaff_RBP[2] = 0;
        unaff_RBP[3] = 0x7f7fffff;
        *(uint64_t *)(unaff_RBP + 0x2c) = 0;
        unaff_RBP[-4] = fVar5 * fVar11 + fVar34 * fVar15 + fVar2 * fVar19 + fVar3;
        unaff_RBP[-3] = fVar5 * fVar12 + fVar34 * fVar16 + fVar2 * fVar20 + fVar6;
        unaff_RBP[-2] = fVar5 * fVar13 + fVar34 * fVar17 + fVar2 * fVar21 + fVar7;
        unaff_RBP[-1] = fVar5 * fVar14 + fVar34 * fVar18 + fVar2 * fVar22 + fVar23;
        unaff_RBP[-1] = 0x3f800000;
        unaff_RBP[0xc] = 0;
        unaff_RBP[0xd] = 0;
        unaff_RBP[0xe] = 0;
        unaff_RBP[0xf] = 0;
        unaff_RBP[0x10] = 0;
        unaff_RBP[0x11] = 0;
        unaff_RBP[0x12] = 0;
        unaff_RBP[0x13] = 0;
        unaff_RBP[0x14] = 0;
        unaff_RBP[0x15] = 0;
        unaff_RBP[0x16] = 0;
        unaff_RBP[0x17] = 0;
        unaff_RBP[0x18] = 0;
        unaff_RBP[0x19] = 0;
        unaff_RBP[0x1a] = 0;
        unaff_RBP[0x1b] = 0;
        unaff_RBP[0x1c] = 0;
        unaff_RBP[0x1d] = 0;
        unaff_RBP[0x1e] = 0;
        unaff_RBP[0x1f] = 0;
        unaff_RBP[0x20] = 0;
        unaff_RBP[0x21] = 0;
        unaff_RBP[0x22] = 0;
        unaff_RBP[0x23] = 0;
        unaff_RBP[0x24] = 0;
        unaff_RBP[0x25] = 0;
        unaff_RBP[0x26] = 0;
        unaff_RBP[0x27] = 0;
        unaff_RBP[0x28] = 0;
        unaff_RBP[0x29] = 0;
        unaff_RBP[0x2a] = 0;
        unaff_RBP[0x2b] = 0;
        FUN_18063ad30(0,lVar10 + 0x100,unaff_RBP + -0x10,lVar30);
        lVar31 = *(longlong *)param_1[3];
        bVar9 = *(byte *)(*(longlong *)(uVar27 + *plVar32) + 0x1bd8);
        fVar1 = (float)unaff_RBP[0x2c];
        fVar34 = (float)unaff_RBP[0x2d];
        if ((float)unaff_RBP[0x2d] <= 0.0) {
          fVar34 = fVar1;
        }
        in_stack_00000048 = lVar31;
        if (10.0 <= fVar34) {
          if (fVar1 <= 2.0) {
            cVar24 = func_0x0001801be000(lVar30 + 0x30,unaff_RBP + 8,fVar1);
            if (cVar24 != '\0') goto LAB_1803d6e09;
          }
          else {
            iVar25 = FUN_18063c930();
            lVar31 = in_stack_00000048;
            if (iVar25 != 0) {
LAB_1803d6e09:
              if ((bVar9 & 2) != 0) {
                if (((*(longlong **)(lVar31 + 0x29a8) != (longlong *)0x0) && (fVar1 <= 100.0)) &&
                   (cVar24 = (**(code **)(**(longlong **)(lVar31 + 0x29a8) + 0x30))(),
                   cVar24 == '\0')) goto LAB_1803d6e62;
                plVar32 = (longlong *)param_1[2];
              }
              FUN_1803d7f00(*param_1,*(uint64_t *)(uVar27 + *plVar32),unaff_RBP + -0x10,
                            lVar10 + 0x80,&stack0x00000050);
            }
          }
        }
LAB_1803d6e62:
        uVar28 = (int)uVar29 + 1;
        uVar27 = uVar27 + 8;
        uVar29 = (ulonglong)uVar28;
      } while ((int)uVar28 < *(int *)param_1[1]);
    }
    iStack0000000000000030 = iStack0000000000000030 + 1;
    if (iStack0000000000000034 <= iStack0000000000000030) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x30) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_1803d6f35(void)
void FUN_1803d6f35(void)

{
  return;
}






// 函数: void FUN_1803d6f40(void)
void FUN_1803d6f40(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d7b80(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803d7b80(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plStackX_8;
  uint64_t uVar3;
  longlong **pplVar4;
  
  uVar2 = system_context_ptr;
  uVar3 = 0xfffffffffffffffe;
  plStackX_8 = *(longlong **)(param_1 + 0x2070);
  if (plStackX_8 != (longlong *)0x0) {
    pplVar4 = &plStackX_8;
    (**(code **)(*plStackX_8 + 0x28))();
    FUN_18005e6a0(uVar2,&plStackX_8,0,param_4,uVar3,pplVar4);
    plVar1 = *(longlong **)(param_1 + 0x2070);
    *(uint64_t *)(param_1 + 0x2070) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d7c00(longlong param_1,longlong param_2,longlong param_3)
void FUN_1803d7c00(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  longlong lStackX_8;
  longlong lStackX_10;
  longlong lStackX_20;
  int32_t uStack_b8;
  int32_t uStack_b4;
  longlong *plStack_98;
  longlong lStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  int32_t *apuStack_78 [2];
  code *pcStack_68;
  void *puStack_60;
  int32_t **ppuStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  uint64_t uStack_40;
  ulonglong uVar6;
  
  uStack_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    uStack_50 = *(int32_t *)(param_3 + 0x120);
    uStack_4c = *(int32_t *)(param_3 + 0x124);
    uStack_48 = *(int32_t *)(param_3 + 0x128);
    uStack_44 = *(int32_t *)(param_3 + 300);
    plStack_98 = (longlong *)0x0;
    lStack_90 = 0;
    uVar6 = 0;
    uStack_88 = 0;
    uStack_80 = 3;
    lStackX_10 = param_2;
    FUN_1800e8140(&plStack_98,*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3);
    lVar2 = lStackX_10;
    lVar4 = *(longlong *)(param_1 + 8);
    uVar7 = uVar6;
    if (*(longlong *)(param_1 + 0x10) - lVar4 >> 3 != 0) {
      do {
        lVar4 = *(longlong *)(uVar7 + lVar4);
        lStackX_8 = lVar4;
        if ((*(uint *)(lVar4 + 4) >> 0x18 & 1) == 0) {
          if ((*(uint *)(lVar4 + 4) >> 0x15 & 1) != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))
                      (*(longlong **)(param_1 + 0x68),&uStack_50,1);
            lStackX_8 = lVar2;
            lStackX_20 = lVar4;
                    // WARNING: Subroutine does not return
            memcpy(lVar4 + 0x1d0,*(longlong *)(param_1 + 0x68) + 0x1f0,0x1a00);
          }
          FUN_18005ea90(&plStack_98,&lStackX_8);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        lVar4 = *(longlong *)(param_1 + 8);
        param_2 = lStackX_10;
        uVar7 = uVar7 + 8;
      } while ((ulonglong)(longlong)(int)uVar5 <
               (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar4 >> 3));
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))
              (*(longlong **)(param_1 + 0x68),&uStack_50,0);
    iVar3 = (int)(lStack_90 - (longlong)plStack_98 >> 3);
    lStackX_8 = CONCAT44(lStackX_8._4_4_,iVar3);
    lStackX_20 = param_2;
    if (0 < iVar3) {
                    // WARNING: Subroutine does not return
      memcpy(*plStack_98 + 0x1d0,*(longlong *)(param_1 + 0x68) + 0x1f0,0x1a00);
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x18);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x14);
    ppuStack_58 = apuStack_78;
    pcStack_68 = FUN_1803d9750;
    puStack_60 = &unknown_var_7360_ptr;
    apuStack_78[0] = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,system_allocation_flags);
    uStack_b8 = (int32_t)param_1;
    uStack_b4 = (int32_t)((ulonglong)param_1 >> 0x20);
    *apuStack_78[0] = uStack_b8;
    apuStack_78[0][1] = uStack_b4;
    *(longlong **)(apuStack_78[0] + 2) = &lStackX_8;
    *(longlong ***)(apuStack_78[0] + 4) = &plStack_98;
    *(longlong **)(apuStack_78[0] + 6) = &lStackX_20;
    FUN_18015b810(uStack_b8,0,iVar3 * iVar1,1,0xfffffffffffffffe,apuStack_78);
    if (plStack_98 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d7f00(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4,
void FUN_1803d7f00(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4,
                  uint64_t param_5)

{
  int iVar1;
  void **ppuVar2;
  void *puVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int8_t *puVar7;
  longlong *plVar8;
  longlong lVar9;
  uint64_t uVar10;
  ulonglong uVar11;
  int8_t auStack_138 [32];
  uint64_t uStack_118;
  char cStack_110;
  uint64_t uStack_108;
  int8_t uStack_f8;
  char cStack_f7;
  void **ppuStack_f0;
  uint64_t uStack_e8;
  void *puStack_e0;
  uint64_t uStack_d8;
  int32_t uStack_c8;
  int8_t *puStack_c0;
  uint64_t uStack_b8;
  longlong lStack_a8;
  void *puStack_a0;
  uint uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  void **ppuStack_88;
  void *puStack_80;
  longlong lStack_78;
  uint uStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  uint64_t uStack_50;
  ulonglong uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_138;
  lVar9 = *(longlong *)(param_1 + 0x68);
  *(int32_t *)(param_2 + 0x11ce4) = *(int32_t *)(lVar9 + 0x154);
  *(int32_t *)(param_2 + 0x11ce8) = *(int32_t *)(lVar9 + 0x158);
  cVar4 = func_0x0001800e2bf0(system_parameter_buffer);
  cStack_f7 = cVar4;
  uStack_e8 = FUN_1800daf60();
  uStack_108 = *(uint64_t *)(*(longlong *)(param_1 + 0x68) + 0x70);
  uStack_118 = param_5;
  cStack_110 = cVar4;
  cVar5 = FUN_1802e05a0(uStack_e8,param_4,param_2,param_3);
  if (cVar5 != '\0') {
    if (*(char *)(system_parameter_buffer + 0x1505) != '\0') {
      puVar7 = (int8_t *)FUN_1800daf60();
      uStack_108 = *(uint64_t *)(*(longlong *)(param_1 + 0x68) + 0x70);
      uStack_118 = param_5;
      cStack_110 = cVar4;
      puStack_c0 = puVar7;
      cVar4 = FUN_1802e05a0(puVar7,param_4,param_2,param_3);
      if (cVar4 == '\0') goto LAB_1803d8288;
      *(int16_t *)(puVar7 + 0x50) = 1;
      *puVar7 = 1;
      uStack_d8._0_6_ = CONCAT24(9,(int32_t)uStack_d8);
      uVar6 = FUN_1802e1320(puVar7,param_2,param_5);
      puStack_e0 = (void *)FUN_1802e11c0(puVar7,param_2,param_5,param_4);
      lVar9 = system_parameter_buffer;
      uStack_f8 = 0;
      plVar8 = (longlong *)FUN_1800c0570(system_system_data_memory,&ppuStack_f0);
      iVar1 = *(int *)(lVar9 + 0x13f8);
      lStack_a8 = *(longlong *)(*(longlong *)(*plVar8 + 0x1e0) + 0x1678 + (longlong)iVar1 * 8);
      if (lStack_a8 == 0) {
        if (iVar1 - 4U < 2) {
          lStack_a8 = *(longlong *)(lVar9 + 0x1400);
        }
        else {
          lStack_a8 = 0;
        }
      }
      if (ppuStack_f0 != (void **)0x0) {
        (**(code **)(*ppuStack_f0 + 0x38))();
      }
      uStack_98 = uVar6 & *(uint *)(lStack_a8 + 0x1610);
      uStack_d8 = CONCAT44(uStack_d8._4_4_,uStack_98);
      ppuStack_88 = (void **)0x0;
      ppuStack_f0 = &puStack_80;
      puStack_80 = &system_data_buffer_ptr;
      uStack_68 = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_50 = 0;
      puStack_a0 = puStack_e0;
      uStack_94 = uStack_d8._4_4_;
      uStack_90 = 2;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      lVar9 = *(longlong *)(param_4 + 0x168);
      uVar6 = *(uint *)(lVar9 + 0x10);
      uVar11 = (ulonglong)uVar6;
      if (*(longlong *)(lVar9 + 8) != 0) {
        FUN_1806277c0(&puStack_80,uVar11);
      }
      if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lStack_78,*(uint64_t *)(lVar9 + 8),uVar11);
      }
      if (lStack_78 != 0) {
        *(int8_t *)(uVar11 + lStack_78) = 0;
      }
      uStack_68 = CONCAT44(*(int32_t *)(lVar9 + 0x1c),(int32_t)uStack_68);
      uStack_70 = uVar6;
      lVar9 = FUN_1803d0880(param_4,&puStack_e0,*(uint64_t *)(param_4 + 0x170));
      if (0 < *(int *)(lVar9 + 0x10)) {
        FUN_1806277c0(&puStack_80,uStack_70 + *(int *)(lVar9 + 0x10));
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)uStack_70 + lStack_78,*(uint64_t *)(lVar9 + 8),
               (longlong)(*(int *)(lVar9 + 0x10) + 1));
      }
      puStack_e0 = &system_data_buffer_ptr;
      if (uStack_d8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_d8 = 0;
      uStack_c8 = 0;
      puStack_e0 = &system_state_ptr;
      ppuVar2 = *(void ***)(*(longlong *)(param_1 + 0x68) + 0x70);
      if (ppuVar2 != (void **)0x0) {
        ppuStack_f0 = ppuVar2;
        (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
      }
      ppuStack_f0 = ppuStack_88;
      if (ppuStack_88 != (void **)0x0) {
        puVar3 = *ppuStack_88;
        ppuStack_88 = ppuVar2;
        (**(code **)(puVar3 + 0x38))();
        ppuVar2 = ppuStack_88;
      }
      ppuStack_88 = ppuVar2;
      uStack_118 = CONCAT44(uStack_118._4_4_,*(int32_t *)(param_4 + 0x628));
      uVar10 = FUN_1803d1940(param_2,&lStack_a8);
      *(uint64_t *)(puVar7 + 0x58) = uVar10;
      FUN_1803d8c10(param_2 + 0x3010,&puStack_c0);
      FUN_18009e960(&lStack_a8);
      cVar4 = cStack_f7;
    }
    if (cVar4 == '\0') {
      param_2 = param_2 + 0x2ee8;
    }
    else {
      FUN_1803d8c10(param_2 + 0x2dc0,&uStack_e8);
      param_2 = param_2 + 0x2c98;
    }
    FUN_1803d8c10(param_2,&uStack_e8);
  }
LAB_1803d8288:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d82b0(longlong param_1,int param_2,int param_3,uint64_t param_4)
void FUN_1803d82b0(longlong param_1,int param_2,int param_3,uint64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong *plVar20;
  char cVar21;
  longlong *plVar22;
  longlong lVar23;
  int8_t auStack_1b8 [32];
  int aiStack_198 [2];
  uint64_t uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  int32_t uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t uStack_14c;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  uint64_t uStack_98;
  ulonglong uStack_88;
  
  uStack_88 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1b8;
  lVar8 = *(longlong *)(param_1 + 0x68);
  uStack_190 = param_4;
  if (lVar8 != 0) {
    plVar9 = *(longlong **)(lVar8 + 0x40);
    lVar23 = *plVar9;
    plVar22 = plVar9;
    if (lVar23 == 0) {
      lVar23 = plVar9[1];
      plVar20 = plVar9;
      while (plVar22 = plVar20 + 1, lVar23 == 0) {
        lVar23 = plVar20[2];
        plVar20 = plVar22;
      }
    }
    lVar8 = plVar9[*(longlong *)(lVar8 + 0x48)];
    while (lVar23 != lVar8) {
      lVar10 = *(longlong *)(lVar23 + 8);
      if (lVar10 != 0) {
        fVar11 = *(float *)(lVar10 + 0x90);
        fVar12 = *(float *)(lVar10 + 0x94);
        fVar13 = *(float *)(lVar10 + 0x98);
        uStack_98 = 0;
        fVar14 = *(float *)(lVar10 + 0x80);
        fVar15 = *(float *)(lVar10 + 0x84);
        fVar16 = *(float *)(lVar10 + 0x88);
        fVar17 = *(float *)(lVar10 + 0xa0);
        fVar18 = *(float *)(lVar10 + 0xa4);
        fVar19 = *(float *)(lVar10 + 0xa8);
        fVar1 = *(float *)(lVar10 + 0xc0);
        fVar2 = *(float *)(lVar10 + 200);
        fVar3 = *(float *)(lVar10 + 0xd4);
        fVar4 = *(float *)(lVar10 + 0xe4);
        fVar5 = *(float *)(lVar10 + 0xc4);
        fVar6 = *(float *)(lVar10 + 0xf4);
        fVar7 = *(float *)(lVar10 + 0xd0);
        fStack_188 = fVar5 * fVar11 + fVar1 * fVar14 + fVar2 * fVar17;
        fStack_184 = fVar5 * fVar12 + fVar1 * fVar15 + fVar2 * fVar18;
        fStack_180 = fVar5 * fVar13 + fVar1 * fVar16 + fVar2 * fVar19;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        fVar1 = *(float *)(lVar10 + 0xd8);
        fVar2 = *(float *)(lVar10 + 0xe0);
        fStack_178 = fVar3 * fVar11 + fVar7 * fVar14 + fVar1 * fVar17;
        fStack_174 = fVar3 * fVar12 + fVar7 * fVar15 + fVar1 * fVar18;
        fStack_170 = fVar3 * fVar13 + fVar7 * fVar16 + fVar1 * fVar19;
        fVar1 = *(float *)(lVar10 + 0xe8);
        uStack_17c = 0;
        fVar3 = *(float *)(lVar10 + 0xf0);
        fStack_168 = fVar4 * fVar11 + fVar2 * fVar14 + fVar1 * fVar17;
        fStack_164 = fVar4 * fVar12 + fVar2 * fVar15 + fVar1 * fVar18;
        fStack_160 = fVar4 * fVar13 + fVar2 * fVar16 + fVar1 * fVar19;
        fVar1 = *(float *)(lVar10 + 0xf8);
        uStack_16c = 0;
        uStack_15c = 0;
        uStack_108 = 0;
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        fStack_158 = fVar6 * fVar11 + fVar3 * fVar14 + fVar1 * fVar17 + *(float *)(lVar10 + 0xb0);
        fStack_154 = fVar6 * fVar12 + fVar3 * fVar15 + fVar1 * fVar18 + *(float *)(lVar10 + 0xb4);
        fStack_150 = fVar6 * fVar13 + fVar3 * fVar16 + fVar1 * fVar19 + *(float *)(lVar10 + 0xb8);
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_13c = 0x7f7fffff;
        uStack_138 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        uStack_12c = 0x7f7fffff;
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_120 = 0;
        uStack_11c = 0x7f7fffff;
        uStack_14c = 0x3f800000;
        uStack_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        FUN_18063ad30(&uStack_148,0,&fStack_188,param_4);
        cVar21 = FUN_18063c5e0(param_4,&uStack_148);
        param_4 = uStack_190;
        if (cVar21 != '\0') {
          aiStack_198[0] = param_3 + param_2 * 6;
          FUN_1800571e0(((longlong)*(int *)(lVar10 + 0x18) * 0x10 +
                        (longlong)*(int *)(lVar10 + 0x1c)) * 0x20 + 0x70 + param_1,aiStack_198);
          param_4 = uStack_190;
        }
      }
      lVar23 = *(longlong *)(lVar23 + 0x10);
      while (lVar23 == 0) {
        plVar9 = plVar22 + 1;
        plVar22 = plVar22 + 1;
        lVar23 = *plVar9;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_1b8);
}






