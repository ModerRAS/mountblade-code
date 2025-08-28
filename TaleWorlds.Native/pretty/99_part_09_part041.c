#include "TaleWorlds.Native.Split.h"

// 99_part_09_part041.c - 8 个函数

// 函数: void FUN_1805cfd80(longlong *param_1)
void FUN_1805cfd80(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  float *pfVar6;
  uint64_t uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  
  iVar9 = *(int *)(*(longlong *)(*param_1 + 0x590) + 0x2498);
  if ((iVar9 == -1) ||
     ((iVar9 = *(int *)((longlong)iVar9 * 0x68 + 0x58 + _DAT_180c96150), 3 < iVar9 - 0x13U &&
      (iVar9 != 0x20)))) {
    if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
      FUN_1805d4440(param_1 + 1);
    }
    if (*(char *)((longlong)param_1 + 0xd5) != '\0') {
      if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
        bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)param_1 + 0x11c) = bVar1;
      }
      else {
        bVar1 = *(byte *)((longlong)param_1 + 0x11c);
      }
      if ((bVar1 == 0) &&
         ((*(char *)((longlong)param_1 + 0x16d6) != '\0' ||
          ((float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x2df] * 8) -
                  param_1[0x2de]) * 1e-05 < 0.0)))) {
        lVar5 = *param_1;
        if ((*(int *)(lVar5 + 0x1fc) == 1) || (*(int *)(lVar5 + 0x1fc) == 2)) {
          *(uint *)((longlong)param_1 + 0x158c) =
               *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
          lVar5 = *param_1;
        }
        param_1[0x2e9] =
             *(longlong *)(&system_error_code + (longlong)(int)param_1[0x2ea] * 8) -
             (longlong)(*(float *)(lVar5 + 0x304) * 100000.0);
        *(int32_t *)((longlong)param_1 + 0x178c) = 7;
        return;
      }
    }
    param_1[0x2e9] =
         *(longlong *)(&system_error_code + (longlong)(int)param_1[0x2ea] * 8) -
         (longlong)(*(float *)(*param_1 + 0x304) * 100000.0);
    *(int32_t *)((longlong)param_1 + 0x178c) = 0;
    if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
      *(uint *)((longlong)param_1 + 0x158c) =
           *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
    }
    *(int32_t *)(param_1 + 0x2db) = 0;
    return;
  }
  if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
    FUN_1805d4440(param_1 + 1);
  }
  if ((((*(float *)(param_1 + 0x1b) != 0.0) && (*(int *)(*param_1 + 0x1fc) != 2)) &&
      (piVar4 = (int *)FUN_1805b7660(param_1 + 1), *piVar4 == 2)) &&
     (fVar11 = *(float *)(*param_1 + 0x308),
     uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
     uVar8 = uVar8 >> 0x11 ^ uVar8, uVar8 = uVar8 << 5 ^ uVar8, *(uint *)(param_1 + 0x272) = uVar8,
     (float)(uVar8 - 1) * 2.3283064e-10 < fVar11)) goto SUB_1805cef70;
  if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
    FUN_1805d4440(param_1 + 1);
  }
  if (*(char *)((longlong)param_1 + 0xd5) == '\0') {
    if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
      FUN_1805d4440(param_1 + 1);
    }
    if (*(float *)(param_1 + 0x1b) != 0.0) {
      uVar8 = *(uint *)(param_1 + 2);
      if ((uVar8 >> 9 & 1) == 0) {
        func_0x0001805d4cd0(param_1 + 1);
        uVar8 = *(uint *)(param_1 + 2);
      }
      if ((uVar8 >> 0x1b & 1) == 0) {
        bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)param_1 + 0x11c) = bVar1;
      }
      else {
        bVar1 = *(byte *)((longlong)param_1 + 0x11c);
      }
      if ((*(byte *)(param_1 + 0x20) == bVar1) &&
         (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x2df] * 8) -
                       param_1[0x2de]) * 1e-05)) {
        fVar11 = *(float *)(*param_1 + 0x30c);
        uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
        uVar8 = uVar8 >> 0x11 ^ uVar8;
        uVar8 = uVar8 << 5 ^ uVar8;
        *(uint *)(param_1 + 0x272) = uVar8;
        if ((float)(uVar8 - 1) * 2.3283064e-10 < fVar11) {
          uVar8 = uVar8 << 0xd ^ uVar8;
          *(int32_t *)((longlong)param_1 + 0x178c) = 6;
          uVar8 = uVar8 >> 0x11 ^ uVar8;
          uVar8 = uVar8 << 5 ^ uVar8;
          *(uint *)(param_1 + 0x272) = uVar8;
          param_1[0x2eb] =
               *(longlong *)(&system_error_code + (longlong)(int)param_1[0x2ec] * 8) -
               (longlong)(-40000.0 - (float)(uVar8 - 1) * 1.1641532e-05);
          return;
        }
      }
    }
  }
  iVar9 = -1;
  if (((int)param_1[0x295] != 5) && (cVar2 = func_0x0001805d1da0(param_1), cVar2 != '\0')) {
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1 + 1);
    }
    if (param_1[0x1e] == 0) {
      if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
        param_1[0x15] = lVar5;
        *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
      }
      else {
        lVar5 = param_1[0x15];
      }
      if (((lVar5 != 0) && (lVar5 = func_0x0001805b6e80(param_1 + 1), 0 < *(int *)(lVar5 + 0x30)))
         && (((*(uint *)((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 +
                        *(longlong *)(lVar5 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(lVar5 + 8))))
         ) goto LAB_1805d00bb;
    }
    if ((char)param_1[0x438] == '\0') {
      iVar3 = *(int *)((longlong)param_1 + 0x14b4);
    }
    else {
      iVar3 = *(int *)((longlong)param_1 + 0x21c4);
    }
    iVar3 = *(int *)(*(longlong *)((longlong)iVar3 * 0xa60 + 0x3630 + param_1[0x291]) + 0x2498);
    if (iVar3 != -1) {
      iVar9 = *(int *)((longlong)iVar3 * 0x68 + 0x5c + _DAT_180c96150);
    }
  }
LAB_1805d00bb:
  cVar2 = FUN_1805a3ab0(*param_1 + 0x28);
  if (cVar2 == '\0') {
    iVar3 = *(int *)(*param_1 + 0x70);
  }
  else {
    iVar3 = 1;
  }
  if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
    bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)param_1[1] + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)param_1 + 0x11c) = bVar1;
  }
  else {
    bVar1 = *(byte *)((longlong)param_1 + 0x11c);
  }
  if (((bVar1 == 0) && (pfVar6 = (float *)FUN_1805b6b40(param_1 + 1), 0.3 < *pfVar6)) &&
     (piVar4 = (int *)FUN_1805b7660(param_1 + 1), *piVar4 == 7)) {
    if (iVar9 != 8) {
      if (iVar3 == 2) {
        bVar10 = iVar9 == 7;
      }
      else if (iVar3 == 3) {
        bVar10 = iVar9 == 6;
      }
      else if (iVar3 == 0) {
        bVar10 = iVar9 == 4;
      }
      else {
        if (iVar3 != 1) {
          return;
        }
        bVar10 = iVar9 == 5;
      }
      if (!bVar10) {
        return;
      }
    }
    uVar7 = FUN_1805b74c0(param_1 + 1);
    cVar2 = func_0x00018051f6a0(uVar7);
    if (cVar2 == '\0') {
      fVar11 = (float)powf(*param_1,SQRT((float)((int)param_1[0x2db] + 1)));
    }
    else {
      fVar11 = *(float *)(*param_1 + 0x310) / (float)((int)param_1[0x2db] + 1);
    }
    uVar8 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar8 = uVar8 >> 0x11 ^ uVar8;
    uVar8 = uVar8 << 5 ^ uVar8;
    *(uint *)(param_1 + 0x272) = uVar8;
    if ((float)(uVar8 - 1) * 2.3283064e-10 < fVar11) {
      *(int *)(param_1 + 0x2db) = (int)param_1[0x2db] + 1;
SUB_1805cef70:
      *(int32_t *)((longlong)param_1 + 0x178c) = 0;
      if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)param_1 + 0x158c) =
             *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
      }
      return;
    }
  }
  return;
}



// WARNING: Possible PIC construction at 0x0001805d0206: Changing call to branch
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805cfdcb(void)
void FUN_1805cfdcb(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  float *pfVar6;
  uint64_t uVar7;
  uint uVar8;
  longlong *unaff_RBX;
  int iVar9;
  bool in_ZF;
  bool bVar10;
  float fVar11;
  
  if (in_ZF) {
    FUN_1805d4440(unaff_RBX + 1);
  }
  if ((((*(float *)(unaff_RBX + 0x1b) != 0.0) && (*(int *)(*unaff_RBX + 0x1fc) != 2)) &&
      (piVar4 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar4 == 2)) &&
     (fVar11 = *(float *)(*unaff_RBX + 0x308),
     uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272),
     uVar8 = uVar8 >> 0x11 ^ uVar8, uVar8 = uVar8 << 5 ^ uVar8, *(uint *)(unaff_RBX + 0x272) = uVar8
     , (float)(uVar8 - 1) * 2.3283064e-10 < fVar11)) goto SUB_1805cef70;
  if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
    FUN_1805d4440(unaff_RBX + 1);
  }
  if (*(char *)((longlong)unaff_RBX + 0xd5) == '\0') {
    if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
      FUN_1805d4440(unaff_RBX + 1);
    }
    if (*(float *)(unaff_RBX + 0x1b) != 0.0) {
      uVar8 = *(uint *)(unaff_RBX + 2);
      if ((uVar8 >> 9 & 1) == 0) {
        func_0x0001805d4cd0(unaff_RBX + 1);
        uVar8 = *(uint *)(unaff_RBX + 2);
      }
      if ((uVar8 >> 0x1b & 1) == 0) {
        bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)unaff_RBX + 0x11c) = bVar1;
      }
      else {
        bVar1 = *(byte *)((longlong)unaff_RBX + 0x11c);
      }
      if ((*(byte *)(unaff_RBX + 0x20) == bVar1) &&
         (0.0 < (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2df] * 8) -
                       unaff_RBX[0x2de]) * 1e-05)) {
        fVar11 = *(float *)(*unaff_RBX + 0x30c);
        uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
        uVar8 = uVar8 >> 0x11 ^ uVar8;
        uVar8 = uVar8 << 5 ^ uVar8;
        *(uint *)(unaff_RBX + 0x272) = uVar8;
        if ((float)(uVar8 - 1) * 2.3283064e-10 < fVar11) {
          uVar8 = uVar8 << 0xd ^ uVar8;
          *(int32_t *)((longlong)unaff_RBX + 0x178c) = 6;
          uVar8 = uVar8 >> 0x11 ^ uVar8;
          uVar8 = uVar8 << 5 ^ uVar8;
          *(uint *)(unaff_RBX + 0x272) = uVar8;
          unaff_RBX[0x2eb] =
               *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ec] * 8) -
               (longlong)(-40000.0 - (float)(uVar8 - 1) * 1.1641532e-05);
          return;
        }
      }
    }
  }
  iVar9 = -1;
  if (((int)unaff_RBX[0x295] != 5) && (cVar2 = func_0x0001805d1da0(), cVar2 != '\0')) {
    if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RBX + 1);
    }
    if (unaff_RBX[0x1e] == 0) {
      if ((*(uint *)(unaff_RBX + 2) & 0x20) == 0) {
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RBX[1] + 0x8f8) + 0x9e8);
        unaff_RBX[0x15] = lVar5;
        *(uint *)(unaff_RBX + 2) = *(uint *)(unaff_RBX + 2) | 0x20;
      }
      else {
        lVar5 = unaff_RBX[0x15];
      }
      if (((lVar5 != 0) && (lVar5 = func_0x0001805b6e80(unaff_RBX + 1), 0 < *(int *)(lVar5 + 0x30)))
         && (((*(uint *)((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 +
                        *(longlong *)(lVar5 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(lVar5 + 8))))
         ) goto LAB_1805d00bb;
    }
    if ((char)unaff_RBX[0x438] == '\0') {
      iVar3 = *(int *)((longlong)unaff_RBX + 0x14b4);
    }
    else {
      iVar3 = *(int *)((longlong)unaff_RBX + 0x21c4);
    }
    iVar3 = *(int *)(*(longlong *)((longlong)iVar3 * 0xa60 + 0x3630 + unaff_RBX[0x291]) + 0x2498);
    if (iVar3 != -1) {
      iVar9 = *(int *)((longlong)iVar3 * 0x68 + 0x5c + _DAT_180c96150);
    }
  }
LAB_1805d00bb:
  cVar2 = FUN_1805a3ab0(*unaff_RBX + 0x28);
  if (cVar2 == '\0') {
    iVar3 = *(int *)(*unaff_RBX + 0x70);
  }
  else {
    iVar3 = 1;
  }
  if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
    bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)unaff_RBX + 0x11c) = bVar1;
  }
  else {
    bVar1 = *(byte *)((longlong)unaff_RBX + 0x11c);
  }
  if (((bVar1 == 0) && (pfVar6 = (float *)FUN_1805b6b40(unaff_RBX + 1), 0.3 < *pfVar6)) &&
     (piVar4 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar4 == 7)) {
    if (iVar9 != 8) {
      if (iVar3 == 2) {
        bVar10 = iVar9 == 7;
      }
      else if (iVar3 == 3) {
        bVar10 = iVar9 == 6;
      }
      else if (iVar3 == 0) {
        bVar10 = iVar9 == 4;
      }
      else {
        if (iVar3 != 1) {
          return;
        }
        bVar10 = iVar9 == 5;
      }
      if (!bVar10) {
        return;
      }
    }
    uVar7 = FUN_1805b74c0(unaff_RBX + 1);
    cVar2 = func_0x00018051f6a0(uVar7);
    if (cVar2 == '\0') {
      fVar11 = (float)powf(*unaff_RBX,SQRT((float)((int)unaff_RBX[0x2db] + 1)));
    }
    else {
      fVar11 = *(float *)(*unaff_RBX + 0x310) / (float)((int)unaff_RBX[0x2db] + 1);
    }
    uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar8 = uVar8 >> 0x11 ^ uVar8;
    uVar8 = uVar8 << 5 ^ uVar8;
    *(uint *)(unaff_RBX + 0x272) = uVar8;
    if ((float)(uVar8 - 1) * 2.3283064e-10 < fVar11) {
      *(int *)(unaff_RBX + 0x2db) = (int)unaff_RBX[0x2db] + 1;
SUB_1805cef70:
      *(int32_t *)((longlong)unaff_RBX + 0x178c) = 0;
      if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)unaff_RBX + 0x158c) =
             *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
      }
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805cfe5c(void)
void FUN_1805cfe5c(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  int *piVar6;
  uint64_t uVar7;
  uint uVar8;
  longlong *unaff_RBX;
  int iVar9;
  bool bVar10;
  float fVar11;
  float unaff_XMM6_Da;
  
  if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
    FUN_1805d4440(unaff_RBX + 1);
  }
  if (*(char *)((longlong)unaff_RBX + 0xd5) == '\0') {
    if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
      FUN_1805d4440(unaff_RBX + 1);
    }
    if (unaff_XMM6_Da != *(float *)(unaff_RBX + 0x1b)) {
      uVar8 = *(uint *)(unaff_RBX + 2);
      if ((uVar8 >> 9 & 1) == 0) {
        func_0x0001805d4cd0(unaff_RBX + 1);
        uVar8 = *(uint *)(unaff_RBX + 2);
      }
      if ((uVar8 >> 0x1b & 1) == 0) {
        bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
        *(byte *)((longlong)unaff_RBX + 0x11c) = bVar1;
      }
      else {
        bVar1 = *(byte *)((longlong)unaff_RBX + 0x11c);
      }
      if ((*(byte *)(unaff_RBX + 0x20) == bVar1) &&
         (unaff_XMM6_Da <
          (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2df] * 8) -
                 unaff_RBX[0x2de]) * 1e-05)) {
        fVar11 = *(float *)(*unaff_RBX + 0x30c);
        uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
        uVar8 = uVar8 >> 0x11 ^ uVar8;
        uVar8 = uVar8 << 5 ^ uVar8;
        *(uint *)(unaff_RBX + 0x272) = uVar8;
        if ((float)(uVar8 - 1) * 2.3283064e-10 < fVar11) {
          uVar8 = uVar8 << 0xd ^ uVar8;
          *(int32_t *)((longlong)unaff_RBX + 0x178c) = 6;
          uVar8 = uVar8 >> 0x11 ^ uVar8;
          uVar8 = uVar8 << 5 ^ uVar8;
          *(uint *)(unaff_RBX + 0x272) = uVar8;
          unaff_RBX[0x2eb] =
               *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ec] * 8) -
               (longlong)(-40000.0 - (float)(uVar8 - 1) * 1.1641532e-05);
          return;
        }
      }
    }
  }
  iVar9 = -1;
  if (((int)unaff_RBX[0x295] != 5) && (cVar2 = func_0x0001805d1da0(), cVar2 != '\0')) {
    if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RBX + 1);
    }
    if (unaff_RBX[0x1e] == 0) {
      if ((*(uint *)(unaff_RBX + 2) & 0x20) == 0) {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RBX[1] + 0x8f8) + 0x9e8);
        unaff_RBX[0x15] = lVar4;
        *(uint *)(unaff_RBX + 2) = *(uint *)(unaff_RBX + 2) | 0x20;
      }
      else {
        lVar4 = unaff_RBX[0x15];
      }
      if (((lVar4 != 0) && (lVar4 = func_0x0001805b6e80(unaff_RBX + 1), 0 < *(int *)(lVar4 + 0x30)))
         && (((*(uint *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 +
                        *(longlong *)(lVar4 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(lVar4 + 8))))
         ) goto LAB_1805d00bb;
    }
    if ((char)unaff_RBX[0x438] == '\0') {
      iVar3 = *(int *)((longlong)unaff_RBX + 0x14b4);
    }
    else {
      iVar3 = *(int *)((longlong)unaff_RBX + 0x21c4);
    }
    iVar3 = *(int *)(*(longlong *)((longlong)iVar3 * 0xa60 + 0x3630 + unaff_RBX[0x291]) + 0x2498);
    if (iVar3 != -1) {
      iVar9 = *(int *)((longlong)iVar3 * 0x68 + 0x5c + _DAT_180c96150);
    }
  }
LAB_1805d00bb:
  cVar2 = FUN_1805a3ab0(*unaff_RBX + 0x28);
  if (cVar2 == '\0') {
    iVar3 = *(int *)(*unaff_RBX + 0x70);
  }
  else {
    iVar3 = 1;
  }
  if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
    bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)unaff_RBX + 0x11c) = bVar1;
  }
  else {
    bVar1 = *(byte *)((longlong)unaff_RBX + 0x11c);
  }
  if (((bVar1 == 0) && (pfVar5 = (float *)FUN_1805b6b40(unaff_RBX + 1), 0.3 < *pfVar5)) &&
     (piVar6 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar6 == 7)) {
    if (iVar9 != 8) {
      if (iVar3 == 2) {
        bVar10 = iVar9 == 7;
      }
      else if (iVar3 == 3) {
        bVar10 = iVar9 == 6;
      }
      else if (iVar3 == 0) {
        bVar10 = iVar9 == 4;
      }
      else {
        if (iVar3 != 1) {
          return;
        }
        bVar10 = iVar9 == 5;
      }
      if (!bVar10) {
        return;
      }
    }
    uVar7 = FUN_1805b74c0(unaff_RBX + 1);
    cVar2 = func_0x00018051f6a0(uVar7);
    if (cVar2 == '\0') {
      fVar11 = (float)powf(*unaff_RBX,SQRT((float)((int)unaff_RBX[0x2db] + 1)));
    }
    else {
      fVar11 = *(float *)(*unaff_RBX + 0x310) / (float)((int)unaff_RBX[0x2db] + 1);
    }
    uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar8 = uVar8 >> 0x11 ^ uVar8;
    uVar8 = uVar8 << 5 ^ uVar8;
    *(uint *)(unaff_RBX + 0x272) = uVar8;
    if ((float)(uVar8 - 1) * 2.3283064e-10 < fVar11) {
      *(int *)(unaff_RBX + 0x2db) = (int)unaff_RBX[0x2db] + 1;
      func_0x0001805cef70();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805cffc0(void)
void FUN_1805cffc0(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  int *piVar6;
  uint64_t uVar7;
  uint uVar8;
  longlong *unaff_RBX;
  int iVar9;
  bool bVar10;
  float fVar11;
  
  iVar9 = -1;
  if (((int)unaff_RBX[0x295] != 5) && (cVar1 = func_0x0001805d1da0(), cVar1 != '\0')) {
    if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RBX + 1);
    }
    if (unaff_RBX[0x1e] == 0) {
      if ((*(uint *)(unaff_RBX + 2) & 0x20) == 0) {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RBX[1] + 0x8f8) + 0x9e8);
        unaff_RBX[0x15] = lVar4;
        *(uint *)(unaff_RBX + 2) = *(uint *)(unaff_RBX + 2) | 0x20;
      }
      else {
        lVar4 = unaff_RBX[0x15];
      }
      if (((lVar4 != 0) && (lVar4 = func_0x0001805b6e80(unaff_RBX + 1), 0 < *(int *)(lVar4 + 0x30)))
         && (((*(uint *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 +
                        *(longlong *)(lVar4 + 0xd0)) >> 9 & 1) == 0 || (0 < *(short *)(lVar4 + 8))))
         ) goto LAB_1805d00bb;
    }
    if ((char)unaff_RBX[0x438] == '\0') {
      iVar3 = *(int *)((longlong)unaff_RBX + 0x14b4);
    }
    else {
      iVar3 = *(int *)((longlong)unaff_RBX + 0x21c4);
    }
    iVar3 = *(int *)(*(longlong *)((longlong)iVar3 * 0xa60 + 0x3630 + unaff_RBX[0x291]) + 0x2498);
    if (iVar3 != -1) {
      iVar9 = *(int *)((longlong)iVar3 * 0x68 + 0x5c + _DAT_180c96150);
    }
  }
LAB_1805d00bb:
  cVar1 = FUN_1805a3ab0(*unaff_RBX + 0x28);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*unaff_RBX + 0x70);
  }
  else {
    iVar3 = 1;
  }
  if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
    bVar2 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)unaff_RBX + 0x11c) = bVar2;
  }
  else {
    bVar2 = *(byte *)((longlong)unaff_RBX + 0x11c);
  }
  if (((bVar2 == 0) && (pfVar5 = (float *)FUN_1805b6b40(unaff_RBX + 1), 0.3 < *pfVar5)) &&
     (piVar6 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar6 == 7)) {
    if (iVar9 != 8) {
      if (iVar3 == 2) {
        bVar10 = iVar9 == 7;
      }
      else if (iVar3 == 3) {
        bVar10 = iVar9 == 6;
      }
      else if (iVar3 == 0) {
        bVar10 = iVar9 == 4;
      }
      else {
        if (iVar3 != 1) {
          return;
        }
        bVar10 = iVar9 == 5;
      }
      if (!bVar10) {
        return;
      }
    }
    uVar7 = FUN_1805b74c0(unaff_RBX + 1);
    cVar1 = func_0x00018051f6a0(uVar7);
    if (cVar1 == '\0') {
      fVar11 = (float)powf(*unaff_RBX,SQRT((float)((int)unaff_RBX[0x2db] + 1)));
    }
    else {
      fVar11 = *(float *)(*unaff_RBX + 0x310) / (float)((int)unaff_RBX[0x2db] + 1);
    }
    uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar8 = uVar8 >> 0x11 ^ uVar8;
    uVar8 = uVar8 << 5 ^ uVar8;
    *(uint *)(unaff_RBX + 0x272) = uVar8;
    if ((float)(uVar8 - 1) * 2.3283064e-10 < fVar11) {
      *(int *)(unaff_RBX + 0x2db) = (int)unaff_RBX[0x2db] + 1;
      func_0x0001805cef70();
    }
  }
  return;
}






// 函数: void FUN_1805d00c2(void)
void FUN_1805d00c2(void)

{
  char cVar1;
  byte bVar2;
  float *pfVar3;
  int *piVar4;
  uint64_t uVar5;
  uint uVar6;
  longlong *unaff_RBX;
  int iVar7;
  int unaff_ESI;
  bool bVar8;
  float fVar9;
  
  cVar1 = FUN_1805a3ab0();
  if (cVar1 == '\0') {
    iVar7 = *(int *)(*unaff_RBX + 0x70);
  }
  else {
    iVar7 = 1;
  }
  if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
    bVar2 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
    *(byte *)((longlong)unaff_RBX + 0x11c) = bVar2;
  }
  else {
    bVar2 = *(byte *)((longlong)unaff_RBX + 0x11c);
  }
  if (((bVar2 == 0) && (pfVar3 = (float *)FUN_1805b6b40(unaff_RBX + 1), 0.3 < *pfVar3)) &&
     (piVar4 = (int *)FUN_1805b7660(unaff_RBX + 1), *piVar4 == 7)) {
    if (unaff_ESI != 8) {
      if (iVar7 == 2) {
        bVar8 = unaff_ESI == 7;
      }
      else if (iVar7 == 3) {
        bVar8 = unaff_ESI == 6;
      }
      else if (iVar7 == 0) {
        bVar8 = unaff_ESI == 4;
      }
      else {
        if (iVar7 != 1) {
          return;
        }
        bVar8 = unaff_ESI == 5;
      }
      if (!bVar8) {
        return;
      }
    }
    uVar5 = FUN_1805b74c0(unaff_RBX + 1);
    cVar1 = func_0x00018051f6a0(uVar5);
    if (cVar1 == '\0') {
      fVar9 = (float)powf(*unaff_RBX,SQRT((float)((int)unaff_RBX[0x2db] + 1)));
    }
    else {
      fVar9 = *(float *)(*unaff_RBX + 0x310) / (float)((int)unaff_RBX[0x2db] + 1);
    }
    uVar6 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    *(uint *)(unaff_RBX + 0x272) = uVar6;
    if ((float)(uVar6 - 1) * 2.3283064e-10 < fVar9) {
      *(int *)(unaff_RBX + 0x2db) = (int)unaff_RBX[0x2db] + 1;
      func_0x0001805cef70();
    }
  }
  return;
}






// 函数: void FUN_1805d0225(void)
void FUN_1805d0225(void)

{
  byte bVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  
  if ((*(byte *)(unaff_RBX + 2) & 0x80) == 0) {
    FUN_1805d4440(unaff_RBX + 1);
  }
  if (*(char *)((longlong)unaff_RBX + 0xd5) != '\0') {
    if ((*(uint *)(unaff_RBX + 2) & 0x8000000) == 0) {
      bVar1 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RBX[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RBX + 0x11c) = bVar1;
    }
    else {
      bVar1 = *(byte *)((longlong)unaff_RBX + 0x11c);
    }
    if ((bVar1 == 0) &&
       ((*(char *)((longlong)unaff_RBX + 0x16d6) != '\0' ||
        ((float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2df] * 8) -
                unaff_RBX[0x2de]) * 1e-05 < 0.0)))) {
      lVar2 = *unaff_RBX;
      if ((*(int *)(lVar2 + 0x1fc) == 1) || (*(int *)(lVar2 + 0x1fc) == 2)) {
        *(uint *)((longlong)unaff_RBX + 0x158c) =
             *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
        lVar2 = *unaff_RBX;
      }
      unaff_RBX[0x2e9] =
           *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ea] * 8) -
           (longlong)(*(float *)(lVar2 + 0x304) * 100000.0);
      *(int32_t *)((longlong)unaff_RBX + 0x178c) = 7;
      return;
    }
  }
  unaff_RBX[0x2e9] =
       *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x2ea] * 8) -
       (longlong)(*(float *)(*unaff_RBX + 0x304) * 100000.0);
  *(int32_t *)((longlong)unaff_RBX + 0x178c) = 0;
  if (*(int *)(*unaff_RBX + 0x1fc) - 1U < 2) {
    *(uint *)((longlong)unaff_RBX + 0x158c) =
         *(uint *)((longlong)unaff_RBX + 0x158c) & 0xfffffc3f | 0x4000;
  }
  *(int32_t *)(unaff_RBX + 0x2db) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d0390(longlong *param_1)
void FUN_1805d0390(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = func_0x0001805b7270(param_1 + 1);
  if (lVar2 != 0) {
    *(uint *)((longlong)param_1 + 0x159c) =
         *(uint *)((longlong)param_1 + 0x159c) | *(uint *)(param_1 + 0x2f1);
  }
  if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
    FUN_1805d4440(param_1 + 1);
  }
  if (*(char *)((longlong)param_1 + 0xd4) == '\0') {
    return;
  }
  uVar5 = *(uint *)(param_1 + 2);
  if ((uVar5 & 0x20) == 0) {
    uVar5 = uVar5 | 0x20;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = lVar2;
    *(uint *)(param_1 + 2) = uVar5;
  }
  else {
    lVar2 = param_1[0x15];
  }
  if (lVar2 != 0) {
    if ((uVar5 & 0x20) == 0) {
      param_1[0x15] = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
      *(uint *)(param_1 + 2) = uVar5 | 0x20;
      lVar2 = param_1[0x15];
    }
    if ((0 < *(int *)(lVar2 + 0x30)) &&
       ((((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0))
           >> 9 & 1) == 0 || (0 < *(short *)(lVar2 + 8))) &&
        (lVar2 = func_0x0001805b6e80(param_1 + 1),
        (*(byte *)((longlong)
                   *(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 +
                           *(longlong *)(lVar2 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10) !=
        0)))) {
      return;
    }
  }
  if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
  }
  if ((char)param_1[0x20] != '\0') {
    if ((*(uint *)(param_1 + 2) & 0x400000) == 0) {
      uVar3 = *(ulonglong *)(*(longlong *)param_1[1] + 0x280);
      if (uVar3 != 0) {
        uVar3 = (ulonglong)(*(int *)(uVar3 + 0x104) == 1);
      }
      *(char *)((longlong)param_1 + 0xc2) = (char)uVar3;
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x400000;
    }
    if (*(char *)((longlong)param_1 + 0xc2) != '\0') goto FUN_1805d061e;
  }
  piVar4 = (int *)FUN_1805b7660(param_1 + 1);
  if (*piVar4 == 2) {
    return;
  }
  if ((float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x2dd] * 8) - param_1[0x2dc]) *
      1e-05 <= 0.0) {
    return;
  }
  if (0.0 <= (float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x2df] * 8) -
                    param_1[0x2de]) * 1e-05) {
    piVar4 = (int *)FUN_1805b7660(param_1 + 1);
    if (*piVar4 == 1) {
      fVar7 = *(float *)(*param_1 + 0x2e8);
    }
    else {
      fVar7 = *(float *)(*param_1 + 0x350);
    }
    uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar5 = uVar5 >> 0x11 ^ uVar5;
    uVar5 = uVar5 << 5 ^ uVar5;
    *(uint *)(param_1 + 0x272) = uVar5;
    FUN_1805b7740(param_1 + 1);
    fVar6 = (float)powf((float)(uVar5 - 1) * 2.3283064e-10);
    if (fVar7 <= 1.0 - fVar6) {
      return;
    }
  }
FUN_1805d061e:
  if (((param_1[0x41e] != 0) &&
      (((int)param_1[0x295] - 5U < 2 ||
       (((*(byte *)((longlong)param_1 + 0x209c) & 1) != 0 && ((*(byte *)(param_1 + 0x413) & 1) != 0)
        ))))) || (cVar1 = FUN_1805d06b0(param_1), cVar1 == '\0')) {
    param_1[0x2e9] =
         *(longlong *)(&system_error_code + (longlong)(int)param_1[0x2ea] * 8) -
         (longlong)(*(float *)(*param_1 + 0x31c) * 100000.0);
    *(int32_t *)((longlong)param_1 + 0x178c) = 7;
    *(int8_t *)(param_1 + 0x2e4) = 0;
  }
  return;
}






// 函数: void FUN_1805d04b4(void)
void FUN_1805d04b4(void)

{
  char cVar1;
  ulonglong uVar2;
  int *piVar3;
  uint uVar4;
  longlong *unaff_RSI;
  bool in_ZF;
  float fVar5;
  float fVar6;
  
  if (in_ZF) {
    func_0x0001805d4cd0(unaff_RSI + 1);
  }
  if ((char)unaff_RSI[0x20] != '\0') {
    if ((*(uint *)(unaff_RSI + 2) & 0x400000) == 0) {
      uVar2 = *(ulonglong *)(*(longlong *)unaff_RSI[1] + 0x280);
      if (uVar2 != 0) {
        uVar2 = (ulonglong)(*(int *)(uVar2 + 0x104) == 1);
      }
      *(char *)((longlong)unaff_RSI + 0xc2) = (char)uVar2;
      *(uint *)(unaff_RSI + 2) = *(uint *)(unaff_RSI + 2) | 0x400000;
    }
    if (*(char *)((longlong)unaff_RSI + 0xc2) != '\0') goto FUN_1805d061e;
  }
  piVar3 = (int *)FUN_1805b7660(unaff_RSI + 1);
  if (*piVar3 == 2) {
    return;
  }
  if ((float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x2dd] * 8) - unaff_RSI[0x2dc]
             ) * 1e-05 <= 0.0) {
    return;
  }
  if (0.0 <= (float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x2df] * 8) -
                    unaff_RSI[0x2de]) * 1e-05) {
    piVar3 = (int *)FUN_1805b7660(unaff_RSI + 1);
    if (*piVar3 == 1) {
      fVar6 = *(float *)(*unaff_RSI + 0x2e8);
    }
    else {
      fVar6 = *(float *)(*unaff_RSI + 0x350);
    }
    uVar4 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    uVar4 = uVar4 << 5 ^ uVar4;
    *(uint *)(unaff_RSI + 0x272) = uVar4;
    FUN_1805b7740(unaff_RSI + 1);
    fVar5 = (float)powf((float)(uVar4 - 1) * 2.3283064e-10);
    if (fVar6 <= 1.0 - fVar5) {
      return;
    }
  }
FUN_1805d061e:
  if (((unaff_RSI[0x41e] != 0) &&
      (((int)unaff_RSI[0x295] - 5U < 2 ||
       (((*(byte *)((longlong)unaff_RSI + 0x209c) & 1) != 0 &&
        ((*(byte *)(unaff_RSI + 0x413) & 1) != 0)))))) || (cVar1 = FUN_1805d06b0(), cVar1 == '\0'))
  {
    unaff_RSI[0x2e9] =
         *(longlong *)(&system_error_code + (longlong)(int)unaff_RSI[0x2ea] * 8) -
         (longlong)(*(float *)(*unaff_RSI + 0x31c) * 100000.0);
    *(int32_t *)((longlong)unaff_RSI + 0x178c) = 7;
    *(int8_t *)(unaff_RSI + 0x2e4) = 0;
  }
  return;
}






