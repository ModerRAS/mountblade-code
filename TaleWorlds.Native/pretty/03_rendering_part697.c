#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part697.c - 13 个函数

// 函数: void FUN_18066d7c0(void)
void FUN_18066d7c0(void)

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
  render_system_config_config = FUN_180674f40;
  if (bVar6) {
    render_system_config_config = FUN_180676930;
  }
  if (bVar4) {
    render_system_config_config = FUN_180677190;
  }
  render_system_config_config = FUN_180674930;
  if (bVar6) {
    render_system_config_config = FUN_180676320;
  }
  render_system_config_config = FUN_180674700;
  if (bVar6) {
    render_system_config_config = FUN_1806760f0;
  }
  render_system_config_config = FUN_180674aa0;
  if (bVar6) {
    render_system_config_config = FUN_180676490;
  }
  render_system_config_config = FUN_180674d10;
  if (bVar6) {
    render_system_config_config = FUN_180676700;
  }
  if (bVar4) {
    render_system_config_config = FUN_180677300;
  }
  render_system_config_config = FUN_1806750b0;
  if (bVar6) {
    render_system_config_config = FUN_180676aa0;
  }
  if (bVar4) {
    render_system_config_config = FUN_180677530;
  }
  render_system_config_config = FUN_1806780c0;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_4960_ptr;
  }
  render_system_config_config = FUN_1806782c0;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_5408_ptr;
  }
  render_system_config_config = FUN_180678430;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_4576_ptr;
  }
  render_system_config_config = FUN_180678540;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_4704_ptr;
  }
  render_system_config_config = FUN_180678810;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_6960_ptr;
  }
  render_system_config_config = FUN_1806789c0;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_7232_ptr;
  }
  render_system_config_config = FUN_180678b10;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_6688_ptr;
  }
  render_system_config_config = FUN_180678bc0;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_6784_ptr;
  }
  render_system_config_config = FUN_180678e20;
  if (bVar6) {
    render_system_config_config = (code *)&memory_allocator_3312_ptr;
  }
  render_system_config_config = FUN_180678ef0;
  if (bVar6) {
    render_system_config_config = (code *)&system_param1_ptr;
  }
  render_system_config_config = FUN_180678fc0;
  if (bVar6) {
    render_system_config_config = (code *)&memory_allocator_3088_ptr;
  }
  render_system_config_config = FUN_1806790b0;
  if (bVar6) {
    render_system_config_config = (code *)&memory_allocator_3184_ptr;
  }
  render_system_config_config = FUN_180679310;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_4176_ptr;
  }
  render_system_config_config = FUN_180679480;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_4304_ptr;
  }
  render_system_config_config = FUN_1806795f0;
  if (bVar6) {
    render_system_config_config = (code *)&memory_allocator_3904_ptr;
  }
  render_system_config_config = FUN_1806796f0;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_4000_ptr;
  }
  render_system_config_config = FUN_18067c470;
  if (bVar4) {
    render_system_config_config = FUN_1806844a0;
  }
  render_system_config_config = FUN_180679d30;
  if (bVar4) {
    render_system_config_config = FUN_18068b080;
  }
  render_system_config_config = FUN_180683f90;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_8096_ptr;
  }
  render_system_config_config = FUN_18068d2b0;
  if (bVar4) {
    render_system_config_config = FUN_1806905c0;
  }
  render_system_config_config = FUN_180679ac0;
  if (bVar6) {
    render_system_config_config = (code *)&rendering_buffer_2944_ptr;
  }
  render_system_config_config = FUN_180679b20;
  if (bVar6) {
    render_system_config_config = (code *)&memory_allocator_3008_ptr;
  }
  render_system_config_config = &processed_var_960_ptr;
  if (bVar6) {
    render_system_config_config = &rendering_buffer_2816_ptr;
  }
  render_system_config_config = &ui_system_data_1008_ptr;
  if (bVar6) {
    render_system_config_config = &rendering_buffer_2880_ptr;
  }
  render_system_config_config = FUN_1806917c0;
  if (bVar6) {
    render_system_config_config = (code *)&ui_system_data_1552_ptr;
  }
  render_system_config_config = FUN_180691db0;
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_9840_ptr;
  }
  render_system_config_config = FUN_180694010;
  if (bVar4) {
    render_system_config_config = FUN_180695530;
  }
  render_system_config_config = FUN_18068d480;
  if (bVar4) {
    render_system_config_config = FUN_180695560;
  }
  render_system_config_config = FUN_180695bf0;
  if (bVar6) {
    render_system_config_config = (code *)&rendering_buffer_2512_ptr;
  }
  if (bVar5) {
    render_system_config_config = (code *)&processed_var_4432_ptr;
  }
  render_system_config_config = FUN_180695f70;
  if (bVar6) {
    render_system_config_config = (code *)&memory_allocator_3392_ptr;
  }
  if (bVar5) {
    render_system_config_config = (code *)&processed_var_5920_ptr;
  }
  render_system_config_config = FUN_1806961a0;
  if (bVar8) {
    render_system_config_config = (code *)&processed_var_7008_ptr;
  }
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_9600_ptr;
  }
  render_system_config_config = FUN_180696370;
  if (bVar7) {
    render_system_config_config = (code *)&processed_var_5776_ptr;
  }
  render_system_config_config = FUN_180696540;
  if (bVar8) {
    render_system_config_config = (code *)&processed_var_7893_ptr;
  }
  if (bVar6) {
    render_system_config_config = (code *)&processed_var_6989_ptr;
  }
  render_system_config_config = FUN_180696710;
  if (bVar7) {
    render_system_config_config = (code *)&processed_var_7206_ptr;
  }
  render_system_config_config = (code *)&ui_system_data_160_ptr;
  if (bVar4) {
    render_system_config_config = FUN_180697340;
  }
  render_system_config_config = (code *)&processed_var_560_ptr;
  if (bVar4) {
    render_system_config_config = FUN_1806972a0;
  }
  render_system_config_config = (code *)&processed_var_48_ptr;
  if (bVar4) {
    render_system_config_config = FUN_180697460;
  }
  render_system_config_config = (code *)&processed_var_416_ptr;
  if (bVar4) {
    render_system_config_config = FUN_1806973c0;
  }
  render_system_config_config = (code *)&processed_var_5920_ptr;
  if (bVar4) {
    render_system_config_config = FUN_1806977e0;
  }
  render_system_config_config = (code *)&processed_var_9936_ptr;
  if (bVar4) {
    render_system_config_config = FUN_180697580;
  }
  render_system_config_config = (code *)&rendering_buffer_272_ptr;
  if (bVar4) {
    render_system_config_config = FUN_1806974e0;
  }
  render_system_config_config = FUN_1806968e0;
  if (bVar8) {
    render_system_config_config = (code *)&processed_var_9412_ptr;
  }
  render_system_config_config = FUN_180696a60;
  if (bVar7) {
    render_system_config_config = (code *)&processed_var_9212_ptr;
  }
  render_system_config_config = (code *)&processed_var_9536_ptr;
  if (bVar4) {
    render_system_config_config = FUN_180697680;
  }
  render_system_config_config = (code *)&processed_var_9792_ptr;
  if (bVar4) {
    render_system_config_config = FUN_180697600;
  }
  render_system_config_config = (code *)&processed_var_9424_ptr;
  if (bVar4) {
    render_system_config_config = FUN_180697770;
  }
  render_system_config_config = (code *)&processed_var_9648_ptr;
  if (bVar4) {
    render_system_config_config = FUN_1806976f0;
  }
  render_system_config_config = (code *)&rendering_buffer_2672_ptr;
  if (bVar4) {
    render_system_config_config = FUN_1806978b0;
  }
  render_system_config_config = FUN_180696be0;
  if (bVar8) {
    render_system_config_config = (code *)&processed_var_8370_ptr;
  }
  render_system_config_config = FUN_180696d90;
  if (bVar7) {
    render_system_config_config = (code *)&processed_var_8398_ptr;
  }
  render_system_config_config = FUN_180696f40;
  if (bVar8) {
    render_system_config_config = (code *)&processed_var_9055_ptr;
  }
  render_system_config_config = FUN_1806970f0;
  if (bVar7) {
    render_system_config_config = (code *)&processed_var_7956_ptr;
  }
  render_system_config_config = FUN_180697dd0;
  if (bVar6) {
    render_system_config_config = FUN_180677100;
  }
  render_system_config_config = FUN_18068d4b0;
  if (bVar6) {
    render_system_config_config = FUN_18068d530;
  }
  render_system_config_config = FUN_18068d5b0;
  if (bVar6) {
    render_system_config_config = FUN_18068d630;
  }
  render_system_config_config = FUN_18068d6b0;
  if (bVar6) {
    render_system_config_config = FUN_18068d730;
  }
  render_system_config_config = FUN_18068d7b0;
  if (bVar6) {
    render_system_config_config = FUN_18068d8d0;
  }
  render_system_config_config = FUN_18068d9f0;
  if (bVar6) {
    render_system_config_config = FUN_18068db10;
  }
  if (bVar4) {
    render_system_config_config = FUN_180695590;
  }
  render_system_config_config = FUN_18068dc30;
  if (bVar6) {
    render_system_config_config = FUN_18068dd50;
  }
  render_system_config_config = FUN_18068de70;
  if (bVar6) {
    render_system_config_config = FUN_18068def0;
  }
  render_system_config_config = FUN_18068df70;
  if (bVar6) {
    render_system_config_config = FUN_18068dff0;
  }
  render_system_config_config = FUN_18068e070;
  if (bVar6) {
    render_system_config_config = FUN_18068e250;
  }
  render_system_config_config = FUN_18068e430;
  if (bVar6) {
    render_system_config_config = FUN_18068e610;
  }
  if (bVar4) {
    render_system_config_config = FUN_180695600;
  }
  render_system_config_config = FUN_18068e7f0;
  if (bVar6) {
    render_system_config_config = FUN_18068e870;
  }
  render_system_config_config = FUN_18068e8f0;
  if (bVar6) {
    render_system_config_config = FUN_18068e970;
  }
  render_system_config_config = FUN_18068e9f0;
  if (bVar6) {
    render_system_config_config = FUN_18068ea70;
  }
  render_system_config_config = FUN_18068eaf0;
  if (bVar6) {
    render_system_config_config = FUN_18068eb60;
  }
  render_system_config_config = FUN_18068ebd0;
  if (bVar6) {
    render_system_config_config = FUN_18068ec40;
  }
  render_system_config_config = FUN_18068ecb0;
  if (bVar6) {
    render_system_config_config = FUN_18068ed20;
  }
  render_system_config_config = FUN_18068ed90;
  if (bVar6) {
    render_system_config_config = FUN_18068ee80;
  }
  render_system_config_config = FUN_18068ef70;
  if (bVar6) {
    render_system_config_config = FUN_18068f060;
  }
  if (bVar4) {
    render_system_config_config = FUN_180695700;
  }
  render_system_config_config = FUN_18068f150;
  if (bVar6) {
    render_system_config_config = FUN_18068f240;
  }
  render_system_config_config = FUN_18068f330;
  if (bVar6) {
    render_system_config_config = FUN_18068f3a0;
  }
  render_system_config_config = FUN_18068f410;
  if (bVar6) {
    render_system_config_config = FUN_18068f480;
  }
  render_system_config_config = FUN_18068f4f0;
  if (bVar6) {
    render_system_config_config = FUN_18068f680;
  }
  render_system_config_config = FUN_18068f810;
  if (bVar6) {
    render_system_config_config = FUN_18068f9a0;
  }
  if (bVar4) {
    render_system_config_config = FUN_180695750;
  }
  render_system_config_config = FUN_18068fb30;
  if (bVar6) {
    render_system_config_config = FUN_18068fba0;
  }
  render_system_config_config = FUN_18068fc10;
  if (bVar6) {
    render_system_config_config = FUN_18068fc80;
  }
  render_system_config_config = FUN_18068fcf0;
  if (bVar6) {
    render_system_config_config = FUN_18068fd60;
  }
  render_system_config_config = FUN_18068fdd0;
  if (bVar4) {
    render_system_config_config = FUN_180695820;
  }
  render_system_config_config = FUN_18068fe10;
  if (bVar4) {
    render_system_config_config = FUN_180695870;
  }
  render_system_config_config = FUN_18068ff60;
  if (bVar4) {
    render_system_config_config = FUN_1806958c0;
  }
  render_system_config_config = FUN_180690200;
  if (bVar4) {
    render_system_config_config = FUN_180695990;
  }
  render_system_config_config = FUN_1806903c0;
  if (bVar4) {
    render_system_config_config = FUN_180695ac0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066e230(code *param_1)
void FUN_18066e230(code *param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  
  if (render_system_config == 0) {
    LOCK();
    render_system_config = render_system_config + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = render_system_config != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = render_system_config;
    }
    render_system_config = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(render_system_config);
    if (render_system_config == 0) {
      (*param_1)();
      render_system_config = 1;
    }
    LeaveCriticalSection(render_system_config);
    LOCK();
    iVar1 = render_system_config + -1;
    UNLOCK();
    bVar4 = render_system_config == 1;
    render_system_config = iVar1;
    if (bVar4) {
      DeleteCriticalSection(render_system_config);
      free(render_system_config);
      render_system_config = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066e246(void)
void FUN_18066e246(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *unaff_RDI;
  bool bVar4;
  
  LOCK();
  render_system_config = render_system_config + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = render_system_config != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = render_system_config;
  }
  render_system_config = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(render_system_config);
  if (render_system_config == 0) {
    (*unaff_RDI)();
    render_system_config = 1;
  }
  LeaveCriticalSection(render_system_config);
  LOCK();
  iVar1 = render_system_config + -1;
  UNLOCK();
  bVar4 = render_system_config == 1;
  render_system_config = iVar1;
  if (bVar4) {
    DeleteCriticalSection(render_system_config);
    free(render_system_config);
    render_system_config = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066e2a3(void)
void FUN_18066e2a3(void)

{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  
  (*unaff_RDI)();
  render_system_config = 1;
  LeaveCriticalSection(render_system_config);
  LOCK();
  iVar1 = render_system_config + -1;
  UNLOCK();
  bVar2 = render_system_config == 1;
  render_system_config = iVar1;
  if (bVar2) {
    DeleteCriticalSection(render_system_config);
    free(render_system_config);
    render_system_config = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018066e34a)
// WARNING: Removing unreachable block (ram,0x00018066e31b)
// WARNING: Removing unreachable block (ram,0x00018066e30a)

uint FUN_18066e300(void)

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



uint64_t FUN_18066e500(int64_t param_1,uint param_2,uint param_3)

{
  int iVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int iVar4;
  int32_t *puVar5;
  
  FUN_18066e7a0();
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
    iVar1 = FUN_180697e60((int64_t)iVar4 * 0x90 + 0x780 + param_1,param_2,param_3,0x20);
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
  iVar4 = FUN_180697e60(param_1 + 0x9e0,param_2,0x10);
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
        iVar4 = FUN_180697e60(param_1 + 0xa70,param_2,param_3,0x20);
        if (-1 < iVar4) {
          *(int32_t *)(param_1 + 0xb90) = 0;
                    // WARNING: Subroutine does not return
          memset(param_1 + 0x2230,0,0xc40);
        }
      }
    }
  }
LAB_18066e704:
  FUN_18066e7a0(param_1);
  return 1;
}





// 函数: void FUN_18066e730(int64_t param_1)
void FUN_18066e730(int64_t param_1)

{
  FUN_180698140();
  func_0x0001806980f0(param_1);
  func_0x0001806980d0();
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





// 函数: void FUN_18066e7a0(int64_t param_1)
void FUN_18066e7a0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1 + 0x780;
  lVar2 = 4;
  do {
    FUN_180697ed0(lVar1);
    lVar1 = lVar1 + 0x90;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_180697ed0(param_1 + 0x9e0);
  FUN_180697ed0(param_1 + 0xa70);
  if (*(int *)(param_1 + 0xb90) != 0) {
    FUN_180697ed0(param_1 + 0xb00);
  }
  func_0x00018066e940(*(uint64_t *)(param_1 + 0xb98));
  *(uint64_t *)(param_1 + 0xb98) = 0;
  func_0x00018066e940(*(uint64_t *)(param_1 + 0x1958));
  func_0x00018066e940(*(uint64_t *)(param_1 + 0xbe8));
  *(uint64_t *)(param_1 + 0x1958) = 0;
  *(uint64_t *)(param_1 + 0xbe8) = 0;
  return;
}



void thunk_FUN_18066e7a0(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1 + 0x780;
  lVar2 = 4;
  do {
    FUN_180697ed0(lVar1);
    lVar1 = lVar1 + 0x90;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_180697ed0(param_1 + 0x9e0);
  FUN_180697ed0(param_1 + 0xa70);
  if (*(int *)(param_1 + 0xb90) != 0) {
    FUN_180697ed0(param_1 + 0xb00);
  }
  func_0x00018066e940(*(uint64_t *)(param_1 + 0xb98));
  *(uint64_t *)(param_1 + 0xb98) = 0;
  func_0x00018066e940(*(uint64_t *)(param_1 + 0x1958));
  func_0x00018066e940(*(uint64_t *)(param_1 + 0xbe8));
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





// 函数: void FUN_18066e90c(void)
void FUN_18066e90c(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  
  uVar1 = in_RAX + 0x17U & 0xfffffffffffffff0;
  *(int64_t *)(uVar1 - 8) = in_RAX;
                    // WARNING: Subroutine does not return
  memset(uVar1,0);
}





// 函数: void FUN_18066e938(void)
void FUN_18066e938(void)

{
  return;
}



uint64_t FUN_18066e960(int64_t param_1,int64_t param_2)

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



uint64_t FUN_18066e9b0(int64_t param_1)

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
      iVar2 = func_0x00018066eb80(param_1 + 0x12c0);
      *(int *)(param_1 + 0x1c94) = iVar2;
      FUN_18069c540(param_1 + 0x1a40 + lVar3 * 0x90,param_1 + 0x1a40 + (int64_t)iVar2 * 0x90);
    }
    *(int32_t *)(param_1 + 0x1ac8 + (int64_t)*(int *)(param_1 + 0x1c94) * 0x90) = 1;
    *(int32_t *)(param_1 + 0x1e68) = 0;
    return 0;
  }
  return 1;
}



uint64_t FUN_18066e9db(int64_t param_1)

{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  
  lVar3 = (int64_t)*(int *)(param_1 + 0x1c94);
  if (1 < *(int *)(param_1 + 0x1c80 + lVar3 * 4)) {
    piVar1 = (int *)(param_1 + 0x1c80 + lVar3 * 4);
    *piVar1 = *piVar1 + -1;
    iVar2 = func_0x00018066eb80(param_1 + 0x12c0);
    *(int *)(param_1 + 0x1c94) = iVar2;
    FUN_18069c540(param_1 + 0x1a40 + lVar3 * 0x90,param_1 + 0x1a40 + (int64_t)iVar2 * 0x90);
  }
  *(int32_t *)(param_1 + 0x1ac8 + (int64_t)*(int *)(param_1 + 0x1c94) * 0x90) = 1;
  *(int32_t *)(param_1 + 0x1e68) = 0;
  return 0;
}



uint64_t FUN_18066ea6a(void)

{
  return 1;
}



uint64_t FUN_18066ea80(void)

{
  int64_t lVar1;
  uint64_t in_R9;
  
  lVar1 = FUN_18066e960(0x20,0x4440);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,0x4440,in_R9,lVar1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066ebc0(void)
void FUN_18066ebc0(void)

{
  if (render_system_config == 0) {
    func_0x00018066e220();
    func_0x00018069c2d0();
    render_system_config = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066ebf0(code *param_1)
void FUN_18066ebf0(code *param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  
  if (render_system_config == 0) {
    LOCK();
    render_system_config = render_system_config + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = render_system_config != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = render_system_config;
    }
    render_system_config = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(render_system_config);
    if (render_system_config == 0) {
      (*param_1)();
      render_system_config = 1;
    }
    LeaveCriticalSection(render_system_config);
    LOCK();
    iVar1 = render_system_config + -1;
    UNLOCK();
    bVar4 = render_system_config == 1;
    render_system_config = iVar1;
    if (bVar4) {
      DeleteCriticalSection(render_system_config);
      free(render_system_config);
      render_system_config = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066ec06(void)
void FUN_18066ec06(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *unaff_RDI;
  bool bVar4;
  
  LOCK();
  render_system_config = render_system_config + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = render_system_config != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = render_system_config;
  }
  render_system_config = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(render_system_config);
  if (render_system_config == 0) {
    (*unaff_RDI)();
    render_system_config = 1;
  }
  LeaveCriticalSection(render_system_config);
  LOCK();
  iVar1 = render_system_config + -1;
  UNLOCK();
  bVar4 = render_system_config == 1;
  render_system_config = iVar1;
  if (bVar4) {
    DeleteCriticalSection(render_system_config);
    free(render_system_config);
    render_system_config = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066ec63(void)
void FUN_18066ec63(void)

{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  
  (*unaff_RDI)();
  render_system_config = 1;
  LeaveCriticalSection(render_system_config);
  LOCK();
  iVar1 = render_system_config + -1;
  UNLOCK();
  bVar2 = render_system_config == 1;
  render_system_config = iVar1;
  if (bVar2) {
    DeleteCriticalSection(render_system_config);
    free(render_system_config);
    render_system_config = 0;
  }
  return;
}



int32_t FUN_18066eea0(int *param_1,int64_t param_2)

{
  int64_t lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_18066ea80(param_2);
    *(int64_t *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      return 1;
    }
    *(int32_t *)(lVar1 + 0x4384) = *(int32_t *)(param_2 + 0x10);
    FUN_1806708b0(*(uint64_t *)(param_1 + 2));
  }
  return 0;
}



int32_t FUN_18066ef00(int *param_1)

{
  int64_t lVar1;
  
  if (*param_1 == 0) {
    lVar1 = *(int64_t *)(param_1 + 2);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(int *)(lVar1 + 0x4380) != 0) {
      FUN_180671080(lVar1,*(int32_t *)(lVar1 + 0x1e74));
    }
    FUN_180670b00(lVar1);
    thunk_FUN_18066e7a0(lVar1 + 0x12c0);
    func_0x00018066e940(lVar1);
  }
  return 0;
}



int32_t
FUN_18066ef60(int64_t param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4,
             uint64_t param_5)

{
  int32_t uVar1;
  
  if ((*(int *)(param_1 + 0x4410) != 1) && (*(int *)(param_1 + 0x1e68) != 0)) {
    *(int32_t *)(param_1 + 0x4410) = 1;
    *param_3 = *(uint64_t *)(param_1 + 0x4408);
    *param_4 = 0;
    uVar1 = FUN_180698e20(param_1 + 0x12c0,param_2,param_5);
    func_0x000180001000();
    return uVar1;
  }
  return 0xffffffff;
}



int32_t FUN_18066efd0(int64_t param_1,int param_2,int *param_3)

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
    FUN_18069c540(puVar1 + lVar3 * 0x24 + 0x1e0,param_3);
    return *puVar1;
  }
  puVar4 = &processed_var_7744_ptr;
LAB_18066f069:
  SystemInitializationProcessor(puVar1,1,puVar4);
  return *puVar1;
}



uint64_t FUN_18066f080(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  int8_t auStack_38 [32];
  uint uStack_18;
  int32_t *puStack_10;
  
  puVar1 = (int32_t *)(param_1 + 0x12c0);
  *puVar1 = 0;
  puStack_10 = puVar1;
  uVar3 = FUN_18066e9b0();
  uStack_18 = (uint)uVar3;
  if ((int)uStack_18 < 1) {
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
  iVar4 = __intrinsic_setjmp(param_1 + 0x1320,auStack_38);
  if (iVar4 == 0) {
    *(int32_t *)(param_1 + 0x1318) = 1;
    uVar2 = FUN_18069a490(param_1);
    puVar1 = puStack_10;
    uStack_18 = uVar2;
    if ((int)uVar2 < 0) {
      if (0 < (int)puStack_10[(int64_t)(int)puStack_10[0x274] + 0x270]) {
        puStack_10[(int64_t)(int)puStack_10[0x274] + 0x270] =
             puStack_10[(int64_t)(int)puStack_10[0x274] + 0x270] + -1;
      }
    }
    else {
      iVar4 = func_0x00018066ecc0(puStack_10);
      if (iVar4 == 0) {
        func_0x000180001000();
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
    puStack_10[(int64_t)(int)puStack_10[0x275] * 0x24 + 0x202] = 1;
    uVar2 = uStack_18;
    if (0 < (int)puStack_10[(int64_t)(int)puStack_10[0x274] + 0x270]) {
      puStack_10[(int64_t)(int)puStack_10[0x274] + 0x270] =
           puStack_10[(int64_t)(int)puStack_10[0x274] + 0x270] + -1;
    }
  }
LAB_18066f254:
  *(int32_t *)(param_1 + 0x1318) = 0;
  func_0x000180001000();
  return (uint64_t)uVar2;
}



int32_t FUN_18066f2e0(int64_t param_1,int param_2,int *param_3)

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
    iVar3 = func_0x00018066eb80(puVar1);
    piVar2 = (int *)(param_1 + 0x1c80 + (int64_t)iVar3 * 4);
    *piVar2 = *piVar2 + -1;
    if (0 < (int)puVar1[(int64_t)*piVar6 + 0x270]) {
      puVar1[(int64_t)*piVar6 + 0x270] = puVar1[(int64_t)*piVar6 + 0x270] + -1;
    }
    *piVar6 = iVar3;
    piVar2 = (int *)(param_1 + 0x1c80 + (int64_t)iVar3 * 4);
    *piVar2 = *piVar2 + 1;
    FUN_18069c540(param_3,param_1 + 0x1a40 + (int64_t)*piVar6 * 0x90);
    return *puVar1;
  }
  puVar5 = &processed_var_7744_ptr;
LAB_18066f3c7:
  SystemInitializationProcessor(puVar1,1,puVar5);
  return *puVar1;
}





