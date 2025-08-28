#include "TaleWorlds.Native.Split.h"

// 99_part_12_part008.c - 1 个函数

// 函数: void FUN_1807ccb6c(void)
void FUN_1807ccb6c(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x3e0) ^ (uint64_t)&stack0x00000000);
}



uint64_t
FUN_1807ccbe0(uint64_t param_1,uint *param_2,int64_t param_3,int param_4,int64_t param_5,
             uint param_6,uint param_7,uint param_8,byte param_9,byte param_10)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_2[1];
  if ((int)uVar2 < param_4) {
    if ((*param_2 == 0) || (*param_2 == (uint)*(ushort *)(param_5 + (int64_t)(int)(uVar2 * 2) * 2))
       ) {
      do {
        if (((param_6 & 4) != 0) && (uVar2 == param_8)) {
          param_2[1] = param_7;
          *param_2 = (uint)*(ushort *)(param_5 + (int64_t)(int)(param_7 * 2) * 2);
          uVar2 = param_7;
        }
        uVar1 = *(ushort *)(param_5 + 2 + (int64_t)(int)(uVar2 * 2) * 2);
        uVar3 = (uint)uVar1;
        if (uVar2 == param_4 - 1U) {
          param_2[3] = uVar3;
          *(int8_t *)(param_2 + 5) = 1;
          goto LAB_1807ccc3e;
        }
        if ((((param_6 & 2) != 0) && (uVar2 == param_9)) && (*(char *)(param_3 + 0xbc) == '\0')) {
          param_2[3] = (uint)uVar1;
          goto LAB_1807ccc3e;
        }
        iVar4 = (uint)*(ushort *)(param_5 + (int64_t)(int)((uVar2 + 1) * 2) * 2) -
                (uint)*(ushort *)(param_5 + (int64_t)(int)(uVar2 * 2) * 2);
        if (iVar4 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (int)((uint)*(ushort *)(param_5 + 2 + (int64_t)(int)((uVar2 + 1) * 2) * 2) *
                        0x10000 + uVar3 * -0x10000) / iVar4;
        }
        param_2[4] = uVar2;
        param_2[1] = param_2[1] + 1;
        uVar2 = param_2[1];
        param_2[2] = uVar3 * 0x10000;
      } while ((*param_2 == (uint)*(ushort *)(param_5 + (int64_t)(int)(uVar2 * 2) * 2)) &&
              ((int)uVar2 < param_4));
    }
    else {
      param_2[2] = param_2[2] + param_2[4];
    }
  }
  *param_2 = *param_2 + 1;
  param_2[3] = (int)*(short *)((int64_t)param_2 + 10);
LAB_1807ccc3e:
  *(byte *)(param_3 + 0x3c) = *(byte *)(param_3 + 0x3c) | param_10;
  return 0;
}



uint64_t
FUN_1807ccd60(uint64_t param_1,char *param_2,int64_t param_3,int64_t param_4,int64_t param_5,
             int64_t param_6)

{
  int *piVar1;
  int32_t uVar2;
  
  if (param_2[1] != '\0') {
    *(uint *)(param_4 + 0x44) = (uint)*(byte *)(param_6 + 0xc);
    *(uint *)(param_4 + 0x48) = (uint)*(byte *)(param_6 + 0xd);
    *(uint64_t *)(param_4 + 0x70) = 0x40;
    *(uint64_t *)(param_4 + 100) = 0;
    *(uint64_t *)(param_4 + 0x88) = 0x20;
    *(uint64_t *)(param_4 + 0x7c) = 0;
    *(uint64_t *)(param_4 + 0xb0) = 0x10000;
    *(int8_t *)(param_4 + 0x78) = 0;
    *(int8_t *)(param_4 + 0x90) = 0;
    *(int8_t *)(param_4 + 0xbc) = 0;
    *(int32_t *)(param_4 + 0xb8) = 0;
    if ((*(byte *)(param_3 + 0x126) & 0xf) < 4) {
      *(int8_t *)(param_3 + 0x106) = 0;
    }
    if ((*(byte *)(param_3 + 0x126) & 0xf0) < 0x40) {
      *(int8_t *)(param_3 + 0x10a) = 0;
    }
    *(int8_t *)(param_3 + 0x116) = 0;
    *(byte *)(param_4 + 0x3c) = *(byte *)(param_4 + 0x3c) | 6;
  }
  if (param_2[2] != '\0') {
    func_0x0001807ccf60(param_3);
  }
  if ((*param_2 == -1) || (param_2[3] == '\x14')) {
    *(int8_t *)(param_4 + 0xbc) = 1;
  }
  if ((*(byte *)(param_5 + 0x400) & 1) == 0) {
    if (*(char *)(param_4 + 0xbc) != '\0') {
      *(int32_t *)(param_4 + 0x70) = 0;
    }
  }
  else if (*(char *)(param_4 + 0x78) == '\0') {
    FUN_1807ccbe0(param_1,param_4 + 100,param_4,*(int8_t *)(param_5 + 0x401),param_5 + 0x402,
                  *(byte *)(param_5 + 0x400),*(int8_t *)(param_5 + 0x453),
                  *(int8_t *)(param_5 + 0x454),*(int8_t *)(param_5 + 0x452),2);
  }
  if (((*(byte *)(param_5 + 0x457) & 1) != 0) && (*(char *)(param_4 + 0x90) == '\0')) {
    FUN_1807ccbe0(param_1,param_4 + 0x7c,param_4,*(int8_t *)(param_5 + 0x458),param_5 + 0x45a,
                  *(byte *)(param_5 + 0x457),*(int8_t *)(param_5 + 0x4ab),
                  *(int8_t *)(param_5 + 0x4ac),*(int8_t *)(param_5 + 0x4aa),4);
  }
  if (*(char *)(param_4 + 0xbc) != '\0') {
    piVar1 = (int *)(param_4 + 0xb0);
    *piVar1 = *piVar1 - (uint)*(ushort *)(param_5 + 0x50c);
    uVar2 = *(int32_t *)(param_4 + 0xb0);
    if (*piVar1 < 0) {
      uVar2 = 0;
    }
    *(byte *)(param_4 + 0x3c) = *(byte *)(param_4 + 0x3c) | 2;
    *(int32_t *)(param_4 + 0xb0) = uVar2;
  }
  return 0;
}






