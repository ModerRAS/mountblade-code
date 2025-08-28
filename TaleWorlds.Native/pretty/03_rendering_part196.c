#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part196.c - 4 个函数

// 函数: void FUN_180381280(int64_t param_1)
void FUN_180381280(int64_t param_1)

{
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (*(char *)(param_1 + 0x18) != '\0') {
      *(uint64_t *)(param_1 + 8) = 0;
      *(uint64_t *)(param_1 + 0x10) = 0;
      *(int8_t *)(param_1 + 0x18) = 0;
      return;
    }
    if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(param_1 + 8) = 0;
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(int8_t *)(param_1 + 0x18) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180381360(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void FUN_180381360(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  void *puVar10;
  void *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t auStack_168 [48];
  uint64_t uStack_138;
  void *puStack_128;
  int8_t *puStack_120;
  int iStack_118;
  int8_t auStack_110 [72];
  void *puStack_c8;
  byte *pbStack_c0;
  int iStack_b8;
  byte abStack_b0 [72];
  uint64_t uStack_68;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  *(int32_t *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  puVar5[8] = 0;
  pcVar6 = "physics";
  do {
    pcVar8 = pcVar6;
    pcVar6 = pcVar8 + 1;
  } while (*pcVar6 != '\0');
  *puVar5 = &processed_var_4920_ptr;
  puVar5[2] = pcVar8 + -0x180a21be7;
  if (param_4 == 0) {
    lVar4 = *param_1;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x20) != 0)) {
      puVar11 = &system_buffer_ptr;
      if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
        puVar11 = *(void **)(lVar4 + 0x18);
      }
      SystemAllocationProcessor(param_2,puVar5,&processed_var_4420_ptr,puVar11);
    }
    if ((int)param_1[7] != 0) {
      FUN_1803822e0(param_1,param_2,puVar5);
    }
    if ((int)param_1[3] != 0) {
      puVar11 = &system_buffer_ptr;
      if ((void *)param_1[2] != (void *)0x0) {
        puVar11 = (void *)param_1[2];
      }
      SystemAllocationProcessor(param_2,puVar5,&processed_var_4400_ptr,puVar11);
    }
    if ((0.0 < *(float *)((int64_t)param_1 + 0x3c)) &&
       (*(float *)((int64_t)param_1 + 0x3c) != 1.0)) {
      FUN_18062f990(param_2,puVar5,&processed_var_4496_ptr);
    }
    if (0.0 < *(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
              *(float *)((int64_t)param_1 + 0x44) * *(float *)((int64_t)param_1 + 0x44) +
              *(float *)(param_1 + 9) * *(float *)(param_1 + 9)) {
      FUN_18062fb40(param_2,puVar5,&processed_var_4480_ptr);
    }
    goto LAB_18038175b;
  }
  puStack_c8 = &memory_allocator_3480_ptr;
  pbStack_c0 = abStack_b0;
  abStack_b0[0] = 0;
  iStack_b8 = 0;
  strcpy_s(abStack_b0,0x40,&system_buffer_ptr);
  if (*param_1 != 0) {
    puVar11 = *(void **)(*param_1 + 0x18);
    puVar10 = &system_buffer_ptr;
    if (puVar11 != (void *)0x0) {
      puVar10 = puVar11;
    }
    (**(code **)(puStack_c8 + 0x10))(&puStack_c8,puVar10);
  }
  puStack_128 = &memory_allocator_3480_ptr;
  puStack_120 = auStack_110;
  auStack_110[0] = 0;
  iStack_118 = 0;
  strcpy_s(auStack_110,0x40,&system_buffer_ptr);
  if (*(int64_t *)(param_4 + 0x110) != 0) {
    puVar11 = *(void **)(*(int64_t *)(param_4 + 0x110) + 0x18);
    puVar10 = &system_buffer_ptr;
    if (puVar11 != (void *)0x0) {
      puVar10 = puVar11;
    }
    (**(code **)(puStack_128 + 0x10))(&puStack_128,puVar10);
  }
  iVar9 = iStack_118;
  if (iStack_b8 == iStack_118) {
    if (iStack_b8 != 0) {
      pbVar7 = pbStack_c0;
      do {
        pbVar1 = pbVar7 + ((int64_t)puStack_120 - (int64_t)pbStack_c0);
        iVar9 = (uint)*pbVar7 - (uint)*pbVar1;
        if (iVar9 != 0) break;
        pbVar7 = pbVar7 + 1;
      } while (*pbVar1 != 0);
    }
LAB_180381521:
    if (iVar9 != 0) goto LAB_180381523;
  }
  else {
    if (iStack_b8 == 0) goto LAB_180381521;
LAB_180381523:
    pbVar7 = &system_buffer_ptr;
    if (pbStack_c0 != (byte *)0x0) {
      pbVar7 = pbStack_c0;
    }
    SystemAllocationProcessor(param_2,puVar5,&processed_var_4420_ptr,pbVar7);
  }
  if ((int)param_1[7] != *(int *)(param_4 + 0x148)) {
    FUN_1803822e0(param_1,param_2,puVar5);
  }
  iVar9 = (int)param_1[3];
  if (iVar9 == *(int *)(param_4 + 0x128)) {
    if (iVar9 == 0) {
LAB_18038159d:
      if (*(int *)(param_4 + 0x128) != 0) goto LAB_1803815a1;
    }
    else {
      pcVar6 = (char *)param_1[2];
      pcVar8 = pcVar6;
      do {
        cVar2 = *pcVar8;
        cVar3 = pcVar8[*(int64_t *)(param_4 + 0x120) - (int64_t)pcVar6];
        if (cVar2 != cVar3) break;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      if (cVar2 != cVar3) goto LAB_1803815a5;
    }
  }
  else {
    if (iVar9 == 0) goto LAB_18038159d;
LAB_1803815a1:
    pcVar6 = (char *)param_1[2];
LAB_1803815a5:
    pcVar8 = "";
    if (pcVar6 != (char *)0x0) {
      pcVar8 = pcVar6;
    }
    SystemAllocationProcessor(param_2,puVar5,&processed_var_4400_ptr,pcVar8);
  }
  fVar12 = *(float *)((int64_t)param_1 + 0x3c) - *(float *)(param_4 + 0x14c);
  if (((fVar12 <= -0.01) || (0.01 <= fVar12)) && (*(float *)((int64_t)param_1 + 0x3c) != 1.0)) {
    FUN_18062f990(param_2,puVar5,&processed_var_4496_ptr);
  }
  fVar13 = *(float *)(param_4 + 0x154) - *(float *)((int64_t)param_1 + 0x44);
  fVar14 = *(float *)(param_4 + 0x150) - *(float *)(param_1 + 8);
  fVar12 = *(float *)(param_4 + 0x158) - *(float *)(param_1 + 9);
  fVar12 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12);
  if ((fVar12 <= -0.01) || (0.01 <= fVar12)) {
    FUN_18062fb40(param_2,puVar5,&processed_var_4480_ptr);
  }
  puStack_128 = &system_state_ptr;
  puStack_c8 = &system_state_ptr;
LAB_18038175b:
  if ((puVar5[6] != 0) || (puVar5[8] != 0)) {
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar5[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar5;
    }
    else {
      puVar5[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar5;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar5;
    puVar5[4] = param_3;
    puVar5[0xb] = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803817c0(int64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_1803817c0(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  char *pcVar5;
  uint64_t uVar6;
  int64_t lVar7;
  char *pcVar8;
  uint64_t *puVar9;
  char *pcVar10;
  uint64_t *puVar12;
  int32_t uVar13;
  int8_t auStack_e8 [32];
  int64_t *plStack_c8;
  int64_t *aplStack_c0 [2];
  uint64_t uStack_b0;
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [72];
  uint64_t uStack_48;
  char *pcVar11;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  pcVar8 = (char *)0x0;
  pcVar10 = "physics";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(uint64_t **)(param_2 + 0x30);
LAB_180381826:
  if (puVar9 != (uint64_t *)0x0) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar5 = pcVar8;
    }
    else {
      pcVar5 = (char *)puVar9[2];
    }
    if (pcVar5 != pcVar11 + -0x180a21be7) goto LAB_1803818ee;
    pcVar5 = pcVar5 + (int64_t)pcVar10;
    if (pcVar10 < pcVar5) {
      lVar7 = (int64_t)&processed_var_4920_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar7]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar5 <= pcVar10) goto LAB_180381874;
      }
      goto LAB_1803818ee;
    }
LAB_180381874:
    plStack_c8 = (int64_t *)*param_1;
    *param_1 = 0;
    if (plStack_c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_c8 + 0x38))();
    }
    puStack_a8 = &memory_allocator_3480_ptr;
    puStack_a0 = auStack_90;
    uStack_98 = 0;
    auStack_90[0] = 0;
    pcVar10 = "shape";
    do {
      pcVar11 = pcVar10;
      pcVar10 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    for (puVar12 = (uint64_t *)puVar9[8]; puVar12 != (uint64_t *)0x0;
        puVar12 = (uint64_t *)puVar12[6]) {
      pcVar10 = (char *)*puVar12;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x180d48d24;
        pcVar5 = pcVar8;
      }
      else {
        pcVar5 = (char *)puVar12[2];
      }
      if (pcVar5 == pcVar11 + -0x180a219f3) {
        pcVar5 = pcVar5 + (int64_t)pcVar10;
        if (pcVar5 <= pcVar10) {
LAB_180381921:
          lVar7 = 0x180d48d24;
          if (puVar12[1] != 0) {
            lVar7 = puVar12[1];
          }
          uVar13 = FUN_180049bf0(&puStack_a8,lVar7);
          plVar4 = (int64_t *)FUN_1800b3430(uVar13,aplStack_c0,&puStack_a8,1);
          lVar7 = *plVar4;
          *plVar4 = 0;
          plStack_c8 = (int64_t *)*param_1;
          *param_1 = lVar7;
          if (plStack_c8 != (int64_t *)0x0) {
            (**(code **)(*plStack_c8 + 0x38))();
          }
          if (aplStack_c0[0] != (int64_t *)0x0) {
            (**(code **)(*aplStack_c0[0] + 0x38))();
          }
          goto LAB_18038199b;
        }
        lVar7 = (int64_t)&processed_var_4420_ptr - (int64_t)pcVar10;
        while (*pcVar10 == pcVar10[lVar7]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar5 <= pcVar10) goto LAB_180381921;
        }
      }
    }
    if (param_3 != 0) {
      FUN_180080810(param_1,param_3 + 0x110);
    }
LAB_18038199b:
    (**(code **)(param_1[1] + 0x10))(param_1 + 1,&system_buffer_ptr);
    pcVar10 = "override_material";
    do {
      pcVar11 = pcVar10;
      pcVar10 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    for (puVar12 = (uint64_t *)puVar9[8]; puVar12 != (uint64_t *)0x0;
        puVar12 = (uint64_t *)puVar12[6]) {
      pcVar10 = (char *)*puVar12;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x180d48d24;
        pcVar5 = pcVar8;
      }
      else {
        pcVar5 = (char *)puVar12[2];
      }
      if (pcVar5 == pcVar11 + -0x180a219df) {
        pcVar5 = pcVar10 + (int64_t)pcVar5;
        if (pcVar5 <= pcVar10) {
LAB_180381a10:
          lVar7 = 0x180d48d24;
          if (puVar12[1] != 0) {
            lVar7 = puVar12[1];
          }
          (**(code **)(param_1[1] + 0x10))(param_1 + 1,lVar7);
          goto LAB_180381a49;
        }
        lVar7 = (int64_t)&processed_var_4400_ptr - (int64_t)pcVar10;
        while (*pcVar10 == pcVar10[lVar7]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar5 <= pcVar10) goto LAB_180381a10;
        }
      }
    }
    if (param_3 != 0) {
      SystemCore_ConfigurationHandler0(param_1 + 1,param_3 + 0x118);
    }
LAB_180381a49:
    *(int32_t *)(param_1 + 7) = 0;
    FUN_180381d40(param_1,puVar9);
    if (((int)param_1[7] == 0) && (param_3 != 0)) {
      *(int32_t *)(param_1 + 7) = *(int32_t *)(param_3 + 0x148);
    }
    puVar1 = (int32_t *)((int64_t)param_1 + 0x3c);
    *puVar1 = 0x3f800000;
    pcVar10 = "mass";
    do {
      pcVar11 = pcVar10;
      pcVar10 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    for (puVar12 = (uint64_t *)puVar9[8]; puVar12 != (uint64_t *)0x0;
        puVar12 = (uint64_t *)puVar12[6]) {
      pcVar10 = (char *)*puVar12;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x180d48d24;
        pcVar5 = pcVar8;
      }
      else {
        pcVar5 = (char *)puVar12[2];
      }
      if (pcVar5 == pcVar11 + -0x180a21a3f) {
        pcVar5 = pcVar5 + (int64_t)pcVar10;
        if (pcVar5 <= pcVar10) {
LAB_180381ad4:
          pcVar8 = (char *)0x180d48d24;
          if ((char *)puVar12[1] != (char *)0x0) {
            pcVar8 = (char *)puVar12[1];
          }
          break;
        }
        lVar7 = (int64_t)&processed_var_4496_ptr - (int64_t)pcVar10;
        while (*pcVar10 == pcVar10[lVar7]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar5 <= pcVar10) goto LAB_180381ad4;
        }
      }
    }
    if (puVar1 == (int32_t *)0x0) {
LAB_180381b06:
      if (pcVar8 == (char *)0x0) goto LAB_180381b0b;
    }
    else {
      if (pcVar8 != (char *)0x0) {
        FUN_18010cbc0(pcVar8,&system_flag_6430,puVar1);
        goto LAB_180381b06;
      }
LAB_180381b0b:
      if (param_3 != 0) {
        *puVar1 = *(int32_t *)(param_3 + 0x14c);
      }
    }
    *(int32_t *)(param_1 + 8) = 0;
    *(int32_t *)((int64_t)param_1 + 0x44) = 0;
    *(int32_t *)(param_1 + 9) = 0;
    *(int32_t *)((int64_t)param_1 + 0x4c) = 0;
    lVar7 = FUN_180631960(puVar9,&processed_var_4480_ptr,param_1 + 8);
    if ((lVar7 == 0) && (param_3 != 0)) {
      uVar13 = *(int32_t *)(param_3 + 0x154);
      uVar2 = *(int32_t *)(param_3 + 0x158);
      uVar3 = *(int32_t *)(param_3 + 0x15c);
      *(int32_t *)(param_1 + 8) = *(int32_t *)(param_3 + 0x150);
      *(int32_t *)((int64_t)param_1 + 0x44) = uVar13;
      *(int32_t *)(param_1 + 9) = uVar2;
      *(int32_t *)((int64_t)param_1 + 0x4c) = uVar3;
    }
    goto LAB_180381d06;
  }
  if (param_3 == 0) {
    pcVar10 = "override_physics_material";
    do {
      pcVar11 = pcVar10;
      pcVar10 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[6]) {
      pcVar10 = (char *)*puVar9;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x180d48d24;
        pcVar5 = pcVar8;
      }
      else {
        pcVar5 = (char *)puVar9[2];
      }
      if (pcVar5 == pcVar11 + -0x180a21a0f) {
        pcVar5 = pcVar5 + (int64_t)pcVar10;
        if (pcVar5 <= pcVar10) {
LAB_180381c05:
          lVar7 = 0x180d48d24;
          if (puVar9[1] != 0) {
            lVar7 = puVar9[1];
          }
          (**(code **)(param_1[1] + 0x10))(param_1 + 1,lVar7);
          break;
        }
        lVar7 = (int64_t)&processed_var_4448_ptr - (int64_t)pcVar10;
        while (*pcVar10 == pcVar10[lVar7]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar5 <= pcVar10) goto LAB_180381c05;
        }
      }
    }
    puStack_a8 = &memory_allocator_3480_ptr;
    puStack_a0 = auStack_90;
    uStack_98 = 0;
    auStack_90[0] = 0;
    pcVar10 = "body_name";
    do {
      pcVar11 = pcVar10;
      pcVar10 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    for (puVar9 = *(uint64_t **)(param_2 + 0x40); puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[6]) {
      pcVar10 = (char *)*puVar9;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x180d48d24;
        pcVar5 = pcVar8;
      }
      else {
        pcVar5 = (char *)puVar9[2];
      }
      if (pcVar5 == pcVar11 + -0x180a1885f) {
        pcVar5 = pcVar5 + (int64_t)pcVar10;
        if (pcVar5 <= pcVar10) {
LAB_180381cc0:
          pcVar8 = (char *)0x180d48d24;
          if ((char *)puVar9[1] != (char *)0x0) {
            pcVar8 = (char *)puVar9[1];
          }
          uVar13 = FUN_180049bf0(&puStack_a8,pcVar8);
          uVar6 = FUN_1800b3430(uVar13,aplStack_c0,&puStack_a8,1);
          FUN_180060b80(param_1,uVar6);
          if (aplStack_c0[0] != (int64_t *)0x0) {
            (**(code **)(*aplStack_c0[0] + 0x38))();
          }
          break;
        }
        lVar7 = (int64_t)&processed_var_7152_ptr - (int64_t)pcVar10;
        while (*pcVar10 == pcVar10[lVar7]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar5 <= pcVar10) goto LAB_180381cc0;
        }
      }
    }
LAB_180381d06:
    puStack_a8 = &system_state_ptr;
  }
  else {
    *(int32_t *)((int64_t)param_1 + 0x3c) = *(int32_t *)(param_3 + 0x14c);
    uVar13 = *(int32_t *)(param_3 + 0x154);
    uVar2 = *(int32_t *)(param_3 + 0x158);
    uVar3 = *(int32_t *)(param_3 + 0x15c);
    *(int32_t *)(param_1 + 8) = *(int32_t *)(param_3 + 0x150);
    *(int32_t *)((int64_t)param_1 + 0x44) = uVar13;
    *(int32_t *)(param_1 + 9) = uVar2;
    *(int32_t *)((int64_t)param_1 + 0x4c) = uVar3;
    FUN_180080810(param_1,param_3 + 0x110);
    *(int32_t *)(param_1 + 7) = *(int32_t *)(param_3 + 0x148);
    SystemCore_ConfigurationHandler0(param_1 + 1,param_3 + 0x118);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_e8);
LAB_1803818ee:
  puVar9 = (uint64_t *)puVar9[0xb];
  goto LAB_180381826;
}





// 函数: void FUN_180381d40(int64_t param_1,int64_t param_2)
void FUN_180381d40(int64_t param_1,int64_t param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int64_t lVar6;
  void *puVar7;
  int iVar8;
  void *puVar9;
  uint64_t *puVar10;
  char *pcVar11;
  char *pcVar12;
  uint64_t uVar13;
  void *puStack_50;
  void *puStack_48;
  int iStack_40;
  uint64_t uStack_38;
  
  uVar13 = 0xfffffffffffffffe;
  pcVar11 = "body_flags";
  do {
    pcVar12 = pcVar11;
    pcVar11 = pcVar12 + 1;
  } while (*pcVar11 != '\0');
  puVar10 = *(uint64_t **)(param_2 + 0x30);
  if (puVar10 != (uint64_t *)0x0) {
    pcVar11 = (char *)0x0;
    do {
      pcVar4 = (char *)*puVar10;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x180d48d24;
        pcVar2 = pcVar11;
      }
      else {
        pcVar2 = (char *)puVar10[2];
      }
      if (pcVar2 == pcVar12 + -0x180a219ff) {
        pcVar2 = pcVar2 + (int64_t)pcVar4;
        if (pcVar2 <= pcVar4) {
LAB_180381dd0:
          pcVar12 = "body_flag";
          do {
            pcVar4 = pcVar12;
            pcVar12 = pcVar4 + 1;
          } while (*pcVar12 != '\0');
          for (pcVar12 = (char *)puVar10[6]; pcVar2 = pcVar11, pcVar12 != (char *)0x0;
              pcVar12 = *(char **)(pcVar12 + 0x58)) {
            pcVar3 = *(char **)pcVar12;
            if (pcVar3 == (char *)0x0) {
              pcVar3 = (char *)0x180d48d24;
              pcVar5 = pcVar11;
            }
            else {
              pcVar5 = *(char **)(pcVar12 + 0x10);
            }
            if (pcVar5 == pcVar4 + -0x180a21a7f) {
              pcVar5 = pcVar3 + (int64_t)pcVar5;
              pcVar2 = pcVar12;
              if (pcVar5 <= pcVar3) break;
              lVar6 = (int64_t)&processed_var_4560_ptr - (int64_t)pcVar3;
              while (*pcVar3 == pcVar3[lVar6]) {
                pcVar3 = pcVar3 + 1;
                if (pcVar5 <= pcVar3) goto LAB_180381e4e;
              }
            }
          }
LAB_180381e4e:
          puStack_50 = &system_data_buffer_ptr;
          uStack_38 = 0;
          puStack_48 = (void *)0x0;
          iStack_40 = 0;
          if (pcVar2 == (char *)0x0) goto LAB_180382298;
          iVar8 = 0;
          puVar9 = (void *)0x0;
          do {
            pcVar12 = "name";
            do {
              pcVar4 = pcVar12;
              pcVar12 = pcVar4 + 1;
            } while (*pcVar12 != '\0');
            for (puVar10 = *(uint64_t **)(pcVar2 + 0x40); puVar10 != (uint64_t *)0x0;
                puVar10 = (uint64_t *)puVar10[6]) {
              pcVar12 = (char *)*puVar10;
              if (pcVar12 == (char *)0x0) {
                pcVar12 = (char *)0x180d48d24;
                pcVar3 = pcVar11;
              }
              else {
                pcVar3 = (char *)puVar10[2];
              }
              if (pcVar3 == pcVar4 + -0x180a03a83) {
                pcVar3 = pcVar3 + (int64_t)pcVar12;
                if (pcVar3 <= pcVar12) {
LAB_180381f08:
                  lVar6 = 0x180d48d24;
                  if (puVar10[1] != 0) {
                    lVar6 = puVar10[1];
                  }
                  (**(code **)(puStack_50 + 0x10))(&puStack_50,lVar6,pcVar3,puVar10,uVar13);
                  puVar9 = puStack_48;
                  iVar8 = iStack_40;
                  break;
                }
                lVar6 = (int64_t)&system_flag_3a84 - (int64_t)pcVar12;
                while (*pcVar12 == pcVar12[lVar6]) {
                  pcVar12 = pcVar12 + 1;
                  if (pcVar3 <= pcVar12) goto LAB_180381f08;
                }
              }
            }
            if (iVar8 == 9) {
              iVar1 = strcmp(puVar9,&processed_var_8160_ptr);
              if (iVar1 == 0) {
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 4;
              }
              else {
                iVar1 = strcmp(puVar9,&processed_var_4688_ptr);
                if (iVar1 == 0) {
                  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x800;
                }
                else {
                  iVar1 = strcmp(puVar9,&processed_var_4792_ptr);
                  if (iVar1 != 0) goto LAB_180382245;
                  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x400;
                }
              }
            }
            else if (iVar8 == 10) {
              iVar1 = strcmp(puVar9,&processed_var_4544_ptr);
              if (iVar1 == 0) {
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x100;
              }
              else {
LAB_1803821e7:
                iVar1 = strcmp(puVar9,&processed_var_4880_ptr);
                if (iVar1 != 0) goto LAB_180382245;
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x200000;
              }
            }
            else if (iVar8 == 0x11) {
              iVar1 = strcmp(puVar9,&processed_var_4520_ptr);
              if (iVar1 == 0) {
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x4000;
              }
              else {
LAB_180382055:
                iVar1 = strcmp(puVar9,&processed_var_4632_ptr);
                if (iVar1 != 0) goto LAB_180382245;
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80000;
              }
            }
            else if (iVar8 == 8) {
              iVar1 = strcmp(puVar9,&processed_var_4504_ptr);
              if (iVar1 == 0) {
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
              }
              else {
LAB_1803820d4:
                iVar1 = strcmp(puVar9,&processed_var_4576_ptr);
                if (iVar1 != 0) goto LAB_180382245;
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x10;
              }
            }
            else {
              pcVar3 = pcVar11;
              pcVar12 = pcVar11;
              pcVar4 = pcVar11;
              if (iVar8 == 7) {
                do {
                  pcVar5 = pcVar3 + 1;
                  if (pcVar3[(int64_t)puVar9] != pcVar3[0x180a20e68]) goto LAB_1803820b0;
                  pcVar3 = pcVar5;
                } while (pcVar5 != &system_flag_0008);
                *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x200;
              }
              else {
                if (iVar8 == 0x11) goto LAB_180382055;
                if (iVar8 == 0x18) {
                  iVar1 = strcmp(puVar9,&processed_var_4600_ptr);
                  if (iVar1 != 0) goto LAB_180382245;
                  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x40000;
                }
                else if (iVar8 == 7) {
LAB_1803820b0:
                  do {
                    pcVar3 = pcVar4 + 1;
                    if (pcVar4[(int64_t)puVar9] != pcVar4[0x180a21aa0]) goto LAB_180382172;
                    pcVar4 = pcVar3;
                  } while (pcVar3 != &system_flag_0008);
                  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 8;
                }
                else {
                  if (iVar8 == 8) goto LAB_1803820d4;
                  if (iVar8 == 0x13) {
                    iVar1 = strcmp(puVar9,&processed_var_4712_ptr);
                    if (iVar1 != 0) goto LAB_180382245;
                    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x20;
                  }
                  else if (iVar8 == 6) {
                    do {
                      pcVar4 = pcVar12 + 1;
                      if (pcVar12[(int64_t)puVar9] != pcVar12[0x180a21b0c]) goto LAB_180382245;
                      pcVar12 = pcVar4;
                    } while (pcVar4 != (char *)0x7);
                    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x40;
                  }
                  else if (iVar8 == 0x19) {
                    iVar1 = strcmp(puVar9,&processed_var_4656_ptr);
                    if (iVar1 != 0) goto LAB_180382245;
                    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80;
                  }
                  else if (iVar8 == 7) {
LAB_180382172:
                    do {
                      pcVar4 = pcVar12 + 1;
                      if (pcVar12[(int64_t)puVar9] != pcVar12[0x180a21b60]) goto LAB_180382245;
                      pcVar12 = pcVar4;
                    } while (pcVar4 != &system_flag_0008);
                    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x1000;
                  }
                  else if (iVar8 == 0xf) {
                    iVar1 = strcmp(puVar9,&processed_var_4768_ptr);
                    if (iVar1 != 0) goto LAB_180382245;
                    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x2000;
                  }
                  else if (iVar8 == 0x1f) {
                    iVar1 = strcmp(puVar9,&processed_var_4736_ptr);
                    if (iVar1 != 0) goto LAB_180382245;
                    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x20000;
                  }
                  else {
                    if (iVar8 == 10) goto LAB_1803821e7;
                    if (iVar8 == 0xc) {
                      iVar1 = strcmp(puVar9,&processed_var_4864_ptr);
                      if (iVar1 == 0) {
                        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x400000;
                      }
                      else {
LAB_180382245:
                        puVar7 = &system_buffer_ptr;
                        if (puVar9 != (void *)0x0) {
                          puVar7 = puVar9;
                        }
                        FUN_180627020(&processed_var_4808_ptr,puVar7);
                        puVar9 = puStack_48;
                        iVar8 = iStack_40;
                      }
                    }
                    else {
                      if ((iVar8 != 0x16) || (iVar1 = strcmp(puVar9,&processed_var_4840_ptr), iVar1 != 0))
                      goto LAB_180382245;
                      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x10000000;
                    }
                  }
                }
              }
            }
            pcVar2 = *(char **)(pcVar2 + 0x58);
            if (pcVar2 == (char *)0x0) {
LAB_180382298:
              puStack_50 = &system_data_buffer_ptr;
              if (puStack_48 == (void *)0x0) {
                return;
              }
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
          } while( true );
        }
        lVar6 = (int64_t)&processed_var_4432_ptr - (int64_t)pcVar4;
        while (*pcVar4 == pcVar4[lVar6]) {
          pcVar4 = pcVar4 + 1;
          if (pcVar2 <= pcVar4) goto LAB_180381dd0;
        }
      }
      puVar10 = (uint64_t *)puVar10[0xb];
    } while (puVar10 != (uint64_t *)0x0);
  }
  return;
}





