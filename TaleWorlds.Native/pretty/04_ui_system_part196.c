#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part196.c - 3 个函数
// 函数: void SystemCore_80c63(int64_t param_1)
void SystemCore_80c63(int64_t param_1)
{
  int64_t unaff_RBX;
  int32_t unaff_ESI;
  code *unaff_R13;
  int32_t local_buffer_28;
  int32_t local_buffer_30;
  int32_t local_var_40;
  uint64_t local_var_1050;
  local_buffer_30 = 1;
  local_buffer_28 = local_var_40;
  *(int32_t *)(unaff_RBX + 0x23cc) = unaff_ESI;
  (*unaff_R13)(param_1 + 0x220);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_1050 ^ (uint64_t)&local_buffer_00000000);
}
uint64_t SystemCore_80cf0(int64_t *param_1)
{
  SystemCore_ed610(*param_1 + 0x218);
  return 0;
}
uint64_t SystemCore_80d10(int64_t *param_1)
{
  int64_t lVar1;
  int iVar2;
  lVar1 = *param_1 + 0x218;
  iVar2 = SystemCore_ed550(lVar1,*(int32_t *)(*(int64_t *)(*param_1 + 0xa8) + 0x6d8));
  if (iVar2 != 0) {
    return 0x26;
  }
  SystemCore_ebc30(lVar1);
  return 0;
}
uint64_t
SystemCore_80d60(int64_t *param_1,int64_t param_2,int64_t param_3,int param_4,int param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x81c) == 0) {
    uVar3 = 0;
    if (0 < param_5) {
      uVar4 = uVar3;
      do {
        while (uVar3 < (uint)(param_4 * param_5)) {
          uVar2 = (uint64_t)uVar3;
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
    SystemCore_ebcc0(lVar1 + 0x218,param_2,param_3,param_5,param_4,(float)*(int *)(lVar1 + 0x818),
                  *(int32_t *)(lVar1 + 0x854));
  }
  return 0;
}
int8_t
SystemCore_80eb0(uint64_t param_1,float param_2,float param_3,float param_4,float *param_5)
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
int8_t SystemCore_80eec(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
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
int8_t SystemCore_80f64(void)
{
  int32_t *unaff_RBX;
  float in_XMM3_Da;
  if (0.99 < in_XMM3_Da) {
    *unaff_RBX = 0x3f7d70a4;
    return 0;
  }
  return 0;
}
uint64_t SystemCore_80fa0(uint64_t param_1,float param_2,float param_3,float param_4,float *param_5,
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
  return (uint64_t)param_9 & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
byte SystemCore_810c0(int64_t param_1,float *param_2)
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
  fVar6 = ui_system_config;
  if ((*param_2 < ui_system_config) || (fVar6 = ui_system_config, ui_system_config < *param_2)) {
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
        bVar2 = SystemCore_80eb0(param_1,uVar7,param_2[3],(float)iVar1,afStackX_8);
        bVar5 = bVar5 | bVar2;
        puVar4[-0x6f] = 1.0 - afStackX_8[0];
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x504));
  }
  SystemCore_814c0(param_1,param_1 + 0x7e8);
  return bVar5;
}
byte SystemCore_81117(int64_t param_1)
{
  float fVar1;
  int iVar2;
  byte bVar3;
  int unaff_EBX;
  int32_t *puVar4;
  int64_t unaff_RSI;
  float *unaff_RDI;
  byte unaff_R14B;
  int32_t uVar5;
  float fVar6;
  float local_buffer_e0;
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
      bVar3 = SystemCore_80eb0(uVar5,uVar5,unaff_RDI[3],(float)iVar2,&local_buffer_000000e0);
      unaff_R14B = unaff_R14B | bVar3;
      fVar6 = 1.0 - local_buffer_e0;
      puVar4[-0x6f] = fVar6;
    }
    unaff_EBX = unaff_EBX + 1;
    puVar4 = puVar4 + 1;
  } while (unaff_EBX < *(int *)(unaff_RSI + 0x504));
  SystemCore_814c0(fVar6,unaff_RSI + 0x7e8);
  return unaff_R14B;
}
int8_t SystemCore_812a0(void)
{
  int8_t unaff_R14B;
  SystemCore_814c0();
  return unaff_R14B;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
byte SystemCore_812d0(int64_t param_1,float *param_2)
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
  fVar8 = ui_system_config;
  if ((param_2[6] < ui_system_config) || (fVar8 = ui_system_config, ui_system_config < param_2[6])) {
    param_2[6] = fVar8;
  }
  *(float *)(param_1 + 0x800) = param_2[6];
  fVar8 = param_2[6];
  fVar7 = fVar8 * fVar8 * fVar8 * 8.999999e-07 + 0.1;
  fVar8 = 0.1;
  if ((0.1 <= fVar7) && (fVar8 = fVar7, 1.0 <= fVar7)) {
    fVar8 = 1.0;
  }
  SystemCore_ed0d0(param_1 + 0x218,fVar8 * 0.061,0x3fa8f5c3,0x3ac49ba6,0x3fbc28f6,
                (float)*(int *)(param_1 + 0x818));
  bVar5 = 0;
  fVar8 = ui_system_config;
  if ((*param_2 < ui_system_config) || (fVar8 = ui_system_config, ui_system_config < *param_2)) {
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
        bVar2 = SystemCore_80eb0(param_1,uVar6,param_2[3],(float)iVar1,&local_buffer_00000008);
        bVar5 = bVar5 | bVar2;
        puVar4[-0x6f] = 1.0 - unaff_EBX;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x504));
  }
  SystemCore_814c0(param_1,param_1 + 0x7e8);
  return bVar5;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_813a0(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t extraout_XMM0_Da;
  float fVar3;
  fVar3 = ui_system_config;
  if ((*(float *)(param_2 + 0x14) < ui_system_config) ||
     (fVar3 = ui_system_config, ui_system_config < *(float *)(param_2 + 0x14))) {
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
uint64_t SystemCore_81430(int64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  int iVar3;
  float fVar4;
  fVar4 = ui_system_config;
  if ((*(float *)(param_2 + 4) < ui_system_config) ||
     (fVar4 = ui_system_config, ui_system_config < *(float *)(param_2 + 4))) {
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
  uVar2 = SystemCore_816b0(param_1,param_1 + 0x7e8);
  return uVar2 & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_814c0(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  float *pfVar2;
  uint64_t uVar3;
  float extraout_XMM0_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  fVar8 = ui_system_config;
  if ((*(float *)(param_2 + 0x28) < ui_system_config) ||
     (fVar8 = ui_system_config, ui_system_config < *(float *)(param_2 + 0x28))) {
    *(float *)(param_2 + 0x28) = fVar8;
  }
  pfVar2 = (float *)(uint64_t)*(uint *)(param_2 + 0x28);
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
    uVar3 = (uint64_t)uVar1;
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
  return (uint64_t)pfVar2 & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_81630(int64_t param_1,int64_t param_2)
void SystemCore_81630(int64_t param_1,int64_t param_2)
{
  float fVar1;
  int32_t stack_special_x_8;
  fVar1 = ui_system_config;
  if ((*(float *)(param_2 + 0x24) < ui_system_config) ||
     (fVar1 = ui_system_config, ui_system_config < *(float *)(param_2 + 0x24))) {
    *(float *)(param_2 + 0x24) = fVar1;
  }
  *(int32_t *)(param_1 + 0x80c) = *(int32_t *)(param_2 + 0x24);
  SystemCore_80eb0(fVar1,0x3f5765ac,*(int32_t *)(param_2 + 0x24));
  *(float *)(param_1 + 0x238) = 1.0 - stack_special_x_8;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t SystemCore_816b0(int64_t param_1,int64_t param_2)
{
  float fVar1;
  fVar1 = ui_system_config;
  if ((*(float *)(param_2 + 8) < ui_system_config) ||
     (fVar1 = ui_system_config, ui_system_config < *(float *)(param_2 + 8))) {
    *(float *)(param_2 + 8) = fVar1;
  }
  fVar1 = *(float *)(param_2 + 8);
  *(float *)(param_1 + 0x7f0) = fVar1;
  Function_1d1d3539(param_1 + 0x218,(fVar1 + *(float *)(param_1 + 0x7ec)) * 0.001,0x3c9930be,
                      0x3fa51eb8,(float)*(int *)(param_1 + 0x818));
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_81730(int64_t param_1,int64_t param_2)
void SystemCore_81730(int64_t param_1,int64_t param_2)
{
  float fVar1;
  fVar1 = ui_system_config;
  if ((*(float *)(param_2 + 0x20) < ui_system_config) ||
     (fVar1 = ui_system_config, ui_system_config < *(float *)(param_2 + 0x20))) {
    *(float *)(param_2 + 0x20) = fVar1;
  }
  *(int32_t *)(param_1 + 0x268) = *(int32_t *)(param_2 + 0x20);
  SystemCore_80fa0(param_1,param_1 + 0x25c,*(int32_t *)(param_2 + 0x1c),param_1 + 0x254,
                param_1 + 0x254,param_1 + 600,param_1 + 0x25c,param_1 + 0x260,param_1 + 0x264);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_817e0(int64_t param_1,int param_2)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  if (param_2 == 2) {
    fVar2 = *(float *)(param_1 + 0x820);
    pfVar1 = (float *)(param_1 + 0x7e8);
    if (fVar2 != *pfVar1) {
      *pfVar1 = fVar2;
      SystemCore_810c0(fVar2,pfVar1);
    }
    if (*(float *)(param_1 + 0x824) != *(float *)(param_1 + 0x7ec)) {
      *(float *)(param_1 + 0x7ec) = *(float *)(param_1 + 0x824);
      SystemCore_81430(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x828) != *(float *)(param_1 + 0x7f0)) {
      *(float *)(param_1 + 0x7f0) = *(float *)(param_1 + 0x828);
      SystemCore_816b0(param_1,pfVar1);
    }
    fVar2 = *(float *)(param_1 + 0x82c);
    if (fVar2 != *(float *)(param_1 + 0x7f4)) {
      *(float *)(param_1 + 0x7f4) = fVar2;
      fVar3 = ui_system_config;
      if ((fVar2 < ui_system_config) || (fVar3 = ui_system_config, ui_system_config < fVar2)) {
        *(float *)(param_1 + 0x7f4) = fVar3;
      }
      SystemCore_810c0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x830) != *(float *)(param_1 + 0x7f8)) {
      *(float *)(param_1 + 0x7f8) = *(float *)(param_1 + 0x830);
      fVar2 = ui_system_config;
      if ((*(float *)(param_1 + 0x7f8) < ui_system_config) ||
         (fVar2 = ui_system_config, ui_system_config < *(float *)(param_1 + 0x7f8))) {
        *(float *)(param_1 + 0x7f8) = fVar2;
      }
      *(int32_t *)(param_1 + 0x7f8) = *(int32_t *)(param_1 + 0x7f8);
      SystemCore_810c0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x834) != *(float *)(param_1 + 0x7fc)) {
      *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x834);
      SystemCore_813a0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x838) != *(float *)(param_1 + 0x800)) {
      *(float *)(param_1 + 0x800) = *(float *)(param_1 + 0x838);
      SystemCore_812d0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x83c) != *(float *)(param_1 + 0x804)) {
      *(float *)(param_1 + 0x804) = *(float *)(param_1 + 0x83c);
      fVar2 = ui_system_config;
      if ((*(float *)(param_1 + 0x804) < ui_system_config) ||
         (fVar2 = ui_system_config, ui_system_config < *(float *)(param_1 + 0x804))) {
        *(float *)(param_1 + 0x804) = fVar2;
      }
      *(int32_t *)(param_1 + 0x804) = *(int32_t *)(param_1 + 0x804);
      SystemCore_81730(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x840) != *(float *)(param_1 + 0x808)) {
      *(float *)(param_1 + 0x808) = *(float *)(param_1 + 0x840);
      SystemCore_81730(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x844) != *(float *)(param_1 + 0x80c)) {
      *(float *)(param_1 + 0x80c) = *(float *)(param_1 + 0x844);
      SystemCore_81630(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x848) != *(float *)(param_1 + 0x810)) {
      *(float *)(param_1 + 0x810) = *(float *)(param_1 + 0x848);
      SystemCore_814c0(param_1,pfVar1);
    }
    if (*(float *)(param_1 + 0x84c) != *(float *)(param_1 + 0x814)) {
      *(float *)(param_1 + 0x814) = *(float *)(param_1 + 0x84c);
      fVar2 = ui_system_config;
      if ((*(float *)(param_1 + 0x814) < ui_system_config) ||
         (fVar2 = ui_system_config, ui_system_config < *(float *)(param_1 + 0x814))) {
        *(float *)(param_1 + 0x814) = fVar2;
      }
      *(int32_t *)(param_1 + 0x814) = *(int32_t *)(param_1 + 0x814);
      SystemCore_814c0(param_1,pfVar1);
    }
    return 0;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_817fa(float param_1)
{
  float *pfVar1;
  int64_t in_RCX;
  int64_t unaff_RBX;
  float fVar2;
  float fVar3;
  pfVar1 = (float *)(in_RCX + 0x7e8);
  if (param_1 != *pfVar1) {
    *pfVar1 = param_1;
    SystemCore_810c0(in_RCX,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x824);
  if (fVar2 != *(float *)(unaff_RBX + 0x7ec)) {
    *(float *)(unaff_RBX + 0x7ec) = fVar2;
    SystemCore_81430(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x828);
  if (fVar2 != *(float *)(unaff_RBX + 0x7f0)) {
    *(float *)(unaff_RBX + 0x7f0) = fVar2;
    SystemCore_816b0(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x82c);
  if (fVar2 != *(float *)(unaff_RBX + 0x7f4)) {
    *(float *)(unaff_RBX + 0x7f4) = fVar2;
    fVar3 = ui_system_config;
    if ((fVar2 < ui_system_config) || (fVar3 = ui_system_config, ui_system_config < fVar2)) {
      *(float *)(unaff_RBX + 0x7f4) = fVar3;
    }
    SystemCore_810c0(fVar2,pfVar1);
  }
  if (*(float *)(unaff_RBX + 0x830) != *(float *)(unaff_RBX + 0x7f8)) {
    *(float *)(unaff_RBX + 0x7f8) = *(float *)(unaff_RBX + 0x830);
    fVar2 = ui_system_config;
    if ((*(float *)(in_RCX + 0x7f8) < ui_system_config) ||
       (fVar2 = ui_system_config, ui_system_config < *(float *)(in_RCX + 0x7f8))) {
      *(float *)(in_RCX + 0x7f8) = fVar2;
    }
    *(int32_t *)(unaff_RBX + 0x7f8) = *(int32_t *)(in_RCX + 0x7f8);
    SystemCore_810c0(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x834);
  if (fVar2 != *(float *)(unaff_RBX + 0x7fc)) {
    *(float *)(unaff_RBX + 0x7fc) = fVar2;
    SystemCore_813a0(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x838);
  if (fVar2 != *(float *)(unaff_RBX + 0x800)) {
    *(float *)(unaff_RBX + 0x800) = fVar2;
    SystemCore_812d0(fVar2,pfVar1);
  }
  if (*(float *)(unaff_RBX + 0x83c) != *(float *)(unaff_RBX + 0x804)) {
    *(float *)(unaff_RBX + 0x804) = *(float *)(unaff_RBX + 0x83c);
    fVar2 = ui_system_config;
    if ((*(float *)(in_RCX + 0x804) < ui_system_config) ||
       (fVar2 = ui_system_config, ui_system_config < *(float *)(in_RCX + 0x804))) {
      *(float *)(in_RCX + 0x804) = fVar2;
    }
    *(int32_t *)(unaff_RBX + 0x804) = *(int32_t *)(in_RCX + 0x804);
    SystemCore_81730(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x840);
  if (fVar2 != *(float *)(unaff_RBX + 0x808)) {
    *(float *)(unaff_RBX + 0x808) = fVar2;
    SystemCore_81730(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x844);
  if (fVar2 != *(float *)(unaff_RBX + 0x80c)) {
    *(float *)(unaff_RBX + 0x80c) = fVar2;
    SystemCore_81630(fVar2,pfVar1);
  }
  fVar2 = *(float *)(unaff_RBX + 0x848);
  if (fVar2 != *(float *)(unaff_RBX + 0x810)) {
    *(float *)(unaff_RBX + 0x810) = fVar2;
    SystemCore_814c0(fVar2,pfVar1);
  }
  if (*(float *)(unaff_RBX + 0x84c) != *(float *)(unaff_RBX + 0x814)) {
    *(float *)(unaff_RBX + 0x814) = *(float *)(unaff_RBX + 0x84c);
    fVar2 = ui_system_config;
    if ((*(float *)(in_RCX + 0x814) < ui_system_config) ||
       (fVar2 = ui_system_config, ui_system_config < *(float *)(in_RCX + 0x814))) {
      *(float *)(in_RCX + 0x814) = fVar2;
    }
    *(int32_t *)(unaff_RBX + 0x814) = *(int32_t *)(in_RCX + 0x814);
    SystemCore_814c0(fVar2,pfVar1);
  }
  return 0;
}
uint64_t SystemCore_81a59(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_81a70(int64_t param_1)
{
  uint64_t *puVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int iVar6;
  float fVar7;
  if ((int32_t *)(param_1 + 0x818) != (int32_t *)0x0) {
    *(int32_t *)(param_1 + 0x818) = *(int32_t *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
  }
  iVar6 = 0;
  *(int32_t *)(param_1 + 0x81c) = 0;
  iVar2 = SystemCore_ed6f0(param_1 + 0x218);
  if (iVar2 == 0) {
    *(int64_t *)(param_1 + 0x230) = *(int64_t *)(param_1 + 0xa8);
    iVar2 = SystemCore_ed550(param_1 + 0x218,*(int32_t *)(*(int64_t *)(param_1 + 0xa8) + 0x6d8));
    if (iVar2 == 0) {
      *(int32_t *)(param_1 + 0x504) = 8;
      *(int32_t *)(param_1 + 0x7e4) = 3;
      SystemCore_ebc30(param_1 + 0x218);
      lVar3 = *(int64_t *)(param_1 + 0xe8);
      if (0 < *(int *)(lVar3 + 0x60)) {
        lVar5 = 0;
        do {
          uVar4 = SystemCore_825e0(param_1,iVar6,
                                *(int32_t *)
                                 (*(int64_t *)(*(int64_t *)(lVar3 + 0x68) + lVar5) + 0x38),0);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar3 = *(int64_t *)(param_1 + 0xe8);
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
      SystemCore_810c0(param_1,puVar1);
      SystemCore_81430(param_1,puVar1);
      SystemCore_816b0(param_1,puVar1);
      fVar7 = ui_system_config;
      if ((*(float *)(param_1 + 0x7f4) < ui_system_config) ||
         (fVar7 = ui_system_config, ui_system_config < *(float *)(param_1 + 0x7f4))) {
        *(float *)(param_1 + 0x7f4) = fVar7;
      }
      SystemCore_810c0(param_1,puVar1);
      fVar7 = ui_system_config;
      if ((*(float *)(param_1 + 0x7f8) < ui_system_config) ||
         (fVar7 = ui_system_config, ui_system_config < *(float *)(param_1 + 0x7f8))) {
        *(float *)(param_1 + 0x7f8) = fVar7;
      }
      *(int32_t *)(param_1 + 0x7f8) = *(int32_t *)(param_1 + 0x7f8);
      SystemCore_810c0(param_1,puVar1);
      SystemCore_813a0(param_1,puVar1);
      SystemCore_812d0(param_1,puVar1);
      fVar7 = ui_system_config;
      if ((*(float *)(param_1 + 0x804) < ui_system_config) ||
         (fVar7 = ui_system_config, ui_system_config < *(float *)(param_1 + 0x804))) {
        *(float *)(param_1 + 0x804) = fVar7;
      }
      *(int32_t *)(param_1 + 0x804) = *(int32_t *)(param_1 + 0x804);
      SystemCore_81730(param_1,puVar1);
      SystemCore_81630(param_1,puVar1);
      fVar7 = ui_system_config;
      if ((*(float *)(param_1 + 0x814) < ui_system_config) ||
         (fVar7 = ui_system_config, ui_system_config < *(float *)(param_1 + 0x814))) {
        *(float *)(param_1 + 0x814) = fVar7;
      }
      *(int32_t *)(param_1 + 0x814) = *(int32_t *)(param_1 + 0x814);
      SystemCore_814c0(param_1,puVar1);
      return 0;
    }
  }
  return 0x26;
}