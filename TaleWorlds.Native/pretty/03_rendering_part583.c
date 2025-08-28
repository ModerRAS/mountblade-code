/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager


#include "SystemDataAdvancedOptimizer_definition.h"
#include "SystemOutputManager0_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part583.c - 9 个函数

// 函数: void FUN_18058a940(int64_t param_1)
void FUN_18058a940(int64_t param_1)

{
  void *puVar1;
  int64_t *plVar2;
  void *puVar3;
  int32_t *puVar4;
  int iVar5;
  int iVar6;
  
  plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&ui_system_data_1920_ptr);
  plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*(int32_t *)(param_1 + 0x1284));
  (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    puVar4 = (int32_t *)(param_1 + 0x134);
    do {
      plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_7100_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,iVar6);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&system_data_f674);
      if (*(int64_t *)(puVar4 + -0xb) == 0) {
        puVar3 = &system_data_b57c;
      }
      else {
        puVar1 = *(void **)(*(int64_t *)(puVar4 + -0xb) + 0x18);
        puVar3 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar3 = puVar1;
        }
      }
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,puVar3);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1984_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-9]);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1976_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*puVar4);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&rendering_buffer_2024_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-8]);
      (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 0x12;
    } while (iVar6 < *(int *)(param_1 + 0x100));
  }
  plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&rendering_buffer_2000_ptr);
  plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*(int32_t *)(param_1 + 0x2434));
  (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
  if (0 < *(int *)(param_1 + 0x12b0)) {
    puVar4 = (int32_t *)(param_1 + 0x12e4);
    do {
      plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_7100_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,iVar5);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&system_data_f674);
      if (*(int64_t *)(puVar4 + -0xb) == 0) {
        puVar3 = &system_data_b57c;
      }
      else {
        puVar1 = *(void **)(*(int64_t *)(puVar4 + -0xb) + 0x18);
        puVar3 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar3 = puVar1;
        }
      }
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,puVar3);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1984_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-9]);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1976_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*puVar4);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&rendering_buffer_2024_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-8]);
      (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x12;
    } while (iVar5 < *(int *)(param_1 + 0x12b0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058a952(void)
void FUN_18058a952(void)

{
  void *puVar1;
  int64_t *plVar2;
  void *puVar3;
  int32_t *puVar4;
  int iVar5;
  int iVar6;
  int64_t unaff_RDI;
  
  plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&ui_system_data_1920_ptr);
  plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*(int32_t *)(unaff_RDI + 0x1284));
  (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(int *)(unaff_RDI + 0x100)) {
    puVar4 = (int32_t *)(unaff_RDI + 0x134);
    do {
      plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_7100_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,iVar6);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&system_data_f674);
      if (*(int64_t *)(puVar4 + -0xb) == 0) {
        puVar3 = &system_data_b57c;
      }
      else {
        puVar1 = *(void **)(*(int64_t *)(puVar4 + -0xb) + 0x18);
        puVar3 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar3 = puVar1;
        }
      }
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,puVar3);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1984_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-9]);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1976_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*puVar4);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&rendering_buffer_2024_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-8]);
      (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 0x12;
    } while (iVar6 < *(int *)(unaff_RDI + 0x100));
  }
  plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&rendering_buffer_2000_ptr);
  plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*(int32_t *)(unaff_RDI + 0x2434));
  (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
  if (0 < *(int *)(unaff_RDI + 0x12b0)) {
    puVar4 = (int32_t *)(unaff_RDI + 0x12e4);
    do {
      plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_7100_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,iVar5);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&system_data_f674);
      if (*(int64_t *)(puVar4 + -0xb) == 0) {
        puVar3 = &system_data_b57c;
      }
      else {
        puVar1 = *(void **)(*(int64_t *)(puVar4 + -0xb) + 0x18);
        puVar3 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar3 = puVar1;
        }
      }
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,puVar3);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1984_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-9]);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1976_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*puVar4);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&rendering_buffer_2024_ptr);
      plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-8]);
      (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x12;
    } while (iVar5 < *(int *)(unaff_RDI + 0x12b0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058aaf3(void)
void FUN_18058aaf3(void)

{
  void *puVar1;
  int64_t *plVar2;
  void *puVar3;
  int32_t *puVar4;
  int unaff_EBP;
  int64_t unaff_RDI;
  
  puVar4 = (int32_t *)(unaff_RDI + 0x12e4);
  do {
    plVar2 = (int64_t *)(**(code **)(*render_system_data_config + 0x70))(render_system_data_config,&processed_var_7100_ptr);
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x50))(plVar2,unaff_EBP);
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&system_data_f674);
    if (*(int64_t *)(puVar4 + -0xb) == 0) {
      puVar3 = &system_data_b57c;
    }
    else {
      puVar1 = *(void **)(*(int64_t *)(puVar4 + -0xb) + 0x18);
      puVar3 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar3 = puVar1;
      }
    }
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,puVar3);
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1984_ptr);
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-9]);
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&ui_system_data_1976_ptr);
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,*puVar4);
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x70))(plVar2,&rendering_buffer_2024_ptr);
    plVar2 = (int64_t *)(**(code **)(*plVar2 + 0x28))(plVar2,puVar4[-8]);
    (**(code **)(*plVar2 + 0x70))(plVar2,&system_data_fd38);
    unaff_EBP = unaff_EBP + 1;
    puVar4 = puVar4 + 0x12;
  } while (unaff_EBP < *(int *)(unaff_RDI + 0x12b0));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058ac10(int64_t *param_1,int64_t param_2)
void FUN_18058ac10(int64_t *param_1,int64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = param_1[0x48c];
  if (uVar3 != 0) {
    uVar3 = *(uint64_t *)(uVar3 + 0x1d0);
  }
  if ((((param_1[0x48e] | uVar3) & 0x400000000000) == 0) ||
     ((ushort)(*(short *)(param_2 + 0x40) - 2U) < 3)) {
    *(uint64_t *)((int64_t)param_1 + 0xbc) = 0;
    *(uint64_t *)((int64_t)param_1 + 0xc4) = 0;
    return;
  }
  if (*(int64_t *)param_1[0x1f] == 0) {
                    // WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&ui_system_data_1944_ptr);
  }
  lVar2 = FUN_18040db80(*(int64_t *)param_1[0x1f]);
  fVar6 = 0.0;
  fVar1 = *(float *)(lVar2 + 0x18);
  fVar4 = (float)(**(code **)(*param_1 + 0x90))(param_1,0);
  fVar5 = *(float *)(lVar2 + 0x18);
  if (fVar5 <= fVar4) {
    if (fVar5 <= *(float *)(param_1[0x1f] + 0x30)) goto LAB_18058ad28;
    fVar5 = fVar5 - *(float *)(param_1[0x1f] + 0x30);
  }
  else {
    fVar4 = *(float *)(param_1[0x1f] + 0x30);
    fVar5 = (float)(**(code **)(*param_1 + 0x90))(param_1,0);
    fVar5 = fVar5 - fVar4;
  }
  fVar5 = fVar5 * (1.0 / fVar1);
  if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
    fVar6 = 1.0;
  }
LAB_18058ad28:
  fVar1 = *(float *)(lVar2 + 0x10);
  fVar5 = *(float *)(lVar2 + 0xc);
  *(float *)((int64_t)param_1 + 0xbc) = fVar6 * *(float *)(lVar2 + 8);
  *(float *)(param_1 + 0x18) = fVar6 * fVar5;
  *(float *)((int64_t)param_1 + 0xc4) = fVar6 * fVar1;
  *(int32_t *)(param_1 + 0x19) = 0x7f7fffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058ac62(void)
void FUN_18058ac62(void)

{
  float fVar1;
  float fVar2;
  int64_t *in_RAX;
  int64_t lVar3;
  int64_t *unaff_RBX;
  int32_t extraout_XMM0_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*in_RAX == 0) {
                    // WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&ui_system_data_1944_ptr);
  }
  lVar3 = FUN_18040db80(*in_RAX);
  fVar6 = 0.0;
  fVar1 = *(float *)(lVar3 + 0x18);
  fVar4 = (float)(**(code **)(*unaff_RBX + 0x90))(extraout_XMM0_Da,0);
  fVar5 = *(float *)(lVar3 + 0x18);
  if (fVar5 <= fVar4) {
    if (fVar5 <= *(float *)(unaff_RBX[0x1f] + 0x30)) goto LAB_18058ad28;
    fVar5 = fVar5 - *(float *)(unaff_RBX[0x1f] + 0x30);
  }
  else {
    fVar2 = *(float *)(unaff_RBX[0x1f] + 0x30);
    fVar5 = (float)(**(code **)(*unaff_RBX + 0x90))(fVar4,0);
    fVar5 = fVar5 - fVar2;
  }
  fVar5 = fVar5 * (1.0 / fVar1);
  if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
    fVar6 = 1.0;
  }
LAB_18058ad28:
  fVar1 = *(float *)(lVar3 + 0x10);
  fVar5 = *(float *)(lVar3 + 0xc);
  *(float *)((int64_t)unaff_RBX + 0xbc) = fVar6 * *(float *)(lVar3 + 8);
  *(float *)(unaff_RBX + 0x18) = fVar6 * fVar5;
  *(float *)((int64_t)unaff_RBX + 0xc4) = fVar6 * fVar1;
  *(int32_t *)(unaff_RBX + 0x19) = 0x7f7fffff;
  return;
}





// 函数: void FUN_18058acc8(void)
void FUN_18058acc8(void)

{
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float fVar1;
  float fVar2;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  
  fVar2 = *(float *)(*(int64_t *)(unaff_RBX + 0xf8) + 0x30);
  fVar1 = (float)(**(code **)(in_RAX + 0x90))();
  fVar2 = (fVar1 - fVar2) * unaff_XMM9_Da;
  if ((unaff_XMM7_Da <= fVar2) && (unaff_XMM7_Da = fVar2, 1.0 <= fVar2)) {
    unaff_XMM7_Da = 1.0;
  }
  fVar2 = *(float *)(unaff_RDI + 0x10);
  fVar1 = *(float *)(unaff_RDI + 0xc);
  *(float *)(unaff_RBX + 0xbc) = unaff_XMM7_Da * *(float *)(unaff_RDI + 8);
  *(float *)(unaff_RBX + 0xc0) = unaff_XMM7_Da * fVar1;
  *(float *)(unaff_RBX + 0xc4) = unaff_XMM7_Da * fVar2;
  *(int32_t *)(unaff_RBX + 200) = 0x7f7fffff;
  return;
}





// 函数: void FUN_18058acf9(float param_1)
void FUN_18058acf9(float param_1)

{
  float fVar1;
  float fVar2;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  
  if (1.0 <= param_1) {
    param_1 = 1.0;
  }
  fVar1 = *(float *)(unaff_RDI + 0x10);
  fVar2 = *(float *)(unaff_RDI + 0xc);
  *(float *)(unaff_RBX + 0xbc) = param_1 * *(float *)(unaff_RDI + 8);
  *(float *)(unaff_RBX + 0xc0) = param_1 * fVar2;
  *(float *)(unaff_RBX + 0xc4) = param_1 * fVar1;
  *(int32_t *)(unaff_RBX + 200) = 0x7f7fffff;
  return;
}





// 函数: void FUN_18058ad7e(void)
void FUN_18058ad7e(void)

{
  int64_t unaff_RBX;
  
  *(uint64_t *)(unaff_RBX + 0xbc) = 0;
  *(uint64_t *)(unaff_RBX + 0xc4) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058ada0(int64_t *param_1,int64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_18058ada0(int64_t *param_1,int64_t param_2,uint64_t param_3,int32_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int64_t *plVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  int iVar19;
  int iVar20;
  int64_t lVar21;
  bool bVar22;
  float fVar23;
  int32_t uVar24;
  float fVar25;
  float fVar26;
  int iStackX_10;
  int iStack_140;
  int32_t uStack_13c;
  uint64_t uStack_138;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int16_t uStack_118;
  int8_t uStack_116;
  int16_t uStack_115;
  float fStack_110;
  float fStack_10c;
  int64_t lStack_108;
  int64_t *plStack_100;
  uint64_t uStack_f8;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  
  uStack_f8 = 0xfffffffffffffffe;
  bVar22 = false;
  iVar19 = 0;
  puVar18 = (uint64_t *)(param_1 + 0x48c);
  do {
    lVar10 = (**(code **)(*param_1 + 0x128))(param_1,iVar19);
    if (lVar10 != 0) {
      if (*puVar18 == 0) {
        fVar26 = 0.0;
      }
      else {
        fVar26 = *(float *)((int64_t)puVar18 + 0x24);
        if (fVar26 < 0.0) {
          fVar26 = *(float *)(*puVar18 + 0x1e8);
        }
      }
      cVar8 = (**(code **)(*param_1 + 0x130))(param_1,iVar19,fVar26);
      if (cVar8 != '\0') {
        uStack_130 = 0;
        uStack_118 = 1;
        uStack_115 = 1;
        iStack_140 = iVar19;
        if (*(int *)(lVar10 + 0x1f0) == -1) {
          uVar17 = *puVar18;
          if (uVar17 != 0) {
            uVar17 = *(uint64_t *)(uVar17 + 0x1d0);
          }
          uVar16 = uVar17 & 0xffffffffffffff00;
          if ((char)puVar18[2] == '\0') {
            uVar16 = uVar17;
          }
          uVar16 = uVar16 | puVar18[2];
          if ((uVar16 & 0x4000000000) == 0) {
            if ((uVar16 >> 0xe & 1) != 0) goto LAB_18058b126;
            uStack_13c = 0xffffffff;
            uStack_138 = 0;
            uStack_12c = 0;
            uStack_128 = 0x3f800000;
            uStack_124 = (int32_t)puVar18[5];
            uStack_116 = 0;
          }
          else {
            uStack_13c = (int32_t)puVar18[-2];
            uStack_12c = 0;
            uStack_138 = uVar16;
            uStack_128 = (**(code **)(*param_1 + 0x80))(param_1,iVar19);
            uStack_124 = 0xbe4ccccd;
            uStack_116 = 1;
          }
          uStack_120 = 0xbe4ccccd;
          uStack_11c = 0x3ecccccd;
          (**(code **)(*param_1 + 0x160))(param_1,&iStack_140,param_3);
        }
        else {
          iVar9 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)param_1 + 0xac));
          iVar9 = *(int *)(render_system_config + (int64_t)iVar9 * 4);
          if (iVar9 == -1) {
            lVar13 = 0;
          }
          else {
            lVar13 = *(int64_t *)(render_system_config + (int64_t)iVar9 * 8);
          }
          uStack_13c = *(int32_t *)(lVar10 + 0x1f0);
          uStack_138 = 0x2000;
          if (*(int *)(lVar13 + 0x1ec) == -1) {
            uStack_12c = 0;
          }
          else {
            uStack_12c = *(int32_t *)((int64_t)puVar18 + 0x2c);
          }
          if ((*(uint64_t *)(lVar13 + 0x1d0) & 0x4000000000) == 0) {
            uStack_128 = (**(code **)(*param_1 + 0x80))(param_1,iVar19);
          }
          else {
            uStack_128 = 0x3f800000;
          }
          uStack_124 = 0xbe4ccccd;
          uStack_120 = 0xbe4ccccd;
          uStack_11c = 0x3ecccccd;
          uStack_116 = 1;
          (**(code **)(*param_1 + 0x160))(param_1,&iStack_140,param_3);
          if ((((param_2 != 0) && (*(int *)(lVar10 + 0x1f0) != -1)) &&
              (lVar10 = (int64_t)*(int *)(lVar10 + 0x1f0) * 0x68,
              *(int *)(lVar10 + 0x58 + render_system_config) == 0x25)) &&
             (iVar9 = *(int *)(lVar10 + 0x5c + render_system_config), iVar9 != -1)) {
            if (iVar9 == 7) {
              fVar26 = 1.5707964;
            }
            else {
              fVar26 = -1.5707964;
            }
            lVar10 = *(int64_t *)(param_2 + 0x20);
            fVar26 = fVar26 + *(float *)(lVar10 + 0x34);
            *(float *)(lVar10 + 0x34) = fVar26;
            if (fVar26 <= 3.1415927) {
              if (-3.1415927 <= fVar26) goto LAB_18058b017;
              fVar26 = fVar26 + 6.2831855;
            }
            else {
              fVar26 = fVar26 - 6.2831855;
            }
            *(float *)(lVar10 + 0x34) = fVar26;
LAB_18058b017:
                    // WARNING: Subroutine does not return
            RenderingSystem_Renderer0();
          }
        }
      }
    }
LAB_18058b126:
    iVar19 = iVar19 + 1;
    puVar18 = puVar18 + 9;
  } while (iVar19 < 2);
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2);
  }
  iStackX_10 = 0;
  lStack_108 = 0;
  do {
    lVar10 = lStack_108;
    lVar11 = lStack_108 * 0x11b0;
    lVar12 = (**(code **)(*param_1 + 0x128))(param_1);
    lVar13 = lStack_108;
    if (lVar12 != 0) {
      lVar21 = param_1[lStack_108 * 9 + 0x48c];
      if (lVar21 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(uint64_t *)(lVar21 + 0x1d0);
      }
      uVar16 = param_1[lStack_108 * 9 + 0x48e];
      cVar8 = (char)uVar16;
      uVar14 = uVar17 & 0xffffffffffffff00;
      if (cVar8 == '\0') {
        uVar14 = uVar17;
      }
      if (((uVar14 | uVar16) >> 0x15 & 1) == 0) {
        if (*(int *)(lVar12 + 0x1ec) == -1) {
          if (lVar21 == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(uint64_t *)(lVar21 + 0x1d0);
          }
          uVar14 = uVar17 & 0xffffffffffffff00;
          if (cVar8 == '\0') {
            uVar14 = uVar17;
          }
          if (((uVar14 | uVar16) >> 0x19 & 1) != 0) {
            if (param_2 != 0) {
              lVar10 = *(int64_t *)(param_2 + 0x8d8);
              iVar19 = *(int *)(param_2 + 0x564);
              if (((-1 < iVar19) && (iVar19 < *(int *)(lVar10 + 0x52ed94))) &&
                 ((-1 < *(short *)(lVar10 + 0x52dda0 + (int64_t)iVar19 * 2) &&
                  (plVar15 = *(int64_t **)((int64_t)iVar19 * 0xa60 + 0x3630 + lVar10),
                  plVar15 != (int64_t *)0x0)))) {
                pcVar4 = *(code **)(*param_1 + 0x98);
                uVar24 = (**(code **)(*plVar15 + 0x158))();
                (*pcVar4)(param_1,iStackX_10,uVar24);
                goto LAB_18058b60f;
              }
            }
            lVar10 = *param_1;
            uVar24 = (**(code **)(lVar10 + 0x158))(param_1);
            (**(code **)(lVar10 + 0x98))(param_1,iStackX_10,uVar24);
            goto LAB_18058b60f;
          }
          if (lVar21 == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(uint64_t *)(lVar21 + 0x1d0);
          }
          uVar14 = uVar17 & 0xffffffffffffff00;
          if (cVar8 == '\0') {
            uVar14 = uVar17;
          }
          if ((((uVar14 | uVar16) >> 0x1c & 1) == 0) || (param_2 == 0)) {
LAB_18058b792:
            bVar6 = false;
          }
          else {
            plVar15 = (int64_t *)FUN_18058d890(param_2,&plStack_100);
            bVar22 = true;
            if (*plVar15 == 0) goto LAB_18058b792;
            bVar6 = true;
          }
          if ((bVar22) && (bVar22 = false, plStack_100 != (int64_t *)0x0)) {
            (**(code **)(*plStack_100 + 0x38))();
          }
          if (bVar6) {
            plVar15 = *(int64_t **)(param_2 + 0x5f0);
            plStack_f0 = plVar15;
            if (plVar15 != (int64_t *)0x0) {
              (**(code **)(*plVar15 + 0x28))(plVar15);
            }
            fVar26 = *(float *)(param_2 + 0x558);
            fVar23 = *(float *)(plVar15 + 0x15);
            fVar25 = *(float *)(param_2 + 0x554);
            fVar1 = *(float *)((int64_t)plVar15 + 0xa4);
            fVar2 = *(float *)(param_2 + 0x550);
            fVar3 = *(float *)(plVar15 + 0x14);
            plVar5 = *(int64_t **)(param_2 + 0x5f0);
            plStack_e8 = plVar5;
            if (plVar5 != (int64_t *)0x0) {
              (**(code **)(*plVar5 + 0x28))(plVar5);
            }
            fVar26 = ((fVar25 - fVar1) * *(float *)((int64_t)plVar5 + 0x94) +
                      (fVar2 - fVar3) * *(float *)(plVar5 + 0x12) +
                     (fVar26 - fVar23) * *(float *)(plVar5 + 0x13)) / *(float *)(lVar12 + 0x188);
            if (plVar5 != (int64_t *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5);
            }
            if (plVar15 != (int64_t *)0x0) {
              (**(code **)(*plVar15 + 0x38))(plVar15);
            }
            fVar26 = fVar26 - (float)(int)fVar26;
            if (fVar26 < 0.0) {
              fVar26 = fVar26 + 0.999999;
            }
            (**(code **)(*param_1 + 0x108))(param_1,iStackX_10,fVar26);
          }
        }
        else {
          fVar26 = 0.2;
          if (lVar21 == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(uint64_t *)(lVar21 + 0x1d0);
          }
          uVar14 = uVar17 & 0xffffffffffffff00;
          if (cVar8 == '\0') {
            uVar14 = uVar17;
          }
          if (((uVar14 | uVar16) >> 0x14 & 1) == 0) {
            fVar23 = *(float *)((int64_t)param_1 + lStack_108 * 0x48 + 0x248c);
          }
          else {
            fVar26 = 0.05;
            FUN_18058c0d0(param_1,iStackX_10);
            fVar23 = (float)asinf();
            fVar25 = (fVar23 - -1.3659099) * 0.3813087;
            fVar23 = *(float *)(lVar12 + 0x1d8);
            if (0.0 < fVar23) {
              if (0.5 <= fVar25) {
                fVar25 = (((fVar25 - 0.5) + fVar25) - 0.5) * (1.0 - fVar23) + fVar23;
              }
              else {
                fVar25 = (fVar25 + fVar25) * fVar23;
              }
            }
            if (0.05 <= fVar25) {
              if (0.95 <= fVar25) {
                fVar25 = 0.95;
              }
            }
            else {
              fVar25 = 0.05;
            }
            *(float *)((int64_t)param_1 + lVar13 * 0x48 + 0x248c) = fVar25;
            FUN_18058bcc0(param_1,iStackX_10,&fStack_10c);
            fVar25 = *(float *)((int64_t)param_1 + lVar13 * 0x48 + 0x248c);
            fVar23 = fStack_110;
            if ((fStack_110 <= fVar25) && (fVar23 = fVar25, fStack_10c <= fVar25)) {
              fVar23 = fStack_10c;
            }
            *(float *)((int64_t)param_1 + lVar13 * 0x48 + 0x248c) = fVar23;
          }
          if (fVar23 <= 0.0) goto LAB_18058b60f;
          iVar19 = SystemCacheManager(&system_data_5f30,*(int32_t *)((int64_t)param_1 + 0xac),
                                 *(int32_t *)(lVar12 + 0x1ec));
          iVar19 = *(int *)(render_system_config + (int64_t)iVar19 * 4);
          if (iVar19 == -1) {
            lVar21 = 0;
          }
          else {
            lVar21 = *(int64_t *)(render_system_config + (int64_t)iVar19 * 8);
          }
          iVar20 = -1;
          iVar19 = -1;
          iVar9 = (int)param_1[lVar10 * 0x236 + 0x20] + -1;
          if (-1 < iVar9) {
            plVar15 = param_1 + lVar10 * 0x236 + (int64_t)iVar9 * 9 + 0x21;
            do {
              if ((((*plVar15 != lVar12) || (iVar7 = iVar9, iVar20 != -1)) &&
                  (iVar7 = iVar20, *plVar15 == lVar21)) && (iVar19 == -1)) {
                iVar19 = iVar9;
              }
              iVar20 = iVar7;
              plVar15 = plVar15 + -9;
              iVar9 = iVar9 + -1;
            } while (-1 < iVar9);
            if ((-1 < iVar20) && (-1 < iVar19)) {
              uVar17 = param_1[lVar13 * 9 + 0x48c];
              if (uVar17 != 0) {
                uVar17 = *(uint64_t *)(uVar17 + 0x1d0);
              }
              uVar16 = uVar17 & 0xffffffffffffff00;
              if ((char)param_1[lVar13 * 9 + 0x48e] == '\0') {
                uVar16 = uVar17;
              }
              if (((uVar16 | param_1[lVar13 * 9 + 0x48e]) >> 0x19 & 1) != 0) {
                if (param_2 == 0) {
LAB_18058b4a5:
                  uVar24 = (**(code **)(*param_1 + 0x158))(param_1);
                  *(int32_t *)(param_1 + lVar10 * 0x236 + (int64_t)iVar20 * 9 + 0x22) = uVar24;
                  *(int32_t *)(param_1 + lVar10 * 0x236 + (int64_t)iVar20 * 9 + 0x27) = uVar24;
                  lVar12 = *param_1;
                  plVar15 = param_1;
                }
                else {
                  lVar12 = *(int64_t *)(param_2 + 0x8d8);
                  iVar9 = *(int *)(param_2 + 0x564);
                  if (((iVar9 < 0) || (*(int *)(lVar12 + 0x52ed94) <= iVar9)) ||
                     ((*(short *)(lVar12 + 0x52dda0 + (int64_t)iVar9 * 2) < 0 ||
                      (plVar15 = *(int64_t **)((int64_t)iVar9 * 0xa60 + 0x3630 + lVar12),
                      plVar15 == (int64_t *)0x0)))) goto LAB_18058b4a5;
                  uVar24 = (**(code **)(*plVar15 + 0x158))();
                  *(int32_t *)(param_1 + lVar10 * 0x236 + (int64_t)iVar20 * 9 + 0x22) = uVar24;
                  *(int32_t *)(param_1 + lVar10 * 0x236 + (int64_t)iVar20 * 9 + 0x27) = uVar24;
                  plVar15 = *(int64_t **)
                             ((int64_t)*(int *)(param_2 + 0x564) * 0xa60 + 0x3630 +
                             *(int64_t *)(param_2 + 0x8d8));
                  lVar12 = *plVar15;
                }
                uVar24 = (**(code **)(lVar12 + 0x158))(plVar15);
                *(int32_t *)(param_1 + lVar10 * 0x236 + (int64_t)iVar19 * 9 + 0x27) = uVar24;
                *(int32_t *)(param_1 + lVar10 * 0x236 + (int64_t)iVar19 * 9 + 0x22) = uVar24;
              }
              lVar12 = (int64_t)iVar20;
              fVar23 = fVar26;
              if ((*(float *)((int64_t)param_1 + lVar12 * 0x48 + lVar11 + 0x114) !=
                   *(float *)(param_1 + lVar10 * 0x236 + lVar12 * 9 + 0x23)) &&
                 (fVar23 = *(float *)((int64_t)param_1 + lVar12 * 0x48 + lVar11 + 0x124) -
                           *(float *)((int64_t)param_1 + lVar12 * 0x48 + lVar11 + 0x11c),
                 fVar23 <= fVar26)) {
                fVar23 = fVar26;
              }
              FUN_1804351d0(param_1 + lVar10 * 0x236 + lVar12 * 9 + 0x21,
                            1.0 - *(float *)((int64_t)param_1 + lVar13 * 0x48 + 0x248c),fVar23,1);
              FUN_1804351d0(param_1 + lVar10 * 0x236 + (int64_t)iVar19 * 9 + 0x21,
                            *(int32_t *)((int64_t)param_1 + lVar13 * 0x48 + 0x248c),fVar23);
              goto LAB_18058b60f;
            }
          }
          uVar17 = param_1[lVar13 * 9 + 0x48c];
          if (uVar17 != 0) {
            uVar17 = *(uint64_t *)(uVar17 + 0x1d0);
          }
          uVar16 = uVar17 & 0xffffffffffffff00;
          if ((char)param_1[lVar13 * 9 + 0x48e] == '\0') {
            uVar16 = uVar17;
          }
          if (((uVar16 | param_1[lVar13 * 9 + 0x48e]) >> 0x19 & 1) == 0) goto LAB_18058b60f;
          if (param_2 == 0) {
LAB_18058b67d:
            lVar13 = *param_1;
            plVar15 = param_1;
          }
          else {
            lVar13 = *(int64_t *)(param_2 + 0x8d8);
            iVar19 = *(int *)(param_2 + 0x564);
            if ((((iVar19 < 0) || (*(int *)(lVar13 + 0x52ed94) <= iVar19)) ||
                (*(short *)(lVar13 + 0x52dda0 + (int64_t)iVar19 * 2) < 0)) ||
               (plVar15 = *(int64_t **)((int64_t)iVar19 * 0xa60 + 0x3630 + lVar13),
               plVar15 == (int64_t *)0x0)) goto LAB_18058b67d;
            lVar13 = *plVar15;
          }
          uVar24 = (**(code **)(lVar13 + 0x158))(plVar15);
          *(int32_t *)(param_1 + lVar10 * 0x236 + (int64_t)iVar20 * 9 + 0x22) = uVar24;
          *(int32_t *)(param_1 + lVar10 * 0x236 + (int64_t)iVar20 * 9 + 0x27) = uVar24;
        }
      }
      else {
        (**(code **)(*param_1 + 0x98))(param_1,iStackX_10,param_4);
      }
    }
LAB_18058b60f:
    iStackX_10 = iStackX_10 + 1;
    lStack_108 = lStack_108 + 1;
    if (1 < iStackX_10) {
      return;
    }
  } while( true );
}





