#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_10_part015.c - 1 个函数
// 函数: void function_6ab905(void)
void function_6ab905(void)
{
  uint64_t *unaff_RBX;
  *unaff_RBX = &memory_allocator_3704_ptr;
  unaff_RBX[1] = &system_buffer_ptr;
  unaff_RBX[2] = &system_buffer_ptr;
  *(int32_t *)(unaff_RBX + 3) = 0xffffffff;
  unaff_RBX[4] = &system_buffer_ptr;
  unaff_RBX[5] = &system_buffer_ptr;
  *(int32_t *)(unaff_RBX + 6) = 0xffffffff;
  unaff_RBX[8] = &system_buffer_ptr;
  unaff_RBX[7] = &system_buffer_ptr;
  *(int32_t *)(unaff_RBX + 9) = 0;
  *(int32_t *)((int64_t)unaff_RBX + 0x4c) = 0xffffffff;
  unaff_RBX[10] = 0;
  *(int8_t *)(unaff_RBX + 0xb) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_6ab920(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
             int64_t *param_5,uint param_6)
{
  byte *pbVar1;
  uint64_t *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int64_t *plVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  char *pcVar14;
  uint64_t *puVar15;
  uint uVar16;
  char *pcVar17;
  uint64_t uVar18;
  int64_t lVar19;
  char cStack_208;
  int8_t local_var_207;
  int8_t local_var_206;
  int8_t local_var_205;
  int32_t local_var_204;
  int32_t local_var_200;
  uint local_var_1fc;
  int32_t local_var_1f8;
  uint local_var_1f4;
  uint64_t *plocal_var_1f0;
  int64_t lStack_1e8;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  uint64_t *plocal_var_1b8;
  uint64_t local_var_1b0;
  void *plocal_var_1a8;
  int32_t local_var_1a0;
  int32_t local_var_19c;
  int32_t local_var_198;
  int32_t local_var_194;
  int32_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  int32_t local_var_178;
  int32_t local_var_170;
  int32_t local_var_16c;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  int32_t local_var_148;
  int32_t local_var_144;
  int iStack_140;
  int iStack_13c;
  uint local_var_138;
  uint local_var_134;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int iStack_110;
  uint local_var_10c;
  int8_t stack_array_108 [8];
  int32_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  int32_t local_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  char cStack_b0;
  int8_t stack_array_a8 [112];
  char cStack_38;
  lVar10 = function_6aca90(param_1,param_4);
  if ((lVar10 == 0) && (lStack_1e8 = function_6ac530(param_1,param_3), lStack_1e8 != 0)) {
    lVar10 = param_1[0x1c];
    puVar11 = (uint64_t *)
              (**(code **)(*system_system_buffer_memory + 8))
                        (system_system_buffer_memory,0x90,&processed_var_5552_ptr,&processed_var_5360_ptr,0x45c);
    if (puVar11 == (uint64_t *)0x0) {
      puVar11 = (uint64_t *)0x0;
      plocal_var_1f0 = (uint64_t *)0x0;
    }
    else {
      plVar6 = (int64_t *)param_1[0x13];
      plocal_var_1f0 = puVar11;
      uVar12 = (**(code **)(*plVar6 + 0x18))(plVar6,param_4[1],&cStack_208);
      local_var_1d8 = (**(code **)(*plVar6 + 0x18))(plVar6,*param_4,&local_var_207);
      plVar6 = (int64_t *)param_1[0x13];
      local_var_1d0 = uVar12;
      uVar12 = (**(code **)(*plVar6 + 0x18))(plVar6,param_3[1],&local_var_206);
      uVar13 = (**(code **)(*plVar6 + 0x18))(plVar6,*param_3,&local_var_205);
      *(int32_t *)(puVar11 + 3) = *(int32_t *)(lStack_1e8 + 0x18);
      puVar11[1] = uVar13;
      puVar11[2] = uVar12;
      *(int *)(puVar11 + 6) = (int)lVar10;
      *(int32_t *)(puVar11 + 4) = (int32_t)local_var_1d8;
      *(int32_t *)((int64_t)puVar11 + 0x24) = local_var_1d8._4_4_;
      *(int32_t *)(puVar11 + 5) = (int32_t)local_var_1d0;
      *(int32_t *)((int64_t)puVar11 + 0x2c) = local_var_1d0._4_4_;
      puVar11[7] = 0;
      puVar11[8] = 0;
      *(uint *)(puVar11 + 9) = param_6;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      *puVar11 = &processed_var_5120_ptr;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      local_var_1b0 = uVar12;
    }
    uVar18 = 0;
    local_var_1fc = 0;
    local_var_1f4 = 0;
    lVar10 = *param_5;
    plocal_var_1b8 = puVar11;
    if ((int)(param_5[1] - lVar10 >> 5) != 0) {
LAB_1806abb30:
      puVar15 = (uint64_t *)(uVar18 * 0x20 + lVar10);
      local_var_128 = *(int32_t *)puVar15;
      local_var_124 = *(int32_t *)((int64_t)puVar15 + 4);
      local_var_120 = *(int32_t *)(puVar15 + 1);
      local_var_11c = *(int32_t *)((int64_t)puVar15 + 0xc);
      pbVar8 = (byte *)puVar15[1];
      puVar2 = (uint64_t *)(uVar18 * 0x20 + 0x10 + lVar10);
      local_var_118 = *(int32_t *)puVar2;
      local_var_114 = *(int32_t *)((int64_t)puVar2 + 4);
      pbVar9 = (byte *)*puVar2;
      iVar7 = *(int *)(puVar2 + 1);
      local_var_10c = *(uint *)((int64_t)puVar2 + 0xc);
      iStack_110 = iVar7;
      if (*(int *)((int64_t)param_1 + 0x3c) != 0) {
        uVar16 = 0x1505;
        bVar3 = *pbVar8;
        pbVar1 = pbVar8;
        while (bVar3 != 0) {
          pbVar1 = pbVar1 + 1;
          uVar16 = uVar16 * 0x21 ^ (uint)bVar3;
          bVar3 = *pbVar1;
        }
        uVar18 = 0x1505;
        bVar3 = *pbVar9;
        pbVar1 = pbVar9;
        while (bVar3 != 0) {
          pbVar1 = pbVar1 + 1;
          uVar18 = (uint64_t)((int)uVar18 * 0x21 ^ (uint)bVar3);
          bVar3 = *pbVar1;
        }
        uVar16 = *(uint *)(param_1[4] +
                          ((uVar18 ^ uVar16) & (uint64_t)(*(int *)((int64_t)param_1 + 0x2c) - 1))
                          * 4);
        if (uVar16 != 0xffffffff) {
          do {
            uVar18 = (uint64_t)uVar16;
            lVar10 = param_1[2] + uVar18 * 0x18;
            pcVar14 = *(char **)(param_1[2] + uVar18 * 0x18);
            pcVar17 = "";
            if (pcVar14 != (char *)0x0) {
              pcVar17 = pcVar14;
            }
            lVar19 = (int64_t)pbVar8 - (int64_t)pcVar17;
            do {
              cVar4 = *pcVar17;
              cVar5 = pcVar17[lVar19];
              if (cVar4 != cVar5) break;
              pcVar17 = pcVar17 + 1;
            } while (cVar5 != '\0');
            if (cVar4 == cVar5) {
              pcVar14 = "";
              if (*(char **)(lVar10 + 8) != (char *)0x0) {
                pcVar14 = *(char **)(lVar10 + 8);
              }
              lVar19 = (int64_t)pbVar9 - (int64_t)pcVar14;
              do {
                cVar4 = *pcVar14;
                cVar5 = pcVar14[lVar19];
                if (cVar4 != cVar5) break;
                pcVar14 = pcVar14 + 1;
              } while (cVar5 != '\0');
              if (cVar4 == cVar5) goto LAB_1806abc5a;
            }
            uVar16 = *(uint *)(param_1[3] + uVar18 * 4);
            if (uVar16 == 0xffffffff) break;
          } while( true );
        }
      }
      goto LAB_1806abfac;
    }
LAB_1806abf5a:
    if (puVar11 == (uint64_t *)0x0) {
LAB_1806abfce:
      *param_2 = &memory_allocator_3712_ptr;
      param_2[1] = &system_buffer_ptr;
      param_2[2] = &system_buffer_ptr;
      *(int32_t *)(param_2 + 3) = 0xffffffff;
      param_2[4] = &system_buffer_ptr;
      param_2[5] = &system_buffer_ptr;
      *(int32_t *)(param_2 + 6) = 0xffffffff;
      param_2[7] = 0;
      param_2[8] = 0;
      *(int32_t *)(param_2 + 9) = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(int8_t *)(param_2 + 0xc) = 0;
    }
    else {
      puVar11[10] = puVar11[0x10];
      puVar11[0xb] = puVar11[0x10] + (uint64_t)*(uint *)(puVar11 + 0x11) * 4;
      if (*(uint *)(param_1 + 0x1c) < (*(uint *)((int64_t)param_1 + 0xe4) & 0x7fffffff)) {
        *(uint64_t **)(param_1[0x1b] + (uint64_t)*(uint *)(param_1 + 0x1c) * 8) = puVar11;
        *(int *)(param_1 + 0x1c) = (int)param_1[0x1c] + 1;
      }
      else {
        function_6ae030(param_1 + 0x1b,&plocal_var_1b8);
      }
      local_var_1d8 = *param_4;
      local_var_1d0 = param_4[1];
      puVar15 = (uint64_t *)function_6ab040(param_1 + 0x14,&local_var_1d8,&cStack_208);
      if (cStack_208 == '\0') {
        *puVar15 = local_var_1d8;
        puVar15[1] = local_var_1d0;
        puVar15[2] = puVar11;
      }
      *param_2 = &memory_allocator_3712_ptr;
      uVar12 = puVar11[2];
      param_2[1] = puVar11[1];
      param_2[2] = uVar12;
      *(int32_t *)(param_2 + 3) = *(int32_t *)(puVar11 + 3);
      uVar12 = puVar11[5];
      param_2[4] = puVar11[4];
      param_2[5] = uVar12;
      *(int32_t *)(param_2 + 6) = *(int32_t *)(puVar11 + 6);
      param_2[7] = puVar11[7];
      param_2[8] = puVar11[8];
      *(int32_t *)(param_2 + 9) = *(int32_t *)(puVar11 + 9);
      param_2[10] = puVar11[10];
      param_2[0xb] = puVar11[0xb];
      *(int8_t *)(param_2 + 0xc) = 1;
    }
  }
  else {
    *param_2 = &memory_allocator_3712_ptr;
    param_2[1] = &system_buffer_ptr;
    param_2[2] = &system_buffer_ptr;
    *(int32_t *)(param_2 + 3) = 0xffffffff;
    param_2[4] = &system_buffer_ptr;
    param_2[5] = &system_buffer_ptr;
    *(int32_t *)(param_2 + 6) = 0xffffffff;
    param_2[7] = 0;
    param_2[8] = 0;
    *(int32_t *)(param_2 + 9) = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    *(int8_t *)(param_2 + 0xc) = 0;
  }
  return param_2;
LAB_1806abc5a:
  if ((((uVar16 != 0xffffffff) && (lVar10 != 0)) &&
      (lVar10 = *(int64_t *)(lVar10 + 0x10), lVar10 != 0)) &&
     (uVar16 = *(uint *)(lVar10 + 0x28), uVar16 <= local_var_10c)) {
    if (local_var_1fc < local_var_10c + iVar7) {
      local_var_1fc = local_var_10c + iVar7;
    }
    if (((local_var_1fc <= param_6) &&
        ((**(code **)(*param_1 + 0x58))
                   (param_1,stack_array_108,*(int32_t *)(lStack_1e8 + 0x18),*puVar15),
        cStack_b0 != '\0')) &&
       ((**(code **)(*param_1 + 0x20))(param_1,stack_array_a8,local_var_d8), cStack_38 != '\0')) {
      local_var_150 = *(int32_t *)(lVar10 + 8);
      local_var_14c = *(int32_t *)(lVar10 + 0xc);
      local_var_148 = *(int32_t *)(lVar10 + 0x10);
      local_var_144 = *(int32_t *)(lVar10 + 0x14);
      iStack_140 = *(int *)(lVar10 + 0x18);
      local_var_1f8 = local_var_bc;
      local_var_15c = local_var_bc;
      local_var_200 = local_var_b4;
      local_var_154 = local_var_b4;
      local_var_204 = local_var_b8;
      local_var_158 = local_var_b8;
      plocal_var_1a8 = &memory_allocator_3704_ptr;
      local_var_190 = local_var_f0;
      local_var_188 = local_var_e8;
      local_var_180 = local_var_e0;
      local_var_178 = local_var_d8;
      local_var_160 = local_var_c0;
      local_var_1a0 = local_var_100;
      local_var_19c = local_var_fc;
      local_var_198 = local_var_f8;
      local_var_194 = local_var_f4;
      local_var_170 = local_var_d0;
      local_var_16c = local_var_cc;
      local_var_168 = local_var_c8;
      local_var_164 = local_var_c4;
      iStack_13c = iVar7;
      local_var_138 = uVar16;
      local_var_134 = uVar16;
      if (*(uint *)(plocal_var_1f0 + 0xd) < (*(uint *)((int64_t)plocal_var_1f0 + 0x6c) & 0x7fffffff)) {
        puVar11 = (uint64_t *)((uint64_t)*(uint *)(plocal_var_1f0 + 0xd) * 0x78 + plocal_var_1f0[0xc]);
        *puVar11 = &memory_allocator_3704_ptr;
        *(int32_t *)((int64_t)puVar11 + 0x4c) = local_var_bc;
        *(int32_t *)(puVar11 + 10) = local_var_b8;
        *(int32_t *)((int64_t)puVar11 + 0x54) = local_var_b4;
        *(int32_t *)(puVar11 + 1) = local_var_100;
        *(int32_t *)((int64_t)puVar11 + 0xc) = local_var_fc;
        *(int32_t *)(puVar11 + 2) = local_var_f8;
        *(int32_t *)((int64_t)puVar11 + 0x14) = local_var_f4;
        *(int32_t *)(puVar11 + 3) = local_var_f0;
        puVar11[4] = local_var_e8;
        puVar11[5] = local_var_e0;
        *(int32_t *)(puVar11 + 6) = local_var_d8;
        *(int32_t *)(puVar11 + 7) = local_var_d0;
        *(int32_t *)((int64_t)puVar11 + 0x3c) = local_var_cc;
        *(int32_t *)(puVar11 + 8) = local_var_c8;
        *(int32_t *)((int64_t)puVar11 + 0x44) = local_var_c4;
        *(int32_t *)(puVar11 + 9) = local_var_c0;
        *(int32_t *)(puVar11 + 0xb) = local_var_150;
        *(int32_t *)((int64_t)puVar11 + 0x5c) = local_var_14c;
        *(int32_t *)(puVar11 + 0xc) = local_var_148;
        *(int32_t *)((int64_t)puVar11 + 100) = local_var_144;
        *(int *)(puVar11 + 0xd) = iStack_140;
        *(int *)((int64_t)puVar11 + 0x6c) = iVar7;
        *(uint *)(puVar11 + 0xe) = uVar16;
        *(uint *)((int64_t)puVar11 + 0x74) = uVar16;
        *(int *)(plocal_var_1f0 + 0xd) = *(int *)(plocal_var_1f0 + 0xd) + 1;
      }
      else {
        function_6ae340(plocal_var_1f0 + 0xc,&plocal_var_1a8);
      }
      puVar11 = plocal_var_1f0;
      local_var_204 = local_var_158;
      local_var_200 = local_var_154;
      if (*(uint *)(plocal_var_1f0 + 0xf) < (*(uint *)((int64_t)plocal_var_1f0 + 0x7c) & 0x7fffffff)) {
        puVar15 = (uint64_t *)((uint64_t)*(uint *)(plocal_var_1f0 + 0xf) * 0x78 + plocal_var_1f0[0xe]);
        *puVar15 = &memory_allocator_3704_ptr;
        *(int32_t *)(puVar15 + 10) = local_var_158;
        *(int32_t *)((int64_t)puVar15 + 0x54) = local_var_154;
        *(int32_t *)(puVar15 + 1) = local_var_1a0;
        *(int32_t *)((int64_t)puVar15 + 0xc) = local_var_19c;
        *(int32_t *)(puVar15 + 2) = local_var_198;
        *(int32_t *)((int64_t)puVar15 + 0x14) = local_var_194;
        *(int32_t *)(puVar15 + 3) = local_var_190;
        puVar15[4] = local_var_188;
        puVar15[5] = local_var_180;
        *(int32_t *)(puVar15 + 6) = local_var_178;
        *(int32_t *)(puVar15 + 7) = local_var_170;
        *(int32_t *)((int64_t)puVar15 + 0x3c) = local_var_16c;
        *(int32_t *)(puVar15 + 8) = local_var_168;
        *(int32_t *)((int64_t)puVar15 + 0x44) = local_var_164;
        *(int32_t *)(puVar15 + 9) = local_var_160;
        *(int32_t *)((int64_t)puVar15 + 0x4c) = local_var_15c;
        *(int *)((int64_t)puVar15 + 0x6c) = iStack_13c;
        *(uint *)((int64_t)puVar15 + 0x74) = local_var_134;
        *(int32_t *)(puVar15 + 0xb) = local_var_150;
        *(int32_t *)((int64_t)puVar15 + 0x5c) = local_var_14c;
        *(int32_t *)(puVar15 + 0xc) = local_var_148;
        *(int32_t *)((int64_t)puVar15 + 100) = local_var_144;
        *(int *)(puVar15 + 0xd) = iStack_140;
        *(uint *)(puVar15 + 0xe) = local_var_138;
        *(int *)(plocal_var_1f0 + 0xf) = *(int *)(plocal_var_1f0 + 0xf) + 1;
      }
      else {
        function_6ae100(plocal_var_1f0 + 0xe,&plocal_var_1a8);
      }
      puVar11[7] = puVar11[0xe];
      puVar11[8] = (uint64_t)*(uint *)(puVar11 + 0xf) * 0x78 + puVar11[0xe];
      if (iStack_140 == 0x4d) {
        if (*(uint *)(puVar11 + 0x11) < (*(uint *)((int64_t)puVar11 + 0x8c) & 0x7fffffff)) {
          *(int *)(puVar11[0x10] + (uint64_t)*(uint *)(puVar11 + 0x11) * 4) = iVar7;
          *(int *)(puVar11 + 0x11) = *(int *)(puVar11 + 0x11) + 1;
        }
        else {
          function_6a5620(puVar11 + 0x10,&iStack_110);
        }
      }
      else if (iStack_140 != 0x50) {
        (**(code **)(*param_1 + 0x90))(param_1,&local_var_1d8,iStack_140,local_var_178);
        if (local_var_1d0._1_1_ != '\0') goto LAB_1806abfac;
      }
      local_var_1f4 = local_var_1f4 + 1;
      uVar18 = (uint64_t)local_var_1f4;
      lVar10 = *param_5;
      if ((uint)(param_5[1] - lVar10 >> 5) <= local_var_1f4) goto LAB_1806abf5a;
      goto LAB_1806abb30;
    }
  }
LAB_1806abfac:
  if (puVar11 != (uint64_t *)0x0) {
    (**(code **)*puVar11)(puVar11,0);
    (**(code **)(*system_system_buffer_memory + 0x10))(system_system_buffer_memory,puVar11);
  }
  goto LAB_1806abfce;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address