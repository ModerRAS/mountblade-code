#include "TaleWorlds.Native.Split.h"
// 03_rendering_part542_sub002.c - 1 个函数
// 函数: void function_5655b0(uint64_t *param_1,int param_2,int param_3)
void function_5655b0(uint64_t *param_1,int param_2,int param_3)
{
  char cVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint64_t *puVar6;
  int32_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  lVar12 = (int64_t)param_2;
  if (lVar12 < param_3) {
    local_var_70 = 0;
    local_var_6c = 0x7f7fffff;
    lVar11 = lVar12 * 0xc;
    do {
      lVar8 = 0;
      fVar14 = 3.4028235e+38;
      cVar1 = *(char *)param_1[3];
      local_var_78 = *(int32_t *)(*(int64_t *)param_1[1] + lVar12 * 8);
      uVar2 = *(uint *)param_1[2];
      local_var_74 = *(int32_t *)(*(int64_t *)param_1[1] + 4 + lVar12 * 8);
      lVar3 = *(int64_t *)*param_1;
      lVar9 = lVar8;
      if (*(int64_t *)(lVar3 + 0x2ee8) - *(int64_t *)(lVar3 + 12000) >> 3 != 0) {
        puVar6 = (uint64_t *)SystemFunction_000180388c90(lVar3 + 0x28c8,&local_var_78);
        plVar4 = (int64_t *)puVar6[1];
        for (plVar10 = (int64_t *)*puVar6; lVar9 = lVar8, plVar10 != plVar4; plVar10 = plVar10 + 1)
        {
          lVar9 = *plVar10;
          if (((((*(uint *)(lVar9 + 0x134) & uVar2 & 0xfffffffe) == (uVar2 & 0xfffffffe)) ||
               ((*(uint *)(lVar9 + 0x134) & 1) != 0)) && ((*(byte *)(lVar9 + 0x139) & 1) != 0)) &&
             (((*(byte *)(lVar9 + 0x139) & 2) == 0 &&
              (cVar5 = SystemCore_PerformanceMonitor(lVar9,&local_var_78), cVar5 != '\0')))) {
            if (cVar1 != '\0') break;
            fVar13 = (float)SystemFunction_00018038d2f0(lVar9,&local_var_78);
            fVar13 = ABS(fVar13);
            if ((fVar13 < 100.0) && (fVar13 < fVar14)) {
              lVar8 = lVar9;
              fVar14 = fVar13;
            }
          }
        }
      }
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)(lVar9 + 300);
      }
      *(int32_t *)(lVar11 + *(int64_t *)param_1[4]) = uVar7;
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)(lVar9 + 0x130);
      }
      *(int32_t *)(*(int64_t *)param_1[4] + 4 + lVar11) = uVar7;
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int32_t *)(lVar9 + 0x128);
      }
      lVar12 = lVar12 + 1;
      *(int32_t *)(*(int64_t *)param_1[4] + 8 + lVar11) = uVar7;
      lVar11 = lVar11 + 0xc;
    } while (lVar12 < param_3);
  }
  return;
}