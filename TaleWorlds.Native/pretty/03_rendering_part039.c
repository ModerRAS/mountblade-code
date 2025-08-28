#include "TaleWorlds.Native.Split.h"
// 03_rendering_part039.c - 2 个函数
// 函数: void DataStructure_8aaf0(uint *param_1,int *param_2,int param_3,int param_4)
void DataStructure_8aaf0(uint *param_1,int *param_2,int param_3,int param_4)
{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  uint astack_special_x_18 [2];
  int iStackX_20;
  ushort *plocal_var_60;
  ushort *plocal_var_58;
  uint64_t local_var_50;
  iVar13 = param_3 + -1 + param_2[2];
  puVar14 = (ushort *)(param_2 + 6);
  puVar12 = *(ushort **)puVar14;
  iVar2 = *param_2;
  iVar13 = iVar13 - iVar13 % param_2[2];
  uVar8 = 0x40000000;
  astack_special_x_18[0] = 0x40000000;
  local_var_50 = 0;
  uVar1 = *puVar12;
  plocal_var_58 = (ushort *)0x0;
  iStackX_20 = param_4;
  plocal_var_60 = puVar12;
  if ((int)(iVar13 + (uint)uVar1) <= iVar2) {
    iVar3 = param_2[4];
    puVar9 = puVar14;
    uVar15 = uVar8;
    do {
      uVar6 = DataStructure_8aa10(uVar1,puVar12,uVar1,iVar13,astack_special_x_18);
      if (iVar3 == 0) {
        uVar11 = uVar15;
        if ((int)uVar8 <= (int)uVar6) {
LAB_18028abe5:
          uVar6 = uVar8;
          uVar11 = uVar15;
          puVar9 = plocal_var_58;
        }
      }
      else if ((param_2[1] < (int)(iStackX_20 + uVar6)) ||
              ((uVar11 = astack_special_x_18[0], (int)uVar8 <= (int)uVar6 &&
               ((uVar6 != uVar8 || ((int)uVar15 <= (int)astack_special_x_18[0])))))) goto LAB_18028abe5;
      plocal_var_58 = puVar9;
      uVar15 = uVar11;
      uVar8 = uVar6;
      puVar9 = puVar12 + 4;
      puVar12 = *(ushort **)(puVar12 + 4);
      uVar1 = *puVar12;
    } while ((int)((uint)uVar1 + iVar13) <= iVar2);
    astack_special_x_18[0] = uVar15;
    if (plocal_var_58 != (ushort *)0x0) {
      local_var_50 = (uint64_t)**(ushort **)plocal_var_58;
      uVar15 = (uint)**(ushort **)plocal_var_58;
      goto LAB_18028ac26;
    }
  }
  uVar15 = 0;
LAB_18028ac26:
  if (param_2[4] == 1) {
    uVar1 = *plocal_var_60;
    puVar12 = plocal_var_60;
    while ((int)(uint)uVar1 < iVar13) {
      puVar12 = *(ushort **)(puVar12 + 4);
      uVar1 = *puVar12;
    }
    puVar10 = *(ushort **)(plocal_var_60 + 4);
    puVar9 = plocal_var_60 + 4;
    iVar2 = param_2[1];
    uVar6 = (uint)*puVar10;
    puVar16 = plocal_var_60;
    do {
      uVar11 = (uint)*puVar12 - iVar13;
      puVar4 = puVar10;
      puVar5 = puVar9;
      while (puVar9 = puVar5, puVar10 = puVar4, (int)uVar6 <= (int)uVar11) {
        puVar4 = *(ushort **)(puVar10 + 4);
        puVar5 = puVar10 + 4;
        puVar14 = puVar9;
        puVar16 = puVar10;
        uVar6 = (uint)**(ushort **)(puVar10 + 4);
      }
      uVar7 = DataStructure_8aa10(iVar13,puVar16,uVar11,iVar13,&plocal_var_60);
      uVar15 = (uint)local_var_50;
      if ((((int)(iStackX_20 + uVar7) < iVar2) && ((int)uVar7 <= (int)uVar8)) &&
         ((((int)uVar7 < (int)uVar8 || ((int)(uint)plocal_var_60 < (int)astack_special_x_18[0])) ||
          (((uint)plocal_var_60 == astack_special_x_18[0] && ((int)uVar11 < (int)uVar15)))))) {
        local_var_50 = (uint64_t)uVar11;
        astack_special_x_18[0] = (uint)plocal_var_60;
        uVar8 = uVar7;
        uVar15 = uVar11;
        plocal_var_58 = puVar14;
      }
      puVar12 = *(ushort **)(puVar12 + 4);
    } while (puVar12 != (ushort *)0x0);
  }
  *(ushort **)(param_1 + 2) = plocal_var_58;
  *param_1 = uVar15;
  param_1[1] = uVar8;
  return;
}
int32_t DataStructure_8ad90(int64_t param_1,int64_t param_2,int param_3)
{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t *puVar8;
  ushort *puVar9;
  int32_t uVar10;
  ushort *puVar11;
  short *psVar12;
  int64_t lVar13;
  short sVar14;
  int *piVar15;
  short sVar16;
  int32_t uVar17;
  int64_t lVar18;
  int8_t stack_array_48 [16];
  uVar10 = 1;
  iVar7 = 0;
  if (0 < param_3) {
    piVar15 = (int *)(param_2 + 0xc);
    do {
      *piVar15 = iVar7;
      piVar15 = piVar15 + 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
  }
  lVar18 = (int64_t)param_3;
  qsort(param_2,lVar18,0x10,&processed_var_6720_ptr);
  if (0 < lVar18) {
    psVar12 = (short *)(param_2 + 10);
    lVar13 = lVar18;
    do {
      uVar2 = psVar12[-3];
      if ((uVar2 == 0) || (uVar3 = psVar12[-2], uVar3 == 0)) {
        psVar12[-1] = 0;
        psVar12[0] = 0;
      }
      else {
        puVar8 = (uint64_t *)DataStructure_8aaf0(stack_array_48,param_1,uVar2,uVar3);
        uVar5 = *puVar8;
        plVar6 = (int64_t *)puVar8[1];
        if (((plVar6 == (int64_t *)0x0) ||
            (*(int *)(param_1 + 4) < (int)((int)((uint64_t)uVar5 >> 0x20) + (uint)uVar3))) ||
           (psVar4 = *(short **)(param_1 + 0x20), psVar4 == (short *)0x0)) {
          psVar12[-1] = -1;
          psVar12[0] = -1;
        }
        else {
          sVar16 = (short)((uint64_t)uVar5 >> 0x20);
          psVar4[1] = uVar3 + sVar16;
          sVar14 = (short)uVar5;
          *psVar4 = sVar14;
          *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(psVar4 + 4);
          puVar9 = (ushort *)*plVar6;
          iVar7 = (int)uVar5;
          if ((int)(uint)*puVar9 < iVar7) {
            puVar11 = puVar9 + 4;
            puVar9 = *(ushort **)(puVar9 + 4);
            *(short **)puVar11 = psVar4;
          }
          else {
            *plVar6 = (int64_t)psVar4;
          }
          if (*(ushort **)(puVar9 + 4) != (ushort *)0x0) {
            puVar11 = *(ushort **)(puVar9 + 4);
            do {
              if ((int)(iVar7 + (uint)uVar2) < (int)(uint)*puVar11) break;
              *(uint64_t *)(puVar9 + 4) = *(uint64_t *)(param_1 + 0x20);
              *(ushort **)(param_1 + 0x20) = puVar9;
              puVar1 = puVar11 + 4;
              puVar9 = puVar11;
              puVar11 = *(ushort **)puVar1;
            } while (*(ushort **)puVar1 != (ushort *)0x0);
          }
          *(ushort **)(psVar4 + 4) = puVar9;
          if ((int)(uint)*puVar9 < (int)(iVar7 + (uint)uVar2)) {
            *puVar9 = uVar2 + sVar14;
          }
          psVar12[-1] = sVar14;
          *psVar12 = sVar16;
        }
      }
      psVar12 = psVar12 + 8;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  qsort(param_2,lVar18,0x10,&processed_var_6784_ptr);
  if (0 < lVar18) {
    psVar12 = (short *)(param_2 + 10);
    uVar17 = uVar10;
    do {
      if ((psVar12[-1] != -1) || (iVar7 = 0, *psVar12 != -1)) {
        iVar7 = 1;
      }
      *(int *)(psVar12 + 1) = iVar7;
      uVar10 = 0;
      if (iVar7 != 0) {
        uVar10 = uVar17;
      }
      psVar12 = psVar12 + 8;
      lVar18 = lVar18 + -1;
      uVar17 = uVar10;
    } while (lVar18 != 0);
  }
  return uVar10;
}
int DataStructure_8ada4(int64_t param_1,int64_t param_2,int param_3)
{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t *puVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  short *psVar13;
  int64_t lVar14;
  short sVar15;
  int *piVar16;
  short sVar17;
  int unaff_R14D;
  int64_t lVar18;
  int64_t local_var_88;
  iVar10 = 1;
  if (0 < param_3) {
    piVar16 = (int *)(param_2 + 0xc);
    iVar7 = unaff_R14D;
    do {
      *piVar16 = iVar7;
      piVar16 = piVar16 + 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
  }
  lVar18 = (int64_t)param_3;
  qsort(param_2,lVar18,0x10,&processed_var_6720_ptr);
  if (0 < lVar18) {
    psVar13 = (short *)(param_2 + 10);
    lVar14 = lVar18;
    do {
      uVar2 = psVar13[-3];
      if ((uVar2 == 0) || (uVar3 = psVar13[-2], uVar3 == 0)) {
        psVar13[-1] = 0;
        psVar13[0] = 0;
      }
      else {
        puVar8 = (uint64_t *)DataStructure_8aaf0(&local_buffer_00000030,param_1,uVar2,uVar3);
        uVar5 = *puVar8;
        plVar6 = (int64_t *)puVar8[1];
        if (((plVar6 == (int64_t *)0x0) ||
            (*(int *)(param_1 + 4) < (int)((int)((uint64_t)uVar5 >> 0x20) + (uint)uVar3))) ||
           (psVar4 = *(short **)(param_1 + 0x20), psVar4 == (short *)0x0)) {
          unaff_R14D = 0;
          psVar13[-1] = -1;
          psVar13[0] = -1;
        }
        else {
          sVar17 = (short)((uint64_t)uVar5 >> 0x20);
          psVar4[1] = uVar3 + sVar17;
          sVar15 = (short)uVar5;
          *psVar4 = sVar15;
          *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(psVar4 + 4);
          puVar9 = (ushort *)*plVar6;
          iVar7 = (int)uVar5;
          if ((int)(uint)*puVar9 < iVar7) {
            puVar12 = puVar9 + 4;
            puVar9 = *(ushort **)(puVar9 + 4);
            *(short **)puVar12 = psVar4;
          }
          else {
            *plVar6 = (int64_t)psVar4;
          }
          if (*(ushort **)(puVar9 + 4) != (ushort *)0x0) {
            puVar12 = *(ushort **)(puVar9 + 4);
            do {
              if ((int)(iVar7 + (uint)uVar2) < (int)(uint)*puVar12) break;
              *(uint64_t *)(puVar9 + 4) = *(uint64_t *)(param_1 + 0x20);
              *(ushort **)(param_1 + 0x20) = puVar9;
              puVar1 = puVar12 + 4;
              puVar9 = puVar12;
              puVar12 = *(ushort **)puVar1;
            } while (*(ushort **)puVar1 != (ushort *)0x0);
          }
          *(ushort **)(psVar4 + 4) = puVar9;
          if ((int)(uint)*puVar9 < (int)(iVar7 + (uint)uVar2)) {
            *puVar9 = uVar2 + sVar15;
          }
          unaff_R14D = 0;
          psVar13[-1] = sVar15;
          *psVar13 = sVar17;
        }
      }
      psVar13 = psVar13 + 8;
      lVar14 = lVar14 + -1;
      param_2 = local_var_88;
    } while (lVar14 != 0);
  }
  qsort(param_2,lVar18,0x10,&processed_var_6784_ptr);
  if (0 < lVar18) {
    psVar13 = (short *)(param_2 + 10);
    iVar7 = iVar10;
    do {
      if ((psVar13[-1] != -1) || (iVar11 = unaff_R14D, *psVar13 != -1)) {
        iVar11 = 1;
      }
      *(int *)(psVar13 + 1) = iVar11;
      iVar10 = unaff_R14D;
      if (iVar11 != 0) {
        iVar10 = iVar7;
      }
      psVar13 = psVar13 + 8;
      lVar18 = lVar18 + -1;
      iVar7 = iVar10;
    } while (lVar18 != 0);
  }
  return iVar10;
}
uint64_t DataStructure_8adf9(void)
{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  int64_t unaff_RBX;
  short *psVar12;
  int64_t unaff_RSI;
  int64_t lVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  uint64_t unaff_R12;
  uint unaff_R14D;
  int64_t unaff_R15;
  int64_t local_var_88;
  psVar12 = (short *)(unaff_RBX + 10);
  lVar13 = unaff_R15;
  do {
    uVar2 = psVar12[-3];
    if ((uVar2 == 0) || (uVar3 = psVar12[-2], uVar3 == 0)) {
      psVar12[-1] = 0;
      psVar12[0] = 0;
    }
    else {
      puVar7 = (uint64_t *)DataStructure_8aaf0(&local_buffer_00000030);
      uVar5 = *puVar7;
      plVar6 = (int64_t *)puVar7[1];
      if (((plVar6 == (int64_t *)0x0) ||
          (*(int *)(unaff_RSI + 4) < (int)((int)((uint64_t)uVar5 >> 0x20) + (uint)uVar3))) ||
         (psVar4 = *(short **)(unaff_RSI + 0x20), psVar4 == (short *)0x0)) {
        unaff_R14D = 0;
        psVar12[-1] = -1;
        psVar12[0] = -1;
      }
      else {
        sVar16 = (short)((uint64_t)uVar5 >> 0x20);
        psVar4[1] = uVar3 + sVar16;
        sVar14 = (short)uVar5;
        *psVar4 = sVar14;
        *(uint64_t *)(unaff_RSI + 0x20) = *(uint64_t *)(psVar4 + 4);
        puVar8 = (ushort *)*plVar6;
        iVar15 = (int)uVar5;
        if ((int)(uint)*puVar8 < iVar15) {
          puVar11 = puVar8 + 4;
          puVar8 = *(ushort **)(puVar8 + 4);
          *(short **)puVar11 = psVar4;
        }
        else {
          *plVar6 = (int64_t)psVar4;
        }
        if (*(ushort **)(puVar8 + 4) != (ushort *)0x0) {
          puVar11 = *(ushort **)(puVar8 + 4);
          do {
            if ((int)(iVar15 + (uint)uVar2) < (int)(uint)*puVar11) break;
            *(uint64_t *)(puVar8 + 4) = *(uint64_t *)(unaff_RSI + 0x20);
            *(ushort **)(unaff_RSI + 0x20) = puVar8;
            puVar1 = puVar11 + 4;
            puVar8 = puVar11;
            puVar11 = *(ushort **)puVar1;
          } while (*(ushort **)puVar1 != (ushort *)0x0);
        }
        *(ushort **)(psVar4 + 4) = puVar8;
        if ((int)(uint)*puVar8 < (int)(iVar15 + (uint)uVar2)) {
          *puVar8 = uVar2 + sVar14;
        }
        unaff_R14D = 0;
        psVar12[-1] = sVar14;
        *psVar12 = sVar16;
      }
    }
    psVar12 = psVar12 + 8;
    lVar13 = lVar13 - unaff_R12;
    if (lVar13 == 0) {
      qsort(local_var_88);
      if (0 < unaff_R15) {
        psVar12 = (short *)(local_var_88 + 10);
        do {
          if ((psVar12[-1] != -1) || (uVar10 = unaff_R14D, *psVar12 != -1)) {
            uVar10 = 1;
          }
          *(uint *)(psVar12 + 1) = uVar10;
          uVar9 = unaff_R14D;
          if (uVar10 != 0) {
            uVar9 = (uint)unaff_R12;
          }
          psVar12 = psVar12 + 8;
          unaff_R12 = (uint64_t)uVar9;
          unaff_R15 = unaff_R15 + -1;
        } while (unaff_R15 != 0);
      }
      return unaff_R12 & 0xffffffff;
    }
  } while( true );
}
int DataStructure_8af71(void)
{
  short *psVar1;
  int iVar2;
  int64_t unaff_RBX;
  short unaff_DI;
  int unaff_R12D;
  int iVar3;
  int unaff_R14D;
  int64_t unaff_R15;
  qsort();
  if (0 < unaff_R15) {
    psVar1 = (short *)(unaff_RBX + 10);
    iVar3 = unaff_R12D;
    do {
      if ((psVar1[-1] != unaff_DI) || (iVar2 = unaff_R14D, *psVar1 != unaff_DI)) {
        iVar2 = 1;
      }
      *(int *)(psVar1 + 1) = iVar2;
      unaff_R12D = unaff_R14D;
      if (iVar2 != 0) {
        unaff_R12D = iVar3;
      }
      psVar1 = psVar1 + 8;
      unaff_R15 = unaff_R15 + -1;
      iVar3 = unaff_R12D;
    } while (unaff_R15 != 0);
  }
  return unaff_R12D;
}
int DataStructure_8af94(void)
{
  short *psVar1;
  int iVar2;
  int iVar3;
  int64_t unaff_RBX;
  short unaff_DI;
  int unaff_R12D;
  int unaff_R14D;
  int64_t unaff_R15;
  psVar1 = (short *)(unaff_RBX + 10);
  do {
    if ((psVar1[-1] != unaff_DI) || (iVar3 = unaff_R14D, *psVar1 != unaff_DI)) {
      iVar3 = 1;
    }
    *(int *)(psVar1 + 1) = iVar3;
    iVar2 = unaff_R14D;
    if (iVar3 != 0) {
      iVar2 = unaff_R12D;
    }
    psVar1 = psVar1 + 8;
    unaff_R15 = unaff_R15 + -1;
    unaff_R12D = iVar2;
  } while (unaff_R15 != 0);
  return iVar2;
}
int64_t * DataStructure_8b000(int64_t *param_1,int64_t *param_2)
{
  int iVar1;
  int iVar2;
  int8_t uVar3;
  int8_t uVar4;
  byte bVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  int iStack_c;
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)((int64_t)param_2 + 0xc);
  if (iVar1 < iVar2) {
    iVar7 = iVar1 + 1;
    uVar3 = *(int8_t *)((int64_t)iVar1 + *param_2);
    *(int *)(param_2 + 1) = iVar7;
  }
  else {
    uVar3 = 0;
    iVar7 = iVar1;
  }
  if (iVar7 < iVar2) {
    lVar6 = (int64_t)iVar7;
    iVar7 = iVar7 + 1;
    uVar4 = *(int8_t *)(lVar6 + *param_2);
    *(int *)(param_2 + 1) = iVar7;
  }
  else {
    uVar4 = 0;
  }
  if (CONCAT11(uVar3,uVar4) != 0) {
    if (iVar7 < iVar2) {
      lVar6 = (int64_t)iVar7;
      iVar7 = iVar7 + 1;
      bVar5 = *(byte *)(lVar6 + *param_2);
    }
    else {
      bVar5 = 0;
    }
    uVar8 = (uint64_t)bVar5;
    iVar7 = (uint)CONCAT11(uVar3,uVar4) * (uint)bVar5 + iVar7;
    if ((iVar2 < iVar7) || (iVar7 < 0)) {
      iVar7 = iVar2;
    }
    uVar9 = 0;
    *(int *)(param_2 + 1) = iVar7;
    if (bVar5 != 0) {
      do {
        if (iVar7 < iVar2) {
          lVar6 = (int64_t)iVar7;
          iVar7 = iVar7 + 1;
          bVar5 = *(byte *)(lVar6 + *param_2);
          *(int *)(param_2 + 1) = iVar7;
        }
        else {
          iVar7 = (int)param_2[1];
          bVar5 = 0;
        }
        uVar9 = uVar9 << 8 | (uint)bVar5;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar7 = (uVar9 - 1) + iVar7;
    if ((iVar2 < iVar7) || (iVar7 < 0)) {
      iVar7 = iVar2;
    }
    *(int *)(param_2 + 1) = iVar7;
  }
  iVar7 = iVar7 - iVar1;
  iStack_c = 0;
  lVar6 = 0;
  if ((((-1 < iVar1) && (lVar6 = 0, -1 < iVar7)) && (iStack_c = 0, lVar6 = 0, iVar1 <= iVar2)) &&
     (lVar6 = 0, iVar7 <= iVar2 - iVar1)) {
    lVar6 = (int64_t)iVar1 + *param_2;
    iStack_c = iVar7;
  }
  *param_1 = lVar6;
  *(int32_t *)(param_1 + 1) = 0;
  *(int *)((int64_t)param_1 + 0xc) = iStack_c;
  return param_1;
}
// 函数: void DataStructure_8b091(uint64_t param_1,int param_2,uint param_3,int64_t *param_4)
void DataStructure_8b091(uint64_t param_1,int param_2,uint param_3,int64_t *param_4)
{
  byte bVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t *unaff_RDI;
  int in_R10D;
  int in_R11D;
  int32_t in_register_0000009c;
  int iStackX_c;
  do {
    if (param_2 < in_R10D) {
      lVar2 = (int64_t)param_2;
      param_2 = param_2 + 1;
      bVar1 = *(byte *)(lVar2 + *param_4);
      *(int *)(param_4 + 1) = param_2;
    }
    else {
      param_2 = (int)param_4[1];
      bVar1 = 0;
    }
    param_3 = param_3 << 8 | (uint)bVar1;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
  param_2 = (param_3 - 1) + param_2;
  if ((in_R10D < param_2) || (param_2 < 0)) {
    param_2 = in_R10D;
  }
  *(int *)(param_4 + 1) = param_2;
  param_2 = param_2 - in_R11D;
  iStackX_c = 0;
  lVar2 = 0;
  if ((((-1 < in_R11D) && (lVar2 = 0, -1 < param_2)) &&
      (iStackX_c = 0, lVar2 = 0, in_R11D <= in_R10D)) && (lVar2 = 0, param_2 <= in_R10D - in_R11D))
  {
    lVar2 = CONCAT44(in_register_0000009c,in_R11D) + *param_4;
    iStackX_c = param_2;
  }
  *unaff_RDI = lVar2;
  *(int32_t *)(unaff_RDI + 1) = 0;
  *(int *)((int64_t)unaff_RDI + 0xc) = iStackX_c;
  return;
}