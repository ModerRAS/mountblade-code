/*
 * 原始函数语义化别名定义
 * 自动生成的别名定义，用于提高代码可读性
 */
#include "unified_function_aliases.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part026.c - 13 个函数
// 函数: void function_66d7c0(void)
void function_66d7c0(void)
{
  uint *puVar1;
  int64_t lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte in_XCR0;
  puVar1 = (uint *)cpuid_basic_info(0);
  bVar7 = false;
  bVar8 = false;
  bVar5 = false;
  bVar6 = false;
  bVar4 = false;
  if (*puVar1 != 0) {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 0xc);
    bVar8 = (uVar3 & 1) != 0;
    bVar6 = (uVar3 >> 9 & 1) != 0;
    bVar7 = (uVar3 >> 0x13 & 1) != 0;
    bVar5 = false;
    bVar4 = false;
    if (((uVar3 & 0x18000000) == 0x18000000) && ((in_XCR0 & 6) == 6)) {
      bVar5 = true;
      bVar4 = false;
      if ((6 < *puVar1) &&
         (lVar2 = cpuid_Extended_Feature_Enumeration_info(7), bVar4 = false,
         (*(uint *)(lVar2 + 4) & 0x20) != 0)) {
        bVar5 = true;
        bVar4 = true;
      }
    }
  }
  ui_system_config_config = function_674f40;
  if (bVar6) {
    ui_system_config_config = function_676930;
  }
  if (bVar4) {
    ui_system_config_config = function_677190;
  }
  ui_system_config_config = function_674930;
  if (bVar6) {
    ui_system_config_config = function_676320;
  }
  ui_system_config_config = function_674700;
  if (bVar6) {
    ui_system_config_config = function_6760f0;
  }
  ui_system_config_config = function_674aa0;
  if (bVar6) {
    ui_system_config_config = function_676490;
  }
  ui_system_config_config = function_674d10;
  if (bVar6) {
    ui_system_config_config = function_676700;
  }
  if (bVar4) {
    ui_system_config_config = function_677300;
  }
  ui_system_config_config = function_6750b0;
  if (bVar6) {
    ui_system_config_config = function_676aa0;
  }
  if (bVar4) {
    ui_system_config_config = function_677530;
  }
  ui_system_config_config = function_6780c0;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_4960_ptr;
  }
  ui_system_config_config = function_6782c0;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_5408_ptr;
  }
  ui_system_config_config = function_678430;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_4576_ptr;
  }
  ui_system_config_config = function_678540;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_4704_ptr;
  }
  ui_system_config_config = function_678810;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_6960_ptr;
  }
  ui_system_config_config = function_6789c0;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_7232_ptr;
  }
  ui_system_config_config = function_678b10;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_6688_ptr;
  }
  ui_system_config_config = function_678bc0;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_6784_ptr;
  }
  ui_system_config_config = function_678e20;
  if (bVar6) {
    ui_system_config_config = (code *)&memory_allocator_3312_ptr;
  }
  ui_system_config_config = function_678ef0;
  if (bVar6) {
    ui_system_config_config = (code *)&system_param1_ptr;
  }
  ui_system_config_config = function_678fc0;
  if (bVar6) {
    ui_system_config_config = (code *)&memory_allocator_3088_ptr;
  }
  ui_system_config_config = function_6790b0;
  if (bVar6) {
    ui_system_config_config = (code *)&memory_allocator_3184_ptr;
  }
  ui_system_config_config = function_679310;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_4176_ptr;
  }
  ui_system_config_config = function_679480;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_4304_ptr;
  }
  ui_system_config_config = function_6795f0;
  if (bVar6) {
    ui_system_config_config = (code *)&memory_allocator_3904_ptr;
  }
  ui_system_config_config = function_6796f0;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_4000_ptr;
  }
  ui_system_config_config = function_67c470;
  if (bVar4) {
    ui_system_config_config = function_6844a0;
  }
  ui_system_config_config = function_679d30;
  if (bVar4) {
    ui_system_config_config = function_68b080;
  }
  ui_system_config_config = function_683f90;
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_8096_ptr;
  }
  ui_system_config_config = function_68d2b0;
  if (bVar4) {
    ui_system_config_config = function_6905c0;
  }
  ui_system_config_config = function_679ac0;
  if (bVar6) {
    ui_system_config_config = (code *)&rendering_buffer_2944_ptr;
  }
  ui_system_config_config = function_679b20;
  if (bVar6) {
    ui_system_config_config = (code *)&memory_allocator_3008_ptr;
  }
  ui_system_config_config = &processed_var_960_ptr;
  if (bVar6) {
    ui_system_config_config = &rendering_buffer_2816_ptr;
  }
  ui_system_config_config = &ui_system_data_1008_ptr;
  if (bVar6) {
    ui_system_config_config = &rendering_buffer_2880_ptr;
  }
  ui_system_config_config = function_6917c0;
  if (bVar6) {
    ui_system_config_config = (code *)&ui_system_data_1552_ptr;
  }
  ui_system_config_config = function_691db0;
  if (bVar6) {
    ui_system_config_config = (code *)&rendering_device_handle_ptr;
  }
  ui_system_config_config = function_694010;
  if (bVar4) {
    ui_system_config_config = function_695530;
  }
  ui_system_config_config = function_68d480;
  if (bVar4) {
    ui_system_config_config = function_695560;
  }
  ui_system_config_config = function_695bf0;
  if (bVar6) {
    ui_system_config_config = (code *)&rendering_buffer_2512_ptr;
  }
  if (bVar5) {
    ui_system_config_config = (code *)&processed_var_4432_ptr;
  }
  ui_system_config_config = function_695f70;
  if (bVar6) {
    ui_system_config_config = (code *)&memory_allocator_3392_ptr;
  }
  if (bVar5) {
    ui_system_config_config = (code *)&processed_var_5920_ptr;
  }
  ui_system_config_config = function_6961a0;
  if (bVar8) {
    ui_system_config_config = (code *)&processed_var_7008_ptr;
  }
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_9600_ptr;
  }
  ui_system_config_config = function_696370;
  if (bVar7) {
    ui_system_config_config = (code *)&processed_var_5776_ptr;
  }
  ui_system_config_config = function_696540;
  if (bVar8) {
    ui_system_config_config = (code *)&processed_var_7893_ptr;
  }
  if (bVar6) {
    ui_system_config_config = (code *)&processed_var_6989_ptr;
  }
  ui_system_config_config = function_696710;
  if (bVar7) {
    ui_system_config_config = (code *)&processed_var_7206_ptr;
  }
  ui_system_config_config = (code *)&ui_system_data_160_ptr;
  if (bVar4) {
    ui_system_config_config = function_697340;
  }
  ui_system_config_config = (code *)&processed_var_560_ptr;
  if (bVar4) {
    ui_system_config_config = function_6972a0;
  }
  ui_system_config_config = (code *)&processed_var_48_ptr;
  if (bVar4) {
    ui_system_config_config = function_697460;
  }
  ui_system_config_config = (code *)&processed_var_416_ptr;
  if (bVar4) {
    ui_system_config_config = function_6973c0;
  }
  ui_system_config_config = (code *)&processed_var_5920_ptr;
  if (bVar4) {
    ui_system_config_config = function_6977e0;
  }
  ui_system_config_config = (code *)&processed_var_9936_ptr;
  if (bVar4) {
    ui_system_config_config = function_697580;
  }
  ui_system_config_config = (code *)&rendering_buffer_272_ptr;
  if (bVar4) {
    ui_system_config_config = function_6974e0;
  }
  ui_system_config_config = function_6968e0;
  if (bVar8) {
    ui_system_config_config = (code *)&processed_var_9412_ptr;
  }
  ui_system_config_config = function_696a60;
  if (bVar7) {
    ui_system_config_config = (code *)&processed_var_9212_ptr;
  }
  ui_system_config_config = (code *)&processed_var_9536_ptr;
  if (bVar4) {
    ui_system_config_config = function_697680;
  }
  ui_system_config_config = (code *)&processed_var_9792_ptr;
  if (bVar4) {
    ui_system_config_config = function_697600;
  }
  ui_system_config_config = (code *)&processed_var_9424_ptr;
  if (bVar4) {
    ui_system_config_config = function_697770;
  }
  ui_system_config_config = (code *)&processed_var_9648_ptr;
  if (bVar4) {
    ui_system_config_config = function_6976f0;
  }
  ui_system_config_config = (code *)&rendering_buffer_2672_ptr;
  if (bVar4) {
    ui_system_config_config = function_6978b0;
  }
  ui_system_config_config = function_696be0;
  if (bVar8) {
    ui_system_config_config = (code *)&processed_var_8370_ptr;
  }
  ui_system_config_config = function_696d90;
  if (bVar7) {
    ui_system_config_config = (code *)&processed_var_8398_ptr;
  }
  ui_system_config_config = function_696f40;
  if (bVar8) {
    ui_system_config_config = (code *)&processed_var_9055_ptr;
  }
  ui_system_config_config = function_6970f0;
  if (bVar7) {
    ui_system_config_config = (code *)&processed_var_7956_ptr;
  }
  ui_system_config_config = function_697dd0;
  if (bVar6) {
    ui_system_config_config = function_677100;
  }
  ui_system_config_config = function_68d4b0;
  if (bVar6) {
    ui_system_config_config = function_68d530;
  }
  ui_system_config_config = function_68d5b0;
  if (bVar6) {
    ui_system_config_config = function_68d630;
  }
  ui_system_config_config = function_68d6b0;
  if (bVar6) {
    ui_system_config_config = function_68d730;
  }
  ui_system_config_config = function_68d7b0;
  if (bVar6) {
    ui_system_config_config = function_68d8d0;
  }
  ui_system_config_config = function_68d9f0;
  if (bVar6) {
    ui_system_config_config = function_68db10;
  }
  if (bVar4) {
    ui_system_config_config = function_695590;
  }
  ui_system_config_config = function_68dc30;
  if (bVar6) {
    ui_system_config_config = function_68dd50;
  }
  ui_system_config_config = function_68de70;
  if (bVar6) {
    ui_system_config_config = function_68def0;
  }
  ui_system_config_config = function_68df70;
  if (bVar6) {
    ui_system_config_config = function_68dff0;
  }
  ui_system_config_config = function_68e070;
  if (bVar6) {
    ui_system_config_config = function_68e250;
  }
  ui_system_config_config = function_68e430;
  if (bVar6) {
    ui_system_config_config = function_68e610;
  }
  if (bVar4) {
    ui_system_config_config = function_695600;
  }
  ui_system_config_config = function_68e7f0;
  if (bVar6) {
    ui_system_config_config = function_68e870;
  }
  ui_system_config_config = function_68e8f0;
  if (bVar6) {
    ui_system_config_config = function_68e970;
  }
  ui_system_config_config = function_68e9f0;
  if (bVar6) {
    ui_system_config_config = function_68ea70;
  }
  ui_system_config_config = function_68eaf0;
  if (bVar6) {
    ui_system_config_config = function_68eb60;
  }
  ui_system_config_config = function_68ebd0;
  if (bVar6) {
    ui_system_config_config = function_68ec40;
  }
  ui_system_config_config = function_68ecb0;
  if (bVar6) {
    ui_system_config_config = function_68ed20;
  }
  ui_system_config_config = function_68ed90;
  if (bVar6) {
    ui_system_config_config = function_68ee80;
  }
  ui_system_config_config = function_68ef70;
  if (bVar6) {
    ui_system_config_config = function_68f060;
  }
  if (bVar4) {
    ui_system_config_config = function_695700;
  }
  ui_system_config_config = function_68f150;
  if (bVar6) {
    ui_system_config_config = function_68f240;
  }
  ui_system_config_config = function_68f330;
  if (bVar6) {
    ui_system_config_config = function_68f3a0;
  }
  ui_system_config_config = function_68f410;
  if (bVar6) {
    ui_system_config_config = function_68f480;
  }
  ui_system_config_config = function_68f4f0;
  if (bVar6) {
    ui_system_config_config = function_68f680;
  }
  ui_system_config_config = function_68f810;
  if (bVar6) {
    ui_system_config_config = function_68f9a0;
  }
  if (bVar4) {
    ui_system_config_config = function_695750;
  }
  ui_system_config_config = function_68fb30;
  if (bVar6) {
    ui_system_config_config = function_68fba0;
  }
  ui_system_config_config = function_68fc10;
  if (bVar6) {
    ui_system_config_config = function_68fc80;
  }
  ui_system_config_config = function_68fcf0;
  if (bVar6) {
    ui_system_config_config = function_68fd60;
  }
  ui_system_config_config = function_68fdd0;
  if (bVar4) {
    ui_system_config_config = function_695820;
  }
  ui_system_config_config = function_68fe10;
  if (bVar4) {
    ui_system_config_config = function_695870;
  }
  ui_system_config_config = function_68ff60;
  if (bVar4) {
    ui_system_config_config = function_6958c0;
  }
  ui_system_config_config = function_690200;
  if (bVar4) {
    ui_system_config_config = function_695990;
  }
  ui_system_config_config = function_6903c0;
  if (bVar4) {
    ui_system_config_config = function_695ac0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_66e230(code *param_1)
void function_66e230(code *param_1)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  if (ui_system_config == 0) {
    LOCK();
    ui_system_config = ui_system_config + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = ui_system_config != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = ui_system_config;
    }
    ui_system_config = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(ui_system_config);
    if (ui_system_config == 0) {
      (*param_1)();
      ui_system_config = 1;
    }
    LeaveCriticalSection(ui_system_config);
    LOCK();
    iVar1 = ui_system_config + -1;
    UNLOCK();
    bVar4 = ui_system_config == 1;
    ui_system_config = iVar1;
    if (bVar4) {
      DeleteCriticalSection(ui_system_config);
      free(ui_system_config);
      ui_system_config = 0;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_66e246(void)
void function_66e246(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *unaff_RDI;
  bool bVar4;
  LOCK();
  ui_system_config = ui_system_config + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = ui_system_config != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = ui_system_config;
  }
  ui_system_config = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(ui_system_config);
  if (ui_system_config == 0) {
    (*unaff_RDI)();
    ui_system_config = 1;
  }
  LeaveCriticalSection(ui_system_config);
  LOCK();
  iVar1 = ui_system_config + -1;
  UNLOCK();
  bVar4 = ui_system_config == 1;
  ui_system_config = iVar1;
  if (bVar4) {
    DeleteCriticalSection(ui_system_config);
    free(ui_system_config);
    ui_system_config = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_66e2a3(void)
void function_66e2a3(void)
{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  (*unaff_RDI)();
  ui_system_config = 1;
  LeaveCriticalSection(ui_system_config);
  LOCK();
  iVar1 = ui_system_config + -1;
  UNLOCK();
  bVar2 = ui_system_config == 1;
  ui_system_config = iVar1;
  if (bVar2) {
    DeleteCriticalSection(ui_system_config);
    free(ui_system_config);
    ui_system_config = 0;
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018066e34a)
// WARNING: Removing unreachable block (ram,0x00018066e31b)
// WARNING: Removing unreachable block (ram,0x00018066e30a)
uint function_66e300(void)
{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint in_XCR0;
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar2 = *puVar1;
  uVar3 = uVar2;
  if (uVar2 != 0) {
    puVar1 = (uint *)cpuid_Version_info(1);
    uVar3 = *puVar1;
    if ((((puVar1[3] & 0x18000000) == 0x18000000) && (uVar3 = in_XCR0, ((byte)in_XCR0 & 6) == 6)) &&
       (6 < uVar2)) {
      puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
      uVar3 = *puVar1;
    }
  }
  return uVar3;
}
uint64_t function_66e500(int64_t param_1,uint param_2,uint param_3)
{
  int iVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t *puVar5;
  function_66e7a0();
  if ((param_2 & 0xf) != 0) {
    param_2 = param_2 + (0x10 - (param_2 & 0xf));
  }
  if ((param_3 & 0xf) != 0) {
    param_3 = param_3 + (0x10 - (param_3 & 0xf));
  }
  puVar3 = (int32_t *)(param_1 + 0x80c);
  iVar4 = 0;
  puVar5 = (int32_t *)(param_1 + 0x9c0);
  do {
    *puVar5 = 0;
    *puVar3 = 0;
    iVar1 = function_697e60((int64_t)iVar4 * 0x90 + 0x780 + param_1,param_2,param_3,0x20);
    if (iVar1 < 0) goto LAB_18066e704;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 0x24;
  } while (iVar4 < 4);
  *(int32_t *)(param_1 + 0x9d0) = 0;
  *(int32_t *)(param_1 + 0x9d4) = 1;
  *(int32_t *)(param_1 + 0x9d8) = 2;
  *(int32_t *)(param_1 + 0x9dc) = 3;
  *(uint64_t *)(param_1 + 0x9c0) = 0x100000001;
  *(uint64_t *)(param_1 + 0x9c8) = 0x100000001;
  iVar4 = function_697e60(param_1 + 0x9e0,param_2,0x10);
  if (-1 < iVar4) {
    iVar1 = (int)param_3 >> 4;
    iVar4 = (int)param_2 >> 4;
    *(int *)(param_1 + 3000) = iVar4;
    *(int *)(param_1 + 0xbb4) = iVar1;
    *(int *)(param_1 + 0xbbc) = iVar4 + 1;
    *(int *)(param_1 + 0xbb0) = iVar4 * iVar1;
    lVar2 = CoreSystem_MemoryController0((int64_t)((iVar1 + 1) * (iVar4 + 1)),0x4c);
    *(int64_t *)(param_1 + 0xbe8) = lVar2;
    if (lVar2 != 0) {
      *(int64_t *)(param_1 + 0xbf0) = ((int64_t)*(int *)(param_1 + 0xbbc) + 1) * 0x4c + lVar2;
      lVar2 = CoreSystem_MemoryController0((int64_t)*(int *)(param_1 + 3000) * 9,1);
      *(int64_t *)(param_1 + 0x1958) = lVar2;
      if (lVar2 != 0) {
        iVar4 = function_697e60(param_1 + 0xa70,param_2,param_3,0x20);
        if (-1 < iVar4) {
          *(int32_t *)(param_1 + 0xb90) = 0;
// WARNING: Subroutine does not return
          memset(param_1 + 0x2230,0,0xc40);
        }
      }
    }
  }
LAB_18066e704:
  function_66e7a0(param_1);
  return 1;
}
// 函数: void function_66e730(int64_t param_1)
void function_66e730(int64_t param_1)
{
  function_698140();
  SystemFunction_0001806980f0(param_1);
  SystemFunction_0001806980d0();
  *(uint64_t *)(param_1 + 0xbc0) = 1;
  *(int32_t *)(param_1 + 0xc00) = 0;
  *(uint64_t *)(param_1 + 0xbc8) = 0;
  *(int32_t *)(param_1 + 0x2224) = 0;
  *(int32_t *)(param_1 + 0x770) = 0;
  *(uint64_t *)(param_1 + 0x1944) = 0;
  *(uint64_t *)(param_1 + 0x194c) = 0;
  *(uint64_t *)(param_1 + 0x1938) = 0;
  return;
}
// 函数: void function_66e7a0(int64_t param_1)
void function_66e7a0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1 + 0x780;
  lVar2 = 4;
  do {
    function_697ed0(lVar1);
    lVar1 = lVar1 + 0x90;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  function_697ed0(param_1 + 0x9e0);
  function_697ed0(param_1 + 0xa70);
  if (*(int *)(param_1 + 0xb90) != 0) {
    function_697ed0(param_1 + 0xb00);
  }
  SystemFunction_00018066e940(*(uint64_t *)(param_1 + 0xb98));
  *(uint64_t *)(param_1 + 0xb98) = 0;
  SystemFunction_00018066e940(*(uint64_t *)(param_1 + 0x1958));
  SystemFunction_00018066e940(*(uint64_t *)(param_1 + 0xbe8));
  *(uint64_t *)(param_1 + 0x1958) = 0;
  *(uint64_t *)(param_1 + 0xbe8) = 0;
  return;
}
void thunk_function_66e7a0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1 + 0x780;
  lVar2 = 4;
  do {
    function_697ed0(lVar1);
    lVar1 = lVar1 + 0x90;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  function_697ed0(param_1 + 0x9e0);
  function_697ed0(param_1 + 0xa70);
  if (*(int *)(param_1 + 0xb90) != 0) {
    function_697ed0(param_1 + 0xb00);
  }
  SystemFunction_00018066e940(*(uint64_t *)(param_1 + 0xb98));
  *(uint64_t *)(param_1 + 0xb98) = 0;
  SystemFunction_00018066e940(*(uint64_t *)(param_1 + 0x1958));
  SystemFunction_00018066e940(*(uint64_t *)(param_1 + 0xbe8));
  *(uint64_t *)(param_1 + 0x1958) = 0;
  *(uint64_t *)(param_1 + 0xbe8) = 0;
  return;
}
// 函数: void CoreSystem_MemoryController0(int64_t param_1,int64_t param_2)
void CoreSystem_MemoryController0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  lVar1 = malloc(param_1 * param_2 + 0x17);
  if (lVar1 != 0) {
    uVar2 = lVar1 + 0x17U & 0xfffffffffffffff0;
    *(int64_t *)(uVar2 - 8) = lVar1;
// WARNING: Subroutine does not return
    memset(uVar2,0,param_1 * param_2);
  }
  return;
}
// 函数: void function_66e90c(void)
void function_66e90c(void)
{
  int64_t in_RAX;
  uint64_t uVar1;
  uVar1 = in_RAX + 0x17U & 0xfffffffffffffff0;
  *(int64_t *)(uVar1 - 8) = in_RAX;
// WARNING: Subroutine does not return
  memset(uVar1,0);
}
// 函数: void function_66e938(void)
void function_66e938(void)
{
  return;
}
uint64_t RenderingSystem_RenderTarget(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  lVar1 = malloc(param_2 + 7 + param_1);
  if (lVar1 != 0) {
    uVar2 = (int64_t)((int)param_1 + -1) + 8 + lVar1 & (int64_t)-(int)param_1;
    *(int64_t *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
  return 0;
}
uint64_t function_66e9b0(int64_t param_1)
{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  if (((*(int *)(param_1 + 0x441c) == 0) && (*(uint *)(param_1 + 0x430c) < 2)) &&
     (*(int *)(param_1 + 0x4358) == 0)) {
    lVar3 = (int64_t)*(int *)(param_1 + 0x1c94);
    if (1 < *(int *)(param_1 + 0x1c80 + lVar3 * 4)) {
      piVar1 = (int *)(param_1 + 0x1c80 + lVar3 * 4);
      *piVar1 = *piVar1 + -1;
      iVar2 = SystemFunction_00018066eb80(param_1 + 0x12c0);
      *(int *)(param_1 + 0x1c94) = iVar2;
      function_69c540(param_1 + 0x1a40 + lVar3 * 0x90,param_1 + 0x1a40 + (int64_t)iVar2 * 0x90);
    }
    *(int32_t *)(param_1 + 0x1ac8 + (int64_t)*(int *)(param_1 + 0x1c94) * 0x90) = 1;
    *(int32_t *)(param_1 + 0x1e68) = 0;
    return 0;
  }
  return 1;
}
uint64_t function_66e9db(int64_t param_1)
{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  lVar3 = (int64_t)*(int *)(param_1 + 0x1c94);
  if (1 < *(int *)(param_1 + 0x1c80 + lVar3 * 4)) {
    piVar1 = (int *)(param_1 + 0x1c80 + lVar3 * 4);
    *piVar1 = *piVar1 + -1;
    iVar2 = SystemFunction_00018066eb80(param_1 + 0x12c0);
    *(int *)(param_1 + 0x1c94) = iVar2;
    function_69c540(param_1 + 0x1a40 + lVar3 * 0x90,param_1 + 0x1a40 + (int64_t)iVar2 * 0x90);
  }
  *(int32_t *)(param_1 + 0x1ac8 + (int64_t)*(int *)(param_1 + 0x1c94) * 0x90) = 1;
  *(int32_t *)(param_1 + 0x1e68) = 0;
  return 0;
}
uint64_t function_66ea6a(void)
{
  return 1;
}
uint64_t function_66ea80(void)
{
  int64_t lVar1;
  uint64_t in_R9;
  lVar1 = RenderingSystem_RenderTarget(0x20,0x4440);
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    memset(lVar1,0,0x4440,in_R9,lVar1);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_66ebc0(void)
void function_66ebc0(void)
{
  if (ui_system_config == 0) {
    SystemFunction_00018066e220();
    SystemFunction_00018069c2d0();
    ui_system_config = 1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_66ebf0(code *param_1)
void function_66ebf0(code *param_1)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  if (ui_system_config == 0) {
    LOCK();
    ui_system_config = ui_system_config + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = ui_system_config != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = ui_system_config;
    }
    ui_system_config = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(ui_system_config);
    if (ui_system_config == 0) {
      (*param_1)();
      ui_system_config = 1;
    }
    LeaveCriticalSection(ui_system_config);
    LOCK();
    iVar1 = ui_system_config + -1;
    UNLOCK();
    bVar4 = ui_system_config == 1;
    ui_system_config = iVar1;
    if (bVar4) {
      DeleteCriticalSection(ui_system_config);
      free(ui_system_config);
      ui_system_config = 0;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_66ec06(void)
void function_66ec06(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *unaff_RDI;
  bool bVar4;
  LOCK();
  ui_system_config = ui_system_config + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = ui_system_config != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = ui_system_config;
  }
  ui_system_config = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(ui_system_config);
  if (ui_system_config == 0) {
    (*unaff_RDI)();
    ui_system_config = 1;
  }
  LeaveCriticalSection(ui_system_config);
  LOCK();
  iVar1 = ui_system_config + -1;
  UNLOCK();
  bVar4 = ui_system_config == 1;
  ui_system_config = iVar1;
  if (bVar4) {
    DeleteCriticalSection(ui_system_config);
    free(ui_system_config);
    ui_system_config = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_66ec63(void)
void function_66ec63(void)
{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  (*unaff_RDI)();
  ui_system_config = 1;
  LeaveCriticalSection(ui_system_config);
  LOCK();
  iVar1 = ui_system_config + -1;
  UNLOCK();
  bVar2 = ui_system_config == 1;
  ui_system_config = iVar1;
  if (bVar2) {
    DeleteCriticalSection(ui_system_config);
    free(ui_system_config);
    ui_system_config = 0;
  }
  return;
}
int32_t function_66eea0(int *param_1,int64_t param_2)
{
  int64_t lVar1;
  if (*param_1 == 0) {
    lVar1 = function_66ea80(param_2);
    *(int64_t *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      return 1;
    }
    *(int32_t *)(lVar1 + 0x4384) = *(int32_t *)(param_2 + 0x10);
    function_6708b0(*(uint64_t *)(param_1 + 2));
  }
  return 0;
}
int32_t function_66ef00(int *param_1)
{
  int64_t lVar1;
  if (*param_1 == 0) {
    lVar1 = *(int64_t *)(param_1 + 2);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(int *)(lVar1 + 0x4380) != 0) {
      function_671080(lVar1,*(int32_t *)(lVar1 + 0x1e74));
    }
    function_670b00(lVar1);
    thunk_function_66e7a0(lVar1 + 0x12c0);
    SystemFunction_00018066e940(lVar1);
  }
  return 0;
}
int32_t
function_66ef60(int64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4,
             uint64_t param_5)
{
  int32_t uVar1;
  if ((*(int *)(param_1 + 0x4410) != 1) && (*(int *)(param_1 + 0x1e68) != 0)) {
    *(int32_t *)(param_1 + 0x4410) = 1;
    *param_3 = *(uint64_t *)(param_1 + 0x4408);
    *param_4 = 0;
    uVar1 = function_698e20(param_1 + 0x12c0,param_2,param_5);
    SystemFunction_000180001000();
    return uVar1;
  }
  return 0xffffffff;
}
int32_t function_66efd0(int64_t param_1,int param_2,int *param_3)
{
  int32_t *puVar1;
  int iVar2;
  void *puVar4;
  int64_t lVar3;
  puVar1 = (int32_t *)(param_1 + 0x12c0);
  if (param_2 == 1) {
    iVar2 = *(int *)(param_1 + 0x1c94);
  }
  else if (param_2 == 2) {
    iVar2 = *(int *)(param_1 + 0x1c98);
  }
  else {
    if (param_2 != 4) {
      puVar4 = &processed_var_7720_ptr;
      goto LAB_18066f069;
    }
    iVar2 = *(int *)(param_1 + 0x1c9c);
  }
  lVar3 = (int64_t)iVar2;
  if ((((*(int *)(param_1 + 0x1a44 + lVar3 * 0x90) == param_3[1]) &&
       (puVar1[lVar3 * 0x24 + 0x1e0] == *param_3)) &&
      (*(int *)(param_1 + 0x1a58 + lVar3 * 0x90) == param_3[6])) &&
     (*(int *)(param_1 + 0x1a54 + lVar3 * 0x90) == param_3[5])) {
    function_69c540(puVar1 + lVar3 * 0x24 + 0x1e0,param_3);
    return *puVar1;
  }
  puVar4 = &processed_var_7744_ptr;
LAB_18066f069:
  SystemInitializationProcessor(puVar1,1,puVar4);
  return *puVar1;
}
uint64_t function_66f080(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  int8_t stack_array_38 [32];
  uint local_var_18;
  int32_t *plocal_var_10;
  puVar1 = (int32_t *)(param_1 + 0x12c0);
  *puVar1 = 0;
  plocal_var_10 = puVar1;
  uVar3 = function_66e9b0();
  local_var_18 = (uint)uVar3;
  if ((int)local_var_18 < 1) {
    return uVar3;
  }
  iVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x1c80 + (int64_t)iVar4 * 4) == 0) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  *(int32_t *)(param_1 + 0x1c80 + (int64_t)iVar4 * 4) = 1;
  *(int *)(param_1 + 0x1c90) = iVar4;
  *(int32_t **)(param_1 + 0x12a0) = puVar1 + (int64_t)iVar4 * 0x24 + 0x1e0;
  *(int64_t *)(param_1 + 0x12a8) = param_1 + 0x1a40 + (int64_t)*(int *)(param_1 + 0x1c94) * 0x90;
  *(int64_t *)(param_1 + 0x12b0) = param_1 + 0x1a40 + (int64_t)*(int *)(param_1 + 0x1c98) * 0x90;
  *(int64_t *)(param_1 + 0x12b8) = param_1 + 0x1a40 + (int64_t)*(int *)(param_1 + 0x1c9c) * 0x90;
  iVar4 = __intrinsic_setjmp(param_1 + 0x1320,stack_array_38);
  if (iVar4 == 0) {
    *(int32_t *)(param_1 + 0x1318) = 1;
    uVar2 = function_69a490(param_1);
    puVar1 = plocal_var_10;
    local_var_18 = uVar2;
    if ((int)uVar2 < 0) {
      if (0 < (int)plocal_var_10[(int64_t)(int)plocal_var_10[0x274] + 0x270]) {
        plocal_var_10[(int64_t)(int)plocal_var_10[0x274] + 0x270] =
             plocal_var_10[(int64_t)(int)plocal_var_10[0x274] + 0x270] + -1;
      }
    }
    else {
      iVar4 = SystemFunction_00018066ecc0(plocal_var_10);
      if (iVar4 == 0) {
        SystemFunction_000180001000();
        if (puVar1[0x2ea] != 0) {
          puVar1[0x887] = puVar1[0x887] + 1;
          *(uint64_t *)(puVar1 + 0x2fe) = *(uint64_t *)(puVar1 + 0x2fc);
        }
        *(uint64_t *)(param_1 + 0x4408) = param_4;
        *(int32_t *)(param_1 + 0x4410) = 0;
        goto LAB_18066f254;
      }
    }
    *(int32_t *)(param_1 + 0x12c0) = 1;
  }
  else {
    plocal_var_10[(int64_t)(int)plocal_var_10[0x275] * 0x24 + 0x202] = 1;
    uVar2 = local_var_18;
    if (0 < (int)plocal_var_10[(int64_t)(int)plocal_var_10[0x274] + 0x270]) {
      plocal_var_10[(int64_t)(int)plocal_var_10[0x274] + 0x270] =
           plocal_var_10[(int64_t)(int)plocal_var_10[0x274] + 0x270] + -1;
    }
  }
LAB_18066f254:
  *(int32_t *)(param_1 + 0x1318) = 0;
  SystemFunction_000180001000();
  return (uint64_t)uVar2;
}
int32_t function_66f2e0(int64_t param_1,int param_2,int *param_3)
{
  int32_t *puVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  void *puVar5;
  int *piVar6;
  puVar1 = (int32_t *)(param_1 + 0x12c0);
  if (param_2 == 1) {
    piVar6 = (int *)(param_1 + 0x1c94);
  }
  else if (param_2 == 2) {
    piVar6 = (int *)(param_1 + 0x1c98);
  }
  else {
    if (param_2 != 4) {
      puVar5 = &processed_var_7720_ptr;
      goto LAB_18066f3c7;
    }
    piVar6 = (int *)(param_1 + 0x1c9c);
  }
  lVar4 = (int64_t)*piVar6;
  if ((((*(int *)(param_1 + 0x1a44 + lVar4 * 0x90) == param_3[1]) &&
       (*(int *)(param_1 + 0x1a40 + lVar4 * 0x90) == *param_3)) &&
      (*(int *)(param_1 + 0x1a58 + lVar4 * 0x90) == param_3[6])) &&
     (*(int *)(param_1 + 0x1a54 + lVar4 * 0x90) == param_3[5])) {
    iVar3 = SystemFunction_00018066eb80(puVar1);
    piVar2 = (int *)(param_1 + 0x1c80 + (int64_t)iVar3 * 4);
    *piVar2 = *piVar2 + -1;
    if (0 < (int)puVar1[(int64_t)*piVar6 + 0x270]) {
      puVar1[(int64_t)*piVar6 + 0x270] = puVar1[(int64_t)*piVar6 + 0x270] + -1;
    }
    *piVar6 = iVar3;
    piVar2 = (int *)(param_1 + 0x1c80 + (int64_t)iVar3 * 4);
    *piVar2 = *piVar2 + 1;
    function_69c540(param_3,param_1 + 0x1a40 + (int64_t)*piVar6 * 0x90);
    return *puVar1;
  }
  puVar5 = &processed_var_7744_ptr;
LAB_18066f3c7:
  SystemInitializationProcessor(puVar1,1,puVar5);
  return *puVar1;
}