#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part216.c - 4 个函数

// 函数: void FUN_1801912b0(int64_t param_1,int64_t *param_2,int64_t *param_3,int8_t param_4)
void FUN_1801912b0(int64_t param_1,int64_t *param_2,int64_t *param_3,int8_t param_4)

{
  int64_t *plVar1;
  byte *pbVar2;
  bool bVar3;
  int64_t lVar4;
  byte *pbVar5;
  void *puVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t lVar11;
  int8_t auStack_378 [848];
  
  lVar11 = (int64_t)param_2 - param_1;
  lVar4 = lVar11 / 0x348;
  if (1 < lVar4) {
    lVar10 = (lVar4 + -2 >> 1) + 1;
    lVar8 = lVar10 * 0x348 + param_1;
    do {
      lVar10 = lVar10 + -1;
      lVar8 = lVar8 + -0x348;
      FUN_18018e7e0(auStack_378,lVar8);
      FUN_1801917b0(param_1,lVar10,lVar4,lVar10,auStack_378,param_4);
      FUN_1801431d0(auStack_378);
    } while (lVar10 != 0);
  }
  if (param_2 < param_3) {
    plVar9 = param_2 + 2;
    do {
      puVar6 = &system_buffer_ptr;
      if ((void *)*plVar9 != (void *)0x0) {
        puVar6 = (void *)*plVar9;
      }
      lVar8 = strstr(puVar6,&ui_system_data_1588_ptr);
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x10);
      }
      lVar10 = strstr(puVar6,&ui_system_data_1588_ptr);
      if (lVar8 == 0) {
        if (lVar10 == 0) {
          if (*(int *)(param_1 + 0x18) == 0) {
            bVar3 = false;
          }
          else {
            if ((int)plVar9[1] == 0) goto LAB_18019144a;
            pbVar5 = *(byte **)(param_1 + 0x10);
            lVar8 = *plVar9 - (int64_t)pbVar5;
            do {
              pbVar2 = pbVar5 + lVar8;
              iVar7 = (uint)*pbVar5 - (uint)*pbVar2;
              if (iVar7 != 0) break;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar2 != 0);
LAB_180191443:
            bVar3 = 0 < iVar7;
          }
        }
        else {
          bVar3 = false;
        }
      }
      else if (lVar10 == 0) {
LAB_18019144a:
        bVar3 = true;
      }
      else if (*(int *)(param_1 + 0x18) == 0) {
        bVar3 = false;
      }
      else {
        if ((int)plVar9[1] == 0) goto LAB_18019144a;
        pbVar5 = *(byte **)(param_1 + 0x10);
        lVar8 = *plVar9 - (int64_t)pbVar5;
        do {
          pbVar2 = pbVar5 + lVar8;
          iVar7 = (uint)*pbVar5 - (uint)*pbVar2;
          if (iVar7 != 0) goto LAB_180191443;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar2 != 0);
        bVar3 = false;
      }
      if (bVar3) {
        FUN_18018e7e0(auStack_378,plVar9 + -2);
        FUN_18018d8f0(plVar9 + -2,param_1);
        FUN_1801917b0(param_1,0,lVar4,0,auStack_378,param_4);
        FUN_1801431d0(auStack_378);
      }
      plVar1 = plVar9 + 0x67;
      plVar9 = plVar9 + 0x69;
    } while (plVar1 < param_3);
  }
  if (1 < lVar4) {
    do {
      FUN_18018e7e0(auStack_378,lVar11 + param_1 + -0x348);
      FUN_18018d8f0(lVar11 + param_1 + -0x348,param_1);
      FUN_1801917b0(param_1,0,lVar11 / 0x348 + -1,0,auStack_378,param_4);
      FUN_1801431d0(auStack_378);
      lVar11 = lVar11 + -0x348;
    } while (0x68f < lVar11);
  }
  return;
}



uint64_t FUN_180191560(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  byte *pbVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte *pbVar4;
  void *puVar5;
  int iVar6;
  uint64_t uVar7;
  bool bVar8;
  int8_t auStack_358 [848];
  
  do {
    while( true ) {
      puVar5 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x10) != (void *)0x0) {
        puVar5 = *(void **)(param_1 + 0x10);
      }
      lVar2 = strstr(puVar5,&ui_system_data_1588_ptr);
      puVar5 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x10) != (void *)0x0) {
        puVar5 = *(void **)(param_3 + 0x10);
      }
      lVar3 = strstr(puVar5,&ui_system_data_1588_ptr);
      bVar8 = lVar3 != 0;
      if (lVar2 != 0) break;
      if (!bVar8) {
        if (*(int *)(param_3 + 0x18) != 0) {
          if (*(int *)(param_1 + 0x18) == 0) goto LAB_18019165a;
          pbVar4 = *(byte **)(param_3 + 0x10);
          lVar2 = *(int64_t *)(param_1 + 0x10) - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar2;
            iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
LAB_180191653:
          bVar8 = 0 < iVar6;
        }
        goto LAB_18019165c;
      }
LAB_18019166c:
      do {
        uVar7 = param_2;
        param_2 = uVar7 - 0x348;
        puVar5 = &system_buffer_ptr;
        if (*(void **)(param_3 + 0x10) != (void *)0x0) {
          puVar5 = *(void **)(param_3 + 0x10);
        }
        lVar2 = strstr(puVar5,&ui_system_data_1588_ptr);
        puVar5 = &system_buffer_ptr;
        if (*(void **)(uVar7 - 0x338) != (void *)0x0) {
          puVar5 = *(void **)(uVar7 - 0x338);
        }
        lVar3 = strstr(puVar5,&ui_system_data_1588_ptr);
        bVar8 = lVar3 != 0;
        if (lVar2 == 0) {
          if (bVar8) break;
          if (*(int *)(uVar7 - 0x330) != 0) {
            if (*(int *)(param_3 + 0x18) == 0) goto LAB_18019173a;
            pbVar4 = *(byte **)(uVar7 - 0x338);
            lVar2 = *(int64_t *)(param_3 + 0x10) - (int64_t)pbVar4;
            do {
              pbVar1 = pbVar4 + lVar2;
              iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
              if (iVar6 != 0) break;
              pbVar4 = pbVar4 + 1;
            } while (*pbVar1 != 0);
LAB_180191733:
            bVar8 = 0 < iVar6;
          }
        }
        else {
          if (!bVar8) goto LAB_18019166c;
          if (*(int *)(uVar7 - 0x330) == 0) {
            bVar8 = false;
          }
          else if (*(int *)(param_3 + 0x18) == 0) {
LAB_18019173a:
            bVar8 = true;
          }
          else {
            pbVar4 = *(byte **)(uVar7 - 0x338);
            lVar2 = *(int64_t *)(param_3 + 0x10) - (int64_t)pbVar4;
            do {
              pbVar1 = pbVar4 + lVar2;
              iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
              if (iVar6 != 0) goto LAB_180191733;
              pbVar4 = pbVar4 + 1;
            } while (*pbVar1 != 0);
            bVar8 = false;
          }
        }
      } while (bVar8);
      if (param_2 <= param_1) {
        return param_1;
      }
      FUN_18018e7e0(auStack_358,param_1);
      FUN_18018d8f0(param_1,param_2);
      FUN_18018d8f0(param_2,auStack_358);
      FUN_1801431d0(auStack_358);
      param_1 = param_1 + 0x348;
    }
    if (bVar8) {
      if (*(int *)(param_3 + 0x18) == 0) {
        bVar8 = false;
      }
      else if (*(int *)(param_1 + 0x18) == 0) {
LAB_18019165a:
        bVar8 = true;
      }
      else {
        pbVar4 = *(byte **)(param_3 + 0x10);
        lVar2 = *(int64_t *)(param_1 + 0x10) - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar2;
          iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar6 != 0) goto LAB_180191653;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
        bVar8 = false;
      }
LAB_18019165c:
      if (!bVar8) goto LAB_18019166c;
    }
    param_1 = param_1 + 0x348;
  } while( true );
}



int64_t FUN_1801917b0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                      int64_t param_5)

{
  byte *pbVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  byte *pbVar10;
  void *puVar11;
  int iVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  bool bVar16;
  
  lVar14 = param_4 * 2;
  while (lVar15 = lVar14 + 2, lVar15 < param_3) {
    lVar13 = lVar15 * 0x348 + param_1;
    puVar11 = &system_buffer_ptr;
    if (*(void **)(lVar13 + 0x10) != (void *)0x0) {
      puVar11 = *(void **)(lVar13 + 0x10);
    }
    lVar8 = strstr(puVar11,&ui_system_data_1588_ptr);
    puVar11 = &system_buffer_ptr;
    if (*(void **)(lVar13 + -0x338) != (void *)0x0) {
      puVar11 = *(void **)(lVar13 + -0x338);
    }
    lVar9 = strstr(puVar11,&ui_system_data_1588_ptr);
    if (lVar8 == 0) {
      if (lVar9 == 0) {
        if (*(int *)(lVar13 + -0x330) == 0) {
          bVar16 = false;
        }
        else {
          if (*(int *)(lVar13 + 0x18) == 0) goto LAB_1801918cd;
          pbVar10 = *(byte **)(lVar13 + -0x338);
          lVar13 = *(int64_t *)(lVar13 + 0x10) - (int64_t)pbVar10;
          do {
            pbVar1 = pbVar10 + lVar13;
            iVar12 = (uint)*pbVar10 - (uint)*pbVar1;
            if (iVar12 != 0) break;
            pbVar10 = pbVar10 + 1;
          } while (*pbVar1 != 0);
LAB_1801918c6:
          bVar16 = 0 < iVar12;
        }
      }
      else {
        bVar16 = false;
      }
    }
    else if (lVar9 == 0) {
LAB_1801918cd:
      bVar16 = true;
    }
    else if (*(int *)(lVar13 + -0x330) == 0) {
      bVar16 = false;
    }
    else {
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_1801918cd;
      pbVar10 = *(byte **)(lVar13 + -0x338);
      lVar13 = *(int64_t *)(lVar13 + 0x10) - (int64_t)pbVar10;
      do {
        pbVar1 = pbVar10 + lVar13;
        iVar12 = (uint)*pbVar10 - (uint)*pbVar1;
        if (iVar12 != 0) goto LAB_1801918c6;
        pbVar10 = pbVar10 + 1;
      } while (*pbVar1 != 0);
      bVar16 = false;
    }
    lVar13 = lVar14 + 1;
    if (!bVar16) {
      lVar13 = lVar15;
    }
    FUN_18018d8f0(param_4 * 0x348 + param_1,lVar13 * 0x348 + param_1);
    param_4 = lVar13;
    lVar14 = lVar13 * 2;
  }
  if (lVar15 == param_3) {
    FUN_18018d8f0(param_4 * 0x348 + param_1,param_1 + -0x348 + lVar15 * 0x348);
    param_4 = lVar14 + 1;
  }
  while (param_2 < param_4) {
    lVar15 = param_4 + -1 >> 1;
    lVar14 = lVar15 * 0x348 + param_1;
    puVar11 = &system_buffer_ptr;
    if (*(void **)(lVar14 + 0x10) != (void *)0x0) {
      puVar11 = *(void **)(lVar14 + 0x10);
    }
    lVar13 = strstr(puVar11,&ui_system_data_1588_ptr);
    puVar11 = &system_buffer_ptr;
    if (*(void **)(param_5 + 0x10) != (void *)0x0) {
      puVar11 = *(void **)(param_5 + 0x10);
    }
    lVar8 = strstr(puVar11,&ui_system_data_1588_ptr);
    bVar16 = lVar8 != 0;
    if (lVar13 == 0) {
      if (bVar16) break;
      if (*(int *)(param_5 + 0x18) != 0) {
        if (*(int *)(lVar14 + 0x18) == 0) {
LAB_180191a1a:
          bVar16 = true;
        }
        else {
          pbVar10 = *(byte **)(param_5 + 0x10);
          lVar13 = *(int64_t *)(lVar14 + 0x10) - (int64_t)pbVar10;
          do {
            pbVar1 = pbVar10 + lVar13;
            iVar12 = (uint)*pbVar10 - (uint)*pbVar1;
            if (iVar12 != 0) break;
            pbVar10 = pbVar10 + 1;
          } while (*pbVar1 != 0);
LAB_180191a13:
          bVar16 = 0 < iVar12;
        }
      }
LAB_180191a1c:
      if (!bVar16) break;
    }
    else if (bVar16) {
      if (*(int *)(param_5 + 0x18) == 0) {
        bVar16 = false;
      }
      else {
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_180191a1a;
        pbVar10 = *(byte **)(param_5 + 0x10);
        lVar13 = *(int64_t *)(lVar14 + 0x10) - (int64_t)pbVar10;
        do {
          pbVar1 = pbVar10 + lVar13;
          iVar12 = (uint)*pbVar10 - (uint)*pbVar1;
          if (iVar12 != 0) goto LAB_180191a13;
          pbVar10 = pbVar10 + 1;
        } while (*pbVar1 != 0);
        bVar16 = false;
      }
      goto LAB_180191a1c;
    }
    FUN_18018d8f0(param_4 * 0x348 + param_1,lVar14);
    param_4 = lVar15;
  }
  param_1 = param_4 * 0x348 + param_1;
  SystemCore_ConfigurationHandler0(param_1 + 8,param_5 + 8);
  *(int32_t *)(param_1 + 0x28) = *(int32_t *)(param_5 + 0x28);
  *(int32_t *)(param_1 + 0x2c) = *(int32_t *)(param_5 + 0x2c);
  *(int32_t *)(param_1 + 0x30) = *(int32_t *)(param_5 + 0x30);
  *(int32_t *)(param_1 + 0x34) = *(int32_t *)(param_5 + 0x34);
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(param_5 + 0x38);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(param_5 + 0x3c);
  *(int32_t *)(param_1 + 0x40) = *(int32_t *)(param_5 + 0x40);
  SystemCore_ConfigurationHandler0(param_1 + 0x48,param_5 + 0x48);
  plVar2 = *(int64_t **)(param_5 + 0x68);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x68);
  *(int64_t **)(param_1 + 0x68) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  SystemCore_ConfigurationHandler0(param_1 + 0x70,param_5 + 0x70);
  plVar2 = *(int64_t **)(param_5 + 0x90);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x90);
  *(int64_t **)(param_1 + 0x90) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x98) = *(int32_t *)(param_5 + 0x98);
  *(int32_t *)(param_1 + 0x9c) = *(int32_t *)(param_5 + 0x9c);
  *(int32_t *)(param_1 + 0xa0) = *(int32_t *)(param_5 + 0xa0);
  *(int32_t *)(param_1 + 0xa4) = *(int32_t *)(param_5 + 0xa4);
  *(int32_t *)(param_1 + 0xa8) = *(int32_t *)(param_5 + 0xa8);
  *(int32_t *)(param_1 + 0xac) = *(int32_t *)(param_5 + 0xac);
  *(int32_t *)(param_1 + 0xb0) = *(int32_t *)(param_5 + 0xb0);
  *(int32_t *)(param_1 + 0xb4) = *(int32_t *)(param_5 + 0xb4);
  *(int32_t *)(param_1 + 0xb8) = *(int32_t *)(param_5 + 0xb8);
  *(int32_t *)(param_1 + 0xbc) = *(int32_t *)(param_5 + 0xbc);
  *(int32_t *)(param_1 + 0xc0) = *(int32_t *)(param_5 + 0xc0);
  uVar7 = *(uint64_t *)(param_5 + 0xcc);
  *(uint64_t *)(param_1 + 0xc4) = *(uint64_t *)(param_5 + 0xc4);
  *(uint64_t *)(param_1 + 0xcc) = uVar7;
  uVar7 = *(uint64_t *)(param_5 + 0xdc);
  *(uint64_t *)(param_1 + 0xd4) = *(uint64_t *)(param_5 + 0xd4);
  *(uint64_t *)(param_1 + 0xdc) = uVar7;
  uVar7 = *(uint64_t *)(param_5 + 0xec);
  *(uint64_t *)(param_1 + 0xe4) = *(uint64_t *)(param_5 + 0xe4);
  *(uint64_t *)(param_1 + 0xec) = uVar7;
  uVar7 = *(uint64_t *)(param_5 + 0xfc);
  *(uint64_t *)(param_1 + 0xf4) = *(uint64_t *)(param_5 + 0xf4);
  *(uint64_t *)(param_1 + 0xfc) = uVar7;
  uVar4 = *(int32_t *)(param_5 + 0x108);
  uVar5 = *(int32_t *)(param_5 + 0x10c);
  uVar6 = *(int32_t *)(param_5 + 0x110);
  *(int32_t *)(param_1 + 0x104) = *(int32_t *)(param_5 + 0x104);
  *(int32_t *)(param_1 + 0x108) = uVar4;
  *(int32_t *)(param_1 + 0x10c) = uVar5;
  *(int32_t *)(param_1 + 0x110) = uVar6;
  *(int32_t *)(param_1 + 0x114) = *(int32_t *)(param_5 + 0x114);
  *(int32_t *)(param_1 + 0x118) = *(int32_t *)(param_5 + 0x118);
  *(int32_t *)(param_1 + 0x11c) = *(int32_t *)(param_5 + 0x11c);
  *(int32_t *)(param_1 + 0x120) = *(int32_t *)(param_5 + 0x120);
  *(int32_t *)(param_1 + 0x124) = *(int32_t *)(param_5 + 0x124);
  *(int32_t *)(param_1 + 0x128) = *(int32_t *)(param_5 + 0x128);
  *(int32_t *)(param_1 + 300) = *(int32_t *)(param_5 + 300);
  SystemCore_ConfigurationHandler0(param_1 + 0x130,param_5 + 0x130);
  plVar2 = *(int64_t **)(param_5 + 0x150);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x150);
  *(int64_t **)(param_1 + 0x150) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  SystemCore_ConfigurationHandler0(param_1 + 0x158,param_5 + 0x158);
  plVar2 = *(int64_t **)(param_5 + 0x178);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x178);
  *(int64_t **)(param_1 + 0x178) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x180) = *(int32_t *)(param_5 + 0x180);
  SystemCore_ConfigurationHandler0(param_1 + 0x188,param_5 + 0x188);
  plVar2 = *(int64_t **)(param_5 + 0x1a8);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x1a8);
  *(int64_t **)(param_1 + 0x1a8) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar2 = *(int64_t **)(param_5 + 0x1b0);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x1b0);
  *(int64_t **)(param_1 + 0x1b0) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x1b8) = *(int32_t *)(param_5 + 0x1b8);
  *(int32_t *)(param_1 + 0x1bc) = *(int32_t *)(param_5 + 0x1bc);
  uVar4 = *(int32_t *)(param_5 + 0x1c4);
  uVar5 = *(int32_t *)(param_5 + 0x1c8);
  uVar6 = *(int32_t *)(param_5 + 0x1cc);
  *(int32_t *)(param_1 + 0x1c0) = *(int32_t *)(param_5 + 0x1c0);
  *(int32_t *)(param_1 + 0x1c4) = uVar4;
  *(int32_t *)(param_1 + 0x1c8) = uVar5;
  *(int32_t *)(param_1 + 0x1cc) = uVar6;
  *(int32_t *)(param_1 + 0x1d0) = *(int32_t *)(param_5 + 0x1d0);
  *(int32_t *)(param_1 + 0x1d4) = *(int32_t *)(param_5 + 0x1d4);
  *(int32_t *)(param_1 + 0x1d8) = *(int32_t *)(param_5 + 0x1d8);
  *(int32_t *)(param_1 + 0x1dc) = *(int32_t *)(param_5 + 0x1dc);
  *(int32_t *)(param_1 + 0x1e0) = *(int32_t *)(param_5 + 0x1e0);
  *(int32_t *)(param_1 + 0x1e4) = *(int32_t *)(param_5 + 0x1e4);
  *(int32_t *)(param_1 + 0x1e8) = *(int32_t *)(param_5 + 0x1e8);
  *(int32_t *)(param_1 + 0x1ec) = *(int32_t *)(param_5 + 0x1ec);
  *(int32_t *)(param_1 + 0x1f0) = *(int32_t *)(param_5 + 0x1f0);
  *(int32_t *)(param_1 + 500) = *(int32_t *)(param_5 + 500);
  *(int32_t *)(param_1 + 0x1f8) = *(int32_t *)(param_5 + 0x1f8);
  *(int32_t *)(param_1 + 0x1fc) = *(int32_t *)(param_5 + 0x1fc);
  *(int32_t *)(param_1 + 0x200) = *(int32_t *)(param_5 + 0x200);
  *(int32_t *)(param_1 + 0x204) = *(int32_t *)(param_5 + 0x204);
  *(int32_t *)(param_1 + 0x208) = *(int32_t *)(param_5 + 0x208);
  *(int32_t *)(param_1 + 0x20c) = *(int32_t *)(param_5 + 0x20c);
  *(int32_t *)(param_1 + 0x210) = *(int32_t *)(param_5 + 0x210);
  *(int32_t *)(param_1 + 0x214) = *(int32_t *)(param_5 + 0x214);
  *(int32_t *)(param_1 + 0x218) = *(int32_t *)(param_5 + 0x218);
  *(int32_t *)(param_1 + 0x21c) = *(int32_t *)(param_5 + 0x21c);
  *(int32_t *)(param_1 + 0x220) = *(int32_t *)(param_5 + 0x220);
  *(int32_t *)(param_1 + 0x224) = *(int32_t *)(param_5 + 0x224);
  *(int32_t *)(param_1 + 0x228) = *(int32_t *)(param_5 + 0x228);
  *(int32_t *)(param_1 + 0x22c) = *(int32_t *)(param_5 + 0x22c);
  *(int32_t *)(param_1 + 0x230) = *(int32_t *)(param_5 + 0x230);
  *(int32_t *)(param_1 + 0x234) = *(int32_t *)(param_5 + 0x234);
  SystemCore_ConfigurationHandler0(param_1 + 0x238,param_5 + 0x238);
  plVar2 = *(int64_t **)(param_5 + 600);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 600);
  *(int64_t **)(param_1 + 600) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  SystemCore_ConfigurationHandler0(param_1 + 0x260,param_5 + 0x260);
  plVar2 = *(int64_t **)(param_5 + 0x280);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(int64_t **)(param_1 + 0x280);
  *(int64_t **)(param_1 + 0x280) = plVar2;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x288) = *(int32_t *)(param_5 + 0x288);
  *(int32_t *)(param_1 + 0x28c) = *(int32_t *)(param_5 + 0x28c);
  *(int32_t *)(param_1 + 0x290) = *(int32_t *)(param_5 + 0x290);
  *(int32_t *)(param_1 + 0x294) = *(int32_t *)(param_5 + 0x294);
  *(int32_t *)(param_1 + 0x298) = *(int32_t *)(param_5 + 0x298);
  uVar4 = *(int32_t *)(param_5 + 0x2a0);
  uVar5 = *(int32_t *)(param_5 + 0x2a4);
  uVar6 = *(int32_t *)(param_5 + 0x2a8);
  *(int32_t *)(param_1 + 0x29c) = *(int32_t *)(param_5 + 0x29c);
  *(int32_t *)(param_1 + 0x2a0) = uVar4;
  *(int32_t *)(param_1 + 0x2a4) = uVar5;
  *(int32_t *)(param_1 + 0x2a8) = uVar6;
  *(int32_t *)(param_1 + 0x2ac) = *(int32_t *)(param_5 + 0x2ac);
  *(int32_t *)(param_1 + 0x2b0) = *(int32_t *)(param_5 + 0x2b0);
  *(int32_t *)(param_1 + 0x2b4) = *(int32_t *)(param_5 + 0x2b4);
  *(int32_t *)(param_1 + 0x2b8) = *(int32_t *)(param_5 + 0x2b8);
  *(int32_t *)(param_1 + 700) = *(int32_t *)(param_5 + 700);
  *(int32_t *)(param_1 + 0x2c0) = *(int32_t *)(param_5 + 0x2c0);
  *(int32_t *)(param_1 + 0x2c4) = *(int32_t *)(param_5 + 0x2c4);
  *(int32_t *)(param_1 + 0x2c8) = *(int32_t *)(param_5 + 0x2c8);
  *(int32_t *)(param_1 + 0x2cc) = *(int32_t *)(param_5 + 0x2cc);
  *(int32_t *)(param_1 + 0x2d0) = *(int32_t *)(param_5 + 0x2d0);
  *(int32_t *)(param_1 + 0x2d4) = *(int32_t *)(param_5 + 0x2d4);
  *(int32_t *)(param_1 + 0x2d8) = *(int32_t *)(param_5 + 0x2d8);
  *(int32_t *)(param_1 + 0x2dc) = *(int32_t *)(param_5 + 0x2dc);
  *(int32_t *)(param_1 + 0x2e0) = *(int32_t *)(param_5 + 0x2e0);
  *(int32_t *)(param_1 + 0x2e4) = *(int32_t *)(param_5 + 0x2e4);
  *(int32_t *)(param_1 + 0x2e8) = *(int32_t *)(param_5 + 0x2e8);
  *(int32_t *)(param_1 + 0x2ec) = *(int32_t *)(param_5 + 0x2ec);
  *(int32_t *)(param_1 + 0x2f0) = *(int32_t *)(param_5 + 0x2f0);
  *(int32_t *)(param_1 + 0x2f4) = *(int32_t *)(param_5 + 0x2f4);
  *(int32_t *)(param_1 + 0x2f8) = *(int32_t *)(param_5 + 0x2f8);
  *(int32_t *)(param_1 + 0x2fc) = *(int32_t *)(param_5 + 0x2fc);
  *(int32_t *)(param_1 + 0x300) = *(int32_t *)(param_5 + 0x300);
  *(int8_t *)(param_1 + 0x304) = *(int8_t *)(param_5 + 0x304);
  *(int8_t *)(param_1 + 0x305) = *(int8_t *)(param_5 + 0x305);
  *(int8_t *)(param_1 + 0x306) = *(int8_t *)(param_5 + 0x306);
  *(int32_t *)(param_1 + 0x308) = *(int32_t *)(param_5 + 0x308);
  *(int32_t *)(param_1 + 0x30c) = *(int32_t *)(param_5 + 0x30c);
  *(int32_t *)(param_1 + 0x310) = *(int32_t *)(param_5 + 0x310);
  *(int32_t *)(param_1 + 0x314) = *(int32_t *)(param_5 + 0x314);
  *(int8_t *)(param_1 + 0x318) = *(int8_t *)(param_5 + 0x318);
  SystemCore_ConfigurationHandler0(param_1 + 800,param_5 + 800);
  *(int32_t *)(param_1 + 0x340) = *(int32_t *)(param_5 + 0x340);
  return param_1;
}



int32_t RenderingSystem_PostProcessor(int64_t param_1)

{
  byte bVar1;
  uint64_t *puVar2;
  bool bVar3;
  int32_t uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  void *puStack_30;
  byte *pbStack_28;
  int iStack_20;
  
  puVar2 = *(uint64_t **)(param_1 + 0x30);
  SystemCore_EncryptionEngine0(&puStack_30);
  puVar10 = (uint64_t *)puVar2[2];
  puVar8 = puVar2;
  if (puVar10 != (uint64_t *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar3 = false;
        puVar11 = (uint64_t *)puVar10[1];
      }
      else {
        if (*(int *)(puVar10 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar5 = pbStack_28;
          do {
            uVar6 = (uint)pbVar5[puVar10[5] - (int64_t)pbStack_28];
            iVar7 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar3 = 0 < iVar7;
          if (iVar7 < 1) {
            puVar11 = (uint64_t *)puVar10[1];
            goto LAB_180191c97;
          }
        }
        puVar11 = (uint64_t *)*puVar10;
      }
LAB_180191c97:
      puVar9 = puVar10;
      if (bVar3) {
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      puVar10 = puVar11;
    } while (puVar11 != (uint64_t *)0x0);
    if (puVar9 != puVar2) {
      if (*(int *)(puVar9 + 6) == 0) goto LAB_180191cda;
      if (iStack_20 != 0) {
        pbVar5 = (byte *)puVar9[5];
        lVar12 = (int64_t)pbStack_28 - (int64_t)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar12];
          if (bVar1 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_180191cda;
      }
    }
  }
  puVar9 = puVar2;
LAB_180191cda:
  puStack_30 = &system_data_buffer_ptr;
  if (pbStack_28 == (byte *)0x0) {
    if (puVar9 == *(uint64_t **)(param_1 + 0x30)) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(int32_t *)(puVar9[8] + 100);
    }
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}





// 函数: void FUN_180191d40(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180191d40(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(param_1 + 0x30);
  if (lVar1 != 0) {
    RenderingSystem_CameraSystem(lVar1,*(uint64_t *)(lVar1 + 0x10));
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar1);
  }
  uVar4 = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  lVar1 = *(int64_t *)(param_1 + 0x38);
  if (lVar1 == 0) {
    *(int32_t *)(param_1 + 0x40) = 0;
    *(uint64_t *)(param_1 + 0x38) = 0;
    return;
  }
  uVar2 = *(uint64_t *)(lVar1 + -0x10);
  uVar3 = uVar2 >> 0x20;
  if ((int)(uVar2 >> 0x20) != 0) {
    do {
      (*(code *)**(uint64_t **)(uVar4 + lVar1))
                ((uint64_t *)(uVar4 + lVar1),0,param_3,param_4,uVar5);
      uVar4 = (uint64_t)(uint)((int)uVar4 + (int)uVar2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(lVar1 + -0x10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180191df0(int64_t param_1,int param_2)
void FUN_180191df0(int64_t param_1,int param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  
  lVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3,0xfffffffffffffffe);
  uVar3 = 0;
  *(int32_t *)(lVar1 + 0x19) = 0;
  *(int16_t *)(lVar1 + 0x1d) = 0;
  *(int8_t *)(lVar1 + 0x1f) = 0;
  *(int32_t *)(lVar1 + 0x28) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(lVar1 + 8) = lVar1;
  *(uint64_t *)(lVar1 + 0x10) = 0;
  *(int8_t *)(lVar1 + 0x18) = 0;
  *(uint64_t *)(lVar1 + 0x20) = 0;
  *(int64_t *)(param_1 + 0x30) = lVar1;
  *(int *)(param_1 + 0x40) = param_2;
  uVar2 = FUN_180193bc0((int64_t)param_2);
  *(uint64_t *)(param_1 + 0x38) = uVar2;
  uVar5 = uVar3;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      *(int *)(*(int64_t *)(param_1 + 0x38) + 100 + uVar3) = (int)uVar5;
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 0x68;
      uVar5 = (uint64_t)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x40));
  }
  return;
}





// 函数: void FUN_180191ea0(void)
void FUN_180191ea0(void)

{
                    // WARNING: Subroutine does not return
  SystemEventProcessor();
}





