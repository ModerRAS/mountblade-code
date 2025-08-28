#include "TaleWorlds.Native.Split.h"

// 99_part_13_part064.c - 6 个函数

// 函数: void FUN_1808d3d30(longlong *param_1,uint64_t *param_2)
void FUN_1808d3d30(longlong *param_1,uint64_t *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uVar5;
  int8_t auStack_68 [32];
  int8_t auStack_48 [40];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  lVar4 = param_1[0x14];
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x10;
    lVar4 = (**(code **)(*(longlong *)*param_2 + 0x290))((longlong *)*param_2,lVar1,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1,auStack_48);
    }
  }
  param_1[0x14] = lVar4;
  iVar3 = FUN_1808b2950(param_1 + 9,param_2);
  if (iVar3 != 0) goto LAB_1808d3e51;
  uVar5 = (**(code **)param_1[6])(param_1 + 6);
  cVar2 = func_0x0001808d2c80(param_2,uVar5);
  if (cVar2 != '\0') {
    param_1[0x12] = *(longlong *)(param_1[0xe] + 0x30);
  }
  cVar2 = func_0x0001808d2c80(param_2,lVar4);
  if (cVar2 == '\0') goto LAB_1808d3e51;
  if (*(int *)(param_1[0x14] + 0x44) == 0) {
    iVar3 = FUN_1808b2f30(param_1 + 9,0xc);
joined_r0x0001808d3e0e:
    if (iVar3 != 0) goto LAB_1808d3e51;
  }
  else if (*(int *)(param_1[0x14] + 0x44) == 1) {
    iVar3 = FUN_1808b2f30(param_1 + 9,0xd);
    goto joined_r0x0001808d3e0e;
  }
  iVar3 = FUN_1808b2f30(param_1 + 9,0x1b);
  if (((iVar3 == 0) && (iVar3 = FUN_1808b2f30(param_1 + 9,0xb), iVar3 == 0)) &&
     (iVar3 = FUN_1808b2f30(param_1 + 9,0x1c), iVar3 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
LAB_1808d3e51:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}



uint64_t FUN_1808d3e80(longlong param_1,uint64_t param_2)

{
  char cVar1;
  uint64_t uVar2;
  
  uVar2 = FUN_1808b2950(param_1 + 0x48);
  if ((int)uVar2 == 0) {
    uVar2 = (*(code *)**(uint64_t **)(param_1 + 0x30))(param_1 + 0x30);
    cVar1 = func_0x0001808d2c80(param_2,uVar2);
    if (cVar1 != '\0') {
      *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(*(longlong *)(param_1 + 0x70) + 0x30);
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1808d3ee0(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  uint64_t uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + -8);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar3 = plVar4;
  }
  plVar1 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 1;
  }
  while( true ) {
    if (plVar1 == (longlong *)(param_1 + 0x20)) {
      return 0;
    }
    plVar3 = plVar1 + -1;
    if (plVar1 == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    if ((int)uVar2 != 0) break;
    if (plVar1 == (longlong *)(param_1 + 0x20)) {
      return 0;
    }
    plVar3 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar3 = plVar4;
    }
    plVar1 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      plVar1 = plVar3 + 1;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d3f80(longlong *param_1,uint64_t *param_2)
void FUN_1808d3f80(longlong *param_1,uint64_t *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint64_t uVar5;
  int8_t auStack_68 [32];
  int8_t auStack_48 [40];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  lVar4 = param_1[0x13];
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x10;
    lVar4 = (**(code **)(*(longlong *)*param_2 + 0x290))((longlong *)*param_2,lVar1,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar1,auStack_48);
    }
  }
  param_1[0x13] = lVar4;
  iVar3 = FUN_1808b2950(param_1 + 9,param_2);
  if (iVar3 == 0) {
    uVar5 = (**(code **)param_1[6])(param_1 + 6);
    cVar2 = func_0x0001808d2c80(param_2,uVar5);
    if (cVar2 != '\0') {
      param_1[0x12] = *(longlong *)(param_1[0xe] + 0x30);
    }
    cVar2 = func_0x0001808d2c80(param_2,lVar4);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x30))(param_1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_68);
}






// 函数: void FUN_1808d3faf(longlong *param_1)
void FUN_1808d3faf(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  int8_t auStackX_20 [8];
  ulonglong in_stack_00000048;
  
  lVar3 = (**(code **)(*param_1 + 0x290))(param_1,unaff_RDI + 0x10);
  if (lVar3 != 0) {
    unaff_RBX[0x13] = lVar3;
    iVar2 = FUN_1808b2950(unaff_RBX + 9);
    if (iVar2 == 0) {
      (**(code **)unaff_RBX[6])(unaff_RBX + 6);
      cVar1 = func_0x0001808d2c80();
      if (cVar1 != '\0') {
        unaff_RBX[0x12] = *(longlong *)(unaff_RBX[0xe] + 0x30);
      }
      cVar1 = func_0x0001808d2c80();
      if (cVar1 != '\0') {
        (**(code **)(*unaff_RBX + 0x30))();
      }
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
  }
                    // WARNING: Subroutine does not return
  FUN_18084b240(unaff_RDI + 0x10,auStackX_20);
}






// 函数: void FUN_1808d3fe4(void)
void FUN_1808d3fe4(void)

{
  char cVar1;
  int iVar2;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  ulonglong in_stack_00000048;
  
  unaff_RBX[0x13] = unaff_RDI;
  iVar2 = FUN_1808b2950(unaff_RBX + 9);
  if (iVar2 == 0) {
    (**(code **)unaff_RBX[6])(unaff_RBX + 6);
    cVar1 = func_0x0001808d2c80();
    if (cVar1 != '\0') {
      unaff_RBX[0x12] = *(longlong *)(unaff_RBX[0xe] + 0x30);
    }
    cVar1 = func_0x0001808d2c80();
    if (cVar1 != '\0') {
      (**(code **)(*unaff_RBX + 0x30))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000048 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_1808d4070(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar2 = param_1[0x11];
  if ((*(int *)(lVar2 + 0x1c) == 0) && (uVar3 = (**(code **)*param_1)(), (int)uVar3 != 0)) {
    return uVar3;
  }
  plVar1 = param_1 + 1;
  if (plVar1 == (longlong *)0x0) {
    return 0x1c;
  }
  plVar4 = (longlong *)*plVar1;
  if (plVar4 != plVar1) {
    iVar5 = 0;
    do {
      plVar4 = (longlong *)*plVar4;
      iVar5 = iVar5 + 1;
    } while (plVar4 != plVar1);
    if (iVar5 != 0) {
      return 0x1c;
    }
  }
  param_1[2] = *(uint64_t *)(lVar2 + 0x28);
  *plVar1 = lVar2 + 0x20;
  *(longlong **)(lVar2 + 0x28) = plVar1;
  *(longlong **)param_1[2] = plVar1;
  return 0;
}



uint64_t FUN_1808d4160(longlong param_1,int32_t param_2,float param_3)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  switch(param_2) {
  case 0x12:
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar2 = func_0x0001808c6500(*(longlong *)(param_1 + 0x48),param_3);
      *(int32_t *)(param_1 + 0x58) = uVar2;
      break;
    }
  case 0xe:
    *(float *)(param_1 + 0x58) = param_3;
    break;
  case 0x13:
    if (*(longlong *)(param_1 + 0x48) != 0) {
      param_3 = (float)func_0x0001808c6500(*(longlong *)(param_1 + 0x48),param_3);
    }
  case 0xf:
    *(float *)(param_1 + 0x5c) = param_3;
    break;
  case 0x14:
    if (*(longlong *)(param_1 + 0x48) != 0) {
      param_3 = (float)func_0x0001808c6500(*(longlong *)(param_1 + 0x48),param_3);
    }
  case 0x10:
    *(float *)(param_1 + 0x60) = param_3;
    break;
  case 0x15:
    if (*(longlong *)(param_1 + 0x48) != 0) {
      param_3 = (float)func_0x0001808c6500(*(longlong *)(param_1 + 0x48),param_3);
    }
  case 0x11:
    *(float *)(param_1 + 100) = param_3;
    break;
  default:
    return 0x1c;
  case 0x17:
    *(float *)(param_1 + 0x68) = param_3 * 0.001;
    break;
  case 0x18:
    *(float *)(param_1 + 0x6c) = param_3 * 0.001;
    break;
  case 0x19:
    *(float *)(param_1 + 0x70) = param_3 * 0.001;
    break;
  case 0x1a:
    *(float *)(param_1 + 0x74) = param_3 * 0.001;
  }
  if ((*(int *)(param_1 + 0x20) != 4) && (uVar1 = FUN_1808d4500(param_1 + -0x48), (int)uVar1 != 0))
  {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808d4290(longlong param_1,int param_2,uint param_3)

{
  uint64_t uVar1;
  int32_t uVar2;
  
  if (param_2 == 0xc) {
    *(int32_t *)(param_1 + 0x68) = 0;
  }
  else {
    if (param_2 != 0xd) {
      return 0x1c;
    }
    if (*(longlong *)(param_1 + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = func_0x0001808c6500(*(longlong *)(param_1 + 0x48),0);
    }
    param_3 = param_3 ^ 0x80000000;
    *(int32_t *)(param_1 + 0x68) = uVar2;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      param_3 = func_0x0001808c6500(*(longlong *)(param_1 + 0x48),param_3);
    }
  }
  *(uint *)(param_1 + 0x6c) = param_3;
  if ((*(int *)(param_1 + 0x20) != 4) && (uVar1 = FUN_1808d4640(param_1 + -0x48), (int)uVar1 != 0))
  {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808d4320(longlong param_1,int param_2,uint param_3)

{
  uint64_t uVar1;
  
  if (param_2 == 0xb) {
    *(uint *)(param_1 + 0x68) = param_3;
  }
  else if (param_2 == 0xc) {
    *(uint *)(param_1 + 100) = param_3;
  }
  else if (param_2 == 0xd) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      param_3 = func_0x0001808c6500(*(longlong *)(param_1 + 0x48),param_3 ^ 0x80000000);
      param_3 = param_3 ^ 0x80000000;
    }
    *(uint *)(param_1 + 100) = param_3;
  }
  else if (param_2 == 0x1b) {
    *(uint *)(param_1 + 0x60) = param_3;
  }
  else {
    if (param_2 != 0x1c) {
      return 0x1c;
    }
    *(uint *)(param_1 + 0x6c) = param_3;
  }
  if ((*(int *)(param_1 + 0x20) != 4) && (uVar1 = FUN_1808d4b90(param_1 + -0x48), (int)uVar1 != 0))
  {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808d43b0(longlong param_1,int param_2,float param_3)

{
  uint64_t uVar1;
  
  if (param_2 == 0xc) {
    param_3 = param_3 * 0.5;
    *(float *)(param_1 + 0x60) = -param_3;
  }
  else {
    if (param_2 != 0xd) {
      return 0x1c;
    }
    param_3 = -param_3;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      param_3 = (float)func_0x0001808c6500(*(longlong *)(param_1 + 0x48),param_3);
    }
    *(float *)(param_1 + 0x60) = param_3;
    if (*(longlong *)(param_1 + 0x48) == 0) {
      param_3 = 0.0;
    }
    else {
      param_3 = (float)func_0x0001808c6500(*(longlong *)(param_1 + 0x48),0);
    }
  }
  *(float *)(param_1 + 100) = param_3;
  if ((*(int *)(param_1 + 0x20) != 4) && (uVar1 = FUN_1808d4d30(param_1 + -0x48), (int)uVar1 != 0))
  {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808d4460(longlong param_1)

{
  uint64_t uVar1;
  
  if ((*(int *)(param_1 + 0x68) != 4) && (uVar1 = FUN_1808d4b90(), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1808d4490(longlong param_1)

{
  float fVar1;
  int32_t uVar3;
  uint64_t uVar2;
  
  fVar1 = *(float *)(param_1 + 0xa8);
  uVar3 = 0;
  if ((*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x54) & 1) != 0) {
    if (*(longlong *)(param_1 + 0x98) == 0) {
      uVar2 = 0x42f00000;
    }
    else {
      uVar2 = func_0x00018085c7c0(*(longlong *)(param_1 + 0x98) + 200);
      fVar1 = *(float *)(param_1 + 0xa8);
    }
    uVar3 = (int32_t)((ulonglong)uVar2 >> 0x20);
    fVar1 = ((float)uVar2 / fVar1) * 0.016666668;
  }
  return CONCAT44(uVar3,fVar1 * 6.2831855);
}



uint64_t FUN_1808d4500(float param_1)

{
  uint64_t uVar1;
  longlong in_RCX;
  float fVar2;
  
  if (*(int *)(in_RCX + 0x68) == 3) {
    param_1 = *(float *)(in_RCX + 200);
    if (param_1 <= *(float *)(in_RCX + 0xc4)) {
      if (*(int *)(in_RCX + 0xd8) == 4) {
        param_1 = *(float *)(in_RCX + 0xd0);
        fVar2 = *(float *)(in_RCX + 0xd4);
      }
      else {
        fVar2 = *(float *)(in_RCX + 0xbc);
        *(float *)(in_RCX + 0xd4) = fVar2;
        *(float *)(in_RCX + 0xd0) = param_1;
        *(int32_t *)(in_RCX + 0xd8) = 4;
      }
      param_1 = *(float *)(in_RCX + 0xc4) - param_1;
      if (fVar2 <= param_1) {
        fVar2 = *(float *)(in_RCX + 0xac);
        *(int32_t *)(in_RCX + 0x68) = 4;
        *(int32_t *)(in_RCX + 0xd8) = 5;
      }
      else {
        fVar2 = (float)func_0x0001808dbac0(*(uint64_t *)(in_RCX + 0x98),2,param_1 / fVar2);
        fVar2 = (*(float *)(in_RCX + 0xac) - *(float *)(in_RCX + 0xcc)) * fVar2 +
                *(float *)(in_RCX + 0xcc);
      }
      if (fVar2 == *(float *)(in_RCX + 0x6c)) {
        return 0;
      }
      *(float *)(in_RCX + 0x6c) = fVar2;
      if (*(longlong *)(in_RCX + 0x70) == 0) {
        return 0;
      }
      uVar1 = FUN_1808b3060(*(longlong *)(in_RCX + 0x70),0);
      if ((int)uVar1 == 0) {
        return 0;
      }
      return uVar1;
    }
  }
  else if (*(int *)(in_RCX + 0x68) == 4) {
    return 0;
  }
  fVar2 = (float)FUN_1808d35c0(param_1,*(int32_t *)(in_RCX + 0xc4),in_RCX + 0xd8,in_RCX + 0xd0,
                               in_RCX + 0xd4);
  if (fVar2 != *(float *)(in_RCX + 0x6c)) {
    *(float *)(in_RCX + 0x6c) = fVar2;
    if ((*(longlong *)(in_RCX + 0x70) != 0) &&
       (uVar1 = FUN_1808b3060(*(longlong *)(in_RCX + 0x70),0), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0001808d494c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d4640(longlong param_1)
void FUN_1808d4640(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t auStack_198 [32];
  int8_t auStack_178 [272];
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  iVar3 = 0;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x778);
  }
  if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)(param_1 + 0x98)) ||
     (*(ulonglong *)(param_1 + 0x98) + (longlong)*(int *)(param_1 + 0xa0) * 8 <=
      *(ulonglong *)(param_1 + 0x98))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
                    // WARNING: Subroutine does not return
    memset(auStack_178,0,0x108);
  }
  if (iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    fVar7 = *(float *)(lVar1 + 0x58);
    fVar6 = *(float *)(lVar1 + 0x5c);
    fVar4 = fVar7;
    if ((fVar7 <= -80.0) && (fVar4 = fVar6, -80.0 <= fVar6)) {
      fVar4 = -80.0;
    }
    fVar9 = *(float *)(param_1 + 0xc0);
    fVar8 = fVar9 * (fVar6 - fVar7) + fVar7;
    fVar10 = (float)iVar3 / (float)*(int *)(*(longlong *)(param_1 + 0x78) + 0x774);
    if (fVar4 <= fVar8) {
      if (fVar8 <= fVar4) goto LAB_1808d4ae1;
      if (fVar9 <= *(float *)(param_1 + 0xb8)) {
        fVar9 = *(float *)(param_1 + 0xb8);
      }
      *(float *)(param_1 + 0xb8) = fVar9;
      fVar7 = *(float *)(lVar1 + 0x58);
      fVar5 = *(float *)(lVar1 + 0x5c) - fVar7;
      fVar6 = fVar7;
      if (fVar7 <= fVar4) {
        fVar6 = fVar4;
      }
      fVar4 = (fVar9 * fVar5 + fVar7) - fVar6;
      if (fVar4 == 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (fVar8 - fVar6) / fVar4;
      }
      fVar5 = (fVar6 - fVar7) / fVar5;
      fVar4 = 1.0 - fVar4;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar4 = (1000.0 / *(float *)(lVar1 + 0x74)) * fVar10 + fVar4;
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      if (0.0 <= fVar5) {
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
      }
      else {
        fVar5 = 0.0;
      }
      fVar9 = (fVar5 - fVar9) * fVar4 + fVar9;
      *(float *)(param_1 + 0xbc) = fVar9;
    }
    else {
      fVar5 = fVar6;
      if (fVar4 <= fVar6) {
        fVar5 = fVar4;
      }
      fVar5 = fVar5 - fVar7;
      if (fVar5 == 0.0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = (fVar8 - fVar7) / fVar5;
        if (fVar9 < 0.0) goto LAB_1808d4b3e;
      }
      fVar5 = fVar5 / (fVar6 - fVar7);
      fVar9 = (1000.0 / *(float *)(lVar1 + 0x70)) * fVar10 + fVar9;
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      if (0.0 <= fVar5) {
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        fVar9 = fVar5 * fVar9;
        *(float *)(param_1 + 0xb8) = fVar9;
      }
      else {
        fVar9 = fVar9 * 0.0;
        *(float *)(param_1 + 0xb8) = fVar9;
      }
    }
    *(float *)(param_1 + 0xc0) = fVar9;
  }
LAB_1808d4ae1:
  fVar7 = *(float *)(param_1 + 0xc0);
  fVar6 = 0.0;
  if ((0.0 <= fVar7) && (fVar6 = fVar7, 1.0 <= fVar7)) {
    fVar6 = 1.0;
  }
  *(float *)(param_1 + 0xc0) = fVar6;
  fVar7 = (*(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xb0)) * fVar6 +
          *(float *)(param_1 + 0xb0);
  if (fVar7 != *(float *)(param_1 + 0x6c)) {
    *(float *)(param_1 + 0x6c) = fVar7;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1808b3060(*(longlong *)(param_1 + 0x70),0);
    }
  }
LAB_1808d4b3e:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_198);
}



uint64_t FUN_1808d4b90(longlong param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float afStackX_8 [2];
  float afStackX_10 [2];
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x50);
  fVar9 = *(float *)(param_1 + 0xb4);
  fVar1 = *(float *)(param_1 + 0xac);
  if (iVar2 - 5U < 2) {
    FUN_1808edbf0(1,*(int32_t *)(param_1 + 0xbc),afStackX_10);
    if (afStackX_10[0] != *(float *)(param_1 + 200)) {
      puVar4 = *(uint **)(param_1 + 0xc0);
      *(float *)(param_1 + 200) = afStackX_10[0];
      *(int32_t *)(param_1 + 0xcc) = *(int32_t *)(param_1 + 0xd0);
      uVar6 = *puVar4 << 0xb ^ *puVar4;
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar3 = puVar4[3];
      puVar4[2] = uVar3;
      uVar6 = (uVar3 >> 0xb ^ uVar6) >> 8 ^ uVar3 ^ uVar6;
      puVar4[3] = uVar6;
      fVar7 = (float)(uVar6 & 0x7fffffff) * 4.656613e-10;
      *(float *)(param_1 + 0xd0) = (fVar7 + fVar7) - 1.0;
    }
    fVar7 = *(float *)(param_1 + 0xcc);
    afStackX_8[0] = fVar7;
    if (iVar2 != 5) {
      fVar8 = (float)fmodf();
      afStackX_8[0] = fVar8 * 0.31830987 * (*(float *)(param_1 + 0xd0) - fVar7) + fVar7;
    }
  }
  else {
    FUN_1808edbf0(iVar2,*(int32_t *)(param_1 + 0xbc),afStackX_8);
  }
  fVar9 = (afStackX_8[0] + fVar9 * 0.01) * fVar1 * 0.5;
  if (fVar9 != *(float *)(param_1 + 0x6c)) {
    *(float *)(param_1 + 0x6c) = fVar9;
    if ((*(longlong *)(param_1 + 0x70) != 0) &&
       (uVar5 = FUN_1808b3060(*(longlong *)(param_1 + 0x70),0), (int)uVar5 != 0)) {
      return uVar5;
    }
  }
  return 0;
}



uint64_t FUN_1808d4d30(longlong param_1)

{
  uint64_t uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    fVar3 = (*(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xa8)) * *(float *)(param_1 + 0xb0) +
            *(float *)(param_1 + 0xa8);
  }
  else if (*(int *)(param_1 + 0xb4) == 1) {
    fVar3 = (float)sinf(*(float *)(param_1 + 0xa8) * 0.03141593);
    fVar2 = (float)sinf(*(float *)(param_1 + 0xac) * 0.03141593);
    fVar3 = (float)asinf((fVar2 - fVar3) * *(float *)(param_1 + 0xb0) + fVar3);
    fVar3 = fVar3 * 31.830988;
  }
  if (fVar3 != *(float *)(param_1 + 0x6c)) {
    *(float *)(param_1 + 0x6c) = fVar3;
    if ((*(longlong *)(param_1 + 0x70) != 0) &&
       (uVar1 = FUN_1808b3060(*(longlong *)(param_1 + 0x70),0), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808d4d7d(void)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)sinf();
  fVar3 = (float)sinf(*(float *)(unaff_RBX + 0xac) * 0.03141593);
  fVar2 = (float)asinf((fVar3 - fVar2) * *(float *)(unaff_RBX + 0xb0) + fVar2);
  if (fVar2 * 31.830988 != *(float *)(unaff_RBX + 0x6c)) {
    *(float *)(unaff_RBX + 0x6c) = fVar2 * 31.830988;
    if ((*(longlong *)(unaff_RBX + 0x70) != 0) &&
       (uVar1 = FUN_1808b3060(*(longlong *)(unaff_RBX + 0x70),0), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t FUN_1808d4dc4(uint64_t param_1,float param_2)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  
  if (param_2 != *(float *)(unaff_RBX + 0x6c)) {
    *(float *)(unaff_RBX + 0x6c) = param_2;
    if ((*(longlong *)(unaff_RBX + 0x70) != 0) &&
       (uVar1 = FUN_1808b3060(*(longlong *)(unaff_RBX + 0x70),0), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808d4e50(longlong *param_1)
void FUN_1808d4e50(longlong *param_1)

{
  (**(code **)(*param_1 + 0x28))(param_1,0);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1 + -6,&UNK_180988440,0x9a,1);
}



uint64_t FUN_1808d4ea0(longlong param_1)

{
  int iVar1;
  uint64_t uVar2;
  int32_t uVar3;
  float fVar4;
  
  *(int32_t *)(param_1 + 0x68) = 4;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x44);
  if (iVar1 == 0) {
    uVar2 = FUN_1808b2f30(param_1 + 0x48,0xe);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808b2f30(param_1 + 0x48,0xf);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808b2f30(param_1 + 0x48,0x10);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808b2f30(param_1 + 0x48,0x11);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else if (iVar1 == 1) {
    uVar2 = FUN_1808b2f30(param_1 + 0x48,0x12);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808b2f30(param_1 + 0x48,0x13);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808b2f30(param_1 + 0x48,0x14);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808b2f30(param_1 + 0x48,0x15);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  uVar2 = FUN_1808b2f30(param_1 + 0x48,0x17);
  if (((((int)uVar2 == 0) && (uVar2 = FUN_1808b2f30(param_1 + 0x48,0x18), (int)uVar2 == 0)) &&
      (uVar2 = FUN_1808b2f30(param_1 + 0x48,0x19), (int)uVar2 == 0)) &&
     (uVar2 = FUN_1808b2f30(param_1 + 0x48,0x1a), (int)uVar2 == 0)) {
    uVar3 = func_0x0001808d3880(param_1);
    *(int32_t *)(param_1 + 0xd4) = *(int32_t *)(param_1 + 0xb0);
    *(int32_t *)(param_1 + 0xc0) = uVar3;
    *(int32_t *)(param_1 + 0xd0) = 0;
    *(int32_t *)(param_1 + 0xd8) = 0;
    *(int32_t *)(param_1 + 0xc4) = 0;
    *(int32_t *)(param_1 + 0x68) = 0;
    fVar4 = (float)FUN_1808d35c0(param_1,0,(int32_t *)(param_1 + 0xd8),
                                 (int32_t *)(param_1 + 0xd0),(int32_t *)(param_1 + 0xd4));
    if (fVar4 != *(float *)(param_1 + 0x6c)) {
      *(float *)(param_1 + 0x6c) = fVar4;
      if ((*(longlong *)(param_1 + 0x70) != 0) &&
         (uVar2 = FUN_1808b3060(*(longlong *)(param_1 + 0x70),0), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x0001808d494c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




