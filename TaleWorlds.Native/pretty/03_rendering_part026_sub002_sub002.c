#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part026_sub002_sub002.c - 1 个函数

// 函数: void FUN_18027f510(longlong param_1,longlong *param_2)
void FUN_18027f510(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  longlong **pplVar6;
  ulonglong *puVar7;
  longlong **pplVar8;
  uint64_t uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  longlong **pplVar14;
  int iVar15;
  int32_t *puVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong *puVar23;
  longlong lVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong *plVar33;
  longlong **pplVar34;
  uint auStackX_18 [2];
  int iStackX_20;
  longlong *plStack_248;
  longlong *plStack_240;
  int iStack_238;
  longlong lStack_230;
  longlong **pplStack_228;
  int32_t uStack_220;
  int32_t uStack_21c;
  ulonglong *puStack_218;
  ulonglong *puStack_210;
  ulonglong *puStack_208;
  int32_t uStack_200;
  longlong **pplStack_1f8;
  longlong **pplStack_1f0;
  longlong **pplStack_1e8;
  int32_t uStack_1e0;
  longlong *plStack_1d8;
  longlong *plStack_1d0;
  longlong *plStack_1c8;
  int32_t uStack_1c0;
  longlong *plStack_1b8;
  longlong lStack_1b0;
  longlong *plStack_1a8;
  longlong *plStack_1a0;
  void *puStack_198;
  int32_t *puStack_190;
  int32_t uStack_188;
  ulonglong uStack_180;
  longlong *plStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  int32_t uStack_160;
  longlong *plStack_158;
  longlong lStack_150;
  uint64_t uStack_148;
  int32_t uStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  uint64_t uStack_120;
  longlong *plStack_110;
  char cStack_108;
  char cStack_107;
  char cStack_106;
  longlong *plStack_100;
  longlong lStack_f8;
  longlong *plStack_f0;
  int8_t auStack_e8 [8];
  longlong *plStack_e0;
  ulonglong uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  longlong *plStack_90;
  uint uStack_88;
  uint *puStack_80;
  int8_t *puStack_78;
  longlong *plStack_70;
  longlong **pplStack_68;
  uint64_t uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar25 = *(uint *)(param_1 + 0x58);
  uVar28 = (ulonglong)uVar25;
  bVar5 = false;
  plVar18 = (longlong *)*param_2;
  uVar30 = param_2[1] - (longlong)plVar18 >> 3;
  iVar15 = 0;
  auStackX_18[0] = uVar25;
  if (uVar30 != 0) {
    do {
      auStackX_18[0] = *(uint *)(*plVar18 + 0x58);
      if ((int)*(uint *)(*plVar18 + 0x58) < (int)(uint)uVar28) {
        auStackX_18[0] = (uint)uVar28;
      }
      uVar28 = (ulonglong)auStackX_18[0];
      if ((bVar5) || (0 < *(int *)(*plVar18 + 0x58))) {
        bVar5 = true;
      }
      iVar15 = iVar15 + 1;
      plVar18 = plVar18 + 1;
    } while ((ulonglong)(longlong)iVar15 < uVar30);
  }
  if ((auStackX_18[0] != 0) && (bVar5)) {
    if ((0 < (int)uVar25) && ((int)uVar25 < (int)auStackX_18[0])) {
      *(int *)(param_1 + 0x58) = (int)uVar28;
      FUN_180278270(param_1);
      uVar28 = (ulonglong)auStackX_18[0];
    }
    iVar15 = 0;
    lVar17 = 0;
    lVar32 = *param_2;
    if (param_2[1] - lVar32 >> 3 != 0) {
      do {
        iVar29 = *(int *)(*(longlong *)(lVar32 + lVar17) + 0x58);
        if ((0 < iVar29) && (iVar29 < (int)uVar28)) {
          *(int *)(*(longlong *)(lVar32 + lVar17) + 0x58) = (int)uVar28;
          FUN_180278270(*(uint64_t *)(lVar17 + *param_2));
          uVar28 = (ulonglong)auStackX_18[0];
        }
        iVar15 = iVar15 + 1;
        lVar17 = lVar17 + 8;
        lVar32 = *param_2;
      } while ((ulonglong)(longlong)iVar15 < (ulonglong)(param_2[1] - lVar32 >> 3));
    }
    uVar30 = 0;
    lStack_150 = 0;
    lStack_150 = FUN_18062b420(system_memory_pool_ptr,0x2000,CONCAT71((int7)(uVar28 >> 8),0xf));
    LOCK();
    uStack_148 = 0;
    UNLOCK();
    uStack_140 = 0;
    plStack_b0 = &lStack_150;
    uStack_c8 = 0x3f800000;
    uStack_c4 = 0x40000000;
    plStack_b8 = &lStack_150;
    uStack_d8 = 1;
    plStack_e0 = (longlong *)&system_data_0000;
    uStack_d0 = 0;
    uStack_c0 = 0;
    puStack_80 = auStackX_18;
    puStack_78 = auStack_e8;
    plStack_70 = &lStack_150;
    pplStack_68 = &plStack_b0;
    FUN_180280600(&puStack_80,param_1);
    lVar32 = *param_2;
    uVar28 = uVar30;
    if (param_2[1] - lVar32 >> 3 != 0) {
      do {
        FUN_180280600(&puStack_80,*(uint64_t *)(lVar32 + uVar30));
        uVar25 = (int)uVar28 + 1;
        uVar30 = uVar30 + 8;
        lVar32 = *param_2;
        uVar28 = (ulonglong)uVar25;
      } while ((ulonglong)(longlong)(int)uVar25 < (ulonglong)(param_2[1] - lVar32 >> 3));
    }
    plVar18 = (longlong *)0x0;
    lStack_f8 = *(longlong *)(system_main_module_state + 0x98);
    plStack_1d8 = (longlong *)0x0;
    plStack_1d0 = (longlong *)0x0;
    plStack_1a0 = (longlong *)0x0;
    plStack_1c8 = (longlong *)0x0;
    uStack_1c0 = 3;
    plStack_178 = (longlong *)0x0;
    plStack_170 = (longlong *)0x0;
    plStack_1b8 = (longlong *)0x0;
    plStack_168 = (longlong *)0x0;
    uStack_160 = 3;
    puStack_218 = (ulonglong *)0x0;
    puStack_210 = (ulonglong *)0x0;
    puStack_208 = (ulonglong *)0x0;
    uStack_200 = 3;
    pplStack_1f8 = (longlong **)0x0;
    pplStack_1f0 = (longlong **)0x0;
    pplStack_1e8 = (longlong **)0x0;
    uStack_1e0 = 3;
    lStack_230 = *plStack_e0;
    plStack_1a8 = plStack_e0;
    if (lStack_230 == 0) {
      plStack_1a8 = plStack_e0 + 1;
      lVar32 = *plStack_1a8;
      while (lVar32 == 0) {
        plStack_1a8 = plStack_1a8 + 1;
        lVar32 = *plStack_1a8;
      }
      lStack_230 = *plStack_1a8;
    }
    if (lStack_230 != plStack_e0[uStack_d8]) {
      plVar13 = (longlong *)0x0;
      plVar22 = (longlong *)0x0;
      plStack_248 = (longlong *)0x0;
      plVar11 = plStack_e0;
      uVar28 = uStack_d8;
      plVar10 = plStack_1a8;
      plVar33 = plVar18;
      uVar25 = auStackX_18[0];
      do {
        lVar32 = *(longlong *)(lStack_230 + 0x10);
        iStackX_20 = 0;
        lStack_1b0 = 0;
        lStack_98 = lVar32;
        if (0 < (int)uVar25) {
          do {
            iVar15 = iStackX_20;
            pplVar34 = (longlong **)(lStack_1b0 * 0x20 + lVar32);
            lVar17 = (longlong)pplVar34[1] - (longlong)*pplVar34 >> 0x3f;
            pplStack_228 = pplVar34;
            if (((longlong)pplVar34[1] - (longlong)*pplVar34) / 0x50 + lVar17 != lVar17) {
              uVar9 = FUN_18062b1e0(system_memory_pool_ptr,0x300,0x10,9);
              plVar10 = (longlong *)FUN_180075030(uVar9,1);
              plStack_158 = plVar10;
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x28))(plVar10);
              }
              puStack_198 = &system_data_buffer_ptr;
              uStack_180 = 0;
              puStack_190 = (int32_t *)0x0;
              uStack_188 = 0;
              puStack_190 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
              *(int8_t *)puStack_190 = 0;
              uVar28 = (ulonglong)puStack_190 & 0xffffffffffc00000;
              if (uVar28 == 0) {
                uVar25 = 0;
              }
              else {
                lVar32 = ((longlong)puStack_190 - uVar28 >> 0x10) * 0x50;
                puVar26 = (uint *)(uVar28 + ((lVar32 + 0x80) -
                                            (ulonglong)*(uint *)(uVar28 + lVar32 + 0x84)));
                if ((*(byte *)((longlong)puVar26 + 0xe) & 2) == 0) {
                  uVar25 = puVar26[7];
                  if (0x3ffffff < uVar25) {
                    uVar25 = *puVar26 << 0x10;
                  }
                }
                else {
                  uVar25 = puVar26[7];
                  if (uVar25 < 0x4000000) {
                    uVar30 = (ulonglong)uVar25;
                  }
                  else {
                    uVar30 = (ulonglong)*puVar26 << 0x10;
                  }
                  if (0x3ffffff < uVar25) {
                    uVar25 = *puVar26 << 0x10;
                  }
                  uVar25 = uVar25 - (int)(((longlong)puStack_190 -
                                          (uVar28 + ((longlong)
                                                     ((longlong)puVar26 + (-0x80 - uVar28)) / 0x50)
                                                    * 0x10000)) % uVar30);
                }
              }
              uStack_180 = CONCAT44(uStack_180._4_4_,uVar25);
              *puStack_190 = 0x63746162;
              puStack_190[1] = 0x5f646568;
              puStack_190[2] = 0x6873656d;
              puStack_190[3] = 0x5f7365;
              uStack_188 = 0xf;
              System_DataHandler(&puStack_198,&unknown_var_4576_ptr,iVar15);
              puVar16 = (int32_t *)&system_buffer_ptr;
              if (puStack_190 != (int32_t *)0x0) {
                puVar16 = puStack_190;
              }
              (**(code **)(plVar10[2] + 0x10))(plVar10 + 2,puVar16);
              lVar32 = (*pplVar34)[9];
              FUN_180076910(plVar10,lVar32 + 0x1b8);
              plVar11 = plStack_158;
              *(int32_t *)(plVar10 + 0x4e) = *(int32_t *)(lVar32 + 0x270);
              lVar17 = *(longlong *)(lVar32 + 0x2b0);
              plVar10[0x55] = *(longlong *)(lVar32 + 0x2a8);
              plVar10[0x56] = lVar17;
              uVar2 = *(int32_t *)(lVar32 + 700);
              uVar3 = *(int32_t *)(lVar32 + 0x2c0);
              uVar4 = *(int32_t *)(lVar32 + 0x2c4);
              *(int32_t *)(plVar10 + 0x57) = *(int32_t *)(lVar32 + 0x2b8);
              *(int32_t *)((longlong)plVar10 + 700) = uVar2;
              *(int32_t *)(plVar10 + 0x58) = uVar3;
              *(int32_t *)((longlong)plVar10 + 0x2c4) = uVar4;
              if (lStack_f8 == 0) {
                uVar28 = 0;
                plStack_138 = (longlong *)0x0;
                plStack_130 = (longlong *)0x0;
                pplStack_228 = &plStack_128;
                plStack_110 = (longlong *)0x0;
                uStack_120 = 0;
                plStack_128._0_1_ = 0;
                FUN_18022f2e0(&plStack_138,plStack_158,0);
                plVar22 = *pplVar34;
                uVar30 = uVar28;
                uVar21 = uVar28;
                if (((longlong)pplVar34[1] - (longlong)plVar22) / 0x50 != 0) {
                  do {
                    lVar32 = *(longlong *)((longlong)plVar22 + uVar28 + 0x48);
                    pplStack_228 = *(longlong ***)(lVar32 + 0x238);
                    uStack_220 = *(int32_t *)(lVar32 + 0x240);
                    uStack_21c = *(int32_t *)(lVar32 + 0x244);
                    FUN_180235ca0(&plStack_138,lVar32,(longlong)plVar22 + uVar21 * 0x50 + 4,
                                  CONCAT71((int7)(uVar21 >> 8),0xff),&pplStack_228,1,0,0,1);
                    uVar25 = (int)uVar30 + 1;
                    uVar28 = uVar28 + 0x50;
                    plVar22 = *pplVar34;
                    uVar30 = (ulonglong)uVar25;
                    uVar21 = (longlong)(int)uVar25;
                  } while ((ulonglong)(longlong)(int)uVar25 <
                           (ulonglong)(((longlong)pplVar34[1] - (longlong)plVar22) / 0x50));
                }
                if ((plStack_138 != (longlong *)0x0) && (plStack_130 != (longlong *)0x0)) {
                  if (cStack_106 != '\0') {
                    FUN_180075b70();
                  }
                  FUN_18007f6a0(&plStack_128);
                  if (cStack_108 != '\0') {
                    FUN_180079520(plStack_138);
                  }
                  if (cStack_107 != '\0') {
                    FUN_180079520(plStack_138);
                  }
                  plVar22 = plStack_130;
                  plStack_a8 = plStack_130;
                  plStack_130 = (longlong *)0x0;
                  if (plVar22 != (longlong *)0x0) {
                    (**(code **)(*plVar22 + 0x38))();
                  }
                }
                pplStack_228 = &plStack_128;
                FUN_18007f6a0(&plStack_128);
                if (plStack_110 != (longlong *)0x0) {
                  (**(code **)(*plStack_110 + 0x38))();
                }
                if (plStack_130 != (longlong *)0x0) {
                  (**(code **)(*plStack_130 + 0x38))();
                }
                if (plStack_138 != (longlong *)0x0) {
                  (**(code **)(*plStack_138 + 0x38))();
                }
              }
              else {
                uVar28 = ((longlong)pplVar34[1] - (longlong)*pplVar34) / 0x50;
                if ((ulonglong)((longlong)plVar18 - (longlong)plStack_1d8 >> 6) < uVar28) {
                  if (uVar28 == 0) {
                    plVar10 = (longlong *)0x0;
                  }
                  else {
                    plVar10 = (longlong *)FUN_18062b420(system_memory_pool_ptr,uVar28 * 0x40,3);
                  }
                  if (plStack_1d8 != plVar13) {
                    // WARNING: Subroutine does not return
                    memmove(plVar10,plStack_1d8,(longlong)plVar13 - (longlong)plStack_1d8);
                  }
                  if (plStack_1d8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900(plStack_1d8);
                  }
                  plVar18 = plVar10 + uVar28 * 8;
                  plVar22 = plStack_248;
                  plStack_1d8 = plVar10;
                  plStack_1d0 = plVar10;
                  plStack_1c8 = plVar18;
                  plStack_1a0 = plVar18;
                }
                plVar10 = plStack_178;
                plVar13 = plStack_1d8;
                uVar28 = ((longlong)pplVar34[1] - (longlong)*pplVar34) / 0x50;
                if ((ulonglong)((longlong)plVar33 - (longlong)plStack_178 >> 4) < uVar28) {
                  if (uVar28 == 0) {
                    plVar11 = (longlong *)0x0;
                  }
                  else {
                    plVar11 = (longlong *)FUN_18062b420(system_memory_pool_ptr,uVar28 * 0x10,3);
                  }
                  if (plVar10 != plVar22) {
                    // WARNING: Subroutine does not return
                    memmove(plVar11,plVar10,(longlong)plVar22 - (longlong)plVar10);
                  }
                  if (plVar10 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900(plVar10);
                  }
                  plStack_1b8 = plVar11 + uVar28 * 2;
                  plStack_178 = plVar11;
                  plStack_170 = plVar11;
                  plStack_168 = plStack_1b8;
                }
                plStack_248 = plStack_178;
                FUN_1800b8cb0(&puStack_218,((longlong)pplVar34[1] - (longlong)*pplVar34) / 0x50);
                puVar19 = puStack_210;
                plStack_240 = plVar13;
                plStack_1d0 = plVar13;
                plStack_170 = plStack_248;
                for (puVar12 = puStack_218; puVar12 != puVar19; puVar12 = puVar12 + 1) {
                  if ((longlong *)*puVar12 != (longlong *)0x0) {
                    (**(code **)(*(longlong *)*puVar12 + 0x38))();
                  }
                }
                lVar32 = 0;
                iStack_238 = 0;
                plVar22 = *pplVar34;
                puStack_210 = puStack_218;
                if (((longlong)pplVar34[1] - (longlong)plVar22) / 0x50 != 0) {
                  do {
                    plVar13 = *(longlong **)((longlong)plVar22 + lVar32 + 0x48);
                    plStack_100 = plVar13;
                    if (plVar13 != (longlong *)0x0) {
                      (**(code **)(*plVar13 + 0x28))(plVar13);
                    }
                    puVar12 = (ulonglong *)0x0;
                    if (puStack_210 < puStack_208) {
                      *puStack_210 = (ulonglong)plVar13;
                      plStack_100 = (longlong *)0x0;
                      puVar12 = puStack_210;
                    }
                    else {
                      lVar17 = (longlong)puStack_210 - (longlong)puStack_218 >> 3;
                      if (lVar17 == 0) {
                        lVar17 = 1;
LAB_18027fce8:
                        puVar12 = (ulonglong *)
                                  FUN_18062b420(system_memory_pool_ptr,lVar17 * 8,(int8_t)uStack_200);
                        puVar19 = puStack_218;
                        puVar23 = puVar12;
                      }
                      else {
                        lVar17 = lVar17 * 2;
                        puVar19 = puStack_218;
                        puVar23 = puVar12;
                        if (lVar17 != 0) goto LAB_18027fce8;
                      }
                      for (; puVar7 = puStack_210, puVar19 != puStack_210; puVar19 = puVar19 + 1) {
                        *puVar12 = *puVar19;
                        *puVar19 = 0;
                        puVar12 = puVar12 + 1;
                      }
                      *puVar12 = (ulonglong)plVar13;
                      plStack_100 = (longlong *)0x0;
                      plVar18 = plStack_1a0;
                      for (puVar19 = puStack_218; plStack_1a0 = plVar18, puVar19 != puVar7;
                          puVar19 = puVar19 + 1) {
                        if ((longlong *)*puVar19 != (longlong *)0x0) {
                          (**(code **)(*(longlong *)*puVar19 + 0x38))();
                        }
                        plVar18 = plStack_1a0;
                      }
                      if (puStack_218 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900(puStack_218);
                      }
                      puStack_208 = puVar23 + lVar17;
                      puStack_218 = puVar23;
                    }
                    puStack_210 = puVar12 + 1;
                    plVar10 = (longlong *)0x0;
                    plVar22 = *pplStack_228;
                    if (plStack_240 < plVar18) {
                      plStack_1d0 = plStack_240 + 8;
                      plVar10 = (longlong *)((longlong)plVar22 + lVar32 + 4);
                      lVar17 = plVar10[1];
                      *plStack_240 = *plVar10;
                      plStack_240[1] = lVar17;
                      plVar10 = (longlong *)((longlong)plVar22 + lVar32 + 0x14);
                      lVar17 = plVar10[1];
                      plStack_240[2] = *plVar10;
                      plStack_240[3] = lVar17;
                      puVar16 = (int32_t *)((longlong)plVar22 + lVar32 + 0x24);
                      uVar2 = puVar16[1];
                      uVar3 = puVar16[2];
                      uVar4 = puVar16[3];
                      *(int32_t *)(plStack_240 + 4) = *puVar16;
                      *(int32_t *)((longlong)plStack_240 + 0x24) = uVar2;
                      *(int32_t *)(plStack_240 + 5) = uVar3;
                      *(int32_t *)((longlong)plStack_240 + 0x2c) = uVar4;
                      puVar16 = (int32_t *)((longlong)plVar22 + lVar32 + 0x34);
                      uVar2 = puVar16[1];
                      uVar3 = puVar16[2];
                      uVar4 = puVar16[3];
                      *(int32_t *)(plStack_240 + 6) = *puVar16;
                      *(int32_t *)((longlong)plStack_240 + 0x34) = uVar2;
                      *(int32_t *)(plStack_240 + 7) = uVar3;
                      *(int32_t *)((longlong)plStack_240 + 0x3c) = uVar4;
                    }
                    else {
                      lVar31 = (longlong)plStack_240 - (longlong)plStack_1d8;
                      lVar17 = lVar31 >> 6;
                      if (lVar17 == 0) {
                        lVar17 = 1;
LAB_18027fe05:
                        plVar10 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar17 << 6,3);
                      }
                      else {
                        lVar17 = lVar17 * 2;
                        if (lVar17 != 0) goto LAB_18027fe05;
                      }
                      if (plStack_1d8 != plStack_240) {
                    // WARNING: Subroutine does not return
                        memmove(plVar10,plStack_1d8,lVar31);
                      }
                      plVar18 = (longlong *)((longlong)plVar22 + lVar32 + 4);
                      lVar31 = plVar18[1];
                      *plVar10 = *plVar18;
                      plVar10[1] = lVar31;
                      plVar18 = (longlong *)((longlong)plVar22 + lVar32 + 0x14);
                      lVar31 = plVar18[1];
                      plVar10[2] = *plVar18;
                      plVar10[3] = lVar31;
                      puVar16 = (int32_t *)((longlong)plVar22 + lVar32 + 0x24);
                      uVar2 = puVar16[1];
                      uVar3 = puVar16[2];
                      uVar4 = puVar16[3];
                      *(int32_t *)(plVar10 + 4) = *puVar16;
                      *(int32_t *)((longlong)plVar10 + 0x24) = uVar2;
                      *(int32_t *)(plVar10 + 5) = uVar3;
                      *(int32_t *)((longlong)plVar10 + 0x2c) = uVar4;
                      puVar16 = (int32_t *)((longlong)plVar22 + lVar32 + 0x34);
                      uVar2 = puVar16[1];
                      uVar3 = puVar16[2];
                      uVar4 = puVar16[3];
                      *(int32_t *)(plVar10 + 6) = *puVar16;
                      *(int32_t *)((longlong)plVar10 + 0x34) = uVar2;
                      *(int32_t *)(plVar10 + 7) = uVar3;
                      *(int32_t *)((longlong)plVar10 + 0x3c) = uVar4;
                      plStack_240 = plVar10 + 8;
                      if (plStack_1d8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900();
                      }
                      plVar18 = plVar10 + lVar17 * 8;
                      plStack_1d8 = plVar10;
                      plStack_1d0 = plStack_240;
                      plStack_1c8 = plVar18;
                      plStack_1a0 = plVar18;
                    }
                    lVar17 = plVar13[0x47];
                    lVar31 = plVar13[0x48];
                    plStack_240 = plStack_1d0;
                    if (plStack_248 < plStack_1b8) {
                      *plStack_248 = lVar17;
                      plStack_248[1] = lVar31;
                      plVar13 = plStack_248;
                    }
                    else {
                      lVar24 = (longlong)plStack_248 - (longlong)plStack_178;
                      lVar20 = lVar24 >> 4;
                      if (lVar20 == 0) {
                        lVar20 = 1;
LAB_18027feed:
                        plVar13 = (longlong *)FUN_18062b420(system_memory_pool_ptr,lVar20 << 4,3);
                      }
                      else {
                        lVar20 = lVar20 * 2;
                        if (lVar20 != 0) goto LAB_18027feed;
                        plVar13 = (longlong *)0x0;
                      }
                      if (plStack_178 != plStack_248) {
                    // WARNING: Subroutine does not return
                        memmove(plVar13,plStack_178,lVar24);
                      }
                      *plVar13 = lVar17;
                      plVar13[1] = lVar31;
                      if (plStack_178 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900();
                      }
                      plStack_1b8 = plVar13 + lVar20 * 2;
                      plStack_178 = plVar13;
                      plStack_168 = plStack_1b8;
                    }
                    plStack_170 = plVar13 + 2;
                    iStack_238 = iStack_238 + 1;
                    lVar32 = lVar32 + 0x50;
                    plVar22 = *pplStack_228;
                    plVar13 = plStack_240;
                    pplVar34 = pplStack_228;
                    plStack_248 = plStack_170;
                  } while ((ulonglong)(longlong)iStack_238 <
                           (ulonglong)(((longlong)pplStack_228[1] - (longlong)plVar22) / 0x50));
                }
                plVar11 = plStack_158;
                uVar9 = *(uint64_t *)(system_main_module_state + 0x98);
                pplStack_228 = &plStack_240;
                plStack_240 = plStack_158;
                (**(code **)(*plStack_158 + 0x28))(plStack_158);
                FUN_18017a600(uVar9,&plStack_240,&puStack_218,&plStack_1d8,&plStack_178);
              }
              uVar25 = 1 << ((byte)iStackX_20 & 0x1f);
              iVar15 = iStackX_20 + 1;
              if (iVar15 < (int)auStackX_18[0]) {
                bVar1 = (byte)iVar15 & 0x1f;
                uVar27 = 1 << bVar1 | 1U >> 0x20 - bVar1;
                lVar17 = (longlong)pplVar34[1] - (longlong)*pplVar34;
                lVar32 = lVar17 >> 0x3f;
                lVar17 = lVar17 / 0x50 + lVar32;
                do {
                  iVar29 = iVar15;
                  lVar31 = lStack_1b0 + 1;
                  puVar26 = (uint *)*pplVar34;
                  iVar15 = 0;
                  if (lVar17 != lVar32) {
                    do {
                      if ((*puVar26 & uVar27) == 0) goto LAB_180280225;
                      iVar15 = iVar15 + 1;
                      puVar26 = puVar26 + 0x14;
                    } while ((ulonglong)(longlong)iVar15 < (ulonglong)(lVar17 - lVar32));
                  }
                  uVar25 = uVar25 | uVar27;
                  uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
                  iVar15 = iVar29 + 1;
                  iStackX_20 = iVar29;
                  lStack_1b0 = lVar31;
                } while (iVar29 + 1 < (int)auStackX_18[0]);
              }
LAB_180280225:
              pplVar14 = (longlong **)0x0;
              plStack_90 = (longlong *)0x0;
              plStack_a0 = plVar11;
              uStack_88 = uVar25;
              (**(code **)(*plVar11 + 0x28))(plVar11);
              pplVar34 = pplStack_1f0;
              plStack_a0 = (longlong *)0x0;
              plStack_90 = plVar11;
              if (pplStack_1f0 < pplStack_1e8) {
                pplStack_228 = pplStack_1f0;
                *pplStack_1f0 = plVar11;
                pplStack_1f0 = pplStack_1f0 + 2;
                (**(code **)(*plVar11 + 0x28))(plVar11);
                *(uint *)(pplVar34 + 1) = uVar25;
              }
              else {
                lVar32 = (longlong)pplStack_1f0 - (longlong)pplStack_1f8 >> 4;
                if (lVar32 == 0) {
                  lVar32 = 1;
LAB_1802802a3:
                  pplVar14 = (longlong **)
                             FUN_18062b420(system_memory_pool_ptr,lVar32 << 4,(int8_t)uStack_1e0);
                  pplVar8 = pplVar14;
                  pplVar34 = pplStack_1f8;
                }
                else {
                  lVar32 = lVar32 * 2;
                  pplVar8 = pplVar14;
                  pplVar34 = pplStack_1f8;
                  if (lVar32 != 0) goto LAB_1802802a3;
                }
                for (; pplVar6 = pplVar8, pplVar34 != pplStack_1f0; pplVar34 = pplVar34 + 2) {
                  *pplVar6 = *pplVar34;
                  *pplVar34 = (longlong *)0x0;
                  *(int32_t *)(pplVar6 + 1) = *(int32_t *)(pplVar34 + 1);
                  pplVar8 = pplVar6 + 2;
                  pplStack_228 = pplVar6;
                }
                FUN_180280fd0(pplVar6,&plStack_90);
                pplVar8 = pplStack_1f0;
                plVar11 = plStack_158;
                for (pplVar34 = pplStack_1f8; pplStack_228 = pplVar34, plStack_158 = plVar11,
                    pplVar34 != pplVar8; pplVar34 = pplVar34 + 2) {
                  if (*pplVar34 != (longlong *)0x0) {
                    (**(code **)(**pplVar34 + 0x38))();
                  }
                  plVar11 = plStack_158;
                }
                if (pplStack_1f8 != (longlong **)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(pplStack_1f8);
                }
                pplStack_1e8 = pplVar14 + lVar32 * 2;
                pplStack_1f8 = pplVar14;
                pplStack_1f0 = pplVar6 + 2;
              }
              (**(code **)(*plVar11 + 0x38))(plVar11);
              puStack_198 = &system_data_buffer_ptr;
              if (puStack_190 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              puStack_190 = (int32_t *)0x0;
              uStack_180 = uStack_180 & 0xffffffff00000000;
              puStack_198 = &system_state_ptr;
              (**(code **)(*plVar11 + 0x38))(plVar11);
              plVar22 = plStack_248;
              lVar32 = lStack_98;
              plVar33 = plStack_1b8;
              uVar25 = auStackX_18[0];
            }
            iStackX_20 = iStackX_20 + 1;
            lStack_1b0 = lStack_1b0 + 1;
            plVar11 = plStack_e0;
            uVar28 = uStack_d8;
            plVar10 = plStack_1a8;
          } while (iStackX_20 < (int)uVar25);
        }
        lStack_230 = *(longlong *)(lStack_230 + 0x18);
        while (lStack_230 == 0) {
          plVar10 = plVar10 + 1;
          plVar18 = plStack_1a0;
          plStack_1a8 = plVar10;
          lStack_230 = *plVar10;
        }
      } while (lStack_230 != plVar11[uVar28]);
    }
    lVar32 = lStack_f8;
    uVar21 = 0;
    plVar18 = (longlong *)(param_1 + 0x38);
    uVar28 = uVar21;
    uVar30 = uVar21;
    if (*(longlong *)(param_1 + 0x40) - *plVar18 >> 4 != 0) {
      do {
        *(uint64_t *)(*(longlong *)(uVar28 + *plVar18) + 0x1c8) = 0;
        uVar25 = (int)uVar30 + 1;
        uVar28 = uVar28 + 0x10;
        uVar30 = (ulonglong)uVar25;
      } while ((ulonglong)(longlong)(int)uVar25 <
               (ulonglong)(*(longlong *)(param_1 + 0x40) - *plVar18 >> 4));
    }
    FUN_180284500();
    uVar28 = uVar21;
    if ((longlong)pplStack_1f0 - (longlong)pplStack_1f8 >> 4 != 0) {
      do {
        plStack_f0 = *(longlong **)(uVar21 + (longlong)pplStack_1f8);
        if (plStack_f0 != (longlong *)0x0) {
          (**(code **)(*plStack_f0 + 0x28))();
        }
        FUN_180275e10(param_1,*(int32_t *)(uVar21 + 8 + (longlong)pplStack_1f8),&plStack_f0,0);
        uVar25 = (int)uVar28 + 1;
        uVar21 = uVar21 + 0x10;
        uVar28 = (ulonglong)uVar25;
      } while ((ulonglong)(longlong)(int)uVar25 <
               (ulonglong)((longlong)pplStack_1f0 - (longlong)pplStack_1f8 >> 4));
    }
    uVar28 = 0;
    if (lVar32 == 0) {
      FUN_180276f30(param_1,param_1 + 0x214,1);
      lVar32 = *(longlong *)(param_1 + 0x28);
      if ((lVar32 != 0) &&
         (*(short *)(lVar32 + 0x2b0) = *(short *)(lVar32 + 0x2b0) + 1,
         *(longlong *)(lVar32 + 0x168) != 0)) {
        func_0x0001802eeba0();
      }
    }
    FUN_1802841d0(&pplStack_1f8);
    FUN_180057830(&puStack_218);
    if (plStack_178 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (plStack_1d8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (uStack_d8 != 0) {
      do {
        plStack_e0[uVar28] = 0;
        uVar28 = uVar28 + 1;
      } while (uVar28 < uStack_d8);
    }
    uStack_d0 = 0;
    if (lStack_150 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_150 = 0;
  }
  if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





