#include "TaleWorlds.Native.Split.h"

// 99_part_09_part094.c - 11 个函数

// 函数: void FUN_1806a0150(longlong param_1,longlong param_2)
void FUN_1806a0150(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte *pbStackX_8;
  longlong lStackX_18;
  
  lStackX_18 = 2;
  pbStackX_8 = &UNK_180949fb0;
  do {
    pbVar8 = pbStackX_8 + param_2 + -0x180949fb0;
    pbVar6 = pbStackX_8;
    do {
      uVar4 = ((*(int *)(param_1 + 0x1c) + -1) * (uint)*pbVar6 >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      uVar3 = *(ulonglong *)(param_1 + 0x10);
      uVar2 = (ulonglong)uVar4 << 0x38;
      bVar9 = uVar2 <= uVar3;
      if (bVar9) {
        uVar4 = *(int *)(param_1 + 0x1c) - uVar4;
        uVar3 = uVar3 - uVar2;
      }
      pbVar6 = pbVar6 + 1;
      bVar1 = (&UNK_1809495c0)[uVar4];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      *(ulonglong *)(param_1 + 0x10) = uVar3 << (bVar1 & 0x3f);
      *(uint *)(param_1 + 0x1c) = uVar4 << (bVar1 & 0x1f);
      if (bVar9) {
        uVar4 = 0;
        iVar7 = 6;
        do {
          uVar5 = ((uint)((*(int *)(param_1 + 0x1c) + -1) * 0x80) >> 8) + 1;
          if (*(int *)(param_1 + 0x18) < 0) {
            FUN_18069ec80(param_1);
          }
          uVar3 = *(ulonglong *)(param_1 + 0x10);
          uVar2 = (ulonglong)uVar5 << 0x38;
          bVar9 = uVar2 <= uVar3;
          if (bVar9) {
            uVar5 = *(int *)(param_1 + 0x1c) - uVar5;
            uVar3 = uVar3 - uVar2;
          }
          bVar1 = (&UNK_1809495c0)[uVar5];
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
          uVar4 = uVar4 | (uint)bVar9 << ((byte)iVar7 & 0x1f);
          *(ulonglong *)(param_1 + 0x10) = uVar3 << (bVar1 & 0x3f);
          iVar7 = iVar7 + -1;
          *(uint *)(param_1 + 0x1c) = uVar5 << (bVar1 & 0x1f);
        } while (-1 < iVar7);
        if ((char)uVar4 == '\0') {
          bVar1 = 1;
        }
        else {
          bVar1 = (char)uVar4 * '\x02';
        }
        *pbVar8 = bVar1;
      }
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 < pbStackX_8 + param_2 + -0x180949f9d);
    pbStackX_8 = pbStackX_8 + 0x13;
    lStackX_18 = lStackX_18 + -1;
  } while (lStackX_18 != 0);
  return;
}



int FUN_1806a02d0(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  cVar2 = '\0';
  do {
    uVar5 = ((uint)*(byte *)(((longlong)cVar2 >> 1) + param_2) * (*(int *)(param_1 + 0x1c) + -1) >>
            8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_18069ec80(param_1);
    }
    uVar4 = *(ulonglong *)(param_1 + 0x10);
    uVar3 = (ulonglong)uVar5 << 0x38;
    bVar6 = uVar3 <= uVar4;
    if (bVar6) {
      uVar5 = *(int *)(param_1 + 0x1c) - uVar5;
      uVar4 = uVar4 - uVar3;
    }
    bVar1 = (&UNK_1809495c0)[uVar5];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar4 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar5 << (bVar1 & 0x1f);
    cVar2 = (&UNK_180948310)[(longlong)(int)(uint)bVar6 + (longlong)cVar2];
  } while ('\0' < cVar2);
  return -(int)cVar2;
}



int FUN_1806a03a0(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  cVar2 = '\0';
  do {
    uVar5 = ((uint)*(byte *)(((longlong)cVar2 >> 1) + param_2) * (*(int *)(param_1 + 0x1c) + -1) >>
            8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_18069ec80(param_1);
    }
    uVar4 = *(ulonglong *)(param_1 + 0x10);
    uVar3 = (ulonglong)uVar5 << 0x38;
    bVar6 = uVar3 <= uVar4;
    if (bVar6) {
      uVar5 = *(int *)(param_1 + 0x1c) - uVar5;
      uVar4 = uVar4 - uVar3;
    }
    bVar1 = (&UNK_1809495c0)[uVar5];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar4 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar5 << (bVar1 & 0x1f);
    cVar2 = (&UNK_180948300)[(longlong)(int)(uint)bVar6 + (longlong)cVar2];
  } while ('\0' < cVar2);
  return -(int)cVar2;
}






// 函数: void FUN_1806a0470(longlong param_1)
void FUN_1806a0470(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iStackX_8;
  
  lVar6 = *(longlong *)(param_1 + 0x1eb0);
  FUN_18069f2f0();
  *(int32_t *)(param_1 + 0xf8c) = 0;
  iStackX_8 = 0;
  *(int *)(param_1 + 0xf90) = *(int *)(param_1 + 0x1e74) * 0x80 + -0x80;
  iVar3 = *(int *)(param_1 + 0x1e78);
  if (0 < *(int *)(param_1 + 0x1e74)) {
    do {
      iVar10 = 0;
      *(int32_t *)(param_1 + 0xf84) = 0;
      *(int *)(param_1 + 0xf88) = iVar3 * 0x80 + -0x80;
      if (0 < *(int *)(param_1 + 0x1e78)) {
        do {
          if (*(char *)(param_1 + 0xf61) == '\0') {
            if (*(int *)(param_1 + 0x1e64) == 0) {
              *(int8_t *)(lVar6 + 0xb) = 0;
            }
          }
          else {
            lVar1 = param_1 + 0x42c0;
            if (*(char *)(param_1 + 0xf60) != '\0') {
              uVar7 = ((uint)*(byte *)(param_1 + 0xf64) * (*(int *)(param_1 + 0x42dc) + -1) >> 8) +
                      1;
              if (*(int *)(param_1 + 0x42d8) < 0) {
                FUN_18069ec80(lVar1);
              }
              uVar5 = *(ulonglong *)(param_1 + 0x42d0);
              uVar4 = (ulonglong)uVar7 << 0x38;
              bVar11 = uVar5 < uVar4;
              if (!bVar11) {
                uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
                uVar5 = uVar5 - uVar4;
              }
              bVar2 = (&UNK_1809495c0)[uVar7];
              iVar8 = uVar7 << (bVar2 & 0x1f);
              iVar9 = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
              *(ulonglong *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
              *(int *)(param_1 + 0x42d8) = iVar9;
              *(int *)(param_1 + 0x42dc) = iVar8;
              iVar8 = iVar8 + -1;
              if (bVar11) {
                uVar7 = ((uint)*(byte *)(param_1 + 0xf65) * iVar8 >> 8) + 1;
                if (iVar9 < 0) {
                  FUN_18069ec80(lVar1);
                }
                uVar5 = *(ulonglong *)(param_1 + 0x42d0);
                uVar4 = (ulonglong)uVar7 << 0x38;
                bVar11 = uVar4 <= uVar5;
                if (bVar11) {
                  uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
                  uVar5 = uVar5 - uVar4;
                }
                bVar2 = (&UNK_1809495c0)[uVar7];
                *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
                *(uint *)(param_1 + 0x42dc) = uVar7 << (bVar2 & 0x1f);
                *(ulonglong *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
                *(bool *)(lVar6 + 0xb) = bVar11;
              }
              else {
                uVar7 = ((uint)*(byte *)(param_1 + 0xf66) * iVar8 >> 8) + 1;
                if (iVar9 < 0) {
                  FUN_18069ec80(lVar1);
                }
                uVar5 = *(ulonglong *)(param_1 + 0x42d0);
                uVar4 = (ulonglong)uVar7 << 0x38;
                bVar11 = uVar4 <= uVar5;
                if (bVar11) {
                  uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
                  uVar5 = uVar5 - uVar4;
                }
                bVar2 = (&UNK_1809495c0)[uVar7];
                *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
                *(ulonglong *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
                *(uint *)(param_1 + 0x42dc) = uVar7 << (bVar2 & 0x1f);
                *(char *)(lVar6 + 0xb) = bVar11 + '\x02';
              }
            }
          }
          if (*(int *)(param_1 + 0x1e80) == 0) {
            *(int8_t *)(lVar6 + 9) = 0;
          }
          else {
            uVar7 = ((uint)*(byte *)(param_1 + 0x4417) * (*(int *)(param_1 + 0x42dc) + -1) >> 8) + 1
            ;
            if (*(int *)(param_1 + 0x42d8) < 0) {
              FUN_18069ec80(param_1 + 0x42c0);
            }
            uVar5 = *(ulonglong *)(param_1 + 0x42d0);
            uVar4 = (ulonglong)uVar7 << 0x38;
            bVar11 = uVar4 <= uVar5;
            if (bVar11) {
              uVar7 = *(int *)(param_1 + 0x42dc) - uVar7;
              uVar5 = uVar5 - uVar4;
            }
            bVar2 = (&UNK_1809495c0)[uVar7];
            *(int *)(param_1 + 0x42d8) = *(int *)(param_1 + 0x42d8) - (uint)bVar2;
            *(uint *)(param_1 + 0x42dc) = uVar7 << (bVar2 & 0x1f);
            *(ulonglong *)(param_1 + 0x42d0) = uVar5 << (bVar2 & 0x3f);
            *(bool *)(lVar6 + 9) = bVar11;
          }
          *(int8_t *)(lVar6 + 3) = 0;
          if (*(int *)(param_1 + 0x1e64) == 0) {
            FUN_18069f770();
          }
          else {
            FUN_18069f9c0(param_1,lVar6,lVar6);
          }
          *(int *)(param_1 + 0xf84) = *(int *)(param_1 + 0xf84) + -0x80;
          lVar6 = lVar6 + 0x4c;
          *(int *)(param_1 + 0xf88) = *(int *)(param_1 + 0xf88) + -0x80;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 0x1e78));
      }
      *(int *)(param_1 + 0xf8c) = *(int *)(param_1 + 0xf8c) + -0x80;
      iStackX_8 = iStackX_8 + 1;
      *(int *)(param_1 + 0xf90) = *(int *)(param_1 + 0xf90) + -0x80;
      lVar6 = lVar6 + 0x4c;
    } while (iStackX_8 < *(int *)(param_1 + 0x1e74));
  }
  return;
}






// 函数: void FUN_1806a04c6(void)
void FUN_1806a04c6(void)

{
  longlong lVar1;
  byte bVar2;
  int32_t in_EAX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_R13D;
  bool bVar9;
  int in_stack_00000060;
  int32_t in_stack_00000068;
  
  do {
    iVar8 = 0;
    *(int32_t *)(unaff_RBX + 0xf84) = 0;
    *(int32_t *)(unaff_RBX + 0xf88) = in_EAX;
    if (0 < *(int *)(unaff_RBX + 0x1e78)) {
      do {
        if (*(char *)(unaff_RBX + 0xf61) == '\0') {
          if (*(int *)(unaff_RBX + 0x1e64) == 0) {
            *(int8_t *)(unaff_RBP + 0xb) = 0;
          }
        }
        else {
          lVar1 = unaff_RBX + 0x42c0;
          if (*(char *)(unaff_RBX + 0xf60) != '\0') {
            uVar5 = ((uint)*(byte *)(unaff_RBX + 0xf64) * (*(int *)(unaff_RBX + 0x42dc) + -1) >> 8)
                    + 1;
            if (*(int *)(unaff_RBX + 0x42d8) < 0) {
              FUN_18069ec80(lVar1);
            }
            uVar4 = *(ulonglong *)(unaff_RBX + 0x42d0);
            uVar3 = (ulonglong)uVar5 << 0x38;
            bVar9 = uVar4 < uVar3;
            if (!bVar9) {
              uVar5 = *(int *)(unaff_RBX + 0x42dc) - uVar5;
              uVar4 = uVar4 - uVar3;
            }
            bVar2 = (&UNK_1809495c0)[uVar5];
            iVar6 = uVar5 << (bVar2 & 0x1f);
            iVar7 = *(int *)(unaff_RBX + 0x42d8) - (uint)bVar2;
            *(ulonglong *)(unaff_RBX + 0x42d0) = uVar4 << (bVar2 & 0x3f);
            *(int *)(unaff_RBX + 0x42d8) = iVar7;
            *(int *)(unaff_RBX + 0x42dc) = iVar6;
            iVar6 = iVar6 + -1;
            if (bVar9) {
              uVar5 = ((uint)*(byte *)(unaff_RBX + 0xf65) * iVar6 >> 8) + 1;
              if (iVar7 < 0) {
                FUN_18069ec80(lVar1);
              }
              uVar4 = *(ulonglong *)(unaff_RBX + 0x42d0);
              uVar3 = (ulonglong)uVar5 << 0x38;
              bVar9 = uVar3 <= uVar4;
              if (bVar9) {
                uVar5 = *(int *)(unaff_RBX + 0x42dc) - uVar5;
                uVar4 = uVar4 - uVar3;
              }
              bVar2 = (&UNK_1809495c0)[uVar5];
              *(int *)(unaff_RBX + 0x42d8) = *(int *)(unaff_RBX + 0x42d8) - (uint)bVar2;
              *(uint *)(unaff_RBX + 0x42dc) = uVar5 << (bVar2 & 0x1f);
              *(ulonglong *)(unaff_RBX + 0x42d0) = uVar4 << (bVar2 & 0x3f);
              *(bool *)(unaff_RBP + 0xb) = bVar9;
            }
            else {
              uVar5 = ((uint)*(byte *)(unaff_RBX + 0xf66) * iVar6 >> 8) + 1;
              if (iVar7 < 0) {
                FUN_18069ec80(lVar1);
              }
              uVar4 = *(ulonglong *)(unaff_RBX + 0x42d0);
              uVar3 = (ulonglong)uVar5 << 0x38;
              bVar9 = uVar3 <= uVar4;
              if (bVar9) {
                uVar5 = *(int *)(unaff_RBX + 0x42dc) - uVar5;
                uVar4 = uVar4 - uVar3;
              }
              bVar2 = (&UNK_1809495c0)[uVar5];
              *(int *)(unaff_RBX + 0x42d8) = *(int *)(unaff_RBX + 0x42d8) - (uint)bVar2;
              *(ulonglong *)(unaff_RBX + 0x42d0) = uVar4 << (bVar2 & 0x3f);
              *(uint *)(unaff_RBX + 0x42dc) = uVar5 << (bVar2 & 0x1f);
              *(char *)(unaff_RBP + 0xb) = bVar9 + '\x02';
            }
          }
        }
        if (*(int *)(unaff_RBX + 0x1e80) == 0) {
          *(int8_t *)(unaff_RBP + 9) = 0;
        }
        else {
          uVar5 = ((uint)*(byte *)(unaff_RBX + 0x4417) * (*(int *)(unaff_RBX + 0x42dc) + -1) >> 8) +
                  1;
          if (*(int *)(unaff_RBX + 0x42d8) < 0) {
            FUN_18069ec80(unaff_RBX + 0x42c0);
          }
          uVar4 = *(ulonglong *)(unaff_RBX + 0x42d0);
          uVar3 = (ulonglong)uVar5 << 0x38;
          bVar9 = uVar3 <= uVar4;
          if (bVar9) {
            uVar5 = *(int *)(unaff_RBX + 0x42dc) - uVar5;
            uVar4 = uVar4 - uVar3;
          }
          bVar2 = (&UNK_1809495c0)[uVar5];
          *(int *)(unaff_RBX + 0x42d8) = *(int *)(unaff_RBX + 0x42d8) - (uint)bVar2;
          *(uint *)(unaff_RBX + 0x42dc) = uVar5 << (bVar2 & 0x1f);
          *(ulonglong *)(unaff_RBX + 0x42d0) = uVar4 << (bVar2 & 0x3f);
          *(bool *)(unaff_RBP + 9) = bVar9;
        }
        *(int8_t *)(unaff_RBP + 3) = 0;
        if (*(int *)(unaff_RBX + 0x1e64) == 0) {
          FUN_18069f770();
        }
        else {
          FUN_18069f9c0();
        }
        *(int *)(unaff_RBX + 0xf84) = *(int *)(unaff_RBX + 0xf84) + -0x80;
        unaff_RBP = unaff_RBP + 0x4c;
        *(int *)(unaff_RBX + 0xf88) = *(int *)(unaff_RBX + 0xf88) + -0x80;
        iVar8 = iVar8 + 1;
        in_EAX = in_stack_00000068;
        unaff_R13D = in_stack_00000060;
      } while (iVar8 < *(int *)(unaff_RBX + 0x1e78));
    }
    *(int *)(unaff_RBX + 0xf8c) = *(int *)(unaff_RBX + 0xf8c) + -0x80;
    unaff_R13D = unaff_R13D + 1;
    *(int *)(unaff_RBX + 0xf90) = *(int *)(unaff_RBX + 0xf90) + -0x80;
    unaff_RBP = unaff_RBP + 0x4c;
    in_stack_00000060 = unaff_R13D;
  } while (unaff_R13D < *(int *)(unaff_RBX + 0x1e74));
  return;
}






// 函数: void FUN_1806a0772(void)
void FUN_1806a0772(void)

{
  return;
}



void PxGetFoundation(void)

{
                    // WARNING: Could not recover jumptable at 0x0001806a077b. Too many branches
                    // WARNING: Treating indirect jump as call
  PxGetFoundation();
  return;
}






// 函数: void FUN_1806a0790(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806a0790(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a07cb. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3,param_4);
  return;
}






// 函数: void FUN_1806a07d0(uint64_t param_1,uint64_t param_2)
void FUN_1806a07d0(uint64_t param_1,uint64_t param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a07ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1806a07f0(longlong *param_1)

{
  _DAT_180be0050 = (**(code **)(*param_1 + 0x20))();
  FUN_1806a1b30();
  return _DAT_180c0c2f0;
}



uint64_t * FUN_1806a0810(uint64_t param_1,int16_t param_2,int32_t param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  void *puVar8;
  
  plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar4 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
  puVar8 = &UNK_18094a1f0;
  if (cVar1 == '\0') {
    puVar5 = &UNK_18094a1f0;
  }
  else {
    puVar5 = (void *)__std_type_info_name(0x180bfc1c8,0x180c827e0);
  }
  puVar6 = (uint64_t *)(**(code **)(*plVar3 + 8))(plVar3,0x48,puVar5,&UNK_18094a160,0x83);
  if (puVar6 == (uint64_t *)0x0) {
    puVar6 = (uint64_t *)0x0;
  }
  else {
    *puVar6 = &UNK_18094a108;
    __0Socket_shdfnd_physx__QEAA__N0_Z(puVar6 + 1,1);
    uVar7 = 0;
    puVar6[3] = param_1;
    puVar6[6] = 0;
    *(int16_t *)(puVar6 + 4) = param_2;
    *(int32_t *)((longlong)puVar6 + 0x24) = param_3;
    *(int8_t *)(puVar6 + 5) = 0;
    iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
    if (iVar2 != 0) {
      plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar4 = (longlong *)PxGetFoundation();
      cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if (cVar1 != '\0') {
        puVar8 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
      }
      uVar7 = (**(code **)(*plVar3 + 8))(plVar3,iVar2,puVar8,&UNK_18094a1b0,0x71);
    }
    puVar6[7] = uVar7;
    __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar7);
  }
  return puVar6;
}



uint64_t *
FUN_1806a0960(uint64_t *param_1,uint64_t param_2,int16_t param_3,int32_t param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *puVar5;
  uint64_t uVar6;
  
  *param_1 = &UNK_18094a108;
  __0Socket_shdfnd_physx__QEAA__N0_Z(param_1 + 1,1);
  param_1[3] = param_2;
  uVar6 = 0;
  param_1[6] = 0;
  *(int16_t *)(param_1 + 4) = param_3;
  *(int32_t *)((longlong)param_1 + 0x24) = param_4;
  *(int8_t *)(param_1 + 5) = 0;
  iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  if (iVar2 != 0) {
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar5 = &UNK_18094a1f0;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
    }
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,iVar2,puVar5,&UNK_18094a1b0,0x71);
  }
  param_1[7] = uVar6;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar6);
  return param_1;
}






// 函数: void FUN_1806a0a50(uint64_t *param_1)
void FUN_1806a0a50(uint64_t *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &UNK_18094a108;
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[7]);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  __1Socket_shdfnd_physx__UEAA_XZ(param_1 + 1);
  *param_1 = &UNK_18094a0b8;
  return;
}



int8_t FUN_1806a0ab0(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return 1;
  }
  cVar1 = _connect_Socket_shdfnd_physx__QEAA_NPEBDGI_Z
                    (param_1 + 8,*(uint64_t *)(param_1 + 0x18),*(int16_t *)(param_1 + 0x20),
                     *(int32_t *)(param_1 + 0x24));
  if (cVar1 != '\0') {
    _setBlocking_Socket_shdfnd_physx__QEAAX_N_Z(param_1 + 8,1);
    *(int8_t *)(param_1 + 0x28) = 1;
    return 1;
  }
  return *(int8_t *)(param_1 + 0x28);
}



int8_t FUN_1806a0ad8(void)

{
  char cVar1;
  longlong unaff_RBX;
  
  cVar1 = _connect_Socket_shdfnd_physx__QEAA_NPEBDGI_Z();
  if (cVar1 != '\0') {
    _setBlocking_Socket_shdfnd_physx__QEAAX_N_Z(unaff_RBX + 8,1);
    *(int8_t *)(unaff_RBX + 0x28) = 1;
    return 1;
  }
  return *(int8_t *)(unaff_RBX + 0x28);
}



int8_t FUN_1806a0b02(void)

{
  longlong unaff_RBX;
  
  return *(int8_t *)(unaff_RBX + 0x28);
}






// 函数: void FUN_1806a0b20(longlong param_1)
void FUN_1806a0b20(longlong param_1)

{
  _flush_Socket_shdfnd_physx__QEAA_NXZ(param_1 + 8);
  _disconnect_Socket_shdfnd_physx__QEAAXXZ(param_1 + 8);
  *(int8_t *)(param_1 + 0x28) = 0;
  return;
}



uint64_t FUN_1806a0b70(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (param_3 == 0) {
      return 1;
    }
    uVar2 = 0;
    do {
      uVar1 = _write_Socket_shdfnd_physx__QEAAIPEBEI_Z(param_1 + 8,param_2,param_3);
      uVar2 = uVar2 + uVar1;
      param_2 = param_2 + (ulonglong)uVar1;
      param_3 = param_3 - uVar1;
      if (param_3 == 0) {
        if (uVar1 == 0) {
          return 0;
        }
        *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + (ulonglong)uVar2;
        return 1;
      }
    } while (uVar1 != 0);
  }
  return 0;
}



longlong FUN_1806a0c00(longlong param_1)

{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x38));
  return param_1;
}



uint64_t * FUN_1806a0c70(uint64_t *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &UNK_18094a108;
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[7]);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  __1Socket_shdfnd_physx__UEAA_XZ(param_1 + 1);
  *param_1 = &UNK_18094a0b8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x48);
  }
  return param_1;
}



uint64_t * FUN_1806a0d20(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a0b8;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1806a0d50(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a210;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1806a0d90(uint64_t *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *puVar5;
  uint64_t uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  param_1[2] = 0;
  *param_1 = &UNK_18094a440;
  param_1[1] = &UNK_18094a4c0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &UNK_18094a3f0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 0x3f400000;
  *(int32_t *)((longlong)param_1 + 100) = 0xffffffff;
  param_1[0xd] = 0;
  FUN_1806a2bd0(param_1 + 7,0x40);
  iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  if (iVar2 != 0) {
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar5 = &UNK_18094a1f0;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
    }
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,iVar2,puVar5,&UNK_18094a1b0,0x71);
  }
  param_1[0xe] = uVar6;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar6);
  param_1[0xf] = 0;
  *(int16_t *)(param_1 + 0x10) = 0;
  *(int8_t *)((longlong)param_1 + 0x82) = 1;
  *(int32_t *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar6 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar6 = FUN_1806b20f0(uVar6);
  param_1[0x12] = uVar6;
  lVar7 = (**(code **)(*_DAT_180be0050 + 8))(_DAT_180be0050,0x40,&UNK_18094a510,&UNK_18094a4d8,0x5e)
  ;
  if (lVar7 == 0) {
    param_1[0x13] = 0;
    return param_1;
  }
  uVar6 = FUN_1806b6ae0(lVar7,param_1);
  param_1[0x13] = uVar6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1806a0d9c(uint64_t *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *puVar5;
  uint64_t uVar6;
  longlong lVar7;
  uint64_t unaff_RBP;
  
  param_1[2] = unaff_RBP;
  *param_1 = &UNK_18094a440;
  param_1[1] = &UNK_18094a4c0;
  param_1[3] = unaff_RBP;
  param_1[4] = unaff_RBP;
  param_1[5] = unaff_RBP;
  param_1[6] = &UNK_18094a3f0;
  param_1[7] = unaff_RBP;
  param_1[8] = unaff_RBP;
  param_1[9] = unaff_RBP;
  param_1[10] = unaff_RBP;
  param_1[0xb] = unaff_RBP;
  *(int32_t *)(param_1 + 0xc) = 0x3f400000;
  *(int32_t *)((longlong)param_1 + 100) = 0xffffffff;
  param_1[0xd] = unaff_RBP;
  FUN_1806a2bd0(param_1 + 7,(int)unaff_RBP + 0x40);
  iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  uVar6 = unaff_RBP;
  if (iVar2 != 0) {
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar5 = &UNK_18094a1f0;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
    }
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,iVar2,puVar5,&UNK_18094a1b0,0x71);
  }
  param_1[0xe] = uVar6;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar6);
  param_1[0xf] = unaff_RBP;
  *(short *)(param_1 + 0x10) = (short)unaff_RBP;
  *(int8_t *)((longlong)param_1 + 0x82) = 1;
  *(int *)((longlong)param_1 + 0x84) = (int)unaff_RBP;
  param_1[0x11] = 1;
  param_1[0x13] = unaff_RBP;
  param_1[0x14] = unaff_RBP;
  uVar6 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar6 = FUN_1806b20f0(uVar6);
  param_1[0x12] = uVar6;
  lVar7 = (**(code **)(*_DAT_180be0050 + 8))(_DAT_180be0050,0x40,&UNK_18094a510,&UNK_18094a4d8,0x5e)
  ;
  if (lVar7 == 0) {
    param_1[0x13] = unaff_RBP;
    return param_1;
  }
  uVar6 = FUN_1806b6ae0(lVar7,param_1);
  param_1[0x13] = uVar6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806a0e10(void)
void FUN_1806a0e10(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  
  plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 != '\0') {
    __std_type_info_name(0x180bfc198,0x180c827e0);
  }
  uVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  *(uint64_t *)(unaff_RBX + 0x70) = uVar4;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar4);
  *(uint64_t *)(unaff_RBX + 0x78) = unaff_RBP;
  *(short *)(unaff_RBX + 0x80) = (short)unaff_RBP;
  *(int8_t *)(unaff_RBX + 0x82) = 1;
  *(int *)(unaff_RBX + 0x84) = (int)unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x88) = 1;
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0xa0) = unaff_RBP;
  uVar4 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar4 = FUN_1806b20f0(uVar4);
  *(uint64_t *)(unaff_RBX + 0x90) = uVar4;
  lVar5 = (**(code **)(*_DAT_180be0050 + 8))(_DAT_180be0050,0x40,&UNK_18094a510,&UNK_18094a4d8,0x5e)
  ;
  if (lVar5 == 0) {
    *(uint64_t *)(unaff_RBX + 0x98) = unaff_RBP;
    return;
  }
  uVar4 = FUN_1806b6ae0(lVar5);
  *(uint64_t *)(unaff_RBX + 0x98) = uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806a0e71(void)
void FUN_1806a0e71(void)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  
  *(uint64_t *)(unaff_RBX + 0x70) = unaff_RBP;
  __0MutexImpl_shdfnd_physx__QEAA_XZ();
  *(uint64_t *)(unaff_RBX + 0x78) = unaff_RBP;
  *(short *)(unaff_RBX + 0x80) = (short)unaff_RBP;
  *(int8_t *)(unaff_RBX + 0x82) = 1;
  *(int *)(unaff_RBX + 0x84) = (int)unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x88) = 1;
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0xa0) = unaff_RBP;
  uVar1 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar1 = FUN_1806b20f0(uVar1);
  *(uint64_t *)(unaff_RBX + 0x90) = uVar1;
  lVar2 = (**(code **)(*_DAT_180be0050 + 8))(_DAT_180be0050,0x40,&UNK_18094a510,&UNK_18094a4d8,0x5e)
  ;
  if (lVar2 != 0) {
    uVar1 = FUN_1806b6ae0(lVar2);
    *(uint64_t *)(unaff_RBX + 0x98) = uVar1;
    return;
  }
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_RBP;
  return;
}






// 函数: void FUN_1806a0ef7(void)
void FUN_1806a0ef7(void)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  
  uVar1 = FUN_1806b6ae0();
  *(uint64_t *)(unaff_RBX + 0x98) = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




