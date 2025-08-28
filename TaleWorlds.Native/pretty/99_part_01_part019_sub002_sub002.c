#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part019_sub002_sub002.c - 1 个函数

// 函数: void FUN_1800b2450(uint64_t param_1,longlong *param_2,longlong param_3,int *param_4)
void FUN_1800b2450(uint64_t param_1,longlong *param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong *plVar8;
  void *puVar9;
  longlong lVar10;
  int8_t auStack_2a8 [32];
  int32_t uStack_288;
  longlong ***ppplStack_280;
  longlong **pplStack_278;
  longlong lStack_270;
  longlong *plStack_268;
  longlong *plStack_260;
  longlong **pplStack_258;
  int8_t *puStack_250;
  longlong **pplStack_248;
  uint64_t uStack_240;
  longlong *plStack_238;
  int8_t auStack_230 [56];
  longlong *aplStack_1f8 [7];
  int8_t auStack_1c0 [152];
  longlong **pplStack_128;
  int8_t *puStack_120;
  int32_t uStack_118;
  int8_t auStack_110 [128];
  int32_t uStack_90;
  longlong lStack_88;
  uint64_t uStack_80;
  longlong *plStack_68;
  ulonglong uStack_48;
  
  lVar2 = _DAT_180c86930;
  uStack_240 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_2a8;
  *param_2 = 0;
  uStack_288 = 1;
  lVar10 = lVar2 + 0x950;
  lStack_270 = lVar10;
  plStack_238 = param_2;
  iVar3 = _Mtx_lock(lVar10);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  if (param_4[7] == 1) {
LAB_1800b26ac:
    if (*param_2 == 0) {
      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
      plVar6 = (longlong *)FUN_18023a2e0(uVar5,1);
      if (plVar6 != (longlong *)0x0) {
        plStack_260 = plVar6;
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      plStack_260 = (longlong *)*param_2;
      *param_2 = (longlong)plVar6;
      if (plStack_260 != (longlong *)0x0) {
        (**(code **)(*plStack_260 + 0x38))();
      }
      FUN_1800a5750(*param_2 + 0xd0,param_4);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 8) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 8);
      }
      (**(code **)(*(longlong *)(*param_2 + 0x10) + 0x10))((longlong *)(*param_2 + 0x10),puVar9);
      lVar1 = *param_2;
      iVar3 = param_4[1];
      *(short *)(lVar1 + 0x32c) = (short)*param_4;
      *(short *)(lVar1 + 0x32e) = (short)iVar3;
      *(short *)(lVar1 + 0x332) = (short)param_4[2];
      iVar3 = param_4[3];
      *(char *)(lVar1 + 0x335) = (char)iVar3;
      *(int *)(lVar1 + 0x35c) = iVar3;
      *(int *)(lVar1 + 0x324) = param_4[4];
      iVar3 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
      iVar4 = _Thrd_id();
      if (iVar4 == iVar3) {
        lVar1 = *param_2;
        pplStack_258 = aplStack_1f8;
        uVar5 = FUN_18009eae0(aplStack_1f8,param_4);
        FUN_1800a5110(_DAT_180c86938,uVar5,lVar1);
      }
      else {
        pplVar7 = (longlong **)FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
        plVar6 = (longlong *)*param_2;
        puStack_250 = auStack_230;
        ppplStack_280 = (longlong ***)pplVar7;
        plVar8 = (longlong *)FUN_18009eae0(auStack_230,param_4);
        plStack_260 = plVar8;
        FUN_180049830(pplVar7);
        *pplVar7 = (longlong *)&unknown_var_8440_ptr;
        FUN_18009eae0(pplVar7 + 0x18,plVar8);
        pplVar7[0x1f] = plVar6;
        if ((longlong *)plVar8[5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar8[5] + 0x38))();
        }
        pplStack_258 = pplVar7;
        (*(code *)(*pplVar7)[5])(pplVar7);
        lVar1 = _DAT_180c82868;
        ppplStack_280 = &pplStack_278;
        pplStack_278 = pplVar7;
        (*(code *)(*pplVar7)[5])(pplVar7);
        FUN_18005e370(lVar1,&pplStack_278);
        (*(code *)(*pplVar7)[7])(pplVar7);
      }
      if (param_4[7] != 1) {
        FUN_1800b88d0(lVar2 + 0x700,param_2);
      }
      goto LAB_1800b29e2;
    }
  }
  else {
    plVar6 = *(longlong **)(lVar2 + 0x700);
    if (*param_2 == 0) {
      do {
        lVar10 = lStack_270;
        if (plVar6 == *(longlong **)(lVar2 + 0x708)) break;
        if (((((*(int *)(*plVar6 + 8) == 1) &&
              (lVar10 = *plVar6, *(int *)(lVar10 + 0xd0) == *param_4)) &&
             (*(int *)(lVar10 + 0xd4) == param_4[1])) &&
            (((*(int *)(lVar10 + 0xd8) == param_4[2] && (*(int *)(lVar10 + 0xdc) == param_4[3])) &&
             ((*(int *)(lVar10 + 0xe0) == param_4[4] &&
              ((*(int *)(lVar10 + 0xe4) == param_4[5] && (*(int *)(lVar10 + 0xe8) == param_4[6])))))
             ))) && ((*(int *)(lVar10 + 0xec) == param_4[7] &&
                     (((((*(char *)(lVar10 + 0xf0) == (char)param_4[8] &&
                         (*(char *)(lVar10 + 0xf1) == *(char *)((longlong)param_4 + 0x21))) &&
                        (*(char *)(lVar10 + 0xf2) == *(char *)((longlong)param_4 + 0x22))) &&
                       ((*(char *)(lVar10 + 0xf3) == *(char *)((longlong)param_4 + 0x23) &&
                        (*(int *)(lVar10 + 0x100) == param_4[0xc])))) &&
                      ((*(char *)(lVar10 + 0x104) == (char)param_4[0xd] &&
                       (param_4[0xc] == *(int *)(lVar10 + 0x1e8))))))))) {
          FUN_180056f10(param_2);
          puVar9 = &system_buffer_ptr;
          if (*(void **)(param_3 + 8) != (void *)0x0) {
            puVar9 = *(void **)(param_3 + 8);
          }
          (**(code **)(*(longlong *)(*param_2 + 0x10) + 0x10))((longlong *)(*param_2 + 0x10),puVar9)
          ;
          lVar10 = *param_2;
          iVar3 = param_4[1];
          *(short *)(lVar10 + 0x32c) = (short)*param_4;
          *(short *)(lVar10 + 0x32e) = (short)iVar3;
          *(short *)(lVar10 + 0x332) = (short)param_4[2];
          iVar3 = param_4[3];
          *(char *)(lVar10 + 0x335) = (char)iVar3;
          *(int *)(lVar10 + 0x35c) = iVar3;
          *(int *)(lVar10 + 0x324) = param_4[4];
          FUN_18023a940(*param_2);
          puStack_250 = auStack_1c0;
          ppplStack_280 = (longlong ***)FUN_180049b30(auStack_1c0,param_3);
          *ppplStack_280 = (longlong **)&unknown_var_720_ptr;
        }
        plVar6 = plVar6 + 1;
        lVar10 = lStack_270;
      } while (*param_2 == 0);
      goto LAB_1800b26ac;
    }
  }
  if (*(longlong *)(param_4 + 10) != 0) {
    ppplStack_280 = &pplStack_128;
    pplStack_128 = (longlong **)&unknown_var_3432_ptr;
    puStack_120 = auStack_110;
    uStack_118 = 0;
    auStack_110[0] = 0;
    uStack_90 = 4;
    lStack_88 = *param_2;
    uStack_80 = 0;
    plStack_68 = *(longlong **)(param_4 + 10);
    if (*(code **)(*plStack_68 + 0x28) == (code *)&unknown_var_3248_ptr) {
      LOCK();
      *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
      UNLOCK();
      lVar10 = lStack_270;
    }
    else {
      (**(code **)(*plStack_68 + 0x28))();
    }
    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
    plVar6 = (longlong *)FUN_18005ce30(uVar5,&pplStack_128);
    pplStack_248 = (longlong **)plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    lVar2 = _DAT_180c82868;
    pplStack_258 = &plStack_268;
    plStack_268 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    FUN_18005e370(lVar2,&plStack_268);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    pplStack_248 = (longlong **)&pplStack_128;
    pplStack_128 = (longlong **)&unknown_var_720_ptr;
  }
LAB_1800b29e2:
  iVar3 = _Mtx_unlock(lVar10);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_2a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1800b2a30(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  byte *pbVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar9 = _DAT_180c86930;
  lVar1 = _DAT_180c86930 + 0x9f0;
  iVar10 = _Mtx_lock(lVar1);
  if (iVar10 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar10);
  }
  iVar10 = 0;
  plVar2 = (longlong *)(lVar9 + 0x720);
  lVar15 = *plVar2;
  if (*(longlong *)(lVar9 + 0x728) - lVar15 >> 3 != 0) {
    lVar14 = 0;
    do {
      plVar6 = *(longlong **)(lVar14 + lVar15);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      iVar5 = *(int *)(param_2 + 0x10);
      iVar13 = (int)plVar6[0x73];
      if (iVar5 == iVar13) {
        if (iVar5 != 0) {
          pbVar11 = *(byte **)(param_2 + 8);
          lVar15 = plVar6[0x72] - (longlong)pbVar11;
          do {
            pbVar3 = pbVar11 + lVar15;
            iVar13 = (uint)*pbVar11 - (uint)*pbVar3;
            if (iVar13 != 0) break;
            pbVar11 = pbVar11 + 1;
          } while (*pbVar3 != 0);
        }
LAB_1800b2afd:
        if (iVar13 == 0) {
          lVar15 = *plVar2;
          uVar12 = *(longlong *)(lVar9 + 0x728) - lVar15 >> 3;
          if (1 < uVar12) {
            plVar4 = (longlong *)(lVar15 + (longlong)iVar10 * 8);
            plVar7 = *(longlong **)(lVar15 + -8 + uVar12 * 8);
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x28))(plVar7);
            }
            plVar8 = (longlong *)*plVar4;
            *plVar4 = (longlong)plVar7;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x38))();
            }
          }
          FUN_1800b8630(plVar2,(*(longlong *)(lVar9 + 0x728) - *plVar2 >> 3) + -1);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6);
          }
          break;
        }
      }
      else if (iVar5 == 0) goto LAB_1800b2afd;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      iVar10 = iVar10 + 1;
      lVar14 = lVar14 + 8;
      lVar15 = *plVar2;
    } while ((ulonglong)(longlong)iVar10 < (ulonglong)(*(longlong *)(lVar9 + 0x728) - lVar15 >> 3));
  }
  uVar12 = _Mtx_unlock(lVar1);
  if ((int)uVar12 != 0) {
    uVar12 = __Throw_C_error_std__YAXH_Z(uVar12 & 0xffffffff);
  }
  return uVar12 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1800b2bd0(uint64_t param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = *param_2;
  iVar3 = 0;
  iVar5 = 0;
  if (param_2[1] - lVar6 >> 3 != 0) {
    lVar4 = 0;
    do {
      lVar6 = *(longlong *)(lVar4 + lVar6);
      if (((*(int *)(lVar6 + 8) == 1) && ((*(uint *)(lVar6 + 0x328) & 0x20000000) == 0)) &&
         (*(longlong *)(lVar6 + 0x340) + 5U < (ulonglong)(longlong)*(int *)(_DAT_180c86870 + 0x224))
         ) {
        lVar6 = *param_2;
        lVar2 = param_2[1];
        uVar1 = lVar2 - lVar6 >> 3;
        if (((longlong)iVar5 != uVar1 - 1) && (1 < uVar1)) {
          FUN_180080810(lVar6 + (longlong)iVar5 * 8,lVar6 + (uVar1 - 1) * 8);
          lVar2 = param_2[1];
          lVar6 = *param_2;
        }
        FUN_1800b8630(param_2,(lVar2 - lVar6 >> 3) + -1);
        iVar3 = iVar3 + 1;
      }
      else {
        iVar5 = iVar5 + 1;
        lVar4 = lVar4 + 8;
      }
      lVar6 = *param_2;
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(param_2[1] - lVar6 >> 3));
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1800b2bfd(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *unaff_RBX;
  uint unaff_EBP;
  ulonglong uVar3;
  int unaff_EDI;
  
  uVar3 = (ulonglong)unaff_EBP;
  do {
    lVar1 = *(longlong *)(uVar3 + param_3);
    if (((*(int *)(lVar1 + 8) == 1) && ((*(uint *)(lVar1 + 0x328) & 0x20000000) == 0)) &&
       (*(longlong *)(lVar1 + 0x340) + 5U < (ulonglong)(longlong)*(int *)(_DAT_180c86870 + 0x224)))
    {
      lVar1 = *unaff_RBX;
      uVar2 = unaff_RBX[1] - lVar1 >> 3;
      if (((longlong)unaff_EDI != uVar2 - 1) && (1 < uVar2)) {
        FUN_180080810(lVar1 + (longlong)unaff_EDI * 8,lVar1 + (uVar2 - 1) * 8);
      }
      FUN_1800b8630();
      unaff_EBP = unaff_EBP + 1;
    }
    else {
      unaff_EDI = unaff_EDI + 1;
      uVar3 = uVar3 + 8;
    }
    param_3 = *unaff_RBX;
  } while ((ulonglong)(longlong)unaff_EDI < (ulonglong)(unaff_RBX[1] - param_3 >> 3));
  return unaff_EBP;
}



int32_t FUN_1800b2cb2(void)

{
  int32_t unaff_EBP;
  
  return unaff_EBP;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800b2cd0(longlong *param_1,longlong *param_2,longlong param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  longlong *plVar10;
  int iVar11;
  void *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong *plStackX_18;
  int32_t uVar16;
  uint64_t uVar17;
  longlong lVar18;
  void *puStack_60;
  byte *pbStack_58;
  uint uStack_50;
  
  lVar14 = _DAT_180c86930;
  uVar17 = 0xfffffffffffffffe;
  lVar15 = 0;
  uVar16 = 0;
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  FUN_1806279c0(&puStack_60,param_4,param_3,param_4,0,0xfffffffffffffffe);
  uVar13 = uStack_50 + 1;
  FUN_1806277c0(&puStack_60,uVar13);
  (pbStack_58 + uStack_50)[0] = 0x2f;
  (pbStack_58 + uStack_50)[1] = 0;
  uStack_50 = uVar13;
  if (0 < *(int *)(param_3 + 0x10)) {
    FUN_1806277c0(&puStack_60,uVar13 + *(int *)(param_3 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(pbStack_58 + uStack_50,*(uint64_t *)(param_3 + 8),
           (longlong)(*(int *)(param_3 + 0x10) + 1));
  }
  cVar7 = FUN_180624af0(&puStack_60);
  if (cVar7 == '\0') {
    *param_2 = 0;
    puStack_60 = &unknown_var_3456_ptr;
    if (pbStack_58 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    plStackX_8 = (longlong *)0x0;
    lVar1 = lVar14 + 0x9f0;
    lVar18 = lVar1;
    iVar8 = _Mtx_lock(lVar1);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
    plVar2 = (longlong *)(lVar14 + 0x720);
    plVar10 = (longlong *)*plVar2;
    iVar8 = (int)(*(longlong *)(lVar14 + 0x728) - (longlong)plVar10 >> 3);
    plStackX_18 = plVar2;
    if (0 < iVar8) {
      iVar4 = *(int *)(param_3 + 0x10);
      do {
        plVar6 = (longlong *)*plVar10;
        iVar5 = (int)plVar6[4];
        iVar11 = iVar4;
        if (iVar5 == iVar4) {
          if (iVar5 != 0) {
            pbVar9 = (byte *)plVar6[3];
            lVar14 = *(longlong *)(param_3 + 8) - (longlong)pbVar9;
            do {
              pbVar3 = pbVar9 + lVar14;
              iVar11 = (uint)*pbVar9 - (uint)*pbVar3;
              if (iVar11 != 0) break;
              pbVar9 = pbVar9 + 1;
            } while (*pbVar3 != 0);
          }
LAB_1800b2e4d:
          if (iVar11 == 0) {
            uVar13 = *(uint *)(plVar6 + 0x73);
            if (uStack_50 == uVar13) {
              if (uStack_50 != 0) {
                pbVar9 = pbStack_58;
                do {
                  pbVar3 = pbVar9 + (plVar6[0x72] - (longlong)pbStack_58);
                  uVar13 = (uint)*pbVar9 - (uint)*pbVar3;
                  if (uVar13 != 0) break;
                  pbVar9 = pbVar9 + 1;
                } while (*pbVar3 != 0);
              }
            }
            else if (uStack_50 != 0) goto LAB_1800b2e93;
            if (uVar13 == 0) {
              *param_2 = (longlong)plVar6;
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x28))(plVar6);
              }
              iVar8 = _Mtx_unlock(lVar1);
              if (iVar8 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar8);
              }
              puStack_60 = &unknown_var_3456_ptr;
              if (pbStack_58 == (byte *)0x0) {
                return param_2;
              }
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
          }
        }
        else if (iVar5 == 0) goto LAB_1800b2e4d;
LAB_1800b2e93:
        lVar15 = lVar15 + 1;
        plVar10 = plVar10 + 1;
      } while (lVar15 < iVar8);
    }
    uVar17 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3,uVar16,uVar17,lVar18);
    plVar10 = (longlong *)FUN_18023a2e0(uVar17,2);
    if (plVar10 != (longlong *)0x0) {
      plStackX_18 = plVar10;
      (**(code **)(*plVar10 + 0x28))(plVar10);
    }
    plStackX_18 = (longlong *)0x0;
    plStackX_8 = plVar10;
    FUN_1800b88d0(plVar2,&plStackX_8);
    iVar8 = _Mtx_unlock(lVar1);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
    plVar2 = plStackX_8;
    puVar12 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar12 = *(void **)(param_3 + 8);
    }
    (**(code **)(plStackX_8[2] + 0x10))(plStackX_8 + 2,puVar12);
    *(int32_t *)(plVar2 + 0x65) = 0x83;
    pbVar9 = &system_buffer_ptr;
    if (pbStack_58 != (byte *)0x0) {
      pbVar9 = pbStack_58;
    }
    (**(code **)(plVar2[0x71] + 0x10))(plVar2 + 0x71,pbVar9);
    FUN_1802a83f0(plVar2 + 0x71,(longlong)plVar2 + 0x2e4);
    if (*(int *)((longlong)plVar2 + 0x324) == 0) {
      puVar12 = &system_buffer_ptr;
      if ((void *)plVar2[3] != (void *)0x0) {
        puVar12 = (void *)plVar2[3];
      }
      FUN_180626f80(&unknown_var_8536_ptr,puVar12);
    }
    *(int8_t *)((longlong)plVar2 + 0x335) = 1;
    *(int32_t *)((longlong)plVar2 + 0x35c) = 1;
    *param_2 = (longlong)plVar2;
    plStackX_8 = (longlong *)0x0;
    puStack_60 = &unknown_var_3456_ptr;
    if (pbStack_58 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800b3060(uint64_t param_1,uint64_t *param_2,longlong param_3,uint64_t param_4)

{
  longlong *plVar1;
  void *puVar2;
  
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_3 + 8);
  }
  plVar1 = (longlong *)
           FUN_1802abc50(_DAT_180c86930 + 0x1d0,puVar2,param_3,param_4,0,0xfffffffffffffffe);
  *param_2 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800b30d0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  void *puVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (*(int *)(param_3 + 0x10) == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar2 = *(void **)(param_3 + 8);
    }
    plVar1 = (longlong *)
             FUN_1802abc50((uint64_t *)(param_1 + 0x1d0),puVar2,param_3,param_4,0,
                           0xfffffffffffffffe);
    if (plVar1 == (longlong *)0x0) {
      if (param_4 == '\0') {
        *param_2 = 0;
      }
      else {
        puVar2 = &system_buffer_ptr;
        if (*(void **)(param_3 + 8) != (void *)0x0) {
          puVar2 = *(void **)(param_3 + 8);
        }
        FUN_180627020(&unknown_var_7456_ptr,puVar2);
        if (*(uint *)(param_3 + 0x10) < 8) {
LAB_1800b31ae:
          FUN_1800be9a0(_DAT_180c86898,param_2,0);
        }
        else {
          do {
            if ((&unknown_var_7440_ptr + lVar3)[*(longlong *)(param_3 + 8) + -0x180a029f0] !=
                (&unknown_var_7440_ptr)[lVar3]) goto LAB_1800b31ae;
            lVar3 = lVar3 + 1;
          } while (lVar3 < 8);
          plVar1 = (longlong *)**(longlong **)(param_1 + 0x1d0);
          *param_2 = (longlong)plVar1;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x28))();
          }
        }
      }
    }
    else {
      *param_2 = (longlong)plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
  }
  return param_2;
}



longlong * FUN_1800b31f0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  void *puVar2;
  
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_3 + 8);
  }
  plVar1 = (longlong *)
           FUN_1802abc50((uint64_t *)(param_1 + 0x138),puVar2,param_3,param_4,0,0xfffffffffffffffe
                        );
  if (plVar1 == (longlong *)0x0) {
    if (param_4 == '\0') {
      *param_2 = 0;
    }
    else {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_3 + 8) != (void *)0x0) {
        puVar2 = *(void **)(param_3 + 8);
      }
      FUN_180626f80(&unknown_var_7520_ptr,puVar2);
      plVar1 = (longlong *)**(longlong **)(param_1 + 0x138);
      *param_2 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
    }
  }
  else {
    *param_2 = (longlong)plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *
FUN_1800b32c0(uint64_t param_1,longlong *param_2,longlong param_3,char param_4,uint64_t param_5)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  void *puVar4;
  longlong *plStack_18;
  uint64_t uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  FUN_1800b33d0();
  if (*param_2 == 0) {
    if (*(int *)(param_3 + 0x10) == 0xb) {
      iVar2 = strcmp(*(uint64_t *)(param_3 + 8),&unknown_var_9000_ptr);
      if (iVar2 == 0) {
        FUN_180626ee0(&unknown_var_7584_ptr,&unknown_var_9000_ptr);
        return param_2;
      }
    }
    if (param_4 != '\0') {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(param_3 + 8) != (void *)0x0) {
        puVar4 = *(void **)(param_3 + 8);
      }
      FUN_180627020(&unknown_var_7488_ptr,puVar4,param_5);
    }
    plVar3 = (longlong *)FUN_1800befa0(_DAT_180c86898,&plStack_18);
    lVar1 = *plVar3;
    *plVar3 = 0;
    plVar3 = (longlong *)*param_2;
    *param_2 = lVar1;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    if (plStack_18 != (longlong *)0x0) {
      (**(code **)(*plStack_18 + 0x38))();
    }
  }
  return param_2;
}



uint64_t * FUN_1800b33d0(longlong param_1,uint64_t *param_2,longlong param_3,uint64_t param_4)

{
  longlong *plVar1;
  void *puVar2;
  
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_3 + 8);
  }
  plVar1 = (longlong *)FUN_1802abc50(param_1 + 0x4c8,puVar2,param_3,param_4,0,0xfffffffffffffffe);
  *param_2 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800b3430(uint64_t param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  void *puVar3;
  
  lVar1 = _DAT_180c86930;
  if (*(int *)(param_3 + 0x10) == 0) {
    *param_2 = 0;
  }
  else {
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_3 + 8);
    }
    plVar2 = (longlong *)
             FUN_1802abc50(_DAT_180c86930 + 0x268,puVar3,param_3,param_4,0,0xfffffffffffffffe);
    if (plVar2 == (longlong *)0x0) {
      if (param_4 == '\0') {
        *param_2 = 0;
      }
      else {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_3 + 8) != (void *)0x0) {
          puVar3 = *(void **)(param_3 + 8);
        }
        FUN_180627020(&unknown_var_7552_ptr,puVar3);
        plVar2 = (longlong *)**(longlong **)(lVar1 + 0x268);
        *param_2 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
      }
    }
    else {
      *param_2 = (longlong)plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800b3510(uint64_t param_1,uint64_t *param_2,longlong param_3,uint64_t param_4)

{
  longlong *plVar1;
  void *puVar2;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar2 = *(void **)(param_3 + 8);
    }
    plVar1 = (longlong *)
             FUN_1802abc50(_DAT_180c86930 + 0x398,puVar2,param_3,param_4,0,0xfffffffffffffffe);
    if (plVar1 == (longlong *)0x0) {
      *param_2 = 0;
    }
    else {
      *param_2 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800b3590(uint64_t param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  void *puVar3;
  
  lVar1 = _DAT_180c86930;
  if (*(int *)(param_3 + 0x10) == 0) {
    *param_2 = 0;
  }
  else {
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_3 + 8);
    }
    plVar2 = (longlong *)
             FUN_1802abc50(_DAT_180c86930 + 0x430,puVar3,param_3,param_4,0,0xfffffffffffffffe);
    if (plVar2 == (longlong *)0x0) {
      if (param_4 == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_3 + 8) != (void *)0x0) {
          puVar3 = *(void **)(param_3 + 8);
        }
        FUN_180627020(&unknown_var_7624_ptr,puVar3);
        plVar2 = (longlong *)**(longlong **)(lVar1 + 0x430);
        *param_2 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
      }
      else {
        *param_2 = 0;
      }
    }
    else {
      *param_2 = (longlong)plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800b3670(uint64_t param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong lVar7;
  longlong *plVar8;
  uint64_t *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint64_t uStackX_8;
  longlong lStack_80;
  
  lVar11 = 0;
  plVar8 = (longlong *)(_DAT_180c86930 + 0xd00);
  lVar10 = *plVar8;
  if ((*(longlong *)(_DAT_180c86930 + 0xd08) - lVar10 & 0xfffffffffffffff8U) == 0) {
    FUN_1800b8b20(plVar8);
    uStackX_8 = 0x3f80000000000000;
    iVar12 = 1;
    do {
      lStack_80 = 5;
      do {
        puVar5 = (uint64_t *)0x0;
        uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,0x10,3);
        plVar3 = (longlong *)FUN_1802ac0a0(uVar2);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        uStackX_8 = CONCAT44(uStackX_8._4_4_,iVar12);
        plVar1 = plVar3 + 0x17;
        lVar10 = plVar3[0x18];
        lVar4 = *plVar1;
        if ((lVar10 - lVar4) / 0x28 == 0) {
          FUN_1800b8da0(plVar1,1);
          lVar4 = *plVar1;
        }
        else {
          lVar7 = lVar4 + 0x28;
          if (lVar7 != lVar10) {
            do {
              if (*(longlong *)(lVar7 + 8) != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              lVar7 = lVar7 + 0x28;
            } while (lVar7 != lVar10);
            lVar4 = *plVar1;
          }
          plVar3[0x18] = lVar4 + 0x28;
        }
        *(uint64_t *)(lVar4 + 0x10) = *(uint64_t *)(lVar4 + 8);
        lVar10 = *plVar1;
        puVar9 = *(uint64_t **)(lVar10 + 0x10);
        if (puVar9 < *(uint64_t **)(lVar10 + 0x18)) {
          *(uint64_t **)(lVar10 + 0x10) = puVar9 + 1;
          *puVar9 = uStackX_8;
        }
        else {
          puVar6 = *(uint64_t **)(lVar10 + 8);
          lVar4 = (longlong)puVar9 - (longlong)puVar6 >> 3;
          if (lVar4 == 0) {
            lVar4 = 1;
LAB_1800b3832:
            puVar5 = (uint64_t *)
                     FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,*(int8_t *)(lVar10 + 0x20));
            puVar9 = *(uint64_t **)(lVar10 + 0x10);
            puVar6 = *(uint64_t **)(lVar10 + 8);
          }
          else {
            lVar4 = lVar4 * 2;
            if (lVar4 != 0) goto LAB_1800b3832;
          }
          if (puVar6 != puVar9) {
                    // WARNING: Subroutine does not return
            memmove(puVar5,puVar6,(longlong)puVar9 - (longlong)puVar6);
          }
          *puVar5 = uStackX_8;
          if (*(longlong *)(lVar10 + 8) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t **)(lVar10 + 8) = puVar5;
          *(uint64_t **)(lVar10 + 0x10) = puVar5 + 1;
          *(uint64_t **)(lVar10 + 0x18) = puVar5 + lVar4;
        }
        *(int32_t *)*plVar1 = 0;
        lVar10 = *plVar8;
        (**(code **)(*plVar3 + 0x28))(plVar3);
        plVar1 = *(longlong **)(lVar11 + lVar10);
        *(longlong **)(lVar11 + lVar10) = plVar3;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
        (**(code **)(*plVar3 + 0x38))(plVar3);
        iVar12 = iVar12 + 1;
        lVar11 = lVar11 + 8;
        lStack_80 = lStack_80 + -1;
      } while (lStack_80 != 0);
    } while (iVar12 < 0x1a);
    lVar10 = *plVar8;
  }
  param_4 = param_4 + param_3 * 5;
  iVar12 = 0;
  if (-1 < param_4) {
    iVar12 = param_4;
  }
  plVar8 = *(longlong **)(lVar10 + (longlong)iVar12 * 8);
  *param_2 = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800b3970(uint64_t param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  void *puVar3;
  
  lVar1 = _DAT_180c86930;
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_3 + 8);
  }
  plVar2 = (longlong *)
           FUN_1802abc50(_DAT_180c86930 + 0x300,puVar3,param_3,param_4,0,0xfffffffffffffffe);
  if (plVar2 == (longlong *)0x0) {
    if (param_4 == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(param_3 + 8) != (void *)0x0) {
        puVar3 = *(void **)(param_3 + 8);
      }
      FUN_180627020(&unknown_var_7760_ptr,puVar3);
      plVar2 = (longlong *)**(longlong **)(lVar1 + 0x300);
      *param_2 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
    }
    else {
      *param_2 = 0;
    }
  }
  else {
    *param_2 = (longlong)plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






