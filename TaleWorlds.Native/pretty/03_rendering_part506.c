#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part506.c - 5 个函数

// 函数: void FUN_180538a20(uint64_t param_1,longlong param_2,int32_t param_3)
void FUN_180538a20(uint64_t param_1,longlong param_2,int32_t param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  void *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int8_t auStack_648 [32];
  void *apuStack_628 [194];
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_648;
  apuStack_628[0] = &unknown_var_7472_ptr;
  apuStack_628[1] = &unknown_var_7432_ptr;
  apuStack_628[2] = &unknown_var_7528_ptr;
  apuStack_628[3] = &unknown_var_7496_ptr;
  apuStack_628[4] = &unknown_var_7784_ptr;
  apuStack_628[5] = &unknown_var_7752_ptr;
  apuStack_628[6] = &unknown_var_7880_ptr;
  apuStack_628[7] = &unknown_var_7816_ptr;
  apuStack_628[8] = &unknown_var_7616_ptr;
  apuStack_628[9] = &unknown_var_7568_ptr;
  apuStack_628[10] = &unknown_var_7720_ptr;
  apuStack_628[0xb] = &unknown_var_7680_ptr;
  apuStack_628[0xc] = &unknown_var_8136_ptr;
  apuStack_628[0xd] = &unknown_var_8096_ptr;
  apuStack_628[0xe] = &unknown_var_8208_ptr;
  apuStack_628[0xf] = &unknown_var_8168_ptr;
  apuStack_628[0x10] = &unknown_var_7960_ptr;
  apuStack_628[0x11] = &unknown_var_7912_ptr;
  apuStack_628[0x12] = &unknown_var_8056_ptr;
  apuStack_628[0x13] = &unknown_var_8000_ptr;
  apuStack_628[0x14] = &unknown_var_8464_ptr;
  apuStack_628[0x15] = &unknown_var_8424_ptr;
  apuStack_628[0x16] = &unknown_var_8552_ptr;
  apuStack_628[0x17] = &unknown_var_8504_ptr;
  apuStack_628[0x18] = &unknown_var_8304_ptr;
  apuStack_628[0x19] = &unknown_var_8248_ptr;
  apuStack_628[0x1a] = &unknown_var_8384_ptr;
  apuStack_628[0x1b] = &unknown_var_8344_ptr;
  apuStack_628[0x1c] = &unknown_var_8840_ptr;
  apuStack_628[0x1d] = &unknown_var_8784_ptr;
  apuStack_628[0x1e] = &unknown_var_8936_ptr;
  apuStack_628[0x1f] = &unknown_var_8880_ptr;
  apuStack_628[0x20] = &unknown_var_8632_ptr;
  apuStack_628[0x21] = &unknown_var_8584_ptr;
  apuStack_628[0x22] = &unknown_var_8736_ptr;
  apuStack_628[0x23] = &unknown_var_8688_ptr;
  apuStack_628[0x24] = &unknown_var_9144_ptr;
  apuStack_628[0x25] = &unknown_var_9120_ptr;
  apuStack_628[0x26] = &unknown_var_9232_ptr;
  apuStack_628[0x27] = &unknown_var_9192_ptr;
  apuStack_628[0x28] = &unknown_var_9000_ptr;
  apuStack_628[0x29] = &unknown_var_8976_ptr;
  apuStack_628[0x2a] = &unknown_var_9080_ptr;
  apuStack_628[0x2b] = &unknown_var_9040_ptr;
  apuStack_628[0x2c] = &unknown_var_9448_ptr;
  apuStack_628[0x2d] = &unknown_var_9424_ptr;
  apuStack_628[0x2e] = &unknown_var_9536_ptr;
  apuStack_628[0x2f] = &unknown_var_9488_ptr;
  apuStack_628[0x30] = &unknown_var_9312_ptr;
  apuStack_628[0x31] = &unknown_var_9264_ptr;
  apuStack_628[0x32] = &unknown_var_9384_ptr;
  apuStack_628[0x33] = &unknown_var_9344_ptr;
  apuStack_628[0x34] = &unknown_var_9832_ptr;
  apuStack_628[0x35] = &unknown_var_9784_ptr;
  apuStack_628[0x36] = &unknown_var_9896_ptr;
  apuStack_628[0x37] = &unknown_var_9872_ptr;
  apuStack_628[0x38] = &unknown_var_9624_ptr;
  apuStack_628[0x39] = &unknown_var_9576_ptr;
  apuStack_628[0x3a] = &unknown_var_9736_ptr;
  apuStack_628[0x3b] = &unknown_var_9664_ptr;
  apuStack_628[0x3c] = &unknown_var_152_ptr;
  apuStack_628[0x3d] = &unknown_var_96_ptr;
  apuStack_628[0x3e] = &unknown_var_240_ptr;
  apuStack_628[0x3f] = &unknown_var_208_ptr;
  apuStack_628[0x40] = &unknown_var_9968_ptr;
  apuStack_628[0x41] = &unknown_var_9944_ptr;
  apuStack_628[0x42] = &unknown_var_64_ptr;
  apuStack_628[0x43] = &unknown_var_16_ptr;
  apuStack_628[0x44] = &unknown_var_544_ptr;
  apuStack_628[0x45] = &unknown_var_488_ptr;
  apuStack_628[0x46] = &unknown_var_640_ptr;
  apuStack_628[0x47] = &unknown_var_592_ptr;
  apuStack_628[0x48] = &unknown_var_352_ptr;
  apuStack_628[0x49] = &unknown_var_296_ptr;
  apuStack_628[0x4a] = &unknown_var_440_ptr;
  apuStack_628[0x4b] = &unknown_var_400_ptr;
  apuStack_628[0x4c] = &unknown_var_864_ptr;
  apuStack_628[0x4d] = &unknown_var_824_ptr;
  apuStack_628[0x4e] = &unknown_var_936_ptr;
  apuStack_628[0x4f] = &unknown_var_904_ptr;
  apuStack_628[0x50] = &unknown_var_728_ptr;
  apuStack_628[0x51] = &unknown_var_688_ptr;
  apuStack_628[0x52] = &unknown_var_800_ptr;
  apuStack_628[0x53] = &unknown_var_760_ptr;
  apuStack_628[0x54] = &unknown_var_1128_ptr;
  apuStack_628[0x55] = &unknown_var_1096_ptr;
  apuStack_628[0x56] = &unknown_var_1200_ptr;
  apuStack_628[0x57] = &unknown_var_1168_ptr;
  apuStack_628[0x58] = &unknown_var_1000_ptr;
  apuStack_628[0x59] = &unknown_var_968_ptr;
  apuStack_628[0x5a] = &unknown_var_1064_ptr;
  apuStack_628[0x5b] = &unknown_var_1032_ptr;
  apuStack_628[0x5c] = &unknown_var_1488_ptr;
  apuStack_628[0x5d] = &unknown_var_1448_ptr;
  apuStack_628[0x5e] = &unknown_var_1568_ptr;
  apuStack_628[0x5f] = &unknown_var_1520_ptr;
  apuStack_628[0x60] = &unknown_var_1304_ptr;
  apuStack_628[0x61] = &unknown_var_1232_ptr;
  apuStack_628[0x62] = &unknown_var_1376_ptr;
  apuStack_628[99] = &unknown_var_1336_ptr;
  apuStack_628[100] = &unknown_var_1888_ptr;
  apuStack_628[0x65] = &unknown_var_1864_ptr;
  apuStack_628[0x66] = &unknown_var_1960_ptr;
  apuStack_628[0x67] = &unknown_var_1912_ptr;
  apuStack_628[0x68] = &unknown_var_1680_ptr;
  apuStack_628[0x69] = &unknown_var_1616_ptr;
  apuStack_628[0x6a] = &unknown_var_1792_ptr;
  apuStack_628[0x6b] = &unknown_var_1720_ptr;
  apuStack_628[0x6c] = &unknown_var_2352_ptr;
  apuStack_628[0x6d] = &unknown_var_2296_ptr;
  apuStack_628[0x6e] = &unknown_var_2496_ptr;
  apuStack_628[0x6f] = &unknown_var_2424_ptr;
  apuStack_628[0x70] = &unknown_var_2080_ptr;
  apuStack_628[0x71] = &unknown_var_2008_ptr;
  apuStack_628[0x72] = &system_callback2_ptr;
  apuStack_628[0x73] = &unknown_var_2152_ptr;
  apuStack_628[0x74] = &unknown_var_2912_ptr;
  apuStack_628[0x75] = &unknown_var_2840_ptr;
  apuStack_628[0x76] = &unknown_var_3056_ptr;
  apuStack_628[0x77] = &unknown_var_2984_ptr;
  apuStack_628[0x78] = &unknown_var_2640_ptr;
  apuStack_628[0x79] = &unknown_var_2568_ptr;
  apuStack_628[0x7a] = &unknown_var_2768_ptr;
  apuStack_628[0x7b] = &unknown_var_2712_ptr;
  apuStack_628[0x7c] = &unknown_var_3472_ptr;
  apuStack_628[0x7d] = &unknown_var_3416_ptr;
  apuStack_628[0x7e] = &unknown_var_3600_ptr;
  apuStack_628[0x7f] = &unknown_var_3544_ptr;
  apuStack_628[0x80] = &unknown_var_3200_ptr;
  apuStack_628[0x81] = &unknown_var_3128_ptr;
  apuStack_628[0x82] = &unknown_var_3344_ptr;
  apuStack_628[0x83] = &unknown_var_3272_ptr;
  apuStack_628[0x84] = &unknown_var_3968_ptr;
  apuStack_628[0x85] = &unknown_var_3904_ptr;
  apuStack_628[0x86] = &unknown_var_4112_ptr;
  apuStack_628[0x87] = &unknown_var_4040_ptr;
  apuStack_628[0x88] = &unknown_var_3712_ptr;
  apuStack_628[0x89] = &unknown_var_3664_ptr;
  apuStack_628[0x8a] = &unknown_var_3840_ptr;
  apuStack_628[0x8b] = &unknown_var_3784_ptr;
  apuStack_628[0x8c] = &unknown_var_4488_ptr;
  apuStack_628[0x8d] = &unknown_var_4432_ptr;
  apuStack_628[0x8e] = &unknown_var_4608_ptr;
  apuStack_628[0x8f] = &unknown_var_4552_ptr;
  apuStack_628[0x90] = &unknown_var_4240_ptr;
  apuStack_628[0x91] = &unknown_var_4184_ptr;
  apuStack_628[0x92] = &unknown_var_4368_ptr;
  apuStack_628[0x93] = &unknown_var_4304_ptr;
  apuStack_628[0x94] = &unknown_var_4976_ptr;
  apuStack_628[0x95] = &unknown_var_4920_ptr;
  apuStack_628[0x96] = &unknown_var_5096_ptr;
  apuStack_628[0x97] = &unknown_var_5040_ptr;
  apuStack_628[0x98] = &unknown_var_4728_ptr;
  apuStack_628[0x99] = &unknown_var_4672_ptr;
  apuStack_628[0x9a] = &unknown_var_4848_ptr;
  apuStack_628[0x9b] = &unknown_var_4792_ptr;
  apuStack_628[0x9c] = &unknown_var_5424_ptr;
  apuStack_628[0x9d] = &unknown_var_5360_ptr;
  apuStack_628[0x9e] = &unknown_var_5552_ptr;
  apuStack_628[0x9f] = &unknown_var_5488_ptr;
  apuStack_628[0xa0] = &unknown_var_5200_ptr;
  apuStack_628[0xa1] = &unknown_var_5160_ptr;
  uVar7 = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  apuStack_628[0xa2] = &unknown_var_5312_ptr;
  apuStack_628[0xa3] = &unknown_var_5272_ptr;
  apuStack_628[0xa4] = &unknown_var_5992_ptr;
  apuStack_628[0xa5] = &unknown_var_5920_ptr;
  apuStack_628[0xa6] = &unknown_var_6112_ptr;
  apuStack_628[0xa7] = &unknown_var_6048_ptr;
  apuStack_628[0xa8] = &unknown_var_5696_ptr;
  apuStack_628[0xa9] = &unknown_var_5632_ptr;
  apuStack_628[0xaa] = &unknown_var_5840_ptr;
  apuStack_628[0xab] = &unknown_var_5776_ptr;
  apuStack_628[0xac] = &unknown_var_6480_ptr;
  apuStack_628[0xad] = &unknown_var_6416_ptr;
  apuStack_628[0xae] = &unknown_var_6624_ptr;
  apuStack_628[0xaf] = &unknown_var_6560_ptr;
  apuStack_628[0xb0] = &unknown_var_6240_ptr;
  apuStack_628[0xb1] = &unknown_var_6192_ptr;
  apuStack_628[0xb2] = &unknown_var_6360_ptr;
  apuStack_628[0xb3] = &unknown_var_6312_ptr;
  apuStack_628[0xb4] = &unknown_var_7096_ptr;
  apuStack_628[0xb5] = &unknown_var_7024_ptr;
  apuStack_628[0xb6] = &unknown_var_7232_ptr;
  apuStack_628[0xb7] = &unknown_var_7152_ptr;
  apuStack_628[0xb8] = &unknown_var_6784_ptr;
  apuStack_628[0xb9] = &unknown_var_6704_ptr;
  apuStack_628[0xba] = &unknown_var_6944_ptr;
  apuStack_628[0xbb] = &unknown_var_6864_ptr;
  apuStack_628[0xbc] = &unknown_var_7600_ptr;
  apuStack_628[0xbd] = &unknown_var_7520_ptr;
  apuStack_628[0xbe] = &unknown_var_7760_ptr;
  apuStack_628[0xbf] = &unknown_var_7680_ptr;
  apuStack_628[0xc0] = &unknown_var_7376_ptr;
  apuStack_628[0xc1] = &unknown_var_7312_ptr;
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
        lVar3 = (longlong)apuStack_628[uVar7] - (longlong)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar3;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
LAB_1805394ce:
      if (iVar5 == 0) {
        *(int32_t *)(&system_data_6380 + (longlong)(int)uVar8 * 4) = param_3;
        goto LAB_1805394fd;
      }
    }
    else if (iVar2 == 0) goto LAB_1805394ce;
    uVar8 = (ulonglong)((int)uVar8 + 1);
    uVar7 = uVar7 + 1;
    if (0xc1 < (longlong)uVar7) {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar6 = *(void **)(param_2 + 8);
      }
      FUN_180626f80(&unknown_var_7456_ptr,puVar6);
LAB_1805394fd:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_648);
    }
  } while( true );
}





// 函数: void FUN_1805397f0(void)
void FUN_1805397f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t FUN_18053a0b0(longlong param_1,longlong param_2)

{
  byte bVar1;
  int32_t uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  void *puVar5;
  uint uVar6;
  int32_t auStackX_8 [2];
  longlong lStackX_10;
  longlong alStack_38 [4];
  
  lStackX_10 = param_2;
  FUN_18053de40(param_1 + 8,alStack_38,param_2 + 0x10);
  if (alStack_38[0] ==
      *(longlong *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x18) * 8)) {
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
    auStackX_8[0] = (int32_t)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3)
    ;
    FUN_1800571e0(param_1 + 0x38,auStackX_8);
    *(int32_t *)(param_2 + 0x68) = *(int32_t *)(param_1 + 0x78);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    FUN_18005ea90(param_1 + 0x58,&lStackX_10);
  }
  else {
    if (*(int *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(alStack_38[0] + 0x58) * 4) != -1
       ) {
      puVar5 = &system_buffer_ptr;
      if (*(void **)(param_2 + 0x18) != (void *)0x0) {
        puVar5 = *(void **)(param_2 + 0x18);
      }
      FUN_180627020(&unknown_var_7872_ptr,puVar5);
      return 0;
    }
    *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(alStack_38[0] + 0x58) * 4) =
         (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3);
    FUN_18005ea90((longlong *)(param_1 + 0x58),&lStackX_10);
  }
  return 1;
}



uint64_t FUN_18053a102(uint64_t param_1,byte *param_2)

{
  byte bVar1;
  int32_t uVar2;
  byte *in_RAX;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int iVar4;
  ulonglong in_R10;
  bool in_ZF;
  longlong in_stack_00000030;
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
    } while ((ulonglong)(longlong)iVar4 < in_R10);
  }
  FUN_18053df50(unaff_RDI + 8,&stack0x00000030,iVar4,unaff_RSI + 0x10,uVar3);
  *(int32_t *)(in_stack_00000030 + 0x58) = uVar2;
  in_stack_00000070 =
       (int32_t)(*(longlong *)(unaff_RDI + 0x60) - *(longlong *)(unaff_RDI + 0x58) >> 3);
  FUN_1800571e0(unaff_RDI + 0x38,&stack0x00000070);
  *(int32_t *)(unaff_RSI + 0x68) = *(int32_t *)(unaff_RDI + 0x78);
  *(int *)(unaff_RDI + 0x78) = *(int *)(unaff_RDI + 0x78) + 1;
  FUN_18005ea90(unaff_RDI + 0x58,&stack0x00000078);
  return 1;
}



uint64_t FUN_18053a1a8(longlong param_1)

{
  void *puVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x38) + (longlong)*(int *)(param_1 + 0x58) * 4) != -1) {
    puVar1 = &system_buffer_ptr;
    if (*(void **)(unaff_RSI + 0x18) != (void *)0x0) {
      puVar1 = *(void **)(unaff_RSI + 0x18);
    }
    FUN_180627020(&unknown_var_7872_ptr,puVar1);
    return 0;
  }
  *(int *)(*(longlong *)(unaff_RDI + 0x38) + (longlong)*(int *)(param_1 + 0x58) * 4) =
       (int)(*(longlong *)(unaff_RDI + 0x60) - *(longlong *)(unaff_RDI + 0x58) >> 3);
  FUN_18005ea90((longlong *)(unaff_RDI + 0x58),&stack0x00000078);
  return 1;
}



uint64_t FUN_18053a220(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong alStack_18 [2];
  
  FUN_18053de40(param_1 + 8,alStack_18,param_2 + 0x10);
  if ((alStack_18[0] !=
       *(longlong *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x18) * 8)) &&
     (iVar1 = *(int *)(alStack_18[0] + 0x58), -1 < iVar1)) {
    if (((ulonglong)(longlong)iVar1 <
         (ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 2)) &&
       (iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 4), iVar1 != -1)) {
      *(uint64_t *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = 0;
      *(int32_t *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(alStack_18[0] + 0x58) * 4)
           = 0xffffffff;
      FUN_18053dc90(param_1 + 8,param_2 + 0x10);
      return 1;
    }
  }
  return 0;
}



int32_t FUN_18053a2e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lStack_18;
  
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
  lVar5 = *(longlong *)(param_1 + 0x10);
  for (lStack_18 = *(longlong *)(lVar5 + (uVar7 % (ulonglong)*(uint *)(param_1 + 0x18)) * 8);
      lStack_18 != 0; lStack_18 = *(longlong *)(lStack_18 + 0x60)) {
    uVar8 = *(uint *)(lStack_18 + 0x10);
    if (uVar3 == uVar8) {
      if (uVar3 != 0) {
        pbVar6 = pbVar4;
        do {
          pbVar1 = pbVar6 + (*(longlong *)(lStack_18 + 8) - (longlong)pbVar4);
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
    lStack_18 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x18) * 8);
  }
  if (lStack_18 != *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x18) * 8)) {
    return *(int32_t *)(lStack_18 + 0x58);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18053a410(longlong param_1,int param_2,int param_3,uint64_t param_4)

{
  int32_t *puVar1;
  void *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int8_t auStack_30 [8];
  void *puStack_28;
  uint uStack_20;
  
  lVar5 = (longlong)param_3;
  lVar4 = (longlong)param_2 * 0xe0 + *(longlong *)(param_1 + 0x80);
  if (param_3 != -1) {
    if ((param_3 < (int)((render_system_memory - render_system_memory) / 0x68)) &&
       (*(int *)(*(longlong *)(lVar4 + 0x78) + lVar5 * 8) < 0)) {
      lVar5 = lVar5 * 0x68 + render_system_memory;
      FUN_1806279c0(auStack_30,lVar4,render_system_memory,param_4,0xfffffffffffffffe);
      uVar3 = uStack_20 + 0x12;
      FUN_1806277c0(auStack_30,uVar3);
      puVar1 = (int32_t *)(puStack_28 + uStack_20);
      *puVar1 = 0x656f6420;
      puVar1[1] = 0x6f6e2073;
      puVar1[2] = 0x6f632074;
      puVar1[3] = 0x6961746e;
      *(int16_t *)(puVar1 + 4) = 0x206e;
      *(int8_t *)((longlong)puVar1 + 0x12) = 0;
      uStack_20 = uVar3;
      if (0 < *(int *)(lVar5 + 0x10)) {
        FUN_1806277c0(auStack_30,uVar3 + *(int *)(lVar5 + 0x10));
                    // WARNING: Subroutine does not return
        memcpy(puStack_28 + uStack_20,*(uint64_t *)(lVar5 + 8),
               (longlong)(*(int *)(lVar5 + 0x10) + 1));
      }
      puVar2 = &system_buffer_ptr;
      if (puStack_28 != (void *)0x0) {
        puVar2 = puStack_28;
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(system_message_context,puVar2);
    }
  }
  return *(int32_t *)(*(longlong *)(lVar4 + 0x78) + lVar5 * 8);
}



uint64_t FUN_18053a5a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_18053a410();
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 4);
  if (iVar1 != -1) {
    return *(uint64_t *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8);
  }
  return 0;
}



int FUN_18053a5e0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  void *puVar6;
  longlong lVar7;
  uint64_t *puVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (0 < iVar2) {
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x88)) {
      puVar8 = (uint64_t *)(*(longlong *)(param_1 + 0x80) + 8);
      do {
        iVar3 = *(int *)(puVar8 + 1);
        iVar5 = iVar2;
        if (iVar3 == iVar2) {
          if (iVar3 != 0) {
            pbVar4 = (byte *)*puVar8;
            lVar7 = *(longlong *)(param_2 + 8) - (longlong)pbVar4;
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
  FUN_180626f80(&unknown_var_7952_ptr,puVar6);
  return 0;
}





// 函数: void FUN_18053a6a0(uint64_t *param_1)
void FUN_18053a6a0(uint64_t *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plVar1 = param_1 + 0x13;
  lVar3 = *plVar1;
  uVar6 = uVar5;
  if (param_1[0x14] - lVar3 >> 3 != 0) {
    do {
      plVar2 = *(longlong **)(uVar6 + lVar3);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 == 0) {
          *plVar2 = 0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar6 + *plVar1) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar3 = *plVar1;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[0x14] - lVar3 >> 3));
  }
  lVar3 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 8) == 0) {
      *(uint64_t *)(lVar3 + 8) = 0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18053d880();
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0xf] == 0) {
    *param_1 = &system_state_ptr;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18053a7e0(longlong *param_1)
void FUN_18053a7e0(longlong *param_1)

{
  longlong *plVar1;
  
  for (plVar1 = (longlong *)*param_1; plVar1 != (longlong *)param_1[1]; plVar1 = plVar1 + 4) {
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053a960(longlong param_1,int param_2,longlong param_3,int param_4)
void FUN_18053a960(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar6;
  
  iVar8 = param_4 + 1;
  if (param_4 < 6) {
    iVar8 = param_4;
  }
  uVar7 = (ulonglong)iVar8;
  if (iVar8 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(system_memory_pool_ptr,uVar7 * 0x30,3);
    uVar4 = 0;
    uVar6 = uVar4;
    do {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      puVar3 = (uint64_t *)(uVar4 * 0x30 + lVar2);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      uVar4 = (ulonglong)(int)uVar5;
    } while (uVar4 < uVar7);
  }
  lVar9 = (longlong)param_2 * 0xe0;
  *(longlong *)(lVar9 + 0x68 + *(longlong *)(param_1 + 0x80)) = lVar2;
  *(int *)(lVar9 + 0x70 + *(longlong *)(param_1 + 0x80)) = iVar8;
  if (0 < iVar8) {
    lVar2 = 0;
    puVar3 = (uint64_t *)(param_3 + 0x10);
    do {
      lVar1 = *(longlong *)(lVar9 + 0x68 + *(longlong *)(param_1 + 0x80));
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



