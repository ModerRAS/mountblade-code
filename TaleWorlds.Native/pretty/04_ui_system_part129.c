#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part129.c - 4 个函数
// 函数: void UIEvent_Initialize(void)
void UIEvent_Initialize(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t UIEvent_Process(int64_t param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  plVar1 = (int64_t *)
           SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&processed_var_8208_ptr,0xd0,0,0,1);
  if (plVar1 == (int64_t *)0x0) {
    return 0x26;
  }
  plVar1[1] = (int64_t)plVar1;
  *plVar1 = (int64_t)plVar1;
  plVar1[2] = 0;
  plVar2 = (int64_t *)
           SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x2000,&processed_var_8208_ptr,0xd6,0);
  if (plVar2 == (int64_t *)0x0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&processed_var_8208_ptr,0xd9,1);
  }
  lVar4 = 0x100;
  plVar3 = plVar2;
  do {
    plVar3[1] = (int64_t)plVar3;
    *plVar3 = (int64_t)plVar3;
    plVar3[3] = -1;
    plVar3[2] = 0;
    plVar3[1] = *(int64_t *)(param_1 + 0x10818);
    *plVar3 = param_1 + 0x10810;
    *(int64_t **)(param_1 + 0x10818) = plVar3;
    *(int64_t **)plVar3[1] = plVar3;
    plVar3 = plVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  plVar1[2] = (int64_t)plVar2;
  plVar1[1] = *(int64_t *)(param_1 + 0x10838);
  *plVar1 = param_1 + 0x10830;
  *(int64_t **)(param_1 + 0x10838) = plVar1;
  *(int64_t **)plVar1[1] = plVar1;
  return 0;
}
uint64_t SystemCore_ResourceManager0(int64_t param_1,char param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int *piVar4;
  int iVar5;
  uint local_var_ffffffffffffffc8;
  uint3 uVar6;
  uint64_t local_var_ffffffffffffffd0;
  int32_t uVar7;
  if (param_1 != 0) {
    Function_571d7c62(param_1,1);
  }
  if ((*(char *)(param_1 + 0x10784) == '\0') && (iVar1 = *(int *)(param_1 + 0x10780), 0 < iVar1)) {
    *(int8_t *)(param_1 + 0x10784) = 1;
    if (param_2 != '\0') {
      Function_571d7c62(param_1,3);
      iVar1 = *(int *)(param_1 + 0x10780);
    }
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        piVar4 = (int *)(param_1 + 0x780 + (int64_t)iVar5);
        uVar6 = (uint3)(local_var_ffffffffffffffc8 >> 8);
        uVar7 = (int32_t)(local_var_ffffffffffffffd0 >> 0x20);
        switch((char)*piVar4) {
        case '\0':
          local_var_ffffffffffffffd0 = *(uint64_t *)(piVar4 + 6);
          local_var_ffffffffffffffc8 = local_var_ffffffffffffffc8 & 0xffffff00;
          NetworkSystem_Send(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),0,piVar4[8],
                        local_var_ffffffffffffffc8,local_var_ffffffffffffffd0,0);
          break;
        case '\x01':
          local_var_ffffffffffffffd0 = *(uint64_t *)(piVar4 + 6);
          local_var_ffffffffffffffc8 = CONCAT31(uVar6,1);
          NetworkSystem_Send(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),0,piVar4[8],
                        local_var_ffffffffffffffc8,local_var_ffffffffffffffd0,0);
          break;
        case '\x02':
          local_var_ffffffffffffffc8 = piVar4[8];
          local_var_ffffffffffffffd0 = local_var_ffffffffffffffd0 & 0xffffffffffffff00;
          NetworkSystem_Receive(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),piVar4[6],piVar4[7],
                        local_var_ffffffffffffffc8,local_var_ffffffffffffffd0);
          break;
        case '\x03':
          lVar2 = *(int64_t *)(piVar4 + 2);
          local_var_ffffffffffffffd0 = CONCAT44(uVar7,4);
          local_var_ffffffffffffffc8 = (uint)uVar6 << 8;
          NetworkSystem_Connect(*(uint64_t *)(lVar2 + 0x60),*(uint64_t *)(lVar2 + 0x58),lVar2,1,
                        local_var_ffffffffffffffc8,local_var_ffffffffffffffd0);
          break;
        case '\x04':
          local_var_ffffffffffffffd0 = CONCAT44(uVar7,piVar4[8]);
          local_var_ffffffffffffffc8 = (uint)uVar6 << 8;
          NetworkSystem_Connect(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),
                        *(uint64_t *)(piVar4 + 6),1,local_var_ffffffffffffffc8,
                        local_var_ffffffffffffffd0);
          lVar2 = *(int64_t *)(piVar4 + 4);
          if (lVar2 == 0) {
            lVar2 = *(int64_t *)(piVar4 + 2);
          }
          LOCK();
          *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) & 0xffffefff;
          UNLOCK();
          break;
        case '\x05':
          local_var_ffffffffffffffc8 = (uint)uVar6 << 8;
          NetworkSystem_Disconnect(*(uint64_t *)(piVar4 + 2),(char)piVar4[4],
                        *(int8_t *)((int64_t)piVar4 + 0x11),0,local_var_ffffffffffffffc8);
          lVar2 = *(int64_t *)(piVar4 + 2);
          if ((*(code **)(lVar2 + 0x120) != (code *)0x0) && ((*(byte *)(lVar2 + 0x11a) & 0x10) != 0)
             ) {
            (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,0x10);
            lVar2 = *(int64_t *)(piVar4 + 2);
          }
          LOCK();
          *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) & 0xffffefff;
          UNLOCK();
          if (*(char *)((int64_t)piVar4 + 0x12) != '\0') {
            lVar2 = *(int64_t *)(piVar4 + 2);
            if ((*(code **)(lVar2 + 0x120) != (code *)0x0) &&
               ((*(byte *)(lVar2 + 0x11a) & 0x80) != 0)) {
              (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,0x80,0,0);
              lVar2 = *(int64_t *)(param_1 + 0x788 + (int64_t)iVar5);
            }
            NetworkSystem_GetStatus(lVar2 + 0x138);
            NetworkSystem_GetStatus(*(int64_t *)(piVar4 + 2) + 0x158);
            Function_571d7c62(param_1,0x14);
            lVar2 = *(int64_t *)(piVar4 + 2);
            plVar3 = (int64_t *)(lVar2 + 0x178);
            *(uint64_t *)(lVar2 + 0x180) = *(uint64_t *)(param_1 + 0x10fe0);
            *plVar3 = param_1 + 0x10fd8;
            *(int64_t **)(param_1 + 0x10fe0) = plVar3;
            **(uint64_t **)(lVar2 + 0x180) = plVar3;
            *(int64_t *)(*(int64_t *)(piVar4 + 2) + 0x188) = *(int64_t *)(piVar4 + 2);
// WARNING: Subroutine does not return
            SystemMemoryProcessor(param_1,0x14);
          }
          break;
        case '\x06':
          NetworkSystem_GetAddress(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4));
          break;
        case '\a':
          lVar2 = *(int64_t *)(piVar4 + 2);
          if ((*(code **)(lVar2 + 0x120) != (code *)0x0) && ((*(byte *)(lVar2 + 0x11a) & 2) != 0)) {
            (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,2);
          }
          break;
        case '\b':
          NetworkSystem_GetConnection(*(uint64_t *)(piVar4 + 2));
          break;
        case '\t':
          NetworkSystem_SetConnection(*(uint64_t *)(piVar4 + 2),piVar4[4]);
          break;
        case '\n':
          lVar2 = *(int64_t *)(piVar4 + 6);
          local_var_ffffffffffffffc8 = (uint)*(short *)((int64_t)piVar4 + 0x22);
          if (*(int64_t *)(piVar4 + 4) == 0) {
            NetworkSystem_Validate(lVar2 + 0x38,*(uint64_t *)(piVar4 + 2),local_var_ffffffffffffffc8,
                          (int)(short)piVar4[8],0);
            NetworkSystem_Process(lVar2,piVar4[9]);
// WARNING: Subroutine does not return
            SystemDataValidator(param_1 + 0x10bd0,*(uint64_t *)(piVar4 + 2),&system_buffer_ptr,0,1);
          }
          NetworkSystem_Update(lVar2);
          break;
        case '\v':
          NetworkSystem_SendData(*(uint64_t *)(piVar4 + 2),piVar4[4]);
          break;
        case '\f':
          NetworkSystem_ReceiveData(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),(char)piVar4[6],0);
          LOCK();
          *(uint *)(*(int64_t *)(piVar4 + 2) + 100) =
               *(uint *)(*(int64_t *)(piVar4 + 2) + 100) & 0xfffff7ff;
          UNLOCK();
          break;
        case '\r':
          NetworkSystem_HandleEvent(*(uint64_t *)(piVar4 + 2),piVar4[4],piVar4[5],(char)piVar4[6]);
          break;
        case '\x0e':
          Function_433b52e1(*(uint64_t *)(piVar4 + 2),(char)piVar4[4]);
          break;
        case '\x0f':
          Function_2ded0270(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),
                              *(uint64_t *)(piVar4 + 6),(char)piVar4[8]);
          break;
        case '\x10':
          *(uint64_t *)(*(int64_t *)(piVar4 + 2) + 0x220) = *(uint64_t *)(piVar4 + 4);
          break;
        case '\x11':
          NetworkSystem_GetState(*(uint64_t *)(piVar4 + 2));
          break;
        case '\x12':
          NetworkSystem_SetState(*(uint64_t *)(piVar4 + 2),1);
          break;
        case '\x13':
          NetworkSystem_RegisterCallback(*(uint64_t *)(piVar4 + 2),piVar4[1],0);
        }
        iVar5 = iVar5 + (*piVar4 >> 8);
      } while (iVar5 < *(int *)(param_1 + 0x10780));
    }
    *(int32_t *)(param_1 + 0x10780) = 0;
    *(int8_t *)(param_1 + 0x10784) = 0;
    if (param_2 != '\0') {
// WARNING: Subroutine does not return
      SystemMemoryProcessor(param_1,3);
    }
  }
  if (param_1 == 0) {
    return 0;
  }
// WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,1);
}
uint64_t SystemCore_ResourceManager6(int64_t param_1,char param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int *piVar4;
  int iVar5;
  uint local_var_20;
  uint3 uVar6;
  if (param_1 != 0) {
    Function_571d7c62(param_1,1);
  }
  if ((*(char *)(param_1 + 0x10784) == '\0') && (iVar1 = *(int *)(param_1 + 0x10780), 0 < iVar1)) {
    *(int8_t *)(param_1 + 0x10784) = 1;
    if (param_2 != '\0') {
      Function_571d7c62(param_1,3);
      iVar1 = *(int *)(param_1 + 0x10780);
    }
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        piVar4 = (int *)(param_1 + 0x780 + (int64_t)iVar5);
        uVar6 = (uint3)(local_var_20 >> 8);
        switch((char)*piVar4) {
        case '\0':
          local_var_20 = local_var_20 & 0xffffff00;
          NetworkSystem_Send(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),0,piVar4[8],
                        local_var_20);
          break;
        case '\x01':
          local_var_20 = CONCAT31(uVar6,1);
          NetworkSystem_Send(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),0,piVar4[8],
                        local_var_20);
          break;
        case '\x02':
          local_var_20 = piVar4[8];
          NetworkSystem_Receive(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),piVar4[6],piVar4[7],
                        local_var_20);
          break;
        case '\x03':
          lVar2 = *(int64_t *)(piVar4 + 2);
          local_var_20 = (uint)uVar6 << 8;
          NetworkSystem_Connect(*(uint64_t *)(lVar2 + 0x60),*(uint64_t *)(lVar2 + 0x58),lVar2,1,
                        local_var_20);
          break;
        case '\x04':
          local_var_20 = (uint)uVar6 << 8;
          NetworkSystem_Connect(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),
                        *(uint64_t *)(piVar4 + 6),1,local_var_20);
          lVar2 = *(int64_t *)(piVar4 + 4);
          if (lVar2 == 0) {
            lVar2 = *(int64_t *)(piVar4 + 2);
          }
          LOCK();
          *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) & 0xffffefff;
          UNLOCK();
          break;
        case '\x05':
          local_var_20 = (uint)uVar6 << 8;
          NetworkSystem_Disconnect(*(uint64_t *)(piVar4 + 2),(char)piVar4[4],
                        *(int8_t *)((int64_t)piVar4 + 0x11),0,local_var_20);
          lVar2 = *(int64_t *)(piVar4 + 2);
          if ((*(code **)(lVar2 + 0x120) != (code *)0x0) && ((*(byte *)(lVar2 + 0x11a) & 0x10) != 0)
             ) {
            (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,0x10);
            lVar2 = *(int64_t *)(piVar4 + 2);
          }
          LOCK();
          *(uint *)(lVar2 + 100) = *(uint *)(lVar2 + 100) & 0xffffefff;
          UNLOCK();
          if (*(char *)((int64_t)piVar4 + 0x12) != '\0') {
            lVar2 = *(int64_t *)(piVar4 + 2);
            if ((*(code **)(lVar2 + 0x120) != (code *)0x0) &&
               ((*(byte *)(lVar2 + 0x11a) & 0x80) != 0)) {
              (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,0x80,0,0);
              lVar2 = *(int64_t *)(param_1 + 0x788 + (int64_t)iVar5);
            }
            NetworkSystem_GetStatus(lVar2 + 0x138);
            NetworkSystem_GetStatus(*(int64_t *)(piVar4 + 2) + 0x158);
            Function_571d7c62(param_1,0x14);
            lVar2 = *(int64_t *)(piVar4 + 2);
            plVar3 = (int64_t *)(lVar2 + 0x178);
            *(uint64_t *)(lVar2 + 0x180) = *(uint64_t *)(param_1 + 0x10fe0);
            *plVar3 = param_1 + 0x10fd8;
            *(int64_t **)(param_1 + 0x10fe0) = plVar3;
            **(uint64_t **)(lVar2 + 0x180) = plVar3;
            *(int64_t *)(*(int64_t *)(piVar4 + 2) + 0x188) = *(int64_t *)(piVar4 + 2);
// WARNING: Subroutine does not return
            SystemMemoryProcessor(param_1,0x14);
          }
          break;
        case '\x06':
          NetworkSystem_GetAddress(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4));
          break;
        case '\a':
          lVar2 = *(int64_t *)(piVar4 + 2);
          if ((*(code **)(lVar2 + 0x120) != (code *)0x0) && ((*(byte *)(lVar2 + 0x11a) & 2) != 0)) {
            (**(code **)(lVar2 + 0x120))(lVar2 + 0xb0,2);
          }
          break;
        case '\b':
          NetworkSystem_GetConnection(*(uint64_t *)(piVar4 + 2));
          break;
        case '\t':
          NetworkSystem_SetConnection(*(uint64_t *)(piVar4 + 2),piVar4[4]);
          break;
        case '\n':
          lVar2 = *(int64_t *)(piVar4 + 6);
          local_var_20 = (uint)*(short *)((int64_t)piVar4 + 0x22);
          if (*(int64_t *)(piVar4 + 4) == 0) {
            NetworkSystem_Validate(lVar2 + 0x38,*(uint64_t *)(piVar4 + 2),local_var_20,
                          (int)(short)piVar4[8],0);
            NetworkSystem_Process(lVar2,piVar4[9]);
// WARNING: Subroutine does not return
            SystemDataValidator(param_1 + 0x10bd0,*(uint64_t *)(piVar4 + 2),&system_buffer_ptr,0,1);
          }
          NetworkSystem_Update(lVar2);
          break;
        case '\v':
          NetworkSystem_SendData(*(uint64_t *)(piVar4 + 2),piVar4[4]);
          break;
        case '\f':
          NetworkSystem_ReceiveData(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),(char)piVar4[6],0);
          LOCK();
          *(uint *)(*(int64_t *)(piVar4 + 2) + 100) =
               *(uint *)(*(int64_t *)(piVar4 + 2) + 100) & 0xfffff7ff;
          UNLOCK();
          break;
        case '\r':
          NetworkSystem_HandleEvent(*(uint64_t *)(piVar4 + 2),piVar4[4],piVar4[5],(char)piVar4[6]);
          break;
        case '\x0e':
          Function_433b52e1(*(uint64_t *)(piVar4 + 2),(char)piVar4[4]);
          break;
        case '\x0f':
          Function_2ded0270(*(uint64_t *)(piVar4 + 2),*(uint64_t *)(piVar4 + 4),
                              *(uint64_t *)(piVar4 + 6),(char)piVar4[8]);
          break;
        case '\x10':
          *(uint64_t *)(*(int64_t *)(piVar4 + 2) + 0x220) = *(uint64_t *)(piVar4 + 4);
          break;
        case '\x11':
          NetworkSystem_GetState(*(uint64_t *)(piVar4 + 2));
          break;
        case '\x12':
          NetworkSystem_SetState(*(uint64_t *)(piVar4 + 2),1);
          break;
        case '\x13':
          NetworkSystem_RegisterCallback(*(uint64_t *)(piVar4 + 2),piVar4[1],0);
        }
        iVar5 = iVar5 + (*piVar4 >> 8);
      } while (iVar5 < *(int *)(param_1 + 0x10780));
    }
    *(int32_t *)(param_1 + 0x10780) = 0;
    *(int8_t *)(param_1 + 0x10784) = 0;
    if (param_2 != '\0') {
// WARNING: Subroutine does not return
      SystemMemoryProcessor(param_1,3);
    }
  }
  if (param_1 == 0) {
    return 0;
  }
// WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,1);
}
uint64_t UIEvent_Update(void)
{
  int in_EAX;
  int64_t lVar1;
  int64_t *plVar2;
  int *piVar3;
  int iVar4;
  int64_t unaff_RDI;
  char unaff_R14B;
  char unaff_R15B;
  uint local_var_20;
  uint3 uVar5;
  *(int8_t *)(unaff_RDI + 0x10784) = 1;
  if (unaff_R15B != '\0') {
    Function_571d7c62();
    in_EAX = *(int *)(unaff_RDI + 0x10780);
  }
  iVar4 = 0;
  if (0 < in_EAX) {
    do {
      piVar3 = (int *)(unaff_RDI + 0x780 + (int64_t)iVar4);
      uVar5 = (uint3)(local_var_20 >> 8);
      switch((char)*piVar3) {
      case '\0':
        local_var_20 = local_var_20 & 0xffffff00;
        NetworkSystem_Send(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),0,piVar3[8],
                      local_var_20);
        break;
      case '\x01':
        local_var_20 = CONCAT31(uVar5,1);
        NetworkSystem_Send(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),0,piVar3[8],
                      local_var_20);
        break;
      case '\x02':
        local_var_20 = piVar3[8];
        NetworkSystem_Receive(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),piVar3[6],piVar3[7],
                      local_var_20);
        break;
      case '\x03':
        lVar1 = *(int64_t *)(piVar3 + 2);
        local_var_20 = (uint)uVar5 << 8;
        NetworkSystem_Connect(*(uint64_t *)(lVar1 + 0x60),*(uint64_t *)(lVar1 + 0x58),lVar1,1,
                      local_var_20);
        break;
      case '\x04':
        local_var_20 = (uint)uVar5 << 8;
        NetworkSystem_Connect(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),
                      *(uint64_t *)(piVar3 + 6),1,local_var_20);
        lVar1 = *(int64_t *)(piVar3 + 4);
        if (lVar1 == 0) {
          lVar1 = *(int64_t *)(piVar3 + 2);
        }
        LOCK();
        *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & 0xffffefff;
        UNLOCK();
        break;
      case '\x05':
        local_var_20 = (uint)uVar5 << 8;
        NetworkSystem_Disconnect(*(uint64_t *)(piVar3 + 2),(char)piVar3[4],
                      *(int8_t *)((int64_t)piVar3 + 0x11),0,local_var_20);
        lVar1 = *(int64_t *)(piVar3 + 2);
        if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 0x10) != 0))
        {
          (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,0x10);
          lVar1 = *(int64_t *)(piVar3 + 2);
        }
        LOCK();
        *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & 0xffffefff;
        UNLOCK();
        if (*(char *)((int64_t)piVar3 + 0x12) != '\0') {
          lVar1 = *(int64_t *)(piVar3 + 2);
          if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 0x80) != 0)
             ) {
            (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,0x80,0,0);
            lVar1 = *(int64_t *)(unaff_RDI + 0x788 + (int64_t)iVar4);
          }
          NetworkSystem_GetStatus(lVar1 + 0x138);
          NetworkSystem_GetStatus(*(int64_t *)(piVar3 + 2) + 0x158);
          Function_571d7c62();
          lVar1 = *(int64_t *)(piVar3 + 2);
          plVar2 = (int64_t *)(lVar1 + 0x178);
          *(uint64_t *)(lVar1 + 0x180) = *(uint64_t *)(unaff_RDI + 0x10fe0);
          *plVar2 = unaff_RDI + 0x10fd8;
          *(int64_t **)(unaff_RDI + 0x10fe0) = plVar2;
          **(uint64_t **)(lVar1 + 0x180) = plVar2;
          *(int64_t *)(*(int64_t *)(piVar3 + 2) + 0x188) = *(int64_t *)(piVar3 + 2);
// WARNING: Subroutine does not return
          SystemMemoryProcessor();
        }
        break;
      case '\x06':
        NetworkSystem_GetAddress(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4));
        break;
      case '\a':
        lVar1 = *(int64_t *)(piVar3 + 2);
        if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 2) != 0)) {
          (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,2);
        }
        break;
      case '\b':
        NetworkSystem_GetConnection(*(uint64_t *)(piVar3 + 2));
        break;
      case '\t':
        NetworkSystem_SetConnection(*(uint64_t *)(piVar3 + 2),piVar3[4]);
        break;
      case '\n':
        lVar1 = *(int64_t *)(piVar3 + 6);
        local_var_20 = (uint)*(short *)((int64_t)piVar3 + 0x22);
        if (*(int64_t *)(piVar3 + 4) == 0) {
          NetworkSystem_Validate(lVar1 + 0x38,*(uint64_t *)(piVar3 + 2),local_var_20,
                        (int)(short)piVar3[8],0);
          NetworkSystem_Process(lVar1,piVar3[9]);
// WARNING: Subroutine does not return
          SystemDataValidator(unaff_RDI + 0x10bd0,*(uint64_t *)(piVar3 + 2),&system_buffer_ptr,0,1);
        }
        NetworkSystem_Update(lVar1,*(uint64_t *)(piVar3 + 2),*(int64_t *)(piVar3 + 4),
                      (int)(short)piVar3[8],local_var_20);
        break;
      case '\v':
        NetworkSystem_SendData(*(uint64_t *)(piVar3 + 2),piVar3[4]);
        break;
      case '\f':
        NetworkSystem_ReceiveData(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),(char)piVar3[6],0);
        LOCK();
        *(uint *)(*(int64_t *)(piVar3 + 2) + 100) =
             *(uint *)(*(int64_t *)(piVar3 + 2) + 100) & 0xfffff7ff;
        UNLOCK();
        break;
      case '\r':
        NetworkSystem_HandleEvent(*(uint64_t *)(piVar3 + 2),piVar3[4],piVar3[5],(char)piVar3[6]);
        break;
      case '\x0e':
        Function_433b52e1(*(uint64_t *)(piVar3 + 2),(char)piVar3[4]);
        break;
      case '\x0f':
        Function_2ded0270(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),
                            *(uint64_t *)(piVar3 + 6),(char)piVar3[8]);
        break;
      case '\x10':
        *(uint64_t *)(*(int64_t *)(piVar3 + 2) + 0x220) = *(uint64_t *)(piVar3 + 4);
        break;
      case '\x11':
        NetworkSystem_GetState(*(uint64_t *)(piVar3 + 2));
        break;
      case '\x12':
        NetworkSystem_SetState(*(uint64_t *)(piVar3 + 2),1);
        break;
      case '\x13':
        NetworkSystem_RegisterCallback(*(uint64_t *)(piVar3 + 2),piVar3[1],0);
      }
      iVar4 = iVar4 + (*piVar3 >> 8);
    } while (iVar4 < *(int *)(unaff_RDI + 0x10780));
  }
  *(int32_t *)(unaff_RDI + 0x10780) = 0;
  *(int8_t *)(unaff_RDI + 0x10784) = 0;
  if (unaff_R15B != '\0') {
// WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  if (unaff_R14B == '\0') {
    return 0;
  }
// WARNING: Subroutine does not return
  SystemMemoryProcessor();
}
uint64_t UIEvent_Render(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  int *piVar3;
  int unaff_ESI;
  int64_t unaff_RDI;
  char unaff_R14B;
  char unaff_R15B;
  uint local_var_20;
  uint3 uVar4;
  do {
    piVar3 = (int *)(unaff_RDI + 0x780 + (int64_t)unaff_ESI);
    uVar4 = (uint3)(local_var_20 >> 8);
    switch((char)*piVar3) {
    case '\0':
      local_var_20 = local_var_20 & 0xffffff00;
      NetworkSystem_Send(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),0,piVar3[8],
                    local_var_20);
      break;
    case '\x01':
      local_var_20 = CONCAT31(uVar4,1);
      NetworkSystem_Send(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),0,piVar3[8],
                    local_var_20);
      break;
    case '\x02':
      local_var_20 = piVar3[8];
      NetworkSystem_Receive(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),piVar3[6],piVar3[7],
                    local_var_20);
      break;
    case '\x03':
      lVar1 = *(int64_t *)(piVar3 + 2);
      local_var_20 = (uint)uVar4 << 8;
      NetworkSystem_Connect(*(uint64_t *)(lVar1 + 0x60),*(uint64_t *)(lVar1 + 0x58),lVar1,1,
                    local_var_20);
      break;
    case '\x04':
      local_var_20 = (uint)uVar4 << 8;
      NetworkSystem_Connect(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),
                    *(uint64_t *)(piVar3 + 6),1,local_var_20);
      lVar1 = *(int64_t *)(piVar3 + 4);
      if (lVar1 == 0) {
        lVar1 = *(int64_t *)(piVar3 + 2);
      }
      LOCK();
      *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & 0xffffefff;
      UNLOCK();
      break;
    case '\x05':
      local_var_20 = (uint)uVar4 << 8;
      NetworkSystem_Disconnect(*(uint64_t *)(piVar3 + 2),(char)piVar3[4],
                    *(int8_t *)((int64_t)piVar3 + 0x11),0,local_var_20);
      lVar1 = *(int64_t *)(piVar3 + 2);
      if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 0x10) != 0)) {
        (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,0x10);
        lVar1 = *(int64_t *)(piVar3 + 2);
      }
      LOCK();
      *(uint *)(lVar1 + 100) = *(uint *)(lVar1 + 100) & 0xffffefff;
      UNLOCK();
      if (*(char *)((int64_t)piVar3 + 0x12) != '\0') {
        lVar1 = *(int64_t *)(piVar3 + 2);
        if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 0x80) != 0))
        {
          (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,0x80,0,0);
          lVar1 = *(int64_t *)(unaff_RDI + 0x788 + (int64_t)unaff_ESI);
        }
        NetworkSystem_GetStatus(lVar1 + 0x138);
        NetworkSystem_GetStatus(*(int64_t *)(piVar3 + 2) + 0x158);
        Function_571d7c62();
        lVar1 = *(int64_t *)(piVar3 + 2);
        plVar2 = (int64_t *)(lVar1 + 0x178);
        *(uint64_t *)(lVar1 + 0x180) = *(uint64_t *)(unaff_RDI + 0x10fe0);
        *plVar2 = unaff_RDI + 0x10fd8;
        *(int64_t **)(unaff_RDI + 0x10fe0) = plVar2;
        **(uint64_t **)(lVar1 + 0x180) = plVar2;
        *(int64_t *)(*(int64_t *)(piVar3 + 2) + 0x188) = *(int64_t *)(piVar3 + 2);
// WARNING: Subroutine does not return
        SystemMemoryProcessor();
      }
      break;
    case '\x06':
      NetworkSystem_GetAddress(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4));
      break;
    case '\a':
      lVar1 = *(int64_t *)(piVar3 + 2);
      if ((*(code **)(lVar1 + 0x120) != (code *)0x0) && ((*(byte *)(lVar1 + 0x11a) & 2) != 0)) {
        (**(code **)(lVar1 + 0x120))(lVar1 + 0xb0,2);
      }
      break;
    case '\b':
      NetworkSystem_GetConnection(*(uint64_t *)(piVar3 + 2));
      break;
    case '\t':
      NetworkSystem_SetConnection(*(uint64_t *)(piVar3 + 2),piVar3[4]);
      break;
    case '\n':
      lVar1 = *(int64_t *)(piVar3 + 6);
      local_var_20 = (uint)*(short *)((int64_t)piVar3 + 0x22);
      if (*(int64_t *)(piVar3 + 4) == 0) {
        NetworkSystem_Validate(lVar1 + 0x38,*(uint64_t *)(piVar3 + 2),local_var_20,
                      (int)(short)piVar3[8],0);
        NetworkSystem_Process(lVar1,piVar3[9]);
// WARNING: Subroutine does not return
        SystemDataValidator(unaff_RDI + 0x10bd0,*(uint64_t *)(piVar3 + 2),&system_buffer_ptr,0,1);
      }
      NetworkSystem_Update(lVar1);
      break;
    case '\v':
      NetworkSystem_SendData(*(uint64_t *)(piVar3 + 2),piVar3[4]);
      break;
    case '\f':
      NetworkSystem_ReceiveData(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),(char)piVar3[6],0);
      LOCK();
      *(uint *)(*(int64_t *)(piVar3 + 2) + 100) =
           *(uint *)(*(int64_t *)(piVar3 + 2) + 100) & 0xfffff7ff;
      UNLOCK();
      break;
    case '\r':
      NetworkSystem_HandleEvent(*(uint64_t *)(piVar3 + 2),piVar3[4],piVar3[5],(char)piVar3[6]);
      break;
    case '\x0e':
      Function_433b52e1(*(uint64_t *)(piVar3 + 2),(char)piVar3[4]);
      break;
    case '\x0f':
      Function_2ded0270(*(uint64_t *)(piVar3 + 2),*(uint64_t *)(piVar3 + 4),
                          *(uint64_t *)(piVar3 + 6),(char)piVar3[8]);
      break;
    case '\x10':
      *(uint64_t *)(*(int64_t *)(piVar3 + 2) + 0x220) = *(uint64_t *)(piVar3 + 4);
      break;
    case '\x11':
      NetworkSystem_GetState(*(uint64_t *)(piVar3 + 2));
      break;
    case '\x12':
      NetworkSystem_SetState(*(uint64_t *)(piVar3 + 2),1);
      break;
    case '\x13':
      NetworkSystem_RegisterCallback(*(uint64_t *)(piVar3 + 2),piVar3[1],0);
    }
    unaff_ESI = unaff_ESI + (*piVar3 >> 8);
  } while (unaff_ESI < *(int *)(unaff_RDI + 0x10780));
  *(int32_t *)(unaff_RDI + 0x10780) = 0;
  *(int8_t *)(unaff_RDI + 0x10784) = 0;
  if (unaff_R15B != '\0') {
// WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  if (unaff_R14B == '\0') {
    return 0;
  }
// WARNING: Subroutine does not return
  SystemMemoryProcessor();
}
uint64_t UIEvent_Cleanup(void)
{
  int64_t unaff_RDI;
  char unaff_R14B;
  char unaff_R15B;
  *(int32_t *)(unaff_RDI + 0x10780) = 0;
  *(int8_t *)(unaff_RDI + 0x10784) = 0;
  if (unaff_R15B != '\0') {
// WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  if (unaff_R14B != '\0') {
// WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  return 0;
}
// 函数: void UIEvent_Reset(void)
void UIEvent_Reset(void)
{
// WARNING: Subroutine does not return
  SystemMemoryProcessor();
}
// 函数: void UIEvent_Register(void)
void UIEvent_Register(void)
{
// WARNING: Subroutine does not return
  SystemMemoryProcessor();
}
// 函数: void SystemCore_Reset(int64_t param_1)
void SystemCore_Reset(int64_t param_1)
{
  int64_t *plVar1;
  Function_571d7c62(param_1,0x14);
  plVar1 = *(int64_t **)(param_1 + 0x10fd8);
  if (plVar1 != (int64_t *)(param_1 + 0x10fd8)) {
    *(int64_t *)plVar1[1] = *plVar1;
    *(int64_t *)(*plVar1 + 8) = plVar1[1];
    plVar1[1] = (int64_t)plVar1;
    *plVar1 = (int64_t)plVar1;
// WARNING: Subroutine does not return
    SystemMemoryProcessor(param_1,0x14);
  }
// WARNING: Subroutine does not return
  SystemMemoryProcessor(param_1,0x14);
}
uint64_t UIEvent_Dispatch(int64_t param_1,uint64_t *param_2,int param_3,char param_4)
{
  uint uVar1;
  uint64_t uVar2;
  uint *puVar3;
  uint uVar4;
  if ((param_4 == '\0') || (uVar2 = Function_571d7c62(param_1,1), (int)uVar2 == 0)) {
    uVar4 = param_3 + 7U & 0xfffffff8;
    if (((int)(*(int *)(param_1 + 0x10780) + uVar4) < 0x10001) ||
       (uVar1 = SystemCore_ResourceManager0(param_1,1), uVar1 == 0)) {
      puVar3 = (uint *)(param_1 + 0x780 + (int64_t)*(int *)(param_1 + 0x10780));
      *puVar3 = *puVar3 & 0xff;
      *puVar3 = *puVar3 | uVar4 << 8;
      *(int *)(param_1 + 0x10780) = *(int *)(param_1 + 0x10780) + uVar4;
      uVar1 = 0;
      *param_2 = puVar3;
    }
    else if (param_4 != '\0') {
// WARNING: Subroutine does not return
      SystemMemoryProcessor(param_1,1);
    }
    uVar2 = (uint64_t)uVar1;
  }
  return uVar2;
}
int UIEvent_Handle(int param_1)
{
  int iVar1;
  uint *puVar2;
  int64_t unaff_RBX;
  char unaff_BPL;
  int unaff_EDI;
  uint64_t *unaff_R14;
  if ((param_1 + unaff_EDI < 0x10001) || (iVar1 = SystemCore_ResourceManager0(), iVar1 == 0)) {
    puVar2 = (uint *)(unaff_RBX + 0x780 + (int64_t)*(int *)(unaff_RBX + 0x10780));
    *puVar2 = *puVar2 & 0xff;
    *puVar2 = *puVar2 | unaff_EDI << 8;
    *(int *)(unaff_RBX + 0x10780) = *(int *)(unaff_RBX + 0x10780) + unaff_EDI;
    iVar1 = 0;
    *unaff_R14 = puVar2;
  }
  else if (unaff_BPL != '\0') {
// WARNING: Subroutine does not return
    SystemMemoryProcessor();
  }
  return iVar1;
}