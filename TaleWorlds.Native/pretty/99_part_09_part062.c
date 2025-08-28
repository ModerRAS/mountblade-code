#include "TaleWorlds.Native.Split.h"

// 99_part_09_part062.c - 15 个函数

// 函数: void FUN_1805df1f8(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1805df1f8(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint64_t *puVar8;
  float *pfVar9;
  uint64_t *unaff_RBP;
  int iVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  longlong in_R10;
  longlong lVar12;
  float *in_R11;
  longlong unaff_R12;
  longlong lVar13;
  bool bVar14;
  float extraout_XMM0_Da;
  int32_t uVar15;
  float extraout_XMM0_Da_00;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float unaff_XMM6_Da;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  longlong in_stack_00000078;
  
  iVar1 = *(int *)(param_4 + 0x5f8);
  unaff_RBP[-7] = unaff_RDI;
  if (iVar1 == 0) {
    FUN_1805e0720();
    param_1 = *(float *)(unaff_R12 + 0x11a0);
    param_4 = unaff_RBP[-0xe];
    if ((param_1 == 0.0) &&
       (((lVar7 = *(longlong *)(param_4 + 0x20), *(float *)(lVar7 + 0x24) != 0.0 ||
         (*(float *)(lVar7 + 0x28) != 0.0)) || (*(float *)(lVar7 + 0x2c) != 0.0)))) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(int32_t *)(lVar7 + 0x34));
    }
    if (param_1 == unaff_XMM6_Da) {
      *(uint64_t *)(unaff_R12 + 0xd8) = 0xffffffffffffffff;
    }
    in_R11 = (float *)unaff_RBP[-10];
    in_R10 = unaff_RBP[-0xf];
  }
  if (*(char *)(unaff_R12 + 0x1147) == '\0') {
    if (((*(int *)(param_4 + 0x5f8) == 0) &&
        ((*(byte *)(*(longlong *)(in_R10 + 0x20) + 0x40) & 1) != 0)) &&
       (cVar5 = func_0x000180522f60(in_R10), param_1 = extraout_XMM0_Da, cVar5 == '\0')) {
      uVar15 = FUN_1805e6940(extraout_XMM0_Da,unaff_RBP + 10,&DAT_1809ff0c8);
      param_1 = (float)FUN_1805e5240(uVar15,unaff_RBP + 0xb);
      goto LAB_1805df643;
    }
  }
  else {
    iVar10 = *(int *)(unaff_R12 + 0x1140);
    lVar7 = unaff_R12 + 0x118;
    uVar11 = (ulonglong)*(byte *)(unaff_R12 + 0x113c);
    while( true ) {
      if ((char)uVar11 == '\0') {
        iVar6 = (int)(*(longlong *)(unaff_R12 + 0x1120) - *(longlong *)(unaff_R12 + 0x1118) >> 5);
      }
      else {
        iVar6 = *(int *)(unaff_R12 + 0x1138);
      }
      if (iVar6 <= iVar10) goto LAB_1805df623;
      lVar12 = lVar7;
      if ((char)uVar11 == '\0') {
        lVar12 = *(longlong *)(unaff_R12 + 0x1118);
      }
      lVar12 = *(longlong *)(lVar12 + 0x10 + (longlong)iVar10 * 0x20);
      if (((lVar12 != 0) && ((*(byte *)(lVar12 + 0x139) & 4) != 0)) &&
         (cVar5 = func_0x00018038b3c0(lVar12), param_1 = extraout_XMM0_Da_00, cVar5 != '\0')) break;
      iVar10 = iVar10 + 1;
    }
    fVar22 = in_R11[1] - *(float *)(lVar12 + 0xec);
    fVar19 = *in_R11 - *(float *)(lVar12 + 0xe8);
    bVar14 = *(char *)(*(longlong *)(lVar12 + 0x60) + 0x20) != '\x02';
    fVar21 = in_R11[2] - *(float *)(lVar12 + 0xf0);
    lVar7 = 0x60;
    if (bVar14) {
      lVar7 = 0x68;
    }
    pfVar4 = (float *)**(uint64_t **)(lVar7 + lVar12);
    pfVar9 = (float *)(*(uint64_t **)(lVar7 + lVar12))[1];
    lVar7 = 0x70;
    if (bVar14) {
      lVar7 = 0x78;
    }
    pfVar2 = (float *)**(uint64_t **)(lVar7 + lVar12);
    pfVar3 = (float *)(*(uint64_t **)(lVar7 + lVar12))[1];
    fVar17 = (pfVar2[1] + pfVar3[1]) * 0.5 - (pfVar4[1] + pfVar9[1]) * 0.5;
    fVar16 = (*pfVar3 + *pfVar2) * 0.5 - (*pfVar9 + *pfVar4) * 0.5;
    param_1 = fVar22 * fVar22;
    if (fVar19 * fVar19 + param_1 + fVar21 * fVar21 < (fVar16 * fVar16 + fVar17 * fVar17) * 9.0) {
      fStack0000000000000074 = (float)((ulonglong)*(uint64_t *)(lVar12 + 0xd0) >> 0x20);
      fStack0000000000000070 = (float)*(uint64_t *)(lVar12 + 0xd0);
      *(float *)(unaff_RBP + -9) = fVar19;
      *(float *)((longlong)unaff_RBP + -0x44) = fVar22;
      fVar21 = fStack0000000000000074 * fStack0000000000000074 +
               fStack0000000000000070 * fStack0000000000000070;
      fStack000000000000006c = (float)((ulonglong)unaff_RBP[-9] >> 0x20);
      fStack0000000000000068 = (float)unaff_RBP[-9];
      auVar20 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
      fVar22 = auVar20._0_4_;
      fVar19 = fVar22 * 0.5 * (3.0 - fVar21 * fVar22 * fVar22);
      fVar21 = fStack000000000000006c * fStack000000000000006c +
               fStack0000000000000068 * fStack0000000000000068;
      auVar20 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
      fVar22 = auVar20._0_4_;
      param_1 = fVar22 * fVar22;
      fVar21 = fVar22 * 0.5 * (3.0 - fVar21 * param_1);
      if (0.5 < fStack000000000000006c * fVar21 * fStack0000000000000074 * fVar19 +
                fStack0000000000000068 * fVar21 * fStack0000000000000070 * fVar19)
      goto LAB_1805dfa06;
    }
LAB_1805df623:
    if (iVar1 != 0) goto LAB_1805dfa06;
    param_1 = (float)FUN_1805e5240(param_1,unaff_RBP + 0xc);
    unaff_RDI = unaff_RBP[-7];
LAB_1805df643:
    *(int32_t *)(unaff_RBP + -0x10) = *(int32_t *)(unaff_RBP + 0x32);
  }
  if ((((iVar1 == 0) &&
       (FUN_1805e7010(param_1,unaff_RBP + 0xd,&stack0x00000078), in_stack_00000078 != 0)) &&
      (cVar5 = func_0x000180522f60(unaff_RBP[-0xe]), cVar5 == '\0')) &&
     (*(char *)(unaff_R12 + 0x1147) == '\0')) {
    lVar7 = *(longlong *)(unaff_RDI + 0x18);
    lVar13 = lVar7 + 0x2a68;
    lVar12 = *(longlong *)(unaff_RBP[-0xf] + 0x20);
    fVar21 = *(float *)(lVar12 + 0x28);
    fVar22 = *(float *)(lVar12 + 0x2c);
    fVar19 = *(float *)(unaff_R12 + 0x30);
    fVar16 = *(float *)(unaff_R12 + 0x34);
    *(float *)(unaff_RBP + -3) = *(float *)(lVar12 + 0x24) * 0.2 + *(float *)(unaff_R12 + 0x2c);
    *(int32_t *)((longlong)unaff_RBP + -0xc) = 0x7f7fffff;
    *(float *)((longlong)unaff_RBP + -0x14) = fVar21 * 0.2 + fVar19;
    *(float *)(unaff_RBP + -2) = fVar22 * 0.2 + fVar16;
    uVar15 = FUN_1803965f0(lVar13);
    *(int32_t *)(unaff_RBP + 0x35) = uVar15;
    FUN_18038de80(lVar13,uVar15);
    lVar12 = (longlong)*(int *)(unaff_RBP + 0x35);
    _fStack0000000000000060 = 0;
    *(int32_t *)(unaff_RBP + 0x34) = 0x7149f2ca;
    unaff_RBP[-0xb] = 0;
    FUN_180395c50(lVar13,unaff_RBP + -3,in_stack_00000078,*(int *)(unaff_RBP + 0x35),
                  unaff_RBP + 0x34);
    puVar8 = (uint64_t *)unaff_RBP[-0xb];
    if (puVar8 != (uint64_t *)0x0) {
      puVar8 = (uint64_t *)FUN_18038a230(unaff_RBP + 0xe,*puVar8,puVar8[1],unaff_RBP + -3);
      _fStack0000000000000060 = *puVar8;
    }
    *(int32_t *)(lVar7 + 0x2fe0 + lVar12 * 4) = 0;
    if (((fStack0000000000000060 != 0.0) || (fStack0000000000000064 != 0.0)) &&
       ((fStack0000000000000060 != *(float *)(unaff_R12 + 0x2c) ||
        (fStack0000000000000064 != *(float *)(unaff_R12 + 0x30))))) {
      pfVar4 = (float *)unaff_RBP[-10];
      lVar7 = *(longlong *)(unaff_RDI + 0x18);
      fVar21 = pfVar4[1];
      *(float *)(unaff_RBP + -0xd) = fStack0000000000000060 - *pfVar4;
      *(float *)((longlong)unaff_RBP + -100) = fStack0000000000000064 - fVar21;
      unaff_RBP[-0xc] = unaff_RBP[-0xd];
      fVar21 = *(float *)(unaff_RBP + -0xc);
      fVar22 = *(float *)((longlong)unaff_RBP + -0x5c);
      fVar17 = fVar22 * fVar22 + fVar21 * fVar21;
      auVar20 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      fVar18 = auVar20._0_4_;
      fVar19 = *(float *)(*(longlong *)(unaff_RBP[-0xf] + 0x20) + 0x90) * 0.5;
      fVar16 = *(float *)(unaff_R12 + 0x90) * 1.212;
      if (fVar19 <= fVar16) {
        fVar19 = fVar16;
      }
      fVar16 = fVar18 * 0.5 * (3.0 - fVar17 * fVar18 * fVar18);
      *(float *)((longlong)unaff_RBP + 0x1ac) = fVar16 * fVar22 * fVar19;
      *(float *)(unaff_RBP + 0x35) = fVar16 * fVar21 * fVar19;
      cVar5 = FUN_1803944c0(lVar7 + 0x2a68,
                            *(uint64_t *)(**(longlong **)(unaff_R12 + 0x20) + 0x9d8),0,pfVar4,
                            unaff_RBP + 0x35);
      if (cVar5 == '\0') {
        if (unaff_RBP[-4] != 0) {
          pfVar9 = (float *)FUN_18038bc40(unaff_RBP[-4],unaff_RBP + 0x12,pfVar4,unaff_RBP + 0x35);
          fVar21 = *pfVar4;
          fVar22 = pfVar4[1];
          fVar19 = *(float *)(unaff_R12 + 0x90);
          fVar16 = *pfVar9;
          *(float *)((longlong)unaff_RBP + 0x194) = pfVar9[1] - fVar22;
          *(float *)(unaff_RBP + 0x32) = fVar16 - fVar21;
          unaff_RBP[0x35] = unaff_RBP[0x32];
          fVar16 = *(float *)((longlong)unaff_RBP + 0x1ac);
          fVar17 = *(float *)(unaff_RBP + 0x35);
          if (fVar19 * fVar19 * 1.4689441 < fVar16 * fVar16 + fVar17 * fVar17) {
            *(int8_t *)(unaff_RBP + 0x33) = 1;
            *(float *)(unaff_RBP + 0x32) = fVar21 + fVar17;
            *(float *)((longlong)unaff_RBP + 0x194) = fVar22 + fVar16;
            *(uint64_t *)(unaff_R12 + 0x3c) = unaff_RBP[0x32];
            *(uint *)(unaff_R12 + 0x28) = *(uint *)(unaff_R12 + 0x28) & 0xfffffd0f;
          }
        }
      }
      else {
        fVar21 = *pfVar4;
        fVar22 = pfVar4[1];
        *(int8_t *)(unaff_RBP + 0x33) = 1;
        *(float *)(unaff_RBP + 0x32) = *(float *)(unaff_RBP + 0x35) + fVar21;
        *(float *)((longlong)unaff_RBP + 0x194) = *(float *)((longlong)unaff_RBP + 0x1ac) + fVar22;
        *(uint64_t *)(unaff_R12 + 0x3c) = unaff_RBP[0x32];
        *(uint *)(unaff_R12 + 0x28) = *(uint *)(unaff_R12 + 0x28) & 0xfffffd0f;
      }
    }
  }
LAB_1805dfa06:
  *(int8_t *)(unaff_RBP + 0x32) = 0;
  unaff_RBP[3] = 0;
  unaff_RBP[4] = 0;
  unaff_RBP[7] = unaff_RBP[3];
  unaff_RBP[5] = 0;
  unaff_RBP[6] = 0;
  *unaff_RBP = 0;
  unaff_RBP[1] = 0;
  lVar7 = *(longlong *)(unaff_RBP[-0xf] + 0x20);
  unaff_RBP[2] = 0;
  *(int32_t *)(unaff_RBP + 8) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(lVar7 + 0x34));
}



// WARNING: Removing unreachable block (ram,0x0001805e05f6)




// 函数: void FUN_1805dff34(void)
void FUN_1805dff34(void)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint64_t *puVar4;
  int iVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  int iVar8;
  int iVar9;
  uint uVar10;
  char in_R10B;
  longlong unaff_R12;
  int unaff_R13D;
  uint64_t unaff_R15;
  int32_t uVar11;
  float fVar12;
  ulonglong in_stack_00000068;
  ulonglong in_stack_00000070;
  longlong lVar5;
  
  puVar1 = (uint *)(unaff_R12 + 0x28);
  uVar7 = 0;
  *(int32_t *)(unaff_RBP + 0x1a0) = 0;
  uVar11 = func_0x000180507a40(puVar1);
  if (*(char *)(unaff_R12 + 0x1144) == '\0') {
    puVar4 = (uint64_t *)(unaff_R12 + 0x60);
  }
  else {
    lVar5 = unaff_R12 + 0x118;
    if (*(char *)(unaff_R12 + 0x113c) == (char)uVar7) {
      lVar5 = *(longlong *)(unaff_R12 + 0x1118);
    }
    puVar4 = (uint64_t *)(lVar5 + (longlong)*(int *)(unaff_R12 + 0x1140) * 0x20);
  }
  *(uint64_t *)(unaff_RBP + -0x38) = *puVar4;
  iVar9 = (int)uVar7;
  do {
    iVar6 = (int)uVar7;
    iVar8 = *(int *)(unaff_RBP + -0x58);
    if ((in_stack_00000070 & in_stack_00000068) != in_stack_00000068) {
      do {
        iVar6 = -iVar8;
        bVar3 = 0 < iVar8;
        iVar8 = iVar6 + 1;
        if (bVar3) {
          iVar8 = iVar6;
        }
        if (0x3e < iVar8 + 0x1fU) {
          in_R10B = '\x01';
          *(int8_t *)(unaff_RBP + 400) = 1;
          break;
        }
        unaff_R13D = iVar8 + *(int *)(unaff_RBP + -0x48);
        if (unaff_R13D < 0x40) {
          if (unaff_R13D < 0) {
            unaff_R13D = unaff_R13D + 0x40;
          }
        }
        else {
          unaff_R13D = unaff_R13D + -0x40;
        }
        if (unaff_R13D < 1) {
          uVar7 = 1UL >> (-(char)unaff_R13D & 0x3fU) | 1L << ((longlong)(unaff_R13D + 0x40) & 0x3fU)
          ;
        }
        else {
          uVar7 = 1UL >> (-(char)unaff_R13D + 0x40U & 0x3f) | 1L << ((longlong)unaff_R13D & 0x3fU);
        }
      } while ((in_stack_00000070 & uVar7) != uVar7);
      iVar6 = *(int *)(unaff_RBP + 0x1a0);
      *(int *)(unaff_RBP + -0x58) = iVar8;
    }
    in_stack_00000068 = 0xffffffffffffffff;
    if (in_R10B != '\0') {
LAB_1805e0612:
      cVar2 = *(char *)(unaff_RBP + 0x198);
      if (cVar2 == '\0') {
        puVar4 = (uint64_t *)FUN_1805e0920(uVar11,unaff_RBP + 0x88,unaff_R12 + 0x1178);
        *(uint64_t *)(unaff_R12 + 0x3c) = *puVar4;
        *puVar1 = *puVar1 & 0xfffffd0f;
      }
      lVar5 = *(longlong *)(unaff_RBP + -0x70);
      iVar9 = *(int *)(unaff_RBP + -0x80);
      if (cVar2 == '\0') {
        fVar12 = *(float *)(unaff_R12 + 0x11a4) + 0.1;
        if (1.0 <= fVar12) {
          fVar12 = 1.0;
        }
      }
      else {
        fVar12 = *(float *)(unaff_R12 + 0x11a4) - 0.05;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
      }
      *(float *)(unaff_R12 + 0x11a4) = fVar12;
      if (*(int *)(unaff_R12 + 0x98) != iVar9) {
        *(int *)(unaff_R12 + 0x98) = iVar9;
        lVar5 = *(longlong *)(lVar5 + 0x738);
        if (lVar5 != 0) {
          *(int *)(lVar5 + 0x19c) = iVar9;
        }
      }
      return;
    }
    if (unaff_R13D != *(int *)(unaff_RBP + -0x48)) {
      *(uint64_t *)(unaff_RBP + -0x60) = unaff_R15;
                    // WARNING: Subroutine does not return
      FUN_1808fd400((float)-unaff_R13D * 0.09817477);
    }
    uVar10 = iVar6 + 1;
    uVar7 = (ulonglong)uVar10;
    *(uint *)(unaff_RBP + 0x1a0) = uVar10;
    if ((0xf < (int)uVar10) || (2 < iVar9)) goto LAB_1805e0612;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001805e06b5)
// WARNING: Removing unreachable block (ram,0x0001805e06bd)
// WARNING: Removing unreachable block (ram,0x0001805e06c1)




// 函数: void FUN_1805e05f6(void)
void FUN_1805e05f6(void)

{
  int iVar1;
  longlong lVar2;
  uint *unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RDI;
  longlong unaff_R12;
  float fVar3;
  
  *(uint64_t *)(unaff_RBX + 5) = unaff_RDI;
  *unaff_RBX = *unaff_RBX & 0xfffffd0f;
  lVar2 = *(longlong *)(unaff_RBP + -0x70);
  iVar1 = *(int *)(unaff_RBP + -0x80);
  fVar3 = *(float *)(unaff_R12 + 0x11a4) - 0.05;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(unaff_R12 + 0x11a4) = fVar3;
  if (*(int *)(unaff_R12 + 0x98) != iVar1) {
    *(int *)(unaff_R12 + 0x98) = iVar1;
    lVar2 = *(longlong *)(lVar2 + 0x738);
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x19c) = iVar1;
    }
  }
  return;
}






// 函数: void FUN_1805e06b5(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1805e06b5(float param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  int unaff_EDI;
  longlong unaff_R12;
  float fVar1;
  float unaff_XMM7_Da;
  
  fVar1 = param_1 + 0.1;
  if (unaff_XMM7_Da <= param_1 + 0.1) {
    fVar1 = unaff_XMM7_Da;
  }
  *(float *)(unaff_R12 + 0x11a4) = fVar1;
  if (*(int *)(unaff_R12 + 0x98) != unaff_EDI) {
    *(int *)(unaff_R12 + 0x98) = unaff_EDI;
    if (*(longlong *)(param_4 + 0x738) != 0) {
      *(int *)(*(longlong *)(param_4 + 0x738) + 0x19c) = unaff_EDI;
    }
  }
  return;
}






// 函数: void FUN_1805e06e5(void)
void FUN_1805e06e5(void)

{
  int unaff_EDI;
  longlong in_R9;
  longlong unaff_R12;
  
  if (*(int *)(unaff_R12 + 0x98) != unaff_EDI) {
    *(int *)(unaff_R12 + 0x98) = unaff_EDI;
    if (*(longlong *)(in_R9 + 0x738) != 0) {
      *(int *)(*(longlong *)(in_R9 + 0x738) + 0x19c) = unaff_EDI;
    }
  }
  return;
}






// 函数: void FUN_1805e06f7(void)
void FUN_1805e06f7(void)

{
  int32_t unaff_EDI;
  longlong in_R9;
  longlong unaff_R12;
  
  *(int32_t *)(unaff_R12 + 0x98) = unaff_EDI;
  if (*(longlong *)(in_R9 + 0x738) != 0) {
    *(int32_t *)(*(longlong *)(in_R9 + 0x738) + 0x19c) = unaff_EDI;
  }
  return;
}






// 函数: void FUN_1805e0720(longlong param_1)
void FUN_1805e0720(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  
  lVar4 = **(longlong **)(param_1 + 0x20);
  lVar6 = lVar4;
  if (((*(uint *)(lVar4 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar4 + 0x564))) {
    lVar3 = (longlong)*(int *)(lVar4 + 0x564) * 0xa60;
    if (*(int *)(lVar3 + 0x3608 + *(longlong *)(lVar4 + 0x8d8)) == 1) {
      lVar6 = *(longlong *)(lVar4 + 0x8d8) + 0x30a0 + lVar3;
    }
  }
  fVar9 = *(float *)(*(longlong *)(lVar6 + 0x20) + 0x238);
  lVar3 = *(longlong *)(lVar4 + 0x20);
  if (((fVar9 * fVar9 <
        (*(float *)(lVar3 + 0x24) * *(float *)(lVar3 + 0x24) +
         *(float *)(lVar3 + 0x28) * *(float *)(lVar3 + 0x28) +
        *(float *)(lVar3 + 0x2c) * *(float *)(lVar3 + 0x2c)) * 0.48999998) &&
      (cVar1 = func_0x000180522f60(lVar4), cVar1 == '\0')) && (*(int *)(lVar4 + 0x5f8) == 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x590);
    uVar8 = 0;
    uVar5 = uVar8;
    if (*(longlong *)(lVar4 + 0x24a8) != 0) {
      uVar5 = *(ulonglong *)(*(longlong *)(lVar4 + 0x24a8) + 0x1d0);
    }
    if (*(longlong *)(lVar4 + 0x2460) != 0) {
      uVar8 = *(ulonglong *)(*(longlong *)(lVar4 + 0x2460) + 0x1d0);
    }
    uVar7 = uVar8 & 0xffffffffffffff00;
    if ((char)*(ulonglong *)(lVar4 + 0x2470) == '\0') {
      uVar7 = uVar8;
    }
    if ((((uVar7 | *(ulonglong *)(lVar4 + 0x2470) | *(ulonglong *)(lVar4 + 0x24b8) | uVar5) >> 0x18
         & 1) == 0) && (iVar2 = func_0x000180534f70(lVar4,0), iVar2 < 0x22)) {
      lVar4 = param_1 + 0x28;
      fVar9 = (float)func_0x000180507a40();
      if ((*(float *)(lVar4 + 0x68) <= fVar9 && fVar9 != *(float *)(lVar4 + 0x68)) &&
         ((2 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x178c) - 2U &&
          (*(int *)(param_1 + 0x11a8) != 0)))) {
        fVar9 = *(float *)(param_1 + 0x11a0) - 0.1;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        *(float *)(param_1 + 0x11a0) = fVar9;
        return;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(*(longlong *)(lVar6 + 0x20) + 0x34));
}



uint64_t * FUN_1805e0920(longlong param_1,uint64_t *param_2,int32_t *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(param_1 + 0x117c);
  *param_2 = *(uint64_t *)(param_1 + 0x3c);
  if ((cVar1 != '\0') && (-1 < *(int *)((longlong)*(longlong **)(param_1 + 0x20) + 0x14e4))) {
    lVar3 = **(longlong **)(param_1 + 0x20);
    if (((*(uint *)(lVar3 + 0x56c) & 0x2000) != 0) &&
       ((-1 < *(int *)(lVar3 + 0x564) &&
        (lVar2 = (longlong)*(int *)(lVar3 + 0x564) * 0xa60,
        *(int *)(lVar2 + 0x3608 + *(longlong *)(lVar3 + 0x8d8)) == 1)))) {
      lVar3 = *(longlong *)(lVar3 + 0x8d8) + 0x30a0 + lVar2;
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)(*(longlong *)(lVar3 + 0x20) + 0x34));
  }
  *param_3 = 0;
  return param_2;
}






// 函数: void FUN_1805e095f(uint64_t param_1,longlong param_2)
void FUN_1805e095f(uint64_t param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  longlong in_R11;
  uint64_t unaff_R15;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R15;
  uVar1 = *(uint *)(param_2 + 0x56c);
  lVar2 = *(longlong *)(param_2 + 0x8d8);
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM10_Dd;
  if ((((uVar1 & 0x2000) != 0) && (-1 < *(int *)(param_2 + 0x564))) &&
     (lVar3 = (longlong)*(int *)(param_2 + 0x564) * 0xa60, *(int *)(lVar3 + 0x3608 + lVar2) == 1)) {
    param_2 = lVar2 + 0x30a0 + lVar3;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(*(longlong *)(param_2 + 0x20) + 0x34));
}






// 函数: void FUN_1805e0cd6(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void FUN_1805e0cd6(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  float *unaff_R14;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM7_Da;
  uint unaff_XMM9_Da;
  
  if (param_4 < (float)((uint)in_XMM4_Da & unaff_XMM9_Da)) {
    if (in_XMM4_Da < unaff_XMM7_Da) {
      param_4 = -0.1;
    }
    param_3 = in_XMM5_Da + param_4;
  }
  *unaff_R14 = param_3;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_3);
}






// 函数: void FUN_1805e0de9(uint64_t param_1,uint64_t param_2,int32_t *param_3)
void FUN_1805e0de9(uint64_t param_1,uint64_t param_2,int32_t *param_3)

{
  *param_3 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805e0e00(longlong param_1)
void FUN_1805e0e00(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float afStackX_8 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  lVar6 = *plVar1;
  lVar5 = lVar6;
  if (((*(uint *)(lVar6 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar6 + 0x564))) {
    lVar3 = (longlong)*(int *)(lVar6 + 0x564) * 0xa60;
    if (*(int *)(lVar3 + 0x3608 + *(longlong *)(lVar6 + 0x8d8)) == 1) {
      lVar5 = *(longlong *)(lVar6 + 0x8d8) + 0x30a0 + lVar3;
    }
  }
  uVar4 = *(uint *)(lVar5 + 0x56c) & 0x800;
  if (uVar4 == 0) {
    lVar6 = *(longlong *)(lVar5 + 0x20);
    FUN_180599750(lVar6,afStackX_8);
    fVar10 = ABS(*(float *)(lVar6 + 0x20)) * *(float *)(plVar1 + 0x28d) * 0.5 + afStackX_8[0];
  }
  else {
    lVar5 = *(longlong *)(lVar6 + 0x20);
    if (((*(uint *)((longlong)plVar1 + 0x1484) >> 1 & 1) == 0) ||
       ((*(uint *)((longlong)plVar1 + 0x1484) >> 3 & 1) != 0)) {
      fVar8 = *(float *)(lVar5 + 0x90);
      fVar10 = *(float *)(lVar5 + 0x84);
    }
    else {
      fVar10 = *(float *)(lVar5 + 0x84);
      fVar8 = fVar10;
    }
    fVar9 = *(float *)(plVar1 + 0x28d);
    fVar7 = _DAT_180c96390 * *(float *)(lVar6 + 0x3f0);
    fVar12 = (fVar10 * _DAT_180c9638c) / fVar7;
    fVar7 = *(float *)(lVar6 + 0x3f0) - fVar7;
    fVar10 = (1.0 - _DAT_180c9638c) * fVar10 - fVar7 * fVar12;
    fVar11 = 0.5;
    fVar10 = (fVar8 / ((fVar10 + fVar10) / fVar7 + fVar12)) * fVar8 * 0.5;
    cVar2 = func_0x000180522f60();
    if (cVar2 == '\0') {
      fVar10 = fVar10 + fVar9 * fVar8 * fVar11;
    }
    else {
      fVar10 = fVar10 + fVar9 * *(float *)(lVar5 + 0x54) * fVar11;
    }
  }
  fVar8 = (float)func_0x0001805b7780(plVar1);
  if (uVar4 == 0) {
    fVar8 = fVar8 * 2.0;
  }
  if (fVar10 <= fVar8) {
    fVar10 = fVar8;
  }
  *(float *)(param_1 + 0x90) = fVar10;
  *(float *)(param_1 + 0x94) = fVar10 * fVar10;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffdff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805e0e06(longlong param_1)
void FUN_1805e0e06(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_stack_00000040;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  lVar6 = *plVar1;
  lVar5 = lVar6;
  if (((*(uint *)(lVar6 + 0x56c) & 0x2000) != 0) && (-1 < *(int *)(lVar6 + 0x564))) {
    lVar3 = (longlong)*(int *)(lVar6 + 0x564) * 0xa60;
    if (*(int *)(lVar3 + 0x3608 + *(longlong *)(lVar6 + 0x8d8)) == 1) {
      lVar5 = *(longlong *)(lVar6 + 0x8d8) + 0x30a0 + lVar3;
    }
  }
  uVar4 = *(uint *)(lVar5 + 0x56c) & 0x800;
  if (uVar4 == 0) {
    lVar6 = *(longlong *)(lVar5 + 0x20);
    FUN_180599750(lVar6,&stack0x00000040);
    fVar10 = ABS(*(float *)(lVar6 + 0x20)) * *(float *)(plVar1 + 0x28d) * 0.5 + in_stack_00000040;
  }
  else {
    lVar5 = *(longlong *)(lVar6 + 0x20);
    if (((*(uint *)((longlong)plVar1 + 0x1484) >> 1 & 1) == 0) ||
       ((*(uint *)((longlong)plVar1 + 0x1484) >> 3 & 1) != 0)) {
      fVar8 = *(float *)(lVar5 + 0x90);
      fVar10 = *(float *)(lVar5 + 0x84);
    }
    else {
      fVar10 = *(float *)(lVar5 + 0x84);
      fVar8 = fVar10;
    }
    fVar9 = *(float *)(plVar1 + 0x28d);
    fVar7 = _DAT_180c96390 * *(float *)(lVar6 + 0x3f0);
    fVar12 = (fVar10 * _DAT_180c9638c) / fVar7;
    fVar7 = *(float *)(lVar6 + 0x3f0) - fVar7;
    fVar10 = (1.0 - _DAT_180c9638c) * fVar10 - fVar7 * fVar12;
    fVar11 = 0.5;
    fVar10 = (fVar8 / ((fVar10 + fVar10) / fVar7 + fVar12)) * fVar8 * 0.5;
    cVar2 = func_0x000180522f60();
    if (cVar2 == '\0') {
      fVar10 = fVar10 + fVar9 * fVar8 * fVar11;
    }
    else {
      fVar10 = fVar10 + fVar9 * *(float *)(lVar5 + 0x54) * fVar11;
    }
  }
  fVar8 = (float)func_0x0001805b7780(plVar1);
  if (uVar4 == 0) {
    fVar8 = fVar8 * 2.0;
  }
  if (fVar10 <= fVar8) {
    fVar10 = fVar8;
  }
  *(float *)(param_1 + 0x90) = fVar10;
  *(float *)(param_1 + 0x94) = fVar10 * fVar10;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffdff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805e0e79(longlong param_1,ulonglong param_2,uint64_t param_3,longlong param_4)
void FUN_1805e0e79(longlong param_1,ulonglong param_2,uint64_t param_3,longlong param_4)

{
  byte in_AL;
  char cVar1;
  longlong unaff_RBX;
  int unaff_ESI;
  longlong unaff_RDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (((in_AL & 1) == 0) || ((param_2 >> 3 & 1) != 0)) {
    fVar3 = *(float *)(param_4 + 0x90);
    fVar5 = *(float *)(param_4 + 0x84);
  }
  else {
    fVar5 = *(float *)(param_4 + 0x84);
    fVar3 = fVar5;
  }
  fVar4 = *(float *)(unaff_RDI + 0x1468);
  fVar2 = _DAT_180c96390 * *(float *)(param_1 + 0x3f0);
  fVar7 = (fVar5 * _DAT_180c9638c) / fVar2;
  fVar2 = *(float *)(param_1 + 0x3f0) - fVar2;
  fVar5 = (1.0 - _DAT_180c9638c) * fVar5 - fVar2 * fVar7;
  fVar6 = 0.5;
  fVar5 = (fVar3 / ((fVar5 + fVar5) / fVar2 + fVar7)) * fVar3 * 0.5;
  cVar1 = func_0x000180522f60();
  if (cVar1 != '\0') {
    fVar3 = *(float *)(param_4 + 0x54);
  }
  fVar5 = fVar5 + fVar4 * fVar3 * fVar6;
  fVar3 = (float)func_0x0001805b7780();
  if (unaff_ESI == 0) {
    fVar3 = fVar3 * 2.0;
  }
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  *(float *)(unaff_RBX + 0x90) = fVar5;
  *(float *)(unaff_RBX + 0x94) = fVar5 * fVar5;
  *(uint *)(unaff_RBX + 0x28) = *(uint *)(unaff_RBX + 0x28) & 0xfffffdff;
  return;
}






// 函数: void FUN_1805e0f29(uint64_t param_1,float param_2,float param_3)
void FUN_1805e0f29(uint64_t param_1,float param_2,float param_3)

{
  longlong unaff_RBX;
  int unaff_ESI;
  float fVar1;
  float in_XMM4_Da;
  float fVar2;
  float in_XMM5_Da;
  
  fVar2 = in_XMM4_Da + param_2 * in_XMM5_Da * param_3;
  fVar1 = (float)func_0x0001805b7780();
  if (unaff_ESI == 0) {
    fVar1 = fVar1 * 2.0;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  *(float *)(unaff_RBX + 0x90) = fVar2;
  *(float *)(unaff_RBX + 0x94) = fVar2 * fVar2;
  *(uint *)(unaff_RBX + 0x28) = *(uint *)(unaff_RBX + 0x28) & 0xfffffdff;
  return;
}






// 函数: void FUN_1805e0f91(float param_1)
void FUN_1805e0f91(float param_1)

{
  longlong unaff_RBX;
  float in_XMM4_Da;
  
  if (in_XMM4_Da <= param_1 * 2.0) {
    in_XMM4_Da = param_1 * 2.0;
  }
  *(float *)(unaff_RBX + 0x90) = in_XMM4_Da;
  *(float *)(unaff_RBX + 0x94) = in_XMM4_Da * in_XMM4_Da;
  *(uint *)(unaff_RBX + 0x28) = *(uint *)(unaff_RBX + 0x28) & 0xfffffdff;
  return;
}






