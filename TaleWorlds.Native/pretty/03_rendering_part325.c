#include "TaleWorlds.Native.Split.h"

// 03_rendering_part325.c - 32 个函数

// 函数: void FUN_180439b36(void)
void FUN_180439b36(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x1f00) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x1f08))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1eb0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1eb0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x1ea0) = *(int32_t *)(lVar1 + 0x1ee8);
    return;
  }
  *(int *)(lVar1 + 0x1ea0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439b55(void)
void FUN_180439b55(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *puVar5;
  longlong unaff_RBP;
  float unaff_XMM6_Da;
  
  lVar2 = _DAT_180c86920;
  iVar4 = (int)unaff_XMM6_Da;
  lVar1 = *(longlong *)(_DAT_180c86920 + 0x1f70);
  *(int *)(unaff_RBP + 0x10) = iVar4;
  if (lVar1 != 0) {
    cVar3 = (**(code **)(lVar2 + 0x1f78))(unaff_RBP + 0x10);
    if (cVar3 == '\0') {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar2 + 0x1f20) != (void *)0x0) {
          puVar5 = *(void **)(lVar2 + 0x1f20);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar5);
      }
      *(int32_t *)(lVar2 + 0x1f10) = *(int32_t *)(lVar2 + 0x1f58);
      return;
    }
    iVar4 = *(int *)(unaff_RBP + 0x10);
  }
  *(int *)(lVar2 + 0x1f10) = iVar4;
  return;
}





// 函数: void FUN_180439bc7(void)
void FUN_180439bc7(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(int32_t *)(unaff_RBX + 0x1f10) = *(int32_t *)(unaff_RBP + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439be0(void)
void FUN_180439be0(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x1870) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x1878))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1820) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1820);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x1810) = *(int32_t *)(lVar1 + 0x1858);
    return;
  }
  *(int *)(lVar1 + 0x1810) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439bf8(void)
void FUN_180439bf8(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xbc0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xbc8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xb70) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xb70);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xb60) = *(int32_t *)(lVar1 + 0xba8);
    return;
  }
  *(int *)(lVar1 + 0xb60) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439c17(void)
void FUN_180439c17(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xb50) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xb58))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xb00) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xb00);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xaf0) = *(int32_t *)(lVar1 + 0xb38);
    return;
  }
  *(int *)(lVar1 + 0xaf0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439c36(void)
void FUN_180439c36(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x3e0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 1000))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x390) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x390);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x380) = *(int32_t *)(lVar1 + 0x3c8);
    return;
  }
  *(int *)(lVar1 + 0x380) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439c55(void)
void FUN_180439c55(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x450) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x458))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x400) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x400);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x3f0) = *(int32_t *)(lVar1 + 0x438);
    return;
  }
  *(int *)(lVar1 + 0x3f0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439c74(uint64_t param_1,int32_t param_2)
void FUN_180439c74(uint64_t param_1,int32_t param_2)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  uint64_t uStack0000000000000030;
  int32_t uStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _uStack0000000000000048;
  if ((*(longlong *)(_DAT_180c86920 + 0x1800) != 0) &&
     (uStack0000000000000048 = param_2,
     cVar2 = (**(code **)(_DAT_180c86920 + 0x1808))(&stack0x00000048),
     param_2 = uStack0000000000000048, cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x17b0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x17b0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x17a0) = *(int32_t *)(lVar1 + 0x17e8);
    return;
  }
  *(int32_t *)(lVar1 + 0x17a0) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439c88(void)
void FUN_180439c88(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x760) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x768))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x710) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x710);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x700) = *(int32_t *)(lVar1 + 0x748);
    return;
  }
  *(int *)(lVar1 + 0x700) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439ca7(void)
void FUN_180439ca7(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x920) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x928))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x8d0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x8d0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x8c0) = *(int32_t *)(lVar1 + 0x908);
    return;
  }
  *(int *)(lVar1 + 0x8c0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439cc6(void)
void FUN_180439cc6(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x8b0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x8b8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x860) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x860);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x850) = *(int32_t *)(lVar1 + 0x898);
    return;
  }
  *(int *)(lVar1 + 0x850) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439ce5(void)
void FUN_180439ce5(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xae0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xae8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xa90) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xa90);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xa80) = *(int32_t *)(lVar1 + 0xac8);
    return;
  }
  *(int *)(lVar1 + 0xa80) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439d04(void)
void FUN_180439d04(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x990) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x998))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x940) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x940);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x930) = *(int32_t *)(lVar1 + 0x978);
    return;
  }
  *(int *)(lVar1 + 0x930) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439d23(void)
void FUN_180439d23(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xa70) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xa78))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xa20) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xa20);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xa10) = *(int32_t *)(lVar1 + 0xa58);
    return;
  }
  *(int *)(lVar1 + 0xa10) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439d42(void)
void FUN_180439d42(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 2000) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x7d8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x780) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x780);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x770) = *(int32_t *)(lVar1 + 0x7b8);
    return;
  }
  *(int *)(lVar1 + 0x770) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439d61(void)
void FUN_180439d61(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xa00) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xa08))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x9b0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x9b0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x9a0) = *(int32_t *)(lVar1 + 0x9e8);
    return;
  }
  *(int *)(lVar1 + 0x9a0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439d80(void)
void FUN_180439d80(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x840) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x848))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x7f0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x7f0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x7e0) = *(int32_t *)(lVar1 + 0x828);
    return;
  }
  *(int *)(lVar1 + 0x7e0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439d9f(void)
void FUN_180439d9f(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  if (*(int *)(_DAT_180c8a9c8 + 0xcb0) == 0) {
    return;
  }
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xf40) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xf48))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xef0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xef0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xee0) = *(int32_t *)(lVar1 + 0xf28);
    return;
  }
  *(int *)(lVar1 + 0xee0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439dd2(void)
void FUN_180439dd2(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  if (*(int *)(_DAT_180c8a9c8 + 0xd20) == 0) {
    return;
  }
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xfb0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xfb8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xf60) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xf60);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xf50) = *(int32_t *)(lVar1 + 0xf98);
    return;
  }
  *(int *)(lVar1 + 0xf50) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439e05(void)
void FUN_180439e05(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  if (*(int *)(_DAT_180c8a9c8 + 0xd90) == 0) {
    return;
  }
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x1020) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x1028))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xfd0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xfd0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xfc0) = *(int32_t *)(lVar1 + 0x1008);
    return;
  }
  *(int *)(lVar1 + 0xfc0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439e38(void)
void FUN_180439e38(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  if (*(int *)(_DAT_180c8a9c8 + 0xe70) == 0) {
    return;
  }
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x1100) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x1108))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x10b0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x10b0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x10a0) = *(int32_t *)(lVar1 + 0x10e8);
    return;
  }
  *(int *)(lVar1 + 0x10a0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439e6b(void)
void FUN_180439e6b(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  if (*(int *)(_DAT_180c8a9c8 + 0xe00) == 0) {
    return;
  }
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x1090) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x1098))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1040) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1040);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x1030) = *(int32_t *)(lVar1 + 0x1078);
    return;
  }
  *(int *)(lVar1 + 0x1030) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439e9e(void)
void FUN_180439e9e(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x140) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x148))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xf0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xf0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xe0) = *(int32_t *)(lVar1 + 0x128);
    return;
  }
  *(int *)(lVar1 + 0xe0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439ebd(void)
void FUN_180439ebd(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xe60) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xe68))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xe10) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xe10);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xe00) = *(int32_t *)(lVar1 + 0xe48);
    return;
  }
  *(int *)(lVar1 + 0xe00) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439edc(void)
void FUN_180439edc(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xdf0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xdf8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xda0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xda0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xd90) = *(int32_t *)(lVar1 + 0xdd8);
    return;
  }
  *(int *)(lVar1 + 0xd90) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439efb(void)
void FUN_180439efb(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xed0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xed8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xe80) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xe80);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xe70) = *(int32_t *)(lVar1 + 0xeb8);
    return;
  }
  *(int *)(lVar1 + 0xe70) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439f1a(void)
void FUN_180439f1a(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x1b0) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x1b8))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x160) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x160);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x150) = *(int32_t *)(lVar1 + 0x198);
    return;
  }
  *(int *)(lVar1 + 0x150) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439f39(void)
void FUN_180439f39(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x220) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x228))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1d0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1d0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x1c0) = *(int32_t *)(lVar1 + 0x208);
    return;
  }
  *(int *)(lVar1 + 0x1c0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439f58(void)
void FUN_180439f58(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0xc30) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0xc38))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0xbe0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0xbe0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0xbd0) = *(int32_t *)(lVar1 + 0xc18);
    return;
  }
  *(int *)(lVar1 + 0xbd0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439f77(void)
void FUN_180439f77(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x300) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x308))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x2b0) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x2b0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x2a0) = *(int32_t *)(lVar1 + 0x2e8);
    return;
  }
  *(int *)(lVar1 + 0x2a0) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180439f96(void)
void FUN_180439f96(void)

{
  longlong lVar1;
  char cVar2;
  void *puVar3;
  float unaff_XMM6_Da;
  uint64_t uStack0000000000000030;
  int iStack0000000000000048;
  
  lVar1 = _DAT_180c86920;
  uStack0000000000000030 = _iStack0000000000000048;
  iStack0000000000000048 = (int)unaff_XMM6_Da;
  if ((*(longlong *)(_DAT_180c86920 + 0x370) != 0) &&
     (cVar2 = (**(code **)(_DAT_180c86920 + 0x378))(&stack0x00000048), cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 800) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 800);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x310) = *(int32_t *)(lVar1 + 0x358);
    return;
  }
  *(int *)(lVar1 + 0x310) = iStack0000000000000048;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



