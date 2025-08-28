#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part093.c - 2 个函数

// 函数: void FUN_180895e7e(void)
void FUN_180895e7e(void)

{
  return;
}



int32_t FUN_180895ef0(uint64_t param_1)

{
  int iVar1;
  int32_t auStackX_10 [6];
  
  auStackX_10[0] = 0;
  iVar1 = func_0x00018088c500(param_1,auStackX_10);
  if (iVar1 == 0) {
    return auStackX_10[0];
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180895f20(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar3 = (uint64_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0xc - 1U < 0x3fffffff) {
      puVar3 = (uint64_t *)
               FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0xc,&unknown_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar3 != (uint64_t *)0x0) {
        iVar1 = (int)param_1[1];
        lVar4 = (longlong)iVar1;
        if ((iVar1 != 0) && (lVar2 = *param_1, 0 < iVar1)) {
          puVar5 = puVar3;
          do {
            *puVar5 = *(uint64_t *)((lVar2 - (longlong)puVar3) + (longlong)puVar5);
            *(int32_t *)(puVar5 + 1) =
                 *(int32_t *)((lVar2 - (longlong)puVar3) + 8 + (longlong)puVar5);
            puVar5 = (uint64_t *)((longlong)puVar5 + 0xc);
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        goto LAB_180895fdc;
      }
    }
    return 0x26;
  }
LAB_180895fdc:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = (longlong)puVar3;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180895f44(uint64_t param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  puVar3 = (uint64_t *)0x0;
  if (unaff_EDI == 0) {
LAB_180895fdc:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (longlong)puVar3;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0xc - 1U < 0x3fffffff) {
    puVar3 = (uint64_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0xc,&unknown_var_8432_ptr,0xf4
                           ,0);
    if (puVar3 != (uint64_t *)0x0) {
      iVar1 = (int)unaff_RBX[1];
      lVar4 = (longlong)iVar1;
      if ((iVar1 != 0) && (lVar2 = *unaff_RBX, 0 < iVar1)) {
        puVar5 = puVar3;
        do {
          *puVar5 = *(uint64_t *)((lVar2 - (longlong)puVar3) + (longlong)puVar5);
          *(int32_t *)(puVar5 + 1) =
               *(int32_t *)((lVar2 - (longlong)puVar3) + 8 + (longlong)puVar5);
          puVar5 = (uint64_t *)((longlong)puVar5 + 0xc);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      goto LAB_180895fdc;
    }
  }
  return 0x26;
}



uint64_t FUN_180896027(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180896040(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    if (param_2 * 0xc - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0xc,&unknown_var_8432_ptr,
                            0xf4,0,0,1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1] * 0xc);
        }
        goto LAB_1808960d4;
      }
    }
    return 0x26;
  }
LAB_1808960d4:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180896064(uint64_t param_1,int param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808960d4:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0xc - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0xc,&unknown_var_8432_ptr,0xf4,
                          0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1] * 0xc);
      }
      goto LAB_1808960d4;
    }
  }
  return 0x26;
}



uint64_t FUN_18089611f(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180896140(longlong param_1)

{
  byte *pbVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int32_t *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  int aiStackX_8 [2];
  uint auStackX_10 [2];
  uint64_t uStackX_18;
  int8_t auStackX_20 [8];
  ulonglong uStack_118;
  uint64_t uStack_110;
  longlong *plStack_108;
  ulonglong uStack_100;
  int aiStack_f8 [2];
  void *puStack_f0;
  int32_t uStack_e8;
  int32_t uStack_e0;
  void *puStack_d8;
  int32_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c0;
  void *puStack_b8;
  int32_t uStack_b0;
  int32_t uStack_a8;
  uint uStack_a0;
  void *puStack_98;
  int32_t uStack_90;
  int32_t uStack_88;
  int8_t uStack_80;
  int8_t auStack_78 [8];
  int8_t auStack_70 [8];
  int8_t auStack_68 [40];
  
  uVar8 = *(uint *)(param_1 + 0x6c);
  uVar6 = 0;
  iVar4 = 0;
  if ((uVar8 >> 0x1a & 1) == 0) goto LAB_1808963ec;
  if ((uVar8 & 1) == 0) {
    plStack_108 = (longlong *)(param_1 + 0x70);
    uStack_118 = 0;
    iVar16 = 0;
    auStackX_10[0] = 0;
    uStack_110 = 0;
    uStack_100 = 0xffffffffffffffff;
    aiStack_f8[0] = -1;
    FUN_1807d1650(plStack_108,&uStack_100,aiStack_f8);
    aiStackX_8[0] = aiStack_f8[0];
    if (aiStack_f8[0] != -1) {
      plVar13 = plStack_108;
      uVar10 = uVar6;
      iVar11 = (int)uStack_100;
      do {
        do {
          iVar16 = (int)uVar10;
          lVar5 = plVar13[2];
          lVar15 = (longlong)aiStackX_8[0];
          iVar4 = *(int *)(lVar5 + 8 + lVar15 * 0x10);
          if (iVar4 == 2) {
            iVar4 = func_0x00018088c530(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),&uStackX_18);
            uVar3 = uStackX_18;
            plVar13 = plStack_108;
            if ((iVar4 == 0) &&
               (iVar4 = func_0x0001808c7ed0(uStackX_18), plVar13 = plStack_108, 0 < iVar4)) {
              do {
                uStack_e0 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
                uStack_e8 = 0;
                puStack_f0 = &unknown_var_6120_ptr;
                FUN_180892120(&puStack_f0,*(uint64_t *)(param_1 + 0x58));
                iVar4 = func_0x0001808c7ed0(uVar3);
              } while (0 < iVar4);
              uVar6 = (ulonglong)auStackX_10[0];
              plVar13 = plStack_108;
            }
          }
          else if (iVar4 == 3) {
            iVar4 = func_0x00018088c530(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),auStackX_20);
            plVar13 = plStack_108;
            if (iVar4 == 0) {
              puStack_d8 = &unknown_var_7624_ptr;
              uStack_c8 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              uStack_d0 = 0;
              uStack_c0 = 1;
              FUN_180893420(&puStack_d8,*(uint64_t *)(param_1 + 0x58));
              puStack_f0 = &unknown_var_8024_ptr;
              uStack_e0 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              uStack_e8 = 0;
              FUN_1808920e0(&puStack_f0,*(uint64_t *)(param_1 + 0x58));
              plVar13 = plStack_108;
            }
          }
          else if (iVar4 == 5) {
            iVar4 = func_0x00018088c530(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),auStack_78);
            plVar13 = plStack_108;
            if (iVar4 == 0) {
              puStack_d8 = &unknown_var_9536_ptr;
              uStack_c8 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              uStack_d0 = 0;
              uStack_c0 = 0x3f800000;
              FUN_180891d40(&puStack_d8,*(uint64_t *)(param_1 + 0x58));
              puStack_98 = &unknown_var_9656_ptr;
              uStack_88 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              uStack_90 = 0;
              uStack_80 = 0;
              FUN_180891cf0(&puStack_98,*(uint64_t *)(param_1 + 0x58));
              puStack_b8 = &unknown_var_9776_ptr;
              uStack_a8 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              uStack_b0 = 0;
              uStack_a0 = uStack_a0 & 0xffffff00;
              FUN_180891ca0(&puStack_b8,*(uint64_t *)(param_1 + 0x58));
              puStack_f0 = &unknown_var_9280_ptr;
              uStack_e0 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              uStack_e8 = 0;
              FUN_180891de0(&puStack_f0,*(uint64_t *)(param_1 + 0x58));
              plVar13 = plStack_108;
            }
          }
          else if (iVar4 == 6) {
            iVar4 = func_0x00018088c530(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),auStack_70);
            plVar13 = plStack_108;
            if (iVar4 == 0) {
              puStack_b8 = &unknown_var_24_ptr;
              uStack_a8 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
              uStack_b0 = 0;
              uStack_a0 = 0x3f800000;
              FUN_180894300(&puStack_b8,*(uint64_t *)(param_1 + 0x58));
              plVar13 = plStack_108;
            }
          }
          else if ((iVar4 == 7) &&
                  (iVar4 = func_0x00018088c530(*(int32_t *)(lVar5 + 0xc + lVar15 * 0x10),
                                               auStack_68), plVar13 = plStack_108, iVar4 == 0)) {
            uVar2 = *(int32_t *)(lVar5 + 0xc + lVar15 * 0x10);
            iVar7 = (int)uVar6 + 1;
            iVar4 = iVar16;
            if (iVar16 < 0) {
              iVar4 = -iVar16;
            }
            iVar14 = (int)uVar6;
            if (iVar4 < iVar7) {
              if (iVar16 < 0) {
                iVar16 = -iVar16;
              }
              iVar16 = (int)((float)iVar16 * 1.5);
              iVar4 = iVar7;
              if (iVar7 <= iVar16) {
                iVar4 = iVar16;
              }
              if (iVar4 < 0x10) {
                iVar16 = 0x10;
              }
              else if (iVar16 < iVar7) {
                iVar16 = iVar7;
              }
              uVar8 = FUN_18084c470(&uStack_118,iVar16);
              uVar6 = (ulonglong)uVar8;
              iVar4 = (int)uStack_110;
              if (uVar8 != 0) {
                uVar8 = uStack_110._4_4_;
                if ((longlong)uStack_110 < 0) {
                  uVar8 = -uStack_110._4_4_;
                }
                lVar5 = (longlong)(int)uStack_110;
                uVar9 = uStack_110._4_4_;
                if ((int)uVar8 < 0) {
                  if (0 < (int)uStack_110) {
                    return uVar6;
                  }
                  if ((0 < (int)uStack_110._4_4_) && (uStack_118 != 0)) {
                    // WARNING: Subroutine does not return
                    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uStack_118,&unknown_var_8432_ptr,
                                  0x100,1);
                  }
                  uStack_118 = 0;
                  uStack_110 = 0;
                  uVar9 = 0;
                }
                if (iVar4 < 0) {
                  puVar12 = (int32_t *)(uStack_118 + lVar5 * 4);
                  lVar5 = (longlong)-iVar4;
                  if (iVar4 < 0) {
                    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
                      *puVar12 = 0;
                      puVar12 = puVar12 + 1;
                    }
                  }
                }
                uStack_110 = uStack_110 & 0xffffffff00000000;
                if ((int)uVar9 < 0) {
                  uVar9 = -uVar9;
                }
                if (uVar9 == 0) {
                  return uVar6;
                }
                FUN_18084c470(&uStack_118,0);
                return uVar6;
              }
              uVar10 = (ulonglong)uStack_110._4_4_;
              iVar14 = (int)uStack_110;
            }
            auStackX_10[0] = iVar14 + 1;
            uVar6 = (ulonglong)auStackX_10[0];
            uStack_110 = CONCAT44(uStack_110._4_4_,auStackX_10[0]);
            *(int32_t *)(uStack_118 + (longlong)iVar14 * 4) = uVar2;
            plVar13 = plStack_108;
          }
          iVar4 = (int)uVar10;
          iVar16 = (int)uVar6;
        } while ((aiStackX_8[0] != -1) &&
                (aiStackX_8[0] = *(int *)(plVar13[2] + 4 + lVar15 * 0x10), aiStackX_8[0] != -1));
        iVar7 = iVar11 + 1;
        bVar17 = iVar11 != -1;
        iVar11 = 0;
        if (bVar17) {
          iVar11 = iVar7;
        }
        if (iVar11 != (int)plVar13[1]) {
          lVar5 = (longlong)iVar11;
          do {
            if (*(int *)(*plVar13 + lVar5 * 4) != -1) {
              aiStackX_8[0] = *(int *)(*plVar13 + (longlong)iVar11 * 4);
              goto LAB_1808962af;
            }
            iVar11 = iVar11 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != (int)plVar13[1]);
        }
        aiStackX_8[0] = -1;
        iVar11 = aiStackX_8[0];
LAB_1808962af:
      } while (aiStackX_8[0] != -1);
      aiStackX_8[0] = -1;
      uVar6 = uStack_118;
    }
    lVar5 = (longlong)(iVar16 + -1);
    if (-1 < iVar16 + -1) {
      do {
        uStack_100 = uStack_100 & 0xffffffff00000000;
        plStack_108 = (longlong *)&unknown_var_4128_ptr;
        aiStack_f8[0] = *(int *)(uVar6 + lVar5 * 4);
        FUN_180891af0(&plStack_108,*(uint64_t *)(param_1 + 0x58));
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    iVar11 = iVar4;
    if (iVar4 < 0) {
      iVar11 = -iVar4;
    }
    if (iVar11 < 0) {
      if (0 < iVar16) goto LAB_18089638e;
      if ((0 < iVar4) && (uVar6 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar6,&unknown_var_8432_ptr,0x100,1);
      }
      uStack_118 = 0;
      uStack_110 = 0;
      uVar6 = 0;
      iVar4 = 0;
    }
    if (iVar16 < 0) {
      lVar5 = (longlong)-iVar16;
      puVar12 = (int32_t *)(uVar6 + (longlong)iVar16 * 4);
      if (iVar16 < 0) {
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
    }
    uStack_110 = uStack_110 & 0xffffffff00000000;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 != 0) {
      FUN_18084c470(&uStack_118,0);
    }
  }
LAB_18089638e:
  uVar6 = 0;
  uVar10 = uVar6;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      uVar8 = (int)uVar10 + 1;
      pbVar1 = (byte *)(uVar6 + 0xb + *(longlong *)(param_1 + 0x18));
      *pbVar1 = *pbVar1 & 0xfe;
      uVar6 = uVar6 + 0xc;
      uVar10 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x20));
  }
  iVar4 = FUN_180744cc0(param_1 + 0x70);
  if ((iVar4 == 0) && (iVar4 = FUN_180895130(param_1 + 0x80), iVar4 == 0)) {
    *(int32_t *)(param_1 + 0x90) = 0xffffffff;
    *(int32_t *)(param_1 + 0x94) = 0;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfbffffff;
  uVar8 = *(uint *)(param_1 + 0x6c);
LAB_1808963ec:
  if ((uVar8 >> 0x19 & 1) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar6 = FUN_18073c4c0(*(uint64_t *)(param_1 + 0x60),param_1 + 0xa0,0);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if ((*(uint *)(param_1 + 0x6c) >> 0x18 & 1) == 0) {
      if ((*(int *)(param_1 + 0xb0) == -1) || (*(int *)(param_1 + 0xac) <= *(int *)(param_1 + 0xb0))
         ) {
        aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,1);
        auStackX_10[0] = 0;
        do {
          uVar6 = FUN_180895360(param_1,aiStackX_8,auStackX_10);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        } while ((char)aiStackX_8[0] != (char)uVar6);
      }
      else {
        *(uint64_t *)(param_1 + 0xa8) = 0;
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x6000000;
        *(uint64_t *)(param_1 + 0x98) = 0;
        *(uint64_t *)(param_1 + 0xa0) = 0;
      }
    }
    else if ((*(longlong *)(param_1 + 0x98) != 0) && (lVar5 != 0)) {
      *(longlong *)(param_1 + 0x98) =
           (*(longlong *)(param_1 + 0x98) - lVar5) + *(longlong *)(param_1 + 0xa0);
    }
  }
  return 0;
}



uint64_t * FUN_180896800(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_7840_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}



uint64_t * FUN_180896830(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_7872_ptr;
  FUN_180840270(param_1 + 5);
  *param_1 = &unknown_var_7840_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38);
  }
  return param_1;
}





// 函数: void FUN_180896880(longlong *param_1)
void FUN_180896880(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 == 0) {
    *(int8_t *)(param_1 + 4) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808968a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  uint64_t uVar4;
  int iVar5;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (iVar5 = *(int *)(param_1 + 0x30), 0 < iVar5)) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0x40000 < iVar5) {
      lVar2 = func_0x00018076b3e0(lVar1 + 0x40000,10);
      if (lVar2 != 0) {
        iVar5 = ((int)lVar2 - (int)lVar1) + 1;
      }
    }
    piVar3 = (int *)FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar5 + 0x19,
                                  &unknown_var_9216_ptr,0x278,0,0,1);
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    *piVar3 = iVar5 + 0x19;
    *(int16_t *)(piVar3 + 2) = 0x508;
    *(int8_t *)((longlong)piVar3 + 10) = 3;
    piVar3[3] = 1;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x90);
    uVar4 = func_0x0001808e3470(*(uint64_t *)(lVar2 + 0x4d0),*(int32_t *)(lVar2 + 0x774));
    *(uint64_t *)(piVar3 + 4) = uVar4;
                    // WARNING: Subroutine does not return
    memcpy(piVar3 + 6,lVar1,(longlong)iVar5);
  }
  return 0;
}



int FUN_180896a30(longlong param_1,longlong param_2,int param_3)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(int32_t *)(param_1 + 0x14);
  iVar2 = func_0x00018074b7d0(param_2,param_3,*(int32_t *)(param_1 + 0x10));
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180896aa0(longlong param_1,longlong param_2,int param_3)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  iVar2 = FUN_18074b880(param_2,param_3,&unknown_var_8008_ptr);
  iVar3 = FUN_18074b880(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074be80(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180896b20(longlong param_1,longlong param_2,int param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(int32_t *)(param_1 + 0x14);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  iVar3 = FUN_18074b880(param_2,param_3,&unknown_var_8128_ptr);
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b880(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



uint64_t FUN_180896c10(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18088ee20(param_3,param_1 + 0x10);
  if ((int)uVar1 == 0) {
    *(int32_t *)(param_1 + 0x14) = 0;
    if ((1 < *(int *)(param_1 + 0x10)) && (uVar1 = FUN_18088ee60(param_3), (int)uVar1 != 0)) {
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



