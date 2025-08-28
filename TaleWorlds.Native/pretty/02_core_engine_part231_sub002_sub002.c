#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part231_sub002_sub002.c - 1 个函数

// 函数: void FUN_180200780(uint64_t param_1,int param_2,void **param_3)
void FUN_180200780(uint64_t param_1,int param_2,void **param_3)

{
  float fVar1;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  float *pfVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int32_t uVar9;
  uint uVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  char *pcVar15;
  int8_t *puVar16;
  int8_t *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  float *pfVar21;
  float *pfVar22;
  uint64_t *puVar23;
  int32_t *puVar24;
  float *pfVar25;
  int8_t *puVar26;
  longlong lVar27;
  void *puVar28;
  char *pcVar29;
  longlong lVar30;
  void *puVar31;
  int iVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  int8_t auStack_238 [32];
  int8_t uStack_218;
  void *puStack_208;
  void *puStack_200;
  uint uStack_1f8;
  uint64_t uStack_1f0;
  int8_t uStack_1e8;
  float *pfStack_1e0;
  float *pfStack_1d8;
  ulonglong uStack_1d0;
  uint64_t uStack_1c8;
  int32_t uStack_1c0;
  int8_t auStack_1b8 [8];
  int8_t *puStack_1b0;
  uint uStack_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  void *puStack_198;
  int8_t *puStack_190;
  int iStack_188;
  ulonglong uStack_180;
  int iStack_178;
  void *puStack_170;
  int8_t *puStack_168;
  uint uStack_160;
  uint64_t uStack_158;
  uint uStack_150;
  void *puStack_148;
  int32_t *puStack_140;
  int32_t uStack_138;
  uint64_t uStack_130;
  void **ppuStack_128;
  longlong lStack_120;
  uint64_t uStack_118;
  void **ppuStack_110;
  void *apuStack_108 [22];
  ulonglong uStack_58;
  
  lVar5 = _DAT_180c8aa40;
  uStack_118 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  uVar14 = 0;
  uVar18 = 0;
  uStack_1c0 = 0;
  lStack_120 = _DAT_180c8aa40;
  ppuStack_128 = param_3;
  ppuStack_110 = param_3;
  if (param_2 == 1) {
    puVar28 = *(void **)
               ((longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0 + 0x18 +
               *(longlong *)(_DAT_180c86938 + 0x1d20));
    puVar31 = &system_buffer_ptr;
    if (puVar28 != (void *)0x0) {
      puVar31 = puVar28;
    }
    (**(code **)(*(longlong *)(_DAT_180c8aa40 + 0x20) + 0x10))(_DAT_180c8aa40 + 0x20,puVar31);
    lVar11 = FUN_180623de0(apuStack_108);
    puVar28 = &system_buffer_ptr;
    if (*(void **)(lVar11 + 8) != (void *)0x0) {
      puVar28 = *(void **)(lVar11 + 8);
    }
    (**(code **)(*(longlong *)(lVar5 + 0x40) + 0x10))(lVar5 + 0x40,puVar28);
    ppuStack_128 = apuStack_108;
    apuStack_108[0] = &unknown_var_720_ptr;
    FUN_180628a40(lVar5 + 0x40);
    *(int32_t *)(lVar5 + 0xd0) = 0x7f7fffff;
    *(int32_t *)(lVar5 + 200) = 0x7f7fffff;
    *(int32_t *)(lVar5 + 0xd4) = 0x800000;
    *(int32_t *)(lVar5 + 0xcc) = 0x800000;
    *(int8_t *)(lVar5 + 0xd8) = 0;
    *(uint64_t *)(lVar5 + 0x70) = *(uint64_t *)(lVar5 + 0x68);
    *(uint64_t *)(lVar5 + 0x90) = *(uint64_t *)(lVar5 + 0x88);
    *(uint64_t *)(lVar5 + 0xc0) = 0;
    *(uint64_t *)(lVar5 + 0xb8) = 0;
    *(int32_t *)(lVar5 + 0x60) = 1;
    if ((*(int *)(param_3 + 2) != 0) && (*param_3[1] == '#')) {
      *(int8_t *)(lVar5 + 0xd9) = 1;
      FUN_1806289a0(param_3);
    }
    FUN_180627be0(lVar5,param_3);
    goto LAB_180202111;
  }
  uVar19 = 0;
  if (param_2 == 2) {
    pfStack_1e0 = (float *)0x0;
    pfStack_1d8 = (float *)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = CONCAT44(uStack_1c8._4_4_,3);
    FUN_18014e8b0(&pfStack_1e0,
                  *(longlong *)(_DAT_180c8aa40 + 0x70) - *(longlong *)(_DAT_180c8aa40 + 0x68) >> 2);
    lVar11 = *(longlong *)(lVar5 + 0x70);
    pfVar22 = pfStack_1e0;
    pfVar4 = pfStack_1d8;
    for (lVar27 = *(longlong *)(lVar5 + 0x68); pfStack_1e0 = pfVar22, pfStack_1d8 = pfVar4,
        lVar27 != lVar11; lVar27 = lVar27 + 4) {
      FUN_1800571e0(&pfStack_1e0,lVar27);
      pfVar22 = pfStack_1e0;
      pfVar4 = pfStack_1d8;
    }
    if (pfVar22 != pfVar4) {
      lVar27 = (longlong)pfVar4 - (longlong)pfVar22 >> 2;
      uVar20 = uVar14;
      for (lVar11 = lVar27; lVar11 != 0; lVar11 = lVar11 >> 1) {
        uVar18 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar18;
      }
      FUN_180202c00(pfVar22,pfVar4,(longlong)(int)(uVar18 - 1) * 2,uStack_1e8);
      if (lVar27 < 0x1d) {
        func_0x00018009d8a0(pfVar22,pfVar4);
      }
      else {
        pfVar25 = pfVar22 + 0x1c;
        func_0x00018009d8a0(pfVar22);
        for (; pfVar25 != pfVar4; pfVar25 = pfVar25 + 1) {
          fVar35 = *pfVar25;
          fVar1 = pfVar25[-1];
          pfVar12 = pfVar25 + -1;
          pfVar22 = pfVar25;
          while (pfVar21 = pfVar12, fVar35 < fVar1) {
            *pfVar22 = fVar1;
            pfVar12 = pfVar21 + -1;
            fVar1 = *pfVar12;
            pfVar22 = pfVar21;
          }
          *pfVar22 = fVar35;
        }
      }
    }
    *(uint64_t *)(lVar5 + 0xa8) = 0;
    uVar20 = (longlong)pfStack_1d8 - (longlong)pfStack_1e0 >> 2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar20;
    lVar11 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
    iVar7 = (int)((uVar20 - lVar11 >> 1) + lVar11 >> 6);
    lVar11 = (longlong)iVar7;
    dVar34 = 0.0;
    dVar33 = 0.0;
    uVar20 = uVar14;
    if (3 < lVar11) {
      fVar35 = 1.0 / (float)iVar7;
      pfVar22 = pfStack_1e0 + 2;
      lVar27 = (lVar11 - 4U >> 2) + 1;
      uVar20 = lVar27 * 4;
      do {
        dVar33 = (double)(fVar35 * pfVar22[-2]) + dVar33;
        *(double *)(lVar5 + 0xa8) = dVar33;
        dVar33 = (double)(fVar35 * pfVar22[-1]) + dVar33;
        *(double *)(lVar5 + 0xa8) = dVar33;
        dVar33 = (double)(fVar35 * *pfVar22) + dVar33;
        *(double *)(lVar5 + 0xa8) = dVar33;
        dVar33 = dVar33 + (double)(fVar35 * pfVar22[1]);
        *(double *)(lVar5 + 0xa8) = dVar33;
        pfVar22 = pfVar22 + 4;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    if ((longlong)uVar20 < lVar11) {
      do {
        dVar33 = dVar33 + (double)((1.0 / (float)iVar7) * pfStack_1e0[uVar20]);
        *(double *)(lVar5 + 0xa8) = dVar33;
        uVar20 = uVar20 + 1;
      } while ((longlong)uVar20 < lVar11);
    }
    lVar11 = *(longlong *)(lVar5 + 0x90);
    pfVar22 = pfStack_1e0;
    pfVar4 = pfStack_1e0;
    for (lVar27 = *(longlong *)(lVar5 + 0x88); pfStack_1e0 = pfVar4, pfStack_1d8 = pfVar22,
        lVar27 != lVar11; lVar27 = lVar27 + 4) {
      FUN_1800571e0(&pfStack_1e0,lVar27);
      pfVar22 = pfStack_1d8;
      pfVar4 = pfStack_1e0;
    }
    if (pfVar4 != pfVar22) {
      lVar27 = (longlong)pfVar22 - (longlong)pfVar4 >> 2;
      uVar20 = uVar14;
      for (lVar11 = lVar27; lVar11 != 0; lVar11 = lVar11 >> 1) {
        uVar19 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar19;
      }
      FUN_180202c00(pfVar4,pfVar22,(longlong)(int)(uVar19 - 1) * 2,uStack_1e8);
      pfVar25 = pfVar4;
      if (lVar27 < 0x1d) {
        while (pfVar25 = pfVar25 + 1, pfVar25 != pfVar22) {
          fVar35 = *pfVar25;
          pfVar12 = pfVar25;
          pfVar21 = pfVar25;
          while (pfVar21 != pfVar4) {
            pfVar21 = pfVar21 + -1;
            if (*pfVar21 <= fVar35) break;
            *pfVar12 = *pfVar21;
            pfVar12 = pfVar12 + -1;
          }
          *pfVar12 = fVar35;
        }
      }
      else {
        pfVar25 = pfVar4 + 0x1c;
        pfVar12 = pfVar4;
        if (pfVar4 != pfVar25) {
          while (pfVar12 = pfVar12 + 1, pfVar12 != pfVar25) {
            fVar35 = *pfVar12;
            pfVar21 = pfVar12;
            pfVar13 = pfVar12;
            while (pfVar13 != pfVar4) {
              pfVar13 = pfVar13 + -1;
              if (*pfVar13 <= fVar35) break;
              *pfVar21 = *pfVar13;
              pfVar21 = pfVar21 + -1;
            }
            *pfVar21 = fVar35;
          }
        }
        for (; pfVar25 != pfVar22; pfVar25 = pfVar25 + 1) {
          fVar35 = *pfVar25;
          fVar1 = pfVar25[-1];
          pfVar12 = pfVar25 + -1;
          pfVar4 = pfVar25;
          while (pfVar21 = pfVar12, fVar35 < fVar1) {
            *pfVar4 = fVar1;
            pfVar12 = pfVar21 + -1;
            fVar1 = *pfVar12;
            pfVar4 = pfVar21;
          }
          *pfVar4 = fVar35;
        }
      }
    }
    *(uint64_t *)(lVar5 + 0xb0) = 0;
    uVar20 = (longlong)pfStack_1d8 - (longlong)pfStack_1e0 >> 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar20;
    lVar11 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3,8);
    iVar7 = (int)((uVar20 - lVar11 >> 1) + lVar11 >> 6);
    lVar11 = (longlong)iVar7;
    if (3 < lVar11) {
      fVar35 = 1.0 / (float)iVar7;
      pfVar22 = pfStack_1e0 + 2;
      lVar27 = (lVar11 - 4U >> 2) + 1;
      uVar14 = lVar27 * 4;
      dVar34 = 0.0;
      do {
        dVar34 = (double)(fVar35 * pfVar22[-2]) + dVar34;
        *(double *)(lVar5 + 0xb0) = dVar34;
        dVar34 = (double)(fVar35 * pfVar22[-1]) + dVar34;
        *(double *)(lVar5 + 0xb0) = dVar34;
        dVar34 = (double)(fVar35 * *pfVar22) + dVar34;
        *(double *)(lVar5 + 0xb0) = dVar34;
        dVar34 = dVar34 + (double)(fVar35 * pfVar22[1]);
        *(double *)(lVar5 + 0xb0) = dVar34;
        pfVar22 = pfVar22 + 4;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    if ((longlong)uVar14 < lVar11) {
      do {
        dVar34 = dVar34 + (double)((1.0 / (float)iVar7) * pfStack_1e0[uVar14]);
        *(double *)(lVar5 + 0xb0) = dVar34;
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < lVar11);
    }
    *(int32_t *)(lVar5 + 0x60) = 2;
    if (pfStack_1e0 != (float *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    goto LAB_180202111;
  }
  if (*(int *)(_DAT_180c8aa40 + 0x60) == 2) {
    if (param_2 == 0) {
      if (*(char *)(_DAT_180c8aa40 + 0xda) == '\0') {
        if (system_debug_flag != '\0') {
          FUN_180202180(_DAT_180c8aa40);
        }
        goto LAB_1802020ad;
      }
      puStack_208 = &unknown_var_3456_ptr;
      uStack_1f0 = 0;
      puStack_200 = (void *)0x0;
      uStack_1f8 = 0;
      pcVar15 = param_3[1];
      cVar6 = *pcVar15;
      while (cVar6 != '\0') {
        if (pcVar15[uVar14] == ':') {
          pcVar15[uVar14] = ',';
          pcVar15 = param_3[1];
        }
        uVar14 = uVar14 + 1;
        cVar6 = pcVar15[uVar14];
      }
      pcVar29 = "";
      if (pcVar15 != (char *)0x0) {
        pcVar29 = pcVar15;
      }
      lVar11 = -1;
      do {
        lVar27 = lVar11;
        lVar11 = lVar27 + 1;
      } while (pcVar29[lVar11] != '\0');
      if (0 < (int)lVar11) {
        FUN_1806277c0(&puStack_208,(int)lVar11);
                    // WARNING: Subroutine does not return
        memcpy(puStack_200 + uStack_1f8,pcVar29,(longlong)((int)lVar27 + 2));
      }
      iVar7 = func_0x000180203790();
      puVar28 = &unknown_var_208_ptr;
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_224_ptr,puVar31);
      iVar7 = func_0x000180203740();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_256_ptr,puVar31);
      iVar7 = func_0x0001802036f0();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_352_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0x620);
      iVar32 = 1;
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_376_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0x690);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_304_ptr,puVar31);
      iVar7 = func_0x0001802036a0();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_328_ptr,puVar31);
      lVar11 = _DAT_180c86920;
      iVar7 = func_0x00018010cc20(_DAT_180c86920);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else {
        iVar7 = func_0x00018010cc20(lVar11);
        if (iVar7 == 1) {
          puVar31 = &unknown_var_220_ptr;
        }
        else {
          iVar7 = func_0x00018010cc20(lVar11);
          if (iVar7 == 2) {
            puVar31 = &unknown_var_188_ptr;
          }
          else {
            iVar7 = func_0x00018010cc20(lVar11);
            if (iVar7 == 3) {
              puVar31 = &system_data_f804;
            }
            else {
              iVar7 = func_0x00018010cc20(lVar11);
              puVar31 = &unknown_var_292_ptr;
              if (iVar7 == 4) {
                puVar31 = &unknown_var_280_ptr;
              }
            }
          }
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_464_ptr,puVar31);
      iVar7 = func_0x000180203660();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_488_ptr,puVar31);
      iVar7 = func_0x000180203610();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_408_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0x5b0);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_432_ptr,puVar31);
      iVar7 = func_0x0001802035d0();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_576_ptr,puVar31);
      iVar7 = func_0x000180203590();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_600_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0x8c0);
      if (iVar7 < 1) {
        if (iVar7 != 0) {
          if (0 < iVar7) goto LAB_1802012f1;
          uVar18 = 5;
          if (iVar7 == 0) {
            uVar18 = uVar19;
          }
          goto LAB_180201300;
        }
        puVar31 = &unknown_var_208_ptr;
      }
      else {
LAB_1802012f1:
        uVar18 = 4;
LAB_180201300:
        puVar31 = &unknown_var_292_ptr;
        if (uVar18 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_512_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0xfc0);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_536_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0x850);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_680_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0x9a0);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_696_ptr,puVar31);
      puVar31 = &unknown_var_292_ptr;
      if (0 < *(int *)(_DAT_180c86920 + 0x1030)) {
        puVar31 = &unknown_var_280_ptr;
      }
      FUN_180628040(&puStack_208,&unknown_var_624_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0xee0);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_656_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0xa10);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_768_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0x7e0);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_188_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = 2;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_792_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0x770);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_720_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0xf50);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_744_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0x930);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar8 = 5;
          if (-1 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_864_ptr,puVar31);
      puVar31 = &unknown_var_292_ptr;
      if (-1 < *(int *)(_DAT_180c86920 + 0x10a0)) {
        puVar31 = &unknown_var_280_ptr;
      }
      FUN_180628040(&puStack_208,&unknown_var_888_ptr,puVar31);
      iVar7 = func_0x000180203550();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_808_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0xd20);
      if (iVar7 < 1) {
        if (iVar7 == 0) {
          puVar31 = &unknown_var_208_ptr;
          goto LAB_1802016f7;
        }
        if (0 < iVar7) goto LAB_1802016d3;
        uVar18 = 5;
        if (iVar7 == 0) {
          uVar18 = uVar19;
        }
      }
      else {
LAB_1802016d3:
        uVar18 = 4;
      }
      puVar31 = &unknown_var_292_ptr;
      if (uVar18 == 4) {
        puVar31 = &unknown_var_280_ptr;
      }
LAB_1802016f7:
      FUN_180628040(&puStack_208,&unknown_var_832_ptr,puVar31);
      iVar7 = func_0x000180203500();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_960_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0xc40);
      if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else {
        if (iVar7 < 2) {
          iVar8 = 5;
          if (0 < iVar7) {
            iVar8 = iVar32;
          }
        }
        else {
          iVar8 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar8 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_992_ptr,puVar31);
      iVar7 = func_0x0001802034c0();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_912_ptr,puVar31);
      iVar7 = *(int *)(_DAT_180c86920 + 0xa80);
      if (iVar7 == 0) {
        puVar31 = &unknown_var_188_ptr;
      }
      else {
        if (iVar7 < 1) {
          iVar32 = 5;
          if (-1 < iVar7) {
            iVar32 = 2;
          }
        }
        else {
          iVar32 = 4;
        }
        puVar31 = &unknown_var_292_ptr;
        if (iVar32 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_936_ptr,puVar31);
      iVar7 = func_0x000180203470();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_1064_ptr,puVar31);
      iVar7 = func_0x000180203420();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_1088_ptr,puVar31);
      iVar7 = func_0x0001802033f0();
      if (iVar7 == 0) {
        puVar31 = &unknown_var_208_ptr;
      }
      else if (iVar7 == 1) {
        puVar31 = &unknown_var_220_ptr;
      }
      else if (iVar7 == 2) {
        puVar31 = &unknown_var_188_ptr;
      }
      else if (iVar7 == 3) {
        puVar31 = &system_data_f804;
      }
      else {
        puVar31 = &unknown_var_292_ptr;
        if (iVar7 == 4) {
          puVar31 = &unknown_var_280_ptr;
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_1016_ptr,puVar31);
      iVar7 = func_0x0001802033c0();
      if (iVar7 != 0) {
        if (iVar7 == 1) {
          puVar28 = &unknown_var_220_ptr;
        }
        else if (iVar7 == 2) {
          puVar28 = &unknown_var_188_ptr;
        }
        else if (iVar7 == 3) {
          puVar28 = &system_data_f804;
        }
        else {
          puVar28 = &unknown_var_292_ptr;
          if (iVar7 == 4) {
            puVar28 = &unknown_var_280_ptr;
          }
        }
      }
      FUN_180628040(&puStack_208,&unknown_var_1040_ptr,puVar28);
      lVar11 = *(longlong *)(lVar5 + 0x70);
      lVar27 = *(longlong *)(lVar5 + 0x68);
      uVar18 = uStack_1f8 + 0x10;
      FUN_1806277c0(&puStack_208,uVar18);
      puVar23 = (uint64_t *)(puStack_200 + uStack_1f8);
      *puVar23 = 0x2053504620555043;
      puVar23[1] = 0x202c7365756c6156;
      *(int8_t *)(puVar23 + 2) = 0;
      iVar7 = (int)(lVar11 - lVar27 >> 2);
      lVar27 = (longlong)(iVar7 + -1);
      lVar11 = 0x14;
      uStack_1f8 = uVar18;
      if (0x14 < lVar27) {
        lVar30 = 0x14;
        do {
          FUN_1806284c0(&puStack_208,*(int32_t *)(*(longlong *)(lVar5 + 0x68) + lVar30 * 4));
          uVar18 = uStack_1f8 + 1;
          FUN_1806277c0(&puStack_208,uVar18);
          *(int16_t *)(puStack_200 + uStack_1f8) = 0x2c;
          lVar30 = lVar30 + 1;
          uStack_1f8 = uVar18;
        } while (lVar30 < lVar27);
      }
      FUN_1806284c0(&puStack_208,
                    *(int32_t *)(*(longlong *)(lVar5 + 0x68) + -4 + (longlong)iVar7 * 4));
      uVar18 = uStack_1f8 + 0x11;
      FUN_1806277c0(&puStack_208,uVar18);
      puVar23 = (uint64_t *)(puStack_200 + uStack_1f8);
      *puVar23 = 0x535046205550470a;
      puVar23[1] = 0x2c7365756c615620;
      *(int16_t *)(puVar23 + 2) = 0x20;
      uStack_1f8 = uVar18;
      if (0x14 < lVar27) {
        do {
          FUN_1806284c0(&puStack_208,*(int32_t *)(*(longlong *)(lVar5 + 0x88) + lVar11 * 4));
          uVar18 = uStack_1f8 + 1;
          FUN_1806277c0(&puStack_208,uVar18);
          *(int16_t *)(puStack_200 + uStack_1f8) = 0x2c;
          lVar11 = lVar11 + 1;
          uStack_1f8 = uVar18;
        } while (lVar11 < lVar27);
      }
      FUN_1806284c0(&puStack_208,
                    *(int32_t *)(*(longlong *)(lVar5 + 0x88) + -4 + (longlong)iVar7 * 4));
      FUN_1800ba4b0(auStack_1b8,&unknown_var_1112_ptr);
      uVar18 = uStack_1a8 + 6;
      FUN_1806277c0(auStack_1b8,uVar18);
      puVar24 = (int32_t *)(puStack_1b0 + uStack_1a8);
      *puVar24 = 0x75736572;
      *(int16_t *)(puVar24 + 1) = 0x746c;
      *(int8_t *)((longlong)puVar24 + 6) = 0;
      puVar26 = (int8_t *)0x0;
      puStack_148 = &unknown_var_3456_ptr;
      uStack_130 = 0;
      puStack_140 = (int32_t *)0x0;
      uStack_138 = 0;
      uStack_1a8 = uVar18;
      puVar24 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(int8_t *)puVar24 = 0;
      puStack_140 = puVar24;
      uVar9 = FUN_18064e990(puVar24);
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar9);
      *puVar24 = 0x7673632e;
      *(int8_t *)(puVar24 + 1) = 0;
      uStack_138 = 4;
      iStack_178 = 1;
      puStack_198 = &unknown_var_3456_ptr;
      uStack_180 = 0;
      puStack_190 = (int8_t *)0x0;
      iStack_188 = 0;
      do {
        uVar18 = uStack_1a8;
        puStack_170 = &unknown_var_3456_ptr;
        uStack_158 = 0;
        puStack_168 = (int8_t *)0x0;
        uStack_160 = 0;
        uStack_1c0 = 1;
        uVar14 = (ulonglong)uStack_1a8;
        puVar16 = puVar26;
        uVar19 = 0;
        if (puStack_1b0 == (int8_t *)0x0) {
LAB_180201c59:
          if (uVar18 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puVar16,puStack_1b0,uVar14);
          }
        }
        else {
          uVar19 = 0;
          if (uStack_1a8 != 0) {
            iVar7 = uStack_1a8 + 1;
            if (iVar7 < 0x10) {
              iVar7 = 0x10;
            }
            puVar16 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
            *puVar16 = 0;
            puStack_168 = puVar16;
            uVar19 = FUN_18064e990(puVar16);
            uStack_158 = CONCAT44(uStack_158._4_4_,uVar19);
            goto LAB_180201c59;
          }
        }
        uStack_160 = uVar18;
        if (puVar16 != (int8_t *)0x0) {
          puVar16[uVar14] = 0;
        }
        uStack_150 = uStack_19c;
        uStack_158 = CONCAT44(uStack_19c,(int32_t)uStack_158);
        if (0 < iStack_188) {
          iVar7 = uVar18 + iStack_188;
          if (iVar7 != 0) {
            if (puVar16 == (int8_t *)0x0) {
              iVar7 = iVar7 + 1;
              if (iVar7 < 0x10) {
                iVar7 = 0x10;
              }
              puVar16 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
              *puVar16 = 0;
            }
            else {
              if (iVar7 + 1U <= uVar19) goto LAB_180201cec;
              uStack_218 = 0x13;
              puVar16 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar16,iVar7 + 1U,0x10);
            }
            puStack_168 = puVar16;
            uVar9 = FUN_18064e990(puVar16);
            uStack_158 = CONCAT44(uStack_158._4_4_,uVar9);
          }
LAB_180201cec:
                    // WARNING: Subroutine does not return
          memcpy(puVar16 + uVar14,puStack_190,(longlong)(iStack_188 + 1));
        }
        pfStack_1e0 = (float *)&unknown_var_3456_ptr;
        uStack_1c8 = 0;
        pfStack_1d8 = (float *)0x0;
        uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
        uStack_1c0 = 3;
        puVar17 = puVar26;
        uVar19 = 0;
        if (puVar16 == (int8_t *)0x0) {
LAB_180201d86:
          if (uVar18 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puVar17,puVar16,uVar14);
          }
        }
        else {
          uVar19 = 0;
          if (uVar18 != 0) {
            iVar7 = uVar18 + 1;
            if (iVar7 < 0x10) {
              iVar7 = 0x10;
            }
            puVar17 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar7,0x13);
            *puVar17 = 0;
            pfStack_1d8 = (float *)puVar17;
            uVar19 = FUN_18064e990(puVar17);
            uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar19);
            goto LAB_180201d86;
          }
        }
        uStack_1d0._0_4_ = uVar18;
        if (puVar17 != (int8_t *)0x0) {
          puVar17[uVar14] = 0;
        }
        uStack_1c8._4_4_ = uStack_150;
        if (uVar18 + 4 != 0) {
          uVar10 = uVar18 + 5;
          if (puVar17 == (int8_t *)0x0) {
            if ((int)uVar10 < 0x10) {
              uVar10 = 0x10;
            }
            puVar17 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar10,0x13);
            *puVar17 = 0;
          }
          else {
            if (uVar10 <= uVar19) goto LAB_180201e1d;
            uStack_218 = 0x13;
            puVar17 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar17,uVar10,0x10);
          }
          pfStack_1d8 = (float *)puVar17;
          uStack_1c8._0_4_ = FUN_18064e990(puVar17);
        }
LAB_180201e1d:
        puVar24 = puStack_140;
        *(int32_t *)(puVar17 + uVar14) = *puStack_140;
        puVar17[uVar14 + 4] = *(int8_t *)(puStack_140 + 1);
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar18 + 4);
        cVar6 = FUN_180624af0(&pfStack_1e0);
        iVar7 = iStack_178;
        uStack_1c0 = 1;
        pfStack_1e0 = (float *)&unknown_var_3456_ptr;
        if (pfStack_1d8 != (float *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        pfStack_1d8 = (float *)0x0;
        uStack_1c8 = (ulonglong)uStack_1c8._4_4_ << 0x20;
        pfStack_1e0 = (float *)&unknown_var_720_ptr;
        uStack_1c0 = 0;
        puStack_170 = &unknown_var_3456_ptr;
        if (puVar16 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar16);
        }
        puStack_168 = (int8_t *)0x0;
        uStack_158 = uStack_158 & 0xffffffff00000000;
        puStack_170 = &unknown_var_720_ptr;
        if (cVar6 == '\0') goto LAB_180201ee2;
        iStack_188 = 0;
        if (puStack_190 != (int8_t *)0x0) {
          *puStack_190 = 0;
        }
        iStack_178 = iStack_178 + 1;
        FUN_180628040(&puStack_198,&unknown_var_1752_ptr,iVar7);
      } while( true );
    }
  }
  else if ((*(int *)(_DAT_180c8aa40 + 0x60) == 1) && (param_2 == 0)) {
LAB_1802020ad:
    *(uint64_t *)(lVar5 + 0x70) = *(uint64_t *)(lVar5 + 0x68);
    *(uint64_t *)(lVar5 + 0x90) = *(uint64_t *)(lVar5 + 0x88);
    *(int32_t *)(lVar5 + 0x10) = 0;
    if (*(int8_t **)(lVar5 + 8) != (int8_t *)0x0) {
      **(int8_t **)(lVar5 + 8) = 0;
    }
    *(uint64_t *)(lVar5 + 0xc0) = 0;
    *(uint64_t *)(lVar5 + 0xb8) = 0;
    *(int32_t *)(lVar5 + 0x60) = 0;
    goto LAB_180202111;
  }
  if (param_2 == 3) {
    FUN_180627be0(_DAT_180c8aa40,param_3);
  }
  else if (param_2 == 4) {
    FUN_180202660(_DAT_180c8aa40);
    *(int32_t *)(lVar5 + 0xdc) = 1;
  }
LAB_180202111:
  *param_3 = &unknown_var_3456_ptr;
  if (param_3[1] == (void *)0x0) {
    param_3[1] = (void *)0x0;
    *(int32_t *)(param_3 + 3) = 0;
    *param_3 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_238);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
LAB_180201ee2:
  if (iStack_188 < 1) {
    iVar7 = uStack_1a8 + 4;
    FUN_1806277c0(auStack_1b8,iVar7);
    *(int32_t *)(puStack_1b0 + uStack_1a8) = *puVar24;
    *(int8_t *)((longlong)(puStack_1b0 + uStack_1a8) + 4) = *(int8_t *)(puVar24 + 1);
    uStack_1a8 = iVar7;
    puVar23 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
    puVar26 = &system_buffer_ptr;
    if (puStack_1b0 != (int8_t *)0x0) {
      puVar26 = puStack_1b0;
    }
    *puVar23 = 0;
    *(int8_t *)(puVar23 + 2) = 0;
    FUN_18062dee0(puVar23,puVar26,&system_data_c7ec);
    puVar28 = &system_buffer_ptr;
    if (puStack_200 != (void *)0x0) {
      puVar28 = puStack_200;
    }
    fwrite(puVar28,(longlong)(int)uStack_1f8,1,puVar23[1]);
    FUN_18062de90(puVar23);
    puStack_198 = &unknown_var_3456_ptr;
    if (puStack_190 == (int8_t *)0x0) {
      puStack_190 = (int8_t *)0x0;
      uStack_180 = uStack_180 & 0xffffffff00000000;
      puStack_198 = &unknown_var_720_ptr;
      puStack_148 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar24);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (uStack_1a8 + iStack_188 != 0) {
    uVar18 = uStack_1a8 + iStack_188 + 1;
    if (puStack_1b0 == (int8_t *)0x0) {
      if ((int)uVar18 < 0x10) {
        uVar18 = 0x10;
      }
      puStack_1b0 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar18,0x13);
      *puStack_1b0 = 0;
    }
    else {
      if (uVar18 <= uStack_1a0) goto LAB_180201f5b;
      uStack_218 = 0x13;
      puStack_1b0 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_1b0,uVar18,0x10);
    }
    uStack_1a0 = FUN_18064e990(puStack_1b0);
  }
LAB_180201f5b:
                    // WARNING: Subroutine does not return
  memcpy(puStack_1b0 + uStack_1a8,puStack_190,(longlong)(iStack_188 + 1));
}







