/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part319.c - 16 个函数
// 函数: void NetworkProtocol_3f380(int64_t param_1,uint64_t param_2)
void NetworkProtocol_3f380(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  uint uVar2;
  uint64_t *puVar3;
  puVar3 = (uint64_t *)(param_1 + 0x30);
  uVar2 = 0;
  do {
    iVar1 = (**(code **)(*(int64_t *)*puVar3 + 0x10))((int64_t *)*puVar3,param_2);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 2);
  return;
}
uint64_t NetworkProtocol_3f3d0(int64_t param_1)
{
  char cVar1;
  uint uVar2;
  uint64_t *puVar3;
  uVar2 = 0;
  puVar3 = (uint64_t *)(param_1 + 0x30);
  do {
    cVar1 = (**(code **)(*(int64_t *)*puVar3 + 8))();
    if (cVar1 == '\0') {
      return 0;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 2);
  return 1;
}
uint64_t NetworkProtocol_3f420(int64_t param_1,uint64_t *param_2,int64_t *param_3)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint uVar5;
  uint64_t uVar6;
  uint astack_special_x_18 [2];
  plVar4 = (int64_t *)(param_1 + 0x30);
  *param_3 = 0;
  uVar5 = 0;
  do {
    plVar1 = (int64_t *)*plVar4;
    astack_special_x_18[0] = 0;
    uVar2 = func_0x00018076a7d0(*param_2,astack_special_x_18);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar6 = (uint64_t)astack_special_x_18[0];
    plVar1[3] = 0;
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,plVar1 + 3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = plVar1[3];
    if (lVar3 == 0) {
      *(int8_t *)(plVar1 + 1) = 1;
      astack_special_x_18[0] = 0;
      uVar2 = func_0x00018076a7d0(*param_2,astack_special_x_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      plVar1[2] = astack_special_x_18[0] - uVar6;
      lVar3 = plVar1[3];
    }
    *param_3 = *param_3 + lVar3;
    uVar5 = uVar5 + 1;
    plVar4 = plVar4 + 1;
  } while (uVar5 < 2);
  return 0;
}
uint64_t NetworkProtocol_3f500(int64_t param_1,int64_t *param_2,int64_t param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint uVar5;
  plVar4 = (int64_t *)(param_1 + 0x30);
  uVar5 = 0;
  do {
    plVar1 = (int64_t *)*plVar4;
    if ((char)plVar1[1] == '\0') {
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
LAB_18083f558:
      if ((int)uVar3 != 0) goto LAB_18083f55c;
    }
    else {
      if (*param_2 != 0) {
        uVar3 = MathTrigonometryFunction0(*param_2,(int)plVar1[2],1);
        goto LAB_18083f558;
      }
      uVar3 = 0x1c;
LAB_18083f55c:
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    lVar2 = *plVar4;
    uVar5 = uVar5 + 1;
    plVar4 = plVar4 + 1;
    param_3 = param_3 + *(int64_t *)(lVar2 + 0x18);
    if (1 < uVar5) {
      return 0;
    }
  } while( true );
}
uint64_t * NetworkProtocol_3f5b0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_9496_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}
uint64_t * NetworkProtocol_3f600(uint64_t *param_1,uint64_t param_2)
{
  NetworkProtocol_40100(param_1 + 4);
  *param_1 = &processed_var_9496_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}
uint64_t * NetworkProtocol_3f670(uint64_t *param_1,uint64_t param_2)
{
  NetworkProtocol_40100(param_1 + 0x12);
  param_1[0xe] = &processed_var_9496_ptr;
  param_1[8] = &processed_var_9496_ptr;
  *param_1 = &processed_var_9496_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xa0);
  }
  return param_1;
}
uint64_t * NetworkProtocol_3f6e0(uint64_t *param_1,uint64_t param_2)
{
  SystemCore_MemoryManager(param_1 + 4);
  *param_1 = &processed_var_9496_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}
uint64_t * NetworkProtocol_3f760(uint64_t *param_1,uint64_t param_2)
{
  SystemCore_MemoryManager(param_1 + 0xb);
  param_1[7] = &processed_var_9496_ptr;
  *param_1 = &processed_var_9496_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}
int NetworkProtocol_3f7b0(int64_t param_1,int param_2,uint64_t param_3,int32_t param_4,
                 int32_t param_5)
{
  int iVar1;
  int iVar2;
  iVar1 = SystemDataProcessor();
  iVar2 = SystemDataProcessor(param_1 + iVar1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(iVar1 + param_1,param_2 - iVar1,param_5);
  return iVar2 + iVar1;
}
int NetworkProtocol_3f850(int64_t param_1,int param_2,uint64_t param_3,int32_t param_4,
                 int32_t param_5)
{
  int iVar1;
  int iVar2;
  iVar1 = SystemDataProcessor();
  iVar2 = SystemDataProcessor(param_1 + iVar1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ProcessData(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(iVar1 + param_1,param_2 - iVar1,param_5);
  return iVar2 + iVar1;
}
int NetworkProtocol_3f8f0(int64_t param_1,int param_2,uint64_t param_3,int32_t param_4,
                 int32_t param_5,int32_t param_6)
{
  int iVar1;
  int iVar2;
  iVar1 = SystemDataProcessor();
  iVar2 = SystemDataProcessor(param_1 + iVar1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ProcessData(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(iVar1 + param_1,param_2 - iVar1,param_5);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(iVar1 + param_1,param_2 - iVar1,param_6);
  return iVar2 + iVar1;
}
int NetworkProtocol_3f9b0(int64_t param_1,int param_2,uint64_t param_3,int32_t param_4,
                 int8_t param_5)
{
  int iVar1;
  int iVar2;
  iVar1 = SystemDataProcessor();
  iVar2 = SystemDataProcessor(param_1 + iVar1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ProcessData(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemCore_Cleanup(iVar1 + param_1,param_2 - iVar1,param_5);
  return iVar2 + iVar1;
}
int NetworkProtocol_3fa50(int64_t param_1,int param_2,uint64_t param_3,int32_t param_4,
                 int32_t param_5)
{
  int iVar1;
  int iVar2;
  iVar1 = SystemDataProcessor();
  iVar2 = SystemDataProcessor(param_1 + iVar1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ProcessData(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_ProcessDataEx(iVar1 + param_1,param_2 - iVar1,param_5);
  return iVar2 + iVar1;
}
int NetworkProtocol_3faf0(int64_t param_1,int param_2,uint64_t param_3,int32_t param_4,
                 int32_t param_5)
{
  int iVar1;
  int iVar2;
  iVar1 = BufferManager_ProcessData();
  iVar2 = SystemDataProcessor(param_1 + iVar1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(iVar1 + param_1,param_2 - iVar1,param_4);
  iVar1 = iVar1 + iVar2;
  iVar2 = SystemDataProcessor(iVar1 + param_1,param_2 - iVar1,&system_temp_buffer);
  iVar1 = iVar1 + iVar2;
  iVar2 = BufferManager_Initialize(iVar1 + param_1,param_2 - iVar1,param_5);
  return iVar2 + iVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_3fb90(int64_t *param_1,uint64_t param_2)
void NetworkProtocol_3fb90(int64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int8_t stack_array_58 [32];
  int8_t stack_array_38 [40];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
  lVar1 = (**(code **)(*param_1 + 0x278))(param_1,param_2,1);
  if (lVar1 == 0) {
// WARNING: Subroutine does not return
    SystemStateProcessor(param_2,stack_array_38);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_58);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_3fbf0(int64_t *param_1,uint64_t param_2)
void NetworkProtocol_3fbf0(int64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int8_t stack_array_58 [32];
  int8_t stack_array_38 [40];
  uint64_t local_var_10;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_58;
  lVar1 = (**(code **)(*param_1 + 0x2f0))(param_1,param_2,1);
  if (lVar1 == 0) {
// WARNING: Subroutine does not return
    SystemStateProcessor(param_2,stack_array_38);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_58);
}
// WARNING: Type propagation algorithm not settling
uint64_t NetworkProtocol_3fc50(int32_t param_1,char *param_2,uint64_t *param_3)
{
  uint64_t *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t alStackX_18 [2];
  uint64_t *aplocal_var_38 [2];
  if (((param_3 != (uint64_t *)0x0) && (*param_3 = 0, param_2 != (char *)0x0)) &&
     (iVar2 = BufferManager_ValidateRange(param_2), iVar2 < 0x200)) {
    alStackX_18[1] = 0;
    iVar3 = StringDataProcessor_ConvertWide(param_1,alStackX_18);
    if ((((iVar3 != 0) ||
         (((*(uint *)(alStackX_18[0] + 0x24) >> 1 & 1) != 0 &&
          (iVar4 = SystemSecurityProcessor(alStackX_18 + 1), iVar4 == 0)))) && (iVar3 == 0)) &&
       (iVar3 = SystemCore_SecurityChecker(*(uint64_t *)(alStackX_18[0] + 0x98),aplocal_var_38,0x228), iVar3 == 0)
       ) {
      *(int32_t *)(aplocal_var_38[0] + 4) = 0;
      *aplocal_var_38[0] = &processed_var_440_ptr;
      *(int32_t *)(aplocal_var_38[0] + 1) = 0x228;
      if (*param_2 == '{') {
        iVar3 = NetworkProtocol_48e50(param_2,aplocal_var_38[0] + 2);
      }
      else {
        iVar3 = NetworkProtocol_81fa0(alStackX_18[0],param_2);
      }
      if (iVar3 == 0) {
        puVar1 = aplocal_var_38[0] + 5;
        if (*(int *)(*(int64_t *)(alStackX_18[0] + 0x98) + 0x200) != 0) {
// WARNING: Subroutine does not return
          memcpy(puVar1,param_2,(int64_t)(iVar2 + 1));
        }
        *(int8_t *)puVar1 = 0;
        *(uint *)(aplocal_var_38[0] + 1) = ((int)puVar1 - (int)aplocal_var_38[0]) + 4U & 0xfffffffc;
        iVar2 = SystemDataResolver_ResolveAddress(*(uint64_t *)(alStackX_18[0] + 0x98),aplocal_var_38[0]);
        if (iVar2 == 0) {
          *param_3 = (uint64_t)*(uint *)(aplocal_var_38[0] + 4);
        }
      }
    }
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(alStackX_18 + 1);
  }
  return 0x1f;
}
// 函数: void NetworkProtocol_3fd54(void)
void NetworkProtocol_3fd54(void)
{
  int8_t *puVar1;
  int iVar2;
  int64_t in_RAX;
  int unaff_EBX;
  int32_t unaff_0000001c;
  int unaff_ESI;
  uint64_t *unaff_R14;
  int64_t local_buffer_70;
  puVar1 = (int8_t *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x28);
  if (*(int *)(*(int64_t *)(in_RAX + 0x98) + 0x200) == unaff_ESI) {
    *puVar1 = 0;
    *(uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 8) = ((int)puVar1 - unaff_EBX) + 4U & 0xfffffffc;
    iVar2 = SystemDataResolver_ResolveAddress(*(uint64_t *)(local_buffer_70 + 0x98));
    if (iVar2 == 0) {
      *unaff_R14 = (uint64_t)*(uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x20);
    }
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_buffer_00000078);
  }
// WARNING: Subroutine does not return
  memcpy(puVar1);
}
// 函数: void NetworkProtocol_3fdba(void)
void NetworkProtocol_3fdba(void)
{
  int64_t unaff_RBX;
  uint64_t *unaff_R14;
  *unaff_R14 = (uint64_t)*(uint *)(unaff_RBX + 0x20);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000078);
}
// WARNING: Type propagation algorithm not settling
uint64_t NetworkProtocol_3fde0(int32_t param_1,char *param_2,uint64_t *param_3)
{
  uint64_t *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t alStackX_18 [2];
  uint64_t *aplocal_var_38 [2];
  if (((param_3 != (uint64_t *)0x0) && (*param_3 = 0, param_2 != (char *)0x0)) &&
     (iVar2 = BufferManager_ValidateRange(param_2), iVar2 < 0x200)) {
    alStackX_18[1] = 0;
    iVar3 = StringDataProcessor_ConvertWide(param_1,alStackX_18);
    if ((((iVar3 != 0) ||
         (((*(uint *)(alStackX_18[0] + 0x24) >> 1 & 1) != 0 &&
          (iVar4 = SystemSecurityProcessor(alStackX_18 + 1), iVar4 == 0)))) && (iVar3 == 0)) &&
       (iVar3 = SystemCore_SecurityChecker(*(uint64_t *)(alStackX_18[0] + 0x98),aplocal_var_38,0x228), iVar3 == 0)
       ) {
      *(int32_t *)(aplocal_var_38[0] + 4) = 0;
      *aplocal_var_38[0] = &memory_allocator_312_ptr;
      *(int32_t *)(aplocal_var_38[0] + 1) = 0x228;
      if (*param_2 == '{') {
        iVar3 = NetworkProtocol_48e50(param_2,aplocal_var_38[0] + 2);
      }
      else {
        iVar3 = NetworkProtocol_81fa0(alStackX_18[0],param_2);
      }
      if (iVar3 == 0) {
        puVar1 = aplocal_var_38[0] + 5;
        if (*(int *)(*(int64_t *)(alStackX_18[0] + 0x98) + 0x200) != 0) {
// WARNING: Subroutine does not return
          memcpy(puVar1,param_2,(int64_t)(iVar2 + 1));
        }
        *(int8_t *)puVar1 = 0;
        *(uint *)(aplocal_var_38[0] + 1) = ((int)puVar1 - (int)aplocal_var_38[0]) + 4U & 0xfffffffc;
        iVar2 = SystemDataResolver_ResolveAddress(*(uint64_t *)(alStackX_18[0] + 0x98),aplocal_var_38[0]);
        if (iVar2 == 0) {
          *param_3 = (uint64_t)*(uint *)(aplocal_var_38[0] + 4);
        }
      }
    }
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(alStackX_18 + 1);
  }
  return 0x1f;
}
// 函数: void NetworkProtocol_3fee4(void)
void NetworkProtocol_3fee4(void)
{
  int8_t *puVar1;
  int iVar2;
  int64_t in_RAX;
  int unaff_EBX;
  int32_t unaff_0000001c;
  int unaff_ESI;
  uint64_t *unaff_R14;
  int64_t local_buffer_70;
  puVar1 = (int8_t *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x28);
  if (*(int *)(*(int64_t *)(in_RAX + 0x98) + 0x200) == unaff_ESI) {
    *puVar1 = 0;
    *(uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 8) = ((int)puVar1 - unaff_EBX) + 4U & 0xfffffffc;
    iVar2 = SystemDataResolver_ResolveAddress(*(uint64_t *)(local_buffer_70 + 0x98));
    if (iVar2 == 0) {
      *unaff_R14 = (uint64_t)*(uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x20);
    }
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_buffer_00000078);
  }
// WARNING: Subroutine does not return
  memcpy(puVar1);
}
// 函数: void NetworkProtocol_3ff4a(void)
void NetworkProtocol_3ff4a(void)
{
  int64_t unaff_RBX;
  uint64_t *unaff_R14;
  *unaff_R14 = (uint64_t)*(uint *)(unaff_RBX + 0x20);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000078);
}
// WARNING: Type propagation algorithm not settling
uint64_t NetworkProtocol_3ff70(int32_t param_1,char *param_2,uint64_t *param_3)
{
  uint64_t *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t alStackX_18 [2];
  uint64_t *aplocal_var_38 [2];
  if (((param_3 != (uint64_t *)0x0) && (*param_3 = 0, param_2 != (char *)0x0)) &&
     (iVar2 = BufferManager_ValidateRange(param_2), iVar2 < 0x200)) {
    alStackX_18[1] = 0;
    iVar3 = StringDataProcessor_ConvertWide(param_1,alStackX_18);
    if ((((iVar3 != 0) ||
         (((*(uint *)(alStackX_18[0] + 0x24) >> 1 & 1) != 0 &&
          (iVar4 = SystemSecurityProcessor(alStackX_18 + 1), iVar4 == 0)))) && (iVar3 == 0)) &&
       (iVar3 = SystemCore_SecurityChecker(*(uint64_t *)(alStackX_18[0] + 0x98),aplocal_var_38,0x228), iVar3 == 0)
       ) {
      *(int32_t *)(aplocal_var_38[0] + 4) = 0;
      *aplocal_var_38[0] = &processed_var_560_ptr;
      *(int32_t *)(aplocal_var_38[0] + 1) = 0x228;
      if (*param_2 == '{') {
        iVar3 = NetworkProtocol_48e50(param_2,aplocal_var_38[0] + 2);
      }
      else {
        iVar3 = NetworkProtocol_81fa0(alStackX_18[0],param_2);
      }
      if (iVar3 == 0) {
        puVar1 = aplocal_var_38[0] + 5;
        if (*(int *)(*(int64_t *)(alStackX_18[0] + 0x98) + 0x200) != 0) {
// WARNING: Subroutine does not return
          memcpy(puVar1,param_2,(int64_t)(iVar2 + 1));
        }
        *(int8_t *)puVar1 = 0;
        *(uint *)(aplocal_var_38[0] + 1) = ((int)puVar1 - (int)aplocal_var_38[0]) + 4U & 0xfffffffc;
        iVar2 = SystemDataResolver_ResolveAddress(*(uint64_t *)(alStackX_18[0] + 0x98),aplocal_var_38[0]);
        if (iVar2 == 0) {
          *param_3 = (uint64_t)*(uint *)(aplocal_var_38[0] + 4);
        }
      }
    }
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(alStackX_18 + 1);
  }
  return 0x1f;
}
// 函数: void NetworkProtocol_40074(void)
void NetworkProtocol_40074(void)
{
  int8_t *puVar1;
  int iVar2;
  int64_t in_RAX;
  int unaff_EBX;
  int32_t unaff_0000001c;
  int unaff_ESI;
  uint64_t *unaff_R14;
  int64_t local_buffer_70;
  puVar1 = (int8_t *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x28);
  if (*(int *)(*(int64_t *)(in_RAX + 0x98) + 0x200) == unaff_ESI) {
    *puVar1 = 0;
    *(uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 8) = ((int)puVar1 - unaff_EBX) + 4U & 0xfffffffc;
    iVar2 = SystemDataResolver_ResolveAddress(*(uint64_t *)(local_buffer_70 + 0x98));
    if (iVar2 == 0) {
      *unaff_R14 = (uint64_t)*(uint *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x20);
    }
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&local_buffer_00000078);
  }
// WARNING: Subroutine does not return
  memcpy(puVar1);
}
// 函数: void NetworkProtocol_400da(void)
void NetworkProtocol_400da(void)
{
  int64_t unaff_RBX;
  uint64_t *unaff_R14;
  *unaff_R14 = (uint64_t)*(uint *)(unaff_RBX + 0x20);
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000078);
}
// WARNING: Removing unreachable block (ram,0x00018084914f)
// WARNING: Removing unreachable block (ram,0x000180849163)
// WARNING: Removing unreachable block (ram,0x00018084919d)
// WARNING: Removing unreachable block (ram,0x0001808491a5)
// WARNING: Removing unreachable block (ram,0x0001808491ad)
// WARNING: Removing unreachable block (ram,0x0001808491b3)
// WARNING: Removing unreachable block (ram,0x000180849219)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint NetworkProtocol_40100(int64_t *param_1)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  uVar2 = uVar3 ^ (int)uVar3 >> 0x1f;
  if ((int)(uVar2 - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return uVar2;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    if (iVar1 < 0) {
// WARNING: Subroutine does not return
      memset(*param_1 + (int64_t)iVar1 * 0x14,0,(uint64_t)(uint)-iVar1 * 0x14);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (0 < (int)param_1[1]) {
    return 0x1c;
  }
  if ((0 < *(int *)((int64_t)param_1 + 0xc)) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
  }
  *param_1 = 0;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  return 0;
}
// WARNING: Type propagation algorithm not settling
// 函数: void NetworkProtocol_401c0(uint64_t param_1)
void NetworkProtocol_401c0(uint64_t param_1)
{
  int iVar1;
  int iVar2;
  int64_t alStackX_10 [2];
  uint64_t *pstack_special_x_20;
  alStackX_10[1] = 0;
  iVar1 = StringDataProcessor_ConvertWide(param_1,alStackX_10);
  if ((((iVar1 != 0) ||
       (((*(uint *)(alStackX_10[0] + 0x24) >> 1 & 1) != 0 &&
        (iVar2 = SystemSecurityProcessor(alStackX_10 + 1), iVar2 == 0)))) && (iVar1 == 0)) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStackX_10[0] + 0x98),&pstack_special_x_20,0x18), iVar1 == 0))
  {
    *pstack_special_x_20 = &processed_var_4128_ptr;
    *(int32_t *)(pstack_special_x_20 + 1) = 0x18;
    *(int *)(pstack_special_x_20 + 2) = (int)param_1;
    SystemDataResolver_ResolveAddress(*(uint64_t *)(alStackX_10[0] + 0x98));
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStackX_10 + 1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_MemoryManager(int64_t *param_1)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uVar3 = *(uint *)((int64_t)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&processed_var_8432_ptr,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(int32_t *)((int64_t)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
// WARNING: Subroutine does not return
    memset((int64_t)iVar1 + *param_1,0,(int64_t)-iVar1);
  }
  *(int32_t *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) &&
     (uVar2 = SystemDeallocationProcessor(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_40330(uint64_t *param_1,int param_2)
void NetworkProtocol_40330(uint64_t *param_1,int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int aiStack_148 [2];
  int64_t lStack_140;
  uint stack_array_138 [4];
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  func_0x000180741c10(&system_data_buffer);
  if (param_1 == (uint64_t *)0x0) {
    iVar3 = 0x1f;
  }
  else {
    *param_1 = 0;
    if (param_2 - 0x20200U < 0x100) {
      lStack_140 = 0;
      iVar3 = NetworkProtocol_75520(&lStack_140);
      if (iVar3 == 0) {
        aiStack_148[0] = 0;
        iVar3 = SystemCore_3aab0(*(uint64_t *)(lStack_140 + 0x78),aiStack_148);
        if (iVar3 == 0) {
          if (aiStack_148[0] != 0x20214) {
            NetworkProtocol_83a30();
            goto LAB_1808403d0;
          }
          iVar3 = func_0x00018088c570(lStack_140,stack_array_138);
          if (iVar3 == 0) {
            *param_1 = (uint64_t)stack_array_138[0];
            goto LAB_180840449;
          }
        }
      }
      if (iVar3 == 0) goto LAB_180840449;
    }
    else {
LAB_1808403d0:
      iVar3 = 0x14;
    }
  }
  if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0) {
    iVar1 = func_0x00018074bda0(stack_array_128,0x100,param_1);
    iVar2 = SystemDataProcessor(stack_array_128 + iVar1,0x100 - iVar1,&system_temp_buffer);
    BufferManager_ProcessData(stack_array_128 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),param_2);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(iVar3,0,0,&processed_var_432_ptr);
  }
LAB_180840449:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_40490(uint64_t param_1,uint64_t *param_2)
void NetworkProtocol_40490(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
  int iVar2;
  int8_t stack_array_178 [32];
  int8_t *plocal_var_158;
  int64_t alStack_148 [2];
  uint64_t *aplocal_var_138 [2];
  int8_t stack_array_128 [256];
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  if (param_2 == (uint64_t *)0x0) {
    if ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) == 0) {
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
    }
    func_0x00018074bda0(stack_array_128,0x100,0);
    plocal_var_158 = stack_array_128;
// WARNING: Subroutine does not return
    DataTransformer(0x1f,0xc,param_1,&processed_var_5504_ptr);
  }
  *param_2 = 0;
  alStack_148[1] = 0;
  iVar1 = StringDataProcessor_ConvertWide(param_1,alStack_148);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_148[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808404f2;
    iVar2 = SystemSecurityProcessor(alStack_148 + 1);
    if (iVar2 == 0) goto LAB_18084055a;
  }
  else {
LAB_18084055a:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = SystemCore_SecurityChecker(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138,0x20), iVar1 == 0))
  {
    *aplocal_var_138[0] = &processed_var_5400_ptr;
    *(int32_t *)(aplocal_var_138[0] + 3) = 0;
    *(int32_t *)(aplocal_var_138[0] + 1) = 0x20;
    *(int *)(aplocal_var_138[0] + 2) = (int)param_1;
    iVar1 = SystemDataResolver_ResolveAddress(*(uint64_t *)(alStack_148[0] + 0x98),aplocal_var_138[0]);
    if (iVar1 == 0) {
      *param_2 = (uint64_t)*(uint *)(aplocal_var_138[0] + 3);
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(alStack_148 + 1);
    }
  }
LAB_1808404f2:
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(alStack_148 + 1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkProtocol_40600(int32_t param_1,int param_2,int64_t param_3)
void NetworkProtocol_40600(int32_t param_1,int param_2,int64_t param_3)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t stack_array_88 [32];
  uint64_t local_var_68;
  int64_t lStack_60;
  int64_t lStack_58;
  int64_t lStack_50;
  int8_t stack_array_48 [40];
  uint64_t local_var_20;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  if (param_3 == 0) {
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_88);
  }
  lStack_58 = 0;
  local_var_68 = 0;
  lStack_60 = 0;
  iVar2 = StringDataProcessor_ConvertWide(0,&lStack_60);
  if ((((iVar2 == 0) && (iVar2 = SystemSecurityProcessor(&local_var_68,lStack_60), iVar2 == 0)) &&
      (iVar2 = StringDataProcessor_Convert(param_1,&lStack_50), iVar2 == 0)) &&
     ((lStack_58 = *(int64_t *)(lStack_50 + 8), -1 < param_2 &&
      (param_2 < *(int *)(lStack_58 + 0x88))))) {
    lVar4 = (int64_t)param_2 * 0x10 + *(int64_t *)(lStack_58 + 0x80);
    plVar1 = *(int64_t **)(lStack_60 + 800);
    lVar3 = (**(code **)(*plVar1 + 0x270))(plVar1,lVar4,1);
    if (lVar3 == 0) {
// WARNING: Subroutine does not return
      SystemStateProcessor(lVar4,stack_array_48);
    }
    if ((((*(int *)(lVar3 + 0x38) != 0) || (*(int *)(lVar3 + 0x3c) != 0)) ||
        ((*(int *)(lVar3 + 0x40) != 0 || (*(int *)(lVar3 + 0x44) != 0)))) &&
       (lVar3 = NetworkProtocol_3fb90(plVar1), lVar3 != 0)) {
      NetworkProtocol_47550(lVar3,param_3,1);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_var_68);
}
// 函数: void NetworkProtocol_4062e(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4,
void NetworkProtocol_4062e(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,int64_t param_7)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int64_t lVar4;
  param_6 = 0;
  param_5 = 0;
  iVar2 = StringDataProcessor_ConvertWide(0,&param_5,param_3,param_4,0);
  if (((iVar2 == 0) && (iVar2 = SystemSecurityProcessor(&local_buffer_00000020,param_5), iVar2 == 0)) &&
     (iVar2 = StringDataProcessor_Convert(unaff_EBP,&param_7), iVar2 == 0)) {
    param_6 = *(int64_t *)(param_7 + 8);
    if ((-1 < (int)unaff_RSI) && ((int)unaff_RSI < *(int *)(param_6 + 0x88))) {
      lVar4 = unaff_RSI * 0x10 + *(int64_t *)(param_6 + 0x80);
      plVar1 = *(int64_t **)(param_5 + 800);
      lVar3 = (**(code **)(*plVar1 + 0x270))(plVar1,lVar4,1);
      if (lVar3 == 0) {
// WARNING: Subroutine does not return
        SystemStateProcessor(lVar4,&local_buffer_00000040);
      }
      if ((((*(int *)(lVar3 + 0x38) != 0) || (*(int *)(lVar3 + 0x3c) != 0)) ||
          ((*(int *)(lVar3 + 0x40) != 0 || (*(int *)(lVar3 + 0x44) != 0)))) &&
         (lVar3 = NetworkProtocol_3fb90(plVar1), lVar3 != 0)) {
        NetworkProtocol_47550(lVar3);
      }
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000020);
}
// 函数: void NetworkProtocol_4063e(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void NetworkProtocol_4063e(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,int64_t param_7)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t in_XMM0_Qb;
  param_6 = 0;
  param_5 = in_XMM0_Qb;
  iVar2 = StringDataProcessor_ConvertWide();
  if (((iVar2 == 0) && (iVar2 = SystemSecurityProcessor(&local_buffer_00000020,param_5), iVar2 == 0)) &&
     (iVar2 = StringDataProcessor_Convert(unaff_EBP,&param_7), iVar2 == 0)) {
    param_6 = *(int64_t *)(param_7 + 8);
    if ((-1 < (int)unaff_RSI) && ((int)unaff_RSI < *(int *)(param_6 + 0x88))) {
      lVar4 = unaff_RSI * 0x10 + *(int64_t *)(param_6 + 0x80);
      plVar1 = *(int64_t **)(param_5 + 800);
      lVar3 = (**(code **)(*plVar1 + 0x270))(plVar1,lVar4,1,param_4,param_1);
      if (lVar3 == 0) {
// WARNING: Subroutine does not return
        SystemStateProcessor(lVar4,&local_buffer_00000040);
      }
      if ((((*(int *)(lVar3 + 0x38) != 0) || (*(int *)(lVar3 + 0x3c) != 0)) ||
          ((*(int *)(lVar3 + 0x40) != 0 || (*(int *)(lVar3 + 0x44) != 0)))) &&
         (lVar3 = NetworkProtocol_3fb90(plVar1), lVar3 != 0)) {
        NetworkProtocol_47550(lVar3);
      }
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000020);
}
// 函数: void NetworkProtocol_40746(void)
void NetworkProtocol_40746(void)
{
  uint64_t *unaff_RBX;
  uint64_t local_buffer_68;
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0;
  unaff_RBX[3] = 0;
  unaff_RBX[4] = 0;
  unaff_RBX[5] = 0;
  unaff_RBX[6] = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_68 ^ (uint64_t)&local_buffer_00000000);
}