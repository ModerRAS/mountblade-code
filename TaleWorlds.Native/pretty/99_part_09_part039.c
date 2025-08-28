#include "TaleWorlds.Native.Split.h"

// 99_part_09_part039.c - 2 个函数

// 函数: void FUN_1805cefb9(longlong param_1,uint64_t param_2,uint param_3)
void FUN_1805cefb9(longlong param_1,uint64_t param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong in_RAX;
  int *piVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  longlong *unaff_RBX;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t unaff_R12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R12;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM10_Dd;
  if ((param_3 & 0x20) == 0) {
    param_3 = param_3 | 0x20;
    lVar10 = *(longlong *)(*(longlong *)(**(longlong **)(param_1 + 8) + 0x8f8) + 0x9e8);
    *(longlong *)(param_1 + 0xa8) = lVar10;
    *(uint *)(param_1 + 0x10) = param_3;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0xa8);
  }
  uVar13 = 0x200;
  if (lVar10 == 0) {
LAB_1805cf0ab:
    bVar3 = false;
  }
  else {
    if ((param_3 & 0x20) == 0) {
      param_3 = param_3 | 0x20;
      unaff_RBX[0x15] = *(longlong *)(*(longlong *)(**(longlong **)(param_1 + 8) + 0x8f8) + 0x9e8);
      *(uint *)(unaff_RBX + 2) = param_3;
      lVar10 = unaff_RBX[0x15];
    }
    if ((*(byte *)((longlong)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar10 + 0xd0)) &
        0x40) == 0) goto LAB_1805cf0ab;
    if ((param_3 & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RBX + 1);
    }
    if ((char)unaff_RBX[0x20] == '\0') goto LAB_1805cf0ab;
    if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
      bVar4 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RBX + 0x11c) = bVar4;
    }
    else {
      bVar4 = *(byte *)((longlong)unaff_RBX + 0x11c);
    }
    if (bVar4 != 0) goto LAB_1805cf0ab;
    bVar3 = true;
  }
  if ((int)unaff_RBX[0x405] == 0) {
    if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RBX + 1);
    }
    if ((char)unaff_RBX[0x20] != '\0') {
      FUN_1805d2570();
    }
  }
  if (bVar3) {
LAB_1805cf433:
    if (((char)unaff_RBX[0x2e4] != '\0') &&
       (piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 == 1)) {
LAB_1805cf44a:
      unaff_RBX[0x2e2] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2e3] * 8);
    }
    if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RBX + 1);
    }
    lVar10 = unaff_RBX[0x1d];
    if (lVar10 == 0) {
LAB_1805cf57f:
      if ((!bVar3) && (piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 == 7)) {
        if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(unaff_RBX + 1);
        }
        lVar10 = unaff_RBX[0x1f];
        if (lVar10 != 0) {
          if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
            func_0x0001805d4cd0(unaff_RBX + 1);
            lVar10 = unaff_RBX[0x1f];
          }
          if ((((*(uint *)((longlong)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 +
                          *(longlong *)(lVar10 + 0xd0)) >> 0x1c & 1) != 0) &&
              (cVar5 = FUN_1805b7ac0(), cVar5 != '\0')) &&
             (fVar16 = *(float *)(*unaff_RBX + 0x2f8),
             uVar12 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272),
             uVar12 = uVar12 >> 0x11 ^ uVar12, uVar12 = uVar12 << 5 ^ uVar12,
             *(uint *)(unaff_RBX + 0x272) = uVar12, (float)(uVar12 - 1) * 2.3283064e-10 < fVar16)) {
            *(uint *)(unaff_RBX + 0x27a) = *(uint *)(unaff_RBX + 0x27a) | 0x8000;
            *(int32_t *)((longlong)unaff_RBX + 0x178c) = 10;
            goto FUN_1805cf6c9;
          }
        }
      }
      iVar6 = FUN_1805d6890();
      if (iVar6 == 0) goto LAB_1805cf6ac;
      if (iVar6 != 1) {
        if (iVar6 != 2) {
          if (iVar6 == 3) goto LAB_1805cf69e;
          *(int32_t *)((longlong)unaff_RBX + 0x178c) = 0;
          if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
            *(uint *)((longlong)unaff_RBX + 0x158c) =
                 *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
          }
          goto FUN_1805cf6c9;
        }
LAB_1805cf6a5:
        uVar13 = 0x40;
      }
    }
    else {
      cVar5 = func_0x000180522f60(*unaff_RBX);
      if (cVar5 == '\0') {
        if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(unaff_RBX + 1);
          lVar10 = unaff_RBX[0x1d];
        }
        cVar5 = func_0x000180522f60(lVar10);
        if (cVar5 == '\0') goto LAB_1805cf57f;
      }
      uVar12 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar12 = uVar12 >> 0x11 ^ uVar12;
      uVar12 = uVar12 << 5 ^ uVar12;
      *(uint *)(unaff_RBX + 0x272) = uVar12;
      lVar10 = *unaff_RBX;
      uVar12 = (uVar12 - 1) % 100;
      bVar2 = 0x32 < uVar12;
      iVar6 = FUN_1805a0a20(lVar10 + 0x28,bVar2);
      if (iVar6 == -1) {
        bVar2 = uVar12 < 0x33;
        iVar6 = FUN_1805a0a20(lVar10 + 0x28,bVar2);
        if (iVar6 == -1) goto LAB_1805cf57f;
        if (bVar2) {
          if (!bVar2) {
            if (bVar2 == true) goto LAB_1805cf6a5;
            if (bVar2 == true) goto LAB_1805cf69e;
            uVar13 = 0;
          }
          goto LAB_1805cf6b1;
        }
      }
      else if (bVar2) {
        if (!bVar2) {
          if (bVar2 == true) goto LAB_1805cf6a5;
          if (bVar2 != true) {
            uVar13 = 0;
            goto LAB_1805cf6b1;
          }
LAB_1805cf69e:
          uVar13 = 0x80;
        }
        goto LAB_1805cf6b1;
      }
LAB_1805cf6ac:
      uVar13 = 0x100;
    }
LAB_1805cf6b1:
    *(uint *)((longlong)unaff_RBX + 0x158c) = *(uint *)((longlong)unaff_RBX + 0x158c) | uVar13;
  }
  else {
    if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
      FUN_1805d4440(unaff_RBX + 1);
    }
    if ((*(char *)((longlong)unaff_RBX + 0xd5) != '\0') ||
       ((piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 != 1 &&
        (piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 != 2)))) {
LAB_1805cf23d:
      if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
        FUN_1805d4440(unaff_RBX + 1);
      }
      if (*(float *)(unaff_RBX + 0x1b) != 0.0) {
        uVar12 = *(uint *)(unaff_RBX + 2) & 0x8000000;
        if (uVar12 == 0) {
          bVar4 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
          *(byte *)((longlong)unaff_RBX + 0x11c) = bVar4;
        }
        else {
          bVar4 = *(byte *)((longlong)unaff_RBX + 0x11c);
        }
        if (bVar4 != 0) {
          if (uVar12 == 0) {
            bVar4 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
            *(byte *)((longlong)unaff_RBX + 0x11c) = bVar4;
          }
          if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
            func_0x0001805d4cd0(unaff_RBX + 1);
            bVar4 = *(byte *)((longlong)unaff_RBX + 0x11c);
          }
          if (bVar4 != *(byte *)(unaff_RBX + 0x20)) goto LAB_1805cf32d;
        }
        piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1);
        if ((*piVar7 == 2) && (*(int *)(*unaff_RBX + 0x1fc) != 2)) {
          fVar16 = *(float *)(*unaff_RBX + 0x2f4);
          uVar12 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
          uVar12 = uVar12 >> 0x11 ^ uVar12;
          uVar12 = uVar12 << 5 ^ uVar12;
          *(uint *)(unaff_RBX + 0x272) = uVar12;
          if ((float)(uVar12 - 1) * 2.3283064e-10 < fVar16) {
            *(int32_t *)((longlong)unaff_RBX + 0x178c) = 6;
            goto LAB_1805cf1e8;
          }
        }
      }
LAB_1805cf32d:
      if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
        FUN_1805d4440(unaff_RBX + 1);
      }
      if ((*(float *)(unaff_RBX + 0x1b) == 0.0) ||
         (((piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 != 1 &&
           (piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 != 2)) ||
          (fVar16 = *(float *)(*unaff_RBX + 0x2f0),
          uVar12 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272),
          uVar12 = uVar12 >> 0x11 ^ uVar12, uVar12 = uVar12 << 5 ^ uVar12,
          *(uint *)(unaff_RBX + 0x272) = uVar12, fVar16 <= (float)(uVar12 - 1) * 2.3283064e-10))))
      goto LAB_1805cf433;
      if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
        bVar4 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)unaff_RBX + 0x11c) = bVar4;
      }
      else {
        bVar4 = *(byte *)((longlong)unaff_RBX + 0x11c);
      }
      if (bVar4 != 0) {
        if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
          *(byte *)((longlong)unaff_RBX + 0x11c) =
               (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
        }
        pcVar8 = (char *)FUN_1805b7540(unaff_RBX + 1);
        if (*(char *)((longlong)unaff_RBX + 0x11c) != *pcVar8) goto LAB_1805cf433;
      }
      if (((char)unaff_RBX[0x2e4] == '\0') ||
         (piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 != 1)) {
        func_0x0001805cef70();
        goto FUN_1805cf6c9;
      }
      goto LAB_1805cf44a;
    }
    lVar10 = *unaff_RBX;
    cVar5 = func_0x00018051f6a0(lVar10);
    if (cVar5 == '\0') {
      fVar16 = *(float *)(lVar10 + 0x2e0);
    }
    else {
      fVar16 = *(float *)(lVar10 + 0x2dc);
    }
    uVar12 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar12 = uVar12 >> 0x11 ^ uVar12;
    uVar12 = uVar12 << 5 ^ uVar12;
    *(uint *)(unaff_RBX + 0x272) = uVar12;
    if (fVar16 <= (float)(uVar12 - 1) * 2.3283064e-10) goto LAB_1805cf23d;
    if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
      bVar4 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RBX + 0x11c) = bVar4;
    }
    else {
      bVar4 = *(byte *)((longlong)unaff_RBX + 0x11c);
    }
    if ((bVar4 != 0) &&
       (((int)unaff_RBX[0x295] == 3 ||
        (pcVar8 = (char *)FUN_1805b7540(unaff_RBX + 1), *pcVar8 == '\0')))) goto LAB_1805cf23d;
    *(int32_t *)((longlong)unaff_RBX + 0x178c) = 6;
    uVar12 = *(uint *)(unaff_RBX + 0x272);
LAB_1805cf1e8:
    uVar12 = uVar12 << 0xd ^ uVar12;
    uVar12 = uVar12 >> 0x11 ^ uVar12;
    uVar12 = uVar12 << 5 ^ uVar12;
    *(uint *)(unaff_RBX + 0x272) = uVar12;
    unaff_RBX[0x2eb] =
         *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ec] * 8) -
         (longlong)(-60000.004 - (float)(uVar12 - 1) * 1.1641532e-05);
  }
FUN_1805cf6c9:
  if (((*(int *)(*unaff_RBX + 0x1fc) == 3) || (*(int *)((longlong)unaff_RBX + 0x178c) != 7)) ||
     (*(int *)(*unaff_RBX + 0x1fc) != 1)) goto FUN_1805cfbdd;
  if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
    FUN_1805d4440(unaff_RBX + 1);
  }
  if (*(char *)((longlong)unaff_RBX + 0xd5) != '\0') {
    lVar10 = *unaff_RBX;
    fVar16 = 1.0;
    fVar17 = -100000.0;
    lVar9 = *(longlong *)(lVar10 + 0x590);
    bVar3 = *(float *)(lVar9 + 0x258c) * *(float *)(lVar9 + 0x259c) +
            *(float *)(lVar9 + 0x2588) * *(float *)(lVar9 + 0x2598) +
            *(float *)(lVar9 + 0x2590) * *(float *)(lVar9 + 0x25a0) <= 0.95;
    bVar4 = (byte)((uint)*(int *)(lVar10 + 0x564) >> 0x1f) ^ 1;
    if (*(int *)(lVar10 + 0x564) < 0) {
      if ((float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2dd] * 8) -
                 unaff_RBX[0x2dc]) * 1e-05 <= 0.0) goto FUN_1805cfbdd;
      if (bVar3) {
        pcVar8 = (char *)func_0x000180507f80(unaff_RBX + 1);
        if (*pcVar8 != '\0') goto FUN_1805cfbdd;
        lVar10 = *unaff_RBX;
      }
LAB_1805cf801:
      iVar6 = 0;
      cVar5 = func_0x0001805b7bd0();
      if ((cVar5 == '\0') && (cVar5 = func_0x0001805d1da0(), cVar5 != '\0')) {
        lVar9 = func_0x0001805d1df0();
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
      uVar13 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar13 = uVar13 >> 0x11 ^ uVar13;
      uVar13 = uVar13 << 5 ^ uVar13;
      *(uint *)(unaff_RBX + 0x272) = uVar13;
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
      unaff_RBX[0x2e9] =
           *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ea] * 8) -
           (longlong)(fVar15 * fVar17);
    }
    else {
      if (bVar3) goto FUN_1805cfbdd;
      fVar14 = *(float *)(*(longlong *)(lVar10 + 0x20) + 0x84) * 0.2;
      pfVar11 = (float *)(*(longlong *)(lVar10 + 0x20) + 0x234);
      if (*pfVar11 <= fVar14 && fVar14 != *pfVar11) goto LAB_1805cf801;
    }
    *(uint *)((longlong)unaff_RBX + 0x1794) = *(uint *)((longlong)unaff_RBX + 0x1794) & 0xfffffc3f;
    if ((bVar4 == 0) && (pcVar8 = (char *)FUN_1805b7540(unaff_RBX + 1), *pcVar8 == '\0')) {
      if ((char)unaff_RBX[0x2e4] == '\0') {
        uVar13 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
        fVar14 = *(float *)(*unaff_RBX + 0x380);
        uVar13 = uVar13 >> 0x11 ^ uVar13;
        uVar13 = uVar13 << 5 ^ uVar13;
        *(uint *)(unaff_RBX + 0x272) = uVar13;
        fVar16 = (fVar16 - (float)(uVar13 - 1) * 2.3283064e-10 * fVar14) *
                 *(float *)(*unaff_RBX + 0x37c);
        if (*(float *)(unaff_RBX + 0x28d) <= fVar16) {
          unaff_RBX[0x2e2] =
               *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2e3] * 8) -
               (longlong)(fVar16 * fVar17);
          *(int8_t *)(unaff_RBX + 0x2e4) = 1;
          goto FUN_1805cfbdd;
        }
      }
      else if ((float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2e3] * 8) -
                      unaff_RBX[0x2e2]) * 1e-05 < 0.0) goto FUN_1805cfbdd;
    }
    *(int32_t *)((longlong)unaff_RBX + 0x178c) = 8;
    goto FUN_1805cfbdd;
  }
  if (0.5 < (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ea] * 8) -
                   unaff_RBX[0x2e9]) * 1e-05) {
    pfVar11 = (float *)FUN_1805b7450();
    if ((*pfVar11 != 0.0) &&
       ((piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 == 1 ||
        (piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 == 2)))) {
      *(int32_t *)((longlong)unaff_RBX + 0x178c) = 6;
      uVar13 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar13 = uVar13 >> 0x11 ^ uVar13;
      uVar13 = uVar13 << 5 ^ uVar13;
      *(uint *)(unaff_RBX + 0x272) = uVar13;
      unaff_RBX[0x2eb] =
           *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ec] * 8) -
           (longlong)(-60000.004 - (float)(uVar13 - 1) * 1.1641532e-05);
    }
    func_0x0001805cef70();
    goto FUN_1805cfbdd;
  }
  pfVar11 = (float *)FUN_1805b7480(unaff_RBX + 1);
  fVar16 = *pfVar11;
  if (fVar16 * -2.25 <=
      (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ea] * 8) - unaff_RBX[0x2e9]
             ) * 1e-05) {
LAB_1805cfb42:
    if ((*(int *)(*unaff_RBX + 0x564) < 0) ||
       ((lVar10 = *(longlong *)(*unaff_RBX + 0x20),
        *(float *)(lVar10 + 0x234) <= *(float *)(lVar10 + 0x84) * 0.3 ||
        (lVar10 = *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ea] * 8),
        lVar9 = unaff_RBX[0x2e9], pfVar11 = (float *)FUN_1805b6e50(unaff_RBX + 1),
        fVar17 = (0.5 - (float)(lVar10 - lVar9) * 1e-05) + fVar16,
        fVar17 < *pfVar11 || fVar17 == *pfVar11)))) goto FUN_1805cfbdd;
  }
  else {
    lVar10 = func_0x0001805b7270(unaff_RBX + 1);
    if (lVar10 == 0) {
      fVar17 = 5.0;
    }
    else {
      fVar17 = 2.5;
    }
    pfVar11 = (float *)FUN_1805b6e50(unaff_RBX + 1);
    if ((*pfVar11 <= fVar17 * fVar16) ||
       (fVar17 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x84) * 0.1,
       pfVar11 = (float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x234),
       fVar17 < *pfVar11 || fVar17 == *pfVar11)) goto LAB_1805cfb42;
  }
  unaff_RBX[0x2e9] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ea] * 8) -
       (longlong)(50000.0 - fVar16 * 100000.0);
FUN_1805cfbdd:
  if (*(int *)((longlong)unaff_RBX + 0x178c) == 7) {
    if (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2dd] * 8) -
                     unaff_RBX[0x2dc]) * 1e-05) {
      if (*(int *)(*unaff_RBX + 0x1fc) == 1) {
        uVar13 = *(uint *)(unaff_RBX + 2);
        if ((uVar13 & 0x10) == 0) {
          FUN_1805d3770(unaff_RBX + 1);
          uVar13 = *(uint *)(unaff_RBX + 2);
        }
        if ((uVar13 >> 8 & 1) == 0) {
          FUN_1805d4b40(unaff_RBX + 1);
        }
        if ((*(float *)(unaff_RBX + 0x1c) * 1.5 < *(float *)((longlong)unaff_RBX + 0xa4)) &&
           (lVar10 = *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ea] * 8),
           lVar9 = unaff_RBX[0x2e9], pfVar11 = (float *)FUN_1805b7480(unaff_RBX + 1),
           *pfVar11 * 3.0 < (float)(lVar10 - lVar9) * 1e-05)) {
          func_0x0001805cef70();
        }
      }
    }
    else {
      unaff_RBX[0x2e9] =
           *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ea] * 8) -
           (longlong)(*(float *)(*unaff_RBX + 0x300) * 100000.0);
      *(int32_t *)((longlong)unaff_RBX + 0x178c) = 0;
      if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)unaff_RBX + 0x158c) =
             *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  if (((((int)unaff_RBX[0x2f1] == 0) ||
       ((float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ee] * 8) -
               unaff_RBX[0x2ed]) * 1e-05 < -100.0)) || (9 < *(uint *)((longlong)unaff_RBX + 0x178c))
      ) || ((0x241U >> (*(uint *)((longlong)unaff_RBX + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}






// 函数: void FUN_1805cf472(void)
void FUN_1805cf472(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  int *piVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  longlong *unaff_RBX;
  uint unaff_ESI;
  byte bVar11;
  longlong in_R9;
  char unaff_R12B;
  longlong unaff_R13;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM10_Da;
  
  if (in_R9 == 0) {
LAB_1805cf57f:
    if ((unaff_R12B == '\0') && (piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 == 7)) {
      if ((*(uint *)(unaff_RBX + 2) & unaff_ESI) == 0) {
        func_0x0001805d4cd0(unaff_RBX + 1);
      }
      lVar8 = unaff_RBX[0x1f];
      if (lVar8 == 0) goto LAB_1805cf652;
      if ((*(uint *)(unaff_RBX + 2) & unaff_ESI) == 0) {
        func_0x0001805d4cd0(unaff_RBX + 1);
        lVar8 = unaff_RBX[0x1f];
      }
      if ((((*(uint *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar8 + 0xd0))
             >> 0x1c & 1) == 0) || (cVar3 = FUN_1805b7ac0(), cVar3 == '\0')) ||
         (fVar14 = *(float *)(*unaff_RBX + 0x2f8),
         uVar10 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272),
         uVar10 = uVar10 >> 0x11 ^ uVar10, uVar10 = uVar10 << 5 ^ uVar10,
         *(uint *)(unaff_RBX + 0x272) = uVar10, fVar14 <= (float)(uVar10 - 1) * unaff_XMM7_Da))
      goto LAB_1805cf652;
      *(uint *)(unaff_RBX + 0x27a) = *(uint *)(unaff_RBX + 0x27a) | 0x8000;
      *(int32_t *)((longlong)unaff_RBX + 0x178c) = 10;
    }
    else {
LAB_1805cf652:
      iVar4 = FUN_1805d6890();
      if (iVar4 == 0) goto LAB_1805cf6ac;
      if (iVar4 == 1) goto LAB_1805cf6b1;
      if (iVar4 == 2) goto LAB_1805cf6a5;
      if (iVar4 == 3) goto LAB_1805cf69e;
      *(int32_t *)((longlong)unaff_RBX + 0x178c) = 0;
      if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)unaff_RBX + 0x158c) =
             *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  else {
    cVar3 = func_0x000180522f60(*unaff_RBX);
    if (cVar3 == '\0') {
      if ((*(uint *)(unaff_RBX + 2) & unaff_ESI) == 0) {
        func_0x0001805d4cd0(unaff_RBX + 1);
        in_R9 = unaff_RBX[0x1d];
      }
      cVar3 = func_0x000180522f60(in_R9);
      if (cVar3 == '\0') goto LAB_1805cf57f;
    }
    uVar10 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar10 = uVar10 >> 0x11 ^ uVar10;
    uVar10 = uVar10 << 5 ^ uVar10;
    *(uint *)(unaff_RBX + 0x272) = uVar10;
    lVar8 = *unaff_RBX;
    uVar10 = (uVar10 - 1) % 100;
    bVar2 = 0x32 < uVar10;
    iVar4 = FUN_1805a0a20(lVar8 + 0x28,bVar2);
    if (iVar4 == -1) {
      bVar2 = uVar10 < 0x33;
      iVar4 = FUN_1805a0a20(lVar8 + 0x28,bVar2);
      if (iVar4 == -1) goto LAB_1805cf57f;
      if (bVar2) {
        if (!bVar2) {
          if (bVar2 == true) goto LAB_1805cf6a5;
          if (bVar2 == true) goto LAB_1805cf69e;
          unaff_ESI = 0;
        }
        goto LAB_1805cf6b1;
      }
LAB_1805cf6ac:
      unaff_ESI = 0x100;
    }
    else {
      if (!bVar2) goto LAB_1805cf6ac;
      if (!bVar2) {
        if (bVar2 == true) {
LAB_1805cf6a5:
          unaff_ESI = 0x40;
        }
        else {
          if (bVar2 != true) {
            unaff_ESI = 0;
            goto LAB_1805cf6b1;
          }
LAB_1805cf69e:
          unaff_ESI = 0x80;
        }
      }
    }
LAB_1805cf6b1:
    *(uint *)((longlong)unaff_RBX + 0x158c) = *(uint *)((longlong)unaff_RBX + 0x158c) | unaff_ESI;
  }
  if (((*(int *)(*unaff_RBX + 0x1fc) == 3) || (*(int *)((longlong)unaff_RBX + 0x178c) != 7)) ||
     (*(int *)(*unaff_RBX + 0x1fc) != 1)) goto FUN_1805cfbdd;
  if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
    FUN_1805d4440(unaff_RBX + 1);
  }
  if (*(char *)((longlong)unaff_RBX + 0xd5) != '\0') {
    lVar8 = *unaff_RBX;
    fVar14 = 1.0;
    fVar15 = -100000.0;
    lVar5 = *(longlong *)(lVar8 + 0x590);
    bVar2 = *(float *)(lVar5 + 0x258c) * *(float *)(lVar5 + 0x259c) +
            *(float *)(lVar5 + 0x2588) * *(float *)(lVar5 + 0x2598) +
            *(float *)(lVar5 + 0x2590) * *(float *)(lVar5 + 0x25a0) <= 0.95;
    bVar11 = (byte)((uint)*(int *)(lVar8 + 0x564) >> 0x1f) ^ 1;
    if (*(int *)(lVar8 + 0x564) < 0) {
      if ((float)(*(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc])
          * 1e-05 <= unaff_XMM10_Da) goto FUN_1805cfbdd;
      if (bVar2) {
        pcVar6 = (char *)func_0x000180507f80(unaff_RBX + 1);
        if (*pcVar6 != '\0') goto FUN_1805cfbdd;
        lVar8 = *unaff_RBX;
      }
LAB_1805cf801:
      iVar4 = 0;
      cVar3 = func_0x0001805b7bd0();
      if ((cVar3 == '\0') && (cVar3 = func_0x0001805d1da0(), cVar3 != '\0')) {
        lVar5 = func_0x0001805d1df0();
        iVar4 = *(int *)(lVar5 + 0x678);
      }
      iVar1 = *(int *)(lVar8 + 0x678);
      fVar12 = *(float *)(lVar8 + 0x2fc);
      fVar13 = (float)(iVar4 + -1) * 0.125;
      if (unaff_XMM10_Da <= fVar13) {
        if (fVar14 <= fVar13) {
          fVar13 = fVar14;
        }
      }
      else {
        fVar13 = 0.0;
      }
      uVar10 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      uVar10 = uVar10 << 5 ^ uVar10;
      *(uint *)(unaff_RBX + 0x272) = uVar10;
      fVar13 = (0.5 - fVar12 * 0.5) + fVar13 + fVar13;
      if (fVar13 <= unaff_XMM10_Da) {
        fVar13 = unaff_XMM10_Da;
      }
      fVar13 = (float)(uVar10 - 1) * unaff_XMM7_Da *
               ((SQRT((float)((iVar4 + 1) / (iVar1 + 1))) * 60.0) / ((fVar12 + fVar14) * 30.0) -
               fVar13) + fVar13;
      if (fVar13 <= unaff_XMM10_Da) {
        fVar13 = unaff_XMM10_Da;
      }
      unaff_RBX[0x2e9] =
           *(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2ea] * 8) -
           (longlong)(fVar13 * fVar15);
    }
    else {
      if (bVar2) goto FUN_1805cfbdd;
      fVar12 = *(float *)(*(longlong *)(lVar8 + 0x20) + 0x84) * 0.2;
      pfVar9 = (float *)(*(longlong *)(lVar8 + 0x20) + 0x234);
      if (*pfVar9 <= fVar12 && fVar12 != *pfVar9) goto LAB_1805cf801;
    }
    *(uint *)((longlong)unaff_RBX + 0x1794) = *(uint *)((longlong)unaff_RBX + 0x1794) & 0xfffffc3f;
    if ((bVar11 == 0) && (pcVar6 = (char *)FUN_1805b7540(unaff_RBX + 1), *pcVar6 == '\0')) {
      if ((char)unaff_RBX[0x2e4] == '\0') {
        uVar10 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
        fVar12 = *(float *)(*unaff_RBX + 0x380);
        uVar10 = uVar10 >> 0x11 ^ uVar10;
        uVar10 = uVar10 << 5 ^ uVar10;
        *(uint *)(unaff_RBX + 0x272) = uVar10;
        fVar14 = (fVar14 - (float)(uVar10 - 1) * unaff_XMM7_Da * fVar12) *
                 *(float *)(*unaff_RBX + 0x37c);
        if (*(float *)(unaff_RBX + 0x28d) <= fVar14) {
          unaff_RBX[0x2e2] =
               *(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2e3] * 8) -
               (longlong)(fVar14 * fVar15);
          *(int8_t *)(unaff_RBX + 0x2e4) = 1;
          goto FUN_1805cfbdd;
        }
      }
      else if ((float)(*(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2e3] * 8) -
                      unaff_RBX[0x2e2]) * 1e-05 < unaff_XMM10_Da) goto FUN_1805cfbdd;
    }
    *(int32_t *)((longlong)unaff_RBX + 0x178c) = 8;
    goto FUN_1805cfbdd;
  }
  if (0.5 < (float)(*(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2ea] * 8) -
                   unaff_RBX[0x2e9]) * 1e-05) {
    pfVar9 = (float *)FUN_1805b7450();
    if ((unaff_XMM10_Da != *pfVar9) &&
       ((piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 == 1 ||
        (piVar7 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar7 == 2)))) {
      *(int32_t *)((longlong)unaff_RBX + 0x178c) = 6;
      uVar10 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      uVar10 = uVar10 << 5 ^ uVar10;
      *(uint *)(unaff_RBX + 0x272) = uVar10;
      unaff_RBX[0x2eb] =
           *(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2ec] * 8) -
           (longlong)(unaff_XMM6_Da - (float)(uVar10 - 1) * 1.1641532e-05);
    }
    func_0x0001805cef70();
    goto FUN_1805cfbdd;
  }
  pfVar9 = (float *)FUN_1805b7480(unaff_RBX + 1);
  fVar14 = *pfVar9;
  if (fVar14 * -2.25 <=
      (float)(*(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2ea] * 8) - unaff_RBX[0x2e9]) *
      1e-05) {
LAB_1805cfb42:
    if ((*(int *)(*unaff_RBX + 0x564) < 0) ||
       ((lVar8 = *(longlong *)(*unaff_RBX + 0x20),
        *(float *)(lVar8 + 0x234) <= *(float *)(lVar8 + 0x84) * 0.3 ||
        (lVar8 = *(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2ea] * 8),
        lVar5 = unaff_RBX[0x2e9], pfVar9 = (float *)FUN_1805b6e50(unaff_RBX + 1),
        fVar15 = (0.5 - (float)(lVar8 - lVar5) * 1e-05) + fVar14,
        fVar15 < *pfVar9 || fVar15 == *pfVar9)))) goto FUN_1805cfbdd;
  }
  else {
    lVar8 = func_0x0001805b7270(unaff_RBX + 1);
    if (lVar8 == 0) {
      fVar15 = 5.0;
    }
    else {
      fVar15 = 2.5;
    }
    pfVar9 = (float *)FUN_1805b6e50(unaff_RBX + 1);
    if ((*pfVar9 <= fVar15 * fVar14) ||
       (fVar15 = *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x84) * 0.1,
       pfVar9 = (float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x234),
       fVar15 < *pfVar9 || fVar15 == *pfVar9)) goto LAB_1805cfb42;
  }
  unaff_RBX[0x2e9] =
       *(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2ea] * 8) -
       (longlong)(50000.0 - fVar14 * 100000.0);
FUN_1805cfbdd:
  if (*(int *)((longlong)unaff_RBX + 0x178c) == 7) {
    if (unaff_XMM10_Da <
        (float)(*(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc]) *
        1e-05) {
      if (*(int *)(*unaff_RBX + 0x1fc) == 1) {
        uVar10 = *(uint *)(unaff_RBX + 2);
        if ((uVar10 & 0x10) == 0) {
          FUN_1805d3770(unaff_RBX + 1);
          uVar10 = *(uint *)(unaff_RBX + 2);
        }
        if ((uVar10 >> 8 & 1) == 0) {
          FUN_1805d4b40(unaff_RBX + 1);
        }
        if ((*(float *)(unaff_RBX + 0x1c) * 1.5 < *(float *)((longlong)unaff_RBX + 0xa4)) &&
           (lVar8 = *(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2ea] * 8),
           lVar5 = unaff_RBX[0x2e9], pfVar9 = (float *)FUN_1805b7480(unaff_RBX + 1),
           *pfVar9 * 3.0 < (float)(lVar8 - lVar5) * 1e-05)) {
          func_0x0001805cef70();
        }
      }
    }
    else {
      unaff_RBX[0x2e9] =
           *(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2ea] * 8) -
           (longlong)(*(float *)(*unaff_RBX + 0x300) * 100000.0);
      *(int32_t *)((longlong)unaff_RBX + 0x178c) = 0;
      if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)unaff_RBX + 0x158c) =
             *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  if (((((int)unaff_RBX[0x2f1] == 0) ||
       ((float)(*(longlong *)(unaff_R13 + (longlong)(int)unaff_RBX[0x2ee] * 8) - unaff_RBX[0x2ed]) *
        1e-05 < -100.0)) || (9 < *(uint *)((longlong)unaff_RBX + 0x178c))) ||
     ((0x241U >> (*(uint *)((longlong)unaff_RBX + 0x178c) & 0x1f) & 1) == 0)) {
    FUN_1805caef0();
  }
  return;
}






