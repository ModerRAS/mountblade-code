/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part039.c - 3 个函数
// 函数: void function_8bf329(int64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void function_8bf329(int64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  int64_t lVar7;
  int64_t in_R10;
  int64_t in_R11;
  uint64_t *unaff_R14;
  int unaff_R15D;
  int32_t unaff_000000bc;
  float fVar8;
  float fVar9;
  float fVar10;
code_r0x0001808bf329:
  param_1 = param_1 + 3;
  puVar6 = unaff_R14;
  lVar5 = param_4;
joined_r0x0001808bf17d:
  do {
    while (lVar7 = lVar5, param_4 = param_4 + -1, param_1 <= param_4) {
      *(int32_t *)(unaff_RBP + -0x4c + param_4 * 4) =
           *(int32_t *)(unaff_RBP + -0x50 + param_4 * 4);
      lVar5 = lVar7;
    }
    *(int *)(unaff_RBP + -0x50 + param_1 * 4) = unaff_ESI;
    param_4 = lVar7 + 1;
    unaff_ESI = unaff_ESI + 1;
    unaff_R14 = (uint64_t *)((int64_t)puVar6 + 0x44);
    if (unaff_R15D <= unaff_ESI) {
      fVar8 = 0.0;
      if (3 < CONCAT44(unaff_000000bc,unaff_R15D)) break;
      goto LAB_1808bf2c9;
    }
    cVar3 = *(char *)((int64_t)puVar6 + 0x84);
    uVar1 = *unaff_RBX;
    uVar2 = *unaff_RBX;
    *(int32_t *)(unaff_RBP + -0x58) = *(int32_t *)(unaff_RBX + 1);
    puVar6 = (uint64_t *)((int64_t)puVar6 + 0x74);
    if (cVar3 == (char)in_R10) {
      puVar6 = unaff_R14;
    }
    fVar9 = (float)uVar2 - (float)*puVar6;
    fVar10 = (float)((uint64_t)uVar1 >> 0x20) - (float)((uint64_t)*puVar6 >> 0x20);
    *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(puVar6 + 1);
    fVar8 = *(float *)(unaff_RBP + -0x58) - *(float *)(unaff_RBP + -0x68);
    fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
    *(float *)(param_3 + param_4 * 4) = fVar8;
    param_1 = in_R10;
    puVar6 = unaff_R14;
    lVar5 = param_4;
    if (3 < param_4) {
      do {
        if (fVar8 < *(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x50 + param_1 * 4) * 4))
        goto joined_r0x0001808bf17d;
        if (fVar8 < *(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x4c + param_1 * 4) * 4)) {
          param_1 = param_1 + 1;
          goto joined_r0x0001808bf17d;
        }
        if (fVar8 < *(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x48 + param_1 * 4) * 4)) {
          param_1 = param_1 + 2;
          goto joined_r0x0001808bf17d;
        }
        if (fVar8 < *(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x44 + param_1 * 4) * 4))
        goto code_r0x0001808bf329;
        param_1 = param_1 + 4;
      } while (param_1 < lVar7 + -2);
    }
    while ((param_1 < param_4 &&
           (*(float *)(param_3 + (int64_t)*(int *)(unaff_RBP + -0x50 + param_1 * 4) * 4) <= fVar8))
          ) {
      param_1 = param_1 + 1;
    }
  } while( true );
  while( true ) {
    uVar4 = *(uint *)(unaff_RBP + -0x50 + in_R10 * 4);
    fVar9 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + unaff_RDI);
    if ((0.0 < fVar9) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
      fVar10 = 1.0 - fVar8;
      if (fVar9 <= 1.0 - fVar8) {
        fVar10 = fVar9;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar10;
      fVar8 = fVar8 + fVar10;
    }
    if (1.0 <= fVar8) goto LAB_1808bf30c;
    uVar4 = *(uint *)(unaff_RBP + -0x4c + in_R10 * 4);
    fVar9 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + unaff_RDI);
    if ((0.0 < fVar9) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
      fVar10 = 1.0 - fVar8;
      if (fVar9 <= 1.0 - fVar8) {
        fVar10 = fVar9;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar10;
      fVar8 = fVar8 + fVar10;
    }
    if (1.0 <= fVar8) goto LAB_1808bf30c;
    uVar4 = *(uint *)(unaff_RBP + -0x48 + in_R10 * 4);
    fVar9 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + unaff_RDI);
    if ((0.0 < fVar9) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
      fVar10 = 1.0 - fVar8;
      if (fVar9 <= 1.0 - fVar8) {
        fVar10 = fVar9;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar10;
      fVar8 = fVar8 + fVar10;
    }
    if (1.0 <= fVar8) goto LAB_1808bf30c;
    uVar4 = *(uint *)(unaff_RBP + -0x44 + in_R10 * 4);
    fVar9 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + unaff_RDI);
    if ((0.0 < fVar9) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
      fVar10 = 1.0 - fVar8;
      if (fVar9 <= 1.0 - fVar8) {
        fVar10 = fVar9;
      }
      *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar10;
      fVar8 = fVar8 + fVar10;
    }
    in_R10 = in_R10 + 4;
    if (CONCAT44(unaff_000000bc,unaff_R15D) + -3 <= in_R10) break;
    if (1.0 <= fVar8) goto LAB_1808bf30c;
  }
LAB_1808bf2c9:
  if (in_R10 < CONCAT44(unaff_000000bc,unaff_R15D)) {
    do {
      if (1.0 <= fVar8) break;
      uVar4 = *(uint *)(unaff_RBP + -0x50 + in_R10 * 4);
      fVar9 = *(float *)((int64_t)(int)uVar4 * 0x44 + 0x3c + unaff_RDI);
      if ((0.0 < fVar9) && ((*(uint *)(unaff_RBX + 6) >> (uVar4 & 0x1f) & 1) != 0)) {
        fVar10 = 1.0 - fVar8;
        if (fVar9 <= 1.0 - fVar8) {
          fVar10 = fVar9;
        }
        *(float *)(in_R11 + (int64_t)(int)uVar4 * 4) = fVar10;
        fVar8 = fVar8 + fVar10;
      }
      in_R10 = in_R10 + 1;
    } while (in_R10 < CONCAT44(unaff_000000bc,unaff_R15D));
  }
LAB_1808bf30c:
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_8bf350(int64_t param_1,int64_t param_2,int64_t *param_3)
{
  int iVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int64_t *plVar9;
  int iVar10;
  bool bVar11;
  int iStackX_20;
  int64_t *plStack_80;
  uint64_t local_var_78;
  int aiStack_70 [2];
  int64_t *plStack_68;
  uint64_t local_var_60;
  int aiStack_58 [8];
  if (param_2 == 0) {
    return 0x1f;
  }
  plStack_68 = (int64_t *)(param_1 + 0x38);
  local_var_60 = 0xffffffffffffffff;
  aiStack_58[0] = -1;
  SystemResource_Manager(plStack_68,&local_var_60,aiStack_58);
  iStackX_20 = aiStack_58[0];
  if (aiStack_58[0] != -1) {
    plVar9 = plStack_68;
    iVar10 = (int)local_var_60;
    do {
      do {
        plVar2 = *(int64_t **)((int64_t)iStackX_20 * 0x20 + 0x18 + plVar9[2]);
        if ((0 < *(int *)((int64_t)plVar2 + 0x24)) &&
           ((((lVar4 = plVar2[10], *(int *)(lVar4 + 0x40) != 0 || (*(int *)(lVar4 + 0x44) != 0)) ||
             (*(int *)(lVar4 + 0x48) != 0)) || (*(int *)(lVar4 + 0x4c) != 0)))) {
          plStack_80 = *(int64_t **)(lVar4 + 0x40);
          local_var_78 = *(uint64_t *)(lVar4 + 0x48);
          for (lVar4 = function_851c50(param_1 + 0x108,&plStack_80,0xffffffff); plVar9 = plStack_68,
              lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x60)) {
            if (lVar4 == param_2) {
              local_var_78 = 0xffffffffffffffff;
              aiStack_70[0] = -1;
              plStack_80 = plVar2;
              NetworkSystem_ConnectionHandler(plVar2,&local_var_78,aiStack_70);
              plVar2 = plStack_80;
              plVar9 = plStack_68;
              if (aiStack_70[0] != -1) {
                iVar7 = aiStack_70[0];
                iVar6 = (int)local_var_78;
                do {
                  do {
                    plStack_80 = *(int64_t **)(plVar2[2] + 8 + (int64_t)iVar7 * 0x10);
                    if (plStack_80[0x6a] == 0) {
                      uVar5 = (int)*(uint *)((int64_t)param_3 + 0xc) >> 0x1f;
                      iVar3 = (*(uint *)((int64_t)param_3 + 0xc) ^ uVar5) - uVar5;
                      iVar1 = (int)param_3[1] + 1;
                      if (iVar3 < iVar1) {
                        iVar8 = (int)((float)iVar3 * 1.5);
                        iVar3 = iVar1;
                        if (iVar1 <= iVar8) {
                          iVar3 = iVar8;
                        }
                        if (iVar3 < 8) {
                          iVar8 = 8;
                        }
                        else if (iVar8 < iVar1) {
                          iVar8 = iVar1;
                        }
                        if (iVar8 < (int)param_3[1]) {
                          return 0x1c;
                        }
                        lVar4 = 0;
                        if (iVar8 != 0) {
                          if ((0x3ffffffe < iVar8 * 8 - 1U) ||
                             (lVar4 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                    iVar8 * 8,&processed_var_8432_ptr,0xf4,0,0,1), lVar4 == 0
                             )) {
                            return 0x26;
                          }
                          if ((int)param_3[1] != 0) {
// WARNING: Subroutine does not return
                            memcpy(lVar4,*param_3,(int64_t)(int)param_3[1] << 3);
                          }
                        }
                        if ((0 < *(int *)((int64_t)param_3 + 0xc)) && (*param_3 != 0)) {
// WARNING: Subroutine does not return
                          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_3,
                                        &processed_var_8432_ptr,0x100,1);
                        }
                        *param_3 = lVar4;
                        *(int *)((int64_t)param_3 + 0xc) = iVar8;
                      }
                      *(int64_t **)(*param_3 + (int64_t)(int)param_3[1] * 8) = plStack_80;
                      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
                    }
                  } while ((iVar7 != -1) &&
                          (iVar7 = *(int *)(plVar2[2] + 4 + (int64_t)iVar7 * 0x10), iVar7 != -1));
                  iVar7 = iVar6 + 1;
                  bVar11 = iVar6 != -1;
                  iVar6 = 0;
                  if (bVar11) {
                    iVar6 = iVar7;
                  }
                  if (iVar6 != (int)plVar2[1]) {
                    lVar4 = (int64_t)iVar6;
                    do {
                      if (*(int *)(*plVar2 + lVar4 * 4) != -1) {
                        iVar7 = *(int *)(*plVar2 + (int64_t)iVar6 * 4);
                        goto LAB_1808bf64c;
                      }
                      iVar6 = iVar6 + 1;
                      lVar4 = lVar4 + 1;
                    } while (lVar4 != (int)plVar2[1]);
                  }
                  iVar7 = -1;
                  iVar6 = iVar7;
LAB_1808bf64c:
                  plVar9 = plStack_68;
                } while (iVar7 != -1);
              }
              break;
            }
          }
        }
      } while ((iStackX_20 != -1) &&
              (iStackX_20 = *(int *)((int64_t)iStackX_20 * 0x20 + 0x10 + plVar9[2]),
              iStackX_20 != -1));
      iVar7 = iVar10 + 1;
      bVar11 = iVar10 != -1;
      iVar10 = 0;
      if (bVar11) {
        iVar10 = iVar7;
      }
      if (iVar10 != (int)plVar9[1]) {
        lVar4 = (int64_t)iVar10;
        do {
          if (*(int *)(*plVar9 + lVar4 * 4) != -1) {
            iStackX_20 = *(int *)(*plVar9 + (int64_t)iVar10 * 4);
            goto LAB_1808bf6ca;
          }
          iVar10 = iVar10 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 != (int)plVar9[1]);
      }
      iStackX_20 = -1;
      iVar10 = iStackX_20;
LAB_1808bf6ca:
    } while (iStackX_20 != -1);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8bf382(int64_t param_1)
{
  int iVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int64_t unaff_RSI;
  int iVar8;
  int64_t unaff_RDI;
  int64_t *plVar9;
  int iVar10;
  int64_t *unaff_R14;
  bool bVar11;
  int64_t *local_var_48;
  int iStack0000000000000050;
  int local_buffer_58;
  int64_t *plStack0000000000000060;
  int iStack0000000000000068;
  int iStack0000000000000070;
  int64_t local_buffer_d0;
  int64_t local_buffer_d8;
  int iStack00000000000000e8;
  plStack0000000000000060 = (int64_t *)(param_1 + 0x38);
  _iStack0000000000000068 = 0xffffffffffffffff;
  iStack0000000000000070 = -1;
  SystemResource_Manager(plStack0000000000000060,&local_buffer_00000068,&local_buffer_00000070);
  iStack00000000000000e8 = iStack0000000000000070;
  if (iStack0000000000000070 != -1) {
    plVar9 = plStack0000000000000060;
    iVar10 = iStack0000000000000068;
    do {
      do {
        plVar2 = *(int64_t **)((int64_t)iStack00000000000000e8 * 0x20 + 0x18 + plVar9[2]);
        if ((0 < *(int *)((int64_t)plVar2 + 0x24)) &&
           ((((lVar4 = plVar2[10], *(int *)(lVar4 + 0x40) != 0 || (*(int *)(lVar4 + 0x44) != 0)) ||
             (*(int *)(lVar4 + 0x48) != 0)) || (*(int *)(lVar4 + 0x4c) != 0)))) {
          local_var_48 = *(int64_t **)(lVar4 + 0x40);
          _iStack0000000000000050 = *(uint64_t *)(lVar4 + 0x48);
          for (lVar4 = function_851c50(unaff_RSI + 0x108,&local_buffer_00000048,0xffffffff);
              plVar9 = plStack0000000000000060, lVar4 != 0; lVar4 = *(int64_t *)(lVar4 + 0x60)) {
            if (lVar4 == unaff_RDI) {
              _iStack0000000000000050 = 0xffffffffffffffff;
              local_buffer_58 = -1;
              local_var_48 = plVar2;
              NetworkSystem_ConnectionHandler(plVar2,&local_buffer_00000050,&local_buffer_00000058);
              plVar2 = local_var_48;
              unaff_RSI = local_buffer_d0;
              plVar9 = plStack0000000000000060;
              if (local_buffer_58 != -1) {
                iVar7 = local_buffer_58;
                iVar6 = iStack0000000000000050;
                do {
                  do {
                    local_var_48 = *(int64_t **)(plVar2[2] + 8 + (int64_t)iVar7 * 0x10);
                    if (*(int64_t *)((int64_t)local_var_48 + 0x350) == 0) {
                      uVar5 = (int)*(uint *)((int64_t)unaff_R14 + 0xc) >> 0x1f;
                      iVar3 = (*(uint *)((int64_t)unaff_R14 + 0xc) ^ uVar5) - uVar5;
                      iVar1 = (int)unaff_R14[1] + 1;
                      if (iVar3 < iVar1) {
                        iVar8 = (int)((float)iVar3 * 1.5);
                        iVar3 = iVar1;
                        if (iVar1 <= iVar8) {
                          iVar3 = iVar8;
                        }
                        if (iVar3 < 8) {
                          iVar8 = 8;
                        }
                        else if (iVar8 < iVar1) {
                          iVar8 = iVar1;
                        }
                        if (iVar8 < (int)unaff_R14[1]) {
                          return 0x1c;
                        }
                        lVar4 = 0;
                        if (iVar8 != 0) {
                          if ((0x3ffffffe < iVar8 * 8 - 1U) ||
                             (lVar4 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                                                    iVar8 * 8,&processed_var_8432_ptr,0xf4,0), lVar4 == 0)) {
                            return 0x26;
                          }
                          if ((int)unaff_R14[1] != 0) {
// WARNING: Subroutine does not return
                            memcpy(lVar4,*unaff_R14,(int64_t)(int)unaff_R14[1] << 3);
                          }
                        }
                        if ((0 < *(int *)((int64_t)unaff_R14 + 0xc)) && (*unaff_R14 != 0)) {
// WARNING: Subroutine does not return
                          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R14,
                                        &processed_var_8432_ptr,0x100,1);
                        }
                        *unaff_R14 = lVar4;
                        *(int *)((int64_t)unaff_R14 + 0xc) = iVar8;
                      }
                      *(int64_t **)(*unaff_R14 + (int64_t)(int)unaff_R14[1] * 8) =
                           local_var_48;
                      *(int *)(unaff_R14 + 1) = (int)unaff_R14[1] + 1;
                    }
                  } while ((iVar7 != -1) &&
                          (iVar7 = *(int *)(plVar2[2] + 4 + (int64_t)iVar7 * 0x10), iVar7 != -1));
                  iVar7 = iVar6 + 1;
                  bVar11 = iVar6 != -1;
                  iVar6 = 0;
                  if (bVar11) {
                    iVar6 = iVar7;
                  }
                  if (iVar6 != (int)plVar2[1]) {
                    lVar4 = (int64_t)iVar6;
                    do {
                      if (*(int *)(*plVar2 + lVar4 * 4) != -1) {
                        iVar7 = *(int *)(*plVar2 + (int64_t)iVar6 * 4);
                        goto LAB_1808bf64c;
                      }
                      iVar6 = iVar6 + 1;
                      lVar4 = lVar4 + 1;
                    } while (lVar4 != (int)plVar2[1]);
                  }
                  iVar7 = -1;
                  iVar6 = iVar7;
LAB_1808bf64c:
                  unaff_RDI = local_buffer_d8;
                  plVar9 = plStack0000000000000060;
                } while (iVar7 != -1);
              }
              break;
            }
          }
        }
      } while ((iStack00000000000000e8 != -1) &&
              (iStack00000000000000e8 =
                    *(int *)((int64_t)iStack00000000000000e8 * 0x20 + 0x10 + plVar9[2]),
              iStack00000000000000e8 != -1));
      iVar7 = iVar10 + 1;
      bVar11 = iVar10 != -1;
      iVar10 = 0;
      if (bVar11) {
        iVar10 = iVar7;
      }
      if (iVar10 != (int)plVar9[1]) {
        lVar4 = (int64_t)iVar10;
        do {
          if (*(int *)(*plVar9 + lVar4 * 4) != -1) {
            iStack00000000000000e8 = *(int *)(*plVar9 + (int64_t)iVar10 * 4);
            goto LAB_1808bf6ca;
          }
          iVar10 = iVar10 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 != (int)plVar9[1]);
      }
      iStack00000000000000e8 = -1;
      iVar10 = iStack00000000000000e8;
LAB_1808bf6ca:
    } while (iStack00000000000000e8 != -1);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_8bf718(int64_t param_1)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_EBX;
  int iVar10;
  int64_t *unaff_R12;
  int unaff_R13D;
  int64_t *unaff_R14;
  bool bVar11;
  float unaff_XMM6_Da;
  int64_t local_var_40;
  int64_t *plStack0000000000000048;
  int iStack0000000000000050;
  int local_buffer_58;
  int64_t *local_buffer_60;
  int64_t local_buffer_d0;
  int64_t local_buffer_d8;
  int local_buffer_e8;
code_r0x0001808bf718:
  iVar7 = *(int *)(param_1 + (int64_t)unaff_EBX * 4);
  do {
    lVar3 = local_buffer_d8;
    iVar9 = unaff_EBX;
    lVar5 = local_buffer_d0;
    if (iVar7 == -1) {
      do {
        do {
          if ((local_buffer_e8 == -1) ||
             (local_buffer_e8 = *(int *)(local_var_40 + 0x10 + local_buffer_60[2]),
             local_buffer_e8 == -1)) {
            iVar7 = unaff_R13D + 1;
            bVar11 = unaff_R13D != -1;
            unaff_R13D = 0;
            if (bVar11) {
              unaff_R13D = iVar7;
            }
            if (unaff_R13D != (int)local_buffer_60[1]) {
              lVar6 = (int64_t)unaff_R13D;
              do {
                if (*(int *)(*local_buffer_60 + lVar6 * 4) != -1) {
                  local_buffer_e8 = *(int *)(*local_buffer_60 + (int64_t)unaff_R13D * 4);
                  goto LAB_1808bf6ca;
                }
                unaff_R13D = unaff_R13D + 1;
                lVar6 = lVar6 + 1;
              } while (lVar6 != (int)local_buffer_60[1]);
            }
            local_buffer_e8 = -1;
            unaff_R13D = -1;
LAB_1808bf6ca:
            if (local_buffer_e8 == -1) {
              return 0;
            }
          }
          local_var_40 = (int64_t)local_buffer_e8 * 0x20;
          plVar2 = *(int64_t **)(local_var_40 + 0x18 + local_buffer_60[2]);
        } while ((*(int *)((int64_t)plVar2 + 0x24) < 1) ||
                ((((lVar6 = plVar2[10], *(int *)(lVar6 + 0x40) == 0 && (*(int *)(lVar6 + 0x44) == 0)
                   ) && (*(int *)(lVar6 + 0x48) == 0)) && (*(int *)(lVar6 + 0x4c) == 0))));
        plStack0000000000000048 = *(int64_t **)(lVar6 + 0x40);
        _iStack0000000000000050 = *(uint64_t *)(lVar6 + 0x48);
        for (lVar6 = function_851c50(lVar5 + 0x108,&local_buffer_00000048,0xffffffff); lVar6 != 0;
            lVar6 = *(int64_t *)(lVar6 + 0x60)) {
          if (lVar6 == lVar3) {
            _iStack0000000000000050 = 0xffffffffffffffff;
            local_buffer_58 = -1;
            plStack0000000000000048 = plVar2;
            NetworkSystem_ConnectionHandler(plVar2,&local_buffer_00000050,&local_buffer_00000058);
            lVar5 = local_buffer_d0;
            if (local_buffer_58 != -1) {
              unaff_R12 = plStack0000000000000048;
              iVar7 = local_buffer_58;
              iVar9 = iStack0000000000000050;
              goto LAB_1808bf4d0;
            }
            break;
          }
        }
      } while( true );
    }
LAB_1808bf4d0:
    do {
      plStack0000000000000048 = *(int64_t **)(unaff_R12[2] + 8 + (int64_t)iVar7 * 0x10);
      if (*(int64_t *)((int64_t)plStack0000000000000048 + 0x350) == 0) {
        uVar8 = (int)*(uint *)((int64_t)unaff_R14 + 0xc) >> 0x1f;
        iVar4 = (*(uint *)((int64_t)unaff_R14 + 0xc) ^ uVar8) - uVar8;
        iVar1 = (int)unaff_R14[1] + 1;
        if (iVar4 < iVar1) {
          iVar10 = (int)((float)iVar4 * unaff_XMM6_Da);
          iVar4 = iVar1;
          if (iVar1 <= iVar10) {
            iVar4 = iVar10;
          }
          if (iVar4 < 8) {
            iVar10 = 8;
          }
          else if (iVar10 < iVar1) {
            iVar10 = iVar1;
          }
          if (iVar10 < (int)unaff_R14[1]) {
            return 0x1c;
          }
          lVar5 = 0;
          if (iVar10 != 0) {
            if ((0x3ffffffe < iVar10 * 8 - 1U) ||
               (lVar5 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),iVar10 * 8,
                                      &processed_var_8432_ptr,0xf4,0), lVar5 == 0)) {
              return 0x26;
            }
            if ((int)unaff_R14[1] != 0) {
// WARNING: Subroutine does not return
              memcpy(lVar5,*unaff_R14,(int64_t)(int)unaff_R14[1] << 3);
            }
          }
          if ((0 < *(int *)((int64_t)unaff_R14 + 0xc)) && (*unaff_R14 != 0)) {
// WARNING: Subroutine does not return
            SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R14,&processed_var_8432_ptr,0x100,1)
            ;
          }
          *unaff_R14 = lVar5;
          *(int *)((int64_t)unaff_R14 + 0xc) = iVar10;
        }
        *(int64_t **)(*unaff_R14 + (int64_t)(int)unaff_R14[1] * 8) = plStack0000000000000048;
        *(int *)(unaff_R14 + 1) = (int)unaff_R14[1] + 1;
      }
    } while ((iVar7 != -1) &&
            (iVar7 = *(int *)(unaff_R12[2] + 4 + (int64_t)iVar7 * 0x10), iVar7 != -1));
    unaff_EBX = 0;
    if (iVar9 != -1) {
      unaff_EBX = iVar9 + 1;
    }
    if (unaff_EBX != (int)unaff_R12[1]) {
      param_1 = *unaff_R12;
      lVar5 = (int64_t)unaff_EBX;
      do {
        if (*(int *)(param_1 + lVar5 * 4) != -1) goto code_r0x0001808bf718;
        unaff_EBX = unaff_EBX + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != (int)unaff_R12[1]);
    }
    unaff_EBX = -1;
    iVar7 = -1;
  } while( true );
}
uint64_t function_8bf740(int64_t param_1,uint64_t param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  lVar2 = *(int64_t *)(param_1 + 0x60);
  bVar3 = lVar2 == 0;
  if (bVar3) {
    lVar2 = 0;
  }
  else {
    SystemMemoryAllocator(lVar2);
  }
  lVar1 = SystemFunction_000180851be0(param_1 + 0x68,param_2);
  if (lVar1 == 0) {
    lVar1 = SystemFunction_000180851be0(param_1 + 0x38,param_2);
  }
  if (!bVar3) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar2);
  }
  *param_3 = lVar1;
  return 0;
}
uint64_t function_8bf7d0(int64_t param_1,int64_t *param_2,int64_t *param_3)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int iVar3;
  int64_t lStackX_8;
  uint local_var_18;
  uint local_var_14;
  uint local_var_10;
  uint local_var_c;
  (**(code **)(*param_2 + 0x38))(param_2,&local_var_18);
  if ((*(int *)(param_1 + 0x264) != 0) && (*(int *)(param_1 + 0x248) != 0)) {
    iVar3 = *(int *)(*(int64_t *)(param_1 + 0x240) +
                    (int64_t)
                    (int)((local_var_14 ^ local_var_c ^ local_var_18 ^ local_var_10) &
                         *(int *)(param_1 + 0x248) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (int64_t *)((int64_t)iVar3 * 0x20 + *(int64_t *)(param_1 + 0x250));
        if ((*plVar1 == CONCAT44(local_var_14,local_var_18)) &&
           (plVar1[1] == CONCAT44(local_var_c,local_var_10))) {
          lStackX_8 = plVar1[3];
          goto LAB_1808bf86f;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  lStackX_8 = 0;
LAB_1808bf86f:
  if (lStackX_8 == 0) {
    uVar2 = function_8ca940(param_2,param_1,&lStackX_8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_var_18);
    uVar2 = function_852bb0(param_1 + 0x240,&local_var_18,&lStackX_8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  *param_3 = lStackX_8;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8bf8e0(int64_t param_1,uint64_t param_2,int64_t *param_3)
void function_8bf8e0(int64_t param_1,uint64_t param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t stack_array_88 [32];
  int32_t local_var_68;
  int8_t local_var_60;
  int8_t local_var_58;
  int8_t stack_array_48 [40];
  uint64_t local_var_20;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  *param_3 = 0;
  lVar1 = (**(code **)(**(int64_t **)(param_1 + 0x4b8) + 0x120))
                    (*(int64_t **)(param_1 + 0x4b8),param_2,1);
  if (lVar1 == 0) {
// WARNING: Subroutine does not return
    SystemController(param_2,stack_array_48);
  }
  lVar2 = *(int64_t *)(lVar1 + 0x20);
  if (lVar2 == 0) {
    if (*(int *)(lVar1 + 0x28) == 3) goto LAB_1808bf9d6;
    local_var_58 = 1;
    local_var_60 = 0;
    local_var_68 = 0;
    if (*(int *)(lVar1 + 0x28) == 2) {
      lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x40,&rendering_buffer_2688_ptr,0x352);
      if (lVar2 == 0) goto LAB_1808bf9d6;
      lVar2 = function_8ec4e0(lVar2,lVar1,param_1);
    }
    else {
      lVar2 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x58,&rendering_buffer_2688_ptr,0x356);
      if (lVar2 == 0) goto LAB_1808bf9d6;
      lVar2 = function_8ec450(lVar2,lVar1,param_1);
    }
  }
  *param_3 = lVar2;
LAB_1808bf9d6:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_88);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_8bfa10(int64_t param_1,uint64_t *param_2)
void function_8bfa10(int64_t param_1,uint64_t *param_2)
{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int8_t stack_array_88 [32];
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_88;
  plVar1 = (int64_t *)(param_1 + 0x18);
  plVar9 = (int64_t *)(*(int64_t *)(param_1 + 0x18) + -8);
  if (*(int64_t *)(param_1 + 0x18) == 0) {
    plVar9 = (int64_t *)0x0;
  }
  plVar8 = (int64_t *)0x0;
  if (plVar9 != (int64_t *)0x0) {
    plVar8 = plVar9 + 1;
  }
joined_r0x0001808bfa6a:
  if (plVar8 == plVar1) goto LAB_1808bfba5;
  plVar9 = plVar8 + -1;
  if (plVar8 == (int64_t *)0x0) {
    plVar9 = (int64_t *)0x0;
  }
  lVar7 = plVar9[3];
  if (lVar7 != 0) {
    plVar5 = param_2 + 0x97;
    if (param_2 == (uint64_t *)0xffffffffffffff08) {
      plVar5 = (int64_t *)0x0;
    }
    if ((plVar5 != (int64_t *)0x0) &&
       (cVar2 = SystemFunction_000180875460(plVar5,lVar7 + 0x10), cVar2 != '\0')) {
      lVar4 = (**(code **)(*(int64_t *)*param_2 + 0x278))((int64_t *)*param_2,lVar7 + 0x10,1);
      if (lVar4 == 0) {
// WARNING: Subroutine does not return
        SystemController(lVar7 + 0x10,stack_array_68);
      }
      if (((*(byte *)(lVar4 + 0x34) & 1) != 0) ||
         (cVar2 = SystemFunction_0001808d63f0(plVar9), cVar2 != '\0')) goto LAB_1808bfb32;
      if (plVar8 == plVar1) goto LAB_1808bfba5;
      lVar7 = *plVar8 + -8;
      if (*plVar8 == 0) {
        lVar7 = 0;
      }
      if (lVar7 == 0) {
        plVar8 = (int64_t *)0x0;
      }
      else {
        plVar8 = (int64_t *)(lVar7 + 8);
      }
      iVar3 = SystemFunction_0001808b8390(param_1 + 0x290,plVar9);
      if (iVar3 != 0) {
LAB_1808bfba5:
// WARNING: Subroutine does not return
        SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_88);
      }
      goto joined_r0x0001808bfa6a;
    }
LAB_1808bfb32:
    if (lVar7 != 0) {
      puVar6 = param_2 + 0x15;
      if (param_2 == (uint64_t *)0xfffffffffffffff8) {
        puVar6 = (uint64_t *)0x0;
      }
      if ((puVar6 != (uint64_t *)0x0) &&
         (cVar2 = SystemFunction_000180875460(puVar6,lVar7 + 0x10), cVar2 != '\0')) {
        iVar3 = function_8d6410(plVar9,param_2,param_1 + 0x290,param_1 + 0x338);
        if (iVar3 == 0) goto LAB_1808bfb79;
        goto LAB_1808bfba5;
      }
    }
  }
LAB_1808bfb79:
  if (plVar8 == plVar1) goto LAB_1808bfba5;
  plVar9 = (int64_t *)(*plVar8 + -8);
  if (*plVar8 == 0) {
    plVar9 = (int64_t *)0x0;
  }
  plVar8 = (int64_t *)0x0;
  if (plVar9 != (int64_t *)0x0) {
    plVar8 = plVar9 + 1;
  }
  goto joined_r0x0001808bfa6a;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address