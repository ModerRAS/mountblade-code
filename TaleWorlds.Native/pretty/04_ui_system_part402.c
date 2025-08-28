#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part402.c - 16 个函数

// 函数: void FUN_18088c46a(void)
void FUN_18088c46a(void)

{
  int in_EAX;
  longlong unaff_R14;
  
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                *(uint64_t *)(unaff_R14 + 0xc4ec50 + (longlong)(in_EAX << 5) * 8),&unknown_var_6880_ptr,
                0xec,1);
}



uint64_t FUN_18088c4ba(void)

{
  uint64_t unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  *(uint64_t *)(unaff_RSI + 0xc4eb24 + unaff_R14) = unaff_RBP;
  *(int *)(unaff_RSI + 0xc4eb20 + unaff_R14) = (int)unaff_RBP;
  *(int *)(unaff_RSI + 0xc4eb2c + unaff_R14) = (int)unaff_RBP;
  return 0;
}



uint64_t FUN_18088c4ea(void)

{
  return 0x1c;
}



uint64_t FUN_18088c620(uint *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  uint uVar8;
  
  if (param_1 != (uint *)0x0) {
    uVar3 = *param_1;
    if (uVar3 == 0) {
      return 0;
    }
    uVar6 = (ulonglong)(uVar3 >> 5 & 7);
    lVar2 = uVar6 * 0x28;
    if ((*(int *)(uVar6 * 0x28 + 0x180c4eb24) != 0) &&
       (lVar4 = *(longlong *)((ulonglong)(uVar3 & 0xff) * 8 + 0x180c4ec50), lVar4 != 0)) {
      uVar6 = (ulonglong)(uVar3 >> 8 & 0x1fff);
      if (*(uint **)(lVar4 + uVar6 * 8) == param_1) {
        uVar5 = (uVar3 >> 0x15) + 1;
        uVar8 = 1;
        if (uVar5 < 0x800) {
          uVar8 = uVar5;
        }
        uVar7 = FUN_18088c1b0(lVar2 + 0x180c4eb10,lVar4 + uVar6 * 8,uVar3 & 0x1f,uVar6,uVar8);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        piVar1 = (int *)(lVar2 + 0x180c4eb24);
        *piVar1 = *piVar1 + -1;
        *param_1 = 0;
        return 0;
      }
    }
  }
  return 0x1c;
}



uint64_t FUN_18088c740(longlong *param_1,longlong param_2)

{
  uint64_t uVar1;
  
  if (*param_1 != 0) {
    return 0x1c;
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x98) != 0)) {
    uVar1 = FUN_18088dcf0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_1 = param_2;
  }
  return 0;
}



uint64_t FUN_18088c790(longlong *param_1)

{
  uint64_t uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_18088e6d0(*(uint64_t *)(*param_1 + 0x98));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_1 = 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088c7c0(longlong param_1,longlong param_2,uint64_t *param_3)

{
  int32_t *puVar1;
  uint64_t uVar2;
  
  if (*(longlong *)(param_2 + 0x68) != 0) {
    return 0x1c;
  }
  puVar1 = (int32_t *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x38,&unknown_var_7008_ptr,0x24,0,0,1);
  if (puVar1 == (int32_t *)0x0) {
    uVar2 = 0x26;
  }
  else {
    *puVar1 = 0;
    *(uint64_t *)(puVar1 + 2) = 0;
    *(uint64_t *)(puVar1 + 9) = 0x3f800000;
    *(int8_t *)(puVar1 + 0xb) = 0;
    *(uint64_t *)(puVar1 + 0xc) = 0xffffffffffffffff;
    *(uint64_t *)(puVar1 + 6) = 0;
    puVar1[8] = 0;
    *(int32_t **)(param_2 + 0x68) = puVar1;
    *(longlong *)(puVar1 + 4) = param_2;
    uVar2 = FUN_18088c060(*(int32_t *)(param_1 + 0x18),puVar1);
    if ((int)uVar2 == 0) {
      *param_3 = puVar1;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18088c8a0(int *param_1)

{
  int iVar1;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  
  if (param_1 == (int *)0x0) {
    return 0x1c;
  }
  uStackX_8 = 0;
  if (*param_1 != 0) {
    iVar1 = func_0x00018088c590(*param_1,&uStackX_10);
    if (iVar1 != 0) goto LAB_18088c94a;
    iVar1 = FUN_18088c740(&uStackX_8,uStackX_10);
    if (iVar1 != 0) goto LAB_18088c94a;
  }
  iVar1 = FUN_18088c620(param_1);
  if (iVar1 == 0) {
    if (*(longlong *)(param_1 + 2) != 0) {
      *(uint64_t *)(*(longlong *)(param_1 + 2) + 0x48) = 0;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      *(uint64_t *)(*(longlong *)(param_1 + 4) + 0x68) = 0;
    }
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1,&unknown_var_7008_ptr,0x4d,1);
  }
LAB_18088c94a:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_8);
}



uint64_t FUN_18088c970(longlong param_1,int32_t *param_2,int32_t *param_3)

{
  int32_t uVar1;
  
  if (param_2 != (int32_t *)0x0) {
    *param_2 = *(int32_t *)(param_1 + 0x24);
  }
  if (param_3 != (int32_t *)0x0) {
    uVar1 = 0x3f800000;
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar1 = func_0x000180851e30();
    }
    *param_3 = uVar1;
  }
  return 0;
}





// 函数: void FUN_18088c9b0(int *param_1,longlong param_2)
void FUN_18088c9b0(int *param_1,longlong param_2)

{
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  
  uStackX_10 = 0;
  if (*param_1 != 0) {
    uStackX_8 = 0;
    func_0x00018088c590(*param_1,&uStackX_8);
    FUN_18088c740(&uStackX_10,uStackX_8);
  }
  *(longlong *)(param_1 + 2) = param_2;
  if (param_2 == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18088ca20(longlong param_1,longlong param_2,uint64_t *param_3)

{
  int32_t *puVar1;
  uint64_t uVar2;
  
  if (*(longlong *)(param_2 + 0x48) != 0) {
    return 0x1c;
  }
  puVar1 = (int32_t *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x20,&unknown_var_7136_ptr,0x1d,0,0,1);
  if (puVar1 == (int32_t *)0x0) {
    uVar2 = 0x26;
  }
  else {
    *puVar1 = 0;
    *(uint64_t *)(puVar1 + 2) = 0;
    puVar1[6] = 0x3f800000;
    *(int32_t **)(param_2 + 0x48) = puVar1;
    *(longlong *)(puVar1 + 4) = param_2;
    uVar2 = FUN_18088c060(*(int32_t *)(param_1 + 0x18),puVar1);
    if ((int)uVar2 == 0) {
      *param_3 = puVar1;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18088cae0(int *param_1)

{
  int iVar1;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  
  if (param_1 == (int *)0x0) {
    return 0x1c;
  }
  uStackX_8 = 0;
  if (*param_1 != 0) {
    iVar1 = func_0x00018088c590(*param_1,&uStackX_10);
    if (iVar1 != 0) goto LAB_18088cb8a;
    iVar1 = FUN_18088c740(&uStackX_8,uStackX_10);
    if (iVar1 != 0) goto LAB_18088cb8a;
  }
  iVar1 = FUN_18088c620(param_1);
  if (iVar1 == 0) {
    if (*(longlong *)(param_1 + 2) != 0) {
      *(uint64_t *)(*(longlong *)(param_1 + 2) + 0x60) = 0;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      *(uint64_t *)(*(longlong *)(param_1 + 4) + 0x48) = 0;
    }
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1,&unknown_var_7136_ptr,0x44,1);
  }
LAB_18088cb8a:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_8);
}



uint64_t FUN_18088cbb0(longlong param_1,int32_t *param_2,int32_t *param_3)

{
  int32_t uVar1;
  
  if (param_2 != (int32_t *)0x0) {
    *param_2 = *(int32_t *)(param_1 + 0x18);
  }
  if (param_3 != (int32_t *)0x0) {
    uVar1 = 0x3f800000;
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar1 = func_0x0001808c3960();
    }
    *param_3 = uVar1;
  }
  return 0;
}



longlong FUN_18088cbf0(longlong param_1)

{
  func_0x000180767970();
  *(uint64_t *)(param_1 + 0x150) = 0;
  *(uint64_t *)(param_1 + 0x158) = 0;
  *(uint64_t *)(param_1 + 0x160) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(uint64_t *)(param_1 + 0x170) = 0;
  *(uint64_t *)(param_1 + 0x17c) = 0;
  *(int32_t *)(param_1 + 0x184) = 0;
  *(int8_t *)(param_1 + 0x188) = 0;
  *(int8_t *)(param_1 + 0x189) = 0;
  *(int8_t *)(param_1 + 0x18a) = 0;
  *(uint64_t *)(param_1 + 0x18c) = 0;
  *(uint64_t *)(param_1 + 0x194) = 0;
  *(int32_t *)(param_1 + 0x19c) = 0;
  func_0x000180772c00(param_1 + 0x1a0);
  *(uint64_t *)(param_1 + 0x1e0) = 0;
  *(uint64_t *)(param_1 + 0x1e8) = 0;
  *(uint64_t *)(param_1 + 0x1f0) = 0;
  *(uint64_t *)(param_1 + 0x1f8) = 0;
  *(uint64_t *)(param_1 + 0x200) = 0;
  *(uint64_t *)(param_1 + 0x208) = 0;
  *(uint64_t *)(param_1 + 0x210) = 0;
  *(uint64_t *)(param_1 + 0x218) = 0;
  *(uint64_t *)(param_1 + 0x220) = 0;
  *(uint64_t *)(param_1 + 0x228) = 0;
  *(uint64_t *)(param_1 + 0x230) = 0;
  FUN_180768b70(param_1 + 0x178);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180747e3f)
// WARNING: Removing unreachable block (ram,0x000180747e54)
// WARNING: Removing unreachable block (ram,0x000180747e8a)
// WARNING: Removing unreachable block (ram,0x000180747e92)
// WARNING: Removing unreachable block (ram,0x000180747eef)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_18088ccd0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset(*param_1 + (longlong)iVar1 * 4,0,(longlong)-iVar1 << 2);
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((longlong)param_1 + 0xc) = 0;
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00018088e7b3)
// WARNING: Removing unreachable block (ram,0x00018088e7c7)
// WARNING: Removing unreachable block (ram,0x00018088e801)
// WARNING: Removing unreachable block (ram,0x00018088e809)
// WARNING: Removing unreachable block (ram,0x00018088e811)
// WARNING: Removing unreachable block (ram,0x00018088e820)
// WARNING: Removing unreachable block (ram,0x00018088e892)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_18088cd80(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = uVar5 ^ (int)uVar5 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar5) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar5 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    puVar3 = (uint64_t *)((longlong)iVar1 * 0x30 + *param_1);
    lVar4 = (longlong)-iVar1;
    if (0 < lVar4) {
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3 = puVar3 + 6;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uVar5 = *(uint *)((longlong)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar5 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if ((int)uVar5 < 1) {
    return uVar5;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((longlong)param_1 + 0xc) = 0;
  return 0;
}





// 函数: void FUN_18088ce50(uint64_t *param_1)
void FUN_18088ce50(uint64_t *param_1)

{
  int iVar1;
  
  if (param_1[0x44] != 0) {
    iVar1 = FUN_180768380(param_1[0x44],0);
    if (iVar1 != 0) goto LAB_18088ce9f;
    param_1[0x44] = 0;
  }
  if (param_1[0x45] != 0) {
    iVar1 = FUN_1807688f0();
    if (iVar1 == 0) {
      param_1[0x45] = 0;
    }
  }
LAB_18088ce9f:
  FUN_18088cd80(param_1 + 0x42);
  FUN_180744d60(param_1 + 0x3f);
  FUN_180744d60(param_1 + 0x3d);
  *param_1 = &unknown_var_8408_ptr;
  return;
}



uint64_t FUN_18088cee0(longlong param_1,uint64_t param_2,char param_3)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_3 != '\0') && (*(longlong *)(param_1 + 0x208) != 0)) {
    return 0x46;
  }
  uVar2 = FUN_180897d90(param_2);
  if ((int)uVar2 == 0) {
    uVar4 = (int)*(uint *)(param_1 + 0x204) >> 0x1f;
    iVar3 = *(int *)(param_1 + 0x200) + 1;
    iVar1 = (*(uint *)(param_1 + 0x204) ^ uVar4) - uVar4;
    if (iVar1 < iVar3) {
      iVar1 = (int)((float)iVar1 * 1.5);
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      if (iVar3 < 8) {
        iVar3 = 8;
      }
      uVar2 = FUN_180747f10((longlong *)(param_1 + 0x1f8),iVar3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    *(uint64_t *)(*(longlong *)(param_1 + 0x1f8) + (longlong)*(int *)(param_1 + 0x200) * 8) =
         param_2;
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
    if (param_3 != '\0') {
      *(uint64_t *)(param_1 + 0x208) = param_2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_18088cf2e(void)

{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  char unaff_BPL;
  longlong unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t in_stack_00000038;
  
  uVar4 = (int)*(uint *)(unaff_RSI + 0x204) >> 0x1f;
  iVar3 = *(int *)(unaff_RSI + 0x200) + 1;
  iVar1 = (*(uint *)(unaff_RSI + 0x204) ^ uVar4) - uVar4;
  if (iVar1 < iVar3) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 8) {
      iVar3 = 8;
    }
    uVar2 = FUN_180747f10((longlong *)(unaff_RSI + 0x1f8),iVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  *(uint64_t *)(*(longlong *)(unaff_RSI + 0x1f8) + (longlong)*(int *)(unaff_RSI + 0x200) * 8) =
       in_stack_00000038;
  *(int *)(unaff_RSI + 0x200) = *(int *)(unaff_RSI + 0x200) + 1;
  if (unaff_BPL != '\0') {
    *(uint64_t *)(unaff_RSI + 0x208) = unaff_RDI;
  }
  return 0;
}





// 函数: void FUN_18088cfa3(void)
void FUN_18088cfa3(void)

{
  return;
}



int FUN_18088cfc0(longlong param_1)

{
  uint64_t *puVar1;
  int iVar2;
  
  puVar1 = (uint64_t *)((longlong)*(int *)(param_1 + 0x17c) * 8 + 0x180c4f450);
  FUN_180768b50(puVar1);
  FUN_180772cd0(param_1 + 0x1a0);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  FUN_180876180(*(uint64_t *)(param_1 + 0x158),1,0);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
  iVar2 = func_0x000180874320(*(uint64_t *)(param_1 + 0x158));
  if (iVar2 == 0) {
    iVar2 = FUN_18088d0c0(param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_18088af30(*(uint64_t *)(param_1 + 0x158),param_1 + 0x1a0,1);
    }
  }
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  FUN_180876180(*(uint64_t *)(param_1 + 0x158),2);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
  LOCK();
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  UNLOCK();
  FUN_180772cf0(param_1 + 0x1a0,0x5f);
  *puVar1 = 0;
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d0c0(longlong param_1)
void FUN_18088d0c0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int8_t auStack_138 [48];
  int aiStack_108 [2];
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  FUN_180768360(**(uint64_t **)(param_1 + 0x1e0));
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_100 = 0;
  FUN_18088c740(&uStack_100,*(uint64_t *)(param_1 + 0x158));
  aiStack_108[0] = 0;
  FUN_1808e66f0(*(uint64_t *)(param_1 + 0x1e0),&uStack_f8,aiStack_108);
  piVar2 = (int *)func_0x000180879a50(*(uint64_t *)(param_1 + 0x158));
  iVar1 = func_0x0001808e64e0(*(uint64_t *)(param_1 + 0x1e0));
  piVar2[2] = iVar1;
  *piVar2 = (int)((float)aiStack_108[0] * 0.9 + (float)*piVar2 * 0.1);
  iVar1 = piVar2[1];
  if (piVar2[1] < aiStack_108[0]) {
    iVar1 = aiStack_108[0];
  }
  piVar2[1] = iVar1;
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_100);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d2be(void)
void FUN_18088d2be(void)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  longlong unaff_RDI;
  int unaff_R13D;
  longlong in_stack_00000060;
  int iStack0000000000000068;
  int iStack000000000000006c;
  
  iVar3 = unaff_R13D;
  do {
    iVar2 = FUN_180896140(*(uint64_t *)(*(longlong *)(unaff_RDI + 0x1e8) + (longlong)iVar3 * 8));
    if (iVar2 != 0) break;
    if ((*(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x1e8) + (longlong)iVar3 * 8) + 0x6c) >>
         0x1b & 1) != 0) {
      iVar2 = iStack0000000000000068 + 1;
      iVar3 = iStack000000000000006c;
      if (iStack000000000000006c < 0) {
        iVar3 = -iStack000000000000006c;
      }
      if (iVar3 < iVar2) {
        iVar3 = iStack000000000000006c;
        if (iStack000000000000006c < 0) {
          iVar3 = -iStack000000000000006c;
        }
        iVar4 = (int)((float)iVar3 * 1.5);
        iVar3 = iVar2;
        if (iVar2 <= iVar4) {
          iVar3 = iVar4;
        }
        if (iVar3 < 0x10) {
          iVar4 = 0x10;
        }
        else if (iVar4 < iVar2) {
          iVar4 = iVar2;
        }
        iVar2 = FUN_180747e10(&stack0x00000060,iVar4);
        if (iVar2 != 0) break;
      }
      *(int *)(in_stack_00000060 + (longlong)iStack0000000000000068 * 4) = unaff_ESI;
      iStack0000000000000068 = iStack0000000000000068 + 1;
      iVar2 = unaff_R13D;
    }
    iVar3 = unaff_ESI + 1;
    unaff_ESI = iVar3;
  } while (iVar3 < *(int *)(unaff_RDI + 0x1f0));
  *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + -1;
  if (iVar2 != 0) {
    FUN_18088ccd0(&stack0x00000060);
                    // WARNING: Subroutine does not return
    FUN_18088c790(&stack0x00000030);
  }
  if (iStack0000000000000068 + -1 < 0) {
    FUN_18088ccd0(&stack0x00000060);
                    // WARNING: Subroutine does not return
    FUN_18088c790(&stack0x00000030);
  }
  uVar1 = *(uint64_t *)
           (*(longlong *)(unaff_RDI + 0x1e8) +
           (longlong)*(int *)(in_stack_00000060 + (longlong)(iStack0000000000000068 + -1) * 4) * 8);
  FUN_180894fb0(uVar1);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar1,&unknown_var_7392_ptr,0x2ca,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d388(void)
void FUN_18088d388(void)

{
  uint64_t uVar1;
  int unaff_EBX;
  longlong unaff_RDI;
  longlong in_stack_00000060;
  int in_stack_00000068;
  
  *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + -1;
  if (unaff_EBX != 0) {
    FUN_18088ccd0(&stack0x00000060);
                    // WARNING: Subroutine does not return
    FUN_18088c790(&stack0x00000030);
  }
  if (-1 < in_stack_00000068 + -1) {
    uVar1 = *(uint64_t *)
             (*(longlong *)(unaff_RDI + 0x1e8) +
             (longlong)*(int *)(in_stack_00000060 + (longlong)(in_stack_00000068 + -1) * 4) * 8);
    FUN_180894fb0(uVar1);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar1,&unknown_var_7392_ptr,0x2ca,1);
  }
  FUN_18088ccd0(&stack0x00000060);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&stack0x00000030);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d510(longlong param_1)
void FUN_18088d510(longlong param_1)

{
  uint64_t *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x158) + 0x24);
  while (((uVar3 >> 1 & 1) == 0 && (*(char *)(param_1 + 0x189) == '\0'))) {
    FUN_180768bf0(5);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x158) + 0x24);
  }
  cVar2 = *(char *)(param_1 + 0x189);
  do {
    if (cVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
    }
    *(int8_t *)(param_1 + 0x18a) = 1;
    FUN_180768940(*(uint64_t *)(param_1 + 0x170));
    if (*(char *)(param_1 + 0x189) == '\0') {
      puVar1 = (uint64_t *)((longlong)*(int *)(param_1 + 0x17c) * 8 + 0x180c4f450);
      FUN_180768b50(puVar1);
      FUN_180772cd0(param_1 + 0x1a0);
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
      FUN_180876180(*(uint64_t *)(param_1 + 0x158),1);
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
      iVar4 = func_0x000180874320(*(uint64_t *)(param_1 + 0x158));
      if ((iVar4 == 0) && (iVar4 = FUN_18088d0c0(param_1), iVar4 == 0)) {
        iVar4 = FUN_18088af30(*(uint64_t *)(param_1 + 0x158),param_1 + 0x1a0);
      }
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
      FUN_180876180(*(uint64_t *)(param_1 + 0x158),2);
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
      LOCK();
      *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
      UNLOCK();
      FUN_180772cf0(param_1 + 0x1a0,0x5f);
      *puVar1 = 0;
      LOCK();
      *(int *)(param_1 + 0x198) = iVar4;
      UNLOCK();
      if ((iVar4 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
        auStack_128[0] = 0;
        puStack_138 = auStack_128;
                    // WARNING: Subroutine does not return
        FUN_180749ef0(iVar4,0xb,0,&unknown_var_7512_ptr);
      }
    }
    cVar2 = *(char *)(param_1 + 0x189);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d575(void)
void FUN_18088d575(void)

{
  uint64_t *puVar1;
  int iVar2;
  longlong unaff_RDI;
  int8_t in_stack_00000030;
  ulonglong in_stack_00000130;
  
  do {
    *(int8_t *)(unaff_RDI + 0x18a) = 1;
    FUN_180768940(*(uint64_t *)(unaff_RDI + 0x170));
    if (*(char *)(unaff_RDI + 0x189) == '\0') {
      puVar1 = (uint64_t *)((longlong)*(int *)(unaff_RDI + 0x17c) * 8 + 0x180c4f450);
      FUN_180768b50(puVar1);
      FUN_180772cd0(unaff_RDI + 0x1a0);
      *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + 1;
      FUN_180876180(*(uint64_t *)(unaff_RDI + 0x158),1);
      *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + -1;
      iVar2 = func_0x000180874320(*(uint64_t *)(unaff_RDI + 0x158));
      if (iVar2 == 0) {
        iVar2 = FUN_18088d0c0();
        if (iVar2 == 0) {
          iVar2 = FUN_18088af30(*(uint64_t *)(unaff_RDI + 0x158),unaff_RDI + 0x1a0);
        }
      }
      *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + 1;
      FUN_180876180(*(uint64_t *)(unaff_RDI + 0x158),2);
      *(int *)(unaff_RDI + 0x180) = *(int *)(unaff_RDI + 0x180) + -1;
      LOCK();
      *(int *)(unaff_RDI + 0x19c) = *(int *)(unaff_RDI + 0x19c) + 1;
      UNLOCK();
      FUN_180772cf0(unaff_RDI + 0x1a0,0x5f);
      *puVar1 = 0;
      LOCK();
      *(int *)(unaff_RDI + 0x198) = iVar2;
      UNLOCK();
      if ((iVar2 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
        in_stack_00000030 = 0;
                    // WARNING: Subroutine does not return
        FUN_180749ef0(iVar2,0xb,0,&unknown_var_7512_ptr,&stack0x00000030);
      }
    }
    if (*(char *)(unaff_RDI + 0x189) != '\0') {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000130 ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_18088d6fc(void)
void FUN_18088d6fc(void)

{
  ulonglong in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000130 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_18088d720(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lStackX_8;
  
  if ((*(int *)(param_1 + 0x180) != 0) || (*(int *)(param_1 + 0x184) != 0)) {
    lStackX_8 = 0;
    FUN_180768b50(&lStackX_8);
    if (lStackX_8 == *(longlong *)((longlong)*(int *)(param_1 + 0x17c) * 8 + 0x180c4f450)) {
      uVar1 = FUN_18088dd60(param_1,param_2);
      if ((int)uVar1 == 0) {
        return 0;
      }
      return uVar1;
    }
  }
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xfU & 0xfffffff0;
  uVar1 = func_0x0001808e64d0(*(uint64_t *)(param_1 + 0x1e0));
  if ((int)uVar1 == 0) {
    return 0;
  }
  return uVar1;
}



uint64_t FUN_18088d7c0(longlong param_1,longlong param_2)

{
  uint64_t uVar1;
  longlong lStackX_8;
  
  if (*(int *)(param_1 + 0x200) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x180) != 0) || (*(int *)(param_1 + 0x184) != 0)) {
    lStackX_8 = 0;
    FUN_180768b50(&lStackX_8);
    if (lStackX_8 == *(longlong *)((longlong)*(int *)(param_1 + 0x17c) * 8 + 0x180c4f450)) {
      uVar1 = FUN_18088dd60(param_1,param_2);
      goto LAB_18088d83c;
    }
  }
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xfU & 0xfffffff0;
  uVar1 = func_0x0001808e64d0(*(uint64_t *)(param_1 + 0x1e0));
LAB_18088d83c:
  if ((int)uVar1 == 0) {
    return 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d850(longlong param_1)
void FUN_18088d850(longlong param_1)

{
  uint64_t uVar1;
  int iVar2;
  
  *(int8_t *)(param_1 + 0x189) = 1;
  iVar2 = FUN_180748e20(*(uint64_t *)(*(longlong *)(param_1 + 0x158) + 0x78),0,0,0);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x188) != '\0') {
      iVar2 = FUN_180768910(*(uint64_t *)(param_1 + 0x170));
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_180767ad0(param_1);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_1807688f0(*(uint64_t *)(param_1 + 0x170));
      if (iVar2 != 0) {
        return;
      }
      *(uint64_t *)(param_1 + 0x170) = 0;
    }
    iVar2 = FUN_180768380(*(uint64_t *)(param_1 + 0x160),0);
    if (iVar2 == 0) {
      *(uint64_t *)(param_1 + 0x160) = 0;
      iVar2 = FUN_180768380(*(uint64_t *)(param_1 + 0x168),0);
      if (iVar2 == 0) {
        uVar1 = *(uint64_t *)(param_1 + 0x1e0);
        *(uint64_t *)(param_1 + 0x168) = 0;
        *(uint64_t *)(param_1 + 0x158) = 0;
        FUN_1808e6410(uVar1);
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar1,&unknown_var_7392_ptr,0x83,1);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d880(void)
void FUN_18088d880(void)

{
  uint64_t uVar1;
  int iVar2;
  longlong unaff_RDI;
  
  if (*(char *)(unaff_RDI + 0x188) != '\0') {
    iVar2 = FUN_180768910(*(uint64_t *)(unaff_RDI + 0x170));
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_180767ad0();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1807688f0(*(uint64_t *)(unaff_RDI + 0x170));
    if (iVar2 != 0) {
      return;
    }
    *(uint64_t *)(unaff_RDI + 0x170) = 0;
  }
  iVar2 = FUN_180768380(*(uint64_t *)(unaff_RDI + 0x160),0);
  if (iVar2 == 0) {
    *(uint64_t *)(unaff_RDI + 0x160) = 0;
    iVar2 = FUN_180768380(*(uint64_t *)(unaff_RDI + 0x168),0);
    if (iVar2 == 0) {
      uVar1 = *(uint64_t *)(unaff_RDI + 0x1e0);
      *(uint64_t *)(unaff_RDI + 0x168) = 0;
      *(uint64_t *)(unaff_RDI + 0x158) = 0;
      FUN_1808e6410(uVar1);
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar1,&unknown_var_7392_ptr,0x83,1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d902(void)
void FUN_18088d902(void)

{
  uint64_t uVar1;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(uint64_t *)(unaff_RDI + 0x1e0);
  *(uint64_t *)(unaff_RDI + 0x168) = unaff_RSI;
  *(uint64_t *)(unaff_RDI + 0x158) = unaff_RSI;
  FUN_1808e6410(uVar1);
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar1,&unknown_var_7392_ptr,0x83,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d90e(void)
void FUN_18088d90e(void)

{
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  
  *(uint64_t *)(unaff_RDI + 0x168) = unaff_RSI;
  *(uint64_t *)(unaff_RDI + 0x158) = unaff_RSI;
  FUN_1808e6410();
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18088d9d0(void)
void FUN_18088d9d0(void)

{
  uint64_t uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if ((int)unaff_RSI < *(int *)(unaff_RDI + 0x1f0)) {
    uVar1 = *(uint64_t *)(unaff_RSI + *(longlong *)(unaff_RDI + 0x1e8));
    FUN_180894fb0(uVar1);
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar1,&unknown_var_7392_ptr,0x1e7,1);
  }
  FUN_180744d60(unaff_RDI + 0x1e8);
  return;
}





// 函数: void FUN_18088da44(void)
void FUN_18088da44(void)

{
  return;
}





