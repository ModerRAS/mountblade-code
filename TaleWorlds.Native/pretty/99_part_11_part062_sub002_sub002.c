#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_11_part062_sub002_sub002.c - 1 个函数

// 函数: void FUN_1807c06a0(void)
void FUN_1807c06a0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t FUN_1807c09e0(longlong param_1,uint64_t param_2,uint param_3,int param_4)

{
  int8_t uVar1;
  int8_t uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if (param_4 == 0x100) {
    FUN_18080d060(param_1,0);
    *(uint *)(param_1 + 0xbfc) = param_3;
    *(uint *)(param_1 + 0xc0c) = param_3;
    return 0;
  }
  if (param_4 != 2) {
    return 0x13;
  }
  uVar4 = *(uint *)(param_1 + 0x858);
  bVar6 = param_3 < uVar4;
  if (param_3 != uVar4) {
    if (bVar6) {
      FUN_18080d060(param_1,0);
      uVar4 = *(uint *)(param_1 + 0x858);
    }
    if (uVar4 < param_3) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0xbec);
      do {
        if ((int)uVar5 == 0) {
          if ((*(char *)(param_1 + 0xbe9) == '\0') || (*(char *)(param_1 + 0xbea) != '\0')) {
            if (-1 < *(int *)(param_1 + 0xc0c)) {
              *(int *)(param_1 + 0xbfc) = *(int *)(param_1 + 0xc0c);
              *(int32_t *)(param_1 + 0xc0c) = 0xffffffff;
            }
            if (-1 < *(int *)(param_1 + 0xc08)) {
              *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xc08);
              *(int32_t *)(param_1 + 0xc08) = 0xffffffff;
            }
            FUN_1807c13e0(param_1,CONCAT71((int7)(uVar5 >> 8),1));
            if ((*(int *)(param_1 + 0xc08) == -1) &&
               (iVar3 = *(int *)(param_1 + 0xbf8) + 1, *(int *)(param_1 + 0xc08) = iVar3,
               0x3f < iVar3)) {
              iVar3 = *(int *)(param_1 + 0xbfc) + 1;
              *(int *)(param_1 + 0xc0c) = iVar3;
              if (*(int *)(param_1 + 0x8ec) <= iVar3) {
                *(int32_t *)(param_1 + 0xc0c) = *(int32_t *)(param_1 + 0xbd0);
              }
              *(int32_t *)(param_1 + 0xc08) = 0;
            }
          }
          else {
            FUN_18080d690(param_1);
          }
        }
        else {
          FUN_1807c0cf0(param_1);
        }
        if (*(int *)(param_1 + 0xbf0) == 0) {
          *(int8_t *)(param_1 + 0xbe9) = 1;
          uVar5 = 0xffffffff;
          *(int32_t *)(param_1 + 0xbec) = 0xffffffff;
        }
        else {
          uVar4 = *(int *)(param_1 + 0xbec) + 1;
          *(uint *)(param_1 + 0xbec) = uVar4;
          uVar5 = (ulonglong)uVar4;
          if (*(int *)(param_1 + 0xbf0) + *(int *)(param_1 + 0xc00) <= (int)uVar4) {
            *(int32_t *)(param_1 + 0xc00) = 0;
            *(int32_t *)(param_1 + 0xbec) = 0;
            uVar5 = 0;
          }
        }
        *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x854);
      } while (*(uint *)(param_1 + 0x858) < param_3);
    }
    if (bVar6) {
      uVar1 = *(int8_t *)(param_1 + 0xbe8);
      uVar2 = *(int8_t *)(param_1 + 0xbe9);
      FUN_18080d690(param_1);
      *(int8_t *)(param_1 + 0xbe8) = uVar1;
      *(int8_t *)(param_1 + 0xbe9) = uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1807c0a29(uint64_t param_1)

{
  int8_t uVar1;
  int8_t uVar2;
  uint in_EAX;
  int iVar3;
  longlong unaff_RBX;
  uint unaff_EDI;
  bool bVar4;
  
  bVar4 = unaff_EDI < in_EAX;
  if (unaff_EDI != in_EAX) {
    if (bVar4) {
      FUN_18080d060(param_1,0);
      in_EAX = *(uint *)(unaff_RBX + 0x858);
    }
    if (in_EAX < unaff_EDI) {
      iVar3 = *(int *)(unaff_RBX + 0xbec);
      do {
        if (iVar3 == 0) {
          if ((*(char *)(unaff_RBX + 0xbe9) == '\0') || (*(char *)(unaff_RBX + 0xbea) != '\0')) {
            if (-1 < *(int *)(unaff_RBX + 0xc0c)) {
              *(int *)(unaff_RBX + 0xbfc) = *(int *)(unaff_RBX + 0xc0c);
              *(int32_t *)(unaff_RBX + 0xc0c) = 0xffffffff;
            }
            if (-1 < *(int *)(unaff_RBX + 0xc08)) {
              *(int *)(unaff_RBX + 0xbf8) = *(int *)(unaff_RBX + 0xc08);
              *(int32_t *)(unaff_RBX + 0xc08) = 0xffffffff;
            }
            FUN_1807c13e0();
            if ((*(int *)(unaff_RBX + 0xc08) == -1) &&
               (iVar3 = *(int *)(unaff_RBX + 0xbf8) + 1, *(int *)(unaff_RBX + 0xc08) = iVar3,
               0x3f < iVar3)) {
              iVar3 = *(int *)(unaff_RBX + 0xbfc) + 1;
              *(int *)(unaff_RBX + 0xc0c) = iVar3;
              if (*(int *)(unaff_RBX + 0x8ec) <= iVar3) {
                *(int32_t *)(unaff_RBX + 0xc0c) = *(int32_t *)(unaff_RBX + 0xbd0);
              }
              *(int32_t *)(unaff_RBX + 0xc08) = 0;
            }
          }
          else {
            FUN_18080d690();
          }
        }
        else {
          FUN_1807c0cf0();
        }
        if (*(int *)(unaff_RBX + 0xbf0) == 0) {
          *(int8_t *)(unaff_RBX + 0xbe9) = 1;
          iVar3 = -1;
          *(int32_t *)(unaff_RBX + 0xbec) = 0xffffffff;
        }
        else {
          iVar3 = *(int *)(unaff_RBX + 0xbec) + 1;
          *(int *)(unaff_RBX + 0xbec) = iVar3;
          if (*(int *)(unaff_RBX + 0xbf0) + *(int *)(unaff_RBX + 0xc00) <= iVar3) {
            *(int32_t *)(unaff_RBX + 0xc00) = 0;
            *(int32_t *)(unaff_RBX + 0xbec) = 0;
            iVar3 = 0;
          }
        }
        *(int *)(unaff_RBX + 0x858) = *(int *)(unaff_RBX + 0x858) + *(int *)(unaff_RBX + 0x854);
      } while (*(uint *)(unaff_RBX + 0x858) < unaff_EDI);
    }
    if (bVar4) {
      uVar1 = *(int8_t *)(unaff_RBX + 0xbe8);
      uVar2 = *(int8_t *)(unaff_RBX + 0xbe9);
      FUN_18080d690();
      *(int8_t *)(unaff_RBX + 0xbe8) = uVar1;
      *(int8_t *)(unaff_RBX + 0xbe9) = uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1807c0a59(uint64_t param_1,int param_2)

{
  int8_t uVar1;
  int8_t uVar2;
  int iVar3;
  longlong unaff_RBX;
  char unaff_SIL;
  uint unaff_EDI;
  
  do {
    if (param_2 == 0) {
      if ((*(char *)(unaff_RBX + 0xbe9) == '\0') || (*(char *)(unaff_RBX + 0xbea) != '\0')) {
        if (-1 < *(int *)(unaff_RBX + 0xc0c)) {
          *(int *)(unaff_RBX + 0xbfc) = *(int *)(unaff_RBX + 0xc0c);
          *(int32_t *)(unaff_RBX + 0xc0c) = 0xffffffff;
        }
        if (-1 < *(int *)(unaff_RBX + 0xc08)) {
          *(int *)(unaff_RBX + 0xbf8) = *(int *)(unaff_RBX + 0xc08);
          *(int32_t *)(unaff_RBX + 0xc08) = 0xffffffff;
        }
        FUN_1807c13e0();
        if ((*(int *)(unaff_RBX + 0xc08) == -1) &&
           (iVar3 = *(int *)(unaff_RBX + 0xbf8) + 1, *(int *)(unaff_RBX + 0xc08) = iVar3,
           0x3f < iVar3)) {
          iVar3 = *(int *)(unaff_RBX + 0xbfc) + 1;
          *(int *)(unaff_RBX + 0xc0c) = iVar3;
          if (*(int *)(unaff_RBX + 0x8ec) <= iVar3) {
            *(int32_t *)(unaff_RBX + 0xc0c) = *(int32_t *)(unaff_RBX + 0xbd0);
          }
          *(int32_t *)(unaff_RBX + 0xc08) = 0;
        }
      }
      else {
        FUN_18080d690();
      }
    }
    else {
      FUN_1807c0cf0();
    }
    if (*(int *)(unaff_RBX + 0xbf0) == 0) {
      *(int8_t *)(unaff_RBX + 0xbe9) = 1;
      param_2 = -1;
      *(int32_t *)(unaff_RBX + 0xbec) = 0xffffffff;
    }
    else {
      param_2 = *(int *)(unaff_RBX + 0xbec) + 1;
      *(int *)(unaff_RBX + 0xbec) = param_2;
      if (*(int *)(unaff_RBX + 0xbf0) + *(int *)(unaff_RBX + 0xc00) <= param_2) {
        *(int32_t *)(unaff_RBX + 0xc00) = 0;
        *(int32_t *)(unaff_RBX + 0xbec) = 0;
        param_2 = 0;
      }
    }
    *(int *)(unaff_RBX + 0x858) = *(int *)(unaff_RBX + 0x858) + *(int *)(unaff_RBX + 0x854);
  } while (*(uint *)(unaff_RBX + 0x858) < unaff_EDI);
  if (unaff_SIL != '\0') {
    uVar1 = *(int8_t *)(unaff_RBX + 0xbe8);
    uVar2 = *(int8_t *)(unaff_RBX + 0xbe9);
    FUN_18080d690();
    *(int8_t *)(unaff_RBX + 0xbe8) = uVar1;
    *(int8_t *)(unaff_RBX + 0xbe9) = uVar2;
  }
  return 0;
}



uint64_t FUN_1807c0b78(void)

{
  int8_t uVar1;
  int8_t uVar2;
  longlong unaff_RBX;
  char unaff_SIL;
  
  if (unaff_SIL != '\0') {
    uVar1 = *(int8_t *)(unaff_RBX + 0xbe8);
    uVar2 = *(int8_t *)(unaff_RBX + 0xbe9);
    FUN_18080d690();
    *(int8_t *)(unaff_RBX + 0xbe8) = uVar1;
    *(int8_t *)(unaff_RBX + 0xbe9) = uVar2;
  }
  return 0;
}



uint64_t FUN_1807c0bb3(void)

{
  return 0x13;
}



uint64_t FUN_1807c0bd0(longlong param_1,char param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xbec) == 0) {
    if ((*(char *)(param_1 + 0xbe9) == '\0') || (*(char *)(param_1 + 0xbea) != '\0')) {
      if (-1 < *(int *)(param_1 + 0xc0c)) {
        *(int *)(param_1 + 0xbfc) = *(int *)(param_1 + 0xc0c);
        *(int32_t *)(param_1 + 0xc0c) = 0xffffffff;
      }
      if (-1 < *(int *)(param_1 + 0xc08)) {
        *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xc08);
        *(int32_t *)(param_1 + 0xc08) = 0xffffffff;
      }
      FUN_1807c13e0();
      if ((*(int *)(param_1 + 0xc08) == -1) &&
         (iVar1 = *(int *)(param_1 + 0xbf8) + 1, *(int *)(param_1 + 0xc08) = iVar1, 0x3f < iVar1)) {
        iVar1 = *(int *)(param_1 + 0xbfc) + 1;
        *(int *)(param_1 + 0xc0c) = iVar1;
        if (*(int *)(param_1 + 0x8ec) <= iVar1) {
          *(int32_t *)(param_1 + 0xc0c) = *(int32_t *)(param_1 + 0xbd0);
        }
        *(int32_t *)(param_1 + 0xc08) = 0;
      }
    }
    else {
      FUN_18080d690();
    }
  }
  else if (param_2 != '\0') {
    FUN_1807c0cf0();
  }
  if (*(int *)(param_1 + 0xbf0) == 0) {
    *(int8_t *)(param_1 + 0xbe9) = 1;
    *(int32_t *)(param_1 + 0xbec) = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0xbec) = *(int *)(param_1 + 0xbec) + 1;
    if (*(int *)(param_1 + 0xbf0) + *(int *)(param_1 + 0xc00) <= *(int *)(param_1 + 0xbec)) {
      *(int32_t *)(param_1 + 0xc00) = 0;
      *(int32_t *)(param_1 + 0xbec) = 0;
    }
  }
  *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x854);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807c0cf0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  void *puVar11;
  byte bVar12;
  int iStackX_8;
  longlong *plStackX_10;
  longlong lStackX_18;
  longlong *plStackX_20;
  
  lVar6 = (longlong)(*(int *)(param_1 + 0xbf8) * *(int *)(param_1 + 0x3c8)) * 5 +
          *(longlong *)
           ((ulonglong)*(byte *)((longlong)*(int *)(param_1 + 0xbfc) + 0x290 + param_1) * 0x10 + 8 +
           *(longlong *)(param_1 + 0x278));
  if ((lVar6 != 0) && (iStackX_8 = 0, 0 < *(int *)(param_1 + 0x3c8))) {
    plStackX_20 = (longlong *)(param_1 + 0x3d0);
    pbVar10 = (byte *)(lVar6 + 4);
    lStackX_18 = 0;
    do {
      lVar6 = *plStackX_20;
      if ((int)(uint)*(byte *)(lVar6 + 0xd0) < *(int *)(param_1 + 0x8fc)) {
        puVar11 = *(void **)
                   (*(longlong *)(param_1 + 0x848) + (ulonglong)*(byte *)(lVar6 + 0xd0) * 8);
      }
      else {
        puVar11 = &system_data_7a80;
      }
      plStackX_10 = *(longlong **)(lVar6 + 8);
      plVar1 = (longlong *)(lVar6 + 8);
      if ((plStackX_10 == plVar1) && (*(longlong **)(lVar6 + 0x10) == plVar1)) {
        plStackX_10 = (longlong *)0x180be7ac0;
      }
      bVar2 = *pbVar10;
      bVar3 = pbVar10[-1];
      bVar8 = bVar2 & 0xf;
      uVar7 = 0;
      *(int32_t *)((longlong)plStackX_10 + 0x4c) = 0;
      bVar12 = bVar2 >> 4;
      *(int32_t *)(plStackX_10 + 10) = 0;
      *(int8_t *)((longlong)plStackX_10 + 0x3c) = 0;
      switch(bVar3) {
      case 0:
        if (*pbVar10 != 0) {
          iVar5 = *(int *)(param_1 + 0xbec);
          iVar5 = iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                          (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
          if ((iVar5 == 1) || (bVar12 = bVar8, iVar5 == 2)) {
            *(uint *)(plStackX_10 + 10) =
                 (uint)(*(int *)((ulonglong)((uint)bVar12 + (uint)*(byte *)(lVar6 + 0xd1)) * 4 +
                                0x180be761c) * 0x20ab) / *(uint *)(puVar11 + 8) -
                 (uint)(*(int *)((ulonglong)*(byte *)(lVar6 + 0xd1) * 4 + 0x180be761c) * 0x20ab) /
                 *(uint *)(puVar11 + 8);
          }
          *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 1;
        }
        break;
      case 1:
        *(uint *)(plStackX_10 + 8) = (int)plStackX_10[8] + (uint)*pbVar10 * -4;
        if ((int)plStackX_10[8] < 0x38) {
          *(int32_t *)(plStackX_10 + 8) = 0x38;
        }
        *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 1;
        break;
      case 2:
        *(uint *)(plStackX_10 + 8) = (int)plStackX_10[8] + (uint)*pbVar10 * 4;
        *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 1;
        break;
      case 3:
        func_0x0001807c0620(lVar6);
        break;
      case 4:
        func_0x0001807c1c00(lVar6);
        break;
      case 5:
        func_0x0001807c0620(lVar6);
        if (bVar2 >> 4 == 0) {
code_r0x0001807c0f4f:
          if ((bVar8 != 0) &&
             (*(int *)((longlong)plStackX_10 + 0x44) =
                   *(int *)((longlong)plStackX_10 + 0x44) - (uint)bVar8,
             *(int *)((longlong)plStackX_10 + 0x44) < 0)) {
            *(int32_t *)((longlong)plStackX_10 + 0x44) = 0;
          }
        }
        else {
          *(int *)((longlong)plStackX_10 + 0x44) =
               *(int *)((longlong)plStackX_10 + 0x44) + (uint)bVar12;
          if (0x40 < *(int *)((longlong)plStackX_10 + 0x44)) {
            *(int32_t *)((longlong)plStackX_10 + 0x44) = 0x40;
            *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 2;
            break;
          }
        }
code_r0x0001807c0f70:
        *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 2;
        break;
      case 6:
        func_0x0001807c1c00(lVar6);
        if (bVar2 >> 4 == 0) goto code_r0x0001807c0f4f;
        *(int *)((longlong)plStackX_10 + 0x44) =
             *(int *)((longlong)plStackX_10 + 0x44) + (uint)bVar12;
        if (*(int *)((longlong)plStackX_10 + 0x44) < 0x41) goto code_r0x0001807c0f70;
        *(int32_t *)((longlong)plStackX_10 + 0x44) = 0x40;
        *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 2;
        break;
      case 7:
        bVar2 = *(byte *)(lVar6 + 0x10a);
        lVar4 = *plVar1;
        bVar3 = *(byte *)(lVar6 + 0x126) >> 4;
        bVar12 = bVar3 & 3;
        if ((bVar3 & 3) == 0) {
code_r0x0001807c1009:
          uVar7 = (uint)*(byte *)((ulonglong)(bVar2 & 0x1f) + 0x180be7500);
        }
        else if (bVar12 == 1) {
          bVar12 = (bVar2 & 0x1f) << 3;
          bVar3 = ~bVar12;
          if (-1 < (char)bVar2) {
            bVar3 = bVar12;
          }
          uVar7 = (uint)bVar3;
        }
        else if (bVar12 == 2) {
          uVar7 = 0xff;
        }
        else if (bVar12 == 3) goto code_r0x0001807c1009;
        uVar7 = *(byte *)(lVar6 + 0x10c) * uVar7 >> 6;
        if ((char)bVar2 < '\0') {
          uVar9 = uVar7;
          if ((short)(*(short *)(lVar4 + 0x44) - (short)uVar7) < 0) {
            uVar9 = *(uint *)(lVar4 + 0x44);
          }
        }
        else {
          uVar9 = 0x40 - *(int *)(lVar4 + 0x44);
          if ((int)(*(int *)(lVar4 + 0x44) + uVar7) < 0x41) {
            uVar9 = uVar7;
          }
        }
        *(uint *)(lVar4 + 0x4c) = uVar9;
        *(char *)(lVar6 + 0x10a) = *(char *)(lVar6 + 0x10a) + *(char *)(lVar6 + 0x10b);
        if ('\x1f' < *(char *)(lVar6 + 0x10a)) {
          *(char *)(lVar6 + 0x10a) = *(char *)(lVar6 + 0x10a) + -0x40;
        }
        *(byte *)(lVar4 + 0x3c) = *(byte *)(lVar4 + 0x3c) | 2;
        break;
      case 10:
        if (bVar2 >> 4 == 0) {
          if ((bVar8 != 0) &&
             (*(int *)((longlong)plStackX_10 + 0x44) =
                   *(int *)((longlong)plStackX_10 + 0x44) - (uint)bVar8,
             *(int *)((longlong)plStackX_10 + 0x44) < 0)) {
            *(int32_t *)((longlong)plStackX_10 + 0x44) = 0;
          }
        }
        else {
          *(int *)((longlong)plStackX_10 + 0x44) =
               *(int *)((longlong)plStackX_10 + 0x44) + (uint)bVar12;
          if (0x40 < *(int *)((longlong)plStackX_10 + 0x44)) {
            *(int32_t *)((longlong)plStackX_10 + 0x44) = 0x40;
            *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 2;
            break;
          }
        }
        *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 2;
        break;
      case 0xe:
        if (bVar12 == 9) {
          if ((bVar8 != 0) && (*(int *)(param_1 + 0xbec) % (int)(uint)bVar8 == 0)) {
            *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 8;
            *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 2;
            *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 4;
          }
          break;
        }
        if (bVar12 != 0xc) {
          if (bVar12 == 0xd) {
            if (*(uint *)(param_1 + 0xbec) == (uint)bVar8) {
              if ((plStackX_10 == (longlong *)0x180be7ac0) &&
                 (iVar5 = FUN_18080d590(param_1,lVar6,puVar11,&plStackX_10), iVar5 != 0)) {
                plStackX_10 = (longlong *)0x180be7ac0;
                system_system_buffer_ui = &system_data_7a80;
              }
              if (pbVar10[-3] != 0) {
                *(uint *)((longlong)plStackX_10 + 0x44) = (uint)(byte)puVar11[0xc];
                *(byte *)((longlong)plStackX_10 + 0x3c) =
                     *(byte *)((longlong)plStackX_10 + 0x3c) | 2;
              }
              *(uint *)(plStackX_10 + 9) = (uint)*(byte *)(lStackX_18 + 0x868 + param_1);
              *(int32_t *)(plStackX_10 + 8) = *(int32_t *)(lVar6 + 0xd4);
              *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 1;
              *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 4;
              *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 8;
              goto code_r0x0001807c120b;
            }
            *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) & 0xfd
            ;
            *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) & 0xfe
            ;
            *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) & 0xf7
            ;
          }
          break;
        }
        if (*(uint *)(param_1 + 0xbec) == (uint)bVar8) {
          *(int32_t *)((longlong)plStackX_10 + 0x44) = 0;
          *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) | 2;
        }
        goto code_r0x0001807c120b;
      }
code_r0x0001807c120b:
      lVar4 = lStackX_18;
      plStackX_10 = (longlong *)*plVar1;
      if ((plStackX_10 != plVar1) || (*(longlong **)(lVar6 + 0x10) != plVar1)) {
        if ((int)plStackX_10[10] + (int)plStackX_10[8] == 0) {
          *(byte *)((longlong)plStackX_10 + 0x3c) = *(byte *)((longlong)plStackX_10 + 0x3c) & 0xfe;
        }
        if ((*(byte *)((longlong)plStackX_10 + 0x3c) & 8) != 0) {
          FUN_18080d310(param_1,puVar11,plStackX_10,0,0);
        }
        plVar1 = (longlong *)plStackX_10[4];
        if (plVar1 != (longlong *)0x0) {
          if ((*(byte *)((longlong)plStackX_10 + 0x3c) & 2) != 0) {
            (**(code **)(*plVar1 + 0x20))
                      (plVar1,(float)(*(int *)((longlong)plStackX_10 + 0x4c) +
                                     *(int *)((longlong)plStackX_10 + 0x44)) * 0.0078125 *
                              *(float *)(lVar6 + 0xf0),0);
          }
          if ((*(byte *)((longlong)plStackX_10 + 0x3c) & 4) != 0) {
            (**(code **)(*(longlong *)plStackX_10[4] + 0xb0))
                      ((longlong *)plStackX_10[4],
                       ((float)(int)plStackX_10[9] - 128.0) * *(float *)(param_1 + 0xbd8) *
                       0.0078125);
          }
          if ((*(byte *)((longlong)plStackX_10 + 0x3c) & 1) != 0) {
            iVar5 = (int)plStackX_10[10] + (int)plStackX_10[8];
            if (iVar5 < 1) {
              iVar5 = 1;
            }
            FUN_180757470(plStackX_10[4],0xda7600 % (longlong)iVar5 & 0xffffffff);
          }
          if ((*(byte *)((longlong)plStackX_10 + 0x3c) & 0x20) != 0) {
            FUN_180758220(plStackX_10[4],0x80);
            *(int32_t *)(plStackX_10 + 0xb) = 0;
          }
        }
      }
      iStackX_8 = iStackX_8 + 1;
      plStackX_20 = plStackX_20 + 1;
      lStackX_18 = lVar4 + 1;
      pbVar10 = pbVar10 + 5;
    } while (iStackX_8 < *(int *)(param_1 + 0x3c8));
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807c0d50(longlong param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint64_t unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte bVar12;
  uint64_t unaff_RDI;
  longlong lVar13;
  uint uVar14;
  uint64_t in_R10;
  longlong in_R11;
  uint64_t unaff_R12;
  byte *pbVar15;
  void *puVar16;
  byte bVar17;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBX;
  plVar7 = (longlong *)(unaff_RSI + 0x3d0);
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  pbVar15 = (byte *)(param_1 + 4);
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  *(uint64_t *)(unaff_RBP + 0x77) = in_R10;
  *(longlong **)(unaff_RBP + 0x7f) = plVar7;
  do {
    lVar5 = *plVar7;
    *(uint64_t *)(unaff_RBP + 0x6f) = in_R10;
    if ((int)(uint)*(byte *)(lVar5 + 0xd0) < *(int *)(unaff_RSI + 0x8fc)) {
      puVar16 = *(void **)
                 (*(longlong *)(unaff_RSI + 0x848) + (ulonglong)*(byte *)(lVar5 + 0xd0) * 8);
    }
    else {
      puVar16 = &system_data_7a80;
    }
    plVar6 = *(longlong **)(lVar5 + 8);
    plVar7 = (longlong *)(lVar5 + 8);
    if ((plVar6 == plVar7) && (*(longlong **)(lVar5 + 0x10) == plVar7)) {
      plVar6 = (longlong *)0x180be7ac0;
    }
    bVar3 = *pbVar15;
    bVar4 = pbVar15[-1];
    *(longlong **)(unaff_RBP + 0x6f) = plVar6;
    bVar12 = bVar3 & 0xf;
    uVar10 = (uint)in_R10;
    *(uint *)((longlong)plVar6 + 0x4c) = uVar10;
    bVar17 = bVar3 >> 4;
    *(uint *)(*(longlong *)(unaff_RBP + 0x6f) + 0x50) = uVar10;
    *(int8_t *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c) = 0;
    switch(bVar4) {
    case 0:
      if (*pbVar15 != 0) {
        iVar8 = *(int *)(unaff_RSI + 0xbec);
        iVar8 = iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                        (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
        if ((iVar8 == 1) || (bVar17 = bVar12, iVar8 == 2)) {
          *(uint *)(*(longlong *)(unaff_RBP + 0x6f) + 0x50) =
               (uint)(*(int *)((ulonglong)((uint)bVar17 + (uint)*(byte *)(lVar5 + 0xd1)) * 4 +
                              0x180be761c) * 0x20ab) / *(uint *)(puVar16 + 8) -
               (uint)(*(int *)((ulonglong)*(byte *)(lVar5 + 0xd1) * 4 + 0x180be761c) * 0x20ab) /
               *(uint *)(puVar16 + 8);
        }
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
        *pbVar2 = *pbVar2 | 1;
      }
      break;
    case 1:
      piVar1 = (int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x40);
      *piVar1 = *piVar1 + (uint)*pbVar15 * -4;
      lVar9 = *(longlong *)(unaff_RBP + 0x6f);
      if (*(int *)(lVar9 + 0x40) < 0x38) {
        *(int32_t *)(lVar9 + 0x40) = 0x38;
        lVar9 = *(longlong *)(unaff_RBP + 0x6f);
      }
      *(byte *)(lVar9 + 0x3c) = *(byte *)(lVar9 + 0x3c) | 1;
      break;
    case 2:
      piVar1 = (int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x40);
      *piVar1 = *piVar1 + (uint)*pbVar15 * 4;
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
      *pbVar2 = *pbVar2 | 1;
      break;
    case 3:
      func_0x0001807c0620(lVar5);
      break;
    case 4:
      func_0x0001807c1c00(lVar5);
      break;
    case 5:
      func_0x0001807c0620(lVar5);
      if (bVar3 >> 4 == 0) {
code_r0x0001807c0f4f:
        if (bVar12 != 0) {
          piVar1 = (int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44);
          *piVar1 = *piVar1 - (uint)bVar12;
          if (*(int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44) < 0) {
            *(int32_t *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44) = 0;
          }
        }
      }
      else {
        piVar1 = (int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44);
        *piVar1 = *piVar1 + (uint)bVar17;
        if (0x40 < *(int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44)) {
          *(int32_t *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44) = 0x40;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
          *pbVar2 = *pbVar2 | 2;
          break;
        }
      }
code_r0x0001807c0f70:
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
      *pbVar2 = *pbVar2 | 2;
      break;
    case 6:
      func_0x0001807c1c00(lVar5);
      if (bVar3 >> 4 == 0) goto code_r0x0001807c0f4f;
      piVar1 = (int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44);
      *piVar1 = *piVar1 + (uint)bVar17;
      if (*(int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44) < 0x41) goto code_r0x0001807c0f70;
      *(int32_t *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44) = 0x40;
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
      *pbVar2 = *pbVar2 | 2;
      break;
    case 7:
      bVar3 = *(byte *)(lVar5 + 0x10a);
      lVar9 = *plVar7;
      bVar4 = *(byte *)(lVar5 + 0x126) >> 4;
      bVar17 = bVar4 & 3;
      if ((bVar4 & 3) == 0) {
code_r0x0001807c1009:
        uVar10 = (uint)*(byte *)((ulonglong)(bVar3 & 0x1f) + 0x180be7500);
      }
      else if (bVar17 == 1) {
        bVar17 = (bVar3 & 0x1f) << 3;
        bVar4 = ~bVar17;
        if (-1 < (char)bVar3) {
          bVar4 = bVar17;
        }
        uVar10 = (uint)bVar4;
      }
      else if (bVar17 == 2) {
        uVar10 = 0xff;
      }
      else if (bVar17 == 3) goto code_r0x0001807c1009;
      uVar10 = *(byte *)(lVar5 + 0x10c) * uVar10 >> 6;
      if ((char)bVar3 < '\0') {
        uVar14 = uVar10;
        if ((short)(*(short *)(lVar9 + 0x44) - (short)uVar10) < 0) {
          uVar14 = *(uint *)(lVar9 + 0x44);
        }
      }
      else {
        uVar14 = 0x40 - *(int *)(lVar9 + 0x44);
        if ((int)(*(int *)(lVar9 + 0x44) + uVar10) < 0x41) {
          uVar14 = uVar10;
        }
      }
      *(uint *)(lVar9 + 0x4c) = uVar14;
      *(char *)(lVar5 + 0x10a) = *(char *)(lVar5 + 0x10a) + *(char *)(lVar5 + 0x10b);
      if ('\x1f' < *(char *)(lVar5 + 0x10a)) {
        *(char *)(lVar5 + 0x10a) = *(char *)(lVar5 + 0x10a) + -0x40;
      }
      *(byte *)(lVar9 + 0x3c) = *(byte *)(lVar9 + 0x3c) | 2;
      break;
    case 10:
      if (bVar3 >> 4 == 0) {
        if (bVar12 != 0) {
          piVar1 = (int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44);
          *piVar1 = *piVar1 - (uint)bVar12;
          if (*(int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44) < 0) {
            *(uint *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44) = uVar10;
          }
        }
      }
      else {
        piVar1 = (int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44);
        *piVar1 = *piVar1 + (uint)bVar17;
        if (0x40 < *(int *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44)) {
          *(int32_t *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44) = 0x40;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
          *pbVar2 = *pbVar2 | 2;
          break;
        }
      }
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
      *pbVar2 = *pbVar2 | 2;
      break;
    case 0xe:
      if (bVar17 == 9) {
        if ((bVar12 != 0) && (*(int *)(unaff_RSI + 0xbec) % (int)(uint)bVar12 == 0)) {
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
          *pbVar2 = *pbVar2 | 8;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
          *pbVar2 = *pbVar2 | 2;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
          *pbVar2 = *pbVar2 | 4;
        }
        break;
      }
      if (bVar17 != 0xc) {
        if (bVar17 == 0xd) {
          if (*(uint *)(unaff_RSI + 0xbec) == (uint)bVar12) {
            lVar9 = *(longlong *)(unaff_RBP + 0x6f);
            if (lVar9 == 0x180be7ac0) {
              iVar8 = FUN_18080d590();
              if (iVar8 == 0) {
                lVar9 = *(longlong *)(unaff_RBP + 0x6f);
              }
              else {
                lVar9 = 0x180be7ac0;
                *(uint64_t *)(unaff_RBP + 0x6f) = 0x180be7ac0;
                system_system_buffer_ui = &system_data_7a80;
              }
            }
            if (pbVar15[-3] != 0) {
              *(uint *)(lVar9 + 0x44) = (uint)(byte)puVar16[0xc];
              pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
              *pbVar2 = *pbVar2 | 2;
              lVar9 = *(longlong *)(unaff_RBP + 0x6f);
            }
            lVar13 = *(longlong *)(unaff_RBP + 0x77);
            *(uint *)(lVar9 + 0x48) = (uint)*(byte *)(lVar13 + 0x868 + unaff_RSI);
            *(int32_t *)(*(longlong *)(unaff_RBP + 0x6f) + 0x40) = *(int32_t *)(lVar5 + 0xd4);
            pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
            *pbVar2 = *pbVar2 | 1;
            pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
            *pbVar2 = *pbVar2 | 4;
            pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
            *pbVar2 = *pbVar2 | 8;
            goto code_r0x0001807c120b;
          }
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
          *pbVar2 = *pbVar2 & 0xfd;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
          *pbVar2 = *pbVar2 & 0xfe;
          pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
          *pbVar2 = *pbVar2 & 0xf7;
        }
        break;
      }
      lVar13 = *(longlong *)(unaff_RBP + 0x77);
      if (*(uint *)(unaff_RSI + 0xbec) == (uint)bVar12) {
        *(uint *)(*(longlong *)(unaff_RBP + 0x6f) + 0x44) = uVar10;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + 0x6f) + 0x3c);
        *pbVar2 = *pbVar2 | 2;
      }
      goto code_r0x0001807c120b;
    }
    lVar13 = *(longlong *)(unaff_RBP + 0x77);
code_r0x0001807c120b:
    plVar6 = (longlong *)*plVar7;
    if ((plVar6 != plVar7) || (*(longlong **)(lVar5 + 0x10) != plVar7)) {
      *(longlong **)(unaff_RBP + 0x6f) = plVar6;
      if ((int)plVar6[10] + (int)plVar6[8] == 0) {
        *(byte *)((longlong)plVar6 + 0x3c) = *(byte *)((longlong)plVar6 + 0x3c) & 0xfe;
        plVar6 = *(longlong **)(unaff_RBP + 0x6f);
      }
      if ((*(byte *)((longlong)plVar6 + 0x3c) & 8) != 0) {
        FUN_18080d310();
        plVar6 = *(longlong **)(unaff_RBP + 0x6f);
      }
      plVar7 = (longlong *)plVar6[4];
      if (plVar7 != (longlong *)0x0) {
        if ((*(byte *)((longlong)plVar6 + 0x3c) & 2) != 0) {
          (**(code **)(*plVar7 + 0x20))
                    (plVar7,(float)(*(int *)((longlong)plVar6 + 0x4c) +
                                   *(int *)((longlong)plVar6 + 0x44)) * 0.0078125 *
                            *(float *)(lVar5 + 0xf0),0);
          plVar6 = *(longlong **)(unaff_RBP + 0x6f);
        }
        if ((*(byte *)((longlong)plVar6 + 0x3c) & 4) != 0) {
          (**(code **)(*(longlong *)plVar6[4] + 0xb0))
                    ((longlong *)plVar6[4],
                     ((float)(int)plVar6[9] - 128.0) * *(float *)(unaff_RSI + 0xbd8) * 0.0078125);
          plVar6 = *(longlong **)(unaff_RBP + 0x6f);
        }
        if ((*(byte *)((longlong)plVar6 + 0x3c) & 1) != 0) {
          iVar8 = (int)plVar6[10] + (int)plVar6[8];
          if (iVar8 < 1) {
            iVar8 = 1;
          }
          FUN_180757470(plVar6[4],0xda7600 % (longlong)iVar8 & 0xffffffff);
          plVar6 = *(longlong **)(unaff_RBP + 0x6f);
        }
        if ((*(byte *)((longlong)plVar6 + 0x3c) & 0x20) != 0) {
          FUN_180758220(plVar6[4],0x80);
          *(int32_t *)(*(longlong *)(unaff_RBP + 0x6f) + 0x58) = 0;
        }
      }
    }
    in_R10 = 0;
    iVar11 = *(int *)(unaff_RBP + 0x67) + 1;
    plVar7 = (longlong *)(*(longlong *)(unaff_RBP + 0x7f) + 8);
    *(int *)(unaff_RBP + 0x67) = iVar11;
    pbVar15 = pbVar15 + 5;
    *(longlong *)(unaff_RBP + 0x77) = lVar13 + 1;
    iVar8 = *(int *)(unaff_RSI + 0x3c8);
    *(longlong **)(unaff_RBP + 0x7f) = plVar7;
    if (iVar8 <= iVar11) {
      return 0;
    }
  } while( true );
}



uint64_t FUN_1807c138a(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807c13e0(longlong param_1,char param_2)

{
  longlong *plVar1;
  byte bVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  void *puVar13;
  byte bVar14;
  byte *pbVar15;
  int iStackX_20;
  longlong lStack_88;
  longlong lStack_78;
  
  bVar6 = false;
  iVar10 = *(int *)(param_1 + 0x3c8);
  pbVar15 = (byte *)((longlong)(iVar10 * *(int *)(param_1 + 0xbf8)) * 5 +
                    *(longlong *)
                     ((ulonglong)*(byte *)((longlong)*(int *)(param_1 + 0xbfc) + 0x290 + param_1) *
                      0x10 + 8 + *(longlong *)(param_1 + 0x278)));
  if (pbVar15 != (byte *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x288);
    if (lVar4 != 0) {
      lVar11 = (longlong)(*(int *)(param_1 + 0xbfc) * 0x100 + *(int *)(param_1 + 0xbf8));
      if (*(char *)(lVar11 + lVar4) != '\0') {
        *(int8_t *)(param_1 + 0xbe9) = 1;
        return 0;
      }
      *(int8_t *)(lVar11 + lVar4) = 1;
      iVar10 = *(int *)(param_1 + 0x3c8);
    }
    iStackX_20 = 0;
    if (0 < iVar10) {
      lStack_78 = 0;
      do {
        bVar2 = pbVar15[4];
        lVar4 = *(longlong *)(param_1 + 0x3d0 + lStack_78 * 8);
        plVar1 = (longlong *)(lVar4 + 8);
        lStack_88 = *plVar1;
        bVar12 = bVar2 & 0xf;
        bVar14 = bVar2 >> 4;
        if (((longlong *)lStack_88 == plVar1) && (*(longlong **)(lVar4 + 0x10) == plVar1)) {
          system_system_buffer_ui = &system_data_7a80;
          lStack_88 = 0x180be7ac0;
        }
        if (pbVar15[1] == 0) {
          bVar9 = *(byte *)(lVar4 + 0xd0);
        }
        else {
          bVar9 = pbVar15[1] - 1;
          *(byte *)(lVar4 + 0xd0) = bVar9;
        }
        if ((int)(uint)bVar9 < *(int *)(param_1 + 0x8fc)) {
          puVar13 = *(void **)(*(longlong *)(param_1 + 0x848) + (ulonglong)bVar9 * 8);
        }
        else {
          puVar13 = &system_data_7a80;
        }
        uVar3 = *(int32_t *)(lStack_88 + 0x40);
        iVar10 = *(int *)(lStack_88 + 0x44);
        if ((*(char *)(lVar4 + 0xd8) == '\a') && (pbVar15[3] != 7)) {
          *(int *)(lStack_88 + 0x44) = *(int *)(lStack_88 + 0x4c) + iVar10;
        }
        *(byte *)(lVar4 + 0xd8) = pbVar15[3];
        *(int32_t *)(lStack_88 + 0x4c) = 0;
        *(int8_t *)(lStack_88 + 0x3c) = 0;
        if (*pbVar15 != 0) {
          *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) | 0x20;
          if ((lStack_88 == 0x180be7ac0) &&
             (iVar7 = FUN_18080d590(param_1,lVar4,puVar13), iVar7 != 0)) {
            lStack_88 = 0x180be7ac0;
            system_system_buffer_ui = &system_data_7a80;
          }
          bVar9 = *pbVar15;
          *(byte *)(lVar4 + 0xd1) = bVar9;
          *(uint *)(lVar4 + 0xd4) =
               (uint)(*(int *)((ulonglong)bVar9 * 4 + 0x180be761c) * 0x20ab) /
               *(uint *)(puVar13 + 8);
          *(uint *)(lStack_88 + 0x48) = (uint)*(byte *)(lStack_78 + 0x868 + param_1);
          if ((*(byte *)(lVar4 + 0x126) & 0xf) < 4) {
            *(int8_t *)(lVar4 + 0x106) = 0;
          }
          if ((*(byte *)(lVar4 + 0x126) & 0xf0) < 0x40) {
            *(int8_t *)(lVar4 + 0x10a) = 0;
          }
          if ((pbVar15[3] - 3 & 0xfd) != 0) {
            *(int32_t *)(lStack_88 + 0x40) = *(int32_t *)(lVar4 + 0xd4);
          }
          *(int8_t *)(lStack_88 + 0x3c) = 8;
        }
        if (pbVar15[1] != 0) {
          *(uint *)(lStack_88 + 0x44) = (uint)(byte)puVar13[0xc];
        }
        *(int32_t *)(lStack_88 + 0x50) = 0;
        *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) | 7;
        switch(pbVar15[3]) {
        case 3:
          if (pbVar15[4] != 0) {
            *(byte *)(lVar4 + 0x104) = pbVar15[4];
          }
        case 5:
          *(int32_t *)(lVar4 + 0x100) = *(int32_t *)(lVar4 + 0xd4);
          *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) & 0xf7;
          *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) & 0xfe;
          break;
        case 4:
          if (bVar2 >> 4 != 0) {
            *(byte *)(lVar4 + 0x107) = bVar14;
          }
          if (bVar12 != 0) {
            *(byte *)(lVar4 + 0x108) = bVar12;
          }
          break;
        case 7:
          if (bVar2 >> 4 != 0) {
            *(byte *)(lVar4 + 0x10b) = bVar14;
          }
          if (bVar12 != 0) {
            *(byte *)(lVar4 + 0x10c) = bVar12;
          }
          *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) & 0xfd;
          break;
        case 8:
          *(uint *)(lStack_88 + 0x48) = (uint)pbVar15[4] * 2;
          *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) | 4;
          break;
        case 9:
          bVar2 = pbVar15[4];
          if (bVar2 == 0) {
            uVar8 = *(uint *)(lVar4 + 0xe8);
          }
          else {
            uVar8 = (uint)bVar2;
            *(uint *)(lVar4 + 0xe8) = (uint)bVar2;
          }
          if (uVar8 << 8 < (uint)(*(int *)(puVar13 + 0x14) + *(int *)(puVar13 + 0x10))) {
            *(uint *)(lStack_88 + 0x58) = uVar8 << 8;
          }
          else {
            *(uint *)(lStack_88 + 0x58) = (*(int *)(puVar13 + 0x14) + *(int *)(puVar13 + 0x10)) - 1;
          }
          break;
        case 0xb:
          bVar2 = pbVar15[4];
          *(int32_t *)(param_1 + 0xc08) = 0;
          uVar8 = (uint)bVar2;
          if (*(int *)(param_1 + 0x8ec) <= (int)(uint)bVar2) {
            uVar8 = 0;
          }
          bVar6 = true;
          *(uint *)(param_1 + 0xc0c) = uVar8;
          break;
        case 0xc:
          *(uint *)(lStack_88 + 0x44) = (uint)pbVar15[4];
          break;
        case 0xd:
          uVar8 = (uint)bVar12 + ((uint)bVar14 + (uint)bVar14 * 4) * 2;
          if (0x3f < uVar8) {
            uVar8 = 0;
          }
          *(uint *)(param_1 + 0xc08) = uVar8;
          if (bVar6) {
            iVar10 = *(int *)(param_1 + 0xc0c);
          }
          else {
            iVar10 = *(int *)(param_1 + 0xbfc) + 1;
            *(int *)(param_1 + 0xc0c) = iVar10;
          }
          if (*(int *)(param_1 + 0x8ec) <= iVar10) {
            *(int32_t *)(param_1 + 0xc0c) = 0;
          }
          break;
        case 0xe:
          switch(bVar14) {
          case 1:
            *(int *)(lStack_88 + 0x40) = *(int *)(lStack_88 + 0x40) + (uint)bVar12 * -4;
            break;
          case 2:
            *(int *)(lStack_88 + 0x40) = *(int *)(lStack_88 + 0x40) + (uint)bVar12 * 4;
            break;
          case 4:
            *(byte *)(lVar4 + 0x126) = *(byte *)(lVar4 + 0x126) & 0xf0;
            *(byte *)(lVar4 + 0x126) = *(byte *)(lVar4 + 0x126) | bVar12;
            break;
          case 5:
            func_0x00018080cbf0(param_1,bVar12,puVar13 + 8);
            break;
          case 6:
            if (bVar12 == 0) {
              *(int32_t *)(lVar4 + 0x11c) = *(int32_t *)(param_1 + 0xbf8);
            }
            else {
              if (*(int *)(lVar4 + 0x120) == 0) {
                uVar8 = (uint)bVar12;
              }
              else {
                uVar8 = *(int *)(lVar4 + 0x120) - 1;
              }
              *(uint *)(lVar4 + 0x120) = uVar8;
              if (((uVar8 != 0) &&
                  (*(int32_t *)(param_1 + 0xc08) = *(int32_t *)(lVar4 + 0x11c),
                  *(longlong *)(param_1 + 0x288) != 0)) &&
                 (iVar10 = *(int *)(lVar4 + 0x11c), iVar10 <= *(int *)(param_1 + 0xbf8))) {
                do {
                  iVar7 = *(int *)(param_1 + 0xbfc) * 0x100 + iVar10;
                  iVar10 = iVar10 + 1;
                  *(int8_t *)((longlong)iVar7 + *(longlong *)(param_1 + 0x288)) = 0;
                } while (iVar10 <= *(int *)(param_1 + 0xbf8));
              }
            }
            break;
          case 7:
            *(byte *)(lVar4 + 0x126) = *(byte *)(lVar4 + 0x126) & 0xf;
            *(byte *)(lVar4 + 0x126) = *(byte *)(lVar4 + 0x126) | bVar12 << 4;
            break;
          case 8:
            *(uint *)(lStack_88 + 0x48) = (uint)bVar12 << 4;
            *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) | 4;
            break;
          case 10:
            *(int *)(lStack_88 + 0x44) = *(int *)(lStack_88 + 0x44) + (uint)bVar12;
            if (0x40 < *(int *)(lStack_88 + 0x44)) {
              *(int32_t *)(lStack_88 + 0x44) = 0x40;
            }
            break;
          case 0xb:
            *(int *)(lStack_88 + 0x44) = *(int *)(lStack_88 + 0x44) - (uint)bVar12;
            if (*(int *)(lStack_88 + 0x44) < 0) {
              *(int32_t *)(lStack_88 + 0x44) = 0;
            }
            break;
          case 0xd:
            *(int *)(lStack_88 + 0x44) = iVar10;
            *(int32_t *)(lStack_88 + 0x40) = uVar3;
            *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) & 0xfe;
            *(int8_t *)(lStack_88 + 0x3c) = 0;
            *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) & 0xfd;
            *(byte *)(lStack_88 + 0x3c) = *(byte *)(lStack_88 + 0x3c) & 0xf7;
            break;
          case 0xe:
            *(uint *)(param_1 + 0xc00) = *(int *)(param_1 + 0xbf0) * (uint)bVar12;
          }
          break;
        case 0xf:
          bVar2 = pbVar15[4];
          if (bVar2 < 0x20) {
            if (bVar2 != 0) {
              *(uint *)(param_1 + 0xbf0) = (uint)bVar2;
            }
          }
          else {
            func_0x00018080d4a0(param_1,bVar2);
          }
        }
        if ((param_2 != '\0') &&
           ((plVar5 = (longlong *)*plVar1, plVar5 != plVar1 ||
            (*(longlong **)(lVar4 + 0x10) != plVar1)))) {
          if ((int)plVar5[10] + (int)plVar5[8] == 0) {
            *(byte *)((longlong)plVar5 + 0x3c) = *(byte *)((longlong)plVar5 + 0x3c) & 0xfe;
          }
          if ((*(byte *)((longlong)plVar5 + 0x3c) & 8) != 0) {
            FUN_18080d310(param_1,puVar13,plVar5,0,0);
          }
          plVar1 = (longlong *)plVar5[4];
          if (plVar1 != (longlong *)0x0) {
            if ((*(byte *)((longlong)plVar5 + 0x3c) & 2) != 0) {
              (**(code **)(*plVar1 + 0x20))
                        (plVar1,(float)(*(int *)((longlong)plVar5 + 0x4c) +
                                       *(int *)((longlong)plVar5 + 0x44)) * 0.0078125 *
                                *(float *)(lVar4 + 0xf0),0);
            }
            if ((*(byte *)((longlong)plVar5 + 0x3c) & 4) != 0) {
              (**(code **)(*(longlong *)plVar5[4] + 0xb0))
                        ((longlong *)plVar5[4],
                         ((float)(int)plVar5[9] - 128.0) * *(float *)(param_1 + 0xbd8) * 0.0078125);
            }
            if ((*(byte *)((longlong)plVar5 + 0x3c) & 1) != 0) {
              iVar10 = (int)plVar5[10] + (int)plVar5[8];
              if (iVar10 < 1) {
                iVar10 = 1;
              }
              FUN_180757470(plVar5[4],0xda7600 % (longlong)iVar10 & 0xffffffff);
            }
            if ((*(byte *)((longlong)plVar5 + 0x3c) & 0x20) != 0) {
              FUN_180758220(plVar5[4],0x80);
              *(int32_t *)(plVar5 + 0xb) = 0;
            }
          }
        }
        iStackX_20 = iStackX_20 + 1;
        lStack_78 = lStack_78 + 1;
        pbVar15 = pbVar15 + 5;
      } while (iStackX_20 < *(int *)(param_1 + 0x3c8));
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807c148a(void)

{
  longlong *plVar1;
  byte *pbVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte bVar12;
  int32_t uVar13;
  void *puVar14;
  char in_R11B;
  byte bVar15;
  byte *unaff_R14;
  
  lVar10 = 0;
  *(uint64_t *)(unaff_RBP + -0x19) = 0;
  do {
    bVar4 = unaff_R14[4];
    lVar10 = *(longlong *)(unaff_RBX + 0x3d0 + lVar10 * 8);
    plVar1 = (longlong *)(lVar10 + 8);
    *(uint64_t *)(unaff_RBP + -0x29) = 0;
    plVar11 = (longlong *)*plVar1;
    bVar12 = bVar4 & 0xf;
    bVar15 = bVar4 >> 4;
    if ((plVar11 == plVar1) && (*(longlong **)(lVar10 + 0x10) == plVar1)) {
      system_system_buffer_ui = &system_data_7a80;
      plVar11 = (longlong *)0x180be7ac0;
    }
    bVar8 = unaff_R14[1];
    *(longlong **)(unaff_RBP + -0x29) = plVar11;
    if (bVar8 == 0) {
      bVar8 = *(byte *)(lVar10 + 0xd0);
    }
    else {
      bVar8 = bVar8 - 1;
      *(byte *)(lVar10 + 0xd0) = bVar8;
      plVar11 = *(longlong **)(unaff_RBP + -0x29);
    }
    if ((int)(uint)bVar8 < *(int *)(unaff_RBX + 0x8fc)) {
      puVar14 = *(void **)(*(longlong *)(unaff_RBX + 0x848) + (ulonglong)bVar8 * 8);
    }
    else {
      puVar14 = &system_data_7a80;
    }
    cVar5 = *(char *)(lVar10 + 0xd8);
    uVar13 = *(int32_t *)((longlong)plVar11 + 0x40);
    iVar9 = *(int *)((longlong)plVar11 + 0x44);
    *(int32_t *)(unaff_RBP + 0x77) = uVar13;
    *(void **)(unaff_RBP + -0x21) = puVar14;
    if ((cVar5 == '\a') && (unaff_R14[3] != 7)) {
      *(int *)((longlong)plVar11 + 0x44) = *(int *)((longlong)plVar11 + 0x4c) + iVar9;
    }
    *(byte *)(lVar10 + 0xd8) = unaff_R14[3];
    *(int32_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x4c) = 0;
    *(int8_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c) = 0;
    if (*unaff_R14 != 0) {
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
      *pbVar2 = *pbVar2 | 0x20;
      if (*(longlong *)(unaff_RBP + -0x29) == 0x180be7ac0) {
        iVar6 = FUN_18080d590();
        puVar14 = *(void **)(unaff_RBP + -0x21);
        uVar13 = *(int32_t *)(unaff_RBP + 0x77);
        in_R11B = *(char *)(unaff_RBP + 0x67);
        if (iVar6 != 0) {
          *(uint64_t *)(unaff_RBP + -0x29) = 0x180be7ac0;
          system_system_buffer_ui = &system_data_7a80;
        }
      }
      bVar8 = *unaff_R14;
      *(byte *)(lVar10 + 0xd1) = bVar8;
      *(uint *)(lVar10 + 0xd4) =
           (uint)(*(int *)((ulonglong)bVar8 * 4 + 0x180be761c) * 0x20ab) / *(uint *)(puVar14 + 8);
      *(uint *)(*(longlong *)(unaff_RBP + -0x29) + 0x48) =
           (uint)*(byte *)(*(longlong *)(unaff_RBP + -0x19) + 0x868 + unaff_RBX);
      if ((*(byte *)(lVar10 + 0x126) & 0xf) < 4) {
        *(int8_t *)(lVar10 + 0x106) = 0;
      }
      if ((*(byte *)(lVar10 + 0x126) & 0xf0) < 0x40) {
        *(int8_t *)(lVar10 + 0x10a) = 0;
      }
      if ((unaff_R14[3] - 3 & 0xfd) != 0) {
        *(int32_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x40) = *(int32_t *)(lVar10 + 0xd4);
      }
      *(int8_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c) = 8;
    }
    if (unaff_R14[1] != 0) {
      *(uint *)(*(longlong *)(unaff_RBP + -0x29) + 0x44) = (uint)(byte)puVar14[0xc];
    }
    *(int32_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x50) = 0;
    pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
    *pbVar2 = *pbVar2 | 7;
    switch(unaff_R14[3]) {
    case 3:
      if (unaff_R14[4] != 0) {
        *(byte *)(lVar10 + 0x104) = unaff_R14[4];
      }
    case 5:
      *(int32_t *)(lVar10 + 0x100) = *(int32_t *)(lVar10 + 0xd4);
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
      *pbVar2 = *pbVar2 & 0xf7;
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
      *pbVar2 = *pbVar2 & 0xfe;
      break;
    case 4:
      if (bVar4 >> 4 != 0) {
        *(byte *)(lVar10 + 0x107) = bVar15;
      }
      if (bVar12 != 0) {
        *(byte *)(lVar10 + 0x108) = bVar12;
      }
      break;
    case 7:
      if (bVar4 >> 4 != 0) {
        *(byte *)(lVar10 + 0x10b) = bVar15;
      }
      if (bVar12 != 0) {
        *(byte *)(lVar10 + 0x10c) = bVar12;
      }
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
      *pbVar2 = *pbVar2 & 0xfd;
      break;
    case 8:
      *(uint *)(*(longlong *)(unaff_RBP + -0x29) + 0x48) = (uint)unaff_R14[4] * 2;
      pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
      *pbVar2 = *pbVar2 | 4;
      break;
    case 9:
      bVar4 = unaff_R14[4];
      if (bVar4 == 0) {
        uVar7 = *(uint *)(lVar10 + 0xe8);
      }
      else {
        uVar7 = (uint)bVar4;
        *(uint *)(lVar10 + 0xe8) = (uint)bVar4;
      }
      if (uVar7 << 8 < (uint)(*(int *)(puVar14 + 0x14) + *(int *)(puVar14 + 0x10))) {
        *(uint *)(*(longlong *)(unaff_RBP + -0x29) + 0x58) = uVar7 << 8;
      }
      else {
        *(uint *)(*(longlong *)(unaff_RBP + -0x29) + 0x58) =
             (*(int *)(puVar14 + 0x14) + *(int *)(puVar14 + 0x10)) - 1;
      }
      break;
    case 0xb:
      bVar4 = unaff_R14[4];
      *(int32_t *)(unaff_RBX + 0xc08) = 0;
      uVar7 = (uint)bVar4;
      if (*(int *)(unaff_RBX + 0x8ec) <= (int)(uint)bVar4) {
        uVar7 = 0;
      }
      *(int8_t *)(unaff_RBP + 0x67) = 1;
      *(uint *)(unaff_RBX + 0xc0c) = uVar7;
      break;
    case 0xc:
      *(uint *)(*(longlong *)(unaff_RBP + -0x29) + 0x44) = (uint)unaff_R14[4];
      break;
    case 0xd:
      uVar7 = (uint)bVar12 + ((uint)bVar15 + (uint)bVar15 * 4) * 2;
      if (0x3f < uVar7) {
        uVar7 = 0;
      }
      *(uint *)(unaff_RBX + 0xc08) = uVar7;
      if (in_R11B == '\0') {
        iVar9 = *(int *)(unaff_RBX + 0xbfc) + 1;
        *(int *)(unaff_RBX + 0xc0c) = iVar9;
      }
      else {
        iVar9 = *(int *)(unaff_RBX + 0xc0c);
      }
      if (*(int *)(unaff_RBX + 0x8ec) <= iVar9) {
        *(int32_t *)(unaff_RBX + 0xc0c) = 0;
      }
      break;
    case 0xe:
      switch(bVar15) {
      case 1:
        piVar3 = (int *)(*(longlong *)(unaff_RBP + -0x29) + 0x40);
        *piVar3 = *piVar3 + (uint)bVar12 * -4;
        break;
      case 2:
        piVar3 = (int *)(*(longlong *)(unaff_RBP + -0x29) + 0x40);
        *piVar3 = *piVar3 + (uint)bVar12 * 4;
        break;
      case 4:
        *(byte *)(lVar10 + 0x126) = *(byte *)(lVar10 + 0x126) & 0xf0;
        *(byte *)(lVar10 + 0x126) = *(byte *)(lVar10 + 0x126) | bVar12;
        break;
      case 5:
        func_0x00018080cbf0();
        break;
      case 6:
        if (bVar12 == 0) {
          *(int32_t *)(lVar10 + 0x11c) = *(int32_t *)(unaff_RBX + 0xbf8);
        }
        else {
          if (*(int *)(lVar10 + 0x120) == 0) {
            uVar7 = (uint)bVar12;
          }
          else {
            uVar7 = *(int *)(lVar10 + 0x120) - 1;
          }
          *(uint *)(lVar10 + 0x120) = uVar7;
          if (((uVar7 != 0) &&
              (*(int32_t *)(unaff_RBX + 0xc08) = *(int32_t *)(lVar10 + 0x11c),
              *(longlong *)(unaff_RBX + 0x288) != 0)) &&
             (iVar9 = *(int *)(lVar10 + 0x11c), iVar9 <= *(int *)(unaff_RBX + 0xbf8))) {
            do {
              iVar6 = *(int *)(unaff_RBX + 0xbfc) * 0x100 + iVar9;
              iVar9 = iVar9 + 1;
              *(int8_t *)((longlong)iVar6 + *(longlong *)(unaff_RBX + 0x288)) = 0;
            } while (iVar9 <= *(int *)(unaff_RBX + 0xbf8));
          }
        }
        break;
      case 7:
        *(byte *)(lVar10 + 0x126) = *(byte *)(lVar10 + 0x126) & 0xf;
        *(byte *)(lVar10 + 0x126) = *(byte *)(lVar10 + 0x126) | bVar12 << 4;
        break;
      case 8:
        *(uint *)(*(longlong *)(unaff_RBP + -0x29) + 0x48) = (uint)bVar12 << 4;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
        *pbVar2 = *pbVar2 | 4;
        break;
      case 10:
        piVar3 = (int *)(*(longlong *)(unaff_RBP + -0x29) + 0x44);
        *piVar3 = *piVar3 + (uint)bVar12;
        if (0x40 < *(int *)(*(longlong *)(unaff_RBP + -0x29) + 0x44)) {
          *(int32_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x44) = 0x40;
        }
        break;
      case 0xb:
        piVar3 = (int *)(*(longlong *)(unaff_RBP + -0x29) + 0x44);
        *piVar3 = *piVar3 - (uint)bVar12;
        if (*(int *)(*(longlong *)(unaff_RBP + -0x29) + 0x44) < 0) {
          *(int32_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x44) = 0;
        }
        break;
      case 0xd:
        *(int *)(*(longlong *)(unaff_RBP + -0x29) + 0x44) = iVar9;
        *(int32_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x40) = uVar13;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
        *pbVar2 = *pbVar2 & 0xfe;
        *(int8_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c) = 0;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
        *pbVar2 = *pbVar2 & 0xfd;
        pbVar2 = (byte *)(*(longlong *)(unaff_RBP + -0x29) + 0x3c);
        *pbVar2 = *pbVar2 & 0xf7;
        break;
      case 0xe:
        *(uint *)(unaff_RBX + 0xc00) = *(int *)(unaff_RBX + 0xbf0) * (uint)bVar12;
      }
      break;
    case 0xf:
      bVar4 = unaff_R14[4];
      if (bVar4 < 0x20) {
        if (bVar4 != 0) {
          *(uint *)(unaff_RBX + 0xbf0) = (uint)bVar4;
        }
      }
      else {
        func_0x00018080d4a0();
      }
    }
    if ((*(char *)(unaff_RBP + 0x6f) != '\0') &&
       ((plVar11 = (longlong *)*plVar1, plVar11 != plVar1 ||
        (*(longlong **)(lVar10 + 0x10) != plVar1)))) {
      *(longlong **)(unaff_RBP + -0x29) = plVar11;
      if ((int)plVar11[10] + (int)plVar11[8] == 0) {
        *(byte *)((longlong)plVar11 + 0x3c) = *(byte *)((longlong)plVar11 + 0x3c) & 0xfe;
        plVar11 = *(longlong **)(unaff_RBP + -0x29);
      }
      if ((*(byte *)((longlong)plVar11 + 0x3c) & 8) != 0) {
        FUN_18080d310();
        plVar11 = *(longlong **)(unaff_RBP + -0x29);
      }
      plVar1 = (longlong *)plVar11[4];
      if (plVar1 != (longlong *)0x0) {
        if ((*(byte *)((longlong)plVar11 + 0x3c) & 2) != 0) {
          (**(code **)(*plVar1 + 0x20))
                    (plVar1,(float)(*(int *)((longlong)plVar11 + 0x4c) +
                                   *(int *)((longlong)plVar11 + 0x44)) * 0.0078125 *
                            *(float *)(lVar10 + 0xf0),0);
          plVar11 = *(longlong **)(unaff_RBP + -0x29);
        }
        if ((*(byte *)((longlong)plVar11 + 0x3c) & 4) != 0) {
          (**(code **)(*(longlong *)plVar11[4] + 0xb0))
                    ((longlong *)plVar11[4],
                     ((float)(int)plVar11[9] - 128.0) * *(float *)(unaff_RBX + 0xbd8) * 0.0078125);
          plVar11 = *(longlong **)(unaff_RBP + -0x29);
        }
        if ((*(byte *)((longlong)plVar11 + 0x3c) & 1) != 0) {
          iVar9 = (int)plVar11[10] + (int)plVar11[8];
          if (iVar9 < 1) {
            iVar9 = 1;
          }
          FUN_180757470(plVar11[4],0xda7600 % (longlong)iVar9 & 0xffffffff);
          plVar11 = *(longlong **)(unaff_RBP + -0x29);
        }
        if ((*(byte *)((longlong)plVar11 + 0x3c) & 0x20) != 0) {
          FUN_180758220(plVar11[4],0x80);
          *(int32_t *)(*(longlong *)(unaff_RBP + -0x29) + 0x58) = 0;
        }
      }
    }
    iVar6 = *(int *)(unaff_RBP + 0x7f) + 1;
    in_R11B = *(char *)(unaff_RBP + 0x67);
    lVar10 = *(longlong *)(unaff_RBP + -0x19) + 1;
    unaff_R14 = unaff_R14 + 5;
    *(int *)(unaff_RBP + 0x7f) = iVar6;
    iVar9 = *(int *)(unaff_RBX + 0x3c8);
    *(longlong *)(unaff_RBP + -0x19) = lVar10;
  } while (iVar6 < iVar9);
  return 0;
}



uint64_t FUN_1807c1b83(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807c1d10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(longlong *)(param_1 + 0x1d0),
                  &unknown_var_7200_ptr,0x29f,1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807c1d60(uint64_t param_1,int param_2,int *param_3,int32_t *param_4)

{
  int iVar1;
  
  if (system_data_e030 == '\0') {
    system_system_ui = 0x180c2e040;
    iVar1 = FUN_1807c1ec0(1);
    if (iVar1 == 0) {
      iVar1 = FUN_18080e440();
      if (iVar1 == 0) {
        FUN_180813210(0x20);
      }
    }





