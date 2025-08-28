#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part061.c - 18 个函数

// 函数: void FUN_18029ccc0(int64_t param_1,int param_2,int32_t param_3,uint param_4)
void FUN_18029ccc0(int64_t param_1,int param_2,int32_t param_3,uint param_4)

{
  uint64_t auStack_18 [2];
  
  auStack_18[0] = *(uint64_t *)(system_message_buffer + 0x1e08 + (int64_t)param_2 * 8);
  if ((param_4 & 1) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xd0))
              (*(int64_t **)(param_1 + 0x8400),param_3,1,auStack_18);
  }
  if ((param_4 & 2) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x208))
              (*(int64_t **)(param_1 + 0x8400),param_3,1,auStack_18);
  }
  if ((param_4 & 4) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x1e8))
              (*(int64_t **)(param_1 + 0x8400),param_3,1,auStack_18);
  }
  if ((param_4 & 8) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x100))
              (*(int64_t **)(param_1 + 0x8400),param_3,1,auStack_18);
  }
  if ((param_4 & 0x10) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x50))
              (*(int64_t **)(param_1 + 0x8400),param_3,1,auStack_18);
  }
  if ((param_4 & 0x20) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x230))
              (*(int64_t **)(param_1 + 0x8400),param_3,1,auStack_18);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029cdd0(int64_t param_1,uint64_t *param_2)
void FUN_18029cdd0(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  byte bVar2;
  int64_t lVar3;
  int8_t auStack_58 [32];
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  lVar1 = *(int64_t *)
           (system_message_buffer + 0x1e50 +
           ((uint64_t)*(byte *)((int64_t)param_2 + 0x16) +
           (((uint64_t)*(byte *)((int64_t)param_2 + 0x14) +
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x15) +
            (uint64_t)*(byte *)((int64_t)param_2 + 0x12) * 4) * 2) * 3 +
           (uint64_t)*(byte *)((int64_t)param_2 + 0x13)) * 2) * 8);
  lVar3 = system_message_buffer;
  if (lVar1 != *(int64_t *)(param_1 + 0x8418)) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x158))(*(int64_t **)(param_1 + 0x8400),lVar1)
    ;
    lVar3 = system_message_buffer;
    *(int64_t *)(param_1 + 0x8418) = lVar1;
  }
  if (*(char *)((int64_t)param_2 + 0x11) == '\0') {
    bVar2 = *(byte *)((int64_t)param_2 + 0xf);
  }
  else {
    bVar2 = *(byte *)(param_2 + 2);
  }
  lVar1 = *(int64_t *)
           (lVar3 + 0x21b8 +
           ((uint64_t)*(byte *)((int64_t)param_2 + 0xe) +
           ((uint64_t)*(byte *)((int64_t)param_2 + 0xd) +
           ((uint64_t)*(byte *)((int64_t)param_2 + 0xc) +
           ((uint64_t)*(byte *)((int64_t)param_2 + 0xb) +
           ((uint64_t)*(byte *)((int64_t)param_2 + 10) +
           ((uint64_t)*(byte *)((int64_t)param_2 + 9) + (uint64_t)*(byte *)(param_2 + 1) * 2) * 8
           ) * 2) * 8) * 8) * 2) * 8);
  if ((lVar1 != *(int64_t *)(param_1 + 0x8420)) || ((uint)bVar2 != *(uint *)(param_1 + 0x8428))) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x120))
              (*(int64_t **)(param_1 + 0x8400),lVar1,bVar2);
    lVar3 = system_message_buffer;
    *(int64_t *)(param_1 + 0x8420) = lVar1;
    *(uint *)(param_1 + 0x8428) = (uint)bVar2;
  }
  lVar1 = *(int64_t *)(lVar3 + 0x2150 + (uint64_t)*(byte *)(param_2 + 7) * 8);
  if (lVar1 != *(int64_t *)(param_1 + 0x8430)) {
    uStack_38 = 0x3f800000;
    uStack_34 = 0x3f800000;
    uStack_30 = 0x3f800000;
    uStack_2c = 0x3f800000;
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x118))
              (*(int64_t **)(param_1 + 0x8400),lVar1,&uStack_38,0xffffffff);
    lVar3 = system_message_buffer;
    *(int64_t *)(param_1 + 0x8430) = lVar1;
  }
  lVar1 = *(int64_t *)(lVar3 + 0x1d88 + (uint64_t)*(byte *)((int64_t)param_2 + 0x39) * 8);
  if (*(int64_t *)(param_1 + 0x8410) != lVar1) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x88))(*(int64_t **)(param_1 + 0x8400),lVar1);
    *(int64_t *)(param_1 + 0x8410) = lVar1;
  }
  FUN_18029d000(param_1,*(int8_t *)((int64_t)param_2 + 0x17));
  FUN_18029f560(param_1,*param_2,*(int8_t *)((int64_t)param_2 + 0x3b),
                *(int8_t *)((int64_t)param_2 + 0x3a));
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_58);
}





// 函数: void FUN_18029cfa0(int64_t param_1,int64_t *param_2)
void FUN_18029cfa0(int64_t param_1,int64_t *param_2)

{
  int *piVar1;
  
  if ((*param_2 != 0) &&
     (piVar1 = *(int **)(*param_2 + 0x10), *(int64_t *)(param_1 + 0x82a0) != (int64_t)*piVar1)) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x228))
              (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(piVar1 + 6),0,0);
    *(int64_t *)(param_1 + 0x82a0) = (int64_t)**(int **)(*param_2 + 0x10);
  }
  return;
}





// 函数: void FUN_18029d000(int64_t param_1,int8_t param_2)
void FUN_18029d000(int64_t param_1,int8_t param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_2) {
  case 1:
    iVar1 = 1;
    break;
  case 2:
    iVar1 = 2;
    break;
  case 3:
    iVar1 = 3;
    break;
  case 4:
    iVar1 = 4;
    break;
  case 5:
    iVar1 = 5;
    break;
  case 6:
    iVar1 = 0x23;
  }
  if (iVar1 != *(int *)(param_1 + 0x8408)) {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xc0))(*(int64_t **)(param_1 + 0x8400),iVar1);
    *(int *)(param_1 + 0x8408) = iVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029d0a0(int64_t param_1,uint64_t *param_2,int32_t *param_3)
void FUN_18029d0a0(int64_t param_1,uint64_t *param_2,int32_t *param_3)

{
  int8_t auStack_58 [32];
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_58;
  uStack_28 = *param_2;
  uStack_20 = param_2[1];
  uStack_14 = *(int32_t *)((int64_t)param_2 + 0x14);
  uStack_18 = *(int32_t *)(param_2 + 2);
  (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x160))
            (*(int64_t **)(param_1 + 0x8400),1,&uStack_28);
  uStack_2c = param_3[3];
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_38 = *param_3;
  (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x168))
            (*(int64_t **)(param_1 + 0x8400),1,&uStack_38);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_58);
}



// WARNING: Removing unreachable block (ram,0x00018029d1c7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029d150(int64_t param_1,int param_2,int64_t param_3,int param_4,int param_5)
void FUN_18029d150(int64_t param_1,int param_2,int64_t param_3,int param_4,int param_5)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  lVar4 = (int64_t)param_2;
  lVar3 = 0;
  lVar2 = lVar3;
  if (param_2 == 0x21) {
    if (param_3 != 0) {
      *(int64_t *)(param_3 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      lVar2 = param_3 + 0x1a0;
    }
  }
  else if ((((param_3 != 0) && (lVar1 = FUN_18023a940(), lVar1 != 0)) &&
           (lVar2 = lVar1, *(int64_t *)(lVar1 + 8) == 0)) && (*(int64_t *)(lVar1 + 0x10) == 0)) {
    lVar2 = 0;
  }
  if (((*(int64_t *)(param_1 + 0x8438 + lVar4 * 8) != lVar2) ||
      (*(int *)(param_1 + 0x8838 + lVar4 * 4) != param_5)) ||
     (*(int *)(param_1 + 0x8a38 + lVar4 * 4) != param_4)) {
    if (lVar2 != 0) {
      if ((*(int64_t *)(lVar2 + 8) == 0) && (*(int64_t *)(lVar2 + 0x10) == 0)) {
        return;
      }
      if (lVar2 != 0) {
        if (param_5 == -1) {
          lVar3 = *(int64_t *)(lVar2 + 0x10);
        }
        else {
          lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 0x18) + (int64_t)param_5 * 8);
        }
      }
    }
    FUN_18029fb10(param_1,param_2,lVar3,param_4);
    *(int64_t *)(param_1 + 0x8438 + lVar4 * 8) = lVar2;
    *(int *)(param_1 + 0x8838 + lVar4 * 4) = param_5;
    *(int *)(param_1 + 0x8a38 + lVar4 * 4) = param_4;
    *(int *)(param_1 + 0x82b4) = *(int *)(param_1 + 0x82b4) + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029d280(int64_t param_1,int64_t param_2)
void FUN_18029d280(int64_t param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  int16_t *puVar5;
  int iVar6;
  int iVar7;
  void *puVar8;
  int64_t *plVar9;
  uint *puVar10;
  int8_t auStack_108 [40];
  uint64_t uStack_e0;
  void *apuStack_d8 [20];
  uint64_t uStack_38;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  iVar6 = 0;
  iVar7 = *(int *)(param_2 + 0x10) + 0x14;
  CoreEngineDataBufferProcessor(param_2,iVar7);
  puVar3 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar3 = 0x74786554;
  puVar3[1] = 0x20657275;
  puVar3[2] = 0x746f6c53;
  puVar3[3] = 0x73694c20;
  puVar3[4] = 0xa3a2074;
  *(int8_t *)(puVar3 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar7;
  puVar10 = (uint *)(param_1 + 0x8a38);
  plVar9 = (int64_t *)(param_1 + 0x8438);
  do {
    if (*plVar9 != 0) {
      lVar2 = FUN_1802a05d0(*plVar9,apuStack_d8);
      puVar8 = &system_buffer_ptr;
      if (*(void **)(lVar2 + 8) != (void *)0x0) {
        puVar8 = *(void **)(lVar2 + 8);
      }
      System_DataHandler(param_2,&ui_system_data_1648_ptr,iVar6,puVar8);
      apuStack_d8[0] = &system_state_ptr;
      uVar1 = *puVar10;
      if ((uVar1 & 1) != 0) {
        iVar7 = *(int *)(param_2 + 0x10) + 7;
        CoreEngineDataBufferProcessor(param_2,iVar7);
        *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
             0x20786574726576;
        *(int *)(param_2 + 0x10) = iVar7;
      }
      if ((uVar1 & 2) != 0) {
        iVar7 = *(int *)(param_2 + 0x10) + 7;
        CoreEngineDataBufferProcessor(param_2,iVar7);
        *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
             0x206e69616d6f64;
        *(int *)(param_2 + 0x10) = iVar7;
      }
      if ((uVar1 & 4) != 0) {
        iVar7 = *(int *)(param_2 + 0x10) + 5;
        CoreEngineDataBufferProcessor(param_2,iVar7);
        puVar3 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
        *puVar3 = 0x6c6c7568;
        *(int16_t *)(puVar3 + 1) = 0x20;
        *(int *)(param_2 + 0x10) = iVar7;
      }
      if ((uVar1 & 8) != 0) {
        iVar7 = *(int *)(param_2 + 0x10) + 9;
        CoreEngineDataBufferProcessor(param_2,iVar7);
        puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
        *puVar4 = 0x797274656d6f6567;
        *(int16_t *)(puVar4 + 1) = 0x20;
        *(int *)(param_2 + 0x10) = iVar7;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar7 = *(int *)(param_2 + 0x10) + 6;
        CoreEngineDataBufferProcessor(param_2,iVar7);
        puVar3 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
        *puVar3 = 0x65786970;
        *(int16_t *)(puVar3 + 1) = 0x206c;
        *(int8_t *)((int64_t)puVar3 + 6) = 0;
        *(int *)(param_2 + 0x10) = iVar7;
      }
      iVar7 = *(int *)(param_2 + 0x10);
      if ((uVar1 & 0x20) != 0) {
        iVar7 = iVar7 + 8;
        CoreEngineDataBufferProcessor(param_2,iVar7);
        puVar4 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
        *puVar4 = 0x20657475706d6f63;
        *(int8_t *)(puVar4 + 1) = 0;
        *(int *)(param_2 + 0x10) = iVar7;
      }
      CoreEngineDataBufferProcessor(param_2,iVar7 + 2);
      puVar5 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *puVar5 = 0xa29;
      *(int8_t *)(puVar5 + 1) = 0;
      *(int *)(param_2 + 0x10) = iVar7 + 2;
    }
    iVar6 = iVar6 + 1;
    plVar9 = plVar9 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar6 < 0x80);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029d500(int64_t param_1,int64_t param_2)
void FUN_18029d500(int64_t param_1,int64_t param_2)

{
  int32_t *puVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  void *puVar5;
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  int64_t lStack_f0;
  uint64_t uStack_e8;
  void *puStack_d8;
  void *puStack_d0;
  int32_t uStack_c8;
  uint8_t auStack_c0 [136];
  uint64_t uStack_38;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  iVar3 = 0;
  uStack_f8 = 0;
  iVar2 = *(int *)(param_2 + 0x10) + 0x1a;
  lStack_f0 = param_1;
  CoreEngineDataBufferProcessor(param_2,iVar2);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x646e6552;
  puVar1[1] = 0x54207265;
  puVar1[2] = 0x65677261;
  puVar1[3] = 0x6c532074;
  *(uint64_t *)(puVar1 + 4) = 0x207473694c20746f;
  *(int16_t *)(puVar1 + 6) = 0xa3a;
  *(int8_t *)((int64_t)puVar1 + 0x1a) = 0;
  *(int *)(param_2 + 0x10) = iVar2;
  plVar4 = (int64_t *)(param_1 + 0x83b8);
  do {
    if (*plVar4 != 0) {
      puStack_d8 = &memory_allocator_3432_ptr;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0;
      strcpy_s(auStack_c0,0x80,&system_buffer_ptr);
      uStack_f8 = 1;
      puVar5 = &system_buffer_ptr;
      if (puStack_d0 != (void *)0x0) {
        puVar5 = puStack_d0;
      }
      System_DataHandler(param_2,&ui_system_data_1688_ptr,iVar3,puVar5);
      uStack_f8 = 0;
      puStack_d8 = &system_state_ptr;
    }
    iVar3 = iVar3 + 1;
    plVar4 = plVar4 + 1;
  } while (iVar3 < 7);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar3 = iVar2 + 0x14;
  CoreEngineDataBufferProcessor(param_2,iVar3);
  puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar1 = 0x74706544;
  puVar1[1] = 0x61542068;
  puVar1[2] = 0x74656772;
  puVar1[3] = 0x6f6c5320;
  puVar1[4] = 0x203a2074;
  *(int8_t *)(puVar1 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar3;
  if (*(int64_t *)(lStack_f0 + 0x83f0) == 0) {
    iVar2 = iVar2 + 0x19;
    CoreEngineDataBufferProcessor(param_2,iVar2);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar1 = 0x6c6c756e;
    *(int16_t *)(puVar1 + 1) = 10;
    *(int *)(param_2 + 0x10) = iVar2;
  }
  else {
    puStack_d8 = &memory_allocator_3432_ptr;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 0;
    strcpy_s(auStack_c0,0x80,&system_buffer_ptr);
    uStack_f8 = 2;
    puVar5 = &system_buffer_ptr;
    if (puStack_d0 != (void *)0x0) {
      puVar5 = puStack_d0;
    }
    System_DataHandler(param_2,&processed_var_676_ptr,puVar5);
    uStack_f8 = 0;
    puStack_d8 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029d760(int64_t param_1,int param_2,char param_3,int64_t param_4,int param_5)
void FUN_18029d760(int64_t param_1,int param_2,char param_3,int64_t param_4,int param_5)

{
  int64_t *plVar1;
  int *piVar2;
  uint64_t uVar3;
  int8_t auStack_98 [32];
  int32_t *puStack_78;
  int32_t uStack_70;
  uint64_t *puStack_68;
  int32_t *puStack_60;
  int32_t auStack_58 [2];
  uint64_t uStack_50;
  uint64_t auStack_48 [4];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  uVar3 = 0;
  auStack_58[0] = 0xffffffff;
  if (param_4 != 0) {
    piVar2 = (int *)(system_main_module_state + 0x224);
    *(int64_t *)(param_4 + 0x340) = (int64_t)*piVar2;
    if (param_5 == -1) {
      uVar3 = *(uint64_t *)(param_4 + 0x208);
    }
    else {
      uVar3 = *(uint64_t *)(*(int64_t *)(param_4 + 0x210) + (int64_t)param_5 * 8);
    }
    *(int64_t *)(param_4 + 0x340) = (int64_t)*piVar2;
    auStack_58[0] = *(int32_t *)(param_4 + 0x1f8);
  }
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  uStack_50 = uVar3;
  if (param_3 == '\0') {
    puStack_68 = auStack_48;
    uStack_70 = 4;
    puStack_78._0_4_ = 1;
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0,0,0);
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    puStack_60 = auStack_58;
    auStack_48[param_2 - 1] = uVar3;
    puStack_68 = auStack_48;
    uStack_70 = 4;
    puStack_78 = (int32_t *)CONCAT44(puStack_78._4_4_,1);
    (**(code **)(*plVar1 + 0x110))(plVar1,0xffffffff,0,0);
    if (param_2 < 7) {
      *(uint64_t *)(param_1 + 0x83b8) = 0;
      *(uint64_t *)(param_1 + 0x8378) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83c0) = 0;
      *(uint64_t *)(param_1 + 0x8380) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83c8) = 0;
      *(uint64_t *)(param_1 + 0x8388) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83d0) = 0;
      *(uint64_t *)(param_1 + 0x8390) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83d8) = 0;
      *(uint64_t *)(param_1 + 0x8398) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83e0) = 0;
      *(uint64_t *)(param_1 + 0x83a0) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83e8) = 0;
      *(uint64_t *)(param_1 + 0x83a8) = 0xffffffffdeadfeee;
    }
  }
  else {
    puStack_78 = auStack_58;
    (**(code **)(*plVar1 + 0x220))(plVar1,param_2,1,&uStack_50);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029d930(int64_t param_1,uint64_t param_2,char param_3,int64_t param_4)
void FUN_18029d930(int64_t param_1,uint64_t param_2,char param_3,int64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int8_t auStack_88 [32];
  uint64_t uStack_68;
  int32_t uStack_60;
  uint64_t *puStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t auStack_40 [4];
  uint64_t uStack_20;
  
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = *(uint64_t *)(param_4 + 0x20);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  }
  plVar1 = *(int64_t **)(param_1 + 0x8400);
  uStack_48 = uVar2;
  if (param_3 == '\0') {
    puStack_58 = auStack_40;
    uStack_60 = 4;
    uStack_68._0_4_ = 1;
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0,0,0);
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    puStack_58 = &uStack_48;
    uStack_50 = 0;
    auStack_40[(int)param_2 - 1] = uVar2;
    uStack_60 = 4;
    uStack_68 = CONCAT44(uStack_68._4_4_,1);
    (**(code **)(*plVar1 + 0x110))(plVar1,0xffffffff,0,0);
    if ((int)param_2 < 7) {
      *(uint64_t *)(param_1 + 0x83b8) = 0;
      *(uint64_t *)(param_1 + 0x8378) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83c0) = 0;
      *(uint64_t *)(param_1 + 0x8380) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83c8) = 0;
      *(uint64_t *)(param_1 + 0x8388) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83d0) = 0;
      *(uint64_t *)(param_1 + 0x8390) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83d8) = 0;
      *(uint64_t *)(param_1 + 0x8398) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83e0) = 0;
      *(uint64_t *)(param_1 + 0x83a0) = 0xffffffffdeadfeee;
      *(uint64_t *)(param_1 + 0x83e8) = 0;
      *(uint64_t *)(param_1 + 0x83a8) = 0xffffffffdeadfeee;
    }
  }
  else {
    uStack_68 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,param_2,1,&uStack_48);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_20 ^ (uint64_t)auStack_88);
}





// 函数: void FUN_18029db70(int64_t param_1,char param_2,int64_t param_3)
void FUN_18029db70(int64_t param_1,char param_2,int64_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uVar4;
  int64_t lVar5;
  
  if ((*(int64_t *)(param_1 + 0x8240) != param_3) || (*(char *)(param_1 + 0x8270) != param_2)) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    *(int64_t *)(param_1 + 0x8240) = param_3;
    *(char *)(param_1 + 0x8270) = param_2;
    if (param_2 == '\n') {
      (**(code **)(*plVar1 + 0x90))(plVar1,0,1,param_3 + 0x2a0,param_3 + 0x2b8,param_3 + 0x2b0);
      return;
    }
    if (param_2 == '\v') {
      lVar2 = param_3 + 0x2b0;
      lVar3 = param_3 + 0x2b8;
      lVar5 = param_3 + 0x2a0;
      uVar4 = 2;
    }
    else {
      lVar2 = param_3 + 0x220;
      lVar3 = param_3 + 0x260;
      lVar5 = param_3 + 0x1a0;
      uVar4 = *(int32_t *)(param_3 + 0x18c);
    }
    (**(code **)(*plVar1 + 0x90))(plVar1,0,uVar4,lVar5,lVar3,lVar2);
  }
  return;
}





// 函数: void FUN_18029dc40(int64_t param_1,int64_t param_2)
void FUN_18029dc40(int64_t param_1,int64_t param_2)

{
  if (*(int64_t *)(param_1 + 0x8240) != param_2) {
    *(int64_t *)(param_1 + 0x8240) = param_2;
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x90))
              (*(int64_t **)(param_1 + 0x8400),0,*(int32_t *)(param_2 + 0x188),param_2 + 0x1a0,
               param_2 + 0x260,param_2 + 0x220);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029dca0(int64_t param_1,uint64_t param_2,uint param_3,int64_t param_4)
void FUN_18029dca0(int64_t param_1,uint64_t param_2,uint param_3,int64_t param_4)

{
  int64_t *plVar1;
  code *pcVar2;
  uint64_t uVar3;
  
  uVar3 = param_2 & 0xffffffff;
  if ((param_3 & 1) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x38);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_4 + 0x10);
  }
  if ((param_3 & 4) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x1f0);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,uVar3,1,param_4 + 0x10);
  }
  if ((param_3 & 2) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x210);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,uVar3,1,param_4 + 0x10);
  }
  if ((param_3 & 0x10) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x80);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,uVar3,1,param_4 + 0x10);
  }
  if ((param_3 & 0x20) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x238);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar2)(plVar1,uVar3,1,param_4 + 0x10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029de40(int64_t param_1,int32_t param_2)
void FUN_18029de40(int64_t param_1,int32_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int8_t auStack_88 [32];
  int32_t uStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  lVar1 = *(int64_t *)(param_1 + 0x83b8);
  bVar3 = lVar1 != *(int64_t *)(param_1 + 0x8378);
  if (bVar3) {
    *(int64_t *)(param_1 + 0x8378) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = *(uint64_t *)(lVar1 + 8);
  }
  lVar1 = *(int64_t *)(param_1 + 0x83c0);
  bVar4 = lVar1 != *(int64_t *)(param_1 + 0x8380);
  if (bVar4) {
    *(int64_t *)(param_1 + 0x8380) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_40 = 0;
  }
  else {
    uStack_40 = *(uint64_t *)(lVar1 + 8);
  }
  lVar1 = *(int64_t *)(param_1 + 0x83c8);
  bVar5 = lVar1 != *(int64_t *)(param_1 + 0x8388);
  if (bVar5) {
    *(int64_t *)(param_1 + 0x8388) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(uint64_t *)(lVar1 + 8);
  }
  lVar1 = *(int64_t *)(param_1 + 0x83d0);
  bVar6 = lVar1 != *(int64_t *)(param_1 + 0x8390);
  if (bVar6) {
    *(int64_t *)(param_1 + 0x8390) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_30 = 0;
  }
  else {
    uStack_30 = *(uint64_t *)(lVar1 + 8);
  }
  lVar1 = *(int64_t *)(param_1 + 0x83d8);
  bVar7 = lVar1 != *(int64_t *)(param_1 + 0x8398);
  if (bVar7) {
    *(int64_t *)(param_1 + 0x8398) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = *(uint64_t *)(lVar1 + 8);
  }
  lVar1 = *(int64_t *)(param_1 + 0x83e0);
  bVar8 = lVar1 != *(int64_t *)(param_1 + 0x83a0);
  if (bVar8) {
    *(int64_t *)(param_1 + 0x83a0) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(uint64_t *)(lVar1 + 8);
  }
  lVar1 = *(int64_t *)(param_1 + 0x83e8);
  bVar9 = lVar1 != *(int64_t *)(param_1 + 0x83a8);
  if (bVar9) {
    *(int64_t *)(param_1 + 0x83a8) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = *(uint64_t *)(lVar1 + 8);
  }
  lVar1 = *(int64_t *)(param_1 + 0x83f0);
  bVar10 = *(int64_t *)(param_1 + 0x83b0) != lVar1;
  if (bVar10) {
    *(int64_t *)(param_1 + 0x83b0) = lVar1;
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint64_t *)(lVar1 + 8);
  }
  if ((bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || bVar3)))))) || (bVar10)) {
    uStack_50 = 0xffffffffffffffff;
    uStack_58 = 0;
    uStack_60 = 0xffffffff;
    uStack_68 = param_2;
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x110))
              (*(int64_t **)(param_1 + 0x8400),param_2,&uStack_48,uVar2);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_10 ^ (uint64_t)auStack_88);
}





// 函数: void FUN_18029e060(int64_t param_1)
void FUN_18029e060(int64_t param_1)

{
  if (system_data_2846 == '\0') {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xa8))();
  }
  return;
}





// 函数: void FUN_18029e090(int64_t param_1,int32_t param_2,int param_3,int32_t param_4)
void FUN_18029e090(int64_t param_1,int32_t param_2,int param_3,int32_t param_4)

{
  if (system_data_2846 == '\0') {
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0xa0))
              (*(int64_t **)(param_1 + 0x8400),param_3 * 3,param_4,param_2,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029e110(int64_t param_1)
void FUN_18029e110(int64_t param_1)

{
  int64_t lVar1;
  
  if (system_data_2846 == '\0') {
    lVar1 = *(int64_t *)(*(int64_t *)(system_message_buffer + 0x1d50) + 0x18);
    if (*(int64_t *)(param_1 + 0x8240) != lVar1) {
      *(int64_t *)(param_1 + 0x8240) = lVar1;
      (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x90))
                (*(int64_t **)(param_1 + 0x8400),0,*(int32_t *)(lVar1 + 0x188),lVar1 + 0x1a0,
                 lVar1 + 0x260,lVar1 + 0x220);
    }
                    // WARNING: Could not recover jumptable at 0x00018029e193. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x68))(*(int64_t **)(param_1 + 0x8400),3);
    return;
  }
  return;
}



bool FUN_18029e1a0(int64_t param_1,int64_t param_2,int param_3,int param_4,uint param_5,
                  int *param_6)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uStack_18;
  uint uStack_10;
  
  lVar2 = FUN_18023a940(param_2);
  uVar4 = (uint)*(byte *)(param_2 + 0x335);
  if ((int)*(uint *)(param_2 + 0x35c) < (int)(uint)*(byte *)(param_2 + 0x335)) {
    uVar4 = *(uint *)(param_2 + 0x35c);
  }
  param_3 = uVar4 * param_4 + param_3;
  if (param_5 == 0) {
    uVar3 = 5;
  }
  else {
    uVar4 = param_5 & 1;
    if ((param_5 & 8) != 0) {
      uVar4 = 3;
    }
    uVar3 = uVar4 | 4;
    if ((param_5 & 2) == 0) {
      uVar3 = uVar4;
    }
    if ((param_5 & 4) != 0) {
      uVar3 = uVar3 | 5;
    }
  }
  iVar1 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x70))
                    (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(lVar2 + 8),param_3,uVar3,0,
                     &uStack_18);
  if (iVar1 < 0) {
    FUN_180220810(iVar1,&ui_system_data_1856_ptr);
  }
  *(uint64_t *)(param_6 + 2) = uStack_18;
  *(uint64_t *)(param_6 + 4) = (uint64_t)uStack_10;
  *param_6 = param_3;
  return -1 < iVar1;
}





// 函数: void FUN_18029e2a0(int64_t param_1,uint64_t param_2,int32_t *param_3)
void FUN_18029e2a0(int64_t param_1,uint64_t param_2,int32_t *param_3)

{
  int32_t uVar1;
  int64_t *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  int64_t lVar3;
  
  plVar2 = *(int64_t **)(param_1 + 0x8400);
  uVar1 = *param_3;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x78);
  lVar3 = FUN_18023a940(param_2);
                    // WARNING: Could not recover jumptable at 0x00018029e2e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(plVar2,*(uint64_t *)(lVar3 + 8),uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_18029e2f0(int64_t param_1,int64_t param_2,uint param_3,int64_t param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint64_t auStack_18 [2];
  
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  if (param_3 == 0) {
    uVar3 = 5;
  }
  else {
    uVar1 = param_3 & 1;
    if ((param_3 & 8) != 0) {
      uVar1 = 3;
    }
    uVar3 = uVar1 | 4;
    if ((param_3 & 2) == 0) {
      uVar3 = uVar1;
    }
    if ((param_3 & 4) != 0) {
      uVar3 = uVar3 | 5;
    }
  }
  iVar2 = (**(code **)(**(int64_t **)(param_1 + 0x8400) + 0x70))
                    (*(int64_t **)(param_1 + 0x8400),*(uint64_t *)(param_2 + 0x10),0,uVar3,0,
                     auStack_18);
  if (iVar2 < 0) {
    FUN_180220810(iVar2,&ui_system_data_1768_ptr);
  }
  *(uint64_t *)(param_4 + 8) = auStack_18[0];
  return -1 < iVar2;
}





