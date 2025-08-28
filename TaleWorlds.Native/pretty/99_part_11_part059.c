#include "TaleWorlds.Native.Split.h"
// 99_part_11_part059.c - 1 个函数
// 函数: void function_7bd127(void)
void function_7bd127(void)
{
  int64_t unaff_RBX;
  *(int32_t *)(unaff_RBX + 0x27c) = 0x42480000;
  return;
}
uint64_t function_7be340(int64_t *param_1)
{
  int64_t lVar1;
  UIComponent_Renderer(param_1 + 4,0);
  param_1[0x4a] = 0;
  *(int8_t *)((int64_t)param_1 + 0x304) = 0;
  *(int32_t *)((int64_t)param_1 + 0x2d4) = 0xffffffff;
  *(int64_t *)param_1[1] = *param_1;
  *(int64_t *)(*param_1 + 8) = param_1[1];
  param_1[1] = (int64_t)param_1;
  *param_1 = (int64_t)param_1;
  lVar1 = *(int64_t *)(param_1[3] + 0x3c20);
  *param_1 = lVar1;
  param_1[1] = param_1[3] + 0x3c20;
  *(int64_t **)(lVar1 + 8) = param_1;
  *(int64_t **)param_1[1] = param_1;
  return 0;
}
uint64_t function_7be3c0(int64_t param_1,uint64_t param_2,int8_t param_3)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3bc8)) {
    do {
      function_7bb100(*(int64_t *)(param_1 + 0x3be0) + (int64_t)iVar3 * 0x28,0,param_3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3bc8));
  }
  puVar4 = (uint64_t *)(param_1 + 0x448);
  lVar5 = 0x10;
  do {
    puVar1 = (uint64_t *)*puVar4;
    while (puVar2 = puVar1, puVar2 != puVar4) {
      puVar1 = (uint64_t *)*puVar2;
      if (puVar2[0x4a] != 0) {
        function_7bebb0(puVar2);
        *(float *)((int64_t)puVar2 + 0x28c) =
             *(float *)(*(int64_t *)puVar4[-1] + 0x3bf0) + *(float *)((int64_t)puVar2 + 0x28c);
        function_7be5a0(puVar2);
        *(float *)((int64_t)puVar2 + 0x2c4) =
             *(float *)(*(int64_t *)puVar4[-1] + 0x3bf0) + *(float *)((int64_t)puVar2 + 0x2c4);
        (**(code **)(puVar2[4] + 0xb0))
                  (puVar2 + 4,(float)*(int *)(puVar2[99] + 0x370) * 0.015625 - 1.0);
        *(float *)((int64_t)puVar2 + 0x25c) =
             *(float *)(*(int64_t *)puVar4[-1] + 0x3bf0) + *(float *)((int64_t)puVar2 + 0x25c);
      }
    }
    puVar4 = puVar4 + 0x6f;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(int *)(param_1 + 0x3bc0) = *(int *)(param_1 + 0x3bc0) + *(int *)(param_1 + 0x3bb4);
  *(float *)(param_1 + 0x3bec) = *(float *)(param_1 + 0x3bbc) + *(float *)(param_1 + 0x3bec);
  return 0;
}
uint64_t function_7be560(int64_t param_1)
{
  (**(code **)(*(int64_t *)(param_1 + 0x20) + 0xb0))
            (param_1 + 0x20,(float)*(int *)(*(int64_t *)(param_1 + 0x318) + 0x370) * 0.015625 - 1.0
            );
  return 0;
}
uint64_t function_7be5a0(int64_t param_1)
{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  float *pfVar6;
  uint64_t uVar7;
  int16_t *puVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  int8_t astack_special_x_8 [32];
  iVar9 = 0;
  if (*(char *)(param_1 + 0x2d0) != '\0') {
    if ((*(char *)(param_1 + 0x304) != '\0') &&
       (*(char *)(*(int64_t *)(param_1 + 0x318) + 0x364) == '\0')) {
      iVar3 = *(int *)(param_1 + 0x2c0);
      lVar4 = (int64_t)iVar3;
      if (iVar3 != 2) {
        fVar11 = *(float *)(param_1 + 0x2c4);
        lVar1 = lVar4 * 3 + 0xa7;
        fVar12 = *(float *)(param_1 + lVar1 * 4);
        pfVar6 = (float *)(param_1 + lVar1 * 4);
        if (fVar12 <= fVar11) {
          iVar3 = iVar3 + 1;
          *(int *)(param_1 + 0x2c0) = iVar3;
          fVar11 = fVar11 - *pfVar6;
          pfVar6 = (float *)(param_1 + lVar4 * 0xc + 0x2a8);
          *(float *)(param_1 + 0x2c4) = fVar11;
          fVar12 = *pfVar6;
        }
        if ((fVar12 <= 0.0) || (fVar12 < fVar11)) {
          fVar11 = pfVar6[1];
        }
        else {
          fVar11 = ((pfVar6[2] - pfVar6[1]) / fVar12) * fVar11 + pfVar6[1];
        }
        fVar12 = fVar11;
        if ((iVar3 == 1) &&
           (fVar12 = *(float *)(param_1 + 0x2c8), *(float *)(param_1 + 0x2c8) <= fVar11)) {
          fVar12 = fVar11;
        }
        *(int32_t *)(param_1 + 0x2c0) = 2;
        fVar11 = *(float *)(param_1 + 700) - *(float *)(param_1 + 0x2b8);
        if ((fVar11 == 0.0) || (*(float *)(param_1 + 0x2b4) == 0.0)) {
          *(int32_t *)(param_1 + 0x2c4) = 0;
        }
        else {
          *(float *)(param_1 + 0x2c4) =
               ((fVar12 - *(float *)(param_1 + 0x2b8)) * *(float *)(param_1 + 0x2b4)) / fVar11;
        }
      }
    }
    uVar10 = *(uint *)(param_1 + 0x2c0);
    uVar7 = (uint64_t)(int)uVar10;
    uVar5 = uVar10;
    if (*(float *)(param_1 + 0x29c + uVar7 * 0xc) <= *(float *)(param_1 + 0x2c4)) {
      do {
        uVar5 = (uint)uVar7;
        if (2 < (int)uVar10) break;
        if (((uVar10 == 1) && (0.0 < *(float *)(param_1 + 0x2c8))) &&
           ((*(char *)(param_1 + 0x304) == '\0' ||
            (*(char *)(*(int64_t *)(param_1 + 0x318) + 0x364) != '\0')))) {
          *(int32_t *)(param_1 + 0x2c4) = *(int32_t *)(param_1 + 0x2a8);
          break;
        }
        uVar5 = uVar10 + 1;
        uVar7 = (uint64_t)uVar5;
        fVar11 = *(float *)(param_1 + 0x2c4) -
                 *(float *)(param_1 + 0x29c + (int64_t)(int)uVar10 * 0xc);
        *(uint *)(param_1 + 0x2c0) = uVar5;
        *(float *)(param_1 + 0x2c4) = fVar11;
        uVar10 = uVar5;
      } while (*(float *)(param_1 + 0x29c + (int64_t)(int)uVar5 * 0xc) <= fVar11);
    }
    if (2 < (int)uVar5) {
      *(int8_t *)(param_1 + 0x2d0) = 0;
    }
  }
  bVar2 = false;
  if (0 < (int)*(uint *)(param_1 + 0x2ec)) {
    puVar8 = *(int16_t **)(param_1 + 0x2f0);
    uVar7 = (uint64_t)*(uint *)(param_1 + 0x2ec);
    do {
      fVar11 = 1.0;
      if (puVar8[2] != 3) goto LAB_1807be904;
      switch(*puVar8) {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 0x81:
      case 0x87:
      case 0x8a:
      case 0x8b:
        goto LAB_1807be904;
      }
      switch(puVar8[1]) {
      case 0:
      case 1:
        fVar11 = 1.0;
        goto LAB_1807be8e7;
      case 2:
        uVar10 = (uint)*(byte *)(param_1 + 0x2e8);
        break;
      case 3:
        uVar10 = (uint)*(byte *)(param_1 + 0x2e0);
        break;
      default:
        goto LAB_1807be8e7;
      case 0x81:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
        break;
      case 0x87:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar10 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
      }
      fVar11 = (float)(int)uVar10 * 0.0078125;
LAB_1807be8e7:
      if (puVar8[3] != 1) {
        iVar9 = iVar9 + (int)((float)*(int *)(puVar8 + 4) * fVar11);
      }
      bVar2 = true;
LAB_1807be904:
      puVar8 = puVar8 + 6;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if (bVar2) {
      *(float *)(param_1 + 0x2fc) = (float)iVar9 * 1.5258789e-05;
    }
  }
  if (*(float *)(param_1 + 600) <= *(float *)(param_1 + 0x25c)) {
    sinf((*(float *)(param_1 + 0x25c) - *(float *)(param_1 + 600)) * 0.0062831854 *
         *(float *)(param_1 + 0x260));
  }
  (**(code **)(**(int64_t **)(param_1 + 0x2d8) + 0x40))
            (*(int64_t **)(param_1 + 0x2d8),astack_special_x_8,0);
  powf();
  function_757470(param_1 + 0x20);
  return 0;
}
uint64_t function_7bebb0(uint64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  float *pfVar12;
  ushort *puVar13;
  int iVar14;
  uint64_t uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  char acStackX_8 [8];
  iVar14 = 0;
  fVar18 = 1.0;
  fVar19 = 1.0;
  uVar11 = param_1;
  if (*(char *)(param_1 + 0x298) != '\0') {
    cVar3 = *(char *)(param_1 + 0x304);
    if ((cVar3 != '\0') && (*(char *)(*(int64_t *)(param_1 + 0x318) + 0x364) == '\0')) {
      iVar8 = *(int *)(param_1 + 0x288);
      lVar10 = (int64_t)iVar8;
      if (iVar8 != 2) {
        fVar19 = *(float *)(param_1 + 0x28c);
        lVar2 = lVar10 + 0x33;
        fVar16 = *(float *)(param_1 + lVar2 * 0xc);
        pfVar12 = (float *)(param_1 + lVar2 * 0xc);
        if (fVar16 <= fVar19) {
          iVar8 = iVar8 + 1;
          *(int *)(param_1 + 0x288) = iVar8;
          fVar19 = fVar19 - *pfVar12;
          pfVar12 = (float *)(param_1 + (lVar10 + 0x34) * 0xc);
          *(float *)(param_1 + 0x28c) = fVar19;
          fVar16 = *pfVar12;
        }
        if ((fVar16 <= 0.0) || (fVar16 < fVar19)) {
          fVar19 = pfVar12[1];
        }
        else {
          fVar19 = ((pfVar12[2] - pfVar12[1]) / fVar16) * fVar19 + pfVar12[1];
        }
        fVar16 = fVar19;
        if (iVar8 == 0) {
          if (-96.0 < fVar19) {
            fVar19 = (float)log10f(1.0 - fVar19 * -0.010416667);
            fVar16 = fVar19 * 20.0;
          }
        }
        else if ((iVar8 == 1) &&
                (fVar16 = *(float *)(param_1 + 0x290), *(float *)(param_1 + 0x290) <= fVar19)) {
          fVar16 = fVar19;
        }
        *(int32_t *)(param_1 + 0x288) = 2;
        fVar19 = *(float *)(param_1 + 0x284) - *(float *)(param_1 + 0x280);
        if ((fVar19 == 0.0) || (*(float *)(param_1 + 0x27c) == 0.0)) {
          *(int32_t *)(param_1 + 0x28c) = 0;
        }
        else {
          *(float *)(param_1 + 0x28c) =
               ((fVar16 - *(float *)(param_1 + 0x280)) * *(float *)(param_1 + 0x27c)) / fVar19;
        }
      }
    }
    uVar9 = *(uint *)(param_1 + 0x288);
    uVar11 = (uint64_t)(int)uVar9;
    fVar19 = *(float *)(param_1 + 0x28c);
    if (*(float *)(param_1 + (uVar11 + 0x33) * 0xc) <= fVar19) {
      do {
        if (2 < (int)uVar9) break;
        if ((uVar9 == 1) &&
           ((cVar3 == '\0' || (*(char *)(*(int64_t *)(param_1 + 0x318) + 0x364) != '\0')))) {
          fVar19 = *(float *)(param_1 + 0x270);
          *(float *)(param_1 + 0x28c) = fVar19;
          break;
        }
        uVar1 = uVar9 + 1;
        uVar11 = (uint64_t)uVar1;
        fVar19 = *(float *)(param_1 + 0x28c) -
                 *(float *)(param_1 + ((int64_t)(int)uVar9 + 0x33) * 0xc);
        *(uint *)(param_1 + 0x288) = uVar1;
        *(float *)(param_1 + 0x28c) = fVar19;
        uVar9 = uVar1;
      } while (*(float *)(param_1 + ((int64_t)(int)uVar1 + 0x33) * 0xc) <= fVar19);
    }
    iVar8 = (int)uVar11;
    if (2 < iVar8) goto LAB_1807bedc7;
    lVar10 = (int64_t)iVar8 + 0x33;
    fVar16 = *(float *)(param_1 + lVar10 * 0xc);
    fVar17 = *(float *)(param_1 + 4 + lVar10 * 0xc);
    if (0.0 < fVar16) {
      fVar17 = ((*(float *)(param_1 + 8 + lVar10 * 0xc) - fVar17) / fVar16) * fVar19 + fVar17;
    }
    if (iVar8 == 1) {
      fVar19 = *(float *)(param_1 + 0x290);
      if (*(float *)(param_1 + 0x290) <= fVar17) {
        fVar19 = fVar17;
      }
    }
    else {
      fVar19 = fVar17;
      if (iVar8 == 0) {
        fVar19 = 1.0 - fVar17 * -0.010416667;
        goto LAB_1807bee43;
      }
    }
    uVar9 = 0xc0 - (int)(fVar19 * -2.0);
    uVar11 = (uint64_t)uVar9;
    fVar19 = *(float *)((int64_t)(int)uVar9 * 4 + 0x180be5430);
  }
LAB_1807bee43:
  bVar6 = false;
  if (0 < (int)*(uint *)(param_1 + 0x2ec)) {
    puVar13 = *(ushort **)(param_1 + 0x2f0);
    uVar15 = (uint64_t)*(uint *)(param_1 + 0x2ec);
    do {
      fVar16 = 1.0;
      if (puVar13[2] != 1) goto LAB_1807bef58;
      uVar5 = *puVar13;
      if (uVar5 < 0x8c) {
        uVar11 = (uint64_t)*(uint *)(&memory_allocator_3532_ptr + (uint64_t)(byte)(&memory_allocator_3544_ptr)[uVar5] * 4)
                 + 0x180000000;
        switch(uVar5) {
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0x81:
        case 0x87:
        case 0x8a:
        case 0x8b:
          goto LAB_1807bef58;
        }
      }
      uVar5 = puVar13[1];
      if (0x8b < uVar5) goto LAB_1807bef3c;
      uVar11 = (uint64_t)*(uint *)(&memory_allocator_3684_ptr + (uint64_t)(byte)(&memory_allocator_3716_ptr)[uVar5] * 4) +
               0x180000000;
      switch(uVar5) {
      case 0:
      case 1:
        fVar16 = 1.0;
        goto LAB_1807bef3c;
      case 2:
        uVar9 = (uint)*(byte *)(param_1 + 0x2e8);
        break;
      case 3:
        uVar9 = (uint)*(byte *)(param_1 + 0x2e0);
        break;
      default:
        goto LAB_1807bef3c;
      case 0x81:
        uVar9 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x368);
        break;
      case 0x87:
        uVar9 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
        break;
      case 0x8a:
        uVar9 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x370);
        break;
      case 0x8b:
        uVar9 = *(uint *)(*(int64_t *)(param_1 + 0x318) + 0x374);
      }
      fVar16 = (float)(int)uVar9 * 0.0078125;
LAB_1807bef3c:
      if (puVar13[3] != 1) {
        iVar14 = iVar14 + (int)((float)*(int *)(puVar13 + 4) * fVar16);
      }
      bVar6 = true;
LAB_1807bef58:
      puVar13 = puVar13 + 6;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    if (bVar6) {
      fVar16 = (float)powf(uVar11,(float)iVar14 * -1.5258789e-06 * 0.05);
      *(float *)(param_1 + 0x2f8) = 1.0 - fVar16;
    }
  }
  bVar4 = *(byte *)(param_1 + 0x2e8);
  iVar14 = *(int *)(*(int64_t *)(param_1 + 0x318) + 0x36c);
  iVar8 = *(int *)(*(int64_t *)(param_1 + 0x318) + 0x374);
  if (*(float *)(param_1 + 600) <= *(float *)(param_1 + 0x25c)) {
    fVar18 = (float)sinf((*(float *)(param_1 + 0x25c) - *(float *)(param_1 + 600)) * 0.0062831854 *
                         *(float *)(param_1 + 0x260));
    fVar18 = fVar18 * *(float *)(param_1 + 0x2f8) + 1.0;
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    if (1.0 <= fVar18) {
      fVar18 = 1.0;
    }
  }
  if ((*(int *)(param_1 + 0x288) != 2) ||
     (0.0009765625 <=
      (float)((uint)bVar4 * (uint)bVar4) * 2.3832943e-13 * fVar19 * (float)(iVar14 * iVar14) *
      (float)(iVar8 * iVar8) * *(float *)(param_1 + 0x310) * fVar18)) {
    (**(code **)(*(int64_t *)(param_1 + 0x20) + 0x20))(param_1 + 0x20);
    acStackX_8[0] = '\x01';
    (**(code **)(*(int64_t *)(param_1 + 0x20) + 0xa8))(param_1 + 0x20,acStackX_8);
    if (acStackX_8[0] != '\0') {
      return 0;
    }
  }
LAB_1807bedc7:
  uVar7 = function_7be340(param_1);
  return uVar7;
}
uint64_t function_7bee4c(uint64_t param_1,uint64_t param_2,char param_3)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint in_EAX;
  uint64_t uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  ushort *puVar5;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  char local_var_90;
  if (0 < (int)in_EAX) {
    puVar5 = *(ushort **)(unaff_RDI + 0x2f0);
    uVar6 = (uint64_t)in_EAX;
    do {
      if (puVar5[2] == 1) {
        if (*puVar5 < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_RBP + 0x7bf0dc +
                                 (uint64_t)*(byte *)((uint64_t)*puVar5 + 0x7bf0e8 + unaff_RBP) * 4
                                 ) + unaff_RBP);
// WARNING: Could not recover jumptable at 0x0001807bee9c. Too many branches
// WARNING: Treating indirect jump as call
          uVar4 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar4;
        }
        if (puVar5[1] < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_RBP + 0x7bf174 +
                                 (uint64_t)*(byte *)((uint64_t)puVar5[1] + 0x7bf194 + unaff_RBP) *
                                 4) + unaff_RBP);
// WARNING: Could not recover jumptable at 0x0001807beed2. Too many branches
// WARNING: Treating indirect jump as call
          uVar4 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar4;
        }
        if (puVar5[3] != 1) {
          unaff_ESI = unaff_ESI + (int)((float)*(int *)(puVar5 + 4) * unaff_XMM7_Da);
        }
        param_3 = '\x01';
      }
      puVar5 = puVar5 + 6;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (param_3 != '\0') {
      fVar7 = (float)powf(param_1,(float)unaff_ESI * -1.5258789e-06 * 0.05,0x3c000000);
      *(float *)(unaff_RDI + 0x2f8) = unaff_XMM7_Da - fVar7;
    }
  }
  bVar1 = *(byte *)(unaff_RDI + 0x2e8);
  iVar2 = *(int *)(*(int64_t *)(unaff_RDI + 0x318) + 0x36c);
  iVar3 = *(int *)(*(int64_t *)(unaff_RDI + 0x318) + 0x374);
  fVar7 = unaff_XMM7_Da;
  if (*(float *)(unaff_RDI + 600) <= *(float *)(unaff_RDI + 0x25c)) {
    fVar7 = (float)sinf((*(float *)(unaff_RDI + 0x25c) - *(float *)(unaff_RDI + 600)) * 0.0062831854
                        * *(float *)(unaff_RDI + 0x260));
    fVar7 = fVar7 * *(float *)(unaff_RDI + 0x2f8) + unaff_XMM7_Da;
    if (fVar7 <= unaff_XMM11_Da) {
      fVar7 = unaff_XMM11_Da;
    }
    if (unaff_XMM7_Da <= fVar7) {
      fVar7 = unaff_XMM7_Da;
    }
  }
  if ((*(int *)(unaff_RDI + 0x288) != 2) ||
     (0.0009765625 <=
      (float)((uint)bVar1 * (uint)bVar1) * 2.3832943e-13 * unaff_XMM10_Da * (float)(iVar2 * iVar2) *
      (float)(iVar3 * iVar3) * *(float *)(unaff_RDI + 0x310) * fVar7)) {
    (**(code **)(*(int64_t *)(unaff_RDI + 0x20) + 0x20))(unaff_RDI + 0x20);
    local_var_90 = '\x01';
    (**(code **)(*(int64_t *)(unaff_RDI + 0x20) + 0xa8))(unaff_RDI + 0x20,&local_buffer_00000090);
    if (local_var_90 != '\0') {
      return 0;
    }
  }
  uVar4 = function_7be340();
  return uVar4;
}
uint64_t function_7bee9e(uint64_t param_1,float param_2)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint64_t uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  ushort *puVar7;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint64_t uVar8;
  float fVar9;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar10;
  float unaff_XMM11_Da;
  char local_var_90;
  if ((int)param_1 == 0) {
    fVar10 = unaff_XMM7_Da - param_2 * unaff_XMM6_Da;
  }
  else {
    uVar6 = 0xc0 - (int)(param_2 * -2.0);
    param_1 = (uint64_t)uVar6;
    fVar10 = *(float *)(unaff_RBP + 0xbe5430 + (int64_t)(int)uVar6 * 4);
  }
  bVar4 = false;
  if (0 < (int)*(uint *)(unaff_RDI + 0x2ec)) {
    puVar7 = *(ushort **)(unaff_RDI + 0x2f0);
    uVar8 = (uint64_t)*(uint *)(unaff_RDI + 0x2ec);
    do {
      if (puVar7[2] == 1) {
        if (*puVar7 < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_RBP + 0x7bf0dc +
                                 (uint64_t)*(byte *)((uint64_t)*puVar7 + 0x7bf0e8 + unaff_RBP) * 4
                                 ) + unaff_RBP);
// WARNING: Could not recover jumptable at 0x0001807bee9c. Too many branches
// WARNING: Treating indirect jump as call
          uVar5 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar5;
        }
        if (puVar7[1] < 0x8c) {
          UNRECOVERED_JUMPTABLE_00 =
               (code *)((uint64_t)
                        *(uint *)(unaff_RBP + 0x7bf174 +
                                 (uint64_t)*(byte *)((uint64_t)puVar7[1] + 0x7bf194 + unaff_RBP) *
                                 4) + unaff_RBP);
// WARNING: Could not recover jumptable at 0x0001807beed2. Too many branches
// WARNING: Treating indirect jump as call
          uVar5 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
          return uVar5;
        }
        if (puVar7[3] != 1) {
          unaff_ESI = unaff_ESI + (int)((float)*(int *)(puVar7 + 4) * unaff_XMM7_Da);
        }
        bVar4 = true;
      }
      puVar7 = puVar7 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if (bVar4) {
      fVar9 = (float)powf(param_1,(float)unaff_ESI * -1.5258789e-06 * 0.05,0x3c000000);
      *(float *)(unaff_RDI + 0x2f8) = unaff_XMM7_Da - fVar9;
    }
  }
  bVar1 = *(byte *)(unaff_RDI + 0x2e8);
  iVar2 = *(int *)(*(int64_t *)(unaff_RDI + 0x318) + 0x36c);
  iVar3 = *(int *)(*(int64_t *)(unaff_RDI + 0x318) + 0x374);
  fVar9 = unaff_XMM7_Da;
  if (*(float *)(unaff_RDI + 600) <= *(float *)(unaff_RDI + 0x25c)) {
    fVar9 = (float)sinf((*(float *)(unaff_RDI + 0x25c) - *(float *)(unaff_RDI + 600)) * 0.0062831854
                        * *(float *)(unaff_RDI + 0x260));
    fVar9 = fVar9 * *(float *)(unaff_RDI + 0x2f8) + unaff_XMM7_Da;
    if (fVar9 <= unaff_XMM11_Da) {
      fVar9 = unaff_XMM11_Da;
    }
    if (unaff_XMM7_Da <= fVar9) {
      fVar9 = unaff_XMM7_Da;
    }
  }
  if ((*(int *)(unaff_RDI + 0x288) != 2) ||
     (0.0009765625 <=
      (float)((uint)bVar1 * (uint)bVar1) * 2.3832943e-13 * fVar10 * (float)(iVar2 * iVar2) *
      (float)(iVar3 * iVar3) * *(float *)(unaff_RDI + 0x310) * fVar9)) {
    (**(code **)(*(int64_t *)(unaff_RDI + 0x20) + 0x20))(unaff_RDI + 0x20);
    local_var_90 = '\x01';
    (**(code **)(*(int64_t *)(unaff_RDI + 0x20) + 0xa8))(unaff_RDI + 0x20,&local_buffer_00000090);
    if (local_var_90 != '\0') {
      return 0;
    }
  }
  uVar5 = function_7be340();
  return uVar5;
}
uint64_t function_7beeb1(uint64_t param_1,float param_2,uint64_t param_3,int64_t param_4)
{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  ushort *in_RDX;
  ushort *puVar6;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  float fVar7;
  float unaff_XMM7_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  char local_var_90;
  do {
    if (in_RDX[1] < 0x8c) {
      UNRECOVERED_JUMPTABLE_00 =
           (code *)((uint64_t)
                    *(uint *)(unaff_RBP + 0x7bf174 +
                             (uint64_t)*(byte *)((uint64_t)in_RDX[1] + 0x7bf194 + unaff_RBP) * 4)
                   + unaff_RBP);
// WARNING: Could not recover jumptable at 0x0001807beed2. Too many branches
// WARNING: Treating indirect jump as call
      uVar5 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
      return uVar5;
    }
    puVar6 = in_RDX;
    if (in_RDX[3] != 1) {
      unaff_ESI = unaff_ESI + (int)((float)*(int *)(in_RDX + 4) * param_2);
    }
    do {
      in_RDX = puVar6 + 6;
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        fVar7 = (float)powf(param_1,(float)unaff_ESI * -1.5258789e-06 * 0.05);
        *(float *)(unaff_RDI + 0x2f8) = unaff_XMM7_Da - fVar7;
        bVar2 = *(byte *)(unaff_RDI + 0x2e8);
        iVar3 = *(int *)(*(int64_t *)(unaff_RDI + 0x318) + 0x36c);
        iVar4 = *(int *)(*(int64_t *)(unaff_RDI + 0x318) + 0x374);
        fVar7 = unaff_XMM7_Da;
        if (*(float *)(unaff_RDI + 600) <= *(float *)(unaff_RDI + 0x25c)) {
          fVar7 = (float)sinf((*(float *)(unaff_RDI + 0x25c) - *(float *)(unaff_RDI + 600)) *
                              0.0062831854 * *(float *)(unaff_RDI + 0x260));
          fVar7 = fVar7 * *(float *)(unaff_RDI + 0x2f8) + unaff_XMM7_Da;
          if (fVar7 <= unaff_XMM11_Da) {
            fVar7 = unaff_XMM11_Da;
          }
          if (unaff_XMM7_Da <= fVar7) {
            fVar7 = unaff_XMM7_Da;
          }
        }
        if ((*(int *)(unaff_RDI + 0x288) != 2) ||
           (0.0009765625 <=
            (float)((uint)bVar2 * (uint)bVar2) * 2.3832943e-13 * unaff_XMM10_Da *
            (float)(iVar3 * iVar3) * (float)(iVar4 * iVar4) * *(float *)(unaff_RDI + 0x310) * fVar7)
           ) {
          (**(code **)(*(int64_t *)(unaff_RDI + 0x20) + 0x20))(unaff_RDI + 0x20);
          local_var_90 = '\x01';
          (**(code **)(*(int64_t *)(unaff_RDI + 0x20) + 0xa8))(unaff_RDI + 0x20,&local_buffer_00000090);
          if (local_var_90 != '\0') {
            return 0;
          }
        }
        uVar5 = function_7be340();
        return uVar5;
      }
      puVar1 = puVar6 + 8;
      puVar6 = in_RDX;
    } while (*puVar1 != 1);
    param_2 = unaff_XMM7_Da;
  } while (0x8b < *in_RDX);
  UNRECOVERED_JUMPTABLE_00 =
       (code *)((uint64_t)
                *(uint *)(unaff_RBP + 0x7bf0dc +
                         (uint64_t)*(byte *)((uint64_t)*in_RDX + 0x7bf0e8 + unaff_RBP) * 4) +
               unaff_RBP);
// WARNING: Could not recover jumptable at 0x0001807bee9c. Too many branches
// WARNING: Treating indirect jump as call
  uVar5 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
  return uVar5;
}
uint64_t function_7bf058(void)
{
  uint64_t uVar1;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float unaff_XMM6_Da;
  char local_var_90;
  if (0.0009765625 <= unaff_XMM6_Da) {
    (**(code **)(*(int64_t *)(unaff_RDI + 0x20) + 0x20))
              (unaff_RDI + 0x20,unaff_XMM6_Da * *(float *)(unaff_RSI + 0x358),0);
    local_var_90 = '\x01';
    (**(code **)(*(int64_t *)(unaff_RDI + 0x20) + 0xa8))(unaff_RDI + 0x20,&local_buffer_00000090);
    if (local_var_90 != '\0') {
      return 0;
    }
  }
  uVar1 = function_7be340();
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address