#include "TaleWorlds.Native.Split.h"

// 01_initialization_part062.c - 16 个函数

// 函数: void FUN_18007f933(undefined8 param_1,longlong param_2)
void FUN_18007f933(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  uint *puVar14;
  undefined4 unaff_ESI;
  uint uVar15;
  longlong unaff_RDI;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  
  param_2 = (longlong)*(int *)(param_2 + 0x250) * 0x128 + param_2;
  uVar5 = FUN_180080380(param_2,unaff_ESI);
  *(undefined4 *)(unaff_RDI + 0x30) = uVar5;
  FUN_1800802e0(param_2,uVar5);
  if (*(longlong *)(unaff_RDI + 0x10) == 0) {
    if (*(int *)(unaff_RDI + 0x18) != 0) {
      *(undefined4 *)(unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RDI + 0x30);
      return;
    }
  }
  else {
    cVar4 = *(char *)(unaff_RDI + 0x44);
    uVar12 = (ulonglong)cVar4;
    plVar1 = (longlong *)(unaff_RDI + 0x38);
    iVar19 = (int)cVar4;
    if (*(int *)(unaff_RDI + 0x40) == (int)cVar4) {
      plVar7 = (longlong *)*plVar1;
    }
    else {
      *(int *)(unaff_RDI + 0x40) = iVar19;
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar1 = 0;
      if (cVar4 == '\0') {
        plVar7 = (longlong *)0x0;
        *plVar1 = 0;
      }
      else {
        plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)cVar4 * 4);
        *plVar1 = (longlong)plVar7;
      }
    }
    if (plVar7 != (longlong *)0x0) {
      iVar16 = 0;
      uVar15 = (uint)cVar4;
      iVar17 = iVar16;
      if ((0 < iVar19) && (0xf < uVar15)) {
        iVar10 = *(int *)(unaff_RDI + 0x2c);
        plVar2 = (longlong *)((longlong)plVar7 + (longlong)(cVar4 + -1) * 4);
        if ((((longlong *)(unaff_RDI + 0x2c) < plVar7) || (plVar2 < (longlong *)(unaff_RDI + 0x2c)))
           && ((plVar1 < plVar7 || (iVar17 = 0, plVar2 < plVar1)))) {
          uVar6 = uVar15 & 0x8000000f;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
          }
          plVar7 = plVar7 + 4;
          iVar9 = 8;
          do {
            *(int *)(plVar7 + -4) = iVar16 + iVar10;
            *(int *)((longlong)plVar7 + -0x1c) = iVar16 + 1 + iVar10;
            *(int *)(plVar7 + -3) = iVar16 + 2 + iVar10;
            *(int *)((longlong)plVar7 + -0x14) = iVar16 + 3 + iVar10;
            iVar16 = iVar16 + 0x10;
            *(int *)(plVar7 + -2) = iVar9 + -4 + iVar10;
            *(int *)((longlong)plVar7 + -0xc) = iVar9 + -3 + iVar10;
            *(int *)(plVar7 + -1) = iVar9 + -2 + iVar10;
            *(int *)((longlong)plVar7 + -4) = iVar9 + -1 + iVar10;
            *(int *)plVar7 = iVar9 + iVar10;
            *(int *)((longlong)plVar7 + 4) = iVar9 + 1 + iVar10;
            *(int *)(plVar7 + 1) = iVar9 + 2 + iVar10;
            *(int *)((longlong)plVar7 + 0xc) = iVar9 + 3 + iVar10;
            *(int *)(plVar7 + 2) = iVar9 + 4 + iVar10;
            *(int *)((longlong)plVar7 + 0x14) = iVar9 + 5 + iVar10;
            *(int *)(plVar7 + 3) = iVar9 + 6 + iVar10;
            *(int *)((longlong)plVar7 + 0x1c) = iVar9 + 7 + iVar10;
            plVar7 = plVar7 + 8;
            iVar9 = iVar9 + 0x10;
            iVar17 = iVar16;
          } while (iVar16 < (int)(uVar15 - uVar6));
        }
      }
      for (lVar11 = (longlong)iVar17; lVar11 < (longlong)uVar12; lVar11 = lVar11 + 1) {
        iVar16 = *(int *)(unaff_RDI + 0x2c) + iVar17;
        iVar17 = iVar17 + 1;
        *(int *)(*plVar1 + lVar11 * 4) = iVar16;
      }
      iVar17 = *(int *)(unaff_RDI + 0x18);
      iVar16 = 0;
      if (0 < (longlong)iVar17) {
        lVar11 = 0;
        do {
          iVar10 = *(int *)(unaff_RDI + 0x30) + iVar16;
          iVar16 = iVar16 + 1;
          pbVar3 = (byte *)(*(longlong *)(unaff_RDI + 0x10) + lVar11);
          lVar11 = lVar11 + 1;
          *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar10;
        } while (lVar11 < iVar17);
      }
    }
    puVar14 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 + _DAT_180c86890 + 0x9d0);
    if (iVar19 == 0) {
      uVar15 = (int)cVar4 - 1;
    }
    else {
      LOCK();
      uVar15 = *puVar14;
      *puVar14 = *puVar14 + (int)cVar4;
      UNLOCK();
      uVar21 = (ulonglong)(uVar15 >> 0xb);
      uVar22 = (ulonglong)(cVar4 + -1 + uVar15 >> 0xb);
      if (uVar21 <= uVar22) {
        pcVar13 = (char *)((longlong)puVar14 + uVar21 + 0x108);
        lVar11 = (uVar22 - uVar21) + 1;
        puVar20 = puVar14 + uVar21 * 2 + 2;
        do {
          iVar17 = (int)uVar21;
          if (*(longlong *)puVar20 == 0) {
            lVar8 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
            LOCK();
            bVar23 = *(longlong *)(puVar14 + (longlong)iVar17 * 2 + 2) == 0;
            if (bVar23) {
              *(longlong *)(puVar14 + (longlong)iVar17 * 2 + 2) = lVar8;
            }
            UNLOCK();
            if (bVar23) {
              LOCK();
              *(undefined1 *)((longlong)iVar17 + 0x108 + (longlong)puVar14) = 0;
              UNLOCK();
            }
            else {
              if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              do {
              } while (*pcVar13 != '\0');
            }
          }
          else {
            do {
            } while (*pcVar13 != '\0');
          }
          uVar21 = (ulonglong)(iVar17 + 1);
          puVar20 = puVar20 + 2;
          pcVar13 = pcVar13 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    puVar18 = *(undefined4 **)(unaff_RDI + 0x38);
    uVar6 = uVar15 >> 0xb;
    *(uint *)(unaff_RDI + 0x2c) = uVar15;
    if (uVar6 == (int)cVar4 + uVar15 >> 0xb) {
                    // WARNING: Subroutine does not return
      memcpy(*(longlong *)(puVar14 + (ulonglong)uVar6 * 2 + 2) +
             (ulonglong)(uVar15 + uVar6 * -0x800) * 4,puVar18,(uVar12 & 0xffffffff) << 2);
    }
    if (iVar19 != 0) {
      uVar12 = uVar12 & 0xffffffff;
      do {
        uVar5 = *puVar18;
        puVar18 = puVar18 + 1;
        *(undefined4 *)
         (*(longlong *)(puVar14 + (ulonglong)(uVar15 >> 0xb) * 2 + 2) +
         (ulonglong)(uVar15 + (uVar15 >> 0xb) * -0x800) * 4) = uVar5;
        uVar12 = uVar12 - 1;
        uVar15 = uVar15 + 1;
      } while (uVar12 != 0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f976(void)
void FUN_18007f976(void)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong unaff_RBX;
  char *pcVar13;
  uint *puVar14;
  longlong unaff_RDI;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  bool bVar21;
  
  plVar1 = (longlong *)(unaff_RDI + 0x38);
  uVar12 = (uint)unaff_RBX;
  if (*(uint *)(unaff_RDI + 0x40) == uVar12) {
    plVar7 = (longlong *)*plVar1;
  }
  else {
    *(uint *)(unaff_RDI + 0x40) = uVar12;
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar1 = 0;
    if ((char)unaff_RBX == '\0') {
      plVar7 = (longlong *)0x0;
      *plVar1 = 0;
    }
    else {
      plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)(char)unaff_RBX * 4);
      *plVar1 = (longlong)plVar7;
    }
  }
  if (plVar7 != (longlong *)0x0) {
    iVar15 = 0;
    iVar16 = iVar15;
    if ((0 < (int)uVar12) && (0xf < uVar12)) {
      iVar10 = *(int *)(unaff_RDI + 0x2c);
      plVar2 = (longlong *)((longlong)plVar7 + (longlong)(int)(uVar12 - 1) * 4);
      if ((((longlong *)(unaff_RDI + 0x2c) < plVar7) || (plVar2 < (longlong *)(unaff_RDI + 0x2c)))
         && ((plVar1 < plVar7 || (iVar16 = 0, plVar2 < plVar1)))) {
        uVar6 = uVar12 & 0x8000000f;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
        }
        plVar7 = plVar7 + 4;
        iVar9 = 8;
        do {
          *(int *)(plVar7 + -4) = iVar15 + iVar10;
          *(int *)((longlong)plVar7 + -0x1c) = iVar15 + 1 + iVar10;
          *(int *)(plVar7 + -3) = iVar15 + 2 + iVar10;
          *(int *)((longlong)plVar7 + -0x14) = iVar15 + 3 + iVar10;
          iVar15 = iVar15 + 0x10;
          *(int *)(plVar7 + -2) = iVar9 + -4 + iVar10;
          *(int *)((longlong)plVar7 + -0xc) = iVar9 + -3 + iVar10;
          *(int *)(plVar7 + -1) = iVar9 + -2 + iVar10;
          *(int *)((longlong)plVar7 + -4) = iVar9 + -1 + iVar10;
          *(int *)plVar7 = iVar9 + iVar10;
          *(int *)((longlong)plVar7 + 4) = iVar9 + 1 + iVar10;
          *(int *)(plVar7 + 1) = iVar9 + 2 + iVar10;
          *(int *)((longlong)plVar7 + 0xc) = iVar9 + 3 + iVar10;
          *(int *)(plVar7 + 2) = iVar9 + 4 + iVar10;
          *(int *)((longlong)plVar7 + 0x14) = iVar9 + 5 + iVar10;
          *(int *)(plVar7 + 3) = iVar9 + 6 + iVar10;
          *(int *)((longlong)plVar7 + 0x1c) = iVar9 + 7 + iVar10;
          plVar7 = plVar7 + 8;
          iVar9 = iVar9 + 0x10;
          iVar16 = iVar15;
        } while (iVar15 < (int)(uVar12 - uVar6));
      }
    }
    for (lVar11 = (longlong)iVar16; lVar11 < (longlong)unaff_RBX; lVar11 = lVar11 + 1) {
      iVar15 = *(int *)(unaff_RDI + 0x2c) + iVar16;
      iVar16 = iVar16 + 1;
      *(int *)(*plVar1 + lVar11 * 4) = iVar15;
    }
    iVar16 = *(int *)(unaff_RDI + 0x18);
    iVar15 = 0;
    if (0 < (longlong)iVar16) {
      lVar11 = 0;
      do {
        iVar10 = *(int *)(unaff_RDI + 0x30) + iVar15;
        iVar15 = iVar15 + 1;
        pbVar3 = (byte *)(*(longlong *)(unaff_RDI + 0x10) + lVar11);
        lVar11 = lVar11 + 1;
        *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar10;
      } while (lVar11 < iVar16);
    }
  }
  puVar14 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 + _DAT_180c86890 + 0x9d0);
  if (uVar12 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    LOCK();
    uVar6 = *puVar14;
    *puVar14 = *puVar14 + uVar12;
    UNLOCK();
    uVar18 = (ulonglong)(uVar6 >> 0xb);
    uVar20 = (ulonglong)((uVar12 - 1) + uVar6 >> 0xb);
    if (uVar18 <= uVar20) {
      pcVar13 = (char *)((longlong)puVar14 + uVar18 + 0x108);
      lVar11 = (uVar20 - uVar18) + 1;
      puVar19 = puVar14 + uVar18 * 2 + 2;
      do {
        iVar16 = (int)uVar18;
        if (*(longlong *)puVar19 == 0) {
          lVar8 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
          LOCK();
          bVar21 = *(longlong *)(puVar14 + (longlong)iVar16 * 2 + 2) == 0;
          if (bVar21) {
            *(longlong *)(puVar14 + (longlong)iVar16 * 2 + 2) = lVar8;
          }
          UNLOCK();
          if (bVar21) {
            LOCK();
            *(undefined1 *)((longlong)iVar16 + 0x108 + (longlong)puVar14) = 0;
            UNLOCK();
          }
          else {
            if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            do {
            } while (*pcVar13 != '\0');
          }
        }
        else {
          do {
          } while (*pcVar13 != '\0');
        }
        uVar18 = (ulonglong)(iVar16 + 1);
        puVar19 = puVar19 + 2;
        pcVar13 = pcVar13 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  puVar17 = *(undefined4 **)(unaff_RDI + 0x38);
  uVar5 = uVar6 >> 0xb;
  *(uint *)(unaff_RDI + 0x2c) = uVar6;
  if (uVar5 == uVar12 + uVar6 >> 0xb) {
                    // WARNING: Subroutine does not return
    memcpy(*(longlong *)(puVar14 + (ulonglong)uVar5 * 2 + 2) +
           (ulonglong)(uVar6 + uVar5 * -0x800) * 4,puVar17,(unaff_RBX & 0xffffffff) << 2);
  }
  if (uVar12 != 0) {
    uVar18 = unaff_RBX & 0xffffffff;
    do {
      uVar4 = *puVar17;
      puVar17 = puVar17 + 1;
      *(undefined4 *)
       (*(longlong *)(puVar14 + (ulonglong)(uVar6 >> 0xb) * 2 + 2) +
       (ulonglong)(uVar6 + (uVar6 >> 0xb) * -0x800) * 4) = uVar4;
      uVar18 = uVar18 - 1;
      uVar6 = uVar6 + 1;
    } while (uVar18 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007f983(void)
void FUN_18007f983(void)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int unaff_EBX;
  char *pcVar12;
  uint *puVar13;
  longlong unaff_RDI;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong unaff_R12;
  uint *puVar19;
  ulonglong uVar20;
  bool bVar21;
  
  plVar1 = (longlong *)(unaff_RDI + 0x38);
  uVar18 = (uint)unaff_R12;
  if (*(int *)(unaff_RDI + 0x40) == unaff_EBX) {
    plVar7 = (longlong *)*plVar1;
  }
  else {
    *(uint *)(unaff_RDI + 0x40) = uVar18;
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar1 = 0;
    if ((char)unaff_EBX == '\0') {
      plVar7 = (longlong *)0x0;
      *plVar1 = 0;
    }
    else {
      plVar7 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,(longlong)(char)unaff_EBX * 4);
      *plVar1 = (longlong)plVar7;
    }
  }
  if (plVar7 != (longlong *)0x0) {
    iVar14 = 0;
    iVar15 = iVar14;
    if ((0 < (int)uVar18) && (0xf < uVar18)) {
      iVar10 = *(int *)(unaff_RDI + 0x2c);
      plVar2 = (longlong *)((longlong)plVar7 + (longlong)(int)(uVar18 - 1) * 4);
      if ((((longlong *)(unaff_RDI + 0x2c) < plVar7) || (plVar2 < (longlong *)(unaff_RDI + 0x2c)))
         && ((plVar1 < plVar7 || (iVar15 = 0, plVar2 < plVar1)))) {
        uVar6 = uVar18 & 0x8000000f;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
        }
        plVar7 = plVar7 + 4;
        iVar9 = 8;
        do {
          *(int *)(plVar7 + -4) = iVar14 + iVar10;
          *(int *)((longlong)plVar7 + -0x1c) = iVar14 + 1 + iVar10;
          *(int *)(plVar7 + -3) = iVar14 + 2 + iVar10;
          *(int *)((longlong)plVar7 + -0x14) = iVar14 + 3 + iVar10;
          iVar14 = iVar14 + 0x10;
          *(int *)(plVar7 + -2) = iVar9 + -4 + iVar10;
          *(int *)((longlong)plVar7 + -0xc) = iVar9 + -3 + iVar10;
          *(int *)(plVar7 + -1) = iVar9 + -2 + iVar10;
          *(int *)((longlong)plVar7 + -4) = iVar9 + -1 + iVar10;
          *(int *)plVar7 = iVar9 + iVar10;
          *(int *)((longlong)plVar7 + 4) = iVar9 + 1 + iVar10;
          *(int *)(plVar7 + 1) = iVar9 + 2 + iVar10;
          *(int *)((longlong)plVar7 + 0xc) = iVar9 + 3 + iVar10;
          *(int *)(plVar7 + 2) = iVar9 + 4 + iVar10;
          *(int *)((longlong)plVar7 + 0x14) = iVar9 + 5 + iVar10;
          *(int *)(plVar7 + 3) = iVar9 + 6 + iVar10;
          *(int *)((longlong)plVar7 + 0x1c) = iVar9 + 7 + iVar10;
          plVar7 = plVar7 + 8;
          iVar9 = iVar9 + 0x10;
          iVar15 = iVar14;
        } while (iVar14 < (int)(uVar18 - uVar6));
      }
    }
    for (lVar11 = (longlong)iVar15; lVar11 < (longlong)unaff_R12; lVar11 = lVar11 + 1) {
      iVar14 = *(int *)(unaff_RDI + 0x2c) + iVar15;
      iVar15 = iVar15 + 1;
      *(int *)(*plVar1 + lVar11 * 4) = iVar14;
    }
    iVar15 = *(int *)(unaff_RDI + 0x18);
    iVar14 = 0;
    if (0 < (longlong)iVar15) {
      lVar11 = 0;
      do {
        iVar10 = *(int *)(unaff_RDI + 0x30) + iVar14;
        iVar14 = iVar14 + 1;
        pbVar3 = (byte *)(*(longlong *)(unaff_RDI + 0x10) + lVar11);
        lVar11 = lVar11 + 1;
        *(int *)(*plVar1 + (ulonglong)*pbVar3 * 4) = iVar10;
      } while (lVar11 < iVar15);
    }
  }
  puVar13 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 + _DAT_180c86890 + 0x9d0);
  if (uVar18 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    LOCK();
    uVar6 = *puVar13;
    *puVar13 = *puVar13 + uVar18;
    UNLOCK();
    uVar17 = (ulonglong)(uVar6 >> 0xb);
    uVar20 = (ulonglong)((uVar18 - 1) + uVar6 >> 0xb);
    if (uVar17 <= uVar20) {
      pcVar12 = (char *)((longlong)puVar13 + uVar17 + 0x108);
      lVar11 = (uVar20 - uVar17) + 1;
      puVar19 = puVar13 + uVar17 * 2 + 2;
      do {
        iVar15 = (int)uVar17;
        if (*(longlong *)puVar19 == 0) {
          lVar8 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
          LOCK();
          bVar21 = *(longlong *)(puVar13 + (longlong)iVar15 * 2 + 2) == 0;
          if (bVar21) {
            *(longlong *)(puVar13 + (longlong)iVar15 * 2 + 2) = lVar8;
          }
          UNLOCK();
          if (bVar21) {
            LOCK();
            *(undefined1 *)((longlong)iVar15 + 0x108 + (longlong)puVar13) = 0;
            UNLOCK();
          }
          else {
            if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            do {
            } while (*pcVar12 != '\0');
          }
        }
        else {
          do {
          } while (*pcVar12 != '\0');
        }
        uVar17 = (ulonglong)(iVar15 + 1);
        puVar19 = puVar19 + 2;
        pcVar12 = pcVar12 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  puVar16 = *(undefined4 **)(unaff_RDI + 0x38);
  uVar5 = uVar6 >> 0xb;
  *(uint *)(unaff_RDI + 0x2c) = uVar6;
  if (uVar5 == uVar18 + uVar6 >> 0xb) {
                    // WARNING: Subroutine does not return
    memcpy(*(longlong *)(puVar13 + (ulonglong)uVar5 * 2 + 2) +
           (ulonglong)(uVar6 + uVar5 * -0x800) * 4,puVar16,(unaff_R12 & 0xffffffff) << 2);
  }
  if (uVar18 != 0) {
    uVar17 = unaff_R12 & 0xffffffff;
    do {
      uVar4 = *puVar16;
      puVar16 = puVar16 + 1;
      *(undefined4 *)
       (*(longlong *)(puVar13 + (ulonglong)(uVar6 >> 0xb) * 2 + 2) +
       (ulonglong)(uVar6 + (uVar6 >> 0xb) * -0x800) * 4) = uVar4;
      uVar17 = uVar17 - 1;
      uVar6 = uVar6 + 1;
    } while (uVar17 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007fb5f(void)
void FUN_18007fb5f(void)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  uint *unaff_RBP;
  uint uVar5;
  longlong unaff_RDI;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint unaff_R12D;
  undefined8 *unaff_R13;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  LOCK();
  uVar5 = *unaff_RBP;
  *unaff_RBP = *unaff_RBP + unaff_R12D;
  UNLOCK();
  uVar7 = (ulonglong)(uVar5 >> 0xb);
  uVar10 = (ulonglong)((unaff_R12D - 1) + uVar5 >> 0xb);
  if (uVar7 <= uVar10) {
    pcVar4 = (char *)((longlong)unaff_RBP + uVar7 + 0x108);
    lVar11 = (uVar10 - uVar7) + 1;
    puVar8 = unaff_RBP + (ulonglong)(uVar5 >> 0xb) * 2 + 2;
    do {
      iVar9 = (int)uVar7;
      if (*(longlong *)puVar8 == 0) {
        lVar2 = FUN_18062b420(_DAT_180c8ed18,0x2000,0x25);
        LOCK();
        bVar12 = *(longlong *)(unaff_RBP + (longlong)iVar9 * 2 + 2) == 0;
        if (bVar12) {
          *(longlong *)(unaff_RBP + (longlong)iVar9 * 2 + 2) = lVar2;
        }
        UNLOCK();
        if (bVar12) {
          LOCK();
          *(undefined1 *)((longlong)iVar9 + 0x108 + (longlong)unaff_RBP) = 0;
          UNLOCK();
        }
        else {
          if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          do {
          } while (*pcVar4 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar4 != '\0');
      }
      uVar7 = (ulonglong)(iVar9 + 1);
      puVar8 = puVar8 + 2;
      pcVar4 = pcVar4 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    unaff_R13 = (undefined8 *)(unaff_RDI + 0x38);
  }
  puVar6 = (undefined4 *)*unaff_R13;
  uVar3 = uVar5 >> 0xb;
  *(uint *)(unaff_RDI + 0x2c) = uVar5;
  if (uVar3 != unaff_R12D + uVar5 >> 0xb) {
    if (unaff_R12D != 0) {
      uVar7 = (ulonglong)unaff_R12D;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *(undefined4 *)
         (*(longlong *)(unaff_RBP + (ulonglong)(uVar5 >> 0xb) * 2 + 2) +
         (ulonglong)(uVar5 + (uVar5 >> 0xb) * -0x800) * 4) = uVar1;
        uVar7 = uVar7 - 1;
        uVar5 = uVar5 + 1;
      } while (uVar7 != 0);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  memcpy(*(longlong *)(unaff_RBP + (ulonglong)uVar3 * 2 + 2) +
         (ulonglong)(uVar5 + uVar3 * -0x800) * 4,puVar6,(ulonglong)unaff_R12D << 2);
}





// 函数: void FUN_18007fc19(void)
void FUN_18007fc19(void)

{
  undefined4 uVar1;
  uint uVar2;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint unaff_R12D;
  undefined8 *unaff_R13;
  
  puVar3 = (undefined4 *)*unaff_R13;
  uVar2 = unaff_ESI >> 0xb;
  *(uint *)(unaff_RDI + 0x2c) = unaff_ESI;
  if (uVar2 != unaff_R12D + unaff_ESI >> 0xb) {
    if (unaff_R12D != 0) {
      uVar4 = (ulonglong)unaff_R12D;
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *(undefined4 *)
         (*(longlong *)(unaff_RBP + 8 + (ulonglong)(unaff_ESI >> 0xb) * 8) +
         (ulonglong)(unaff_ESI + (unaff_ESI >> 0xb) * -0x800) * 4) = uVar1;
        uVar4 = uVar4 - 1;
        unaff_ESI = unaff_ESI + 1;
      } while (uVar4 != 0);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  memcpy(*(longlong *)(unaff_RBP + 8 + (ulonglong)uVar2 * 8) +
         (ulonglong)(unaff_ESI + uVar2 * -0x800) * 4,puVar3,(ulonglong)unaff_R12D << 2);
}





// 函数: void FUN_18007fc35(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18007fc35(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong unaff_RBP;
  int unaff_ESI;
  uint unaff_R12D;
  
                    // WARNING: Subroutine does not return
  memcpy(*(longlong *)(unaff_RBP + 8 + param_1 * 8) +
         (ulonglong)(uint)(unaff_ESI + (int)param_1 * -0x800) * 4,param_4,(ulonglong)unaff_R12D << 2
        );
}





// 函数: void FUN_18007fc63(void)
void FUN_18007fc63(void)

{
  return;
}





// 函数: void FUN_18007fc68(void)
void FUN_18007fc68(void)

{
  return;
}





// 函数: void FUN_18007fc6d(void)
void FUN_18007fc6d(void)

{
  return;
}





// 函数: void FUN_18007fc73(void)
void FUN_18007fc73(void)

{
  undefined4 uVar1;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 *in_R9;
  ulonglong uVar2;
  uint unaff_R12D;
  
  if (unaff_R12D != 0) {
    uVar2 = (ulonglong)unaff_R12D;
    do {
      uVar1 = *in_R9;
      in_R9 = in_R9 + 1;
      *(undefined4 *)
       (*(longlong *)(unaff_RBP + 8 + (ulonglong)(unaff_ESI >> 0xb) * 8) +
       (ulonglong)(unaff_ESI + (unaff_ESI >> 0xb) * -0x800) * 4) = uVar1;
      uVar2 = uVar2 - 1;
      unaff_ESI = unaff_ESI + 1;
    } while (uVar2 != 0);
  }
  return;
}





// 函数: void FUN_18007fca8(void)
void FUN_18007fca8(void)

{
  longlong unaff_RDI;
  
  if (*(int *)(unaff_RDI + 0x18) != 0) {
    *(undefined4 *)(unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RDI + 0x30);
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007fcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_18007fcd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3,0xfffffffffffffffe);
  plVar2 = (longlong *)FUN_18007f2f0(uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_18007e2b0(plVar2,param_1);
  FUN_18007e5b0(plVar2,param_3);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18007fd60(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)
void FUN_18007fd60(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_338 [32];
  longlong *plStack_318;
  longlong *aplStack_310 [2];
  undefined8 uStack_300;
  ulonglong uStack_58;
  
  uStack_300 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_338;
  *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + 4;
  iVar2 = *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0x10);
  plVar1 = (longlong *)FUN_180081590(param_1,aplStack_310,iVar2);
  plVar1 = (longlong *)*plVar1;
  if (plVar1 != (longlong *)0x0) {
    plStack_318 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plStack_318 = *(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = plVar1;
  if (plStack_318 != (longlong *)0x0) {
    (**(code **)(*plStack_318 + 0x38))();
  }
  if (aplStack_310[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_310[0] + 0x38))();
  }
                    // WARNING: Subroutine does not return
  memcpy(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x10),*(undefined8 *)(param_4 + 8),
         (longlong)iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: undefined FUN_18004b6f0;
undefined FUN_18004b6f0;


// 函数: undefined FUN_18006f4c0;
undefined FUN_18006f4c0;


// 函数: undefined FUN_18004c090;
undefined FUN_18004c090;


