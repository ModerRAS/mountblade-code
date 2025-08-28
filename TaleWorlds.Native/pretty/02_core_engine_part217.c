#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part217.c - 8 个函数

// 函数: void FUN_1801934d0(int64_t param_1,int64_t param_2)
void FUN_1801934d0(int64_t param_1,int64_t param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  char *pcVar7;
  char *pcVar8;
  char acStackX_8 [8];
  void *puStack_50;
  int64_t lStack_48;
  uint uStack_40;
  uint64_t uStack_38;
  
  pcVar7 = "id";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
  for (puVar6 = *(uint64_t **)(param_2 + 0x40); puVar6 != (uint64_t *)0x0;
      puVar6 = (uint64_t *)puVar6[6]) {
    pcVar3 = (char *)*puVar6;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 == pcVar8 + -0x180a0ae27) {
      pcVar2 = pcVar2 + (int64_t)pcVar3;
      if (pcVar2 <= pcVar3) {
LAB_180193562:
        lVar4 = 0x180d48d24;
        if (puVar6[1] != 0) {
          lVar4 = puVar6[1];
        }
        (**(code **)(*(int64_t *)(param_1 + 8) + 0x10))
                  (param_1 + 8,lVar4,pcVar2,puVar6,0xfffffffffffffffe);
        break;
      }
      lVar4 = (int64_t)&ui_system_data_1288_ptr - (int64_t)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar2 <= pcVar3) goto LAB_180193562;
      }
    }
  }
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  pcVar8 = "override_material_name_for_impact_sounds";
  do {
    pcVar3 = pcVar8;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar8 != '\0');
  for (puVar6 = *(uint64_t **)(param_2 + 0x40); puVar6 != (uint64_t *)0x0;
      puVar6 = (uint64_t *)puVar6[6]) {
    pcVar8 = (char *)*puVar6;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 == pcVar3 + -0x180a0b09f) {
      pcVar2 = pcVar2 + (int64_t)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_180193610:
        lVar4 = 0x180d48d24;
        if (puVar6[1] != 0) {
          lVar4 = puVar6[1];
        }
        CoreSystem_ConfigValidator0(&puStack_50,lVar4);
        uVar1 = uStack_40;
        uVar5 = (uint64_t)uStack_40;
        if (lStack_48 != 0) {
          CoreEngineDataBufferProcessor(param_1 + 0x28,uVar5);
        }
        if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(param_1 + 0x30),lStack_48,uVar5);
        }
        *(int32_t *)(param_1 + 0x38) = 0;
        if (*(int64_t *)(param_1 + 0x30) != 0) {
          *(int8_t *)(uVar5 + *(int64_t *)(param_1 + 0x30)) = 0;
        }
        *(int32_t *)(param_1 + 0x44) = uStack_38._4_4_;
        goto LAB_18019368b;
      }
      lVar4 = (int64_t)&ui_system_data_1920_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar4]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_180193610;
      }
    }
  }
  SystemCore_ConfigurationHandler0(param_1 + 0x28,param_1 + 8);
LAB_18019368b:
  lVar4 = FUN_180631000(param_2,&ui_system_data_1992_ptr,acStackX_8);
  if ((lVar4 != 0) && (acStackX_8[0] != '\0')) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
  }
  lVar4 = FUN_180631000(param_2,&ui_system_data_1968_ptr,acStackX_8);
  if ((lVar4 != 0) && (acStackX_8[0] != '\0')) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 4;
  }
  lVar4 = FUN_180631000(param_2,&rendering_buffer_2048_ptr,acStackX_8);
  if ((lVar4 != 0) && (acStackX_8[0] != '\0')) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 2;
  }
  lVar4 = FUN_180631000(param_2,&rendering_buffer_2016_ptr,acStackX_8);
  if ((lVar4 != 0) && (acStackX_8[0] != '\0')) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 8;
  }
  pcVar8 = "static_friction";
  do {
    pcVar3 = pcVar8;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar8 != '\0');
  for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar8 = pcVar7, puVar6 != (uint64_t *)0x0;
      puVar6 = (uint64_t *)puVar6[6]) {
    pcVar8 = (char *)*puVar6;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 == pcVar3 + -0x180a0b147) {
      pcVar2 = pcVar2 + (int64_t)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_180193772:
        pcVar8 = (char *)0x180d48d24;
        if ((char *)puVar6[1] != (char *)0x0) {
          pcVar8 = (char *)puVar6[1];
        }
        break;
      }
      lVar4 = (int64_t)&rendering_buffer_2088_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar4]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_180193772;
      }
    }
  }
  if ((param_1 + 0x4c != 0) && (pcVar8 != (char *)0x0)) {
    AdvancedSystemOptimizer(pcVar8,&system_data_6430,param_1 + 0x4c);
  }
  pcVar8 = "dynamic_friction";
  do {
    pcVar3 = pcVar8;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar8 != '\0');
  for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar8 = pcVar7, puVar6 != (uint64_t *)0x0;
      puVar6 = (uint64_t *)puVar6[6]) {
    pcVar8 = (char *)*puVar6;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 == pcVar3 + -0x180a0b12f) {
      pcVar2 = pcVar2 + (int64_t)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_180193810:
        pcVar8 = (char *)0x180d48d24;
        if ((char *)puVar6[1] != (char *)0x0) {
          pcVar8 = (char *)puVar6[1];
        }
        break;
      }
      lVar4 = (int64_t)&rendering_buffer_2064_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar4]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_180193810;
      }
    }
  }
  if ((param_1 + 0x50 != 0) && (pcVar8 != (char *)0x0)) {
    AdvancedSystemOptimizer(pcVar8,&system_data_6430,param_1 + 0x50);
  }
  pcVar8 = "restitution";
  do {
    pcVar3 = pcVar8;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar8 != '\0');
  for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar8 = pcVar7, puVar6 != (uint64_t *)0x0;
      puVar6 = (uint64_t *)puVar6[6]) {
    pcVar8 = (char *)*puVar6;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 == pcVar3 + -0x180a0b167) {
      pcVar2 = pcVar2 + (int64_t)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_1801938a0:
        pcVar8 = (char *)0x180d48d24;
        if ((char *)puVar6[1] != (char *)0x0) {
          pcVar8 = (char *)puVar6[1];
        }
        break;
      }
      lVar4 = (int64_t)&rendering_buffer_2120_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar4]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_1801938a0;
      }
    }
  }
  if ((param_1 + 0x54 != 0) && (pcVar8 != (char *)0x0)) {
    AdvancedSystemOptimizer(pcVar8,&system_data_6430,param_1 + 0x54);
  }
  pcVar8 = "softness";
  do {
    pcVar3 = pcVar8;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar8 != '\0');
  for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar8 = pcVar7, puVar6 != (uint64_t *)0x0;
      puVar6 = (uint64_t *)puVar6[6]) {
    pcVar8 = (char *)*puVar6;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 == pcVar3 + -0x180a0b157) {
      pcVar2 = pcVar2 + (int64_t)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_180193930:
        pcVar8 = (char *)0x180d48d24;
        if ((char *)puVar6[1] != (char *)0x0) {
          pcVar8 = (char *)puVar6[1];
        }
        break;
      }
      lVar4 = (int64_t)&rendering_buffer_2104_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar4]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_180193930;
      }
    }
  }
  if ((param_1 + 0x58 != 0) && (pcVar8 != (char *)0x0)) {
    AdvancedSystemOptimizer(pcVar8,&system_data_6430,param_1 + 0x58);
  }
  pcVar8 = "linear_damping";
  do {
    pcVar3 = pcVar8;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar8 != '\0');
  for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar8 = pcVar7, puVar6 != (uint64_t *)0x0;
      puVar6 = (uint64_t *)puVar6[6]) {
    pcVar8 = (char *)*puVar6;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 == pcVar3 + -0x180a0b187) {
      pcVar2 = pcVar8 + (int64_t)pcVar2;
      if (pcVar2 <= pcVar8) {
LAB_1801939c0:
        pcVar8 = (char *)0x180d48d24;
        if ((char *)puVar6[1] != (char *)0x0) {
          pcVar8 = (char *)puVar6[1];
        }
        break;
      }
      lVar4 = (int64_t)&rendering_buffer_2152_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar4]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_1801939c0;
      }
    }
  }
  if ((param_1 + 0x5c != 0) && (pcVar8 != (char *)0x0)) {
    AdvancedSystemOptimizer(pcVar8,&system_data_6430,param_1 + 0x5c);
  }
  pcVar8 = "angular_damping";
  do {
    pcVar3 = pcVar8;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar8 != '\0');
  puVar6 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar6 == (uint64_t *)0x0) {
LAB_180193a66:
      if ((param_1 + 0x60 != 0) && (pcVar7 != (char *)0x0)) {
        AdvancedSystemOptimizer(pcVar7,&system_data_6430,param_1 + 0x60);
      }
      puStack_50 = &system_data_buffer_ptr;
      if (lStack_48 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pcVar8 = (char *)*puVar6;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar6[2];
    }
    if (pcVar2 == pcVar3 + -0x180a0b177) {
      pcVar2 = pcVar2 + (int64_t)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_180193a50:
        pcVar7 = (char *)0x180d48d24;
        if ((char *)puVar6[1] != (char *)0x0) {
          pcVar7 = (char *)puVar6[1];
        }
        goto LAB_180193a66;
      }
      lVar4 = (int64_t)&rendering_buffer_2136_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar4]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_180193a50;
      }
    }
    puVar6 = (uint64_t *)puVar6[6];
  } while( true );
}



uint64_t * FUN_180193ac0(uint64_t *param_1,int64_t param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int8_t auStackX_8 [8];
  
  puVar8 = (uint64_t *)param_1[2];
  puVar9 = param_1;
  if (puVar8 != (uint64_t *)0x0) {
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar7 = (uint64_t *)puVar8[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar8 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar10 = puVar8[5] - (int64_t)pbVar3;
          do {
            uVar5 = (uint)pbVar3[lVar10];
            iVar6 = *pbVar3 - uVar5;
            if (*pbVar3 != uVar5) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar7 = (uint64_t *)puVar8[1];
            goto LAB_180193b37;
          }
        }
        puVar7 = (uint64_t *)*puVar8;
      }
LAB_180193b37:
      if (bVar2) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
      puVar8 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    puVar8 = (uint64_t *)0x0;
  }
  if (puVar9 != param_1) {
    if (*(int *)(puVar9 + 6) == 0) {
LAB_180193b87:
      return puVar9 + 8;
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      pbVar3 = (byte *)puVar9[5];
      puVar8 = (uint64_t *)(*(int64_t *)(param_2 + 8) - (int64_t)pbVar3);
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[(int64_t)puVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_180193b87;
    }
  }
  plVar4 = (int64_t *)FUN_18013f220(param_1,auStackX_8,puVar8,puVar9,param_2);
  return (uint64_t *)(*plVar4 + 0x40);
}



uint64_t *
FUN_180193adc(uint64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t *param_4)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  int64_t *plVar4;
  uint uVar5;
  int iVar6;
  int64_t unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  int64_t lVar8;
  
  do {
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar7 = (uint64_t *)param_3[1];
      bVar2 = false;
    }
    else {
      if (*(int *)(param_3 + 6) == 0) {
        bVar2 = true;
      }
      else {
        pbVar3 = *(byte **)(unaff_RBX + 8);
        lVar8 = param_3[5] - (int64_t)pbVar3;
        do {
          uVar5 = (uint)pbVar3[lVar8];
          iVar6 = *pbVar3 - uVar5;
          if (*pbVar3 != uVar5) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        bVar2 = 0 < iVar6;
        if (iVar6 < 1) {
          puVar7 = (uint64_t *)param_3[1];
          goto LAB_180193b37;
        }
      }
      puVar7 = (uint64_t *)*param_3;
    }
LAB_180193b37:
    if (bVar2) {
      param_3 = param_4;
    }
    param_4 = param_3;
    param_3 = puVar7;
  } while (puVar7 != (uint64_t *)0x0);
  if (param_4 != unaff_RSI) {
    if (*(int *)(param_4 + 6) == 0) {
LAB_180193b87:
      return param_4 + 8;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar3 = (byte *)param_4[5];
      lVar8 = *(int64_t *)(unaff_RBX + 8) - (int64_t)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar5 = (uint)pbVar3[lVar8];
        if (bVar1 != uVar5) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_180193b87;
    }
  }
  plVar4 = (int64_t *)FUN_18013f220();
  return (uint64_t *)(*plVar4 + 0x40);
}



int64_t FUN_180193b4a(void)

{
  byte bVar1;
  byte *pbVar2;
  int64_t *plVar3;
  uint uVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t lVar5;
  int64_t in_R9;
  
  if (in_R9 != unaff_RSI) {
    if (*(int *)(in_R9 + 0x30) == 0) {
LAB_180193b87:
      return in_R9 + 0x40;
    }
    if (*(int *)(unaff_RBX + 0x10) != 0) {
      pbVar2 = *(byte **)(in_R9 + 0x28);
      lVar5 = *(int64_t *)(unaff_RBX + 8) - (int64_t)pbVar2;
      do {
        bVar1 = *pbVar2;
        uVar4 = (uint)pbVar2[lVar5];
        if (bVar1 != uVar4) break;
        pbVar2 = pbVar2 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_180193b87;
    }
  }
  plVar3 = (int64_t *)FUN_18013f220();
  return *plVar3 + 0x40;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180193bc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    puVar3 = (uint64_t *)
             CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,param_1 * 0x68 + 0x10,3,param_4,0xfffffffffffffffe);
    *puVar3 = param_1 << 0x20 | 0x68;
    puVar2 = puVar3 + 2;
    iVar4 = 0;
    puVar3 = puVar3 + 4;
    do {
      puVar3[-2] = (uint64_t)&processed_var_5912_ptr;
      puVar3[-2] = (uint64_t)&rendering_buffer_2184_ptr;
      puVar1 = puVar3 + -1;
      *puVar1 = (uint64_t)&system_state_ptr;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      *puVar1 = (uint64_t)&system_data_buffer_ptr;
      puVar3[2] = 0;
      *puVar3 = 0;
      *(int32_t *)(puVar3 + 1) = 0;
      puVar3[3] = (uint64_t)&system_state_ptr;
      puVar3[4] = 0;
      *(int32_t *)(puVar3 + 5) = 0;
      puVar3[3] = (uint64_t)&system_data_buffer_ptr;
      puVar3[6] = 0;
      puVar3[4] = 0;
      *(int32_t *)(puVar3 + 5) = 0;
      (**(code **)(*puVar1 + 0x10))(puVar1,&rendering_buffer_2168_ptr);
      *(int8_t *)(puVar3 + 7) = 0;
      *(int32_t *)((int64_t)puVar3 + 0x3c) = 0x3e4ccccd;
      *(int32_t *)(puVar3 + 8) = 0x3e99999a;
      *(uint64_t *)((int64_t)puVar3 + 0x44) = 0x3ecccccd;
      *(int32_t *)((int64_t)puVar3 + 0x4c) = 0x3dcccccd;
      *(int32_t *)(puVar3 + 10) = 0x3dcccccd;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0xd;
    } while ((uint64_t)(int64_t)iVar4 < param_1);
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180193d00(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180193d00(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  lVar5 = param_1[1];
  if (param_2 <= (uint64_t)(param_1[2] - lVar5 >> 5)) {
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        CoreEngineDataTransformer(lVar5,param_3);
        lVar5 = lVar5 + 0x20;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      lVar5 = param_1[1];
    }
    param_1[1] = param_2 * 0x20 + lVar5;
    return;
  }
  lVar3 = *param_1;
  lVar2 = lVar5 - lVar3 >> 5;
  uVar6 = lVar2 * 2;
  if (lVar2 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar2 + param_2) {
    uVar6 = lVar2 + param_2;
  }
  if (uVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 << 5,(char)param_1[3]);
    lVar3 = *param_1;
    lVar5 = param_1[1];
  }
  lVar3 = FUN_180059780(lVar3,lVar5,lVar2);
  lVar5 = lVar3;
  uVar7 = param_2;
  if (param_2 != 0) {
    do {
      CoreEngineDataTransformer(lVar5,param_3);
      uVar7 = uVar7 - 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar7 != 0);
  }
  puVar1 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar1) {
    do {
      (**(code **)*puVar4)(puVar4,0);
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar1);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = lVar2;
    param_1[2] = uVar6 * 0x20 + lVar2;
    param_1[1] = param_2 * 0x20 + lVar3;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180193d33(int64_t param_1)
void FUN_180193d33(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t unaff_RSI;
  int64_t lVar7;
  int64_t *unaff_R14;
  
  lVar2 = in_RAX - param_1 >> 5;
  uVar6 = lVar2 * 2;
  if (lVar2 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < (uint64_t)(lVar2 + unaff_RSI)) {
    uVar6 = lVar2 + unaff_RSI;
  }
  if (uVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 << 5,(char)unaff_R14[3]);
    param_1 = *unaff_R14;
    unaff_RBX = unaff_R14[1];
  }
  lVar3 = FUN_180059780(param_1,unaff_RBX,lVar2);
  lVar4 = lVar3;
  lVar7 = unaff_RSI;
  if (unaff_RSI != 0) {
    do {
      CoreEngineDataTransformer(lVar4);
      lVar7 = lVar7 + -1;
      lVar4 = lVar4 + 0x20;
    } while (lVar7 != 0);
  }
  puVar1 = (uint64_t *)unaff_R14[1];
  puVar5 = (uint64_t *)*unaff_R14;
  if (puVar5 != puVar1) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
    puVar5 = (uint64_t *)*unaff_R14;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *unaff_R14 = lVar2;
    unaff_R14[2] = uVar6 * 0x20 + lVar2;
    unaff_R14[1] = unaff_RSI * 0x20 + lVar3;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180193d44(int64_t param_1)
void FUN_180193d44(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t unaff_RSI;
  int64_t lVar7;
  int64_t *unaff_R14;
  
  uVar6 = in_RAX * 2;
  if (in_RAX == 0) {
    uVar6 = 1;
  }
  if (uVar6 < (uint64_t)(in_RAX + unaff_RSI)) {
    uVar6 = in_RAX + unaff_RSI;
  }
  if (uVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 << 5,(char)unaff_R14[3]);
    param_1 = *unaff_R14;
    unaff_RBX = unaff_R14[1];
  }
  lVar3 = FUN_180059780(param_1,unaff_RBX,lVar2);
  lVar4 = lVar3;
  lVar7 = unaff_RSI;
  if (unaff_RSI != 0) {
    do {
      CoreEngineDataTransformer(lVar4);
      lVar7 = lVar7 + -1;
      lVar4 = lVar4 + 0x20;
    } while (lVar7 != 0);
  }
  puVar1 = (uint64_t *)unaff_R14[1];
  puVar5 = (uint64_t *)*unaff_R14;
  if (puVar5 != puVar1) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
    puVar5 = (uint64_t *)*unaff_R14;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *unaff_R14 = lVar2;
    unaff_R14[2] = uVar6 * 0x20 + lVar2;
    unaff_R14[1] = unaff_RSI * 0x20 + lVar3;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}





// 函数: void FUN_180193de0(void)
void FUN_180193de0(void)

{
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t *unaff_RDI;
  int64_t unaff_R12;
  int64_t *unaff_R14;
  
  do {
    (**(code **)*unaff_RBX)(unaff_RBX,0);
    unaff_RBX = unaff_RBX + 4;
  } while (unaff_RBX != unaff_RDI);
  if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(*unaff_R14);
  }
  *unaff_R14 = unaff_R12;
  unaff_R14[2] = unaff_RBP * 0x20 + unaff_R12;
  unaff_R14[1] = unaff_RSI;
  return;
}





// 函数: void FUN_180193e2b(void)
void FUN_180193e2b(void)

{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t lVar1;
  int64_t unaff_R14;
  
  lVar1 = unaff_RSI;
  if (unaff_RSI != 0) {
    do {
      CoreEngineDataTransformer(unaff_RBX);
      unaff_RBX = unaff_RBX + 0x20;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(int64_t *)(unaff_R14 + 8);
  }
  *(int64_t *)(unaff_R14 + 8) = unaff_RSI * 0x20 + unaff_RBX;
  return;
}



uint64_t * FUN_180193e70(uint64_t *param_1,uint64_t *param_2,int64_t param_3)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  
  if ((uint64_t *)param_1[2] == (uint64_t *)0x0) {
    *param_2 = param_1;
    return param_2;
  }
  puVar6 = (uint64_t *)param_1[2];
  do {
    if (*(int *)(param_3 + 0x10) == 0) {
      puVar7 = (uint64_t *)puVar6[1];
      bVar1 = false;
    }
    else {
      if (*(int *)(puVar6 + 6) == 0) {
        bVar1 = true;
      }
      else {
        pbVar2 = *(byte **)(param_3 + 8);
        lVar5 = puVar6[5] - (int64_t)pbVar2;
        do {
          uVar3 = (uint)pbVar2[lVar5];
          iVar4 = *pbVar2 - uVar3;
          if (*pbVar2 != uVar3) break;
          pbVar2 = pbVar2 + 1;
        } while (uVar3 != 0);
        bVar1 = 0 < iVar4;
        if (iVar4 < 1) {
          puVar7 = (uint64_t *)puVar6[1];
          goto LAB_180193ed9;
        }
      }
      puVar7 = (uint64_t *)*puVar6;
    }
LAB_180193ed9:
    puVar8 = puVar6;
    if (bVar1) {
      puVar8 = param_1;
    }
    puVar6 = puVar7;
    param_1 = puVar8;
    if (puVar7 == (uint64_t *)0x0) {
      *param_2 = puVar8;
      return param_2;
    }
  } while( true );
}





// 函数: void FUN_180193e88(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t *param_4)
void FUN_180193e88(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t *param_4)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *in_R11;
  
  do {
    if (*(int *)(param_3 + 0x10) == 0) {
      puVar6 = (uint64_t *)param_4[1];
      bVar1 = false;
    }
    else {
      if (*(int *)(param_4 + 6) == 0) {
        bVar1 = true;
      }
      else {
        pbVar2 = *(byte **)(unaff_RSI + 8);
        lVar5 = param_4[5] - (int64_t)pbVar2;
        do {
          uVar3 = (uint)pbVar2[lVar5];
          iVar4 = *pbVar2 - uVar3;
          if (*pbVar2 != uVar3) break;
          pbVar2 = pbVar2 + 1;
        } while (uVar3 != 0);
        bVar1 = 0 < iVar4;
        if (iVar4 < 1) {
          puVar6 = (uint64_t *)param_4[1];
          goto LAB_180193ed9;
        }
      }
      puVar6 = (uint64_t *)*param_4;
    }
LAB_180193ed9:
    puVar7 = param_4;
    if (bVar1) {
      puVar7 = in_R11;
    }
    param_4 = puVar6;
    in_R11 = puVar7;
    if (puVar6 == (uint64_t *)0x0) {
      *unaff_RBX = puVar7;
      return;
    }
  } while( true );
}





// 函数: void FUN_180193ef9(uint64_t param_1,uint64_t *param_2)
void FUN_180193ef9(uint64_t param_1,uint64_t *param_2)

{
  *param_2 = param_1;
  return;
}



uint64_t *
FUN_180193f10(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  param_1[5] = &system_data_buffer_ptr;
  if (param_1[6] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[6] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  param_1[5] = &system_state_ptr;
  param_1[1] = &system_data_buffer_ptr;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[2] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[1] = &system_state_ptr;
  *param_1 = &processed_var_5912_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x68,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180193fc0(int64_t *param_1,uint64_t param_2,int64_t param_3,int param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t *puVar5;
  int *piVar6;
  int iVar7;
  int64_t *plStackX_8;
  uint64_t uStackX_10;
  int32_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  
  lVar3 = core_system_data_config;
  uVar9 = 0xfffffffffffffffe;
  iVar7 = 0;
  uVar8 = 0;
  plStackX_8 = param_1;
  uStackX_10 = param_2;
  lVar10 = core_system_data_config;
  iVar4 = _Mtx_lock(core_system_data_config);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  lVar1 = *(int64_t *)(lVar3 + 0x50);
  uVar2 = (*(int64_t *)(lVar3 + 0x58) - lVar1) / 0x18;
  if (uVar2 != 0) {
    piVar6 = (int *)(lVar1 + 0x10);
    do {
      if ((*(int64_t *)(piVar6 + -2) == param_3) && (*piVar6 == param_4)) {
        FUN_1802759e0(*(uint64_t *)(lVar1 + (int64_t)iVar7 * 0x18),param_2);
        iVar4 = _Mtx_unlock(lVar3);
        if (iVar4 == 0) {
          return param_2;
        }
        __Throw_C_error_std__YAXH_Z(iVar4);
        return param_2;
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 6;
    } while ((uint64_t)(int64_t)iVar7 < uVar2);
  }
  iVar4 = _Mtx_unlock(lVar3);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  puVar5 = (uint64_t *)FUN_1801940f0(lVar3,&plStackX_8,param_3,param_4,uVar8,uVar9,lVar10);
  FUN_1802759e0(*puVar5,param_2);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_2;
}



uint64_t * FUN_1801940f0(int64_t param_1,uint64_t *param_2,int64_t *param_3,int param_4)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t *plStack_88;
  int32_t uStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  int iStack_60;
  int64_t *plStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int64_t lStack_40;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar6 = 0;
  uStack_80 = 0;
  FUN_1802759e0(param_3,&plStack_88);
  if (param_4 == 0) {
    *param_2 = plStack_88;
    plStack_88 = (int64_t *)0x0;
    uStack_80 = 1;
  }
  else {
    lStack_40 = param_1;
    iVar3 = _Mtx_lock(param_1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    plVar5 = plStack_88;
    uVar8 = uVar6;
    if (plStack_88[8] - plStack_88[7] >> 4 != 0) {
      do {
        lVar1 = *(int64_t *)(uVar6 + plVar5[7]);
        lVar4 = lVar1;
        if ((((*(byte *)(lVar1 + 0xfd) & 0x40) == 0) || (*(int64_t *)(lVar1 + 0x210) == 0)) &&
           (*(int64_t *)(lVar1 + 0x1b0) != 0)) {
          lVar4 = FUN_180085900();
        }
        if (*(int64_t *)(lVar4 + 0x1b0) != 0) {
          lVar4 = func_0x000180085e10();
        }
        if (0 < *(int *)(lVar4 + 0x208)) {
          *(float *)(lVar1 + 0x2dc) = (float)param_4;
          FUN_180075ff0(lVar1);
          plVar5 = plStack_88;
        }
        uVar7 = (int)uVar8 + 1;
        uVar6 = uVar6 + 0x10;
        uVar8 = (uint64_t)uVar7;
      } while ((uint64_t)(int64_t)(int)uVar7 < (uint64_t)(plVar5[8] - plVar5[7] >> 4));
    }
    plVar5 = plStack_88;
    iStack_60 = 0;
    uStack_50 = 0;
    plStack_70 = (int64_t *)0x0;
    plStack_78 = (int64_t *)0x0;
    plStack_68 = (int64_t *)0x0;
    plStack_58 = plStack_88;
    if (plStack_88 != (int64_t *)0x0) {
      (**(code **)(*plStack_88 + 0x28))(plStack_88);
    }
    plStack_58 = (uint64_t *)0x0;
    plStack_70 = plVar5;
    if (param_3 != (int64_t *)0x0) {
      plStack_78 = param_3;
      (**(code **)(*param_3 + 0x28))(param_3);
    }
    plStack_78 = (int64_t *)0x0;
    puVar2 = *(uint64_t **)(param_1 + 0x58);
    plStack_68 = param_3;
    iStack_60 = param_4;
    if (puVar2 < *(uint64_t **)(param_1 + 0x60)) {
      *(uint64_t **)(param_1 + 0x58) = puVar2 + 3;
      *puVar2 = plVar5;
      plStack_58 = puVar2;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      puVar2[1] = param_3;
      if (param_3 != (int64_t *)0x0) {
        (**(code **)(*param_3 + 0x28))(param_3);
      }
      *(int *)(puVar2 + 2) = param_4;
    }
    else {
      FUN_180194530(param_1 + 0x50,&plStack_70);
      plVar5 = plStack_70;
      param_3 = plStack_68;
    }
    *param_2 = plStack_88;
    plStack_88 = (int64_t *)0x0;
    uStack_80 = 1;
    if (param_3 != (int64_t *)0x0) {
      (**(code **)(*param_3 + 0x38))(param_3);
    }
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    iVar3 = _Mtx_unlock(param_1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
  }
  if (plStack_88 != (int64_t *)0x0) {
    (**(code **)(*plStack_88 + 0x38))();
  }
  return param_2;
}





