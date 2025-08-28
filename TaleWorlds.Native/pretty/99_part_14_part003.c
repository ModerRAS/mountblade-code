#include "TaleWorlds.Native.Split.h"

// 99_part_14_part003.c - 21 个函数

// 函数: void FUN_1808e8960(void)
void FUN_1808e8960(void)

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
  iVar5 = (int)lVar1 + 0xa0;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)lVar1 + *in_R9,0,0xa0);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *in_R9,0,(int64_t)(iVar5 - iVar2));
}






// 函数: void FUN_1808e8a40(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e8a40(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (int64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)plVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x14) = 0;
    *plVar4 = (int64_t)&unknown_var_9424_ptr;
    *(int32_t *)((int64_t)plVar4 + 0x1c) = 0;
    *(int32_t *)(plVar4 + 1) = 0x20;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8b20(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
void FUN_1808e8b20(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t *aplStack_18 [2];
  
  iVar1 = FUN_1808eb9c0(param_4,aplStack_18,0x18);
  if (iVar1 == 0) {
    (**(code **)(*aplStack_18[0] + 0x20))(aplStack_18[0],param_3,param_2);
  }
  return;
}






// 函数: void FUN_1808e8b70(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e8b70(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0;
    *puVar4 = &unknown_var_8024_ptr;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8c40(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e8c40(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
  iVar6 = (int)lVar1 + 0x48;
  if (iVar2 < iVar6) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar6;
    if (iVar6 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x1c) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x24) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x2c) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x34) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x3c) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x44) = 0;
    *puVar4 = &unknown_var_6816_ptr;
    *(int32_t *)(puVar4 + 1) = 0x48;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8d30(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e8d30(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &unknown_var_6952_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8e10(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e8e10(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
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
    *puVar4 = &unknown_var_8424_ptr;
    *(int32_t *)(puVar4 + 1) = 0x28;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8ef0(void)
void FUN_1808e8ef0(void)

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
  iVar5 = (int)lVar1 + 0xa8;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)lVar1 + *in_R9,0,0xa8);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *in_R9,0,(int64_t)(iVar5 - iVar2));
}






// 函数: void FUN_1808e8fd0(void)
void FUN_1808e8fd0(void)

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
  iVar5 = (int)lVar1 + 0xa8;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)lVar1 + *in_R9,0,0xa8);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *in_R9,0,(int64_t)(iVar5 - iVar2));
}






// 函数: void FUN_1808e90b0(void)
void FUN_1808e90b0(void)

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
  iVar5 = (int)lVar1 + 0x128;
  if (iVar2 < iVar5) {
    iVar3 = (int)((float)iVar2 * 1.5);
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(in_R9,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((int64_t)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((int64_t)(int)lVar1 + *in_R9,0,0x128);
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *in_R9,0,(int64_t)(iVar5 - iVar2));
}






// 函数: void FUN_1808e9190(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9190(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (int64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)plVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)plVar4 + 0x14) = 0;
    plVar4[4] = 0;
    *plVar4 = (int64_t)&unknown_var_9704_ptr;
    *(int32_t *)((int64_t)plVar4 + 0x1c) = 0;
    *(int32_t *)(plVar4 + 1) = 0x28;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9270(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9270(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &unknown_var_7360_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9350(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9350(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &unknown_var_6688_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9430(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9430(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &unknown_var_7088_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9510(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9510(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &unknown_var_7224_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e95f0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e95f0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &unknown_var_7752_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e96d0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e96d0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &unknown_var_6552_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e97b0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e97b0(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0;
    *puVar4 = &unknown_var_7496_ptr;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9880(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9880(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &unknown_var_7624_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9960(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9960(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = 0;
    *puVar4 = &unknown_var_5720_ptr;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9a40(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)
void FUN_1808e9a40(uint64_t param_1,uint64_t param_2,int32_t param_3,int64_t *param_4)

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
    iVar2 = FUN_180849030(param_4,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar5 = (int)*(uint *)((int64_t)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((int64_t)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((int64_t)(int)lVar1 + *param_4);
    *(uint64_t *)((int64_t)puVar4 + 0xc) = 0;
    *(int32_t *)((int64_t)puVar4 + 0x14) = 0;
    *puVar4 = &unknown_var_9952_ptr;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&unknown_var_7856_ptr)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((int64_t)iVar2 + *param_4,0,(int64_t)(iVar6 - iVar2));
}






