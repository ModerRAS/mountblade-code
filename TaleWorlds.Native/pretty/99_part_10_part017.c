#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part017.c - 2 个函数

// 函数: void FUN_1806ac419(void)
void FUN_1806ac419(void)

{
  uint64_t *in_RAX;
  uint64_t unaff_RDI;
  
  *in_RAX = unaff_RDI;
  in_RAX[1] = unaff_RDI;
  return;
}



uint64_t * FUN_1806ac430(uint64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1806ac530(param_1,param_3);
  *param_2 = &unknown_var_2232_ptr;
  if (lVar2 != 0) {
    uVar1 = *(uint64_t *)(lVar2 + 0x10);
    param_2[1] = *(uint64_t *)(lVar2 + 8);
    param_2[2] = uVar1;
    *(int32_t *)(param_2 + 3) = *(int32_t *)(lVar2 + 0x18);
    *(int32_t *)((longlong)param_2 + 0x1c) = *(int32_t *)(lVar2 + 0x1c);
    *(int32_t *)(param_2 + 4) = *(int32_t *)(lVar2 + 0x20);
    *(int32_t *)((longlong)param_2 + 0x24) = *(int32_t *)(lVar2 + 0x24);
    *(int32_t *)(param_2 + 5) = *(int32_t *)(lVar2 + 0x28);
    *(int32_t *)((longlong)param_2 + 0x2c) = *(int32_t *)(lVar2 + 0x2c);
    *(int32_t *)(param_2 + 6) = *(int32_t *)(lVar2 + 0x30);
    param_2[7] = *(uint64_t *)(lVar2 + 0x38);
    param_2[8] = *(uint64_t *)(lVar2 + 0x40);
    *(int32_t *)(param_2 + 9) = *(int32_t *)(lVar2 + 0x48);
    *(int32_t *)((longlong)param_2 + 0x4c) = *(int32_t *)(lVar2 + 0x4c);
    *(int32_t *)(param_2 + 10) = *(int32_t *)(lVar2 + 0x50);
    param_2[0xb] = *(uint64_t *)(lVar2 + 0x58);
    param_2[0xc] = *(uint64_t *)(lVar2 + 0x60);
    *(int8_t *)(param_2 + 0xd) = *(int8_t *)(lVar2 + 0x68);
    *(int8_t *)((longlong)param_2 + 0x69) = *(int8_t *)(lVar2 + 0x69);
    *(int8_t *)(param_2 + 0xe) = 1;
    return param_2;
  }
  param_2[1] = &system_buffer_ptr;
  param_2[2] = &system_buffer_ptr;
  param_2[3] = 0xffffffffffffffff;
  param_2[4] = 0xffffffffffffffff;
  param_2[5] = 0;
  *(int32_t *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(int32_t *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(int16_t *)(param_2 + 0xd) = 0;
  *(int8_t *)(param_2 + 0xe) = 0;
  return param_2;
}



uint64_t FUN_1806ac530(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  void *puVar7;
  longlong lVar8;
  void *puVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar4 = FUN_1806ae680(param_1 + 8);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar4 * 4);
    if (uVar4 != 0xffffffff) {
      puVar7 = &system_buffer_ptr;
      if ((void *)*param_2 != (void *)0x0) {
        puVar7 = (void *)*param_2;
      }
      do {
        uVar10 = (ulonglong)uVar4;
        lVar1 = *(longlong *)(param_1 + 0x10) + uVar10 * 0x18;
        pcVar5 = *(char **)(*(longlong *)(param_1 + 0x10) + uVar10 * 0x18);
        pcVar6 = "";
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5;
        }
        lVar8 = (longlong)puVar7 - (longlong)pcVar6;
        do {
          cVar2 = *pcVar6;
          cVar3 = pcVar6[lVar8];
          if (cVar2 != cVar3) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        if (cVar2 == cVar3) {
          puVar9 = &system_buffer_ptr;
          if ((void *)param_2[1] != (void *)0x0) {
            puVar9 = (void *)param_2[1];
          }
          pcVar5 = "";
          if (*(char **)(lVar1 + 8) != (char *)0x0) {
            pcVar5 = *(char **)(lVar1 + 8);
          }
          lVar8 = (longlong)puVar9 - (longlong)pcVar5;
          do {
            cVar2 = *pcVar5;
            cVar3 = pcVar5[lVar8];
            if (cVar2 != cVar3) break;
            pcVar5 = pcVar5 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) {
            if (uVar4 == 0xffffffff) {
              return 0;
            }
            if (lVar1 == 0) {
              return 0;
            }
            return *(uint64_t *)(lVar1 + 0x10);
          }
        }
        uVar4 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar10 * 4);
      } while (uVar4 != 0xffffffff);
    }
  }
  return 0;
}



uint64_t FUN_1806ac650(longlong param_1,uint64_t *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint64_t *puVar12;
  
  pbVar5 = (byte *)*param_2;
  pbVar6 = (byte *)param_2[1];
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar11 = 0x1505;
    uVar7 = 0x1505;
    uVar9 = 0x1505;
    bVar2 = *pbVar5;
    pbVar1 = pbVar5;
    while (bVar2 != 0) {
      pbVar1 = pbVar1 + 1;
      uVar9 = (ulonglong)((int)uVar9 * 0x21 ^ (uint)bVar2);
      bVar2 = *pbVar1;
    }
    bVar2 = *pbVar6;
    pbVar1 = pbVar6;
    while (bVar2 != 0) {
      pbVar1 = pbVar1 + 1;
      uVar7 = uVar7 * 0x21 ^ (uint)bVar2;
      bVar2 = *pbVar1;
    }
    bVar2 = *param_3;
    pbVar1 = param_3;
    while (bVar2 != 0) {
      pbVar1 = pbVar1 + 1;
      uVar11 = uVar11 * 0x21 ^ (uint)bVar2;
      bVar2 = *pbVar1;
    }
    uVar11 = *(uint *)(*(longlong *)(param_1 + 0x58) +
                      ((uVar9 ^ uVar7 ^ (ulonglong)uVar11) &
                      (ulonglong)(*(int *)(param_1 + 100) - 1)) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        puVar12 = (uint64_t *)((ulonglong)uVar11 * 0x20 + *(longlong *)(param_1 + 0x48));
        pcVar8 = "";
        if ((char *)*puVar12 != (char *)0x0) {
          pcVar8 = (char *)*puVar12;
        }
        lVar10 = (longlong)pbVar5 - (longlong)pcVar8;
        do {
          cVar3 = *pcVar8;
          cVar4 = pcVar8[lVar10];
          if (cVar3 != cVar4) break;
          pcVar8 = pcVar8 + 1;
        } while (cVar4 != '\0');
        if (cVar3 == cVar4) {
          pcVar8 = "";
          if ((char *)puVar12[1] != (char *)0x0) {
            pcVar8 = (char *)puVar12[1];
          }
          lVar10 = (longlong)pbVar6 - (longlong)pcVar8;
          do {
            cVar3 = *pcVar8;
            cVar4 = pcVar8[lVar10];
            if (cVar3 != cVar4) break;
            pcVar8 = pcVar8 + 1;
          } while (cVar4 != '\0');
          if (cVar3 == cVar4) {
            pcVar8 = "";
            if ((char *)puVar12[2] != (char *)0x0) {
              pcVar8 = (char *)puVar12[2];
            }
            lVar10 = (longlong)param_3 - (longlong)pcVar8;
            do {
              cVar3 = *pcVar8;
              cVar4 = pcVar8[lVar10];
              if (cVar3 != cVar4) break;
              pcVar8 = pcVar8 + 1;
            } while (cVar4 != '\0');
            if (cVar3 == cVar4) {
              if (uVar11 == 0xffffffff) {
                return 0;
              }
              if (puVar12 == (uint64_t *)0x0) {
                return 0;
              }
              return puVar12[3];
            }
          }
        }
        uVar11 = *(uint *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar11 * 4);
      } while (uVar11 != 0xffffffff);
    }
  }
  return 0;
}



uint64_t *
FUN_1806ac810(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1806ac650(param_1,param_3,param_4);
  *param_2 = &unknown_var_3704_ptr;
  if (lVar2 != 0) {
    uVar1 = *(uint64_t *)(lVar2 + 0x10);
    param_2[1] = *(uint64_t *)(lVar2 + 8);
    param_2[2] = uVar1;
    *(int32_t *)(param_2 + 3) = *(int32_t *)(lVar2 + 0x18);
    param_2[4] = *(uint64_t *)(lVar2 + 0x20);
    param_2[5] = *(uint64_t *)(lVar2 + 0x28);
    *(int32_t *)(param_2 + 6) = *(int32_t *)(lVar2 + 0x30);
    uVar1 = *(uint64_t *)(lVar2 + 0x40);
    param_2[7] = *(uint64_t *)(lVar2 + 0x38);
    param_2[8] = uVar1;
    *(int32_t *)(param_2 + 9) = *(int32_t *)(lVar2 + 0x48);
    *(int32_t *)((longlong)param_2 + 0x4c) = *(int32_t *)(lVar2 + 0x4c);
    *(int32_t *)(param_2 + 10) = *(int32_t *)(lVar2 + 0x50);
    *(int32_t *)((longlong)param_2 + 0x54) = *(int32_t *)(lVar2 + 0x54);
    *(int8_t *)(param_2 + 0xb) = 1;
    return param_2;
  }
  param_2[1] = &system_buffer_ptr;
  param_2[2] = &system_buffer_ptr;
  param_2[4] = &system_buffer_ptr;
  param_2[5] = &system_buffer_ptr;
  *(int32_t *)(param_2 + 3) = 0xffffffff;
  *(int32_t *)(param_2 + 6) = 0xffffffff;
  param_2[7] = &system_buffer_ptr;
  param_2[8] = &system_buffer_ptr;
  *(int32_t *)(param_2 + 9) = 0;
  param_2[10] = 0;
  *(int32_t *)((longlong)param_2 + 0x4c) = 0xffffffff;
  *(int8_t *)(param_2 + 0xb) = 0;
  return param_2;
}



uint64_t * FUN_1806ac8e0(longlong param_1,uint64_t *param_2,uint param_3,uint64_t param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  
  if ((((int)param_3 < 0) || (*(uint *)(param_1 + 0x80) <= param_3)) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_3 * 8), lVar2 == 0)) {
    *param_2 = &unknown_var_3704_ptr;
  }
  else {
    lVar2 = FUN_1806ac650(param_1,lVar2 + 8,param_4);
    *param_2 = &unknown_var_3704_ptr;
    if (lVar2 != 0) {
      uVar1 = *(uint64_t *)(lVar2 + 0x10);
      param_2[1] = *(uint64_t *)(lVar2 + 8);
      param_2[2] = uVar1;
      *(int32_t *)(param_2 + 3) = *(int32_t *)(lVar2 + 0x18);
      param_2[4] = *(uint64_t *)(lVar2 + 0x20);
      param_2[5] = *(uint64_t *)(lVar2 + 0x28);
      *(int32_t *)(param_2 + 6) = *(int32_t *)(lVar2 + 0x30);
      uVar1 = *(uint64_t *)(lVar2 + 0x40);
      param_2[7] = *(uint64_t *)(lVar2 + 0x38);
      param_2[8] = uVar1;
      *(int32_t *)(param_2 + 9) = *(int32_t *)(lVar2 + 0x48);
      *(int32_t *)((longlong)param_2 + 0x4c) = *(int32_t *)(lVar2 + 0x4c);
      *(int32_t *)(param_2 + 10) = *(int32_t *)(lVar2 + 0x50);
      *(int32_t *)((longlong)param_2 + 0x54) = *(int32_t *)(lVar2 + 0x54);
      *(int8_t *)(param_2 + 0xb) = 1;
      return param_2;
    }
  }
  param_2[1] = &system_buffer_ptr;
  param_2[2] = &system_buffer_ptr;
  *(int32_t *)(param_2 + 3) = 0xffffffff;
  param_2[4] = &system_buffer_ptr;
  param_2[5] = &system_buffer_ptr;
  *(int32_t *)(param_2 + 6) = 0xffffffff;
  param_2[7] = &system_buffer_ptr;
  param_2[8] = &system_buffer_ptr;
  *(int32_t *)(param_2 + 9) = 0;
  *(int32_t *)((longlong)param_2 + 0x4c) = 0xffffffff;
  param_2[10] = 0;
  *(int8_t *)(param_2 + 0xb) = 0;
  return param_2;
}



uint64_t * FUN_1806ac9d0(uint64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1806aca90(param_1,param_3);
  *param_2 = &unknown_var_3712_ptr;
  if (lVar2 != 0) {
    uVar1 = *(uint64_t *)(lVar2 + 0x10);
    param_2[1] = *(uint64_t *)(lVar2 + 8);
    param_2[2] = uVar1;
    *(int32_t *)(param_2 + 3) = *(int32_t *)(lVar2 + 0x18);
    uVar1 = *(uint64_t *)(lVar2 + 0x28);
    param_2[4] = *(uint64_t *)(lVar2 + 0x20);
    param_2[5] = uVar1;
    *(int32_t *)(param_2 + 6) = *(int32_t *)(lVar2 + 0x30);
    param_2[7] = *(uint64_t *)(lVar2 + 0x38);
    param_2[8] = *(uint64_t *)(lVar2 + 0x40);
    *(int32_t *)(param_2 + 9) = *(int32_t *)(lVar2 + 0x48);
    param_2[10] = *(uint64_t *)(lVar2 + 0x50);
    param_2[0xb] = *(uint64_t *)(lVar2 + 0x58);
    *(int8_t *)(param_2 + 0xc) = 1;
    return param_2;
  }
  param_2[1] = &system_buffer_ptr;
  param_2[2] = &system_buffer_ptr;
  *(int32_t *)(param_2 + 3) = 0xffffffff;
  param_2[4] = &system_buffer_ptr;
  param_2[5] = &system_buffer_ptr;
  *(int32_t *)(param_2 + 6) = 0xffffffff;
  param_2[7] = 0;
  param_2[8] = 0;
  *(int32_t *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(int8_t *)(param_2 + 0xc) = 0;
  return param_2;
}



uint64_t FUN_1806aca90(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  void *puVar7;
  longlong lVar8;
  void *puVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_1 + 0xd4) != 0) {
    uVar4 = FUN_1806ae680(param_1 + 0xa0);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar4 * 4);
    if (uVar4 != 0xffffffff) {
      puVar7 = &system_buffer_ptr;
      if ((void *)*param_2 != (void *)0x0) {
        puVar7 = (void *)*param_2;
      }
      do {
        uVar10 = (ulonglong)uVar4;
        lVar1 = *(longlong *)(param_1 + 0xa8) + uVar10 * 0x18;
        pcVar5 = *(char **)(*(longlong *)(param_1 + 0xa8) + uVar10 * 0x18);
        pcVar6 = "";
        if (pcVar5 != (char *)0x0) {
          pcVar6 = pcVar5;
        }
        lVar8 = (longlong)puVar7 - (longlong)pcVar6;
        do {
          cVar2 = *pcVar6;
          cVar3 = pcVar6[lVar8];
          if (cVar2 != cVar3) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        if (cVar2 == cVar3) {
          puVar9 = &system_buffer_ptr;
          if ((void *)param_2[1] != (void *)0x0) {
            puVar9 = (void *)param_2[1];
          }
          pcVar5 = "";
          if (*(char **)(lVar1 + 8) != (char *)0x0) {
            pcVar5 = *(char **)(lVar1 + 8);
          }
          lVar8 = (longlong)puVar9 - (longlong)pcVar5;
          do {
            cVar2 = *pcVar5;
            cVar3 = pcVar5[lVar8];
            if (cVar2 != cVar3) break;
            pcVar5 = pcVar5 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) {
            if (uVar4 == 0xffffffff) {
              return 0;
            }
            if (lVar1 == 0) {
              return 0;
            }
            return *(uint64_t *)(lVar1 + 0x10);
          }
        }
        uVar4 = *(uint *)(*(longlong *)(param_1 + 0xb0) + uVar10 * 4);
      } while (uVar4 != 0xffffffff);
    }
  }
  return 0;
}



ulonglong FUN_1806acce0(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint64_t uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar3 = (**(code **)(*param_1 + 0x40))();
  if (uVar3 < param_4) {
    param_4 = uVar3;
  }
  uVar7 = uVar3 - param_4;
  if (param_3 < uVar3 - param_4) {
    uVar7 = param_3;
  }
  uVar6 = 0;
  uVar4 = uVar6;
  if (param_4 != 0) {
    do {
      uVar3 = param_4 - 1;
      if (*(longlong *)(param_1[0xf] + uVar4 * 8) == 0) {
        uVar3 = param_4;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      param_4 = uVar3;
    } while (uVar3 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar7 != 0) {
    do {
      if (uVar3 <= (uint)uVar4) {
        return uVar6;
      }
      lVar1 = *(longlong *)(param_1[0xf] + uVar4 * 8);
      if (lVar1 != 0) {
        uVar2 = *(uint64_t *)(lVar1 + 0x10);
        lVar5 = uVar6 * 0x70 + param_2;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        *(uint64_t *)(lVar5 + 8) = *(uint64_t *)(lVar1 + 8);
        *(uint64_t *)(lVar5 + 0x10) = uVar2;
        *(int32_t *)(lVar5 + 0x18) = *(int32_t *)(lVar1 + 0x18);
        *(int32_t *)(lVar5 + 0x1c) = *(int32_t *)(lVar1 + 0x1c);
        *(int32_t *)(lVar5 + 0x20) = *(int32_t *)(lVar1 + 0x20);
        *(int32_t *)(lVar5 + 0x24) = *(int32_t *)(lVar1 + 0x24);
        *(int32_t *)(lVar5 + 0x28) = *(int32_t *)(lVar1 + 0x28);
        *(int32_t *)(lVar5 + 0x2c) = *(int32_t *)(lVar1 + 0x2c);
        *(int32_t *)(lVar5 + 0x30) = *(int32_t *)(lVar1 + 0x30);
        *(uint64_t *)(lVar5 + 0x38) = *(uint64_t *)(lVar1 + 0x38);
        *(uint64_t *)(lVar5 + 0x40) = *(uint64_t *)(lVar1 + 0x40);
        *(int32_t *)(lVar5 + 0x48) = *(int32_t *)(lVar1 + 0x48);
        *(int32_t *)(lVar5 + 0x4c) = *(int32_t *)(lVar1 + 0x4c);
        *(int32_t *)(lVar5 + 0x50) = *(int32_t *)(lVar1 + 0x50);
        *(uint64_t *)(lVar5 + 0x58) = *(uint64_t *)(lVar1 + 0x58);
        *(uint64_t *)(lVar5 + 0x60) = *(uint64_t *)(lVar1 + 0x60);
        *(int8_t *)(lVar5 + 0x68) = *(int8_t *)(lVar1 + 0x68);
        *(int8_t *)(lVar5 + 0x69) = *(int8_t *)(lVar1 + 0x69);
      }
      uVar4 = (ulonglong)((uint)uVar4 + 1);
    } while ((uint)uVar6 < uVar7);
  }
  return uVar6;
}



uint64_t * FUN_1806ad620(longlong param_1,uint64_t *param_2,uint64_t param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1806ac530(param_1,param_3);
  if (lVar2 == 0) {
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    lVar2 = FUN_1806ad710(param_1,param_3);
  }
  *param_2 = &unknown_var_2232_ptr;
  uVar1 = *(uint64_t *)(lVar2 + 0x10);
  param_2[1] = *(uint64_t *)(lVar2 + 8);
  param_2[2] = uVar1;
  *(int32_t *)(param_2 + 3) = *(int32_t *)(lVar2 + 0x18);
  *(int32_t *)((longlong)param_2 + 0x1c) = *(int32_t *)(lVar2 + 0x1c);
  *(int32_t *)(param_2 + 4) = *(int32_t *)(lVar2 + 0x20);
  *(int32_t *)((longlong)param_2 + 0x24) = *(int32_t *)(lVar2 + 0x24);
  *(int32_t *)(param_2 + 5) = *(int32_t *)(lVar2 + 0x28);
  *(int32_t *)((longlong)param_2 + 0x2c) = *(int32_t *)(lVar2 + 0x2c);
  *(int32_t *)(param_2 + 6) = *(int32_t *)(lVar2 + 0x30);
  param_2[7] = *(uint64_t *)(lVar2 + 0x38);
  param_2[8] = *(uint64_t *)(lVar2 + 0x40);
  *(int32_t *)(param_2 + 9) = *(int32_t *)(lVar2 + 0x48);
  *(int32_t *)((longlong)param_2 + 0x4c) = *(int32_t *)(lVar2 + 0x4c);
  *(int32_t *)(param_2 + 10) = *(int32_t *)(lVar2 + 0x50);
  param_2[0xb] = *(uint64_t *)(lVar2 + 0x58);
  param_2[0xc] = *(uint64_t *)(lVar2 + 0x60);
  *(int8_t *)(param_2 + 0xd) = *(int8_t *)(lVar2 + 0x68);
  *(int8_t *)((longlong)param_2 + 0x69) = *(int8_t *)(lVar2 + 0x69);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1806ad710(longlong param_1,uint64_t *param_2,uint param_3)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int iVar5;
  char acStackX_18 [8];
  uint64_t uStackX_20;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  void *puStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint uStack_80;
  uint64_t uStack_7c;
  int32_t uStack_74;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int16_t uStack_30;
  
  if ((((int)param_3 < 0) || (*(uint *)(param_1 + 0x80) <= param_3)) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_3 * 8), lVar2 == 0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x18))
                      (*(longlong **)(param_1 + 0x98),param_2[1],acStackX_18);
    uStack_a8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x18))
                          (*(longlong **)(param_1 + 0x98),*param_2,&uStackX_20);
    uVar3 = 0;
    uStack_a0 = uVar1;
    if (*(int *)(param_1 + 0x80) <= (int)param_3) {
      uStackX_20 = 0;
      do {
        if (*(uint *)(param_1 + 0x80) < (*(uint *)(param_1 + 0x84) & 0x7fffffff)) {
          *(uint64_t *)(*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 0x80) * 8)
               = 0;
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        }
        else {
          FUN_1806ade90(param_1 + 0x78,&uStackX_20);
        }
      } while (*(int *)(param_1 + 0x80) <= (int)param_3);
    }
    lVar2 = (**(code **)(*_DAT_180be0050 + 8))
                      (_DAT_180be0050,0xa0,&unknown_var_5520_ptr,&unknown_var_5360_ptr,0x293);
    if (lVar2 != 0) {
      puStack_98 = &unknown_var_2232_ptr;
      uStack_90 = uStack_a8;
      uStack_88 = uStack_a0;
      uStack_7c = 0xffffffffffffffff;
      uStack_74 = 0xffffffff;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_70 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_68 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_30 = 0;
      uStack_80 = param_3;
      uVar3 = FUN_1806a99d0(lVar2,&puStack_98);
    }
    lVar2 = (ulonglong)param_3 * 8;
    *(uint64_t *)(lVar2 + *(longlong *)(param_1 + 0x78)) = uVar3;
    uStack_a8 = *param_2;
    uStack_a0 = param_2[1];
    uVar1 = *(uint64_t *)(lVar2 + *(longlong *)(param_1 + 0x78));
    puVar4 = (uint64_t *)FUN_1806ab040(param_1 + 8,&uStack_a8,acStackX_18);
    if (acStackX_18[0] == '\0') {
      *puVar4 = uStack_a8;
      puVar4[1] = uStack_a0;
      puVar4[2] = uVar1;
    }
    iVar5 = *(int *)(param_1 + 0xe8);
    if (*(int *)(param_1 + 0xe8) < (int)(param_3 + 1)) {
      iVar5 = param_3 + 1;
    }
    *(int *)(param_1 + 0xe8) = iVar5;
    lVar2 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x78));
  }
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1806ad758(longlong *param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int iVar9;
  longlong unaff_RBP;
  int iVar10;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint64_t *unaff_R15;
  
  uVar4 = (**(code **)(*param_1 + 0x18))();
  uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x18))
                    (*(longlong **)(unaff_RDI + 0x98),*unaff_R15,unaff_RBP + 0x7f);
  uVar7 = 0;
  *(uint64_t *)(unaff_RBP + -0x41) = uVar4;
  *(uint64_t *)(unaff_RBP + -0x49) = uVar5;
  iVar10 = (int)unaff_RSI;
  if (*(int *)(unaff_RDI + 0x80) <= iVar10) {
    *(uint64_t *)(unaff_RBP + 0x7f) = 0;
    do {
      if (*(uint *)(unaff_RDI + 0x80) < (*(uint *)(unaff_RDI + 0x84) & 0x7fffffff)) {
        *(uint64_t *)
         (*(longlong *)(unaff_RDI + 0x78) + (ulonglong)*(uint *)(unaff_RDI + 0x80) * 8) = 0;
        *(int *)(unaff_RDI + 0x80) = *(int *)(unaff_RDI + 0x80) + 1;
      }
      else {
        FUN_1806ade90(unaff_RDI + 0x78,unaff_RBP + 0x7f);
      }
    } while (*(int *)(unaff_RDI + 0x80) <= iVar10);
  }
  lVar6 = (**(code **)(*_DAT_180be0050 + 8))
                    (_DAT_180be0050,0xa0,&unknown_var_5520_ptr,&unknown_var_5360_ptr,0x293);
  if (lVar6 != 0) {
    *(int *)(unaff_RBP + -0x21) = iVar10;
    *(void **)(unaff_RBP + -0x39) = &unknown_var_2232_ptr;
    *(uint64_t *)(unaff_RBP + -0x31) = *(uint64_t *)(unaff_RBP + -0x49);
    *(uint64_t *)(unaff_RBP + -0x29) = *(uint64_t *)(unaff_RBP + -0x41);
    *(uint64_t *)(unaff_RBP + -0x1d) = 0xffffffffffffffff;
    *(int32_t *)(unaff_RBP + -0x15) = 0xffffffff;
    *(uint64_t *)(unaff_RBP + -1) = 0;
    *(uint64_t *)(unaff_RBP + 7) = 0;
    *(uint64_t *)(unaff_RBP + -0x11) = 0;
    *(uint64_t *)(unaff_RBP + 0x1f) = 0;
    *(uint64_t *)(unaff_RBP + 0x27) = 0;
    *(int32_t *)(unaff_RBP + -9) = 0;
    *(uint64_t *)(unaff_RBP + 0xf) = 0;
    *(int32_t *)(unaff_RBP + 0x17) = 0;
    *(int16_t *)(unaff_RBP + 0x2f) = 0;
    uVar7 = FUN_1806a99d0(lVar6,unaff_RBP + -0x39);
  }
  lVar6 = unaff_RSI * 8;
  *(uint64_t *)(lVar6 + *(longlong *)(unaff_RDI + 0x78)) = uVar7;
  uVar1 = *(int32_t *)((longlong)unaff_R15 + 4);
  uVar2 = *(int32_t *)(unaff_R15 + 1);
  uVar3 = *(int32_t *)((longlong)unaff_R15 + 0xc);
  uVar4 = *(uint64_t *)(lVar6 + *(longlong *)(unaff_RDI + 0x78));
  *(int32_t *)(unaff_RBP + -0x49) = *(int32_t *)unaff_R15;
  *(int32_t *)(unaff_RBP + -0x45) = uVar1;
  *(int32_t *)(unaff_RBP + -0x41) = uVar2;
  *(int32_t *)(unaff_RBP + -0x3d) = uVar3;
  puVar8 = (uint64_t *)FUN_1806ab040(unaff_RDI + 8,unaff_RBP + -0x49,unaff_RBP + 0x77);
  if (*(char *)(unaff_RBP + 0x77) == '\0') {
    uVar5 = *(uint64_t *)(unaff_RBP + -0x41);
    *puVar8 = *(uint64_t *)(unaff_RBP + -0x49);
    puVar8[1] = uVar5;
    puVar8[2] = uVar4;
  }
  iVar9 = *(int *)(unaff_RDI + 0xe8);
  if (*(int *)(unaff_RDI + 0xe8) < iVar10 + 1) {
    iVar9 = iVar10 + 1;
  }
  *(int *)(unaff_RDI + 0xe8) = iVar9;
  return *(uint64_t *)(lVar6 + *(longlong *)(unaff_RDI + 0x78));
}






// 函数: void FUN_1806ad8ca(void)
void FUN_1806ad8ca(void)

{
  return;
}



uint64_t * FUN_1806ad8e0(longlong *param_1,uint64_t *param_2,uint param_3)

{
  longlong lVar1;
  
  if (((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x10))) &&
     (lVar1 = *(longlong *)(param_1[0xf] + (ulonglong)param_3 * 8), lVar1 != 0)) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,*(int32_t *)(lVar1 + 0x1c));
    return param_2;
  }
  *param_2 = &unknown_var_2232_ptr;
  param_2[1] = &system_buffer_ptr;
  param_2[2] = &system_buffer_ptr;
  param_2[3] = 0xffffffffffffffff;
  param_2[4] = 0xffffffffffffffff;
  param_2[5] = 0;
  *(int32_t *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(int32_t *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(int16_t *)(param_2 + 0xd) = 0;
  *(int8_t *)(param_2 + 0xe) = 0;
  return param_2;
}






