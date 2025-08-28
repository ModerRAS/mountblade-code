#define SystemInitializer System_Initializer2  // 系统初始化器
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part038.c - 1 个函数
// 函数: void function_3ca330(int64_t param_1,uint64_t *param_2,uint64_t *param_3,int64_t param_4,
void function_3ca330(int64_t param_1,uint64_t *param_2,uint64_t *param_3,int64_t param_4,
                  short param_5,int32_t param_6,float param_7,float *param_8,uint64_t param_9,
                  uint64_t param_10,float *param_11)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint64_t *puVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int64_t *plVar14;
  float *pfVar15;
  float *pfVar16;
  uint64_t *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int8_t stack_array_1b8 [32];
  void *plocal_var_198;
  int8_t *plocal_var_190;
  int8_t stack_array_188 [8];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  int32_t local_var_170;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  float fStack_154;
  float fStack_150;
  int iStack_148;
  int32_t local_var_144;
  uint local_var_140;
  int32_t local_var_13c;
  uint64_t stack_array_138 [2];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint64_t local_var_e8;
  uint64_t *plocal_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [4];
  uint64_t local_var_b0;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_b0 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  local_var_170 = 0;
  pfVar15 = (float *)(param_4 + 0x114);
  local_var_168 = 0;
  local_var_164 = 0;
  local_var_160 = 0x3f800000;
  local_var_15c = 0x7f7fffff;
  pfVar16 = (float *)(param_4 + 0x124);
  plocal_var_e0 = param_2;
  function_645340(&fStack_128,pfVar15,pfVar16,&local_var_168);
  *param_11 = fStack_128;
  param_11[1] = fStack_124;
  param_11[2] = fStack_120;
  param_11[3] = fStack_11c;
  param_11[4] = fStack_118;
  param_11[5] = fStack_114;
  param_11[6] = fStack_110;
  param_11[7] = fStack_10c;
  param_11[8] = fStack_108;
  param_11[9] = fStack_104;
  param_11[10] = fStack_100;
  param_11[0xb] = fStack_fc;
  param_11[0xc] = fStack_f8;
  param_11[0xd] = fStack_f4;
  param_11[0xe] = fStack_f0;
  param_11[0xf] = fStack_ec;
  fVar1 = *param_8;
  fVar19 = param_8[1];
  fVar21 = param_8[2];
  fVar23 = param_8[3];
  fVar2 = param_8[4];
  fVar3 = param_8[5];
  fVar26 = param_8[6];
  fVar28 = param_8[7];
  fVar5 = param_8[8];
  fVar6 = param_8[9];
  fVar7 = param_8[10];
  fVar24 = param_8[0xb];
  fVar25 = fStack_124 * fVar26;
  fVar27 = fStack_124 * fVar28;
  fStack_11c = fStack_120 * fVar24;
  fVar18 = fStack_128 * fVar19;
  fVar20 = fStack_128 * fVar21;
  fVar22 = fStack_128 * fVar23;
  fStack_128 = fStack_128 * fVar1 + fStack_124 * fVar2 + fStack_120 * fVar5;
  fStack_124 = fVar18 + fStack_124 * fVar3 + fStack_120 * fVar6;
  fStack_120 = fVar20 + fVar25 + fStack_120 * fVar7;
  fStack_11c = fVar22 + fVar27 + fStack_11c;
  fVar25 = fStack_114 * fVar26;
  fVar27 = fStack_114 * fVar28;
  fStack_10c = fStack_110 * fVar24;
  fVar18 = fStack_118 * fVar19;
  fVar20 = fStack_118 * fVar21;
  fVar22 = fStack_118 * fVar23;
  fStack_118 = fStack_118 * fVar1 + fStack_114 * fVar2 + fStack_110 * fVar5;
  fStack_114 = fVar18 + fStack_114 * fVar3 + fStack_110 * fVar6;
  fStack_110 = fVar20 + fVar25 + fStack_110 * fVar7;
  fStack_10c = fVar22 + fVar27 + fStack_10c;
  fVar25 = fStack_104 * fVar26;
  fVar27 = fStack_104 * fVar28;
  fStack_fc = fStack_100 * fVar24;
  fVar18 = fStack_108 * fVar19;
  fVar20 = fStack_108 * fVar21;
  fVar22 = fStack_108 * fVar23;
  fStack_108 = fStack_108 * fVar1 + fStack_104 * fVar2 + fStack_100 * fVar5;
  fStack_104 = fVar18 + fStack_104 * fVar3 + fStack_100 * fVar6;
  fStack_100 = fVar20 + fVar25 + fStack_100 * fVar7;
  fStack_fc = fVar22 + fVar27 + fStack_fc;
  fVar26 = fStack_f4 * fVar26;
  fVar28 = fStack_f4 * fVar28;
  fVar24 = fStack_f0 * fVar24;
  fVar19 = fStack_f8 * fVar19;
  fVar21 = fStack_f8 * fVar21;
  fVar23 = fStack_f8 * fVar23;
  fStack_f8 = fStack_f8 * fVar1 + fStack_f4 * fVar2 + fStack_f0 * fVar5 + param_8[0xc];
  fStack_f4 = fVar19 + fStack_f4 * fVar3 + fStack_f0 * fVar6 + param_8[0xd];
  fStack_f0 = fVar21 + fVar26 + fStack_f0 * fVar7 + param_8[0xe];
  fStack_ec = fVar23 + fVar28 + fVar24 + param_8[0xf];
  Utilities_DataValidator(&fStack_128);
  fVar1 = pfVar15[2];
  fVar19 = pfVar16[2];
  fVar21 = pfVar15[1];
  fVar23 = pfVar16[1];
  fVar2 = *pfVar15;
  fVar3 = *pfVar16;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x48) < system_system_config_memory) && (SystemInitializer(&system_ptr_9994), system_system_config_memory == -1)) {
    local_var_d8 = &system_config_ptr;
    local_var_d0 = afStack_c0;
    afStack_c0[0] = (float)((uint)afStack_c0[0] & 0xffffff00);
    fStack_c8 = 7.00649e-45;
    strcpy_s(afStack_c0,0x10,&memory_allocator_3180_ptr);
    lVar13 = system_system_data_memory;
    iVar8 = RenderingSystem_PostProcessor(system_system_data_memory,&local_var_d8);
    if ((iVar8 == -1) ||
       (system_system_config_memory = (int64_t)iVar8 * 0x68 + *(int64_t *)(lVar13 + 0x38), system_system_config_memory == 0)
       ) {
      system_system_config_memory = *(uint64_t *)(lVar13 + 0x28);
    }
    local_var_d8 = &system_state_ptr;
    SystemCore_StateController(&system_ptr_9994);
  }
  puVar17 = (uint64_t *)(system_system_data_memory + 0xd8);
  puVar9 = puVar17;
  puVar4 = *(uint64_t **)(system_system_data_memory + 0xe8);
  while (puVar4 != (uint64_t *)0x0) {
    if ((uint64_t)puVar4[4] < system_system_config_memory) {
      puVar4 = (uint64_t *)*puVar4;
    }
    else {
      puVar9 = puVar4;
      puVar4 = (uint64_t *)puVar4[1];
    }
  }
  if ((puVar9 == puVar17) || (system_system_config_memory < (uint64_t)puVar9[4])) {
    plocal_var_198 = &system_ptr_9998;
    puVar9 = (uint64_t *)function_0fc780(puVar17,&local_var_158,puVar17,puVar9);
    puVar9 = (uint64_t *)*puVar9;
  }
  stack_array_138[0] = puVar9[5];
  stack_array_188[0] = 1;
  fStack_154 = param_7 * *(float *)(param_4 + 0x134);
  local_var_158 = 2;
  fStack_150 = SQRT((fVar2 - fVar3) * (fVar2 - fVar3) + (fVar21 - fVar23) * (fVar21 - fVar23) +
                    (fVar1 - fVar19) * (fVar1 - fVar19)) * param_7 * 0.5;
  plocal_var_190 = stack_array_188;
  plocal_var_198 = (void *)CONCAT71(plocal_var_198._1_7_,1);
  plVar10 = (int64_t *)
            (**(code **)(**(int64_t **)(param_1 + 200) + 0xb8))
                      (*(int64_t **)(param_1 + 200),&local_var_158,stack_array_138);
  local_var_13c = 0;
  iStack_148 = (int)param_5;
  local_var_144 = param_6;
  local_var_140 = (uint)*(byte *)(param_1 + 0xb0);
  (**(code **)(*plVar10 + 0xa0))(plVar10,&iStack_148);
  uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,6);
  uVar12 = function_3c5c50(uVar11,plVar10);
  uVar11 = *(uint64_t *)(param_1 + 200);
  lVar13 = AdvancedProcessor_StateManager0(&local_var_168,&fStack_128);
  local_var_d8 = (void *)CONCAT44(local_var_160,local_var_164);
  local_var_d0 = (float *)CONCAT44(local_var_168,local_var_15c);
  fStack_c8 = fStack_f8;
  fStack_c4 = fStack_f4;
  afStack_c0[0] = fStack_f0;
  plVar14 = (int64_t *)(**(code **)(lVar13 + 0xa8))(uVar11,&local_var_d8);
  (**(code **)(*plVar14 + 0xa0))(plVar14,plVar10);
  (**(code **)(*plVar14 + 0x120))(plVar14,*(int32_t *)(system_system_config_memory + 0x60));
  (**(code **)(*plVar14 + 0x110))(plVar14,*(int32_t *)(system_system_config_memory + 0x5c));
  (**(code **)(*plVar14 + 0x150))(plVar14,0x43480000);
  (**(code **)(*plVar14 + 0x1c0))(plVar14,0x3f000000);
  (**(code **)(*plVar14 + 600))(plVar14,0x10,4);
  function_6b7380(plVar14,param_7 * param_7 * param_7 *
                        *(float *)(*(int64_t *)(param_4 + 0x180) + 0x58),0,0);
  (**(code **)(*plVar14 + 0x100))(plVar14,&fStack_180);
  fStack_180 = fStack_180 * 4.0;
  fStack_17c = fStack_17c * 4.0;
  fStack_178 = fStack_178 * 4.0;
  (**(code **)(*plVar14 + 0xf8))(plVar14,&fStack_180);
  (**(code **)(*(int64_t *)*param_3 + 0x28))((int64_t *)*param_3,plVar14,0);
  uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,6);
  plVar10 = (int64_t *)function_3c6190(uVar11,plVar14);
  *param_2 = plVar10;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  local_var_170 = 1;
  (**(code **)(*(int64_t *)*param_2 + 0x138))((int64_t *)*param_2,uVar12);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_b0 ^ (uint64_t)stack_array_1b8);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_3ca950(int64_t param_1,int64_t *param_2)
{
  float fVar1;
  uint uVar2;
  int64_t *plVar3;
  code *pcVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint64_t *puVar8;
  int64_t *******ppppppplVar9;
  int64_t lVar10;
  int64_t *******ppppppplVar11;
  int64_t ******pppppplVar12;
  int iVar13;
  uint64_t *puVar14;
  float *pfVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  byte *pbVar24;
  bool bVar25;
  int aiStackX_18 [2];
  float *pfStackX_20;
  int64_t *******ppppppplStack_f8;
  int64_t *******ppppppplStack_f0;
  int64_t *******ppppppplStack_e8;
  uint64_t local_var_e0;
  int64_t lStack_d8;
  int32_t local_var_d0;
  byte *pbStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  uint local_var_b0;
  uint local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a0;
  int64_t lStack_98;
  int32_t local_var_90;
  int16_t local_var_8c;
  uint64_t *plocal_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  local_var_68 = 0xfffffffffffffffe;
  uVar2 = *(uint *)((int64_t)param_2 + 0xc);
  pfVar21 = (float *)*param_2;
  plocal_var_88 = (uint64_t *)0x0;
  local_var_80 = 0;
  iVar19 = 0;
  local_var_78 = 0;
  local_var_70 = 3;
  local_var_d0 = 3;
  ppppppplStack_f8 = (int64_t *******)&ppppppplStack_f8;
  ppppppplStack_f0 = (int64_t *******)&ppppppplStack_f8;
  ppppppplStack_e8 = (int64_t *******)0x0;
  local_var_e0 = 0;
  lStack_d8 = 0;
  pfStackX_20 = pfVar21;
  function_057340(&plocal_var_88,param_2[8] - param_2[7] >> 3);
  puVar16 = (uint64_t *)param_2[7];
  puVar23 = plocal_var_88;
  if (puVar16 != (uint64_t *)param_2[8]) {
    do {
      puVar18 = (uint64_t *)(system_system_data_memory + 0xd8);
      puVar14 = *(uint64_t **)(system_system_data_memory + 0xe8);
      puVar8 = puVar18;
      if (puVar14 != (uint64_t *)0x0) {
        do {
          if ((uint64_t)puVar14[4] < *puVar16) {
            puVar14 = (uint64_t *)*puVar14;
          }
          else {
            puVar8 = puVar14;
            puVar14 = (uint64_t *)puVar14[1];
          }
        } while (puVar14 != (uint64_t *)0x0);
      }
      if ((puVar8 == puVar18) || (*puVar16 < (uint64_t)puVar8[4])) {
        puVar8 = (uint64_t *)function_0fc780(puVar18,aiStackX_18);
        puVar8 = (uint64_t *)*puVar8;
      }
      *puVar23 = puVar8[5];
      ppppppplVar11 = (int64_t *******)&ppppppplStack_f8;
      if (ppppppplStack_e8 != (int64_t *******)0x0) {
        ppppppplVar9 = ppppppplStack_e8;
        do {
          if (ppppppplVar9[4] < (int64_t ******)*puVar16) {
            ppppppplVar9 = (int64_t *******)*ppppppplVar9;
          }
          else {
            ppppppplVar11 = ppppppplVar9;
            ppppppplVar9 = (int64_t *******)ppppppplVar9[1];
          }
        } while (ppppppplVar9 != (int64_t *******)0x0);
      }
      if (((int64_t ********)ppppppplVar11 == &ppppppplStack_f8) ||
         ((int64_t ******)*puVar16 < ppppppplVar11[4])) {
        if ((ppppppplVar11 == ppppppplStack_f8) ||
           ((int64_t ********)ppppppplVar11 == &ppppppplStack_f8)) {
          if ((lStack_d8 != 0) &&
             (pppppplVar12 = (int64_t ******)*puVar16, ppppppplVar11 = ppppppplStack_f8,
             ppppppplStack_f8[4] < pppppplVar12)) {
LAB_1803cab25:
            bVar25 = false;
            ppppppplVar9 = ppppppplVar11;
            goto LAB_1803cab27;
          }
LAB_1803cac70:
          ppppppplVar9 = (int64_t *******)&ppppppplStack_f8;
          bVar25 = true;
          if (ppppppplStack_e8 != (int64_t *******)0x0) {
            ppppppplVar11 = ppppppplStack_e8;
            do {
              ppppppplVar9 = ppppppplVar11;
              bVar25 = (int64_t ******)*puVar16 < ppppppplVar9[4];
              if (bVar25) {
                ppppppplVar11 = (int64_t *******)ppppppplVar9[1];
              }
              else {
                ppppppplVar11 = (int64_t *******)*ppppppplVar9;
              }
            } while (ppppppplVar11 != (int64_t *******)0x0);
          }
          ppppppplVar11 = ppppppplVar9;
          if (bVar25) {
            if (ppppppplVar9 != ppppppplStack_f0) {
              ppppppplVar11 = (int64_t *******)SystemFunction_00018066b9a0(ppppppplVar9);
              goto LAB_1803cacc5;
            }
            pppppplVar12 = (int64_t ******)*puVar16;
          }
          else {
LAB_1803cacc5:
            pppppplVar12 = (int64_t ******)*puVar16;
            if (pppppplVar12 <= ppppppplVar11[4]) goto LAB_1803cab7d;
          }
LAB_1803cacd2:
          if (((int64_t ********)ppppppplVar9 != &ppppppplStack_f8) &&
             (ppppppplVar9[4] <= pppppplVar12)) {
            uVar22 = 1;
            goto LAB_1803cab3b;
          }
        }
        else {
          ppppppplVar9 = (int64_t *******)SystemFunction_00018066bd70();
          pppppplVar12 = (int64_t ******)*puVar16;
          if ((pppppplVar12 <= ppppppplVar11[4]) || (ppppppplVar9[4] <= pppppplVar12))
          goto LAB_1803cac70;
          if (*ppppppplVar11 == (int64_t ******)0x0) goto LAB_1803cab25;
          bVar25 = true;
LAB_1803cab27:
          if (ppppppplVar9 == (int64_t *******)0x0) goto LAB_1803cac70;
          if (!bVar25) goto LAB_1803cacd2;
        }
        uVar22 = 0;
LAB_1803cab3b:
        lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,(int8_t)local_var_d0);
        *(uint64_t *)(lVar10 + 0x20) = *puVar16;
        *(int32_t *)(lVar10 + 0x28) = 0;
// WARNING: Subroutine does not return
        SystemNetworkHandler(lVar10,ppppppplVar9,&ppppppplStack_f8,uVar22);
      }
LAB_1803cab7d:
      *(int *)(ppppppplVar11 + 5) = iVar19;
      iVar19 = iVar19 + 1;
      puVar16 = puVar16 + 1;
      pfVar21 = pfStackX_20;
      puVar23 = puVar23 + 1;
    } while (puVar16 != (uint64_t *)param_2[8]);
  }
  uVar17 = (uint64_t)(int)uVar2;
  lStack_b8 = function_3ceee0((int64_t)(int)(uVar2 * uVar2));
  fVar1 = *(float *)(param_1 + 0x230);
  aiStackX_18[0] = 0;
  local_var_b0 = uVar2;
  if (0 < (int)uVar2) {
    lVar10 = uVar17 << 2;
    lStack_c0 = lVar10;
    pbStack_c8 = (byte *)(lStack_b8 + 2);
    do {
      iVar20 = 0;
      pfVar15 = pfVar21;
      pbVar24 = pbStack_c8;
      iVar19 = aiStackX_18[0];
      if (0 < (int)uVar17) {
        do {
          pppppplVar12 = (int64_t ******)0x0;
          *(short *)(pbVar24 + -2) = (short)(int)(*pfVar21 * (1.0 / fVar1));
          if ((param_2[4] != 0) && ((param_2[8] - param_2[7] & 0xfffffffffffffff8U) != 0)) {
            iVar7 = *(int *)((int64_t)param_2 + 0xc);
            iVar13 = iVar7 * iVar20 + iVar19;
            iVar5 = iVar7 * iVar7 + -1;
            if (iVar13 < iVar7 * iVar7) {
              iVar5 = iVar13;
            }
            iVar7 = 0;
            if (-1 < iVar5) {
              iVar7 = iVar5;
            }
            pppppplVar12 = *(int64_t *******)
                            (param_2[7] + (uint64_t)*(byte *)((int64_t)iVar7 + param_2[4]) * 8);
          }
          bVar6 = 0;
          if (pppppplVar12 != (int64_t ******)0x0) {
            ppppppplVar9 = (int64_t *******)&ppppppplStack_f8;
            ppppppplVar11 = ppppppplStack_e8;
            while (ppppppplVar11 != (int64_t *******)0x0) {
              if (ppppppplVar11[4] < pppppplVar12) {
                ppppppplVar11 = (int64_t *******)*ppppppplVar11;
              }
              else {
                ppppppplVar9 = ppppppplVar11;
                ppppppplVar11 = (int64_t *******)ppppppplVar11[1];
              }
            }
            if (((int64_t ********)ppppppplVar9 == &ppppppplStack_f8) ||
               (pppppplVar12 < ppppppplVar9[4])) {
              if ((ppppppplVar9 == ppppppplStack_f8) ||
                 ((int64_t ********)ppppppplVar9 == &ppppppplStack_f8)) {
                if ((lStack_d8 != 0) && (ppppppplStack_f8[4] < pppppplVar12)) {
                  bVar25 = false;
                  ppppppplVar11 = ppppppplStack_f8;
                  goto LAB_1803cada6;
                }
              }
              else {
                ppppppplVar11 = (int64_t *******)SystemFunction_00018066bd70(ppppppplVar9);
                if ((ppppppplVar9[4] < pppppplVar12) && (pppppplVar12 < ppppppplVar11[4])) {
                  if (*ppppppplVar9 == (int64_t ******)0x0) {
                    bVar25 = false;
                    ppppppplVar11 = ppppppplVar9;
                  }
                  else {
                    bVar25 = true;
                  }
LAB_1803cada6:
                  if (ppppppplVar11 != (int64_t *******)0x0) {
                    if (((bVar25) || ((int64_t ********)ppppppplVar11 == &ppppppplStack_f8)) ||
                       (uVar22 = 1, pppppplVar12 < ppppppplVar11[4])) {
                      uVar22 = 0;
                    }
                    goto LAB_1803cae34;
                  }
                }
              }
              bVar25 = true;
              ppppppplVar11 = (int64_t *******)&ppppppplStack_f8;
              ppppppplVar9 = ppppppplStack_e8;
              while (ppppppplVar9 != (int64_t *******)0x0) {
                bVar25 = pppppplVar12 < ppppppplVar9[4];
                ppppppplVar11 = ppppppplVar9;
                if (bVar25) {
                  ppppppplVar9 = (int64_t *******)ppppppplVar9[1];
                }
                else {
                  ppppppplVar9 = (int64_t *******)*ppppppplVar9;
                }
              }
              ppppppplVar9 = ppppppplVar11;
              if (bVar25) {
                if (ppppppplVar11 != ppppppplStack_f0) {
                  ppppppplVar9 = (int64_t *******)SystemFunction_00018066b9a0(ppppppplVar11);
                  goto LAB_1803cae13;
                }
              }
              else {
LAB_1803cae13:
                if (pppppplVar12 <= ppppppplVar9[4]) {
                  uVar17 = (uint64_t)uVar2;
                  lVar10 = lStack_c0;
                  iVar19 = aiStackX_18[0];
                  goto LAB_1803cae81;
                }
              }
              if (((int64_t ********)ppppppplVar11 == &ppppppplStack_f8) ||
                 (pppppplVar12 < ppppppplVar11[4])) {
                uVar22 = 0;
              }
              else {
                uVar22 = 1;
              }
LAB_1803cae34:
              lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,(int8_t)local_var_d0);
              *(int64_t *******)(lVar10 + 0x20) = pppppplVar12;
              *(int32_t *)(lVar10 + 0x28) = 0;
// WARNING: Subroutine does not return
              SystemNetworkHandler(lVar10,ppppppplVar11,&ppppppplStack_f8,uVar22);
            }
LAB_1803cae81:
            bVar6 = (byte)*(int32_t *)(ppppppplVar9 + 5);
          }
          pbVar24[1] = bVar6;
          *pbVar24 = bVar6 | 0x80;
          iVar20 = iVar20 + 1;
          pfVar21 = (float *)((int64_t)pfVar21 + lVar10);
          pfVar15 = pfStackX_20;
          pbVar24 = pbVar24 + 4;
        } while (iVar20 < (int)uVar17);
      }
      aiStackX_18[0] = iVar19 + 1;
      pbStack_c8 = pbStack_c8 + lVar10;
      pfVar21 = pfVar15 + 1;
      local_var_b0 = (uint)uVar17;
      pfStackX_20 = pfVar21;
    } while (aiStackX_18[0] < (int)local_var_b0);
  }
  lVar10 = lStack_b8;
  local_var_90 = 0;
  local_var_8c = 0;
  local_var_a8 = 1;
  local_var_a0 = 4;
  plVar3 = *(int64_t **)(system_system_data_memory + 0x28);
  pcVar4 = *(code **)(*plVar3 + 0x60);
  local_var_ac = local_var_b0;
  lStack_98 = lStack_b8;
  uVar22 = (**(code **)(**(int64_t **)(system_system_data_memory + 0x20) + 0x120))();
  uVar22 = (*pcVar4)(plVar3,&local_var_b0,uVar22);
  ppppppplVar11 = ppppppplStack_e8;
  if (lVar10 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar10);
  }
  if (*param_2 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_2 = 0;
  if (ppppppplStack_e8 != (int64_t *******)0x0) {
    SystemCache_Manager(&ppppppplStack_f8,*ppppppplStack_e8);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(ppppppplVar11);
  }
  if (plocal_var_88 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar22;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address