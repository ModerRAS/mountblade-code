#include "TaleWorlds.Native.Split.h"

// 99_part_13_part037_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808be0f0(longlong param_1,uint64_t param_2)
void FUN_1808be0f0(longlong param_1,uint64_t param_2)

{
  uint64_t auStackX_8 [4];
  
  auStackX_8[0] = 0;
  FUN_1808b88a0(param_1 + 0x290,param_2,auStackX_8);
  return;
}



uint64_t FUN_1808be120(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lStackX_8;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  plVar6 = (longlong *)0x0;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x28) + -0x18);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    plVar2 = plVar6;
  }
  plVar4 = plVar6;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2 + 3;
  }
  do {
    if (plVar4 == plVar1) {
LAB_1808be19d:
      lStackX_8 = 0;
      uVar3 = FUN_1808b7a70(param_1 + 0x290,(char)param_2,&lStackX_8);
      if ((int)uVar3 == 0) {
        plVar2 = (longlong *)(lStackX_8 + 0x18);
        if (lStackX_8 == 0) {
          plVar2 = plVar6;
        }
        if (plVar2 == (longlong *)0x0) {
          return 0x1c;
        }
        plVar4 = (longlong *)*plVar2;
        if (plVar4 != plVar2) {
          do {
            plVar4 = (longlong *)*plVar4;
            uVar5 = (int)plVar6 + 1;
            plVar6 = (longlong *)(ulonglong)uVar5;
          } while (plVar4 != plVar2);
          if (uVar5 != 0) {
            return 0x1c;
          }
        }
        plVar2[1] = *(longlong *)(param_1 + 0x30);
        *plVar2 = (longlong)plVar1;
        *(longlong **)(param_1 + 0x30) = plVar2;
        *(longlong **)plVar2[1] = plVar2;
        uVar3 = FUN_1808d5bd0(lStackX_8);
        if (((int)uVar3 == 0) && (uVar3 = FUN_1808d74e0(lStackX_8,1), (int)uVar3 == 0)) {
LAB_1808be216:
          uVar3 = 0;
        }
      }
      return uVar3;
    }
    plVar2 = plVar4 + 3;
    if (plVar4 == (longlong *)0x0) {
      plVar2 = (longlong *)0x30;
    }
    if (*plVar2 == param_2) {
      if (plVar4 != plVar1) goto LAB_1808be216;
      goto LAB_1808be19d;
    }
    if (plVar4 == plVar1) goto LAB_1808be19d;
    plVar2 = (longlong *)(*plVar4 + -0x18);
    if (*plVar4 == 0) {
      plVar2 = plVar6;
    }
    plVar4 = plVar6;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2 + 3;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808be240(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  
  if (param_2 == (longlong *)0x0) {
    return 0x1f;
  }
  iVar12 = (int)param_1[1];
  iVar11 = (int)param_1[4];
  if (iVar12 <= iVar11) goto LAB_1808be2cd;
  plVar10 = (longlong *)*param_1;
  if ((*(byte *)(plVar10 + (longlong)iVar11 * 2 + 1) & 1) == 0) {
    plVar13 = (longlong *)(plVar10[(longlong)iVar11 * 2] + 0x40);
    if ((param_2 < plVar13) || ((longlong *)(plVar10[(longlong)iVar11 * 2] + 0x20f38) < param_2))
    goto LAB_1808be2c3;
    iVar7 = (int)((ulonglong)((longlong)param_2 - (longlong)plVar13) / 0x108);
  }
  else {
LAB_1808be2c3:
    iVar7 = -1;
  }
  if (iVar7 != -1) {
FUN_1808be346:
    if (iVar11 == 0xfff) {
      return 0x26;
    }
    lVar14 = (longlong)iVar11 * 0x10;
    (**(code **)(*param_2 + 0x28))(param_2,0);
    uVar8 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar8;
    puVar2 = (uint *)(plVar10[(longlong)iVar11 * 2] + (longlong)(iVar7 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar7 & 0x1f) - (char)uVar8 & 0x1f);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)(param_1 + 4) = iVar11;
    if (*(short *)(lVar14 + 10 + (longlong)plVar10) == 0x200) {
      if (*(int *)((longlong)param_1 + 0x1c) != 0xfff) {
        *(short *)(*param_1 + 0xe + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10) =
             (short)iVar11;
        *(int16_t *)(lVar14 + 0xc + (longlong)plVar10) =
             *(int16_t *)((longlong)param_1 + 0x1c);
      }
      *(int *)((longlong)param_1 + 0x1c) = iVar11;
    }
    psVar4 = (short *)(lVar14 + 10 + (longlong)plVar10);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar9 = *param_1;
      uVar6 = *(ushort *)(lVar14 + 0xe + lVar9);
      lVar3 = lVar14 + lVar9;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar9 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar9 = *param_1;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar9 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar9 = *param_1;
      }
      if (*(int *)((longlong)param_1 + 0x1c) == iVar11) {
        *(uint *)((longlong)param_1 + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar14 + lVar9),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar14 + 8 + *param_1);
      *puVar5 = *puVar5 | 1;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      iVar12 = (int)param_1[1] + -1;
      if (-1 < iVar12) {
        lVar14 = (longlong)iVar12 << 4;
        do {
          if ((*(byte *)(*param_1 + 8 + lVar14) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar12) && (iVar11 = (int)param_1[1], iVar12 < iVar11)) {
            iVar7 = (iVar11 - iVar12) + -1;
            if (0 < iVar7) {
              lVar14 = *param_1 + (longlong)iVar12 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar14,lVar14 + 0x10,(longlong)iVar7 << 4);
            }
            *(int *)(param_1 + 1) = iVar11 + -1;
          }
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          lVar14 = lVar14 + -0x10;
          iVar12 = iVar12 + -1;
        } while (-1 < iVar12);
      }
    }
    return 0;
  }
LAB_1808be2cd:
  iVar11 = 0;
  if (0 < iVar12) {
    plVar10 = (longlong *)*param_1;
    plVar13 = plVar10;
    do {
      if ((*(byte *)(plVar13 + 1) & 1) == 0) {
        plVar1 = (longlong *)(*plVar13 + 0x40);
        if ((param_2 < plVar1) || ((longlong *)(*plVar13 + 0x20f38) < param_2)) goto LAB_1808be310;
        iVar7 = (int)((ulonglong)((longlong)param_2 - (longlong)plVar1) / 0x108);
      }
      else {
LAB_1808be310:
        iVar7 = -1;
      }
      if (iVar7 != -1) goto FUN_1808be346;
      iVar11 = iVar11 + 1;
      plVar13 = plVar13 + 2;
    } while (iVar11 < iVar12);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808be268(longlong *param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *unaff_RBX;
  int iVar15;
  longlong *plVar16;
  int in_R10D;
  ulonglong in_R11;
  longlong lVar17;
  
  iVar15 = (int)param_1[4];
  if (in_R10D <= iVar15) goto LAB_1808be2cd;
  param_1 = (longlong *)*param_1;
  if ((*(byte *)(param_1 + (longlong)iVar15 * 2 + 1) & 1) == 0) {
    plVar16 = (longlong *)(param_1[(longlong)iVar15 * 2] + 0x40);
    if ((param_4 < plVar16) || ((longlong *)(param_1[(longlong)iVar15 * 2] + 0x20f38) < param_4))
    goto LAB_1808be2c3;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = in_R11;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (longlong)param_4 - (longlong)plVar16;
    iVar11 = (int)(SUB168(auVar7 * auVar9,8) >> 4);
  }
  else {
LAB_1808be2c3:
    iVar11 = -1;
  }
  if (iVar11 != -1) {
FUN_1808be346:
    if (iVar15 == 0xfff) {
      return 0x26;
    }
    lVar17 = (longlong)iVar15 * 0x10;
    (**(code **)(*param_4 + 0x28))(param_4,0);
    uVar12 = iVar11 >> 0x1f & 0x1f;
    iVar11 = iVar11 + uVar12;
    puVar2 = (uint *)(param_1[(longlong)iVar15 * 2] + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar11 & 0x1f) - (char)uVar12 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = iVar15;
    if (*(short *)(lVar17 + 10 + (longlong)param_1) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)iVar15;
        *(int16_t *)(lVar17 + 0xc + (longlong)param_1) =
             *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = iVar15;
    }
    psVar4 = (short *)(lVar17 + 10 + (longlong)param_1);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar14 = *unaff_RBX;
      uVar6 = *(ushort *)(lVar17 + 0xe + lVar14);
      lVar3 = lVar17 + lVar14;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar14 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar14 = *unaff_RBX;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar14 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar14 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == iVar15) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar17 + lVar14),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar17 + 8 + *unaff_RBX);
      *puVar5 = *puVar5 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar15 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar15) {
        lVar17 = (longlong)iVar15 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar17) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar15) && (iVar11 = (int)unaff_RBX[1], iVar15 < iVar11)) {
            iVar13 = (iVar11 - iVar15) + -1;
            if (0 < iVar13) {
              lVar17 = *unaff_RBX + (longlong)iVar15 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar17,lVar17 + 0x10,(longlong)iVar13 << 4);
            }
            *(int *)(unaff_RBX + 1) = iVar11 + -1;
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar17 = lVar17 + -0x10;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
      }
    }
    return 0;
  }
LAB_1808be2cd:
  iVar15 = 0;
  if (0 < in_R10D) {
    param_1 = (longlong *)*unaff_RBX;
    plVar16 = param_1;
    do {
      if ((*(byte *)(plVar16 + 1) & 1) == 0) {
        plVar1 = (longlong *)(*plVar16 + 0x40);
        if ((param_4 < plVar1) || ((longlong *)(*plVar16 + 0x20f38) < param_4)) goto LAB_1808be310;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = in_R11;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (longlong)param_4 - (longlong)plVar1;
        iVar11 = (int)(SUB168(auVar8 * auVar10,8) >> 4);
      }
      else {
LAB_1808be310:
        iVar11 = -1;
      }
      if (iVar11 != -1) goto FUN_1808be346;
      iVar15 = iVar15 + 1;
      plVar16 = plVar16 + 2;
    } while (iVar15 < in_R10D);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808be346(void)

{
  uint *puVar1;
  longlong lVar2;
  short *psVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  longlong *in_R9;
  longlong lVar12;
  
  if (unaff_EDI == 0xfff) {
    uVar8 = 0x26;
  }
  else {
    lVar12 = (longlong)unaff_EDI * 0x10;
    (**(code **)(*in_R9 + 0x28))(in_R9,0);
    uVar9 = unaff_ESI >> 0x1f & 0x1f;
    iVar7 = unaff_ESI + uVar9;
    puVar1 = (uint *)(*(longlong *)(lVar12 + unaff_RBP) + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = unaff_EDI;
    if (*(short *)(lVar12 + 10 + unaff_RBP) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)unaff_EDI;
        *(int16_t *)(lVar12 + 0xc + unaff_RBP) = *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = unaff_EDI;
    }
    psVar3 = (short *)(lVar12 + 10 + unaff_RBP);
    *psVar3 = *psVar3 + -1;
    if (*psVar3 == 0) {
      lVar11 = *unaff_RBX;
      uVar5 = *(ushort *)(lVar12 + 0xe + lVar11);
      lVar2 = lVar12 + lVar11;
      if (uVar5 != 0xfff) {
        *(int16_t *)(lVar11 + 0xc + (ulonglong)uVar5 * 0x10) = *(int16_t *)(lVar2 + 0xc);
        lVar11 = *unaff_RBX;
      }
      if (*(ushort *)(lVar2 + 0xc) != 0xfff) {
        *(int16_t *)(lVar11 + 0xe + (ulonglong)*(ushort *)(lVar2 + 0xc) * 0x10) =
             *(int16_t *)(lVar2 + 0xe);
        lVar11 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == unaff_EDI) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar2 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar12 + lVar11),
                    &unknown_var_2816_ptr,0x104);
      puVar4 = (ushort *)(lVar12 + 8 + *unaff_RBX);
      *puVar4 = *puVar4 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar7 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar7) {
        lVar12 = (longlong)iVar7 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar12) & 1) == 0) break;
          if (-1 < iVar7) {
            iVar6 = (int)unaff_RBX[1];
            if (iVar7 < iVar6) {
              iVar10 = (iVar6 - iVar7) + -1;
              if (0 < iVar10) {
                lVar12 = *unaff_RBX + (longlong)iVar7 * 0x10;
                    // WARNING: Subroutine does not return
                memmove(lVar12,lVar12 + 0x10,(longlong)iVar10 << 4);
              }
              *(int *)(unaff_RBX + 1) = iVar6 + -1;
            }
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar12 = lVar12 + -0x10;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808be4d0(longlong *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  
  if (param_2 == (uint64_t *)0x0) {
    return 0x1f;
  }
  iVar16 = (int)param_1[1];
  iVar15 = (int)param_1[4];
  if (iVar16 <= iVar15) goto LAB_1808be563;
  plVar13 = (longlong *)*param_1;
  if ((*(byte *)(plVar13 + (longlong)iVar15 * 2 + 1) & 1) == 0) {
    puVar1 = (uint64_t *)(plVar13[(longlong)iVar15 * 2] + 0x40);
    if ((param_2 < puVar1) || ((uint64_t *)(plVar13[(longlong)iVar15 * 2] + 0xdfd0) < param_2))
    goto LAB_1808be559;
    uVar14 = (longlong)param_2 - (longlong)puVar1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar11 = SUB168(ZEXT816(0x2492492492492493) * auVar7,8);
    iVar9 = (int)((uVar14 - lVar11 >> 1) + lVar11 >> 6);
  }
  else {
LAB_1808be559:
    iVar9 = -1;
  }
  if (iVar9 != -1) {
FUN_1808be5df:
    if (iVar15 == 0xfff) {
      return 0x26;
    }
    lVar11 = (longlong)iVar15 * 0x10;
    (**(code **)*param_2)(param_2,0);
    uVar10 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar10;
    puVar2 = (uint *)(plVar13[(longlong)iVar15 * 2] + (longlong)(iVar9 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar9 & 0x1f) - (char)uVar10 & 0x1f);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)(param_1 + 4) = iVar15;
    if (*(short *)(lVar11 + 10 + (longlong)plVar13) == 0x200) {
      if (*(int *)((longlong)param_1 + 0x1c) != 0xfff) {
        *(short *)(*param_1 + 0xe + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10) =
             (short)iVar15;
        *(int16_t *)(lVar11 + 0xc + (longlong)plVar13) =
             *(int16_t *)((longlong)param_1 + 0x1c);
      }
      *(int *)((longlong)param_1 + 0x1c) = iVar15;
    }
    psVar4 = (short *)(lVar11 + 10 + (longlong)plVar13);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar12 = *param_1;
      uVar6 = *(ushort *)(lVar11 + 0xe + lVar12);
      lVar3 = lVar11 + lVar12;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar12 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar12 = *param_1;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar12 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar12 = *param_1;
      }
      if (*(int *)((longlong)param_1 + 0x1c) == iVar15) {
        *(uint *)((longlong)param_1 + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar11 + lVar12),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar11 + 8 + *param_1);
      *puVar5 = *puVar5 | 1;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      iVar16 = (int)param_1[1] + -1;
      if (-1 < iVar16) {
        lVar11 = (longlong)iVar16 << 4;
        do {
          if ((*(byte *)(*param_1 + 8 + lVar11) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar16) && (iVar15 = (int)param_1[1], iVar16 < iVar15)) {
            iVar9 = (iVar15 - iVar16) + -1;
            if (0 < iVar9) {
              lVar11 = *param_1 + (longlong)iVar16 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar11,lVar11 + 0x10,(longlong)iVar9 << 4);
            }
            *(int *)(param_1 + 1) = iVar15 + -1;
          }
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          lVar11 = lVar11 + -0x10;
          iVar16 = iVar16 + -1;
        } while (-1 < iVar16);
      }
    }
    return 0;
  }
LAB_1808be563:
  iVar15 = 0;
  if (0 < iVar16) {
    plVar13 = (longlong *)*param_1;
    plVar17 = plVar13;
    do {
      if ((*(byte *)(plVar17 + 1) & 1) == 0) {
        puVar1 = (uint64_t *)(*plVar17 + 0x40);
        if ((param_2 < puVar1) || ((uint64_t *)(*plVar17 + 0xdfd0) < param_2)) goto LAB_1808be5a9;
        uVar14 = (longlong)param_2 - (longlong)puVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        lVar11 = SUB168(ZEXT816(0x2492492492492493) * auVar8,8);
        iVar9 = (int)((uVar14 - lVar11 >> 1) + lVar11 >> 6);
      }
      else {
LAB_1808be5a9:
        iVar9 = -1;
      }
      if (iVar9 != -1) goto FUN_1808be5df;
      iVar15 = iVar15 + 1;
      plVar17 = plVar17 + 2;
    } while (iVar15 < iVar16);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1808be4f8(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *unaff_RBX;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  int in_R10D;
  ulonglong in_R11;
  
  iVar17 = (int)param_1[4];
  if (in_R10D <= iVar17) goto LAB_1808be563;
  param_1 = (longlong *)*param_1;
  if ((*(byte *)(param_1 + (longlong)iVar17 * 2 + 1) & 1) == 0) {
    puVar1 = (uint64_t *)(param_1[(longlong)iVar17 * 2] + 0x40);
    if ((param_4 < puVar1) || ((uint64_t *)(param_1[(longlong)iVar17 * 2] + 0xdfd0) < param_4))
    goto LAB_1808be559;
    uVar16 = (longlong)param_4 - (longlong)puVar1;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = in_R11;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar16;
    lVar14 = SUB168(auVar7 * auVar9,8);
    iVar11 = (int)((uVar16 - lVar14 >> 1) + lVar14 >> 6);
  }
  else {
LAB_1808be559:
    iVar11 = -1;
  }
  if (iVar11 != -1) {
FUN_1808be5df:
    if (iVar17 == 0xfff) {
      return 0x26;
    }
    lVar14 = (longlong)iVar17 * 0x10;
    (**(code **)*param_4)(param_4,0);
    uVar12 = iVar11 >> 0x1f & 0x1f;
    iVar11 = iVar11 + uVar12;
    puVar2 = (uint *)(param_1[(longlong)iVar17 * 2] + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar11 & 0x1f) - (char)uVar12 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = iVar17;
    if (*(short *)(lVar14 + 10 + (longlong)param_1) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)iVar17;
        *(int16_t *)(lVar14 + 0xc + (longlong)param_1) =
             *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = iVar17;
    }
    psVar4 = (short *)(lVar14 + 10 + (longlong)param_1);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar15 = *unaff_RBX;
      uVar6 = *(ushort *)(lVar14 + 0xe + lVar15);
      lVar3 = lVar14 + lVar15;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar15 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar15 = *unaff_RBX;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar15 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar15 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == iVar17) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar14 + lVar15),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar14 + 8 + *unaff_RBX);
      *puVar5 = *puVar5 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar17 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar17) {
        lVar14 = (longlong)iVar17 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar14) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar17) && (iVar11 = (int)unaff_RBX[1], iVar17 < iVar11)) {
            iVar13 = (iVar11 - iVar17) + -1;
            if (0 < iVar13) {
              lVar14 = *unaff_RBX + (longlong)iVar17 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar14,lVar14 + 0x10,(longlong)iVar13 << 4);
            }
            *(int *)(unaff_RBX + 1) = iVar11 + -1;
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar14 = lVar14 + -0x10;
          iVar17 = iVar17 + -1;
        } while (-1 < iVar17);
      }
    }
    return 0;
  }
LAB_1808be563:
  iVar17 = 0;
  if (0 < in_R10D) {
    param_1 = (longlong *)*unaff_RBX;
    plVar18 = param_1;
    do {
      if ((*(byte *)(plVar18 + 1) & 1) == 0) {
        puVar1 = (uint64_t *)(*plVar18 + 0x40);
        if ((param_4 < puVar1) || ((uint64_t *)(*plVar18 + 0xdfd0) < param_4)) goto LAB_1808be5a9;
        uVar16 = (longlong)param_4 - (longlong)puVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = in_R11;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar16;
        lVar14 = SUB168(auVar8 * auVar10,8);
        iVar11 = (int)((uVar16 - lVar14 >> 1) + lVar14 >> 6);
      }
      else {
LAB_1808be5a9:
        iVar11 = -1;
      }
      if (iVar11 != -1) goto FUN_1808be5df;
      iVar17 = iVar17 + 1;
      plVar18 = plVar18 + 2;
    } while (iVar17 < in_R10D);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808be5df(void)

{
  uint *puVar1;
  longlong lVar2;
  short *psVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t *in_R9;
  longlong lVar12;
  
  if (unaff_EDI == 0xfff) {
    uVar8 = 0x26;
  }
  else {
    lVar12 = (longlong)unaff_EDI * 0x10;
    (**(code **)*in_R9)(in_R9,0);
    uVar9 = unaff_ESI >> 0x1f & 0x1f;
    iVar7 = unaff_ESI + uVar9;
    puVar1 = (uint *)(*(longlong *)(lVar12 + unaff_RBP) + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = unaff_EDI;
    if (*(short *)(lVar12 + 10 + unaff_RBP) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)unaff_EDI;
        *(int16_t *)(lVar12 + 0xc + unaff_RBP) = *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = unaff_EDI;
    }
    psVar3 = (short *)(lVar12 + 10 + unaff_RBP);
    *psVar3 = *psVar3 + -1;
    if (*psVar3 == 0) {
      lVar11 = *unaff_RBX;
      uVar5 = *(ushort *)(lVar12 + 0xe + lVar11);
      lVar2 = lVar12 + lVar11;
      if (uVar5 != 0xfff) {
        *(int16_t *)(lVar11 + 0xc + (ulonglong)uVar5 * 0x10) = *(int16_t *)(lVar2 + 0xc);
        lVar11 = *unaff_RBX;
      }
      if (*(ushort *)(lVar2 + 0xc) != 0xfff) {
        *(int16_t *)(lVar11 + 0xe + (ulonglong)*(ushort *)(lVar2 + 0xc) * 0x10) =
             *(int16_t *)(lVar2 + 0xe);
        lVar11 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == unaff_EDI) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar2 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar12 + lVar11),
                    &unknown_var_2816_ptr,0x104);
      puVar4 = (ushort *)(lVar12 + 8 + *unaff_RBX);
      *puVar4 = *puVar4 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar7 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar7) {
        lVar12 = (longlong)iVar7 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar12) & 1) == 0) break;
          if (-1 < iVar7) {
            iVar6 = (int)unaff_RBX[1];
            if (iVar7 < iVar6) {
              iVar10 = (iVar6 - iVar7) + -1;
              if (0 < iVar10) {
                lVar12 = *unaff_RBX + (longlong)iVar7 * 0x10;
                    // WARNING: Subroutine does not return
                memmove(lVar12,lVar12 + 0x10,(longlong)iVar10 << 4);
              }
              *(int *)(unaff_RBX + 1) = iVar6 + -1;
            }
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar12 = lVar12 + -0x10;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808be760(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  
  if (param_2 == (longlong *)0x0) {
    return 0x1f;
  }
  iVar12 = (int)param_1[1];
  iVar11 = (int)param_1[4];
  if (iVar12 <= iVar11) goto LAB_1808be7ed;
  plVar10 = (longlong *)*param_1;
  if ((*(byte *)(plVar10 + (longlong)iVar11 * 2 + 1) & 1) == 0) {
    plVar13 = (longlong *)(plVar10[(longlong)iVar11 * 2] + 0x40);
    if ((param_2 < plVar13) || ((longlong *)(plVar10[(longlong)iVar11 * 2] + 0x11fb0) < param_2))
    goto LAB_1808be7e3;
    iVar7 = (int)((ulonglong)((longlong)param_2 - (longlong)plVar13) / 0x90);
  }
  else {
LAB_1808be7e3:
    iVar7 = -1;
  }
  if (iVar7 != -1) {
FUN_1808be866:
    if (iVar11 == 0xfff) {
      return 0x26;
    }
    lVar14 = (longlong)iVar11 * 0x10;
    (**(code **)(*param_2 + 0x28))(param_2,0);
    uVar8 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar8;
    puVar2 = (uint *)(plVar10[(longlong)iVar11 * 2] + (longlong)(iVar7 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar7 & 0x1f) - (char)uVar8 & 0x1f);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)(param_1 + 4) = iVar11;
    if (*(short *)(lVar14 + 10 + (longlong)plVar10) == 0x200) {
      if (*(int *)((longlong)param_1 + 0x1c) != 0xfff) {
        *(short *)(*param_1 + 0xe + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10) =
             (short)iVar11;
        *(int16_t *)(lVar14 + 0xc + (longlong)plVar10) =
             *(int16_t *)((longlong)param_1 + 0x1c);
      }
      *(int *)((longlong)param_1 + 0x1c) = iVar11;
    }
    psVar4 = (short *)(lVar14 + 10 + (longlong)plVar10);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar9 = *param_1;
      uVar6 = *(ushort *)(lVar14 + 0xe + lVar9);
      lVar3 = lVar14 + lVar9;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar9 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar9 = *param_1;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar9 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar9 = *param_1;
      }
      if (*(int *)((longlong)param_1 + 0x1c) == iVar11) {
        *(uint *)((longlong)param_1 + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar14 + lVar9),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar14 + 8 + *param_1);
      *puVar5 = *puVar5 | 1;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      iVar12 = (int)param_1[1] + -1;
      if (-1 < iVar12) {
        lVar14 = (longlong)iVar12 << 4;
        do {
          if ((*(byte *)(*param_1 + 8 + lVar14) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar12) && (iVar11 = (int)param_1[1], iVar12 < iVar11)) {
            iVar7 = (iVar11 - iVar12) + -1;
            if (0 < iVar7) {
              lVar14 = *param_1 + (longlong)iVar12 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar14,lVar14 + 0x10,(longlong)iVar7 << 4);
            }
            *(int *)(param_1 + 1) = iVar11 + -1;
          }
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          lVar14 = lVar14 + -0x10;
          iVar12 = iVar12 + -1;
        } while (-1 < iVar12);
      }
    }
    return 0;
  }
LAB_1808be7ed:
  iVar11 = 0;
  if (0 < iVar12) {
    plVar10 = (longlong *)*param_1;
    plVar13 = plVar10;
    do {
      if ((*(byte *)(plVar13 + 1) & 1) == 0) {
        plVar1 = (longlong *)(*plVar13 + 0x40);
        if ((param_2 < plVar1) || ((longlong *)(*plVar13 + 0x11fb0) < param_2)) goto LAB_1808be830;
        iVar7 = (int)((ulonglong)((longlong)param_2 - (longlong)plVar1) / 0x90);
      }
      else {
LAB_1808be830:
        iVar7 = -1;
      }
      if (iVar7 != -1) goto FUN_1808be866;
      iVar11 = iVar11 + 1;
      plVar13 = plVar13 + 2;
    } while (iVar11 < iVar12);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808be788(longlong *param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *unaff_RBX;
  int iVar15;
  longlong *plVar16;
  int in_R10D;
  ulonglong in_R11;
  longlong lVar17;
  
  iVar15 = (int)param_1[4];
  if (in_R10D <= iVar15) goto LAB_1808be7ed;
  param_1 = (longlong *)*param_1;
  if ((*(byte *)(param_1 + (longlong)iVar15 * 2 + 1) & 1) == 0) {
    plVar16 = (longlong *)(param_1[(longlong)iVar15 * 2] + 0x40);
    if ((param_4 < plVar16) || ((longlong *)(param_1[(longlong)iVar15 * 2] + 0x11fb0) < param_4))
    goto LAB_1808be7e3;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = in_R11;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (longlong)param_4 - (longlong)plVar16;
    iVar11 = (int)(SUB168(auVar7 * auVar9,8) >> 7);
  }
  else {
LAB_1808be7e3:
    iVar11 = -1;
  }
  if (iVar11 != -1) {
FUN_1808be866:
    if (iVar15 == 0xfff) {
      return 0x26;
    }
    lVar17 = (longlong)iVar15 * 0x10;
    (**(code **)(*param_4 + 0x28))(param_4,0);
    uVar12 = iVar11 >> 0x1f & 0x1f;
    iVar11 = iVar11 + uVar12;
    puVar2 = (uint *)(param_1[(longlong)iVar15 * 2] + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar11 & 0x1f) - (char)uVar12 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = iVar15;
    if (*(short *)(lVar17 + 10 + (longlong)param_1) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)iVar15;
        *(int16_t *)(lVar17 + 0xc + (longlong)param_1) =
             *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = iVar15;
    }
    psVar4 = (short *)(lVar17 + 10 + (longlong)param_1);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar14 = *unaff_RBX;
      uVar6 = *(ushort *)(lVar17 + 0xe + lVar14);
      lVar3 = lVar17 + lVar14;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar14 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar14 = *unaff_RBX;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar14 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar14 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == iVar15) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar17 + lVar14),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar17 + 8 + *unaff_RBX);
      *puVar5 = *puVar5 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar15 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar15) {
        lVar17 = (longlong)iVar15 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar17) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar15) && (iVar11 = (int)unaff_RBX[1], iVar15 < iVar11)) {
            iVar13 = (iVar11 - iVar15) + -1;
            if (0 < iVar13) {
              lVar17 = *unaff_RBX + (longlong)iVar15 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar17,lVar17 + 0x10,(longlong)iVar13 << 4);
            }
            *(int *)(unaff_RBX + 1) = iVar11 + -1;
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar17 = lVar17 + -0x10;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
      }
    }
    return 0;
  }
LAB_1808be7ed:
  iVar15 = 0;
  if (0 < in_R10D) {
    param_1 = (longlong *)*unaff_RBX;
    plVar16 = param_1;
    do {
      if ((*(byte *)(plVar16 + 1) & 1) == 0) {
        plVar1 = (longlong *)(*plVar16 + 0x40);
        if ((param_4 < plVar1) || ((longlong *)(*plVar16 + 0x11fb0) < param_4)) goto LAB_1808be830;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = in_R11;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (longlong)param_4 - (longlong)plVar1;
        iVar11 = (int)(SUB168(auVar8 * auVar10,8) >> 7);
      }
      else {
LAB_1808be830:
        iVar11 = -1;
      }
      if (iVar11 != -1) goto FUN_1808be866;
      iVar15 = iVar15 + 1;
      plVar16 = plVar16 + 2;
    } while (iVar15 < in_R10D);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808be866(void)

{
  uint *puVar1;
  longlong lVar2;
  short *psVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  longlong *in_R9;
  longlong lVar12;
  
  if (unaff_EDI == 0xfff) {
    uVar8 = 0x26;
  }
  else {
    lVar12 = (longlong)unaff_EDI * 0x10;
    (**(code **)(*in_R9 + 0x28))(in_R9,0);
    uVar9 = unaff_ESI >> 0x1f & 0x1f;
    iVar7 = unaff_ESI + uVar9;
    puVar1 = (uint *)(*(longlong *)(lVar12 + unaff_RBP) + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = unaff_EDI;
    if (*(short *)(lVar12 + 10 + unaff_RBP) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)unaff_EDI;
        *(int16_t *)(lVar12 + 0xc + unaff_RBP) = *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = unaff_EDI;
    }
    psVar3 = (short *)(lVar12 + 10 + unaff_RBP);
    *psVar3 = *psVar3 + -1;
    if (*psVar3 == 0) {
      lVar11 = *unaff_RBX;
      uVar5 = *(ushort *)(lVar12 + 0xe + lVar11);
      lVar2 = lVar12 + lVar11;
      if (uVar5 != 0xfff) {
        *(int16_t *)(lVar11 + 0xc + (ulonglong)uVar5 * 0x10) = *(int16_t *)(lVar2 + 0xc);
        lVar11 = *unaff_RBX;
      }
      if (*(ushort *)(lVar2 + 0xc) != 0xfff) {
        *(int16_t *)(lVar11 + 0xe + (ulonglong)*(ushort *)(lVar2 + 0xc) * 0x10) =
             *(int16_t *)(lVar2 + 0xe);
        lVar11 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == unaff_EDI) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar2 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar12 + lVar11),
                    &unknown_var_2816_ptr,0x104);
      puVar4 = (ushort *)(lVar12 + 8 + *unaff_RBX);
      *puVar4 = *puVar4 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar7 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar7) {
        lVar12 = (longlong)iVar7 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar12) & 1) == 0) break;
          if (-1 < iVar7) {
            iVar6 = (int)unaff_RBX[1];
            if (iVar7 < iVar6) {
              iVar10 = (iVar6 - iVar7) + -1;
              if (0 < iVar10) {
                lVar12 = *unaff_RBX + (longlong)iVar7 * 0x10;
                    // WARNING: Subroutine does not return
                memmove(lVar12,lVar12 + 0x10,(longlong)iVar10 << 4);
              }
              *(int *)(unaff_RBX + 1) = iVar6 + -1;
            }
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar12 = lVar12 + -0x10;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808be9f0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  iVar12 = (int)param_1[1];
  iVar11 = (int)param_1[4];
  if (iVar12 <= iVar11) goto LAB_1808bea7d;
  plVar10 = (longlong *)*param_1;
  if ((*(byte *)(plVar10 + (longlong)iVar11 * 2 + 1) & 1) == 0) {
    uVar1 = plVar10[(longlong)iVar11 * 2] + 0x40;
    if ((param_2 < uVar1) || (plVar10[(longlong)iVar11 * 2] + 0xcfd8U < param_2))
    goto LAB_1808bea73;
    iVar7 = (int)((param_2 - uVar1) / 0x68);
  }
  else {
LAB_1808bea73:
    iVar7 = -1;
  }
  if (iVar7 != -1) {
FUN_1808beaf6:
    if (iVar11 == 0xfff) {
      return 0x26;
    }
    lVar14 = (longlong)iVar11 * 0x10;
    FUN_1808d58e0(param_2);
    uVar8 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar8;
    puVar2 = (uint *)(plVar10[(longlong)iVar11 * 2] + (longlong)(iVar7 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar7 & 0x1f) - (char)uVar8 & 0x1f);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)(param_1 + 4) = iVar11;
    if (*(short *)(lVar14 + 10 + (longlong)plVar10) == 0x200) {
      if (*(int *)((longlong)param_1 + 0x1c) != 0xfff) {
        *(short *)(*param_1 + 0xe + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10) =
             (short)iVar11;
        *(int16_t *)(lVar14 + 0xc + (longlong)plVar10) =
             *(int16_t *)((longlong)param_1 + 0x1c);
      }
      *(int *)((longlong)param_1 + 0x1c) = iVar11;
    }
    psVar4 = (short *)(lVar14 + 10 + (longlong)plVar10);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar9 = *param_1;
      uVar6 = *(ushort *)(lVar14 + 0xe + lVar9);
      lVar3 = lVar14 + lVar9;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar9 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar9 = *param_1;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar9 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar9 = *param_1;
      }
      if (*(int *)((longlong)param_1 + 0x1c) == iVar11) {
        *(uint *)((longlong)param_1 + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar14 + lVar9),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar14 + 8 + *param_1);
      *puVar5 = *puVar5 | 1;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      iVar12 = (int)param_1[1] + -1;
      if (-1 < iVar12) {
        lVar14 = (longlong)iVar12 << 4;
        do {
          if ((*(byte *)(*param_1 + 8 + lVar14) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar12) && (iVar11 = (int)param_1[1], iVar12 < iVar11)) {
            iVar7 = (iVar11 - iVar12) + -1;
            if (0 < iVar7) {
              lVar14 = *param_1 + (longlong)iVar12 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar14,lVar14 + 0x10,(longlong)iVar7 << 4);
            }
            *(int *)(param_1 + 1) = iVar11 + -1;
          }
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          lVar14 = lVar14 + -0x10;
          iVar12 = iVar12 + -1;
        } while (-1 < iVar12);
      }
    }
    return 0;
  }
LAB_1808bea7d:
  iVar11 = 0;
  if (0 < iVar12) {
    plVar10 = (longlong *)*param_1;
    plVar13 = plVar10;
    do {
      if ((*(byte *)(plVar13 + 1) & 1) == 0) {
        uVar1 = *plVar13 + 0x40;
        if ((param_2 < uVar1) || (*plVar13 + 0xcfd8U < param_2)) goto LAB_1808beac0;
        iVar7 = (int)((param_2 - uVar1) / 0x68);
      }
      else {
LAB_1808beac0:
        iVar7 = -1;
      }
      if (iVar7 != -1) goto FUN_1808beaf6;
      iVar11 = iVar11 + 1;
      plVar13 = plVar13 + 2;
    } while (iVar11 < iVar12);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bea18(longlong *param_1,uint64_t param_2,uint64_t param_3,ulonglong param_4)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *unaff_RBX;
  int iVar15;
  longlong *plVar16;
  int in_R10D;
  ulonglong in_R11;
  longlong lVar17;
  
  iVar15 = (int)param_1[4];
  if (in_R10D <= iVar15) goto LAB_1808bea7d;
  param_1 = (longlong *)*param_1;
  if ((*(byte *)(param_1 + (longlong)iVar15 * 2 + 1) & 1) == 0) {
    uVar1 = param_1[(longlong)iVar15 * 2] + 0x40;
    if ((param_4 < uVar1) || (param_1[(longlong)iVar15 * 2] + 0xcfd8U < param_4))
    goto LAB_1808bea73;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = in_R11;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_4 - uVar1;
    iVar11 = (int)(SUB168(auVar7 * auVar9,8) >> 5);
  }
  else {
LAB_1808bea73:
    iVar11 = -1;
  }
  if (iVar11 != -1) {
FUN_1808beaf6:
    if (iVar15 == 0xfff) {
      return 0x26;
    }
    lVar17 = (longlong)iVar15 * 0x10;
    FUN_1808d58e0(param_4);
    uVar12 = iVar11 >> 0x1f & 0x1f;
    iVar11 = iVar11 + uVar12;
    puVar2 = (uint *)(param_1[(longlong)iVar15 * 2] + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar11 & 0x1f) - (char)uVar12 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = iVar15;
    if (*(short *)(lVar17 + 10 + (longlong)param_1) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)iVar15;
        *(int16_t *)(lVar17 + 0xc + (longlong)param_1) =
             *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = iVar15;
    }
    psVar4 = (short *)(lVar17 + 10 + (longlong)param_1);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar14 = *unaff_RBX;
      uVar6 = *(ushort *)(lVar17 + 0xe + lVar14);
      lVar3 = lVar17 + lVar14;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar14 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar14 = *unaff_RBX;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar14 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar14 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == iVar15) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar17 + lVar14),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar17 + 8 + *unaff_RBX);
      *puVar5 = *puVar5 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar15 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar15) {
        lVar17 = (longlong)iVar15 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar17) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar15) && (iVar11 = (int)unaff_RBX[1], iVar15 < iVar11)) {
            iVar13 = (iVar11 - iVar15) + -1;
            if (0 < iVar13) {
              lVar17 = *unaff_RBX + (longlong)iVar15 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar17,lVar17 + 0x10,(longlong)iVar13 << 4);
            }
            *(int *)(unaff_RBX + 1) = iVar11 + -1;
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar17 = lVar17 + -0x10;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
      }
    }
    return 0;
  }
LAB_1808bea7d:
  iVar15 = 0;
  if (0 < in_R10D) {
    param_1 = (longlong *)*unaff_RBX;
    plVar16 = param_1;
    do {
      if ((*(byte *)(plVar16 + 1) & 1) == 0) {
        uVar1 = *plVar16 + 0x40;
        if ((param_4 < uVar1) || (*plVar16 + 0xcfd8U < param_4)) goto LAB_1808beac0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = in_R11;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4 - uVar1;
        iVar11 = (int)(SUB168(auVar8 * auVar10,8) >> 5);
      }
      else {
LAB_1808beac0:
        iVar11 = -1;
      }
      if (iVar11 != -1) goto FUN_1808beaf6;
      iVar15 = iVar15 + 1;
      plVar16 = plVar16 + 2;
    } while (iVar15 < in_R10D);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808beaf6(void)

{
  uint *puVar1;
  longlong lVar2;
  short *psVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t in_R9;
  longlong lVar12;
  
  if (unaff_EDI == 0xfff) {
    uVar8 = 0x26;
  }
  else {
    lVar12 = (longlong)unaff_EDI * 0x10;
    FUN_1808d58e0(in_R9);
    uVar9 = unaff_ESI >> 0x1f & 0x1f;
    iVar7 = unaff_ESI + uVar9;
    puVar1 = (uint *)(*(longlong *)(lVar12 + unaff_RBP) + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = unaff_EDI;
    if (*(short *)(lVar12 + 10 + unaff_RBP) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)unaff_EDI;
        *(int16_t *)(lVar12 + 0xc + unaff_RBP) = *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = unaff_EDI;
    }
    psVar3 = (short *)(lVar12 + 10 + unaff_RBP);
    *psVar3 = *psVar3 + -1;
    if (*psVar3 == 0) {
      lVar11 = *unaff_RBX;
      uVar5 = *(ushort *)(lVar12 + 0xe + lVar11);
      lVar2 = lVar12 + lVar11;
      if (uVar5 != 0xfff) {
        *(int16_t *)(lVar11 + 0xc + (ulonglong)uVar5 * 0x10) = *(int16_t *)(lVar2 + 0xc);
        lVar11 = *unaff_RBX;
      }
      if (*(ushort *)(lVar2 + 0xc) != 0xfff) {
        *(int16_t *)(lVar11 + 0xe + (ulonglong)*(ushort *)(lVar2 + 0xc) * 0x10) =
             *(int16_t *)(lVar2 + 0xe);
        lVar11 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == unaff_EDI) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar2 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar12 + lVar11),
                    &unknown_var_2816_ptr,0x104);
      puVar4 = (ushort *)(lVar12 + 8 + *unaff_RBX);
      *puVar4 = *puVar4 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar7 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar7) {
        lVar12 = (longlong)iVar7 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar12) & 1) == 0) break;
          if (-1 < iVar7) {
            iVar6 = (int)unaff_RBX[1];
            if (iVar7 < iVar6) {
              iVar10 = (iVar6 - iVar7) + -1;
              if (0 < iVar10) {
                lVar12 = *unaff_RBX + (longlong)iVar7 * 0x10;
                    // WARNING: Subroutine does not return
                memmove(lVar12,lVar12 + 0x10,(longlong)iVar10 << 4);
              }
              *(int *)(unaff_RBX + 1) = iVar6 + -1;
            }
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar12 = lVar12 + -0x10;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1808bec80(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  iVar12 = (int)param_1[1];
  iVar11 = (int)param_1[4];
  if (iVar12 <= iVar11) goto LAB_1808bed0d;
  plVar10 = (longlong *)*param_1;
  if ((*(byte *)(plVar10 + (longlong)iVar11 * 2 + 1) & 1) == 0) {
    uVar1 = plVar10[(longlong)iVar11 * 2] + 0x40;
    if ((param_2 < uVar1) || (plVar10[(longlong)iVar11 * 2] + 0xafe8U < param_2))
    goto LAB_1808bed03;
    iVar7 = (int)((param_2 - uVar1) / 0x58);
  }
  else {
LAB_1808bed03:
    iVar7 = -1;
  }
  if (iVar7 != -1) {
FUN_1808bed86:
    if (iVar11 == 0xfff) {
      return 0x26;
    }
    lVar14 = (longlong)iVar11 * 0x10;
    FUN_1808d5aa0(param_2);
    uVar8 = iVar7 >> 0x1f & 0x1f;
    iVar7 = iVar7 + uVar8;
    puVar2 = (uint *)(plVar10[(longlong)iVar11 * 2] + (longlong)(iVar7 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar7 & 0x1f) - (char)uVar8 & 0x1f);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)(param_1 + 4) = iVar11;
    if (*(short *)(lVar14 + 10 + (longlong)plVar10) == 0x200) {
      if (*(int *)((longlong)param_1 + 0x1c) != 0xfff) {
        *(short *)(*param_1 + 0xe + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10) =
             (short)iVar11;
        *(int16_t *)(lVar14 + 0xc + (longlong)plVar10) =
             *(int16_t *)((longlong)param_1 + 0x1c);
      }
      *(int *)((longlong)param_1 + 0x1c) = iVar11;
    }
    psVar4 = (short *)(lVar14 + 10 + (longlong)plVar10);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar9 = *param_1;
      uVar6 = *(ushort *)(lVar14 + 0xe + lVar9);
      lVar3 = lVar14 + lVar9;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar9 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar9 = *param_1;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar9 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar9 = *param_1;
      }
      if (*(int *)((longlong)param_1 + 0x1c) == iVar11) {
        *(uint *)((longlong)param_1 + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar14 + lVar9),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar14 + 8 + *param_1);
      *puVar5 = *puVar5 | 1;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      iVar12 = (int)param_1[1] + -1;
      if (-1 < iVar12) {
        lVar14 = (longlong)iVar12 << 4;
        do {
          if ((*(byte *)(*param_1 + 8 + lVar14) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar12) && (iVar11 = (int)param_1[1], iVar12 < iVar11)) {
            iVar7 = (iVar11 - iVar12) + -1;
            if (0 < iVar7) {
              lVar14 = *param_1 + (longlong)iVar12 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar14,lVar14 + 0x10,(longlong)iVar7 << 4);
            }
            *(int *)(param_1 + 1) = iVar11 + -1;
          }
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
          lVar14 = lVar14 + -0x10;
          iVar12 = iVar12 + -1;
        } while (-1 < iVar12);
      }
    }
    return 0;
  }
LAB_1808bed0d:
  iVar11 = 0;
  if (0 < iVar12) {
    plVar10 = (longlong *)*param_1;
    plVar13 = plVar10;
    do {
      if ((*(byte *)(plVar13 + 1) & 1) == 0) {
        uVar1 = *plVar13 + 0x40;
        if ((param_2 < uVar1) || (*plVar13 + 0xafe8U < param_2)) goto LAB_1808bed50;
        iVar7 = (int)((param_2 - uVar1) / 0x58);
      }
      else {
LAB_1808bed50:
        iVar7 = -1;
      }
      if (iVar7 != -1) goto FUN_1808bed86;
      iVar11 = iVar11 + 1;
      plVar13 = plVar13 + 2;
    } while (iVar11 < iVar12);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808beca8(longlong *param_1,uint64_t param_2,uint64_t param_3,ulonglong param_4)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong lVar3;
  short *psVar4;
  ushort *puVar5;
  ushort uVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *unaff_RBX;
  int iVar15;
  longlong *plVar16;
  int in_R10D;
  ulonglong in_R11;
  longlong lVar17;
  
  iVar15 = (int)param_1[4];
  if (in_R10D <= iVar15) goto LAB_1808bed0d;
  param_1 = (longlong *)*param_1;
  if ((*(byte *)(param_1 + (longlong)iVar15 * 2 + 1) & 1) == 0) {
    uVar1 = param_1[(longlong)iVar15 * 2] + 0x40;
    if ((param_4 < uVar1) || (param_1[(longlong)iVar15 * 2] + 0xafe8U < param_4))
    goto LAB_1808bed03;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = in_R11;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_4 - uVar1;
    iVar11 = (int)(SUB168(auVar7 * auVar9,8) >> 4);
  }
  else {
LAB_1808bed03:
    iVar11 = -1;
  }
  if (iVar11 != -1) {
FUN_1808bed86:
    if (iVar15 == 0xfff) {
      return 0x26;
    }
    lVar17 = (longlong)iVar15 * 0x10;
    FUN_1808d5aa0(param_4);
    uVar12 = iVar11 >> 0x1f & 0x1f;
    iVar11 = iVar11 + uVar12;
    puVar2 = (uint *)(param_1[(longlong)iVar15 * 2] + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << (((byte)iVar11 & 0x1f) - (char)uVar12 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = iVar15;
    if (*(short *)(lVar17 + 10 + (longlong)param_1) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)iVar15;
        *(int16_t *)(lVar17 + 0xc + (longlong)param_1) =
             *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = iVar15;
    }
    psVar4 = (short *)(lVar17 + 10 + (longlong)param_1);
    *psVar4 = *psVar4 + -1;
    if (*psVar4 == 0) {
      lVar14 = *unaff_RBX;
      uVar6 = *(ushort *)(lVar17 + 0xe + lVar14);
      lVar3 = lVar17 + lVar14;
      if (uVar6 != 0xfff) {
        *(int16_t *)(lVar14 + 0xc + (ulonglong)uVar6 * 0x10) = *(int16_t *)(lVar3 + 0xc);
        lVar14 = *unaff_RBX;
      }
      if (*(ushort *)(lVar3 + 0xc) != 0xfff) {
        *(int16_t *)(lVar14 + 0xe + (ulonglong)*(ushort *)(lVar3 + 0xc) * 0x10) =
             *(int16_t *)(lVar3 + 0xe);
        lVar14 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == iVar15) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar3 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar17 + lVar14),
                    &unknown_var_2816_ptr,0x104);
      puVar5 = (ushort *)(lVar17 + 8 + *unaff_RBX);
      *puVar5 = *puVar5 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar15 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar15) {
        lVar17 = (longlong)iVar15 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar17) & 1) == 0) {
            return 0;
          }
          if ((-1 < iVar15) && (iVar11 = (int)unaff_RBX[1], iVar15 < iVar11)) {
            iVar13 = (iVar11 - iVar15) + -1;
            if (0 < iVar13) {
              lVar17 = *unaff_RBX + (longlong)iVar15 * 0x10;
                    // WARNING: Subroutine does not return
              memmove(lVar17,lVar17 + 0x10,(longlong)iVar13 << 4);
            }
            *(int *)(unaff_RBX + 1) = iVar11 + -1;
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar17 = lVar17 + -0x10;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
      }
    }
    return 0;
  }
LAB_1808bed0d:
  iVar15 = 0;
  if (0 < in_R10D) {
    param_1 = (longlong *)*unaff_RBX;
    plVar16 = param_1;
    do {
      if ((*(byte *)(plVar16 + 1) & 1) == 0) {
        uVar1 = *plVar16 + 0x40;
        if ((param_4 < uVar1) || (*plVar16 + 0xafe8U < param_4)) goto LAB_1808bed50;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = in_R11;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4 - uVar1;
        iVar11 = (int)(SUB168(auVar8 * auVar10,8) >> 4);
      }
      else {
LAB_1808bed50:
        iVar11 = -1;
      }
      if (iVar11 != -1) goto FUN_1808bed86;
      iVar15 = iVar15 + 1;
      plVar16 = plVar16 + 2;
    } while (iVar15 < in_R10D);
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bed86(void)

{
  uint *puVar1;
  longlong lVar2;
  short *psVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint64_t in_R9;
  longlong lVar12;
  
  if (unaff_EDI == 0xfff) {
    uVar8 = 0x26;
  }
  else {
    lVar12 = (longlong)unaff_EDI * 0x10;
    FUN_1808d5aa0(in_R9);
    uVar9 = unaff_ESI >> 0x1f & 0x1f;
    iVar7 = unaff_ESI + uVar9;
    puVar1 = (uint *)(*(longlong *)(lVar12 + unaff_RBP) + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (((byte)iVar7 & 0x1f) - (char)uVar9 & 0x1f);
    *(int *)((longlong)unaff_RBX + 0x14) = *(int *)((longlong)unaff_RBX + 0x14) + -1;
    *(int *)(unaff_RBX + 4) = unaff_EDI;
    if (*(short *)(lVar12 + 10 + unaff_RBP) == 0x200) {
      if (*(int *)((longlong)unaff_RBX + 0x1c) != 0xfff) {
        *(short *)(*unaff_RBX + 0xe + (longlong)*(int *)((longlong)unaff_RBX + 0x1c) * 0x10) =
             (short)unaff_EDI;
        *(int16_t *)(lVar12 + 0xc + unaff_RBP) = *(int16_t *)((longlong)unaff_RBX + 0x1c);
      }
      *(int *)((longlong)unaff_RBX + 0x1c) = unaff_EDI;
    }
    psVar3 = (short *)(lVar12 + 10 + unaff_RBP);
    *psVar3 = *psVar3 + -1;
    if (*psVar3 == 0) {
      lVar11 = *unaff_RBX;
      uVar5 = *(ushort *)(lVar12 + 0xe + lVar11);
      lVar2 = lVar12 + lVar11;
      if (uVar5 != 0xfff) {
        *(int16_t *)(lVar11 + 0xc + (ulonglong)uVar5 * 0x10) = *(int16_t *)(lVar2 + 0xc);
        lVar11 = *unaff_RBX;
      }
      if (*(ushort *)(lVar2 + 0xc) != 0xfff) {
        *(int16_t *)(lVar11 + 0xe + (ulonglong)*(ushort *)(lVar2 + 0xc) * 0x10) =
             *(int16_t *)(lVar2 + 0xe);
        lVar11 = *unaff_RBX;
      }
      if (*(int *)((longlong)unaff_RBX + 0x1c) == unaff_EDI) {
        *(uint *)((longlong)unaff_RBX + 0x1c) = (uint)*(ushort *)(lVar2 + 0xc);
      }
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(lVar12 + lVar11),
                    &unknown_var_2816_ptr,0x104);
      puVar4 = (ushort *)(lVar12 + 8 + *unaff_RBX);
      *puVar4 = *puVar4 | 1;
      *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + 1;
      iVar7 = (int)unaff_RBX[1] + -1;
      if (-1 < iVar7) {
        lVar12 = (longlong)iVar7 << 4;
        do {
          if ((*(byte *)(*unaff_RBX + 8 + lVar12) & 1) == 0) break;
          if (-1 < iVar7) {
            iVar6 = (int)unaff_RBX[1];
            if (iVar7 < iVar6) {
              iVar10 = (iVar6 - iVar7) + -1;
              if (0 < iVar10) {
                lVar12 = *unaff_RBX + (longlong)iVar7 * 0x10;
                    // WARNING: Subroutine does not return
                memmove(lVar12,lVar12 + 0x10,(longlong)iVar10 << 4);
              }
              *(int *)(unaff_RBX + 1) = iVar6 + -1;
            }
          }
          *(int *)(unaff_RBX + 3) = (int)unaff_RBX[3] + -1;
          lVar12 = lVar12 + -0x10;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}








