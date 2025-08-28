#include "TaleWorlds.Native.Split.h"

// 03_rendering_part197.c - 5 个函数

// 函数: void FUN_1803822e0(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_1803822e0(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  uint uVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint64_t *puVar5;
  uint64_t uVar6;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar2 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    *(int32_t *)(puVar2 + 5) = 1;
    puVar2[6] = 0;
    puVar2[8] = 0;
    pcVar3 = "body_flags";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar2 = &processed_var_4432_ptr;
    puVar2[2] = pcVar4 + -0x180a219ff;
    uVar1 = *(uint *)(param_1 + 0x38);
    if ((uVar1 & 4) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_8160_ptr);
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
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 8 & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4544_ptr);
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
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4520_ptr);
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
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4504_ptr);
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
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&ui_system_data_1464_ptr);
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
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4632_ptr);
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
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4600_ptr);
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
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 & 8) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4592_ptr);
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
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4712_ptr);
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
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4576_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4700_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4688_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((char)uVar1 < '\0') {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4656_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4792_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4784_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4768_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4736_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar3 = "body_flag";
      do {
        pcVar4 = pcVar3;
        pcVar3 = pcVar4 + 1;
      } while (*pcVar3 != '\0');
      *puVar5 = &processed_var_4560_ptr;
      puVar5[2] = pcVar4 + -0x180a21a7f;
      SystemAllocationProcessor(param_2,puVar5,&system_flag_3a84,&processed_var_4880_ptr);
      func_0x0001800a1de0(puVar2,puVar5);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      uVar6 = FUN_18062f5e0(param_2,1,&processed_var_4560_ptr);
      SystemAllocationProcessor(param_2,uVar6,&system_flag_3a84,&processed_var_4864_ptr);
      func_0x0001800a1de0(puVar2,uVar6);
      uVar1 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar1 >> 0x1c & 1) != 0) {
      uVar6 = FUN_18062f5e0(param_2,1,&processed_var_4560_ptr);
      SystemAllocationProcessor(param_2,uVar6,&system_flag_3a84,&processed_var_4840_ptr);
      func_0x0001800a1de0(puVar2,uVar6);
    }
    func_0x0001800a1de0(param_3,puVar2);
  }
  return;
}





// 函数: void FUN_1803822fd(void)
void FUN_1803822fd(void)

{
  uint uVar1;
  uint64_t *puVar2;
  char *pcVar3;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t unaff_RBP;
  int64_t unaff_R14;
  char *pcVar4;
  
  puVar2 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar3 = "body_flags";
  do {
    pcVar4 = pcVar3;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar3 != '\0');
  *puVar2 = &processed_var_4432_ptr;
  puVar2[2] = pcVar4 + -0x180a219ff;
  uVar1 = *(uint *)(unaff_RBP + 0x38);
  if ((uVar1 & 4) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
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
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
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
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
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
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
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
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
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
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
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
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
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
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 & 8) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
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
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 & 0x20) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
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
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 & 0x10) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,puVar5);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 & 0x40) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,puVar5);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,puVar5);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((char)uVar1 < '\0') {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,puVar5);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,puVar5);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,puVar5);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,puVar5);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,puVar5);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    puVar5 = (uint64_t *)SystemRenderer(unaff_R14 + 0x60,0x60);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    *(int32_t *)(puVar5 + 5) = 1;
    puVar5[6] = 0;
    puVar5[8] = 0;
    pcVar3 = "body_flag";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar3 != '\0');
    *puVar5 = &processed_var_4560_ptr;
    puVar5[2] = pcVar4 + -0x180a21a7f;
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,puVar5);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0x16 & 1) != 0) {
    uVar6 = FUN_18062f5e0();
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,uVar6);
    uVar1 = *(uint *)(unaff_RBP + 0x38);
  }
  if ((uVar1 >> 0x1c & 1) != 0) {
    uVar6 = FUN_18062f5e0();
    SystemAllocationProcessor();
    func_0x0001800a1de0(puVar2,uVar6);
  }
  func_0x0001800a1de0();
  return;
}





// 函数: void FUN_180382c91(void)
void FUN_180382c91(void)

{
  int64_t unaff_RBP;
  
  FUN_18062f5e0();
  SystemAllocationProcessor();
  func_0x0001800a1de0();
  if ((*(uint *)(unaff_RBP + 0x38) >> 0x1c & 1) != 0) {
    FUN_18062f5e0();
    SystemAllocationProcessor();
    func_0x0001800a1de0();
  }
  func_0x0001800a1de0();
  return;
}





// 函数: void FUN_180382d22(void)
void FUN_180382d22(void)

{
  return;
}





// 函数: void FUN_180382d30(int64_t *param_1,int64_t param_2,uint64_t param_3)
void FUN_180382d30(int64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  char cVar2;
  float *pfVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_98 [16];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    lVar4 = *(int64_t *)(param_2 + 0x20);
    cVar2 = (**(code **)(*(int64_t *)*param_1 + 0x70))();
    if ((((cVar2 == '\0') || (*(char *)(lVar4 + 0x2a62) == '\0')) ||
        ((*(byte *)(param_2 + 0x2e8) & 0x10) != 0)) ||
       (cVar2 = (**(code **)(*(int64_t *)*param_1 + 0x78))(), cVar2 == '\0')) {
      pfVar3 = (float *)RenderingSystem_LightSystem(param_3,auStack_98);
      if (((0.001 <= ABS(*(float *)(param_2 + 0x138) - *pfVar3)) ||
          (0.001 <= ABS(*(float *)(param_2 + 0x13c) - pfVar3[1]))) ||
         (0.001 <= ABS(*(float *)(param_2 + 0x140) - pfVar3[2]))) {
        lVar4 = *(int64_t *)(param_2 + 0x20);
        if (lVar4 != 0) {
          if (*(int64_t *)(param_2 + 0x270) != 0) {
            FUN_1802e8910(param_2);
            lVar4 = *(int64_t *)(param_2 + 0x20);
            *(int8_t *)(param_2 + 0x278) = 0;
          }
          FUN_1802f28f0(param_2,lVar4);
        }
      }
      else {
        (**(code **)(*(int64_t *)*param_1 + 0x98))((int64_t *)*param_1,param_3);
        plVar1 = *(int64_t **)(*(int64_t *)(param_2 + 0x20) + 0x318);
        (**(code **)(*plVar1 + 0xa8))(plVar1,*param_1);
      }
    }
    else {
      (**(code **)(*(int64_t *)*param_1 + 200))((int64_t *)*param_1,&fStack_88);
      fVar5 = SQRT(*(float *)(param_2 + 0x70) * *(float *)(param_2 + 0x70) +
                   *(float *)(param_2 + 0x74) * *(float *)(param_2 + 0x74) +
                   *(float *)(param_2 + 0x78) * *(float *)(param_2 + 0x78));
      fVar11 = SQRT(*(float *)(param_2 + 0x80) * *(float *)(param_2 + 0x80) +
                    *(float *)(param_2 + 0x84) * *(float *)(param_2 + 0x84) +
                    *(float *)(param_2 + 0x88) * *(float *)(param_2 + 0x88));
      fVar12 = fStack_88 * 0.0;
      fVar13 = fStack_84 * 0.0;
      fVar14 = fStack_80 * 0.0;
      fVar15 = fStack_7c * 0.0;
      fVar6 = fStack_78 * 0.0;
      fVar7 = fStack_74 * 0.0;
      fVar8 = fStack_70 * 0.0;
      fVar9 = fStack_6c * 0.0;
      fVar10 = SQRT(*(float *)(param_2 + 0x90) * *(float *)(param_2 + 0x90) +
                    *(float *)(param_2 + 0x94) * *(float *)(param_2 + 0x94) +
                    *(float *)(param_2 + 0x98) * *(float *)(param_2 + 0x98));
      fStack_88 = fVar5 * fStack_88 + fVar6 + fStack_68 * 0.0;
      fStack_84 = fVar5 * fStack_84 + fVar7 + fStack_64 * 0.0;
      fStack_80 = fVar5 * fStack_80 + fVar8 + fStack_60 * 0.0;
      fStack_7c = fVar5 * fStack_7c + fVar9 + fStack_5c * 0.0;
      fStack_78 = fVar11 * fStack_78 + fVar12 + fStack_68 * 0.0;
      fStack_74 = fVar11 * fStack_74 + fVar13 + fStack_64 * 0.0;
      fStack_70 = fVar11 * fStack_70 + fVar14 + fStack_60 * 0.0;
      fStack_6c = fVar11 * fStack_6c + fVar15 + fStack_5c * 0.0;
      fStack_68 = fVar10 * fStack_68 + fVar12 + fVar6;
      fStack_64 = fVar10 * fStack_64 + fVar13 + fVar7;
      fStack_60 = fVar10 * fStack_60 + fVar14 + fVar8;
      fStack_5c = fVar10 * fStack_5c + fVar15 + fVar9;
      NetworkProtocol_Transmitter(param_2,&fStack_88);
      *(byte *)(param_2 + 0x2e8) = *(byte *)(param_2 + 0x2e8) & 0xef;
    }
  }
  return;
}





