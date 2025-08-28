#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part087.c - 17 个函数

// 函数: void FUN_18071ab20(int64_t param_1,int param_2,int param_3,int64_t param_4,int64_t param_5,
void FUN_18071ab20(int64_t param_1,int param_2,int param_3,int64_t param_4,int64_t param_5,
                  int64_t param_6,uint64_t param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  int *piVar10;
  float fVar11;
  int8_t auVar12 [16];
  
  uVar9 = (uint64_t)param_2;
  if (param_2 < param_3) {
    piVar10 = (int *)(param_6 + uVar9 * 4);
    do {
      iVar8 = (int)uVar9;
      if (0 < *piVar10) {
        iVar2 = (int)(short)(1 << ((byte)*piVar10 & 0x1f));
        iVar7 = 0;
        iVar1 = iVar2 + -1;
        do {
          iVar3 = *(int *)(param_1 + 8) * iVar7 + iVar8;
          fVar11 = (*(float *)(param_5 + (int64_t)iVar3 * 4) + 0.5) * (float)iVar2;
          auVar12._0_8_ = (double)fVar11;
          lVar5 = (int64_t)fVar11;
          if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar12._0_8_)) {
            auVar12._8_8_ = auVar12._0_8_;
            uVar4 = movmskpd(iVar3,auVar12);
            auVar12._0_8_ = (double)(int64_t)(lVar5 - (uint64_t)(uVar4 & 1));
          }
          iVar3 = iVar1;
          if ((int)auVar12._0_8_ <= iVar1) {
            iVar3 = (int)auVar12._0_8_;
          }
          iVar6 = 0;
          if (-1 < iVar3) {
            iVar6 = iVar3;
          }
          FUN_180705180(param_7,iVar6,*piVar10);
          lVar5 = (int64_t)(*(int *)(param_1 + 8) * iVar7 + iVar8);
          fVar11 = (float)(1 << (0xeU - (char)*piVar10 & 0x1f)) * ((float)iVar6 + 0.5) *
                   6.1035156e-05 - 0.5;
          *(float *)(param_4 + lVar5 * 4) = fVar11 + *(float *)(param_4 + lVar5 * 4);
          iVar3 = *(int *)(param_1 + 8) * iVar7;
          iVar7 = iVar7 + 1;
          lVar5 = (int64_t)(iVar3 + iVar8);
          *(float *)(param_5 + lVar5 * 4) = *(float *)(param_5 + lVar5 * 4) - fVar11;
        } while (iVar7 < param_8);
      }
      uVar9 = (uint64_t)(iVar8 + 1U);
      piVar10 = piVar10 + 1;
    } while ((int)(iVar8 + 1U) < param_3);
  }
  return;
}





// 函数: void FUN_18071ab41(void)
void FUN_18071ab41(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int64_t in_RAX;
  int64_t lVar5;
  int iVar6;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int iVar7;
  uint64_t unaff_RSI;
  int iVar8;
  uint64_t unaff_RDI;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t unaff_R14;
  int *piVar9;
  uint64_t unaff_R15;
  float fVar10;
  int8_t auVar11 [16];
  double dVar12;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint64_t unaff_XMM7_Qa;
  uint64_t unaff_XMM7_Qb;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int in_stack_00000090;
  int64_t in_stack_000000a0;
  int64_t in_stack_000000a8;
  uint64_t in_stack_000000b0;
  int in_stack_000000b8;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(uint64_t *)(in_RAX + -0x48) = unaff_XMM7_Qa;
  *(uint64_t *)(in_RAX + -0x40) = unaff_XMM7_Qb;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  piVar9 = (int *)(in_stack_000000a8 + unaff_RDI * 4);
  do {
    iVar8 = (int)unaff_RDI;
    if (0 < *piVar9) {
      iVar2 = (int)(short)(1 << ((byte)*piVar9 & 0x1f));
      iVar7 = 0;
      iVar1 = iVar2 + -1;
      do {
        dVar12 = 0.0;
        iVar3 = *(int *)(unaff_RBP + 8) * iVar7 + iVar8;
        fVar10 = (*(float *)(in_stack_000000a0 + (int64_t)iVar3 * 4) + 0.5) * (float)iVar2;
        auVar11._0_8_ = (double)fVar10;
        lVar5 = (int64_t)fVar10;
        if ((lVar5 != -0x8000000000000000) && (dVar12 = (double)lVar5, dVar12 != auVar11._0_8_)) {
          auVar11._8_8_ = auVar11._0_8_;
          uVar4 = movmskpd(iVar3,auVar11);
          auVar11._0_8_ = (double)(int64_t)(lVar5 - (uint64_t)(uVar4 & 1));
        }
        iVar3 = iVar1;
        if ((int)auVar11._0_8_ <= iVar1) {
          iVar3 = (int)auVar11._0_8_;
        }
        iVar6 = 0;
        if (-1 < iVar3) {
          iVar6 = iVar3;
        }
        FUN_180705180(in_stack_000000b0,iVar6,dVar12);
        lVar5 = (int64_t)(*(int *)(unaff_RBP + 8) * iVar7 + iVar8);
        fVar10 = (float)(1 << (0xeU - (char)*piVar9 & 0x1f)) * ((float)iVar6 + 0.5) * 6.1035156e-05
                 - 0.5;
        *(float *)(unaff_R13 + lVar5 * 4) = fVar10 + *(float *)(unaff_R13 + lVar5 * 4);
        iVar3 = *(int *)(unaff_RBP + 8) * iVar7;
        iVar7 = iVar7 + 1;
        lVar5 = (int64_t)(iVar3 + iVar8);
        *(float *)(in_stack_000000a0 + lVar5 * 4) =
             *(float *)(in_stack_000000a0 + lVar5 * 4) - fVar10;
      } while (iVar7 < in_stack_000000b8);
    }
    unaff_RDI = (uint64_t)(iVar8 + 1U);
    piVar9 = piVar9 + 1;
  } while ((int)(iVar8 + 1U) < in_stack_00000090);
  return;
}





// 函数: void FUN_18071ace8(void)
void FUN_18071ace8(void)

{
  return;
}





// 函数: void FUN_18071ad00(int64_t param_1,int param_2,int param_3,int64_t param_4,int param_5,
void FUN_18071ad00(int64_t param_1,int param_2,int param_3,int64_t param_4,int param_5,
                  int64_t param_6,int param_7,int param_8)

{
  int64_t lVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float afStack_68 [16];
  
  lVar6 = (int64_t)param_8;
  afStack_68[0] = 0.0;
  afStack_68[1] = 0.0;
  lVar1 = (int64_t)param_5 + lVar6 * 2;
  fVar12 = 0.0;
  if (param_5 == 0) {
    fVar11 = *(float *)(&processed_var_9488_ptr + lVar6 * 4);
    fVar12 = *(float *)(&processed_var_9472_ptr + lVar6 * 4);
  }
  else {
    fVar11 = 0.1499939;
  }
  iVar3 = *(int *)(param_6 + 8);
  if (param_2 < param_3) {
    do {
      pfVar7 = afStack_68;
      iVar8 = 0;
      do {
        iVar5 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = iVar3 * 8 + 1 + (iVar5 - *(int *)(param_6 + 0x18));
        if (iVar5 < 0xf) {
          if (iVar5 < 2) {
            if (iVar5 < 1) {
              uVar4 = 0xffffffff;
            }
            else {
              iVar5 = FUN_18070f310(param_6,1);
              uVar4 = -iVar5;
            }
          }
          else {
            uVar4 = SystemCore_Processor(param_6,&processed_var_9124_ptr,2);
            uVar4 = -(uVar4 & 1) ^ (int)uVar4 >> 1;
          }
        }
        else {
          iVar5 = 0x14;
          if (param_2 < 0x14) {
            iVar5 = param_2;
          }
          uVar4 = FUN_180722f80(param_6,(uint64_t)
                                        (byte)(&processed_var_9136_ptr)[(int64_t)(iVar5 * 2) + lVar1 * 0x2a]
                                        << 7,
                                (uint64_t)
                                (byte)(&processed_var_9136_ptr)[(int64_t)(iVar5 * 2) + 1 + lVar1 * 0x2a] <<
                                6);
        }
        fVar2 = *pfVar7;
        fVar10 = (float)(int)uVar4;
        lVar6 = (int64_t)(iVar8 * *(int *)(param_1 + 8) + param_2);
        iVar5 = iVar8 + 1;
        fVar9 = *(float *)(param_4 + lVar6 * 4);
        if (fVar9 <= -9.0) {
          fVar9 = -9.0;
        }
        *(float *)(param_4 + lVar6 * 4) = fVar9;
        lVar6 = (int64_t)(iVar8 * *(int *)(param_1 + 8) + param_2);
        *(float *)(param_4 + lVar6 * 4) = fVar12 * *(float *)(param_4 + lVar6 * 4) + fVar2 + fVar10;
        *pfVar7 = (fVar2 + fVar10) - fVar10 * fVar11;
        pfVar7 = pfVar7 + 1;
        iVar8 = iVar5;
      } while (iVar5 < param_7);
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}





// 函数: void FUN_18071ad94(float param_1)
void FUN_18071ad94(float param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  float *pfVar5;
  int iVar6;
  int unaff_EDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int unaff_R14D;
  int64_t unaff_R15;
  float fVar7;
  float fVar8;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float afStackX_20 [2];
  int in_stack_000000a0;
  int in_stack_000000c0;
  
  do {
    pfVar5 = afStackX_20;
    iVar6 = 0;
    do {
      iVar3 = 0x1f;
      if (*(uint *)(unaff_RBX + 0x20) != 0) {
        for (; *(uint *)(unaff_RBX + 0x20) >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = unaff_R14D * 8 + 1 + (iVar3 - *(int *)(unaff_RBX + 0x18));
      if (iVar3 < 0xf) {
        if (iVar3 < 2) {
          if (iVar3 < 1) {
            uVar2 = 0xffffffff;
          }
          else {
            iVar3 = FUN_18070f310(param_1,1);
            uVar2 = -iVar3;
          }
        }
        else {
          uVar2 = SystemCore_Processor(param_1,&processed_var_9124_ptr,2);
          uVar2 = -(uVar2 & 1) ^ (int)uVar2 >> 1;
        }
      }
      else {
        iVar3 = 0x14;
        if (unaff_EDI < 0x14) {
          iVar3 = unaff_EDI;
        }
        uVar2 = FUN_180722f80(param_1,(uint64_t)*(byte *)(iVar3 * 2 + unaff_R15) << 7,
                              (uint64_t)*(byte *)((int64_t)(iVar3 * 2) + 1 + unaff_R15) << 6);
      }
      fVar1 = *pfVar5;
      fVar8 = (float)(int)uVar2;
      lVar4 = (int64_t)(iVar6 * *(int *)(unaff_R13 + 8) + unaff_EDI);
      iVar3 = iVar6 + 1;
      fVar7 = *(float *)(unaff_R12 + lVar4 * 4);
      if (fVar7 <= -9.0) {
        fVar7 = -9.0;
      }
      *(float *)(unaff_R12 + lVar4 * 4) = fVar7;
      lVar4 = (int64_t)(iVar6 * *(int *)(unaff_R13 + 8) + unaff_EDI);
      param_1 = unaff_XMM7_Da * *(float *)(unaff_R12 + lVar4 * 4) + fVar1 + fVar8;
      *(float *)(unaff_R12 + lVar4 * 4) = param_1;
      *pfVar5 = (fVar1 + fVar8) - fVar8 * unaff_XMM6_Da;
      pfVar5 = pfVar5 + 1;
      iVar6 = iVar3;
    } while (iVar3 < in_stack_000000c0);
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < in_stack_000000a0);
  return;
}





// 函数: void FUN_18071aedb(void)
void FUN_18071aedb(void)

{
  return;
}





// 函数: void FUN_18071af00(int64_t param_1,int param_2,int param_3,int64_t param_4,int64_t param_5,
void FUN_18071af00(int64_t param_1,int param_2,int param_3,int64_t param_4,int64_t param_5,
                  int64_t param_6,int param_7,uint64_t param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iStack_78;
  
  lVar3 = (int64_t)param_2;
  iStack_78 = 0;
  do {
    if (lVar3 < param_3) {
      piVar4 = (int *)(param_5 + lVar3 * 4);
      lVar8 = lVar3;
      iVar5 = param_2;
      do {
        if (param_7 < param_9) break;
        if ((*piVar4 < 8) && (*(int *)((param_6 - param_5) + (int64_t)piVar4) == iStack_78)) {
          iVar6 = 0;
          do {
            iVar1 = FUN_18070f360(param_8,1);
            iVar2 = *(int *)(param_1 + 8) * iVar6;
            param_7 = param_7 + -1;
            iVar6 = iVar6 + 1;
            lVar7 = (int64_t)(iVar2 + iVar5);
            *(float *)(param_4 + lVar7 * 4) =
                 (float)(1 << (0xdU - (char)*piVar4 & 0x1f)) * ((float)iVar1 - 0.5) * 6.1035156e-05
                 + *(float *)(param_4 + lVar7 * 4);
          } while (iVar6 < param_9);
        }
        iVar5 = iVar5 + 1;
        lVar8 = lVar8 + 1;
        piVar4 = piVar4 + 1;
      } while (lVar8 < param_3);
    }
    iStack_78 = iStack_78 + 1;
    if (1 < iStack_78) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18071b080(int64_t param_1,int param_2,int param_3,int64_t param_4,int64_t param_5,
void FUN_18071b080(int64_t param_1,int param_2,int param_3,int64_t param_4,int64_t param_5,
                  uint64_t param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t lVar7;
  
  uVar5 = (uint64_t)param_2;
  if ((int64_t)uVar5 < (int64_t)param_3) {
    lVar4 = (int64_t)param_3 - uVar5;
    piVar3 = (int *)(param_5 + uVar5 * 4);
    do {
      if (0 < *piVar3) {
        iVar6 = 0;
        do {
          iVar1 = FUN_18070f360(param_6,*piVar3);
          iVar2 = *(int *)(param_1 + 8) * iVar6;
          iVar6 = iVar6 + 1;
          lVar7 = (int64_t)(iVar2 + (int)uVar5);
          *(float *)(param_4 + lVar7 * 4) =
               ((float)(1 << (0xeU - (char)*piVar3 & 0x1f)) * ((float)iVar1 + 0.5) * 6.1035156e-05 +
               *(float *)(param_4 + lVar7 * 4)) - 0.5;
        } while (iVar6 < param_7);
      }
      uVar5 = (uint64_t)((int)uVar5 + 1);
      piVar3 = piVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}





// 函数: void FUN_18071b0a2(void)
void FUN_18071b0a2(void)

{
  int iVar1;
  int64_t in_RAX;
  int iVar2;
  uint64_t unaff_RBX;
  int *piVar3;
  int64_t unaff_RBP;
  int64_t lVar4;
  uint64_t unaff_RSI;
  int iVar5;
  uint64_t unaff_RDI;
  int64_t lVar6;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int64_t in_stack_00000090;
  uint64_t in_stack_00000098;
  int in_stack_000000a0;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  lVar4 = unaff_RBP - unaff_RSI;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  piVar3 = (int *)(in_stack_00000090 + unaff_RSI * 4);
  do {
    if (0 < *piVar3) {
      iVar5 = 0;
      do {
        iVar1 = FUN_18070f360(in_stack_00000098,*piVar3);
        iVar2 = *(int *)(unaff_R15 + 8) * iVar5;
        iVar5 = iVar5 + 1;
        lVar6 = (int64_t)(iVar2 + (int)unaff_RSI);
        *(float *)(unaff_R14 + lVar6 * 4) =
             ((float)(1 << (0xeU - (char)*piVar3 & 0x1f)) * ((float)iVar1 + 0.5) * 6.1035156e-05 +
             *(float *)(unaff_R14 + lVar6 * 4)) - 0.5;
      } while (iVar5 < in_stack_000000a0);
    }
    unaff_RSI = (uint64_t)((int)unaff_RSI + 1);
    piVar3 = piVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}





// 函数: void FUN_18071b182(void)
void FUN_18071b182(void)

{
  return;
}





// 函数: void FUN_18071b190(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_18071b190(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
                    // WARNING: Subroutine does not return
  memcpy(param_1 + ((int64_t)*(int *)(param_1 + 0x124) + 0x54) * 2,param_3,
         (int64_t)(*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x124)) * 2);
}





// 函数: void FUN_18071b320(uint64_t param_1)
void FUN_18071b320(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  memset(param_1,0,0x130);
}



int FUN_18071b660(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  if (uVar1 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar7 = 0x1f - iVar7;
  }
  iVar8 = param_1 << ((byte)(iVar7 + -1) & 0x1f);
  uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (uVar1 == 0) {
    iVar6 = 0x20;
  }
  else {
    iVar6 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar6 = 0x1f - iVar6;
  }
  iVar5 = param_2 << ((byte)(iVar6 + -1) & 0x1f);
  lVar4 = (int64_t)(short)(0x1fffffff / (int64_t)(iVar5 >> 0x10));
  iVar3 = (int)((uint64_t)(iVar8 * lVar4) >> 0x10);
  iVar3 = (int)((uint64_t)
                (lVar4 * (iVar8 + (int)((uint64_t)((int64_t)iVar3 * (int64_t)iVar5) >> 0x20) * -8
                         )) >> 0x10) + iVar3;
  iVar7 = (((iVar7 + -1) - (iVar6 + -1)) - param_3) + 0x1d;
  if (iVar7 < 0) {
    bVar2 = -(byte)iVar7;
    iVar7 = -0x80000000 >> (bVar2 & 0x1f);
    iVar8 = 0x7fffffff >> (bVar2 & 0x1f);
    if (iVar8 < iVar7) {
      if (iVar3 <= iVar7) {
        if (iVar8 <= iVar3) {
          iVar8 = iVar3;
        }
        return iVar8 << (bVar2 & 0x1f);
      }
    }
    else {
      if (iVar8 < iVar3) {
        return iVar8 << (bVar2 & 0x1f);
      }
      if (iVar7 <= iVar3) {
        iVar7 = iVar3;
      }
    }
    return iVar7 << (bVar2 & 0x1f);
  }
  if (iVar7 < 0x20) {
    return iVar3 >> ((byte)iVar7 & 0x1f);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18071b790(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18071b790(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int in_stack_00000058;
  int8_t auStack_a8 [24];
  uint64_t uStack_90;
  int iStack_70;
  uint64_t uStack_60;
  uint64_t uStack_48;
  int64_t lStack_40;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  lStack_40 = param_2 + -4;
  uVar1 = ((int64_t)in_stack_00000058 + 2) * 2;
  iStack_70 = in_stack_00000058;
  uVar2 = uVar1 + 0xf;
  if (uVar2 <= uVar1) {
    uVar2 = 0xffffffffffffff0;
  }
  uStack_90 = param_4;
  uStack_60 = param_3;
  uStack_48 = param_1;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(uVar2 & 0xfffffffffffffff0,param_2,0xffffffffffffff0,param_3);
}





// 函数: void FUN_18071bfe0(uint64_t param_1,char *param_2)
void FUN_18071bfe0(uint64_t param_1,char *param_2)

{
  int64_t lVar1;
  
  RenderingSystem_VertexBuffer(param_1,param_2[2] * 5 + (int)param_2[5],&processed_var_9648_ptr,8);
  lVar1 = 2;
  do {
    RenderingSystem_VertexBuffer(param_1,(int)*param_2,&processed_var_9556_ptr,8);
    RenderingSystem_VertexBuffer(param_1,(int)param_2[1],&processed_var_9564_ptr,8);
    param_2 = param_2 + 3;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



uint64_t FUN_18071c1b0(int64_t param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  void *puVar4;
  int64_t lVar5;
  int iVar6;
  
  iVar1 = 80000;
  if ((param_2 < 0x13881) && (iVar1 = param_2, param_2 < 5000)) {
    iVar1 = 5000;
  }
  if (iVar1 != *(int *)(param_1 + 0x11fc)) {
    *(int *)(param_1 + 0x11fc) = iVar1;
    if (*(int *)(param_1 + 0x11dc) == 8) {
      puVar4 = &processed_var_9704_ptr;
    }
    else {
      puVar4 = &processed_var_9736_ptr;
      if (*(int *)(param_1 + 0x11dc) != 0xc) {
        puVar4 = &processed_var_9768_ptr;
      }
    }
    iVar3 = 1;
    iVar6 = iVar1 + -0x898;
    if (*(int *)(param_1 + 0x11e0) != 2) {
      iVar6 = iVar1;
    }
    lVar2 = 1;
    while (*(int *)(puVar4 + lVar2 * 4) < iVar6) {
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
      if (7 < lVar2) {
        return 0;
      }
    }
    lVar5 = (int64_t)iVar3;
    *(int *)(param_1 + 0x1274) =
         ((iVar6 * 0x40 + *(int *)(puVar4 + lVar5 * 4 + -4) * -0x40) /
         (*(int *)(puVar4 + lVar2 * 4) - *(int *)(puVar4 + lVar5 * 4 + -4))) *
         ((int)*(short *)(&processed_var_9800_ptr + lVar5 * 2) - (int)*(short *)(&processed_var_9798_ptr + lVar5 * 2))
         + *(short *)(&processed_var_9798_ptr + lVar5 * 2) * 0x40;
  }
  return 0;
}



uint64_t FUN_18071c23f(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int iVar1;
  int64_t unaff_RBX;
  int in_R10D;
  int in_R11D;
  
  iVar1 = *(int *)(param_2 + -4 + param_3 * 4);
  *(int *)(unaff_RBX + 0x1274) =
       ((in_R11D + iVar1 * -0x40) / (in_R10D - iVar1)) *
       ((int)*(short *)(&processed_var_9800_ptr + param_3 * 2) -
       (int)*(short *)(&processed_var_9798_ptr + param_3 * 2)) +
       *(short *)(&processed_var_9798_ptr + param_3 * 2) * 0x40;
  return 0;
}



uint64_t FUN_18071c285(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18071c290(uint64_t param_1,int32_t param_2,int32_t param_3,int64_t param_4,
void FUN_18071c290(uint64_t param_1,int32_t param_2,int32_t param_3,int64_t param_4,
                  int param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int32_t auStack_b8 [6];
  int32_t uStack_a0;
  int iStack_9c;
  int64_t lStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uStack_78 = 0;
  iVar3 = param_5 >> 4;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  iStack_9c = param_5;
  if (iVar3 << 4 < param_5) {
    iVar3 = iVar3 + 1;
    *(uint64_t *)(param_5 + param_4) = 0;
    *(uint64_t *)((int64_t)param_5 + 8 + param_4) = 0;
  }
  uVar1 = (int64_t)(iVar3 << 4) * 4;
  uVar2 = uVar1 + 0xf;
  if (uVar2 <= uVar1) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_b8[0] = param_2;
  uStack_a0 = param_3;
  lStack_88 = param_4;
  uStack_80 = param_1;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(uVar2 & 0xfffffffffffffff0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18071c7f0(int64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5)
void FUN_18071c7f0(int64_t param_1,uint64_t param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  short sVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  short *psVar11;
  void *puVar12;
  int iVar13;
  int8_t auStack_98 [32];
  int8_t auStack_78 [16];
  short asStack_68 [16];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  if (param_4 == 0) {
    pcVar9 = (char *)(param_1 + 0x1288);
  }
  else {
    pcVar9 = (char *)(param_1 + (int64_t)param_3 * 0x24 + 0x17e0);
  }
  iVar10 = (int)pcVar9[0x1e] + pcVar9[0x1d] * 2;
  if ((param_4 == 0) && (iVar10 < 2)) {
    puVar12 = &processed_var_9612_ptr;
  }
  else {
    iVar10 = iVar10 + -2;
    puVar12 = &processed_var_9608_ptr;
  }
  RenderingSystem_VertexBuffer(param_2,iVar10,puVar12,8);
  uVar5 = (uint)*pcVar9;
  if (param_5 == 2) {
    puVar12 = &processed_var_4120_ptr;
  }
  else {
    RenderingSystem_VertexBuffer(param_2,(int)uVar5 >> 3,&processed_var_4096_ptr + (int64_t)pcVar9[0x1d] * 8,8);
    puVar12 = &processed_var_9592_ptr;
    uVar5 = (int)*pcVar9 & 7;
  }
  RenderingSystem_VertexBuffer(param_2,uVar5,puVar12,8);
  iVar10 = 1;
  pcVar8 = pcVar9;
  if (1 < *(int *)(param_1 + 0x11e0)) {
    do {
      RenderingSystem_VertexBuffer(param_2,(int)pcVar8[1],&processed_var_4120_ptr,8);
      iVar10 = iVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x11e0));
  }
  pcVar8 = pcVar9 + 8;
  RenderingSystem_VertexBuffer(param_2,(int)*pcVar8,
                (int64_t)(((int)pcVar9[0x1d] >> 1) * (int)**(short **)(param_1 + 0x1258)) +
                *(int64_t *)(*(short **)(param_1 + 0x1258) + 0xc),8);
  FUN_1807248c0(asStack_68,auStack_78,*(uint64_t *)(param_1 + 0x1258),(int)*pcVar8);
  lVar4 = *(int64_t *)(param_1 + 0x1258);
  iVar10 = 0;
  iVar13 = 0;
  if (0 < *(short *)(lVar4 + 2)) {
    pcVar7 = pcVar9 + 9;
    psVar11 = asStack_68;
    do {
      cVar1 = pcVar7[(int64_t)(pcVar9 + (8 - (int64_t)pcVar8))];
      puVar12 = (void *)((int64_t)*psVar11 + *(int64_t *)(lVar4 + 0x30));
      if (cVar1 < '\x04') {
        if (cVar1 < -3) {
          RenderingSystem_VertexBuffer(param_2,0,puVar12,8);
          puVar12 = &processed_var_9580_ptr;
          iVar6 = -4 - *pcVar7;
        }
        else {
          iVar6 = cVar1 + 4;
        }
      }
      else {
        RenderingSystem_VertexBuffer(param_2,8,puVar12,8);
        puVar12 = &processed_var_9580_ptr;
        iVar6 = *pcVar7 + -4;
      }
      RenderingSystem_VertexBuffer(param_2,iVar6,puVar12,8);
      lVar4 = *(int64_t *)(param_1 + 0x1258);
      iVar13 = iVar13 + 1;
      psVar11 = psVar11 + 1;
      pcVar7 = pcVar7 + 1;
    } while (iVar13 < *(short *)(lVar4 + 2));
  }
  if (*(int *)(param_1 + 0x11e0) == 4) {
    RenderingSystem_VertexBuffer(param_2,(int)pcVar9[0x1f],&processed_var_9696_ptr,8);
  }
  if (pcVar9[0x1d] != '\x02') goto LAB_18071cb6a;
  if ((param_5 == 2) && (*(int *)(param_1 + 0x1690) == 2)) {
    iVar13 = (int)*(short *)(pcVar9 + 0x1a) - (int)*(short *)(param_1 + 0x1694);
    uVar5 = iVar13 + 8;
    iVar13 = iVar13 + 9;
    if (0x13 < uVar5) {
      iVar13 = 0;
    }
    RenderingSystem_VertexBuffer(param_2,iVar13,&processed_var_4200_ptr,8);
    if (0x13 < uVar5) goto LAB_18071ca80;
  }
  else {
LAB_18071ca80:
    sVar2 = *(short *)(pcVar9 + 0x1a);
    iVar13 = *(int *)(param_1 + 0x11dc) >> 1;
    uVar3 = (int64_t)(int)sVar2 / (int64_t)iVar13;
    RenderingSystem_VertexBuffer(param_2,uVar3 & 0xffffffff,&processed_var_4168_ptr,8);
    RenderingSystem_VertexBuffer(param_2,(int)sVar2 - (int)(short)iVar13 * (int)(short)uVar3,
                  *(uint64_t *)(param_1 + 0x1248),8);
  }
  *(int16_t *)(param_1 + 0x1694) = *(int16_t *)(pcVar9 + 0x1a);
  RenderingSystem_VertexBuffer(param_2,(int)pcVar9[0x1c],*(uint64_t *)(param_1 + 0x1250),8);
  RenderingSystem_VertexBuffer(param_2,(int)pcVar9[0x20],&processed_var_4304_ptr,8);
  if (0 < *(int *)(param_1 + 0x11e0)) {
    pcVar8 = pcVar9 + 4;
    do {
      RenderingSystem_VertexBuffer(param_2,(int)*pcVar8,
                    *(uint64_t *)(&processed_var_4312_ptr + (int64_t)pcVar9[0x20] * 8),8);
      iVar10 = iVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x11e0));
  }
  if (param_5 == 0) {
    RenderingSystem_VertexBuffer(param_2,(int)pcVar9[0x21],&processed_var_9588_ptr,8);
  }
LAB_18071cb6a:
  *(int *)(param_1 + 0x1690) = (int)pcVar9[0x1d];
  RenderingSystem_VertexBuffer(param_2,(int)pcVar9[0x22],&processed_var_9560_ptr,8);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_98);
}





// 函数: void FUN_18071cbc0(int64_t param_1)
void FUN_18071cbc0(int64_t param_1)

{
  int64_t lVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x11b9) != '\x02') {
    return;
  }
  lVar1 = (int64_t)(*(int *)(param_1 + 0x11dc) * 0x3e80000);
  iVar3 = func_0x00018070b980(lVar1 / (int64_t)*(int *)(param_1 + 0x11bc) & 0xffffffff,
                              lVar1 % (int64_t)*(int *)(param_1 + 0x11bc) & 0xffffffff);
  iVar4 = *(int *)(param_1 + 0x1260);
  sVar2 = func_0x00018070b980(0x3c0000);
  iVar4 = (iVar3 + -0x800 +
          (int)((uint64_t)
                ((int64_t)(short)(((short)(iVar3 + -0x800) - sVar2) + 0x800) *
                (int64_t)
                (int)((uint64_t)((int64_t)(short)iVar4 * (int64_t)(iVar4 * -4)) >> 0x10)) >> 0x10
               )) - (*(int *)(param_1 + 8) >> 8);
  if (iVar4 < 0) {
    iVar4 = iVar4 * 3;
  }
  if (iVar4 < 0x34) {
    sVar2 = (short)iVar4;
    if (iVar4 < -0x33) {
      sVar2 = -0x33;
    }
  }
  else {
    sVar2 = 0x33;
  }
  *(int *)(param_1 + 8) =
       (int)((uint64_t)((int64_t)((int)sVar2 * (int)*(short *)(param_1 + 0x11b0)) * 0x199a) >>
            0x10) + *(int *)(param_1 + 8);
  iVar4 = func_0x00018070b980(100);
  iVar3 = func_0x00018070b980(0x3c);
  if (iVar4 * 0x100 < iVar3 * 0x100) {
    iVar3 = func_0x00018070b980(0x3c);
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == iVar3 * 0x100 || SBORROW4(iVar4,iVar3 * 0x100) != iVar4 + iVar3 * -0x100 < 0) {
      iVar3 = func_0x00018070b980(100);
      iVar4 = *(int *)(param_1 + 8);
      if (iVar4 < iVar3 * 0x100) goto LAB_18071cce0;
      goto LAB_18071cd2d;
    }
  }
  else {
    iVar3 = func_0x00018070b980(100);
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 != iVar3 * 0x100 && SBORROW4(iVar4,iVar3 * 0x100) == iVar4 + iVar3 * -0x100 < 0) {
LAB_18071cce0:
      iVar4 = func_0x00018070b980(100);
      *(int *)(param_1 + 8) = iVar4 << 8;
      return;
    }
    iVar3 = func_0x00018070b980(0x3c);
    iVar4 = *(int *)(param_1 + 8);
    if (iVar3 * 0x100 <= iVar4) goto LAB_18071cd2d;
  }
  iVar4 = func_0x00018070b980(0x3c);
  iVar4 = iVar4 << 8;
LAB_18071cd2d:
  *(int *)(param_1 + 8) = iVar4;
  return;
}





