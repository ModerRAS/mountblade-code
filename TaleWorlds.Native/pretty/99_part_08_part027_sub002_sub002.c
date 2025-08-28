/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor
#include "RenderingSystemProcessor0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_08_part027_sub002_sub002.c - 1 个函数
// 函数: void function_4f9d70(int64_t param_1,int64_t param_2,int64_t param_3,int32_t *param_4,
void function_4f9d70(int64_t param_1,int64_t param_2,int64_t param_3,int32_t *param_4,
                  int64_t param_5,uint64_t *param_6,uint64_t param_7,int param_8,int param_9)
{
  int32_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t lVar9;
  byte bVar10;
  float *pfVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint *puVar14;
  int iVar15;
  uint64_t *puVar16;
  int32_t *puVar17;
  uint *puVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t lVar21;
  int iVar22;
  byte bVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int32_t uVar36;
  int32_t uVar37;
  int32_t uVar38;
  float fVar39;
  int32_t uVar40;
  int32_t uVar41;
  int32_t uVar42;
  int32_t uVar43;
  int32_t uVar44;
  int32_t uVar45;
  int32_t uVar46;
  int32_t uVar47;
  int32_t uVar48;
  int32_t uVar49;
  int32_t uVar50;
  int32_t uVar51;
  int32_t uVar52;
  int32_t uVar53;
  int32_t uVar54;
  int32_t uVar55;
  int32_t uVar56;
  int8_t stack_array_738 [32];
  uint64_t *plocal_var_718;
  int32_t *plocal_var_710;
  uint64_t local_var_708;
  float fStack_700;
  uint64_t local_var_6f8;
  uint64_t local_var_6f0;
  int32_t local_var_6e8;
  uint stack_array_6d8 [2];
  uint64_t local_var_6d0;
  uint stack_array_6c8 [2];
  int32_t *plocal_var_6c0;
  int aiStack_6b8 [2];
  int64_t lStack_6b0;
  float *pfStack_6a8;
  uint **pplocal_var_6a0;
  int iStack_698;
  uint local_var_694;
  int iStack_690;
  uint64_t local_var_688;
  uint64_t local_var_680;
  uint64_t local_var_678;
  uint64_t local_var_668;
  uint64_t local_var_660;
  uint64_t local_var_658;
  uint64_t local_var_650;
  float fStack_648;
  int32_t local_var_644;
  int32_t local_var_640;
  int32_t local_var_63c;
  int32_t local_var_638;
  int32_t local_var_634;
  uint64_t local_var_630;
  uint local_var_628;
  int32_t local_var_624;
  int64_t lStack_618;
  uint64_t *plocal_var_610;
  uint64_t local_var_608;
  uint64_t local_var_600;
  uint64_t local_var_5f8;
  int64_t lStack_5f0;
  uint64_t local_var_5e8;
  uint64_t local_var_5e0;
  int iStack_5d8;
  int iStack_5d4;
  int64_t lStack_5d0;
  float *pfStack_5c8;
  float fStack_5c0;
  float fStack_5bc;
  int64_t lStack_5b8;
  uint64_t local_var_5b0;
  uint64_t local_var_5a8;
  uint64_t local_var_5a0;
  uint64_t local_var_598;
  uint *plocal_var_588;
  uint64_t local_var_580;
  uint64_t local_var_578;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  int32_t local_var_564;
  uint64_t local_var_558;
  uint64_t local_var_550;
  uint64_t local_var_548;
  uint stack_array_538 [256];
  uint *plocal_var_138;
  uint *plocal_var_130;
  uint64_t local_var_128;
  int32_t local_var_120;
  int iStack_118;
  byte bStack_114;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t stack_array_e8 [22];
  local_var_598 = 0xfffffffffffffffe;
  stack_array_e8[0] = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_738;
  lStack_5d0 = param_5;
  iStack_690 = param_9;
  param_9 = param_9 * param_8;
  lVar9 = *(int64_t *)(param_1 + 0x18);
  pplocal_var_6a0 = &plocal_var_138;
  plocal_var_138 = (uint *)0x0;
  plocal_var_130 = (uint *)0x0;
  uVar8 = 0;
  local_var_128 = 0;
  local_var_120 = 3;
  bStack_114 = 1;
  iStack_118 = 0;
  lVar21 = (int64_t)param_9;
  iVar15 = (int)(*(int64_t *)(lVar9 + 0x2f68) - *(int64_t *)(lVar9 + 0x2f60) >> 4);
  plocal_var_6c0 = param_4;
  lStack_6b0 = lVar9;
  lStack_618 = param_2;
  lStack_5f0 = param_1;
  lStack_5b8 = lVar21;
  if (param_9 == 1) {
    stack_array_6d8[0] = 0;
    if (0 < iVar15) {
      do {
        uVar5 = (uint)uVar8;
        plVar7 = (int64_t *)((int64_t)(int)uVar5 * 0x10 + *(int64_t *)(lVar9 + 0x2f60));
        lVar13 = *plVar7;
        if (((*(byte *)(lVar13 + 0x139) & 1) != 0) &&
           (fVar28 = *(float *)(lVar13 + 0xec) - *(float *)((int64_t)param_6 + 0x1c),
           fVar30 = *(float *)(lVar13 + 0xe8) - *(float *)(param_6 + 3),
           fVar27 = *(float *)(plVar7 + 1), fVar30 * fVar30 + fVar28 * fVar28 < fVar27 * fVar27)) {
          if (bStack_114 != 0) {
            if (iStack_118 + 1 < 0x101) {
              stack_array_538[iStack_118] = uVar5;
              iStack_118 = iStack_118 + 1;
              goto LAB_1804f9f81;
            }
            function_14e8b0(&plocal_var_138,0x200);
            puVar18 = stack_array_538;
            if (bStack_114 == 0) {
              puVar18 = plocal_var_138;
            }
            puVar14 = stack_array_538;
            if (bStack_114 == 0) {
              puVar14 = plocal_var_138;
            }
            function_455b60(&plocal_var_138,puVar14,puVar18 + 0x100);
            bStack_114 = 0;
          }
          SystemDatabaseProcessor(&plocal_var_138,stack_array_6d8);
        }
LAB_1804f9f81:
        stack_array_6d8[0] = uVar5 + 1;
        uVar8 = (uint64_t)stack_array_6d8[0];
      } while ((int)stack_array_6d8[0] < iVar15);
    }
  }
  else if (param_9 < 3) {
    puVar16 = &local_var_680;
    lVar13 = 2;
    do {
      SystemFunction_00018005d390(puVar16);
      puVar16 = puVar16 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar27 = *(float *)(param_3 + -8 + lVar21 * 8);
    fVar28 = *(float *)(param_3 + -4 + lVar21 * 8);
    local_var_6d0 = CONCAT44((fVar28 * param_7._4_4_ - fVar27 * (float)param_7) +
                          *(float *)((int64_t)param_6 + 0x1c),
                          fVar28 * (float)param_7 + fVar27 * param_7._4_4_ + *(float *)(param_6 + 3)
                         );
    local_var_680 = local_var_6d0;
    fVar27 = *(float *)(param_3 + -0x10 + lVar21 * 8);
    fVar28 = *(float *)(param_3 + -0xc + lVar21 * 8);
    local_var_6d0 = CONCAT44((fVar28 * param_7._4_4_ - fVar27 * (float)param_7) +
                          *(float *)((int64_t)param_6 + 0x1c),
                          fVar28 * (float)param_7 + fVar27 * param_7._4_4_ + *(float *)(param_6 + 3)
                         );
    local_var_678 = local_var_6d0;
    stack_array_6c8[0] = 0;
    if (0 < iVar15) {
      do {
        uVar5 = stack_array_6c8[0];
        plVar7 = (int64_t *)((int64_t)(int)stack_array_6c8[0] * 0x10 + *(int64_t *)(lVar9 + 0x2f60));
        lVar13 = *plVar7;
        if (((*(byte *)(lVar13 + 0x139) & 1) != 0) &&
           (fVar27 = *(float *)(plVar7 + 1),
           fVar28 = (float)function_38a130(&local_var_680,&local_var_678,lVar13 + 0xe8),
           fVar28 < fVar27 * fVar27)) {
          function_4fb4f0(stack_array_538,stack_array_6c8);
        }
        stack_array_6c8[0] = uVar5 + 1;
      } while ((int)stack_array_6c8[0] < iVar15);
    }
  }
  else {
    fVar30 = 3.4028235e+38;
    fVar39 = 3.4028235e+38;
    fVar27 = -3.4028235e+38;
    fVar28 = -3.4028235e+38;
    if (3 < lVar21) {
      pfVar11 = (float *)(param_3 + 0x14);
      lVar13 = (lVar21 - 4U >> 2) + 1;
      uVar8 = lVar13 * 4;
      do {
        fVar25 = pfVar11[-5];
        fVar32 = pfVar11[-4];
        fVar26 = fVar25;
        if (fVar30 <= fVar25) {
          fVar26 = fVar30;
        }
        if (fVar25 <= fVar27) {
          fVar25 = fVar27;
        }
        fVar27 = fVar32;
        if (fVar39 <= fVar32) {
          fVar27 = fVar39;
        }
        if (fVar32 <= fVar28) {
          fVar32 = fVar28;
        }
        fVar28 = pfVar11[-3];
        fVar30 = pfVar11[-2];
        fVar39 = fVar28;
        if (fVar26 <= fVar28) {
          fVar39 = fVar26;
        }
        if (fVar28 <= fVar25) {
          fVar28 = fVar25;
        }
        fVar25 = fVar30;
        if (fVar27 <= fVar30) {
          fVar25 = fVar27;
        }
        if (fVar30 <= fVar32) {
          fVar30 = fVar32;
        }
        fVar32 = pfVar11[-1];
        fVar26 = *pfVar11;
        fVar29 = fVar32;
        if (fVar39 <= fVar32) {
          fVar29 = fVar39;
        }
        if (fVar32 <= fVar28) {
          fVar32 = fVar28;
        }
        fVar31 = fVar26;
        if (fVar25 <= fVar26) {
          fVar31 = fVar25;
        }
        if (fVar26 <= fVar30) {
          fVar26 = fVar30;
        }
        fVar27 = pfVar11[1];
        fVar28 = pfVar11[2];
        fVar30 = fVar27;
        if (fVar29 <= fVar27) {
          fVar30 = fVar29;
        }
        if (fVar27 <= fVar32) {
          fVar27 = fVar32;
        }
        fVar39 = fVar28;
        if (fVar31 <= fVar28) {
          fVar39 = fVar31;
        }
        if (fVar28 <= fVar26) {
          fVar28 = fVar26;
        }
        pfVar11 = pfVar11 + 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    for (; (int64_t)uVar8 < lVar21; uVar8 = uVar8 + 1) {
      fVar25 = *(float *)(param_3 + uVar8 * 8);
      fVar32 = *(float *)(param_3 + 4 + uVar8 * 8);
      fVar26 = fVar25;
      if (fVar30 <= fVar25) {
        fVar26 = fVar30;
      }
      if (fVar25 <= fVar27) {
        fVar25 = fVar27;
      }
      fVar27 = fVar32;
      if (fVar39 <= fVar32) {
        fVar27 = fVar39;
      }
      if (fVar32 <= fVar28) {
        fVar32 = fVar28;
      }
      fVar30 = fVar26;
      fVar39 = fVar27;
      fVar27 = fVar25;
      fVar28 = fVar32;
    }
    if (fVar27 == fVar30) {
      fVar27 = fVar27 + 0.0001;
    }
    if (fVar28 == fVar39) {
      fVar28 = fVar28 + 0.0001;
    }
    puVar16 = &local_var_108;
    lVar13 = 4;
    do {
      SystemFunction_00018005d390(puVar16);
      puVar16 = puVar16 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar25 = *(float *)((int64_t)param_6 + 0x1c);
    fVar32 = *(float *)(param_6 + 3);
    local_var_6d0 = CONCAT44((param_7._4_4_ * fVar39 - (float)param_7 * fVar30) + fVar25,
                          (float)param_7 * fVar39 + param_7._4_4_ * fVar30 + fVar32);
    local_var_108 = local_var_6d0;
    local_var_6d0 = CONCAT44((param_7._4_4_ * fVar39 - (float)param_7 * fVar27) + fVar25,
                          param_7._4_4_ * fVar27 + (float)param_7 * fVar39 + fVar32);
    local_var_100 = local_var_6d0;
    local_var_6d0 = CONCAT44((param_7._4_4_ * fVar28 - (float)param_7 * fVar27) + fVar25,
                          (float)param_7 * fVar28 + param_7._4_4_ * fVar27 + fVar32);
    local_var_f8 = local_var_6d0;
    local_var_6d0 = CONCAT44((param_7._4_4_ * fVar28 - (float)param_7 * fVar30) + fVar25,
                          (float)param_7 * fVar28 + param_7._4_4_ * fVar30 + fVar32);
    local_var_f0 = local_var_6d0;
    pplocal_var_6a0 = &plocal_var_588;
    plocal_var_588 = (uint *)0x0;
    local_var_580 = 0;
    local_var_578 = 0;
    fStack_570 = 4.2039e-45;
    local_var_558 = 0;
    local_var_550 = 0;
    local_var_548 = 0;
    plocal_var_610 = &local_var_108;
    function_640330(&local_var_108,stack_array_e8);
    function_63f960(&plocal_var_588,&plocal_var_610,4);
    stack_array_6d8[0] = 0;
    if (0 < iVar15) {
      do {
        uVar5 = stack_array_6d8[0];
        plVar7 = (int64_t *)((int64_t)(int)stack_array_6d8[0] * 0x10 + *(int64_t *)(lVar9 + 0x2f60));
        if (((*(byte *)(*plVar7 + 0x139) & 1) != 0) &&
           ((fVar27 = (float)function_63ee10(&plocal_var_588,*plVar7 + 0xe8,&pplocal_var_6a0),
            fVar27 < *(float *)(plVar7 + 1) ||
            (cVar3 = function_63e7e0(&plocal_var_588,*plVar7 + 0xe8), cVar3 != '\0')))) {
          if (bStack_114 != 0) {
            if (iStack_118 + 1 < 0x101) {
              stack_array_538[iStack_118] = uVar5;
              iStack_118 = iStack_118 + 1;
              goto LAB_1804fa35d;
            }
            function_14e8b0(&plocal_var_138,0x200);
            puVar18 = stack_array_538;
            if (bStack_114 == 0) {
              puVar18 = plocal_var_138;
            }
            puVar14 = stack_array_538;
            if (bStack_114 == 0) {
              puVar14 = plocal_var_138;
            }
            function_455b60(&plocal_var_138,puVar14,puVar18 + 0x100);
            bStack_114 = 0;
          }
          SystemDatabaseProcessor(&plocal_var_138,stack_array_6d8);
        }
LAB_1804fa35d:
        stack_array_6d8[0] = uVar5 + 1;
      } while ((int)stack_array_6d8[0] < iVar15);
    }
    pplocal_var_6a0 = &plocal_var_588;
    if (plocal_var_588 != (uint *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  local_var_668 = *param_6;
  pfStack_5c8 = (float *)(param_6 + 3);
  fVar27 = *pfStack_5c8;
  fVar28 = *(float *)((int64_t)param_6 + 0x1c);
  local_var_650 = *(uint64_t *)pfStack_5c8;
  fVar30 = *(float *)(param_6 + 4);
  uVar38 = *(int32_t *)((int64_t)param_6 + 0x24);
  uVar41 = *(int32_t *)(param_6 + 5);
  uVar43 = *(int32_t *)((int64_t)param_6 + 0x2c);
  uVar45 = *(int32_t *)(param_6 + 6);
  uVar47 = *(int32_t *)((int64_t)param_6 + 0x34);
  local_var_660 = param_6[1];
  local_var_6d0 = param_6[2];
  uVar2 = param_6[7];
  stack_array_6d8[0] = *(uint *)(param_6 + 8);
  iStack_698 = *(int *)(lStack_618 + 4);
  stack_array_6c8[0] = stack_array_6d8[0];
  local_var_694 = stack_array_6d8[0];
  local_var_658 = local_var_6d0;
  fStack_648 = fVar30;
  local_var_644 = uVar38;
  local_var_640 = uVar41;
  local_var_63c = uVar43;
  local_var_638 = uVar45;
  local_var_634 = uVar47;
  local_var_630 = uVar2;
  local_var_628 = stack_array_6d8[0];
  local_var_608 = local_var_6d0;
  local_var_600 = local_var_668;
  local_var_5f8 = local_var_660;
  local_var_5e8 = local_var_660;
  local_var_5e0 = local_var_6d0;
  local_var_5b0 = local_var_668;
  local_var_5a8 = local_var_660;
  local_var_5a0 = local_var_668;
  fStack_570 = fVar27;
  fStack_56c = fVar28;
  fStack_568 = fVar30;
  local_var_564 = uVar38;
  SystemCore_Validator(param_6,2);
  if ((*(int *)(param_6 + 8) < 2) ||
     (plocal_var_610 = (uint64_t *)param_6[1], plocal_var_610 == (uint64_t *)0x0)) {
    uVar19 = 0;
    uVar8 = lVar21 * 4 + 3U >> 2;
    if (plocal_var_6c0 + lVar21 < plocal_var_6c0) {
      uVar8 = uVar19;
    }
    if (uVar8 != 0) {
      uVar12 = uVar19;
      puVar17 = plocal_var_6c0;
      if ((3 < uVar8) &&
         ((&ui_system_data_1732_ptr < plocal_var_6c0 || (uVar12 = 0, plocal_var_6c0 + (uVar8 - 1) < &ui_system_data_1732_ptr))
         )) {
        do {
          uVar19 = uVar19 + 4;
        } while (uVar19 != (uVar8 & 0xfffffffffffffffc));
        for (uVar12 = uVar8 & 0x3ffffffffffffffc; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar17 = 1;
          puVar17 = puVar17 + 1;
        }
        puVar17 = plocal_var_6c0 + (uVar8 & 0xfffffffffffffffc);
        uVar12 = uVar19;
      }
      for (; uVar12 != uVar8; uVar12 = uVar12 + 1) {
        *puVar17 = 1;
        puVar17 = puVar17 + 1;
      }
    }
  }
  else if (0 < lVar21) {
    pfVar11 = (float *)(param_3 + 4);
    lStack_618 = lStack_618 - param_3;
    puVar17 = plocal_var_6c0;
    fVar39 = fVar27;
    fVar25 = fVar28;
    fVar32 = fVar30;
    uVar37 = uVar38;
    fVar26 = fVar27;
    fVar29 = fVar28;
    fVar31 = fVar30;
    uVar48 = uVar38;
    uVar49 = uVar41;
    uVar50 = uVar43;
    uVar51 = uVar45;
    uVar52 = uVar47;
    uVar53 = uVar41;
    uVar54 = uVar43;
    uVar55 = uVar45;
    uVar56 = uVar47;
    do {
      iVar15 = *(int *)(lStack_618 + -4 + (int64_t)pfVar11);
      local_var_688 = CONCAT44(local_var_688._4_4_,iVar15);
      aiStack_6b8[0] = *(int *)(lStack_618 + (int64_t)pfVar11);
      pplocal_var_6a0 = (uint **)(int64_t)(iStack_690 * iVar15 + aiStack_6b8[0]);
      pfStack_6a8 = pfVar11;
      fVar33 = fVar39;
      fVar34 = fVar25;
      fVar35 = fVar32;
      uVar36 = uVar37;
      uVar40 = uVar53;
      uVar42 = uVar54;
      uVar44 = uVar55;
      uVar46 = uVar56;
      if (puVar17[(int64_t)pplocal_var_6a0] == 0) {
        bVar24 = iStack_698 != aiStack_6b8[0];
        local_var_668 = local_var_5b0;
        local_var_660 = local_var_5a8;
        fVar33 = fVar27;
        fVar34 = fVar28;
        fVar35 = fVar30;
        uVar36 = uVar38;
        uVar40 = uVar41;
        uVar42 = uVar43;
        uVar44 = uVar45;
        uVar46 = uVar47;
        if (bVar24) {
          local_var_608 = local_var_5e0;
          stack_array_6d8[0] = local_var_694;
          local_var_600 = local_var_5a0;
          local_var_5f8 = local_var_5e8;
          local_var_6d0 = local_var_5e0;
          stack_array_6c8[0] = local_var_694;
          local_var_668 = local_var_5a0;
          local_var_660 = local_var_5e8;
          fVar33 = fVar26;
          fVar34 = fVar29;
          fVar35 = fVar31;
          uVar36 = uVar48;
          uVar40 = uVar49;
          uVar42 = uVar50;
          uVar44 = uVar51;
          uVar46 = uVar52;
          fVar39 = fVar26;
          fVar25 = fVar29;
          fVar32 = fVar31;
          uVar37 = uVar48;
          uVar53 = uVar49;
          uVar54 = uVar50;
          uVar55 = uVar51;
          uVar56 = uVar52;
          iStack_698 = aiStack_6b8[0];
          fStack_56c = fVar29;
        }
        uVar20 = local_var_608;
        local_var_650 = CONCAT44(fVar25,fVar39);
        local_var_658 = local_var_608;
        fStack_5bc = (*pfVar11 * param_7._4_4_ - pfVar11[-1] * (float)param_7) + pfStack_5c8[1];
        fStack_5c0 = pfVar11[-1] * param_7._4_4_ + *pfVar11 * (float)param_7 + *pfStack_5c8;
        local_var_628 = stack_array_6d8[0];
        if ((fVar39 != fStack_5c0) || (fStack_56c != fStack_5bc)) {
          if (stack_array_6d8[0] != 0) {
            local_var_628 = 0;
          }
          local_var_650 = CONCAT44(fStack_5bc,fStack_5c0);
          fVar39 = fStack_5c0;
          fVar25 = fStack_5bc;
        }
        local_var_5b0 = local_var_600;
        local_var_5a8 = local_var_5f8;
        local_var_608 = local_var_6d0;
        stack_array_6d8[0] = stack_array_6c8[0];
        local_var_680 = CONCAT44(fVar25,fVar39);
        local_var_678 = CONCAT44(uVar37,fVar32);
        local_var_108 = CONCAT44(uVar54,uVar53);
        local_var_100 = CONCAT44(uVar56,uVar55);
        local_var_6d0 = uVar20;
        if (bVar24) {
          local_var_5e0 = uVar20;
          fVar26 = fVar39;
          fVar29 = fVar25;
          fVar31 = fVar32;
          uVar48 = uVar37;
          uVar49 = uVar53;
          uVar50 = uVar54;
          uVar51 = uVar55;
          uVar52 = uVar56;
          local_var_694 = local_var_628;
          local_var_5e8 = local_var_660;
          local_var_5a0 = local_var_668;
        }
        puVar16 = (uint64_t *)(lStack_5d0 + (int64_t)pplocal_var_6a0 * 0x48);
        *puVar16 = local_var_668;
        puVar16[1] = local_var_660;
        puVar16 = (uint64_t *)(lStack_5d0 + 0x10 + (int64_t)pplocal_var_6a0 * 0x48);
        *puVar16 = uVar20;
        puVar16[1] = local_var_650;
        puVar16 = (uint64_t *)(lStack_5d0 + 0x20 + (int64_t)pplocal_var_6a0 * 0x48);
        *puVar16 = CONCAT44(uVar37,fVar32);
        puVar16[1] = CONCAT44(uVar54,uVar53);
        local_var_630._0_4_ = (int32_t)uVar2;
        local_var_630._4_4_ = (int32_t)((uint64_t)uVar2 >> 0x20);
        puVar1 = (int32_t *)(lStack_5d0 + 0x30 + (int64_t)pplocal_var_6a0 * 0x48);
        *puVar1 = uVar55;
        puVar1[1] = uVar56;
        puVar1[2] = (int32_t)local_var_630;
        puVar1[3] = local_var_630._4_4_;
        *(uint64_t *)(lStack_5d0 + 0x40 + (int64_t)pplocal_var_6a0 * 0x48) =
             CONCAT44(local_var_624,local_var_628);
        bVar23 = 1;
        bVar10 = 1;
        fVar27 = fVar39;
        fVar28 = fVar25;
        fVar30 = fVar32;
        uVar38 = uVar37;
        uVar41 = uVar53;
        uVar43 = uVar54;
        uVar45 = uVar55;
        uVar47 = uVar56;
        stack_array_6c8[0] = local_var_628;
        fStack_648 = fVar32;
        local_var_644 = uVar37;
        local_var_640 = uVar53;
        local_var_63c = uVar54;
        local_var_638 = uVar55;
        local_var_634 = uVar56;
        local_var_630 = uVar2;
        local_var_600 = local_var_668;
        local_var_5f8 = local_var_660;
        fStack_570 = fVar33;
        fStack_56c = fVar34;
        fStack_568 = fVar35;
        local_var_564 = uVar36;
        if ((*(int64_t *)(lVar9 + 0x2ee8) - *(int64_t *)(lVar9 + 12000) & 0xfffffffffffffff8U) !=
            0) {
          cVar3 = function_4f6190(lStack_5f0,&local_var_650);
          if (cVar3 == '\0') {
            bVar10 = 0;
            pfStack_6a8 = pfVar11;
          }
          else {
            SystemCore_Validator(&local_var_668,1);
            if (((int)local_var_628 < 1) || (local_var_660 == 0)) {
LAB_1804fab80:
              pfStack_6a8 = pfVar11;
              bVar10 = 0;
              fVar27 = fVar39;
              fVar28 = fVar25;
              fVar30 = fVar32;
              uVar38 = uVar37;
            }
            else {
              SystemCore_Validator(&local_var_668);
              lVar21 = lStack_6b0;
              uVar19 = 0;
              uVar8 = uVar19;
              if (0 < (int)local_var_628) {
                uVar8 = local_var_660;
              }
              if (*(int *)(plocal_var_610 + 0x25) == *(int *)(uVar8 + 0x128)) {
                uVar8 = (uint64_t)bStack_114;
                puVar18 = plocal_var_138;
                while( true ) {
                  iVar15 = iStack_690;
                  puVar17 = plocal_var_6c0;
                  iVar6 = iStack_118;
                  if ((char)uVar8 == '\0') {
                    iVar6 = (int)((int64_t)plocal_var_130 - (int64_t)puVar18 >> 2);
                  }
                  iVar22 = (int)uVar19;
                  if (iVar6 <= iVar22) break;
                  puVar14 = puVar18;
                  if ((char)uVar8 != '\0') {
                    puVar14 = stack_array_538;
                  }
                  uVar20 = *(uint64_t *)
                            (*(int64_t *)(lVar21 + 0x2f60) + (int64_t)(int)puVar14[iVar22] * 0x10)
                  ;
                  cVar3 = SystemCore_PerformanceMonitor(uVar20,&local_var_650);
                  if (cVar3 != '\0') {
                    fVar28 = (float)SystemFunction_00018038d2f0(uVar20,&local_var_650);
                    SystemCore_Validator(&local_var_668,1);
                    fVar27 = fStack_648;
                    if ((int)local_var_628 < 1) {
                      fVar27 = -NAN;
                    }
                    if (ABS(fVar28 - fVar27) < 1.5) {
                      bVar23 = 0;
                    }
                    uVar8 = (uint64_t)bStack_114;
                    puVar18 = plocal_var_138;
                  }
                  uVar19 = (uint64_t)(iVar22 + 1);
                }
                bVar10 = bVar23;
                if (bVar23 != 0) {
                  plocal_var_710 = plocal_var_6c0;
                  plocal_var_718 = (uint64_t *)CONCAT44(plocal_var_718._4_4_,iStack_690);
                  function_4f9980(&iStack_5d8,local_var_688 & 0xffffffff,aiStack_6b8[0],param_8);
                  if (-1 < iStack_5d8) {
                    plVar7 = (int64_t *)
                             (lStack_5d0 + (int64_t)(iStack_5d8 * iVar15 + iStack_5d4) * 0x48);
                    fVar28 = 1.5;
                    fVar27 = *(float *)((int64_t)plVar7 + 0x1c) - local_var_650._4_4_;
                    fVar27 = (*(float *)(plVar7 + 3) - (float)local_var_650) *
                             (*(float *)(plVar7 + 3) - (float)local_var_650) + fVar27 * fVar27;
                    if (1.0 < fVar27) {
                      fVar28 = SQRT(SQRT(fVar27)) * 1.5;
                    }
                    SystemCore_Validator(&local_var_668,1);
                    fVar27 = fStack_648;
                    if ((int)local_var_628 < 1) {
                      fVar27 = -NAN;
                    }
                    SystemCore_Validator(plVar7,1);
                    pfVar11 = pfStack_5c8;
                    if ((int)plVar7[8] < 1) {
                      fVar30 = -NAN;
                    }
                    else {
                      fVar30 = *(float *)(plVar7 + 4);
                    }
                    bVar10 = 0;
                    if (ABS(fVar27 - fVar30) <= fVar28) {
                      bVar10 = bVar23;
                    }
                    if (bVar10 != 0) {
                      fVar27 = ABS(local_var_650._4_4_ - pfStack_5c8[1]) +
                               ABS((float)local_var_650 - *pfStack_5c8);
                      if (*plVar7 != 0) {
                        local_var_688 = CONCAT44(local_var_688._4_4_,(int)plVar7[3]);
                        sVar4 = _fdtest(&local_var_688);
                        if (sVar4 != 2) {
                          aiStack_6b8[0] = *(int *)((int64_t)plVar7 + 0x1c);
                          sVar4 = _fdtest(aiStack_6b8);
                          if (((sVar4 != 2) && (SystemCore_Validator(plVar7,1), 0 < (int)plVar7[8])) &&
                             (plVar7[1] != 0)) {
                            local_var_688 = *(int64_t *)(lStack_5f0 + 0x18) + 0x2a68;
                            fVar27 = fVar27 + fVar27;
                            if (10.0 <= fVar27) {
                              fVar27 = 10.0;
                            }
                            SystemCore_Validator(&local_var_668,1);
                            uVar8 = 0;
                            if (0 < (int)local_var_628) {
                              uVar8 = local_var_660;
                            }
                            SystemCore_Validator(plVar7,1);
                            lVar9 = 0;
                            if (0 < (int)plVar7[8]) {
                              lVar9 = plVar7[1];
                            }
                            local_var_6e8 = 0x3f800000;
                            local_var_6f0 = 0;
                            local_var_6f8 = 0;
                            local_var_708 = 0;
                            plocal_var_710 = (int32_t *)
                                          ((uint64_t)plocal_var_710 & 0xffffffff00000000);
                            plocal_var_718 = &local_var_650;
                            fStack_700 = fVar27;
                            cVar3 = function_393610(local_var_688,lVar9,uVar8,plVar7 + 3);
                            lVar9 = lStack_6b0;
                            pfVar11 = pfStack_6a8;
                            fVar27 = (float)local_var_680;
                            fVar39 = (float)local_var_680;
                            fVar28 = local_var_680._4_4_;
                            fVar25 = local_var_680._4_4_;
                            fVar30 = (float)local_var_678;
                            fVar32 = (float)local_var_678;
                            uVar38 = local_var_678._4_4_;
                            uVar37 = local_var_678._4_4_;
                            uVar41 = (int32_t)local_var_108;
                            uVar43 = local_var_108._4_4_;
                            uVar45 = (int32_t)local_var_100;
                            uVar47 = local_var_100._4_4_;
                            if (cVar3 == '\0') goto LAB_1804fab80;
                            goto LAB_1804fac18;
                          }
                        }
                      }
                      lVar9 = *(int64_t *)(lStack_5f0 + 0x18);
                      SystemCore_Validator(&local_var_668,1);
                      uVar8 = 0;
                      if (0 < (int)local_var_628) {
                        uVar8 = local_var_660;
                      }
                      fStack_700 = fVar27 * 2.0;
                      local_var_6e8 = 0x3f800000;
                      local_var_6f0 = 0;
                      local_var_6f8 = 0;
                      local_var_708 = 0;
                      plocal_var_710 = (int32_t *)((uint64_t)plocal_var_710 & 0xffffffff00000000);
                      plocal_var_718 = &local_var_650;
                      cVar3 = function_393610(lVar9 + 0x2a68,plocal_var_610,uVar8,pfVar11);
                      uVar8 = (uint64_t)bVar10;
                      if (cVar3 == '\0') {
                        uVar8 = 0;
                      }
                      bVar10 = (byte)uVar8;
                      puVar17 = plocal_var_6c0;
                    }
                    uVar41 = (int32_t)local_var_108;
                    uVar43 = local_var_108._4_4_;
                    uVar45 = (int32_t)local_var_100;
                    uVar47 = local_var_100._4_4_;
                  }
                }
                lVar9 = lStack_6b0;
                fVar27 = (float)local_var_680;
                fVar28 = local_var_680._4_4_;
                fVar30 = (float)local_var_678;
                uVar38 = local_var_678._4_4_;
              }
              else {
                bVar10 = 0;
                pfStack_6a8 = pfVar11;
              }
            }
          }
        }
LAB_1804fac18:
        puVar17[(int64_t)pplocal_var_6a0] = (bVar10 != 0) + 1;
      }
      pfVar11 = pfStack_6a8 + 2;
      lStack_5b8 = lStack_5b8 + -1;
      fVar39 = fVar33;
      fVar25 = fVar34;
      fVar32 = fVar35;
      uVar37 = uVar36;
      uVar53 = uVar40;
      uVar54 = uVar42;
      uVar55 = uVar44;
      uVar56 = uVar46;
      pfStack_6a8 = pfVar11;
    } while (lStack_5b8 != 0);
  }
  if (bStack_114 == 0) {
    plocal_var_130 = plocal_var_138;
    bStack_114 = 1;
  }
  iStack_118 = 0;
  pplocal_var_6a0 = &plocal_var_138;
  if (plocal_var_138 != (uint *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(stack_array_e8[0] ^ (uint64_t)stack_array_738);
}
uint64_t
function_4fada0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4,float param_5)
{
  float *pfVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float fVar11;
  pfVar1 = (float *)(param_3 + 0x18);
  cVar3 = function_4f6190(param_1,pfVar1);
  if (cVar3 != '\0') {
    lVar9 = *(int64_t *)(param_1 + 0x18);
    if ((*(int64_t *)(lVar9 + 0x2ee8) - *(int64_t *)(lVar9 + 12000) & 0xfffffffffffffff8U) == 0) {
      return 1;
    }
    SystemCore_Validator(param_2,2);
    if ((((1 < *(int *)(param_2 + 0x40)) && (*(int64_t *)(param_2 + 8) != 0)) &&
        (SystemCore_Validator(param_3,2), 1 < *(int *)(param_3 + 0x40))) &&
       (*(int64_t *)(param_3 + 8) != 0)) {
      if ((*param_4 != 0) && (cVar3 = function_488880(param_4 + 3), cVar3 != '\0')) {
        fVar11 = 1.5;
        fVar10 = *(float *)((int64_t)param_4 + 0x1c) - *(float *)(param_3 + 0x1c);
        fVar10 = (*(float *)(param_4 + 3) - *pfVar1) * (*(float *)(param_4 + 3) - *pfVar1) +
                 fVar10 * fVar10;
        if (1.0 < fVar10) {
          fVar11 = SQRT(SQRT(fVar10)) * 1.5;
        }
        fVar10 = (float)function_488840(param_3,2);
        function_488840(param_4,2);
        if (fVar11 < ABS(fVar10 - extraout_XMM0_Da)) {
          return 0;
        }
      }
      plVar2 = *(int64_t **)(lVar9 + 0x2f68);
      for (plVar8 = *(int64_t **)(lVar9 + 0x2f60); plVar8 != plVar2; plVar8 = plVar8 + 2) {
        lVar9 = *plVar8;
        cVar3 = SystemCore_PerformanceMonitor(lVar9,pfVar1);
        if ((cVar3 != '\0') &&
           (fVar10 = (float)SystemFunction_00018038d2f0(lVar9,pfVar1), (*(byte *)(lVar9 + 0x139) & 1) != 0))
        {
          SystemCore_Validator(param_3,2);
          if (*(int *)(param_3 + 0x40) < 2) {
            fVar11 = -NAN;
          }
          else {
            fVar11 = *(float *)(param_3 + 0x20);
          }
          if (ABS(fVar10 - fVar11) < 1.5) {
            return 0;
          }
        }
      }
      if ((((*param_4 == 0) || (cVar3 = function_488880(param_4 + 3), cVar3 == '\0')) ||
          (SystemCore_Validator(param_4,2), (int)param_4[8] < 2)) || (param_4[1] == 0)) {
        lVar9 = *(int64_t *)(param_1 + 0x18);
        SystemCore_Validator(param_3,2);
        uVar5 = 0;
        uVar7 = uVar5;
        if (1 < *(int *)(param_3 + 0x40)) {
          uVar7 = *(uint64_t *)(param_3 + 8);
        }
        SystemCore_Validator(param_2,2);
        if (1 < *(int *)(param_2 + 0x40)) {
          uVar5 = *(uint64_t *)(param_2 + 8);
        }
        cVar3 = function_393610(lVar9 + 0x2a68,uVar5,uVar7,param_2 + 0x18,pfVar1,0,0,param_5 + param_5
                              ,0,0,0x3f800000);
      }
      else {
        lVar9 = *(int64_t *)(param_1 + 0x18);
        param_5 = param_5 + param_5;
        if (10.0 <= param_5) {
          param_5 = 10.0;
        }
        SystemCore_Validator(param_3,2);
        lVar4 = 0;
        lVar6 = lVar4;
        if (1 < *(int *)(param_3 + 0x40)) {
          lVar6 = *(int64_t *)(param_3 + 8);
        }
        SystemCore_Validator(param_4,2);
        if (1 < (int)param_4[8]) {
          lVar4 = param_4[1];
        }
        cVar3 = function_393610(lVar9 + 0x2a68,lVar4,lVar6,param_4 + 3,pfVar1,0,0,param_5,0,0,
                              0x3f800000);
      }
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}
uint64_t *
function_4fb120(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4,
             float param_5,char param_6)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t local_var_178;
  uint64_t local_var_168;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  int iStack_128;
  int32_t local_var_124;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int32_t local_var_e8;
  int32_t local_var_e4;
  uint64_t local_var_e0;
  int iStack_d8;
  float fStack_c8;
  float fStack_c4;
  if (param_5 <= 0.1) {
    param_5 = 0.1;
  }
  uVar1 = param_4[3];
  local_var_178._0_4_ = (float)param_3;
  fVar4 = (float)local_var_178;
  local_var_178._4_4_ = (float)((uint64_t)param_3 >> 0x20);
  fVar5 = local_var_178._4_4_;
  fVar10 = (float)local_var_178 - *(float *)(param_4 + 3);
  fVar11 = local_var_178._4_4_ - *(float *)((int64_t)param_4 + 0x1c);
  local_var_168 = *param_4;
  local_var_160 = param_4[1];
  local_var_158 = param_4[2];
  local_var_130 = param_4[7];
  iStack_128 = *(int *)(param_4 + 8);
  fVar7 = fVar11 * fVar11 + fVar10 * fVar10;
  fStack_c8 = (float)local_var_178;
  fStack_c4 = local_var_178._4_4_;
  auVar8 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar9 = auVar8._0_4_;
  local_var_150 = param_4[3];
  local_var_148 = param_4[4];
  fVar9 = fVar9 * 0.5 * (3.0 - fVar7 * fVar9 * fVar9);
  local_var_140 = param_4[5];
  local_var_138 = param_4[6];
  SystemCore_Validator(&local_var_168,3);
  local_var_178._0_4_ = (float)uVar1;
  local_var_178._4_4_ = (float)((uint64_t)uVar1 >> 0x20);
  fVar7 = (fVar5 - local_var_178._4_4_) * (fVar5 - local_var_178._4_4_) +
          (fVar4 - (float)local_var_178) * (fVar4 - (float)local_var_178);
  local_var_100._0_4_ = (float)local_var_150;
  local_var_100._4_4_ = local_var_150._4_4_;
  local_var_f8 = (int32_t)local_var_148;
  local_var_f4 = local_var_148._4_4_;
  uVar1 = local_var_150;
  uVar2 = local_var_140;
  uVar3 = local_var_138;
  while( true ) {
    local_var_140._0_4_ = (int32_t)uVar2;
    local_var_140._4_4_ = (int32_t)((uint64_t)uVar2 >> 0x20);
    local_var_138._0_4_ = (int32_t)uVar3;
    local_var_138._4_4_ = (int32_t)((uint64_t)uVar3 >> 0x20);
    local_var_150._4_4_ = (float)((uint64_t)uVar1 >> 0x20);
    local_var_150 = uVar1;
    local_var_140 = uVar2;
    local_var_138 = uVar3;
    local_var_118 = local_var_168;
    local_var_110 = local_var_160;
    local_var_108 = local_var_158;
    local_var_e0 = local_var_130;
    iStack_d8 = iStack_128;
    if (fVar7 <= param_5 * param_5) break;
    local_var_178._0_4_ = (float)local_var_178 + fVar10 * fVar9 * param_5;
    local_var_178._4_4_ = local_var_178._4_4_ + fVar11 * fVar9 * param_5;
    local_var_f0 = (int32_t)local_var_140;
    local_var_ec = local_var_140._4_4_;
    local_var_e8 = (int32_t)local_var_138;
    local_var_e4 = local_var_138._4_4_;
    if ((((float)local_var_100 != (float)local_var_178) || (local_var_150._4_4_ != local_var_178._4_4_)) &&
       (local_var_100 = local_var_178, iStack_128 != 0)) {
      iStack_d8 = 0;
    }
    cVar6 = function_4fada0(param_1,param_4,&local_var_118,&local_var_168,param_5 + param_5);
    if (cVar6 == '\0') {
      if (param_6 != '\0') goto LAB_1804fb472;
      local_var_100._0_4_ = (float)local_var_150;
      local_var_100._4_4_ = local_var_150._4_4_;
      local_var_f8 = (int32_t)local_var_148;
      local_var_f4 = local_var_148._4_4_;
    }
    else {
      local_var_140 = CONCAT44(local_var_ec,local_var_f0);
      local_var_138 = CONCAT44(local_var_e4,local_var_e8);
      local_var_168 = local_var_118;
      local_var_160 = local_var_110;
      local_var_158 = local_var_108;
      local_var_130 = local_var_e0;
      local_var_150 = local_var_100;
      local_var_148 = CONCAT44(local_var_f4,local_var_f8);
      iStack_128 = iStack_d8;
    }
    fVar7 = (fVar4 - (float)local_var_178) * (fVar4 - (float)local_var_178) +
            (fVar5 - local_var_178._4_4_) * (fVar5 - local_var_178._4_4_);
    uVar1 = local_var_150;
    uVar2 = local_var_140;
    uVar3 = local_var_138;
  }
  local_var_f0 = (int32_t)local_var_140;
  local_var_ec = local_var_140._4_4_;
  local_var_e8 = (int32_t)local_var_138;
  local_var_e4 = local_var_138._4_4_;
  if ((((float)local_var_100 != fVar4) || (local_var_150._4_4_ != fVar5)) &&
     (local_var_100 = CONCAT44(fStack_c4,fStack_c8), iStack_128 != 0)) {
    iStack_d8 = 0;
  }
  cVar6 = function_4fada0(param_1,param_4,&local_var_118,&local_var_168,param_5 + param_5);
  if (cVar6 != '\0') {
    local_var_148 = CONCAT44(local_var_f4,local_var_f8);
    local_var_140 = CONCAT44(local_var_ec,local_var_f0);
    local_var_138 = CONCAT44(local_var_e4,local_var_e8);
    local_var_168 = local_var_118;
    local_var_160 = local_var_110;
    local_var_158 = local_var_108;
    local_var_130 = local_var_e0;
    local_var_150 = local_var_100;
    iStack_128 = iStack_d8;
  }
LAB_1804fb472:
  *param_2 = local_var_168;
  param_2[1] = local_var_160;
  param_2[2] = local_var_158;
  param_2[3] = local_var_150;
  param_2[4] = local_var_148;
  param_2[5] = local_var_140;
  param_2[6] = local_var_138;
  param_2[7] = local_var_130;
  param_2[8] = CONCAT44(local_var_124,iStack_128);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address