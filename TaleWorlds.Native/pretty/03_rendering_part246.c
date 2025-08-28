/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part246.c - 4 个函数

// 函数: void FUN_180407df0(uint64_t param_1,int64_t param_2,int param_3)
void FUN_180407df0(uint64_t param_1,int64_t param_2,int param_3)

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
        FUN_180407fa0(pcVar10,pcVar6);
        FUN_180408850();
        for (lVar4 = plVar9[-2]; lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x58)) {
          *(uint64_t *)(lVar4 + 0x20) = 0;
        }
        lVar4 = *plVar9;
        plVar9[-2] = 0;
        for (; lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x30)) {
          *(uint64_t *)(lVar4 + 0x20) = 0;
        }
        *plVar9 = 0;
        FUN_180057010(plVar9 + 4);
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





// 函数: void FUN_180407dfe(uint64_t param_1,int64_t param_2,int param_3)
void FUN_180407dfe(uint64_t param_1,int64_t param_2,int param_3)

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
  FUN_180407fa0(pcVar10,pcVar6);
  FUN_180408850();
  for (lVar4 = plVar9[-2]; lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x58)) {
    *(uint64_t *)(lVar4 + 0x20) = 0;
  }
  lVar4 = *plVar9;
  plVar9[-2] = 0;
  for (; lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x30)) {
    *(uint64_t *)(lVar4 + 0x20) = 0;
  }
  *plVar9 = 0;
  FUN_180057010(plVar9 + 4);
  goto LAB_180407f69;
LAB_180407ec2:
  puVar5 = (uint64_t *)puVar5[0xb];
  if (puVar5 == (uint64_t *)0x0) goto LAB_180407f69;
  goto LAB_180407e60;
}





// 函数: void FUN_180407f9d(void)
void FUN_180407f9d(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001804083aa)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180407fa0(uint64_t param_1,int64_t param_2)
void FUN_180407fa0(uint64_t param_1,int64_t param_2)

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
  int8_t auStack_248 [32];
  uint64_t *puStack_228;
  uint64_t uStack_220;
  void *puStack_218;
  int8_t *puStack_210;
  int iStack_208;
  int8_t auStack_200 [72];
  void *puStack_1b8;
  void *puStack_1b0;
  int iStack_1a8;
  uint8_t auStack_1a0 [72];
  void *puStack_158;
  void *puStack_150;
  int32_t uStack_148;
  uint8_t auStack_140 [72];
  void *puStack_f8;
  void *puStack_f0;
  int32_t uStack_e8;
  uint8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_220 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  pcVar15 = "material";
  do {
    pcVar17 = pcVar15;
    pcVar15 = pcVar17 + 1;
  } while (*pcVar15 != '\0');
  puStack_228 = *(uint64_t **)(param_2 + 0x30);
  if (puStack_228 != (uint64_t *)0x0) {
    pcVar15 = (char *)0x0;
    do {
      pcVar7 = (char *)*puStack_228;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar6 = pcVar15;
      }
      else {
        pcVar6 = (char *)puStack_228[2];
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
      puStack_228 = (uint64_t *)puStack_228[0xb];
    } while (puStack_228 != (uint64_t *)0x0);
  }
LAB_180408814:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_248);
LAB_180408070:
  do {
    puVar14 = puStack_228;
    puStack_158 = &memory_allocator_3480_ptr;
    puStack_150 = auStack_140;
    uStack_148 = 0;
    auStack_140[0] = 0;
    pcVar17 = "id";
    do {
      pcVar7 = pcVar17;
      pcVar17 = pcVar7 + 1;
    } while (*pcVar17 != '\0');
    for (puVar16 = (uint64_t *)puStack_228[8]; puVar16 != (uint64_t *)0x0;
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
          DataStructureManager0(&puStack_158,lVar10);
          break;
        }
        lVar10 = (int64_t)&ui_system_data_1288_ptr - (int64_t)pcVar17;
        while (*pcVar17 == pcVar17[lVar10]) {
          pcVar17 = pcVar17 + 1;
          if (pcVar6 <= pcVar17) goto LAB_180408104;
        }
      }
    }
    iVar1 = FUN_180191c00(render_system_data_memory,&puStack_158);
    if (iVar1 == -1) {
      puVar13 = &system_buffer_ptr;
      if (puStack_150 != (void *)0x0) {
        puVar13 = puStack_150;
      }
      SystemDataInitializer(&processed_var_6880_ptr,puVar13);
      pcVar17 = "material";
      do {
        pcVar7 = pcVar17;
        pcVar17 = pcVar7 + 1;
      } while (*pcVar17 != '\0');
      for (puStack_228 = (uint64_t *)puVar14[0xb]; puStack_228 != (uint64_t *)0x0;
          puStack_228 = (uint64_t *)puStack_228[0xb]) {
        pcVar17 = (char *)*puStack_228;
        if (pcVar17 == (char *)0x0) {
          pcVar17 = (char *)0x180d48d24;
          pcVar6 = pcVar15;
        }
        else {
          pcVar6 = (char *)puStack_228[2];
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
      puStack_228 = (uint64_t *)0x0;
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
          puStack_1b8 = &memory_allocator_3480_ptr;
          puStack_1b0 = auStack_1a0;
          iStack_1a8 = 0;
          auStack_1a0[0] = 0;
          puStack_f8 = &memory_allocator_3480_ptr;
          puStack_f0 = auStack_e0;
          uStack_e8 = 0;
          auStack_e0[0] = 0;
          puStack_218 = &memory_allocator_3480_ptr;
          puStack_210 = auStack_200;
          iStack_208 = 0;
          auStack_200[0] = 0;
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
              strcpy_s(puStack_210,0x40);
            }
            else {
              SystemDataInitializer(&processed_var_616_ptr,0x40,lVar10);
              iStack_208 = 0;
              *puStack_210 = 0;
            }
          }
          iVar2 = FUN_180191c00(render_system_data_memory,&puStack_218);
          if (iVar2 == -1) {
            puVar11 = &system_buffer_ptr;
            if (puStack_210 != (int8_t *)0x0) {
              puVar11 = puStack_210;
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
                        (**(code **)(puStack_1b8 + 0x10))(&puStack_1b8,lVar10);
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
                        (**(code **)(puStack_f8 + 0x10))(&puStack_f8,lVar10);
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
                  if ((iStack_1a8 != 0) && (iVar3 = FUN_1800c17c0(), iVar3 == -1)) {
                    puVar11 = &system_buffer_ptr;
                    if (puStack_210 != (int8_t *)0x0) {
                      puVar11 = puStack_210;
                    }
                    puVar13 = &system_buffer_ptr;
                    if (puStack_150 != (void *)0x0) {
                      puVar13 = puStack_150;
                    }
                    puVar12 = &system_buffer_ptr;
                    if (puStack_1b0 != (void *)0x0) {
                      puVar12 = puStack_1b0;
                    }
                    SystemDataInitializer(&processed_var_7176_ptr,puVar12,puVar13,puVar11);
                    puStack_98 = &memory_allocator_3480_ptr;
                    puStack_90 = auStack_80;
                    auStack_80[0] = 0;
                    uStack_88 = 0x1e;
                    strcpy_s(auStack_80,0x40,&processed_var_7240_ptr);
                    iVar3 = FUN_1800c17c0();
                    puStack_98 = &system_state_ptr;
                  }
                  lVar10 = *(int64_t *)(render_system_memory + (int64_t)iVar1 * 8);
                  *(int *)(lVar10 + (int64_t)iVar2 * 0x28) = iVar3;
                  plVar9 = (int64_t *)(lVar10 + (int64_t)iVar2 * 0x28 + 8);
                  puVar13 = &system_buffer_ptr;
                  if (puStack_f0 != (void *)0x0) {
                    puVar13 = puStack_f0;
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
          puStack_f8 = &system_state_ptr;
          puStack_218 = &system_state_ptr;
          puStack_1b8 = &system_state_ptr;
          puVar14 = puStack_228;
          if (pcVar6 == (char *)0x0) break;
        } while( true );
      }
      pcVar17 = "material";
      do {
        pcVar7 = pcVar17;
        pcVar17 = pcVar7 + 1;
      } while (*pcVar17 != '\0');
      for (puStack_228 = (uint64_t *)puVar14[0xb]; puStack_228 != (uint64_t *)0x0;
          puStack_228 = (uint64_t *)puStack_228[0xb]) {
        pcVar17 = (char *)*puStack_228;
        if (pcVar17 == (char *)0x0) {
          pcVar17 = (char *)0x180d48d24;
          pcVar6 = pcVar15;
        }
        else {
          pcVar6 = (char *)puStack_228[2];
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
      puStack_228 = (uint64_t *)0x0;
    }
LAB_180408800:
    puStack_158 = &system_state_ptr;
  } while (puStack_228 != (uint64_t *)0x0);
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



