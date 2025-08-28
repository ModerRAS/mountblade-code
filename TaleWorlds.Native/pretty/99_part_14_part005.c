#include "TaleWorlds.Native.Split.h"

// 99_part_14_part005.c - 21 个函数

// 函数: void FUN_1808ead20(void)
void FUN_1808ead20(void)

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
  iVar5 = (int)lVar1 + 0xe8;
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
    memset(*in_R9 + (longlong)(int)lVar1 + 0xc,0,0xdc);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808eae00(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808eae00(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

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
  iVar6 = (int)lVar1 + 0x58;
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
    *(uint64_t *)((longlong)puVar4 + 0x44) = 0;
    *(uint64_t *)((longlong)puVar4 + 0x4c) = 0;
    *(int32_t *)((longlong)puVar4 + 0x54) = 0;
    *puVar4 = &UNK_1809823f8;
    *(int32_t *)(puVar4 + 1) = 0x58;
    FUN_180848dc0(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808eaef0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808eaef0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

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
    *puVar4 = &UNK_180982480;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808eafc0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808eafc0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

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
    *puVar4 = &UNK_180982378;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808eb090(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808eb090(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

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
    *puVar4 = &UNK_1809820c0;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808eb170(void)
void FUN_1808eb170(void)

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
    memset(*in_R9 + (longlong)(int)lVar1 + 0xc,0,0x94);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808eb250(void)
void FUN_1808eb250(void)

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
    memset(*in_R9 + (longlong)(int)lVar1 + 0xc,0,0x94);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808eb330(void)
void FUN_1808eb330(void)

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
  iVar5 = (int)lVar1 + 0x120;
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
    memset(*in_R9 + (longlong)(int)lVar1 + 0xc,0,0x114);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808eb410(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808eb410(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

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
    *puVar4 = &UNK_180982790;
    *(int32_t *)(puVar4 + 1) = 0x18;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808eb4e0(void)
void FUN_1808eb4e0(void)

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
  iVar5 = (int)lVar1 + 0x90;
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
    memset(*in_R9 + (longlong)(int)lVar1 + 0xc,0,0x84);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *in_R9,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808eb5c0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)
void FUN_1808eb5c0(uint64_t param_1,uint64_t param_2,int32_t param_3,longlong *param_4)

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
    *puVar4 = &UNK_1809844c8;
    *(int32_t *)(puVar4 + 1) = 0x20;
    (*(code *)&UNK_180848d40)(puVar4,param_3,param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_4,0,(longlong)(iVar6 - iVar2));
}






// 函数: void FUN_1808eb6a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)
void FUN_1808eb6a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int aiStack_28 [4];
  
  iVar2 = FUN_18088ee20(param_2,aiStack_28);
  if (iVar2 == 0) {
    uVar4 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
    iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar4) - uVar4;
    lVar1 = param_4[1];
    iVar5 = (int)lVar1 + aiStack_28[0] + 0x20;
    if (iVar2 < iVar5) {
      iVar3 = (int)((float)iVar2 * 1.5);
      iVar2 = iVar5;
      if (iVar5 <= iVar3) {
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
    uVar4 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
    if ((iVar5 <= (int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar4) - uVar4)) ||
       (iVar2 = FUN_180849030(param_4,iVar5), iVar2 == 0)) {
      iVar2 = (int)param_4[1];
      if (iVar2 < iVar5) {
                    // WARNING: Subroutine does not return
        memset((longlong)iVar2 + *param_4,0,(longlong)(iVar5 - iVar2));
      }
      *(int *)(param_4 + 1) = iVar5;
                    // WARNING: Subroutine does not return
      memset((longlong)(int)lVar1 + *param_4,0,(longlong)(aiStack_28[0] + 0x20));
    }
  }
  return;
}






// 函数: void FUN_1808eb6ca(void)
void FUN_1808eb6ca(void)

{
  longlong lVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *unaff_RDI;
  float fVar6;
  int iStackX_20;
  
  iVar2 = (in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f);
  lVar1 = unaff_RDI[1];
  iVar5 = (int)lVar1 + iStackX_20 + 0x20;
  if (iVar2 < iVar5) {
    fVar6 = (float)iVar2 * 1.5;
    iVar3 = (int)fVar6;
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(fVar6,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((longlong)unaff_RDI + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)unaff_RDI + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)unaff_RDI[1];
  if (iVar5 <= iVar2) {
    *(int *)(unaff_RDI + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *unaff_RDI,0,(longlong)(iStackX_20 + 0x20));
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *unaff_RDI,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808eb799(void)
void FUN_1808eb799(void)

{
  return;
}






// 函数: void FUN_1808eb7b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)
void FUN_1808eb7b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int aiStack_28 [4];
  
  iVar2 = FUN_18088ee20(param_2,aiStack_28);
  if (iVar2 == 0) {
    uVar4 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
    iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar4) - uVar4;
    lVar1 = param_4[1];
    iVar5 = (int)lVar1 + aiStack_28[0] + 0x20;
    if (iVar2 < iVar5) {
      iVar3 = (int)((float)iVar2 * 1.5);
      iVar2 = iVar5;
      if (iVar5 <= iVar3) {
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
    uVar4 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
    if ((iVar5 <= (int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar4) - uVar4)) ||
       (iVar2 = FUN_180849030(param_4,iVar5), iVar2 == 0)) {
      iVar2 = (int)param_4[1];
      if (iVar2 < iVar5) {
                    // WARNING: Subroutine does not return
        memset((longlong)iVar2 + *param_4,0,(longlong)(iVar5 - iVar2));
      }
      *(int *)(param_4 + 1) = iVar5;
                    // WARNING: Subroutine does not return
      memset((longlong)(int)lVar1 + *param_4,0,(longlong)(aiStack_28[0] + 0x20));
    }
  }
  return;
}






// 函数: void FUN_1808eb7da(void)
void FUN_1808eb7da(void)

{
  longlong lVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *unaff_RDI;
  float fVar6;
  int iStackX_20;
  
  iVar2 = (in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f);
  lVar1 = unaff_RDI[1];
  iVar5 = (int)lVar1 + iStackX_20 + 0x20;
  if (iVar2 < iVar5) {
    fVar6 = (float)iVar2 * 1.5;
    iVar3 = (int)fVar6;
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(fVar6,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((longlong)unaff_RDI + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)unaff_RDI + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)unaff_RDI[1];
  if (iVar5 <= iVar2) {
    *(int *)(unaff_RDI + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *unaff_RDI,0,(longlong)(iStackX_20 + 0x20));
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *unaff_RDI,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808eb8a9(void)
void FUN_1808eb8a9(void)

{
  return;
}






// 函数: void FUN_1808eb8c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)
void FUN_1808eb8c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int aiStack_28 [4];
  
  iVar2 = FUN_18088ee20(param_2,aiStack_28);
  if (iVar2 == 0) {
    uVar4 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
    iVar2 = (*(uint *)((longlong)param_4 + 0xc) ^ uVar4) - uVar4;
    lVar1 = param_4[1];
    iVar5 = (int)lVar1 + aiStack_28[0] + 0x18;
    if (iVar2 < iVar5) {
      iVar3 = (int)((float)iVar2 * 1.5);
      iVar2 = iVar5;
      if (iVar5 <= iVar3) {
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
    uVar4 = (int)*(uint *)((longlong)param_4 + 0xc) >> 0x1f;
    if ((iVar5 <= (int)((*(uint *)((longlong)param_4 + 0xc) ^ uVar4) - uVar4)) ||
       (iVar2 = FUN_180849030(param_4,iVar5), iVar2 == 0)) {
      iVar2 = (int)param_4[1];
      if (iVar2 < iVar5) {
                    // WARNING: Subroutine does not return
        memset((longlong)iVar2 + *param_4,0,(longlong)(iVar5 - iVar2));
      }
      *(int *)(param_4 + 1) = iVar5;
                    // WARNING: Subroutine does not return
      memset((longlong)(int)lVar1 + *param_4,0,(longlong)(aiStack_28[0] + 0x18));
    }
  }
  return;
}






// 函数: void FUN_1808eb8ea(void)
void FUN_1808eb8ea(void)

{
  longlong lVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *unaff_RDI;
  float fVar6;
  int iStackX_20;
  
  iVar2 = (in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f);
  lVar1 = unaff_RDI[1];
  iVar5 = (int)lVar1 + iStackX_20 + 0x18;
  if (iVar2 < iVar5) {
    fVar6 = (float)iVar2 * 1.5;
    iVar3 = (int)fVar6;
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(fVar6,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((longlong)unaff_RDI + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)unaff_RDI + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)unaff_RDI[1];
  if (iVar5 <= iVar2) {
    *(int *)(unaff_RDI + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *unaff_RDI,0,(longlong)(iStackX_20 + 0x18));
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *unaff_RDI,0,(longlong)(iVar5 - iVar2));
}






// 函数: void FUN_1808eb9b2(void)
void FUN_1808eb9b2(void)

{
  return;
}






// 函数: void FUN_1808eb9c0(longlong *param_1,uint64_t param_2,int param_3)
void FUN_1808eb9c0(longlong *param_1,uint64_t param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  lVar1 = param_1[1];
  uVar4 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)param_1 + 0xc) ^ uVar4) - uVar4;
  iVar5 = (int)lVar1 + param_3;
  if (iVar2 < iVar5) {
    fVar6 = (float)iVar2 * 1.5;
    iVar3 = (int)fVar6;
    iVar2 = iVar5;
    if (iVar5 <= iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0x40) {
      iVar2 = 0x40;
    }
    iVar2 = FUN_180849030(fVar6,iVar2);
    if (iVar2 != 0) {
      return;
    }
  }
  uVar4 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  if (((int)((*(uint *)((longlong)param_1 + 0xc) ^ uVar4) - uVar4) < iVar5) &&
     (iVar2 = FUN_180849030(param_1,iVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = (int)param_1[1];
  if (iVar5 <= iVar2) {
    *(int *)(param_1 + 1) = iVar5;
                    // WARNING: Subroutine does not return
    memset((longlong)(int)lVar1 + *param_1,0,(longlong)param_3);
  }
                    // WARNING: Subroutine does not return
  memset((longlong)iVar2 + *param_1,0,(longlong)(iVar5 - iVar2));
}



uint64_t FUN_1808ebab0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar9 = *(int *)((longlong)param_1 + 0x24);
  if (iVar9 == -1) {
    return 0x1c;
  }
  iVar2 = (int)param_1[1];
  if (iVar9 == iVar2) {
    iVar9 = iVar9 * 2;
    if (iVar9 < 4) {
      iVar9 = 4;
    }
    if (((iVar9 <= iVar2) || ((int)param_1[3] != iVar2)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar8 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)param_1 + 0x1c) ^ uVar8) - uVar8) < iVar9) &&
       (uVar5 = FUN_180895f20(param_1 + 2,iVar9), (int)uVar5 != 0)) {
      return uVar5;
    }
    uVar5 = FUN_1807703c0(param_1,iVar9);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar10 = 0;
    uVar6 = uVar10;
    if (0 < iVar9) {
      do {
        *(int32_t *)(*param_1 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar9);
    }
    lVar4 = param_1[3];
    uVar6 = uVar10;
    uVar11 = uVar10;
    if (0 < (int)lVar4) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar3 = param_1[2];
        lVar7 = (longlong)(int)(*(uint *)(uVar6 + lVar3) & (int)param_1[1] - 1U);
        piVar1 = (int *)(*param_1 + lVar7 * 4);
        iVar9 = *(int *)(*param_1 + lVar7 * 4);
        while (iVar9 != -1) {
          lVar7 = (longlong)iVar9 * 3 + 1;
          piVar1 = (int *)(lVar3 + lVar7 * 4);
          iVar9 = *(int *)(lVar3 + lVar7 * 4);
        }
        *piVar1 = (int)uVar10;
        uVar11 = uVar11 + 1;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(int32_t *)(param_1[2] + 4 + uVar6) = 0xffffffff;
        uVar6 = uVar6 + 0xc;
      } while ((longlong)uVar11 < (longlong)(int)lVar4);
    }
  }
  return 0;
}



uint64_t FUN_1808ebad6(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int in_EAX;
  uint64_t uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *unaff_RBX;
  int unaff_EDI;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (unaff_EDI == in_EAX) {
    iVar8 = unaff_EDI * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar7 = (int)*(uint *)((longlong)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)unaff_RBX + 0x1c) ^ uVar7) - uVar7) < iVar8) &&
       (uVar4 = FUN_180895f20(unaff_RBX + 2,iVar8), (int)uVar4 != 0)) {
      return uVar4;
    }
    uVar4 = FUN_1807703c0();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar9 = 0;
    uVar5 = uVar9;
    if (0 < iVar8) {
      do {
        *(int32_t *)(*unaff_RBX + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar8);
    }
    lVar3 = unaff_RBX[3];
    uVar5 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar3) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar2 = unaff_RBX[2];
        lVar6 = (longlong)(int)(*(uint *)(uVar5 + lVar2) & (int)unaff_RBX[1] - 1U);
        piVar1 = (int *)(*unaff_RBX + lVar6 * 4);
        iVar8 = *(int *)(*unaff_RBX + lVar6 * 4);
        while (iVar8 != -1) {
          lVar6 = (longlong)iVar8 * 3 + 1;
          piVar1 = (int *)(lVar2 + lVar6 * 4);
          iVar8 = *(int *)(lVar2 + lVar6 * 4);
        }
        *piVar1 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(int32_t *)(unaff_RBX[2] + 4 + uVar5) = 0xffffffff;
        uVar5 = uVar5 + 0xc;
      } while ((longlong)uVar10 < (longlong)(int)lVar3);
    }
  }
  return 0;
}



uint64_t FUN_1808ebbeb(void)

{
  return 0x1c;
}






