#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part604.c - 6 个函数
// 函数: void NetworkSystem_9a7f0(int64_t param_1,int64_t param_2,int16_t param_3,int16_t param_4)
void NetworkSystem_9a7f0(int64_t param_1,int64_t param_2,int16_t param_3,int16_t param_4)
{
  uint *puVar1;
  int64_t *plVar2;
  void *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  int32_t uVar9;
  uint uVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int32_t *puVar14;
  int iVar15;
  void *puVar16;
  bool bVar17;
  uint64_t uVar18;
  uint64_t local_var_48;
  void *plocal_var_40;
  int32_t *plocal_var_38;
  uint local_var_30;
  int32_t local_var_2c;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_fe8;
  if (*(int *)(param_1 + 0xb88) < 0x3f80) {
    uVar4 = *(uint64_t *)(param_2 + 0x1c);
    uVar5 = *(uint64_t *)(param_2 + 0x24);
    uVar6 = *(uint64_t *)(param_2 + 0x2c);
    uVar7 = *(uint64_t *)(param_2 + 0x34);
    local_var_48 = CONCAT26(param_4,CONCAT24(param_3,*(int32_t *)(param_2 + 0x10)));
    LOCK();
    puVar1 = (uint *)(param_1 + 0xb88);
    uVar10 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    uVar8 = uVar10 >> 6;
    uVar18 = uVar6;
    if (*(int64_t *)(param_1 + 0xb90 + (uint64_t)uVar8 * 8) == 0) {
      lVar11 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1900,8);
      plVar2 = (int64_t *)(param_1 + 0xb90 + (uint64_t)uVar8 * 8);
      LOCK();
      bVar17 = *plVar2 == 0;
      if (bVar17) {
        *plVar2 = lVar11;
      }
      UNLOCK();
      if ((!bVar17) && (lVar11 != 0)) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    lVar11 = *(int64_t *)(param_1 + 0xb90 + (uint64_t)uVar8 * 8);
    lVar12 = (uint64_t)(uVar10 + uVar8 * -0x40) * 100;
    *(uint64_t *)(lVar11 + lVar12) = uVar4;
    ((uint64_t *)(lVar11 + lVar12))[1] = uVar5;
    puVar13 = (uint64_t *)(lVar11 + 0x10 + lVar12);
    *puVar13 = uVar6;
    puVar13[1] = uVar7;
    puVar13 = (uint64_t *)(lVar11 + 0x20 + lVar12);
    *puVar13 = uVar18;
    puVar13[1] = uVar7;
    puVar13 = (uint64_t *)(lVar11 + 0x30 + lVar12);
    *puVar13 = local_var_48;
    puVar13[1] = plocal_var_40;
    puVar13 = (uint64_t *)(lVar11 + 0x40 + lVar12);
    *puVar13 = plocal_var_38;
    puVar13[1] = CONCAT44(local_var_2c,local_var_30);
    puVar13 = (uint64_t *)(lVar11 + 0x50 + lVar12);
    *puVar13 = local_var_28;
    puVar13[1] = local_var_20;
    *(int32_t *)(lVar11 + 0x60 + lVar12) = local_var_fe8;
    return;
  }
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (int32_t *)0x0;
  local_var_30 = 0;
  plocal_var_38 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x23,0x13);
  *(int8_t *)plocal_var_38 = 0;
  uVar9 = CoreEngineSystemCleanup(plocal_var_38);
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar9);
  *plocal_var_38 = 0x73736f50;
  plocal_var_38[1] = 0x656c6269;
  plocal_var_38[2] = 0x61707320;
  plocal_var_38[3] = 0x6f206e77;
  plocal_var_38[4] = 0x65742072;
  plocal_var_38[5] = 0x6f70656c;
  plocal_var_38[6] = 0x70207472;
  plocal_var_38[7] = 0x6c626f72;
  *(int16_t *)(plocal_var_38 + 8) = 0x6d65;
  *(int8_t *)((int64_t)plocal_var_38 + 0x22) = 0;
  local_var_30 = 0x22;
  puVar3 = *(void **)(*(int64_t *)(render_system_memory + 0x18) + 0x4e0);
  puVar16 = &system_buffer_ptr;
  if (puVar3 != (void *)0x0) {
    puVar16 = puVar3;
  }
  System_DataHandler(&plocal_var_40,&rendering_buffer_2736_ptr,puVar16);
  iVar15 = local_var_30 + 0x2a;
  if (iVar15 != 0) {
    uVar10 = local_var_30 + 0x2b;
    if (plocal_var_38 == (int32_t *)0x0) {
      if ((int)uVar10 < 0x10) {
        uVar10 = 0x10;
      }
      plocal_var_38 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar10,0x13);
      *(int8_t *)plocal_var_38 = 0;
    }
    else {
      if (uVar10 <= (uint)local_var_28) goto LAB_1805aa1de;
      plocal_var_38 = (int32_t *)DataValidator(system_memory_pool_ptr,plocal_var_38,uVar10,0x10,0x13);
    }
    uVar9 = CoreEngineSystemCleanup(plocal_var_38);
    local_var_28 = CONCAT44(local_var_28._4_4_,uVar9);
  }
LAB_1805aa1de:
  puVar13 = (uint64_t *)((uint64_t)local_var_30 + (int64_t)plocal_var_38);
  *puVar13 = 0x6e616d206f6f5420;
  puVar13[1] = 0x6369737968702079;
  *(int32_t *)(puVar13 + 2) = 0x6f632073;
  *(int32_t *)((int64_t)puVar13 + 0x14) = 0x6361746e;
  *(int32_t *)(puVar13 + 3) = 0x62207374;
  *(int32_t *)((int64_t)puVar13 + 0x1c) = 0x65777465;
  puVar13[4] = 0x746e656761206e65;
  *(int16_t *)(puVar13 + 5) = 0x2e73;
  *(int8_t *)((int64_t)puVar13 + 0x2a) = 0;
  puVar14 = (int32_t *)&system_buffer_ptr;
  if (plocal_var_38 != (int32_t *)0x0) {
    puVar14 = plocal_var_38;
  }
  local_var_30 = iVar15;
  UtilitiesSystem_27340(&rendering_buffer_2792_ptr,puVar14,(double)*(float *)(param_2 + 0x1c),
                (double)*(float *)(param_2 + 0x20),(double)*(float *)(param_2 + 0x24));
  puVar14 = (int32_t *)&system_buffer_ptr;
  if (plocal_var_38 != (int32_t *)0x0) {
    puVar14 = plocal_var_38;
  }
  SystemDataInitializer(&rendering_buffer_2704_ptr,puVar14);
  plocal_var_40 = &system_data_buffer_ptr;
  if (plocal_var_38 == (int32_t *)0x0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_9a813(uint64_t param_1,int64_t param_2,int16_t param_3,int16_t param_4)
void NetworkSystem_9a813(uint64_t param_1,int64_t param_2,int16_t param_3,int16_t param_4)
{
  uint *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int32_t uVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t in_RCX;
  int64_t lVar8;
  int64_t unaff_RBX;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  bool bVar9;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  int32_t local_buffer_28;
  int32_t local_buffer_2c;
  uint64_t local_buffer_30;
  uint64_t local_buffer_38;
  uint64_t local_buffer_40;
  uint64_t local_buffer_48;
  uint64_t local_buffer_50;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  int32_t local_buffer_80;
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  local_buffer_30 = *(uint64_t *)(param_2 + 0x2c);
  local_buffer_38 = *(uint64_t *)(param_2 + 0x34);
  uVar4 = *(int32_t *)(param_2 + 0x10);
  *(int16_t *)(in_R11 + -0x44) = param_3;
  *(int16_t *)(in_R11 + -0x42) = param_4;
  LOCK();
  puVar1 = (uint *)(in_RCX + 0xb88);
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar6 = uVar5 >> 6;
  local_buffer_28 = in_XMM0_Dc;
  local_buffer_2c = in_XMM0_Dd;
  local_buffer_40 = local_buffer_30;
  local_buffer_48 = local_buffer_38;
  if (*(int64_t *)(in_RCX + 0xb90 + (uint64_t)uVar6 * 8) == 0) {
    lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1900,8);
    plVar3 = (int64_t *)(unaff_RBX + 0xb90 + (uint64_t)uVar6 * 8);
    LOCK();
    bVar9 = *plVar3 == 0;
    if (bVar9) {
      *plVar3 = lVar7;
    }
    UNLOCK();
    if ((!bVar9) && (lVar7 != 0)) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  lVar7 = *(int64_t *)(unaff_RBX + 0xb90 + (uint64_t)uVar6 * 8);
  lVar8 = (uint64_t)(uVar5 + uVar6 * -0x40) * 100;
  *(uint64_t *)(lVar7 + lVar8) = param_1;
  ((uint64_t *)(lVar7 + lVar8))[1] = CONCAT44(local_buffer_2c,local_buffer_28);
  puVar2 = (uint64_t *)(lVar7 + 0x10 + lVar8);
  *puVar2 = local_buffer_30;
  puVar2[1] = local_buffer_38;
  puVar2 = (uint64_t *)(lVar7 + 0x20 + lVar8);
  *puVar2 = local_buffer_40;
  puVar2[1] = local_buffer_48;
  puVar2 = (uint64_t *)(lVar7 + 0x30 + lVar8);
  *puVar2 = CONCAT44(local_buffer_50._4_4_,uVar4);
  puVar2[1] = local_buffer_58;
  puVar2 = (uint64_t *)(lVar7 + 0x40 + lVar8);
  *puVar2 = local_buffer_60;
  puVar2[1] = local_buffer_68;
  puVar2 = (uint64_t *)(lVar7 + 0x50 + lVar8);
  *puVar2 = local_buffer_70;
  puVar2[1] = local_buffer_78;
  *(int32_t *)(lVar7 + 0x60 + lVar8) = local_buffer_80;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_9a907(uint64_t param_1,int64_t param_2)
void NetworkSystem_9a907(uint64_t param_1,int64_t param_2)
{
  void *puVar1;
  int32_t uVar2;
  uint uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  int iVar6;
  void *puVar7;
  uint64_t local_buffer_50;
  void *plocal_buffer_58;
  int32_t *plocal_buffer_60;
  uint local_buffer_68;
  uint local_buffer_70;
  int32_t local_buffer_74;
  uint64_t local_buffer_90;
  uint64_t local_buffer_a0;
  local_buffer_50 = 0xfffffffffffffffe;
  local_buffer_a0 = local_buffer_90;
  plocal_buffer_58 = &system_data_buffer_ptr;
  _local_buffer_70 = 0;
  plocal_buffer_60 = (int32_t *)0x0;
  local_buffer_68 = 0;
  plocal_buffer_60 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x23,0x13);
  *(int8_t *)plocal_buffer_60 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_buffer_60);
  _local_buffer_70 = CONCAT44(local_buffer_74,uVar2);
  *plocal_buffer_60 = 0x73736f50;
  plocal_buffer_60[1] = 0x656c6269;
  plocal_buffer_60[2] = 0x61707320;
  plocal_buffer_60[3] = 0x6f206e77;
  plocal_buffer_60[4] = 0x65742072;
  plocal_buffer_60[5] = 0x6f70656c;
  plocal_buffer_60[6] = 0x70207472;
  plocal_buffer_60[7] = 0x6c626f72;
  *(int16_t *)(plocal_buffer_60 + 8) = 0x6d65;
  *(int8_t *)((int64_t)plocal_buffer_60 + 0x22) = 0;
  local_buffer_68 = 0x22;
  puVar1 = *(void **)(*(int64_t *)(render_system_memory + 0x18) + 0x4e0);
  puVar7 = &system_buffer_ptr;
  if (puVar1 != (void *)0x0) {
    puVar7 = puVar1;
  }
  System_DataHandler(&local_buffer_00000058,&rendering_buffer_2736_ptr,puVar7);
  iVar6 = local_buffer_68 + 0x2a;
  if (iVar6 != 0) {
    uVar3 = local_buffer_68 + 0x2b;
    if (plocal_buffer_60 == (int32_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      plocal_buffer_60 =
           (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar3,0x13);
      *(int8_t *)plocal_buffer_60 = 0;
    }
    else {
      if (uVar3 <= local_buffer_70) goto LAB_1805aa1de;
      plocal_buffer_60 =
           (int32_t *)DataValidator(system_memory_pool_ptr,plocal_buffer_60,uVar3,0x10);
    }
    uVar2 = CoreEngineSystemCleanup(plocal_buffer_60);
    _local_buffer_70 = CONCAT44(local_buffer_74,uVar2);
  }
LAB_1805aa1de:
  puVar4 = (uint64_t *)((uint64_t)local_buffer_68 + (int64_t)plocal_buffer_60);
  *puVar4 = 0x6e616d206f6f5420;
  puVar4[1] = 0x6369737968702079;
  *(int32_t *)(puVar4 + 2) = 0x6f632073;
  *(int32_t *)((int64_t)puVar4 + 0x14) = 0x6361746e;
  *(int32_t *)(puVar4 + 3) = 0x62207374;
  *(int32_t *)((int64_t)puVar4 + 0x1c) = 0x65777465;
  puVar4[4] = 0x746e656761206e65;
  *(int16_t *)(puVar4 + 5) = 0x2e73;
  *(int8_t *)((int64_t)puVar4 + 0x2a) = 0;
  puVar5 = (int32_t *)&system_buffer_ptr;
  if (plocal_buffer_60 != (int32_t *)0x0) {
    puVar5 = plocal_buffer_60;
  }
  local_buffer_68 = iVar6;
  UtilitiesSystem_27340(&rendering_buffer_2792_ptr,puVar5,(double)*(float *)(param_2 + 0x1c),
                (double)*(float *)(param_2 + 0x20));
  puVar5 = (int32_t *)&system_buffer_ptr;
  if (plocal_buffer_60 != (int32_t *)0x0) {
    puVar5 = plocal_buffer_60;
  }
  SystemDataInitializer(&rendering_buffer_2704_ptr,puVar5);
  plocal_buffer_58 = &system_data_buffer_ptr;
  if (plocal_buffer_60 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t NetworkSystem_9a920(int64_t param_1)
{
  uint64_t in_RAX;
  uint64_t uVar1;
  uint uVar2;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  int64_t lVar3;
  lVar5 = *(int64_t *)(param_1 + 0x108);
  if (((((*(uint *)(lVar5 + 0x56c) & 0x80000) != 0) && (*(uint *)(param_1 + 0x28c) < 2)) &&
      (lVar4 = *(int64_t *)(lVar5 + 0x20), (*(byte *)(lVar4 + 0x40) & 1) != 0)) &&
     (*(int *)(lVar5 + 0x564) == -1)) {
    lVar6 = *(int64_t *)(lVar5 + 0x590);
    lVar3 = *(int64_t *)(lVar6 + 0x2460);
    if (lVar3 != 0) {
      lVar3 = *(int64_t *)(lVar3 + 0x1d0);
    }
    uVar2 = (uint)lVar3;
    if ((char)*(uint64_t *)(lVar6 + 0x2470) != '\0') {
      uVar2 = 0;
    }
    in_RAX = 0;
    if ((((uint)*(uint64_t *)(lVar6 + 0x2470) | uVar2) & 0xff) < 0x22) {
      in_RAX = SystemFunction_000180534f70(lVar6,1);
      lVar3 = render_system_memory;
      if ((int)in_RAX < 0x22) {
        uVar1 = (uint64_t)*(int *)(lVar6 + 0x2450);
        in_RAX = uVar1;
        if ((((*(int *)(lVar6 + 0x2450) == -1) ||
             (in_RAX = uVar1 * 0x68, *(int *)(in_RAX + 0x58 + render_system_memory) < 0x1a)) ||
            (in_RAX = uVar1 * 0x68, 0x1b < *(int *)(in_RAX + 0x58 + render_system_memory))) &&
           (fVar7 = 0.0, 0.0 < *(float *)(lVar4 + 0x144))) {
          in_RAX = SystemFunction_000180522f60(lVar5);
          if (((char)in_RAX == '\0') &&
             (in_RAX = *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x200) * 8) -
                       *(int64_t *)(param_1 + 0x1f8), fVar7 <= (float)(int64_t)in_RAX * 1e-05)) {
            if ((*(uint *)(lVar5 + 0x56c) & 0x800) == 0) {
              in_RAX = *(uint64_t *)(lVar6 + 0x2590);
              if ((*(int *)(in_RAX + 0x10) < 3) && (*(int *)(lVar5 + 0x560) < 0))
              goto LAB_18059aaa9;
            }
            else {
              in_RAX = (uint64_t)*(int *)(lVar6 + 0x2498);
              if ((*(int *)(lVar6 + 0x2498) == -1) ||
                 (*(char *)(in_RAX * 0x68 + 0x60 + lVar3) != '\x02')) {
                in_RAX = *(uint64_t *)(lVar5 + 0x8f8);
                lVar5 = *(int64_t *)(in_RAX + 0x9e8);
                if ((lVar5 != 0) &&
                   (in_RAX = *(uint64_t *)(lVar5 + 0xd0),
                   (*(byte *)((int64_t)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 + in_RAX) >> 1 & 1) !=
                   0)) {
                  uVar2 = *(uint *)(param_1 + 0x1d4);
                  in_RAX = (uint64_t)uVar2;
                  if ((uVar2 != 0) && (uVar2 != 7)) goto LAB_18059aac8;
                }
LAB_18059aaa9:
                return CONCAT71((int7)(in_RAX >> 8),1);
              }
            }
          }
        }
      }
    }
  }
LAB_18059aac8:
  return in_RAX & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_9aad0(int64_t param_1,char param_2)
void NetworkSystem_9aad0(int64_t param_1,char param_2)
{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint64_t uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  if (param_2 != '\0') {
    *(uint64_t *)(param_1 + 0x268) = 0;
    *(uint64_t *)(param_1 + 0x270) = 0;
  }
  lVar2 = *(int64_t *)(param_1 + 0x108);
  fVar9 = 0.3;
  fVar10 = 0.1;
  fVar11 = 1e-05;
  if ((*(byte *)(lVar2 + 0x56c) & 0x10) != 0) {
    uVar1 = *(uint *)(lVar2 + 0x4c8);
    uVar5 = uVar1 & 0x3c00;
    if ((uVar5 == 0) ||
       (((*(int64_t *)(param_1 + 0x270) != 0 &&
         (uVar7 = *(uint *)(param_1 + 0x288) & 0x3c00, uVar7 != 0)) &&
        ((*(int *)(lVar2 + 0x570) != 1 || (uVar5 == uVar7)))))) {
      bVar3 = false;
      if ((*(int *)(lVar2 + 0x570) != 1) && (uVar5 != 0)) {
        if ((system_status_flag == 1) || (*(int *)(lVar2 + 0x570) != 0)) {
          fVar8 = 0.1;
        }
        else {
          fVar8 = 0.3;
        }
        if ((float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0xe8) * 8) -
                   *(int64_t *)(param_1 + 0xe0)) * 1e-05 < fVar8) goto LAB_18059abc3;
      }
    }
    else {
      bVar3 = true;
LAB_18059abc3:
      if ((uVar1 >> 0xd & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          uVar5 = (uVar1 & 0x800 | 0x1400) >> 10;
          if ((uVar1 >> 10 & 1) != 0) {
            uVar5 = 6;
          }
        }
        else {
          uVar5 = 4;
        }
      }
      else {
        uVar5 = 5;
      }
      uVar6 = NetworkSystem_a0900(param_1,uVar5);
      *(uint64_t *)(param_1 + 0x270) = uVar6;
      if (bVar3) {
        *(uint64_t *)(param_1 + 0xe0) =
             *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0xe8) * 8);
      }
    }
  }
  uVar1 = *(uint *)(lVar2 + 0x4c8);
  if (((uVar1 & 0x3c00) == 0) && ((*(uint *)(param_1 + 0x288) & 0x3c00) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((*(int *)(param_1 + 0x1d4) == 1) || ((uVar1 & 0x3c0) == 0)) ||
     ((*(int64_t *)(param_1 + 0x268) != 0 &&
      (((*(uint *)(param_1 + 0x288) & 0x3c0) != 0 && (!bVar3)))))) {
    bVar4 = false;
    if (((uVar1 & 0x3c0) == 0) || (!bVar3)) {
      if ((*(int *)(lVar2 + 0x570) == 1) || ((uVar1 & 0x3c0) == 0)) goto LAB_18059ad45;
      if ((system_status_flag == 1) || (*(int *)(lVar2 + 0x570) != 0)) {
        fVar9 = fVar10;
      }
      if (fVar9 <= (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0xf8) * 8) -
                          *(int64_t *)(param_1 + 0xf0)) * fVar11) goto LAB_18059ad45;
    }
  }
  else {
    bVar4 = true;
  }
  uVar5 = *(uint *)(param_1 + 0x27c);
  if (uVar5 == 0xffffffff) {
    if ((uVar1 & 0x3c0) >> 9 == 0) {
      if (((uVar1 & 0x3c0) >> 8 & 1) == 0) {
        if ((uVar1 & 0x40) == 0) {
          uVar5 = (uVar1 & 0xc0 | 0x40) >> 6;
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else if (uVar5 - 4 < 5) {
    uVar5 = uVar5 - 4;
  }
  if (-1 < (int)uVar5) {
    uVar6 = PhysicsSystem_ForceCalculator(param_1);
    *(uint64_t *)(param_1 + 0x268) = uVar6;
    if (bVar4) {
      *(uint64_t *)(param_1 + 0xf0) =
           *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0xf8) * 8);
    }
  }
LAB_18059ad45:
  *(int32_t *)(param_1 + 0x288) = *(int32_t *)(*(int64_t *)(param_1 + 0x108) + 0x4c8);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_9ab3b(float param_1,uint param_2,float param_3,float param_4)
void NetworkSystem_9ab3b(float param_1,uint param_2,float param_3,float param_4)
{
  bool bVar1;
  bool bVar2;
  uint in_EAX;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t in_RCX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t in_R8;
  int64_t unaff_R14;
  float fVar6;
  float in_XMM4_Da;
  uVar3 = in_EAX & 0x3c00;
  if ((uVar3 == 0) ||
     (((*(int64_t *)(in_RCX + 0x270) != 0 &&
       (uVar5 = *(uint *)(in_RCX + 0x288) & 0x3c00, uVar5 != 0)) &&
      ((*(int *)(unaff_RDI + 0x570) != 1 || (uVar3 == uVar5)))))) {
    bVar1 = false;
    if ((*(int *)(unaff_RDI + 0x570) != 1) && (uVar3 != 0)) {
      fVar6 = param_4;
      if ((system_status_flag != 1) && (*(int *)(unaff_RDI + 0x570) == 0)) {
        fVar6 = param_3;
      }
      param_1 = (float)(*(int64_t *)(unaff_R14 + (int64_t)*(int *)(unaff_RBX + 0xe8) * 8) -
                       *(int64_t *)(unaff_RBX + 0xe0)) * in_XMM4_Da;
      if (param_1 < fVar6) goto LAB_18059abc3;
    }
  }
  else {
    bVar1 = true;
LAB_18059abc3:
    if ((param_2 >> 0xd & 1) == 0) {
      if ((param_2 >> 0xc & 1) == 0) {
        uVar3 = (param_2 & 0x800 | 0x1400) >> 10;
        if ((param_2 >> 10 & 1) != 0) {
          uVar3 = 6;
        }
      }
      else {
        uVar3 = 4;
      }
    }
    else {
      uVar3 = 5;
    }
    uVar4 = NetworkSystem_a0900(param_1,uVar3);
    *(uint64_t *)(unaff_RBX + 0x270) = uVar4;
    in_R8 = unaff_RDI;
    if (bVar1) {
      *(uint64_t *)(unaff_RBX + 0xe0) =
           *(uint64_t *)(unaff_R14 + (int64_t)*(int *)(unaff_RBX + 0xe8) * 8);
    }
  }
  uVar3 = *(uint *)(in_R8 + 0x4c8);
  if (((uVar3 & 0x3c00) == 0) && ((*(uint *)(unaff_RBX + 0x288) & 0x3c00) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((*(int *)(unaff_RBX + 0x1d4) == 1) || ((uVar3 & 0x3c0) == 0)) ||
     ((*(int64_t *)(unaff_RBX + 0x268) != 0 &&
      (((*(uint *)(unaff_RBX + 0x288) & 0x3c0) != 0 && (!bVar1)))))) {
    bVar2 = false;
    if (((uVar3 & 0x3c0) == 0) || (!bVar1)) {
      if ((*(int *)(in_R8 + 0x570) == 1) || ((uVar3 & 0x3c0) == 0)) goto LAB_18059ad45;
      if ((system_status_flag == 1) || (*(int *)(in_R8 + 0x570) != 0)) {
        param_3 = param_4;
      }
      if (param_3 <=
          (float)(*(int64_t *)(unaff_R14 + (int64_t)*(int *)(unaff_RBX + 0xf8) * 8) -
                 *(int64_t *)(unaff_RBX + 0xf0)) * in_XMM4_Da) goto LAB_18059ad45;
    }
  }
  else {
    bVar2 = true;
  }
  uVar5 = *(uint *)(unaff_RBX + 0x27c);
  if (uVar5 == 0xffffffff) {
    if ((uVar3 & 0x3c0) >> 9 == 0) {
      if (((uVar3 & 0x3c0) >> 8 & 1) == 0) {
        if ((uVar3 & 0x40) == 0) {
          uVar5 = (uVar3 & 0xc0 | 0x40) >> 6;
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else if (uVar5 - 4 < 5) {
    uVar5 = uVar5 - 4;
  }
  if (-1 < (int)uVar5) {
    uVar4 = PhysicsSystem_ForceCalculator();
    *(uint64_t *)(unaff_RBX + 0x268) = uVar4;
    if (bVar2) {
      *(uint64_t *)(unaff_RBX + 0xf0) =
           *(uint64_t *)(unaff_R14 + (int64_t)*(int *)(unaff_RBX + 0xf8) * 8);
    }
  }
LAB_18059ad45:
  *(int32_t *)(unaff_RBX + 0x288) = *(int32_t *)(*(int64_t *)(unaff_RBX + 0x108) + 0x4c8);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_9ac28(uint64_t param_1,uint64_t param_2,int64_t param_3,float param_4)
void NetworkSystem_9ac28(uint64_t param_1,uint64_t param_2,int64_t param_3,float param_4)
{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t unaff_RBX;
  int64_t unaff_R14;
  float in_XMM2_Da;
  float in_XMM4_Da;
  uVar1 = *(uint *)(param_3 + 0x4c8);
  if (((uVar1 & 0x3c00) == 0) && ((*(uint *)(unaff_RBX + 0x288) & 0x3c00) != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((*(int *)(unaff_RBX + 0x1d4) == 1) || ((uVar1 & 0x3c0) == 0)) ||
     ((*(int64_t *)(unaff_RBX + 0x268) != 0 &&
      (((*(uint *)(unaff_RBX + 0x288) & 0x3c0) != 0 && (!bVar2)))))) {
    bVar3 = false;
    if (((uVar1 & 0x3c0) == 0) || (!bVar2)) {
      if ((*(int *)(param_3 + 0x570) == 1) || ((uVar1 & 0x3c0) == 0)) goto LAB_18059ad45;
      if ((system_status_flag == 1) || (*(int *)(param_3 + 0x570) != 0)) {
        in_XMM2_Da = param_4;
      }
      if (in_XMM2_Da <=
          (float)(*(int64_t *)(unaff_R14 + (int64_t)*(int *)(unaff_RBX + 0xf8) * 8) -
                 *(int64_t *)(unaff_RBX + 0xf0)) * in_XMM4_Da) goto LAB_18059ad45;
    }
  }
  else {
    bVar3 = true;
  }
  uVar5 = *(uint *)(unaff_RBX + 0x27c);
  if (uVar5 == 0xffffffff) {
    if ((uVar1 & 0x3c0) >> 9 == 0) {
      if (((uVar1 & 0x3c0) >> 8 & 1) == 0) {
        if ((uVar1 & 0x40) == 0) {
          uVar5 = (uVar1 & 0xc0 | 0x40) >> 6;
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else if (uVar5 - 4 < 5) {
    uVar5 = uVar5 - 4;
  }
  if (-1 < (int)uVar5) {
    uVar4 = PhysicsSystem_ForceCalculator();
    *(uint64_t *)(unaff_RBX + 0x268) = uVar4;
    if (bVar3) {
      *(uint64_t *)(unaff_RBX + 0xf0) =
           *(uint64_t *)(unaff_R14 + (int64_t)*(int *)(unaff_RBX + 0xf8) * 8);
    }
  }
LAB_18059ad45:
  *(int32_t *)(unaff_RBX + 0x288) = *(int32_t *)(*(int64_t *)(unaff_RBX + 0x108) + 0x4c8);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address