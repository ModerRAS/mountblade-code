#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part267.c - 8 个函数

// 函数: void FUN_18081b67c(int64_t param_1)
void FUN_18081b67c(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  uint uVar3;
  int8_t *puVar4;
  
  SystemStateManager();
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    uVar3 = 0;
    puVar4 = (int8_t *)(param_1 + 0x2d5);
    do {
      if (((puVar4[-1] != -1) &&
          (plVar1 = *(int64_t **)(param_1 + 0x18), plVar1 != (int64_t *)0x0)) &&
         (iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,puVar4[-1],*puVar4), iVar2 != 0))
      goto FUN_18081b7ac;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0x10;
    } while (uVar3 < 0x20);
    *(int8_t *)(param_1 + 0x2d0) = 1;
    iVar2 = FUN_1807ff260(*(uint64_t *)(param_1 + 0x20));
    if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemConfigManager();
    }
  }
FUN_18081b7ac:
                    // WARNING: Subroutine does not return
  SystemConfigManager();
}





// 函数: void FUN_18081b7ac(void)
void FUN_18081b7ac(void)

{
                    // WARNING: Subroutine does not return
  SystemConfigManager();
}





// 函数: void FUN_18081b7c0(int64_t param_1)
void FUN_18081b7c0(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint64_t *)(param_1 + 0x20);
  SystemStateManager(uVar1);
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar3 = 0;
    do {
      iVar2 = FUN_180768910(*(uint64_t *)(param_1 + 0x30));
      if (iVar2 != 0) goto LAB_18081b80b;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3c));
    *(int32_t *)(param_1 + 0x3c) = 0;
  }
LAB_18081b80b:
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar1);
}





// 函数: void FUN_18081b830(int64_t param_1)
void FUN_18081b830(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint64_t *)(param_1 + 0x20);
  SystemStateManager(uVar1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      iVar2 = FUN_180768910(*(uint64_t *)(param_1 + 0x28));
      if (iVar2 != 0) goto LAB_18081b87f;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  *(int32_t *)(param_1 + 0x38) = 0;
LAB_18081b87f:
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar1);
}



uint64_t FUN_18081b8a0(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  uint64_t uVar1;
  int iVar2;
  uint64_t uVar3;
  int *piVar4;
  int64_t lVar5;
  int iVar6;
  
  uVar3 = FUN_18081c0f0(param_1 + 0x520,0);
  if ((int)uVar3 != 0x2d) {
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(char *)(param_1 + 0x2d0) == (char)uVar3) {
      uVar1 = *(uint64_t *)(param_3 + 8);
      iVar6 = 0;
      if ((uVar1 & 3) != 0) {
        do {
          iVar6 = iVar6 + 1;
        } while (((int)uVar1 + iVar6 & 3U) != 0);
      }
      iVar2 = iVar6;
      for (piVar4 = (int *)((int64_t)iVar6 + uVar1);
          (iVar2 = iVar2 + 4, iVar2 <= *(int *)(param_3 + 0x18) && (*piVar4 == -1));
          piVar4 = piVar4 + 1) {
        iVar6 = iVar6 + 4;
      }
      uVar3 = FUN_18081b2d0(param_1 + 0x520,iVar6);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (iVar6 < *(int *)(param_3 + 0x18)) {
        lVar5 = (int64_t)iVar6 + *(int64_t *)(param_3 + 8);
        iVar6 = *(int *)(param_3 + 0x18) - iVar6;
      }
      else {
        lVar5 = *(int64_t *)(param_3 + 0x10);
        iVar6 = *(int *)(param_3 + 0x1c);
      }
      if (0 < iVar6) {
        *param_2 = lVar5;
        return 0;
      }
    }
  }
  *param_2 = 0;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18081b980(int64_t param_1)
void FUN_18081b980(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t *plVar5;
  uint uVar6;
  int8_t auStack_98 [32];
  int aiStack_78 [2];
  uint64_t *puStack_70;
  int64_t lStack_68;
  uint64_t *puStack_60;
  int64_t lStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  int64_t *plVar7;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  uStack_48 = 0;
  uStack_40 = 0;
  iVar2 = FUN_1807ff640(*(uint64_t *)(param_1 + 0x20),&uStack_48,0xc,aiStack_78);
  if (iVar2 == 0) {
    plVar7 = (int64_t *)0x0;
    do {
      if ((((aiStack_78[0] != 0xc) || (0x63ffff4 < (int)uStack_48 - 0xcU)) || (10 < (byte)uStack_40)
          ) || (uStack_40._3_1_ != '\0')) break;
      plVar5 = plVar7;
      if (*(int64_t *)(param_1 + 0x18) != 0) {
        plVar5 = (int64_t *)FUN_1807d0c10(*(int64_t *)(param_1 + 0x18),&uStack_48);
      }
      lStack_58 = 0;
      uStack_50 = 0;
      iVar2 = 0;
      puStack_70 = (uint64_t *)0x0;
      lStack_68 = 0;
      puStack_60 = (uint64_t *)0x0;
      if (plVar5 == (int64_t *)0x0) {
        iVar2 = FUN_18081c2d0(param_1 + 0x520,(int)uStack_48 + 3U & 0xfffffffc,1,&lStack_68);
        if ((iVar2 == 0) && (*(char *)(param_1 + 0x2d0) == '\0')) {
          puStack_70 = puStack_60;
          iVar2 = (int)uStack_50;
          if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
            memset(puStack_60,0xff,(int64_t)(int)uStack_50);
          }
          goto LAB_18081babb;
        }
LAB_18081bc1e:
        if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
          SystemConfigManager();
        }
        break;
      }
      iVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,&uStack_48,&puStack_70);
      if (iVar3 != 0) goto LAB_18081bc1e;
LAB_18081babb:
      *puStack_70 = uStack_48;
      *(int32_t *)(puStack_70 + 1) = uStack_40;
      iVar3 = (int)uStack_48 + -0xc;
      if ((iVar3 != 0) &&
         ((iVar4 = FUN_1807ff640(*(uint64_t *)(param_1 + 0x20),(int64_t)puStack_70 + 0xc,iVar3,
                                 aiStack_78), iVar4 != 0 || (aiStack_78[0] != iVar3))))
      goto LAB_18081bc1e;
      if (*(char *)(puStack_70 + 1) != '\0') {
        if (plVar5 == (int64_t *)0x0) goto LAB_18081bb51;
        iVar2 = (**(code **)(*plVar5 + 0x38))(plVar5,puStack_70,param_1);
        if (iVar2 == 0) goto LAB_18081bbc3;
        goto LAB_18081bc1e;
      }
      if (*(char *)((int64_t)puStack_70 + 9) != '\0') {
LAB_18081bb51:
        iVar2 = uStack_50._4_4_ + iVar2;
        SystemStateManager(*(uint64_t *)(param_1 + 0x540));
        uVar1 = *(uint64_t *)(param_1 + 0x540);
        if (iVar2 != 0) {
          *(int *)(param_1 + 0x52c) = *(int *)(param_1 + 0x52c) + iVar2;
        }
        SystemStateManager(uVar1);
        if (0 < *(int *)(param_1 + 0x558)) {
          do {
            iVar2 = FUN_180768910(*(uint64_t *)(param_1 + 0x548));
            if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
              SystemConfigManager(uVar1);
            }
            uVar6 = (int)plVar7 + 1;
            plVar7 = (int64_t *)(uint64_t)uVar6;
          } while ((int)uVar6 < *(int *)(param_1 + 0x558));
        }
        *(int32_t *)(param_1 + 0x558) = 0;
                    // WARNING: Subroutine does not return
        SystemConfigManager(uVar1);
      }
      iVar2 = FUN_18081bd90(param_1,*(int8_t *)((int64_t)puStack_70 + 0xc),
                            *(int8_t *)((int64_t)puStack_70 + 0xd),
                            *(int32_t *)((int64_t)puStack_70 + 0xe));
      if (iVar2 != 0) goto LAB_18081bc1e;
LAB_18081bbc3:
      *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) + (int)uStack_48;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        SystemConfigManager();
      }
      uStack_48 = 0;
      uStack_40 = 0;
      iVar2 = FUN_1807ff640(*(uint64_t *)(param_1 + 0x20),&uStack_48,0xc,aiStack_78);
    } while (iVar2 == 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_98);
}



// WARNING: Removing unreachable block (ram,0x00018081b7b4)

uint64_t FUN_18081bc60(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  int8_t *puVar5;
  
  uVar3 = FUN_18081b980();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar3 = *(uint64_t *)(param_1 + 0x28);
  SystemStateManager(uVar3);
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    uVar4 = 0;
    puVar5 = (int8_t *)(param_1 + 0x2d5);
    do {
      if (((puVar5[-1] != -1) &&
          (plVar1 = *(int64_t **)(param_1 + 0x18), plVar1 != (int64_t *)0x0)) &&
         (iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,puVar5[-1],*puVar5), iVar2 != 0))
      goto FUN_18081b7ac;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x10;
    } while (uVar4 < 0x20);
    *(int8_t *)(param_1 + 0x2d0) = 1;
    iVar2 = FUN_1807ff260(*(uint64_t *)(param_1 + 0x20));
    if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemConfigManager(uVar3);
    }
  }
FUN_18081b7ac:
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18081bc90(int64_t param_1)
void FUN_18081bc90(int64_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_18081b670();
  if (iVar1 == 0) {
    iVar1 = FUN_180767ad0(param_1 + 0x30);
    if (iVar1 == 0) {
      iVar1 = FUN_180767ad0(param_1 + 0x180);
      if (iVar1 == 0) {
        iVar1 = FUN_180768380(*(uint64_t *)(param_1 + 0x28),0);
        if (iVar1 == 0) {
          iVar1 = FUN_18081bd20(param_1 + 0x4d8);
          if (iVar1 == 0) {
            iVar1 = FUN_18081bd20(param_1 + 0x520);
            if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
              SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&ui_system_data_1152_ptr,0x1c8,1);
            }
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18081bd20(uint64_t *param_1)
void FUN_18081bd20(uint64_t *param_1)

{
                    // WARNING: Subroutine does not return
  SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&ui_system_data_1152_ptr,0x172,1);
}





// 函数: void FUN_18081bd90(int64_t param_1,char param_2,char param_3,int32_t param_4)
void FUN_18081bd90(int64_t param_1,char param_2,char param_3,int32_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  char *pcVar3;
  uint64_t uVar4;
  uint uVar5;
  
  uVar1 = *(uint64_t *)(param_1 + 0x28);
  SystemStateManager(uVar1);
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    uVar5 = 0;
    pcVar3 = (char *)(param_1 + 0x2d5);
    do {
      if ((pcVar3[-1] == param_2) && (*pcVar3 == param_3)) goto LAB_18081be5a;
      uVar5 = uVar5 + 1;
      pcVar3 = pcVar3 + 0x10;
    } while (uVar5 < 0x20);
    uVar4 = 0;
    pcVar3 = (char *)(param_1 + 0x2d4);
    do {
      if (*pcVar3 == -1) {
        *(char *)(param_1 + 0x2d4 + uVar4 * 0x10) = param_2;
        *(char *)(param_1 + 0x2d5 + uVar4 * 0x10) = param_3;
        *(int32_t *)(param_1 + 0x2d8 + uVar4 * 0x10) = param_4;
        *(int32_t *)(param_1 + 0x2dc + uVar4 * 0x10) = 0;
        plVar2 = *(int64_t **)(param_1 + 0x18);
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2,param_3);
        }
        break;
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar5;
      pcVar3 = pcVar3 + 0x10;
    } while (uVar5 < 0x20);
  }
LAB_18081be5a:
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



