#include "TaleWorlds.Native.Split.h"

// 99_part_01_part013.c - 15 个函数

// 函数: void FUN_1800acb60(longlong param_1)
void FUN_1800acb60(longlong param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  longlong lVar7;
  int32_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int8_t auStack_178 [32];
  uint64_t auStack_158 [2];
  uint64_t uStack_148;
  int32_t auStack_140 [7];
  int8_t auStack_124 [68];
  int32_t uStack_e0;
  int8_t uStack_c4;
  int32_t uStack_a0;
  int8_t uStack_84;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  lVar10 = 0;
  uStack_148 = 0;
  uVar1 = func_0x0001800ab2c0(4);
  uVar2 = func_0x0001800ab2c0(1);
  lVar11 = 8;
  puVar8 = auStack_140 + 3;
  lVar9 = 8;
  do {
    puVar8[-3] = 0;
    *puVar8 = 1;
    puVar8[-2] = uVar1;
    puVar8[-1] = uVar2;
    puVar8[3] = 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    *(int8_t *)(puVar8 + 4) = 0xf;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  lVar9 = 8;
  *(uint64_t *)(param_1 + 0x2150) = auStack_158[0];
  puVar8 = auStack_140 + 3;
  uStack_148 = 0;
  do {
    puVar8[-3] = 0;
    *puVar8 = 1;
    puVar8[-2] = uVar1;
    puVar8[-1] = uVar2;
    puVar8[3] = 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    *(int8_t *)(puVar8 + 4) = 0xf;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  *(uint64_t *)(param_1 + 0x2180) = auStack_158[0];
  uStack_148 = 0;
  uVar4 = func_0x0001800ab2c0(5);
  puVar8 = auStack_140 + 3;
  lVar9 = 8;
  do {
    puVar8[-3] = 1;
    *puVar8 = 1;
    puVar8[-2] = uVar1;
    puVar8[-1] = uVar4;
    puVar8[3] = 1;
    puVar8[1] = uVar2;
    puVar8[2] = uVar2;
    *(int8_t *)(puVar8 + 4) = 0xf;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  lVar9 = 8;
  *(uint64_t *)(param_1 + 0x2158) = auStack_158[0];
  puVar8 = auStack_140 + 3;
  uStack_148 = 0;
  do {
    puVar8[-3] = 1;
    *puVar8 = 1;
    puVar8[-2] = uVar1;
    puVar8[-1] = uVar2;
    puVar8[3] = 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    *(int8_t *)(puVar8 + 4) = 0xf;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  *(uint64_t *)(param_1 + 0x2160) = auStack_158[0];
  uStack_148 = 0;
  uVar5 = func_0x0001800ab2c0(2);
  uVar6 = func_0x0001800ab2c0(0);
  puVar8 = auStack_140 + 3;
  lVar9 = 8;
  do {
    puVar8[-3] = 1;
    *puVar8 = 1;
    puVar8[-2] = uVar6;
    puVar8[-1] = uVar5;
    puVar8[3] = 1;
    puVar8[1] = uVar6;
    puVar8[2] = uVar1;
    *(int8_t *)(puVar8 + 4) = 0xf;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  lVar9 = 8;
  *(uint64_t *)(param_1 + 0x2168) = auStack_158[0];
  puVar8 = auStack_140 + 3;
  uStack_148 = 0;
  do {
    puVar8[-3] = 1;
    *puVar8 = 1;
    puVar8[-2] = uVar2;
    puVar8[-1] = uVar2;
    puVar8[3] = 1;
    puVar8[1] = uVar2;
    puVar8[2] = uVar2;
    *(int8_t *)(puVar8 + 4) = 0xf;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  lVar9 = 8;
  *(uint64_t *)(param_1 + 0x2170) = auStack_158[0];
  puVar8 = auStack_140 + 3;
  uStack_148 = 0;
  do {
    puVar8[-3] = 1;
    *puVar8 = 5;
    puVar8[-2] = uVar2;
    puVar8[-1] = uVar2;
    puVar8[3] = 5;
    puVar8[1] = uVar2;
    puVar8[2] = uVar2;
    *(int8_t *)(puVar8 + 4) = 0xf;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  lVar9 = 8;
  *(uint64_t *)(param_1 + 0x2178) = auStack_158[0];
  puVar8 = auStack_140 + 3;
  uStack_148 = 0;
  do {
    puVar8[-3] = 1;
    *puVar8 = 1;
    puVar8[-2] = uVar2;
    puVar8[-1] = uVar1;
    puVar8[3] = 1;
    puVar8[1] = uVar6;
    puVar8[2] = uVar1;
    *(int8_t *)(puVar8 + 4) = 0xf;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  lVar9 = 8;
  *(uint64_t *)(param_1 + 0x2188) = auStack_158[0];
  puVar8 = auStack_140 + 3;
  uStack_148 = 0;
  do {
    puVar8[-3] = 0;
    *puVar8 = 1;
    puVar8[-2] = uVar1;
    puVar8[-1] = uVar2;
    puVar8[3] = 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    *(int8_t *)(puVar8 + 4) = 0;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  lVar9 = 8;
  *(uint64_t *)(param_1 + 0x2190) = auStack_158[0];
  puVar8 = auStack_140 + 3;
  uStack_148 = 0;
  do {
    puVar8[-3] = 1;
    *puVar8 = 1;
    puVar8[-2] = uVar1;
    puVar8[-1] = uVar4;
    puVar8[3] = 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar4;
    *(int8_t *)(puVar8 + 4) = 0;
    puVar8 = puVar8 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  *(uint64_t *)(param_1 + 0x2198) = auStack_158[0];
  uStack_148 = 0x100000000;
  lVar9 = lVar10;
  do {
    lVar7 = lVar9 * 0x20;
    auStack_140[lVar9 * 8] = 1;
    auStack_140[lVar9 * 8 + 3] = 1;
    auStack_140[lVar9 * 8 + 1] = uVar1;
    auStack_140[lVar9 * 8 + 2] = uVar4;
    *(int32_t *)(auStack_124 + lVar7 + -4) = 1;
    *(int32_t *)(auStack_124 + lVar7 + -0xc) = uVar1;
    *(int32_t *)(auStack_124 + lVar7 + -8) = uVar4;
    auStack_124[lVar7] = 7;
    if (lVar9 == 5) {
      uStack_84 = 0;
      uStack_a0 = 0;
    }
    else if (lVar9 == 2) {
      auStack_124[0x40] = 3;
    }
    else if (lVar9 == 3) {
      uStack_c4 = 0;
      uStack_e0 = 0;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 < 8);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  *(uint64_t *)(param_1 + 0x21a0) = auStack_158[0];
  uStack_148 = 0x100000000;
  do {
    lVar9 = lVar10 * 0x20;
    auStack_140[lVar10 * 8] = 1;
    auStack_140[lVar10 * 8 + 3] = 1;
    auStack_140[lVar10 * 8 + 1] = uVar1;
    auStack_140[lVar10 * 8 + 2] = uVar4;
    *(int32_t *)(auStack_124 + lVar9 + -4) = 1;
    *(int32_t *)(auStack_124 + lVar9 + -0xc) = uVar1;
    *(int32_t *)(auStack_124 + lVar9 + -8) = uVar4;
    auStack_124[lVar9] = 7;
    if (lVar10 == 5) {
      uStack_84 = 0xf;
      uStack_a0 = 0;
    }
    else if (lVar10 == 2) {
      auStack_124[0x40] = 3;
    }
    else if (lVar10 == 3) {
      uStack_c4 = 0;
      uStack_e0 = 0;
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 < 8);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  *(uint64_t *)(param_1 + 0x21a8) = auStack_158[0];
  puVar8 = auStack_140 + 3;
  uStack_148 = 0;
  do {
    puVar8[-3] = 0;
    *puVar8 = 1;
    puVar8[-2] = uVar1;
    puVar8[-1] = uVar2;
    puVar8[3] = 1;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    *(int8_t *)(puVar8 + 4) = 7;
    puVar8 = puVar8 + 8;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xa0))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_148,auStack_158);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&unknown_var_6160_ptr);
  }
  *(uint64_t *)(param_1 + 0x21b0) = auStack_158[0];
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ad2a0(longlong param_1)
void FUN_1800ad2a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int8_t auStack_a8 [32];
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  uint64_t *puStack_78;
  longlong lStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  iVar10 = 0;
  puStack_78 = (uint64_t *)(param_1 + 0x1e50);
  lStack_70 = param_1;
  do {
    iVar7 = 0;
    puStack_80 = puStack_78;
    do {
      iVar9 = 0;
      do {
        iVar6 = 0;
        puVar4 = puStack_80;
        do {
          lVar1 = lStack_70;
          iVar3 = 0;
          puStack_88 = puVar4;
          do {
            cVar8 = (char)iVar9;
            if (cVar8 == '\0') {
              uStack_5c = 1;
            }
            else if (cVar8 == '\x01') {
              uStack_5c = 3;
            }
            else if (cVar8 == '\x02') {
              uStack_5c = 2;
            }
            cVar8 = (char)iVar10;
            if (cVar8 == '\0') {
              uStack_60 = 3;
            }
            else if (cVar8 == '\x01') {
              uStack_60 = 2;
            }
            cVar5 = (char)iVar6;
            if (cVar5 == '\0') {
              if (cVar8 == '\x01') {
                uStack_54 = 15000;
                uStack_50 = 0x42c80000;
                uStack_4c = 0;
              }
              else {
                uStack_54 = 0xf;
                uStack_50 = 0x461c4000;
                uStack_4c = 0x40400000;
              }
            }
            else if (cVar5 == '\x01') {
              uStack_54 = 0x1e;
              uStack_50 = 0x461c4000;
              uStack_4c = 0x40c00000;
            }
            else if (cVar5 == '\x02') {
              uStack_54 = 0xfffffff1;
              uStack_50 = 0x461c4000;
              uStack_4c = 0xc0400000;
            }
            else if (cVar5 == '\x03') {
              uStack_54 = 0;
              uStack_50 = 0;
              uStack_4c = 0;
            }
            if ((char)iVar7 == '\0') {
              uStack_44 = 0;
            }
            else if ((char)iVar7 == '\x01') {
              uStack_44 = 1;
            }
            if ((char)iVar3 == '\0') {
              uStack_3c = 0;
            }
            else if ((char)iVar3 == '\x01') {
              uStack_3c = 1;
            }
            uStack_48 = 1;
            uStack_58 = 1;
            uStack_40 = 0;
            iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1d78) + 0xb0))
                              (*(longlong **)(lVar1 + 0x1d78),&uStack_60,&uStack_68);
            if (iVar2 < 0) {
              FUN_180220810(iVar2,&unknown_var_5888_ptr);
            }
            *puVar4 = uStack_68;
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < 2);
          iVar6 = iVar6 + 1;
          puVar4 = puStack_88 + 0xc;
        } while (iVar6 < 4);
        iVar9 = iVar9 + 1;
        puStack_80 = puStack_80 + 2;
      } while (iVar9 < 3);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    iVar10 = iVar10 + 1;
    puStack_78 = puStack_78 + 0x30;
  } while (iVar10 < 2);
  puStack_88 = puVar4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ad510(longlong param_1)
void FUN_1800ad510(longlong param_1)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint auStackX_8 [2];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (*(char *)(param_1 + 0x1d60) == '\0') {
    uVar8 = 0;
    *(uint64_t *)(_DAT_180c86870 + 0x80) = *(uint64_t *)(_DAT_180c86870 + 0x78);
    iVar3 = 0;
    if ((ulonglong)(longlong)*(int *)(_DAT_180c86920 + 0x1f10) <
        (ulonglong)(*(longlong *)(param_1 + 0x121c8) - *(longlong *)(param_1 + 0x121c0) >> 3)) {
      iVar3 = *(int *)(_DAT_180c86920 + 0x1f10);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x121c0) + (longlong)iVar3 * 8);
    iVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,*(int32_t *)(param_1 + 0x1d80),1,auStackX_8,0);
    if (-1 < iVar3) {
      uVar4 = uVar8;
      if ((ulonglong)auStackX_8[0] != 0) {
        uVar4 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)auStackX_8[0] * 0x1c,3);
      }
      (**(code **)(*plVar1 + 0x40))(plVar1,*(int32_t *)(param_1 + 0x1d80),1,auStackX_8,uVar4);
      lVar10 = _DAT_180c86870;
      uVar9 = auStackX_8[0];
      if (auStackX_8[0] != 0) {
        do {
          pfVar2 = *(float **)(lVar10 + 0x80);
          lVar6 = uVar8 * 0x1c;
          fStack_18 = (float)*(uint *)(lVar6 + uVar4);
          fStack_14 = (float)*(uint *)(lVar6 + 4 + uVar4);
          fStack_10 = (float)*(uint *)(lVar6 + 8 + uVar4);
          fStack_c = (float)*(uint *)(lVar6 + 0xc + uVar4);
          pfVar5 = *(float **)(lVar10 + 0x78);
          if (pfVar5 == pfVar2) {
LAB_1800ad67f:
            FUN_1800863a0((uint64_t *)(lVar10 + 0x78),&fStack_18);
            lVar10 = _DAT_180c86870;
            uVar9 = auStackX_8[0];
          }
          else {
            do {
              if (((fStack_18 == *pfVar5) && (fStack_14 == pfVar5[1])) && (fStack_10 == pfVar5[2]))
              break;
              pfVar5 = pfVar5 + 4;
            } while (pfVar5 != pfVar2);
            if (pfVar5 == pfVar2) goto LAB_1800ad67f;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < uVar9);
      }
      if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(uVar4);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ad52d(longlong param_1,longlong param_2)
void FUN_1800ad52d(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong unaff_RSI;
  uint uVar9;
  longlong lVar10;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  uint in_stack_00000050;
  
  uVar8 = 0;
  *(uint64_t *)(param_2 + 0x80) = *(uint64_t *)(param_2 + 0x78);
  iVar3 = 0;
  if ((ulonglong)(longlong)*(int *)(_DAT_180c86920 + 0x1f10) <
      (ulonglong)(*(longlong *)(param_1 + 0x121c8) - *(longlong *)(param_1 + 0x121c0) >> 3)) {
    iVar3 = *(int *)(_DAT_180c86920 + 0x1f10);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x121c0) + (longlong)iVar3 * 8);
  iVar3 = (**(code **)(*plVar1 + 0x40))
                    (plVar1,*(int32_t *)(param_1 + 0x1d80),1,&stack0x00000050,0);
  if (-1 < iVar3) {
    uVar4 = uVar8;
    if ((ulonglong)in_stack_00000050 != 0) {
      uVar4 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)in_stack_00000050 * 0x1c,3);
    }
    (**(code **)(*plVar1 + 0x40))
              (plVar1,*(int32_t *)(unaff_RSI + 0x1d80),1,&stack0x00000050,uVar4);
    lVar10 = _DAT_180c86870;
    uVar9 = in_stack_00000050;
    if (in_stack_00000050 != 0) {
      do {
        pfVar2 = *(float **)(lVar10 + 0x80);
        lVar6 = uVar8 * 0x1c;
        fStack0000000000000030 = (float)*(uint *)(lVar6 + uVar4);
        fStack0000000000000034 = (float)*(uint *)(lVar6 + 4 + uVar4);
        fStack0000000000000038 = (float)*(uint *)(lVar6 + 8 + uVar4);
        fStack000000000000003c = (float)*(uint *)(lVar6 + 0xc + uVar4);
        pfVar5 = *(float **)(lVar10 + 0x78);
        if (pfVar5 == pfVar2) {
LAB_1800ad67f:
          FUN_1800863a0((uint64_t *)(lVar10 + 0x78),&stack0x00000030);
          lVar10 = _DAT_180c86870;
          uVar9 = in_stack_00000050;
        }
        else {
          do {
            if (((fStack0000000000000030 == *pfVar5) && (fStack0000000000000034 == pfVar5[1])) &&
               (fStack0000000000000038 == pfVar5[2])) break;
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 != pfVar2);
          if (pfVar5 == pfVar2) goto LAB_1800ad67f;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar9);
    }
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(uVar4);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ad59f(int32_t param_1)
void FUN_1800ad59f(int32_t param_1)

{
  float *pfVar1;
  longlong in_RAX;
  ulonglong uVar2;
  float *pfVar3;
  longlong lVar4;
  uint unaff_EBX;
  longlong unaff_RSI;
  uint uVar5;
  longlong lVar6;
  longlong *unaff_R14;
  int32_t extraout_XMM0_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  uint in_stack_00000050;
  
  if (in_RAX == 0) {
    uVar2 = (ulonglong)unaff_EBX;
  }
  else {
    uVar2 = FUN_18062b420(_DAT_180c8ed18,in_RAX * 0x1c,3);
    param_1 = extraout_XMM0_Da;
  }
  (**(code **)(*unaff_R14 + 0x40))
            (param_1,*(int32_t *)(unaff_RSI + 0x1d80),1,&stack0x00000050,uVar2);
  lVar6 = _DAT_180c86870;
  uVar5 = in_stack_00000050;
  if (in_stack_00000050 != 0) {
    do {
      pfVar1 = *(float **)(lVar6 + 0x80);
      lVar4 = (ulonglong)unaff_EBX * 0x1c;
      fStack0000000000000030 = (float)*(uint *)(lVar4 + uVar2);
      fStack0000000000000034 = (float)*(uint *)(lVar4 + 4 + uVar2);
      fStack0000000000000038 = (float)*(uint *)(lVar4 + 8 + uVar2);
      fStack000000000000003c = (float)*(uint *)(lVar4 + 0xc + uVar2);
      pfVar3 = *(float **)(lVar6 + 0x78);
      if (pfVar3 == pfVar1) {
LAB_1800ad67f:
        FUN_1800863a0((uint64_t *)(lVar6 + 0x78),&stack0x00000030);
        lVar6 = _DAT_180c86870;
        uVar5 = in_stack_00000050;
      }
      else {
        do {
          if (((fStack0000000000000030 == *pfVar3) && (fStack0000000000000034 == pfVar3[1])) &&
             (fStack0000000000000038 == pfVar3[2])) break;
          pfVar3 = pfVar3 + 4;
        } while (pfVar3 != pfVar1);
        if (pfVar3 == pfVar1) goto LAB_1800ad67f;
      }
      unaff_EBX = unaff_EBX + 1;
    } while (unaff_EBX < uVar5);
  }
  if (uVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(uVar2);
}






// 函数: void FUN_1800ad6b2(void)
void FUN_1800ad6b2(void)

{
  return;
}






// 函数: void FUN_1800ad6bc(void)
void FUN_1800ad6bc(void)

{
  return;
}






// 函数: void FUN_1800ad6f0(ulonglong *param_1)
void FUN_1800ad6f0(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_1[1];
  for (uVar4 = *param_1; uVar4 != uVar5; uVar4 = uVar4 + 0xd0) {
    *(void **)(uVar4 + 0x10) = &unknown_var_720_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800ad760(ulonglong param_1)

{
  longlong lVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,param_1 * 0x18,3);
  iVar3 = 0;
  puVar2 = (uint64_t *)(lVar1 + 8);
  do {
    iVar3 = iVar3 + 1;
    puVar2[-1] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
  } while ((ulonglong)(longlong)iVar3 < param_1);
  return lVar1;
}






// 函数: void FUN_1800ad7c0(longlong *param_1)
void FUN_1800ad7c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_1800adb30(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



uint64_t *
FUN_1800ad820(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_2024_ptr;
  if ((longlong *)param_1[0x1080] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1080] + 0x10))();
    param_1[0x1080] = 0;
  }
  *param_1 = &unknown_var_928_ptr;
  if ((longlong *)param_1[0x1049] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1049] + 0x38))();
  }
  FUN_18029c460(param_1 + 0xfe4);
  if ((param_2 & 1) != 0) {
    free(param_1,0x8c40,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ad8c0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800ad8c0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  longlong lVar6;
  void *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = param_1[1];
  lVar6 = *param_1;
  lVar9 = (lVar8 - lVar6) / 0xd0;
  puVar2 = (uint64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_1800ad94c;
  }
  puVar2 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,lVar9 * 0xd0,(char)param_1[3],param_4,0xfffffffffffffffe);
  lVar8 = param_1[1];
  lVar6 = *param_1;
LAB_1800ad94c:
  puVar4 = puVar2;
  if (lVar6 != lVar8) {
    lVar6 = lVar6 - (longlong)puVar2;
    puVar5 = puVar2 + 4;
    do {
      *puVar4 = *(uint64_t *)(lVar6 + -0x20 + (longlong)puVar5);
      *(int32_t *)(puVar5 + -3) = *(int32_t *)(lVar6 + -0x18 + (longlong)puVar5);
      puVar5[-2] = &unknown_var_720_ptr;
      puVar5[-1] = 0;
      *(int32_t *)puVar5 = 0;
      puVar5[-2] = &unknown_var_3432_ptr;
      puVar5[-1] = puVar5 + 1;
      *(int32_t *)puVar5 = 0;
      *(int8_t *)(puVar5 + 1) = 0;
      *(int32_t *)puVar5 = *(int32_t *)(lVar6 + (longlong)puVar5);
      puVar1 = *(void **)(lVar6 + -8 + (longlong)puVar5);
      puVar7 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar7 = puVar1;
      }
      strcpy_s(puVar5[-1],0x80,puVar7);
      *(int32_t *)(puVar5 + 0x11) = *(int32_t *)(lVar6 + 0x88 + (longlong)puVar5);
      *(int32_t *)((longlong)puVar5 + 0x8c) = *(int32_t *)(lVar6 + 0x8c + (longlong)puVar5);
      puVar5[0x12] = *(uint64_t *)(lVar6 + 0x90 + (longlong)puVar5);
      puVar5[0x13] = *(uint64_t *)(lVar6 + 0x98 + (longlong)puVar5);
      puVar5[0x14] = *(uint64_t *)(lVar6 + 0xa0 + (longlong)puVar5);
      *(int8_t *)(puVar5 + 0x15) = *(int8_t *)(lVar6 + 0xa8 + (longlong)puVar5);
      *(int8_t *)((longlong)puVar5 + 0xa9) = *(int8_t *)(lVar6 + 0xa9 + (longlong)puVar5);
      *(int8_t *)((longlong)puVar5 + 0xaa) = *(int8_t *)(lVar6 + 0xaa + (longlong)puVar5);
      *(int8_t *)((longlong)puVar5 + 0xab) = *(int8_t *)(lVar6 + 0xab + (longlong)puVar5);
      *(int8_t *)((longlong)puVar5 + 0xac) = *(int8_t *)(lVar6 + 0xac + (longlong)puVar5);
      puVar4 = puVar4 + 0x1a;
      lVar3 = (longlong)puVar5 + lVar6 + 0xb0;
      puVar5 = puVar5 + 0x1a;
    } while (lVar3 != lVar8);
  }
  FUN_180047d40(puVar4,param_2);
  lVar8 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar8) {
    do {
      *(void **)(lVar6 + 0x10) = &unknown_var_720_ptr;
      lVar6 = lVar6 + 0xd0;
    } while (lVar6 != lVar8);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (longlong)puVar2;
    param_1[1] = (longlong)(puVar4 + 0x1a);
    param_1[2] = (longlong)(puVar2 + lVar9 * 0x1a);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1800adb30(uint64_t *param_1)
void FUN_1800adb30(uint64_t *param_1)

{
  param_1[0xb] = &unknown_var_3456_ptr;
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  param_1[0xb] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_720_ptr;
  return;
}






// 函数: void FUN_1800adba0(uint64_t *param_1)
void FUN_1800adba0(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)*param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800adc50(longlong *param_1)
void FUN_1800adc50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *aplStackX_8 [2];
  
  if (*(longlong *)(*param_1 + 0x121e0) != 0) {
    FUN_18023b050();
    aplStackX_8[0] = *(longlong **)(*param_1 + 0x121e0);
    *(uint64_t *)(*param_1 + 0x121e0) = 0;
    if (aplStackX_8[0] != (longlong *)0x0) {
      (**(code **)(*aplStackX_8[0] + 0x38))();
    }
  }
  lVar1 = *(longlong *)(*param_1 + 0x1cd8);
  (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x370))();
  (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x378))();
  iVar3 = 0;
  *(int32_t *)(lVar1 + 0x8428) = 0xffffffff;
  *(int32_t *)(lVar1 + 0x8408) = 0;
  *(uint64_t *)(lVar1 + 0x8410) = 0;
  lVar2 = 0x1e08;
  *(uint64_t *)(lVar1 + 0x8418) = 0;
  *(uint64_t *)(lVar1 + 0x8420) = 0;
  *(uint64_t *)(lVar1 + 0x8430) = 0;
  do {
    aplStackX_8[0] = *(longlong **)(lVar2 + _DAT_180c86938);
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0xd0))
              (*(longlong **)(lVar1 + 0x8400),iVar3,1,aplStackX_8);
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x208))
              (*(longlong **)(lVar1 + 0x8400),iVar3,1,aplStackX_8);
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x50))
              (*(longlong **)(lVar1 + 0x8400),iVar3,1,aplStackX_8);
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x230))
              (*(longlong **)(lVar1 + 0x8400),iVar3,1,aplStackX_8);
    iVar3 = iVar3 + 1;
    lVar2 = lVar2 + 8;
  } while (iVar3 < 9);
  *(uint64_t *)(lVar1 + 0x8240) = 0;
  *(uint64_t *)(lVar1 + 0x8238) = 0;
  *(uint64_t *)(lVar1 + 0x8278) = 0xffffffffffffffff;
  *(uint64_t *)(lVar1 + 0x8298) = 0xffffffffffffffff;
  *(uint64_t *)(lVar1 + 0x8280) = 0xffffffffffffffff;
  *(uint64_t *)(lVar1 + 0x8288) = 0xffffffffffffffff;
  *(uint64_t *)(lVar1 + 0x8290) = 0xffffffffffffffff;
  *(uint64_t *)(lVar1 + 0x82a0) = 0xffffffffffffffff;
  return;
}






// 函数: void FUN_1800add50(uint64_t param_1,longlong param_2,uint64_t param_3)
void FUN_1800add50(uint64_t param_1,longlong param_2,uint64_t param_3)

{
  (**(code **)(param_2 + 0x18))(param_3);
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001800add86. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(param_2 + 0x10))(param_2,0,0);
    return;
  }
  return;
}






// 函数: void FUN_1800add90(uint64_t *param_1,int param_2)
void FUN_1800add90(uint64_t *param_1,int param_2)

{
  if (*(int *)((longlong)param_1 + 0x1d5c) != param_2) {
    *(int *)((longlong)param_1 + 0x1d5c) = param_2;
    if ((void *)*param_1 != &unknown_var_6752_ptr) {
      (**(code **)((void *)*param_1 + 0x58))();
    }
  }
  return;
}






