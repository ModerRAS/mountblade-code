#include "TaleWorlds.Native.Split.h"

// 99_part_13_part011_sub001_sub002.c - 1 个函数

// 函数: void FUN_1808abac9(void)
void FUN_1808abac9(void)

{
  undefined8 *unaff_RBX;
  
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808abb10(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int aiStack_98 [2];
  undefined8 *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  
  uVar3 = FUN_1808ddc20(param_1,auStack_48,1,param_3);
  if ((int)uVar3 == 0) {
    iVar6 = 0;
    aiStack_98[0] = 0;
    uVar1 = FUN_1808de650(param_1,aiStack_98);
    if (aiStack_98[0] < 0) {
      uVar3 = 0xd;
    }
    else {
      uVar5 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
      if ((aiStack_98[0] <= (int)((*(uint *)(param_2 + 0xc) ^ uVar5) - uVar5)) ||
         (uVar3 = FUN_180747f10(param_2,aiStack_98[0]), (int)uVar3 == 0)) {
        if (uVar1 != 0x12) {
          if (uVar1 != 0) {
            return (ulonglong)uVar1;
          }
          if (0 < aiStack_98[0]) {
            do {
              puVar4 = (undefined8 *)
                       FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xe8,&UNK_180986ef0,
                                     0x30a,0,0,1);
              if (puVar4 == (undefined8 *)0x0) {
                return 0x26;
              }
              FUN_1808adcf0(puVar4,10);
              *puVar4 = &UNK_180986c70;
              puVar4[6] = &UNK_180986af0;
              puVar4[0x1b] = 0;
              puVar4[0x1c] = 0;
              FUN_18084e110(puVar4 + 0x1b,&DAT_18098bc73);
              puStack_90 = puVar4;
              iVar2 = FUN_1808ddc20(param_1,auStack_68,1,0x54495250);
              if (((iVar2 == 0) &&
                  (iVar2 = FUN_1808ddc20(param_1,auStack_88,0,0x42495250), iVar2 == 0)) &&
                 (iVar2 = FUN_180899360(param_1,puVar4 + 2), iVar2 == 0)) {
                if (*(int *)(param_1[1] + 0x18) == 0) {
                  iVar2 = FUN_1808a2740(*param_1,puVar4 + 0x1b);
                  if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
                    FUN_1808ddf80(param_1,auStack_88);
                  }
                }
                else {
                  iVar2 = 0x1c;
                }
              }
              if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(param_2,&puStack_90), iVar2 != 0)) {
                (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
                FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar4,&UNK_18095b500,0xc6,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < aiStack_98[0]);
          }
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_1,auStack_48);
      }
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808abb3f(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *unaff_RDI;
  longlong unaff_R15;
  int iStack0000000000000040;
  
  iVar6 = 0;
  iStack0000000000000040 = 0;
  uVar1 = FUN_1808de650();
  if (iStack0000000000000040 < 0) {
    uVar3 = 0xd;
  }
  else {
    uVar5 = (int)*(uint *)(unaff_R15 + 0xc) >> 0x1f;
    if ((iStack0000000000000040 <= (int)((*(uint *)(unaff_R15 + 0xc) ^ uVar5) - uVar5)) ||
       (uVar3 = FUN_180747f10(), (int)uVar3 == 0)) {
      if (uVar1 != 0x12) {
        if (uVar1 != 0) {
          return (ulonglong)uVar1;
        }
        if (0 < iStack0000000000000040) {
          do {
            puVar4 = (undefined8 *)
                     FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xe8,&UNK_180986ef0,0x30a
                                   ,0);
            if (puVar4 == (undefined8 *)0x0) {
              return 0x26;
            }
            FUN_1808adcf0(puVar4,10);
            *puVar4 = &UNK_180986c70;
            puVar4[6] = &UNK_180986af0;
            puVar4[0x1b] = 0;
            puVar4[0x1c] = 0;
            FUN_18084e110(puVar4 + 0x1b,&DAT_18098bc73);
            iVar2 = FUN_1808ddc20();
            if (((iVar2 == 0) && (iVar2 = FUN_1808ddc20(), iVar2 == 0)) &&
               (iVar2 = FUN_180899360(), iVar2 == 0)) {
              if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
                iVar2 = FUN_1808a2740(*unaff_RDI,puVar4 + 0x1b);
                if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
                  FUN_1808ddf80();
                }
              }
              else {
                iVar2 = 0x1c;
              }
            }
            if ((iVar2 != 0) || (iVar2 = FUN_18087dc70(), iVar2 != 0)) {
              (**(code **)*puVar4)(puVar4,0);
                    // WARNING: Subroutine does not return
              FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar4,&UNK_18095b500,0xc6,1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iStack0000000000000040);
        }
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1808abb9b(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int unaff_EBX;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *unaff_RDI;
  ulonglong unaff_R12;
  int in_stack_00000040;
  
  if (unaff_EBX != 0x12) {
    if (unaff_EBX != 0) {
      return unaff_EBX;
    }
    uVar4 = unaff_R12 & 0xffffffff;
    if (0 < param_1) {
      do {
        puVar2 = (undefined8 *)
                 FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0xe8,&UNK_180986ef0,0x30a);
        if (puVar2 == (undefined8 *)0x0) {
          return 0x26;
        }
        FUN_1808adcf0(puVar2,10);
        *puVar2 = &UNK_180986c70;
        puVar2[6] = &UNK_180986af0;
        puVar2[0x1b] = unaff_R12;
        puVar2[0x1c] = unaff_R12;
        FUN_18084e110(puVar2 + 0x1b,&DAT_18098bc73);
        iVar1 = FUN_1808ddc20();
        if (((iVar1 == 0) && (iVar1 = FUN_1808ddc20(), iVar1 == 0)) &&
           (iVar1 = FUN_180899360(), iVar1 == 0)) {
          if (*(int *)(unaff_RDI[1] + 0x18) == (int)unaff_R12) {
            iVar1 = FUN_1808a2740(*unaff_RDI,puVar2 + 0x1b);
            if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
              FUN_1808ddf80();
            }
          }
          else {
            iVar1 = 0x1c;
          }
        }
        if ((iVar1 != 0) || (iVar1 = FUN_18087dc70(), iVar1 != 0)) {
          (**(code **)*puVar2)(puVar2,0);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),puVar2,&UNK_18095b500,0xc6,1);
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < in_stack_00000040);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808ddf80();
}








