/* 函数别名定义: MathTrigonometryFunction */
#define MathTrigonometryFunction MathTrigonometryFunction
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_11_part046.c - 3 个函数
// 函数: void SystemCore_ac340(int64_t param_1)
void SystemCore_ac340(int64_t param_1)
{
  uint64_t *puVar1;
  short sVar2;
  int64_t lVar3;
  int8_t auVar4 [16];
  int64_t *plVar5;
  int iVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int8_t stack_array_2d8 [32];
  int64_t *plStack_2b8;
  int16_t *plocal_var_2b0;
  int16_t stack_array_298 [2];
  int16_t stack_array_294 [2];
  uint local_var_290;
  int32_t local_var_28c;
  int32_t stack_array_288 [2];
  int64_t *plStack_280;
  int aiStack_274 [3];
  int64_t *plStack_268;
  int64_t lStack_260;
  int64_t lStack_258;
  int64_t lStack_250;
  int64_t lStack_248;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2d8;
  puVar13 = (uint64_t *)0x0;
  *(int32_t *)(param_1 + 0x28) = 2;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  aiStack_274[1] = 2;
  plStack_268 = (int64_t *)0x0;
  plStack_2b8 = (int64_t *)0x0;
  iVar6 = SystemDataAnalyzer(*(uint64_t *)(param_1 + 0x170),&lStack_250,1,0x10);
  if (((iVar6 == 0) && (lStack_250 == 0x11cf668e75b22630)) && (lStack_248 == 0x6cce6200aa00d9a6)) {
    *(int8_t *)(param_1 + 0x198) = 1;
    *(uint64_t *)(param_1 + 0x1a0) = 0;
    *(int32_t *)(param_1 + 0x19c) = 0;
    if ((system_system_memory != (code *)0x0) ||
       (((system_system_memory != 0 ||
         (system_system_memory = LoadLibraryA(&processed_var_9128_ptr), system_system_memory != 0)) &&
        (system_system_memory = (code *)GetProcAddress(system_system_memory,&processed_var_9144_ptr),
        system_system_memory != (code *)0x0)))) {
      *(uint64_t *)(param_1 + 0x1b0) = 0;
      *(uint64_t *)(param_1 + 0x1b8) = 0;
      *(uint64_t *)(param_1 + 0x1c0) = 0;
      *(uint64_t *)(param_1 + 0x1c8) = 0;
      *(uint64_t *)(param_1 + 0x1d0) = 0;
      *(uint64_t *)(param_1 + 0x1d8) = 0;
      *(uint64_t *)(param_1 + 0x1e0) = 0;
      *(uint64_t **)(param_1 + 8) = (uint64_t *)(param_1 + 0x1b0);
      iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x10))
                        (*(int64_t **)(param_1 + 0x170),param_1 + 0x1c4);
      if ((iVar6 == 0) && (iVar6 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0,0), iVar6 == 0))
      {
        puVar1 = (uint64_t *)(param_1 + 0x178);
        iVar6 = (*system_system_memory)(0,0,puVar1);
        if (-1 < iVar6) {
          plStack_2b8 = (int64_t *)((uint64_t)plStack_2b8 & 0xffffffff00000000);
          puVar7 = (uint64_t *)
                   SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&processed_var_9168_ptr,0xe0);
          puVar9 = puVar13;
          if (puVar7 != (uint64_t *)0x0) {
            puVar7[1] = 0;
            *puVar7 = &processed_var_9000_ptr;
            *(int32_t *)(puVar7 + 2) = 1;
            puVar9 = puVar7;
          }
          *(uint64_t **)(param_1 + 0x180) = puVar9;
          if (puVar9 != (uint64_t *)0x0) {
            puVar9[1] = *(uint64_t *)(param_1 + 0x170);
            iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0xb8))
                              ((int64_t *)*puVar1,*(uint64_t *)(param_1 + 0x180));
            if (iVar6 == -0x7ffbfe10) {
              iVar6 = CoInitializeEx(0,2);
              if (iVar6 < 0) goto SystemCore_ac5e4;
              (**(code **)(*(int64_t *)*puVar1 + 0x10))();
              iVar6 = (*system_system_memory)(0,0,puVar1);
              if ((iVar6 < 0) ||
                 (iVar6 = MathTrigonometryFunction0(*(uint64_t *)(param_1 + 0x170),0,0), iVar6 != 0))
              goto SystemCore_ac5e4;
              iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0xb8))
                                ((int64_t *)*puVar1,*(uint64_t *)(param_1 + 0x180));
            }
            if ((-1 < iVar6) &&
               (iVar6 = (*(code *)**(uint64_t **)*puVar1)
                                  ((uint64_t *)*puVar1,&processed_var_8392_ptr,&plStack_268),
               plVar8 = plStack_268, -1 < iVar6)) {
              plStack_280 = (int64_t *)0x0;
              local_var_290 = 0;
              if ((plStack_268 != (int64_t *)0x0) &&
                 (iVar6 = (**(code **)(*plStack_268 + 0x40))(plStack_268,&local_var_290), -1 < iVar6))
              {
                *(int32_t *)(param_1 + 0x188) = 0;
                if (local_var_290 != 0) {
                  do {
                    iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar13,&plStack_280);
                    if (iVar6 < 0) goto SystemCore_ac5e4;
                    stack_array_298[0] = 0;
                    iVar6 = (**(code **)(*plStack_280 + 0x20))(plStack_280,stack_array_298);
                    if ((iVar6 < 0) ||
                       (iVar6 = (**(code **)(*plStack_280 + 0x18))(plStack_280,&lStack_260),
                       iVar6 < 0)) goto SystemCore_ac5e4;
                    if ((lStack_260 == 0x10000073647561) && (lStack_258 == 0x719b3800aa000080)) {
                      *(int16_t *)(param_1 + 0x188) = stack_array_298[0];
                    }
                    else if ((lStack_260 == 0x10000073646976) && (lStack_258 == 0x719b3800aa000080))
                    {
                      *(int16_t *)(param_1 + 0x18a) = stack_array_298[0];
                    }
                    if (plStack_280 != (int64_t *)0x0) {
                      (**(code **)(*plStack_280 + 0x10))();
                    }
                    uVar12 = (int)puVar13 + 1;
                    puVar13 = (uint64_t *)(uint64_t)uVar12;
                  } while (uVar12 < local_var_290);
                }
                (**(code **)(*plStack_268 + 0x10))();
                iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0x28))((int64_t *)*puVar1,0,0);
                if (((-1 < iVar6) &&
                    (iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0x40))
                                       ((int64_t *)*puVar1,1,param_1 + 0x188,aiStack_274 + 1),
                    -1 < iVar6)) &&
                   (iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0x50))
                                      ((int64_t *)*puVar1,*(int16_t *)(param_1 + 0x188),0),
                   -1 < iVar6)) {
                  (**(code **)(*(int64_t *)*puVar1 + 0x70))((int64_t *)*puVar1,aiStack_274);
                  if (aiStack_274[0] < 1) {
                    iVar6 = (*(code *)**(uint64_t **)*puVar1)
                                      ((uint64_t *)*puVar1,&processed_var_8376_ptr,&plStack_280);
                    if (-1 < iVar6) {
                      plocal_var_2b0 = stack_array_294;
                      stack_array_298[0] = 0;
                      plStack_2b8 = (int64_t *)0x0;
                      iVar6 = (**(code **)(*plStack_280 + 0x28))
                                        (plStack_280,stack_array_298,&processed_var_9296_ptr,stack_array_288);
                      if (-1 < iVar6) {
                        plStack_2b8 = (int64_t *)((uint64_t)plStack_2b8 & 0xffffffff00000000);
                        plVar8 = (int64_t *)
                                 SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                               stack_array_294[0],&processed_var_9168_ptr,0x199);
                        if (plVar8 != (int64_t *)0x0) {
                          plocal_var_2b0 = stack_array_294;
                          plStack_2b8 = plVar8;
                          iVar6 = (**(code **)(*plStack_280 + 0x28))
                                            (plStack_280,stack_array_298,&processed_var_9296_ptr,stack_array_288);
                          plStack_2b8 = (int64_t *)CONCAT71(plStack_2b8._1_7_,1);
                          if (-1 < iVar6) {
                            uVar10 = (uint64_t)
                                     ((int64_t)*(int *)(*(int64_t *)(param_1 + 8) + 0x10) *
                                     *plVar8) / 10000;
                            auVar4._8_8_ = 0;
                            auVar4._0_8_ = uVar10;
                            lVar11 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar4,8);
                            *(int *)(*(int64_t *)(param_1 + 8) + 0x18) =
                                 (int)((uVar10 - lVar11 >> 1) + lVar11 >> 9);
// WARNING: Subroutine does not return
                            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar8,
                                          &processed_var_9168_ptr,0x1a9);
                          }
                          uVar14 = 0x1a2;
LAB_1807ac9fe:
// WARNING: Subroutine does not return
                          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar8,
                                        &processed_var_9168_ptr,uVar14);
                        }
                      }
                    }
                  }
                  else {
                    iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0x90))
                                      ((int64_t *)*puVar1,0,0,&local_var_290);
                    if (-1 < iVar6) {
                      iVar6 = (**(code **)(*(int64_t *)CONCAT44(local_var_28c,local_var_290) + 0x20))
                                        ((int64_t *)CONCAT44(local_var_28c,local_var_290),0,stack_array_288);
                      if (-1 < iVar6) {
                        plStack_2b8 = (int64_t *)((uint64_t)plStack_2b8 & 0xffffffff00000000);
                        plVar8 = (int64_t *)
                                 SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                               stack_array_288[0],&processed_var_9168_ptr,0x152);
                        plVar5 = (int64_t *)CONCAT44(local_var_28c,local_var_290);
                        if (plVar8 == (int64_t *)0x0) {
                          (**(code **)(*plVar5 + 0x10))();
                          goto SystemCore_ac5e4;
                        }
                        iVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,plVar8,stack_array_288);
                        if (-1 < iVar6) {
                          if ((*(int64_t *)((int64_t)plVar8 + 0x2c) == 0x11cec35605589f81) &&
                             (*(int64_t *)((int64_t)plVar8 + 0x34) == 0x5a595500aa0001bf)) {
                            lVar11 = plVar8[10];
                            lVar3 = *(int64_t *)(param_1 + 8);
                            sVar2 = *(short *)(lVar11 + 0xe);
                            if (sVar2 == 8) {
                              *(int32_t *)(lVar3 + 8) = 1;
                            }
                            else if (sVar2 == 0x10) {
                              *(int32_t *)(lVar3 + 8) = 2;
                            }
                            else if (sVar2 == 0x18) {
                              *(int32_t *)(lVar3 + 8) = 3;
                            }
                            else {
                              if (sVar2 != 0x20) {
                                (**(code **)(*(int64_t *)CONCAT44(local_var_28c,local_var_290) + 0x10))()
                                ;
                                uVar14 = 0x16f;
                                plStack_2b8 = (int64_t *)CONCAT71(plStack_2b8._1_7_,1);
                                goto LAB_1807ac9fe;
                              }
                              *(int32_t *)(lVar3 + 8) = 4;
                            }
                            *(uint *)(*(int64_t *)(param_1 + 8) + 0xc) =
                                 (uint)*(ushort *)(lVar11 + 2);
                            *(int32_t *)(*(int64_t *)(param_1 + 8) + 0x10) =
                                 *(int32_t *)(lVar11 + 4);
                          }
                          (**(code **)(*(int64_t *)CONCAT44(local_var_28c,local_var_290) + 0x10))();
                          plStack_2b8 = (int64_t *)CONCAT71(plStack_2b8._1_7_,1);
// WARNING: Subroutine does not return
                          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar8,
                                        &processed_var_9168_ptr,0x178);
                        }
                      }
                      (**(code **)(*(int64_t *)CONCAT44(local_var_28c,local_var_290) + 0x10))();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
SystemCore_ac5e4:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_2d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_ac3e3(void)
void SystemCore_ac3e3(void)
{
  uint64_t *puVar1;
  short sVar2;
  int64_t lVar3;
  int8_t auVar4 [16];
  int64_t *plVar5;
  int iVar6;
  code *pcVar7;
  int64_t *plVar8;
  code *pcVar9;
  int64_t lVar10;
  uint uVar11;
  code *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t uVar12;
  bool in_ZF;
  uint64_t local_var_20;
  int32_t uVar14;
  uint64_t uVar13;
  int16_t local_var_40;
  int16_t local_buffer_44;
  uint local_var_48;
  int32_t local_buffer_4c;
  int32_t local_buffer_50;
  code *local_buffer_58;
  uint64_t local_var_60;
  int64_t *local_var_70;
  int64_t local_var_78;
  uVar14 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  if ((in_ZF) && (*(int64_t *)(unaff_RBP + -0x70) == 0x6cce6200aa00d9a6)) {
    *(int8_t *)(unaff_RDI + 0x198) = 1;
    *(code **)(unaff_RDI + 0x1a0) = unaff_RBX;
    uVar11 = (uint)unaff_RBX;
    *(uint *)(unaff_RDI + 0x19c) = uVar11;
    if ((system_system_memory != unaff_RBX) ||
       (((system_system_memory != 0 ||
         (system_system_memory = LoadLibraryA(&processed_var_9128_ptr), system_system_memory != 0)) &&
        (system_system_memory = (code *)GetProcAddress(system_system_memory,&processed_var_9144_ptr),
        system_system_memory != (code *)0x0)))) {
      *(uint64_t *)(unaff_RDI + 0x1b0) = 0;
      *(uint64_t *)(unaff_RDI + 0x1b8) = 0;
      *(uint64_t *)(unaff_RDI + 0x1c0) = 0;
      *(uint64_t *)(unaff_RDI + 0x1c8) = 0;
      *(uint64_t *)(unaff_RDI + 0x1d0) = 0;
      *(uint64_t *)(unaff_RDI + 0x1d8) = 0;
      *(uint64_t *)(unaff_RDI + 0x1e0) = 0;
      *(uint64_t **)(unaff_RDI + 8) = (uint64_t *)(unaff_RDI + 0x1b0);
      iVar6 = (**(code **)(**(int64_t **)(unaff_RDI + 0x170) + 0x10))
                        (*(int64_t **)(unaff_RDI + 0x170),unaff_RDI + 0x1c4);
      if ((iVar6 == 0) &&
         (iVar6 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0,0), iVar6 == 0)) {
        puVar1 = (uint64_t *)(unaff_RDI + 0x178);
        iVar6 = (*system_system_memory)(0,0,puVar1);
        if (-1 < iVar6) {
          uVar13 = CONCAT44(uVar14,uVar11);
          pcVar7 = (code *)SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x18,&processed_var_9168_ptr
                                         ,0xe0,uVar13);
          pcVar9 = unaff_RBX;
          if (pcVar7 != (code *)0x0) {
            *(code **)(pcVar7 + 8) = unaff_RBX;
            *(void **)pcVar7 = &processed_var_9000_ptr;
            *(int32_t *)(pcVar7 + 0x10) = 1;
            pcVar9 = pcVar7;
          }
          *(code **)(unaff_RDI + 0x180) = pcVar9;
          if (pcVar9 != (code *)0x0) {
            *(int64_t *)(pcVar9 + 8) = *(int64_t *)(unaff_RDI + 0x170);
            iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0xb8))
                              ((int64_t *)*puVar1,*(uint64_t *)(unaff_RDI + 0x180));
            if (iVar6 == -0x7ffbfe10) {
              iVar6 = CoInitializeEx(0,2);
              if (iVar6 < 0) goto LAB_1807ac5c4;
              (**(code **)(*(int64_t *)*puVar1 + 0x10))();
              iVar6 = (*system_system_memory)(0,0,puVar1);
              if ((iVar6 < 0) ||
                 (iVar6 = MathTrigonometryFunction0(*(uint64_t *)(unaff_RDI + 0x170),0,0), iVar6 != 0))
              goto LAB_1807ac5c4;
              iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0xb8))
                                ((int64_t *)*puVar1,*(uint64_t *)(unaff_RDI + 0x180));
            }
            if ((((-1 < iVar6) &&
                 (iVar6 = (*(code *)**(uint64_t **)*puVar1)
                                    ((uint64_t *)*puVar1,&processed_var_8392_ptr,&local_buffer_00000070),
                 plVar8 = local_var_70, -1 < iVar6)) &&
                (local_var_48 = uVar11, local_buffer_58 = unaff_RBX,
                local_var_70 != (int64_t *)0x0)) &&
               (iVar6 = (**(code **)(*local_var_70 + 0x40))(local_var_70,&local_buffer_00000048)
               , -1 < iVar6)) {
              *(uint *)(unaff_RDI + 0x188) = uVar11;
              if (uVar11 < local_var_48) {
                do {
                  iVar6 = (**(code **)(*plVar8 + 0x48))
                                    (plVar8,(uint64_t)unaff_RBX & 0xffffffff,&local_buffer_00000058);
                  if (iVar6 < 0) goto LAB_1807ac5c4;
                  local_var_40 = 0;
                  iVar6 = (**(code **)(*(int64_t *)local_buffer_58 + 0x20))
                                    (local_buffer_58,&local_buffer_00000040);
                  if ((iVar6 < 0) ||
                     (iVar6 = (**(code **)(*(int64_t *)local_buffer_58 + 0x18))
                                        (local_buffer_58,&local_buffer_00000078), iVar6 < 0))
                  goto LAB_1807ac5c4;
                  if ((local_var_78 == 0x10000073647561) &&
                     (*(int64_t *)(unaff_RBP + -0x80) == 0x719b3800aa000080)) {
                    *(int16_t *)(unaff_RDI + 0x188) = local_var_40;
                  }
                  else if ((local_var_78 == 0x10000073646976) &&
                          (*(int64_t *)(unaff_RBP + -0x80) == 0x719b3800aa000080)) {
                    *(int16_t *)(unaff_RDI + 0x18a) = local_var_40;
                  }
                  if (local_buffer_58 != (code *)0x0) {
                    (**(code **)(*(int64_t *)local_buffer_58 + 0x10))();
                  }
                  uVar11 = (int)unaff_RBX + 1;
                  unaff_RBX = (code *)(uint64_t)uVar11;
                } while (uVar11 < local_var_48);
              }
              (**(code **)(*local_var_70 + 0x10))();
              iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0x28))((int64_t *)*puVar1,0,0);
              if (((-1 < iVar6) &&
                  (iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0x40))
                                     ((int64_t *)*puVar1,1,unaff_RDI + 0x188,&local_buffer_00000068),
                  -1 < iVar6)) &&
                 (iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0x50))
                                    ((int64_t *)*puVar1,*(int16_t *)(unaff_RDI + 0x188),0),
                 -1 < iVar6)) {
                (**(code **)(*(int64_t *)*puVar1 + 0x70))
                          ((int64_t *)*puVar1,(int64_t)&local_buffer_00000060 + 4);
                if (local_var_60._4_4_ < 1) {
                  iVar6 = (*(code *)**(uint64_t **)*puVar1)
                                    ((uint64_t *)*puVar1,&processed_var_8376_ptr,&local_buffer_00000058);
                  if (-1 < iVar6) {
                    local_var_40 = 0;
                    uVar13 = 0;
                    iVar6 = (**(code **)(*(int64_t *)local_buffer_58 + 0x28))
                                      (local_buffer_58,&local_buffer_00000040,&processed_var_9296_ptr,
                                       &local_buffer_00000050,0);
                    if ((-1 < iVar6) &&
                       (plVar8 = (int64_t *)
                                 SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                               local_buffer_44,&processed_var_9168_ptr,0x199,
                                               uVar13 & 0xffffffff00000000),
                       plVar8 != (int64_t *)0x0)) {
                      iVar6 = (**(code **)(*(int64_t *)local_buffer_58 + 0x28))
                                        (local_buffer_58,&local_buffer_00000040,&processed_var_9296_ptr,
                                         &local_buffer_00000050,plVar8);
                      if (-1 < iVar6) {
                        uVar13 = (uint64_t)
                                 ((int64_t)*(int *)(*(int64_t *)(unaff_RDI + 8) + 0x10) * *plVar8)
                                 / 10000;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = uVar13;
                        lVar10 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar4,8);
                        *(int *)(*(int64_t *)(unaff_RDI + 8) + 0x18) =
                             (int)((uVar13 - lVar10 >> 1) + lVar10 >> 9);
// WARNING: Subroutine does not return
                        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar8,&processed_var_9168_ptr,
                                      0x1a9,1);
                      }
                      uVar12 = 0x1a2;
LAB_1807ac9fe:
// WARNING: Subroutine does not return
                      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar8,&processed_var_9168_ptr,
                                    uVar12,1);
                    }
                  }
                }
                else {
                  iVar6 = (**(code **)(*(int64_t *)*puVar1 + 0x90))
                                    ((int64_t *)*puVar1,0,0,&local_buffer_00000048);
                  if (-1 < iVar6) {
                    iVar6 = (**(code **)(*(int64_t *)
                                          CONCAT44(local_buffer_4c,local_var_48) +
                                        0x20))((int64_t *)
                                               CONCAT44(local_buffer_4c,
                                                        local_var_48),0,&local_buffer_00000050);
                    if (-1 < iVar6) {
                      plVar8 = (int64_t *)
                               SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                             local_buffer_50,&processed_var_9168_ptr,0x152,
                                             uVar13 & 0xffffffff00000000);
                      plVar5 = (int64_t *)CONCAT44(local_buffer_4c,local_var_48);
                      if (plVar8 == (int64_t *)0x0) {
                        (**(code **)(*plVar5 + 0x10))();
                        goto LAB_1807ac5c4;
                      }
                      iVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,plVar8,&local_buffer_00000050);
                      if (-1 < iVar6) {
                        if ((*(int64_t *)((int64_t)plVar8 + 0x2c) == 0x11cec35605589f81) &&
                           (*(int64_t *)((int64_t)plVar8 + 0x34) == 0x5a595500aa0001bf)) {
                          lVar10 = plVar8[10];
                          lVar3 = *(int64_t *)(unaff_RDI + 8);
                          sVar2 = *(short *)(lVar10 + 0xe);
                          if (sVar2 == 8) {
                            *(int32_t *)(lVar3 + 8) = 1;
                          }
                          else if (sVar2 == 0x10) {
                            *(int32_t *)(lVar3 + 8) = 2;
                          }
                          else if (sVar2 == 0x18) {
                            *(int32_t *)(lVar3 + 8) = 3;
                          }
                          else {
                            if (sVar2 != 0x20) {
                              (**(code **)(*(int64_t *)
                                            CONCAT44(local_buffer_4c,local_var_48)
                                          + 0x10))();
                              uVar12 = 0x16f;
                              goto LAB_1807ac9fe;
                            }
                            *(int32_t *)(lVar3 + 8) = 4;
                          }
                          *(uint *)(*(int64_t *)(unaff_RDI + 8) + 0xc) =
                               (uint)*(ushort *)(lVar10 + 2);
                          *(int32_t *)(*(int64_t *)(unaff_RDI + 8) + 0x10) =
                               *(int32_t *)(lVar10 + 4);
                        }
                        (**(code **)(*(int64_t *)
                                      CONCAT44(local_buffer_4c,local_var_48) + 0x10
                                    ))();
// WARNING: Subroutine does not return
                        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar8,&processed_var_9168_ptr,
                                      0x178,1);
                      }
                    }
                    (**(code **)(*(int64_t *)
                                  CONCAT44(local_buffer_4c,local_var_48) + 0x10))()
                    ;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1807ac5c4:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1a0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_ac5e4(void)
void SystemCore_ac5e4(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1a0) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address