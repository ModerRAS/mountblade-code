#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part066.c - 11 个函数

// 函数: void FUN_18069d280(uint64_t *param_1,int8_t *param_2,int param_3,int param_4,
void FUN_18069d280(uint64_t *param_1,int8_t *param_2,int param_3,int param_4,
                  uint64_t param_5,int param_6,int8_t param_7)

{
  int64_t lVar1;
  int8_t auStack_48 [32];
  int8_t uStack_28;
  int8_t uStack_27;
  int8_t uStack_26;
  int8_t uStack_25;
  int8_t uStack_1d;
  uint64_t uStack_1c;
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_48;
  uStack_28 = *param_2;
  lVar1 = (int64_t)param_3;
  uStack_27 = param_2[lVar1];
  uStack_26 = param_2[lVar1 * 2];
  uStack_25 = param_2[lVar1 * 3];
  uStack_1c = *param_1;
  uStack_1d = param_7;
  (**(code **)((int64_t)param_4 * 8 + 0x180c0c2a0))
            (param_5,(int64_t)param_6,&uStack_1c,&uStack_28);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_48);
}





// 函数: void FUN_18069d310(int64_t param_1)
void FUN_18069d310(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  ushort *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  
  lVar7 = 0;
  puVar6 = (ushort *)(param_1 + 0xc10);
  iVar9 = 0x10;
  do {
    iVar5 = 0;
    lVar3 = lVar7 + 0x1c;
    lVar8 = 2;
    lVar4 = lVar7;
    do {
      lVar1 = *(int64_t *)(param_1 + 0xf00);
      iVar2 = (int)*(short *)(lVar1 + -0x10 + lVar3) + (int)*(short *)(lVar1 + -0xc + lVar3) +
              (int)*(short *)(lVar1 + 4 + lVar3) + (int)*(short *)(lVar1 + lVar3);
      iVar2 = (iVar2 >> 0x1f) * 8 + 4 + iVar2;
      *puVar6 = (ushort)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) & *(ushort *)(param_1 + 0xdd8);
      lVar1 = *(int64_t *)(param_1 + 0xf00);
      iVar2 = (int)*(short *)(lVar1 + -10 + lVar3) + (int)*(short *)(lVar1 + 0x1e + lVar4) +
              (int)*(short *)(lVar1 + 0xe + lVar4) + (int)*(short *)(lVar1 + 6 + lVar3);
      iVar2 = (iVar2 >> 0x1f) * 8 + 4 + iVar2;
      puVar6[1] = (ushort)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) & *(ushort *)(param_1 + 0xdd8);
      if (*(char *)(*(int64_t *)(param_1 + 0xf00) + 10) != '\0') {
        func_0x00018069db90(param_1 + 0x890 + (int64_t)(iVar9 + iVar5) * 0x38,param_1);
      }
      iVar5 = iVar5 + 1;
      *(int32_t *)(puVar6 + 0x70) = *(int32_t *)puVar6;
      lVar3 = lVar3 + 8;
      puVar6 = puVar6 + 0x1c;
      lVar4 = lVar4 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar9 = iVar9 + 2;
    lVar7 = lVar7 + 0x20;
  } while (lVar7 < 0x40);
  return;
}





// 函数: void FUN_18069d460(int64_t param_1)
void FUN_18069d460(int64_t param_1)

{
  ushort uVar1;
  int32_t uVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int *piVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  
  lVar4 = *(int64_t *)(param_1 + 0xea8);
  uVar5 = *(uint64_t *)(param_1 + 0xe18);
  if (*(byte *)(*(int64_t *)(param_1 + 0xf00) + 8) < 3) {
    uVar2 = *(int32_t *)(param_1 + 0xe80);
    *(int32_t *)(param_1 + 0x890) = *(int32_t *)(*(int64_t *)(param_1 + 0xf00) + 0xc);
    *(int32_t *)(param_1 + 0x900) = *(int32_t *)(*(int64_t *)(param_1 + 0xf00) + 0x14);
    *(int32_t *)(param_1 + 0xa50) = *(int32_t *)(*(int64_t *)(param_1 + 0xf00) + 0x2c);
    *(int32_t *)(param_1 + 0xac0) = *(int32_t *)(*(int64_t *)(param_1 + 0xf00) + 0x34);
    if (*(char *)(*(int64_t *)(param_1 + 0xf00) + 10) != '\0') {
      func_0x00018069db00((int32_t *)(param_1 + 0x890),param_1);
      func_0x00018069db00(param_1 + 0x900);
      func_0x00018069db00(param_1 + 0xa50);
      func_0x00018069db00(param_1 + 0xac0);
    }
    FUN_18069d940(param_1,param_1 + 0x860,*(int *)(param_1 + 0x880) + lVar4,uVar2,uVar5,uVar2);
    FUN_18069d940(param_1,param_1 + 0x8d0,*(int *)(param_1 + 0x8f0) + lVar4,uVar2,uVar5,uVar2);
    FUN_18069d940(param_1,param_1 + 0xa20,*(int *)(param_1 + 0xa40) + lVar4,uVar2,uVar5,uVar2);
    FUN_18069d940(param_1,param_1 + 0xa90,*(int *)(param_1 + 0xab0) + lVar4,uVar2,uVar5,uVar2);
  }
  else {
    lVar7 = 0x10;
    piVar8 = (int *)(param_1 + 0x880);
    lVar6 = param_1 + 0x890;
    lVar12 = 8;
    do {
      uVar2 = *(int32_t *)(param_1 + 0xe80);
      piVar8[4] = *(int *)(*(int64_t *)(param_1 + 0xf00) + -4 + lVar7);
      piVar8[0x12] = *(int *)(lVar7 + *(int64_t *)(param_1 + 0xf00));
      if (*(char *)(*(int64_t *)(param_1 + 0xf00) + 10) != '\0') {
        func_0x00018069db00(lVar6,param_1);
        func_0x00018069db00(lVar6 + 0x38);
      }
      if (piVar8[4] == piVar8[0x12]) {
        FUN_18069d8a0(param_1,piVar8 + -8,*piVar8 + lVar4,uVar2,uVar5,uVar2);
      }
      else {
        FUN_18069d9e0(piVar8 + -8,*piVar8 + lVar4,uVar2,uVar5,uVar2,*(uint64_t *)(param_1 + 0xf98)
                     );
        FUN_18069d9e0(piVar8 + 6,piVar8[0xe] + lVar4,uVar2,uVar5,uVar2,
                      *(uint64_t *)(param_1 + 0xf98));
      }
      lVar6 = lVar6 + 0x70;
      lVar7 = lVar7 + 8;
      piVar8 = piVar8 + 0x1c;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  lVar4 = *(int64_t *)(param_1 + 0xeb0);
  piVar8 = (int *)(param_1 + 0xc10);
  lVar6 = *(int64_t *)(param_1 + 0xe20);
  lVar12 = 2;
  lVar7 = 2;
  do {
    iVar3 = *(int *)(param_1 + 0xe94);
    if (*piVar8 == piVar8[0xe]) {
      uVar9 = (uint)(short)*piVar8;
      uVar1 = *(ushort *)((int64_t)piVar8 + 2);
      lVar11 = piVar8[-4] + lVar4;
      lVar10 = ((int64_t)(short)uVar1 >> 3) +
               (int64_t)(((int)uVar9 >> 3) * iVar3) + (int64_t)piVar8[-4] + lVar6;
      if (((uVar9 & 7) == 0) && (((int64_t)(short)uVar1 & 7U) == 0)) {
        func_0x00018001cd0f(lVar10,iVar3,lVar11,iVar3);
      }
      else {
        (**(code **)(param_1 + 4000))(lVar10,iVar3,uVar1 & 7,uVar9 & 7,lVar11,iVar3);
      }
    }
    else {
      FUN_18069d9e0(piVar8 + -0xc,piVar8[-4] + lVar4,iVar3,lVar6,iVar3,
                    *(uint64_t *)(param_1 + 0xf98));
      FUN_18069d9e0(piVar8 + 2,piVar8[10] + lVar4,iVar3,lVar6,iVar3,*(uint64_t *)(param_1 + 0xf98)
                   );
    }
    piVar8 = piVar8 + 0x1c;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar4 = *(int64_t *)(param_1 + 0xeb8);
  piVar8 = (int *)(param_1 + 0xcf0);
  lVar6 = *(int64_t *)(param_1 + 0xe28);
  do {
    iVar3 = *(int *)(param_1 + 0xe94);
    if (*piVar8 == piVar8[0xe]) {
      uVar9 = (uint)(short)*piVar8;
      uVar1 = *(ushort *)((int64_t)piVar8 + 2);
      lVar7 = piVar8[-4] + lVar4;
      lVar11 = ((int64_t)(short)uVar1 >> 3) +
               (int64_t)(((int)uVar9 >> 3) * iVar3) + (int64_t)piVar8[-4] + lVar6;
      if (((uVar9 & 7) == 0) && (((int64_t)(short)uVar1 & 7U) == 0)) {
        func_0x00018001cd0f(lVar11,iVar3,lVar7,iVar3);
      }
      else {
        (**(code **)(param_1 + 4000))(lVar11,iVar3,uVar1 & 7,uVar9 & 7,lVar7,iVar3);
      }
    }
    else {
      FUN_18069d9e0(piVar8 + -0xc,piVar8[-4] + lVar4,iVar3,lVar6,iVar3,
                    *(uint64_t *)(param_1 + 0xf98));
      FUN_18069d9e0(piVar8 + 2,piVar8[10] + lVar4,iVar3,lVar6,iVar3,*(uint64_t *)(param_1 + 0xf98)
                   );
    }
    piVar8 = piVar8 + 0x1c;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}





// 函数: void FUN_18069d8a0(int64_t param_1,int64_t param_2,uint64_t *param_3,int param_4,
void FUN_18069d8a0(int64_t param_1,int64_t param_2,uint64_t *param_3,int param_4,
                  int64_t param_5,int param_6)

{
  uint64_t uVar1;
  uint64_t uVar2;
  ushort uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint uVar7;
  
  uVar7 = (uint)*(short *)(param_2 + 0x30);
  uVar3 = *(ushort *)(param_2 + 0x32);
  puVar6 = (uint64_t *)
           ((int64_t)*(int *)(param_2 + 0x20) +
           ((int64_t)(short)uVar3 >> 3) + param_5 + (int64_t)(((int)uVar7 >> 3) * param_6));
  if (((uVar7 & 7) == 0) && (((int64_t)(short)uVar3 & 7U) == 0)) {
    lVar4 = (int64_t)param_6;
    uVar1 = *(uint64_t *)((int64_t)puVar6 + lVar4);
    uVar2 = *(uint64_t *)((int64_t)puVar6 + lVar4 * 2);
    lVar5 = (int64_t)param_4;
    *param_3 = *puVar6;
    *(uint64_t *)((int64_t)param_3 + lVar5) = uVar1;
    *(uint64_t *)((int64_t)param_3 + lVar5 * 2) = uVar2;
    *(uint64_t *)((int64_t)param_3 + lVar5 * 3) = *(uint64_t *)((int64_t)puVar6 + lVar4 * 3);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00018069d932. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 4000))(puVar6,param_6,uVar3 & 7,uVar7 & 7);
  return;
}





// 函数: void FUN_18069d940(int64_t param_1,int64_t param_2,uint64_t *param_3,int param_4,
void FUN_18069d940(int64_t param_1,int64_t param_2,uint64_t *param_3,int param_4,
                  int64_t param_5,int param_6)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  ushort uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint uVar8;
  
  uVar8 = (uint)*(short *)(param_2 + 0x30);
  uVar4 = *(ushort *)(param_2 + 0x32);
  puVar7 = (uint64_t *)
           ((int64_t)*(int *)(param_2 + 0x20) +
           ((int64_t)(short)uVar4 >> 3) + param_5 + (int64_t)(((int)uVar8 >> 3) * param_6));
  if (((uVar8 & 7) == 0) && (((int64_t)(short)uVar4 & 7U) == 0)) {
    lVar5 = (int64_t)param_6;
    uVar2 = *(uint64_t *)((int64_t)puVar7 + lVar5);
    uVar3 = *(uint64_t *)((int64_t)puVar7 + lVar5 * 2);
    lVar6 = (int64_t)param_4;
    puVar1 = (uint64_t *)((int64_t)puVar7 + lVar5 * 3);
    *param_3 = *puVar7;
    *(uint64_t *)((int64_t)param_3 + lVar6) = uVar2;
    *(uint64_t *)((int64_t)param_3 + lVar6 * 2) = uVar3;
    param_3 = (uint64_t *)((int64_t)param_3 + lVar6 * 3);
    uVar2 = *(uint64_t *)((int64_t)puVar1 + lVar5);
    uVar3 = *(uint64_t *)((int64_t)puVar1 + lVar5 * 2);
    *param_3 = *puVar1;
    *(uint64_t *)((int64_t)param_3 + lVar6) = uVar2;
    *(uint64_t *)((int64_t)param_3 + lVar6 * 2) = uVar3;
    uVar2 = *(uint64_t *)((int64_t)puVar1 + lVar5 * 4);
    *(uint64_t *)((int64_t)param_3 + lVar6 * 3) = *(uint64_t *)((int64_t)puVar1 + lVar5 * 3);
    *(uint64_t *)((int64_t)param_3 + lVar6 * 4) = uVar2;
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00018069d9d2. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0xfa8))(puVar7,param_6,uVar4 & 7,uVar8 & 7);
  return;
}





// 函数: void FUN_18069d9e0(int64_t param_1,int8_t *param_2,int param_3,int64_t param_4,int param_5,
void FUN_18069d9e0(int64_t param_1,int8_t *param_2,int param_3,int64_t param_4,int param_5,
                  code *param_6)

{
  ushort uVar1;
  int64_t lVar2;
  int8_t *puVar3;
  int8_t *puVar4;
  uint uVar5;
  
  uVar5 = (uint)*(short *)(param_1 + 0x30);
  uVar1 = *(ushort *)(param_1 + 0x32);
  puVar3 = (int8_t *)
           ((int64_t)*(int *)(param_1 + 0x20) +
           ((int64_t)(short)uVar1 >> 3) + param_4 + (int64_t)(((int)uVar5 >> 3) * param_5));
  if (((uVar5 & 7) == 0) && (((int64_t)(short)uVar1 & 7U) == 0)) {
    lVar2 = (int64_t)param_5;
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    puVar4 = puVar3 + lVar2;
    param_2[3] = puVar3[3];
    param_2 = param_2 + param_3;
    *param_2 = *puVar4;
    param_2[1] = puVar4[1];
    param_2[2] = puVar4[2];
    puVar3 = puVar4 + lVar2;
    param_2[3] = puVar4[3];
    param_2 = param_2 + param_3;
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = puVar3[3];
    param_2 = param_2 + param_3;
    puVar3 = puVar3 + lVar2;
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = puVar3[3];
    return;
  }
  (*param_6)(puVar3,param_5,uVar1 & 7,uVar5 & 7,param_2,param_3);
  return;
}





// 函数: void FUN_18069dc30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18069dc30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6)

{
  int64_t lVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  ushort uVar6;
  int64_t lVar7;
  uint uVar8;
  int32_t uStackX_8;
  
  iVar3 = *(int *)(param_1 + 0xdf0);
  uVar5 = *(uint *)(*(int64_t *)(param_1 + 0xf00) + 4);
  uStackX_8._0_2_ = (short)uVar5;
  uStackX_8._2_2_ = (ushort)(uVar5 >> 0x10);
  uVar2 = uStackX_8._2_2_;
  sVar4 = (short)uStackX_8;
  if (*(char *)(*(int64_t *)(param_1 + 0xf00) + 10) == '\0') goto LAB_18069dd1e;
  if ((int)(short)uStackX_8._2_2_ < *(int *)(param_1 + 0xf84) + -0x98) {
    uVar2 = *(short *)(param_1 + 0xf84) - 0x80;
LAB_18069dcc6:
    uStackX_8 = CONCAT22(uVar2,(short)uStackX_8);
    uVar5 = uStackX_8;
  }
  else if (*(int *)(param_1 + 0xf88) + 0x90 < (int)(short)uStackX_8._2_2_) {
    uVar2 = *(short *)(param_1 + 0xf88) + 0x80;
    goto LAB_18069dcc6;
  }
  uStackX_8 = uVar5;
  if ((int)(short)uStackX_8 < *(int *)(param_1 + 0xf8c) + -0x98) {
    sVar4 = *(short *)(param_1 + 0xf8c) + -0x80;
    uStackX_8 = CONCAT22(uStackX_8._2_2_,sVar4);
    uVar5 = uStackX_8;
  }
  else {
    sVar4 = (short)uStackX_8;
    uVar5 = uStackX_8;
    if (*(int *)(param_1 + 0xf90) + 0x90 < (int)(short)uStackX_8) {
      sVar4 = *(short *)(param_1 + 0xf90) + 0x80;
      uStackX_8 = CONCAT22(uStackX_8._2_2_,sVar4);
      uVar5 = uStackX_8;
    }
  }
LAB_18069dd1e:
  uStackX_8 = uVar5;
  lVar1 = ((int64_t)(short)uVar2 >> 3) +
          (int64_t)(((int)sVar4 >> 3) * iVar3) + *(int64_t *)(param_1 + 0xe18);
  if ((uStackX_8 & 0x70007) == 0) {
    func_0x00018001cb80(lVar1,iVar3,param_2,param_5);
  }
  else {
    (**(code **)(param_1 + 0xfb0))(lVar1,iVar3,uVar2 & 7,(int)sVar4 & 7,param_2,param_5);
  }
  iVar3 = iVar3 >> 1;
  uVar6 = (short)(sVar4 + (sVar4 >> 0xf | 1U)) / 2 & *(ushort *)(param_1 + 0xdd8);
  uVar2 = (short)(uVar2 + ((short)uVar2 >> 0xf | 1U)) / 2 & *(ushort *)(param_1 + 0xdd8);
  uStackX_8 = CONCAT22(uVar2,uVar6);
  lVar1 = (int64_t)(((int)(short)uVar6 >> 3) * iVar3 + ((int)(short)uVar2 >> 3));
  lVar7 = *(int64_t *)(param_1 + 0xe20) + lVar1;
  lVar1 = *(int64_t *)(param_1 + 0xe28) + lVar1;
  if ((uStackX_8 & 0x70007) == 0) {
    func_0x00018001cc90(lVar7,iVar3,param_3,param_6);
    func_0x00018001cc90(lVar1,iVar3,param_4,param_6);
  }
  else {
    uVar5 = (int)(short)uVar6 & 7;
    uVar8 = (int)(short)uVar2 & 7;
    (**(code **)(param_1 + 0xfa8))(lVar7,iVar3,uVar8,uVar5,param_3,param_6);
    (**(code **)(param_1 + 0xfa8))(lVar1,iVar3,uVar8,uVar5,param_4,param_6);
  }
  return;
}





// 函数: void FUN_18069de90(int64_t param_1)
void FUN_18069de90(int64_t param_1)

{
  ushort uVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int *piVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int32_t uVar13;
  uint64_t uVar12;
  uint64_t in_stack_ffffffffffffffc8;
  int32_t uVar14;
  uint64_t in_stack_ffffffffffffffd0;
  int32_t uVar15;
  
  if (**(char **)(param_1 + 0xf00) != '\t') {
    FUN_18069dc30(param_1,*(uint64_t *)(param_1 + 0xea8),*(uint64_t *)(param_1 + 0xeb0),
                  *(uint64_t *)(param_1 + 0xeb8),*(int32_t *)(param_1 + 0xe80),
                  *(int32_t *)(param_1 + 0xe94));
    return;
  }
  FUN_18069d310();
  uVar15 = (int32_t)((uint64_t)in_stack_ffffffffffffffd0 >> 0x20);
  lVar3 = *(int64_t *)(param_1 + 0xea8);
  uVar4 = *(uint64_t *)(param_1 + 0xe18);
  if (*(byte *)(*(int64_t *)(param_1 + 0xf00) + 8) < 3) {
    uVar13 = *(int32_t *)(param_1 + 0xe80);
    *(int32_t *)(param_1 + 0x890) = *(int32_t *)(*(int64_t *)(param_1 + 0xf00) + 0xc);
    *(int32_t *)(param_1 + 0x900) = *(int32_t *)(*(int64_t *)(param_1 + 0xf00) + 0x14);
    *(int32_t *)(param_1 + 0xa50) = *(int32_t *)(*(int64_t *)(param_1 + 0xf00) + 0x2c);
    *(int32_t *)(param_1 + 0xac0) = *(int32_t *)(*(int64_t *)(param_1 + 0xf00) + 0x34);
    if (*(char *)(*(int64_t *)(param_1 + 0xf00) + 10) != '\0') {
      func_0x00018069db00((int32_t *)(param_1 + 0x890),param_1);
      func_0x00018069db00(param_1 + 0x900);
      func_0x00018069db00(param_1 + 0xa50);
      func_0x00018069db00(param_1 + 0xac0);
    }
    FUN_18069d940(param_1,param_1 + 0x860,*(int *)(param_1 + 0x880) + lVar3,uVar13,uVar4,
                  CONCAT44(uVar15,uVar13));
    FUN_18069d940(param_1,param_1 + 0x8d0,*(int *)(param_1 + 0x8f0) + lVar3,uVar13,uVar4,uVar13);
    FUN_18069d940(param_1,param_1 + 0xa20,*(int *)(param_1 + 0xa40) + lVar3,uVar13,uVar4,uVar13);
    FUN_18069d940(param_1,param_1 + 0xa90,*(int *)(param_1 + 0xab0) + lVar3,uVar13,uVar4,uVar13);
  }
  else {
    lVar6 = 0x10;
    piVar7 = (int *)(param_1 + 0x880);
    lVar5 = param_1 + 0x890;
    lVar11 = 8;
    do {
      uVar13 = (int32_t)((uint64_t)in_stack_ffffffffffffffc8 >> 0x20);
      uVar14 = (int32_t)((uint64_t)in_stack_ffffffffffffffd0 >> 0x20);
      uVar15 = *(int32_t *)(param_1 + 0xe80);
      piVar7[4] = *(int *)(*(int64_t *)(param_1 + 0xf00) + -4 + lVar6);
      piVar7[0x12] = *(int *)(lVar6 + *(int64_t *)(param_1 + 0xf00));
      if (*(char *)(*(int64_t *)(param_1 + 0xf00) + 10) != '\0') {
        func_0x00018069db00(lVar5,param_1);
        func_0x00018069db00(lVar5 + 0x38);
      }
      if (piVar7[4] == piVar7[0x12]) {
        in_stack_ffffffffffffffd0 = CONCAT44(uVar14,uVar15);
        in_stack_ffffffffffffffc8 = uVar4;
        FUN_18069d8a0(param_1,piVar7 + -8,*piVar7 + lVar3,uVar15,uVar4,in_stack_ffffffffffffffd0);
      }
      else {
        uVar12 = CONCAT44(uVar13,uVar15);
        FUN_18069d9e0(piVar7 + -8,*piVar7 + lVar3,uVar15,uVar4,uVar12,
                      *(uint64_t *)(param_1 + 0xf98));
        in_stack_ffffffffffffffd0 = *(uint64_t *)(param_1 + 0xf98);
        in_stack_ffffffffffffffc8 = CONCAT44((int)((uint64_t)uVar12 >> 0x20),uVar15);
        FUN_18069d9e0(piVar7 + 6,piVar7[0xe] + lVar3,uVar15,uVar4,in_stack_ffffffffffffffc8,
                      in_stack_ffffffffffffffd0);
      }
      lVar5 = lVar5 + 0x70;
      lVar6 = lVar6 + 8;
      piVar7 = piVar7 + 0x1c;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  lVar3 = *(int64_t *)(param_1 + 0xeb0);
  piVar7 = (int *)(param_1 + 0xc10);
  lVar5 = *(int64_t *)(param_1 + 0xe20);
  lVar11 = 2;
  lVar6 = 2;
  do {
    iVar2 = *(int *)(param_1 + 0xe94);
    if (*piVar7 == piVar7[0xe]) {
      uVar8 = (uint)(short)*piVar7;
      uVar1 = *(ushort *)((int64_t)piVar7 + 2);
      lVar10 = piVar7[-4] + lVar3;
      lVar9 = ((int64_t)(short)uVar1 >> 3) +
              (int64_t)(((int)uVar8 >> 3) * iVar2) + (int64_t)piVar7[-4] + lVar5;
      if (((uVar8 & 7) == 0) && (((int64_t)(short)uVar1 & 7U) == 0)) {
        func_0x00018001cd0f(lVar9,iVar2,lVar10,iVar2);
      }
      else {
        (**(code **)(param_1 + 4000))(lVar9,iVar2,uVar1 & 7,uVar8 & 7,lVar10,iVar2);
      }
    }
    else {
      FUN_18069d9e0(piVar7 + -0xc,piVar7[-4] + lVar3,iVar2,lVar5,iVar2,
                    *(uint64_t *)(param_1 + 0xf98));
      FUN_18069d9e0(piVar7 + 2,piVar7[10] + lVar3,iVar2,lVar5,iVar2,*(uint64_t *)(param_1 + 0xf98)
                   );
    }
    piVar7 = piVar7 + 0x1c;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar3 = *(int64_t *)(param_1 + 0xeb8);
  piVar7 = (int *)(param_1 + 0xcf0);
  lVar5 = *(int64_t *)(param_1 + 0xe28);
  do {
    iVar2 = *(int *)(param_1 + 0xe94);
    if (*piVar7 == piVar7[0xe]) {
      uVar8 = (uint)(short)*piVar7;
      uVar1 = *(ushort *)((int64_t)piVar7 + 2);
      lVar6 = piVar7[-4] + lVar3;
      lVar10 = ((int64_t)(short)uVar1 >> 3) +
               (int64_t)(((int)uVar8 >> 3) * iVar2) + (int64_t)piVar7[-4] + lVar5;
      if (((uVar8 & 7) == 0) && (((int64_t)(short)uVar1 & 7U) == 0)) {
        func_0x00018001cd0f(lVar10,iVar2,lVar6,iVar2);
      }
      else {
        (**(code **)(param_1 + 4000))(lVar10,iVar2,uVar1 & 7,uVar8 & 7,lVar6,iVar2);
      }
    }
    else {
      FUN_18069d9e0(piVar7 + -0xc,piVar7[-4] + lVar3,iVar2,lVar5,iVar2,
                    *(uint64_t *)(param_1 + 0xf98));
      FUN_18069d9e0(piVar7 + 2,piVar7[10] + lVar3,iVar2,lVar5,iVar2,*(uint64_t *)(param_1 + 0xf98)
                   );
    }
    piVar7 = piVar7 + 0x1c;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}





// 函数: void FUN_18069def0(int *param_1)
void FUN_18069def0(int *param_1)

{
                    // WARNING: Subroutine does not return
  memset((*(int64_t *)(param_1 + 0xe) - (int64_t)param_1[4]) + -1,0x7f,(int64_t)(*param_1 + 5));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18069dfe0(int param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5,
void FUN_18069dfe0(int param_1,int param_2,int param_3,uint64_t param_4,uint64_t param_5,
                  uint64_t param_6,int32_t param_7,int32_t param_8,uint64_t param_9,
                  uint64_t param_10,uint64_t param_11,int32_t param_12,int32_t param_13)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int aiStackX_10 [2];
  uint uStackX_18;
  uint64_t uStackX_20;
  int32_t uVar10;
  int *piVar9;
  uint uStack_68;
  uint uStack_60;
  
  iVar7 = param_1 >> 1;
  uStackX_20 = param_4;
  if (param_1 == 0x10) {
    iVar3 = (*ui_system_config_config)();
    uVar8 = iVar3 + 0x80U >> 8;
    iVar3 = (*ui_system_config_config)(param_4,param_7,&unknown_var_16_ptr,0,aiStackX_10);
    uStackX_18 = iVar3 + 0x80U >> 8;
    (*ui_system_config_config)(param_4,param_7,param_9,param_12,aiStackX_10);
    uStack_68 = aiStackX_10[0] + 0x80U >> 8;
    FUN_180690580(param_5,param_8,param_10,param_13,aiStackX_10);
    uStack_60 = aiStackX_10[0] + 0x20U >> 6;
    piVar9 = aiStackX_10;
    FUN_180690580(param_6,param_8,param_11,param_13,piVar9);
    uVar10 = (int32_t)((uint64_t)piVar9 >> 0x20);
    uVar5 = aiStackX_10[0] + 0x20U >> 6;
  }
  else {
    iVar3 = FUN_180690580(param_9,param_12,&unknown_var_16_ptr,0,aiStackX_10);
    uVar8 = iVar3 + 0x20U >> 6;
    iVar3 = FUN_180690580(param_4,param_7,&unknown_var_16_ptr,0,aiStackX_10);
    uStackX_18 = iVar3 + 0x20U >> 6;
    FUN_180690580(param_4,param_7,param_9,param_12,aiStackX_10);
    uStack_68 = aiStackX_10[0] + 0x20U >> 6;
    func_0x000180690120(param_5,param_8,param_10,param_13,aiStackX_10);
    uStack_60 = aiStackX_10[0] + 8U >> 4;
    piVar9 = aiStackX_10;
    func_0x000180690120(param_6,param_8,param_11,param_13,piVar9);
    uVar10 = (int32_t)((uint64_t)piVar9 >> 0x20);
    uVar5 = aiStackX_10[0] + 8U >> 4;
  }
  uVar4 = 0;
  bVar1 = uVar8 <= uStackX_18 * 5;
  uVar6 = param_2 - param_3 >> 4;
  while (uVar8 = uVar8 >> 1, uVar8 != 0) {
    uVar6 = uVar6 + 1;
  }
  for (iVar3 = param_3 >> 2; iVar3 != 0; iVar3 = iVar3 >> 2) {
    uVar6 = uVar6 + 1;
  }
  uVar8 = uVar6 * uVar6;
  if ((((uStack_68 < uVar8) && (uStack_60 * 4 < uVar8)) && (uVar5 * 4 < uVar8)) && (bVar1)) {
    iVar7 = 1;
    uVar8 = uStack_68;
    while (uVar8 = uVar8 >> 1, uVar8 != 0) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = iVar7 >> 1;
    if (-1 < iVar7) {
      bVar2 = (byte)iVar7 & 0x1f;
      uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
      uVar4 = 0;
      do {
        uVar4 = uVar4 | uVar8;
        if (uStack_68 < uVar4 * uVar4) {
          uVar4 = uVar4 - uVar8;
        }
        uVar8 = uVar8 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    iVar7 = (int)(((uVar4 + ((uVar4 + 1) * uVar4 + 1 <= uStack_68)) * 0x10) / uVar6) >>
            ((byte)(param_2 - param_3 >> 5) & 0x1f);
    if (iVar7 != 0) {
      if (param_1 == 0x10) {
        func_0x00018002c0d0();
        func_0x00018002c199(param_5,param_8,param_10,param_13,iVar7);
        func_0x00018002c199(param_6,param_8,param_11,param_13,iVar7);
      }
      else {
        func_0x00018002c199(uStackX_20,param_7,param_9,param_12,CONCAT44(uVar10,iVar7));
        FUN_18069e620(param_5,param_8,param_10,param_13,iVar7);
        FUN_18069e620(param_6,param_8,param_11,param_13,iVar7);
      }
    }
  }
  else if (param_1 == 0x10) {
    func_0x00018001cb80();
    func_0x00018001cc90(param_5,param_8,param_10,param_13);
    func_0x00018001cc90(param_6,param_8,param_11,param_13);
  }
  else {
    func_0x00018001cc90(uStackX_20,param_7,param_9,param_12);
    if (0 < iVar7) {
                    // WARNING: Subroutine does not return
      memcpy(param_10,param_5,(int64_t)iVar7);
    }
    if (0 < iVar7) {
                    // WARNING: Subroutine does not return
      memcpy(param_11,param_6,(int64_t)iVar7);
    }
  }
  return;
}



int FUN_18069e4f0(byte *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint *puVar6;
  uint uVar7;
  
  if (param_1[9] != 0) {
    param_2[3] = 1;
    param_2[2] = 1;
    param_2[1] = 1;
    *param_2 = 1;
    return param_2[3] + param_2[2] + param_2[1] + *param_2;
  }
  if (*param_1 != 9) {
    if (((*param_1 < 5) ||
        (uVar7 = (int)*(short *)(param_1 + 4) >> 0x1f,
        2 < (int)(((int)*(short *)(param_1 + 4) ^ uVar7) - uVar7))) ||
       (uVar7 = (int)*(short *)(param_1 + 6) >> 0x1f,
       2 < (int)(((int)*(short *)(param_1 + 6) ^ uVar7) - uVar7))) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    param_2[3] = uVar7;
    param_2[2] = uVar7;
    param_2[1] = uVar7;
    *param_2 = uVar7;
    return uVar7 * 4;
  }
  lVar4 = 0x180be0010 - (int64_t)param_2;
  lVar5 = 4;
  puVar6 = param_2;
  do {
    uVar7 = 1;
    *puVar6 = 1;
    iVar3 = 0;
    puVar1 = param_2;
    do {
      if (*puVar1 == 0) break;
      if ((*(short *)(param_1 + (int64_t)*(int *)(lVar4 + (int64_t)puVar1) * 4 + 0xc) < 3) &&
         (*(short *)(param_1 + (int64_t)*(int *)(lVar4 + (int64_t)puVar1) * 4 + 0xe) < 3)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      uVar7 = uVar7 & uVar2;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      *puVar6 = uVar7;
    } while (iVar3 < 4);
    puVar6 = puVar6 + 1;
    lVar4 = lVar4 + 0x10;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return param_2[3] + param_2[2] + param_2[1] + *param_2;
    }
  } while( true );
}



int FUN_18069e530(uint64_t param_1,uint *param_2,uint64_t param_3,int64_t param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  int *in_R11;
  
  lVar4 = 0x180be0010 - (int64_t)param_2;
  lVar5 = 4;
  do {
    uVar6 = 1;
    *param_2 = 1;
    iVar3 = 0;
    piVar1 = in_R11;
    do {
      if (*piVar1 == 0) break;
      if ((*(short *)(param_4 + 0xc + (int64_t)*(int *)(lVar4 + (int64_t)piVar1) * 4) < 3) &&
         (*(short *)(param_4 + 0xe + (int64_t)*(int *)(lVar4 + (int64_t)piVar1) * 4) < 3)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      uVar6 = uVar6 & uVar2;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
      *param_2 = uVar6;
    } while (iVar3 < 4);
    param_2 = param_2 + 1;
    lVar4 = lVar4 + 0x10;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return in_R11[3] + in_R11[2] + in_R11[1] + *in_R11;
    }
  } while( true );
}



int FUN_18069e5d2(int64_t param_1)

{
  byte in_AL;
  uint uVar1;
  int iVar2;
  int *in_R11;
  
  if (((in_AL < 5) ||
      (uVar1 = (int)*(short *)(param_1 + 4) >> 0x1f,
      2 < (int)(((int)*(short *)(param_1 + 4) ^ uVar1) - uVar1))) ||
     (uVar1 = (int)*(short *)(param_1 + 6) >> 0x1f,
     2 < (int)(((int)*(short *)(param_1 + 6) ^ uVar1) - uVar1))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  in_R11[3] = iVar2;
  in_R11[2] = iVar2;
  in_R11[1] = iVar2;
  *in_R11 = iVar2;
  return iVar2 * 4;
}





// 函数: void FUN_18069e620(byte *param_1,int param_2,byte *param_3,int param_4,int param_5)
void FUN_18069e620(byte *param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int64_t lVar2;
  int iVar3;
  
  iVar3 = 0x10 - param_5;
  lVar2 = 4;
  do {
    *param_3 = (byte)((int)((uint)*param_3 * iVar3 + 8 + (uint)*param_1 * param_5) >> 4);
    param_3[1] = (byte)((int)((uint)param_1[1] * param_5 + (uint)param_3[1] * iVar3 + 8) >> 4);
    param_3[2] = (byte)((int)((uint)param_1[2] * param_5 + (uint)param_3[2] * iVar3 + 8) >> 4);
    pbVar1 = param_1 + 3;
    param_1 = param_1 + param_2;
    param_3[3] = (byte)((int)((uint)*pbVar1 * param_5 + 8 + (uint)param_3[3] * iVar3) >> 4);
    param_3 = param_3 + param_4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



