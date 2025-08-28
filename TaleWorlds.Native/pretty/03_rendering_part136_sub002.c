#include "TaleWorlds.Native.Split.h"

// 03_rendering_part136_sub002.c - 1 个函数

// 函数: void FUN_18034d990(longlong param_1)
void FUN_18034d990(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  void *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar11;
  longlong *plStackX_8;
  
  uVar6 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x260);
  plVar4 = (longlong *)(lVar3 + 0x1a8);
  if (lVar3 == 0) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0xf0);
  }
  lVar3 = *plVar4;
  uVar7 = uVar6;
  uVar8 = uVar6;
  uVar10 = uVar6;
  if (plVar4[1] - lVar3 >> 3 != 0) {
    do {
      iVar2 = (**(code **)(**(longlong **)(uVar7 + lVar3) + 0x98))();
      if (iVar2 == 0) {
        uVar8 = *(ulonglong *)(uVar7 + *plVar4);
        puVar5 = &DAT_18098bc73;
        if (*(void **)(uVar8 + 0x1f8) != (void *)0x0) {
          puVar5 = *(void **)(uVar8 + 0x1f8);
        }
        lVar3 = strstr(puVar5,&UNK_180a1db58);
        uVar11 = extraout_XMM0_Qa;
        if (lVar3 == 0) {
          puVar5 = &DAT_18098bc73;
          if (*(void **)(uVar8 + 0x1f8) != (void *)0x0) {
            puVar5 = *(void **)(uVar8 + 0x1f8);
          }
          lVar3 = strstr(puVar5,&UNK_180a1dba8);
          uVar11 = extraout_XMM0_Qa_00;
          if (lVar3 == 0) goto LAB_18034da6e;
        }
        if (uVar8 != 0) {
          plVar4 = (longlong *)FUN_1800b3590(uVar11,&plStackX_8,param_1 + 0xb0,1);
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
      uVar10 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(plVar4[1] - lVar3 >> 3));
  }
  bVar1 = false;
LAB_18034da95:
  if ((uVar6 != 0) && (plStackX_8 != (longlong *)0x0)) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (bVar1) {
    FUN_1802084b0(*(uint64_t *)(param_1 + 0x120));
    FUN_180207f50(*(uint64_t *)(param_1 + 0x120),uVar8);
    FUN_180208390(*(uint64_t *)(param_1 + 0x120),param_1 + 0xb0,1);
    *(float *)(*(longlong *)(param_1 + 0x120) + 0x848) = (float)*(double *)(param_1 + 0x100);
    if (*(char *)(param_1 + 0x110) != '\0') {
      FUN_180208610(*(uint64_t *)(param_1 + 0x120),0x3a83126f);
    }
  }
  return;
}






