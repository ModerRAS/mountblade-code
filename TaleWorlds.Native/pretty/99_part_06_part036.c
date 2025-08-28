#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part036.c - 14 个函数

// 函数: void FUN_1803c864e(int64_t param_1)
void FUN_1803c864e(int64_t param_1)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int64_t unaff_RBP;
  
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_1803cf700();
    FUN_1804719f0(uVar1,&stack0x00000050);
    in_RAX = *(int64_t *)(unaff_RBP + 0x1dd8);
  }
  if ((in_RAX != 0) && (*(int64_t *)(in_RAX + 0x10) != 0)) {
    uVar1 = FUN_1803cf700();
    FUN_1804719f0(uVar1,&stack0x00000050);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1f70) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1803c8698(void)
void FUN_1803c8698(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x1f70) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1803c86c0(int64_t param_1,int32_t *param_2)
void FUN_1803c86c0(int64_t param_1,int32_t *param_2)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x1d8))(*(int64_t **)(param_1 + 0xb8),&uStack_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803c8700(uint64_t *param_1)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1801c26f0();
  *param_1 = &unknown_var_4128_ptr;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x1b] = &unknown_var_4760_ptr;
  param_1[0x1b] = &unknown_var_4616_ptr;
  *(int8_t *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = &unknown_var_4872_ptr;
  param_1[0x1d] = &unknown_var_4912_ptr;
  *(int32_t *)(param_1 + 0x2e) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x174) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x17c) = 3;
  param_1[0x2c] = 1;
  param_1[0x2b] = &system_data_0000;
  param_1[0x2d] = 0;
  *(int32_t *)(param_1 + 0x2f) = 0;
  puVar1 = param_1 + 0x30;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x35) = 3;
  *puVar1 = puVar1;
  param_1[0x31] = puVar1;
  param_1[0x32] = 0;
  *(int8_t *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(int32_t *)(param_1 + 0x39) = 3;
  _Mtx_init_in_situ(param_1 + 0x3b,2);
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x80000,0x10,6,uVar3);
  param_1[0x45] = uVar3;
  uVar2 = (**(code **)(**(int64_t **)(system_main_module_state + 0x2b0) + 0xb0))();
  *(int32_t *)(param_1 + 0x46) = uVar2;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803c89c0(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar1 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x278,8,3,0xfffffffffffffffe);
  puVar3 = (uint64_t *)0x0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  *(int32_t *)(puVar1 + 0x4e) = 3;
  puVar1[0x4a] = param_1;
  puVar1[0x41] = 0xffffffffffffff00;
  puVar1[0x42] = 0xffffffffffffffff;
  puVar1[0x43] = 0xffffffffffffffff;
  puVar1[0x44] = 0xffffffffffffffff;
  puVar1[0x45] = 0xffffffffffffffff;
  puVar1[0x46] = 0xffffffffffffffff;
  puVar1[0x47] = 0xffffffffffffffff;
  puVar1[0x48] = 0xffffffffffffffff;
  *(int8_t *)(puVar1 + 0x49) = 0xff;
  *puVar1 = 0;
  puVar6 = *(uint64_t **)(param_1 + 0x10);
  if (puVar6 < *(uint64_t **)(param_1 + 0x18)) {
    *(uint64_t **)(param_1 + 0x10) = puVar6 + 1;
    *puVar6 = puVar1;
    goto LAB_1803c8b31;
  }
  puVar5 = *(uint64_t **)(param_1 + 8);
  lVar2 = (int64_t)puVar6 - (int64_t)puVar5 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
LAB_1803c8ac8:
    puVar3 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,lVar2 * 8,*(int8_t *)(param_1 + 0x20));
    puVar6 = *(uint64_t **)(param_1 + 0x10);
    puVar5 = *(uint64_t **)(param_1 + 8);
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 != 0) goto LAB_1803c8ac8;
  }
  if (puVar5 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar5,(int64_t)puVar6 - (int64_t)puVar5);
  }
  *puVar3 = puVar1;
  if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t **)(param_1 + 8) = puVar3;
  *(uint64_t **)(param_1 + 0x10) = puVar3 + 1;
  *(uint64_t **)(param_1 + 0x18) = puVar3 + lVar2;
LAB_1803c8b31:
  uVar4 = (**(code **)(**(int64_t **)(param_1 + 200) + 0x18))(*(int64_t **)(param_1 + 200),0x40,1)
  ;
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x78))(*(int64_t **)(param_1 + 0xb8),uVar4);
  *puVar1 = uVar4;
  *(char *)(param_1 + 0xb0) = *(char *)(param_1 + 0xb0) + '\x01';
  return puVar1;
}






// 函数: void FUN_1803c8b80(int64_t param_1,uint64_t *param_2)
void FUN_1803c8b80(int64_t param_1,uint64_t *param_2)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  
  uVar8 = 0;
  plVar2 = param_2 + 0x4b;
  lVar5 = *plVar2;
  uVar7 = uVar8;
  if (param_2[0x4c] - lVar5 >> 3 != 0) {
    do {
      (**(code **)(*(int64_t *)param_2[0x4a] + 0x98))
                ((int64_t *)param_2[0x4a],*(uint64_t *)(uVar8 + *plVar2));
      *(uint64_t *)(uVar8 + *plVar2) = 0;
      uVar6 = (int)uVar7 + 1;
      uVar8 = uVar8 + 8;
      lVar5 = *plVar2;
      uVar7 = (uint64_t)uVar6;
    } while ((uint64_t)(int64_t)(int)uVar6 < (uint64_t)(param_2[0x4c] - lVar5 >> 3));
  }
  param_2[0x4c] = lVar5;
  lVar5 = (int64_t)(*(char *)(param_2 + 0x41) + -1);
  if (-1 < *(char *)(param_2 + 0x41) + -1) {
    plVar4 = param_2 + lVar5 + 1;
    do {
      (**(code **)(*(int64_t *)param_2[0x4a] + 0x90))
                ((int64_t *)param_2[0x4a],*(uint64_t *)*plVar4);
      plVar3 = *(int64_t **)*plVar4;
      *(int64_t *)*plVar4 = 0;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
      plVar3 = (int64_t *)*plVar4;
      if (plVar3 != (int64_t *)0x0) {
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar3);
      }
      *plVar4 = 0;
      plVar4 = plVar4 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  FUN_1801ba580(param_1 + 8,param_2);
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x80))(*(int64_t **)(param_1 + 0xb8),*param_2,1);
  (*(code *)**(uint64_t **)*param_2)();
  if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uVar8 = (uint64_t)param_2 & 0xffffffffffc00000;
  if (uVar8 != 0) {
    lVar5 = uVar8 + 0x80 + ((int64_t)param_2 - uVar8 >> 0x10) * 0x50;
    lVar5 = lVar5 - (uint64_t)*(uint *)(lVar5 + 4);
    if ((*(void ***)(uVar8 + 0x70) == &ExceptionList) && (*(char *)(lVar5 + 0xe) == '\0')) {
      *param_2 = *(uint64_t *)(lVar5 + 0x20);
      *(uint64_t **)(lVar5 + 0x20) = param_2;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar8,CONCAT71(0xff000000,*(void ***)(uVar8 + 0x70) == &ExceptionList),
                          param_2,uVar8,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c8ce0(int64_t param_1)
void FUN_1803c8ce0(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uStack_168;
  int32_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_148;
  int32_t uStack_140;
  int64_t lStack_138;
  void *puStack_110;
  int64_t lStack_108;
  int32_t uStack_f8;
  uint uStack_b0;
  int64_t lStack_a8;
  
  lVar4 = system_system_data_config;
  uStack_158 = 0xfffffffffffffffe;
  *(uint64_t *)(param_1 + 200) = *(uint64_t *)(system_system_data_config + 0x20);
  func_0x0001803cf530(&uStack_148,lVar4 + 0x38);
  uStack_168 = 0;
  uStack_160 = 0xc11ce560;
  uStack_148 = 0;
  uStack_140 = 0xc11ce560;
  if (lStack_a8 == 0) {
    lStack_a8 = *(int64_t *)(lVar4 + 0x30);
  }
  puStack_110 = &unknown_var_8032_ptr;
  lStack_108 = param_1 + 0xe8;
  lStack_138 = param_1 + 0xd8;
  uStack_b0 = uStack_b0 | 0x4442;
  uStack_f8 = 2;
  plVar1 = (int64_t *)
           (**(code **)(**(int64_t **)(param_1 + 200) + 0x88))
                     (*(int64_t **)(param_1 + 200),&uStack_148);
  *(int64_t **)(param_1 + 0xb8) = plVar1;
  (**(code **)(*plVar1 + 0x1d8))(plVar1,&uStack_168);
  puVar2 = (uint64_t *)(**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x378))();
  if (puVar2 != (uint64_t *)0x0) {
    (**(code **)*puVar2)(puVar2,4,1);
    (**(code **)*puVar2)(puVar2,1,1);
  }
  uVar3 = *(uint64_t *)(system_system_data_config + 0x28);
  *(int64_t *)(param_1 + 0x140) = param_1;
  plVar1 = *(int64_t **)(param_1 + 200);
  *(int64_t **)(param_1 + 0x130) = plVar1;
  *(uint64_t *)(param_1 + 0x138) = uVar3;
  uVar3 = (**(code **)(*plVar1 + 0xe8))(plVar1,uVar3,0x3f000000,0x3dcccccd);
  *(uint64_t *)(param_1 + 0x148) = uVar3;
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3);
  *puVar2 = &unknown_var_4552_ptr;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &unknown_var_4680_ptr;
  puVar2[3] = 0;
  *(int32_t *)(puVar2 + 4) = 0;
  *puVar2 = &unknown_var_4488_ptr;
  puVar2[5] = param_1;
  *(uint64_t **)(param_1 + 0xc0) = puVar2;
  uVar3 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x300))();
  *(int32_t *)(puVar2 + 4) = 1;
  puVar2[3] = 0;
  puVar2[2] = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c8ef0(int64_t param_1)
void FUN_1803c8ef0(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t lStackX_8;
  int64_t *plStackX_10;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x1b0))(*(int64_t **)(param_1 + 0xb8),1,0);
  }
  puVar5 = (uint64_t *)0x0;
  lVar2 = *(int64_t *)(param_1 + 8);
  puVar6 = puVar5;
  puVar8 = puVar5;
  if (*(int64_t *)(param_1 + 0x10) - lVar2 >> 3 != 0) {
    do {
      lStackX_8 = *(int64_t *)((int64_t)puVar8 + lVar2);
      if (lStackX_8 != 0) {
        plStackX_10 = (int64_t *)(lStackX_8 + 600);
        if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lStackX_8);
      }
      *(uint64_t *)((int64_t)puVar8 + *(int64_t *)(param_1 + 8)) = 0;
      uVar7 = (int)puVar6 + 1;
      lVar2 = *(int64_t *)(param_1 + 8);
      lStackX_8 = 0;
      puVar6 = (uint64_t *)(uint64_t)uVar7;
      puVar8 = puVar8 + 1;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0x10) - lVar2 >> 3));
  }
  *(int64_t *)(param_1 + 0x10) = lVar2;
  lVar2 = *(int64_t *)(param_1 + 0x48);
  puVar6 = puVar5;
  puVar8 = puVar5;
  if (*(int64_t *)(param_1 + 0x50) - lVar2 >> 3 != 0) {
    do {
      puVar1 = *(uint64_t **)((int64_t)puVar6 + lVar2);
      if (puVar1 != (uint64_t *)0x0) {
        lVar2 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1,0);
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar2);
        }
      }
      *(uint64_t *)((int64_t)puVar6 + *(int64_t *)(param_1 + 0x48)) = 0;
      uVar7 = (int)puVar8 + 1;
      lVar2 = *(int64_t *)(param_1 + 0x48);
      puVar6 = puVar6 + 1;
      puVar8 = (uint64_t *)(uint64_t)uVar7;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0x50) - lVar2 >> 3));
  }
  *(int64_t *)(param_1 + 0x50) = lVar2;
  lVar2 = *(int64_t *)(param_1 + 0x68);
  puVar6 = puVar5;
  puVar8 = puVar5;
  if (*(int64_t *)(param_1 + 0x70) - lVar2 >> 3 != 0) {
    do {
      if (*(int64_t *)((int64_t)puVar6 + lVar2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)((int64_t)puVar6 + lVar2) = 0;
      uVar7 = (int)puVar8 + 1;
      lVar2 = *(int64_t *)(param_1 + 0x68);
      puVar6 = puVar6 + 1;
      puVar8 = (uint64_t *)(uint64_t)uVar7;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0x70) - lVar2 >> 3));
  }
  *(int64_t *)(param_1 + 0x70) = lVar2;
  lVar2 = param_1 + 0x180;
  for (lVar4 = *(int64_t *)(param_1 + 0x188); lVar4 != lVar2; lVar4 = func_0x00018066bd70(lVar4)) {
    puVar6 = *(uint64_t **)(lVar4 + 0x20);
    if (puVar6 != (uint64_t *)0x0) {
      lVar3 = __RTCastToVoid(puVar6);
      (**(code **)*puVar6)(puVar6,0);
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
    }
  }
  puVar6 = *(uint64_t **)(param_1 + 400);
  if (puVar6 != (uint64_t *)0x0) {
    FUN_18004b790(lVar2,*puVar6);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar6);
  }
  *(int64_t *)lVar2 = lVar2;
  *(int64_t *)(param_1 + 0x188) = lVar2;
  *(uint64_t *)(param_1 + 400) = 0;
  *(int8_t *)(param_1 + 0x198) = 0;
  *(uint64_t *)(param_1 + 0x1a0) = 0;
  FUN_1803cec30(param_1 + 0x150);
  lStackX_8 = CONCAT62(lStackX_8._2_6_,3);
  uVar7 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x90))
                    (*(int64_t **)(param_1 + 0xb8),&lStackX_8);
  uVar9 = (uint64_t)uVar7;
  if (uVar7 != 0) {
    puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,(uint64_t)uVar7 * 8,3);
  }
  lStackX_8 = CONCAT62(lStackX_8._2_6_,3);
  (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x98))
            (*(int64_t **)(param_1 + 0xb8),&lStackX_8,puVar5,uVar7,0);
  puVar6 = puVar5;
  if (uVar7 != 0) {
    do {
      (*(code *)**(uint64_t **)*puVar6)();
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar9 != 0);
  }
  FUN_18004be90(system_system_data_config + 0x48);
  if (puVar5 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar5);
  }
  if (*(int64_t **)(param_1 + 0xb8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xb8) + 8))();
    *(uint64_t *)(param_1 + 0xb8) = 0;
  }
  if (*(int64_t *)(param_1 + 0x228) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x228) = 0;
  puVar6 = *(uint64_t **)(param_1 + 0xc0);
  if (puVar6 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar6);
    (**(code **)*puVar6)(puVar6,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  *(uint64_t *)(param_1 + 0xc0) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c9240(int64_t param_1,char param_2,float param_3,float param_4)
void FUN_1803c9240(int64_t param_1,char param_2,float param_3,float param_4)

{
  int8_t uVar1;
  uint64_t *puVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if (param_2 != '\0') {
    if (*(char *)(param_1 + 0x88) != '\0') {
      (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x1b0))(*(int64_t **)(param_1 + 0xb8),1,0);
      *(int8_t *)(param_1 + 0x88) = 0;
    }
    fVar5 = param_3 * param_4 + *(float *)(param_1 + 0x8c);
    if (0.0 <= fVar5) {
      if (0.1 <= fVar5) {
        fVar5 = 0.1;
      }
    }
    else {
      fVar5 = 0.0;
    }
    iVar4 = 0;
    param_4 = param_4 * 0.016666668;
    *(int32_t *)(param_1 + 0x234) = 0;
    *(float *)(param_1 + 0x8c) = fVar5;
    iVar3 = 0;
    if (0.0 < param_4) {
      while (iVar4 = iVar3, param_4 < fVar5) {
        *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
        fVar5 = fVar5 - param_4;
        *(float *)(param_1 + 0x8c) = fVar5;
        iVar3 = *(int *)(param_1 + 0x234);
      }
    }
    if (2 < iVar4) {
      iVar4 = 2;
      *(int32_t *)(param_1 + 0x234) = 2;
    }
    if (0 < iVar4) {
      if (*(int *)(system_system_data_config + 0xee0) == 0) {
        LOCK();
        uVar1 = *(int8_t *)(param_1 + 0xd4);
        *(int8_t *)(param_1 + 0xd4) = 0;
        UNLOCK();
        (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x188))
                  (*(int64_t **)(param_1 + 0xb8),uVar1,*(uint64_t *)(param_1 + 0xc0),
                   *(uint64_t *)(param_1 + 0x228),0x80000,1);
        puVar2 = *(uint64_t **)(param_1 + 0xc0);
        if ((void *)*puVar2 == &unknown_var_4488_ptr) {
          (**(code **)(*(int64_t *)puVar2[2] + 0x80))();
        }
        else {
          (**(code **)((void *)*puVar2 + 0x20))(puVar2);
        }
        *(int8_t *)(param_1 + 0x88) = 1;
      }
      else {
        do {
          (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x188))
                    (*(int64_t **)(param_1 + 0xb8),0x3c888889,0,*(uint64_t *)(param_1 + 0x228),
                     0x80000,1);
          (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x1b0))(*(int64_t **)(param_1 + 0xb8),1);
          *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + -1;
        } while (0 < *(int *)(param_1 + 0x234));
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c9267(int64_t param_1)
void FUN_1803c9267(int64_t param_1)

{
  uint64_t *puVar1;
  int iVar2;
  int iVar3;
  int64_t unaff_RBX;
  bool in_ZF;
  float unaff_XMM6_Da;
  float fVar4;
  float unaff_XMM7_Da;
  float fVar5;
  
  if (!in_ZF) {
    (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x1b0))(*(int64_t **)(param_1 + 0xb8),1,0);
    *(int8_t *)(unaff_RBX + 0x88) = 0;
  }
  fVar4 = unaff_XMM6_Da * unaff_XMM7_Da + *(float *)(unaff_RBX + 0x8c);
  if (0.0 <= fVar4) {
    if (0.1 <= fVar4) {
      fVar4 = 0.1;
    }
  }
  else {
    fVar4 = 0.0;
  }
  iVar3 = 0;
  fVar5 = unaff_XMM7_Da * 0.016666668;
  *(int32_t *)(unaff_RBX + 0x234) = 0;
  *(float *)(unaff_RBX + 0x8c) = fVar4;
  iVar2 = 0;
  if (0.0 < fVar5) {
    while (iVar3 = iVar2, fVar5 < fVar4) {
      *(int *)(unaff_RBX + 0x234) = *(int *)(unaff_RBX + 0x234) + 1;
      fVar4 = fVar4 - fVar5;
      *(float *)(unaff_RBX + 0x8c) = fVar4;
      iVar2 = *(int *)(unaff_RBX + 0x234);
    }
  }
  if (2 < iVar3) {
    iVar3 = 2;
    *(int32_t *)(unaff_RBX + 0x234) = 2;
  }
  if (0 < iVar3) {
    if (*(int *)(system_system_data_config + 0xee0) == 0) {
      LOCK();
      *(int8_t *)(unaff_RBX + 0xd4) = 0;
      UNLOCK();
      (**(code **)(**(int64_t **)(unaff_RBX + 0xb8) + 0x188))
                (*(int64_t **)(unaff_RBX + 0xb8),0x3c888889,*(uint64_t *)(unaff_RBX + 0xc0),
                 *(uint64_t *)(unaff_RBX + 0x228),0x80000);
      puVar1 = *(uint64_t **)(unaff_RBX + 0xc0);
      if ((void *)*puVar1 == &unknown_var_4488_ptr) {
        (**(code **)(*(int64_t *)puVar1[2] + 0x80))();
      }
      else {
        (**(code **)((void *)*puVar1 + 0x20))(puVar1);
      }
      *(int8_t *)(unaff_RBX + 0x88) = 1;
    }
    else {
      do {
        (**(code **)(**(int64_t **)(unaff_RBX + 0xb8) + 0x188))
                  (*(int64_t **)(unaff_RBX + 0xb8),0x3c888889,0,*(uint64_t *)(unaff_RBX + 0x228),
                   0x80000);
        (**(code **)(**(int64_t **)(unaff_RBX + 0xb8) + 0x1b0))(*(int64_t **)(unaff_RBX + 0xb8),1)
        ;
        *(int *)(unaff_RBX + 0x234) = *(int *)(unaff_RBX + 0x234) + -1;
      } while (0 < *(int *)(unaff_RBX + 0x234));
    }
  }
  return;
}






// 函数: void FUN_1803c93e5(void)
void FUN_1803c93e5(void)

{
  return;
}






// 函数: void FUN_1803c93e6(uint64_t param_1,uint64_t param_2)
void FUN_1803c93e6(uint64_t param_1,uint64_t param_2)

{
  int64_t in_RAX;
  int64_t unaff_RBX;
  
  (**(code **)(in_RAX + 0x20))(param_2);
  *(int8_t *)(unaff_RBX + 0x88) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c93f0(int64_t param_1)
void FUN_1803c93f0(int64_t param_1)

{
  uint64_t *puVar1;
  char cVar2;
  
  if ((((*(int *)(system_system_data_config + 0xee0) == 0) && (*(char *)(param_1 + 0x88) != '\0')) &&
      (0 < *(int *)(param_1 + 0x234))) && (*(char *)(param_1 + 0xd4) != '\0')) {
    cVar2 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x1b0))
                      (*(int64_t **)(param_1 + 0xb8),0,0);
    if (cVar2 == '\x01') {
      *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + -1;
      *(int8_t *)(param_1 + 0x88) = 0;
      if (0 < *(int *)(param_1 + 0x234)) {
        LOCK();
        *(int8_t *)(param_1 + 0xd4) = 0;
        UNLOCK();
        (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x188))
                  (*(int64_t **)(param_1 + 0xb8),0x3c888889,*(uint64_t *)(param_1 + 0xc0),
                   *(uint64_t *)(param_1 + 0x228),0x80000,1);
        puVar1 = *(uint64_t **)(param_1 + 0xc0);
        if ((void *)*puVar1 == &unknown_var_4488_ptr) {
          (**(code **)(*(int64_t *)puVar1[2] + 0x80))();
          *(int8_t *)(param_1 + 0x88) = 1;
          return;
        }
        (**(code **)((void *)*puVar1 + 0x20))(puVar1);
        *(int8_t *)(param_1 + 0x88) = 1;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c94f0(int64_t param_1)
void FUN_1803c94f0(int64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *plVar5;
  
  if ((*(int *)(system_system_data_config + 0xee0) == 0) && (*(char *)(param_1 + 0x88) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x234);
    while (0 < iVar1) {
      cVar3 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x1b0))
                        (*(int64_t **)(param_1 + 0xb8),0,0);
      uVar2 = system_context_ptr;
      while (system_context_ptr = uVar2, cVar3 == '\0') {
        lVar4 = FUN_18005e890(uVar2);
        if (lVar4 != 0) {
          plVar5 = (int64_t *)FUN_18005e890(uVar2);
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        cVar3 = (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x1b0))();
        uVar2 = system_context_ptr;
      }
      *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + -1;
      *(int8_t *)(param_1 + 0x88) = 0;
      if (*(int *)(param_1 + 0x234) < 1) {
        return;
      }
      (**(code **)(**(int64_t **)(param_1 + 0xb8) + 0x188))
                (*(int64_t **)(param_1 + 0xb8),0x3c888889,0,*(uint64_t *)(param_1 + 0x228),
                 0x80000,1);
      *(int8_t *)(param_1 + 0x88) = 1;
      iVar1 = *(int *)(param_1 + 0x234);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803c9527(void)
void FUN_1803c9527(void)

{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t unaff_RDI;
  
  while( true ) {
    cVar2 = (**(code **)(**(int64_t **)(unaff_RDI + 0xb8) + 0x1b0))
                      (*(int64_t **)(unaff_RDI + 0xb8),0,0);
    uVar1 = system_context_ptr;
    while (system_context_ptr = uVar1, cVar2 == '\0') {
      lVar3 = FUN_18005e890(uVar1);
      if (lVar3 != 0) {
        plVar4 = (int64_t *)FUN_18005e890(uVar1);
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      cVar2 = (**(code **)(**(int64_t **)(unaff_RDI + 0xb8) + 0x1b0))();
      uVar1 = system_context_ptr;
    }
    *(int *)(unaff_RDI + 0x234) = *(int *)(unaff_RDI + 0x234) + -1;
    *(int8_t *)(unaff_RDI + 0x88) = 0;
    if (*(int *)(unaff_RDI + 0x234) < 1) break;
    (**(code **)(**(int64_t **)(unaff_RDI + 0xb8) + 0x188))
              (*(int64_t **)(unaff_RDI + 0xb8),0x3c888889,0,*(uint64_t *)(unaff_RDI + 0x228),
               0x80000);
    *(int8_t *)(unaff_RDI + 0x88) = 1;
    if (*(int *)(unaff_RDI + 0x234) < 1) {
      return;
    }
  }
  return;
}






// 函数: void FUN_1803c9601(void)
void FUN_1803c9601(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




