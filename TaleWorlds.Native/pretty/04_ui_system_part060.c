#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part060.c - 15 个函数

// 函数: void FUN_180697dd0(void)
void FUN_180697dd0(void)

{
  FUN_1806979e0();
  return;
}



uint64_t FUN_180697e60(int64_t param_1)

{
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x60)) {
      func_0x00018066e940(*(uint64_t *)(param_1 + 0x58));
    }
                    // WARNING: Subroutine does not return
    memset(param_1,0,0x90);
  }
  return 0xfffffffe;
}



uint64_t FUN_180697ed0(int64_t param_1)

{
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x60)) {
      func_0x00018066e940(*(uint64_t *)(param_1 + 0x58));
    }
                    // WARNING: Subroutine does not return
    memset(param_1,0,0x90);
  }
  return 0xffffffff;
}



uint64_t FUN_180697f10(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 != (uint *)0x0) {
    uVar8 = param_2 + 0xf & 0xfffffff0;
    uVar9 = param_3 + 0xf & 0xfffffff0;
    uVar4 = uVar8 + 0x1f + param_4 * 2 & 0xffffffe0;
    uVar6 = (int)uVar4 >> 1;
    iVar7 = (param_4 * 2 + uVar9) * uVar4;
    iVar5 = (((int)uVar9 >> 1) + param_4) * uVar6;
    uVar3 = iVar5 * 2 + iVar7;
    if (*(int64_t *)(param_1 + 0x16) == 0) {
      uVar1 = RenderingSystem_RenderTarget(0x20,(int64_t)(int)uVar3);
      *(uint64_t *)(param_1 + 0x16) = uVar1;
      param_1[0x18] = uVar3;
    }
    lVar2 = *(int64_t *)(param_1 + 0x16);
    if ((lVar2 == 0) || ((int)param_1[0x18] < (int)uVar3)) {
      uVar1 = 0xffffffff;
    }
    else if (((int64_t)(int)param_4 & 0x1fU) == 0) {
      param_1[6] = (int)uVar9 >> 1;
      param_1[2] = param_2;
      param_1[4] = uVar4;
      param_1[7] = (int)(param_2 + 1) / 2;
      param_1[5] = (int)uVar8 >> 1;
      param_1[8] = (int)(param_3 + 1) / 2;
      param_1[3] = param_3;
      *param_1 = uVar8;
      *(int64_t *)(param_1 + 0xe) = (int)(uVar4 * param_4) + lVar2 + (int64_t)(int)param_4;
      param_1[1] = uVar9;
      param_1[9] = uVar6;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      lVar2 = (int)(((int)param_4 / 2) * uVar6) + lVar2 + (int64_t)((int)param_4 / 2);
      param_1[0x19] = param_4;
      param_1[0x1a] = uVar3;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x22] = 0;
      *(int64_t *)(param_1 + 0x10) = iVar7 + lVar2;
      *(int64_t *)(param_1 + 0x12) = (int64_t)iVar5 + (int64_t)iVar7 + lVar2;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xfffffffd;
    }
    return uVar1;
  }
  return 0xfffffffe;
}



uint64_t FUN_180697f32(uint64_t param_1,uint param_2,int param_3)

{
  uint uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  int64_t lVar3;
  uint *unaff_RBX;
  uint uVar4;
  uint64_t unaff_RBP;
  uint uVar5;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int iVar6;
  uint in_R11D;
  uint uVar7;
  uint64_t unaff_R12;
  int iVar8;
  uint64_t unaff_R13;
  uint uVar9;
  uint64_t unaff_R14;
  uint uVar10;
  uint64_t unaff_R15;
  uint uStack0000000000000070;
  uint in_stack_00000078;
  uint in_stack_00000080;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  uVar9 = param_2 + 0xf & 0xfffffff0;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  uVar10 = param_3 + 0xfU & 0xfffffff0;
  uVar1 = (uint)unaff_RDI;
  uStack0000000000000070 = (int)uVar10 >> 1;
  uVar5 = uVar9 + 0x1f + uVar1 * 2 & 0xffffffe0;
  uVar7 = (int)uVar5 >> 1;
  iVar8 = (uVar1 * 2 + uVar10) * uVar5;
  iVar6 = (uStack0000000000000070 + uVar1) * uVar7;
  uVar4 = iVar6 * 2 + iVar8;
  if (*(int64_t *)(unaff_RBX + 0x16) == 0) {
    uVar2 = RenderingSystem_RenderTarget(0x20,(int64_t)(int)uVar4);
    *(uint64_t *)(unaff_RBX + 0x16) = uVar2;
    unaff_RBX[0x18] = uVar4;
    param_2 = in_stack_00000078;
    in_R11D = in_stack_00000080;
  }
  lVar3 = *(int64_t *)(unaff_RBX + 0x16);
  if ((lVar3 == 0) || ((int)unaff_RBX[0x18] < (int)uVar4)) {
    uVar2 = 0xffffffff;
  }
  else if ((unaff_RDI & 0x1f) == 0) {
    unaff_RBX[6] = uStack0000000000000070;
    unaff_RBX[2] = param_2;
    unaff_RBX[4] = uVar5;
    unaff_RBX[7] = (int)(param_2 + 1) / 2;
    unaff_RBX[5] = (int)uVar9 >> 1;
    unaff_RBX[8] = (int)(in_R11D + 1) / 2;
    unaff_RBX[3] = in_R11D;
    *unaff_RBX = uVar9;
    *(uint64_t *)(unaff_RBX + 0xe) = (int)(uVar5 * uVar1) + lVar3 + unaff_RDI;
    unaff_RBX[1] = uVar10;
    unaff_RBX[9] = uVar7;
    unaff_RBX[10] = 0;
    unaff_RBX[0xb] = 0;
    unaff_RBX[0xc] = 0;
    lVar3 = (int)(((int)uVar1 / 2) * uVar7) + lVar3 + (int64_t)((int)uVar1 / 2);
    unaff_RBX[0x19] = uVar1;
    unaff_RBX[0x1a] = uVar4;
    unaff_RBX[0x14] = 0;
    unaff_RBX[0x15] = 0;
    unaff_RBX[0x22] = 0;
    *(int64_t *)(unaff_RBX + 0x10) = iVar8 + lVar3;
    *(int64_t *)(unaff_RBX + 0x12) = (int64_t)iVar6 + (int64_t)iVar8 + lVar3;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}



uint64_t FUN_18069801e(int32_t param_1,int param_2,int param_3,int64_t param_4)

{
  int64_t lVar1;
  int32_t *unaff_RBX;
  int32_t unaff_EBP;
  int unaff_ESI;
  int iVar2;
  int64_t unaff_RDI;
  int32_t in_R10D;
  int in_R11D;
  int unaff_R12D;
  int unaff_R13D;
  int32_t unaff_R14D;
  int32_t unaff_R15D;
  
  unaff_RBX[6] = param_1;
  unaff_RBX[2] = param_2;
  unaff_RBX[4] = unaff_ESI;
  unaff_RBX[7] = (param_2 + 1) / 2;
  iVar2 = (int)unaff_RDI;
  unaff_RBX[5] = in_R10D;
  unaff_RBX[8] = (in_R11D + 1) / 2;
  unaff_RBX[3] = in_R11D;
  *unaff_RBX = unaff_R14D;
  *(int64_t *)(unaff_RBX + 0xe) = unaff_ESI * iVar2 + param_4 + unaff_RDI;
  unaff_RBX[1] = unaff_R15D;
  unaff_RBX[9] = unaff_R12D;
  *(uint64_t *)(unaff_RBX + 10) = 0;
  unaff_RBX[0xc] = 0;
  lVar1 = (iVar2 / 2) * unaff_R12D + param_4 + (int64_t)(iVar2 / 2);
  unaff_RBX[0x19] = iVar2;
  unaff_RBX[0x1a] = unaff_EBP;
  *(uint64_t *)(unaff_RBX + 0x14) = 0;
  unaff_RBX[0x22] = 0;
  *(int64_t *)(unaff_RBX + 0x10) = unaff_R13D + lVar1;
  *(int64_t *)(unaff_RBX + 0x12) = (int64_t)param_3 + (int64_t)unaff_R13D + lVar1;
  return 0;
}



uint64_t FUN_1806980bd(void)

{
  return 0xfffffffe;
}



// WARNING: Removing unreachable block (ram,0x0001806981f9)
// WARNING: Removing unreachable block (ram,0x00018069818a)
// WARNING: Removing unreachable block (ram,0x000180698174)

uint FUN_180698140(int64_t param_1)

{
  uint *puVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint in_XCR0;
  int8_t auStack_38 [32];
  int iStack_18;
  
  GetNativeSystemInfo(auStack_38);
  iVar6 = 1;
  if (0 < iStack_18) {
    iVar6 = iStack_18;
  }
  *(int *)(param_1 + 0x2228) = iVar6;
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar3 = *puVar1;
  uVar8 = 0;
  uVar5 = uVar3;
  if (uVar3 != 0) {
    lVar2 = cpuid_Version_info(1);
    uVar5 = *(uint *)(lVar2 + 8);
    uVar4 = *(uint *)(lVar2 + 0xc);
    uVar7 = (uint)((uVar5 & 0x800000) != 0);
    if ((uVar5 >> 0x19 & 1) != 0) {
      uVar7 = uVar7 | 2;
    }
    if ((uVar5 >> 0x1a & 1) != 0) {
      uVar7 = uVar7 | 4;
    }
    if ((uVar4 & 1) != 0) {
      uVar7 = uVar7 | 8;
    }
    if ((uVar4 >> 9 & 1) != 0) {
      uVar7 = uVar7 | 0x10;
    }
    if ((uVar4 >> 0x13 & 1) != 0) {
      uVar7 = uVar7 | 0x20;
    }
    uVar8 = uVar7;
    uVar5 = uVar5 & 0x800000;
    if ((((uVar4 & 0x18000000) == 0x18000000) && (uVar5 = in_XCR0, ((byte)in_XCR0 & 6) == 6)) &&
       (uVar8 = uVar7 | 0x40, 6 < uVar3)) {
      puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
      uVar5 = *puVar1;
      if ((puVar1[1] & 0x20) != 0) {
        uVar8 = uVar7 | 0xc0;
      }
    }
  }
  *(uint *)(param_1 + 0x2e70) = uVar8;
  return uVar5;
}





// 函数: void FUN_1806982a0(int64_t param_1,int64_t param_2,int param_3)
void FUN_1806982a0(int64_t param_1,int64_t param_2,int param_3)

{
  int iVar1;
  int8_t uVar2;
  int iVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  int8_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  int iVar10;
  int8_t *puVar11;
  int64_t lVar12;
  
  if (*(int *)(param_1 + 0x1924) != *(int *)(param_1 + 0x1928)) {
    FUN_180698800(param_1 + 0xc10);
    *(int32_t *)(param_1 + 0x1924) = *(int32_t *)(param_1 + 0x1928);
  }
  lVar7 = 0;
  puVar11 = (int8_t *)(param_1 + 0x1857);
  puVar5 = (int8_t *)(param_1 + 0x1850);
  lVar12 = 4;
  iVar10 = 0x3f;
  puVar6 = puVar5;
  do {
    iVar9 = param_3;
    if ((*(char *)(param_2 + 0xf60) != '\0') &&
       (iVar9 = (int)*(char *)(lVar7 + 0xf6b + param_2), *(char *)(param_2 + 0xf63) != '\x01')) {
      iVar9 = iVar9 + param_3;
      if (iVar9 < 1) {
        iVar9 = 0;
      }
      else if (0x3f < iVar9) {
        iVar9 = iVar10;
      }
    }
    if (*(char *)(param_2 + 0xf6f) == '\0') {
                    // WARNING: Subroutine does not return
      memset(puVar5,iVar9,0x10);
    }
    iVar1 = *(char *)(param_2 + 0xf75) + iVar9;
    iVar3 = *(char *)(param_2 + 0xf7d) + iVar1;
    if (iVar3 < 1) {
      uVar2 = 0;
    }
    else {
      if (0x3f < iVar3) {
        iVar3 = iVar10;
      }
      uVar2 = (int8_t)iVar3;
    }
    *puVar6 = uVar2;
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      if (0x3f < iVar1) {
        iVar1 = iVar10;
      }
      uVar2 = (int8_t)iVar1;
    }
    puVar6[1] = uVar2;
    lVar8 = 1;
    puVar4 = puVar11;
    do {
      iVar1 = *(char *)(param_2 + 0xf75 + lVar8) + iVar9;
      iVar3 = *(char *)(param_2 + 0xf7e) + iVar1;
      if (iVar3 < 1) {
        uVar2 = 0;
      }
      else {
        if (0x3f < iVar3) {
          iVar3 = iVar10;
        }
        uVar2 = (int8_t)iVar3;
      }
      puVar4[-2] = uVar2;
      iVar3 = *(char *)(param_2 + 0xf7f) + iVar1;
      if (iVar3 < 1) {
        uVar2 = 0;
      }
      else {
        if (0x3f < iVar3) {
          iVar3 = iVar10;
        }
        uVar2 = (int8_t)iVar3;
      }
      puVar4[-1] = uVar2;
      iVar1 = *(char *)(param_2 + 0xf80) + iVar1;
      if (iVar1 < 1) {
        uVar2 = 0;
      }
      else {
        if (0x3f < iVar1) {
          iVar1 = iVar10;
        }
        uVar2 = (int8_t)iVar1;
      }
      *puVar4 = uVar2;
      lVar8 = lVar8 + 1;
      puVar4 = puVar4 + 4;
    } while (lVar8 < 4);
    puVar5 = puVar5 + 0x10;
    lVar7 = lVar7 + 1;
    puVar6 = puVar6 + 0x10;
    puVar11 = puVar11 + 0x10;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}





// 函数: void FUN_180698440(int64_t param_1)
void FUN_180698440(int64_t param_1)

{
  FUN_180698800(param_1 + 0xc10,*(int32_t *)(param_1 + 0x1928));
  *(int32_t *)(param_1 + 0x1924) = *(int32_t *)(param_1 + 0x1928);
  func_0x000180698220(param_1 + 0xc10);
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x1810,0,0x10);
}





// 函数: void FUN_1806984b0(int64_t param_1,byte *param_2,int param_3,int32_t param_4,int32_t param_5,
void FUN_1806984b0(int64_t param_1,byte *param_2,int param_3,int32_t param_4,int32_t param_5,
                  int64_t param_6,int64_t param_7,int64_t param_8)

{
  int64_t lVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t lStack_40;
  
  iVar6 = 0;
  lVar1 = param_1 + 0xc10;
  if (0 < *(int *)(param_1 + 3000)) {
    iVar3 = *(int *)(param_1 + 0xba4);
    do {
      bVar2 = *param_2;
      if (((bVar2 == 4) || (bVar2 == 9)) || (param_2[9] == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      bVar2 = *(byte *)((uint64_t)*(byte *)((uint64_t)bVar2 + 0xd00 + lVar1) + lVar1 + 0xc40 +
                       ((uint64_t)param_2[2] + (uint64_t)param_2[0xb] * 4) * 4);
      uVar5 = (uint64_t)bVar2;
      if (bVar2 != 0) {
        lStack_58 = uVar5 * 0x10 + lVar1;
        lStack_50 = (uVar5 + 0x40) * 0x10 + lVar1;
        lStack_48 = (uVar5 + 0x80) * 0x10 + lVar1;
        lStack_40 = ((uint64_t)*(byte *)(((int64_t)iVar3 + 0x32) * 0x40 + uVar5 + lVar1) + 0xc0) *
                    0x10 + lVar1;
        if (0 < iVar6) {
          FUN_18069cb40(param_6,param_7,param_8,param_4,param_5,&lStack_58);
        }
        if (!bVar4) {
          FUN_18069ca00(param_6,param_7,param_8,param_4,param_5,&lStack_58);
        }
        if (0 < param_3) {
          FUN_18069cad0(param_6,param_7,param_8,param_4,param_5,&lStack_58);
        }
        if (!bVar4) {
          FUN_18069c900(param_6,param_7,param_8,param_4,param_5,&lStack_58);
        }
      }
      param_6 = param_6 + 0x10;
      param_8 = param_8 + 8;
      param_7 = param_7 + 8;
      param_2 = param_2 + 0x4c;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 3000));
  }
  return;
}





// 函数: void FUN_1806984f1(void)
void FUN_1806984f1(void)

{
  byte bVar1;
  bool bVar2;
  int32_t uVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  uint64_t unaff_RBX;
  int64_t lVar5;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar6;
  uint64_t unaff_RDI;
  int64_t lVar7;
  int64_t in_R9;
  int64_t in_R10;
  int32_t unaff_R12D;
  uint64_t unaff_R13;
  byte *unaff_R14;
  int unaff_R15D;
  int8_t *puStack0000000000000028;
  int64_t in_stack_00000030;
  int64_t lStack0000000000000038;
  int64_t lStack0000000000000040;
  int64_t lStack0000000000000048;
  int64_t lStack0000000000000050;
  int64_t lStack0000000000000058;
  int64_t in_stack_000000a0;
  int in_stack_000000b0;
  int32_t in_stack_000000c0;
  int64_t in_stack_000000c8;
  int64_t in_stack_000000d0;
  int64_t in_stack_000000d8;
  
  uVar3 = in_stack_000000c0;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RBP;
  lVar5 = in_stack_000000d0;
  lVar6 = in_stack_000000c8;
  lVar7 = in_stack_000000d8;
  lStack0000000000000038 = in_R10;
  do {
    bVar1 = *unaff_R14;
    if (((bVar1 == 4) || (bVar1 == 9)) || (unaff_R14[9] == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar1 = *(byte *)((uint64_t)*(byte *)((uint64_t)bVar1 + 0xd00 + in_R9) + in_R9 + 0xc40 +
                     ((uint64_t)unaff_R14[2] + (uint64_t)unaff_R14[0xb] * 4) * 4);
    uVar4 = (uint64_t)bVar1;
    if (bVar1 != 0) {
      lStack0000000000000040 = uVar4 * 0x10 + in_R9;
      lStack0000000000000048 = (uVar4 + 0x40) * 0x10 + in_R9;
      lStack0000000000000050 = (uVar4 + 0x80) * 0x10 + in_R9;
      lStack0000000000000058 =
           ((uint64_t)*(byte *)((in_R10 + 0x32) * 0x40 + uVar4 + in_R9) + 0xc0) * 0x10 + in_R9;
      if (0 < unaff_R15D) {
        puStack0000000000000028 = (int8_t *)&stack0x00000040;
        FUN_18069cb40(lVar6,lVar5,lVar7,unaff_R12D,uVar3);
      }
      if (!bVar2) {
        puStack0000000000000028 = (int8_t *)&stack0x00000040;
        FUN_18069ca00(lVar6,lVar5,lVar7,unaff_R12D,uVar3);
      }
      if (0 < in_stack_000000b0) {
        puStack0000000000000028 = (int8_t *)&stack0x00000040;
        FUN_18069cad0(lVar6,lVar5,lVar7,unaff_R12D,uVar3);
      }
      in_R9 = in_stack_00000030;
      in_R10 = lStack0000000000000038;
      if (!bVar2) {
        puStack0000000000000028 = (int8_t *)&stack0x00000040;
        FUN_18069c900(lVar6,lVar5,lVar7,unaff_R12D,uVar3);
        in_R10 = lStack0000000000000038;
      }
    }
    lVar6 = lVar6 + 0x10;
    lVar7 = lVar7 + 8;
    lVar5 = lVar5 + 8;
    unaff_R14 = unaff_R14 + 0x4c;
    unaff_R15D = unaff_R15D + 1;
  } while (unaff_R15D < *(int *)(in_stack_000000a0 + 3000));
  return;
}





// 函数: void FUN_1806986b7(void)
void FUN_1806986b7(void)

{
  return;
}





// 函数: void FUN_1806986d0(int64_t param_1,byte *param_2,int param_3,int32_t param_4,uint64_t param_5,
void FUN_1806986d0(int64_t param_1,byte *param_2,int param_3,int32_t param_4,uint64_t param_5,
                  int64_t param_6)

{
  int64_t lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  lVar1 = param_1 + 0xc10;
  if (0 < *(int *)(param_1 + 3000)) {
    do {
      bVar2 = *param_2;
      if (((bVar2 == 4) || (bVar2 == 9)) || (param_2[9] == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      bVar2 = *(byte *)((uint64_t)*(byte *)((uint64_t)bVar2 + 0xd00 + lVar1) + lVar1 + 0xc40 +
                       ((uint64_t)param_2[2] + (uint64_t)param_2[0xb] * 4) * 4);
      if (bVar2 != 0) {
        uVar5 = (uint)bVar2;
        if (0 < iVar4) {
          func_0x00018001c253(param_6,param_4,(int64_t)(int)uVar5 * 0x10 + lVar1);
        }
        if (!bVar3) {
          FUN_18069ca80(param_6,param_4,((int64_t)(int)uVar5 + 0x40) * 0x10 + lVar1);
        }
        if (0 < param_3) {
          func_0x00018001c10b(param_6,param_4,(int64_t)(int)uVar5 * 0x10 + lVar1);
        }
        if (!bVar3) {
          FUN_18069c990(param_6,param_4,((uint64_t)bVar2 + 0x40) * 0x10 + lVar1);
        }
      }
      param_6 = param_6 + 0x10;
      param_2 = param_2 + 0x4c;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 3000));
  }
  return;
}





// 函数: void FUN_1806986ff(void)
void FUN_1806986ff(void)

{
  byte bVar1;
  bool bVar2;
  byte *unaff_RBX;
  int unaff_EBP;
  int32_t unaff_R12D;
  int64_t unaff_R13;
  uint uVar3;
  int64_t unaff_R15;
  int in_stack_00000060;
  int64_t in_stack_00000078;
  
  do {
    bVar1 = *unaff_RBX;
    if (((bVar1 == 4) || (bVar1 == 9)) || (unaff_RBX[9] == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar1 = *(byte *)((uint64_t)*(byte *)((uint64_t)bVar1 + 0xd00 + unaff_R15) + unaff_R15 + 0xc40
                     + ((uint64_t)unaff_RBX[2] + (uint64_t)unaff_RBX[0xb] * 4) * 4);
    if (bVar1 != 0) {
      uVar3 = (uint)bVar1;
      if (0 < unaff_EBP) {
        func_0x00018001c253(in_stack_00000078,unaff_R12D,(int64_t)(int)uVar3 * 0x10 + unaff_R15);
      }
      if (!bVar2) {
        FUN_18069ca80(in_stack_00000078,unaff_R12D,((int64_t)(int)uVar3 + 0x40) * 0x10 + unaff_R15)
        ;
      }
      if (0 < in_stack_00000060) {
        func_0x00018001c10b(in_stack_00000078,unaff_R12D,(int64_t)(int)uVar3 * 0x10 + unaff_R15);
      }
      if (!bVar2) {
        FUN_18069c990(in_stack_00000078,unaff_R12D,((uint64_t)bVar1 + 0x40) * 0x10 + unaff_R15);
      }
    }
    in_stack_00000078 = in_stack_00000078 + 0x10;
    unaff_RBX = unaff_RBX + 0x4c;
    unaff_EBP = unaff_EBP + 1;
  } while (unaff_EBP < *(int *)(unaff_R13 + 3000));
  return;
}





// 函数: void FUN_1806987ee(void)
void FUN_1806987ee(void)

{
  return;
}





// 函数: void FUN_180698800(int64_t param_1,int param_2)
void FUN_180698800(int64_t param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (0 >> (0 < param_2)) >> (4 < param_2);
  if ((0 < param_2) && (9 - param_2 < iVar1)) {
    iVar1 = 9 - param_2;
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x800,iVar1,0x10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806988d0(int *param_1,int param_2,int param_3)
void FUN_1806988d0(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  uint64_t uVar3;
  int *piVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  double dVar11;
  double dVar12;
  int8_t auStack_1d8 [32];
  char acStack_1b8 [304];
  uint64_t uStack_88;
  
  uStack_88 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  func_0x000180001000();
  iVar9 = 0;
  iVar8 = -0x20;
  dVar11 = (double)sqrt(0x401921fb53c8d4f1);
  do {
    dVar12 = (double)exp();
    iVar5 = (int)(dVar12 * (1.0 / (dVar11 * (((double)(0x3f - param_2) * 0.6) / 63.0 +
                                            (double)param_3 + 0.5))) * 256.0 + 0.5);
    if (iVar5 != 0) {
      iVar7 = 0;
      if (0 < iVar5) {
        pcVar10 = acStack_1b8 + iVar9;
        for (lVar6 = (int64_t)iVar5; iVar7 = iVar5, lVar6 != 0; lVar6 = lVar6 + -1) {
          *pcVar10 = (char)iVar8;
          pcVar10 = pcVar10 + 1;
        }
      }
      iVar9 = iVar9 + iVar7;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  uVar3 = (uint64_t)iVar9;
  while( true ) {
    if (0xff < (int64_t)uVar3) {
      lVar6 = 0xc00;
      piVar4 = param_1 + 2;
      do {
        bVar2 = rand();
        *(char *)piVar4 = acStack_1b8[bVar2];
        lVar6 = lVar6 + -1;
        piVar4 = (int *)((int64_t)piVar4 + 1);
      } while (lVar6 != 0);
      piVar4 = param_1 + 0x308;
      lVar6 = 0x10;
      do {
        *(char *)(piVar4 + -4) = -acStack_1b8[0];
        *(char *)piVar4 = -acStack_1b8[0];
        *(char *)(piVar4 + 4) = acStack_1b8[0] * -2;
        piVar4 = (int *)((int64_t)piVar4 + 1);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *param_1 = param_2;
      param_1[1] = param_3;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_88 ^ (uint64_t)auStack_1d8);
    }
    if (299 < uVar3) break;
    acStack_1b8[uVar3] = '\0';
    uVar3 = uVar3 + 1;
  }
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_1806988f5(int *param_1,int param_2,int param_3)
void FUN_1806988f5(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  uint64_t uVar3;
  int *piVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint64_t unaff_RSI;
  char *pcVar10;
  int64_t in_R11;
  double dVar11;
  double dVar12;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  char acStackX_20 [8];
  uint64_t in_stack_00000150;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_XMM6_Qa;
  *(uint64_t *)(in_R11 + -0x20) = unaff_XMM6_Qb;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM11_Dd;
  func_0x000180001000();
  iVar9 = 0;
  iVar8 = -0x20;
  dVar11 = (double)sqrt(0x401921fb53c8d4f1);
  do {
    dVar12 = (double)exp();
    iVar5 = (int)(dVar12 * (1.0 / (dVar11 * (((double)(0x3f - param_2) * 0.6) / 63.0 +
                                            (double)param_3 + 0.5))) * 256.0 + 0.5);
    if (iVar5 != 0) {
      iVar7 = 0;
      if (0 < iVar5) {
        pcVar10 = acStackX_20 + iVar9;
        for (lVar6 = (int64_t)iVar5; iVar7 = iVar5, lVar6 != 0; lVar6 = lVar6 + -1) {
          *pcVar10 = (char)iVar8;
          pcVar10 = pcVar10 + 1;
        }
      }
      iVar9 = iVar9 + iVar7;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  uVar3 = (uint64_t)iVar9;
  while( true ) {
    if (0xff < (int64_t)uVar3) {
      lVar6 = 0xc00;
      piVar4 = param_1 + 2;
      do {
        bVar2 = rand();
        *(char *)piVar4 = acStackX_20[bVar2];
        lVar6 = lVar6 + -1;
        piVar4 = (int *)((int64_t)piVar4 + 1);
      } while (lVar6 != 0);
      piVar4 = param_1 + 0x308;
      lVar6 = 0x10;
      do {
        *(char *)(piVar4 + -4) = -acStackX_20[0];
        *(char *)piVar4 = -acStackX_20[0];
        *(char *)(piVar4 + 4) = acStackX_20[0] * -2;
        piVar4 = (int *)((int64_t)piVar4 + 1);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *param_1 = param_2;
      param_1[1] = param_3;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(in_stack_00000150 ^ (uint64_t)&stack0x00000000);
    }
    if (299 < uVar3) break;
    acStackX_20[uVar3] = '\0';
    uVar3 = uVar3 + 1;
  }
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_180698a50(void)
void FUN_180698a50(void)

{
  code *pcVar1;
  byte bVar2;
  uint64_t in_RAX;
  char *pcVar3;
  int64_t lVar4;
  int32_t unaff_EBP;
  int32_t *unaff_R14;
  int32_t unaff_R15D;
  char acStackX_20 [8];
  uint64_t in_stack_00000150;
  
  do {
    if (299 < in_RAX) {
      UltraHighFreq_ThreadManager1();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    acStackX_20[in_RAX] = '\0';
    in_RAX = in_RAX + 1;
  } while ((int64_t)in_RAX < 0x100);
  lVar4 = 0xc00;
  pcVar3 = (char *)(unaff_R14 + 2);
  do {
    bVar2 = rand();
    *pcVar3 = acStackX_20[bVar2];
    lVar4 = lVar4 + -1;
    pcVar3 = pcVar3 + 1;
  } while (lVar4 != 0);
  pcVar3 = (char *)(unaff_R14 + 0x308);
  lVar4 = 0x10;
  do {
    pcVar3[-0x10] = -acStackX_20[0];
    *pcVar3 = -acStackX_20[0];
    pcVar3[0x10] = acStackX_20[0] * -2;
    pcVar3 = pcVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *unaff_R14 = unaff_R15D;
  unaff_R14[1] = unaff_EBP;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000150 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180698b00(int32_t *param_1,int param_2)
void FUN_180698b00(int32_t *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 < 0x14) {
    iVar1 = 0x14;
  }
  iVar1 = (iVar1 + -0x32) * 10;
  iVar1 = ((int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3) + 0x32;
  iVar1 = iVar1 * iVar1;
  func_0x000180028ade(*(uint64_t *)(param_1 + 0xe),param_1[4],param_1[1],*param_1,
                      iVar1 / 3 + (iVar1 >> 0x1f) +
                      (int)(((int64_t)iVar1 / 3 + ((int64_t)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)
                     );
  if (param_2 < 0x14) {
    param_2 = 0x14;
  }
  iVar1 = (param_2 + -0x32) * 10;
  iVar1 = ((int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3) + 0x32;
  iVar1 = iVar1 * iVar1;
  func_0x000180028893(*(uint64_t *)(param_1 + 0xe),param_1[4],param_1[1],*param_1,
                      iVar1 / 3 + (iVar1 >> 0x1f) +
                      (int)(((int64_t)iVar1 / 3 + ((int64_t)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)
                     );
  return;
}





// 函数: void FUN_180698bb0(int64_t param_1,int32_t *param_2,int64_t param_3,int param_4)
void FUN_180698bb0(int64_t param_1,int32_t *param_2,int64_t param_3,int param_4)

{
  int64_t lVar1;
  byte bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  double dVar6;
  int iStackX_20;
  
  lVar3 = *(int64_t *)(param_1 + 0xbf8);
  lVar1 = *(int64_t *)(param_1 + 0xb98);
  dVar6 = (double)param_4;
  lVar4 = (*(int *)(param_1 + 3000) << 4) + lVar1;
  iVar5 = (int)((dVar6 * 6e-05 * dVar6 * dVar6 - dVar6 * 0.0067 * dVar6) + dVar6 * 0.306 + 0.0065 +
               0.5);
  if (iVar5 < 1) {
    FUN_18069c540(param_2,param_3);
  }
  else {
    iStackX_20 = 0;
    if (0 < *(int *)(param_1 + 0xbb4)) {
      do {
        if (0 < *(int *)(param_1 + 3000)) {
          bVar2 = (byte)iVar5;
          if (*(char *)(lVar3 + 9) != '\0') {
            bVar2 = bVar2 >> 1;
          }
                    // WARNING: Subroutine does not return
          memset(lVar1,bVar2,0x10);
        }
        lVar3 = lVar3 + 0x4c;
        func_0x0001800285b0((int64_t)(param_2[4] * iStackX_20 * 0x10) +
                            *(int64_t *)(param_2 + 0xe),
                            (int64_t)(*(int *)(param_3 + 0x10) * iStackX_20 * 0x10) +
                            *(int64_t *)(param_3 + 0x38),param_2[4],*(int *)(param_3 + 0x10),
                            *param_2,lVar1,0x10);
        func_0x0001800285b0((int64_t)(param_2[9] * iStackX_20 * 8) + *(int64_t *)(param_2 + 0x10),
                            (int64_t)(*(int *)(param_3 + 0x24) * iStackX_20 * 8) +
                            *(int64_t *)(param_3 + 0x40),param_2[9],*(int *)(param_3 + 0x24),
                            param_2[5],lVar4,8);
        func_0x0001800285b0((int64_t)(param_2[9] * iStackX_20 * 8) + *(int64_t *)(param_2 + 0x12),
                            (int64_t)(*(int *)(param_3 + 0x24) * iStackX_20 * 8) +
                            *(int64_t *)(param_3 + 0x48),param_2[9],*(int *)(param_3 + 0x24),
                            param_2[5],lVar4,8);
        iStackX_20 = iStackX_20 + 1;
      } while (iStackX_20 < *(int *)(param_1 + 0xbb4));
      return;
    }
  }
  return;
}





