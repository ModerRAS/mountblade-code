#include "TaleWorlds.Native.Split.h"

// 99_part_04_part015_sub002_sub002.c - 1 个函数

// 函数: void FUN_180264330(longlong param_1,ulonglong param_2)
void FUN_180264330(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  int32_t uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int8_t auStack_458 [32];
  int32_t uStack_438;
  int32_t uStack_428;
  int32_t uStack_424;
  ulonglong auStack_420 [2];
  uint64_t uStack_410;
  int8_t auStack_408 [32];
  int8_t auStack_3e8 [32];
  int8_t auStack_3c8 [32];
  void *puStack_3a8;
  uint64_t uStack_3a0;
  int iStack_398;
  void *puStack_348;
  uint64_t uStack_340;
  int32_t uStack_338;
  void *puStack_2e8;
  uint64_t uStack_2e0;
  int iStack_2d8;
  void *puStack_288;
  uint64_t uStack_280;
  int iStack_278;
  void *puStack_228;
  uint64_t uStack_220;
  int iStack_218;
  void *puStack_1c8;
  uint64_t uStack_1c0;
  int iStack_1b8;
  void *puStack_168;
  uint64_t uStack_160;
  int iStack_158;
  void *apuStack_108 [12];
  void *puStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  ulonglong uStack_48;
  
  uStack_410 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_458;
  lVar12 = 0;
  auStack_420[0] = param_2;
  lVar4 = FUN_1800a02a0(param_2,&system_data_3a84,0,1);
  if (lVar4 != 0) {
    lVar5 = 0x180d48d24;
    if (*(longlong *)(lVar4 + 8) != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
    }
    (**(code **)(*(longlong *)(param_1 + 0x40) + 0x10))((longlong *)(param_1 + 0x40),lVar5);
  }
  lVar4 = FUN_18005d4b0(param_2,&UNK_180a15b48,0,1);
  if (lVar4 != 0) {
    uStack_160 = 0;
    iStack_158 = 0;
    puStack_168 = &UNK_1809fcc58;
    func_0x000180049e90(&puStack_168);
    uStack_1c0 = 0;
    iStack_1b8 = 0;
    puStack_1c8 = &UNK_1809fcc58;
    func_0x000180049e90(&puStack_1c8);
    uStack_220 = 0;
    iStack_218 = 0;
    puStack_228 = &UNK_1809fcc58;
    func_0x000180049e90(&puStack_228);
    uStack_280 = 0;
    iStack_278 = 0;
    puStack_288 = &UNK_1809fcc58;
    func_0x000180049e90(&puStack_288);
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15b18);
        if (iVar2 == 0) {
          FUN_180630fb0(lVar5,&UNK_180a0696c,&puStack_168);
          break;
        }
      }
    }
    if (iStack_158 != 0) {
      uVar3 = FUN_1802ae6e0(&puStack_168);
      *(int32_t *)(param_1 + 0x478) = uVar3;
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15b80);
        if (iVar2 == 0) {
          FUN_180630fb0(lVar5,&UNK_180a0696c,&puStack_1c8);
          break;
        }
      }
    }
    if (iStack_1b8 != 0) {
      uVar3 = FUN_1802ae610(&puStack_1c8);
      *(int32_t *)(param_1 + 0x47c) = uVar3;
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15b98);
        if (iVar2 == 0) {
          FUN_180630fb0(lVar5,&UNK_180a0696c,&puStack_228);
          break;
        }
      }
    }
    if (iStack_218 != 0) {
      uVar3 = func_0x0001802ae810(&puStack_228);
      *(int32_t *)(param_1 + 0x148) = uVar3;
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15b58);
        if (iVar2 == 0) {
          FUN_180630fb0(lVar5,&UNK_180a0696c,&puStack_288);
          break;
        }
      }
    }
    if (iStack_278 != 0) {
      cVar1 = FUN_180629850(&puStack_288,&UNK_180a15760,1);
      *(uint *)(param_1 + 0x14c) = (uint)(cVar1 == '\0');
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15b70);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x6c != 0) {
            func_0x000180631310(uVar7,param_1 + 0x6c,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15bf8);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x8c != 0) {
            func_0x000180631310(uVar7,param_1 + 0x8c,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15c20);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x90 != 0) {
            func_0x000180631310(uVar7,param_1 + 0x90,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15bb0);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x94 != 0) {
            func_0x000180631310(uVar7,param_1 + 0x94,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15bd8);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x98 != 0) {
            func_0x000180631310(uVar7,param_1 + 0x98,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15c80);
        if (iVar2 == 0) {
          FUN_180631960(lVar5,&UNK_180a0696c,param_1 + 0x7e0);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15c90);
        if (iVar2 == 0) {
          FUN_180631960(lVar5,&UNK_180a0696c,param_1 + 0x7e0);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15c48);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x7f0 != 0) {
            func_0x000180631310(uVar7,param_1 + 0x7f0,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15c60);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x7f4 != 0) {
            func_0x000180631310(uVar7,param_1 + 0x7f4,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15cc8);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x7f8 != 0) {
            func_0x000180631310(uVar7,param_1 + 0x7f8,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15ce0);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x7fc != 0) {
            func_0x000180631310(uVar7,param_1 + 0x7fc,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = lVar12;
        lVar11 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar11 = *(longlong *)(lVar6 + 8);
        }
        while (lVar6 = lVar10 + 1, *(char *)(lVar11 + lVar10) == (&UNK_180a04cc0)[lVar10]) {
          lVar10 = lVar6;
          if (lVar6 == 8) {
            FUN_180631960(lVar5,&UNK_180a0696c,param_1 + 0x820);
            goto LAB_180264ddd;
          }
        }
      }
    }
LAB_180264ddd:
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15ca0);
        if (iVar2 == 0) {
          FUN_180631960(lVar5,&UNK_180a0696c,param_1 + 0x820);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a159f8);
        if (iVar2 == 0) {
          FUN_180631960(lVar5,&UNK_180a0696c,param_1 + 0x840);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15cb0);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x850 != 0) {
            func_0x000180631310(uVar7,param_1 + 0x850,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15d30);
        if (iVar2 == 0) {
          FUN_180631850(lVar5,&UNK_180a0696c,param_1 + 0x888);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15d40);
        if (iVar2 == 0) {
          FUN_180631850(lVar5,&UNK_180a0696c,param_1 + 0x890);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15cf8);
        if (iVar2 == 0) {
          lVar5 = FUN_180631290(lVar5,&UNK_180a0696c);
          if ((param_1 + 0x8a8 != 0) && (lVar5 != 0)) {
            func_0x0001806312c0(lVar5,param_1 + 0x8a8);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15d18);
        if (iVar2 == 0) {
          lVar5 = FUN_180631290(lVar5,&UNK_180a0696c);
          if ((param_1 + 0x8ac != 0) && (lVar5 != 0)) {
            func_0x0001806312c0(lVar5,param_1 + 0x8ac);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15d78);
        if (iVar2 == 0) {
          lVar5 = FUN_180631290(lVar5,&UNK_180a0696c);
          if ((param_1 + 0x8b0 != 0) && (lVar5 != 0)) {
            FUN_18010cbc0(lVar5,&UNK_180a063a0,param_1 + 0x8b0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15d98);
        if (iVar2 == 0) {
          FUN_180631850(lVar5,&UNK_180a0696c,param_1 + 0x898);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15d50);
        if (iVar2 == 0) {
          FUN_180631850(lVar5,&UNK_180a0696c,param_1 + 0x8a0);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15d60);
        if (iVar2 == 0) {
          FUN_180631a80(lVar5,&UNK_180a0696c,param_1 + 0x854);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15dc8);
        if (iVar2 == 0) {
          lVar5 = FUN_180631290(lVar5,&UNK_180a0696c);
          if ((param_1 + 0x85c != 0) && (lVar5 != 0)) {
            FUN_18010cbc0(lVar5,&UNK_180a063a0,param_1 + 0x85c);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15de8);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x860 != 0) {
            func_0x000180631310(uVar7,param_1 + 0x860,0);
          }
          break;
        }
      }
    }
    uStack_2e0 = 0;
    iStack_2d8 = 0;
    puStack_2e8 = &UNK_1809fcc58;
    func_0x000180049e90(&puStack_2e8);
    uStack_340 = 0;
    uStack_338 = 0;
    puStack_348 = &UNK_1809fcc58;
    func_0x000180049e90(&puStack_348);
    uStack_a0 = 0;
    uStack_98 = 0;
    puStack_a8 = &UNK_1809fcc58;
    func_0x000180049e90(&puStack_a8);
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a04ec0);
        if (iVar2 == 0) {
          FUN_180630fb0(lVar5,&UNK_180a0696c,&puStack_2e8);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15da8);
        if (iVar2 == 0) {
          FUN_180630fb0(lVar5,&UNK_180a0696c,&puStack_a8);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15db8);
        if (iVar2 == 0) {
          FUN_180630fb0(lVar5,&UNK_180a0696c,&puStack_348);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15e30);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0x9c != 0) {
            func_0x000180631310(uVar7,param_1 + 0x9c,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15e50);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xa0 != 0) {
            func_0x000180631310(uVar7,param_1 + 0xa0,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15e08);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xa4 != 0) {
            func_0x000180631310(uVar7,param_1 + 0xa4,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15e18);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xa8 != 0) {
            func_0x000180631310(uVar7,param_1 + 0xa8,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15e98);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xac != 0) {
            func_0x000180631310(uVar7,param_1 + 0xac,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15eb0);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xb0 != 0) {
            func_0x000180631310(uVar7,param_1 + 0xb0,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15e68);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xb4 != 0) {
            func_0x000180631310(uVar7,param_1 + 0xb4,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15e80);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xb8 != 0) {
            func_0x000180631310(uVar7,param_1 + 0xb8,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15f08);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xbc != 0) {
            func_0x000180631310(uVar7,param_1 + 0xbc,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15f20);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xc0 != 0) {
            func_0x000180631310(uVar7,param_1 + 0xc0,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15ed0);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xc4 != 0) {
            func_0x000180631310(uVar7,param_1 + 0xc4,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15ee8);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 200 != 0) {
            func_0x000180631310(uVar7,param_1 + 200,0);
          }
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15f58);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xcc != 0) {
            func_0x000180631310(uVar7,param_1 + 0xcc,0);
          }
          break;
        }
      }
    }
    uStack_3a0 = 0;
    iStack_398 = 0;
    puStack_3a8 = &UNK_1809fcc58;
    func_0x000180049e90(&puStack_3a8);
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15f68);
        if (iVar2 == 0) {
          FUN_180630fb0(lVar5,&UNK_180a0696c,&puStack_3a8);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15f38);
        if (iVar2 == 0) {
          uVar7 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (param_1 + 0xd8 != 0) {
            func_0x000180631310(uVar7,param_1 + 0xd8,0);
          }
          break;
        }
      }
    }
    if (iStack_398 != 0) {
      uVar3 = FUN_1802ae580(&puStack_3a8);
      *(int32_t *)(param_1 + 100) = uVar3;
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = 0x180d48d24;
        if (*(longlong *)(lVar6 + 8) != 0) {
          lVar10 = *(longlong *)(lVar6 + 8);
        }
        iVar2 = strcmp(lVar10,&UNK_180a15f48);
        if (iVar2 == 0) {
          lVar5 = FUN_180631290(lVar5,&UNK_180a0696c);
          if (lVar5 != 0) {
            puVar8 = (int32_t *)FUN_1802c0460(auStack_408,lVar5);
            uVar3 = puVar8[1];
            uVar13 = puVar8[2];
            uVar14 = puVar8[3];
            *(int32_t *)(param_1 + 0x30) = *puVar8;
            *(int32_t *)(param_1 + 0x34) = uVar3;
            *(int32_t *)(param_1 + 0x38) = uVar13;
            *(int32_t *)(param_1 + 0x3c) = uVar14;
          }
          break;
        }
      }
    }
    if (iStack_2d8 != 0) {
      FUN_1800b30d0(_DAT_180c86930,&uStack_428,&puStack_2e8,0);
      if (CONCAT44(uStack_424,uStack_428) == 0) {
        uVar3 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        lVar5 = *(longlong *)(CONCAT44(uStack_424,uStack_428) + 0xa8);
        uVar3 = *(int32_t *)(lVar5 + 0xc);
        uVar13 = *(int32_t *)(lVar5 + 0x10);
        uVar14 = *(int32_t *)(lVar5 + 0x14);
        uVar15 = *(int32_t *)(lVar5 + 0x18);
      }
      *(int32_t *)(param_1 + 0x30) = uVar3;
      *(int32_t *)(param_1 + 0x34) = uVar13;
      *(int32_t *)(param_1 + 0x38) = uVar14;
      *(int32_t *)(param_1 + 0x3c) = uVar15;
      FUN_180045af0(&uStack_428);
    }
    lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15fb0,0,1);
    if (lVar5 != 0) {
      lVar5 = FUN_18005d4b0(lVar5,&UNK_180a15da8,0,1);
      while (lVar5 != 0) {
        func_0x000180046460(apuStack_108);
        apuStack_108[0] = &UNK_1809fcc58;
        func_0x000180049e90(apuStack_108);
        FUN_180630fb0(lVar5,&UNK_180a0696c,apuStack_108);
        FUN_1800b30d0(_DAT_180c86930,&uStack_428,apuStack_108,0);
        cVar1 = func_0x000180080f90(&uStack_428,0);
        if (cVar1 == '\0') {
          uVar7 = func_0x000180085e00(&uStack_428);
          uVar7 = func_0x0001800c0ee0(uVar7);
          uVar7 = func_0x000180084170(uVar7);
          FUN_1800863a0(param_1 + 0x868,uVar7);
        }
        else {
          uVar7 = func_0x0001800464d0(param_1 + 0x40);
          uVar9 = func_0x0001800464d0(apuStack_108);
          FUN_180627020(&UNK_180a15fc0,uVar9,uVar7);
        }
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15da8,0);
        FUN_180045af0(&uStack_428);
        FUN_180044a30(apuStack_108);
        param_2 = auStack_420[0];
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a15f80);
        if (iVar2 == 0) {
          FUN_180632100(lVar5,&UNK_180a0696c,param_1 + 0x20);
          break;
        }
      }
    }
    cVar1 = func_0x000180073620(&puStack_348);
    if (cVar1 == '\0') {
      lVar5 = FUN_1800b6de0(_DAT_180c86930,&puStack_348,0);
      if (lVar5 == 0) {
        uVar3 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        puVar8 = (int32_t *)func_0x000180084170(*(uint64_t *)(lVar5 + 0x30));
        uVar3 = *puVar8;
        uVar13 = puVar8[1];
        uVar14 = puVar8[2];
        uVar15 = puVar8[3];
      }
      *(int32_t *)(param_1 + 0x20) = uVar3;
      *(int32_t *)(param_1 + 0x24) = uVar13;
      *(int32_t *)(param_1 + 0x28) = uVar14;
      *(int32_t *)(param_1 + 0x2c) = uVar15;
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a15f98);
        if (iVar2 == 0) {
          uStack_428 = 0;
          auStack_420[0] = auStack_420[0] & 0xffffffff00000000;
          FUN_1806313c0(lVar5,&system_data_4ee4,&uStack_428,0);
          FUN_1806313c0(lVar5,&UNK_180a16290,auStack_420,0);
          func_0x000180270dc0(param_1 + 0x460,(int32_t)auStack_420[0]);
          func_0x000180270db0(param_1 + 0x460,uStack_428);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a16020);
        if (iVar2 == 0) {
          auStack_420[0] = auStack_420[0] & 0xffffffff00000000;
          uStack_428 = 0;
          FUN_1806313c0(lVar5,&system_data_4ee4,auStack_420,0);
          FUN_1806313c0(lVar5,&UNK_180a16290,&uStack_428,0);
          func_0x000180270dc0(param_1 + 0x468,uStack_428);
          func_0x000180270db0(param_1 + 0x468,(int32_t)auStack_420[0]);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a16030);
        if (iVar2 == 0) {
          auStack_420[0] = auStack_420[0] & 0xffffffff00000000;
          uStack_428 = 0;
          FUN_1806313c0(lVar5,&system_data_4ee4,auStack_420,0);
          FUN_1806313c0(lVar5,&UNK_180a16290,&uStack_428,0);
          func_0x000180270dc0(param_1 + 0x70,uStack_428);
          func_0x000180270db0(param_1 + 0x70,(int32_t)auStack_420[0]);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        lVar10 = func_0x0001800a0c30(lVar6);
        lVar6 = lVar12;
        while (lVar11 = lVar6, *(char *)(lVar10 + lVar11) == (&UNK_180a04cc8)[lVar11]) {
          lVar6 = lVar11 + 1;
          if (lVar11 + 1 == 8) {
            FUN_180270d70(param_1 + 0x1c8,&UNK_180a15ff8,lVar5,(int)lVar11 + 0x17);
            goto LAB_1802665d1;
          }
        }
      }
    }
LAB_1802665d1:
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a16008);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x158,&UNK_180a15ff8,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a0b178);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x200,&UNK_180a15ff8,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a15ff8);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x238,&UNK_180a15b70,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a16068);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x2d8,&UNK_180a15b70,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a16078);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 400,&UNK_180a15b70,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a16048);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x310,&UNK_180a15b70,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a16058);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x348,&UNK_180a15b70,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a160b0);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x380,&UNK_180a15b70,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a160c0);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x3b8,&UNK_180a15b70,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a16090);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x3f0,&UNK_180a15ff8,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a05a40);
        if (iVar2 == 0) {
          FUN_180270d70(param_1 + 0x428,&UNK_180a0af54,lVar5,0x1e);
          break;
        }
      }
    }
    for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a15b08,0,1); lVar5 != 0;
        lVar5 = FUN_18005d400(lVar5,&UNK_180a15b08,0,1)) {
      lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
      if (lVar6 != 0) {
        uVar7 = func_0x0001800a0c30(lVar6);
        iVar2 = strcmp(uVar7,&UNK_180a160a0);
        if (iVar2 == 0) {
          uStack_438 = 0x1e;
          FUN_180270ba0(param_1 + 0x270,&UNK_180a15b70,&UNK_180a15ff8,lVar5);
          break;
        }
      }
    }
    FUN_180627910(auStack_3c8,&UNK_180a16128);
    FUN_180627910(auStack_3e8,&system_data_3a84);
    FUN_180627910(auStack_408,&UNK_180a15b08);
    lVar4 = FUN_180632870(lVar4,auStack_408,auStack_3e8,auStack_3c8);
    FUN_180627b90(auStack_408);
    FUN_180627b90(auStack_3e8);
    FUN_180627b90(auStack_3c8);
    if (lVar4 != 0) {
      FUN_1804160b0(param_1 + 0x480,lVar4);
    }
    FUN_180044a30(&puStack_3a8);
    FUN_180044a30(&puStack_a8);
    FUN_180044a30(&puStack_348);
    FUN_180044a30(&puStack_2e8);
    FUN_180044a30(&puStack_288);
    FUN_180044a30(&puStack_228);
    FUN_180044a30(&puStack_1c8);
    FUN_180044a30(&puStack_168);
  }
  lVar4 = FUN_18005d4b0(param_2,&UNK_180a06b78,0,1);
  if (lVar4 == 0) goto LAB_180267e9d;
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15858);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180266df8;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180266de0;
      }
    }
  }
  goto LAB_180266dfd;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180266ea0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffdff;
      goto LAB_180266ec0;
    }
  }
LAB_180266eb8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x200;
  goto LAB_180266ec0;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180266f70:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffd;
      goto LAB_180266f8d;
    }
  }
LAB_180266f88:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
  goto LAB_180266f8d;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267030:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffb;
      goto LAB_18026704d;
    }
  }
LAB_180267048:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 4;
  goto LAB_18026704d;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_1802670f0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffff7;
      goto LAB_18026710d;
    }
  }
LAB_180267108:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
  goto LAB_18026710d;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_1802671b0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffffef;
      goto LAB_1802671cd;
    }
  }
LAB_1802671c8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x10;
  goto LAB_1802671cd;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267270:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffffdf;
      goto LAB_18026728d;
    }
  }
LAB_180267288:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x20;
  goto LAB_18026728d;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267330:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffffbf;
      goto LAB_18026734d;
    }
  }
LAB_180267348:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x40;
  goto LAB_18026734d;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_1802673f0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffff7f;
      goto LAB_180267410;
    }
  }
LAB_180267408:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x80;
  goto LAB_180267410;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_1802674c0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffeff;
      goto LAB_1802674e0;
    }
  }
LAB_1802674d8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x100;
  goto LAB_1802674e0;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267590:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffbffff;
      goto LAB_1802675b0;
    }
  }
LAB_1802675a8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x40000;
  goto LAB_1802675b0;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267660:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfff7ffff;
      goto LAB_180267680;
    }
  }
LAB_180267678:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x80000;
  goto LAB_180267680;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267730:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffbff;
      goto LAB_180267750;
    }
  }
LAB_180267748:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x400;
  goto LAB_180267750;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267800:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffff7ff;
      goto LAB_180267820;
    }
  }
LAB_180267818:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x800;
  goto LAB_180267820;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_1802678d0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffefff;
      goto LAB_1802678f0;
    }
  }
LAB_1802678e8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
  goto LAB_1802678f0;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_1802679a0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffefff;
      goto LAB_1802679c0;
    }
  }
LAB_1802679b8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
  goto LAB_1802679c0;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267a70:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffefffff;
      goto LAB_180267a90;
    }
  }
LAB_180267a88:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x100000;
  goto LAB_180267a90;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267b40:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffdfff;
      goto LAB_180267b60;
    }
  }
LAB_180267b58:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x2000;
  goto LAB_180267b60;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267c10:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffbfff;
      goto LAB_180267c30;
    }
  }
LAB_180267c28:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x4000;
  goto LAB_180267c30;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267ce0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffff7fff;
      goto LAB_180267d00;
    }
  }
LAB_180267cf8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x8000;
  goto LAB_180267d00;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180267db0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffeffff;
      goto LAB_180267dd0;
    }
  }
LAB_180267dc8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x10000;
  goto LAB_180267dd0;
  while (lVar12 = lVar5, lVar5 != 5) {
LAB_180267e80:
    lVar5 = lVar12 + 1;
    if (*(char *)(lVar4 + lVar12) != (&UNK_180a06418)[lVar12]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffdffff;
      goto LAB_180267e9d;
    }
  }
LAB_180267e95:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x20000;
  goto LAB_180267e9d;
  while (lVar5 = lVar10, lVar10 != 5) {
LAB_180266de0:
    lVar10 = lVar5 + 1;
    if (*(char *)(lVar6 + lVar5) != (&UNK_180a06418)[lVar5]) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe;
      goto LAB_180266dfd;
    }
  }
LAB_180266df8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
LAB_180266dfd:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15940);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180266eb8;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180266ea0;
      }
    }
  }
LAB_180266ec0:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15870);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180266f88;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180266f70;
      }
    }
  }
LAB_180266f8d:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15838);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267048;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267030;
      }
    }
  }
LAB_18026704d:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15848);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267108;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_1802670f0;
      }
    }
  }
LAB_18026710d:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a158c0);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_1802671c8;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_1802671b0;
      }
    }
  }
LAB_1802671cd:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a158d8);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267288;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267270;
      }
    }
  }
LAB_18026728d:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15880);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267348;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267330;
      }
    }
  }
LAB_18026734d:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a158a8);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267408;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_1802673f0;
      }
    }
  }
LAB_180267410:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15930);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_1802674d8;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_1802674c0;
      }
    }
  }
LAB_1802674e0:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a159d8);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_1802675a8;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267590;
      }
    }
  }
LAB_1802675b0:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a159f8);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267678;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267660;
      }
    }
  }
LAB_180267680:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15900);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267748;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267730;
      }
    }
  }
LAB_180267750:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15918);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267818;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267800;
      }
    }
  }
LAB_180267820:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a16138);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_1802678e8;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_1802678d0;
      }
    }
  }
LAB_1802678f0:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15990);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_1802679b8;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_1802679a0;
      }
    }
  }
LAB_1802679c0:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a160d8);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267a88;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267a70;
      }
    }
  }
LAB_180267a90:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a159b0);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267b58;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267b40;
      }
    }
  }
LAB_180267b60:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15958);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267c28;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267c10;
      }
    }
  }
LAB_180267c30:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15978);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267cf8;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267ce0;
      }
    }
  }
LAB_180267d00:
  for (lVar5 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar5 != 0;
      lVar5 = FUN_18005d400(lVar5,&UNK_180a06ba4,0,1)) {
    lVar6 = FUN_1800a02a0(lVar5,&system_data_3a84,0,1);
    lVar10 = FUN_1800a02a0(lVar5,&UNK_180a0696c,0,1);
    if (lVar6 != 0) {
      uVar7 = func_0x0001800a0c30(lVar6);
      iVar2 = strcmp(uVar7,&UNK_180a15a18);
      if (iVar2 == 0) {
        if (lVar10 == 0) goto LAB_180267dc8;
        lVar6 = func_0x0001800a0c30(lVar10);
        lVar5 = lVar12;
        goto LAB_180267db0;
      }
    }
  }
LAB_180267dd0:
  for (lVar4 = FUN_18005d4b0(lVar4,&UNK_180a06ba4,0,1); lVar4 != 0;
      lVar4 = FUN_18005d400(lVar4,&UNK_180a06ba4,0,1)) {
    lVar5 = FUN_1800a02a0(lVar4,&system_data_3a84,0,1);
    lVar6 = FUN_1800a02a0(lVar4,&UNK_180a0696c,0,1);
    if (lVar5 != 0) {
      uVar7 = func_0x0001800a0c30(lVar5);
      iVar2 = strcmp(uVar7,&UNK_180a15a30);
      if (iVar2 == 0) {
        if (lVar6 == 0) goto LAB_180267e95;
        lVar4 = func_0x0001800a0c30(lVar6);
        goto LAB_180267e80;
      }
    }
  }
LAB_180267e9d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_458);
}








