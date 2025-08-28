#include "TaleWorlds.Native.Split.h"

// 99_part_10_part010.c - 14 个函数

// 函数: void FUN_1806a85e3(int64_t param_1,int64_t *param_2)
void FUN_1806a85e3(int64_t param_1,int64_t *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t in_RAX;
  char *pcVar7;
  int64_t *plVar8;
  byte *pbVar9;
  int32_t *puVar10;
  uint64_t *puVar11;
  uint uVar12;
  uint uVar13;
  uint64_t unaff_RBX;
  byte *pbVar14;
  uint64_t uVar15;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  byte *pbVar17;
  int64_t lVar18;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  byte *pbVar19;
  bool bVar20;
  uint64_t uVar16;
  
  *(uint64_t *)(in_RAX + -0x20) = unaff_RBX;
  pbVar9 = (byte *)0x0;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x40) = unaff_R14;
  if ((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(param_1 + 0x7c) != 0)) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(param_1 + 0x60),0xffffffff,*(int *)(param_1 + 0x6c) * 4);
  }
  if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(param_1 + 0x98),0xffffffff,*(int *)(param_1 + 0xa4) * 4);
  }
  lVar18 = *param_2;
  *(int32_t *)(unaff_RBP + 0x67) = 4;
  (**(code **)(lVar18 + 8))(param_2,unaff_RBP + -0x11,unaff_RBP + 0x67);
  lVar18 = *param_2;
  *(int32_t *)(unaff_RBP + 0x67) = 4;
  (**(code **)(lVar18 + 8))(param_2,param_1 + 0x40,unaff_RBP + 0x67);
  *(uint64_t *)(unaff_RBP + -1) = 0;
  *(uint64_t *)(unaff_RBP + 7) = 0;
  *(int32_t *)(unaff_RBP + -0x15) = 0;
  pbVar14 = pbVar9;
  pbVar17 = pbVar9;
  pbVar19 = pbVar9;
  if (*(int *)(unaff_RBP + -0x11) != 0) {
LAB_1806a8770:
    lVar18 = *param_2;
    *(int32_t *)(unaff_RBP + 0x67) = 4;
    (**(code **)(lVar18 + 8))(param_2,unaff_RBP + -0xd,unaff_RBP + 0x67);
    lVar18 = *param_2;
    *(int32_t *)(unaff_RBP + 0x67) = 4;
    (**(code **)(lVar18 + 8))(param_2,unaff_RBP + -0x19,unaff_RBP + 0x67);
    uVar12 = *(uint *)(unaff_RBP + -0x19);
    uVar13 = (uint)pbVar14;
    bVar20 = uVar13 < uVar12;
    if (bVar20) {
      *(int8_t *)(unaff_RBP + 0x67) = 0;
      FUN_1806a6600(unaff_RBP + -1,uVar12,unaff_RBP + 0x67);
      uVar12 = *(uint *)(unaff_RBP + -0x19);
      bVar20 = uVar13 < uVar12;
      pbVar19 = *(byte **)(unaff_RBP + -1);
    }
    if (bVar20) {
      uVar13 = uVar12;
    }
    lVar18 = *param_2;
    *(uint *)(unaff_RBP + -9) = uVar13;
    (**(code **)(lVar18 + 8))(param_2,pbVar19,unaff_RBP + -0x19);
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar12 = 0x1505;
      bVar1 = *pbVar19;
      pbVar14 = pbVar19;
      while (bVar1 != 0) {
        pbVar14 = pbVar14 + 1;
        uVar12 = uVar12 * 0x21 ^ (uint)bVar1;
        bVar1 = *pbVar14;
      }
      uVar12 = *(uint *)(*(int64_t *)(param_1 + 0x20) +
                        (uint64_t)(*(int *)(param_1 + 0x2c) - 1U & uVar12) * 4);
      if (uVar12 != 0xffffffff) {
        do {
          uVar15 = (uint64_t)uVar12;
          pcVar7 = *(char **)(*(int64_t *)(param_1 + 0x10) + uVar15 * 0x10);
          lVar18 = (int64_t)pbVar19 - (int64_t)pcVar7;
          do {
            cVar2 = *pcVar7;
            cVar3 = pcVar7[lVar18];
            if (cVar2 != cVar3) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) goto LAB_1806a8897;
          uVar12 = *(uint *)(*(int64_t *)(param_1 + 0x18) + uVar15 * 4);
          if (uVar12 == 0xffffffff) break;
        } while( true );
      }
    }
    goto LAB_1806a8868;
  }
FUN_1806a8971:
  if (((((uint64_t)pbVar9 & 0x7fffffff) != 0) && (-1 < (int)pbVar9)) && (pbVar19 != (byte *)0x0)) {
    plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar8 + 0x10))(plVar8,pbVar19);
  }
  return;
LAB_1806a8897:
  if ((uVar12 == 0xffffffff) ||
     (lVar18 = uVar15 * 0x10 + *(int64_t *)(param_1 + 0x10), lVar18 == 0)) {
LAB_1806a8868:
    uVar15 = 0xffffffffffffffff;
    pbVar14 = &system_buffer_ptr;
    if (pbVar19 != (byte *)0x0) {
      pbVar14 = pbVar19;
    }
    do {
      uVar16 = uVar15;
      uVar15 = uVar16 + 1;
    } while (pbVar14[uVar15] != 0);
    iVar6 = (int)uVar16 + 2;
    if (iVar6 != 0) {
      plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      pbVar9 = (byte *)(**(code **)(*plVar8 + 8))(plVar8,iVar6,&ui_system_data_1832_ptr,&processed_var_4688_ptr,0x70);
    }
                    // WARNING: Subroutine does not return
    memcpy(pbVar9,pbVar14,uVar15 & 0xffffffff);
  }
  uVar5 = *(uint64_t *)(lVar18 + 8);
  uVar4 = *(int32_t *)(unaff_RBP + -0xd);
  *(int32_t *)(unaff_RBP + 0x67) = uVar4;
  puVar10 = (int32_t *)FUN_1806aad10(param_1 + 0x48,unaff_RBP + 0x67,unaff_RBP + 0x77);
  if (*(char *)(unaff_RBP + 0x77) == '\0') {
    *puVar10 = uVar4;
    *(uint64_t *)(puVar10 + 2) = uVar5;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = uVar5;
  puVar11 = (uint64_t *)FUN_1806a45c0(param_1 + 0x80,unaff_RBP + 0x67,unaff_RBP + 0x7f);
  if (*(char *)(unaff_RBP + 0x7f) == '\0') {
    *puVar11 = uVar5;
    *(int32_t *)(puVar11 + 1) = uVar4;
  }
  uVar12 = (int)pbVar17 + 1;
  *(uint *)(unaff_RBP + -0x15) = uVar12;
  pbVar14 = (byte *)(uint64_t)*(uint *)(unaff_RBP + -9);
  pbVar17 = (byte *)(uint64_t)uVar12;
  if (*(uint *)(unaff_RBP + -0x11) <= uVar12) goto code_r0x0001806a8968;
  goto LAB_1806a8770;
code_r0x0001806a8968:
  pbVar9 = (byte *)(uint64_t)*(uint *)(unaff_RBP + 0xb);
  goto FUN_1806a8971;
}






// 函数: void FUN_1806a8769(void)
void FUN_1806a8769(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  int32_t *puVar9;
  uint64_t *puVar10;
  uint uVar11;
  uint unaff_EBX;
  uint64_t uVar12;
  int64_t unaff_RBP;
  uint unaff_ESI;
  byte *pbVar14;
  int64_t lVar15;
  byte bVar16;
  uint64_t unaff_R12;
  int64_t *unaff_R13;
  int64_t unaff_R14;
  byte *unaff_R15;
  bool bVar17;
  uint64_t uVar13;
  
LAB_1806a8770:
  lVar15 = *unaff_R13;
  *(int32_t *)(unaff_RBP + 0x67) = 4;
  (**(code **)(lVar15 + 8))();
  lVar15 = *unaff_R13;
  *(int32_t *)(unaff_RBP + 0x67) = 4;
  (**(code **)(lVar15 + 8))();
  uVar11 = *(uint *)(unaff_RBP + -0x19);
  bVar17 = unaff_EBX < uVar11;
  bVar16 = (byte)unaff_R12;
  if (bVar17) {
    *(byte *)(unaff_RBP + 0x67) = bVar16;
    FUN_1806a6600(unaff_RBP + -1,uVar11,unaff_RBP + 0x67);
    uVar11 = *(uint *)(unaff_RBP + -0x19);
    bVar17 = unaff_EBX < uVar11;
    unaff_R15 = *(byte **)(unaff_RBP + -1);
  }
  if (bVar17) {
    unaff_EBX = uVar11;
  }
  lVar15 = *unaff_R13;
  *(uint *)(unaff_RBP + -9) = unaff_EBX;
  (**(code **)(lVar15 + 8))();
  if (*(int *)(unaff_R14 + 0x3c) != (int)unaff_R12) {
    uVar11 = 0x1505;
    bVar1 = *unaff_R15;
    pbVar14 = unaff_R15;
    while (bVar1 != 0) {
      pbVar14 = pbVar14 + 1;
      uVar11 = uVar11 * 0x21 ^ (uint)bVar1;
      bVar1 = *pbVar14;
    }
    uVar11 = *(uint *)(*(int64_t *)(unaff_R14 + 0x20) +
                      (uint64_t)(*(int *)(unaff_R14 + 0x2c) - 1U & uVar11) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        uVar12 = (uint64_t)uVar11;
        pcVar7 = *(char **)(*(int64_t *)(unaff_R14 + 0x10) + uVar12 * 0x10);
        lVar15 = (int64_t)unaff_R15 - (int64_t)pcVar7;
        do {
          cVar2 = *pcVar7;
          cVar3 = pcVar7[lVar15];
          if (cVar2 != cVar3) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        if (cVar2 == cVar3) goto LAB_1806a8897;
        uVar11 = *(uint *)(*(int64_t *)(unaff_R14 + 0x18) + uVar12 * 4);
        if (uVar11 == 0xffffffff) break;
      } while( true );
    }
  }
  goto LAB_1806a8868;
LAB_1806a8897:
  if ((uVar11 == 0xffffffff) ||
     (lVar15 = uVar12 * 0x10 + *(int64_t *)(unaff_R14 + 0x10), lVar15 == 0)) {
LAB_1806a8868:
    uVar12 = 0xffffffffffffffff;
    pbVar14 = &system_buffer_ptr;
    if (unaff_R15 != (byte *)0x0) {
      pbVar14 = unaff_R15;
    }
    do {
      uVar13 = uVar12;
      uVar12 = uVar13 + 1;
    } while (pbVar14[uVar12] != bVar16);
    iVar6 = (int)uVar13 + 2;
    if (iVar6 != 0) {
      plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      unaff_R12 = (**(code **)(*plVar8 + 8))(plVar8,iVar6,&ui_system_data_1832_ptr,&processed_var_4688_ptr,0x70);
    }
                    // WARNING: Subroutine does not return
    memcpy(unaff_R12,pbVar14,uVar12 & 0xffffffff);
  }
  uVar5 = *(uint64_t *)(lVar15 + 8);
  uVar4 = *(int32_t *)(unaff_RBP + -0xd);
  *(int32_t *)(unaff_RBP + 0x67) = uVar4;
  puVar9 = (int32_t *)FUN_1806aad10(unaff_R14 + 0x48,unaff_RBP + 0x67,unaff_RBP + 0x77);
  if (*(byte *)(unaff_RBP + 0x77) == bVar16) {
    *puVar9 = uVar4;
    *(uint64_t *)(puVar9 + 2) = uVar5;
  }
  *(uint64_t *)(unaff_RBP + 0x67) = uVar5;
  puVar10 = (uint64_t *)FUN_1806a45c0(unaff_R14 + 0x80,unaff_RBP + 0x67,unaff_RBP + 0x7f);
  if (*(byte *)(unaff_RBP + 0x7f) == bVar16) {
    *puVar10 = uVar5;
    *(int32_t *)(puVar10 + 1) = uVar4;
  }
  unaff_EBX = *(uint *)(unaff_RBP + -9);
  unaff_ESI = unaff_ESI + 1;
  *(uint *)(unaff_RBP + -0x15) = unaff_ESI;
  if (*(uint *)(unaff_RBP + -0x11) <= unaff_ESI) {
    if ((((*(uint *)(unaff_RBP + 0xb) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBP + 0xb)))
       && (unaff_R15 != (byte *)0x0)) {
      plVar8 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar8 + 0x10))(plVar8,unaff_R15);
    }
    return;
  }
  goto LAB_1806a8770;
}






// 函数: void FUN_1806a8971(void)
void FUN_1806a8971(void)

{
  int64_t *plVar1;
  uint unaff_R12D;
  int64_t unaff_R15;
  
  if ((((unaff_R12D & 0x7fffffff) != 0) && (-1 < (int)unaff_R12D)) && (unaff_R15 != 0)) {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}






// 函数: void FUN_1806a8994(void)
void FUN_1806a8994(void)

{
  int64_t *plVar1;
  int unaff_R12D;
  int64_t unaff_R15;
  
  if ((-1 < unaff_R12D) && (unaff_R15 != 0)) {
    plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}






// 函数: void FUN_1806a89c0(int64_t param_1,int64_t *param_2)
void FUN_1806a89c0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  bool bVar6;
  uint64_t uStackX_8;
  int32_t auStackX_10 [2];
  uint auStackX_18 [2];
  
  FUN_1806b14d0(param_2,param_1 + 8);
  uStackX_8._0_4_ = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x18,&uStackX_8);
  uStackX_8._0_4_ = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x1c,&uStackX_8);
  uStackX_8._0_4_ = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x20,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,4);
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x24,&uStackX_8);
  auStackX_10[0] = 1;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],&uStackX_8,auStackX_10);
  auStackX_10[0] = 1;
  *(bool *)(param_1 + 0x68) = (char)uStackX_8 != '\0';
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],&uStackX_8,auStackX_10);
  bVar6 = (char)uStackX_8 != '\0';
  uStackX_8._0_4_ = 4;
  *(bool *)(param_1 + 0x69) = bVar6;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x28,&uStackX_8);
  uStackX_8._0_4_ = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x2c,&uStackX_8);
  uStackX_8._0_4_ = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x30,&uStackX_8);
  uStackX_8._0_4_ = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x48,&uStackX_8);
  uStackX_8._0_4_ = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x4c,&uStackX_8);
  uStackX_8._0_4_ = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x50,&uStackX_8);
  uStackX_8 = CONCAT44(uStackX_8._4_4_,4);
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],auStackX_10,&uStackX_8);
  uStackX_8 = 0;
  FUN_1806b0eb0(param_1 + 0x70,auStackX_10[0],&uStackX_8);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    do {
      lVar2 = *(int64_t *)(param_1 + 0x70);
      uStackX_8 = CONCAT44(uStackX_8._4_4_,4);
      lVar1 = uVar5 * 8;
      (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],auStackX_18,&uStackX_8);
      if ((int)auStackX_18[0] < 0) {
        uVar3 = 0;
      }
      else if (auStackX_18[0] < *(uint *)(*param_2 + 0x90)) {
        uVar3 = *(uint64_t *)(*(int64_t *)(*param_2 + 0x88) + (uint64_t)auStackX_18[0] * 8);
      }
      else {
        uVar3 = 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      *(uint64_t *)(lVar2 + lVar1) = uVar3;
    } while (uVar4 < *(uint *)(param_1 + 0x78));
  }
  FUN_1806a9880(param_2,param_1 + 0x80);
  FUN_1806a9880(param_2,param_1 + 0x90);
  *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x80);
  *(uint64_t *)(param_1 + 0x40) =
       *(int64_t *)(param_1 + 0x80) + (uint64_t)*(uint *)(param_1 + 0x88) * 8;
  *(int64_t *)(param_1 + 0x58) = *(int64_t *)(param_1 + 0x90);
  *(uint64_t *)(param_1 + 0x60) =
       *(int64_t *)(param_1 + 0x90) + (uint64_t)*(uint *)(param_1 + 0x98) * 8;
  return;
}






// 函数: void FUN_1806a8b5b(void)
void FUN_1806a8b5b(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_R14;
  
  do {
    lVar2 = *(int64_t *)(unaff_R14 + 0x70);
    plVar3 = (int64_t *)unaff_RSI[1];
    *(int32_t *)(unaff_RBP + 0x30) = 4;
    lVar1 = unaff_RBX * 8;
    (**(code **)(*plVar3 + 8))(plVar3,unaff_RBP + 0x40,unaff_RBP + 0x30);
    uVar5 = *(uint *)(unaff_RBP + 0x40);
    if ((int)uVar5 < 0) {
      uVar4 = 0;
    }
    else if (uVar5 < *(uint *)(*unaff_RSI + 0x90)) {
      uVar4 = *(uint64_t *)(*(int64_t *)(*unaff_RSI + 0x88) + (uint64_t)uVar5 * 8);
    }
    else {
      uVar4 = 0;
    }
    uVar5 = (int)unaff_RBX + 1;
    unaff_RBX = (uint64_t)uVar5;
    *(uint64_t *)(lVar2 + lVar1) = uVar4;
  } while (uVar5 < *(uint *)(unaff_R14 + 0x78));
  FUN_1806a9880();
  FUN_1806a9880();
  *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x80);
  *(uint64_t *)(unaff_R14 + 0x40) =
       *(int64_t *)(unaff_R14 + 0x80) + (uint64_t)*(uint *)(unaff_R14 + 0x88) * 8;
  *(int64_t *)(unaff_R14 + 0x58) = *(int64_t *)(unaff_R14 + 0x90);
  *(uint64_t *)(unaff_R14 + 0x60) =
       *(int64_t *)(unaff_R14 + 0x90) + (uint64_t)*(uint *)(unaff_R14 + 0x98) * 8;
  return;
}






// 函数: void FUN_1806a8bb9(void)
void FUN_1806a8bb9(void)

{
  int64_t unaff_R14;
  
  FUN_1806a9880();
  FUN_1806a9880();
  *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x80);
  *(uint64_t *)(unaff_R14 + 0x40) =
       *(int64_t *)(unaff_R14 + 0x80) + (uint64_t)*(uint *)(unaff_R14 + 0x88) * 8;
  *(int64_t *)(unaff_R14 + 0x58) = *(int64_t *)(unaff_R14 + 0x90);
  *(uint64_t *)(unaff_R14 + 0x60) =
       *(int64_t *)(unaff_R14 + 0x90) + (uint64_t)*(uint *)(unaff_R14 + 0x98) * 8;
  return;
}






// 函数: void FUN_1806a8c20(int64_t param_1,int64_t *param_2)
void FUN_1806a8c20(int64_t param_1,int64_t *param_2)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t *puVar3;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [2];
  int32_t auStackX_18 [2];
  void *puStack_38;
  int32_t uStack_30;
  
  FUN_1806b14d0(param_2,param_1 + 8);
  auStackX_8[0] = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x18,auStackX_8);
  auStackX_8[0] = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],auStackX_10,auStackX_8);
  uVar1 = (**(code **)(**(int64_t **)(*param_2 + 0x98) + 0x28))
                    (*(int64_t **)(*param_2 + 0x98),auStackX_10[0]);
  auStackX_8[0] = 4;
  *(uint64_t *)(param_1 + 0x28) = uVar1;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x30,auStackX_8);
  FUN_1806b14d0(param_2,param_1 + 0x38);
  auStackX_8[0] = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],auStackX_10,auStackX_8);
  *(int32_t *)(param_1 + 0x48) = auStackX_10[0];
  auStackX_8[0] = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x4c,auStackX_8);
  auStackX_8[0] = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x50,auStackX_8);
  auStackX_8[0] = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],param_1 + 0x54,auStackX_8);
  auStackX_8[0] = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],auStackX_10,auStackX_8);
  uVar2 = 0;
  puStack_38 = &system_buffer_ptr;
  uStack_30 = 0;
  FUN_1806b1070(param_1 + 0x58,auStackX_10[0],&puStack_38);
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      puVar3 = (uint64_t *)((uint64_t)uVar2 * 0x10 + *(int64_t *)(param_1 + 0x58));
      auStackX_8[0] = 4;
      (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],puVar3 + 1,auStackX_8);
      auStackX_8[0] = 4;
      (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],auStackX_18,auStackX_8);
      uVar1 = (**(code **)(**(int64_t **)(*param_2 + 0x98) + 0x28))
                        (*(int64_t **)(*param_2 + 0x98),auStackX_18[0]);
      uVar2 = uVar2 + 1;
      *puVar3 = uVar1;
    } while (uVar2 < *(uint *)(param_1 + 0x60));
  }
  auStackX_8[0] = 4;
  (**(code **)(*(int64_t *)param_2[1] + 8))((int64_t *)param_2[1],auStackX_10,auStackX_8);
  uVar1 = (**(code **)(**(int64_t **)(*param_2 + 0x98) + 0x28))
                    (*(int64_t **)(*param_2 + 0x98),auStackX_10[0]);
  *(uint64_t *)(param_1 + 0x20) = uVar1;
  return;
}






// 函数: void FUN_1806a8d59(void)
void FUN_1806a8d59(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  uint64_t *puVar4;
  int64_t unaff_R15;
  
  do {
    plVar1 = (int64_t *)unaff_RSI[1];
    puVar4 = (uint64_t *)((uint64_t)unaff_EBX * 0x10 + *(int64_t *)(unaff_R15 + 0x58));
    lVar2 = *plVar1;
    *(int32_t *)(unaff_RBP + 0x30) = 4;
    (**(code **)(lVar2 + 8))(plVar1,puVar4 + 1,unaff_RBP + 0x30);
    plVar1 = (int64_t *)unaff_RSI[1];
    *(int32_t *)(unaff_RBP + 0x30) = 4;
    (**(code **)(*plVar1 + 8))(plVar1,unaff_RBP + 0x40,unaff_RBP + 0x30);
    uVar3 = (**(code **)(**(int64_t **)(*unaff_RSI + 0x98) + 0x28))
                      (*(int64_t **)(*unaff_RSI + 0x98),*(int32_t *)(unaff_RBP + 0x40));
    unaff_EBX = unaff_EBX + 1;
    *puVar4 = uVar3;
  } while (unaff_EBX < *(uint *)(unaff_R15 + 0x60));
  plVar1 = (int64_t *)unaff_RSI[1];
  *(int32_t *)(unaff_RBP + 0x30) = 4;
  (**(code **)(*plVar1 + 8))(plVar1,unaff_RBP + 0x38,unaff_RBP + 0x30);
  uVar3 = (**(code **)(**(int64_t **)(*unaff_RSI + 0x98) + 0x28))
                    (*(int64_t **)(*unaff_RSI + 0x98),*(int32_t *)(unaff_RBP + 0x38));
  *(uint64_t *)(unaff_R15 + 0x20) = uVar3;
  return;
}






// 函数: void FUN_1806a8dbf(void)
void FUN_1806a8dbf(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_R15;
  
  plVar1 = (int64_t *)unaff_RSI[1];
  *(int32_t *)(unaff_RBP + 0x30) = 4;
  (**(code **)(*plVar1 + 8))(plVar1,unaff_RBP + 0x38,unaff_RBP + 0x30);
  uVar2 = (**(code **)(**(int64_t **)(*unaff_RSI + 0x98) + 0x28))
                    (*(int64_t **)(*unaff_RSI + 0x98),*(int32_t *)(unaff_RBP + 0x38));
  *(uint64_t *)(unaff_R15 + 0x20) = uVar2;
  return;
}






// 函数: void FUN_1806a8e00(int64_t param_1,int64_t param_2)
void FUN_1806a8e00(int64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [2];
  
  FUN_1806b14d0(param_2,param_1 + 8);
  auStackX_8[0] = 4;
  (**(code **)(**(int64_t **)(param_2 + 8) + 8))
            (*(int64_t **)(param_2 + 8),param_1 + 0x18,auStackX_8);
  FUN_1806b14d0(param_2,param_1 + 0x20);
  auStackX_8[0] = 4;
  (**(code **)(**(int64_t **)(param_2 + 8) + 8))
            (*(int64_t **)(param_2 + 8),param_1 + 0x30,auStackX_8);
  auStackX_8[0] = 4;
  (**(code **)(**(int64_t **)(param_2 + 8) + 8))
            (*(int64_t **)(param_2 + 8),param_1 + 0x48,auStackX_8);
  FUN_1806a96a0(param_2,param_1 + 0x60);
  auStackX_8[0] = 4;
  (**(code **)(**(int64_t **)(param_2 + 8) + 8))
            (*(int64_t **)(param_2 + 8),auStackX_10,auStackX_8);
  uVar9 = 0;
  auStackX_8[0] = 0;
  FUN_1806b0cf0(param_1 + 0x80,auStackX_10[0],auStackX_8);
  uVar10 = uVar9;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      auStackX_8[0] = 4;
      (**(code **)(**(int64_t **)(param_2 + 8) + 8))
                (*(int64_t **)(param_2 + 8),*(int64_t *)(param_1 + 0x80) + uVar10 * 4,auStackX_8);
      uVar8 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar8;
    } while (uVar8 < *(uint *)(param_1 + 0x88));
  }
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0x68)) {
    puVar5 = *(uint64_t **)(param_1 + 0x70);
    puVar6 = puVar5 + (uint64_t)*(uint *)(param_1 + 0x78) * 0xf;
    for (; puVar5 < puVar6; puVar5 = puVar5 + 0xf) {
      *puVar5 = &memory_allocator_3704_ptr;
    }
    *(int32_t *)(param_1 + 0x78) = 0;
    if (*(uint *)(param_1 + 0x68) != 0) {
      uVar11 = (uint64_t)*(uint *)(param_1 + 0x68);
      uVar10 = uVar9;
      do {
        lVar7 = *(int64_t *)(param_1 + 0x60) + uVar10;
        if ((uint)uVar9 < (*(uint *)(param_1 + 0x7c) & 0x7fffffff)) {
          puVar5 = (uint64_t *)(uVar9 * 0x78 + *(int64_t *)(param_1 + 0x70));
          *puVar5 = &memory_allocator_3704_ptr;
          uVar4 = *(uint64_t *)(lVar7 + 0x10);
          puVar5[1] = *(uint64_t *)(lVar7 + 8);
          puVar5[2] = uVar4;
          *(int32_t *)(puVar5 + 3) = *(int32_t *)(lVar7 + 0x18);
          puVar5[4] = *(uint64_t *)(lVar7 + 0x20);
          puVar5[5] = *(uint64_t *)(lVar7 + 0x28);
          *(int32_t *)(puVar5 + 6) = *(int32_t *)(lVar7 + 0x30);
          uVar4 = *(uint64_t *)(lVar7 + 0x40);
          puVar5[7] = *(uint64_t *)(lVar7 + 0x38);
          puVar5[8] = uVar4;
          *(int32_t *)(puVar5 + 9) = *(int32_t *)(lVar7 + 0x48);
          *(int32_t *)((int64_t)puVar5 + 0x4c) = *(int32_t *)(lVar7 + 0x4c);
          *(int32_t *)(puVar5 + 10) = *(int32_t *)(lVar7 + 0x50);
          *(int32_t *)((int64_t)puVar5 + 0x54) = *(int32_t *)(lVar7 + 0x54);
          uVar1 = *(int32_t *)(lVar7 + 0x5c);
          uVar2 = *(int32_t *)(lVar7 + 0x60);
          uVar3 = *(int32_t *)(lVar7 + 100);
          *(int32_t *)(puVar5 + 0xb) = *(int32_t *)(lVar7 + 0x58);
          *(int32_t *)((int64_t)puVar5 + 0x5c) = uVar1;
          *(int32_t *)(puVar5 + 0xc) = uVar2;
          *(int32_t *)((int64_t)puVar5 + 100) = uVar3;
          *(int32_t *)(puVar5 + 0xd) = *(int32_t *)(lVar7 + 0x68);
          *(int32_t *)((int64_t)puVar5 + 0x6c) = *(int32_t *)(lVar7 + 0x6c);
          *(int32_t *)(puVar5 + 0xe) = *(int32_t *)(lVar7 + 0x70);
          *(int32_t *)((int64_t)puVar5 + 0x74) = *(int32_t *)(lVar7 + 0x74);
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        }
        else {
          FUN_1806ae100(param_1 + 0x70);
        }
        uVar10 = uVar10 + 0x78;
        uVar9 = (uint64_t)*(uint *)(param_1 + 0x78);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x70);
  *(uint64_t *)(param_1 + 0x40) =
       (uint64_t)*(uint *)(param_1 + 0x78) * 0x78 + *(int64_t *)(param_1 + 0x70);
  *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x80);
  *(uint64_t *)(param_1 + 0x58) =
       *(int64_t *)(param_1 + 0x80) + (uint64_t)*(uint *)(param_1 + 0x88) * 4;
  return;
}






// 函数: void FUN_1806a8f16(uint64_t param_1,int64_t param_2)
void FUN_1806a8f16(uint64_t param_1,int64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *in_RAX;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar7;
  uint64_t uVar8;
  
  puVar5 = (uint64_t *)(param_2 + (int64_t)in_RAX);
  if (in_RAX < puVar5) {
    do {
      *in_RAX = &memory_allocator_3704_ptr;
      in_RAX = in_RAX + 0xf;
    } while (in_RAX < puVar5);
  }
  *(int *)(unaff_RSI + 0x78) = (int)unaff_RBP;
  if (*(uint *)(unaff_RSI + 0x68) != 0) {
    uVar8 = (uint64_t)*(uint *)(unaff_RSI + 0x68);
    uVar7 = unaff_RBP;
    do {
      lVar6 = *(int64_t *)(unaff_RSI + 0x60) + uVar7;
      if ((uint)unaff_RBP < (*(uint *)(unaff_RSI + 0x7c) & 0x7fffffff)) {
        puVar5 = (uint64_t *)((unaff_RBP & 0xffffffff) * 0x78 + *(int64_t *)(unaff_RSI + 0x70));
        *puVar5 = &memory_allocator_3704_ptr;
        uVar4 = *(uint64_t *)(lVar6 + 0x10);
        puVar5[1] = *(uint64_t *)(lVar6 + 8);
        puVar5[2] = uVar4;
        *(int32_t *)(puVar5 + 3) = *(int32_t *)(lVar6 + 0x18);
        puVar5[4] = *(uint64_t *)(lVar6 + 0x20);
        puVar5[5] = *(uint64_t *)(lVar6 + 0x28);
        *(int32_t *)(puVar5 + 6) = *(int32_t *)(lVar6 + 0x30);
        uVar4 = *(uint64_t *)(lVar6 + 0x40);
        puVar5[7] = *(uint64_t *)(lVar6 + 0x38);
        puVar5[8] = uVar4;
        *(int32_t *)(puVar5 + 9) = *(int32_t *)(lVar6 + 0x48);
        *(int32_t *)((int64_t)puVar5 + 0x4c) = *(int32_t *)(lVar6 + 0x4c);
        *(int32_t *)(puVar5 + 10) = *(int32_t *)(lVar6 + 0x50);
        *(int32_t *)((int64_t)puVar5 + 0x54) = *(int32_t *)(lVar6 + 0x54);
        uVar1 = *(int32_t *)(lVar6 + 0x5c);
        uVar2 = *(int32_t *)(lVar6 + 0x60);
        uVar3 = *(int32_t *)(lVar6 + 100);
        *(int32_t *)(puVar5 + 0xb) = *(int32_t *)(lVar6 + 0x58);
        *(int32_t *)((int64_t)puVar5 + 0x5c) = uVar1;
        *(int32_t *)(puVar5 + 0xc) = uVar2;
        *(int32_t *)((int64_t)puVar5 + 100) = uVar3;
        *(int32_t *)(puVar5 + 0xd) = *(int32_t *)(lVar6 + 0x68);
        *(int32_t *)((int64_t)puVar5 + 0x6c) = *(int32_t *)(lVar6 + 0x6c);
        *(int32_t *)(puVar5 + 0xe) = *(int32_t *)(lVar6 + 0x70);
        *(int32_t *)((int64_t)puVar5 + 0x74) = *(int32_t *)(lVar6 + 0x74);
        *(int *)(unaff_RSI + 0x78) = *(int *)(unaff_RSI + 0x78) + 1;
      }
      else {
        FUN_1806ae100(unaff_RSI + 0x70);
      }
      uVar7 = uVar7 + 0x78;
      unaff_RBP = (uint64_t)*(uint *)(unaff_RSI + 0x78);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(int64_t *)(unaff_RSI + 0x38) = *(int64_t *)(unaff_RSI + 0x70);
  *(uint64_t *)(unaff_RSI + 0x40) =
       (uint64_t)*(uint *)(unaff_RSI + 0x78) * 0x78 + *(int64_t *)(unaff_RSI + 0x70);
  *(int64_t *)(unaff_RSI + 0x50) = *(int64_t *)(unaff_RSI + 0x80);
  *(uint64_t *)(unaff_RSI + 0x58) =
       *(int64_t *)(unaff_RSI + 0x80) + (uint64_t)*(uint *)(unaff_RSI + 0x88) * 4;
  return;
}






// 函数: void FUN_1806a8f4a(void)
void FUN_1806a8f4a(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint in_EAX;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar7;
  uint64_t unaff_R13;
  uint64_t uVar8;
  
  uVar8 = (uint64_t)in_EAX;
  uVar7 = unaff_RBP;
  do {
    lVar6 = *(int64_t *)(unaff_RSI + 0x60) + uVar7;
    if ((uint)unaff_RBP < (*(uint *)(unaff_RSI + 0x7c) & 0x7fffffff)) {
      puVar5 = (uint64_t *)((unaff_RBP & 0xffffffff) * 0x78 + *(int64_t *)(unaff_RSI + 0x70));
      *puVar5 = unaff_R13;
      uVar4 = *(uint64_t *)(lVar6 + 0x10);
      puVar5[1] = *(uint64_t *)(lVar6 + 8);
      puVar5[2] = uVar4;
      *(int32_t *)(puVar5 + 3) = *(int32_t *)(lVar6 + 0x18);
      puVar5[4] = *(uint64_t *)(lVar6 + 0x20);
      puVar5[5] = *(uint64_t *)(lVar6 + 0x28);
      *(int32_t *)(puVar5 + 6) = *(int32_t *)(lVar6 + 0x30);
      uVar4 = *(uint64_t *)(lVar6 + 0x40);
      puVar5[7] = *(uint64_t *)(lVar6 + 0x38);
      puVar5[8] = uVar4;
      *(int32_t *)(puVar5 + 9) = *(int32_t *)(lVar6 + 0x48);
      *(int32_t *)((int64_t)puVar5 + 0x4c) = *(int32_t *)(lVar6 + 0x4c);
      *(int32_t *)(puVar5 + 10) = *(int32_t *)(lVar6 + 0x50);
      *(int32_t *)((int64_t)puVar5 + 0x54) = *(int32_t *)(lVar6 + 0x54);
      uVar1 = *(int32_t *)(lVar6 + 0x5c);
      uVar2 = *(int32_t *)(lVar6 + 0x60);
      uVar3 = *(int32_t *)(lVar6 + 100);
      *(int32_t *)(puVar5 + 0xb) = *(int32_t *)(lVar6 + 0x58);
      *(int32_t *)((int64_t)puVar5 + 0x5c) = uVar1;
      *(int32_t *)(puVar5 + 0xc) = uVar2;
      *(int32_t *)((int64_t)puVar5 + 100) = uVar3;
      *(int32_t *)(puVar5 + 0xd) = *(int32_t *)(lVar6 + 0x68);
      *(int32_t *)((int64_t)puVar5 + 0x6c) = *(int32_t *)(lVar6 + 0x6c);
      *(int32_t *)(puVar5 + 0xe) = *(int32_t *)(lVar6 + 0x70);
      *(int32_t *)((int64_t)puVar5 + 0x74) = *(int32_t *)(lVar6 + 0x74);
      *(int *)(unaff_RSI + 0x78) = *(int *)(unaff_RSI + 0x78) + 1;
    }
    else {
      FUN_1806ae100(unaff_RSI + 0x70);
    }
    uVar7 = uVar7 + 0x78;
    unaff_RBP = (uint64_t)*(uint *)(unaff_RSI + 0x78);
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
  *(int64_t *)(unaff_RSI + 0x38) = *(int64_t *)(unaff_RSI + 0x70);
  *(uint64_t *)(unaff_RSI + 0x40) =
       (uint64_t)*(uint *)(unaff_RSI + 0x78) * 0x78 + *(int64_t *)(unaff_RSI + 0x70);
  *(int64_t *)(unaff_RSI + 0x50) = *(int64_t *)(unaff_RSI + 0x80);
  *(uint64_t *)(unaff_RSI + 0x58) =
       *(int64_t *)(unaff_RSI + 0x80) + (uint64_t)*(uint *)(unaff_RSI + 0x88) * 4;
  return;
}






// 函数: void FUN_1806a9009(void)
void FUN_1806a9009(void)

{
  int64_t unaff_RSI;
  
  *(int64_t *)(unaff_RSI + 0x38) = *(int64_t *)(unaff_RSI + 0x70);
  *(uint64_t *)(unaff_RSI + 0x40) =
       (uint64_t)*(uint *)(unaff_RSI + 0x78) * 0x78 + *(int64_t *)(unaff_RSI + 0x70);
  *(int64_t *)(unaff_RSI + 0x50) = *(int64_t *)(unaff_RSI + 0x80);
  *(uint64_t *)(unaff_RSI + 0x58) =
       *(int64_t *)(unaff_RSI + 0x80) + (uint64_t)*(uint *)(unaff_RSI + 0x88) * 4;
  return;
}






