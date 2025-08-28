#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 06_utilities_part013.c - 6 个函数

// 函数: void FUN_1808986b0(int64_t param_1,uint64_t param_2)
void FUN_1808986b0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = func_0x00018076b690(param_2);
  iVar1 = *(int *)(param_1 + 0x30);
  uVar5 = (int)*(uint *)(param_1 + 0x34) >> 0x1f;
  iVar3 = (*(uint *)(param_1 + 0x34) ^ uVar5) - uVar5;
  iVar6 = iVar1 + iVar2;
  if (iVar3 < iVar6) {
    iVar4 = (int)((float)iVar3 * 1.5);
    iVar3 = iVar6;
    if (iVar6 <= iVar4) {
      iVar3 = iVar4;
    }
    if (iVar3 < 0x40) {
      iVar3 = 0x40;
    }
    iVar3 = FUN_180849030(param_1 + 0x28,iVar3);
    if (iVar3 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)(param_1 + 0x34) >> 0x1f;
  if (((int)((*(uint *)(param_1 + 0x34) ^ uVar5) - uVar5) < iVar6) &&
     (iVar3 = FUN_180849030(param_1 + 0x28,iVar6), iVar3 != 0)) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar6 <= iVar3) {
    *(int *)(param_1 + 0x30) = iVar6;
                    // WARNING: Subroutine does not return
    memcpy((int64_t)iVar1 + *(int64_t *)(param_1 + 0x28),param_2,(int64_t)iVar2);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar3 + *(int64_t *)(param_1 + 0x28),0,(int64_t)(iVar6 - iVar3));
}



uint64_t FUN_180898790(int64_t *param_1,int param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  
  uVar3 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_1 + 0xc) ^ uVar3) - uVar3) < param_2) &&
     (uVar2 = FUN_180849030(param_1,param_2), (int)uVar2 != 0)) {
    return uVar2;
  }
  iVar1 = (int)param_1[1];
  if (param_2 <= iVar1) {
    *(int *)(param_1 + 1) = param_2;
    return 0;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar1 + *param_1,0,(int64_t)(param_2 - iVar1));
}



uint64_t FUN_1808987e0(int64_t *param_1,char param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uStackX_8;
  int64_t alStackX_18 [2];
  void *puStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  *(int8_t *)(param_1 + 4) = 1;
  uVar2 = FUN_18073a200(*(uint64_t *)(param_1[1] + 0x78),&uStackX_8);
  if ((((int)uVar2 == 0) && (uVar2 = FUN_18073c4c0(uStackX_8,alStackX_18,0), (int)uVar2 == 0)) &&
     (uVar2 = (**(code **)(*param_1 + 0x10))(param_1), (int)uVar2 == 0)) {
    uVar3 = (uint64_t)(alStackX_18[0] * 48000) / (uint64_t)*(uint *)((int64_t)param_1 + 0x1c);
    lVar1 = param_1[2];
    uVar4 = uVar3 - lVar1;
    if (((param_2 != '\0') || (lVar1 == 0)) || (47999 < uVar4)) {
      param_1[2] = uVar3;
      uStack_20 = 0;
      uStack_18 = 0;
      if (lVar1 != 0) {
        uStack_18 = uVar4;
      }
      puStack_28 = &unknown_var_7904_ptr;
      uVar2 = FUN_180897520(param_1,&puStack_28);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808988b0(int64_t *param_1,char *param_2,uint64_t *param_3)

{
  char *pcVar1;
  uint64_t *puVar2;
  byte bVar3;
  uint64_t uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  
  puVar11 = (uint *)*param_1;
  if (((puVar11 != (uint *)0x0) && (param_1[4] != 0)) && (param_1[2] != 0)) {
    iVar10 = 0;
    cVar5 = *param_2;
    while (cVar5 != '\0') {
      bVar3 = *(byte *)((int64_t)puVar11 + 7);
      if (bVar3 == 0) {
        return 0x4a;
      }
      cVar5 = func_0x00018076b8a0(cVar5);
      puVar11 = (uint *)(*param_1 + (uint64_t)(puVar11[1] & 0xffffff) * 8);
      iVar7 = 0;
      if (bVar3 == 0) {
        return 0x4a;
      }
      while (*(char *)((int64_t)puVar11 + 3) != cVar5) {
        iVar7 = iVar7 + 1;
        puVar11 = puVar11 + 2;
        if ((int)(uint)bVar3 <= iVar7) {
          return 0x4a;
        }
      }
      param_2 = param_2 + 1;
      pcVar9 = (char *)(param_1[4] + 1 + (uint64_t)(*puVar11 & 0xffffff));
      cVar5 = *param_2;
      while (cVar5 != '\0') {
        if (*pcVar9 == '\0') goto LAB_1808989b1;
        cVar5 = func_0x00018076b8a0(cVar5);
        cVar6 = func_0x00018076b8a0(*pcVar9);
        if (cVar5 != cVar6) break;
        pcVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        pcVar9 = pcVar9 + 1;
        cVar5 = *pcVar1;
      }
      if (*pcVar9 != '\0') {
        return 0x4a;
      }
LAB_1808989b1:
      cVar5 = *param_2;
    }
    bVar3 = *(byte *)((int64_t)puVar11 + 7);
    if (bVar3 != 0) {
      puVar11 = (uint *)(*param_1 + (uint64_t)(puVar11[1] & 0xffffff) * 8);
      if (bVar3 != 0) {
        do {
          if (*(char *)((int64_t)puVar11 + 3) == '\0') goto LAB_1808989f7;
          iVar10 = iVar10 + 1;
          puVar11 = puVar11 + 2;
        } while (iVar10 < (int)(uint)bVar3);
      }
      return 0x4a;
    }
LAB_1808989f7:
    uVar8 = puVar11[1] & 0xffffff;
    if (((char)(puVar11[1] >> 0x18) == '\0') && ((int)uVar8 < (int)param_1[3])) {
      puVar2 = (uint64_t *)(param_1[2] + (uint64_t)uVar8 * 0x10);
      uVar4 = puVar2[1];
      *param_3 = *puVar2;
      param_3[1] = uVar4;
      return 0;
    }
  }
  return 0x1c;
}



uint64_t
FUN_180898a50(int64_t param_1,uint *param_2,uint64_t param_3,int32_t param_4,
             uint64_t param_5)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = 0;
  iVar9 = *(int *)(param_1 + 0x18) + -1;
  if (-1 < iVar9) {
    lVar2 = *(int64_t *)(param_1 + 0x10);
    uVar1 = *param_2;
    do {
      iVar7 = iVar9 + iVar8 >> 1;
      puVar6 = (uint *)((int64_t)iVar7 * 0x10 + lVar2);
      if (uVar1 == *puVar6) {
        iVar4 = (uint)(ushort)param_2[1] - (uint)(ushort)puVar6[1];
        if ((iVar4 == 0) &&
           (iVar4 = (uint)*(ushort *)((int64_t)param_2 + 6) -
                    (uint)*(ushort *)((int64_t)puVar6 + 6), iVar4 == 0)) {
          iVar4 = memcmp(param_2 + 2,puVar6 + 2,8);
        }
      }
      else {
        iVar4 = 1;
        if (uVar1 < *puVar6) {
          iVar4 = -1;
        }
      }
      if (iVar4 == 0) {
        if (iVar7 < 0) {
          return 0x4a;
        }
        uVar5 = FUN_180898b40(param_1,iVar7,0,param_3,param_4,param_5);
        return uVar5;
      }
      iVar3 = iVar7 + -1;
      if (-1 < iVar4) {
        iVar3 = iVar9;
      }
      iVar9 = iVar3;
      if (-1 < iVar4) {
        iVar8 = iVar7 + 1;
      }
    } while (iVar8 <= iVar9);
  }
  return 0x4a;
}



int32_t
FUN_180898b40(int64_t *param_1,int param_2,int32_t *param_3,int8_t *param_4,int param_5,
             int *param_6)

{
  int32_t *puVar1;
  int8_t uVar2;
  uint uVar3;
  uint3 uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int8_t *puVar10;
  int8_t *puVar11;
  uint uVar12;
  int64_t lVar13;
  int8_t *puVar14;
  int iVar15;
  int32_t uVar16;
  int iVar17;
  
  if ((-1 < param_2) && (param_2 < (int)param_1[3])) {
    if (param_3 != (int32_t *)0x0) {
      puVar1 = (int32_t *)(param_1[2] + (int64_t)param_2 * 0x10);
      uVar16 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *param_3 = *puVar1;
      param_3[1] = uVar16;
      param_3[2] = uVar5;
      param_3[3] = uVar6;
    }
    iVar17 = 0;
    uVar12 = 0;
    uVar4 = *(uint3 *)((int64_t)param_2 * 3 + param_1[6]);
    while (uVar7 = (uint)uVar4, uVar7 != 0xffffff) {
      uVar3 = *(uint *)(*param_1 + (uint64_t)uVar7 * 8);
      if ((uVar3 & 0xffffff) != 0xffffff) {
        lVar13 = (uint64_t)(uVar3 & 0xffffff) + param_1[4];
        iVar8 = func_0x00018076b690(lVar13);
        if (param_5 != 0) {
          puVar14 = (int8_t *)((iVar8 + -1) + lVar13);
          iVar15 = iVar8;
          while (0 < iVar15) {
            iVar9 = iVar15;
            if ((int)(param_5 - uVar12) <= iVar15) {
              iVar9 = param_5 - uVar12;
            }
            iVar15 = iVar15 - iVar9;
            if (iVar9 != 0) {
              puVar10 = param_4 + (int)uVar12;
              uVar12 = uVar12 + iVar9;
              do {
                uVar2 = *puVar14;
                puVar14 = puVar14 + -1;
                *puVar10 = uVar2;
                puVar10 = puVar10 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            uVar12 = uVar12 & (int)(uVar12 - param_5) >> 0x1f;
          }
        }
        iVar17 = iVar17 + iVar8;
      }
      uVar4 = *(uint3 *)((uint64_t)uVar7 * 3 + param_1[8]);
    }
    uVar16 = 0;
    if (param_5 != 0) {
      if (iVar17 < param_5) {
        puVar10 = param_4 + iVar17;
        puVar14 = puVar10 + -1;
        if (param_4 < puVar14) {
          do {
            uVar2 = *param_4;
            *param_4 = *puVar14;
            param_4 = param_4 + 1;
            *puVar14 = uVar2;
            puVar14 = puVar14 + -1;
          } while (param_4 < puVar14);
        }
        *puVar10 = 0;
        uVar16 = 0;
      }
      else {
        puVar11 = param_4 + (int)uVar12;
        puVar14 = puVar11 + -1;
        puVar10 = param_4;
        if (param_4 < puVar14) {
          do {
            uVar2 = *puVar10;
            *puVar10 = *puVar14;
            puVar10 = puVar10 + 1;
            *puVar14 = uVar2;
            puVar14 = puVar14 + -1;
          } while (puVar10 < puVar14);
        }
        puVar14 = puVar11 + (int64_t)(int)(param_5 - uVar12) + -1;
        if (puVar11 < puVar14) {
          do {
            uVar2 = *puVar11;
            *puVar11 = *puVar14;
            puVar11 = puVar11 + 1;
            *puVar14 = uVar2;
            puVar14 = puVar14 + -1;
          } while (puVar11 < puVar14);
        }
        param_4[(int64_t)param_5 + -1] = 0;
        uVar16 = 0x41;
      }
    }
    if (param_6 != (int *)0x0) {
      *param_6 = iVar17 + 1;
    }
    return uVar16;
  }
  return 0x1f;
}



int32_t FUN_180898b65(uint64_t param_1,int param_2,int32_t *param_3)

{
  int32_t *puVar1;
  int8_t uVar2;
  uint uVar3;
  uint3 uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int8_t *puVar10;
  int8_t *puVar11;
  uint uVar12;
  int iVar13;
  int64_t unaff_RBP;
  int8_t *unaff_RSI;
  int64_t lVar14;
  int8_t *puVar15;
  int iVar16;
  int32_t uVar17;
  int64_t *unaff_R14;
  int iVar18;
  int *in_stack_00000078;
  
  if (param_3 != (int32_t *)0x0) {
    puVar1 = (int32_t *)(unaff_R14[2] + (int64_t)param_2 * 0x10);
    uVar17 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    *param_3 = *puVar1;
    param_3[1] = uVar17;
    param_3[2] = uVar5;
    param_3[3] = uVar6;
  }
  iVar18 = 0;
  uVar12 = 0;
  iVar13 = (int)unaff_RBP;
  uVar4 = *(uint3 *)((int64_t)param_2 * 3 + unaff_R14[6]);
  while (uVar7 = (uint)uVar4, uVar7 != 0xffffff) {
    uVar3 = *(uint *)(*unaff_R14 + (uint64_t)uVar7 * 8);
    if ((uVar3 & 0xffffff) != 0xffffff) {
      lVar14 = (uint64_t)(uVar3 & 0xffffff) + unaff_R14[4];
      iVar8 = func_0x00018076b690(lVar14);
      if (iVar13 != 0) {
        puVar15 = (int8_t *)((iVar8 + -1) + lVar14);
        iVar16 = iVar8;
        while (0 < iVar16) {
          iVar9 = iVar16;
          if ((int)(iVar13 - uVar12) <= iVar16) {
            iVar9 = iVar13 - uVar12;
          }
          iVar16 = iVar16 - iVar9;
          if (iVar9 != 0) {
            puVar10 = unaff_RSI + (int)uVar12;
            uVar12 = uVar12 + iVar9;
            do {
              uVar2 = *puVar15;
              puVar15 = puVar15 + -1;
              *puVar10 = uVar2;
              puVar10 = puVar10 + 1;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          uVar12 = uVar12 & (int)(uVar12 - iVar13) >> 0x1f;
        }
      }
      iVar18 = iVar18 + iVar8;
    }
    uVar4 = *(uint3 *)((uint64_t)uVar7 * 3 + unaff_R14[8]);
  }
  uVar17 = 0;
  if (iVar13 != 0) {
    if (iVar18 < iVar13) {
      puVar10 = unaff_RSI + iVar18;
      puVar15 = puVar10 + -1;
      if (unaff_RSI < puVar15) {
        do {
          uVar2 = *unaff_RSI;
          *unaff_RSI = *puVar15;
          unaff_RSI = unaff_RSI + 1;
          *puVar15 = uVar2;
          puVar15 = puVar15 + -1;
        } while (unaff_RSI < puVar15);
      }
      *puVar10 = 0;
      uVar17 = 0;
    }
    else {
      puVar11 = unaff_RSI + (int)uVar12;
      puVar15 = puVar11 + -1;
      puVar10 = unaff_RSI;
      if (unaff_RSI < puVar15) {
        do {
          uVar2 = *puVar10;
          *puVar10 = *puVar15;
          puVar10 = puVar10 + 1;
          *puVar15 = uVar2;
          puVar15 = puVar15 + -1;
        } while (puVar10 < puVar15);
      }
      puVar15 = puVar11 + (int64_t)(int)(iVar13 - uVar12) + -1;
      if (puVar11 < puVar15) {
        do {
          uVar2 = *puVar11;
          *puVar11 = *puVar15;
          puVar11 = puVar11 + 1;
          *puVar15 = uVar2;
          puVar15 = puVar15 + -1;
        } while (puVar11 < puVar15);
      }
      unaff_RSI[unaff_RBP + -1] = 0;
      uVar17 = 0x41;
    }
  }
  if (in_stack_00000078 != (int *)0x0) {
    *in_stack_00000078 = iVar18 + 1;
  }
  return uVar17;
}



int32_t FUN_180898bc0(uint64_t param_1,uint64_t param_2)

{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int8_t *puVar5;
  int8_t *puVar6;
  uint unaff_EBX;
  int iVar7;
  int64_t unaff_RBP;
  int8_t *unaff_RSI;
  int64_t lVar8;
  int8_t *puVar9;
  int iVar10;
  int32_t unaff_R13D;
  int64_t *unaff_R14;
  int unaff_R15D;
  int *in_stack_00000078;
  
  do {
    uVar4 = *(uint *)(*unaff_R14 + param_2 * 8);
    iVar7 = (int)unaff_RBP;
    if ((uVar4 & 0xffffff) != 0xffffff) {
      lVar8 = (uint64_t)(uVar4 & 0xffffff) + unaff_R14[4];
      iVar2 = func_0x00018076b690(lVar8);
      if (iVar7 != 0) {
        puVar9 = (int8_t *)((iVar2 + -1) + lVar8);
        iVar10 = iVar2;
        while (0 < iVar10) {
          iVar3 = iVar10;
          if ((int)(iVar7 - unaff_EBX) <= iVar10) {
            iVar3 = iVar7 - unaff_EBX;
          }
          iVar10 = iVar10 - iVar3;
          if (iVar3 != 0) {
            puVar5 = unaff_RSI + (int)unaff_EBX;
            unaff_EBX = unaff_EBX + iVar3;
            do {
              uVar1 = *puVar9;
              puVar9 = puVar9 + -1;
              *puVar5 = uVar1;
              puVar5 = puVar5 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          unaff_EBX = unaff_EBX & (int)(unaff_EBX - iVar7) >> 0x1f;
        }
      }
      unaff_R15D = unaff_R15D + iVar2;
    }
    uVar4 = (uint)*(uint3 *)((param_2 & 0xffffffff) * 3 + unaff_R14[8]);
    param_2 = (uint64_t)uVar4;
  } while (uVar4 != 0xffffff);
  if (iVar7 != 0) {
    if (unaff_R15D < iVar7) {
      puVar5 = unaff_RSI + unaff_R15D;
      puVar9 = puVar5 + -1;
      if (unaff_RSI < puVar9) {
        do {
          uVar1 = *unaff_RSI;
          *unaff_RSI = *puVar9;
          unaff_RSI = unaff_RSI + 1;
          *puVar9 = uVar1;
          puVar9 = puVar9 + -1;
        } while (unaff_RSI < puVar9);
      }
      *puVar5 = (char)unaff_R13D;
    }
    else {
      puVar6 = unaff_RSI + (int)unaff_EBX;
      puVar9 = puVar6 + -1;
      puVar5 = unaff_RSI;
      if (unaff_RSI < puVar9) {
        do {
          uVar1 = *puVar5;
          *puVar5 = *puVar9;
          puVar5 = puVar5 + 1;
          *puVar9 = uVar1;
          puVar9 = puVar9 + -1;
        } while (puVar5 < puVar9);
      }
      puVar9 = puVar6 + (int64_t)(int)(iVar7 - unaff_EBX) + -1;
      if (puVar6 < puVar9) {
        do {
          uVar1 = *puVar6;
          *puVar6 = *puVar9;
          puVar6 = puVar6 + 1;
          *puVar9 = uVar1;
          puVar9 = puVar9 + -1;
        } while (puVar6 < puVar9);
      }
      unaff_RSI[unaff_RBP + -1] = (char)unaff_R13D;
      unaff_R13D = 0x41;
    }
  }
  if (in_stack_00000078 != (int *)0x0) {
    *in_stack_00000078 = unaff_R15D + 1;
  }
  return unaff_R13D;
}



int32_t FUN_180898c86(void)

{
  int8_t uVar1;
  int8_t *puVar2;
  int8_t *puVar3;
  int unaff_EBX;
  int iVar4;
  int64_t unaff_RBP;
  int8_t *unaff_RSI;
  int8_t *puVar5;
  int32_t unaff_R13D;
  int unaff_R15D;
  int *in_stack_00000078;
  
  iVar4 = (int)unaff_RBP;
  if (iVar4 != 0) {
    if (unaff_R15D < iVar4) {
      puVar5 = unaff_RSI + unaff_R15D;
      puVar2 = puVar5 + -1;
      if (unaff_RSI < puVar2) {
        do {
          uVar1 = *unaff_RSI;
          *unaff_RSI = *puVar2;
          unaff_RSI = unaff_RSI + 1;
          *puVar2 = uVar1;
          puVar2 = puVar2 + -1;
        } while (unaff_RSI < puVar2);
      }
      *puVar5 = (char)unaff_R13D;
    }
    else {
      puVar3 = unaff_RSI + unaff_EBX;
      puVar2 = puVar3 + -1;
      puVar5 = unaff_RSI;
      if (unaff_RSI < puVar2) {
        do {
          uVar1 = *puVar5;
          *puVar5 = *puVar2;
          puVar5 = puVar5 + 1;
          *puVar2 = uVar1;
          puVar2 = puVar2 + -1;
        } while (puVar5 < puVar2);
      }
      puVar2 = puVar3 + (int64_t)(iVar4 - unaff_EBX) + -1;
      if (puVar3 < puVar2) {
        do {
          uVar1 = *puVar3;
          *puVar3 = *puVar2;
          puVar3 = puVar3 + 1;
          *puVar2 = uVar1;
          puVar2 = puVar2 + -1;
        } while (puVar3 < puVar2);
      }
      unaff_RSI[unaff_RBP + -1] = (char)unaff_R13D;
      unaff_R13D = 0x41;
    }
  }
  if (in_stack_00000078 != (int *)0x0) {
    *in_stack_00000078 = unaff_R15D + 1;
  }
  return unaff_R13D;
}



int32_t FUN_180898d31(uint64_t param_1,int *param_2)

{
  int32_t unaff_R13D;
  int unaff_R15D;
  
  *param_2 = unaff_R15D + 1;
  return unaff_R13D;
}



uint64_t FUN_180898d4d(void)

{
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180898d60(int64_t *param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  int16_t *puVar3;
  int64_t lVar4;
  int16_t *puVar5;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (int16_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 3 - 1U < 0x3fffffff) {
      puVar3 = (int16_t *)
               FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 3,&unknown_var_8432_ptr,0xf4
                             ,0,0,1);
      if (puVar3 != (int16_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (int64_t)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(int16_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
            *(int8_t *)(puVar5 + 1) =
                 *(int8_t *)((lVar2 - (int64_t)puVar3) + 2 + (int64_t)puVar5);
            puVar5 = (int16_t *)((int64_t)puVar5 + 3);
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_180898e0b;
      }
    }
    return 0x26;
  }
LAB_180898e0b:
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180898d84(uint64_t param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  int16_t *puVar3;
  int64_t lVar4;
  int16_t *puVar5;
  int64_t *unaff_RBX;
  int unaff_EDI;
  
  puVar3 = (int16_t *)0x0;
  if (unaff_EDI == 0) {
LAB_180898e0b:
    if ((0 < *(int *)((int64_t)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (int64_t)puVar3;
    *(int *)((int64_t)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 3 - 1U < 0x3fffffff) {
    puVar3 = (int16_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 3,&unknown_var_8432_ptr,0xf4,0
                          );
    if (puVar3 != (int16_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (int64_t)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(int16_t *)((lVar2 - (int64_t)puVar3) + (int64_t)puVar5);
          *(int8_t *)(puVar5 + 1) =
               *(int8_t *)((lVar2 - (int64_t)puVar3) + 2 + (int64_t)puVar5);
          puVar5 = (int16_t *)((int64_t)puVar5 + 3);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_180898e0b;
    }
  }
  return 0x26;
}



uint64_t FUN_180898e56(void)

{
  return 0x26;
}



uint64_t FUN_180898e70(int64_t *param_1,int32_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_8 [8];
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_8[0] = *param_2;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),auStackX_8,4);
  return uVar1;
}



uint64_t FUN_180898eb0(int64_t *param_1,int32_t *param_2)

{
  uint64_t uVar1;
  int32_t auStackX_8 [8];
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_8[0] = *param_2;
  uVar1 = (**(code **)**(uint64_t **)(*param_1 + 8))(*(uint64_t **)(*param_1 + 8),auStackX_8,4);
  return uVar1;
}



uint64_t FUN_180898ef0(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = *param_1;
  uVar2 = FUN_1808995c0(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1808995c0(uVar1,param_2 + 4);
  }
  return uVar2;
}



uint64_t FUN_180898f40(int64_t *param_1,int32_t *param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int32_t auStackX_8 [2];
  int32_t auStackX_18 [4];
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_8[0] = *param_2;
  lVar1 = *param_1;
  puVar2 = *(uint64_t **)(lVar1 + 8);
  uVar3 = (**(code **)*puVar2)(puVar2,auStackX_8,4);
  if ((int)uVar3 == 0) {
    puVar2 = *(uint64_t **)(lVar1 + 8);
    auStackX_18[0] = param_2[1];
    uVar3 = (**(code **)*puVar2)(puVar2,auStackX_18,4);
  }
  return uVar3;
}





// 函数: void FUN_180898fc0(uint64_t param_1,int64_t param_2)
void FUN_180898fc0(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_1808aed00(param_1,param_2,4);
  if (iVar1 == 0) {
    iVar1 = FUN_1808aed00(param_1,param_2 + 4,2);
    if (iVar1 == 0) {
      iVar1 = FUN_1808aed00(param_1,param_2 + 6,2);
      if (iVar1 == 0) {
        iVar1 = FUN_1808aed00(param_1,param_2 + 8,8);
        if (iVar1 == 0) {
          FUN_1808aed00(param_1,param_2 + 0x10,4);
        }
      }
    }
  }
  return;
}





// 函数: void FUN_180899040(uint64_t param_1,int64_t param_2)
void FUN_180899040(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_180899100();
  if (iVar1 == 0) {
    iVar1 = FUN_180899100(param_1,param_2 + 0xc);
    if (iVar1 == 0) {
      iVar1 = FUN_180899100(param_1,param_2 + 0x18);
      if (iVar1 == 0) {
        FUN_180899100(param_1,param_2 + 0x24);
      }
    }
  }
  return;
}





// 函数: void FUN_180899090(uint64_t param_1,int64_t param_2)
void FUN_180899090(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_1808aed00(param_1,param_2,4);
  if (iVar1 == 0) {
    iVar1 = FUN_1808aed00(param_1,param_2 + 4,2);
    if (iVar1 == 0) {
      iVar1 = FUN_1808aed00(param_1,param_2 + 6,2);
      if (iVar1 == 0) {
        FUN_1808aed00(param_1,param_2 + 8,8);
      }
    }
  }
  return;
}





// 函数: void FUN_180899100(int64_t param_1,int32_t *param_2)
void FUN_180899100(int64_t param_1,int32_t *param_2)

{
  int iVar1;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [2];
  int32_t auStackX_18 [2];
  
  auStackX_8[0] = *param_2;
  iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),auStackX_8,4);
  if (iVar1 == 0) {
    auStackX_10[0] = param_2[1];
    iVar1 = (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),auStackX_10,4)
    ;
    if (iVar1 == 0) {
      auStackX_18[0] = param_2[2];
      (**(code **)**(uint64_t **)(param_1 + 8))(*(uint64_t **)(param_1 + 8),auStackX_18,4);
    }
  }
  return;
}



uint64_t FUN_180899180(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = *param_1;
  uVar2 = FUN_1808aed00(uVar1,param_2,4);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1808aed00(uVar1,param_2 + 4,2);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_1808aed00(uVar1,param_2 + 6,2);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_1808aed00(uVar1,param_2 + 8,8);
        if ((int)uVar2 == 0) {
          uVar2 = FUN_1808995c0(uVar1,param_2 + 0x10);
          if ((int)uVar2 == 0) {
            uVar2 = FUN_1808995c0(uVar1,param_2 + 0x14);
          }
        }
      }
    }
  }
  return uVar2;
}



uint64_t FUN_180899220(int64_t *param_1,uint *param_2)

{
  uint64_t uVar1;
  uint auStackX_8 [2];
  uint auStackX_18 [4];
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  param_1 = (int64_t *)*param_1;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      auStackX_8[0] = 0;
      uVar1 = func_0x00018076a7d0(*param_1,auStackX_8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((uint64_t)param_1[2] < (uint64_t)auStackX_8[0] + 4) {
        uVar1 = 0x11;
        goto LAB_1808992a5;
      }
    }
    uVar1 = FUN_180769ed0(*param_1,auStackX_18,1,4,0);
  }
LAB_1808992a5:
  if ((int)uVar1 == 0) {
    *param_2 = auStackX_18[0];
    if (2 < auStackX_18[0]) {
      return 0xd;
    }
    uVar1 = FUN_1808aed00(param_1,param_2 + 1,4);
  }
  return uVar1;
}



uint64_t FUN_18089923e(int64_t *param_1)

{
  uint64_t uVar1;
  uint *unaff_RDI;
  uint in_stack_00000040;
  uint in_stack_00000050;
  
  param_1 = (int64_t *)*param_1;
  if (*param_1 == 0) {
    uVar1 = 0x1c;
  }
  else {
    if (param_1[2] != 0) {
      in_stack_00000040 = 0;
      uVar1 = func_0x00018076a7d0(*param_1,&stack0x00000040);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((uint64_t)param_1[2] < (uint64_t)in_stack_00000040 + 4) {
        uVar1 = 0x11;
        goto LAB_1808992a5;
      }
    }
    uVar1 = FUN_180769ed0(*param_1,&stack0x00000050,1,4,0);
  }
LAB_1808992a5:
  if ((int)uVar1 == 0) {
    *unaff_RDI = in_stack_00000050;
    if (2 < in_stack_00000050) {
      return 0xd;
    }
    uVar1 = FUN_1808aed00(param_1,unaff_RDI + 1,4);
  }
  return uVar1;
}





// 函数: void FUN_1808992c4(void)
void FUN_1808992c4(void)

{
  FUN_1808aed00();
  return;
}



uint64_t FUN_1808992f0(int64_t *param_1,int32_t *param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int32_t auStackX_8 [2];
  int32_t auStackX_18 [4];
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  auStackX_8[0] = *param_2;
  lVar1 = *param_1;
  puVar2 = *(uint64_t **)(lVar1 + 8);
  uVar3 = (**(code **)*puVar2)(puVar2,auStackX_8,4);
  if ((int)uVar3 == 0) {
    auStackX_18[0] = param_2[1];
    puVar2 = *(uint64_t **)(lVar1 + 8);
    uVar3 = (**(code **)*puVar2)(puVar2,auStackX_18,4);
  }
  return uVar3;
}



uint64_t FUN_180899360(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  if (*(int *)(param_1[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = *param_1;
  uVar2 = FUN_1808aed00(uVar1,param_2,4);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1808aed00(uVar1,param_2 + 4,2);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_1808aed00(uVar1,param_2 + 6,2);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_1808aed00(uVar1,param_2 + 8,8);
      }
    }
  }
  return uVar2;
}



uint64_t FUN_1808993e0(uint64_t *param_1,int64_t *param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint *puVar3;
  int aiStackX_8 [2];
  uint auStackX_10 [2];
  
  aiStackX_8[0] = *(int *)(param_1 + 1);
  if (*param_2 == 0) {
    uVar1 = 0x1c;
  }
  else {
    if (param_2[2] != 0) {
      auStackX_10[0] = 0;
      uVar1 = func_0x00018076a7d0(*param_2,auStackX_10);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((uint64_t)param_2[2] < (uint64_t)auStackX_10[0] + 4) {
        uVar1 = 0x11;
        goto LAB_180899456;
      }
    }
    uVar1 = FUN_180769ed0(*param_2,aiStackX_8,1,4,0);
  }
LAB_180899456:
  if ((int)uVar1 == 0) {
    FUN_1808b0fb0(param_1,aiStackX_8[0]);
    puVar3 = (uint *)*param_1;
    while (0 < aiStackX_8[0]) {
      uVar1 = FUN_1808aed00(param_2,puVar3,4);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      switch(*puVar3 & 0xff) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 0x12:
      case 0x30:
        lVar2 = 4;
        aiStackX_8[0] = aiStackX_8[0] + -4;
        break;
      default:
        goto LAB_180899546;
      case 0x10:
        uVar1 = FUN_1808995c0(param_2,puVar3 + 1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 8;
        aiStackX_8[0] = aiStackX_8[0] + -8;
        break;
      case 0x11:
        uVar1 = FUN_180899090(param_2,puVar3 + 1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 0x14;
        aiStackX_8[0] = aiStackX_8[0] + -0x14;
        break;
      case 0x20:
        uVar1 = FUN_1808995c0(param_2,puVar3 + 1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1808995c0(param_2,puVar3 + 2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar2 = 0xc;
        aiStackX_8[0] = aiStackX_8[0] + -0xc;
      }
      puVar3 = (uint *)((int64_t)puVar3 + lVar2);
    }
    if (aiStackX_8[0] != 0) {
LAB_180899546:
      return 0x1c;
    }
    uVar1 = 0;
  }
  return uVar1;
}





