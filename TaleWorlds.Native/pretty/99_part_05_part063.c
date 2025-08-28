#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_05_part063.c - 6 个函数
// 函数: void function_2ff780(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_2ff780(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  char *pcVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t lVar8;
  void *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  char cVar12;
  uint64_t *puVar13;
  char *pcVar14;
  char *pcVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int aiStack_88 [4];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int8_t stack_array_68 [48];
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  pcVar14 = "bones";
  do {
    pcVar15 = pcVar14;
    pcVar14 = pcVar15 + 1;
  } while (*pcVar14 != '\0');
  puVar11 = *(uint64_t **)(param_2 + 0x30);
  if (puVar11 != (uint64_t *)0x0) {
    pcVar14 = (char *)0x0;
    do {
      pcVar6 = (char *)*puVar11;
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)0x180d48d24;
        pcVar4 = pcVar14;
      }
      else {
        pcVar4 = (char *)puVar11[2];
      }
      if (pcVar4 == pcVar15 + -0x180a19c8b) {
        pcVar4 = pcVar4 + (int64_t)pcVar6;
        if (pcVar4 <= pcVar6) {
LAB_1802ff828:
          pcVar15 = "bone";
          do {
            pcVar6 = pcVar15;
            pcVar15 = pcVar6 + 1;
          } while (*pcVar15 != '\0');
          puVar11 = (uint64_t *)puVar11[6];
          do {
            if (puVar11 == (uint64_t *)0x0) {
              return;
            }
            pcVar15 = (char *)*puVar11;
            if (pcVar15 == (char *)0x0) {
              pcVar15 = (char *)0x180d48d24;
              pcVar4 = pcVar14;
            }
            else {
              pcVar4 = (char *)puVar11[2];
            }
            if (pcVar4 == pcVar6 + -0x180a19c83) {
              pcVar4 = pcVar15 + (int64_t)pcVar4;
              if (pcVar4 <= pcVar15) {
LAB_1802ff921:
                aiStack_88[0] = 0;
                pcVar15 = "_index_";
                do {
                  pcVar6 = pcVar15;
                  pcVar15 = pcVar6 + 1;
                } while (*pcVar15 != '\0');
                puVar13 = (uint64_t *)puVar11[8];
                if (puVar13 != (uint64_t *)0x0) {
LAB_1802ff948:
                  pcVar15 = (char *)*puVar13;
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = (char *)0x180d48d24;
                    pcVar4 = pcVar14;
                  }
                  else {
                    pcVar4 = (char *)puVar13[2];
                  }
                  if (pcVar4 != pcVar6 + -0x180a1692f) goto LAB_1802ff9e8;
                  pcVar4 = pcVar4 + (int64_t)pcVar15;
                  if (pcVar15 < pcVar4) {
                    lVar7 = (int64_t)&processed_var_9168_ptr - (int64_t)pcVar15;
                    while (*pcVar15 == pcVar15[lVar7]) {
                      pcVar15 = pcVar15 + 1;
                      if (pcVar4 <= pcVar15) goto LAB_1802ff990;
                    }
                    goto LAB_1802ff9e8;
                  }
LAB_1802ff990:
                  pcVar15 = (char *)0x180d48d24;
                  if ((char *)puVar13[1] != (char *)0x0) {
                    pcVar15 = (char *)puVar13[1];
                  }
                  uVar5 = 0xffffffffffffffff;
                  do {
                    uVar5 = uVar5 + 1;
                  } while (pcVar15[uVar5] != '\0');
                  if (((uVar5 < 3) || (*pcVar15 != '0')) ||
                     (puVar9 = &processed_var_5412_ptr, (pcVar15[1] + 0xa8U & 0xdf) != 0)) {
                    puVar9 = &rendering_buffer_2208_ptr;
                  }
                  AdvancedSystemOptimizer(pcVar15,puVar9,aiStack_88);
                  goto LAB_1802ff9fc;
                }
LAB_1802ff9f5:
                aiStack_88[0] = 0;
LAB_1802ff9fc:
                if (*(char *)(param_1 + 0x20) <= aiStack_88[0]) {
                  return;
                }
                uVar1 = *(uint64_t *)(param_1 + 0x10);
                lVar10 = (int64_t)aiStack_88[0] * 0x100 + *(int64_t *)(param_1 + 0x18);
                lVar7 = function_631f30(puVar11,&rendering_buffer_2248_ptr,stack_array_68);
                if (lVar7 == 0) {
                  *(int32_t *)(lVar10 + 0x30) = 0x3f800000;
                  *(int32_t *)(lVar10 + 0x34) = 0;
                  *(int32_t *)(lVar10 + 0x38) = 0;
                  *(int32_t *)(lVar10 + 0x3c) = 0;
                  uVar16 = 0;
                  uVar17 = 0;
                  uVar18 = 0;
                  uVar19 = 0x3f800000;
                }
                else {
                  function_63b470(&local_var_78,stack_array_68);
                  *(int32_t *)(lVar10 + 0x30) = local_var_78;
                  *(int32_t *)(lVar10 + 0x34) = local_var_74;
                  *(int32_t *)(lVar10 + 0x38) = local_var_70;
                  *(int32_t *)(lVar10 + 0x3c) = local_var_6c;
                  uVar16 = local_var_38;
                  uVar17 = local_var_34;
                  uVar18 = local_var_30;
                  uVar19 = local_var_2c;
                }
                *(int32_t *)(lVar10 + 0x40) = uVar16;
                *(int32_t *)(lVar10 + 0x44) = uVar17;
                *(int32_t *)(lVar10 + 0x48) = uVar18;
                *(int32_t *)(lVar10 + 0x4c) = uVar19;
                function_2f9b60(lVar10,puVar11,uVar1,param_3,param_4);
                pcVar15 = "bone";
                do {
                  pcVar6 = pcVar15;
                  pcVar15 = pcVar6 + 1;
                } while (*pcVar15 != '\0');
                puVar11 = (uint64_t *)puVar11[0xb];
                if (puVar11 == (uint64_t *)0x0) {
                  return;
                }
                do {
                  pcVar15 = (char *)*puVar11;
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = (char *)0x180d48d24;
                    pcVar4 = pcVar14;
                  }
                  else {
                    pcVar4 = (char *)puVar11[2];
                  }
                  if (pcVar4 == pcVar6 + -0x180a19c83) {
                    pcVar4 = pcVar4 + (int64_t)pcVar15;
                    if (pcVar4 <= pcVar15) goto LAB_1802ff921;
                    lVar7 = (int64_t)&rendering_buffer_2308_ptr - (int64_t)pcVar15;
                    while (*pcVar15 == pcVar15[lVar7]) {
                      pcVar15 = pcVar15 + 1;
                      if (pcVar4 <= pcVar15) goto LAB_1802ff921;
                    }
                  }
                  puVar11 = (uint64_t *)puVar11[0xb];
                  if (puVar11 == (uint64_t *)0x0) {
                    return;
                  }
                } while( true );
              }
              lVar7 = (int64_t)&rendering_buffer_2308_ptr - (int64_t)pcVar15;
              while (*pcVar15 == pcVar15[lVar7]) {
                pcVar15 = pcVar15 + 1;
                if (pcVar4 <= pcVar15) goto LAB_1802ff921;
              }
            }
            puVar11 = (uint64_t *)puVar11[0xb];
          } while( true );
        }
        lVar7 = (int64_t)&rendering_buffer_2316_ptr - (int64_t)pcVar6;
        while (*pcVar6 == pcVar6[lVar7]) {
          pcVar6 = pcVar6 + 1;
          if (pcVar4 <= pcVar6) goto LAB_1802ff828;
        }
      }
      puVar11 = (uint64_t *)puVar11[0xb];
    } while (puVar11 != (uint64_t *)0x0);
  }
  cVar12 = '\0';
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      lVar7 = (int64_t)cVar12;
      cVar12 = cVar12 + '\x01';
      lVar8 = lVar7 * 0x100;
      lVar10 = lVar7 * 0x1b0 + *(int64_t *)(*(int64_t *)(param_1 + 0x208) + 0x140);
      lVar7 = *(int64_t *)(param_1 + 0x18);
      uVar1 = *(uint64_t *)(lVar10 + 0x80);
      uVar2 = *(uint64_t *)(lVar10 + 0x88);
      uVar3 = *(uint64_t *)(lVar10 + 0x98);
      puVar11 = (uint64_t *)(lVar8 + 0x30 + lVar7);
      *puVar11 = *(uint64_t *)(lVar10 + 0x90);
      puVar11[1] = uVar3;
      puVar11 = (uint64_t *)(lVar8 + 0x40 + lVar7);
      *puVar11 = uVar1;
      puVar11[1] = uVar2;
    } while (cVar12 < *(char *)(param_1 + 0x20));
  }
  return;
LAB_1802ff9e8:
  puVar13 = (uint64_t *)puVar13[6];
  if (puVar13 == (uint64_t *)0x0) goto LAB_1802ff9f5;
  goto LAB_1802ff948;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * function_2ffb00(uint64_t param_1,int64_t *param_2,int8_t param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t *plStackX_10;
  int64_t lStack_1b8;
  int64_t lStack_1b0;
  uint64_t local_var_1a8;
  int32_t local_var_1a0;
  int32_t local_var_198;
  int32_t local_var_194;
  int32_t local_var_190;
  int32_t local_var_18c;
  int32_t local_var_188;
  int32_t local_var_184;
  int32_t local_var_180;
  int32_t local_var_17c;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  uint64_t local_var_158;
  int64_t lStack_150;
  uint64_t local_var_148;
  int64_t lStack_140;
  uint64_t local_var_138;
  int64_t lStack_130;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  int32_t local_var_e8;
  int32_t local_var_e4;
  int32_t local_var_e0;
  int32_t local_var_dc;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  int32_t local_var_cc;
  uint64_t local_var_c8;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int8_t stack_array_78 [64];
  local_var_c8 = 0xfffffffffffffffe;
  local_var_158 = param_2[0xe];
  lStack_150 = param_2[0xf];
  local_var_148 = param_2[0x10];
  lStack_140 = param_2[0x11];
  local_var_138 = param_2[0x12];
  lStack_130 = param_2[0x13];
  local_var_128 = (int32_t)param_2[0x14];
  local_var_124 = *(int32_t *)((int64_t)param_2 + 0xa4);
  local_var_120 = (int32_t)param_2[0x15];
  local_var_11c = *(int32_t *)((int64_t)param_2 + 0xac);
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  local_var_1a8 = 0;
  local_var_1a0 = 3;
  plStackX_10 = param_2;
  NetworkSystem_SecurityManager(param_2,&lStack_1b8);
  SystemSecurity_Manager(&lStack_1b8,&plStackX_10);
  uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xf0,8,3);
  plVar3 = (int64_t *)function_39dda0(uVar2);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  iVar10 = 0;
  if (lStack_1b0 - lStack_1b8 >> 3 != 0) {
    lVar9 = 0;
    lVar5 = lStack_1b8;
    lVar8 = lStack_1b0;
    do {
      lVar1 = *(int64_t *)(lVar9 + lVar5);
      iVar6 = 0;
      iVar7 = (int)(*(int64_t *)(lVar1 + 0xf8) - *(int64_t *)(lVar1 + 0xf0) >> 3);
      if (0 < iVar7) {
        do {
          function_2ed230(lVar1,&plStackX_10,iVar6);
          local_var_198 = (int32_t)local_var_158;
          local_var_194 = local_var_158._4_4_;
          local_var_190 = (int32_t)lStack_150;
          local_var_18c = 0;
          local_var_188 = (int32_t)local_var_148;
          local_var_184 = local_var_148._4_4_;
          local_var_180 = (int32_t)lStack_140;
          local_var_17c = 0;
          local_var_178 = (int32_t)local_var_138;
          local_var_174 = local_var_138._4_4_;
          local_var_170 = (int32_t)lStack_130;
          local_var_16c = 0;
          local_var_168 = local_var_128;
          local_var_164 = local_var_124;
          local_var_160 = local_var_120;
          local_var_15c = 0x3f800000;
          SystemCore_PerformanceMonitor(&local_var_198,stack_array_78);
          local_var_108 = *(uint64_t *)(lVar1 + 0x70);
          local_var_f8 = *(uint64_t *)(lVar1 + 0x80);
          local_var_e8 = *(int32_t *)(lVar1 + 0x90);
          local_var_e4 = *(int32_t *)(lVar1 + 0x94);
          local_var_e0 = *(int32_t *)(lVar1 + 0x98);
          local_var_d8 = *(int32_t *)(lVar1 + 0xa0);
          local_var_d4 = *(int32_t *)(lVar1 + 0xa4);
          local_var_d0 = *(int32_t *)(lVar1 + 0xa8);
          local_var_100 = *(uint64_t *)(lVar1 + 0x78) & 0xffffffff;
          local_var_f0 = *(uint64_t *)(lVar1 + 0x88) & 0xffffffff;
          local_var_dc = 0;
          local_var_cc = 0x3f800000;
          puVar4 = (uint64_t *)ErrorRecoverySystem(&local_var_108,&local_var_198,stack_array_78);
          local_var_b8 = *puVar4;
          local_var_b0 = puVar4[1];
          local_var_a8 = puVar4[2];
          local_var_a0 = puVar4[3];
          local_var_98 = *(int32_t *)(puVar4 + 4);
          local_var_94 = *(int32_t *)((int64_t)puVar4 + 0x24);
          local_var_90 = *(int32_t *)(puVar4 + 5);
          local_var_8c = *(int32_t *)((int64_t)puVar4 + 0x2c);
          local_var_88 = *(int32_t *)(puVar4 + 6);
          local_var_84 = *(int32_t *)((int64_t)puVar4 + 0x34);
          local_var_80 = *(int32_t *)(puVar4 + 7);
          local_var_7c = *(int32_t *)((int64_t)puVar4 + 0x3c);
          (**(code **)(*plStackX_10 + 0x148))(plStackX_10,&local_var_b8);
          function_39f160(plVar3,plStackX_10);
          if (plStackX_10 != (int64_t *)0x0) {
            (**(code **)(*plStackX_10 + 0x38))();
          }
          iVar6 = iVar6 + 1;
          lVar5 = lStack_1b8;
          lVar8 = lStack_1b0;
        } while (iVar6 < iVar7);
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
    } while ((uint64_t)(int64_t)iVar10 < (uint64_t)(lVar8 - lVar5 >> 3));
  }
  function_2fbf30(param_1,param_3,plVar3,&local_var_158);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  if (lStack_1b8 == 0) {
    return plVar3;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// 函数: void function_2ffe10(int64_t param_1,char param_2,float *param_3)
void function_2ffe10(int64_t param_1,char param_2,float *param_3)
{
  uint64_t *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int64_t lVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int64_t lVar22;
  int64_t lVar23;
  uVar20 = *(uint64_t *)(param_3 + 2);
  lVar23 = (int64_t)param_2;
  puVar1 = (uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xd8) + 0x18) + lVar23 * 0x10);
  *puVar1 = *(uint64_t *)param_3;
  puVar1[1] = uVar20;
  fVar4 = *param_3;
  lVar22 = lVar23 * 0x1b0;
  lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x208) + 0x140);
  lVar8 = *(int64_t *)(param_1 + 0x18);
  lVar23 = lVar23 * 0x100;
  pfVar2 = (float *)(lVar7 + 0xa0 + lVar22);
  fVar9 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = pfVar2[3];
  pfVar3 = (float *)(lVar7 + 0xb0 + lVar22);
  fVar12 = *pfVar3;
  fVar13 = pfVar3[1];
  fVar14 = pfVar3[2];
  fVar15 = pfVar3[3];
  pfVar3 = (float *)(lVar7 + 0xc0 + lVar22);
  fVar16 = *pfVar3;
  fVar17 = pfVar3[1];
  fVar18 = pfVar3[2];
  fVar19 = pfVar3[3];
  puVar1 = (uint64_t *)(lVar7 + 0xd0 + lVar22);
  uVar20 = *puVar1;
  uVar21 = puVar1[1];
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  pfVar3 = (float *)(lVar23 + 0x60 + lVar8);
  *pfVar3 = *pfVar2 * fVar4;
  pfVar3[1] = fVar9 * fVar4;
  pfVar3[2] = fVar10 * fVar4;
  pfVar3[3] = fVar11;
  pfVar3 = (float *)(lVar23 + 0x70 + lVar8);
  *pfVar3 = fVar12 * fVar5;
  pfVar3[1] = fVar13 * fVar5;
  pfVar3[2] = fVar14 * fVar5;
  pfVar3[3] = fVar15;
  pfVar3 = (float *)(lVar23 + 0x80 + lVar8);
  *pfVar3 = fVar16 * fVar6;
  pfVar3[1] = fVar17 * fVar6;
  pfVar3[2] = fVar18 * fVar6;
  pfVar3[3] = fVar19;
  puVar1 = (uint64_t *)(lVar23 + 0x90 + lVar8);
  *puVar1 = uVar20;
  puVar1[1] = uVar21;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2fffb0(int64_t param_1,char param_2)
void function_2fffb0(int64_t param_1,char param_2)
{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uVar10 = 0xfffffffffffffffe;
  function_3001a0();
  *(char *)(param_1 + 0x20) = param_2;
  uVar10 = CoreMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)param_2 << 8,0x10,4,uVar10);
  *(uint64_t *)(param_1 + 0x18) = uVar10;
  uVar8 = 0;
  uVar4 = uVar8;
  uVar9 = uVar8;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    do {
      puVar3 = (uint *)(uVar9 * 0x100 + *(int64_t *)(param_1 + 0x18));
      *puVar3 = 0;
      puVar1 = puVar3 + 0x2c;
      puVar1[0] = 0;
      puVar1[1] = 0;
      puVar3[0x2e] = 0;
      puVar3[0x2f] = 0;
      puVar3[0x30] = 0;
      puVar3[0x31] = 0;
      puVar3[0x32] = 3;
      puVar2 = puVar3 + 0x34;
      puVar2[0] = 0;
      puVar2[1] = 0;
      puVar3[0x36] = 0;
      puVar3[0x37] = 0;
      puVar3[0x38] = 0;
      puVar3[0x39] = 0;
      puVar3[0x3a] = 3;
      puVar3[0xc] = 0x3f800000;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0x3f800000;
      do {
        LOCK();
        uVar5 = *puVar3;
        *puVar3 = *puVar3 | 1;
        UNLOCK();
      } while ((uVar5 & 1) != 0);
      puVar3[1] = 0x3f800000;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0x3f800000;
      *puVar3 = 0;
      puVar3[0x14] = 0x3f800000;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x18] = 0x3f800000;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0x3f800000;
      puVar3[0x1e] = 0;
      puVar3[0x1f] = 0;
      puVar3[0x20] = 0;
      puVar3[0x21] = 0;
      puVar3[0x22] = 0x3f800000;
      puVar3[0x23] = 0;
      puVar3[0x24] = 0;
      puVar3[0x25] = 0;
      puVar3[0x26] = 0;
      puVar3[0x27] = 0x3f800000;
      puVar3[0x3c] = 0;
      puVar3[0x3d] = 0;
      *(int16_t *)(puVar3 + 0x28) = 0xff;
      puVar3[0x2a] = 0;
      puVar3[0x2b] = 0;
      uVar6 = uVar8;
      uVar7 = uVar8;
      if (*(int64_t *)(puVar3 + 0x2e) - *(int64_t *)puVar1 >> 3 != 0) {
        do {
          (**(code **)(**(int64_t **)(uVar7 + *(int64_t *)puVar1) + 0x1e0))
                    (*(int64_t **)(uVar7 + *(int64_t *)puVar1),0);
          uVar5 = (int)uVar6 + 1;
          uVar6 = (uint64_t)uVar5;
          uVar7 = uVar7 + 8;
        } while ((uint64_t)(int64_t)(int)uVar5 <
                 (uint64_t)(*(int64_t *)(puVar3 + 0x2e) - *(int64_t *)puVar1 >> 3));
      }
      SystemCore_Controller(puVar1);
      SystemCore_Controller(puVar2);
      uVar5 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar5;
      uVar9 = uVar9 + 1;
    } while ((int)uVar5 < (int)*(char *)(param_1 + 0x20));
  }
  return;
}
// 函数: void function_3a00c0(int64_t param_1,int64_t *param_2)
void function_3a00c0(int64_t param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  puVar1 = *(uint64_t **)(param_1 + 0x58);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar2 = (uint64_t *)puVar1[2];
  puVar3 = puVar1;
  if (puVar2 != (uint64_t *)0x0) {
    do {
      if ((int64_t *)puVar2[4] < param_2) {
        puVar2 = (uint64_t *)*puVar2;
      }
      else {
        puVar3 = puVar2;
        puVar2 = (uint64_t *)puVar2[1];
      }
    } while (puVar2 != (uint64_t *)0x0);
    if ((puVar3 != puVar1) && ((int64_t *)puVar3[4] <= param_2)) goto LAB_1803a013f;
  }
  puVar3 = puVar1;
LAB_1803a013f:
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  puVar1 = *(uint64_t **)(param_1 + 0x58);
  if (puVar3 != puVar1) {
    puVar1[4] = puVar1[4] + -1;
    Function_7bfb2422(puVar3);
    RenderingSystem_BufferHandler(puVar3,puVar1);
    if ((int64_t *)puVar3[4] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)puVar3[4] + 0x38))();
    }
  }
  return;
}
// 函数: void function_3a01a0(uint64_t param_1,int64_t param_2,char param_3)
void function_3a01a0(uint64_t param_1,int64_t param_2,char param_3)
{
  uint64_t uVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  if (param_3 == '\0') {
    uVar2 = *(uint *)(param_2 + 0x2c4) >> 1;
    if ((uVar2 & 1) != 0) {
      function_3a00c0();
    }
    iVar3 = 0;
    if (*(int64_t *)(param_2 + 0x1c8) - *(int64_t *)(param_2 + 0x1c0) >> 3 != 0) {
      lVar5 = 0;
      do {
        function_3a01a0(param_1,*(uint64_t *)(lVar5 + *(int64_t *)(param_2 + 0x1c0)),
                      (byte)uVar2 & 1);
        lVar5 = lVar5 + 8;
        iVar3 = iVar3 + 1;
      } while ((uint64_t)(int64_t)iVar3 <
               (uint64_t)(*(int64_t *)(param_2 + 0x1c8) - *(int64_t *)(param_2 + 0x1c0) >> 3));
    }
  }
  else {
    function_3a00c0();
    uVar1 = 0;
    uVar4 = uVar1;
    if (*(int64_t *)(param_2 + 0x1c8) - *(int64_t *)(param_2 + 0x1c0) >> 3 != 0) {
      do {
        function_3a01a0(param_1,*(uint64_t *)(uVar1 + *(int64_t *)(param_2 + 0x1c0)),1);
        uVar1 = uVar1 + 8;
        uVar2 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar2;
      } while ((uint64_t)(int64_t)(int)uVar2 <
               (uint64_t)(*(int64_t *)(param_2 + 0x1c8) - *(int64_t *)(param_2 + 0x1c0) >> 3));
    }
  }
  return;
}
// 函数: void function_3a0247(void)
void function_3a0247(void)
{
  int64_t unaff_RBX;
  int unaff_EDI;
  do {
    function_3a01a0();
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  return;
}