// $fun 的语义化别名
#define $alias_name $fun
/* SystemCore_ConfigValidator - SystemCore_ConfigValidator */
#define SystemCore_ConfigValidator SystemCore_ConfigValidator
/* SystemCore_Initializer - SystemCore_Initializer */
#define SystemCore_Initializer SystemCore_Initializer
/* SystemCore_BackupSystem - RenderingSystem_ConfigProcessor */
#define RenderingSystem_ConfigProcessor SystemCore_BackupSystem
/* NetworkSystem_ProtocolParser - RenderingSystem_StringParser */
#define RenderingSystem_StringParser NetworkSystem_ProtocolParser
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
// 03_rendering_part037.c - 1 个函数
// 函数: void function_288f30(int64_t param_1,uint64_t param_2)
void function_288f30(int64_t param_1,uint64_t param_2)
{
  int64_t *plVar1;
  byte bVar2;
  void *puVar3;
  bool bVar4;
  uint64_t *******pppppppuVar5;
  int8_t uVar6;
  int iVar7;
  int32_t uVar8;
  uint uVar9;
  int8_t *puVar10;
  char *pcVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t ******ppppppuVar14;
  byte *pbVar15;
  uint64_t *******pppppppuVar16;
  uint64_t *puVar17;
  char *pcVar18;
  int iVar19;
  uint64_t *puVar20;
  uint uVar21;
  uint64_t *puVar22;
  void *puVar23;
  uint64_t *******pppppppuVar24;
  uint64_t *******pppppppuVar25;
  uint *puVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint uVar31;
  char cVar32;
  int8_t stack_array_288 [32];
  int8_t local_var_268;
  void *plocal_var_258;
  char *pcStack_250;
  uint local_var_248;
  uint64_t local_var_240;
  void *plocal_var_238;
  int8_t *plocal_var_230;
  uint local_var_228;
  uint64_t local_var_220;
  uint local_var_218;
  uint local_var_214;
  uint64_t *plocal_var_210;
  uint64_t *plocal_var_208;
  uint64_t *plocal_var_200;
  int32_t local_var_1f8;
  uint64_t *plocal_var_1f0;
  uint64_t *plocal_var_1e8;
  uint64_t *plocal_var_1e0;
  int32_t local_var_1d8;
  uint64_t *plocal_var_1d0;
  uint64_t *plocal_var_1c8;
  uint64_t *plocal_var_1c0;
  uint64_t *plocal_var_1b8;
  int32_t local_var_1b0;
  uint64_t *******ppppppplocal_var_1a8;
  uint64_t *******ppppppplocal_var_1a0;
  uint64_t *******ppppppplocal_var_198;
  uint64_t local_var_190;
  int64_t lStack_188;
  int32_t local_var_180;
  int32_t local_var_178;
  void **pplocal_var_170;
  void *plocal_var_168;
  int8_t *plocal_var_160;
  int32_t local_var_158;
  uint64_t local_var_150;
  int8_t stack_array_148 [32];
  int64_t lStack_128;
  int64_t lStack_120;
  int64_t lStack_118;
  uint64_t local_var_110;
  int32_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  void *plocal_var_e8;
  char *pcStack_e0;
  uint local_var_d8;
  char acStack_d0 [136];
  uint64_t local_var_48;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_288;
  uVar29 = 0;
  local_var_178 = 0;
  lStack_128 = param_1;
  local_var_100 = param_2;
  local_var_f0 = param_2;
  if (*(void **)*render_system_data_memory == &rendering_rock_ptr) {
    cVar32 = *(int *)(render_system_data_memory + 0xe0) != 0;
  }
  else {
    cVar32 = (**(code **)(*(void **)*render_system_data_memory + 0x48))();
  }
  if (cVar32 == '\0') {
    uVar21 = timeGetTime();
  }
  else {
    uVar21 = 0xb061;
  }
  lStack_120 = 0;
  lStack_118 = 0;
  local_var_110 = 0;
  local_var_108 = 3;
  local_var_214 = uVar21 ^ 0x41c64e6d;
  function_0b6b20(0,&lStack_120);
  plocal_var_1f0 = (uint64_t *)0x0;
  plocal_var_1e8 = (uint64_t *)0x0;
  plocal_var_1e0 = (uint64_t *)0x0;
  local_var_1d8 = 3;
  uVar21 = uVar21 ^ 0x41c64e6d;
  if (lStack_118 - lStack_120 >> 3 != 0) {
    do {
      puVar22 = (uint64_t *)0x0;
      lVar12 = *(int64_t *)(lStack_120 + uVar29 * 8);
      plocal_var_e8 = &memory_allocator_3432_ptr;
      pcStack_e0 = acStack_d0;
      acStack_d0[0] = '\0';
      local_var_d8 = *(uint *)(lVar12 + 0x20);
      puVar3 = *(void **)(lVar12 + 0x18);
      puVar23 = &system_buffer_ptr;
      if (puVar3 != (void *)0x0) {
        puVar23 = puVar3;
      }
      strcpy_s(acStack_d0,0x80,puVar23);
      if (local_var_d8 < render_system_control_memory) {
LAB_1802890ba:
        bVar4 = false;
      }
      else {
        if (render_system_control_memory != 0) {
          pcVar18 = pcStack_e0;
          puVar17 = puVar22;
          do {
            if (*pcVar18 != pcVar18[render_system_control_memory - (int64_t)pcStack_e0]) goto LAB_1802890ba;
            uVar21 = (int)puVar17 + 1;
            puVar17 = (uint64_t *)(uint64_t)uVar21;
            pcVar18 = pcVar18 + 1;
          } while (uVar21 < render_system_control_memory);
        }
        bVar4 = true;
      }
      if (bVar4) {
        plocal_var_258 = &system_data_buffer_ptr;
        local_var_240 = 0;
        pcStack_250 = (int8_t *)0x0;
        local_var_248 = 0;
        CoreMemoryPoolProcessor(&plocal_var_258,local_var_d8);
        pcVar18 = pcStack_250;
        if (0 < (int)local_var_d8) {
          pcVar18 = "";
          if (pcStack_e0 != (char *)0x0) {
            pcVar18 = pcStack_e0;
          }
// WARNING: Subroutine does not return
          memcpy(pcStack_250,pcVar18,(int64_t)(int)(local_var_d8 + 1));
        }
        if (pcStack_e0 == (char *)0x0) {
          puVar17 = (uint64_t *)(uint64_t)local_var_248;
        }
        else {
          local_var_248 = 0;
          puVar17 = puVar22;
          if (pcStack_250 != (int8_t *)0x0) {
            *pcStack_250 = 0;
            puVar17 = (uint64_t *)0x0;
          }
        }
        if (plocal_var_1e8 < plocal_var_1e0) {
          plocal_var_1d0 = plocal_var_1e8;
          *plocal_var_1e8 = &system_state_ptr;
          plocal_var_1e8[1] = 0;
          *(int32_t *)(plocal_var_1e8 + 2) = 0;
          *plocal_var_1e8 = &system_data_buffer_ptr;
          *(int *)(plocal_var_1e8 + 2) = (int)puVar17;
          plocal_var_1e8[1] = pcStack_250;
          *(int32_t *)((int64_t)plocal_var_1e8 + 0x1c) = local_var_240._4_4_;
          *(int32_t *)(plocal_var_1e8 + 3) = (int32_t)local_var_240;
          local_var_248 = 0;
          local_var_240 = 0;
          puVar13 = plocal_var_1e8;
        }
        else {
          lVar12 = (int64_t)plocal_var_1e8 - (int64_t)plocal_var_1f0 >> 5;
          if (lVar12 == 0) {
            lVar12 = 1;
LAB_1802891fc:
            puVar22 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 << 5,(int8_t)local_var_1d8)
            ;
          }
          else {
            lVar12 = lVar12 * 2;
            if (lVar12 != 0) goto LAB_1802891fc;
          }
          puVar13 = (uint64_t *)SystemCore_Initializer(plocal_var_1f0,plocal_var_1e8,puVar22);
          puVar20 = plocal_var_1e8;
          *puVar13 = &system_state_ptr;
          puVar13[1] = 0;
          *(int32_t *)(puVar13 + 2) = 0;
          *puVar13 = &system_data_buffer_ptr;
          *(int *)(puVar13 + 2) = (int)puVar17;
          puVar13[1] = pcVar18;
          *(int32_t *)((int64_t)puVar13 + 0x1c) = local_var_240._4_4_;
          *(int32_t *)(puVar13 + 3) = (int32_t)local_var_240;
          local_var_248 = 0;
          pcStack_250 = (char *)0x0;
          local_var_240 = 0;
          plocal_var_1d0 = puVar13;
          for (puVar17 = plocal_var_1f0; puVar17 != puVar20; puVar17 = puVar17 + 4) {
            (**(code **)*puVar17)(puVar17,0);
          }
          if (plocal_var_1f0 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(plocal_var_1f0);
          }
          plocal_var_1e0 = puVar22 + lVar12 * 4;
          plocal_var_1f0 = puVar22;
        }
        plocal_var_1e8 = puVar13 + 4;
        pcStack_250 = (char *)0x0;
        local_var_240 = local_var_240 & 0xffffffff00000000;
        plocal_var_258 = &system_state_ptr;
      }
      plocal_var_e8 = &system_state_ptr;
      uVar29 = (uint64_t)((int)uVar29 + 1);
      uVar21 = local_var_214;
    } while (uVar29 < (uint64_t)(lStack_118 - lStack_120 >> 3));
  }
  uVar29 = 0;
  plocal_var_1c8 = (uint64_t *)0x0;
  plocal_var_1c0 = (uint64_t *)0x0;
  plocal_var_1b8 = (uint64_t *)0x0;
  local_var_1b0 = 3;
  plocal_var_210 = (uint64_t *)0x0;
  plocal_var_208 = (uint64_t *)0x0;
  plocal_var_200 = (uint64_t *)0x0;
  local_var_1f8 = 3;
  local_var_180 = 3;
  ppppppplocal_var_1a8 = &ppppppplocal_var_1a8;
  ppppppplocal_var_1a0 = &ppppppplocal_var_1a8;
  ppppppplocal_var_198 = (uint64_t *******)0x0;
  local_var_190 = 0;
  lStack_188 = 0;
  plocal_var_258 = &system_data_buffer_ptr;
  local_var_240 = 0;
  pcStack_250 = (char *)0x0;
  local_var_248 = 0;
  if (0 < (int)render_system_control_memory) {
    iVar7 = render_system_control_memory + 1;
    if (iVar7 < 0x10) {
      iVar7 = 0x10;
    }
    puVar10 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar7,0x13);
    *puVar10 = 0;
    pcStack_250 = puVar10;
    uVar8 = CoreMemoryPoolCleaner(puVar10);
    local_var_240 = CONCAT44(local_var_240._4_4_,uVar8);
// WARNING: Subroutine does not return
    memcpy(puVar10,render_system_control_memory,(int64_t)(int)(render_system_control_memory + 1));
  }
  uVar31 = 1;
  plocal_var_1d0 = (uint64_t *)CONCAT44(plocal_var_1d0._4_4_,1);
  pcVar11 = (char *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *pcVar11 = '\0';
  pcStack_250 = pcVar11;
  uVar9 = CoreMemoryPoolCleaner(pcVar11);
  pcVar18 = pcStack_250;
  local_var_240 = CONCAT44(local_var_240._4_4_,uVar9);
  pcVar11[0] = '_';
  pcVar11[1] = '\0';
  local_var_248 = 1;
  if (0 < render_system_control_memory) {
    if (render_system_control_memory != -1) {
      if (pcVar11 == (char *)0x0) {
        iVar7 = render_system_control_memory + 2;
        if (iVar7 < 0x10) {
          iVar7 = 0x10;
        }
        pcVar11 = (char *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar7,0x13);
        *pcVar11 = '\0';
      }
      else {
        if (render_system_control_memory + 2U <= uVar9) goto LAB_180289516;
        local_var_268 = 0x13;
        pcVar11 = (char *)DataValidator(system_memory_pool_ptr,pcVar11,render_system_control_memory + 2U,0x10);
      }
      pcStack_250 = pcVar11;
      uVar8 = CoreMemoryPoolCleaner(pcVar11);
      local_var_240 = CONCAT44(local_var_240._4_4_,uVar8);
    }
LAB_180289516:
// WARNING: Subroutine does not return
    memcpy(pcVar11 + 1,render_system_control_memory,(int64_t)(render_system_control_memory + 1));
  }
  local_var_218 = 0;
  if ((int64_t)plocal_var_1e8 - (int64_t)plocal_var_1f0 >> 5 != 0) {
    do {
      puVar17 = plocal_var_208;
      puVar13 = (uint64_t *)0x0;
      puVar22 = plocal_var_1f0 + uVar29 * 4;
      uVar21 = *(uint *)(puVar22 + 2);
      if (uVar21 < uVar31) {
LAB_180289571:
        bVar4 = false;
      }
      else {
        if (uVar31 != 0) {
          pcVar11 = pcVar18;
          puVar20 = puVar13;
          do {
            if (pcVar11[puVar22[1] - (int64_t)pcVar18] != *pcVar11) goto LAB_180289571;
            uVar9 = (int)puVar20 + 1;
            puVar20 = (uint64_t *)(uint64_t)uVar9;
            pcVar11 = pcVar11 + 1;
          } while (uVar9 < uVar31);
        }
        bVar4 = true;
      }
      if (bVar4) {
        if (uVar21 == 0) goto LAB_1802895c4;
        puVar17 = puVar13;
        puVar20 = puVar13;
        goto LAB_1802895b3;
      }
      if (plocal_var_208 < plocal_var_200) {
        plocal_var_208 = plocal_var_208 + 4;
        SystemCore_NetworkHandler0(puVar17,puVar22);
      }
      else {
        lVar12 = (int64_t)plocal_var_208 - (int64_t)plocal_var_210 >> 5;
        if (lVar12 == 0) {
          lVar12 = 1;
LAB_1802899a4:
          puVar13 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 << 5,(int8_t)local_var_1f8);
        }
        else {
          lVar12 = lVar12 * 2;
          if (lVar12 != 0) goto LAB_1802899a4;
        }
        lVar27 = SystemCore_Initializer(plocal_var_210,plocal_var_208,puVar13);
        SystemCore_NetworkHandler0(lVar27,puVar22);
        puVar17 = plocal_var_208;
        for (puVar22 = plocal_var_210; puVar22 != puVar17; puVar22 = puVar22 + 4) {
          (**(code **)*puVar22)(puVar22,0);
        }
        if (plocal_var_210 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(plocal_var_210);
        }
        plocal_var_200 = puVar13 + lVar12 * 4;
        plocal_var_210 = puVar13;
        plocal_var_208 = (uint64_t *)(lVar27 + 0x20);
      }
      local_var_218 = local_var_218 + 1;
      uVar29 = (uint64_t)local_var_218;
      pcVar11 = pcStack_250;
      uVar21 = local_var_214;
      uVar31 = (uint)plocal_var_1d0;
    } while (uVar29 < (uint64_t)((int64_t)plocal_var_1e8 - (int64_t)plocal_var_1f0 >> 5));
  }
  puVar10 = (int8_t *)0x0;
  function_28a660(&plocal_var_1c8);
  lVar12 = lStack_128;
  if ((((int64_t)plocal_var_208 - (int64_t)plocal_var_210 & 0xffffffffffffffe0U) == 0) ||
     ((lStack_188 != 0 &&
      (uVar21 = uVar21 ^ uVar21 << 0xd, uVar21 = uVar21 ^ uVar21 >> 0x11,
      uVar21 = uVar21 ^ uVar21 << 5, 0.15 < (float)(uVar21 - 1) * 2.3283064e-10)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) && (system_debug_flag == '\0')) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(int8_t *)(lStack_128 + 0x130) = uVar6;
  plocal_var_238 = &system_data_buffer_ptr;
  local_var_220 = 0;
  plocal_var_230 = (int8_t *)0x0;
  local_var_228 = 0;
  if (*(char *)(lStack_128 + 0x130) == '\0') {
    uVar21 = uVar21 ^ uVar21 << 0xd;
    uVar21 = uVar21 ^ uVar21 >> 0x11;
    puVar22 = plocal_var_210 +
              (int64_t)
              (int)((uint64_t)((uVar21 << 5 ^ uVar21) - 1) %
                   ((int64_t)plocal_var_208 - (int64_t)plocal_var_210 >> 5 & 0xffffffffU)) * 4;
    uVar21 = *(uint *)(puVar22 + 2);
    uVar29 = (uint64_t)uVar21;
    if (puVar22[1] != 0) {
      CoreMemoryPoolProcessor(&plocal_var_238,uVar29);
    }
    if (uVar21 != 0) {
// WARNING: Subroutine does not return
      memcpy(plocal_var_230,puVar22[1],uVar29);
    }
    puVar10 = plocal_var_230;
    local_var_228 = 0;
    if (plocal_var_230 != (int8_t *)0x0) {
      plocal_var_230[uVar29] = 0;
    }
    goto LAB_180289e47;
  }
  plVar1 = (int64_t *)(lStack_128 + 0x138);
  SystemCore_ConfigValidator(plVar1);
  uVar21 = uVar21 ^ uVar21 << 0xd;
  uVar21 = uVar21 ^ uVar21 >> 0x11;
  uVar21 = uVar21 ^ uVar21 << 5;
  iVar7 = (int)((uint64_t)(uVar21 - 1) %
               ((int64_t)plocal_var_1c0 - (int64_t)plocal_var_1c8 >> 5 & 0xffffffffU));
  pppppppuVar24 = &ppppppplocal_var_1a8;
  pppppppuVar16 = ppppppplocal_var_198;
  while (pppppppuVar5 = pppppppuVar24, pppppppuVar16 != (uint64_t *******)0x0) {
    if (*(int *)(pppppppuVar16 + 6) == 0) {
      bVar4 = false;
      pppppppuVar25 = (uint64_t *******)*pppppppuVar16;
    }
    else {
      if (*(int *)(plocal_var_1c8 + (int64_t)iVar7 * 4 + 2) == 0) {
        bVar4 = true;
      }
      else {
        ppppppuVar14 = pppppppuVar16[5];
        lVar27 = plocal_var_1c8[(int64_t)iVar7 * 4 + 1] - (int64_t)ppppppuVar14;
        do {
          uVar31 = (uint)*(byte *)((int64_t)ppppppuVar14 + lVar27);
          iVar19 = *(byte *)ppppppuVar14 - uVar31;
          if (*(byte *)ppppppuVar14 != uVar31) break;
          ppppppuVar14 = (uint64_t ******)((int64_t)ppppppuVar14 + 1);
        } while (uVar31 != 0);
        bVar4 = 0 < iVar19;
        if (iVar19 < 1) {
          pppppppuVar25 = (uint64_t *******)*pppppppuVar16;
          goto LAB_180289bc9;
        }
      }
      pppppppuVar25 = (uint64_t *******)pppppppuVar16[1];
    }
LAB_180289bc9:
    pppppppuVar24 = pppppppuVar16;
    pppppppuVar16 = pppppppuVar25;
    if (!bVar4) {
      pppppppuVar24 = pppppppuVar5;
    }
  }
  pppppppuVar16 = &ppppppplocal_var_1a8;
  if (ppppppplocal_var_198 != (uint64_t *******)0x0) {
    pppppppuVar24 = ppppppplocal_var_198;
    do {
      if (*(int *)(plocal_var_1c8 + (int64_t)iVar7 * 4 + 2) == 0) {
        bVar4 = false;
        pppppppuVar25 = (uint64_t *******)pppppppuVar24[1];
      }
      else {
        if (*(int *)(pppppppuVar24 + 6) == 0) {
          bVar4 = true;
        }
        else {
          pbVar15 = (byte *)plocal_var_1c8[(int64_t)iVar7 * 4 + 1];
          lVar27 = (int64_t)pppppppuVar24[5] - (int64_t)pbVar15;
          do {
            uVar31 = (uint)pbVar15[lVar27];
            iVar19 = *pbVar15 - uVar31;
            if (*pbVar15 != uVar31) break;
            pbVar15 = pbVar15 + 1;
          } while (uVar31 != 0);
          bVar4 = 0 < iVar19;
          if (iVar19 < 1) {
            pppppppuVar25 = (uint64_t *******)pppppppuVar24[1];
            goto LAB_180289c37;
          }
        }
        pppppppuVar25 = (uint64_t *******)*pppppppuVar24;
      }
LAB_180289c37:
      if (bVar4) {
        pppppppuVar24 = pppppppuVar16;
      }
      pppppppuVar16 = pppppppuVar24;
      pppppppuVar24 = pppppppuVar25;
    } while (pppppppuVar25 != (uint64_t *******)0x0);
  }
  for (; pppppppuVar16 != pppppppuVar5;
      pppppppuVar16 = (uint64_t *******)SystemFunction_00018066bd70(pppppppuVar16)) {
    if (*(uint64_t *)(lVar12 + 0x140) < *(uint64_t *)(lVar12 + 0x148)) {
      *(uint64_t *)(lVar12 + 0x140) = *(uint64_t *)(lVar12 + 0x140) + 0x20;
      SystemCore_NetworkHandler0();
    }
    else {
      RenderingSystem_ConfigProcessor(plVar1);
    }
  }
  uVar21 = uVar21 ^ uVar21 << 0xd;
  uVar21 = uVar21 ^ uVar21 >> 0x11;
  puVar22 = (uint64_t *)
            ((int64_t)
             (int)((uint64_t)((uVar21 << 5 ^ uVar21) - 1) %
                  (*(int64_t *)(lVar12 + 0x140) - *plVar1 >> 5 & 0xffffffffU)) * 0x20 + *plVar1);
  uVar21 = *(uint *)(puVar22 + 2);
  if (puVar22[1] == 0) {
LAB_180289daa:
    if (uVar21 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar10,puVar22[1],(uint64_t)uVar21);
    }
  }
  else if (uVar21 != 0) {
    iVar7 = uVar21 + 1;
    if (iVar7 < 0x10) {
      iVar7 = 0x10;
    }
    puVar10 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar7,0x13);
    *puVar10 = 0;
    uVar29 = (uint64_t)puVar10 & 0xffffffffffc00000;
    if (uVar29 == 0) {
      uVar31 = 0;
    }
    else {
      lVar12 = ((int64_t)puVar10 - uVar29 >> 0x10) * 0x50;
      puVar26 = (uint *)(uVar29 + ((lVar12 + 0x80) - (uint64_t)*(uint *)(uVar29 + lVar12 + 0x84)));
      if ((*(byte *)((int64_t)puVar26 + 0xe) & 2) == 0) {
        uVar31 = puVar26[7];
        if (0x3ffffff < uVar31) {
          uVar31 = *puVar26 << 0x10;
        }
      }
      else {
        uVar31 = puVar26[7];
        if (uVar31 < 0x4000000) {
          uVar30 = (uint64_t)uVar31;
        }
        else {
          uVar30 = (uint64_t)*puVar26 << 0x10;
        }
        if (0x3ffffff < uVar31) {
          uVar31 = *puVar26 << 0x10;
        }
        uVar31 = uVar31 - (int)(((int64_t)puVar10 -
                                (uVar29 + ((int64_t)((int64_t)puVar26 + (-0x80 - uVar29)) / 0x50)
                                          * 0x10000)) % uVar30);
      }
    }
    local_var_220 = CONCAT44(local_var_220._4_4_,uVar31);
    plocal_var_230 = puVar10;
    goto LAB_180289daa;
  }
  local_var_228 = uVar21;
  if (puVar10 != (int8_t *)0x0) {
    puVar10[uVar21] = 0;
  }
LAB_180289e47:
  uVar21 = *(uint *)((int64_t)puVar22 + 0x1c);
  *(float *)(lStack_128 + 0x15c) = (float)system_error_code * 1e-05;
  local_var_220._4_4_ = uVar21;
  SystemCore_GarbageCollector(system_resource_state,local_var_100,&plocal_var_238,1);
  local_var_178 = 1;
  plocal_var_238 = &system_data_buffer_ptr;
  if (puVar10 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar10);
  }
  plocal_var_230 = (int8_t *)0x0;
  local_var_220 = (uint64_t)local_var_220._4_4_ << 0x20;
  plocal_var_238 = &system_state_ptr;
  plocal_var_258 = &system_data_buffer_ptr;
  if (pcVar11 != (char *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(pcVar11);
  }
  pcStack_250 = (char *)0x0;
  local_var_240 = local_var_240 & 0xffffffff00000000;
  plocal_var_258 = &system_state_ptr;
  function_058020(&ppppppplocal_var_1a8);
  DataSerializationEngine(&plocal_var_210);
  DataSerializationEngine(&plocal_var_1c8);
  DataSerializationEngine(&plocal_var_1f0);
  DataTransformer0(&lStack_120);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_288);
  while( true ) {
    puVar20 = (uint64_t *)(uint64_t)(iVar7 + 1U);
    puVar17 = (uint64_t *)((int64_t)puVar17 + 1);
    if (uVar21 <= iVar7 + 1U) break;
LAB_1802895b3:
    iVar7 = (int)puVar20;
    if (*(char *)(puVar22[1] + (int64_t)puVar17) == '_') goto LAB_1802895ce;
  }
LAB_1802895c4:
  puVar17 = (uint64_t *)0xffffffffffffffff;
  iVar7 = -1;
LAB_1802895ce:
  uVar31 = iVar7 + 1;
  if (uVar31 < uVar21) {
    pcVar18 = (char *)((int64_t)puVar17 + puVar22[1] + 1);
    do {
      if (*pcVar18 == '_') goto LAB_1802895f6;
      uVar31 = uVar31 + 1;
      pcVar18 = pcVar18 + 1;
    } while (uVar31 < uVar21);
  }
  uVar31 = 0xffffffff;
LAB_1802895f6:
  iVar7 = uVar21 - 1;
  if (-1 < iVar7) {
    lVar12 = (int64_t)iVar7;
    do {
      if (*(char *)(puVar22[1] + lVar12) == '_') goto LAB_180289618;
      iVar7 = iVar7 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  iVar7 = -1;
LAB_180289618:
  RenderingSystem_StringParser(puVar22,&plocal_var_238,uVar31 + 1,iVar7);
  puVar17 = plocal_var_1c0;
  if (plocal_var_1c0 < plocal_var_1b8) {
    pplocal_var_170 = (void **)plocal_var_1c0;
    *plocal_var_1c0 = &system_state_ptr;
    plocal_var_1c0[1] = 0;
    *(int32_t *)(plocal_var_1c0 + 2) = 0;
    *plocal_var_1c0 = &system_data_buffer_ptr;
    plocal_var_1c0[3] = 0;
    plocal_var_1c0[1] = 0;
    *(int32_t *)(plocal_var_1c0 + 2) = 0;
    plocal_var_1c0 = plocal_var_1c0 + 4;
    CoreMemoryPoolProcessor(puVar17,local_var_228);
    if (local_var_228 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar17[1],plocal_var_230,local_var_228 + 1);
    }
    if (plocal_var_230 != (int8_t *)0x0) {
      *(int32_t *)(puVar17 + 2) = 0;
      if ((int8_t *)puVar17[1] != (int8_t *)0x0) {
        *(int8_t *)puVar17[1] = 0;
      }
      *(int32_t *)((int64_t)puVar17 + 0x1c) = 0;
    }
  }
  else {
    lVar12 = (int64_t)plocal_var_1c0 - (int64_t)plocal_var_1c8 >> 5;
    if (lVar12 == 0) {
      lVar12 = 1;
LAB_1802896e8:
      puVar13 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 << 5,(int8_t)local_var_1b0);
    }
    else {
      lVar12 = lVar12 * 2;
      if (lVar12 != 0) goto LAB_1802896e8;
    }
    lVar27 = SystemCore_Initializer(plocal_var_1c8,plocal_var_1c0,puVar13);
    SystemCore_NetworkHandler0(lVar27,&plocal_var_238);
    puVar20 = plocal_var_1c0;
    for (puVar17 = plocal_var_1c8; puVar17 != puVar20; puVar17 = puVar17 + 4) {
      (**(code **)*puVar17)(puVar17,0);
    }
    if (plocal_var_1c8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(plocal_var_1c8);
    }
    plocal_var_1b8 = puVar13 + lVar12 * 4;
    plocal_var_1c8 = puVar13;
    plocal_var_1c0 = (uint64_t *)(lVar27 + 0x20);
  }
  uVar28 = 0;
  pplocal_var_170 = &plocal_var_168;
  plocal_var_168 = &system_data_buffer_ptr;
  local_var_150 = 0;
  plocal_var_160 = (int8_t *)0x0;
  local_var_158 = 0;
  CoreMemoryPoolProcessor(&plocal_var_168,local_var_228);
  if (local_var_228 != 0) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_160,plocal_var_230,local_var_228 + 1);
  }
  if (plocal_var_230 != (int8_t *)0x0) {
    local_var_158 = 0;
    if (plocal_var_160 != (int8_t *)0x0) {
      *plocal_var_160 = 0;
    }
    local_var_150 = local_var_150 & 0xffffffff;
  }
  SystemCore_NetworkHandler0(stack_array_148,puVar22);
  lVar12 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x60,(int8_t)local_var_180);
  function_05caa0(lVar12 + 0x20,&plocal_var_168);
  pppppppuVar16 = &ppppppplocal_var_1a8;
  pppppppuVar24 = ppppppplocal_var_198;
  if (ppppppplocal_var_198 != (uint64_t *******)0x0) {
    do {
      pppppppuVar16 = pppppppuVar24;
      if (*(int *)(pppppppuVar16 + 6) == 0) {
LAB_18028988d:
        pppppppuVar24 = (uint64_t *******)*pppppppuVar16;
      }
      else {
        if (*(int *)(lVar12 + 0x30) != 0) {
          ppppppuVar14 = pppppppuVar16[5];
          lVar27 = *(int64_t *)(lVar12 + 0x28) - (int64_t)ppppppuVar14;
          do {
            bVar2 = *(byte *)ppppppuVar14;
            uVar21 = (uint)*(byte *)((int64_t)ppppppuVar14 + lVar27);
            if (bVar2 != uVar21) break;
            ppppppuVar14 = (uint64_t ******)((int64_t)ppppppuVar14 + 1);
          } while (uVar21 != 0);
          if ((int)(bVar2 - uVar21) < 1) goto LAB_18028988d;
        }
        pppppppuVar24 = (uint64_t *******)pppppppuVar16[1];
      }
    } while (pppppppuVar24 != (uint64_t *******)0x0);
    if ((uint64_t ********)pppppppuVar16 != &ppppppplocal_var_1a8) {
      if (*(int *)(pppppppuVar16 + 6) != 0) {
        if (*(int *)(lVar12 + 0x30) == 0) goto LAB_1802898d6;
        ppppppuVar14 = pppppppuVar16[5];
        lVar27 = *(int64_t *)(lVar12 + 0x28) - (int64_t)ppppppuVar14;
        do {
          bVar2 = *(byte *)ppppppuVar14;
          uVar21 = (uint)*(byte *)((int64_t)ppppppuVar14 + lVar27);
          if (bVar2 != uVar21) break;
          ppppppuVar14 = (uint64_t ******)((int64_t)ppppppuVar14 + 1);
        } while (uVar21 != 0);
        if (0 < (int)(bVar2 - uVar21)) goto LAB_1802898d6;
      }
      uVar28 = 1;
    }
  }
LAB_1802898d6:
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar12,pppppppuVar16,&ppppppplocal_var_1a8,uVar28);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address