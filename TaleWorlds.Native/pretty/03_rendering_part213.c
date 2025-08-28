#include "TaleWorlds.Native.Split.h"

// 03_rendering_part213.c - 7 个函数

// 函数: void FUN_18038e459(uint64_t param_1,int param_2,longlong param_3,longlong param_4)
void FUN_18038e459(uint64_t param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int32_t *puVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong in_RAX;
  ulonglong uVar8;
  char cVar9;
  ushort uVar10;
  longlong *plVar11;
  ushort uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte bVar20;
  uint64_t *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  uint64_t uStackX_20;
  int in_stack_00000128;
  float *in_stack_00000140;
  float *in_stack_00000148;
  longlong in_stack_00000150;
  
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM9_Dd;
  bVar5 = FUN_18038d0a0(param_1,in_stack_00000140);
  bVar20 = bVar5;
  cVar6 = FUN_18038d0a0(param_4,in_stack_00000148);
  plVar1 = (longlong *)(in_stack_00000150 + 0x1000);
  if (*(char *)(in_stack_00000150 + 0x1024) == '\0') {
    *(longlong *)(in_stack_00000150 + 0x1008) = *plVar1;
    *(int8_t *)(in_stack_00000150 + 0x1024) = 1;
  }
  *(int32_t *)(in_stack_00000150 + 0x1020) = 0;
  lVar23 = param_4;
  if (param_4 != param_3) {
    do {
      iVar7 = func_0x000180396660(in_stack_00000150);
      bVar20 = bVar5;
      if (0x3ff < iVar7) break;
      uStackX_20 = 0;
      if (*(char *)(in_stack_00000150 + 0x1024) == '\0') {
LAB_18038e527:
        FUN_180396dd0(plVar1,&uStackX_20);
      }
      else {
        if (0x80 < *(int *)(in_stack_00000150 + 0x1020) + 1) {
          FUN_180396b10(in_stack_00000150);
          goto LAB_18038e527;
        }
        lVar13 = (longlong)*(int *)(in_stack_00000150 + 0x1020) * 0x20;
        puVar2 = (int32_t *)(lVar13 + in_stack_00000150);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar21 = (uint64_t *)(lVar13 + 0x10 + in_stack_00000150);
        *puVar21 = 0;
        puVar21[1] = 0;
        *(int *)(in_stack_00000150 + 0x1020) = *(int *)(in_stack_00000150 + 0x1020) + 1;
      }
      lVar23 = *(longlong *)(lVar23 + (longlong)param_2 * 8);
    } while (lVar23 != param_3);
  }
  if (bVar20 == 0) {
    if (*(char *)(in_stack_00000150 + 0x1024) == '\0') {
      iVar7 = (int)(*(longlong *)(in_stack_00000150 + 0x1008) - *plVar1 >> 5);
    }
    else {
      iVar7 = *(int *)(in_stack_00000150 + 0x1020);
    }
    if (iVar7 < 0x400) {
      FUN_180396750(in_stack_00000150);
    }
  }
  cVar9 = *(char *)(in_stack_00000150 + 0x1024);
  if (cVar9 == '\0') {
    iVar7 = (int)(*(longlong *)(in_stack_00000150 + 0x1008) - *plVar1 >> 5);
  }
  else {
    iVar7 = *(int *)(in_stack_00000150 + 0x1020);
  }
  if (iVar7 < 0x400) {
    FUN_180396750(in_stack_00000150);
    cVar9 = *(char *)(in_stack_00000150 + 0x1024);
  }
  if (cVar9 == '\0') {
    iVar7 = (int)(*(longlong *)(in_stack_00000150 + 0x1008) - *plVar1 >> 5);
    cVar9 = '\0';
  }
  else {
    iVar7 = *(int *)(in_stack_00000150 + 0x1020);
  }
  iVar7 = iVar7 + -2;
  if (cVar6 != '\0') {
    if (cVar9 == '\0') {
      iVar19 = (int)(*(longlong *)(in_stack_00000150 + 0x1008) - *plVar1 >> 5);
      cVar9 = '\0';
    }
    else {
      iVar19 = *(int *)(in_stack_00000150 + 0x1020);
    }
    lVar13 = (longlong)iVar19 * 0x20;
    lVar23 = in_stack_00000150;
    if (cVar9 == '\0') {
      lVar23 = *plVar1;
    }
    *(uint64_t *)(lVar23 + -0x18 + lVar13) = 0;
    *(longlong *)(lVar23 + -0x10 + lVar13) = param_4;
    uVar10 = *(ushort *)(param_4 + 0x124) & 0x7fff;
    uVar12 = uVar10 | 0x8000;
    if (-1 < *(short *)(lVar23 + -8 + lVar13)) {
      uVar12 = uVar10;
    }
    *(ushort *)(lVar23 + -8 + lVar13) = uVar12;
    *(uint64_t *)(lVar23 + -0x20 + lVar13) = *(uint64_t *)in_stack_00000148;
    *(ushort *)(lVar23 + -8 + lVar13) = uVar12 | 0x8000;
    goto LAB_18038e99b;
  }
  uStackX_20 = *(uint64_t *)in_stack_00000148;
  if (cVar9 == '\0') {
LAB_18038e730:
    FUN_180396dd0(plVar1,&uStackX_20);
  }
  else {
    if (0x80 < *(int *)(in_stack_00000150 + 0x1020) + 1) {
      FUN_180396b10(in_stack_00000150);
      goto LAB_18038e730;
    }
    lVar23 = (longlong)*(int *)(in_stack_00000150 + 0x1020) * 0x20;
    puVar21 = (uint64_t *)(lVar23 + in_stack_00000150);
    *puVar21 = uStackX_20;
    puVar21[1] = 0;
    puVar21 = (uint64_t *)(lVar23 + 0x10 + in_stack_00000150);
    *puVar21 = 0;
    puVar21[1] = 0x8000;
    *(int *)(in_stack_00000150 + 0x1020) = *(int *)(in_stack_00000150 + 0x1020) + 1;
  }
  bVar20 = *(byte *)(param_4 + 0xa8);
  iVar19 = 0;
  uVar24 = (uint)bVar20;
  if (bVar20 != 0) {
    puVar21 = (uint64_t *)(param_4 + 0x80);
    lVar23 = 0;
    fVar31 = *in_stack_00000148 - *(float *)(param_4 + 0xe8);
    iVar17 = 1;
    fVar32 = in_stack_00000148[1] - *(float *)(param_4 + 0xec);
    do {
      pfVar3 = *(float **)(param_4 + 0x80 + (longlong)(iVar17 % (int)uVar24) * 8);
      fVar26 = pfVar3[1];
      fVar28 = ((float *)*puVar21)[1];
      fVar25 = *(float *)*puVar21;
      fVar29 = fVar26 - fVar28;
      fVar30 = *pfVar3 - fVar25;
      fVar27 = fVar32 * fVar30;
      if (((fVar28 - fVar26) * fVar31 + fVar27 <= 0.0001) &&
         (fVar27 = fVar31 * fVar29 - fVar27, fVar27 != 0.0)) {
        fVar25 = fVar25 - *(float *)(param_4 + 0xe8);
        fVar27 = 1.0 / fVar27;
        fVar28 = fVar28 - *(float *)(param_4 + 0xec);
        fVar26 = (fVar25 * fVar32 - fVar28 * fVar31) * fVar27;
        fVar27 = (fVar25 * fVar29 - fVar28 * fVar30) * fVar27;
        if ((-0.001 <= fVar27) && (((fVar27 <= 1.001 && (-0.001 <= fVar26)) && (fVar26 <= 1.001))))
        {
          fVar28 = fVar26;
          if (fVar27 <= fVar26) {
            fVar28 = fVar27;
          }
          if (fVar28 <= 1.0) {
            if (fVar26 <= fVar27) {
              fVar26 = fVar27;
            }
            if (0.0 <= fVar26) {
              if (iVar19 != -1) goto LAB_18038e922;
              break;
            }
          }
        }
      }
      iVar19 = iVar19 + 1;
      iVar17 = iVar17 + 1;
      lVar23 = lVar23 + 1;
      puVar21 = puVar21 + 1;
    } while (lVar23 < (int)uVar24);
  }
  iVar17 = 0;
  iVar19 = 0;
  if (uVar24 != 0) {
    puVar21 = (uint64_t *)(param_4 + 0x80);
    lVar23 = 0;
    iVar18 = 1;
    do {
      pfVar3 = *(float **)(param_4 + 0x80 + (longlong)(iVar18 % (int)uVar24) * 8);
      pfVar4 = (float *)*puVar21;
      iVar19 = iVar17;
      if ((*pfVar3 - *pfVar4) * (in_stack_00000148[1] - pfVar4[1]) -
          (pfVar3[1] - pfVar4[1]) * (*in_stack_00000148 - *pfVar4) < 0.0) break;
      iVar17 = iVar17 + 1;
      iVar18 = iVar18 + 1;
      lVar23 = lVar23 + 1;
      puVar21 = puVar21 + 1;
      iVar19 = 0;
    } while (lVar23 < (longlong)(ulonglong)bVar20);
  }
LAB_18038e922:
  if (*(char *)(in_stack_00000150 + 0x1024) == '\0') {
    iVar17 = (int)(*(longlong *)(in_stack_00000150 + 0x1008) - *plVar1 >> 5);
  }
  else {
    iVar17 = *(int *)(in_stack_00000150 + 0x1020);
  }
  lVar13 = ((longlong)iVar17 + -2) * 0x20;
  lVar23 = in_stack_00000150;
  if (*(char *)(in_stack_00000150 + 0x1024) == '\0') {
    lVar23 = *plVar1;
  }
  *(uint64_t *)(lVar23 + 8 + lVar13) = *(uint64_t *)(param_4 + 0x60 + (longlong)iVar19 * 8);
  *(longlong *)(lVar23 + 0x10 + lVar13) = param_4;
  *(ushort *)(lVar23 + 0x18 + lVar13) = *(ushort *)(param_4 + 0x124) & 0x7fff;
LAB_18038e99b:
  uVar22 = 0;
  if (bVar5 == 0) {
    bVar20 = *(byte *)(param_3 + 0xa8);
    uVar24 = (uint)bVar20;
    if (bVar20 != 0) {
      puVar21 = (uint64_t *)(param_3 + 0x80);
      fVar31 = *in_stack_00000140 - *(float *)(param_3 + 0xe8);
      iVar19 = 1;
      fVar32 = in_stack_00000140[1] - *(float *)(param_3 + 0xec);
      uVar14 = uVar22;
      do {
        pfVar3 = *(float **)(param_3 + 0x80 + (longlong)(iVar19 % (int)uVar24) * 8);
        fVar26 = pfVar3[1];
        fVar28 = ((float *)*puVar21)[1];
        fVar25 = *(float *)*puVar21;
        fVar29 = fVar26 - fVar28;
        fVar30 = *pfVar3 - fVar25;
        fVar27 = fVar32 * fVar30;
        if (((fVar28 - fVar26) * fVar31 + fVar27 <= 0.0001) &&
           (fVar27 = fVar31 * fVar29 - fVar27, fVar27 != 0.0)) {
          fVar25 = fVar25 - *(float *)(param_3 + 0xe8);
          fVar27 = 1.0 / fVar27;
          fVar28 = fVar28 - *(float *)(param_3 + 0xec);
          fVar26 = (fVar25 * fVar32 - fVar28 * fVar31) * fVar27;
          fVar27 = (fVar25 * fVar29 - fVar28 * fVar30) * fVar27;
          if (((-0.001 <= fVar27) && ((fVar27 <= 1.001 && (-0.001 <= fVar26)))) && (fVar26 <= 1.001)
             ) {
            fVar28 = fVar26;
            if (fVar27 <= fVar26) {
              fVar28 = fVar27;
            }
            if (fVar28 <= 1.0) {
              if (fVar26 <= fVar27) {
                fVar26 = fVar27;
              }
              if (0.0 <= fVar26) {
                if ((int)uVar22 != -1) goto LAB_18038eb8f;
                break;
              }
            }
          }
        }
        uVar22 = (ulonglong)((int)uVar22 + 1);
        iVar19 = iVar19 + 1;
        uVar14 = uVar14 + 1;
        puVar21 = puVar21 + 1;
      } while ((longlong)uVar14 < (longlong)(int)uVar24);
    }
    uVar14 = 0;
    iVar19 = 0;
    if (uVar24 != 0) {
      puVar21 = (uint64_t *)(param_3 + 0x80);
      iVar19 = 1;
      uVar15 = uVar14;
      uVar8 = uVar14;
      do {
        pfVar3 = *(float **)(param_3 + 0x80 + (longlong)(iVar19 % (int)uVar24) * 8);
        pfVar4 = (float *)*puVar21;
        uVar22 = uVar8;
        if ((in_stack_00000140[1] - pfVar4[1]) * (*pfVar3 - *pfVar4) -
            (pfVar3[1] - pfVar4[1]) * (*in_stack_00000140 - *pfVar4) <= 0.0) break;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        iVar19 = iVar19 + 1;
        uVar15 = uVar15 + 1;
        puVar21 = puVar21 + 1;
        uVar22 = uVar14;
      } while ((longlong)uVar15 < (longlong)(ulonglong)bVar20);
LAB_18038eb8f:
      iVar19 = (int)uVar22;
    }
    lVar23 = in_stack_00000150;
    if (*(char *)(in_stack_00000150 + 0x1024) == '\0') {
      lVar23 = *plVar1;
    }
    *(uint64_t *)(lVar23 + 8) = *(uint64_t *)(param_3 + 0x60 + (longlong)iVar19 * 8);
    *(uint64_t *)(lVar23 + 0x10) = 0;
    *(int16_t *)(lVar23 + 0x18) = 0;
  }
  if ((int)(bVar5 ^ 1) <= iVar7) {
    lVar23 = (longlong)in_stack_00000128;
    lVar13 = (longlong)iVar7 << 5;
    uVar22 = (ulonglong)((iVar7 - (bVar5 ^ 1)) + 1);
    do {
      uVar15 = 0;
      uVar14 = uVar15;
      if (*(byte *)(param_4 + 0xa8) != 0) {
        plVar11 = (longlong *)(param_4 + 0xb0);
        uVar8 = uVar15;
        do {
          if (*plVar11 == *(longlong *)(param_4 + lVar23 * 8)) {
            uVar14 = *(ulonglong *)(param_4 + 0x60 + uVar8 * 8);
            if (uVar14 != 0) goto LAB_18038ed75;
            break;
          }
          uVar8 = uVar8 + 1;
          plVar11 = plVar11 + 1;
        } while ((longlong)uVar8 < (longlong)(ulonglong)*(byte *)(param_4 + 0xa8));
      }
      if ((*(byte *)(param_4 + 0x139) & 4) == 0) {
        plVar11 = *(longlong **)(param_4 + 0xf8);
        uVar8 = (ulonglong)((longlong)*(longlong **)(param_4 + 0x100) + (7 - (longlong)plVar11)) >>
                3;
        if (*(longlong **)(param_4 + 0x100) < plVar11) {
          uVar8 = uVar15;
        }
        if (uVar8 != 0) {
          do {
            if (*plVar11 == *(longlong *)(param_4 + lVar23 * 8)) {
              uVar14 = *(ulonglong *)(*plVar11 + 0x118);
            }
            plVar11 = plVar11 + 1;
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar8);
          goto LAB_18038ecd0;
        }
LAB_18038ecd9:
        lVar16 = 0;
        bVar20 = *(byte *)(param_3 + 0xa8);
        uVar14 = *(ulonglong *)(param_4 + 0x60);
        if (bVar20 != 0) {
          puVar21 = (uint64_t *)(param_3 + 0x80);
          iVar7 = 1;
          do {
            pfVar3 = *(float **)(param_3 + 0x80 + (longlong)(iVar7 % (int)(uint)bVar20) * 8);
            pfVar4 = (float *)*puVar21;
            if ((*pfVar3 - *pfVar4) * (in_stack_00000140[1] - pfVar4[1]) -
                (pfVar3[1] - pfVar4[1]) * (*in_stack_00000140 - *pfVar4) <= 0.0) {
              uVar14 = *(ulonglong *)(param_4 + 0x60 + lVar16 * 8);
              break;
            }
            iVar7 = iVar7 + 1;
            lVar16 = lVar16 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar16 < (longlong)(ulonglong)bVar20);
        }
      }
      else {
        uVar14 = *(ulonglong *)(param_4 + 0x118);
LAB_18038ecd0:
        if (uVar14 == 0) goto LAB_18038ecd9;
      }
LAB_18038ed75:
      lVar16 = in_stack_00000150;
      if (*(char *)(in_stack_00000150 + 0x1024) == '\0') {
        lVar16 = *plVar1;
      }
      plVar11 = (longlong *)(param_4 + lVar23 * 8);
      *(ulonglong *)(lVar13 + 8 + lVar16) = uVar14;
      *(longlong *)(lVar13 + 0x10 + lVar16) = *plVar11;
      *(ushort *)(lVar13 + 0x18 + lVar16) = *(ushort *)(*plVar11 + 0x124) & 0x7fff;
      lVar13 = lVar13 + -0x20;
      param_4 = *plVar11;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018038e6f7)



// 函数: void FUN_18038e616(char param_1,int param_2)
void FUN_18038e616(char param_1,int param_2)

{
  byte bVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong *plVar6;
  ushort uVar7;
  longlong unaff_RBX;
  char unaff_BPL;
  longlong unaff_RDI;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint64_t *puVar15;
  ulonglong uVar16;
  longlong *unaff_R12;
  float *unaff_R13;
  longlong lVar17;
  uint uVar18;
  longlong unaff_R15;
  int32_t uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_XMM9_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t uStackX_20;
  uint64_t uStack0000000000000028;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  int in_stack_00000128;
  float *in_stack_00000140;
  byte in_stack_00000158;
  
  if (unaff_BPL != '\0') {
    if (param_1 == '\0') {
      iVar14 = (int)(unaff_R12[1] - *unaff_R12 >> 5);
      param_1 = '\0';
    }
    else {
      iVar14 = *(int *)(unaff_RBX + 0x1020);
    }
    lVar8 = (longlong)iVar14 * 0x20;
    lVar17 = unaff_RBX;
    if (param_1 == '\0') {
      lVar17 = *unaff_R12;
    }
    *(uint64_t *)(lVar17 + -0x18 + lVar8) = 0;
    *(longlong *)(lVar17 + -0x10 + lVar8) = unaff_RDI;
    uVar5 = *(ushort *)(unaff_RDI + 0x124) & 0x7fff;
    uVar7 = uVar5 | 0x8000;
    if (-1 < *(short *)(lVar17 + -8 + lVar8)) {
      uVar7 = uVar5;
    }
    *(ushort *)(lVar17 + -8 + lVar8) = uVar7;
    *(uint64_t *)(lVar17 + -0x20 + lVar8) = *(uint64_t *)unaff_R13;
    *(ushort *)(lVar17 + -8 + lVar8) = uVar7 | 0x8000;
    goto LAB_18038e99b;
  }
  uVar19 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStackX_20 = *(uint64_t *)unaff_R13;
  uStack0000000000000038 = 0x8000;
  if (param_1 == '\0') {
LAB_18038e730:
    FUN_180396dd0(uVar19,&uStackX_20);
  }
  else {
    if (0x80 < *(int *)(unaff_RBX + 0x1020) + 1) {
      uVar19 = FUN_180396b10();
      goto LAB_18038e730;
    }
    lVar17 = (longlong)*(int *)(unaff_RBX + 0x1020) * 0x20;
    puVar15 = (uint64_t *)(lVar17 + unaff_RBX);
    *puVar15 = uStackX_20;
    puVar15[1] = 0;
    puVar15 = (uint64_t *)(lVar17 + 0x10 + unaff_RBX);
    *puVar15 = 0;
    puVar15[1] = 0x8000;
    *(int *)(unaff_RBX + 0x1020) = *(int *)(unaff_RBX + 0x1020) + 1;
  }
  bVar1 = *(byte *)(unaff_RDI + 0xa8);
  iVar14 = 0;
  uVar18 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar15 = (uint64_t *)(unaff_RDI + 0x80);
    lVar17 = 0;
    fVar26 = *unaff_R13 - *(float *)(unaff_RDI + 0xe8);
    iVar12 = 1;
    fVar27 = unaff_R13[1] - *(float *)(unaff_RDI + 0xec);
    do {
      pfVar2 = *(float **)(unaff_RDI + 0x80 + (longlong)(iVar12 % (int)uVar18) * 8);
      fVar21 = pfVar2[1];
      fVar23 = ((float *)*puVar15)[1];
      fVar20 = *(float *)*puVar15;
      fVar24 = fVar21 - fVar23;
      fVar25 = *pfVar2 - fVar20;
      fVar22 = fVar27 * fVar25;
      if (((fVar23 - fVar21) * fVar26 + fVar22 <= unaff_XMM15_Da) &&
         (fVar22 = fVar26 * fVar24 - fVar22, fVar22 != unaff_XMM14_Da)) {
        fVar20 = fVar20 - *(float *)(unaff_RDI + 0xe8);
        fVar22 = unaff_XMM13_Da / fVar22;
        fVar23 = fVar23 - *(float *)(unaff_RDI + 0xec);
        fVar21 = (fVar20 * fVar27 - fVar23 * fVar26) * fVar22;
        fVar22 = (fVar20 * fVar24 - fVar23 * fVar25) * fVar22;
        if ((unaff_XMM12_Da <= fVar22) &&
           (((fVar22 <= unaff_XMM9_Da && (unaff_XMM12_Da <= fVar21)) && (fVar21 <= unaff_XMM9_Da))))
        {
          fVar23 = fVar21;
          if (fVar22 <= fVar21) {
            fVar23 = fVar22;
          }
          if (fVar23 <= unaff_XMM13_Da) {
            if (fVar21 <= fVar22) {
              fVar21 = fVar22;
            }
            if (unaff_XMM14_Da <= fVar21) {
              if (iVar14 != -1) goto LAB_18038e922;
              break;
            }
          }
        }
      }
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 1;
      lVar17 = lVar17 + 1;
      puVar15 = puVar15 + 1;
    } while (lVar17 < (int)uVar18);
  }
  iVar12 = 0;
  iVar14 = 0;
  if (uVar18 != 0) {
    puVar15 = (uint64_t *)(unaff_RDI + 0x80);
    lVar17 = 0;
    iVar13 = 1;
    do {
      pfVar2 = *(float **)(unaff_RDI + 0x80 + (longlong)(iVar13 % (int)uVar18) * 8);
      pfVar3 = (float *)*puVar15;
      iVar14 = iVar12;
      if ((*pfVar2 - *pfVar3) * (unaff_R13[1] - pfVar3[1]) -
          (pfVar2[1] - pfVar3[1]) * (*unaff_R13 - *pfVar3) < unaff_XMM14_Da) break;
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 1;
      lVar17 = lVar17 + 1;
      puVar15 = puVar15 + 1;
      iVar14 = 0;
    } while (lVar17 < (longlong)(ulonglong)bVar1);
  }
LAB_18038e922:
  if (*(char *)(unaff_RBX + 0x1024) == '\0') {
    iVar12 = (int)(unaff_R12[1] - *unaff_R12 >> 5);
  }
  else {
    iVar12 = *(int *)(unaff_RBX + 0x1020);
  }
  lVar8 = ((longlong)iVar12 + -2) * 0x20;
  lVar17 = unaff_RBX;
  if (*(char *)(unaff_RBX + 0x1024) == '\0') {
    lVar17 = *unaff_R12;
  }
  *(uint64_t *)(lVar17 + 8 + lVar8) = *(uint64_t *)(unaff_RDI + 0x60 + (longlong)iVar14 * 8);
  *(longlong *)(lVar17 + 0x10 + lVar8) = unaff_RDI;
  *(ushort *)(lVar17 + 0x18 + lVar8) = *(ushort *)(unaff_RDI + 0x124) & 0x7fff;
LAB_18038e99b:
  uVar16 = 0;
  if (in_stack_00000158 == 0) {
    bVar1 = *(byte *)(unaff_R15 + 0xa8);
    uVar18 = (uint)bVar1;
    if (bVar1 != 0) {
      puVar15 = (uint64_t *)(unaff_R15 + 0x80);
      fVar26 = *in_stack_00000140 - *(float *)(unaff_R15 + 0xe8);
      iVar14 = 1;
      fVar27 = in_stack_00000140[1] - *(float *)(unaff_R15 + 0xec);
      uVar9 = uVar16;
      do {
        pfVar2 = *(float **)(unaff_R15 + 0x80 + (longlong)(iVar14 % (int)uVar18) * 8);
        fVar21 = pfVar2[1];
        fVar23 = ((float *)*puVar15)[1];
        fVar20 = *(float *)*puVar15;
        fVar24 = fVar21 - fVar23;
        fVar25 = *pfVar2 - fVar20;
        fVar22 = fVar27 * fVar25;
        if (((fVar23 - fVar21) * fVar26 + fVar22 <= unaff_XMM15_Da) &&
           (fVar22 = fVar26 * fVar24 - fVar22, fVar22 != unaff_XMM14_Da)) {
          fVar20 = fVar20 - *(float *)(unaff_R15 + 0xe8);
          fVar22 = unaff_XMM13_Da / fVar22;
          fVar23 = fVar23 - *(float *)(unaff_R15 + 0xec);
          fVar21 = (fVar20 * fVar27 - fVar23 * fVar26) * fVar22;
          fVar22 = (fVar20 * fVar24 - fVar23 * fVar25) * fVar22;
          if (((unaff_XMM12_Da <= fVar22) &&
              ((fVar22 <= unaff_XMM9_Da && (unaff_XMM12_Da <= fVar21)))) &&
             (fVar21 <= unaff_XMM9_Da)) {
            fVar23 = fVar21;
            if (fVar22 <= fVar21) {
              fVar23 = fVar22;
            }
            if (fVar23 <= unaff_XMM13_Da) {
              if (fVar21 <= fVar22) {
                fVar21 = fVar22;
              }
              if (unaff_XMM14_Da <= fVar21) {
                if ((int)uVar16 != -1) goto LAB_18038eb8f;
                break;
              }
            }
          }
        }
        uVar16 = (ulonglong)((int)uVar16 + 1);
        iVar14 = iVar14 + 1;
        uVar9 = uVar9 + 1;
        puVar15 = puVar15 + 1;
      } while ((longlong)uVar9 < (longlong)(int)uVar18);
    }
    uVar9 = 0;
    iVar14 = 0;
    if (uVar18 != 0) {
      puVar15 = (uint64_t *)(unaff_R15 + 0x80);
      iVar14 = 1;
      uVar10 = uVar9;
      uVar4 = uVar9;
      do {
        pfVar2 = *(float **)(unaff_R15 + 0x80 + (longlong)(iVar14 % (int)uVar18) * 8);
        pfVar3 = (float *)*puVar15;
        uVar16 = uVar4;
        if ((in_stack_00000140[1] - pfVar3[1]) * (*pfVar2 - *pfVar3) -
            (pfVar2[1] - pfVar3[1]) * (*in_stack_00000140 - *pfVar3) <= unaff_XMM14_Da) break;
        uVar4 = (ulonglong)((int)uVar4 + 1);
        iVar14 = iVar14 + 1;
        uVar10 = uVar10 + 1;
        puVar15 = puVar15 + 1;
        uVar16 = uVar9;
      } while ((longlong)uVar10 < (longlong)(ulonglong)bVar1);
LAB_18038eb8f:
      iVar14 = (int)uVar16;
    }
    lVar17 = unaff_RBX;
    if (*(char *)(unaff_RBX + 0x1024) == '\0') {
      lVar17 = *unaff_R12;
    }
    *(uint64_t *)(lVar17 + 8) = *(uint64_t *)(unaff_R15 + 0x60 + (longlong)iVar14 * 8);
    *(uint64_t *)(lVar17 + 0x10) = 0;
    *(int16_t *)(lVar17 + 0x18) = 0;
  }
  if ((int)(in_stack_00000158 ^ 1) <= param_2) {
    lVar17 = (longlong)in_stack_00000128;
    lVar8 = (longlong)param_2 << 5;
    uVar16 = (ulonglong)((param_2 - (in_stack_00000158 ^ 1)) + 1);
    do {
      uVar10 = 0;
      uVar9 = uVar10;
      if (*(byte *)(unaff_RDI + 0xa8) != 0) {
        plVar6 = (longlong *)(unaff_RDI + 0xb0);
        uVar4 = uVar10;
        do {
          if (*plVar6 == *(longlong *)(unaff_RDI + lVar17 * 8)) {
            uVar9 = *(ulonglong *)(unaff_RDI + 0x60 + uVar4 * 8);
            if (uVar9 != 0) goto LAB_18038ed75;
            break;
          }
          uVar4 = uVar4 + 1;
          plVar6 = plVar6 + 1;
        } while ((longlong)uVar4 < (longlong)(ulonglong)*(byte *)(unaff_RDI + 0xa8));
      }
      if ((*(byte *)(unaff_RDI + 0x139) & 4) == 0) {
        plVar6 = *(longlong **)(unaff_RDI + 0xf8);
        uVar4 = (ulonglong)((longlong)*(longlong **)(unaff_RDI + 0x100) + (7 - (longlong)plVar6)) >>
                3;
        if (*(longlong **)(unaff_RDI + 0x100) < plVar6) {
          uVar4 = uVar10;
        }
        if (uVar4 != 0) {
          do {
            if (*plVar6 == *(longlong *)(unaff_RDI + lVar17 * 8)) {
              uVar9 = *(ulonglong *)(*plVar6 + 0x118);
            }
            plVar6 = plVar6 + 1;
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar4);
          goto LAB_18038ecd0;
        }
LAB_18038ecd9:
        lVar11 = 0;
        bVar1 = *(byte *)(unaff_R15 + 0xa8);
        uVar9 = *(ulonglong *)(unaff_RDI + 0x60);
        if (bVar1 != 0) {
          puVar15 = (uint64_t *)(unaff_R15 + 0x80);
          iVar14 = 1;
          do {
            pfVar2 = *(float **)(unaff_R15 + 0x80 + (longlong)(iVar14 % (int)(uint)bVar1) * 8);
            pfVar3 = (float *)*puVar15;
            if ((*pfVar2 - *pfVar3) * (in_stack_00000140[1] - pfVar3[1]) -
                (pfVar2[1] - pfVar3[1]) * (*in_stack_00000140 - *pfVar3) <= unaff_XMM14_Da) {
              uVar9 = *(ulonglong *)(unaff_RDI + 0x60 + lVar11 * 8);
              break;
            }
            iVar14 = iVar14 + 1;
            lVar11 = lVar11 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar11 < (longlong)(ulonglong)bVar1);
        }
      }
      else {
        uVar9 = *(ulonglong *)(unaff_RDI + 0x118);
LAB_18038ecd0:
        if (uVar9 == 0) goto LAB_18038ecd9;
      }
LAB_18038ed75:
      lVar11 = unaff_RBX;
      if (*(char *)(unaff_RBX + 0x1024) == '\0') {
        lVar11 = *unaff_R12;
      }
      plVar6 = (longlong *)(unaff_RDI + lVar17 * 8);
      *(ulonglong *)(lVar8 + 8 + lVar11) = uVar9;
      *(longlong *)(lVar8 + 0x10 + lVar11) = *plVar6;
      *(ushort *)(lVar8 + 0x18 + lVar11) = *(ushort *)(*plVar6 + 0x124) & 0x7fff;
      lVar8 = lVar8 + -0x20;
      unaff_RDI = *plVar6;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}





// 函数: void FUN_18038ec0c(longlong param_1,uint64_t param_2,uint64_t param_3,ulonglong param_4)
void FUN_18038ec0c(longlong param_1,uint64_t param_2,uint64_t param_3,ulonglong param_4)

{
  byte bVar1;
  float *pfVar2;
  float *pfVar3;
  int in_EAX;
  ulonglong uVar4;
  longlong *plVar5;
  longlong unaff_RBX;
  longlong unaff_RDI;
  int iVar6;
  longlong lVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *unaff_R12;
  longlong lVar11;
  longlong lVar12;
  longlong unaff_R15;
  float unaff_XMM14_Da;
  int in_stack_00000128;
  float *in_stack_00000140;
  
  lVar11 = (longlong)in_stack_00000128;
  lVar12 = param_1 << 5;
  uVar9 = (ulonglong)(((int)param_1 - in_EAX) + 1);
  do {
    uVar10 = param_4;
    if (*(byte *)(unaff_RDI + 0xa8) != 0) {
      plVar5 = (longlong *)(unaff_RDI + 0xb0);
      uVar4 = param_4;
      do {
        if (*plVar5 == *(longlong *)(unaff_RDI + lVar11 * 8)) {
          uVar10 = *(ulonglong *)(unaff_RDI + 0x60 + uVar4 * 8);
          if (uVar10 != 0) goto LAB_18038ed75;
          break;
        }
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 1;
      } while ((longlong)uVar4 < (longlong)(ulonglong)*(byte *)(unaff_RDI + 0xa8));
    }
    if ((*(byte *)(unaff_RDI + 0x139) & 4) == 0) {
      plVar5 = *(longlong **)(unaff_RDI + 0xf8);
      uVar4 = (ulonglong)((longlong)*(longlong **)(unaff_RDI + 0x100) + (7 - (longlong)plVar5)) >> 3
      ;
      if (*(longlong **)(unaff_RDI + 0x100) < plVar5) {
        uVar4 = param_4;
      }
      if (uVar4 != 0) {
        do {
          if (*plVar5 == *(longlong *)(unaff_RDI + lVar11 * 8)) {
            uVar10 = *(ulonglong *)(*plVar5 + 0x118);
          }
          plVar5 = plVar5 + 1;
          param_4 = param_4 + 1;
        } while (param_4 != uVar4);
        param_4 = 0;
        goto LAB_18038ecd0;
      }
LAB_18038ecd9:
      bVar1 = *(byte *)(unaff_R15 + 0xa8);
      uVar10 = *(ulonglong *)(unaff_RDI + 0x60);
      if (bVar1 != 0) {
        puVar8 = (uint64_t *)(unaff_R15 + 0x80);
        iVar6 = 1;
        do {
          pfVar2 = *(float **)(unaff_R15 + 0x80 + (longlong)(iVar6 % (int)(uint)bVar1) * 8);
          pfVar3 = (float *)*puVar8;
          if ((*pfVar2 - *pfVar3) * (in_stack_00000140[1] - pfVar3[1]) -
              (pfVar2[1] - pfVar3[1]) * (*in_stack_00000140 - *pfVar3) <= unaff_XMM14_Da) {
            uVar10 = *(ulonglong *)(unaff_RDI + 0x60 + param_4 * 8);
            break;
          }
          iVar6 = iVar6 + 1;
          param_4 = param_4 + 1;
          puVar8 = puVar8 + 1;
        } while ((longlong)param_4 < (longlong)(ulonglong)bVar1);
      }
    }
    else {
      uVar10 = *(ulonglong *)(unaff_RDI + 0x118);
LAB_18038ecd0:
      if (uVar10 == 0) goto LAB_18038ecd9;
    }
LAB_18038ed75:
    lVar7 = unaff_RBX;
    if (*(char *)(unaff_RBX + 0x1024) == '\0') {
      lVar7 = *unaff_R12;
    }
    plVar5 = (longlong *)(unaff_RDI + lVar11 * 8);
    *(ulonglong *)(lVar12 + 8 + lVar7) = uVar10;
    *(longlong *)(lVar12 + 0x10 + lVar7) = *plVar5;
    *(ushort *)(lVar12 + 0x18 + lVar7) = *(ushort *)(*plVar5 + 0x124) & 0x7fff;
    lVar12 = lVar12 + -0x20;
    unaff_RDI = *plVar5;
    uVar9 = uVar9 - 1;
    param_4 = 0;
    if (uVar9 == 0) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18038ee20(void)
void FUN_18038ee20(void)

{
  uint64_t in_R9;
  int8_t auStack_98 [96];
  
                    // WARNING: Subroutine does not return
  memset(auStack_98,0,0x58,in_R9,0xfffffffffffffffe);
}





// 函数: void FUN_18038f150(longlong *param_1)
void FUN_18038f150(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 8;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x100;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}





// 函数: void FUN_18038f170(longlong *param_1)
void FUN_18038f170(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 8;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x100;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}





// 函数: void FUN_18038f190(longlong *param_1)
void FUN_18038f190(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  lVar1 = param_1[4];
  plVar3 = (longlong *)param_1[5];
  while (lVar2 != param_1[6]) {
    lVar2 = lVar2 + 8;
    if (lVar2 == lVar1) {
      plVar3 = plVar3 + 1;
      lVar2 = *plVar3;
      lVar1 = lVar2 + 0x100;
    }
  }
  if (*param_1 != 0) {
    plVar3 = (longlong *)param_1[5];
    while (plVar3 < (longlong *)(param_1[9] + 8)) {
      lVar1 = *plVar3;
      plVar3 = plVar3 + 1;
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



