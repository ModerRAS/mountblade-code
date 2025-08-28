#include "CoreSystem_DatabaseHandler0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_04_part049.c - 6 个函数
// 函数: void DataStructure_b4fde(float param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void DataStructure_b4fde(float param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,int32_t param_10,int32_t param_11)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  float *pfVar7;
  uint64_t uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int64_t *plVar12;
  int64_t lVar13;
  void *puVar14;
  uint64_t *unaff_RBX;
  uint64_t *puVar15;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  char *pcVar16;
  void *puVar17;
  int64_t in_R10;
  char *unaff_R14;
  float extraout_XMM0_Da;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int aiStackX_20 [2];
code_r0x0001802b4fde:
  lVar13 = 0;
  pcVar10 = unaff_R14;
LAB_1802b4fe3:
  if (lVar13 == param_4) {
    pcVar16 = pcVar10 + lVar13;
    if (pcVar16 <= pcVar10) {
LAB_1802b5007:
      pcVar10 = "emitter";
      do {
        pcVar16 = pcVar10;
        pcVar10 = pcVar16 + 1;
      } while (*pcVar10 != '\0');
      puVar15 = (uint64_t *)unaff_RBX[6];
      while( true ) {
        if (puVar15 == (uint64_t *)0x0) goto DataStructure_b54b3;
        if ((char *)*puVar15 == (char *)0x0) {
          pcVar10 = (char *)0x0;
          pcVar11 = unaff_R14;
        }
        else {
          pcVar10 = (char *)puVar15[2];
          pcVar11 = (char *)*puVar15;
        }
        if (pcVar10 == pcVar16 + -0x180a18047) break;
LAB_1802b5106:
        puVar15 = (uint64_t *)puVar15[0xb];
      }
      pcVar10 = pcVar10 + (int64_t)pcVar11;
      if (pcVar11 < pcVar10) {
        lVar13 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar11;
        do {
          if (*pcVar11 != pcVar11[lVar13]) goto LAB_1802b5106;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar10);
      }
LAB_1802b50e0:
      pcVar10 = "guid";
      do {
        pcVar16 = pcVar10;
        pcVar10 = pcVar16 + 1;
      } while (*pcVar10 != '\0');
      for (puVar1 = (uint64_t *)puVar15[8]; puVar1 != (uint64_t *)0x0;
          puVar1 = (uint64_t *)puVar1[6]) {
        if ((char *)*puVar1 == (char *)0x0) {
          pcVar10 = (char *)0x0;
          pcVar11 = unaff_R14;
        }
        else {
          pcVar10 = (char *)puVar1[2];
          pcVar11 = (char *)*puVar1;
        }
        if (pcVar10 == pcVar16 + -0x180a04c43) {
          pcVar10 = pcVar10 + (int64_t)pcVar11;
          if (pcVar10 <= pcVar11) break;
          lVar13 = (int64_t)&processed_var_6228_ptr - (int64_t)pcVar11;
          while (*pcVar11 == pcVar11[lVar13]) {
            pcVar11 = pcVar11 + 1;
            if (pcVar10 <= pcVar11) goto LAB_1802b515c;
          }
        }
      }
LAB_1802b515c:
      pfVar7 = (float *)DataStructure_c0460(&param_5);
      plVar2 = *(int64_t **)(unaff_RSI + 200);
      param_1 = *pfVar7;
      param_7._4_4_ = pfVar7[1];
      param_8._0_4_ = pfVar7[2];
      param_8._4_4_ = pfVar7[3];
      lVar13 = 0;
      iVar9 = (int)(*(int64_t *)(unaff_RSI + 0xd0) - (int64_t)plVar2 >> 3);
      param_7._0_4_ = param_1;
      if (0 < iVar9) {
        plVar12 = plVar2;
        do {
          if ((*(int64_t *)*plVar12 == *(int64_t *)pfVar7) &&
             (((int64_t *)*plVar12)[1] == *(int64_t *)(pfVar7 + 2))) {
            if (plVar2[lVar13] != 0) {
              param_1 = (float)DataStructure_64330(plVar2[lVar13],puVar15);
            }
            break;
          }
          lVar13 = lVar13 + 1;
          plVar12 = plVar12 + 1;
        } while (lVar13 < iVar9);
      }
      pcVar10 = "emitter";
      do {
        pcVar16 = pcVar10;
        pcVar10 = pcVar16 + 1;
      } while (*pcVar10 != '\0');
      puVar15 = (uint64_t *)puVar15[0xb];
      do {
        if (puVar15 == (uint64_t *)0x0) goto DataStructure_b54b3;
        if ((char *)*puVar15 == (char *)0x0) {
          pcVar10 = (char *)0x0;
          pcVar11 = unaff_R14;
        }
        else {
          pcVar10 = (char *)puVar15[2];
          pcVar11 = (char *)*puVar15;
        }
        if (pcVar10 == pcVar16 + -0x180a18047) {
          pcVar10 = pcVar10 + (int64_t)pcVar11;
          if (pcVar10 <= pcVar11) goto LAB_1802b50e0;
          lVar13 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar11;
          while (*pcVar11 == pcVar11[lVar13]) {
            pcVar11 = pcVar11 + 1;
            if (pcVar10 <= pcVar11) goto LAB_1802b50e0;
          }
        }
        puVar15 = (uint64_t *)puVar15[0xb];
      } while( true );
    }
    lVar13 = in_R10 - (int64_t)pcVar10;
    while (*pcVar10 == pcVar10[lVar13]) {
      pcVar10 = pcVar10 + 1;
      if (pcVar16 <= pcVar10) goto LAB_1802b5007;
    }
  }
  unaff_RBX = (uint64_t *)unaff_RBX[0xb];
  if (unaff_RBX != (uint64_t *)0x0) {
    pcVar10 = (char *)*unaff_RBX;
    if (pcVar10 == (char *)0x0) goto code_r0x0001802b4fde;
    lVar13 = unaff_RBX[2];
    goto LAB_1802b4fe3;
  }
  cVar6 = DataStructure_b61b0(*(uint64_t *)(unaff_RSI + 0x68));
  if (cVar6 == '\0') {
    puVar14 = *(void **)(*(int64_t *)(unaff_RSI + 0x68) + 0x50);
    puVar17 = &system_buffer_ptr;
    if (puVar14 != (void *)0x0) {
      puVar17 = puVar14;
    }
    puVar14 = &system_buffer_ptr;
    if (*(void **)(unaff_RSI + 0x50) != (void *)0x0) {
      puVar14 = *(void **)(unaff_RSI + 0x50);
    }
// WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&processed_var_5104_ptr,puVar14,puVar17);
  }
  pcVar10 = "emitters";
  do {
    pcVar16 = pcVar10;
    pcVar10 = pcVar16 + 1;
  } while (*pcVar10 != '\0');
  puVar15 = *(uint64_t **)(unaff_RDI + 0x30);
  while( true ) {
    param_1 = extraout_XMM0_Da;
    if (puVar15 == (uint64_t *)0x0) goto DataStructure_b54b3;
    if ((char *)*puVar15 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar11 = unaff_R14;
    }
    else {
      pcVar10 = (char *)puVar15[2];
      pcVar11 = (char *)*puVar15;
    }
    if (pcVar10 == pcVar16 + -0x180a1804f) break;
LAB_1802b52ae:
    puVar15 = (uint64_t *)puVar15[0xb];
  }
  pcVar10 = pcVar11 + (int64_t)pcVar10;
  if (pcVar11 < pcVar10) {
    lVar13 = (int64_t)&processed_var_5088_ptr - (int64_t)pcVar11;
    do {
      if (*pcVar11 != pcVar11[lVar13]) goto LAB_1802b52ae;
      pcVar11 = pcVar11 + 1;
    } while (pcVar11 < pcVar10);
  }
  pcVar10 = "emitter";
  do {
    pcVar16 = pcVar10;
    pcVar10 = pcVar16 + 1;
  } while (*pcVar10 != '\0');
  puVar15 = (uint64_t *)puVar15[6];
  while( true ) {
    if (puVar15 == (uint64_t *)0x0) goto DataStructure_b54b3;
    if ((char *)*puVar15 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar11 = unaff_R14;
    }
    else {
      pcVar10 = (char *)puVar15[2];
      pcVar11 = (char *)*puVar15;
    }
    if (pcVar10 == pcVar16 + -0x180a18047) break;
DataStructure_b532e:
    puVar15 = (uint64_t *)puVar15[0xb];
  }
  pcVar10 = pcVar10 + (int64_t)pcVar11;
  uVar4 = unaff_XMM6_Da;
  uVar5 = unaff_XMM6_Dc;
  if (pcVar11 < pcVar10) {
    lVar13 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar11;
    do {
      if (*pcVar11 != pcVar11[lVar13]) goto DataStructure_b532e;
      pcVar11 = pcVar11 + 1;
      uVar4 = unaff_XMM6_Da;
      uVar5 = unaff_XMM6_Dc;
    } while (pcVar11 < pcVar10);
  }
LAB_1802b5304:
  param_11 = uVar5;
  param_10 = uVar4;
  pcVar10 = "_index_";
  do {
    pcVar16 = pcVar10;
    pcVar10 = pcVar16 + 1;
  } while (*pcVar10 != '\0');
  for (puVar1 = (uint64_t *)puVar15[8]; puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    if ((char *)*puVar1 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar11 = unaff_R14;
    }
    else {
      pcVar10 = (char *)puVar1[2];
      pcVar11 = (char *)*puVar1;
    }
    if (pcVar10 == pcVar16 + -0x180a1692f) {
      pcVar10 = pcVar10 + (int64_t)pcVar11;
      if (pcVar10 <= pcVar11) {
LAB_1802b5374:
        pcVar10 = unaff_R14;
        if ((char *)puVar1[1] != (char *)0x0) {
          pcVar10 = (char *)puVar1[1];
        }
        uVar8 = 0xffffffffffffffff;
        do {
          uVar8 = uVar8 + 1;
        } while (pcVar10[uVar8] != '\0');
        if (((uVar8 < 3) || (*pcVar10 != '0')) ||
           (puVar14 = &processed_var_5412_ptr, (pcVar10[1] + 0xa8U & 0xdf) != 0)) {
          puVar14 = &rendering_buffer_2208_ptr;
        }
        param_1 = (float)AdvancedSystemOptimizer(param_1,puVar14,aiStackX_20);
        if ((uint64_t)(int64_t)aiStackX_20[0] <
            (uint64_t)(*(int64_t *)(unaff_RSI + 0xd0) - *(int64_t *)(unaff_RSI + 200) >> 3)) {
          DataStructure_64330(*(uint64_t *)
                         (*(int64_t *)(unaff_RSI + 200) + (int64_t)aiStackX_20[0] * 8),puVar15);
          lVar13 = *(int64_t *)(unaff_RSI + 200);
          lVar3 = *(int64_t *)(lVar13 + (int64_t)aiStackX_20[0] * 8);
          *(float *)(lVar3 + 0x8c) = *(float *)(lVar3 + 0x8c) * 0.0016666667;
          lVar13 = *(int64_t *)(lVar13 + (int64_t)aiStackX_20[0] * 8);
          param_1 = *(float *)(lVar13 + 0x90) * 0.0016666667;
          *(float *)(lVar13 + 0x90) = param_1;
        }
        break;
      }
      lVar13 = (int64_t)&processed_var_9168_ptr - (int64_t)pcVar11;
      while (*pcVar11 == pcVar11[lVar13]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar10 <= pcVar11) goto LAB_1802b5374;
      }
    }
  }
  pcVar10 = "emitter";
  do {
    pcVar16 = pcVar10;
    pcVar10 = pcVar16 + 1;
  } while (*pcVar10 != '\0');
  puVar15 = (uint64_t *)puVar15[0xb];
  do {
    if (puVar15 == (uint64_t *)0x0) {
DataStructure_b54b3:
      DataStructure_6a670(param_1,unaff_RSI + 0xa8);
      *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
// WARNING: Subroutine does not return
      SystemSecurityChecker(param_9 ^ (uint64_t)&local_buffer_00000000);
    }
    if ((char *)*puVar15 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar11 = unaff_R14;
    }
    else {
      pcVar10 = (char *)puVar15[2];
      pcVar11 = (char *)*puVar15;
    }
    if (pcVar10 == pcVar16 + -0x180a18047) {
      pcVar10 = pcVar10 + (int64_t)pcVar11;
      uVar4 = param_10;
      uVar5 = param_11;
      if (pcVar10 <= pcVar11) goto LAB_1802b5304;
      lVar13 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar11;
      while (*pcVar11 == pcVar11[lVar13]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar10 <= pcVar11) goto LAB_1802b5304;
      }
    }
    puVar15 = (uint64_t *)puVar15[0xb];
  } while( true );
}
// 函数: void DataStructure_b52f0(float param_1)
void DataStructure_b52f0(float param_1)
{
  int64_t lVar1;
  char *pcVar2;
  uint64_t uVar3;
  char *pcVar4;
  char *pcVar5;
  int64_t lVar6;
  void *puVar7;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  char *unaff_RDI;
  uint64_t *puVar8;
  char *pcVar9;
  char *unaff_R14;
  int aiStackX_20 [2];
  uint64_t local_var_48;
LAB_1802b5304:
  pcVar9 = "_index_";
  do {
    pcVar5 = pcVar9;
    pcVar9 = pcVar5 + 1;
  } while (*pcVar9 != '\0');
  puVar8 = (uint64_t *)unaff_RBX[8];
  pcVar9 = unaff_RDI;
  if (puVar8 != (uint64_t *)0x0) {
LAB_1802b5320:
    if ((char *)*puVar8 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = unaff_R14;
    }
    else {
      pcVar2 = (char *)puVar8[2];
      pcVar4 = (char *)*puVar8;
    }
    if (pcVar2 != pcVar5 + -0x180a1692f) goto LAB_1802b545e;
    pcVar2 = pcVar2 + (int64_t)pcVar4;
    if (pcVar4 < pcVar2) {
      lVar6 = (int64_t)&processed_var_9168_ptr - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar6]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_1802b5374;
      }
      goto LAB_1802b545e;
    }
LAB_1802b5374:
    pcVar5 = unaff_R14;
    if ((char *)puVar8[1] != (char *)0x0) {
      pcVar5 = (char *)puVar8[1];
    }
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (pcVar5[uVar3] != '\0');
    if (((uVar3 < 3) || (*pcVar5 != '0')) ||
       (puVar7 = &processed_var_5412_ptr, (pcVar5[1] + 0xa8U & 0xdf) != 0)) {
      puVar7 = &rendering_buffer_2208_ptr;
    }
    param_1 = (float)AdvancedSystemOptimizer(param_1,puVar7,aiStackX_20);
    if ((uint64_t)(int64_t)aiStackX_20[0] <
        (uint64_t)(*(int64_t *)(unaff_RSI + 0xd0) - *(int64_t *)(unaff_RSI + 200) >> 3)) {
      DataStructure_64330(*(uint64_t *)(*(int64_t *)(unaff_RSI + 200) + (int64_t)aiStackX_20[0] * 8),
                    unaff_RBX);
      lVar6 = *(int64_t *)(unaff_RSI + 200);
      lVar1 = *(int64_t *)(lVar6 + (int64_t)aiStackX_20[0] * 8);
      *(float *)(lVar1 + 0x8c) = *(float *)(lVar1 + 0x8c) * 0.0016666667;
      lVar6 = *(int64_t *)(lVar6 + (int64_t)aiStackX_20[0] * 8);
      param_1 = *(float *)(lVar6 + 0x90) * 0.0016666667;
      *(float *)(lVar6 + 0x90) = param_1;
    }
  }
LAB_1802b5435:
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  unaff_RBX = (uint64_t *)unaff_RBX[0xb];
  do {
    if (unaff_RBX == (uint64_t *)0x0) {
      DataStructure_6a670(param_1,unaff_RSI + 0xa8);
      *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
    }
    if ((char *)*unaff_RBX == (char *)0x0) {
      lVar6 = 0;
      pcVar5 = unaff_R14;
    }
    else {
      lVar6 = unaff_RBX[2];
      pcVar5 = (char *)*unaff_RBX;
    }
    if (lVar6 == (int64_t)pcVar9 - (int64_t)unaff_RDI) {
      pcVar2 = pcVar5 + lVar6;
      if (pcVar2 <= pcVar5) goto LAB_1802b5304;
      lVar6 = (int64_t)unaff_RDI - (int64_t)pcVar5;
      while (*pcVar5 == pcVar5[lVar6]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802b5304;
      }
    }
    unaff_RBX = (uint64_t *)unaff_RBX[0xb];
  } while( true );
LAB_1802b545e:
  puVar8 = (uint64_t *)puVar8[6];
  if (puVar8 == (uint64_t *)0x0) goto LAB_1802b5435;
  goto LAB_1802b5320;
}
// 函数: void DataStructure_b532e(float param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void DataStructure_b532e(float param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
{
  int64_t lVar1;
  char *pcVar2;
  uint64_t uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t lVar7;
  void *puVar8;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  char *unaff_RDI;
  uint64_t *puVar9;
  char *unaff_R14;
  int aiStackX_20 [2];
  uint64_t local_var_48;
  while (unaff_RBX = (uint64_t *)unaff_RBX[0xb], unaff_RBX != (uint64_t *)0x0) {
    if ((char *)*unaff_RBX == (char *)0x0) {
      lVar7 = 0;
      pcVar4 = unaff_R14;
    }
    else {
      lVar7 = unaff_RBX[2];
      pcVar4 = (char *)*unaff_RBX;
    }
    if (lVar7 == param_4) {
      pcVar6 = pcVar4 + lVar7;
      if (pcVar6 <= pcVar4) goto LAB_1802b5304;
      lVar7 = (int64_t)unaff_RDI - (int64_t)pcVar4;
      while (*pcVar4 == pcVar4[lVar7]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar6 <= pcVar4) goto LAB_1802b5304;
      }
    }
  }
DataStructure_b54b3:
  DataStructure_6a670(param_1,unaff_RSI + 0xa8);
  *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
LAB_1802b5304:
  pcVar4 = "_index_";
  do {
    pcVar6 = pcVar4;
    pcVar4 = pcVar6 + 1;
  } while (*pcVar4 != '\0');
  puVar9 = (uint64_t *)unaff_RBX[8];
  pcVar4 = unaff_RDI;
  if (puVar9 != (uint64_t *)0x0) {
LAB_1802b5320:
    if ((char *)*puVar9 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar5 = unaff_R14;
    }
    else {
      pcVar2 = (char *)puVar9[2];
      pcVar5 = (char *)*puVar9;
    }
    if (pcVar2 != pcVar6 + -0x180a1692f) goto LAB_1802b545e;
    pcVar2 = pcVar2 + (int64_t)pcVar5;
    if (pcVar5 < pcVar2) {
      lVar7 = (int64_t)&processed_var_9168_ptr - (int64_t)pcVar5;
      while (*pcVar5 == pcVar5[lVar7]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802b5374;
      }
      goto LAB_1802b545e;
    }
LAB_1802b5374:
    pcVar6 = unaff_R14;
    if ((char *)puVar9[1] != (char *)0x0) {
      pcVar6 = (char *)puVar9[1];
    }
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (pcVar6[uVar3] != '\0');
    if (((uVar3 < 3) || (*pcVar6 != '0')) ||
       (puVar8 = &processed_var_5412_ptr, (pcVar6[1] + 0xa8U & 0xdf) != 0)) {
      puVar8 = &rendering_buffer_2208_ptr;
    }
    param_1 = (float)AdvancedSystemOptimizer(param_1,puVar8,aiStackX_20);
    if ((uint64_t)(int64_t)aiStackX_20[0] <
        (uint64_t)(*(int64_t *)(unaff_RSI + 0xd0) - *(int64_t *)(unaff_RSI + 200) >> 3)) {
      DataStructure_64330(*(uint64_t *)(*(int64_t *)(unaff_RSI + 200) + (int64_t)aiStackX_20[0] * 8),
                    unaff_RBX);
      lVar7 = *(int64_t *)(unaff_RSI + 200);
      lVar1 = *(int64_t *)(lVar7 + (int64_t)aiStackX_20[0] * 8);
      *(float *)(lVar1 + 0x8c) = *(float *)(lVar1 + 0x8c) * 0.0016666667;
      lVar7 = *(int64_t *)(lVar7 + (int64_t)aiStackX_20[0] * 8);
      param_1 = *(float *)(lVar7 + 0x90) * 0.0016666667;
      *(float *)(lVar7 + 0x90) = param_1;
    }
  }
LAB_1802b5435:
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  unaff_RBX = (uint64_t *)unaff_RBX[0xb];
  if (unaff_RBX != (uint64_t *)0x0) {
    do {
      if ((char *)*unaff_RBX == (char *)0x0) {
        lVar7 = 0;
        pcVar6 = unaff_R14;
      }
      else {
        lVar7 = unaff_RBX[2];
        pcVar6 = (char *)*unaff_RBX;
      }
      if (lVar7 == (int64_t)pcVar4 - (int64_t)unaff_RDI) {
        pcVar2 = pcVar6 + lVar7;
        if (pcVar2 <= pcVar6) goto LAB_1802b5304;
        lVar7 = (int64_t)unaff_RDI - (int64_t)pcVar6;
        while (*pcVar6 == pcVar6[lVar7]) {
          pcVar6 = pcVar6 + 1;
          if (pcVar2 <= pcVar6) goto LAB_1802b5304;
        }
      }
      unaff_RBX = (uint64_t *)unaff_RBX[0xb];
      if (unaff_RBX == (uint64_t *)0x0) break;
    } while( true );
  }
  goto DataStructure_b54b3;
LAB_1802b545e:
  puVar9 = (uint64_t *)puVar9[6];
  if (puVar9 == (uint64_t *)0x0) goto LAB_1802b5435;
  goto LAB_1802b5320;
}
// 函数: void DataStructure_b5340(float param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
void DataStructure_b5340(float param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
{
  char *pcVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char *pcVar4;
  int64_t lVar5;
  void *puVar6;
  uint64_t *unaff_RBX;
  char *unaff_RBP;
  int64_t unaff_RSI;
  char *unaff_RDI;
  char *pcVar7;
  char *pcVar8;
  int64_t in_R10;
  char *unaff_R14;
  float unaff_XMM6_Da;
  int aiStackX_20 [2];
  uint64_t local_var_48;
code_r0x0001802b5340:
  lVar5 = 0;
  pcVar4 = unaff_R14;
  do {
    pcVar7 = unaff_RDI;
    if (lVar5 == in_R10) {
      pcVar1 = pcVar4 + lVar5;
      if (pcVar4 < pcVar1) {
        lVar5 = (int64_t)unaff_RBP - (int64_t)pcVar4;
        do {
          if (*pcVar4 != pcVar4[lVar5]) goto LAB_1802b545e;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < pcVar1);
      }
      pcVar4 = unaff_R14;
      if ((char *)param_4[1] != (char *)0x0) {
        pcVar4 = (char *)param_4[1];
      }
      uVar3 = 0xffffffffffffffff;
      do {
        uVar3 = uVar3 + 1;
      } while (pcVar4[uVar3] != '\0');
      if (((uVar3 < 3) || (*pcVar4 != '0')) ||
         (puVar6 = &processed_var_5412_ptr, (pcVar4[1] + 0xa8U & 0xdf) != 0)) {
        puVar6 = &rendering_buffer_2208_ptr;
      }
      param_1 = (float)AdvancedSystemOptimizer(param_1,puVar6,aiStackX_20);
      if ((uint64_t)(int64_t)aiStackX_20[0] <
          (uint64_t)(*(int64_t *)(unaff_RSI + 0xd0) - *(int64_t *)(unaff_RSI + 200) >> 3)) {
        DataStructure_64330(*(uint64_t *)(*(int64_t *)(unaff_RSI + 200) + (int64_t)aiStackX_20[0] * 8)
                      ,unaff_RBX);
        lVar5 = *(int64_t *)(unaff_RSI + 200);
        lVar2 = *(int64_t *)(lVar5 + (int64_t)aiStackX_20[0] * 8);
        *(float *)(lVar2 + 0x8c) = *(float *)(lVar2 + 0x8c) * unaff_XMM6_Da;
        lVar5 = *(int64_t *)(lVar5 + (int64_t)aiStackX_20[0] * 8);
        param_1 = *(float *)(lVar5 + 0x90) * unaff_XMM6_Da;
        *(float *)(lVar5 + 0x90) = param_1;
      }
LAB_1802b5435:
      do {
        pcVar7 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      unaff_RBX = (uint64_t *)unaff_RBX[0xb];
      do {
        if (unaff_RBX == (uint64_t *)0x0) {
          DataStructure_6a670(param_1,unaff_RSI + 0xa8);
          *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
// WARNING: Subroutine does not return
          SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
        }
        if ((char *)*unaff_RBX == (char *)0x0) {
          lVar5 = 0;
          pcVar4 = unaff_R14;
        }
        else {
          lVar5 = unaff_RBX[2];
          pcVar4 = (char *)*unaff_RBX;
        }
        if (lVar5 == (int64_t)pcVar7 - (int64_t)unaff_RDI) {
          pcVar1 = pcVar4 + lVar5;
          pcVar8 = unaff_RBP;
          if (pcVar1 <= pcVar4) goto LAB_1802b5307;
          lVar5 = (int64_t)unaff_RDI - (int64_t)pcVar4;
          while (*pcVar4 == pcVar4[lVar5]) {
            pcVar4 = pcVar4 + 1;
            if (pcVar1 <= pcVar4) goto LAB_1802b5307;
          }
        }
        unaff_RBX = (uint64_t *)unaff_RBX[0xb];
      } while( true );
    }
LAB_1802b545e:
    param_4 = (uint64_t *)param_4[6];
    if (param_4 == (uint64_t *)0x0) goto LAB_1802b5435;
LAB_1802b5320:
    pcVar4 = (char *)*param_4;
    if (pcVar4 == (char *)0x0) goto code_r0x0001802b5340;
    lVar5 = param_4[2];
  } while( true );
LAB_1802b5307:
  do {
    pcVar8 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  param_4 = (uint64_t *)unaff_RBX[8];
  in_R10 = (int64_t)pcVar8 - (int64_t)unaff_RBP;
  pcVar7 = unaff_RDI;
  if (param_4 != (uint64_t *)0x0) goto LAB_1802b5320;
  goto LAB_1802b5435;
}
// 函数: void DataStructure_b54b3(void)
void DataStructure_b54b3(void)
{
  int64_t unaff_RSI;
  uint64_t local_var_48;
  DataStructure_6a670();
  *(int *)(unaff_RSI + 0x40) = *(int *)(unaff_RSI + 0x40) + 2;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_b5530(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)
void DataStructure_b5530(int64_t param_1,int64_t param_2,int64_t param_3,char param_4)
{
  int8_t auVar1 [16];
  char cVar2;
  int64_t lVar3;
  int iVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  uint64_t *puVar8;
  char cVar9;
  int64_t lVar10;
  void *puVar11;
  int8_t stack_array_168 [32];
  uint local_var_148;
  uint local_var_140;
  uint local_var_138;
  uint local_var_130;
  uint local_var_128;
  uint local_var_120;
  uint local_var_118;
  uint local_var_110;
  uint local_var_108;
  uint local_var_100;
  char cStack_f8;
  int64_t lStack_f0;
  int64_t lStack_e8;
  uint64_t *plocal_var_e0;
  uint64_t local_var_d8;
  void *plocal_var_c8;
  void *plocal_var_c0;
  int32_t local_var_b8;
  uint8_t stack_array_b0 [72];
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  cVar9 = '\0';
  cStack_f8 = param_4;
  lStack_f0 = param_2;
  lStack_e8 = param_3;
  if ((*(uint *)(param_1 + 0x70) & 0xfffffffd) != 0) goto LAB_1802b58d6;
  puVar5 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  *(int32_t *)(puVar5 + 5) = 1;
  puVar5[6] = 0;
  puVar5[8] = 0;
  pcVar6 = "effect";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  *puVar5 = &processed_var_4664_ptr;
  puVar5[2] = pcVar7 + -0x180a17ea7;
  lVar3 = *(int64_t *)(param_1 + 0x68);
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == *(int *)(lVar3 + 0x28)) {
    if (iVar4 == 0) {
LAB_1802b562d:
      if (*(int *)(lVar3 + 0x28) != 0) goto LAB_1802b5631;
    }
    else {
      pcVar6 = *(char **)(param_1 + 0x20);
      pcVar7 = pcVar6;
      do {
        cVar9 = *pcVar7;
        cVar2 = pcVar7[*(int64_t *)(lVar3 + 0x20) - (int64_t)pcVar6];
        if (cVar9 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (cVar9 != cVar2) goto LAB_1802b5635;
    }
  }
  else {
    if (iVar4 == 0) goto LAB_1802b562d;
LAB_1802b5631:
    pcVar6 = *(char **)(param_1 + 0x20);
LAB_1802b5635:
    pcVar7 = "";
    if (pcVar6 != (char *)0x0) {
      pcVar7 = pcVar6;
    }
    SystemAllocationProcessor(param_2,puVar5,&processed_var_5144_ptr,pcVar7);
  }
  puVar8 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[4] = 0;
  *(int32_t *)(puVar8 + 5) = 1;
  puVar8[6] = 0;
  puVar8[8] = 0;
  pcVar6 = "emitter_overrides";
  do {
    pcVar7 = pcVar6;
    pcVar6 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  *puVar8 = &processed_var_5160_ptr;
  puVar8[2] = pcVar7 + -0x180a18097;
  iVar4 = (int)(*(int64_t *)(param_1 + 0xd0) - *(int64_t *)(param_1 + 200) >> 3);
  if (0 < iVar4) {
    lVar10 = 0;
    do {
      DataStructure_b18a0(*(uint64_t *)(*(int64_t *)(param_1 + 200) + lVar10 * 8),param_2,puVar8,
                    *(uint64_t *)(*(int64_t *)(lVar3 + 200) + lVar10 * 8));
      lVar10 = lVar10 + 1;
      param_3 = lStack_e8;
    } while (lVar10 < iVar4);
  }
  if ((puVar8[6] != 0) || (puVar8[8] != 0)) {
    if (puVar5[6] == 0) {
      puVar8[10] = 0;
      puVar5[6] = puVar8;
      puVar5[7] = puVar8;
      puVar8[4] = puVar5;
      puVar8[0xb] = 0;
    }
    else {
      puVar8[10] = puVar5[7];
      *(uint64_t **)(puVar5[7] + 0x58) = puVar8;
      puVar5[7] = puVar8;
      puVar8[4] = puVar5;
      puVar8[0xb] = 0;
    }
  }
  if ((puVar5[6] != 0) || (cVar9 = cStack_f8, puVar5[8] != 0)) {
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar5[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar5;
    }
    else {
      puVar5[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar5;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar5;
    puVar5[4] = param_3;
    puVar5[0xb] = 0;
    plocal_var_c8 = &memory_allocator_3480_ptr;
    plocal_var_c0 = stack_array_b0;
    local_var_b8 = 0;
    stack_array_b0[0] = 0;
    auVar1 = *(int8_t (*) [16])(*(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x10) + 0xc);
    local_var_108 = auVar1._14_2_ & 0xff;
    local_var_110 = auVar1._12_4_ >> 8 & 0xff;
    local_var_118 = auVar1._12_4_ & 0xff;
    local_var_120 = auVar1._11_4_ & 0xff;
    local_var_128 = auVar1._10_4_ & 0xff;
    local_var_130 = auVar1._9_4_ & 0xff;
    local_var_148 = auVar1._4_4_ & 0xffff;
    local_var_100 = (uint)auVar1[0xf];
    local_var_138 = (uint)auVar1[8];
    local_var_140 = (uint)auVar1._6_2_;
    SystemCore_CacheManager(stack_array_68,0x28,&processed_var_6672_ptr);
    (**(code **)(plocal_var_c8 + 0x18))(&plocal_var_c8,stack_array_68,0x26);
    param_2 = lStack_f0;
    puVar11 = &system_buffer_ptr;
    if (plocal_var_c0 != (void *)0x0) {
      puVar11 = plocal_var_c0;
    }
    SystemAllocationProcessor(lStack_f0,puVar5,&processed_var_4600_ptr,puVar11);
    plocal_var_c8 = &system_state_ptr;
    cVar9 = '\0';
  }
LAB_1802b58d6:
  if (((*(int *)(param_1 + 0x70) == 1) && (cStack_f8 == '\x01')) || (cVar9 != '\0')) {
    plocal_var_e0 = (uint64_t *)SystemRenderer(param_2 + 0x60,0x60);
    *plocal_var_e0 = 0;
    plocal_var_e0[1] = 0;
    plocal_var_e0[4] = 0;
    *(int32_t *)(plocal_var_e0 + 5) = 1;
    plocal_var_e0[6] = 0;
    plocal_var_e0[8] = 0;
    pcVar6 = "effect_ref";
    do {
      pcVar7 = pcVar6;
      pcVar6 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    *plocal_var_e0 = &processed_var_4672_ptr;
    plocal_var_e0[2] = pcVar7 + -0x180a17eaf;
    plocal_var_c8 = &memory_allocator_3480_ptr;
    plocal_var_c0 = stack_array_b0;
    local_var_b8 = 0;
    stack_array_b0[0] = 0;
    auVar1 = *(int8_t (*) [16])(*(int64_t *)(param_1 + 0x10) + 0xc);
    local_var_108 = auVar1._14_2_ & 0xff;
    local_var_110 = auVar1._12_4_ >> 8 & 0xff;
    local_var_118 = auVar1._12_4_ & 0xff;
    local_var_120 = auVar1._11_4_ & 0xff;
    local_var_128 = auVar1._10_4_ & 0xff;
    local_var_130 = auVar1._9_4_ & 0xff;
    local_var_148 = auVar1._4_4_ & 0xffff;
    local_var_100 = (uint)auVar1[0xf];
    local_var_138 = (uint)auVar1[8];
    local_var_140 = (uint)auVar1._6_2_;
    SystemCore_CacheManager(stack_array_68,0x28,&processed_var_6672_ptr);
    (**(code **)(plocal_var_c8 + 0x18))(&plocal_var_c8,stack_array_68,0x26);
    puVar5 = plocal_var_e0;
    puVar11 = &system_buffer_ptr;
    if (plocal_var_c0 != (void *)0x0) {
      puVar11 = plocal_var_c0;
    }
    SystemAllocationProcessor(lStack_f0,plocal_var_e0,&processed_var_4600_ptr,puVar11);
    if (*(int64_t *)(lStack_e8 + 0x30) == 0) {
      puVar5[10] = 0;
      *(uint64_t **)(lStack_e8 + 0x30) = puVar5;
    }
    else {
      puVar5[10] = *(uint64_t *)(lStack_e8 + 0x38);
      *(uint64_t **)(*(int64_t *)(lStack_e8 + 0x38) + 0x58) = puVar5;
    }
    *(uint64_t **)(lStack_e8 + 0x38) = puVar5;
    puVar5[4] = lStack_e8;
    puVar5[0xb] = 0;
    plocal_var_c8 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * DataStructure_b5ac0(int64_t *param_1,uint64_t *param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x108,8,3,0,0xfffffffffffffffe);
  plVar3 = (int64_t *)DataStructure_b6690(uVar2);
  if ((int)plVar3[0xe] == 1) {
    SystemDataInitializer(&processed_var_5216_ptr);
  }
  else {
    if (plVar3[2] != param_1[2]) {
      plVar3[2] = param_1[2];
    }
    SystemEventProcessor(plVar3 + 9,param_1 + 9);
    DataStructure_6d3f0(plVar3 + 0x15,param_1 + 0x15);
    DataStructure_6a670(plVar3,plVar3 + 0x15);
    *(int *)(plVar3 + 8) = (int)plVar3[8] + 1;
  }
  if ((int)param_1[0xe] == 1) {
    (**(code **)(*param_1 + 0x28))(param_1);
    plVar1 = (int64_t *)plVar3[0xd];
    plVar3[0xd] = (int64_t)param_1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  else if ((int)param_1[0xe] == 2) {
    SystemCore_PointerManager(plVar3 + 0xd,param_1);
  }
  else {
    CoreEngine_080810(plVar3 + 0xd,param_1 + 0xd);
  }
  *param_2 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return param_2;
}
int64_t * DataStructure_b5be0(int64_t param_1,int64_t *param_2,int param_3,int param_4)
{
  int64_t *plVar1;
  plVar1 = *(int64_t **)
            (*(int64_t *)(*(int64_t *)(param_1 + 0x88) + 8 + (int64_t)param_3 * 0x28) +
            (int64_t)param_4 * 8);
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address