#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_07_part027.c - 4 个函数
// 函数: void function_4b5ce0(int64_t param_1,int64_t param_2)
void function_4b5ce0(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  pcVar14 = (char *)0x0;
  uVar13 = 0;
  *(int32_t *)(param_1 + 0x390) = 0;
  pcVar11 = "beard_meshes";
  do {
    pcVar12 = pcVar11;
    pcVar11 = pcVar12 + 1;
  } while (*pcVar11 != '\0');
  puVar1 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar1 == (uint64_t *)0x0) {
      return;
    }
    pcVar11 = (char *)*puVar1;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar10 = pcVar14;
    }
    else {
      pcVar10 = (char *)puVar1[2];
    }
    if (pcVar10 == pcVar12 + -0x180a2e707) {
      pcVar10 = pcVar10 + (int64_t)pcVar11;
      if (pcVar10 <= pcVar11) {
LAB_1804b5d78:
        pcVar11 = "beard_mesh";
        do {
          pcVar12 = pcVar11;
          pcVar11 = pcVar12 + 1;
        } while (*pcVar11 != '\0');
        for (puVar7 = (uint64_t *)puVar1[6]; puVar7 != (uint64_t *)0x0;
            puVar7 = (uint64_t *)puVar7[0xb]) {
          pcVar11 = (char *)*puVar7;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
            pcVar4 = pcVar14;
          }
          else {
            pcVar4 = (char *)puVar7[2];
          }
          if (pcVar4 == pcVar12 + -0x180a2e6b7) {
            pcVar4 = pcVar11 + (int64_t)pcVar4;
            pcVar3 = pcVar14;
            if (pcVar4 <= pcVar11) {
LAB_1804b5df0:
              do {
                uVar13 = (int)pcVar3 + 1;
                pcVar11 = "beard_mesh";
                do {
                  pcVar12 = pcVar11;
                  pcVar11 = pcVar12 + 1;
                } while (*pcVar11 != '\0');
                while( true ) {
                  do {
                    puVar7 = (uint64_t *)puVar7[0xb];
                    if (puVar7 == (uint64_t *)0x0) goto LAB_1804b5e56;
                    pcVar11 = (char *)*puVar7;
                    if (pcVar11 == (char *)0x0) {
                      pcVar11 = (char *)0x180d48d24;
                      pcVar4 = pcVar14;
                    }
                    else {
                      pcVar4 = (char *)puVar7[2];
                    }
                  } while (pcVar4 != pcVar12 + -0x180a2e6b7);
                  pcVar4 = pcVar4 + (int64_t)pcVar11;
                  pcVar3 = (char *)(uint64_t)uVar13;
                  if (pcVar4 <= pcVar11) break;
                  pcVar10 = &processed_var_6840_ptr + -(int64_t)pcVar11;
                  while (*pcVar11 == pcVar10[(int64_t)pcVar11]) {
                    pcVar11 = pcVar11 + 1;
                    if (pcVar4 <= pcVar11) goto LAB_1804b5df0;
                  }
                }
              } while( true );
            }
            pcVar10 = &processed_var_6840_ptr + -(int64_t)pcVar11;
            while (*pcVar11 == pcVar10[(int64_t)pcVar11]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar4 <= pcVar11) goto LAB_1804b5df0;
            }
          }
        }
LAB_1804b5e56:
        *(uint *)(param_1 + 0x390) = uVar13;
        if (uVar13 == 0) {
          return;
        }
        uVar9 = (uint64_t)(int)uVar13;
        puVar2 = (uint64_t *)
                 CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 400 + 0x10,
                               CONCAT71((int7)((uint64_t)pcVar10 >> 8),0x12));
        *puVar2 = uVar9 << 0x20 | 400;
        puVar8 = puVar2 + 7;
        pcVar11 = pcVar14;
        do {
          puVar8[-5] = 0;
          puVar8[-4] = 0;
          puVar8[-3] = 0;
          *(int32_t *)(puVar8 + -2) = 3;
          puVar8[-1] = (uint64_t)&system_state_ptr;
          *puVar8 = 0;
          *(int32_t *)(puVar8 + 1) = 0;
          puVar8[-1] = (uint64_t)&system_data_buffer_ptr;
          puVar8[2] = 0;
          *puVar8 = 0;
          *(int32_t *)(puVar8 + 1) = 0;
          DataStructureManager(puVar8 + 9,0x30,6,function_2092f0,function_209450);
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0;
          uVar13 = (int)pcVar11 + 1;
          pcVar11 = (char *)(uint64_t)uVar13;
          puVar8 = puVar8 + 0x32;
        } while ((uint64_t)(int64_t)(int)uVar13 < uVar9);
        *(uint64_t **)(param_1 + 0x388) = puVar2 + 2;
        pcVar11 = "beard_mesh";
        do {
          pcVar12 = pcVar11;
          pcVar11 = pcVar12 + 1;
        } while (*pcVar11 != '\0');
        for (pcVar11 = (char *)puVar1[6]; pcVar10 = pcVar14, pcVar11 != (char *)0x0;
            pcVar11 = *(char **)(pcVar11 + 0x58)) {
          pcVar4 = *(char **)pcVar11;
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x180d48d24;
            pcVar3 = pcVar14;
          }
          else {
            pcVar3 = *(char **)(pcVar11 + 0x10);
          }
          if (pcVar3 == pcVar12 + -0x180a2e6b7) {
            pcVar3 = pcVar3 + (int64_t)pcVar4;
            pcVar10 = pcVar11;
            if (pcVar3 <= pcVar4) break;
            lVar6 = (int64_t)&processed_var_6840_ptr - (int64_t)pcVar4;
            while (*pcVar4 == pcVar4[lVar6]) {
              pcVar4 = pcVar4 + 1;
              if (pcVar3 <= pcVar4) goto LAB_1804b5fde;
            }
          }
        }
LAB_1804b5fde:
        pcVar11 = pcVar14;
        if (0 < *(int *)(param_1 + 0x390)) {
          do {
            function_4b3150((int64_t)(int)pcVar11 * 400 + *(int64_t *)(param_1 + 0x388),pcVar10);
            pcVar12 = "beard_mesh";
            do {
              pcVar4 = pcVar12;
              pcVar12 = pcVar4 + 1;
            } while (*pcVar12 != '\0');
            for (pcVar12 = *(char **)(pcVar10 + 0x58); pcVar10 = pcVar14, pcVar12 != (char *)0x0;
                pcVar12 = *(char **)(pcVar12 + 0x58)) {
              pcVar3 = *(char **)pcVar12;
              if (pcVar3 == (char *)0x0) {
                pcVar3 = (char *)0x180d48d24;
                pcVar5 = pcVar14;
              }
              else {
                pcVar5 = *(char **)(pcVar12 + 0x10);
              }
              if (pcVar5 == pcVar4 + -0x180a2e6b7) {
                pcVar5 = pcVar5 + (int64_t)pcVar3;
                pcVar10 = pcVar12;
                if (pcVar5 <= pcVar3) break;
                lVar6 = (int64_t)&processed_var_6840_ptr - (int64_t)pcVar3;
                while (*pcVar3 == pcVar3[lVar6]) {
                  pcVar3 = pcVar3 + 1;
                  if (pcVar5 <= pcVar3) goto LAB_1804b606e;
                }
              }
            }
LAB_1804b606e:
            uVar13 = (int)pcVar11 + 1;
            pcVar11 = (char *)(uint64_t)uVar13;
          } while ((int)uVar13 < *(int *)(param_1 + 0x390));
        }
        return;
      }
      lVar6 = (int64_t)&processed_var_6920_ptr - (int64_t)pcVar11;
      while (*pcVar11 == pcVar11[lVar6]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar10 <= pcVar11) goto LAB_1804b5d78;
      }
    }
    puVar1 = (uint64_t *)puVar1[0xb];
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4b60a0(int64_t param_1,int64_t param_2)
void function_4b60a0(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  uint64_t *puVar15;
  uint uVar16;
  char *pcVar17;
  pcVar17 = (char *)0x0;
  uVar16 = 0;
  *(int32_t *)(param_1 + 0x3a0) = 0;
  pcVar13 = "eyebrow_meshes";
  do {
    pcVar14 = pcVar13;
    pcVar13 = pcVar14 + 1;
  } while (*pcVar13 != '\0');
  pcVar14 = pcVar14 + -0x180a2e6a7;
  puVar15 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar15 == (uint64_t *)0x0) {
      return;
    }
    pcVar13 = (char *)*puVar15;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = (char *)0x180d48d24;
      pcVar12 = pcVar17;
    }
    else {
      pcVar12 = (char *)puVar15[2];
    }
    if (pcVar12 == pcVar14) {
      pcVar12 = pcVar12 + (int64_t)pcVar13;
      if (pcVar12 <= pcVar13) {
LAB_1804b6130:
        pcVar13 = "eyebrow_mesh";
        do {
          pcVar6 = pcVar13;
          pcVar13 = pcVar6 + 1;
        } while (*pcVar13 != '\0');
        for (puVar9 = (uint64_t *)puVar15[6]; puVar9 != (uint64_t *)0x0;
            puVar9 = (uint64_t *)puVar9[0xb]) {
          pcVar13 = (char *)*puVar9;
          if (pcVar13 == (char *)0x0) {
            pcVar13 = (char *)0x180d48d24;
            pcVar3 = pcVar17;
          }
          else {
            pcVar3 = (char *)puVar9[2];
          }
          if (pcVar3 == pcVar6 + -0x180a2e6d7) {
            pcVar14 = pcVar13 + (int64_t)pcVar3;
            pcVar3 = pcVar17;
            if (pcVar14 <= pcVar13) {
LAB_1804b61b0:
              do {
                uVar16 = (int)pcVar3 + 1;
                pcVar13 = "eyebrow_mesh";
                do {
                  pcVar6 = pcVar13;
                  pcVar13 = pcVar6 + 1;
                } while (*pcVar13 != '\0');
                while( true ) {
                  do {
                    puVar9 = (uint64_t *)puVar9[0xb];
                    if (puVar9 == (uint64_t *)0x0) goto LAB_1804b6216;
                    pcVar13 = (char *)*puVar9;
                    if (pcVar13 == (char *)0x0) {
                      pcVar13 = (char *)0x180d48d24;
                      pcVar3 = pcVar17;
                    }
                    else {
                      pcVar3 = (char *)puVar9[2];
                    }
                  } while (pcVar3 != pcVar6 + -0x180a2e6d7);
                  pcVar14 = pcVar3 + (int64_t)pcVar13;
                  pcVar3 = (char *)(uint64_t)uVar16;
                  if (pcVar14 <= pcVar13) break;
                  pcVar12 = &processed_var_6872_ptr + -(int64_t)pcVar13;
                  while (*pcVar13 == pcVar12[(int64_t)pcVar13]) {
                    pcVar13 = pcVar13 + 1;
                    if (pcVar14 <= pcVar13) goto LAB_1804b61b0;
                  }
                }
              } while( true );
            }
            pcVar12 = &processed_var_6872_ptr + -(int64_t)pcVar13;
            while (*pcVar13 == pcVar12[(int64_t)pcVar13]) {
              pcVar13 = pcVar13 + 1;
              if (pcVar14 <= pcVar13) goto LAB_1804b61b0;
            }
          }
        }
LAB_1804b6216:
        *(uint *)(param_1 + 0x3a0) = uVar16;
        if (uVar16 == 0) {
          return;
        }
        uVar10 = (uint64_t)(int)uVar16;
        puVar2 = (uint64_t *)
                 CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 0x58 + 0x10,
                               CONCAT71((int7)((uint64_t)pcVar12 >> 8),0x12),pcVar14,
                               0xfffffffffffffffe);
        *puVar2 = uVar10 << 0x20 | 0x58;
        puVar5 = puVar2 + 8;
        pcVar13 = pcVar17;
        do {
          puVar5[-6] = (uint64_t)&system_state_ptr;
          puVar5[-5] = 0;
          *(int32_t *)(puVar5 + -4) = 0;
          puVar5[-6] = (uint64_t)&system_data_buffer_ptr;
          puVar5[-3] = 0;
          puVar5[-5] = 0;
          *(int32_t *)(puVar5 + -4) = 0;
          puVar1 = puVar5 + -1;
          *(int32_t *)((int64_t)puVar5 + 0x11) = 0;
          *(int16_t *)((int64_t)puVar5 + 0x15) = 0;
          *(int8_t *)((int64_t)puVar5 + 0x17) = 0;
          *(int32_t *)(puVar5 + 4) = 3;
          *puVar1 = (uint64_t)puVar1;
          *puVar5 = (uint64_t)puVar1;
          puVar5[1] = 0;
          *(int8_t *)(puVar5 + 2) = 0;
          puVar5[3] = 0;
          puVar5[-2] = 0;
          uVar16 = (int)pcVar13 + 1;
          pcVar13 = (char *)(uint64_t)uVar16;
          puVar5 = puVar5 + 0xb;
        } while ((uint64_t)(int64_t)(int)uVar16 < uVar10);
        *(uint64_t **)(param_1 + 0x398) = puVar2 + 2;
        pcVar13 = "eyebrow_mesh";
        do {
          pcVar14 = pcVar13;
          pcVar13 = pcVar14 + 1;
        } while (*pcVar13 != '\0');
        for (pcVar13 = (char *)puVar15[6]; pcVar12 = pcVar17, pcVar13 != (char *)0x0;
            pcVar13 = *(char **)(pcVar13 + 0x58)) {
          pcVar6 = *(char **)pcVar13;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = (char *)0x180d48d24;
            pcVar3 = pcVar17;
          }
          else {
            pcVar3 = *(char **)(pcVar13 + 0x10);
          }
          if (pcVar3 == pcVar14 + -0x180a2e6d7) {
            pcVar3 = pcVar3 + (int64_t)pcVar6;
            pcVar12 = pcVar13;
            if (pcVar3 <= pcVar6) break;
            lVar8 = (int64_t)&processed_var_6872_ptr - (int64_t)pcVar6;
            while (*pcVar6 == pcVar6[lVar8]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar3 <= pcVar6) goto LAB_1804b634e;
            }
          }
        }
LAB_1804b634e:
        pcVar13 = pcVar17;
        pcVar14 = pcVar17;
        if (0 < *(int *)(param_1 + 0x3a0)) {
          do {
            plVar11 = (int64_t *)(pcVar14 + *(int64_t *)(param_1 + 0x398));
            pcVar6 = "name";
            do {
              pcVar3 = pcVar6;
              pcVar6 = pcVar3 + 1;
            } while (*pcVar6 != '\0');
            for (puVar15 = *(uint64_t **)(pcVar12 + 0x40); puVar15 != (uint64_t *)0x0;
                puVar15 = (uint64_t *)puVar15[6]) {
              pcVar6 = (char *)*puVar15;
              if (pcVar6 == (char *)0x0) {
                pcVar6 = (char *)0x180d48d24;
                pcVar7 = pcVar17;
              }
              else {
                pcVar7 = (char *)puVar15[2];
              }
              if (pcVar7 == pcVar3 + -0x180a03a83) {
                pcVar7 = pcVar6 + (int64_t)pcVar7;
                if (pcVar7 <= pcVar6) {
LAB_1804b63d1:
                  lVar8 = 0x180d48d24;
                  if (puVar15[1] != 0) {
                    lVar8 = puVar15[1];
                  }
                  (**(code **)(*plVar11 + 0x10))(plVar11,lVar8);
                  break;
                }
                lVar8 = (int64_t)&system_data_3a84 - (int64_t)pcVar6;
                while (*pcVar6 == pcVar6[lVar8]) {
                  pcVar6 = pcVar6 + 1;
                  if (pcVar7 <= pcVar6) goto LAB_1804b63d1;
                }
              }
            }
            lVar8 = RenderingSystem_VertexProcessor(system_resource_state,plVar11,1);
            plVar11[4] = lVar8;
            pcVar6 = "eyebrow_mesh";
            do {
              pcVar3 = pcVar6;
              pcVar6 = pcVar3 + 1;
            } while (*pcVar6 != '\0');
            for (pcVar6 = *(char **)(pcVar12 + 0x58); pcVar12 = pcVar17, pcVar6 != (char *)0x0;
                pcVar6 = *(char **)(pcVar6 + 0x58)) {
              pcVar7 = *(char **)pcVar6;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = (char *)0x180d48d24;
                pcVar4 = pcVar17;
              }
              else {
                pcVar4 = *(char **)(pcVar6 + 0x10);
              }
              if (pcVar4 == pcVar3 + -0x180a2e6d7) {
                pcVar4 = pcVar4 + (int64_t)pcVar7;
                pcVar12 = pcVar6;
                if (pcVar4 <= pcVar7) break;
                lVar8 = (int64_t)&processed_var_6872_ptr - (int64_t)pcVar7;
                while (*pcVar7 == pcVar7[lVar8]) {
                  pcVar7 = pcVar7 + 1;
                  if (pcVar4 <= pcVar7) goto LAB_1804b6478;
                }
              }
            }
LAB_1804b6478:
            uVar16 = (int)pcVar13 + 1;
            pcVar13 = (char *)(uint64_t)uVar16;
            pcVar14 = pcVar14 + 0x58;
          } while ((int)uVar16 < *(int *)(param_1 + 0x3a0));
        }
        return;
      }
      lVar8 = (int64_t)&processed_var_6824_ptr - (int64_t)pcVar13;
      while (*pcVar13 == pcVar13[lVar8]) {
        pcVar13 = pcVar13 + 1;
        if (pcVar12 <= pcVar13) goto LAB_1804b6130;
      }
    }
    puVar15 = (uint64_t *)puVar15[0xb];
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4b64a0(int64_t param_1,int64_t param_2)
void function_4b64a0(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  void *puVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  uint64_t *puVar15;
  uint uVar16;
  char *pcVar17;
  void *plocal_var_50;
  void *plocal_var_48;
  int iStack_40;
  uint64_t local_var_38;
  pcVar17 = (char *)0x0;
  uVar16 = 0;
  *(int32_t *)(param_1 + 0x3c0) = 0;
  pcVar13 = "voice_types";
  do {
    pcVar14 = pcVar13;
    pcVar13 = pcVar14 + 1;
  } while (*pcVar13 != '\0');
  pcVar14 = pcVar14 + -0x180a2e6c7;
  puVar15 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar15 == (uint64_t *)0x0) {
      return;
    }
    pcVar13 = (char *)*puVar15;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = (char *)0x180d48d24;
      pcVar12 = pcVar17;
    }
    else {
      pcVar12 = (char *)puVar15[2];
    }
    if (pcVar12 == pcVar14) {
      pcVar12 = pcVar12 + (int64_t)pcVar13;
      if (pcVar12 <= pcVar13) {
LAB_1804b6538:
        pcVar13 = "voice_type";
        do {
          pcVar6 = pcVar13;
          pcVar13 = pcVar6 + 1;
        } while (*pcVar13 != '\0');
        for (puVar10 = (uint64_t *)puVar15[6]; puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[0xb]) {
          pcVar13 = (char *)*puVar10;
          if (pcVar13 == (char *)0x0) {
            pcVar13 = (char *)0x180d48d24;
            pcVar3 = pcVar17;
          }
          else {
            pcVar3 = (char *)puVar10[2];
          }
          if (pcVar3 == pcVar6 + -0x180a2e797) {
            pcVar14 = pcVar3 + (int64_t)pcVar13;
            pcVar3 = pcVar17;
            if (pcVar14 <= pcVar13) {
LAB_1804b65b0:
              do {
                uVar16 = (int)pcVar3 + 1;
                pcVar13 = "voice_type";
                do {
                  pcVar6 = pcVar13;
                  pcVar13 = pcVar6 + 1;
                } while (*pcVar13 != '\0');
                while( true ) {
                  do {
                    puVar10 = (uint64_t *)puVar10[0xb];
                    if (puVar10 == (uint64_t *)0x0) goto LAB_1804b6616;
                    pcVar13 = (char *)*puVar10;
                    if (pcVar13 == (char *)0x0) {
                      pcVar13 = (char *)0x180d48d24;
                      pcVar3 = pcVar17;
                    }
                    else {
                      pcVar3 = (char *)puVar10[2];
                    }
                  } while (pcVar3 != pcVar6 + -0x180a2e797);
                  pcVar14 = pcVar3 + (int64_t)pcVar13;
                  pcVar3 = (char *)(uint64_t)uVar16;
                  if (pcVar14 <= pcVar13) break;
                  pcVar12 = &processed_var_7064_ptr + -(int64_t)pcVar13;
                  while (*pcVar13 == pcVar12[(int64_t)pcVar13]) {
                    pcVar13 = pcVar13 + 1;
                    if (pcVar14 <= pcVar13) goto LAB_1804b65b0;
                  }
                }
              } while( true );
            }
            pcVar12 = &processed_var_7064_ptr + -(int64_t)pcVar13;
            while (*pcVar13 == pcVar12[(int64_t)pcVar13]) {
              pcVar13 = pcVar13 + 1;
              if (pcVar14 <= pcVar13) goto LAB_1804b65b0;
            }
          }
        }
LAB_1804b6616:
        *(uint *)(param_1 + 0x3c0) = uVar16;
        pcVar13 = pcVar17;
        if (uVar16 != 0) {
          pcVar13 = (char *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar16 * 8,
                                          CONCAT71((int7)((uint64_t)pcVar12 >> 8),0x12),pcVar14,
                                          0xfffffffffffffffe);
        }
        *(char **)(param_1 + 0x3b8) = pcVar13;
        pcVar13 = "voice_type";
        do {
          pcVar14 = pcVar13;
          pcVar13 = pcVar14 + 1;
        } while (*pcVar13 != '\0');
        for (pcVar13 = (char *)puVar15[6]; pcVar12 = pcVar17, pcVar13 != (char *)0x0;
            pcVar13 = *(char **)(pcVar13 + 0x58)) {
          pcVar6 = *(char **)pcVar13;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = (char *)0x180d48d24;
            pcVar3 = pcVar17;
          }
          else {
            pcVar3 = *(char **)(pcVar13 + 0x10);
          }
          if (pcVar3 == pcVar14 + -0x180a2e797) {
            pcVar3 = pcVar6 + (int64_t)pcVar3;
            pcVar12 = pcVar13;
            if (pcVar3 <= pcVar6) break;
            lVar9 = (int64_t)&processed_var_7064_ptr - (int64_t)pcVar6;
            while (*pcVar6 == pcVar6[lVar9]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar3 <= pcVar6) goto LAB_1804b66ae;
            }
          }
        }
LAB_1804b66ae:
        pcVar13 = pcVar17;
        pcVar14 = pcVar17;
        if (0 < *(int *)(param_1 + 0x3c0)) {
          do {
            plocal_var_50 = &system_data_buffer_ptr;
            local_var_38 = 0;
            plocal_var_48 = (void *)0x0;
            iStack_40 = 0;
            pcVar6 = "name";
            do {
              pcVar3 = pcVar6;
              pcVar6 = pcVar3 + 1;
            } while (*pcVar6 != '\0');
            for (puVar15 = *(uint64_t **)(pcVar12 + 0x40); puVar15 != (uint64_t *)0x0;
                puVar15 = (uint64_t *)puVar15[6]) {
              pcVar6 = (char *)*puVar15;
              if (pcVar6 == (char *)0x0) {
                pcVar6 = (char *)0x180d48d24;
                pcVar7 = pcVar17;
              }
              else {
                pcVar7 = (char *)puVar15[2];
              }
              if (pcVar7 == pcVar3 + -0x180a03a83) {
                pcVar7 = pcVar6 + (int64_t)pcVar7;
                if (pcVar7 <= pcVar6) {
LAB_1804b6758:
                  lVar9 = 0x180d48d24;
                  if (puVar15[1] != 0) {
                    lVar9 = puVar15[1];
                  }
                  CoreSystem_ConfigValidator0(&plocal_var_50,lVar9);
                  break;
                }
                lVar9 = (int64_t)&system_data_3a84 - (int64_t)pcVar6;
                while (*pcVar6 == pcVar6[lVar9]) {
                  pcVar6 = pcVar6 + 1;
                  if (pcVar7 <= pcVar6) goto LAB_1804b6758;
                }
              }
            }
            lVar9 = system_system_string - system_system_string >> 0x3f;
            pcVar6 = pcVar17;
            pcVar3 = pcVar17;
            if ((system_system_string - system_system_string) / 0x60 + lVar9 != lVar9) {
              do {
                iVar2 = *(int *)(pcVar3 + system_system_string + 0x10);
                iVar8 = iStack_40;
                if (iVar2 == iStack_40) {
                  if (iVar2 != 0) {
                    pbVar4 = *(byte **)(pcVar3 + system_system_string + 8);
                    lVar9 = (int64_t)plocal_var_48 - (int64_t)pbVar4;
                    do {
                      pbVar1 = pbVar4 + lVar9;
                      iVar8 = (uint)*pbVar4 - (uint)*pbVar1;
                      if (iVar8 != 0) break;
                      pbVar4 = pbVar4 + 1;
                    } while (*pbVar1 != 0);
                  }
LAB_1804b680e:
                  if (iVar8 == 0) {
                    pcVar6 = (char *)((int64_t)(int)pcVar6 * 0x60 + system_system_string);
                    goto LAB_1804b6867;
                  }
                }
                else if (iVar2 == 0) goto LAB_1804b680e;
                uVar16 = (int)pcVar6 + 1;
                pcVar6 = (char *)(uint64_t)uVar16;
                pcVar3 = pcVar3 + 0x60;
              } while ((uint64_t)(int64_t)(int)uVar16 <
                       (uint64_t)((system_system_string - system_system_string) / 0x60));
            }
            puVar11 = &system_buffer_ptr;
            if (plocal_var_48 != (void *)0x0) {
              puVar11 = plocal_var_48;
            }
            SystemCore_ResourceManager0(&rendering_buffer_24_ptr,puVar11);
            pcVar6 = pcVar17;
LAB_1804b6867:
            *(char **)(pcVar14 + *(int64_t *)(param_1 + 0x3b8)) = pcVar6;
            pcVar6 = "voice_type";
            do {
              pcVar3 = pcVar6;
              pcVar6 = pcVar3 + 1;
            } while (*pcVar6 != '\0');
            for (pcVar6 = *(char **)(pcVar12 + 0x58); pcVar12 = pcVar17, pcVar6 != (char *)0x0;
                pcVar6 = *(char **)(pcVar6 + 0x58)) {
              pcVar7 = *(char **)pcVar6;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = (char *)0x180d48d24;
                pcVar5 = pcVar17;
              }
              else {
                pcVar5 = *(char **)(pcVar6 + 0x10);
              }
              if (pcVar5 == pcVar3 + -0x180a2e797) {
                pcVar5 = pcVar5 + (int64_t)pcVar7;
                pcVar12 = pcVar6;
                if (pcVar5 <= pcVar7) break;
                lVar9 = (int64_t)&processed_var_7064_ptr - (int64_t)pcVar7;
                while (*pcVar7 == pcVar7[lVar9]) {
                  pcVar7 = pcVar7 + 1;
                  if (pcVar5 <= pcVar7) goto LAB_1804b68f6;
                }
              }
            }
LAB_1804b68f6:
            plocal_var_50 = &system_data_buffer_ptr;
            if (plocal_var_48 != (void *)0x0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer();
            }
            uVar16 = (int)pcVar13 + 1;
            pcVar13 = (char *)(uint64_t)uVar16;
            pcVar14 = pcVar14 + 8;
          } while ((int)uVar16 < *(int *)(param_1 + 0x3c0));
        }
        return;
      }
      lVar9 = (int64_t)&processed_var_6856_ptr - (int64_t)pcVar13;
      while (*pcVar13 == pcVar13[lVar9]) {
        pcVar13 = pcVar13 + 1;
        if (pcVar12 <= pcVar13) goto LAB_1804b6538;
      }
    }
    puVar15 = (uint64_t *)puVar15[0xb];
  } while( true );
}
uint64_t function_4b6970(int64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  puVar6 = *(uint64_t **)(param_1 + 0x38);
  uVar3 = 0;
  uVar7 = *(int64_t *)(param_1 + 0x40) - (int64_t)puVar6 >> 4;
  uVar5 = uVar3;
  if (uVar7 != 0) {
    do {
      if ((puVar6[1] & 1) != 0) {
        if (uVar3 != 0) {
          uVar2 = *puVar6;
          if ((*(byte *)(uVar2 + 0xfd) & 0x20) == 0) {
            uVar2 = Function_4c4a6726(*(uint64_t *)(uVar2 + 0x1b0));
          }
          iVar1 = *(int *)(uVar2 + 0x200);
          uVar2 = uVar3;
          if ((*(byte *)(uVar3 + 0xfd) & 0x20) == 0) {
            uVar2 = Function_4c4a6726(*(uint64_t *)(uVar3 + 0x1b0));
          }
          if (iVar1 <= *(int *)(uVar2 + 0x200)) goto LAB_1804b69f0;
        }
        uVar3 = *puVar6;
      }
LAB_1804b69f0:
      uVar4 = (int)uVar5 + 1;
      puVar6 = puVar6 + 2;
      uVar5 = (uint64_t)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 < uVar7);
  }
  return uVar3;
}
int64_t function_4b699d(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int unaff_ESI;
  int64_t *unaff_RDI;
  uint64_t unaff_R14;
  do {
    if ((*(byte *)(unaff_RDI + 1) & 1) != 0) {
      if (unaff_RBX != 0) {
        lVar2 = *unaff_RDI;
        if ((*(byte *)(lVar2 + 0xfd) & 0x20) == 0) {
          lVar2 = Function_4c4a6726(*(uint64_t *)(lVar2 + 0x1b0));
        }
        iVar1 = *(int *)(lVar2 + 0x200);
        lVar2 = unaff_RBX;
        if ((*(byte *)(unaff_RBX + 0xfd) & 0x20) == 0) {
          lVar2 = Function_4c4a6726(*(uint64_t *)(unaff_RBX + 0x1b0));
        }
        if (iVar1 <= *(int *)(lVar2 + 0x200)) goto LAB_1804b69f0;
      }
      unaff_RBX = *unaff_RDI;
    }
LAB_1804b69f0:
    unaff_ESI = unaff_ESI + 1;
    unaff_RDI = unaff_RDI + 2;
    if (unaff_R14 <= (uint64_t)(int64_t)unaff_ESI) {
      return unaff_RBX;
    }
  } while( true );
}
// 函数: void function_4b6a03(void)
void function_4b6a03(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address