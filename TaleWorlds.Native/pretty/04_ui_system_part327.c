#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part327.c - 28 个函数

// 函数: void FUN_180849d40(uint64_t param_1,int64_t param_2,int32_t param_3)
void FUN_180849d40(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_1a8 [32];
  int8_t *puStack_188;
  uint64_t uStack_178;
  int64_t lStack_170;
  uint64_t *apuStack_168 [2];
  int8_t auStack_158 [256];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1a8;
  if ((param_2 == 0) || (iVar1 = func_0x00018076b690(param_2), 0x7f < iVar1)) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_1a8);
    }
    iVar1 = DataProcessor(auStack_158,0x100,param_2);
    iVar2 = DataProcessor(auStack_158 + iVar1,0x100 - iVar1,&system_temp_buffer);
    func_0x00018074b830(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    puStack_188 = auStack_158;
                    // WARNING: Subroutine does not return
    DataTransformer(0x1f,0xd,param_1,&unknown_var_8960_ptr);
  }
  uStack_178 = 0;
  iVar2 = func_0x00018088c590(param_1 & 0xffffffff,&lStack_170);
  if (iVar2 == 0) {
    if ((*(uint *)(lStack_170 + 0x24) >> 1 & 1) == 0) goto LAB_180849dd1;
    iVar3 = FUN_18088c740(&uStack_178);
    if (iVar3 == 0) goto LAB_180849e6f;
  }
  else {
LAB_180849e6f:
    iVar3 = iVar2;
  }
  if ((iVar3 == 0) &&
     (iVar2 = FUN_18088dec0(*(uint64_t *)(lStack_170 + 0x98),apuStack_168,0xa8), iVar2 == 0)) {
    *apuStack_168[0] = &unknown_var_8856_ptr;
    *(int32_t *)(apuStack_168[0] + 1) = 0xa8;
    *(int *)(apuStack_168[0] + 2) = (int)param_1;
                    // WARNING: Subroutine does not return
    memcpy(apuStack_168[0] + 5,param_2,(int64_t)(iVar1 + 1));
  }
LAB_180849dd1:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849f40(uint64_t param_1,int64_t param_2,int32_t param_3)
void FUN_180849f40(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t auStack_1a8 [32];
  int8_t *puStack_188;
  uint64_t uStack_178;
  int64_t lStack_170;
  uint64_t *apuStack_168 [2];
  int8_t auStack_158 [256];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1a8;
  if ((param_2 == 0) || (iVar1 = func_0x00018076b690(param_2), 0x7f < iVar1)) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_1a8);
    }
    iVar1 = DataProcessor(auStack_158,0x100,param_2);
    iVar2 = DataProcessor(auStack_158 + iVar1,0x100 - iVar1,&system_temp_buffer);
    func_0x00018074b830(auStack_158 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_3);
    puStack_188 = auStack_158;
                    // WARNING: Subroutine does not return
    DataTransformer(0x1f,0xb,param_1,&unknown_var_1320_ptr);
  }
  uStack_178 = 0;
  iVar2 = func_0x00018088c590(param_1 & 0xffffffff,&lStack_170);
  if (iVar2 == 0) {
    if ((*(uint *)(lStack_170 + 0x24) >> 1 & 1) == 0) goto LAB_180849fd1;
    iVar3 = FUN_18088c740(&uStack_178);
    if (iVar3 == 0) goto LAB_18084a06f;
  }
  else {
LAB_18084a06f:
    iVar3 = iVar2;
  }
  if ((iVar3 == 0) &&
     (iVar2 = FUN_18088dec0(*(uint64_t *)(lStack_170 + 0x98),apuStack_168,0xa0), iVar2 == 0)) {
    *apuStack_168[0] = &unknown_var_1216_ptr;
    *(int32_t *)(apuStack_168[0] + 1) = 0xa0;
                    // WARNING: Subroutine does not return
    memcpy(apuStack_168[0] + 4,param_2,(int64_t)(iVar1 + 1));
  }
LAB_180849fd1:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStack_178);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a140(uint64_t param_1,int8_t param_2)
void FUN_18084a140(uint64_t param_1,int8_t param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [48];
  int64_t alStack_148 [2];
  uint64_t *apuStack_138 [34];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a1fa;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a1a4;
  }
  else {
LAB_18084a1a4:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_7360_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    *(int8_t *)(apuStack_138[0] + 3) = param_2;
    func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084a1fa:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a280(uint64_t param_1,int32_t param_2)
void FUN_18084a280(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [48];
  int64_t alStack_148 [2];
  uint64_t *apuStack_138 [34];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a346;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a2ef;
  }
  else {
LAB_18084a2ef:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_6688_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int32_t *)(apuStack_138[0] + 3) = param_2;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084a346:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a3d0(uint64_t param_1,int32_t param_2,int32_t param_3)
void FUN_18084a3d0(uint64_t param_1,int32_t param_2,int32_t param_3)

{
  int iVar1;
  int iVar2;
  int8_t auStack_188 [48];
  int64_t alStack_158 [2];
  uint64_t *apuStack_148 [34];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  alStack_158[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_158);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_158[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a498;
    iVar2 = FUN_18088c740(alStack_158 + 1);
    if (iVar2 == 0) goto LAB_18084a43e;
  }
  else {
LAB_18084a43e:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_158[0] + 0x98),apuStack_148,0x20), iVar1 == 0))
  {
    *apuStack_148[0] = &unknown_var_7088_ptr;
    *(int32_t *)(apuStack_148[0] + 1) = 0x20;
    *(int32_t *)((int64_t)apuStack_148[0] + 0x1c) = param_3;
    *(int *)(apuStack_148[0] + 2) = (int)param_1;
    *(int32_t *)(apuStack_148[0] + 3) = param_2;
    func_0x00018088e0d0(*(uint64_t *)(alStack_158[0] + 0x98));
  }
LAB_18084a498:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_158 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a550(uint64_t param_1,int32_t param_2)
void FUN_18084a550(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [48];
  int64_t alStack_148 [2];
  uint64_t *apuStack_138 [34];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a608;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a5b3;
  }
  else {
LAB_18084a5b3:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_7752_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    *(int32_t *)(apuStack_138[0] + 3) = param_2;
    func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084a608:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a680(int32_t param_1,uint64_t param_2)
void FUN_18084a680(int32_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_168 [48];
  uint64_t uStack_138;
  uint64_t uStack_130;
  int64_t lStack_128;
  int64_t alStack_120 [33];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  lStack_128 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,uStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_120), iVar1 == 0)) {
    lStack_128 = *(int64_t *)(alStack_120[0] + 8);
  }
  else if (iVar1 != 0) goto LAB_18084a719;
  *(uint64_t *)(*(int64_t *)(lStack_128 + 0xd0) + 0x38) = param_2;
LAB_18084a719:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a7a0(int32_t param_1,uint64_t param_2)
void FUN_18084a7a0(int32_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_168 [48];
  uint64_t uStack_138;
  uint64_t uStack_130;
  int64_t lStack_128;
  int64_t alStack_120 [33];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  lStack_128 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_130);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_138,uStack_130), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_120), iVar1 == 0)) {
    if (alStack_120[0] == 0) {
      lStack_128 = alStack_120[0];
    }
    else {
      lStack_128 = alStack_120[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_18084a83e;
  *(uint64_t *)(lStack_128 + 0x30) = param_2;
LAB_18084a83e:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStack_138);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084a8c0(uint64_t param_1,int32_t param_2)
void FUN_18084a8c0(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [48];
  int64_t alStack_148 [2];
  uint64_t *apuStack_138 [34];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084a986;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084a92f;
  }
  else {
LAB_18084a92f:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_9536_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int32_t *)(apuStack_138[0] + 3) = param_2;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084a986:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084aa10(uint64_t param_1,int32_t param_2)
void FUN_18084aa10(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [48];
  int64_t alStack_148 [2];
  uint64_t *apuStack_138 [34];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084aad6;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084aa7f;
  }
  else {
LAB_18084aa7f:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_6552_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int32_t *)(apuStack_138[0] + 3) = param_2;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084aad6:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084ab60(uint64_t param_1,int32_t param_2)
void FUN_18084ab60(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [48];
  int64_t alStack_148 [2];
  uint64_t *apuStack_138 [34];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084ac26;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084abcf;
  }
  else {
LAB_18084abcf:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_24_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int32_t *)(apuStack_138[0] + 3) = param_2;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084ac26:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084acb0(uint64_t param_1)
void FUN_18084acb0(uint64_t param_1)

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
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084ad66;
    iVar2 = FUN_18088c740(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_18084ad14;
  }
  else {
LAB_18084ad14:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_138[0] + 0x98),apuStack_128,0x18), iVar1 == 0))
  {
    *apuStack_128[0] = &unknown_var_7496_ptr;
    *(int32_t *)(apuStack_128[0] + 1) = 0x18;
    *(int *)(apuStack_128[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(uint64_t *)(alStack_138[0] + 0x98));
  }
LAB_18084ad66:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_138 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084ade0(uint64_t param_1,int32_t param_2)
void FUN_18084ade0(uint64_t param_1,int32_t param_2)

{
  int iVar1;
  int iVar2;
  int8_t auStack_178 [48];
  int64_t alStack_148 [2];
  uint64_t *apuStack_138 [34];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  alStack_148[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_18084ae98;
    iVar2 = FUN_18088c740(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084ae43;
  }
  else {
LAB_18084ae43:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStack_148[0] + 0x98),apuStack_138,0x20), iVar1 == 0))
  {
    *apuStack_138[0] = &unknown_var_7624_ptr;
    *(int32_t *)(apuStack_138[0] + 1) = 0x20;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    *(int32_t *)(apuStack_138[0] + 3) = param_2;
    func_0x00018088e0d0(*(uint64_t *)(alStack_148[0] + 0x98));
  }
LAB_18084ae98:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}





// 函数: void FUN_18084af10(int32_t param_1,int32_t *param_2)
void FUN_18084af10(int32_t param_1,int32_t *param_2)

{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  uint64_t uStackX_10;
  int64_t lStackX_18;
  int8_t auStackX_20 [8];
  
  FUN_18084afc0();
  uVar1 = *param_2;
  uStackX_10 = 0;
  iVar2 = func_0x00018088c590(param_1,&lStackX_18);
  if (iVar2 == 0) {
    if ((*(uint *)(lStackX_18 + 0x24) >> 1 & 1) == 0) goto LAB_18084af88;
    iVar3 = FUN_18088c740(&uStackX_10);
    if (iVar3 == 0) goto LAB_18084af68;
  }
  else {
LAB_18084af68:
    iVar3 = iVar2;
  }
  if (iVar3 == 0) {
    func_0x00018088c530(uVar1,auStackX_20);
  }
LAB_18084af88:
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStackX_10);
}



// WARNING: Type propagation algorithm not settling

uint64_t FUN_18084afc0(uint64_t param_1)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t alStackX_10 [2];
  uint64_t *puStackX_20;
  
  uVar1 = func_0x00018088c590(param_1,alStackX_10);
  if ((uVar1 == 0) && ((*(uint *)(alStackX_10[0] + 0x24) >> 1 & 1) == 0)) {
    return 0x4b;
  }
  if (uVar1 != 0) {
    return (uint64_t)uVar1;
  }
  uVar3 = FUN_18088e0f0(*(uint64_t *)(alStackX_10[0] + 0x98),0);
  if ((int)uVar3 == 0) {
    if (*(int *)(*(int64_t *)(alStackX_10[0] + 0x98) + 0x200) != 0) {
      alStackX_10[1] = 0;
      iVar2 = FUN_18088c740(alStackX_10 + 1);
      if (iVar2 == 0) {
        iVar2 = FUN_18088dec0(*(uint64_t *)(alStackX_10[0] + 0x98),&puStackX_20,0x10);
        if (iVar2 == 0) {
          *puStackX_20 = &unknown_var_3344_ptr;
          *(int32_t *)(puStackX_20 + 1) = 0x10;
          iVar2 = func_0x00018088e0d0(*(uint64_t *)(alStackX_10[0] + 0x98));
          if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
            AdvancedSystemProcessor(alStackX_10 + 1);
          }
        }
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemProcessor(alStackX_10 + 1);
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint64_t FUN_18084b015(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t in_stack_00000038;
  uint64_t uStack0000000000000040;
  uint64_t *in_stack_00000048;
  
  if (*(int *)(*(int64_t *)(param_2 + 0x98) + 0x200) == 0) {
    return 0;
  }
  uStack0000000000000040 = 0;
  iVar1 = FUN_18088c740(&stack0x00000040);
  if (iVar1 == 0) {
    iVar1 = FUN_18088dec0(*(uint64_t *)(in_stack_00000038 + 0x98),&stack0x00000048,0x10);
    if (iVar1 == 0) {
      *in_stack_00000048 = &unknown_var_3344_ptr;
      *(int32_t *)(in_stack_00000048 + 1) = 0x10;
      iVar1 = func_0x00018088e0d0(*(uint64_t *)(in_stack_00000038 + 0x98));
      if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
        AdvancedSystemProcessor(&stack0x00000040);
      }
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack0x00000040);
}





// 函数: void FUN_18084b0a1(void)
void FUN_18084b0a1(void)

{
  return;
}





// 函数: void FUN_18084b0a6(void)
void FUN_18084b0a6(void)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack0x00000040);
}





// 函数: void FUN_18084b0c0(int32_t param_1)
void FUN_18084b0c0(int32_t param_1)

{
  int iVar1;
  int iVar2;
  uint64_t uStackX_10;
  int64_t alStackX_18 [2];
  
  iVar1 = FUN_18084afc0();
  if (iVar1 != 0) {
    return;
  }
  uStackX_10 = 0;
  iVar1 = func_0x00018088c590(param_1,alStackX_18);
  if (iVar1 == 0) {
    if ((*(uint *)(alStackX_18[0] + 0x24) >> 1 & 1) == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemProcessor(&uStackX_10);
    }
    iVar2 = FUN_18088c740(&uStackX_10);
    if (iVar2 != 0) goto LAB_18084b131;
  }
  iVar2 = iVar1;
LAB_18084b131:
  if (iVar2 == 0) {
    iVar1 = FUN_18088daf0(*(uint64_t *)(alStackX_18[0] + 0x98));
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemProcessor(&uStackX_10);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&uStackX_10);
}





// 函数: void FUN_18084b0db(void)
void FUN_18084b0db(void)

{
  int iVar1;
  int iVar2;
  int32_t unaff_EBX;
  uint64_t uStack0000000000000038;
  int64_t in_stack_00000040;
  
  uStack0000000000000038 = 0;
  iVar1 = func_0x00018088c590(unaff_EBX);
  if (iVar1 == 0) {
    if ((*(uint *)(in_stack_00000040 + 0x24) >> 1 & 1) == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemProcessor(&stack0x00000038);
    }
    iVar2 = FUN_18088c740(&stack0x00000038);
    if (iVar2 != 0) goto LAB_18084b131;
  }
  iVar2 = iVar1;
LAB_18084b131:
  if (iVar2 == 0) {
    iVar1 = FUN_18088daf0(*(uint64_t *)(in_stack_00000040 + 0x98));
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemProcessor(&stack0x00000038);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack0x00000038);
}





// 函数: void FUN_18084b11f(void)
void FUN_18084b11f(void)

{
  int iVar1;
  int unaff_EDI;
  int64_t in_stack_00000040;
  
  iVar1 = FUN_18088c740(&stack0x00000038);
  if (iVar1 == 0) {
    iVar1 = unaff_EDI;
  }
  if (iVar1 == 0) {
    iVar1 = FUN_18088daf0(*(uint64_t *)(in_stack_00000040 + 0x98));
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemProcessor(&stack0x00000038);
    }
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack0x00000038);
}





// 函数: void FUN_18084b163(void)
void FUN_18084b163(void)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack0x00000038);
}





// 函数: void FUN_18084b174(void)
void FUN_18084b174(void)

{
  return;
}



// WARNING: Type propagation algorithm not settling



// 函数: void FUN_18084b180(uint64_t param_1,int8_t param_2)
void FUN_18084b180(uint64_t param_1,int8_t param_2)

{
  int iVar1;
  int iVar2;
  int64_t alStackX_18 [2];
  uint64_t *apuStack_18 [2];
  
  alStackX_18[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStackX_18);
  if ((((iVar1 != 0) ||
       (((*(uint *)(alStackX_18[0] + 0x24) >> 1 & 1) != 0 &&
        (iVar2 = FUN_18088c740(alStackX_18 + 1), iVar2 == 0)))) && (iVar1 == 0)) &&
     (iVar1 = FUN_18088dec0(*(uint64_t *)(alStackX_18[0] + 0x98),apuStack_18,0x18), iVar1 == 0)) {
    *apuStack_18[0] = &unknown_var_2544_ptr;
    *(int32_t *)(apuStack_18[0] + 1) = 0x18;
    *(int8_t *)(apuStack_18[0] + 2) = param_2;
    func_0x00018088e0d0(*(uint64_t *)(alStackX_18[0] + 0x98));
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStackX_18 + 1);
}





// 函数: void FUN_18084b240(int32_t *param_1,uint64_t param_2)
void FUN_18084b240(int32_t *param_1,uint64_t param_2)

{
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_2,0x27,&unknown_var_8960_ptr,*param_1,*(int16_t *)(param_1 + 1),
                *(int16_t *)((int64_t)param_1 + 6),*(int8_t *)(param_1 + 2),
                *(int8_t *)((int64_t)param_1 + 9),*(int8_t *)((int64_t)param_1 + 10),
                *(int8_t *)((int64_t)param_1 + 0xb),*(int8_t *)(param_1 + 3),
                *(int8_t *)((int64_t)param_1 + 0xd),*(int8_t *)((int64_t)param_1 + 0xe),
                *(int8_t *)((int64_t)param_1 + 0xf));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084b2f0(uint64_t param_1)
void FUN_18084b2f0(uint64_t param_1)

{
  int iVar1;
  int8_t auStack_148 [32];
  int8_t *puStack_128;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  iVar1 = FUN_1808401c0();
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    puStack_128 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,0x11,param_1,&unknown_var_4232_ptr);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084b380(uint64_t param_1)
void FUN_18084b380(uint64_t param_1)

{
  int iVar1;
  int8_t auStack_148 [32];
  int8_t *puStack_128;
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  iVar1 = FUN_18084b180(param_1,0);
  if ((iVar1 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
    puStack_128 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&unknown_var_2648_ptr);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084b410(uint64_t param_1)
void FUN_18084b410(uint64_t param_1)

{
  int iVar1;
  int8_t auStack_158 [32];
  int8_t *puStack_138;
  int64_t alStack_128 [2];
  int8_t auStack_118 [256];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  iVar1 = func_0x00018088c590(param_1,alStack_128);
  if ((iVar1 == 0) && ((*(uint *)(alStack_128[0] + 0x24) >> 1 & 1) == 0)) {
    iVar1 = 0x4b;
LAB_18084b46d:
    if (iVar1 == 0) goto LAB_18084b4a9;
  }
  else if (iVar1 == 0) {
    iVar1 = FUN_18088e220(*(uint64_t *)(alStack_128[0] + 0x98));
    if (iVar1 == 0) goto LAB_18084b4a9;
    goto LAB_18084b46d;
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    puStack_138 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    DataTransformer(iVar1,0xb,param_1,&unknown_var_5264_ptr);
  }
LAB_18084b4a9:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084b5a0(uint64_t param_1,uint64_t *param_2,int64_t *param_3)
void FUN_18084b5a0(uint64_t param_1,uint64_t *param_2,int64_t *param_3)

{
  int iVar1;
  int64_t *plVar2;
  int32_t *puVar3;
  int8_t auStack_b8 [32];
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  uint uStack_70;
  uint uStack_68;
  uint uStack_60;
  uint uStack_58;
  uint uStack_50;
  int8_t auStack_48 [40];
  uint64_t uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  for (puVar3 = (int32_t *)*param_2;
      ((int32_t *)*param_2 <= puVar3 &&
      (puVar3 < (int32_t *)*param_2 + (int64_t)*(int *)(param_2 + 1) * 4)); puVar3 = puVar3 + 4)
  {
    plVar2 = (int64_t *)(**(code **)(*param_3 + 0x140))(param_3,puVar3,1);
    if (plVar2 == (int64_t *)0x0) {
      uStack_50 = (uint)*(byte *)((int64_t)puVar3 + 0xf);
      uStack_58 = (uint)*(byte *)((int64_t)puVar3 + 0xe);
      uStack_60 = (uint)*(byte *)((int64_t)puVar3 + 0xd);
      uStack_68 = (uint)*(byte *)(puVar3 + 3);
      uStack_70 = (uint)*(byte *)((int64_t)puVar3 + 0xb);
      uStack_78 = (uint)*(byte *)((int64_t)puVar3 + 10);
      uStack_80 = (uint)*(byte *)((int64_t)puVar3 + 9);
      uStack_88 = (uint)*(byte *)(puVar3 + 2);
      uStack_90 = (uint)*(ushort *)((int64_t)puVar3 + 6);
      uStack_98 = (uint)*(ushort *)(puVar3 + 1);
                    // WARNING: Subroutine does not return
      FUN_18076b390(auStack_48,0x27,&unknown_var_8960_ptr,*puVar3);
    }
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
    if (iVar1 != 0) break;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084b6c0(int64_t param_1,int64_t param_2)
void FUN_18084b6c0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  int8_t auStack_58 [32];
  int8_t auStack_38 [40];
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  bVar2 = *(int *)(param_2 + 0xb0) != -1;
  *(bool *)(param_1 + 8) = bVar2;
  if (bVar2) {
    lVar1 = (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x288))
                      (*(int64_t **)(param_1 + 0x10),param_2 + 0xd8,1);
    if (lVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(param_2 + 0xd8,auStack_38);
    }
    FUN_180847c60(lVar1,*(uint64_t *)(param_1 + 0x10),param_1 + 8);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



