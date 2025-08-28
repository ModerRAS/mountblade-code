#include "TaleWorlds.Native.Split.h"

// 03_rendering_part226.c - 6 个函数

// 函数: void FUN_180395821(void)
void FUN_180395821(void)

{
  return;
}



ulonglong FUN_180395830(longlong param_1,float *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong *puStackX_20;
  int iStack_a4;
  longlong lStack_a0;
  
  uVar13 = 0;
  if (*(longlong *)(param_1 + 0x480) - *(longlong *)(param_1 + 0x478) >> 3 == 0) {
    return 0;
  }
  uVar9 = uVar13;
  puStackX_20 = (ulonglong *)func_0x000180388c90(param_3);
  fVar17 = 3.4028235e+38;
  uVar11 = uVar9 & 0xffffffff;
  fVar16 = 3.4028235e+38;
  puVar8 = (ulonglong *)*puStackX_20;
  uVar10 = (ulonglong)((longlong)puStackX_20[1] + (7 - (longlong)puVar8)) >> 3;
  if ((ulonglong *)puStackX_20[1] < puVar8) {
    uVar10 = uVar9;
  }
  if (uVar10 != 0) {
    do {
      uVar9 = *puVar8;
      bVar1 = *(byte *)(uVar9 + 0x139);
      uVar14 = (ulonglong)bVar1;
      if (((((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
          (cVar3 = FUN_18038d0a0(uVar9,param_2), cVar3 != '\0')) &&
         ((uVar13 == 0 || ((uVar14 & 4) != 0)))) {
        fVar15 = (float)func_0x00018038d2f0(uVar9,param_2);
        fVar15 = ABS(param_2[2] - fVar15);
        if ((fVar15 < 1.5) && (fVar15 < fVar16)) {
          uVar13 = uVar9;
          fVar16 = fVar15;
        }
      }
      puVar8 = puVar8 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
    if (uVar13 != 0) {
      return uVar13;
    }
    uVar9 = 0;
  }
  uVar13 = 0;
  iVar6 = (int)(((*param_2 - *(float *)(param_3 + 1)) - 1e-06) / *(float *)(param_3 + 3));
  iVar12 = (int)uVar9;
  iVar7 = iVar12;
  if ((-1 < iVar6) && (iVar7 = iVar6, (int)param_3[4] <= iVar6)) {
    iVar7 = (int)param_3[4] + -1;
  }
  iVar6 = (int)(((param_2[1] - *(float *)((longlong)param_3 + 0xc)) - 1e-06) /
               *(float *)((longlong)param_3 + 0x1c));
  if ((-1 < iVar6) && (iVar12 = iVar6, *(int *)((longlong)param_3 + 0x24) <= iVar6)) {
    iVar12 = *(int *)((longlong)param_3 + 0x24) + -1;
  }
  lVar2 = param_3[4];
  iVar6 = -1;
  iStack_a4 = (int)((ulonglong)lVar2 >> 0x20);
  lStack_a0 = 9;
  do {
    iVar4 = (int)lVar2;
    switch(iVar6) {
    case 0:
      iVar5 = iVar7;
joined_r0x000180395b3d:
      if (0 < iVar12) {
        iVar4 = iVar5 * *(int *)((longlong)param_3 + 0x24) + -1;
code_r0x000180395a7c:
        puStackX_20 = (ulonglong *)(*param_3 + (longlong)(iVar4 + iVar12) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 1:
      if (iVar12 + 1 < iStack_a4) {
        iVar4 = iVar7 * *(int *)((longlong)param_3 + 0x24) + 1;
        goto code_r0x000180395a7c;
      }
      break;
    case 2:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) {
code_r0x000180395ac1:
        puStackX_20 = (ulonglong *)
                      (*param_3 +
                       (longlong)(iVar5 * *(int *)((longlong)param_3 + 0x24) + iVar12) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 3:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto code_r0x000180395ac1;
      break;
    case 4:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) goto joined_r0x000180395b3d;
      break;
    case 5:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) {
code_r0x000180395b15:
        if (iVar12 + 1 < iStack_a4) {
          iVar4 = iVar5 * *(int *)((longlong)param_3 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
      }
      break;
    case 6:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto joined_r0x000180395b3d;
      break;
    case 7:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto code_r0x000180395b15;
      break;
    default:
code_r0x000180395b5d:
      puVar8 = (ulonglong *)*puStackX_20;
      uVar10 = (ulonglong)((longlong)puStackX_20[1] + (7 - (longlong)puVar8)) >> 3;
      if ((ulonglong *)puStackX_20[1] < puVar8) {
        uVar10 = uVar9;
      }
      if (uVar10 != 0) {
        do {
          uVar11 = *puVar8;
          if ((((*(byte *)(uVar11 + 0x139) & 1) != 0) && ((*(byte *)(uVar11 + 0x139) & 2) == 0)) &&
             (fVar16 = (float)FUN_18038d6a0(uVar11,param_2), fVar16 < fVar17)) {
            uVar13 = uVar11;
            fVar17 = fVar16;
          }
          puVar8 = puVar8 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
    }
    iVar6 = iVar6 + 1;
    lStack_a0 = lStack_a0 + -1;
    uVar9 = 0;
    if (lStack_a0 == 0) {
      return uVar13;
    }
  } while( true );
}



longlong FUN_18039586d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  float *unaff_RBP;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong in_R11;
  ulonglong uVar13;
  longlong *unaff_R14;
  longlong unaff_R15;
  float fVar14;
  float fVar15;
  float fVar16;
  int iStackX_24;
  longlong lStack0000000000000028;
  undefined8 in_stack_000000d8;
  longlong *in_stack_000000e0;
  ulonglong *puStack00000000000000e8;
  
  puStack00000000000000e8 = (ulonglong *)func_0x000180388c90(param_3);
  fVar16 = 3.4028235e+38;
  uVar10 = in_R11 & 0xffffffff;
  fVar15 = 3.4028235e+38;
  plVar8 = (longlong *)*puStack00000000000000e8;
  uVar9 = (ulonglong)((longlong)puStack00000000000000e8[1] + (7 - (longlong)plVar8)) >> 3;
  if ((longlong *)puStack00000000000000e8[1] < plVar8) {
    uVar9 = in_R11;
  }
  if (uVar9 != 0) {
    do {
      lVar11 = *plVar8;
      bVar1 = *(byte *)(lVar11 + 0x139);
      uVar13 = (ulonglong)bVar1;
      if (((((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
          (cVar3 = FUN_18038d0a0(lVar11), cVar3 != '\0')) &&
         ((unaff_R15 == 0 || ((uVar13 & 4) != 0)))) {
        fVar14 = (float)func_0x00018038d2f0(lVar11);
        fVar14 = ABS(unaff_RBP[2] - fVar14);
        if ((fVar14 < 1.5) && (fVar14 < fVar15)) {
          unaff_R15 = lVar11;
          fVar15 = fVar14;
        }
      }
      plVar8 = plVar8 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
    if (unaff_R15 != 0) {
      return unaff_R15;
    }
    in_R11 = 0;
    unaff_R15 = 0;
  }
  iVar6 = (int)(((*unaff_RBP - *(float *)(unaff_R14 + 1)) - 1e-06) / *(float *)(unaff_R14 + 3));
  iVar12 = (int)in_R11;
  iVar7 = iVar12;
  if ((-1 < iVar6) && (iVar7 = iVar6, (int)unaff_R14[4] <= iVar6)) {
    iVar7 = (int)unaff_R14[4] + -1;
  }
  iVar6 = (int)(((unaff_RBP[1] - *(float *)((longlong)unaff_R14 + 0xc)) - 1e-06) /
               *(float *)((longlong)unaff_R14 + 0x1c));
  if ((-1 < iVar6) && (iVar12 = iVar6, *(int *)((longlong)unaff_R14 + 0x24) <= iVar6)) {
    iVar12 = *(int *)((longlong)unaff_R14 + 0x24) + -1;
  }
  lVar11 = unaff_R14[4];
  iVar6 = -1;
  iStackX_24 = (int)((ulonglong)lVar11 >> 0x20);
  lStack0000000000000028 = 9;
  do {
    iVar4 = (int)lVar11;
    switch(iVar6) {
    case 0:
      iVar5 = iVar7;
joined_r0x000180395b3d:
      if (0 < iVar12) {
        iVar4 = iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + -1;
code_r0x000180395a7c:
        puStack00000000000000e8 = (ulonglong *)(*unaff_R14 + (longlong)(iVar4 + iVar12) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 1:
      if (iVar12 + 1 < iStackX_24) {
        iVar4 = iVar7 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
        goto code_r0x000180395a7c;
      }
      break;
    case 2:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) {
code_r0x000180395ac1:
        puStack00000000000000e8 =
             (ulonglong *)
             (*unaff_R14 + (longlong)(iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + iVar12) * 0x28
             + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 3:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto code_r0x000180395ac1;
      break;
    case 4:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) goto joined_r0x000180395b3d;
      break;
    case 5:
      iVar5 = iVar7 + -1;
      if (0 < iVar7) {
code_r0x000180395b15:
        if (iVar12 + 1 < iStackX_24) {
          iVar4 = iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
      }
      break;
    case 6:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto joined_r0x000180395b3d;
      break;
    case 7:
      iVar5 = iVar7 + 1;
      if (iVar5 < iVar4) goto code_r0x000180395b15;
      break;
    default:
code_r0x000180395b5d:
      plVar8 = (longlong *)*puStack00000000000000e8;
      uVar9 = (ulonglong)((longlong)puStack00000000000000e8[1] + (7 - (longlong)plVar8)) >> 3;
      if ((longlong *)puStack00000000000000e8[1] < plVar8) {
        uVar9 = in_R11;
      }
      unaff_R14 = in_stack_000000e0;
      if (uVar9 != 0) {
        do {
          lVar2 = *plVar8;
          if ((((*(byte *)(lVar2 + 0x139) & 1) != 0) && ((*(byte *)(lVar2 + 0x139) & 2) == 0)) &&
             (fVar15 = (float)FUN_18038d6a0(lVar2,in_stack_000000d8), fVar15 < fVar16)) {
            unaff_R15 = lVar2;
            fVar16 = fVar15;
          }
          plVar8 = plVar8 + 1;
          in_R11 = in_R11 + 1;
        } while (in_R11 != uVar9);
      }
    }
    iVar6 = iVar6 + 1;
    lStack0000000000000028 = lStack0000000000000028 + -1;
    in_R11 = 0;
    if (lStack0000000000000028 == 0) {
      return unaff_R15;
    }
  } while( true );
}



longlong FUN_1803958d2(void)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *unaff_RBX;
  float *unaff_RBP;
  ulonglong uVar8;
  longlong unaff_RSI;
  longlong *plVar9;
  longlong unaff_RDI;
  longlong lVar10;
  int iVar11;
  longlong *unaff_R14;
  ulonglong uVar12;
  longlong unaff_R15;
  float fVar13;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int iStackX_24;
  longlong lStack0000000000000028;
  undefined8 in_stack_000000d8;
  longlong *in_stack_000000e0;
  ulonglong *in_stack_000000e8;
  
  do {
    lVar10 = *unaff_RBX;
    bVar1 = *(byte *)(lVar10 + 0x139);
    uVar8 = (ulonglong)bVar1;
    if (((((bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
        (cVar3 = FUN_18038d0a0(lVar10), cVar3 != '\0')) && ((unaff_R15 == 0 || ((uVar8 & 4) != 0))))
    {
      fVar13 = (float)func_0x00018038d2f0(lVar10);
      fVar13 = ABS(unaff_RBP[2] - fVar13);
      if ((fVar13 < 1.5) && (fVar13 < unaff_XMM6_Da)) {
        unaff_R15 = lVar10;
        unaff_XMM6_Da = fVar13;
      }
    }
    unaff_RBX = unaff_RBX + 1;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI != unaff_RSI);
  if (unaff_R15 == 0) {
    iVar6 = (int)(((*unaff_RBP - *(float *)(unaff_R14 + 1)) - 1e-06) / *(float *)(unaff_R14 + 3));
    iVar11 = 0;
    iVar7 = iVar11;
    if ((-1 < iVar6) && (iVar7 = iVar6, (int)unaff_R14[4] <= iVar6)) {
      iVar7 = (int)unaff_R14[4] + -1;
    }
    iVar6 = (int)(((unaff_RBP[1] - *(float *)((longlong)unaff_R14 + 0xc)) - 1e-06) /
                 *(float *)((longlong)unaff_R14 + 0x1c));
    if ((-1 < iVar6) && (iVar11 = iVar6, *(int *)((longlong)unaff_R14 + 0x24) <= iVar6)) {
      iVar11 = *(int *)((longlong)unaff_R14 + 0x24) + -1;
    }
    lVar10 = unaff_R14[4];
    iVar6 = -1;
    iStackX_24 = (int)((ulonglong)lVar10 >> 0x20);
    lStack0000000000000028 = 9;
    do {
      uVar8 = 0;
      iVar4 = (int)lVar10;
      switch(iVar6) {
      case 0:
        iVar5 = iVar7;
joined_r0x000180395b3d:
        if (0 < iVar11) {
          iVar4 = iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + -1;
code_r0x000180395a7c:
          in_stack_000000e8 = (ulonglong *)(*unaff_R14 + (longlong)(iVar4 + iVar11) * 0x28 + 8);
          goto code_r0x000180395b5d;
        }
        break;
      case 1:
        if (iVar11 + 1 < iStackX_24) {
          iVar4 = iVar7 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
        break;
      case 2:
        iVar5 = iVar7 + -1;
        if (0 < iVar7) {
code_r0x000180395ac1:
          in_stack_000000e8 =
               (ulonglong *)
               (*unaff_R14 +
                (longlong)(iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + iVar11) * 0x28 + 8);
          goto code_r0x000180395b5d;
        }
        break;
      case 3:
        iVar5 = iVar7 + 1;
        if (iVar5 < iVar4) goto code_r0x000180395ac1;
        break;
      case 4:
        iVar5 = iVar7 + -1;
        if (0 < iVar7) goto joined_r0x000180395b3d;
        break;
      case 5:
        iVar5 = iVar7 + -1;
        if (0 < iVar7) {
code_r0x000180395b15:
          if (iVar11 + 1 < iStackX_24) {
            iVar4 = iVar5 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
            goto code_r0x000180395a7c;
          }
        }
        break;
      case 6:
        iVar5 = iVar7 + 1;
        if (iVar5 < iVar4) goto joined_r0x000180395b3d;
        break;
      case 7:
        iVar5 = iVar7 + 1;
        if (iVar5 < iVar4) goto code_r0x000180395b15;
        break;
      default:
code_r0x000180395b5d:
        plVar9 = (longlong *)*in_stack_000000e8;
        uVar12 = (ulonglong)((longlong)in_stack_000000e8[1] + (7 - (longlong)plVar9)) >> 3;
        if ((longlong *)in_stack_000000e8[1] < plVar9) {
          uVar12 = uVar8;
        }
        unaff_R14 = in_stack_000000e0;
        if (uVar12 != 0) {
          do {
            lVar2 = *plVar9;
            if ((((*(byte *)(lVar2 + 0x139) & 1) != 0) && ((*(byte *)(lVar2 + 0x139) & 2) == 0)) &&
               (fVar13 = (float)FUN_18038d6a0(lVar2,in_stack_000000d8), fVar13 < unaff_XMM7_Da)) {
              unaff_R15 = lVar2;
              unaff_XMM7_Da = fVar13;
            }
            plVar9 = plVar9 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar12);
        }
      }
      iVar6 = iVar6 + 1;
      lStack0000000000000028 = lStack0000000000000028 + -1;
    } while (lStack0000000000000028 != 0);
  }
  return unaff_R15;
}





// 函数: void FUN_180395967(void)
void FUN_180395967(void)

{
  return;
}



longlong FUN_180395999(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float *unaff_RBP;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *unaff_R14;
  ulonglong uVar8;
  longlong unaff_R15;
  float fVar9;
  float unaff_XMM7_Da;
  int iStackX_24;
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  int iStack00000000000000d0;
  undefined8 in_stack_000000d8;
  longlong *in_stack_000000e0;
  ulonglong *in_stack_000000e8;
  
  iVar3 = (int)(((*unaff_RBP - *(float *)(unaff_R14 + 1)) - 1e-06) / *(float *)(unaff_R14 + 3));
  iVar7 = 0;
  iStack00000000000000d0 = iVar7;
  if ((-1 < iVar3) && (iStack00000000000000d0 = iVar3, (int)unaff_R14[4] <= iVar3)) {
    iStack00000000000000d0 = (int)unaff_R14[4] + -1;
  }
  iVar3 = (int)(((unaff_RBP[1] - *(float *)((longlong)unaff_R14 + 0xc)) - 1e-06) /
               *(float *)((longlong)unaff_R14 + 0x1c));
  if ((-1 < iVar3) && (iVar7 = iVar3, *(int *)((longlong)unaff_R14 + 0x24) <= iVar3)) {
    iVar7 = *(int *)((longlong)unaff_R14 + 0x24) + -1;
  }
  lVar4 = unaff_R14[4];
  iVar3 = -1;
  iStackX_24 = (int)((ulonglong)lVar4 >> 0x20);
  lStack0000000000000028 = 9;
  lStack0000000000000030 = lVar4;
  do {
    uVar5 = 0;
    iVar1 = (int)lVar4;
    switch(iVar3) {
    case 0:
      iVar2 = iStack00000000000000d0;
joined_r0x000180395b3d:
      if (0 < iVar7) {
        iVar1 = iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + -1;
code_r0x000180395a7c:
        in_stack_000000e8 = (ulonglong *)(*unaff_R14 + (longlong)(iVar1 + iVar7) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 1:
      if (iVar7 + 1 < iStackX_24) {
        iVar1 = iStack00000000000000d0 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
        goto code_r0x000180395a7c;
      }
      break;
    case 2:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) {
code_r0x000180395ac1:
        in_stack_000000e8 =
             (ulonglong *)
             (*unaff_R14 + (longlong)(iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + iVar7) * 0x28 +
             8);
        goto code_r0x000180395b5d;
      }
      break;
    case 3:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto code_r0x000180395ac1;
      break;
    case 4:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) goto joined_r0x000180395b3d;
      break;
    case 5:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) {
code_r0x000180395b15:
        if (iVar7 + 1 < iStackX_24) {
          iVar1 = iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
      }
      break;
    case 6:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto joined_r0x000180395b3d;
      break;
    case 7:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto code_r0x000180395b15;
      break;
    default:
code_r0x000180395b5d:
      plVar6 = (longlong *)*in_stack_000000e8;
      uVar8 = (ulonglong)((longlong)in_stack_000000e8[1] + (7 - (longlong)plVar6)) >> 3;
      if ((longlong *)in_stack_000000e8[1] < plVar6) {
        uVar8 = uVar5;
      }
      unaff_R14 = in_stack_000000e0;
      if (uVar8 != 0) {
        do {
          lVar4 = *plVar6;
          if ((((*(byte *)(lVar4 + 0x139) & 1) != 0) && ((*(byte *)(lVar4 + 0x139) & 2) == 0)) &&
             (fVar9 = (float)FUN_18038d6a0(lVar4,in_stack_000000d8), fVar9 < unaff_XMM7_Da)) {
            unaff_R15 = lVar4;
            unaff_XMM7_Da = fVar9;
          }
          plVar6 = plVar6 + 1;
          uVar5 = uVar5 + 1;
          lVar4 = lStack0000000000000030;
        } while (uVar5 != uVar8);
      }
    }
    iVar3 = iVar3 + 1;
    lStack0000000000000028 = lStack0000000000000028 + -1;
    if (lStack0000000000000028 == 0) {
      return unaff_R15;
    }
  } while( true );
}



longlong FUN_1803959af(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RBP;
  longlong *plVar5;
  int iVar6;
  ulonglong in_R11;
  longlong *unaff_R14;
  ulonglong uVar7;
  longlong unaff_R15;
  float fVar8;
  float unaff_XMM7_Da;
  int iStackX_24;
  longlong lStack0000000000000028;
  longlong lStack0000000000000030;
  int iStack00000000000000d0;
  undefined8 in_stack_000000d8;
  longlong *in_stack_000000e0;
  ulonglong *in_stack_000000e8;
  
  iVar3 = (int)((param_1 - param_2) / *(float *)(unaff_R14 + 3));
  iVar6 = (int)in_R11;
  iStack00000000000000d0 = iVar6;
  if ((-1 < iVar3) && (iStack00000000000000d0 = iVar3, (int)unaff_R14[4] <= iVar3)) {
    iStack00000000000000d0 = (int)unaff_R14[4] + -1;
  }
  iVar3 = (int)(((*(float *)(unaff_RBP + 4) - *(float *)((longlong)unaff_R14 + 0xc)) - param_2) /
               *(float *)((longlong)unaff_R14 + 0x1c));
  if ((-1 < iVar3) && (iVar6 = iVar3, *(int *)((longlong)unaff_R14 + 0x24) <= iVar3)) {
    iVar6 = *(int *)((longlong)unaff_R14 + 0x24) + -1;
  }
  lVar4 = unaff_R14[4];
  iVar3 = -1;
  iStackX_24 = (int)((ulonglong)lVar4 >> 0x20);
  lStack0000000000000028 = 9;
  lStack0000000000000030 = lVar4;
  do {
    iVar1 = (int)lVar4;
    switch(iVar3) {
    case 0:
      iVar2 = iStack00000000000000d0;
joined_r0x000180395b3d:
      if (0 < iVar6) {
        iVar1 = iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + -1;
code_r0x000180395a7c:
        in_stack_000000e8 = (ulonglong *)(*unaff_R14 + (longlong)(iVar1 + iVar6) * 0x28 + 8);
        goto code_r0x000180395b5d;
      }
      break;
    case 1:
      if (iVar6 + 1 < iStackX_24) {
        iVar1 = iStack00000000000000d0 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
        goto code_r0x000180395a7c;
      }
      break;
    case 2:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) {
code_r0x000180395ac1:
        in_stack_000000e8 =
             (ulonglong *)
             (*unaff_R14 + (longlong)(iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + iVar6) * 0x28 +
             8);
        goto code_r0x000180395b5d;
      }
      break;
    case 3:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto code_r0x000180395ac1;
      break;
    case 4:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) goto joined_r0x000180395b3d;
      break;
    case 5:
      iVar2 = iStack00000000000000d0 + -1;
      if (0 < iStack00000000000000d0) {
code_r0x000180395b15:
        if (iVar6 + 1 < iStackX_24) {
          iVar1 = iVar2 * *(int *)((longlong)unaff_R14 + 0x24) + 1;
          goto code_r0x000180395a7c;
        }
      }
      break;
    case 6:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto joined_r0x000180395b3d;
      break;
    case 7:
      iVar2 = iStack00000000000000d0 + 1;
      if (iVar2 < iVar1) goto code_r0x000180395b15;
      break;
    default:
code_r0x000180395b5d:
      plVar5 = (longlong *)*in_stack_000000e8;
      uVar7 = (ulonglong)((longlong)in_stack_000000e8[1] + (7 - (longlong)plVar5)) >> 3;
      if ((longlong *)in_stack_000000e8[1] < plVar5) {
        uVar7 = in_R11;
      }
      unaff_R14 = in_stack_000000e0;
      if (uVar7 != 0) {
        do {
          lVar4 = *plVar5;
          if ((((*(byte *)(lVar4 + 0x139) & 1) != 0) && ((*(byte *)(lVar4 + 0x139) & 2) == 0)) &&
             (fVar8 = (float)FUN_18038d6a0(lVar4,in_stack_000000d8), fVar8 < unaff_XMM7_Da)) {
            unaff_R15 = lVar4;
            unaff_XMM7_Da = fVar8;
          }
          plVar5 = plVar5 + 1;
          in_R11 = in_R11 + 1;
          lVar4 = lStack0000000000000030;
        } while (in_R11 != uVar7);
      }
    }
    iVar3 = iVar3 + 1;
    lStack0000000000000028 = lStack0000000000000028 + -1;
    in_R11 = 0;
    if (lStack0000000000000028 == 0) {
      return unaff_R15;
    }
  } while( true );
}





// 函数: void FUN_180395c11(void)
void FUN_180395c11(void)

{
  return;
}





// 函数: void FUN_180395c50(longlong param_1,float *param_2,longlong param_3,ulonglong param_4,float *param_5
void FUN_180395c50(longlong param_1,float *param_2,longlong param_3,ulonglong param_4,float *param_5
                  ,undefined8 *param_6)

{
  float fVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStackX_8;
  float fStackX_c;
  
  lVar10 = (longlong)(int)param_4;
  iVar8 = 0;
  *(undefined4 *)(param_3 + 0x40 + lVar10 * 4) = *(undefined4 *)(param_1 + 0x558 + lVar10 * 4);
  if (*(char *)(param_3 + 0xa8) != '\0') {
    puVar7 = (undefined8 *)(param_3 + 0x60);
    uVar9 = param_4;
    do {
      puVar2 = (undefined8 *)*puVar7;
      if (*(char *)(puVar2 + 4) == '\x01') {
        pfVar3 = (float *)puVar2[1];
        pfVar4 = (float *)*puVar2;
        fVar11 = *pfVar4;
        fVar1 = pfVar4[1];
        fVar14 = *pfVar3 - fVar11;
        fVar15 = pfVar3[1] - fVar1;
        fVar17 = fVar15 * fVar15 + fVar14 * fVar14;
        auVar12 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        fVar13 = auVar12._0_4_;
        fVar16 = fVar13 * 0.5 * (3.0 - fVar17 * fVar13 * fVar13);
        fVar13 = (param_2[1] - fVar1) * fVar15 * fVar16 + (*param_2 - fVar11) * fVar14 * fVar16;
        if (0.0 <= fVar13) {
          if (fVar13 <= fVar16 * fVar17) {
            uVar5 = CONCAT44(fVar15 * fVar16 * fVar13 + fVar1,fVar14 * fVar16 * fVar13 + fVar11);
          }
          else {
            uVar5 = *(undefined8 *)pfVar3;
          }
        }
        else {
          uVar5 = *(undefined8 *)pfVar4;
        }
        fStackX_8 = (float)uVar5;
        fStackX_8 = *param_2 - fStackX_8;
        fStackX_c = (float)((ulonglong)uVar5 >> 0x20);
        fStackX_c = param_2[1] - fStackX_c;
        fVar11 = fStackX_8 * fStackX_8 + fStackX_c * fStackX_c;
        if (fVar11 < *param_5) {
          *param_5 = fVar11;
          *param_6 = puVar2;
        }
      }
      else {
        lVar6 = 0x10;
        if (puVar2[2] == param_3) {
          lVar6 = 0x18;
        }
        lVar6 = *(longlong *)(lVar6 + (longlong)puVar2);
        if (((*(byte *)(lVar6 + 0x139) & 1) != 0) &&
           (*(int *)(lVar6 + 0x40 + lVar10 * 4) != *(int *)(param_1 + 0x558 + lVar10 * 4))) {
          FUN_180395c50(param_1,param_2,lVar6,uVar9,param_5,param_6);
          uVar9 = param_4 & 0xffffffff;
        }
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < (int)(uint)*(byte *)(param_3 + 0xa8));
  }
  return;
}





// 函数: void FUN_180395c8e(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_180395c8e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  undefined8 *puVar8;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  int unaff_EDI;
  longlong in_R11;
  undefined8 unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined8 *puStack0000000000000028;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  uVar7 = (ulonglong)(unaff_EDI + 0x18);
  *(undefined8 *)(in_R11 + -0x30) = unaff_RSI;
  puVar8 = (undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(in_R11 + -0x38) = unaff_R12;
  *(undefined4 *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -100) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  do {
    puVar2 = (undefined8 *)*puVar8;
    if (*(char *)(puVar2 + 4) == '\x01') {
      pfVar3 = (float *)puVar2[1];
      pfVar4 = (float *)*puVar2;
      fVar9 = *pfVar4;
      fVar1 = pfVar4[1];
      fVar12 = *pfVar3 - fVar9;
      fVar13 = pfVar3[1] - fVar1;
      fVar15 = fVar13 * fVar13 + fVar12 * fVar12;
      auVar10 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar11 = auVar10._0_4_;
      fVar14 = fVar11 * 0.5 * (3.0 - fVar15 * fVar11 * fVar11);
      fVar11 = (unaff_R13[1] - fVar1) * fVar13 * fVar14 + (*unaff_R13 - fVar9) * fVar12 * fVar14;
      if (0.0 <= fVar11) {
        if (fVar11 <= fVar14 * fVar15) {
          uVar5 = CONCAT44(fVar13 * fVar14 * fVar11 + fVar1,fVar12 * fVar14 * fVar11 + fVar9);
        }
        else {
          uVar5 = *(undefined8 *)pfVar3;
        }
      }
      else {
        uVar5 = *(undefined8 *)pfVar4;
      }
      uVar7 = 0x18;
      fStack00000000000000c0 = (float)uVar5;
      fStack00000000000000c0 = *unaff_R13 - fStack00000000000000c0;
      fStack00000000000000c4 = (float)((ulonglong)uVar5 >> 0x20);
      fStack00000000000000c4 = unaff_R13[1] - fStack00000000000000c4;
      fVar9 = fStack00000000000000c0 * fStack00000000000000c0 +
              fStack00000000000000c4 * fStack00000000000000c4;
      if (fVar9 < *in_stack_000000e0) {
        *in_stack_000000e0 = fVar9;
        *in_stack_000000e8 = puVar2;
      }
    }
    else {
      uVar6 = 0x10;
      if (puVar2[2] == unaff_RBP) {
        uVar6 = uVar7;
      }
      if (((*(byte *)(*(longlong *)(uVar6 + (longlong)puVar2) + 0x139) & 1) != 0) &&
         (*(int *)(*(longlong *)(uVar6 + (longlong)puVar2) + 0x40 + unaff_R14 * 4) !=
          *(int *)(unaff_R15 + 0x558 + unaff_R14 * 4))) {
        puStack0000000000000028 = in_stack_000000e8;
        FUN_180395c50();
        uVar7 = 0x18;
      }
    }
    unaff_EDI = unaff_EDI + 1;
    puVar8 = puVar8 + 1;
  } while (unaff_EDI < (int)(uint)*(byte *)(unaff_RBP + 0xa8));
  return;
}





// 函数: void FUN_180395e8a(void)
void FUN_180395e8a(void)

{
  return;
}





