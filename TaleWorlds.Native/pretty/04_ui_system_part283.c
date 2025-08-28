#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part283.c - 2 个函数

// 函数: void FUN_18082a780(undefined8 param_1,longlong *param_2)
void FUN_18082a780(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong auStack_28 [2];
  
  auStack_28[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_28;
  uVar5 = (int)param_2[2] + 0x10;
  uVar4 = (uVar5 & 7) + 0x18;
  uVar3 = (uVar4 & 7) + 0x18;
  uVar2 = (uVar3 & 7) + 0x18;
  *(uint *)(param_2 + 2) = uVar2 & 7;
  *param_2 = *param_2 +
             (ulonglong)(uVar2 >> 3) + (ulonglong)(uVar3 >> 3) + (ulonglong)(uVar4 >> 3) +
             ((longlong)(int)uVar5 >> 3);
  iVar1 = FUN_18080b990(param_2,6);
  uVar2 = (int)param_2[2] + 8;
  *(uint *)(param_2 + 2) = uVar2 & 7;
  *param_2 = *param_2 + ((longlong)(int)uVar2 >> 3);
                    // WARNING: Subroutine does not return
  FUN_1808fd200(iVar1 + 4U & 0xfffffffc);
}



undefined8 FUN_18082a950(uint *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar4 = FUN_18080b990(param_3,0x10);
  *param_1 = uVar4;
  if (uVar4 < 3) {
    uVar4 = FUN_18080b990(param_3,0x18);
    param_1[6] = uVar4;
    uVar4 = FUN_18080b990(param_3,0x18);
    param_1[7] = uVar4;
    iVar5 = FUN_18080b990(param_3,0x18);
    param_1[8] = iVar5 + 1;
    cVar2 = FUN_18080b990(param_3,6);
    *(char *)(param_1 + 9) = cVar2 + '\x01';
    bVar3 = FUN_18080b990(param_3,8);
    *(byte *)((longlong)param_1 + 0x25) = bVar3;
    if ((int)(uint)bVar3 < *(int *)(lVar1 + 0x18)) {
      uVar7 = func_0x0001807b17e0((int)(char)param_1[9]);
      *(undefined8 *)(param_1 + 2) = uVar7;
      uVar7 = func_0x0001807b17e0((int)(char)param_1[9] << 3);
      cVar2 = (char)param_1[9];
      iVar5 = 0;
      *(undefined8 *)(param_1 + 4) = uVar7;
      if ('\0' < cVar2) {
        lVar9 = 0;
        do {
          bVar3 = FUN_18080b990(param_3,3);
          iVar6 = FUN_18080b990(param_3,1);
          if (iVar6 != 0) {
            cVar2 = FUN_18080b990(param_3,5);
            bVar3 = bVar3 | cVar2 << 3;
          }
          iVar5 = iVar5 + 1;
          *(byte *)(lVar9 + *(longlong *)(param_1 + 2)) = bVar3;
          lVar9 = lVar9 + 1;
          cVar2 = (char)param_1[9];
        } while (iVar5 < cVar2);
      }
      iVar5 = 0;
      if ('\0' < cVar2) {
        lVar9 = 0;
        iVar6 = 0;
        do {
          iVar8 = 0;
          do {
            if ((*(byte *)(lVar9 + *(longlong *)(param_1 + 2)) >> ((byte)iVar8 & 0x1f) & 1) == 0) {
              *(undefined1 *)((longlong)(iVar6 + iVar8) + *(longlong *)(param_1 + 4)) = 0xff;
            }
            else {
              bVar3 = FUN_18080b990(param_3,8);
              if (*(int *)(lVar1 + 0x18) <= (int)(uint)bVar3) {
                return 1;
              }
              *(byte *)((longlong)(iVar6 + iVar8) + *(longlong *)(param_1 + 4)) = bVar3;
              if ((int)*(char *)((longlong)param_1 + 0x26) < iVar8 + 1) {
                *(byte *)((longlong)param_1 + 0x26) = (byte)iVar8 + 1;
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 8);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 8;
          lVar9 = lVar9 + 1;
        } while (iVar5 < (char)param_1[9]);
      }
      uVar7 = func_0x00018080b960(param_3);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
    }
  }
  return 1;
}



uint FUN_18082ab40(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar4 = 0;
  iVar1 = FUN_18080b990(param_2,1);
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  else {
    iVar1 = FUN_18080b990(param_2,4);
    uVar5 = iVar1 + 1;
  }
  iVar1 = FUN_18080b990(param_2,1);
  if (iVar1 != 0) {
    iVar1 = FUN_18080b990(param_2);
    uVar2 = iVar1 + 1;
    uVar4 = uVar2 * 2 + 3 & 0xfffffffc;
    if (0 < (int)uVar2) {
      uVar6 = *(uint *)(param_2 + 2);
      lVar7 = *param_2;
      uVar8 = (ulonglong)uVar2;
      do {
        iVar1 = 0;
        uVar2 = *(int *)(param_1 + 4) - 1;
        if (*(int *)(param_1 + 4) == 0) {
          uVar2 = 0;
        }
        uVar3 = (ulonglong)uVar2;
        if (uVar2 != 0) {
          do {
            iVar1 = iVar1 + 1;
            uVar2 = (uint)uVar3;
            uVar3 = uVar3 >> 1;
          } while (1 < uVar2);
        }
        uVar2 = uVar6 + iVar1 * 2;
        uVar6 = uVar2 & 7;
        lVar7 = lVar7 + ((longlong)(int)uVar2 >> 3);
        *(uint *)(param_2 + 2) = uVar6;
        *param_2 = lVar7;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  uVar2 = (int)param_2[2] + 2;
  uVar6 = uVar2 & 7;
  lVar7 = ((longlong)(int)uVar2 >> 3) + *param_2;
  *(uint *)(param_2 + 2) = uVar6;
  *param_2 = lVar7;
  if (1 < (int)uVar5) {
    uVar4 = uVar4 + 3 + *(int *)(param_1 + 4) & 0xfffffffc;
    uVar2 = uVar6 + *(int *)(param_1 + 4) * 4;
    uVar6 = uVar2 & 7;
    *(uint *)(param_2 + 2) = uVar6;
    *param_2 = ((longlong)(int)uVar2 >> 3) + lVar7;
  }
  if (0 < (int)uVar5) {
    uVar8 = (ulonglong)uVar5;
    do {
      uVar2 = uVar6 + 0x18;
      uVar6 = uVar2 & 7;
      *param_2 = *param_2 + ((longlong)(int)uVar2 >> 3);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    *(uint *)(param_2 + 2) = uVar6;
  }
  return uVar5 * 2 + 3 + uVar4 & 0xfffffffc;
}



undefined8 FUN_18082aca0(int *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar10;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar5 = FUN_18080b990(param_3,1);
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = FUN_18080b990(param_3,4);
    iVar5 = iVar5 + 1;
  }
  *param_1 = iVar5;
  iVar5 = FUN_18080b990(param_3,1);
  uVar11 = 0;
  if (iVar5 != 0) {
    iVar5 = FUN_18080b990(param_3,8);
    param_1[6] = iVar5 + 1;
    uVar6 = func_0x0001807b17e0((iVar5 + 1) * 2);
    *(undefined8 *)(param_1 + 8) = uVar6;
    if (0 < param_1[6]) {
      iVar5 = *(int *)(param_2 + 4);
      uVar10 = uVar11;
      uVar12 = uVar11;
      do {
        uVar9 = iVar5 - 1;
        if (iVar5 == 0) {
          uVar9 = 0;
        }
        uVar7 = (ulonglong)uVar9;
        uVar8 = uVar11;
        if (uVar9 != 0) {
          do {
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar9 = (uint)uVar7;
            uVar7 = uVar7 >> 1;
          } while (1 < uVar9);
        }
        bVar2 = FUN_18080b990(param_3,uVar8);
        *(byte *)(uVar12 + *(longlong *)(param_1 + 8)) = bVar2;
        uVar9 = *(int *)(param_2 + 4) - 1;
        if (*(int *)(param_2 + 4) == 0) {
          uVar9 = 0;
        }
        uVar7 = (ulonglong)uVar9;
        uVar8 = uVar11;
        if (uVar9 != 0) {
          do {
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar9 = (uint)uVar7;
            uVar7 = uVar7 >> 1;
          } while (1 < uVar9);
        }
        bVar3 = FUN_18080b990(param_3,uVar8);
        *(byte *)(uVar12 + 1 + *(longlong *)(param_1 + 8)) = bVar3;
        if ((((uint)bVar2 == (uint)bVar3) ||
            (iVar5 = *(int *)(param_2 + 4), iVar5 <= (int)(uint)bVar2)) ||
           (iVar5 <= (int)(uint)bVar3)) goto LAB_18082aeb4;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        uVar12 = uVar12 + 2;
      } while ((int)uVar9 < param_1[6]);
    }
  }
  iVar5 = FUN_18080b990(param_3,2);
  if (iVar5 < 1) {
    if (1 < *param_1) {
      uVar6 = func_0x0001807b17e0(*(undefined4 *)(param_2 + 4));
      *(undefined8 *)(param_1 + 2) = uVar6;
      uVar10 = uVar11;
      uVar12 = uVar11;
      if (0 < *(int *)(param_2 + 4)) {
        do {
          uVar4 = FUN_18080b990(param_3,4);
          *(undefined1 *)(uVar12 + *(longlong *)(param_1 + 2)) = uVar4;
          if (*param_1 <= (int)(uint)*(byte *)(*(longlong *)(param_1 + 2) + uVar12))
          goto LAB_18082aeb4;
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          uVar12 = uVar12 + 1;
        } while ((int)uVar9 < *(int *)(param_2 + 4));
      }
    }
    uVar6 = func_0x0001807b17e0(*param_1 * 2);
    *(undefined8 *)(param_1 + 4) = uVar6;
    uVar10 = uVar11;
    if (0 < *param_1) {
      do {
        FUN_18080b990(param_3,8);
        uVar4 = FUN_18080b990(param_3,8);
        *(undefined1 *)(uVar10 + *(longlong *)(param_1 + 4)) = uVar4;
        if (*(int *)(lVar1 + 0x10) <= (int)*(char *)(uVar10 + *(longlong *)(param_1 + 4)))
        goto LAB_18082aeb4;
        uVar4 = FUN_18080b990(param_3,8);
        *(undefined1 *)(uVar10 + 1 + *(longlong *)(param_1 + 4)) = uVar4;
        if (*(int *)(lVar1 + 0x14) <= (int)*(char *)(uVar10 + 1 + *(longlong *)(param_1 + 4)))
        goto LAB_18082aeb4;
        uVar9 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
        uVar10 = uVar10 + 2;
      } while ((int)uVar9 < *param_1);
    }
    uVar6 = 0;
  }
  else {
LAB_18082aeb4:
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18082aee0(longlong *param_1,undefined8 param_2)
void FUN_18082aee0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  longlong lStack_70;
  undefined8 uStack_50;
  longlong lStack_38;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  lStack_38 = *param_1;
  lStack_70 = *(longlong *)(lStack_38 + 0x20);
  uStack_80 = *(undefined4 *)(lStack_70 + (longlong)(int)param_1[5] * 4);
  uStack_50 = param_2;
                    // WARNING: Subroutine does not return
  FUN_1808fd200((longlong)*(int *)(lStack_38 + 4),0xffffffffffffff0);
}





