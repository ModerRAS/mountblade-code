#include "TaleWorlds.Native.Split.h"
// 02_core_engine_part165_sub002.c - 1 个函数
// 函数: void function_14f0e5(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_14f0e5(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R10;
  uint64_t local_buffer_50;
  lVar2 = SUB168(SEXT816(in_R10) * SEXT816(*(int64_t *)(unaff_RDI + 8) - param_3),8);
  uVar3 = (lVar2 >> 6) - (lVar2 >> 0x3f);
  if (uVar3 < unaff_RBP) {
    function_14fe60();
    function_14fbc0(&local_buffer_00000050,uVar3 * 0x88 + unaff_RSI);
    *(uint64_t *)(unaff_RDI + 8) = local_buffer_50;
  }
  else {
    lVar1 = function_14fe60();
    lVar2 = *(int64_t *)(unaff_RDI + 8);
    for (lVar4 = lVar1; lVar4 != lVar2; lVar4 = lVar4 + 0x88) {
      function_14c7d0(lVar4);
    }
    *(int64_t *)(unaff_RDI + 8) = lVar1;
  }
  return;
}