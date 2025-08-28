#include "TaleWorlds.Native.Split.h"

// 03_rendering_part321.c - 5 个函数

// 函数: void FUN_180438b47(uint64_t param_1,uint64_t param_2,longlong param_3,ulonglong param_4)
void FUN_180438b47(uint64_t param_1,uint64_t param_2,longlong param_3,ulonglong param_4)

{
  int unaff_EBX;
  int iVar1;
  ulonglong in_R10;
  int32_t unaff_R14D;
  float fVar2;
  float fVar3;
  
  iVar1 = (int)*(float *)(param_3 + 4 + (longlong)unaff_EBX * 0x10);
  if (param_4 != 0) {
    fVar3 = 0.0;
    do {
      fVar2 = fVar3;
      if ((((float)(int)*(float *)(param_3 + (longlong)unaff_EBX * 0x10) ==
            *(float *)(param_3 + in_R10 * 0x10)) &&
          ((float)iVar1 == *(float *)(param_3 + 4 + in_R10 * 0x10))) &&
         (fVar2 = *(float *)(param_3 + 8 + in_R10 * 0x10) /
                  *(float *)(param_3 + 0xc + in_R10 * 0x10), fVar2 <= fVar3)) {
        fVar2 = fVar3;
      }
      in_R10 = (ulonglong)((int)in_R10 + 1);
      fVar3 = fVar2;
    } while (in_R10 < param_4);
  }
  FUN_18006b4c0();
  FUN_18006b440(_DAT_180c86920,iVar1);
  FUN_1800ae230();
  if ((*(int *)(_DAT_180c86920 + 0x540) == 4) && (*(int *)(_DAT_180c86920 + 0x1d50) < 0xf00)) {
    FUN_18010e3b0(_DAT_180c86920,unaff_R14D);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438b6c(uint64_t param_1,int param_2,longlong param_3,ulonglong param_4)
void FUN_180438b6c(uint64_t param_1,int param_2,longlong param_3,ulonglong param_4)

{
  int unaff_EBX;
  ulonglong in_R10;
  int32_t unaff_R14D;
  float fVar1;
  float unaff_XMM6_Da;
  
  do {
    fVar1 = unaff_XMM6_Da;
    if ((((float)param_2 == *(float *)(param_3 + in_R10 * 0x10)) &&
        ((float)unaff_EBX == *(float *)(param_3 + 4 + in_R10 * 0x10))) &&
       (fVar1 = *(float *)(param_3 + 8 + in_R10 * 0x10) / *(float *)(param_3 + 0xc + in_R10 * 0x10),
       fVar1 <= unaff_XMM6_Da)) {
      fVar1 = unaff_XMM6_Da;
    }
    in_R10 = (ulonglong)((int)in_R10 + 1);
    unaff_XMM6_Da = fVar1;
  } while (in_R10 < param_4);
  FUN_18006b4c0();
  FUN_18006b440(_DAT_180c86920,unaff_EBX);
  FUN_1800ae230();
  if ((*(int *)(_DAT_180c86920 + 0x540) == 4) && (*(int *)(_DAT_180c86920 + 0x1d50) < 0xf00)) {
    FUN_18010e3b0(_DAT_180c86920,unaff_R14D);
  }
  return;
}





// 函数: void FUN_180438be7(longlong param_1)
void FUN_180438be7(longlong param_1)

{
  int32_t unaff_R14D;
  
  if (*(int *)(param_1 + 0x1d50) < 0xf00) {
    FUN_18010e3b0(param_1,unaff_R14D);
  }
  return;
}





// 函数: void FUN_180438c00(void)
void FUN_180438c00(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180438c50(void)
void FUN_180438c50(void)

{
  int iVar1;
  longlong lVar2;
  uint64_t uVar3;
  int8_t uVar4;
  longlong *plVar5;
  longlong lVar6;
  int32_t uStackX_8;
  int32_t uStackX_c;
  
  FUN_18004a640();
  lVar2 = _DAT_180c86938;
  if (*(longlong *)(_DAT_180c86938 + 0x1d78) == 0) {
    return;
  }
  plVar5 = (longlong *)(_DAT_180c86938 + 0x1e08);
  lVar6 = 9;
  do {
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 0x10))();
      *plVar5 = 0;
    }
    plVar5 = plVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar4 = 0;
  uStackX_8 = 0x7000000;
  uStackX_c = 1;
  if ((*(int *)(_DAT_180c86920 + 0x4d0) - 3U & 0xfffffffd) == 0) {
    uVar4 = 2;
  }
  uVar3 = FUN_1800ab420(lVar2,&uStackX_8);
  *(uint64_t *)(lVar2 + 0x1e08) = uVar3;
  uStackX_8 = 0x7000200;
  uStackX_c = 1;
  uVar3 = FUN_1800ab420(lVar2,&uStackX_8);
  *(uint64_t *)(lVar2 + 0x1e10) = uVar3;
  uStackX_8 = 0x7000007;
  uStackX_c = 1;
  uVar3 = FUN_1800ab420(lVar2,&uStackX_8);
  *(uint64_t *)(lVar2 + 0x1e18) = uVar3;
  uStackX_8 = 0x7000207;
  uStackX_c = 1;
  uVar3 = FUN_1800ab420(lVar2,&uStackX_8);
  *(uint64_t *)(lVar2 + 0x1e20) = uVar3;
  uStackX_8 = 0x7000107;
  uStackX_c = 1;
  uVar3 = FUN_1800ab420(lVar2,&uStackX_8);
  *(uint64_t *)(lVar2 + 0x1e28) = uVar3;
  iVar1 = *(int *)(_DAT_180c86920 + 0x310);
  if (iVar1 == 0) {
    uStackX_c = 1;
    uStackX_8 = 6;
    goto LAB_1800a37f8;
  }
  if (iVar1 == 1) {
    uStackX_8 = 7;
    uStackX_c = 1;
    goto LAB_1800a37f8;
  }
  if (iVar1 == 2) {
LAB_1800a37ee:
    uStackX_c = 2;
  }
  else if (iVar1 == 3) {
    uStackX_c = 4;
  }
  else if (iVar1 == 4) {
    uStackX_c = 8;
  }
  else {
    if (iVar1 != 5) goto LAB_1800a37ee;
    uStackX_c = 0x10;
  }
  uStackX_8._0_3_ = CONCAT12(uVar4,8);
  uStackX_8 = (uint)(uint3)uStackX_8;
LAB_1800a37f8:
  uStackX_8._0_2_ = (ushort)(byte)uStackX_8;
  uStackX_8 = CONCAT13(7,(uint3)uStackX_8);
  uVar3 = FUN_1800ab420(lVar2,&uStackX_8);
  *(uint64_t *)(lVar2 + 0x1e30) = uVar3;
  uStackX_8 = 0x300020a;
  uVar3 = FUN_1800ab420(lVar2,&uStackX_8);
  *(uint64_t *)(lVar2 + 0x1e38) = uVar3;
  uStackX_8 = 0x600020a;
  uVar3 = FUN_1800ab420(lVar2,&uStackX_8);
  *(uint64_t *)(lVar2 + 0x1e40) = uVar3;
  uStackX_8 = 0x300030a;
  uVar3 = FUN_1800ab420(lVar2,&uStackX_8);
  *(uint64_t *)(lVar2 + 0x1e48) = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



