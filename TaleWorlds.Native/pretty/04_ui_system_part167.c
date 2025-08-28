#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part167.c - 2 个函数

// 函数: void FUN_180768440(undefined8 param_1,int param_2,undefined4 *param_3,longlong *param_4)
void FUN_180768440(undefined8 param_1,int param_2,undefined4 *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_298 [32];
  undefined4 uStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined8 auStack_258 [2];
  undefined2 auStack_248 [256];
  longlong lStack_48;
  undefined2 *puStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  puStack_40 = auStack_248;
  lVar2 = 0;
  uVar3 = 0;
  lStack_48 = 0;
  auStack_248[0] = 0;
  iVar1 = FUN_180768090(auStack_248,param_1);
  if (iVar1 != 0) goto LAB_18076855d;
  auStack_258[0] = 0;
  if (param_2 == 0) {
    uStack_268 = 0;
    uStack_270 = 0x80;
    uStack_278 = 3;
    lVar2 = CreateFileW(puStack_40,0x80000000,1,0);
    if (lVar2 == -1) {
      GetLastError();
      goto LAB_18076855d;
    }
    iVar1 = GetFileSizeEx(lVar2,auStack_258);
    if (iVar1 == 0) goto LAB_18076855d;
LAB_180768551:
    uVar3 = (undefined4)auStack_258[0];
  }
  else if (param_2 == 1) {
    uStack_268 = 0;
    uStack_270 = 0x80;
    uStack_278 = 2;
    lVar2 = CreateFileW(puStack_40,0x40000000,1,0);
    if (lVar2 == -1) goto LAB_18076855d;
    goto LAB_180768551;
  }
  *param_4 = lVar2;
  *param_3 = uVar3;
LAB_18076855d:
  if (lStack_48 != 0) {
    uStack_278 = CONCAT31(uStack_278._1_3_,1);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lStack_48,&UNK_180958b20,0xcd);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_298);
}



undefined8 FUN_1807685b0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_4 = 0;
  iVar1 = ReadFile();
  if (iVar1 == 0) {
    return 0xd;
  }
  *param_4 = 0;
  if (param_3 != 0) {
    uVar2 = 0x10;
  }
  return uVar2;
}



undefined4 FUN_180768620(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStackX_18 [4];
  
  auStackX_18[0] = 0;
  iVar1 = SetFilePointer(param_1,param_2,auStackX_18,0);
  uVar2 = 0;
  if (iVar1 == -1) {
    uVar2 = 0xd;
  }
  return uVar2;
}



undefined8 FUN_180768650(undefined8 param_1,undefined8 param_2,int param_3,char param_4)

{
  int iVar1;
  
  iVar1 = WriteFile();
  if ((iVar1 == 0) || (param_3 != 0)) {
    return 0xd;
  }
  if ((param_4 != '\0') && (iVar1 = FlushFileBuffers(param_1), iVar1 == 0)) {
    return 0xd;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1807686d0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 in_stack_ffffffffffffffd8;
  uint uVar4;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (_DAT_180c0c6e8 == (longlong *)0x0) {
    uVar4 = 1;
    iVar1 = CoCreateInstance(&UNK_180958b00,0,0x17,&UNK_180958b10,&DAT_180c0c6e8);
    if (iVar1 == -0x7ffbfe10) {
      iVar1 = CoInitializeEx(0,2);
      if (iVar1 < 0) {
        return 0x33;
      }
      uVar4 = 1;
      iVar1 = CoCreateInstance(&UNK_180958b00,0,0x17,&UNK_180958b10,&DAT_180c0c6e8);
    }
    if (iVar1 < 0) {
      return 0x33;
    }
  }
  puVar3 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x10,&UNK_180958b20,0x5d,
                         (ulonglong)uVar4 << 0x20,0,1);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &UNK_180958ac0;
    puVar3 = puVar2;
  }
  _DAT_180c0c6f0 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    iVar1 = (**(code **)(*_DAT_180c0c6e8 + 0x30))();
    if (iVar1 < 0) {
      return 0x33;
    }
    return 0;
  }
  return 0x26;
}



undefined8 FUN_1807687d0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FreeLibrary();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x1c;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180768820(void)

{
  if (_DAT_180c0c6f0 != 0) {
    (**(code **)(*_DAT_180c0c6e8 + 0x38))();
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),_DAT_180c0c6f0,&UNK_180958b20,0x75,1);
  }
  if (_DAT_180c0c6e8 != (longlong *)0x0) {
    (**(code **)(*_DAT_180c0c6e8 + 0x10))();
    _DAT_180c0c6e8 = (longlong *)0x0;
  }
  return 0;
}



undefined8 FUN_1807688b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = CreateSemaphoreA(0,0,0xffff,0);
  if (lVar1 == 0) {
    return 0x1c;
  }
  *param_1 = lVar1;
  return 0;
}



undefined8 FUN_1807688f0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = CloseHandle();
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x1c;
  }
  return uVar2;
}



undefined8 FUN_180768910(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ReleaseSemaphore(param_1,1);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x1c;
  }
  return uVar2;
}



undefined8 FUN_180768940(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = WaitForSingleObject(param_1,0xffffffff);
  uVar2 = 0;
  if (iVar1 == -1) {
    uVar2 = 0x1c;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180768970(uint *param_1)
void FUN_180768970(uint *param_1)

{
  uint auStack_228 [4];
  undefined1 auStack_218 [24];
  uint uStack_200;
  uint uStack_1fc;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  _fxsave(auStack_218);
  *param_1 = uStack_200;
  if (uStack_1fc == 0) {
    uStack_1fc = 0;
  }
  if ((uStack_1fc & 0x40) != 0) {
    uStack_200 = uStack_200 | 0x40;
  }
  MXCSR = uStack_200 | 0x8800;
  auStack_228[0] = MXCSR;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_228);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1807689d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             uint param_5,undefined4 param_6,longlong *param_7)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffffe0;
  
  uVar7 = 0;
  puVar2 = (undefined8 *)
           FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x18,&UNK_180958b20,0x280,0,
                         in_stack_ffffffffffffffe0 & 0xffffffffffffff00,1);
  if (puVar2 == (undefined8 *)0x0) {
    uVar5 = 0x26;
  }
  else {
    puVar2[2] = param_1;
    *puVar2 = param_2;
    puVar2[1] = param_3;
    lVar3 = _beginthreadex(0,param_6,FUN_180768000,puVar2,0,0);
    if (lVar3 != 0) {
      if (param_5 == 0xffff7ffe) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = uVar7;
        if (param_5 != 0xffff7ffd) {
          if (param_5 == 0xffff7ffc) {
            uVar6 = 1;
          }
          else if (param_5 == 0xffff7ffb) {
            uVar6 = 2;
          }
          else {
            uVar6 = 0xf;
            if (param_5 != 0xffff7ffa) {
              if (param_5 == 0xffff7ff9) {
                param_5 = 0xf;
              }
              uVar6 = (ulonglong)param_5;
            }
          }
        }
      }
      uVar8 = uVar7;
      if (((param_4 != 0x4000000000000001) && (param_4 != 0x4000000000000002)) &&
         (uVar8 = param_4, param_4 == 0x4000000000000003)) {
        uVar8 = uVar7;
      }
      iVar1 = SetThreadPriority(lVar3,uVar6);
      if ((iVar1 != 0) && ((uVar8 == 0 || (lVar4 = SetThreadAffinityMask(lVar3,uVar8), lVar4 != 0)))
         ) {
        *param_7 = lVar3;
        return 0;
      }
    }
    uVar5 = 0x1c;
  }
  return uVar5;
}



undefined8 FUN_180768b50(ulonglong *param_1)

{
  uint uVar1;
  
  uVar1 = GetCurrentThreadId();
  *param_1 = (ulonglong)uVar1;
  return 0;
}



undefined8 FUN_180768b70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = timeGetTime();
  *param_1 = uVar1;
  return 0;
}



undefined8 FUN_180768b90(int *param_1)

{
  int iVar1;
  longlong lStackX_10;
  longlong alStackX_18 [2];
  
  iVar1 = QueryPerformanceCounter(&lStackX_10);
  if (iVar1 != 0) {
    QueryPerformanceFrequency(alStackX_18);
    *param_1 = (int)((lStackX_10 * 1000000) / alStackX_18[0]);
    return 0;
  }
  iVar1 = timeGetTime();
  *param_1 = iVar1 * 1000;
  return 0;
}



undefined8 FUN_180768bf0(void)

{
  Sleep();
  return 0;
}



undefined8 * FUN_180768c40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180958ba0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x1f0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180768c70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  lVar2 = *(longlong *)(param_1 + 0x1e0);
  lVar3 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(int *)(param_1 + 0x15c) + 1,
                        &UNK_180958c10,0x6d0,0);
  *(longlong *)(param_1 + 0x1e8) = lVar3;
  if (lVar3 == 0) {
    return 0x26;
  }
  *(longlong *)(param_1 + 0x1e0) = lVar3;
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lVar3,lVar2,*(undefined4 *)(param_1 + 0x15c));
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar1,&UNK_180958c10,0x6df,1);
  }
  return 0;
}



ulonglong FUN_180768d60(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x180);
  if ((uVar2 != 0) && (1 < uVar2 - 0xf)) {
    return (ulonglong)uVar2;
  }
  uVar2 = *(uint *)(param_1 + 0x16c);
  if ((*(uint *)(param_1 + 0x170) < uVar2) ||
     (((*(uint *)(param_1 + 0x164) < *(uint *)(param_1 + 0x15c) &&
       ((*(uint *)(param_1 + 0x194) & 0xa0) == 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x16c),
      uVar2 < (uint)(*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x164)))))) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x16c);
    iVar1 = (int)((((float)*(uint *)(param_1 + 0x174) - (float)uVar2) /
                  (float)*(uint *)(param_1 + 0x15c)) * 100.0);
    *(int *)(param_1 + 0x17c) = iVar1;
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x160) != 0)) {
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
    uVar5 = ((*(int *)(param_1 + 0x170) - uVar2) + -1 + *(uint *)(param_1 + 0x164)) /
            *(uint *)(param_1 + 0x164);
  }
  if (*(int *)(param_1 + 0x160) == 0) {
LAB_180768e5f:
    if (uVar5 == 2) goto LAB_180768eb3;
  }
  else {
    if (2 < (int)uVar5) {
      *(undefined4 *)(param_1 + 0x160) = 0;
      goto LAB_180768e5f;
    }
    uVar5 = 0xffffffff;
    *(uint *)(param_1 + 0x170) = uVar2 - *(int *)(param_1 + 0x158);
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x160);
  }
  if ((*(uint *)(param_1 + 0x194) & 8) != 0) {
    *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 0x10;
    iVar1 = *(int *)(param_1 + 400);
    while (iVar1 != 0) {
      FUN_180768bf0(10);
      iVar1 = *(int *)(param_1 + 400);
    }
    *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) & 0xffffffef;
  }
LAB_180768eb3:
  if ((uVar5 == 1) && (*(uint *)(param_1 + 0x164) < *(uint *)(param_1 + 0x15c))) {
    iVar1 = *(int *)(param_1 + 400);
    while (iVar1 != 0) {
      FUN_180768bf0(10);
      iVar1 = *(int *)(param_1 + 400);
    }
    *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 0x28;
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x170);
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + *(int *)(param_1 + 0x164);
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  }
  else if (((*(uint *)(param_1 + 0x15c) <= *(uint *)(param_1 + 0x164)) || (uVar5 != 2)) &&
          ((*(uint *)(param_1 + 0x15c) != *(uint *)(param_1 + 0x164) || (uVar5 != 1)))) {
    if ((uVar5 == 0) ||
       (((*(uint *)(param_1 + 0x194) & 1) == 0 || (uVar3 = FUN_18076a5d0(param_1), (int)uVar3 == 0))
       )) {
      uVar4 = FUN_1807693d0(param_1,1);
      uVar3 = uVar4 & 0xffffffff;
      if ((uVar4 & 0xffffffef) == 0) {
        uVar2 = *(uint *)(param_1 + 0x164);
        *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) & 0xffffffef;
        if (((*(uint *)(param_1 + 0x15c) == uVar2) && ((int)uVar4 == 0x10)) &&
           (*(int *)(param_1 + 0x20) == -1)) {
          return uVar4 & 0xffffffff;
        }
        *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + uVar2;
        if (uVar2 <= *(uint *)(param_1 + 0x158)) {
          uVar2 = FUN_1807693d0(param_1,CONCAT71((int7)(uVar3 >> 8),1));
          uVar3 = (ulonglong)uVar2;
          if ((uVar2 & 0xffffffef) == 0) {
            *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x170);
            *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + *(int *)(param_1 + 0x164);
            *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) & 0xffffffef;
          }
          else if (uVar2 == 0xf) {
            *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 0x10;
            return uVar3;
          }
        }
      }
      else {
        uVar3 = uVar4;
        if ((int)uVar4 == 0xf) {
          *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 0x10;
          return uVar4;
        }
      }
    }
    return uVar3;
  }
  return 0;
}



ulonglong FUN_180768d89(float param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong in_RCX;
  longlong unaff_RBX;
  uint uVar4;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  if ((*(uint *)(in_RCX + 0x170) < param_3) ||
     (((*(uint *)(in_RCX + 0x164) < *(uint *)(in_RCX + 0x15c) &&
       ((*(uint *)(in_RCX + 0x194) & 0xa0) == 0)) &&
      (param_3 = *(uint *)(in_RCX + 0x16c),
      param_3 < (uint)(*(int *)(unaff_RBX + 0x170) - *(int *)(unaff_RBX + 0x164)))))) {
    uVar4 = 0xffffffff;
  }
  else {
    param_3 = *(uint *)(unaff_RBX + 0x16c);
    param_1 = (float)param_3;
    iVar1 = (int)((((float)*(uint *)(unaff_RBX + 0x174) - param_1) /
                  (float)*(uint *)(unaff_RBX + 0x15c)) * 100.0);
    *(int *)(unaff_RBX + 0x17c) = iVar1;
    if ((iVar1 < 0) || (*(int *)(unaff_RBX + 0x160) != param_4)) {
      *(int *)(unaff_RBX + 0x17c) = param_4;
    }
    uVar4 = ((*(int *)(unaff_RBX + 0x170) - param_3) + -1 + *(uint *)(unaff_RBX + 0x164)) /
            *(uint *)(unaff_RBX + 0x164);
  }
  if (*(int *)(unaff_RBX + 0x160) == 0) {
LAB_180768e5f:
    if (uVar4 == 2) goto LAB_180768eb3;
  }
  else {
    if (2 < (int)uVar4) {
      *(int *)(unaff_RBX + 0x160) = param_4;
      goto LAB_180768e5f;
    }
    uVar4 = 0xffffffff;
    *(uint *)(unaff_RBX + 0x170) = param_3 - *(int *)(unaff_RBX + 0x158);
    *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x160);
  }
  if ((*(uint *)(unaff_RBX + 0x194) & 8) != 0) {
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
    iVar1 = *(int *)(unaff_RBX + 400);
    while (iVar1 != 0) {
      param_1 = (float)FUN_180768bf0(10);
      iVar1 = *(int *)(unaff_RBX + 400);
    }
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
  }
LAB_180768eb3:
  if ((uVar4 == 1) && (*(uint *)(unaff_RBX + 0x164) < *(uint *)(unaff_RBX + 0x15c))) {
    iVar1 = *(int *)(unaff_RBX + 400);
    while (iVar1 != 0) {
      FUN_180768bf0(10);
      iVar1 = *(int *)(unaff_RBX + 400);
    }
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x28;
    *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
    *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
    *(int *)(unaff_RBX + 400) = *(int *)(unaff_RBX + 400) + 1;
  }
  else if (((*(uint *)(unaff_RBX + 0x15c) <= *(uint *)(unaff_RBX + 0x164)) || (uVar4 != 2)) &&
          ((*(uint *)(unaff_RBX + 0x15c) != *(uint *)(unaff_RBX + 0x164) || (uVar4 != 1)))) {
    if ((uVar4 == 0) ||
       (((*(uint *)(unaff_RBX + 0x194) & 1) == 0 ||
        (uVar2 = FUN_18076a5d0(), param_1 = extraout_XMM0_Da, (int)uVar2 == 0)))) {
      uVar3 = FUN_1807693d0(param_1,1);
      uVar2 = uVar3 & 0xffffffff;
      if ((uVar3 & 0xffffffef) == 0) {
        uVar4 = *(uint *)(unaff_RBX + 0x164);
        *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
        if (((*(uint *)(unaff_RBX + 0x15c) == uVar4) && ((int)uVar3 == 0x10)) &&
           (*(int *)(unaff_RBX + 0x20) == -1)) {
          return uVar3 & 0xffffffff;
        }
        *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
        *(uint *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + uVar4;
        if (uVar4 <= *(uint *)(unaff_RBX + 0x158)) {
          uVar4 = FUN_1807693d0(extraout_XMM0_Da_00,CONCAT71((int7)(uVar2 >> 8),1));
          uVar2 = (ulonglong)uVar4;
          if ((uVar4 & 0xffffffef) == 0) {
            *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
            *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
            *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
          }
          else if (uVar4 == 0xf) {
            *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
            return uVar2;
          }
        }
      }
      else {
        uVar2 = uVar3;
        if ((int)uVar3 == 0xf) {
          *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
          return uVar3;
        }
      }
    }
    return uVar2;
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000180768ebc)
// WARNING: Removing unreachable block (ram,0x000180768eca)
// WARNING: Removing unreachable block (ram,0x000180768ed4)
// WARNING: Removing unreachable block (ram,0x000180768ee8)
// WARNING: Removing unreachable block (ram,0x000180768f1d)

ulonglong FUN_180768f2a(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 in_EAX;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  
  *(int *)(unaff_RBX + 0x170) = param_3 - *(int *)(unaff_RBX + 0x158);
  *(undefined4 *)(unaff_RBX + 0x174) = in_EAX;
  if ((*(uint *)(unaff_RBX + 0x194) & 8) != 0) {
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
    iVar1 = *(int *)(unaff_RBX + 400);
    while (iVar1 != 0) {
      FUN_180768bf0(10);
      iVar1 = *(int *)(unaff_RBX + 400);
    }
    *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
  }
  if (((*(uint *)(unaff_RBX + 0x194) & 1) == 0) || (uVar3 = FUN_18076a5d0(), (int)uVar3 == 0)) {
    uVar4 = FUN_1807693d0();
    uVar3 = uVar4 & 0xffffffff;
    if ((uVar4 & 0xffffffef) == 0) {
      uVar2 = *(uint *)(unaff_RBX + 0x164);
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
      if (((*(uint *)(unaff_RBX + 0x15c) == uVar2) && ((int)uVar4 == 0x10)) &&
         (*(int *)(unaff_RBX + 0x20) == -1)) {
        return uVar4 & 0xffffffff;
      }
      *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
      *(uint *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + uVar2;
      if (uVar2 <= *(uint *)(unaff_RBX + 0x158)) {
        uVar2 = FUN_1807693d0();
        uVar3 = (ulonglong)uVar2;
        if ((uVar2 & 0xffffffef) == 0) {
          *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
          *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
          *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
        }
        else if (uVar2 == 0xf) {
          *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
          return uVar3;
        }
      }
    }
    else {
      uVar3 = uVar4;
      if ((int)uVar4 == 0xf) {
        *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
        return uVar4;
      }
    }
  }
  return uVar3;
}



uint FUN_180768fba(undefined8 param_1,uint param_2)

{
  uint uVar1;
  longlong unaff_RBX;
  
  uVar1 = *(uint *)(unaff_RBX + 0x164);
  *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
  if (((*(uint *)(unaff_RBX + 0x15c) == uVar1) && (param_2 == 0x10)) &&
     (*(int *)(unaff_RBX + 0x20) == -1)) {
    return 0x10;
  }
  *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
  *(uint *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + uVar1;
  if (uVar1 <= *(uint *)(unaff_RBX + 0x158)) {
    param_2 = FUN_1807693d0();
    if ((param_2 & 0xffffffef) == 0) {
      *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
      *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
    }
    else if (param_2 == 0xf) {
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
      return 0xf;
    }
  }
  return param_2;
}



uint FUN_180768fef(uint param_1,uint param_2)

{
  longlong unaff_RBX;
  
  *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
  *(uint *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + param_1;
  if (param_1 <= *(uint *)(unaff_RBX + 0x158)) {
    param_2 = FUN_1807693d0();
    if ((param_2 & 0xffffffef) == 0) {
      *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
      *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
    }
    else if (param_2 == 0xf) {
      *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) | 0x10;
      return 0xf;
    }
  }
  return param_2;
}



undefined4 FUN_18076903f(undefined8 param_1,undefined4 param_2)

{
  longlong unaff_RBX;
  
  *(int *)(unaff_RBX + 0x174) = *(int *)(unaff_RBX + 0x170);
  *(int *)(unaff_RBX + 0x170) = *(int *)(unaff_RBX + 0x170) + *(int *)(unaff_RBX + 0x164);
  *(uint *)(unaff_RBX + 0x194) = *(uint *)(unaff_RBX + 0x194) & 0xffffffef;
  return param_2;
}





