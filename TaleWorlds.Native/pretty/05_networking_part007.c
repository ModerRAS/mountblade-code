#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part007.c - 29 个函数

// 函数: void FUN_180848840(longlong param_1,uint64_t param_2)
void FUN_180848840(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f4d0(param_2,param_1 + 0x28,0x80);
    if (iVar1 == 0) {
      iVar1 = FUN_18088f4d0(param_2,param_1 + 0xa8,0x80);
      if (iVar1 == 0) {
        FUN_18088f470(param_2,param_1 + 0x1c);
      }
    }
  }
  return;
}





// 函数: void FUN_1808488b0(longlong param_1,uint64_t param_2)
void FUN_1808488b0(longlong param_1,uint64_t param_2)

{
  int iVar1;
  int32_t auStackX_8 [2];
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,auStackX_8);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x18) = auStackX_8[0];
      FUN_18088eea0(param_2,param_1 + 0x1c);
    }
  }
  return;
}





// 函数: void FUN_180848900(longlong param_1,uint64_t param_2)
void FUN_180848900(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      FUN_18088eea0(param_2,param_1 + 0x1c);
    }
  }
  return;
}





// 函数: void FUN_180848950(longlong param_1,uint64_t param_2)
void FUN_180848950(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088f1a0(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088ee60(param_2,param_1 + 0x20);
  }
  return;
}





// 函数: void FUN_1808489a0(longlong param_1,uint64_t param_2)
void FUN_1808489a0(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee20(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088ee20(param_2,param_1 + 0x14);
  }
  return;
}





// 函数: void FUN_1808489e0(longlong param_1,uint64_t param_2)
void FUN_1808489e0(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee20(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088ee60(param_2,param_1 + 0x14);
  }
  return;
}





// 函数: void FUN_180848a20(longlong param_1,uint64_t param_2)
void FUN_180848a20(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088f2d0(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee60(param_2,param_1 + 0x48);
    if (iVar1 == 0) {
      FUN_18088ee60(param_2,param_1 + 0x4c);
    }
  }
  return;
}





// 函数: void FUN_180848a70(longlong param_1,uint64_t param_2)
void FUN_180848a70(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088f4d0(param_2,param_1 + 0x18,0x200);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee60(param_2,param_1 + 0x14);
    if (iVar1 == 0) {
      FUN_18088ee60(param_2,param_1 + 0x10);
    }
  }
  return;
}





// 函数: void FUN_180848ac0(longlong param_1,uint64_t param_2)
void FUN_180848ac0(longlong param_1,uint64_t param_2)

{
  int iVar1;
  int32_t auStackX_8 [2];
  
  iVar1 = FUN_18088f010(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_18088ee20(param_2,auStackX_8);
      if (iVar1 == 0) {
        *(int32_t *)(param_1 + 0x1c) = auStackX_8[0];
        iVar1 = FUN_18088ee60(param_2,param_1 + 0x20);
        if (iVar1 == 0) {
          FUN_18088ee60(param_2,param_1 + 0x24);
        }
      }
    }
  }
  return;
}





// 函数: void FUN_180848b30(longlong param_1,uint64_t param_2)
void FUN_180848b30(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee20(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f050(param_2,param_1 + 0x14);
    if (iVar1 == 0) {
      iVar1 = FUN_18088f3a0(param_2,param_1 + 0x44);
      if (iVar1 == 0) {
        FUN_18088f470(param_2,param_1 + 0x50);
      }
    }
  }
  return;
}





// 函数: void FUN_180848b90(longlong param_1,uint64_t param_2)
void FUN_180848b90(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee20(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088eea0(param_2,param_1 + 0x14);
  }
  return;
}





// 函数: void FUN_180848bd0(longlong param_1,uint64_t param_2)
void FUN_180848bd0(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088f310(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088eea0(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      FUN_18088f470(param_2,param_1 + 0x1c);
    }
  }
  return;
}





// 函数: void FUN_180848c20(longlong param_1,uint64_t param_2)
void FUN_180848c20(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088f310(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f4d0(param_2,param_1 + 0x1d,0x80);
    if (iVar1 == 0) {
      FUN_18088f470(param_2,param_1 + 0x1c);
    }
  }
  return;
}





// 函数: void FUN_180848c70(longlong param_1,uint64_t param_2)
void FUN_180848c70(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088f4d0(param_2,param_1 + 0x20,0x80);
  if (iVar1 == 0) {
    iVar1 = FUN_18088eea0(param_2,param_1 + 0x10);
    if (iVar1 == 0) {
      FUN_18088f470(param_2,param_1 + 0x14);
    }
  }
  return;
}





// 函数: void FUN_180848cc0(longlong param_1,uint64_t param_2)
void FUN_180848cc0(longlong param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088f4d0(param_2,param_1 + 0x20,0x80);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f4d0(param_2,param_1 + 0xa0,0x80);
    if (iVar1 == 0) {
      FUN_18088f470(param_2,param_1 + 0x14);
    }
  }
  return;
}





// 函数: void FUN_180848d50(longlong *param_1,uint param_2,uint64_t param_3)
void FUN_180848d50(longlong *param_1,uint param_2,uint64_t param_3)

{
  int iVar1;
  
  if (param_2 < 0x11100) {
    iVar1 = FUN_18088ee60(param_3,param_1 + 2);
    if (iVar1 == 0) {
      iVar1 = FUN_18088f4d0(param_3,param_1 + 5,0x80);
      if (iVar1 == 0) {
        iVar1 = FUN_18088eea0(param_3,param_1 + 3);
        if (iVar1 == 0) {
          *(int8_t *)((longlong)param_1 + 0x1c) = 0;
          return;
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_3);
  }
  return;
}





// 函数: void FUN_180848dc0(longlong *param_1,uint param_2,uint64_t param_3)
void FUN_180848dc0(longlong *param_1,uint param_2,uint64_t param_3)

{
  int iVar1;
  uint64_t uStackX_18;
  int8_t auStackX_20 [8];
  
  if (param_2 < 0x10600) {
    *(int32_t *)(param_1 + 2) = 0;
FUN_18088f050:
    iVar1 = FUN_18088f710(param_3,auStackX_20);
    if ((iVar1 == 0) && (iVar1 = FUN_18088f710(auStackX_20,&uStackX_18), iVar1 == 0)) {
      iVar1 = FUN_18010cbc0(uStackX_18,&unknown_var_7592_ptr,(longlong)param_1 + 0x14,param_1 + 3,
                            (longlong)param_1 + 0x1c);
      if (((iVar1 == 3) ||
          (((iVar1 = FUN_18088eea0(&uStackX_18,(longlong)param_1 + 0x14), iVar1 == 0 &&
            (iVar1 = FUN_18088eea0(&uStackX_18,param_1 + 3), iVar1 == 0)) &&
           (iVar1 = FUN_18088eea0(&uStackX_18,(longlong)param_1 + 0x1c), iVar1 == 0)))) &&
         (iVar1 = FUN_18088f710(auStackX_20,&uStackX_18), iVar1 == 0)) {
        iVar1 = FUN_18010cbc0(uStackX_18,&unknown_var_7592_ptr,param_1 + 4,(longlong)param_1 + 0x24,
                              param_1 + 5);
        if (((iVar1 == 3) ||
            (((iVar1 = FUN_18088eea0(&uStackX_18,param_1 + 4), iVar1 == 0 &&
              (iVar1 = FUN_18088eea0(&uStackX_18,(longlong)param_1 + 0x24), iVar1 == 0)) &&
             (iVar1 = FUN_18088eea0(&uStackX_18,param_1 + 5), iVar1 == 0)))) &&
           (iVar1 = FUN_18088f3a0(auStackX_20,(longlong)param_1 + 0x2c), iVar1 == 0)) {
          FUN_18088f3a0(auStackX_20,param_1 + 7);
        }
      }
    }
    return;
  }
  if (param_2 < 0x20100) {
    *(int8_t *)(param_1 + 10) = 0;
    *(uint64_t *)((longlong)param_1 + 0x44) = 0;
    *(int32_t *)((longlong)param_1 + 0x4c) = 0;
    iVar1 = FUN_18088ee20(param_3,param_1 + 2);
    if (iVar1 == 0) goto FUN_18088f050;
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180848e50(char *param_1,uint64_t *param_2)
void FUN_180848e50(char *param_1,uint64_t *param_2)

{
  char *pcVar1;
  char cVar2;
  int8_t uVar3;
  int16_t uVar4;
  int iVar5;
  char *pcVar6;
  int8_t *puVar7;
  int8_t *puVar8;
  longlong lVar9;
  int8_t *puVar10;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int8_t *apuStack_88 [5];
  int8_t uStack_60;
  int8_t auStack_5f [8];
  int8_t uStack_57;
  int8_t auStack_56 [4];
  int8_t uStack_52;
  int8_t auStack_51 [4];
  int8_t uStack_4d;
  int8_t auStack_4c [4];
  int8_t uStack_48;
  int8_t auStack_47 [10];
  int8_t auStack_3d [5];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  if (param_2 != (uint64_t *)0x0) {
    if ((((param_1 == (char *)0x0) || (iVar5 = func_0x00018076b690(), iVar5 != 0x26)) ||
        (*param_1 != '{')) || (param_1[0x25] != '}')) {
FUN_180848ff1:
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      func_0x00018076b450(&uStack_60,param_1,0x27);
      uStack_57 = 0;
      apuStack_88[0] = auStack_5f;
      lVar9 = 0;
      uStack_52 = 0;
      apuStack_88[1] = auStack_56;
      uStack_4d = 0;
      apuStack_88[2] = auStack_51;
      apuStack_88[3] = auStack_4c;
      apuStack_88[4] = auStack_47;
      uStack_48 = 0;
      auStack_3d[2] = 0;
      do {
        pcVar6 = apuStack_88[lVar9];
        cVar2 = *pcVar6;
        while (cVar2 != '\0') {
          if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
             (5 < (byte)(cVar2 + 0x9fU))) goto FUN_180848ff1;
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 5);
      uStack_98 = func_0x00018076b320(auStack_5f);
      uVar4 = func_0x00018076b320(auStack_56);
      uStack_94 = CONCAT22(uStack_94._2_2_,uVar4);
      uVar4 = func_0x00018076b320(auStack_51);
      uStack_94 = CONCAT22(uVar4,(int16_t)uStack_94);
      uVar4 = func_0x00018076b320(auStack_4c);
      puVar8 = (int8_t *)((longlong)&uStack_8c + 3);
      uStack_90 = CONCAT31(CONCAT21(uStack_90._2_2_,(char)uVar4),(char)((ushort)uVar4 >> 8));
      puVar7 = auStack_3d;
      iVar5 = 5;
      puVar10 = auStack_3d;
      do {
        uVar3 = func_0x00018076b320(puVar10);
        puVar10 = puVar10 + -2;
        *puVar8 = uVar3;
        iVar5 = iVar5 + -1;
        *puVar7 = 0;
        puVar8 = puVar8 + -1;
        puVar7 = puVar7 + -2;
      } while (-1 < iVar5);
      *(int32_t *)param_2 = uStack_98;
      *(int32_t *)((longlong)param_2 + 4) = uStack_94;
      *(int32_t *)(param_2 + 1) = uStack_90;
      *(int32_t *)((longlong)param_2 + 0xc) = uStack_8c;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_b8);
}





// 函数: void FUN_180848e82(void)
void FUN_180848e82(void)

{
  char *pcVar1;
  char cVar2;
  int32_t uVar3;
  int32_t uVar4;
  int8_t uVar5;
  int16_t uVar6;
  int iVar7;
  int32_t uVar8;
  char *pcVar9;
  char *unaff_RBX;
  longlong unaff_RBP;
  int8_t *puVar10;
  int8_t *puVar11;
  longlong lVar12;
  uint64_t *unaff_R15;
  
  if ((((unaff_RBX == (char *)0x0) || (iVar7 = func_0x00018076b690(), iVar7 != 0x26)) ||
      (*unaff_RBX != '{')) || (unaff_RBX[0x25] != '}')) {
FUN_180848ff1:
    *unaff_R15 = 0;
    unaff_R15[1] = 0;
  }
  else {
    func_0x00018076b450(unaff_RBP + -1);
    *(int8_t *)(unaff_RBP + 8) = 0;
    *(longlong *)(unaff_RBP + -0x29) = unaff_RBP;
    lVar12 = 0;
    *(int8_t *)(unaff_RBP + 0xd) = 0;
    *(longlong *)(unaff_RBP + -0x21) = unaff_RBP + 9;
    *(int8_t *)(unaff_RBP + 0x12) = 0;
    *(longlong *)(unaff_RBP + -0x19) = unaff_RBP + 0xe;
    *(longlong *)(unaff_RBP + -0x11) = unaff_RBP + 0x13;
    *(longlong *)(unaff_RBP + -9) = unaff_RBP + 0x18;
    *(int8_t *)(unaff_RBP + 0x17) = 0;
    *(int8_t *)(unaff_RBP + 0x24) = 0;
    do {
      pcVar9 = *(char **)(unaff_RBP + -0x29 + lVar12 * 8);
      cVar2 = *pcVar9;
      while (cVar2 != '\0') {
        if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
           (5 < (byte)(cVar2 + 0x9fU))) goto FUN_180848ff1;
        pcVar1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar2 = *pcVar1;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < 5);
    uVar8 = func_0x00018076b320();
    *(int32_t *)(unaff_RBP + -0x39) = uVar8;
    uVar6 = func_0x00018076b320(unaff_RBP + 9);
    *(int16_t *)(unaff_RBP + -0x35) = uVar6;
    uVar6 = func_0x00018076b320(unaff_RBP + 0xe);
    *(int16_t *)(unaff_RBP + -0x33) = uVar6;
    uVar6 = func_0x00018076b320(unaff_RBP + 0x13);
    *(char *)(unaff_RBP + -0x30) = (char)uVar6;
    puVar11 = (int8_t *)(unaff_RBP + -0x2a);
    *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar6 >> 8);
    puVar10 = (int8_t *)(unaff_RBP + 0x22);
    iVar7 = 5;
    lVar12 = unaff_RBP + 0x22;
    do {
      uVar5 = func_0x00018076b320(lVar12);
      lVar12 = lVar12 + -2;
      *puVar11 = uVar5;
      iVar7 = iVar7 + -1;
      *puVar10 = 0;
      puVar11 = puVar11 + -1;
      puVar10 = puVar10 + -2;
    } while (-1 < iVar7);
    uVar8 = *(int32_t *)(unaff_RBP + -0x35);
    uVar3 = *(int32_t *)(unaff_RBP + -0x31);
    uVar4 = *(int32_t *)(unaff_RBP + -0x2d);
    *(int32_t *)unaff_R15 = *(int32_t *)(unaff_RBP + -0x39);
    *(int32_t *)((longlong)unaff_R15 + 4) = uVar8;
    *(int32_t *)(unaff_R15 + 1) = uVar3;
    *(int32_t *)((longlong)unaff_R15 + 0xc) = uVar4;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180848f4e(void)
void FUN_180848f4e(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int8_t uVar3;
  int16_t uVar4;
  int32_t uVar5;
  int iVar6;
  longlong unaff_RBP;
  int8_t *puVar7;
  int8_t *puVar8;
  int8_t unaff_R12B;
  longlong lVar9;
  int32_t *unaff_R15;
  
  uVar5 = func_0x00018076b320();
  *(int32_t *)(unaff_RBP + -0x39) = uVar5;
  uVar4 = func_0x00018076b320(unaff_RBP + 9);
  *(int16_t *)(unaff_RBP + -0x35) = uVar4;
  uVar4 = func_0x00018076b320(unaff_RBP + 0xe);
  *(int16_t *)(unaff_RBP + -0x33) = uVar4;
  uVar4 = func_0x00018076b320(unaff_RBP + 0x13);
  *(char *)(unaff_RBP + -0x30) = (char)uVar4;
  puVar8 = (int8_t *)(unaff_RBP + -0x2a);
  *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar4 >> 8);
  puVar7 = (int8_t *)(unaff_RBP + 0x22);
  iVar6 = 5;
  lVar9 = unaff_RBP + 0x22;
  do {
    uVar3 = func_0x00018076b320(lVar9);
    lVar9 = lVar9 + -2;
    *puVar8 = uVar3;
    iVar6 = iVar6 + -1;
    *puVar7 = unaff_R12B;
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -2;
  } while (-1 < iVar6);
  uVar5 = *(int32_t *)(unaff_RBP + -0x35);
  uVar1 = *(int32_t *)(unaff_RBP + -0x31);
  uVar2 = *(int32_t *)(unaff_RBP + -0x2d);
  *unaff_R15 = *(int32_t *)(unaff_RBP + -0x39);
  unaff_R15[1] = uVar5;
  unaff_R15[2] = uVar1;
  unaff_R15[3] = uVar2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180848ff1(void)
void FUN_180848ff1(void)

{
  longlong unaff_RBP;
  uint64_t *unaff_R15;
  
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18084900b(void)
void FUN_18084900b(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180849030(longlong *param_1,uint64_t param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if (iVar2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (iVar2 != 0) {
    if (iVar2 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_8432_ptr,0xf4,0,0,
                            1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1]);
        }
        goto LAB_1808490b9;
      }
    }
    return 0x26;
  }
LAB_1808490b9:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180849054(uint64_t param_1,uint64_t param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808490b9:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if ((int)param_2 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&unknown_var_8432_ptr,0xf4,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1]);
      }
      goto LAB_1808490b9;
    }
  }
  return 0x26;
}



uint64_t FUN_180849104(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180849120(longlong *param_1,int param_2)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar7 = (int32_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x14 - 1U < 0x3fffffff) {
      puVar7 = (int32_t *)
               FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x14,&unknown_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar7 != (int32_t *)0x0) {
        iVar2 = (int)param_1[1];
        lVar8 = (longlong)iVar2;
        if ((iVar2 != 0) && (lVar3 = *param_1, 0 < iVar2)) {
          puVar9 = puVar7;
          do {
            puVar1 = (int32_t *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            puVar9[4] = *(int32_t *)((lVar3 - (longlong)puVar7) + -4 + (longlong)(puVar9 + 5));
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 5;
          } while (lVar8 != 0);
        }
        goto LAB_1808491ce;
      }
    }
    return 0x26;
  }
LAB_1808491ce:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = (longlong)puVar7;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180849144(uint64_t param_1,int param_2)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  puVar7 = (int32_t *)0x0;
  if (unaff_EDI == 0) {
LAB_1808491ce:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (longlong)puVar7;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x14 - 1U < 0x3fffffff) {
    puVar7 = (int32_t *)
             FUN_180741e10(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2 * 0x14,&unknown_var_8432_ptr,
                           0xf4,0);
    if (puVar7 != (int32_t *)0x0) {
      iVar2 = (int)unaff_RBX[1];
      lVar8 = (longlong)iVar2;
      if ((iVar2 != 0) && (lVar3 = *unaff_RBX, 0 < iVar2)) {
        puVar9 = puVar7;
        do {
          puVar1 = (int32_t *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *puVar9 = *puVar1;
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          puVar9[4] = *(int32_t *)((lVar3 - (longlong)puVar7) + -4 + (longlong)(puVar9 + 5));
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 5;
        } while (lVar8 != 0);
      }
      goto LAB_1808491ce;
    }
  }
  return 0x26;
}



uint64_t FUN_180849219(void)

{
  return 0x26;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849230(uint64_t param_1)
void FUN_180849230(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  int8_t auStack_168 [48];
  longlong alStack_138 [2];
  uint64_t *apuStack_128 [34];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  alStack_138[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808492e6;
    iVar2 = FUN_18088c740(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180849294;
  }
  else {
LAB_180849294:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_138[0] + 0x98),apuStack_128,0x18), iVar1 == 0))
  {
    *apuStack_128[0] = &unknown_var_8024_ptr;
    *(int32_t *)(apuStack_128[0] + 1) = 0x18;
    *(int *)(apuStack_128[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(uint64_t *)(alStack_138[0] + 0x98));
  }
LAB_1808492e6:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_138 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849360(ulonglong param_1)
void FUN_180849360(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  longlong alStack_138 [4];
  int8_t auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  iVar1 = func_0x00018088c590(param_1,alStack_138 + 2);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[2] + 0x24) >> 1 & 1) != 0) {
      FUN_18084b0c0(param_1);
      alStack_138[1] = 0;
      iVar1 = func_0x00018088c590(param_1 & 0xffffffff,alStack_138);
      if (((iVar1 != 0) ||
          (((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) != 0 &&
           (iVar2 = FUN_18088c740(alStack_138 + 1), iVar2 == 0)))) && (iVar1 == 0)) {
        FUN_18088da50(*(uint64_t *)(alStack_138[0] + 0x98));
      }
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStack_138 + 1);
    }
    iVar1 = FUN_180883a30();
    if (iVar1 == 0) goto LAB_180849462;
  }
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    puStack_148 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_4712_ptr);
  }
LAB_180849462:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849490(uint64_t param_1,uint64_t *param_2)
void FUN_180849490(uint64_t param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  uint64_t uStack_148;
  longlong lStack_140;
  uint64_t *apuStack_138 [2];
  int8_t auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&unknown_var_6920_ptr);
  }
  uStack_148 = 0;
  iVar5 = func_0x00018088c590(param_1,&lStack_140);
  if (iVar5 == 0) {
    if ((*(uint *)(lStack_140 + 0x24) >> 1 & 1) == 0) goto LAB_1808494eb;
    iVar6 = FUN_18088c740(&uStack_148);
    if (iVar6 == 0) goto LAB_180849553;
  }
  else {
LAB_180849553:
    iVar6 = iVar5;
  }
  if ((iVar6 == 0) &&
     (iVar5 = FUN_18088dec0(*(uint64_t *)(lStack_140 + 0x98),apuStack_138,0x48), iVar5 == 0)) {
    *apuStack_138[0] = &unknown_var_6816_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x48;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    uVar4 = param_2[1];
    apuStack_138[0][3] = *param_2;
    apuStack_138[0][4] = uVar4;
    uVar1 = *(int32_t *)((longlong)param_2 + 0x14);
    uVar2 = *(int32_t *)(param_2 + 3);
    uVar3 = *(int32_t *)((longlong)param_2 + 0x1c);
    *(int32_t *)(apuStack_138[0] + 5) = *(int32_t *)(param_2 + 2);
    *(int32_t *)((longlong)apuStack_138[0] + 0x2c) = uVar1;
    *(int32_t *)(apuStack_138[0] + 6) = uVar2;
    *(int32_t *)((longlong)apuStack_138[0] + 0x34) = uVar3;
    uVar1 = *(int32_t *)((longlong)param_2 + 0x24);
    uVar2 = *(int32_t *)(param_2 + 5);
    uVar3 = *(int32_t *)((longlong)param_2 + 0x2c);
    *(int32_t *)(apuStack_138[0] + 7) = *(int32_t *)(param_2 + 4);
    *(int32_t *)((longlong)apuStack_138[0] + 0x3c) = uVar1;
    *(int32_t *)(apuStack_138[0] + 8) = uVar2;
    *(int32_t *)((longlong)apuStack_138[0] + 0x44) = uVar3;
    func_0x00018088e0d0(*(uint64_t *)(lStack_140 + 0x98));
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
LAB_1808494eb:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849600(uint64_t param_1,uint64_t param_2)
void FUN_180849600(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  uint64_t auStack_128 [2];
  int8_t auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  iVar1 = func_0x00018088c590(param_1,auStack_128);
  if ((((iVar1 != 0) || (iVar1 = FUN_180889f10(auStack_128[0],param_2), iVar1 != 0)) && (iVar1 != 0)
      ) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_5000_ptr);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808496c0(int32_t param_1,longlong param_2,int32_t param_3)
void FUN_1808496c0(int32_t param_1,longlong param_2,int32_t param_3)

{
  longlong lVar1;
  int iVar2;
  int32_t uVar3;
  int8_t auStack_188 [48];
  uint64_t uStack_158;
  uint64_t uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar2 = func_0x00018088c590(0,&uStack_150);
  if (((iVar2 == 0) && (iVar2 = FUN_18088c740(&uStack_158,uStack_150), iVar2 == 0)) &&
     (iVar2 = func_0x00018088c530(param_1,alStack_140), iVar2 == 0)) {
    lStack_148 = *(longlong *)(alStack_140[0] + 8);
  }
  else if (iVar2 != 0) goto LAB_180849763;
  lVar1 = *(longlong *)(lStack_148 + 0xd0);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = param_3;
  }
  *(int32_t *)(lVar1 + 0x48) = uVar3;
  *(longlong *)(lVar1 + 0x40) = param_2;
LAB_180849763:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}





// 函数: void FUN_180849782(void)
void FUN_180849782(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  
  iVar1 = func_0x00018074bda0(&stack0x00000050,0x100);
  iVar2 = FUN_18074b880(&stack0x00000050 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074b800(&stack0x00000050 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xc);
}





// 函数: void FUN_1808497fa(void)
void FUN_1808497fa(void)

{
  ulonglong in_stack_00000150;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



