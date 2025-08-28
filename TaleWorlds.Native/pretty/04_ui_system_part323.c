#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part323.c - 16 个函数

// 函数: void FUN_1808442d0(int64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_1808442d0(int64_t param_1,uint64_t param_2,int32_t param_3)

{
  FUN_18083f7b0(param_2,param_3,&unknown_var_3176_ptr,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x14));
  return;
}



int FUN_180844300(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *(int32_t *)(param_1 + 0x10);
  uStack_14 = *(int32_t *)(param_1 + 0x14);
  uStack_10 = *(int32_t *)(param_1 + 0x18);
  uStack_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar2 = SystemDataProcessor(param_2,param_3,&unknown_var_664_ptr);
  iVar3 = SystemDataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_1808443b0(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *(int32_t *)(param_1 + 0x10);
  uStack_14 = *(int32_t *)(param_1 + 0x14);
  uStack_10 = *(int32_t *)(param_1 + 0x18);
  uStack_c = *(int32_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x20);
  iVar2 = SystemDataProcessor(param_2,param_3,&unknown_var_160_ptr);
  iVar3 = SystemDataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074b650(iVar2 + param_2,param_3 - iVar2,&uStack_18);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b800(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180844460(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  uint64_t uStack_18;
  
  uStack_48 = *(uint64_t *)(param_1 + 0x10);
  uStack_40 = *(uint64_t *)(param_1 + 0x18);
  uVar1 = *(int32_t *)(param_1 + 0x4c);
  uStack_38 = *(uint64_t *)(param_1 + 0x20);
  uStack_30 = *(uint64_t *)(param_1 + 0x28);
  uVar2 = *(int32_t *)(param_1 + 0x48);
  uStack_28 = *(int32_t *)(param_1 + 0x30);
  uStack_24 = *(int32_t *)(param_1 + 0x34);
  uStack_20 = *(int32_t *)(param_1 + 0x38);
  uStack_1c = *(int32_t *)(param_1 + 0x3c);
  uStack_18 = *(uint64_t *)(param_1 + 0x40);
  iVar3 = SystemDataProcessor(param_2,param_3,&unknown_var_2256_ptr);
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018088ecd0(iVar3 + param_2,param_3 - iVar3,&uStack_48);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180844570(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(int32_t *)(param_1 + 0x10);
  uVar2 = *(int32_t *)(param_1 + 0x14);
  iVar3 = SystemDataProcessor(param_2,param_3,&unknown_var_2000_ptr);
  iVar4 = SystemDataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,param_1 + 0x18);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180844650(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(int32_t *)(param_1 + 0x24);
  uVar2 = *(int32_t *)(param_1 + 0x20);
  uVar3 = *(int32_t *)(param_1 + 0x1c);
  uVar4 = *(int32_t *)(param_1 + 0x18);
  uVar5 = *(uint64_t *)(param_1 + 0x10);
  iVar6 = SystemDataProcessor(param_2,param_3,&unknown_var_2128_ptr);
  iVar7 = SystemDataProcessor(param_2 + iVar6,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = func_0x00018074bda0(iVar6 + param_2,param_3 - iVar6,uVar5);
  iVar6 = iVar6 + iVar7;
  iVar7 = SystemDataProcessor(iVar6 + param_2,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = func_0x00018074b7d0(iVar6 + param_2,param_3 - iVar6,uVar4);
  iVar6 = iVar6 + iVar7;
  iVar7 = SystemDataProcessor(iVar6 + param_2,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = func_0x00018074b7d0(iVar6 + param_2,param_3 - iVar6,uVar3);
  iVar6 = iVar6 + iVar7;
  iVar7 = SystemDataProcessor(iVar6 + param_2,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = func_0x00018074b800(iVar6 + param_2,param_3 - iVar6,uVar2);
  iVar6 = iVar6 + iVar7;
  iVar7 = SystemDataProcessor(iVar6 + param_2,param_3 - iVar6,&system_temp_buffer);
  iVar6 = iVar6 + iVar7;
  iVar7 = func_0x00018074b800(iVar6 + param_2,param_3 - iVar6,uVar1);
  return iVar7 + iVar6;
}



int FUN_1808447d0(int64_t param_1,int64_t param_2,int param_3)

{
  int8_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_48 = *(uint64_t *)(param_1 + 0x44);
  uStack_28 = *(int32_t *)(param_1 + 0x24);
  uStack_24 = *(int32_t *)(param_1 + 0x28);
  uStack_20 = *(int32_t *)(param_1 + 0x2c);
  uStack_1c = *(int32_t *)(param_1 + 0x30);
  uStack_40 = *(int32_t *)(param_1 + 0x4c);
  uVar1 = *(int8_t *)(param_1 + 0x50);
  uVar2 = *(int32_t *)(param_1 + 0x10);
  uStack_38 = *(uint64_t *)(param_1 + 0x14);
  uStack_30 = *(uint64_t *)(param_1 + 0x1c);
  uStack_18 = *(int32_t *)(param_1 + 0x34);
  uStack_14 = *(int32_t *)(param_1 + 0x38);
  uStack_10 = *(int32_t *)(param_1 + 0x3c);
  uStack_c = *(int32_t *)(param_1 + 0x40);
  iVar3 = SystemDataProcessor(param_2,param_3,&unknown_var_1728_ptr);
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18088ebb0(iVar3 + param_2,param_3 - iVar3,&uStack_38);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074b6f0(iVar3 + param_2,param_3 - iVar3,&uStack_48);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_180844910(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(int32_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x14);
  iVar3 = SystemDataProcessor(param_2,param_3,&unknown_var_1864_ptr);
  iVar4 = SystemDataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b7d0(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



int FUN_1808449c0(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar2 = SystemDataProcessor(param_2,param_3,&unknown_var_1600_ptr);
  iVar3 = SystemDataProcessor(param_2 + iVar2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = func_0x00018074b7d0(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180844a30(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int8_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uStackX_8;
  
  uStackX_8 = *(uint64_t *)(param_1 + 0x10);
  uVar2 = *(int8_t *)(param_1 + 0x1c);
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar3 = SystemDataProcessor(param_2,param_3,&unknown_var_904_ptr);
  iVar4 = SystemDataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18088ece0(iVar3 + param_2,param_3 - iVar3,&uStackX_8);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180844b20(int64_t param_1,int64_t param_2,int param_3)

{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t uStackX_8;
  
  uStackX_8 = *(uint64_t *)(param_1 + 0x10);
  uVar1 = *(int8_t *)(param_1 + 0x1c);
  iVar2 = SystemDataProcessor(param_2,param_3,&unknown_var_1040_ptr);
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18088ece0(iVar2 + param_2,param_3 - iVar2,&uStackX_8);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0x1d);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180844c00(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int8_t uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(int8_t *)(param_1 + 0x14);
  uVar1 = *(int32_t *)(param_1 + 0x10);
  iVar3 = SystemDataProcessor(param_2,param_3,&unknown_var_1320_ptr);
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,param_1 + 0x20);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = FUN_18074be90(iVar3 + param_2,param_3 - iVar3,uVar2);
  return iVar4 + iVar3;
}



int FUN_180844d00(int64_t param_1,int64_t param_2,int param_3)

{
  int8_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(int8_t *)(param_1 + 0x14);
  iVar2 = SystemDataProcessor(param_2,param_3,&unknown_var_1456_ptr);
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0x20);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,param_1 + 0xa0);
  iVar2 = iVar2 + iVar3;
  iVar3 = SystemDataProcessor(iVar2 + param_2,param_3 - iVar2,&system_temp_buffer);
  iVar2 = iVar2 + iVar3;
  iVar3 = FUN_18074be90(iVar2 + param_2,param_3 - iVar2,uVar1);
  return iVar3 + iVar2;
}



int FUN_180844e10(int64_t param_1,int64_t param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = SystemDataProcessor(param_2,param_3,&unknown_var_2512_ptr);
  iVar2 = SystemDataProcessor(param_2 + iVar1,param_3 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_2,param_3 - iVar1,param_1 + 0x10);
  return iVar2 + iVar1;
}



int FUN_180844e90(int64_t param_1,int64_t param_2,int param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(int32_t *)(param_1 + 0x10);
  uVar1 = *(int32_t *)(param_1 + 0x18);
  iVar3 = SystemDataProcessor(param_2,param_3,&unknown_var_128_ptr);
  iVar4 = SystemDataProcessor(param_2 + iVar3,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b800(iVar3 + param_2,param_3 - iVar3,uVar2);
  iVar3 = iVar3 + iVar4;
  iVar4 = SystemDataProcessor(iVar3 + param_2,param_3 - iVar3,&system_temp_buffer);
  iVar3 = iVar3 + iVar4;
  iVar4 = func_0x00018074b830(iVar3 + param_2,param_3 - iVar3,uVar1);
  return iVar4 + iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180844f40(uint64_t param_1,uint64_t *param_2)
void FUN_180844f40(uint64_t param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  uint64_t uStack_148;
  uint64_t uStack_140;
  int64_t lStack_138;
  int64_t lStack_130;
  int8_t auStack_128 [256];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&unknown_var_1112_ptr);
  }
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar5 = func_0x00018088c590(0,&uStack_140);
  if (((iVar5 == 0) && (iVar5 = FUN_18088c740(&uStack_148,uStack_140), iVar5 == 0)) &&
     (iVar5 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar5 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar5 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
  uVar4 = *(uint64_t *)(lStack_138 + 0x40);
  *param_2 = *(uint64_t *)(lStack_138 + 0x38);
  param_2[1] = uVar4;
  uVar1 = *(int32_t *)(lStack_138 + 0x4c);
  uVar2 = *(int32_t *)(lStack_138 + 0x50);
  uVar3 = *(int32_t *)(lStack_138 + 0x54);
  *(int32_t *)(param_2 + 2) = *(int32_t *)(lStack_138 + 0x48);
  *(int32_t *)((int64_t)param_2 + 0x14) = uVar1;
  *(int32_t *)(param_2 + 3) = uVar2;
  *(int32_t *)((int64_t)param_2 + 0x1c) = uVar3;
  uVar1 = *(int32_t *)(lStack_138 + 0x5c);
  uVar2 = *(int32_t *)(lStack_138 + 0x60);
  uVar3 = *(int32_t *)(lStack_138 + 100);
  *(int32_t *)(param_2 + 4) = *(int32_t *)(lStack_138 + 0x58);
  *(int32_t *)((int64_t)param_2 + 0x24) = uVar1;
  *(int32_t *)(param_2 + 5) = uVar2;
  *(int32_t *)((int64_t)param_2 + 0x2c) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180845090(uint64_t param_1,int64_t param_2)
void FUN_180845090(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  uint64_t uStack_138;
  int64_t lStack_130;
  int8_t auStack_128 [256];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  if (param_2 == 0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
      func_0x00018074bda0(auStack_128,0x100,0);
      puStack_148 = auStack_128;
                    // WARNING: Subroutine does not return
      FUN_180749ef0(0x1f,0xb,param_1,&unknown_var_512_ptr);
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_168);
  }
  uStack_138 = 0;
  iVar1 = func_0x00018088c590(param_1,&lStack_130);
  if (iVar1 == 0) {
    if ((*(uint *)(lStack_130 + 0x24) >> 1 & 1) == 0) {
                    // WARNING: Subroutine does not return
      FUN_18088c790(&uStack_138);
    }
    iVar2 = FUN_18088c740(&uStack_138);
    if (iVar2 != 0) goto LAB_18084510c;
  }
  iVar2 = iVar1;
LAB_18084510c:
  if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_138);
  }
  func_0x0001808754e0(lStack_130,param_2);
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808451c0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1808451c0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  iVar1 = FUN_18083fc50();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemDataProcessor(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_544_ptr);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_168);
}





// 函数: void FUN_180845204(void)
void FUN_180845204(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = SystemDataProcessor(&stack0x00000030,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xb);
}





// 函数: void FUN_18084527c(void)
void FUN_18084527c(void)

{
  uint64_t in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000130 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808452a0(uint64_t param_1,int32_t *param_2,uint64_t param_3)
void FUN_1808452a0(uint64_t param_1,int32_t *param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t alStack_148 [2];
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if ((iVar1 == 0) && ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0)) {
    iVar1 = 0x4b;
  }
  else if ((iVar1 == 0) && (iVar1 = FUN_180879a60(alStack_148[0],param_2,param_3), iVar1 == 0))
  goto LAB_1808453a2;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074bda0(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_158 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_5520_ptr);
  }
LAB_1808453a2:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}





// 函数: void FUN_180845324(void)
void FUN_180845324(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = func_0x00018074bda0(&stack0x00000040,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xb);
}





// 函数: void FUN_18084539c(void)
void FUN_18084539c(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808453c0(uint64_t param_1,uint64_t *param_2)
void FUN_1808453c0(uint64_t param_1,uint64_t *param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t alStack_148 [2];
  uint64_t *apuStack_138 [2];
  int8_t auStack_128 [256];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xf,param_1,&unknown_var_9512_ptr);
  }
  *param_2 = 0;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084541c;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_180845484;
  }
  else {
LAB_180845484:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_9408_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    iVar1 = func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138[0]);
    if (iVar1 == 0) {
      *param_2 = apuStack_138[0][3];
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStack_148 + 1);
    }
  }
LAB_18084541c:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180845520(uint64_t param_1,uint64_t *param_2)
void FUN_180845520(uint64_t param_1,uint64_t *param_2)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t alStack_128 [2];
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  if (param_2 == (uint64_t *)0x0) {
    iVar1 = 0x1f;
  }
  else {
    *param_2 = 0;
    iVar1 = func_0x00018088c590(param_1,alStack_128);
    if (iVar1 == 0) {
      *param_2 = *(uint64_t *)(alStack_128[0] + 0x78);
      goto LAB_1808455bc;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_408_ptr);
  }
LAB_1808455bc:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808455f0(uint64_t param_1,uint64_t *param_2)
void FUN_1808455f0(uint64_t param_1,uint64_t *param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int64_t alStack_148 [2];
  uint64_t *apuStack_138 [2];
  int8_t auStack_128 [256];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&unknown_var_8256_ptr);
  }
  *param_2 = 0;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_180845652;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_1808456ba;
  }
  else {
LAB_1808456ba:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_8152_ptr;
    *(int32_t *)(apuStack_138[0] + 3) = 0;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    iVar1 = func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138[0]);
    if (iVar1 == 0) {
      *param_2 = (uint64_t)*(uint *)(apuStack_138[0] + 3);
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStack_148 + 1);
    }
  }
LAB_180845652:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_148 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180845c40(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180845c40(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  iVar1 = FUN_18083fde0();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemDataProcessor(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&unknown_var_416_ptr);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_168);
}





// 函数: void FUN_180845c84(void)
void FUN_180845c84(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = SystemDataProcessor(&stack0x00000030,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xb);
}





// 函数: void FUN_180845cfc(void)
void FUN_180845cfc(void)

{
  uint64_t in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000130 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180845d20(uint64_t param_1,int32_t *param_2,uint64_t *param_3)
void FUN_180845d20(uint64_t param_1,int32_t *param_2,uint64_t *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int iVar5;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  int64_t alStack_158 [2];
  uint64_t *apuStack_148 [2];
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  if ((param_3 == (uint64_t *)0x0) || (*param_3 = 0, param_2 == (int32_t *)0x0)) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_188);
    }
    iVar4 = FUN_18074bc50(auStack_138,0x100,param_2);
    iVar5 = SystemDataProcessor(auStack_138 + iVar4,0x100 - iVar4,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar4 + iVar5),0x100 - (iVar4 + iVar5),param_3);
    puStack_168 = auStack_138;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xb,param_1,&unknown_var_9904_ptr);
  }
  alStack_158[1] = 0;
  iVar4 = func_0x00018088c590(param_1,alStack_158);
  if (iVar4 == 0) {
    if ((*(uint *)(alStack_158[0] + 0x24) >> 1 & 1) == 0) goto LAB_180845d97;
    iVar5 = FUN_18088c740(alStack_158 + 1);
    if (iVar5 == 0) goto LAB_180845e35;
  }
  else {
LAB_180845e35:
    iVar5 = iVar4;
  }
  if ((iVar5 == 0) &&
     (iVar4 = FUN_18088dec0(*(uint64_t *)(alStack_158[0] + 0x98),apuStack_148,0x28), iVar4 == 0))
  {
    *apuStack_148[0] = &unknown_var_9800_ptr;
    *(int32_t *)(apuStack_148[0] + 4) = 0;
    *(int32_t *)(apuStack_148[0] + 1) = 0x28;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(int32_t *)(apuStack_148[0] + 2) = *param_2;
    *(int32_t *)((int64_t)apuStack_148[0] + 0x14) = uVar1;
    *(int32_t *)(apuStack_148[0] + 3) = uVar2;
    *(int32_t *)((int64_t)apuStack_148[0] + 0x1c) = uVar3;
    iVar4 = func_0x00018088e0d0(*(uint64_t *)(alStack_158[0] + 0x98),apuStack_148[0]);
    if (iVar4 == 0) {
      *param_3 = (uint64_t)*(uint *)(apuStack_148[0] + 4);
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStack_158 + 1);
    }
  }
LAB_180845d97:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_158 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



