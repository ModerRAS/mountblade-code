#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part394.c - 6 个函数
// 函数: void UISystem_87870(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void UISystem_87870(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int32_t param_6)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int8_t stack_array_40 [8];
  uint64_t local_var_38;
  int64_t *plStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  uVar2 = 0xfffffffffffffffe;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_50 = (int64_t *)0x0;
  plStack_48 = (int64_t *)0x0;
  plStack_28 = (int64_t *)0x0;
  local_var_38 = 0;
  stack_array_40[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_50,param_1,0);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  DataStructure_32d10(&plStack_50,param_2,param_3,param_4,param_5,param_6,uVar2);
  if ((plStack_50 != (int64_t *)0x0) && (plStack_48 != (int64_t *)0x0)) {
    if (cStack_1e != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(stack_array_40);
    if (cStack_20 != '\0') {
      SystemInitializer(plStack_50);
    }
    if (cStack_1f != '\0') {
      SystemInitializer(plStack_50);
    }
    plVar1 = plStack_48;
    plStack_48 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  SystemSecurityManager(stack_array_40);
  if (plStack_28 != (int64_t *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_48 != (int64_t *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (plStack_50 != (int64_t *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  return;
}
// 函数: void UISystem_879d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void UISystem_879d0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int32_t param_6)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int8_t stack_array_40 [8];
  uint64_t local_var_38;
  int64_t *plStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  uVar2 = 0xfffffffffffffffe;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_50 = (int64_t *)0x0;
  plStack_48 = (int64_t *)0x0;
  plStack_28 = (int64_t *)0x0;
  local_var_38 = 0;
  stack_array_40[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_50,param_1,0);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  DataStructure_325e0(&plStack_50,param_2,param_3,param_4,param_5,param_6,uVar2);
  if ((plStack_50 != (int64_t *)0x0) && (plStack_48 != (int64_t *)0x0)) {
    if (cStack_1e != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(stack_array_40);
    if (cStack_20 != '\0') {
      SystemInitializer(plStack_50);
    }
    if (cStack_1f != '\0') {
      SystemInitializer(plStack_50);
    }
    plVar1 = plStack_48;
    plStack_48 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  SystemSecurityManager(stack_array_40);
  if (plStack_28 != (int64_t *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_48 != (int64_t *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (plStack_50 != (int64_t *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  return;
}
// 函数: void UISystem_87b30(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_87b30(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int8_t stack_array_40 [8];
  uint64_t local_var_38;
  int64_t *plStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  uVar2 = 0xfffffffffffffffe;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_50 = (int64_t *)0x0;
  plStack_48 = (int64_t *)0x0;
  plStack_28 = (int64_t *)0x0;
  local_var_38 = 0;
  stack_array_40[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_50,param_1,0,param_4,uVar2);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  DataStructure_30c90(&plStack_50,param_2,param_3);
  if ((plStack_50 != (int64_t *)0x0) && (plStack_48 != (int64_t *)0x0)) {
    if (cStack_1e != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(stack_array_40);
    if (cStack_20 != '\0') {
      SystemInitializer(plStack_50);
    }
    if (cStack_1f != '\0') {
      SystemInitializer(plStack_50);
    }
    plVar1 = plStack_48;
    plStack_48 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  SystemSecurityManager(stack_array_40);
  if (plStack_28 != (int64_t *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_48 != (int64_t *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (plStack_50 != (int64_t *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_Validator(int32_t param_1,int param_2)
void SystemCore_Validator(int32_t param_1,int param_2)
{
  int64_t *plVar1;
  float *pfVar2;
  bool bVar3;
  int32_t uVar4;
  int32_t uVar5;
  char cVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int32_t *puVar11;
  int64_t *in_RCX;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int iVar15;
  uint uVar16;
  uint64_t **ppuVar17;
  uint64_t uVar18;
  int iVar19;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  float fVar20;
  float fVar21;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int8_t auVar22 [16];
  float fVar23;
  float fVar24;
  int8_t stack_array_298 [32];
  float *pfStack_278;
  int32_t local_var_270;
  int32_t local_var_268;
  int8_t local_var_260;
  uint64_t local_var_258;
  uint64_t local_var_250;
  int64_t *plStack_248;
  char cStack_238;
  int64_t lStack_230;
  int iStack_228;
  uint local_var_224;
  uint64_t local_var_220;
  int32_t local_var_218;
  int32_t local_var_214;
  int32_t local_var_210;
  int32_t local_var_20c;
  int32_t local_var_208;
  uint64_t local_var_1f0;
  uint64_t local_var_1e8;
  uint64_t local_var_1e0;
  uint64_t local_var_1d8;
  int32_t local_var_1d0;
  char cStack_1cc;
  uint64_t **pplocal_var_1c8;
  float fStack_1c0;
  int32_t local_var_1bc;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  int64_t lStack_180;
  int32_t local_var_178;
  uint64_t local_var_170;
  int8_t stack_array_168 [8];
  int32_t local_var_160;
  int8_t stack_array_158 [8];
  int32_t local_var_150;
  int8_t stack_array_148 [16];
  uint64_t stack_array_138 [8];
  uint64_t *plocal_var_f8;
  uint64_t *plocal_var_f0;
  uint64_t local_var_e8;
  int32_t local_var_e0;
  int iStack_d8;
  byte bStack_d4;
  uint64_t local_var_c8;
  local_var_170 = 0xfffffffffffffffe;
  local_var_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_298;
  lVar10 = in_RCX[1];
  iStack_228 = param_2;
  if (lVar10 == 0) {
    lVar10 = in_RCX[2];
    if (lVar10 != 0) {
      if ((*(byte *)(lVar10 + 0x139) & 1) == 0) goto LAB_180487d3e;
      if ((*(byte *)(lVar10 + 0x139) & 4) != 0) {
        cVar6 = SystemCore_PerformanceMonitor(lVar10,in_RCX + 7);
        param_1 = extraout_XMM0_Da_00;
        goto joined_r0x000180487d3c;
      }
    }
  }
  else if ((*(byte *)(lVar10 + 0x139) & 1) == 0) {
LAB_180487d3e:
    in_RCX[1] = 0;
    in_RCX[2] = 0;
    *(int32_t *)(in_RCX + 8) = 0;
  }
  else if ((*(byte *)(lVar10 + 0x139) & 4) != 0) {
    cVar6 = SystemCore_PerformanceMonitor(lVar10,in_RCX + 7);
    param_1 = extraout_XMM0_Da;
joined_r0x000180487d3c:
    if (cVar6 == '\0') goto LAB_180487d3e;
  }
  if ((int)in_RCX[8] < param_2) {
    uVar16 = *(uint *)(*in_RCX + 0x60300);
    local_var_224 = uVar16;
    cVar6 = UISystem_88880(in_RCX + 7);
    lVar10 = *in_RCX;
    if (cVar6 == '\0') {
      cStack_1cc = '\0';
      local_var_1f0 = 0;
      local_var_1e8 = 0x7f7fffff3f800000;
      local_var_1d0 = 0;
      local_var_1e0 = 0;
      local_var_1d8 = 0;
      local_var_270 = CONCAT31(local_var_270._1_3_,1);
      pfStack_278 = (float *)CONCAT44(pfStack_278._4_4_,0x51b189);
      param_1 = PhysicsSystem_JointManager(lVar10,in_RCX + 3);
      if (cStack_1cc == '\0') goto LAB_180488626;
      *(int32_t *)(in_RCX + 4) = local_var_1d0;
      in_RCX[7] = in_RCX[3];
      *(int32_t *)(in_RCX + 5) = (int32_t)local_var_1f0;
      *(int32_t *)((int64_t)in_RCX + 0x2c) = local_var_1f0._4_4_;
      *(int32_t *)(in_RCX + 6) = (int32_t)local_var_1e8;
      *(int32_t *)((int64_t)in_RCX + 0x34) = local_var_1e8._4_4_;
      lVar10 = *in_RCX;
      param_1 = (int32_t)local_var_1f0;
      if (*(int64_t *)(lVar10 + 0x2ee8) - *(int64_t *)(lVar10 + 12000) >> 3 != 0) {
        local_var_270 = 0x3fc00000;
        pfStack_278 = (float *)((uint64_t)pfStack_278 & 0xffffffffffffff00);
        lVar10 = UISystem_55a30(lVar10 + 0x2a68,in_RCX + 3,lVar10 + 0x28c8,uVar16);
        in_RCX[1] = lVar10;
        in_RCX[2] = lVar10;
        param_1 = extraout_XMM0_Da_04;
      }
    }
    else {
      in_RCX[5] = 0;
      in_RCX[6] = 0;
      if (*(int64_t *)(lVar10 + 0x2ee8) - *(int64_t *)(lVar10 + 12000) >> 3 != 0) {
        cStack_238 = '\x01';
        do {
          lStack_230 = 0;
          if (in_RCX[1] != 0) {
            pfVar2 = (float *)(in_RCX + 3);
            fStack_1a4 = *(float *)((int64_t)in_RCX + 0x1c) - *(float *)((int64_t)in_RCX + 0x3c);
            fStack_1a8 = *pfVar2 - *(float *)(in_RCX + 7);
            plStack_248 = &lStack_230;
            local_var_250 = 0;
            local_var_258 = 0;
            local_var_260 = 0;
            local_var_268 = 0;
            local_var_270 = CONCAT31(local_var_270._1_3_,1);
            pfStack_278 = &fStack_1a8;
            cVar6 = RenderingSystem_944c0(*in_RCX + 0x2a68,in_RCX[1],0,in_RCX + 7);
            if (cVar6 != '\0') {
              in_RCX[1] = lStack_230;
              in_RCX[2] = lStack_230;
              in_RCX[7] = *(int64_t *)pfVar2;
              lVar10 = lStack_230;
              param_1 = SystemFunction_00018038d2f0(lStack_230,pfVar2);
              *(int32_t *)(in_RCX + 4) = param_1;
              if (param_2 < 3) {
                if (lVar10 != 0) {
                  puVar11 = (int32_t *)SystemFunction_00018038d3b0(param_1,&local_var_220,in_RCX + 7);
                  param_1 = puVar11[1];
                  uVar4 = puVar11[1];
                  uVar5 = puVar11[2];
                  local_var_208 = 0x7f7fffff;
                  *(int32_t *)(in_RCX + 5) = *puVar11;
                  *(int32_t *)((int64_t)in_RCX + 0x2c) = uVar4;
                  *(int32_t *)(in_RCX + 6) = uVar5;
                  *(int32_t *)((int64_t)in_RCX + 0x34) = 0x7f7fffff;
                }
              }
              else {
                cStack_1cc = '\0';
                local_var_1f0 = 0;
                local_var_1e8 = 0x7f7fffff3f800000;
                local_var_1d0 = 0;
                local_var_1e0 = 0;
                local_var_1d8 = 0;
                local_var_270 = CONCAT31(local_var_270._1_3_,1);
                pfStack_278 = (float *)CONCAT44(pfStack_278._4_4_,0x51b189);
                param_1 = PhysicsSystem_JointManager(*in_RCX);
                if (cStack_1cc != '\0') {
                  *(int32_t *)(in_RCX + 4) = local_var_1d0;
                  in_RCX[5] = local_var_1f0;
                  in_RCX[6] = local_var_1e8;
                  *(int *)(in_RCX + 8) = param_2;
                  param_1 = local_var_1d0;
                  goto LAB_180488626;
                }
              }
              *(int *)(in_RCX + 8) = param_2;
              goto LAB_180488626;
            }
          }
          if (param_2 == 1) {
            pplocal_var_1c8 = &plocal_var_f8;
            param_1 = 0;
            plocal_var_f8 = (uint64_t *)0x0;
            plocal_var_f0 = (uint64_t *)0x0;
            local_var_e8 = 0;
            local_var_e0 = 3;
            bStack_d4 = 1;
            iStack_d8 = 0;
            lVar10 = *in_RCX;
            if (*(int64_t *)(lVar10 + 0x2ee8) - *(int64_t *)(lVar10 + 12000) >> 3 != 0) {
              puVar7 = (uint64_t *)SystemFunction_000180388c90(lVar10 + 0x28c8,in_RCX + 3);
              plVar1 = (int64_t *)puVar7[1];
              param_1 = extraout_XMM0_Da_01;
              for (plVar9 = (int64_t *)*puVar7; plVar9 != plVar1; plVar9 = plVar9 + 1) {
                ppuVar17 = (uint64_t **)*plVar9;
                pplocal_var_1c8 = ppuVar17;
                if ((((*(uint *)((int64_t)ppuVar17 + 0x134) & uVar16 & 0xfffffffe) ==
                      (uVar16 & 0xfffffffe)) || ((*(uint *)((int64_t)ppuVar17 + 0x134) & 1) != 0))
                   && (cVar6 = SystemCore_PerformanceMonitor(ppuVar17,in_RCX + 3), param_1 = extraout_XMM0_Da_02,
                      cVar6 != '\0')) {
                  if (bStack_d4 != 0) {
                    if (iStack_d8 + 1 < 9) {
                      stack_array_138[iStack_d8] = (uint64_t)ppuVar17;
                      iStack_d8 = iStack_d8 + 1;
                      goto LAB_180487f3c;
                    }
                    RenderingSystem_969b0(stack_array_138);
                  }
                  param_1 = SystemInitializer(&plocal_var_f8,&pplocal_var_1c8);
                }
LAB_180487f3c:
              }
            }
            uVar14 = 0;
            iVar15 = iStack_d8;
            if (bStack_d4 == 0) {
              iVar15 = (int)((int64_t)plocal_var_f0 - (int64_t)plocal_var_f8 >> 3);
            }
            if (iVar15 == 0) {
              if (lStack_230 == 0) {
                if (in_RCX[1] != 0) {
                  fStack_194 = *(float *)((int64_t)in_RCX + 0x1c) -
                               *(float *)((int64_t)in_RCX + 0x3c);
                  fStack_198 = *(float *)(in_RCX + 3) - *(float *)(in_RCX + 7);
                  RenderingSystem_8bc40(in_RCX[1],stack_array_158,in_RCX + 7,&fStack_198);
                  param_1 = local_var_150;
                  goto LAB_18048800e;
                }
              }
              else {
                fStack_19c = *(float *)((int64_t)in_RCX + 0x1c) -
                             *(float *)((int64_t)in_RCX + 0x3c);
                fStack_1a0 = *(float *)(in_RCX + 3) - *(float *)(in_RCX + 7);
                RenderingSystem_8bc40(lStack_230,stack_array_168,in_RCX + 7,&fStack_1a0);
                param_1 = local_var_160;
LAB_18048800e:
                *(int32_t *)(in_RCX + 4) = param_1;
              }
              in_RCX[1] = 0;
              in_RCX[2] = lStack_230;
            }
            else {
              if (iVar15 == 1) {
                puVar8 = stack_array_138;
                if (bStack_d4 == 0) {
                  puVar8 = plocal_var_f8;
                }
                uVar14 = *puVar8;
              }
              else {
                iVar19 = 0;
                pplocal_var_1c8 = (uint64_t **)in_RCX[3];
                fStack_1c0 = *(float *)(in_RCX + 4);
                local_var_1bc = *(int32_t *)((int64_t)in_RCX + 0x24);
                if (in_RCX[1] != 0) {
                  fStack_18c = *(float *)((int64_t)in_RCX + 0x1c) -
                               *(float *)((int64_t)in_RCX + 0x3c);
                  fStack_190 = *(float *)(in_RCX + 3) - *(float *)(in_RCX + 7);
                  plVar9 = (int64_t *)RenderingSystem_8bc40(in_RCX[1],stack_array_148,in_RCX + 7,&fStack_190);
                  pplocal_var_1c8 = (uint64_t **)*plVar9;
                  fStack_1c0 = *(float *)(plVar9 + 1);
                  local_var_1bc = *(int32_t *)((int64_t)plVar9 + 0xc);
                }
                puVar8 = plocal_var_f8;
                uVar18 = (uint64_t)bStack_d4;
                puVar12 = stack_array_138;
                if (bStack_d4 == 0) {
                  puVar12 = plocal_var_f8;
                }
                fVar20 = (float)SystemFunction_00018038d2f0(*puVar12,in_RCX + 3);
                fVar23 = fStack_1c0;
                cVar6 = (char)uVar18;
                fVar20 = ABS(fVar20 - fStack_1c0);
                uVar16 = 1;
                if (1 < iVar15) {
                  puVar12 = puVar8;
                  do {
                    puVar12 = puVar12 + 1;
                    puVar13 = (uint64_t *)
                              (((int64_t)stack_array_138 - (int64_t)puVar8) + (int64_t)puVar12);
                    if ((char)uVar18 == '\0') {
                      puVar13 = puVar12;
                    }
                    fVar21 = (float)SystemFunction_00018038d2f0(*puVar13,in_RCX + 3);
                    cVar6 = (char)uVar18;
                    if (ABS(fVar21 - fVar23) < fVar20) {
                      uVar14 = (uint64_t)uVar16;
                    }
                    iVar19 = (int)uVar14;
                    uVar16 = uVar16 + 1;
                  } while ((int)uVar16 < iVar15);
                }
                if (cVar6 != '\0') {
                  puVar8 = stack_array_138;
                }
                uVar14 = puVar8[iVar19];
              }
              in_RCX[1] = uVar14;
              in_RCX[2] = uVar14;
              param_1 = SystemFunction_00018038d2f0(uVar14,in_RCX + 3);
              *(int32_t *)(in_RCX + 4) = param_1;
            }
            in_RCX[7] = in_RCX[3];
            if (uVar14 != 0) {
              pfVar2 = *(float **)(uVar14 + 0x80);
              if ((*(char *)(uVar14 + 0xa8) == '\x03') ||
                 ((**(float **)(uVar14 + 0x90) - *pfVar2) *
                  (*(float *)((int64_t)in_RCX + 0x3c) - pfVar2[1]) -
                  (*(float *)(in_RCX + 7) - *pfVar2) * ((*(float **)(uVar14 + 0x90))[1] - pfVar2[1])
                  < 0.0)) {
                param_1 = (int32_t)*(uint64_t *)(uVar14 + 0xd0);
                local_var_210 = (int32_t)((uint64_t)*(uint64_t *)(uVar14 + 0xd0) >> 0x20);
                local_var_218 = *(int32_t *)(uVar14 + 0xd8);
              }
              else {
                param_1 = (int32_t)*(uint64_t *)(uVar14 + 0xdc);
                local_var_210 = (int32_t)((uint64_t)*(uint64_t *)(uVar14 + 0xdc) >> 0x20);
                local_var_218 = *(int32_t *)(uVar14 + 0xe4);
              }
              local_var_220 = CONCAT44(local_var_210,param_1);
              local_var_208 = 0x7f7fffff;
              *(int32_t *)(in_RCX + 5) = param_1;
              *(int32_t *)((int64_t)in_RCX + 0x2c) = local_var_210;
              *(int32_t *)(in_RCX + 6) = local_var_218;
              *(int32_t *)((int64_t)in_RCX + 0x34) = 0x7f7fffff;
              local_var_214 = param_1;
              local_var_20c = local_var_218;
            }
            *(int32_t *)(in_RCX + 8) = 1;
            if (bStack_d4 == 0) {
              plocal_var_f0 = plocal_var_f8;
              bStack_d4 = 1;
            }
            iStack_d8 = 0;
            pplocal_var_1c8 = &plocal_var_f8;
            uVar16 = local_var_224;
            param_2 = iStack_228;
            if (plocal_var_f8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
          }
          else if (lStack_230 == 0) {
            fVar21 = *(float *)(in_RCX + 3) - *(float *)(in_RCX + 7);
            fVar24 = *(float *)((int64_t)in_RCX + 0x1c) - *(float *)((int64_t)in_RCX + 0x3c);
            fVar20 = fVar24 * fVar24 + fVar21 * fVar21;
            fVar20 = fVar20 + (float)(fVar20 <= 1.1754944e-38) * 1.1754944e-38;
            auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
            fVar23 = auVar22._0_4_;
            fVar23 = fVar23 * 0.5 * (3.0 - fVar20 * fVar23 * fVar23);
            bVar3 = 1.0 < fVar23 * fVar20;
            if (bVar3) {
              local_var_1b8 = CONCAT44(fVar23 * fVar24 + *(float *)((int64_t)in_RCX + 0x3c),
                                    fVar23 * fVar21 + *(float *)(in_RCX + 7));
              local_var_1b0 = CONCAT44(0x7f7fffff,(int)in_RCX[4]);
            }
            else {
              local_var_1b8 = in_RCX[3];
              local_var_1b0 = in_RCX[4];
            }
            cStack_1cc = '\0';
            local_var_1f0 = 0;
            local_var_1e8 = 0x7f7fffff3f800000;
            local_var_1d0 = 0;
            local_var_1e0 = 0;
            local_var_1d8 = 0;
            local_var_270 = CONCAT31(local_var_270._1_3_,1);
            pfStack_278 = (float *)CONCAT44(pfStack_278._4_4_,0x51b189);
            param_1 = PhysicsSystem_JointManager(*in_RCX,&local_var_1b8);
            if (cStack_1cc == '\0') {
              cStack_238 = '\0';
              *(int32_t *)(in_RCX + 8) = 0;
            }
            else {
              *(int32_t *)(in_RCX + 4) = local_var_1d0;
              in_RCX[7] = local_var_1b8;
              local_var_270 = 0x3fc00000;
              pfStack_278 = (float *)((uint64_t)pfStack_278 & 0xffffffffffffff00);
              lVar10 = UISystem_55a30(*in_RCX + 0x2a68,&local_var_1b8,*in_RCX + 0x28c8,uVar16);
              in_RCX[1] = lVar10;
              in_RCX[2] = lVar10;
              param_1 = extraout_XMM0_Da_03;
              if (!bVar3) {
                *(int32_t *)(in_RCX + 8) = 3;
                *(int32_t *)(in_RCX + 5) = (int32_t)local_var_1f0;
                *(int32_t *)((int64_t)in_RCX + 0x2c) = local_var_1f0._4_4_;
                *(int32_t *)(in_RCX + 6) = (int32_t)local_var_1e8;
                *(int32_t *)((int64_t)in_RCX + 0x34) = local_var_1e8._4_4_;
                param_1 = (int32_t)local_var_1f0;
              }
            }
          }
          else {
            in_RCX[1] = 0;
            in_RCX[2] = 0;
            fStack_188 = *(float *)(in_RCX + 3) - *(float *)(in_RCX + 7);
            fStack_184 = *(float *)((int64_t)in_RCX + 0x1c) - *(float *)((int64_t)in_RCX + 0x3c);
            RenderingSystem_8bc40(fStack_188,&lStack_180,in_RCX + 7,&fStack_188);
            in_RCX[7] = lStack_180;
            *(int32_t *)(in_RCX + 4) = local_var_178;
            param_1 = local_var_178;
          }
          if ((param_2 <= (int)in_RCX[8]) || (cStack_238 == '\0')) goto LAB_180488626;
        } while( true );
      }
      *(int32_t *)(in_RCX + 4) = 0x447a0000;
      cStack_1cc = '\0';
      local_var_1f0 = 0;
      local_var_1e8 = 0x7f7fffff3f800000;
      local_var_1d0 = 0;
      local_var_1e0 = 0;
      local_var_1d8 = 0;
      local_var_270 = CONCAT31(local_var_270._1_3_,1);
      pfStack_278 = (float *)CONCAT44(pfStack_278._4_4_,0x51b189);
      param_1 = PhysicsSystem_JointManager(lVar10,in_RCX + 3);
      if (cStack_1cc == '\0') {
        *(int32_t *)(in_RCX + 8) = 0;
        goto LAB_180488626;
      }
      *(int32_t *)(in_RCX + 4) = local_var_1d0;
      in_RCX[7] = in_RCX[3];
      *(int32_t *)(in_RCX + 5) = (int32_t)local_var_1f0;
      *(int32_t *)((int64_t)in_RCX + 0x2c) = local_var_1f0._4_4_;
      *(int32_t *)(in_RCX + 6) = (int32_t)local_var_1e8;
      *(int32_t *)((int64_t)in_RCX + 0x34) = local_var_1e8._4_4_;
      param_1 = (int32_t)local_var_1f0;
    }
    *(int32_t *)(in_RCX + 8) = 3;
  }
LAB_180488626:
// WARNING: Subroutine does not return
  SystemSecurityChecker(param_1);
}
int64_t SystemCore_ErrorHandler(int64_t *param_1)
{
  int64_t lVar1;
  short sVar2;
  int64_t lVar3;
  int32_t astack_special_x_8 [2];
  int32_t astack_special_x_10 [2];
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  astack_special_x_10[0] = (int32_t)param_1[3];
  sVar2 = _fdtest(astack_special_x_10);
  if (sVar2 != 2) {
    astack_special_x_8[0] = *(int32_t *)((int64_t)param_1 + 0x1c);
    sVar2 = _fdtest(astack_special_x_8);
    if (sVar2 != 2) {
      SystemCore_Validator(param_1,2);
      if (1 < (int)param_1[8]) {
        lVar3 = param_1[2];
        if ((lVar3 == 0) &&
           (lVar1 = *param_1, *(int64_t *)(lVar1 + 0x2ee8) - *(int64_t *)(lVar1 + 12000) >> 3 != 0
           )) {
          SystemCore_Validator(param_1,2);
          if ((int)param_1[8] < 2) {
            local_var_10 = 0xffc00000;
          }
          else {
            local_var_10 = (int32_t)param_1[4];
          }
          local_var_18 = (int32_t)param_1[3];
          local_var_14 = *(int32_t *)((int64_t)param_1 + 0x1c);
          local_var_c = 0x7f7fffff;
          lVar3 = RenderingSystem_96100(lVar1 + 0x2a68,&local_var_18,lVar1 + 0x28c8,0);
          param_1[2] = lVar3;
        }
        return lVar3;
      }
    }
  }
  return 0;
}
uint64_t UISystem_8871e(int32_t param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t uVar1;
  int in_ECX;
  int64_t unaff_RBX;
  int32_t local_buffer_2c;
  SystemCore_Validator(param_1,in_ECX + 2);
  local_buffer_2c = 0x7f7fffff;
  uVar1 = RenderingSystem_96100(param_3 + 0x2a68,&local_buffer_00000020,param_3 + 0x28c8,0,
                        *(int32_t *)(unaff_RBX + 0x18));
  *(uint64_t *)(unaff_RBX + 0x10) = uVar1;
  return uVar1;
}
uint64_t UISystem_887a4(uint64_t param_1)
{
  return param_1;
}
// 函数: void UISystem_887f0(int64_t param_1)
void UISystem_887f0(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  if (*(char *)(param_1 + 100) == '\0') {
    *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_1 + 0x40);
    *(int8_t *)(param_1 + 100) = 1;
  }
  *(int32_t *)(param_1 + 0x60) = 0;
  puVar2 = *(uint64_t **)(param_1 + 0x40);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        SystemFunction_00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
int32_t UISystem_88840(int64_t param_1,int param_2)
{
  SystemCore_Validator();
  if (*(int *)(param_1 + 0x40) < param_2) {
    return 0xffc00000;
  }
  return *(int32_t *)(param_1 + 0x20);
}
int16_t UISystem_88880(int32_t *param_1)
{
  short sVar1;
  int32_t astack_special_x_8 [8];
  astack_special_x_8[0] = *param_1;
  sVar1 = _fdtest(astack_special_x_8);
  if (sVar1 != 2) {
    astack_special_x_8[0] = param_1[1];
    sVar1 = _fdtest(astack_special_x_8);
    if (sVar1 != 2) {
      return 1;
    }
  }
  return 0;
}
uint64_t *
UISystem_888d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_7088_ptr;
  *param_1 = &ui_system_data_1608_ptr;
  *param_1 = &ui_system_data_1864_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_88930(void)
void UISystem_88930(void)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,3,0xfffffffffffffffe);
  *puVar1 = &ui_system_data_1864_ptr;
  *puVar1 = &ui_system_data_1608_ptr;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *puVar1 = &processed_var_7088_ptr;
  return;
}
uint64_t *
UISystem_889a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xf;
  strcpy_s(param_2[1],0x80,&system_data_c1d0,param_4,0,0xfffffffffffffffe);
  return param_2;
}
int64_t UISystem_88a20(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  if (*(int64_t **)(param_1 + 0xf8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xf8) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0xf0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xf0) + 0x38))();
  }
  DataStructure_44780(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x108,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address