#include "TaleWorlds.Native.Split.h"
// 99_part_04_part042.c - 3 个函数
// 函数: void function_2aeb00(char *param_1,float param_2,uint64_t param_3,uint64_t param_4,
void function_2aeb00(char *param_1,float param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5)
{
  int iVar1;
  uint64_t in_RDX;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  float fVar8;
  int8_t stack_array_b8 [64];
  int8_t stack_array_78 [96];
  if (*param_1 != '\0') {
    fVar8 = param_2 + *(float *)(param_1 + 4);
    *(float *)(param_1 + 4) = fVar8;
    if (*(float *)(param_1 + 0x14) <= fVar8 && fVar8 != *(float *)(param_1 + 0x14)) {
      if (*(int *)(param_1 + 0x88) != *(int *)(*(int64_t *)(param_1 + 0x18) + 0x30)) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x50) + 0x260) + 0xb38) = 0;
        *(int32_t *)(param_1 + 0x88) = *(int32_t *)(*(int64_t *)(param_1 + 0x18) + 0x30);
      }
      function_2aecf0(param_1,in_RDX,param_3,param_4,param_5);
    }
  }
  iVar1 = (int)((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30)) / 0x88);
  lVar7 = (int64_t)iVar1;
  if (0 < iVar1) {
    lVar6 = 0;
    do {
      plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0x30) + lVar6);
      if (*(int *)(*(int64_t *)(*plVar3 + 0x48) + 0x70) == 0) {
        iVar1 = (int)((*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x60) -
                      *(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x58)) / 0x70);
        lVar4 = (int64_t)iVar1;
        if (0 < iVar1) {
          lVar2 = 0;
          do {
            lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0x58) + lVar2;
            function_2ac500(lVar5,stack_array_78,stack_array_b8);
            if (((uint64_t)(int64_t)*(int *)(lVar5 + 0x58) <
                 (uint64_t)(plVar3[10] - plVar3[9] >> 2)) &&
               (iVar1 = *(int *)(plVar3[9] + (int64_t)*(int *)(lVar5 + 0x58) * 4), iVar1 != -1)) {
              function_2aeb00((int64_t)iVar1 * 0x90 + plVar3[5],param_2,stack_array_78,stack_array_b8,param_5
                           );
            }
            lVar2 = lVar2 + 0x70;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      else {
        function_2b6970(plVar3,param_2,param_5);
      }
      lVar6 = lVar6 + 0x88;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}
// 函数: void function_2aeba6(void)
void function_2aeba6(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t unaff_R15;
  lVar7 = 0;
  do {
    plVar4 = (int64_t *)(*(int64_t *)(unaff_RBP + 0x30) + lVar7);
    if (*(int *)(*(int64_t *)(*plVar4 + 0x48) + 0x70) == 0) {
      iVar1 = (int)((*(int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x60) -
                    *(int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x58)) / 0x70);
      lVar5 = (int64_t)iVar1;
      if (0 < iVar1) {
        lVar3 = 0;
        do {
          lVar6 = *(int64_t *)(*(int64_t *)(unaff_RBP + 0x20) + 0x58) + lVar3;
          function_2ac500(lVar6,&local_buffer_00000070,&local_buffer_00000030);
          lVar2 = plVar4[9];
          if (((uint64_t)(int64_t)*(int *)(lVar6 + 0x58) < (uint64_t)(plVar4[10] - lVar2 >> 2))
             && (iVar1 = *(int *)(lVar2 + (int64_t)*(int *)(lVar6 + 0x58) * 4), iVar1 != -1)) {
            function_2aeb00((int64_t)iVar1 * 0x90 + plVar4[5],lVar2,&local_buffer_00000070,&local_buffer_00000030
                         );
          }
          lVar3 = lVar3 + 0x70;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    else {
      function_2b6970(plVar4);
    }
    lVar7 = lVar7 + 0x88;
    unaff_R15 = unaff_R15 + -1;
  } while (unaff_R15 != 0);
  return;
}
// 函数: void function_2aecd5(void)
void function_2aecd5(void)
{
  return;
}