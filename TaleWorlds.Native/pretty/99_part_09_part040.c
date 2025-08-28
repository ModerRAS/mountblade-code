#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_09_part040.c - 6 个函数
// 函数: void function_5cf6c9(void)
void function_5cf6c9(void)
{
  int iVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  char *pcVar5;
  int *piVar6;
  int64_t lVar7;
  float *pfVar8;
  uint uVar9;
  int64_t *unaff_RBX;
  byte bVar10;
  int iVar11;
  int64_t unaff_R13;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM10_Da;
  if (((*(int *)(*unaff_RBX + 0x1fc) == 3) || (*(int *)((int64_t)unaff_RBX + 0x178c) != 7)) ||
     (*(int *)(*unaff_RBX + 0x1fc) != 1)) goto DataEncryptionEngine;
  if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
    SystemCore_Validator(unaff_RBX + 1);
  }
  if (*(char *)((int64_t)unaff_RBX + 0xd5) != '\0') {
    lVar7 = *unaff_RBX;
    fVar14 = 1.0;
    fVar15 = -100000.0;
    lVar4 = *(int64_t *)(lVar7 + 0x590);
    bVar2 = *(float *)(lVar4 + 0x258c) * *(float *)(lVar4 + 0x259c) +
            *(float *)(lVar4 + 0x2588) * *(float *)(lVar4 + 0x2598) +
            *(float *)(lVar4 + 0x2590) * *(float *)(lVar4 + 0x25a0) <= 0.95;
    bVar10 = (byte)((uint)*(int *)(lVar7 + 0x564) >> 0x1f) ^ 1;
    if (*(int *)(lVar7 + 0x564) < 0) {
      if ((float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc])
          * 1e-05 <= unaff_XMM10_Da) goto DataEncryptionEngine;
      if (bVar2) {
        pcVar5 = (char *)Function_a48d12a5(unaff_RBX + 1);
        if (*pcVar5 != '\0') goto DataEncryptionEngine;
        lVar7 = *unaff_RBX;
      }
LAB_1805cf801:
      iVar11 = 0;
      cVar3 = Function_02036713();
      if ((cVar3 == '\0') && (cVar3 = SystemFunction_0001805d1da0(), cVar3 != '\0')) {
        lVar4 = Function_90ed6f9f();
        iVar11 = *(int *)(lVar4 + 0x678);
      }
      iVar1 = *(int *)(lVar7 + 0x678);
      fVar12 = *(float *)(lVar7 + 0x2fc);
      fVar13 = (float)(iVar11 + -1) * 0.125;
      if (unaff_XMM10_Da <= fVar13) {
        if (fVar14 <= fVar13) {
          fVar13 = fVar14;
        }
      }
      else {
        fVar13 = 0.0;
      }
      uVar9 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      uVar9 = uVar9 << 5 ^ uVar9;
      *(uint *)(unaff_RBX + 0x272) = uVar9;
      fVar13 = (0.5 - fVar12 * 0.5) + fVar13 + fVar13;
      if (fVar13 <= unaff_XMM10_Da) {
        fVar13 = unaff_XMM10_Da;
      }
      fVar13 = (float)(uVar9 - 1) * unaff_XMM7_Da *
               ((SQRT((float)((iVar11 + 1) / (iVar1 + 1))) * 60.0) / ((fVar12 + fVar14) * 30.0) -
               fVar13) + fVar13;
      if (fVar13 <= unaff_XMM10_Da) {
        fVar13 = unaff_XMM10_Da;
      }
      unaff_RBX[0x2e9] =
           *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
           (int64_t)(fVar13 * fVar15);
    }
    else {
      if (bVar2) goto DataEncryptionEngine;
      fVar12 = *(float *)(*(int64_t *)(lVar7 + 0x20) + 0x84) * 0.2;
      pfVar8 = (float *)(*(int64_t *)(lVar7 + 0x20) + 0x234);
      if (*pfVar8 <= fVar12 && fVar12 != *pfVar8) goto LAB_1805cf801;
    }
    *(uint *)((int64_t)unaff_RBX + 0x1794) = *(uint *)((int64_t)unaff_RBX + 0x1794) & 0xfffffc3f;
    if ((bVar10 == 0) && (pcVar5 = (char *)SystemCore_NetworkHandler(unaff_RBX + 1), *pcVar5 == '\0')) {
      if ((char)unaff_RBX[0x2e4] == '\0') {
        uVar9 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
        fVar12 = *(float *)(*unaff_RBX + 0x380);
        uVar9 = uVar9 >> 0x11 ^ uVar9;
        uVar9 = uVar9 << 5 ^ uVar9;
        *(uint *)(unaff_RBX + 0x272) = uVar9;
        fVar14 = (fVar14 - (float)(uVar9 - 1) * unaff_XMM7_Da * fVar12) *
                 *(float *)(*unaff_RBX + 0x37c);
        if (*(float *)(unaff_RBX + 0x28d) <= fVar14) {
          unaff_RBX[0x2e2] =
               *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2e3] * 8) -
               (int64_t)(fVar14 * fVar15);
          *(int8_t *)(unaff_RBX + 0x2e4) = 1;
          goto DataEncryptionEngine;
        }
      }
      else if ((float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2e3] * 8) -
                      unaff_RBX[0x2e2]) * 1e-05 < unaff_XMM10_Da) goto DataEncryptionEngine;
    }
    *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 8;
    goto DataEncryptionEngine;
  }
  if (0.5 < (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
                   unaff_RBX[0x2e9]) * 1e-05) {
    pfVar8 = (float *)SystemCore_ConfigLoader();
    if ((unaff_XMM10_Da != *pfVar8) &&
       ((piVar6 = (int *)SystemCore_Executor(unaff_RBX + 1), *piVar6 == 1 ||
        (piVar6 = (int *)SystemCore_Executor(unaff_RBX + 1), *piVar6 == 2)))) {
      *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 6;
      uVar9 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      uVar9 = uVar9 << 5 ^ uVar9;
      *(uint *)(unaff_RBX + 0x272) = uVar9;
      unaff_RBX[0x2eb] =
           *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ec] * 8) -
           (int64_t)(unaff_XMM6_Da - (float)(uVar9 - 1) * 1.1641532e-05);
    }
    SystemFunction_0001805cef70();
    goto DataEncryptionEngine;
  }
  pfVar8 = (float *)SystemCore_StateManager(unaff_RBX + 1);
  fVar14 = *pfVar8;
  if (fVar14 * -2.25 <=
      (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) - unaff_RBX[0x2e9]) *
      1e-05) {
LAB_1805cfb42:
    if ((*(int *)(*unaff_RBX + 0x564) < 0) ||
       ((lVar7 = *(int64_t *)(*unaff_RBX + 0x20),
        *(float *)(lVar7 + 0x234) <= *(float *)(lVar7 + 0x84) * 0.3 ||
        (lVar7 = *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8),
        lVar4 = unaff_RBX[0x2e9], pfVar8 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1),
        fVar15 = (0.5 - (float)(lVar7 - lVar4) * 1e-05) + fVar14,
        fVar15 < *pfVar8 || fVar15 == *pfVar8)))) goto DataEncryptionEngine;
  }
  else {
    lVar7 = Function_ab0c15dc(unaff_RBX + 1);
    if (lVar7 == 0) {
      fVar15 = 5.0;
    }
    else {
      fVar15 = 2.5;
    }
    pfVar8 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
    if ((*pfVar8 <= fVar15 * fVar14) ||
       (fVar15 = *(float *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x84) * 0.1,
       pfVar8 = (float *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x234),
       fVar15 < *pfVar8 || fVar15 == *pfVar8)) goto LAB_1805cfb42;
  }
  unaff_RBX[0x2e9] =
       *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
       (int64_t)(50000.0 - fVar14 * 100000.0);
DataEncryptionEngine:
  if (*(int *)((int64_t)unaff_RBX + 0x178c) == 7) {
    if (unaff_XMM10_Da <
        (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc]) *
        1e-05) {
      if (*(int *)(*unaff_RBX + 0x1fc) == 1) {
        uVar9 = *(uint *)(unaff_RBX + 2);
        if ((uVar9 & 0x10) == 0) {
          SystemCore_CleanupHandler(unaff_RBX + 1);
          uVar9 = *(uint *)(unaff_RBX + 2);
        }
        if ((uVar9 >> 8 & 1) == 0) {
          function_5d4b40(unaff_RBX + 1);
        }
        if ((*(float *)(unaff_RBX + 0x1c) * 1.5 < *(float *)((int64_t)unaff_RBX + 0xa4)) &&
           (lVar7 = *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8),
           lVar4 = unaff_RBX[0x2e9], pfVar8 = (float *)SystemCore_StateManager(unaff_RBX + 1),
           *pfVar8 * 3.0 < (float)(lVar7 - lVar4) * 1e-05)) {
          SystemFunction_0001805cef70();
        }
      }
    }
    else {
      unaff_RBX[0x2e9] =
           *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
           (int64_t)(*(float *)(*unaff_RBX + 0x300) * 100000.0);
      *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 0;
      if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
        *(uint *)((int64_t)unaff_RBX + 0x158c) =
             *(uint *)((int64_t)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  if (((((int)unaff_RBX[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ee] * 8) - unaff_RBX[0x2ed]) *
        1e-05 < -100.0)) || (9 < *(uint *)((int64_t)unaff_RBX + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_RBX + 0x178c) & 0x1f) & 1) == 0)) {
    RenderingSystem_DrawCallManager();
  }
  return;
}
// 函数: void function_5cf6f4(int param_1)
void function_5cf6f4(int param_1)
{
  int iVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  char *pcVar5;
  int *piVar6;
  int64_t lVar7;
  float *pfVar8;
  uint uVar9;
  int64_t *unaff_RBX;
  byte bVar10;
  int iVar11;
  int64_t unaff_R13;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  if ((*(int *)((int64_t)unaff_RBX + 0x178c) != 7) || (param_1 != 1)) goto DataEncryptionEngine;
  if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
    SystemCore_Validator(unaff_RBX + 1);
  }
  if (*(char *)((int64_t)unaff_RBX + 0xd5) != '\0') {
    lVar7 = *unaff_RBX;
    fVar14 = 1.0;
    fVar15 = -100000.0;
    lVar4 = *(int64_t *)(lVar7 + 0x590);
    bVar2 = *(float *)(lVar4 + 0x258c) * *(float *)(lVar4 + 0x259c) +
            *(float *)(lVar4 + 0x2588) * *(float *)(lVar4 + 0x2598) +
            *(float *)(lVar4 + 0x2590) * *(float *)(lVar4 + 0x25a0) <= 0.95;
    bVar10 = (byte)((uint)*(int *)(lVar7 + 0x564) >> 0x1f) ^ 1;
    if (*(int *)(lVar7 + 0x564) < 0) {
      if ((float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc])
          * unaff_XMM8_Da <= unaff_XMM10_Da) goto DataEncryptionEngine;
      if (bVar2) {
        pcVar5 = (char *)Function_a48d12a5(unaff_RBX + 1);
        if (*pcVar5 != '\0') goto DataEncryptionEngine;
        lVar7 = *unaff_RBX;
      }
LAB_1805cf801:
      iVar11 = 0;
      cVar3 = Function_02036713();
      if ((cVar3 == '\0') && (cVar3 = SystemFunction_0001805d1da0(), cVar3 != '\0')) {
        lVar4 = Function_90ed6f9f();
        iVar11 = *(int *)(lVar4 + 0x678);
      }
      iVar1 = *(int *)(lVar7 + 0x678);
      fVar12 = *(float *)(lVar7 + 0x2fc);
      fVar13 = (float)(iVar11 + -1) * 0.125;
      if (unaff_XMM10_Da <= fVar13) {
        if (fVar14 <= fVar13) {
          fVar13 = fVar14;
        }
      }
      else {
        fVar13 = 0.0;
      }
      uVar9 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      uVar9 = uVar9 << 5 ^ uVar9;
      *(uint *)(unaff_RBX + 0x272) = uVar9;
      fVar13 = (0.5 - fVar12 * 0.5) + fVar13 + fVar13;
      if (fVar13 <= unaff_XMM10_Da) {
        fVar13 = unaff_XMM10_Da;
      }
      fVar13 = (float)(uVar9 - 1) * unaff_XMM7_Da *
               ((SQRT((float)((iVar11 + 1) / (iVar1 + 1))) * 60.0) / ((fVar12 + fVar14) * 30.0) -
               fVar13) + fVar13;
      if (fVar13 <= unaff_XMM10_Da) {
        fVar13 = unaff_XMM10_Da;
      }
      unaff_RBX[0x2e9] =
           *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
           (int64_t)(fVar13 * fVar15);
    }
    else {
      if (bVar2) goto DataEncryptionEngine;
      fVar12 = *(float *)(*(int64_t *)(lVar7 + 0x20) + 0x84) * 0.2;
      pfVar8 = (float *)(*(int64_t *)(lVar7 + 0x20) + 0x234);
      if (*pfVar8 <= fVar12 && fVar12 != *pfVar8) goto LAB_1805cf801;
    }
    *(uint *)((int64_t)unaff_RBX + 0x1794) = *(uint *)((int64_t)unaff_RBX + 0x1794) & 0xfffffc3f;
    if ((bVar10 == 0) && (pcVar5 = (char *)SystemCore_NetworkHandler(unaff_RBX + 1), *pcVar5 == '\0')) {
      if ((char)unaff_RBX[0x2e4] == '\0') {
        uVar9 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
        fVar12 = *(float *)(*unaff_RBX + 0x380);
        uVar9 = uVar9 >> 0x11 ^ uVar9;
        uVar9 = uVar9 << 5 ^ uVar9;
        *(uint *)(unaff_RBX + 0x272) = uVar9;
        fVar14 = (fVar14 - (float)(uVar9 - 1) * unaff_XMM7_Da * fVar12) *
                 *(float *)(*unaff_RBX + 0x37c);
        if (*(float *)(unaff_RBX + 0x28d) <= fVar14) {
          unaff_RBX[0x2e2] =
               *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2e3] * 8) -
               (int64_t)(fVar14 * fVar15);
          *(int8_t *)(unaff_RBX + 0x2e4) = 1;
          goto DataEncryptionEngine;
        }
      }
      else if ((float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2e3] * 8) -
                      unaff_RBX[0x2e2]) * unaff_XMM8_Da < unaff_XMM10_Da) goto DataEncryptionEngine;
    }
    *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 8;
    goto DataEncryptionEngine;
  }
  if (0.5 < (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
                   unaff_RBX[0x2e9]) * unaff_XMM8_Da) {
    pfVar8 = (float *)SystemCore_ConfigLoader();
    if ((unaff_XMM10_Da != *pfVar8) &&
       ((piVar6 = (int *)SystemCore_Executor(unaff_RBX + 1), *piVar6 == 1 ||
        (piVar6 = (int *)SystemCore_Executor(unaff_RBX + 1), *piVar6 == 2)))) {
      *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 6;
      uVar9 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      uVar9 = uVar9 << 5 ^ uVar9;
      *(uint *)(unaff_RBX + 0x272) = uVar9;
      unaff_RBX[0x2eb] =
           *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ec] * 8) -
           (int64_t)(unaff_XMM6_Da - (float)(uVar9 - 1) * 1.1641532e-05);
    }
    SystemFunction_0001805cef70();
    goto DataEncryptionEngine;
  }
  pfVar8 = (float *)SystemCore_StateManager(unaff_RBX + 1);
  fVar14 = *pfVar8;
  if (fVar14 * -2.25 <=
      (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) - unaff_RBX[0x2e9]) *
      unaff_XMM8_Da) {
LAB_1805cfb42:
    if ((*(int *)(*unaff_RBX + 0x564) < 0) ||
       ((lVar7 = *(int64_t *)(*unaff_RBX + 0x20),
        *(float *)(lVar7 + 0x234) <= *(float *)(lVar7 + 0x84) * 0.3 ||
        (lVar7 = *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8),
        lVar4 = unaff_RBX[0x2e9], pfVar8 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1),
        fVar15 = (0.5 - (float)(lVar7 - lVar4) * unaff_XMM8_Da) + fVar14,
        fVar15 < *pfVar8 || fVar15 == *pfVar8)))) goto DataEncryptionEngine;
  }
  else {
    lVar7 = Function_ab0c15dc(unaff_RBX + 1);
    if (lVar7 == 0) {
      fVar15 = 5.0;
    }
    else {
      fVar15 = 2.5;
    }
    pfVar8 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
    if ((*pfVar8 <= fVar15 * fVar14) ||
       (fVar15 = *(float *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x84) * 0.1,
       pfVar8 = (float *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x234),
       fVar15 < *pfVar8 || fVar15 == *pfVar8)) goto LAB_1805cfb42;
  }
  unaff_RBX[0x2e9] =
       *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
       (int64_t)(50000.0 - fVar14 * 100000.0);
DataEncryptionEngine:
  if (*(int *)((int64_t)unaff_RBX + 0x178c) == 7) {
    if (unaff_XMM10_Da <
        (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc]) *
        unaff_XMM8_Da) {
      if (*(int *)(*unaff_RBX + 0x1fc) == 1) {
        uVar9 = *(uint *)(unaff_RBX + 2);
        if ((uVar9 & 0x10) == 0) {
          SystemCore_CleanupHandler(unaff_RBX + 1);
          uVar9 = *(uint *)(unaff_RBX + 2);
        }
        if ((uVar9 >> 8 & 1) == 0) {
          function_5d4b40(unaff_RBX + 1);
        }
        if ((*(float *)(unaff_RBX + 0x1c) * 1.5 < *(float *)((int64_t)unaff_RBX + 0xa4)) &&
           (lVar7 = *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8),
           lVar4 = unaff_RBX[0x2e9], pfVar8 = (float *)SystemCore_StateManager(unaff_RBX + 1),
           *pfVar8 * 3.0 < (float)(lVar7 - lVar4) * unaff_XMM8_Da)) {
          SystemFunction_0001805cef70();
        }
      }
    }
    else {
      unaff_RBX[0x2e9] =
           *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
           (int64_t)(*(float *)(*unaff_RBX + 0x300) * 100000.0);
      *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 0;
      if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
        *(uint *)((int64_t)unaff_RBX + 0x158c) =
             *(uint *)((int64_t)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  if (((((int)unaff_RBX[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ee] * 8) - unaff_RBX[0x2ed]) *
        unaff_XMM8_Da < -100.0)) || (9 < *(uint *)((int64_t)unaff_RBX + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_RBX + 0x178c) & 0x1f) & 1) == 0)) {
    RenderingSystem_DrawCallManager();
  }
  return;
}
// 函数: void function_5cf9f7(void)
void function_5cf9f7(void)
{
  float fVar1;
  int64_t lVar2;
  int64_t in_RAX;
  float *pfVar3;
  int *piVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t *unaff_RBX;
  int64_t unaff_R13;
  float unaff_XMM6_Da;
  float fVar7;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  if (0.5 < (float)(*(int64_t *)(unaff_R13 + in_RAX * 8) - unaff_RBX[0x2e9]) * unaff_XMM8_Da) {
    pfVar3 = (float *)SystemCore_ConfigLoader();
    if (unaff_XMM10_Da != *pfVar3) {
      piVar4 = (int *)SystemCore_Executor(unaff_RBX + 1);
      if (*piVar4 != 1) {
        piVar4 = (int *)SystemCore_Executor(unaff_RBX + 1);
        if (*piVar4 != 2) goto LAB_1805cfaaa;
      }
      *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 6;
      uVar6 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar6 = uVar6 >> 0x11 ^ uVar6;
      uVar6 = uVar6 << 5 ^ uVar6;
      *(uint *)(unaff_RBX + 0x272) = uVar6;
      unaff_RBX[0x2eb] =
           *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ec] * 8) -
           (int64_t)(unaff_XMM6_Da - (float)(uVar6 - 1) * 1.1641532e-05);
    }
LAB_1805cfaaa:
    SystemFunction_0001805cef70();
    goto LAB_1805cfbd7;
  }
  pfVar3 = (float *)SystemCore_StateManager();
  fVar1 = *pfVar3;
  if (fVar1 * -2.25 <=
      (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) - unaff_RBX[0x2e9]) *
      unaff_XMM8_Da) {
LAB_1805cfb42:
    if ((*(int *)(*unaff_RBX + 0x564) < 0) ||
       (lVar5 = *(int64_t *)(*unaff_RBX + 0x20),
       *(float *)(lVar5 + 0x234) <= *(float *)(lVar5 + 0x84) * 0.3)) goto LAB_1805cfbd7;
    lVar5 = *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8);
    lVar2 = unaff_RBX[0x2e9];
    pfVar3 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
    fVar7 = (0.5 - (float)(lVar5 - lVar2) * unaff_XMM8_Da) + fVar1;
    if (fVar7 < *pfVar3 || fVar7 == *pfVar3) goto LAB_1805cfbd7;
  }
  else {
    lVar5 = Function_ab0c15dc(unaff_RBX + 1);
    if (lVar5 == 0) {
      fVar7 = 5.0;
    }
    else {
      fVar7 = 2.5;
    }
    pfVar3 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RBX + 1);
    if ((*pfVar3 <= fVar7 * fVar1) ||
       (fVar7 = *(float *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x84) * 0.1,
       pfVar3 = (float *)(*(int64_t *)(*unaff_RBX + 0x20) + 0x234),
       fVar7 < *pfVar3 || fVar7 == *pfVar3)) goto LAB_1805cfb42;
  }
  unaff_RBX[0x2e9] =
       *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
       (int64_t)(50000.0 - fVar1 * 100000.0);
LAB_1805cfbd7:
  if (*(int *)((int64_t)unaff_RBX + 0x178c) == 7) {
    if (unaff_XMM10_Da <
        (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc]) *
        unaff_XMM8_Da) {
      if (*(int *)(*unaff_RBX + 0x1fc) == 1) {
        uVar6 = *(uint *)(unaff_RBX + 2);
        if ((uVar6 & 0x10) == 0) {
          SystemCore_CleanupHandler(unaff_RBX + 1);
          uVar6 = *(uint *)(unaff_RBX + 2);
        }
        if ((uVar6 >> 8 & 1) == 0) {
          function_5d4b40(unaff_RBX + 1);
        }
        if (*(float *)(unaff_RBX + 0x1c) * 1.5 < *(float *)((int64_t)unaff_RBX + 0xa4)) {
          lVar5 = *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8);
          lVar2 = unaff_RBX[0x2e9];
          pfVar3 = (float *)SystemCore_StateManager(unaff_RBX + 1);
          if (*pfVar3 * 3.0 < (float)(lVar5 - lVar2) * unaff_XMM8_Da) {
            SystemFunction_0001805cef70();
          }
        }
      }
    }
    else {
      unaff_RBX[0x2e9] =
           *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
           (int64_t)(*(float *)(*unaff_RBX + 0x300) * 100000.0);
      *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 0;
      if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
        *(uint *)((int64_t)unaff_RBX + 0x158c) =
             *(uint *)((int64_t)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  if (((((int)unaff_RBX[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ee] * 8) - unaff_RBX[0x2ed]) *
        unaff_XMM8_Da < -100.0)) || (9 < *(uint *)((int64_t)unaff_RBX + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_RBX + 0x178c) & 0x1f) & 1) == 0)) {
    RenderingSystem_DrawCallManager();
  }
  return;
}
// 函数: void DataEncryptionEngine(void)
void DataEncryptionEngine(void)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  float *pfVar4;
  int64_t *unaff_RBX;
  int64_t unaff_R13;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  if (*(int *)((int64_t)unaff_RBX + 0x178c) == 7) {
    if (unaff_XMM10_Da <
        (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc]) *
        unaff_XMM8_Da) {
      if (*(int *)(*unaff_RBX + 0x1fc) == 1) {
        uVar3 = *(uint *)(unaff_RBX + 2);
        if ((uVar3 & 0x10) == 0) {
          SystemCore_CleanupHandler(unaff_RBX + 1);
          uVar3 = *(uint *)(unaff_RBX + 2);
        }
        if ((uVar3 >> 8 & 1) == 0) {
          function_5d4b40(unaff_RBX + 1);
        }
        if (*(float *)(unaff_RBX + 0x1c) * 1.5 < *(float *)((int64_t)unaff_RBX + 0xa4)) {
          lVar1 = *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8);
          lVar2 = unaff_RBX[0x2e9];
          pfVar4 = (float *)SystemCore_StateManager(unaff_RBX + 1);
          if (*pfVar4 * 3.0 < (float)(lVar1 - lVar2) * unaff_XMM8_Da) {
            SystemFunction_0001805cef70();
          }
        }
      }
    }
    else {
      unaff_RBX[0x2e9] =
           *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
           (int64_t)(*(float *)(*unaff_RBX + 0x300) * 100000.0);
      *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 0;
      if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
        *(uint *)((int64_t)unaff_RBX + 0x158c) =
             *(uint *)((int64_t)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  if (((((int)unaff_RBX[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ee] * 8) - unaff_RBX[0x2ed]) *
        unaff_XMM8_Da < -100.0)) || (9 < *(uint *)((int64_t)unaff_RBX + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_RBX + 0x178c) & 0x1f) & 1) == 0)) {
    RenderingSystem_DrawCallManager();
  }
  return;
}
// 函数: void function_5cfbef(void)
void function_5cfbef(void)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  float *pfVar4;
  int64_t *unaff_RBX;
  int64_t unaff_R13;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  if (unaff_XMM10_Da <
      (float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc]) *
      unaff_XMM8_Da) {
    if (*(int *)(*unaff_RBX + 0x1fc) == 1) {
      uVar3 = *(uint *)(unaff_RBX + 2);
      if ((uVar3 & 0x10) == 0) {
        SystemCore_CleanupHandler(unaff_RBX + 1);
        uVar3 = *(uint *)(unaff_RBX + 2);
      }
      if ((uVar3 >> 8 & 1) == 0) {
        function_5d4b40(unaff_RBX + 1);
      }
      if (*(float *)(unaff_RBX + 0x1c) * 1.5 < *(float *)((int64_t)unaff_RBX + 0xa4)) {
        lVar1 = *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8);
        lVar2 = unaff_RBX[0x2e9];
        pfVar4 = (float *)SystemCore_StateManager(unaff_RBX + 1);
        if (*pfVar4 * 3.0 < (float)(lVar1 - lVar2) * unaff_XMM8_Da) {
          SystemFunction_0001805cef70();
        }
      }
    }
  }
  else {
    unaff_RBX[0x2e9] =
         *(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ea] * 8) -
         (int64_t)(*(float *)(*unaff_RBX + 0x300) * 100000.0);
    *(int32_t *)((int64_t)unaff_RBX + 0x178c) = 0;
    if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
      *(uint *)((int64_t)unaff_RBX + 0x158c) =
           *(uint *)((int64_t)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
    }
  }
  if (((((int)unaff_RBX[0x2f1] == 0) ||
       ((float)(*(int64_t *)(unaff_R13 + (int64_t)(int)unaff_RBX[0x2ee] * 8) - unaff_RBX[0x2ed]) *
        unaff_XMM8_Da < -100.0)) || (9 < *(uint *)((int64_t)unaff_RBX + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)unaff_RBX + 0x178c) & 0x1f) & 1) == 0)) {
    RenderingSystem_DrawCallManager();
  }
  return;
}
// 函数: void function_5cfd1d(void)
void function_5cfd1d(void)
{
  int64_t unaff_RBX;
  int64_t unaff_R13;
  float unaff_XMM8_Da;
  if ((((float)(*(int64_t *)(unaff_R13 + (int64_t)*(int *)(unaff_RBX + 6000) * 8) -
               *(int64_t *)(unaff_RBX + 0x1768)) * unaff_XMM8_Da < -100.0) ||
      (9 < *(uint *)(unaff_RBX + 0x178c))) ||
     ((0x241U >> (*(uint *)(unaff_RBX + 0x178c) & 0x1f) & 1) == 0)) {
    RenderingSystem_DrawCallManager();
  }
  return;
}
// WARNING: Possible PIC construction at 0x0001805d0206: Changing call to branch
// WARNING: Globals starting with '_' overlap smaller symbols at the same address