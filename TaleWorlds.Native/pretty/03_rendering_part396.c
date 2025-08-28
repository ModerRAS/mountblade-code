#include "TaleWorlds.Native.Split.h"

// 03_rendering_part396.c - 2 个函数

// 函数: void FUN_180489b50(longlong param_1,longlong param_2)
void FUN_180489b50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  code *pcVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  longlong *plStackX_8;
  longlong lStackX_10;
  longlong lStackX_18;
  longlong **pplStackX_20;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong *plStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  char *pcStack_d0;
  int iStack_c8;
  int32_t uStack_c0;
  void *puStack_b8;
  longlong lStack_b0;
  int32_t uStack_a0;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int8_t uStack_8c;
  int32_t uStack_88;
  longlong alStack_80 [2];
  code *pcStack_70;
  code *pcStack_68;
  uint64_t uStack_58;
  longlong **pplStack_50;
  
  uStack_58 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x178;
  lStackX_10 = param_2;
  lStackX_18 = lVar1;
  iVar5 = _Mtx_lock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lVar7 = *(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138);
  lVar7 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar7),8) + lVar7;
  iVar5 = (int)(lVar7 >> 7) - (int)(lVar7 >> 0x3f);
  if (0 < iVar5) {
    iVar9 = -1;
    iVar12 = 0;
    plStackX_8 = (longlong *)(longlong)iVar5;
    if (0 < iVar5) {
      lVar7 = 0;
      lVar13 = 0;
      do {
        if (iVar9 != -1) goto LAB_180489e6f;
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0x138) + lVar13);
        plStack_108 = (longlong *)*plVar10;
        if (plStack_108 != (longlong *)0x0) {
          (**(code **)(*plStack_108 + 0x28))();
        }
        plStack_100 = (longlong *)plVar10[1];
        if (plStack_100 != (longlong *)0x0) {
          (**(code **)(*plStack_100 + 0x28))();
        }
        plStack_f8 = (longlong *)plVar10[2];
        if (plStack_f8 != (longlong *)0x0) {
          (**(code **)(*plStack_f8 + 0x28))();
        }
        plStack_f0 = (longlong *)plVar10[3];
        if (plStack_f0 != (longlong *)0x0) {
          (**(code **)(*plStack_f0 + 0x28))();
        }
        plStack_e8 = (longlong *)plVar10[4];
        if (plStack_e8 != (longlong *)0x0) {
          (**(code **)(*plStack_e8 + 0x28))();
        }
        plStack_e0 = (longlong *)plVar10[5];
        if (plStack_e0 != (longlong *)0x0) {
          (**(code **)(*plStack_e0 + 0x28))();
        }
        FUN_180627ae0(&plStack_d8,plVar10 + 6);
        FUN_180627ae0(&puStack_b8,plVar10 + 10);
        uStack_98 = (int32_t)plVar10[0xe];
        uStack_94 = *(int32_t *)((longlong)plVar10 + 0x74);
        uStack_90 = (int32_t)plVar10[0xf];
        uStack_8c = *(int8_t *)((longlong)plVar10 + 0x7c);
        uStack_88 = (int32_t)plVar10[0x10];
        pplStackX_20 = (longlong **)alStack_80;
        pcStack_70 = (code *)0x0;
        pcStack_68 = _guard_check_icall;
        if (alStack_80 != plVar10 + 0x11) {
          pcVar11 = (code *)plVar10[0x13];
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(alStack_80,plVar10 + 0x11,1);
            pcVar11 = (code *)plVar10[0x13];
          }
          pcStack_68 = (code *)plVar10[0x14];
          pcStack_70 = pcVar11;
        }
        if (iStack_c8 == *(int *)(lStackX_10 + 0x10)) {
          if (iStack_c8 == 0) {
LAB_180489d4e:
            if (*(int *)(lStackX_10 + 0x10) != 0) goto LAB_180489d56;
            bVar14 = true;
          }
          else {
            pcVar6 = pcStack_d0;
            do {
              cVar3 = *pcVar6;
              cVar4 = pcVar6[*(longlong *)(lStackX_10 + 8) - (longlong)pcStack_d0];
              if (cVar3 != cVar4) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar4 != '\0');
            bVar14 = cVar3 == cVar4;
          }
        }
        else {
          if (iStack_c8 == 0) goto LAB_180489d4e;
LAB_180489d56:
          bVar14 = false;
        }
        iVar9 = iVar12;
        if (!bVar14) {
          iVar9 = -1;
        }
        pplStackX_20 = (longlong **)alStack_80;
        if (pcStack_70 != (code *)0x0) {
          (*pcStack_70)(alStack_80,0,0);
        }
        pplStackX_20 = (longlong **)&puStack_b8;
        puStack_b8 = &unknown_var_3456_ptr;
        if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_b0 = 0;
        uStack_a0 = 0;
        puStack_b8 = &unknown_var_720_ptr;
        pplStackX_20 = &plStack_d8;
        plStack_d8 = (longlong *)&unknown_var_3456_ptr;
        if (pcStack_d0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        pcStack_d0 = (char *)0x0;
        uStack_c0 = 0;
        plStack_d8 = (longlong *)&unknown_var_720_ptr;
        if (plStack_e0 != (longlong *)0x0) {
          (**(code **)(*plStack_e0 + 0x38))();
        }
        if (plStack_e8 != (longlong *)0x0) {
          (**(code **)(*plStack_e8 + 0x38))();
        }
        if (plStack_f0 != (longlong *)0x0) {
          (**(code **)(*plStack_f0 + 0x38))();
        }
        if (plStack_f8 != (longlong *)0x0) {
          (**(code **)(*plStack_f8 + 0x38))();
        }
        if (plStack_100 != (longlong *)0x0) {
          (**(code **)(*plStack_100 + 0x38))();
        }
        if (plStack_108 != (longlong *)0x0) {
          (**(code **)(*plStack_108 + 0x38))();
        }
        iVar12 = iVar12 + 1;
        lVar7 = lVar7 + 1;
        lVar13 = lVar13 + 0xa8;
      } while (lVar7 < (longlong)plStackX_8);
      if (iVar9 != -1) {
LAB_180489e6f:
        FUN_180489f80(&plStack_108,*(longlong *)(param_1 + 0x138) + (longlong)iVar9 * 0xa8);
        FUN_1802e9fa0(plStack_e0,1,1);
        FUN_1802f0600(plStack_e0,1);
        plVar10 = plStack_108;
        pplStackX_20 = &plStackX_8;
        plStackX_8 = plStack_e0;
        if (plStack_e0 != (longlong *)0x0) {
          (**(code **)(*plStack_e0 + 0x28))();
        }
        pplStack_50 = &plStackX_8;
        FUN_180198980(plVar10,plStackX_8);
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        uVar2 = *(longlong *)(param_1 + 0x138) + (longlong)iVar9 * 0xa8 + 0xa8;
        uVar8 = *(ulonglong *)(param_1 + 0x140);
        if (uVar2 < uVar8) {
          FUN_18048d1c0(uVar2,uVar8);
          uVar8 = *(ulonglong *)(param_1 + 0x140);
        }
        *(ulonglong *)(param_1 + 0x140) = uVar8 - 0xa8;
        FUN_18048a0c0();
        FUN_18048a0c0(&plStack_108);
      }
    }
  }
  iVar5 = _Mtx_unlock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return;
}



longlong * FUN_180489f80(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)param_2[1];
  param_1[1] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)param_2[3];
  param_1[3] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)param_2[4];
  param_1[4] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (longlong *)param_2[5];
  param_1[5] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  FUN_180627ae0(param_1 + 6,param_2 + 6);
  FUN_180627ae0(param_1 + 10,param_2 + 10);
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  *(int32_t *)((longlong)param_1 + 0x74) = *(int32_t *)((longlong)param_2 + 0x74);
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  *(int8_t *)((longlong)param_1 + 0x7c) = *(int8_t *)((longlong)param_2 + 0x7c);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  param_1[0x13] = 0;
  param_1[0x14] = (longlong)_guard_check_icall;
  if (param_1 + 0x11 != param_2 + 0x11) {
    pcVar2 = (code *)param_2[0x13];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1 + 0x11,param_2 + 0x11,1);
      pcVar2 = (code *)param_2[0x13];
    }
    param_1[0x13] = (longlong)pcVar2;
    param_1[0x14] = param_2[0x14];
  }
  return param_1;
}





// 函数: void FUN_18048a0c0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18048a0c0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if ((code *)param_1[0x13] != (code *)0x0) {
    (*(code *)param_1[0x13])(param_1 + 0x11,0,0,param_4,0xfffffffffffffffe);
  }
  param_1[10] = (longlong)&unknown_var_3456_ptr;
  if (param_1[0xb] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xd) = 0;
  param_1[10] = (longlong)&unknown_var_720_ptr;
  param_1[6] = (longlong)&unknown_var_3456_ptr;
  if (param_1[7] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[7] = 0;
  *(int32_t *)(param_1 + 9) = 0;
  param_1[6] = (longlong)&unknown_var_720_ptr;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x38))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18048a1d0(longlong param_1,uint64_t param_2)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  char cVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  code *pcVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plStackX_8;
  uint64_t uStackX_10;
  longlong *plStackX_18;
  longlong *plStackX_20;
  longlong *plStack_1b0;
  longlong **pplStack_1a8;
  void **ppuStack_1a0;
  longlong *plStack_198;
  longlong *plStack_190;
  longlong *plStack_188;
  longlong *plStack_180;
  longlong *plStack_178;
  int32_t uStack_170;
  uint64_t uStack_168;
  int32_t uStack_160;
  int32_t uStack_15c;
  int16_t uStack_158;
  int8_t uStack_156;
  int32_t uStack_154;
  int8_t uStack_150;
  uint64_t uStack_148;
  longlong lStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  void *puStack_e8;
  longlong lStack_e0;
  int32_t uStack_d0;
  void *puStack_c8;
  longlong lStack_c0;
  int32_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int8_t uStack_9c;
  int32_t uStack_98;
  int8_t auStack_90 [16];
  code *pcStack_80;
  code *pcStack_78;
  uint64_t uStack_68;
  int8_t auStack_60 [8];
  int8_t auStack_58 [24];
  
  uStack_68 = 0xfffffffffffffffe;
  uVar21 = 0;
  plStackX_8 = (longlong *)((ulonglong)plStackX_8 & 0xffffffff00000000);
  plStackX_18 = (longlong *)((ulonglong)plStackX_18 & 0xffffffff00000000);
  plStack_188 = (longlong *)0x0;
  plStack_180 = (longlong *)0x0;
  plVar20 = (longlong *)0x0;
  plStack_178 = (longlong *)0x0;
  uStack_170 = 3;
  iVar16 = 0;
  plVar7 = (longlong *)(param_1 + 0x158);
  plVar18 = *(longlong **)(param_1 + 0x160);
  plVar11 = (longlong *)*plVar7;
  uStackX_10 = param_2;
  if ((longlong)plVar18 - (longlong)plVar11 >> 4 != 0) {
    do {
      FUN_1802e9fa0(*(uint64_t *)(uVar21 + 8 + (longlong)plVar11),1,1);
      FUN_1802f0600(*(uint64_t *)(uVar21 + 8 + (longlong)plVar11),1);
      uVar3 = *(uint64_t *)(uVar21 + (longlong)plVar11);
      pplStack_1a8 = &plStackX_20;
      plStackX_20 = *(longlong **)(uVar21 + 8 + (longlong)plVar11);
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      FUN_180198980(uVar3,plStackX_20);
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      iVar16 = iVar16 + 1;
      uVar21 = uVar21 + 0x10;
      plVar18 = *(longlong **)(param_1 + 0x160);
      plVar11 = (longlong *)*plVar7;
    } while ((ulonglong)(longlong)iVar16 < (ulonglong)((longlong)plVar18 - (longlong)plVar11 >> 4));
    uVar21 = (ulonglong)plStackX_8 & 0xffffffff;
  }
  plVar14 = plVar11;
  plStack_1b0 = plVar11;
  if (plVar11 != plVar18) {
    do {
      plStack_1b0 = plVar14;
      if ((longlong *)plVar14[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar14[1] + 0x38))();
      }
      if ((longlong *)*plVar14 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar14 + 0x38))();
      }
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar18);
    plVar11 = (longlong *)*plVar7;
    plStack_1b0 = plVar14;
  }
  *(longlong **)(param_1 + 0x160) = plVar11;
  lVar8 = *(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138);
  lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8),8) + lVar8;
  *(int *)(param_1 + 0xf4) = (int)(lVar8 >> 7) - (int)(lVar8 >> 0x3f);
  lVar8 = *(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138);
  lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8),8) + lVar8;
  if (lVar8 >> 7 == lVar8 >> 0x3f) {
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  }
  else {
    *(int32_t *)(param_1 + 0xfc) = 0;
  }
  uVar12 = 0;
  lVar8 = *(longlong *)(param_1 + 0x140);
  lVar10 = *(longlong *)(param_1 + 0x138);
  lVar9 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8 - lVar10),8) + (lVar8 - lVar10);
  uVar19 = uVar12;
  if (lVar9 >> 7 != lVar9 >> 0x3f) {
    do {
      if (*(char *)(uVar12 + 0x7c + lVar10) == '\0') {
        *(int8_t *)(uVar12 + 0x7c + lVar10) = 1;
        uStack_168 = 0;
        uStack_154 = 0xffffffff;
        uStack_150 = 1;
        uStack_148 = 0;
        lStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_128 = 3;
        uStack_120 = 0;
        uStack_158 = 1;
        uStack_160 = 3;
        uStack_15c = 1;
        uStack_156 = 1;
        FUN_1802e7bc0(*(uint64_t *)(uVar12 + 0x28 + *(longlong *)(param_1 + 0x138)),&uStack_168);
        if (lStack_140 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      uVar17 = (int)uVar19 + 1;
      uVar12 = uVar12 + 0xa8;
      lVar8 = *(longlong *)(param_1 + 0x140);
      lVar10 = *(longlong *)(param_1 + 0x138);
      lVar9 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8 - lVar10),8) + (lVar8 - lVar10);
      uVar19 = (ulonglong)uVar17;
    } while ((ulonglong)(longlong)(int)uVar17 < (ulonglong)((lVar9 >> 7) - (lVar9 >> 0x3f)));
  }
  lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8 - lVar10),8) + (lVar8 - lVar10);
  if (lVar8 >> 7 != lVar8 >> 0x3f) {
    do {
      plVar7 = (longlong *)0x0;
      if ((3 < (int)uVar21) || (3 < (int)plStackX_18)) break;
      piVar1 = (int *)(param_1 + 0xf0);
      *piVar1 = *piVar1 + -1;
      if (-1 < *piVar1) break;
      lVar8 = *(longlong *)(param_1 + 0x140);
      plStack_118 = *(longlong **)(lVar8 + -0xa8);
      if (plStack_118 != (longlong *)0x0) {
        (**(code **)(*plStack_118 + 0x28))();
      }
      plStack_110 = *(longlong **)(lVar8 + -0xa0);
      if (plStack_110 != (longlong *)0x0) {
        (**(code **)(*plStack_110 + 0x28))();
      }
      plStack_108 = *(longlong **)(lVar8 + -0x98);
      if (plStack_108 != (longlong *)0x0) {
        (**(code **)(*plStack_108 + 0x28))();
      }
      plStack_100 = *(longlong **)(lVar8 + -0x90);
      if (plStack_100 != (longlong *)0x0) {
        (**(code **)(*plStack_100 + 0x28))();
      }
      plStack_f8 = *(longlong **)(lVar8 + -0x88);
      if (plStack_f8 != (longlong *)0x0) {
        (**(code **)(*plStack_f8 + 0x28))();
      }
      plStack_f0 = *(longlong **)(lVar8 + -0x80);
      if (plStack_f0 != (longlong *)0x0) {
        (**(code **)(*plStack_f0 + 0x28))();
      }
      FUN_180627ae0(&puStack_e8,lVar8 + -0x78);
      FUN_180627ae0(&puStack_c8,lVar8 + -0x58);
      uStack_a8 = *(int32_t *)(lVar8 + -0x38);
      uStack_a4 = *(int32_t *)(lVar8 + -0x34);
      uStack_a0 = *(int32_t *)(lVar8 + -0x30);
      uStack_9c = *(int8_t *)(lVar8 + -0x2c);
      uStack_98 = *(int32_t *)(lVar8 + -0x28);
      ppuStack_1a0 = (void **)auStack_90;
      pcStack_80 = (code *)0x0;
      pcStack_78 = _guard_check_icall;
      if (auStack_90 != (int8_t *)(lVar8 + -0x20)) {
        pcVar13 = *(code **)(lVar8 + -0x10);
        if (pcVar13 != (code *)0x0) {
          (*pcVar13)(auStack_90,(int8_t *)(lVar8 + -0x20),1);
          pcVar13 = *(code **)(lVar8 + -0x10);
        }
        pcStack_78 = *(code **)(lVar8 + -8);
        pcStack_80 = pcVar13;
      }
      if (plStack_118 != (longlong *)0x0) {
        puVar2 = (uint64_t *)(param_1 + 0x108);
        puVar6 = puVar2;
        puVar4 = *(uint64_t **)(param_1 + 0x118);
        while (puVar4 != (uint64_t *)0x0) {
          if ((longlong *)puVar4[4] < plStack_118) {
            puVar4 = (uint64_t *)*puVar4;
          }
          else {
            puVar6 = puVar4;
            puVar4 = (uint64_t *)puVar4[1];
          }
        }
        if ((puVar6 == puVar2) || (plStack_118 < (longlong *)puVar6[4])) {
          puVar6 = (uint64_t *)FUN_18048c8f0(puVar2,auStack_60);
          puVar6 = (uint64_t *)*puVar6;
        }
        if (*(char *)(puVar6[5] + 0x823) != '\0') {
          puVar6 = puVar2;
          puVar4 = *(uint64_t **)(param_1 + 0x118);
          while (puVar4 != (uint64_t *)0x0) {
            if ((longlong *)puVar4[4] < plStack_118) {
              puVar4 = (uint64_t *)*puVar4;
            }
            else {
              puVar6 = puVar4;
              puVar4 = (uint64_t *)puVar4[1];
            }
          }
          if ((puVar6 == puVar2) || (plStack_118 < (longlong *)puVar6[4])) {
            puVar6 = (uint64_t *)FUN_18048c8f0(puVar2,auStack_58);
            puVar6 = (uint64_t *)*puVar6;
          }
          FUN_180303b70(puVar6[5],0x7ffbe9eb,0);
        }
        cVar5 = FUN_18048adf0(param_1,&plStack_118);
        plVar14 = plStack_f0;
        plVar11 = plStack_180;
        plVar18 = plStack_188;
        if (cVar5 == '\0') {
          if (plStack_180 < plVar20) {
            plStack_180 = plStack_180 + 0x15;
            FUN_180489f80(plVar11,&plStack_118);
          }
          else {
            lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) *
                           SEXT816((longlong)plStack_180 - (longlong)plStack_188),8) +
                    ((longlong)plStack_180 - (longlong)plStack_188);
            lVar8 = (lVar8 >> 7) - (lVar8 >> 0x3f);
            if (lVar8 == 0) {
              lVar8 = 1;
LAB_18048a7a8:
              plVar7 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar8 * 0xa8,3);
            }
            else {
              lVar8 = lVar8 * 2;
              if (lVar8 != 0) goto LAB_18048a7a8;
            }
            FUN_18048cfd0(&plStack_1b0,plVar18,plVar11,plVar7);
            plVar14 = plStack_1b0;
            FUN_180489f80(plStack_1b0,&plStack_118);
            for (plVar20 = plVar18; plVar20 != plVar11; plVar20 = plVar20 + 0x15) {
              FUN_18048a0c0(plVar20);
            }
            if (plVar18 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(plVar18);
            }
            plVar20 = plVar7 + lVar8 * 0x15;
            uVar21 = (ulonglong)plStackX_8 & 0xffffffff;
            plStack_188 = plVar7;
            plStack_180 = plVar14 + 0x15;
            plStack_178 = plVar20;
          }
        }
        else {
          plStack_198 = (longlong *)0x0;
          plStack_190 = (longlong *)0x0;
          pplStack_1a8 = (longlong **)plStack_f0;
          if (plStack_f0 != (longlong *)0x0) {
            (**(code **)(*plStack_f0 + 0x28))(plStack_f0);
          }
          plVar7 = plStack_118;
          pplStack_1a8 = (longlong **)0x0;
          plStack_190 = plVar14;
          if (plStack_118 != (longlong *)0x0) {
            (**(code **)(*plStack_118 + 0x28))(plStack_118);
          }
          plStack_198 = plVar7;
          plVar18 = *(longlong **)(param_1 + 0x160);
          if (plVar18 < *(longlong **)(param_1 + 0x168)) {
            *(longlong **)(param_1 + 0x160) = plVar18 + 2;
            *plVar18 = (longlong)plVar7;
            plStackX_8 = plVar18;
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x28))(plVar7);
            }
            plVar18[1] = (longlong)plVar14;
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 0x28))(plVar14);
            }
          }
          else {
            FUN_18048cc30(param_1 + 0x158,&plStack_198);
            plVar14 = plStack_190;
            plVar7 = plStack_198;
          }
          uVar17 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar17;
          plStackX_8 = (longlong *)CONCAT44(plStackX_8._4_4_,uVar17);
          *(int32_t *)(param_1 + 0xf0) = 1;
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x38))(plVar14);
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7);
          }
        }
      }
      *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + -0xa8;
      FUN_18048a0c0(*(uint64_t *)(param_1 + 0x140));
      plStackX_18 = (longlong *)CONCAT44(plStackX_18._4_4_,(int)plStackX_18 + 1);
      *(int8_t *)(param_1 + 0xf8) = 1;
      ppuStack_1a0 = (void **)auStack_90;
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(auStack_90,0);
      }
      ppuStack_1a0 = &puStack_c8;
      puStack_c8 = &unknown_var_3456_ptr;
      if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_c0 = 0;
      uStack_b0 = 0;
      puStack_c8 = &unknown_var_720_ptr;
      puStack_e8 = &unknown_var_3456_ptr;
      ppuStack_1a0 = &puStack_e8;
      if (lStack_e0 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_e0 = 0;
      uStack_d0 = 0;
      puStack_e8 = &unknown_var_720_ptr;
      if (plStack_f0 != (longlong *)0x0) {
        (**(code **)(*plStack_f0 + 0x38))();
      }
      if (plStack_f8 != (longlong *)0x0) {
        (**(code **)(*plStack_f8 + 0x38))();
      }
      if (plStack_100 != (longlong *)0x0) {
        (**(code **)(*plStack_100 + 0x38))();
      }
      if (plStack_108 != (longlong *)0x0) {
        (**(code **)(*plStack_108 + 0x38))();
      }
      if (plStack_110 != (longlong *)0x0) {
        (**(code **)(*plStack_110 + 0x38))();
      }
      if (plStack_118 != (longlong *)0x0) {
        (**(code **)(*plStack_118 + 0x38))();
      }
      lVar8 = *(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138);
      lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8),8) + lVar8;
    } while (lVar8 >> 7 != lVar8 >> 0x3f);
  }
  lVar8 = ((longlong)plStack_180 - (longlong)plStack_188) +
          SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) *
                 SEXT816((longlong)plStack_180 - (longlong)plStack_188),8);
  iVar16 = ((int)(lVar8 >> 7) - (int)(lVar8 >> 0x3f)) + -1;
  if (-1 < iVar16) {
    plVar7 = plStack_188 + (longlong)iVar16 * 0x15;
    do {
      uVar21 = *(ulonglong *)(param_1 + 0x140);
      if (uVar21 < *(ulonglong *)(param_1 + 0x148)) {
        *(ulonglong *)(param_1 + 0x140) = uVar21 + 0xa8;
        FUN_180489f80(uVar21,plVar7);
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x138);
        lVar10 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((longlong)(uVar21 - lVar8)),8) +
                 (uVar21 - lVar8);
        lVar10 = (lVar10 >> 7) - (lVar10 >> 0x3f);
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_18048aaf5:
          lVar9 = FUN_18062b420(_DAT_180c8ed18,lVar10 * 0xa8,*(int8_t *)(param_1 + 0x150));
          uVar21 = *(ulonglong *)(param_1 + 0x140);
          lVar8 = *(longlong *)(param_1 + 0x138);
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_18048aaf5;
          lVar9 = 0;
        }
        FUN_18048cfd0(&plStackX_8,lVar8,uVar21,lVar9);
        plVar18 = plStackX_8;
        FUN_180489f80(plStackX_8,plVar7);
        plStackX_18 = plVar18 + 0x15;
        lVar8 = *(longlong *)(param_1 + 0x140);
        lVar15 = *(longlong *)(param_1 + 0x138);
        if (lVar15 != lVar8) {
          do {
            FUN_18048a0c0(lVar15);
            lVar15 = lVar15 + 0xa8;
          } while (lVar15 != lVar8);
          lVar15 = *(longlong *)(param_1 + 0x138);
        }
        if (lVar15 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar15);
        }
        *(longlong *)(param_1 + 0x138) = lVar9;
        *(longlong **)(param_1 + 0x140) = plStackX_18;
        *(longlong *)(param_1 + 0x148) = lVar10 * 0xa8 + lVar9;
      }
      plVar7 = plVar7 + -0x15;
      iVar16 = iVar16 + -1;
    } while (-1 < iVar16);
  }
  plVar18 = plStack_180;
  plVar7 = plStack_188;
  iVar16 = *(int *)(_DAT_180c86870 + 0x224);
  lVar8 = *(longlong *)(_DAT_180c8a9d0 + 0x200);
  if (lVar8 != _DAT_180c8a9d0 + 0x1f8) {
    do {
      plVar11 = *(longlong **)(lVar8 + 0x30);
      plStackX_8 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11);
      }
      if ((plVar11[0x68] != 0) && (plVar11[0x68] + 3U < (ulonglong)(longlong)iVar16)) {
        FUN_18023b050(plVar11,0);
        plVar11[0x68] = 0;
      }
      (**(code **)(*plVar11 + 0x38))(plVar11);
      lVar8 = func_0x00018066bd70(lVar8);
    } while (lVar8 != _DAT_180c8a9d0 + 0x1f8);
  }
  plVar11 = plVar7;
  if (*(int *)(param_1 + 0xfc) == *(int *)(param_1 + 0x100)) {
    for (lVar8 = *(longlong *)(param_1 + 0x110); lVar8 != param_1 + 0x108;
        lVar8 = func_0x00018066bd70(lVar8)) {
      lVar10 = *(longlong *)(lVar8 + 0x28);
      FUN_180397960(*(longlong *)(lVar8 + 0x20) + 14000);
      plStackX_8 = *(longlong **)(lVar10 + 0x570);
      *(uint64_t *)(lVar10 + 0x570) = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_18 = *(longlong **)(lVar10 + 0x578);
      *(uint64_t *)(lVar10 + 0x578) = 0;
      if (plStackX_18 != (longlong *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      plStackX_20 = *(longlong **)(lVar10 + 0x548);
      *(uint64_t *)(lVar10 + 0x548) = 0;
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      plVar20 = *(longlong **)(lVar10 + 0x530);
      *(uint64_t *)(lVar10 + 0x530) = 0;
      if (plVar20 != (longlong *)0x0) {
        (**(code **)(*plVar20 + 0x38))();
      }
      pplStack_1a8 = *(longlong ***)(lVar10 + 0x660);
      *(uint64_t *)(lVar10 + 0x660) = 0;
      if (pplStack_1a8 != (longlong **)0x0) {
        (*(code *)(*pplStack_1a8)[7])();
      }
      plStack_1b0 = *(longlong **)(lVar10 + 0x38);
      *(uint64_t *)(lVar10 + 0x38) = 0;
      if (plStack_1b0 != (longlong *)0x0) {
        (**(code **)(*plStack_1b0 + 0x38))();
      }
      *(int8_t *)(lVar10 + 0x821) = 1;
    }
  }
  for (; plVar11 != plVar18; plVar11 = plVar11 + 0x15) {
    FUN_18048a0c0(plVar11);
  }
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



