#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part199.c - 2 个函数

// 函数: void FUN_18017dd60(uint64_t param_1,uint64_t param_2)
void FUN_18017dd60(uint64_t param_1,uint64_t param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  void *puStack_80;
  int32_t *puStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  
  puVar3 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x98,8,3);
  uVar6 = 0xfffffffffffffffe;
  puVar5 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar5 = &unknown_var_2008_ptr;
  plVar1 = puVar5 + 0xf;
  *plVar1 = (longlong)&unknown_var_720_ptr;
  puVar5[0x10] = 0;
  *(int32_t *)(puVar5 + 0x11) = 0;
  *plVar1 = (longlong)&unknown_var_3456_ptr;
  puVar5[0x12] = 0;
  puVar5[0x10] = 0;
  *(int32_t *)(puVar5 + 0x11) = 0;
  *(int8_t *)(puVar5 + 0xe) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_data_e968);
  puStack_80 = &unknown_var_3456_ptr;
  uStack_68 = 0;
  puStack_78 = (int32_t *)0x0;
  uStack_70 = 0;
  puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1f,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_78 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
  *puVar4 = 0x74726150;
  puVar4[1] = 0x206c6169;
  puVar4[2] = 0x656b6142;
  puVar4[3] = 0x726f4620;
  *(uint64_t *)(puVar4 + 4) = 0x746e657272754320;
  puVar4[6] = 0x76654c20;
  *(int16_t *)(puVar4 + 7) = 0x6c65;
  *(int8_t *)((longlong)puVar4 + 0x1e) = 0;
  uStack_70 = 0x1e;
  FUN_1803460a0(puVar3,&puStack_80,puVar3 + 0xe,0xb,uVar6);
  puStack_80 = &unknown_var_3456_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18017ee80(longlong *param_1)
void FUN_18017ee80(longlong *param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  
  lVar2 = _DAT_180c86870;
  plStackX_8 = param_1;
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,200,8,3,0xfffffffffffffffe);
  plStackX_8 = plVar3;
  FUN_180049830(plVar3);
  *plVar3 = (longlong)&unknown_var_7960_ptr;
  plVar3[0x18] = lVar2 + 0x38;
  plVar3[3] = -3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar1 = _DAT_180c82868;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_18005e110(uVar1,&plStackX_8);
                    // WARNING: Could not recover jumptable at 0x00018017ef34. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



