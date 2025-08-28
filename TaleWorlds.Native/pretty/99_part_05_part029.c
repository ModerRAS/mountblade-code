#include "TaleWorlds.Native.Split.h"

// 99_part_05_part029.c - 15 个函数

// 函数: void FUN_1802ea32d(void)
void FUN_1802ea32d(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_R15;
  
  uVar7 = 0;
  uVar3 = uVar7;
  uVar6 = uVar7;
  if (in_RAX >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar3 + *(longlong *)(unaff_R15 + 0xf0)) + 0x108))();
      uVar5 = (int)uVar6 + 1;
      uVar3 = uVar3 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(unaff_R15 + 0xf8) - *(longlong *)(unaff_R15 + 0xf0) >> 3));
  }
  lVar1 = *(longlong *)(unaff_R15 + 0x260);
  if (lVar1 != 0) {
    puVar4 = *(uint64_t **)(lVar1 + 0x1a8);
    if (puVar4 < *(uint64_t **)(lVar1 + 0x1b0)) {
      do {
        (**(code **)(*(longlong *)*puVar4 + 0x108))();
        puVar4 = puVar4 + 1;
      } while (puVar4 < *(uint64_t **)(lVar1 + 0x1b0));
    }
    uVar3 = uVar7;
    if ('\0' < *(char *)(lVar1 + 0x20)) {
      do {
        lVar2 = *(longlong *)(lVar1 + 0x18);
        puVar4 = *(uint64_t **)(lVar2 + 0xb0 + uVar7);
        if (puVar4 < *(uint64_t **)(lVar2 + 0xb8 + uVar7)) {
          do {
            (**(code **)(*(longlong *)*puVar4 + 0x108))();
            puVar4 = puVar4 + 1;
          } while (puVar4 < *(uint64_t **)(lVar2 + 0xb8 + uVar7));
        }
        uVar5 = (int)uVar3 + 1;
        uVar7 = uVar7 + 0x100;
        uVar3 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)*(char *)(lVar1 + 0x20));
    }
  }
  puVar4 = *(uint64_t **)(unaff_R15 + 0x1c0);
  if (puVar4 < *(uint64_t **)(unaff_R15 + 0x1c8)) {
    do {
      FUN_1802ea310(*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar4 < *(uint64_t **)(unaff_R15 + 0x1c8));
  }
  return;
}






// 函数: void FUN_1802ea3d2(void)
void FUN_1802ea3d2(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong unaff_RBP;
  uint uVar3;
  ulonglong unaff_R14;
  longlong unaff_R15;
  ulonglong uVar4;
  
  uVar4 = unaff_R14;
  do {
    lVar1 = *(longlong *)(unaff_RBP + 0x18);
    puVar2 = *(uint64_t **)(lVar1 + 0xb0 + unaff_R14);
    if (puVar2 < *(uint64_t **)(lVar1 + 0xb8 + unaff_R14)) {
      do {
        (**(code **)(*(longlong *)*puVar2 + 0x108))();
        puVar2 = puVar2 + 1;
      } while (puVar2 < *(uint64_t **)(lVar1 + 0xb8 + unaff_R14));
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    unaff_R14 = unaff_R14 + 0x100;
  } while ((int)uVar3 < (int)*(char *)(unaff_RBP + 0x20));
  puVar2 = *(uint64_t **)(unaff_R15 + 0x1c0);
  if (puVar2 < *(uint64_t **)(unaff_R15 + 0x1c8)) {
    do {
      FUN_1802ea310(*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 < *(uint64_t **)(unaff_R15 + 0x1c8));
  }
  return;
}






// 函数: void FUN_1802ea435(void)
void FUN_1802ea435(void)

{
  uint64_t *puVar1;
  longlong unaff_R15;
  
  puVar1 = *(uint64_t **)(unaff_R15 + 0x1c0);
  if (puVar1 < *(uint64_t **)(unaff_R15 + 0x1c8)) {
    do {
      FUN_1802ea310(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(unaff_R15 + 0x1c8));
  }
  return;
}






// 函数: void FUN_1802ea454(void)
void FUN_1802ea454(void)

{
  uint64_t *unaff_RBX;
  longlong unaff_R15;
  
  do {
    FUN_1802ea310(*unaff_RBX);
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_RBX < *(uint64_t **)(unaff_R15 + 0x1c8));
  return;
}






// 函数: void FUN_1802ea480(longlong param_1,int32_t *param_2)
void FUN_1802ea480(longlong param_1,int32_t *param_2)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint64_t *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  lVar7 = *(longlong *)(param_1 + 0xf0);
  uVar8 = 0;
  uVar11 = uVar8;
  if (*(longlong *)(param_1 + 0xf8) - lVar7 >> 3 != 0) {
    do {
      iVar5 = (**(code **)(**(longlong **)(uVar8 + lVar7) + 0x98))();
      if (iVar5 == 0) {
        lVar7 = *(longlong *)(uVar8 + *(longlong *)(param_1 + 0xf0));
        plVar6 = *(longlong **)(lVar7 + 0x38);
        if (plVar6 < *(longlong **)(lVar7 + 0x40)) {
          do {
            lVar1 = *plVar6;
            plVar6 = plVar6 + 2;
            uVar2 = param_2[1];
            uVar3 = param_2[2];
            uVar4 = param_2[3];
            *(int32_t *)(lVar1 + 0x248) = *param_2;
            *(int32_t *)(lVar1 + 0x24c) = uVar2;
            *(int32_t *)(lVar1 + 0x250) = uVar3;
            *(int32_t *)(lVar1 + 0x254) = uVar4;
          } while (plVar6 < *(longlong **)(lVar7 + 0x40));
        }
      }
      lVar7 = *(longlong *)(param_1 + 0xf0);
      uVar10 = (int)uVar11 + 1;
      uVar8 = uVar8 + 8;
      uVar11 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar7 >> 3));
  }
  puVar9 = *(uint64_t **)(param_1 + 0x1c0);
  if (puVar9 < *(uint64_t **)(param_1 + 0x1c8)) {
    do {
      FUN_1802ea480(*puVar9,param_2);
      puVar9 = puVar9 + 1;
    } while (puVar9 < *(uint64_t **)(param_1 + 0x1c8));
  }
  return;
}






// 函数: void FUN_1802ea560(longlong param_1,int32_t param_2)
void FUN_1802ea560(longlong param_1,int32_t param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar4 = uVar8;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar4 + *(longlong *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0x110))(plVar1,param_2);
      uVar6 = (int)uVar7 + 1;
      uVar4 = uVar4 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
  }
  lVar2 = *(longlong *)(param_1 + 0x260);
  if (lVar2 != 0) {
    puVar5 = *(uint64_t **)(lVar2 + 0x1a8);
    if (puVar5 < *(uint64_t **)(lVar2 + 0x1b0)) {
      do {
        (**(code **)(*(longlong *)*puVar5 + 0x110))((longlong *)*puVar5,param_2);
        puVar5 = puVar5 + 1;
      } while (puVar5 < *(uint64_t **)(lVar2 + 0x1b0));
    }
    uVar4 = uVar8;
    if ('\0' < *(char *)(lVar2 + 0x20)) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0x18);
        puVar5 = *(uint64_t **)(uVar8 + 0xb0 + lVar3);
        if (puVar5 < *(uint64_t **)(uVar8 + 0xb8 + lVar3)) {
          do {
            (**(code **)(*(longlong *)*puVar5 + 0x110))((longlong *)*puVar5,param_2);
            puVar5 = puVar5 + 1;
          } while (puVar5 < *(uint64_t **)(uVar8 + 0xb8 + lVar3));
        }
        uVar6 = (int)uVar4 + 1;
        uVar8 = uVar8 + 0x100;
        uVar4 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)*(char *)(lVar2 + 0x20));
    }
  }
  puVar5 = *(uint64_t **)(param_1 + 0x1c0);
  if (puVar5 < *(uint64_t **)(param_1 + 0x1c8)) {
    do {
      FUN_1802ea560(*puVar5,param_2);
      puVar5 = puVar5 + 1;
    } while (puVar5 < *(uint64_t **)(param_1 + 0x1c8));
  }
  return;
}






// 函数: void FUN_1802ea581(void)
void FUN_1802ea581(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong unaff_R15;
  
  uVar7 = 0;
  uVar3 = uVar7;
  uVar6 = uVar7;
  if (in_RAX >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar3 + *(longlong *)(unaff_R15 + 0xf0)) + 0x110))();
      uVar5 = (int)uVar6 + 1;
      uVar3 = uVar3 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(unaff_R15 + 0xf8) - *(longlong *)(unaff_R15 + 0xf0) >> 3));
  }
  lVar1 = *(longlong *)(unaff_R15 + 0x260);
  if (lVar1 != 0) {
    puVar4 = *(uint64_t **)(lVar1 + 0x1a8);
    if (puVar4 < *(uint64_t **)(lVar1 + 0x1b0)) {
      do {
        (**(code **)(*(longlong *)*puVar4 + 0x110))();
        puVar4 = puVar4 + 1;
      } while (puVar4 < *(uint64_t **)(lVar1 + 0x1b0));
    }
    uVar3 = uVar7;
    if ('\0' < *(char *)(lVar1 + 0x20)) {
      do {
        lVar2 = *(longlong *)(lVar1 + 0x18);
        puVar4 = *(uint64_t **)(uVar7 + 0xb0 + lVar2);
        if (puVar4 < *(uint64_t **)(uVar7 + 0xb8 + lVar2)) {
          do {
            (**(code **)(*(longlong *)*puVar4 + 0x110))();
            puVar4 = puVar4 + 1;
          } while (puVar4 < *(uint64_t **)(uVar7 + 0xb8 + lVar2));
        }
        uVar5 = (int)uVar3 + 1;
        uVar7 = uVar7 + 0x100;
        uVar3 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)*(char *)(lVar1 + 0x20));
    }
  }
  puVar4 = *(uint64_t **)(unaff_R15 + 0x1c0);
  if (puVar4 < *(uint64_t **)(unaff_R15 + 0x1c8)) {
    do {
      FUN_1802ea560(*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar4 < *(uint64_t **)(unaff_R15 + 0x1c8));
  }
  return;
}






// 函数: void FUN_1802ea622(void)
void FUN_1802ea622(void)

{
  longlong lVar1;
  uint64_t *puVar2;
  longlong unaff_RBP;
  uint uVar3;
  ulonglong unaff_R14;
  longlong unaff_R15;
  ulonglong uVar4;
  
  uVar4 = unaff_R14;
  do {
    lVar1 = *(longlong *)(unaff_RBP + 0x18);
    puVar2 = *(uint64_t **)(unaff_R14 + 0xb0 + lVar1);
    if (puVar2 < *(uint64_t **)(unaff_R14 + 0xb8 + lVar1)) {
      do {
        (**(code **)(*(longlong *)*puVar2 + 0x110))();
        puVar2 = puVar2 + 1;
      } while (puVar2 < *(uint64_t **)(unaff_R14 + 0xb8 + lVar1));
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    unaff_R14 = unaff_R14 + 0x100;
  } while ((int)uVar3 < (int)*(char *)(unaff_RBP + 0x20));
  puVar2 = *(uint64_t **)(unaff_R15 + 0x1c0);
  if (puVar2 < *(uint64_t **)(unaff_R15 + 0x1c8)) {
    do {
      FUN_1802ea560(*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 < *(uint64_t **)(unaff_R15 + 0x1c8));
  }
  return;
}






// 函数: void FUN_1802ea685(void)
void FUN_1802ea685(void)

{
  uint64_t *puVar1;
  longlong unaff_R15;
  
  puVar1 = *(uint64_t **)(unaff_R15 + 0x1c0);
  if (puVar1 < *(uint64_t **)(unaff_R15 + 0x1c8)) {
    do {
      FUN_1802ea560(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(unaff_R15 + 0x1c8));
  }
  return;
}






// 函数: void FUN_1802ea6a4(void)
void FUN_1802ea6a4(void)

{
  uint64_t *unaff_RBX;
  longlong unaff_R15;
  
  do {
    FUN_1802ea560(*unaff_RBX);
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_RBX < *(uint64_t **)(unaff_R15 + 0x1c8));
  return;
}






// 函数: void FUN_1802ea6d0(longlong param_1,float *param_2)
void FUN_1802ea6d0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  bool bVar30;
  char cVar31;
  int iVar32;
  longlong lVar33;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  if (((((((fVar1 == *(float *)(param_1 + 0x60)) && (fVar2 == *(float *)(param_1 + 100))) &&
         (fVar3 == *(float *)(param_1 + 0x68))) &&
        ((*(float *)(param_1 + 0x30) == *(float *)(param_1 + 0x30) &&
         (*(float *)(param_1 + 0x34) == *(float *)(param_1 + 0x34))))) &&
       ((*(float *)(param_1 + 0x38) == *(float *)(param_1 + 0x38) &&
        ((*(float *)(param_1 + 0x40) == *(float *)(param_1 + 0x40) &&
         (*(float *)(param_1 + 0x44) == *(float *)(param_1 + 0x44))))))) &&
      (*(float *)(param_1 + 0x48) == *(float *)(param_1 + 0x48))) &&
     (((*(float *)(param_1 + 0x50) == *(float *)(param_1 + 0x50) &&
       (*(float *)(param_1 + 0x54) == *(float *)(param_1 + 0x54))) &&
      (*(float *)(param_1 + 0x58) == *(float *)(param_1 + 0x58))))) {
    return;
  }
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48);
  *(int32_t *)(param_1 + 0x4c) = *(int32_t *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58);
  *(int32_t *)(param_1 + 0x5c) = *(int32_t *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x60) = fVar1;
  *(float *)(param_1 + 100) = fVar2;
  *(float *)(param_1 + 0x68) = fVar3;
  *(float *)(param_1 + 0x6c) = fVar4;
  FUN_180254610();
  *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) | 0x10;
  if (((*(uint *)(param_1 + 0x2ac) & 0x10000000) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_1801b01f0(*(longlong *)(param_1 + 0x20),param_1);
  }
  iVar32 = (int)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3);
  if (0 < iVar32) {
    lVar33 = 0;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar33 * 8);
      if (((*(longlong *)(param_1 + 0x20) == 0) ||
          (*(char *)(*(longlong *)(param_1 + 0x20) + 0x2a62) == '\0')) ||
         ((*(longlong **)(lVar13 + 0x270) == (longlong *)0x0 ||
          ((cVar31 = (**(code **)(**(longlong **)(lVar13 + 0x270) + 0x70))(), cVar31 == '\0' ||
           (cVar31 = (**(code **)(**(longlong **)(lVar13 + 0x270) + 0x78))(), cVar31 == '\0')))))) {
        bVar30 = false;
      }
      else {
        bVar30 = true;
      }
      if (!bVar30) {
        fVar14 = *(float *)(param_1 + 0x70);
        fVar15 = *(float *)(param_1 + 0x74);
        fVar16 = *(float *)(param_1 + 0x78);
        fVar17 = *(float *)(param_1 + 0x7c);
        fVar18 = *(float *)(param_1 + 0x80);
        fVar19 = *(float *)(param_1 + 0x84);
        fVar20 = *(float *)(param_1 + 0x88);
        fVar21 = *(float *)(param_1 + 0x8c);
        fVar22 = *(float *)(param_1 + 0x90);
        fVar23 = *(float *)(param_1 + 0x94);
        fVar24 = *(float *)(param_1 + 0x98);
        fVar25 = *(float *)(param_1 + 0x9c);
        fVar1 = *(float *)(lVar13 + 0x34);
        fVar2 = *(float *)(lVar13 + 0x30);
        fVar3 = *(float *)(lVar13 + 0x38);
        fVar4 = *(float *)(lVar13 + 0x44);
        fVar5 = *(float *)(lVar13 + 0x54);
        fVar6 = *(float *)(lVar13 + 100);
        fVar7 = *(float *)(lVar13 + 0x40);
        fVar8 = *(float *)(lVar13 + 0x48);
        fVar9 = *(float *)(lVar13 + 0x50);
        fVar10 = *(float *)(lVar13 + 0x58);
        fVar11 = *(float *)(lVar13 + 0x60);
        fVar12 = *(float *)(lVar13 + 0x68);
        fVar26 = *(float *)(param_1 + 0xa0);
        fVar27 = *(float *)(param_1 + 0xa4);
        fVar28 = *(float *)(param_1 + 0xa8);
        fVar29 = *(float *)(param_1 + 0xac);
        *(float *)(lVar13 + 0x70) = fVar1 * fVar18 + fVar2 * fVar14 + fVar3 * fVar22;
        *(float *)(lVar13 + 0x74) = fVar1 * fVar19 + fVar2 * fVar15 + fVar3 * fVar23;
        *(float *)(lVar13 + 0x78) = fVar1 * fVar20 + fVar2 * fVar16 + fVar3 * fVar24;
        *(float *)(lVar13 + 0x7c) = fVar1 * fVar21 + fVar2 * fVar17 + fVar3 * fVar25;
        *(float *)(lVar13 + 0x80) = fVar4 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22;
        *(float *)(lVar13 + 0x84) = fVar4 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23;
        *(float *)(lVar13 + 0x88) = fVar4 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24;
        *(float *)(lVar13 + 0x8c) = fVar4 * fVar21 + fVar7 * fVar17 + fVar8 * fVar25;
        *(float *)(lVar13 + 0x90) = fVar5 * fVar18 + fVar9 * fVar14 + fVar10 * fVar22;
        *(float *)(lVar13 + 0x94) = fVar5 * fVar19 + fVar9 * fVar15 + fVar10 * fVar23;
        *(float *)(lVar13 + 0x98) = fVar5 * fVar20 + fVar9 * fVar16 + fVar10 * fVar24;
        *(float *)(lVar13 + 0x9c) = fVar5 * fVar21 + fVar9 * fVar17 + fVar10 * fVar25;
        *(float *)(lVar13 + 0xa0) = fVar6 * fVar18 + fVar11 * fVar14 + fVar12 * fVar22 + fVar26;
        *(float *)(lVar13 + 0xa4) = fVar6 * fVar19 + fVar11 * fVar15 + fVar12 * fVar23 + fVar27;
        *(float *)(lVar13 + 0xa8) = fVar6 * fVar20 + fVar11 * fVar16 + fVar12 * fVar24 + fVar28;
        *(float *)(lVar13 + 0xac) = fVar6 * fVar21 + fVar11 * fVar17 + fVar12 * fVar25 + fVar29;
        FUN_1802eace0(lVar13);
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 < iVar32);
  }
  return;
}






// 函数: void FUN_1802ea790(longlong param_1,uint64_t *param_2)
void FUN_1802ea790(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  char cVar19;
  uint64_t *puVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int8_t auStack_48 [64];
  
  puVar20 = param_2;
  cVar19 = func_0x000180285980(param_1 + 0x70);
  if (cVar19 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 != 0) {
      uVar21 = *(int32_t *)(param_1 + 0x74);
      uVar22 = *(int32_t *)(param_1 + 0x78);
      uVar23 = *(int32_t *)(param_1 + 0x7c);
      uVar13 = *(uint64_t *)(param_1 + 0x80);
      uVar14 = *(uint64_t *)(param_1 + 0x88);
      uVar15 = *(uint64_t *)(param_1 + 0x90);
      uVar16 = *(uint64_t *)(param_1 + 0x98);
      uVar17 = *(uint64_t *)(param_1 + 0xa0);
      uVar18 = *(uint64_t *)(param_1 + 0xa8);
      *(int32_t *)(lVar1 + 0xb8) = *(int32_t *)(param_1 + 0x70);
      *(int32_t *)(lVar1 + 0xbc) = uVar21;
      *(int32_t *)(lVar1 + 0xc0) = uVar22;
      *(int32_t *)(lVar1 + 0xc4) = uVar23;
      *(uint64_t *)(lVar1 + 200) = uVar13;
      *(uint64_t *)(lVar1 + 0xd0) = uVar14;
      *(uint64_t *)(lVar1 + 0xd8) = uVar15;
      *(uint64_t *)(lVar1 + 0xe0) = uVar16;
      *(uint64_t *)(lVar1 + 0xe8) = uVar17;
      *(uint64_t *)(lVar1 + 0xf0) = uVar18;
    }
    if (*(longlong *)(param_1 + 0x168) == 0) {
      uVar13 = puVar20[1];
      *(uint64_t *)(param_1 + 0x30) = *puVar20;
      *(uint64_t *)(param_1 + 0x38) = uVar13;
      uVar13 = puVar20[3];
      *(uint64_t *)(param_1 + 0x40) = puVar20[2];
      *(uint64_t *)(param_1 + 0x48) = uVar13;
      uVar13 = puVar20[5];
      *(uint64_t *)(param_1 + 0x50) = puVar20[4];
      *(uint64_t *)(param_1 + 0x58) = uVar13;
      uVar21 = *(int32_t *)(puVar20 + 6);
      uVar22 = *(int32_t *)((longlong)puVar20 + 0x34);
      uVar23 = *(int32_t *)(puVar20 + 7);
      uVar24 = *(int32_t *)((longlong)puVar20 + 0x3c);
    }
    else {
      puVar20 = (uint64_t *)
                FUN_1802f5d10(*(longlong *)(param_1 + 0x168) + 0x70,auStack_48,param_2);
      uVar13 = puVar20[1];
      *(uint64_t *)(param_1 + 0x30) = *puVar20;
      *(uint64_t *)(param_1 + 0x38) = uVar13;
      uVar13 = puVar20[3];
      *(uint64_t *)(param_1 + 0x40) = puVar20[2];
      *(uint64_t *)(param_1 + 0x48) = uVar13;
      uVar13 = puVar20[5];
      *(uint64_t *)(param_1 + 0x50) = puVar20[4];
      *(uint64_t *)(param_1 + 0x58) = uVar13;
      uVar21 = *(int32_t *)(puVar20 + 6);
      uVar22 = *(int32_t *)((longlong)puVar20 + 0x34);
      uVar23 = *(int32_t *)(puVar20 + 7);
      uVar24 = *(int32_t *)((longlong)puVar20 + 0x3c);
    }
    *(int32_t *)(param_1 + 0x60) = uVar21;
    *(int32_t *)(param_1 + 100) = uVar22;
    *(int32_t *)(param_1 + 0x68) = uVar23;
    *(int32_t *)(param_1 + 0x6c) = uVar24;
    uVar21 = *(int32_t *)((longlong)param_2 + 4);
    uVar22 = *(int32_t *)(param_2 + 1);
    uVar23 = *(int32_t *)((longlong)param_2 + 0xc);
    uVar24 = *(int32_t *)(param_2 + 2);
    uVar2 = *(int32_t *)((longlong)param_2 + 0x14);
    uVar3 = *(int32_t *)(param_2 + 3);
    uVar4 = *(int32_t *)((longlong)param_2 + 0x1c);
    uVar5 = *(int32_t *)(param_2 + 4);
    uVar6 = *(int32_t *)((longlong)param_2 + 0x24);
    uVar7 = *(int32_t *)(param_2 + 5);
    uVar8 = *(int32_t *)((longlong)param_2 + 0x2c);
    uVar9 = *(int32_t *)(param_2 + 6);
    uVar10 = *(int32_t *)((longlong)param_2 + 0x34);
    uVar11 = *(int32_t *)(param_2 + 7);
    uVar12 = *(int32_t *)((longlong)param_2 + 0x3c);
    *(int32_t *)(param_1 + 0x70) = *(int32_t *)param_2;
    *(int32_t *)(param_1 + 0x74) = uVar21;
    *(int32_t *)(param_1 + 0x78) = uVar22;
    *(int32_t *)(param_1 + 0x7c) = uVar23;
    *(int32_t *)(param_1 + 0x80) = uVar24;
    *(int32_t *)(param_1 + 0x84) = uVar2;
    *(int32_t *)(param_1 + 0x88) = uVar3;
    *(int32_t *)(param_1 + 0x8c) = uVar4;
    *(int32_t *)(param_1 + 0x90) = uVar5;
    *(int32_t *)(param_1 + 0x94) = uVar6;
    *(int32_t *)(param_1 + 0x98) = uVar7;
    *(int32_t *)(param_1 + 0x9c) = uVar8;
    *(int32_t *)(param_1 + 0xa0) = uVar9;
    *(int32_t *)(param_1 + 0xa4) = uVar10;
    *(int32_t *)(param_1 + 0xa8) = uVar11;
    *(int32_t *)(param_1 + 0xac) = uVar12;
    FUN_1802eace0(param_1);
  }
  return;
}






// 函数: void FUN_1802ea8a0(longlong param_1)
void FUN_1802ea8a0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar6 = (int)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3);
  lVar8 = (longlong)iVar6;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      fVar1 = *(float *)(param_1 + 0x74);
      fVar10 = *(float *)(param_1 + 0x80);
      fVar2 = *(float *)(param_1 + 0x70);
      fVar3 = *(float *)(param_1 + 0x84);
      fVar17 = *(float *)(param_1 + 0x98);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar7 * 8);
      fVar15 = fVar17 * *(float *)(lVar5 + 0x58);
      fVar12 = fVar2 * *(float *)(lVar5 + 0x60) + fVar10 * *(float *)(lVar5 + 100) +
               *(float *)(param_1 + 0xa0);
      fVar4 = *(float *)(param_1 + 0xa4);
      fVar9 = fVar17 * *(float *)(lVar5 + 0x68) + *(float *)(param_1 + 0xa8);
      fVar13 = fVar17 * *(float *)(lVar5 + 0x48);
      fVar17 = fVar17 * *(float *)(lVar5 + 0x38);
      fVar16 = *(float *)(lVar5 + 0x50) * fVar2 + *(float *)(lVar5 + 0x54) * fVar10;
      fVar14 = *(float *)(lVar5 + 0x40) * fVar2 + *(float *)(lVar5 + 0x44) * fVar10;
      fVar11 = *(float *)(lVar5 + 0x30) * fVar1 + *(float *)(lVar5 + 0x34) * fVar3;
      fVar10 = *(float *)(lVar5 + 0x30) * fVar2 + *(float *)(lVar5 + 0x34) * fVar10;
      *(float *)(lVar5 + 0x70) = fVar10;
      *(float *)(lVar5 + 0x74) = fVar11;
      *(float *)(lVar5 + 0x78) = fVar17;
      *(int32_t *)(lVar5 + 0x7c) = 0x7f7fffff;
      *(float *)(lVar5 + 0x80) = fVar14;
      *(float *)(lVar5 + 0x84) = *(float *)(lVar5 + 0x40) * fVar1 + *(float *)(lVar5 + 0x44) * fVar3
      ;
      *(float *)(lVar5 + 0x88) = fVar13;
      *(int32_t *)(lVar5 + 0x8c) = 0x7f7fffff;
      *(float *)(lVar5 + 0x90) = fVar16;
      *(float *)(lVar5 + 0x94) = *(float *)(lVar5 + 0x50) * fVar1 + *(float *)(lVar5 + 0x54) * fVar3
      ;
      *(float *)(lVar5 + 0x98) = fVar15;
      *(int32_t *)(lVar5 + 0x9c) = 0x7f7fffff;
      *(float *)(lVar5 + 0xa0) = fVar12;
      *(float *)(lVar5 + 0xa4) =
           fVar1 * *(float *)(lVar5 + 0x60) + fVar3 * *(float *)(lVar5 + 100) + fVar4;
      *(float *)(lVar5 + 0xa8) = fVar9;
      *(int32_t *)(lVar5 + 0xac) = 0x7f7fffff;
      if (*(longlong *)(lVar5 + 0x1c8) - *(longlong *)(lVar5 + 0x1c0) >> 3 != 0) {
        FUN_1802eab80(lVar5,fVar14,fVar10,fVar11,fVar12,fVar9,fVar10,fVar17,fVar14,fVar13,fVar16,
                      fVar15);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  return;
}






// 函数: void FUN_1802ea8ca(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_1802ea8ca(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong in_R11;
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
  float fStack0000000000000028;
  int32_t uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  int32_t uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  
  *(int32_t *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  lVar8 = 0;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM13_Dd;
  uStack000000000000002c = 0x7f7fffff;
  uStack000000000000005c = 0x7f7fffff;
  uStack000000000000004c = 0x7f7fffff;
  uStack000000000000003c = 0x7f7fffff;
  do {
    fVar1 = *(float *)(param_4 + 0x74);
    fVar2 = *(float *)(param_4 + 0x80);
    fVar3 = *(float *)(param_4 + 0x70);
    fVar4 = *(float *)(param_4 + 0x84);
    fStack0000000000000038 = *(float *)(param_4 + 0x98);
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x1c0) + lVar8 * 8);
    fStack0000000000000058 = fStack0000000000000038 * *(float *)(lVar7 + 0x58);
    fVar5 = *(float *)(param_4 + 0xa0);
    fVar6 = *(float *)(param_4 + 0xa4);
    fStack0000000000000028 =
         fStack0000000000000038 * *(float *)(lVar7 + 0x68) + *(float *)(param_4 + 0xa8);
    fStack0000000000000048 = fStack0000000000000038 * *(float *)(lVar7 + 0x48);
    fStack0000000000000038 = fStack0000000000000038 * *(float *)(lVar7 + 0x38);
    fStack0000000000000054 = *(float *)(lVar7 + 0x50) * fVar1 + *(float *)(lVar7 + 0x54) * fVar4;
    fStack0000000000000050 = *(float *)(lVar7 + 0x50) * fVar3 + *(float *)(lVar7 + 0x54) * fVar2;
    fStack0000000000000044 = *(float *)(lVar7 + 0x40) * fVar1 + *(float *)(lVar7 + 0x44) * fVar4;
    fStack0000000000000040 = *(float *)(lVar7 + 0x40) * fVar3 + *(float *)(lVar7 + 0x44) * fVar2;
    fStack0000000000000034 = *(float *)(lVar7 + 0x30) * fVar1 + *(float *)(lVar7 + 0x34) * fVar4;
    fStack0000000000000030 = *(float *)(lVar7 + 0x30) * fVar3 + *(float *)(lVar7 + 0x34) * fVar2;
    *(float *)(lVar7 + 0x70) = fStack0000000000000030;
    *(float *)(lVar7 + 0x74) = fStack0000000000000034;
    *(float *)(lVar7 + 0x78) = fStack0000000000000038;
    *(int32_t *)(lVar7 + 0x7c) = uStack000000000000003c;
    *(float *)(lVar7 + 0x80) = fStack0000000000000040;
    *(float *)(lVar7 + 0x84) = fStack0000000000000044;
    *(float *)(lVar7 + 0x88) = fStack0000000000000048;
    *(int32_t *)(lVar7 + 0x8c) = uStack000000000000004c;
    *(float *)(lVar7 + 0x90) = fStack0000000000000050;
    *(float *)(lVar7 + 0x94) = fStack0000000000000054;
    *(float *)(lVar7 + 0x98) = fStack0000000000000058;
    *(int32_t *)(lVar7 + 0x9c) = uStack000000000000005c;
    *(float *)(lVar7 + 0xa0) =
         fVar3 * *(float *)(lVar7 + 0x60) + fVar2 * *(float *)(lVar7 + 100) + fVar5;
    *(float *)(lVar7 + 0xa4) =
         fVar1 * *(float *)(lVar7 + 0x60) + fVar4 * *(float *)(lVar7 + 100) + fVar6;
    *(float *)(lVar7 + 0xa8) = fStack0000000000000028;
    *(int32_t *)(lVar7 + 0xac) = uStack000000000000002c;
    if (*(longlong *)(lVar7 + 0x1c8) - *(longlong *)(lVar7 + 0x1c0) >> 3 != 0) {
      FUN_1802eab80();
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 < param_3);
  return;
}






// 函数: void FUN_1802eab78(void)
void FUN_1802eab78(void)

{
  return;
}






