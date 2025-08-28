/* 函数别名定义: DataSerializer */
#define DataSerializer DataSerializer


#include "TaleWorlds.Native.Split.h"

// 99_part_14_part004.c - 21 个函数

// 函数: void FUN_1808e9b10(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9b10(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x20;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &processed_var_7904_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9bf0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9bf0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x1c) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x24) = 0;
    *puVar4 = &processed_var_5584_ptr;
    *(int32_t *)(puVar4 + 1) = 0x28;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9cd0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9cd0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(int32_t *)((int64_t)puVar4 + 0xc) = 0;
    *puVar4 = &processed_var_8024_ptr;
    *(int32_t *)(puVar4 + 2) = 2;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0x20214;
    *(int32_t *)(puVar4 + 1) = 0x18;
    FUN_180896c10(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9db0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9db0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x10;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    puVar4[1] = 0x10;
    *puVar4 = &memory_allocator_3344_ptr;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9e80(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9e80(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x10;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    puVar4[1] = 0x10;
    *puVar4 = &memory_allocator_3472_ptr;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9f50(void)
void FUN_1808e9f50(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x228;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = DataSerializer0(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)lVar1 + *in_R9,0,0x228);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *in_R9,0,(int64_t)(iVar5 - iVar2));
}






// 函数: void FUN_1808ea030(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808ea030(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x1c) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x24) = 0;
    *puVar4 = &ui_system_data_184_ptr;
    *(int32_t *)(puVar4 + 1) = 0x28;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea110(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808ea110(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0;
    *puVar4 = &rendering_buffer_2672_ptr;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea1e0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808ea1e0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0;
    *puVar4 = &rendering_buffer_2800_ptr;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea2b0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808ea2b0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (int64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)plVar4 + 0xc) = 0;
    *plVar4 = (int64_t)&memory_allocator_3216_ptr;
    *(int32_t *)((int64_t)plVar4 + 0x14) = 0;
    *(int32_t *)(plVar4 + 1) = 0x18;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea390(void)
void FUN_1808ea390(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x228;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = DataSerializer0(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)lVar1 + *in_R9,0,0x228);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *in_R9,0,(int64_t)(iVar5 - iVar2));
}






// 函数: void FUN_1808ea470(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808ea470(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x1c) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x24) = 0;
    *puVar4 = &processed_var_9928_ptr;
    *(int32_t *)(puVar4 + 1) = 0x28;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea550(void)
void FUN_1808ea550(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x228;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = DataSerializer0(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)lVar1 + *in_R9,0,0x228);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *in_R9,0,(int64_t)(iVar5 - iVar2));
}






// 函数: void FUN_1808ea630(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808ea630(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x1c) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x24) = 0;
    *puVar4 = &processed_var_9800_ptr;
    *(int32_t *)(puVar4 + 1) = 0x28;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea710(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808ea710(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0;
    *puVar4 = &rendering_buffer_2928_ptr;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea7e0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808ea7e0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x18;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0;
    *puVar4 = &memory_allocator_3072_ptr;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808ea8b0(void)
void FUN_1808ea8b0(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x228;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = DataSerializer0(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)lVar1 + *in_R9,0,0x228);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *in_R9,0,(int64_t)(iVar5 - iVar2));
}






// 函数: void FUN_1808ea990(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808ea990(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x1c) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x24) = 0;
    *puVar4 = &processed_var_56_ptr;
    *(int32_t *)(puVar4 + 1) = 0x28;
    (*(code *)&processed_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808eaa70(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808eaa70(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x50;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (int64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)plVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x14) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x1c) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x24) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x2c) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x34) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x3c) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x44) = 0;
    *plVar4 = (int64_t)&rendering_buffer_2152_ptr;
    *(int32_t *)((int64_t)plVar4 + 0x4c) = 0;
    *(int32_t *)(plVar4 + 1) = 0x50;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808eab60(void)
void FUN_1808eab60(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + 0x218;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = DataSerializer0(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)lVar1 + *in_R9,0,0x218);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *in_R9,0,(int64_t)(iVar5 - iVar2));
}






// 函数: void FUN_1808eac40(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808eac40(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5;
  iVar6 = (int)lVar1 + 0x28;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = DataSerializer0(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = DataSerializer0(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (int64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)plVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x14) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x1c) = 0;
    *plVar4 = (int64_t)&rendering_buffer_2024_ptr;
    *(int32_t *)((int64_t)plVar4 + 0x24) = 0;
    *(int32_t *)(plVar4 + 1) = 0x28;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






