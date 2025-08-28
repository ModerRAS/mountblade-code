#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part514_sub002.c - 1 个函数
// 函数: void function_543290(int64_t param_1,byte *param_2,int64_t param_3)
void function_543290(int64_t param_1,byte *param_2,int64_t param_3)
{
  int64_t ***ppplVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *****ppppplVar7;
  int64_t lVar8;
  int64_t ****pppplVar9;
  uint64_t uVar10;
  float fVar11;
  int64_t ****apppplStackX_10 [2];
  int64_t ****pppplStackX_20;
  uint64_t local_var_70;
  float fStack_68;
  float fStack_64;
  uint64_t local_var_48;
  int64_t lStack_40;
  uVar10 = 0;
  if ((*param_2 & 0x20) != 0) {
    uVar5 = function_4bc2d0(0x180c95de0,*(int32_t *)(param_2 + 0x24),
                          *(int32_t *)(param_2 + 0x20),*(int32_t *)(param_3 + 0x53c),
                          *(int32_t *)(param_2 + 8));
    uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    ppppplVar7 = (int64_t *****)RenderingSystem_ShaderManager(uVar6);
    if (ppppplVar7 != (int64_t *****)0x0) {
      (*(code *)(*ppppplVar7)[5])(ppppplVar7);
    }
    RenderingSystem_275A60(uVar5,ppppplVar7,1);
    fVar11 = *(float *)(param_3 + 0x540);
    if (0.99 <= fVar11) {
      fVar11 = 0.99;
    }
    ppplVar1 = (*ppppplVar7)[0x21];
    uVar3 = function_4bbc50(0x180c95de0,param_3);
    fStack_64 = (float)(uVar3 >> 0x18) * 0.003921569;
    local_var_70 = (int64_t *****)
                CONCAT44((float)(uVar3 >> 8 & 0xff) * 0.003921569,
                         (float)(uVar3 >> 0x10 & 0xff) * 0.003921569);
    fStack_68 = (float)(uVar3 & 0xff) * 0.003921569;
    (*(code *)ppplVar1)(ppppplVar7,&local_var_70);
    fStack_64 = (float)(-(int)(fVar11 * fVar11 * 255.0) - 1U & 0xff) * 0.003921569;
    local_var_70 = (int64_t *****)0x0;
    fStack_68 = 0.0;
    pppplVar9 = ppppplVar7[7];
    if (pppplVar9 < ppppplVar7[8]) {
      do {
        ppplVar1 = *pppplVar9;
        ppplVar1[0x49] = (int64_t **)0x0;
        ppplVar1[0x4a] = (int64_t **)((uint64_t)(uint)fStack_64 << 0x20);
        pppplVar9 = pppplVar9 + 2;
      } while (pppplVar9 < ppppplVar7[8]);
    }
    uVar5 = uVar10;
    if (*(int64_t *)(param_1 + 0x8a8) != 0) {
      uVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
    }
    function_2fc0f0(uVar5,ppppplVar7);
    pppplStackX_20 = (int64_t ****)apppplStackX_10;
    apppplStackX_10[0] = (int64_t ****)ppppplVar7;
    (*(code *)(*ppppplVar7)[5])(ppppplVar7);
    function_544860(param_1,5,apppplStackX_10);
    if (((*(int *)(param_2 + 4) != 0) && (*(int64_t *)(param_1 + 0x70) == 0)) &&
       (lVar8 = function_4bc420(0x180c95de0,*(int32_t *)(param_2 + 0x24),
                              *(int32_t *)(param_2 + 0x20),*(int *)(param_2 + 4),
                              *(int32_t *)(param_3 + 0x53c)), lVar8 != 0)) {
      function_2759e0(lVar8,&pppplStackX_20);
      local_var_70 = apppplStackX_10;
      apppplStackX_10[0] = pppplStackX_20;
      if ((int64_t *****)pppplStackX_20 != (int64_t *****)0x0) {
        (*(code *)(*pppplStackX_20)[5])();
      }
      function_544860(param_1,0xb,apppplStackX_10);
      if (*(int64_t *)(param_1 + 0x8a8) != 0) {
        uVar10 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
      }
      function_2fc0f0(uVar10,*(uint64_t *)(param_1 + 0x70));
      if ((int64_t *****)pppplStackX_20 != (int64_t *****)0x0) {
        (*(code *)(*pppplStackX_20)[7])();
      }
    }
    (*(code *)(*ppppplVar7)[7])(ppppplVar7);
  }
  local_var_48 = 0xfffffffffffffffe;
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar8 = lVar2 + 0x2be8;
  local_var_70 = (int64_t *****)0x180544afd;
  lStack_40 = lVar8;
  iVar4 = _Mtx_lock(lVar8);
  if (iVar4 != 0) {
    local_var_70 = (int64_t *****)0x180544b09;
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  local_var_70 = (int64_t *****)0x180544b33;
  function_4dd4d0(lVar2 + 0x2b88,&local_buffer_ffffffffffffffe0,&local_buffer_ffffffffffffffd0);
  local_var_70 = (int64_t *****)0x180544b3d;
  iVar4 = _Mtx_unlock(lVar8);
  if (iVar4 != 0) {
    local_var_70 = (int64_t *****)0x180544b49;
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address