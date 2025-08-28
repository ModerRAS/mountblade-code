#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part663.c - 1 个函数
// 函数: void UtilitiesSystem_478d0(uint64_t param_1,uint64_t param_2)
void UtilitiesSystem_478d0(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void *puVar4;
  int8_t stack_array_228 [32];
  uint64_t *plocal_var_208;
  void *plocal_var_200;
  void *plocal_var_1f8;
  void *plocal_var_1f0;
  void *plocal_var_1e8;
  void *plocal_var_1e0;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  int8_t *plocal_var_1c8;
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  int64_t lStack_1b0;
  int64_t lStack_1a8;
  uint64_t local_var_1a0;
  uint64_t stack_array_198 [2];
  int8_t stack_array_188 [8];
  int8_t stack_array_180 [8];
  int8_t stack_array_178 [4];
  int32_t local_var_174;
  uint64_t local_var_170;
  int64_t lStack_138;
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  plocal_var_1c8 = stack_array_128;
  stack_array_198[1] = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_228;
  lVar2 = 0;
  local_var_1d0 = 0;
  local_var_1c0 = 0;
  local_var_1b8 = 0xff;
  plocal_var_1e0 = &processed_var_7624_ptr;
  plocal_var_1e8 = &processed_var_7632_ptr;
  plocal_var_1f0 = &processed_var_7600_ptr;
  plocal_var_1f8 = &processed_var_7616_ptr;
  plocal_var_200 = &processed_var_7584_ptr;
  plocal_var_208 = (uint64_t *)&processed_var_7592_ptr;
  local_var_1d8 = param_2;
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7768_ptr,&processed_var_7752_ptr);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7720_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(1,1);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7532_ptr,&system_memory_c8e4);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7736_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(1,1);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7532_ptr,&system_memory_c8e4);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&system_memory_d228);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(1,1);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7532_ptr,&system_memory_c8e4);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7696_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,1);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(1,1);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7532_ptr,&system_memory_c8e4);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7704_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7640_ptr,&system_buffer_ptr);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7672_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7640_ptr,&system_buffer_ptr);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7688_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7640_ptr,&system_buffer_ptr);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7876_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7640_ptr,&system_buffer_ptr);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7672_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7640_ptr,&system_buffer_ptr);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7888_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&system_memory_cc18);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7856_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&system_memory_cc18);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7868_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&system_memory_cc18);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7840_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&system_memory_cc18);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7540_ptr,&processed_var_7848_ptr);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  plocal_var_208 = (uint64_t *)0x0;
  RenderingSystem_VertexProcessor(render_system_data_memory,0xffffffffffffffff);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7640_ptr,&system_buffer_ptr);
  puVar4 = &processed_var_7504_ptr;
  if (render_system_data_memory <= render_system_data_memory) {
    puVar4 = &processed_var_7524_ptr;
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,puVar4);
  if (render_system_data_memory != 0) {
    lVar2 = (render_system_data_memory * 10) / render_system_data_memory;
  }
  iVar1 = (int)(lVar2 / 10);
  plocal_var_200 = (void *)CONCAT44(plocal_var_200._4_4_,(int)lVar2 + iVar1 * -10);
  plocal_var_208 = (uint64_t *)CONCAT44(plocal_var_208._4_4_,iVar1);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_7648_ptr,&processed_var_7808_ptr);
  plocal_var_208 = (uint64_t *)UtilitiesSystem_46f40();
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_8184_ptr,&processed_var_7824_ptr);
  lVar2 = render_system_memory;
  QueryPerformanceCounter(&lStack_1b0);
  if (render_system_config_memory == 0) {
    QueryPerformanceFrequency(&lStack_1a8);
    render_system_config_memory = lStack_1a8 / 1000;
    if (render_system_config_memory == 0) {
      render_system_config_memory = 1;
    }
  }
  lVar2 = (lStack_1b0 / render_system_config_memory - lVar2) - render_system_memory;
  uVar3 = GetCurrentProcess(render_system_config_memory,lStack_1b0 % render_system_config_memory);
  plocal_var_208 = &local_var_1a0;
  GetProcessTimes(uVar3,stack_array_180,stack_array_188,stack_array_198);
  uVar3 = GetCurrentProcess();
  K32GetProcessMemoryInfo(uVar3,stack_array_178,0x48);
  plocal_var_208 = (uint64_t *)(lVar2 / 1000);
  plocal_var_200 = (void *)(lVar2 % 1000);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_8152_ptr,&processed_var_8200_ptr);
  plocal_var_1f8 = (void *)((stack_array_198[0] / 10000) / 1000);
  plocal_var_208 = (uint64_t *)((local_var_1a0 / 10000) / 1000);
  plocal_var_1f0 = (void *)((stack_array_198[0] / 10000) % 1000);
  plocal_var_200 = (void *)((local_var_1a0 / 10000) % 1000);
  plocal_var_1e8 = (void *)CONCAT44(plocal_var_1e8._4_4_,local_var_174);
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_8064_ptr,&processed_var_8176_ptr);
  plocal_var_208 = (uint64_t *)&processed_var_552_ptr;
  RenderingSystem_VertexProcessor(local_var_170,1);
  if (lStack_138 != 0) {
    RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&processed_var_8136_ptr);
    plocal_var_208 = (uint64_t *)&processed_var_552_ptr;
    RenderingSystem_VertexProcessor(lStack_138,1);
  }
  RenderingSystem_ShaderCompiler(RenderingSystem_MaterialManager,&local_var_1d8,&system_memory_cc18);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_228);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t UtilitiesSystem_486f0(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lStackX_8;
  int64_t lStackX_10;
  if ((double)render_system_memory == 0.0) {
    QueryPerformanceCounter(&lStackX_8);
    lVar1 = lStackX_8;
    if (render_system_config_memory == 0) {
      QueryPerformanceFrequency(&lStackX_10);
      render_system_config_memory = lStackX_10 / 1000;
      if (render_system_config_memory == 0) {
        render_system_config_memory = 1;
      }
    }
    lVar2 = lVar1 / render_system_config_memory;
    QueryPerformanceCounter(&lStackX_8,lVar1 % render_system_config_memory);
    lVar1 = lStackX_8;
    if (render_system_config_memory == 0) {
      QueryPerformanceFrequency(&lStackX_10);
      render_system_config_memory = lStackX_10 / 1000;
      if (render_system_config_memory == 0) {
        render_system_config_memory = 1;
      }
    }
    param_2 = lVar1 % render_system_config_memory;
    render_system_memory = lVar1 / render_system_config_memory - lVar2;
  }
  QueryPerformanceCounter(&lStackX_8,param_2);
  if (render_system_config_memory == 0) {
    QueryPerformanceFrequency(&lStackX_10);
    render_system_config_memory = lStackX_10 / 1000;
    if (render_system_config_memory == 0) {
      render_system_config_memory = 1;
    }
  }
  return lStackX_8 / render_system_config_memory;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t UtilitiesSystem_48725(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t local_var_40;
  int64_t local_var_48;
  QueryPerformanceCounter();
  lVar1 = local_var_40;
  if (render_system_config_memory == 0) {
    QueryPerformanceFrequency(&local_buffer_00000048);
    lVar2 = SUB168(SEXT816(unaff_RSI) * SEXT816(local_var_48),8);
    render_system_config_memory = (lVar2 >> 7) - (lVar2 >> 0x3f);
    if (render_system_config_memory == 0) {
      render_system_config_memory = unaff_RBP;
    }
  }
  lVar2 = lVar1 / render_system_config_memory;
  QueryPerformanceCounter(&local_buffer_00000040,lVar1 % render_system_config_memory);
  lVar1 = local_var_40;
  if (render_system_config_memory == 0) {
    QueryPerformanceFrequency(&local_buffer_00000048);
    lVar3 = SUB168(SEXT816(unaff_RSI) * SEXT816(local_var_48),8);
    render_system_config_memory = (lVar3 >> 7) - (lVar3 >> 0x3f);
    if (render_system_config_memory == 0) {
      render_system_config_memory = unaff_RBP;
    }
  }
  render_system_memory = lVar1 / render_system_config_memory - lVar2;
  QueryPerformanceCounter(&local_buffer_00000040,lVar1 % render_system_config_memory);
  lVar1 = local_var_40;
  if (render_system_config_memory == 0) {
    QueryPerformanceFrequency(&local_buffer_00000048);
    lVar2 = SUB168(SEXT816(unaff_RSI) * SEXT816(local_var_48),8);
    render_system_config_memory = (lVar2 >> 7) - (lVar2 >> 0x3f);
    if (render_system_config_memory == 0) {
      render_system_config_memory = unaff_RBP;
    }
  }
  return lVar1 / render_system_config_memory;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t UtilitiesSystem_487dd(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t local_var_40;
  int64_t local_var_48;
  QueryPerformanceCounter(&local_buffer_00000040);
  lVar1 = local_var_40;
  if (render_system_config_memory == 0) {
    QueryPerformanceFrequency(&local_buffer_00000048);
    lVar2 = SUB168(SEXT816(unaff_RSI) * SEXT816(local_var_48),8);
    render_system_config_memory = (lVar2 >> 7) - (lVar2 >> 0x3f);
    if (render_system_config_memory == 0) {
      render_system_config_memory = unaff_RBP;
    }
  }
  return lVar1 / render_system_config_memory;
}
int32_t UtilitiesSystem_48840(int64_t param_1,int64_t param_2,char param_3)
{
  int32_t *puVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lVar4;
  char cVar5;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar3 = VirtualFree(param_1,0,0x8000);
    cVar5 = iVar3 == 0;
    lVar4 = -param_2;
    if (param_3 != '\0') {
      Function_7603aebb(&system_memory_ede0,lVar4);
    }
    Function_7603aebb(&system_memory_edc0,lVar4);
    if (cVar5 != '\0') {
      puVar1 = (int32_t *)_errno();
      uVar2 = strerror(*puVar1);
      UtilitiesSystem_50340(&processed_var_7904_ptr,uVar2,param_1,param_2);
      return 0;
    }
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t UtilitiesSystem_488f0(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  uint64_t uVar1;
  uint uVar2;
  uint uVar3;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uVar9 = render_system_config_memory;
  if ((((param_1 == 0) && (param_3 - 1 < 0x400000)) && ((param_2 & 0x3fffff) == 0)) &&
     (param_2 < 0x40000001)) {
    LOCK();
    uVar6 = render_system_config_memory + param_2;
    UNLOCK();
    uVar1 = render_system_config_memory - 1;
    render_system_config_memory = uVar6;
    if (0x1dffffffffff < uVar1) {
      lVar8 = *(int64_t *)
               (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x10);
      iVar7 = *(int *)(lVar8 + 0xbc0);
      if (*(int *)(lVar8 + 0xbc0) < 1) {
        UISystem_RenderController(lVar8 + 0xb40);
        *(int32_t *)(lVar8 + 0xbc0) = 0x10;
        iVar7 = 0x10;
      }
      uVar2 = *(uint *)(lVar8 + 0xb80 + (int64_t)(0x10 - iVar7) * 4);
      *(int32_t *)(lVar8 + 0xb80 + (int64_t)(0x10 - iVar7) * 4) = 0;
      iVar7 = *(int *)(lVar8 + 0xbc0) + -1;
      *(int *)(lVar8 + 0xbc0) = iVar7;
      if (iVar7 < 1) {
        UISystem_RenderController(lVar8 + 0xb40);
        *(int32_t *)(lVar8 + 0xbc0) = 0x10;
        iVar7 = 0x10;
      }
      uVar3 = *(uint *)(lVar8 + 0xb80 + (int64_t)(0x10 - iVar7) * 4);
      *(int32_t *)(lVar8 + 0xb80 + (int64_t)(0x10 - iVar7) * 4) = 0;
      *(int *)(lVar8 + 0xbc0) = *(int *)(lVar8 + 0xbc0) + -1;
      LOCK();
      uVar1 = ((uint64_t)(uVar3 >> 0x11) | ((uint64_t)uVar2 & 0x1f) << 0xf) * 0x400000 +
              0x20000000000;
      if (uVar9 + param_2 != render_system_config_memory) {
        uVar1 = render_system_config_memory;
      }
      render_system_config_memory = uVar1;
      UNLOCK();
      LOCK();
      UNLOCK();
      uVar9 = render_system_config_memory;
      render_system_config_memory = render_system_config_memory + param_2;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar9;
    if ((SUB168(auVar5 % auVar4,0) == 0) && (uVar9 != 0)) {
      lVar8 = VirtualAlloc(uVar9,param_2,param_4,SUB164(auVar5 % auVar4,0) + 4);
      if (lVar8 != 0) {
        return lVar8;
      }
      iVar7 = GetLastError();
      if ((iVar7 != 0x1e7) && (iVar7 != 0x57)) {
        return 0;
      }
    }
  }
  lVar8 = VirtualAlloc(param_1,param_2,param_4,4);
  return lVar8;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t UtilitiesSystem_4896e(int64_t param_1)
{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t in_RAX;
  int64_t lVar5;
  int64_t unaff_RBX;
  int iVar6;
  int64_t unaff_RSI;
  int unaff_R12D;
  uint64_t unaff_R14;
  iVar6 = unaff_R12D + 0x10;
  lVar5 = *(int64_t *)(*(int64_t *)(in_RAX + param_1 * 8) + 0x10);
  iVar4 = *(int *)(lVar5 + 0xbc0);
  if (*(int *)(lVar5 + 0xbc0) < 1) {
    UISystem_RenderController(lVar5 + 0xb40);
    *(int *)(lVar5 + 0xbc0) = iVar6;
    iVar4 = iVar6;
  }
  uVar1 = *(uint *)(lVar5 + 0xb80 + (int64_t)(iVar6 - iVar4) * 4);
  *(int32_t *)(lVar5 + 0xb80 + (int64_t)(iVar6 - iVar4) * 4) = 0;
  iVar4 = *(int *)(lVar5 + 0xbc0) + -1;
  *(int *)(lVar5 + 0xbc0) = iVar4;
  if (iVar4 < 1) {
    UISystem_RenderController(lVar5 + 0xb40);
    *(int *)(lVar5 + 0xbc0) = iVar6;
    iVar4 = iVar6;
  }
  uVar2 = *(uint *)(lVar5 + 0xb80 + (int64_t)(iVar6 - iVar4) * 4);
  *(int32_t *)(lVar5 + 0xb80 + (int64_t)(iVar6 - iVar4) * 4) = 0;
  *(int *)(lVar5 + 0xbc0) = *(int *)(lVar5 + 0xbc0) + -1;
  LOCK();
  uVar3 = ((uint64_t)(uVar2 >> 0x11) | ((uint64_t)uVar1 & 0x1f) << 0xf) * 0x400000 + 0x20000000000
  ;
  if (unaff_RBX + unaff_RSI != render_system_config_memory) {
    uVar3 = render_system_config_memory;
  }
  render_system_config_memory = uVar3;
  uVar3 = render_system_config_memory;
  UNLOCK();
  LOCK();
  lVar5 = render_system_config_memory + unaff_RSI;
  UNLOCK();
  if ((render_system_config_memory % unaff_R14 == 0) && (render_system_config_memory != 0)) {
    render_system_config_memory = lVar5;
    lVar5 = VirtualAlloc(uVar3);
    if (lVar5 != 0) {
      return lVar5;
    }
    iVar4 = GetLastError();
    lVar5 = render_system_config_memory;
    if ((iVar4 != 0x1e7) && (iVar4 != 0x57)) {
      return 0;
    }
  }
  render_system_config_memory = lVar5;
  lVar5 = VirtualAlloc();
  return lVar5;
}
int64_t UtilitiesSystem_48a61(void)
{
  int iVar1;
  int64_t lVar2;
  uint64_t unaff_RBX;
  uint64_t unaff_R14;
  if ((unaff_RBX % unaff_R14 == 0) && (unaff_RBX != 0)) {
    lVar2 = VirtualAlloc();
    if (lVar2 != 0) {
      return lVar2;
    }
    iVar1 = GetLastError();
    if ((iVar1 != 0x1e7) && (iVar1 != 0x57)) {
      return 0;
    }
  }
  lVar2 = VirtualAlloc();
  return lVar2;
}
// WARNING: Removing unreachable block (ram,0x000180648b6a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t UtilitiesSystem_48ad0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                      uint64_t param_5,char param_6,byte *param_7)
{
  int8_t auVar1 [16];
  int8_t auVar2 [16];
  int32_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uVar5 = (uint)param_4;
  if (render_system_data_memory != 0) {
    if (render_system_control_memory == 0) {
      AudioSystem_SoundManager(&system_memory_be10);
    }
    if ((((render_system_control_memory != 0) && (param_2 % render_system_data_memory == 0)) &&
        (auVar1._8_8_ = 0, auVar1._0_8_ = render_system_data_memory, auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
        SUB168(auVar2 % auVar1,0) == 0)) &&
       (((param_6 != SUB161(auVar2 % auVar1,0) && ((uVar5 >> 0xc & 1) != 0)) &&
        ((uVar5 >> 0xd & 1) != 0)))) {
      if (render_system_config_memory == 0) {
        *param_7 = 1;
        lVar4 = UtilitiesSystem_488f0(param_1,param_2,param_3,uVar5 | 0x20000000);
        if (lVar4 != 0) {
          return lVar4;
        }
        render_system_config_memory = 10;
      }
      else {
        render_system_config_memory = render_system_config_memory + -1;
        LOCK();
        UNLOCK();
      }
    }
  }
  *param_7 = (byte)((param_4 & 0xffffffff) >> 0x1d) & 1;
  lVar4 = UtilitiesSystem_488f0(param_1,param_2,param_3,param_4 & 0xffffffff);
  if (lVar4 == 0) {
    uVar3 = GetLastError();
    UtilitiesSystem_50340(&processed_var_7952_ptr,param_2,uVar3,param_1,0,param_6);
  }
  return lVar4;
}
int64_t UtilitiesSystem_48c10(int64_t param_1,uint64_t param_2,char param_3)
{
  int64_t lVar1;
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = UtilitiesSystem_48ad0(0,param_1 + 0x3fffffU & 0xffffffffffc00000,param_2,0x2000);
  if (param_3 != '\0') {
    lVar1 = VirtualAlloc(lVar1,param_1,0x1000,4);
  }
  if (lVar1 != 0) {
    Function_7603aebb(&system_memory_edc0,param_1);
    if (param_3 != '\0') {
      Function_7603aebb(&system_memory_ede0,param_1);
    }
  }
  return lVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t UtilitiesSystem_48cc0(int64_t param_1,uint64_t param_2,byte param_3,byte param_4,
                       uint64_t param_5)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  if ((render_system_control_memory <= param_2) && (uVar1 = param_2 - 1, (param_2 & uVar1) == 0)) {
    uVar5 = render_system_control_memory - 1;
    if ((uVar5 & render_system_control_memory) == 0) {
      uVar5 = ~uVar5 & uVar5 + param_1;
    }
    else {
      uVar5 = ((uVar5 + param_1) / render_system_control_memory) * render_system_control_memory;
    }
    uVar2 = UtilitiesSystem_48c10(uVar5,param_2,param_3,param_3 & param_4,param_5);
    if (uVar2 != 0) {
      if (uVar2 % param_2 == 0) {
        return uVar2;
      }
      UtilitiesSystem_48840(uVar2,uVar5,param_3);
      if (uVar5 < ~param_2) {
        iVar4 = 0;
        while (uVar6 = param_5, uVar2 = UtilitiesSystem_48c10(uVar5 + param_2,param_2,param_3,0,param_5),
              uVar2 != 0) {
          if (uVar2 % param_2 == 0) {
            UtilitiesSystem_491b0(uVar2 + uVar5,param_2);
            return uVar2;
          }
          UtilitiesSystem_48840(uVar2,uVar5 + param_2,param_3);
          uVar2 = uVar1 + uVar2;
          if ((param_2 & uVar1) == 0) {
            uVar2 = ~uVar1 & uVar2;
          }
          else {
            uVar2 = uVar2 - uVar2 % param_2;
          }
          uVar3 = UtilitiesSystem_48ad0(uVar2,uVar5,param_2,(param_3 + 2) * 0x1000,uVar6,param_3 & param_4,
                                param_5);
          if (uVar3 == uVar2) {
            return uVar3;
          }
          if (uVar3 != 0) {
            UtilitiesSystem_48840(uVar3,uVar5,param_3);
            uVar3 = 0;
          }
          iVar4 = iVar4 + 1;
          if (99 < iVar4) {
            return uVar3;
          }
        }
      }
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t UtilitiesSystem_48ea0(uint64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  if (param_1 < -render_system_control_memory - 1) {
    uVar1 = render_system_control_memory - 1;
    if ((uVar1 & render_system_control_memory) == 0) {
      param_1 = ~uVar1 & param_1 + uVar1;
    }
    else {
      param_1 = ((param_1 + uVar1) / render_system_control_memory) * render_system_control_memory;
    }
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = UtilitiesSystem_48ad0(0,param_1 + 0x3fffff & 0xffffffffffc00000,0,0x2000);
  lVar3 = VirtualAlloc(uVar2,param_1,0x1000,4);
  if (lVar3 != 0) {
    Function_7603aebb(&system_memory_edc0,param_1);
    Function_7603aebb(&system_memory_ede0,param_1);
  }
  return lVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address