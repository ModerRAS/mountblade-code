#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part363.c - 2 个函数

// 函数: void FUN_180863f57(uint64_t *param_1)
void FUN_180863f57(uint64_t *param_1)

{
  int iVar1;
  uint64_t *puVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  
  for (; (*(uint64_t **)(unaff_RBX + 0x4c0) <= param_1 &&
         (param_1 < *(uint64_t **)(unaff_RBX + 0x4c0) + *(int *)(unaff_RBX + 0x4c8)));
      param_1 = param_1 + 1) {
    iVar1 = FUN_1808b5060(*param_1,&stack0x00000040,unaff_RBP + -0x60);
    if (iVar1 != 0) goto LAB_180864019;
  }
  iVar1 = FUN_180864850();
  if (iVar1 == 0) {
    *(int32_t *)(unaff_RBX + 0x2f0) = 0xbf800000;
    for (puVar2 = *(uint64_t **)(unaff_RBX + 0x270);
        (*(uint64_t **)(unaff_RBX + 0x270) <= puVar2 &&
        (puVar2 < *(uint64_t **)(unaff_RBX + 0x270) + *(int *)(unaff_RBX + 0x278)));
        puVar2 = puVar2 + 1) {
      iVar1 = FUN_1808d6e30(*puVar2);
      if (iVar1 != 0) goto LAB_180864019;
    }
    iVar1 = FUN_1808d15f0(unaff_RBX + 0x378);
    if (iVar1 == 0) {
      iVar1 = FUN_1808d15f0(unaff_RBX + 0x3f8);
      if (iVar1 == 0) {
        *(int8_t *)(unaff_RBX + 0x5c) = 0;
      }
    }
  }
LAB_180864019:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1b0) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180864040(int64_t param_1)

{
  int64_t *plVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int32_t uVar7;
  int iVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  float fVar12;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int64_t lStack_48;
  uint uStack_40;
  byte bStack_3c;
  
  iVar6 = SystemCore_StateController();
  if (iVar6 == 2) {
    return 0;
  }
  if (((*(byte *)(*(int64_t *)(*(int64_t *)(param_1 + 0x2c8) + 0x4c0) + 0x7a) & 1) == 0) &&
     (*(char *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x158) == '\0')) {
    lStack_48 = 0;
  }
  else {
    bStack_3c = (byte)(*(uint *)(param_1 + 0x2d8) >> 0xe) & 1;
    FUN_180768b90(&uStack_40);
    lStack_48 = param_1;
  }
  if (*(int *)(param_1 + 0x2e4) - 1U < 2) {
    iVar6 = FUN_1808650a0(param_1,0);
    if (iVar6 != 0) goto LAB_180864627;
    if (1 < *(int *)(param_1 + 0x2e4) - 1U) goto LAB_1808640fb;
  }
  else {
LAB_1808640fb:
    bVar4 = (byte)(*(uint *)(param_1 + 0x2d8) >> 0xb) & 1;
    *(uint *)(param_1 + 0x2d8) =
         ((uint)bVar4 << 10 | *(uint *)(param_1 + 0x2d8)) & ~((bVar4 ^ 1) << 10) & 0xffffb7ff;
    iVar6 = FUN_180865550(param_1,0);
    if ((iVar6 != 0) || (iVar6 = FUN_180863b80(param_1), iVar6 != 0)) goto LAB_180864627;
    if ((*(uint *)(param_1 + 0x2d8) >> 1 & 1) != 0) {
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78);
      if (lVar10 == 0) {
        iVar6 = 0x1c;
        goto LAB_180864627;
      }
      uStackX_18 = 0;
      iVar6 = FUN_18073c730(lVar10,0,&uStackX_18,0);
      if (iVar6 != 0) goto LAB_180864627;
      if (*(uint64_t *)(param_1 + 0x338) <= uStackX_18) goto LAB_180864477;
      iVar6 = SystemCore_StateController(lVar10,1);
joined_r0x0001808641af:
      if (iVar6 != 0) goto LAB_180864627;
LAB_180864477:
      if (((*(int *)(param_1 + 0x2e4) == 4) &&
          (cVar5 = FUN_1808d38d0(param_1 + 0x280), cVar5 != '\0')) &&
         (iVar6 = FUN_18085f2b0(param_1), iVar6 != 0)) goto LAB_180864627;
      if (*(int *)(param_1 + 0x2e4) == 5) {
        FUN_1808d0490(param_1 + 0x378,*(uint64_t *)(param_1 + 0x328),1);
        FUN_1808d0490(param_1 + 0x3f8,*(uint64_t *)(param_1 + 0x328),1);
        if (*(uint64_t *)(param_1 + 0x328) < *(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30))
        {
          *(int32_t *)(param_1 + 0x2e4) = 6;
        }
      }
      if (*(int *)(param_1 + 0x2e4) == 6) {
        iVar6 = Physics_CollisionDetector(param_1 + 0x378);
        if ((iVar6 != 0) || (iVar6 = Physics_CollisionDetector(param_1 + 0x3f8), iVar6 != 0))
        goto LAB_180864627;
        uStackX_18 = uStackX_18 & 0xffffffffffffff00;
        uStackX_20 = 0;
        iVar6 = UltraHighFreq_PhysicsEngine1(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),0xffffffff,
                              &uStackX_20);
        if (((iVar6 != 0) || (iVar6 = FUN_180740410(uStackX_20,&uStackX_18), iVar6 != 0)) &&
           (iVar6 != 0)) goto LAB_180864627;
        if (((char)uStackX_18 != '\0') ||
           (fVar12 = (float)func_0x000180851e30(*(uint64_t *)(param_1 + 0x2b0)), fVar12 == 0.0)) {
          *(int32_t *)(param_1 + 0x2e4) = 7;
        }
      }
      if (*(int *)(param_1 + 0x2e4) == 7) {
        iVar6 = Physics_CollisionDetector(param_1 + 0x378);
        if ((iVar6 != 0) || (iVar6 = Physics_CollisionDetector(param_1 + 0x3f8), iVar6 != 0))
        goto LAB_180864627;
        if (*(int *)(param_1 + 0x4e8) != 0) goto LAB_18086460a;
        if ((*(int64_t *)(param_1 + 0x2b8) == 0) || ((*(uint *)(param_1 + 0x2d8) >> 6 & 1) == 0)) {
LAB_1808645f6:
          iVar6 = FUN_18085f0e0(param_1,0);
          if (iVar6 == 0) goto LAB_18086460a;
        }
        else {
          iVar6 = FUN_1808538a0(*(int64_t *)(param_1 + 0x2b8),param_1);
          if (iVar6 == 0) {
            *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffffffbf;
            goto LAB_1808645f6;
          }
        }
        if (iVar6 != 0) goto LAB_180864627;
      }
LAB_18086460a:
      lVar10 = *(int64_t *)(param_1 + 0x80);
      if (lVar10 != 0) {
        uVar7 = SystemCore_StateController(param_1);
        *(int32_t *)(lVar10 + 0x80) = uVar7;
      }
      goto LAB_180864624;
    }
    uVar11 = *(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x30);
    *(uint64_t *)(param_1 + 0x330) = uVar11;
    for (puVar9 = *(uint64_t **)(param_1 + 0x260);
        (*(uint64_t **)(param_1 + 0x260) <= puVar9 &&
        (puVar9 < *(uint64_t **)(param_1 + 0x260) + *(int *)(param_1 + 0x268)));
        puVar9 = puVar9 + 1) {
      iVar6 = FUN_1808d7550(*puVar9);
      if (iVar6 != 0) goto LAB_180864627;
    }
    iVar6 = FUN_18085ca30(param_1 + 200,uVar11);
    if ((((iVar6 != 0) || (iVar6 = FUN_1808d0d90(param_1 + 0x378,uVar11), iVar6 != 0)) ||
        (iVar6 = FUN_1808d0d90(param_1 + 0x3f8,uVar11), iVar6 != 0)) ||
       (iVar6 = func_0x0001808d57c0(param_1 + 0x280,uVar11), iVar6 != 0)) goto LAB_180864627;
    if (*(int *)(param_1 + 0x2e4) != 8) {
      if (*(int64_t *)(param_1 + 0x478) != 0) {
        uStackX_18 = 0;
        iVar6 = FUN_18073c730(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),&uStackX_18,0,0
                             );
        if (iVar6 != 0) goto LAB_180864627;
        if ((uStackX_18 == 0) || (uStackX_18 <= *(uint64_t *)(param_1 + 0x338))) {
          uVar11 = 1;
        }
        else {
          uVar11 = 0;
        }
        iVar6 = FUN_1808d9380(*(uint64_t *)(param_1 + 0x478),uVar11);
        if (iVar6 != 0) goto LAB_180864627;
      }
      if (*(uint64_t *)(param_1 + 0x340) != 0) {
        cVar5 = *(uint64_t *)(param_1 + 0x338) < *(uint64_t *)(param_1 + 0x340);
        uStackX_18 = CONCAT71(uStackX_18._1_7_,cVar5);
        if (((bool)cVar5) && (*(int64_t *)(param_1 + 0x478) == 0)) {
          FUN_18073cd10(*(uint64_t *)(*(int64_t *)(param_1 + 0x2b0) + 0x78),&uStackX_18);
          cVar5 = (char)uStackX_18;
        }
        if (cVar5 == '\0') {
          uVar2 = *(uint *)(param_1 + 0x2d8);
          if ((uVar2 >> 8 & 1) != 0) {
            lVar10 = *(int64_t *)(param_1 + 0x2b8);
            if (lVar10 != 0) goto LAB_18086428a;
            goto LAB_1808642a1;
          }
          *(uint *)(param_1 + 0x2d8) = uVar2 | 0x100;
        }
      }
      if ((((*(uint *)(*(int64_t *)(param_1 + 0x88) + 0xf8) >> 1 & 1) == 0) ||
          ((*(uint *)(param_1 + 0x2d8) >> 0xf & 1) != 0)) ||
         ((*(uint64_t *)(param_1 + 0x348) != 0 &&
          (*(uint64_t *)(param_1 + 0x348) <= *(uint64_t *)(param_1 + 0x338))))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((((*(int *)(param_1 + 0x2e4) == 3) && (bVar3)) &&
          (plVar1 = (int64_t *)(param_1 + 0x400), (int64_t *)*plVar1 == plVar1)) &&
         ((*(int64_t **)(param_1 + 0x408) == plVar1 &&
          (cVar5 = func_0x000180857b00(param_1 + 200), cVar5 != '\0')))) {
        iVar8 = *(int *)(param_1 + 0x2e4);
        if ((*(int64_t *)(param_1 + 0x2b8) != 0) && ((*(uint *)(param_1 + 0x2d8) >> 6 & 1) != 0)) {
          iVar6 = FUN_1808538a0(*(int64_t *)(param_1 + 0x2b8),param_1);
          if (iVar6 != 0) goto joined_r0x0001808641af;
          *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffffffbf;
        }
        if (iVar8 - 1U < 2) {
          iVar6 = FUN_18085f0e0(param_1,0);
        }
        else {
          if (*(int *)(param_1 + 0x2e4) != 3) goto LAB_180864477;
          iVar6 = FUN_18085f340(param_1);
        }
        if (iVar6 != 0) goto joined_r0x0001808641af;
      }
      goto LAB_180864477;
    }
    lVar10 = *(int64_t *)(param_1 + 0x2b8);
    if (lVar10 == 0) {
LAB_1808642a1:
      iVar6 = FUN_18085f0e0(param_1,0);
      if (iVar6 == 0) goto LAB_180864624;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x2d8);
LAB_18086428a:
      if ((uVar2 >> 6 & 1) == 0) goto LAB_1808642a1;
      iVar6 = FUN_1808538a0(lVar10,param_1);
      if (iVar6 == 0) {
        *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffffffbf;
        goto LAB_1808642a1;
      }
    }
    if (iVar6 != 0) goto LAB_180864627;
  }
LAB_180864624:
  iVar6 = 0;
LAB_180864627:
  if (lStack_48 != 0) {
    iVar8 = SystemCore_StateController();
    if (iVar8 == 2) {
      *(int32_t *)(lStack_48 + 0x488) = 0;
    }
    else {
      FUN_180768b90(&uStackX_18);
      if (uStack_40 <= (uint)uStackX_18) {
        if (bStack_3c == 0) {
          *(uint *)(lStack_48 + 0x488) = (uint)uStackX_18 - uStack_40;
        }
        else {
          *(int *)(lStack_48 + 0x488) = *(int *)(lStack_48 + 0x488) + ((uint)uStackX_18 - uStack_40)
          ;
        }
      }
    }
  }
  return iVar6;
}



uint64_t FUN_1808640c7(int32_t param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int64_t lVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  uint in_EAX;
  uint uVar7;
  int32_t uVar8;
  int iVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  int64_t unaff_RBP;
  uint64_t uVar12;
  int64_t unaff_RDI;
  char cVar13;
  uint64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  float fVar14;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  
  cVar13 = (char)unaff_R15;
  if (in_EAX < 2) {
    uVar7 = FUN_1808650a0(param_1,0);
    uVar12 = (uint64_t)uVar7;
    if (uVar7 != 0) goto LAB_180864627;
    param_1 = extraout_XMM0_Da;
    if (1 < *(int *)(unaff_RDI + 0x2e4) - 1U) goto LAB_1808640fb;
  }
  else {
LAB_1808640fb:
    bVar5 = (byte)(*(uint *)(unaff_RDI + 0x2d8) >> 0xb) & 1;
    *(uint *)(unaff_RDI + 0x2d8) =
         ((uint)bVar5 << 10 | *(uint *)(unaff_RDI + 0x2d8)) & ~((bVar5 ^ 1) << 10) & 0xffffb7ff;
    uVar7 = FUN_180865550(param_1,0);
    uVar12 = (uint64_t)uVar7;
    if (uVar7 != 0) goto LAB_180864627;
    uVar7 = FUN_180863b80();
    uVar12 = (uint64_t)uVar7;
    if (uVar7 != 0) goto LAB_180864627;
    if ((*(uint *)(unaff_RDI + 0x2d8) >> 1 & 1) == 0) {
      uVar11 = *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x2b0) + 0x30);
      *(uint64_t *)(unaff_RDI + 0x330) = uVar11;
      for (puVar10 = *(uint64_t **)(unaff_RDI + 0x260);
          (*(uint64_t **)(unaff_RDI + 0x260) <= puVar10 &&
          (puVar10 < *(uint64_t **)(unaff_RDI + 0x260) + *(int *)(unaff_RDI + 0x268)));
          puVar10 = puVar10 + 1) {
        uVar7 = FUN_1808d7550(*puVar10);
        uVar12 = (uint64_t)uVar7;
        if (uVar7 != 0) goto LAB_180864627;
      }
      uVar7 = FUN_18085ca30(unaff_RDI + 200,uVar11);
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
      uVar7 = FUN_1808d0d90(unaff_RDI + 0x378,uVar11);
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
      uVar7 = FUN_1808d0d90(unaff_RDI + 0x3f8,uVar11);
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
      uVar7 = func_0x0001808d57c0(unaff_RDI + 0x280,uVar11);
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
      uVar8 = extraout_XMM0_Da_00;
      if (*(int *)(unaff_RDI + 0x2e4) != 8) {
        if (*(uint64_t *)(unaff_RDI + 0x478) != unaff_R15) {
          lVar3 = *(int64_t *)(unaff_RDI + 0x2b0);
          *(uint64_t *)(unaff_RBP + 0x28) = unaff_R15;
          uVar7 = FUN_18073c730(*(uint64_t *)(lVar3 + 0x78),unaff_RBP + 0x28,0,0);
          uVar12 = (uint64_t)uVar7;
          if (uVar7 != 0) goto LAB_180864627;
          if ((*(uint64_t *)(unaff_RBP + 0x28) == 0) ||
             (*(uint64_t *)(unaff_RBP + 0x28) <= *(uint64_t *)(unaff_RDI + 0x338))) {
            uVar11 = 1;
          }
          else {
            uVar11 = 0;
          }
          uVar7 = FUN_1808d9380(*(uint64_t *)(unaff_RDI + 0x478),uVar11);
          uVar12 = (uint64_t)uVar7;
          uVar8 = extraout_XMM0_Da_02;
          if (uVar7 != 0) goto LAB_180864627;
        }
        if (*(uint64_t *)(unaff_RDI + 0x340) != 0) {
          cVar6 = *(uint64_t *)(unaff_RDI + 0x338) < *(uint64_t *)(unaff_RDI + 0x340);
          *(char *)(unaff_RBP + 0x28) = cVar6;
          if (((bool)cVar6) && (*(uint64_t *)(unaff_RDI + 0x478) == unaff_R15)) {
            uVar8 = FUN_18073cd10(*(uint64_t *)(*(int64_t *)(unaff_RDI + 0x2b0) + 0x78),
                                  unaff_RBP + 0x28);
            cVar6 = *(char *)(unaff_RBP + 0x28);
          }
          if (cVar6 == '\0') {
            uVar7 = *(uint *)(unaff_RDI + 0x2d8);
            if ((uVar7 >> 8 & 1) != 0) {
              if (*(int64_t *)(unaff_RDI + 0x2b8) != 0) goto LAB_18086428a;
              goto LAB_1808642a1;
            }
            *(uint *)(unaff_RDI + 0x2d8) = uVar7 | 0x100;
          }
        }
        if ((((*(uint *)(*(int64_t *)(unaff_RDI + 0x88) + 0xf8) >> 1 & 1) == 0) ||
            ((*(uint *)(unaff_RDI + 0x2d8) >> 0xf & 1) != 0)) ||
           ((*(uint64_t *)(unaff_RDI + 0x348) != 0 &&
            (*(uint64_t *)(unaff_RDI + 0x348) <= *(uint64_t *)(unaff_RDI + 0x338))))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((((*(int *)(unaff_RDI + 0x2e4) == 3) && (bVar4)) &&
            (plVar1 = (int64_t *)(unaff_RDI + 0x400), (int64_t *)*plVar1 == plVar1)) &&
           ((*(int64_t **)(unaff_RDI + 0x408) == plVar1 &&
            (cVar6 = func_0x000180857b00(unaff_RDI + 200), cVar6 != '\0')))) {
          iVar9 = *(int *)(unaff_RDI + 0x2e4);
          uVar8 = extraout_XMM0_Da_03;
          if ((*(int64_t *)(unaff_RDI + 0x2b8) != 0) &&
             ((*(uint *)(unaff_RDI + 0x2d8) >> 6 & 1) != 0)) {
            uVar7 = FUN_1808538a0();
            if (uVar7 != 0) goto joined_r0x0001808641af;
            *(uint *)(unaff_RDI + 0x2d8) = *(uint *)(unaff_RDI + 0x2d8) & 0xffffffbf;
            uVar8 = extraout_XMM0_Da_04;
          }
          if (iVar9 - 1U < 2) {
            uVar7 = FUN_18085f0e0(uVar8,0);
          }
          else {
            if (*(int *)(unaff_RDI + 0x2e4) != 3) goto LAB_180864477;
            uVar7 = FUN_18085f340();
          }
          if (uVar7 != 0) goto joined_r0x0001808641af;
        }
        goto LAB_180864477;
      }
      if (*(int64_t *)(unaff_RDI + 0x2b8) == 0) {
LAB_1808642a1:
        uVar7 = FUN_18085f0e0(uVar8,0);
        if (uVar7 == 0) goto LAB_180864624;
      }
      else {
        uVar7 = *(uint *)(unaff_RDI + 0x2d8);
LAB_18086428a:
        if ((uVar7 >> 6 & 1) == 0) goto LAB_1808642a1;
        uVar7 = FUN_1808538a0();
        if (uVar7 == 0) {
          *(uint *)(unaff_RDI + 0x2d8) = *(uint *)(unaff_RDI + 0x2d8) & 0xffffffbf;
          uVar8 = extraout_XMM0_Da_01;
          goto LAB_1808642a1;
        }
      }
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
      goto LAB_180864624;
    }
    lVar3 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x2b0) + 0x78);
    if (lVar3 == 0) {
      uVar12 = 0x1c;
      goto LAB_180864627;
    }
    *(uint64_t *)(unaff_RBP + 0x28) = unaff_R15;
    uVar7 = FUN_18073c730(lVar3,0,unaff_RBP + 0x28,0);
    uVar12 = (uint64_t)uVar7;
    if (uVar7 != 0) goto LAB_180864627;
    if (*(uint64_t *)(unaff_RDI + 0x338) <= *(uint64_t *)(unaff_RBP + 0x28)) goto LAB_180864477;
    uVar7 = SystemCore_StateController(lVar3,1);
joined_r0x0001808641af:
    uVar12 = (uint64_t)uVar7;
    if (uVar7 != 0) goto LAB_180864627;
LAB_180864477:
    if ((*(int *)(unaff_RDI + 0x2e4) == 4) &&
       (cVar6 = FUN_1808d38d0(unaff_RDI + 0x280), cVar6 != '\0')) {
      uVar7 = FUN_18085f2b0();
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
    }
    if (*(int *)(unaff_RDI + 0x2e4) == 5) {
      FUN_1808d0490(unaff_RDI + 0x378,*(uint64_t *)(unaff_RDI + 0x328),1);
      FUN_1808d0490(unaff_RDI + 0x3f8,*(uint64_t *)(unaff_RDI + 0x328),1);
      if (*(uint64_t *)(unaff_RDI + 0x328) <
          *(uint64_t *)(*(int64_t *)(unaff_RDI + 0x2b0) + 0x30)) {
        *(int32_t *)(unaff_RDI + 0x2e4) = 6;
      }
    }
    if (*(int *)(unaff_RDI + 0x2e4) == 6) {
      uVar7 = Physics_CollisionDetector(unaff_RDI + 0x378);
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
      uVar7 = Physics_CollisionDetector(unaff_RDI + 0x3f8);
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
      lVar3 = *(int64_t *)(unaff_RDI + 0x2b0);
      *(char *)(unaff_RBP + 0x28) = cVar13;
      *(uint64_t *)(unaff_RBP + 0x30) = unaff_R15;
      uVar7 = UltraHighFreq_PhysicsEngine1(*(uint64_t *)(lVar3 + 0x78),0xffffffff,unaff_RBP + 0x30);
      if (((uVar7 != 0) ||
          (uVar7 = FUN_180740410(*(uint64_t *)(unaff_RBP + 0x30),unaff_RBP + 0x28), uVar7 != 0))
         && (uVar12 = (uint64_t)uVar7, uVar7 != 0)) goto LAB_180864627;
      if ((*(char *)(unaff_RBP + 0x28) != cVar13) ||
         (fVar14 = (float)func_0x000180851e30(*(uint64_t *)(unaff_RDI + 0x2b0)), fVar14 == 0.0)) {
        *(int32_t *)(unaff_RDI + 0x2e4) = 7;
      }
    }
    if (*(int *)(unaff_RDI + 0x2e4) == 7) {
      uVar7 = Physics_CollisionDetector(unaff_RDI + 0x378);
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
      uVar7 = Physics_CollisionDetector(unaff_RDI + 0x3f8);
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
      if (*(int *)(unaff_RDI + 0x4e8) != (int)unaff_R15) goto LAB_18086460a;
      uVar8 = extraout_XMM0_Da_05;
      if ((*(int64_t *)(unaff_RDI + 0x2b8) == 0) || ((*(uint *)(unaff_RDI + 0x2d8) >> 6 & 1) == 0))
      {
LAB_1808645f6:
        uVar7 = FUN_18085f0e0(uVar8,0);
        if (uVar7 == 0) goto LAB_18086460a;
      }
      else {
        uVar7 = FUN_1808538a0();
        if (uVar7 == 0) {
          *(uint *)(unaff_RDI + 0x2d8) = *(uint *)(unaff_RDI + 0x2d8) & 0xffffffbf;
          uVar8 = extraout_XMM0_Da_06;
          goto LAB_1808645f6;
        }
      }
      uVar12 = (uint64_t)uVar7;
      if (uVar7 != 0) goto LAB_180864627;
    }
LAB_18086460a:
    lVar3 = *(int64_t *)(unaff_RDI + 0x80);
    if (lVar3 != 0) {
      uVar8 = SystemCore_StateController();
      *(int32_t *)(lVar3 + 0x80) = uVar8;
    }
  }
LAB_180864624:
  uVar12 = unaff_R15 & 0xffffffff;
LAB_180864627:
  if (*(int64_t *)(unaff_RBP + -0x38) != 0) {
    iVar9 = SystemCore_StateController();
    if (iVar9 == 2) {
      *(int *)(*(int64_t *)(unaff_RBP + -0x38) + 0x488) = (int)unaff_R15;
    }
    else {
      FUN_180768b90(unaff_RBP + 0x28);
      if (*(uint *)(unaff_RBP + -0x30) <= *(uint *)(unaff_RBP + 0x28)) {
        iVar9 = *(uint *)(unaff_RBP + 0x28) - *(uint *)(unaff_RBP + -0x30);
        if (*(char *)(unaff_RBP + -0x2c) == cVar13) {
          *(int *)(*(int64_t *)(unaff_RBP + -0x38) + 0x488) = iVar9;
        }
        else {
          piVar2 = (int *)(*(int64_t *)(unaff_RBP + -0x38) + 0x488);
          *piVar2 = *piVar2 + iVar9;
        }
      }
    }
  }
  return uVar12;
}



int32_t FUN_18086463a(void)

{
  int *piVar1;
  int iVar2;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  int32_t unaff_R15D;
  
  iVar2 = SystemCore_StateController();
  if (iVar2 == 2) {
    *(int32_t *)(*(int64_t *)(unaff_RBP + -0x38) + 0x488) = unaff_R15D;
  }
  else {
    FUN_180768b90(unaff_RBP + 0x28);
    if (*(uint *)(unaff_RBP + -0x30) <= *(uint *)(unaff_RBP + 0x28)) {
      iVar2 = *(uint *)(unaff_RBP + 0x28) - *(uint *)(unaff_RBP + -0x30);
      if (*(char *)(unaff_RBP + -0x2c) == (char)unaff_R15D) {
        *(int *)(*(int64_t *)(unaff_RBP + -0x38) + 0x488) = iVar2;
      }
      else {
        piVar1 = (int *)(*(int64_t *)(unaff_RBP + -0x38) + 0x488);
        *piVar1 = *piVar1 + iVar2;
      }
    }
  }
  return unaff_ESI;
}



uint64_t FUN_1808646a0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  float fVar3;
  float fStackX_8;
  float fStackX_c;
  
  fStackX_8 = *(float *)(param_1 + 0x30c);
  if (fStackX_8 == -1.0) {
    fStackX_8 = *(float *)(param_1 + 0x304);
  }
  fStackX_c = *(float *)(param_1 + 0x310);
  fVar3 = fStackX_c;
  if (fStackX_c == -1.0) {
    fVar3 = *(float *)(param_1 + 0x308);
  }
  if ((fVar3 <= fStackX_8) && (fStackX_8 = fStackX_c, fStackX_c == -1.0)) {
    fStackX_8 = *(float *)(param_1 + 0x308);
  }
  if (fStackX_c == -1.0) {
    fStackX_c = *(float *)(param_1 + 0x308);
  }
  for (puVar2 = *(uint64_t **)(param_1 + 0x4c0);
      (*(uint64_t **)(param_1 + 0x4c0) <= puVar2 &&
      (puVar2 < *(uint64_t **)(param_1 + 0x4c0) + *(int *)(param_1 + 0x4c8))); puVar2 = puVar2 + 1
      ) {
    uVar1 = FUN_1808b5030(*puVar2,&fStackX_8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}





// 函数: void FUN_180864780(int64_t param_1)
void FUN_180864780(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  uint64_t *puVar3;
  float fVar4;
  
  lVar1 = *(int64_t *)(param_1 + 0x2b0);
  *(int32_t *)(param_1 + 0x2f4) = 0x3f800000;
  for (puVar3 = (uint64_t *)
                (*(int64_t *)(lVar1 + 0x90) + (int64_t)(*(int *)(lVar1 + 0x98) + -1) * 8);
      (*(uint64_t **)(lVar1 + 0x90) <= puVar3 &&
      (puVar3 < *(uint64_t **)(lVar1 + 0x90) + *(int *)(lVar1 + 0x98))); puVar3 = puVar3 + -1) {
    iVar2 = FUN_1808b3bc0(*puVar3,param_1 + 0x2f4);
    if (iVar2 != 0) {
      return;
    }
  }
  fVar4 = (float)func_0x000180851e30(*(uint64_t *)(param_1 + 0x2b0));
  *(float *)(param_1 + 0x2f4) = fVar4 * *(float *)(param_1 + 0x2f4);
  iVar2 = FUN_18085e860(*(int64_t *)(param_1 + 0x2b0) + 0x80,param_1 + 0x2f4);
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0xffffdfff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



