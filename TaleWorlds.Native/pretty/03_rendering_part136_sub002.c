#include "TaleWorlds.Native.Split.h"

// 03_rendering_part136_sub002.c - 1 个函数

// 函数: void FUN_18034d990(int64_t param_1)
void FUN_18034d990(int64_t param_1)

{
  bool bVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar11;
  int64_t *plStackX_8;
  
  uVar6 = 0;
  lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
  plVar4 = (int64_t *)(lVar3 + 0x1a8);
  if (lVar3 == 0) {
    plVar4 = (int64_t *)(*(int64_t *)(param_1 + 0x18) + 0xf0);
  }
  lVar3 = *plVar4;
  uVar7 = uVar6;
  uVar8 = uVar6;
  uVar10 = uVar6;
  if (plVar4[1] - lVar3 >> 3 != 0) {
    do {
      iVar2 = (**(code **)(**(int64_t **)(uVar7 + lVar3) + 0x98))();
      if (iVar2 == 0) {
        uVar8 = *(uint64_t *)(uVar7 + *plVar4);
        puVar5 = &system_buffer_ptr;
        if (*(void **)(uVar8 + 0x1f8) != (void *)0x0) {
          puVar5 = *(void **)(uVar8 + 0x1f8);
        }
        lVar3 = strstr(puVar5,&unknown_var_8392_ptr);
        uVar11 = extraout_XMM0_Qa;
        if (lVar3 == 0) {
          puVar5 = &system_buffer_ptr;
          if (*(void **)(uVar8 + 0x1f8) != (void *)0x0) {
            puVar5 = *(void **)(uVar8 + 0x1f8);
          }
          lVar3 = strstr(puVar5,&unknown_var_8472_ptr);
          uVar11 = extraout_XMM0_Qa_00;
          if (lVar3 == 0) goto LAB_18034da6e;
        }
        if (uVar8 != 0) {
          plVar4 = (int64_t *)FUN_1800b3590(uVar11,&plStackX_8,param_1 + 0xb0,1);
          uVar6 = 1;
          if (*plVar4 != 0) {
            bVar1 = true;
            goto LAB_18034da95;
          }
        }
        break;
      }
LAB_18034da6e:
      uVar9 = (int)uVar10 + 1;
      lVar3 = *plVar4;
      uVar7 = uVar7 + 8;
      uVar8 = uVar6;
      uVar10 = (uint64_t)uVar9;
    } while ((uint64_t)(int64_t)(int)uVar9 < (uint64_t)(plVar4[1] - lVar3 >> 3));
  }
  bVar1 = false;
LAB_18034da95:
  if ((uVar6 != 0) && (plStackX_8 != (int64_t *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (bVar1) {
    FUN_1802084b0(*(uint64_t *)(param_1 + 0x120));
    FUN_180207f50(*(uint64_t *)(param_1 + 0x120),uVar8);
    FUN_180208390(*(uint64_t *)(param_1 + 0x120),param_1 + 0xb0,1);
    *(float *)(*(int64_t *)(param_1 + 0x120) + 0x848) = (float)*(double *)(param_1 + 0x100);
    if (*(char *)(param_1 + 0x110) != '\0') {
      FUN_180208610(*(uint64_t *)(param_1 + 0x120),0x3a83126f);
    }
  }
  return;
}






