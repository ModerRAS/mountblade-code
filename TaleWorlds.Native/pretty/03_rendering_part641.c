#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part641.c - 16 个函数

// 函数: void FUN_1806287e5(int64_t param_1,int64_t param_2,uint param_3)
void FUN_1806287e5(int64_t param_1,int64_t param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  
  if (*(char *)(param_2 + param_1) != '\"') {
    do {
      bVar2 = *(byte *)((uint64_t)in_EAX + *(int64_t *)(unaff_RBX + 8));
      if (bVar2 < 0x21) {
        return;
      }
      CoreEngineDataBufferProcessor();
      *(byte *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8)) = bVar2;
      *(int8_t *)((uint64_t)(*(int *)(unaff_RDI + 0x10) + 1) + *(int64_t *)(unaff_RDI + 8)) =
           0;
      *(int *)(unaff_RDI + 0x10) = *(int *)(unaff_RDI + 0x10) + 1;
      in_EAX = *(int *)(unaff_RBX + 0x1c) + 1;
      *(uint *)(unaff_RBX + 0x1c) = in_EAX;
    } while (in_EAX < *(uint *)(unaff_RBX + 0x10));
    return;
  }
  uVar3 = in_EAX + 1;
  *(uint *)(unaff_RBX + 0x1c) = uVar3;
  if (uVar3 < param_3) {
    do {
      cVar1 = *(char *)((uint64_t)uVar3 + *(int64_t *)(unaff_RBX + 8));
      if (cVar1 == '\"') break;
      CoreEngineDataBufferProcessor();
      *(char *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8)) = cVar1;
      *(int8_t *)((uint64_t)(*(int *)(unaff_RDI + 0x10) + 1) + *(int64_t *)(unaff_RDI + 8)) =
           0;
      *(int *)(unaff_RDI + 0x10) = *(int *)(unaff_RDI + 0x10) + 1;
      uVar3 = *(int *)(unaff_RBX + 0x1c) + 1;
      *(uint *)(unaff_RBX + 0x1c) = uVar3;
    } while (uVar3 < *(uint *)(unaff_RBX + 0x10));
  }
  *(uint *)(unaff_RBX + 0x1c) = uVar3 + 1;
  return;
}





// 函数: void FUN_180628860(void)
void FUN_180628860(void)

{
  byte bVar1;
  uint in_EAX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  
  do {
    bVar1 = *(byte *)((uint64_t)in_EAX + *(int64_t *)(unaff_RBX + 8));
    if (bVar1 < 0x21) {
      return;
    }
    CoreEngineDataBufferProcessor();
    *(byte *)((uint64_t)*(uint *)(unaff_RDI + 0x10) + *(int64_t *)(unaff_RDI + 8)) = bVar1;
    *(int8_t *)((uint64_t)(*(int *)(unaff_RDI + 0x10) + 1) + *(int64_t *)(unaff_RDI + 8)) = 0;
    *(int *)(unaff_RDI + 0x10) = *(int *)(unaff_RDI + 0x10) + 1;
    in_EAX = *(int *)(unaff_RBX + 0x1c) + 1;
    *(uint *)(unaff_RBX + 0x1c) = in_EAX;
  } while (in_EAX < *(uint *)(unaff_RBX + 0x10));
  return;
}





// 函数: void FUN_1806288aa(void)
void FUN_1806288aa(void)

{
  return;
}





// 函数: void FUN_1806288c0(int64_t param_1,int param_2,int64_t param_3)
void FUN_1806288c0(int64_t param_1,int param_2,int64_t param_3)

{
  void *puStack_30;
  int64_t lStack_28;
  int iStack_20;
  
  FUN_180629a40(param_1,&puStack_30,param_2,*(int32_t *)(param_1 + 0x10),0xfffffffffffffffe);
  *(int *)(param_1 + 0x10) = param_2;
  if (0 < *(int *)(param_3 + 0x10)) {
    CoreEngineDataBufferProcessor(param_1,param_2 + *(int *)(param_3 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),
           *(uint64_t *)(param_3 + 8),(int64_t)(*(int *)(param_3 + 0x10) + 1));
  }
  if (0 < iStack_20) {
    CoreEngineDataBufferProcessor(param_1,param_2 + iStack_20);
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),lStack_28,
           (int64_t)(iStack_20 + 1));
  }
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_1806289a0(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1806289a0(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  void *puStack_30;
  int64_t lStack_28;
  int iStack_20;
  
  FUN_180629a40(param_1,&puStack_30,param_3,*(int32_t *)(param_1 + 0x10),0xfffffffffffffffe);
  *(int32_t *)(param_1 + 0x10) = 0;
  if (0 < iStack_20) {
    CoreEngineDataBufferProcessor(param_1,iStack_20);
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),lStack_28,
           (int64_t)(iStack_20 + 1));
  }
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_180628a40(int64_t param_1)
void FUN_180628a40(int64_t param_1)

{
  byte bVar1;
  int64_t lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *puStack_30;
  int64_t lStack_28;
  int iStack_20;
  
  iVar6 = 0;
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar4 = 0;
  if (uVar5 != 0) {
    pbVar3 = *(byte **)(param_1 + 8);
    do {
      if ((0x20 < *pbVar3) || ((0x100002600U >> ((int64_t)(char)*pbVar3 & 0x3fU) & 1) == 0)) break;
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (uVar4 < uVar5);
  }
  if (-1 < (int)(uVar5 - 1)) {
    lVar2 = (int64_t)(int)(uVar5 - 1);
    do {
      bVar1 = *(byte *)(*(int64_t *)(param_1 + 8) + lVar2);
      if ((0x20 < bVar1) || ((0x100002600U >> ((int64_t)(char)bVar1 & 0x3fU) & 1) == 0)) break;
      uVar5 = uVar5 - 1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  FUN_180629a40(param_1,&puStack_30,iVar6,uVar5,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 0x10) = 0;
  if (0 < iStack_20) {
    CoreEngineDataBufferProcessor(param_1,iStack_20);
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),lStack_28,
           (int64_t)(iStack_20 + 1));
  }
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



uint64_t FUN_180628ba0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar4 = 0xfffffffffffffffe;
  lVar3 = -1;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(param_2 + uVar2) != '\0');
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  if (((0 < *(int *)(param_1 + 0x10)) && (uVar2 != 0)) &&
     (lVar1 = strstr(*(uint64_t *)(param_1 + 8)), lVar1 != 0)) {
    FUN_180628610(param_1,(int)lVar1 - *(int *)(param_1 + 8),uVar2 & 0xffffffff,param_4,uVar4);
    if (lVar3 != 0) {
      uVar4 = CoreMemoryPoolValidator(&puStack_30,param_3);
      FUN_1806288c0(param_1,(int)lVar1 - *(int *)(param_1 + 8),uVar4);
      puStack_30 = &system_data_buffer_ptr;
      if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * FUN_180628ca0(void)

{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < render_system_config_config) {
    SystemInitializer(&system_ptr_a060);
    if (render_system_config_config == -1) {
      render_system_config_config = &system_data_buffer_ptr;
      render_system_config_config = 0;
      render_system_config_config = 0;
      render_system_config_config = 0;
      FUN_1808fc820(FUN_1809430e0);
      FUN_1808fcb30(&system_ptr_a060);
      return &system_ptr_a068;
    }
  }
  return &system_ptr_a068;
}



int FUN_180628d60(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  bool bVar12;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar8 = *(int *)(param_2 + 0x10);
  if (iVar8 <= iVar4) {
    if (iVar4 == iVar8) {
      if (iVar4 != 0) {
        pbVar6 = *(byte **)(param_1 + 8);
        lVar11 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar6;
        do {
          pbVar1 = pbVar6 + lVar11;
          iVar8 = (uint)*pbVar6 - (uint)*pbVar1;
          if (iVar8 != 0) break;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar1 != 0);
      }
      if (iVar8 == 0) {
        return 0;
      }
    }
    else {
      iVar9 = 0;
      if (-1 < iVar4 - iVar8) {
        lVar11 = 0;
        lVar10 = 0;
        do {
          bVar12 = true;
          iVar5 = iVar4;
          if (iVar9 + iVar8 < iVar4) {
            iVar5 = iVar9 + iVar8;
          }
          if ((iVar4 == 0) || (iVar5 - iVar9 < 1)) {
            bVar12 = iVar8 == 0;
LAB_180628e41:
            if (bVar12) {
              return iVar9;
            }
          }
          else if ((iVar5 - iVar9 == iVar8) && (iVar8 != 0)) {
            lVar7 = lVar11;
            do {
              if (iVar5 <= lVar7) break;
              cVar2 = *(char *)(*(int64_t *)(param_2 + 8) + lVar10 + lVar7);
              cVar3 = *(char *)(lVar7 + *(int64_t *)(param_1 + 8));
              bVar12 = cVar3 == cVar2;
              lVar7 = lVar7 + 1;
            } while (cVar3 == cVar2);
            goto LAB_180628e41;
          }
          iVar9 = iVar9 + 1;
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar11 <= iVar4 - iVar8);
      }
    }
  }
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180628e80(int64_t param_1,uint64_t param_2)
void FUN_180628e80(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int8_t auStack_178 [32];
  int8_t *puStack_158;
  int32_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [288];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  uStack_140 = 0;
  uStack_148 = 0;
  puStack_158 = auStack_138;
  uStack_150 = 0x118;
  iVar1 = WideCharToMultiByte(0xfde9,0,param_2,0xffffffff);
  CoreEngineDataBufferProcessor(param_1,iVar1);
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(param_1 + 8),auStack_138,(int64_t)iVar1);
}





// 函数: void FUN_180628f30(int64_t param_1,uint64_t param_2,int param_3)
void FUN_180628f30(int64_t param_1,uint64_t param_2,int param_3)

{
  CoreEngineDataBufferProcessor(param_1,param_3);
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(param_1 + 8),param_2,(int64_t)param_3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180629020(char *param_1)
void FUN_180629020(char *param_1)

{
  int iVar1;
  
  if (*param_1 != '\0') {
    iVar1 = _Mtx_lock(param_1 + 8);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    SymCleanup(render_system_config);
    *param_1 = '\0';
    iVar1 = _Mtx_unlock(param_1 + 8);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180629090(uint64_t *param_1)
void FUN_180629090(uint64_t *param_1)

{
  int8_t auStack_258 [32];
  int32_t uStack_238;
  uint64_t uStack_230;
  uint64_t *puStack_228;
  int8_t auStack_218 [512];
  uint64_t uStack_18;
  
  uStack_230 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_258;
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  uStack_238 = 1;
  puStack_228 = param_1;
                    // WARNING: Subroutine does not return
  memset(auStack_218,0,0x200);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180629770(void)
void FUN_180629770(void)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t in_R9;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)FUN_1808fc418(0x30);
  *puVar1 = &processed_var_4776_ptr;
  puVar1[4] = 0;
  puVar1[5] = _guard_check_icall;
  *puVar1 = &processed_var_4712_ptr;
  *(int32_t *)(puVar1 + 1) = 0x4000;
  if ((code *)puVar1[4] != (code *)0x0) {
    (*(code *)puVar1[4])(puVar1 + 2,0,0,in_R9,uVar5);
  }
  puVar1[4] = 0;
  puVar1[5] = _guard_check_icall;
  system_memory_pool_ptr = puVar1;
  FUN_18064f4b0();


// 函数: void FUN_180629b30(int64_t param_1)
void FUN_180629b30(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  uint uVar8;
  int64_t lVar9;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  iVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (uVar3 != 1) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      lVar2 = *(int64_t *)(param_1 + 8);
      if ((*(char *)(lVar2 + lVar7) == ' ') && (*(char *)(lVar2 + 1 + lVar7) == ' ')) {
        uVar8 = uVar6;
        lVar2 = lVar7;
        if (iVar4 != 0) {
          uVar8 = uVar5;
          lVar2 = lVar9;
        }
        lVar9 = lVar2;
        iVar4 = iVar4 + 1;
        uVar5 = uVar8;
      }
      else if (0 < iVar4) {
        uVar8 = uVar5 + 1;
        lVar1 = lVar9 + 1;
        if (uVar8 < uVar3) {
          do {
            lVar1 = lVar1 + 1;
            uVar8 = uVar8 + 1;
            *(int8_t *)(*(int64_t *)(param_1 + 8) + -1 + lVar1) =
                 *(int8_t *)((int64_t)iVar4 + *(int64_t *)(param_1 + 8) + -1 + lVar1);
            uVar3 = *(uint *)(param_1 + 0x10);
          } while (uVar8 < uVar3);
          lVar2 = *(int64_t *)(param_1 + 8);
        }
        uVar3 = uVar3 - iVar4;
        iVar4 = 0;
        *(uint *)(param_1 + 0x10) = uVar3;
        *(int8_t *)((uint64_t)uVar3 + lVar2) = 0;
        uVar3 = *(uint *)(param_1 + 0x10);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (uVar6 < uVar3 - 1);
  }
  return;
}





// 函数: void FUN_180629b52(uint64_t param_1,uint param_2)
void FUN_180629b52(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  int64_t lVar3;
  uint uVar4;
  int64_t in_R10;
  int64_t lVar5;
  
  lVar5 = 0;
  lVar3 = 0;
  do {
    lVar2 = *(int64_t *)(in_R10 + 8);
    if ((*(char *)(lVar2 + lVar3) == ' ') && (*(char *)(lVar2 + 1 + lVar3) == ' ')) {
      uVar4 = unaff_ESI;
      lVar2 = lVar3;
      if (unaff_EBX != 0) {
        uVar4 = unaff_EBP;
        lVar2 = lVar5;
      }
      lVar5 = lVar2;
      unaff_EBX = unaff_EBX + 1;
      unaff_EBP = uVar4;
    }
    else if (0 < unaff_EBX) {
      uVar4 = unaff_EBP + 1;
      lVar1 = lVar5 + 1;
      if (uVar4 < param_2) {
        do {
          lVar1 = lVar1 + 1;
          uVar4 = uVar4 + 1;
          *(int8_t *)(*(int64_t *)(in_R10 + 8) + -1 + lVar1) =
               *(int8_t *)((int64_t)unaff_EBX + *(int64_t *)(in_R10 + 8) + -1 + lVar1);
          param_2 = *(uint *)(in_R10 + 0x10);
        } while (uVar4 < param_2);
        lVar2 = *(int64_t *)(in_R10 + 8);
      }
      param_2 = param_2 - unaff_EBX;
      unaff_EBX = 0;
      *(uint *)(in_R10 + 0x10) = param_2;
      *(int8_t *)((uint64_t)param_2 + lVar2) = 0;
      param_2 = *(uint *)(in_R10 + 0x10);
    }
    unaff_ESI = unaff_ESI + 1;
    lVar3 = lVar3 + 1;
  } while (unaff_ESI < param_2 - 1);
  return;
}





// 函数: void FUN_180629bf3(void)
void FUN_180629bf3(void)

{
  return;
}





// 函数: void FUN_180629c00(int64_t param_1,char param_2)
void FUN_180629c00(int64_t param_1,char param_2)

{
  char *pcVar1;
  uint uVar2;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar3;
  uint64_t uVar7;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 != 0) {
    uVar4 = 0;
    uVar6 = 0;
    if (iVar5 != 1) {
      pcVar1 = *(char **)(param_1 + 8);
      uVar3 = uVar4;
      uVar7 = uVar4;
      do {
        uVar6 = (uint)uVar7;
        if (*pcVar1 != param_2) break;
        uVar6 = uVar6 + 1;
        uVar7 = (uint64_t)uVar6;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (uint64_t)uVar2;
        pcVar1 = pcVar1 + 1;
      } while (uVar2 < iVar5 - 1U);
      if (iVar5 != 1) {
        uVar3 = uVar4;
        do {
          uVar4 = uVar4 + 1;
          uVar2 = (int)uVar3 + 1;
          uVar3 = (uint64_t)uVar2;
          *(int8_t *)(*(int64_t *)(param_1 + 8) + -1 + uVar4) =
               *(int8_t *)((int64_t)(int)uVar6 + *(int64_t *)(param_1 + 8) + -1 + uVar4);
          iVar5 = *(int *)(param_1 + 0x10);
        } while (uVar2 < iVar5 - 1U);
      }
    }
    *(uint *)(param_1 + 0x10) = iVar5 - uVar6;
    *(int8_t *)((uint64_t)(iVar5 - uVar6) + *(int64_t *)(param_1 + 8)) = 0;
  }
  return;
}





// 函数: void FUN_180629c3d(void)
void FUN_180629c3d(void)

{
  int64_t unaff_RBX;
  uint uVar1;
  uint64_t in_R10;
  int in_R11D;
  uint64_t uVar2;
  
  uVar2 = in_R10;
  do {
    in_R10 = in_R10 + 1;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (uint64_t)uVar1;
    *(int8_t *)(*(int64_t *)(unaff_RBX + 8) + -1 + in_R10) =
         *(int8_t *)((int64_t)in_R11D + *(int64_t *)(unaff_RBX + 8) + -1 + in_R10);
  } while (uVar1 < *(int *)(unaff_RBX + 0x10) - 1U);
  uVar1 = *(int *)(unaff_RBX + 0x10) - in_R11D;
  *(uint *)(unaff_RBX + 0x10) = uVar1;
  *(int8_t *)((uint64_t)uVar1 + *(int64_t *)(unaff_RBX + 8)) = 0;
  return;
}





