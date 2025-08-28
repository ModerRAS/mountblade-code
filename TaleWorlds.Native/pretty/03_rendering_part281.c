/* 函数别名定义: RenderingGeometryProcessor */
#define RenderingGeometryProcessor RenderingGeometryProcessor


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part281.c - 5 个函数

// 函数: void RenderingGeometryProcessor0(int64_t param_1)
void RenderingGeometryProcessor0(int64_t param_1)

{
  int8_t *puVar1;
  int iVar2;
  
  puVar1 = (int8_t *)(param_1 + 0x38);
  iVar2 = (**(code **)(param_1 + 0x10))
                    (*(uint64_t *)(param_1 + 0x28),puVar1,*(int32_t *)(param_1 + 0x34));
  *(int8_t **)(param_1 + 0xb8) = puVar1;
  if (iVar2 == 0) {
    *(int32_t *)(param_1 + 0x30) = 0;
    *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
    *puVar1 = 0;
    return;
  }
  *(int64_t *)(param_1 + 0xc0) = param_1 + 0x38 + (int64_t)iVar2;
  return;
}



uint64_t FUN_18041eef0(int64_t param_1,uint64_t param_2,int param_3)

{
  int iVar1;
  
  if ((*(int64_t *)(param_1 + 0x10) != 0) &&
     (iVar1 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb8), iVar1 < param_3)) {
                    // WARNING: Subroutine does not return
    memcpy(param_2,*(uint64_t *)(param_1 + 0xb8),(int64_t)iVar1);
  }
  if ((uint64_t)(*(int64_t *)(param_1 + 0xb8) + (int64_t)param_3) <=
      *(uint64_t *)(param_1 + 0xc0)) {
                    // WARNING: Subroutine does not return
    memcpy(param_2,*(int64_t *)(param_1 + 0xb8),(int64_t)param_3);
  }
  return 0;
}



int FUN_18041efc0(int64_t param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar2 = *(byte **)(param_1 + 0xb8);
  pbVar3 = *(byte **)(param_1 + 0xc0);
  if (pbVar2 < pbVar3) {
    uVar4 = (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar2;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVar4 = 0;
  }
  else {
    RenderingGeometryProcessor0(param_1);
    pbVar3 = *(byte **)(param_1 + 0xc0);
    uVar4 = (uint)**(byte **)(param_1 + 0xb8);
    pbVar2 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar2;
  }
  if (pbVar3 <= pbVar2) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return uVar4 * 0x100;
    }
    RenderingGeometryProcessor0(param_1);
    pbVar2 = *(byte **)(param_1 + 0xb8);
  }
  bVar1 = *pbVar2;
  *(byte **)(param_1 + 0xb8) = pbVar2 + 1;
  return (uint)bVar1 + uVar4 * 0x100;
}



int FUN_18041f070(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_18041efc0();
  iVar2 = FUN_18041efc0(param_1);
  return iVar2 + iVar1 * 0x10000;
}



uint FUN_18041f0a0(int64_t param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar2 = *(byte **)(param_1 + 0xb8);
  pbVar3 = *(byte **)(param_1 + 0xc0);
  if (pbVar2 < pbVar3) {
    uVar4 = (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar2;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVar4 = 0;
  }
  else {
    RenderingGeometryProcessor0(param_1);
    pbVar3 = *(byte **)(param_1 + 0xc0);
    uVar4 = (uint)**(byte **)(param_1 + 0xb8);
    pbVar2 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar2;
  }
  if (pbVar3 <= pbVar2) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return uVar4;
    }
    RenderingGeometryProcessor0(param_1);
    pbVar2 = *(byte **)(param_1 + 0xb8);
  }
  bVar1 = *pbVar2;
  *(byte **)(param_1 + 0xb8) = pbVar2 + 1;
  return (uint)bVar1 * 0x100 + uVar4;
}



int FUN_18041f150(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_18041f0a0();
  iVar2 = FUN_18041f0a0(param_1);
  return iVar2 * 0x10000 + iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18041f180(int64_t param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  if (param_3 == param_2) {
    return param_1;
  }
  if ((((((param_3 < 0) || (param_4 < 0)) ||
        ((param_4 != 0 && ((int)(0x7fffffff / (int64_t)param_4) < param_3)))) ||
       ((iVar6 = param_3 * param_4, iVar6 < 0 || (param_5 < 0)))) ||
      ((param_5 != 0 && ((int)(0x7fffffff / (int64_t)param_5) < iVar6)))) ||
     (lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(iVar6 * param_5),0x22), lVar4 == 0)) {
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(param_1);
    }
    lVar4 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < param_5) {
      do {
        pbVar8 = (byte *)((uint64_t)(uint)(iVar6 * param_2 * param_4) + param_1);
        pbVar5 = (byte *)((uint64_t)(uint)(iVar6 * param_3 * param_4) + lVar4);
        switch(param_2 * 8 + -10 + param_3) {
        case 0:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            pbVar5[1] = 0xff;
            pbVar5 = pbVar5 + 2;
          }
          break;
        case 1:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = *pbVar8;
            pbVar5[2] = bVar1;
            pbVar8 = pbVar8 + 1;
            pbVar5[1] = bVar1;
            *pbVar5 = bVar1;
            pbVar5 = pbVar5 + 3;
          }
          break;
        case 2:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = *pbVar8;
            pbVar5[2] = bVar1;
            pbVar8 = pbVar8 + 1;
            pbVar5[1] = bVar1;
            *pbVar5 = bVar1;
            pbVar5[3] = 0xff;
            pbVar5 = pbVar5 + 4;
          }
          break;
        case 7:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = *pbVar8;
            pbVar5 = pbVar5 + 1;
            pbVar8 = pbVar8 + 2;
          }
          break;
        case 9:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = *pbVar8;
            pbVar5[2] = bVar1;
            pbVar8 = pbVar8 + 2;
            pbVar5[1] = bVar1;
            *pbVar5 = bVar1;
            pbVar5 = pbVar5 + 3;
          }
          break;
        case 10:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = *pbVar8;
            pbVar5[2] = bVar1;
            pbVar5[1] = bVar1;
            *pbVar5 = bVar1;
            pbVar5[3] = pbVar8[1];
            pbVar8 = pbVar8 + 2;
            pbVar5 = pbVar5 + 4;
          }
          break;
        case 0xf:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = (byte)((uint)pbVar8[1] * 0x96 + (uint)pbVar8[2] * 0x1d + (uint)*pbVar8 * 0x4d
                            >> 8);
            pbVar8 = pbVar8 + 3;
            pbVar5 = pbVar5 + 1;
          }
          break;
        case 0x10:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = pbVar8[1];
            bVar2 = pbVar8[2];
            bVar3 = *pbVar8;
            pbVar5[1] = 0xff;
            *pbVar5 = (byte)((uint)bVar1 * 0x96 + (uint)bVar2 * 0x1d + (uint)bVar3 * 0x4d >> 8);
            pbVar8 = pbVar8 + 3;
            pbVar5 = pbVar5 + 2;
          }
          break;
        case 0x12:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = *pbVar8;
            pbVar5[1] = pbVar8[1];
            pbVar5[2] = pbVar8[2];
            pbVar5[3] = 0xff;
            pbVar8 = pbVar8 + 3;
            pbVar5 = pbVar5 + 4;
          }
          break;
        case 0x17:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = (byte)((uint)pbVar8[1] * 0x96 + (uint)pbVar8[2] * 0x1d + (uint)*pbVar8 * 0x4d
                            >> 8);
            pbVar8 = pbVar8 + 4;
            pbVar5 = pbVar5 + 1;
          }
          break;
        case 0x18:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = (byte)((uint)pbVar8[1] * 0x96 + (uint)pbVar8[2] * 0x1d + (uint)*pbVar8 * 0x4d
                            >> 8);
            pbVar5[1] = pbVar8[3];
            pbVar8 = pbVar8 + 4;
            pbVar5 = pbVar5 + 2;
          }
          break;
        case 0x19:
          for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = *pbVar8;
            pbVar5[1] = pbVar8[1];
            pbVar5[2] = pbVar8[2];
            pbVar8 = pbVar8 + 4;
            pbVar5 = pbVar5 + 3;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_5);
    }
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(param_1);
    }
  }
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18041f1a8(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int unaff_EBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  byte *pbVar8;
  int unaff_R12D;
  int in_stack_00000070;
  
  if ((((((unaff_EBP < 0) || (unaff_EBX < 0)) ||
        ((unaff_EBX != 0 && ((int)(0x7fffffff / (int64_t)unaff_EBX) < unaff_EBP)))) ||
       ((iVar6 = unaff_EBP * unaff_EBX, iVar6 < 0 || (in_stack_00000070 < 0)))) ||
      ((in_stack_00000070 != 0 && ((int)(0x7fffffff / (int64_t)in_stack_00000070) < iVar6)))) ||
     (lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(iVar6 * in_stack_00000070),0x22), lVar4 == 0))
  {
    if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar4 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < in_stack_00000070) {
      do {
        pbVar8 = (byte *)((uint64_t)(uint)(iVar6 * unaff_R12D * unaff_EBX) + unaff_RSI);
        pbVar5 = (byte *)((uint64_t)(uint)(iVar6 * unaff_EBP * unaff_EBX) + lVar4);
        switch(unaff_R12D * 8 + -10 + unaff_EBP) {
        case 0:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            pbVar5[1] = 0xff;
            pbVar5 = pbVar5 + 2;
          }
          break;
        case 1:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = *pbVar8;
            pbVar5[2] = bVar1;
            pbVar8 = pbVar8 + 1;
            pbVar5[1] = bVar1;
            *pbVar5 = bVar1;
            pbVar5 = pbVar5 + 3;
          }
          break;
        case 2:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = *pbVar8;
            pbVar5[2] = bVar1;
            pbVar8 = pbVar8 + 1;
            pbVar5[1] = bVar1;
            *pbVar5 = bVar1;
            pbVar5[3] = 0xff;
            pbVar5 = pbVar5 + 4;
          }
          break;
        case 7:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = *pbVar8;
            pbVar5 = pbVar5 + 1;
            pbVar8 = pbVar8 + 2;
          }
          break;
        case 9:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = *pbVar8;
            pbVar5[2] = bVar1;
            pbVar8 = pbVar8 + 2;
            pbVar5[1] = bVar1;
            *pbVar5 = bVar1;
            pbVar5 = pbVar5 + 3;
          }
          break;
        case 10:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = *pbVar8;
            pbVar5[2] = bVar1;
            pbVar5[1] = bVar1;
            *pbVar5 = bVar1;
            pbVar5[3] = pbVar8[1];
            pbVar8 = pbVar8 + 2;
            pbVar5 = pbVar5 + 4;
          }
          break;
        case 0xf:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = (byte)((uint)pbVar8[1] * 0x96 + (uint)pbVar8[2] * 0x1d + (uint)*pbVar8 * 0x4d
                            >> 8);
            pbVar8 = pbVar8 + 3;
            pbVar5 = pbVar5 + 1;
          }
          break;
        case 0x10:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            bVar1 = pbVar8[1];
            bVar2 = pbVar8[2];
            bVar3 = *pbVar8;
            pbVar5[1] = 0xff;
            *pbVar5 = (byte)((uint)bVar1 * 0x96 + (uint)bVar2 * 0x1d + (uint)bVar3 * 0x4d >> 8);
            pbVar8 = pbVar8 + 3;
            pbVar5 = pbVar5 + 2;
          }
          break;
        case 0x12:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = *pbVar8;
            pbVar5[1] = pbVar8[1];
            pbVar5[2] = pbVar8[2];
            pbVar5[3] = 0xff;
            pbVar8 = pbVar8 + 3;
            pbVar5 = pbVar5 + 4;
          }
          break;
        case 0x17:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = (byte)((uint)pbVar8[1] * 0x96 + (uint)pbVar8[2] * 0x1d + (uint)*pbVar8 * 0x4d
                            >> 8);
            pbVar8 = pbVar8 + 4;
            pbVar5 = pbVar5 + 1;
          }
          break;
        case 0x18:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = (byte)((uint)pbVar8[1] * 0x96 + (uint)pbVar8[2] * 0x1d + (uint)*pbVar8 * 0x4d
                            >> 8);
            pbVar5[1] = pbVar8[3];
            pbVar8 = pbVar8 + 4;
            pbVar5 = pbVar5 + 2;
          }
          break;
        case 0x19:
          for (iVar7 = unaff_EBX + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
            *pbVar5 = *pbVar8;
            pbVar5[1] = pbVar8[1];
            pbVar5[2] = pbVar8[2];
            pbVar8 = pbVar8 + 4;
            pbVar5 = pbVar5 + 3;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < in_stack_00000070);
    }
    if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return lVar4;
}





// 函数: void FUN_18041f22b(void)
void FUN_18041f22b(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int unaff_EBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  byte *pbVar6;
  int in_R11D;
  int unaff_R12D;
  int64_t unaff_R15;
  
  do {
    pbVar6 = (byte *)((uint64_t)(uint)(in_R11D * unaff_R12D * unaff_EBX) + unaff_RSI);
    pbVar4 = (byte *)((uint64_t)(uint)(in_R11D * unaff_EBP * unaff_EBX) + unaff_R15);
    switch(unaff_R12D * 8 + -10 + unaff_EBP) {
    case 0:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        *pbVar4 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        pbVar4[1] = 0xff;
        pbVar4 = pbVar4 + 2;
      }
      break;
    case 1:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        bVar1 = *pbVar6;
        pbVar4[2] = bVar1;
        pbVar6 = pbVar6 + 1;
        pbVar4[1] = bVar1;
        *pbVar4 = bVar1;
        pbVar4 = pbVar4 + 3;
      }
      break;
    case 2:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        bVar1 = *pbVar6;
        pbVar4[2] = bVar1;
        pbVar6 = pbVar6 + 1;
        pbVar4[1] = bVar1;
        *pbVar4 = bVar1;
        pbVar4[3] = 0xff;
        pbVar4 = pbVar4 + 4;
      }
      break;
    case 7:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        *pbVar4 = *pbVar6;
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 2;
      }
      break;
    case 9:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        bVar1 = *pbVar6;
        pbVar4[2] = bVar1;
        pbVar6 = pbVar6 + 2;
        pbVar4[1] = bVar1;
        *pbVar4 = bVar1;
        pbVar4 = pbVar4 + 3;
      }
      break;
    case 10:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        bVar1 = *pbVar6;
        pbVar4[2] = bVar1;
        pbVar4[1] = bVar1;
        *pbVar4 = bVar1;
        pbVar4[3] = pbVar6[1];
        pbVar6 = pbVar6 + 2;
        pbVar4 = pbVar4 + 4;
      }
      break;
    case 0xf:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        *pbVar4 = (byte)((uint)pbVar6[1] * 0x96 + (uint)pbVar6[2] * 0x1d + (uint)*pbVar6 * 0x4d >> 8
                        );
        pbVar6 = pbVar6 + 3;
        pbVar4 = pbVar4 + 1;
      }
      break;
    case 0x10:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        bVar1 = pbVar6[1];
        bVar2 = pbVar6[2];
        bVar3 = *pbVar6;
        pbVar4[1] = 0xff;
        *pbVar4 = (byte)((uint)bVar1 * 0x96 + (uint)bVar2 * 0x1d + (uint)bVar3 * 0x4d >> 8);
        pbVar6 = pbVar6 + 3;
        pbVar4 = pbVar4 + 2;
      }
      break;
    case 0x12:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        *pbVar4 = *pbVar6;
        pbVar4[1] = pbVar6[1];
        pbVar4[2] = pbVar6[2];
        pbVar4[3] = 0xff;
        pbVar6 = pbVar6 + 3;
        pbVar4 = pbVar4 + 4;
      }
      break;
    case 0x17:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        *pbVar4 = (byte)((uint)pbVar6[1] * 0x96 + (uint)pbVar6[2] * 0x1d + (uint)*pbVar6 * 0x4d >> 8
                        );
        pbVar6 = pbVar6 + 4;
        pbVar4 = pbVar4 + 1;
      }
      break;
    case 0x18:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        *pbVar4 = (byte)((uint)pbVar6[1] * 0x96 + (uint)pbVar6[2] * 0x1d + (uint)*pbVar6 * 0x4d >> 8
                        );
        pbVar4[1] = pbVar6[3];
        pbVar6 = pbVar6 + 4;
        pbVar4 = pbVar4 + 2;
      }
      break;
    case 0x19:
      for (iVar5 = unaff_EBX + -1; -1 < iVar5; iVar5 = iVar5 + -1) {
        *pbVar4 = *pbVar6;
        pbVar4[1] = pbVar6[1];
        pbVar4[2] = pbVar6[2];
        pbVar6 = pbVar6 + 4;
        pbVar4 = pbVar4 + 3;
      }
    }
    in_R11D = in_R11D + 1;
  } while (in_R11D < unaff_EDI);
  if (unaff_RSI == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_18041f569(void)
void FUN_18041f569(void)

{
  int64_t unaff_RSI;
  
  if (unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_18041f5a0(uint64_t param_1,char param_2,char *param_3,int64_t param_4)
void FUN_18041f5a0(uint64_t param_1,char param_2,char *param_3,int64_t param_4)

{
  char in_AL;
  char unaff_SPL;
  char unaff_BPL;
  int64_t unaff_RSI;
  char unaff_DIL;
  char *in_R10;
  int64_t in_R11;
  int64_t unaff_R14;
  
  in_R10[unaff_RSI * 8 + -0xd21ffbf] = in_R10[unaff_RSI * 8 + -0xd21ffbf] + unaff_BPL;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *in_R10 = *in_R10 + param_2;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *param_3 = *param_3 + unaff_DIL;
  *(char *)(unaff_R14 + -0xd) = *(char *)(unaff_R14 + -0xd) + unaff_BPL;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(unaff_R14 + 0x530041f3) = *(char *)(unaff_R14 + 0x530041f3) + unaff_SPL;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(in_R11 + -0xb) = *(char *)(in_R11 + -0xb) + param_2;
  *(char *)(param_4 + -0x32ffbe0c) = *(char *)(param_4 + -0x32ffbe0c) + in_AL;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



uint64_t FUN_18041f610(int64_t param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint64_t uVar5;
  int16_t *puVar6;
  uint64_t uVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  uint64_t uVar11;
  int *piVar12;
  int iVar13;
  uint64_t uVar14;
  int iVar3;
  uint64_t uVar4;
  
  uVar4 = 0;
  uVar7 = uVar4;
  uVar11 = uVar4;
  uVar14 = uVar4;
  do {
    uVar9 = *param_2;
    if (0 < (int)uVar9) {
      uVar14 = (uint64_t)((int)uVar14 + uVar9);
      pcVar8 = (char *)(param_1 + 0x500 + uVar11);
      for (uVar5 = (uint64_t)uVar9; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = (char)uVar7 + '\x01';
        pcVar8 = pcVar8 + 1;
      }
      uVar11 = uVar11 + uVar9;
    }
    uVar9 = (int)uVar7 + 1;
    uVar7 = (uint64_t)uVar9;
    param_2 = param_2 + 1;
  } while ((int)uVar9 < 0x10);
  pbVar1 = (byte *)(param_1 + 0x500);
  uVar9 = 1;
  piVar12 = (int *)(param_1 + 0x608);
  *(int8_t *)((int64_t)(int)uVar14 + 0x500 + param_1) = 0;
  iVar13 = 0xf;
  uVar7 = uVar4;
  uVar11 = uVar4;
  pbVar10 = pbVar1;
  do {
    uVar2 = (uint)uVar4;
    piVar12[0x12] = (int)uVar7 - uVar2;
    if (*pbVar10 == uVar9) {
      puVar6 = (int16_t *)(param_1 + 0x200 + uVar11 * 2);
      do {
        uVar11 = uVar11 + 1;
        *puVar6 = (short)uVar4;
        puVar6 = puVar6 + 1;
        pbVar10 = pbVar1 + uVar11;
        iVar3 = (int)uVar4;
        uVar2 = iVar3 + 1;
        uVar4 = (uint64_t)uVar2;
        uVar7 = (uint64_t)((int)uVar7 + 1);
      } while (pbVar1[uVar11] == uVar9);
      if (1 << ((byte)uVar9 & 0x1f) <= iVar3) {
        return 0;
      }
    }
    uVar4 = (uint64_t)(uVar2 * 2);
    *piVar12 = uVar2 << ((byte)iVar13 & 0x1f);
    uVar9 = uVar9 + 1;
    piVar12 = piVar12 + 1;
    iVar13 = iVar13 + -1;
    if (iVar13 < 0) {
      *(int32_t *)(param_1 + 0x604 + (int64_t)(int)uVar9 * 4) = 0xffffffff;
                    // WARNING: Subroutine does not return
      memset(param_1,0xff,0x200);
    }
  } while( true );
}





// 函数: void FUN_18041f7a0(int64_t *param_1)
void FUN_18041f7a0(int64_t *param_1)

{
  int8_t *puVar1;
  int64_t lVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  
  do {
    if (*(int *)((int64_t)param_1 + 0x482c) == 0) {
      lVar2 = *param_1;
      pbVar3 = *(byte **)(lVar2 + 0xb8);
      if (pbVar3 < *(byte **)(lVar2 + 0xc0)) {
        bVar6 = *pbVar3;
        *(byte **)(lVar2 + 0xb8) = pbVar3 + 1;
      }
      else if (*(int *)(lVar2 + 0x30) == 0) {
        bVar6 = 0;
      }
      else {
        RenderingGeometryProcessor0(lVar2);
        bVar6 = **(byte **)(lVar2 + 0xb8);
        *(byte **)(lVar2 + 0xb8) = *(byte **)(lVar2 + 0xb8) + 1;
      }
      uVar8 = (uint)bVar6;
      if (uVar8 == 0xff) {
        lVar2 = *param_1;
        pcVar4 = *(char **)(lVar2 + 0xb8);
        if (pcVar4 < *(char **)(lVar2 + 0xc0)) {
          cVar7 = *pcVar4;
          *(char **)(lVar2 + 0xb8) = pcVar4 + 1;
        }
        else if (*(int *)(lVar2 + 0x30) == 0) {
          cVar7 = '\0';
        }
        else {
          RenderingGeometryProcessor0(lVar2);
          cVar7 = **(char **)(lVar2 + 0xb8);
          *(char **)(lVar2 + 0xb8) = *(char **)(lVar2 + 0xb8) + 1;
        }
        while (cVar7 == -1) {
          lVar2 = *param_1;
          pcVar4 = *(char **)(lVar2 + 0xb8);
          if (pcVar4 < *(char **)(lVar2 + 0xc0)) {
            cVar7 = *pcVar4;
            *(char **)(lVar2 + 0xb8) = pcVar4 + 1;
          }
          else if (*(int *)(lVar2 + 0x30) == 0) {
            cVar7 = '\0';
          }
          else {
            puVar1 = (int8_t *)(lVar2 + 0x38);
            iVar5 = (**(code **)(lVar2 + 0x10))
                              (*(uint64_t *)(lVar2 + 0x28),puVar1,*(int32_t *)(lVar2 + 0x34));
            *(int8_t **)(lVar2 + 0xb8) = puVar1;
            if (iVar5 == 0) {
              *(int32_t *)(lVar2 + 0x30) = 0;
              *(int64_t *)(lVar2 + 0xc0) = lVar2 + 0x39;
              *puVar1 = 0;
            }
            else {
              *(int64_t *)(lVar2 + 0xc0) = lVar2 + 0x38 + (int64_t)iVar5;
            }
            cVar7 = **(char **)(lVar2 + 0xb8);
            *(char **)(lVar2 + 0xb8) = *(char **)(lVar2 + 0xb8) + 1;
          }
        }
        if (cVar7 != '\0') {
          *(char *)(param_1 + 0x905) = cVar7;
          *(int32_t *)((int64_t)param_1 + 0x482c) = 1;
          return;
        }
      }
    }
    else {
      uVar8 = 0;
    }
    *(uint *)(param_1 + 0x904) =
         *(uint *)(param_1 + 0x904) |
         uVar8 << (0x18U - (char)*(int *)((int64_t)param_1 + 0x4824) & 0x1f);
    iVar5 = *(int *)((int64_t)param_1 + 0x4824) + 8;
    *(int *)((int64_t)param_1 + 0x4824) = iVar5;
    if (0x18 < iVar5) {
      return;
    }
  } while( true );
}



uint64_t FUN_18041f970(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x4824) < 0x10) && (FUN_18041f7a0(), *(int *)(param_1 + 0x4824) < 0x10)) {
    FUN_18041f7a0(param_1);
  }
  uVar4 = *(uint *)(param_1 + 0x4820);
  bVar3 = *(byte *)((uint64_t)(uVar4 >> 0x17) + param_3);
  if (bVar3 == 0xff) {
    puVar1 = (uint *)(param_3 + 0x62c);
    iVar6 = 10;
    uVar2 = *puVar1;
    while (uVar2 <= uVar4 >> 0x10) {
      iVar6 = iVar6 + 1;
      puVar1 = puVar1 + 1;
      uVar2 = *puVar1;
    }
    iVar5 = *(int *)(param_1 + 0x4824);
    if (iVar6 == 0x11) {
      *(int *)(param_1 + 0x4824) = iVar5 + -0x10;
    }
    else if (iVar6 <= iVar5) {
      *(int *)(param_1 + 0x4824) = iVar5 - iVar6;
      *(uint *)(param_1 + 0x4820) = uVar4 << ((byte)iVar6 & 0x1f);
      goto LAB_18041fa9a;
    }
  }
  else {
    bVar3 = *(byte *)((uint64_t)bVar3 + 0x500 + param_3);
    if ((int)(uint)bVar3 <= *(int *)(param_1 + 0x4824)) {
      *(uint *)(param_1 + 0x4820) = uVar4 << (bVar3 & 0x1f);
      *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar3;
LAB_18041fa9a:
                    // WARNING: Subroutine does not return
      memset(param_2,0,0x80);
    }
  }
  return 0;
}



uint64_t FUN_18041fdb0(int64_t param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  
  if (*(int *)(param_1 + 0x4838) == 0) {
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      FUN_18041f7a0();
    }
    if (*(int *)(param_1 + 0x483c) == 0) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,0x80);
    }
    iVar2 = *(int *)(param_1 + 0x4824);
    if (iVar2 < 1) {
      FUN_18041f7a0(param_1);
      iVar2 = *(int *)(param_1 + 0x4824);
    }
    iVar1 = *(int *)(param_1 + 0x4820);
    *(int *)(param_1 + 0x4820) = iVar1 * 2;
    *(int *)(param_1 + 0x4824) = iVar2 + -1;
    if (iVar1 < 0) {
      *param_2 = *param_2 + (1 << ((byte)*(int32_t *)(param_1 + 0x4840) & 0x1f));
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}





