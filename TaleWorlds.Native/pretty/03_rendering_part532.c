#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataDeserializer */
#define DataDeserializer DataDeserializer
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part532.c - 10 个函数
// 函数: void function_559530(int32_t *param_1,int64_t param_2)
void function_559530(int32_t *param_1,int64_t param_2)
{
  void *puVar1;
  int32_t uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t lVar7;
  void *puVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  void *plocal_var_d8;
  int64_t lStack_d0;
  int iStack_c8;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  void *plocal_var_b0;
  int iStack_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  void *plocal_var_90;
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
LAB_180559600:
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
        if (pcVar10 <= pcVar4) goto LAB_180559600;
      }
    }
  }
  puVar1 = plocal_var_50;
  pcVar6 = pcVar11;
  pcVar10 = pcVar11;
  if (iStack_48 == 4) {
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(int64_t)plocal_var_50] != pcVar6[0x180a34bc8]) goto LAB_1805596e2;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x5);
    param_1[3] = 0;
  }
  else if (iStack_48 == 5) {
    do {
      pcVar5 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_50] != pcVar10[0x180a34b7c]) goto LAB_1805596b0;
      pcVar10 = pcVar5;
    } while (pcVar5 != (char *)0x6);
    param_1[3] = 1;
  }
  else if (iStack_48 == 4) {
LAB_1805596e2:
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_50] != pcVar10[0x180a35288]) goto LAB_180559780;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x5);
    param_1[3] = 5;
  }
  else if (iStack_48 == 0xb) {
    iVar3 = strcmp(plocal_var_50,&processed_var_4472_ptr);
    if (iVar3 == 0) {
      param_1[3] = 4;
    }
    else {
LAB_180559780:
      puVar8 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar8 = puVar1;
      }
      SystemDataInitializer(&processed_var_4416_ptr,puVar8);
    }
  }
  else if (iStack_48 == 10) {
    iVar3 = strcmp(plocal_var_50,&processed_var_4456_ptr);
    if (iVar3 == 0) {
      param_1[3] = 3;
    }
    else {
      iVar3 = strcmp(puVar1,&processed_var_4392_ptr);
      if (iVar3 != 0) goto LAB_180559780;
      param_1[3] = 7;
    }
  }
  else {
    if ((iStack_48 != 9) || (iVar3 = strcmp(plocal_var_50,&processed_var_4376_ptr), iVar3 != 0))
    goto LAB_180559780;
    param_1[3] = 6;
  }
  goto LAB_180559796;
  while (pcVar6 = pcVar10, pcVar10 != (char *)0x6) {
LAB_1805596b0:
    pcVar10 = pcVar6 + 1;
    if (pcVar6[(int64_t)plocal_var_50] != pcVar6[0x180a35290]) goto LAB_180559780;
  }
  param_1[3] = 2;
LAB_180559796:
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
LAB_180559824:
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
        if (pcVar10 <= pcVar4) goto LAB_180559824;
      }
    }
  }
  if (0 < iStack_68) {
    uVar2 = SystemFile_Manager(&system_data_6150,&plocal_var_78);
    *param_1 = uVar2;
  }
  UltraHighFreq_CacheSystem1(param_2,&ui_system_data_1800_ptr,(int64_t)param_1 + 0x11);
  UltraHighFreq_CacheSystem1(param_2,&processed_var_4560_ptr,param_1 + 4);
  UltraHighFreq_CacheSystem1(param_2,&processed_var_4544_ptr,(int64_t)param_1 + 0x12);
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  plocal_var_90 = (void *)0x0;
  iStack_88 = 0;
  pcVar10 = "death_type";
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
    if (pcVar10 == pcVar6 + -0x180a35377) {
      pcVar10 = pcVar10 + (int64_t)pcVar4;
      if (pcVar10 <= pcVar4) {
LAB_180559911:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_98,lVar7);
        break;
      }
      lVar7 = (int64_t)&processed_var_4680_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559911;
      }
    }
  }
  puVar1 = plocal_var_90;
  pcVar6 = pcVar11;
  pcVar10 = pcVar11;
  if (iStack_88 == 5) {
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(int64_t)plocal_var_90] != pcVar6[0x180a35370]) goto LAB_1805599e2;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x6);
    param_1[2] = 0;
  }
  else if (iStack_88 == 4) {
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(int64_t)plocal_var_90] != pcVar6[0x180a3538c]) goto LAB_180559a20;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x5);
    param_1[2] = 4;
  }
  else if (iStack_88 == 6) {
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_90] != pcVar10[0x180a21b0c]) goto LAB_180559a7e;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x7);
    param_1[2] = 5;
  }
  else if (iStack_88 == 5) {
LAB_1805599e2:
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_90] != pcVar10[0x180a139e0]) goto LAB_180559a7e;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x6);
    param_1[2] = 0xffffffff;
  }
  else if (iStack_88 == 4) {
LAB_180559a20:
    do {
      pcVar6 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_90] != pcVar10[0x180a35384]) goto LAB_180559a7e;
      pcVar10 = pcVar6;
    } while (pcVar6 != (char *)0x5);
    param_1[2] = 1;
  }
  else if (iStack_88 == 9) {
    iVar3 = strcmp(plocal_var_90,&processed_var_4624_ptr);
    if (iVar3 == 0) {
      param_1[2] = 2;
    }
    else {
LAB_180559a7e:
      puVar8 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar8 = puVar1;
      }
      SystemDataInitializer(&processed_var_4648_ptr,puVar8);
    }
  }
  else {
    if ((iStack_88 != 10) || (iVar3 = strcmp(plocal_var_90,&processed_var_4608_ptr), iVar3 != 0))
    goto LAB_180559a7e;
    param_1[2] = 3;
  }
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  plocal_var_b0 = (void *)0x0;
  iStack_a8 = 0;
  pcVar10 = "body_part";
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
    if (pcVar10 == pcVar6 + -0x180a35157) {
      pcVar10 = pcVar4 + (int64_t)pcVar10;
      if (pcVar10 <= pcVar4) {
LAB_180559b15:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_b8,lVar7);
        break;
      }
      lVar7 = (int64_t)&processed_var_4136_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559b15;
      }
    }
  }
  puVar1 = plocal_var_b0;
  if (iStack_a8 == 8) {
    iVar3 = strcmp(plocal_var_b0,&processed_var_7024_ptr);
    if (iVar3 == 0) {
      *(int8_t *)(param_1 + 1) = 6;
      goto LAB_180559cff;
    }
  }
  else if (iStack_a8 == 9) {
    iVar3 = strcmp(plocal_var_b0,&processed_var_7008_ptr);
    if (iVar3 == 0) {
      *(int8_t *)(param_1 + 1) = 7;
      goto LAB_180559cff;
    }
  }
  else {
    pcVar6 = pcVar11;
    pcVar10 = pcVar11;
    if (iStack_a8 == 4) {
      do {
        pcVar5 = pcVar6 + 1;
        if (pcVar6[(int64_t)plocal_var_b0] != pcVar6[0x180a1395c]) goto LAB_180559c80;
        pcVar6 = pcVar5;
      } while (pcVar5 != (char *)0x5);
      *(int8_t *)(param_1 + 1) = 8;
      goto LAB_180559cff;
    }
    if (iStack_a8 == 7) {
      do {
        pcVar6 = pcVar10 + 1;
        if (pcVar10[(int64_t)plocal_var_b0] != pcVar10[0x180a139d8]) goto LAB_180559ce9;
        pcVar10 = pcVar6;
      } while (pcVar6 != &system_data_0008);
      *(int8_t *)(param_1 + 1) = 3;
      goto LAB_180559cff;
    }
    if (iStack_a8 == 0xd) {
      iVar3 = strcmp(plocal_var_b0,&processed_var_6992_ptr);
      if (iVar3 == 0) {
        *(int8_t *)(param_1 + 1) = 4;
        goto LAB_180559cff;
      }
    }
    else if (iStack_a8 == 0xe) {
      iVar3 = strcmp(plocal_var_b0,&processed_var_6976_ptr);
      if (iVar3 == 0) {
        *(int8_t *)(param_1 + 1) = 5;
        goto LAB_180559cff;
      }
    }
    else {
      if (iStack_a8 == 5) {
        do {
          pcVar6 = pcVar10 + 1;
          if (pcVar10[(int64_t)plocal_var_b0] != pcVar10[0x180a139cc]) goto LAB_180559ce9;
          pcVar10 = pcVar6;
        } while (pcVar6 != (char *)0x6);
        *(int8_t *)(param_1 + 1) = 2;
        goto LAB_180559cff;
      }
      if (iStack_a8 == 4) {
LAB_180559c80:
        do {
          pcVar5 = pcVar10 + 1;
          pcVar6 = pcVar11;
          if (pcVar10[(int64_t)plocal_var_b0] != pcVar10[0x180a13928]) goto LAB_180559ca3;
          pcVar10 = pcVar5;
        } while (pcVar5 != (char *)0x5);
        *(int8_t *)(param_1 + 1) = 0;
        goto LAB_180559cff;
      }
    }
  }
LAB_180559ce9:
  puVar8 = &system_buffer_ptr;
  if (puVar1 != (void *)0x0) {
    puVar8 = puVar1;
  }
  SystemDataInitializer(&processed_var_4216_ptr,puVar8);
LAB_180559cff:
  plocal_var_d8 = &system_data_buffer_ptr;
  local_var_c0 = 0;
  lStack_d0 = 0;
  iStack_c8 = 0;
  pcVar10 = "mount_id";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar9 == (uint64_t *)0x0) {
LAB_180559dad:
      if (0 < iStack_c8) {
        uVar2 = function_555eb0(&system_data_60a0,&plocal_var_d8);
        param_1[5] = uVar2;
      }
      plocal_var_d8 = &system_data_buffer_ptr;
      if (lStack_d0 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_d0 = 0;
      local_var_c0 = local_var_c0 & 0xffffffff00000000;
      plocal_var_d8 = &system_state_ptr;
      plocal_var_b8 = &system_data_buffer_ptr;
      if (plocal_var_b0 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_b0 = (void *)0x0;
      local_var_a0 = local_var_a0 & 0xffffffff00000000;
      plocal_var_b8 = &system_state_ptr;
      plocal_var_98 = &system_data_buffer_ptr;
      if (plocal_var_90 == (void *)0x0) {
        plocal_var_90 = (void *)0x0;
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
LAB_180559d94:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_d8,lVar7);
        goto LAB_180559dad;
      }
      lVar7 = (int64_t)&rendering_buffer_2776_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559d94;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
  while (pcVar6 = pcVar5, pcVar5 != (char *)0x5) {
LAB_180559ca3:
    pcVar5 = pcVar6 + 1;
    pcVar10 = pcVar11;
    if (pcVar6[(int64_t)plocal_var_b0] != pcVar6[0x180a138f0]) goto LAB_180559cd0;
  }
  *(int8_t *)(param_1 + 1) = 1;
  goto LAB_180559cff;
  while (pcVar10 = pcVar6, pcVar6 != (char *)0x5) {
LAB_180559cd0:
    pcVar6 = pcVar10 + 1;
    if (pcVar10[(int64_t)plocal_var_b0] != pcVar10[0x180a0b57c]) goto LAB_180559ce9;
  }
  *(int8_t *)(param_1 + 1) = 0xff;
  goto LAB_180559cff;
}
// 函数: void function_559e90(int32_t *param_1,int64_t param_2)
void function_559e90(int32_t *param_1,int64_t param_2)
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
  void *plocal_var_90;
  int64_t lStack_88;
  int iStack_80;
  uint64_t local_var_78;
  void *plocal_var_70;
  int64_t lStack_68;
  int iStack_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  void *plocal_var_48;
  int iStack_40;
  uint64_t local_var_38;
  pcVar11 = (char *)0x0;
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  plocal_var_48 = (void *)0x0;
  iStack_40 = 0;
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
LAB_180559f60:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_50,lVar7,pcVar10,puVar9,0xfffffffffffffffe);
        break;
      }
      lVar7 = (int64_t)&processed_var_4200_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_180559f60;
      }
    }
  }
  puVar1 = plocal_var_48;
  pcVar5 = pcVar11;
  pcVar10 = pcVar11;
  pcVar6 = pcVar11;
  if (iStack_40 == 4) {
    do {
      pcVar4 = pcVar5 + 1;
      if (pcVar5[(int64_t)plocal_var_48] != pcVar5[0x180a34bc8]) goto LAB_18055a032;
      pcVar5 = pcVar4;
    } while (pcVar4 != (char *)0x5);
    param_1[2] = 0;
  }
  else if (iStack_40 == 5) {
    do {
      pcVar5 = pcVar10 + 1;
      if (pcVar10[(int64_t)plocal_var_48] != pcVar10[0x180a34b7c]) goto LAB_18055a000;
      pcVar10 = pcVar5;
    } while (pcVar5 != (char *)0x6);
    param_1[2] = 1;
  }
  else if (iStack_40 == 4) {
LAB_18055a032:
    do {
      pcVar5 = pcVar6 + 1;
      if (pcVar6[(int64_t)plocal_var_48] != pcVar6[0x180a35288]) goto LAB_18055a0f0;
      pcVar6 = pcVar5;
    } while (pcVar5 != (char *)0x5);
    param_1[2] = 5;
  }
  else {
    if (iStack_40 == 0xb) {
      iVar2 = strcmp(plocal_var_48,&processed_var_4472_ptr);
      if (iVar2 == 0) {
        param_1[2] = 4;
        goto LAB_18055a126;
      }
    }
    else if (iStack_40 == 10) {
      iVar2 = strcmp(plocal_var_48,&processed_var_4456_ptr);
      if (iVar2 == 0) {
        param_1[2] = 3;
        goto LAB_18055a126;
      }
      iVar2 = strcmp(puVar1,&processed_var_4392_ptr);
      if (iVar2 == 0) {
        param_1[2] = 7;
        goto LAB_18055a126;
      }
    }
    else if (iStack_40 == 9) {
      iVar2 = strcmp(plocal_var_48,&processed_var_4376_ptr);
      if (iVar2 == 0) {
        param_1[2] = 6;
        goto LAB_18055a126;
      }
    }
    else if (iStack_40 == 4) {
LAB_18055a0f0:
      do {
        pcVar6 = pcVar10 + 1;
        if (pcVar10[(int64_t)plocal_var_48] != pcVar10[0x180a0b57c]) goto LAB_18055a10c;
        pcVar10 = pcVar6;
      } while (pcVar6 != (char *)0x5);
      param_1[2] = 0xffffffff;
      goto LAB_18055a126;
    }
LAB_18055a10c:
    puVar8 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar8 = puVar1;
    }
    SystemDataInitializer(&processed_var_4416_ptr,puVar8);
  }
  goto LAB_18055a126;
  while (pcVar6 = pcVar10, pcVar10 != (char *)0x6) {
LAB_18055a000:
    pcVar10 = pcVar6 + 1;
    if (pcVar6[(int64_t)plocal_var_48] != pcVar6[0x180a35290]) goto LAB_18055a10c;
  }
  param_1[2] = 2;
LAB_18055a126:
  UltraHighFreq_CacheSystem1(param_2,&ui_system_data_1728_ptr,param_1 + 1);
  UltraHighFreq_CacheSystem1(param_2,&processed_var_4640_ptr,(int64_t)param_1 + 5);
  plocal_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  lStack_68 = 0;
  iStack_60 = 0;
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
LAB_18055a1d4:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_70,lVar7);
        break;
      }
      lVar7 = (int64_t)&processed_var_8128_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_18055a1d4;
      }
    }
  }
  if (0 < iStack_60) {
    uVar3 = SystemFile_Manager(&system_data_6150,&plocal_var_70);
    param_1[3] = uVar3;
  }
  plocal_var_90 = &system_data_buffer_ptr;
  local_var_78 = 0;
  lStack_88 = 0;
  iStack_80 = 0;
  pcVar10 = "mount_id";
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar9 == (uint64_t *)0x0) {
LAB_18055a2ae:
      if (0 < iStack_80) {
        uVar3 = function_555eb0(&system_data_60a0,&plocal_var_90);
        *param_1 = uVar3;
      }
      plocal_var_90 = &system_data_buffer_ptr;
      if (lStack_88 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_88 = 0;
      local_var_78 = local_var_78 & 0xffffffff00000000;
      plocal_var_90 = &system_state_ptr;
      plocal_var_70 = &system_data_buffer_ptr;
      if (lStack_68 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_68 = 0;
      local_var_58 = local_var_58 & 0xffffffff00000000;
      plocal_var_70 = &system_state_ptr;
      plocal_var_50 = &system_data_buffer_ptr;
      if (plocal_var_48 == (void *)0x0) {
        return;
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
LAB_18055a295:
        lVar7 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar7 = puVar9[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_90,lVar7);
        goto LAB_18055a2ae;
      }
      lVar7 = (int64_t)&rendering_buffer_2776_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar10 <= pcVar4) goto LAB_18055a295;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
}
// 函数: void function_55a350(int64_t param_1)
void function_55a350(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      function_55a3c0(uVar3 + param_1);
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1 + -0x10);
}
// 函数: void function_55a35a(int64_t param_1)
void function_55a35a(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uVar3 = 0;
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      function_55a3c0(uVar3 + param_1);
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1 + -0x10);
}
// 函数: void function_55a37d(void)
void function_55a37d(void)
{
  int64_t in_RAX;
  uint unaff_EBX;
  int unaff_EBP;
  int64_t unaff_RDI;
  do {
    function_55a3c0((uint64_t)unaff_EBX + unaff_RDI);
    unaff_EBX = unaff_EBX + unaff_EBP;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_RDI + -0x10);
}
// 函数: void function_55a39c(void)
void function_55a39c(void)
{
  int64_t unaff_RDI;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(unaff_RDI + -0x10);
}
// 函数: void function_55a3b9(void)
void function_55a3b9(void)
{
  return;
}
// 函数: void function_55a3c0(uint64_t *param_1)
void function_55a3c0(uint64_t *param_1)
{
  function_33b1a0(param_1 + 0x29);
  if ((1 < (uint64_t)param_1[0x2b]) && (param_1[0x2a] != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  function_33b1a0(param_1 + 0x23);
  if ((1 < (uint64_t)param_1[0x25]) && (param_1[0x24] != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  function_33b1a0(param_1 + 0x1d);
  if ((1 < (uint64_t)param_1[0x1f]) && (param_1[0x1e] != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  function_33b1a0(param_1 + 0x17);
  if ((1 < (uint64_t)param_1[0x19]) && (param_1[0x18] != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  function_33b1a0(param_1 + 0x11);
  if ((1 < (uint64_t)param_1[0x13]) && (param_1[0x12] != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  function_33b1a0(param_1 + 0xb);
  if ((1 < (uint64_t)param_1[0xd]) && (param_1[0xc] != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  function_33b1a0(param_1 + 5);
  if ((1 < (uint64_t)param_1[7]) && (param_1[6] != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}
// 函数: void function_55a540(void)
void function_55a540(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
int32_t SystemFile_Manager(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int64_t lVar5;
  int iVar6;
  byte *pbVar7;
  uint64_t uVar8;
  uint uVar9;
  int64_t lStack_18;
  uVar3 = *(uint *)(param_2 + 0x10);
  pbVar4 = *(byte **)(param_2 + 8);
  if ((uVar3 != 8) || (iVar6 = strcmp(pbVar4,&processed_var_4744_ptr), iVar6 != 0)) {
    uVar8 = 0xcbf29ce484222325;
    pbVar7 = &system_buffer_ptr;
    if (pbVar4 != (byte *)0x0) {
      pbVar7 = pbVar4;
    }
    uVar9 = 0;
    if (uVar3 != 0) {
      do {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar9 = uVar9 + 1;
        uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
      } while (uVar9 < uVar3);
    }
    lVar5 = *(int64_t *)(param_1 + 0x28);
    for (lStack_18 = *(int64_t *)(lVar5 + (uVar8 % (uint64_t)*(uint *)(param_1 + 0x30)) * 8);
        lStack_18 != 0; lStack_18 = *(int64_t *)(lStack_18 + 0x28)) {
      uVar9 = *(uint *)(lStack_18 + 0x10);
      if (uVar3 == uVar9) {
        if (uVar3 != 0) {
          pbVar7 = pbVar4;
          do {
            pbVar1 = pbVar7 + (*(int64_t *)(lStack_18 + 8) - (int64_t)pbVar4);
            uVar9 = (uint)*pbVar7 - (uint)*pbVar1;
            if (uVar9 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18055b3bd:
        if (uVar9 == 0) goto LAB_18055b3cb;
      }
      else if (uVar3 == 0) goto LAB_18055b3bd;
    }
    lStack_18 = 0;
LAB_18055b3cb:
    if (lStack_18 == 0) {
      lStack_18 = *(int64_t *)(lVar5 + *(int64_t *)(param_1 + 0x30) * 8);
    }
    if (lStack_18 != *(int64_t *)(lVar5 + *(int64_t *)(param_1 + 0x30) * 8)) {
      return *(int32_t *)(lStack_18 + 0x20);
    }
  }
  return 0xffffffff;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_55b430(int64_t *param_1,int64_t param_2)
void function_55b430(int64_t *param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  void *puVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int8_t stack_array_c8 [32];
  void **pplocal_var_a8;
  uint64_t local_var_a0;
  void *aplocal_var_98 [11];
  int32_t local_var_40;
  int32_t local_var_3c;
  int8_t local_var_38;
  uint64_t local_var_28;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  iVar2 = *(int *)(param_2 + 0x10);
  if ((iVar2 != 8) || (iVar4 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_4744_ptr), iVar4 != 0)) {
    iVar4 = (int)((param_1[1] - *param_1) / 0x68);
    if (0 < iVar4) {
      lVar10 = 0;
      plVar9 = (int64_t *)(*param_1 + 8);
      do {
        iVar6 = (int)plVar9[1];
        if (iVar2 == iVar6) {
          if (iVar2 != 0) {
            pbVar5 = *(byte **)(param_2 + 8);
            lVar8 = *plVar9 - (int64_t)pbVar5;
            do {
              pbVar1 = pbVar5 + lVar8;
              iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
              if (iVar6 != 0) break;
              pbVar5 = pbVar5 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18055b4fd:
          if (iVar6 == 0) goto LAB_18055b5d4;
        }
        else if (iVar2 == 0) goto LAB_18055b4fd;
        lVar10 = lVar10 + 1;
        plVar9 = plVar9 + 0xd;
      } while (lVar10 < iVar4);
    }
    puVar7 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_2 + 8);
    }
    function_049eb0(aplocal_var_98,puVar7);
    local_var_40 = 0;
    local_var_3c = 0xffffffff;
    local_var_38 = 0xff;
    uVar3 = param_1[1];
    if (uVar3 < (uint64_t)param_1[2]) {
      param_1[1] = uVar3 + 0x68;
      pplocal_var_a8 = (void **)uVar3;
      DataDeserializer0(uVar3);
      *(int32_t *)(uVar3 + 0x58) = local_var_40;
      *(int32_t *)(uVar3 + 0x5c) = local_var_3c;
      *(int8_t *)(uVar3 + 0x60) = local_var_38;
    }
    else {
      function_55bc50(param_1,aplocal_var_98);
    }
    pplocal_var_a8 = aplocal_var_98;
    aplocal_var_98[0] = &system_state_ptr;
  }
LAB_18055b5d4:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_c8);
}