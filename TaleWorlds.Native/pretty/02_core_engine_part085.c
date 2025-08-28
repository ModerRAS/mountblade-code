#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 02_core_engine_part085.c - 9 个函数

// 函数: void FUN_180111c30(float param_1,uint64_t *param_2)
void FUN_180111c30(float param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  float *pfVar5;
  char *pcVar6;
  int64_t lVar7;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t auStack_128 [32];
  char *pcStack_108;
  float *pfStack_100;
  int32_t *puStack_f8;
  float *pfStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int32_t uStack_c8;
  float fStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  uint64_t uStack_98;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  uStack_98 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar1 = *(int64_t *)(lVar3 + 0x1af8);
  if (*(char *)(lVar1 + 0xb4) == '\0') {
    fVar11 = *(float *)(lVar1 + 0x100);
    fVar12 = *(float *)(lVar1 + 0x104);
    uVar8 = func_0x00018012d6a0();
    pfVar5 = (float *)FUN_180124550(&fStack_d0,*param_2,uVar8,
                                    *(float *)(lVar3 + 0x1660) + *(float *)(lVar3 + 0x1660) +
                                    *(float *)(lVar3 + 0x19f8));
    fVar10 = fVar11 + *pfVar5;
    fVar13 = fVar12 + pfVar5[1];
    fStack_e8 = fVar10 - fVar11;
    fStack_e4 = fVar13 - fVar12;
    func_0x000180124080(&fStack_e8);
    lVar7 = *(int64_t *)(lVar3 + 0x1af8);
    *(uint64_t *)(lVar7 + 0x144) = 0;
    *(float *)(lVar7 + 0x14c) = fVar11;
    *(float *)(lVar7 + 0x150) = fVar12;
    *(float *)(lVar7 + 0x154) = fVar10;
    *(float *)(lVar7 + 0x158) = fVar13;
    lVar2 = *(int64_t *)(lVar3 + 0x1af8);
    fStack_e0 = fVar11;
    fStack_dc = fVar12;
    fStack_d8 = fVar10;
    fStack_d4 = fVar13;
    if (((((*(float *)(lVar2 + 0x22c) <= fVar13 && fVar13 != *(float *)(lVar2 + 0x22c)) &&
          (fVar12 < *(float *)(lVar2 + 0x234))) &&
         (*(float *)(lVar2 + 0x228) <= fVar10 && fVar10 != *(float *)(lVar2 + 0x228))) &&
        (fVar11 < *(float *)(lVar2 + 0x230))) || (*(char *)(lVar3 + 0x2e38) != '\0')) {
      cVar4 = SystemCore_HashCalculator(&fStack_e0,&fStack_d8,1);
      if (cVar4 != '\0') {
        *(uint *)(lVar7 + 0x148) = *(uint *)(lVar7 + 0x148) | 1;
      }
      if (0.0 <= param_1) {
        if (1.0 <= param_1) {
          param_1 = 1.0;
        }
      }
      else {
        param_1 = 0.0;
      }
      fStack_d0 = *(float *)(lVar3 + 0x1738);
      fStack_cc = *(float *)(lVar3 + 0x173c);
      uStack_c8 = *(int32_t *)(lVar3 + 0x1740);
      fStack_c4 = *(float *)(lVar3 + 0x1744) * *(float *)(lVar3 + 0x1628);
      uVar8 = func_0x000180121e20(&fStack_d0);
      pcStack_108._0_4_ = *(int32_t *)(lVar3 + 0x1664);
      SystemCore_ResourceManager(CONCAT44(fStack_dc,fStack_e0),CONCAT44(fStack_d4,fStack_d8),uVar8,1);
      fVar9 = -*(float *)(lVar3 + 0x1668);
      fVar11 = fVar11 - fVar9;
      fVar10 = fVar10 + fVar9;
      fVar12 = fVar12 - fVar9;
      fStack_d4 = fVar13 + fVar9;
      fStack_d0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1968);
      fStack_cc = *(float *)(SYSTEM_DATA_MANAGER_A + 0x196c);
      uStack_c8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1970);
      fStack_c4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1974) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      fStack_e0 = fVar11;
      fStack_dc = fVar12;
      fStack_d8 = fVar10;
      if (param_1 != 0.0) {
        uVar8 = func_0x000180121e20(&fStack_d0);
        pcStack_108._0_4_ = *(int32_t *)(lVar3 + 0x1664);
        FUN_180298260(*(uint64_t *)(lVar1 + 0x2e8),&fStack_e0,uVar8,param_1);
      }
      SystemCore_LoggingSystem(&uStack_b8,0x20,&rendering_buffer_2112_ptr,(double)(param_1 * 100.0 + 0.01));
      lVar1 = SYSTEM_DATA_MANAGER_A;
      pfStack_100 = (float *)&uStack_b8;
      pfStack_f0 = (float *)0x0;
      pfVar5 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x19f0);
      fVar13 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
      puStack_f8 = (int32_t *)0x0;
      pcStack_108 = (char *)CONCAT44(pcStack_108._4_4_,0xbf800000);
      SystemCore_StateController(pfVar5,&fStack_e8,fVar13,0x7f7fffff);
      fVar9 = fStack_e8;
      if (0.0 < fStack_e8) {
        fVar9 = fStack_e8 - fVar13 / *pfVar5;
      }
      fStack_cc = fStack_e4;
      fStack_d0 = (float)(int)(fVar9 + 0.95);
      if (0.0 < fStack_d0) {
        fVar13 = (fVar10 - fVar11) * param_1 + fVar11 + *(float *)(lVar3 + 0x166c);
        uStack_bc = 0x3f000000;
        uStack_c0 = 0;
        fStack_e8 = fVar11;
        if ((fVar11 <= fVar13) &&
           (fStack_e8 = (fVar10 - fStack_d0) - *(float *)(lVar3 + 0x1674), fVar13 <= fStack_e8)) {
          fStack_e8 = fVar13;
        }
        pcVar6 = (char *)&uStack_b8;
        if (&stack0x00000000 != (int8_t *)0xb7) {
          do {
            if ((*pcVar6 == '\0') || ((*pcVar6 == '#' && (pcVar6[1] == '#')))) break;
            pcVar6 = pcVar6 + 1;
          } while (pcVar6 != (char *)0xffffffffffffffff);
        }
        fStack_e4 = fVar12;
        if ((int)pcVar6 != (int)&uStack_b8) {
          pfStack_f0 = &fStack_e0;
          puStack_f8 = &uStack_c0;
          pfStack_100 = &fStack_d0;
          pcStack_108 = pcVar6;
          UtilitiesSystem_DataValidator(*(uint64_t *)(*(int64_t *)(lVar1 + 0x1af8) + 0x2e8),&fStack_e8,&fStack_d8
                        ,&uStack_b8);
          if (*(char *)(lVar1 + 0x2e38) != '\0') {
            SystemCore_ThreadController(&fStack_e8,&uStack_b8,pcVar6);
          }
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_98 ^ (uint64_t)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180111c84(void)
void FUN_180111c84(void)

{
  int64_t lVar1;
  char cVar2;
  int32_t uVar3;
  float *pfVar4;
  int64_t unaff_RBX;
  char *pcVar5;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t *in_R9;
  int64_t lVar6;
  int64_t in_R11;
  uint64_t unaff_R14;
  int32_t uVar7;
  float fVar8;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar9;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  float fVar10;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  float fVar11;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  float fVar12;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  uint64_t in_stack_00000020;
  uint64_t uVar13;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  int32_t uStack0000000000000060;
  float fStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  
  uVar3 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  *(uint64_t *)(in_R11 + 0x18) = unaff_R14;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM9_Dd;
  fVar10 = *(float *)(unaff_RDI + 0x100);
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM11_Dd;
  fVar11 = *(float *)(unaff_RDI + 0x104);
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM12_Dd;
  uVar7 = func_0x00018012d6a0();
  pfVar4 = (float *)FUN_180124550(&stack0x00000058,*in_R9,uVar7,
                                  *(float *)(unaff_RBX + 0x1660) + *(float *)(unaff_RBX + 0x1660) +
                                  *(float *)(unaff_RBX + 0x19f8));
  fVar9 = fVar10 + *pfVar4;
  fVar12 = fVar11 + pfVar4[1];
  in_stack_00000040 = fVar9 - fVar10;
  fStack0000000000000044 = fVar12 - fVar11;
  func_0x000180124080(&stack0x00000040);
  lVar6 = *(int64_t *)(unaff_RBX + 0x1af8);
  *(uint64_t *)(lVar6 + 0x144) = 0;
  *(float *)(lVar6 + 0x14c) = fVar10;
  *(float *)(lVar6 + 0x150) = fVar11;
  *(float *)(lVar6 + 0x154) = fVar9;
  *(float *)(lVar6 + 0x158) = fVar12;
  lVar1 = *(int64_t *)(unaff_RBX + 0x1af8);
  in_stack_00000048 = fVar10;
  fStack000000000000004c = fVar11;
  in_stack_00000050 = fVar9;
  fStack0000000000000054 = fVar12;
  if (((((*(float *)(lVar1 + 0x22c) <= fVar12 && fVar12 != *(float *)(lVar1 + 0x22c)) &&
        (fVar11 < *(float *)(lVar1 + 0x234))) &&
       (*(float *)(lVar1 + 0x228) <= fVar9 && fVar9 != *(float *)(lVar1 + 0x228))) &&
      (fVar10 < *(float *)(lVar1 + 0x230))) || (*(char *)(unaff_RBX + 0x2e38) != '\0')) {
    in_stack_000000c0 = unaff_XMM10_Da;
    in_stack_000000c8 = unaff_XMM10_Dc;
    cVar2 = SystemCore_HashCalculator(&stack0x00000048,&stack0x00000050,1);
    if (cVar2 != '\0') {
      *(uint *)(lVar6 + 0x148) = *(uint *)(lVar6 + 0x148) | 1;
    }
    if (0.0 <= unaff_XMM8_Da) {
      if (1.0 <= unaff_XMM8_Da) {
        unaff_XMM8_Da = 1.0;
      }
    }
    else {
      unaff_XMM8_Da = 0.0;
    }
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x1738);
    fStack000000000000005c = *(float *)(unaff_RBX + 0x173c);
    uStack0000000000000060 = *(int32_t *)(unaff_RBX + 0x1740);
    fStack0000000000000064 = *(float *)(unaff_RBX + 0x1744) * *(float *)(unaff_RBX + 0x1628);
    uVar7 = func_0x000180121e20(&stack0x00000058);
    uVar13 = CONCAT44(uVar3,*(int32_t *)(unaff_RBX + 0x1664));
    SystemCore_ResourceManager(CONCAT44(fStack000000000000004c,in_stack_00000048),
                  CONCAT44(fStack0000000000000054,in_stack_00000050),uVar7,1,uVar13);
    uVar7 = (int32_t)((uint64_t)uVar13 >> 0x20);
    fStack0000000000000054 = -*(float *)(unaff_RBX + 0x1668);
    fVar10 = fVar10 - fStack0000000000000054;
    fVar9 = fVar9 + fStack0000000000000054;
    fVar11 = fVar11 - fStack0000000000000054;
    fStack0000000000000054 = fVar12 + fStack0000000000000054;
    fStack0000000000000058 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1968);
    fStack000000000000005c = *(float *)(SYSTEM_DATA_MANAGER_A + 0x196c);
    uStack0000000000000060 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1970);
    fStack0000000000000064 =
         *(float *)(SYSTEM_DATA_MANAGER_A + 0x1974) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    in_stack_00000048 = fVar10;
    fStack000000000000004c = fVar11;
    in_stack_00000050 = fVar9;
    if (unaff_XMM8_Da != 0.0) {
      uVar3 = func_0x000180121e20(&stack0x00000058);
      uVar13 = CONCAT44(uVar7,*(int32_t *)(unaff_RBX + 0x1664));
      FUN_180298260(*(uint64_t *)(unaff_RDI + 0x2e8),&stack0x00000048,uVar3,unaff_XMM8_Da,uVar13);
      uVar7 = (int32_t)((uint64_t)uVar13 >> 0x20);
    }
    SystemCore_LoggingSystem(&stack0x00000070,0x20,&rendering_buffer_2112_ptr,(double)(unaff_XMM8_Da * 100.0 + 0.01));
    lVar6 = SYSTEM_DATA_MANAGER_A;
    pfVar4 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x19f0);
    fVar12 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
    SystemCore_StateController(pfVar4,&stack0x00000040,fVar12,0x7f7fffff,CONCAT44(uVar7,0xbf800000));
    fVar8 = in_stack_00000040;
    if (0.0 < in_stack_00000040) {
      fVar8 = in_stack_00000040 - fVar12 / *pfVar4;
    }
    fStack000000000000005c = fStack0000000000000044;
    fStack0000000000000058 = (float)(int)(fVar8 + 0.95);
    if (0.0 < fStack0000000000000058) {
      fVar12 = (fVar9 - fVar10) * unaff_XMM8_Da + fVar10 + *(float *)(unaff_RBX + 0x166c);
      uStack000000000000006c = 0x3f000000;
      uStack0000000000000068 = 0;
      in_stack_00000040 = fVar10;
      if ((fVar10 <= fVar12) &&
         (in_stack_00000040 = (fVar9 - fStack0000000000000058) - *(float *)(unaff_RBX + 0x1674),
         fVar12 <= in_stack_00000040)) {
        in_stack_00000040 = fVar12;
      }
      pcVar5 = &stack0x00000070;
      if (&stack0x00000000 != (int8_t *)0xffffffffffffff8f) {
        do {
          if ((*pcVar5 == '\0') || ((*pcVar5 == '#' && (pcVar5[1] == '#')))) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != (char *)0xffffffffffffffff);
      }
      fStack0000000000000044 = fVar11;
      if (((int)pcVar5 != (int)&stack0x00000070) &&
         (UtilitiesSystem_DataValidator(*(uint64_t *)(*(int64_t *)(lVar6 + 0x1af8) + 0x2e8),&stack0x00000040,
                        &stack0x00000050,&stack0x00000070,pcVar5), *(char *)(lVar6 + 0x2e38) != '\0'
         )) {
        SystemCore_ThreadController(&stack0x00000040,&stack0x00000070,pcVar5);
      }
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x70) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180111d99(void)
void FUN_180111d99(void)

{
  float *pfVar1;
  int64_t lVar2;
  char cVar3;
  int32_t uVar4;
  int64_t unaff_RBX;
  char *pcVar5;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R10;
  int32_t unaff_R14D;
  float fVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar9;
  float unaff_XMM11_Da;
  float fVar10;
  float unaff_XMM12_Da;
  uint64_t in_stack_00000020;
  int32_t uVar12;
  uint64_t uVar11;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  int32_t in_stack_00000060;
  float fStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  
  uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  cVar3 = SystemCore_HashCalculator(&stack0x00000048,&stack0x00000050,1);
  if (cVar3 != '\0') {
    *(uint *)(in_R10 + 0x148) = *(uint *)(in_R10 + 0x148) | 1;
  }
  if (0.0 <= unaff_XMM8_Da) {
    if (1.0 <= unaff_XMM8_Da) {
      unaff_XMM8_Da = 1.0;
    }
  }
  else {
    unaff_XMM8_Da = 0.0;
  }
  in_stack_00000058 = *(float *)(unaff_RBX + 0x1738);
  fStack000000000000005c = *(float *)(unaff_RBX + 0x173c);
  in_stack_00000060 = *(int32_t *)(unaff_RBX + 0x1740);
  fStack0000000000000064 = *(float *)(unaff_RBX + 0x1744) * *(float *)(unaff_RBX + 0x1628);
  uVar4 = func_0x000180121e20(&stack0x00000058);
  uVar11 = CONCAT44(uVar12,*(int32_t *)(unaff_RBX + 0x1664));
  SystemCore_ResourceManager(CONCAT44(fStack000000000000004c,fStack0000000000000048),
                CONCAT44(fStack0000000000000054,fStack0000000000000050),uVar4,1,uVar11);
  uVar12 = (int32_t)((uint64_t)uVar11 >> 0x20);
  fStack0000000000000054 = -*(float *)(unaff_RBX + 0x1668);
  fVar9 = unaff_XMM9_Da - fStack0000000000000054;
  fVar8 = unaff_XMM7_Da + fStack0000000000000054;
  fVar10 = unaff_XMM11_Da - fStack0000000000000054;
  fStack0000000000000054 = unaff_XMM12_Da + fStack0000000000000054;
  in_stack_00000058 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1968);
  fStack000000000000005c = *(float *)(SYSTEM_DATA_MANAGER_A + 0x196c);
  in_stack_00000060 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1970);
  fStack0000000000000064 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1974) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628)
  ;
  fStack0000000000000048 = fVar9;
  fStack000000000000004c = fVar10;
  fStack0000000000000050 = fVar8;
  if (unaff_XMM8_Da != 0.0) {
    uVar4 = func_0x000180121e20(&stack0x00000058);
    uVar11 = CONCAT44(uVar12,*(int32_t *)(unaff_RBX + 0x1664));
    FUN_180298260(*(uint64_t *)(unaff_RDI + 0x2e8),&stack0x00000048,uVar4,unaff_XMM8_Da,uVar11);
    uVar12 = (int32_t)((uint64_t)uVar11 >> 0x20);
  }
  SystemCore_LoggingSystem(&stack0x00000070,0x20,&rendering_buffer_2112_ptr,(double)(unaff_XMM8_Da * 100.0 + 0.01));
  lVar2 = SYSTEM_DATA_MANAGER_A;
  pfVar1 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x19f0);
  fVar7 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
  SystemCore_StateController(pfVar1,&stack0x00000040,fVar7,0x7f7fffff,CONCAT44(uVar12,0xbf800000));
  fVar6 = fStack0000000000000040;
  if (0.0 < fStack0000000000000040) {
    fVar6 = fStack0000000000000040 - fVar7 / *pfVar1;
  }
  fStack000000000000005c = fStack0000000000000044;
  in_stack_00000058 = (float)(int)(fVar6 + 0.95);
  if (0.0 < in_stack_00000058) {
    fVar7 = (fVar8 - fVar9) * unaff_XMM8_Da + fVar9 + *(float *)(unaff_RBX + 0x166c);
    uStack000000000000006c = 0x3f000000;
    fStack0000000000000040 = fVar9;
    if ((fVar9 <= fVar7) &&
       (fStack0000000000000040 = (fVar8 - in_stack_00000058) - *(float *)(unaff_RBX + 0x1674),
       fVar7 <= fStack0000000000000040)) {
      fStack0000000000000040 = fVar7;
    }
    pcVar5 = &stack0x00000070;
    if (&stack0x00000000 != (int8_t *)0xffffffffffffff8f) {
      while (*pcVar5 != '\0') {
        if (((*pcVar5 == '#') && (pcVar5[1] == '#')) ||
           (pcVar5 = pcVar5 + 1, pcVar5 == (char *)0xffffffffffffffff)) break;
      }
    }
    fStack0000000000000044 = fVar10;
    uStack0000000000000068 = unaff_R14D;
    if (((int)pcVar5 != (int)&stack0x00000070) &&
       (UtilitiesSystem_DataValidator(*(uint64_t *)(*(int64_t *)(lVar2 + 0x1af8) + 0x2e8),&stack0x00000040,
                      &stack0x00000050,&stack0x00000070,pcVar5),
       *(char *)(lVar2 + 0x2e38) != (char)unaff_R14D)) {
      SystemCore_ThreadController(&stack0x00000040,&stack0x00000070,pcVar5);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x70) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180111fb3(uint64_t param_1,float param_2)
void FUN_180111fb3(uint64_t param_1,float param_2)

{
  int64_t unaff_RBX;
  char *pcVar1;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  char unaff_R14B;
  float unaff_XMM6_Da;
  float fVar2;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float fStack0000000000000040;
  int32_t uStack000000000000006c;
  
  fVar2 = unaff_XMM6_Da + *(float *)(unaff_RBX + 0x166c);
  uStack000000000000006c = 0x3f000000;
  fStack0000000000000040 = unaff_XMM9_Da;
  if ((unaff_XMM9_Da <= fVar2) &&
     (fStack0000000000000040 = (unaff_XMM7_Da - param_2) - *(float *)(unaff_RBX + 0x1674),
     fVar2 <= fStack0000000000000040)) {
    fStack0000000000000040 = fVar2;
  }
  pcVar1 = &stack0x00000070;
  if (&stack0x00000000 != (int8_t *)0xffffffffffffff8f) {
    while (*pcVar1 != '\0') {
      if (((*pcVar1 == '#') && (pcVar1[1] == '#')) ||
         (pcVar1 = pcVar1 + 1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (((int)pcVar1 != (int)&stack0x00000070) &&
     (UtilitiesSystem_DataValidator(*(uint64_t *)(*(int64_t *)(unaff_RDI + 0x1af8) + 0x2e8),&stack0x00000040,
                    &stack0x00000050,&stack0x00000070,pcVar1),
     *(char *)(unaff_RDI + 0x2e38) != unaff_R14B)) {
    SystemCore_ThreadController(&stack0x00000040,&stack0x00000070,pcVar1);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x70) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_1801120bb(void)
void FUN_1801120bb(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x70) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801120e0(float *param_1)
void FUN_1801120e0(float *param_1)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  char cVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fStackX_10;
  float fStackX_14;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar6 = *(int64_t *)(lVar5 + 0x1af8);
  if (*(char *)(lVar6 + 0xb4) == '\0') {
    fVar1 = *(float *)(lVar6 + 0x100);
    fVar8 = fVar1 + *param_1;
    fVar2 = *(float *)(lVar6 + 0x104);
    fVar7 = fVar2 + param_1[1];
    fStackX_10 = fVar8 - fVar1;
    fStackX_14 = fVar7 - fVar2;
    func_0x000180124080(&fStackX_10,0);
    lVar6 = *(int64_t *)(lVar5 + 0x1af8);
    *(uint64_t *)(lVar6 + 0x144) = 0;
    *(float *)(lVar6 + 0x14c) = fVar1;
    *(float *)(lVar6 + 0x150) = fVar2;
    *(float *)(lVar6 + 0x154) = fVar8;
    *(float *)(lVar6 + 0x158) = fVar7;
    lVar3 = *(int64_t *)(lVar5 + 0x1af8);
    if ((((((*(float *)(lVar3 + 0x22c) <= fVar7 && fVar7 != *(float *)(lVar3 + 0x22c)) &&
           (fVar2 < *(float *)(lVar3 + 0x234))) &&
          (*(float *)(lVar3 + 0x228) <= fVar8 && fVar8 != *(float *)(lVar3 + 0x228))) &&
         (fVar1 < *(float *)(lVar3 + 0x230))) || (*(char *)(lVar5 + 0x2e38) != '\0')) &&
       (fStack_48 = fVar1, fStack_44 = fVar2, fStack_40 = fVar8, fStack_3c = fVar7,
       cVar4 = SystemCore_HashCalculator(&fStack_48,&fStack_40,1), cVar4 != '\0')) {
      *(uint *)(lVar6 + 0x148) = *(uint *)(lVar6 + 0x148) | 1;
    }
  }
  return;
}





// 函数: void FUN_18011210d(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_18011210d(float *param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  float param_5)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  char cVar4;
  int64_t in_RAX;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  float fStackX_20;
  float fStackX_24;
  float fStack000000000000002c;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  fVar1 = *(float *)(in_RAX + 0x100);
  fVar7 = fVar1 + *param_1;
  fVar2 = *(float *)(in_RAX + 0x104);
  fVar6 = fVar2 + param_1[1];
  fStack0000000000000078 = fVar7 - fVar1;
  fStack000000000000007c = fVar6 - fVar2;
  func_0x000180124080(&stack0x00000078,0);
  lVar5 = *(int64_t *)(param_4 + 0x1af8);
  *(uint64_t *)(lVar5 + 0x144) = 0;
  *(float *)(lVar5 + 0x14c) = fVar1;
  *(float *)(lVar5 + 0x150) = fVar2;
  *(float *)(lVar5 + 0x154) = fVar7;
  *(float *)(lVar5 + 0x158) = fVar6;
  lVar3 = *(int64_t *)(param_4 + 0x1af8);
  if (((((*(float *)(lVar3 + 0x22c) <= fVar6 && fVar6 != *(float *)(lVar3 + 0x22c)) &&
        (fVar2 < *(float *)(lVar3 + 0x234))) &&
       (*(float *)(lVar3 + 0x228) <= fVar7 && fVar7 != *(float *)(lVar3 + 0x228))) &&
      (fVar1 < *(float *)(lVar3 + 0x230))) || (*(char *)(param_4 + 0x2e38) != '\0')) {
    fStackX_20 = fVar1;
    fStackX_24 = fVar2;
    param_5 = fVar7;
    fStack000000000000002c = fVar6;
    cVar4 = SystemCore_HashCalculator(&fStackX_20,&param_5,1);
    if (cVar4 != '\0') {
      *(uint *)(lVar5 + 0x148) = *(uint *)(lVar5 + 0x148) | 1;
    }
  }
  return;
}





// 函数: void FUN_180112207(void)
void FUN_180112207(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180112280(void)
void FUN_180112280(void)

{
  float *pfVar1;
  float fVar2;
  int32_t uVar3;
  int64_t lVar4;
  char cVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t uStackX_8;
  float fStackX_10;
  float fStackX_14;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  float fStack_5c;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar9 = *(int64_t *)(lVar4 + 0x1af8);
  if (*(char *)(lVar9 + 0xb4) == '\0') {
    if (*(int *)(lVar9 + 0x1a0) == 0) {
      *(int8_t *)(lVar9 + 0xb1) = 1;
      lVar9 = *(int64_t *)(lVar4 + 0x1af8);
      if (*(char *)(lVar9 + 0xb4) == '\0') {
        pfVar1 = (float *)(lVar9 + 0x100);
        fVar14 = *pfVar1;
        fVar16 = *(float *)(lVar9 + 0x104);
        fVar12 = *pfVar1;
        uVar3 = *(int32_t *)(lVar9 + 0x104);
        fVar2 = *pfVar1;
        uVar6 = *(int32_t *)(lVar9 + 0x104);
        fVar17 = fVar16 + *(float *)(lVar9 + 0x124);
        fVar15 = fVar14 + 1.0;
        uStackX_8 = (uint64_t)(uint)(fVar15 - fVar14);
        lVar7 = lVar4;
        fVar11 = fVar15;
        fVar13 = fVar17;
        func_0x000180124080(&uStackX_8,0);
        lVar8 = *(int64_t *)(lVar7 + 0x1af8);
        *(uint64_t *)(lVar8 + 0x144) = 0;
        *(float *)(lVar8 + 0x14c) = fVar2;
        *(int32_t *)(lVar8 + 0x150) = uVar6;
        *(float *)(lVar8 + 0x154) = fVar11;
        *(float *)(lVar8 + 0x158) = fVar13;
        lVar10 = *(int64_t *)(lVar7 + 0x1af8);
        if ((((*(float *)(lVar10 + 0x22c) <= fVar17 && fVar17 != *(float *)(lVar10 + 0x22c)) &&
             (fVar16 < *(float *)(lVar10 + 0x234))) &&
            ((*(float *)(lVar10 + 0x228) <= fVar15 && fVar15 != *(float *)(lVar10 + 0x228) &&
             (fVar14 < *(float *)(lVar10 + 0x230))))) || (*(char *)(lVar7 + 0x2e38) != '\0')) {
          fStack_78 = fVar12;
          fStack_74 = (float)uVar3;
          fStack_70 = fVar11;
          fStack_6c = fVar13;
          cVar5 = SystemCore_HashCalculator(&fStack_78,&fStack_70,1);
          if (cVar5 != '\0') {
            *(uint *)(lVar8 + 0x148) = *(uint *)(lVar8 + 0x148) | 1;
          }
          fStack_78 = *(float *)(lVar7 + 0x1878);
          fStack_74 = *(float *)(lVar7 + 0x187c);
          fStack_70 = *(float *)(lVar7 + 0x1880);
          fStack_6c = *(float *)(lVar7 + 0x1884) * *(float *)(lVar7 + 0x1628);
          uStackX_8 = CONCAT44(fVar17,fVar14);
          fStackX_10 = fVar14;
          fStackX_14 = fVar16;
          uVar6 = func_0x000180121e20(&fStack_78);
          SystemCore_SystemMonitor(*(uint64_t *)(lVar9 + 0x2e8),&fStackX_10,&uStackX_8,uVar6,0x3f800000);
          if (*(char *)(lVar4 + 0x2e38) != '\0') {
            FUN_18013c760(&rendering_buffer_2124_ptr);
          }
        }
      }
    }
    else {
      lVar8 = lVar4;
      if (*(int64_t *)(lVar9 + 0x210) != 0) {
        FUN_180126d80();
        lVar8 = SYSTEM_DATA_MANAGER_A;
      }
      fVar14 = *(float *)(lVar9 + 0x40);
      fVar16 = fVar14 + *(float *)(lVar9 + 0x48);
      if (*(int *)(lVar9 + 0x1e8) != 0) {
        fVar14 = fVar14 + *(float *)(lVar9 + 0x204);
      }
      fVar2 = *(float *)(lVar9 + 0x104);
      uStackX_8 = 0;
      fVar13 = fVar2 + 1.0;
      fVar12 = fVar16;
      fVar11 = fVar13;
      func_0x000180124080(&uStackX_8,0);
      lVar10 = *(int64_t *)(lVar8 + 0x1af8);
      *(uint64_t *)(lVar10 + 0x144) = 0;
      *(float *)(lVar10 + 0x14c) = fVar14;
      *(float *)(lVar10 + 0x150) = fVar2;
      *(float *)(lVar10 + 0x154) = fVar12;
      *(float *)(lVar10 + 0x158) = fVar11;
      lVar7 = *(int64_t *)(lVar8 + 0x1af8);
      fStack_78 = fVar14;
      fStack_74 = fVar2;
      fStack_70 = fVar12;
      fStack_6c = fVar11;
      if (((((*(float *)(lVar7 + 0x22c) <= fVar13 && fVar13 != *(float *)(lVar7 + 0x22c)) &&
            (fVar2 < *(float *)(lVar7 + 0x234))) &&
           (*(float *)(lVar7 + 0x228) <= fVar16 && fVar16 != *(float *)(lVar7 + 0x228))) &&
          (fVar14 < *(float *)(lVar7 + 0x230))) || (*(char *)(lVar8 + 0x2e38) != '\0')) {
        cVar5 = SystemCore_HashCalculator(&fStack_78,&fStack_70,1);
        if (cVar5 != '\0') {
          *(uint *)(lVar10 + 0x148) = *(uint *)(lVar10 + 0x148) | 1;
        }
        uStack_68 = *(int32_t *)(lVar8 + 0x1878);
        uStack_64 = *(int32_t *)(lVar8 + 0x187c);
        uStack_60 = *(int32_t *)(lVar8 + 0x1880);
        fStack_5c = *(float *)(lVar8 + 0x1884) * *(float *)(lVar8 + 0x1628);
        uStackX_8 = CONCAT44(fVar2,fVar16);
        uVar6 = func_0x000180121e20(&uStack_68);
        SystemCore_SystemMonitor(*(uint64_t *)(lVar9 + 0x2e8),&fStack_78,&uStackX_8,uVar6,0x3f800000);
        if (*(char *)(lVar4 + 0x2e38) != '\0') {
          SystemCore_ThreadController(&fStack_78,&rendering_buffer_2128_ptr,0);
        }
        if (*(int64_t *)(lVar9 + 0x210) != 0) {
          FUN_180134400();
          *(int32_t *)(*(int64_t *)(lVar9 + 0x210) + 0x1c) = *(int32_t *)(lVar9 + 0x104);
        }
      }
      else if (*(int64_t *)(lVar9 + 0x210) != 0) {
        FUN_180134400();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



