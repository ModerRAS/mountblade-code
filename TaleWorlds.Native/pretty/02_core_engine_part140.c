#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 02_core_engine_part140.c - 11 个函数
// 函数: void GenericFunction_180133b38(float param_1)
void GenericFunction_180133b38(float param_1)
{
  uint64_t *puVar1;
  float fVar2;
  int64_t lVar3;
  uint64_t uVar4;
  char cVar5;
  float *pfVar6;
  char cVar7;
  uint uVar8;
  int8_t *puVar9;
  int32_t uVar11;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  uint64_t uVar12;
  int64_t unaff_RDI;
  char cVar13;
  int32_t unaff_R12D;
  char unaff_R14B;
  char cVar14;
  int iVar15;
  uint64_t unaff_R15;
  float fVar16;
  float unaff_XMM6_Da;
  uint64_t uVar10;
  cVar13 = (char)unaff_R12D;
  if (param_1 == unaff_XMM6_Da) {
    *(char *)(unaff_RBX + 0x1cf8) = cVar13;
  }
  iVar15 = (int)unaff_R15;
  cVar14 = (char)unaff_R15;
  if ((((*(int *)(unaff_RBX + 0x1b2c) == iVar15) || (*(char *)(unaff_RBX + 0x1b3d) != cVar14)) &&
      (*(char *)(unaff_RBX + 0x1cf8) != cVar14)) &&
     ((*(float *)(unaff_RBX + 0x14c8) < unaff_XMM6_Da &&
      (unaff_XMM6_Da < *(float *)(unaff_RBX + 0x151c) ||
       unaff_XMM6_Da == *(float *)(unaff_RBX + 0x151c))))) {
    if ((*(float *)(unaff_RBX + 0x118) <= -256000.0 && *(float *)(unaff_RBX + 0x118) != -256000.0)
       || (cVar7 = cVar13,
          *(float *)(unaff_RBX + 0x11c) <= -256000.0 && *(float *)(unaff_RBX + 0x11c) != -256000.0))
    {
      cVar7 = '\0';
    }
    pfVar6 = (float *)(unaff_RBX + 0x3b4);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)(unaff_RBX + 0x118);
    }
    if ((*pfVar6 <= -256000.0 && *pfVar6 != -256000.0) ||
       (cVar5 = cVar13, pfVar6[1] <= -256000.0 && pfVar6[1] != -256000.0)) {
      cVar5 = '\0';
    }
    if (cVar7 == cVar5) {
      unaff_R14B = cVar13;
    }
  }
  if ((unaff_RSI != 0) && ((*(byte *)(unaff_RSI + 0xc) & 4) == 0)) {
    if (*(int *)(unaff_RBX + 0x1cc0) == 3) {
      if (*(char *)(unaff_RBX + 0x135) == cVar14) {
        puVar9 = &local_buffer_000000a0;
        uVar11 = unaff_R12D;
LAB_180133c1e:
        pfVar6 = (float *)SystemCore_ConfigLoader(puVar9,uVar11,0,0);
        fVar2 = pfVar6[1];
        if ((*pfVar6 != unaff_XMM6_Da) || (fVar2 != unaff_XMM6_Da)) {
          fVar16 = *(float *)(unaff_RBX + 0xbc);
          if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0xbc)) {
            fVar16 = *(float *)(unaff_RBX + 0xb8);
          }
          lVar3 = *(int64_t *)(unaff_RSI + 0x3a0);
          fVar16 = (float)(int)(fVar16 * *(float *)(unaff_RBX + 0x18) * 800.0);
          *(float *)(lVar3 + 0x40) = *pfVar6 * fVar16 + *(float *)(lVar3 + 0x40);
          *(float *)(lVar3 + 0x44) = fVar2 * fVar16 + *(float *)(lVar3 + 0x44);
          *(char *)(unaff_RBX + 0x1d07) = cVar13;
          if (((*(uint *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0xc) & 0x100) == 0) &&
             (*(float *)(unaff_RBX + 0x2e04) <= unaff_XMM6_Da)) {
            *(int32_t *)(unaff_RBX + 0x2e04) = *(int32_t *)(unaff_RBX + 0x1c);
          }
        }
      }
    }
    else if (*(int *)(unaff_RBX + 0x1cc0) == 4) {
      uVar11 = 4;
      puVar9 = &local_buffer_000000a8;
      goto LAB_180133c1e;
    }
  }
  if (unaff_RDI == 0) goto LAB_180133d4a;
  lVar3 = *(int64_t *)(unaff_RBX + 0x1c98);
  uVar12 = unaff_R15;
  if (lVar3 == 0) {
LAB_180133ce2:
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if (*(int64_t *)(unaff_RDI + 0x3c0) != 0) {
      unaff_RDI = *(int64_t *)(unaff_RDI + 0x3c0);
    }
    GenericFunction_18012ed10(unaff_RDI);
    SystemCore_DataCompressor(unaff_RDI);
    if (*(int *)(unaff_RDI + 0x3c8) == iVar15) {
      Function_3984f6ae(unaff_RDI,0);
    }
    if (*(int *)(unaff_RDI + 0x174) == 2) {
      *(int32_t *)(unaff_RBX + 0x1cfc) = unaff_R12D;
    }
    if ((*(uint64_t *)(unaff_RDI + 0x28) != uVar12) &&
       (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)) {
      (**(code **)(unaff_RBX + 0x1578))();
    }
  }
  else if (unaff_RDI != *(int64_t *)(lVar3 + 0x3a8)) {
    uVar12 = *(uint64_t *)(lVar3 + 0x28);
    goto LAB_180133ce2;
  }
  *(uint64_t *)(unaff_RBX + 0x1cd8) = unaff_R15;
LAB_180133d4a:
  if ((unaff_R14B != '\0') && (uVar12 = *(uint64_t *)(unaff_RBX + 0x1c98), uVar12 != 0)) {
    puVar1 = (uint64_t *)(uVar12 + 0x398);
    uVar10 = *puVar1;
    uVar4 = uVar12;
    while (((uVar10 != unaff_R15 && ((*(byte *)(uVar4 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar4 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar4 = *puVar1;
      puVar1 = (uint64_t *)(uVar4 + 0x398);
      uVar10 = *puVar1;
    }
    if (uVar4 != uVar12) {
      SystemCore_DataCompressor(uVar4);
      *(uint64_t *)(uVar4 + 0x3c0) = uVar12;
      uVar12 = *(uint64_t *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar12 + 0x174) & 2) == 0) {
      uVar10 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar8 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar10 = (uint64_t)uVar8;
      if ((uVar8 == 1) && (*(uint64_t *)(uVar4 + 0x410) == unaff_R15)) {
        *(int *)(uVar12 + 0x3cc) = iVar15;
      }
    }
    Function_8d3390b5(uVar10);
  }
  return;
}
// 函数: void GenericFunction_180133cc4(void)
void GenericFunction_180133cc4(void)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t unaff_RBX;
  uint64_t uVar6;
  int64_t unaff_RDI;
  int32_t unaff_R12D;
  char unaff_R14B;
  uint64_t unaff_R15;
  uint64_t uVar5;
  lVar2 = *(int64_t *)(unaff_RBX + 0x1c98);
  uVar6 = unaff_R15;
  if (lVar2 != 0) {
    if (unaff_RDI == *(int64_t *)(lVar2 + 0x3a8)) goto LAB_180133d43;
    uVar6 = *(uint64_t *)(lVar2 + 0x28);
  }
  *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
  if (*(int64_t *)(unaff_RDI + 0x3c0) != 0) {
    unaff_RDI = *(int64_t *)(unaff_RDI + 0x3c0);
  }
  GenericFunction_18012ed10(unaff_RDI);
  SystemCore_DataCompressor(unaff_RDI);
  if (*(int *)(unaff_RDI + 0x3c8) == (int)unaff_R15) {
    Function_3984f6ae(unaff_RDI,0);
  }
  if (*(int *)(unaff_RDI + 0x174) == 2) {
    *(int32_t *)(unaff_RBX + 0x1cfc) = unaff_R12D;
  }
  if ((*(uint64_t *)(unaff_RDI + 0x28) != uVar6) && (*(code **)(unaff_RBX + 0x1578) != (code *)0x0)
     ) {
    (**(code **)(unaff_RBX + 0x1578))();
  }
LAB_180133d43:
  *(uint64_t *)(unaff_RBX + 0x1cd8) = unaff_R15;
  if ((unaff_R14B != '\0') && (uVar6 = *(uint64_t *)(unaff_RBX + 0x1c98), uVar6 != 0)) {
    puVar1 = (uint64_t *)(uVar6 + 0x398);
    uVar5 = *puVar1;
    uVar3 = uVar6;
    while (((uVar5 != unaff_R15 && ((*(byte *)(uVar3 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar3 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar3 = *puVar1;
      puVar1 = (uint64_t *)(uVar3 + 0x398);
      uVar5 = *puVar1;
    }
    if (uVar3 != uVar6) {
      SystemCore_DataCompressor(uVar3);
      *(uint64_t *)(uVar3 + 0x3c0) = uVar6;
      uVar6 = *(uint64_t *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar6 + 0x174) & 2) == 0) {
      uVar5 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar4 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar5 = (uint64_t)uVar4;
      if ((uVar4 == 1) && (*(uint64_t *)(uVar3 + 0x410) == unaff_R15)) {
        *(int *)(uVar6 + 0x3cc) = (int)unaff_R15;
      }
    }
    Function_8d3390b5(uVar5);
  }
  return;
}
// 函数: void GenericFunction_180133d58(void)
void GenericFunction_180133d58(void)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint uVar3;
  int64_t unaff_RBX;
  uint64_t uVar5;
  uint64_t unaff_R15;
  uint64_t uVar4;
  uVar5 = *(uint64_t *)(unaff_RBX + 0x1c98);
  if (uVar5 != 0) {
    puVar1 = (uint64_t *)(uVar5 + 0x398);
    uVar4 = *puVar1;
    uVar2 = uVar5;
    while (((uVar4 != unaff_R15 && ((*(byte *)(uVar2 + 0x174) & 2) == 0)) &&
           ((*(uint *)(uVar2 + 0xc) & 0x15000000) == 0x1000000))) {
      uVar2 = *puVar1;
      puVar1 = (uint64_t *)(uVar2 + 0x398);
      uVar4 = *puVar1;
    }
    if (uVar2 != uVar5) {
      SystemCore_DataCompressor(uVar2);
      *(uint64_t *)(uVar2 + 0x3c0) = uVar5;
      uVar5 = *(uint64_t *)(unaff_RBX + 0x1c98);
    }
    *(int16_t *)(unaff_RBX + 0x1d06) = 0x100;
    if ((*(byte *)(uVar5 + 0x174) & 2) == 0) {
      uVar4 = unaff_R15 & 0xffffffff;
    }
    else {
      uVar3 = *(uint *)(unaff_RBX + 0x1cfc) ^ 1;
      uVar4 = (uint64_t)uVar3;
      if ((uVar3 == 1) && (*(uint64_t *)(uVar2 + 0x410) == unaff_R15)) {
        *(int *)(uVar5 + 0x3cc) = (int)unaff_R15;
      }
    }
    Function_8d3390b5(uVar4);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180133e10(void)
void GenericFunction_180133e10(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  char *pcVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  char *pcVar15;
  uint64_t stack_special_x_8;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  lVar7 = SYSTEM_DATA_MANAGER_A;
  if (0.15 < *(float *)(SYSTEM_DATA_MANAGER_A + 0x1cf0) || *(float *)(SYSTEM_DATA_MANAGER_A + 0x1cf0) == 0.15) {
    if (*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1ce8) == 0) {
      uVar9 = Function_06d4597e(&rendering_buffer_2656_ptr);
      *(uint64_t *)(lVar7 + 0x1ce8) = uVar9;
    }
    lVar13 = **(int64_t **)(lVar7 + 0x1c70);
    fVar1 = *(float *)(lVar13 + 0x10);
    fVar2 = *(float *)(lVar13 + 0x14);
    *(int32_t *)(lVar7 + 0x1be0) = 1;
    *(uint64_t *)(lVar7 + 0x1c28) = 0;
    *(uint64_t *)(lVar7 + 0x1c30) = 0;
    *(float *)(lVar7 + 0x1c18) = fVar1 * 0.2;
    *(float *)(lVar7 + 0x1c1c) = fVar2 * 0.2;
    *(int32_t *)(lVar7 + 0x1c20) = 0x7f7fffff;
    *(int32_t *)(lVar7 + 0x1c24) = 0x7f7fffff;
    fVar1 = *(float *)(lVar13 + 0x14);
    fVar2 = *(float *)(lVar13 + 0x10);
    fVar3 = *(float *)(lVar13 + 0xc);
    local_var_2c = 0x7f7fffff;
    local_var_38 = 1;
    fVar4 = *(float *)(lVar13 + 8);
    *(int32_t *)(lVar7 + 0x1bfc) = 0x3f000000;
    *(float *)(lVar7 + 0x1bf8) = fVar1 * 0.5 + fVar3;
    *(int32_t *)(lVar7 + 0x1c00) = 0x3f000000;
    *(int32_t *)(lVar7 + 0x1bd0) = 1;
    *(float *)(lVar7 + 0x1bf4) = fVar2 * 0.5 + fVar4;
    *(int8_t *)(lVar7 + 0x1c14) = 1;
    fVar1 = *(float *)(lVar7 + 0x162c);
    fVar2 = *(float *)(lVar7 + 0x1630);
    local_var_34 = *(int32_t *)(lVar7 + 0x162c);
    local_var_30 = *(int32_t *)(lVar7 + 0x1630);
    GenericFunction_18013e000(lVar7 + 0x1b90,&local_var_38);
    *(float *)(lVar7 + 0x162c) = fVar1 + fVar1;
    *(float *)(lVar7 + 0x1630) = fVar2 + fVar2;
    CoreSystem_Validator(&rendering_buffer_2656_ptr,0,0xc1347);
    iVar8 = *(int *)(lVar7 + 0x1ab0) + -1;
    lVar13 = (int64_t)iVar8;
    if (-1 < iVar8) {
      do {
        puVar6 = *(uint64_t **)(*(int64_t *)(lVar7 + 0x1ab8) + lVar13 * 8);
        if ((*(char *)((int64_t)puVar6 + 0xaf) != '\0') && (puVar6 == (uint64_t *)puVar6[0x75]))
        {
          uVar5 = *(uint *)((int64_t)puVar6 + 0xc);
          if ((uVar5 >> 0x13 & 1) == 0) {
            pcVar15 = (char *)*puVar6;
            pcVar10 = pcVar15;
            if (pcVar15 == (char *)0xffffffffffffffff) {
LAB_180134021:
              if ((uVar5 >> 0x1a & 1) == 0) {
                if ((uVar5 >> 10 & 1) != 0) {
                  iVar8 = strcmp(pcVar15,&rendering_buffer_2280_ptr);
                  if (iVar8 == 0) {
                    pcVar15 = "(Main menu bar)";
                    goto LAB_180134065;
                  }
                }
                pcVar15 = "(Dock node)";
                if (puVar6[0x82] == 0) {
                  pcVar15 = "(Untitled)";
                }
              }
              else {
                pcVar15 = "(Popup)";
              }
            }
            else {
              while (*pcVar10 != '\0') {
                if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
                   (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
              }
              if (pcVar15 == pcVar10) goto LAB_180134021;
            }
LAB_180134065:
            stack_special_x_8 = 0;
            GenericFunction_180119960(pcVar15,*(uint64_t **)(lVar7 + 0x1cd8) == puVar6,0,&stack_special_x_8);
          }
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
    RenderingSystem_MeshProcessor();
    lVar13 = SYSTEM_DATA_MANAGER_A;
    lVar11 = (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
    lVar7 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
    lVar12 = (int64_t)*(int *)(lVar7 + -0xc + lVar11 * 0xc);
    uVar14 = (uint64_t)*(uint *)(&processed_var_6056_ptr + lVar12 * 0xc);
    if (*(int *)(&processed_var_6048_ptr + lVar12 * 0xc) == 4) {
      if (*(int *)(&processed_var_6052_ptr + lVar12 * 0xc) == 1) {
        *(int32_t *)(uVar14 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
             *(int32_t *)(lVar7 + -8 + lVar11 * 0xc);
        *(int *)(lVar13 + 0x1b90) = *(int *)(lVar13 + 0x1b90) + -1;
        return;
      }
      if (*(int *)(&processed_var_6052_ptr + lVar12 * 0xc) == 2) {
        *(int32_t *)(uVar14 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
             *(int32_t *)(lVar7 + -8 + lVar11 * 0xc);
        *(int32_t *)(uVar14 + 0x162c + lVar13) = *(int32_t *)(lVar7 + -4 + lVar11 * 0xc);
      }
    }
    *(int *)(lVar13 + 0x1b90) = *(int *)(lVar13 + 0x1b90) + -1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180133e3a(void)
void GenericFunction_180133e3a(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  char *pcVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t unaff_RDI;
  uint64_t uVar14;
  char *pcVar15;
  bool in_ZF;
  int32_t uVar16;
  int32_t local_buffer_2c;
  uint64_t local_var_60;
  if (in_ZF) {
    uVar9 = Function_06d4597e(&rendering_buffer_2656_ptr);
    *(uint64_t *)(unaff_RDI + 0x1ce8) = uVar9;
  }
  lVar13 = **(int64_t **)(unaff_RDI + 0x1c70);
  fVar1 = *(float *)(lVar13 + 0x10);
  fVar2 = *(float *)(lVar13 + 0x14);
  *(int32_t *)(unaff_RDI + 0x1be0) = 1;
  *(uint64_t *)(unaff_RDI + 0x1c28) = 0;
  *(uint64_t *)(unaff_RDI + 0x1c30) = 0;
  *(float *)(unaff_RDI + 0x1c18) = fVar1 * 0.2;
  *(float *)(unaff_RDI + 0x1c1c) = fVar2 * 0.2;
  *(int32_t *)(unaff_RDI + 0x1c20) = 0x7f7fffff;
  *(int32_t *)(unaff_RDI + 0x1c24) = 0x7f7fffff;
  fVar1 = *(float *)(lVar13 + 0x14);
  fVar2 = *(float *)(lVar13 + 0x10);
  fVar3 = *(float *)(lVar13 + 0xc);
  local_buffer_2c = 0x7f7fffff;
  uVar16 = 1;
  fVar4 = *(float *)(lVar13 + 8);
  *(int32_t *)(unaff_RDI + 0x1bfc) = 0x3f000000;
  *(float *)(unaff_RDI + 0x1bf8) = fVar1 * 0.5 + fVar3;
  *(int32_t *)(unaff_RDI + 0x1c00) = 0x3f000000;
  *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
  *(float *)(unaff_RDI + 0x1bf4) = fVar2 * 0.5 + fVar4;
  *(int8_t *)(unaff_RDI + 0x1c14) = 1;
  fVar1 = *(float *)(unaff_RDI + 0x162c);
  fVar2 = *(float *)(unaff_RDI + 0x1630);
  GenericFunction_18013e000(unaff_RDI + 0x1b90,&local_buffer_00000020);
  *(float *)(unaff_RDI + 0x162c) = fVar1 + fVar1;
  *(float *)(unaff_RDI + 0x1630) = fVar2 + fVar2;
  CoreSystem_Validator(&rendering_buffer_2656_ptr,0,0xc1347);
  iVar8 = *(int *)(unaff_RDI + 0x1ab0) + -1;
  lVar13 = (int64_t)iVar8;
  if (-1 < iVar8) {
    do {
      puVar6 = *(uint64_t **)(*(int64_t *)(unaff_RDI + 0x1ab8) + lVar13 * 8);
      if ((*(char *)((int64_t)puVar6 + 0xaf) != '\0') && (puVar6 == (uint64_t *)puVar6[0x75])) {
        uVar5 = *(uint *)((int64_t)puVar6 + 0xc);
        if ((uVar5 >> 0x13 & 1) == 0) {
          pcVar15 = (char *)*puVar6;
          pcVar10 = pcVar15;
          if (pcVar15 == (char *)0xffffffffffffffff) {
LAB_180134021:
            if ((uVar5 >> 0x1a & 1) == 0) {
              if ((uVar5 >> 10 & 1) != 0) {
                iVar8 = strcmp(pcVar15,&rendering_buffer_2280_ptr);
                if (iVar8 == 0) {
                  pcVar15 = "(Main menu bar)";
                  goto LAB_180134065;
                }
              }
              pcVar15 = "(Dock node)";
              if (puVar6[0x82] == 0) {
                pcVar15 = "(Untitled)";
              }
            }
            else {
              pcVar15 = "(Popup)";
            }
          }
          else {
            while (*pcVar10 != '\0') {
              if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
                 (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
            }
            if (pcVar15 == pcVar10) goto LAB_180134021;
          }
LAB_180134065:
          local_var_60 = 0;
          GenericFunction_180119960(pcVar15,*(uint64_t **)(unaff_RDI + 0x1cd8) == puVar6,0,&local_buffer_00000060,
                        uVar16);
        }
      }
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  RenderingSystem_MeshProcessor();
  lVar7 = SYSTEM_DATA_MANAGER_A;
  lVar11 = (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
  lVar13 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
  lVar12 = (int64_t)*(int *)(lVar13 + -0xc + lVar11 * 0xc);
  uVar14 = (uint64_t)*(uint *)(&processed_var_6056_ptr + lVar12 * 0xc);
  if (*(int *)(&processed_var_6048_ptr + lVar12 * 0xc) == 4) {
    if (*(int *)(&processed_var_6052_ptr + lVar12 * 0xc) == 1) {
      *(int32_t *)(uVar14 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
           *(int32_t *)(lVar13 + -8 + lVar11 * 0xc);
      *(int *)(lVar7 + 0x1b90) = *(int *)(lVar7 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&processed_var_6052_ptr + lVar12 * 0xc) == 2) {
      *(int32_t *)(uVar14 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
           *(int32_t *)(lVar13 + -8 + lVar11 * 0xc);
      *(int32_t *)(uVar14 + 0x162c + lVar7) = *(int32_t *)(lVar13 + -4 + lVar11 * 0xc);
    }
  }
  *(int *)(lVar7 + 0x1b90) = *(int *)(lVar7 + 0x1b90) + -1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180133e3f(void)
void GenericFunction_180133e3f(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  char *pcVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t unaff_RDI;
  uint64_t uVar14;
  char *pcVar15;
  bool in_ZF;
  int32_t uVar16;
  int32_t local_buffer_2c;
  uint64_t local_var_60;
  if (in_ZF) {
    uVar9 = Function_06d4597e(&rendering_buffer_2656_ptr);
    *(uint64_t *)(unaff_RDI + 0x1ce8) = uVar9;
  }
  lVar13 = **(int64_t **)(unaff_RDI + 0x1c70);
  fVar1 = *(float *)(lVar13 + 0x10);
  fVar2 = *(float *)(lVar13 + 0x14);
  *(int32_t *)(unaff_RDI + 0x1be0) = 1;
  *(uint64_t *)(unaff_RDI + 0x1c28) = 0;
  *(uint64_t *)(unaff_RDI + 0x1c30) = 0;
  *(float *)(unaff_RDI + 0x1c18) = fVar1 * 0.2;
  *(float *)(unaff_RDI + 0x1c1c) = fVar2 * 0.2;
  *(int32_t *)(unaff_RDI + 0x1c20) = 0x7f7fffff;
  *(int32_t *)(unaff_RDI + 0x1c24) = 0x7f7fffff;
  fVar1 = *(float *)(lVar13 + 0x14);
  fVar2 = *(float *)(lVar13 + 0x10);
  fVar3 = *(float *)(lVar13 + 0xc);
  local_buffer_2c = 0x7f7fffff;
  uVar16 = 1;
  fVar4 = *(float *)(lVar13 + 8);
  *(int32_t *)(unaff_RDI + 0x1bfc) = 0x3f000000;
  *(float *)(unaff_RDI + 0x1bf8) = fVar1 * 0.5 + fVar3;
  *(int32_t *)(unaff_RDI + 0x1c00) = 0x3f000000;
  *(int32_t *)(unaff_RDI + 0x1bd0) = 1;
  *(float *)(unaff_RDI + 0x1bf4) = fVar2 * 0.5 + fVar4;
  *(int8_t *)(unaff_RDI + 0x1c14) = 1;
  fVar1 = *(float *)(unaff_RDI + 0x162c);
  fVar2 = *(float *)(unaff_RDI + 0x1630);
  GenericFunction_18013e000(unaff_RDI + 0x1b90,&local_buffer_00000020);
  *(float *)(unaff_RDI + 0x162c) = fVar1 + fVar1;
  *(float *)(unaff_RDI + 0x1630) = fVar2 + fVar2;
  CoreSystem_Validator(&rendering_buffer_2656_ptr,0,0xc1347);
  iVar8 = *(int *)(unaff_RDI + 0x1ab0) + -1;
  lVar13 = (int64_t)iVar8;
  if (-1 < iVar8) {
    do {
      puVar6 = *(uint64_t **)(*(int64_t *)(unaff_RDI + 0x1ab8) + lVar13 * 8);
      if ((*(char *)((int64_t)puVar6 + 0xaf) != '\0') && (puVar6 == (uint64_t *)puVar6[0x75])) {
        uVar5 = *(uint *)((int64_t)puVar6 + 0xc);
        if ((uVar5 >> 0x13 & 1) == 0) {
          pcVar15 = (char *)*puVar6;
          pcVar10 = pcVar15;
          if (pcVar15 == (char *)0xffffffffffffffff) {
LAB_180134021:
            if ((uVar5 >> 0x1a & 1) == 0) {
              if ((uVar5 >> 10 & 1) != 0) {
                iVar8 = strcmp(pcVar15,&rendering_buffer_2280_ptr);
                if (iVar8 == 0) {
                  pcVar15 = "(Main menu bar)";
                  goto LAB_180134065;
                }
              }
              pcVar15 = "(Dock node)";
              if (puVar6[0x82] == 0) {
                pcVar15 = "(Untitled)";
              }
            }
            else {
              pcVar15 = "(Popup)";
            }
          }
          else {
            while (*pcVar10 != '\0') {
              if (((*pcVar10 == '#') && (pcVar10[1] == '#')) ||
                 (pcVar10 = pcVar10 + 1, pcVar10 == (char *)0xffffffffffffffff)) break;
            }
            if (pcVar15 == pcVar10) goto LAB_180134021;
          }
LAB_180134065:
          local_var_60 = 0;
          GenericFunction_180119960(pcVar15,*(uint64_t **)(unaff_RDI + 0x1cd8) == puVar6,0,&local_buffer_00000060,
                        uVar16);
        }
      }
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  RenderingSystem_MeshProcessor();
  lVar7 = SYSTEM_DATA_MANAGER_A;
  lVar11 = (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
  lVar13 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
  lVar12 = (int64_t)*(int *)(lVar13 + -0xc + lVar11 * 0xc);
  uVar14 = (uint64_t)*(uint *)(&processed_var_6056_ptr + lVar12 * 0xc);
  if (*(int *)(&processed_var_6048_ptr + lVar12 * 0xc) == 4) {
    if (*(int *)(&processed_var_6052_ptr + lVar12 * 0xc) == 1) {
      *(int32_t *)(uVar14 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
           *(int32_t *)(lVar13 + -8 + lVar11 * 0xc);
      *(int *)(lVar7 + 0x1b90) = *(int *)(lVar7 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&processed_var_6052_ptr + lVar12 * 0xc) == 2) {
      *(int32_t *)(uVar14 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
           *(int32_t *)(lVar13 + -8 + lVar11 * 0xc);
      *(int32_t *)(uVar14 + 0x162c + lVar7) = *(int32_t *)(lVar13 + -4 + lVar11 * 0xc);
    }
  }
  *(int *)(lVar7 + 0x1b90) = *(int *)(lVar7 + 0x1b90) + -1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180133fb3(void)
void GenericFunction_180133fb3(void)
{
  uint uVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  char *pcVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar9;
  char *pcVar10;
  uint64_t local_var_60;
  do {
    puVar2 = *(uint64_t **)(*(int64_t *)(unaff_RDI + 0x1ab8) + unaff_RSI * 8);
    if ((*(char *)((int64_t)puVar2 + 0xaf) != '\0') && (puVar2 == (uint64_t *)puVar2[0x75])) {
      uVar1 = *(uint *)((int64_t)puVar2 + 0xc);
      if ((uVar1 >> 0x13 & 1) == 0) {
        pcVar10 = (char *)*puVar2;
        pcVar6 = pcVar10;
        if (pcVar10 == (char *)0xffffffffffffffff) {
LAB_180134021:
          if ((uVar1 >> 0x1a & 1) == 0) {
            if ((uVar1 >> 10 & 1) != 0) {
              iVar5 = strcmp(pcVar10,&rendering_buffer_2280_ptr);
              if (iVar5 == 0) {
                pcVar10 = "(Main menu bar)";
                goto LAB_180134065;
              }
            }
            pcVar10 = "(Dock node)";
            if (puVar2[0x82] == 0) {
              pcVar10 = "(Untitled)";
            }
          }
          else {
            pcVar10 = "(Popup)";
          }
        }
        else {
          while (*pcVar6 != '\0') {
            if (((*pcVar6 == '#') && (pcVar6[1] == '#')) ||
               (pcVar6 = pcVar6 + 1, pcVar6 == (char *)0xffffffffffffffff)) break;
          }
          if (pcVar10 == pcVar6) goto LAB_180134021;
        }
LAB_180134065:
        local_var_60 = 0;
        GenericFunction_180119960(pcVar10,*(uint64_t **)(unaff_RDI + 0x1cd8) == puVar2,0,&local_buffer_00000060);
      }
    }
    unaff_RSI = unaff_RSI + -1;
    if (unaff_RSI < 0) {
      RenderingSystem_MeshProcessor();
      lVar4 = SYSTEM_DATA_MANAGER_A;
      lVar7 = (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
      lVar3 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
      lVar8 = (int64_t)*(int *)(lVar3 + -0xc + lVar7 * 0xc);
      uVar9 = (uint64_t)*(uint *)(&processed_var_6056_ptr + lVar8 * 0xc);
      if (*(int *)(&processed_var_6048_ptr + lVar8 * 0xc) == 4) {
        if (*(int *)(&processed_var_6052_ptr + lVar8 * 0xc) == 1) {
          *(int32_t *)(uVar9 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
               *(int32_t *)(lVar3 + -8 + lVar7 * 0xc);
          *(int *)(lVar4 + 0x1b90) = *(int *)(lVar4 + 0x1b90) + -1;
          return;
        }
        if (*(int *)(&processed_var_6052_ptr + lVar8 * 0xc) == 2) {
          *(int32_t *)(uVar9 + 0x1628 + SYSTEM_DATA_MANAGER_A) =
               *(int32_t *)(lVar3 + -8 + lVar7 * 0xc);
          *(int32_t *)(uVar9 + 0x162c + lVar4) = *(int32_t *)(lVar3 + -4 + lVar7 * 0xc);
        }
      }
      *(int *)(lVar4 + 0x1b90) = *(int *)(lVar4 + 0x1b90) + -1;
      return;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18013409c(void)
void GenericFunction_18013409c(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  RenderingSystem_MeshProcessor();
  lVar2 = SYSTEM_DATA_MANAGER_A;
  lVar3 = (int64_t)*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b90);
  lVar1 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b98);
  lVar4 = (int64_t)*(int *)(lVar1 + -0xc + lVar3 * 0xc);
  uVar5 = (uint64_t)*(uint *)(&processed_var_6056_ptr + lVar4 * 0xc);
  if (*(int *)(&processed_var_6048_ptr + lVar4 * 0xc) == 4) {
    if (*(int *)(&processed_var_6052_ptr + lVar4 * 0xc) == 1) {
      *(int32_t *)(uVar5 + 0x1628 + SYSTEM_DATA_MANAGER_A) = *(int32_t *)(lVar1 + -8 + lVar3 * 0xc);
      *(int *)(lVar2 + 0x1b90) = *(int *)(lVar2 + 0x1b90) + -1;
      return;
    }
    if (*(int *)(&processed_var_6052_ptr + lVar4 * 0xc) == 2) {
      *(int32_t *)(uVar5 + 0x1628 + SYSTEM_DATA_MANAGER_A) = *(int32_t *)(lVar1 + -8 + lVar3 * 0xc);
      *(int32_t *)(uVar5 + 0x162c + lVar2) = *(int32_t *)(lVar1 + -4 + lVar3 * 0xc);
    }
  }
  *(int *)(lVar2 + 0x1b90) = *(int *)(lVar2 + 0x1b90) + -1;
  return;
}
// 函数: void GenericFunction_1801340db(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void GenericFunction_1801340db(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
{
  int iVar1;
  int64_t in_RAX;
  int64_t in_R10;
  iVar1 = *(int *)(in_RAX + 4 + in_R10 * 4);
  if (iVar1 == 1) {
    *(int32_t *)(param_4 + 0x1628 + param_1) = *(int32_t *)(param_3 + -8 + param_2 * 4);
    *(int *)(param_1 + 0x1b90) = *(int *)(param_1 + 0x1b90) + -1;
    return;
  }
  if (iVar1 == 2) {
    *(int32_t *)(param_4 + 0x1628 + param_1) = *(int32_t *)(param_3 + -8 + param_2 * 4);
    *(int32_t *)(param_4 + 0x162c + param_1) = *(int32_t *)(param_3 + -4 + param_2 * 4);
  }
  *(int *)(param_1 + 0x1b90) = *(int *)(param_1 + 0x1b90) + -1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180134130(void)
void GenericFunction_180134130(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  float fVar6;
  lVar2 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar1 = *(int64_t *)(lVar2 + 0x1af8);
  if ((*(char *)(lVar1 + 0xb4) == '\0') && (*(int64_t *)(lVar1 + 0x210) != 0)) {
    Function_c7f18569();
    GenericFunction_180126d80();
    lVar4 = *(int64_t *)(lVar1 + 0x210);
    uVar5 = 0;
    fVar6 = *(float *)(lVar1 + 0x104);
    if (*(float *)(lVar1 + 0x104) <= *(float *)(lVar4 + 0x20)) {
      fVar6 = *(float *)(lVar4 + 0x20);
    }
    iVar3 = *(int *)(lVar4 + 0xc) + 1;
    *(int *)(lVar4 + 0xc) = iVar3;
    *(float *)(lVar4 + 0x20) = fVar6;
    if (iVar3 < *(int *)(lVar4 + 0x10)) {
      fVar6 = (float)Function_ab331876();
      *(float *)(lVar1 + 0x20c) = (fVar6 - *(float *)(lVar1 + 0x204)) + *(float *)(lVar2 + 0x166c);
      Function_52f57c55(*(uint64_t *)(lVar1 + 0x2e8),*(int32_t *)(lVar4 + 0xc));
    }
    else {
      *(int32_t *)(lVar1 + 0x20c) = 0;
      Function_52f57c55(*(uint64_t *)(lVar1 + 0x2e8),0);
      *(int32_t *)(lVar4 + 0x1c) = *(int32_t *)(lVar4 + 0x20);
      *(int *)(lVar4 + 0xc) = (int)uVar5;
    }
    *(float *)(lVar1 + 0x100) =
         (float)(int)(*(float *)(lVar1 + 0x204) + *(float *)(lVar1 + 0x40) +
                     *(float *)(lVar1 + 0x20c));
    *(int32_t *)(lVar1 + 0x104) = *(int32_t *)(lVar4 + 0x1c);
    *(uint64_t *)(lVar1 + 0x120) = uVar5;
    *(int *)(lVar1 + 0x128) = (int)uVar5;
    GenericFunction_180134400();
    lVar1 = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x210);
    Function_f6474f54((*(float *)(((int64_t)*(int *)(lVar1 + 0xc) + 1) * 0x1c +
                                   *(int64_t *)(lVar1 + 0x38)) -
                        *(float *)((int64_t)*(int *)(lVar1 + 0xc) * 0x1c +
                                  *(int64_t *)(lVar1 + 0x38))) *
                        (*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x14)) * 0.65);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801342e0(int param_1,float param_2)
void GenericFunction_1801342e0(int param_1,float param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  lVar4 = SYSTEM_DATA_MANAGER_A;
  while( true ) {
    lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x1af8) + 0x210);
    if (param_1 < 0) {
      param_1 = *(int *)(lVar1 + 0xc);
    }
    if (((*(uint *)(lVar1 + 4) & 4) == 0) && (param_1 < *(int *)(lVar1 + 0x10) + -1)) {
      bVar3 = true;
      iVar5 = param_1;
      if (param_1 < 0) {
        iVar5 = *(int *)(lVar1 + 0xc);
      }
      lVar2 = *(int64_t *)(lVar1 + 0x38);
      lVar7 = ((int64_t)iVar5 + 1) * 0x1c;
      lVar6 = (int64_t)iVar5 * 0x1c;
      if (*(char *)(lVar1 + 9) == '\0') {
        fVar8 = *(float *)(lVar7 + lVar2) - *(float *)(lVar6 + lVar2);
      }
      else {
        fVar8 = *(float *)(lVar7 + 4 + lVar2) - *(float *)(lVar6 + 4 + lVar2);
      }
      fVar10 = *(float *)(lVar1 + 0x18);
      fVar8 = (fVar10 - *(float *)(lVar1 + 0x14)) * fVar8;
    }
    else {
      fVar10 = *(float *)(lVar1 + 0x18);
      bVar3 = false;
      fVar8 = 0.0;
    }
    if (((*(uint *)(lVar1 + 4) & 8) == 0) &&
       (fVar9 = fVar10 - (float)(*(int *)(lVar1 + 0x10) - param_1) * *(float *)(lVar4 + 0x1688),
       fVar9 <= param_2)) {
      param_2 = fVar9;
    }
    *(float *)((int64_t)param_1 * 0x1c + *(int64_t *)(lVar1 + 0x38)) =
         (param_2 - *(float *)(lVar1 + 0x14)) / (fVar10 - *(float *)(lVar1 + 0x14));
    if (!bVar3) break;
    param_1 = param_1 + 1;
    fVar10 = *(float *)(lVar4 + 0x1688);
    if (*(float *)(lVar4 + 0x1688) <= fVar8) {
      fVar10 = fVar8;
    }
    param_2 = param_2 + fVar10;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address