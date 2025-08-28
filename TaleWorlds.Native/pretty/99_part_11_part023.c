#include "TaleWorlds.Native.Split.h"
// 99_part_11_part023.c - 8 个函数
// 函数: void UtilitiesSystem_f2375(void)
void UtilitiesSystem_f2375(void)
{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &processed_var_9336_ptr;
  unaff_RSI[2] = unaff_RDI;
  return;
}
uint64_t *
UtilitiesSystem_f23a0(int64_t *param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4,
             uint64_t *param_5,int64_t *param_6)
{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStackX_10;
  int64_t *aplStackX_18 [2];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  int32_t local_var_40;
  plVar4 = (int64_t *)0x0;
  plStackX_10 = (int64_t *)0x0;
  aplStackX_18[0] = (int64_t *)0x0;
  local_var_48 = 0;
  local_var_40 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_54 = 0;
  local_var_50 = 0;
  local_var_4c = 0x3f800000;
  local_var_78 = 0;
  local_var_74 = 0;
  local_var_70 = 0;
  local_var_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&processed_var_8672_ptr);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = UtilitiesSystem_c4940(param_3,param_6,&processed_var_8792_ptr,&plStackX_10);
    bVar3 = UtilitiesSystem_c4940(param_3,param_6,&processed_var_8800_ptr,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto UtilitiesSystem_f24d5;
  }
  plVar4 = (int64_t *)UtilitiesSystem_e78b0(*param_5,plVar7,&local_var_58,plVar6,&local_var_78);
  if (plVar4 != (int64_t *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
UtilitiesSystem_f24d5:
  param_2[1] = plVar4;
  *param_2 = &processed_var_9352_ptr;
  param_2[2] = plVar4;
  return param_2;
}
// 函数: void UtilitiesSystem_f2462(void)
void UtilitiesSystem_f2462(void)
{
  int64_t *plVar1;
  uint64_t *unaff_RSI;
  int64_t *unaff_R12;
  int64_t *unaff_R15;
  uint64_t *local_buffer_d0;
  plVar1 = (int64_t *)UtilitiesSystem_e78b0(*local_buffer_d0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &processed_var_9352_ptr;
  unaff_RSI[2] = plVar1;
  return;
}
// 函数: void UtilitiesSystem_f24d5(void)
void UtilitiesSystem_f24d5(void)
{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &processed_var_9352_ptr;
  unaff_RSI[2] = unaff_RDI;
  return;
}
uint64_t *
UtilitiesSystem_f2500(int64_t *param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4,
             uint64_t *param_5,int64_t *param_6)
{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStackX_10;
  int64_t *aplStackX_18 [2];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  int32_t local_var_40;
  plVar4 = (int64_t *)0x0;
  plStackX_10 = (int64_t *)0x0;
  aplStackX_18[0] = (int64_t *)0x0;
  local_var_48 = 0;
  local_var_40 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_54 = 0;
  local_var_50 = 0;
  local_var_4c = 0x3f800000;
  local_var_78 = 0;
  local_var_74 = 0;
  local_var_70 = 0;
  local_var_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&processed_var_8672_ptr);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = UtilitiesSystem_c4940(param_3,param_6,&processed_var_8792_ptr,&plStackX_10);
    bVar3 = UtilitiesSystem_c4940(param_3,param_6,&processed_var_8800_ptr,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto UtilitiesSystem_f2635;
  }
  plVar4 = (int64_t *)UtilitiesSystem_e91d0(*param_5,plVar7,&local_var_58,plVar6,&local_var_78);
  if (plVar4 != (int64_t *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
UtilitiesSystem_f2635:
  param_2[1] = plVar4;
  *param_2 = &processed_var_9368_ptr;
  param_2[2] = plVar4;
  return param_2;
}
// 函数: void UtilitiesSystem_f25c2(void)
void UtilitiesSystem_f25c2(void)
{
  int64_t *plVar1;
  uint64_t *unaff_RSI;
  int64_t *unaff_R12;
  int64_t *unaff_R15;
  uint64_t *local_buffer_d0;
  plVar1 = (int64_t *)UtilitiesSystem_e91d0(*local_buffer_d0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &processed_var_9368_ptr;
  unaff_RSI[2] = plVar1;
  return;
}
// 函数: void UtilitiesSystem_f2635(void)
void UtilitiesSystem_f2635(void)
{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &processed_var_9368_ptr;
  unaff_RSI[2] = unaff_RDI;
  return;
}
uint64_t *
UtilitiesSystem_f2660(int64_t *param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4,
             uint64_t *param_5,int64_t *param_6)
{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStackX_10;
  int64_t *aplStackX_18 [2];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  int32_t local_var_40;
  plVar4 = (int64_t *)0x0;
  plStackX_10 = (int64_t *)0x0;
  aplStackX_18[0] = (int64_t *)0x0;
  local_var_48 = 0;
  local_var_40 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_54 = 0;
  local_var_50 = 0;
  local_var_4c = 0x3f800000;
  local_var_78 = 0;
  local_var_74 = 0;
  local_var_70 = 0;
  local_var_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&processed_var_8672_ptr);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = UtilitiesSystem_c4940(param_3,param_6,&processed_var_8792_ptr,&plStackX_10);
    bVar3 = UtilitiesSystem_c4940(param_3,param_6,&processed_var_8800_ptr,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto UtilitiesSystem_f2795;
  }
  plVar4 = (int64_t *)UtilitiesSystem_e3cd0(*param_5,plVar7,&local_var_58,plVar6,&local_var_78);
  if (plVar4 != (int64_t *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
UtilitiesSystem_f2795:
  param_2[1] = plVar4;
  *param_2 = &processed_var_9392_ptr;
  param_2[2] = plVar4;
  return param_2;
}
// 函数: void UtilitiesSystem_f2722(void)
void UtilitiesSystem_f2722(void)
{
  int64_t *plVar1;
  uint64_t *unaff_RSI;
  int64_t *unaff_R12;
  int64_t *unaff_R15;
  uint64_t *local_buffer_d0;
  plVar1 = (int64_t *)UtilitiesSystem_e3cd0(*local_buffer_d0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &processed_var_9392_ptr;
  unaff_RSI[2] = plVar1;
  return;
}
// 函数: void UtilitiesSystem_f2795(void)
void UtilitiesSystem_f2795(void)
{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &processed_var_9392_ptr;
  unaff_RSI[2] = unaff_RDI;
  return;
}
uint64_t *
UtilitiesSystem_f27c0(int64_t *param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4,
             uint64_t *param_5,int64_t *param_6)
{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStackX_10;
  int64_t *aplStackX_18 [2];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  int32_t local_var_40;
  plVar4 = (int64_t *)0x0;
  plStackX_10 = (int64_t *)0x0;
  aplStackX_18[0] = (int64_t *)0x0;
  local_var_48 = 0;
  local_var_40 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_54 = 0;
  local_var_50 = 0;
  local_var_4c = 0x3f800000;
  local_var_78 = 0;
  local_var_74 = 0;
  local_var_70 = 0;
  local_var_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&processed_var_8672_ptr);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = UtilitiesSystem_c4940(param_3,param_6,&processed_var_8792_ptr,&plStackX_10);
    bVar3 = UtilitiesSystem_c4940(param_3,param_6,&processed_var_8800_ptr,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto UtilitiesSystem_f28f5;
  }
  plVar4 = (int64_t *)UtilitiesSystem_eb180(*param_5,plVar7,&local_var_58,plVar6,&local_var_78);
  if (plVar4 != (int64_t *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
UtilitiesSystem_f28f5:
  param_2[1] = plVar4;
  *param_2 = &processed_var_9408_ptr;
  param_2[2] = plVar4;
  return param_2;
}
// 函数: void UtilitiesSystem_f2882(void)
void UtilitiesSystem_f2882(void)
{
  int64_t *plVar1;
  uint64_t *unaff_RSI;
  int64_t *unaff_R12;
  int64_t *unaff_R15;
  uint64_t *local_buffer_d0;
  plVar1 = (int64_t *)UtilitiesSystem_eb180(*local_buffer_d0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &processed_var_9408_ptr;
  unaff_RSI[2] = plVar1;
  return;
}