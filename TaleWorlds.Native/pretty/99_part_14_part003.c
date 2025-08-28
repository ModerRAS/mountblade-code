#include "TaleWorlds.Native.Split.h"

// 99_part_14_part003.c - 21 个函数

// 函数: void FUN_1808e8960(void)
void FUN_1808e8960(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4;
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
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *in_R9,0,0xa0);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808e8a40(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e8a40(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (longlong *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)plVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)plVar4 + 0x14) = 0;
    *plVar4 = (longlong)&UNK_180989090;
    *(int32_t *)((longlong)plVar4 + 0x1c) = 0;
    *(int32_t *)(plVar4 + 1) = 0x20;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8b20(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
void FUN_1808e8b20(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)

{
  int iVar1;
  longlong *aplStack_18 [2];
  
  iVar1 = FUN_1808eb9c0(param_4,aplStack_18,0x18);
  if (iVar1 == 0) {
    (**(code **)(*aplStack_18[0] + 0x20))(aplStack_18[0],param_3,param_2);
  }
  return;
}






// 函数: void FUN_1808e8b70(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e8b70(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(int32_t *)((longlong)puVar4 + 0x14) = 0;
    *puVar4 = &UNK_180983cf8;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8c40(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e8c40(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x1c) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x24) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x2c) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x34) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x3c) = 0;
    *(int32_t *)((longlong)puVar4 + 0x44) = 0;
    *puVar4 = &UNK_180983840;
    *(int32_t *)(puVar4 + 1) = 0x48;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8d30(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e8d30(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_1809838c8;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8e10(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e8e10(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x1c) = 0;
    *(int32_t *)((longlong)puVar4 + 0x24) = 0;
    *puVar4 = &UNK_180983e88;
    *(int32_t *)(puVar4 + 1) = 0x28;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e8ef0(void)
void FUN_1808e8ef0(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4;
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
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *in_R9,0,0xa8);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808e8fd0(void)
void FUN_1808e8fd0(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4;
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
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *in_R9,0,0xa8);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808e90b0(void)
void FUN_1808e90b0(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *in_R9;
  
  lVar1 = in_R9[1];
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4;
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
  uVar4 = (int)*(uint *)((longlong)in_R9 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)in_R9 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(in_R9,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)in_R9[1];
  if (iVar5 <= iVar2) {
    *(int *)(in_R9 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *in_R9,0,0x128);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808e9190(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e9190(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    plVar4 = (longlong *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)plVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)plVar4 + 0x14) = 0;
    plVar4[4] = 0;
    *plVar4 = (longlong)&UNK_1809891a8;
    *(int32_t *)((longlong)plVar4 + 0x1c) = 0;
    *(int32_t *)(plVar4 + 1) = 0x28;
    (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9270(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e9270(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180983a60;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9350(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e9350(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_1809837c0;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9430(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e9430(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180983950;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9510(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e9510(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_1809839d8;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e95f0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e95f0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180983be8;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e96d0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e96d0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180983738;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e97b0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e97b0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(int32_t *)((longlong)puVar4 + 0x14) = 0;
    *puVar4 = &UNK_180983ae8;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9880(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e9880(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180983b68;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9960(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e9960(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4,iVar6), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x14) = 0;
    *(int32_t *)((longlong)puVar4 + 0x1c) = 0;
    *puVar4 = &UNK_180985b08;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808e9a40(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808e9a40(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = param_4[1];
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5;
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
  uVar5 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar5) - uVar5) < iVar6) &&
     (iVar2 = FUN_180849030(param_4), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_4[1];
  if (iVar6 <= iVar2) {
    *(int *)(param_4 + 1) = iVar6;
    puVar4 = (uint64_t *)((longlong)(int)lVar1 + *param_4);
    *(uint64_t *)((longlong)puVar4 + 0xc) = 0;
    *(int32_t *)((longlong)puVar4 + 0x14) = 0;
    *puVar4 = &UNK_1809892a0;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






