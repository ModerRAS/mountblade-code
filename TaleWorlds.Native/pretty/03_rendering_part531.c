#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
// 03_rendering_part531.c - 2 个函数
// 函数: void function_5588b0(int32_t *param_1,int64_t param_2)
void function_5588b0(int32_t *param_1,int64_t param_2)
{
  void *puVar1;
  int iVar2;
  int32_t uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t lVar7;
  void *puVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  void *plocal_var_b8;
  int64_t lStack_b0;
  int iStack_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int64_t lStack_90;
  int iStack_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  int iStack_68;
  uint64_t local_var_60;
  void *plocal_var_58;
  void *plocal_var_50;
  int iStack_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  pcVar11 = (char *)0x0;
  plocal_var_58 = &system_data_buffer_ptr;
  local_var_40 = 0;
  plocal_var_50 = (void *)0x0;
  iStack_48 = 0;
  pcVar10 = "direction";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a35197) {
      pcVar10 = pcVar10 + (int64_t)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180558980:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_58,lVar7);
        break;
      }
      lVar7 = (int64_t)&processed_var_4200_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180558980;
      }
    }
  }
  puVar1 = plocal_var_50;
  pcVar5 = pcVar11;
  pcVar10 = pcVar11;
  pcVar6 = pcVar11;
  if (iStack_48 == 4) {
    do {
      pcVar4 = pcVar5 + 1;
      if (pcVar5[(int64_t)plocal_var_50] != pcVar5[0x180a34bc8]) goto LAB_180558a52;
      pcVar5 = pcVar4;
    } while (pcVar4 != (char *)0x5);
    param_1[1] = 0;
  }
  else if (iStack_48 == 5) {
    do {
      pcVar5 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_50] != pcVar10[0x180a34b7c]) goto LAB_180558a20;
      pcVar10 = pcVar5;
    } while (pcVar5 != (char *)0x6);
    param_1[1] = 1;
  }
  else if (iStack_48 == 4) {
LAB_180558a52:
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(int64_t)plocal_var_50] != pcVar6[0x180a35288]) goto LAB_180558b10;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x5);
    param_1[1] = 5;
  }
  else {
    if (iStack_48 == 0xb) {
      iVar2 = strcmp(plocal_var_50,&processed_var_4472_ptr);
      if (iVar2 == 0) {
        param_1[1] = 4;
        goto LAB_180558b46;
      }
    }
    else if (iStack_48 == 10) {
      iVar2 = strcmp(plocal_var_50,&processed_var_4456_ptr);
      if (iVar2 == 0) {
        param_1[1] = 3;
        goto LAB_180558b46;
      }
      iVar2 = strcmp(puVar1,&processed_var_4392_ptr);
      if (iVar2 == 0) {
        param_1[1] = 7;
        goto LAB_180558b46;
      }
    }
    else if (iStack_48 == 9) {
      iVar2 = strcmp(plocal_var_50,&processed_var_4376_ptr);
      if (iVar2 == 0) {
        param_1[1] = 6;
        goto LAB_180558b46;
      }
    }
    else if (iStack_48 == 4) {
LAB_180558b10:
      do {
        pcVar6 = pcVar10 + 1;
        if (pcVar10[(int64_t)plocal_var_50] != pcVar10[0x180a0b57c]) goto LAB_180558b2c;
        pcVar10 = pcVar6;
      } while (pcVar6 != (char *)0x5);
      param_1[1] = 0xffffffff;
      goto LAB_180558b46;
    }
LAB_180558b2c:
    puVar8 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar8 = puVar1;
    }
    SystemDataInitializer(&processed_var_4416_ptr,puVar8);
  }
  goto LAB_180558b46;
  while (pcVar6 = pcVar10, pcVar10 != (char *)0x6) {
LAB_180558a20:
    pcVar10 = pcVar6 + 1;
    if (pcVar6[(int64_t)plocal_var_50] != pcVar6[0x180a35290]) goto LAB_180558b2c;
  }
  param_1[1] = 2;
LAB_180558b46:
  function_631330(param_2,&rendering_buffer_2788_ptr,param_1 + 2);
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  lStack_b0 = 0;
  iStack_a8 = 0;
  pcVar10 = "turn_direction";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a3531f) {
      pcVar10 = pcVar10 + (int64_t)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180558be4:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_b8,lVar7);
        break;
      }
      lVar7 = (int64_t)&processed_var_4592_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180558be4;
      }
    }
  }
  pcVar10 = pcVar11;
  if (iStack_a8 == 4) {
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[lStack_b0] != pcVar10[0x180a34bc8]) goto LAB_180558c5d;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x5);
    param_1[3] = 0;
  }
  else if (iStack_a8 == 5) {
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[lStack_b0] != pcVar10[0x180a34b7c]) goto LAB_180558c5d;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x6);
    param_1[3] = 1;
  }
  else {
LAB_180558c5d:
    param_1[3] = 0xffffffff;
  }
  UltraHighFreq_CacheSystem1(param_2,&processed_var_4576_ptr,param_1 + 4);
  plocal_var_78 = &system_data_buffer_ptr;
  local_var_60 = 0;
  lStack_70 = 0;
  iStack_68 = 0;
  pcVar10 = "action";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a339df) {
      pcVar10 = pcVar10 + (int64_t)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180558d04:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_78,lVar7);
        break;
      }
      lVar7 = (int64_t)&processed_var_8128_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180558d04;
      }
    }
  }
  if (0 < iStack_68) {
    uVar3 = SystemFile_Manager(&system_state_6150,&plocal_var_78);
    param_1[5] = uVar3;
  }
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  lStack_90 = 0;
  iStack_88 = 0;
  pcVar10 = "mount_id";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar9 == (uint64_t *)0x0) {
LAB_180558dde:
      if (0 < iStack_88) {
        uVar3 = function_555eb0(&system_state_60a0,&plocal_var_98);
        *param_1 = uVar3;
      }
      plocal_var_98 = &system_data_buffer_ptr;
      if (lStack_90 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_90 = 0;
      local_var_80 = local_var_80 & 0xffffffff00000000;
      plocal_var_98 = &system_state_ptr;
      plocal_var_78 = &system_data_buffer_ptr;
      if (lStack_70 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_70 = 0;
      local_var_60 = local_var_60 & 0xffffffff00000000;
      plocal_var_78 = &system_state_ptr;
      plocal_var_b8 = &system_data_buffer_ptr;
      if (lStack_b0 == 0) {
        lStack_b0 = 0;
        local_var_a0 = local_var_a0 & 0xffffffff00000000;
        plocal_var_b8 = &system_state_ptr;
        plocal_var_58 = &system_data_buffer_ptr;
        if (plocal_var_50 == (void *)0x0) {
          return;
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar4 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar4 = pcVar5;
    }
    if (pcVar10 == pcVar6 + -0x180a34c07) {
      pcVar10 = pcVar10 + (int64_t)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180558dc5:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_98,lVar7);
        goto LAB_180558dde;
      }
      lVar7 = (int64_t)&rendering_buffer_2776_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180558dc5;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
}
// 函数: void function_558ea0(int32_t *param_1,int64_t param_2)
void function_558ea0(int32_t *param_1,int64_t param_2)
{
  int iVar1;
  int32_t uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  void *plocal_var_b8;
  int64_t lStack_b0;
  int iStack_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int64_t lStack_90;
  int iStack_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  void *plocal_var_70;
  int iStack_68;
  uint64_t local_var_60;
  void *plocal_var_58;
  void *plocal_var_50;
  int iStack_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  pcVar11 = (char *)0x0;
  plocal_var_58 = &system_data_buffer_ptr;
  local_var_40 = 0;
  plocal_var_50 = (void *)0x0;
  iStack_48 = 0;
  pcVar10 = "jump_state";
  do {
    pcVar4 = pcVar10;
    pcVar10 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar3 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar3 = pcVar5;
    }
    if (pcVar10 == pcVar4 + -0x180a352bf) {
      pcVar10 = pcVar10 + (int64_t)pcVar3;
      if (pcVar10 <= pcVar3) {
LAB_180558f70:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_58,lVar6);
        break;
      }
      lVar6 = (int64_t)&processed_var_4496_ptr - (int64_t)pcVar3;
      while (*pcVar3 == pcVar3[lVar6]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar10 <= pcVar3) goto LAB_180558f70;
      }
    }
  }
  pcVar10 = pcVar11;
  if (iStack_48 == 5) {
    do {
      pcVar4 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_50] != pcVar10[0x180a2167c]) goto LAB_18055906d;
      pcVar10 = pcVar4;
    } while (pcVar4 != (char *)0x6);
    param_1[1] = 0;
  }
  else if (iStack_48 == 4) {
    do {
      pcVar4 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_50] != pcVar10[0x180a352b4]) goto LAB_18055906d;
      pcVar10 = pcVar4;
    } while (pcVar4 != (char *)0x5);
    param_1[1] = 1;
  }
  else if (iStack_48 == 3) {
    do {
      pcVar4 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_50] != pcVar10[0x180a21678]) goto LAB_18055906d;
      pcVar10 = pcVar4;
    } while (pcVar4 != (char *)0x4);
    param_1[1] = 2;
  }
  else if (iStack_48 == 7) {
    do {
      pcVar4 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_50] != pcVar10[0x180a25d28]) goto LAB_18055906d;
      pcVar10 = pcVar4;
    } while (pcVar4 != &system_state_0008);
    param_1[1] = 0xffffffff;
  }
  else {
LAB_18055906d:
    puVar7 = &system_buffer_ptr;
    if (plocal_var_50 != (void *)0x0) {
      puVar7 = plocal_var_50;
    }
    SystemDataInitializer(&processed_var_4520_ptr,puVar7);
  }
  plocal_var_78 = &system_data_buffer_ptr;
  local_var_60 = 0;
  plocal_var_70 = (void *)0x0;
  iStack_68 = 0;
  pcVar10 = "direction";
  do {
    pcVar4 = pcVar10;
    pcVar10 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar3 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar3 = pcVar5;
    }
    if (pcVar10 == pcVar4 + -0x180a35197) {
      pcVar10 = pcVar10 + (int64_t)pcVar3;
      if (pcVar10 <= pcVar3) {
LAB_180559104:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_78,lVar6);
        break;
      }
      lVar6 = (int64_t)&processed_var_4200_ptr - (int64_t)pcVar3;
      while (*pcVar3 == pcVar3[lVar6]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar10 <= pcVar3) goto LAB_180559104;
      }
    }
  }
  puVar7 = plocal_var_70;
  pcVar5 = pcVar11;
  pcVar10 = pcVar11;
  pcVar4 = pcVar11;
  if (iStack_68 == 4) {
    do {
      pcVar3 = pcVar5 + 1;
      if (pcVar5[(int64_t)plocal_var_70] != pcVar5[0x180a34bc8]) goto LAB_1805591d2;
      pcVar5 = pcVar3;
    } while (pcVar3 != (char *)0x5);
    param_1[2] = 0;
  }
  else if (iStack_68 == 5) {
    do {
      pcVar5 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_70] != pcVar10[0x180a34b7c]) goto LAB_1805591a0;
      pcVar10 = pcVar5;
    } while (pcVar5 != (char *)0x6);
    param_1[2] = 1;
  }
  else if (iStack_68 == 4) {
LAB_1805591d2:
    do {
      pcVar5 = pcVar4 + 1;
      if (pcVar4[(int64_t)plocal_var_70] != pcVar4[0x180a35288]) goto LAB_180559290;
      pcVar4 = pcVar5;
    } while (pcVar5 != (char *)0x5);
    param_1[2] = 5;
  }
  else {
    if (iStack_68 == 0xb) {
      iVar1 = strcmp(plocal_var_70,&processed_var_4472_ptr);
      if (iVar1 == 0) {
        param_1[2] = 4;
        goto LAB_1805592c2;
      }
    }
    else if (iStack_68 == 10) {
      iVar1 = strcmp(plocal_var_70,&processed_var_4456_ptr);
      if (iVar1 == 0) {
        param_1[2] = 3;
        goto LAB_1805592c2;
      }
      iVar1 = strcmp(puVar7,&processed_var_4392_ptr);
      if (iVar1 == 0) {
        param_1[2] = 7;
        goto LAB_1805592c2;
      }
    }
    else if (iStack_68 == 9) {
      iVar1 = strcmp(plocal_var_70,&processed_var_4376_ptr);
      if (iVar1 == 0) {
        param_1[2] = 6;
        goto LAB_1805592c2;
      }
    }
    else if (iStack_68 == 4) {
LAB_180559290:
      do {
        pcVar4 = pcVar10 + 1;
        if (pcVar10[(int64_t)plocal_var_70] != pcVar10[0x180a0b57c]) goto LAB_1805592ac;
        pcVar10 = pcVar4;
      } while (pcVar4 != (char *)0x5);
      param_1[2] = 0xffffffff;
      goto LAB_1805592c2;
    }
LAB_1805592ac:
    puVar8 = &system_buffer_ptr;
    if (puVar7 != (void *)0x0) {
      puVar8 = puVar7;
    }
    SystemDataInitializer(&processed_var_4416_ptr,puVar8);
  }
  goto LAB_1805592c2;
  while (pcVar4 = pcVar10, pcVar10 != (char *)0x6) {
LAB_1805591a0:
    pcVar10 = pcVar4 + 1;
    if (pcVar4[(int64_t)plocal_var_70] != pcVar4[0x180a35290]) goto LAB_1805592ac;
  }
  param_1[2] = 2;
LAB_1805592c2:
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  lStack_90 = 0;
  iStack_88 = 0;
  pcVar10 = "action";
  do {
    pcVar4 = pcVar10;
    pcVar10 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar3 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar3 = pcVar5;
    }
    if (pcVar10 == pcVar4 + -0x180a339df) {
      pcVar10 = pcVar10 + (int64_t)pcVar3;
      if (pcVar10 <= pcVar3) {
LAB_180559354:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_98,lVar6);
        break;
      }
      lVar6 = (int64_t)&processed_var_8128_ptr - (int64_t)pcVar3;
      while (*pcVar3 == pcVar3[lVar6]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar10 <= pcVar3) goto LAB_180559354;
      }
    }
  }
  if (0 < iStack_88) {
    uVar2 = SystemFile_Manager(&system_state_6150,&plocal_var_98);
    param_1[4] = uVar2;
  }
  UltraHighFreq_CacheSystem1(param_2,&ui_system_data_1800_ptr,param_1 + 3);
  UltraHighFreq_CacheSystem1(param_2,&processed_var_4512_ptr,(int64_t)param_1 + 0xd);
  UltraHighFreq_CacheSystem1(param_2,&processed_var_4544_ptr,(int64_t)param_1 + 0xe);
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  lStack_b0 = 0;
  iStack_a8 = 0;
  pcVar10 = "mount_id";
  do {
    pcVar4 = pcVar10;
    pcVar10 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar9 == (uint64_t *)0x0) {
LAB_18055946d:
      if (0 < iStack_a8) {
        uVar2 = function_555eb0(&system_state_60a0,&plocal_var_b8);
        *param_1 = uVar2;
      }
      plocal_var_b8 = &system_data_buffer_ptr;
      if (lStack_b0 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_b0 = 0;
      local_var_a0 = local_var_a0 & 0xffffffff00000000;
      plocal_var_b8 = &system_state_ptr;
      plocal_var_98 = &system_data_buffer_ptr;
      if (lStack_90 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_90 = 0;
      local_var_80 = local_var_80 & 0xffffffff00000000;
      plocal_var_98 = &system_state_ptr;
      plocal_var_78 = &system_data_buffer_ptr;
      if (plocal_var_70 == (void *)0x0) {
        plocal_var_70 = (void *)0x0;
        local_var_60 = local_var_60 & 0xffffffff00000000;
        plocal_var_78 = &system_state_ptr;
        plocal_var_58 = &system_data_buffer_ptr;
        if (plocal_var_50 == (void *)0x0) {
          return;
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pcVar5 = (char *)*puVar9;
    pcVar10 = pcVar11;
    if (pcVar5 != (char *)0x0) {
      pcVar10 = (char *)puVar9[2];
    }
    pcVar3 = (char *)0x180d48d24;
    if (pcVar5 != (char *)0x0) {
      pcVar3 = pcVar5;
    }
    if (pcVar10 == pcVar4 + -0x180a34c07) {
      pcVar10 = pcVar3 + (int64_t)pcVar10;
      if (pcVar10 <= pcVar3) {
LAB_180559454:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_b8,lVar6);
        goto LAB_18055946d;
      }
      lVar6 = (int64_t)&rendering_buffer_2776_ptr - (int64_t)pcVar3;
      while (*pcVar3 == pcVar3[lVar6]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar10 <= pcVar3) goto LAB_180559454;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
}