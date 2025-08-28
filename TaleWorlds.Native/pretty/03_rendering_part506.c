#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part506.c - 5 个函数

// 函数: void FUN_180538a20(uint64_t param_1,int64_t param_2,int32_t param_3)
void FUN_180538a20(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  byte *pbVar4;
  int iVar5;
  void *puVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int8_t auStack_648 [32];
  void *apuStack_628 [194];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_648;
  apuStack_628[0] = &processed_var_7472_ptr;
  apuStack_628[1] = &processed_var_7432_ptr;
  apuStack_628[2] = &processed_var_7528_ptr;
  apuStack_628[3] = &processed_var_7496_ptr;
  apuStack_628[4] = &processed_var_7784_ptr;
  apuStack_628[5] = &processed_var_7752_ptr;
  apuStack_628[6] = &processed_var_7880_ptr;
  apuStack_628[7] = &processed_var_7816_ptr;
  apuStack_628[8] = &processed_var_7616_ptr;
  apuStack_628[9] = &processed_var_7568_ptr;
  apuStack_628[10] = &processed_var_7720_ptr;
  apuStack_628[0xb] = &processed_var_7680_ptr;
  apuStack_628[0xc] = &processed_var_8136_ptr;
  apuStack_628[0xd] = &processed_var_8096_ptr;
  apuStack_628[0xe] = &processed_var_8208_ptr;
  apuStack_628[0xf] = &processed_var_8168_ptr;
  apuStack_628[0x10] = &processed_var_7960_ptr;
  apuStack_628[0x11] = &processed_var_7912_ptr;
  apuStack_628[0x12] = &processed_var_8056_ptr;
  apuStack_628[0x13] = &processed_var_8000_ptr;
  apuStack_628[0x14] = &processed_var_8464_ptr;
  apuStack_628[0x15] = &processed_var_8424_ptr;
  apuStack_628[0x16] = &processed_var_8552_ptr;
  apuStack_628[0x17] = &processed_var_8504_ptr;
  apuStack_628[0x18] = &processed_var_8304_ptr;
  apuStack_628[0x19] = &processed_var_8248_ptr;
  apuStack_628[0x1a] = &processed_var_8384_ptr;
  apuStack_628[0x1b] = &processed_var_8344_ptr;
  apuStack_628[0x1c] = &processed_var_8840_ptr;
  apuStack_628[0x1d] = &processed_var_8784_ptr;
  apuStack_628[0x1e] = &processed_var_8936_ptr;
  apuStack_628[0x1f] = &processed_var_8880_ptr;
  apuStack_628[0x20] = &processed_var_8632_ptr;
  apuStack_628[0x21] = &processed_var_8584_ptr;
  apuStack_628[0x22] = &processed_var_8736_ptr;
  apuStack_628[0x23] = &processed_var_8688_ptr;
  apuStack_628[0x24] = &processed_var_9144_ptr;
  apuStack_628[0x25] = &processed_var_9120_ptr;
  apuStack_628[0x26] = &processed_var_9232_ptr;
  apuStack_628[0x27] = &processed_var_9192_ptr;
  apuStack_628[0x28] = &processed_var_9000_ptr;
  apuStack_628[0x29] = &processed_var_8976_ptr;
  apuStack_628[0x2a] = &processed_var_9080_ptr;
  apuStack_628[0x2b] = &processed_var_9040_ptr;
  apuStack_628[0x2c] = &processed_var_9448_ptr;
  apuStack_628[0x2d] = &processed_var_9424_ptr;
  apuStack_628[0x2e] = &processed_var_9536_ptr;
  apuStack_628[0x2f] = &processed_var_9488_ptr;
  apuStack_628[0x30] = &processed_var_9312_ptr;
  apuStack_628[0x31] = &processed_var_9264_ptr;
  apuStack_628[0x32] = &processed_var_9384_ptr;
  apuStack_628[0x33] = &processed_var_9344_ptr;
  apuStack_628[0x34] = &processed_var_9832_ptr;
  apuStack_628[0x35] = &processed_var_9784_ptr;
  apuStack_628[0x36] = &processed_var_9896_ptr;
  apuStack_628[0x37] = &processed_var_9872_ptr;
  apuStack_628[0x38] = &processed_var_9624_ptr;
  apuStack_628[0x39] = &processed_var_9576_ptr;
  apuStack_628[0x3a] = &processed_var_9736_ptr;
  apuStack_628[0x3b] = &processed_var_9664_ptr;
  apuStack_628[0x3c] = &ui_system_data_152_ptr;
  apuStack_628[0x3d] = &processed_var_96_ptr;
  apuStack_628[0x3e] = &rendering_buffer_240_ptr;
  apuStack_628[0x3f] = &rendering_buffer_208_ptr;
  apuStack_628[0x40] = &processed_var_9968_ptr;
  apuStack_628[0x41] = &processed_var_9944_ptr;
  apuStack_628[0x42] = &processed_var_64_ptr;
  apuStack_628[0x43] = &ui_system_data_16_ptr;
  apuStack_628[0x44] = &processed_var_544_ptr;
  apuStack_628[0x45] = &processed_var_488_ptr;
  apuStack_628[0x46] = &processed_var_640_ptr;
  apuStack_628[0x47] = &processed_var_592_ptr;
  apuStack_628[0x48] = &memory_allocator_352_ptr;
  apuStack_628[0x49] = &rendering_buffer_296_ptr;
  apuStack_628[0x4a] = &processed_var_440_ptr;
  apuStack_628[0x4b] = &processed_var_400_ptr;
  apuStack_628[0x4c] = &processed_var_864_ptr;
  apuStack_628[0x4d] = &processed_var_824_ptr;
  apuStack_628[0x4e] = &processed_var_936_ptr;
  apuStack_628[0x4f] = &processed_var_904_ptr;
  apuStack_628[0x50] = &processed_var_728_ptr;
  apuStack_628[0x51] = &processed_var_688_ptr;
  apuStack_628[0x52] = &processed_var_800_ptr;
  apuStack_628[0x53] = &processed_var_760_ptr;
  apuStack_628[0x54] = &ui_system_data_1128_ptr;
  apuStack_628[0x55] = &ui_system_data_1096_ptr;
  apuStack_628[0x56] = &ui_system_data_1200_ptr;
  apuStack_628[0x57] = &ui_system_data_1168_ptr;
  apuStack_628[0x58] = &ui_system_data_1000_ptr;
  apuStack_628[0x59] = &processed_var_968_ptr;
  apuStack_628[0x5a] = &ui_system_data_1064_ptr;
  apuStack_628[0x5b] = &ui_system_data_1032_ptr;
  apuStack_628[0x5c] = &ui_system_data_1488_ptr;
  apuStack_628[0x5d] = &ui_system_data_1448_ptr;
  apuStack_628[0x5e] = &ui_system_data_1568_ptr;
  apuStack_628[0x5f] = &ui_system_data_1520_ptr;
  apuStack_628[0x60] = &ui_system_data_1304_ptr;
  apuStack_628[0x61] = &ui_system_data_1232_ptr;
  apuStack_628[0x62] = &ui_system_data_1376_ptr;
  apuStack_628[99] = &ui_system_data_1336_ptr;
  apuStack_628[100] = &ui_system_data_1888_ptr;
  apuStack_628[0x65] = &ui_system_data_1864_ptr;
  apuStack_628[0x66] = &ui_system_data_1960_ptr;
  apuStack_628[0x67] = &ui_system_data_1912_ptr;
  apuStack_628[0x68] = &ui_system_data_1680_ptr;
  apuStack_628[0x69] = &ui_system_data_1616_ptr;
  apuStack_628[0x6a] = &ui_system_data_1792_ptr;
  apuStack_628[0x6b] = &ui_system_data_1720_ptr;
  apuStack_628[0x6c] = &rendering_buffer_2352_ptr;
  apuStack_628[0x6d] = &rendering_buffer_2296_ptr;
  apuStack_628[0x6e] = &rendering_buffer_2496_ptr;
  apuStack_628[0x6f] = &rendering_buffer_2424_ptr;
  apuStack_628[0x70] = &rendering_buffer_2080_ptr;
  apuStack_628[0x71] = &rendering_buffer_2008_ptr;
  apuStack_628[0x72] = &system_callback2_ptr;
  apuStack_628[0x73] = &rendering_buffer_2152_ptr;
  apuStack_628[0x74] = &rendering_buffer_2912_ptr;
  apuStack_628[0x75] = &rendering_buffer_2840_ptr;
  apuStack_628[0x76] = &memory_allocator_3056_ptr;
  apuStack_628[0x77] = &rendering_buffer_2984_ptr;
  apuStack_628[0x78] = &rendering_buffer_2640_ptr;
  apuStack_628[0x79] = &rendering_buffer_2568_ptr;
  apuStack_628[0x7a] = &rendering_buffer_2768_ptr;
  apuStack_628[0x7b] = &rendering_buffer_2712_ptr;
  apuStack_628[0x7c] = &memory_allocator_3472_ptr;
  apuStack_628[0x7d] = &memory_allocator_3416_ptr;
  apuStack_628[0x7e] = &memory_allocator_3600_ptr;
  apuStack_628[0x7f] = &memory_allocator_3544_ptr;
  apuStack_628[0x80] = &memory_allocator_3200_ptr;
  apuStack_628[0x81] = &memory_allocator_3128_ptr;
  apuStack_628[0x82] = &memory_allocator_3344_ptr;
  apuStack_628[0x83] = &memory_allocator_3272_ptr;
  apuStack_628[0x84] = &memory_allocator_3968_ptr;
  apuStack_628[0x85] = &memory_allocator_3904_ptr;
  apuStack_628[0x86] = &processed_var_4112_ptr;
  apuStack_628[0x87] = &processed_var_4040_ptr;
  apuStack_628[0x88] = &memory_allocator_3712_ptr;
  apuStack_628[0x89] = &memory_allocator_3664_ptr;
  apuStack_628[0x8a] = &memory_allocator_3840_ptr;
  apuStack_628[0x8b] = &memory_allocator_3784_ptr;
  apuStack_628[0x8c] = &processed_var_4488_ptr;
  apuStack_628[0x8d] = &processed_var_4432_ptr;
  apuStack_628[0x8e] = &processed_var_4608_ptr;
  apuStack_628[0x8f] = &processed_var_4552_ptr;
  apuStack_628[0x90] = &processed_var_4240_ptr;
  apuStack_628[0x91] = &processed_var_4184_ptr;
  apuStack_628[0x92] = &processed_var_4368_ptr;
  apuStack_628[0x93] = &processed_var_4304_ptr;
  apuStack_628[0x94] = &processed_var_4976_ptr;
  apuStack_628[0x95] = &processed_var_4920_ptr;
  apuStack_628[0x96] = &processed_var_5096_ptr;
  apuStack_628[0x97] = &processed_var_5040_ptr;
  apuStack_628[0x98] = &processed_var_4728_ptr;
  apuStack_628[0x99] = &processed_var_4672_ptr;
  apuStack_628[0x9a] = &processed_var_4848_ptr;
  apuStack_628[0x9b] = &processed_var_4792_ptr;
  apuStack_628[0x9c] = &processed_var_5424_ptr;
  apuStack_628[0x9d] = &processed_var_5360_ptr;
  apuStack_628[0x9e] = &processed_var_5552_ptr;
  apuStack_628[0x9f] = &processed_var_5488_ptr;
  apuStack_628[0xa0] = &processed_var_5200_ptr;
  apuStack_628[0xa1] = &processed_var_5160_ptr;
  uVar7 = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  apuStack_628[0xa2] = &processed_var_5312_ptr;
  apuStack_628[0xa3] = &processed_var_5272_ptr;
  apuStack_628[0xa4] = &processed_var_5992_ptr;
  apuStack_628[0xa5] = &processed_var_5920_ptr;
  apuStack_628[0xa6] = &processed_var_6112_ptr;
  apuStack_628[0xa7] = &processed_var_6048_ptr;
  apuStack_628[0xa8] = &processed_var_5696_ptr;
  apuStack_628[0xa9] = &processed_var_5632_ptr;
  apuStack_628[0xaa] = &processed_var_5840_ptr;
  apuStack_628[0xab] = &processed_var_5776_ptr;
  apuStack_628[0xac] = &processed_var_6480_ptr;
  apuStack_628[0xad] = &processed_var_6416_ptr;
  apuStack_628[0xae] = &processed_var_6624_ptr;
  apuStack_628[0xaf] = &processed_var_6560_ptr;
  apuStack_628[0xb0] = &processed_var_6240_ptr;
  apuStack_628[0xb1] = &processed_var_6192_ptr;
  apuStack_628[0xb2] = &processed_var_6360_ptr;
  apuStack_628[0xb3] = &processed_var_6312_ptr;
  apuStack_628[0xb4] = &processed_var_7096_ptr;
  apuStack_628[0xb5] = &processed_var_7024_ptr;
  apuStack_628[0xb6] = &processed_var_7232_ptr;
  apuStack_628[0xb7] = &processed_var_7152_ptr;
  apuStack_628[0xb8] = &processed_var_6784_ptr;
  apuStack_628[0xb9] = &processed_var_6704_ptr;
  apuStack_628[0xba] = &processed_var_6944_ptr;
  apuStack_628[0xbb] = &processed_var_6864_ptr;
  apuStack_628[0xbc] = &processed_var_7600_ptr;
  apuStack_628[0xbd] = &processed_var_7520_ptr;
  apuStack_628[0xbe] = &processed_var_7760_ptr;
  apuStack_628[0xbf] = &processed_var_7680_ptr;
  apuStack_628[0xc0] = &processed_var_7376_ptr;
  apuStack_628[0xc1] = &processed_var_7312_ptr;
  uVar8 = uVar7;
  do {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (apuStack_628[uVar7][lVar3] != '\0');
    iVar5 = (int)lVar3;
    if (iVar2 == iVar5) {
      if (iVar2 != 0) {
        pbVar4 = *(byte **)(param_2 + 8);
        lVar3 = (int64_t)apuStack_628[uVar7] - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar3;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
LAB_1805394ce:
      if (iVar5 == 0) {
        *(int32_t *)(&system_data_6380 + (int64_t)(int)uVar8 * 4) = param_3;
        goto LAB_1805394fd;
      }
    }
    else if (iVar2 == 0) goto LAB_1805394ce;
    uVar8 = (uint64_t)((int)uVar8 + 1);
    uVar7 = uVar7 + 1;
    if (0xc1 < (int64_t)uVar7) {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar6 = *(void **)(param_2 + 8);
      }
      SystemCore_ResourceManager0(&processed_var_7456_ptr,puVar6);
LAB_1805394fd:
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_648);
    }
  } while( true );
}





// 函数: void FUN_1805397f0(void)
void FUN_1805397f0(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



uint64_t FUN_18053a0b0(int64_t param_1,int64_t param_2)

{
  byte bVar1;
  int32_t uVar2;
  uint64_t uVar3;
  byte *pbVar4;
  void *puVar5;
  uint uVar6;
  int32_t auStackX_8 [2];
  int64_t lStackX_10;
  int64_t alStack_38 [4];
  
  lStackX_10 = param_2;
  FUN_18053de40(param_1 + 8,alStack_38,param_2 + 0x10);
  if (alStack_38[0] ==
      *(int64_t *)(*(int64_t *)(param_1 + 0x10) + *(int64_t *)(param_1 + 0x18) * 8)) {
    uVar3 = 0xcbf29ce484222325;
    uVar2 = *(int32_t *)(param_1 + 0x78);
    pbVar4 = &system_buffer_ptr;
    if (*(byte **)(param_2 + 0x18) != (byte *)0x0) {
      pbVar4 = *(byte **)(param_2 + 0x18);
    }
    uVar6 = 0;
    if (*(uint *)(param_2 + 0x20) != 0) {
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar6 = uVar6 + 1;
        uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      } while (uVar6 < *(uint *)(param_2 + 0x20));
    }
    FUN_18053df50(param_1 + 8,alStack_38,uVar6,param_2 + 0x10,uVar3);
    *(int32_t *)(alStack_38[0] + 0x58) = uVar2;
    auStackX_8[0] = (int32_t)(*(int64_t *)(param_1 + 0x60) - *(int64_t *)(param_1 + 0x58) >> 3)
    ;
    FUN_1800571e0(param_1 + 0x38,auStackX_8);
    *(int32_t *)(param_2 + 0x68) = *(int32_t *)(param_1 + 0x78);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    FUN_18005ea90(param_1 + 0x58,&lStackX_10);
  }
  else {
    if (*(int *)(*(int64_t *)(param_1 + 0x38) + (int64_t)*(int *)(alStack_38[0] + 0x58) * 4) != -1
       ) {
      puVar5 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x18) != (void *)0x0) {
        puVar5 = *(void **)(param_2 + 0x18);
      }
      FUN_180627020(&processed_var_7872_ptr,puVar5);
      return 0;
    }
    *(int *)(*(int64_t *)(param_1 + 0x38) + (int64_t)*(int *)(alStack_38[0] + 0x58) * 4) =
         (int)(*(int64_t *)(param_1 + 0x60) - *(int64_t *)(param_1 + 0x58) >> 3);
    FUN_18005ea90((int64_t *)(param_1 + 0x58),&lStackX_10);
  }
  return 1;
}



uint64_t FUN_18053a102(uint64_t param_1,byte *param_2)

{
  byte bVar1;
  int32_t uVar2;
  byte *in_RAX;
  uint64_t uVar3;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int iVar4;
  uint64_t in_R10;
  bool in_ZF;
  int64_t in_stack_00000030;
  int32_t in_stack_00000070;
  
  uVar3 = 0xcbf29ce484222325;
  uVar2 = *(int32_t *)(unaff_RDI + 0x78);
  if (!in_ZF) {
    param_2 = in_RAX;
  }
  iVar4 = 0;
  if (in_R10 != 0) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 1;
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
    } while ((uint64_t)(int64_t)iVar4 < in_R10);
  }
  FUN_18053df50(unaff_RDI + 8,&stack0x00000030,iVar4,unaff_RSI + 0x10,uVar3);
  *(int32_t *)(in_stack_00000030 + 0x58) = uVar2;
  in_stack_00000070 =
       (int32_t)(*(int64_t *)(unaff_RDI + 0x60) - *(int64_t *)(unaff_RDI + 0x58) >> 3);
  FUN_1800571e0(unaff_RDI + 0x38,&stack0x00000070);
  *(int32_t *)(unaff_RSI + 0x68) = *(int32_t *)(unaff_RDI + 0x78);
  *(int *)(unaff_RDI + 0x78) = *(int *)(unaff_RDI + 0x78) + 1;
  FUN_18005ea90(unaff_RDI + 0x58,&stack0x00000078);
  return 1;
}



uint64_t FUN_18053a1a8(int64_t param_1)

{
  void *puVar1;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if (*(int *)(*(int64_t *)(unaff_RDI + 0x38) + (int64_t)*(int *)(param_1 + 0x58) * 4) != -1) {
    puVar1 = &system_buffer_ptr;
    if (*(void **)(unaff_RSI + 0x18) != (void *)0x0) {
      puVar1 = *(void **)(unaff_RSI + 0x18);
    }
    FUN_180627020(&processed_var_7872_ptr,puVar1);
    return 0;
  }
  *(int *)(*(int64_t *)(unaff_RDI + 0x38) + (int64_t)*(int *)(param_1 + 0x58) * 4) =
       (int)(*(int64_t *)(unaff_RDI + 0x60) - *(int64_t *)(unaff_RDI + 0x58) >> 3);
  FUN_18005ea90((int64_t *)(unaff_RDI + 0x58),&stack0x00000078);
  return 1;
}



uint64_t FUN_18053a220(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t alStack_18 [2];
  
  FUN_18053de40(param_1 + 8,alStack_18,param_2 + 0x10);
  if ((alStack_18[0] !=
       *(int64_t *)(*(int64_t *)(param_1 + 0x10) + *(int64_t *)(param_1 + 0x18) * 8)) &&
     (iVar1 = *(int *)(alStack_18[0] + 0x58), -1 < iVar1)) {
    if (((uint64_t)(int64_t)iVar1 <
         (uint64_t)(*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) >> 2)) &&
       (iVar1 = *(int *)(*(int64_t *)(param_1 + 0x38) + (int64_t)iVar1 * 4), iVar1 != -1)) {
      *(uint64_t *)(*(int64_t *)(param_1 + 0x58) + (int64_t)iVar1 * 8) = 0;
      *(int32_t *)(*(int64_t *)(param_1 + 0x38) + (int64_t)*(int *)(alStack_18[0] + 0x58) * 4)
           = 0xffffffff;
      FUN_18053dc90(param_1 + 8,param_2 + 0x10);
      return 1;
    }
  }
  return 0;
}



int32_t FUN_18053a2e0(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int64_t lVar5;
  byte *pbVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t lStack_18;
  
  pbVar4 = *(byte **)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar7 = 0xcbf29ce484222325;
  pbVar6 = &system_buffer_ptr;
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = pbVar4;
  }
  uVar8 = 0;
  if (uVar3 != 0) {
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar8 + 1;
      uVar7 = (uVar7 ^ bVar2) * 0x100000001b3;
    } while (uVar8 < uVar3);
  }
  lVar5 = *(int64_t *)(param_1 + 0x10);
  for (lStack_18 = *(int64_t *)(lVar5 + (uVar7 % (uint64_t)*(uint *)(param_1 + 0x18)) * 8);
      lStack_18 != 0; lStack_18 = *(int64_t *)(lStack_18 + 0x60)) {
    uVar8 = *(uint *)(lStack_18 + 0x10);
    if (uVar3 == uVar8) {
      if (uVar3 != 0) {
        pbVar6 = pbVar4;
        do {
          pbVar1 = pbVar6 + (*(int64_t *)(lStack_18 + 8) - (int64_t)pbVar4);
          uVar8 = (uint)*pbVar6 - (uint)*pbVar1;
          if (uVar8 != 0) break;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18053a39e:
      if (uVar8 == 0) goto LAB_18053a3ac;
    }
    else if (uVar3 == 0) goto LAB_18053a39e;
  }
  lStack_18 = 0;
LAB_18053a3ac:
  if (lStack_18 == 0) {
    lStack_18 = *(int64_t *)(lVar5 + *(int64_t *)(param_1 + 0x18) * 8);
  }
  if (lStack_18 != *(int64_t *)(lVar5 + *(int64_t *)(param_1 + 0x18) * 8)) {
    return *(int32_t *)(lStack_18 + 0x58);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18053a410(int64_t param_1,int param_2,int param_3,uint64_t param_4)

{
  int32_t *puVar1;
  void *puVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int8_t auStack_30 [8];
  void *puStack_28;
  uint uStack_20;
  
  lVar5 = (int64_t)param_3;
  lVar4 = (int64_t)param_2 * 0xe0 + *(int64_t *)(param_1 + 0x80);
  if (param_3 != -1) {
    if ((param_3 < (int)((render_system_memory - render_system_memory) / 0x68)) &&
       (*(int *)(*(int64_t *)(lVar4 + 0x78) + lVar5 * 8) < 0)) {
      lVar5 = lVar5 * 0x68 + render_system_memory;
      SystemCore_EncryptionEngine0(auStack_30,lVar4,render_system_memory,param_4,0xfffffffffffffffe);
      uVar3 = uStack_20 + 0x12;
      CoreMemoryPoolProcessor(auStack_30,uVar3);
      puVar1 = (int32_t *)(puStack_28 + uStack_20);
      *puVar1 = 0x656f6420;
      puVar1[1] = 0x6f6e2073;
      puVar1[2] = 0x6f632074;
      puVar1[3] = 0x6961746e;
      *(int16_t *)(puVar1 + 4) = 0x206e;
      *(int8_t *)((int64_t)puVar1 + 0x12) = 0;
      uStack_20 = uVar3;
      if (0 < *(int *)(lVar5 + 0x10)) {
        CoreMemoryPoolProcessor(auStack_30,uVar3 + *(int *)(lVar5 + 0x10));
                    // WARNING: Subroutine does not return
        memcpy(puStack_28 + uStack_20,*(uint64_t *)(lVar5 + 8),
               (int64_t)(*(int *)(lVar5 + 0x10) + 1));
      }
      puVar2 = &system_buffer_ptr;
      if (puStack_28 != (void *)0x0) {
        puVar2 = puStack_28;
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,puVar2);
    }
  }
  return *(int32_t *)(*(int64_t *)(lVar4 + 0x78) + lVar5 * 8);
}



uint64_t FUN_18053a5a0(int64_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_18053a410();
  iVar1 = *(int *)(*(int64_t *)(param_1 + 0x38) + (int64_t)iVar1 * 4);
  if (iVar1 != -1) {
    return *(uint64_t *)(*(int64_t *)(param_1 + 0x58) + (int64_t)iVar1 * 8);
  }
  return 0;
}



int FUN_18053a5e0(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  void *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (0 < iVar2) {
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x88)) {
      puVar8 = (uint64_t *)(*(int64_t *)(param_1 + 0x80) + 8);
      do {
        iVar3 = *(int *)(puVar8 + 1);
        iVar5 = iVar2;
        if (iVar3 == iVar2) {
          if (iVar3 != 0) {
            pbVar4 = (byte *)*puVar8;
            lVar7 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar4;
            do {
              pbVar1 = pbVar4 + lVar7;
              iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
              if (iVar5 != 0) break;
              pbVar4 = pbVar4 + 1;
            } while (*pbVar1 != 0);
          }
LAB_18053a64e:
          if (iVar5 == 0) {
            return iVar9;
          }
        }
        else if (iVar3 == 0) goto LAB_18053a64e;
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 0x1c;
      } while (iVar9 < *(int *)(param_1 + 0x88));
    }
  }
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  SystemCore_ResourceManager0(&processed_var_7952_ptr,puVar6);
  return 0;
}





// 函数: void FUN_18053a6a0(uint64_t *param_1)
void FUN_18053a6a0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar6;
  uint64_t uVar5;
  
  uVar5 = 0;
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plVar1 = param_1 + 0x13;
  lVar3 = *plVar1;
  uVar6 = uVar5;
  if (param_1[0x14] - lVar3 >> 3 != 0) {
    do {
      plVar2 = *(int64_t **)(uVar6 + lVar3);
      if (plVar2 != (int64_t *)0x0) {
        if (*plVar2 == 0) {
          *plVar2 = 0;
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer(plVar2);
        }
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(uVar6 + *plVar1) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      lVar3 = *plVar1;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(param_1[0x14] - lVar3 >> 3));
  }
  lVar3 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar3 != 0) {
    if (*(int64_t *)(lVar3 + 8) == 0) {
      *(uint64_t *)(lVar3 + 8) = 0;
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar3);
    }
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  FUN_18053d880();
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (param_1[0xf] == 0) {
    *param_1 = &system_state_ptr;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}





// 函数: void FUN_18053a7e0(int64_t *param_1)
void FUN_18053a7e0(int64_t *param_1)

{
  int64_t *plVar1;
  
  for (plVar1 = (int64_t *)*param_1; plVar1 != (int64_t *)param_1[1]; plVar1 = plVar1 + 4) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053a960(int64_t param_1,int param_2,int64_t param_3,int param_4)
void FUN_18053a960(int64_t param_1,int param_2,int64_t param_3,int param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar6;
  
  iVar8 = param_4 + 1;
  if (param_4 < 6) {
    iVar8 = param_4;
  }
  uVar7 = (uint64_t)iVar8;
  if (iVar8 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar7 * 0x30,3);
    uVar4 = 0;
    uVar6 = uVar4;
    do {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      puVar3 = (uint64_t *)(uVar4 * 0x30 + lVar2);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      uVar4 = (uint64_t)(int)uVar5;
    } while (uVar4 < uVar7);
  }
  lVar9 = (int64_t)param_2 * 0xe0;
  *(int64_t *)(lVar9 + 0x68 + *(int64_t *)(param_1 + 0x80)) = lVar2;
  *(int *)(lVar9 + 0x70 + *(int64_t *)(param_1 + 0x80)) = iVar8;
  if (0 < iVar8) {
    lVar2 = 0;
    puVar3 = (uint64_t *)(param_3 + 0x10);
    do {
      lVar1 = *(int64_t *)(lVar9 + 0x68 + *(int64_t *)(param_1 + 0x80));
      *(uint64_t *)(lVar2 + lVar1) = puVar3[-2];
      *(uint64_t *)(lVar2 + 8 + lVar1) = puVar3[-1];
      *(uint64_t *)(lVar2 + 0x10 + lVar1) = *puVar3;
      *(uint64_t *)(lVar2 + 0x18 + lVar1) = puVar3[1];
      *(uint64_t *)(lVar2 + 0x20 + lVar1) = puVar3[2];
      *(uint64_t *)(lVar2 + 0x28 + lVar1) = puVar3[3];
      uVar7 = uVar7 - 1;
      lVar2 = lVar2 + 0x30;
      puVar3 = puVar3 + 6;
    } while (uVar7 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



