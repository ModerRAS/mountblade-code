#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part196.c - 3 个函数

// 函数: void FUN_180780c63(longlong param_1)
void FUN_180780c63(longlong param_1)

{
  longlong unaff_RBX;
  int32_t unaff_ESI;
  code *unaff_R13;
  int32_t uStack0000000000000028;
  int32_t uStack0000000000000030;
  int32_t in_stack_00000040;
  ulonglong in_stack_00001050;
  
  uStack0000000000000030 = 1;
  uStack0000000000000028 = in_stack_00000040;
  *(int32_t *)(unaff_RBX + 0x23cc) = unaff_ESI;
  (*unaff_R13)(param_1 + 0x220);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00001050 ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_180780cf0(longlong *param_1)

{
  FUN_1807ed610(*param_1 + 0x218);
  return 0;
}



uint64_t FUN_180780d10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1 + 0x218;
  iVar2 = FUN_1807ed550(lVar1,*(int32_t *)(*(longlong *)(*param_1 + 0xa8) + 0x6d8));
  if (iVar2 != 0) {
    return 0x26;
  }
  FUN_1807ebc30(lVar1);
  return 0;
}



uint64_t
FUN_180780d60(longlong *param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x81c) == 0) {
    uVar3 = 0;
    if (0 < param_5) {
      uVar4 = uVar3;
      do {
        while (uVar3 < (uint)(param_4 * param_5)) {
          uVar2 = (ulonglong)uVar3;
          uVar3 = uVar3 + param_5;
          *(float *)(param_3 + uVar2 * 4) =
               *(float *)(param_2 + uVar2 * 4) * *(float *)(lVar1 + 0x854);
        }
        uVar3 = uVar4 + 1;
        uVar4 = uVar3;
      } while ((int)uVar3 < param_5);
      return 0;
    }
  }
  else {
    FUN_1807ebcc0(lVar1 + 0x218,param_2,param_3,param_5,param_4,(float)*(int *)(lVar1 + 0x818),
                  *(int32_t *)(lVar1 + 0x854));
  }
  return 0;
}



int8_t
FUN_180780eb0(uint64_t param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 != 1.0) {
    fVar2 = param_2 * param_2 - 1.0;
    fVar1 = (float)cosf((param_3 * 6.2831855) / param_4);
    fVar3 = 1.0 - fVar1 * param_2 * param_2;
    fVar3 = fVar3 + fVar3;
    fVar1 = fVar3 * fVar3 - fVar2 * 4.0 * fVar2;
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar1 = (SQRT(fVar1) - fVar3) * (0.5 / fVar2);
    *param_5 = fVar1;
    if (0.0 <= fVar1) {
      if (fVar1 <= 0.99) {
        return 0;
      }
      *param_5 = 0.99;
      return 0;
    }
  }
  *param_5 = 0.0;
  return 0;
}



int8_t FUN_180780eec(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  float *unaff_RBX;
  float fVar1;
  float fVar2;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar3;
  
  fVar2 = unaff_XMM7_Da * unaff_XMM7_Da - unaff_XMM8_Da;
  fVar1 = (float)cosf(param_3 / param_4);
  fVar3 = unaff_XMM8_Da - fVar1 * unaff_XMM7_Da * unaff_XMM7_Da;
  fVar3 = fVar3 + fVar3;
  fVar1 = fVar3 * fVar3 - fVar2 * 4.0 * fVar2;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = (SQRT(fVar1) - fVar3) * (0.5 / fVar2);
  *unaff_RBX = fVar1;
  if (fVar1 < 0.0) {
    *unaff_RBX = 0.0;
  }
  else if (0.99 < fVar1) {
    *unaff_RBX = 0.99;
    return 0;
  }
  return 0;
}



int8_t FUN_180780f64(void)

{
  int32_t *unaff_RBX;
  float in_XMM3_Da;
  
  if (0.99 < in_XMM3_Da) {
    *unaff_RBX = 0x3f7d70a4;
    return 0;
  }
  return 0;
}



ulonglong FUN_180780fa0(uint64_t param_1,float param_2,float param_3,float param_4,float *param_5,
                       float *param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)tanf((param_3 * 3.1415927) / param_4);
  fVar2 = (float)expf(param_2 * 0.057564627);
  fVar2 = fVar1 / fVar2;
  fVar4 = 1.0 / ((fVar2 + 1.4142135) * fVar2 + 1.0);
  *param_5 = ((fVar1 + 1.4142135) * fVar1 + 1.0) * fVar4;
  fVar3 = (fVar1 * fVar1 - 1.0) * fVar4;
  *param_6 = fVar3 + fVar3;
  *param_7 = ((fVar1 - 1.4142135) * fVar1 + 1.0) * fVar4;
  *param_8 = (fVar2 * fVar2 - 1.0) * -2.0 * fVar4;
  *param_9 = -(((fVar2 - 1.4142135) * fVar2 + 1.0) * fVar4);
  return (ulonglong)param_9 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_1807810c0(longlong param_1,float *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int32_t *puVar4;
  byte bVar5;
  float fVar6;
  int32_t uVar7;
  float fVar8;
  float afStackX_8 [2];
  
  bVar5 = 0;
  fVar6 = _DAT_180c0fa90;
  if ((*param_2 < _DAT_180c0fa90) || (fVar6 = _DAT_180c0fa94, _DAT_180c0fa94 < *param_2)) {
    *param_2 = fVar6;
  }
  iVar3 = 0;
  *(float *)(param_1 + 0x7e8) = *param_2;
  if (0 < *(int *)(param_1 + 0x504)) {
    puVar4 = (int32_t *)(param_1 + 0x430);
    do {
      if (*param_2 != 0.0) {
        fVar6 = (float)puVar4[0x46];
        fVar8 = (-60000.0 / *param_2) * fVar6;
        uVar7 = powf(0x41200000,fVar8 * 0.05);
        *puVar4 = uVar7;
        iVar1 = *(int *)(param_1 + 0x818);
        uVar7 = powf(0x41200000,((-6e+06 / (param_2[4] * *param_2)) * fVar6 - fVar8) * 0.05);
        bVar2 = FUN_180780eb0(param_1,uVar7,param_2[3],(float)iVar1,afStackX_8);
        bVar5 = bVar5 | bVar2;
        puVar4[-0x6f] = 1.0 - afStackX_8[0];
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x504));
  }
  FUN_1807814c0(param_1,param_1 + 0x7e8);
  return bVar5;
}



byte FUN_180781117(longlong param_1)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  int unaff_EBX;
  int32_t *puVar4;
  longlong unaff_RSI;
  float *unaff_RDI;
  byte unaff_R14B;
  int32_t uVar5;
  float fVar6;
  float in_stack_000000e0;
  
  puVar4 = (int32_t *)(param_1 + 0x430);
  do {
    fVar6 = *unaff_RDI;
    if (fVar6 != 0.0) {
      fVar1 = (float)puVar4[0x46];
      fVar6 = (-60000.0 / fVar6) * fVar1;
      uVar5 = powf(0x41200000,fVar6 * 0.05);
      *puVar4 = uVar5;
      iVar2 = *(int *)(unaff_RSI + 0x818);
      uVar5 = powf(0x41200000,((-6e+06 / (unaff_RDI[4] * *unaff_RDI)) * fVar1 - fVar6) * 0.05);
      bVar3 = FUN_180780eb0(uVar5,uVar5,unaff_RDI[3],(float)iVar2,&stack0x000000e0);
      unaff_R14B = unaff_R14B | bVar3;
      fVar6 = 1.0 - in_stack_000000e0;
      puVar4[-0x6f] = fVar6;
    }
    unaff_EBX = unaff_EBX + 1;
    puVar4 = puVar4 + 1;
  } while (unaff_EBX < *(int *)(unaff_RSI + 0x504));
  FUN_1807814c0(fVar6,unaff_RSI + 0x7e8);
  return unaff_R14B;
}



int8_t FUN_1807812a0(void)

{
  int8_t unaff_R14B;
  
  FUN_1807814c0();
  return unaff_R14B;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

byte FUN_1807812d0(longlong param_1,float *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  float unaff_EBX;
  int32_t *puVar4;
  byte bVar5;
  int32_t uVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = _DAT_180c0fcd0;
  if ((param_2[6] < _DAT_180c0fcd0) || (fVar8 = _DAT_180c0fcd4, _DAT_180c0fcd4 < param_2[6])) {
    param_2[6] = fVar8;
  }
  *(float *)(param_1 + 0x800) = param_2[6];
  fVar8 = param_2[6];
  fVar7 = fVar8 * fVar8 * fVar8 * 8.999999e-07 + 0.1;
  fVar8 = 0.1;
  if ((0.1 <= fVar7) && (fVar8 = fVar7, 1.0 <= fVar7)) {
    fVar8 = 1.0;
  }
  FUN_1807ed0d0(param_1 + 0x218,fVar8 * 0.061,0x3fa8f5c3,0x3ac49ba6,0x3fbc28f6,
                (float)*(int *)(param_1 + 0x818));
  bVar5 = 0;
  fVar8 = _DAT_180c0fa90;
  if ((*param_2 < _DAT_180c0fa90) || (fVar8 = _DAT_180c0fa94, _DAT_180c0fa94 < *param_2)) {
    *param_2 = fVar8;
  }
  iVar3 = 0;
  *(float *)(param_1 + 0x7e8) = *param_2;
  if (0 < *(int *)(param_1 + 0x504)) {
    puVar4 = (int32_t *)(param_1 + 0x430);
    do {
      if (*param_2 != 0.0) {
        uVar6 = powf();
        *puVar4 = uVar6;
        iVar1 = *(int *)(param_1 + 0x818);
        uVar6 = powf();
        bVar2 = FUN_180780eb0(param_1,uVar6,param_2[3],(float)iVar1,&stack0x00000008);
        bVar5 = bVar5 | bVar2;
        puVar4[-0x6f] = 1.0 - unaff_EBX;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x504));
  }
  FUN_1807814c0(param_1,param_1 + 0x7e8);
  return bVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1807813a0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int32_t uVar2;
  int32_t extraout_XMM0_Da;
  float fVar3;
  
  fVar3 = _DAT_180c0fc70;
  if ((*(float *)(param_2 + 0x14) < _DAT_180c0fc70) ||
     (fVar3 = _DAT_180c0fc74, _DAT_180c0fc74 < *(float *)(param_2 + 0x14))) {
    *(float *)(param_2 + 0x14) = fVar3;
  }
  *(int32_t *)(param_1 + 0x7fc) = *(int32_t *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x14) * 0.007853982;
  uVar2 = tanf(fVar3);
  *(int32_t *)(param_1 + 0x4b0) = uVar2;
  cosf(fVar3);
  uVar1 = powf();
  *(int32_t *)(param_1 + 0x4ec) = extraout_XMM0_Da;
  return uVar1 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180781430(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = _DAT_180c0faf0;
  if ((*(float *)(param_2 + 4) < _DAT_180c0faf0) ||
     (fVar4 = _DAT_180c0faf4, _DAT_180c0faf4 < *(float *)(param_2 + 4))) {
    *(float *)(param_2 + 4) = fVar4;
  }
  fVar4 = *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x7ec) = fVar4;
  *(float *)(param_1 + 0x678) = fVar4 * 0.001;
  iVar3 = (int)((float)*(int *)(param_1 + 0x818) * *(float *)(param_1 + 0x7ec) * 0.001);
  iVar1 = 1;
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x69c) = iVar1;
  uVar2 = FUN_1807816b0(param_1,param_1 + 0x7e8);
  return uVar2 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1807814c0(longlong param_1,longlong param_2)

{
  uint uVar1;
  float *pfVar2;
  ulonglong uVar3;
  float extraout_XMM0_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = _DAT_180c0fe50;
  if ((*(float *)(param_2 + 0x28) < _DAT_180c0fe50) ||
     (fVar8 = _DAT_180c0fe54, _DAT_180c0fe54 < *(float *)(param_2 + 0x28))) {
    *(float *)(param_2 + 0x28) = fVar8;
  }
  pfVar2 = (float *)(ulonglong)*(uint *)(param_2 + 0x28);
  *(uint *)(param_1 + 0x810) = *(uint *)(param_2 + 0x28);
  if (-80.0 < *(float *)(param_2 + 0x2c)) {
    pfVar2 = (float *)powf(param_1,*(float *)(param_2 + 0x2c) * 0.05);
    fVar8 = extraout_XMM0_Da;
  }
  else {
    fVar8 = 0.0;
  }
  fVar6 = *(float *)(param_2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x504);
  fVar7 = 1.0 - fVar6 * 0.01;
  fVar4 = 1.0 / (fVar6 * fVar6 * 0.0001 + fVar7 * fVar7);
  fVar4 = SQRT(fVar4 + fVar4);
  fVar5 = 0.0;
  fVar6 = fVar4 * fVar6 * 0.01 * fVar8;
  *(float *)(param_1 + 0x4c4) = fVar7 * fVar4 * fVar8 * 0.35355338;
  if (0 < (int)uVar1) {
    pfVar2 = (float *)(param_1 + 0x430);
    uVar3 = (ulonglong)uVar1;
    do {
      fVar8 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      fVar5 = fVar5 + fVar8 * fVar8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  fVar5 = fVar5 / (float)(int)uVar1;
  if (fVar5 == 1.0) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = fVar5 / (1.0 - fVar5) + 1.0;
    if (fVar8 <= 0.0) goto LAB_18078160a;
  }
  fVar6 = fVar6 / SQRT(fVar8);
LAB_18078160a:
  *(float *)(param_1 + 0x4c8) = fVar6 * 0.35355338;
  return (ulonglong)pfVar2 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180781630(longlong param_1,longlong param_2)
void FUN_180781630(longlong param_1,longlong param_2)

{
  float fVar1;
  int32_t uStackX_8;
  
  fVar1 = _DAT_180c0fdf0;
  if ((*(float *)(param_2 + 0x24) < _DAT_180c0fdf0) ||
     (fVar1 = _DAT_180c0fdf4, _DAT_180c0fdf4 < *(float *)(param_2 + 0x24))) {
    *(float *)(param_2 + 0x24) = fVar1;
  }
  *(int32_t *)(param_1 + 0x80c) = *(int32_t *)(param_2 + 0x24);
  FUN_180780eb0(fVar1,0x3f5765ac,*(int32_t *)(param_2 + 0x24));
  *(float *)(param_1 + 0x238) = 1.0 - uStackX_8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_1807816b0(longlong param_1,longlong param_2)

{
  float fVar1;
  
  fVar1 = _DAT_180c0fb50;
  if ((*(float *)(param_2 + 8) < _DAT_180c0fb50) ||
     (fVar1 = _DAT_180c0fb54, _DAT_180c0fb54 < *(float *)(param_2 + 8))) {
    *(float *)(param_2 + 8) = fVar1;
  }
  fVar1 = *(float *)(param_2 + 8);
  *(float *)(param_1 + 0x7f0) = fVar1;
  func_0x0001807ed440(param_1 + 0x218,(fVar1 + *(float *)(param_1 + 0x7ec)) * 0.001,0x3c9930be,
                      0x3fa51eb8,(float)*(int *)(param_1 + 0x818));
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180781730(longlong param_1,longlong param_2)
void FUN_180781730(longlong param_1,longlong param_2)

{
  float fVar1;
  
  fVar1 = _DAT_180c0fd90;
  if ((*(float *)(param_2 + 0x20) < _DAT_180c0fd90) ||
     (fVar1 = _DAT_180c0fd94, _DAT_180c0fd94 < *(float *)(param_2 + 0x20))) {
    *(float *)(param_2 + 0x20) = fVar1;
  }
  *(int32_t *)(param_1 + 0x268) = *(int32_t *)(param_2 + 0x20);
  FUN_180780fa0(param_1,param_1 + 0x25c,*(int32_t *)(param_2 + 0x1c),param_1 + 0x254,
                param_1 + 0x254,param_1 + 600,param_1 + 0x25c,param_1 + 0x260,param_1 + 0x264);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807817e0(longlong param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 == 2) {
    fVar2 = *(float *)(param_1 + 0x820);
    pfVar1 = (float *)(param_1 + 0x7e8);
    if (fVar2 != *pfVar1) {
      *pfVar1 = fVar2;
      FUN_1807810c0(fVar2,pfVar1);
    }
    if (*(float *)(param_1 + 0x824) != *(float *)(param_1 + 0x7ec)) {
      *(float *)(param_1 + 0x7ec) = *(float *)(param_1 + 0x824);
      FUN_180781430(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x828) != *(float *)(param_1 + 0x7f0)) {
      *(float *)(param_1 + 0x7f0) = *(float *)(param_1 + 0x828);
      FUN_1807816b0(param_1,pfVar1);
    }
    fVar2 = *(float *)(param_1 + 0x82c);
    if (fVar2 != *(float *)(param_1 + 0x7f4)) {
      *(float *)(param_1 + 0x7f4) = fVar2;
      fVar3 = _DAT_180c0fbb0;
      if ((fVar2 < _DAT_180c0fbb0) || (fVar3 = _DAT_180c0fbb4, _DAT_180c0fbb4 < fVar2)) {
        *(float *)(param_1 + 0x7f4) = fVar3;
      }
      FUN_1807810c0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x830) != *(float *)(param_1 + 0x7f8)) {
      *(float *)(param_1 + 0x7f8) = *(float *)(param_1 + 0x830);
      fVar2 = _DAT_180c0fc10;
      if ((*(float *)(param_1 + 0x7f8) < _DAT_180c0fc10) ||
         (fVar2 = _DAT_180c0fc14, _DAT_180c0fc14 < *(float *)(param_1 + 0x7f8))) {
        *(float *)(param_1 + 0x7f8) = fVar2;
      }
      *(int32_t *)(param_1 + 0x7f8) = *(int32_t *)(param_1 + 0x7f8);
      FUN_1807810c0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x834) != *(float *)(param_1 + 0x7fc)) {
      *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x834);
      FUN_1807813a0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x838) != *(float *)(param_1 + 0x800)) {
      *(float *)(param_1 + 0x800) = *(float *)(param_1 + 0x838);
      FUN_1807812d0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x83c) != *(float *)(param_1 + 0x804)) {
      *(float *)(param_1 + 0x804) = *(float *)(param_1 + 0x83c);
      fVar2 = _DAT_180c0fd30;
      if ((*(float *)(param_1 + 0x804) < _DAT_180c0fd30) ||
         (fVar2 = _DAT_180c0fd34, _DAT_180c0fd34 < *(float *)(param_1 + 0x804))) {
        *(float *)(param_1 + 0x804) = fVar2;
      }
      *(int32_t *)(param_1 + 0x804) = *(int32_t *)(param_1 + 0x804);
      FUN_180781730(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x840) != *(float *)(param_1 + 0x808)) {
      *(float *)(param_1 + 0x808) = *(float *)(param_1 + 0x840);
      FUN_180781730(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x844) != *(float *)(param_1 + 0x80c)) {
      *(float *)(param_1 + 0x80c) = *(float *)(param_1 + 0x844);
      FUN_180781630(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x848) != *(float *)(param_1 + 0x810)) {
      *(float *)(param_1 + 0x810) = *(float *)(param_1 + 0x848);
      FUN_1807814c0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x84c) != *(float *)(param_1 + 0x814)) {
      *(float *)(param_1 + 0x814) = *(float *)(param_1 + 0x84c);
      fVar2 = _DAT_180c0feb0;
      if ((*(float *)(param_1 + 0x814) < _DAT_180c0feb0) ||
         (fVar2 = _DAT_180c0feb4, _DAT_180c0feb4 < *(float *)(param_1 + 0x814))) {
        *(float *)(param_1 + 0x814) = fVar2;
      }
      *(int32_t *)(param_1 + 0x814) = *(int32_t *)(param_1 + 0x814);
      FUN_1807814c0(param_1,pfVar1);
    }
    return 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807817fa(float param_1)

{
  float *pfVar1;
  longlong in_RCX;
  longlong unaff_RBX;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)(in_RCX + 0x7e8);
  if (param_1 != *pfVar1) {
    *pfVar1 = param_1;
    FUN_1807810c0(in_RCX,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x824);
  if (fVar2 != *(float *)(unaff_RBX + 0x7ec)) {
    *(float *)(unaff_RBX + 0x7ec) = fVar2;
    FUN_180781430(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x828);
  if (fVar2 != *(float *)(unaff_RBX + 0x7f0)) {
    *(float *)(unaff_RBX + 0x7f0) = fVar2;
    FUN_1807816b0(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x82c);
  if (fVar2 != *(float *)(unaff_RBX + 0x7f4)) {
    *(float *)(unaff_RBX + 0x7f4) = fVar2;
    fVar3 = _DAT_180c0fbb0;
    if ((fVar2 < _DAT_180c0fbb0) || (fVar3 = _DAT_180c0fbb4, _DAT_180c0fbb4 < fVar2)) {
      *(float *)(unaff_RBX + 0x7f4) = fVar3;
    }
    FUN_1807810c0(fVar2,pfVar1);
  }
  if (*(float *)(unaff_RBX + 0x830) != *(float *)(unaff_RBX + 0x7f8)) {
    *(float *)(unaff_RBX + 0x7f8) = *(float *)(unaff_RBX + 0x830);
    fVar2 = _DAT_180c0fc10;
    if ((*(float *)(in_RCX + 0x7f8) < _DAT_180c0fc10) ||
       (fVar2 = _DAT_180c0fc14, _DAT_180c0fc14 < *(float *)(in_RCX + 0x7f8))) {
      *(float *)(in_RCX + 0x7f8) = fVar2;
    }
    *(int32_t *)(unaff_RBX + 0x7f8) = *(int32_t *)(in_RCX + 0x7f8);
    FUN_1807810c0(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x834);
  if (fVar2 != *(float *)(unaff_RBX + 0x7fc)) {
    *(float *)(unaff_RBX + 0x7fc) = fVar2;
    FUN_1807813a0(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x838);
  if (fVar2 != *(float *)(unaff_RBX + 0x800)) {
    *(float *)(unaff_RBX + 0x800) = fVar2;
    FUN_1807812d0(fVar2,pfVar1);
  }
  if (*(float *)(unaff_RBX + 0x83c) != *(float *)(unaff_RBX + 0x804)) {
    *(float *)(unaff_RBX + 0x804) = *(float *)(unaff_RBX + 0x83c);
    fVar2 = _DAT_180c0fd30;
    if ((*(float *)(in_RCX + 0x804) < _DAT_180c0fd30) ||
       (fVar2 = _DAT_180c0fd34, _DAT_180c0fd34 < *(float *)(in_RCX + 0x804))) {
      *(float *)(in_RCX + 0x804) = fVar2;
    }
    *(int32_t *)(unaff_RBX + 0x804) = *(int32_t *)(in_RCX + 0x804);
    FUN_180781730(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x840);
  if (fVar2 != *(float *)(unaff_RBX + 0x808)) {
    *(float *)(unaff_RBX + 0x808) = fVar2;
    FUN_180781730(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x844);
  if (fVar2 != *(float *)(unaff_RBX + 0x80c)) {
    *(float *)(unaff_RBX + 0x80c) = fVar2;
    FUN_180781630(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x848);
  if (fVar2 != *(float *)(unaff_RBX + 0x810)) {
    *(float *)(unaff_RBX + 0x810) = fVar2;
    FUN_1807814c0(fVar2,pfVar1);
  }
  if (*(float *)(unaff_RBX + 0x84c) != *(float *)(unaff_RBX + 0x814)) {
    *(float *)(unaff_RBX + 0x814) = *(float *)(unaff_RBX + 0x84c);
    fVar2 = _DAT_180c0feb0;
    if ((*(float *)(in_RCX + 0x814) < _DAT_180c0feb0) ||
       (fVar2 = _DAT_180c0feb4, _DAT_180c0feb4 < *(float *)(in_RCX + 0x814))) {
      *(float *)(in_RCX + 0x814) = fVar2;
    }
    *(int32_t *)(unaff_RBX + 0x814) = *(int32_t *)(in_RCX + 0x814);
    FUN_1807814c0(fVar2,pfVar1);
  }
  return 0;
}



uint64_t FUN_180781a59(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180781a70(longlong param_1)

{
  uint64_t *puVar1;
  int iVar2;
  longlong lVar3;
  uint64_t uVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  
  if ((int32_t *)(param_1 + 0x818) != (int32_t *)0x0) {
    *(int32_t *)(param_1 + 0x818) = *(int32_t *)(*(longlong *)(param_1 + 0xa8) + 0x6d0);
  }
  iVar6 = 0;
  *(int32_t *)(param_1 + 0x81c) = 0;
  iVar2 = FUN_1807ed6f0(param_1 + 0x218);
  if (iVar2 == 0) {
    *(longlong *)(param_1 + 0x230) = *(longlong *)(param_1 + 0xa8);
    iVar2 = FUN_1807ed550(param_1 + 0x218,*(int32_t *)(*(longlong *)(param_1 + 0xa8) + 0x6d8));
    if (iVar2 == 0) {
      *(int32_t *)(param_1 + 0x504) = 8;
      *(int32_t *)(param_1 + 0x7e4) = 3;
      FUN_1807ebc30(param_1 + 0x218);
      lVar3 = *(longlong *)(param_1 + 0xe8);
      if (0 < *(int *)(lVar3 + 0x60)) {
        lVar5 = 0;
        do {
          uVar4 = FUN_1807825e0(param_1,iVar6,
                                *(int32_t *)
                                 (*(longlong *)(*(longlong *)(lVar3 + 0x68) + lVar5) + 0x38),0);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar3 = *(longlong *)(param_1 + 0xe8);
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 8;
        } while (iVar6 < *(int *)(lVar3 + 0x60));
      }
      puVar1 = (uint64_t *)(param_1 + 0x7e8);
      *puVar1 = *(uint64_t *)(param_1 + 0x820);
      *(uint64_t *)(param_1 + 0x7f0) = *(uint64_t *)(param_1 + 0x828);
      *(uint64_t *)(param_1 + 0x7f8) = *(uint64_t *)(param_1 + 0x830);
      *(uint64_t *)(param_1 + 0x800) = *(uint64_t *)(param_1 + 0x838);
      *(int32_t *)(param_1 + 0x808) = *(int32_t *)(param_1 + 0x840);
      *(int32_t *)(param_1 + 0x80c) = *(int32_t *)(param_1 + 0x844);
      *(int32_t *)(param_1 + 0x810) = *(int32_t *)(param_1 + 0x848);
      *(int32_t *)(param_1 + 0x814) = *(int32_t *)(param_1 + 0x84c);
      FUN_1807810c0(param_1,puVar1);
      FUN_180781430(param_1,puVar1);
      FUN_1807816b0(param_1,puVar1);
      fVar7 = _DAT_180c0fbb0;
      if ((*(float *)(param_1 + 0x7f4) < _DAT_180c0fbb0) ||
         (fVar7 = _DAT_180c0fbb4, _DAT_180c0fbb4 < *(float *)(param_1 + 0x7f4))) {
        *(float *)(param_1 + 0x7f4) = fVar7;
      }
      FUN_1807810c0(param_1,puVar1);
      fVar7 = _DAT_180c0fc10;
      if ((*(float *)(param_1 + 0x7f8) < _DAT_180c0fc10) ||
         (fVar7 = _DAT_180c0fc14, _DAT_180c0fc14 < *(float *)(param_1 + 0x7f8))) {
        *(float *)(param_1 + 0x7f8) = fVar7;
      }
      *(int32_t *)(param_1 + 0x7f8) = *(int32_t *)(param_1 + 0x7f8);
      FUN_1807810c0(param_1,puVar1);
      FUN_1807813a0(param_1,puVar1);
      FUN_1807812d0(param_1,puVar1);
      fVar7 = _DAT_180c0fd30;
      if ((*(float *)(param_1 + 0x804) < _DAT_180c0fd30) ||
         (fVar7 = _DAT_180c0fd34, _DAT_180c0fd34 < *(float *)(param_1 + 0x804))) {
        *(float *)(param_1 + 0x804) = fVar7;
      }
      *(int32_t *)(param_1 + 0x804) = *(int32_t *)(param_1 + 0x804);
      FUN_180781730(param_1,puVar1);
      FUN_180781630(param_1,puVar1);
      fVar7 = _DAT_180c0feb0;
      if ((*(float *)(param_1 + 0x814) < _DAT_180c0feb0) ||
         (fVar7 = _DAT_180c0feb4, _DAT_180c0feb4 < *(float *)(param_1 + 0x814))) {
        *(float *)(param_1 + 0x814) = fVar7;
      }
      *(int32_t *)(param_1 + 0x814) = *(int32_t *)(param_1 + 0x814);
      FUN_1807814c0(param_1,puVar1);
      return 0;
    }
  }
  return 0x26;
}





