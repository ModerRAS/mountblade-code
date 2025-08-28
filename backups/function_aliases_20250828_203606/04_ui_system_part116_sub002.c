#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part116_sub002.c - 1 个函数
// 函数: void function_738e07(void)
void function_738e07(void)
{
  int iVar1;
  int iVar2;
  int32_t unaff_ESI;
  iVar1 = DataProcessor(&local_buffer_00000040,0x100);
  iVar2 = DataProcessor(&local_buffer_00000040 + iVar1,0x100 - iVar1,&system_temp_buffer);
  BufferManager_ResizeBuffer(&local_buffer_00000040 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2));
// WARNING: Subroutine does not return
  DataTransformer(unaff_ESI,1);
}