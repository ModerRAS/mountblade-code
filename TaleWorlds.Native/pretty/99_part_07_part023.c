#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_07_part023.c - 5 个函数
// 函数: void function_4b24f0(void)
void function_4b24f0(void)
{
  float *pfVar1;
  float *pfVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar20;
  int64_t lVar21;
  uint64_t uVar22;
  int64_t unaff_R13;
  float fVar23;
  float fVar24;
  float fVar25;
  lVar4 = *(int64_t *)(unaff_RSI + 0xd8);
  if ('\0' < (char)*(byte *)(unaff_RSI + 0x20)) {
    uVar22 = (uint64_t)*(byte *)(unaff_RSI + 0x20);
    lVar20 = unaff_RDI;
    lVar21 = unaff_RDI;
    do {
      if (lVar4 == 0) {
        fVar23 = 1.0;
        fVar24 = 1.0;
        fVar25 = 1.0;
      }
      else {
        pfVar1 = (float *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0xd8) + 0x18) + lVar20);
        fVar23 = *pfVar1;
        fVar24 = pfVar1[1];
        fVar25 = pfVar1[2];
      }
      lVar20 = lVar20 + 0x10;
      lVar5 = *(int64_t *)(unaff_RSI + 0x18);
      lVar6 = *(int64_t *)(*(int64_t *)(unaff_R13 + 0xa78) + 0x140);
      pfVar1 = (float *)(lVar6 + 0xc0 + unaff_RDI);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar1 = (float *)(lVar6 + 0xb0 + unaff_RDI);
      fVar11 = *pfVar1;
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar2 = (float *)(lVar6 + 0xa0 + unaff_RDI);
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      unaff_RDI = unaff_RDI + 0x1b0;
      puVar3 = (uint64_t *)(lVar21 + 0x90 + lVar5);
      uVar18 = *puVar3;
      uVar19 = puVar3[1];
      pfVar1 = (float *)(lVar21 + 0x60 + lVar5);
      *pfVar1 = *pfVar2 * fVar23;
      pfVar1[1] = fVar15 * fVar23;
      pfVar1[2] = fVar16 * fVar23;
      pfVar1[3] = fVar17;
      pfVar1 = (float *)(lVar21 + 0x70 + lVar5);
      *pfVar1 = fVar11 * fVar24;
      pfVar1[1] = fVar12 * fVar24;
      pfVar1[2] = fVar13 * fVar24;
      pfVar1[3] = fVar14;
      pfVar1 = (float *)(lVar21 + 0x80 + lVar5);
      *pfVar1 = fVar7 * fVar25;
      pfVar1[1] = fVar8 * fVar25;
      pfVar1[2] = fVar9 * fVar25;
      pfVar1[3] = fVar10;
      puVar3 = (uint64_t *)(lVar21 + 0x90 + lVar5);
      *puVar3 = uVar18;
      puVar3[1] = uVar19;
      lVar21 = lVar21 + 0x100;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  return;
}
// 函数: void function_4b2513(void)
void function_4b2513(void)
{
  float *pfVar1;
  float *pfVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  byte in_AL;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar19;
  int64_t in_R9;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t unaff_R13;
  float fVar22;
  float fVar23;
  float fVar24;
  uVar21 = (uint64_t)in_AL;
  lVar19 = unaff_RDI;
  lVar20 = unaff_RDI;
  do {
    if (in_R9 == 0) {
      fVar22 = 1.0;
      fVar23 = 1.0;
      fVar24 = 1.0;
    }
    else {
      pfVar1 = (float *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0xd8) + 0x18) + lVar19);
      fVar22 = *pfVar1;
      fVar23 = pfVar1[1];
      fVar24 = pfVar1[2];
    }
    lVar19 = lVar19 + 0x10;
    lVar4 = *(int64_t *)(unaff_RSI + 0x18);
    lVar5 = *(int64_t *)(*(int64_t *)(unaff_R13 + 0xa78) + 0x140);
    pfVar1 = (float *)(lVar5 + 0xc0 + unaff_RDI);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar9 = pfVar1[3];
    pfVar1 = (float *)(lVar5 + 0xb0 + unaff_RDI);
    fVar10 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar12 = pfVar1[2];
    fVar13 = pfVar1[3];
    pfVar2 = (float *)(lVar5 + 0xa0 + unaff_RDI);
    fVar14 = pfVar2[1];
    fVar15 = pfVar2[2];
    fVar16 = pfVar2[3];
    unaff_RDI = unaff_RDI + 0x1b0;
    puVar3 = (uint64_t *)(lVar20 + 0x90 + lVar4);
    uVar17 = *puVar3;
    uVar18 = puVar3[1];
    pfVar1 = (float *)(lVar20 + 0x60 + lVar4);
    *pfVar1 = *pfVar2 * fVar22;
    pfVar1[1] = fVar14 * fVar22;
    pfVar1[2] = fVar15 * fVar22;
    pfVar1[3] = fVar16;
    pfVar1 = (float *)(lVar20 + 0x70 + lVar4);
    *pfVar1 = fVar10 * fVar23;
    pfVar1[1] = fVar11 * fVar23;
    pfVar1[2] = fVar12 * fVar23;
    pfVar1[3] = fVar13;
    pfVar1 = (float *)(lVar20 + 0x80 + lVar4);
    *pfVar1 = fVar6 * fVar24;
    pfVar1[1] = fVar7 * fVar24;
    pfVar1[2] = fVar8 * fVar24;
    pfVar1[3] = fVar9;
    puVar3 = (uint64_t *)(lVar20 + 0x90 + lVar4);
    *puVar3 = uVar17;
    puVar3[1] = uVar18;
    lVar20 = lVar20 + 0x100;
    uVar21 = uVar21 - 1;
  } while (uVar21 != 0);
  return;
}
// 函数: void function_4b2735(void)
void function_4b2735(void)
{
  return;
}
// 函数: void function_4b2750(int64_t param_1,int64_t *param_2,uint64_t param_3,float *param_4,char param_5
void function_4b2750(int64_t param_1,int64_t *param_2,uint64_t param_3,float *param_4,char param_5
                  )
{
  float *pfVar1;
  ushort uVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  uint uVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  float *pfVar17;
  int iVar18;
  int64_t lVar19;
  int64_t lVar20;
  int iVar21;
  int64_t lVar22;
  int32_t uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int8_t stack_array_b8 [8];
  uint64_t local_var_b0;
  int64_t *plStack_a0;
  char cStack_98;
  char cStack_97;
  char cStack_96;
  function_07ea10(param_2,1);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plStack_c8 = (int64_t *)0x0;
  plStack_c0 = (int64_t *)0x0;
  plStack_a0 = (int64_t *)0x0;
  local_var_b0 = 0;
  stack_array_b8[0] = 0;
  uVar23 = RenderingSystem_MaterialProcessor(&plStack_c8,param_2,0);
  if (param_2 != (int64_t *)0x0) {
    uVar23 = (**(code **)(*param_2 + 0x38))(param_2);
  }
  plVar8 = (int64_t *)function_1efdb0(uVar23,param_2);
  if (plVar8 == (int64_t *)0x0) {
    SystemDataInitializer(&processed_var_6240_ptr);
  }
  else {
    uVar3 = *(uint *)(plStack_c0 + 2);
    uVar15 = (uint64_t)(int)uVar3;
    iVar21 = 0;
    if (0 < (int)uVar3) {
      lVar22 = 0;
      uVar16 = uVar15;
      do {
        puVar9 = *(uint64_t **)(param_1 + 0x2e8);
        puVar11 = (uint64_t *)(param_1 + 0x2d8);
        if (puVar9 == (uint64_t *)0x0) {
LAB_1804b28aa:
          pfVar17 = (float *)(plStack_c0[3] + lVar22);
          fVar24 = *pfVar17;
          fVar27 = pfVar17[1];
          fVar25 = pfVar17[2];
          fVar6 = pfVar17[3];
          iVar18 = 0;
          if (0 < *(int *)(param_1 + 0x298)) {
            lVar20 = 0;
            pfVar17 = param_4;
            fVar26 = fVar25;
            fVar28 = fVar27;
            fVar29 = fVar24;
            while( true ) {
              lVar4 = *(int64_t *)(param_1 + 0x290);
              lVar5 = *plVar8;
              lVar19 = (int64_t)((*(int *)(lVar20 + 0x44 + lVar4) * (int)uVar16 + iVar21) * 3);
              uVar2 = *(ushort *)(lVar5 + lVar19 * 2);
              uVar10 = uVar2 & 0x3ff;
              if ((uVar2 & 0x7c00) == 0x7c00) {
                uVar7 = 0x8f;
              }
              else if ((uVar2 & 0x7c00) == 0) {
                if ((uVar2 & 0x3ff) == 0) {
                  uVar7 = 0xffffff90;
                }
                else {
                  uVar7 = 1;
                  do {
                    uVar7 = uVar7 - 1;
                    uVar10 = uVar10 * 2;
                  } while ((uVar10 >> 10 & 1) == 0);
                  uVar10 = uVar10 & 0x3ff;
                }
              }
              else {
                uVar7 = uVar2 >> 10 & 0x1f;
              }
              fVar12 = (float)((uVar2 & 0x8000) << 0x10 | (uVar7 + 0x70) * 0x800000 | uVar10 << 0xd)
              ;
              uVar2 = *(ushort *)(lVar5 + 2 + lVar19 * 2);
              uVar10 = uVar2 & 0x3ff;
              if ((uVar2 & 0x7c00) == 0x7c00) {
                uVar7 = 0x8f;
              }
              else if ((uVar2 & 0x7c00) == 0) {
                if ((uVar2 & 0x3ff) == 0) {
                  uVar7 = 0xffffff90;
                }
                else {
                  uVar7 = 1;
                  do {
                    uVar7 = uVar7 - 1;
                    uVar10 = uVar10 * 2;
                  } while ((uVar10 >> 10 & 1) == 0);
                  uVar10 = uVar10 & 0x3ff;
                }
              }
              else {
                uVar7 = uVar2 >> 10 & 0x1f;
              }
              fVar13 = (float)((uVar2 & 0x8000) << 0x10 | (uVar7 + 0x70) * 0x800000 | uVar10 << 0xd)
              ;
              uVar2 = *(ushort *)(lVar5 + 4 + lVar19 * 2);
              uVar10 = uVar2 & 0x3ff;
              if ((uVar2 & 0x7c00) == 0x7c00) {
                uVar7 = 0x8f;
              }
              else if ((uVar2 & 0x7c00) == 0) {
                if ((uVar2 & 0x3ff) == 0) {
                  uVar7 = 0xffffff90;
                }
                else {
                  uVar7 = 1;
                  do {
                    uVar7 = uVar7 - 1;
                    uVar10 = uVar10 * 2;
                  } while ((uVar10 >> 10 & 1) == 0);
                  uVar10 = uVar10 & 0x3ff;
                }
              }
              else {
                uVar7 = uVar2 >> 10 & 0x1f;
              }
              fVar14 = (float)((uVar2 & 0x8000) << 0x10 | (uVar7 + 0x70) * 0x800000 | uVar10 << 0xd)
              ;
              if (1e-09 < fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14) {
                fVar24 = *pfVar17;
                if ((param_5 != '\0') && (*(char *)(lVar20 + 0x51 + lVar4) != '\0')) {
                  fVar24 = 0.0;
                }
                fVar25 = (*(float *)(lVar20 + 0x4c + lVar4) - *(float *)(lVar20 + 0x48 + lVar4)) *
                         fVar24 + *(float *)(lVar20 + 0x48 + lVar4);
                fVar24 = fVar29 + fVar25 * fVar12;
                fVar27 = fVar28 + fVar25 * fVar13;
                fVar25 = fVar26 + fVar25 * fVar14;
                fVar26 = fVar25;
                fVar28 = fVar27;
                fVar29 = fVar24;
              }
              pfVar1 = (float *)(lVar22 + plStack_c0[3]);
              *pfVar1 = fVar24;
              pfVar1[1] = fVar27;
              pfVar1[2] = fVar25;
              pfVar1[3] = fVar6;
              cStack_96 = '\x01';
              cStack_98 = '\x01';
              iVar18 = iVar18 + 1;
              pfVar17 = pfVar17 + 1;
              lVar20 = lVar20 + 0xa8;
              if (*(int *)(param_1 + 0x298) <= iVar18) break;
              uVar16 = (uint64_t)uVar3;
            }
          }
        }
        else {
          do {
            if (*(int *)(puVar9 + 4) < iVar21) {
              puVar9 = (uint64_t *)*puVar9;
            }
            else {
              puVar11 = puVar9;
              puVar9 = (uint64_t *)puVar9[1];
            }
          } while (puVar9 != (uint64_t *)0x0);
          if ((puVar11 == (uint64_t *)(param_1 + 0x2d8)) || (iVar21 < *(int *)(puVar11 + 4))) {
            uVar16 = (uint64_t)uVar3;
            goto LAB_1804b28aa;
          }
        }
        iVar21 = iVar21 + 1;
        lVar22 = lVar22 + 0x10;
        uVar15 = uVar15 - 1;
        uVar16 = (uint64_t)uVar3;
      } while (uVar15 != 0);
    }
  }
  if ((plStack_c8 != (int64_t *)0x0) && (plStack_c0 != (int64_t *)0x0)) {
    if (cStack_96 != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(stack_array_b8);
    if (cStack_98 != '\0') {
      SystemInitializer(plStack_c8);
    }
    if (cStack_97 != '\0') {
      SystemInitializer(plStack_c8);
    }
    plVar8 = plStack_c0;
    plStack_c0 = (int64_t *)0x0;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
    }
  }
  SystemSecurityManager(stack_array_b8);
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  if (plStack_c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  if (plStack_c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_c8 + 0x38))();
  }
  return;
}
// 函数: void function_4b2c40(int64_t param_1,int64_t param_2,char param_3)
void function_4b2c40(int64_t param_1,int64_t param_2,char param_3)
{
  char cVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint64_t uVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  iVar7 = *(int *)(param_1 + 0x298);
  lVar10 = (int64_t)iVar7;
  uVar3 = 0;
  cVar1 = '\0';
  if (0 < iVar7) {
    piVar8 = (int *)(*(int64_t *)(param_1 + 0x290) + 0x44);
    uVar2 = uVar3;
    uVar9 = uVar3;
    do {
      iVar5 = (int)uVar2;
      if (*piVar8 == 0x3c) goto LAB_1804b2c9c;
      uVar2 = (uint64_t)(iVar5 + 1);
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 0x2a;
    } while ((int64_t)uVar9 < lVar10);
  }
  iVar5 = -1;
LAB_1804b2c9c:
  if (0 < iVar7) {
    piVar8 = (int *)(*(int64_t *)(param_1 + 0x290) + 0x44);
    uVar2 = uVar3;
    uVar9 = uVar3;
    do {
      iVar6 = (int)uVar9;
      if (*piVar8 == 0x3d) goto LAB_1804b2ccc;
      uVar9 = (uint64_t)(iVar6 + 1);
      uVar2 = uVar2 + 1;
      piVar8 = piVar8 + 0x2a;
    } while ((int64_t)uVar2 < lVar10);
  }
  iVar6 = -1;
LAB_1804b2ccc:
  if (0 < iVar7) {
    piVar8 = (int *)(*(int64_t *)(param_1 + 0x290) + 0x44);
    uVar2 = uVar3;
    uVar9 = uVar3;
    do {
      iVar4 = (int)uVar9;
      if (*piVar8 == 0x3e) goto LAB_1804b2cfc;
      uVar9 = (uint64_t)(iVar4 + 1);
      uVar2 = uVar2 + 1;
      piVar8 = piVar8 + 0x2a;
    } while ((int64_t)uVar2 < lVar10);
  }
  iVar4 = -1;
LAB_1804b2cfc:
  if (0 < iVar7) {
    piVar8 = (int *)(*(int64_t *)(param_1 + 0x290) + 0x44);
    uVar2 = uVar3;
    do {
      iVar7 = (int)uVar2;
      if (*piVar8 == 0x3f) goto LAB_1804b2d2f;
      uVar2 = (uint64_t)(iVar7 + 1);
      uVar3 = uVar3 + 1;
      piVar8 = piVar8 + 0x2a;
    } while ((int64_t)uVar3 < lVar10);
  }
  iVar7 = -1;
LAB_1804b2d2f:
  fVar12 = *(float *)(param_2 + 0x53c);
  fVar11 = 128.0;
  if (5.0 <= fVar12) {
    if (10.0 <= fVar12) {
      if (16.0 <= fVar12) {
        cVar1 = (21.0 <= fVar12) + '\x03';
      }
      else {
        cVar1 = '\x02';
      }
    }
    else {
      cVar1 = '\x01';
    }
    if (cVar1 == '\x01') {
      fVar12 = 5.0;
    }
    else if (cVar1 == '\x02') {
      fVar12 = 10.0;
    }
    else if (cVar1 == '\x03') {
      fVar12 = 16.0;
    }
    else if (cVar1 == '\x04') {
      fVar12 = 21.0;
    }
    else {
      fVar12 = 128.0;
    }
  }
  else {
    fVar12 = 3.0;
  }
  if (cVar1 == '\0') {
    fVar11 = 5.0;
  }
  else if (cVar1 == '\x01') {
    fVar11 = 10.0;
  }
  else if (cVar1 == '\x02') {
    fVar11 = 16.0;
  }
  else if (cVar1 == '\x03') {
    fVar11 = 21.0;
  }
  if (param_3 == '\0') {
    *(int32_t *)(param_2 + 0x540) = *(int32_t *)(param_2 + 0x3c + (int64_t)iVar5 * 4);
    *(int32_t *)(param_2 + 0x544) = *(int32_t *)(param_2 + 0x3c + (int64_t)iVar6 * 4);
    *(int32_t *)(param_2 + 0x55c) = *(int32_t *)(param_2 + 0x3c + (int64_t)iVar4 * 4);
    fVar13 = (fVar11 - fVar12) * *(float *)(param_2 + 0x3c + (int64_t)iVar7 * 4) + fVar12;
    if ((fVar12 <= fVar13) && (fVar12 = fVar13, fVar11 <= fVar13)) {
      fVar12 = fVar11;
    }
    *(float *)(param_2 + 0x53c) = fVar12;
  }
  else {
    *(int32_t *)(param_2 + 0x3c + (int64_t)iVar5 * 4) = *(int32_t *)(param_2 + 0x540);
    *(int32_t *)(param_2 + 0x3c + (int64_t)iVar6 * 4) = *(int32_t *)(param_2 + 0x544);
    *(int32_t *)(param_2 + 0x3c + (int64_t)iVar4 * 4) = *(int32_t *)(param_2 + 0x55c);
    *(float *)(param_2 + 0x3c + (int64_t)iVar7 * 4) =
         (*(float *)(param_2 + 0x53c) - fVar12) / (fVar11 - fVar12);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_4b2ea0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int iVar4;
  int *piVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  float fVar13;
  uint astack_special_x_8 [2];
  int8_t astack_special_x_10 [8];
  uVar12 = 0;
  function_4b2c40(param_1,param_2,1);
  lVar8 = *(int64_t *)(param_1 + 0xa00);
  iVar9 = 0;
  if ((*(int64_t *)(param_1 + 0xa08) - lVar8) / 0xa0c != 0) {
    uVar12 = 1;
    lVar10 = 0;
    do {
      lVar1 = lVar8 + lVar10;
      lVar8 = (int64_t)*(int *)(lVar8 + lVar10) + -1;
      lVar11 = 0;
      fVar13 = 0.0;
      if (0 < lVar8) {
        do {
          lVar7 = 0;
          if (0 < *(int *)(param_1 + 0x298)) {
            piVar5 = (int *)(*(int64_t *)(param_1 + 0x290) + 0x44);
            do {
              if (*piVar5 == *(int *)(lVar1 + 8 + lVar11 * 8)) goto LAB_1804b2f70;
              lVar7 = lVar7 + 1;
              piVar5 = piVar5 + 0x2a;
            } while (lVar7 < *(int *)(param_1 + 0x298));
          }
          lVar7 = -1;
LAB_1804b2f70:
          lVar2 = lVar11 * 8;
          lVar11 = lVar11 + 1;
          fVar13 = fVar13 + *(float *)(param_2 + 0x3c + lVar7 * 4) * *(float *)(lVar1 + 4 + lVar2);
        } while (lVar11 < lVar8);
      }
      lVar11 = 0;
      if (0 < *(int *)(param_1 + 0x298)) {
        piVar5 = (int *)(*(int64_t *)(param_1 + 0x290) + 0x44);
        do {
          if (*piVar5 == *(int *)(lVar1 + 8 + lVar8 * 8)) goto LAB_1804b2fc9;
          lVar11 = lVar11 + 1;
          piVar5 = piVar5 + 0x2a;
        } while (lVar11 < *(int *)(param_1 + 0x298));
      }
      lVar11 = -1;
LAB_1804b2fc9:
      if (0.0 <= fVar13) {
        if (1.0 <= fVar13) {
          fVar13 = 1.0;
        }
      }
      else {
        fVar13 = 0.0;
      }
      *(float *)(param_2 + 0x3c + lVar11 * 4) = fVar13;
      iVar9 = iVar9 + 1;
      lVar8 = *(int64_t *)(param_1 + 0xa00);
      lVar10 = lVar10 + 0xa0c;
    } while ((uint64_t)(int64_t)iVar9 <
             (uint64_t)((*(int64_t *)(param_1 + 0xa08) - lVar8) / 0xa0c));
  }
  astack_special_x_8[0] = Function_061553b3(param_2);
  puVar6 = (uint64_t *)0x180c95e98;
  puVar3 = system_system_config;
  while (puVar3 != (uint64_t *)0x0) {
    if (*(uint *)(puVar3 + 4) < astack_special_x_8[0]) {
      puVar3 = (uint64_t *)*puVar3;
    }
    else {
      puVar6 = puVar3;
      puVar3 = (uint64_t *)puVar3[1];
    }
  }
  if ((puVar6 == (uint64_t *)0x180c95e98) || (astack_special_x_8[0] < *(uint *)(puVar6 + 4))) {
    puVar6 = (uint64_t *)PhysicsSystem_IntegrationProcessor(0x180c95e98,astack_special_x_10,astack_special_x_8[0],puVar6,astack_special_x_8);
    puVar6 = (uint64_t *)*puVar6;
  }
  lVar8 = puVar6[5];
  iVar9 = 0;
  fVar13 = *(float *)(param_2 + 0x53c);
  if (0 < *(int *)(lVar8 + 0x298)) {
    lVar10 = 0;
    do {
      lVar1 = *(int64_t *)(lVar8 + 0x290);
      if ((*(int *)(lVar1 + 0x30 + lVar10) == 8) &&
         (iVar4 = strcmp(*(uint64_t *)(lVar1 + 0x28 + lVar10),&processed_var_6224_ptr), iVar4 == 0)) {
        lVar11 = 0;
        if (0 < *(int *)(param_1 + 0x298)) {
          piVar5 = (int *)(*(int64_t *)(param_1 + 0x290) + 0x44);
          do {
            if (*piVar5 == *(int *)(lVar1 + 0x44 + lVar10)) goto LAB_1804b30fd;
            lVar11 = lVar11 + 1;
            piVar5 = piVar5 + 0x2a;
          } while (lVar11 < *(int *)(param_1 + 0x298));
        }
        lVar11 = -1;
LAB_1804b30fd:
        *(float *)(param_2 + 0x3c + lVar11 * 4) = fVar13 * 0.0078125;
      }
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 0xa8;
    } while (iVar9 < *(int *)(lVar8 + 0x298));
  }
  function_4b2c40(param_1,param_2,0);
  return uVar12;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address