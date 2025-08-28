#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part030.c - 7 个函数
// 函数: void function_2a1af3(void)
void function_2a1af3(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 400) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool function_2a1bc0(int64_t *param_1)
{
  byte bVar1;
  int iVar2;
  int8_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  if ((((*(short *)((int64_t)param_1 + 0x62) != 0) &&
       (bVar1 = *(byte *)((int64_t)param_1 + 0x65), bVar1 != 0)) &&
      (*(ushort *)((int64_t)param_1 + 0x5c) != 0)) && (*(ushort *)((int64_t)param_1 + 0x5e) != 0))
  {
    lVar5 = 0;
    uVar6 = (uint)*(ushort *)((int64_t)param_1 + 0x5c);
    uVar9 = (uint64_t)*(ushort *)((int64_t)param_1 + 0x5e);
    if (bVar1 != 0) {
      iVar2 = *(int *)((int64_t)param_1 + 0x54);
      uVar11 = (uint64_t)bVar1;
      uVar10 = (uint64_t)(iVar2 - 0xe);
      do {
        if ((uint)uVar10 < 9) {
// WARNING: Could not recover jumptable at 0x0001802a1c43. Too many branches
// WARNING: Treating indirect jump as call
          uVar3 = (*(code *)((uint64_t)*(uint *)(&processed_var_956_ptr + uVar10 * 4) + 0x180000000))
                            ((code *)((uint64_t)*(uint *)(&processed_var_956_ptr + uVar10 * 4) +
                                     0x180000000));
          return (bool)uVar3;
        }
        iVar4 = SystemFunction_0001802a0ec0(iVar2);
        uVar8 = (uint)uVar9 >> 1;
        lVar5 = lVar5 + (uint64_t)(iVar4 * uVar6 + 7 >> 3) * (uVar9 & 0xffffffff);
        uVar7 = 1;
        if (1 < uVar8) {
          uVar7 = uVar8;
        }
        uVar9 = (uint64_t)uVar7;
        uVar7 = uVar6 >> 1;
        uVar6 = 1;
        if (1 < uVar7) {
          uVar6 = uVar7;
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    lVar5 = (uint64_t)*(ushort *)((int64_t)param_1 + 0x62) * lVar5;
    param_1[1] = lVar5;
    if ((char)param_1[2] == '\0') {
      if (*param_1 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *param_1 = 0;
    }
    lVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,lVar5,0x10,*(int8_t *)((int64_t)param_1 + 0x12));
    *param_1 = lVar5;
    *(int8_t *)(param_1 + 2) = 0;
    return lVar5 != 0;
  }
  return true;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool function_2a1bfa(ushort param_1,uint64_t param_2)
{
  int iVar1;
  byte in_AL;
  int8_t uVar2;
  int iVar3;
  int64_t *unaff_RBX;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  lVar4 = 0;
  uVar5 = (uint)param_1;
  param_2 = param_2 & 0xffff;
  if (in_AL != 0) {
    iVar1 = *(int *)((int64_t)unaff_RBX + 0x54);
    uVar9 = (uint64_t)in_AL;
    uVar8 = (uint64_t)(iVar1 - 0xe);
    do {
      if ((uint)uVar8 < 9) {
// WARNING: Could not recover jumptable at 0x0001802a1c43. Too many branches
// WARNING: Treating indirect jump as call
        uVar2 = (*(code *)((uint64_t)*(uint *)(&processed_var_956_ptr + uVar8 * 4) + 0x180000000))
                          ((code *)((uint64_t)*(uint *)(&processed_var_956_ptr + uVar8 * 4) + 0x180000000))
        ;
        return (bool)uVar2;
      }
      iVar3 = SystemFunction_0001802a0ec0(iVar1);
      uVar7 = (uint)param_2 >> 1;
      lVar4 = lVar4 + (uint64_t)(iVar3 * uVar5 + 7 >> 3) * (param_2 & 0xffffffff);
      uVar6 = 1;
      if (1 < uVar7) {
        uVar6 = uVar7;
      }
      param_2 = (uint64_t)uVar6;
      uVar6 = uVar5 >> 1;
      uVar5 = 1;
      if (1 < uVar6) {
        uVar5 = uVar6;
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar4 = (uint64_t)*(ushort *)((int64_t)unaff_RBX + 0x62) * lVar4;
  unaff_RBX[1] = lVar4;
  if ((char)unaff_RBX[2] == '\0') {
    if (*unaff_RBX != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *unaff_RBX = 0;
  }
  lVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,lVar4,0x10,*(int8_t *)((int64_t)unaff_RBX + 0x12));
  *unaff_RBX = lVar4;
  *(int8_t *)(unaff_RBX + 2) = 0;
  return lVar4 != 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool function_2a1c11(uint64_t param_1,uint64_t param_2,uint param_3,uint64_t param_4)
{
  int iVar1;
  byte in_AL;
  int8_t uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  iVar1 = *(int *)((int64_t)unaff_RBX + 0x54);
  uVar8 = (uint64_t)in_AL;
  uVar7 = (uint64_t)(iVar1 - 0xe);
  do {
    if ((uint)uVar7 < 9) {
// WARNING: Could not recover jumptable at 0x0001802a1c43. Too many branches
// WARNING: Treating indirect jump as call
      uVar2 = (*(code *)((uint64_t)*(uint *)(&processed_var_956_ptr + uVar7 * 4) + 0x180000000))
                        ((code *)((uint64_t)*(uint *)(&processed_var_956_ptr + uVar7 * 4) + 0x180000000));
      return (bool)uVar2;
    }
    iVar3 = SystemFunction_0001802a0ec0(iVar1);
    uVar6 = (uint)param_4 >> 1;
    unaff_RDI = unaff_RDI + (uint64_t)(iVar3 * param_3 + 7 >> 3) * (param_4 & 0xffffffff);
    uVar5 = 1;
    if (1 < uVar6) {
      uVar5 = uVar6;
    }
    param_4 = (uint64_t)uVar5;
    uVar5 = param_3 >> 1;
    param_3 = 1;
    if (1 < uVar5) {
      param_3 = uVar5;
    }
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
  lVar4 = (uint64_t)*(ushort *)((int64_t)unaff_RBX + 0x62) * unaff_RDI;
  unaff_RBX[1] = lVar4;
  if ((char)unaff_RBX[2] == '\0') {
    if (*unaff_RBX != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *unaff_RBX = 0;
  }
  lVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,lVar4,0x10,*(int8_t *)((int64_t)unaff_RBX + 0x12));
  *unaff_RBX = lVar4;
  *(int8_t *)(unaff_RBX + 2) = 0;
  return lVar4 != 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool function_2a1cea(void)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  lVar1 = (uint64_t)*(ushort *)((int64_t)unaff_RBX + 0x62) * unaff_RDI;
  unaff_RBX[1] = lVar1;
  if ((char)unaff_RBX[2] == '\0') {
    if (*unaff_RBX != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *unaff_RBX = 0;
  }
  lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,lVar1,0x10,*(int8_t *)((int64_t)unaff_RBX + 0x12));
  *unaff_RBX = lVar1;
  *(int8_t *)(unaff_RBX + 2) = 0;
  return lVar1 != 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool function_2a1d01(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  if (*unaff_RBX != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RBX = 0;
  lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,param_2,0x10,*(int8_t *)((int64_t)unaff_RBX + 0x12));
  *unaff_RBX = lVar1;
  *(int8_t *)(unaff_RBX + 2) = 0;
  return lVar1 != 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a1dd0(int64_t param_1,int32_t *param_2)
void function_2a1dd0(int64_t param_1,int32_t *param_2)
{
  char cVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void *puVar5;
  int64_t lVar6;
  int8_t stack_array_d8 [32];
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int32_t local_var_ac;
  uint64_t local_var_a8;
  int64_t lStack_a0;
  uint64_t local_var_90;
  void *aplocal_var_88 [12];
  uint64_t local_var_28;
  local_var_90 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  cVar1 = RenderingSystem_RenderQueue();
  if ((cVar1 != '\0') && (uVar3 = function_62d9a0(param_1), 3 < uVar3)) {
    local_var_a8 = 0;
    lStack_a0 = 0;
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar5 = *(void **)(param_1 + 8);
    }
    SystemCore_Validator(&local_var_a8,puVar5,&processed_var_4880_ptr);
    lVar6 = lStack_a0;
    if (lStack_a0 != 0) {
      fread(&iStack_b8,4,1,lStack_a0);
      if (((iStack_b8 == 0x30484354) && (fread(&iStack_b4,4,1,lVar6), iStack_b4 == 3)) &&
         (fread(&iStack_b0,4,1,lVar6), iStack_b0 == 0x58)) {
        fread(&local_var_ac,4,1,lVar6);
        fread(param_2 + 7,0x58,1,lVar6);
        uVar4 = function_049eb0(aplocal_var_88,param_2 + 7);
        uVar2 = function_225200(uVar4);
        param_2[0x17] = uVar2;
        aplocal_var_88[0] = &system_state_ptr;
        function_2a1bc0(param_2 + 2);
        *param_2 = local_var_ac;
        fread(*(uint64_t *)(param_2 + 2),*(uint64_t *)(param_2 + 4),1,lVar6);
        fclose(lVar6);
        lStack_a0 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
        lVar6 = 0;
      }
      if (lVar6 != 0) {
        fclose(lVar6);
        lStack_a0 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2a1fb0(uint64_t param_1,float *param_2,int64_t *param_3,float *param_4,int param_5)
void function_2a1fb0(uint64_t param_1,float *param_2,int64_t *param_3,float *param_4,int param_5)
{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int64_t lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int8_t stack_array_a8 [32];
  int8_t stack_array_88 [8];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint64_t local_var_50;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  if (param_5 == 0) {
    iVar3 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    iVar6 = *(ushort *)((int64_t)param_3 + 0x5c) - 1;
    if ((int)((float)iVar6 * *param_4) <= iVar6) {
      iVar6 = (int)((float)iVar6 * *param_4);
    }
    if ((int)((float)iVar3 * param_4[1]) <= iVar3) {
      iVar3 = (int)((float)iVar3 * param_4[1]);
    }
    iVar2 = 0;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    iVar3 = 0;
    if (-1 < iVar6) {
      iVar3 = iVar6;
    }
    lVar1 = (int64_t)(int)(iVar3 + iVar2 * (uint)*(ushort *)((int64_t)param_3 + 0x5c));
    lVar5 = *param_3;
    *(uint64_t *)param_2 = *(uint64_t *)(lVar5 + lVar1 * 0xc);
    param_2[2] = *(float *)(lVar5 + 8 + lVar1 * 0xc);
  }
  else if (param_5 == 1) {
    pfVar4 = &fStack_80;
    lVar5 = 4;
    do {
      SystemFunction_000180074f10(pfVar4);
      pfVar4 = pfVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    function_2a4d00(param_3,param_4);
    fVar7 = (float)modff((float)(int)(*(ushort *)((int64_t)param_3 + 0x5e) - 1) * param_4[1],
                         stack_array_88);
    fVar8 = (float)modff();
    fStack_80 = (fStack_74 - fStack_80) * fVar8 + fStack_80;
    fStack_7c = (fStack_70 - fStack_7c) * fVar8 + fStack_7c;
    fStack_78 = (fStack_6c - fStack_78) * fVar8 + fStack_78;
    *param_2 = (((fStack_5c - fStack_68) * fVar8 + fStack_68) - fStack_80) * fVar7 + fStack_80;
    param_2[1] = (((fStack_58 - fStack_64) * fVar8 + fStack_64) - fStack_7c) * fVar7 + fStack_7c;
    param_2[2] = (((fStack_54 - fStack_60) * fVar8 + fStack_60) - fStack_78) * fVar7 + fStack_78;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_a8);
}
// 函数: void function_2a1fee(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
void function_2a1fee(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11)
{
  ushort uVar1;
  uint64_t unaff_RBX;
  int64_t lVar2;
  float *unaff_RBP;
  float *unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar3;
  int64_t in_R11;
  int64_t unaff_R14;
  float fVar4;
  float fVar5;
  int8_t astack_special_x_20 [8];
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBX;
  lVar2 = in_R11 + -0x80;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  uVar3 = (uint64_t)(param_2 + 3);
  do {
    SystemFunction_000180074f10(lVar2);
    lVar2 = lVar2 + 0xc;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  function_2a4d00();
  uVar1 = *(ushort *)(unaff_R14 + 0x5c);
  fVar5 = *unaff_RBP;
  fVar4 = (float)modff((float)(int)(*(ushort *)(unaff_R14 + 0x5e) - 1) * unaff_RBP[1],astack_special_x_20);
  fVar5 = (float)modff((float)(int)(uVar1 - 1) * fVar5,astack_special_x_20);
  param_5._0_4_ = (param_6._4_4_ - (float)param_5) * fVar5 + (float)param_5;
  param_5._4_4_ = ((float)param_7 - param_5._4_4_) * fVar5 + param_5._4_4_;
  param_6._0_4_ = (param_7._4_4_ - (float)param_6) * fVar5 + (float)param_6;
  *unaff_RSI = (((param_9._4_4_ - (float)param_8) * fVar5 + (float)param_8) - (float)param_5) *
               fVar4 + (float)param_5;
  unaff_RSI[1] = ((((float)param_10 - param_8._4_4_) * fVar5 + param_8._4_4_) - param_5._4_4_) *
                 fVar4 + param_5._4_4_;
  unaff_RSI[2] = (((param_10._4_4_ - (float)param_9) * fVar5 + (float)param_9) - (float)param_6) *
                 fVar4 + (float)param_6;
// WARNING: Subroutine does not return
  SystemSecurityChecker(param_11 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_2a213d(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_2a213d(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  float *unaff_RBP;
  uint64_t *unaff_RSI;
  int iVar5;
  int64_t *unaff_R14;
  uint64_t local_buffer_58;
  iVar4 = *(ushort *)((int64_t)unaff_R14 + 0x5e) - 1;
  iVar5 = *(ushort *)(param_3 + 0x5c) - 1;
  if ((int)((float)iVar5 * *unaff_RBP) <= iVar5) {
    iVar5 = (int)((float)iVar5 * *unaff_RBP);
  }
  if ((int)((float)iVar4 * unaff_RBP[1]) <= iVar4) {
    iVar4 = (int)((float)iVar4 * unaff_RBP[1]);
  }
  iVar3 = 0;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = 0;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  lVar2 = (int64_t)(int)(iVar4 + iVar3 * (uint)*(ushort *)(param_3 + 0x5c));
  lVar1 = *unaff_R14;
  *unaff_RSI = *(uint64_t *)(lVar1 + lVar2 * 0xc);
  *(int32_t *)(unaff_RSI + 1) = *(int32_t *)(lVar1 + 8 + lVar2 * 0xc);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_58 ^ (uint64_t)&local_buffer_00000000);
}
uint function_2a21d0(uint64_t param_1,int64_t *param_2,float *param_3,int param_4)
{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int8_t astack_special_x_20 [8];
  if (param_4 == 0) {
    iVar12 = *(ushort *)((int64_t)param_2 + 0x5e) - 1;
    iVar7 = *(ushort *)((int64_t)param_2 + 0x5c) - 1;
    if ((int)((float)iVar7 * *param_3) <= iVar7) {
      iVar7 = (int)((float)iVar7 * *param_3);
    }
    if ((int)((float)iVar12 * param_3[1]) <= iVar12) {
      iVar12 = (int)((float)iVar12 * param_3[1]);
    }
    iVar14 = 0;
    if (-1 < iVar12) {
      iVar14 = iVar12;
    }
    iVar12 = 0;
    if (-1 < iVar7) {
      iVar12 = iVar7;
    }
    return (uint)*(ushort *)
                  (*param_2 +
                  (int64_t)(int)(iVar14 * (uint)*(ushort *)((int64_t)param_2 + 0x5c) + iVar12) * 2
                  );
  }
  if (param_4 == 1) {
    iVar7 = *(ushort *)((int64_t)param_2 + 0x5e) - 1;
    fVar16 = (float)iVar7 * param_3[1];
    if (fVar16 <= 0.0) {
      fVar16 = fVar16 - 0.9999999;
    }
    uVar1 = *(ushort *)((int64_t)param_2 + 0x5c);
    iVar14 = (int)fVar16;
    iVar12 = uVar1 - 1;
    fVar16 = (float)iVar12 * *param_3;
    if (fVar16 <= 0.0) {
      fVar16 = fVar16 - 0.9999999;
    }
    iVar13 = (int)fVar16;
    iVar10 = iVar13 + 1;
    if ((iVar13 < 0) || (iVar12 <= iVar13)) {
      iVar6 = iVar12;
      if (iVar13 <= iVar12) {
        iVar6 = iVar13;
      }
      iVar13 = 0;
      if (-1 < iVar6) {
        iVar13 = iVar6;
      }
      if (iVar10 <= iVar12) {
        iVar12 = iVar10;
      }
      iVar10 = 0;
      if (-1 < iVar12) {
        iVar10 = iVar12;
      }
    }
    if ((iVar14 < 0) || (iVar12 = iVar14, iVar6 = iVar14 + 1, iVar9 = iVar14 + 1, iVar7 <= iVar14))
    {
      iVar6 = iVar7;
      if (iVar14 <= iVar7) {
        iVar6 = iVar14;
      }
      iVar12 = 0;
      if (-1 < iVar6) {
        iVar12 = iVar6;
      }
      if (iVar14 <= iVar7) {
        iVar7 = iVar14;
      }
      iVar14 = 0;
      iVar6 = iVar12;
      iVar9 = 0;
      if (-1 < iVar7) {
        iVar14 = iVar7;
        iVar9 = iVar7;
      }
    }
    lVar5 = *param_2;
    uVar2 = *(ushort *)(lVar5 + (uint64_t)(iVar12 * (uint)uVar1 + iVar13) * 2);
    uVar3 = *(ushort *)(lVar5 + (uint64_t)(iVar14 * (uint)uVar1 + iVar10) * 2);
    uVar4 = *(ushort *)(lVar5 + (uint64_t)(iVar6 * (uint)uVar1 + iVar13) * 2);
    uVar1 = *(ushort *)(lVar5 + (uint64_t)(iVar9 * (uint)uVar1 + iVar10) * 2);
    fVar16 = (float)modff(lVar5,astack_special_x_20);
    fVar15 = (float)modff();
    uVar11 = (uint)uVar2;
    uVar8 = (uint)uVar4;
    iVar7 = (int)((float)(int)(uVar3 - uVar11) * fVar15 + (float)uVar11);
    return (int)((float)((int)((float)(int)(uVar1 - uVar8) * fVar15 + (float)uVar8) - iVar7) *
                 fVar16 + (float)iVar7);
  }
  return 0;
}
int function_2a2207(uint64_t param_1,int param_2,float param_3,float param_4)
{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int64_t lVar5;
  int iVar6;
  uint uVar7;
  int64_t *unaff_RBX;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int64_t in_R8;
  int iVar12;
  float *in_R10;
  int iVar13;
  float fVar14;
  float fVar15;
  fVar15 = (float)param_2 * *(float *)(in_R8 + 4);
  if (fVar15 <= param_4) {
    fVar15 = fVar15 - param_3;
  }
  uVar1 = *(ushort *)((int64_t)unaff_RBX + 0x5c);
  iVar13 = (int)fVar15;
  iVar11 = uVar1 - 1;
  fVar15 = (float)iVar11 * *in_R10;
  if (fVar15 <= param_4) {
    fVar15 = fVar15 - param_3;
  }
  iVar12 = (int)fVar15;
  iVar9 = iVar12 + 1;
  if ((iVar12 < 0) || (iVar11 <= iVar12)) {
    iVar6 = iVar11;
    if (iVar12 <= iVar11) {
      iVar6 = iVar12;
    }
    iVar12 = 0;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar9 <= iVar11) {
      iVar11 = iVar9;
    }
    iVar9 = 0;
    if (-1 < iVar11) {
      iVar9 = iVar11;
    }
  }
  if ((iVar13 < 0) || (iVar11 = iVar13, iVar6 = iVar13 + 1, iVar8 = iVar13 + 1, param_2 <= iVar13))
  {
    iVar6 = param_2;
    if (iVar13 <= param_2) {
      iVar6 = iVar13;
    }
    iVar11 = 0;
    if (-1 < iVar6) {
      iVar11 = iVar6;
    }
    if (iVar13 <= param_2) {
      param_2 = iVar13;
    }
    iVar13 = 0;
    iVar6 = iVar11;
    iVar8 = 0;
    if (-1 < param_2) {
      iVar13 = param_2;
      iVar8 = param_2;
    }
  }
  lVar5 = *unaff_RBX;
  uVar2 = *(ushort *)(lVar5 + (uint64_t)(iVar11 * (uint)uVar1 + iVar12) * 2);
  uVar3 = *(ushort *)(lVar5 + (uint64_t)(iVar13 * (uint)uVar1 + iVar9) * 2);
  uVar4 = *(ushort *)(lVar5 + (uint64_t)(iVar6 * (uint)uVar1 + iVar12) * 2);
  uVar1 = *(ushort *)(lVar5 + (uint64_t)(iVar8 * (uint)uVar1 + iVar9) * 2);
  fVar15 = (float)modff(lVar5,&local_buffer_00000078);
  fVar14 = (float)modff();
  uVar10 = (uint)uVar2;
  uVar7 = (uint)uVar4;
  iVar11 = (int)((float)(int)(uVar3 - uVar10) * fVar14 + (float)uVar10);
  return (int)((float)((int)((float)(int)(uVar1 - uVar7) * fVar14 + (float)uVar7) - iVar11) * fVar15
              + (float)iVar11);
}
int16_t function_2a23b0(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int iVar2;
  int64_t *unaff_RBX;
  int iVar3;
  float *in_R10;
  iVar2 = *(ushort *)(param_2 + 0x5e) - 1;
  iVar3 = *(ushort *)(param_2 + 0x5c) - 1;
  if ((int)((float)iVar3 * *in_R10) <= iVar3) {
    iVar3 = (int)((float)iVar3 * *in_R10);
  }
  if ((int)((float)iVar2 * in_R10[1]) <= iVar2) {
    iVar2 = (int)((float)iVar2 * in_R10[1]);
  }
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  return *(int16_t *)
          (*unaff_RBX + (int64_t)(int)(iVar1 * (uint)*(ushort *)(param_2 + 0x5c) + iVar2) * 2);
}
char * function_2a2420(uint64_t param_1,char *param_2,int64_t *param_3,float *param_4,uint param_5)
{
  int8_t uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int32_t *puVar8;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  if (param_5 == 0) {
    iVar4 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    iVar6 = *(ushort *)((int64_t)param_3 + 0x5c) - 1;
    if ((int)((float)iVar6 * *param_4) <= iVar6) {
      iVar6 = (int)((float)iVar6 * *param_4);
    }
    if ((int)((float)iVar4 * param_4[1]) <= iVar4) {
      iVar4 = (int)((float)iVar4 * param_4[1]);
    }
    iVar7 = 0;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    iVar4 = 0;
    if (-1 < iVar6) {
      iVar4 = iVar6;
    }
    *param_2 = *(char *)((int64_t)
                         (int)(iVar7 * (uint)*(ushort *)((int64_t)param_3 + 0x5c) + iVar4) +
                        *param_3);
  }
  else if (param_5 == 1) {
    puVar8 = &param_5;
    lVar11 = 4;
    do {
      SystemFunction_000180074f10(puVar8);
      puVar8 = (int32_t *)((int64_t)puVar8 + 1);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar6 = *(ushort *)((int64_t)param_3 + 0x5e) - 1;
    fVar14 = (float)iVar6 * param_4[1];
    if (fVar14 <= 0.0) {
      fVar14 = fVar14 - 0.9999999;
    }
    uVar2 = *(ushort *)((int64_t)param_3 + 0x5c);
    iVar7 = (int)fVar14;
    iVar4 = uVar2 - 1;
    fVar14 = (float)iVar4 * *param_4;
    if (fVar14 <= 0.0) {
      fVar14 = fVar14 - 0.9999999;
    }
    iVar12 = (int)fVar14;
    iVar10 = iVar12 + 1;
    if ((iVar12 < 0) || (iVar4 <= iVar12)) {
      iVar3 = iVar4;
      if (iVar12 <= iVar4) {
        iVar3 = iVar12;
      }
      iVar12 = 0;
      if (-1 < iVar3) {
        iVar12 = iVar3;
      }
      if (iVar10 <= iVar4) {
        iVar4 = iVar10;
      }
      iVar10 = 0;
      if (-1 < iVar4) {
        iVar10 = iVar4;
      }
    }
    if ((iVar7 < 0) || (iVar4 = iVar7, iVar3 = iVar7 + 1, iVar9 = iVar7 + 1, iVar6 <= iVar7)) {
      iVar3 = iVar6;
      if (iVar7 <= iVar6) {
        iVar3 = iVar7;
      }
      iVar4 = 0;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar7 <= iVar6) {
        iVar6 = iVar7;
      }
      iVar7 = 0;
      iVar3 = iVar4;
      iVar9 = 0;
      if (-1 < iVar6) {
        iVar7 = iVar6;
        iVar9 = iVar6;
      }
    }
    lVar11 = *param_3;
    uVar1 = *(int8_t *)((uint64_t)(iVar9 * (uint)uVar2 + iVar10) + lVar11);
    param_5 = CONCAT13(uVar1,CONCAT12(*(int8_t *)
                                       ((uint64_t)(iVar3 * (uint)uVar2 + iVar12) + lVar11),
                                      CONCAT11(*(int8_t *)
                                                ((uint64_t)(iVar7 * (uint)uVar2 + iVar10) + lVar11)
                                               ,*(int8_t *)
                                                 ((uint64_t)(iVar4 * (uint)uVar2 + iVar12) + lVar11
                                                 ))));
    fVar14 = (float)modff(uVar1,&local_buffer_00000030);
    fVar13 = (float)modff();
    iVar6 = (int)((float)(int)((param_5 >> 8 & 0xff) - (param_5 & 0xff)) * fVar13) +
            (param_5 & 0xff);
    uVar5 = param_5 >> 0x10 & 0xff;
    *param_2 = (char)(int)((float)(int)(((int)((float)(int)((param_5 >> 0x18) - uVar5) * fVar13) -
                                        iVar6) + uVar5) * fVar14) + (char)iVar6;
    return param_2;
  }
  return param_2;
}
// 函数: void function_2a244c(int param_1)
void function_2a244c(int param_1)
{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int64_t in_RAX;
  int iVar5;
  int iVar6;
  int iVar7;
  uint64_t unaff_RBX;
  int64_t lVar8;
  int iVar9;
  float *unaff_RBP;
  int64_t *unaff_RSI;
  int iVar10;
  uint64_t unaff_RDI;
  uint64_t uVar11;
  int iVar12;
  char *unaff_R14;
  uint64_t unaff_R15;
  float fVar13;
  float fVar14;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  byte bStack0000000000000081;
  byte bStack0000000000000082;
  byte bStack0000000000000083;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  lVar8 = in_RAX + 0x28;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  uVar11 = (uint64_t)(param_1 + 3);
  *(uint64_t *)(in_RAX + 0x18) = unaff_R15;
  *(uint64_t *)(in_RAX + -0x28) = unaff_XMM6_Qa;
  *(uint64_t *)(in_RAX + -0x20) = unaff_XMM6_Qb;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  do {
    SystemFunction_000180074f10(lVar8);
    lVar8 = lVar8 + 1;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  iVar6 = *(ushort *)((int64_t)unaff_RSI + 0x5e) - 1;
  fVar14 = (float)iVar6 * unaff_RBP[1];
  if (fVar14 <= 0.0) {
    fVar14 = fVar14 - 0.9999999;
  }
  uVar2 = *(ushort *)((int64_t)unaff_RSI + 0x5c);
  iVar7 = (int)fVar14;
  iVar5 = uVar2 - 1;
  fVar14 = (float)iVar5 * *unaff_RBP;
  if (fVar14 <= 0.0) {
    fVar14 = fVar14 - 0.9999999;
  }
  iVar12 = (int)fVar14;
  iVar10 = iVar12 + 1;
  if ((iVar12 < 0) || (iVar5 <= iVar12)) {
    iVar3 = iVar5;
    if (iVar12 <= iVar5) {
      iVar3 = iVar12;
    }
    iVar12 = 0;
    if (-1 < iVar3) {
      iVar12 = iVar3;
    }
    if (iVar10 <= iVar5) {
      iVar5 = iVar10;
    }
    iVar10 = 0;
    if (-1 < iVar5) {
      iVar10 = iVar5;
    }
  }
  if ((iVar7 < 0) || (iVar5 = iVar7, iVar3 = iVar7 + 1, iVar9 = iVar7 + 1, iVar6 <= iVar7)) {
    iVar3 = iVar6;
    if (iVar7 <= iVar6) {
      iVar3 = iVar7;
    }
    iVar5 = 0;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    if (iVar7 <= iVar6) {
      iVar6 = iVar7;
    }
    iVar7 = 0;
    iVar3 = iVar5;
    iVar9 = 0;
    if (-1 < iVar6) {
      iVar7 = iVar6;
      iVar9 = iVar6;
    }
  }
  lVar8 = *unaff_RSI;
  bVar1 = *(byte *)((uint64_t)(iVar5 * (uint)uVar2 + iVar12) + lVar8);
  bStack0000000000000081 = *(byte *)((uint64_t)(iVar7 * (uint)uVar2 + iVar10) + lVar8);
  bStack0000000000000082 = *(byte *)((uint64_t)(iVar3 * (uint)uVar2 + iVar12) + lVar8);
  bStack0000000000000083 = *(byte *)((uint64_t)(iVar9 * (uint)uVar2 + iVar10) + lVar8);
  fVar14 = (float)modff(bStack0000000000000083,&local_buffer_00000088);
  fVar13 = (float)modff();
  uVar4 = (uint)bVar1;
  iVar6 = (int)((float)(int)(bStack0000000000000081 - uVar4) * fVar13) + uVar4;
  *unaff_R14 = (char)(int)((float)(int)(((int)((float)(int)((uint)bStack0000000000000083 -
                                                           (uint)bStack0000000000000082) * fVar13) -
                                        iVar6) + (uint)bStack0000000000000082) * fVar14) +
               (char)iVar6;
  return;
}
// 函数: void function_2a2635(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_2a2635(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  int iVar2;
  float *unaff_RBP;
  int64_t *unaff_RSI;
  int iVar3;
  int8_t *unaff_R14;
  iVar2 = *(ushort *)((int64_t)unaff_RSI + 0x5e) - 1;
  iVar3 = *(ushort *)(param_3 + 0x5c) - 1;
  if ((int)((float)iVar3 * *unaff_RBP) <= iVar3) {
    iVar3 = (int)((float)iVar3 * *unaff_RBP);
  }
  if ((int)((float)iVar2 * unaff_RBP[1]) <= iVar2) {
    iVar2 = (int)((float)iVar2 * unaff_RBP[1]);
  }
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  *unaff_R14 = *(int8_t *)
                ((int64_t)(int)(iVar1 * (uint)*(ushort *)(param_3 + 0x5c) + iVar2) + *unaff_RSI);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address