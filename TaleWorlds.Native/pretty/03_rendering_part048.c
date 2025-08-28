/* 函数别名定义: DataProcessingEngine */
#define RenderingSystem_TessellationProcessor RenderingSystem_TessellationProcessor
#define RenderingSystem_ReflectionProcessor RenderingSystem_ReflectionProcessor
#define RenderingSystem_ShadowProcessor RenderingSystem_ShadowProcessor
#define RenderingSystem_EffectProcessor RenderingSystem_EffectProcessor
#define RenderingSystem_ConfigManager RenderingSystem_ConfigManager
#define RenderingSystem_PostEffectManager RenderingSystem_PostEffectManager
#define RenderingSystem_TransparencyManager RenderingSystem_TransparencyManager
#define RenderingSystem_OcclusionManager RenderingSystem_OcclusionManager
#define RenderingSystem_CoreInitializer RenderingSystem_CoreInitializer
#define CoreEngine_AIController CoreEngine_AIController
#define DataProcessingEngine DataProcessingEngine
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part048.c - 11 个函数
// 函数: void CoreEngine_AIController(int *param_1,uint64_t param_2,uint64_t param_3,char param_4)
void CoreEngine_AIController(int *param_1,uint64_t param_2,uint64_t param_3,char param_4)
{
  uint64_t *puVar1;
  float *pfVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int iVar12;
  int iVar13;
  int64_t lVar14;
  uint *puVar15;
  int64_t *plVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  float fStackX_8;
  float fStackX_c;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  uint64_t local_var_10;
  fStackX_8 = (float)param_2;
  fStackX_c = (float)((uint64_t)param_2 >> 0x20);
  local_var_28._0_4_ = (float)param_3;
  local_var_28._4_4_ = (float)((uint64_t)param_3 >> 0x20);
  fVar20 = local_var_28._4_4_;
  fVar21 = (float)local_var_28;
  uVar11 = param_3;
  local_var_18 = param_2;
  local_var_10 = param_3;
  if ((param_4 != '\0') && (uVar11 = param_3, param_1[0x18] != 0)) {
    pfVar2 = (float *)(*(int64_t *)(param_1 + 0x1a) + -0x10 + (int64_t)param_1[0x18] * 0x10);
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
    fVar9 = pfVar2[3];
    if (fStackX_8 < fVar6) {
      local_var_18 = CONCAT44(fStackX_c,fVar6);
      fStackX_8 = fVar6;
    }
    if (fStackX_c < fVar7) {
      local_var_18 = CONCAT44(fVar7,(int32_t)local_var_18);
      fStackX_c = fVar7;
    }
    if (fVar8 < (float)local_var_28) {
      local_var_10 = CONCAT44(local_var_28._4_4_,fVar8);
      fVar21 = fVar8;
    }
    uVar11 = *(uint64_t *)pfVar2;
    if (fVar9 < local_var_28._4_4_) {
      local_var_10 = CONCAT44(fVar9,(int32_t)local_var_10);
      fVar20 = fVar9;
    }
  }
  local_var_28 = uVar11;
  if (fVar21 <= fStackX_8) {
    local_var_10 = CONCAT44(local_var_10._4_4_,fStackX_8);
  }
  if (fVar20 <= fStackX_c) {
    local_var_10 = CONCAT44(fStackX_c,(int32_t)local_var_10);
  }
  iVar12 = param_1[0x18];
  iVar13 = param_1[0x19];
  if (iVar12 == iVar13) {
    if (iVar13 == 0) {
      iVar13 = 8;
    }
    else {
      iVar13 = iVar13 / 2 + iVar13;
    }
    iVar4 = iVar12 + 1;
    if (iVar12 + 1 < iVar13) {
      iVar4 = iVar13;
    }
    RenderingSystem_CoreInitializer(param_1 + 0x18,iVar4);
    iVar12 = param_1[0x18];
  }
  puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 0x1a) + (int64_t)iVar12 * 0x10);
  *puVar1 = local_var_18;
  puVar1[1] = local_var_10;
  param_1[0x18] = param_1[0x18] + 1;
  if (param_1[0x18] == 0) {
    plVar16 = (int64_t *)(*(int64_t *)(param_1 + 0xe) + 0x18);
  }
  else {
    plVar16 = (int64_t *)((int64_t)(param_1[0x18] + -1) * 0x10 + *(int64_t *)(param_1 + 0x1a));
  }
  lVar10 = *plVar16;
  lVar3 = plVar16[1];
  iVar12 = *param_1;
  piVar19 = (int *)0x0;
  piVar17 = piVar19;
  if (0 < iVar12) {
    piVar17 = (int *)((int64_t)(iVar12 + -1) * 0x30 + *(int64_t *)(param_1 + 2));
  }
  if (((piVar17 != (int *)0x0) &&
      ((*piVar17 == 0 ||
       ((*(int64_t *)(piVar17 + 1) == lVar10 && (*(int64_t *)(piVar17 + 3) == lVar3)))))) &&
     (*(int64_t *)(piVar17 + 8) == 0)) {
    piVar18 = piVar17 + -0xc;
    if (iVar12 < 2) {
      piVar18 = piVar19;
    }
    if ((((*piVar17 == 0) && (piVar18 != (int *)0x0)) && (*(int64_t *)(piVar18 + 1) == lVar10)) &&
       (*(int64_t *)(piVar18 + 3) == lVar3)) {
      if (param_1[0x1c] != 0) {
        piVar19 = *(int **)(*(int64_t *)(param_1 + 0x1e) + -8 + (int64_t)param_1[0x1c] * 8);
      }
      if ((*(int **)(piVar18 + 6) == piVar19) && (*(int64_t *)(piVar18 + 8) == 0)) {
        *param_1 = iVar12 + -1;
        return;
      }
    }
    *(int64_t *)(piVar17 + 1) = lVar10;
    *(int64_t *)(piVar17 + 3) = lVar3;
    return;
  }
  if (param_1[0x18] == 0) {
    puVar15 = (uint *)(*(int64_t *)(param_1 + 0xe) + 0x18);
  }
  else {
    puVar15 = (uint *)((int64_t)(param_1[0x18] + -1) * 0x10 + *(int64_t *)(param_1 + 0x1a));
  }
  uVar5 = *puVar15;
  lVar10 = *(int64_t *)(puVar15 + 1);
  local_var_28 = CONCAT44(local_var_28._4_4_,puVar15[3]);
  if (param_1[0x1c] == 0) {
    local_var_20 = 0;
  }
  else {
    local_var_20 = *(uint64_t *)(*(int64_t *)(param_1 + 0x1e) + -8 + (int64_t)param_1[0x1c] * 8);
  }
  iVar12 = *param_1;
  iVar13 = param_1[1];
  if (iVar12 == iVar13) {
    if (iVar13 == 0) {
      iVar13 = 8;
    }
    else {
      iVar13 = iVar13 / 2 + iVar13;
    }
    iVar4 = iVar12 + 1;
    if (iVar12 + 1 < iVar13) {
      iVar4 = iVar13;
    }
    RenderingEngine_Renderer(param_1,iVar4);
    iVar12 = *param_1;
  }
  lVar14 = (int64_t)iVar12;
  lVar3 = *(int64_t *)(param_1 + 2);
  plVar16 = (int64_t *)(lVar3 + lVar14 * 0x30);
  *plVar16 = (uint64_t)uVar5 << 0x20;
  plVar16[1] = lVar10;
  puVar1 = (uint64_t *)(lVar3 + 0x10 + lVar14 * 0x30);
  *puVar1 = local_var_28;
  puVar1[1] = local_var_20;
  puVar1 = (uint64_t *)(lVar3 + 0x20 + lVar14 * 0x30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = *param_1 + 1;
  return;
}
// 函数: void RenderingSystem_TextureLoader(int *param_1,uint64_t param_2)
void RenderingSystem_TextureLoader(int *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  uint *puVar10;
  int64_t *plVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int32_t local_var_24;
  uint64_t local_var_20;
  iVar8 = param_1[0x1c];
  if (iVar8 == param_1[0x1d]) {
    DataProcessingEngine0(param_1 + 0x1c);
    iVar8 = param_1[0x1c];
  }
  *(uint64_t *)(*(int64_t *)(param_1 + 0x1e) + (int64_t)iVar8 * 8) = param_2;
  param_1[0x1c] = param_1[0x1c] + 1;
  piVar14 = (int *)0x0;
  if (param_1[0x1c] != 0) {
    piVar14 = *(int **)(*(int64_t *)(param_1 + 0x1e) + -8 + (int64_t)param_1[0x1c] * 8);
  }
  iVar8 = *param_1;
  if (iVar8 != 0) {
    piVar13 = (int *)(*(int64_t *)(param_1 + 2) + -0x30 + (int64_t)iVar8 * 0x30);
    if ((piVar13 != (int *)0x0) &&
       (((*piVar13 == 0 || (*(int **)(piVar13 + 6) == piVar14)) && (*(int64_t *)(piVar13 + 8) == 0)
        ))) {
      piVar12 = piVar13 + -0xc;
      if (iVar8 < 2) {
        piVar12 = (int *)0x0;
      }
      if (((*piVar13 == 0) && (piVar12 != (int *)0x0)) && (*(int **)(piVar12 + 6) == piVar14)) {
        if (param_1[0x18] == 0) {
          plVar11 = (int64_t *)(*(int64_t *)(param_1 + 0xe) + 0x18);
        }
        else {
          plVar11 = (int64_t *)
                    ((int64_t)(param_1[0x18] + -1) * 0x10 + *(int64_t *)(param_1 + 0x1a));
        }
        if (((*(int64_t *)(piVar12 + 1) == *plVar11) && (*(int64_t *)(piVar12 + 3) == plVar11[1]))
           && (*(int64_t *)(piVar12 + 8) == 0)) {
          *param_1 = iVar8 + -1;
          return;
        }
      }
      *(int **)(piVar13 + 6) = piVar14;
      return;
    }
  }
  if (param_1[0x18] == 0) {
    puVar10 = (uint *)(*(int64_t *)(param_1 + 0xe) + 0x18);
  }
  else {
    puVar10 = (uint *)((int64_t)(param_1[0x18] + -1) * 0x10 + *(int64_t *)(param_1 + 0x1a));
  }
  uVar4 = *puVar10;
  lVar6 = *(int64_t *)(puVar10 + 1);
  uVar5 = puVar10[3];
  if (param_1[0x1c] == 0) {
    local_var_20 = 0;
  }
  else {
    local_var_20 = *(uint64_t *)(*(int64_t *)(param_1 + 0x1e) + -8 + (int64_t)param_1[0x1c] * 8);
  }
  iVar8 = *param_1;
  iVar7 = param_1[1];
  if (iVar8 == iVar7) {
    if (iVar7 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar7 / 2 + iVar7;
    }
    iVar3 = iVar8 + 1;
    if (iVar8 + 1 < iVar7) {
      iVar3 = iVar7;
    }
    RenderingEngine_Renderer(param_1,iVar3);
    iVar8 = *param_1;
  }
  lVar9 = (int64_t)iVar8;
  lVar2 = *(int64_t *)(param_1 + 2);
  plVar11 = (int64_t *)(lVar2 + lVar9 * 0x30);
  *plVar11 = (uint64_t)uVar4 << 0x20;
  plVar11[1] = lVar6;
  puVar1 = (uint64_t *)(lVar2 + 0x10 + lVar9 * 0x30);
  *puVar1 = CONCAT44(local_var_24,uVar5);
  puVar1[1] = local_var_20;
  puVar1 = (uint64_t *)(lVar2 + 0x20 + lVar9 * 0x30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = *param_1 + 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_EffectProcessor(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_EffectProcessor(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint *puVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int iVar13;
  int64_t lVar14;
  int32_t *puVar15;
  int *piVar16;
  int iVar17;
  int8_t astack_special_x_10 [8];
  int8_t *pstack_special_x_18;
  uint64_t *pstack_special_x_20;
  int32_t local_var_5c;
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 < param_2) {
    iVar17 = *(int *)(param_1 + 0x9c);
    if (iVar17 < param_2) {
      if (iVar17 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar17 / 2 + iVar17;
      }
      iVar13 = param_2;
      if (param_2 < iVar9) {
        iVar13 = iVar9;
      }
      if (iVar17 < iVar13) {
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
        }
        uVar10 = SystemFunction_000180120ce0((int64_t)iVar13 << 5,SYSTEM_DATA_MANAGER_B,param_3,param_4,
                                     0xfffffffffffffffe);
        if (*(int64_t *)(param_1 + 0xa0) != 0) {
// WARNING: Subroutine does not return
          memcpy(uVar10,*(int64_t *)(param_1 + 0xa0),(int64_t)*(int *)(param_1 + 0x98) << 5);
        }
        *(uint64_t *)(param_1 + 0xa0) = uVar10;
        *(int *)(param_1 + 0x9c) = iVar13;
      }
    }
    *(int *)(param_1 + 0x98) = param_2;
  }
  *(int *)(param_1 + 0x94) = param_2;
  puVar4 = *(uint64_t **)(param_1 + 0xa0);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  if (1 < (int64_t)param_2) {
    lVar12 = 1;
    lVar14 = 0x20;
    do {
      iVar17 = 0;
      if (lVar12 < iVar3) {
        puVar15 = (int32_t *)(*(int64_t *)(param_1 + 0xa0) + lVar14);
        iVar9 = puVar15[1];
        if (iVar9 < 0) {
          iVar9 = iVar9 / 2 + iVar9;
          iVar13 = 0;
          if (0 < iVar9) {
            iVar13 = iVar9;
          }
          RenderingEngine_Renderer(puVar15,iVar13);
        }
        *puVar15 = 0;
        lVar5 = *(int64_t *)(param_1 + 0xa0);
        iVar9 = *(int *)(lVar5 + 0x14 + lVar14);
        if (iVar9 < 0) {
          iVar9 = iVar9 / 2 + iVar9;
          iVar13 = 0;
          if (0 < iVar9) {
            iVar13 = iVar9;
          }
          Memory_CacheManager(lVar5 + 0x10 + lVar14,iVar13);
        }
        *(int32_t *)(lVar5 + 0x10 + lVar14) = 0;
      }
      else {
        pstack_special_x_20 = (uint64_t *)(*(int64_t *)(param_1 + 0xa0) + lVar14);
        pstack_special_x_18 = astack_special_x_10;
        if (pstack_special_x_20 != (uint64_t *)0x0) {
          pstack_special_x_20[2] = 0;
          pstack_special_x_20[3] = 0;
          *pstack_special_x_20 = 0;
          pstack_special_x_20[1] = 0;
          pstack_special_x_20[2] = 0;
          pstack_special_x_20[3] = 0;
        }
      }
      piVar16 = (int *)(*(int64_t *)(param_1 + 0xa0) + lVar14);
      if (*piVar16 == 0) {
        puVar2 = (uint *)(*(int64_t *)(param_1 + 0x68) + -0x10 +
                         (int64_t)*(int *)(param_1 + 0x60) * 0x10);
        uVar7 = *puVar2;
        lVar5 = *(int64_t *)(puVar2 + 1);
        uVar8 = puVar2[3];
        uVar10 = *(uint64_t *)
                  (*(int64_t *)(param_1 + 0x78) + -8 + (int64_t)*(int *)(param_1 + 0x70) * 8);
        if (piVar16[1] == 0) {
          RenderingEngine_Renderer(piVar16,8);
          iVar17 = *piVar16;
        }
        lVar11 = (int64_t)iVar17;
        lVar6 = *(int64_t *)(piVar16 + 2);
        plVar1 = (int64_t *)(lVar6 + lVar11 * 0x30);
        *plVar1 = (uint64_t)uVar7 << 0x20;
        plVar1[1] = lVar5;
        puVar4 = (uint64_t *)(lVar6 + 0x10 + lVar11 * 0x30);
        *puVar4 = CONCAT44(local_var_5c,uVar8);
        puVar4[1] = uVar10;
        puVar15 = (int32_t *)(lVar6 + 0x20 + lVar11 * 0x30);
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        *piVar16 = *piVar16 + 1;
      }
      lVar12 = lVar12 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar12 < param_2);
  }
  return;
}
// 函数: void RenderingSystem_PostEffectManager(int *param_1)
void RenderingSystem_PostEffectManager(int *param_1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  if (1 < param_1[0x25]) {
    SystemFunction_000180292160(param_1,0);
    iVar4 = *param_1;
    if ((iVar4 != 0) &&
       (iVar5 = iVar4 + -1, *(int *)(*(int64_t *)(param_1 + 2) + (int64_t)iVar5 * 0x30) == 0)) {
      *param_1 = iVar5;
      iVar4 = iVar5;
    }
    iVar6 = 0;
    iVar7 = 1;
    iVar5 = 0;
    lVar9 = 0x20;
    lVar8 = lVar9;
    if (1 < param_1[0x25]) {
      do {
        piVar3 = (int *)(*(int64_t *)(param_1 + 0x28) + lVar8);
        iVar4 = *piVar3;
        if ((iVar4 != 0) &&
           (*(int *)(*(int64_t *)(piVar3 + 2) + -0x30 + (int64_t)iVar4 * 0x30) == 0)) {
          *piVar3 = iVar4 + -1;
          iVar4 = iVar4 + -1;
        }
        iVar5 = iVar5 + piVar3[4];
        iVar6 = iVar6 + iVar4;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while (iVar7 < param_1[0x25]);
      iVar4 = *param_1;
    }
    iVar2 = param_1[1];
    iVar4 = iVar4 + iVar6;
    iVar7 = 8;
    if (iVar2 < iVar4) {
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      iVar1 = iVar4;
      if (iVar4 < iVar2) {
        iVar1 = iVar2;
      }
      RenderingEngine_Renderer(param_1,iVar1);
    }
    *param_1 = iVar4;
    iVar4 = param_1[5];
    iVar2 = param_1[4] + iVar5;
    if (iVar4 < iVar2) {
      if (iVar4 != 0) {
        iVar7 = iVar4 + iVar4 / 2;
      }
      iVar4 = iVar2;
      if (iVar2 < iVar7) {
        iVar4 = iVar7;
      }
      Memory_CacheManager(param_1 + 4,iVar4);
    }
    param_1[4] = iVar2;
    iVar4 = 1;
    *(int64_t *)(param_1 + 0x16) =
         *(int64_t *)(param_1 + 6) + ((int64_t)iVar2 - (int64_t)iVar5) * 2;
    if (1 < param_1[0x25]) {
      do {
        piVar3 = (int *)(*(int64_t *)(param_1 + 0x28) + lVar9);
        if (*piVar3 != 0) {
// WARNING: Subroutine does not return
          memcpy(((int64_t)*param_1 - (int64_t)iVar6) * 0x30 + *(int64_t *)(param_1 + 2),
                 *(uint64_t *)(piVar3 + 2),(int64_t)*piVar3 * 0x30);
        }
        if (piVar3[4] != 0) {
// WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(param_1 + 0x16),*(uint64_t *)(piVar3 + 6),(int64_t)piVar3[4] * 2
                );
        }
        iVar4 = iVar4 + 1;
        lVar9 = lVar9 + 0x20;
      } while (iVar4 < param_1[0x25]);
    }
    SystemCore_ErrorHandler(param_1);
    param_1[0x25] = 1;
  }
  return;
}
// 函数: void RenderingSystem_ShadowProcessor(uint64_t param_1)
void RenderingSystem_ShadowProcessor(uint64_t param_1)
{
  int *piVar1;
  int *unaff_RBX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  SystemFunction_000180292160(param_1,0);
  iVar2 = *unaff_RBX;
  if ((iVar2 != 0) &&
     (iVar3 = iVar2 + -1, *(int *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)iVar3 * 0x30) == 0)) {
    *unaff_RBX = iVar3;
    iVar2 = iVar3;
  }
  iVar4 = 0;
  iVar5 = 1;
  iVar3 = 0;
  lVar8 = 0x20;
  lVar6 = lVar8;
  if (1 < unaff_RBX[0x25]) {
    do {
      piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + lVar6);
      iVar2 = *piVar1;
      if ((iVar2 != 0) &&
         (*(int *)(*(int64_t *)(piVar1 + 2) + -0x30 + (int64_t)iVar2 * 0x30) == 0)) {
        *piVar1 = iVar2 + -1;
        iVar2 = iVar2 + -1;
      }
      iVar3 = iVar3 + piVar1[4];
      iVar4 = iVar4 + iVar2;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar5 < unaff_RBX[0x25]);
    iVar2 = *unaff_RBX;
  }
  iVar5 = 8;
  if (unaff_RBX[1] < iVar2 + iVar4) {
    RenderingEngine_Renderer();
  }
  *unaff_RBX = iVar2 + iVar4;
  iVar2 = unaff_RBX[5];
  iVar7 = unaff_RBX[4] + iVar3;
  if (iVar2 < iVar7) {
    if (iVar2 != 0) {
      iVar5 = iVar2 + iVar2 / 2;
    }
    iVar2 = iVar7;
    if (iVar7 < iVar5) {
      iVar2 = iVar5;
    }
    Memory_CacheManager(unaff_RBX + 4,iVar2);
  }
  unaff_RBX[4] = iVar7;
  iVar2 = 1;
  *(int64_t *)(unaff_RBX + 0x16) =
       *(int64_t *)(unaff_RBX + 6) + ((int64_t)iVar7 - (int64_t)iVar3) * 2;
  if (1 < unaff_RBX[0x25]) {
    do {
      piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + lVar8);
      if (*piVar1 != 0) {
// WARNING: Subroutine does not return
        memcpy(((int64_t)*unaff_RBX - (int64_t)iVar4) * 0x30 + *(int64_t *)(unaff_RBX + 2),
               *(uint64_t *)(piVar1 + 2),(int64_t)*piVar1 * 0x30);
      }
      if (piVar1[4] != 0) {
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(unaff_RBX + 0x16),*(uint64_t *)(piVar1 + 6),(int64_t)piVar1[4] * 2
              );
      }
      iVar2 = iVar2 + 1;
      lVar8 = lVar8 + 0x20;
    } while (iVar2 < unaff_RBX[0x25]);
  }
  SystemCore_ErrorHandler();
  unaff_RBX[0x25] = 1;
  return;
}
// 函数: void RenderingSystem_ReflectionProcessor(void)
void RenderingSystem_ReflectionProcessor(void)
{
  int *piVar1;
  int *unaff_RBX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  SystemFunction_000180292160();
  iVar2 = *unaff_RBX;
  if ((iVar2 != 0) &&
     (iVar3 = iVar2 + -1, *(int *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)iVar3 * 0x30) == 0)) {
    *unaff_RBX = iVar3;
    iVar2 = iVar3;
  }
  iVar4 = 0;
  iVar5 = 1;
  iVar3 = 0;
  lVar8 = 0x20;
  lVar6 = lVar8;
  if (1 < unaff_RBX[0x25]) {
    do {
      piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + lVar6);
      iVar2 = *piVar1;
      if ((iVar2 != 0) &&
         (*(int *)(*(int64_t *)(piVar1 + 2) + -0x30 + (int64_t)iVar2 * 0x30) == 0)) {
        *piVar1 = iVar2 + -1;
        iVar2 = iVar2 + -1;
      }
      iVar3 = iVar3 + piVar1[4];
      iVar4 = iVar4 + iVar2;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar5 < unaff_RBX[0x25]);
    iVar2 = *unaff_RBX;
  }
  iVar5 = 8;
  if (unaff_RBX[1] < iVar2 + iVar4) {
    RenderingEngine_Renderer();
  }
  *unaff_RBX = iVar2 + iVar4;
  iVar2 = unaff_RBX[5];
  iVar7 = unaff_RBX[4] + iVar3;
  if (iVar2 < iVar7) {
    if (iVar2 != 0) {
      iVar5 = iVar2 + iVar2 / 2;
    }
    iVar2 = iVar7;
    if (iVar7 < iVar5) {
      iVar2 = iVar5;
    }
    Memory_CacheManager(unaff_RBX + 4,iVar2);
  }
  unaff_RBX[4] = iVar7;
  iVar2 = 1;
  *(int64_t *)(unaff_RBX + 0x16) =
       *(int64_t *)(unaff_RBX + 6) + ((int64_t)iVar7 - (int64_t)iVar3) * 2;
  if (1 < unaff_RBX[0x25]) {
    do {
      piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + lVar8);
      if (*piVar1 != 0) {
// WARNING: Subroutine does not return
        memcpy(((int64_t)*unaff_RBX - (int64_t)iVar4) * 0x30 + *(int64_t *)(unaff_RBX + 2),
               *(uint64_t *)(piVar1 + 2),(int64_t)*piVar1 * 0x30);
      }
      if (piVar1[4] != 0) {
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(unaff_RBX + 0x16),*(uint64_t *)(piVar1 + 6),(int64_t)piVar1[4] * 2
              );
      }
      iVar2 = iVar2 + 1;
      lVar8 = lVar8 + 0x20;
    } while (iVar2 < unaff_RBX[0x25]);
  }
  SystemCore_ErrorHandler();
  unaff_RBX[0x25] = 1;
  return;
}
// 函数: void RenderingSystem_TransparencyManager(void)
void RenderingSystem_TransparencyManager(void)
{
  int64_t unaff_RBX;
  int unaff_EBP;
  int *piVar1;
  int64_t unaff_R14;
  while( true ) {
    piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0xa0) + unaff_R14);
    if (*piVar1 != 0) {
// WARNING: Subroutine does not return
      memcpy();
    }
    if (piVar1[4] != 0) break;
    unaff_EBP = unaff_EBP + 1;
    unaff_R14 = unaff_R14 + 0x20;
    if (*(int *)(unaff_RBX + 0x94) <= unaff_EBP) {
      SystemCore_ErrorHandler();
      *(int32_t *)(unaff_RBX + 0x94) = 1;
      return;
    }
  }
// WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(unaff_RBX + 0x58),*(uint64_t *)(piVar1 + 6),(int64_t)piVar1[4] * 2);
}
// 函数: void RenderingSystem_OcclusionManager(void)
void RenderingSystem_OcclusionManager(void)
{
  return;
}
// 函数: void NetworkSystem_PacketSerializer(int *param_1,int param_2,int param_3)
void NetworkSystem_PacketSerializer(int *param_1,int param_2,int param_3)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  piVar1 = (int *)(*(int64_t *)(param_1 + 2) + -0x30 + (int64_t)*param_1 * 0x30);
  *piVar1 = *piVar1 + param_2;
  iVar4 = param_1[8];
  RenderingSystem_ConfigManager(param_1 + 8,iVar4 + param_3);
  iVar2 = param_1[4];
  *(int64_t *)(param_1 + 0x14) = *(int64_t *)(param_1 + 10) + (int64_t)iVar4 * 0x14;
  param_2 = iVar2 + param_2;
  iVar4 = param_1[5];
  if (iVar4 < param_2) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar3 = param_2;
    if (param_2 < iVar4) {
      iVar3 = iVar4;
    }
    Memory_CacheManager(param_1 + 4,iVar3);
  }
  param_1[4] = param_2;
  *(int64_t *)(param_1 + 0x16) = *(int64_t *)(param_1 + 6) + (int64_t)iVar2 * 2;
  return;
}
// 函数: void RenderingSystem_TessellationProcessor(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
void RenderingSystem_TessellationProcessor(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
                  uint64_t *param_5,int32_t param_6)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  short sVar9;
  int64_t lVar10;
  uVar1 = *(int32_t *)((int64_t)param_4 + 4);
  uVar2 = *(int32_t *)param_3;
  uVar3 = *(int32_t *)((int64_t)param_2 + 4);
  uVar4 = *(int32_t *)param_4;
  sVar9 = *(short *)(param_1 + 0x48);
  uVar5 = *(int32_t *)param_5;
  uVar6 = *(int32_t *)((int64_t)param_5 + 4);
  uVar7 = *(int32_t *)param_2;
  uVar8 = *(int32_t *)((int64_t)param_3 + 4);
  **(short **)(param_1 + 0x58) = sVar9;
  *(short *)(*(int64_t *)(param_1 + 0x58) + 2) = sVar9 + 1;
  *(short *)(*(int64_t *)(param_1 + 0x58) + 4) = sVar9 + 2;
  *(short *)(*(int64_t *)(param_1 + 0x58) + 6) = sVar9;
  *(short *)(*(int64_t *)(param_1 + 0x58) + 8) = sVar9 + 2;
  *(short *)(*(int64_t *)(param_1 + 0x58) + 10) = sVar9 + 3;
  **(uint64_t **)(param_1 + 0x50) = *param_2;
  *(uint64_t *)(*(int64_t *)(param_1 + 0x50) + 8) = *param_4;
  *(int32_t *)(*(int64_t *)(param_1 + 0x50) + 0x10) = param_6;
  lVar10 = *(int64_t *)(param_1 + 0x50);
  *(int32_t *)(lVar10 + 0x14) = uVar2;
  *(int32_t *)(lVar10 + 0x18) = uVar3;
  lVar10 = *(int64_t *)(param_1 + 0x50);
  *(int32_t *)(lVar10 + 0x1c) = uVar5;
  *(int32_t *)(lVar10 + 0x20) = uVar1;
  *(int32_t *)(*(int64_t *)(param_1 + 0x50) + 0x24) = param_6;
  *(uint64_t *)(*(int64_t *)(param_1 + 0x50) + 0x28) = *param_3;
  *(uint64_t *)(*(int64_t *)(param_1 + 0x50) + 0x30) = *param_5;
  *(int32_t *)(*(int64_t *)(param_1 + 0x50) + 0x38) = param_6;
  lVar10 = *(int64_t *)(param_1 + 0x50);
  *(int32_t *)(lVar10 + 0x3c) = uVar7;
  *(int32_t *)(lVar10 + 0x40) = uVar8;
  lVar10 = *(int64_t *)(param_1 + 0x50);
  *(int32_t *)(lVar10 + 0x44) = uVar4;
  *(int32_t *)(lVar10 + 0x48) = uVar6;
  *(int32_t *)(*(int64_t *)(param_1 + 0x50) + 0x4c) = param_6;
  *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 0x50;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
  *(int64_t *)(param_1 + 0x58) = *(int64_t *)(param_1 + 0x58) + 0xc;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_LightManager(int64_t param_1,int64_t param_2,int param_3,uint param_4,char param_5,
void RenderingSystem_LightManager(int64_t param_1,int64_t param_2,int param_3,uint param_4,char param_5,
                  float param_6)
{
  float *pfVar1;
  int32_t uVar2;
  int32_t uVar3;
  float fVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t stack_array_f8 [16];
  uint local_var_e8;
  uint local_var_e4;
  int64_t lStack_d8;
  int iStack_d0;
  uint64_t local_var_c0;
  local_var_c0 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  local_var_e8 = param_4;
  if (1 < param_3) {
    iVar9 = param_3 + -1;
    if (param_5 != '\0') {
      iVar9 = param_3;
    }
    uVar2 = **(int32_t **)(param_1 + 0x38);
    uVar3 = (*(int32_t **)(param_1 + 0x38))[1];
    lVar10 = (int64_t)iVar9;
    stack_array_f8[0] = 1.0 < param_6;
    lStack_d8 = lVar10;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      local_var_e4 = param_4 & 0xffffff;
      iStack_d0 = ((byte)stack_array_f8[0] + 3) * param_3;
      iVar7 = 0x12;
      if (!(bool)stack_array_f8[0]) {
        iVar7 = 0xc;
      }
      NetworkSystem_PacketSerializer(param_1,iVar7 * iVar9,iStack_d0);
// WARNING: Subroutine does not return
      SystemEventProcessor();
    }
    NetworkSystem_PacketSerializer(param_1,iVar9 * 6,iVar9 * 4);
    if (0 < lVar10) {
      iVar9 = 0;
      lVar8 = 0;
      do {
        iVar9 = iVar9 + 1;
        fVar4 = *(float *)(param_2 + lVar8 * 8);
        pfVar1 = (float *)(param_2 + lVar8 * 8);
        lVar8 = lVar8 + 1;
        lVar6 = 0;
        if (iVar9 != param_3) {
          lVar6 = lVar8;
        }
        fVar12 = *(float *)(param_2 + lVar6 * 8) - fVar4;
        fVar13 = *(float *)(param_2 + 4 + lVar6 * 8) - pfVar1[1];
        fVar11 = fVar13 * fVar13 + fVar12 * fVar12;
        if (0.0 < fVar11) {
          fVar11 = 1.0 / SQRT(fVar11);
          fVar12 = fVar12 * fVar11;
          fVar13 = fVar13 * fVar11;
        }
        fVar13 = fVar13 * param_6 * 0.5;
        fVar12 = fVar12 * param_6 * 0.5;
        **(float **)(param_1 + 0x50) = fVar4 + fVar13;
        *(float *)(*(int64_t *)(param_1 + 0x50) + 4) = pfVar1[1] - fVar12;
        lVar5 = *(int64_t *)(param_1 + 0x50);
        *(int32_t *)(lVar5 + 8) = uVar2;
        *(int32_t *)(lVar5 + 0xc) = uVar3;
        *(uint *)(*(int64_t *)(param_1 + 0x50) + 0x10) = param_4;
        *(float *)(*(int64_t *)(param_1 + 0x50) + 0x14) = fVar13 + *(float *)(param_2 + lVar6 * 8);
        *(float *)(*(int64_t *)(param_1 + 0x50) + 0x18) =
             *(float *)(param_2 + 4 + lVar6 * 8) - fVar12;
        lVar5 = *(int64_t *)(param_1 + 0x50);
        *(int32_t *)(lVar5 + 0x1c) = uVar2;
        *(int32_t *)(lVar5 + 0x20) = uVar3;
        *(uint *)(*(int64_t *)(param_1 + 0x50) + 0x24) = param_4;
        *(float *)(*(int64_t *)(param_1 + 0x50) + 0x28) = *(float *)(param_2 + lVar6 * 8) - fVar13;
        *(float *)(*(int64_t *)(param_1 + 0x50) + 0x2c) =
             fVar12 + *(float *)(param_2 + 4 + lVar6 * 8);
        lVar6 = *(int64_t *)(param_1 + 0x50);
        *(int32_t *)(lVar6 + 0x30) = uVar2;
        *(int32_t *)(lVar6 + 0x34) = uVar3;
        *(uint *)(*(int64_t *)(param_1 + 0x50) + 0x38) = param_4;
        *(float *)(*(int64_t *)(param_1 + 0x50) + 0x3c) = *pfVar1 - fVar13;
        *(float *)(*(int64_t *)(param_1 + 0x50) + 0x40) = fVar12 + pfVar1[1];
        lVar6 = *(int64_t *)(param_1 + 0x50);
        *(int32_t *)(lVar6 + 0x44) = uVar2;
        *(int32_t *)(lVar6 + 0x48) = uVar3;
        *(uint *)(*(int64_t *)(param_1 + 0x50) + 0x4c) = param_4;
        *(int64_t *)(param_1 + 0x50) = *(int64_t *)(param_1 + 0x50) + 0x50;
        **(int16_t **)(param_1 + 0x58) = *(int16_t *)(param_1 + 0x48);
        *(short *)(*(int64_t *)(param_1 + 0x58) + 2) = *(short *)(param_1 + 0x48) + 1;
        *(short *)(*(int64_t *)(param_1 + 0x58) + 4) = *(short *)(param_1 + 0x48) + 2;
        *(int16_t *)(*(int64_t *)(param_1 + 0x58) + 6) = *(int16_t *)(param_1 + 0x48);
        *(short *)(*(int64_t *)(param_1 + 0x58) + 8) = *(short *)(param_1 + 0x48) + 2;
        *(short *)(*(int64_t *)(param_1 + 0x58) + 10) = *(short *)(param_1 + 0x48) + 3;
        *(int64_t *)(param_1 + 0x58) = *(int64_t *)(param_1 + 0x58) + 0xc;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
      } while (lVar8 < lVar10);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_c0 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address