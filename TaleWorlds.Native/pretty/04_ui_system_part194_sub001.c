#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part194_sub001.c - 6 个函数
#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part194.c - 6 个函数
// 函数: void function_77df30(int64_t *param_1)
void function_77df30(int64_t *param_1)
{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  lVar2 = *param_1;
  iVar4 = 0;
  lVar3 = *(int64_t *)(lVar2 + 0xe8);
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar5 = 0;
    do {
      fVar1 = *(float *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x68) + lVar5) + 0x38);
      if (iVar4 == 0) {
        *(float *)(lVar2 + 0x278) = fVar1 * 0.01;
      }
      else if (iVar4 == 1) {
        *(float *)(lVar2 + 0x27c) = fVar1 * 0.01;
      }
      else if (iVar4 == 2) {
        *(float *)(lVar2 + 0x280) = fVar1;
      }
      else if (iVar4 == 3) {
        *(float *)(lVar2 + 0x284) = fVar1;
      }
      else if (iVar4 == 4) {
        *(uint *)(lVar2 + 0x288) = (uint)(0.5 <= fVar1);
      }
      lVar3 = *(int64_t *)(lVar2 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(lVar3 + 0x60));
  }
  function_77e250(lVar2,2,0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_77e000(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  lVar2 = 2;
  plVar1 = (int64_t *)(*param_1 + 0x240);
  do {
    if (*plVar1 != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_7552_ptr,0x8d,1);
    }
    plVar1 = plVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return 0;
}
uint64_t function_77e070(int64_t *param_1)
{
  int64_t lVar1;
  lVar1 = *param_1;
  *(uint64_t *)(lVar1 + 600) = 0;
  if (*(int64_t *)(lVar1 + 0x230) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(lVar1 + 0x230),0,*(int32_t *)(lVar1 + 0x250));
  }
  if (*(int64_t *)(lVar1 + 0x238) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(lVar1 + 0x238),0,*(int32_t *)(lVar1 + 0x254));
  }
  return 0;
}
uint64_t function_77e0e0(int64_t *param_1,int param_2,float *param_3,int64_t param_4)
{
  int64_t lVar1;
  double dVar2;
  void *puVar3;
  float fVar4;
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(float *)(lVar1 + 0x278) * 100.0;
    if (param_4 == 0) {
      return 0;
    }
    fVar4 = *(float *)(lVar1 + 0x278);
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 2) {
        if (param_2 == 3) {
          *param_3 = *(float *)(lVar1 + 0x284);
          if (param_4 != 0) {
            puVar3 = &rendering_buffer_2048_ptr;
            dVar2 = (double)*(float *)(lVar1 + 0x284);
            goto LAB_18077e21f;
          }
        }
        else if (param_2 == 4) {
          if (*(int *)(lVar1 + 0x288) == 0) {
            fVar4 = 0.0;
          }
          else {
            fVar4 = 1.0;
          }
          *param_3 = fVar4;
          if (param_4 != 0) {
            puVar3 = &processed_var_8328_ptr;
            if (*(int *)(lVar1 + 0x288) != 0) {
              puVar3 = &processed_var_7668_ptr;
            }
// WARNING: Subroutine does not return
            SystemValidationProcessor(param_4,0x20,&processed_var_552_ptr,puVar3);
          }
        }
        return 0;
      }
      *param_3 = *(float *)(lVar1 + 0x280);
      if (param_4 == 0) {
        return 0;
      }
      puVar3 = &rendering_buffer_2048_ptr;
      dVar2 = (double)*(float *)(lVar1 + 0x280);
      goto LAB_18077e21f;
    }
    *param_3 = *(float *)(lVar1 + 0x27c) * 100.0;
    if (param_4 == 0) {
      return 0;
    }
    fVar4 = *(float *)(lVar1 + 0x27c);
  }
  puVar3 = &processed_var_4372_ptr;
  dVar2 = (double)(fVar4 * 100.0);
LAB_18077e21f:
// WARNING: Subroutine does not return
  SystemValidationProcessor(param_4,0x20,puVar3,dVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_77e250(int64_t param_1,int param_2)
{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int32_t uVar7;
  uint64_t uVar8;
  char *pcVar9;
  int *piVar10;
  uint64_t *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int16_t stack_special_x_10;
  if (param_2 == 2) {
    fVar15 = *(float *)(param_1 + 0x278);
    bVar6 = false;
    stack_special_x_10 = 0;
    bVar2 = fVar15 != *(float *)(param_1 + 0x218);
    iVar1 = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
    if (bVar2) {
      *(float *)(param_1 + 0x218) = fVar15;
    }
    fVar15 = *(float *)(param_1 + 0x27c);
    bVar3 = fVar15 != *(float *)(param_1 + 0x21c);
    if (bVar3) {
      *(float *)(param_1 + 0x21c) = fVar15;
    }
    bVar4 = *(float *)(param_1 + 0x280) != *(float *)(param_1 + 0x220);
    if (bVar4) {
      *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x280);
      stack_special_x_10 = 1;
    }
    stack_special_x_10 = (ushort)bVar4;
    fVar15 = *(float *)(param_1 + 0x284);
    bVar5 = fVar15 != *(float *)(param_1 + 0x224);
    if (bVar5) {
      *(float *)(param_1 + 0x224) = fVar15;
      stack_special_x_10 = CONCAT11(1,bVar4);
    }
    if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x288)) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x288);
    }
    iVar12 = 0;
    pcVar9 = (char *)&stack_special_x_10;
    puVar11 = (uint64_t *)(param_1 + 0x230);
    piVar10 = (int *)(param_1 + 0x260);
    do {
      if ((*pcVar9 != '\0') || (*puVar11 == 0)) {
        *piVar10 = (int)((float)iVar1 * (float)piVar10[-0x10]) / 1000;
        if (puVar11[2] != 0) {
// WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),puVar11[2],&processed_var_7552_ptr,0x1eb,1);
        }
        piVar10[-4] = *piVar10 * 4;
        uVar8 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*piVar10 * 4 + 0x80,
                              &processed_var_7552_ptr,0x1f2,0);
        puVar11[2] = uVar8;
        if (uVar8 == 0) {
          return 0x26;
        }
        bVar6 = true;
        *puVar11 = uVar8 + 0x7f & 0xffffffffffffff80;
      }
      iVar12 = iVar12 + 1;
      piVar10 = piVar10 + 1;
      puVar11 = puVar11 + 1;
      pcVar9 = pcVar9 + 1;
    } while (iVar12 < 2);
    if ((bVar5 || (bVar4 || (bVar3 || bVar2))) || (bVar6)) {
      fVar15 = *(float *)(param_1 + 0x220);
      if (*(float *)(param_1 + 0x220) <= *(float *)(param_1 + 0x224)) {
        fVar15 = *(float *)(param_1 + 0x224);
      }
      if (0.0 < *(float *)(param_1 + 0x218)) {
        fVar14 = (float)log10f();
        fVar14 = fVar14 * 20.0;
      }
      else {
        fVar14 = -80.0;
      }
      iVar1 = *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x6d0);
      if (*(float *)(param_1 + 0x21c) < 1.0) {
        if (0.0 < *(float *)(param_1 + 0x21c)) {
          fVar13 = (float)log10f();
          fVar13 = 5e-05 / fVar13;
        }
        else {
          fVar13 = -1.25e-05;
        }
        uVar7 = (int32_t)(int64_t)((0.001 - (fVar14 + 100.0) * fVar13) * (float)iVar1 * fVar15);
      }
      else {
        uVar7 = 0xffffffff;
      }
      *(int32_t *)(param_1 + 0x270) = uVar7;
      if (bVar6) {
        *(uint64_t *)(param_1 + 600) = 0;
        if (*(int64_t *)(param_1 + 0x230) != 0) {
// WARNING: Subroutine does not return
          memset(*(int64_t *)(param_1 + 0x230),0,*(int32_t *)(param_1 + 0x250));
        }
        if (*(int64_t *)(param_1 + 0x238) != 0) {
// WARNING: Subroutine does not return
          memset(*(int64_t *)(param_1 + 0x238),0,*(int32_t *)(param_1 + 0x254));
        }
      }
    }
  }
  return 0;
}
uint64_t function_77e42e(float param_1)
{
  int iVar1;
  int32_t uVar2;
  int64_t unaff_RBX;
  char unaff_R15B;
  float fVar3;
  float fVar4;
  float fVar5;
  fVar5 = *(float *)(unaff_RBX + 0x220);
  if (*(float *)(unaff_RBX + 0x220) <= *(float *)(unaff_RBX + 0x224)) {
    fVar5 = *(float *)(unaff_RBX + 0x224);
  }
  if (0.0 < param_1) {
    fVar4 = (float)log10f();
    fVar4 = fVar4 * 20.0;
  }
  else {
    fVar4 = -80.0;
  }
  iVar1 = *(int *)(*(int64_t *)(unaff_RBX + 0xa8) + 0x6d0);
  if (*(float *)(unaff_RBX + 0x21c) < 1.0) {
    if (0.0 < *(float *)(unaff_RBX + 0x21c)) {
      fVar3 = (float)log10f();
      fVar3 = 5e-05 / fVar3;
    }
    else {
      fVar3 = -1.25e-05;
    }
    uVar2 = (int32_t)(int64_t)((0.001 - (fVar4 + 100.0) * fVar3) * (float)iVar1 * fVar5);
  }
  else {
    uVar2 = 0xffffffff;
  }
  *(int32_t *)(unaff_RBX + 0x270) = uVar2;
  if (unaff_R15B != '\0') {
    *(uint64_t *)(unaff_RBX + 600) = 0;
    if (*(int64_t *)(unaff_RBX + 0x230) != 0) {
// WARNING: Subroutine does not return
      memset(*(int64_t *)(unaff_RBX + 0x230),0,*(int32_t *)(unaff_RBX + 0x250));
    }
    if (*(int64_t *)(unaff_RBX + 0x238) != 0) {
// WARNING: Subroutine does not return
      memset(*(int64_t *)(unaff_RBX + 0x238),0,*(int32_t *)(unaff_RBX + 0x254));
    }
  }
  return 0;
}
uint64_t function_77e4ff(void)
{
  int64_t unaff_RBX;
  *(uint64_t *)(unaff_RBX + 600) = 0;
  if (*(int64_t *)(unaff_RBX + 0x230) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(unaff_RBX + 0x230),0,*(int32_t *)(unaff_RBX + 0x250));
  }
  if (*(int64_t *)(unaff_RBX + 0x238) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(unaff_RBX + 0x238),0,*(int32_t *)(unaff_RBX + 0x254));
  }
  return 0;
}
// 函数: void function_77e570(void)
void function_77e570(void)
{
// WARNING: Subroutine does not return
  memset(0x180c0dcb4,0,0x5c);
}
int32_t
function_77e820(int64_t param_1,uint param_2,int64_t param_3,int64_t param_4,int param_5,
             int param_6)
{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  uint64_t uVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int64_t *plVar17;
  if (param_6 == 1) {
    if (param_4 != 0) {
      **(int32_t **)(param_4 + 8) = **(int32_t **)(param_3 + 8);
    }
    uVar6 = *(uint *)(param_1 + 0x270);
    if (uVar6 != 0xffffffff) {
      if ((param_5 != 0) && (uVar6 = *(uint *)(param_1 + 0x274), uVar6 == 0)) {
        return 0xb;
      }
      iVar9 = 0;
      if (param_2 < uVar6) {
        iVar9 = uVar6 - param_2;
      }
      *(int *)(param_1 + 0x274) = iVar9;
      return 0;
    }
  }
  else {
    iVar9 = **(int **)(param_3 + 8);
    iVar4 = iVar9;
    if (2 < iVar9) {
      iVar4 = 2;
    }
    lVar2 = **(int64_t **)(param_3 + 0x18);
    lVar3 = **(int64_t **)(param_4 + 0x18);
    if (lVar2 != 0) {
      if (2 < iVar9) {
// WARNING: Subroutine does not return
        memcpy(lVar3,lVar2,(uint64_t)(iVar9 * param_2) << 2);
      }
      lVar7 = (int64_t)iVar4;
      iVar16 = 0;
      if (0 < iVar4) {
        puVar15 = (uint *)(param_1 + 600);
        plVar17 = (int64_t *)(param_1 + 0x230);
        do {
          pfVar12 = (float *)(lVar2 + (int64_t)iVar16 * 4);
          pfVar13 = (float *)(lVar3 + (int64_t)iVar16 * 4);
          if (param_2 != 0) {
            uVar11 = (uint64_t)*puVar15;
            uVar6 = puVar15[2];
            uVar10 = param_2;
            do {
              pfVar8 = (float *)(*plVar17 + uVar11 * 4);
              uVar5 = 0;
              uVar14 = uVar6 - (int)uVar11;
              if ((int)uVar11 + uVar10 <= uVar6) {
                uVar14 = uVar10;
              }
              if (3 < uVar14) {
                uVar5 = (uVar14 - 4 >> 2) + 1;
                uVar11 = (uint64_t)uVar5;
                uVar5 = uVar5 * 4;
                do {
                  fVar1 = *pfVar12;
                  pfVar12 = pfVar12 + iVar9;
                  *pfVar13 = (1.0 - *(float *)(param_1 + 0x218)) * fVar1 +
                             *(float *)(param_1 + 0x218) * *pfVar8;
                  pfVar13 = pfVar13 + iVar9;
                  *pfVar8 = *(float *)(param_1 + 0x21c) * *pfVar8 + fVar1;
                  fVar1 = *pfVar12;
                  pfVar12 = pfVar12 + iVar9;
                  *pfVar13 = (1.0 - *(float *)(param_1 + 0x218)) * fVar1 +
                             *(float *)(param_1 + 0x218) * pfVar8[1];
                  pfVar13 = pfVar13 + iVar9;
                  pfVar8[1] = *(float *)(param_1 + 0x21c) * pfVar8[1] + fVar1;
                  fVar1 = *pfVar12;
                  *pfVar13 = (1.0 - *(float *)(param_1 + 0x218)) * fVar1 +
                             *(float *)(param_1 + 0x218) * pfVar8[2];
                  pfVar8[2] = *(float *)(param_1 + 0x21c) * pfVar8[2] + fVar1;
                  fVar1 = pfVar12[iVar9];
                  pfVar12 = pfVar12 + iVar9 + iVar9;
                  pfVar13[iVar9] =
                       (1.0 - *(float *)(param_1 + 0x218)) * fVar1 +
                       *(float *)(param_1 + 0x218) * pfVar8[3];
                  pfVar13 = pfVar13 + iVar9 + iVar9;
                  pfVar8[3] = *(float *)(param_1 + 0x21c) * pfVar8[3] + fVar1;
                  pfVar8 = pfVar8 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              for (; uVar5 < uVar14; uVar5 = uVar5 + 1) {
                fVar1 = *pfVar12;
                pfVar12 = pfVar12 + iVar9;
                *pfVar13 = (1.0 - *(float *)(param_1 + 0x218)) * fVar1 +
                           *(float *)(param_1 + 0x218) * *pfVar8;
                pfVar13 = pfVar13 + iVar9;
                *pfVar8 = *(float *)(param_1 + 0x21c) * *pfVar8 + fVar1;
                pfVar8 = pfVar8 + 1;
              }
              *puVar15 = *puVar15 + uVar14;
              uVar11 = (uint64_t)*puVar15;
              uVar6 = puVar15[2];
              if (uVar6 <= *puVar15) {
                *puVar15 = 0;
                uVar11 = 0;
              }
              uVar10 = uVar10 - uVar14;
            } while (uVar10 != 0);
          }
          iVar16 = iVar16 + 1;
          plVar17 = plVar17 + 1;
          puVar15 = puVar15 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
  }
  return 0;
}
uint64_t function_77e89c(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
{
  float fVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *in_RAX;
  int64_t lVar7;
  float *pfVar8;
  int64_t unaff_RBX;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  float *pfVar12;
  float *pfVar13;
  uint *puVar14;
  int iVar15;
  uint unaff_R13D;
  int64_t *plVar16;
  int64_t lStack0000000000000030;
  iVar2 = *in_RAX;
  iVar4 = iVar2;
  if (2 < iVar2) {
    iVar4 = 2;
  }
  lVar3 = **(int64_t **)(param_3 + 0x18);
  lStack0000000000000030 = **(int64_t **)(param_4 + 0x18);
  if (lVar3 != 0) {
    if (2 < iVar2) {
// WARNING: Subroutine does not return
      memcpy(lStack0000000000000030,lVar3,(uint64_t)(iVar2 * unaff_R13D) << 2);
    }
    lVar7 = (int64_t)iVar4;
    iVar15 = 0;
    if (0 < iVar4) {
      puVar14 = (uint *)(unaff_RBX + 600);
      plVar16 = (int64_t *)(unaff_RBX + 0x230);
      do {
        pfVar12 = (float *)(lVar3 + (int64_t)iVar15 * 4);
        pfVar13 = (float *)(lStack0000000000000030 + (int64_t)iVar15 * 4);
        if (unaff_R13D != 0) {
          uVar11 = (uint64_t)*puVar14;
          uVar10 = puVar14[2];
          uVar9 = unaff_R13D;
          do {
            pfVar8 = (float *)(*plVar16 + uVar11 * 4);
            uVar6 = 0;
            uVar5 = uVar10 - (int)uVar11;
            if ((int)uVar11 + uVar9 <= uVar10) {
              uVar5 = uVar9;
            }
            if (3 < uVar5) {
              uVar6 = (uVar5 - 4 >> 2) + 1;
              uVar11 = (uint64_t)uVar6;
              uVar6 = uVar6 * 4;
              do {
                fVar1 = *pfVar12;
                pfVar12 = pfVar12 + iVar2;
                *pfVar13 = (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                           *(float *)(unaff_RBX + 0x218) * *pfVar8;
                pfVar13 = pfVar13 + iVar2;
                *pfVar8 = *(float *)(unaff_RBX + 0x21c) * *pfVar8 + fVar1;
                fVar1 = *pfVar12;
                pfVar12 = pfVar12 + iVar2;
                *pfVar13 = (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                           *(float *)(unaff_RBX + 0x218) * pfVar8[1];
                pfVar13 = pfVar13 + iVar2;
                pfVar8[1] = *(float *)(unaff_RBX + 0x21c) * pfVar8[1] + fVar1;
                fVar1 = *pfVar12;
                *pfVar13 = (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                           *(float *)(unaff_RBX + 0x218) * pfVar8[2];
                pfVar8[2] = *(float *)(unaff_RBX + 0x21c) * pfVar8[2] + fVar1;
                fVar1 = pfVar12[iVar2];
                pfVar12 = pfVar12 + iVar2 + iVar2;
                pfVar13[iVar2] =
                     (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                     *(float *)(unaff_RBX + 0x218) * pfVar8[3];
                pfVar13 = pfVar13 + iVar2 + iVar2;
                pfVar8[3] = *(float *)(unaff_RBX + 0x21c) * pfVar8[3] + fVar1;
                pfVar8 = pfVar8 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            for (; uVar6 < uVar5; uVar6 = uVar6 + 1) {
              fVar1 = *pfVar12;
              pfVar12 = pfVar12 + iVar2;
              *pfVar13 = (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                         *(float *)(unaff_RBX + 0x218) * *pfVar8;
              pfVar13 = pfVar13 + iVar2;
              *pfVar8 = *(float *)(unaff_RBX + 0x21c) * *pfVar8 + fVar1;
              pfVar8 = pfVar8 + 1;
            }
            *puVar14 = *puVar14 + uVar5;
            uVar11 = (uint64_t)*puVar14;
            uVar10 = puVar14[2];
            if (uVar10 <= *puVar14) {
              *puVar14 = 0;
              uVar11 = 0;
            }
            uVar9 = uVar9 - uVar5;
          } while (uVar9 != 0);
        }
        iVar15 = iVar15 + 1;
        plVar16 = plVar16 + 1;
        puVar14 = puVar14 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  return 0;
}
uint64_t
function_77e8d8(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
             uint64_t param_5,int64_t param_6)
{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t unaff_RBX;
  uint uVar6;
  int unaff_EDI;
  uint uVar7;
  uint64_t uVar8;
  float *pfVar9;
  float *pfVar10;
  uint *puVar11;
  int iVar12;
  uint unaff_R13D;
  int64_t unaff_R14;
  int64_t *plVar13;
  int64_t lStackX_20;
  if (2 < (int)unaff_R14) {
// WARNING: Subroutine does not return
    memcpy(param_4,param_2,(uint64_t)((int)unaff_R14 * unaff_R13D) << 2);
  }
  lVar4 = (int64_t)unaff_EDI;
  iVar12 = 0;
  if (0 < unaff_EDI) {
    puVar11 = (uint *)(unaff_RBX + 600);
    plVar13 = (int64_t *)(unaff_RBX + 0x230);
    do {
      pfVar9 = (float *)(param_2 + (int64_t)iVar12 * 4);
      pfVar10 = (float *)(param_4 + (int64_t)iVar12 * 4);
      if (unaff_R13D != 0) {
        uVar8 = (uint64_t)*puVar11;
        uVar7 = puVar11[2];
        uVar6 = unaff_R13D;
        do {
          pfVar5 = (float *)(*plVar13 + uVar8 * 4);
          uVar3 = 0;
          uVar2 = uVar7 - (int)uVar8;
          if ((int)uVar8 + uVar6 <= uVar7) {
            uVar2 = uVar6;
          }
          if (3 < uVar2) {
            uVar3 = (uVar2 - 4 >> 2) + 1;
            uVar8 = (uint64_t)uVar3;
            uVar3 = uVar3 * 4;
            do {
              fVar1 = *pfVar9;
              pfVar9 = pfVar9 + unaff_R14;
              *pfVar10 = (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                         *(float *)(unaff_RBX + 0x218) * *pfVar5;
              pfVar10 = pfVar10 + unaff_R14;
              *pfVar5 = *(float *)(unaff_RBX + 0x21c) * *pfVar5 + fVar1;
              fVar1 = *pfVar9;
              pfVar9 = pfVar9 + unaff_R14;
              *pfVar10 = (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                         *(float *)(unaff_RBX + 0x218) * pfVar5[1];
              pfVar10 = pfVar10 + unaff_R14;
              pfVar5[1] = *(float *)(unaff_RBX + 0x21c) * pfVar5[1] + fVar1;
              fVar1 = *pfVar9;
              *pfVar10 = (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                         *(float *)(unaff_RBX + 0x218) * pfVar5[2];
              pfVar5[2] = *(float *)(unaff_RBX + 0x21c) * pfVar5[2] + fVar1;
              fVar1 = pfVar9[unaff_R14];
              pfVar9 = pfVar9 + unaff_R14 + unaff_R14;
              pfVar10[unaff_R14] =
                   (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                   *(float *)(unaff_RBX + 0x218) * pfVar5[3];
              pfVar10 = pfVar10 + unaff_R14 + unaff_R14;
              pfVar5[3] = *(float *)(unaff_RBX + 0x21c) * pfVar5[3] + fVar1;
              pfVar5 = pfVar5 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          for (; uVar3 < uVar2; uVar3 = uVar3 + 1) {
            fVar1 = *pfVar9;
            pfVar9 = pfVar9 + unaff_R14;
            *pfVar10 = (1.0 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                       *(float *)(unaff_RBX + 0x218) * *pfVar5;
            pfVar10 = pfVar10 + unaff_R14;
            *pfVar5 = *(float *)(unaff_RBX + 0x21c) * *pfVar5 + fVar1;
            pfVar5 = pfVar5 + 1;
          }
          *puVar11 = *puVar11 + uVar2;
          uVar8 = (uint64_t)*puVar11;
          uVar7 = puVar11[2];
          if (uVar7 <= *puVar11) {
            *puVar11 = 0;
            uVar8 = 0;
          }
          uVar6 = uVar6 - uVar2;
          param_2 = lStackX_20;
        } while (uVar6 != 0);
      }
      iVar12 = iVar12 + 1;
      plVar13 = plVar13 + 1;
      puVar11 = puVar11 + 1;
      lVar4 = lVar4 + -1;
      param_4 = param_6;
    } while (lVar4 != 0);
  }
  return 0;
}
uint64_t
function_77e927(int64_t param_1,int64_t param_2,uint64_t param_3,float param_4,int64_t param_5,
             int64_t param_6)
{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int64_t unaff_RBX;
  uint unaff_EBP;
  uint uVar5;
  uint64_t uVar6;
  float *pfVar7;
  int64_t in_R9;
  float *pfVar8;
  uint *in_R11;
  int unaff_R12D;
  uint unaff_R13D;
  int64_t unaff_R14;
  int64_t *plVar9;
  int64_t lStackX_20;
  plVar9 = (int64_t *)(unaff_RBX + 0x230);
  do {
    pfVar7 = (float *)(param_2 + (int64_t)unaff_R12D * 4);
    pfVar8 = (float *)(in_R9 + (int64_t)unaff_R12D * 4);
    if (unaff_R13D != 0) {
      uVar6 = (uint64_t)*in_R11;
      uVar3 = in_R11[2];
      uVar5 = unaff_R13D;
      do {
        pfVar4 = (float *)(*plVar9 + uVar6 * 4);
        uVar2 = uVar3 - (int)uVar6;
        if ((int)uVar6 + uVar5 <= uVar3) {
          uVar2 = uVar5;
        }
        uVar3 = unaff_EBP;
        if (3 < uVar2) {
          uVar3 = (uVar2 - 4 >> 2) + 1;
          uVar6 = (uint64_t)uVar3;
          uVar3 = uVar3 * 4;
          do {
            fVar1 = *pfVar7;
            pfVar7 = pfVar7 + unaff_R14;
            *pfVar8 = (param_4 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                      *(float *)(unaff_RBX + 0x218) * *pfVar4;
            pfVar8 = pfVar8 + unaff_R14;
            *pfVar4 = *(float *)(unaff_RBX + 0x21c) * *pfVar4 + fVar1;
            fVar1 = *pfVar7;
            pfVar7 = pfVar7 + unaff_R14;
            *pfVar8 = (param_4 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                      *(float *)(unaff_RBX + 0x218) * pfVar4[1];
            pfVar8 = pfVar8 + unaff_R14;
            pfVar4[1] = *(float *)(unaff_RBX + 0x21c) * pfVar4[1] + fVar1;
            fVar1 = *pfVar7;
            *pfVar8 = (param_4 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                      *(float *)(unaff_RBX + 0x218) * pfVar4[2];
            pfVar4[2] = *(float *)(unaff_RBX + 0x21c) * pfVar4[2] + fVar1;
            fVar1 = pfVar7[unaff_R14];
            pfVar7 = pfVar7 + unaff_R14 + unaff_R14;
            pfVar8[unaff_R14] =
                 (param_4 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                 *(float *)(unaff_RBX + 0x218) * pfVar4[3];
            pfVar8 = pfVar8 + unaff_R14 + unaff_R14;
            pfVar4[3] = *(float *)(unaff_RBX + 0x21c) * pfVar4[3] + fVar1;
            pfVar4 = pfVar4 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        for (; uVar3 < uVar2; uVar3 = uVar3 + 1) {
          fVar1 = *pfVar7;
          pfVar7 = pfVar7 + unaff_R14;
          *pfVar8 = (param_4 - *(float *)(unaff_RBX + 0x218)) * fVar1 +
                    *(float *)(unaff_RBX + 0x218) * *pfVar4;
          pfVar8 = pfVar8 + unaff_R14;
          *pfVar4 = *(float *)(unaff_RBX + 0x21c) * *pfVar4 + fVar1;
          pfVar4 = pfVar4 + 1;
        }
        *in_R11 = *in_R11 + uVar2;
        uVar6 = (uint64_t)*in_R11;
        uVar3 = in_R11[2];
        if (uVar3 <= *in_R11) {
          *in_R11 = unaff_EBP;
          uVar6 = (uint64_t)unaff_EBP;
        }
        uVar5 = uVar5 - uVar2;
        param_1 = param_5;
        param_2 = lStackX_20;
      } while (uVar5 != 0);
    }
    unaff_R12D = unaff_R12D + 1;
    plVar9 = plVar9 + 1;
    in_R11 = in_R11 + 1;
    param_1 = param_1 + -1;
    in_R9 = param_6;
    param_5 = param_1;
  } while (param_1 != 0);
  return 0;
}
uint64_t function_77eb58(void)
{
  return 0;
}
uint64_t function_77eb60(void)
{
  return 0;
}
uint64_t function_77eb6a(void)
{
  return 0;
}
uint64_t function_77eb80(int64_t param_1,int param_2,float param_3,char param_4)
{
  uint64_t uVar1;
  int iVar2;
  int8_t *aplocal_var_18 [2];
  iVar2 = 0;
  if (param_2 == 0) {
    *(float *)(param_1 + 0x278) = param_3 * 0.01;
  }
  else if (param_2 == 1) {
    *(float *)(param_1 + 0x27c) = param_3 * 0.01;
  }
  else if (param_2 == 2) {
    *(float *)(param_1 + 0x280) = param_3;
  }
  else if (param_2 == 3) {
    *(float *)(param_1 + 0x284) = param_3;
  }
  else if (param_2 == 4) {
    *(uint *)(param_1 + 0x288) = (uint)(0.5 <= param_3);
  }
  else {
    iVar2 = 0x1f;
  }
  if ((param_4 != '\0') && (iVar2 == 0)) {
    uVar1 = function_743700(*(uint64_t *)(param_1 + 0xa8),aplocal_var_18,0x10,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *aplocal_var_18[0] = 7;
    *(int64_t *)(aplocal_var_18[0] + 8) = param_1;
    uVar1 = SystemFunction_000180743b40(*(uint64_t *)(param_1 + 0xa8),aplocal_var_18[0],1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}
// 函数: void function_77ec50(int64_t *param_1)
void function_77ec50(int64_t *param_1)
{
  int64_t lVar1;
  int *piVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  lVar1 = *param_1;
  iVar4 = 0;
  lVar3 = *(int64_t *)(lVar1 + 0xe8);
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar5 = 0;
    do {
      piVar2 = *(int **)(lVar5 + *(int64_t *)(lVar3 + 0x68));
      if (*piVar2 == 0) {
        SystemFunction_000180762a70(lVar1,iVar4,piVar2[0xe]);
      }
      else if (*piVar2 == 2) {
        Function_3ad75b82(lVar1,iVar4,piVar2[0xc] != 0);
      }
      lVar3 = *(int64_t *)(lVar1 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(lVar3 + 0x60));
  }
// WARNING: Subroutine does not return
  memset(lVar1 + 0x22c,0,0x100);
}
// 函数: void function_77ec6b(void)
void function_77ec6b(void)
{
  int iVar1;
  int64_t in_RAX;
  int unaff_EBX;
  int64_t lVar2;
  int64_t unaff_RDI;
  lVar2 = 0;
  do {
    iVar1 = **(int **)(lVar2 + *(int64_t *)(in_RAX + 0x68));
    if (iVar1 == 0) {
      SystemFunction_000180762a70();
    }
    else if (iVar1 == 2) {
      Function_3ad75b82();
    }
    in_RAX = *(int64_t *)(unaff_RDI + 0xe8);
    unaff_EBX = unaff_EBX + 1;
    lVar2 = lVar2 + 8;
  } while (unaff_EBX < *(int *)(in_RAX + 0x60));
// WARNING: Subroutine does not return
  memset(unaff_RDI + 0x22c,0,0x100);
}
// 函数: void function_77ecbf(void)
void function_77ecbf(void)
{
  int64_t unaff_RDI;
// WARNING: Subroutine does not return
  memset(unaff_RDI + 0x22c,0,0x100);
}