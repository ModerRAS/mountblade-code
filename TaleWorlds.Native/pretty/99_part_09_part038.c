#include "ultra_high_freq_fun_definitions.h"
#define StatusChecker System_StatusChecker  // 状态检查器
#include "TaleWorlds.Native.Split.h"
// 99_part_09_part038.c - 1 个函数
// 函数: void function_5cefa0(int64_t *param_1)
void function_5cefa0(int64_t *param_1)
{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t lVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uVar13 = *(uint *)(param_1 + 2);
  if ((uVar13 & 0x20) == 0) {
    uVar13 = uVar13 | 0x20;
    lVar10 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = lVar10;
    *(uint *)(param_1 + 2) = uVar13;
  }
  else {
    lVar10 = param_1[0x15];
  }
  uVar12 = 0x200;
  if (lVar10 == 0) {
LAB_1805cf0ab:
    bVar3 = false;
  }
  else {
    if ((uVar13 & 0x20) == 0) {
      uVar13 = uVar13 | 0x20;
      param_1[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
      *(uint *)(param_1 + 2) = uVar13;
      lVar10 = param_1[0x15];
    }
    if ((*(byte *)((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar10 + 0xd0)) &
        0x40) == 0) goto LAB_1805cf0ab;
    if ((uVar13 & 0x200) == 0) {
      Function_9c5e4d1b(param_1 + 1);
    }
    if ((char)param_1[0x20] == '\0') goto LAB_1805cf0ab;
    if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
      bVar4 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((int64_t)param_1 + 0x11c) = bVar4;
    }
    else {
      bVar4 = *(byte *)((int64_t)param_1 + 0x11c);
    }
    if (bVar4 != 0) goto LAB_1805cf0ab;
    bVar3 = true;
  }
  if ((int)param_1[0x405] == 0) {
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      Function_9c5e4d1b(param_1 + 1);
    }
    if ((char)param_1[0x20] != '\0') {
      function_5d2570(param_1);
    }
  }
  if (bVar3) {
LAB_1805cf433:
    if (((char)param_1[0x2e4] != '\0') && (piVar7 = (int *)SystemCore_Executor(param_1 + 1), *piVar7 == 1)
       ) {
LAB_1805cf44a:
      param_1[0x2e2] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2e3] * 8);
    }
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      Function_9c5e4d1b(param_1 + 1);
    }
    lVar10 = param_1[0x1d];
    if (lVar10 == 0) {
LAB_1805cf57f:
      if ((!bVar3) && (piVar7 = (int *)SystemCore_Executor(param_1 + 1), *piVar7 == 7)) {
        if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
          Function_9c5e4d1b(param_1 + 1);
        }
        lVar10 = param_1[0x1f];
        if (lVar10 != 0) {
          if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
            Function_9c5e4d1b(param_1 + 1);
            lVar10 = param_1[0x1f];
          }
          if ((((*(uint *)((int64_t)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 +
                          *(int64_t *)(lVar10 + 0xd0)) >> 0x1c & 1) != 0) &&
              (cVar5 = StatusChecker(param_1), cVar5 != '\0')) &&
             (fVar16 = *(float *)(*param_1 + 0x2f8),
             uVar13 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
             uVar13 = uVar13 >> 0x11 ^ uVar13, uVar13 = uVar13 << 5 ^ uVar13,
             *(uint *)(param_1 + 0x272) = uVar13, (float)(uVar13 - 1) * 2.3283064e-10 < fVar16)) {
            *(uint *)(param_1 + 0x27a) = *(uint *)(param_1 + 0x27a) | 0x8000;
            *(int32_t *)((int64_t)param_1 + 0x178c) = 10;
            goto label_5cf6c9;
          }
        }
      }
      iVar6 = function_5d6890(param_1);
      if (iVar6 == 0) goto LAB_1805cf6ac;
      if (iVar6 != 1) {
        if (iVar6 != 2) {
          if (iVar6 == 3) goto LAB_1805cf69e;
          *(int32_t *)((int64_t)param_1 + 0x178c) = 0;
          if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
            *(uint *)((int64_t)param_1 + 0x158c) =
                 *(uint *)((int64_t)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
          }
          goto label_5cf6c9;
        }
LAB_1805cf6a5:
        uVar12 = 0x40;
      }
    }
    else {
      cVar5 = Function_0d42bf9b(*param_1);
      if (cVar5 == '\0') {
        if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
          Function_9c5e4d1b(param_1 + 1);
          lVar10 = param_1[0x1d];
        }
        cVar5 = Function_0d42bf9b(lVar10);
        if (cVar5 == '\0') goto LAB_1805cf57f;
      }
      uVar13 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar13 = uVar13 >> 0x11 ^ uVar13;
      uVar13 = uVar13 << 5 ^ uVar13;
      *(uint *)(param_1 + 0x272) = uVar13;
      lVar10 = *param_1;
      uVar13 = (uVar13 - 1) % 100;
      bVar2 = 0x32 < uVar13;
      iVar6 = CoreSystem_OperationHandler(lVar10 + 0x28,bVar2);
      if (iVar6 == -1) {
        bVar2 = uVar13 < 0x33;
        iVar6 = CoreSystem_OperationHandler(lVar10 + 0x28,bVar2);
        if (iVar6 == -1) goto LAB_1805cf57f;
        if (bVar2) {
          if (!bVar2) {
            if (bVar2 == true) goto LAB_1805cf6a5;
            if (bVar2 == true) goto LAB_1805cf69e;
            uVar12 = 0;
          }
          goto LAB_1805cf6b1;
        }
      }
      else if (bVar2) {
        if (!bVar2) {
          if (bVar2 == true) goto LAB_1805cf6a5;
          if (bVar2 != true) {
            uVar12 = 0;
            goto LAB_1805cf6b1;
          }
LAB_1805cf69e:
          uVar12 = 0x80;
        }
        goto LAB_1805cf6b1;
      }
LAB_1805cf6ac:
      uVar12 = 0x100;
    }
LAB_1805cf6b1:
    *(uint *)((int64_t)param_1 + 0x158c) = *(uint *)((int64_t)param_1 + 0x158c) | uVar12;
  }
  else {
    if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
      SystemCore_Validator(param_1 + 1);
    }
    if ((*(char *)((int64_t)param_1 + 0xd5) != '\0') ||
       ((piVar7 = (int *)SystemCore_Executor(param_1 + 1), *piVar7 != 1 &&
        (piVar7 = (int *)SystemCore_Executor(param_1 + 1), *piVar7 != 2)))) {
LAB_1805cf23d:
      if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
        SystemCore_Validator(param_1 + 1);
      }
      if (*(float *)(param_1 + 0x1b) != 0.0) {
        uVar13 = *(uint *)(param_1 + 2) & 0x8000000;
        if (uVar13 == 0) {
          bVar4 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
          *(byte *)((int64_t)param_1 + 0x11c) = bVar4;
        }
        else {
          bVar4 = *(byte *)((int64_t)param_1 + 0x11c);
        }
        if (bVar4 != 0) {
          if (uVar13 == 0) {
            bVar4 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
            *(byte *)((int64_t)param_1 + 0x11c) = bVar4;
          }
          if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
            Function_9c5e4d1b(param_1 + 1);
            bVar4 = *(byte *)((int64_t)param_1 + 0x11c);
          }
          if (bVar4 != *(byte *)(param_1 + 0x20)) goto LAB_1805cf32d;
        }
        piVar7 = (int *)SystemCore_Executor(param_1 + 1);
        if ((*piVar7 == 2) && (*(int *)(*param_1 + 0x1fc) != 2)) {
          fVar16 = *(float *)(*param_1 + 0x2f4);
          uVar13 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
          uVar13 = uVar13 >> 0x11 ^ uVar13;
          uVar13 = uVar13 << 5 ^ uVar13;
          *(uint *)(param_1 + 0x272) = uVar13;
          if ((float)(uVar13 - 1) * 2.3283064e-10 < fVar16) {
            *(int32_t *)((int64_t)param_1 + 0x178c) = 6;
            goto LAB_1805cf1e8;
          }
        }
      }
LAB_1805cf32d:
      if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
        SystemCore_Validator(param_1 + 1);
      }
      if ((*(float *)(param_1 + 0x1b) == 0.0) ||
         (((piVar7 = (int *)SystemCore_Executor(param_1 + 1), *piVar7 != 1 &&
           (piVar7 = (int *)SystemCore_Executor(param_1 + 1), *piVar7 != 2)) ||
          (fVar16 = *(float *)(*param_1 + 0x2f0),
          uVar13 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
          uVar13 = uVar13 >> 0x11 ^ uVar13, uVar13 = uVar13 << 5 ^ uVar13,
          *(uint *)(param_1 + 0x272) = uVar13, fVar16 <= (float)(uVar13 - 1) * 2.3283064e-10))))
      goto LAB_1805cf433;
      if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
        bVar4 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((int64_t)param_1 + 0x11c) = bVar4;
      }
      else {
        bVar4 = *(byte *)((int64_t)param_1 + 0x11c);
      }
      if (bVar4 != 0) {
        if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
          *(byte *)((int64_t)param_1 + 0x11c) =
               (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
        }
        pcVar8 = (char *)SystemCore_NetworkHandler(param_1 + 1);
        if (*(char *)((int64_t)param_1 + 0x11c) != *pcVar8) goto LAB_1805cf433;
      }
      if (((char)param_1[0x2e4] == '\0') ||
         (piVar7 = (int *)SystemCore_Executor(param_1 + 1), *piVar7 != 1)) {
        Function_a5a3f7f8(param_1);
        goto label_5cf6c9;
      }
      goto LAB_1805cf44a;
    }
    lVar10 = *param_1;
    cVar5 = Function_0b1478c2(lVar10);
    if (cVar5 == '\0') {
      fVar16 = *(float *)(lVar10 + 0x2e0);
    }
    else {
      fVar16 = *(float *)(lVar10 + 0x2dc);
    }
    uVar13 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar13 = uVar13 >> 0x11 ^ uVar13;
    uVar13 = uVar13 << 5 ^ uVar13;
    *(uint *)(param_1 + 0x272) = uVar13;
    if (fVar16 <= (float)(uVar13 - 1) * 2.3283064e-10) goto LAB_1805cf23d;
    if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
      bVar4 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((int64_t)param_1 + 0x11c) = bVar4;
    }
    else {
      bVar4 = *(byte *)((int64_t)param_1 + 0x11c);
    }
    if ((bVar4 != 0) &&
       (((int)param_1[0x295] == 3 || (pcVar8 = (char *)SystemCore_NetworkHandler(param_1 + 1), *pcVar8 == '\0'))
       )) goto LAB_1805cf23d;
    *(int32_t *)((int64_t)param_1 + 0x178c) = 6;
    uVar13 = *(uint *)(param_1 + 0x272);
LAB_1805cf1e8:
    uVar13 = uVar13 << 0xd ^ uVar13;
    uVar13 = uVar13 >> 0x11 ^ uVar13;
    uVar13 = uVar13 << 5 ^ uVar13;
    *(uint *)(param_1 + 0x272) = uVar13;
    param_1[0x2eb] =
         *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ec] * 8) -
         (int64_t)(-60000.004 - (float)(uVar13 - 1) * 1.1641532e-05);
  }
label_5cf6c9:
  if (((*(int *)(*param_1 + 0x1fc) == 3) || (*(int *)((int64_t)param_1 + 0x178c) != 7)) ||
     (*(int *)(*param_1 + 0x1fc) != 1)) goto DataEncryptionEngine;
  if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
    SystemCore_Validator(param_1 + 1);
  }
  if (*(char *)((int64_t)param_1 + 0xd5) != '\0') {
    lVar10 = *param_1;
    fVar16 = 1.0;
    fVar17 = -100000.0;
    lVar9 = *(int64_t *)(lVar10 + 0x590);
    bVar3 = *(float *)(lVar9 + 0x258c) * *(float *)(lVar9 + 0x259c) +
            *(float *)(lVar9 + 0x2588) * *(float *)(lVar9 + 0x2598) +
            *(float *)(lVar9 + 0x2590) * *(float *)(lVar9 + 0x25a0) <= 0.95;
    bVar4 = (byte)((uint)*(int *)(lVar10 + 0x564) >> 0x1f) ^ 1;
    if (*(int *)(lVar10 + 0x564) < 0) {
      if ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2dd] * 8) - param_1[0x2dc]
                 ) * 1e-05 <= 0.0) goto DataEncryptionEngine;
      if (bVar3) {
        pcVar8 = (char *)Function_a48d12a5(param_1 + 1);
        if (*pcVar8 != '\0') goto DataEncryptionEngine;
        lVar10 = *param_1;
      }
LAB_1805cf801:
      iVar6 = 0;
      cVar5 = Function_02036713(param_1);
      if ((cVar5 == '\0') && (cVar5 = Function_f34c506e(), cVar5 != '\0')) {
        lVar9 = Function_90ed6f9f(param_1);
        iVar6 = *(int *)(lVar9 + 0x678);
      }
      iVar1 = *(int *)(lVar10 + 0x678);
      fVar14 = *(float *)(lVar10 + 0x2fc);
      fVar15 = (float)(iVar6 + -1) * 0.125;
      if (0.0 <= fVar15) {
        if (fVar16 <= fVar15) {
          fVar15 = fVar16;
        }
      }
      else {
        fVar15 = 0.0;
      }
      uVar13 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar13 = uVar13 >> 0x11 ^ uVar13;
      uVar13 = uVar13 << 5 ^ uVar13;
      *(uint *)(param_1 + 0x272) = uVar13;
      fVar15 = (0.5 - fVar14 * 0.5) + fVar15 + fVar15;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      fVar15 = (float)(uVar13 - 1) * 2.3283064e-10 *
               ((SQRT((float)((iVar6 + 1) / (iVar1 + 1))) * 60.0) / ((fVar14 + fVar16) * 30.0) -
               fVar15) + fVar15;
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      param_1[0x2e9] =
           *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8) -
           (int64_t)(fVar15 * fVar17);
    }
    else {
      if (bVar3) goto DataEncryptionEngine;
      fVar14 = *(float *)(*(int64_t *)(lVar10 + 0x20) + 0x84) * 0.2;
      pfVar11 = (float *)(*(int64_t *)(lVar10 + 0x20) + 0x234);
      if (*pfVar11 <= fVar14 && fVar14 != *pfVar11) goto LAB_1805cf801;
    }
    *(uint *)((int64_t)param_1 + 0x1794) = *(uint *)((int64_t)param_1 + 0x1794) & 0xfffffc3f;
    if ((bVar4 == 0) && (pcVar8 = (char *)SystemCore_NetworkHandler(param_1 + 1), *pcVar8 == '\0')) {
      if ((char)param_1[0x2e4] == '\0') {
        uVar13 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
        fVar14 = *(float *)(*param_1 + 0x380);
        uVar13 = uVar13 >> 0x11 ^ uVar13;
        uVar13 = uVar13 << 5 ^ uVar13;
        *(uint *)(param_1 + 0x272) = uVar13;
        fVar16 = (fVar16 - (float)(uVar13 - 1) * 2.3283064e-10 * fVar14) *
                 *(float *)(*param_1 + 0x37c);
        if (*(float *)(param_1 + 0x28d) <= fVar16) {
          param_1[0x2e2] =
               *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2e3] * 8) -
               (int64_t)(fVar16 * fVar17);
          *(int8_t *)(param_1 + 0x2e4) = 1;
          goto DataEncryptionEngine;
        }
      }
      else if ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2e3] * 8) -
                      param_1[0x2e2]) * 1e-05 < 0.0) goto DataEncryptionEngine;
    }
    *(int32_t *)((int64_t)param_1 + 0x178c) = 8;
    goto DataEncryptionEngine;
  }
  if (0.5 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8) -
                   param_1[0x2e9]) * 1e-05) {
    pfVar11 = (float *)SystemCore_ConfigLoader();
    if ((*pfVar11 != 0.0) &&
       ((piVar7 = (int *)SystemCore_Executor(param_1 + 1), *piVar7 == 1 ||
        (piVar7 = (int *)SystemCore_Executor(param_1 + 1), *piVar7 == 2)))) {
      *(int32_t *)((int64_t)param_1 + 0x178c) = 6;
      uVar13 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar13 = uVar13 >> 0x11 ^ uVar13;
      uVar13 = uVar13 << 5 ^ uVar13;
      *(uint *)(param_1 + 0x272) = uVar13;
      param_1[0x2eb] =
           *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ec] * 8) -
           (int64_t)(-60000.004 - (float)(uVar13 - 1) * 1.1641532e-05);
    }
    Function_a5a3f7f8(param_1);
    goto DataEncryptionEngine;
  }
  pfVar11 = (float *)SystemCore_StateManager(param_1 + 1);
  fVar16 = *pfVar11;
  if (fVar16 * -2.25 <=
      (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8) - param_1[0x2e9]) *
      1e-05) {
LAB_1805cfb42:
    if ((*(int *)(*param_1 + 0x564) < 0) ||
       ((lVar10 = *(int64_t *)(*param_1 + 0x20),
        *(float *)(lVar10 + 0x234) <= *(float *)(lVar10 + 0x84) * 0.3 ||
        (lVar10 = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8),
        lVar9 = param_1[0x2e9], pfVar11 = (float *)UltraHighFreq_RenderingProcessor1(param_1 + 1),
        fVar17 = (0.5 - (float)(lVar10 - lVar9) * 1e-05) + fVar16,
        fVar17 < *pfVar11 || fVar17 == *pfVar11)))) goto DataEncryptionEngine;
  }
  else {
    lVar10 = Function_ab0c15dc(param_1 + 1);
    if (lVar10 == 0) {
      fVar17 = 5.0;
    }
    else {
      fVar17 = 2.5;
    }
    pfVar11 = (float *)UltraHighFreq_RenderingProcessor1(param_1 + 1);
    if ((*pfVar11 <= fVar17 * fVar16) ||
       (fVar17 = *(float *)(*(int64_t *)(*param_1 + 0x20) + 0x84) * 0.1,
       pfVar11 = (float *)(*(int64_t *)(*param_1 + 0x20) + 0x234),
       fVar17 < *pfVar11 || fVar17 == *pfVar11)) goto LAB_1805cfb42;
  }
  param_1[0x2e9] =
       *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8) -
       (int64_t)(50000.0 - fVar16 * 100000.0);
DataEncryptionEngine:
  if (*(int *)((int64_t)param_1 + 0x178c) == 7) {
    if (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2dd] * 8) -
                     param_1[0x2dc]) * 1e-05) {
      if (*(int *)(*param_1 + 0x1fc) == 1) {
        uVar13 = *(uint *)(param_1 + 2);
        if ((uVar13 & 0x10) == 0) {
          SystemCore_CleanupHandler(param_1 + 1);
          uVar13 = *(uint *)(param_1 + 2);
        }
        if ((uVar13 >> 8 & 1) == 0) {
          function_5d4b40(param_1 + 1);
        }
        if ((*(float *)(param_1 + 0x1c) * 1.5 < *(float *)((int64_t)param_1 + 0xa4)) &&
           (lVar10 = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8),
           lVar9 = param_1[0x2e9], pfVar11 = (float *)SystemCore_StateManager(param_1 + 1),
           *pfVar11 * 3.0 < (float)(lVar10 - lVar9) * 1e-05)) {
          Function_a5a3f7f8(param_1);
        }
      }
    }
    else {
      param_1[0x2e9] =
           *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8) -
           (int64_t)(*(float *)(*param_1 + 0x300) * 100000.0);
      *(int32_t *)((int64_t)param_1 + 0x178c) = 0;
      if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
        *(uint *)((int64_t)param_1 + 0x158c) =
             *(uint *)((int64_t)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  if (((((int)param_1[0x2f1] == 0) ||
       ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) - param_1[0x2ed])
        * 1e-05 < -100.0)) || (9 < *(uint *)((int64_t)param_1 + 0x178c))) ||
     ((0x241U >> (*(uint *)((int64_t)param_1 + 0x178c) & 0x1f) & 1) == 0)) {
    RenderingSystem_DrawCallManager(param_1);
  }
  return;
}