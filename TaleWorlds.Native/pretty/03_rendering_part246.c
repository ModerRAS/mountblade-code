/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part246.c - 4 个函数
// 函数: void function_407df0(uint64_t param_1,int64_t param_2,int param_3)
void function_407df0(uint64_t param_1,int64_t param_2,int param_3)
{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  int64_t lVar8;
  int64_t *plVar9;
  char *pcVar10;
  char *pcVar11;
  if (0 < param_3) {
    pcVar7 = (char *)0x0;
    plVar9 = (int64_t *)(param_2 + 0x40);
    lVar8 = (int64_t)param_3;
    do {
      pcVar10 = "base";
      do {
        pcVar11 = pcVar10;
        pcVar10 = pcVar11 + 1;
      } while (*pcVar10 != '\0');
      puVar5 = (uint64_t *)plVar9[-2];
      if (puVar5 != (uint64_t *)0x0) {
LAB_180407e60:
        pcVar10 = (char *)*puVar5;
        if (pcVar10 == (char *)0x0) {
          pcVar10 = (char *)0x180d48d24;
          pcVar2 = pcVar7;
        }
        else {
          pcVar2 = (char *)puVar5[2];
        }
        if (pcVar2 != pcVar11 + -0x180a04ee3) goto LAB_180407ec2;
        pcVar2 = pcVar2 + (int64_t)pcVar10;
        if (pcVar10 < pcVar2) {
          lVar4 = (int64_t)&system_data_4ee4 - (int64_t)pcVar10;
          while (*pcVar10 == pcVar10[lVar4]) {
            pcVar10 = pcVar10 + 1;
            if (pcVar2 <= pcVar10) goto LAB_180407e98;
          }
          goto LAB_180407ec2;
        }
LAB_180407e98:
        pcVar11 = "collision_infos";
        do {
          pcVar2 = pcVar11;
          pcVar11 = pcVar2 + 1;
        } while (*pcVar11 != '\0');
        for (pcVar11 = (char *)puVar5[6]; pcVar6 = pcVar7, pcVar11 != (char *)0x0;
            pcVar11 = *(char **)(pcVar11 + 0x58)) {
          pbVar3 = *(byte **)pcVar11;
          if (pbVar3 == (byte *)0x0) {
            pbVar3 = (byte *)0x180d48d24;
            pcVar10 = pcVar7;
          }
          else {
            pcVar10 = *(char **)(pcVar11 + 0x10);
          }
          if (pcVar10 == pcVar2 + -0x180a12c4f) {
            pbVar1 = pbVar3 + (int64_t)pcVar10;
            pcVar6 = pcVar11;
            if (pbVar1 <= pbVar3) break;
            lVar4 = (int64_t)&memory_allocator_3584_ptr - (int64_t)pbVar3;
            while (pcVar10 = (char *)(uint64_t)pbVar3[lVar4], *pbVar3 == pbVar3[lVar4]) {
              pbVar3 = pbVar3 + 1;
              if (pbVar1 <= pbVar3) goto LAB_180407f0e;
            }
          }
        }
LAB_180407f0e:
        function_407fa0(pcVar10,pcVar6);
        function_408850();
        for (lVar4 = plVar9[-2]; lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x58)) {
          *(uint64_t *)(lVar4 + 0x20) = 0;
        }
        lVar4 = *plVar9;
        plVar9[-2] = 0;
        for (; lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x30)) {
          *(uint64_t *)(lVar4 + 0x20) = 0;
        }
        *plVar9 = 0;
        function_057010(plVar9 + 4);
      }
LAB_180407f69:
      plVar9 = plVar9 + 0x611;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
LAB_180407ec2:
  puVar5 = (uint64_t *)puVar5[0xb];
  if (puVar5 == (uint64_t *)0x0) goto LAB_180407f69;
  goto LAB_180407e60;
}
// 函数: void function_407dfe(uint64_t param_1,int64_t param_2,int param_3)
void function_407dfe(uint64_t param_1,int64_t param_2,int param_3)
{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  int64_t lVar8;
  int64_t *plVar9;
  char *pcVar10;
  char *pcVar11;
  pcVar7 = (char *)0x0;
  plVar9 = (int64_t *)(param_2 + 0x40);
  lVar8 = (int64_t)param_3;
  while( true ) {
    pcVar10 = "base";
    do {
      pcVar11 = pcVar10;
      pcVar10 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    puVar5 = (uint64_t *)plVar9[-2];
    if (puVar5 != (uint64_t *)0x0) break;
LAB_180407f69:
    plVar9 = plVar9 + 0x611;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      return;
    }
  }
LAB_180407e60:
  pcVar10 = (char *)*puVar5;
  if (pcVar10 == (char *)0x0) {
    pcVar10 = (char *)0x180d48d24;
    pcVar2 = pcVar7;
  }
  else {
    pcVar2 = (char *)puVar5[2];
  }
  if (pcVar2 != pcVar11 + -0x180a04ee3) goto LAB_180407ec2;
  pcVar2 = pcVar2 + (int64_t)pcVar10;
  if (pcVar10 < pcVar2) {
    lVar4 = (int64_t)&system_data_4ee4 - (int64_t)pcVar10;
    while (*pcVar10 == pcVar10[lVar4]) {
      pcVar10 = pcVar10 + 1;
      if (pcVar2 <= pcVar10) goto LAB_180407e98;
    }
    goto LAB_180407ec2;
  }
LAB_180407e98:
  pcVar11 = "collision_infos";
  do {
    pcVar2 = pcVar11;
    pcVar11 = pcVar2 + 1;
  } while (*pcVar11 != '\0');
  for (pcVar11 = (char *)puVar5[6]; pcVar6 = pcVar7, pcVar11 != (char *)0x0;
      pcVar11 = *(char **)(pcVar11 + 0x58)) {
    pbVar3 = *(byte **)pcVar11;
    if (pbVar3 == (byte *)0x0) {
      pbVar3 = (byte *)0x180d48d24;
      pcVar10 = pcVar7;
    }
    else {
      pcVar10 = *(char **)(pcVar11 + 0x10);
    }
    if (pcVar10 == pcVar2 + -0x180a12c4f) {
      pbVar1 = pbVar3 + (int64_t)pcVar10;
      pcVar6 = pcVar11;
      if (pbVar1 <= pbVar3) break;
      lVar4 = (int64_t)&memory_allocator_3584_ptr - (int64_t)pbVar3;
      while (pcVar10 = (char *)(uint64_t)pbVar3[lVar4], *pbVar3 == pbVar3[lVar4]) {
        pbVar3 = pbVar3 + 1;
        if (pbVar1 <= pbVar3) goto LAB_180407f0e;
      }
    }
  }
LAB_180407f0e:
  function_407fa0(pcVar10,pcVar6);
  function_408850();
  for (lVar4 = plVar9[-2]; lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x58)) {
    *(uint64_t *)(lVar4 + 0x20) = 0;
  }
  lVar4 = *plVar9;
  plVar9[-2] = 0;
  for (; lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x30)) {
    *(uint64_t *)(lVar4 + 0x20) = 0;
  }
  *plVar9 = 0;
  function_057010(plVar9 + 4);
  goto LAB_180407f69;
LAB_180407ec2:
  puVar5 = (uint64_t *)puVar5[0xb];
  if (puVar5 == (uint64_t *)0x0) goto LAB_180407f69;
  goto LAB_180407e60;
}
// 函数: void function_407f9d(void)
void function_407f9d(void)
{
  return;
}
// WARNING: Removing unreachable block (ram,0x0001804083aa)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_407fa0(uint64_t param_1,int64_t param_2)
void function_407fa0(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int8_t *puVar11;
  void *puVar12;
  void *puVar13;
  uint64_t *puVar14;
  char *pcVar15;
  uint64_t *puVar16;
  char *pcVar17;
  int8_t stack_array_248 [32];
  uint64_t *plocal_var_228;
  uint64_t local_var_220;
  void *plocal_var_218;
  int8_t *plocal_var_210;
  int iStack_208;
  int8_t stack_array_200 [72];
  void *plocal_var_1b8;
  void *plocal_var_1b0;
  int iStack_1a8;
  uint8_t stack_array_1a0 [72];
  void *plocal_var_158;
  void *plocal_var_150;
  int32_t local_var_148;
  uint8_t stack_array_140 [72];
  void *plocal_var_f8;
  void *plocal_var_f0;
  int32_t local_var_e8;
  uint8_t stack_array_e0 [72];
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_220 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_248;
  pcVar15 = "material";
  do {
    pcVar17 = pcVar15;
    pcVar15 = pcVar17 + 1;
  } while (*pcVar15 != '\0');
  plocal_var_228 = *(uint64_t **)(param_2 + 0x30);
  if (plocal_var_228 != (uint64_t *)0x0) {
    pcVar15 = (char *)0x0;
    do {
      pcVar7 = (char *)*plocal_var_228;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar6 = pcVar15;
      }
      else {
        pcVar6 = (char *)plocal_var_228[2];
      }
      if (pcVar6 == pcVar17 + -0x180a04ebf) {
        pcVar6 = pcVar6 + (int64_t)pcVar7;
        if (pcVar6 <= pcVar7) goto LAB_180408070;
        lVar10 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar7;
        while (*pcVar7 == pcVar7[lVar10]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar6 <= pcVar7) goto LAB_180408070;
        }
      }
      plocal_var_228 = (uint64_t *)plocal_var_228[0xb];
    } while (plocal_var_228 != (uint64_t *)0x0);
  }
LAB_180408814:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_248);
LAB_180408070:
  do {
    puVar14 = plocal_var_228;
    plocal_var_158 = &memory_allocator_3480_ptr;
    plocal_var_150 = stack_array_140;
    local_var_148 = 0;
    stack_array_140[0] = 0;
    pcVar17 = "id";
    do {
      pcVar7 = pcVar17;
      pcVar17 = pcVar7 + 1;
    } while (*pcVar17 != '\0');
    for (puVar16 = (uint64_t *)plocal_var_228[8]; puVar16 != (uint64_t *)0x0;
        puVar16 = (uint64_t *)puVar16[6]) {
      pcVar17 = (char *)*puVar16;
      if (pcVar17 == (char *)0x0) {
        pcVar17 = (char *)0x180d48d24;
        pcVar6 = pcVar15;
      }
      else {
        pcVar6 = (char *)puVar16[2];
      }
      if (pcVar6 == pcVar7 + -0x180a0ae27) {
        pcVar6 = pcVar6 + (int64_t)pcVar17;
        if (pcVar6 <= pcVar17) {
LAB_180408104:
          lVar10 = 0x180d48d24;
          if (puVar16[1] != 0) {
            lVar10 = puVar16[1];
          }
          DataStructureManager0(&plocal_var_158,lVar10);
          break;
        }
        lVar10 = (int64_t)&ui_system_data_1288_ptr - (int64_t)pcVar17;
        while (*pcVar17 == pcVar17[lVar10]) {
          pcVar17 = pcVar17 + 1;
          if (pcVar6 <= pcVar17) goto LAB_180408104;
        }
      }
    }
    iVar1 = RenderingSystem_PostProcessor(render_system_data_memory,&plocal_var_158);
    if (iVar1 == -1) {
      puVar13 = &system_buffer_ptr;
      if (plocal_var_150 != (void *)0x0) {
        puVar13 = plocal_var_150;
      }
      SystemDataInitializer(&processed_var_6880_ptr,puVar13);
      pcVar17 = "material";
      do {
        pcVar7 = pcVar17;
        pcVar17 = pcVar7 + 1;
      } while (*pcVar17 != '\0');
      for (plocal_var_228 = (uint64_t *)puVar14[0xb]; plocal_var_228 != (uint64_t *)0x0;
          plocal_var_228 = (uint64_t *)plocal_var_228[0xb]) {
        pcVar17 = (char *)*plocal_var_228;
        if (pcVar17 == (char *)0x0) {
          pcVar17 = (char *)0x180d48d24;
          pcVar6 = pcVar15;
        }
        else {
          pcVar6 = (char *)plocal_var_228[2];
        }
        if (pcVar6 == pcVar7 + -0x180a04ebf) {
          pcVar6 = pcVar6 + (int64_t)pcVar17;
          if (pcVar6 <= pcVar17) goto LAB_180408800;
          lVar10 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar17;
          while (*pcVar17 == pcVar17[lVar10]) {
            pcVar17 = pcVar17 + 1;
            if (pcVar6 <= pcVar17) goto LAB_180408800;
          }
        }
      }
      plocal_var_228 = (uint64_t *)0x0;
    }
    else {
      pcVar17 = "collision_info";
      do {
        pcVar7 = pcVar17;
        pcVar17 = pcVar7 + 1;
      } while (*pcVar17 != '\0');
      for (pcVar17 = (char *)puVar14[6]; pcVar6 = pcVar15, pcVar17 != (char *)0x0;
          pcVar17 = *(char **)(pcVar17 + 0x58)) {
        pcVar8 = *(char **)pcVar17;
        if (pcVar8 == (char *)0x0) {
          pcVar8 = (char *)0x180d48d24;
          pcVar5 = pcVar15;
        }
        else {
          pcVar5 = *(char **)(pcVar17 + 0x10);
        }
        if (pcVar5 == pcVar7 + -0x180a2721f) {
          pcVar5 = pcVar8 + (int64_t)pcVar5;
          pcVar6 = pcVar17;
          if (pcVar5 <= pcVar8) break;
          lVar10 = (int64_t)&processed_var_6992_ptr - (int64_t)pcVar8;
          while (*pcVar8 == pcVar8[lVar10]) {
            pcVar8 = pcVar8 + 1;
            if (pcVar5 <= pcVar8) goto LAB_18040824e;
          }
        }
      }
LAB_18040824e:
      if (pcVar6 != (char *)0x0) {
        do {
          plocal_var_1b8 = &memory_allocator_3480_ptr;
          plocal_var_1b0 = stack_array_1a0;
          iStack_1a8 = 0;
          stack_array_1a0[0] = 0;
          plocal_var_f8 = &memory_allocator_3480_ptr;
          plocal_var_f0 = stack_array_e0;
          local_var_e8 = 0;
          stack_array_e0[0] = 0;
          plocal_var_218 = &memory_allocator_3480_ptr;
          plocal_var_210 = stack_array_200;
          iStack_208 = 0;
          stack_array_200[0] = 0;
          pcVar17 = "second_material";
          do {
            pcVar7 = pcVar17;
            pcVar17 = pcVar7 + 1;
          } while (*pcVar17 != '\0');
          puVar14 = *(uint64_t **)(pcVar6 + 0x40);
LAB_1804082f2:
          if (puVar14 != (uint64_t *)0x0) {
            pcVar17 = (char *)*puVar14;
            if (pcVar17 == (char *)0x0) {
              pcVar17 = (char *)0x180d48d24;
              pcVar8 = pcVar15;
            }
            else {
              pcVar8 = (char *)puVar14[2];
            }
            if (pcVar8 != pcVar7 + -0x180a1683f) goto LAB_180408381;
            pcVar8 = pcVar8 + (int64_t)pcVar17;
            if (pcVar17 < pcVar8) {
              lVar10 = (int64_t)&processed_var_8928_ptr - (int64_t)pcVar17;
              while (*pcVar17 == pcVar17[lVar10]) {
                pcVar17 = pcVar17 + 1;
                if (pcVar8 <= pcVar17) goto LAB_180408330;
              }
              goto LAB_180408381;
            }
LAB_180408330:
            lVar10 = 0x180d48d24;
            if (puVar14[1] != 0) {
              lVar10 = puVar14[1];
            }
            lVar4 = -1;
            do {
              lVar4 = lVar4 + 1;
            } while (*(char *)(lVar10 + lVar4) != '\0');
            if ((int)lVar4 < 0x40) {
              iStack_208 = (int)lVar4;
              strcpy_s(plocal_var_210,0x40);
            }
            else {
              SystemDataInitializer(&processed_var_616_ptr,0x40,lVar10);
              iStack_208 = 0;
              *plocal_var_210 = 0;
            }
          }
          iVar2 = RenderingSystem_PostProcessor(render_system_data_memory,&plocal_var_218);
          if (iVar2 == -1) {
            puVar11 = &system_buffer_ptr;
            if (plocal_var_210 != (int8_t *)0x0) {
              puVar11 = plocal_var_210;
            }
            SystemDataInitializer(&processed_var_6880_ptr,puVar11);
            pcVar17 = "collision_info";
            do {
              pcVar7 = pcVar17;
              pcVar17 = pcVar7 + 1;
            } while (*pcVar17 != '\0');
            for (pcVar17 = *(char **)(pcVar6 + 0x58); pcVar6 = pcVar15, pcVar17 != (char *)0x0;
                pcVar17 = *(char **)(pcVar17 + 0x58)) {
              pcVar8 = *(char **)pcVar17;
              if (pcVar8 == (char *)0x0) {
                pcVar8 = (char *)0x180d48d24;
                pcVar5 = pcVar15;
              }
              else {
                pcVar5 = *(char **)(pcVar17 + 0x10);
              }
              if (pcVar5 == pcVar7 + -0x180a2721f) {
                pcVar5 = pcVar5 + (int64_t)pcVar8;
                pcVar6 = pcVar17;
                if (pcVar5 <= pcVar8) break;
                lVar10 = (int64_t)&processed_var_6992_ptr - (int64_t)pcVar8;
                while (*pcVar8 == pcVar8[lVar10]) {
                  pcVar8 = pcVar8 + 1;
                  if (pcVar5 <= pcVar8) goto LAB_18040876e;
                }
              }
            }
          }
          else {
            pcVar17 = "collision_effect";
            do {
              pcVar7 = pcVar17;
              pcVar17 = pcVar7 + 1;
            } while (*pcVar17 != '\0');
            for (puVar14 = *(uint64_t **)(pcVar6 + 0x30); puVar14 != (uint64_t *)0x0;
                puVar14 = (uint64_t *)puVar14[0xb]) {
              pcVar17 = (char *)*puVar14;
              if (pcVar17 == (char *)0x0) {
                pcVar17 = (char *)0x180d48d24;
                pcVar8 = pcVar15;
              }
              else {
                pcVar8 = (char *)puVar14[2];
              }
              if (pcVar8 == pcVar7 + -0x180a272af) {
                pcVar8 = pcVar8 + (int64_t)pcVar17;
                if (pcVar8 <= pcVar17) {
LAB_1804084c0:
                  pcVar17 = "particle";
                  do {
                    pcVar7 = pcVar17;
                    pcVar17 = pcVar7 + 1;
                  } while (*pcVar17 != '\0');
                  for (puVar16 = (uint64_t *)puVar14[8]; puVar16 != (uint64_t *)0x0;
                      puVar16 = (uint64_t *)puVar16[6]) {
                    pcVar17 = (char *)*puVar16;
                    if (pcVar17 == (char *)0x0) {
                      pcVar17 = (char *)0x180d48d24;
                      pcVar8 = pcVar15;
                    }
                    else {
                      pcVar8 = (char *)puVar16[2];
                    }
                    if (pcVar8 == pcVar7 + -0x180a272c7) {
                      pcVar8 = pcVar8 + (int64_t)pcVar17;
                      if (pcVar8 <= pcVar17) {
LAB_180408527:
                        lVar10 = 0x180d48d24;
                        if (puVar16[1] != 0) {
                          lVar10 = puVar16[1];
                        }
                        (**(code **)(plocal_var_1b8 + 0x10))(&plocal_var_1b8,lVar10);
                        break;
                      }
                      lVar10 = (int64_t)&processed_var_7160_ptr - (int64_t)pcVar17;
                      while (*pcVar17 == pcVar17[lVar10]) {
                        pcVar17 = pcVar17 + 1;
                        if (pcVar8 <= pcVar17) goto LAB_180408527;
                      }
                    }
                  }
                  pcVar17 = "decal";
                  do {
                    pcVar7 = pcVar17;
                    pcVar17 = pcVar7 + 1;
                  } while (*pcVar17 != '\0');
                  for (puVar14 = (uint64_t *)puVar14[8]; puVar14 != (uint64_t *)0x0;
                      puVar14 = (uint64_t *)puVar14[6]) {
                    pcVar17 = (char *)*puVar14;
                    if (pcVar17 == (char *)0x0) {
                      pcVar17 = (char *)0x180d48d24;
                      pcVar8 = pcVar15;
                    }
                    else {
                      pcVar8 = (char *)puVar14[2];
                    }
                    if (pcVar8 == pcVar7 + -0x180a04997) {
                      pcVar8 = pcVar8 + (int64_t)pcVar17;
                      if (pcVar8 <= pcVar17) {
LAB_1804085b4:
                        lVar10 = 0x180d48d24;
                        if (puVar14[1] != 0) {
                          lVar10 = puVar14[1];
                        }
                        (**(code **)(plocal_var_f8 + 0x10))(&plocal_var_f8,lVar10);
                        break;
                      }
                      lVar10 = (int64_t)&processed_var_5544_ptr - (int64_t)pcVar17;
                      while (*pcVar17 == pcVar17[lVar10]) {
                        pcVar17 = pcVar17 + 1;
                        if (pcVar8 <= pcVar17) goto LAB_1804085b4;
                      }
                    }
                  }
                  iVar3 = -1;
                  if ((iStack_1a8 != 0) && (iVar3 = function_0c17c0(), iVar3 == -1)) {
                    puVar11 = &system_buffer_ptr;
                    if (plocal_var_210 != (int8_t *)0x0) {
                      puVar11 = plocal_var_210;
                    }
                    puVar13 = &system_buffer_ptr;
                    if (plocal_var_150 != (void *)0x0) {
                      puVar13 = plocal_var_150;
                    }
                    puVar12 = &system_buffer_ptr;
                    if (plocal_var_1b0 != (void *)0x0) {
                      puVar12 = plocal_var_1b0;
                    }
                    SystemDataInitializer(&processed_var_7176_ptr,puVar12,puVar13,puVar11);
                    plocal_var_98 = &memory_allocator_3480_ptr;
                    plocal_var_90 = stack_array_80;
                    stack_array_80[0] = 0;
                    local_var_88 = 0x1e;
                    strcpy_s(stack_array_80,0x40,&processed_var_7240_ptr);
                    iVar3 = function_0c17c0();
                    plocal_var_98 = &system_state_ptr;
                  }
                  lVar10 = *(int64_t *)(render_system_memory + (int64_t)iVar1 * 8);
                  *(int *)(lVar10 + (int64_t)iVar2 * 0x28) = iVar3;
                  plVar9 = (int64_t *)(lVar10 + (int64_t)iVar2 * 0x28 + 8);
                  puVar13 = &system_buffer_ptr;
                  if (plocal_var_f0 != (void *)0x0) {
                    puVar13 = plocal_var_f0;
                  }
                  (**(code **)(*plVar9 + 0x10))(plVar9,puVar13);
                  break;
                }
                lVar10 = (int64_t)&processed_var_7136_ptr - (int64_t)pcVar17;
                while (*pcVar17 == pcVar17[lVar10]) {
                  pcVar17 = pcVar17 + 1;
                  if (pcVar8 <= pcVar17) goto LAB_1804084c0;
                }
              }
            }
            pcVar17 = "collision_info";
            do {
              pcVar7 = pcVar17;
              pcVar17 = pcVar7 + 1;
            } while (*pcVar17 != '\0');
            for (pcVar17 = *(char **)(pcVar6 + 0x58); pcVar6 = pcVar15, pcVar17 != (char *)0x0;
                pcVar17 = *(char **)(pcVar17 + 0x58)) {
              pcVar8 = *(char **)pcVar17;
              if (pcVar8 == (char *)0x0) {
                pcVar8 = (char *)0x180d48d24;
                pcVar5 = pcVar15;
              }
              else {
                pcVar5 = *(char **)(pcVar17 + 0x10);
              }
              if (pcVar5 == pcVar7 + -0x180a2721f) {
                pcVar5 = pcVar5 + (int64_t)pcVar8;
                pcVar6 = pcVar17;
                if (pcVar5 <= pcVar8) break;
                lVar10 = (int64_t)&processed_var_6992_ptr - (int64_t)pcVar8;
                while (*pcVar8 == pcVar8[lVar10]) {
                  pcVar8 = pcVar8 + 1;
                  if (pcVar5 <= pcVar8) goto LAB_18040876e;
                }
              }
            }
          }
LAB_18040876e:
          plocal_var_f8 = &system_state_ptr;
          plocal_var_218 = &system_state_ptr;
          plocal_var_1b8 = &system_state_ptr;
          puVar14 = plocal_var_228;
          if (pcVar6 == (char *)0x0) break;
        } while( true );
      }
      pcVar17 = "material";
      do {
        pcVar7 = pcVar17;
        pcVar17 = pcVar7 + 1;
      } while (*pcVar17 != '\0');
      for (plocal_var_228 = (uint64_t *)puVar14[0xb]; plocal_var_228 != (uint64_t *)0x0;
          plocal_var_228 = (uint64_t *)plocal_var_228[0xb]) {
        pcVar17 = (char *)*plocal_var_228;
        if (pcVar17 == (char *)0x0) {
          pcVar17 = (char *)0x180d48d24;
          pcVar6 = pcVar15;
        }
        else {
          pcVar6 = (char *)plocal_var_228[2];
        }
        if (pcVar6 == pcVar7 + -0x180a04ebf) {
          pcVar6 = pcVar6 + (int64_t)pcVar17;
          if (pcVar6 <= pcVar17) goto LAB_180408800;
          lVar10 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar17;
          while (*pcVar17 == pcVar17[lVar10]) {
            pcVar17 = pcVar17 + 1;
            if (pcVar6 <= pcVar17) goto LAB_180408800;
          }
        }
      }
      plocal_var_228 = (uint64_t *)0x0;
    }
LAB_180408800:
    plocal_var_158 = &system_state_ptr;
  } while (plocal_var_228 != (uint64_t *)0x0);
  goto LAB_180408814;
LAB_180408381:
  puVar14 = (uint64_t *)puVar14[6];
  goto LAB_1804082f2;
}
// WARNING: Removing unreachable block (ram,0x000180409832)
// WARNING: Removing unreachable block (ram,0x000180408cc5)
// WARNING: Removing unreachable block (ram,0x0001804091cf)
// WARNING: Removing unreachable block (ram,0x000180408e14)
// WARNING: Removing unreachable block (ram,0x0001804093ef)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address