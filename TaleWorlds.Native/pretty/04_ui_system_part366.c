#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part366.c - 2 个函数

// 函数: void FUN_180865a0f(void)
void FUN_180865a0f(void)

{
  return;
}



uint64_t * FUN_180865a20(uint64_t *param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  int32_t *puVar6;
  uint uVar7;
  uint64_t uVar8;
  
  *(int8_t *)(param_1 + 1) = 0;
  *(int32_t *)(param_1 + 4) = 0xffffffff;
  uVar8 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = param_1 + 8;
  param_1[7] = param_1 + 0xe;
  *param_1 = &unknown_var_9632_ptr;
  param_1[8] = &system_string1_ptr;
  *(int8_t *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar6 = (int32_t *)SystemCoreProcessor();
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(int32_t *)(param_1 + 0xc) = *puVar6;
  *(int32_t *)((int64_t)param_1 + 100) = uVar1;
  *(int32_t *)(param_1 + 0xd) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x6c) = uVar3;
  *(int8_t *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = &unknown_var_9592_ptr;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar4 = func_0x000180242600();
  if (iVar4 != 0) {
    do {
      if (*(int64_t *)(uVar8 * 8 + 0x180bef750) == 0x180bef740) {
        *(int *)(param_1 + 4) = (int)uVar8;
        return param_1;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar5 = func_0x000180242600();
    } while (uVar7 < uVar5);
  }
  *(int32_t *)(param_1 + 4) = 0xffffffff;
  return param_1;
}



uint64_t * FUN_180865b00(uint64_t *param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  
  puVar6 = param_1 + 1;
  param_1[2] = puVar6;
  param_1[3] = 0;
  *puVar6 = puVar6;
  *param_1 = &unknown_var_2912_ptr;
  puVar6 = param_1 + 10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 0;
  *(int32_t *)((int64_t)param_1 + 0x3c) = 1;
  *(int32_t *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *puVar6 = puVar6;
  param_1[0xb] = puVar6;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x6c) = 1;
  *(uint64_t *)((int64_t)param_1 + 0x74) = 0;
  *(int8_t *)((int64_t)param_1 + 0x7c) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar5 = (int32_t *)SystemCoreProcessor();
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(int32_t *)(param_1 + 0x15) = *puVar5;
  *(int32_t *)((int64_t)param_1 + 0xac) = uVar1;
  *(int32_t *)(param_1 + 0x16) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0xb4) = uVar3;
  puVar6 = (uint64_t *)SystemCoreProcessor();
  uVar4 = puVar6[1];
  param_1[0x17] = *puVar6;
  param_1[0x18] = uVar4;
  *(int8_t *)(param_1 + 0x19) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



uint64_t * FUN_180865bc0(uint64_t *param_1,uint64_t param_2)

{
  FUN_180840270(param_1 + 0x11);
  func_0x00018085deb0(param_1 + 10);
  FUN_180865ec0(param_1 + 5);
  *param_1 = &unknown_var_9984_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180865c20(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int8_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  uVar3 = *(int32_t *)(param_2 + 0x10);
  *(int32_t *)(param_1 + 0x68) = *(int32_t *)(param_2 + 0xc);
  switch(uVar3) {
  case 1:
    uVar3 = 2;
    break;
  case 2:
    uVar3 = 3;
    break;
  case 3:
    uVar3 = 4;
    break;
  case 4:
    uVar3 = 5;
    break;
  case 5:
    uVar3 = 6;
    break;
  case 6:
    uVar3 = 7;
    break;
  default:
    uVar3 = 1;
  }
  *(int32_t *)(param_1 + 0x40) = uVar3;
  puVar6 = (int32_t *)
           FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x39,&unknown_var_3024_ptr,0x322,0);
  if (puVar6 == (int32_t *)0x0) {
    uVar7 = 0x26;
  }
  else {
    uVar3 = func_0x000180242600();
    uVar4 = func_0x000180867200(*(int32_t *)(param_1 + 0x3c));
    puVar6[4] = uVar4;
    *puVar6 = 0x39;
    *(int16_t *)(puVar6 + 2) = 0x106;
    *(int8_t *)((int64_t)puVar6 + 10) = 3;
    puVar6[3] = uVar3;
    *(int32_t *)((int64_t)puVar6 + 0x15) = 0x20214;
    uVar7 = *(uint64_t *)(param_1 + 0xb0);
    *(uint64_t *)((int64_t)puVar6 + 0x19) = *(uint64_t *)(param_1 + 0xa8);
    *(uint64_t *)((int64_t)puVar6 + 0x21) = uVar7;
    uVar7 = *(uint64_t *)(param_1 + 0xa0);
    *(uint64_t *)((int64_t)puVar6 + 0x29) = *(uint64_t *)(param_1 + 0x98);
    *(uint64_t *)((int64_t)puVar6 + 0x31) = uVar7;
    uVar3 = *(int32_t *)(param_2 + 0x1d);
    uVar4 = *(int32_t *)(param_2 + 0x21);
    uVar1 = *(int32_t *)(param_2 + 0x25);
    *(int32_t *)(param_1 + 0xb8) = *(int32_t *)(param_2 + 0x19);
    *(int32_t *)(param_1 + 0xbc) = uVar3;
    *(int32_t *)(param_1 + 0xc0) = uVar4;
    *(int32_t *)(param_1 + 0xc4) = uVar1;
    if ((*(byte *)(param_2 + 10) < 3) ||
       ((*(int64_t *)(param_1 + 0xb8) == *(int64_t *)(param_1 + 0xa8) &&
        (*(int64_t *)(param_1 + 0xc0) == *(int64_t *)(param_1 + 0xb0))))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(int8_t *)(param_1 + 200) = uVar2;
    uVar10 = (int)*(uint *)(param_1 + 0x34) >> 0x1f;
    iVar5 = (*(uint *)(param_1 + 0x34) ^ uVar10) - uVar10;
    iVar9 = *(int *)(param_1 + 0x30) + 1;
    if (iVar5 < iVar9) {
      iVar11 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar9;
      if (iVar9 <= iVar11) {
        iVar5 = iVar11;
      }
      iVar12 = 4;
      if ((3 < iVar5) && (iVar12 = iVar11, iVar11 < iVar9)) {
        iVar12 = iVar9;
      }
      uVar7 = FUN_1807d3f50(param_1 + 0x28,iVar12);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
    }
    puVar8 = (uint64_t *)
             ((int64_t)*(int *)(param_1 + 0x30) * 0x10 + *(int64_t *)(param_1 + 0x28));
    *puVar8 = puVar6;
    puVar8[1] = param_3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    uVar7 = FUN_180867280(param_1,param_3);
    if (((int)uVar7 == 0) &&
       ((*(char *)(param_1 + 200) == (char)uVar7 ||
        (uVar7 = FUN_180865e20(param_1,param_3), (int)uVar7 == 0)))) {
      uVar7 = 0;
    }
  }
  return uVar7;
}



uint64_t FUN_180865e20(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  plVar4 = (int64_t *)0x0;
  plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0x50) + -8);
  if (*(int64_t *)(param_1 + 0x50) == 0) {
    plVar3 = plVar4;
  }
  plVar1 = plVar4;
  if (plVar3 != (int64_t *)0x0) {
    plVar1 = plVar3 + 1;
  }
  while( true ) {
    if (plVar1 == (int64_t *)(param_1 + 0x50)) {
      return 0;
    }
    plVar3 = plVar1 + -1;
    if (plVar1 == (int64_t *)0x0) {
      plVar3 = plVar4;
    }
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,*(uint64_t *)(param_1 + 0x48));
    if ((int)uVar2 != 0) break;
    if (plVar1 == (int64_t *)(param_1 + 0x50)) {
      return 0;
    }
    plVar3 = (int64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (int64_t *)0x0) {
      plVar1 = plVar3 + 1;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180865ec0(int64_t *param_1)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    uVar5 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    puVar2 = (uint64_t *)((int64_t)iVar1 * 0x10 + *param_1);
    lVar4 = (int64_t)-iVar1;
    if (0 < lVar4) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uVar5 = *(uint *)((int64_t)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) &&
     (uVar3 = FUN_1807d3f50(param_1,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



uint64_t FUN_180865f90(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  if ((param_2 == *(int64_t *)(param_1 + 0x48)) &&
     (uVar1 = FUN_180866d00(param_1,1,0), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180865fc0(int64_t param_1,int16_t param_2,uint64_t param_3,char param_4)

{
  char cVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint64_t uVar11;
  
  if (((*(int *)(param_1 + 0x38) != 0) ||
      (cVar1 = (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x18))(), cVar1 != '\0')) &&
     (uVar5 = FUN_180866d00(param_1,1,1), (int)uVar5 != 0)) {
    return uVar5;
  }
  uVar5 = 0x2ee;
  if (param_4 != '\0') {
    uVar5 = 0x3c;
  }
  uVar5 = (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x20))
                    (*(int64_t **)(param_1 + 0x20),param_2,param_3,uVar5);
  if ((int)uVar5 != 0) {
    uVar3 = 9;
    if ((int)uVar5 == 0x2a) {
      uVar3 = 7;
    }
    *(int32_t *)(param_1 + 0x6c) = uVar3;
    return uVar5;
  }
  uVar5 = (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x10))
                    (*(int64_t **)(param_1 + 0x20),6,1,0xffffffff,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar11 = 0;
  uVar5 = (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x10))
                    (*(int64_t **)(param_1 + 0x20),6,3,0xffffffff,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  puVar6 = (int32_t *)
           FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x39,&unknown_var_3024_ptr,0x249,
                         uVar11 & 0xffffffff00000000);
  if (puVar6 == (int32_t *)0x0) {
    return 0x26;
  }
  uVar2 = func_0x000180242600();
  uVar3 = *(int32_t *)(param_1 + 0x3c);
  *puVar6 = 0x39;
  *(int16_t *)(puVar6 + 2) = 0x106;
  *(int8_t *)((int64_t)puVar6 + 10) = 3;
  puVar6[3] = uVar2;
  uVar3 = func_0x000180867200(uVar3);
  puVar6[4] = uVar3;
  *(int32_t *)((int64_t)puVar6 + 0x15) = 0x20214;
  *(int8_t *)(puVar6 + 5) = 0;
  uVar5 = *(uint64_t *)(param_1 + 0xb0);
  *(uint64_t *)((int64_t)puVar6 + 0x19) = *(uint64_t *)(param_1 + 0xa8);
  *(uint64_t *)((int64_t)puVar6 + 0x21) = uVar5;
  uVar9 = (int)*(uint *)(param_1 + 0x34) >> 0x1f;
  iVar8 = *(int *)(param_1 + 0x30) + 1;
  iVar4 = (*(uint *)(param_1 + 0x34) ^ uVar9) - uVar9;
  if (iVar4 < iVar8) {
    iVar10 = (int)((float)iVar4 * 1.5);
    iVar4 = iVar8;
    if (iVar8 <= iVar10) {
      iVar4 = iVar10;
    }
    if (iVar4 < 4) {
      iVar10 = 4;
    }
    else if (iVar10 < iVar8) {
      iVar10 = iVar8;
    }
    uVar5 = FUN_1807d3f50(param_1 + 0x28,iVar10);
    if ((int)uVar5 == 0) goto LAB_18086615c;
  }
  else {
LAB_18086615c:
    puVar7 = (uint64_t *)
             ((int64_t)*(int *)(param_1 + 0x30) * 0x10 + *(int64_t *)(param_1 + 0x28));
    *puVar7 = puVar6;
    puVar7[1] = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    uVar5 = FUN_180768b70(param_1 + 0x74);
    if ((int)uVar5 == 0) {
      *(int32_t *)(param_1 + 0x38) = 1;
      *(int32_t *)(param_1 + 0x6c) = 2;
      goto LAB_180866197;
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
LAB_180866197:
  uVar5 = FUN_180768b70(param_1 + 0x74);
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808661e0(int64_t *param_1,int64_t param_2,int param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  float fVar8;
  
  uVar5 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  lVar7 = (int64_t)param_3;
  iVar2 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar5) - uVar5;
  if (iVar2 < param_3) {
    fVar8 = (float)iVar2 * 1.5;
    iVar6 = (int)fVar8;
    iVar2 = iVar6;
    if (iVar6 < param_3) {
      iVar2 = param_3;
    }
    if (iVar2 < 3) {
      iVar6 = 3;
    }
    else if (iVar6 < param_3) {
      iVar6 = param_3;
    }
    uVar3 = FUN_180849120(fVar8,iVar6);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    uVar5 = *(uint *)((int64_t)param_1 + 0xc);
    if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
      if (0 < iVar2) {
        return 0x1c;
      }
      if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
      }
      *param_1 = 0;
      *(int32_t *)((int64_t)param_1 + 0xc) = 0;
    }
    if (iVar2 < 0) {
      if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
        memset(*param_1 + (int64_t)iVar2 * 0x14,0,(uint64_t)(uint)-iVar2 * 0x14);
      }
    }
    *(int32_t *)(param_1 + 1) = 0;
  }
  if ((param_3 != 0) && (0 < param_3)) {
    param_2 = param_2 - *param_1;
    puVar4 = (uint64_t *)*param_1;
    do {
      puVar1 = (uint64_t *)(param_2 + (int64_t)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(int32_t *)(puVar4 + 2) = *(int32_t *)(param_2 + -4 + (int64_t)puVar4 + 0x14);
      lVar7 = lVar7 + -1;
      puVar4 = (uint64_t *)((int64_t)puVar4 + 0x14);
    } while (lVar7 != 0);
  }
  *(int *)(param_1 + 1) = param_3;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180866340(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(uint64_t **)(param_1 + 0x28))[1];
    uVar1 = **(uint64_t **)(param_1 + 0x28);
    if (0 < *(int *)(param_2 + 1)) {
      return 0x1c;
    }
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
    uVar2 = (*(code *)**(uint64_t **)*param_2)((uint64_t *)*param_2,uVar1,uVar2);
    if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),**(uint64_t **)(param_1 + 0x28),
                    &unknown_var_3024_ptr,0x1bf,1);
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180866550(uint64_t param_1,int64_t param_2)
void FUN_180866550(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t auStack_268 [560];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_268;
  plVar1 = (int64_t *)func_0x00018084c030(*(int32_t *)(param_2 + 0xc));
  if (plVar1 != (int64_t *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    uVar3 = uVar2 + 0xf;
    if (uVar3 <= uVar2) {
      uVar3 = 0xffffffffffffff0;
    }
                    // WARNING: Subroutine does not return
    SystemCore_MemoryManager0(uVar3 & 0xfffffffffffffff0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_268);
}



uint64_t FUN_180866820(int64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = (int)param_1[1] + 1;
  uVar5 = (int)*(uint *)((int64_t)param_1 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)((int64_t)param_1 + 0xc) ^ uVar5) - uVar5;
  if (iVar1 < iVar4) {
    iVar6 = (int)((float)iVar1 * 1.5);
    iVar1 = iVar4;
    if (iVar4 <= iVar6) {
      iVar1 = iVar6;
    }
    if (iVar1 < 4) {
      iVar6 = 4;
    }
    else if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    uVar2 = FUN_1807d3f50(param_1,iVar6);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  uVar2 = param_2[1];
  puVar3 = (uint64_t *)((int64_t)(int)param_1[1] * 0x10 + *param_1);
  *puVar3 = *param_2;
  puVar3[1] = uVar2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 0;
}



uint64_t FUN_1808668a0(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  
  if (param_2 == 0) {
    return 0x1c;
  }
  if (*(char *)(param_2 + 9) != '\x01') {
    if ((*(int *)(param_1 + 0x38) != 2) && (*(char *)(param_2 + 9) != '\x03')) {
      return 0;
    }
    iVar4 = FUN_180866550();
    if (iVar4 == 0) {
      return 0;
    }
    *(int32_t *)(param_1 + 0x70) = 6;
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  if (*(byte *)(param_2 + 10) < 2) {
    if (iVar4 == 1) {
LAB_1808668d6:
      *(int32_t *)(param_1 + 0x70) = 6;
      return 0;
    }
  }
  else if (iVar4 == 0) {
    if ((*(uint *)(param_2 + 0x15) & 0xffffff00) == 0x20200) {
      uVar5 = FUN_180865c20();
      if ((int)uVar5 == 0) {
        return 0;
      }
      return uVar5;
    }
  }
  else if (iVar4 == 1) {
    if ((*(uint *)(param_2 + 0x15) & 0xffffff00) == 0x20200) {
      if (*(char *)(param_2 + 0x14) == '\x01') {
        *(int32_t *)(param_1 + 0x70) = 3;
        return 0;
      }
      uVar3 = *(int32_t *)(param_2 + 0x10);
      if (*(int *)(param_1 + 0x68) == 0) {
        *(int32_t *)(param_1 + 0x68) = *(int32_t *)(param_2 + 0xc);
        uVar3 = func_0x000180866480(uVar3);
        *(int32_t *)(param_1 + 0x40) = uVar3;
        uVar3 = *(int32_t *)(param_2 + 0x2d);
        uVar1 = *(int32_t *)(param_2 + 0x31);
        uVar2 = *(int32_t *)(param_2 + 0x35);
        *(int32_t *)(param_1 + 0x98) = *(int32_t *)(param_2 + 0x29);
        *(int32_t *)(param_1 + 0x9c) = uVar3;
        *(int32_t *)(param_1 + 0xa0) = uVar1;
        *(int32_t *)(param_1 + 0xa4) = uVar2;
        uVar5 = FUN_180867280(param_1,param_3);
        if ((int)uVar5 == 0) {
          return 0;
        }
        return uVar5;
      }
      return 0x1c;
    }
    goto LAB_1808668d6;
  }
  uVar5 = FUN_180866ba0(param_1,param_3);
  if ((int)uVar5 == 0) {
    return 0;
  }
  return uVar5;
}



uint64_t FUN_1808669b0(int64_t param_1,int64_t *param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  
  plVar2 = (int64_t *)SystemCoreProcessor();
  lVar6 = *plVar2;
  lVar4 = *param_2 - lVar6;
  if (lVar4 == 0) {
    lVar4 = param_2[1] - plVar2[1];
  }
  plVar5 = (int64_t *)0x0;
  plVar2 = (int64_t *)(*(int64_t *)(param_1 + 0x50) + -8);
  if (*(int64_t *)(param_1 + 0x50) == 0) {
    plVar2 = plVar5;
  }
  plVar1 = plVar5;
  if (plVar2 != (int64_t *)0x0) {
    plVar1 = plVar2 + 1;
  }
  while( true ) {
    if (plVar1 == (int64_t *)(param_1 + 0x50)) {
      return 0;
    }
    plVar2 = plVar1 + -1;
    if (plVar1 == (int64_t *)0x0) {
      plVar2 = plVar5;
    }
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3,lVar4 == 0,lVar6);
    if ((int)uVar3 != 0) break;
    if (plVar1 == (int64_t *)(param_1 + 0x50)) {
      return 0;
    }
    plVar2 = (int64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar2 = plVar5;
    }
    plVar1 = plVar5;
    if (plVar2 != (int64_t *)0x0) {
      plVar1 = plVar2 + 1;
    }
  }
  return uVar3;
}



uint64_t FUN_180866a90(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  
  if (*(char *)(param_1 + 200) != '\0') {
    plVar4 = (int64_t *)0x0;
    plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0x50) + -8);
    if (*(int64_t *)(param_1 + 0x50) == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (int64_t *)0x0) {
      plVar1 = plVar3 + 1;
    }
    while (plVar1 != (int64_t *)(param_1 + 0x50)) {
      plVar3 = plVar1 + -1;
      if (plVar1 == (int64_t *)0x0) {
        plVar3 = plVar4;
      }
      uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (plVar1 == (int64_t *)(param_1 + 0x50)) {
        return 0;
      }
      plVar3 = (int64_t *)(*plVar1 + -8);
      if (*plVar1 == 0) {
        plVar3 = plVar4;
      }
      plVar1 = plVar4;
      if (plVar3 != (int64_t *)0x0) {
        plVar1 = plVar3 + 1;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180866ba0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = (int32_t *)
           FUN_180742050(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x39,&unknown_var_3024_ptr,0x303,0);
  if (puVar2 == (int32_t *)0x0) {
    return 0x26;
  }
  *puVar2 = 0x39;
  *(int16_t *)(puVar2 + 2) = 0x106;
  *(int8_t *)((int64_t)puVar2 + 10) = 3;
  *(uint64_t *)(puVar2 + 3) = 0;
  *(int32_t *)((int64_t)puVar2 + 0x15) = 0x20214;
  *(int8_t *)(puVar2 + 5) = 1;
  iVar5 = *(int *)(param_1 + 0x30) + 1;
  uVar6 = (int)*(uint *)(param_1 + 0x34) >> 0x1f;
  iVar1 = (*(uint *)(param_1 + 0x34) ^ uVar6) - uVar6;
  if (iVar1 < iVar5) {
    iVar7 = (int)((float)iVar1 * 1.5);
    iVar1 = iVar5;
    if (iVar5 <= iVar7) {
      iVar1 = iVar7;
    }
    if (iVar1 < 4) {
      iVar7 = 4;
    }
    else if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    uVar3 = FUN_1807d3f50(param_1 + 0x28,iVar7);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  puVar4 = (uint64_t *)((int64_t)*(int *)(param_1 + 0x30) * 0x10 + *(int64_t *)(param_1 + 0x28))
  ;
  *puVar4 = puVar2;
  puVar4[1] = param_2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



