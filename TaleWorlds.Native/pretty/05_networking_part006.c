#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part006.c - 31 个函数

// 函数: void FUN_180847110(uint64_t param_1,uint64_t *param_2)
void FUN_180847110(uint64_t param_1,uint64_t *param_2)

{
  int iVar1;
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
    DataTransformer(0x1f,0xd,param_1,&ui_system_data_1312_ptr);
  }
  *param_2 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_140);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&uStack_148,uStack_140), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_130), iVar1 == 0)) {
    lStack_138 = 0;
    if (lStack_130 != 0) {
      lStack_138 = lStack_130 + -8;
    }
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    AdvancedSystemProcessor(&uStack_148);
  }
  *param_2 = *(uint64_t *)(lStack_138 + 0x30);
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847230(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180847230(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  iVar1 = FUN_180840790();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemDataProcessor(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,0xc,param_1,&processed_var_696_ptr);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_168);
}





// 函数: void FUN_180847274(void)
void FUN_180847274(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = SystemDataProcessor(&stack0x00000030,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xc);
}





// 函数: void FUN_1808472ec(void)
void FUN_1808472ec(void)

{
  uint64_t in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000130 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847310(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_180847310(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  iVar1 = FUN_18083ff70();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = SystemDataProcessor(auStack_138,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_138 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_138 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_3);
    puStack_148 = auStack_138;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&processed_var_664_ptr);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_168);
}





// 函数: void FUN_180847354(void)
void FUN_180847354(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  
  iVar1 = SystemDataProcessor(&stack0x00000030,0x100);
  iVar2 = SystemDataProcessor(&stack0x00000030 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000030 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xb);
}





// 函数: void FUN_1808473cc(void)
void FUN_1808473cc(void)

{
  uint64_t in_stack_00000130;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000130 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808473f0(int32_t param_1,int32_t *param_2,int32_t *param_3)
void FUN_1808473f0(int32_t param_1,int32_t *param_2,int32_t *param_3)

{
  int iVar1;
  int8_t auStack_188 [48];
  uint64_t uStack_158;
  uint64_t uStack_150;
  int64_t lStack_148;
  int64_t alStack_140 [33];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  if (param_2 != (int32_t *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int32_t *)0x0) {
    *param_3 = 0;
  }
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    lStack_148 = 0;
    if (alStack_140[0] != 0) {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_18084749d;
  FUN_1808682e0(lStack_148,param_2,param_3);
LAB_18084749d:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847550(int64_t param_1,uint64_t *param_2,int8_t param_3)
void FUN_180847550(int64_t param_1,uint64_t *param_2,int8_t param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  byte bVar5;
  void *puVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  int8_t auStack_58 [32];
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  if (*(int *)(param_1 + 0x58) < 1) {
    puVar6 = &system_buffer_ptr;
  }
  else {
    puVar6 = *(void **)(param_1 + 0x50);
  }
  *param_2 = puVar6;
  uStack_38 = *(int32_t *)(param_1 + 0x10);
  uStack_34 = *(int32_t *)(param_1 + 0x14);
  uStack_30 = *(int32_t *)(param_1 + 0x18);
  uStack_2c = *(int32_t *)(param_1 + 0x1c);
  uVar7 = FUN_18084dc20(&uStack_38);
  param_2[1] = uVar7;
  *(int32_t *)(param_2 + 2) = *(int32_t *)(param_1 + 0x38);
  *(int32_t *)((int64_t)param_2 + 0x14) = *(int32_t *)(param_1 + 0x3c);
  *(int32_t *)(param_2 + 3) = *(int32_t *)(param_1 + 0x4c);
  *(int32_t *)((int64_t)param_2 + 0x1c) = *(int32_t *)(param_1 + 0x30);
  *(int32_t *)(param_2 + 4) = 0;
  uVar1 = *(int32_t *)(param_1 + 0x14);
  uVar2 = *(int32_t *)(param_1 + 0x18);
  uVar3 = *(int32_t *)(param_1 + 0x1c);
  *(int32_t *)((int64_t)param_2 + 0x24) = *(int32_t *)(param_1 + 0x10);
  *(int32_t *)(param_2 + 5) = uVar1;
  *(int32_t *)((int64_t)param_2 + 0x2c) = uVar2;
  *(int32_t *)(param_2 + 6) = uVar3;
  cVar4 = func_0x000180894c50(param_1,param_3);
  uVar8 = ((uint)(cVar4 != '\0') | *(uint *)(param_2 + 4)) & ~(uint)(cVar4 == '\0');
  *(uint *)(param_2 + 4) = uVar8;
  uVar9 = 2;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar9 = 0;
  }
  uVar9 = (-(uint)(*(int *)(param_1 + 0x30) != 0) & 2 | uVar8) & ~uVar9;
  *(uint *)(param_2 + 4) = uVar9;
  bVar5 = *(byte *)(param_1 + 0x34) & 1;
  uVar9 = ~((bVar5 ^ 1) << 2) & ((uint)bVar5 << 2 | uVar9);
  *(uint *)(param_2 + 4) = uVar9;
  bVar5 = (byte)(*(uint *)(param_1 + 0x34) >> 3) & 1;
  uVar9 = ~((bVar5 ^ 1) << 3) & ((uint)bVar5 << 3 | uVar9);
  *(uint *)(param_2 + 4) = uVar9;
  bVar5 = (byte)(*(uint *)(param_1 + 0x34) >> 5) & 1;
  *(uint *)(param_2 + 4) = ~((bVar5 ^ 1) << 4) & ((uint)bVar5 << 4 | uVar9);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847690(uint64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_180847690(uint64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_188 [32];
  int8_t *puStack_168;
  uint64_t auStack_158 [2];
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  iVar1 = func_0x00018088c590(param_1,auStack_158);
  if (iVar1 == 0) {
    puStack_168 = (int8_t *)param_5;
    iVar1 = FUN_18087cbd0(auStack_158[0],param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_1808477fa;
  }
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    iVar2 = func_0x00018074b7d0(auStack_148,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(auStack_148 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(auStack_148 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_148 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_148 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_5);
    puStack_168 = auStack_148;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&memory_allocator_384_ptr);
  }
LAB_1808477fa:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_188);
}





// 函数: void FUN_180847710(void)
void FUN_180847710(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  int32_t unaff_EBP;
  int32_t unaff_ESI;
  int32_t unaff_R14D;
  
  iVar1 = func_0x00018074b7d0(&stack0x00000040,0x100,unaff_EBX);
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_EBP);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = func_0x00018074b800(&stack0x00000040 + iVar1,0x100 - iVar1,unaff_R14D);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(&stack0x00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  func_0x00018074bda0(&stack0x00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
                    // WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,0xb);
}





// 函数: void FUN_1808477f4(void)
void FUN_1808477f4(void)

{
  uint64_t in_stack_00000140;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000140 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * SystemCoreProcessor(void)

{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < network_system_config) {
    SystemInitializer(&system_ptr_ea90);
    if (network_system_config == -1) {
      network_system_config = 0;
      uRam0000000180c4ea84 = 0;
      uRam0000000180c4ea88 = 0;
      uRam0000000180c4ea8c = 0;
      FUN_1808fcb30(&system_ptr_ea90);
    }
  }
  return &system_ptr_ea80;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847890(uint64_t param_1,int8_t *param_2)
void FUN_180847890(uint64_t param_1,int8_t *param_2)

{
  int iVar1;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  uint64_t uStack_138;
  int64_t lStack_130;
  uint64_t uStack_128;
  int64_t lStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  if (param_2 == (int8_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_168);
    }
    FUN_18074be30(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(0x1f,0xc,param_1,&processed_var_840_ptr);
  }
  *param_2 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  lStack_130 = 0;
  iVar1 = func_0x00018088c590(0,&lStack_130);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&uStack_138,lStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    uStack_128 = *(uint64_t *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    AdvancedSystemProcessor(&uStack_138);
  }
  FUN_1808479d0(uStack_128,*(uint64_t *)(lStack_130 + 800),param_2);
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808479d0(int64_t param_1,int64_t *param_2,byte *param_3)
void FUN_1808479d0(int64_t param_1,int64_t *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  byte bVar6;
  int8_t auStack_88 [32];
  void *puStack_68;
  char cStack_60;
  void *puStack_58;
  char cStack_50;
  int64_t *plStack_48;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  lVar4 = *(int64_t *)(param_1 + 0xd0);
  if ((*(uint *)(lVar4 + 4) >> 3 & 1) == 0) {
    bVar6 = 0;
    lVar4 = (**(code **)(*param_2 + 0x330))(param_2,param_1 + 0x50,1);
    if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
      SystemStateProcessor(param_1 + 0x50,&puStack_58);
    }
    cStack_60 = '\0';
    puStack_68 = &rendering_buffer_240_ptr;
    iVar3 = FUN_18084b5a0(&puStack_68,lVar4 + 0x80,param_2);
    if ((iVar3 != 0) || (iVar3 = FUN_18084b5a0(&puStack_68,lVar4 + 0x90,param_2), iVar3 != 0))
    goto LAB_180847c35;
    if (cStack_60 == '\0') {
      for (uVar5 = *(uint64_t *)(param_1 + 0x70);
          (*(uint64_t *)(param_1 + 0x70) <= uVar5 &&
          (uVar5 < (int64_t)*(int *)(param_1 + 0x78) * 0x10 + *(uint64_t *)(param_1 + 0x70)));
          uVar5 = uVar5 + 0x10) {
        lVar4 = (**(code **)(*param_2 + 0x150))(param_2,uVar5,1);
        if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
          SystemStateProcessor(uVar5,&puStack_58);
        }
        iVar3 = FUN_18084b5a0(&puStack_68,lVar4 + 0x80,param_2);
        if ((iVar3 != 0) || (iVar3 = FUN_18084b5a0(&puStack_68,lVar4 + 0x90,param_2), iVar3 != 0))
        goto LAB_180847c35;
        if (cStack_60 != '\0') goto LAB_180847bfb;
      }
      for (uVar5 = *(uint64_t *)(param_1 + 0x80);
          (*(uint64_t *)(param_1 + 0x80) <= uVar5 &&
          (uVar5 < (int64_t)*(int *)(param_1 + 0x88) * 0x10 + *(uint64_t *)(param_1 + 0x80)));
          uVar5 = uVar5 + 0x10) {
        lVar4 = (**(code **)(*param_2 + 0x270))(param_2,uVar5,1);
        if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
          SystemStateProcessor(uVar5,&puStack_58);
        }
        lVar4 = FUN_18083fb90(param_2,lVar4 + 0x38);
        if (lVar4 == 0) goto LAB_180847c35;
        cVar1 = func_0x00018084dda0(lVar4);
        if (cVar1 != '\0') goto LAB_180847bfb;
      }
      cStack_50 = '\0';
      puStack_58 = &rendering_buffer_272_ptr;
      plStack_48 = param_2;
      iVar3 = FUN_18084b990(&puStack_58,param_1,param_2);
      if ((iVar3 != 0) || (iVar3 = FUN_18084be00(&puStack_58,param_1,param_2), iVar3 != 0))
      goto LAB_180847c35;
      bVar2 = 1;
      if (cStack_50 != '\0') goto LAB_180847bfb;
    }
    else {
LAB_180847bfb:
      bVar2 = 0;
      bVar6 = 1;
    }
    *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4) =
         ((uint)bVar6 << 2 | *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4)) & ~((uint)bVar2 << 2) | 8
    ;
    lVar4 = *(int64_t *)(param_1 + 0xd0);
  }
  *param_3 = (byte)(*(uint *)(lVar4 + 4) >> 2) & 1;
LAB_180847c35:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847c60(int64_t param_1,int64_t *param_2,byte *param_3)
void FUN_180847c60(int64_t param_1,int64_t *param_2,byte *param_3)

{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  byte bVar7;
  int8_t auStack_98 [32];
  void *puStack_78;
  int16_t uStack_70;
  int64_t *plStack_68;
  int8_t auStack_60 [40];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  lVar4 = *(int64_t *)(param_1 + 0xd0);
  if ((*(uint *)(lVar4 + 4) >> 7 & 1) == 0) {
    bVar7 = ~(byte)(*(uint *)(param_1 + 0xf8) >> 1) & 1;
    if (bVar7 != 0) {
      uStack_70 = 1;
      puStack_78 = &ui_system_data_144_ptr;
      plStack_68 = param_2;
      iVar2 = FUN_18084b990(&puStack_78,param_1,param_2);
      if (iVar2 != 0) goto LAB_180847dc9;
      bVar7 = (byte)uStack_70;
      if ((byte)uStack_70 != 0) {
        lVar4 = (**(code **)(*param_2 + 0x2f0))(param_2,param_1 + 0x30);
        if (lVar4 == 0) {
                    // WARNING: Subroutine does not return
          SystemStateProcessor(param_1 + 0x30,auStack_60);
        }
        plVar5 = (int64_t *)(lVar4 + 0x58);
        if (((int64_t *)*plVar5 == plVar5) && (*(int64_t **)(lVar4 + 0x60) == plVar5)) {
          for (puVar1 = *(uint64_t **)(lVar4 + 0x68); puVar1 != (uint64_t *)(lVar4 + 0x68);
              puVar1 = (uint64_t *)*puVar1) {
            if ((((*(int *)(puVar1 + 4) != 0) || (*(int *)((int64_t)puVar1 + 0x24) != 0)) ||
                (*(int *)(puVar1 + 5) != 0)) || (*(int *)((int64_t)puVar1 + 0x2c) != 0)) {
              lVar6 = func_0x00018084d0b0(lVar4);
              if (lVar6 == 0) goto LAB_180847dc9;
              if (*(uint *)(lVar6 + 0x20) < *(uint *)((int64_t)puVar1 + 0x34)) goto LAB_180847d83;
            }
            if (puVar1 == (uint64_t *)(lVar4 + 0x68)) break;
          }
          bVar7 = 1;
        }
        else {
LAB_180847d83:
          bVar7 = 0;
        }
      }
    }
    uVar3 = 0x40;
    if (bVar7 != 0) {
      uVar3 = 0;
    }
    *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4) =
         (-(uint)(bVar7 != 0) & 0x40 | *(uint *)(*(int64_t *)(param_1 + 0xd0) + 4)) & ~uVar3 | 0x80
    ;
    lVar4 = *(int64_t *)(param_1 + 0xd0);
  }
  *param_3 = (byte)(*(uint *)(lVar4 + 4) >> 6) & 1;
LAB_180847dc9:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847df0(uint64_t param_1,int8_t *param_2)
void FUN_180847df0(uint64_t param_1,int8_t *param_2)

{
  int iVar1;
  int8_t auStack_168 [32];
  int8_t *puStack_148;
  uint64_t uStack_138;
  int64_t lStack_130;
  uint64_t uStack_128;
  int64_t lStack_120;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  if (param_2 == (int8_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_168);
    }
    FUN_18074be30(auStack_118,0x100,0);
    puStack_148 = auStack_118;
                    // WARNING: Subroutine does not return
    DataTransformer(0x1f,0xc,param_1,&processed_var_808_ptr);
  }
  *param_2 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  lStack_130 = 0;
  iVar1 = func_0x00018088c590(0,&lStack_130);
  if (((iVar1 == 0) && (iVar1 = SystemSecurityProcessor(&uStack_138,lStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1 & 0xffffffff,&lStack_120), iVar1 == 0)) {
    uStack_128 = *(uint64_t *)(lStack_120 + 8);
  }
  else if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    AdvancedSystemProcessor(&uStack_138);
  }
  FUN_180847c60(uStack_128,*(uint64_t *)(lStack_130 + 800),param_2);
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStack_138);
}



bool FUN_180847f30(uint64_t param_1)

{
  int iVar1;
  int8_t auStackX_8 [32];
  
  iVar1 = func_0x00018088c530(param_1,auStackX_8);
  return iVar1 == 0;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180847f60(uint64_t param_1)
void FUN_180847f60(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  int8_t auStack_168 [48];
  int64_t alStack_138 [2];
  uint64_t *apuStack_128 [34];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  alStack_138[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_180848016;
    iVar2 = SystemSecurityProcessor(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180847fc4;
  }
  else {
LAB_180847fc4:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_138[0] + 0x98),apuStack_128,0x18), iVar1 == 0))
  {
    *apuStack_128[0] = &processed_var_7896_ptr;
    *(int32_t *)(apuStack_128[0] + 1) = 0x18;
    *(int *)(apuStack_128[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(uint64_t *)(alStack_138[0] + 0x98));
  }
LAB_180848016:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_138 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180848090(uint64_t param_1,int64_t param_2,int32_t param_3,uint64_t *param_4)
void FUN_180848090(uint64_t param_1,int64_t param_2,int32_t param_3,uint64_t *param_4)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int8_t auStack_1a8 [32];
  int8_t *puStack_188;
  int32_t uStack_178;
  uint64_t uStack_170;
  int64_t lStack_168;
  uint64_t *puStack_160;
  int8_t auStack_158 [256];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1a8;
  uStack_178 = param_3;
  if (((param_4 == (uint64_t *)0x0) || (*param_4 = 0, param_2 == 0)) ||
     (iVar2 = func_0x00018076b690(param_2), 0x1ff < iVar2)) {
    uVar1 = uStack_178;
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_1a8);
    }
    iVar2 = SystemDataProcessor(auStack_158,0x100,param_2);
    iVar3 = SystemDataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x00018074b800(auStack_158 + iVar2,0x100 - iVar2,uVar1);
    iVar2 = iVar2 + iVar3;
    iVar3 = SystemDataProcessor(auStack_158 + iVar2,0x100 - iVar2,&system_temp_buffer);
    func_0x00018074bda0(auStack_158 + (iVar2 + iVar3),0x100 - (iVar2 + iVar3),param_4);
    puStack_188 = auStack_158;
                    // WARNING: Subroutine does not return
    DataTransformer(0x1f,0xb,param_1,&rendering_buffer_2000_ptr);
  }
  uStack_170 = 0;
  iVar3 = func_0x00018088c590(param_1 & 0xffffffff,&lStack_168);
  if (iVar3 == 0) {
    if ((*(uint *)(lStack_168 + 0x24) >> 1 & 1) == 0) goto LAB_180848132;
    iVar4 = SystemSecurityProcessor(&uStack_170);
    if (iVar4 == 0) goto LAB_18084820e;
  }
  else {
LAB_18084820e:
    iVar4 = iVar3;
  }
  if ((iVar4 == 0) &&
     (iVar3 = FUN_18088dec0(*(uint64_t *)(lStack_168 + 0x98),&puStack_160,0x218), iVar3 == 0)) {
    *puStack_160 = &ui_system_data_1896_ptr;
    *(int32_t *)(puStack_160 + 2) = 0;
    *(int32_t *)(puStack_160 + 1) = 0x218;
    *(int32_t *)((int64_t)puStack_160 + 0x14) = uStack_178;
                    // WARNING: Subroutine does not return
    memcpy(puStack_160 + 3,param_2,(int64_t)(iVar2 + 1));
  }
LAB_180848132:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStack_170);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808482f0(uint64_t param_1)
void FUN_1808482f0(uint64_t param_1)

{
  int iVar1;
  int iVar2;
  int8_t auStack_168 [48];
  int64_t alStack_138 [2];
  uint64_t *apuStack_128 [34];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  alStack_138[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808483a6;
    iVar2 = SystemSecurityProcessor(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180848354;
  }
  else {
LAB_180848354:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_138[0] + 0x98),apuStack_128,0x18), iVar1 == 0))
  {
    *apuStack_128[0] = &memory_allocator_3872_ptr;
    *(int32_t *)(apuStack_128[0] + 1) = 0x18;
    *(int *)(apuStack_128[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(uint64_t *)(alStack_138[0] + 0x98));
  }
LAB_1808483a6:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_138 + 1);
}





// 函数: void FUN_180848440(int64_t param_1,uint64_t param_2)
void FUN_180848440(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088ee20(param_2,param_1 + 0x18);
  }
  return;
}





// 函数: void FUN_180848480(int64_t param_1,uint64_t param_2)
void FUN_180848480(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      FUN_18088ee20(param_2,param_1 + 0x1c);
    }
  }
  return;
}





// 函数: void FUN_1808484d0(int64_t param_1,uint64_t param_2)
void FUN_1808484d0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_18088f1a0(param_2,param_1 + 0x1c);
      if (iVar1 == 0) {
        FUN_18088ee60(param_2,param_1 + 0x2c);
      }
    }
  }
  return;
}



uint64_t FUN_180848530(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  
  uVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_18088ee20(param_2,auStackX_8);
    if ((int)uVar1 == 0) {
      *(int32_t *)(param_1 + 0x18) = auStackX_8[0];
      uVar1 = 0;
    }
  }
  return uVar1;
}





// 函数: void FUN_180848590(int64_t param_1,uint64_t param_2)
void FUN_180848590(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088f010(param_2,param_1 + 0x18);
  }
  return;
}





// 函数: void FUN_1808485d0(int64_t param_1,uint64_t param_2)
void FUN_1808485d0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088f470(param_2,param_1 + 0x18);
  }
  return;
}





// 函数: void FUN_180848610(int64_t param_1,uint64_t param_2)
void FUN_180848610(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088eea0(param_2,param_1 + 0x18);
  }
  return;
}





// 函数: void FUN_180848650(int64_t param_1,uint64_t param_2)
void FUN_180848650(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088ee60(param_2,param_1 + 0x18);
  }
  return;
}





// 函数: void FUN_180848690(int64_t param_1,uint64_t param_2)
void FUN_180848690(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088ee20(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      FUN_18088ee60(param_2,param_1 + 0x1c);
    }
  }
  return;
}





// 函数: void FUN_1808486e0(int64_t param_1,uint64_t param_2)
void FUN_1808486e0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    FUN_18088f050(param_2,param_1 + 0x18);
  }
  return;
}





// 函数: void FUN_180848720(int64_t param_1,uint64_t param_2)
void FUN_180848720(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f310(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_18088eea0(param_2,param_1 + 0x20);
      if (iVar1 == 0) {
        FUN_18088f470(param_2,param_1 + 0x24);
      }
    }
  }
  return;
}





// 函数: void FUN_180848780(int64_t param_1,uint64_t param_2)
void FUN_180848780(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f310(param_2,param_1 + 0x18);
    if (iVar1 == 0) {
      iVar1 = FUN_18088f4d0(param_2,param_1 + 0x25,0x80);
      if (iVar1 == 0) {
        FUN_18088f470(param_2,param_1 + 0x24);
      }
    }
  }
  return;
}





// 函数: void FUN_1808487e0(int64_t param_1,uint64_t param_2)
void FUN_1808487e0(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_18088ee60(param_2,param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_18088f4d0(param_2,param_1 + 0x28,0x80);
    if (iVar1 == 0) {
      iVar1 = FUN_18088eea0(param_2,param_1 + 0x18);
      if (iVar1 == 0) {
        FUN_18088f470(param_2,param_1 + 0x1c);
      }
    }
  }
  return;
}





