#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part049.c - 3 个函数

// 函数: void FUN_1803d8c10(uint *param_1,uint64_t *param_2)
void FUN_1803d8c10(uint *param_1,uint64_t *param_2)

{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  bool bVar5;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  uVar2 = uVar1 >> 0xb;
  uVar4 = (uint64_t)uVar2;
  if (*(int64_t *)(param_1 + (uint64_t)uVar2 * 2 + 2) == 0) {
    lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x4000,0x25);
    LOCK();
    bVar5 = *(int64_t *)(param_1 + uVar4 * 2 + 2) == 0;
    if (bVar5) {
      *(int64_t *)(param_1 + uVar4 * 2 + 2) = lVar3;
    }
    UNLOCK();
    if (bVar5) {
      LOCK();
      *(int8_t *)(uVar4 + 0x108 + (int64_t)param_1) = 0;
      UNLOCK();
    }
    else {
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      do {
      } while (*(char *)(uVar4 + 0x108 + (int64_t)param_1) != '\0');
    }
  }
  else {
    do {
    } while (*(char *)(uVar4 + 0x108 + (int64_t)param_1) != '\0');
  }
  *(uint64_t *)(*(int64_t *)(param_1 + uVar4 * 2 + 2) + (uint64_t)(uVar1 + uVar2 * -0x800) * 8)
       = *param_2;
  return;
}



int64_t * FUN_1803d8cd0(int64_t *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t lStackX_8;
  int8_t auStack_18 [16];
  
  plVar4 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar3 = param_1;
    plVar5 = (int64_t *)param_1[2];
    do {
      if ((*(uint *)(plVar5 + 4) < *param_2) ||
         ((*(uint *)(plVar5 + 4) <= *param_2 && ((uint64_t)plVar5[5] < *(uint64_t *)(param_2 + 2))
          ))) {
        plVar6 = (int64_t *)*plVar5;
        bVar2 = true;
      }
      else {
        plVar6 = (int64_t *)plVar5[1];
        bVar2 = false;
      }
      plVar4 = plVar5;
      if (bVar2) {
        plVar4 = plVar3;
      }
      plVar3 = plVar4;
      plVar5 = plVar6;
    } while (plVar6 != (int64_t *)0x0);
  }
  if (plVar4 != param_1) {
    if ((*(uint *)(plVar4 + 4) <= *param_2) &&
       ((*(uint *)(plVar4 + 4) < *param_2 || ((uint64_t)plVar4[5] <= *(uint64_t *)(param_2 + 2))))
       ) {
      return plVar4 + 6;
    }
  }
  plVar3 = (int64_t *)*param_1;
  if ((plVar4 == plVar3) || (plVar4 == param_1)) {
    if (param_1[4] != 0) {
      plVar4 = plVar3;
      if ((*(uint *)(plVar3 + 4) < *param_2) ||
         ((*(uint *)(plVar3 + 4) <= *param_2 && ((uint64_t)plVar3[5] < *(uint64_t *)(param_2 + 2))
          ))) goto LAB_1803d8db9;
    }
  }
  else {
    plVar3 = (int64_t *)func_0x00018066bd70(plVar4);
    uVar1 = *param_2;
    if (((*(uint *)(plVar4 + 4) < uVar1) ||
        ((*(uint *)(plVar4 + 4) <= uVar1 && ((uint64_t)plVar4[5] < *(uint64_t *)(param_2 + 2)))))
       && ((uVar1 < *(uint *)(plVar3 + 4) ||
           ((uVar1 <= *(uint *)(plVar3 + 4) && (*(uint64_t *)(param_2 + 2) < (uint64_t)plVar3[5]))
           )))) {
      if (*plVar4 == 0) {
LAB_1803d8db9:
        uVar7 = 0;
        plVar3 = plVar4;
      }
      else {
        uVar7 = 1;
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_1803d91a0(param_1,&lStackX_8,plVar3,uVar7,param_2);
        goto LAB_1803d8ded;
      }
    }
  }
  plVar4 = (int64_t *)FUN_1803d9030(param_1,auStack_18,plVar3,param_2);
  lStackX_8 = *plVar4;
LAB_1803d8ded:
  return (int64_t *)(lStackX_8 + 0x30);
}



uint64_t * FUN_1803d8e10(uint64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puStackX_8;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  int64_t lStack_40;
  uint64_t *puStack_38;
  int *piStack_30;
  
  puStackX_8 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    lVar1 = param_2 + 0x10;
    lVar2 = param_2 + 0x1c;
    lVar3 = param_2 + 0x18;
    iVar5 = *(int *)(param_2 + 0x20);
    lVar4 = param_2 + 0x20;
    puVar10 = param_1;
    puVar8 = (uint64_t *)param_1[2];
    do {
      lStack_80 = param_2 + 8;
      lStack_78 = param_2 + 0x14;
      puStack_38 = puVar8 + 4;
      lStack_60 = (int64_t)puVar8 + 0x3c;
      puStack_58 = puVar8 + 7;
      puStack_50 = puVar8 + 6;
      puStack_48 = puVar8 + 5;
      lStack_40 = (int64_t)puVar8 + 0x34;
      piStack_30 = (int *)(puVar8 + 8);
      puVar11 = puVar8;
      lStack_98 = lVar2;
      lStack_90 = lVar3;
      lStack_88 = lVar1;
      lStack_70 = param_2;
      lStack_68 = lVar4;
      if ((*piStack_30 < iVar5) ||
         ((*piStack_30 <= iVar5 &&
          (cVar7 = func_0x0001801eb6f0(&lStack_60,&lStack_98), cVar7 != '\0')))) {
        puVar11 = (uint64_t *)*puVar11;
        bVar6 = true;
      }
      else {
        puVar11 = (uint64_t *)puVar11[1];
        bVar6 = false;
      }
      param_1 = puVar8;
      if (bVar6) {
        param_1 = puVar10;
      }
      puVar10 = param_1;
      puVar8 = puVar11;
    } while (puVar11 != (uint64_t *)0x0);
  }
  puVar10 = puStackX_8;
  if (param_1 != puStackX_8) {
    puStack_38 = param_1 + 4;
    lStack_60 = (int64_t)param_1 + 0x3c;
    puStack_58 = param_1 + 7;
    puStack_50 = param_1 + 6;
    puStack_48 = param_1 + 5;
    lStack_40 = (int64_t)param_1 + 0x34;
    piStack_30 = (int *)(param_1 + 8);
    lStack_98 = param_2 + 0x1c;
    lStack_90 = param_2 + 0x18;
    lStack_88 = param_2 + 0x10;
    lStack_80 = param_2 + 8;
    lStack_78 = param_2 + 0x14;
    lStack_68 = param_2 + 0x20;
    lStack_70 = param_2;
    if ((*piStack_30 <= *(int *)(param_2 + 0x20)) &&
       ((*piStack_30 < *(int *)(param_2 + 0x20) ||
        (cVar7 = func_0x0001801eb6f0(&lStack_98,&lStack_60), cVar7 == '\0')))) {
      return param_1 + 9;
    }
  }
  puVar8 = (uint64_t *)FUN_1803d9410(puVar10,param_1,&puStackX_8,param_2);
  if (puVar8 == (uint64_t *)0x0) {
    puVar8 = (uint64_t *)FUN_1803d9920(puVar10,&puStackX_8,param_2);
    if ((char)puStackX_8 == '\0') goto LAB_1803d901e;
    uVar9 = 0;
  }
  else {
    uVar9 = (uint64_t)puStackX_8 & 0xff;
  }
  FUN_1803d92a0(puVar10,&puStackX_8,puVar8,uVar9,param_2);
  puVar8 = puStackX_8;
LAB_1803d901e:
  return puVar8 + 9;
}



uint64_t * FUN_1803d8e3b(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int64_t in_RAX;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t *puVar7;
  int8_t uVar8;
  uint64_t *in_R10;
  uint64_t *in_R11;
  uint64_t *puVar9;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R12;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  iVar1 = *(int *)(unaff_RBX + 0x20);
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  lVar5 = param_2 + 8;
  lVar6 = param_2 + 0x14;
  do {
    *(int64_t *)(unaff_RBP + -0x21) = lVar5;
    *(int64_t *)(unaff_RBP + -1) = (int64_t)in_R11 + 0x3c;
    *(uint64_t **)(unaff_RBP + 7) = in_R11 + 7;
    *(uint64_t **)(unaff_RBP + 0xf) = in_R11 + 6;
    *(uint64_t **)(unaff_RBP + 0x17) = in_R11 + 5;
    *(int64_t *)(unaff_RBP + 0x1f) = (int64_t)in_R11 + 0x34;
    *(int64_t *)(unaff_RBP + -0x39) = param_2 + 0x1c;
    *(int64_t *)(unaff_RBP + -0x31) = param_2 + 0x18;
    *(int64_t *)(unaff_RBP + -0x29) = param_2 + 0x10;
    *(int64_t *)(unaff_RBP + -0x19) = lVar6;
    *(int64_t *)(unaff_RBP + -0x11) = unaff_RBX;
    *(int64_t *)(unaff_RBP + -9) = unaff_RBX + 0x20;
    *(uint64_t **)(unaff_RBP + 0x27) = in_R11 + 4;
    *(uint64_t **)(unaff_RBP + 0x2f) = in_R11 + 8;
    iVar2 = *(int *)(in_R11 + 8);
    puVar9 = in_R11;
    if (iVar2 < iVar1) {
LAB_1803d8eeb:
      puVar9 = (uint64_t *)*puVar9;
      bVar3 = true;
    }
    else {
      if (iVar2 <= iVar1) {
        cVar4 = func_0x0001801eb6f0(unaff_RBP + -1,unaff_RBP + -0x39);
        lVar6 = unaff_RBX + 0x14;
        if (cVar4 != '\0') goto LAB_1803d8eeb;
      }
      puVar9 = (uint64_t *)puVar9[1];
      bVar3 = false;
    }
    lVar5 = unaff_RBX + 8;
    puVar7 = in_R11;
    if (bVar3) {
      puVar7 = in_R10;
    }
    in_R10 = puVar7;
    in_R11 = puVar9;
  } while (puVar9 != (uint64_t *)0x0);
  puVar9 = *(uint64_t **)(unaff_RBP + 0x67);
  if (puVar7 != puVar9) {
    iVar2 = *(int *)(unaff_RBX + 0x20);
    *(uint64_t **)(unaff_RBP + 0x27) = puVar7 + 4;
    *(int64_t *)(unaff_RBP + -1) = (int64_t)puVar7 + 0x3c;
    *(uint64_t **)(unaff_RBP + 7) = puVar7 + 7;
    *(uint64_t **)(unaff_RBP + 0xf) = puVar7 + 6;
    *(uint64_t **)(unaff_RBP + 0x17) = puVar7 + 5;
    *(int64_t *)(unaff_RBP + 0x1f) = (int64_t)puVar7 + 0x34;
    *(uint64_t **)(unaff_RBP + 0x2f) = puVar7 + 8;
    *(int64_t *)(unaff_RBP + -0x39) = unaff_RBX + 0x1c;
    *(int64_t *)(unaff_RBP + -0x31) = unaff_RBX + 0x18;
    *(int64_t *)(unaff_RBP + -0x29) = unaff_RBX + 0x10;
    *(int64_t *)(unaff_RBP + -0x21) = unaff_RBX + 8;
    *(int64_t *)(unaff_RBP + -0x19) = unaff_RBX + 0x14;
    *(int64_t *)(unaff_RBP + -0x11) = unaff_RBX;
    *(int64_t *)(unaff_RBP + -9) = unaff_RBX + 0x20;
    iVar1 = *(int *)(puVar7 + 8);
    if (iVar1 <= iVar2) {
      if (iVar1 < iVar2) {
LAB_1803d8fc1:
        return puVar7 + 9;
      }
      cVar4 = func_0x0001801eb6f0(unaff_RBP + -0x39,unaff_RBP + -1);
      if (cVar4 == '\0') goto LAB_1803d8fc1;
    }
  }
  lVar5 = FUN_1803d9410(puVar9,puVar7,unaff_RBP + 0x67);
  if (lVar5 == 0) {
    lVar5 = FUN_1803d9920(puVar9,unaff_RBP + 0x67);
    if (*(char *)(unaff_RBP + 0x67) == '\0') goto LAB_1803d901e;
    uVar8 = 0;
  }
  else {
    uVar8 = *(int8_t *)(unaff_RBP + 0x67);
  }
  FUN_1803d92a0(puVar9,unaff_RBP + 0x67,lVar5,uVar8);
  lVar5 = *(int64_t *)(unaff_RBP + 0x67);
LAB_1803d901e:
  return (uint64_t *)(lVar5 + 0x48);
}



int64_t FUN_1803d8f32(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R10;
  
  if (in_R10 != unaff_RDI) {
    iVar2 = *(int *)(unaff_RBX + 0x20);
    *(int64_t *)(unaff_RBP + 0x27) = in_R10 + 0x20;
    *(int64_t *)(unaff_RBP + -1) = in_R10 + 0x3c;
    *(int64_t *)(unaff_RBP + 7) = in_R10 + 0x38;
    *(int64_t *)(unaff_RBP + 0xf) = in_R10 + 0x30;
    *(int64_t *)(unaff_RBP + 0x17) = in_R10 + 0x28;
    *(int64_t *)(unaff_RBP + 0x1f) = in_R10 + 0x34;
    *(int **)(unaff_RBP + 0x2f) = (int *)(in_R10 + 0x40);
    *(int64_t *)(unaff_RBP + -0x39) = unaff_RBX + 0x1c;
    *(int64_t *)(unaff_RBP + -0x31) = unaff_RBX + 0x18;
    *(int64_t *)(unaff_RBP + -0x29) = unaff_RBX + 0x10;
    *(int64_t *)(unaff_RBP + -0x21) = unaff_RBX + 8;
    *(int64_t *)(unaff_RBP + -0x19) = unaff_RBX + 0x14;
    *(int64_t *)(unaff_RBP + -0x11) = unaff_RBX;
    *(int64_t *)(unaff_RBP + -9) = unaff_RBX + 0x20;
    iVar1 = *(int *)(in_R10 + 0x40);
    if ((iVar1 <= iVar2) &&
       ((iVar1 < iVar2 ||
        (cVar3 = func_0x0001801eb6f0(unaff_RBP + -0x39,unaff_RBP + -1), cVar3 == '\0')))) {
      return in_R10 + 0x48;
    }
  }
  lVar4 = FUN_1803d9410();
  if ((lVar4 != 0) || (lVar4 = FUN_1803d9920(), *(char *)(unaff_RBP + 0x67) != '\0')) {
    FUN_1803d92a0();
    lVar4 = *(int64_t *)(unaff_RBP + 0x67);
  }
  return lVar4 + 0x48;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803d9030(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  bVar4 = true;
  puVar7 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar5 = (uint64_t *)param_1[2];
    do {
      puVar7 = puVar5;
      if ((*param_4 < *(uint *)(puVar7 + 4)) ||
         ((*param_4 <= *(uint *)(puVar7 + 4) && (*(uint64_t *)(param_4 + 2) < (uint64_t)puVar7[5])
          ))) {
        bVar4 = true;
        puVar5 = (uint64_t *)puVar7[1];
      }
      else {
        bVar4 = false;
        puVar5 = (uint64_t *)*puVar7;
      }
    } while (puVar5 != (uint64_t *)0x0);
  }
  puVar5 = puVar7;
  if (bVar4) {
    if (puVar7 != (uint64_t *)param_1[1]) {
      puVar5 = (uint64_t *)func_0x00018066b9a0();
      goto LAB_1803d90af;
    }
  }
  else {
LAB_1803d90af:
    if ((*param_4 <= *(uint *)(puVar5 + 4)) &&
       ((*param_4 < *(uint *)(puVar5 + 4) || (*(uint64_t *)(param_4 + 2) <= (uint64_t)puVar5[5])))
       ) {
      *param_2 = puVar5;
      *(int8_t *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  if (puVar7 != param_1) {
    if ((*(uint *)(puVar7 + 4) <= *param_4) &&
       ((*(uint *)(puVar7 + 4) < *param_4 || ((uint64_t)puVar7[5] <= *(uint64_t *)(param_4 + 2))))
       ) {
      uVar8 = 1;
      goto LAB_1803d90f2;
    }
  }
  uVar8 = 0;
LAB_1803d90f2:
  lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x60,*(int8_t *)(param_1 + 5));
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(uint *)(lVar6 + 0x20) = *param_4;
  *(uint *)(lVar6 + 0x24) = uVar1;
  *(uint *)(lVar6 + 0x28) = uVar2;
  *(uint *)(lVar6 + 0x2c) = uVar3;
  *(int32_t *)(lVar6 + 0x50) = 0x3f800000;
  *(uint64_t *)(lVar6 + 0x54) = 0x40000000;
  *(int32_t *)(lVar6 + 0x5c) = 3;
  *(uint64_t *)(lVar6 + 0x40) = 1;
  *(void **)(lVar6 + 0x38) = &system_data_0000;
  *(uint64_t *)(lVar6 + 0x48) = 0;
  *(int32_t *)(lVar6 + 0x58) = 0;
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,puVar7,param_1,uVar8,uVar9,lVar6 + 0x30);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d91a0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1803d91a0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if ((*(uint *)(param_3 + 0x20) <= *param_5) &&
       ((*(uint *)(param_3 + 0x20) < *param_5 ||
        (*(uint64_t *)(param_3 + 0x28) <= *(uint64_t *)(param_5 + 2))))) {
      uVar5 = 1;
      goto LAB_1803d91f9;
    }
  }
  uVar5 = 0;
LAB_1803d91f9:
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x60,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(uint *)(lVar4 + 0x20) = *param_5;
  *(uint *)(lVar4 + 0x24) = uVar1;
  *(uint *)(lVar4 + 0x28) = uVar2;
  *(uint *)(lVar4 + 0x2c) = uVar3;
  *(int32_t *)(lVar4 + 0x50) = 0x3f800000;
  *(uint64_t *)(lVar4 + 0x54) = 0x40000000;
  *(int32_t *)(lVar4 + 0x5c) = 3;
  *(uint64_t *)(lVar4 + 0x40) = 1;
  *(void **)(lVar4 + 0x38) = &system_data_0000;
  *(uint64_t *)(lVar4 + 0x48) = 0;
  *(int32_t *)(lVar4 + 0x58) = 0;
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar4,param_3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d92a0(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
void FUN_1803d92a0(int64_t param_1,uint64_t param_2,int64_t param_3,char param_4,
                  uint64_t *param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int *piStack_68;
  int64_t lStack_60;
  uint64_t *puStack_58;
  uint64_t *puStack_50;
  uint64_t *puStack_48;
  int64_t lStack_40;
  uint64_t *puStack_38;
  int *piStack_30;
  uint64_t uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if ((param_4 == '\0') && (param_3 != param_1)) {
    lStack_70 = param_3 + 0x20;
    lStack_98 = param_3 + 0x3c;
    lStack_90 = param_3 + 0x38;
    lStack_88 = param_3 + 0x30;
    lStack_80 = param_3 + 0x28;
    lStack_78 = param_3 + 0x34;
    piStack_68 = (int *)(param_3 + 0x40);
    lStack_60 = (int64_t)param_5 + 0x1c;
    puStack_58 = param_5 + 3;
    puStack_50 = param_5 + 2;
    puStack_48 = param_5 + 1;
    lStack_40 = (int64_t)param_5 + 0x14;
    puStack_38 = param_5;
    piStack_30 = (int *)(param_5 + 4);
    if (*piStack_68 <= *piStack_30) {
      if (*piStack_30 <= *piStack_68) {
        cVar5 = func_0x0001801eb6f0(&lStack_60,&lStack_98);
        if (cVar5 != '\0') goto LAB_1803d938a;
      }
      uVar7 = 1;
      goto LAB_1803d938d;
    }
  }
LAB_1803d938a:
  uVar7 = 0;
LAB_1803d938d:
  lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xa8,*(int8_t *)(param_1 + 0x28));
  uVar4 = param_5[1];
  *(uint64_t *)(lVar6 + 0x20) = *param_5;
  *(uint64_t *)(lVar6 + 0x28) = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_5 + 0x14);
  uVar2 = *(int32_t *)(param_5 + 3);
  uVar3 = *(int32_t *)((int64_t)param_5 + 0x1c);
  *(int32_t *)(lVar6 + 0x30) = *(int32_t *)(param_5 + 2);
  *(int32_t *)(lVar6 + 0x34) = uVar1;
  *(int32_t *)(lVar6 + 0x38) = uVar2;
  *(int32_t *)(lVar6 + 0x3c) = uVar3;
  *(uint64_t *)(lVar6 + 0x40) = param_5[4];
  FUN_1801eb8e0(lVar6 + 0x48);
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,param_3,param_1,uVar7);
}



int64_t * FUN_1803d9410(int64_t *param_1,int64_t *param_2,int8_t *param_3,int64_t param_4)

{
  char cVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t *plStack_58;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int64_t lStack_40;
  int64_t *plStack_38;
  int64_t *plStack_30;
  
  plVar2 = (int64_t *)*param_1;
  if ((param_2 == plVar2) || (param_2 == param_1)) {
    if (param_1[4] != 0) {
      lStack_70 = (int64_t)(plVar2 + 4);
      lStack_60 = param_4 + 0x1c;
      plStack_30 = (int64_t *)(param_4 + 0x20);
      plStack_58 = (int64_t *)(param_4 + 0x18);
      plStack_50 = (int64_t *)(param_4 + 0x10);
      plStack_48 = (int64_t *)(param_4 + 8);
      lStack_40 = param_4 + 0x14;
      lStack_98 = (int64_t)plVar2 + 0x3c;
      lStack_90 = (int64_t)(plVar2 + 7);
      lStack_88 = (int64_t)(plVar2 + 6);
      lStack_80 = (int64_t)(plVar2 + 5);
      lStack_78 = (int64_t)plVar2 + 0x34;
      lStack_68 = (int64_t)(plVar2 + 8);
      param_2 = plVar2;
      if ((*(int *)(plVar2 + 8) < *(int *)plStack_30) ||
         ((*(int *)(plVar2 + 8) <= *(int *)plStack_30 &&
          (plStack_38 = (int64_t *)param_4, cVar1 = func_0x0001801eb6f0(&lStack_98,&lStack_60),
          cVar1 != '\0')))) goto LAB_1803d961a;
    }
  }
  else {
    plVar2 = (int64_t *)func_0x00018066bd70(param_2);
    iVar3 = *(int *)(param_4 + 0x20);
    plStack_38 = param_2 + 4;
    lStack_80 = param_4 + 8;
    lStack_78 = param_4 + 0x14;
    lStack_60 = (int64_t)param_2 + 0x3c;
    plStack_58 = param_2 + 7;
    plStack_50 = param_2 + 6;
    plStack_48 = param_2 + 5;
    lStack_40 = (int64_t)param_2 + 0x34;
    plStack_30 = param_2 + 8;
    if (((int)*plStack_30 < iVar3) ||
       (((int)*plStack_30 <= iVar3 &&
        (lStack_98 = param_4 + 0x1c, lStack_90 = param_4 + 0x18, lStack_88 = param_4 + 0x10,
        lStack_70 = param_4, lStack_68 = param_4 + 0x20,
        cVar1 = func_0x0001801eb6f0(&lStack_60,&lStack_98), cVar1 != '\0')))) {
      plStack_38 = plVar2 + 4;
      lStack_60 = (int64_t)plVar2 + 0x3c;
      plStack_58 = plVar2 + 7;
      plStack_50 = plVar2 + 6;
      plStack_48 = plVar2 + 5;
      lStack_40 = (int64_t)plVar2 + 0x34;
      plStack_30 = plVar2 + 8;
      lStack_80 = param_4 + 8;
      lStack_78 = param_4 + 0x14;
      if ((iVar3 < (int)*plStack_30) ||
         ((iVar3 <= (int)*plStack_30 &&
          (lStack_98 = param_4 + 0x1c, lStack_90 = param_4 + 0x18, lStack_88 = param_4 + 0x10,
          lStack_70 = param_4, lStack_68 = param_4 + 0x20,
          cVar1 = func_0x0001801eb6f0(&lStack_98,&lStack_60), cVar1 != '\0')))) {
        if (*param_2 != 0) {
          *param_3 = 1;
          return plVar2;
        }
        goto LAB_1803d961a;
      }
    }
  }
  param_2 = (int64_t *)0x0;
LAB_1803d961a:
  *param_3 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1803d9660(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06f60;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1803d9750(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06fe0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1803d9840(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06fa0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



uint64_t * FUN_1803d9920(uint64_t *param_1,int8_t *param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lStack_98;
  uint64_t *puStack_90;
  uint64_t *puStack_88;
  uint64_t *puStack_80;
  int64_t lStack_78;
  uint64_t *puStack_70;
  int *piStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t lStack_40;
  int64_t lStack_38;
  int *piStack_30;
  
  puVar7 = (uint64_t *)param_1[2];
  bVar5 = true;
  puVar8 = param_1;
  if (puVar7 != (uint64_t *)0x0) {
    iVar4 = *(int *)(param_3 + 0x20);
    lVar1 = param_3 + 0x1c;
    lVar2 = param_3 + 0x18;
    lVar3 = param_3 + 0x20;
    do {
      lStack_40 = param_3 + 0x14;
      lStack_48 = param_3 + 8;
      lStack_50 = param_3 + 0x10;
      puStack_70 = puVar7 + 4;
      lStack_98 = (int64_t)puVar7 + 0x3c;
      puStack_90 = puVar7 + 7;
      puStack_88 = puVar7 + 6;
      puStack_80 = puVar7 + 5;
      lStack_78 = (int64_t)puVar7 + 0x34;
      piStack_68 = (int *)(puVar7 + 8);
      puVar8 = puVar7;
      lStack_60 = lVar1;
      lStack_58 = lVar2;
      lStack_38 = param_3;
      piStack_30 = (int *)lVar3;
      if ((iVar4 < *piStack_68) ||
         ((iVar4 <= *piStack_68 &&
          (cVar6 = func_0x0001801eb6f0(&lStack_60,&lStack_98), cVar6 != '\0')))) {
        puVar7 = (uint64_t *)puVar7[1];
        bVar5 = true;
      }
      else {
        puVar7 = (uint64_t *)*puVar7;
        bVar5 = false;
      }
    } while (puVar7 != (uint64_t *)0x0);
  }
  puVar7 = puVar8;
  if (bVar5) {
    if (puVar8 == (uint64_t *)param_1[1]) goto LAB_1803d9ae7;
    puVar7 = (uint64_t *)func_0x00018066b9a0(puVar8);
  }
  puStack_70 = puVar7 + 4;
  lStack_60 = param_3 + 0x1c;
  piStack_30 = (int *)(param_3 + 0x20);
  lStack_58 = param_3 + 0x18;
  lStack_50 = param_3 + 0x10;
  lStack_48 = param_3 + 8;
  lStack_40 = param_3 + 0x14;
  lStack_98 = (int64_t)puVar7 + 0x3c;
  puStack_90 = puVar7 + 7;
  puStack_88 = puVar7 + 6;
  puStack_80 = puVar7 + 5;
  lStack_78 = (int64_t)puVar7 + 0x34;
  piStack_68 = (int *)(puVar7 + 8);
  if ((*piStack_30 <= *(int *)(puVar7 + 8)) &&
     ((*piStack_30 < *(int *)(puVar7 + 8) ||
      (lStack_38 = param_3, cVar6 = func_0x0001801eb6f0(&lStack_98,&lStack_60), cVar6 == '\0')))) {
    *param_2 = 0;
    return puVar7;
  }
LAB_1803d9ae7:
  *param_2 = 1;
  return puVar8;
}



uint64_t * FUN_1803d9955(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint64_t *puVar5;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int8_t *unaff_RSI;
  int unaff_EDI;
  int64_t lVar6;
  uint64_t *in_R10;
  uint64_t *puVar7;
  int64_t unaff_R14;
  
  lVar6 = param_3 + 8;
  do {
    *(int64_t *)(unaff_RBP + -1) = param_3 + 0x1c;
    *(int64_t *)(unaff_RBP + -0x39) = (int64_t)in_R10 + 0x3c;
    *(uint64_t **)(unaff_RBP + -0x31) = in_R10 + 7;
    *(uint64_t **)(unaff_RBP + -0x29) = in_R10 + 6;
    *(uint64_t **)(unaff_RBP + -0x21) = in_R10 + 5;
    *(int64_t *)(unaff_RBP + -0x19) = (int64_t)in_R10 + 0x34;
    *(uint64_t **)(unaff_RBP + -0x11) = in_R10 + 4;
    *(uint64_t **)(unaff_RBP + -9) = in_R10 + 8;
    *(int64_t *)(unaff_RBP + 7) = param_3 + 0x18;
    *(int64_t *)(unaff_RBP + 0xf) = param_2;
    *(int64_t *)(unaff_RBP + 0x17) = lVar6;
    *(int64_t *)(unaff_RBP + 0x1f) = unaff_RBX + 0x14;
    *(int64_t *)(unaff_RBP + 0x27) = unaff_RBX;
    *(int64_t *)(unaff_RBP + 0x2f) = unaff_RBX + 0x20;
    iVar1 = *(int *)(in_R10 + 8);
    puVar7 = in_R10;
    if (unaff_EDI < iVar1) {
LAB_1803d9a02:
      in_R10 = (uint64_t *)in_R10[1];
      bVar3 = true;
    }
    else {
      if (unaff_EDI <= iVar1) {
        cVar4 = func_0x0001801eb6f0(unaff_RBP + -1,unaff_RBP + -0x39);
        param_2 = unaff_RBX + 0x10;
        lVar6 = unaff_RBX + 8;
        if (cVar4 != '\0') goto LAB_1803d9a02;
      }
      in_R10 = (uint64_t *)*in_R10;
      bVar3 = false;
    }
  } while (in_R10 != (uint64_t *)0x0);
  puVar5 = puVar7;
  if (bVar3) {
    if (puVar7 == *(uint64_t **)(unaff_R14 + 8)) goto LAB_1803d9ae7;
    puVar5 = (uint64_t *)func_0x00018066b9a0(puVar7);
  }
  *(int64_t *)(unaff_RBP + 0x27) = unaff_RBX;
  *(uint64_t **)(unaff_RBP + -0x11) = puVar5 + 4;
  *(int64_t *)(unaff_RBP + -1) = unaff_RBX + 0x1c;
  *(int **)(unaff_RBP + 0x2f) = (int *)(unaff_RBX + 0x20);
  *(int64_t *)(unaff_RBP + 7) = unaff_RBX + 0x18;
  *(int64_t *)(unaff_RBP + 0xf) = unaff_RBX + 0x10;
  *(int64_t *)(unaff_RBP + 0x17) = unaff_RBX + 8;
  *(int64_t *)(unaff_RBP + 0x1f) = unaff_RBX + 0x14;
  *(int64_t *)(unaff_RBP + -0x39) = (int64_t)puVar5 + 0x3c;
  *(uint64_t **)(unaff_RBP + -0x31) = puVar5 + 7;
  *(uint64_t **)(unaff_RBP + -0x29) = puVar5 + 6;
  *(uint64_t **)(unaff_RBP + -0x21) = puVar5 + 5;
  *(int64_t *)(unaff_RBP + -0x19) = (int64_t)puVar5 + 0x34;
  iVar2 = *(int *)(puVar5 + 8);
  *(uint64_t **)(unaff_RBP + -9) = puVar5 + 8;
  iVar1 = *(int *)(unaff_RBX + 0x20);
  if ((iVar1 <= iVar2) &&
     ((iVar1 < iVar2 ||
      (cVar4 = func_0x0001801eb6f0(unaff_RBP + -0x39,unaff_RBP + -1), cVar4 == '\0')))) {
    *unaff_RSI = 0;
    return puVar5;
  }
LAB_1803d9ae7:
  *unaff_RSI = 1;
  return puVar7;
}



int64_t FUN_1803d9a29(void)

{
  int iVar1;
  int iVar2;
  char in_AL;
  char cVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int8_t *unaff_RSI;
  int64_t in_R11;
  int64_t unaff_R14;
  
  lVar4 = in_R11;
  if (in_AL != '\0') {
    if (in_R11 == *(int64_t *)(unaff_R14 + 8)) goto LAB_1803d9ae7;
    lVar4 = func_0x00018066b9a0();
  }
  *(int64_t *)(unaff_RBP + 0x27) = unaff_RBX;
  *(int64_t *)(unaff_RBP + -0x11) = lVar4 + 0x20;
  *(int64_t *)(unaff_RBP + -1) = unaff_RBX + 0x1c;
  *(int **)(unaff_RBP + 0x2f) = (int *)(unaff_RBX + 0x20);
  *(int64_t *)(unaff_RBP + 7) = unaff_RBX + 0x18;
  *(int64_t *)(unaff_RBP + 0xf) = unaff_RBX + 0x10;
  *(int64_t *)(unaff_RBP + 0x17) = unaff_RBX + 8;
  *(int64_t *)(unaff_RBP + 0x1f) = unaff_RBX + 0x14;
  *(int64_t *)(unaff_RBP + -0x39) = lVar4 + 0x3c;
  *(int64_t *)(unaff_RBP + -0x31) = lVar4 + 0x38;
  *(int64_t *)(unaff_RBP + -0x29) = lVar4 + 0x30;
  *(int64_t *)(unaff_RBP + -0x21) = lVar4 + 0x28;
  *(int64_t *)(unaff_RBP + -0x19) = lVar4 + 0x34;
  iVar2 = *(int *)(lVar4 + 0x40);
  *(int64_t *)(unaff_RBP + -9) = lVar4 + 0x40;
  iVar1 = *(int *)(unaff_RBX + 0x20);
  if ((iVar1 <= iVar2) &&
     ((iVar1 < iVar2 ||
      (cVar3 = func_0x0001801eb6f0(unaff_RBP + -0x39,unaff_RBP + -1), cVar3 == '\0')))) {
    *unaff_RSI = 0;
    return lVar4;
  }
LAB_1803d9ae7:
  *unaff_RSI = 1;
  return in_R11;
}






