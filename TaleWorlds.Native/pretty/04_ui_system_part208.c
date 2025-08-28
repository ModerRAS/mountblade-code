#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part208.c - 6 个函数

// 函数: void FUN_18078adbc(void)
void FUN_18078adbc(void)

{
  ulonglong in_stack_00000058;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18078add1(void)
void FUN_18078add1(void)

{
  int iVar1;
  longlong unaff_RBX;
  char unaff_BPL;
  int32_t unaff_EDI;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  ulonglong in_stack_00000058;
  
  if (*(char *)(unaff_RBX + 8) != unaff_BPL) {
    iVar1 = FUN_18078b6a0();
    if (iVar1 != 0) goto LAB_18078adb4;
    if (*(longlong *)(unaff_RBX + 0x107b8) != 0) {
      *(int32_t *)(*(longlong *)(unaff_RBX + 0x107b8) + 0x30) = 1;
    }
    iVar1 = FUN_18078b010(extraout_XMM0_Da,unaff_EDI);
    if (iVar1 != 0) {
      iVar1 = FUN_18078ae40(extraout_XMM0_Da_00,2);
      if (iVar1 != 0) goto LAB_18078adb4;
    }
  }
  *(int32_t *)(unaff_RBX + 0x680) = unaff_EDI;
  *(int32_t *)(unaff_RBX + 0x684) = uStack0000000000000048;
  *(int32_t *)(unaff_RBX + 0x688) = uStack000000000000004c;
  *(int32_t *)(unaff_RBX + 0x68c) = uStack0000000000000050;
  *(int32_t *)(unaff_RBX + 0x690) = uStack0000000000000054;
LAB_18078adb4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18078ae2b(void)
void FUN_18078ae2b(void)

{
  ulonglong in_stack_00000058;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_18078ae40(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int aiStackX_8 [2];
  int aiStackX_10 [4];
  int32_t auStackX_20 [2];
  longlong alStack_38 [2];
  
  puVar5 = *(uint64_t **)(param_1 + 0x670);
  alStack_38[0] = 0;
  iVar3 = 0;
  uVar6 = 1;
  aiStackX_10[0] = param_2;
  if (puVar5 != (uint64_t *)0x0) {
    if (param_2 == *(int *)(param_1 + 0x678)) {
      return 0;
    }
    if (param_3 == *(int *)(param_1 + 0x67c)) {
      return 0;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      FUN_18078b6a0(param_1);
      puVar5 = *(uint64_t **)(param_1 + 0x670);
    }
    uVar6 = *(int32_t *)(puVar5 + 99);
    (**(code **)*puVar5)();
    *(uint64_t *)(param_1 + 0x670) = 0;
    *(uint64_t *)(param_1 + 0x678) = 0;
  }
  if ((*(char *)(param_1 + 9) == '\0') && (uVar4 = FUN_180749060(param_1), (int)uVar4 != 0)) {
    return uVar4;
  }
  if (param_3 < 1) {
    uVar4 = func_0x000180771d90(*(uint64_t *)(param_1 + 0x11418),aiStackX_8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (aiStackX_10[0] == 0) {
      func_0x0001807aafa0(aiStackX_10);
    }
    iVar2 = 0;
    if (0 < aiStackX_8[0]) {
      do {
        iVar3 = iVar2;
        uVar4 = func_0x000180771e00(*(uint64_t *)(param_1 + 0x11418),iVar3,auStackX_20);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = func_0x000180771dc0(*(uint64_t *)(param_1 + 0x11418),auStackX_20[0],alStack_38);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      } while ((*(int *)(alStack_38[0] + 0xb0) != aiStackX_10[0]) &&
              (iVar3 = iVar3 + 1, iVar2 = iVar3, iVar3 < aiStackX_8[0]));
    }
    if (iVar3 == aiStackX_8[0]) {
      return 0x36;
    }
  }
  else {
    uVar4 = func_0x000180771dc0(*(uint64_t *)(param_1 + 0x11418),param_3,alStack_38);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  uVar4 = FUN_180771a50(*(uint64_t *)(param_1 + 0x11418),alStack_38[0] + 0x18,param_1 + 0x670);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar1 = *(longlong *)(param_1 + 0x670);
  *(int32_t *)(param_1 + 0x678) = *(int32_t *)(lVar1 + 0x3c0);
  *(int32_t *)(param_1 + 0x67c) = *(int32_t *)(lVar1 + 0x3d0);
  *(int32_t *)(lVar1 + 0x318) = uVar6;
  if (*(longlong *)(param_1 + 0x107b8) != 0) {
    *(int32_t *)(*(longlong *)(param_1 + 0x107b8) + 0x30) = 1;
  }
  if (((*(char *)(param_1 + 8) != '\0') && (iVar3 = FUN_18078b010(param_1,0), iVar3 != 0)) &&
     (uVar4 = FUN_18078ae40(param_1,2), (int)uVar4 != 0)) {
    return uVar4;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078b010(longlong param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  longlong lVar8;
  uint64_t *puVar9;
  int32_t uVar10;
  int aiStackX_8 [2];
  int32_t auStackX_18 [2];
  int aiStackX_20 [2];
  int *piVar11;
  ulonglong uVar12;
  int32_t *puVar13;
  int32_t uVar14;
  int32_t *puVar15;
  int32_t uVar17;
  uint64_t uVar16;
  int32_t uVar19;
  uint64_t uVar18;
  int32_t uStack_98;
  int32_t uStack_94;
  int iStack_90;
  uint uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int8_t uStack_74;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t *puStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  lVar8 = *(longlong *)(param_1 + 0x670);
  puVar9 = (uint64_t *)0x0;
  uVar10 = 0;
  aiStackX_8[0] = 0;
  if (*(code **)(lVar8 + 0x340) != (code *)0x0) {
    puVar7 = (uint64_t *)(lVar8 + 8);
    if (lVar8 == 0) {
      puVar7 = puVar9;
    }
    uVar5 = (**(code **)(lVar8 + 0x340))(puVar7,aiStackX_8);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  if ((param_2 < -1) || (aiStackX_8[0] <= param_2)) {
    return 0x1f;
  }
  piVar11 = (int *)(param_1 + 0x684);
  *(int *)(param_1 + 0x680) = param_2;
  piVar11[0] = -1;
  piVar11[1] = -1;
  uVar19 = 0;
  *(uint64_t *)(param_1 + 0x68c) = 0xffffffffffffffff;
  uVar17 = 0;
  uVar14 = 0;
  uVar5 = FUN_180746460(param_1,*(int32_t *)(param_1 + 0x680),0,0,piVar11,0,0,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  lVar8 = *(longlong *)(param_1 + 0x670);
  uStack_8c = *(uint *)(param_1 + 0x6dc) / *(uint *)(param_1 + 0x6d8);
  iStack_90 = 0;
  if (*(code **)(lVar8 + 0x350) != (code *)0x0) {
    auStackX_18[0] = *(int32_t *)(param_1 + 0x6d0);
    aiStackX_20[0] = *(int *)(param_1 + 0x1193c);
    uStack_98 = 2;
    if (aiStackX_20[0] == 1) {
      uVar10 = *(int32_t *)(param_1 + 0x6d4);
    }
    else if ((aiStackX_20[0] < 0x3e9) && (uVar10 = 2, aiStackX_20[0] != 1000)) {
      switch(aiStackX_20[0]) {
      case 2:
        uVar10 = 1;
        break;
      case 4:
        uVar10 = 4;
        break;
      case 5:
        uVar10 = 5;
        break;
      case 6:
        uVar10 = 6;
        break;
      case 7:
        uVar10 = 8;
        break;
      case 8:
        uVar10 = 0xc;
      }
    }
    puVar7 = (uint64_t *)(lVar8 + 8);
    if (lVar8 == 0) {
      puVar7 = puVar9;
    }
    puVar15 = &uStack_98;
    uVar16 = CONCAT44(uVar19,*(uint *)(param_1 + 0x6d8));
    puVar13 = &uStack_94;
    piVar11 = aiStackX_20;
    uStack_94 = uVar10;
    uVar5 = (**(code **)(lVar8 + 0x350))
                      (puVar7,param_2,*(int32_t *)(param_1 + 0x78),auStackX_18,piVar11,puVar13,
                       puVar15,uVar16,&uStack_8c,&iStack_90,0);
    uVar14 = (int32_t)((ulonglong)puVar13 >> 0x20);
    uVar17 = (int32_t)((ulonglong)puVar15 >> 0x20);
    uVar19 = (int32_t)((ulonglong)uVar16 >> 0x20);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(int32_t *)(*(longlong *)(param_1 + 0x670) + 100) = auStackX_18[0];
    *(int *)(*(longlong *)(param_1 + 0x670) + 0x54) = aiStackX_20[0];
    *(int32_t *)(*(longlong *)(param_1 + 0x670) + 0x50) = uStack_98;
    *(int32_t *)(*(longlong *)(param_1 + 0x670) + 0x58) = uStack_94;
    *(int8_t *)(*(longlong *)(param_1 + 0x670) + 0x311) = 0;
  }
  uVar5 = FUN_18074a970(param_1,*(int32_t *)(param_1 + 0x1193c),*(int32_t *)(param_1 + 0x6d4))
  ;
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  puVar7 = *(uint64_t **)(param_1 + 0x10f78);
  if (puVar7 != (uint64_t *)0x0) {
    uVar18 = CONCAT44(uVar19,*(int32_t *)(*(longlong *)(param_1 + 0x670) + 0x58));
    uVar16 = CONCAT44(uVar17,*(int32_t *)(*(longlong *)(param_1 + 0x670) + 0x54));
    uVar5 = CONCAT44(uVar14,*(int32_t *)(param_1 + 0x6d4));
    piVar11 = (int *)CONCAT44((int)((ulonglong)piVar11 >> 0x20),*(int32_t *)(param_1 + 0x1193c));
    iVar4 = (**(code **)*puVar7)
                      (puVar7,param_1,*(int32_t *)(param_1 + 0x6d8),
                       *(int32_t *)(param_1 + 0x6d0),piVar11,uVar5,uVar16,uVar18,0);
    uVar10 = (int32_t)((ulonglong)uVar5 >> 0x20);
    uVar14 = (int32_t)((ulonglong)uVar16 >> 0x20);
    uVar17 = (int32_t)((ulonglong)uVar18 >> 0x20);
    if (iVar4 != 0) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10f78) + 8))();
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar12 = (ulonglong)piVar11 & 0xffffffff00000000;
      puVar6 = (uint64_t *)
               FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),200,&UNK_18095ae30,0x181,uVar12
                            );
      puVar7 = puVar9;
      if (puVar6 != (uint64_t *)0x0) {
        puVar7 = puVar6 + 4;
        *puVar6 = &UNK_180957fe8;
        puVar6[5] = puVar7;
        *puVar7 = puVar7;
        puVar6[6] = 0;
        puVar7 = puVar6 + 7;
        puVar6[8] = puVar7;
        *puVar7 = puVar7;
        puVar6[9] = 0;
        puVar6[0xb] = 0;
        *(int32_t *)(puVar6 + 10) = 0;
        puVar6[0xd] = 0;
        *(int32_t *)(puVar6 + 0xc) = 0;
        puVar6[0x17] = 0;
        *(int32_t *)(puVar6 + 0x16) = 0;
        puVar6[3] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar7 = puVar6;
      }
      *(uint64_t **)(param_1 + 0x10f78) = puVar7;
      if (puVar7 == (uint64_t *)0x0) {
        return 0x26;
      }
      piVar11 = (int *)CONCAT44((int)(uVar12 >> 0x20),*(int32_t *)(param_1 + 0x1193c));
      uVar5 = (**(code **)*puVar7)
                        (puVar7,param_1,*(int32_t *)(param_1 + 0x6d8),
                         *(int32_t *)(param_1 + 0x6d0),piVar11,
                         CONCAT44(uVar10,*(int32_t *)(param_1 + 0x6d4)),
                         CONCAT44(uVar14,*(int32_t *)(*(longlong *)(param_1 + 0x670) + 0x54)),
                         CONCAT44(uVar17,*(int32_t *)(*(longlong *)(param_1 + 0x670) + 0x58)),0);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
  }
  if (*(int *)(*(longlong *)(param_1 + 0x670) + 100) != *(int *)(param_1 + 0x6d0)) {
    uStack_80 = *(int32_t *)(param_1 + 0x6d8);
    uStack_74 = 1;
    _uStack_7c = CONCAT44(5,*(int32_t *)(*(longlong *)(param_1 + 0x670) + 0x58));
    puVar7 = (uint64_t *)func_0x0001807e5100();
    piVar11 = (int *)((ulonglong)piVar11 & 0xffffffff00000000);
    uStack_68 = *puVar7;
    uStack_60 = puVar7[1];
    uStack_58 = puVar7[2];
    uStack_50 = puVar7[3];
    uStack_40 = puVar7[5];
    uStack_38 = puVar7[6];
    uStack_30 = puVar7[7];
    puStack_48 = &uStack_80;
    lVar8 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x2d8,&UNK_18095ae30,0x1c6,piVar11
                         );
    if (lVar8 != 0) {
      puVar9 = (uint64_t *)FUN_1807e4c10(lVar8);
    }
    *(uint64_t **)(param_1 + 0x10f80) = puVar9;
    if (puVar9 == (uint64_t *)0x0) {
      return 0x26;
    }
    puVar9[0x15] = param_1;
    *(longlong *)(*(longlong *)(param_1 + 0x10f80) + 0xd8) = param_1 + 0x11848;
    *(int32_t *)(*(longlong *)(param_1 + 0x10f80) + 0xe0) = *(int32_t *)(param_1 + 0x116b8);
    uVar5 = FUN_18075a230(*(uint64_t *)(param_1 + 0x10f80),&uStack_68);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(int32_t *)(*(longlong *)(param_1 + 0x10f80) + 0x2b8) = 0xffffffff;
    *(code **)(*(longlong *)(param_1 + 0x10f80) + 0x298) = FUN_180787030;
    *(uint64_t *)(*(longlong *)(param_1 + 0x10f80) + 0x1e8) = *(uint64_t *)(param_1 + 0x670);
    *(float *)(*(longlong *)(param_1 + 0x10f80) + 0x230) =
         (float)*(int *)(*(longlong *)(param_1 + 0x670) + 100);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10f80) + 0x38))();
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10f80) + 0x28))
                      (*(longlong **)(param_1 + 0x10f80),0,0,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_180762070(*(uint64_t *)(param_1 + 0x10f80),1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10f80) + 100);
    *puVar1 = *puVar1 | 0x200;
    UNLOCK();
  }
  uVar3 = uStack_8c;
  iVar4 = iStack_90;
  lVar8 = *(longlong *)(param_1 + 0x670);
  if (*(int *)(lVar8 + 0x33c) == 1) {
    if (((int)uStack_8c < 1) || (iStack_90 < 0)) {
      return 0x1c;
    }
    uStack_84 = 0;
    uStack_88 = 0;
    func_0x000180746360(param_1,&uStack_88,&uStack_84);
    iVar2 = *(int *)(param_1 + 0x6d4);
    lVar8 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x30,&UNK_18095ae30,0x1ee,
                          (ulonglong)piVar11 & 0xffffffff00000000);
    *(longlong *)(param_1 + 0x10f88) = lVar8;
    if (lVar8 == 0) {
      return 0x26;
    }
    uVar5 = FUN_1807869c0(lVar8,uStack_88,uVar3,iVar2 * 4,iVar4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    lVar8 = *(longlong *)(param_1 + 0x670);
  }
  uVar5 = FUN_180788fe0(lVar8);
  if ((int)uVar5 == 0) {
    if ((*(code **)(param_1 + 0x11838) != (code *)0x0) &&
       ((*(uint *)(param_1 + 0x11840) & 0x4000) != 0)) {
      (**(code **)(param_1 + 0x11838))
                (param_1,0x4000,(longlong)*(int *)(*(longlong *)(param_1 + 0x670) + 0x3c0),
                 (longlong)*(int *)(param_1 + 0x680),*(uint64_t *)(param_1 + 0x11670));
    }
    uVar5 = 0;
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078b543(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t unaff_R15D;
  uint64_t in_stack_00000020;
  int32_t uVar6;
  
  uVar6 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  if (*(int *)(param_1 + 0x33c) == 1) {
    iVar1 = *(int *)(unaff_RBP + -0x2d);
    iVar2 = *(int *)(unaff_RBP + -0x31);
    if ((iVar1 < 1) || (iVar2 < 0)) {
      return 0x1c;
    }
    *(int32_t *)(unaff_RBP + -0x25) = unaff_R15D;
    *(int32_t *)(unaff_RBP + -0x29) = unaff_R15D;
    func_0x000180746360();
    iVar3 = *(int *)(unaff_RBX + 0x6d4);
    lVar4 = FUN_180742050(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x30,&UNK_18095ae30,0x1ee,
                          CONCAT44(uVar6,unaff_R15D));
    *(longlong *)(unaff_RBX + 0x10f88) = lVar4;
    if (lVar4 == 0) {
      return 0x26;
    }
    uVar5 = FUN_1807869c0(lVar4,*(int32_t *)(unaff_RBP + -0x29),iVar1,iVar3 * 4,iVar2);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    param_1 = *(longlong *)(unaff_RBX + 0x670);
  }
  uVar5 = FUN_180788fe0(param_1);
  if ((int)uVar5 == 0) {
    if ((*(code **)(unaff_RBX + 0x11838) != (code *)0x0) &&
       ((*(uint *)(unaff_RBX + 0x11840) & 0x4000) != 0)) {
      (**(code **)(unaff_RBX + 0x11838))();
    }
    uVar5 = 0;
  }
  return uVar5;
}





// 函数: void FUN_18078b5e0(void)
void FUN_18078b5e0(void)

{
  return;
}



uint64_t FUN_18078b5ed(void)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  
  uVar1 = FUN_1807869c0();
  if ((int)uVar1 == 0) {
    uVar1 = FUN_180788fe0(*(uint64_t *)(unaff_RBX + 0x670));
    if ((int)uVar1 == 0) {
      if ((*(code **)(unaff_RBX + 0x11838) != (code *)0x0) &&
         ((*(uint *)(unaff_RBX + 0x11840) & 0x4000) != 0)) {
        (**(code **)(unaff_RBX + 0x11838))();
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint64_t FUN_18078b670(void)

{
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18078b6a0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = FUN_18078c0a0(param_1,0);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_180743160(param_1,1);
    uVar7 = uVar2 & 0xffffffff;
    if ((int)uVar2 == 0) {
      uVar8 = 0;
      uVar6 = 0;
      uVar2 = uVar8;
      uVar5 = uVar8;
      if (0 < *(int *)(param_1 + 0x694)) {
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x6a0) + 0x30 + uVar2) != 0) {
            uVar3 = FUN_180748290(param_1,uVar5);
            uVar7 = uVar3 & 0xffffffff;
            if ((int)uVar3 != 0) {
              return uVar3;
            }
          }
          uVar6 = (uint)uVar7;
          uVar4 = (int)uVar5 + 1;
          uVar2 = uVar2 + 0x38;
          uVar5 = (ulonglong)uVar4;
        } while ((int)uVar4 < *(int *)(param_1 + 0x694));
      }
      *(int32_t *)(param_1 + 0x6ac) = 0;
      FUN_1807891d0(*(uint64_t *)(param_1 + 0x670));
      lVar1 = *(longlong *)(param_1 + 0x670);
      if (*(code **)(lVar1 + 0x368) != (code *)0x0) {
        uVar2 = lVar1 + 8;
        if (lVar1 == 0) {
          uVar2 = uVar8;
        }
        (**(code **)(lVar1 + 0x368))(uVar2);
      }
      if (*(longlong **)(param_1 + 0x10f80) == (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x10f88) == 0) {
          uVar2 = 0;
        }
        else {
          FUN_180788f70();
          if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(param_1 + 0x10f88)
                          ,&UNK_18095ae30,0x136,1);
          }
          uVar2 = (ulonglong)uVar6;
        }
      }
      else {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10f80) + 0x10))();
        if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(param_1 + 0x10f80),
                        &UNK_18095ae30,0x12d,1);
        }
      }
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18078b6ba(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = FUN_180743160();
  uVar7 = uVar2 & 0xffffffff;
  if ((int)uVar2 == 0) {
    uVar8 = 0;
    uVar6 = 0;
    uVar2 = uVar8;
    uVar5 = uVar8;
    if (0 < *(int *)(unaff_RBX + 0x694)) {
      do {
        if (*(longlong *)(*(longlong *)(unaff_RBX + 0x6a0) + 0x30 + uVar2) != 0) {
          uVar3 = FUN_180748290();
          uVar7 = uVar3 & 0xffffffff;
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        uVar6 = (uint)uVar7;
        uVar4 = (int)uVar5 + 1;
        uVar2 = uVar2 + 0x38;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(unaff_RBX + 0x694));
    }
    *(int32_t *)(unaff_RBX + 0x6ac) = 0;
    FUN_1807891d0(*(uint64_t *)(unaff_RBX + 0x670));
    lVar1 = *(longlong *)(unaff_RBX + 0x670);
    if (*(code **)(lVar1 + 0x368) != (code *)0x0) {
      uVar2 = lVar1 + 8;
      if (lVar1 == 0) {
        uVar2 = uVar8;
      }
      (**(code **)(lVar1 + 0x368))(uVar2);
    }
    if (*(longlong **)(unaff_RBX + 0x10f80) == (longlong *)0x0) {
      if (*(longlong *)(unaff_RBX + 0x10f88) == 0) {
        uVar2 = 0;
      }
      else {
        FUN_180788f70();
        if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
          FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(unaff_RBX + 0x10f88)
                        ,&UNK_18095ae30,0x136,1);
        }
        uVar2 = (ulonglong)uVar6;
      }
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(unaff_RBX + 0x10f80) + 0x10))();
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(unaff_RBX + 0x10f80),
                      &UNK_18095ae30,0x12d,1);
      }
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18078b6d1(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong unaff_RDI;
  ulonglong uVar7;
  
  uVar6 = (uint)unaff_RDI;
  uVar7 = 0;
  uVar3 = uVar7;
  uVar5 = uVar7;
  if (0 < *(int *)(unaff_RBX + 0x694)) {
    do {
      if (*(longlong *)(*(longlong *)(unaff_RBX + 0x6a0) + 0x30 + uVar3) != 0) {
        uVar2 = FUN_180748290();
        unaff_RDI = uVar2 & 0xffffffff;
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
      uVar6 = (uint)unaff_RDI;
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 0x38;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(unaff_RBX + 0x694));
  }
  *(int32_t *)(unaff_RBX + 0x6ac) = 0;
  FUN_1807891d0(*(uint64_t *)(unaff_RBX + 0x670));
  lVar1 = *(longlong *)(unaff_RBX + 0x670);
  if (*(code **)(lVar1 + 0x368) != (code *)0x0) {
    uVar3 = lVar1 + 8;
    if (lVar1 == 0) {
      uVar3 = uVar7;
    }
    (**(code **)(lVar1 + 0x368))(uVar3);
  }
  if (*(longlong **)(unaff_RBX + 0x10f80) == (longlong *)0x0) {
    if (*(longlong *)(unaff_RBX + 0x10f88) == 0) {
      uVar3 = 0;
    }
    else {
      FUN_180788f70();
      if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(unaff_RBX + 0x10f88),
                      &UNK_18095ae30,0x136,1);
      }
      uVar3 = (ulonglong)uVar6;
    }
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(unaff_RBX + 0x10f80) + 0x10))();
    if ((int)uVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(uint64_t *)(unaff_RBX + 0x10f80),
                    &UNK_18095ae30,0x12d,1);
    }
  }
  return uVar3;
}





// 函数: void FUN_18078b801(void)
void FUN_18078b801(void)

{
  return;
}





// 函数: void FUN_18078b806(void)
void FUN_18078b806(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



