#include "TaleWorlds.Native.Split.h"

// 03_rendering_part225.c - 4 个函数

// 函数: void FUN_180394958(uint64_t param_1,uint64_t param_2)
void FUN_180394958(uint64_t param_1,uint64_t param_2)

{
  int32_t *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint64_t *puVar5;
  float *pfVar6;
  float *pfVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  bool bVar20;
  char cVar21;
  int iVar22;
  longlong in_RAX;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong *plVar28;
  uint64_t *unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  uint64_t *puVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  longlong unaff_R13;
  bool bVar33;
  uint64_t *unaff_R14;
  longlong *plVar34;
  float extraout_XMM0_Da;
  float fVar35;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float fVar36;
  float fVar37;
  int8_t auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  char in_stack_00000070;
  int iStack0000000000000074;
  uint in_stack_00000078;
  
  *(int32_t *)(unaff_RBP + -3) = *(int32_t *)(in_RAX + 0x60300);
  unaff_RBP[8] = param_2;
  iVar22 = func_0x00018038b420();
  puVar29 = (uint64_t *)(unaff_R13 + 0x60);
  fVar36 = 1.0;
  plVar34 = (longlong *)(unaff_R13 + 0xb0);
  uVar30 = (ulonglong)iVar22;
  plVar23 = (longlong *)(unaff_R13 + 0x80);
  unaff_RBP[-0xe] = unaff_RDI;
  unaff_RBP[-2] = unaff_RDI;
  uVar32 = unaff_RDI & 0xffffffff;
  unaff_RBP[-0xd] = puVar29;
  unaff_RBP[-0x10] = plVar23;
  unaff_RBP[-0xf] = uVar30;
  iStack0000000000000074 = 1;
  unaff_RBP[-0xb] = plVar34;
  fVar35 = extraout_XMM0_Da;
  iVar22 = 1;
LAB_180394a30:
  while( true ) {
    bVar2 = *(byte *)(unaff_R13 + 0xa8);
    plVar28 = (longlong *)0x0;
    bVar20 = false;
    iVar31 = (int)uVar32;
    if ((int)(uint)bVar2 <= iVar31) break;
    if (unaff_RDI != uVar30) {
      lVar24 = *plVar34;
      if ((lVar24 != 0) || (in_stack_00000070 != '\0')) {
        plVar28 = (longlong *)*puVar29;
      }
      in_stack_00000078 = iVar31 + 1;
      uVar32 = (ulonglong)in_stack_00000078;
      unaff_RDI = unaff_RDI + 1;
      plVar34 = plVar34 + 1;
      unaff_RBP[-0xe] = unaff_RDI;
      puVar29 = puVar29 + 1;
      iStack0000000000000074 = iStack0000000000000074 + 1;
      unaff_RBP[-0xb] = plVar34;
      unaff_RBP[-0x10] = unaff_RBP[-0x10] + 8;
      lVar27 = *(longlong *)(unaff_R13 + 0x80 + (longlong)(iVar22 % (int)(uint)bVar2) * 8);
      unaff_RBP[-0xd] = puVar29;
      iVar22 = iStack0000000000000074;
LAB_180394b77:
      unaff_RBP[-9] = lVar27;
      unaff_RBP[9] = *plVar23;
      if (lVar24 == 0) goto code_r0x000180394b8c;
      goto LAB_180394b9c;
    }
    in_stack_00000078 = iVar31 + 1;
    uVar32 = (ulonglong)in_stack_00000078;
    iStack0000000000000074 = iVar22 + 1;
    unaff_RDI = unaff_RDI + 1;
    plVar34 = plVar34 + 1;
    puVar29 = puVar29 + 1;
    unaff_RBP[-0xe] = unaff_RDI;
    plVar23 = plVar23 + 1;
    unaff_RBP[-0xb] = plVar34;
    unaff_RBP[-0x10] = plVar23;
    unaff_RBP[-0xd] = puVar29;
    iVar22 = iStack0000000000000074;
  }
  if ((ulonglong)(longlong)*(int *)(unaff_RBP + -0xc) <
      (ulonglong)(*(longlong *)(unaff_R13 + 0x100) - *(longlong *)(unaff_R13 + 0xf8) >> 3)) {
    lVar24 = *(longlong *)(*(longlong *)(unaff_R13 + 0xf8) + unaff_RBP[-2]);
    if ((*(byte *)(unaff_R13 + 0x139) & 4) == 0) {
      plVar23 = *(longlong **)(lVar24 + 0x118);
    }
    else {
      plVar23 = *(longlong **)(unaff_R13 + 0x118);
      if (((plVar23 == (longlong *)0x0) || ((*(byte *)(lVar24 + 0x139) & 4) != 0)) &&
         (lVar27 = 0, plVar23 = plVar28, iVar22 = iStack0000000000000074, (ulonglong)bVar2 != 0)) {
        plVar26 = (longlong *)(unaff_R13 + 0x60);
        do {
          plVar23 = (longlong *)*plVar26;
          if (((char)plVar23[4] == '\x02') && ((plVar23[2] == lVar24 || (plVar23[3] == lVar24))))
          break;
          lVar27 = lVar27 + 1;
          plVar26 = plVar26 + 1;
          plVar23 = plVar28;
        } while (lVar27 < (longlong)(ulonglong)bVar2);
      }
    }
    lVar27 = plVar23[1];
    unaff_RBP[-2] = unaff_RBP[-2] + 8;
    *(int *)(unaff_RBP + -0xc) = *(int *)(unaff_RBP + -0xc) + 1;
    bVar20 = true;
    plVar28 = plVar23;
    goto LAB_180394b77;
  }
  goto LAB_1803951d6;
code_r0x000180394b8c:
  plVar23 = (longlong *)unaff_RBP[-0x10];
  uVar30 = unaff_RBP[-0xf];
  if (in_stack_00000070 == '\0') goto LAB_180394a30;
LAB_180394b9c:
  lVar24 = 0;
  do {
    uVar30 = unaff_RBP[-0xf];
    if ((longlong *)unaff_R14[lVar24] == plVar28) goto LAB_180394a28;
    lVar24 = lVar24 + 1;
  } while (lVar24 < 10);
  cVar21 = *(char *)(unaff_RBP + 0x3f);
  if (((!bVar20) && (cVar21 == '\0')) && (in_stack_00000070 == '\0')) {
    plVar23 = (longlong *)unaff_RBP[-0x10];
    if (*(byte *)(plVar28 + 4) < 2) goto LAB_180394a30;
    cVar21 = *(char *)(unaff_RBP + 0x3f);
  }
  lVar24 = plVar28[2];
  if (!bVar20) {
    if ((cVar21 == '\0') && (in_stack_00000070 == '\0')) {
      if (lVar24 == unaff_R13) {
LAB_180394c11:
        lVar24 = plVar28[3];
      }
    }
    else if (lVar24 != unaff_R13) goto LAB_180394c11;
  }
  puVar29 = (uint64_t *)*plVar28;
  puVar5 = (uint64_t *)plVar28[1];
  unaff_RBP[-8] = *puVar29;
  unaff_RBP[-7] = *puVar5;
  if ((*(char *)(unaff_RBP + 0x39) == '\0') &&
     ((cVar21 = *(char *)((longlong)puVar29 + 0xc), cVar21 != '\0' ||
      (*(char *)((longlong)puVar5 + 0xc) != '\0')))) {
    fVar47 = *(float *)(unaff_RBP + -8);
    fVar48 = *(float *)((longlong)unaff_RBP + -0x3c);
    fVar44 = *(float *)(unaff_RBP + -7);
    fVar45 = *(float *)((longlong)unaff_RBP + -0x34);
    fVar43 = fVar47 - fVar44;
    fVar42 = fVar48 - fVar45;
    fVar40 = fVar42 * fVar42 + fVar43 * fVar43;
    auVar38 = rsqrtss(ZEXT416((uint)fVar40),ZEXT416((uint)fVar40));
    fVar36 = auVar38._0_4_;
    fVar35 = *(float *)(unaff_RBP + 0x3a);
    if (fVar35 <= 0.4) {
      fVar35 = 0.4;
    }
    fVar46 = fVar36 * 0.5 * (3.0 - fVar40 * fVar36 * fVar36);
    fVar40 = fVar46 * fVar40 * 0.4;
    if (fVar35 <= fVar40) {
      fVar40 = fVar35;
    }
    if (cVar21 != '\0') {
      fVar47 = fVar47 - fVar46 * fVar43 * fVar40;
      fVar48 = fVar48 - fVar46 * fVar42 * fVar40;
    }
    fVar36 = 1.0;
    if (*(char *)((longlong)puVar5 + 0xc) != '\0') {
      fVar45 = fVar45 + fVar46 * fVar42 * fVar40;
      fVar44 = fVar44 + fVar40 * fVar46 * fVar43;
    }
  }
  else {
    fVar48 = *(float *)((longlong)unaff_RBP + -0x3c);
    fVar47 = *(float *)(unaff_RBP + -8);
    fVar45 = *(float *)((longlong)unaff_RBP + -0x34);
    fVar44 = *(float *)(unaff_RBP + -7);
  }
  cVar21 = FUN_18038acd0(lVar24,unaff_RBP[1],plVar28,*(int32_t *)(unaff_RBP + -3));
  plVar23 = (longlong *)unaff_RBP[-0x10];
  uVar32 = (ulonglong)in_stack_00000078;
  unaff_RDI = unaff_RBP[-0xe];
  uVar30 = unaff_RBP[-0xf];
  fVar35 = extraout_XMM0_Da_00;
  if (cVar21 != '\0') {
    fVar40 = ((float *)unaff_RBP[-6])[1];
    fVar42 = *(float *)unaff_RBP[-6];
    plVar23 = (longlong *)unaff_RBP[-0x10];
    fVar35 = fVar42 * (fVar45 - fVar48);
    fVar43 = fVar40 * (fVar44 - fVar47) - fVar35;
    if (fVar43 != 0.0) {
      fVar36 = fVar36 / fVar43;
      fVar43 = *(float *)unaff_RBP[-5];
      fVar39 = fVar43 - fVar47;
      fVar46 = ((float *)unaff_RBP[-5])[1];
      plVar23 = (longlong *)unaff_RBP[-0x10];
      fVar37 = fVar46 - fVar48;
      fVar35 = fVar37 * fVar42;
      fVar41 = (fVar39 * fVar40 - fVar35) * fVar36;
      fVar47 = (fVar39 * (fVar45 - fVar48) - fVar37 * (fVar44 - fVar47)) * fVar36;
      fVar36 = 1.0;
      if ((((-0.001 <= fVar41) && (fVar41 <= 1.001)) && (-0.001 <= fVar47)) && (fVar47 <= 1.001)) {
        fVar35 = fVar47;
        if (fVar41 <= fVar47) {
          fVar35 = fVar41;
        }
        if (fVar35 <= 1.0) {
          if (fVar47 <= fVar41) {
            fVar47 = fVar41;
          }
          if (0.0 <= fVar47) {
            uVar16 = unaff_R14[1];
            uVar17 = unaff_R14[2];
            uVar18 = unaff_R14[3];
            unaff_RBP[10] = *unaff_R14;
            unaff_RBP[0xb] = uVar16;
            uVar16 = unaff_R14[4];
            uVar19 = unaff_R14[5];
            unaff_RBP[0xc] = uVar17;
            unaff_RBP[0xd] = uVar18;
            uVar8 = *(int32_t *)(unaff_R14 + 6);
            uVar9 = *(int32_t *)((longlong)unaff_R14 + 0x34);
            uVar10 = *(int32_t *)(unaff_R14 + 7);
            uVar11 = *(int32_t *)((longlong)unaff_R14 + 0x3c);
            unaff_RBP[0xe] = uVar16;
            unaff_RBP[0xf] = uVar19;
            uVar12 = *(int32_t *)(unaff_R14 + 8);
            uVar13 = *(int32_t *)((longlong)unaff_R14 + 0x44);
            uVar14 = *(int32_t *)(unaff_R14 + 9);
            uVar15 = *(int32_t *)((longlong)unaff_R14 + 0x4c);
            *(int32_t *)(unaff_RBP + 0x10) = uVar8;
            *(int32_t *)((longlong)unaff_RBP + 0x84) = uVar9;
            *(int32_t *)(unaff_RBP + 0x11) = uVar10;
            *(int32_t *)((longlong)unaff_RBP + 0x8c) = uVar11;
            *(int32_t *)(unaff_RBP + 0x12) = uVar12;
            *(int32_t *)((longlong)unaff_RBP + 0x94) = uVar13;
            *(int32_t *)(unaff_RBP + 0x13) = uVar14;
            *(int32_t *)((longlong)unaff_RBP + 0x9c) = uVar15;
            unaff_RBP[unaff_RBP[8] + 10] = plVar28;
            *(float *)(unaff_RBP + 2) = fVar43 + fVar42;
            *(float *)((longlong)unaff_RBP + 0x14) = fVar46 + fVar40;
            cVar21 = FUN_18038d0a0(lVar24,unaff_RBP + 2);
            lVar27 = unaff_RBP[-10];
            if (((cVar21 == '\0') || (lVar27 != 0)) && (lVar24 != lVar27)) {
              bVar33 = false;
            }
            else {
              bVar33 = true;
            }
            if (((*(char *)(unaff_RBP + 0x3b) != '\0') && (!bVar33)) &&
               (plVar23 = (longlong *)unaff_RBP[-0x10], fVar35 = extraout_XMM0_Da_01,
               0.0 < *(float *)(lVar24 + 0x120))) {
LAB_180394a10:
              fVar36 = 1.0;
              unaff_R14 = (uint64_t *)*unaff_RBP;
              puVar29 = (uint64_t *)unaff_RBP[-0xd];
              plVar34 = (longlong *)unaff_RBP[-0xb];
              uVar30 = unaff_RBP[-0xf];
              iVar22 = iStack0000000000000074;
              goto LAB_180394a30;
            }
            if (!bVar20) {
              if ((*(char *)(unaff_RBP + 0x3f) != '\0') && (!bVar33)) {
                fVar40 = -fVar40;
                fVar42 = -fVar42;
              }
              uVar32 = (ulonglong)in_stack_00000078;
              unaff_RDI = unaff_RBP[-0xe];
              plVar23 = (longlong *)unaff_RBP[-0x10];
              fVar35 = (*(float *)unaff_RBP[-9] - *(float *)unaff_RBP[9]) * fVar40;
              if (0.0001 < (((float *)unaff_RBP[9])[1] - ((float *)unaff_RBP[-9])[1]) * fVar42 +
                           fVar35) goto LAB_180394a10;
            }
            if ((longlong *)unaff_RBP[-1] != (longlong *)0x0) {
              *(longlong *)unaff_RBP[-1] = lVar24;
            }
            if (unaff_RSI != 0) {
              unaff_RBP[6] = lVar24;
              *(int32_t *)((longlong)unaff_RBP + 0x3a) = 0;
              *(int16_t *)((longlong)unaff_RBP + 0x3e) = 0;
              uVar4 = *(ushort *)(lVar24 + 0x124);
              unaff_RBP[5] = plVar28;
              cVar3 = *(char *)(unaff_RSI + 0x1024);
              *(ushort *)(unaff_RBP + 7) = uVar4 | 0x8000;
              unaff_RBP[4] = 0;
              if (cVar3 != '\0') {
                if (*(int *)(unaff_RSI + 0x1020) + 1 < 0x81) {
                  uVar8 = *(int32_t *)((longlong)unaff_RBP + 0x24);
                  uVar9 = *(int32_t *)(unaff_RBP + 5);
                  uVar10 = *(int32_t *)((longlong)unaff_RBP + 0x2c);
                  uVar16 = unaff_RBP[6];
                  uVar17 = unaff_RBP[7];
                  lVar25 = (longlong)*(int *)(unaff_RSI + 0x1020) * 0x20;
                  puVar1 = (int32_t *)(lVar25 + unaff_RSI);
                  *puVar1 = *(int32_t *)(unaff_RBP + 4);
                  puVar1[1] = uVar8;
                  puVar1[2] = uVar9;
                  puVar1[3] = uVar10;
                  puVar29 = (uint64_t *)(lVar25 + 0x10 + unaff_RSI);
                  *puVar29 = uVar16;
                  puVar29[1] = uVar17;
                  *(int *)(unaff_RSI + 0x1020) = *(int *)(unaff_RSI + 0x1020) + 1;
                  goto LAB_180394fe7;
                }
                FUN_180396b10();
              }
              FUN_180396dd0(unaff_RSI + 0x1000,unaff_RBP + 4);
              lVar27 = unaff_RBP[-10];
            }
LAB_180394fe7:
            pfVar6 = (float *)unaff_RBP[-6];
            if (bVar33) {
              pfVar7 = (float *)unaff_RBP[-5];
              if (unaff_RSI != 0) {
                fVar35 = pfVar6[1];
                fVar36 = pfVar7[1];
                cVar3 = *(char *)(unaff_RSI + 0x1024);
                *(float *)(unaff_RBP + -9) = *pfVar6 + *pfVar7;
                *(float *)((longlong)unaff_RBP + -0x44) = fVar35 + fVar36;
                if (cVar3 == '\0') {
                  iVar22 = (int)(*(longlong *)(unaff_RSI + 0x1008) -
                                 *(longlong *)(unaff_RSI + 0x1000) >> 5);
                }
                else {
                  iVar22 = *(int *)(unaff_RSI + 0x1020);
                }
                lVar24 = unaff_RSI;
                if (cVar3 == '\0') {
                  lVar24 = *(longlong *)(unaff_RSI + 0x1000);
                }
                *(uint64_t *)(lVar24 + -0x20 + (longlong)iVar22 * 0x20) = unaff_RBP[-9];
              }
              if (((in_stack_00000070 == '\0') && (cVar21 == '\0')) &&
                 (cVar21 = FUN_180394850(unaff_RBP[3],unaff_RBP[-10],unaff_RBP[-10],pfVar7,pfVar6),
                 fVar35 = extraout_XMM0_Da_03, cVar21 == '\0')) {
LAB_1803951d6:
                if (unaff_RSI != 0) {
                  FUN_1803967f0(fVar35,*(int32_t *)(unaff_RBP + -4));
                }
              }
LAB_1803951e8:
                    // WARNING: Subroutine does not return
              FUN_1808fc050(unaff_RBP[0x14] ^ (ulonglong)&stack0x00000000);
            }
            cVar21 = FUN_180394850(unaff_RBP[3],lVar24,lVar27,unaff_RBP[-5],pfVar6);
            if (cVar21 != '\0') goto LAB_1803951e8;
            fVar36 = 1.0;
            unaff_R14 = (uint64_t *)*unaff_RBP;
            uVar32 = (ulonglong)in_stack_00000078;
            unaff_RDI = unaff_RBP[-0xe];
            puVar29 = (uint64_t *)unaff_RBP[-0xd];
            plVar34 = (longlong *)unaff_RBP[-0xb];
            uVar30 = unaff_RBP[-0xf];
            fVar35 = extraout_XMM0_Da_02;
            iVar22 = iStack0000000000000074;
LAB_180394a28:
            plVar23 = (longlong *)unaff_RBP[-0x10];
            goto LAB_180394a30;
          }
        }
      }
    }
  }
  puVar29 = (uint64_t *)unaff_RBP[-0xd];
  iVar22 = iStack0000000000000074;
  goto LAB_180394a30;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180395270(longlong param_1,int param_2,byte param_3)
void FUN_180395270(longlong param_1,int param_2,byte param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int8_t uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int32_t uVar14;
  int32_t extraout_XMM0_Da;
  longlong *plStack_60;
  longlong *plStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  
  if (param_2 == 0) {
    FUN_180626f80(&UNK_180a21f48);
  }
  else {
    plStack_60 = (longlong *)0x0;
    plStack_58 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
    uStack_50 = 0;
    uStack_48 = 3;
    lVar10 = *(longlong *)(param_1 + 0x478);
    plVar4 = plVar7;
    plVar2 = plVar7;
    if (*(longlong *)(param_1 + 0x480) - lVar10 >> 3 != 0) {
      do {
        lVar10 = *(longlong *)((longlong)plVar2 + lVar10);
        if ((*(int *)(lVar10 + 0x130) == param_2) && ((*(byte *)(lVar10 + 0x139) & 1) != param_3)) {
          FUN_18005ea90(&plStack_60);
          *(byte *)(lVar10 + 0x139) = *(byte *)(lVar10 + 0x139) & 0xfe | param_3;
          *(int32_t *)(lVar10 + 0x128) = 0xffffffff;
          if (*(char *)(lVar10 + 0xa8) != '\0') {
            plVar1 = (longlong *)(lVar10 + 0x60);
            plVar6 = plVar7;
            do {
              plVar12 = (longlong *)*plVar1;
              if (((*(byte *)(plVar12 + 4) < 2) || ((*(byte *)(plVar12[2] + 0x139) & 1) == 0)) ||
                 ((*(byte *)(plVar12[3] + 0x139) & 1) == 0)) {
                uVar3 = 1;
              }
              else {
                uVar3 = 0;
              }
              *(int8_t *)(*plVar12 + 0xc) = uVar3;
              *(int8_t *)(plVar12[1] + 0xc) = uVar3;
              uVar9 = (int)plVar6 + 1;
              plVar6 = (longlong *)(ulonglong)uVar9;
              plVar1 = plVar1 + 1;
            } while ((int)uVar9 < (int)(uint)*(byte *)(lVar10 + 0xa8));
          }
        }
        uVar9 = (int)plVar4 + 1;
        lVar10 = *(longlong *)(param_1 + 0x478);
        plVar4 = (longlong *)(ulonglong)uVar9;
        plVar2 = plVar2 + 1;
      } while ((ulonglong)(longlong)(int)uVar9 <
               (ulonglong)(*(longlong *)(param_1 + 0x480) - lVar10 >> 3));
    }
    uVar14 = 0;
    plVar4 = (longlong *)0x0;
    plVar2 = (longlong *)0x0;
    plVar1 = plStack_60;
    if (plStack_60 != plStack_58) {
      do {
        plVar12 = (longlong *)(*plVar1 + 0xb0);
        lVar10 = 4;
        plVar6 = plVar2;
        do {
          lVar11 = *plVar12;
          plVar2 = plVar6;
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x128) != -1)) {
            if (plVar4 < plVar7) {
              *plVar4 = lVar11;
            }
            else {
              lVar11 = (longlong)plVar4 - (longlong)plVar6 >> 3;
              if (lVar11 == 0) {
                lVar11 = 1;
LAB_180395496:
                plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar11 * 8,3);
                uVar14 = extraout_XMM0_Da;
              }
              else {
                lVar11 = lVar11 * 2;
                if (lVar11 != 0) goto LAB_180395496;
                plVar2 = (longlong *)0x0;
              }
              if (plVar6 != plVar4) {
                    // WARNING: Subroutine does not return
                memmove(plVar2,plVar6,(longlong)plVar4 - (longlong)plVar6);
              }
              *plVar2 = *plVar12;
              if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(plVar6);
              }
              plVar7 = plVar2 + lVar11;
              plVar4 = plVar2;
            }
            plVar4 = plVar4 + 1;
            uVar14 = FUN_18038ee20(uVar14,*plVar12,0xffffffff);
          }
          plVar12 = plVar12 + 1;
          lVar10 = lVar10 + -1;
          plVar6 = plVar2;
        } while (lVar10 != 0);
        plVar1 = plVar1 + 1;
      } while (plVar1 != plStack_58);
    }
    plVar7 = plStack_60;
    uVar13 = 0;
    if (param_3 != 0) {
      uVar8 = (ulonglong)((longlong)plStack_58 + (7 - (longlong)plStack_60)) >> 3;
      if (plStack_58 < plStack_60) {
        uVar8 = uVar13;
      }
      uVar5 = uVar13;
      plVar1 = plStack_60;
      if (uVar8 != 0) {
        do {
          lVar10 = *plVar1;
          if (*(int *)(lVar10 + 0x128) == -1) {
            *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
            uVar14 = FUN_18038ee20(uVar14,lVar10,*(int32_t *)(param_1 + 0x530));
          }
          uVar5 = uVar5 + 1;
          plVar1 = plVar1 + 1;
        } while (uVar5 != uVar8);
      }
    }
    uVar8 = (ulonglong)((longlong)plVar4 + (7 - (longlong)plVar2)) >> 3;
    if (plVar4 < plVar2) {
      uVar8 = uVar13;
    }
    plVar4 = plVar2;
    if (uVar8 != 0) {
      do {
        lVar10 = *plVar4;
        if (*(int *)(lVar10 + 0x128) == -1) {
          *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
          uVar14 = FUN_18038ee20(uVar14,lVar10,*(int32_t *)(param_1 + 0x530));
        }
        uVar13 = uVar13 + 1;
        plVar4 = plVar4 + 1;
      } while (uVar13 != uVar8);
    }
    if (plVar2 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar2);
    }
    if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar7);
    }
  }
  return;
}





// 函数: void FUN_180395630(longlong param_1,int param_2,float *param_3,int32_t param_4,longlong *param_5)
void FUN_180395630(longlong param_1,int param_2,float *param_3,int32_t param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lStack_38;
  int iStack_2c;
  
  if (*(longlong *)(param_1 + 0x480) - *(longlong *)(param_1 + 0x478) >> 3 != 0) {
    iVar6 = 0;
    iVar3 = (int)(((*param_3 - *(float *)(param_5 + 1)) - 1e-06) / *(float *)(param_5 + 3));
    iVar4 = iVar6;
    if ((-1 < iVar3) && (iVar4 = iVar3, (int)param_5[4] <= iVar3)) {
      iVar4 = (int)param_5[4] + -1;
    }
    iVar3 = (int)(((param_3[1] - *(float *)((longlong)param_5 + 0xc)) - 1e-06) /
                 *(float *)((longlong)param_5 + 0x1c));
    if ((-1 < iVar3) && (iVar6 = iVar3, *(int *)((longlong)param_5 + 0x24) <= iVar3)) {
      iVar6 = *(int *)((longlong)param_5 + 0x24) + -1;
    }
    lVar1 = param_5[4];
    iStack_2c = (int)((ulonglong)lVar1 >> 0x20);
    lStack_38 = 5;
    do {
      lVar12 = 5;
      iVar3 = iVar4 + -2;
      do {
        if ((((-1 < iVar3) && (iVar3 < (int)lVar1)) && (-1 < iVar6 + -2)) &&
           (iVar6 + -2 < iStack_2c)) {
          lVar5 = (longlong)(*(int *)((longlong)param_5 + 0x24) * iVar3 + iVar6);
          plVar7 = *(longlong **)(*param_5 + -0x40 + lVar5 * 0x28);
          plVar11 = *(longlong **)(*param_5 + -0x48 + lVar5 * 0x28);
          uVar8 = 0;
          uVar9 = (ulonglong)((longlong)plVar7 + (7 - (longlong)plVar11)) >> 3;
          if (plVar7 < plVar11) {
            uVar9 = uVar8;
          }
          if (uVar9 != 0) {
            do {
              iVar10 = 0;
              lVar5 = *plVar11;
              if ((*(int *)(lVar5 + 0x130) == param_2) &&
                 (*(int32_t *)(lVar5 + 0x120) = param_4, *(char *)(lVar5 + 0xa8) != '\0')) {
                plVar7 = (longlong *)(lVar5 + 0xb0);
                do {
                  lVar2 = *plVar7;
                  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x130) == param_2)) {
                    *(int32_t *)(lVar2 + 0x120) = param_4;
                  }
                  iVar10 = iVar10 + 1;
                  plVar7 = plVar7 + 1;
                } while (iVar10 < (int)(uint)*(byte *)(lVar5 + 0xa8));
              }
              plVar11 = plVar11 + 1;
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar9);
          }
        }
        iVar3 = iVar3 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      iVar6 = iVar6 + 1;
      lStack_38 = lStack_38 + -1;
    } while (lStack_38 != 0);
  }
  return;
}





// 函数: void FUN_180395664(float param_1,float param_2,longlong param_3,int32_t param_4)
void FUN_180395664(float param_1,float param_2,longlong param_3,int32_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int in_EDX;
  longlong *plVar6;
  uint64_t unaff_RBX;
  ulonglong uVar7;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  ulonglong uVar8;
  int iVar9;
  int in_R10D;
  longlong in_R11;
  longlong *plVar10;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  longlong lVar11;
  uint64_t unaff_R15;
  longlong lVar12;
  int iStackX_c;
  longlong *in_stack_00000060;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -8) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x10) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  iVar3 = (int)(((param_1 - *(float *)(in_stack_00000060 + 1)) - param_2) /
               *(float *)(in_stack_00000060 + 3));
  iVar4 = in_EDX;
  if ((-1 < iVar3) && (iVar4 = iVar3, (int)in_stack_00000060[4] <= iVar3)) {
    iVar4 = (int)in_stack_00000060[4] + -1;
  }
  iVar3 = (int)(((*(float *)(param_3 + 4) - *(float *)((longlong)in_stack_00000060 + 0xc)) - param_2
                ) / *(float *)((longlong)in_stack_00000060 + 0x1c));
  if ((-1 < iVar3) && (in_EDX = iVar3, *(int *)((longlong)in_stack_00000060 + 0x24) <= iVar3)) {
    in_EDX = *(int *)((longlong)in_stack_00000060 + 0x24) + -1;
  }
  lVar1 = in_stack_00000060[4];
  iStackX_c = (int)((ulonglong)lVar1 >> 0x20);
  lVar12 = 5;
  do {
    lVar11 = 5;
    iVar3 = iVar4 + -2;
    do {
      if ((((-1 < iVar3) && (iVar3 < (int)lVar1)) && (-1 < in_EDX + -2)) &&
         (in_EDX + -2 < iStackX_c)) {
        lVar5 = (longlong)(*(int *)((longlong)in_stack_00000060 + 0x24) * iVar3 + in_EDX);
        plVar6 = *(longlong **)(*in_stack_00000060 + -0x40 + lVar5 * 0x28);
        plVar10 = *(longlong **)(*in_stack_00000060 + -0x48 + lVar5 * 0x28);
        uVar7 = 0;
        uVar8 = (ulonglong)((longlong)plVar6 + (7 - (longlong)plVar10)) >> 3;
        if (plVar6 < plVar10) {
          uVar8 = uVar7;
        }
        if (uVar8 != 0) {
          do {
            iVar9 = 0;
            lVar5 = *plVar10;
            if ((*(int *)(lVar5 + 0x130) == in_R10D) &&
               (*(int32_t *)(lVar5 + 0x120) = param_4, *(char *)(lVar5 + 0xa8) != '\0')) {
              plVar6 = (longlong *)(lVar5 + 0xb0);
              do {
                lVar2 = *plVar6;
                if ((lVar2 != 0) && (*(int *)(lVar2 + 0x130) == in_R10D)) {
                  *(int32_t *)(lVar2 + 0x120) = param_4;
                }
                iVar9 = iVar9 + 1;
                plVar6 = plVar6 + 1;
              } while (iVar9 < (int)(uint)*(byte *)(lVar5 + 0xa8));
            }
            plVar10 = plVar10 + 1;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar8);
        }
      }
      iVar3 = iVar3 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    in_EDX = in_EDX + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}





