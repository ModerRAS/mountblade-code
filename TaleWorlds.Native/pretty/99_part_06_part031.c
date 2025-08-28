#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part031.c - 3 个函数

// 函数: void FUN_1803c2600(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_1803c2600(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong *plVar8;
  uint64_t uVar9;
  longlong lVar10;
  uint64_t *puVar11;
  void *puVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  int8_t auStack_398 [32];
  char acStack_378 [8];
  uint64_t uStack_370;
  int32_t *puStack_368;
  uint64_t uStack_360;
  int16_t uStack_358;
  int8_t uStack_356;
  int iStack_350;
  int iStack_34c;
  int iStack_348;
  longlong lStack_340;
  uint *puStack_338;
  uint64_t uStack_330;
  int16_t uStack_328;
  int8_t uStack_326;
  int iStack_320;
  void *puStack_318;
  longlong lStack_310;
  int iStack_308;
  ulonglong uStack_300;
  uint *puStack_2f8;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  int32_t *puStack_2e0;
  longlong lStack_2d8;
  uint *puStack_2d0;
  uint *puStack_2c8;
  uint *puStack_2c0;
  int32_t uStack_2b8;
  uint uStack_2b0;
  uint *puStack_2a8;
  void *puStack_2a0;
  byte *pbStack_298;
  int iStack_290;
  ulonglong uStack_288;
  uint *puStack_280;
  uint *puStack_278;
  uint *puStack_270;
  int32_t uStack_268;
  uint64_t uStack_260;
  longlong lStack_258;
  int8_t uStack_250;
  void *puStack_248;
  void *puStack_240;
  uint uStack_238;
  int32_t uStack_230;
  uint64_t uStack_228;
  int iStack_220;
  int32_t uStack_21c;
  uint64_t uStack_218;
  uint64_t uStack_210;
  uint64_t uStack_208;
  void *puStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [256];
  longlong lStack_e0;
  longlong lStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int8_t uStack_b8;
  int32_t *apuStack_b0 [2];
  code *pcStack_a0;
  code *pcStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  code *pcStack_80;
  code *pcStack_78;
  ulonglong uStack_48;
  
  uStack_208 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_398;
  puVar19 = (uint *)0x0;
  puStack_2a0 = &unknown_var_3456_ptr;
  uStack_288 = 0;
  pbStack_298 = (byte *)0x0;
  iStack_290 = 0;
  lStack_2d8 = param_1;
  FUN_18031ed90(param_3,&puStack_2a0);
  FUN_1806279c0(&puStack_248,param_2);
  iVar13 = uStack_238 + 0xd;
  FUN_1806277c0(&puStack_248,iVar13);
  puVar11 = (uint64_t *)(puStack_240 + uStack_238);
  *puVar11 = 0x7461645f7472702f;
  *(int32_t *)(puVar11 + 1) = 0x69622e61;
  *(int16_t *)((longlong)puVar11 + 0xc) = 0x6e;
  puVar12 = &system_buffer_ptr;
  if (puStack_240 != (void *)0x0) {
    puVar12 = puStack_240;
  }
  uStack_260 = 0;
  uStack_250 = 0;
  uStack_238 = iVar13;
  FUN_18062dee0(&uStack_260,puVar12,&unknown_var_4880_ptr);
  lVar7 = lStack_258;
  if (lStack_258 != 0) {
    iStack_320 = -1;
    puStack_280 = (uint *)0x0;
    puStack_278 = (uint *)0x0;
    puStack_270 = (uint *)0x0;
    uStack_268 = 3;
    puStack_2d0 = (uint *)0x0;
    puStack_2c8 = (uint *)0x0;
    puStack_2c0 = (uint *)0x0;
    uStack_2b8 = 3;
    iStack_350 = 0;
    *(int32_t *)(*(longlong *)(param_1 + 8) + 0x60) = 0;
    lStack_340 = 0;
    puStack_338 = (uint *)0x0;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_326 = 0x21;
    fread(&iStack_350,4,1,lStack_258);
    FUN_180639bf0(&lStack_340,(longlong)iStack_350);
    lVar14 = lStack_340;
    fread(lStack_340,(longlong)iStack_350,1,lVar7);
    puVar17 = puStack_338 + 1;
    puVar4 = puStack_2c8;
    puVar5 = puStack_280;
    puVar21 = puStack_2d0;
    if (*puStack_338 == 0x33545250) {
      uStack_2b0 = *puVar17;
      puVar15 = puStack_338 + 2;
      iStack_348 = 0;
      puVar17 = puStack_2c8;
      puVar18 = puStack_280;
      puVar20 = puStack_2d0;
      iVar13 = iStack_320;
      puStack_338 = puVar15;
      if (0 < (int)uStack_2b0) {
        do {
          puVar5 = puStack_278;
          puStack_318 = &unknown_var_3456_ptr;
          uStack_300 = 0;
          lStack_310 = 0;
          iStack_308 = 0;
          uVar2 = *puVar15;
          puVar16 = puVar15 + 1;
          uStack_2f0 = puVar16;
          puStack_2a8 = puStack_278;
          if (uVar2 != 0) {
            puStack_338 = puVar16;
            FUN_180628f30(&puStack_318,puVar16,uVar2);
            puVar16 = (uint *)((longlong)uStack_2f0 + (ulonglong)uVar2);
          }
          puVar4 = (uint *)0x0;
          puStack_338 = puVar16;
          if (puVar17 < puVar19) {
            puVar4 = puVar17 + 8;
            puStack_2c8 = puVar4;
            FUN_180627ae0(puVar17);
            puVar21 = puVar20;
          }
          else {
            lVar7 = (longlong)puVar17 - (longlong)puVar20 >> 5;
            if (lVar7 == 0) {
              lVar7 = 1;
LAB_1803c29ae:
              puVar4 = (uint *)FUN_18062b420(system_memory_pool_ptr,lVar7 << 5,3);
            }
            else {
              lVar7 = lVar7 * 2;
              if (lVar7 != 0) goto LAB_1803c29ae;
            }
            puStack_2f8 = puVar4;
            lVar14 = FUN_180059780(puVar20,puVar17,puVar4);
            FUN_180627ae0(lVar14);
            puVar4 = (uint *)(lVar14 + 0x20);
            puVar21 = puStack_2f8;
            for (puVar19 = puVar20; puStack_2f8 = puVar21, uStack_2f0 = puVar4, puVar19 != puVar17;
                puVar19 = puVar19 + 8) {
              (*(code *)**(uint64_t **)puVar19)(puVar19);
              puVar4 = uStack_2f0;
              puVar21 = puStack_2f8;
            }
            if (puVar20 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar20);
            }
            puVar19 = puVar21 + lVar7 * 8;
            puStack_2d0 = puVar21;
            puStack_2c8 = puVar4;
            puStack_2c0 = puVar19;
          }
          puStack_2f8 = (uint *)CONCAT44(puStack_2f8._4_4_,*puVar16);
          puVar15 = puVar16 + 1;
          puStack_338 = puVar15;
          if (puVar5 < puStack_270) {
            puStack_2a8 = puVar5 + 1;
            *puVar5 = *puVar16;
            puVar5 = puVar18;
          }
          else {
            puStack_2e0 = (int32_t *)((longlong)puVar5 - (longlong)puVar18);
            if ((longlong)puStack_2e0 >> 2 == 0) {
              uStack_2f0 = (uint *)0x1;
LAB_1803c2aa0:
              puVar5 = (uint *)FUN_18062b420(system_memory_pool_ptr,(longlong)uStack_2f0 * 4,3);
            }
            else {
              uStack_2f0 = (uint *)(((longlong)puStack_2e0 >> 2) * 2);
              if (uStack_2f0 != (uint *)0x0) goto LAB_1803c2aa0;
              puVar5 = (uint *)0x0;
            }
            if (puVar18 != puStack_2a8) {
                    // WARNING: Subroutine does not return
              memmove(puVar5,puVar18,puStack_2e0);
            }
            *puVar5 = (uint)puStack_2f8;
            puStack_2a8 = puVar5 + 1;
            if (puVar18 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puVar18);
            }
            puStack_270 = puVar5 + (longlong)uStack_2f0;
            puStack_280 = puVar5;
          }
          iVar13 = iStack_308;
          puStack_278 = puStack_2a8;
          if (iStack_290 == iStack_308) {
            if (iStack_290 != 0) {
              pbVar6 = pbStack_298;
              do {
                pbVar1 = pbVar6 + (lStack_310 - (longlong)pbStack_298);
                iVar13 = (uint)*pbVar6 - (uint)*pbVar1;
                if (iVar13 != 0) break;
                pbVar6 = pbVar6 + 1;
              } while (*pbVar1 != 0);
            }
LAB_1803c2b4d:
            if (iVar13 == 0) {
              puStack_318 = &unknown_var_3456_ptr;
              iVar13 = iStack_348;
              if (lStack_310 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              break;
            }
          }
          else if (iStack_290 == 0) goto LAB_1803c2b4d;
          puStack_318 = &unknown_var_3456_ptr;
          if (lStack_310 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          iStack_348 = iStack_348 + 1;
          puVar17 = puVar4;
          puVar18 = puVar5;
          puVar20 = puVar21;
          iVar13 = iStack_320;
        } while (iStack_348 < (int)uStack_2b0);
        uStack_300 = uStack_300 & 0xffffffff00000000;
        lStack_310 = 0;
        puStack_318 = &unknown_var_720_ptr;
        lVar14 = lStack_340;
        lVar7 = lStack_258;
      }
      if (((char)uStack_328 == '\0') && (lVar14 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar14);
      }
      puVar19 = puVar21;
      if (iVar13 != -1) {
        lVar14 = (longlong)(int)(puVar5[iVar13] + iStack_350 + 4);
        _fseeki64(lVar7,lVar14,0);
        iStack_34c = 0;
        fread(&iStack_34c,4,1,lVar7);
        fclose(lVar7);
        lStack_258 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
        uStack_370 = 0;
        puStack_368 = (int32_t *)0x0;
        uStack_360 = 0;
        uStack_358 = 0;
        uStack_356 = 0x21;
        FUN_180639bf0(&uStack_370,(longlong)iStack_34c);
        acStack_378[0] = '\0';
        acStack_378[1] = 0;
        uStack_228 = &uStack_370;
        iStack_220 = iStack_34c;
        uStack_218 = acStack_378;
        uStack_210 = acStack_378 + 1;
        uStack_2f0 = (uint *)acStack_378;
        uStack_2e8 = acStack_378 + 1;
        puStack_1f8 = &unknown_var_2008_ptr;
        puStack_1f0 = auStack_1e0;
        uStack_1e8 = 0;
        auStack_1e0[0] = 0;
        pcStack_a0 = (code *)0x0;
        pcStack_98 = _guard_check_icall;
        puStack_2e0 = &uStack_90;
        pcStack_80 = (code *)0x0;
        pcStack_78 = _guard_check_icall;
        uStack_c0 = 0xffffffffffffffff;
        lStack_d8 = 0xffffffffffffffff;
        lStack_e0 = 0xffffffffffffffff;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_b8 = 0;
        puVar12 = &system_buffer_ptr;
        if (puStack_240 != (void *)0x0) {
          puVar12 = puStack_240;
        }
        FUN_1800693f0(&puStack_1f8,puVar12);
        lStack_e0 = lVar14 + 4;
        lStack_d8 = (longlong)iStack_34c;
        uStack_c8 = 0;
        if (pcStack_a0 != (code *)0x0) {
          (*pcStack_a0)(apuStack_b0,0,0);
        }
        pcStack_a0 = FUN_1803c5710;
        pcStack_98 = FUN_1803c56d0;
        apuStack_b0[0] = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,system_allocation_flags);
        *apuStack_b0[0] = (int32_t)uStack_228;
        apuStack_b0[0][1] = uStack_228._4_4_;
        apuStack_b0[0][2] = iStack_220;
        apuStack_b0[0][3] = uStack_21c;
        apuStack_b0[0][4] = (int32_t)uStack_218;
        apuStack_b0[0][5] = uStack_218._4_4_;
        apuStack_b0[0][6] = (int32_t)uStack_210;
        apuStack_b0[0][7] = uStack_210._4_4_;
        if (pcStack_80 != (code *)0x0) {
          (*pcStack_80)(&uStack_90,0,0);
        }
        pcStack_80 = (code *)&unknown_var_5264_ptr;
        pcStack_78 = (code *)&unknown_var_5232_ptr;
        uStack_90 = (int32_t)uStack_2f0;
        uStack_8c = uStack_2f0._4_4_;
        uStack_88 = (int32_t)uStack_2e8;
        uStack_84 = uStack_2e8._4_4_;
        lVar7 = *(longlong *)(system_system_data_memory + 8);
        lVar14 = FUN_18006d0b0(lVar7 + 200);
        if (lVar14 != 0) {
          FUN_18006d6c0(lVar14,&puStack_1f8);
        }
        iVar13 = _Cnd_signal(lVar7 + 0x330);
        if (iVar13 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar13);
        }
        while (lVar7 = lStack_2d8, uVar9 = system_context_ptr, acStack_378[0] == '\0') {
          lVar7 = FUN_18005e890(system_context_ptr);
          if (lVar7 != 0) {
            plVar8 = (longlong *)FUN_18005e890(uVar9);
            (**(code **)(*plVar8 + 0x20))(plVar8,0);
          }
        }
        *(int32_t *)(*(longlong *)(lStack_2d8 + 8) + 0x1e4) = *puStack_368;
        *(int32_t *)(*(longlong *)(lStack_2d8 + 8) + 0x1e8) = puStack_368[1];
        *(int32_t *)(*(longlong *)(lStack_2d8 + 8) + 0x1ec) = puStack_368[2];
        lVar14 = *(longlong *)(lStack_2d8 + 8);
        *(int32_t *)(lVar14 + 0x210) = puStack_368[3];
        *(int32_t *)(lVar14 + 0x210) = puStack_368[4];
        *(int32_t *)(lVar14 + 0x214) = puStack_368[5];
        *(int32_t *)(lVar14 + 0x1f0) = puStack_368[6];
        *(int32_t *)(lVar14 + 500) = puStack_368[7];
        *(int32_t *)(lVar14 + 0x1f8) = puStack_368[8];
        *(int32_t *)(lVar14 + 0x200) = puStack_368[9];
        *(int32_t *)(lVar14 + 0x204) = puStack_368[10];
        *(int32_t *)(lVar14 + 0x208) = puStack_368[0xb];
        *(int32_t *)(lVar14 + 100) = puStack_368[0xc];
        puStack_368 = puStack_368 + 0xd;
        FUN_1803c31c0(lStack_2d8,&uStack_370);
        FUN_1803c3a80(lVar7,&uStack_370);
        FUN_1803c4780(lVar7,&uStack_370);
        lVar14 = *(longlong *)(lVar7 + 8);
        lVar3 = *(longlong *)(lVar7 + 0x80);
        lVar7 = *(longlong *)(lVar7 + 0x88);
        lVar10 = *(longlong *)(lVar14 + 0x3c8);
        if (lVar10 == 0) {
          *(uint64_t *)(lVar14 + 0x3c8) = 0;
          uVar9 = FUN_18062b1e0(system_memory_pool_ptr,0xc0,8,0x21);
          lVar10 = FUN_18045f920(uVar9,lVar14);
          *(longlong *)(lVar14 + 0x3c8) = lVar10;
          lVar7 = (longlong)(int)(lVar7 - lVar3 >> 4);
          FUN_180080aa0(lVar10 + 0x18,lVar7);
                    // WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar10 + 0x18),lVar3,lVar7 << 4);
        }
        FUN_18045fb80(lVar10);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar10);
      }
    }
    else {
      puStack_338 = puVar17;
      puVar19 = puStack_2d0;
      if (((char)uStack_328 == '\0') && (lVar14 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar14);
      }
    }
    for (; puVar21 != puVar4; puVar21 = puVar21 + 8) {
      (*(code *)**(uint64_t **)puVar21)(puVar21,0);
    }
    if (puVar19 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar19);
    }
    if (puVar5 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
  }
  if (lStack_258 != 0) {
    fclose(lStack_258);
    lStack_258 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  puStack_248 = &unknown_var_3456_ptr;
  if (puStack_240 == (void *)0x0) {
    puStack_240 = (void *)0x0;
    uStack_230 = 0;
    puStack_248 = &unknown_var_720_ptr;
    puStack_2a0 = &unknown_var_3456_ptr;
    if (pbStack_298 == (byte *)0x0) {
      pbStack_298 = (byte *)0x0;
      uStack_288 = uStack_288 & 0xffffffff00000000;
      puStack_2a0 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_398);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c31c0(uint64_t param_1,longlong param_2)
void FUN_1803c31c0(uint64_t param_1,longlong param_2)

{
  longlong lVar1;
  int8_t auStack_228 [104];
  int32_t uStack_1c0;
  uint64_t uStack_1b8;
  int8_t auStack_170 [24];
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  int32_t uStack_140;
  uint64_t uStack_e0;
  ulonglong uStack_58;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_228;
  uStack_1c0 = **(int32_t **)(param_2 + 8);
  *(int32_t **)(param_2 + 8) = *(int32_t **)(param_2 + 8) + 1;
  uStack_1b8 = param_1;
  FUN_1803c51c0(uStack_1c0,auStack_170,uStack_1c0);
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 3;
  lVar1 = (longlong)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  FUN_1800f6ad0(&uStack_158,lVar1);
                    // WARNING: Subroutine does not return
  memcpy(uStack_158,*(uint64_t *)(param_2 + 8),lVar1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c3a80(longlong param_1,longlong *param_2)
void FUN_1803c3a80(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int8_t auStack_1a8 [32];
  uint64_t uStack_188;
  longlong **pplStack_180;
  int16_t auStack_178 [4];
  ulonglong *puStack_170;
  ulonglong *puStack_168;
  ulonglong *puStack_160;
  int32_t uStack_158;
  int32_t uStack_150;
  int aiStack_14c [3];
  ulonglong **ppuStack_140;
  longlong lStack_138;
  int32_t *puStack_130;
  int *piStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  int *piStack_110;
  longlong *aplStack_108 [2];
  code *pcStack_f8;
  void *puStack_f0;
  uint64_t uStack_e8;
  longlong **pplStack_e0;
  ulonglong auStack_d8 [6];
  ulonglong auStack_a8 [6];
  ulonglong auStack_78 [2];
  int32_t uStack_68;
  int32_t uStack_64;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  ulonglong uStack_48;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1a8;
  param_2[1] = param_2[1] + 4;
  aiStack_14c[1] = 0xc0000000;
  aiStack_14c[2] = 0x40800000;
  auStack_178[0] = 40000;
  uStack_150 = 0x38d1b717;
  aiStack_14c[0] = *(int *)(*(longlong *)(param_1 + 8) + 0x1e4) * 6;
  puStack_170 = (ulonglong *)0x0;
  puStack_168 = (ulonglong *)0x0;
  puStack_160 = (ulonglong *)0x0;
  uStack_158 = 0x21;
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x1ec);
  if (lVar5 != 0) {
    if (lVar5 == 0) {
      puVar1 = (ulonglong *)0x0;
    }
    else {
      puVar1 = (ulonglong *)FUN_18062b420(system_memory_pool_ptr,lVar5 * 0x90,0x21);
    }
    if (puStack_170 != puStack_168) {
                    // WARNING: Subroutine does not return
      memmove(puVar1,puStack_170,(longlong)puStack_168 - (longlong)puStack_170);
    }
    if (puStack_170 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puStack_170);
    }
    puStack_160 = puVar1 + lVar5 * 0x12;
    puStack_168 = puVar1;
  }
  iVar4 = 0;
  puStack_170 = puStack_168;
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x1ec)) {
    do {
      lVar5 = 0;
      puVar2 = (uint *)param_2[1];
      do {
        uVar3 = (ulonglong)*puVar2;
        puVar2 = puVar2 + 1;
        param_2[1] = (longlong)puVar2;
        auStack_a8[lVar5] = (ulonglong)puVar2;
        auStack_d8[lVar5] = uVar3;
        if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) <= uVar3) {
          FUN_180639bf0(param_2,(longlong)puVar2 + (uVar3 - *param_2));
          puVar2 = (uint *)param_2[1];
        }
        puVar2 = (uint *)((longlong)puVar2 + uVar3);
        param_2[1] = (longlong)puVar2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 6);
      lVar5 = 0;
      do {
        uVar3 = (ulonglong)*puVar2;
        puVar2 = puVar2 + 1;
        param_2[1] = (longlong)puVar2;
        (&uStack_60)[lVar5] = puVar2;
        auStack_78[lVar5] = uVar3;
        if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) <= uVar3) {
          FUN_180639bf0(param_2,(longlong)puVar2 + (uVar3 - *param_2));
          puVar2 = (uint *)param_2[1];
        }
        puVar2 = (uint *)((longlong)puVar2 + uVar3);
        param_2[1] = (longlong)puVar2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 3);
      if (puStack_168 < puStack_160) {
        *puStack_168 = auStack_d8[0];
        puStack_168[1] = auStack_d8[1];
        puStack_168[2] = auStack_d8[2];
        puStack_168[3] = auStack_d8[3];
        puStack_168[4] = auStack_d8[4];
        puStack_168[5] = auStack_d8[5];
        puStack_168[6] = auStack_a8[0];
        puStack_168[7] = auStack_a8[1];
        puStack_168[8] = auStack_a8[2];
        puStack_168[9] = auStack_a8[3];
        puStack_168[10] = auStack_a8[4];
        puStack_168[0xb] = auStack_a8[5];
        puStack_168[0xc] = auStack_78[0];
        puStack_168[0xd] = auStack_78[1];
        puStack_168[0xe] = CONCAT44(uStack_64,uStack_68);
        puStack_168[0xf] = CONCAT44(uStack_60._4_4_,(int32_t)uStack_60);
        *(int32_t *)(puStack_168 + 0x10) = uStack_58;
        *(int32_t *)((longlong)puStack_168 + 0x84) = uStack_54;
        *(int32_t *)(puStack_168 + 0x11) = uStack_50;
        *(int32_t *)((longlong)puStack_168 + 0x8c) = uStack_4c;
        puVar1 = puStack_168;
      }
      else {
        lVar5 = ((longlong)puStack_168 - (longlong)puStack_170) / 0x90;
        if (lVar5 == 0) {
          lVar5 = 1;
LAB_1803c3d6b:
          puVar1 = (ulonglong *)FUN_18062b420(system_memory_pool_ptr,lVar5 * 0x90,(int8_t)uStack_158);
        }
        else {
          lVar5 = lVar5 * 2;
          if (lVar5 != 0) goto LAB_1803c3d6b;
          puVar1 = (ulonglong *)0x0;
        }
        if (puStack_170 != puStack_168) {
                    // WARNING: Subroutine does not return
          memmove(puVar1,puStack_170,(longlong)puStack_168 - (longlong)puStack_170);
        }
        *puVar1 = auStack_d8[0];
        puVar1[1] = auStack_d8[1];
        puVar1[2] = auStack_d8[2];
        puVar1[3] = auStack_d8[3];
        puVar1[4] = auStack_d8[4];
        puVar1[5] = auStack_d8[5];
        puVar1[6] = auStack_a8[0];
        puVar1[7] = auStack_a8[1];
        puVar1[8] = auStack_a8[2];
        puVar1[9] = auStack_a8[3];
        puVar1[10] = auStack_a8[4];
        puVar1[0xb] = auStack_a8[5];
        puVar1[0xc] = auStack_78[0];
        puVar1[0xd] = auStack_78[1];
        *(int32_t *)(puVar1 + 0xe) = uStack_68;
        *(int32_t *)((longlong)puVar1 + 0x74) = uStack_64;
        *(int32_t *)(puVar1 + 0xf) = (int32_t)uStack_60;
        *(int32_t *)((longlong)puVar1 + 0x7c) = uStack_60._4_4_;
        *(int32_t *)(puVar1 + 0x10) = uStack_58;
        *(int32_t *)((longlong)puVar1 + 0x84) = uStack_54;
        *(int32_t *)(puVar1 + 0x11) = uStack_50;
        *(int32_t *)((longlong)puVar1 + 0x8c) = uStack_4c;
        if (puStack_170 != (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_160 = puVar1 + lVar5 * 0x12;
        puStack_170 = puVar1;
      }
      puStack_168 = puVar1 + 0x12;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*(longlong *)(param_1 + 8) + 0x1ec));
  }
  pplStack_e0 = aplStack_108;
  ppuStack_140 = &puStack_170;
  puStack_130 = &uStack_150;
  piStack_128 = aiStack_14c;
  uStack_120 = aiStack_14c + 1;
  uStack_118 = auStack_178;
  piStack_110 = aiStack_14c + 2;
  pcStack_f8 = FUN_1803c5580;
  puStack_f0 = &unknown_var_4976_ptr;
  lStack_138 = param_1;
  aplStack_108[0] = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0x38,8,system_allocation_flags);
  *aplStack_108[0] = (longlong)ppuStack_140;
  aplStack_108[0][1] = lStack_138;
  aplStack_108[0][2] = (longlong)puStack_130;
  aplStack_108[0][3] = (longlong)piStack_128;
  *(int32_t *)(aplStack_108[0] + 4) = (int32_t)uStack_120;
  *(int32_t *)((longlong)aplStack_108[0] + 0x24) = uStack_120._4_4_;
  *(int32_t *)(aplStack_108[0] + 5) = (int32_t)uStack_118;
  *(int32_t *)((longlong)aplStack_108[0] + 0x2c) = uStack_118._4_4_;
  aplStack_108[0][6] = (longlong)piStack_110;
  pplStack_180 = aplStack_108;
  uStack_188 = 0xffffffffffffffff;
  FUN_18015b810((int32_t)uStack_120,0,*(int32_t *)(*(longlong *)(param_1 + 8) + 0x1ec),1);
  if (puStack_170 == (ulonglong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1a8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




