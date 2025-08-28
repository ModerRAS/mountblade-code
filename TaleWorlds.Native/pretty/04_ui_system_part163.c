#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part163.c - 4 个函数

// 函数: void FUN_1807632c0(float *param_1,char param_2,int param_3,int param_4,float param_5)
void FUN_1807632c0(float *param_1,char param_2,int param_3,int param_4,float param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int8_t auStack_1b8 [32];
  uint uStack_198;
  uint64_t uStack_190;
  float fStack_17c;
  uint auStack_178 [12];
  int8_t auStack_148 [256];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1b8;
  iVar7 = 0;
  auStack_178[0] = 0;
  uStack_190 = 7;
  auStack_178[3] = 7;
  uVar6 = 0xffffffff;
  auStack_178[1] = 1;
  auStack_178[2] = 3;
  auStack_178[4] = 0x33;
  auStack_178[5] = 0x37;
  auStack_178[6] = 0x3f;
  auStack_178[7] = 0xf7;
  auStack_178[8] = 0xff;
  lVar4 = (int64_t)param_3;
  if (param_3 < 9) {
    uStack_198 = auStack_178[lVar4];
  }
  else {
    uStack_198 = 0xffffffff;
  }
  auStack_178[0] = 0;
  auStack_178[1] = 1;
  auStack_178[2] = 3;
  auStack_178[3] = 7;
  auStack_178[4] = 0x33;
  auStack_178[5] = 0x37;
  auStack_178[6] = 0x3f;
  auStack_178[7] = 0xf7;
  auStack_178[8] = 0xff;
  if (param_4 < 9) {
    uVar6 = auStack_178[param_4];
  }
  if ((param_4 == param_3) || (param_2 != '\0')) {
    if (0 < lVar4) {
      do {
        *param_1 = param_5;
        param_1 = param_1 + 0x21;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  else {
    if (param_3 != 1) {
      if ((param_4 != 0xc) && (uStack_190 = 7, 8 < param_4)) {
        uStack_190 = 1;
      }
                    // WARNING: Subroutine does not return
      memset(auStack_148,0,0x100);
    }
    iVar3 = 0;
    auStack_178[0] = 0x3f800000;
    auStack_178[1] = 0x3f3504f3;
    auStack_178[2] = 0x3f13cd3a;
    auStack_178[3] = 0x3f000000;
    auStack_178[4] = 0x3ee4f92e;
    auStack_178[5] = 0x3ed105ec;
    auStack_178[6] = 0x3ec1848f;
    auStack_178[7] = 0x3eb504f3;
    iVar5 = 0;
    do {
      iVar1 = iVar5;
      if (param_4 <= iVar5) break;
      bVar2 = (byte)iVar3;
      iVar3 = iVar3 + 1;
      iVar1 = iVar5 + 1;
      if (((uVar6 & 0xfffffff7) >> (bVar2 & 0x1f) & 1) == 0) {
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar3 < 8);
    if (0 < param_4) {
      do {
        if (7 < iVar7) break;
        if ((1 << ((byte)iVar7 & 0x1f) & uVar6) != 8) {
          *param_1 = param_5 * (&fStack_17c)[iVar1];
        }
        iVar7 = iVar7 + 1;
        param_1 = param_1 + 1;
      } while (iVar7 < param_4);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_1b8);
}





// 函数: void FUN_180763448(void)
void FUN_180763448(void)

{
                    // WARNING: Subroutine does not return
  memset(&stack0x00000070,0,0x100);
}





// 函数: void FUN_1807635bb(void)
void FUN_1807635bb(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x70) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1807636f0(void)
void FUN_1807636f0(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}





