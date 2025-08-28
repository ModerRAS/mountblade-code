#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part083.c - 1 个函数
// 函数: void function_5f3ce0(uint64_t *param_1,int param_2)
void function_5f3ce0(uint64_t *param_1,int param_2)
{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  code *pcVar8;
  bool bVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  char cVar14;
  int64_t lVar15;
  int64_t lVar16;
  int *piVar17;
  int *piVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  int64_t lVar22;
  float *pfVar23;
  int64_t lVar24;
  float *pfVar25;
  int64_t lVar26;
  int *piVar27;
  int64_t *plVar28;
  int iVar29;
  uint8_t uVar31;
  uint *puVar30;
  uint64_t uVar32;
  uint64_t uVar33;
  int iVar34;
  uint64_t uVar35;
  int *piVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int32_t uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int iStackX_8;
  int64_t lStackX_18;
  int64_t lStackX_20;
  float fStack_240;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  int32_t local_var_22c;
  int32_t local_var_228;
  int32_t local_var_218;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint local_var_204;
  void *plocal_var_200;
  int8_t *plocal_var_1f8;
  int32_t local_var_1f0;
  uint64_t local_var_1e8;
  void *plocal_var_1e0;
  uint64_t *plocal_var_1d8;
  int32_t local_var_1d0;
  uint64_t local_var_1c8;
  void *plocal_var_1c0;
  uint64_t *plocal_var_1b8;
  int32_t local_var_1b0;
  uint64_t local_var_1a8;
  int64_t lStack_1a0;
  int *piStack_198;
  int *piStack_190;
  int *piStack_188;
  int32_t local_var_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  int32_t local_var_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  int32_t local_var_14c;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int64_t lStack_108;
  int8_t stack_array_100 [192];
  local_var_140 = 0xfffffffffffffffe;
  pfVar19 = (float *)(param_1 + 0x93);
  pfVar25 = (float *)((int64_t)param_1 + 0x3cc);
  plVar28 = param_1 + 0x1e;
  lVar26 = 8;
  do {
    fVar48 = 0.0;
    iVar29 = 0;
    lVar22 = plVar28[-4] - plVar28[-5];
    lVar15 = lVar22 >> 0x3f;
    lVar22 = lVar22 / 0x1c + lVar15;
    fStack_240 = 0.0;
    fVar46 = 0.0;
    fVar47 = 0.0;
    if (lVar22 != lVar15) {
      pfVar7 = (float *)*param_1;
      pfVar23 = (float *)(plVar28[-5] + 8);
      do {
        fVar42 = pfVar23[1] - pfVar7[2];
        fVar44 = *pfVar23 - pfVar7[1];
        fVar37 = pfVar23[-1] - *pfVar7;
        fVar37 = 1000.0 / (fVar44 * fVar44 + fVar37 * fVar37 + fVar42 * fVar42 + 1e-06);
        fVar47 = fVar47 + pfVar23[-1] * fVar37;
        fVar46 = fVar46 + *pfVar23 * fVar37;
        fStack_240 = fStack_240 + pfVar23[1] * fVar37;
        fVar48 = fVar48 + fVar37;
        iVar29 = iVar29 + 1;
        pfVar23 = pfVar23 + 7;
      } while ((uint64_t)(int64_t)iVar29 < (uint64_t)(lVar22 - lVar15));
    }
    pfVar25[-1] = fVar48;
    if (fVar48 == 0.0) {
      fVar47 = 0.0;
      fVar46 = 0.0;
      fStack_240 = 0.0;
    }
    else {
      fVar48 = 1.0 / fVar48;
      fVar47 = fVar47 * fVar48;
      fVar46 = fVar46 * fVar48;
      fStack_240 = fStack_240 * fVar48;
    }
    pfVar19[-4] = fVar47;
    pfVar19[-3] = fVar46;
    pfVar19[-2] = fStack_240;
    pfVar19[-1] = 0.0;
    fVar48 = 0.0;
    iVar29 = 0;
    lVar22 = *plVar28 - plVar28[-1];
    lVar15 = lVar22 >> 0x3f;
    lVar22 = lVar22 / 0x1c + lVar15;
    fStack_240 = 0.0;
    fVar46 = 0.0;
    fVar47 = 0.0;
    if (lVar22 != lVar15) {
      pfVar7 = (float *)*param_1;
      pfVar23 = (float *)(plVar28[-1] + 8);
      do {
        fVar44 = pfVar23[1] - pfVar7[2];
        fVar37 = *pfVar23 - pfVar7[1];
        fVar42 = pfVar23[-1] - *pfVar7;
        fVar37 = 1000.0 / (fVar42 * fVar42 + fVar37 * fVar37 + fVar44 * fVar44 + 1e-06);
        fVar47 = fVar47 + pfVar23[-1] * fVar37;
        fVar46 = fVar46 + *pfVar23 * fVar37;
        fStack_240 = fStack_240 + pfVar23[1] * fVar37;
        fVar48 = fVar48 + fVar37;
        iVar29 = iVar29 + 1;
        pfVar23 = pfVar23 + 7;
      } while ((uint64_t)(int64_t)iVar29 < (uint64_t)(lVar22 - lVar15));
    }
    *pfVar25 = fVar48;
    if (fVar48 == 0.0) {
      fVar47 = 0.0;
      fVar46 = 0.0;
      fStack_240 = 0.0;
    }
    else {
      fVar48 = 1.0 / fVar48;
      fVar47 = fVar47 * fVar48;
      fVar46 = fVar46 * fVar48;
      fStack_240 = fStack_240 * fVar48;
    }
    *pfVar19 = fVar47;
    pfVar19[1] = fVar46;
    pfVar19[2] = fStack_240;
    pfVar19[3] = 0.0;
    fVar48 = 0.0;
    iVar29 = 0;
    lVar22 = plVar28[4] - plVar28[3];
    lVar15 = lVar22 >> 0x3f;
    lVar22 = lVar22 / 0x1c + lVar15;
    fStack_240 = 0.0;
    fVar46 = 0.0;
    fVar47 = 0.0;
    if (lVar22 != lVar15) {
      pfVar7 = (float *)*param_1;
      pfVar23 = (float *)(plVar28[3] + 8);
      do {
        fVar44 = pfVar23[1] - pfVar7[2];
        fVar37 = *pfVar23 - pfVar7[1];
        fVar42 = pfVar23[-1] - *pfVar7;
        fVar37 = 1000.0 / (fVar42 * fVar42 + fVar37 * fVar37 + fVar44 * fVar44 + 1e-06);
        fVar47 = fVar47 + pfVar23[-1] * fVar37;
        fVar46 = fVar46 + *pfVar23 * fVar37;
        fStack_240 = fStack_240 + pfVar23[1] * fVar37;
        fVar48 = fVar48 + fVar37;
        iVar29 = iVar29 + 1;
        pfVar23 = pfVar23 + 7;
      } while ((uint64_t)(int64_t)iVar29 < (uint64_t)(lVar22 - lVar15));
    }
    pfVar25[1] = fVar48;
    if (fVar48 == 0.0) {
      fVar47 = 0.0;
      fVar46 = 0.0;
      fStack_240 = 0.0;
    }
    else {
      fVar48 = 1.0 / fVar48;
      fVar47 = fVar47 * fVar48;
      fVar46 = fVar46 * fVar48;
      fStack_240 = fStack_240 * fVar48;
    }
    pfVar19[4] = fVar47;
    pfVar19[5] = fVar46;
    pfVar19[6] = fStack_240;
    pfVar19[7] = 0.0;
    pfVar25 = pfVar25 + 3;
    plVar28 = plVar28 + 0xc;
    pfVar19 = pfVar19 + 0xc;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  pfVar19 = (float *)(param_1 + 0x85);
  pfVar25 = (float *)(param_1 + 0xc1);
  iVar29 = 0;
  do {
    iVar34 = iVar29 + 1;
    lVar26 = (int64_t)(int)(((iVar29 + -2 >> 0x1f & 0x18U) - 2) + iVar29);
    fVar48 = *(float *)((int64_t)param_1 + lVar26 * 4 + 0x3c8) * 0.1;
    fVar47 = *(float *)(param_1 + lVar26 * 2 + 0x92);
    fVar46 = *(float *)((int64_t)param_1 + lVar26 * 0x10 + 0x48c);
    iVar20 = -1;
    if (iVar29 < 1) {
      iVar20 = 0x17;
    }
    lVar22 = (int64_t)(iVar20 + iVar29);
    fVar38 = *(float *)((int64_t)param_1 + lVar22 * 4 + 0x3c8) * 0.2;
    fVar37 = *(float *)(param_1 + lVar22 * 2 + 0x92);
    fVar42 = *(float *)((int64_t)param_1 + lVar22 * 0x10 + 0x48c);
    lVar15 = (int64_t)iVar29;
    fVar39 = *(float *)((int64_t)param_1 + lVar15 * 4 + 0x3c8) * 0.4;
    fVar44 = *(float *)(param_1 + lVar15 * 2 + 0x92);
    fVar2 = *(float *)((int64_t)param_1 + lVar15 * 0x10 + 0x48c);
    iVar20 = 1;
    if (0x17 < iVar34) {
      iVar20 = -0x17;
    }
    lVar24 = (int64_t)(iVar20 + iVar29);
    fVar40 = *(float *)((int64_t)param_1 + lVar24 * 4 + 0x3c8) * 0.2;
    fVar3 = *(float *)(param_1 + lVar24 * 2 + 0x92);
    fVar4 = *(float *)((int64_t)param_1 + lVar24 * 0x10 + 0x48c);
    iVar20 = 2;
    if (0x17 < iVar29 + 2) {
      iVar20 = -0x16;
    }
    lVar16 = (int64_t)(iVar29 + iVar20);
    fVar45 = *(float *)((int64_t)param_1 + lVar16 * 4 + 0x3c8) * 0.1;
    fVar5 = *(float *)(param_1 + lVar16 * 2 + 0x92);
    fVar6 = *(float *)((int64_t)param_1 + lVar16 * 0x10 + 0x48c);
    fVar49 = fVar48 + fVar38 + fVar39 + fVar40 + fVar45;
    if (fVar49 == 0.0) {
      pfVar25[0] = 0.0;
      pfVar25[1] = 0.0;
      pfVar25[2] = 0.0;
      pfVar25[3] = 0.0;
    }
    else {
      fVar43 = 1.0 / fVar49;
      *pfVar25 = fVar43 * (fVar38 * *(float *)(param_1 + lVar22 * 2 + 0x91) +
                           fVar48 * *(float *)(param_1 + lVar26 * 2 + 0x91) +
                           fVar39 * *(float *)(param_1 + lVar15 * 2 + 0x91) +
                           fVar40 * *(float *)(param_1 + lVar24 * 2 + 0x91) +
                          fVar45 * *(float *)(param_1 + lVar16 * 2 + 0x91));
      pfVar25[1] = fVar43 * (fVar48 * fVar46 + fVar38 * fVar42 + fVar39 * fVar2 + fVar40 * fVar4 +
                            fVar45 * fVar6);
      pfVar25[2] = fVar43 * (fVar48 * fVar47 + fVar38 * fVar37 + fVar39 * fVar44 + fVar40 * fVar3 +
                            fVar45 * fVar5);
      pfVar25[3] = 3.4028235e+38;
    }
    *pfVar19 = fVar49;
    pfVar19 = pfVar19 + 1;
    pfVar25 = pfVar25 + 4;
    iVar29 = iVar34;
  } while (iVar34 < 0x18);
  piStack_198 = (int *)0x0;
  piStack_190 = (int *)0x0;
  piVar18 = (int *)0x0;
  piStack_188 = (int *)0x0;
  local_var_180 = 3;
  bVar9 = *(float *)((int64_t)param_1 + 0x484) < *(float *)(param_1 + 0x85);
  uVar31 = (uint8_t)((uint64_t)pfVar19 >> 8);
  iVar29 = 0;
  lStackX_20 = 0x10b;
  piVar27 = (int *)0x0;
  piVar36 = (int *)0x0;
  do {
    iVar34 = 0x17;
    if (iVar29 != -1) {
      iVar34 = iVar29;
    }
    iVar29 = iVar29 + 1;
    lVar26 = lStackX_20;
    if (0x17 < iVar29) {
      lVar26 = 0x10a;
    }
    if (*(float *)((int64_t)param_1 + (int64_t)iVar34 * 4 + 0x428) <=
        *(float *)((int64_t)param_1 + lVar26 * 4)) {
      bVar9 = true;
    }
    else if (bVar9) {
      bVar9 = false;
      if (piVar27 < piVar18) {
        piStack_190 = piVar27 + 1;
        *piVar27 = iVar34;
        piVar27 = piStack_190;
      }
      else {
        lStack_1a0 = (int64_t)piVar27 - (int64_t)piVar36;
        if (lStack_1a0 >> 2 == 0) {
          lStackX_18 = 1;
LAB_1805f44db:
          piVar17 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lStackX_18 * 4,CONCAT71(uVar31,3));
        }
        else {
          lStackX_18 = (lStack_1a0 >> 2) * 2;
          if (lStackX_18 != 0) goto LAB_1805f44db;
          piVar17 = (int *)0x0;
        }
        if (piVar36 != piVar27) {
// WARNING: Subroutine does not return
          memmove(piVar17,piVar36,lStack_1a0);
        }
        *piVar17 = iVar34;
        piVar27 = piVar17 + 1;
        if (piVar36 != (int *)0x0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(piVar36);
        }
        piVar18 = piVar17 + lStackX_18;
        bVar9 = false;
        uVar31 = 0;
        piVar36 = piVar17;
        piStack_198 = piVar17;
        piStack_190 = piVar27;
        piStack_188 = piVar18;
      }
    }
    lVar26 = 1;
    lStackX_20 = lStackX_20 + 1;
    if (0x17 < iVar29) {
      if (piVar27 < piVar18) {
        *piVar27 = 0x18;
        piVar18 = piVar36;
      }
      else {
        lVar15 = (int64_t)piVar27 - (int64_t)piVar36 >> 2;
        if ((lVar15 == 0) || (lVar26 = lVar15 * 2, lVar26 != 0)) {
          piVar18 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar26 * 4,CONCAT71(uVar31,3));
        }
        else {
          piVar18 = (int *)0x0;
        }
        if (piVar36 != piVar27) {
// WARNING: Subroutine does not return
          memmove(piVar18,piVar36,(int64_t)piVar27 - (int64_t)piVar36);
        }
        *piVar18 = 0x18;
        if (piVar36 != (int *)0x0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(piVar36);
        }
        piStack_188 = piVar18 + lVar26;
        piStack_198 = piVar18;
        piVar27 = piVar18;
      }
      piStack_190 = piVar27 + 1;
      iVar29 = 0;
      iStackX_8 = 0;
      uVar35 = (int64_t)piStack_190 - (int64_t)piVar18 >> 2;
      piVar27 = piVar18;
      if (uVar35 != 0) {
        do {
          iVar34 = *piVar18;
          if (iVar29 < iVar34) {
            plVar28 = param_1 + (int64_t)iVar29 + 1;
            do {
              if (((int64_t *)*plVar28 != (int64_t *)0x0) &&
                 (cVar14 = (**(code **)(*(int64_t *)*plVar28 + 0xd8))(), cVar14 != '\0')) {
                (**(code **)(*(int64_t *)*plVar28 + 0x68))();
              }
              iVar29 = iVar29 + 1;
              plVar28 = plVar28 + 1;
              iVar34 = *piVar18;
            } while (iVar29 < iVar34);
          }
          iVar29 = iVar34 + 1;
          if (iVar34 < 0x18) {
            if ((((int64_t *)param_1[(int64_t)iVar34 + 1] == (int64_t *)0x0) ||
                (cVar14 = (**(code **)(*(int64_t *)param_1[(int64_t)iVar34 + 1] + 0xd8))(),
                cVar14 == '\0')) ||
               (cVar14 = (**(code **)(*(int64_t *)param_1[(int64_t)*piVar18 + 1] + 0x88))(),
               cVar14 != '\0')) {
              lStack_1a0 = (int64_t)*piVar18 << 4;
              lVar26 = *(int64_t *)(&processed_var_5568_ptr + (int64_t)param_2 * 8);
              plocal_var_200 = &system_data_buffer_ptr;
              local_var_1e8 = 0;
              plocal_var_1f8 = (int8_t *)0x0;
              local_var_1f0 = 0;
              if (lVar26 != 0) {
                lVar15 = -1;
                do {
                  lVar22 = lVar15;
                  lVar15 = lVar22 + 1;
                } while (*(char *)(lVar26 + lVar15) != '\0');
                if ((int)lVar15 != 0) {
                  iVar34 = (int)lVar22 + 2;
                  iVar29 = iVar34;
                  if (iVar34 < 0x10) {
                    iVar29 = 0x10;
                  }
                  plocal_var_1f8 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar29,0x13);
                  *plocal_var_1f8 = 0;
                  uVar35 = (uint64_t)plocal_var_1f8 & 0xffffffffffc00000;
                  if (uVar35 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    lVar15 = uVar35 + 0x80 + ((int64_t)plocal_var_1f8 - uVar35 >> 0x10) * 0x50;
                    puVar30 = (uint *)(lVar15 - (uint64_t)*(uint *)(lVar15 + 4));
                    if ((*(byte *)((int64_t)puVar30 + 0xe) & 2) == 0) {
                      uVar21 = puVar30[7];
                      if (0x3ffffff < uVar21) {
                        uVar21 = *puVar30 << 0x10;
                      }
                    }
                    else {
                      uVar21 = puVar30[7];
                      if (uVar21 < 0x4000000) {
                        uVar32 = (uint64_t)uVar21;
                      }
                      else {
                        uVar32 = (uint64_t)*puVar30 << 0x10;
                      }
                      if (0x3ffffff < uVar21) {
                        uVar21 = *puVar30 << 0x10;
                      }
                      uVar21 = uVar21 - (int)(((int64_t)plocal_var_1f8 -
                                              (((int64_t)((int64_t)puVar30 + (-0x80 - uVar35)) /
                                               0x50) * 0x10000 + uVar35)) % uVar32);
                    }
                  }
                  local_var_1e8 = CONCAT44(local_var_1e8._4_4_,uVar21);
// WARNING: Subroutine does not return
                  memcpy(plocal_var_1f8,lVar26,iVar34);
                }
              }
              local_var_1f0 = 0;
              uVar41 = (**(code **)(*system_system_data_memory + 0xd0))(system_system_data_memory,&plocal_var_200);
              puVar1 = (uint64_t *)(lStack_1a0 + 0x608 + (int64_t)param_1);
              uVar10 = *puVar1;
              uVar11 = puVar1[1];
              fStack_234 = (float)uVar10;
              fStack_230 = (float)((uint64_t)uVar10 >> 0x20);
              local_var_22c = (int32_t)uVar11;
              local_var_228 = (int32_t)((uint64_t)uVar11 >> 0x20);
              fStack_210 = 0.0;
              fStack_20c = 1.0;
              fStack_208 = 0.0;
              local_var_138 = CONCAT44(fStack_234,uVar41);
              local_var_130 = CONCAT44(local_var_22c,fStack_230);
              local_var_128 = CONCAT44(0x10001,local_var_228);
              local_var_120 = 0;
              local_var_118 = 0;
              local_var_114 = 0;
              local_var_110 = 0;
              local_var_10c = 0x3f800000;
              lStack_108 = (uint64_t)local_var_204 << 0x20;
              plocal_var_200 = &system_data_buffer_ptr;
              if (plocal_var_1f8 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
                CoreMemoryPoolInitializer();
              }
              plocal_var_1f8 = (int8_t *)0x0;
              local_var_1e8 = local_var_1e8 & 0xffffffff00000000;
              plocal_var_200 = &system_state_ptr;
              local_var_148 = 0;
              plVar28 = (int64_t *)param_1[(int64_t)*piVar18 + 1];
              param_1[(int64_t)*piVar18 + 1] = 0;
              if (plVar28 != (int64_t *)0x0) {
                (**(code **)(*plVar28 + 0x38))();
              }
              iVar34 = *piVar18;
              if (-1 < (int)local_var_138) {
                function_545140(&system_data_6110,&local_var_138,0,param_1 + (int64_t)iVar34 + 1,plVar28);
                iVar34 = *piVar18;
              }
              if (((int64_t *)param_1[(int64_t)iVar34 + 1] != (int64_t *)0x0) &&
                 (cVar14 = (**(code **)(*(int64_t *)param_1[(int64_t)iVar34 + 1] + 0xd8))(),
                 cVar14 != '\0')) {
                lVar26 = (int64_t)*piVar18;
                plVar28 = (int64_t *)param_1[lVar26 + 1];
                pcVar8 = *(code **)(*plVar28 + 0x140);
                lVar26 = (int64_t)(param_1[lVar26 * 4 + 0x1a] - param_1[lVar26 * 4 + 0x19]) / 0x1c;
                fVar47 = (float)lVar26;
                if (lVar26 < 0) {
                  fVar47 = fVar47 + 1.8446744e+19;
                }
                plocal_var_1c0 = &system_data_buffer_ptr;
                local_var_1a8 = 0;
                plocal_var_1b8 = (uint64_t *)0x0;
                local_var_1b0 = 0;
                CoreMemoryPoolProcessor(&plocal_var_1c0,10);
                *plocal_var_1b8 = 0x69532064776f7243;
                *(int16_t *)(plocal_var_1b8 + 1) = 0x657a;
                *(int8_t *)((int64_t)plocal_var_1b8 + 10) = 0;
                local_var_1b0 = 10;
                (*pcVar8)(plVar28,&plocal_var_1c0,fVar47);
                plocal_var_1c0 = &system_data_buffer_ptr;
                if (plocal_var_1b8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer();
                }
                plocal_var_1b8 = (uint64_t *)0x0;
                local_var_1a8 = local_var_1a8 & 0xffffffff00000000;
                plocal_var_1c0 = &system_state_ptr;
                lVar26 = (int64_t)*piVar18;
                pfVar19 = (float *)(param_1 + lVar26 * 2 + 0xc1);
                uVar13 = *(uint64_t *)pfVar19;
                uVar11 = *(uint64_t *)pfVar19;
                pfVar25 = pfVar19 + 2;
                uVar12 = *(uint64_t *)pfVar25;
                uVar10 = *(uint64_t *)pfVar25;
                fStack_208 = *pfVar25 - *pfVar25;
                fStack_20c = pfVar19[1] - pfVar19[1];
                fStack_210 = *pfVar19 - *pfVar19;
                local_var_14c = 0x7f7fffff;
                local_var_204 = 0x7f7fffff;
                fStack_158 = fStack_210;
                fStack_154 = fStack_20c;
                fStack_150 = fStack_208;
                uVar41 = UtilitiesSystem_CryptoHandler(&fStack_210);
                param_1[lVar26 * 7 + 0xf1] = uVar11;
                (param_1 + lVar26 * 7 + 0xf1)[1] = uVar12;
                param_1[lVar26 * 7 + 0xf3] = uVar13;
                (param_1 + lVar26 * 7 + 0xf3)[1] = uVar10;
                puVar1 = param_1 + lVar26 * 7 + 0xf5;
                *(int32_t *)puVar1 = 0x3f800000;
                *(int32_t *)((int64_t)puVar1 + 4) = uVar41;
                *(float *)(puVar1 + 1) = fStack_210;
                *(float *)((int64_t)puVar1 + 0xc) = fStack_20c;
                param_1[lVar26 * 7 + 0xf7] = CONCAT44(local_var_204,fStack_208);
              }
            }
            else {
              pfVar19 = (float *)(param_1 + (int64_t)*piVar18 * 2 + 0xc1);
              fStack_168 = *pfVar19;
              fStack_164 = pfVar19[1];
              fStack_160 = pfVar19[2];
              fStack_15c = pfVar19[3];
              pfVar19 = (float *)(**(code **)(*(int64_t *)param_1[(int64_t)*piVar18 + 1] + 0xa0))
                                           ((int64_t *)param_1[(int64_t)*piVar18 + 1],stack_array_100)
              ;
              fVar37 = fStack_15c;
              fVar48 = fStack_160;
              fVar46 = fStack_164;
              fVar47 = fStack_168;
              uVar10 = *(uint64_t *)pfVar19;
              uVar11 = *(uint64_t *)(pfVar19 + 2);
              fStack_238 = (float)uVar10;
              fStack_234 = (float)((uint64_t)uVar10 >> 0x20);
              fStack_230 = (float)uVar11;
              if (((fStack_168 != *pfVar19) || (fStack_164 != pfVar19[1])) ||
                 (local_var_218 = 0x3f800000, fStack_160 != pfVar19[2])) {
                local_var_218 = 0;
              }
              fStack_208 = fStack_160 - fStack_230;
              fStack_20c = fStack_164 - fStack_234;
              fStack_210 = fStack_168 - fStack_238;
              local_var_16c = 0x7f7fffff;
              local_var_204 = 0x7f7fffff;
              fStack_178 = fStack_210;
              fStack_174 = fStack_20c;
              fStack_170 = fStack_208;
              uVar41 = UtilitiesSystem_CryptoHandler(&fStack_210);
              lVar26 = (int64_t)*piVar18;
              param_1[lVar26 * 7 + 0xf1] = uVar10;
              (param_1 + lVar26 * 7 + 0xf1)[1] = uVar11;
              pfVar19 = (float *)(param_1 + lVar26 * 7 + 0xf3);
              *pfVar19 = fVar47;
              pfVar19[1] = fVar46;
              pfVar19[2] = fVar48;
              pfVar19[3] = fVar37;
              puVar1 = param_1 + lVar26 * 7 + 0xf5;
              *(int32_t *)puVar1 = local_var_218;
              *(int32_t *)((int64_t)puVar1 + 4) = uVar41;
              *(float *)(puVar1 + 1) = fStack_210;
              *(float *)((int64_t)puVar1 + 0xc) = fStack_20c;
              param_1[lVar26 * 7 + 0xf7] = CONCAT44(local_var_204,fStack_208);
              (**(code **)(*(int64_t *)param_1[(int64_t)*piVar18 + 1] + 0xa8))
                        ((int64_t *)param_1[(int64_t)*piVar18 + 1],&fStack_168);
              lVar26 = (int64_t)*piVar18;
              plVar28 = (int64_t *)param_1[lVar26 + 1];
              pcVar8 = *(code **)(*plVar28 + 0x140);
              lVar26 = (int64_t)(param_1[lVar26 * 4 + 0x1a] - param_1[lVar26 * 4 + 0x19]) / 0x1c;
              fVar47 = (float)lVar26;
              if (lVar26 < 0) {
                fVar47 = fVar47 + 1.8446744e+19;
              }
              plocal_var_1e0 = &system_data_buffer_ptr;
              local_var_1c8 = 0;
              plocal_var_1d8 = (uint64_t *)0x0;
              local_var_1d0 = 0;
              plocal_var_1d8 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10);
              *(int8_t *)plocal_var_1d8 = 0;
              uVar32 = (uint64_t)plocal_var_1d8 & 0xffffffffffc00000;
              if (uVar32 == 0) {
                uVar21 = 0;
              }
              else {
                lVar26 = uVar32 + 0x80 + ((int64_t)plocal_var_1d8 - uVar32 >> 0x10) * 0x50;
                puVar30 = (uint *)(lVar26 - (uint64_t)*(uint *)(lVar26 + 4));
                if ((*(byte *)((int64_t)puVar30 + 0xe) & 2) == 0) {
                  uVar21 = puVar30[7];
                  if (0x3ffffff < uVar21) {
                    uVar21 = *puVar30 << 0x10;
                  }
                }
                else {
                  uVar21 = puVar30[7];
                  if (uVar21 < 0x4000000) {
                    uVar33 = (uint64_t)uVar21;
                  }
                  else {
                    uVar33 = (uint64_t)*puVar30 << 0x10;
                  }
                  if (0x3ffffff < uVar21) {
                    uVar21 = *puVar30 << 0x10;
                  }
                  uVar21 = uVar21 - (int)(((int64_t)plocal_var_1d8 -
                                          (((int64_t)((int64_t)puVar30 + (-0x80 - uVar32)) / 0x50)
                                           * 0x10000 + uVar32)) % uVar33);
                }
              }
              *plocal_var_1d8 = 0x69532064776f7243;
              *(int16_t *)(plocal_var_1d8 + 1) = 0x657a;
              *(int8_t *)((int64_t)plocal_var_1d8 + 10) = 0;
              local_var_1d0 = 10;
              local_var_1c8._0_4_ = uVar21;
              (*pcVar8)(plVar28,&plocal_var_1e0,fVar47);
              plocal_var_1e0 = &system_data_buffer_ptr;
              if (plocal_var_1d8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
                CoreMemoryPoolInitializer();
              }
              plocal_var_1d8 = (uint64_t *)0x0;
              local_var_1c8 = (uint64_t)local_var_1c8._4_4_ << 0x20;
              plocal_var_1e0 = &system_state_ptr;
            }
          }
          iStackX_8 = iStackX_8 + 1;
          piVar18 = piVar18 + 1;
          piVar27 = piStack_198;
        } while ((uint64_t)(int64_t)iStackX_8 < uVar35);
      }
      if (piVar27 == (int *)0x0) {
        return;
      }
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(piVar27);
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_5f4e90(uint64_t *param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uVar4 = 0;
  puVar2 = param_1 + 0xb;
  *param_1 = 0;
  lVar7 = 0x20;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  lVar6 = 0x20;
  puVar5 = puVar2;
  do {
    Function_3ac7e5ed(puVar5);
    puVar5 = puVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(uint64_t *)((int64_t)param_1 + 0x25c) = 0;
  *(int32_t *)(param_1 + 0x4b) = 0;
  param_1[7] = 0;
  param_1[8] = 0x20;
  param_1[9] = puVar2;
  do {
    *(int32_t *)puVar2 = 0;
    puVar2 = puVar2 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  param_1[10] = 0;
  param_1[6] = param_1 + 8;
  lVar6 = param_3 * 3 + 1 + param_4 * 2;
  param_1[4] = lVar6;
  if (lVar6 == 0) {
    param_1[3] = 0;
  }
  else {
    uVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 0x3c8,10);
    uVar3 = uVar4;
    if (uVar1 != 0) {
      puVar2 = (uint64_t *)(uVar1 + 0x388);
      do {
        puVar2[-1] = 0;
        *puVar2 = 0;
        *(int32_t *)(puVar2 + 5) = 0;
        puVar2[6] = 0;
        *(int16_t *)(puVar2 + 7) = 0x100;
        puVar2 = puVar2 + 0x79;
        lVar6 = lVar6 + -1;
        uVar3 = uVar1;
      } while (lVar6 != 0);
    }
    param_1[3] = uVar3;
    if (uVar3 == 0) {
      param_1[4] = 0;
      uVar3 = uVar4;
    }
    else {
      uVar3 = param_1[4];
    }
    uVar1 = uVar4;
    if (uVar3 != 0) {
      do {
        uVar1 = uVar1 + 1;
        *(int8_t *)(uVar4 + 0x3c1 + param_1[3]) = 0;
        uVar4 = uVar4 + 0x3c8;
      } while (uVar1 < (uint64_t)param_1[4]);
    }
  }
  return param_1;
}