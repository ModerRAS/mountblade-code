/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part376.c - 10 个函数
// 函数: void function_471a46(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_471a46(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uVar1 = 0;
  uVar3 = uVar1;
  if (in_RAX != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar1 + param_3) + 0xd0))();
      param_3 = *(int64_t *)(unaff_RBX + 0x200);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0x208) - param_3 >> 3));
  }
  return;
}
// 函数: void function_471a52(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_471a52(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + param_3) + 0xd0))();
    param_3 = *(int64_t *)(unaff_RBX + 0x200);
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x208) - param_3 >> 3));
  return;
}
// 函数: void function_471a98(void)
void function_471a98(void)
{
  return;
}
// 函数: void function_471a9d(void)
void function_471a9d(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_471ab0(int64_t param_1,float *param_2,int64_t param_3)
void function_471ab0(int64_t param_1,float *param_2,int64_t param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint uVar11;
  uint64_t uVar12;
  float fVar14;
  int8_t auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int8_t stack_array_718 [32];
  uint64_t *plocal_var_6f8;
  int32_t local_var_6f0;
  void **pplocal_var_6e8;
  int32_t local_var_6e0;
  int32_t local_var_6d8;
  int32_t local_var_6d0;
  int64_t lStack_6c8;
  uint64_t local_var_6b8;
  int32_t local_var_6b0;
  int32_t local_var_6ac;
  float fStack_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  uint64_t local_var_698;
  uint64_t local_var_690;
  float fStack_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float fStack_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  int32_t local_var_668;
  int32_t local_var_664;
  int32_t local_var_660;
  int32_t local_var_65c;
  int32_t local_var_658;
  float fStack_654;
  float fStack_650;
  float fStack_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float fStack_638;
  float fStack_634;
  float fStack_630;
  uint64_t local_var_628;
  int32_t local_var_620;
  float fStack_618;
  int32_t local_var_614;
  int32_t local_var_610;
  int32_t local_var_60c;
  int32_t local_var_608;
  int32_t local_var_604;
  int32_t local_var_600;
  int32_t local_var_5fc;
  float fStack_5f8;
  float fStack_5f4;
  float fStack_5f0;
  int32_t local_var_5e8;
  int32_t local_var_5e4;
  int32_t local_var_5e0;
  int32_t local_var_5dc;
  int32_t local_var_5d8;
  int32_t local_var_5d4;
  int32_t local_var_5d0;
  void *plocal_var_5c8;
  int64_t *plStack_5c0;
  int64_t *plStack_5b8;
  int32_t local_var_5b0;
  int32_t local_var_5ac;
  int8_t local_var_5a8;
  int8_t *plocal_var_5a0;
  int32_t *plocal_var_598;
  int8_t stack_array_590 [16];
  float fStack_580;
  float fStack_57c;
  float fStack_578;
  int64_t alStack_570 [3];
  int32_t local_var_558;
  int64_t alStack_550 [3];
  int32_t local_var_538;
  uint64_t local_var_530;
  int8_t stack_array_528 [16];
  int8_t stack_array_518 [48];
  uint64_t stack_array_4e8 [128];
  uint64_t local_var_e8;
  local_var_530 = 0xfffffffffffffffe;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_718;
  iVar3 = (**(code **)(**(int64_t **)(param_1 + 0x28) + 0xb0))();
  iVar9 = 0x80;
  if (iVar3 < 0x80) {
    iVar9 = iVar3;
  }
  (**(code **)(**(int64_t **)(param_1 + 0x28) + 0xb8))
            (*(int64_t **)(param_1 + 0x28),stack_array_4e8,0x80,0);
  (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x90))(*(int64_t **)(param_1 + 0x28),&fStack_648);
  fVar16 = param_2[4] - *param_2;
  fVar17 = fVar16 * fVar16 + (param_2[5] - param_2[1]) * (param_2[5] - param_2[1]) +
           (param_2[6] - param_2[2]) * (param_2[6] - param_2[2]);
  auVar13 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
  fVar16 = auVar13._0_4_;
  fStack_650 = fVar16 * 0.5 * (3.0 - fVar17 * fVar16 * fVar16) * fVar17 * 0.5;
  fStack_654 = param_2[8];
  local_var_658 = 2;
  fStack_6a8 = 0.0;
  fStack_6a4 = 0.0;
  fStack_6a0 = 1.0;
  fStack_69c = 3.4028235e+38;
  function_645340(&local_var_698,param_2 + 4,param_2,&fStack_6a8);
  fVar18 = fStack_678 * 0.0;
  fVar19 = fStack_674 * 0.0;
  fVar20 = fStack_670 * 0.0;
  fVar21 = fStack_66c * 0.0;
  fVar16 = fStack_678 * 1.0;
  fVar17 = fStack_674 * 1.0;
  fVar14 = fStack_670 * 1.0;
  fVar15 = fStack_66c * 1.0;
  fVar22 = (float)local_var_698 * 0.0;
  fVar23 = local_var_698._4_4_ * 0.0;
  fVar24 = (float)local_var_690 * 0.0;
  fVar25 = local_var_690._4_4_ * 0.0;
  fStack_678 = fVar22 + fStack_688 * 1.0 + fVar18;
  fStack_674 = fVar23 + fStack_684 * 1.0 + fVar19;
  fStack_670 = fVar24 + fStack_680 * 1.0 + fVar20;
  fStack_66c = fVar25 + fStack_67c * 1.0 + fVar21;
  local_var_698 = CONCAT44(local_var_698._4_4_ * -1.0 + fStack_684 * 0.0 + fVar19,
                        (float)local_var_698 * -1.0 + fStack_688 * 0.0 + fVar18);
  local_var_690 = CONCAT44(local_var_690._4_4_ * -1.0 + fStack_67c * 0.0 + fVar21,
                        (float)local_var_690 * -1.0 + fStack_680 * 0.0 + fVar20);
  fStack_688 = fVar22 + fStack_688 * 0.0 + fVar16;
  fStack_684 = fVar23 + fStack_684 * 0.0 + fVar17;
  fStack_680 = fVar24 + fStack_680 * 0.0 + fVar14;
  fStack_67c = fVar25 + fStack_67c * 0.0 + fVar15;
  AdvancedProcessor_StateManager0(&local_var_6b8,&local_var_698);
  local_var_5e8 = local_var_6b8._4_4_;
  local_var_5e4 = local_var_6b0;
  local_var_5e0 = local_var_6ac;
  local_var_5dc = (int32_t)local_var_6b8;
  local_var_5d8 = local_var_668;
  local_var_5d4 = local_var_664;
  local_var_5d0 = local_var_660;
  lVar7 = (int64_t)iVar9;
  local_var_6b8 = lVar7;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      plVar1 = (int64_t *)stack_array_4e8[lVar10];
      (**(code **)(*plVar1 + 0x98))(plVar1,stack_array_590);
      alStack_550[0] = 0;
      alStack_550[1] = 0;
      alStack_550[2] = 0;
      local_var_538 = 3;
      alStack_570[0] = 0;
      alStack_570[1] = 0;
      alStack_570[2] = 0;
      local_var_558 = 3;
      plocal_var_5c8 = &processed_var_4824_ptr;
      plStack_5c0 = alStack_550;
      plStack_5b8 = alStack_570;
      local_var_5b0 = 0;
      local_var_5ac = 1;
      local_var_5a8 = 0;
      local_var_628 = 0;
      local_var_620 = 0;
      (**(code **)(*plVar1 + 0x48))(plVar1,stack_array_518);
      plocal_var_598 = &local_var_658;
      plocal_var_5a0 = stack_array_518;
      puVar4 = (int32_t *)SystemCore_Initializer(&fStack_648,stack_array_528,stack_array_590);
      fVar18 = fStack_580 * 2.0;
      fVar14 = fStack_57c * 2.0;
      fVar16 = fStack_578 * 2.0;
      fVar15 = fStack_63c * fStack_63c - 0.5;
      fVar17 = fStack_644 * fVar14 + fStack_648 * fVar18 + fStack_640 * fVar16;
      fStack_5f0 = fStack_630 +
                   (fStack_648 * fVar14 - fStack_644 * fVar18) * fStack_63c + fVar15 * fVar16 +
                   fStack_640 * fVar17;
      fStack_5f4 = fStack_634 +
                   (fStack_640 * fVar18 - fStack_648 * fVar16) * fStack_63c + fVar15 * fVar14 +
                   fStack_644 * fVar17;
      fStack_5f8 = fStack_638 +
                   (fStack_644 * fVar16 - fStack_640 * fVar14) * fStack_63c + fVar15 * fVar18 +
                   fStack_648 * fVar17;
      local_var_608 = *puVar4;
      local_var_604 = puVar4[1];
      local_var_600 = puVar4[2];
      local_var_5fc = puVar4[3];
      lStack_6c8 = render_system_data_memory + 0x48;
      local_var_6d0 = 0x3f800000;
      local_var_6d8 = 0x3dcccccd;
      local_var_6e0 = 0x3dcccccd;
      pplocal_var_6e8 = &plocal_var_5c8;
      local_var_6f0 = 1;
      plocal_var_6f8 = &local_var_628;
      PxGenerateContacts(&plocal_var_598,&plocal_var_5a0,&local_var_5e8,&local_var_608);
      plVar6 = plStack_5b8;
      uVar12 = uVar8;
      if (plStack_5b8[1] - *plStack_5b8 >> 6 != 0) {
        do {
          lVar2 = *plVar6;
          if (*(float *)(uVar8 + 0xc + lVar2) <= 0.0) {
            lVar7 = local_var_6b8;
            if (0x7f < *(int *)(param_3 + 0x2000)) break;
            fStack_6a0 = *(float *)(uVar8 + 0x18 + lVar2);
            fStack_6a4 = *(float *)(uVar8 + 0x14 + lVar2);
            fStack_6a8 = *(float *)(uVar8 + 0x10 + lVar2);
            fStack_69c = 3.4028235e+38;
            local_var_610 = *(int32_t *)(uVar8 + 8 + lVar2);
            local_var_614 = *(int32_t *)(uVar8 + 4 + lVar2);
            fStack_618 = *(float *)(uVar8 + lVar2);
            local_var_60c = 0x7f7fffff;
            fStack_680 = 0.0;
            local_var_698 = *(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x10) + 8);
            lVar7 = (**(code **)(*plVar1 + 0xd8))(plVar1,*(int32_t *)(uVar8 + 0x34 + lVar2));
            if (lVar7 == 0) {
              local_var_690 = 0;
            }
            else {
              local_var_690 = *(uint64_t *)(*(int64_t *)(lVar7 + 0x10) + 8);
            }
            fVar16 = *(float *)(uVar8 + 0xc + lVar2);
            fStack_66c = fStack_618;
            local_var_668 = local_var_614;
            local_var_664 = local_var_610;
            local_var_660 = local_var_60c;
            fStack_678 = fStack_6a4;
            fStack_674 = fStack_6a0;
            fStack_670 = fStack_69c;
            puVar5 = (uint64_t *)((int64_t)*(int *)(param_3 + 0x2000) * 0x40 + param_3);
            *puVar5 = local_var_698;
            puVar5[1] = local_var_690;
            fStack_688 = -fVar16;
            fStack_684 = 0.0;
            fStack_67c = fStack_6a8;
            *(float *)(puVar5 + 2) = -fVar16;
            *(int32_t *)((int64_t)puVar5 + 0x14) = 0;
            *(float *)(puVar5 + 3) = fStack_680;
            *(float *)((int64_t)puVar5 + 0x1c) = fStack_6a8;
            puVar5[4] = CONCAT44(fStack_6a0,fStack_6a4);
            puVar5[5] = CONCAT44(fStack_618,fStack_69c);
            puVar5[6] = CONCAT44(local_var_610,local_var_614);
            puVar5[7] = CONCAT44(local_var_65c,local_var_60c);
            *(int *)(param_3 + 0x2000) = *(int *)(param_3 + 0x2000) + 1;
            plVar6 = plStack_5b8;
          }
          uVar11 = (int)uVar12 + 1;
          uVar8 = uVar8 + 0x40;
          lVar7 = local_var_6b8;
          uVar12 = (uint64_t)uVar11;
        } while ((uint64_t)(int64_t)(int)uVar11 < (uint64_t)(plVar6[1] - *plVar6 >> 6));
      }
      plocal_var_5c8 = &processed_var_4848_ptr;
      if (alStack_570[0] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      if (alStack_550[0] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar7);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_e8 ^ (uint64_t)stack_array_718);
}
uint64_t * function_4721a0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_4320_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_4721d0(uint64_t *param_1,char param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  puVar2 = (uint64_t *)&system_data_2480;
  if (param_2 != '\0') {
    puVar2 = (uint64_t *)&system_data_2490;
  }
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = render_system_memory;
  if (param_2 != '\0') {
    lVar1 = render_system_memory;
  }
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = *puVar2;
  lVar1 = render_system_memory;
  if (param_2 != '\0') {
    lVar1 = render_system_memory;
  }
  param_1[1] = lVar1;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_472240(uint64_t *param_1,uint64_t *param_2)
void function_472240(uint64_t *param_1,uint64_t *param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int8_t stack_array_78 [32];
  int32_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t *plocal_var_38;
  uint64_t *plocal_var_30;
  uint64_t *plocal_var_28;
  uint64_t *plocal_var_20;
  uint64_t local_var_18;
  local_var_40 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  local_var_58 = 0;
  plocal_var_38 = param_1;
  plocal_var_20 = param_2;
  plocal_var_30 = (uint64_t *)SystemRenderer(0x38);
  *(int32_t *)(plocal_var_30 + 1) = 1;
  *(int32_t *)((int64_t)plocal_var_30 + 0xc) = 1;
  *plocal_var_30 = &memory_allocator_3984_ptr;
  plocal_var_28 = plocal_var_30 + 2;
  *plocal_var_28 = &processed_var_4320_ptr;
  *plocal_var_28 = &processed_var_4272_ptr;
  plocal_var_30[5] = 0;
  plocal_var_30[6] = 0;
  uVar4 = param_2[1];
  plocal_var_30[3] = *param_2;
  plocal_var_30[4] = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x14);
  uVar2 = *(int32_t *)(param_2 + 3);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x1c);
  *(int32_t *)(plocal_var_30 + 5) = *(int32_t *)(param_2 + 2);
  *(int32_t *)((int64_t)plocal_var_30 + 0x2c) = uVar1;
  *(int32_t *)(plocal_var_30 + 6) = uVar2;
  *(int32_t *)((int64_t)plocal_var_30 + 0x34) = uVar3;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  *param_1 = plocal_var_28;
  param_1[1] = plocal_var_30;
  local_var_50 = 0;
  local_var_48 = 0;
  local_var_58 = 0;
  SystemResourceAllocator(param_2);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_78);
}
uint64_t function_472360(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int8_t stack_array_30 [16];
  uint64_t local_var_20;
  uint64_t local_var_18;
  local_var_20 = 0;
  local_var_18 = 0xf;
  stack_array_30[0] = 0;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  MathCoreCalculator0(stack_array_30);
  function_472240(param_1,stack_array_30);
  return param_1;
}
uint64_t * function_4723d0(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  puVar2 = (uint64_t *)SystemRenderer(0x30);
  *(int32_t *)(puVar2 + 1) = 1;
  *(int32_t *)((int64_t)puVar2 + 0xc) = 1;
  *puVar2 = &processed_var_4040_ptr;
  puVar1 = puVar2 + 2;
  *puVar1 = &processed_var_4320_ptr;
  *puVar1 = &processed_var_4080_ptr;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[3] = *param_2;
  puVar2[4] = param_2[1];
  puVar2[5] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_1 = puVar1;
  param_1[1] = puVar2;
  function_477750(param_2);
  return param_1;
}
// 函数: void function_4724d0(void)
void function_4724d0(void)
{
  function_477750();
  return;
}
uint64_t *
function_4724f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  puVar2 = (uint64_t *)SystemRenderer(0x58);
  *(int32_t *)(puVar2 + 1) = 1;
  *(int32_t *)((int64_t)puVar2 + 0xc) = 1;
  *puVar2 = &processed_var_4480_ptr;
  puVar1 = puVar2 + 2;
  *puVar1 = &processed_var_4320_ptr;
  *puVar1 = &processed_var_4296_ptr;
  function_3f4bd0(puVar2 + 3,param_2,param_3,param_4,uVar3,uVar4,puVar2 + 3);
  *param_1 = puVar1;
  param_1[1] = puVar2;
  function_3e8470(param_2);
  return param_1;
}
int64_t * function_4725e0(int64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  param_1 = (int64_t *)*param_1;
  if (param_1 != (int64_t *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))(param_1,0x180d48ef8);
    lVar2 = 0x180d49d90;
    if (lVar1 != 0) {
      lVar2 = lVar1;
    }
    *param_2 = lVar2;
    return param_2;
  }
  *param_2 = 0x180d49d90;
  return param_2;
}
uint64_t function_472640(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  param_1 = (int64_t *)*param_1;
  lVar2 = 0x180d49d50;
  if (param_1 != (int64_t *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))(param_1,0x180d48ef0,param_3,param_4,0,0xfffffffffffffffe);
    if (lVar1 != 0) {
      lVar2 = lVar1;
    }
  }
  function_472900(lVar2,param_2,param_3);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4726c0(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
void function_4726c0(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  code *pcVar7;
  uint64_t uVar8;
  int8_t stack_array_b8 [32];
  int32_t local_var_98;
  uint64_t *plocal_var_90;
  uint64_t local_var_88;
  uint64_t *plocal_var_80;
  int8_t stack_array_78 [16];
  uint64_t *plocal_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  int64_t *plStack_38;
  uint64_t local_var_30;
  local_var_88 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  local_var_60 = *param_2;
  local_var_58 = param_2[1];
  local_var_50 = param_2[2];
  local_var_48 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(int8_t *)param_2 = 0;
  plocal_var_90 = &local_var_40;
  local_var_40 = *param_3;
  plStack_38 = (int64_t *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_var_98 = 1;
  lVar4 = **(int64_t **)(param_1 + 8);
  puVar5 = *(uint64_t **)(lVar4 + 8);
  plocal_var_80 = param_3;
  plocal_var_68 = param_2;
  uVar8 = function_478200(0,lVar4,puVar5,&local_var_60);
  if (*(int64_t *)(param_1 + 0x10) == 0x3fffffffffffffe) {
    __Xlength_error_std__YAXPEBD_Z(&rendering_buffer_2104_ptr);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + 1;
  *(uint64_t *)(lVar4 + 8) = uVar8;
  *puVar5 = uVar8;
  function_3f4f30(param_1,stack_array_78,**(int64_t **)(param_1 + 8) + 0x10);
  plVar6 = plStack_38;
  local_var_98 = 0;
  plocal_var_90 = &local_var_40;
  if (plStack_38 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((int64_t)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  SystemResourceAllocator(&local_var_60);
  SystemResourceAllocator(param_2);
  plVar6 = (int64_t *)param_3[1];
  if (plVar6 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((int64_t)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_b8);
}
// 函数: void function_472880(int64_t param_1)
void function_472880(int64_t param_1)
{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  plVar4 = *(int64_t **)(param_1 + 0x28);
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((int64_t)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  SystemResourceAllocator(param_1);
  return;
}
uint64_t * function_472900(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
{
  int *piVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  int32_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  uint64_t local_var_58;
  int64_t *plStack_50;
  uint64_t local_var_48;
  int64_t *plStack_40;
  uVar18 = 0xfffffffffffffffe;
  uVar16 = 0;
  uVar2 = param_3[2];
  uVar15 = param_3[3];
  puVar8 = param_3;
  if (0xf < uVar15) {
    puVar8 = (uint64_t *)*param_3;
  }
  uVar12 = 0xcbf29ce484222325;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar12 = (uVar12 ^ *(byte *)(uVar10 + (int64_t)puVar8)) * 0x100000001b3;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
  lVar6 = (*(uint64_t *)(param_1 + 0x30) & uVar12) * 0x10;
  lVar3 = *(int64_t *)(param_1 + 0x18);
  puVar8 = *(uint64_t **)(lVar6 + lVar3);
  puVar4 = *(uint64_t **)(param_1 + 8);
  puVar13 = puVar8;
  do {
    puVar7 = puVar4;
    if (puVar8 != puVar4) {
      puVar7 = (uint64_t *)**(uint64_t **)(lVar6 + 8 + lVar3);
    }
    if (puVar13 == puVar7) goto LAB_180472a44;
    plVar14 = puVar13 + 2;
    puVar7 = param_3;
    if (0xf < uVar15) {
      puVar7 = (uint64_t *)*param_3;
    }
    uVar10 = puVar13[4];
    plVar11 = plVar14;
    if (0xf < (uint64_t)puVar13[5]) {
      plVar11 = (int64_t *)*plVar14;
    }
    if (uVar10 == uVar2) {
      iVar5 = memcmp(plVar11,puVar7,uVar10,uVar15,uVar16,uVar18);
      if (iVar5 == 0) {
        if (0xf < (uint64_t)puVar13[5]) {
          plVar14 = (int64_t *)*plVar14;
        }
        if (0xf < (uint64_t)param_3[3]) {
          param_3 = (uint64_t *)*param_3;
        }
        if ((uVar2 != uVar10) || (iVar5 = memcmp(param_3,plVar14), iVar5 != 0)) {
LAB_180472a44:
          puVar13 = puVar4;
        }
        if (puVar13 == puVar4) {
          local_var_48 = 0;
          plStack_40 = (int64_t *)0x0;
          puVar8 = &local_var_48;
          uVar9 = 1;
          uVar17 = 1;
        }
        else {
          plStack_50 = (int64_t *)puVar13[7];
          if (plStack_50 != (int64_t *)0x0) {
            LOCK();
            *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
            UNLOCK();
            plStack_50 = (int64_t *)puVar13[7];
          }
          local_var_58 = puVar13[6];
          puVar8 = &local_var_58;
          uVar9 = 2;
          uVar17 = 2;
        }
        plVar14 = plStack_50;
        *param_2 = 0;
        param_2[1] = 0;
        lVar3 = puVar8[1];
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          uVar9 = uVar17;
        }
        *param_2 = *puVar8;
        param_2[1] = lVar3;
        if (((uVar9 & 2) != 0) && (uVar9 = uVar9 & 0xfffffffd, plStack_50 != (int64_t *)0x0)) {
          LOCK();
          plVar11 = plStack_50 + 1;
          lVar3 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((int64_t)plVar14 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_50 + 8))();
            }
          }
        }
        plVar14 = plStack_40;
        if (((uVar9 & 1) != 0) && (plStack_40 != (int64_t *)0x0)) {
          LOCK();
          plVar11 = plStack_40 + 1;
          lVar3 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar1 = (int *)((int64_t)plVar14 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_40 + 8))();
            }
          }
        }
        return param_2;
      }
      uVar15 = param_3[3];
    }
    puVar13 = (uint64_t *)*puVar13;
  } while( true );
}
uint64_t * function_472b70(uint64_t *param_1,uint64_t *param_2)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  function_477750(param_2);
  return param_1;
}
uint64_t * function_472bd0(int64_t *param_1,uint64_t *param_2,uint64_t param_3)
{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t *plVar6;
  bool bVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t local_var_28;
  int64_t *plStack_20;
  uint64_t local_var_18;
  int64_t *plStack_10;
  uVar9 = 0;
  lVar4 = *param_1;
  if (param_3 < (uint64_t)(param_1[1] - lVar4 >> 4)) {
    plStack_20 = *(int64_t **)(lVar4 + 8 + param_3 * 0x10);
    if (plStack_20 != (int64_t *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
      plStack_20 = *(int64_t **)(lVar4 + 8 + param_3 * 0x10);
    }
    uVar9 = *(uint64_t *)(lVar4 + param_3 * 0x10);
    puVar8 = &local_var_28;
    bVar7 = true;
    bVar5 = false;
    local_var_28 = uVar9;
  }
  else {
    local_var_18 = 0;
    plStack_10 = (int64_t *)0x0;
    puVar8 = &local_var_18;
    bVar7 = false;
    bVar5 = true;
  }
  *param_2 = uVar9;
  param_2[1] = puVar8[1];
  *puVar8 = 0;
  puVar8[1] = 0;
  plVar6 = plStack_10;
  if ((bVar5) && (plStack_10 != (int64_t *)0x0)) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((int64_t)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_10 + 8))();
      }
    }
  }
  plVar6 = plStack_20;
  if ((bVar7) && (plStack_20 != (int64_t *)0x0)) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((int64_t)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))();
      }
    }
  }
  return param_2;
}
// 函数: void function_472d20(int64_t param_1)
void function_472d20(int64_t param_1)
{
  int iVar1;
  iVar1 = isspace((int)**(char **)(param_1 + 8));
  while (iVar1 != 0) {
    *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 1;
    iVar1 = isspace((int)**(char **)(param_1 + 8));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address