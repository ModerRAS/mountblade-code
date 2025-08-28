#include "SystemAdvancedManager_definition.h"
/* 函数别名定义: MemoryCacheController */
#define MemoryCacheController MemoryCacheController


/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part031_sub002_sub002.c - 1 个函数

// 函数: void FUN_180859ba0(int64_t param_1,int64_t *param_2)
void FUN_180859ba0(int64_t param_1,int64_t *param_2)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lStack_78;
  int8_t auStack_70 [40];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)&lStack_78;
  if ((param_2 != (int64_t *)0x0) && (lVar3 = *param_2, lVar3 != 0)) {
    piVar1 = (int *)(lVar3 + 0xd0);
    iVar5 = 0;
    if ((*piVar1 == 0) &&
       (((*(int *)(lVar3 + 0xd4) == 0 && (*(int *)(lVar3 + 0xd8) == 0)) &&
        (*(int *)(lVar3 + 0xdc) == 0)))) {
      lStack_78 = 0;
    }
    else {
      lStack_78 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x260))
                            (*(int64_t **)(param_1 + 0x170),piVar1,1);
      if (lStack_78 == 0) {
                    // WARNING: Subroutine does not return
        SystemController(piVar1,auStack_70,0);
      }
    }
    puVar2 = (uint64_t *)(lVar3 + 0xb0);
    for (puVar4 = (uint64_t *)*puVar2; puVar4 != puVar2; puVar4 = (uint64_t *)*puVar4) {
      iVar5 = iVar5 + 1;
    }
    uVar6 = (int64_t)iVar5 * 4 + 0xf;
    if (uVar6 <= (uint64_t)((int64_t)iVar5 * 4)) {
      uVar6 = 0xffffffffffffff0;
    }
                    // WARNING: Subroutine does not return
    SystemCore_MemoryManager0(uVar6 & 0xfffffffffffffff0,puVar2,lStack_78);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(GET_SECURITY_COOKIE());
}



uint64_t FUN_180859e40(int64_t param_1,int64_t *param_2,int64_t *param_3,int8_t param_4)

{
  int iVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  int8_t auStackX_10 [8];
  
  iVar6 = 0;
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    do {
      iVar1 = 0;
      plVar4 = (int64_t *)(*param_2 + lVar5);
      if (0 < (int)param_3[1]) {
        do {
          if ((*(int64_t *)(*param_3 + (int64_t)iVar1 * 0x18) == *plVar4) &&
             (*(int64_t *)(*param_3 + 8 + (int64_t)iVar1 * 0x18) == plVar4[1]))
          goto LAB_180859ef9;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)param_3[1]);
      }
      if (((((int)*plVar4 == 0) && (*(int *)((int64_t)plVar4 + 4) == 0)) && ((int)plVar4[1] == 0))
         && (*(int *)((int64_t)plVar4 + 0xc) == 0)) {
        return 0x1c;
      }
      puVar2 = (int32_t *)FUN_18084cde0(*(uint64_t *)(param_1 + 0x110),auStackX_10);
      *(int32_t *)(param_1 + 0x10c) = *puVar2;
      uVar3 = FUN_1808629a0(*(uint64_t *)(param_1 + 0x160),plVar4,param_4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
LAB_180859ef9:
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (iVar6 < (int)param_2[1]);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180859f30(int64_t param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int *piVar1;
  uint uVar2;
  int8_t auVar3 [16];
  char cVar4;
  int iVar5;
  int iVar6;
  int32_t *puVar7;
  uint *puVar8;
  int64_t *plVar9;
  int64_t lVar10;
  uint uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  uint64_t in_stack_ffffffffffffff08;
  uint64_t uVar19;
  uint auStack_d8 [2];
  uint64_t uStack_d0;
  int64_t lStack_c8;
  uint uStack_c0;
  int iStack_bc;
  int64_t lStack_b8;
  int64_t lStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  uint uStack_90;
  int32_t uStack_8c;
  uint64_t uStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  int8_t uStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  uint uStack_40;
  int32_t uStack_3c;
  
  uVar18 = (uint64_t)param_6;
  uVar16 = (uint64_t)param_5;
  puVar7 = (int32_t *)FUN_18084cde0(*(uint64_t *)(param_1 + 0x110),auStack_d8);
  *(int32_t *)(param_1 + 0x10c) = *puVar7;
  if (*(int *)(*(int64_t *)(param_1 + 0x160) + 0x2e4) < 3) {
    return 0;
  }
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    return 0x1c;
  }
  uStack_d0 = 0;
  lStack_c8 = 0;
  puVar8 = (uint *)MemoryCacheController0();
  uStack_c0 = *puVar8;
  iStack_bc = 0;
  lStack_b8 = 0;
  iVar5 = FUN_180856d20(param_1,&uStack_d0,&lStack_c8);
  uVar11 = uStack_c0;
  lVar13 = lStack_c8;
  if ((iVar5 != 0) || (iVar5 = 0, iStack_bc == 1)) goto LAB_18085a4c4;
  uStack_48 = lStack_c8;
  uStack_40 = uStack_c0;
  cVar4 = FUN_1808617d0(*(uint64_t *)(param_1 + 0x160),param_2);
  if (param_5 == param_3) {
    if (param_6 == param_4) goto LAB_18085a4fd;
    uVar14 = 0xffffffff;
    if (uVar18 + uVar16 < 0x100000000) {
      uVar14 = param_6 + param_5;
    }
    uVar15 = (uint)uStack_d0;
    if (cVar4 == '\0') {
      if (((uint)uStack_d0 < param_5) || (uVar14 <= (uint)uStack_d0)) goto LAB_18085a4fd;
      lVar10 = *(int64_t *)(param_1 + 0x160);
      uStack_70 = (**(code **)(*(int64_t *)(lVar10 + 8) + 0x30))(lVar10 + 8);
      uStack_88 = uStack_d0;
      lStack_80 = lVar10 + 0x3f8;
      uStack_68 = 0;
      uStack_60 = 0;
      lStack_78 = lVar10 + 0x378;
      uStack_a0 = uVar15;
      uStack_98 = (int32_t)uStack_48;
      uStack_94 = uStack_48._4_4_;
      uStack_90 = uStack_40;
      uStack_8c = uStack_3c;
      uVar15 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
      if (param_5 < uVar11) {
        uVar11 = uVar11 - param_5;
        if (uVar15 != 48000) {
          uVar11 = (uint)(((uint64_t)uVar11 * (uint64_t)uVar15) / 48000);
        }
        uVar18 = -(uint64_t)uVar11;
      }
      else {
        uVar18 = (uint64_t)(param_5 - uVar11);
        if (uVar15 != 48000) {
          uVar18 = (uVar18 * uVar15) / 48000;
        }
        uVar18 = uVar18 & 0xffffffff;
      }
      lStack_a8 = param_1;
      uStack_9c = uVar14;
      iVar5 = FUN_18085e8d0(*(uint64_t *)(param_1 + 0x160),param_2,&lStack_a8,1,uVar18 + lVar13,0,
                            0);
    }
    else {
      uVar15 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
      if (uVar14 < uVar11) {
        uVar18 = (uint64_t)(uVar11 - uVar14);
        if (uVar15 != 48000) {
          uVar18 = (uVar18 * uVar15) / 48000;
        }
        uVar18 = -(uVar18 & 0xffffffff);
      }
      else {
        uVar11 = uVar14 - uVar11;
        if (uVar15 != 48000) {
          uVar11 = (uint)(((uint64_t)uVar11 * (uint64_t)uVar15) / 48000);
        }
        uVar18 = (uint64_t)uVar11;
      }
      lVar13 = uVar18 + lVar13;
      lVar10 = *(int64_t *)(param_1 + 0x160);
      if (uVar14 <= (uint)uStack_d0) {
        uVar19 = 0;
        goto LAB_18085a4b5;
      }
      plVar9 = (int64_t *)FUN_1808caec0(lVar10 + 0x378,param_2,0);
      if (plVar9 == (int64_t *)0x0) goto LAB_18085a4fd;
      iVar5 = (**(code **)(*plVar9 + 0x70))(plVar9,lVar13,1);
    }
  }
  else {
    if (cVar4 != '\0') {
      iVar5 = UISystem_WidgetController(param_1);
      iVar5 = FUN_18085f790(*(uint64_t *)(param_1 + 0x160),param_2,
                            (int64_t)iVar5 + *(int64_t *)(param_1 + 0x10),1,
                            in_stack_ffffffffffffff08 & 0xffffffffffffff00,0);
      if (iVar5 != 0) goto LAB_18085a4c4;
    }
    MemoryCacheController0();
    uVar14 = (uint)uStack_d0;
    uVar15 = 0xffffffff;
    if (param_5 < (uint)uStack_d0) {
LAB_18085a294:
      iVar5 = 0x40;
      uVar17 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
      if ((uVar17 != 48000) &&
         (auVar3 = (ZEXT816(0) << 0x40 | ZEXT816(0x2ee000)) / ZEXT416(uVar17), iVar5 = auVar3._0_4_,
         0xffffffff < auVar3._0_8_)) {
        iVar5 = -1;
      }
      iVar6 = -1;
      if (uVar18 + uVar16 < 0x100000000) {
        iVar6 = param_6 + param_5;
      }
      uVar17 = (uint)uStack_d0;
      if ((uint)uStack_d0 < (uint)(iVar6 - iVar5)) {
LAB_18085a2e9:
        lVar10 = *(int64_t *)(param_1 + 0x160);
        lStack_50 = lVar10 + 0x378;
        lStack_58 = lVar10 + 0x3f8;
        if (uVar18 + uVar16 < 0x100000000) {
          auStack_d8[0] = param_6 + param_5;
        }
        else {
          auStack_d8[0] = 0xffffffff;
        }
        uStack_70 = (**(code **)(*(int64_t *)(lVar10 + 8) + 0x30))(lVar10 + 8);
        uStack_9c = auStack_d8[0];
        uStack_88 = uStack_d0;
        uStack_68 = 0;
        uStack_60 = 0;
        lStack_80 = lStack_58;
        lStack_78 = lStack_50;
        uStack_98 = (int32_t)uStack_48;
        uStack_94 = uStack_48._4_4_;
        uStack_90 = uStack_40;
        uStack_8c = uStack_3c;
        uVar2 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
        if (param_5 < uVar11) {
          uVar12 = (uint64_t)(uVar11 - param_5);
          if (uVar2 != 48000) {
            uVar12 = (uVar12 * uVar2) / 48000;
          }
          uVar12 = -(uVar12 & 0xffffffff);
        }
        else {
          uVar12 = (uint64_t)(param_5 - uVar11);
          if (uVar2 != 48000) {
            uVar12 = (uVar12 * uVar2) / 48000;
          }
          uVar12 = uVar12 & 0xffffffff;
        }
        lStack_a8 = param_1;
        uStack_a0 = uVar17;
        iVar5 = FUN_18085e8d0(*(uint64_t *)(param_1 + 0x160),param_2,&lStack_a8,1,uVar12 + lVar13,
                              0,0);
        if (iVar5 != 0) goto LAB_18085a4c4;
      }
    }
    else {
      uVar17 = param_5;
      if (param_5 < uStack_d0._4_4_) goto LAB_18085a2e9;
      if (param_5 < (uint)uStack_d0) goto LAB_18085a294;
    }
    if (uVar18 + uVar16 < 0x100000000) {
      uVar15 = param_6 + param_5;
    }
    if ((uVar15 < uVar14) || (uStack_d0._4_4_ <= uVar15)) goto LAB_18085a4fd;
    uVar14 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar15 < uVar11) {
      uVar11 = uVar11 - uVar15;
      if (uVar14 != 48000) {
        uVar11 = (uint)(((uint64_t)uVar11 * (uint64_t)uVar14) / 48000);
      }
      uVar18 = -(uint64_t)uVar11;
    }
    else {
      uVar15 = uVar15 - uVar11;
      if (uVar14 != 48000) {
        uVar15 = (uint)(((uint64_t)uVar15 * (uint64_t)uVar14) / 48000);
      }
      uVar18 = (uint64_t)uVar15;
    }
    lVar13 = uVar18 + lVar13;
    lVar10 = *(int64_t *)(param_1 + 0x160);
    uVar19 = 1;
LAB_18085a4b5:
    iVar5 = FUN_18085f790(lVar10,param_2,lVar13,1,uVar19,0);
  }
  if (iVar5 != 0) {
LAB_18085a4c4:
    if (lStack_b8 == 0) {
      return iVar5;
    }
    piVar1 = (int *)(lStack_b8 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStack_b8,&rendering_buffer_2208_ptr,0x76,1);
    }
    return iVar5;
  }
LAB_18085a4fd:
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStack_b8,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18085a550(int64_t param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int32_t *puVar8;
  uint *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t in_stack_ffffffffffffff08;
  int aiStack_d8 [2];
  uint64_t uStack_d0;
  int64_t lStack_c8;
  uint uStack_c0;
  int32_t uStack_bc;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  uint64_t uStack_a0;
  uint uStack_98;
  int32_t uStack_94;
  int64_t lStack_88;
  uint uStack_80;
  int iStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  uint uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int8_t uStack_40;
  
  uVar11 = (uint64_t)param_5;
  uVar13 = (uint64_t)param_6;
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
    return 0x1c;
  }
  puVar8 = (int32_t *)FUN_18084cde0(*(uint64_t *)(param_1 + 0x110),aiStack_d8);
  *(int32_t *)(param_1 + 0x10c) = *puVar8;
  if (*(int *)(*(int64_t *)(param_1 + 0x160) + 0x2e4) < 3) {
    return 0;
  }
  uStack_d0 = 0;
  lStack_c8 = 0;
  puVar9 = (uint *)MemoryCacheController0();
  uStack_c0 = *puVar9;
  uStack_bc = 0;
  lStack_b8 = 0;
  iVar5 = FUN_180856d20(param_1,&uStack_d0,&lStack_c8);
  if (iVar5 != 0) goto LAB_18085a91b;
  uVar2 = (uint)uStack_d0;
  uVar12 = 0xffffffff;
  if (param_3 < (uint)uStack_d0) {
LAB_18085a652:
    uVar6 = 0xffffffff;
    if ((uint64_t)param_4 + (uint64_t)param_3 < 0x100000000) {
      uVar6 = param_3 + param_4;
    }
    if (uVar6 <= (uint)uStack_d0) goto LAB_18085a689;
LAB_18085a66c:
    uVar6 = 0xffffffff;
    if ((uint64_t)param_3 + (uint64_t)param_4 < 0x100000000) {
      uVar6 = param_3 + param_4;
    }
    if (((uint)uStack_d0 <= uVar6) && (uVar6 < uStack_d0._4_4_)) goto LAB_18085a689;
    bVar3 = true;
  }
  else {
    if (param_3 < uStack_d0._4_4_) goto LAB_18085a66c;
    if (param_3 <= (uint)uStack_d0) goto LAB_18085a652;
LAB_18085a689:
    bVar3 = false;
  }
  if (param_5 < (uint)uStack_d0) {
LAB_18085a698:
    uVar6 = 0xffffffff;
    if (uVar13 + uVar11 < 0x100000000) {
      uVar6 = param_5 + param_6;
    }
    if ((uint)uStack_d0 < uVar6) goto LAB_18085a6ac;
LAB_18085a6b0:
    bVar4 = false;
  }
  else {
    if (uStack_d0._4_4_ <= param_5) {
      if (param_5 <= (uint)uStack_d0) goto LAB_18085a698;
      goto LAB_18085a6b0;
    }
LAB_18085a6ac:
    bVar4 = true;
  }
  if (bVar3) {
    if (!bVar4) {
      iVar5 = UISystem_WidgetController(param_1);
      in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffffffffffff00;
      iVar5 = FUN_18085f790(*(uint64_t *)(param_1 + 0x160),param_2,
                            (int64_t)iVar5 + *(int64_t *)(param_1 + 0x10),0,
                            in_stack_ffffffffffffff08,0);
      if (iVar5 != 0) goto LAB_18085a91b;
      lVar10 = FUN_1808caec0(*(int64_t *)(param_1 + 0x160) + 0x3f8,param_2,0);
      if (lVar10 != 0) {
        iVar5 = FUN_1808cab70(*(int64_t *)(param_1 + 0x160) + 0x3f8,lVar10);
        goto joined_r0x00018085a8b5;
      }
      goto LAB_18085a742;
    }
  }
  else {
    if (!bVar4) goto LAB_18085a746;
    MemoryCacheController0();
    if (param_5 < uVar2) {
LAB_18085a7de:
      uVar7 = 0xffffffff;
      if (uVar13 + uVar11 < 0x100000000) {
        uVar7 = param_5 + param_6;
      }
      uVar6 = uVar2;
      if (uVar7 <= uVar2) goto LAB_18085a746;
    }
    else {
      uVar6 = param_5;
      if (uStack_d0._4_4_ <= param_5) {
        if (uVar2 < param_5) goto LAB_18085a746;
        goto LAB_18085a7de;
      }
    }
    lVar10 = *(int64_t *)(param_1 + 0x160);
    lStack_a8 = lVar10 + 0x378;
    lStack_b0 = lVar10 + 0x3f8;
    uStack_a0 = lStack_c8;
    uStack_98 = uStack_c0;
    if (uVar11 + uVar13 < 0x100000000) {
      aiStack_d8[0] = param_5 + param_6;
    }
    else {
      aiStack_d8[0] = -1;
    }
    uStack_50 = (**(code **)(*(int64_t *)(lVar10 + 8) + 0x30))(lVar10 + 8);
    iStack_7c = aiStack_d8[0];
    uStack_68 = uStack_d0;
    lStack_60 = lStack_b0;
    lStack_58 = lStack_a8;
    uStack_78 = (int32_t)uStack_a0;
    uStack_74 = uStack_a0._4_4_;
    uStack_70 = uStack_98;
    uStack_6c = uStack_94;
    uStack_48 = 0;
    uStack_40 = 0;
    in_stack_ffffffffffffff08 = 0;
    lStack_88 = param_1;
    uStack_80 = uVar6;
    iVar5 = FUN_18085e8d0(*(uint64_t *)(param_1 + 0x160),param_2,&lStack_88,0,0,1,0);
joined_r0x00018085a8b5:
    if (iVar5 != 0) goto LAB_18085a91b;
LAB_18085a742:
  }
LAB_18085a746:
  if (uVar13 + uVar11 < 0x100000000) {
    uVar12 = param_5 + param_6;
  }
  if ((uVar2 <= uVar12) && (uVar12 < uStack_d0._4_4_)) {
    uVar2 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar12 < uStack_c0) {
      uVar11 = (uint64_t)(uStack_c0 - uVar12);
      if (uVar2 != 48000) {
        uVar11 = (uVar11 * uVar2) / 48000;
      }
      uVar11 = -(uVar11 & 0xffffffff);
    }
    else {
      uVar12 = uVar12 - uStack_c0;
      if (uVar2 != 48000) {
        uVar12 = (uint)(((uint64_t)uVar12 * (uint64_t)uVar2) / 48000);
      }
      uVar11 = (uint64_t)uVar12;
    }
    iVar5 = FUN_18085f790(*(uint64_t *)(param_1 + 0x160),param_2,uVar11 + lStack_c8,0,
                          in_stack_ffffffffffffff08 & 0xffffffffffffff00,0);
    if (iVar5 != 0) goto LAB_18085a91b;
  }
  iVar5 = 0;
LAB_18085a91b:
  if (lStack_b8 != 0) {
    piVar1 = (int *)(lStack_b8 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStack_b8,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  return iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18085a5e5(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar14;
  uint uVar15;
  uint uVar16;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int64_t lVar17;
  int32_t extraout_XMM0_Da;
  uint64_t in_stack_00000020;
  int iStack0000000000000040;
  uint uStack0000000000000048;
  
  _uStack0000000000000048 = 0;
  *(uint64_t *)(unaff_RBP + -0x79) = 0;
  puVar9 = (int32_t *)MemoryCacheController0();
  *(int32_t *)(unaff_RBP + -0x71) = *puVar9;
  *(int32_t *)(unaff_RBP + -0x6d) = 0;
  *(uint64_t *)(unaff_RBP + -0x69) = 0;
  iVar6 = FUN_180856d20(extraout_XMM0_Da,&stack0x00000048,unaff_RBP + -0x79);
  if (iVar6 != 0) goto LAB_18085a91b;
  uVar2 = uStack0000000000000048;
  uVar16 = 0xffffffff;
  uVar15 = *(uint *)(unaff_RBP + -0x7d);
  uVar13 = (uint)unaff_RSI;
  if (uVar13 < uStack0000000000000048) {
LAB_18085a652:
    uVar7 = 0xffffffff;
    if ((uint64_t)(unaff_R15 + unaff_RSI) < 0x100000000) {
      uVar7 = uVar13 + (int)unaff_R15;
    }
    if (uVar7 <= uStack0000000000000048) goto LAB_18085a689;
LAB_18085a66c:
    uVar7 = 0xffffffff;
    if ((uint64_t)(unaff_RSI + unaff_R15) < 0x100000000) {
      uVar7 = uVar13 + (int)unaff_R15;
    }
    if ((uStack0000000000000048 <= uVar7) && (uVar7 < uVar15)) goto LAB_18085a689;
    bVar4 = true;
  }
  else {
    if (uVar13 < uVar15) goto LAB_18085a66c;
    if (uVar13 <= uStack0000000000000048) goto LAB_18085a652;
LAB_18085a689:
    bVar4 = false;
  }
  uVar13 = (uint)unaff_RBX;
  iVar3 = (int)unaff_R14;
  if (uVar13 < uStack0000000000000048) {
LAB_18085a698:
    uVar7 = 0xffffffff;
    if ((uint64_t)(unaff_R14 + unaff_RBX) < 0x100000000) {
      uVar7 = uVar13 + iVar3;
    }
    if (uStack0000000000000048 < uVar7) goto LAB_18085a6ac;
LAB_18085a6b0:
    bVar5 = false;
  }
  else {
    if (uVar15 <= uVar13) {
      if (uVar13 <= uStack0000000000000048) goto LAB_18085a698;
      goto LAB_18085a6b0;
    }
LAB_18085a6ac:
    bVar5 = true;
  }
  if (bVar4) {
    lVar17 = *(int64_t *)(unaff_RBP + 0x57);
    if (bVar5) goto LAB_18085a8c1;
    iVar6 = UISystem_WidgetController(lVar17);
    in_stack_00000020 = in_stack_00000020 & 0xffffffffffffff00;
    iVar6 = FUN_18085f790(*(uint64_t *)(lVar17 + 0x160),*(uint64_t *)(unaff_RBP + 0x5f),
                          (int64_t)iVar6 + *(int64_t *)(lVar17 + 0x10),0,in_stack_00000020);
    if (iVar6 != 0) goto LAB_18085a91b;
    uVar14 = *(uint64_t *)(unaff_RBP + 0x5f);
    lVar10 = FUN_1808caec0(*(int64_t *)(lVar17 + 0x160) + 0x3f8,uVar14,0);
    if (lVar10 != 0) {
      iVar6 = FUN_1808cab70(*(int64_t *)(lVar17 + 0x160) + 0x3f8,lVar10);
      goto joined_r0x00018085a8b5;
    }
LAB_18085a742:
    uVar15 = *(uint *)(unaff_RBP + -0x7d);
  }
  else {
    if (bVar5) {
      MemoryCacheController0();
      uVar15 = *(uint *)(unaff_RBP + -0x7d);
      if (uVar13 < uVar2) {
LAB_18085a7de:
        uVar8 = 0xffffffff;
        if ((uint64_t)(unaff_R14 + unaff_RBX) < 0x100000000) {
          uVar8 = uVar13 + iVar3;
        }
        uVar7 = uVar2;
        if (uVar8 <= uVar2) goto LAB_18085a8bd;
      }
      else {
        uVar7 = uVar13;
        if (uVar15 <= uVar13) {
          if (uVar2 < uVar13) goto LAB_18085a8bd;
          goto LAB_18085a7de;
        }
      }
      lVar17 = *(int64_t *)(unaff_RBP + 0x57);
      lVar10 = *(int64_t *)(lVar17 + 0x160);
      *(int64_t *)(unaff_RBP + -0x59) = lVar10 + 0x378;
      *(int64_t *)(unaff_RBP + -0x61) = lVar10 + 0x3f8;
      *(uint64_t *)(unaff_RBP + -0x51) = *(uint64_t *)(unaff_RBP + -0x79);
      *(int32_t *)(unaff_RBP + -0x49) = *(int32_t *)(unaff_RBP + -0x71);
      if ((uint64_t)(unaff_RBX + unaff_R14) < 0x100000000) {
        iStack0000000000000040 = uVar13 + iVar3;
      }
      else {
        iStack0000000000000040 = -1;
      }
      uVar11 = (**(code **)(*(int64_t *)(lVar10 + 8) + 0x30))(lVar10 + 8);
      *(int *)(unaff_RBP + -0x2d) = iStack0000000000000040;
      *(uint64_t *)(unaff_RBP + -0x19) = _uStack0000000000000048;
      *(uint64_t *)(unaff_RBP + -0x11) = *(uint64_t *)(unaff_RBP + -0x61);
      *(uint64_t *)(unaff_RBP + -9) = *(uint64_t *)(unaff_RBP + -0x59);
      uVar14 = *(uint64_t *)(lVar17 + 0x160);
      *(int64_t *)(unaff_RBP + -0x39) = lVar17;
      *(uint *)(unaff_RBP + -0x31) = uVar7;
      *(int32_t *)(unaff_RBP + -0x29) = *(int32_t *)(unaff_RBP + -0x51);
      *(int32_t *)(unaff_RBP + -0x25) = *(int32_t *)(unaff_RBP + -0x4d);
      *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(unaff_RBP + -0x49);
      *(int32_t *)(unaff_RBP + -0x1d) = *(int32_t *)(unaff_RBP + -0x45);
      *(uint64_t *)(unaff_RBP + -1) = uVar11;
      *(uint64_t *)(unaff_RBP + 7) = 0;
      *(int8_t *)(unaff_RBP + 0xf) = 0;
      in_stack_00000020 = 0;
      iVar6 = FUN_18085e8d0(uVar14,*(uint64_t *)(unaff_RBP + 0x5f),unaff_RBP + -0x39,0,0);
joined_r0x00018085a8b5:
      if (iVar6 != 0) goto LAB_18085a91b;
      uVar14 = *(uint64_t *)(unaff_RBP + 0x5f);
      goto LAB_18085a742;
    }
LAB_18085a8bd:
    lVar17 = *(int64_t *)(unaff_RBP + 0x57);
LAB_18085a8c1:
    uVar14 = *(uint64_t *)(unaff_RBP + 0x5f);
  }
  if ((uint64_t)(unaff_R14 + unaff_RBX) < 0x100000000) {
    uVar16 = uVar13 + iVar3;
  }
  if ((uVar2 <= uVar16) && (uVar16 < uVar15)) {
    uVar15 = *(uint *)(unaff_RBP + -0x71);
    uVar2 = *(uint *)(*(int64_t *)(lVar17 + 0x168) + 0x774);
    if (uVar16 < uVar15) {
      uVar12 = (uint64_t)(uVar15 - uVar16);
      if (uVar2 != 48000) {
        uVar12 = (uVar12 * uVar2) / 48000;
      }
      lVar10 = *(int64_t *)(unaff_RBP + -0x79) - (uVar12 & 0xffffffff);
    }
    else {
      uVar16 = uVar16 - uVar15;
      if (uVar2 != 48000) {
        uVar16 = (uint)(((uint64_t)uVar16 * (uint64_t)uVar2) / 48000);
      }
      lVar10 = (uint64_t)uVar16 + *(int64_t *)(unaff_RBP + -0x79);
    }
    iVar6 = FUN_18085f790(*(uint64_t *)(lVar17 + 0x160),uVar14,lVar10,0,
                          in_stack_00000020 & 0xffffffffffffff00);
    if (iVar6 != 0) goto LAB_18085a91b;
  }
  iVar6 = 0;
LAB_18085a91b:
  lVar17 = *(int64_t *)(unaff_RBP + -0x69);
  if (lVar17 != 0) {
    piVar1 = (int *)(lVar17 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar17,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  return iVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18085a934(uint64_t param_1,int64_t param_2)

{
  int *piVar1;
  int32_t unaff_ESI;
  
  piVar1 = (int *)(param_2 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&rendering_buffer_2208_ptr,0x76,1);
  }
  return unaff_ESI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18085a980(int64_t param_1)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uStack_28;
  int32_t uStack_20;
  int32_t uStack_1c;
  int64_t lStack_18;
  
  plVar8 = (int64_t *)0x0;
  plVar2 = (int64_t *)(param_1 + 0x118);
  plVar7 = (int64_t *)(*plVar2 + -0x18);
  if (*plVar2 == 0) {
    plVar7 = plVar8;
  }
  plVar3 = plVar8;
  if (plVar7 != (int64_t *)0x0) {
    plVar3 = plVar7 + 3;
  }
  while (plVar3 != plVar2) {
    plVar7 = plVar3 + -3;
    if (plVar3 == (int64_t *)0x0) {
      plVar7 = plVar8;
    }
    uVar5 = func_0x0001808c6bf0(plVar7);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (plVar3 == plVar2) break;
    plVar7 = (int64_t *)(*plVar3 + -0x18);
    if (*plVar3 == 0) {
      plVar7 = plVar8;
    }
    plVar3 = plVar8;
    if (plVar7 != (int64_t *)0x0) {
      plVar3 = plVar7 + 3;
    }
  }
  *(int32_t *)(param_1 + 0x20) = 0;
  *(int32_t *)(param_1 + 0x138) = 0xffffffff;
  *(int32_t *)(param_1 + 300) = 0;
  *(int8_t *)(param_1 + 0x13c) = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  puVar6 = (int32_t *)MemoryCacheController0();
  *(int32_t *)(param_1 + 0x148) = *puVar6;
  *(int32_t *)(param_1 + 0x128) = 0;
  FUN_1808556a0(param_1 + 0x70);
  FUN_180855780(param_1 + 0x80);
  iVar4 = SystemStatusChecker(param_1 + 0x90);
  if ((iVar4 == 0) && (iVar4 = FUN_1808554a0(param_1 + 0xa0), iVar4 == 0)) {
    *(int32_t *)(param_1 + 0xb0) = 0xffffffff;
    *(int32_t *)(param_1 + 0xb4) = 0;
  }
  uStack_28 = 0;
  puVar6 = (int32_t *)MemoryCacheController0();
  uStack_20 = *puVar6;
  uStack_1c = 0;
  lStack_18 = 0;
  FUN_1808c6d60(param_1 + 0x28,&uStack_28);
  if (lStack_18 != 0) {
    piVar1 = (int *)(lStack_18 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lStack_18,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  iVar4 = SystemStatusChecker(param_1 + 0xb8);
  if ((iVar4 == 0) && (iVar4 = SystemCoreProcessor(param_1 + 200), iVar4 == 0)) {
    *(int32_t *)(param_1 + 0xd8) = 0xffffffff;
    *(int32_t *)(param_1 + 0xdc) = 0;
  }
  *(int8_t *)(param_1 + 0x13f) = 0;
  iVar4 = SystemStatusChecker(param_1 + 0xe0);
  if ((iVar4 == 0) && (iVar4 = FUN_1808553b0(param_1 + 0xf0), iVar4 == 0)) {
    *(int32_t *)(param_1 + 0x100) = 0xffffffff;
    *(int32_t *)(param_1 + 0x104) = 0;
  }
  return 0;
}



uint64_t UISystem_WidgetController(int64_t param_1)

{
  char cVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  float afStackX_8 [2];
  uint auStackX_10 [2];
  
  uVar4 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x160) + 8) + 0x30))();
  lVar5 = func_0x0001808b8910(uVar4);
  uVar6 = (uint64_t)*(uint *)(lVar5 + 0x1f8);
  if (*(uint *)(lVar5 + 0x1f8) == 0xffffffff) {
    uVar4 = (*(code *)**(uint64_t **)(*(int64_t *)(lVar5 + 0x228) + 8))();
    iVar3 = func_0x0001808c7d90(uVar4);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
LAB_18085abe3:
        lVar2 = *(int64_t *)(lVar5 + 0x230);
        afStackX_8[0] = 1.0;
        cVar1 = *(char *)(lVar2 + 0x782);
        if (*(int64_t *)(lVar5 + 200) != 0) {
          iVar3 = FUN_18073ca90(*(uint64_t *)(*(int64_t *)(lVar5 + 200) + 0x78),afStackX_8);
          if (iVar3 != 0) {
            return 0;
          }
        }
        auStackX_10[0] = 0;
        uVar6 = FUN_180739a50(*(uint64_t *)(lVar2 + 0x4c0),auStackX_10,0);
        if ((int)uVar6 == 0) {
          uVar6 = (uint64_t)
                  ((float)(int)(2 - (uint)(cVar1 != '\0')) * afStackX_8[0] * (float)auStackX_10[0]);
        }
        return uVar6;
      }
      if (iVar3 == 2) {
        return (uint64_t)*(uint *)(*(int64_t *)(lVar5 + 0x230) + 0x7b8);
      }
      if (iVar3 == 3) goto LAB_18085abe3;
    }
    uVar6 = 0;
  }
  return uVar6;
}



int64_t FUN_18085abf2(int64_t param_1)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  float in_XMM0_Da;
  float fStack0000000000000030;
  uint in_stack_00000038;
  
  lVar3 = *(int64_t *)(unaff_RBX + 0x230);
  cVar1 = *(char *)(lVar3 + 0x782);
  fStack0000000000000030 = in_XMM0_Da;
  if (param_1 != 0) {
    iVar2 = FUN_18073ca90(*(uint64_t *)(param_1 + 0x78),&stack0x00000030);
    if (iVar2 != 0) {
      return 0;
    }
  }
  in_stack_00000038 = 0;
  lVar3 = FUN_180739a50(*(uint64_t *)(lVar3 + 0x4c0),&stack0x00000038,0);
  if ((int)lVar3 == 0) {
    lVar3 = (int64_t)
            ((float)(int)(2 - (uint)(cVar1 != '\0')) * fStack0000000000000030 *
            (float)in_stack_00000038);
  }
  return lVar3;
}



int64_t FUN_18085ac39(void)

{
  int64_t lVar1;
  char unaff_SIL;
  int64_t unaff_RDI;
  float in_stack_00000030;
  uint uStack0000000000000038;
  
  uStack0000000000000038 = 0;
  lVar1 = FUN_180739a50(*(uint64_t *)(unaff_RDI + 0x4c0),&stack0x00000038,0);
  if ((int)lVar1 == 0) {
    lVar1 = (int64_t)
            ((float)(int)(2 - (uint)(unaff_SIL != '\0')) * in_stack_00000030 *
            (float)uStack0000000000000038);
  }
  return lVar1;
}



// WARNING: Removing unreachable block (ram,0x000180857ea9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18085aca0(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int32_t *puVar13;
  int64_t lVar14;
  uint *puVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  uint uVar20;
  uint uVar21;
  int64_t *plVar22;
  byte bVar23;
  uint64_t uVar24;
  uint uVar25;
  uint64_t uVar26;
  uint uVar27;
  int64_t *plVar28;
  bool bVar29;
  bool bVar30;
  uint8_t uVar31;
  uint64_t **in_stack_fffffffffffffe78;
  uint8_t uVar32;
  int *in_stack_fffffffffffffe80;
  uint7 uVar33;
  int64_t in_stack_fffffffffffffe88;
  uint uStack_168;
  int iStack_164;
  byte bStack_160;
  uint uStack_15c;
  uint uStack_158;
  char cStack_154;
  char acStack_153 [3];
  uint uStack_150;
  uint64_t *puStack_148;
  uint auStack_140 [2];
  uint uStack_138;
  uint uStack_134;
  uint64_t *puStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint uStack_118;
  int32_t uStack_114;
  uint64_t *puStack_110;
  int iStack_108;
  int *piStack_100;
  int64_t lStack_f8;
  uint64_t uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  int iStack_cc;
  int64_t *plStack_c8;
  int64_t lStack_c0;
  int64_t *plStack_b8;
  uint auStack_b0 [2];
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int aiStack_90 [4];
  uint64_t uStack_80;
  int aiStack_70 [4];
  uint64_t uStack_60;
  int8_t auStack_50 [24];
  
  MemoryCacheController0();
  if (*(char *)(param_1 + 0x13c) != '\0') {
    return 0;
  }
  *(int32_t *)(param_1 + 0xc) = 0;
  uVar26 = 0;
  uVar8 = *(uint *)(param_1 + 0x20);
  uVar10 = (**(code **)(*(int64_t *)(*(int64_t *)(param_1 + 0x160) + 8) + 0x30))();
  lVar14 = func_0x0001808b8910(uVar10);
  uVar19 = (uint64_t)*(uint *)(lVar14 + 0x1fc);
  if (*(uint *)(lVar14 + 0x1fc) != 0xffffffff) goto LAB_180857f18;
  lVar14 = (*(code *)**(uint64_t **)(*(int64_t *)(param_1 + 0x160) + 8))();
  iVar9 = *(int *)(lVar14 + 0xe4);
  if (-1 < iVar9) {
    if (iVar9 < 3) {
      uVar19 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x168) + 0x77c);
      goto LAB_180857f18;
    }
    if ((iVar9 != 3) && (iVar9 == 4)) {
      uVar19 = 1;
      goto LAB_180857f18;
    }
  }
  uVar19 = 0;
LAB_180857f18:
  iVar9 = UISystem_WidgetController(param_1);
  if (0 < iVar9) {
    uVar27 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    uVar26 = (int64_t)iVar9;
    if (uVar27 != 48000) {
      uVar26 = ((int64_t)iVar9 * 48000) / (int64_t)(uint64_t)uVar27;
    }
    if (0xffffffff < (int64_t)uVar26) {
      uVar26 = 0xffffffff;
    }
  }
  if (uVar19 + (uVar26 & 0xffffffff) < 0x100000000) {
    uStack_15c = (int)uVar19 + (int)uVar26;
    if (uStack_15c == 0) {
      uStack_15c = 1;
    }
  }
  else {
    uStack_15c = 0xffffffff;
  }
  *(uint *)(param_1 + 0x108) = uStack_15c;
  plVar17 = (int64_t *)(param_1 + 0x70);
  if (((int64_t *)*plVar17 == plVar17) && (*(int64_t **)(param_1 + 0x78) == plVar17)) {
    uVar26 = *(uint64_t *)(param_1 + 0x28);
    uStack_e8 = *(uint *)(param_1 + 0x30);
    lVar14 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    lVar14 = *(int64_t *)(param_1 + 0x78);
    uVar26 = *(uint64_t *)(lVar14 + 0x10);
    uStack_e8 = *(uint *)(lVar14 + 0x18);
    lVar14 = *(int64_t *)(lVar14 + 0x20);
  }
  uStack_128 = (uint64_t)uStack_e8;
  uStack_f0 = uVar26;
  plStack_b8 = plVar17;
  if (lVar14 != 0) {
    *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
    piVar1 = (int *)(lVar14 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  if (((int64_t *)*plVar17 == plVar17) && (*(int64_t **)(param_1 + 0x78) == plVar17)) {
    iVar9 = *(int *)(param_1 + 0x34);
    lVar14 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    iVar9 = *(int *)(*(int64_t *)(param_1 + 0x78) + 0x1c);
    lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
  }
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1, lVar14 != 0)) {
    piVar1 = (int *)(lVar14 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar14,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  if (iVar9 == 3) {
    *(int32_t *)(param_1 + 0xc) = 3;
  }
  iStack_164 = 0;
  iStack_108 = 0;
  plStack_c8 = (int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  lStack_c0 = *plStack_c8;
  piStack_100 = (int *)(lStack_c0 + 0x48);
  uVar27 = uStack_15c;
LAB_1808580a0:
  do {
    while( true ) {
      if ((*piStack_100 < network_system_memory) && (SystemInitializer(&system_ptr_ea98), network_system_memory == -1))
      {
        network_system_memory = 0;
        SystemCore_StateController(&system_ptr_ea98);
      }
      if (uVar27 <= network_system_memory) {
        return 0;
      }
      if (*(int64_t *)(param_1 + 0x140) == 0) break;
      if (((int64_t *)*plVar17 == plVar17) && ((int64_t *)plVar17[1] == plVar17)) {
        uStack_150 = *(uint *)(param_1 + 0x34);
        puVar11 = *(uint64_t **)(param_1 + 0x38);
      }
      else {
        uStack_150 = *(uint *)(*(int64_t *)(param_1 + 0x78) + 0x1c);
        puVar11 = *(uint64_t **)(*(int64_t *)(param_1 + 0x78) + 0x20);
      }
      if (puVar11 != (uint64_t *)0x0) {
        *(int *)(puVar11 + 2) = (int)puVar11[2] + 1;
      }
      puStack_130 = puVar11;
      if ((1 < uStack_150 - 4) || (puVar11 == (uint64_t *)0x0)) {
        uVar19 = 0x1c;
        goto LAB_180859163;
      }
      puStack_148 = *(uint64_t **)(param_1 + 0x140);
      uVar21 = (int)puStack_148[0x14] - (int)puStack_148[0x15];
      uVar7 = *(uint *)((int64_t)puStack_148 + 0xa4);
      if ((uVar7 <= *(uint *)(param_1 + 0x148)) && ((*(byte *)(param_1 + 0x128) & 2) == 0)) {
        uVar6 = FUN_18085c620(param_1,uVar26);
        uVar19 = (uint64_t)uVar6;
        puVar11 = puStack_130;
        if (uVar6 != 0) goto LAB_180859163;
      }
      uVar6 = *(uint *)(param_1 + 0x148);
      bVar23 = 0;
      uVar20 = (int)puStack_148[0x14] - uVar6;
      uStack_168 = 0;
      bStack_160 = 0;
      aiStack_70[0] = 0;
      uStack_60 = 0;
      aiStack_90[0] = 0;
      uStack_80 = 0;
      if ((*(uint *)(param_1 + 0x128) & 2) == 0) {
        if ((*(uint *)(param_1 + 0x128) & 1) == 0) {
          FUN_1808639c0(*(uint64_t *)(param_1 + 0x160),uVar26);
          lStack_f8 = *(int64_t *)(param_1 + 0x140) + 0x10;
          FUN_180855fc0(param_1 + 0x90,&uStack_120,lStack_f8);
          if ((int)puStack_110 == -1) {
            uStack_158 = (uint)uStack_128;
            if (*(char *)(param_1 + 0x13f) != '\0') {
              uStack_158 = *(uint *)(param_1 + 0x154);
            }
            FUN_1808577c0(param_1 + 0x90,lStack_f8,&uStack_158);
            puVar11 = (uint64_t *)
                      FUN_180855fc0(param_1 + 0x90,auStack_50,*(int64_t *)(param_1 + 0x140) + 0x10)
            ;
            uStack_120 = *puVar11;
            uStack_118 = (uint)puVar11[1];
            uStack_114 = *(int32_t *)((int64_t)puVar11 + 0xc);
            puStack_110 = (uint64_t *)puVar11[2];
          }
          else if (uStack_150 == 4) {
            uVar6 = (uint)uStack_128;
            if (*(char *)(param_1 + 0x13f) != '\0') {
              uVar6 = *(uint *)(param_1 + 0x154);
            }
            *(uint *)(*(int64_t *)(uStack_120 + 0x10) + 0x14 + (int64_t)(int)puStack_110 * 0x18) =
                 uVar6;
          }
          *(int32_t *)(param_1 + 0x154) =
               *(int32_t *)
                (*(int64_t *)(uStack_120 + 0x10) + 0x14 + (int64_t)(int)puStack_110 * 0x18);
          *(int32_t *)(param_1 + 0x14c) = *(int32_t *)(param_1 + 0x148);
          *(int8_t *)(param_1 + 0x13f) = 0;
          *(int8_t *)(param_1 + 0x13d) = 0;
        }
        uStack_d8 = 0xffffffff;
        if ((uint64_t)*(uint *)(param_1 + 0x14c) + (uint64_t)*(uint *)(param_1 + 0x154) <
            0x100000000) {
          uStack_d8 = *(uint *)(param_1 + 0x14c) + *(uint *)(param_1 + 0x154);
        }
        iStack_d4 = -1;
        if ((uint64_t)uStack_d8 + (uint64_t)uVar20 < 0x100000000) {
          iStack_d4 = uStack_d8 + uVar20;
        }
        in_stack_fffffffffffffe88 = param_1 + 0xb8;
        in_stack_fffffffffffffe80 = aiStack_70;
        in_stack_fffffffffffffe78 =
             (uint64_t **)((uint64_t)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
        FUN_180856830(param_1,&uStack_d8,0,1,in_stack_fffffffffffffe78,in_stack_fffffffffffffe80,
                      in_stack_fffffffffffffe88,&cStack_154);
        uVar6 = *(uint *)(param_1 + 0x148);
        if ((cStack_154 == '\0') || (uVar20 = aiStack_70[0] - uStack_d8, uVar7 - uVar6 <= uVar20)) {
          bVar23 = 0;
          uVar20 = uVar7 - uVar6;
        }
        else {
          bVar23 = 1;
          uStack_168 = 1;
        }
      }
      puVar11 = puStack_130;
      uVar7 = uVar20;
      if (uVar6 < uVar21) {
        uVar7 = uVar21 - uVar6;
        bVar4 = 0;
        if (uVar20 <= uVar21 - uVar6) {
          uVar7 = uVar20;
          bVar4 = bVar23;
        }
        uStack_168 = (uint)bVar4;
      }
      else {
        if ((*(byte *)(param_1 + 0x128) & 4) == 0) {
          uVar3 = *(int32_t *)((int64_t)puStack_130 + 0xc);
          *(uint *)(param_1 + 0x150) = uVar6 - uVar21;
          *(int32_t *)(param_1 + 0x158) = uVar3;
          *(int32_t *)(param_1 + 0x15c) = uVar3;
          *(int8_t *)(param_1 + 0x13e) = 0;
        }
        uStack_d0 = 0xffffffff;
        if ((uint64_t)*(uint *)(param_1 + 0x150) + (uint64_t)*(uint *)(param_1 + 0x158) <
            0x100000000) {
          uStack_d0 = *(uint *)(param_1 + 0x150) + *(uint *)(param_1 + 0x158);
        }
        iStack_cc = -1;
        if ((uint64_t)uStack_d0 + (uint64_t)uVar20 < 0x100000000) {
          iStack_cc = uStack_d0 + uVar20;
        }
        in_stack_fffffffffffffe88 = param_1 + 0xb8;
        in_stack_fffffffffffffe80 = aiStack_90;
        in_stack_fffffffffffffe78 =
             (uint64_t **)((uint64_t)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
        FUN_180856830(param_1,&uStack_d0,0,1,in_stack_fffffffffffffe78,in_stack_fffffffffffffe80,
                      in_stack_fffffffffffffe88,acStack_153);
        if ((acStack_153[0] != '\0') && (uVar6 = aiStack_90[0] - uStack_d0, uVar6 <= uVar20)) {
          uVar7 = uVar6;
          if ((char)uStack_168 == '\0') {
            bStack_160 = 1;
          }
          else {
            bStack_160 = 1;
            if (uVar6 != uVar20) {
              uStack_168 = 0;
            }
          }
        }
      }
      uStack_150 = 0;
      uVar6 = uStack_150;
      uStack_158 = uVar27;
      if (uVar7 <= uVar27) {
        uStack_150 = (uint)bStack_160;
        uVar6 = uStack_168;
        uStack_158 = uVar7;
      }
      if ((*(int *)(*plStack_c8 + 0x48) < network_system_memory) &&
         (SystemInitializer(&system_ptr_ea98), network_system_memory == -1)) {
        network_system_memory = 0;
        SystemCore_StateController(&system_ptr_ea98);
      }
      if (network_system_memory < uStack_158) {
        uVar10 = 0;
        if ((char)uStack_150 != '\0') {
          uVar10 = uStack_80;
        }
        uVar24 = 0;
        if ((char)uVar6 != '\0') {
          uVar24 = uStack_60;
        }
        uVar7 = FUN_18085b580(param_1,uStack_158,uVar24,uVar10);
        uVar19 = (uint64_t)uVar7;
        if (uVar7 != 0) goto LAB_180859163;
        uVar27 = uVar27 - uStack_158;
        uStack_15c = uVar27;
      }
      *(int32_t *)(param_1 + 0xc) = 2;
      if ((uint)puStack_148[0x14] <= *(uint *)(param_1 + 0x148)) {
        if ((*(byte *)(param_1 + 0x128) & 2) == 0) {
          uVar8 = FUN_18085c620(param_1,uVar26,puVar11 + 1);
          uVar19 = (uint64_t)uVar8;
          if (uVar8 != 0) goto LAB_180859163;
        }
        if ((*(uint *)(param_1 + 0x128) & 4) == 0) {
          *(int32_t *)(param_1 + 0x158) = *(int32_t *)((int64_t)puVar11 + 0xc);
          *(uint *)(param_1 + 0x150) = *(int *)(param_1 + 0x148) - uVar21;
        }
        uVar19 = (uint64_t)(uint)((int)puStack_148[0x14] - (int)puVar11[1]);
        uVar8 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
        if (uVar8 != 48000) {
          uVar19 = (uVar8 * uVar19) / 48000;
        }
        uVar8 = 0xffffffff;
        uVar26 = uVar26 + (uVar19 & 0xffffffff);
        if ((uint64_t)*(uint *)(param_1 + 0x158) + (uint64_t)*(uint *)(param_1 + 0x150) <
            0x100000000) {
          uVar8 = *(uint *)(param_1 + 0x150) + *(uint *)(param_1 + 0x158);
        }
        uStack_128 = (uint64_t)uVar8;
        *(uint *)(param_1 + 8) = uVar8;
        *(int32_t *)(param_1 + 0x138) = 0xffffffff;
        *(uint *)(param_1 + 0xc) = ~(*(uint *)(param_1 + 0x128) >> 2) & 1 | 2;
        uStack_f0 = uVar26;
        uStack_e8 = uVar8;
        uVar7 = FUN_180854810(param_1,uVar26,uVar8,0);
        uVar19 = (uint64_t)uVar7;
        if (uVar7 != 0) {
LAB_180859163:
          if (puVar11 == (uint64_t *)0x0) {
            return uVar19;
          }
          puVar2 = puVar11 + 2;
          *(int *)puVar2 = (int)*puVar2 + -1;
          if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar11,&rendering_buffer_2208_ptr,0x76,1);
          }
          return uVar19;
        }
        if ((*(int *)(*plStack_c8 + 0x48) < network_system_memory) &&
           (SystemInitializer(&system_ptr_ea98), network_system_memory == -1)) {
          network_system_memory = uVar7;
          SystemCore_StateController(&system_ptr_ea98);
        }
        *(uint *)(param_1 + 0x148) = network_system_memory;
        uVar7 = FUN_180855810(param_1,uVar26);
        uVar19 = (uint64_t)uVar7;
        if (uVar7 != 0) goto LAB_180859163;
      }
      puVar2 = puVar11 + 2;
      *(int *)puVar2 = (int)*puVar2 + -1;
      if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar11,&rendering_buffer_2208_ptr,0x76,1);
      }
LAB_180858c20:
      plVar17 = (int64_t *)(param_1 + 0x70);
    }
    uStack_134 = 0xffffffff;
    if ((uint64_t)uVar27 + (uint64_t)uVar8 < 0x100000000) {
      uStack_134 = uVar27 + uVar8;
    }
    puVar15 = (uint *)(param_1 + 0xb8);
    in_stack_fffffffffffffe80 = (int *)((uint64_t)in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    auStack_b0[0] = 0;
    lStack_98 = 0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    uStack_138 = uVar8;
    uVar19 = FUN_180856570(param_1,&uStack_138,0,auStack_b0,puVar15,in_stack_fffffffffffffe80);
    uVar21 = auStack_b0[0];
    uVar7 = uStack_134;
    uVar27 = uStack_138;
    if ((int)uVar19 != 0) {
      return uVar19;
    }
    uStack_e0 = uStack_138;
    uStack_dc = uStack_134;
    if (auStack_b0[0] < uStack_134) {
      uStack_dc = auStack_b0[0];
    }
    uVar19 = FUN_18085b200(param_1,&uStack_e0,&uStack_f0);
    uVar20 = uStack_dc;
    uVar6 = uStack_e0;
    if ((int)uVar19 != 0) {
      return uVar19;
    }
    uStack_168 = 0;
    puVar11 = (uint64_t *)(*(int64_t *)(param_1 + 0x110) + 0x58);
    puStack_148 = (uint64_t *)*puVar11;
    puStack_130 = puVar11;
    uVar25 = 0;
    if (puStack_148 != puVar11) {
      while (uVar25 = uStack_168, (uint)puStack_148[2] <= uVar20) {
        if (((0 < *(int *)(param_1 + 300)) && (uVar6 <= (uint)puStack_148[2])) &&
           (((int)puStack_148[4] == 0 ||
            (cVar5 = FUN_1808b0820(puStack_148 + 3,*(uint64_t *)(param_1 + 0x160)),
            puVar11 = puStack_130, cVar5 != '\0')))) {
          if ((uint)puStack_148[2] == uVar20) {
            uStack_168 = uStack_168 + 1;
          }
          else {
            if (*(int *)(param_1 + 300) < 1) {
              return 0x1c;
            }
            *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
          }
        }
        uVar25 = uStack_168;
        if ((puStack_148 == puVar11) ||
           (puStack_148 = (uint64_t *)*puStack_148, puStack_148 == puVar11)) break;
      }
    }
    lVar14 = lStack_a0;
    if ((int)uVar25 <= *(int *)(param_1 + 300)) {
      *(uint *)(param_1 + 300) = *(int *)(param_1 + 300) - uVar25;
    }
    uVar33 = (uint7)((uint64_t)in_stack_fffffffffffffe88 >> 8);
    uVar32 = (uint8_t)((uint64_t)in_stack_fffffffffffffe80 >> 8);
    uVar31 = (uint8_t)((uint64_t)puVar15 >> 8);
    if (lStack_a0 != 0) {
      uStack_134 = uVar21;
      if (uVar21 == uVar27) {
        iStack_164 = iStack_164 + 1;
      }
      else {
        iStack_108 = iStack_108 + 1;
        bVar29 = *(int *)(param_1 + 0xc) != 2;
        lVar12 = (uint64_t)uVar33 << 8;
        iStack_164 = 0;
        uVar24 = CONCAT71(uVar32,bVar29);
        uVar10 = CONCAT71(uVar31,1);
        uVar19 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(int64_t *)(param_1 + 0x110) + 0x48,
                               uVar10,uVar24,lVar12);
        if ((int)uVar19 != 0) {
          return uVar19;
        }
        in_stack_fffffffffffffe88 = CONCAT71((int7)((uint64_t)lVar12 >> 8),(char)uVar19);
        in_stack_fffffffffffffe80 = (int *)CONCAT71((int7)((uint64_t)uVar24 >> 8),bVar29);
        puVar15 = (uint *)CONCAT71((int7)((uint64_t)uVar10 >> 8),(char)uVar19);
        uVar19 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(int64_t *)(param_1 + 0x110) + 0x38,
                               puVar15,in_stack_fffffffffffffe80,in_stack_fffffffffffffe88);
        if ((int)uVar19 != 0) {
          return uVar19;
        }
        *(uint *)(param_1 + 8) = uVar21;
        uStack_15c = uStack_15c - (uVar21 - uVar27);
      }
      uVar27 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
      uVar7 = (uint)uStack_128;
      if (uVar21 < uVar7) {
        uVar7 = uVar7 - uVar21;
        if (uVar27 != 48000) {
          uVar7 = (uint)(((uint64_t)uVar7 * (uint64_t)uVar27) / 48000);
        }
        uVar19 = -(uint64_t)uVar7;
      }
      else {
        uVar19 = (uint64_t)(uVar21 - uVar7);
        if (uVar27 != 48000) {
          uVar19 = (uVar19 * uVar27) / 48000;
        }
        uVar19 = uVar19 & 0xffffffff;
      }
      uVar26 = uVar26 + uVar19;
      *(int32_t *)(param_1 + 0xc) = 3;
      uStack_f0 = uVar26;
      lVar12 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),lVar14 + 0x20);
      if (lVar12 == 0) {
        return 0x1c;
      }
      auStack_140[0] = 0;
      lStack_f8 = lVar12;
      if ((*(uint *)(lVar14 + 0x38) >> 2 & 1) != 0) {
        puVar15 = auStack_140;
        uVar19 = FUN_180854ce0(param_1,lVar14,lVar12,uVar21,puVar15);
        if ((int)uVar19 != 0) {
          return uVar19;
        }
      }
      if ((*(int *)(*plStack_c8 + 0x48) < network_system_memory) &&
         (SystemInitializer(&system_ptr_ea98), network_system_memory == -1)) {
        network_system_memory = 0;
        SystemCore_StateController(&system_ptr_ea98);
      }
      uVar27 = uStack_15c;
      if (*(uint *)(lVar14 + 0xa0) != network_system_memory) {
        puVar13 = (int32_t *)MemoryCacheController0();
        uVar7 = auStack_140[0];
        plVar17 = (int64_t *)(param_1 + 0x70);
        *(int32_t *)(param_1 + 0x148) = *puVar13;
        if (((int64_t *)*plVar17 == plVar17) && (*(int64_t **)(param_1 + 0x78) == plVar17)) {
          uVar19 = *(uint64_t *)(param_1 + 0x28);
          puStack_148 = *(uint64_t **)(param_1 + 0x38);
        }
        else {
          uVar19 = *(uint64_t *)(*(int64_t *)(param_1 + 0x78) + 0x10);
          puStack_148 = *(uint64_t **)(*(int64_t *)(param_1 + 0x78) + 0x20);
        }
        if (puStack_148 != (uint64_t *)0x0) {
          *(int *)(puStack_148 + 2) = (int)puStack_148[2] + 1;
        }
        if (uVar26 < uVar19) {
          if (puStack_148 == (uint64_t *)0x0) {
            return 0x1c;
          }
          puVar11 = puStack_148 + 2;
          *(int *)puVar11 = (int)*puVar11 + -1;
          iVar9 = (int)*puVar11;
          puVar11 = puStack_148;
          goto joined_r0x0001808591a3;
        }
        *(int8_t *)(param_1 + 0x13c) = 0;
        puStack_130 = (uint64_t *)0x0;
        puVar13 = (int32_t *)MemoryCacheController0();
        in_stack_fffffffffffffe78 = &puStack_130;
        uVar7 = FUN_18085c4b0(param_1,lVar14,*puVar13,uVar7,in_stack_fffffffffffffe78);
        puVar11 = puStack_130;
        uVar19 = (uint64_t)uVar7;
        if (uVar7 == 0) {
          uStack_118 = uVar21;
          uStack_114 = 4;
          puStack_110 = puStack_130;
          if (puStack_130 != (uint64_t *)0x0) {
            *(int *)(puStack_130 + 2) = (int)puStack_130[2] + 1;
          }
          uStack_120 = uVar26;
          uVar7 = FUN_180859210(param_1 + 0x70,&uStack_120);
          uVar19 = (uint64_t)uVar7;
          if (puVar11 != (uint64_t *)0x0) {
            puVar2 = puVar11 + 2;
            *(int *)puVar2 = (int)*puVar2 + -1;
            if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar11,&rendering_buffer_2208_ptr,0x76,1);
            }
          }
        }
        if (puStack_148 != (uint64_t *)0x0) {
          puVar11 = puStack_148 + 2;
          *(int *)puVar11 = (int)*puVar11 + -1;
          if ((int)*puVar11 == 0) {
                    // WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puStack_148,&rendering_buffer_2208_ptr,0x76,1)
            ;
          }
        }
        if ((int)uVar19 != 0) {
          return uVar19;
        }
        uStack_128 = (uint64_t)uVar21;
        uStack_e8 = uVar21;
        if (lStack_98 != 0) {
          lVar14 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),lStack_98 + 0x20);
          *(int32_t *)(param_1 + 0x154) = *(int32_t *)(lVar14 + 0x20);
          *(int8_t *)(param_1 + 0x13f) = 1;
          if ((uint64_t)*(uint *)(lStack_f8 + 0x20) + (uint64_t)auStack_140[0] < 0x100000000) {
            uStack_158 = auStack_140[0] + *(uint *)(lStack_f8 + 0x20);
          }
          else {
            uStack_158 = 0xffffffff;
          }
          in_stack_fffffffffffffe78 =
               (uint64_t **)((uint64_t)in_stack_fffffffffffffe78 & 0xffffffffffffff00);
          uVar19 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),uVar26,
                                 *(int64_t *)(param_1 + 0x110) + 0x48,1,in_stack_fffffffffffffe78);
          if ((int)uVar19 != 0) {
            return uVar19;
          }
          uVar19 = FUN_18085c6f0(param_1,uVar26,&uStack_158,0);
          if ((int)uVar19 != 0) {
            return uVar19;
          }
        }
        goto LAB_180858c20;
      }
      uVar8 = 0xffffffff;
      if ((uint64_t)auStack_140[0] + (uint64_t)*(uint *)(lVar12 + 0x20) < 0x100000000) {
        uVar8 = auStack_140[0] + *(uint *)(lVar12 + 0x20);
      }
      in_stack_fffffffffffffe78 = (uint64_t **)((uint64_t)puVar15 & 0xffffffffffffff00);
      uStack_158 = uVar8;
      uVar19 = FUN_18085f8d0(*(uint64_t *)(param_1 + 0x160),uVar26,
                             *(int64_t *)(param_1 + 0x110) + 0x48,1,in_stack_fffffffffffffe78);
      if ((int)uVar19 != 0) {
        return uVar19;
      }
      uVar19 = FUN_18085c6f0(param_1,uVar26,&uStack_158,0);
      if ((int)uVar19 != 0) {
        return uVar19;
      }
      uStack_128 = (uint64_t)uVar8;
      *(uint *)(param_1 + 8) = uVar8;
      *(int32_t *)(param_1 + 0x138) = 0xffffffff;
      uStack_e8 = uVar8;
      if ((iStack_164 < 0x65) && (iStack_108 < 0x1f)) {
        uVar19 = FUN_180854810(param_1,uVar26,uVar8,0);
        if ((int)uVar19 != 0) {
          return uVar19;
        }
        plVar17 = (int64_t *)(param_1 + 0x70);
      }
      else {
        uVar27 = 0xffffffff;
        if ((uint64_t)uVar8 + (uint64_t)uStack_15c < 0x100000000) {
          uVar27 = uStack_15c + uVar8;
        }
        uVar7 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
        if (uVar27 < uVar8) {
          uVar27 = uVar8 - uVar27;
          if (uVar7 != 48000) {
            uVar27 = (uint)(((uint64_t)uVar27 * (uint64_t)uVar7) / 48000);
          }
          uVar19 = -(uint64_t)uVar27;
        }
        else {
          uVar27 = uVar27 - uVar8;
          if (uVar7 != 48000) {
            uVar27 = (uint)(((uint64_t)uVar27 * (uint64_t)uVar7) / 48000);
          }
          uVar19 = (uint64_t)uVar27;
        }
        if (uVar19 + uVar26 < uVar26) {
          return 0x1c;
        }
        plVar17 = (int64_t *)(param_1 + 0x70);
        if (((int64_t *)*plVar17 == plVar17) && (*(int64_t **)(param_1 + 0x78) == plVar17)) {
          uVar16 = *(uint64_t *)(param_1 + 0x28);
          puVar11 = *(uint64_t **)(param_1 + 0x38);
        }
        else {
          uVar16 = *(uint64_t *)(*(int64_t *)(param_1 + 0x78) + 0x10);
          puVar11 = *(uint64_t **)(*(int64_t *)(param_1 + 0x78) + 0x20);
        }
        if (puVar11 != (uint64_t *)0x0) {
          *(int *)(puVar11 + 2) = (int)puVar11[2] + 1;
        }
        if (uVar26 < uVar16) {
LAB_1808591d6:
          if (puVar11 == (uint64_t *)0x0) {
            return 0x1c;
          }
          puVar2 = puVar11 + 2;
          *(int *)puVar2 = (int)*puVar2 + -1;
          iVar9 = (int)*puVar2;
joined_r0x0001808591a3:
          if (iVar9 != 0) {
            return 0x1c;
          }
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar11,&rendering_buffer_2208_ptr,0x76,1);
        }
        *(int8_t *)(param_1 + 0x13c) = 0;
        uStack_114 = 2;
        puStack_110 = (uint64_t *)0x0;
        uStack_120 = uVar26;
        uStack_118 = uVar8;
        uVar27 = FUN_180859210(plVar17,&uStack_120);
        if (uVar27 == 0) {
          uStack_114 = 3;
          puStack_110 = (uint64_t *)0x0;
          uStack_120 = uVar19 + uVar26;
          uStack_118 = uVar8;
          uVar27 = FUN_180859210(plVar17,&uStack_120);
          if (uVar27 != 0) goto LAB_180858e04;
          if (puVar11 != (uint64_t *)0x0) {
            puVar2 = puVar11 + 2;
            *(int *)puVar2 = (int)*puVar2 + -1;
            if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar11,&rendering_buffer_2208_ptr,0x76,1);
            }
          }
        }
        else {
LAB_180858e04:
          if (puVar11 != (uint64_t *)0x0) {
            puVar2 = puVar11 + 2;
            *(int *)puVar2 = (int)*puVar2 + -1;
            if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
              SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar11,&rendering_buffer_2208_ptr,0x76,1);
            }
          }
          if (uVar27 != 0) {
            return (uint64_t)uVar27;
          }
        }
        puVar15 = (uint *)MemoryCacheController0();
        plVar17 = (int64_t *)(param_1 + 0x70);
        uVar27 = *puVar15;
        uStack_15c = uVar27;
      }
      goto LAB_1808580a0;
    }
    bVar29 = lStack_a8 != 0;
    if (bVar29) {
      uVar7 = *(uint *)(lStack_a8 + 0x10);
      uStack_134 = uVar7;
    }
    bVar30 = *(int *)(param_1 + 0xc) != 2;
    lVar14 = (uint64_t)uVar33 << 8;
    uVar24 = CONCAT71(uVar32,bVar30);
    uVar10 = CONCAT71(uVar31,1);
    uVar19 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(int64_t *)(param_1 + 0x110) + 0x48,
                           uVar10,uVar24,lVar14);
    if ((int)uVar19 != 0) {
      return uVar19;
    }
    in_stack_fffffffffffffe88 = CONCAT71((int7)((uint64_t)lVar14 >> 8),(char)uVar19);
    in_stack_fffffffffffffe80 = (int *)CONCAT71((int7)((uint64_t)uVar24 >> 8),bVar30);
    in_stack_fffffffffffffe78 = (uint64_t **)CONCAT71((int7)((uint64_t)uVar10 >> 8),(char)uVar19);
    uVar19 = FUN_18085acd0(param_1,&uStack_f0,&uStack_138,*(int64_t *)(param_1 + 0x110) + 0x38,
                           in_stack_fffffffffffffe78,in_stack_fffffffffffffe80,
                           in_stack_fffffffffffffe88);
    if ((int)uVar19 != 0) {
      return uVar19;
    }
    *(uint *)(param_1 + 8) = uVar7;
    *(int32_t *)(param_1 + 0xc) = 2;
    if ((*(int *)(lStack_c0 + 0x48) < network_system_memory) &&
       (SystemInitializer(&system_ptr_ea98), network_system_memory == -1)) {
      network_system_memory = 0;
      SystemCore_StateController(&system_ptr_ea98);
    }
    uVar27 = network_system_memory;
    plVar17 = (int64_t *)(param_1 + 0x70);
    if (bVar29) {
      uVar21 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
      uVar6 = (uint)uStack_128;
      if (uVar7 < uVar6) {
        uVar19 = (uint64_t)(uVar6 - uVar7);
        if (uVar21 != 48000) {
          uVar19 = (uVar19 * uVar21) / 48000;
        }
        uVar19 = -(uVar19 & 0xffffffff);
      }
      else {
        uVar6 = uVar7 - uVar6;
        if (uVar21 != 48000) {
          uVar6 = (uint)(((uint64_t)uVar6 * (uint64_t)uVar21) / 48000);
        }
        uVar19 = (uint64_t)uVar6;
      }
      uVar19 = uVar19 + uVar26;
      plVar17 = (int64_t *)(*(int64_t *)(param_1 + 0x160) + 0x380);
      lVar14 = *plVar17 + -0x20;
      if (*plVar17 == 0) {
        lVar14 = 0;
      }
      if (lVar14 == 0) {
        plVar22 = (int64_t *)0x0;
      }
      else {
        plVar22 = (int64_t *)(lVar14 + 0x20);
      }
      if (plVar22 != plVar17) {
        plVar28 = (int64_t *)0x0;
        do {
          plVar18 = plVar22 + -4;
          if (plVar22 == (int64_t *)0x0) {
            plVar18 = plVar28;
          }
          iVar9 = (**(code **)(*plVar18 + 0x88))(plVar18,uVar19);
          uVar7 = uStack_134;
          if ((iVar9 != 0) || (plVar22 == plVar17)) break;
          plVar18 = (int64_t *)(*plVar22 + -0x20);
          if (*plVar22 == 0) {
            plVar18 = plVar28;
          }
          plVar22 = plVar28;
          if (plVar18 != (int64_t *)0x0) {
            plVar22 = plVar18 + 4;
          }
        } while (plVar22 != plVar17);
      }
      uVar16 = FUN_18085f960(*(uint64_t *)(param_1 + 0x160),uVar19);
      if ((int)uVar16 != 0) {
        return uVar16;
      }
      plVar17 = (int64_t *)(param_1 + 0x70);
      if (((int64_t *)*plVar17 == plVar17) && (*(int64_t **)(param_1 + 0x78) == plVar17)) {
        uVar16 = *(uint64_t *)(param_1 + 0x28);
        puVar11 = *(uint64_t **)(param_1 + 0x38);
      }
      else {
        uVar16 = *(uint64_t *)(*(int64_t *)(param_1 + 0x78) + 0x10);
        puVar11 = *(uint64_t **)(*(int64_t *)(param_1 + 0x78) + 0x20);
      }
      if (puVar11 != (uint64_t *)0x0) {
        *(int *)(puVar11 + 2) = (int)puVar11[2] + 1;
      }
      if (uVar19 < uVar16) goto LAB_1808591d6;
      *(int8_t *)(param_1 + 0x13c) = 1;
      puStack_110 = (uint64_t *)0x0;
      uStack_114 = 1;
      uStack_120 = uVar19;
      uStack_118 = uVar7;
      uVar7 = FUN_180859210(param_1 + 0x70,&uStack_120);
      if (puVar11 != (uint64_t *)0x0) {
        puVar2 = puVar11 + 2;
        *(int *)puVar2 = (int)*puVar2 + -1;
        if ((int)*puVar2 == 0) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar11,&rendering_buffer_2208_ptr,0x76,1);
        }
      }
      plVar17 = plStack_b8;
      if (uVar7 != 0) {
        return (uint64_t)uVar7;
      }
    }
    uStack_15c = uVar27;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18085acd0(int64_t param_1,int64_t *param_2,uint *param_3,uint64_t *param_4,char param_5,
             char param_6,int8_t param_7)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t lStack_88;
  uint uStack_80;
  int iStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int8_t uStack_40;
  
  uVar13 = *param_4;
  plVar1 = (int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  do {
    if ((uVar13 < *param_4) || (*param_4 + (int64_t)(int)param_4[1] * 0x18 <= uVar13)) {
      return 0;
    }
    bVar3 = false;
    if ((*(int *)(*plVar1 + 0x48) < network_system_memory) &&
       (SystemInitializer(&system_ptr_ea98), network_system_memory == -1)) {
      network_system_memory = 0;
      SystemCore_StateController(&system_ptr_ea98);
    }
    uVar8 = *(uint *)(uVar13 + 0x10);
    uVar4 = *param_3;
    if ((uVar8 < uVar4) || (uVar9 = uVar8, param_3[1] <= uVar8)) {
      uVar10 = network_system_memory;
      if ((param_6 != '\0') && (uVar8 <= uVar4)) {
        uVar6 = 0xffffffff;
        if ((uint64_t)*(uint *)(uVar13 + 0x14) + (uint64_t)uVar8 < 0x100000000) {
          uVar6 = *(uint *)(uVar13 + 0x14) + uVar8;
        }
        uVar9 = uVar4;
        if (uVar4 < uVar6) goto LAB_18085add0;
      }
    }
    else {
LAB_18085add0:
      bVar3 = true;
      uVar10 = uVar9;
    }
    if (bVar3) {
      if (param_5 == '\0') {
        lVar12 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 1);
        uVar9 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
        if (uVar8 < uVar4) {
          uVar7 = (uint64_t)(uVar4 - uVar8);
          if (uVar9 != 48000) {
            uVar7 = (uVar7 * uVar9) / 48000;
          }
          lVar12 = *param_2 - (uVar7 & 0xffffffff);
        }
        else {
          uVar4 = uVar8 - uVar4;
          if (uVar9 != 48000) {
            uVar4 = (uint)(((uint64_t)uVar4 * (uint64_t)uVar9) / 48000);
          }
          lVar12 = (uint64_t)uVar4 + *param_2;
        }
      }
      lVar2 = *(int64_t *)(param_1 + 0x160);
      iVar11 = -1;
      if ((uint64_t)*(uint *)(uVar13 + 0x14) + (uint64_t)uVar8 < 0x100000000) {
        iVar11 = *(uint *)(uVar13 + 0x14) + uVar8;
      }
      uStack_50 = (**(code **)(*(int64_t *)(lVar2 + 8) + 0x30))(lVar2 + 8);
      uStack_78 = (int32_t)*param_2;
      uStack_74 = *(int32_t *)((int64_t)param_2 + 4);
      uStack_70 = (int32_t)param_2[1];
      uStack_6c = *(int32_t *)((int64_t)param_2 + 0xc);
      uStack_68 = *(uint64_t *)param_3;
      uStack_48 = 0;
      uStack_40 = 0;
      lStack_88 = param_1;
      uStack_80 = uVar10;
      iStack_7c = iVar11;
      lStack_60 = lVar2 + 0x3f8;
      lStack_58 = lVar2 + 0x378;
      uVar5 = FUN_18085e8d0(*(uint64_t *)(param_1 + 0x160),uVar13,&lStack_88,param_5,lVar12,1,
                            param_7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    if ((uint64_t)*(uint *)(uVar13 + 0x10) + (uint64_t)*(uint *)(uVar13 + 0x14) < 0x100000000) {
      uVar8 = *(uint *)(uVar13 + 0x10) + *(uint *)(uVar13 + 0x14);
    }
    else {
      uVar8 = 0xffffffff;
    }
    if ((*param_3 <= uVar8) && (uVar8 < param_3[1])) {
      uVar4 = *(uint *)(param_2 + 1);
      uVar9 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
      if (uVar8 < uVar4) {
        uVar7 = (uint64_t)(uVar4 - uVar8);
        if (uVar9 != 48000) {
          uVar7 = (uVar7 * uVar9) / 48000;
        }
        lVar12 = *param_2 - (uVar7 & 0xffffffff);
      }
      else {
        uVar8 = uVar8 - uVar4;
        if (uVar9 != 48000) {
          uVar8 = (uint)(((uint64_t)uVar8 * (uint64_t)uVar9) / 48000);
        }
        lVar12 = (uint64_t)uVar8 + *param_2;
      }
      uVar5 = FUN_18085f790(*(uint64_t *)(param_1 + 0x160),uVar13,lVar12,param_5,1,param_7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    uVar13 = uVar13 + 0x18;
  } while( true );
}



uint64_t
FUN_18085b050(int64_t param_1,uint64_t param_2,uint *param_3,uint *param_4,uint *param_5,
             int64_t param_6,int8_t param_7,int8_t param_8)

{
  uint *puVar1;
  int8_t uVar2;
  int8_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  
  uVar3 = param_8;
  uVar2 = param_7;
  puVar1 = param_5;
  uVar7 = 0xffffffff;
  iVar4 = -1;
  uVar8 = 0xffffffff;
  if ((uint64_t)*param_4 + (uint64_t)*param_5 < 0x100000000) {
    uVar8 = (uint64_t)(*param_5 + *param_4);
  }
  param_5._0_4_ = (int)uVar8;
  if (uVar8 + *param_3 < 0x100000000) {
    iVar4 = *param_3 + (int)param_5;
  }
  param_5._4_4_ = iVar4;
  uVar5 = FUN_18085acd0(param_1,param_2,&param_5,*(int64_t *)(param_1 + 0x110) + 0x48,1,param_8,
                        param_7);
  if ((((int)uVar5 == 0) &&
      (uVar5 = FUN_18085acd0(param_1,param_2,&param_5,*(int64_t *)(param_1 + 0x110) + 0x38,
                             (char)uVar5,uVar3,uVar2), (int)uVar5 == 0)) &&
     (uVar5 = FUN_18085b200(param_1,&param_5,param_2), (int)uVar5 == 0)) {
    *(int32_t *)(param_1 + 0xc) = 2;
    if ((uint64_t)*puVar1 + (uint64_t)*param_3 < 0x100000000) {
      uVar7 = *param_3 + *puVar1;
    }
    *puVar1 = uVar7;
    if (param_6 != 0) {
      lVar6 = func_0x00018084d0b0(*(uint64_t *)(param_1 + 0x110),param_6 + 0x20);
      if (lVar6 == 0) {
        return 0x1c;
      }
      func_0x00018085c9a0(param_1,&param_5,param_5._4_4_,param_2);
      uVar5 = FUN_18085c5b0(param_1,CONCAT44(param_5._4_4_,(int)param_5),lVar6 + 0x20,uVar2);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *puVar1 = 0;
      *param_4 = *(uint *)(lVar6 + 0x20);
    }
    uVar5 = 0;
  }
  return uVar5;
}



uint64_t FUN_18085b200(int64_t param_1,uint *param_2,int64_t *param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar11;
  uint uVar12;
  int64_t lStackX_8;
  
  if ((*(int *)(*(int64_t *)(param_1 + 0x110) + 0x80) != 0) ||
     (*(int *)(*(int64_t *)(param_1 + 0x110) + 0x90) != 0)) {
    uVar4 = func_0x0001808601d0(*(uint64_t *)(param_1 + 0x160));
    lStackX_8 = *(int64_t *)(param_1 + 0x110);
    if (((uVar4 >> 0xb & 1) != 0) && (iVar10 = 0, 0 < *(int *)(lStackX_8 + 0x80))) {
      lVar11 = 0;
      do {
        lVar8 = *(int64_t *)(lStackX_8 + 0x78);
        uVar6 = *(uint *)(lVar8 + 0x20 + lVar11);
        if (((*param_2 <= uVar6) && (uVar6 < param_2[1])) && (*(int *)(lVar8 + 0x18 + lVar11) != 0))
        {
          uVar1 = *(uint *)(param_3 + 1);
          uVar12 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
          if (uVar6 < uVar1) {
            uVar9 = (uint64_t)(uVar1 - uVar6);
            if (uVar12 != 48000) {
              uVar9 = (uVar9 * uVar12) / 48000;
            }
            lVar7 = *param_3 - (uVar9 & 0xffffffff);
          }
          else {
            uVar6 = uVar6 - uVar1;
            if (uVar12 != 48000) {
              uVar6 = (uint)(((uint64_t)uVar6 * (uint64_t)uVar12) / 48000);
            }
            lVar7 = (uint64_t)uVar6 + *param_3;
          }
          FUN_180854610(param_1,lVar7,*(int32_t *)(lVar8 + 0x20 + (int64_t)iVar10 * 0x28),0,
                        iVar10,0);
        }
        iVar10 = iVar10 + 1;
        lVar11 = lVar11 + 0x28;
      } while (iVar10 < *(int *)(lStackX_8 + 0x80));
      lStackX_8 = *(int64_t *)(param_1 + 0x110);
    }
    uVar6 = 0x1000;
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x160) + 0x350) != 0) {
      uVar6 = 0x40000;
    }
    if (((uVar4 & uVar6) != 0) && (*(int *)(lStackX_8 + 0x90) != 0)) {
      do {
        iVar10 = *(int *)(param_1 + 0x138);
        uVar4 = param_2[1];
        uVar6 = uVar4;
        if (iVar10 + 1 < *(int *)(lStackX_8 + 0x90)) {
          uVar6 = *(uint *)((int64_t)iVar10 * 0x20 + 0x38 + *(int64_t *)(lStackX_8 + 0x88));
        }
        if (-1 < iVar10) {
          uVar1 = *param_2;
          lVar11 = (int64_t)iVar10 * 0x20 + *(int64_t *)(lStackX_8 + 0x88);
          if (uVar1 < uVar6) {
            if (*(float *)(lVar11 + 0x1c) == 0.0) {
              return 0x1c;
            }
            uVar12 = *(uint *)(lVar11 + 0x18);
            if (uVar1 <= uVar12) {
              uVar1 = uVar12;
            }
            if (uVar6 <= uVar4) {
              uVar4 = uVar6;
            }
            fVar3 = 1.152e+07 / ((float)*(int *)(lVar11 + 0x14) * *(float *)(lVar11 + 0x1c));
            iVar10 = (int)((float)(uVar1 - uVar12) / fVar3);
            do {
              uVar12 = (int)((float)iVar10 * fVar3 + 0.5) + *(int *)(lVar11 + 0x18);
              if (uVar1 <= uVar12) {
                if (uVar4 <= uVar12) break;
                uVar5 = *(uint *)(param_3 + 1);
                uVar2 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
                if (uVar12 < uVar5) {
                  uVar9 = (uint64_t)(uVar5 - uVar12);
                  if (uVar2 != 48000) {
                    uVar9 = (uVar9 * uVar2) / 48000;
                  }
                  lVar8 = *param_3 - (uVar9 & 0xffffffff);
                }
                else {
                  uVar5 = uVar12 - uVar5;
                  if (uVar2 != 48000) {
                    uVar5 = (uint)(((uint64_t)uVar5 * (uint64_t)uVar2) / 48000);
                  }
                  lVar8 = (uint64_t)uVar5 + *param_3;
                }
                FUN_180854610(param_1,lVar8,uVar12,1,*(int32_t *)(param_1 + 0x138),iVar10);
              }
              iVar10 = iVar10 + 1;
            } while( true );
          }
        }
        if (param_2[1] <= uVar6) {
          return 0;
        }
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      } while( true );
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18085b580(int64_t param_1,uint param_2,int64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  int8_t uVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int iVar14;
  int64_t lVar15;
  uint uStackX_8;
  int iStackX_c;
  uint auStackX_10 [2];
  uint *in_stack_ffffffffffffff88;
  int64_t in_stack_ffffffffffffff90;
  uint64_t uVar16;
  int64_t lStack_50;
  int iStack_48;
  
  plVar1 = (int64_t *)(param_1 + 0x70);
  uVar12 = (uint64_t)param_2;
  if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
    lVar13 = *(int64_t *)(param_1 + 0x28);
    lVar15 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x10);
    lVar15 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
  }
  if (lVar15 != 0) {
    *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
  }
  lVar7 = *(int64_t *)(param_1 + 0x140);
  iVar14 = -1;
  iVar10 = *(int *)(lVar7 + 0xa0);
  iVar4 = *(int *)(lVar7 + 0xa8);
  auStackX_10[0] = param_2;
  if ((*(byte *)(param_1 + 0x128) & 2) == 0) {
    in_stack_ffffffffffffff88 = (uint *)(param_1 + 0x14c);
    uVar11 = (uint64_t)(*(int *)(param_1 + 0x148) - *in_stack_ffffffffffffff88);
    uVar5 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar5 != 48000) {
      uVar11 = (uVar11 * uVar5) / 48000;
    }
    lStack_50 = (uVar11 & 0xffffffff) + lVar13;
    iStack_48 = -1;
    if ((uint64_t)*(uint *)(lVar15 + 8) + (uint64_t)*(uint *)(param_1 + 0x154) < 0x100000000) {
      iStack_48 = *(uint *)(param_1 + 0x154) + *(uint *)(lVar15 + 8);
    }
    if ((*(int *)(param_1 + 0xc) == 2) && (*(char *)(param_1 + 0x13d) == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    in_stack_ffffffffffffff90 = param_3;
    iVar9 = FUN_18085b050(param_1,&lStack_50,auStackX_10,param_1 + 0x154,in_stack_ffffffffffffff88,
                          param_3,1,uVar8);
    if (iVar9 != 0) goto LAB_18085b8b5;
    *(bool *)(param_1 + 0x13d) = param_3 != 0;
  }
  uVar5 = *(uint *)(param_1 + 0x148);
  if ((uint)(iVar10 - iVar4) <= uVar5) {
    in_stack_ffffffffffffff88 = (uint *)(param_1 + 0x150);
    uVar6 = *in_stack_ffffffffffffff88;
    uVar11 = (uint64_t)(uVar5 - uVar6);
    uVar5 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar5 != 48000) {
      uVar11 = (uVar11 * uVar5) / 48000;
    }
    uVar5 = *(uint *)(param_1 + 0x158);
    lStack_50 = (uVar11 & 0xffffffff) + lVar13;
    iStack_48 = -1;
    if ((uint64_t)uVar5 + (uint64_t)*(uint *)(lVar15 + 8) < 0x100000000) {
      iStack_48 = uVar5 + *(uint *)(lVar15 + 8);
    }
    if (((*(byte *)(param_1 + 0x128) & 4) == 0) || (*(char *)(param_1 + 0x13e) != '\0')) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    if (param_4 != 0) {
      uVar11 = 0xffffffff;
      if (uVar5 + uVar12 < 0x100000000) {
        uVar11 = (uint64_t)(uVar5 + param_2);
      }
      iVar10 = -1;
      if (uVar11 + uVar6 < 0x100000000) {
        iVar10 = (int)uVar11 + uVar6;
      }
      *(int *)(param_1 + 0x15c) = iVar10;
    }
    in_stack_ffffffffffffff90 = param_4;
    iVar9 = FUN_18085b050(param_1,&lStack_50,auStackX_10,param_1 + 0x158,in_stack_ffffffffffffff88,
                          param_4,0,uVar8);
    if (iVar9 != 0) goto LAB_18085b8b5;
    uVar5 = *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 4;
    *(bool *)(param_1 + 0x13e) = param_4 != 0;
  }
  iStack_48 = *(int *)(lVar15 + 8);
  iStackX_c = -1;
  if (uVar5 + uVar12 < 0x100000000) {
    iStackX_c = uVar5 + param_2;
  }
  bVar3 = *(byte *)(param_1 + 0x128);
  uVar16 = CONCAT71((int7)((uint64_t)in_stack_ffffffffffffff90 >> 8),~bVar3) & 0xffffffffffffff01;
  uVar11 = CONCAT71((int7)((uint64_t)in_stack_ffffffffffffff88 >> 8),1);
  uStackX_8 = uVar5;
  lStack_50 = lVar13;
  iVar9 = FUN_18085acd0(param_1,&lStack_50,&uStackX_8,lVar7 + 0x80,uVar11,uVar16,0);
  if (iVar9 == 0) {
    iVar9 = FUN_18085acd0(param_1,&lStack_50,&uStackX_8,lVar7 + 0x90,uVar11 & 0xffffffffffffff00,
                          CONCAT71((int7)(uVar16 >> 8),~bVar3) & 0xffffffffffffff01,0);
    if (iVar9 != 0) goto LAB_18085b88c;
  }
  else {
LAB_18085b88c:
    if (iVar9 != 0) goto LAB_18085b8b5;
  }
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 1;
  if (uVar12 + *(uint *)(param_1 + 0x148) < 0x100000000) {
    iVar14 = *(uint *)(param_1 + 0x148) + param_2;
  }
  *(int *)(param_1 + 0x148) = iVar14;
  iVar9 = 0;
LAB_18085b8b5:
  piVar2 = (int *)(lVar15 + 0x10);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar15,&rendering_buffer_2208_ptr,0x76,1);
  }
  return iVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18085b595(int64_t param_1,uint param_2,int64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int64_t in_RAX;
  uint64_t uVar9;
  uint64_t unaff_RBX;
  uint64_t uVar10;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar11;
  uint64_t unaff_RDI;
  int iVar12;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t lVar13;
  uint *in_stack_00000020;
  int8_t uStack0000000000000030;
  int64_t lStack0000000000000040;
  int64_t lStack0000000000000048;
  int iStack0000000000000050;
  uint uStack00000000000000a0;
  int iStack00000000000000a4;
  int64_t in_stack_000000b8;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R13;
  plVar1 = (int64_t *)(param_1 + 0x70);
  uVar10 = (uint64_t)param_2;
  if (((int64_t *)*plVar1 == plVar1) && (*(int64_t **)(param_1 + 0x78) == plVar1)) {
    lVar11 = *(int64_t *)(param_1 + 0x28);
    lVar13 = *(int64_t *)(param_1 + 0x38);
  }
  else {
    lVar11 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x10);
    lVar13 = *(int64_t *)(*(int64_t *)(param_1 + 0x78) + 0x20);
  }
  if (lVar13 != 0) {
    *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + 1;
  }
  lStack0000000000000040 = *(int64_t *)(param_1 + 0x140);
  iVar12 = -1;
  iVar8 = *(int *)(lStack0000000000000040 + 0xa0);
  iVar3 = *(int *)(lStack0000000000000040 + 0xa8);
  if ((*(byte *)(param_1 + 0x128) & 2) == 0) {
    in_stack_00000020 = (uint *)(param_1 + 0x14c);
    uVar9 = (uint64_t)(*(int *)(param_1 + 0x148) - *in_stack_00000020);
    uVar4 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar4 != 48000) {
      uVar9 = (uVar9 * uVar4) / 48000;
    }
    lStack0000000000000048 = (uVar9 & 0xffffffff) + lVar11;
    iStack0000000000000050 = -1;
    if ((uint64_t)*(uint *)(lVar13 + 8) + (uint64_t)*(uint *)(param_1 + 0x154) < 0x100000000) {
      iStack0000000000000050 = *(uint *)(param_1 + 0x154) + *(uint *)(lVar13 + 8);
    }
    uStack0000000000000030 = 1;
    iVar7 = FUN_18085b050(param_1,&stack0x00000048,&stack0x000000a8,param_1 + 0x154,
                          in_stack_00000020);
    if (iVar7 != 0) goto LAB_18085b8b5;
    *(bool *)(param_1 + 0x13d) = param_3 != 0;
    param_4 = in_stack_000000b8;
  }
  uVar4 = *(uint *)(param_1 + 0x148);
  if ((uint)(iVar8 - iVar3) <= uVar4) {
    in_stack_00000020 = (uint *)(param_1 + 0x150);
    uVar5 = *in_stack_00000020;
    uVar9 = (uint64_t)(uVar4 - uVar5);
    uVar4 = *(uint *)(*(int64_t *)(param_1 + 0x168) + 0x774);
    if (uVar4 != 48000) {
      uVar9 = (uVar9 * uVar4) / 48000;
    }
    uVar4 = *(uint *)(param_1 + 0x158);
    lStack0000000000000048 = (uVar9 & 0xffffffff) + lVar11;
    iStack0000000000000050 = -1;
    if ((uint64_t)uVar4 + (uint64_t)*(uint *)(lVar13 + 8) < 0x100000000) {
      iStack0000000000000050 = uVar4 + *(uint *)(lVar13 + 8);
    }
    if (param_4 != 0) {
      uVar9 = 0xffffffff;
      if (uVar4 + uVar10 < 0x100000000) {
        uVar9 = (uint64_t)(uVar4 + param_2);
      }
      iVar8 = -1;
      if (uVar9 + uVar5 < 0x100000000) {
        iVar8 = (int)uVar9 + uVar5;
      }
      *(int *)(param_1 + 0x15c) = iVar8;
    }
    uStack0000000000000030 = 0;
    iVar7 = FUN_18085b050(param_1,&stack0x00000048,&stack0x000000a8,param_1 + 0x158,
                          in_stack_00000020);
    if (iVar7 != 0) goto LAB_18085b8b5;
    uVar4 = *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 4;
    *(bool *)(param_1 + 0x13e) = in_stack_000000b8 != 0;
  }
  lVar6 = lStack0000000000000040;
  iStack0000000000000050 = *(int *)(lVar13 + 8);
  iStack00000000000000a4 = -1;
  if (uVar4 + uVar10 < 0x100000000) {
    iStack00000000000000a4 = uVar4 + param_2;
  }
  uStack0000000000000030 = 0;
  uVar9 = CONCAT71((int7)((uint64_t)in_stack_00000020 >> 8),1);
  lStack0000000000000048 = lVar11;
  uStack00000000000000a0 = uVar4;
  iVar7 = FUN_18085acd0(param_1,&stack0x00000048,&stack0x000000a0,lStack0000000000000040 + 0x80,
                        uVar9);
  if (iVar7 == 0) {
    uStack0000000000000030 = 0;
    iVar7 = FUN_18085acd0(param_1,&stack0x00000048,&stack0x000000a0,lVar6 + 0x90,
                          uVar9 & 0xffffffffffffff00);
    if (iVar7 != 0) goto LAB_18085b88c;
  }
  else {
LAB_18085b88c:
    if (iVar7 != 0) goto LAB_18085b8b5;
  }
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 1;
  if (uVar10 + *(uint *)(param_1 + 0x148) < 0x100000000) {
    iVar12 = *(uint *)(param_1 + 0x148) + param_2;
  }
  *(int *)(param_1 + 0x148) = iVar12;
  iVar7 = 0;
LAB_18085b8b5:
  piVar2 = (int *)(lVar13 + 0x10);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 != 0) {
    return iVar7;
  }
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar13,&rendering_buffer_2208_ptr,0x76,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





