#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part385.c - 10 个函数

// 函数: void FUN_180876428(void)
void FUN_180876428(void)

{
  uint *puVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint64_t in_RAX;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t *puVar11;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar12;
  char unaff_R13B;
  int64_t unaff_R14;
  uint uVar13;
  bool bVar14;
  int32_t uVar15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int8_t in_stack_00000040;
  int64_t *in_stack_00000048;
  int iStack0000000000000050;
  int iStack0000000000000058;
  int32_t uStack000000000000005c;
  int64_t in_stack_00000060;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  
  unaff_RBP[-0x10] = in_RAX;
  unaff_RBP[-0xf] = unaff_RDI;
  unaff_RBP[-0xe] = unaff_RDI;
  unaff_RBP[-0xd] = unaff_RDI;
  unaff_RBP[-0xc] = unaff_RDI;
  *(int32_t *)(unaff_RBP + -0xb) = 0xffffffff;
  uVar15 = (int32_t)unaff_RDI;
  *(int32_t *)((int64_t)unaff_RBP + -0x54) = uVar15;
  unaff_RBP[-10] = unaff_RDI;
  unaff_RBP[-9] = unaff_RDI;
  unaff_RBP[-8] = unaff_RDI;
  unaff_RBP[-7] = unaff_RDI;
  *(int32_t *)(unaff_RBP + -6) = 0xffffffff;
  *(int32_t *)((int64_t)unaff_RBP + -0x2c) = uVar15;
  unaff_RBP[-5] = unaff_RDI;
  unaff_RBP[-4] = unaff_RDI;
  unaff_RBP[-3] = unaff_RDI;
  unaff_RBP[-2] = unaff_RDI;
  *(int32_t *)(unaff_RBP + -1) = 0xffffffff;
  *(int32_t *)((int64_t)unaff_RBP + -4) = uVar15;
  *unaff_RBP = unaff_RDI;
  unaff_RBP[1] = unaff_RDI;
  unaff_RBP[2] = unaff_RDI;
  unaff_RBP[3] = unaff_RDI;
  *(int32_t *)(unaff_RBP + 4) = 0xffffffff;
  *(int32_t *)((int64_t)unaff_RBP + 0x24) = uVar15;
  unaff_RBP[5] = unaff_RDI;
  unaff_RBP[6] = unaff_RDI;
  unaff_RBP[7] = unaff_RDI;
  unaff_RBP[8] = unaff_RDI;
  *(int32_t *)(unaff_RBP + 9) = 0xffffffff;
  *(int32_t *)((int64_t)unaff_RBP + 0x4c) = uVar15;
  unaff_RBP[10] = unaff_RDI;
  unaff_RBP[0xb] = unaff_RDI;
  unaff_RBP[0xc] = unaff_RDI;
  unaff_RBP[0xd] = unaff_RDI;
  *(int32_t *)(unaff_RBP + 0xe) = 0xffffffff;
  *(int32_t *)((int64_t)unaff_RBP + 0x74) = uVar15;
  uVar15 = func_0x0001808713a0();
  if (unaff_R13B == '\0') {
    iVar5 = FUN_18086f610(uVar15,unaff_R14 + 0xad8,&stack0x00000040);
    uVar15 = extraout_XMM0_Da_00;
  }
  else {
    iVar5 = FUN_180882610(uVar15,unaff_RSI + 0x53);
    if (iVar5 != 0) goto LAB_180876d05;
    iVar5 = FUN_18088b520();
    uVar15 = extraout_XMM0_Da;
  }
  if (iVar5 != 0) goto LAB_180876d05;
  uVar2 = *(uint64_t *)(unaff_R14 + 0x78);
  while ((iVar5 = (int)unaff_RDI, -1 < iVar5 && (iVar5 < *(int *)(unaff_RSI + 0x11)))) {
    iVar6 = FUN_1808d9fe0(*(uint64_t *)(unaff_RSI[0x10] + (int64_t)iVar5 * 8),uVar2);
    if (iVar6 != 0) goto LAB_180876d05;
    uVar15 = extraout_XMM0_Da_01;
    unaff_RDI = (uint64_t)(iVar5 + 1);
  }
  uVar2 = *(uint64_t *)(unaff_R14 + 0x78);
  uVar13 = *(uint *)(unaff_R14 + 0x20) >> 1;
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(unaff_RSI + 0x13))); iVar5 = iVar5 + 1) {
    iVar6 = FUN_1808da5c0(*(uint64_t *)(unaff_RSI[0x12] + (int64_t)iVar5 * 8),uVar2,uVar13 & 1);
    if (((1 < iVar6 - 0x35U) || ((uVar13 & 1) == 0)) && (iVar6 != 0)) goto LAB_180876d05;
    uVar15 = extraout_XMM0_Da_02;
  }
  if ((unaff_R13B == '\0') &&
     (iVar5 = FUN_180880350(uVar15,*(uint64_t *)(unaff_R14 + 800)), uVar15 = extraout_XMM0_Da_03,
     iVar5 != 0)) goto LAB_180876d05;
  _iStack0000000000000050 = *(uint64_t **)(unaff_R14 + 800);
  in_stack_00000048 = (int64_t *)&unknown_var_5984_ptr;
  puVar11 = _iStack0000000000000050;
  if (unaff_R13B != '\0') {
    puVar11 = &stack0x00000048;
  }
  lVar8 = *(int64_t *)(unaff_R14 + 0xa0);
  _iStack0000000000000058 = unaff_RSI;
  if (lVar8 != 0) {
    uVar15 = SystemStateManager(lVar8);
  }
  iVar5 = FUN_1808787d0(uVar15,unaff_R14 + 0x898,unaff_R14 + 0x4a8,unaff_R14 + 0x4d8,puVar11);
  if (iVar5 != 0) {
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar8);
    }
    goto LAB_180876d05;
  }
  if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager(lVar8);
  }
  if (unaff_R13B != '\0') {
    in_stack_00000070 = 0;
    iVar5 = SystemSecurityProcessor(&stack0x00000070);
    if ((((iVar5 == 0) &&
         (iVar5 = FUN_18087e0b0(extraout_XMM0_Da_04,*(uint64_t *)(unaff_R14 + 0xc0),
                                unaff_RBP + 0x9c,*(uint64_t *)(unaff_R14 + 800),unaff_RBP + -0x10)
         , iVar5 == 0)) &&
        ((((iVar5 = FUN_180869270(FUN_180873f80,unaff_R14 + 0x328), iVar5 == 0 &&
           (((iVar5 = FUN_1808690e0(FUN_180873f80,unaff_R14 + 0x358), iVar5 == 0 &&
             (iVar5 = FUN_180869720(FUN_180873f80,unaff_R14 + 0x388), iVar5 == 0)) &&
            (iVar5 = FUN_180869400(FUN_180873f80,unaff_R14 + 0x3b8), iVar5 == 0)))) &&
          (iVar5 = FUN_180869590(FUN_180873f80,unaff_R14 + 1000), iVar5 == 0)) || (iVar5 == 0)))) &&
       (iVar5 = FUN_1808740c0(unaff_RBP + -0x10), iVar5 == 0)) {
      FUN_180882a50(unaff_RSI + 0x59,unaff_RBP + -0x10);
      lVar8 = *(int64_t *)(unaff_R14 + 0xa0);
      in_stack_00000060 = lVar8;
      if (lVar8 != 0) {
        SystemStateManager(lVar8);
      }
      in_stack_00000048 = (int64_t *)(unaff_R14 + 0x778);
      _iStack0000000000000050 = (uint64_t *)0xffffffffffffffff;
      _iStack0000000000000058 = (uint64_t *)CONCAT44(uStack000000000000005c,0xffffffff);
      FUN_1808741f0(in_stack_00000048,&stack0x00000050,&stack0x00000058);
      if (iStack0000000000000058 != -1) {
        iVar5 = iStack0000000000000058;
        iVar6 = iStack0000000000000050;
        do {
          do {
            lVar8 = *(int64_t *)(in_stack_00000048[2] + 0x18 + (int64_t)iVar5 * 0x20);
            iVar7 = FUN_1808c7ff0(*(uint64_t *)(lVar8 + 0xd0));
            if (iVar7 != 0) {
              if (in_stack_00000060 != 0) {
                    // WARNING: Subroutine does not return
                SystemConfigManager();
              }
              goto LAB_180876b83;
            }
            puVar1 = (uint *)(*(int64_t *)(lVar8 + 0xd0) + 4);
            *puVar1 = *puVar1 & 0xfffffff7;
          } while ((iVar5 != -1) &&
                  (iVar5 = *(int *)(in_stack_00000048[2] + 0x10 + (int64_t)iVar5 * 0x20),
                  iVar5 != -1));
          iVar5 = iVar6 + 1;
          bVar14 = iVar6 != -1;
          iVar6 = 0;
          if (bVar14) {
            iVar6 = iVar5;
          }
          if (iVar6 != (int)in_stack_00000048[1]) {
            lVar8 = (int64_t)iVar6;
            do {
              if (*(int *)(*in_stack_00000048 + lVar8 * 4) != -1) {
                iVar5 = *(int *)(*in_stack_00000048 + (int64_t)iVar6 * 4);
                goto LAB_1808768bc;
              }
              iVar6 = iVar6 + 1;
              lVar8 = lVar8 + 1;
            } while (lVar8 != (int)in_stack_00000048[1]);
          }
          iVar5 = -1;
          iVar6 = iVar5;
LAB_1808768bc:
          lVar8 = in_stack_00000060;
        } while (iVar5 != -1);
      }
      uVar2 = *(uint64_t *)(unaff_R14 + 0x90);
      plVar3 = *(int64_t **)(unaff_R14 + 800);
      uVar12 = unaff_RSI[0x57];
      do {
        if ((uVar12 < (uint64_t)unaff_RSI[0x57]) ||
           ((uint64_t)((int64_t)*(int *)(unaff_RSI + 0x58) * 0x10 + unaff_RSI[0x57]) <= uVar12))
        goto LAB_1808769aa;
        cVar4 = func_0x0001808c0d90(uVar2,uVar12);
        if (cVar4 != '\0') {
          iVar5 = FUN_1808c2060(uVar2,uVar12,0);
          if (iVar5 != 0) goto LAB_1808769aa;
          lVar9 = (**(code **)(*plVar3 + 0x150))(plVar3,uVar12);
          if (lVar9 != 0) {
            FUN_1808c5220(unaff_RBP + -0x10,lVar9);
            in_stack_00000060 = *(int64_t *)(lVar9 + 0x10);
            uStack0000000000000068 = *(int32_t *)(lVar9 + 0x18);
            uStack000000000000006c = *(int32_t *)(lVar9 + 0x1c);
            in_stack_00000040 = 1;
            FUN_180879610(unaff_RBP + -0xf,&stack0x00000060);
          }
        }
        uVar12 = uVar12 + 0x10;
      } while( true );
    }
    goto LAB_180876b83;
  }
  if (unaff_RSI[0x5c] != 0) {
    lVar8 = *(int64_t *)(unaff_R14 + 0xa0);
    if (lVar8 != 0) {
      SystemStateManager();
    }
    plVar3 = unaff_RSI + 4;
    if (plVar3 == (int64_t *)0x0) {
FUN_180876d54:
      if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
        SystemConfigManager(lVar8);
      }
      goto LAB_180876d05;
    }
    plVar10 = (int64_t *)*plVar3;
    if (plVar10 != plVar3) {
      iVar5 = 0;
      do {
        plVar10 = (int64_t *)*plVar10;
        iVar5 = iVar5 + 1;
      } while (plVar10 != plVar3);
      if (iVar5 != 0) goto FUN_180876d54;
    }
    lVar9 = *(int64_t *)(unaff_R14 + 0xaa8);
    unaff_RSI[5] = (int64_t *)(unaff_R14 + 0xaa8);
    *plVar3 = lVar9;
    *(int64_t **)(lVar9 + 8) = plVar3;
    *(int64_t **)unaff_RSI[5] = plVar3;
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar8);
    }
  }
  iVar5 = FUN_1808db1d0(*(uint64_t *)(unaff_R14 + 0xaa0));
  if (iVar5 == 0) {
    if (*(char *)(unaff_RSI + 0x5f) != '\0') {
      if (((*(int64_t *)(unaff_R14 + 0xad0) != 0) &&
          ((*(ushort *)(*(int64_t *)(unaff_R14 + 0xad0) + 0xe) & 0x3fff) == 1)) &&
         (iVar5 = FUN_1808bc120(*(uint64_t *)(unaff_R14 + 0x90)), iVar5 != 0)) goto LAB_180876d05;
      if (((*(char *)(unaff_RSI + 0x5f) != '\0') && (*(int64_t *)(unaff_R14 + 0x80) != 0)) &&
         (unaff_RSI[0x60] != 0)) {
        func_0x0001808671f0();
      }
    }
    if (*(int64_t *)(unaff_R14 + 0xad0) != 0) {
      FUN_180881eb0();
    }
  }
LAB_180876d05:
  FUN_180872630(unaff_RBP + 0xf);
  FUN_180873cd0(unaff_RBP + -0xf);
  FUN_1808dc190(unaff_RBP + 0x9c);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(unaff_RBP[0x110] ^ (uint64_t)&stack0x00000000);
LAB_1808769aa:
  uVar12 = unaff_RSI[0x55];
  do {
    if ((uVar12 < (uint64_t)unaff_RSI[0x55]) ||
       ((uint64_t)((int64_t)*(int *)(unaff_RSI + 0x56) * 0x10 + unaff_RSI[0x55]) <= uVar12))
    break;
    cVar4 = func_0x0001808c0d90(uVar2,uVar12);
    if (cVar4 != '\x01') {
      iVar5 = FUN_1808c2060(uVar2,uVar12,1);
      if (iVar5 != 0) break;
      lVar9 = (**(code **)(*plVar3 + 0x150))(plVar3,uVar12,1);
      if (lVar9 != 0) {
        FUN_1808c5220(unaff_RBP + -0x10,lVar9);
        in_stack_00000060 = *(int64_t *)(lVar9 + 0x10);
        uStack0000000000000068 = *(int32_t *)(lVar9 + 0x18);
        uStack000000000000006c = *(int32_t *)(lVar9 + 0x1c);
        in_stack_00000040 = 1;
        FUN_180879610(unaff_RBP + -0xf,&stack0x00000060,&stack0x00000040);
      }
    }
    uVar12 = uVar12 + 0x10;
  } while( true );
  if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager(lVar8);
  }
  iVar5 = FUN_1808bfbe0(*(uint64_t *)(unaff_R14 + 0x90),unaff_RBP + -0x10);
  if (iVar5 == 0) {
    lVar8 = *(int64_t *)(unaff_R14 + 0xa0);
    if (lVar8 != 0) {
      SystemStateManager(lVar8);
    }
    in_stack_00000048 = (int64_t *)(unaff_R14 + 0x898);
    _iStack0000000000000050 = (uint64_t *)0xffffffffffffffff;
    _iStack0000000000000058 = (uint64_t *)CONCAT44(uStack000000000000005c,0xffffffff);
    FUN_1808741f0(in_stack_00000048,&stack0x00000050,&stack0x00000058);
    plVar3 = in_stack_00000048;
    while (in_stack_00000048 = plVar3, iStack0000000000000058 != -1) {
      lVar9 = (int64_t)iStack0000000000000058;
      in_stack_00000060 = *(int64_t *)(unaff_R14 + 800);
      iVar5 = FUN_18086f460(*(uint64_t *)(lVar9 * 0x20 + 0x18 + plVar3[2]),unaff_R14 + 0xad8,
                            &stack0x00000060);
      if ((iVar5 != 0) ||
         (iVar5 = FUN_18087c9b0(*(uint64_t *)(lVar9 * 0x20 + 0x18 + plVar3[2]),unaff_RBP + -0x10),
         iVar5 != 0)) {
        if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
          SystemConfigManager(lVar8);
        }
        goto LAB_180876b83;
      }
      func_0x000180874280(&stack0x00000048);
      plVar3 = in_stack_00000048;
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar8);
    }
    if ((((*(int64_t *)(unaff_R14 + 0xad0) == 0) || (iVar5 = FUN_180881eb0(), iVar5 == 0)) &&
        (iVar5 = FUN_180875800(unaff_RBP + 0x9c,*(uint64_t *)(unaff_R14 + 800)), iVar5 == 0)) &&
       ((uVar15 = extraout_XMM0_Da_05, unaff_RSI[0x5d] == 0 ||
        (iVar5 = FUN_1808dea80(), uVar15 = extraout_XMM0_Da_06, iVar5 == 0)))) {
      (**(code **)*unaff_RSI)(uVar15,0);
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
    }
  }
LAB_180876b83:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack0x00000070);
}





// 函数: void FUN_180876d27(void)
void FUN_180876d27(void)

{
  int64_t unaff_RBP;
  
  FUN_1808dc190(unaff_RBP + 0x4e0);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x880) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180876d54(void)
void FUN_180876d54(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    SystemConfigManager();
  }
  FUN_180872630(unaff_RBP + 0x78);
  FUN_180873cd0(unaff_RBP + -0x78);
  FUN_1808dc190(unaff_RBP + 0x4e0);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x880) ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_180876d70(int64_t param_1)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    *(uint64_t *)(param_1 + 0x70) = 0;
    *(int32_t *)(param_1 + 0x78) = 0;
    FUN_1808db8c0();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180876d90(int64_t param_1,int64_t *param_2)
void FUN_180876d90(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  short sVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int8_t auStack_58 [32];
  int8_t auStack_38 [40];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  if (*(int *)(param_1 + 0x48) == 0) {
    lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_1 + 0x30,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      SystemStateProcessor(param_1 + 0x30,auStack_38);
    }
    plVar1 = (int64_t *)(lVar3 + 0x20);
    plVar4 = *(int64_t **)(lVar3 + 0x20);
    if (plVar4 != plVar1) {
      while ((int)plVar4[8] != *(int *)(param_1 + 0x40)) {
        if ((plVar4 == plVar1) || (plVar4 = (int64_t *)*plVar4, plVar4 == plVar1))
        goto LAB_180876e6f;
      }
      if (plVar4 != (int64_t *)0x0) {
        sVar2 = *(short *)((int64_t)plVar4 + 0x4a);
        if (sVar2 == 1) {
          lVar3 = FUN_180869ab0(param_2,plVar4 + 6);
        }
        else {
          lVar3 = 0;
        }
        if ((sVar2 != 0) && (sVar2 == 1)) {
          if (lVar3 == 0) {
            uVar5 = 0xc2a00000;
          }
          else {
            uVar5 = func_0x0001808c6500(lVar3,0xc2a00000);
          }
          *(int32_t *)(param_1 + 0x5c) = uVar5;
        }
      }
    }
  }
LAB_180876e6f:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180876eb0(int64_t param_1,int64_t *param_2)
void FUN_180876eb0(int64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  int32_t uVar3;
  int8_t auStack_98 [32];
  void *puStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  char cStack_68;
  int8_t auStack_60 [40];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  puStack_78 = &unknown_var_6824_ptr;
  uStack_70 = 0x7f7fffff;
  uStack_6c = 0;
  cStack_68 = '\0';
  lVar2 = (**(code **)(*param_2 + 0x330))(param_2,param_1 + 0x50,1);
  if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemStateProcessor(param_1 + 0x50,auStack_60);
  }
  iVar1 = FUN_18084b5a0(&puStack_78,lVar2 + 0x80,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_18084b5a0(&puStack_78,lVar2 + 0x90,param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
      if (cStack_68 != '\0') {
        uVar3 = uStack_70;
      }
      *(int32_t *)(param_1 + 0xf4) = uStack_6c;
      *(int32_t *)(param_1 + 0xf0) = uVar3;
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_98);
}



uint64_t FUN_180876fb0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  
  if (((((*(int *)(param_1 + 0x70) != 0) || (*(int *)(param_1 + 0x74) != 0)) ||
       (*(int *)(param_1 + 0x78) != 0)) || (*(int *)(param_1 + 0x7c) != 0)) &&
     ((lVar1 = (**(code **)(*param_2 + 0x278))(param_2,param_1 + 0x70,1), lVar1 != 0 &&
      (0.0 < *(float *)(lVar1 + 0x38))))) {
    if (0.0 < *(float *)(param_1 + 0xa8)) {
      *(float *)(param_1 + 0xac) = *(float *)(lVar1 + 0x38) / *(float *)(param_1 + 0xa8);
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180877030(int64_t param_1,int64_t *param_2,int64_t param_3)
void FUN_180877030(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  int iVar8;
  int iVar9;
  int8_t auStack_158 [32];
  uint uStack_138;
  uint uStack_130;
  uint uStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  uint uStack_f8;
  uint uStack_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  int8_t auStack_c8 [128];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lStack_e8 = param_3;
  if (*(uint *)(param_1 + 0x218) < 0x49) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x1a8))); iVar8 = iVar8 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x1a0) + (int64_t)iVar8 * 8);
      lVar4 = (**(code **)(*param_2 + 0x330))(param_2,lVar1 + 0x50,1);
      if (lVar4 != 0) {
        if ((((*(int *)(lVar1 + 0x40) != 0) || (*(int *)(lVar1 + 0x44) != 0)) ||
            (*(int *)(lVar1 + 0x48) != 0)) || (lVar5 = lVar4, *(int *)(lVar1 + 0x4c) != 0)) {
          lVar5 = (**(code **)(*param_2 + 0x340))(param_2,lVar1 + 0x40,1);
          if (lVar5 == 0) goto LAB_1808770de;
        }
        *(int32_t *)(lVar4 + 0x50) = *(int32_t *)(lVar5 + 0xc0);
      }
LAB_1808770de:
    }
    if ((*(char *)(param_1 + 0x2f8) != '\0') && (lStack_e8 != 0)) {
      *(int32_t *)(lStack_e8 + 0x50) = *(int32_t *)(lStack_e8 + 0xc0);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x218);
  if (uVar6 < 0x3a) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0xe8))); iVar8 = iVar8 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0xe0) + (int64_t)iVar8 * 8);
      lVar4 = (**(code **)(*param_2 + 0x288))(param_2,(int32_t *)(lVar1 + 0xd8),1);
      lStack_e0 = lVar4;
      if (lVar4 == 0) {
        uStack_f0 = (uint)*(byte *)(lVar1 + 0xe7);
        uStack_f8 = (uint)*(byte *)(lVar1 + 0xe6);
        uStack_100 = (uint)*(byte *)(lVar1 + 0xe5);
        uStack_108 = (uint)*(byte *)(lVar1 + 0xe4);
        uStack_110 = (uint)*(byte *)(lVar1 + 0xe3);
        uStack_118 = (uint)*(byte *)(lVar1 + 0xe2);
        uStack_120 = (uint)*(byte *)(lVar1 + 0xe1);
        uStack_128 = (uint)*(byte *)(lVar1 + 0xe0);
        uStack_130 = (uint)*(ushort *)(lVar1 + 0xde);
        uStack_138 = (uint)*(ushort *)(lVar1 + 0xdc);
                    // WARNING: Subroutine does not return
        SystemValidationProcessor(auStack_c8,0x27,&unknown_var_8960_ptr,*(int32_t *)(lVar1 + 0xd8));
      }
      lVar5 = (**(code **)(*param_2 + 0x340))(param_2,(int32_t *)(lVar4 + 0x40),1);
      if (lVar5 == 0) {
        uStack_f0 = (uint)*(byte *)(lVar4 + 0x4f);
        uStack_f8 = (uint)*(byte *)(lVar4 + 0x4e);
        uStack_100 = (uint)*(byte *)(lVar4 + 0x4d);
        uStack_108 = (uint)*(byte *)(lVar4 + 0x4c);
        uStack_110 = (uint)*(byte *)(lVar4 + 0x4b);
        uStack_118 = (uint)*(byte *)(lVar4 + 0x4a);
        uStack_120 = (uint)*(byte *)(lVar4 + 0x49);
        uStack_128 = (uint)*(byte *)(lVar4 + 0x48);
        uStack_130 = (uint)*(ushort *)(lVar4 + 0x46);
        uStack_138 = (uint)*(ushort *)(lVar4 + 0x44);
                    // WARNING: Subroutine does not return
        SystemValidationProcessor(auStack_c8,0x27,&unknown_var_8960_ptr,*(int32_t *)(lVar4 + 0x40));
      }
      *(int32_t *)(lVar1 + 0x38) = *(int32_t *)(lVar5 + 0x50);
      *(int32_t *)(lVar1 + 0x3c) = *(int32_t *)(lVar5 + 0x54);
    }
    uVar6 = *(uint *)(param_1 + 0x218);
  }
  if (uVar6 < 0x3f) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x168))); iVar8 = iVar8 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x160) + (int64_t)iVar8 * 8);
      for (uVar7 = *(uint64_t *)(lVar1 + 0xd8);
          (uVar2 = *(uint64_t *)(lVar1 + 0xd8), uVar2 <= uVar7 &&
          (uVar7 < uVar2 + (int64_t)*(int *)(lVar1 + 0xe0) * 0x14)); uVar7 = uVar7 + 0x14) {
        lVar4 = (**(code **)(*param_2 + 0x128))(param_2,uVar7,CONCAT71((int7)(uVar2 >> 8),1));
        if ((lVar4 != 0) && (*(short *)(lVar4 + 0xc) == 0xc)) {
          *(int32_t *)(lVar4 + 0x38) = *(int32_t *)(lVar1 + 0x38);
          *(int32_t *)(lVar4 + 0x3c) = *(int32_t *)(lVar1 + 0x3c);
        }
      }
    }
    uVar6 = *(uint *)(param_1 + 0x218);
  }
  if (uVar6 - 0x3b < 0x10) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x178))); iVar8 = iVar8 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x170) + (int64_t)iVar8 * 8);
      if (*(int *)(lVar1 + 0x38) == 0) {
        *(int32_t *)(lVar1 + 0x38) = 2;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x218);
  }
  if (uVar6 < 0x4a) {
    for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x38))); iVar8 = iVar8 + 1) {
      iVar3 = FUN_1808793e0(*(uint64_t *)(*(int64_t *)(param_1 + 0x30) + (int64_t)iVar8 * 8),
                            param_2);
      if (iVar3 != 0) goto LAB_18087752c;
    }
    iVar8 = FUN_180868de0(FUN_1808793e0,param_1,param_2);
    if (((iVar8 != 0) || (iVar8 = FUN_180868fc0(FUN_1808793e0,param_1,param_2), iVar8 != 0)) ||
       (iVar8 = FUN_180868ea0(FUN_1808793e0,param_1,param_2), iVar8 != 0)) goto LAB_18087752c;
  }
  if (((*(uint *)(param_1 + 0x218) < 0x4c) && (lStack_e8 != 0)) &&
     (iVar8 = *(int *)(lStack_e8 + 0x50), iVar8 != 0)) {
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x88))); iVar3 = iVar3 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x80) + (int64_t)iVar3 * 8);
      if (*(int *)(lVar1 + 0x60) == 0x1b) {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0x48) + 0xa0);
        if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) != 1)) goto LAB_18087752c;
        if (*(int *)(lVar1 + 0x18) == 0) {
          func_0x0001808da780(lVar1,iVar8);
        }
      }
    }
    for (iVar3 = 0; (iVar9 = 0, -1 < iVar3 && (iVar9 = 0, iVar3 < *(int *)(param_1 + 0x168)));
        iVar3 = iVar3 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x160) + (int64_t)iVar3 * 8);
      if (*(int *)(lVar1 + 0x38) == 0) {
        *(int *)(lVar1 + 0x38) = iVar8;
      }
    }
    for (; (-1 < iVar9 && (iVar9 < *(int *)(param_1 + 0x158))); iVar9 = iVar9 + 1) {
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x150) + (int64_t)iVar9 * 8);
      if (*(int *)(lVar1 + 0x38) == 0) {
        *(int *)(lVar1 + 0x38) = iVar8;
      }
    }
  }
LAB_18087752c:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180877560(int64_t *param_1,int64_t *param_2,int64_t *param_3)
void FUN_180877560(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  int32_t *puVar8;
  int64_t lVar9;
  int8_t auStack_118 [32];
  uint uStack_f8;
  uint uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_d8;
  uint uStack_d0;
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  int64_t lStack_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int8_t auStack_80 [40];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  iVar3 = (int)param_1[1];
  lVar7 = (int64_t)iVar3;
  uVar5 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
  plStack_a0 = param_3;
  plStack_98 = param_1;
  if (((iVar3 <= (int)((*(uint *)((int64_t)param_2 + 0xc) ^ uVar5) - uVar5)) ||
      (iVar2 = FUN_18084c470(param_2,iVar3), iVar2 == 0)) && (lStack_88 = lVar7, 0 < iVar3)) {
    lVar9 = 0;
    lStack_a8 = 0;
    do {
      lVar1 = lStack_a8;
      puVar8 = (int32_t *)(*plStack_98 + lStack_a8);
      lVar4 = (**(code **)(*plStack_a0 + 0x140))(plStack_a0,puVar8,1);
      lStack_90 = lVar4;
      if (lVar4 == 0) {
        uStack_b0 = (uint)*(byte *)((int64_t)puVar8 + 0xf);
        uStack_b8 = (uint)*(byte *)((int64_t)puVar8 + 0xe);
        uStack_c0 = (uint)*(byte *)((int64_t)puVar8 + 0xd);
        uStack_c8 = (uint)*(byte *)(puVar8 + 3);
        uStack_d0 = (uint)*(byte *)((int64_t)puVar8 + 0xb);
        uStack_d8 = (uint)*(byte *)((int64_t)puVar8 + 10);
        uStack_e0 = (uint)*(byte *)((int64_t)puVar8 + 9);
        uStack_e8 = (uint)*(byte *)(puVar8 + 2);
        uStack_f0 = (uint)*(ushort *)((int64_t)puVar8 + 6);
        uStack_f8 = (uint)*(ushort *)(puVar8 + 1);
                    // WARNING: Subroutine does not return
        SystemValidationProcessor(auStack_80,0x27,&unknown_var_8960_ptr,*puVar8);
      }
      uVar5 = (int)*(uint *)((int64_t)param_2 + 0xc) >> 0x1f;
      iVar2 = (int)param_2[1] + 1;
      iVar3 = (*(uint *)((int64_t)param_2 + 0xc) ^ uVar5) - uVar5;
      if (iVar3 < iVar2) {
        iVar6 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar2;
        if (iVar2 <= iVar6) {
          iVar3 = iVar6;
        }
        if (iVar3 < 0x10) {
          iVar6 = 0x10;
        }
        else if (iVar6 < iVar2) {
          iVar6 = iVar2;
        }
        iVar3 = FUN_18084c470(param_2,iVar6);
        if (iVar3 != 0) break;
      }
      lStack_a8 = lVar1 + 0x10;
      lVar9 = lVar9 + 1;
      *(int32_t *)(*param_2 + (int64_t)(int)param_2[1] * 4) = *(int32_t *)(lVar4 + 0x44);
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    } while (lVar9 < lVar7);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_118);
}





// 函数: void FUN_1808775bf(int64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_1808775bf(int64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t unaff_RBX;
  int64_t lVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int64_t *unaff_R15;
  float fVar9;
  int64_t *in_stack_00000078;
  int64_t *in_stack_00000080;
  uint64_t in_stack_000000c0;
  
  if (0 < (int)unaff_RBX) {
    lVar6 = 0;
    lVar8 = lVar6;
    do {
      puVar7 = (int32_t *)(*param_1 + lVar6);
      lVar2 = (**(code **)(*param_4 + 0x140))(param_4,puVar7,1);
      if (lVar2 == 0) {
                    // WARNING: Subroutine does not return
        SystemValidationProcessor(&stack0x00000098,0x27,&unknown_var_8960_ptr,*puVar7,*(int16_t *)(puVar7 + 1));
      }
      uVar4 = (int)*(uint *)((int64_t)unaff_R15 + 0xc) >> 0x1f;
      iVar3 = (int)unaff_R15[1] + 1;
      iVar1 = (*(uint *)((int64_t)unaff_R15 + 0xc) ^ uVar4) - uVar4;
      if (iVar1 < iVar3) {
        fVar9 = (float)iVar1 * 1.5;
        iVar5 = (int)fVar9;
        iVar1 = iVar3;
        if (iVar3 <= iVar5) {
          iVar1 = iVar5;
        }
        if (iVar1 < 0x10) {
          iVar5 = 0x10;
        }
        else if (iVar5 < iVar3) {
          iVar5 = iVar3;
        }
        iVar1 = FUN_18084c470(fVar9,iVar5);
        if (iVar1 != 0) break;
      }
      lVar6 = lVar6 + 0x10;
      lVar8 = lVar8 + 1;
      *(int32_t *)(*unaff_R15 + (int64_t)(int)unaff_R15[1] * 4) = *(int32_t *)(lVar2 + 0x44);
      *(int *)(unaff_R15 + 1) = (int)unaff_R15[1] + 1;
      param_1 = in_stack_00000080;
      param_4 = in_stack_00000078;
    } while (lVar8 < unaff_RBX);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180877798(void)
void FUN_180877798(void)

{
  uint64_t in_stack_000000c0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000c0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1808777c0(int64_t param_1,uint64_t param_2)
void FUN_1808777c0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_180877560(param_1 + 0x90,param_1 + 0xb0,param_2);
  if (iVar1 == 0) {
    FUN_180877560(param_1 + 0x80,param_1 + 0xa0,param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



