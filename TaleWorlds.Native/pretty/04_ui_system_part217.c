#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part217.c - 5 个函数
// 函数: void SystemCore_91615(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemCore_91615(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t unaff_RBX;
  int iVar7;
  uint uVar8;
  uint64_t unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t in_R10;
  code *in_R11;
  uint64_t unaff_R12;
  int unaff_R13D;
  int *unaff_R14;
  int iVar9;
  uint local_buffer_60;
  int32_t local_buffer_68;
  int32_t local_buffer_6c;
  int local_var_70;
  int local_var_78;
  int64_t local_var_80;
  uint64_t local_buffer_b0;
  int local_var_130;
  uVar2 = _local_buffer_60 >> 0x20;
  while( true ) {
    iVar7 = local_var_130 - (int)unaff_R12;
    iVar9 = *unaff_R14;
    iVar4 = (*in_R11)(param_1,in_R10,iVar9,param_4,(iVar7 + -1) / iVar9 + 1);
    if ((iVar4 != 0) ||
       (plVar1 = *(int64_t **)
                  (*(int64_t *)(unaff_RBX + 0x38) +
                  (int64_t)(*(int *)(unaff_RBX + 0x1c) * unaff_R13D + (int)unaff_RSI) * 8),
       iVar4 = (**(code **)(*plVar1 + 8))
                         (plVar1,(int)((*(int *)(unaff_RBX + 0x18) * local_buffer_60 +
                                       unaff_R13D) * local_var_78) + local_var_80,
                          local_buffer_6c,local_buffer_68,iVar7), iVar4 != 0)) break;
    iVar4 = unaff_R14[1];
    while( true ) {
      uVar8 = (int)unaff_RSI + 1;
      unaff_RSI = (uint64_t)uVar8;
      unaff_R14 = unaff_R14 + 3;
      local_buffer_60 = local_buffer_60 + iVar4 * iVar9;
      unaff_R12 = (uint64_t)local_buffer_60;
      if (*(int *)(unaff_RBX + 0x1c) <= (int)uVar8) {
        do {
          unaff_R13D = unaff_R13D + 1;
          if (*(int *)(unaff_RBX + 0x18) <= unaff_R13D) goto LAB_1807915cb;
          unaff_RSI = (uint64_t)unaff_RDI & 0xffffffff;
          unaff_R12 = (uint64_t)unaff_RDI & 0xffffffff;
        } while (*(int *)(unaff_RBX + 0x1c) < 1);
        unaff_R14 = (int *)&local_buffer_00000088;
        local_buffer_60 = (uint)unaff_RDI;
      }
      iVar7 = (int)unaff_RSI;
      iVar9 = local_var_70;
      if (iVar7 < local_var_70) {
        iVar9 = iVar7;
      }
      puVar6 = unaff_RDI;
      if ((iVar9 == 0) || (unaff_R14[2] == 0)) {
        puVar5 = (uint64_t *)
                 SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x88,&rendering_buffer_2784_ptr,0x12d);
        if (puVar5 != (uint64_t *)0x0) {
          *puVar5 = &rendering_buffer_2456_ptr;
          puVar6 = puVar5;
        }
      }
      else {
        puVar5 = (uint64_t *)
                 SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0xb0,&rendering_buffer_2784_ptr,0x132);
        if (puVar5 != (uint64_t *)0x0) {
          puVar6 = puVar5 + 0x12;
          *puVar5 = &rendering_buffer_2520_ptr;
          *(int32_t *)(puVar5 + 0x11) = 0;
          puVar5[0x13] = puVar6;
          *puVar6 = puVar6;
          puVar5[0x14] = unaff_RDI;
          puVar6 = puVar5;
        }
      }
      *(uint64_t **)
       (*(int64_t *)(unaff_RBX + 0x38) +
       (int64_t)(*(int *)(unaff_RBX + 0x1c) * unaff_R13D + iVar7) * 8) = puVar6;
      param_1 = *(uint64_t **)
                 (*(int64_t *)(unaff_RBX + 0x38) +
                 (int64_t)(*(int *)(unaff_RBX + 0x1c) * unaff_R13D + iVar7) * 8);
      if (param_1 == (uint64_t *)0x0) goto LAB_1807915cb;
      in_R10 = *(uint64_t *)(unaff_RBX + 8);
      in_R11 = *(code **)*param_1;
      param_4 = uVar2;
      if (*(int *)(unaff_RBX + 0x1c) + -1 <= iVar7) break;
      iVar9 = *unaff_R14;
      iVar4 = unaff_R14[1];
      iVar3 = (*in_R11)(param_1,in_R10,iVar9,uVar2,iVar4);
      if ((iVar3 != 0) ||
         (plVar1 = *(int64_t **)
                    (*(int64_t *)(unaff_RBX + 0x38) +
                    (int64_t)(*(int *)(unaff_RBX + 0x1c) * unaff_R13D + iVar7) * 8),
         iVar7 = (**(code **)(*plVar1 + 8))
                           (plVar1,(int)((*(int *)(unaff_RBX + 0x18) * local_buffer_60 +
                                         unaff_R13D) * local_var_78) + local_var_80,
                            local_buffer_6c,local_buffer_68,iVar4 * iVar9), iVar7 != 0
         )) goto LAB_1807915cb;
    }
  }
LAB_1807915cb:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_916ce(void)
void SystemCore_916ce(void)
{
  uint64_t local_buffer_b0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_b0 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
SystemCore_916e0(int64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,int param_5,
             int param_6,int32_t param_7)
{
  int64_t lVar1;
  int32_t uVar2;
  *(uint64_t *)(param_1 + 8) = param_2;
  *(int32_t *)(param_1 + 0x1c) = param_7;
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_5;
  *(int *)(param_1 + 0x18) = param_6;
  *(int *)(param_1 + 0x20) = param_5 + param_6;
  *(int *)(param_1 + 0x24) = param_3 * 2;
  lVar1 = SystemCore_41d80(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_3 * 4,0x10,&rendering_buffer_2784_ptr,0x87
                        ,0);
  *(int64_t *)(param_1 + 0x40) = lVar1;
  uVar2 = 0;
  if (lVar1 == 0) {
    uVar2 = 0x26;
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_91770(int64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void SystemCore_91770(int64_t *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  float fVar1;
  char cVar2;
  int64_t *plVar3;
  float fVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  float fVar14;
  int64_t lVar15;
  float fVar16;
  uint64_t uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t stack_array_318 [32];
  float fStack_2f8;
  float fStack_2f0;
  int32_t local_var_2e8;
  int32_t local_var_2d8;
  uint64_t local_var_2d0;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  uint64_t local_var_2b8;
  uint64_t local_var_2b0;
  int32_t local_var_2a8;
  uint64_t local_var_2a0;
  uint64_t local_var_298;
  uint64_t local_var_290;
  int32_t local_var_288;
  int64_t alStack_278 [32];
  int64_t alStack_178 [32];
  uint64_t local_var_78;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_318;
  cVar2 = *(char *)((int64_t)param_1 + 0x14);
  iVar5 = 1;
  if (cVar2 == '\0') {
    iVar5 = (int)param_1[3];
  }
  uVar12 = 0;
  local_var_288 = 0xffffffff;
  local_var_290 = 0;
  local_var_2b0 = 0;
  fStack_2f8 = (float)((uint)fStack_2f8 & 0xffffff00);
  local_var_2a0 = 0;
  local_var_298 = 0;
  local_var_2a8 = 0xffffffff;
  local_var_2c0 = 0;
  local_var_2b8 = 0;
  local_var_2d8 = param_4;
  local_var_2d0 = param_2;
  local_var_2c8 = param_3;
  SystemCore_5a100(&local_var_2a0,param_1[1],iVar5,0);
  fStack_2f8 = (float)((uint)fStack_2f8 & 0xffffff00);
  SystemCore_5a100(&local_var_2c0,param_1[1],(int)param_1[3],0);
  uVar17 = uVar12;
  if (iVar5 < 1) {
    iVar10 = (int)param_1[2];
  }
  else {
    do {
      iVar10 = (int)param_1[2];
      lVar6 = Function_14667d91(&local_var_2a0);
      alStack_278[uVar12] = lVar6 + (int64_t)(iVar10 * (int)uVar17) * 4;
      uVar12 = uVar12 + 1;
      uVar17 = (uint64_t)((int)uVar17 + 1);
    } while ((int64_t)uVar12 < (int64_t)iVar5);
  }
  iVar11 = 0;
  if (0 < (int)param_1[3]) {
    plVar13 = alStack_178;
    do {
      iVar10 = (int)param_1[2];
      lVar6 = Function_14667d91(&local_var_2c0);
      iVar8 = iVar10 * iVar11;
      iVar11 = iVar11 + 1;
      *plVar13 = lVar6 + (int64_t)iVar8 * 4;
      plVar13 = plVar13 + 1;
    } while (iVar11 < (int)param_1[3]);
  }
  fStack_2f8 = (float)iVar10;
  SystemCore_5d5e0(local_var_2d0,alStack_278,local_var_2d8,iVar5);
  fVar18 = *(float *)((int64_t)param_1 + 0x24);
  fVar16 = 0.0;
  lVar6 = 0;
  local_var_2d8 = 0;
  lVar15 = 0;
  fVar1 = *(float *)(param_1 + 4);
  fVar20 = 0.0;
  fVar19 = 0.0;
  fVar14 = fVar16;
  if (fVar18 != *(float *)((int64_t)param_1 + 0x2c)) {
    fVar14 = 1.79366e-43;
    lVar15 = 0x80;
    fVar19 = (*(float *)((int64_t)param_1 + 0x2c) - fVar18) * 0.0078125;
  }
  fStack_2f0 = fVar16;
  if (fVar1 != *(float *)(param_1 + 5)) {
    fStack_2f0 = 1.79366e-43;
    local_var_2d8 = 0x80;
    fVar20 = (*(float *)(param_1 + 5) - fVar1) * 0.0078125;
  }
  if ((fVar14 == 0.0) && (fVar18 <= 0.0)) {
    lVar6 = param_1[2];
    lVar15 = param_1[3];
    uVar7 = Function_14667d91(&local_var_2c0);
// WARNING: Subroutine does not return
    memset(uVar7,0,(int64_t)(int)lVar6 * (int64_t)(int)lVar15 * 4);
  }
  fVar14 = fVar16;
  if (lVar15 != 0) {
    fVar14 = (float)lVar15;
    do {
      if (0 < (int)param_1[3]) {
        plVar13 = alStack_178;
        fVar9 = fVar16;
        do {
          fVar4 = fVar9;
          if (cVar2 != '\0') {
            fVar4 = 0.0;
          }
          fVar9 = (float)((int)fVar9 + 1);
          *(float *)(*plVar13 + lVar6 * 4) =
               fVar18 * *(float *)(alStack_278[(int)fVar4] + lVar6 * 4);
          plVar13 = plVar13 + 1;
        } while ((int)fVar9 < (int)param_1[3]);
      }
      lVar6 = lVar6 + 1;
      fVar18 = fVar18 + fVar19;
    } while (lVar6 < lVar15);
  }
  if ((int)fVar14 < (int)param_1[2]) {
    lVar6 = (int64_t)(int)fVar14 * 4;
    do {
      if (0 < (int)param_1[3]) {
        plVar13 = alStack_178;
        fVar19 = fVar16;
        do {
          fVar9 = fVar19;
          if (cVar2 != '\0') {
            fVar9 = 0.0;
          }
          fVar19 = (float)((int)fVar19 + 1);
          *(float *)(lVar6 + *plVar13) = fVar18 * *(float *)(alStack_278[(int)fVar9] + lVar6);
          plVar13 = plVar13 + 1;
        } while ((int)fVar19 < (int)param_1[3]);
      }
      fVar14 = (float)((int)fVar14 + 1);
      lVar6 = lVar6 + 4;
    } while ((int)fVar14 < (int)param_1[2]);
  }
  fStack_2f8 = fVar20;
  iVar5 = (**(code **)(*param_1 + 0x10))(param_1,alStack_178,alStack_278,fVar1);
  if (iVar5 == 0) {
    if (0 < (int)param_1[3]) {
      plVar13 = alStack_178;
      do {
        iVar10 = 0;
        iVar5 = *(int *)((int64_t)param_1 + 0x1c);
        if (0 < iVar5) {
          fVar18 = fVar16;
          if (cVar2 != '\0') {
            fVar18 = 0.0;
          }
          do {
            local_var_2e8 = local_var_2d8;
            plVar3 = *(int64_t **)(param_1[7] + (int64_t)(iVar5 * (int)fVar16 + iVar10) * 8);
            fStack_2f8 = fVar1;
            fStack_2f0 = fVar20;
            iVar5 = (**(code **)(*plVar3 + 0x10))
                              (plVar3,alStack_278[(int)fVar18],*plVar13,(int)param_1[2]);
            if (iVar5 != 0) goto LAB_180791aec;
            iVar5 = *(int *)((int64_t)param_1 + 0x1c);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar5);
        }
        fVar16 = (float)((int)fVar16 + 1);
        plVar13 = plVar13 + 1;
      } while ((int)fVar16 < (int)param_1[3]);
    }
    *(int *)(param_1 + 4) = (int)param_1[5];
    *(int32_t *)((int64_t)param_1 + 0x24) = *(int32_t *)((int64_t)param_1 + 0x2c);
    SystemCore_5f4a0(alStack_178,local_var_2c8,(int)param_1[3],(int)param_1[2]);
  }
LAB_180791aec:
  Function_0a079ffd(&local_var_2c0);
  Function_0a079ffd(&local_var_2a0);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_318);
}
// 函数: void SystemCore_91b40(int64_t param_1)
void SystemCore_91b40(int64_t param_1)
{
// WARNING: Subroutine does not return
  memset(*(uint64_t *)(param_1 + 0x40),0,(int64_t)*(int *)(param_1 + 0x10) << 2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void * SystemCore_91b60(void)
{
  SystemCore_91040();
  ui_system_config = 0x20;
  ui_system_config = 0x180be2b40;
  ui_system_config = 0x40;
  return &system_data_0a70;
}
uint64_t SystemCore_91bb0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  lVar1 = *param_1;
  iVar5 = 0;
  *(uint64_t *)(lVar1 + 0x450) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x458) = 0;
  *(int32_t *)(lVar1 + 0x45c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x460) = 0x3f43ef17;
  *(int32_t *)(lVar1 + 0x464) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x224) = 0x3f800000;
  *(uint64_t *)(lVar1 + 0x468) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x470) = 0;
  *(int32_t *)(lVar1 + 0x474) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x478) = 0x3fec835e;
  *(uint64_t *)(lVar1 + 0x47c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x228) = 0x3f800000;
  lVar2 = *(int64_t *)(lVar1 + 0xe8);
  *(float *)(lVar1 + 0x220) = (float)*(int *)(*(int64_t *)(lVar1 + 0xa8) + 0x6d0) * 0.5 - 10.0;
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar4 = 0;
    do {
      uVar3 = Function_9c6a16e1(lVar1,iVar5,
                                  *(int32_t *)
                                   (*(int64_t *)(*(int64_t *)(lVar2 + 0x68) + lVar4) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(int64_t *)(lVar1 + 0xe8);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar5 < *(int *)(lVar2 + 0x60));
  }
  *(int32_t *)(lVar1 + 0x218) = *(int32_t *)(lVar1 + 0x484);
  *(int32_t *)(lVar1 + 0x21c) = *(int32_t *)(lVar1 + 0x488);
  SystemCore_93880(lVar1);
  return 0;
}
// 函数: void SystemCore_91d40(int64_t *param_1)
void SystemCore_91d40(int64_t *param_1)
{
// WARNING: Subroutine does not return
  memset(*param_1 + 0x22c,0,0x200);
}
uint64_t SystemCore_91db0(int64_t *param_1,int param_2,int32_t *param_3,int64_t param_4)
{
  int64_t lVar1;
  float fVar2;
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x488);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x488);
  }
  else {
    if ((param_2 != 1) || (*param_3 = *(int32_t *)(lVar1 + 0x484), param_4 == 0)) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x484);
  }
// WARNING: Subroutine does not return
  SystemValidationProcessor(param_4,0x20,&rendering_buffer_2048_ptr,(double)fVar2);
}