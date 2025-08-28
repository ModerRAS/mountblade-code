#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part398_sub002_sub002.c - 1 个函数

// 函数: void FUN_180883a30(uint64_t param_1)
void FUN_180883a30(uint64_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_180874b30();
  if (iVar1 == 0) {
    FUN_180873460(param_1);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1,&unknown_var_5856_ptr,0x43b,1);
  }
  return;
}



ulonglong FUN_180883a80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180883dd3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180883b5e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180883b56;
  }
  else {
LAB_180883b56:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180883dd3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180883b5e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086f7c0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086f7c0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180883db7:
      uVar3 = 0x1c;
      goto LAB_180883db9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180883db7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180883d88;
  }
  else {
LAB_180883d88:
    if (uVar3 != 0) {
LAB_180883db9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180883d99;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180883d99:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180883e00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180884153;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180883ede;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180883ed6;
  }
  else {
LAB_180883ed6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180884153:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180883ede:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086f8b0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086f8b0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180884137:
      uVar3 = 0x1c;
      goto LAB_180884139;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180884137;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180884108;
  }
  else {
LAB_180884108:
    if (uVar3 != 0) {
LAB_180884139:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180884119;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180884119:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180884180(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808844d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088425e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180884256;
  }
  else {
LAB_180884256:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808844d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088425e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086f9a0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086f9a0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808844b7:
      uVar3 = 0x1c;
      goto LAB_1808844b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808844b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180884488;
  }
  else {
LAB_180884488:
    if (uVar3 != 0) {
LAB_1808844b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180884499;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180884499:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180884500(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180884853;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808845de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808845d6;
  }
  else {
LAB_1808845d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180884853:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808845de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086fa90(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086fa90(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180884837:
      uVar3 = 0x1c;
      goto LAB_180884839;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180884837;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180884808;
  }
  else {
LAB_180884808:
    if (uVar3 != 0) {
LAB_180884839:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180884819;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180884819:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180884880(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180884bd3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088495e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180884956;
  }
  else {
LAB_180884956:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180884bd3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088495e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086fb80(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086fb80(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180884bb7:
      uVar3 = 0x1c;
      goto LAB_180884bb9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180884bb7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180884b88;
  }
  else {
LAB_180884b88:
    if (uVar3 != 0) {
LAB_180884bb9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180884b99;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180884b99:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180884c00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180884f53;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180884cde;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180884cd6;
  }
  else {
LAB_180884cd6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180884f53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180884cde:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086fc70(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086fc70(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180884f37:
      uVar3 = 0x1c;
      goto LAB_180884f39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180884f37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180884f08;
  }
  else {
LAB_180884f08:
    if (uVar3 != 0) {
LAB_180884f39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180884f19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180884f19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180884f80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808852d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088505e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180885056;
  }
  else {
LAB_180885056:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808852d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088505e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086fd60(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086fd60(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808852b7:
      uVar3 = 0x1c;
      goto LAB_1808852b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808852b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180885288;
  }
  else {
LAB_180885288:
    if (uVar3 != 0) {
LAB_1808852b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180885299;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180885299:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180885300(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180885653;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808853de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808853d6;
  }
  else {
LAB_1808853d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180885653:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808853de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086fe50(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086fe50(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180885637:
      uVar3 = 0x1c;
      goto LAB_180885639;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180885637;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180885608;
  }
  else {
LAB_180885608:
    if (uVar3 != 0) {
LAB_180885639:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180885619;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180885619:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180885680(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808859d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088575e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180885756;
  }
  else {
LAB_180885756:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808859d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088575e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086ff40(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086ff40(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808859b7:
      uVar3 = 0x1c;
      goto LAB_1808859b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808859b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180885988;
  }
  else {
LAB_180885988:
    if (uVar3 != 0) {
LAB_1808859b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180885999;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180885999:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180885a00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180885d53;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180885ade;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180885ad6;
  }
  else {
LAB_180885ad6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180885d53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180885ade:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870030(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870030(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180885d37:
      uVar3 = 0x1c;
      goto LAB_180885d39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180885d37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180885d08;
  }
  else {
LAB_180885d08:
    if (uVar3 != 0) {
LAB_180885d39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180885d19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180885d19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180885d80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808860d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180885e5e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180885e56;
  }
  else {
LAB_180885e56:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808860d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180885e5e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870120(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870120(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808860b7:
      uVar3 = 0x1c;
      goto LAB_1808860b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808860b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886088;
  }
  else {
LAB_180886088:
    if (uVar3 != 0) {
LAB_1808860b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886099;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886099:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886100(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180886453;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808861de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808861d6;
  }
  else {
LAB_1808861d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180886453:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808861de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870210(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870210(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180886437:
      uVar3 = 0x1c;
      goto LAB_180886439;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180886437;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886408;
  }
  else {
LAB_180886408:
    if (uVar3 != 0) {
LAB_180886439:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886419;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886419:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886480(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808867d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088655e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180886556;
  }
  else {
LAB_180886556:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808867d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088655e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870310(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870310(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808867b7:
      uVar3 = 0x1c;
      goto LAB_1808867b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808867b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886788;
  }
  else {
LAB_180886788:
    if (uVar3 != 0) {
LAB_1808867b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886799;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886799:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886800(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180886b53;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808868de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808868d6;
  }
  else {
LAB_1808868d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180886b53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808868de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870410(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870410(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180886b37:
      uVar3 = 0x1c;
      goto LAB_180886b39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180886b37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886b08;
  }
  else {
LAB_180886b08:
    if (uVar3 != 0) {
LAB_180886b39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886b19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886b19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886b80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180886ed3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180886c5e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180886c56;
  }
  else {
LAB_180886c56:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180886ed3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180886c5e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870500(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870500(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180886eb7:
      uVar3 = 0x1c;
      goto LAB_180886eb9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180886eb7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886e88;
  }
  else {
LAB_180886e88:
    if (uVar3 != 0) {
LAB_180886eb9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886e99;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886e99:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886f00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180887253;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180886fde;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180886fd6;
  }
  else {
LAB_180886fd6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180887253:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180886fde:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808705f0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808705f0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180887237:
      uVar3 = 0x1c;
      goto LAB_180887239;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180887237;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180887208;
  }
  else {
LAB_180887208:
    if (uVar3 != 0) {
LAB_180887239:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180887219;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180887219:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180887280(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808875d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088735e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180887356;
  }
  else {
LAB_180887356:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808875d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088735e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808706e0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808706e0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808875b7:
      uVar3 = 0x1c;
      goto LAB_1808875b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808875b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180887588;
  }
  else {
LAB_180887588:
    if (uVar3 != 0) {
LAB_1808875b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180887599;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180887599:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180887600(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180887953;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808876de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808876d6;
  }
  else {
LAB_1808876d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180887953:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808876de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808707d0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808707d0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180887937:
      uVar3 = 0x1c;
      goto LAB_180887939;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180887937;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180887908;
  }
  else {
LAB_180887908:
    if (uVar3 != 0) {
LAB_180887939:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180887919;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180887919:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180887980(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180887cd3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180887a5e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180887a56;
  }
  else {
LAB_180887a56:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180887cd3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180887a5e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808708c0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808708c0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180887cb7:
      uVar3 = 0x1c;
      goto LAB_180887cb9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180887cb7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180887c88;
  }
  else {
LAB_180887c88:
    if (uVar3 != 0) {
LAB_180887cb9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180887c99;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180887c99:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180887d00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180888053;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180887dde;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180887dd6;
  }
  else {
LAB_180887dd6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180888053:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180887dde:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808709b0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808709b0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180888037:
      uVar3 = 0x1c;
      goto LAB_180888039;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180888037;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888008;
  }
  else {
LAB_180888008:
    if (uVar3 != 0) {
LAB_180888039:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888019;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888019:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888080(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808883d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088815e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180888156;
  }
  else {
LAB_180888156:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808883d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088815e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870aa0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870aa0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808883b7:
      uVar3 = 0x1c;
      goto LAB_1808883b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808883b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888388;
  }
  else {
LAB_180888388:
    if (uVar3 != 0) {
LAB_1808883b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888399;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888399:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888400(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180888753;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808884de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808884d6;
  }
  else {
LAB_1808884d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180888753:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808884de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870b90(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870b90(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180888737:
      uVar3 = 0x1c;
      goto LAB_180888739;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180888737;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888708;
  }
  else {
LAB_180888708:
    if (uVar3 != 0) {
LAB_180888739:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888719;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888719:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888780(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180888ad3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088885e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180888856;
  }
  else {
LAB_180888856:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180888ad3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088885e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870c80(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870c80(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180888ab7:
      uVar3 = 0x1c;
      goto LAB_180888ab9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180888ab7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888a88;
  }
  else {
LAB_180888a88:
    if (uVar3 != 0) {
LAB_180888ab9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888a99;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888a99:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888b00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180888e53;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180888bde;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180888bd6;
  }
  else {
LAB_180888bd6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180888e53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180888bde:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870d70(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870d70(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180888e37:
      uVar3 = 0x1c;
      goto LAB_180888e39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180888e37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888e08;
  }
  else {
LAB_180888e08:
    if (uVar3 != 0) {
LAB_180888e39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888e19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888e19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888e80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808891d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180888f5e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180888f56;
  }
  else {
LAB_180888f56:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808891d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180888f5e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870e60(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870e60(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808891b7:
      uVar3 = 0x1c;
      goto LAB_1808891b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808891b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180889188;
  }
  else {
LAB_180889188:
    if (uVar3 != 0) {
LAB_1808891b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180889199;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180889199:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180889200(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180889553;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808892de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808892d6;
  }
  else {
LAB_1808892d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180889553:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808892de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870f50(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870f50(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180889537:
      uVar3 = 0x1c;
      goto LAB_180889539;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180889537;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180889508;
  }
  else {
LAB_180889508:
    if (uVar3 != 0) {
LAB_180889539:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180889519;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180889519:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180889580(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808898d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088965e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180889656;
  }
  else {
LAB_180889656:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808898d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088965e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180871040(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180871040(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808898b7:
      uVar3 = 0x1c;
      goto LAB_1808898b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808898b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180889888;
  }
  else {
LAB_180889888:
    if (uVar3 != 0) {
LAB_1808898b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180889899;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180889899:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180889900(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180889c53;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808899de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808899d6;
  }
  else {
LAB_1808899d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180889c53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808899de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180871130(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180871130(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180889c37:
      uVar3 = 0x1c;
      goto LAB_180889c39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180889c37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180889c08;
  }
  else {
LAB_180889c08:
    if (uVar3 != 0) {
LAB_180889c39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180889c19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180889c19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



int32_t FUN_180889ce0(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  int32_t uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint64_t *puVar11;
  bool bVar12;
  longlong lStack_78;
  int iStack_70;
  int iStack_6c;
  longlong *plStack_68;
  uint64_t uStack_60;
  int aiStack_58 [8];
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lStack_78 = 0;
  iStack_70 = 0;
  iStack_6c = 0;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  iVar8 = iStack_6c;
  plStack_68 = (longlong *)(param_1 + 0x898);
  uStack_60 = 0xffffffffffffffff;
  aiStack_58[0] = -1;
  FUN_1808741f0(plStack_68,&uStack_60,aiStack_58);
  if (aiStack_58[0] != -1) {
    iVar10 = aiStack_58[0];
    iVar9 = (int)uStack_60;
    do {
      do {
        lVar6 = *(longlong *)(plStack_68[2] + 0x18 + (longlong)iVar10 * 0x20);
        for (puVar11 = *(uint64_t **)(lVar6 + 0x288);
            (*(uint64_t **)(lVar6 + 0x288) <= puVar11 &&
            (puVar11 < (uint64_t *)
                       ((longlong)*(uint64_t **)(lVar6 + 0x288) +
                       (longlong)*(int *)(lVar6 + 0x290) * 0x14)));
            puVar11 = (uint64_t *)((longlong)puVar11 + 0x14)) {
          iVar7 = iStack_70 + 1;
          iVar4 = iVar8;
          if (iVar8 < 0) {
            iVar4 = -iVar8;
          }
          if (iVar4 < iVar7) {
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            iVar4 = (int)((float)iVar8 * 1.5);
            iVar8 = iVar7;
            if (iVar7 <= iVar4) {
              iVar8 = iVar4;
            }
            if (iVar8 < 3) {
              iVar4 = 3;
            }
            else if (iVar4 < iVar7) {
              iVar4 = iVar7;
            }
            iVar8 = FUN_180849120(&lStack_78,iVar4);
            if (iVar8 == 0) goto LAB_180889e09;
          }
          else {
LAB_180889e09:
            uVar3 = puVar11[1];
            puVar1 = (uint64_t *)(lStack_78 + (longlong)iStack_70 * 0x14);
            *puVar1 = *puVar11;
            puVar1[1] = uVar3;
            *(int32_t *)(lStack_78 + 0x10 + (longlong)iStack_70 * 0x14) =
                 *(int32_t *)(puVar11 + 2);
            iStack_70 = iStack_70 + 1;
          }
          iVar8 = iStack_6c;
        }
      } while ((iVar10 != -1) &&
              (iVar10 = *(int *)(plStack_68[2] + 0x10 + (longlong)iVar10 * 0x20), iVar10 != -1));
      iVar10 = iVar9 + 1;
      bVar12 = iVar9 != -1;
      iVar9 = 0;
      if (bVar12) {
        iVar9 = iVar10;
      }
      if (iVar9 != (int)plStack_68[1]) {
        lVar6 = (longlong)iVar9;
        do {
          if (*(int *)(*plStack_68 + lVar6 * 4) != -1) {
            iVar10 = *(int *)(*plStack_68 + (longlong)iVar9 * 4);
            goto LAB_180889e8c;
          }
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 != (int)plStack_68[1]);
      }
      iVar10 = -1;
      iVar9 = iVar10;
LAB_180889e8c:
    } while (iVar10 != -1);
  }
  if (lVar2 == 0) {
    puVar11 = (uint64_t *)FUN_180847820();
    plStack_68 = (longlong *)*puVar11;
    uStack_60 = puVar11[1];
    uVar5 = FUN_180866f50(*(uint64_t *)(param_1 + 0x80),&plStack_68,&lStack_78);
    FUN_180840100(&lStack_78);
    return uVar5;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(lVar2);
}



int32_t FUN_180889cf9(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int32_t uVar6;
  ulonglong in_RAX;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong unaff_RBP;
  int iVar11;
  longlong unaff_RDI;
  longlong *plVar12;
  int iVar13;
  uint64_t *puVar14;
  bool bVar15;
  
  *(ulonglong *)(unaff_RBP + -0x58) = in_RAX;
  uVar10 = in_RAX & 0xffffffff;
  *(ulonglong *)(unaff_RBP + -0x50) = in_RAX;
  *(longlong *)(unaff_RBP + 0x30) = unaff_RDI;
  if (unaff_RDI != 0) {
    FUN_180768360();
    uVar10 = (ulonglong)*(uint *)(unaff_RBP + -0x4c);
  }
  *(uint64_t *)(unaff_RBP + -0x40) = 0xffffffffffffffff;
  *(longlong *)(unaff_RBP + -0x48) = param_1 + 0x898;
  *(int32_t *)(unaff_RBP + -0x38) = 0xffffffff;
  FUN_1808741f0(param_1 + 0x898,unaff_RBP + -0x40,unaff_RBP + -0x38);
  iVar13 = *(int *)(unaff_RBP + -0x38);
  if (iVar13 != -1) {
    iVar11 = *(int *)(unaff_RBP + -0x40);
    plVar12 = *(longlong **)(unaff_RBP + -0x48);
    do {
      do {
        lVar7 = *(longlong *)(plVar12[2] + 0x18 + (longlong)iVar13 * 0x20);
        puVar14 = *(uint64_t **)(lVar7 + 0x288);
        while( true ) {
          iVar9 = (int)uVar10;
          if ((puVar14 < *(uint64_t **)(lVar7 + 0x288)) ||
             ((uint64_t *)
              ((longlong)*(uint64_t **)(lVar7 + 0x288) + (longlong)*(int *)(lVar7 + 0x290) * 0x14)
              <= puVar14)) break;
          iVar8 = *(int *)(unaff_RBP + -0x50) + 1;
          iVar5 = iVar9;
          if (iVar9 < 0) {
            iVar5 = -iVar9;
          }
          if (iVar5 < iVar8) {
            if (iVar9 < 0) {
              iVar9 = -iVar9;
            }
            iVar5 = (int)((float)iVar9 * 1.5);
            iVar9 = iVar8;
            if (iVar8 <= iVar5) {
              iVar9 = iVar5;
            }
            if (iVar9 < 3) {
              iVar5 = 3;
            }
            else if (iVar5 < iVar8) {
              iVar5 = iVar8;
            }
            iVar9 = FUN_180849120(unaff_RBP + -0x58,iVar5);
            if (iVar9 == 0) goto LAB_180889e09;
          }
          else {
LAB_180889e09:
            iVar9 = *(int *)(unaff_RBP + -0x50);
            uVar3 = puVar14[1];
            lVar2 = *(longlong *)(unaff_RBP + -0x58);
            puVar1 = (uint64_t *)(lVar2 + (longlong)iVar9 * 0x14);
            *puVar1 = *puVar14;
            puVar1[1] = uVar3;
            *(int32_t *)(lVar2 + 0x10 + (longlong)iVar9 * 0x14) = *(int32_t *)(puVar14 + 2);
            *(int *)(unaff_RBP + -0x50) = *(int *)(unaff_RBP + -0x50) + 1;
          }
          uVar10 = (ulonglong)*(uint *)(unaff_RBP + -0x4c);
          puVar14 = (uint64_t *)((longlong)puVar14 + 0x14);
        }
        plVar12 = *(longlong **)(unaff_RBP + -0x48);
      } while ((iVar13 != -1) &&
              (iVar13 = *(int *)(plVar12[2] + 0x10 + (longlong)iVar13 * 0x20), iVar13 != -1));
      iVar13 = iVar11 + 1;
      bVar15 = iVar11 != -1;
      iVar11 = 0;
      if (bVar15) {
        iVar11 = iVar13;
      }
      if (iVar11 != (int)plVar12[1]) {
        lVar7 = (longlong)iVar11;
        do {
          if (*(int *)(*plVar12 + lVar7 * 4) != -1) {
            iVar13 = *(int *)(*plVar12 + (longlong)iVar11 * 4);
            goto LAB_180889e8c;
          }
          iVar11 = iVar11 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != (int)plVar12[1]);
      }
      iVar13 = -1;
      iVar11 = iVar13;
LAB_180889e8c:
    } while (iVar13 != -1);
    unaff_RDI = *(longlong *)(unaff_RBP + 0x30);
    param_1 = *(longlong *)(unaff_RBP + 0x28);
  }
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(unaff_RDI);
  }
  puVar14 = (uint64_t *)FUN_180847820();
  uVar3 = *(uint64_t *)(param_1 + 0x80);
  uVar4 = puVar14[1];
  *(uint64_t *)(unaff_RBP + -0x48) = *puVar14;
  *(uint64_t *)(unaff_RBP + -0x40) = uVar4;
  uVar6 = FUN_180866f50(uVar3,unaff_RBP + -0x48,unaff_RBP + -0x58);
  FUN_180840100(unaff_RBP + -0x58);
  return uVar6;
}



int32_t FUN_180889d5e(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int32_t uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int unaff_EBX;
  longlong unaff_RBP;
  int unaff_EDI;
  int unaff_R12D;
  uint64_t *puVar10;
  bool bVar11;
  
  do {
    do {
      lVar7 = *(longlong *)(param_3[2] + 0x18 + (longlong)unaff_R12D * 0x20);
      for (puVar10 = *(uint64_t **)(lVar7 + 0x288);
          (*(uint64_t **)(lVar7 + 0x288) <= puVar10 &&
          (puVar10 < (uint64_t *)
                     ((longlong)*(uint64_t **)(lVar7 + 0x288) +
                     (longlong)*(int *)(lVar7 + 0x290) * 0x14)));
          puVar10 = (uint64_t *)((longlong)puVar10 + 0x14)) {
        iVar8 = *(int *)(unaff_RBP + -0x50) + 1;
        iVar5 = unaff_EBX;
        if (unaff_EBX < 0) {
          iVar5 = -unaff_EBX;
        }
        if (iVar5 < iVar8) {
          if (unaff_EBX < 0) {
            unaff_EBX = -unaff_EBX;
          }
          iVar9 = (int)((float)unaff_EBX * 1.5);
          iVar5 = iVar8;
          if (iVar8 <= iVar9) {
            iVar5 = iVar9;
          }
          if (iVar5 < 3) {
            iVar9 = 3;
          }
          else if (iVar9 < iVar8) {
            iVar9 = iVar8;
          }
          iVar5 = FUN_180849120(unaff_RBP + -0x58,iVar9);
          if (iVar5 == 0) goto LAB_180889e09;
        }
        else {
LAB_180889e09:
          iVar5 = *(int *)(unaff_RBP + -0x50);
          uVar3 = puVar10[1];
          lVar2 = *(longlong *)(unaff_RBP + -0x58);
          puVar1 = (uint64_t *)(lVar2 + (longlong)iVar5 * 0x14);
          *puVar1 = *puVar10;
          puVar1[1] = uVar3;
          *(int32_t *)(lVar2 + 0x10 + (longlong)iVar5 * 0x14) = *(int32_t *)(puVar10 + 2);
          *(int *)(unaff_RBP + -0x50) = *(int *)(unaff_RBP + -0x50) + 1;
        }
        unaff_EBX = *(int *)(unaff_RBP + -0x4c);
      }
      param_3 = *(longlong **)(unaff_RBP + -0x48);
    } while ((unaff_R12D != -1) &&
            (unaff_R12D = *(int *)(param_3[2] + 0x10 + (longlong)unaff_R12D * 0x20),
            unaff_R12D != -1));
    iVar5 = unaff_EDI + 1;
    bVar11 = unaff_EDI != -1;
    unaff_EDI = 0;
    if (bVar11) {
      unaff_EDI = iVar5;
    }
    if (unaff_EDI != (int)param_3[1]) {
      lVar7 = (longlong)unaff_EDI;
      do {
        if (*(int *)(*param_3 + lVar7 * 4) != -1) {
          unaff_R12D = *(int *)(*param_3 + (longlong)unaff_EDI * 4);
          goto LAB_180889e8c;
        }
        unaff_EDI = unaff_EDI + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 != (int)param_3[1]);
    }
    unaff_R12D = -1;
    unaff_EDI = unaff_R12D;
LAB_180889e8c:
    if (unaff_R12D == -1) {
      lVar7 = *(longlong *)(unaff_RBP + 0x28);
      if (*(longlong *)(unaff_RBP + 0x30) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(*(longlong *)(unaff_RBP + 0x30));
      }
      puVar10 = (uint64_t *)FUN_180847820();
      uVar3 = *(uint64_t *)(lVar7 + 0x80);
      uVar4 = puVar10[1];
      *(uint64_t *)(unaff_RBP + -0x48) = *puVar10;
      *(uint64_t *)(unaff_RBP + -0x40) = uVar4;
      uVar6 = FUN_180866f50(uVar3,unaff_RBP + -0x48,unaff_RBP + -0x58);
      FUN_180840100(unaff_RBP + -0x58);
      return uVar6;
    }
  } while( true );
}



int32_t FUN_180889eb2(void)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400();
  }
  puVar5 = (int32_t *)FUN_180847820();
  uVar1 = *(uint64_t *)(unaff_RSI + 0x80);
  uVar4 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(unaff_RBP + -0x48) = *puVar5;
  *(int32_t *)(unaff_RBP + -0x44) = uVar4;
  *(int32_t *)(unaff_RBP + -0x40) = uVar2;
  *(int32_t *)(unaff_RBP + -0x3c) = uVar3;
  uVar4 = FUN_180866f50(uVar1,unaff_RBP + -0x48,unaff_RBP + -0x58);
  FUN_180840100(unaff_RBP + -0x58);
  return uVar4;
}







