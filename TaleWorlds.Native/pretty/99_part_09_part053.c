#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part053.c - 10 个函数

// 函数: void FUN_1805d5a50(longlong *param_1)
void FUN_1805d5a50(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [2];
  int32_t auStackX_18 [2];
  int8_t auStackX_20 [8];
  int32_t *in_stack_ffffffffffffffa8;
  uint64_t in_stack_ffffffffffffffb0;
  int8_t *puVar11;
  int32_t uVar12;
  
  uVar12 = (int32_t)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar7 = 0;
  *(int32_t *)((longlong)param_1 + 0x24) = 0xbf800000;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0xffffffff;
  lVar3 = *(longlong *)*param_1;
  if (*(int *)(lVar3 + 0x568) == 1) {
    iVar1 = *(int *)(*param_1 + 0x2154);
    if (-1 < iVar1) {
      lVar8 = *(longlong *)(lVar3 + 0x8f8) + (longlong)iVar1 * 0x1f8 + 8;
      iVar2 = (int)((*(longlong *)(lVar8 + 0xd8) - *(longlong *)(lVar8 + 0xd0)) / 0xa0);
      if (0 < iVar2) {
        pbVar4 = (byte *)(*(longlong *)(lVar8 + 0xd0) + 0x50);
        uVar6 = uVar7;
        do {
          iVar5 = (int)uVar6;
          if ((*pbVar4 >> 1 & 1) != 0) {
            if ((lVar8 != 0) &&
               ((*(longlong *)(lVar3 + 0x628) != lVar8 || (*(int *)(lVar3 + 0x644) != iVar5)))) {
              puVar11 = auStackX_20;
              in_stack_ffffffffffffffa8 = auStackX_8;
              auStackX_8[0] = 0xffffffff;
              auStackX_18[0] = 0xffffffff;
              auStackX_10[0] = 0xffffffff;
              FUN_18050e440(lVar3,lVar8,auStackX_18,auStackX_10,in_stack_ffffffffffffffa8,puVar11,
                            iVar5);
              uVar12 = (int32_t)((ulonglong)puVar11 >> 0x20);
            }
            fVar10 = (float)FUN_1805bda40(*param_1,lVar8,uVar6,auStackX_8);
            if (fVar10 <= -1e+30) {
              return;
            }
            lVar9 = (longlong)iVar5 * 0xa0;
            *(float *)((longlong)param_1 + 0x24) =
                 (float)*(int *)(lVar9 + 0x70 + *(longlong *)(lVar8 + 0xd0)) *
                 *(float *)(lVar3 + 0x3b8);
            *(int32_t *)(param_1 + 4) = *(int32_t *)(lVar8 + 0xa4);
            if ((*(byte *)(lVar9 + 0x50 + *(longlong *)(lVar8 + 0xd0)) >> 4 & 1) == 0) {
              uVar7 = *(ulonglong *)(*(longlong *)(lVar3 + 0x8f8) + 0x9f0);
            }
            lVar3 = FUN_1805a0690(lVar3 + 0x28,9,lVar8,uVar7,
                                  (ulonglong)in_stack_ffffffffffffffa8 & 0xffffffffffffff00,
                                  CONCAT44(uVar12,iVar5));
            param_1[3] = lVar3;
            param_1[2] = *(longlong *)(lVar9 + 0x50 + *(longlong *)(lVar8 + 0xd0));
            *(int32_t *)(param_1 + 5) = auStackX_8[0];
            *(int *)(param_1 + 6) = iVar1;
            return;
          }
          uVar6 = (ulonglong)(iVar5 + 1U);
          pbVar4 = pbVar4 + 0xa0;
        } while ((int)(iVar5 + 1U) < iVar2);
      }
    }
  }
  return;
}






// 函数: void FUN_1805d5a8d(void)
void FUN_1805d5a8d(void)

{
  int iVar1;
  int iVar2;
  longlong in_RAX;
  uint64_t uVar3;
  byte *pbVar4;
  int iVar5;
  ulonglong uVar6;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  uint64_t *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  int32_t *in_stack_00000020;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  int32_t in_stack_00000090;
  
  iVar1 = *(int *)(in_RAX + 0x2154);
  if (-1 < iVar1) {
    uVar6 = unaff_RSI & 0xffffffff;
    lVar7 = *(longlong *)(unaff_RBP + 0x8f8) + (longlong)iVar1 * 0x1f8 + 8;
    iVar2 = (int)((*(longlong *)(lVar7 + 0xd8) - *(longlong *)(lVar7 + 0xd0)) / 0xa0);
    if (0 < iVar2) {
      pbVar4 = (byte *)(*(longlong *)(lVar7 + 0xd0) + 0x50);
      do {
        iVar5 = (int)uVar6;
        if ((*pbVar4 >> 1 & 1) != 0) {
          if ((lVar7 != 0) &&
             ((*(longlong *)(unaff_RBP + 0x628) != lVar7 || (*(int *)(unaff_RBP + 0x644) != iVar5)))
             ) {
            in_stack_00000020 = &stack0x00000080;
            in_stack_00000080 = 0xffffffff;
            in_stack_00000090 = 0xffffffff;
            in_stack_00000088 = 0xffffffff;
            FUN_18050e440();
          }
          fVar9 = (float)FUN_1805bda40(*unaff_RDI,lVar7,uVar6,&stack0x00000080);
          if (fVar9 <= -1e+30) {
            return;
          }
          lVar8 = (longlong)iVar5 * 0xa0;
          *(float *)((longlong)unaff_RDI + 0x24) =
               (float)*(int *)(lVar8 + 0x70 + *(longlong *)(lVar7 + 0xd0)) *
               *(float *)(unaff_RBP + 0x3b8);
          *(int32_t *)(unaff_RDI + 4) = *(int32_t *)(lVar7 + 0xa4);
          if ((*(byte *)(lVar8 + 0x50 + *(longlong *)(lVar7 + 0xd0)) >> 4 & 1) == 0) {
            unaff_RSI = *(ulonglong *)(*(longlong *)(unaff_RBP + 0x8f8) + 0x9f0);
          }
          uVar3 = FUN_1805a0690(unaff_RBP + 0x28,9,lVar7,unaff_RSI,
                                (ulonglong)in_stack_00000020 & 0xffffffffffffff00);
          unaff_RDI[3] = uVar3;
          unaff_RDI[2] = *(uint64_t *)(lVar8 + 0x50 + *(longlong *)(lVar7 + 0xd0));
          *(int32_t *)(unaff_RDI + 5) = in_stack_00000080;
          *(int *)(unaff_RDI + 6) = iVar1;
          return;
        }
        uVar6 = (ulonglong)(iVar5 + 1U);
        pbVar4 = pbVar4 + 0xa0;
      } while ((int)(iVar5 + 1U) < iVar2);
    }
  }
  return;
}






// 函数: void FUN_1805d5aaa(longlong param_1)
void FUN_1805d5aaa(longlong param_1)

{
  int iVar1;
  uint64_t uVar2;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  uint64_t *unaff_RDI;
  int32_t unaff_R12D;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  int32_t *in_stack_00000020;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  int32_t in_stack_00000090;
  
  uVar5 = unaff_RSI & 0xffffffff;
  lVar6 = *(longlong *)(unaff_RBP + 0x8f8) + param_1 + 8;
  iVar1 = (int)((*(longlong *)(lVar6 + 0xd8) - *(longlong *)(lVar6 + 0xd0)) / 0xa0);
  if (0 < iVar1) {
    pbVar3 = (byte *)(*(longlong *)(lVar6 + 0xd0) + 0x50);
    do {
      iVar4 = (int)uVar5;
      if ((*pbVar3 >> 1 & 1) != 0) {
        if ((lVar6 != 0) &&
           ((*(longlong *)(unaff_RBP + 0x628) != lVar6 || (*(int *)(unaff_RBP + 0x644) != iVar4))))
        {
          in_stack_00000020 = &stack0x00000080;
          in_stack_00000080 = 0xffffffff;
          in_stack_00000090 = 0xffffffff;
          in_stack_00000088 = 0xffffffff;
          FUN_18050e440();
        }
        fVar8 = (float)FUN_1805bda40(*unaff_RDI,lVar6,uVar5,&stack0x00000080);
        if (fVar8 <= -1e+30) {
          return;
        }
        lVar7 = (longlong)iVar4 * 0xa0;
        *(float *)((longlong)unaff_RDI + 0x24) =
             (float)*(int *)(lVar7 + 0x70 + *(longlong *)(lVar6 + 0xd0)) *
             *(float *)(unaff_RBP + 0x3b8);
        *(int32_t *)(unaff_RDI + 4) = *(int32_t *)(lVar6 + 0xa4);
        if ((*(byte *)(lVar7 + 0x50 + *(longlong *)(lVar6 + 0xd0)) >> 4 & 1) == 0) {
          unaff_RSI = *(ulonglong *)(*(longlong *)(unaff_RBP + 0x8f8) + 0x9f0);
        }
        uVar2 = FUN_1805a0690(unaff_RBP + 0x28,9,lVar6,unaff_RSI,
                              (ulonglong)in_stack_00000020 & 0xffffffffffffff00);
        unaff_RDI[3] = uVar2;
        unaff_RDI[2] = *(uint64_t *)(lVar7 + 0x50 + *(longlong *)(lVar6 + 0xd0));
        *(int32_t *)(unaff_RDI + 5) = in_stack_00000080;
        *(int32_t *)(unaff_RDI + 6) = unaff_R12D;
        return;
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
      pbVar3 = pbVar3 + 0xa0;
    } while ((int)(iVar4 + 1U) < iVar1);
  }
  return;
}






// 函数: void FUN_1805d5bb1(void)
void FUN_1805d5bb1(void)

{
  longlong in_RAX;
  uint64_t uVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int32_t unaff_R12D;
  longlong unaff_R14;
  int32_t in_stack_00000080;
  
  *(float *)(unaff_RDI + 0x24) =
       (float)*(int *)(in_RAX * 0xa0 + 0x70 + *(longlong *)(unaff_R14 + 0xd0)) *
       *(float *)(unaff_RBP + 0x3b8);
  *(int32_t *)(unaff_RDI + 0x20) = *(int32_t *)(unaff_R14 + 0xa4);
  uVar1 = FUN_1805a0690(unaff_RBP + 0x28,9);
  *(uint64_t *)(unaff_RDI + 0x18) = uVar1;
  *(uint64_t *)(unaff_RDI + 0x10) =
       *(uint64_t *)(in_RAX * 0xa0 + 0x50 + *(longlong *)(unaff_R14 + 0xd0));
  *(int32_t *)(unaff_RDI + 0x28) = in_stack_00000080;
  *(int32_t *)(unaff_RDI + 0x30) = unaff_R12D;
  return;
}






// 函数: void FUN_1805d5c51(void)
void FUN_1805d5c51(void)

{
  return;
}






// 函数: void FUN_1805d5c5b(void)
void FUN_1805d5c5b(void)

{
  return;
}






// 函数: void FUN_1805d5c60(void)
void FUN_1805d5c60(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d5c90(longlong *param_1)
void FUN_1805d5c90(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  uint *puVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  int32_t uVar23;
  float fVar24;
  float fVar25;
  int iStackX_10;
  uint auStackX_18 [2];
  int aiStackX_20 [2];
  int iStack_78;
  int32_t auStack_70 [2];
  longlong lStack_68;
  longlong lStack_60;
  uint64_t uStack_58;
  int8_t auStack_50 [16];
  
  uStack_58 = 0xfffffffffffffffe;
  uVar22 = *(uint *)(*param_1 + 0x564) >> 0x1f ^ 1;
  lVar21 = *(longlong *)(*param_1 + 0x8f8);
  if ((*(int *)(lVar21 + 0x9e4) == 4) &&
     ((*(uint *)((longlong)*(int *)(*(longlong *)(lVar21 + 0x9f0) + 0xf0) * 0xa0 + 0x58 +
                *(longlong *)(*(longlong *)(lVar21 + 0x9f0) + 0xd0)) & 0x80000) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  lVar20 = 0;
  do {
    if (bVar5) break;
    iVar17 = 0;
    lVar16 = *(longlong *)(lVar20 + 0xd8 + lVar21);
    lVar8 = *(longlong *)(lVar20 + 0xe0 + lVar21) - lVar16;
    lVar13 = lVar8 >> 0x3f;
    lVar8 = lVar8 / 0xa0 + lVar13;
    if (lVar8 != lVar13) {
      puVar9 = (uint *)(lVar16 + 0x58);
      do {
        if ((*puVar9 & 0x80000) != 0) {
          bVar5 = true;
          break;
        }
        iVar17 = iVar17 + 1;
        puVar9 = puVar9 + 0x28;
      } while ((ulonglong)(longlong)iVar17 < (ulonglong)(lVar8 - lVar13));
    }
    lVar20 = lVar20 + 0x1f8;
  } while (lVar20 < 0x9d8);
  *(int32_t *)((longlong)param_1 + 0x2154) = 0xffffffff;
  fVar25 = -1e+30;
  iStack_78 = -1;
  iStackX_10 = 0;
  lVar20 = 0;
  lStack_60 = 0;
  lVar21 = system_system_config;
  auStackX_18[0] = uVar22;
  do {
    lVar16 = lStack_60;
    plVar15 = (longlong *)(*(longlong *)(*param_1 + 0x8f8) + 8 + lStack_60);
    if (0 < (int)plVar15[6]) {
      lVar13 = plVar15[0x1a];
      uVar1 = *(ulonglong *)((longlong)(int)plVar15[0x1e] * 0xa0 + 0x50 + lVar13);
      uVar19 = (uint)uVar1;
      if (((((uVar1 >> 9 & 1) == 0) || (0 < (short)plVar15[1])) &&
          ((cVar6 = func_0x000180534fb0(plVar15), cVar6 == '\0' || (0 < (short)plVar15[1])))) &&
         ((uVar19 & 0x103) != 0x100)) {
        iVar17 = (int)((plVar15[0x1b] - lVar13) / 0xa0);
        iVar14 = 0;
        lStack_68 = (longlong)iVar17;
        if (0 < iVar17) {
          lVar16 = 0;
          do {
            lVar13 = plVar15[0x1a];
            if (((*(byte *)(lVar13 + 0x50 + lVar16) >> 1 & 1) != 0) &&
               ((*(uint *)(lVar13 + 0x58 + lVar16) & 0x2000000) == 0)) {
              lVar8 = *param_1;
              if ((*(longlong **)(lVar8 + 0x628) == plVar15) && (*(int *)(lVar8 + 0x644) == iVar14))
              {
                iVar17 = *(int *)(lVar8 + 0x638);
                uVar19 = *(uint *)(lVar8 + 0x63c);
              }
              else {
                auStack_70[0] = 0xffffffff;
                aiStackX_20[0] = -1;
                auStackX_18[0] = 0xffffffff;
                FUN_18050e440(lVar8,plVar15,aiStackX_20,auStackX_18,auStack_70,auStack_50,iVar14);
                lVar13 = plVar15[0x1a];
                lVar21 = system_system_config;
                iVar17 = aiStackX_20[0];
                uVar19 = auStackX_18[0];
              }
              lVar8 = 0x6666666666666667;
              uVar1 = *(ulonglong *)(lVar13 + 0x50 + lVar16);
              if ((((((uVar1 >> 8 & 1) == 0) && (1 < (int)uVar19)) && (*plVar15 != 0)) &&
                  (0 < *(short *)(*plVar15 + 8))) ||
                 ((0 < iVar17 &&
                  (((*(int *)(*param_1 + 0x564) < 0 ||
                    ((*(uint *)(*param_1 + 0x56c) & 0x2000000) != 0)) || ((uVar1 >> 0x12 & 1) == 0))
                  )))) {
                cVar6 = func_0x000180507950(plVar15);
                if (cVar6 != '\0') {
                  iVar18 = 0;
                  lVar8 = SUB168(SEXT816(lVar8) * SEXT816(plVar15[0x1b] - lVar13),8);
                  lVar12 = lVar8 >> 6;
                  lVar8 = lVar8 >> 0x3f;
                  if (lVar12 != lVar8) {
                    pbVar10 = (byte *)(lVar13 + 0x50);
LAB_1805d5fe5:
                    if ((*pbVar10 & 1) == 0) goto code_r0x0001805d5fea;
                    if (iVar17 < 2) {
                      lVar12 = 0;
                      lVar8 = 0;
                      do {
                        if (((lVar12 != lVar20) &&
                            (lVar2 = *(longlong *)(*param_1 + 0x8f8),
                            0 < *(int *)(lVar8 + 0x38 + lVar2))) &&
                           ((lVar3 = *(longlong *)(lVar8 + 0xd8 + lVar2),
                            (*(ulonglong *)
                              ((longlong)*(int *)(lVar8 + 0xf8 + lVar2) * 0xa0 + 0x50 + lVar3) &
                            0x200) == 0 || (0 < *(short *)(lVar8 + 0x10 + lVar2))))) {
                          iVar17 = 0;
                          lVar11 = *(longlong *)(lVar8 + 0xe0 + lVar2) - lVar3;
                          lVar2 = lVar11 >> 0x3f;
                          lVar11 = lVar11 / 0xa0 + lVar2;
                          if (lVar11 != lVar2) {
                            pbVar10 = (byte *)(lVar3 + 0x50);
                            do {
                              if ((*pbVar10 & 1) != 0) goto LAB_1805d5ffc;
                              iVar17 = iVar17 + 1;
                              pbVar10 = pbVar10 + 0xa0;
                            } while ((ulonglong)(longlong)iVar17 < (ulonglong)(lVar11 - lVar2));
                          }
                        }
                        lVar12 = lVar12 + 1;
                        lVar8 = lVar8 + 0x1f8;
                      } while (lVar8 < 0x9d8);
                      goto LAB_1805d6114;
                    }
                  }
                }
LAB_1805d5ffc:
                cVar6 = (char)uVar22;
                if (bVar5) {
                  uVar19 = *(uint *)(*param_1 + 0x56c);
                  iVar17 = *(int *)(lVar13 + 100 + lVar16);
                  bVar7 = *(byte *)((longlong)iVar17 * 0x170 + 0x140 + lVar21);
                  iVar18 = *(int *)(lVar13 + 0x5c + lVar16);
                  if ((iVar18 == 0xf) && ((uVar19 >> 0x18 & 1) != 0)) {
                    bVar7 = bVar7 & 0xfd;
                  }
                  if (cVar6 == '\0') {
                    bVar4 = bVar7 & 1;
                  }
                  else {
                    bVar4 = bVar7 & 2;
                  }
                  if ((bVar4 != 0) || ((bVar7 & 8) != 0)) goto LAB_1805d61ea;
                }
                else {
LAB_1805d61ea:
                  uVar19 = *(uint *)(*param_1 + 0x56c);
                  iVar17 = *(int *)(lVar13 + 100 + lVar16);
                  bVar7 = *(byte *)((longlong)iVar17 * 0x170 + 0x140 + lVar21);
                  iVar18 = *(int *)(lVar13 + 0x5c + lVar16);
                  if ((iVar18 == 0xf) && ((uVar19 >> 0x18 & 1) != 0)) {
                    bVar7 = bVar7 & 0xfd;
                  }
                  if (cVar6 == '\0') {
                    bVar4 = bVar7 & 1;
                  }
                  else {
                    bVar4 = bVar7 & 2;
                  }
                  if ((bVar4 != 0) || ((bVar7 & 4) != 0)) goto LAB_1805d6114;
                }
                if (((cVar6 == '\0') ||
                    (((iVar18 == 0xf && ((uVar19 >> 0x18 & 1) != 0)) ||
                     ((~*(byte *)((longlong)iVar17 * 0x170 + 0x140 + lVar21) & 2) != 0)))) &&
                   (fVar24 = (float)*(int *)(lVar16 + 0x70 + lVar13), fVar25 < fVar24)) {
                  *(int *)((longlong)param_1 + 0x2154) = iStackX_10;
                  lVar21 = system_system_config;
                  fVar25 = fVar24;
                  iStack_78 = iVar14;
                }
              }
            }
LAB_1805d6114:
            iVar14 = iVar14 + 1;
            lVar16 = lVar16 + 0xa0;
            lStack_68 = lStack_68 + -1;
          } while (lStack_68 != 0);
          lStack_68 = 0;
          lVar16 = lStack_60;
        }
      }
    }
    lVar13 = system_system_data_config;
    iStackX_10 = iStackX_10 + 1;
    lVar20 = lVar20 + 1;
    lStack_60 = lVar16 + 0x1f8;
    if (4 < iStackX_10) {
      iVar17 = *(int *)((longlong)param_1 + 0x2154);
      if (iVar17 == -1) {
        *(int32_t *)(param_1 + 0x42b) = 0x7149f2ca;
      }
      else {
        iVar14 = *(int *)(*param_1 + 0x18);
        if ((iVar14 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar14);
        }
        uVar23 = (**(code **)(lVar13 + 0x48))(iVar14,iVar17,iStack_78);
        *(int32_t *)(param_1 + 0x42b) = uVar23;
        if ((iVar14 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar14);
        }
      }
      return;
    }
  } while( true );
code_r0x0001805d5fea:
  iVar18 = iVar18 + 1;
  pbVar10 = pbVar10 + 0xa0;
  if ((ulonglong)(lVar12 - lVar8) <= (ulonglong)(longlong)iVar18) goto LAB_1805d5ffc;
  goto LAB_1805d5fe5;
}






// 函数: void FUN_1805d62c0(longlong *param_1)
void FUN_1805d62c0(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint64_t uVar9;
  longlong lVar10;
  
  lVar10 = *param_1;
  if ((((*(int *)(lVar10 + 0x560) < 0) && ((*(uint *)(lVar10 + 0x56c) >> 0xe & 1) != 0)) &&
      (uVar7 = *(uint *)((longlong)param_1 + 0x1484), (uVar7 >> 1 & 1) == 0)) &&
     ((((*(uint *)(lVar10 + 0x56c) >> 0x10 & 1) != 0 && (-1 < (int)param_1[0x404])) &&
      ((lVar8 = param_1[0x291] + 0x30a0 + (longlong)(int)param_1[0x404] * 0xa60,
       (*(byte *)(lVar8 + 0x56c) & 8) != 0 &&
       ((*(int *)(lVar8 + 0x568) == 1 && (cVar2 = func_0x000180508270(lVar10), cVar2 != '\0'))))))))
  {
    *(int32_t *)(param_1 + 0x277) = 0;
    *(uint *)((longlong)param_1 + 0x1484) = uVar7 & 0xfffffffe | 2;
    *(int8_t *)(*(longlong *)(lVar10 + 0x738) + 0x180) = 1;
    lVar10 = *param_1;
  }
  if ((*(byte *)(lVar10 + 0x56c) & 1) != 0) goto FUN_1805d6797;
  if ((*(byte *)(lVar10 + 0x56c) & 0x20) != 0) {
    uVar7 = *(uint *)((longlong)param_1 + 0x1484);
    uVar6 = uVar7 & 0xfffffffe;
    *(uint *)((longlong)param_1 + 0x1484) = uVar6;
    if ((uVar7 >> 1 & 1) == 0) {
      *(uint *)((longlong)param_1 + 0x1484) = uVar6 | 2;
      *(int8_t *)(*(longlong *)(*param_1 + 0x738) + 0x180) = 1;
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)(*(longlong *)(*param_1 + 0x20) + 0x34));
  }
  uVar7 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
  uVar7 = uVar7 ^ uVar7 >> 0x11;
  uVar7 = uVar7 ^ uVar7 << 5;
  *(uint *)(param_1 + 0x272) = uVar7;
  *(float *)((longlong)param_1 + 0x14ac) =
       (float)(uVar7 - 1) * 2.3283064e-10 + 1.0 + *(float *)((longlong)param_1 + 0x14ac);
  if (((((int)param_1[0x404] < 0) ||
       (lVar10 = param_1[0x291] + 0x30a0 + (longlong)(int)param_1[0x404] * 0xa60,
       *(int *)(lVar10 + 0x568) != 1)) || ((*(byte *)(lVar10 + 0x56c) & 8) == 0)) ||
     (cVar2 = func_0x000180508270(*param_1,lVar10), cVar2 == '\0')) goto FUN_1805d6797;
  lVar8 = func_0x0001805b7270(param_1 + 1);
  if (lVar8 != 0) {
    cVar2 = func_0x0001805d1da0(param_1);
    if (cVar2 != '\0') {
      if ((char)param_1[0x438] == '\0') {
        iVar3 = *(int *)((longlong)param_1 + 0x14b4);
      }
      else {
        iVar3 = *(int *)((longlong)param_1 + 0x21c4);
      }
      if ((int)param_1[0x404] == iVar3) goto LAB_1805d6666;
    }
    pcVar4 = (char *)FUN_1805b73f0(param_1 + 1);
    if (((*pcVar4 == '\0') && (pfVar5 = (float *)FUN_1805b7450(param_1 + 1), *pfVar5 == 0.0)) &&
       (pfVar5 = (float *)FUN_1805b6e50(param_1 + 1), 2.0 < *pfVar5)) {
      cVar2 = func_0x0001805b7d30(param_1);
      if (((cVar2 == '\0') && (cVar2 = func_0x0001805b7cd0(param_1), cVar2 == '\0')) &&
         ((pcVar4 = (char *)FUN_1805b7080(param_1 + 1), *pcVar4 == '\0' &&
          (((pcVar4 = (char *)func_0x0001805b71d0(param_1 + 1), *pcVar4 == '\0' &&
            (lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x8f8) + 0x9e8), lVar8 != 0)) &&
           ((*(byte *)((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar8 + 0xd0))
             >> 1 & 1) != 0)))))) {
        uVar9 = 0x2000;
        if (0.0 < *(float *)(*(longlong *)(lVar10 + 0x20) + 0x14) -
                  *(float *)(*(longlong *)(*param_1 + 0x6d8) + 0x8ec)) {
          uVar9 = 0x1000;
        }
        func_0x0001805d8950(param_1,uVar9);
      }
      FUN_180508010(param_1);
      goto FUN_1805d6797;
    }
  }
LAB_1805d6666:
  lVar8 = func_0x0001805b6e80(param_1 + 1);
  if (((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x30))) &&
     ((((uVar1 = *(ulonglong *)
                  ((longlong)*(int *)(lVar8 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar8 + 0xd0)),
        (uVar1 >> 9 & 1) == 0 || (0 < *(short *)(lVar8 + 8))) &&
       ((((uVar1 >> 1 & 1) != 0 &&
         (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x8f8) + 0x9e8), lVar10 != 0)) &&
        (0 < *(int *)(lVar10 + 0x30))))) &&
      ((((uVar1 = *(ulonglong *)
                   ((longlong)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar10 + 0xd0)),
         (uVar1 >> 9 & 1) == 0 || (0 < *(short *)(lVar10 + 8))) && ((uVar1 & 1) != 0)) &&
       ((float)(*(longlong *)(&system_error_code + (longlong)(int)param_1[0x274] * 8) - param_1[0x273])
        * 1e-05 < -1.5)))))) {
    uVar7 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
    uVar7 = uVar7 ^ uVar7 >> 0x11;
    uVar7 = uVar7 ^ uVar7 << 5;
    *(uint *)(param_1 + 0x272) = uVar7;
    param_1[0x273] =
         *(longlong *)(&system_error_code + (longlong)(int)param_1[0x274] * 8) -
         (longlong)((float)(uVar7 - 1) * -3.4924597e-05);
  }
FUN_1805d6797:
  *(int32_t *)(param_1 + 0x404) = 0xffffffff;
  return;
}






// 函数: void FUN_1805d62f9(uint param_1)
void FUN_1805d62f9(uint param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint64_t uVar10;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char cVar11;
  int unaff_R14D;
  float fVar12;
  
  uVar8 = *(uint *)((longlong)unaff_RBX + 0x1484);
  if (((((uVar8 >> 1 & 1) == 0) && ((param_1 >> 0x10 & 1) != 0)) && (-1 < (int)unaff_RBX[0x404])) &&
     (((lVar9 = unaff_RBX[0x291] + 0x30a0 + (longlong)(int)unaff_RBX[0x404] * 0xa60,
       (*(byte *)(lVar9 + 0x56c) & 8) != 0 && (*(int *)(lVar9 + 0x568) == 1)) &&
      (cVar2 = func_0x000180508270(), cVar2 != '\0')))) {
    *(int *)(unaff_RBX + 0x277) = unaff_R14D;
    *(uint *)((longlong)unaff_RBX + 0x1484) = uVar8 & 0xfffffffe | 2;
    *(int8_t *)(*(longlong *)(unaff_RDI + 0x738) + 0x180) = 1;
    unaff_RSI = *unaff_RBX;
  }
  if ((*(byte *)(unaff_RSI + 0x56c) & 1) != 0) goto FUN_1805d6797;
  if ((*(byte *)(unaff_RSI + 0x56c) & 0x20) != 0) {
    uVar8 = *(uint *)((longlong)unaff_RBX + 0x1484);
    uVar7 = uVar8 & 0xfffffffe;
    *(uint *)((longlong)unaff_RBX + 0x1484) = uVar7;
    if ((uVar8 >> 1 & 1) == 0) {
      *(uint *)((longlong)unaff_RBX + 0x1484) = uVar7 | 2;
      *(int8_t *)(*(longlong *)(*unaff_RBX + 0x738) + 0x180) = 1;
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd400(*(int32_t *)(*(longlong *)(*unaff_RBX + 0x20) + 0x34));
  }
  uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
  uVar8 = uVar8 ^ uVar8 >> 0x11;
  uVar8 = uVar8 ^ uVar8 << 5;
  *(uint *)(unaff_RBX + 0x272) = uVar8;
  *(float *)((longlong)unaff_RBX + 0x14ac) =
       (float)(uVar8 - 1) * 2.3283064e-10 + 1.0 + *(float *)((longlong)unaff_RBX + 0x14ac);
  if ((((int)unaff_RBX[0x404] < 0) ||
      (lVar9 = unaff_RBX[0x291] + 0x30a0 + (longlong)(int)unaff_RBX[0x404] * 0xa60,
      *(int *)(lVar9 + 0x568) != 1)) ||
     (((*(byte *)(lVar9 + 0x56c) & 8) == 0 ||
      (cVar2 = func_0x000180508270(*unaff_RBX,lVar9), cVar2 == '\0')))) goto FUN_1805d6797;
  lVar4 = func_0x0001805b7270(unaff_RBX + 1);
  if (lVar4 != 0) {
    cVar2 = func_0x0001805d1da0();
    cVar11 = (char)unaff_R14D;
    if (cVar2 != '\0') {
      if ((char)unaff_RBX[0x438] == cVar11) {
        iVar3 = *(int *)((longlong)unaff_RBX + 0x14b4);
      }
      else {
        iVar3 = *(int *)((longlong)unaff_RBX + 0x21c4);
      }
      if ((int)unaff_RBX[0x404] == iVar3) goto LAB_1805d6666;
    }
    pcVar5 = (char *)FUN_1805b73f0(unaff_RBX + 1);
    if (((*pcVar5 == cVar11) && (pfVar6 = (float *)FUN_1805b7450(unaff_RBX + 1), *pfVar6 == 0.0)) &&
       (pfVar6 = (float *)FUN_1805b6e50(unaff_RBX + 1), 2.0 < *pfVar6)) {
      cVar2 = func_0x0001805b7d30();
      if (((cVar2 == '\0') && (cVar2 = func_0x0001805b7cd0(), cVar2 == '\0')) &&
         (((pcVar5 = (char *)FUN_1805b7080(unaff_RBX + 1), *pcVar5 == cVar11 &&
           ((pcVar5 = (char *)func_0x0001805b71d0(unaff_RBX + 1), *pcVar5 == cVar11 &&
            (lVar4 = *(longlong *)(*(longlong *)(lVar9 + 0x8f8) + 0x9e8), lVar4 != 0)))) &&
          ((*(byte *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd0))
            >> 1 & 1) != 0)))) {
        fVar12 = *(float *)(*(longlong *)(lVar9 + 0x20) + 0x14) -
                 *(float *)(*(longlong *)(*unaff_RBX + 0x6d8) + 0x8ec);
        uVar10 = 0x2000;
        if (0.0 < fVar12) {
          uVar10 = 0x1000;
        }
        func_0x0001805d8950(fVar12,uVar10);
      }
      FUN_180508010();
      goto FUN_1805d6797;
    }
  }
LAB_1805d6666:
  lVar4 = func_0x0001805b6e80(unaff_RBX + 1);
  if ((lVar4 != 0) && (unaff_R14D < *(int *)(lVar4 + 0x30))) {
    uVar1 = *(ulonglong *)
             ((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd0));
    if (((((uVar1 >> 9 & 1) == 0) || ((short)unaff_R14D < *(short *)(lVar4 + 8))) &&
        ((((((uVar1 >> 1 & 1) != 0 &&
            (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x8f8) + 0x9e8), lVar9 != 0)) &&
           (unaff_R14D < *(int *)(lVar9 + 0x30))) &&
          ((uVar1 = *(ulonglong *)
                     ((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar9 + 0xd0)),
           (uVar1 >> 9 & 1) == 0 || ((short)unaff_R14D < *(short *)(lVar9 + 8))))) &&
         ((uVar1 & 1) != 0)))) &&
       ((float)(*(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x274] * 8) -
               unaff_RBX[0x273]) * 1e-05 < -1.5)) {
      uVar8 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar8 = uVar8 ^ uVar8 >> 0x11;
      uVar8 = uVar8 ^ uVar8 << 5;
      *(uint *)(unaff_RBX + 0x272) = uVar8;
      unaff_RBX[0x273] =
           *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x274] * 8) -
           (longlong)((float)(uVar8 - 1) * -3.4924597e-05);
    }
  }
FUN_1805d6797:
  *(int32_t *)(unaff_RBX + 0x404) = 0xffffffff;
  return;
}






