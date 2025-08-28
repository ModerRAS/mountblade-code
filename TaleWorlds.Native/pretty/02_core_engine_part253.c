#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part253.c - 15 个函数

// 函数: void FUN_1802199b0(uint64_t *param_1,int64_t *param_2,int64_t *param_3)
void FUN_1802199b0(uint64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  byte bVar1;
  int64_t lVar2;
  byte *pbVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  
  plVar11 = param_2 + ((int64_t)param_3 - (int64_t)param_2 >> 4);
  lVar2 = (int64_t)param_3 + (-8 - (int64_t)param_2) >> 3;
  if (lVar2 < 0x29) {
    plVar8 = param_3 + -1;
    plVar5 = param_2;
  }
  else {
    lVar2 = lVar2 + 1 >> 3;
    FUN_18021a050(param_2,param_2 + lVar2,param_2 + lVar2 * 2);
    FUN_18021a050(plVar11 + -lVar2,plVar11,plVar11 + lVar2);
    plVar8 = param_3 + (-1 - lVar2);
    FUN_18021a050(param_3 + lVar2 * -2 + -1,plVar8,param_3 + -1);
    plVar5 = param_2 + lVar2;
  }
  FUN_18021a050(plVar5,plVar11,plVar8);
  plVar5 = plVar11 + 1;
  if (param_2 < plVar11) {
    lVar2 = *plVar11;
    do {
      lVar10 = plVar11[-1];
      plVar8 = plVar11 + -1;
      if (*(int *)(lVar2 + 0x10) != 0) {
        if (*(int *)(lVar10 + 0x10) == 0) break;
        pbVar3 = *(byte **)(lVar2 + 8);
        lVar9 = *(int64_t *)(lVar10 + 8) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if (0 < (int)(bVar1 - uVar4)) break;
      }
      if (*(int *)(lVar10 + 0x10) != 0) {
        if (*(int *)(lVar2 + 0x10) == 0) break;
        pbVar3 = *(byte **)(lVar10 + 8);
        lVar2 = *(int64_t *)(lVar2 + 8) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar2];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if (0 < (int)(bVar1 - uVar4)) break;
      }
      lVar2 = lVar10;
      plVar11 = plVar8;
    } while (param_2 < plVar8);
  }
  plVar8 = plVar5;
  plVar7 = plVar11;
  if (plVar5 < param_3) {
    lVar2 = *plVar11;
    do {
      lVar10 = *plVar5;
      plVar8 = plVar5;
      if (*(int *)(lVar2 + 0x10) != 0) {
        if (*(int *)(lVar10 + 0x10) == 0) break;
        pbVar3 = *(byte **)(lVar2 + 8);
        lVar9 = *(int64_t *)(lVar10 + 8) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if (0 < (int)(bVar1 - uVar4)) break;
      }
      if (*(int *)(lVar10 + 0x10) != 0) {
        if (*(int *)(lVar2 + 0x10) == 0) break;
        pbVar3 = *(byte **)(lVar10 + 8);
        lVar10 = *(int64_t *)(lVar2 + 8) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar10];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if (0 < (int)(bVar1 - uVar4)) break;
      }
      plVar5 = plVar5 + 1;
      plVar8 = plVar5;
    } while (plVar5 < param_3);
  }
joined_r0x000180219b69:
  do {
    plVar6 = plVar7;
    if (param_3 <= plVar5) goto joined_r0x000180219bf9;
    lVar2 = *plVar5;
    lVar10 = *plVar11;
    if (*(int *)(lVar2 + 0x10) == 0) {
LAB_180219ba7:
      if (*(int *)(lVar10 + 0x10) != 0) {
        if (*(int *)(lVar2 + 0x10) != 0) {
          pbVar3 = *(byte **)(lVar10 + 8);
          lVar10 = *(int64_t *)(lVar2 + 8) - (int64_t)pbVar3;
          do {
            bVar1 = *pbVar3;
            uVar4 = (uint)pbVar3[lVar10];
            if (bVar1 != uVar4) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar4 != 0);
          if ((int)(bVar1 - uVar4) < 1) goto LAB_180219bd7;
        }
joined_r0x000180219bf9:
        for (; param_2 < plVar7; plVar7 = plVar7 + -1) {
          plVar6 = plVar6 + -1;
          lVar2 = *plVar11;
          lVar10 = *plVar6;
          if (*(int *)(lVar2 + 0x10) == 0) {
LAB_180219c49:
            if (*(int *)(lVar10 + 0x10) != 0) {
              if (*(int *)(lVar2 + 0x10) == 0) break;
              pbVar3 = *(byte **)(lVar10 + 8);
              lVar2 = *(int64_t *)(lVar2 + 8) - (int64_t)pbVar3;
              do {
                bVar1 = *pbVar3;
                uVar4 = (uint)pbVar3[lVar2];
                if (bVar1 != uVar4) break;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
              if (0 < (int)(bVar1 - uVar4)) break;
            }
            plVar11 = plVar11 + -1;
            if (plVar11 != plVar6) {
              lVar2 = *plVar11;
              *plVar11 = lVar10;
              *plVar6 = lVar2;
            }
          }
          else if (*(int *)(lVar10 + 0x10) != 0) {
            pbVar3 = *(byte **)(lVar2 + 8);
            lVar9 = *(int64_t *)(lVar10 + 8) - (int64_t)pbVar3;
            do {
              bVar1 = *pbVar3;
              uVar4 = (uint)pbVar3[lVar9];
              if (bVar1 != uVar4) break;
              pbVar3 = pbVar3 + 1;
            } while (uVar4 != 0);
            if ((int)(bVar1 - uVar4) < 1) goto LAB_180219c49;
          }
        }
        if (plVar7 == param_2) {
          if (plVar5 == param_3) {
            *param_1 = (uint64_t)plVar11;
            param_1[1] = (uint64_t)plVar8;
            return;
          }
          if (plVar8 != plVar5) {
            lVar2 = *plVar11;
            *plVar11 = *plVar8;
            *plVar8 = lVar2;
          }
          lVar2 = *plVar11;
          *plVar11 = *plVar5;
          plVar11 = plVar11 + 1;
          *plVar5 = lVar2;
          plVar5 = plVar5 + 1;
          plVar8 = plVar8 + 1;
        }
        else {
          plVar7 = plVar7 + -1;
          if (plVar5 == param_3) {
            plVar11 = plVar11 + -1;
            if (plVar7 == plVar11) {
              lVar2 = *plVar11;
              *plVar11 = plVar8[-1];
              plVar8[-1] = lVar2;
              plVar8 = plVar8 + -1;
            }
            else {
              plVar8 = plVar8 + -1;
              lVar2 = *plVar7;
              *plVar7 = *plVar11;
              *plVar11 = lVar2;
              *plVar11 = *plVar8;
              *plVar8 = lVar2;
            }
          }
          else {
            lVar2 = *plVar5;
            *plVar5 = *plVar7;
            plVar5 = plVar5 + 1;
            *plVar7 = lVar2;
          }
        }
        goto joined_r0x000180219b69;
      }
LAB_180219bd7:
      if (plVar8 != plVar5) {
        lVar10 = *plVar8;
        *plVar8 = lVar2;
        *plVar5 = lVar10;
      }
      plVar8 = plVar8 + 1;
    }
    else if (*(int *)(lVar10 + 0x10) != 0) {
      pbVar3 = *(byte **)(lVar2 + 8);
      lVar9 = *(int64_t *)(lVar10 + 8) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_180219ba7;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



int64_t FUN_180219d60(int64_t param_1,int64_t param_2,int64_t param_3)

{
  uint uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  lVar4 = (param_2 - param_1) / 0x28;
  if (0 < lVar4) {
    plVar2 = (int64_t *)(param_1 + 8);
    param_1 = param_3 - param_1;
    do {
      uVar1 = *(uint *)(plVar2 + 1);
      uVar3 = (uint64_t)uVar1;
      if (*plVar2 != 0) {
        FUN_1806277c0(param_3,uVar3);
      }
      if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(param_1 + (int64_t)plVar2),*plVar2,uVar3);
      }
      *(int32_t *)(param_1 + 8 + (int64_t)plVar2) = 0;
      if (*(int64_t *)(param_1 + (int64_t)plVar2) != 0) {
        *(int8_t *)(uVar3 + *(int64_t *)(param_1 + (int64_t)plVar2)) = 0;
      }
      lVar4 = lVar4 + -1;
      *(int32_t *)(param_1 + 0x14 + (int64_t)plVar2) = *(int32_t *)((int64_t)plVar2 + 0x14);
      param_3 = param_3 + 0x28;
      *(int *)(param_1 + 0x18 + (int64_t)plVar2) = (int)plVar2[3];
      plVar2 = plVar2 + 5;
    } while (0 < lVar4);
  }
  return param_3;
}



int64_t FUN_180219d98(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t unaff_RBP;
  uint64_t uVar3;
  int64_t unaff_R14;
  
  plVar2 = (int64_t *)(param_1 + 8);
  param_3 = param_3 - param_1;
  do {
    uVar1 = *(uint *)(plVar2 + 1);
    uVar3 = (uint64_t)uVar1;
    if (*plVar2 != 0) {
      FUN_1806277c0(unaff_RBP,uVar3);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(param_3 + (int64_t)plVar2),*plVar2,uVar3);
    }
    *(int32_t *)(param_3 + 8 + (int64_t)plVar2) = 0;
    if (*(int64_t *)(param_3 + (int64_t)plVar2) != 0) {
      *(int8_t *)(uVar3 + *(int64_t *)(param_3 + (int64_t)plVar2)) = 0;
    }
    unaff_R14 = unaff_R14 + -1;
    *(int32_t *)(param_3 + 0x14 + (int64_t)plVar2) = *(int32_t *)((int64_t)plVar2 + 0x14);
    unaff_RBP = unaff_RBP + 0x28;
    *(int *)(param_3 + 0x18 + (int64_t)plVar2) = (int)plVar2[3];
    plVar2 = plVar2 + 5;
  } while (0 < unaff_R14);
  return unaff_RBP;
}





// 函数: void FUN_180219e15(void)
void FUN_180219e15(void)

{
  return;
}



int64_t FUN_180219e30(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  if (param_1 != param_2) {
    lVar3 = param_1 - param_3;
    lVar2 = param_3 - param_1;
    do {
      FUN_180627ae0(param_3,param_1);
      lVar1 = param_1 + lVar2;
      *(int32_t *)(lVar1 + 0x20) = *(int32_t *)(lVar1 + 0x20 + lVar3);
      param_3 = param_3 + 0x28;
      param_1 = param_1 + 0x28;
    } while (param_1 != param_2);
  }
  return param_3;
}





// 函数: void FUN_180219eb0(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_180219eb0(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
  byte bVar1;
  int64_t lVar2;
  byte *pbVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  lVar6 = (int64_t)(param_3 - 1) >> 1;
  lVar5 = param_2;
  lVar8 = param_2;
  if (param_2 < lVar6) {
    do {
      lVar7 = *(int64_t *)(param_1 + 8 + lVar8 * 0x10);
      lVar5 = lVar8 * 2 + 2;
      if (*(int *)(lVar7 + 0x10) != 0) {
        lVar2 = *(int64_t *)(param_1 + lVar5 * 8);
        if (*(int *)(lVar2 + 0x10) != 0) {
          pbVar3 = *(byte **)(lVar7 + 8);
          lVar7 = *(int64_t *)(lVar2 + 8) - (int64_t)pbVar3;
          do {
            bVar1 = *pbVar3;
            uVar4 = (uint)pbVar3[lVar7];
            if (bVar1 != uVar4) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar4 != 0);
          if ((int)(bVar1 - uVar4) < 1) goto LAB_180219f3b;
        }
        lVar5 = lVar8 * 2 + 1;
      }
LAB_180219f3b:
      *(uint64_t *)(param_1 + lVar8 * 8) = *(uint64_t *)(param_1 + lVar5 * 8);
      lVar8 = lVar5;
    } while (lVar5 < lVar6);
  }
  if ((lVar5 == lVar6) && ((param_3 & 1) == 0)) {
    *(uint64_t *)(param_1 + lVar5 * 8) = *(uint64_t *)(param_1 + -8 + param_3 * 8);
    lVar5 = param_3 - 1;
  }
  if (param_2 < lVar5) {
    do {
      lVar8 = *param_4;
      lVar7 = lVar5 + -1 >> 1;
      lVar6 = *(int64_t *)(param_1 + lVar7 * 8);
      if (*(int *)(lVar8 + 0x10) == 0) goto LAB_180219fcf;
      if (*(int *)(lVar6 + 0x10) != 0) {
        pbVar3 = *(byte **)(lVar8 + 8);
        lVar8 = *(int64_t *)(lVar6 + 8) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar8];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if ((int)(bVar1 - uVar4) < 1) goto LAB_180219fcc;
      }
      *(int64_t *)(param_1 + lVar5 * 8) = lVar6;
      lVar5 = lVar7;
    } while (param_2 < lVar7);
    *(int64_t *)(param_1 + lVar7 * 8) = *param_4;
  }
  else {
LAB_180219fcc:
    lVar8 = *param_4;
LAB_180219fcf:
    *(int64_t *)(param_1 + lVar5 * 8) = lVar8;
  }
  return;
}





// 函数: void FUN_180219ff0(uint64_t *param_1)
void FUN_180219ff0(uint64_t *param_1)

{
  FUN_180211720(param_1 + 4);
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}





// 函数: void FUN_18021a050(int64_t *param_1,int64_t *param_2,int64_t *param_3)
void FUN_18021a050(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  byte bVar1;
  int64_t lVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  
  lVar2 = *param_1;
  lVar7 = *param_2;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(int *)(lVar7 + 0x10) == 0) {
      bVar3 = true;
    }
    else {
      pbVar4 = *(byte **)(lVar2 + 8);
      lVar6 = *(int64_t *)(lVar7 + 8) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar5 = (uint)pbVar4[lVar6];
        if (bVar1 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
      bVar3 = 0 < (int)(bVar1 - uVar5);
    }
    if (bVar3) {
      *param_2 = lVar2;
      *param_1 = lVar7;
      lVar7 = *param_2;
    }
  }
  lVar2 = *param_3;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(int *)(lVar2 + 0x10) != 0) {
      pbVar4 = *(byte **)(lVar7 + 8);
      lVar6 = *(int64_t *)(lVar2 + 8) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar5 = (uint)pbVar4[lVar6];
        if (bVar1 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) {
        return;
      }
    }
    *param_3 = lVar7;
    *param_2 = lVar2;
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      if (*(int *)(lVar2 + 0x10) != 0) {
        pbVar4 = *(byte **)(lVar7 + 8);
        lVar6 = *(int64_t *)(lVar2 + 8) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar6];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) {
          return;
        }
      }
      *param_2 = lVar7;
      *param_1 = lVar2;
    }
  }
  return;
}



uint64_t FUN_18021a590(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180048980();
  FUN_18006b6f0();
  FUN_1801570c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x2a0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18021a600(int64_t param_1)
void FUN_18021a600(int64_t param_1)

{
  byte bVar1;
  code *pcVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void *puVar9;
  int8_t auStack_c78 [48];
  int8_t auStack_c48 [32];
  uint64_t uStack_c28;
  uint64_t uStack_c20;
  int64_t alStack_c18 [2];
  byte abStack_c08 [8];
  int8_t auStack_c00 [128];
  int64_t lStack_b80;
  void *puStack_af8;
  int8_t *puStack_af0;
  uint uStack_ae8;
  int8_t auStack_ae0 [136];
  int8_t auStack_a58 [8];
  void *puStack_a50;
  char acStack_839 [513];
  char acStack_638 [1024];
  int8_t auStack_238 [512];
  uint64_t uStack_38;
  
  uStack_c28 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c78;
  FUN_180217c40(param_1 + 0x260);
  FUN_1801596c0();
  FUN_180624440(auStack_a58,auStack_c48);
  FUN_1800c4720(alStack_c18);
  puVar9 = &system_buffer_ptr;
  if (puStack_a50 != (void *)0x0) {
    puVar9 = puStack_a50;
  }
  lVar6 = FUN_1800c4800(auStack_c00,puVar9,1);
  if (lVar6 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((int64_t)alStack_c18 + (int64_t)*(int *)(alStack_c18[0] + 4),2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((int64_t)alStack_c18 + (int64_t)*(int *)(alStack_c18[0] + 4),0,0);
  }
  if (lStack_b80 != 0) {
    bVar1 = abStack_c08[*(int *)(alStack_c18[0] + 4)];
    while ((bVar1 & 1) == 0) {
      _getline___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                (alStack_c18,acStack_638,0x400);
      lVar6 = -1;
      do {
        lVar7 = lVar6 + 1;
        lVar3 = lVar6 + 1;
        lVar6 = lVar7;
      } while (acStack_638[lVar3] != '\0');
      if (lVar7 != 0) {
        FUN_18010cbc0(acStack_638,&system_param1_ptr,auStack_238,acStack_839 + 1);
        uVar4 = 0xffffffffffffffff;
        do {
          uVar8 = uVar4;
          uVar4 = uVar8 + 1;
        } while (acStack_839[uVar8 + 2] != '\0');
        if (acStack_839[uVar8 + 1] == '\r') {
          if (0x1ff < uVar8) {
            FUN_1808fcdc8();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          acStack_839[uVar8 + 1] = '\0';
        }
        puStack_af8 = &unknown_var_3432_ptr;
        puStack_af0 = auStack_ae0;
        uStack_ae8 = 0;
        auStack_ae0[0] = 0;
        lVar6 = -1;
        do {
          lVar7 = lVar6 + 1;
          lVar3 = lVar6 + 2;
          lVar6 = lVar7;
        } while (acStack_839[lVar3] != '\0');
        uStack_ae8 = (uint)lVar7;
        strcpy_s(auStack_ae0,0x80,acStack_839 + 1);
        if (6 < uStack_ae8) {
          lVar6 = 0;
          do {
            if ((&unknown_var_3520_ptr + lVar6)[(int64_t)(puStack_af0 + -0x180a10500)] !=
                (&unknown_var_3520_ptr)[lVar6]) goto LAB_18021a863;
            lVar6 = lVar6 + 1;
          } while (lVar6 < 7);
          if ((uStack_ae8 != 0xc) || (iVar5 = strcmp(puStack_af0,&unknown_var_3472_ptr), iVar5 != 0)) {
            FUN_180217f60(param_1 + 0x260,&puStack_af8);
          }
        }
LAB_18021a863:
        puStack_af8 = &system_state_ptr;
      }
      bVar1 = abStack_c08[*(int *)(alStack_c18[0] + 4)];
    }
    lVar6 = FUN_1800a19c0(auStack_c00);
    if (lVar6 == 0) {
      _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                ((int64_t)alStack_c18 + (int64_t)*(int *)(alStack_c18[0] + 4),2);
    }
  }
  FUN_180217db0(param_1 + 0x260);
  uStack_c20 = FUN_18062b1e0(system_memory_pool_ptr,0x58,8,3);
                    // WARNING: Subroutine does not return
  memset(uStack_c20,0,0x58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18021aa60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18021aa60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void *puVar5;
  uint uVar6;
  uint *puVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  int32_t uVar10;
  void *puStack_d0;
  int64_t lStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  int64_t lStack_a8;
  uint *puStack_a0;
  uint64_t uStack_98;
  int16_t uStack_90;
  int8_t uStack_8e;
  void *puStack_88;
  int64_t lStack_80;
  uint uStack_78;
  int32_t uStack_70;
  void *puStack_68;
  void *puStack_60;
  uint64_t uStack_48;
  int64_t lStack_40;
  uint64_t uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  FUN_1801597a0(param_1,&puStack_68,param_3,param_4,0);
  uStack_48 = 0;
  lStack_40 = 0;
  puVar5 = &system_buffer_ptr;
  if (puStack_60 != (void *)0x0) {
    puVar5 = puStack_60;
  }
  uVar10 = FUN_18062dee0(&uStack_48,puVar5,&unknown_var_4880_ptr);
  lVar2 = lStack_40;
  if (lStack_40 == 0) {
    lVar2 = FUN_1801595d0(uVar10,&puStack_88);
    uVar6 = uStack_78 + 0x13;
    FUN_1806277c0(&puStack_88,uVar6);
    puVar8 = (int32_t *)((uint64_t)uStack_78 + lStack_80);
    *puVar8 = 0x6e756f53;
    puVar8[1] = 0x74614464;
    puVar8[2] = 0x672e7361;
    puVar8[3] = 0x732e6e65;
    puVar8[4] = 0x666465;
    puVar5 = &system_buffer_ptr;
    if (*(void **)(lVar2 + 8) != (void *)0x0) {
      puVar5 = *(void **)(lVar2 + 8);
    }
    uStack_78 = uVar6;
    FUN_180626f80(&unknown_var_5040_ptr,puVar5);
    puStack_88 = &system_data_buffer_ptr;
    if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_80 = 0;
    uStack_70 = 0;
    puStack_88 = &system_state_ptr;
  }
  else {
    lStack_a8 = 0;
    puStack_a0 = (uint *)0x0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_8e = 3;
    uVar3 = _ftelli64(lStack_40);
    _fseeki64(lVar2,0,2);
    uVar4 = _ftelli64(lVar2);
    _fseeki64(lVar2,uVar3,0);
    System_BufferManager(&lStack_a8,uVar4);
    fread(puStack_a0,1,uVar4,lVar2);
    fclose(lVar2);
    lStack_40 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    uVar6 = *puStack_a0;
    puVar7 = (uint *)((int64_t)puStack_a0 + 2);
    puStack_a0 = puVar7;
    if ((ushort)uVar6 != 0) {
      uVar9 = (uint64_t)(ushort)uVar6;
      do {
        puStack_d0 = &system_data_buffer_ptr;
        uStack_b8 = 0;
        lStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b0 = 0;
        uVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        if (uVar6 != 0) {
          puStack_a0 = puVar7;
          FUN_180628f30(&puStack_d0,puVar7,uVar6);
          puVar7 = (uint *)((int64_t)puVar7 + (uint64_t)uVar6);
        }
        uStack_b0 = *(uint64_t *)puVar7;
        puVar7 = puVar7 + 2;
        uVar1 = *(uint64_t *)(param_1 + 0x288);
        puStack_a0 = puVar7;
        if (uVar1 < *(uint64_t *)(param_1 + 0x290)) {
          *(uint64_t *)(param_1 + 0x288) = uVar1 + 0x28;
          FUN_180627ae0(uVar1);
          *(uint64_t *)(uVar1 + 0x20) = uStack_b0;
        }
        else {
          FUN_1802195b0(param_1 + 0x280,&puStack_d0);
        }
        puStack_d0 = &system_data_buffer_ptr;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_c8 = 0;
        uStack_b8 = uStack_b8 & 0xffffffff00000000;
        puStack_d0 = &system_state_ptr;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    FUN_1802187b0(param_1 + 0x280);
    if (((char)uStack_90 == '\0') && (lStack_a8 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puStack_68 = &system_data_buffer_ptr;
  if (puStack_60 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



int64_t * FUN_18021ad90(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 0x1e8);
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18021ade0(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  byte *pbVar4;
  void *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *plVar10;
  
  lVar3 = FUN_18020fa10(*(uint64_t *)(param_1 + 0x1f8));
  if (lVar3 != 0) {
    return *(int *)(lVar3 + 0x54);
  }
  iVar8 = 0;
  iVar6 = (int)((*(int64_t *)(param_1 + 0x268) - *(int64_t *)(param_1 + 0x260)) / 0x98);
  if (0 < iVar6) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar3 = 0;
    plVar10 = (int64_t *)(*(int64_t *)(param_1 + 0x260) + 8);
    do {
      iVar7 = (int)plVar10[1];
      if (iVar2 == iVar7) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(param_2 + 8);
          lVar9 = *plVar10 - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar9;
            iVar7 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar7 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18021ae8e:
        if (iVar7 == 0) {
          return iVar8;
        }
      }
      else if (iVar2 == 0) goto LAB_18021ae8e;
      iVar8 = iVar8 + 1;
      lVar3 = lVar3 + 1;
      plVar10 = plVar10 + 0x13;
    } while (lVar3 < iVar6);
  }
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_4496_ptr,puVar5);
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18021ae2a(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  byte *pbVar1;
  int iVar2;
  int64_t in_RAX;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t unaff_RSI;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  void *puStack0000000000000028;
  
  iVar6 = 0;
  iVar4 = (int)(SUB168(SEXT816(in_RAX) * SEXT816(param_1),8) >> 2) -
          (SUB164(SEXT816(in_RAX) * SEXT816(param_1),0xc) >> 0x1f);
  if (0 < iVar4) {
    iVar2 = *(int *)(unaff_RSI + 0x10);
    lVar9 = 0;
    plVar8 = (int64_t *)(param_4 + 8);
    do {
      iVar5 = (int)plVar8[1];
      if (iVar2 == iVar5) {
        if (iVar2 != 0) {
          pbVar3 = *(byte **)(unaff_RSI + 8);
          lVar7 = *plVar8 - (int64_t)pbVar3;
          do {
            pbVar1 = pbVar3 + lVar7;
            iVar5 = (uint)*pbVar3 - (uint)*pbVar1;
            if (iVar5 != 0) break;
            pbVar3 = pbVar3 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18021ae8e:
        if (iVar5 == 0) {
          return iVar6;
        }
      }
      else if (iVar2 == 0) goto LAB_18021ae8e;
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 1;
      plVar8 = plVar8 + 0x13;
    } while (lVar9 < iVar4);
  }
  puStack0000000000000028 = &system_buffer_ptr;
  if (*(void **)(unaff_RSI + 8) != (void *)0x0) {
    puStack0000000000000028 = *(void **)(unaff_RSI + 8);
  }
  FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_4496_ptr);
  return -1;
}



int32_t FUN_18021aef5(void)

{
  int32_t unaff_EBX;
  
  return unaff_EBX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18021af10(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  void *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  
  iVar7 = 0;
  iVar5 = (int)((*(int64_t *)(param_1 + 0x288) - *(int64_t *)(param_1 + 0x280)) / 0x28);
  if (0 < iVar5) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar10 = 0;
    plVar9 = (int64_t *)(*(int64_t *)(param_1 + 0x280) + 8);
    do {
      iVar6 = (int)plVar9[1];
      if (iVar2 == iVar6) {
        if (iVar2 != 0) {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar8 = *plVar9 - (int64_t)pbVar3;
          do {
            pbVar1 = pbVar3 + lVar8;
            iVar6 = (uint)*pbVar3 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar3 = pbVar3 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18021af9e:
        if (iVar6 == 0) {
          return iVar7;
        }
      }
      else if (iVar2 == 0) goto LAB_18021af9e;
      iVar7 = iVar7 + 1;
      lVar10 = lVar10 + 1;
      plVar9 = plVar9 + 5;
    } while (lVar10 < iVar5);
  }
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 8);
  }
  FUN_1800623b0(system_message_context,0,0x1000000000000,3,&unknown_var_4680_ptr,puVar4);
  return -1;
}





// 函数: void FUN_18021b070(void)
void FUN_18021b070(void)

{
  FUN_1800f0e70();
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18021b090(void)
void FUN_18021b090(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18021b4f0(void)
void FUN_18021b4f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18021b9c0(void)
void FUN_18021b9c0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18021bc50(void)
void FUN_18021bc50(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18021bff0(void)
void FUN_18021bff0(void)

{
  int32_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int8_t auStack_1c8 [48];
  int32_t uStack_198;
  int32_t uStack_190;
  void *puStack_108;
  uint64_t *puStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  int64_t lStack_c0;
  int8_t auStack_90 [32];
  uint64_t uStack_70;
  uint64_t uStack_38;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1c8;
  uStack_198 = 0;
  core_system_data_config = FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3);
  *(int32_t *)(core_system_data_config + 0x19) = 0;
  *(int16_t *)(core_system_data_config + 0x1d) = 0;
  *(int8_t *)(core_system_data_config + 0x1f) = 0;
  *(int32_t *)(core_system_data_config + 0x28) = 3;
  *(int64_t *)core_system_data_config = core_system_data_config;
  *(int64_t *)(core_system_data_config + 8) = core_system_data_config;
  *(uint64_t *)(core_system_data_config + 0x10) = 0;
  *(int8_t *)(core_system_data_config + 0x18) = 0;
  *(uint64_t *)(core_system_data_config + 0x20) = 0;
  lStack_c0 = *(int64_t *)(*system_main_module_state + 0x890) - *(int64_t *)(*system_main_module_state + 0x888) >> 5;
  uStack_190 = 0;
  if (0 < (int)lStack_c0) {
    lVar2 = *(int64_t *)(*system_main_module_state + 0x888);
    if (*(int64_t *)(*system_main_module_state + 0x890) - lVar2 >> 5 == 0) {
      lVar2 = FUN_180628ca0();
    }
    puStack_108 = &system_data_buffer_ptr;
    uStack_f0 = 0;
    puStack_100 = (uint64_t *)0x0;
    uStack_f8 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_100 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
    *puVar3 = 0x506873654d76614e;
    *(int32_t *)(puVar3 + 1) = 0x61666572;
    *(int16_t *)((int64_t)puVar3 + 0xc) = 0x7362;
    *(int8_t *)((int64_t)puVar3 + 0xe) = 0;
    uStack_f8 = 0xe;
    FUN_180627ce0(lVar2,auStack_90,&puStack_108);
    puStack_108 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_1c8);
}





// 函数: void FUN_18021cb50(void)
void FUN_18021cb50(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18021cf80(void)
void FUN_18021cf80(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



