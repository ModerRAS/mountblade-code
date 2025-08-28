#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"

// 99_part_06_part029_sub001.c - 7 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_06_part029.c - 7 个函数


// 函数: void FUN_1803c05d0(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_1803c05d0(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void *puVar8;
  uint uVar9;
  uint uVar10;
  void *puVar11;
  char *pcVar4;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  if ((*(int64_t *)(lVar1 + 0x268) == 0) ||
     (((*(uint *)(*(int64_t *)(lVar1 + 0x268) + 0x2ac) ^ *(uint *)(lVar1 + 0x2ac)) & 0xfedd7fff) !=
      0)) {
    uVar10 = *(uint *)(lVar1 + 0x2ac);
    puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *(int32_t *)(puVar2 + 5) = 1;
    puVar2[6] = 0;
    puVar2[8] = 0;
    pcVar3 = "flags";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar2 = &processed_var_4216_ptr;
    puVar2[2] = pcVar4 + -0x180a06b77;
    uVar9 = uVar10 >> 4 & 0xf;
    if (uVar9 != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      puVar5[6] = 0;
      puVar5[8] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&ui_system_data_1600_ptr);
      FUN_180630c80(param_2,puVar5,&memory_allocator_3692_ptr,uVar9);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
        puVar2[7] = puVar5;
        puVar5[4] = puVar2;
        puVar5[0xb] = 0;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
        puVar2[7] = puVar5;
        puVar5[4] = puVar2;
        puVar5[0xb] = 0;
      }
    }
    if ((uVar10 >> 10 & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&ui_system_data_1592_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
    }
    if ((uVar10 >> 0xd & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2120_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0x16 & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2096_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 8 & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2072_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0x12 & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2288_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0xb & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2040_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0xc & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2216_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0x10 & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2192_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((int)uVar10 < 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2160_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      if (puVar2[6] == 0) {
        puVar5[10] = 0;
        puVar2[6] = puVar5;
      }
      else {
        puVar5[10] = puVar2[7];
        *(uint64_t **)(puVar2[7] + 0x58) = puVar5;
      }
      puVar2[7] = puVar5;
      puVar5[4] = puVar2;
      puVar5[0xb] = 0;
    }
    if ((uVar10 >> 0xe & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2136_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
    }
    if ((uVar10 >> 0x1a & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2336_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
    }
    if ((uVar10 >> 0x14 & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2312_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
    }
    if ((uVar10 >> 0x13 & 1) != 0) {
      puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4260_ptr;
      puVar5[2] = pcVar4 + -0x180a06ba3;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&rendering_buffer_2256_ptr);
      SystemAllocationProcessor(param_2,puVar5,&memory_allocator_3692_ptr,&rendering_buffer_2328_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
    }
    if (*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x268) == 0) {
      func_0x0001802bf540(param_3,puVar2);
    }
    else {
      func_0x0001800a1de0();
    }
  }
  lVar1 = *(int64_t *)(param_1 + 8);
  if ((*(int64_t *)(lVar1 + 0x268) != 0) &&
     (*(int *)(lVar1 + 0x2c4) == *(int *)(*(int64_t *)(lVar1 + 0x268) + 0x2c4))) {
    return;
  }
  uVar10 = *(uint *)(lVar1 + 0x2c4);
  puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar3 = "visibility_masks";
  do {
    pcVar4 = pcVar3;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar3 != '\0');
  *puVar2 = &system_param2_ptr;
  puVar2[2] = pcVar4 + -0x180a238f7;
  puVar8 = &rendering_buffer_2336_ptr;
  lVar7 = *(int64_t *)(param_1 + 8);
  uVar9 = uVar10 & 4;
  lVar1 = *(int64_t *)(lVar7 + 0x268);
  if (lVar1 == 0) {
LAB_1803c1030:
    if (uVar9 != 0) {
LAB_1803c1034:
      uVar6 = FUN_18062f5e0(param_2,1,&rendering_buffer_2512_ptr);
      SystemAllocationProcessor(param_2,uVar6,&system_flag_3a84,&rendering_buffer_2496_ptr);
      puVar11 = &rendering_buffer_2336_ptr;
      if (uVar9 != 0) {
        puVar11 = &rendering_buffer_2328_ptr;
      }
      SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar11);
      func_0x0001800a1de0(puVar2,uVar6);
      lVar7 = *(int64_t *)(param_1 + 8);
    }
  }
  else {
    if (uVar9 != (*(uint *)(lVar1 + 0x2c4) & 4)) goto LAB_1803c1034;
    if (lVar1 == 0) goto LAB_1803c1030;
  }
  lVar1 = *(int64_t *)(lVar7 + 0x268);
  uVar9 = uVar10 & 2;
  if (lVar1 == 0) {
LAB_1803c10b8:
    if (uVar9 != 0) {
LAB_1803c10bc:
      uVar6 = FUN_18062f5e0(param_2,1,&rendering_buffer_2512_ptr);
      SystemAllocationProcessor(param_2,uVar6,&system_flag_3a84,&rendering_buffer_2440_ptr);
      puVar11 = &rendering_buffer_2336_ptr;
      if (uVar9 != 0) {
        puVar11 = &rendering_buffer_2328_ptr;
      }
      SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar11);
      func_0x0001800a1de0(puVar2,uVar6);
      lVar7 = *(int64_t *)(param_1 + 8);
    }
  }
  else {
    if (uVar9 != (*(uint *)(lVar1 + 0x2c4) & 2)) goto LAB_1803c10bc;
    if (lVar1 == 0) goto LAB_1803c10b8;
  }
  lVar1 = *(int64_t *)(lVar7 + 0x268);
  uVar10 = uVar10 & 8;
  if (lVar1 == 0) {
LAB_1803c1147:
    if (uVar10 == 0) goto LAB_1803c11a1;
  }
  else if (uVar10 == (*(uint *)(lVar1 + 0x2c4) & 8)) {
    if (lVar1 != 0) goto LAB_1803c11a1;
    goto LAB_1803c1147;
  }
  uVar6 = FUN_18062f5e0(param_2,1,&rendering_buffer_2512_ptr);
  SystemAllocationProcessor(param_2,uVar6,&system_flag_3a84,&rendering_buffer_2648_ptr);
  if (uVar10 != 0) {
    puVar8 = &rendering_buffer_2328_ptr;
  }
  SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar8);
  func_0x0001800a1de0(puVar2,uVar6);
LAB_1803c11a1:
  func_0x0001802bf540(param_3,puVar2);
  return;
}







// 函数: void FUN_1803c11d0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1803c11d0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint64_t *puVar5;
  char *pcVar6;
  uint64_t *puVar8;
  int64_t lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  void *puVar14;
  uint64_t uVar15;
  void *puStack_50;
  int64_t lStack_48;
  int32_t uStack_38;
  char *pcVar7;
  
  uVar15 = 0xfffffffffffffffe;
  lVar9 = *(int64_t *)(param_1 + 8);
  lVar13 = *(int64_t *)(lVar9 + 0x268);
  if (lVar13 != 0) {
    iVar2 = *(int *)(lVar9 + 0xe0);
    iVar10 = *(int *)(lVar13 + 0xe0);
    if (iVar2 == iVar10) {
      if (iVar2 != 0) {
        pbVar4 = *(byte **)(lVar9 + 0xd8);
        lVar13 = *(int64_t *)(lVar13 + 0xd8) - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar13;
          iVar10 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar10 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar2 != 0) goto LAB_1803c1264;
    if (iVar10 == 0) {
      return;
    }
  }
LAB_1803c1264:
  puVar5 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60,lVar13,lVar9,0xfffffffffffffffe);
  uVar12 = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  *(int32_t *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  puVar5[8] = 0;
  pcVar6 = "tags";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  *puVar5 = &ui_system_data_1460_ptr;
  puVar5[2] = pcVar7 + -0x180a23573;
LAB_1803c12c0:
  do {
    lVar9 = *(int64_t *)(param_1 + 8);
    uVar3 = *(uint *)(lVar9 + 0xe0);
    if (uVar12 < uVar3) {
      pcVar6 = (char *)((int64_t)(int)uVar12 + *(int64_t *)(lVar9 + 0xd8));
      uVar11 = uVar12;
      do {
        if (*pcVar6 == ' ') {
          if (uVar11 != 0xffffffff) goto LAB_1803c12f9;
          break;
        }
        uVar11 = uVar11 + 1;
        pcVar6 = pcVar6 + 1;
      } while (uVar11 < uVar3);
    }
    uVar11 = uVar3;
LAB_1803c12f9:
    if (uVar12 != uVar11) {
      if ((int)uVar11 < (int)uVar12) {
LAB_1803c13fe:
        if (((*(int64_t *)(lVar9 + 0x268) != 0) || (puVar5[6] != 0)) || (puVar5[8] != 0)) {
          if (*(int64_t *)(param_3 + 0x30) == 0) {
            puVar5[10] = 0;
            *(uint64_t **)(param_3 + 0x30) = puVar5;
          }
          else {
            puVar5[10] = *(uint64_t *)(param_3 + 0x38);
            *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar5;
          }
          *(uint64_t **)(param_3 + 0x38) = puVar5;
          puVar5[0xb] = 0;
          puVar5[4] = param_3;
        }
        return;
      }
      puVar8 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60,uVar3,lVar9,uVar15);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[4] = 0;
      *(int32_t *)(puVar8 + 5) = 1;
      puVar8[6] = 0;
      puVar8[8] = 0;
      pcVar6 = "tag";
      do {
        pcVar7 = pcVar6;
        pcVar6 = pcVar7 + 1;
      } while (*pcVar6 != '\0');
      *puVar8 = &ui_system_data_1456_ptr;
      puVar8[2] = pcVar7 + -0x180a2356f;
      lVar9 = NetworkSystem_ProtocolParser(*(int64_t *)(param_1 + 8) + 0xd0,&puStack_50,uVar12,uVar11);
      puVar14 = &system_buffer_ptr;
      if (*(void **)(lVar9 + 8) != (void *)0x0) {
        puVar14 = *(void **)(lVar9 + 8);
      }
      SystemAllocationProcessor(param_2,puVar8,&system_flag_3a84,puVar14);
      puStack_50 = &system_data_buffer_ptr;
      if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_48 = 0;
      uStack_38 = 0;
      puStack_50 = &system_state_ptr;
      if (puVar5[6] == 0) {
        puVar8[10] = 0;
        puVar5[6] = puVar8;
      }
      else {
        puVar8[10] = puVar5[7];
        *(uint64_t **)(puVar5[7] + 0x58) = puVar8;
      }
      puVar5[7] = puVar8;
      puVar8[4] = puVar5;
      puVar8[0xb] = 0;
      lVar9 = *(int64_t *)(param_1 + 8);
      if (*(uint *)(lVar9 + 0xe0) == uVar11) goto LAB_1803c13fe;
      uVar12 = uVar11 + 1;
      goto LAB_1803c12c0;
    }
    uVar12 = uVar12 + 1;
  } while( true );
}







// 函数: void FUN_1803c1470(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1803c1470(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  uint64_t *puVar4;
  char *pcVar5;
  float *pfVar7;
  float *pfVar8;
  int64_t lVar9;
  int64_t lVar10;
  float fVar11;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float afStack_68 [4];
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  char *pcVar6;
  
  lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x168);
  puVar4 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  *(int32_t *)(puVar4 + 5) = 1;
  puVar4[6] = 0;
  puVar4[8] = 0;
  pcVar5 = "transform";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  puVar4[2] = pcVar6 + -0x180a2354f;
  *puVar4 = &ui_system_data_1424_ptr;
  lVar9 = *(int64_t *)(param_1 + 8);
  if (lVar10 == 0) {
    UltraHighFreq_NetworkHandler1(param_2,puVar4,&processed_var_8872_ptr);
    lVar9 = *(int64_t *)(param_1 + 8);
  }
  else {
    lVar1 = *(int64_t *)(lVar9 + 0x268);
    if (lVar1 == 0) {
      if ((ABS(*(float *)(lVar9 + 0x60)) < 0.01) && (ABS(*(float *)(lVar9 + 100)) < 0.01)) {
        fVar11 = *(float *)(lVar9 + 0x68);
        goto LAB_1803c1588;
      }
LAB_1803c1590:
      UltraHighFreq_NetworkHandler1(param_2,puVar4,&processed_var_8872_ptr);
    }
    else {
      if ((0.01 <= ABS(*(float *)(lVar9 + 0x60) - *(float *)(lVar1 + 0x60))) ||
         (0.01 <= ABS(*(float *)(lVar9 + 100) - *(float *)(lVar1 + 100)))) goto LAB_1803c1590;
      fVar11 = *(float *)(lVar9 + 0x68) - *(float *)(lVar1 + 0x68);
LAB_1803c1588:
      if (0.01 <= ABS(fVar11)) goto LAB_1803c1590;
    }
    lVar9 = *(int64_t *)(param_1 + 8);
    if (*(int64_t *)(lVar9 + 0x268) != 0) {
      cVar3 = func_0x000180285980(lVar9 + 0x30,*(int64_t *)(lVar9 + 0x268) + 0x30);
      if (cVar3 == '\0') goto LAB_1803c180c;
    }
  }
  if (*(int64_t *)(lVar9 + 0x268) == 0) {
    pfVar7 = (float *)&system_flag_1400;
  }
  else {
    pfVar7 = (float *)(*(int64_t *)(lVar9 + 0x268) + 0x30);
  }
  if (((((0.001 <= ABS(*(float *)(lVar9 + 0x30) - *pfVar7)) ||
        (0.001 <= ABS(*(float *)(lVar9 + 0x34) - pfVar7[1]))) ||
       (0.001 <= ABS(*(float *)(lVar9 + 0x38) - pfVar7[2]))) ||
      (((uStack_48._0_4_ = (float)*(uint64_t *)(pfVar7 + 4),
        0.001 <= ABS(*(float *)(lVar9 + 0x40) - (float)uStack_48) ||
        (uStack_48._4_4_ = (float)((uint64_t)*(uint64_t *)(pfVar7 + 4) >> 0x20),
        0.001 <= ABS(*(float *)(lVar9 + 0x44) - uStack_48._4_4_))) ||
       ((uStack_40._0_4_ = (float)*(uint64_t *)(pfVar7 + 6),
        0.001 <= ABS(*(float *)(lVar9 + 0x48) - (float)uStack_40) ||
        ((uStack_38._0_4_ = (float)*(uint64_t *)(pfVar7 + 8),
         0.001 <= ABS(*(float *)(lVar9 + 0x50) - (float)uStack_38) ||
         (uStack_38._4_4_ = (float)((uint64_t)*(uint64_t *)(pfVar7 + 8) >> 0x20),
         0.001 <= ABS(*(float *)(lVar9 + 0x54) - uStack_38._4_4_))))))))) ||
     (uStack_30._0_4_ = (float)*(uint64_t *)(pfVar7 + 10),
     0.001 <= ABS(*(float *)(lVar9 + 0x58) - (float)uStack_30))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((lVar10 == 0) || (!bVar2)) {
    uStack_58 = *(uint64_t *)(lVar9 + 0x30);
    uStack_50 = *(uint64_t *)(lVar9 + 0x38);
    uStack_48 = *(uint64_t *)(lVar9 + 0x40);
    uStack_40 = *(uint64_t *)(lVar9 + 0x48);
    uStack_38 = *(uint64_t *)(lVar9 + 0x50);
    uStack_30 = *(uint64_t *)(lVar9 + 0x58);
    FUN_1802bfc90(&uStack_58,afStack_68);
    cVar3 = FUN_1801be0f0(&uStack_58);
    if (cVar3 == '\0') {
      FUN_180630560(param_2,puVar4,&ui_system_data_1376_ptr,&uStack_58);
    }
    else {
      FUN_1801c1720(&uStack_58,&fStack_78);
      UltraHighFreq_NetworkHandler1(param_2,puVar4,&ui_system_data_1352_ptr,&fStack_78);
    }
    lVar9 = *(int64_t *)(param_1 + 8) + 0x30;
    if (lVar10 == 0) {
      RenderingSystem_LightSystem(lVar9,&fStack_78);
      if (((ABS(fStack_78 - 1.0) < 1e-06) && (ABS(fStack_74 - 1.0) < 1e-06)) &&
         (ABS(fStack_70 - 1.0) < 1e-06)) goto LAB_1803c180c;
      pfVar7 = &fStack_78;
    }
    else {
      lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x268);
      if (lVar10 == 0) {
        RenderingSystem_LightSystem(lVar9,&fStack_78);
        pfVar7 = afStack_68;
        afStack_68[0] = 1.0;
        afStack_68[1] = 1.0;
        afStack_68[2] = 1.0;
        afStack_68[3] = 3.4028235e+38;
        pfVar8 = &fStack_78;
      }
      else {
        RenderingSystem_LightSystem(lVar9,afStack_68);
        RenderingSystem_LightSystem(lVar10 + 0x30,&fStack_78);
        pfVar7 = &fStack_78;
        pfVar8 = afStack_68;
      }
      cVar3 = func_0x00018022a7c0(pfVar8,pfVar7);
      if (cVar3 != '\0') goto LAB_1803c180c;
      RenderingSystem_LightSystem(lVar9,afStack_68);
      pfVar7 = afStack_68;
    }
    UltraHighFreq_NetworkHandler1(param_2,puVar4,&processed_var_8408_ptr,pfVar7);
  }
LAB_1803c180c:
  if ((puVar4[6] != 0) || (puVar4[8] != 0)) {
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar4[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar4;
    }
    else {
      puVar4[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar4;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar4;
    puVar4[4] = param_3;
    puVar4[0xb] = 0;
  }
  return;
}







// 函数: void FUN_1803c1870(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t param_4,
void FUN_1803c1870(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t param_4,
                  int64_t param_5,uint64_t param_6)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar9;
  int64_t lVar10;
  char *pcVar5;
  uint64_t uVar8;
  
  puVar3 = (uint64_t *)DataPipelineManager(param_4 + 0x60,0x60);
  uVar8 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  *(int32_t *)(puVar3 + 5) = 1;
  puVar3[6] = 0;
  puVar3[8] = 0;
  pcVar4 = "components";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  *puVar3 = &rendering_buffer_2296_ptr;
  puVar3[2] = pcVar5 + -0x180a19c77;
  lVar6 = *param_1;
  uVar9 = uVar8;
  if (param_1[1] - lVar6 >> 3 != 0) {
    do {
      lVar10 = 0;
      plVar1 = *(int64_t **)(uVar9 + lVar6);
      if ((param_2[1] - *param_2 >> 3 != 0) &&
         ((param_3[1] - *param_3 >> 3 == 0 ||
          (lVar10 = *(int64_t *)(uVar9 + *param_3), lVar10 == 0)))) {
        lVar10 = *(int64_t *)(uVar9 + *param_2);
      }
      (**(code **)(*plVar1 + 0x70))(plVar1,param_4,puVar3,lVar10,(int)uVar8);
      iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar2 == 0) {
        FUN_18027d420(plVar1,param_6);
      }
      lVar6 = *param_1;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar9 = uVar9 + 8;
    } while ((uint64_t)(int64_t)(int)uVar7 < (uint64_t)(param_1[1] - lVar6 >> 3));
  }
  if ((puVar3[6] != 0) || (puVar3[8] != 0)) {
    if (*(int64_t *)(param_5 + 0x30) != 0) {
      puVar3[10] = *(uint64_t *)(param_5 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_5 + 0x38) + 0x58) = puVar3;
      *(uint64_t **)(param_5 + 0x38) = puVar3;
      puVar3[4] = param_5;
      puVar3[0xb] = 0;
      return;
    }
    puVar3[10] = 0;
    *(uint64_t **)(param_5 + 0x30) = puVar3;
    *(uint64_t **)(param_5 + 0x38) = puVar3;
    puVar3[4] = param_5;
    puVar3[0xb] = 0;
  }
  return;
}







// 函数: void FUN_1803c187a(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t param_4)
void FUN_1803c187a(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t param_4)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t in_stack_00000078;
  int64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  char *pcVar5;
  uint64_t uVar8;
  
  puVar3 = (uint64_t *)DataPipelineManager(param_4 + 0x60,0x60);
  uVar8 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[4] = 0;
  *(int32_t *)(puVar3 + 5) = 1;
  puVar3[6] = 0;
  puVar3[8] = 0;
  pcVar4 = "components";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  *puVar3 = &rendering_buffer_2296_ptr;
  puVar3[2] = pcVar5 + -0x180a19c77;
  lVar6 = *param_1;
  uVar9 = uVar8;
  if (param_1[1] - lVar6 >> 3 != 0) {
    do {
      lVar10 = 0;
      plVar1 = *(int64_t **)(uVar9 + lVar6);
      if ((param_2[1] - *param_2 >> 3 != 0) &&
         ((param_3[1] - *param_3 >> 3 == 0 ||
          (lVar10 = *(int64_t *)(uVar9 + *param_3), lVar10 == 0)))) {
        lVar10 = *(int64_t *)(uVar9 + *param_2);
      }
      (**(code **)(*plVar1 + 0x70))(plVar1,in_stack_00000078,puVar3,lVar10,(int)uVar8);
      iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar2 == 0) {
        FUN_18027d420(plVar1,in_stack_00000088);
      }
      lVar6 = *param_1;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar9 = uVar9 + 8;
    } while ((uint64_t)(int64_t)(int)uVar7 < (uint64_t)(param_1[1] - lVar6 >> 3));
  }
  if ((puVar3[6] != 0) || (puVar3[8] != 0)) {
    if (*(int64_t *)(in_stack_00000080 + 0x30) != 0) {
      puVar3[10] = *(uint64_t *)(in_stack_00000080 + 0x38);
      *(uint64_t **)(*(int64_t *)(in_stack_00000080 + 0x38) + 0x58) = puVar3;
      *(uint64_t **)(in_stack_00000080 + 0x38) = puVar3;
      puVar3[4] = in_stack_00000080;
      puVar3[0xb] = 0;
      return;
    }
    puVar3[10] = 0;
    *(uint64_t **)(in_stack_00000080 + 0x30) = puVar3;
    *(uint64_t **)(in_stack_00000080 + 0x38) = puVar3;
    puVar3[4] = in_stack_00000080;
    puVar3[0xb] = 0;
  }
  return;
}







// 函数: void FUN_1803c18fc(uint64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1803c18fc(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  int iVar2;
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t *unaff_R14;
  uint64_t in_stack_00000078;
  int64_t in_stack_00000080;
  uint64_t in_stack_00000088;
  
  do {
    plVar1 = *(int64_t **)(param_3 + param_2);
    (**(code **)(*plVar1 + 0x70))(plVar1,in_stack_00000078);
    iVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
    if (iVar2 == 0) {
      FUN_18027d420(plVar1,in_stack_00000088);
    }
    param_2 = *unaff_R14;
    unaff_EBP = unaff_EBP + 1;
    param_3 = param_3 + 8;
  } while ((uint64_t)(int64_t)unaff_EBP < (uint64_t)(unaff_R14[1] - param_2 >> 3));
  if ((*(int64_t *)(unaff_RBX + 0x30) != 0) || (*(int64_t *)(unaff_RBX + 0x40) != 0)) {
    if (*(int64_t *)(in_stack_00000080 + 0x30) != 0) {
      *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(in_stack_00000080 + 0x38);
      *(int64_t *)(*(int64_t *)(in_stack_00000080 + 0x38) + 0x58) = unaff_RBX;
      *(int64_t *)(in_stack_00000080 + 0x38) = unaff_RBX;
      *(int64_t *)(unaff_RBX + 0x20) = in_stack_00000080;
      *(uint64_t *)(unaff_RBX + 0x58) = 0;
      return;
    }
    *(uint64_t *)(unaff_RBX + 0x50) = 0;
    *(int64_t *)(in_stack_00000080 + 0x30) = unaff_RBX;
    *(int64_t *)(in_stack_00000080 + 0x38) = unaff_RBX;
    *(int64_t *)(unaff_RBX + 0x20) = in_stack_00000080;
    *(uint64_t *)(unaff_RBX + 0x58) = 0;
  }
  return;
}







