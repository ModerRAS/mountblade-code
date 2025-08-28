#include "TaleWorlds.Native.Split.h"

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
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_648;
  apuStack_628[0] = &UNK_180a31040;
  apuStack_628[1] = &UNK_180a31018;
  apuStack_628[2] = &UNK_180a31078;
  apuStack_628[3] = &UNK_180a31058;
  apuStack_628[4] = &UNK_180a31178;
  apuStack_628[5] = &UNK_180a31158;
  apuStack_628[6] = &UNK_180a311d8;
  apuStack_628[7] = &UNK_180a31198;
  apuStack_628[8] = &UNK_180a310d0;
  apuStack_628[9] = &UNK_180a310a0;
  apuStack_628[10] = &UNK_180a31138;
  apuStack_628[0xb] = &UNK_180a31110;
  apuStack_628[0xc] = &UNK_180a312d8;
  apuStack_628[0xd] = &UNK_180a312b0;
  apuStack_628[0xe] = &UNK_180a31320;
  apuStack_628[0xf] = &UNK_180a312f8;
  apuStack_628[0x10] = &UNK_180a31228;
  apuStack_628[0x11] = &UNK_180a311f8;
  apuStack_628[0x12] = &UNK_180a31288;
  apuStack_628[0x13] = &UNK_180a31250;
  apuStack_628[0x14] = &UNK_180a31420;
  apuStack_628[0x15] = &UNK_180a313f8;
  apuStack_628[0x16] = &UNK_180a31478;
  apuStack_628[0x17] = &UNK_180a31448;
  apuStack_628[0x18] = &UNK_180a31380;
  apuStack_628[0x19] = &UNK_180a31348;
  apuStack_628[0x1a] = &UNK_180a313d0;
  apuStack_628[0x1b] = &UNK_180a313a8;
  apuStack_628[0x1c] = &UNK_180a31598;
  apuStack_628[0x1d] = &UNK_180a31560;
  apuStack_628[0x1e] = &UNK_180a315f8;
  apuStack_628[0x1f] = &UNK_180a315c0;
  apuStack_628[0x20] = &UNK_180a314c8;
  apuStack_628[0x21] = &UNK_180a31498;
  apuStack_628[0x22] = &UNK_180a31530;
  apuStack_628[0x23] = &UNK_180a31500;
  apuStack_628[0x24] = &UNK_180a316c8;
  apuStack_628[0x25] = &UNK_180a316b0;
  apuStack_628[0x26] = &UNK_180a31720;
  apuStack_628[0x27] = &UNK_180a316f8;
  apuStack_628[0x28] = &UNK_180a31638;
  apuStack_628[0x29] = &UNK_180a31620;
  apuStack_628[0x2a] = &UNK_180a31688;
  apuStack_628[0x2b] = &UNK_180a31660;
  apuStack_628[0x2c] = &UNK_180a317f8;
  apuStack_628[0x2d] = &UNK_180a317e0;
  apuStack_628[0x2e] = &UNK_180a31850;
  apuStack_628[0x2f] = &UNK_180a31820;
  apuStack_628[0x30] = &UNK_180a31770;
  apuStack_628[0x31] = &UNK_180a31740;
  apuStack_628[0x32] = &UNK_180a317b8;
  apuStack_628[0x33] = &UNK_180a31790;
  apuStack_628[0x34] = &UNK_180a31978;
  apuStack_628[0x35] = &UNK_180a31948;
  apuStack_628[0x36] = &UNK_180a319b8;
  apuStack_628[0x37] = &UNK_180a319a0;
  apuStack_628[0x38] = &UNK_180a318a8;
  apuStack_628[0x39] = &UNK_180a31878;
  apuStack_628[0x3a] = &UNK_180a31918;
  apuStack_628[0x3b] = &UNK_180a318d0;
  apuStack_628[0x3c] = &UNK_180a31ab8;
  apuStack_628[0x3d] = &UNK_180a31a80;
  apuStack_628[0x3e] = &UNK_180a31b10;
  apuStack_628[0x3f] = &UNK_180a31af0;
  apuStack_628[0x40] = &UNK_180a31a00;
  apuStack_628[0x41] = &UNK_180a319e8;
  apuStack_628[0x42] = &UNK_180a31a60;
  apuStack_628[0x43] = &UNK_180a31a30;
  apuStack_628[0x44] = &UNK_180a31c40;
  apuStack_628[0x45] = &UNK_180a31c08;
  apuStack_628[0x46] = &UNK_180a31ca0;
  apuStack_628[0x47] = &UNK_180a31c70;
  apuStack_628[0x48] = &UNK_180a31b80;
  apuStack_628[0x49] = &UNK_180a31b48;
  apuStack_628[0x4a] = &UNK_180a31bd8;
  apuStack_628[0x4b] = &UNK_180a31bb0;
  apuStack_628[0x4c] = &UNK_180a31d80;
  apuStack_628[0x4d] = &UNK_180a31d58;
  apuStack_628[0x4e] = &UNK_180a31dc8;
  apuStack_628[0x4f] = &UNK_180a31da8;
  apuStack_628[0x50] = &UNK_180a31cf8;
  apuStack_628[0x51] = &UNK_180a31cd0;
  apuStack_628[0x52] = &UNK_180a31d40;
  apuStack_628[0x53] = &UNK_180a31d18;
  apuStack_628[0x54] = &UNK_180a31e88;
  apuStack_628[0x55] = &UNK_180a31e68;
  apuStack_628[0x56] = &UNK_180a31ed0;
  apuStack_628[0x57] = &UNK_180a31eb0;
  apuStack_628[0x58] = &UNK_180a31e08;
  apuStack_628[0x59] = &UNK_180a31de8;
  apuStack_628[0x5a] = &UNK_180a31e48;
  apuStack_628[0x5b] = &UNK_180a31e28;
  apuStack_628[0x5c] = &UNK_180a31ff0;
  apuStack_628[0x5d] = &UNK_180a31fc8;
  apuStack_628[0x5e] = &UNK_180a32040;
  apuStack_628[0x5f] = &UNK_180a32010;
  apuStack_628[0x60] = &UNK_180a31f38;
  apuStack_628[0x61] = &UNK_180a31ef0;
  apuStack_628[0x62] = &UNK_180a31f80;
  apuStack_628[99] = &UNK_180a31f58;
  apuStack_628[100] = &UNK_180a32180;
  apuStack_628[0x65] = &UNK_180a32168;
  apuStack_628[0x66] = &UNK_180a321c8;
  apuStack_628[0x67] = &UNK_180a32198;
  apuStack_628[0x68] = &UNK_180a320b0;
  apuStack_628[0x69] = &UNK_180a32070;
  apuStack_628[0x6a] = &UNK_180a32120;
  apuStack_628[0x6b] = &UNK_180a320d8;
  apuStack_628[0x6c] = &UNK_180a32350;
  apuStack_628[0x6d] = &UNK_180a32318;
  apuStack_628[0x6e] = &UNK_180a323e0;
  apuStack_628[0x6f] = &UNK_180a32398;
  apuStack_628[0x70] = &UNK_180a32240;
  apuStack_628[0x71] = &UNK_180a321f8;
  apuStack_628[0x72] = &UNK_180a322d0;
  apuStack_628[0x73] = &UNK_180a32288;
  apuStack_628[0x74] = &UNK_180a32580;
  apuStack_628[0x75] = &UNK_180a32538;
  apuStack_628[0x76] = &UNK_180a32610;
  apuStack_628[0x77] = &UNK_180a325c8;
  apuStack_628[0x78] = &UNK_180a32470;
  apuStack_628[0x79] = &UNK_180a32428;
  apuStack_628[0x7a] = &UNK_180a324f0;
  apuStack_628[0x7b] = &UNK_180a324b8;
  apuStack_628[0x7c] = &UNK_180a327b0;
  apuStack_628[0x7d] = &UNK_180a32778;
  apuStack_628[0x7e] = &UNK_180a32830;
  apuStack_628[0x7f] = &UNK_180a327f8;
  apuStack_628[0x80] = &UNK_180a326a0;
  apuStack_628[0x81] = &UNK_180a32658;
  apuStack_628[0x82] = &UNK_180a32730;
  apuStack_628[0x83] = &UNK_180a326e8;
  apuStack_628[0x84] = &UNK_180a329a0;
  apuStack_628[0x85] = &UNK_180a32960;
  apuStack_628[0x86] = &UNK_180a32a30;
  apuStack_628[0x87] = &UNK_180a329e8;
  apuStack_628[0x88] = &UNK_180a328a0;
  apuStack_628[0x89] = &UNK_180a32870;
  apuStack_628[0x8a] = &UNK_180a32920;
  apuStack_628[0x8b] = &UNK_180a328e8;
  apuStack_628[0x8c] = &UNK_180a32ba8;
  apuStack_628[0x8d] = &UNK_180a32b70;
  apuStack_628[0x8e] = &UNK_180a32c20;
  apuStack_628[0x8f] = &UNK_180a32be8;
  apuStack_628[0x90] = &UNK_180a32ab0;
  apuStack_628[0x91] = &UNK_180a32a78;
  apuStack_628[0x92] = &UNK_180a32b30;
  apuStack_628[0x93] = &UNK_180a32af0;
  apuStack_628[0x94] = &UNK_180a32d90;
  apuStack_628[0x95] = &UNK_180a32d58;
  apuStack_628[0x96] = &UNK_180a32e08;
  apuStack_628[0x97] = &UNK_180a32dd0;
  apuStack_628[0x98] = &UNK_180a32c98;
  apuStack_628[0x99] = &UNK_180a32c60;
  apuStack_628[0x9a] = &UNK_180a32d10;
  apuStack_628[0x9b] = &UNK_180a32cd8;
  apuStack_628[0x9c] = &UNK_180a32f50;
  apuStack_628[0x9d] = &UNK_180a32f10;
  apuStack_628[0x9e] = &UNK_180a32fd0;
  apuStack_628[0x9f] = &UNK_180a32f90;
  apuStack_628[0xa0] = &UNK_180a32e70;
  apuStack_628[0xa1] = &UNK_180a32e48;
  uVar7 = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  apuStack_628[0xa2] = &UNK_180a32ee0;
  apuStack_628[0xa3] = &UNK_180a32eb8;
  apuStack_628[0xa4] = &UNK_180a33188;
  apuStack_628[0xa5] = &UNK_180a33140;
  apuStack_628[0xa6] = &UNK_180a33200;
  apuStack_628[0xa7] = &UNK_180a331c0;
  apuStack_628[0xa8] = &UNK_180a33060;
  apuStack_628[0xa9] = &UNK_180a33020;
  apuStack_628[0xaa] = &UNK_180a330f0;
  apuStack_628[0xab] = &UNK_180a330b0;
  apuStack_628[0xac] = &UNK_180a33370;
  apuStack_628[0xad] = &UNK_180a33330;
  apuStack_628[0xae] = &UNK_180a33400;
  apuStack_628[0xaf] = &UNK_180a333c0;
  apuStack_628[0xb0] = &UNK_180a33280;
  apuStack_628[0xb1] = &UNK_180a33250;
  apuStack_628[0xb2] = &UNK_180a332f8;
  apuStack_628[0xb3] = &UNK_180a332c8;
  apuStack_628[0xb4] = &UNK_180a335d8;
  apuStack_628[0xb5] = &UNK_180a33590;
  apuStack_628[0xb6] = &UNK_180a33660;
  apuStack_628[0xb7] = &UNK_180a33610;
  apuStack_628[0xb8] = &UNK_180a334a0;
  apuStack_628[0xb9] = &UNK_180a33450;
  apuStack_628[0xba] = &UNK_180a33540;
  apuStack_628[0xbb] = &UNK_180a334f0;
  apuStack_628[0xbc] = &UNK_180a337d0;
  apuStack_628[0xbd] = &UNK_180a33780;
  apuStack_628[0xbe] = &UNK_180a33870;
  apuStack_628[0xbf] = &UNK_180a33820;
  apuStack_628[0xc0] = &UNK_180a336f0;
  apuStack_628[0xc1] = &UNK_180a336b0;
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
      FUN_180626f80(&UNK_180a33740,puVar6);
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
      FUN_180627020(&UNK_180a338e0,puVar5);
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
    FUN_180627020(&UNK_180a338e0,puVar1);
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
    if ((param_3 < (int)((_DAT_180c96158 - _DAT_180c96150) / 0x68)) &&
       (*(int *)(*(longlong *)(lVar4 + 0x78) + lVar5 * 8) < 0)) {
      lVar5 = lVar5 * 0x68 + _DAT_180c96150;
      FUN_1806279c0(auStack_30,lVar4,_DAT_180c96150,param_4,0xfffffffffffffffe);
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
      FUN_180062300(_DAT_180c86928,puVar2);
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
  FUN_180626f80(&UNK_180a33930,puVar6);
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
    *param_1 = &UNK_18098bcb0;
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
    lVar2 = FUN_18062b420(_DAT_180c8ed18,uVar7 * 0x30,3);
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



