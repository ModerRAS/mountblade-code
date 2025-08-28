#include "TaleWorlds.Native.Split.h"
// 99_part_10_part018.c - 1 个函数
// 函数: void function_6ad980(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void function_6ad980(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  uint64_t stack_special_x_18;
  int32_t astack_special_x_20 [2];
  stack_special_x_18 = param_3;
  astack_special_x_20[0] = param_4;
  function_6ad9b0(param_1,param_2,&stack_special_x_18,astack_special_x_20,&local_buffer_00000028);
  return;
}
int function_6ad9b0(int64_t param_1,uint param_2,int64_t *param_3,uint *param_4,uint *param_5)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  if (((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x80))) &&
     (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + (uint64_t)param_2 * 8), lVar1 != 0)) {
    uVar11 = 0;
    iVar7 = 0;
    if (-1 < *(int *)(lVar1 + 0x1c)) {
      iVar7 = function_6ad9b0();
    }
    uVar10 = *(uint *)(lVar1 + 0x78);
    uVar8 = *param_5;
    uVar3 = uVar8;
    if (uVar10 < uVar8) {
      uVar3 = uVar10;
    }
    uVar4 = uVar10 - uVar3;
    if (*param_4 < uVar10 - uVar3) {
      uVar4 = *param_4;
    }
    uVar12 = uVar11;
    if (uVar4 != 0) {
      do {
        iVar5 = (int)uVar11;
        uVar10 = iVar5 + 1;
        uVar11 = (uint64_t)uVar10;
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x70) + (uint64_t)(iVar5 + uVar3) * 8);
        lVar9 = *param_3 + uVar12;
        uVar6 = *(uint64_t *)(lVar2 + 0x10);
        *(uint64_t *)(lVar9 + 8) = *(uint64_t *)(lVar2 + 8);
        *(uint64_t *)(lVar9 + 0x10) = uVar6;
        *(int32_t *)(lVar9 + 0x18) = *(int32_t *)(lVar2 + 0x18);
        *(uint64_t *)(lVar9 + 0x20) = *(uint64_t *)(lVar2 + 0x20);
        *(uint64_t *)(lVar9 + 0x28) = *(uint64_t *)(lVar2 + 0x28);
        *(int32_t *)(lVar9 + 0x30) = *(int32_t *)(lVar2 + 0x30);
        uVar6 = *(uint64_t *)(lVar2 + 0x40);
        *(uint64_t *)(lVar9 + 0x38) = *(uint64_t *)(lVar2 + 0x38);
        *(uint64_t *)(lVar9 + 0x40) = uVar6;
        *(int32_t *)(lVar9 + 0x48) = *(int32_t *)(lVar2 + 0x48);
        *(int32_t *)(lVar9 + 0x4c) = *(int32_t *)(lVar2 + 0x4c);
        *(int32_t *)(lVar9 + 0x50) = *(int32_t *)(lVar2 + 0x50);
        *(int32_t *)(lVar9 + 0x54) = *(int32_t *)(lVar2 + 0x54);
        uVar12 = uVar12 + 0x58;
      } while (uVar10 < uVar4);
      uVar8 = *param_5;
    }
    *param_5 = uVar8 - uVar3;
    *param_4 = *param_4 - uVar4;
    *param_3 = *param_3 + (uint64_t)uVar4 * 0x58;
    return uVar4 + iVar7;
  }
  return 0;
}
int function_6ad9f0(uint64_t param_1,int param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int iVar6;
  uint uVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar11;
  uint *unaff_R15;
  uint *local_buffer_60;
  uVar10 = 0;
  iVar6 = 0;
  if (-1 < param_2) {
    iVar6 = function_6ad9b0();
  }
  uVar9 = *(uint *)(unaff_RDI + 0x78);
  uVar7 = *local_buffer_60;
  uVar2 = uVar7;
  if (uVar9 < uVar7) {
    uVar2 = uVar9;
  }
  uVar3 = uVar9 - uVar2;
  if (*unaff_R15 < uVar9 - uVar2) {
    uVar3 = *unaff_R15;
  }
  uVar11 = uVar10;
  if (uVar3 != 0) {
    do {
      iVar4 = (int)uVar10;
      uVar9 = iVar4 + 1;
      uVar10 = (uint64_t)uVar9;
      lVar1 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x70) + (uint64_t)(iVar4 + uVar2) * 8);
      lVar8 = *unaff_RSI + uVar11;
      uVar5 = *(uint64_t *)(lVar1 + 0x10);
      *(uint64_t *)(lVar8 + 8) = *(uint64_t *)(lVar1 + 8);
      *(uint64_t *)(lVar8 + 0x10) = uVar5;
      *(int32_t *)(lVar8 + 0x18) = *(int32_t *)(lVar1 + 0x18);
      *(uint64_t *)(lVar8 + 0x20) = *(uint64_t *)(lVar1 + 0x20);
      *(uint64_t *)(lVar8 + 0x28) = *(uint64_t *)(lVar1 + 0x28);
      *(int32_t *)(lVar8 + 0x30) = *(int32_t *)(lVar1 + 0x30);
      uVar5 = *(uint64_t *)(lVar1 + 0x40);
      *(uint64_t *)(lVar8 + 0x38) = *(uint64_t *)(lVar1 + 0x38);
      *(uint64_t *)(lVar8 + 0x40) = uVar5;
      *(int32_t *)(lVar8 + 0x48) = *(int32_t *)(lVar1 + 0x48);
      *(int32_t *)(lVar8 + 0x4c) = *(int32_t *)(lVar1 + 0x4c);
      *(int32_t *)(lVar8 + 0x50) = *(int32_t *)(lVar1 + 0x50);
      *(int32_t *)(lVar8 + 0x54) = *(int32_t *)(lVar1 + 0x54);
      uVar11 = uVar11 + 0x58;
    } while (uVar9 < uVar3);
    uVar7 = *local_buffer_60;
  }
  *local_buffer_60 = uVar7 - uVar2;
  *unaff_R15 = *unaff_R15 - uVar3;
  *unaff_RSI = *unaff_RSI + (uint64_t)uVar3 * 0x58;
  return uVar3 + iVar6;
}
uint64_t function_6adad6(void)
{
  return 0;
}
uint function_6adc80(int64_t *param_1,int64_t param_2,uint param_3,uint param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  uint64_t *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uVar3 = (**(code **)(*param_1 + 0xb0))();
  if (param_4 < uVar3) {
    uVar3 = param_4;
  }
  iVar4 = (**(code **)(*param_1 + 0xb0))(param_1);
  uVar7 = iVar4 - uVar3;
  if (param_3 < iVar4 - uVar3) {
    uVar7 = param_3;
  }
  uVar8 = 0;
  if (uVar7 != 0) {
    puVar5 = (uint64_t *)(param_2 + 0x58);
    do {
      uVar6 = uVar8 + uVar3;
      uVar8 = uVar8 + 1;
      lVar1 = *(int64_t *)(param_1[0x1b] + (uint64_t)uVar6 * 8);
      uVar2 = *(uint64_t *)(lVar1 + 0x10);
      puVar5[-10] = *(uint64_t *)(lVar1 + 8);
      puVar5[-9] = uVar2;
      *(int32_t *)(puVar5 + -8) = *(int32_t *)(lVar1 + 0x18);
      uVar2 = *(uint64_t *)(lVar1 + 0x28);
      puVar5[-7] = *(uint64_t *)(lVar1 + 0x20);
      puVar5[-6] = uVar2;
      *(int32_t *)(puVar5 + -5) = *(int32_t *)(lVar1 + 0x30);
      puVar5[-4] = *(uint64_t *)(lVar1 + 0x38);
      puVar5[-3] = *(uint64_t *)(lVar1 + 0x40);
      *(int32_t *)(puVar5 + -2) = *(int32_t *)(lVar1 + 0x48);
      puVar5[-1] = *(uint64_t *)(lVar1 + 0x50);
      *puVar5 = *(uint64_t *)(lVar1 + 0x58);
      puVar5 = puVar5 + 0xc;
    } while (uVar8 < uVar7);
  }
  return uVar7;
}
uint function_6add80(int64_t *param_1,int64_t param_2,uint param_3,uint param_4)
{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  uVar1 = (**(code **)(*param_1 + 8))();
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar2 - param_4 < param_3) {
    param_3 = iVar2 - param_4;
  }
  uVar7 = 0;
  uVar3 = 0xffffffff;
  uVar4 = uVar7;
  if ((int)param_1[5] != 0) {
    uVar1 = *(uint *)param_1[4];
    uVar3 = (uint64_t)uVar1;
    uVar4 = 0;
    if (uVar1 == 0xffffffff) {
      uVar4 = uVar7;
      do {
        uVar1 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar1;
        if (uVar1 == *(uint *)((int64_t)param_1 + 0x2c)) break;
        uVar1 = ((uint *)param_1[4])[uVar4];
        uVar3 = (uint64_t)uVar1;
      } while (uVar1 == 0xffffffff);
    }
  }
  if (param_4 != 0) {
    uVar5 = (uint64_t)param_4;
    do {
      uVar1 = *(uint *)(param_1[3] + uVar3 * 4);
      uVar3 = (uint64_t)uVar1;
      if (uVar1 == 0xffffffff) {
        do {
          uVar1 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar1;
          if (uVar1 == *(uint *)((int64_t)param_1 + 0x2c)) break;
          uVar1 = *(uint *)(param_1[4] + uVar4 * 4);
          uVar3 = (uint64_t)uVar1;
        } while (uVar1 == 0xffffffff);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_3 != 0) {
    do {
      if ((int)uVar3 == -1) {
        return param_3;
      }
      *(uint64_t *)(param_2 + uVar7 * 8) = *(uint64_t *)(param_1[2] + 8 + uVar3 * 0x10);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      uVar1 = *(uint *)(param_1[3] + uVar3 * 4);
      uVar3 = (uint64_t)uVar1;
      if (uVar1 == 0xffffffff) {
        do {
          uVar1 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar1;
          if (uVar1 == *(uint *)((int64_t)param_1 + 0x2c)) break;
          uVar1 = *(uint *)(param_1[4] + uVar4 * 4);
          uVar3 = (uint64_t)uVar1;
        } while (uVar1 == 0xffffffff);
      }
    } while (uVar6 < param_3);
  }
  return param_3;
}
uint64_t * function_6ade90(int64_t *param_1,uint64_t *param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  iVar8 = 1;
  uVar2 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (uint64_t *)function_6aa830(param_1,iVar8);
  puVar7 = (uint64_t *)*param_1;
  uVar4 = (uint64_t)*(uint *)(param_1 + 1);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      uVar10 = uVar6;
    }
    puVar9 = puVar3;
    if (uVar10 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar10);
      uVar4 = (uint64_t)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = iVar8;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}
uint64_t * function_6adf60(int64_t *param_1,uint64_t *param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  iVar8 = 1;
  uVar2 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (uint64_t *)function_6aa8d0(param_1,iVar8);
  puVar7 = (uint64_t *)*param_1;
  uVar4 = (uint64_t)*(uint *)(param_1 + 1);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      uVar10 = uVar6;
    }
    puVar9 = puVar3;
    if (uVar10 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar10);
      uVar4 = (uint64_t)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = iVar8;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}
uint64_t * function_6ae030(int64_t *param_1,uint64_t *param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  iVar8 = 1;
  uVar2 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (uint64_t *)function_6aa970(param_1,iVar8);
  puVar7 = (uint64_t *)*param_1;
  uVar4 = (uint64_t)*(uint *)(param_1 + 1);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      uVar10 = uVar6;
    }
    puVar9 = puVar3;
    if (uVar10 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar10);
      uVar4 = (uint64_t)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = iVar8;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}
int32_t * function_6ae100(int64_t *param_1,int64_t param_2)
{
  int32_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  char cVar7;
  uint uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  void *puVar11;
  int32_t *puVar12;
  uint64_t uVar13;
  int32_t *puVar14;
  uint64_t *puVar15;
  int32_t *puVar16;
  uint64_t *puVar17;
  uint uVar18;
  uVar8 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar8 == 0) {
    uVar18 = 1;
LAB_1806ae130:
    if ((uint64_t)uVar18 * 0x78 != 0) {
      plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar10 = (int64_t *)PxGetFoundation();
      cVar7 = (**(code **)(*plVar10 + 0x28))(plVar10);
      if (cVar7 == '\0') {
        puVar11 = &ui_system_data_1728_ptr;
      }
      else {
        puVar11 = (void *)__std_type_info_name(0x180bfc3c8,0x180c827e0);
      }
      puVar12 = (int32_t *)
                (**(code **)(*plVar9 + 8))
                          (plVar9,(uint64_t)uVar18 * 0x78,puVar11,&processed_var_4272_ptr,0x229);
      goto LAB_1806ae1a1;
    }
  }
  else {
    uVar18 = uVar8 * 2;
    if (uVar8 != 0) goto LAB_1806ae130;
  }
  puVar12 = (int32_t *)0x0;
LAB_1806ae1a1:
  uVar13 = (uint64_t)*(uint *)(param_1 + 1);
  if (puVar12 < puVar12 + uVar13 * 0x1e) {
    puVar14 = puVar12 + 6;
    puVar16 = (int32_t *)(*param_1 + 0x18);
    do {
      *(void **)(puVar14 + -6) = &memory_allocator_3704_ptr;
      uVar6 = *(uint64_t *)(puVar16 + -2);
      *(uint64_t *)(puVar14 + -4) = *(uint64_t *)(puVar16 + -4);
      *(uint64_t *)(puVar14 + -2) = uVar6;
      *puVar14 = *puVar16;
      *(uint64_t *)(puVar14 + 2) = *(uint64_t *)(puVar16 + 2);
      *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar16 + 4);
      puVar14[6] = puVar16[6];
      uVar6 = *(uint64_t *)(puVar16 + 10);
      *(uint64_t *)(puVar14 + 8) = *(uint64_t *)(puVar16 + 8);
      *(uint64_t *)(puVar14 + 10) = uVar6;
      puVar14[0xc] = puVar16[0xc];
      puVar14[0xd] = puVar16[0xd];
      puVar14[0xe] = puVar16[0xe];
      puVar14[0xf] = puVar16[0xf];
      uVar6 = *(uint64_t *)(puVar16 + 0x12);
      *(uint64_t *)(puVar14 + 0x10) = *(uint64_t *)(puVar16 + 0x10);
      *(uint64_t *)(puVar14 + 0x12) = uVar6;
      puVar14[0x14] = puVar16[0x14];
      puVar14[0x15] = puVar16[0x15];
      puVar14[0x16] = puVar16[0x16];
      puVar14[0x17] = puVar16[0x17];
      puVar1 = puVar14 + 0x18;
      puVar14 = puVar14 + 0x1e;
      puVar16 = puVar16 + 0x1e;
    } while (puVar1 < puVar12 + uVar13 * 0x1e);
    uVar13 = (uint64_t)*(uint *)(param_1 + 1);
  }
  *(void **)(puVar12 + uVar13 * 0x1e) = &memory_allocator_3704_ptr;
  uVar6 = *(uint64_t *)(param_2 + 0x10);
  *(uint64_t *)(puVar12 + uVar13 * 0x1e + 2) = *(uint64_t *)(param_2 + 8);
  *(uint64_t *)((int64_t)(puVar12 + uVar13 * 0x1e + 2) + 8) = uVar6;
  puVar12[uVar13 * 0x1e + 6] = *(int32_t *)(param_2 + 0x18);
  *(uint64_t *)(puVar12 + uVar13 * 0x1e + 8) = *(uint64_t *)(param_2 + 0x20);
  *(uint64_t *)(puVar12 + uVar13 * 0x1e + 10) = *(uint64_t *)(param_2 + 0x28);
  puVar12[uVar13 * 0x1e + 0xc] = *(int32_t *)(param_2 + 0x30);
  uVar6 = *(uint64_t *)(param_2 + 0x40);
  *(uint64_t *)(puVar12 + uVar13 * 0x1e + 0xe) = *(uint64_t *)(param_2 + 0x38);
  *(uint64_t *)((int64_t)(puVar12 + uVar13 * 0x1e + 0xe) + 8) = uVar6;
  puVar12[uVar13 * 0x1e + 0x12] = *(int32_t *)(param_2 + 0x48);
  puVar12[uVar13 * 0x1e + 0x13] = *(int32_t *)(param_2 + 0x4c);
  puVar12[uVar13 * 0x1e + 0x14] = *(int32_t *)(param_2 + 0x50);
  puVar12[uVar13 * 0x1e + 0x15] = *(int32_t *)(param_2 + 0x54);
  uVar3 = *(int32_t *)(param_2 + 0x5c);
  uVar4 = *(int32_t *)(param_2 + 0x60);
  uVar5 = *(int32_t *)(param_2 + 100);
  puVar14 = puVar12 + uVar13 * 0x1e + 0x16;
  *puVar14 = *(int32_t *)(param_2 + 0x58);
  puVar14[1] = uVar3;
  puVar14[2] = uVar4;
  puVar14[3] = uVar5;
  puVar12[uVar13 * 0x1e + 0x1a] = *(int32_t *)(param_2 + 0x68);
  puVar12[uVar13 * 0x1e + 0x1b] = *(int32_t *)(param_2 + 0x6c);
  puVar12[uVar13 * 0x1e + 0x1c] = *(int32_t *)(param_2 + 0x70);
  puVar12[uVar13 * 0x1e + 0x1d] = *(int32_t *)(param_2 + 0x74);
  puVar15 = (uint64_t *)*param_1;
  puVar17 = puVar15 + (uint64_t)*(uint *)(param_1 + 1) * 0xf;
  for (; puVar15 < puVar17; puVar15 = puVar15 + 0xf) {
    *puVar15 = &memory_allocator_3704_ptr;
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar2 = *param_1, lVar2 != 0)) {
    plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar2);
  }
  uVar8 = *(uint *)(param_1 + 1);
  *(uint *)((int64_t)param_1 + 0xc) = uVar18;
  *param_1 = (int64_t)puVar12;
  *(uint *)(param_1 + 1) = uVar8 + 1;
  return puVar12 + (uint64_t)uVar8 * 0x1e;
}
int32_t * function_6ae13b(void)
{
  int32_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  char cVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int32_t *puVar11;
  uint64_t uVar12;
  int32_t *puVar13;
  uint64_t *puVar14;
  int32_t *puVar15;
  uint64_t *puVar16;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar10 = (int64_t *)PxGetFoundation();
  cVar8 = (**(code **)(*plVar10 + 0x28))(plVar10);
  if (cVar8 != '\0') {
    __std_type_info_name(0x180bfc3c8,0x180c827e0);
  }
  puVar11 = (int32_t *)(**(code **)(*plVar9 + 8))(plVar9);
  uVar12 = (uint64_t)*(uint *)(unaff_RBX + 1);
  if (puVar11 < puVar11 + uVar12 * 0x1e) {
    puVar13 = puVar11 + 6;
    puVar15 = (int32_t *)(*unaff_RBX + 0x18);
    do {
      *(void **)(puVar13 + -6) = &memory_allocator_3704_ptr;
      uVar7 = *(uint64_t *)(puVar15 + -2);
      *(uint64_t *)(puVar13 + -4) = *(uint64_t *)(puVar15 + -4);
      *(uint64_t *)(puVar13 + -2) = uVar7;
      *puVar13 = *puVar15;
      *(uint64_t *)(puVar13 + 2) = *(uint64_t *)(puVar15 + 2);
      *(uint64_t *)(puVar13 + 4) = *(uint64_t *)(puVar15 + 4);
      puVar13[6] = puVar15[6];
      uVar7 = *(uint64_t *)(puVar15 + 10);
      *(uint64_t *)(puVar13 + 8) = *(uint64_t *)(puVar15 + 8);
      *(uint64_t *)(puVar13 + 10) = uVar7;
      puVar13[0xc] = puVar15[0xc];
      puVar13[0xd] = puVar15[0xd];
      puVar13[0xe] = puVar15[0xe];
      puVar13[0xf] = puVar15[0xf];
      uVar7 = *(uint64_t *)(puVar15 + 0x12);
      *(uint64_t *)(puVar13 + 0x10) = *(uint64_t *)(puVar15 + 0x10);
      *(uint64_t *)(puVar13 + 0x12) = uVar7;
      puVar13[0x14] = puVar15[0x14];
      puVar13[0x15] = puVar15[0x15];
      puVar13[0x16] = puVar15[0x16];
      puVar13[0x17] = puVar15[0x17];
      puVar1 = puVar13 + 0x18;
      puVar13 = puVar13 + 0x1e;
      puVar15 = puVar15 + 0x1e;
    } while (puVar1 < puVar11 + uVar12 * 0x1e);
    uVar12 = (uint64_t)*(uint *)(unaff_RBX + 1);
  }
  *(void **)(puVar11 + uVar12 * 0x1e) = &memory_allocator_3704_ptr;
  uVar7 = *(uint64_t *)(unaff_RBP + 0x10);
  *(uint64_t *)(puVar11 + uVar12 * 0x1e + 2) = *(uint64_t *)(unaff_RBP + 8);
  *(uint64_t *)((int64_t)(puVar11 + uVar12 * 0x1e + 2) + 8) = uVar7;
  puVar11[uVar12 * 0x1e + 6] = *(int32_t *)(unaff_RBP + 0x18);
  *(uint64_t *)(puVar11 + uVar12 * 0x1e + 8) = *(uint64_t *)(unaff_RBP + 0x20);
  *(uint64_t *)(puVar11 + uVar12 * 0x1e + 10) = *(uint64_t *)(unaff_RBP + 0x28);
  puVar11[uVar12 * 0x1e + 0xc] = *(int32_t *)(unaff_RBP + 0x30);
  uVar7 = *(uint64_t *)(unaff_RBP + 0x40);
  *(uint64_t *)(puVar11 + uVar12 * 0x1e + 0xe) = *(uint64_t *)(unaff_RBP + 0x38);
  *(uint64_t *)((int64_t)(puVar11 + uVar12 * 0x1e + 0xe) + 8) = uVar7;
  puVar11[uVar12 * 0x1e + 0x12] = *(int32_t *)(unaff_RBP + 0x48);
  puVar11[uVar12 * 0x1e + 0x13] = *(int32_t *)(unaff_RBP + 0x4c);
  puVar11[uVar12 * 0x1e + 0x14] = *(int32_t *)(unaff_RBP + 0x50);
  puVar11[uVar12 * 0x1e + 0x15] = *(int32_t *)(unaff_RBP + 0x54);
  uVar4 = *(int32_t *)(unaff_RBP + 0x5c);
  uVar5 = *(int32_t *)(unaff_RBP + 0x60);
  uVar6 = *(int32_t *)(unaff_RBP + 100);
  puVar13 = puVar11 + uVar12 * 0x1e + 0x16;
  *puVar13 = *(int32_t *)(unaff_RBP + 0x58);
  puVar13[1] = uVar4;
  puVar13[2] = uVar5;
  puVar13[3] = uVar6;
  puVar11[uVar12 * 0x1e + 0x1a] = *(int32_t *)(unaff_RBP + 0x68);
  puVar11[uVar12 * 0x1e + 0x1b] = *(int32_t *)(unaff_RBP + 0x6c);
  puVar11[uVar12 * 0x1e + 0x1c] = *(int32_t *)(unaff_RBP + 0x70);
  puVar11[uVar12 * 0x1e + 0x1d] = *(int32_t *)(unaff_RBP + 0x74);
  puVar14 = (uint64_t *)*unaff_RBX;
  puVar16 = puVar14 + (uint64_t)*(uint *)(unaff_RBX + 1) * 0xf;
  for (; puVar14 < puVar16; puVar14 = puVar14 + 0xf) {
    *puVar14 = &memory_allocator_3704_ptr;
  }
  if ((-1 < *(int *)((int64_t)unaff_RBX + 0xc)) && (lVar3 = *unaff_RBX, lVar3 != 0)) {
    plVar9 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar3);
  }
  uVar2 = *(uint *)(unaff_RBX + 1);
  *(int32_t *)((int64_t)unaff_RBX + 0xc) = unaff_ESI;
  *unaff_RBX = (int64_t)puVar11;
  *(uint *)(unaff_RBX + 1) = uVar2 + 1;
  return puVar11 + (uint64_t)uVar2 * 0x1e;
}
int64_t function_6ae19f(void)
{
  int32_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  int32_t *puVar12;
  uint64_t *puVar13;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  uVar8 = (uint64_t)*(uint *)(unaff_RBX + 1);
  if ((int32_t *)(uVar8 * 0x78) != (int32_t *)0x0) {
    puVar9 = (int32_t *)&system_data_0018;
    puVar12 = (int32_t *)(*unaff_RBX + 0x18);
    do {
      *(void **)(puVar9 + -6) = &memory_allocator_3704_ptr;
      uVar7 = *(uint64_t *)(puVar12 + -2);
      *(uint64_t *)(puVar9 + -4) = *(uint64_t *)(puVar12 + -4);
      *(uint64_t *)(puVar9 + -2) = uVar7;
      *puVar9 = *puVar12;
      *(uint64_t *)(puVar9 + 2) = *(uint64_t *)(puVar12 + 2);
      *(uint64_t *)(puVar9 + 4) = *(uint64_t *)(puVar12 + 4);
      puVar9[6] = puVar12[6];
      uVar7 = *(uint64_t *)(puVar12 + 10);
      *(uint64_t *)(puVar9 + 8) = *(uint64_t *)(puVar12 + 8);
      *(uint64_t *)(puVar9 + 10) = uVar7;
      puVar9[0xc] = puVar12[0xc];
      puVar9[0xd] = puVar12[0xd];
      puVar9[0xe] = puVar12[0xe];
      puVar9[0xf] = puVar12[0xf];
      uVar7 = *(uint64_t *)(puVar12 + 0x12);
      *(uint64_t *)(puVar9 + 0x10) = *(uint64_t *)(puVar12 + 0x10);
      *(uint64_t *)(puVar9 + 0x12) = uVar7;
      puVar9[0x14] = puVar12[0x14];
      puVar9[0x15] = puVar12[0x15];
      puVar9[0x16] = puVar12[0x16];
      puVar9[0x17] = puVar12[0x17];
      puVar1 = puVar9 + 0x18;
      puVar9 = puVar9 + 0x1e;
      puVar12 = puVar12 + 0x1e;
    } while (puVar1 < (int32_t *)(uVar8 * 0x78));
    uVar8 = (uint64_t)*(uint *)(unaff_RBX + 1);
  }
  puVar11 = (uint64_t *)(uVar8 * 0x78);
  *puVar11 = &memory_allocator_3704_ptr;
  uVar7 = *(uint64_t *)(unaff_RBP + 0x10);
  puVar11[1] = *(uint64_t *)(unaff_RBP + 8);
  puVar11[2] = uVar7;
  *(int32_t *)(puVar11 + 3) = *(int32_t *)(unaff_RBP + 0x18);
  puVar11[4] = *(uint64_t *)(unaff_RBP + 0x20);
  puVar11[5] = *(uint64_t *)(unaff_RBP + 0x28);
  *(int32_t *)(puVar11 + 6) = *(int32_t *)(unaff_RBP + 0x30);
  uVar7 = *(uint64_t *)(unaff_RBP + 0x40);
  puVar11[7] = *(uint64_t *)(unaff_RBP + 0x38);
  puVar11[8] = uVar7;
  *(int32_t *)(puVar11 + 9) = *(int32_t *)(unaff_RBP + 0x48);
  *(int32_t *)((int64_t)puVar11 + 0x4c) = *(int32_t *)(unaff_RBP + 0x4c);
  *(int32_t *)(puVar11 + 10) = *(int32_t *)(unaff_RBP + 0x50);
  *(int32_t *)((int64_t)puVar11 + 0x54) = *(int32_t *)(unaff_RBP + 0x54);
  uVar4 = *(int32_t *)(unaff_RBP + 0x5c);
  uVar5 = *(int32_t *)(unaff_RBP + 0x60);
  uVar6 = *(int32_t *)(unaff_RBP + 100);
  *(int32_t *)(puVar11 + 0xb) = *(int32_t *)(unaff_RBP + 0x58);
  *(int32_t *)((int64_t)puVar11 + 0x5c) = uVar4;
  *(int32_t *)(puVar11 + 0xc) = uVar5;
  *(int32_t *)((int64_t)puVar11 + 100) = uVar6;
  *(int32_t *)(puVar11 + 0xd) = *(int32_t *)(unaff_RBP + 0x68);
  *(int32_t *)((int64_t)puVar11 + 0x6c) = *(int32_t *)(unaff_RBP + 0x6c);
  *(int32_t *)(puVar11 + 0xe) = *(int32_t *)(unaff_RBP + 0x70);
  *(int32_t *)((int64_t)puVar11 + 0x74) = *(int32_t *)(unaff_RBP + 0x74);
  puVar11 = (uint64_t *)*unaff_RBX;
  puVar13 = puVar11 + (uint64_t)*(uint *)(unaff_RBX + 1) * 0xf;
  for (; puVar11 < puVar13; puVar11 = puVar11 + 0xf) {
    *puVar11 = &memory_allocator_3704_ptr;
  }
  if ((-1 < *(int *)((int64_t)unaff_RBX + 0xc)) && (lVar3 = *unaff_RBX, lVar3 != 0)) {
    plVar10 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar10 + 0x10))(plVar10,lVar3);
  }
  uVar2 = *(uint *)(unaff_RBX + 1);
  *(int32_t *)((int64_t)unaff_RBX + 0xc) = unaff_ESI;
  *unaff_RBX = 0;
  *(uint *)(unaff_RBX + 1) = uVar2 + 1;
  return (uint64_t)uVar2 * 0x78;
}
int64_t function_6ae340(int64_t *param_1,int64_t param_2)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int iVar11;
  iVar11 = 1;
  uVar6 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar6 != 0) {
    iVar11 = uVar6 * 2;
  }
  lVar7 = function_6aaa10(param_1,iVar11);
  SystemFunction_0001806aac60(lVar7,(uint64_t)*(uint *)(param_1 + 1) * 0x78 + lVar7,*param_1);
  puVar9 = (uint64_t *)((uint64_t)*(uint *)(param_1 + 1) * 0x78 + lVar7);
  *puVar9 = &memory_allocator_3704_ptr;
  uVar5 = *(uint64_t *)(param_2 + 0x10);
  puVar9[1] = *(uint64_t *)(param_2 + 8);
  puVar9[2] = uVar5;
  *(int32_t *)(puVar9 + 3) = *(int32_t *)(param_2 + 0x18);
  puVar9[4] = *(uint64_t *)(param_2 + 0x20);
  puVar9[5] = *(uint64_t *)(param_2 + 0x28);
  *(int32_t *)(puVar9 + 6) = *(int32_t *)(param_2 + 0x30);
  uVar5 = *(uint64_t *)(param_2 + 0x40);
  puVar9[7] = *(uint64_t *)(param_2 + 0x38);
  puVar9[8] = uVar5;
  *(int32_t *)(puVar9 + 9) = *(int32_t *)(param_2 + 0x48);
  *(int32_t *)((int64_t)puVar9 + 0x4c) = *(int32_t *)(param_2 + 0x4c);
  *(int32_t *)(puVar9 + 10) = *(int32_t *)(param_2 + 0x50);
  *(int32_t *)((int64_t)puVar9 + 0x54) = *(int32_t *)(param_2 + 0x54);
  uVar2 = *(int32_t *)(param_2 + 0x5c);
  uVar3 = *(int32_t *)(param_2 + 0x60);
  uVar4 = *(int32_t *)(param_2 + 100);
  *(int32_t *)(puVar9 + 0xb) = *(int32_t *)(param_2 + 0x58);
  *(int32_t *)((int64_t)puVar9 + 0x5c) = uVar2;
  *(int32_t *)(puVar9 + 0xc) = uVar3;
  *(int32_t *)((int64_t)puVar9 + 100) = uVar4;
  *(int32_t *)(puVar9 + 0xd) = *(int32_t *)(param_2 + 0x68);
  *(int32_t *)((int64_t)puVar9 + 0x6c) = *(int32_t *)(param_2 + 0x6c);
  *(int32_t *)(puVar9 + 0xe) = *(int32_t *)(param_2 + 0x70);
  *(int32_t *)((int64_t)puVar9 + 0x74) = *(int32_t *)(param_2 + 0x74);
  puVar9 = (uint64_t *)*param_1;
  puVar10 = puVar9 + (uint64_t)*(uint *)(param_1 + 1) * 0xf;
  for (; puVar9 < puVar10; puVar9 = puVar9 + 0xf) {
    *puVar9 = &memory_allocator_3704_ptr;
  }
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar1 = *param_1, lVar1 != 0)) {
    plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar8 + 0x10))(plVar8,lVar1);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *param_1 = lVar7;
  *(int *)((int64_t)param_1 + 0xc) = iVar11;
  *(uint *)(param_1 + 1) = uVar6 + 1;
  return (uint64_t)uVar6 * 0x78 + lVar7;
}
uint64_t * function_6ae480(int64_t *param_1,uint64_t *param_2)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  iVar8 = 1;
  uVar2 = *(uint *)((int64_t)param_1 + 0xc) & 0x7fffffff;
  if (uVar2 != 0) {
    iVar8 = uVar2 * 2;
  }
  puVar3 = (uint64_t *)function_6aaab0(param_1,iVar8);
  puVar7 = (uint64_t *)*param_1;
  uVar4 = (uint64_t)*(uint *)(param_1 + 1);
  if (puVar3 < puVar3 + uVar4) {
    uVar6 = 0;
    uVar10 = (uint64_t)*(uint *)(param_1 + 1);
    if (puVar3 + uVar4 < puVar3) {
      uVar10 = uVar6;
    }
    puVar9 = puVar3;
    if (uVar10 != 0) {
      do {
        uVar6 = uVar6 + 1;
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 < uVar10);
      uVar4 = (uint64_t)*(uint *)(param_1 + 1);
    }
  }
  puVar3[uVar4] = *param_2;
  lVar1 = *param_1;
  if ((-1 < *(int *)((int64_t)param_1 + 0xc)) && (lVar1 != 0)) {
    plVar5 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar5 + 0x10))(plVar5,lVar1);
  }
  uVar2 = *(uint *)(param_1 + 1);
  *param_1 = (int64_t)puVar3;
  *(int *)((int64_t)param_1 + 0xc) = iVar8;
  *(uint *)(param_1 + 1) = uVar2 + 1;
  return puVar3 + uVar2;
}
uint function_6ae5f0(uint64_t param_1,uint64_t *param_2,int param_3)
{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  pbVar2 = (byte *)*param_2;
  uVar5 = 0x1505;
  uVar4 = 0x1505;
  uVar3 = 0x1505;
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  pbVar2 = (byte *)param_2[1];
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar4 = uVar4 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  pbVar2 = (byte *)param_2[2];
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar5 = uVar5 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  return param_3 - 1U & (uVar5 ^ uVar4 ^ uVar3);
}
uint function_6ae680(int64_t param_1,uint64_t *param_2)
{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  pbVar2 = (byte *)*param_2;
  uVar3 = 0x1505;
  uVar4 = 0x1505;
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar4 = uVar4 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  pbVar2 = (byte *)param_2[1];
  bVar1 = *pbVar2;
  while (bVar1 != 0) {
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 * 0x21 ^ (uint)bVar1;
    bVar1 = *pbVar2;
  }
  return (uVar3 ^ uVar4) & *(int *)(param_1 + 0x24) - 1U;
}