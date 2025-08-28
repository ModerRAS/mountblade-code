#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part133_sub002_sub002.c - 1 个函数

// 函数: void FUN_180746180(longlong param_1,int32_t *param_2)
void FUN_180746180(longlong param_1,int32_t *param_2)

{
  int iVar1;
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_48;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  if (param_2 != (int32_t *)0x0) {
    iVar1 = func_0x000180772c30(param_1 + 0x6e0,&uStack_28);
    if (iVar1 == 0) {
      *param_2 = (int32_t)uStack_28;
    }
    iVar1 = func_0x000180772c30(param_1 + 0x12374,(longlong)&uStack_28 + 4);
    if (iVar1 == 0) {
      param_2[1] = uStack_28._4_4_;
    }
    iVar1 = func_0x000180772c30(param_1 + 0x125f8,&uStack_20);
    if (iVar1 == 0) {
      param_2[2] = (int32_t)uStack_20;
    }
    iVar1 = func_0x000180772c30(param_1 + 0x11678,(longlong)&uStack_20 + 4);
    if (iVar1 == 0) {
      param_2[3] = uStack_20._4_4_;
    }
    iVar1 = func_0x000180772c30(param_1 + 0x11008,&uStack_18);
    if (iVar1 == 0) {
      param_2[4] = (int32_t)uStack_18;
    }
    iVar1 = func_0x000180772c30(param_1 + 0x11044,(longlong)&uStack_18 + 4);
    if (iVar1 == 0) {
      param_2[5] = uStack_18._4_4_;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_48);
}



uint64_t FUN_180746320(longlong param_1,int32_t *param_2,longlong param_3)

{
  uint64_t uVar1;
  
  if (param_2 != (int32_t *)0x0) {
    *param_2 = *(int32_t *)(param_1 + 0x1e4);
  }
  if ((param_3 != 0) &&
     (uVar1 = func_0x000180786170(*(uint64_t *)(*(longlong *)(param_1 + 0x6b8) + 0x40),param_3),
     (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_180746390(longlong param_1,uint64_t param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t *apuStackX_18 [2];
  
  if (param_3 == (uint64_t *)0x0) {
    return 0x1f;
  }
  uVar1 = func_0x000180771c60(*(uint64_t *)(param_1 + 0x11418),param_2,apuStackX_18);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    *param_3 = *apuStackX_18[0];
  }
  return uVar1;
}



uint64_t FUN_1807463d0(longlong param_1,int param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t *apuStackX_8 [4];
  
  if (*(longlong *)(param_1 + 0x11418) == 0) {
    return 0x43;
  }
  if ((param_3 == (uint64_t *)0x0) || ((*param_3 = 0, -1 < param_2 && (0x22 < param_2 - 2U)))) {
    uVar1 = 0x1f;
  }
  else {
    apuStackX_8[0] = (uint64_t *)0x0;
    uVar1 = func_0x000180771cb0(*(uint64_t *)(param_1 + 0x11418),param_2,apuStackX_8);
    if ((int)uVar1 == 0) {
      *param_3 = *apuStackX_8[0];
      return 0;
    }
  }
  return uVar1;
}



uint64_t
FUN_180746460(longlong param_1,int param_2,longlong param_3,int param_4,uint64_t *param_5,
             int *param_6,int *param_7,int *param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if ((*(char *)(param_1 + 8) == '\0') &&
     (uVar4 = FUN_18078ae40(param_1,*(int32_t *)(param_1 + 0x678),
                            *(int32_t *)(param_1 + 0x67c)), (int)uVar4 != 0)) {
    iStack_18 = 0;
  }
  else {
    uVar4 = FUN_18078a600(param_1,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    lVar1 = *(longlong *)(param_1 + 0x670);
    if (*(code **)(lVar1 + 0x340) == (code *)0x0) {
      iStack_18 = 0;
      goto LAB_1807464ee;
    }
    lVar5 = lVar1 + 8;
    if (lVar1 == 0) {
      lVar5 = 0;
    }
    uVar4 = (**(code **)(lVar1 + 0x340))(lVar5,&iStack_18);
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
LAB_1807464ee:
  if ((param_2 < 0) || (iStack_18 <= param_2)) {
    uVar4 = 0x1f;
  }
  else if ((*(char *)(param_1 + 8) != '\0') ||
          (uVar4 = FUN_18078ae40(param_1,*(int32_t *)(param_1 + 0x678),
                                 *(int32_t *)(param_1 + 0x67c)), (int)uVar4 == 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x670) + 0x348) != 0) {
      iStack_c = 0;
      iStack_14 = 0;
      iStack_10 = 0;
      if (param_3 != 0) {
                    // WARNING: Subroutine does not return
        memset(param_3,0,(longlong)param_4);
      }
      if (param_5 != (uint64_t *)0x0) {
        *param_5 = 0;
        param_5[1] = 0;
      }
      lVar1 = *(longlong *)(param_1 + 0x670);
      lVar5 = lVar1 + 8;
      if (lVar1 == 0) {
        lVar5 = 0;
      }
      uVar4 = (**(code **)(lVar1 + 0x348))
                        (lVar5,param_2,0,param_4,param_5,&iStack_c,&iStack_10,&iStack_14);
      iVar2 = iStack_10;
      iVar3 = iStack_14;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (iStack_14 == 0) {
        if (iStack_10 == 0) {
          iVar2 = 3;
          iVar3 = 2;
        }
        else {
          iVar3 = func_0x0001807462a0(iStack_10);
        }
      }
      else {
        iVar2 = func_0x000180746b50(iStack_14);
      }
      if (iStack_c == 0) {
        iStack_c = 48000;
      }
      if (param_7 != (int *)0x0) {
        *param_7 = iVar2;
      }
      if (param_8 != (int *)0x0) {
        *param_8 = iVar3;
      }
      if (param_6 != (int *)0x0) {
        *param_6 = iStack_c;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



uint64_t FUN_1807466e0(longlong param_1,int32_t *param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  longlong lVar3;
  
  if (param_2 == (int32_t *)0x0) {
    return 0x1f;
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = FUN_18078ae40(param_1,*(int32_t *)(param_1 + 0x678),*(int32_t *)(param_1 + 0x67c))
    ;
    if ((int)uVar2 != 0) {
      *param_2 = 0;
      return uVar2;
    }
  }
  uVar2 = FUN_18078a600(param_1);
  if ((int)uVar2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x670);
    if (*(code **)(lVar1 + 0x340) != (code *)0x0) {
      lVar3 = lVar1 + 8;
      if (lVar1 == 0) {
        lVar3 = 0;
      }
                    // WARNING: Could not recover jumptable at 0x000180746769. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar2 = (**(code **)(lVar1 + 0x340))(lVar3,param_2);
      return uVar2;
    }
    uVar2 = 0;
    *param_2 = 0;
  }
  return uVar2;
}



uint64_t FUN_180746780(longlong param_1,int param_2,longlong param_3)

{
  uint64_t uVar1;
  
  if (param_3 != 0) {
    if ((*(char *)(param_1 + 9) == '\0') && (uVar1 = FUN_180749060(), (int)uVar1 != 0)) {
      return uVar1;
    }
    if (param_2 == 0) {
      func_0x000180771d90(*(uint64_t *)(param_1 + 0x11418),param_3);
      return 0;
    }
    if (param_2 == 1) {
      func_0x000180771d10(*(uint64_t *)(param_1 + 0x11418),param_3);
      return 0;
    }
    if (param_2 == 2) {
      func_0x000180771d40(*(uint64_t *)(param_1 + 0x11418),param_3);
      return 0;
    }
  }
  return 0x1f;
}



uint64_t FUN_180746840(longlong param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x1f;
  }
  if (*(int *)(param_1 + 0x678) == 0) {
    func_0x0001807aafa0(param_2);
    return 0;
  }
  *param_2 = *(int *)(param_1 + 0x678);
  return 0;
}



ulonglong FUN_1807468d0(longlong param_1,int param_2,int32_t *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = FUN_1807499f0();
  if ((int)uVar2 == 0) {
    if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x694))) {
      if (param_3 != (int32_t *)0x0) {
        lVar1 = *(longlong *)((longlong)param_2 * 0x38 + 0x30 + *(longlong *)(param_1 + 0x6a0));
        if (lVar1 == 0) {
          *param_3 = 0;
        }
        else {
          *param_3 = *(int32_t *)(lVar1 + 0x34);
        }
      }
      uVar3 = 0;
      if ((*(byte *)((longlong)param_2 * 0x38 + 0x18 + *(longlong *)(param_1 + 0x6a0)) & 1) == 0) {
        uVar3 = 0x50;
      }
      return (ulonglong)uVar3;
    }
    uVar2 = 0x1f;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180746bf0(longlong param_1,uint param_2,uint param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int aiStackX_10 [4];
  uint64_t uStackX_20;
  ulonglong in_stack_ffffffffffffff58;
  int *piVar12;
  uint64_t in_stack_ffffffffffffff60;
  int32_t uVar13;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int32_t uStack_5c;
  uint uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  code *pcStack_48;
  
  if (0xfff < param_2) {
    return 0x1f;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return 0x1b;
  }
  uVar11 = 0;
  uVar5 = uVar11;
  uStackX_20 = param_4;
  do {
    uVar4 = FUN_1807682e0(param_1 + ((longlong)(int)uVar5 + 0x22a6) * 8,0);
    uVar13 = (int32_t)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar10 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar10;
  } while ((int)uVar10 < 0x16);
  uStack_54 = *(int32_t *)(param_1 + 0x1193c);
  uStack_50 = *(int32_t *)(param_1 + 0x6d4);
  *(uint *)(param_1 + 0x78) = param_3;
  if ((param_3 >> 0x15 & 1) != 0) {
    *(uint *)(param_1 + 0x78) = param_3 | 0x10000;
  }
  lVar9 = 3;
  uVar10 = *(uint *)(param_1 + 0x11660) ^ 0xf30d5eed;
  *(uint *)(param_1 + 0x117d8) = uVar10;
  *(uint *)(param_1 + 0x117dc) = ~uVar10;
  *(uint *)(param_1 + 0x117e0) = uVar10 * 0x2220c267;
  *(uint *)(param_1 + 0x117e4) = ~uVar10 * -0x57dea137;
  puVar8 = (uint64_t *)(param_1 + 0x115f0);
  do {
    LOCK();
    *puVar8 = 0;
    UNLOCK();
    lVar9 = lVar9 + -1;
    puVar8 = puVar8 + 1;
  } while (lVar9 != 0);
  uVar10 = FUN_18078ae40(param_1,*(int32_t *)(param_1 + 0x678),*(int32_t *)(param_1 + 0x67c));
  if (uVar10 != 0) goto LAB_180747287;
  in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
  lVar9 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x420,&UNK_180958000,0xab5,
                        in_stack_ffffffffffffff58);
  uVar5 = uVar11;
  if (lVar9 != 0) {
    uVar5 = FUN_1807aab30(lVar9);
  }
  *(ulonglong *)(param_1 + 0x6b8) = uVar5;
  if (uVar5 != 0) {
    *(longlong *)(uVar5 + 0x48) = param_1;
    *(int32_t *)(param_1 + 0x10780) = 0;
    plVar6 = (longlong *)(param_1 + 0x107cfU & 0xfffffffffffffff0);
    in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
    plVar6[1] = 0x400;
    *(int32_t *)(plVar6 + 2) = 0x400;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    *(longlong **)(param_1 + 0x107b8) = plVar6;
    *plVar6 = param_1;
    *(int32_t *)(*(longlong *)(param_1 + 0x107b8) + 0x30) = 1;
    *(int32_t *)(*(longlong *)(param_1 + 0x107b8) + 8) = 0x400;
    *(int32_t *)(*(longlong *)(param_1 + 0x107b8) + 0xc) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x107b8) + 0x10) = 0x400;
    uVar7 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                          *(int *)(*(longlong *)(param_1 + 0x107b8) + 8) * 8 + 0x10,&UNK_180958000,
                          0xac4,in_stack_ffffffffffffff58);
    *(uint64_t *)(*(longlong *)(param_1 + 0x107b8) + 0x18) = uVar7;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x107b8) + 0x18);
    if (lVar9 != 0) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x107b8) + 0x20) = lVar9 + 0xfU & 0xfffffffffffffff0;
      uVar5 = CONCAT44((int)(in_stack_ffffffffffffff58 >> 0x20),1);
      uVar10 = func_0x00018078a4e0(param_1 + 0x720,param_1,0x400,0x200,uVar5,CONCAT44(uVar13,0x10),1
                                  );
      if (uVar10 != 0) goto LAB_180747287;
      uVar5 = uVar5 & 0xffffffff00000000;
      uVar10 = FUN_180742460(param_1 + 0x10bd0,0,0x40000,2,uVar5);
      if (((uVar10 != 0) ||
          (uVar10 = FUN_180742460(param_1 + 0x10848,0,0x2000,2,uVar5 & 0xffffffff00000000),
          uVar10 != 0)) || (uVar10 = FUN_18074a350(param_1), uVar10 != 0)) goto LAB_180747287;
      piVar12 = (int *)(param_1 + 0x684);
      uVar13 = 0;
      piVar12[0] = -1;
      piVar12[1] = -1;
      *(uint64_t *)(param_1 + 0x68c) = 0xffffffffffffffff;
      FUN_180746460(param_1,*(int32_t *)(param_1 + 0x680),0,0,piVar12,0,0,0);
      uVar10 = *(uint *)(param_1 + 0x6d8);
      lVar9 = *(longlong *)(param_1 + 0x670);
      uStack_58 = *(uint *)(param_1 + 0x6dc) / uVar10;
      uStack_5c = 0;
      pcStack_48 = *(code **)(lVar9 + 0x350);
      if (pcStack_48 != (code *)0x0) {
        iStack_68 = *(int *)(param_1 + 0x1193c);
        iStack_60 = *(int *)(param_1 + 0x6d0);
        iStack_64 = 2;
        if (iStack_68 == 1) {
          aiStackX_10[0] = *(int *)(param_1 + 0x6d4);
        }
        else {
          aiStackX_10[0] =
               func_0x0001807462a0(iStack_68,
                                   (ulonglong)*(uint *)(param_1 + 0x6dc) % (ulonglong)uVar10);
        }
        uVar5 = lVar9 + 8;
        if (lVar9 == 0) {
          uVar5 = uVar11;
        }
        uVar7 = CONCAT44(uVar13,uVar10);
        piVar12 = &iStack_68;
        uVar10 = (*pcStack_48)(uVar5,*(int32_t *)(param_1 + 0x680),param_3,&iStack_60,piVar12,
                               aiStackX_10,&iStack_64,uVar7,&uStack_58,&uStack_5c,uStackX_20);
        uVar13 = (int32_t)((ulonglong)uVar7 >> 0x20);
        if (uVar10 == 0x34) {
          lVar9 = *(longlong *)(param_1 + 0x670);
          uVar5 = lVar9 + 8;
          if (lVar9 == 0) {
            uVar5 = uVar11;
          }
          uVar10 = (**(code **)(lVar9 + 0x368))(uVar5);
          if ((uVar10 != 0) || (uVar10 = FUN_18078ae40(param_1,2,0), uVar10 != 0))
          goto LAB_180747287;
          iStack_68 = *(int *)(param_1 + 0x1193c);
          iStack_60 = *(int *)(param_1 + 0x6d0);
          iStack_64 = 2;
          if (iStack_68 == 1) {
            aiStackX_10[0] = *(int *)(param_1 + 0x6d4);
          }
          else {
            aiStackX_10[0] = func_0x0001807462a0();
          }
          lVar9 = *(longlong *)(param_1 + 0x670);
          uVar5 = lVar9 + 8;
          if (lVar9 == 0) {
            uVar5 = uVar11;
          }
          piVar12 = &iStack_68;
          uVar10 = (**(code **)(lVar9 + 0x350))
                             (uVar5,*(int32_t *)(param_1 + 0x680),param_3,&iStack_60,piVar12,
                              aiStackX_10,&iStack_64,
                              CONCAT44(uVar13,*(int32_t *)(param_1 + 0x6d8)),&uStack_58,
                              &uStack_5c,0);
        }
        iVar2 = iStack_60;
        iVar1 = aiStackX_10[0];
        if (uVar10 != 0) goto LAB_180747287;
        if ((((0x5bcc0 < iStack_60 - 8000U) || (7 < iStack_68 - 1U)) ||
            ((4 < iStack_64 - 1U || (0x1f < aiStackX_10[0] - 1U)))) ||
           ((iStack_68 != 1 && (iVar3 = func_0x0001807462a0(), iVar1 != iVar3)))) {
          uVar10 = 0x1c;
          goto LAB_180747287;
        }
        *(int *)(*(longlong *)(param_1 + 0x670) + 100) = iVar2;
        *(int *)(*(longlong *)(param_1 + 0x670) + 0x54) = iStack_68;
        *(int *)(*(longlong *)(param_1 + 0x670) + 0x50) = iStack_64;
        *(int *)(*(longlong *)(param_1 + 0x670) + 0x58) = aiStackX_10[0];
      }
      uVar10 = FUN_18074a970(param_1,*(int32_t *)(param_1 + 0x1193c),
                             *(int32_t *)(param_1 + 0x6d4));
      if (((uVar10 != 0) ||
          ((*(int *)(*(longlong *)(param_1 + 0x670) + 100) != *(int *)(param_1 + 0x6d0) &&
           (uVar10 = FUN_18078aa60(param_1), uVar10 != 0)))) ||
         ((*(int *)(*(longlong *)(param_1 + 0x670) + 0x33c) == 1 &&
          (uVar10 = FUN_18078ac40(param_1,uStack_58,uStack_5c), uVar10 != 0)))) goto LAB_180747287;
      if (param_1 + 0x116e0 == 0) {
        uVar10 = 0x1f;
        goto LAB_180747287;
      }
      uVar10 = FUN_18078cae0(param_1,&UNK_180958070,param_1 + 0x116e0,1);
      if (uVar10 != 0) goto LAB_180747287;
      if (param_1 == -0x11720) {
        uVar10 = 0x1f;
        goto LAB_180747287;
      }
      lVar9 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x80,&UNK_180958000,0x10b9,
                            (ulonglong)piVar12 & 0xffffffff00000000);
      if ((lVar9 != 0) &&
         (plVar6 = (longlong *)func_0x000180754f90(lVar9), plVar6 != (longlong *)0x0)) {
        FUN_180768360(*(uint64_t *)(_DAT_180be12f0 + 0x120));
        lVar9 = *(longlong *)(param_1 + 0x11740);
        plVar6[1] = param_1 + 0x11740;
        *plVar6 = lVar9;
        *(longlong **)(lVar9 + 8) = plVar6;
        *(longlong **)plVar6[1] = plVar6;
        plVar6[3] = param_1;
                    // WARNING: Subroutine does not return
        FUN_180768400(*(uint64_t *)(_DAT_180be12f0 + 0x120));
      }
    }
  }
  uVar10 = 0x26;
LAB_180747287:
  if (*(char *)(param_1 + 8) == '\0') {
    *(int32_t *)(param_1 + 0x1193c) = uStack_54;
    *(int32_t *)(param_1 + 0x6d4) = uStack_50;
    FUN_180744ee0(param_1,1);
  }
  return (ulonglong)uVar10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180746c35(void)

{
  uint uVar1;
  int iVar2;
  int32_t uVar3;
  int iVar4;
  longlong lVar5;
  int32_t uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong unaff_RBP;
  ulonglong uVar15;
  longlong unaff_RDI;
  uint unaff_R15D;
  ulonglong in_stack_00000020;
  
  uVar15 = 0;
  uVar9 = uVar15;
  do {
    uVar8 = FUN_1807682e0(unaff_RDI + ((longlong)(int)uVar9 + 0x22a6) * 8,0);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar14 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar14;
  } while ((int)uVar14 < 0x16);
  *(int32_t *)(unaff_RBP + 0xb) = *(int32_t *)(unaff_RDI + 0x1193c);
  *(int32_t *)(unaff_RBP + 0xf) = *(int32_t *)(unaff_RDI + 0x6d4);
  *(uint *)(unaff_RDI + 0x78) = unaff_R15D;
  if ((unaff_R15D >> 0x15 & 1) != 0) {
    *(uint *)(unaff_RDI + 0x78) = unaff_R15D | 0x10000;
  }
  lVar13 = 3;
  uVar14 = *(uint *)(unaff_RDI + 0x11660) ^ 0xf30d5eed;
  *(uint *)(unaff_RDI + 0x117d8) = uVar14;
  *(uint *)(unaff_RDI + 0x117dc) = ~uVar14;
  *(uint *)(unaff_RDI + 0x117e0) = uVar14 * 0x2220c267;
  *(uint *)(unaff_RDI + 0x117e4) = ~uVar14 * -0x57dea137;
  puVar12 = (uint64_t *)(unaff_RDI + 0x115f0);
  do {
    LOCK();
    *puVar12 = 0;
    UNLOCK();
    lVar13 = lVar13 + -1;
    puVar12 = puVar12 + 1;
  } while (lVar13 != 0);
  uVar14 = FUN_18078ae40();
  if (uVar14 != 0) goto LAB_180747287;
  in_stack_00000020 = in_stack_00000020 & 0xffffffff00000000;
  lVar13 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x420,&UNK_180958000,0xab5,
                         in_stack_00000020);
  uVar9 = uVar15;
  if (lVar13 != 0) {
    uVar9 = FUN_1807aab30(lVar13);
  }
  *(ulonglong *)(unaff_RDI + 0x6b8) = uVar9;
  if (uVar9 != 0) {
    *(longlong *)(uVar9 + 0x48) = unaff_RDI;
    *(int32_t *)(unaff_RDI + 0x10780) = 0;
    plVar10 = (longlong *)(unaff_RDI + 0x107cfU & 0xfffffffffffffff0);
    in_stack_00000020 = in_stack_00000020 & 0xffffffff00000000;
    plVar10[1] = 0x400;
    *(int32_t *)(plVar10 + 2) = 0x400;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    *(longlong **)(unaff_RDI + 0x107b8) = plVar10;
    *plVar10 = unaff_RDI;
    *(int32_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x30) = 1;
    *(int32_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 8) = 0x400;
    *(int32_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 0xc) = 0;
    *(int32_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x10) = 0x400;
    uVar11 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                           *(int *)(*(longlong *)(unaff_RDI + 0x107b8) + 8) * 8 + 0x10,
                           &UNK_180958000,0xac4,in_stack_00000020);
    *(uint64_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x18) = uVar11;
    lVar13 = *(longlong *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x18);
    if (lVar13 != 0) {
      *(ulonglong *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x20) = lVar13 + 0xfU & 0xfffffffffffffff0
      ;
      uVar9 = CONCAT44((int)(in_stack_00000020 >> 0x20),1);
      uVar14 = func_0x00018078a4e0(unaff_RDI + 0x720);
      if (uVar14 != 0) goto LAB_180747287;
      uVar9 = uVar9 & 0xffffffff00000000;
      uVar14 = FUN_180742460(unaff_RDI + 0x10bd0,0,0x40000,2,uVar9);
      if (((uVar14 != 0) ||
          (uVar14 = FUN_180742460(unaff_RDI + 0x10848,0,0x2000,2,uVar9 & 0xffffffff00000000),
          uVar14 != 0)) || (uVar14 = FUN_18074a350(), uVar14 != 0)) goto LAB_180747287;
      puVar12 = (uint64_t *)(unaff_RDI + 0x684);
      *puVar12 = 0xffffffffffffffff;
      *(uint64_t *)(unaff_RDI + 0x68c) = 0xffffffffffffffff;
      FUN_180746460();
      uVar14 = *(uint *)(unaff_RDI + 0x6dc);
      uVar1 = *(uint *)(unaff_RDI + 0x6d8);
      lVar13 = *(longlong *)(unaff_RDI + 0x670);
      *(int32_t *)(unaff_RBP + 3) = 0;
      *(uint *)(unaff_RBP + 7) = uVar14 / uVar1;
      lVar5 = *(longlong *)(lVar13 + 0x350);
      *(longlong *)(unaff_RBP + 0x17) = lVar5;
      if (lVar5 != 0) {
        iVar2 = *(int *)(unaff_RDI + 0x1193c);
        *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x6d0);
        *(int *)(unaff_RBP + -9) = iVar2;
        *(int32_t *)(unaff_RBP + -5) = 2;
        if (iVar2 == 1) {
          uVar6 = *(int32_t *)(unaff_RDI + 0x6d4);
        }
        else {
          uVar6 = func_0x0001807462a0(iVar2,(ulonglong)uVar14 % (ulonglong)uVar1);
        }
        uVar3 = *(int32_t *)(unaff_RDI + 0x680);
        *(int32_t *)(unaff_RBP + 0x6f) = uVar6;
        uVar9 = lVar13 + 8;
        if (lVar13 == 0) {
          uVar9 = uVar15;
        }
        puVar12 = (uint64_t *)(unaff_RBP + -9);
        uVar14 = (**(code **)(unaff_RBP + 0x17))(uVar9,uVar3,unaff_R15D,unaff_RBP + -1,puVar12);
        if (uVar14 == 0x34) {
          lVar13 = *(longlong *)(unaff_RDI + 0x670);
          uVar9 = lVar13 + 8;
          if (lVar13 == 0) {
            uVar9 = uVar15;
          }
          uVar14 = (**(code **)(lVar13 + 0x368))(uVar9);
          if ((uVar14 != 0) || (uVar14 = FUN_18078ae40(), uVar14 != 0)) goto LAB_180747287;
          iVar2 = *(int *)(unaff_RDI + 0x1193c);
          *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x6d0);
          *(int *)(unaff_RBP + -9) = iVar2;
          *(int32_t *)(unaff_RBP + -5) = 2;
          if (iVar2 == 1) {
            uVar6 = *(int32_t *)(unaff_RDI + 0x6d4);
          }
          else {
            uVar6 = func_0x0001807462a0();
          }
          lVar13 = *(longlong *)(unaff_RDI + 0x670);
          uVar3 = *(int32_t *)(unaff_RDI + 0x680);
          *(int32_t *)(unaff_RBP + 0x6f) = uVar6;
          uVar9 = lVar13 + 8;
          if (lVar13 == 0) {
            uVar9 = uVar15;
          }
          puVar12 = (uint64_t *)(unaff_RBP + -9);
          uVar14 = (**(code **)(lVar13 + 0x350))(uVar9,uVar3,unaff_R15D,unaff_RBP + -1,puVar12);
        }
        if (uVar14 != 0) goto LAB_180747287;
        iVar2 = *(int *)(unaff_RBP + -1);
        if ((((0x5bcc0 < iVar2 - 8000U) || (7 < *(int *)(unaff_RBP + -9) - 1U)) ||
            ((4 < *(int *)(unaff_RBP + -5) - 1U ||
             (iVar4 = *(int *)(unaff_RBP + 0x6f), 0x1f < iVar4 - 1U)))) ||
           ((*(int *)(unaff_RBP + -9) != 1 && (iVar7 = func_0x0001807462a0(), iVar4 != iVar7)))) {
          uVar14 = 0x1c;
          goto LAB_180747287;
        }
        *(int *)(*(longlong *)(unaff_RDI + 0x670) + 100) = iVar2;
        *(int32_t *)(*(longlong *)(unaff_RDI + 0x670) + 0x54) = *(int32_t *)(unaff_RBP + -9);
        *(int32_t *)(*(longlong *)(unaff_RDI + 0x670) + 0x50) = *(int32_t *)(unaff_RBP + -5);
        *(int32_t *)(*(longlong *)(unaff_RDI + 0x670) + 0x58) = *(int32_t *)(unaff_RBP + 0x6f)
        ;
      }
      uVar14 = FUN_18074a970();
      if (((uVar14 != 0) ||
          ((*(int *)(*(longlong *)(unaff_RDI + 0x670) + 100) != *(int *)(unaff_RDI + 0x6d0) &&
           (uVar14 = FUN_18078aa60(), uVar14 != 0)))) ||
         ((*(int *)(*(longlong *)(unaff_RDI + 0x670) + 0x33c) == 1 &&
          (uVar14 = FUN_18078ac40(), uVar14 != 0)))) goto LAB_180747287;
      if (unaff_RDI == -0x116e0) {
        uVar14 = 0x1f;
        goto LAB_180747287;
      }
      uVar14 = FUN_18078cae0();
      if (uVar14 != 0) goto LAB_180747287;
      if (unaff_RDI == -0x11720) {
        uVar14 = 0x1f;
        goto LAB_180747287;
      }
      lVar13 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x80,&UNK_180958000,0x10b9,
                             (ulonglong)puVar12 & 0xffffffff00000000);
      if ((lVar13 != 0) &&
         (plVar10 = (longlong *)func_0x000180754f90(lVar13), plVar10 != (longlong *)0x0)) {
        FUN_180768360(*(uint64_t *)(_DAT_180be12f0 + 0x120));
        lVar13 = *(longlong *)(unaff_RDI + 0x11740);
        plVar10[1] = unaff_RDI + 0x11740;
        *plVar10 = lVar13;
        *(longlong **)(lVar13 + 8) = plVar10;
        *(longlong **)plVar10[1] = plVar10;
        plVar10[3] = unaff_RDI;
                    // WARNING: Subroutine does not return
        FUN_180768400(*(uint64_t *)(_DAT_180be12f0 + 0x120));
      }
    }
  }
  uVar14 = 0x26;
LAB_180747287:
  if (*(char *)(unaff_RDI + 8) == '\0') {
    *(int32_t *)(unaff_RDI + 0x1193c) = *(int32_t *)(unaff_RBP + 0xb);
    *(int32_t *)(unaff_RDI + 0x6d4) = *(int32_t *)(unaff_RBP + 0xf);
    FUN_180744ee0();
  }
  return (ulonglong)uVar14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180746d01(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int32_t uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint64_t uVar10;
  longlong unaff_RBP;
  int32_t uVar11;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  uint64_t in_stack_00000020;
  uint64_t uVar12;
  uint64_t *puVar13;
  
  uVar5 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  iVar4 = FUN_18078ae40();
  if (iVar4 != 0) goto LAB_180747287;
  uVar11 = (int32_t)unaff_RSI;
  uVar10 = CONCAT44(uVar5,uVar11);
  lVar7 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x420,&UNK_180958000,0xab5,uVar10);
  uVar5 = (int32_t)((ulonglong)uVar10 >> 0x20);
  uVar8 = unaff_RSI;
  if (lVar7 != 0) {
    uVar8 = FUN_1807aab30(lVar7);
  }
  *(ulonglong *)(unaff_RDI + 0x6b8) = uVar8;
  if (uVar8 != 0) {
    *(longlong *)(uVar8 + 0x48) = unaff_RDI;
    *(int32_t *)(unaff_RDI + 0x10780) = uVar11;
    plVar9 = (longlong *)(unaff_RDI + 0x107cfU & 0xfffffffffffffff0);
    uVar12 = CONCAT44(uVar5,uVar11);
    plVar9[1] = 0x400;
    *(int32_t *)(plVar9 + 2) = 0x400;
    plVar9[3] = unaff_RSI;
    plVar9[4] = unaff_RSI;
    plVar9[6] = unaff_RSI;
    plVar9[7] = unaff_RSI;
    *(longlong **)(unaff_RDI + 0x107b8) = plVar9;
    *plVar9 = unaff_RDI;
    *(int32_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x30) = 1;
    *(int32_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 8) = 0x400;
    *(int32_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 0xc) = uVar11;
    *(int32_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x10) = 0x400;
    uVar10 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                           *(int *)(*(longlong *)(unaff_RDI + 0x107b8) + 8) * 8 + 0x10,
                           &UNK_180958000,0xac4,uVar12);
    *(uint64_t *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x18) = uVar10;
    lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x18);
    if (lVar7 != 0) {
      *(ulonglong *)(*(longlong *)(unaff_RDI + 0x107b8) + 0x20) = lVar7 + 0xfU & 0xfffffffffffffff0;
      uVar5 = (int32_t)((ulonglong)uVar12 >> 0x20);
      iVar4 = func_0x00018078a4e0(unaff_RDI + 0x720);
      if ((((iVar4 != 0) ||
           (iVar4 = FUN_180742460(unaff_RDI + 0x10bd0,0,0x40000,2,CONCAT44(uVar5,uVar11)),
           iVar4 != 0)) ||
          (iVar4 = FUN_180742460(unaff_RDI + 0x10848,0,0x2000,2,unaff_RSI & 0xffffffff), iVar4 != 0)
          ) || (iVar4 = FUN_18074a350(), iVar4 != 0)) goto LAB_180747287;
      puVar13 = (uint64_t *)(unaff_RDI + 0x684);
      *puVar13 = 0xffffffffffffffff;
      *(uint64_t *)(unaff_RDI + 0x68c) = 0xffffffffffffffff;
      FUN_180746460();
      uVar5 = (int32_t)((ulonglong)puVar13 >> 0x20);
      uVar1 = *(uint *)(unaff_RDI + 0x6dc);
      uVar2 = *(uint *)(unaff_RDI + 0x6d8);
      lVar7 = *(longlong *)(unaff_RDI + 0x670);
      *(int32_t *)(unaff_RBP + 3) = uVar11;
      *(uint *)(unaff_RBP + 7) = uVar1 / uVar2;
      lVar7 = *(longlong *)(lVar7 + 0x350);
      *(longlong *)(unaff_RBP + 0x17) = lVar7;
      if (lVar7 != 0) {
        iVar4 = *(int *)(unaff_RDI + 0x1193c);
        *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x6d0);
        *(int *)(unaff_RBP + -9) = iVar4;
        *(int32_t *)(unaff_RBP + -5) = 2;
        if (iVar4 == 1) {
          uVar5 = *(int32_t *)(unaff_RDI + 0x6d4);
        }
        else {
          uVar5 = func_0x0001807462a0(iVar4,(ulonglong)uVar1 % (ulonglong)uVar2);
        }
        *(int32_t *)(unaff_RBP + 0x6f) = uVar5;
        uVar5 = (int32_t)((ulonglong)(unaff_RBP + -9) >> 0x20);
        iVar4 = (**(code **)(unaff_RBP + 0x17))();
        if (iVar4 == 0x34) {
          iVar4 = (**(code **)(*(longlong *)(unaff_RDI + 0x670) + 0x368))();
          if ((iVar4 != 0) || (iVar4 = FUN_18078ae40(), iVar4 != 0)) goto LAB_180747287;
          iVar4 = *(int *)(unaff_RDI + 0x1193c);
          *(int32_t *)(unaff_RBP + -1) = *(int32_t *)(unaff_RDI + 0x6d0);
          *(int *)(unaff_RBP + -9) = iVar4;
          *(int32_t *)(unaff_RBP + -5) = 2;
          if (iVar4 == 1) {
            uVar5 = *(int32_t *)(unaff_RDI + 0x6d4);
          }
          else {
            uVar5 = func_0x0001807462a0();
          }
          lVar7 = *(longlong *)(unaff_RDI + 0x670);
          *(int32_t *)(unaff_RBP + 0x6f) = uVar5;
          uVar5 = (int32_t)((ulonglong)(unaff_RBP + -9) >> 0x20);
          iVar4 = (**(code **)(lVar7 + 0x350))();
        }
        if (iVar4 != 0) goto LAB_180747287;
        iVar4 = *(int *)(unaff_RBP + -1);
        if ((((0x5bcc0 < iVar4 - 8000U) || (7 < *(int *)(unaff_RBP + -9) - 1U)) ||
            ((4 < *(int *)(unaff_RBP + -5) - 1U ||
             (iVar3 = *(int *)(unaff_RBP + 0x6f), 0x1f < iVar3 - 1U)))) ||
           ((*(int *)(unaff_RBP + -9) != 1 && (iVar6 = func_0x0001807462a0(), iVar3 != iVar6)))) {
          iVar4 = 0x1c;
          goto LAB_180747287;
        }
        *(int *)(*(longlong *)(unaff_RDI + 0x670) + 100) = iVar4;
        *(int32_t *)(*(longlong *)(unaff_RDI + 0x670) + 0x54) = *(int32_t *)(unaff_RBP + -9);
        *(int32_t *)(*(longlong *)(unaff_RDI + 0x670) + 0x50) = *(int32_t *)(unaff_RBP + -5);
        *(int32_t *)(*(longlong *)(unaff_RDI + 0x670) + 0x58) = *(int32_t *)(unaff_RBP + 0x6f)
        ;
      }
      iVar4 = FUN_18074a970();
      if (((iVar4 != 0) ||
          ((*(int *)(*(longlong *)(unaff_RDI + 0x670) + 100) != *(int *)(unaff_RDI + 0x6d0) &&
           (iVar4 = FUN_18078aa60(), iVar4 != 0)))) ||
         ((*(int *)(*(longlong *)(unaff_RDI + 0x670) + 0x33c) == 1 &&
          (iVar4 = FUN_18078ac40(), iVar4 != 0)))) goto LAB_180747287;
      if (unaff_RDI == -0x116e0) {
        iVar4 = 0x1f;
        goto LAB_180747287;
      }
      iVar4 = FUN_18078cae0();
      if (iVar4 != 0) goto LAB_180747287;
      if (unaff_RDI == -0x11720) {
        iVar4 = 0x1f;
        goto LAB_180747287;
      }
      lVar7 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x80,&UNK_180958000,0x10b9,
                            CONCAT44(uVar5,uVar11));
      if ((lVar7 != 0) &&
         (plVar9 = (longlong *)func_0x000180754f90(lVar7), plVar9 != (longlong *)0x0)) {
        FUN_180768360(*(uint64_t *)(_DAT_180be12f0 + 0x120));
        lVar7 = *(longlong *)(unaff_RDI + 0x11740);
        plVar9[1] = unaff_RDI + 0x11740;
        *plVar9 = lVar7;
        *(longlong **)(lVar7 + 8) = plVar9;
        *(longlong **)plVar9[1] = plVar9;
        plVar9[3] = unaff_RDI;
                    // WARNING: Subroutine does not return
        FUN_180768400(*(uint64_t *)(_DAT_180be12f0 + 0x120));
      }
    }
  }
  iVar4 = 0x26;
LAB_180747287:
  if (*(char *)(unaff_RDI + 8) == '\0') {
    *(int32_t *)(unaff_RDI + 0x1193c) = *(int32_t *)(unaff_RBP + 0xb);
    *(int32_t *)(unaff_RDI + 0x6d4) = *(int32_t *)(unaff_RBP + 0xf);
    FUN_180744ee0();
  }
  return iVar4;
}



int32_t FUN_1807472a1(void)

{
  longlong unaff_RBP;
  int32_t unaff_ESI;
  longlong unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 0x1193c) = *(int32_t *)(unaff_RBP + 0xb);
  *(int32_t *)(unaff_RDI + 0x6d4) = *(int32_t *)(unaff_RBP + 0xf);
  FUN_180744ee0();
  return unaff_ESI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1807472dd(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int32_t *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong unaff_RBP;
  int32_t uVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint64_t *unaff_R12;
  int unaff_R13D;
  longlong unaff_R14;
  uint64_t unaff_R15;
  ulonglong uVar11;
  
  *unaff_R12 = unaff_R15;
  uVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x6b8) + 8))
                    (*(longlong **)(unaff_RDI + 0x6b8),*(int32_t *)(unaff_RDI + 0x116bc));
  if (uVar2 == 0) {
    iVar3 = *(int *)(unaff_RDI + 0x6d4);
    if (*(int *)(unaff_RDI + 0x6d4) < (int)unaff_R14) {
      iVar3 = (int)unaff_R14;
    }
    *(int *)(unaff_RDI + 0x107b0) = iVar3;
    lVar5 = unaff_RDI + 0x10788;
    *(longlong *)(unaff_RDI + 0x10790) = lVar5;
    *(longlong *)lVar5 = lVar5;
    *(longlong **)(unaff_RDI + 0x10798) = unaff_RSI;
    uVar2 = FUN_180742e60();
    if (uVar2 == 0) {
      uVar10 = SUB84(unaff_RSI,0);
      if ((*(uint64_t **)(unaff_RDI + 0x10f78) == (uint64_t *)0x0) ||
         (iVar3 = (**(code **)**(uint64_t **)(unaff_RDI + 0x10f78))(), iVar3 == 0)) {
LAB_180747487:
        if (unaff_R13D < 1) {
LAB_1807474ff:
          if (unaff_R13D != 0) {
            lVar5 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_R13D * 0x230,
                                  &UNK_180958000,0xb72);
            *(longlong *)(unaff_RDI + 0x1e8) = lVar5;
            if (lVar5 == 0) goto LAB_180747282;
            *(int *)(unaff_RDI + 0x1e0) = unaff_R13D;
            uVar11 = (ulonglong)unaff_RSI & 0xffffffff;
            if (0 < unaff_R13D) {
              plVar6 = unaff_RSI;
              plVar4 = (longlong *)(unaff_RDI + 0x598);
              if (unaff_RDI == -0x420) {
                plVar4 = unaff_RSI;
              }
              do {
                lVar9 = (longlong)(int)uVar11 * 0x230;
                FUN_1807554e0(*(longlong *)(unaff_RDI + 0x1e8) + lVar9);
                FUN_180756640(*(longlong *)(unaff_RDI + 0x1e8) + lVar9,uVar11);
                lVar5 = *plVar4;
                plVar8 = (longlong *)(*(longlong *)(unaff_RDI + 0x1e8) + 0x178 + (longlong)plVar6);
                *plVar8 = lVar5;
                plVar8[1] = (longlong)plVar4;
                *(longlong **)(lVar5 + 8) = plVar8;
                *(longlong **)plVar8[1] = plVar8;
                FUN_180757000(*(longlong *)(unaff_RDI + 0x1e8) + lVar9,0,0,0);
                uVar2 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar2;
                plVar6 = plVar6 + 0x46;
              } while ((int)uVar2 < *(int *)(unaff_RDI + 0x1e0));
            }
          }
          if ((*(char *)(unaff_RDI + 0x12370) == (char)unaff_RSI) &&
             ((*(byte *)(unaff_RDI + 0x78) & 1) == 0)) {
            uVar2 = FUN_180767c00(unaff_RDI + 0x12220,&UNK_180958080,&UNK_18078b870);
            if (uVar2 != 0) goto LAB_180747287;
            *(int8_t *)(unaff_RDI + 0x12370) = 1;
          }
          if (*(int *)(unaff_RDI + 0x11610) != 0) {
            func_0x0001807c9f10();
            uVar2 = FUN_180742cd0();
            if (uVar2 != 0) goto LAB_180747287;
          }
          if (*(int *)(unaff_RDI + 0x1160c) != 0) {
            func_0x0001807c1df0();
            uVar2 = FUN_180742cd0();
            if (uVar2 != 0) goto LAB_180747287;
          }
          if (*(int *)(unaff_RDI + 0x11618) != 0) {
            func_0x0001807b10d0();
            uVar2 = FUN_180742cd0();
            if (uVar2 != 0) goto LAB_180747287;
          }
          if (*(int *)(unaff_RDI + 0x11620) != 0) {
            func_0x0001807ae590();
            uVar2 = FUN_180742cd0();
            if (uVar2 != 0) goto LAB_180747287;
          }
          puVar7 = (int32_t *)(unaff_RDI + 0x126cc);
          do {
            puVar7[-0xd] = 0x447a0000;
            puVar7[-0xc] = 0x40e00000;
            puVar7[-0xb] = 0x41300000;
            puVar7[-10] = 0x459c4000;
            puVar7[-9] = 0x42c80000;
            puVar7[-8] = 0x42c80000;
            puVar7[-7] = 0x42c80000;
            *(uint64_t *)(puVar7 + -6) = 0x437a0000;
            puVar7[-4] = 0x41a00000;
            puVar7[-3] = 0x42c00000;
            puVar7[-2] = 0xc2a00000;
            puVar7[-1] = 0x447a0000;
            *puVar7 = 0x40e00000;
            puVar7[1] = 0x41300000;
            puVar7[2] = 0x459c4000;
            puVar7[3] = 0x42c80000;
            puVar7[4] = 0x42c80000;
            puVar7[5] = 0x42c80000;
            *(uint64_t *)(puVar7 + 6) = 0x437a0000;
            puVar7[8] = 0x41a00000;
            puVar7[9] = 0x42c00000;
            puVar7[10] = 0xc2a00000;
            puVar7 = puVar7 + 0x18;
            unaff_R14 = unaff_R14 + -1;
          } while (unaff_R14 != 0);
          if (((*(uint *)(unaff_RDI + 0x78) & 0x10000) == 0) ||
             ((((uVar2 = FUN_1807d0940(unaff_RDI + 0x12770,1,*(int16_t *)(unaff_RDI + 0x11648)),
                uVar2 == 0 &&
                (uVar2 = FUN_1807d1980(*(uint64_t *)(unaff_RDI + 0x12770)), uVar2 == 0)) &&
               (uVar2 = FUN_1807d3200(*(uint64_t *)(unaff_RDI + 0x12770)), uVar2 == 0)) &&
              (uVar2 = FUN_1807d4140(*(uint64_t *)(unaff_RDI + 0x12770)), uVar2 == 0)))) {
            lVar5 = unaff_RDI + 0x12780;
            *(longlong *)(unaff_RDI + 0x12788) = lVar5;
            *(longlong *)lVar5 = lVar5;
            *(longlong **)(unaff_RDI + 0x12790) = unaff_RSI;
            uVar2 = FUN_180770070(unaff_RDI + 0x12798);
            if (uVar2 == 0) {
              lVar5 = unaff_RDI + 0x11768;
              *(longlong *)(unaff_RDI + 0x11770) = lVar5;
              *(longlong *)lVar5 = lVar5;
              *(longlong **)(unaff_RDI + 0x11778) = unaff_RSI;
              uVar2 = FUN_180788fe0(*(uint64_t *)(unaff_RDI + 0x670));
              if (uVar2 == 0) {
                *(int8_t *)(unaff_RDI + 8) = 1;
                cVar1 = '\x01';
                goto LAB_18074728d;
              }
            }
          }
        }
        else {
          lVar5 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x420,&UNK_180958000,0xb60);
          plVar6 = unaff_RSI;
          if (lVar5 != 0) {
            plVar6 = (longlong *)FUN_1807ab010(lVar5);
          }
          *(longlong **)(unaff_RDI + 0x6b0) = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar6[9] = unaff_RDI;
            uVar2 = FUN_1807ab080(*(uint64_t *)(unaff_RDI + 0x6b0),unaff_R13D);
            if (uVar2 != 0) goto LAB_180747287;
            goto LAB_1807474ff;
          }
LAB_180747282:
          uVar2 = 0x26;
        }
      }
      else {
        uVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x10f78) + 8))();
        if (uVar2 == 0) {
          plVar4 = (longlong *)
                   FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),200,&UNK_180958000,0xb4e);
          plVar6 = unaff_RSI;
          if (plVar4 != (longlong *)0x0) {
            plVar6 = plVar4 + 4;
            *plVar4 = (longlong)&UNK_180957fe8;
            plVar4[5] = (longlong)plVar6;
            *plVar6 = (longlong)plVar6;
            plVar4[6] = (longlong)unaff_RSI;
            plVar6 = plVar4 + 7;
            plVar4[8] = (longlong)plVar6;
            *plVar6 = (longlong)plVar6;
            plVar4[9] = (longlong)unaff_RSI;
            plVar4[0xb] = (longlong)unaff_RSI;
            *(int32_t *)(plVar4 + 10) = uVar10;
            plVar4[0xd] = (longlong)unaff_RSI;
            *(int32_t *)(plVar4 + 0xc) = uVar10;
            plVar4[0x17] = (longlong)unaff_RSI;
            *(int32_t *)(plVar4 + 0x16) = uVar10;
            plVar4[3] = (longlong)unaff_RSI;
            plVar4[0xe] = (longlong)unaff_RSI;
            plVar4[0xf] = (longlong)unaff_RSI;
            plVar6 = plVar4;
          }
          *(longlong **)(unaff_RDI + 0x10f78) = plVar6;
          if (plVar6 == (longlong *)0x0) goto LAB_180747282;
          uVar2 = (**(code **)*plVar6)(plVar6);
          if (uVar2 == 0) goto LAB_180747487;
        }
      }
    }
  }
LAB_180747287:
  unaff_RSI = (longlong *)(ulonglong)uVar2;
  cVar1 = *(char *)(unaff_RDI + 8);
LAB_18074728d:
  if (cVar1 == '\0') {
    *(int32_t *)(unaff_RDI + 0x1193c) = *(int32_t *)(unaff_RBP + 0xb);
    *(int32_t *)(unaff_RDI + 0x6d4) = *(int32_t *)(unaff_RBP + 0xf);
    FUN_180744ee0();
  }
  return (ulonglong)unaff_RSI & 0xffffffff;
}



uint64_t FUN_180747883(void)

{
  return 0x1f;
}



uint64_t FUN_1807478a0(longlong param_1,int param_2,longlong param_3)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1807499f0();
  if ((int)uVar1 == 0) {
    if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x694))) {
      if (param_3 != 0) {
        *(bool *)param_3 =
             *(longlong *)((longlong)param_2 * 0x38 + 0x30 + *(longlong *)(param_1 + 0x6a0)) != 0;
      }
      uVar1 = 0;
      if ((*(byte *)((longlong)param_2 * 0x38 + 0x18 + *(longlong *)(param_1 + 0x6a0)) & 1) == 0) {
        uVar1 = 0x50;
      }
      return uVar1;
    }
    uVar1 = 0x1f;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





