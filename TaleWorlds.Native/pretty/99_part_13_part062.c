/* 函数别名定义: MemoryCacheController */
#define MemoryCacheController MemoryCacheController


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part062.c - 7 个函数

// 函数: void FUN_1808d12fa(void)
void FUN_1808d12fa(void)

{
  return;
}



int FUN_1808d1304(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_R12D;
  int unaff_R13D;
  int64_t *unaff_R15;
  bool bVar4;
  
code_r0x0001808d1304:
  iVar3 = *(int *)(param_1 + (int64_t)unaff_EBX * 4);
  do {
    if (iVar3 == -1) {
      return unaff_R13D;
    }
    do {
      lVar2 = *(int64_t *)(unaff_R15[2] + 8 + (int64_t)iVar3 * 0x10);
      iVar1 = FUN_1808605e0(lVar2);
      if ((iVar1 != 2) && (*(int64_t *)(lVar2 + 0x350) == 0)) {
        iVar1 = FUN_180863820(lVar2,-(unaff_R12D != 0) & 3,0);
        if (iVar1 != 0) {
          unaff_R13D = iVar1;
        }
      }
    } while ((iVar3 != -1) &&
            (iVar3 = *(int *)(unaff_R15[2] + 4 + (int64_t)iVar3 * 0x10), iVar3 != -1));
    iVar3 = unaff_EBX + 1;
    bVar4 = unaff_EBX != -1;
    unaff_EBX = 0;
    if (bVar4) {
      unaff_EBX = iVar3;
    }
    if (unaff_EBX != (int)unaff_R15[1]) {
      param_1 = *unaff_R15;
      lVar2 = (int64_t)unaff_EBX;
      do {
        if (*(int *)(param_1 + lVar2 * 4) != -1) goto code_r0x0001808d1304;
        unaff_EBX = unaff_EBX + 1;
        lVar2 = lVar2 + 1;
      } while (lVar2 != (int)unaff_R15[1]);
    }
    unaff_EBX = -1;
    iVar3 = -1;
  } while( true );
}



uint64_t FUN_1808d1310(int64_t *param_1,uint64_t param_2)

{
  uint64_t uVar1;
  bool bVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uStackX_8;
  
  uVar1 = param_1[0x36];
  uVar5 = *(uint *)((int64_t)param_1 + 0x1d4) + param_2;
  if ((uVar1 != 0) && (uVar1 <= uVar5)) {
    uVar5 = uVar1;
  }
  uStackX_8 = 0;
  uVar4 = FUN_1808ca7e0(param_1,uVar5,&uStackX_8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((*(char *)((int64_t)param_1 + 0x1dd) == (char)uVar4) &&
     (uVar4 = (**(code **)(*param_1 + 0x158))(param_1,uStackX_8,uVar5), (int)uVar4 != 0)) {
    return uVar4;
  }
  if ((param_1[0x36] == 0) || (param_2 < (uint64_t)param_1[0x36])) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uStackX_8 = 0;
  uVar4 = FUN_1808ca7e0(param_1,param_2,&uStackX_8);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (bVar2) {
    uVar4 = FUN_1808d15a0(param_1,uStackX_8);
    iVar3 = (int)uVar4;
  }
  else {
    if (uVar5 < param_2) {
      return 0x1c;
    }
    uVar4 = FUN_1808d15a0(param_1,uStackX_8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (param_1[0x35] == 0) goto LAB_1808d1409;
    uVar4 = FUN_1808ced00(param_1);
    iVar3 = (int)uVar4;
  }
  if (iVar3 != 0) {
    return uVar4;
  }
LAB_1808d1409:
  if ((param_1[0x36] != 0) && ((uint64_t)param_1[0x36] < param_2)) {
    *(int8_t *)((int64_t)param_1 + 0x1dd) = 1;
  }
  return 0;
}



uint64_t FUN_1808d138a(void)

{
  bool bVar1;
  int iVar2;
  uint64_t in_RAX;
  uint64_t uVar3;
  uint64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uStack0000000000000030;
  
  if ((in_RAX == 0) || (unaff_RDI < in_RAX)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uStack0000000000000030 = 0;
  uVar3 = FUN_1808ca7e0();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (bVar1) {
    uVar3 = FUN_1808d15a0();
    iVar2 = (int)uVar3;
  }
  else {
    if (unaff_RBX < unaff_RDI) {
      return 0x1c;
    }
    uVar3 = FUN_1808d15a0();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(int64_t *)(unaff_RSI + 0x1a8) == 0) goto LAB_1808d1409;
    uVar3 = FUN_1808ced00();
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    return uVar3;
  }
LAB_1808d1409:
  if ((*(uint64_t *)(unaff_RSI + 0x1b0) != 0) && (*(uint64_t *)(unaff_RSI + 0x1b0) < unaff_RDI)) {
    *(int8_t *)(unaff_RSI + 0x1dd) = 1;
  }
  return 0;
}






// 函数: void FUN_1808d1428(void)
void FUN_1808d1428(void)

{
  return;
}



uint64_t FUN_1808d1480(int64_t *param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char acStackX_8 [8];
  int8_t auStackX_18 [16];
  
  if (((int)param_1[0x27] == 0) && (uVar2 = FUN_1808cf440(), (int)uVar2 != 0)) {
    return uVar2;
  }
  if ((int)param_1[0x27] == 1) {
    uVar2 = (**(code **)(*(int64_t *)param_1[0x20] + 0x18))
                      ((int64_t *)param_1[0x20],param_1[0x21],acStackX_8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (acStackX_8[0] == (char)uVar2) {
      param_1[0x2a] = 0;
      *(int32_t *)(param_1 + 9) = 5;
      uVar2 = (**(code **)(*param_1 + 0x90))(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else if ((int)param_1[9] == 3) {
      if (((int)param_1[0x26] == -1) && ((uint64_t)param_1[0x23] <= param_2)) {
        *(int32_t *)(param_1 + 0x26) = 0;
        FUN_18073fd60(param_1[0x1f],0);
      }
      FUN_1808ce950(param_1);
    }
  }
  auStackX_18[0] = 0;
  if (((*(uint *)((int64_t)param_1 + 0x134) >> 3 & 1) != 0) &&
     (iVar1 = FUN_18073cd10(param_1[0x1f],auStackX_18), iVar1 != 0)) {
    *(uint *)((int64_t)param_1 + 0x134) = *(uint *)((int64_t)param_1 + 0x134) & 0xfffffff7;
    lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar2 = FUN_18085ffc0(*(uint64_t *)(lVar3 + 0x18),0x4000,param_1[0x2a]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1808d15a0(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1808d0d90(param_1 + 0x118);
  if ((int)uVar1 == 0) {
    if ((*(int *)(param_1 + 0x1d0) == 2) &&
       (uVar1 = FUN_1808cad80(param_1 + 0x118,(int *)(param_1 + 0x1d0),param_1 + 0x1b8),
       (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



uint64_t FUN_1808d15f0(int64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  uVar6 = param_2[1];
  plVar8 = (int64_t *)0x0;
  plVar1 = (int64_t *)(param_1 + 8);
  *(uint64_t *)(param_1 + 0x18) = *param_2;
  *(uint64_t *)(param_1 + 0x20) = uVar6;
  uVar6 = param_2[3];
  *(uint64_t *)(param_1 + 0x28) = param_2[2];
  *(uint64_t *)(param_1 + 0x30) = uVar6;
  uVar2 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar3 = *(int32_t *)(param_2 + 5);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(param_2 + 4);
  *(int32_t *)(param_1 + 0x3c) = uVar2;
  *(int32_t *)(param_1 + 0x40) = uVar3;
  *(int32_t *)(param_1 + 0x44) = uVar4;
  plVar7 = (int64_t *)(*plVar1 + -0x20);
  if (*plVar1 == 0) {
    plVar7 = plVar8;
  }
  plVar5 = plVar8;
  if (plVar7 != (int64_t *)0x0) {
    plVar5 = plVar7 + 4;
  }
  while( true ) {
    if (plVar5 == plVar1) {
      return 0;
    }
    plVar7 = plVar5 + -4;
    if (plVar5 == (int64_t *)0x0) {
      plVar7 = plVar8;
    }
    uVar6 = (**(code **)(*plVar7 + 0xb8))
                      (plVar7,param_2,*(int8_t *)(param_1 + 0x79),
                       *(int8_t *)(param_1 + 0x78));
    if ((int)uVar6 != 0) break;
    if (plVar5 == plVar1) {
      return 0;
    }
    plVar7 = (int64_t *)(*plVar5 + -0x20);
    if (*plVar5 == 0) {
      plVar7 = plVar8;
    }
    plVar5 = plVar8;
    if (plVar7 != (int64_t *)0x0) {
      plVar5 = plVar7 + 4;
    }
  }
  return uVar6;
}



uint64_t FUN_1808d16c0(int64_t param_1,uint64_t param_2)

{
  int32_t *puVar1;
  uint64_t uVar2;
  
  if (*(int *)(param_1 + 0x1d8) == 0) {
    *(int8_t *)(param_1 + 0x1dd) = 1;
  }
  else {
    puVar1 = (int32_t *)MemoryCacheController0();
    uVar2 = FUN_1808ce830(param_1,param_2,*(uint64_t *)(param_1 + 0x1e0),*puVar1,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d1720(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1808d1720(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int *piVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  char cVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auStack_1d8 [32];
  char cStack_1b8;
  uint64_t uStack_1b0;
  float afStack_1a8 [2];
  uint64_t *puStack_1a0;
  int64_t lStack_198;
  uint64_t uStack_190;
  uint64_t auStack_188 [2];
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  
  uStack_78 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  if (*(uint64_t *)(param_1 + 0x220) < param_3) {
    fVar19 = 0.0;
    uVar13 = param_3;
    if (0.0 < *(float *)(param_1 + 0x234)) {
      fVar22 = *(float *)(param_1 + 0x234) * 0.01;
      uVar11 = 0;
      iVar7 = 0;
      if (*(int64_t *)(param_1 + 0x1e0) != 0) {
        uStack_1b0 = 0;
        iVar5 = FUN_1808ca8a0(param_1,*(uint64_t *)(param_1 + 0x1e0),&uStack_1b0);
        if (iVar5 != 0) goto LAB_1808d1c7f;
        uVar13 = uStack_1b0;
        if (param_3 < uStack_1b0) {
          uVar13 = param_3;
        }
      }
      if (*(int *)(param_1 + 0x22c) < 0x21) {
        iVar5 = *(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x230);
      }
      else {
        iVar5 = 0x20;
      }
      uVar8 = (*(code *)**(uint64_t **)(*(int64_t *)(param_1 + 0x170) + 8))();
      iVar6 = func_0x0001808c7d90(uVar8);
      cVar17 = iVar6 == 2;
      lStack_198 = (int64_t)iVar5;
      piVar14 = (int *)(*(int64_t *)(param_1 + 0x218) + 0x108);
      cStack_1b8 = cVar17;
      if (*piVar14 == 0) {
        fVar18 = *(float *)(param_1 + 0x228);
        fVar21 = (float)*(uint *)(*(int64_t *)(param_1 + 0xe8) + 0x774);
        fVar20 = ((float)(int64_t)(uVar13 - *(int64_t *)(param_1 + 0x220)) / fVar21) * fVar22;
        uVar15 = uVar11;
        if (fVar18 < fVar20) {
          do {
            fVar20 = fVar20 - fVar18;
            fVar19 = fVar19 + fVar18;
            if ((bool)cVar17) {
              if ((int64_t)uVar11 < lStack_198) {
                uVar15 = (uint64_t)((int)uVar15 + 1);
                *(float *)((int64_t)&uStack_178 + uVar11 * 4) = fVar19;
                uVar11 = uVar11 + 1;
              }
              else if (0x20 < *(int *)(param_1 + 0x22c)) {
                    // WARNING: Subroutine does not return
                memmove(&uStack_178,(int64_t)&uStack_178 + 4,0x7c);
              }
            }
            else {
              cVar4 = func_0x0001808cb9d0(param_1);
              if (cVar4 == '\0') {
                puStack_1a0 = (uint64_t *)0x0;
                iVar7 = FUN_1808ca7e0(param_1,(int64_t)((fVar19 / fVar22) * fVar21) +
                                              *(int64_t *)(param_1 + 0x220),&puStack_1a0);
                if ((iVar7 != 0) || (iVar7 = FUN_1808d0b80(param_1,puStack_1a0), iVar7 != 0))
                goto LAB_1808d1c7f;
              }
            }
            iVar7 = (int)uVar15;
            fVar18 = (float)func_0x0001808c1740(*(uint64_t *)(param_1 + 0xe8),
                                                *(int32_t *)
                                                 (*(int64_t *)(param_1 + 0x218) + 0x100),
                                                *(int32_t *)
                                                 (*(int64_t *)(param_1 + 0x218) + 0x104));
            *(float *)(param_1 + 0x228) = fVar18;
          } while (fVar18 < fVar20);
        }
        *(float *)(param_1 + 0x228) = fVar18 - fVar20;
        if ((bool)cVar17) {
          iVar6 = iVar7 - *(int *)(*(int64_t *)(param_1 + 0x218) + 0xf0);
          iVar5 = 0;
          if (-1 < iVar6) {
            iVar5 = iVar6;
          }
          lVar12 = (int64_t)iVar5;
          if (lVar12 < iVar7) {
            do {
              lStack_198 = 0;
              iVar5 = FUN_1808ca7e0(param_1,(int64_t)
                                            ((1.0 / fVar22) *
                                             *(float *)((int64_t)&uStack_178 + lVar12 * 4) * fVar21
                                            ) + *(int64_t *)(param_1 + 0x220),&lStack_198);
              if ((iVar5 != 0) || (iVar5 = FUN_1808d0b80(param_1,lStack_198), iVar5 != 0))
              goto LAB_1808d1c7f;
              lVar12 = lVar12 + 1;
            } while (lVar12 < iVar7);
          }
        }
      }
      else {
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_1b0 = 0;
        FUN_1808592c0(*(int64_t *)(param_1 + 0x170) + 200,*(uint64_t *)(param_1 + 0x220),piVar14,
                      &uStack_1b0);
        uVar15 = uVar11;
        uVar16 = uVar11;
        uVar3 = uStack_1b0;
        while (uStack_1b0 = uVar3, uVar3 < uVar13) {
          uVar1 = *(uint64_t *)(param_1 + 0x30);
          uVar10 = uVar11;
          if ((uVar1 == 0) || (uVar1 <= uVar3)) {
            uVar2 = *(uint64_t *)(param_1 + 0x38);
            if (uVar1 == 0) {
              puStack_1a0 = auStack_188;
              auStack_188[0] = uVar2;
            }
            else {
              uStack_190 = uVar1;
              if (uVar1 <= uVar2) {
                uStack_190 = uVar2;
              }
              puStack_1a0 = &uStack_190;
            }
            afStack_1a8[0] = 1.0;
            iVar7 = FUN_18073ca90(*(uint64_t *)(param_1 + 0xf0),afStack_1a8);
            if ((iVar7 == 0) &&
               (uVar10 = (int64_t)((float)(int64_t)(uVar3 - *puStack_1a0) * afStack_1a8[0]) +
                         *(int64_t *)(param_1 + 0x1c0), (int64_t)uVar10 < 1)) {
              uVar10 = 0;
            }
          }
          cVar17 = cStack_1b8;
          fVar19 = fVar22 + *(float *)(param_1 + 0x228);
          *(float *)(param_1 + 0x228) = fVar19;
          while (iVar7 = (int)uVar16, 1.0 <= fVar19) {
            *(float *)(param_1 + 0x228) = fVar19 - 1.0;
            if (cVar17 == '\0') {
              cVar4 = func_0x0001808cb9d0(param_1);
              if ((cVar4 == '\0') && (iVar7 = FUN_1808d0b80(param_1,uVar10), iVar7 != 0))
              goto LAB_1808d1c7f;
            }
            else if ((int64_t)uVar15 < lStack_198) {
              uVar16 = (uint64_t)(iVar7 + 1);
              (&uStack_178)[uVar15] = uVar10;
              uVar15 = uVar15 + 1;
            }
            else if (0x20 < *(int *)(param_1 + 0x22c)) {
                    // WARNING: Subroutine does not return
              memmove(&uStack_178,&uStack_170,0xf8);
            }
            fVar19 = *(float *)(param_1 + 0x228);
          }
          FUN_1808592c0(*(int64_t *)(param_1 + 0x170) + 200,uStack_1b0 + 1,
                        *(int64_t *)(param_1 + 0x218) + 0x108,&uStack_1b0);
          uVar3 = uStack_1b0;
        }
        if (cVar17 != '\0') {
          uVar9 = iVar7 - *(int *)(*(int64_t *)(param_1 + 0x218) + 0xf0);
          if (-1 < (int)uVar9) {
            uVar11 = (uint64_t)uVar9;
          }
          uVar9 = (uint)uVar11;
          while ((int)uVar9 < iVar7) {
            iVar5 = FUN_1808d0b80(param_1,(&uStack_178)[(int)uVar11]);
            if (iVar5 != 0) goto LAB_1808d1c7f;
            uVar9 = (int)uVar11 + 1;
            uVar11 = (uint64_t)uVar9;
          }
        }
      }
    }
    *(uint64_t *)(param_1 + 0x220) = uVar13;
    if ((*(int *)(param_1 + 0x22c) < 0x21) &&
       (*(int *)(param_1 + 0x22c) <= *(int *)(param_1 + 0x230))) {
      *(int8_t *)(param_1 + 0x1dd) = 1;
    }
  }
LAB_1808d1c7f:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_78 ^ (uint64_t)auStack_1d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d1ce0(int64_t param_1,uint64_t *param_2,int8_t param_3)
void FUN_1808d1ce0(int64_t param_1,uint64_t *param_2,int8_t param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t auStack_b8 [32];
  int8_t auStack_98 [16];
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int8_t auStack_58 [64];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uVar1 = param_2[1];
  *(uint64_t *)(param_1 + 0x1e8) = *param_2;
  *(uint64_t *)(param_1 + 0x1f0) = uVar1;
  uVar1 = param_2[3];
  *(uint64_t *)(param_1 + 0x1f8) = param_2[2];
  *(uint64_t *)(param_1 + 0x200) = uVar1;
  uVar1 = param_2[5];
  *(uint64_t *)(param_1 + 0x208) = param_2[4];
  *(uint64_t *)(param_1 + 0x210) = uVar1;
  uStack_88 = *param_2;
  uStack_80 = param_2[1];
  uStack_78 = *(int32_t *)(param_2 + 2);
  uStack_74 = *(int32_t *)((int64_t)param_2 + 0x14);
  uStack_70 = *(int32_t *)(param_2 + 3);
  uStack_6c = *(int32_t *)((int64_t)param_2 + 0x1c);
  uStack_68 = *(int32_t *)(param_2 + 4);
  uStack_64 = *(int32_t *)((int64_t)param_2 + 0x24);
  uStack_60 = *(int32_t *)(param_2 + 5);
  uStack_5c = *(int32_t *)((int64_t)param_2 + 0x2c);
  FUN_1808d1fa0(auStack_58);
  puVar2 = (uint64_t *)FUN_1808d2380(auStack_98,auStack_58,param_1 + 0x22c);
  uStack_88 = *puVar2;
  uStack_80 = CONCAT44(uStack_80._4_4_,*(int32_t *)(puVar2 + 1));
  FUN_1808d15f0(param_1 + 0x118,&uStack_88,param_3);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_b8);
}



uint64_t FUN_1808d1db0(int64_t param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  
  uVar4 = param_2[1];
  *(uint64_t *)(param_1 + 0x1e8) = *param_2;
  *(uint64_t *)(param_1 + 0x1f0) = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x14);
  uVar2 = *(int32_t *)(param_2 + 3);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x1c);
  *(int32_t *)(param_1 + 0x1f8) = *(int32_t *)(param_2 + 2);
  *(int32_t *)(param_1 + 0x1fc) = uVar1;
  *(int32_t *)(param_1 + 0x200) = uVar2;
  *(int32_t *)(param_1 + 0x204) = uVar3;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar2 = *(int32_t *)(param_2 + 5);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(param_1 + 0x208) = *(int32_t *)(param_2 + 4);
  *(int32_t *)(param_1 + 0x20c) = uVar1;
  *(int32_t *)(param_1 + 0x210) = uVar2;
  *(int32_t *)(param_1 + 0x214) = uVar3;
  FUN_1808d15f0(param_1 + 0x118,(uint64_t *)(param_1 + 0x1e8));
  return 0;
}



uint64_t FUN_1808d1df0(int64_t param_1,uint64_t *param_2,uint64_t param_3,char param_4)

{
  uint64_t uVar1;
  
  if (param_4 != '\0') {
    *(uint64_t *)(param_1 + 0x140) = *param_2;
    *(int32_t *)(param_1 + 0x148) = *(int32_t *)(param_2 + 1);
    if (*(int64_t *)(param_1 + 0xf8) != 0) {
      uVar1 = FUN_18073d6e0(*(int64_t *)(param_1 + 0xf8),0x40000010);
      if (0x1e < (uint)uVar1) {
        return uVar1;
      }
      if ((0x40000009U >> ((uint)uVar1 & 0x1f) & 1) == 0) {
        return uVar1;
      }
      uVar1 = FUN_18073d010(*(uint64_t *)(param_1 + 0xf8),param_2,0);
      if (0x1e < (uint)uVar1) {
        return uVar1;
      }
      if ((0x40000009U >> ((uint)uVar1 & 0x1f) & 1) == 0) {
        return uVar1;
      }
    }
  }
  return 0;
}



uint64_t FUN_1808d1ea0(uint64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  
  lVar1 = (**(code **)*param_1)();
  *(bool *)param_2 = *(int *)(lVar1 + 0xb0) != -1;
  return 0;
}



uint64_t FUN_1808d1ed0(uint64_t *param_1,char *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char acStackX_8 [8];
  
  lVar2 = (**(code **)*param_1)();
  acStackX_8[0] = *(int *)(lVar2 + 0xb0) != -1;
  if ((bool)acStackX_8[0]) {
    plVar6 = param_1 + 0x24;
    plVar5 = (int64_t *)0x0;
    plVar4 = (int64_t *)(*plVar6 + -0x20);
    if (*plVar6 == 0) {
      plVar4 = plVar5;
    }
    plVar1 = plVar5;
    if (plVar4 != (int64_t *)0x0) {
      plVar1 = plVar4 + 4;
    }
    while (plVar1 != plVar6) {
      plVar4 = plVar1 + -4;
      if (plVar1 == (int64_t *)0x0) {
        plVar4 = plVar5;
      }
      uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,acStackX_8);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if ((acStackX_8[0] == '\0') || (plVar1 == plVar6)) break;
      plVar4 = (int64_t *)(*plVar1 + -0x20);
      if (*plVar1 == 0) {
        plVar4 = plVar5;
      }
      plVar1 = plVar5;
      if (plVar4 != (int64_t *)0x0) {
        plVar1 = plVar4 + 4;
      }
    }
  }
  *param_2 = acStackX_8[0];
  return 0;
}



float * FUN_1808d1fa0(float *param_1,uint64_t *param_2,char param_3)

{
  float fVar1;
  
  *(uint64_t *)(param_1 + 3) = *(uint64_t *)((int64_t)param_2 + 0x24);
  param_1[5] = *(float *)((int64_t)param_2 + 0x2c);
  if (param_3 == '\0') {
    *(uint64_t *)(param_1 + 6) = param_2[3];
    fVar1 = *(float *)(param_2 + 4);
  }
  else {
    fVar1 = -*(float *)(param_2 + 4);
    *(uint64_t *)(param_1 + 6) = param_2[3] ^ 0x8000000080000000;
  }
  param_1[8] = fVar1;
  *param_1 = param_1[4] * param_1[8] - param_1[5] * param_1[7];
  param_1[2] = param_1[3] * param_1[7] - param_1[6] * param_1[4];
  param_1[1] = param_1[6] * param_1[5] - param_1[3] * param_1[8];
  *(uint64_t *)(param_1 + 9) = *param_2;
  param_1[0xb] = *(float *)(param_2 + 1);
  *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)((int64_t)param_2 + 0xc);
  param_1[0xe] = *(float *)((int64_t)param_2 + 0x14);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d2080(uint64_t *param_1,float *param_2,float *param_3)
void FUN_1808d2080(uint64_t *param_1,float *param_2,float *param_3)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int8_t auStack_c8 [8];
  float fStack_c0;
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  fVar1 = param_3[7];
  fVar2 = param_3[6];
  fVar3 = param_3[8];
  fVar4 = param_2[3];
  fVar5 = param_2[6];
  fVar6 = param_2[1];
  fVar7 = param_2[4];
  fVar8 = param_2[2];
  fVar9 = param_2[5];
  fVar10 = param_2[8];
  fVar11 = param_2[7];
  fVar12 = param_3[10];
  fVar13 = param_3[0xb];
  fVar14 = param_3[9];
  param_1[3] = CONCAT44(fVar6 * fVar2 + fVar1 * fVar7 + fVar3 * fVar11,
                        *param_2 * fVar2 + fVar1 * fVar4 + fVar3 * fVar5);
  fVar15 = *param_2;
  *(float *)(param_1 + 4) = fVar8 * fVar2 + fVar1 * fVar9 + fVar3 * fVar10;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar16 = *param_2;
  *(uint64_t *)((int64_t)param_1 + 0x24) =
       CONCAT44(fVar7 * fVar12 + fVar6 * fVar14 + fVar11 * fVar13,
                fVar4 * fVar12 + fVar15 * fVar14 + fVar5 * fVar13);
  *(float *)((int64_t)param_1 + 0x2c) = fVar9 * fVar12 + fVar8 * fVar14 + fVar10 * fVar13;
  fVar12 = param_3[4];
  fVar13 = param_2[0xb];
  fVar14 = *param_2;
  *param_1 = CONCAT44(fVar6 * fVar1 + fVar7 * fVar2 + fVar11 * fVar3 + param_2[10],
                      fVar16 * fVar1 + fVar4 * fVar2 + fVar5 * fVar3 + param_2[9]);
  fVar15 = param_3[3];
  fVar16 = param_3[5];
  *(float *)(param_1 + 1) = fVar8 * fVar1 + fVar9 * fVar2 + fVar10 * fVar3 + fVar13;
  fStack_c0 = fVar8 * fVar15 + fVar9 * fVar12 + fVar10 * fVar16 + param_2[0xe];
  *(uint64_t *)((int64_t)param_1 + 0xc) =
       CONCAT44(fVar6 * fVar15 + fVar7 * fVar12 + fVar11 * fVar16 + param_2[0xd],
                fVar14 * fVar15 + fVar4 * fVar12 + fVar5 * fVar16 + param_2[0xc]);
  *(float *)((int64_t)param_1 + 0x14) = fStack_c0;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_b8 ^ (uint64_t)auStack_c8);
}



uint64_t * FUN_1808d2380(uint64_t *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  fVar4 = param_2[2];
  fVar5 = param_2[5];
  fVar6 = param_2[8];
  fVar7 = param_2[0xb];
  *param_1 = CONCAT44(fVar3 * param_2[1] + fVar1 * param_2[4] + fVar2 * param_2[7] + param_2[10],
                      fVar1 * param_2[3] + fVar3 * *param_2 + fVar2 * param_2[6] + param_2[9]);
  *(float *)(param_1 + 1) = fVar3 * fVar4 + fVar1 * fVar5 + fVar2 * fVar6 + fVar7;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d2430(uint64_t param_1,int64_t param_2)
void FUN_1808d2430(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  float fVar3;
  int8_t auStack_78 [32];
  float afStack_58 [8];
  float afStack_38 [8];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  FUN_1808bef80(param_2,param_1,afStack_58,afStack_38);
  lVar2 = (int64_t)*(int *)(param_2 + 0x550);
  lVar1 = 0;
  fVar3 = 0.0;
  if (3 < lVar2) {
    do {
      if (0.0 < afStack_58[lVar1]) {
        fVar3 = fVar3 + SQRT(afStack_38[lVar1]) * afStack_58[lVar1];
      }
      if (0.0 < afStack_58[lVar1 + 1]) {
        fVar3 = fVar3 + SQRT(afStack_38[lVar1 + 1]) * afStack_58[lVar1 + 1];
      }
      if (0.0 < afStack_58[lVar1 + 2]) {
        fVar3 = fVar3 + SQRT(afStack_38[lVar1 + 2]) * afStack_58[lVar1 + 2];
      }
      if (0.0 < afStack_58[lVar1 + 3]) {
        fVar3 = fVar3 + SQRT(afStack_38[lVar1 + 3]) * afStack_58[lVar1 + 3];
      }
      lVar1 = lVar1 + 4;
    } while (lVar1 < lVar2 + -3);
  }
  for (; lVar1 < lVar2; lVar1 = lVar1 + 1) {
    if (0.0 < afStack_58[lVar1]) {
      fVar3 = fVar3 + SQRT(afStack_38[lVar1]) * afStack_58[lVar1];
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(fVar3);
}



float FUN_1808d2530(int param_1,int64_t param_2,int64_t param_3)

{
  float fVar1;
  uint uVar2;
  uint64_t uVar3;
  float *pfVar4;
  int iVar5;
  int64_t lVar6;
  float fVar7;
  
  iVar5 = 0;
  fVar7 = 0.0;
  if (3 < param_1) {
    lVar6 = param_2 - param_3;
    uVar2 = (param_1 - 4U >> 2) + 1;
    pfVar4 = (float *)(param_3 + 4);
    uVar3 = (uint64_t)uVar2;
    iVar5 = uVar2 * 4;
    do {
      fVar1 = *(float *)(lVar6 + -4 + (int64_t)pfVar4);
      if (0.0 < fVar1) {
        fVar7 = fVar7 + SQRT(pfVar4[-1]) * fVar1;
      }
      if (0.0 < *(float *)(lVar6 + (int64_t)pfVar4)) {
        fVar7 = fVar7 + SQRT(*pfVar4) * *(float *)(lVar6 + (int64_t)pfVar4);
      }
      fVar1 = *(float *)(lVar6 + 4 + (int64_t)pfVar4);
      if (0.0 < fVar1) {
        fVar7 = fVar7 + SQRT(pfVar4[1]) * fVar1;
      }
      fVar1 = *(float *)(lVar6 + 8 + (int64_t)pfVar4);
      if (0.0 < fVar1) {
        fVar7 = fVar7 + SQRT(pfVar4[2]) * fVar1;
      }
      pfVar4 = pfVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (iVar5 < param_1) {
    pfVar4 = (float *)(param_3 + (int64_t)iVar5 * 4);
    uVar3 = (uint64_t)(uint)(param_1 - iVar5);
    do {
      fVar1 = *(float *)((int64_t)pfVar4 + (param_2 - param_3));
      if (0.0 < fVar1) {
        fVar7 = fVar7 + SQRT(*pfVar4) * fVar1;
      }
      pfVar4 = pfVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return fVar7;
}






// 函数: void FUN_1808d2680(float *param_1,int32_t *param_2)
void FUN_1808d2680(float *param_1,int32_t *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)param_2[6];
  *(uint64_t *)param_1 = CONCAT44(param_2[3],*param_2);
  param_1[2] = fVar1;
  fVar1 = (float)param_2[7];
  *(uint64_t *)(param_1 + 3) = CONCAT44(param_2[4],param_2[1]);
  param_1[5] = fVar1;
  fVar1 = (float)param_2[8];
  *(uint64_t *)(param_1 + 6) = CONCAT44(param_2[5],param_2[2]);
  param_1[8] = fVar1;
  fVar1 = (float)param_2[10];
  fVar2 = (float)param_2[9];
  fVar3 = (float)param_2[0xb];
  *(uint64_t *)(param_1 + 9) =
       CONCAT44(fVar2 * param_1[1] + fVar1 * param_1[4] + fVar3 * param_1[7],
                fVar2 * *param_1 + fVar1 * param_1[3] + fVar3 * param_1[6]) ^ 0x8000000080000000;
  param_1[0xb] = -(fVar1 * param_1[5] + fVar2 * param_1[2] + fVar3 * param_1[8]);
  fVar1 = (float)param_2[0xd];
  fVar2 = (float)param_2[0xc];
  fVar3 = (float)param_2[0xe];
  *(uint64_t *)(param_1 + 0xc) =
       CONCAT44(fVar2 * param_1[1] + fVar1 * param_1[4] + fVar3 * param_1[7],
                fVar1 * param_1[3] + fVar2 * *param_1 + fVar3 * param_1[6]) ^ 0x8000000080000000;
  param_1[0xe] = -(fVar1 * param_1[5] + fVar2 * param_1[2] + fVar3 * param_1[8]);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




