#include "TaleWorlds.Native.Split.h"

// 99_part_11_part033.c - 2 个函数

// 函数: void FUN_1807a0430(longlong param_1,int param_2)
void FUN_1807a0430(longlong param_1,int param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  int *piVar19;
  float fVar20;
  int iStackX_18;
  longlong lStackX_20;
  
  _DAT_180c19954 = 0;
  lVar9 = (longlong)(param_2 >> 2);
  iVar18 = 2;
  iVar13 = param_2 >> 1;
  _DAT_180c1b954 = 1;
  _DAT_180c19950 = 0x3f800000;
  uVar3 = *(int32_t *)(*(longlong *)(param_1 + 0x14038) + 0x4000);
  _DAT_180c1b950 = iVar13;
  *(int32_t *)(&system_data_9950 + lVar9 * 4) = uVar3;
  *(int32_t *)(&system_data_9954 + lVar9 * 4) = uVar3;
  if (2 < lVar9) {
    lVar15 = 2;
    puVar17 = (uint *)(&system_data_9950 + (((longlong)param_2 >> 1) + -2) * 4);
    do {
      fVar20 = (float)iVar18 * (0.125 / (float)(param_2 >> 2));
      uVar6 = (uint)(fVar20 * 32768.0);
      if ((int)uVar6 < 0) {
        uVar6 = -uVar6;
      }
      uVar6 = uVar6 & 0x7fff;
      uVar10 = (ulonglong)uVar6;
      uVar7 = uVar6 >> 0xd;
      if (uVar7 == 0) {
        uVar6 = *(uint *)(*(longlong *)(param_1 + 0x14038) + uVar10 * 4);
      }
      else if (uVar7 == 1) {
        uVar6 = *(uint *)(*(longlong *)(param_1 + 0x14038) + (0x3fff - (ulonglong)uVar6) * 4) ^
                0x80000000;
      }
      else if (uVar7 == 2) {
        uVar6 = *(uint *)(*(longlong *)(param_1 + 0x14038) + -0x10000 + uVar10 * 4) ^ 0x80000000;
      }
      else if (uVar7 == 3) {
        uVar6 = *(uint *)(*(longlong *)(param_1 + 0x14038) + (0x7fff - uVar10) * 4);
      }
      else {
        uVar6 = 0;
      }
      uVar7 = (uint)((fVar20 - 0.25) * 32768.0);
      if ((int)uVar7 < 0) {
        uVar7 = -uVar7;
      }
      uVar7 = uVar7 & 0x7fff;
      uVar10 = (ulonglong)uVar7;
      uVar4 = uVar7 >> 0xd;
      if (uVar4 == 0) {
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x14038) + uVar10 * 4);
      }
      else if (uVar4 == 1) {
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x14038) + (0x3fff - (ulonglong)uVar7) * 4) ^
                0x80000000;
      }
      else if (uVar4 == 2) {
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x14038) + -0x10000 + uVar10 * 4) ^ 0x80000000;
      }
      else if (uVar4 == 3) {
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x14038) + (0x7fff - uVar10) * 4);
      }
      else {
        uVar7 = 0;
      }
      *(uint *)(&system_data_9950 + lVar15 * 4) = uVar6;
      iVar18 = iVar18 + 2;
      *(uint *)(&system_data_9954 + lVar15 * 4) = uVar7;
      lVar15 = lVar15 + 2;
      *puVar17 = uVar7;
      puVar17[1] = uVar6;
      puVar17 = puVar17 + -2;
    } while (lVar15 < lVar9);
  }
  _DAT_180c1b958 = 0;
  iStackX_18 = 1;
  iVar18 = 1;
  iVar12 = iVar18;
  if (8 < iVar13) {
    do {
      iVar13 = iVar13 >> 1;
      lVar9 = 0;
      if (0 < iVar12) {
        do {
          lVar15 = lVar9 * 4;
          lVar9 = lVar9 + 1;
          *(int *)(&system_data_b958 + lVar15 + (longlong)iVar12 * 4) =
               *(int *)(&system_data_b958 + lVar15) + iVar13;
        } while (lVar9 < iVar12);
      }
      iVar18 = iVar12 * 2;
      iVar5 = iVar12 << 4;
      iVar12 = iVar18;
    } while (iVar5 < iVar13);
  }
  iVar12 = iVar18 * 2;
  lStackX_20 = (longlong)iVar18;
  if (iVar18 * 8 == iVar13) {
    uVar6 = 0;
    if (0 < iVar18) {
      iVar13 = 0;
      piVar19 = (int *)&system_data_b958;
      do {
        if (0 < (int)uVar6) {
          uVar10 = (ulonglong)uVar6;
          iVar5 = 0;
          piVar11 = (int *)&system_data_b958;
          do {
            iVar16 = *piVar11;
            piVar11 = piVar11 + 1;
            lVar9 = (longlong)(iVar16 + iVar13);
            iVar14 = *piVar19 + iVar5;
            lVar15 = (longlong)iVar14;
            iVar16 = iVar16 + iVar13 + iVar18 * 4;
            iVar5 = iVar5 + 2;
            uVar3 = *(int32_t *)(&system_data_9954 + lVar9 * 4);
            uVar1 = *(int32_t *)(&system_data_9950 + lVar15 * 4);
            uVar2 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
            *(int32_t *)(&system_data_9950 + lVar15 * 4) =
                 *(int32_t *)(&system_data_9950 + lVar9 * 4);
            *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar3;
            *(int32_t *)(&system_data_9950 + lVar9 * 4) = uVar1;
            *(int32_t *)(&system_data_9954 + lVar9 * 4) = uVar2;
            lVar9 = (longlong)iVar16;
            iVar16 = iVar16 + iVar18 * -2;
            lVar15 = (longlong)(iVar14 + iVar12);
            iVar14 = iVar14 + iVar18 * 4;
            uVar3 = *(int32_t *)(&system_data_9954 + lVar9 * 4);
            uVar1 = *(int32_t *)(&system_data_9950 + lVar15 * 4);
            uVar2 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
            *(int32_t *)(&system_data_9950 + lVar15 * 4) =
                 *(int32_t *)(&system_data_9950 + lVar9 * 4);
            *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar3;
            *(int32_t *)(&system_data_9950 + lVar9 * 4) = uVar1;
            *(int32_t *)(&system_data_9954 + lVar9 * 4) = uVar2;
            lVar9 = (longlong)iVar16;
            lVar15 = (longlong)iVar14;
            uVar3 = *(int32_t *)(&system_data_9954 + lVar9 * 4);
            uVar1 = *(int32_t *)(&system_data_9950 + lVar15 * 4);
            uVar2 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
            *(int32_t *)(&system_data_9950 + lVar15 * 4) =
                 *(int32_t *)(&system_data_9950 + lVar9 * 4);
            *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar3;
            *(int32_t *)(&system_data_9950 + lVar9 * 4) = uVar1;
            *(int32_t *)(&system_data_9954 + lVar9 * 4) = uVar2;
            lVar15 = (longlong)(iVar14 + iVar12);
            lVar9 = (longlong)(iVar18 * 4 + iVar16);
            uVar3 = *(int32_t *)(&system_data_9950 + lVar15 * 4);
            uVar1 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
            uVar2 = *(int32_t *)(&system_data_9950 + lVar9 * 4);
            *(int32_t *)(&system_data_9954 + lVar15 * 4) =
                 *(int32_t *)(&system_data_9954 + lVar9 * 4);
            *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar2;
            *(int32_t *)(&system_data_9950 + lVar9 * 4) = uVar3;
            *(int32_t *)(&system_data_9954 + lVar9 * 4) = uVar1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        iVar5 = *piVar19;
        uVar6 = uVar6 + 1;
        piVar19 = piVar19 + 1;
        iVar5 = iVar5 + iVar13 + iVar12;
        iVar13 = iVar13 + 2;
        lVar15 = (longlong)iVar5;
        lStackX_20 = lStackX_20 + -1;
        lVar9 = (longlong)(iVar5 + iVar12);
        uVar3 = *(int32_t *)(&system_data_9950 + lVar15 * 4);
        uVar1 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
        uVar2 = *(int32_t *)(&system_data_9950 + lVar9 * 4);
        *(int32_t *)(&system_data_9954 + lVar15 * 4) = *(int32_t *)(&system_data_9954 + lVar9 * 4);
        *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar2;
        *(int32_t *)(&system_data_9950 + lVar9 * 4) = uVar3;
        *(int32_t *)(&system_data_9954 + lVar9 * 4) = uVar1;
      } while (lStackX_20 != 0);
    }
  }
  else if (1 < lStackX_20) {
    lStackX_20 = lStackX_20 + -1;
    iVar13 = 2;
    piVar19 = (int *)0x180c1b95c;
    do {
      iVar18 = 0;
      lVar9 = 0;
      if (3 < iStackX_18) {
        iVar5 = 0;
        uVar6 = (iStackX_18 - 4U >> 2) + 1;
        uVar10 = (ulonglong)uVar6;
        iVar18 = uVar6 * 4;
        do {
          iVar14 = *piVar19;
          iVar16 = *(int *)(&system_data_b958 + lVar9 * 4);
          lVar8 = (longlong)(iVar14 + iVar5);
          lVar15 = (longlong)(iVar16 + iVar13);
          uVar3 = *(int32_t *)(&system_data_9950 + lVar8 * 4);
          uVar1 = *(int32_t *)(&system_data_9954 + lVar8 * 4);
          uVar2 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
          *(int32_t *)(&system_data_9950 + lVar8 * 4) = *(int32_t *)(&system_data_9950 + lVar15 * 4)
          ;
          *(int32_t *)(&system_data_9954 + lVar8 * 4) = uVar2;
          *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar3;
          *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar1;
          lVar8 = (longlong)(iVar14 + iVar5 + iVar12);
          lVar15 = (longlong)(iVar16 + iVar13 + iVar12);
          uVar3 = *(int32_t *)(&system_data_9950 + lVar8 * 4);
          uVar1 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
          uVar2 = *(int32_t *)(&system_data_9954 + lVar8 * 4);
          *(int32_t *)(&system_data_9950 + lVar8 * 4) = *(int32_t *)(&system_data_9950 + lVar15 * 4)
          ;
          *(int32_t *)(&system_data_9954 + lVar8 * 4) = uVar1;
          *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar3;
          *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar2;
          iVar14 = *piVar19;
          lVar8 = (longlong)(iVar14 + iVar5);
          iVar16 = *(int *)(lVar9 * 4 + 0x180c1b95c) + iVar13;
          lVar15 = (longlong)iVar16;
          uVar3 = *(int32_t *)(&system_data_9958 + lVar8 * 4);
          uVar1 = *(int32_t *)(lVar8 * 4 + 0x180c1995c);
          uVar2 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
          *(int32_t *)(&system_data_9958 + lVar8 * 4) = *(int32_t *)(&system_data_9950 + lVar15 * 4)
          ;
          *(int32_t *)(lVar8 * 4 + 0x180c1995c) = uVar2;
          *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar3;
          *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar1;
          lVar8 = (longlong)(iVar14 + iVar5 + iVar12);
          lVar15 = (longlong)(iVar16 + iVar12);
          uVar3 = *(int32_t *)(&system_data_9958 + lVar8 * 4);
          uVar1 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
          uVar2 = *(int32_t *)(lVar8 * 4 + 0x180c1995c);
          *(int32_t *)(&system_data_9958 + lVar8 * 4) = *(int32_t *)(&system_data_9950 + lVar15 * 4)
          ;
          *(int32_t *)(lVar8 * 4 + 0x180c1995c) = uVar1;
          *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar3;
          *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar2;
          iVar14 = *piVar19 + iVar5 + 6;
          lVar8 = (longlong)iVar14;
          iVar16 = *(int *)(lVar9 * 4 + 0x180c1b960) + iVar13;
          lVar15 = (longlong)iVar16;
          uVar3 = *(int32_t *)(lVar8 * 4 + 0x180c19948);
          uVar1 = *(int32_t *)(lVar8 * 4 + 0x180c1994c);
          uVar2 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
          *(int32_t *)(lVar8 * 4 + 0x180c19948) = *(int32_t *)(&system_data_9950 + lVar15 * 4);
          *(int32_t *)(lVar8 * 4 + 0x180c1994c) = uVar2;
          *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar3;
          *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar1;
          lVar8 = (longlong)(iVar12 + iVar14);
          lVar15 = (longlong)(iVar16 + iVar12);
          uVar3 = *(int32_t *)(lVar8 * 4 + 0x180c19948);
          uVar1 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
          uVar2 = *(int32_t *)(lVar8 * 4 + 0x180c1994c);
          *(int32_t *)(lVar8 * 4 + 0x180c19948) = *(int32_t *)(&system_data_9950 + lVar15 * 4);
          *(int32_t *)(lVar8 * 4 + 0x180c1994c) = uVar1;
          *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar3;
          *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar2;
          iVar14 = *piVar19 + iVar5 + 6;
          iVar5 = iVar5 + 8;
          lVar8 = (longlong)iVar14;
          iVar16 = *(int *)(lVar9 * 4 + 0x180c1b964) + iVar13;
          lVar15 = (longlong)iVar16;
          iVar14 = iVar14 + iVar12;
          iVar16 = iVar16 + iVar12;
          lVar9 = lVar9 + 4;
          uVar3 = *(int32_t *)(&system_data_9950 + lVar8 * 4);
          uVar1 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
          uVar2 = *(int32_t *)(&system_data_9954 + lVar8 * 4);
          *(int32_t *)(&system_data_9950 + lVar8 * 4) = *(int32_t *)(&system_data_9950 + lVar15 * 4)
          ;
          *(int32_t *)(&system_data_9954 + lVar8 * 4) = uVar1;
          *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar3;
          *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar2;
          uVar3 = *(int32_t *)(&system_data_9950 + (longlong)iVar14 * 4);
          uVar1 = *(int32_t *)(&system_data_9954 + (longlong)iVar14 * 4);
          uVar2 = *(int32_t *)(&system_data_9954 + (longlong)iVar16 * 4);
          *(int32_t *)(&system_data_9950 + (longlong)iVar14 * 4) =
               *(int32_t *)(&system_data_9950 + (longlong)iVar16 * 4);
          *(int32_t *)(&system_data_9954 + (longlong)iVar14 * 4) = uVar2;
          *(int32_t *)(&system_data_9950 + (longlong)iVar16 * 4) = uVar3;
          *(int32_t *)(&system_data_9954 + (longlong)iVar16 * 4) = uVar1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (iVar18 < iStackX_18) {
        piVar11 = (int *)(&system_data_b958 + lVar9 * 4);
        iVar5 = iVar18 * 2;
        uVar10 = (ulonglong)(uint)(iStackX_18 - iVar18);
        do {
          iVar18 = *piVar11;
          piVar11 = piVar11 + 1;
          lVar9 = (longlong)(iVar18 + iVar13);
          iVar14 = *piVar19 + iVar5;
          lVar15 = (longlong)iVar14;
          iVar5 = iVar5 + 2;
          uVar3 = *(int32_t *)(&system_data_9954 + lVar9 * 4);
          uVar1 = *(int32_t *)(&system_data_9950 + lVar15 * 4);
          uVar2 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
          *(int32_t *)(&system_data_9950 + lVar15 * 4) = *(int32_t *)(&system_data_9950 + lVar9 * 4)
          ;
          *(int32_t *)(&system_data_9954 + lVar15 * 4) = uVar3;
          *(int32_t *)(&system_data_9950 + lVar9 * 4) = uVar1;
          *(int32_t *)(&system_data_9954 + lVar9 * 4) = uVar2;
          lVar15 = (longlong)(iVar14 + iVar12);
          lVar9 = (longlong)(iVar18 + iVar13 + iVar12);
          uVar3 = *(int32_t *)(&system_data_9950 + lVar15 * 4);
          uVar1 = *(int32_t *)(&system_data_9954 + lVar15 * 4);
          uVar2 = *(int32_t *)(&system_data_9950 + lVar9 * 4);
          *(int32_t *)(&system_data_9954 + lVar15 * 4) = *(int32_t *)(&system_data_9954 + lVar9 * 4)
          ;
          *(int32_t *)(&system_data_9950 + lVar15 * 4) = uVar2;
          *(int32_t *)(&system_data_9950 + lVar9 * 4) = uVar3;
          *(int32_t *)(&system_data_9954 + lVar9 * 4) = uVar1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      iStackX_18 = iStackX_18 + 1;
      iVar13 = iVar13 + 2;
      piVar19 = piVar19 + 1;
      lStackX_20 = lStackX_20 + -1;
    } while (lStackX_20 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807a04db(uint64_t param_1,uint64_t param_2,longlong param_3,uint param_4)
void FUN_1807a04db(uint64_t param_1,uint64_t param_2,longlong param_3,uint param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_RBX;
  ulonglong uVar10;
  int *piVar11;
  longlong unaff_RSI;
  int iVar12;
  int iVar13;
  int unaff_EDI;
  int iVar14;
  longlong lVar15;
  longlong in_R9;
  int iVar16;
  longlong in_R10;
  uint *puVar17;
  int in_R11D;
  int *piVar18;
  int iVar19;
  float in_XMM4_Da;
  float in_XMM5_Da;
  int iStack0000000000000050;
  longlong lStack0000000000000058;
  
  puVar17 = (uint *)(unaff_RSI + in_R10 * 4);
  do {
    uVar6 = (uint)((float)in_R11D * in_XMM5_Da * in_XMM4_Da);
    if ((int)uVar6 < 0) {
      uVar6 = -uVar6;
    }
    uVar6 = uVar6 & 0x7fff;
    uVar10 = (ulonglong)uVar6;
    uVar7 = uVar6 >> 0xd;
    if (uVar7 == 0) {
      uVar6 = *(uint *)(*(longlong *)(in_R9 + 0x14038) + uVar10 * 4);
    }
    else if (uVar7 == 1) {
      uVar6 = *(uint *)(*(longlong *)(in_R9 + 0x14038) + (0x3fff - (ulonglong)uVar6) * 4) ^ param_4;
    }
    else if (uVar7 == 2) {
      uVar6 = *(uint *)(*(longlong *)(in_R9 + 0x14038) + -0x10000 + uVar10 * 4) ^ param_4;
    }
    else if (uVar7 == 3) {
      uVar6 = *(uint *)(*(longlong *)(in_R9 + 0x14038) + (0x7fff - uVar10) * 4);
    }
    else {
      uVar6 = 0;
    }
    uVar7 = (uint)(((float)in_R11D * in_XMM5_Da - 0.25) * in_XMM4_Da);
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
    }
    uVar7 = uVar7 & 0x7fff;
    uVar10 = (ulonglong)uVar7;
    uVar4 = uVar7 >> 0xd;
    if (uVar4 == 0) {
      uVar7 = *(uint *)(*(longlong *)(in_R9 + 0x14038) + uVar10 * 4);
    }
    else if (uVar4 == 1) {
      uVar7 = *(uint *)(*(longlong *)(in_R9 + 0x14038) + (0x3fff - (ulonglong)uVar7) * 4) ^ param_4;
    }
    else if (uVar4 == 2) {
      uVar7 = *(uint *)(*(longlong *)(in_R9 + 0x14038) + -0x10000 + uVar10 * 4) ^ param_4;
    }
    else if (uVar4 == 3) {
      uVar7 = *(uint *)(*(longlong *)(in_R9 + 0x14038) + (0x7fff - uVar10) * 4);
    }
    else {
      uVar7 = 0;
    }
    *(uint *)(unaff_RSI + param_3 * 4) = uVar6;
    in_R11D = in_R11D + 2;
    *(uint *)(unaff_RSI + 4 + param_3 * 4) = uVar7;
    param_3 = param_3 + 2;
    *puVar17 = uVar7;
    puVar17[1] = uVar6;
    puVar17 = puVar17 + -2;
  } while (param_3 < unaff_RBX);
  _DAT_180c1b958 = 0;
  iStack0000000000000050 = 1;
  iVar19 = 1;
  iVar12 = iVar19;
  if (8 < unaff_EDI) {
    do {
      unaff_EDI = unaff_EDI >> 1;
      lVar15 = 0;
      if (0 < iVar12) {
        do {
          lVar8 = lVar15 * 4;
          lVar15 = lVar15 + 1;
          *(int *)(&system_data_b958 + lVar8 + (longlong)iVar12 * 4) =
               *(int *)(&system_data_b958 + lVar8) + unaff_EDI;
        } while (lVar15 < iVar12);
      }
      iVar19 = iVar12 * 2;
      iVar5 = iVar12 << 4;
      iVar12 = iVar19;
    } while (iVar5 < unaff_EDI);
  }
  iVar12 = iVar19 * 2;
  lStack0000000000000058 = (longlong)iVar19;
  if (iVar19 * 8 == unaff_EDI) {
    uVar6 = 0;
    if (0 < iVar19) {
      iVar5 = 0;
      piVar18 = (int *)&system_data_b958;
      do {
        if (0 < (int)uVar6) {
          uVar10 = (ulonglong)uVar6;
          iVar13 = 0;
          piVar11 = (int *)&system_data_b958;
          do {
            iVar16 = *piVar11;
            piVar11 = piVar11 + 1;
            lVar15 = (longlong)(iVar16 + iVar5);
            iVar14 = *piVar18 + iVar13;
            lVar8 = (longlong)iVar14;
            iVar16 = iVar16 + iVar5 + iVar19 * 4;
            iVar13 = iVar13 + 2;
            uVar1 = *(int32_t *)(unaff_RSI + 4 + lVar15 * 4);
            uVar2 = *(int32_t *)(unaff_RSI + lVar8 * 4);
            uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
            *(int32_t *)(unaff_RSI + lVar8 * 4) = *(int32_t *)(unaff_RSI + lVar15 * 4);
            *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar1;
            *(int32_t *)(unaff_RSI + lVar15 * 4) = uVar2;
            *(int32_t *)(unaff_RSI + 4 + lVar15 * 4) = uVar3;
            lVar15 = (longlong)iVar16;
            iVar16 = iVar16 + iVar19 * -2;
            lVar8 = (longlong)(iVar14 + iVar12);
            iVar14 = iVar14 + iVar19 * 4;
            uVar1 = *(int32_t *)(unaff_RSI + 4 + lVar15 * 4);
            uVar2 = *(int32_t *)(unaff_RSI + lVar8 * 4);
            uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
            *(int32_t *)(unaff_RSI + lVar8 * 4) = *(int32_t *)(unaff_RSI + lVar15 * 4);
            *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar1;
            *(int32_t *)(unaff_RSI + lVar15 * 4) = uVar2;
            *(int32_t *)(unaff_RSI + 4 + lVar15 * 4) = uVar3;
            lVar15 = (longlong)iVar16;
            lVar8 = (longlong)iVar14;
            uVar1 = *(int32_t *)(unaff_RSI + 4 + lVar15 * 4);
            uVar2 = *(int32_t *)(unaff_RSI + lVar8 * 4);
            uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
            *(int32_t *)(unaff_RSI + lVar8 * 4) = *(int32_t *)(unaff_RSI + lVar15 * 4);
            *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar1;
            *(int32_t *)(unaff_RSI + lVar15 * 4) = uVar2;
            *(int32_t *)(unaff_RSI + 4 + lVar15 * 4) = uVar3;
            lVar8 = (longlong)(iVar14 + iVar12);
            lVar15 = (longlong)(iVar19 * 4 + iVar16);
            uVar1 = *(int32_t *)(unaff_RSI + lVar8 * 4);
            uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
            uVar3 = *(int32_t *)(unaff_RSI + lVar15 * 4);
            *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = *(int32_t *)(unaff_RSI + 4 + lVar15 * 4)
            ;
            *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar3;
            *(int32_t *)(unaff_RSI + lVar15 * 4) = uVar1;
            *(int32_t *)(unaff_RSI + 4 + lVar15 * 4) = uVar2;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        iVar13 = *piVar18;
        uVar6 = uVar6 + 1;
        piVar18 = piVar18 + 1;
        iVar13 = iVar13 + iVar5 + iVar12;
        iVar5 = iVar5 + 2;
        lVar8 = (longlong)iVar13;
        lStack0000000000000058 = lStack0000000000000058 + -1;
        lVar15 = (longlong)(iVar13 + iVar12);
        uVar1 = *(int32_t *)(unaff_RSI + lVar8 * 4);
        uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
        uVar3 = *(int32_t *)(unaff_RSI + lVar15 * 4);
        *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = *(int32_t *)(unaff_RSI + 4 + lVar15 * 4);
        *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar3;
        *(int32_t *)(unaff_RSI + lVar15 * 4) = uVar1;
        *(int32_t *)(unaff_RSI + 4 + lVar15 * 4) = uVar2;
      } while (lStack0000000000000058 != 0);
    }
  }
  else if (1 < lStack0000000000000058) {
    lStack0000000000000058 = lStack0000000000000058 + -1;
    iVar19 = 2;
    piVar18 = (int *)0x180c1b95c;
    do {
      iVar5 = 0;
      lVar15 = 0;
      if (3 < iStack0000000000000050) {
        iVar13 = 0;
        uVar6 = (iStack0000000000000050 - 4U >> 2) + 1;
        uVar10 = (ulonglong)uVar6;
        iVar5 = uVar6 * 4;
        do {
          iVar14 = *piVar18;
          iVar16 = *(int *)(&system_data_b958 + lVar15 * 4);
          lVar9 = (longlong)(iVar14 + iVar13);
          lVar8 = (longlong)(iVar16 + iVar19);
          uVar1 = *(int32_t *)(unaff_RSI + lVar9 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar9 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
          *(int32_t *)(unaff_RSI + lVar9 * 4) = *(int32_t *)(unaff_RSI + lVar8 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar9 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar2;
          lVar9 = (longlong)(iVar14 + iVar13 + iVar12);
          lVar8 = (longlong)(iVar16 + iVar19 + iVar12);
          uVar1 = *(int32_t *)(unaff_RSI + lVar9 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar9 * 4);
          *(int32_t *)(unaff_RSI + lVar9 * 4) = *(int32_t *)(unaff_RSI + lVar8 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar9 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar3;
          iVar14 = *piVar18;
          lVar9 = (longlong)(iVar14 + iVar13);
          iVar16 = *(int *)(lVar15 * 4 + 0x180c1b95c) + iVar19;
          lVar8 = (longlong)iVar16;
          uVar1 = *(int32_t *)(unaff_RSI + 8 + lVar9 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 0xc + lVar9 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
          *(int32_t *)(unaff_RSI + 8 + lVar9 * 4) = *(int32_t *)(unaff_RSI + lVar8 * 4);
          *(int32_t *)(unaff_RSI + 0xc + lVar9 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar2;
          lVar9 = (longlong)(iVar14 + iVar13 + iVar12);
          lVar8 = (longlong)(iVar16 + iVar12);
          uVar1 = *(int32_t *)(unaff_RSI + 8 + lVar9 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 0xc + lVar9 * 4);
          *(int32_t *)(unaff_RSI + 8 + lVar9 * 4) = *(int32_t *)(unaff_RSI + lVar8 * 4);
          *(int32_t *)(unaff_RSI + 0xc + lVar9 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar3;
          iVar14 = *piVar18 + iVar13 + 6;
          lVar9 = (longlong)iVar14;
          iVar16 = *(int *)(lVar15 * 4 + 0x180c1b960) + iVar19;
          lVar8 = (longlong)iVar16;
          uVar1 = *(int32_t *)(unaff_RSI + -8 + lVar9 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + -4 + lVar9 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
          *(int32_t *)(unaff_RSI + -8 + lVar9 * 4) = *(int32_t *)(unaff_RSI + lVar8 * 4);
          *(int32_t *)(unaff_RSI + -4 + lVar9 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar2;
          lVar9 = (longlong)(iVar12 + iVar14);
          lVar8 = (longlong)(iVar16 + iVar12);
          uVar1 = *(int32_t *)(unaff_RSI + -8 + lVar9 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + -4 + lVar9 * 4);
          *(int32_t *)(unaff_RSI + -8 + lVar9 * 4) = *(int32_t *)(unaff_RSI + lVar8 * 4);
          *(int32_t *)(unaff_RSI + -4 + lVar9 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar3;
          iVar14 = *piVar18 + iVar13 + 6;
          iVar13 = iVar13 + 8;
          lVar9 = (longlong)iVar14;
          iVar16 = *(int *)(lVar15 * 4 + 0x180c1b964) + iVar19;
          lVar8 = (longlong)iVar16;
          iVar14 = iVar14 + iVar12;
          iVar16 = iVar16 + iVar12;
          lVar15 = lVar15 + 4;
          uVar1 = *(int32_t *)(unaff_RSI + lVar9 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar9 * 4);
          *(int32_t *)(unaff_RSI + lVar9 * 4) = *(int32_t *)(unaff_RSI + lVar8 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar9 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar3;
          uVar1 = *(int32_t *)(unaff_RSI + (longlong)iVar14 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + (longlong)iVar14 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + (longlong)iVar16 * 4);
          *(int32_t *)(unaff_RSI + (longlong)iVar14 * 4) =
               *(int32_t *)(unaff_RSI + (longlong)iVar16 * 4);
          *(int32_t *)(unaff_RSI + 4 + (longlong)iVar14 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + (longlong)iVar16 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + (longlong)iVar16 * 4) = uVar2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (iVar5 < iStack0000000000000050) {
        piVar11 = (int *)(&system_data_b958 + lVar15 * 4);
        iVar13 = iVar5 * 2;
        uVar10 = (ulonglong)(uint)(iStack0000000000000050 - iVar5);
        do {
          iVar5 = *piVar11;
          piVar11 = piVar11 + 1;
          lVar15 = (longlong)(iVar5 + iVar19);
          iVar14 = *piVar18 + iVar13;
          lVar8 = (longlong)iVar14;
          iVar13 = iVar13 + 2;
          uVar1 = *(int32_t *)(unaff_RSI + 4 + lVar15 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + lVar8 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
          *(int32_t *)(unaff_RSI + lVar8 * 4) = *(int32_t *)(unaff_RSI + lVar15 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + lVar15 * 4) = uVar2;
          *(int32_t *)(unaff_RSI + 4 + lVar15 * 4) = uVar3;
          lVar8 = (longlong)(iVar14 + iVar12);
          lVar15 = (longlong)(iVar5 + iVar19 + iVar12);
          uVar1 = *(int32_t *)(unaff_RSI + lVar8 * 4);
          uVar2 = *(int32_t *)(unaff_RSI + 4 + lVar8 * 4);
          uVar3 = *(int32_t *)(unaff_RSI + lVar15 * 4);
          *(int32_t *)(unaff_RSI + 4 + lVar8 * 4) = *(int32_t *)(unaff_RSI + 4 + lVar15 * 4);
          *(int32_t *)(unaff_RSI + lVar8 * 4) = uVar3;
          *(int32_t *)(unaff_RSI + lVar15 * 4) = uVar1;
          *(int32_t *)(unaff_RSI + 4 + lVar15 * 4) = uVar2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      iStack0000000000000050 = iStack0000000000000050 + 1;
      iVar19 = iVar19 + 2;
      piVar18 = piVar18 + 1;
      lStack0000000000000058 = lStack0000000000000058 + -1;
    } while (lStack0000000000000058 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




