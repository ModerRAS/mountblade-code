n//  的语义化别名
#define SystemCore_SystemMonitor 


// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator



// 02_core_engine_part149_sub002_sub002.c - 1 个函数

// 函数: void FUN_180137f90(int *param_1,int64_t param_2)
void FUN_180137f90(int *param_1,int64_t param_2)

{
  uint *puVar1;
  int32_t *puVar2;
  int64_t *plVar3;
  int32_t *puVar4;
  float fVar5;
  byte bVar6;
  uint64_t *puVar7;
  int32_t uVar8;
  char cVar9;
  int iVar10;
  int32_t uVar11;
  int32_t uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int64_t lVar16;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int64_t lVar22;
  int *piVar23;
  uint uVar24;
  int64_t lVar25;
  int64_t lVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStackX_8;
  float fStackX_c;
  int64_t lStackX_10;
  uint64_t uStackX_18;
  int8_t uStackX_20;
  uint64_t in_stack_fffffffffffffeb8;
  uint64_t uVar33;
  int iStack_138;
  uint64_t uStack_128;
  float fStack_120;
  float fStack_11c;
  int iStack_114;
  int *piStack_110;
  int iStack_108;
  int iStack_104;
  int64_t lStack_100;
  int32_t uStack_f8;
  float fStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e8;
  float fStack_e4;
  int32_t uStack_e0;
  int *piStack_d8;
  uint64_t uStack_d0;
  int *piVar17;
  
  lVar25 = SYSTEM_DATA_MANAGER_A;
  uStack_d0 = 0xfffffffffffffffe;
  lStack_100 = SYSTEM_DATA_MANAGER_A;
  iStack_104 = param_1[0x23] + 1;
  iStack_108 = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1a90);
  if ((*(byte *)((int64_t)param_1 + 0xa1) & 2) != 0) {
    fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
    if (iStack_104 == iStack_108) goto LAB_18013802c;
  }
  fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
LAB_18013802c:
  piVar19 = (int *)0x0;
  if ((param_1[0x27] == 0) || (iStack_114 = 1, iStack_104 != iStack_108)) {
    iStack_114 = 0;
  }
  *(byte *)((int64_t)param_1 + 0xa1) = *(byte *)((int64_t)param_1 + 0xa1) & 0xfd;
  param_1[0x27] = 0;
  bVar27 = false;
  piVar23 = *(int **)(param_1 + 2);
  piStack_110 = param_1;
  while (piVar18 = piVar23, piVar18 != (int *)0x0) {
    piStack_110 = piVar18;
    piVar23 = *(int **)(piVar18 + 2);
  }
  if (*(int64_t *)(lVar25 + 0x1cd8) == 0) {
    if (((*(int64_t *)(lVar25 + 0x1c98) != 0) &&
        (*(int64_t *)(*(int64_t *)(lVar25 + 0x1c98) + 0x3b0) == *(int64_t *)(param_2 + 0x3a0)))
       && (bVar27 = false, piStack_110[0x25] == *param_1)) {
      bVar27 = true;
    }
  }
  else {
    bVar27 = *(int **)(*(int64_t *)(lVar25 + 0x1cd8) + 0x408) == param_1;
  }
  bVar6 = *(byte *)(param_1 + 0x28);
  if ((bVar6 & 0x40) == 0) {
    uStackX_20 = *(int8_t *)(param_2 + 0xb4);
    if ((bVar6 & 0x10) == 0) {
      *(int8_t *)(param_2 + 0xb4) = 0;
      *(int32_t *)(param_2 + 0x16c) = 1;
      *(int32_t *)(param_2 + 0x170) = 2;
    }
    lStackX_10 = param_2;
    FUN_18012e2d0(*param_1);
    piVar23 = *(int **)(param_1 + 0xc);
    piStack_d8 = piVar23;
    if (piVar23 == (int *)0x0) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      uStackX_18 = (int *)func_0x000180120ce0(0x60,SYSTEM_DATA_MANAGER_B);
      piVar23 = piVar19;
      if (uStackX_18 != (int *)0x0) {
        uStackX_18[0] = 0;
        uStackX_18[1] = 0;
        uStackX_18[2] = 0;
        uStackX_18[3] = 0;
        uStackX_18[10] = 0x7f7fffff;
        uStackX_18[0xb] = 0x7f7fffff;
        uStackX_18[0xc] = -0x800001;
        uStackX_18[0xd] = -0x800001;
        uStackX_18[4] = 0;
        uStackX_18[5] = 0;
        uStackX_18[6] = 0;
        uStackX_18[7] = 0;
        uStackX_18[8] = -1;
        uStackX_18[9] = -1;
        uStackX_18[0xe] = 0;
        uStackX_18[0xf] = 0;
        uStackX_18[0x10] = 0;
        uStackX_18[0x11] = 0;
        uStackX_18[0x12] = 0;
        uStackX_18[0x13] = 0;
        uStackX_18[0x14] = 0;
        uStackX_18[0x15] = 0;
        uStackX_18[0x16] = -0x10000;
        piVar23 = uStackX_18;
      }
      *(int **)(param_1 + 0xc) = piVar23;
      uStack_128 = uStackX_18;
    }
    lVar16 = SYSTEM_DATA_MANAGER_A;
    uVar12 = (int32_t)((uint64_t)in_stack_fffffffffffffeb8 >> 0x20);
    iStack_138 = 0;
    iVar13 = iStack_138;
    iStack_138 = 0;
    iVar15 = iVar13;
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1bc0) < *(int *)(SYSTEM_DATA_MANAGER_A + 0x1bb0)) {
      iVar10 = SystemCore_HandleInput(&rendering_buffer_2696_ptr,0,
                             *(int32_t *)
                              (*(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x220) + -4 +
                              (int64_t)*(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218) * 4
                              ));
      uVar12 = (int32_t)((uint64_t)in_stack_fffffffffffffeb8 >> 0x20);
      if (*(int *)(lVar16 + 0x1b2c) == iVar10) {
        *(int *)(lVar16 + 0x1b34) = iVar10;
      }
      if (*(int *)(lVar16 + 0x1b30) == iVar10) {
        *(int8_t *)(lVar16 + 0x1b3f) = 1;
      }
      iVar15 = iStack_138;
      if (*(int *)(*(int64_t *)(lVar16 + 0x1bb8) + (int64_t)*(int *)(lVar16 + 0x1bc0) * 0x30) ==
          iVar10) {
        fVar32 = (float)param_1[0xf];
        *(int *)(lVar16 + 0x1bf4) = param_1[0xe];
        *(float *)(lVar16 + 0x1bf8) =
             *(float *)(lVar16 + 0x1660) + *(float *)(lVar16 + 0x1660) + *(float *)(lVar16 + 0x19f8)
             + fVar32;
        *(uint64_t *)(lVar16 + 0x1bfc) = 0;
        *(int32_t *)(lVar16 + 0x1bd0) = 1;
        *(int8_t *)(lVar16 + 0x1c14) = 1;
        cVar9 = FUN_18012eff0();
        uVar12 = (int32_t)((uint64_t)in_stack_fffffffffffffeb8 >> 0x20);
        if (cVar9 != '\0') {
          bVar27 = true;
          if (*piVar23 == 1) {
            cVar9 = FUN_18011aad0(&rendering_buffer_2728_ptr);
            if (cVar9 != '\0') {
              *(byte *)((int64_t)param_1 + 0xa1) = *(byte *)((int64_t)param_1 + 0xa1) | 0x10;
              iVar13 = iStack_138;
            }
          }
          else {
            param_2 = lStackX_10;
            if (0 < *piVar23) {
              uStackX_18 = (int *)0x0;
              piVar18 = piVar19;
              piVar21 = piVar19;
              do {
                lVar25 = *(int64_t *)(piVar23 + 2);
                cVar9 = FUN_180119960(**(uint64_t **)((int64_t)piVar18 + lVar25 + 8),
                                      *(int *)((int64_t)piVar18 + lVar25) == piVar23[5],0,
                                      &uStackX_18);
                if (cVar9 != '\0') {
                  iStack_138 = *(int *)((int64_t)piVar18 + lVar25);
                  piVar23[6] = iStack_138;
                }
                func_0x00018012e760(0,0xbf800000);
                SystemCore_CacheManager0(&rendering_buffer_2720_ptr);
                uVar12 = (int32_t)((uint64_t)in_stack_fffffffffffffeb8 >> 0x20);
                uVar14 = (int)piVar21 + 1;
                piVar21 = (int *)(uint64_t)uVar14;
                piVar18 = piVar18 + 10;
                param_2 = lStackX_10;
                lVar25 = lStack_100;
                iVar13 = iStack_138;
              } while ((int)uVar14 < *piVar23);
            }
          }
          iStack_138 = iVar13;
          FUN_18012f0c0();
          iVar15 = iStack_138;
        }
      }
    }
    iStack_138 = iVar15;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf7;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | bVar27 << 3;
    if (bVar27 != false) {
      param_1[0x24] = *(int *)(lVar25 + 0x1a90);
    }
    fVar32 = (float)param_1[0xe];
    fVar31 = fVar32 + (float)param_1[0x10];
    fVar29 = (float)param_1[0xf];
    uStack_128 = *(int **)(param_1 + 0xe);
    fVar30 = *(float *)(lVar25 + 0x1660) + *(float *)(lVar25 + 0x1660) + *(float *)(lVar25 + 0x19f8)
             + fVar29;
    if (*(char *)(param_2 + 0xb2) == '\0') {
      lVar16 = (uint64_t)(bVar27 != false) + 10;
    }
    else {
      lVar16 = 0xc;
    }
    plVar3 = (int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1628 + (lVar16 + 10) * 0x10);
    lStack_100 = *plVar3;
    uStack_f8 = (int32_t)plVar3[1];
    fStack_f4 = *(float *)((int64_t)plVar3 + 0xc) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    fStack_120 = fVar31;
    fStack_11c = fVar30;
    uVar11 = func_0x000180121e20(&lStack_100);
    uVar33 = CONCAT44(uVar12,*(int32_t *)(param_2 + 0x78));
    MathInterpolationCalculator0(*(uint64_t *)(param_2 + 0x2e8),&uStack_128,&fStack_120,uVar11,uVar33,3);
    uVar11 = (int32_t)((uint64_t)uVar33 >> 0x20);
    uStack_f0 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1718);
    uStack_ec = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x171c);
    uStack_e8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1720);
    fStack_e4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    lStack_100 = CONCAT44(fStack_11c,fStack_120);
    uStackX_18 = (int *)CONCAT44(fVar30,fVar32);
    uVar12 = func_0x000180121e20(&uStack_f0);
    SystemCore_SystemMonitor(*(uint64_t *)(param_2 + 0x2e8),&uStackX_18,&lStack_100,uVar12,
                  CONCAT44(uVar11,*(int32_t *)(lVar25 + 0x1638)));
    iVar13 = SystemCore_HandleInput(&rendering_buffer_2480_ptr,0,
                           *(int32_t *)
                            (*(int64_t *)(param_2 + 0x220) + -4 +
                            (int64_t)*(int *)(param_2 + 0x218) * 4));
    lVar16 = SYSTEM_DATA_MANAGER_A;
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar13) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar13;
    }
    if (*(int *)(lVar16 + 0x1b30) == iVar13) {
      *(int8_t *)(lVar16 + 0x1b3f) = 1;
    }
    cVar9 = FUN_180110000(iVar13,&uStack_128,param_1);
    if (cVar9 != '\0') {
      FUN_18012eaf0();
    }
    if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) != 0) &&
       (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) ==
        *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x144))) {
      iStack_138 = piVar23[5];
    }
    iVar13 = *piVar23;
    uStackX_18 = (int *)CONCAT44(uStackX_18._4_4_,iVar13);
    piVar18 = piVar19;
    piVar21 = piVar19;
    if (0 < param_1[8]) {
      do {
        lVar16 = *(int64_t *)((int64_t)piVar18 + *(int64_t *)(param_1 + 10));
        if ((*(int64_t *)(lVar25 + 0x1c98) != 0) &&
           (*(int64_t *)(*(int64_t *)(lVar25 + 0x1c98) + 0x3a8) == lVar16)) {
          piVar23[5] = *(int *)(lVar16 + 8);
        }
        if ((*(int *)(lVar16 + 8) != 0) && (0 < *piVar23)) {
          piVar17 = piVar19;
          piVar20 = *(int **)(piVar23 + 2);
          do {
            if (*piVar20 == *(int *)(lVar16 + 8)) {
              if (*(int **)(piVar23 + 2) + (int64_t)(int)piVar17 * 10 != (int *)0x0)
              goto LAB_180138640;
              break;
            }
            uVar14 = (int)piVar17 + 1;
            piVar17 = (int *)(uint64_t)uVar14;
            piVar20 = piVar20 + 10;
          } while ((int)uVar14 < *piVar23);
        }
        FUN_18011bbb0(piVar23,0x400000,lVar16);
LAB_180138640:
        uVar14 = (int)piVar21 + 1;
        piVar18 = piVar18 + 2;
        piVar21 = (int *)(uint64_t)uVar14;
      } while ((int)uVar14 < param_1[8]);
      iVar13 = *piVar23;
    }
    iVar15 = iVar13 + -1;
    if (-1 < iVar15) {
      lVar16 = (int64_t)iVar15 * 0x28;
      do {
        uVar14 = *(uint *)(lVar16 + 4 + *(int64_t *)(piVar23 + 2));
        if ((uVar14 >> 0x16 & 1) == 0) break;
        *(uint *)(lVar16 + 4 + *(int64_t *)(piVar23 + 2)) = uVar14 & 0xffbfffff;
        lVar16 = lVar16 + -0x28;
        iVar10 = iVar15 + -1;
        iVar13 = iVar15;
        iVar15 = iVar10;
      } while (-1 < iVar10);
    }
    if (iVar13 + 1 < *piVar23) {
      qsort(*(int64_t *)(piVar23 + 2) + (int64_t)iVar13 * 0x28,(int64_t)(*piVar23 - iVar13),0x28,
            &processed_var_8704_ptr);
    }
    if (((piStack_d8 == (int *)0x0) && (iVar13 = param_1[0x26], iVar13 != 0)) && (0 < *piVar23)) {
      piVar18 = piVar19;
      piVar21 = *(int **)(piVar23 + 2);
      do {
        if (*piVar21 == iVar13) {
          if (*(int **)(piVar23 + 2) + (int64_t)(int)piVar18 * 10 != (int *)0x0) {
            piVar23[6] = iVar13;
            piVar23[5] = iVar13;
            goto LAB_180138724;
          }
          break;
        }
        uVar14 = (int)piVar18 + 1;
        piVar18 = (int *)(uint64_t)uVar14;
        piVar21 = piVar21 + 10;
      } while ((int)uVar14 < *piVar23);
    }
    if ((int)uStackX_18 < *piVar23) {
      iVar13 = *(int *)(*(int64_t *)
                         (*(int64_t *)(piVar23 + 2) + -0x20 + (int64_t)*piVar23 * 0x28) + 8);
      piVar23[6] = iVar13;
      piVar23[5] = iVar13;
    }
LAB_180138724:
    fVar28 = (float)param_1[0xe];
    fStack_120 = fVar28 + (float)param_1[0x10];
    fVar5 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
    fStack_11c = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) + *(float *)(SYSTEM_DATA_MANAGER_A + 0x1660) + fVar5 +
                 (float)param_1[0xf];
    if ((*(byte *)((int64_t)param_1 + 0xa1) & 1) != 0) {
      fVar28 = fVar5 + *(float *)(SYSTEM_DATA_MANAGER_A + 0x165c) + fVar28;
    }
    uStack_128 = (int *)CONCAT44(param_1[0xf],fVar28);
    if ((char)*(byte *)(param_1 + 0x28) < '\0') {
      fStack_120 = fStack_120 - (fVar5 + *(float *)(SYSTEM_DATA_MANAGER_A + 0x165c) + 1.0);
    }
    uVar14 = (*(byte *)(param_1 + 0x28) & 0x10) << 0x11;
    uVar24 = uVar14 | 0x90000b;
    if ((*(char *)(param_2 + 0xb2) == '\0') && (bVar27 != false)) {
      uVar24 = uVar14 | 0xd0000b;
    }
    FUN_18011aea0(piVar23,&uStack_128,uVar24,param_1);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    piVar18 = piVar19;
    piVar21 = piVar19;
    if (0 < param_1[8]) {
      do {
        puVar7 = *(uint64_t **)((int64_t)piVar21 + *(int64_t *)(param_1 + 10));
        if ((((fStackX_8._0_1_ == '\0') && (iStack_114 != *(int *)(puVar7 + 1))) ||
            ((*(char *)((int64_t)puVar7 + 0xb7) == '\0' ||
             ((*(uint *)((int64_t)puVar7 + 0xc) & 0x100000) != 0)))) &&
           ((*(int *)(lVar25 + 0x1a90) <= *(int *)(puVar7 + 0x50) + 1 || (iStack_104 != iStack_108))
           )) {
          uVar24 = *(uint *)((int64_t)puVar7 + 0xc) >> 0x14 & 1;
          uStackX_18 = (int *)CONCAT71(uStackX_18._1_7_,1);
          uVar14 = uVar24 | 0x100004;
          if ((piVar23[0x13] & 4U) == 0) {
            uVar14 = uVar24 | 0x100000;
          }
          piVar17 = (int *)&uStackX_18;
          if (*(char *)((int64_t)puVar7 + 0xb7) == '\0') {
            piVar17 = piVar19;
          }
          FUN_18011c360(piVar23,*puVar7,piVar17,uVar14,puVar7);
          if ((char)uStackX_18 == '\0') {
            param_1[0x27] = *(int *)(puVar7 + 1);
          }
          if (piVar23[7] == *(int *)(puVar7 + 1)) {
            *(uint64_t **)(param_1 + 0x1c) = puVar7;
          }
          *(int32_t *)((int64_t)puVar7 + 0x41c) = *(int32_t *)(lStackX_10 + 0x148);
          uVar12 = *(int32_t *)(lStackX_10 + 0x150);
          uVar11 = *(int32_t *)(lStackX_10 + 0x154);
          uVar8 = *(int32_t *)(lStackX_10 + 0x158);
          *(int32_t *)(puVar7 + 0x84) = *(int32_t *)(lStackX_10 + 0x14c);
          *(int32_t *)((int64_t)puVar7 + 0x424) = uVar12;
          *(int32_t *)(puVar7 + 0x85) = uVar11;
          *(int32_t *)((int64_t)puVar7 + 0x42c) = uVar8;
          if (((*(int64_t *)(lVar25 + 0x1c98) != 0) &&
              (*(uint64_t **)(*(int64_t *)(lVar25 + 0x1c98) + 0x3a8) == puVar7)) &&
             ((*(byte *)((int64_t)puVar7 + 0x174) & 2) == 0)) {
            *(int32_t *)(lStackX_10 + 0x3cc) = *(int32_t *)(puVar7 + 1);
          }
        }
        uVar14 = (int)piVar18 + 1;
        piVar18 = (int *)(uint64_t)uVar14;
        piVar21 = piVar21 + 2;
      } while ((int)uVar14 < param_1[8]);
    }
    lVar16 = *(int64_t *)(param_1 + 0x1c);
    if ((lVar16 != 0) && ((bVar27 != false || (*(int64_t *)(piStack_110 + 0x1c) == 0)))) {
      *(int64_t *)(piStack_110 + 0x1c) = lVar16;
      lVar16 = *(int64_t *)(param_1 + 0x1c);
    }
    lVar22 = SYSTEM_DATA_MANAGER_A;
    lVar26 = lStackX_10;
    if (lVar16 != 0) {
      if (*(char *)(lVar16 + 0xb7) == '\0') {
        *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
        lVar16 = *(int64_t *)(lVar22 + 0x1af8);
        puVar1 = (uint *)(lVar16 + 0x1a8);
        *puVar1 = *puVar1 | 4;
        FUN_18011d940(lVar16 + 0x1b8);
        lVar16 = SYSTEM_DATA_MANAGER_A;
        uVar12 = *(int32_t *)(lVar25 + 0x16c8);
        uVar11 = *(int32_t *)(lVar25 + 0x16cc);
        uVar8 = *(int32_t *)(lVar25 + 0x16d0);
        fVar28 = *(float *)(lVar25 + 0x16d4);
        uStack_f0 = 0;
        uStack_ec = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
        uStack_e8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
        fStack_e4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
        uStack_e0 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d4);
        FUN_18013e100(SYSTEM_DATA_MANAGER_A + 0x1b80,&uStack_f0);
        *(int32_t *)(lVar16 + 0x16c8) = uVar12;
        *(int32_t *)(lVar16 + 0x16cc) = uVar11;
        *(int32_t *)(lVar16 + 0x16d0) = uVar8;
        *(float *)(lVar16 + 0x16d4) = fVar28 * 0.5;
      }
      lVar26 = lStackX_10;
      fVar28 = *(float *)(lVar25 + 0x19f8) * 0.5;
      fStackX_8 = fVar31 - (fVar28 + *(float *)(lVar25 + 0x165c));
      fStackX_c = fVar28 + *(float *)(lVar25 + 0x1660) + fVar29;
      iVar13 = SystemCore_HandleInput(&rendering_buffer_2512_ptr,0,
                             *(int32_t *)
                              (*(int64_t *)(lStackX_10 + 0x220) + -4 +
                              (int64_t)*(int *)(lStackX_10 + 0x218) * 4));
      lVar16 = SYSTEM_DATA_MANAGER_A;
      if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar13) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar13;
      }
      if (*(int *)(lVar16 + 0x1b30) == iVar13) {
        *(int8_t *)(lVar16 + 0x1b3f) = 1;
      }
      cVar9 = FUN_18010fd40(iVar13,&fStackX_8,fVar28 + 1.0);
      if (((cVar9 != '\0') && (piVar23[7] != 0)) && (0 < *piVar23)) {
        piVar18 = piVar19;
        piVar21 = *(int **)(piVar23 + 2);
        do {
          if (*piVar21 == piVar23[7]) {
            piVar18 = *(int **)(piVar23 + 2) + (int64_t)(int)piVar18 * 10;
            if (piVar18 != (int *)0x0) {
              param_1[0x27] = *piVar18;
              if (piVar23[7] == *piVar18) {
                if ((*(byte *)(piVar18 + 1) & 1) == 0) {
                  piVar18[4] = -1;
                  piVar23[5] = 0;
                  piVar23[6] = 0;
                }
              }
              else if ((*(byte *)(piVar18 + 1) & 1) != 0) {
                piVar23[6] = *piVar18;
              }
            }
            break;
          }
          uVar14 = (int)piVar18 + 1;
          piVar18 = (int *)(uint64_t)uVar14;
          piVar21 = piVar21 + 10;
        } while ((int)uVar14 < *piVar23);
      }
      lVar22 = SYSTEM_DATA_MANAGER_A;
      if (*(char *)(*(int64_t *)(param_1 + 0x1c) + 0xb7) == '\0') {
        puVar2 = (int32_t *)
                 (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x10 +
                 (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14);
        uVar12 = puVar2[1];
        uVar11 = puVar2[2];
        uVar8 = puVar2[3];
        puVar4 = (int32_t *)
                 (SYSTEM_DATA_MANAGER_A + 0x16c8 +
                 (int64_t)
                 *(int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b88) + -0x14 +
                         (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b80) * 0x14) * 0x10);
        *puVar4 = *puVar2;
        puVar4[1] = uVar12;
        puVar4[2] = uVar11;
        puVar4[3] = uVar8;
        *(int *)(lVar22 + 0x1b80) = *(int *)(lVar22 + 0x1b80) + -1;
        *(int8_t *)(*(int64_t *)(lVar22 + 0x1af8) + 0xb1) = 1;
        lVar16 = *(int64_t *)(lVar22 + 0x1af8);
        iVar13 = *(int *)(lVar16 + 0x1b8);
        iVar15 = iVar13 + -1;
        *(int *)(lVar16 + 0x1b8) = iVar15;
        if (iVar15 == 0) {
          *(int32_t *)(lVar16 + 0x1a8) = 0;
        }
        else {
          *(int32_t *)(lVar16 + 0x1a8) =
               *(int32_t *)(*(int64_t *)(lVar16 + 0x1c0) + -8 + (int64_t)iVar13 * 4);
        }
      }
    }
    if ((*(int64_t *)(lVar25 + 0x1b00) == lVar26) && (*(int *)(lVar25 + 0x1b18) == 0)) {
      lVar25 = *(int64_t *)(lVar22 + 0x1af8);
      if (fVar32 <= *(float *)(lVar25 + 0x228)) {
        fVar32 = *(float *)(lVar25 + 0x228);
      }
      fVar28 = *(float *)(lVar25 + 0x22c);
      if (*(float *)(lVar25 + 0x22c) <= fVar29) {
        fVar28 = fVar29;
      }
      if (*(float *)(lVar25 + 0x230) <= fVar31) {
        fVar31 = *(float *)(lVar25 + 0x230);
      }
      fVar29 = *(float *)(lVar25 + 0x234);
      if (fVar30 <= *(float *)(lVar25 + 0x234)) {
        fVar29 = fVar30;
      }
      if ((((fVar32 - *(float *)(lVar22 + 0x167c) <= *(float *)(lVar22 + 0x118)) &&
           (fVar28 - *(float *)(lVar22 + 0x1680) <= *(float *)(lVar22 + 0x11c))) &&
          (*(float *)(lVar22 + 0x118) < fVar31 + *(float *)(lVar22 + 0x167c))) &&
         (*(float *)(lVar22 + 0x11c) < fVar29 + *(float *)(lVar22 + 0x1680))) {
        lVar25 = *(int64_t *)(lVar22 + 0x1c80);
        if (((fVar28 < *(float *)(lVar25 + 0xc) + *(float *)(lVar25 + 0x14)) &&
            (*(float *)(lVar25 + 0xc) < fVar29)) &&
           ((((fVar32 < *(float *)(lVar25 + 8) + *(float *)(lVar25 + 0x10) &&
              ((*(float *)(lVar25 + 8) < fVar31 && (*(float *)(lVar22 + 0x424) == 0.0)))) &&
             (iStack_138 = piVar23[5], iStack_138 != 0)) && (0 < *piVar23)))) {
          piVar18 = piVar19;
          piVar21 = *(int **)(piVar23 + 2);
          do {
            if (*piVar21 == iStack_138) {
              piVar18 = *(int **)(piVar23 + 2) + (int64_t)(int)piVar18 * 10;
              if (piVar18 != (int *)0x0) {
                FUN_1801248f0(*(uint64_t *)(piVar18 + 2));
              }
              break;
            }
            uVar14 = (int)piVar18 + 1;
            piVar18 = (int *)(uint64_t)uVar14;
            piVar21 = piVar21 + 10;
          } while ((int)uVar14 < *piVar23);
        }
      }
    }
    iVar13 = piVar23[6];
    if (piVar23[6] == 0) {
      iVar13 = iStack_138;
    }
    if ((iVar13 != 0) && (0 < *piVar23)) {
      piVar18 = *(int **)(piVar23 + 2);
      do {
        if (*piVar18 == iVar13) {
          piVar19 = *(int **)(piVar23 + 2) + (int64_t)(int)piVar19 * 10;
          if (piVar19 != (int *)0x0) {
            SystemCore_DataCompressor(*(uint64_t *)(piVar19 + 2));
            lVar25 = *(int64_t *)(piVar19 + 2);
            if (((*(uint *)(lVar25 + 0xc) >> 0x12 & 1) == 0) &&
               (((*(uint *)(lVar25 + 0xc) & 0x5000000) != 0x1000000 ||
                (*(int *)(lVar25 + 0x3c8) == 0)))) {
              *(int32_t *)(lVar22 + 0x1ca0) = 0;
              *(int32_t *)
               (*(int64_t *)(lVar22 + 0x1c98) + 0x3c8 + (int64_t)*(int *)(lVar22 + 0x1cfc) * 4) =
                   0;
              *(int16_t *)(lVar22 + 0x1d09) = 1;
              *(int32_t *)(lVar22 + 0x1d0c) = 0;
              *(int32_t *)(lVar22 + 0x1d10) = 0x7f7fffff;
              *(int32_t *)(lVar22 + 0x1d14) = 0x7f7fffff;
              *(int32_t *)(lVar22 + 0x1d18) = 0xff7fffff;
              *(int32_t *)(lVar22 + 0x1d1c) = 0xff7fffff;
              *(int8_t *)(lVar22 + 0x1d08) = 1;
            }
            else {
              *(int32_t *)(lVar22 + 0x1ca0) = *(int32_t *)(lVar25 + 0x3c8);
            }
          }
          break;
        }
        uVar14 = (int)piVar19 + 1;
        piVar19 = (int *)(uint64_t)uVar14;
        piVar18 = piVar18 + 10;
      } while ((int)uVar14 < *piVar23);
    }
    FUN_18011b190();
    piVar19 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar19 = *piVar19 + -1;
    if ((*(byte *)(param_1 + 0x28) & 0x10) == 0) {
      *(int32_t *)(lVar26 + 0x16c) = 0;
      *(int32_t *)(lVar26 + 0x170) = 1;
      *(int8_t *)(lVar26 + 0xb4) = uStackX_20;
    }
  }
  else {
    if (0 < param_1[8]) {
      piVar19 = (int *)**(uint64_t **)(param_1 + 10);
    }
    *(int **)(param_1 + 0x1c) = piVar19;
    *(byte *)(param_1 + 0x28) = bVar6 & 0xf7 | bVar27 << 3;
    if (bVar27 != false) {
      param_1[0x24] = *(int *)(lVar25 + 0x1a90);
    }
    if (piVar19 != (int *)0x0) {
      if ((bVar27 != false) || (*(int64_t *)(piStack_110 + 0x1c) == 0)) {
        *(int **)(piStack_110 + 0x1c) = piVar19;
      }
      if (*(int64_t *)(param_1 + 0xc) != 0) {
        *(int32_t *)(*(int64_t *)(param_1 + 0xc) + 0x1c) =
             *(int32_t *)(*(int64_t *)(param_1 + 0x1c) + 8);
      }
    }
  }
  return;
}



uint64_t FUN_180138ed0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int *piVar8;
  
  lVar3 = *(int64_t *)(param_2 + 0x410);
  if (lVar3 == 0) {
    iVar5 = 1;
  }
  else {
    if (*(int64_t *)(lVar3 + 0x10) != 0) {
      return 1;
    }
    iVar5 = *(int *)(lVar3 + 0x20);
    if (iVar5 < 1) {
      return 0;
    }
  }
  lVar4 = *(int64_t *)(param_1 + 0x410);
  lVar7 = 0;
  do {
    lVar6 = param_2;
    if (lVar3 != 0) {
      lVar6 = *(int64_t *)(*(int64_t *)(lVar3 + 0x28) + lVar7 * 8);
    }
    if (((lVar4 == 0) || ((*(byte *)(lVar4 + 0xa0) & 0x10) == 0)) ||
       (*(short *)(param_1 + 0xbc) <= *(short *)(lVar6 + 0xbc))) {
      piVar8 = (int *)(lVar4 + 0x54);
      if (lVar4 == 0) {
        piVar8 = (int *)(param_1 + 0x14);
      }
      iVar1 = *(int *)(lVar6 + 0x14);
      iVar2 = *piVar8;
      if (iVar2 == iVar1) {
        return 1;
      }
      if ((iVar2 == 0) || ((char)piVar8[4] == '\0')) {
        if (iVar1 == 0) goto LAB_180138f93;
      }
      else if (iVar1 == 0) {
        return 1;
      }
      if ((*(char *)(lVar6 + 0x24) != '\0') && (iVar2 == 0)) {
        return 1;
      }
    }
LAB_180138f93:
    lVar7 = lVar7 + 1;
    if (iVar5 <= lVar7) {
      return 0;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180139060(float *param_1,uint param_2,float *param_3,char param_4)

{
  int64_t lVar1;
  int iVar2;
  uint7 uVar4;
  uint64_t uVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  fVar10 = param_1[2] - *param_1;
  fVar8 = param_1[3] - param_1[1];
  fVar5 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 0.5;
  fVar6 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 1.5;
  fVar7 = fVar10;
  if (fVar8 <= fVar10) {
    fVar7 = fVar8;
  }
  fVar9 = fVar7 * 0.125;
  if (fVar7 * 0.125 <= fVar5) {
    fVar9 = fVar5;
  }
  if (fVar6 <= fVar9) {
    fVar9 = fVar6;
  }
  if (param_4 == '\0') {
    fVar6 = (float)(int)fVar9;
    fVar5 = fVar6 * 2.4;
    fVar9 = (float)(int)(fVar9 * 0.9);
    fVar7 = fVar5;
  }
  else {
    fVar6 = (float)(int)(fVar9 * 1.5);
    fVar9 = (float)(int)(fVar9 * 0.8);
    fVar5 = fVar10 * 0.5 - fVar9;
    fVar7 = fVar8 * 0.5 - fVar9;
  }
  iVar2 = (int)((param_1[1] + param_1[3]) * 0.5);
  fVar8 = (float)(int)((*param_1 + param_1[2]) * 0.5);
  fVar10 = (float)iVar2;
  if (param_2 == 0xffffffff) {
    *param_3 = fVar8 - fVar6;
    param_3[1] = fVar10 - fVar6;
    param_3[2] = fVar8 + fVar6;
    param_3[3] = fVar10 + fVar6;
  }
  else if (param_2 == 2) {
    fVar7 = fVar10 - (float)(int)fVar7;
    *param_3 = fVar8 - fVar6;
    param_3[1] = fVar7 - fVar9;
    param_3[2] = fVar8 + fVar6;
    param_3[3] = fVar7 + fVar9;
  }
  else {
    if (param_2 == 3) {
      fVar11 = (float)(int)fVar7 + fVar10;
      fVar7 = fVar8 - fVar6;
      fVar5 = fVar8 + fVar6;
      fVar12 = fVar11 + fVar9;
      fVar11 = fVar11 - fVar9;
    }
    else {
      if (param_2 == 0) {
        fVar7 = fVar8 - (float)(int)fVar5;
        *param_3 = fVar7 - fVar9;
        param_3[1] = fVar10 - fVar6;
        param_3[2] = fVar7 + fVar9;
        param_3[3] = fVar10 + fVar6;
        goto LAB_180139300;
      }
      if (param_2 != 1) goto LAB_180139300;
      fVar7 = (float)(int)fVar5 + fVar8;
      fVar11 = fVar10 - fVar6;
      fVar12 = fVar10 + fVar6;
      fVar5 = fVar7 + fVar9;
      fVar7 = fVar7 - fVar9;
    }
    *param_3 = fVar7;
    param_3[1] = fVar11;
    param_3[2] = fVar5;
    param_3[3] = fVar12;
  }
LAB_180139300:
  fStack_68 = (float)*(uint64_t *)param_3;
  fStack_64 = (float)((uint64_t)*(uint64_t *)param_3 >> 0x20);
  fStack_60 = (float)*(uint64_t *)(param_3 + 2);
  fStack_5c = (float)((uint64_t)*(uint64_t *)(param_3 + 2) >> 0x20);
  if (param_4 == '\0') {
    fVar8 = *(float *)(lVar1 + 0x118) - fVar8;
    fVar10 = *(float *)(lVar1 + 0x11c) - fVar10;
    iVar2 = (int)(fVar6 * 0.3);
    fVar7 = (float)iVar2;
    fStack_68 = fStack_68 - fVar7;
    fStack_64 = fStack_64 - fVar7;
    fStack_60 = fStack_60 + fVar7;
    fStack_5c = fStack_5c + fVar7;
    fVar7 = fVar10 * fVar10 + fVar8 * fVar8;
    if (fVar7 < fVar6 * fVar6 * 1.9599999) {
      return (uint64_t)CONCAT31((int3)((uint)iVar2 >> 8),param_2 == 0xffffffff);
    }
    if (fVar7 < fVar6 * fVar6 * 6.7599993) {
      if (ABS(fVar10) < ABS(fVar8)) {
        return (uint64_t)(param_2 == 0.0 < fVar8);
      }
      return (uint64_t)(param_2 == (0.0 < fVar10) + 2);
    }
  }
  uVar4 = (uint7)(uint3)((uint)iVar2 >> 8);
  if ((((*(float *)(lVar1 + 0x118) < fStack_68) || (*(float *)(lVar1 + 0x11c) < fStack_64)) ||
      (fStack_60 <= *(float *)(lVar1 + 0x118))) || (fStack_5c <= *(float *)(lVar1 + 0x11c))) {
    uVar3 = (uint64_t)uVar4 << 8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
  }
  return uVar3;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_180139440(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,char param_5,
                  byte param_6)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte bVar5;
  char cVar6;
  float *pfVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int8_t uVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int64_t lVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int8_t auStackX_8 [8];
  uint64_t uStackX_10;
  int8_t auStackX_18 [8];
  uint64_t uStackX_20;
  uint64_t uStack_48;
  float fStack_40;
  float fStack_3c;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  lVar16 = param_2;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0xa0) & 4) == 0)) {
    lVar4 = *(int64_t *)(param_2 + 8);
    while (lVar2 = lVar4, lVar2 != 0) {
      lVar16 = lVar2;
      lVar4 = *(int64_t *)(lVar2 + 8);
    }
  }
  if (param_2 == 0) {
    bVar5 = *(byte *)(param_1 + 0xb7);
  }
  else {
    bVar5 = *(byte *)(param_2 + 0xa0) >> 7;
  }
  if ((bVar5 != 0) || (bVar5 = 0, *(char *)(param_3 + 0xb7) != '\0')) {
    bVar5 = 0x80;
  }
  *(byte *)(param_4 + 0xa0) = *(byte *)(param_4 + 0xa0) & 0x7f;
  *(byte *)(param_4 + 0xa0) = *(byte *)(param_4 + 0xa0) | bVar5;
  if (param_2 == 0) {
    bVar5 = ~(byte)(*(uint *)(param_1 + 0xc) >> 5);
  }
  else {
    bVar5 = 1;
  }
  *(byte *)(param_4 + 0xa1) = *(byte *)(param_4 + 0xa1) & 0xfe;
  *(byte *)(param_4 + 0xa1) = *(byte *)(param_4 + 0xa1) | bVar5 & 1;
  puVar9 = (uint64_t *)(lVar16 + 0x38);
  if (param_2 == 0) {
    puVar9 = (uint64_t *)(param_1 + 0x40);
  }
  puVar8 = (uint64_t *)(lVar16 + 0x40);
  if (param_2 == 0) {
    puVar8 = (uint64_t *)(param_1 + 0x48);
  }
  *(uint64_t *)(param_4 + 0x38) = *puVar9;
  *(uint64_t *)(param_4 + 0x40) = *puVar8;
  lVar16 = *(int64_t *)(param_3 + 0x410);
  if (((lVar16 == 0) || (*(int64_t *)(lVar16 + 0x10) == 0)) || (*(int64_t *)(lVar16 + 0x80) != 0))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  *(byte *)(param_4 + 0xa9) = param_6 ^ 1;
  if ((bVar1) &&
     (((param_2 == 0 || (*(int64_t *)(param_2 + 0x10) != 0)) || (*(int *)(param_2 + 0x20) != 0))))
  {
    *(int8_t *)(param_4 + 0xa9) = 0;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 4) & 8) != 0)) {
    uVar10 = *(int8_t *)(param_4 + 0xa9);
    if ((*(byte *)(param_2 + 0xa0) & 0x20) != 0) {
      uVar10 = 0;
    }
    *(int8_t *)(param_4 + 0xa9) = uVar10;
  }
  *(int8_t *)(param_4 + 0xaa) = 1;
  if (((param_2 != 0) && ((*(byte *)(param_2 + 4) & 2) != 0)) || (*(char *)(lVar3 + 0xc0) != '\0'))
  {
    *(int8_t *)(param_4 + 0xaa) = 0;
  }
  if (((param_6 == 0) && (param_2 != 0)) && (*(int64_t *)(param_2 + 8) == 0)) {
    uVar10 = *(int8_t *)(param_4 + 0xaa);
    if ((*(byte *)(param_2 + 0xa0) & 0x20) != 0) {
      uVar10 = 0;
    }
    *(int8_t *)(param_4 + 0xaa) = uVar10;
  }
  *(int64_t *)(param_4 + 0xb0) = param_2;
  *(int32_t *)(param_4 + 0xb8) = 0xffffffff;
  cVar6 = '\0';
  *(int8_t *)(param_4 + 0xab) = 0;
  iVar11 = -1;
  uVar12 = 0xffffffff;
  if (*(char *)(param_1 + 0xb2) == '\0') {
    do {
      if (iVar11 == -1) {
        cVar6 = *(char *)(param_4 + 0xa9);
      }
      else {
        cVar6 = *(char *)(param_4 + 0xaa);
      }
      if (cVar6 != '\0') {
        uStack_48 = *(uint64_t *)(param_4 + 0x38);
        fStack_40 = *(float *)(param_4 + 0x38) + *(float *)(param_4 + 0x40);
        fStack_3c = *(float *)(param_4 + 0x3c) + *(float *)(param_4 + 0x44);
        cVar6 = FUN_180139060(&uStack_48,fStack_3c,((int64_t)(iVar11 + 1) + 0xc) * 0x10 + param_4);
        if (cVar6 != '\0') {
          *(int *)(param_4 + 0xb8) = iVar11;
          *(int8_t *)(param_4 + 0xab) = 1;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
    cVar6 = *(char *)(param_4 + 0xab);
    uVar12 = *(uint *)(param_4 + 0xb8);
  }
  if ((uVar12 == 0xffffffff) && (uVar12 = 0xffffffff, *(char *)(param_4 + 0xa9) == '\0')) {
    uVar10 = 0;
    uVar12 = 0xffffffff;
  }
  else {
    uVar10 = 1;
  }
  *(int8_t *)(param_4 + 0xa8) = uVar10;
  if (((param_5 == '\0') && (cVar6 == '\0')) && (*(char *)(lVar3 + 0xc1) == '\0')) {
    *(int8_t *)(param_4 + 0xa8) = 0;
  }
  *(int32_t *)(param_4 + 0xbc) = 0;
  if (uVar12 != 0xffffffff) {
    if (uVar12 < 2) {
      pfVar13 = (float *)&uStackX_10;
      lVar16 = 0x40;
    }
    else {
      pfVar13 = (float *)((int64_t)&uStackX_10 + 4);
      lVar16 = 0x44;
    }
    auStackX_18 = *(int8_t (*) [8])(param_4 + 0x38);
    fVar22 = *(float *)(lVar3 + 0x1674);
    uStackX_20 = *(uint64_t *)(param_4 + 0x40);
    auStackX_8 = (int8_t  [8])0x0;
    uStackX_10 = 0;
    if (uVar12 < 2) {
      auStackX_18._4_4_ = (int32_t)((uint64_t)auStackX_18 >> 0x20);
      pfVar7 = (float *)((int64_t)auStackX_8 + 4);
      uStackX_20._4_4_ = (float)((uint64_t)uStackX_20 >> 0x20);
      pfVar18 = (float *)((int64_t)&uStackX_10 + 4);
      uStack_48._0_4_ = (float)*(uint64_t *)(param_3 + 0x48);
      pfVar15 = (float *)auStackX_18;
      pfVar14 = (float *)auStackX_8;
      puVar9 = (uint64_t *)auStackX_18;
      puVar8 = (uint64_t *)auStackX_8;
      pfVar17 = (float *)&uStackX_20;
      pfVar19 = (float *)&uStackX_10;
      uStack_48._4_4_ = (float)uStack_48;
      uStackX_20._0_4_ = uStackX_20._4_4_;
      auStackX_18._0_4_ = auStackX_18._4_4_;
    }
    else {
      pfVar7 = (float *)auStackX_8;
      pfVar18 = (float *)&uStackX_10;
      uStack_48._4_4_ = (float)((uint64_t)*(uint64_t *)(param_3 + 0x48) >> 0x20);
      pfVar15 = (float *)((int64_t)auStackX_18 + 4);
      pfVar14 = (float *)((int64_t)auStackX_8 + 4);
      puVar9 = (uint64_t *)((int64_t)auStackX_18 + 4);
      puVar8 = (uint64_t *)((int64_t)auStackX_8 + 4);
      pfVar17 = (float *)((int64_t)&uStackX_20 + 4);
      pfVar19 = (float *)((int64_t)&uStackX_10 + 4);
    }
    *pfVar18 = (float)uStackX_20;
    fVar21 = *pfVar17;
    *pfVar7 = (float)auStackX_18._0_4_;
    fVar21 = fVar21 - fVar22;
    fVar20 = fVar21 * 0.5;
    if ((uStack_48._4_4_ <= 0.0) || (fVar20 < uStack_48._4_4_)) {
      uStack_48._4_4_ = (float)(int)fVar20;
    }
    *pfVar19 = uStack_48._4_4_;
    if ((uVar12 - 1 & 0xfffffffd) == 0) {
      *pfVar14 = (float)(int)(fVar21 - uStack_48._4_4_) + *pfVar15 + fVar22;
    }
    else if ((uVar12 & 0xfffffffd) == 0) {
      *(int32_t *)puVar8 = *(int32_t *)puVar9;
    }
    fVar21 = *pfVar13 / *(float *)(lVar16 + param_4);
    fVar22 = 0.0;
    if ((0.0 <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21)) {
      fVar22 = 1.0;
    }
    *(int8_t (*) [8])(param_4 + 0x38) = auStackX_8;
    *(uint64_t *)(param_4 + 0x40) = uStackX_10;
    if ((uVar12 - 1 & 0xfffffffd) == 0) {
      fVar22 = 1.0 - fVar22;
    }
    cVar6 = *(char *)(param_4 + 0xab);
    *(float *)(param_4 + 0xbc) = fVar22;
  }
  return cVar6;
}



int8_t FUN_1801396ea(void)

{
  int32_t uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  float *pfVar5;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  float *pfVar6;
  int64_t unaff_RDI;
  float *pfVar7;
  int64_t lVar8;
  float *pfVar9;
  int32_t *puVar10;
  int64_t in_R11;
  uint64_t unaff_R14;
  int32_t *puVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  int32_t uVar15;
  float fVar16;
  float fVar17;
  
  if (unaff_EBX < 2) {
    pfVar5 = (float *)(unaff_RBP + 0x38);
    lVar8 = 0x40;
  }
  else {
    pfVar5 = (float *)(unaff_RBP + 0x3c);
    lVar8 = 0x44;
  }
  uVar2 = *(uint64_t *)(unaff_RSI + 0x48);
  fVar17 = *(float *)(unaff_RDI + 0x1674);
  *(uint64_t *)(unaff_RBP + 0x40) = *(uint64_t *)(in_R11 + 0x38);
  *(uint64_t *)(unaff_RBP + 0x48) = *(uint64_t *)(in_R11 + 0x40);
  *(uint64_t *)(unaff_RBP + 0x30) = unaff_R14;
  *(uint64_t *)(unaff_RBP + 0x38) = unaff_R14;
  *(uint64_t *)(unaff_RBP + -0x20) = uVar2;
  if (unaff_EBX < 2) {
    uVar1 = *(int32_t *)(unaff_RBP + 0x44);
    puVar3 = (int32_t *)(unaff_RBP + 0x34);
    uVar15 = *(int32_t *)(unaff_RBP + 0x4c);
    puVar10 = (int32_t *)(unaff_RBP + 0x3c);
    fVar14 = *(float *)(unaff_RBP + -0x20);
    pfVar7 = (float *)(unaff_RBP + 0x40);
    pfVar6 = (float *)(unaff_RBP + 0x30);
    puVar4 = (int32_t *)(unaff_RBP + 0x40);
    puVar11 = (int32_t *)(unaff_RBP + 0x30);
    pfVar9 = (float *)(unaff_RBP + 0x48);
    pfVar12 = (float *)(unaff_RBP + 0x38);
  }
  else {
    uVar1 = *(int32_t *)(unaff_RBP + 0x40);
    puVar3 = (int32_t *)(unaff_RBP + 0x30);
    uVar15 = *(int32_t *)(unaff_RBP + 0x48);
    puVar10 = (int32_t *)(unaff_RBP + 0x38);
    fVar14 = *(float *)(unaff_RBP + -0x1c);
    pfVar7 = (float *)(unaff_RBP + 0x44);
    pfVar6 = (float *)(unaff_RBP + 0x34);
    puVar4 = (int32_t *)(unaff_RBP + 0x44);
    puVar11 = (int32_t *)(unaff_RBP + 0x34);
    pfVar9 = (float *)(unaff_RBP + 0x4c);
    pfVar12 = (float *)(unaff_RBP + 0x3c);
  }
  *puVar10 = uVar15;
  fVar16 = *pfVar9;
  *puVar3 = uVar1;
  fVar16 = fVar16 - fVar17;
  fVar13 = fVar16 * 0.5;
  if ((fVar14 <= 0.0) || (fVar13 < fVar14)) {
    fVar14 = (float)(int)fVar13;
  }
  *pfVar12 = fVar14;
  if ((unaff_EBX - 1 & 0xfffffffd) == 0) {
    *pfVar6 = (float)(int)(fVar16 - fVar14) + *pfVar7 + fVar17;
  }
  else if ((unaff_EBX & 0xfffffffd) == 0) {
    *puVar11 = *puVar4;
  }
  fVar14 = *pfVar5 / *(float *)(lVar8 + in_R11);
  fVar17 = 0.0;
  if ((0.0 <= fVar14) && (fVar17 = fVar14, 1.0 <= fVar14)) {
    fVar17 = 1.0;
  }
  uVar2 = *(uint64_t *)(unaff_RBP + 0x38);
  *(uint64_t *)(in_R11 + 0x38) = *(uint64_t *)(unaff_RBP + 0x30);
  *(uint64_t *)(in_R11 + 0x40) = uVar2;
  if ((unaff_EBX - 1 & 0xfffffffd) == 0) {
    fVar17 = 1.0 - fVar17;
  }
  *(float *)(in_R11 + 0xbc) = fVar17;
  return *(int8_t *)(in_R11 + 0xab);
}



int8_t FUN_1801397fd(int32_t *param_1,float *param_2,float param_3)

{
  uint64_t uVar1;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int64_t in_R8;
  int64_t in_R11;
  int32_t *unaff_R14;
  float fVar2;
  
  if ((unaff_EBX & 0xfffffffd) == 0) {
    *unaff_R14 = *param_1;
  }
  fVar2 = *param_2 / *(float *)(in_R8 + in_R11);
  if ((param_3 <= fVar2) && (param_3 = fVar2, 1.0 <= fVar2)) {
    param_3 = 1.0;
  }
  uVar1 = *(uint64_t *)(unaff_RBP + 0x38);
  *(uint64_t *)(in_R11 + 0x38) = *(uint64_t *)(unaff_RBP + 0x30);
  *(uint64_t *)(in_R11 + 0x40) = uVar1;
  if ((unaff_EBX - 1 & 0xfffffffd) == 0) {
    param_3 = 1.0 - param_3;
  }
  *(float *)(in_R11 + 0xbc) = param_3;
  return *(int8_t *)(in_R11 + 0xab);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





