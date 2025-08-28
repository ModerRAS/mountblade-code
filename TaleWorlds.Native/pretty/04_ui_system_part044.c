#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part044.c - 10 个函数

// 函数: void FUN_180679210(int8_t *param_1,longlong param_2,byte *param_3)
void FUN_180679210(int8_t *param_1,longlong param_2,byte *param_3)

{
  int8_t *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int8_t uVar8;
  uint uVar9;
  
  bVar2 = param_3[4];
  bVar3 = param_3[5];
  uVar9 = (uint)param_3[3];
  bVar4 = param_3[6];
  bVar5 = param_3[7];
  bVar6 = param_3[1];
  bVar7 = param_3[2];
  *param_1 = (char)((int)((uint)*param_3 + (uint)bVar7 + (bVar6 + 1) * 2) >> 2);
  uVar8 = (int8_t)((int)(uVar9 + (bVar7 + 1) * 2 + (uint)bVar6) >> 2);
  param_1[param_2] = uVar8;
  param_1[1] = uVar8;
  uVar8 = (int8_t)((int)((uint)bVar2 + (uVar9 + 1) * 2 + (uint)bVar7) >> 2);
  param_1[param_2 * 2] = uVar8;
  param_1[param_2 + 1] = uVar8;
  puVar1 = param_1 + param_2 * 3;
  param_1[2] = uVar8;
  uVar8 = (int8_t)((int)((uint)bVar2 * 2 + 2 + (uint)bVar3 + uVar9) >> 2);
  *puVar1 = uVar8;
  param_1[param_2 * 2 + 1] = uVar8;
  param_1[param_2 + 2] = uVar8;
  param_1[3] = uVar8;
  uVar8 = (int8_t)((int)((uint)bVar4 + (uint)bVar3 * 2 + bVar2 + 2) >> 2);
  puVar1[1] = uVar8;
  param_1[param_2 * 2 + 2] = uVar8;
  param_1[param_2 + 3] = uVar8;
  uVar8 = (int8_t)((int)((uint)bVar5 + (uint)bVar4 * 2 + bVar3 + 2) >> 2);
  puVar1[2] = uVar8;
  param_1[param_2 * 2 + 3] = uVar8;
  puVar1[3] = (char)((int)((uint)bVar4 + (uint)bVar5 * 2 + bVar5 + 2) >> 2);
  return;
}





// 函数: void FUN_180679310(longlong param_1,longlong param_2,longlong param_3)
void FUN_180679310(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  
  lVar3 = 0x10;
  pbVar2 = (byte *)(param_3 + 1);
  do {
    pbVar1 = pbVar2 + 1;
    pbVar1[(param_1 - param_3) + -2] = (byte)((int)(*pbVar2 + 1 + (uint)pbVar2[-1]) >> 1);
    pbVar1[(param_1 - param_3) + param_2 + -2] =
         (byte)((int)(*pbVar1 + 2 + (uint)*pbVar2 * 2 + (uint)pbVar2[-1]) >> 2);
    lVar3 = lVar3 + -1;
    pbVar2 = pbVar1;
  } while (lVar3 != 0);
                    // WARNING: Subroutine does not return
  memcpy(param_2 * 2 + param_1,param_1 + 1,0xe,pbVar1,0xe,7,-param_1,param_2 - param_1);
}





// 函数: void FUN_180679480(longlong param_1,longlong param_2,longlong param_3)
void FUN_180679480(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  
  lVar3 = 0x20;
  pbVar2 = (byte *)(param_3 + 1);
  do {
    pbVar1 = pbVar2 + 1;
    pbVar1[(param_1 - param_3) + -2] = (byte)((int)(*pbVar2 + 1 + (uint)pbVar2[-1]) >> 1);
    pbVar1[(param_1 - param_3) + param_2 + -2] =
         (byte)((int)(*pbVar1 + 2 + (uint)*pbVar2 * 2 + (uint)pbVar2[-1]) >> 2);
    lVar3 = lVar3 + -1;
    pbVar2 = pbVar1;
  } while (lVar3 != 0);
                    // WARNING: Subroutine does not return
  memcpy(param_2 * 2 + param_1,param_1 + 1,0x1e,pbVar1,0x1e,0xf,-param_1,param_2 - param_1);
}





// 函数: void FUN_1806795f0(int8_t *param_1,longlong param_2,byte *param_3)
void FUN_1806795f0(int8_t *param_1,longlong param_2,byte *param_3)

{
  int8_t *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int8_t uVar9;
  
  bVar2 = param_3[2];
  bVar3 = param_3[3];
  bVar4 = param_3[4];
  bVar5 = param_3[1];
  bVar6 = param_3[5];
  bVar7 = *param_3;
  bVar8 = param_3[6];
  *param_1 = (char)((int)(bVar7 + 1 + (uint)bVar5) >> 1);
  uVar9 = (int8_t)((int)(bVar5 + 1 + (uint)bVar2) >> 1);
  param_1[param_2 * 2] = uVar9;
  param_1[1] = uVar9;
  uVar9 = (int8_t)((int)(bVar2 + 1 + (uint)bVar3) >> 1);
  param_1[param_2 * 2 + 1] = uVar9;
  param_1[2] = uVar9;
  uVar9 = (int8_t)((int)(bVar3 + 1 + (uint)bVar4) >> 1);
  param_1[param_2 * 2 + 2] = uVar9;
  param_1[3] = uVar9;
  param_1[param_2 * 2 + 3] = (char)((int)(bVar4 + 1 + (uint)bVar6) >> 1);
  param_1[param_2] = (char)((int)((uint)bVar2 + (bVar5 + 1) * 2 + (uint)bVar7) >> 2);
  puVar1 = param_1 + param_2 * 3;
  uVar9 = (int8_t)((int)((uint)bVar3 + (bVar2 + 1) * 2 + (uint)bVar5) >> 2);
  *puVar1 = uVar9;
  param_1[param_2 + 1] = uVar9;
  uVar9 = (int8_t)((int)((uint)bVar4 + (uint)bVar3 * 2 + bVar2 + 2) >> 2);
  puVar1[1] = uVar9;
  param_1[param_2 + 2] = uVar9;
  uVar9 = (int8_t)((int)((uint)bVar4 * 2 + (uint)bVar6 + bVar3 + 2) >> 2);
  puVar1[2] = uVar9;
  param_1[param_2 + 3] = uVar9;
  puVar1[3] = (char)((int)((uint)bVar8 + (uint)bVar6 * 2 + bVar4 + 2) >> 2);
  return;
}





// 函数: void FUN_1806796f0(int8_t *param_1,longlong param_2,byte *param_3)
void FUN_1806796f0(int8_t *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  
  bVar1 = *param_3;
  *param_1 = (char)((int)(param_3[1] + 1 + (uint)bVar1) >> 1);
  param_1[param_2] = (char)((int)(param_3[2] + 2 + (uint)param_3[1] * 2 + (uint)*param_3) >> 2);
  param_1[1] = (char)((int)((uint)param_3[1] + param_3[2] + 1) >> 1);
  param_1[param_2 + 1] =
       (char)((int)((uint)param_3[3] + (param_3[2] + 1) * 2 + (uint)param_3[1]) >> 2);
  param_1[2] = (char)((int)((uint)param_3[3] + param_3[2] + 1) >> 1);
  param_1[param_2 + 2] =
       (char)((int)((uint)param_3[2] + (param_3[3] + 1) * 2 + (uint)param_3[4]) >> 2);
  param_1[3] = (char)((int)((uint)param_3[3] + param_3[4] + 1) >> 1);
  param_1[param_2 + 3] =
       (char)((int)((uint)param_3[5] + (param_3[4] + 1) * 2 + (uint)param_3[3]) >> 2);
  param_1[4] = (char)((int)((uint)param_3[4] + param_3[5] + 1) >> 1);
  param_1[param_2 + 4] =
       (char)((int)((uint)param_3[6] + (param_3[5] + 1) * 2 + (uint)param_3[4]) >> 2);
  param_1[5] = (char)((int)((uint)param_3[5] + param_3[6] + 1) >> 1);
  param_1[param_2 + 5] =
       (char)((int)((uint)param_3[5] + (param_3[6] + 1) * 2 + (uint)param_3[7]) >> 2);
  param_1[6] = (char)((int)((uint)param_3[7] + param_3[6] + 1) >> 1);
  param_1[param_2 + 6] =
       (char)((int)((uint)param_3[6] + (param_3[7] + 1) * 2 + (uint)param_3[8]) >> 2);
  param_1[7] = (char)((int)(param_3[7] + 1 + (uint)param_3[8]) >> 1);
  param_1[param_2 + 7] =
       (char)((int)(param_3[9] + 2 + (uint)param_3[8] * 2 + (uint)param_3[7]) >> 2);
                    // WARNING: Subroutine does not return
  memcpy(param_1 + param_2 * 2,param_1 + 1,6,bVar1,3,-(longlong)param_1,param_2 - (longlong)param_1,
         param_2 * 2);
}





// 函数: void FUN_1806799b0(int8_t *param_1,longlong param_2,byte *param_3)
void FUN_1806799b0(int8_t *param_1,longlong param_2,byte *param_3)

{
  int8_t *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int8_t uVar10;
  
  bVar2 = param_3[2];
  bVar3 = param_3[3];
  bVar4 = param_3[4];
  bVar5 = param_3[1];
  bVar6 = param_3[5];
  bVar7 = *param_3;
  bVar8 = param_3[6];
  bVar9 = param_3[7];
  *param_1 = (char)((int)(bVar7 + 1 + (uint)bVar5) >> 1);
  uVar10 = (int8_t)((int)(bVar5 + 1 + (uint)bVar2) >> 1);
  param_1[param_2 * 2] = uVar10;
  param_1[1] = uVar10;
  uVar10 = (int8_t)((int)(bVar2 + 1 + (uint)bVar3) >> 1);
  param_1[param_2 * 2 + 1] = uVar10;
  param_1[2] = uVar10;
  uVar10 = (int8_t)((int)(bVar3 + 1 + (uint)bVar4) >> 1);
  param_1[param_2 * 2 + 2] = uVar10;
  param_1[3] = uVar10;
  param_1[param_2 * 2 + 3] = (char)((int)((uint)bVar8 + (bVar6 + 1) * 2 + (uint)bVar4) >> 2);
  param_1[param_2] = (char)((int)((uint)bVar2 + (bVar5 + 1) * 2 + (uint)bVar7) >> 2);
  puVar1 = param_1 + param_2 * 3;
  uVar10 = (int8_t)((int)((uint)bVar2 * 2 + 2 + (uint)bVar3 + (uint)bVar5) >> 2);
  *puVar1 = uVar10;
  param_1[param_2 + 1] = uVar10;
  uVar10 = (int8_t)((int)((uint)bVar4 + (uint)bVar3 * 2 + bVar2 + 2) >> 2);
  puVar1[1] = uVar10;
  param_1[param_2 + 2] = uVar10;
  uVar10 = (int8_t)((int)((uint)bVar6 + (uint)bVar4 * 2 + bVar3 + 2) >> 2);
  puVar1[2] = uVar10;
  param_1[param_2 + 3] = uVar10;
  puVar1[3] = (char)((int)((uint)bVar9 + (uint)bVar8 * 2 + bVar6 + 2) >> 2);
  return;
}





// 函数: void FUN_180679ac0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t *param_4)
void FUN_180679ac0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t *param_4)

{
                    // WARNING: Subroutine does not return
  memset(param_1,*param_4,0x10);
}





// 函数: void FUN_180679b20(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t *param_4)
void FUN_180679b20(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t *param_4)

{
                    // WARNING: Subroutine does not return
  memset(param_1,*param_4,0x20);
}





// 函数: void FUN_180679bf0(int8_t *param_1,longlong param_2,longlong param_3,byte *param_4)
void FUN_180679bf0(int8_t *param_1,longlong param_2,longlong param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int8_t uVar4;
  uint uVar5;
  
  uVar5 = (uint)param_4[2];
  bVar1 = param_4[1];
  bVar2 = *param_4;
  bVar3 = param_4[3];
  uVar4 = (int8_t)((int)((uint)*(byte *)(param_3 + -1) + (uint)bVar1 + (bVar2 + 1) * 2) >> 2);
  *param_1 = uVar4;
  param_1[1] = uVar4;
  param_1[2] = uVar4;
  param_1[3] = uVar4;
  uVar4 = (int8_t)((int)(uVar5 + (bVar1 + 1) * 2 + (uint)bVar2) >> 2);
  param_1[param_2] = uVar4;
  param_1[param_2 + 1] = uVar4;
  param_1[param_2 + 2] = uVar4;
  param_1[param_2 + 3] = uVar4;
  uVar4 = (int8_t)((int)((uint)bVar3 + (uVar5 + 1) * 2 + (uint)bVar1) >> 2);
  param_1[param_2 * 2] = uVar4;
  param_1[param_2 * 2 + 1] = uVar4;
  param_1[param_2 * 2 + 2] = uVar4;
  param_1[param_2 * 2 + 3] = uVar4;
  param_1 = param_1 + param_2 * 3;
  uVar4 = (int8_t)((int)(uVar5 + 2 + (uint)bVar3 * 2 + (uint)bVar3) >> 2);
  *param_1 = uVar4;
  param_1[1] = uVar4;
  param_1[2] = uVar4;
  param_1[3] = uVar4;
  return;
}





// 函数: void FUN_180679ca0(int32_t *param_1,longlong param_2,byte *param_3)
void FUN_180679ca0(int32_t *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  uVar5 = (uint)param_3[2];
  bVar1 = param_3[3];
  bVar2 = *param_3;
  bVar3 = param_3[1];
  bVar4 = param_3[4];
  *(char *)param_1 = (char)((int)((uint)param_3[-1] + (uint)bVar3 + (bVar2 + 1) * 2) >> 2);
  *(char *)((longlong)param_1 + 1) = (char)((int)(uVar5 + (bVar3 + 1) * 2 + (uint)bVar2) >> 2);
  *(char *)((longlong)param_1 + 2) = (char)((int)((uint)bVar1 + (uVar5 + 1) * 2 + (uint)bVar3) >> 2)
  ;
  *(char *)((longlong)param_1 + 3) = (char)((int)((uint)bVar4 + (uint)bVar1 * 2 + uVar5 + 2) >> 2);
  *(int32_t *)((longlong)param_1 + param_2) = *param_1;
  *(int32_t *)((longlong)param_1 + param_2 * 2) = *param_1;
  *(int32_t *)((longlong)param_1 + param_2 * 3) = *param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



