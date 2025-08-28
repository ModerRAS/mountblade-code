#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part235.c - 4 个函数
// 函数: void RenderingSystem_9cb40(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void RenderingSystem_9cb40(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int32_t param_5)
{
  uint64_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  void *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int32_t uVar14;
  int8_t stack_array_978 [32];
  int8_t *plocal_var_958;
  int32_t local_var_950;
  uint64_t local_var_948;
  uint local_var_938;
  uint local_var_934;
  int64_t lStack_930;
  int64_t lStack_928;
  uint64_t local_var_920;
  int16_t local_var_918;
  int8_t local_var_916;
  uint local_var_910;
  int iStack_90c;
  uint local_var_908;
  uint local_var_904;
  uint local_var_900;
  uint local_var_8fc;
  uint local_var_8f8;
  uint local_var_8f4;
  uint local_var_8f0;
  uint local_var_8ec;
  uint local_var_8e8;
  uint local_var_8e4;
  int64_t lStack_8e0;
  uint64_t *plocal_var_8d0;
  uint64_t *plocal_var_8c8;
  uint64_t *plocal_var_8c0;
  int32_t local_var_8b8;
  uint64_t local_var_8b0;
  uint64_t local_var_8a8;
  void *plocal_var_898;
  int8_t *plocal_var_890;
  int32_t local_var_888;
  int8_t stack_array_880 [264];
  void *plocal_var_778;
  int8_t *plocal_var_770;
  int32_t local_var_768;
  int8_t stack_array_760 [264];
  uint64_t local_var_658;
  uint64_t local_var_650;
  uint64_t local_var_648;
  uint64_t local_var_640;
  uint64_t local_var_638;
  uint64_t local_var_630;
  uint64_t local_var_628;
  uint64_t local_var_620;
  uint64_t local_var_618;
  uint64_t local_var_610;
  uint64_t local_var_608;
  uint64_t local_var_600;
  uint64_t local_var_5f8;
  uint64_t local_var_5f0;
  uint64_t local_var_5e8;
  uint64_t local_var_5e0;
  int32_t local_var_5d8;
  int32_t local_var_5d4;
  int32_t local_var_5d0;
  int32_t local_var_5cc;
  int32_t local_var_5c8;
  int32_t local_var_5c4;
  int32_t local_var_5c0;
  int32_t local_var_5bc;
  void *aplocal_var_5b8 [68];
  char acStack_398 [288];
  int8_t stack_array_278 [560];
  uint64_t local_var_48;
  local_var_8a8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_978;
  lStack_930 = 0;
  lStack_928 = 0;
  puVar8 = (uint64_t *)0x0;
  local_var_920 = 0;
  local_var_918 = 0;
  local_var_916 = 3;
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_3 + 8);
  }
  local_var_8b0 = param_4;
  RenderingEngine_BufferManager(acStack_398,&memory_allocator_3896_ptr,puVar6);
  lStack_8e0 = 0xffffffffffffffff;
  plocal_var_778 = &rendering_buffer_2008_ptr;
  plocal_var_770 = stack_array_760;
  stack_array_760[0] = 0;
  lVar4 = -1;
  do {
    lVar3 = lVar4 + 1;
    lVar9 = lVar4 + 1;
    lVar4 = lVar3;
  } while (acStack_398[lVar9] != '\0');
  local_var_768 = (int32_t)lVar3;
  strcpy_s(stack_array_760,0x100,acStack_398);
  lVar4 = SystemCore_EncryptionEngine(aplocal_var_5b8,&plocal_var_778);
  plocal_var_898 = &rendering_buffer_2008_ptr;
  plocal_var_890 = stack_array_880;
  stack_array_880[0] = 0;
  local_var_888 = *(int32_t *)(lVar4 + 0x10);
  puVar6 = &system_buffer_ptr;
  if (*(void **)(lVar4 + 8) != (void *)0x0) {
    puVar6 = *(void **)(lVar4 + 8);
  }
  strcpy_s(stack_array_880,0x100,puVar6);
  aplocal_var_5b8[0] = &system_state_ptr;
  plocal_var_778 = &system_state_ptr;
  local_var_950 = 0x118;
  plocal_var_958 = stack_array_278;
  MultiByteToWideChar(0xfde9,0,plocal_var_890,0xffffffff);
  local_var_948 = 0;
  local_var_950 = 0x80;
  plocal_var_958 = (int8_t *)CONCAT44(plocal_var_958._4_4_,3);
  lVar4 = CreateFileW(stack_array_278,0x80000000,1);
  lStack_8e0 = lVar4;
  if (lVar4 == -1) {
    GetLastError();
  }
  else {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + 1;
    UNLOCK();
  }
  plocal_var_898 = &system_state_ptr;
  plocal_var_8d0 = (uint64_t *)0x0;
  plocal_var_8c8 = (uint64_t *)0x0;
  plocal_var_8c0 = (uint64_t *)0x0;
  local_var_8b8 = 3;
  if (lVar4 != -1) {
    iStack_90c = 0;
    puVar7 = puVar8;
    do {
      uVar10 = 0x1000000;
      if (4U - (int64_t)puVar7 < 0x1000000) {
        uVar10 = 4U - (int64_t)puVar7 & 0xffffffff;
      }
      local_var_910 = 0;
      plocal_var_958 = (int8_t *)0x0;
      iVar2 = ReadFile(lVar4,(int64_t)&iStack_90c + (int64_t)puVar7,uVar10,&local_var_910);
    } while (((iVar2 != 0) && (local_var_910 != 0)) &&
            (puVar7 = (uint64_t *)((int64_t)puVar7 + (uint64_t)local_var_910),
            puVar7 < (uint64_t *)0x4));
    if (iStack_90c == 0x31524c46) {
      local_var_934 = 0;
      puVar7 = puVar8;
      do {
        uVar10 = 0x1000000;
        if (4U - (int64_t)puVar7 < 0x1000000) {
          uVar10 = 4U - (int64_t)puVar7 & 0xffffffff;
        }
        local_var_908 = 0;
        plocal_var_958 = (int8_t *)0x0;
        iVar2 = ReadFile(lVar4,(int64_t)&local_var_934 + (int64_t)puVar7,uVar10,&local_var_908);
      } while (((iVar2 != 0) && (local_var_908 != 0)) &&
              (puVar7 = (uint64_t *)((int64_t)puVar7 + (uint64_t)local_var_908),
              puVar7 < (uint64_t *)0x4));
      local_var_938 = 0;
      puVar7 = plocal_var_8d0;
      if (local_var_934 != 0) {
        do {
          puVar1 = plocal_var_8c8;
          uVar10 = 0;
          do {
            uVar11 = 0x1000000;
            if (0x98 - uVar10 < 0x1000000) {
              uVar11 = 0x98 - uVar10 & 0xffffffff;
            }
            local_var_904 = 0;
            plocal_var_958 = (int8_t *)0x0;
            iVar2 = ReadFile(lVar4,(int64_t)&local_var_658 + uVar10,uVar11,&local_var_904);
          } while (((iVar2 != 0) && (local_var_904 != 0)) &&
                  (uVar10 = uVar10 + local_var_904, uVar10 < 0x98));
          if (puVar1 < puVar8) {
            *puVar1 = local_var_658;
            puVar1[1] = local_var_650;
            puVar1[2] = local_var_648;
            puVar1[3] = local_var_640;
            puVar1[4] = local_var_638;
            puVar1[5] = local_var_630;
            puVar1[6] = local_var_628;
            puVar1[7] = local_var_620;
            puVar1[8] = local_var_618;
            puVar1[9] = local_var_610;
            puVar1[10] = local_var_608;
            puVar1[0xb] = local_var_600;
            puVar1[0xc] = local_var_5f8;
            puVar1[0xd] = local_var_5f0;
            puVar1[0xe] = local_var_5e8;
            puVar1[0xf] = local_var_5e0;
            *(int32_t *)(puVar1 + 0x10) = local_var_5d8;
            *(int32_t *)((int64_t)puVar1 + 0x84) = local_var_5d4;
            *(int32_t *)(puVar1 + 0x11) = local_var_5d0;
            *(int32_t *)((int64_t)puVar1 + 0x8c) = local_var_5cc;
            puVar1[0x12] = CONCAT44(local_var_5c4,local_var_5c8);
            puVar1[0x13] = CONCAT44(local_var_5bc,local_var_5c0);
            puVar5 = puVar7;
          }
          else {
            lVar9 = ((int64_t)puVar1 - (int64_t)puVar7) / 0xa0;
            if (lVar9 == 0) {
              lVar9 = 1;
LAB_18039cf3a:
              puVar5 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 0xa0,3);
            }
            else {
              lVar9 = lVar9 * 2;
              if (lVar9 != 0) goto LAB_18039cf3a;
              puVar5 = (uint64_t *)0x0;
            }
            if (puVar7 != puVar1) {
// WARNING: Subroutine does not return
              memmove(puVar5,puVar7,(int64_t)puVar1 - (int64_t)puVar7);
            }
            *puVar5 = local_var_658;
            puVar5[1] = local_var_650;
            puVar5[2] = local_var_648;
            puVar5[3] = local_var_640;
            puVar5[4] = local_var_638;
            puVar5[5] = local_var_630;
            puVar5[6] = local_var_628;
            puVar5[7] = local_var_620;
            puVar5[8] = local_var_618;
            puVar5[9] = local_var_610;
            puVar5[10] = local_var_608;
            puVar5[0xb] = local_var_600;
            puVar5[0xc] = local_var_5f8;
            puVar5[0xd] = local_var_5f0;
            puVar5[0xe] = local_var_5e8;
            puVar5[0xf] = local_var_5e0;
            *(int32_t *)(puVar5 + 0x10) = local_var_5d8;
            *(int32_t *)((int64_t)puVar5 + 0x84) = local_var_5d4;
            *(int32_t *)(puVar5 + 0x11) = local_var_5d0;
            *(int32_t *)((int64_t)puVar5 + 0x8c) = local_var_5cc;
            *(int32_t *)(puVar5 + 0x12) = local_var_5c8;
            *(int32_t *)((int64_t)puVar5 + 0x94) = local_var_5c4;
            *(int32_t *)(puVar5 + 0x13) = local_var_5c0;
            *(int32_t *)((int64_t)puVar5 + 0x9c) = local_var_5bc;
            if (puVar7 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(puVar7);
            }
            puVar8 = puVar5 + lVar9 * 0x14;
            plocal_var_8d0 = puVar5;
            plocal_var_8c0 = puVar8;
            puVar1 = puVar5;
          }
          plocal_var_8c8 = puVar1 + 0x14;
          local_var_938 = local_var_938 + 1;
          param_4 = local_var_8b0;
          puVar7 = puVar5;
        } while (local_var_938 < local_var_934);
      }
      uVar11 = 0;
      local_var_900 = 0;
      uVar10 = uVar11;
      do {
        uVar12 = 0x1000000;
        if (4 - uVar10 < 0x1000000) {
          uVar12 = 4 - uVar10 & 0xffffffff;
        }
        local_var_938 = 0;
        plocal_var_958 = (int8_t *)0x0;
        iVar2 = ReadFile(lVar4,(int64_t)&local_var_900 + uVar10,uVar12,&local_var_938);
      } while (((iVar2 != 0) && (local_var_938 != 0)) && (uVar10 = uVar10 + local_var_938, uVar10 < 4));
      if (local_var_900 != 0) {
        uVar12 = (uint64_t)local_var_900;
        System_BufferManager(&lStack_930,local_var_900);
        lVar9 = lStack_928;
        uVar10 = uVar11;
        if (uVar12 != 0) {
          do {
            uVar13 = 0x1000000;
            if (uVar12 - uVar10 < 0x1000000) {
              uVar13 = uVar12 - uVar10 & 0xffffffff;
            }
            local_var_8fc = 0;
            plocal_var_958 = (int8_t *)0x0;
            iVar2 = ReadFile(lVar4,lVar9 + uVar10,uVar13,&local_var_8fc);
          } while (((iVar2 != 0) && (local_var_8fc != 0)) &&
                  (uVar10 = uVar10 + local_var_8fc, uVar10 < uVar12));
        }
      }
      lVar9 = lStack_930;
      lStack_928 = lStack_930;
      uVar10 = uVar11;
      do {
        uVar12 = 0x1000000;
        if (4 - uVar10 < 0x1000000) {
          uVar12 = 4 - uVar10 & 0xffffffff;
        }
        local_var_8f8 = 0;
        plocal_var_958 = (int8_t *)0x0;
        iVar2 = ReadFile(lVar4,(int64_t)&local_var_8f4 + uVar10,uVar12,&local_var_8f8);
      } while (((iVar2 != 0) && (local_var_8f8 != 0)) && (uVar10 = uVar10 + local_var_8f8, uVar10 < 4));
      uVar10 = (uint64_t)local_var_8f4;
      lVar3 = lVar9;
      if (local_var_920 < uVar10) {
        System_BufferManager(&lStack_930,local_var_8f4);
        uVar10 = (uint64_t)local_var_8f4;
        lVar9 = lStack_928;
        lVar3 = lStack_930;
      }
      if ((int)uVar10 != 0) {
        if ((local_var_920 - lVar9) + lVar3 <= uVar10) {
          System_BufferManager(&lStack_930,uVar10 + (lVar9 - lVar3));
          lVar9 = lStack_928;
        }
        if (uVar10 != 0) {
          do {
            uVar12 = 0x1000000;
            if (uVar10 - uVar11 < 0x1000000) {
              uVar12 = uVar10 - uVar11 & 0xffffffff;
            }
            local_var_8f0 = 0;
            plocal_var_958 = (int8_t *)0x0;
            iVar2 = ReadFile(lVar4,lVar9 + uVar11,uVar12,&local_var_8f0);
          } while (((iVar2 != 0) && (local_var_8f0 != 0)) &&
                  (uVar11 = uVar11 + local_var_8f0, uVar11 < uVar10));
        }
      }
    }
    else {
      puVar7 = puVar8;
      if (iStack_90c != 0x32524c46) goto LAB_18039d347;
      do {
        uVar10 = 0x1000000;
        if (4U - (int64_t)puVar7 < 0x1000000) {
          uVar10 = 4U - (int64_t)puVar7 & 0xffffffff;
        }
        local_var_8ec = 0;
        plocal_var_958 = (int8_t *)0x0;
        iVar2 = ReadFile(lVar4,(int64_t)&local_var_8e8 + (int64_t)puVar7,uVar10,&local_var_8ec);
      } while (((iVar2 != 0) && (local_var_8ec != 0)) &&
              (puVar7 = (uint64_t *)((int64_t)puVar7 + (uint64_t)local_var_8ec),
              puVar7 < (uint64_t *)0x4));
      if ((local_var_8e8 != 0) && (System_BufferManager(&lStack_930,local_var_8e8), local_var_8e8 != 0)) {
        puVar7 = (uint64_t *)(uint64_t)local_var_8e8;
        if ((uint64_t *)((local_var_920 - lStack_928) + lStack_930) <= puVar7) {
          System_BufferManager(&lStack_930,(int64_t)puVar7 + (lStack_928 - lStack_930));
        }
        lVar9 = lStack_928;
        if (puVar7 != (uint64_t *)0x0) {
          do {
            uVar10 = 0x1000000;
            if ((uint64_t)((int64_t)puVar7 - (int64_t)puVar8) < 0x1000000) {
              uVar10 = (int64_t)puVar7 - (int64_t)puVar8 & 0xffffffff;
            }
            local_var_8e4 = 0;
            plocal_var_958 = (int8_t *)0x0;
            iVar2 = ReadFile(lVar4,lVar9 + (int64_t)puVar8,uVar10,&local_var_8e4);
          } while (((iVar2 != 0) && (local_var_8e4 != 0)) &&
                  (puVar8 = (uint64_t *)((int64_t)puVar8 + (uint64_t)local_var_8e4),
                  puVar8 < puVar7));
        }
      }
    }
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    uVar14 = CloseHandle(lStack_8e0);
    lVar4 = -1;
    lStack_8e0 = -1;
    RenderingSystem_9bee0(uVar14,&lStack_930,param_4,param_5);
  }
LAB_18039d347:
  if (plocal_var_8d0 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (lVar4 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(lStack_8e0);
    lStack_8e0 = -1;
  }
  if (((char)local_var_918 == '\0') && (lStack_930 != 0)) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_978);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_9d3d0(int64_t param_1,int64_t param_2,void *param_3)
void RenderingSystem_9d3d0(int64_t param_1,int64_t param_2,void *param_3)
{
  uint64_t *puVar1;
  char *pcVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  char *pcVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int iVar9;
  void *puVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int32_t uVar18;
  uVar14 = 0xfffffffffffffffe;
  pcVar12 = "layer";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  puVar6 = *(uint64_t **)(param_2 + 0x30);
  puVar10 = param_3;
LAB_18039d41c:
  if (puVar6 == (uint64_t *)0x0) {
    iVar9 = 0;
  }
  else {
    pcVar12 = (char *)*puVar6;
    if (pcVar12 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar12 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 != pcVar11 + -0x180a2246b) goto LAB_18039d49e;
    pcVar2 = pcVar12 + (int64_t)pcVar2;
    if (pcVar12 < pcVar2) {
      puVar10 = &processed_var_7100_ptr + -(int64_t)pcVar12;
      while (*pcVar12 == puVar10[(int64_t)pcVar12]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar2 <= pcVar12) goto LAB_18039d461;
      }
      goto LAB_18039d49e;
    }
LAB_18039d461:
    iVar9 = 0;
LAB_18039d470:
    iVar9 = iVar9 + 1;
    pcVar12 = "layer";
    do {
      pcVar11 = pcVar12;
      pcVar12 = pcVar11 + 1;
    } while (*pcVar12 != '\0');
    puVar6 = (uint64_t *)puVar6[0xb];
    if (puVar6 != (uint64_t *)0x0) {
      do {
        pcVar12 = (char *)*puVar6;
        if (pcVar12 == (char *)0x0) {
          pcVar5 = (char *)0x0;
          pcVar12 = (char *)0x180d48d24;
        }
        else {
          pcVar5 = (char *)puVar6[2];
        }
        if (pcVar5 == pcVar11 + -0x180a2246b) {
          pcVar2 = pcVar5 + (int64_t)pcVar12;
          if (pcVar2 <= pcVar12) goto LAB_18039d470;
          puVar10 = &processed_var_7100_ptr + -(int64_t)pcVar12;
          while (*pcVar12 == puVar10[(int64_t)pcVar12]) {
            pcVar12 = pcVar12 + 1;
            if (pcVar2 <= pcVar12) goto LAB_18039d470;
          }
        }
        puVar6 = (uint64_t *)puVar6[0xb];
        if (puVar6 == (uint64_t *)0x0) break;
      } while( true );
    }
    if (0x10 < iVar9) {
      iVar9 = 0x10;
      SystemCore_ResourceManager0(&processed_var_7176_ptr,0x10,puVar10,pcVar2,0xfffffffffffffffe);
    }
  }
  GenericFunction_180057340((int64_t *)(param_1 + 0x230),(int64_t)iVar9);
  puVar15 = (uint64_t *)0x0;
  puVar16 = (uint64_t *)0x0;
  puVar6 = (uint64_t *)0x0;
  puVar17 = (uint64_t *)0x0;
  uVar18 = 3;
  pcVar12 = "layer";
  do {
    pcVar11 = pcVar12;
    pcVar12 = pcVar11 + 1;
  } while (*pcVar12 != '\0');
  pcVar11 = pcVar11 + -0x180a2246b;
  for (puVar8 = *(uint64_t **)(param_2 + 0x30); puVar8 != (uint64_t *)0x0;
      puVar8 = (uint64_t *)puVar8[0xb]) {
    pcVar12 = (char *)*puVar8;
    if (pcVar12 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar12 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar8[2];
    }
    if (pcVar2 == pcVar11) {
      pcVar2 = pcVar2 + (int64_t)pcVar12;
      if (pcVar2 <= pcVar12) goto LAB_18039d59d;
      lVar7 = (int64_t)&processed_var_7100_ptr - (int64_t)pcVar12;
      while (*pcVar12 == pcVar12[lVar7]) {
        pcVar12 = pcVar12 + 1;
        if (pcVar2 <= pcVar12) goto LAB_18039d59d;
      }
    }
  }
  puVar8 = (uint64_t *)0x0;
LAB_18039d59d:
  iVar13 = 0;
  puVar1 = (uint64_t *)0x0;
  do {
    if ((puVar8 == (uint64_t *)0x0) || (iVar9 <= iVar13)) {
      iVar9 = (int)((int64_t)puVar16 - (int64_t)puVar1 >> 3);
      if (0 < iVar9) {
        lVar7 = 0;
        do {
          uVar14 = puVar1[lVar7];
          lVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3);
          *(uint64_t *)(lVar4 + 0x28) = &system_state_ptr;
          *(uint64_t *)(lVar4 + 0x30) = 0;
          *(int32_t *)(lVar4 + 0x38) = 0;
          *(uint64_t *)(lVar4 + 0x28) = &system_data_buffer_ptr;
          *(uint64_t *)(lVar4 + 0x40) = 0;
          *(uint64_t *)(lVar4 + 0x30) = 0;
          *(int32_t *)(lVar4 + 0x38) = 0;
          GenericFunction_1801fe1c0(lVar4);
          GenericFunction_1801fdf50(lVar4,param_3,uVar14);
          *(int64_t *)(*(int64_t *)(param_1 + 0x230) + lVar7 * 8) = lVar4;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar9);
      }
      if (puVar1 == (uint64_t *)0x0) {
        return;
      }
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar1);
    }
    if (puVar16 < puVar6) {
      *puVar16 = puVar8;
      puVar3 = puVar1;
    }
    else {
      lVar7 = (int64_t)puVar16 - (int64_t)puVar1 >> 3;
      if (lVar7 == 0) {
        lVar7 = 1;
LAB_18039d5f9:
        puVar3 = (uint64_t *)
                 CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,3,pcVar11,uVar14,puVar15,puVar16,puVar17,
                               uVar18);
      }
      else {
        lVar7 = lVar7 * 2;
        if (lVar7 != 0) goto LAB_18039d5f9;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar1 != puVar16) {
// WARNING: Subroutine does not return
        memmove(puVar3,puVar1,(int64_t)puVar16 - (int64_t)puVar1);
      }
      *puVar3 = puVar8;
      if (puVar1 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(puVar1);
      }
      puVar6 = puVar3 + lVar7;
      puVar15 = puVar3;
      puVar17 = puVar6;
      puVar16 = puVar3;
    }
    puVar16 = puVar16 + 1;
    pcVar12 = "layer";
    do {
      pcVar11 = pcVar12;
      pcVar12 = pcVar11 + 1;
    } while (*pcVar12 != '\0');
    pcVar11 = pcVar11 + -0x180a2246b;
    for (puVar8 = (uint64_t *)puVar8[0xb]; puVar8 != (uint64_t *)0x0;
        puVar8 = (uint64_t *)puVar8[0xb]) {
      pcVar12 = (char *)*puVar8;
      if (pcVar12 == (char *)0x0) {
        pcVar2 = (char *)0x0;
        pcVar12 = (char *)0x180d48d24;
      }
      else {
        pcVar2 = (char *)puVar8[2];
      }
      if (pcVar2 == pcVar11) {
        pcVar2 = pcVar2 + (int64_t)pcVar12;
        if (pcVar2 <= pcVar12) goto LAB_18039d6cd;
        lVar7 = (int64_t)&processed_var_7100_ptr - (int64_t)pcVar12;
        while (*pcVar12 == pcVar12[lVar7]) {
          pcVar12 = pcVar12 + 1;
          if (pcVar2 <= pcVar12) goto LAB_18039d6cd;
        }
      }
    }
    puVar8 = (uint64_t *)0x0;
LAB_18039d6cd:
    iVar13 = iVar13 + 1;
    puVar1 = puVar3;
  } while( true );
LAB_18039d49e:
  puVar6 = (uint64_t *)puVar6[0xb];
  goto LAB_18039d41c;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_9d7b0(int64_t param_1,int64_t *param_2,uint64_t param_3)
void RenderingSystem_9d7b0(int64_t param_1,int64_t *param_2,uint64_t param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int32_t *puVar13;
  int *piVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  int iVar17;
  int64_t lVar18;
  int iVar19;
  int8_t stack_array_348 [32];
  int64_t lStack_328;
  uint64_t local_var_320;
  uint64_t local_var_318;
  int32_t local_var_310;
  int32_t local_var_30c;
  int32_t local_var_308;
  int32_t local_var_304;
  int32_t local_var_300;
  int32_t local_var_2fc;
  int32_t local_var_2f8;
  int32_t local_var_2f4;
  int32_t local_var_2f0;
  int32_t local_var_2ec;
  int32_t local_var_2e8;
  int32_t local_var_2e4;
  int32_t local_var_2e0;
  int32_t local_var_2dc;
  int32_t local_var_2d8;
  int32_t local_var_2d4;
  int32_t local_var_2d0;
  int32_t local_var_2cc;
  int32_t local_var_2c8;
  int32_t local_var_2c4;
  int32_t local_var_2c0;
  int32_t local_var_2bc;
  int8_t stack_array_2a8 [528];
  uint64_t local_var_98;
  local_var_98 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_348;
  lVar18 = *(int64_t *)(param_1 + 0x238);
  lVar16 = *(int64_t *)(param_1 + 0x230);
  puVar13 = (int32_t *)param_2[1];
  local_var_320 = param_3;
  if ((uint64_t)((*param_2 - (int64_t)puVar13) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar13 + (4 - *param_2));
    puVar13 = (int32_t *)param_2[1];
  }
  *puVar13 = (int)(lVar18 - lVar16 >> 3);
  piVar14 = (int *)(param_2[1] + 4);
  param_2[1] = (int64_t)piVar14;
  iVar19 = *(int *)(param_1 + 0x148);
  iVar17 = *(int *)(param_1 + 0x14c);
  if ((uint64_t)((*param_2 - (int64_t)piVar14) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar14 + (4 - *param_2));
    piVar14 = (int *)param_2[1];
  }
  *piVar14 = iVar19 * iVar17;
  iVar19 = 0;
  param_2[1] = param_2[1] + 4;
  if (0 < *(int *)(param_1 + 0x148)) {
    lVar18 = 0;
    do {
      iVar17 = 0;
      if (0 < *(int *)(param_1 + 0x14c)) {
        puVar15 = (uint64_t *)param_2[1];
        lVar16 = lVar18;
        do {
          lVar2 = *(int64_t *)(param_1 + 0x250);
          local_var_318 = *(uint64_t *)(lVar16 + lVar2);
          uVar3 = ((uint64_t *)(lVar16 + lVar2))[1];
          puVar1 = (uint64_t *)(lVar16 + 0x10 + lVar2);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          local_var_310 = (int32_t)uVar3;
          local_var_30c = (int32_t)((uint64_t)uVar3 >> 0x20);
          puVar1 = (uint64_t *)(lVar16 + 0x20 + lVar2);
          uVar3 = *puVar1;
          uVar6 = puVar1[1];
          local_var_308 = (int32_t)uVar4;
          local_var_304 = (int32_t)((uint64_t)uVar4 >> 0x20);
          local_var_300 = (int32_t)uVar5;
          local_var_2fc = (int32_t)((uint64_t)uVar5 >> 0x20);
          puVar1 = (uint64_t *)(lVar16 + 0x30 + lVar2);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uVar7 = CONCAT44(local_var_308,local_var_30c);
          uVar8 = CONCAT44(local_var_300,local_var_304);
          local_var_2f8 = (int32_t)uVar3;
          local_var_2f4 = (int32_t)((uint64_t)uVar3 >> 0x20);
          local_var_2f0 = (int32_t)uVar6;
          local_var_2ec = (int32_t)((uint64_t)uVar6 >> 0x20);
          puVar13 = (int32_t *)(lVar16 + 0x40 + lVar2);
          local_var_2d8 = *puVar13;
          local_var_2d4 = puVar13[1];
          local_var_2d0 = puVar13[2];
          uVar12 = *(uint64_t *)(puVar13 + 1);
          local_var_2cc = puVar13[3];
          uVar3 = CONCAT44(local_var_2f8,local_var_2fc);
          uVar6 = CONCAT44(local_var_2f0,local_var_2f4);
          local_var_2e8 = (int32_t)uVar4;
          local_var_2e4 = (int32_t)((uint64_t)uVar4 >> 0x20);
          local_var_2e0 = (int32_t)uVar5;
          local_var_2dc = (int32_t)((uint64_t)uVar5 >> 0x20);
          puVar13 = (int32_t *)(lVar16 + 0x50 + lVar2);
          local_var_2c8 = *puVar13;
          local_var_2c4 = puVar13[1];
          local_var_2c0 = puVar13[2];
          uVar11 = *(uint64_t *)(puVar13 + 1);
          local_var_2bc = puVar13[3];
          uVar4 = CONCAT44(local_var_2e8,local_var_2ec);
          uVar5 = CONCAT44(local_var_2e0,local_var_2e4);
          uVar10 = CONCAT44(local_var_2c8,local_var_2cc);
          uVar9 = CONCAT44(local_var_2d8,local_var_2dc);
          if ((uint64_t)((*param_2 - (int64_t)puVar15) + param_2[2]) < 0x51) {
            System_BufferManager(param_2,(int64_t)puVar15 + (0x50 - *param_2));
            puVar15 = (uint64_t *)param_2[1];
          }
          *puVar15 = uVar10;
          puVar15[1] = uVar11;
          iVar17 = iVar17 + 1;
          lVar16 = lVar16 + 0x6c;
          puVar15[2] = uVar7;
          puVar15[3] = uVar8;
          puVar15[4] = uVar3;
          puVar15[5] = uVar6;
          puVar15[6] = uVar4;
          puVar15[7] = uVar5;
          puVar15[8] = uVar9;
          puVar15[9] = uVar12;
          param_2[1] = param_2[1] + 0x50;
          puVar15 = (uint64_t *)param_2[1];
        } while (iVar17 < *(int *)(param_1 + 0x14c));
      }
      iVar19 = iVar19 + 1;
      lVar18 = lVar18 + 0x6c0;
    } while (iVar19 < *(int *)(param_1 + 0x148));
  }
  lStack_328 = 0;
  do {
    if (*(int64_t *)(param_1 + 0x238) - *(int64_t *)(param_1 + 0x230) >> 3 != 0) {
// WARNING: Subroutine does not return
      memset(stack_array_2a8,0,0x210);
    }
    lStack_328 = lStack_328 + 8;
  } while (lStack_328 < 0x20);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)stack_array_348);
}
// 函数: void RenderingSystem_9d889(void)
void RenderingSystem_9d889(void)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int iVar16;
  uint64_t in_R9;
  int64_t lVar17;
  int unaff_R14D;
  int64_t unaff_R15;
  int32_t local_buffer_3c;
  int32_t local_buffer_40;
  int32_t local_buffer_44;
  int32_t local_buffer_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_5c;
  int32_t local_buffer_60;
  int32_t local_buffer_64;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  int32_t local_buffer_80;
  uint64_t local_buffer_84;
  lVar17 = 0;
  do {
    iVar16 = 0;
    if (0 < *(int *)(unaff_R15 + 0x14c)) {
      puVar14 = (uint64_t *)unaff_RSI[1];
      lVar15 = lVar17;
      do {
        lVar3 = *(int64_t *)(unaff_R15 + 0x250);
        lVar4 = *unaff_RSI;
        puVar1 = (uint64_t *)(lVar15 + 0x10 + lVar3);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        local_buffer_3c =
             (int32_t)((uint64_t)*(uint64_t *)(lVar15 + lVar3 + 8) >> 0x20);
        puVar1 = (uint64_t *)(lVar15 + 0x20 + lVar3);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        local_buffer_40 = (int32_t)uVar10;
        local_buffer_44 = (int32_t)((uint64_t)uVar10 >> 0x20);
        local_buffer_48 = (int32_t)uVar11;
        local_buffer_4c = (int32_t)((uint64_t)uVar11 >> 0x20);
        puVar1 = (uint64_t *)(lVar15 + 0x30 + lVar3);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        local_buffer_50 = (int32_t)uVar12;
        local_buffer_54 = (int32_t)((uint64_t)uVar12 >> 0x20);
        local_buffer_58 = (int32_t)uVar13;
        local_buffer_5c = (int32_t)((uint64_t)uVar13 >> 0x20);
        puVar2 = (int32_t *)(lVar15 + 0x40 + lVar3);
        uVar5 = *puVar2;
        uVar12 = *(uint64_t *)(puVar2 + 1);
        uVar6 = puVar2[3];
        local_buffer_60 = (int32_t)uVar10;
        local_buffer_64 = (int32_t)((uint64_t)uVar10 >> 0x20);
        local_buffer_68 = (int32_t)uVar11;
        local_buffer_6c = (int32_t)((uint64_t)uVar11 >> 0x20);
        puVar2 = (int32_t *)(lVar15 + 0x50 + lVar3);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        lVar3 = unaff_RSI[2];
        *(int32_t *)(unaff_RBP + -0x80) = *puVar2;
        *(int32_t *)(unaff_RBP + -0x7c) = uVar7;
        *(int32_t *)(unaff_RBP + -0x78) = uVar8;
        *(int32_t *)(unaff_RBP + -0x74) = uVar9;
        if ((uint64_t)((lVar4 - (int64_t)puVar14) + lVar3) < 0x51) {
          System_BufferManager(uVar5,(int64_t)puVar14 + (0x50 - lVar4));
          puVar14 = (uint64_t *)unaff_RSI[1];
        }
        *puVar14 = CONCAT44(local_buffer_80,uVar6);
        puVar14[1] = local_buffer_84;
        iVar16 = iVar16 + 1;
        lVar15 = lVar15 + 0x6c;
        puVar14[2] = CONCAT44(local_buffer_40,local_buffer_3c);
        puVar14[3] = CONCAT44(local_buffer_48,local_buffer_44);
        puVar14[4] = CONCAT44(local_buffer_50,local_buffer_4c);
        puVar14[5] = CONCAT44(local_buffer_58,local_buffer_54);
        puVar14[6] = CONCAT44(local_buffer_60,local_buffer_5c);
        puVar14[7] = CONCAT44(local_buffer_68,local_buffer_64);
        puVar14[8] = CONCAT44(uVar5,local_buffer_6c);
        puVar14[9] = uVar12;
        unaff_RSI[1] = unaff_RSI[1] + 0x50;
        puVar14 = (uint64_t *)unaff_RSI[1];
      } while (iVar16 < *(int *)(unaff_R15 + 0x14c));
    }
    unaff_R14D = unaff_R14D + 1;
    lVar17 = lVar17 + 0x6c0;
  } while (unaff_R14D < *(int *)(unaff_R15 + 0x148));
  lVar17 = 0;
  do {
    if (*(int64_t *)(unaff_R15 + 0x238) - *(int64_t *)(unaff_R15 + 0x230) >> 3 != 0) {
// WARNING: Subroutine does not return
      memset(unaff_RBP + -0x60,0,0x210,in_R9,lVar17);
    }
    lVar17 = lVar17 + 8;
  } while (lVar17 < 0x20);
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1b0) ^ (uint64_t)&local_buffer_00000000);
}