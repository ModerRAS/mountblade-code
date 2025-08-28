#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part062.c - 8 个函数

// 函数: void FUN_18009a7c0(uint64_t param_1,uint64_t *param_2,longlong param_3,longlong *param_4,
void FUN_18009a7c0(uint64_t param_1,uint64_t *param_2,longlong param_3,longlong *param_4,
                  int param_5)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  void *puVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  float fVar18;
  uint64_t *puStackX_10;
  uint64_t *puStackX_18;
  longlong *plStackX_20;
  void *puStack_c0;
  byte *pbStack_b8;
  uint uStack_b0;
  uint64_t uStack_a8;
  void *puStack_a0;
  void *puStack_98;
  uint uStack_90;
  ulonglong uStack_88;
  void *puStack_80;
  void *puStack_78;
  uint uStack_70;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  
  uStack_60 = 0xfffffffffffffffe;
  plStackX_20 = param_4;
  FUN_180627ae0(&puStack_80,param_4 + 4);
  iVar13 = uStack_70 + 2;
  FUN_1806277c0(&puStack_80,iVar13);
  *(int16_t *)(puStack_78 + uStack_70) = 0x2f2f;
  *(int8_t *)((longlong)(puStack_78 + uStack_70) + 2) = 0;
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar9 = *(void **)(param_3 + 8);
  }
  uStack_70 = iVar13;
  (**(code **)(*param_4 + 0x10))(param_4,puVar9);
  plVar3 = (longlong *)FUN_180058080(param_2,&puStackX_10,param_4 + 4);
  puVar16 = (uint64_t *)(*plVar3 + 0x40);
  if (param_5 < 0) {
    plVar3 = (longlong *)FUN_180058080(param_2 + 0x18,&puStackX_10,param_4 + 4);
    fVar18 = *(float *)(*plVar3 + 0x40);
    goto LAB_18009a8d1;
  }
  puVar5 = *(uint64_t **)(*plVar3 + 0x50);
  puVar8 = puVar16;
  if (puVar5 == (uint64_t *)0x0) {
LAB_18009a8ab:
    puVar8 = puVar16;
  }
  else {
    do {
      if (*(int *)(puVar5 + 4) < param_5) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar8 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    } while (puVar5 != (uint64_t *)0x0);
    if ((puVar8 == puVar16) || (param_5 < *(int *)(puVar8 + 4))) goto LAB_18009a8ab;
  }
  fVar18 = *(float *)((longlong)puVar8 + 0x24);
LAB_18009a8d1:
  param_4[8] = (longlong)(double)fVar18;
  puVar16 = (uint64_t *)param_2[1];
  do {
    if (puVar16 == param_2) {
      puStack_80 = &unknown_var_3456_ptr;
      if (puStack_78 == (void *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_c0 = &unknown_var_3456_ptr;
    uStack_a8 = 0;
    pbStack_b8 = (byte *)0x0;
    uStack_b0 = 0;
    FUN_1806277c0(&puStack_c0,*(int32_t *)(puVar16 + 6));
    if (*(int *)(puVar16 + 6) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(pbStack_b8,puVar16[5],*(int *)(puVar16 + 6) + 1);
    }
    if (puVar16[5] != 0) {
      uStack_b0 = 0;
      if (pbStack_b8 != (byte *)0x0) {
        *pbStack_b8 = 0;
      }
      uStack_a8 = uStack_a8 & 0xffffffff;
    }
    puVar9 = &system_buffer_ptr;
    if (puStack_78 != (void *)0x0) {
      puVar9 = puStack_78;
    }
    iVar13 = FUN_1806298d0(&puStack_c0,puVar9);
    uVar11 = uStack_b0;
    if (iVar13 == 0) {
      uVar14 = (ulonglong)(int)uStack_70;
      puStack_a0 = &unknown_var_3456_ptr;
      uStack_88 = 0;
      puStack_98 = (void *)0x0;
      uStack_90 = 0;
      iVar13 = uStack_b0 - uStack_70;
      if ((int)(uStack_b0 - uStack_70) < (int)(uStack_b0 - uStack_70)) {
        iVar13 = uStack_b0 - uStack_70;
      }
      FUN_1806277c0(&puStack_a0,iVar13 + 1);
      for (uVar15 = uVar14; ((longlong)uVar14 < (longlong)(int)uVar11 && ((uint)uVar15 < uStack_b0))
          ; uVar15 = (ulonglong)((uint)uVar15 + 1)) {
        bVar1 = pbStack_b8[uVar14];
        FUN_1806277c0(&puStack_a0,uStack_90 + 1);
        puStack_98[uStack_90] = bVar1;
        puStack_98[uStack_90 + 1] = 0;
        uStack_90 = uStack_90 + 1;
        uVar14 = uVar14 + 1;
      }
      puVar9 = &system_buffer_ptr;
      if (puStack_98 != (void *)0x0) {
        puVar9 = puStack_98;
      }
      lVar4 = strstr(puVar9,&system_data_1440);
      if (lVar4 == 0) {
        puVar5 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
        uVar11 = uStack_b0;
        *puVar5 = &unknown_var_720_ptr;
        puVar5[1] = 0;
        *(int32_t *)(puVar5 + 2) = 0;
        *puVar5 = &unknown_var_3456_ptr;
        puVar5[3] = 0;
        puVar5[1] = 0;
        *(int32_t *)(puVar5 + 2) = 0;
        puStackX_18 = puVar5 + 4;
        *puStackX_18 = &unknown_var_720_ptr;
        puVar5[5] = 0;
        *(int32_t *)(puVar5 + 6) = 0;
        *puStackX_18 = &unknown_var_3456_ptr;
        puVar5[7] = 0;
        puVar5[5] = 0;
        *(int32_t *)(puVar5 + 6) = 0;
        puStack_58 = puVar5 + 9;
        *puStack_58 = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        *(int32_t *)(puVar5 + 0xc) = 3;
        puVar5[0xd] = 0;
        puVar5[8] = 0;
        uVar14 = (ulonglong)uStack_b0;
        puStackX_10 = puVar5;
        if (pbStack_b8 != (byte *)0x0) {
          FUN_1806277c0(puStackX_18,uVar14);
        }
        plVar3 = plStackX_20;
        if (uVar11 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar5[5],pbStack_b8,uVar14);
        }
        *(int32_t *)(puVar5 + 6) = 0;
        if (puVar5[5] != 0) {
          *(int8_t *)(uVar14 + puVar5[5]) = 0;
        }
        *(int32_t *)((longlong)puVar5 + 0x3c) = uStack_a8._4_4_;
        puVar8 = (uint64_t *)param_2[2];
        puVar6 = param_2;
        pbVar12 = pbStack_b8;
        if (puVar8 == (uint64_t *)0x0) {
LAB_18009abe9:
          puVar7 = param_2;
        }
        else {
          do {
            if (uStack_b0 == 0) {
              bVar2 = false;
              puVar17 = (uint64_t *)puVar8[1];
            }
            else {
              if (*(int *)(puVar8 + 6) == 0) {
                bVar2 = true;
              }
              else {
                pbVar10 = pbStack_b8;
                do {
                  pbVar12 = (byte *)(ulonglong)pbVar10[puVar8[5] - (longlong)pbStack_b8];
                  uVar11 = (uint)pbVar10[puVar8[5] - (longlong)pbStack_b8];
                  iVar13 = *pbVar10 - uVar11;
                  if (*pbVar10 != uVar11) break;
                  pbVar10 = pbVar10 + 1;
                } while (uVar11 != 0);
                bVar2 = 0 < iVar13;
                if (iVar13 < 1) {
                  puVar17 = (uint64_t *)puVar8[1];
                  goto LAB_18009abab;
                }
              }
              puVar17 = (uint64_t *)*puVar8;
            }
LAB_18009abab:
            puVar7 = puVar8;
            if (bVar2) {
              puVar7 = puVar6;
            }
            puVar6 = puVar7;
            puVar8 = puVar17;
          } while (puVar17 != (uint64_t *)0x0);
          if (puVar7 == param_2) goto LAB_18009abe9;
          if (*(int *)(puVar7 + 6) != 0) {
            if (uStack_b0 != 0) {
              pbVar10 = (byte *)puVar7[5];
              lVar4 = (longlong)pbStack_b8 - (longlong)pbVar10;
              do {
                bVar1 = *pbVar10;
                pbVar12 = (byte *)(ulonglong)pbVar10[lVar4];
                uVar11 = (uint)pbVar10[lVar4];
                if (bVar1 != uVar11) break;
                pbVar10 = pbVar10 + 1;
              } while (uVar11 != 0);
              if ((int)(bVar1 - uVar11) < 1) goto LAB_18009abec;
            }
            goto LAB_18009abe9;
          }
        }
LAB_18009abec:
        if (param_5 == -1) {
LAB_18009ac35:
          puVar5[0xd] = plStackX_20;
          FUN_18009a7c0(param_1,param_2,&puStack_a0,puVar5,param_5);
          FUN_18005ea90(plVar3 + 9,&puStackX_10);
        }
        else {
          puVar8 = (uint64_t *)puVar7[10];
          puVar6 = puVar7 + 8;
          if (puVar8 != (uint64_t *)0x0) {
            do {
              if (*(int *)(puVar8 + 4) < param_5) {
                puVar8 = (uint64_t *)*puVar8;
              }
              else {
                puVar6 = puVar8;
                puVar8 = (uint64_t *)puVar8[1];
              }
            } while (puVar8 != (uint64_t *)0x0);
            if ((puVar6 != puVar7 + 8) && (*(int *)(puVar6 + 4) <= param_5)) goto LAB_18009ac35;
          }
          FUN_180057bf0(puVar5,pbVar12);
        }
      }
      puStack_a0 = &unknown_var_3456_ptr;
      if (puStack_98 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_98 = (void *)0x0;
      uStack_88 = uStack_88 & 0xffffffff00000000;
      puStack_a0 = &unknown_var_720_ptr;
    }
    puStack_c0 = &unknown_var_3456_ptr;
    if (pbStack_b8 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pbStack_b8 = (byte *)0x0;
    uStack_a8 = uStack_a8 & 0xffffffff00000000;
    puStack_c0 = &unknown_var_720_ptr;
    puVar16 = (uint64_t *)func_0x00018066bd70(puVar16);
  } while( true );
}



longlong FUN_18009ad10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 3;
  *(longlong *)param_1 = param_1;
  *(longlong *)(param_1 + 8) = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  lVar1 = param_1 + 0x30;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x58) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x38) = lVar1;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int8_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  lVar1 = param_1 + 0x60;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x88) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x68) = lVar1;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int8_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  lVar1 = param_1 + 0x90;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb8) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x98) = lVar1;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(int8_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  lVar1 = param_1 + 0xc0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(int32_t *)(param_1 + 0xe8) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 200) = lVar1;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int8_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  lVar1 = param_1 + 0xf0;
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(int32_t *)(param_1 + 0x118) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0xf8) = lVar1;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(int8_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  _Mtx_init_in_situ(param_1 + 0x128,0x102,param_3,param_4,0xfffffffffffffffe);
  *(int16_t *)(param_1 + 0x124) = 1;
  *(int8_t *)(param_1 + 0x126) = 0;
  *(int32_t *)(param_1 + 0x178) = 0;
  return param_1;
}



float FUN_18009ae50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  int8_t auStackX_8 [8];
  
  plVar2 = (longlong *)FUN_180058080(param_1,auStackX_8,param_2 + 0x20);
  lVar1 = *plVar2;
  if (lVar1 != param_1) {
    lVar4 = *(longlong *)(lVar1 + 0x60);
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x48);
      fVar6 = 0.0;
      if (lVar3 != lVar1 + 0x40) {
        do {
          fVar6 = fVar6 + *(float *)(lVar3 + 0x24);
          lVar3 = func_0x00018066bd70(lVar3);
        } while (lVar3 != lVar1 + 0x40);
        lVar4 = *(longlong *)(lVar1 + 0x60);
      }
      fVar5 = (float)lVar4;
      if (lVar4 < 0) {
        fVar5 = fVar5 + 1.8446744e+19;
      }
      return fVar6 / fVar5;
    }
  }
  return (float)*(double *)(param_2 + 0x40);
}



float FUN_18009ae87(longlong param_1)

{
  longlong in_RAX;
  longlong unaff_RBX;
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (in_RAX != unaff_RBX) {
    do {
      fVar2 = fVar2 + *(float *)(in_RAX + 0x24);
      in_RAX = func_0x00018066bd70(in_RAX);
    } while (in_RAX != unaff_RBX);
    param_1 = *(longlong *)(unaff_RBX + 0x20);
  }
  fVar1 = (float)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  return fVar2 / fVar1;
}



float FUN_18009aee2(void)

{
  longlong unaff_RDI;
  
  return (float)*(double *)(unaff_RDI + 0x40);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009af00(uint64_t *param_1)
void FUN_18009af00(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int8_t uVar5;
  float *pfVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float fStackX_10;
  float fStackX_14;
  
  lVar3 = _DAT_180c868d0;
  fStackX_10 = (float)*(uint64_t *)(_DAT_180c86950 + 0x17ec);
  fStackX_14 = (float)((ulonglong)*(uint64_t *)(_DAT_180c86950 + 0x17ec) >> 0x20);
  *param_1 = CONCAT44(fStackX_14 * *(float *)(_DAT_180c86950 + 0x17e4),
                      fStackX_10 * *(float *)(_DAT_180c86950 + 0x17e0));
  *(float *)(param_1 + 1) =
       (float)*(int *)(*(longlong *)(lVar3 + 0x2010) + 0x74) /
       *(float *)(*(longlong *)(lVar3 + 0x2010) + 0xc);
  if (((*(char *)(lVar3 + 0x1518) == '\0') &&
      ((0.7 < *(float *)(lVar3 + 0x1504) || *(float *)(lVar3 + 0x1504) == 0.7 ||
       ((*(byte *)(lVar3 + 0x1514) & 1) != 0)))) ||
     ((*(char *)(lVar3 + 0x1710) == '\0' &&
      ((0.7 < *(float *)(lVar3 + 0x16fc) || *(float *)(lVar3 + 0x16fc) == 0.7 ||
       ((*(byte *)(lVar3 + 0x170c) & 1) != 0)))))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *(int8_t *)((longlong)param_1 + 0xc) = uVar5;
  if ((*(char *)(lVar3 + 0x1530) != '\0') ||
     ((*(float *)(lVar3 + 0x151c) <= 0.7 && *(float *)(lVar3 + 0x151c) != 0.7 &&
      ((*(byte *)(lVar3 + 0x152c) & 1) == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)((longlong)param_1 + 0xd) = uVar5;
  if ((*(char *)(lVar3 + 0x1548) != '\0') ||
     ((*(float *)(lVar3 + 0x1534) <= 0.7 && *(float *)(lVar3 + 0x1534) != 0.7 &&
      ((*(byte *)(lVar3 + 0x1544) & 1) == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)((longlong)param_1 + 0xe) = uVar5;
  lVar10 = 0x38;
  puVar8 = param_1 + 2;
  pfVar6 = (float *)(lVar3 + 4);
  do {
    if ((*(char *)(pfVar6 + 5) != '\0') ||
       ((*pfVar6 <= 0.7 && *pfVar6 != 0.7 && (((uint)pfVar6[4] & 1) == 0)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)((longlong)puVar8 + -1) = uVar5;
    if ((*(char *)(pfVar6 + 0xb) != '\0') ||
       ((pfVar6[6] <= 0.7 && pfVar6[6] != 0.7 && (((uint)pfVar6[10] & 1) == 0)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)puVar8 = uVar5;
    if ((*(char *)(pfVar6 + 0x11) != '\0') ||
       ((pfVar6[0xc] <= 0.7 && pfVar6[0xc] != 0.7 && (((uint)pfVar6[0x10] & 1) == 0)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)((longlong)puVar8 + 1) = uVar5;
    if ((*(char *)(pfVar6 + 0x17) != '\0') ||
       ((pfVar6[0x12] <= 0.7 && pfVar6[0x12] != 0.7 && (((uint)pfVar6[0x16] & 1) == 0)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)((longlong)puVar8 + 2) = uVar5;
    pfVar6 = pfVar6 + 0x18;
    puVar8 = (uint64_t *)((longlong)puVar8 + 4);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if ((*(char *)((longlong)param_1 + 0x2c) == '\0') && (*(char *)((longlong)param_1 + 0xac) == '\0')
     ) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)((longlong)param_1 + 0x20f) = uVar5;
  if ((*(char *)((longlong)param_1 + 0x47) == '\0') && (*(char *)((longlong)param_1 + 199) == '\0'))
  {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)(param_1 + 0x42) = uVar5;
  if ((*(char *)((longlong)param_1 + 0x39) == '\0') && (*(char *)((longlong)param_1 + 0x45) == '\0')
     ) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)((longlong)param_1 + 0x211) = uVar5;
  plVar1 = param_1 + 0x43;
  if (plVar1 != (longlong *)(lVar3 + 0x2030)) {
    lVar10 = *plVar1;
    lVar2 = *(longlong *)(lVar3 + 0x2038);
    lVar3 = *(longlong *)(lVar3 + 0x2030);
    lVar11 = lVar2 - lVar3;
    uVar9 = lVar11 >> 2;
    if ((ulonglong)(param_1[0x45] - lVar10 >> 2) < uVar9) {
      if (uVar9 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = FUN_18062b420(_DAT_180c8ed18,uVar9 * 4,*(int8_t *)(param_1 + 0x46));
      }
      if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
        memmove(lVar10,lVar3,lVar11);
      }
      if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar3 = lVar10 + uVar9 * 4;
      *plVar1 = lVar10;
      param_1[0x44] = lVar3;
      param_1[0x45] = lVar3;
    }
    else {
      lVar4 = param_1[0x44];
      uVar7 = lVar4 - lVar10 >> 2;
      if (uVar7 < uVar9) {
        lVar11 = uVar7 * 4 + lVar3;
        if (lVar3 != lVar11) {
                    // WARNING: Subroutine does not return
          memmove(lVar10,lVar3);
        }
        if (lVar11 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar11,lVar2 - lVar11);
        }
        param_1[0x44] = lVar4;
      }
      else {
        if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
          memmove(lVar10,lVar3,lVar11);
        }
        param_1[0x44] = lVar10;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009b10b(longlong param_1)
void FUN_18009b10b(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RBX;
  ulonglong uVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  
  lVar1 = unaff_RDI[1];
  lVar2 = *unaff_RDI;
  lVar6 = lVar1 - lVar2;
  uVar5 = lVar6 >> 2;
  if ((ulonglong)(in_RAX - param_1 >> 2) < uVar5) {
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_18062b420(_DAT_180c8ed18,uVar5 * 4,(char)unaff_RBX[3]);
    }
    if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar2,lVar6);
    }
    if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = lVar3 + uVar5 * 4;
    *unaff_RBX = lVar3;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = lVar1;
  }
  else {
    lVar3 = unaff_RBX[1];
    uVar4 = lVar3 - param_1 >> 2;
    if (uVar4 < uVar5) {
      lVar6 = uVar4 * 4 + lVar2;
      if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2);
      }
      if (lVar6 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(lVar3,lVar6,lVar1 - lVar6);
      }
      unaff_RBX[1] = lVar3;
    }
    else {
      if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
        memmove(param_1,lVar2,lVar6);
      }
      unaff_RBX[1] = param_1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009b13a(void)
void FUN_18009b13a(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,unaff_RBP * 4,(char)unaff_RBX[3]);
  }
  if (unaff_RDI != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar1 = lVar2 + unaff_RBP * 4;
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar1;
  unaff_RBX[2] = lVar1;
  return;
}





// 函数: void FUN_18009b19b(longlong param_1)
void FUN_18009b19b(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = *(longlong *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 2;
  if (uVar3 < unaff_RBP) {
    lVar1 = uVar3 * 4 + unaff_RDI;
    if (unaff_RDI != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RSI - lVar1);
    }
    *(longlong *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RDI != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(longlong *)(unaff_RBX + 8) = param_1;
  }
  return;
}





// 函数: void FUN_18009b216(void)
void FUN_18009b216(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18009b220(int32_t *param_1)
void FUN_18009b220(int32_t *param_1)

{
  int32_t uVar1;
  int16_t uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  int16_t *puVar11;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  uVar10 = 0;
  uVar1 = param_1[1];
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x118) = *param_1;
  *(int32_t *)(lVar4 + 0x11c) = uVar1;
  *(int32_t *)(lVar4 + 0x128) = param_1[2];
  *(int8_t *)(lVar4 + 0x120) = *(int8_t *)(param_1 + 3);
  *(int8_t *)(lVar4 + 0x121) = *(int8_t *)((longlong)param_1 + 0xd);
  *(int8_t *)(lVar4 + 0x122) = *(int8_t *)((longlong)param_1 + 0xe);
  uVar7 = uVar10;
  uVar8 = uVar10;
  do {
    if ((int)uVar8 == 0x9c) {
      if ((*(char *)(lVar4 + 0x154) == '\0') && (*(char *)((longlong)param_1 + 0xab) == '\0')) {
        *(int8_t *)(lVar4 + 0x154) = 0;
      }
      else {
        *(int8_t *)(lVar4 + 0x154) = 1;
      }
    }
    else {
      *(int8_t *)(uVar7 + 0x138 + lVar4) = *(int8_t *)(uVar7 + 0xf + (longlong)param_1);
    }
    uVar8 = (ulonglong)((int)uVar8 + 1);
    uVar7 = uVar7 + 1;
  } while ((longlong)uVar7 < 0x200);
  *(int8_t *)(lVar4 + 0x134) = *(int8_t *)((longlong)param_1 + 0x20f);
  *(int8_t *)(lVar4 + 0x136) = *(int8_t *)(param_1 + 0x84);
  *(int8_t *)(lVar4 + 0x135) = *(int8_t *)((longlong)param_1 + 0x211);
  puVar11 = *(int16_t **)(param_1 + 0x86);
  uVar7 = (ulonglong)((longlong)*(int16_t **)(param_1 + 0x88) + (3 - (longlong)puVar11)) >> 2;
  if (*(int16_t **)(param_1 + 0x88) < puVar11) {
    uVar7 = uVar10;
  }
  if (uVar7 != 0) {
    piVar9 = (int *)(lVar4 + 0x1530);
    iVar5 = *piVar9;
    do {
      iVar6 = *(int *)(lVar4 + 0x1534);
      uVar2 = *puVar11;
      if (iVar5 == iVar6) {
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        iVar3 = iVar5 + 1;
        if (iVar5 + 1 < iVar6) {
          iVar3 = iVar6;
        }
        FUN_18011dd10(piVar9,iVar3);
        iVar5 = *piVar9;
      }
      puVar11 = puVar11 + 2;
      uVar10 = uVar10 + 1;
      *(int16_t *)(*(longlong *)(lVar4 + 0x1538) + (longlong)iVar5 * 2) = uVar2;
      *piVar9 = *piVar9 + 1;
      iVar5 = *piVar9;
    } while (uVar10 != uVar7);
  }
  return;
}





// 函数: void FUN_18009b327(void)
void FUN_18009b327(void)

{
  int16_t uVar1;
  int iVar2;
  int *unaff_RBX;
  longlong unaff_RSI;
  int16_t *unaff_RDI;
  longlong unaff_R14;
  
  iVar2 = *unaff_RBX;
  do {
    uVar1 = *unaff_RDI;
    if (iVar2 == unaff_RBX[1]) {
      FUN_18011dd10();
      iVar2 = *unaff_RBX;
    }
    unaff_RDI = unaff_RDI + 2;
    unaff_RSI = unaff_RSI + 1;
    *(int16_t *)(*(longlong *)(unaff_RBX + 2) + (longlong)iVar2 * 2) = uVar1;
    *unaff_RBX = *unaff_RBX + 1;
    iVar2 = *unaff_RBX;
  } while (unaff_RSI != unaff_R14);
  return;
}





