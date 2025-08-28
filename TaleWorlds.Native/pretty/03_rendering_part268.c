#include "TaleWorlds.Native.Split.h"

// 03_rendering_part268.c - 4 个函数

// 函数: void FUN_180416926(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180416926(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  uint64_t *puVar5;
  char *pcVar6;
  uint64_t *puVar7;
  char *pcVar8;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int *piVar9;
  int64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uVar10;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int iStack0000000000000034;
  int iStack000000000000003c;
  int iStack0000000000000044;
  int iStack000000000000004c;
  uint64_t in_stack_00000090;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  puVar5 = (uint64_t *)FUN_1804c1300(param_3 + 0x60,0x60);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  *(int32_t *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  puVar5[8] = 0;
  pcVar6 = "curve";
  do {
    pcVar8 = pcVar6;
    pcVar6 = pcVar8 + 1;
  } while (*pcVar6 != '\0');
  *puVar5 = &unknown_var_5252_ptr;
  puVar5[2] = pcVar8 + -0x180a180f3;
  uVar10 = FUN_180630b20(extraout_XMM0_Da,puVar5,&system_data_3a84);
  uVar10 = FUN_180630c80(uVar10,puVar5,&unknown_var_2256_ptr,1);
  uVar10 = FUN_18062f990(uVar10,puVar5,&system_data_b1c0);
  FUN_18062f990(uVar10,puVar5,&unknown_var_5184_ptr);
  if (*(int64_t *)(unaff_RDI + 0x30) == 0) {
    puVar5[10] = 0;
    *(uint64_t **)(unaff_RDI + 0x30) = puVar5;
  }
  else {
    puVar5[10] = *(uint64_t *)(unaff_RDI + 0x38);
    *(uint64_t **)(*(int64_t *)(unaff_RDI + 0x38) + 0x58) = puVar5;
  }
  *(uint64_t **)(unaff_RDI + 0x38) = puVar5;
  puVar5[4] = unaff_RDI;
  puVar5[0xb] = 0;
  puVar7 = (uint64_t *)FUN_1804c1300(unaff_R15 + 0x60,0x60);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[4] = 0;
  *(int32_t *)(puVar7 + 5) = 1;
  puVar7[6] = 0;
  puVar7[8] = 0;
  pcVar6 = "keys";
  do {
    pcVar8 = pcVar6;
    pcVar6 = pcVar8 + 1;
  } while (*pcVar6 != '\0');
  *puVar7 = &unknown_var_5204_ptr;
  puVar7[2] = pcVar8 + -0x180a180c3;
  if (puVar5[6] == 0) {
    puVar7[10] = 0;
    puVar5[6] = puVar7;
  }
  else {
    puVar7[10] = puVar5[7];
    *(uint64_t **)(puVar5[7] + 0x58) = puVar7;
  }
  puVar5[7] = puVar7;
  puVar7[4] = puVar5;
  puVar7[0xb] = 0;
  piVar9 = *(int **)(unaff_RBP + 8);
  if (piVar9 != *(int **)(unaff_RBP + 0x10)) {
    do {
      iVar1 = *piVar9;
      iStack0000000000000034 = piVar9[1];
      fVar2 = (float)piVar9[2];
      iStack000000000000003c = piVar9[3];
      iVar3 = piVar9[4];
      iStack0000000000000044 = piVar9[5];
      fVar4 = (float)piVar9[6];
      iStack000000000000004c = piVar9[7];
      puVar5 = (uint64_t *)FUN_1804c1300(unaff_R15 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar6 = "key";
      do {
        pcVar8 = pcVar6;
        pcVar6 = pcVar8 + 1;
      } while (*pcVar6 != '\0');
      *puVar5 = &unknown_var_5272_ptr;
      puVar5[2] = pcVar8 + -0x180a18107;
      uVar10 = FUN_18062f990(extraout_XMM0_Da_00,puVar5,&unknown_var_5276_ptr,(float)iVar1 * 0.03448276);
      FUN_18062f990(uVar10,puVar5,&unknown_var_3692_ptr);
      in_stack_00000090 = CONCAT44(iStack000000000000003c,fVar2 * 0.03448276);
      FUN_1806307a0(fVar2 * 0.03448276,puVar5,&unknown_var_5264_ptr,&stack0x00000090);
      if (puVar7[6] == 0) {
        puVar5[10] = 0;
        puVar7[6] = puVar5;
      }
      else {
        puVar5[10] = puVar7[7];
        *(uint64_t **)(puVar7[7] + 0x58) = puVar5;
      }
      puVar7[7] = puVar5;
      puVar5[4] = puVar7;
      puVar5[0xb] = 0;
      puVar5 = (uint64_t *)FUN_1804c1300(unaff_R15 + 0x60,0x60);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = 0;
      *(int32_t *)(puVar5 + 5) = 1;
      puVar5[6] = 0;
      puVar5[8] = 0;
      pcVar6 = "key";
      do {
        pcVar8 = pcVar6;
        pcVar6 = pcVar8 + 1;
      } while (*pcVar6 != '\0');
      *puVar5 = &unknown_var_5272_ptr;
      puVar5[2] = pcVar8 + -0x180a18107;
      uVar10 = FUN_18062f990(extraout_XMM0_Da_01,puVar5,&unknown_var_5276_ptr,(float)iVar3 * 0.03448276);
      FUN_18062f990(uVar10,puVar5,&unknown_var_3692_ptr);
      in_stack_00000090 = CONCAT44(iStack000000000000004c,fVar4 * 0.03448276);
      FUN_1806307a0(fVar4 * 0.03448276,puVar5,&unknown_var_5264_ptr,&stack0x00000090);
      if (puVar7[6] == 0) {
        puVar5[10] = 0;
        puVar7[6] = puVar5;
      }
      else {
        puVar5[10] = puVar7[7];
        *(uint64_t **)(puVar7[7] + 0x58) = puVar5;
      }
      puVar7[7] = puVar5;
      piVar9 = piVar9 + 8;
      puVar5[4] = puVar7;
      puVar5[0xb] = 0;
    } while (piVar9 != *(int **)(unaff_RBP + 0x10));
  }
  return;
}





// 函数: void FUN_180416a8c(void)
void FUN_180416a8c(void)

{
  int64_t *plVar1;
  char *pcVar2;
  char *pcVar3;
  int64_t unaff_RBP;
  int *unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uVar4;
  int32_t extraout_XMM0_Da_00;
  int iStack0000000000000030;
  int iStack0000000000000034;
  float fStack0000000000000038;
  int iStack000000000000003c;
  int iStack0000000000000040;
  int iStack0000000000000044;
  float fStack0000000000000048;
  int iStack000000000000004c;
  uint64_t in_stack_00000090;
  
  do {
    iStack0000000000000030 = *unaff_RSI;
    iStack0000000000000034 = unaff_RSI[1];
    fStack0000000000000038 = (float)unaff_RSI[2];
    iStack000000000000003c = unaff_RSI[3];
    iStack0000000000000040 = unaff_RSI[4];
    iStack0000000000000044 = unaff_RSI[5];
    fStack0000000000000048 = (float)unaff_RSI[6];
    iStack000000000000004c = unaff_RSI[7];
    plVar1 = (int64_t *)FUN_1804c1300(unaff_R15 + 0x60,0x60);
    *plVar1 = unaff_R12;
    plVar1[1] = unaff_R12;
    plVar1[4] = unaff_R12;
    *(int32_t *)(plVar1 + 5) = 1;
    plVar1[6] = unaff_R12;
    plVar1[8] = unaff_R12;
    pcVar2 = "key";
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar2 != (char)unaff_R12);
    *plVar1 = (int64_t)&unknown_var_5272_ptr;
    plVar1[2] = (int64_t)(pcVar3 + -0x180a18107);
    uVar4 = FUN_18062f990(extraout_XMM0_Da,plVar1,&unknown_var_5276_ptr,
                          (float)iStack0000000000000030 * 0.03448276);
    FUN_18062f990(uVar4,plVar1,&unknown_var_3692_ptr);
    in_stack_00000090 = CONCAT44(iStack000000000000003c,fStack0000000000000038 * 0.03448276);
    FUN_1806307a0(fStack0000000000000038 * 0.03448276,plVar1,&unknown_var_5264_ptr,&stack0x00000090);
    if (*(int64_t *)(unaff_RDI + 0x30) == unaff_R12) {
      plVar1[10] = unaff_R12;
      *(int64_t **)(unaff_RDI + 0x30) = plVar1;
    }
    else {
      plVar1[10] = *(int64_t *)(unaff_RDI + 0x38);
      *(int64_t **)(*(int64_t *)(unaff_RDI + 0x38) + 0x58) = plVar1;
    }
    *(int64_t **)(unaff_RDI + 0x38) = plVar1;
    plVar1[4] = unaff_RDI;
    plVar1[0xb] = unaff_R12;
    plVar1 = (int64_t *)FUN_1804c1300(unaff_R15 + 0x60,0x60);
    *plVar1 = unaff_R12;
    plVar1[1] = unaff_R12;
    plVar1[4] = unaff_R12;
    *(int32_t *)(plVar1 + 5) = 1;
    plVar1[6] = unaff_R12;
    plVar1[8] = unaff_R12;
    pcVar2 = "key";
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar2 != (char)unaff_R12);
    *plVar1 = (int64_t)&unknown_var_5272_ptr;
    plVar1[2] = (int64_t)(pcVar3 + -0x180a18107);
    uVar4 = FUN_18062f990(extraout_XMM0_Da_00,plVar1,&unknown_var_5276_ptr,
                          (float)iStack0000000000000040 * 0.03448276);
    FUN_18062f990(uVar4,plVar1,&unknown_var_3692_ptr);
    in_stack_00000090 = CONCAT44(iStack000000000000004c,fStack0000000000000048 * 0.03448276);
    FUN_1806307a0(fStack0000000000000048 * 0.03448276,plVar1,&unknown_var_5264_ptr,&stack0x00000090);
    if (*(int64_t *)(unaff_RDI + 0x30) == unaff_R12) {
      plVar1[10] = unaff_R12;
      *(int64_t **)(unaff_RDI + 0x30) = plVar1;
    }
    else {
      plVar1[10] = *(int64_t *)(unaff_RDI + 0x38);
      *(int64_t **)(*(int64_t *)(unaff_RDI + 0x38) + 0x58) = plVar1;
    }
    *(int64_t **)(unaff_RDI + 0x38) = plVar1;
    unaff_RSI = unaff_RSI + 8;
    plVar1[4] = unaff_RDI;
    plVar1[0xb] = unaff_R12;
  } while (unaff_RSI != *(int **)(unaff_RBP + 0x10));
  return;
}





// 函数: void FUN_180416c9d(void)
void FUN_180416c9d(void)

{
  return;
}





// 函数: void FUN_180416cb2(void)
void FUN_180416cb2(void)

{
  return;
}





