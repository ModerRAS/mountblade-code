/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
#include "RenderingAdvancedManager_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_11_part045.c - 3 个函数
// 函数: void SystemCore_ab5e0(int64_t param_1)
void SystemCore_ab5e0(int64_t param_1)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int8_t auVar5 [16];
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  float fVar11;
  int8_t stack_array_1d8 [32];
  uint64_t local_var_1b8;
  int8_t stack_array_1a8 [8];
  int8_t stack_array_1a0 [8];
  int8_t stack_array_198 [4];
  uint local_var_194;
  ushort local_var_190;
  uint local_var_18e;
  ushort local_var_18a;
  int8_t stack_array_188 [16];
  int8_t stack_array_178 [32];
  ushort local_var_158;
  uint local_var_156;
  ushort local_var_152;
  int8_t stack_array_150 [10];
  int8_t stack_array_146 [270];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1d8;
  *(int16_t *)(param_1 + 0x178) = 0;
  *(int32_t *)(param_1 + 0x28) = 1;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  uVar10 = 8;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  bVar6 = false;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  local_var_1b8 = 0;
  iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_198,1,8);
  if ((iVar7 != 0) || (iVar7 = SystemFunction_00018076b6b0(stack_array_198,&processed_var_8912_ptr,4), iVar7 != 0))
  goto InitializationSystem_ResourceManager;
  local_var_1b8 = 0;
  iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_1a8,1,4);
  if (iVar7 != 0) goto InitializationSystem_ResourceManager;
  uVar8 = local_var_194 >> 0x18;
  uVar2 = local_var_194 & 0xff0000;
  uVar3 = local_var_194 & 0xff00;
  uVar4 = local_var_194 << 0x18;
  iVar7 = SystemFunction_00018076b6b0(stack_array_1a8,&processed_var_8920_ptr,4);
  if (iVar7 == 0) {
    *(int8_t *)(param_1 + 0x178) = 1;
  }
  else {
    iVar7 = SystemFunction_00018076b6b0(stack_array_1a8,&ui_system_data_1828_ptr,4);
    if (iVar7 != 0) goto InitializationSystem_ResourceManager;
  }
  *(uint64_t *)(param_1 + 0x180) = 0;
  *(uint64_t *)(param_1 + 0x188) = 0;
  *(uint64_t *)(param_1 + 400) = 0;
  *(uint64_t *)(param_1 + 0x198) = 0;
  *(uint64_t *)(param_1 + 0x1a0) = 0;
  *(uint64_t *)(param_1 + 0x1a8) = 0;
  *(uint64_t *)(param_1 + 0x1b0) = 0;
  *(uint64_t **)(param_1 + 8) = (uint64_t *)(param_1 + 0x180);
  iVar7 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x10))
                    (*(int64_t **)(param_1 + 0x170),param_1 + 0x194);
  if (iVar7 != 0) goto InitializationSystem_ResourceManager;
  *(int32_t *)(param_1 + 0x110) = 0xffffffff;
  uVar9 = 0xc;
  do {
    iVar7 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),uVar9,0);
    if (iVar7 != 0) goto InitializationSystem_ResourceManager;
    local_var_1b8 = 0;
    iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_198,1,8);
    if (iVar7 != 0) goto InitializationSystem_ResourceManager;
    local_var_194 = (local_var_194 & 0xff0000 | local_var_194 >> 0x10) >> 8 |
                 (local_var_194 << 0x10 | local_var_194 & 0xff00) << 8;
    iVar7 = SystemFunction_00018076b6b0(stack_array_198,&processed_var_8928_ptr,4);
    if (iVar7 == 0) {
      local_var_1b8 = 0;
      if (*(char *)(param_1 + 0x178) == '\0') {
        iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),&local_var_190,1,0x12);
        if (iVar7 != 0) goto InitializationSystem_ResourceManager;
      }
      else {
        iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),&local_var_158,1,0x117);
        if (iVar7 != 0) goto InitializationSystem_ResourceManager;
        iVar7 = SystemFunction_00018076b6b0(stack_array_146,&processed_var_8936_ptr,4);
        if (iVar7 == 0) {
          *(int8_t *)(param_1 + 0x179) = 0;
        }
        else {
          iVar7 = SystemFunction_00018076b6b0(stack_array_146,&processed_var_8944_ptr,4);
          if (iVar7 != 0) goto InitializationSystem_ResourceManager;
          *(int8_t *)(param_1 + 0x179) = 1;
        }
      }
      if (*(char *)(param_1 + 0x178) == '\0') {
        local_var_190 = local_var_190 >> 8 | local_var_190 << 8;
        local_var_18e = (local_var_18e & 0xff0000 | local_var_18e >> 0x10) >> 8 |
                     (local_var_18e << 0x10 | local_var_18e & 0xff00) << 8;
        local_var_18a = local_var_18a >> 8 | local_var_18a << 8;
        fVar11 = (float)SystemCore_ab420(stack_array_188);
        *(int *)(*(int64_t *)(param_1 + 8) + 0x10) = (int)fVar11;
        lVar1 = *(int64_t *)(param_1 + 8);
        if (local_var_18a == 8) {
          *(int32_t *)(lVar1 + 8) = 1;
          *(int *)(*(int64_t *)(param_1 + 8) + 0xc) = (int)(short)local_var_190;
        }
        else if (local_var_18a == 0x10) {
          *(int32_t *)(lVar1 + 8) = 2;
          *(int *)(*(int64_t *)(param_1 + 8) + 0xc) = (int)(short)local_var_190;
        }
        else if (local_var_18a == 0x18) {
          *(int32_t *)(lVar1 + 8) = 3;
          *(int *)(*(int64_t *)(param_1 + 8) + 0xc) = (int)(short)local_var_190;
        }
        else {
          if (local_var_18a != 0x20) goto InitializationSystem_ResourceManager;
          *(int32_t *)(lVar1 + 8) = 4;
          *(int *)(*(int64_t *)(param_1 + 8) + 0xc) = (int)(short)local_var_190;
        }
      }
      else {
        local_var_158 = local_var_158 >> 8 | local_var_158 << 8;
        local_var_156 = (local_var_156 & 0xff0000 | local_var_156 >> 0x10) >> 8 |
                     (local_var_156 << 0x10 | local_var_156 & 0xff00) << 8;
        local_var_152 = local_var_152 >> 8 | local_var_152 << 8;
        fVar11 = (float)SystemCore_ab420(stack_array_150);
        *(int *)(*(int64_t *)(param_1 + 8) + 0x10) = (int)fVar11;
        lVar1 = *(int64_t *)(param_1 + 8);
        if (local_var_152 == 8) {
          *(int32_t *)(lVar1 + 8) = 1;
          *(int *)(*(int64_t *)(param_1 + 8) + 0xc) = (int)(short)local_var_158;
        }
        else if (local_var_152 == 0x10) {
          *(int32_t *)(lVar1 + 8) = 2;
          *(int *)(*(int64_t *)(param_1 + 8) + 0xc) = (int)(short)local_var_158;
        }
        else if (local_var_152 == 0x18) {
          *(int32_t *)(lVar1 + 8) = 3;
          *(int *)(*(int64_t *)(param_1 + 8) + 0xc) = (int)(short)local_var_158;
        }
        else {
          if (local_var_152 != 0x20) goto InitializationSystem_ResourceManager;
          *(int32_t *)(lVar1 + 8) = 4;
          *(int *)(*(int64_t *)(param_1 + 8) + 0xc) = (int)(short)local_var_158;
        }
      }
    }
    else {
      iVar7 = SystemFunction_00018076b6b0(stack_array_198,&processed_var_8952_ptr,4);
      if (iVar7 == 0) {
        local_var_1b8 = 0;
        iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_1a0,1,8);
        if (iVar7 != 0) goto InitializationSystem_ResourceManager;
        if (*(int *)(param_1 + 0x110) == -1) {
          *(uint *)(*(int64_t *)(param_1 + 8) + 0x14) = local_var_194 - 8;
          iVar7 = Function_49365015(*(uint64_t *)(param_1 + 0x170),param_1 + 0x110);
          if (iVar7 != 0) goto InitializationSystem_ResourceManager;
        }
        if ((*(uint *)(*(int64_t *)(param_1 + 0x170) + 0x194) & 1) == 0) {
          bVar6 = true;
        }
      }
      else {
        iVar7 = SystemFunction_00018076b6b0(stack_array_198,&processed_var_8960_ptr,4);
        if (iVar7 == 0) {
          local_var_1b8 = 0;
          iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),stack_array_178,1,0x14);
          if (iVar7 != 0) goto InitializationSystem_ResourceManager;
        }
        else {
          SystemFunction_00018076b6b0(stack_array_198,&processed_var_8968_ptr);
        }
      }
    }
    uVar9 = local_var_194 + 8 + (local_var_194 & 1) + uVar9;
  } while ((((-1 < (int)local_var_194) && (uVar9 < (uVar8 | uVar2 >> 8 | uVar3 << 8 | uVar4))) &&
           (uVar9 != 0)) && (!bVar6));
  if (*(int *)(param_1 + 0x110) == -1) {
    *(int32_t *)(param_1 + 0x110) = 0;
    goto InitializationSystem_ResourceManager;
  }
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar8 = *(uint *)(lVar1 + 0x14);
  if (*(uint *)(lVar1 + 0xc) == 0) goto InitializationSystem_ResourceManager;
  iVar7 = *(int *)(lVar1 + 8);
  if (iVar7 == 1) {
LAB_1807abbd9:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar10;
    uVar8 = SUB164((ZEXT416(uVar8) << 3) / auVar5,0);
    *(uint *)(lVar1 + 0x18) = uVar8;
    uVar8 = uVar8 / *(uint *)(lVar1 + 0xc);
  }
  else {
    if (iVar7 == 2) {
      uVar10 = 0x10;
      goto LAB_1807abbd9;
    }
    if (iVar7 == 3) {
      uVar10 = 0x18;
      goto LAB_1807abbd9;
    }
    if ((iVar7 == 4) || (iVar7 == 5)) {
      uVar10 = 0x20;
      goto LAB_1807abbd9;
    }
  }
  *(uint *)(lVar1 + 0x18) = uVar8;
  *(int32_t *)(param_1 + 0x18) = 0;
InitializationSystem_ResourceManager:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1d8);
}
// 函数: void SystemCore_ab67d(void)
void SystemCore_ab67d(void)
{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int8_t auVar6 [16];
  int iVar7;
  uint uVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar9;
  uint64_t unaff_RDI;
  int unaff_R13D;
  char unaff_R15B;
  float fVar10;
  uint64_t local_var_40;
  ushort local_buffer_48;
  uint local_buffer_4a;
  ushort local_buffer_4e;
  iVar7 = SystemFunction_00018076b6b0(&local_buffer_00000040,&processed_var_8912_ptr,unaff_R13D + 4);
  if ((iVar7 != 0) ||
     (iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),&local_buffer_00000030,unaff_R13D + 1,
                            unaff_R13D + 4), iVar7 != 0)) goto LAB_1807abc08;
  uVar8 = local_var_40._4_4_ >> 0x18;
  uVar3 = local_var_40._4_4_ & 0xff0000;
  uVar4 = local_var_40._4_4_ & 0xff00;
  uVar5 = local_var_40._4_4_ << 0x18;
  iVar7 = SystemFunction_00018076b6b0(&local_buffer_00000030,&processed_var_8920_ptr,unaff_R13D + 4);
  if (iVar7 == 0) {
    *(int8_t *)(unaff_RBX + 0x178) = 1;
  }
  else {
    iVar7 = SystemFunction_00018076b6b0(&local_buffer_00000030,&ui_system_data_1828_ptr,4);
    if (iVar7 != 0) goto LAB_1807abc08;
  }
  *(uint64_t *)(unaff_RBX + 0x180) = 0;
  *(uint64_t *)(unaff_RBX + 0x188) = 0;
  *(uint64_t *)(unaff_RBX + 400) = 0;
  *(uint64_t *)(unaff_RBX + 0x198) = 0;
  *(uint64_t *)(unaff_RBX + 0x1a0) = 0;
  *(uint64_t *)(unaff_RBX + 0x1a8) = 0;
  *(uint64_t *)(unaff_RBX + 0x1b0) = 0;
  *(uint64_t **)(unaff_RBX + 8) = (uint64_t *)(unaff_RBX + 0x180);
  iVar7 = (**(code **)(**(int64_t **)(unaff_RBX + 0x170) + 0x10))
                    (*(int64_t **)(unaff_RBX + 0x170),unaff_RBX + 0x194);
  if (iVar7 != 0) goto LAB_1807abc08;
  *(int32_t *)(unaff_RBX + 0x110) = 0xffffffff;
  uVar9 = 0xc;
  do {
    iVar7 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RBX + 0x170),uVar9,0);
    if (iVar7 != 0) goto LAB_1807abc08;
    iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),&local_buffer_00000040,1,
                          unaff_RDI & 0xffffffff);
    if (iVar7 != 0) goto LAB_1807abc08;
    local_var_40._4_4_ =
         (local_var_40._4_4_ & 0xff0000 | local_var_40._4_4_ >> 0x10) >> 8 |
         (local_var_40._4_4_ << 0x10 | local_var_40._4_4_ & 0xff00) << 8;
    iVar7 = SystemFunction_00018076b6b0(&local_buffer_00000040,&processed_var_8928_ptr,4);
    if (iVar7 == 0) {
      if (*(char *)(unaff_RBX + 0x178) == (char)unaff_R13D) {
        iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),&local_buffer_00000048,1,0x12);
        if (iVar7 != 0) goto LAB_1807abc08;
      }
      else {
        iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBP + -0x80,1,0x117);
        if (iVar7 != 0) goto LAB_1807abc08;
        iVar7 = SystemFunction_00018076b6b0(unaff_RBP + -0x6e,&processed_var_8936_ptr,4);
        if (iVar7 == 0) {
          *(int8_t *)(unaff_RBX + 0x179) = 0;
        }
        else {
          iVar7 = SystemFunction_00018076b6b0(unaff_RBP + -0x6e,&processed_var_8944_ptr,4);
          if (iVar7 != 0) goto LAB_1807abc08;
          *(int8_t *)(unaff_RBX + 0x179) = 1;
        }
      }
      if (*(char *)(unaff_RBX + 0x178) == '\0') {
        local_buffer_48 = local_buffer_48 >> 8 | local_buffer_48 << 8;
        local_buffer_4a =
             (local_buffer_4a & 0xff0000 | local_buffer_4a >> 0x10) >> 8 |
             (local_buffer_4a << 0x10 | local_buffer_4a & 0xff00) << 8;
        local_buffer_4e = local_buffer_4e >> 8 | local_buffer_4e << 8;
        fVar10 = (float)SystemCore_ab420(&local_buffer_00000050);
        *(int *)(*(int64_t *)(unaff_RBX + 8) + 0x10) = (int)fVar10;
        iVar7 = (int)(short)local_buffer_4e;
        lVar2 = *(int64_t *)(unaff_RBX + 8);
        if (iVar7 == (int)unaff_RDI) {
          *(int32_t *)(lVar2 + 8) = 1;
          *(int *)(*(int64_t *)(unaff_RBX + 8) + 0xc) = (int)(short)local_buffer_48;
        }
        else if (iVar7 == 0x10) {
          *(int32_t *)(lVar2 + 8) = 2;
          *(int *)(*(int64_t *)(unaff_RBX + 8) + 0xc) = (int)(short)local_buffer_48;
        }
        else if (iVar7 == 0x18) {
          *(int32_t *)(lVar2 + 8) = 3;
          *(int *)(*(int64_t *)(unaff_RBX + 8) + 0xc) = (int)(short)local_buffer_48;
        }
        else {
          if (iVar7 != 0x20) goto LAB_1807abc08;
          *(int32_t *)(lVar2 + 8) = 4;
          *(int *)(*(int64_t *)(unaff_RBX + 8) + 0xc) = (int)(short)local_buffer_48;
        }
      }
      else {
        *(ushort *)(unaff_RBP + -0x80) =
             *(ushort *)(unaff_RBP + -0x80) >> 8 | *(ushort *)(unaff_RBP + -0x80) << 8;
        uVar1 = *(uint *)(unaff_RBP + -0x7e);
        *(uint *)(unaff_RBP + -0x7e) =
             (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
        *(ushort *)(unaff_RBP + -0x7a) =
             *(ushort *)(unaff_RBP + -0x7a) >> 8 | *(ushort *)(unaff_RBP + -0x7a) << 8;
        fVar10 = (float)SystemCore_ab420(unaff_RBP + -0x78);
        *(int *)(*(int64_t *)(unaff_RBX + 8) + 0x10) = (int)fVar10;
        iVar7 = (int)*(short *)(unaff_RBP + -0x7a);
        lVar2 = *(int64_t *)(unaff_RBX + 8);
        if (iVar7 == (int)unaff_RDI) {
          *(int32_t *)(lVar2 + 8) = 1;
          *(int *)(*(int64_t *)(unaff_RBX + 8) + 0xc) = (int)*(short *)(unaff_RBP + -0x80);
        }
        else if (iVar7 == 0x10) {
          *(int32_t *)(lVar2 + 8) = 2;
          *(int *)(*(int64_t *)(unaff_RBX + 8) + 0xc) = (int)*(short *)(unaff_RBP + -0x80);
        }
        else if (iVar7 == 0x18) {
          *(int32_t *)(lVar2 + 8) = 3;
          *(int *)(*(int64_t *)(unaff_RBX + 8) + 0xc) = (int)*(short *)(unaff_RBP + -0x80);
        }
        else {
          if (iVar7 != 0x20) goto LAB_1807abc08;
          *(int32_t *)(lVar2 + 8) = 4;
          *(int *)(*(int64_t *)(unaff_RBX + 8) + 0xc) = (int)*(short *)(unaff_RBP + -0x80);
        }
      }
    }
    else {
      iVar7 = SystemFunction_00018076b6b0(&local_buffer_00000040,&processed_var_8952_ptr,4);
      if (iVar7 == 0) {
        iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),&local_buffer_00000038,1,
                              unaff_RDI & 0xffffffff);
        if (iVar7 != 0) goto LAB_1807abc08;
        if (*(int *)(unaff_RBX + 0x110) == -1) {
          *(uint *)(*(int64_t *)(unaff_RBX + 8) + 0x14) = local_var_40._4_4_ - 8;
          iVar7 = Function_49365015(*(uint64_t *)(unaff_RBX + 0x170),unaff_RBX + 0x110);
          if (iVar7 != 0) goto LAB_1807abc08;
        }
        if ((*(uint *)(*(int64_t *)(unaff_RBX + 0x170) + 0x194) & 1) == 0) {
          unaff_R15B = '\x01';
        }
      }
      else {
        iVar7 = SystemFunction_00018076b6b0(&local_buffer_00000040,&processed_var_8960_ptr,4);
        if (iVar7 == 0) {
          iVar7 = SystemPerformanceOptimizer(*(uint64_t *)(unaff_RBX + 0x170),&local_buffer_00000060,1,0x14);
          if (iVar7 != 0) goto LAB_1807abc08;
        }
        else {
          SystemFunction_00018076b6b0(&local_buffer_00000040,&processed_var_8968_ptr);
        }
      }
    }
    uVar9 = local_var_40._4_4_ + 8 + (local_var_40._4_4_ & 1) + uVar9;
  } while ((((-1 < (int)local_var_40._4_4_) &&
            (uVar9 < (uVar8 | uVar3 >> 8 | uVar4 << 8 | uVar5))) && (uVar9 != 0)) &&
          (unaff_R15B == '\0'));
  if (*(int *)(unaff_RBX + 0x110) == -1) {
    *(int *)(unaff_RBX + 0x110) = unaff_R13D;
    goto LAB_1807abc08;
  }
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar8 = *(uint *)(lVar2 + 0x14);
  if (*(uint *)(lVar2 + 0xc) == 0) goto LAB_1807abc08;
  iVar7 = *(int *)(lVar2 + 8);
  if (iVar7 == 1) {
LAB_1807abbd9:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = unaff_RDI;
    uVar8 = SUB164((ZEXT416(uVar8) << 3) / auVar6,0);
    *(uint *)(lVar2 + 0x18) = uVar8;
    uVar8 = uVar8 / *(uint *)(lVar2 + 0xc);
  }
  else {
    if (iVar7 == 2) {
      unaff_RDI = 0x10;
      goto LAB_1807abbd9;
    }
    if (iVar7 == 3) {
      unaff_RDI = 0x18;
      goto LAB_1807abbd9;
    }
    if ((iVar7 == 4) || (iVar7 == 5)) {
      unaff_RDI = 0x20;
      goto LAB_1807abbd9;
    }
  }
  *(uint *)(lVar2 + 0x18) = uVar8;
  *(int *)(unaff_RBX + 0x18) = unaff_R13D;
LAB_1807abc08:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xa0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void InitializationSystem_ResourceManager(void)
void InitializationSystem_ResourceManager(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xa0) ^ (uint64_t)&local_buffer_00000000);
}
uint SystemCore_abc50(int64_t param_1,uint *param_2,uint param_3,uint *param_4)
{
  int8_t uVar1;
  int8_t uVar2;
  int8_t uVar3;
  int iVar4;
  uint uVar5;
  int8_t auVar6 [16];
  uint uVar7;
  uint uVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  uint astack_special_x_8 [2];
  astack_special_x_8[0] = 0;
  uVar11 = 0x20;
  iVar4 = *(int *)(*(int64_t *)(param_1 + 8) + 8);
  if (iVar4 == 1) {
    lVar9 = 8;
LAB_1807abcbd:
    param_3 = (uint)((uint64_t)param_3 * lVar9 >> 3);
  }
  else {
    if (iVar4 == 2) {
      lVar9 = 0x10;
      goto LAB_1807abcbd;
    }
    if (iVar4 == 3) {
      lVar9 = 0x18;
      goto LAB_1807abcbd;
    }
    if ((iVar4 == 4) || (iVar4 == 5)) {
      lVar9 = 0x20;
      goto LAB_1807abcbd;
    }
  }
  uVar8 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 0x170),param_2,1,
                        *(int *)(*(int64_t *)(param_1 + 8) + 0xc) * param_3,astack_special_x_8);
  if ((uVar8 & 0xffffffef) != 0) {
    return uVar8;
  }
  uVar10 = *(uint *)(*(int64_t *)(param_1 + 8) + 0xc);
  if (uVar10 != 0) {
    iVar4 = *(int *)(*(int64_t *)(param_1 + 8) + 8);
    if (iVar4 == 1) {
      uVar11 = 8;
    }
    else if (iVar4 == 2) {
      uVar11 = 0x10;
    }
    else if (iVar4 == 3) {
      uVar11 = 0x18;
    }
    else if ((iVar4 != 4) && (iVar4 != 5)) {
      *param_4 = astack_special_x_8[0];
      goto LAB_1807abd4f;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar11;
    *param_4 = (uint)((SUB168((ZEXT416(astack_special_x_8[0]) << 3) / auVar6,0) & 0xffffffff) /
                     (uint64_t)uVar10);
  }
LAB_1807abd4f:
  iVar4 = *(int *)(*(int64_t *)(param_1 + 8) + 8);
  if (iVar4 == 2) {
    if (*(char *)(param_1 + 0x179) == '\0') {
      for (uVar10 = astack_special_x_8[0] >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(ushort *)param_2 = (ushort)*param_2 >> 8 | (ushort)*param_2 << 8;
        *(ushort *)((int64_t)param_2 + 2) =
             *(ushort *)((int64_t)param_2 + 2) >> 8 | *(ushort *)((int64_t)param_2 + 2) << 8;
        *(ushort *)(param_2 + 1) = (ushort)param_2[1] >> 8 | (ushort)param_2[1] << 8;
        *(ushort *)((int64_t)param_2 + 6) =
             *(ushort *)((int64_t)param_2 + 6) >> 8 | *(ushort *)((int64_t)param_2 + 6) << 8;
        param_2 = param_2 + 2;
      }
      for (uVar10 = astack_special_x_8[0] >> 1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(ushort *)param_2 = (ushort)*param_2 >> 8 | (ushort)*param_2 << 8;
        param_2 = (uint *)((int64_t)param_2 + 2);
      }
    }
  }
  else if (iVar4 == 3) {
    for (uVar10 = astack_special_x_8[0] / 3 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar7 = *param_2;
      uVar1 = *(int8_t *)((int64_t)param_2 + 3);
      uVar2 = *(int8_t *)((int64_t)param_2 + 6);
      uVar3 = *(int8_t *)((int64_t)param_2 + 9);
      *(int8_t *)param_2 = *(int8_t *)((int64_t)param_2 + 2);
      *(int8_t *)((int64_t)param_2 + 3) = *(int8_t *)((int64_t)param_2 + 5);
      *(char *)((int64_t)param_2 + 6) = (char)param_2[2];
      *(int8_t *)((int64_t)param_2 + 9) = *(int8_t *)((int64_t)param_2 + 0xb);
      *(char *)((int64_t)param_2 + 2) = (char)uVar7;
      *(int8_t *)((int64_t)param_2 + 5) = uVar1;
      *(int8_t *)(param_2 + 2) = uVar2;
      *(int8_t *)((int64_t)param_2 + 0xb) = uVar3;
      param_2 = param_2 + 3;
    }
    for (uVar10 = astack_special_x_8[0] / 3 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar7 = *param_2;
      *(int8_t *)param_2 = *(int8_t *)((int64_t)param_2 + 2);
      *(char *)((int64_t)param_2 + 2) = (char)uVar7;
      param_2 = (uint *)((int64_t)param_2 + 3);
    }
  }
  else if ((iVar4 == 4) && (*(char *)(param_1 + 0x179) == '\0')) {
    for (uVar10 = astack_special_x_8[0] >> 4; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar7 = *param_2;
      uVar5 = param_2[1];
      *param_2 = (uVar7 << 0x10 | uVar7 & 0xff00) << 8 | (uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8;
      uVar7 = param_2[2];
      param_2[1] = (uVar5 << 0x10 | uVar5 & 0xff00) << 8 | (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8;
      uVar5 = param_2[3];
      param_2[2] = (uVar7 << 0x10 | uVar7 & 0xff00) << 8 | (uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8;
      param_2[3] = (uVar5 & 0xff0000 | uVar5 >> 0x10) >> 8 | (uVar5 << 0x10 | uVar5 & 0xff00) << 8;
      param_2 = param_2 + 4;
    }
    for (uVar10 = astack_special_x_8[0] >> 2 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar7 = *param_2;
      *param_2 = (uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8 | (uVar7 << 0x10 | uVar7 & 0xff00) << 8;
      param_2 = param_2 + 1;
    }
  }
  return uVar8;
}
uint64_t SystemCore_ac070(int64_t *param_1,int64_t *param_2,uint64_t *param_3)
{
  if (((*param_2 != 0) || (param_2[1] != 0x46000000000000c0)) &&
     ((*param_2 != 0xc || (param_2[1] != 0x46000000000000c0)))) {
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))();
  return 0;
}
bool SystemCore_ac0c0(int64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
{
  int iVar1;
  iVar1 = SystemPerformanceOptimizer(*(uint64_t *)(param_1 + 8),param_2,1,param_3,param_4);
  return iVar1 != 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_ac0f0(int64_t param_1)
{
  int *piVar1;
  int iVar2;
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1,&processed_var_9168_ptr,900,1);
  }
  return 0xbad;
}
uint64_t SystemCore_ac140(int64_t param_1,uint64_t param_2,int param_3,int32_t *param_4)
{
  int iVar1;
  uint64_t uVar2;
  int32_t astack_special_x_18 [4];
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else if (param_3 == 1) {
    uVar2 = 1;
  }
  else {
    if (param_3 != 2) {
      return 0x80070057;
    }
    uVar2 = 2;
  }
  iVar1 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 8),param_2,uVar2);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_4 != (int32_t *)0x0) {
    Function_49365015(*(uint64_t *)(param_1 + 8),astack_special_x_18);
    *param_4 = astack_special_x_18[0];
    param_4[1] = 0;
  }
  return 0;
}
uint64_t SystemCore_ac1d0(int64_t param_1,int64_t param_2,int param_3)
{
  int iVar1;
  int8_t astack_special_x_10 [24];
  if ((param_2 != 0) && (param_3 == 1)) {
    iVar1 = (**(code **)(**(int64_t **)(param_1 + 8) + 0x10))
                      (*(int64_t **)(param_1 + 8),astack_special_x_10);
    if (iVar1 != 0) {
      return 1;
    }
// WARNING: Subroutine does not return
    memset(param_2,0,0x50);
  }
  return 0x80070057;
}
uint64_t SystemCore_ac240(int64_t param_1)
{
  if (*(int64_t **)(param_1 + 0x178) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x178) + 0x20))();
    (**(code **)(**(int64_t **)(param_1 + 0x178) + 0x10))();
    *(uint64_t *)(param_1 + 0x178) = 0;
  }
  if (*(int64_t **)(param_1 + 0x180) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x180) + 0x10))();
    *(uint64_t *)(param_1 + 0x180) = 0;
  }
  return 0;
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address