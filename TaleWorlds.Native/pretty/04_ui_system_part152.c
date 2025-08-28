#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part152.c - 3 个函数

// 函数: void FUN_180757c93(void)
void FUN_180757c93(void)

{
  uint64_t in_stack_00000040;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000040 ^ (uint64_t)&stack0x00000000);
}



uint64_t FUN_180757cc0(int64_t *param_1,byte param_2)

{
  uint uVar1;
  uint64_t uVar2;
  byte bVar3;
  char acStackX_8 [8];
  uint auStackX_18 [2];
  
  if ((param_1[0x3b] == 0) || (param_1[4] == 0)) {
    return 0x1e;
  }
  uVar1 = *(uint *)(param_1 + 9) | 1;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 9) & 0xfffffffe;
  }
  *(uint *)(param_1 + 9) = uVar1;
  bVar3 = 1;
  if ((*(byte *)(param_1[4] + 0x48) & 0x10) == 0) {
    bVar3 = param_2;
  }
  if ((bVar3 == 0) && ((uVar1 >> 0x12 & 1) != 0)) {
    auStackX_18[0] = 0;
    *(uint *)(param_1 + 9) = uVar1 & 0xfffbffff;
    FUN_180758960(param_1);
    (**(code **)(*param_1 + 0x98))(param_1,auStackX_18);
    if ((auStackX_18[0] & 0x10) != 0) {
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x80000;
      FUN_180758620(param_1,0,1);
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfff7ffff;
    }
  }
  uVar2 = (**(code **)(*param_1 + 0x1f0))(param_1,acStackX_8);
  if ((int)uVar2 == 0) {
    if ((((*(byte *)(param_1[4] + 0x48) & 0x10) == 0) && (bVar3 != 0)) && (acStackX_8[0] == '\0')) {
      uVar2 = SystemCore_Initializer(param_1[0xc],bVar3 ^ 1,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((param_1[0xe] != param_1[0xc]) &&
         (uVar2 = SystemCore_Initializer(param_1[0xe],bVar3 ^ 1,1), (int)uVar2 != 0)) {
        return uVar2;
      }
    }
    uVar2 = (**(code **)(*(int64_t *)param_1[0x3b] + 0x50))((int64_t *)param_1[0x3b],bVar3);
    if ((int)uVar2 == 0) {
      if (bVar3 == 0) {
        if (((*(uint *)(param_1[4] + 0x48) & 0x10) == 0) && (acStackX_8[0] == '\0')) {
          if ((param_1[0xe] != param_1[0xc]) &&
             (uVar2 = SystemCore_Initializer(param_1[0xe],1), (int)uVar2 != 0)) {
            return uVar2;
          }
          uVar2 = SystemCore_Initializer(param_1[0xc],1);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
        }
        if ((*(uint *)(param_1 + 9) >> 0x17 & 1) != 0) {
          *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xff3fffff;
          uVar2 = FUN_180758960(param_1);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x000180757d46)

uint64_t
FUN_180757cec(uint param_1,byte param_2,int64_t param_3,uint64_t param_4,uint64_t param_5,
             char param_6)

{
  uint in_EAX;
  uint64_t uVar1;
  uint uVar2;
  int64_t *unaff_RBX;
  byte bVar3;
  
  uVar2 = param_1 | 1;
  if (param_2 == 0) {
    uVar2 = in_EAX;
  }
  *(uint *)(unaff_RBX + 9) = uVar2;
  bVar3 = 1;
  if ((*(byte *)(param_3 + 0x48) & 0x10) == 0) {
    bVar3 = param_2;
  }
  if ((bVar3 == 0) && ((uVar2 >> 0x12 & 1) != 0)) {
    *(uint *)(unaff_RBX + 9) = uVar2 & 0xfffbffff;
    FUN_180758960();
    (**(code **)(*unaff_RBX + 0x98))();
  }
  uVar1 = (**(code **)(*unaff_RBX + 0x1f0))();
  if ((int)uVar1 == 0) {
    if ((((*(byte *)(unaff_RBX[4] + 0x48) & 0x10) == 0) && (bVar3 != 0)) && (param_6 == '\0')) {
      uVar1 = SystemCore_Initializer(unaff_RBX[0xc],bVar3 ^ 1,1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((unaff_RBX[0xe] != unaff_RBX[0xc]) &&
         (uVar1 = SystemCore_Initializer(unaff_RBX[0xe],bVar3 ^ 1,1), (int)uVar1 != 0)) {
        return uVar1;
      }
    }
    uVar1 = (**(code **)(*(int64_t *)unaff_RBX[0x3b] + 0x50))((int64_t *)unaff_RBX[0x3b],bVar3);
    if ((int)uVar1 == 0) {
      if (bVar3 == 0) {
        if (((*(uint *)(unaff_RBX[4] + 0x48) & 0x10) == 0) && (param_6 == '\0')) {
          if ((unaff_RBX[0xe] != unaff_RBX[0xc]) &&
             (uVar1 = SystemCore_Initializer(unaff_RBX[0xe],1), (int)uVar1 != 0)) {
            return uVar1;
          }
          uVar1 = SystemCore_Initializer(unaff_RBX[0xc],1);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        if ((*(uint *)(unaff_RBX + 9) >> 0x17 & 1) != 0) {
          *(uint *)(unaff_RBX + 9) = *(uint *)(unaff_RBX + 9) & 0xff3fffff;
          uVar1 = FUN_180758960();
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint64_t FUN_180757d7e(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int64_t unaff_RBX;
  byte unaff_DIL;
  char in_stack_00000030;
  
  if ((((*(byte *)(in_RAX + 0x48) & 0x10) == 0) && (unaff_DIL != 0)) && (in_stack_00000030 == '\0'))
  {
    uVar1 = SystemCore_Initializer(*(uint64_t *)(unaff_RBX + 0x60),unaff_DIL ^ 1,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((*(int64_t *)(unaff_RBX + 0x70) != *(int64_t *)(unaff_RBX + 0x60)) &&
       (uVar1 = SystemCore_Initializer(*(int64_t *)(unaff_RBX + 0x70),unaff_DIL ^ 1,1), (int)uVar1 != 0)) {
      return uVar1;
    }
  }
  uVar1 = (**(code **)(**(int64_t **)(unaff_RBX + 0x1d8) + 0x50))
                    (*(int64_t **)(unaff_RBX + 0x1d8),unaff_DIL);
  if ((int)uVar1 == 0) {
    if (unaff_DIL == 0) {
      if (((*(uint *)(*(int64_t *)(unaff_RBX + 0x20) + 0x48) & 0x10) == 0) &&
         (in_stack_00000030 == '\0')) {
        if ((*(int64_t *)(unaff_RBX + 0x70) != *(int64_t *)(unaff_RBX + 0x60)) &&
           (uVar1 = SystemCore_Initializer(*(int64_t *)(unaff_RBX + 0x70),1), (int)uVar1 != 0)) {
          return uVar1;
        }
        uVar1 = SystemCore_Initializer(*(uint64_t *)(unaff_RBX + 0x60),1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      if ((*(uint *)(unaff_RBX + 0x48) >> 0x17 & 1) != 0) {
        *(uint *)(unaff_RBX + 0x48) = *(uint *)(unaff_RBX + 0x48) & 0xff3fffff;
        uVar1 = FUN_180758960();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}





// 函数: void FUN_180757e4f(void)
void FUN_180757e4f(void)

{
  return;
}



uint64_t FUN_180757e5a(void)

{
  return 0x1e;
}





// 函数: void FUN_180757e70(int64_t *param_1,int32_t param_2)
void FUN_180757e70(int64_t *param_1,int32_t param_2)

{
  int iVar1;
  uint64_t auStackX_18 [2];
  
  iVar1 = func_0x00018074df20();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x120))(param_1,0,auStackX_18);
    if (iVar1 == 0) {
      iVar1 = FUN_180762b60(auStackX_18[0],param_2,1);
      if (iVar1 == 0) {
        FUN_180757470(param_1,*(int32_t *)((int64_t)param_1 + 0x22c));
      }
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000180758d1b)
// WARNING: Removing unreachable block (ram,0x000180758d26)
// WARNING: Removing unreachable block (ram,0x000180758d2e)
// WARNING: Removing unreachable block (ram,0x000180758d31)
// WARNING: Removing unreachable block (ram,0x000180758d33)
// WARNING: Removing unreachable block (ram,0x000180758d3b)
// WARNING: Removing unreachable block (ram,0x000180758d3e)
// WARNING: Removing unreachable block (ram,0x000180758d41)
// WARNING: Removing unreachable block (ram,0x000180758d4e)
// WARNING: Removing unreachable block (ram,0x000180758d5a)
// WARNING: Removing unreachable block (ram,0x000180758d5d)
// WARNING: Removing unreachable block (ram,0x000180758d5f)
// WARNING: Removing unreachable block (ram,0x000180758d6b)
// WARNING: Removing unreachable block (ram,0x000180758d74)
// WARNING: Removing unreachable block (ram,0x000180758e16)
// WARNING: Removing unreachable block (ram,0x000180758e1f)
// WARNING: Removing unreachable block (ram,0x000180758e2c)
// WARNING: Removing unreachable block (ram,0x000180758e38)
// WARNING: Removing unreachable block (ram,0x000180758e41)
// WARNING: Removing unreachable block (ram,0x000180758e68)
// WARNING: Removing unreachable block (ram,0x000180758e6c)
// WARNING: Removing unreachable block (ram,0x000180758e76)
// WARNING: Removing unreachable block (ram,0x000180758e7f)
// WARNING: Removing unreachable block (ram,0x000180758e8c)
// WARNING: Removing unreachable block (ram,0x000180758d84)
// WARNING: Removing unreachable block (ram,0x000180758d8d)
// WARNING: Removing unreachable block (ram,0x000180758d99)
// WARNING: Removing unreachable block (ram,0x000180758da5)
// WARNING: Removing unreachable block (ram,0x000180758dae)
// WARNING: Removing unreachable block (ram,0x000180758dd9)
// WARNING: Removing unreachable block (ram,0x000180758ddd)
// WARNING: Removing unreachable block (ram,0x000180758de7)
// WARNING: Removing unreachable block (ram,0x000180758df0)
// WARNING: Removing unreachable block (ram,0x000180758dfd)

uint64_t FUN_180757ed0(int64_t param_1,uint param_2,uint param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t unaff_RSI;
  uint64_t uVar8;
  uint64_t uVar9;
  float fVar10;
  uint uStackX_8;
  uint uStackX_c;
  
  uVar8 = (uint64_t)param_2;
  if ((*(int64_t *)(param_1 + 0x1d8) == 0) || (*(int64_t *)(param_1 + 0x20) == 0)) {
    return 0x1e;
  }
  if ((param_3 & 0x600) != 0) {
    return 0x44;
  }
  plVar6 = *(int64_t **)(*(int64_t *)(param_1 + 0x1d8) + 0x28);
  if ((plVar6 != (int64_t *)0x0) && ((param_3 & 0x10) == 0)) {
    uVar5 = (**(code **)(*plVar6 + 0x98))();
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (uStackX_8 <= param_2) {
      return 0x20;
    }
  }
  plVar6 = *(int64_t **)(param_1 + 0x1d8);
  if ((param_3 & 7) == 0) {
    uVar5 = (**(code **)(*plVar6 + 0xd0))(plVar6,uVar8,param_3,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else {
    lVar1 = plVar6[5];
    if (lVar1 == 0) {
      if (plVar6[6] == 0) {
        return 0x1e;
      }
      uVar9 = (uint64_t)*(ushort *)(plVar6[6] + 0x118);
      iVar4 = 5;
      fVar10 = (float)*(int *)(*(int64_t *)(param_1 + 8) + 0x6d0);
    }
    else {
      uVar9 = (uint64_t)*(uint *)(lVar1 + 0x68);
      iVar4 = *(int *)(lVar1 + 0x28);
      fVar10 = *(float *)(lVar1 + 0x6c);
    }
    uVar3 = param_2;
    if ((param_3 & 2) == 0) {
      if ((param_3 & 4) != 0) {
        uVar3 = uStackX_c;
        if ((int)uVar9 != 0) {
          if (iVar4 == 1) {
            uVar7 = 8;
          }
          else if (iVar4 == 2) {
            uVar7 = 0x10;
          }
          else if (iVar4 == 3) {
            uVar7 = 0x18;
          }
          else {
            if ((iVar4 != 4) && (uVar3 = param_2, iVar4 != 5)) goto LAB_18075803c;
            uVar7 = 0x20;
          }
          uVar3 = (uint)(((uVar8 << 3) / uVar7 & 0xffffffff) / uVar9);
        }
        goto LAB_18075803c;
      }
      if ((param_3 & 1) != 0) {
        uVar3 = (uint)(int64_t)((float)uVar8 * 0.001 * fVar10 + 0.5);
        goto LAB_18075803c;
      }
    }
    else {
LAB_18075803c:
      uStackX_c = uVar3;
      uStackX_8 = 0;
    }
    uVar5 = (**(code **)(*plVar6 + 0x78))(plVar6,CONCAT44(uStackX_c,uStackX_8));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  plVar6 = *(int64_t **)(param_1 + 0x1d8);
  lVar1 = plVar6[5];
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(uint64_t **)(lVar1 + 0xf0) != (uint64_t *)0x0) && (*(int *)(lVar1 + 0xe4) != 0)) {
    if (*(int64_t *)(param_1 + 0x1f0) != 0) goto LAB_180758c38;
    *(uint64_t *)(param_1 + 0x1f0) = **(uint64_t **)(lVar1 + 0xf0);
  }
  if (*(int64_t *)(param_1 + 0x1f0) == 0) {
    return 0;
  }
LAB_180758c38:
  if ((plVar6 != (int64_t *)0x0) &&
     (((plVar6[5] != 0 || (plVar6[6] != 0)) &&
      (iVar4 = (**(code **)(*plVar6 + 0x80))(plVar6,&stack0x00000018), iVar4 == 0)))) {
    uStackX_8 = (uint)((uint64_t)unaff_RSI >> 0x20);
    fVar10 = *(float *)(param_1 + 0x22c);
    if (fVar10 <= 0.0) {
      uVar5 = *(uint64_t *)(*(int64_t *)(lVar1 + 0xf8) + 8);
    }
    else {
      uVar5 = **(uint64_t **)(lVar1 + 0xf0);
    }
    *(uint64_t *)(param_1 + 0x1f0) = uVar5;
    while (((0.0 < fVar10 &&
            (plVar6 = *(int64_t **)(param_1 + 0x1f0), *(uint *)(plVar6 + 6) < uStackX_8)) ||
           ((fVar10 < 0.0 &&
            (plVar6 = *(int64_t **)(param_1 + 0x1f0), uStackX_8 < *(uint *)(plVar6 + 6)))))) {
      if (fVar10 <= 0.0) {
        if ((*(uint *)(plVar6 + 6) <= uStackX_8) ||
           (lVar2 = plVar6[1], *(int64_t *)(param_1 + 0x1f0) = lVar2,
           lVar2 == *(int64_t *)(lVar1 + 0xf0))) break;
      }
      else if ((uStackX_8 <= *(uint *)(plVar6 + 6)) ||
              (lVar2 = *plVar6, *(int64_t *)(param_1 + 0x1f0) = lVar2,
              lVar2 == *(int64_t *)(lVar1 + 0xf8))) break;
    }
  }
  *(uint *)(param_1 + 0x1f8) = uStackX_8;
  return 0;
}



uint64_t FUN_1807580d0(int64_t *param_1,int32_t param_2)

{
  uint64_t uVar1;
  
  if ((param_1[0x3b] == 0) || (param_1[4] == 0)) {
    uVar1 = 0x1e;
  }
  else {
    if ((*(uint *)(param_1[0x3b] + 0x3c) & 0x10000) != 0) {
      return 0x3a;
    }
    uVar1 = func_0x00018074df60();
    if ((int)uVar1 == 0) {
                    // WARNING: Could not recover jumptable at 0x000180758126. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}



uint64_t FUN_180758140(int64_t param_1,float param_2,char param_3)

{
  int64_t *plVar1;
  bool bVar2;
  uint64_t uVar3;
  
  if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  plVar1 = *(int64_t **)(param_1 + 0x1d8);
  if ((plVar1 != (int64_t *)0x0) && (*(int64_t *)(param_1 + 0x70) != 0)) {
    bVar2 = param_2 == *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x30) = param_2;
    if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
      param_2 = 0.0;
    }
    uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    if (((int)uVar3 == 0) &&
       ((((bVar2 && (param_3 == '\0')) ||
         ((*(uint *)(*(int64_t *)(param_1 + 0x1d8) + 0x3c) & 0x10000) != 0)) ||
        (uVar3 = FUN_18074f900(param_1,0,0,param_3), (int)uVar3 == 0)))) {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0x1e;
}



uint64_t FUN_18075818a(int64_t *param_1,float param_2)

{
  bool bVar1;
  uint64_t uVar2;
  int64_t unaff_RBX;
  char unaff_SIL;
  
  bVar1 = param_2 == *(float *)(unaff_RBX + 0x30);
  *(float *)(unaff_RBX + 0x30) = param_2;
  if ((*(byte *)(unaff_RBX + 0x48) & 2) != 0) {
    param_2 = 0.0;
  }
  uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  if (((int)uVar2 == 0) &&
     ((((bVar1 && (unaff_SIL == '\0')) ||
       ((*(uint *)(*(int64_t *)(unaff_RBX + 0x1d8) + 0x3c) & 0x10000) != 0)) ||
      (uVar2 = FUN_18074f900(), (int)uVar2 == 0)))) {
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_1807581f4(void)

{
  return 0x1e;
}



uint64_t UIComponent_Renderer(int64_t *param_1,byte param_2)

{
  int64_t *plVar1;
  int *piVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint64_t uVar8;
  uint uVar9;
  int64_t *plVar10;
  
  if (param_1[0x3b] == 0) {
    return 0x1e;
  }
  if ((*(byte *)(param_1[0x3b] + 0x3c) & 0x80) != 0) {
    return 0;
  }
  if ((param_2 & 0x40) != 0) {
    FUN_180758bd0(param_1,0);
  }
  if ((param_2 & 4) == 0) {
    (**(code **)(*param_1 + 0xe0))(param_1,0,0,0);
    uVar8 = (**(code **)(*param_1 + 0x100))(param_1,0,0xfffffffffff00000);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar8 = (**(code **)(*param_1 + 0x118))(param_1,0);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if (param_1[0xc] != 0) {
      SystemCore_Initializer(param_1[0xc],0,1);
      UISystem_ComponentHandler(param_1[0xc],0,1);
    }
  }
  uVar8 = (**(code **)(*(int64_t *)param_1[0x3b] + 0x48))();
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  if ((param_2 & 0x10) != 0) {
    if (param_1[4] != 0) {
      plVar1 = param_1 + 0x40;
      if (((int64_t *)*plVar1 == plVar1) && ((int64_t *)param_1[0x41] == plVar1))
      goto LAB_18075833f;
      piVar2 = (int *)(param_1[4] + 0x1dc);
      *piVar2 = *piVar2 + -1;
      *(int64_t *)param_1[0x41] = *plVar1;
      *(int64_t *)(*plVar1 + 8) = param_1[0x41];
      param_1[0x41] = (int64_t)plVar1;
      *plVar1 = (int64_t)plVar1;
    }
    param_1[4] = 0;
    param_1[0x42] = (int64_t)param_1;
  }
LAB_18075833f:
  if (*(int64_t *)(param_1[0x3b] + 0x28) != 0) {
    piVar2 = (int *)(*(int64_t *)(param_1[0x3b] + 0x28) + 0x138);
    *piVar2 = *piVar2 + -1;
    if (*(int *)(*(int64_t *)(param_1[0x3b] + 0x28) + 0x138) == 0) {
      *(int32_t *)(*(int64_t *)(param_1[0x3b] + 0x28) + 0x140) =
           *(int32_t *)(param_1[1] + 0x116e8);
    }
  }
  if ((param_2 & 2) != 0) {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      return 0x1f;
    }
    plVar1 = param_1 + 0x32;
    *(int64_t *)param_1[0x33] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = param_1[0x33];
    param_1[0x33] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    *(int32_t *)(param_1 + 0x35) = 0xffffffff;
    param_1[0x34] = 0;
    plVar1 = param_1 + 0x36;
    *(int64_t *)param_1[0x37] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = param_1[0x37];
    param_1[0x37] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    *(int32_t *)(param_1 + 0x39) = 0xffffffff;
    param_1[0x38] = 0;
    plVar1 = param_1 + 0x2f;
    *(int64_t *)param_1[0x30] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = param_1[0x30];
    param_1[0x30] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    plVar10 = (int64_t *)(lVar3 + 0x598);
    if (lVar3 == -0x420) {
      plVar10 = (int64_t *)0x0;
    }
    lVar4 = *plVar10;
    *plVar1 = lVar4;
    param_1[0x30] = (int64_t)plVar10;
    *(int64_t **)(lVar4 + 8) = plVar1;
    *(int64_t **)param_1[0x30] = plVar1;
    *(int *)(lVar3 + 0x1e4) = *(int *)(lVar3 + 0x1e4) + -1;
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffeffff;
    *(int32_t *)((int64_t)param_1 + 0x1e4) = 0xffffffff;
  }
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffbffff;
  lVar3 = param_1[0x3b];
  if ((((param_2 & 8) != 0) && (param_1[0x2e] != 0)) &&
     (uVar8 = FUN_18074c3f0(param_1,param_1[10],0,0,0,0), (int)uVar8 != 0)) {
    return uVar8;
  }
  if (((*(byte *)(param_1[0x3b] + 0x3c) & 0x40) == 0) || (lVar3 != param_1[0x3b])) {
    bVar5 = false;
    if ((*(uint64_t **)(lVar3 + 0x28) != (uint64_t *)0x0) &&
       (cVar6 = (**(code **)**(uint64_t **)(lVar3 + 0x28))(), cVar6 != '\0')) {
      bVar5 = true;
      func_0x000180743c20(param_1[1],8);
    }
    *(uint64_t *)(lVar3 + 0x28) = 0;
    *(uint64_t *)(lVar3 + 0x30) = 0;
    *(uint64_t *)(lVar3 + 0x18) = 0;
    if (bVar5) {
                    // WARNING: Subroutine does not return
      SystemMemoryProcessor(param_1[1],8);
    }
  }
  if ((param_2 & 4) == 0) {
    param_1[0xd] = param_1[0xe];
    param_1[0xc] = param_1[0xe];
    if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(param_1[1] + 0x10bd0,param_1[8],&system_buffer_ptr,0,1);
    }
    if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(param_1[1] + 0x10848,param_1[2],&system_buffer_ptr,0,1);
    }
  }
  if (((*(int *)((int64_t)param_1 + 0x1e4) == -1) && ((*(uint *)(param_1 + 9) & 0x40000) == 0)) &&
     (-1 < (char)param_2)) {
    param_1[0x3b] = 0;
    if ((param_2 & 4) == 0) {
      uVar8 = func_0x00018074d850(param_1,0);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      param_1[0x3e] = 0;
    }
    if ((param_2 & 1) != 0) {
      uVar9 = (*(uint *)((int64_t)param_1 + 0x1d4) >> 1 & 0xffff) + 1;
      uVar7 = 1;
      if (uVar9 < 0xffff) {
        uVar7 = uVar9;
      }
      param_1[10] = (uint64_t)
                    ((((uint)((uint64_t)param_1[10] >> 0x11) & 0xfff |
                      (int)((uint64_t)param_1[10] >> 0x1d) << 0xc) << 0x10 | uVar7) * 2) | 1;
    }
  }
  return 0;
}



uint64_t FUN_180758248(uint64_t param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint64_t uVar8;
  uint uVar9;
  int64_t *plVar10;
  int64_t *unaff_RBX;
  byte unaff_DIL;
  bool in_ZF;
  
  if (!in_ZF) {
    return 0;
  }
  if ((unaff_DIL & 0x40) != 0) {
    FUN_180758bd0(param_1,0);
  }
  if ((unaff_DIL & 4) == 0) {
    (**(code **)(*unaff_RBX + 0xe0))();
    uVar8 = (**(code **)(*unaff_RBX + 0x100))();
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar8 = (**(code **)(*unaff_RBX + 0x118))();
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if (unaff_RBX[0xc] != 0) {
      SystemCore_Initializer(unaff_RBX[0xc],0,1);
      UISystem_ComponentHandler(unaff_RBX[0xc],0,1);
    }
  }
  uVar8 = (**(code **)(*(int64_t *)unaff_RBX[0x3b] + 0x48))();
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  if ((unaff_DIL & 0x10) != 0) {
    if (unaff_RBX[4] != 0) {
      plVar1 = unaff_RBX + 0x40;
      if (((int64_t *)*plVar1 == plVar1) && ((int64_t *)unaff_RBX[0x41] == plVar1))
      goto LAB_18075833f;
      piVar2 = (int *)(unaff_RBX[4] + 0x1dc);
      *piVar2 = *piVar2 + -1;
      *(int64_t *)unaff_RBX[0x41] = *plVar1;
      *(int64_t *)(*plVar1 + 8) = unaff_RBX[0x41];
      unaff_RBX[0x41] = (int64_t)plVar1;
      *plVar1 = (int64_t)plVar1;
    }
    unaff_RBX[4] = 0;
    unaff_RBX[0x42] = (int64_t)unaff_RBX;
  }
LAB_18075833f:
  if (*(int64_t *)(unaff_RBX[0x3b] + 0x28) != 0) {
    piVar2 = (int *)(*(int64_t *)(unaff_RBX[0x3b] + 0x28) + 0x138);
    *piVar2 = *piVar2 + -1;
    if (*(int *)(*(int64_t *)(unaff_RBX[0x3b] + 0x28) + 0x138) == 0) {
      *(int32_t *)(*(int64_t *)(unaff_RBX[0x3b] + 0x28) + 0x140) =
           *(int32_t *)(unaff_RBX[1] + 0x116e8);
    }
  }
  if ((unaff_DIL & 2) != 0) {
    lVar3 = unaff_RBX[1];
    if (lVar3 == 0) {
      return 0x1f;
    }
    plVar1 = unaff_RBX + 0x32;
    *(int64_t *)unaff_RBX[0x33] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = unaff_RBX[0x33];
    unaff_RBX[0x33] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    *(int32_t *)(unaff_RBX + 0x35) = 0xffffffff;
    unaff_RBX[0x34] = 0;
    plVar1 = unaff_RBX + 0x36;
    *(int64_t *)unaff_RBX[0x37] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = unaff_RBX[0x37];
    unaff_RBX[0x37] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    *(int32_t *)(unaff_RBX + 0x39) = 0xffffffff;
    unaff_RBX[0x38] = 0;
    plVar1 = unaff_RBX + 0x2f;
    *(int64_t *)unaff_RBX[0x30] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = unaff_RBX[0x30];
    unaff_RBX[0x30] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
    plVar10 = (int64_t *)(lVar3 + 0x598);
    if (lVar3 == -0x420) {
      plVar10 = (int64_t *)0x0;
    }
    lVar4 = *plVar10;
    *plVar1 = lVar4;
    unaff_RBX[0x30] = (int64_t)plVar10;
    *(int64_t **)(lVar4 + 8) = plVar1;
    *(int64_t **)unaff_RBX[0x30] = plVar1;
    *(int *)(lVar3 + 0x1e4) = *(int *)(lVar3 + 0x1e4) + -1;
    *(uint *)(unaff_RBX + 9) = *(uint *)(unaff_RBX + 9) & 0xfffeffff;
    *(int32_t *)((int64_t)unaff_RBX + 0x1e4) = 0xffffffff;
  }
  *(uint *)(unaff_RBX + 9) = *(uint *)(unaff_RBX + 9) & 0xfffbffff;
  lVar3 = unaff_RBX[0x3b];
  if ((((unaff_DIL & 8) != 0) && (unaff_RBX[0x2e] != 0)) &&
     (uVar8 = FUN_18074c3f0(), (int)uVar8 != 0)) {
    return uVar8;
  }
  if (((*(byte *)(unaff_RBX[0x3b] + 0x3c) & 0x40) == 0) || (lVar3 != unaff_RBX[0x3b])) {
    bVar5 = false;
    if ((*(uint64_t **)(lVar3 + 0x28) != (uint64_t *)0x0) &&
       (cVar6 = (**(code **)**(uint64_t **)(lVar3 + 0x28))(), cVar6 != '\0')) {
      bVar5 = true;
      func_0x000180743c20(unaff_RBX[1],8);
    }
    *(uint64_t *)(lVar3 + 0x28) = 0;
    *(uint64_t *)(lVar3 + 0x30) = 0;
    *(uint64_t *)(lVar3 + 0x18) = 0;
    if (bVar5) {
                    // WARNING: Subroutine does not return
      SystemMemoryProcessor(unaff_RBX[1],8);
    }
  }
  if ((unaff_DIL & 4) == 0) {
    unaff_RBX[0xd] = unaff_RBX[0xe];
    unaff_RBX[0xc] = unaff_RBX[0xe];
    if (unaff_RBX[8] != 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(unaff_RBX[1] + 0x10bd0,unaff_RBX[8],&system_buffer_ptr,0,1);
    }
    if (unaff_RBX[2] != 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(unaff_RBX[1] + 0x10848,unaff_RBX[2],&system_buffer_ptr,0,1);
    }
  }
  if (((*(int *)((int64_t)unaff_RBX + 0x1e4) == -1) && ((*(uint *)(unaff_RBX + 9) & 0x40000) == 0))
     && (-1 < (char)unaff_DIL)) {
    unaff_RBX[0x3b] = 0;
    if ((unaff_DIL & 4) == 0) {
      uVar8 = func_0x00018074d850();
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      unaff_RBX[0x3e] = 0;
    }
    if ((unaff_DIL & 1) != 0) {
      uVar9 = (*(uint *)((int64_t)unaff_RBX + 0x1d4) >> 1 & 0xffff) + 1;
      uVar7 = 1;
      if (uVar9 < 0xffff) {
        uVar7 = uVar9;
      }
      unaff_RBX[10] =
           (uint64_t)
           ((((uint)((uint64_t)unaff_RBX[10] >> 0x11) & 0xfff |
             (int)((uint64_t)unaff_RBX[10] >> 0x1d) << 0xc) << 0x10 | uVar7) * 2) | 1;
    }
  }
  return 0;
}



uint64_t FUN_1807584a8(uint64_t *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  byte unaff_DIL;
  uint64_t unaff_R15;
  
  bVar1 = false;
  if ((param_1 != (uint64_t *)0x0) && (cVar2 = (**(code **)*param_1)(), cVar2 != '\0')) {
    bVar1 = true;
    func_0x000180743c20(*(uint64_t *)(unaff_RBX + 8),8);
  }
  *(uint64_t *)(unaff_RSI + 0x28) = unaff_R15;
  *(uint64_t *)(unaff_RSI + 0x30) = unaff_R15;
  *(uint64_t *)(unaff_RSI + 0x18) = unaff_R15;
  if (bVar1) {
                    // WARNING: Subroutine does not return
    SystemMemoryProcessor(*(uint64_t *)(unaff_RBX + 8),8);
  }
  if (unaff_EBP == 0) {
    *(uint64_t *)(unaff_RBX + 0x68) = *(uint64_t *)(unaff_RBX + 0x70);
    *(uint64_t *)(unaff_RBX + 0x60) = *(uint64_t *)(unaff_RBX + 0x70);
    if (*(int64_t *)(unaff_RBX + 0x40) != 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(int64_t *)(unaff_RBX + 8) + 0x10bd0,*(int64_t *)(unaff_RBX + 0x40),
                    &system_buffer_ptr,0,1);
    }
    if (*(int64_t *)(unaff_RBX + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      SystemInitializer(*(int64_t *)(unaff_RBX + 8) + 0x10848,*(int64_t *)(unaff_RBX + 0x10),
                    &system_buffer_ptr,0,1);
    }
  }
  if (((*(int *)(unaff_RBX + 0x1e4) == -1) && ((*(uint *)(unaff_RBX + 0x48) & 0x40000) == 0)) &&
     (-1 < (char)unaff_DIL)) {
    *(uint64_t *)(unaff_RBX + 0x1d8) = unaff_R15;
    if (unaff_EBP == 0) {
      uVar4 = func_0x00018074d850();
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(uint64_t *)(unaff_RBX + 0x1f0) = unaff_R15;
    }
    if ((unaff_DIL & 1) != 0) {
      uVar5 = (*(uint *)(unaff_RBX + 0x1d4) >> 1 & 0xffff) + 1;
      uVar3 = 1;
      if (uVar5 < 0xffff) {
        uVar3 = uVar5;
      }
      *(uint64_t *)(unaff_RBX + 0x50) =
           (uint64_t)
           ((((uint)(*(uint64_t *)(unaff_RBX + 0x50) >> 0x11) & 0xfff |
             (int)(*(uint64_t *)(unaff_RBX + 0x50) >> 0x1d) << 0xc) << 0x10 | uVar3) * 2) | 1;
    }
  }
  return 0;
}





