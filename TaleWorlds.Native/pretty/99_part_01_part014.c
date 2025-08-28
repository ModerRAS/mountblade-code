#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part014.c - 14 个函数
// 函数: void function_0addc0(int64_t param_1)
void function_0addc0(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  puVar2 = *(uint64_t **)(param_1 + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      SystemFunction_00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}
void * function_0ade00(int32_t param_1)
{
  void *puVar1;
  switch(param_1) {
  case 0:
    puVar1 = &system_data_2638;
    break;
  case 1:
    puVar1 = &system_data_2640;
    break;
  case 2:
    puVar1 = &system_data_2644;
    break;
  case 3:
    puVar1 = &system_data_2648;
    break;
  case 4:
    puVar1 = &system_data_264c;
    break;
  case 5:
    puVar1 = &system_data_263c;
    break;
  default:
    puVar1 = &system_buffer_ptr;
  }
  return puVar1;
}
// 函数: void function_0adfe0(int64_t *param_1,int64_t param_2)
void function_0adfe0(int64_t *param_1,int64_t param_2)
{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint64_t uVar4;
  byte bVar5;
  uint uVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uVar1 = *(ushort *)((int64_t)param_1 + 0x5c);
  uVar13 = 0;
  uVar2 = *(ushort *)((int64_t)param_1 + 0x5e);
  if (*(short *)((int64_t)param_1 + 0x62) != 0) {
    bVar5 = *(byte *)((int64_t)param_1 + 0x65);
    uVar7 = uVar13;
    uVar14 = uVar13;
    do {
      uVar6 = (uint)uVar2;
      uVar11 = (uint)uVar1;
      iVar8 = (int)uVar7;
      uVar7 = uVar13;
      if (bVar5 != 0) {
        do {
          switch(*(int32_t *)((int64_t)param_1 + 0x54)) {
          case 0xe:
          case 0x13:
            lVar9 = 8;
            break;
          default:
            iVar3 = SystemFunction_0001802a0ec0(*(int32_t *)((int64_t)param_1 + 0x54));
            uVar10 = (uint64_t)uVar6;
            uVar4 = (uint64_t)(iVar3 * uVar11 + 7 >> 3);
            goto code_r0x0001800ae0b5;
          case 0x10:
          case 0x12:
          case 0x14:
          case 0x15:
          case 0x16:
            lVar9 = 0x10;
          }
          uVar4 = uVar13;
          if (uVar11 != 0) {
            uVar12 = uVar11 + 3 >> 2;
            uVar4 = 1;
            if (1 < uVar12) {
              uVar4 = (uint64_t)uVar12;
            }
          }
          uVar10 = uVar13;
          if (uVar6 != 0) {
            uVar12 = uVar6 + 3 >> 2;
            uVar10 = 1;
            if (1 < uVar12) {
              uVar10 = (uint64_t)uVar12;
            }
          }
          uVar4 = lVar9 * uVar4;
code_r0x0001800ae0b5:
          iVar3 = (int)uVar7;
          uVar12 = uVar11 >> 1;
          *(uint64_t *)
           (param_2 + 8 +
           (int64_t)(int)((uint)*(byte *)((int64_t)param_1 + 0x65) * iVar8 + iVar3) * 0x18) =
               uVar14;
          lVar9 = *param_1 + uVar14;
          uVar14 = uVar14 + uVar10 * uVar4;
          *(int64_t *)
           (param_2 +
           (int64_t)(int)((uint)*(byte *)((int64_t)param_1 + 0x65) * iVar8 + iVar3) * 0x18) =
               lVar9;
          *(int *)(param_2 + 0x10 +
                  (int64_t)(int)((uint)*(byte *)((int64_t)param_1 + 0x65) * iVar8 + iVar3) * 0x18)
               = (int)uVar4;
          *(int *)(param_2 + 0x14 +
                  (int64_t)(int)((uint)*(byte *)((int64_t)param_1 + 0x65) * iVar8 + iVar3) * 0x18)
               = (int)(uVar10 * uVar4);
          bVar5 = *(byte *)((int64_t)param_1 + 0x65);
          uVar11 = 1;
          if (1 < uVar12) {
            uVar11 = uVar12;
          }
          uVar12 = uVar6 >> 1;
          uVar6 = 1;
          if (1 < uVar12) {
            uVar6 = uVar12;
          }
          uVar7 = (uint64_t)(iVar3 + 1U);
        } while ((int)(iVar3 + 1U) < (int)(uint)bVar5);
      }
      uVar7 = (uint64_t)(iVar8 + 1U);
      uVar1 = *(ushort *)((int64_t)param_1 + 0x5c);
      uVar2 = *(ushort *)((int64_t)param_1 + 0x5e);
    } while ((int)(iVar8 + 1U) < (int)(uint)*(ushort *)((int64_t)param_1 + 0x62));
  }
  return;
}
// 函数: void function_0ae01b(byte param_1)
void function_0ae01b(byte param_1)
{
  int iVar1;
  uint64_t uVar2;
  uint unaff_EBX;
  uint64_t uVar3;
  int unaff_EDI;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *in_R10;
  uint in_R11D;
  uint uVar6;
  uint64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  do {
    uVar3 = unaff_R12 & 0xffffffff;
    if (param_1 != 0) {
      do {
        switch(*(int32_t *)((int64_t)in_R10 + 0x54)) {
        case 0xe:
        case 0x13:
          lVar4 = 8;
          break;
        default:
          iVar1 = SystemFunction_0001802a0ec0(*(int32_t *)((int64_t)in_R10 + 0x54));
          uVar5 = (uint64_t)unaff_EBX;
          uVar2 = (uint64_t)(iVar1 * in_R11D + 7 >> 3);
          goto code_r0x0001800ae0b5;
        case 0x10:
        case 0x12:
        case 0x14:
        case 0x15:
        case 0x16:
          lVar4 = 0x10;
        }
        uVar2 = unaff_R12;
        if (in_R11D != 0) {
          uVar6 = in_R11D + 3 >> 2;
          uVar2 = 1;
          if (1 < uVar6) {
            uVar2 = (uint64_t)uVar6;
          }
        }
        uVar5 = unaff_R12;
        if (unaff_EBX != 0) {
          uVar6 = unaff_EBX + 3 >> 2;
          uVar5 = 1;
          if (1 < uVar6) {
            uVar5 = (uint64_t)uVar6;
          }
        }
        uVar2 = lVar4 * uVar2;
code_r0x0001800ae0b5:
        iVar1 = (int)uVar3;
        uVar6 = in_R11D >> 1;
        *(int64_t *)
         (unaff_R14 + 8 +
         (int64_t)(int)((uint)*(byte *)((int64_t)in_R10 + 0x65) * unaff_EDI + iVar1) * 0x18) =
             unaff_R15;
        lVar4 = *in_R10 + unaff_R15;
        unaff_R15 = unaff_R15 + uVar5 * uVar2;
        *(int64_t *)
         (unaff_R14 +
         (int64_t)(int)((uint)*(byte *)((int64_t)in_R10 + 0x65) * unaff_EDI + iVar1) * 0x18) =
             lVar4;
        *(int *)(unaff_R14 + 0x10 +
                (int64_t)(int)((uint)*(byte *)((int64_t)in_R10 + 0x65) * unaff_EDI + iVar1) * 0x18
                ) = (int)uVar2;
        *(int *)(unaff_R14 + 0x14 +
                (int64_t)(int)((uint)*(byte *)((int64_t)in_R10 + 0x65) * unaff_EDI + iVar1) * 0x18
                ) = (int)(uVar5 * uVar2);
        param_1 = *(byte *)((int64_t)in_R10 + 0x65);
        in_R11D = 1;
        if (1 < uVar6) {
          in_R11D = uVar6;
        }
        uVar6 = unaff_EBX >> 1;
        unaff_EBX = 1;
        if (1 < uVar6) {
          unaff_EBX = uVar6;
        }
        uVar3 = (uint64_t)(iVar1 + 1U);
      } while ((int)(iVar1 + 1U) < (int)(uint)param_1);
    }
    unaff_EDI = unaff_EDI + 1;
    in_R11D = (uint)*(ushort *)((int64_t)in_R10 + 0x5c);
    unaff_EBX = (uint)*(ushort *)((int64_t)in_R10 + 0x5e);
    if ((int)(uint)*(ushort *)((int64_t)in_R10 + 0x62) <= unaff_EDI) {
      return;
    }
  } while( true );
}
// 函数: void function_0ae16b(void)
void function_0ae16b(void)
{
  return;
}
// 函数: void function_0ae1b0(int64_t *param_1)
void function_0ae1b0(int64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0x11) == '\0') {
    if (((char)param_1[2] == '\0') && (*param_1 != 0)) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int8_t *)(param_1 + 2) = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0ae230(uint64_t param_1,int32_t param_2)
void function_0ae230(uint64_t param_1,int32_t param_2)
{
  int64_t lVar1;
  char cVar2;
  void *puVar3;
  int32_t astack_special_x_10 [6];
  lVar1 = SYSTEM_STATE_MANAGER;
  if ((*(int64_t *)(SYSTEM_STATE_MANAGER + 0x1e90) != 0) &&
     (astack_special_x_10[0] = param_2, cVar2 = (**(code **)(SYSTEM_STATE_MANAGER + 0x1e98))(astack_special_x_10),
     param_2 = astack_special_x_10[0], cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x1e40) != (void *)0x0) {
        puVar3 = *(void **)(lVar1 + 0x1e40);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar3);
    }
    *(int32_t *)(lVar1 + 0x1e30) = *(int32_t *)(lVar1 + 0x1e78);
    return;
  }
  *(int32_t *)(lVar1 + 0x1e30) = param_2;
  return;
}
// 函数: void function_0ae2c0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_0ae2c0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  function_0ae2c0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  param_2[5] = &system_data_buffer_ptr;
  if (param_2[6] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[6] = 0;
  *(int32_t *)(param_2 + 8) = 0;
  param_2[5] = &system_state_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_2);
}
// 函数: void function_0ae370(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_0ae370(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_0ae2c0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_0ae390(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_0ae390(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_0ae2c0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_0ae3c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_0ae3c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_0ae2c0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
int64_t function_0ae3f0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 3;
  *(int64_t *)param_1 = param_1;
  *(int64_t *)(param_1 + 8) = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  return param_1;
}
int64_t function_0ae430(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 3;
  *(int64_t *)param_1 = param_1;
  *(int64_t *)(param_1 + 8) = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  lVar1 = param_1 + 0x30;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x58) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x38) = lVar1;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int8_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  _Mtx_init_in_situ(param_1 + 0x68,0x102,param_3,param_4,0xfffffffffffffffe);
  lVar1 = param_1 + 0xb8;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int32_t *)(param_1 + 0xe0) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0xc0) = lVar1;
  *(uint64_t *)(param_1 + 200) = 0;
  *(int8_t *)(param_1 + 0xd0) = 0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  lVar1 = param_1 + 0xe8;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(int32_t *)(param_1 + 0x110) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0xf0) = lVar1;
  *(uint64_t *)(param_1 + 0xf8) = 0;
  *(int8_t *)(param_1 + 0x100) = 0;
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x118) = 0;
  return param_1;
}
uint64_t * function_0ae520(uint64_t *param_1)
{
  uint64_t *puVar1;
  *param_1 = &processed_var_7304_ptr;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = 3;
  puVar1 = param_1 + 0x12;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x17) = 3;
  *puVar1 = puVar1;
  param_1[0x13] = puVar1;
  param_1[0x14] = 0;
  *(int8_t *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  CoreEngineDataTransformer(param_1 + 0x18);
  *(int32_t *)(param_1 + 0x11) = 0;
  return param_1;
}
uint64_t function_0ae600(uint64_t param_1,uint64_t param_2)
{
  function_0ae640();
  if ((param_2 & 1) != 0) {
    free(param_1,0xe0);
  }
  return param_1;
}
// 函数: void function_0ae640(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_0ae640(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_7304_ptr;
  param_1[0x18] = &system_data_buffer_ptr;
  if (param_1[0x19] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &system_state_ptr;
  function_05d260(param_1 + 0x12,param_1[0x14],param_3,param_4,0xfffffffffffffffe);
  if (param_1[0xd] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[9] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[5] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[1] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_0ae730(int64_t *param_1,int64_t param_2)
void function_0ae730(int64_t *param_1,int64_t param_2)
{
  void *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t lVar9;
  void *puVar10;
  int8_t *puVar11;
  int iVar12;
  uint64_t uVar13;
  void *plocal_var_90;
  int8_t *plocal_var_88;
  uint local_var_80;
  uint64_t local_var_78;
  void *plocal_var_70;
  int64_t lStack_68;
  int iStack_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  int64_t lStack_48;
  int32_t local_var_38;
  uVar13 = 0xfffffffffffffffe;
  uVar5 = 0;
  lVar2 = param_1[1];
  plVar3 = param_1;
  uVar4 = uVar5;
  uVar7 = uVar5;
  if (param_1[2] - lVar2 >> 3 != 0) {
    do {
      puVar1 = *(void **)(*(int64_t *)(uVar4 + lVar2) + 0x10);
      puVar10 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar10 = puVar1;
      }
      function_0aec40(plVar3,param_2,puVar10,*(int64_t *)(uVar4 + lVar2),uVar13);
      uVar6 = (int)uVar7 + 1;
      lVar2 = param_1[1];
      plVar3 = (int64_t *)(param_1[2] - lVar2 >> 3);
      uVar4 = uVar4 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((int64_t *)(int64_t)(int)uVar6 < plVar3);
  }
  lVar2 = param_1[5];
  uVar4 = uVar5;
  uVar7 = uVar5;
  if (param_1[6] - lVar2 >> 3 != 0) {
    do {
      puVar1 = *(void **)(*(float **)(uVar7 + lVar2) + 4);
      puVar10 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar10 = puVar1;
      }
      plocal_var_90 = &system_data_buffer_ptr;
      local_var_78 = 0;
      plocal_var_88 = (int8_t *)0x0;
      local_var_80 = 0;
      System_DataHandler(&plocal_var_90,&processed_var_7176_ptr,puVar10,(double)**(float **)(uVar7 + lVar2));
      fwrite(plocal_var_88,1,(int64_t)(int)local_var_80,*(uint64_t *)(param_2 + 8));
      plocal_var_90 = &system_data_buffer_ptr;
      if (plocal_var_88 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_88 = (int8_t *)0x0;
      local_var_78 = local_var_78 & 0xffffffff00000000;
      plocal_var_90 = &system_state_ptr;
      uVar6 = (int)uVar4 + 1;
      lVar2 = param_1[5];
      uVar4 = (uint64_t)uVar6;
      uVar7 = uVar7 + 8;
    } while ((uint64_t)(int64_t)(int)uVar6 < (uint64_t)(param_1[6] - lVar2 >> 3));
  }
  lVar2 = param_1[9];
  uVar4 = uVar5;
  uVar7 = uVar5;
  if (param_1[10] - lVar2 >> 3 != 0) {
    do {
      lVar2 = *(int64_t *)(uVar4 + lVar2);
      plocal_var_90 = &system_data_buffer_ptr;
      local_var_78 = 0;
      plocal_var_88 = (int8_t *)0x0;
      local_var_80 = 0;
      CoreEngineDataBufferProcessor(&plocal_var_90,*(int32_t *)(lVar2 + 0x10));
      if (*(int *)(lVar2 + 0x10) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_88,*(uint64_t *)(lVar2 + 8),*(int *)(lVar2 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar2 + 8) != 0) {
        local_var_80 = 0;
        if (plocal_var_88 != (int8_t *)0x0) {
          *plocal_var_88 = 0;
        }
        local_var_78 = local_var_78 & 0xffffffff;
      }
      while ((0 < (int)local_var_80 && (lVar2 = strstr(plocal_var_88,&system_data_c8e4), lVar2 != 0))) {
        iVar12 = 1;
        iVar8 = (int)lVar2 - (int)plocal_var_88;
        if (local_var_80 < iVar8 + 1U) {
          iVar12 = local_var_80 - iVar8;
        }
        uVar6 = iVar8 + iVar12;
        if (uVar6 < local_var_80) {
          lVar9 = (int64_t)(int)uVar6;
          do {
            plocal_var_88[lVar9 - iVar12] = plocal_var_88[lVar9];
            uVar6 = uVar6 + 1;
            lVar9 = lVar9 + 1;
          } while (uVar6 < local_var_80);
        }
        local_var_80 = local_var_80 - iVar12;
        plocal_var_88[local_var_80] = 0;
        uVar13 = CoreMemoryPoolValidator(&plocal_var_50,&processed_var_7168_ptr);
        function_6288c0(&plocal_var_90,(int)lVar2 - (int)plocal_var_88,uVar13);
        plocal_var_50 = &system_data_buffer_ptr;
        if (lStack_48 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_48 = 0;
        local_var_38 = 0;
        plocal_var_50 = &system_state_ptr;
      }
      puVar11 = &system_buffer_ptr;
      if (plocal_var_88 != (int8_t *)0x0) {
        puVar11 = plocal_var_88;
      }
      puVar1 = *(void **)(*(int64_t *)(uVar4 + param_1[9]) + 0x48);
      puVar10 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar10 = puVar1;
      }
      plocal_var_70 = &system_data_buffer_ptr;
      local_var_58 = 0;
      lStack_68 = 0;
      iStack_60 = 0;
      if (puVar11 == (int8_t *)0x0) {
LAB_1800aea92:
        puVar11 = &processed_var_7160_ptr;
      }
      else {
        lVar2 = -1;
        do {
          lVar2 = lVar2 + 1;
        } while (puVar11[lVar2] != '\0');
        if (lVar2 == 0) goto LAB_1800aea92;
      }
      System_DataHandler(&plocal_var_70,&processed_var_7192_ptr,puVar10,puVar11);
      fwrite(lStack_68,1,(int64_t)iStack_60,*(uint64_t *)(param_2 + 8));
      plocal_var_70 = &system_data_buffer_ptr;
      if (lStack_68 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_68 = 0;
      local_var_58 = local_var_58 & 0xffffffff00000000;
      plocal_var_70 = &system_state_ptr;
      plocal_var_90 = &system_data_buffer_ptr;
      if (plocal_var_88 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_88 = (int8_t *)0x0;
      local_var_78 = local_var_78 & 0xffffffff00000000;
      plocal_var_90 = &system_state_ptr;
      uVar6 = (int)uVar7 + 1;
      lVar2 = param_1[9];
      uVar4 = uVar4 + 8;
      uVar7 = (uint64_t)uVar6;
    } while ((uint64_t)(int64_t)(int)uVar6 < (uint64_t)(param_1[10] - lVar2 >> 3));
  }
  lVar2 = param_1[0xd];
  uVar4 = uVar5;
  if (param_1[0xe] - lVar2 >> 3 != 0) {
    do {
      puVar1 = (void *)(*(uint64_t **)(uVar4 + lVar2))[3];
      puVar10 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar10 = puVar1;
      }
      plocal_var_70 = &system_data_buffer_ptr;
      local_var_58 = 0;
      lStack_68 = 0;
      iStack_60 = 0;
      System_DataHandler(&plocal_var_70,&processed_var_7224_ptr,puVar10,**(uint64_t **)(uVar4 + lVar2));
      fwrite(lStack_68,1,(int64_t)iStack_60,*(uint64_t *)(param_2 + 8));
      plocal_var_70 = &system_data_buffer_ptr;
      if (lStack_68 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_68 = 0;
      local_var_58 = local_var_58 & 0xffffffff00000000;
      plocal_var_70 = &system_state_ptr;
      uVar6 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar6;
      lVar2 = param_1[0xd];
      uVar4 = uVar4 + 8;
    } while ((uint64_t)(int64_t)(int)uVar6 < (uint64_t)(param_1[0xe] - lVar2 >> 3));
  }
// WARNING: Could not recover jumptable at 0x0001800aec33. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}
// 函数: void function_0aec40(uint64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)
void function_0aec40(uint64_t param_1,int64_t param_2,uint64_t param_3,int32_t *param_4)
{
  void *plocal_var_30;
  int64_t lStack_28;
  int iStack_20;
  uint64_t local_var_18;
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  lStack_28 = 0;
  iStack_20 = 0;
  System_DataHandler(&plocal_var_30,&processed_var_7208_ptr,param_3,*param_4,0xfffffffffffffffe);
  fwrite(lStack_28,1,(int64_t)iStack_20,*(uint64_t *)(param_2 + 8));
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_0aecf0(void)
void function_0aecf0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address