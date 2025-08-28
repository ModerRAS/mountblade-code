/* 函数别名定义: RenderingGeometryProcessor */
#define RenderingGeometryProcessor RenderingGeometryProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part300_sub002_sub002.c - 1 个函数
// 函数: void function_428d50(uint64_t param_1,int8_t *param_2)
void function_428d50(uint64_t param_1,int8_t *param_2)
{
  ushort uVar1;
  uVar1 = SystemCore_MemoryManager();
  *param_2 = (char)(((uVar1 >> 10 & 0x1f) * 0xff) / 0x1f);
  param_2[1] = (char)(((uVar1 >> 5 & 0x1f) * 0xff) / 0x1f);
  param_2[2] = (char)(((uVar1 & 0x1f) * 0xff) / 0x1f);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t * function_428de0(int64_t param_1,int *param_2,uint *param_3,int *param_4)
{
  bool bVar1;
  int32_t uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int8_t *puVar6;
  byte bVar7;
  int8_t uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint64_t uVar12;
  uint uVar13;
  int8_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int iVar17;
  uint64_t uVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint stack_special_x_8;
  byte bStack0000000000000028;
  int32_t local_var_70;
  uint local_var_6c;
  uint local_var_64;
  int iStack_60;
  int8_t *plocal_var_58;
  uint local_var_50;
  uint local_var_4c;
  int iStack_48;
  int64_t lStack_40;
  uint64_t local_var_38;
  pbVar4 = *(byte **)(param_1 + 0xb8);
  pbVar5 = *(byte **)(param_1 + 0xc0);
  if (pbVar4 < pbVar5) {
    bVar19 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar19 = 0;
  }
  else {
    RenderingGeometryProcessor0(param_1);
    pbVar5 = *(byte **)(param_1 + 0xc0);
    bVar19 = **(byte **)(param_1 + 0xb8);
    pbVar4 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  if (pbVar4 < pbVar5) {
    bStack0000000000000028 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bStack0000000000000028 = 0;
  }
  else {
    RenderingGeometryProcessor0(param_1);
    pbVar5 = *(byte **)(param_1 + 0xc0);
    bStack0000000000000028 = **(byte **)(param_1 + 0xb8);
    pbVar4 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  if (pbVar4 < pbVar5) {
    bVar7 = *pbVar4;
    *(byte **)(param_1 + 0xb8) = pbVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar7 = 0;
  }
  else {
    RenderingGeometryProcessor0(param_1);
    bVar7 = **(byte **)(param_1 + 0xb8);
    *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
  }
  uVar21 = (uint)bVar7;
  uVar2 = SystemCore_MemoryManager(param_1);
  local_var_4c = SystemCore_MemoryManager(param_1);
  pbVar4 = *(byte **)(param_1 + 0xb8);
  if (pbVar4 < *(byte **)(param_1 + 0xc0)) {
    uVar13 = (uint)*pbVar4;
    *(byte **)(param_1 + 0xb8) = pbVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVar13 = 0;
  }
  else {
    RenderingGeometryProcessor0(param_1);
    uVar13 = (uint)**(byte **)(param_1 + 0xb8);
    *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
  }
  SystemCore_MemoryManager(param_1);
  SystemCore_MemoryManager(param_1);
  iStack_60 = SystemCore_MemoryManager(param_1);
  local_var_64 = SystemCore_MemoryManager(param_1);
  pbVar4 = *(byte **)(param_1 + 0xc0);
  pbVar5 = *(byte **)(param_1 + 0xb8);
  if (pbVar5 < pbVar4) {
    local_var_50 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar5;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    local_var_50 = 0;
  }
  else {
    RenderingGeometryProcessor0(param_1);
    pbVar4 = *(byte **)(param_1 + 0xc0);
    local_var_50 = (uint)**(byte **)(param_1 + 0xb8);
    pbVar5 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar5;
  }
  if (pbVar5 < pbVar4) {
    bVar7 = *pbVar5;
    *(byte **)(param_1 + 0xb8) = pbVar5 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar7 = 0;
  }
  else {
    RenderingGeometryProcessor0(param_1);
    bVar7 = **(byte **)(param_1 + 0xb8);
    *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
  }
  uVar12 = 0;
  lStack_40 = 0;
  local_var_70 = 0;
  uVar15 = 1;
  local_var_6c = 0;
  bVar1 = false;
  uVar10 = uVar21 - 8;
  if (uVar21 < 8) {
    uVar10 = uVar21;
  }
  iStack_48 = 1 - (bVar7 >> 5 & 1);
  if (bStack0000000000000028 == 0) {
    if (local_var_50 == 8) goto LAB_1804290dd;
    if (local_var_50 != 0xf) {
      iVar9 = local_var_50 - 0x10;
      uVar13 = local_var_50;
      if (iVar9 != 0) goto LAB_1804290a3;
      if (uVar10 == 3) {
        uVar18 = 2;
        stack_special_x_8 = 2;
        goto LAB_1804290e8;
      }
    }
LAB_180429079:
    uVar18 = 3;
    bVar1 = true;
    stack_special_x_8 = 3;
  }
  else if (uVar13 == 8) {
LAB_1804290dd:
    stack_special_x_8 = 1;
    uVar18 = 1;
  }
  else {
    if ((uVar13 == 0xf) || (iVar9 = uVar13 - 0x10, iVar9 == 0)) goto LAB_180429079;
LAB_1804290a3:
    if ((iVar9 != 8) && (iVar9 != 0x10)) {
      return (int8_t *)0x0;
    }
    stack_special_x_8 = uVar13 >> 3;
    uVar18 = (uint64_t)stack_special_x_8;
    if (uVar13 >> 3 == 0) {
      return (int8_t *)0x0;
    }
  }
LAB_1804290e8:
  *param_2 = iStack_60;
  *param_3 = local_var_64;
  if (param_4 != (int *)0x0) {
    *param_4 = (int)uVar18;
  }
  if ((((((iStack_60 < 0) || ((int)local_var_64 < 0)) ||
        ((local_var_64 != 0 && ((int)(0x7fffffff / (int64_t)(int)local_var_64) < iStack_60)))) ||
       ((uVar13 = local_var_64 * iStack_60, (int)uVar13 < 0 ||
        (iVar9 = (int)(0x7fffffff / uVar18), iVar9 < (int)uVar13)))) ||
      ((local_var_64 != 0 && ((int)(0x7fffffff / (int64_t)(int)local_var_64) < iStack_60)))) ||
     ((((int)uVar13 < 0 || (iVar9 < (int)uVar13)) ||
      (puVar6 = (int8_t *)
                CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)((int)uVar18 * local_var_64 * iStack_60),
                              CONCAT71((int7)(uVar18 >> 8),0x22)), puVar6 == (int8_t *)0x0)))) {
    return (int8_t *)0x0;
  }
  plocal_var_58 = puVar6;
  SystemFunction_00018041ee90(param_1,bVar19);
  if (bStack0000000000000028 == 0) {
    if ((uVar21 < 8) && (!bVar1)) {
      if (0 < (int)local_var_64) {
        uVar15 = (uint64_t)local_var_64;
        iVar9 = iStack_60 * stack_special_x_8;
        if (iStack_48 == 0) {
          puVar14 = puVar6;
          do {
            function_41eef0(param_1,puVar14,iVar9);
            puVar14 = puVar14 + iVar9;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        else {
          puVar14 = puVar6 + (int)((local_var_64 - 1) * stack_special_x_8 * iStack_60);
          do {
            function_41eef0(param_1,puVar14,iVar9);
            puVar14 = puVar14 + -iVar9;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
      goto LAB_1804295cb;
    }
  }
  else {
    SystemFunction_00018041ee90(param_1,uVar2);
    uVar10 = local_var_4c;
    if (((int)local_var_4c < 0) || (iVar9 < (int)local_var_4c)) {
LAB_18042960f:
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar6);
    }
    iVar9 = stack_special_x_8 * local_var_4c;
    lVar22 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar9,0x22);
    lStack_40 = lVar22;
    if (lVar22 == 0) goto LAB_18042960f;
    if (bVar1) {
      if (0 < (int)uVar10) {
        uVar18 = (uint64_t)uVar10;
        do {
          function_428d50(param_1,lVar22);
          lVar22 = lVar22 + (uint64_t)stack_special_x_8;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    else {
      iVar9 = function_41eef0(param_1,lVar22,iVar9);
      if (iVar9 == 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(puVar6);
      }
    }
  }
  uVar18 = (uint64_t)stack_special_x_8;
  puVar14 = puVar6;
  if (0 < (int)uVar13) {
    local_var_38 = (uint64_t)uVar13;
    lVar22 = -(int64_t)puVar6;
    uVar16 = uVar12;
    uVar23 = uVar12;
    do {
      if (uVar21 < 8) {
LAB_1804293c4:
        uVar15 = uVar12;
        if (bStack0000000000000028 == 0) {
          if (bVar1) {
            function_428d50(param_1,&local_var_70);
            uVar10 = local_var_6c;
          }
          else {
            uVar16 = uVar12;
            uVar10 = local_var_6c;
            if (uVar18 != 0) {
              do {
                puVar14 = *(int8_t **)(param_1 + 0xb8);
                if (puVar14 < *(int8_t **)(param_1 + 0xc0)) {
                  uVar8 = *puVar14;
                  *(int8_t **)(param_1 + 0xb8) = puVar14 + 1;
                }
                else if (*(int *)(param_1 + 0x30) == 0) {
                  uVar8 = 0;
                }
                else {
                  RenderingGeometryProcessor0(param_1);
                  uVar8 = **(int8_t **)(param_1 + 0xb8);
                  *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
                }
                *(int8_t *)((int64_t)&local_var_70 + uVar16) = uVar8;
                uVar16 = uVar16 + 1;
                uVar10 = local_var_6c;
              } while ((int64_t)uVar16 < (int64_t)uVar18);
            }
          }
        }
        else {
          if (local_var_50 == 8) {
            pbVar4 = *(byte **)(param_1 + 0xb8);
            if (pbVar4 < *(byte **)(param_1 + 0xc0)) {
              bVar19 = *pbVar4;
              *(byte **)(param_1 + 0xb8) = pbVar4 + 1;
              uVar3 = (uint)bVar19;
            }
            else if (*(int *)(param_1 + 0x30) == 0) {
              uVar3 = 0;
            }
            else {
              RenderingGeometryProcessor0(param_1);
              bVar19 = **(byte **)(param_1 + 0xb8);
              *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
              uVar3 = (uint)bVar19;
            }
          }
          else {
            uVar3 = SystemCore_MemoryManager(param_1);
          }
          if ((int)local_var_4c <= (int)uVar3) {
            uVar3 = 0;
          }
          uVar10 = local_var_6c;
          if (uVar18 != 0) {
// WARNING: Subroutine does not return
            memcpy(&local_var_70,(int)(uVar3 * stack_special_x_8) + lStack_40,uVar18);
          }
        }
      }
      else {
        if ((uint)uVar16 == 0) {
          pbVar4 = *(byte **)(param_1 + 0xb8);
          if (pbVar4 < *(byte **)(param_1 + 0xc0)) {
            uVar10 = (uint)*pbVar4;
            *(byte **)(param_1 + 0xb8) = pbVar4 + 1;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            uVar10 = 0;
          }
          else {
            RenderingGeometryProcessor0(param_1);
            uVar10 = (uint)**(byte **)(param_1 + 0xb8);
            *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
          }
          uVar23 = (uint64_t)(uVar10 >> 7);
          local_var_6c = (uVar10 & 0x7f) + 1;
          goto LAB_1804293c4;
        }
        if (((int)uVar23 == 0) || (uVar10 = (uint)uVar16, (int)uVar15 != 0)) goto LAB_1804293c4;
      }
      if (uVar18 != 0) {
        puVar14 = puVar6;
        do {
          *puVar14 = puVar14[(int64_t)&local_var_70 + lVar22];
          puVar14 = puVar14 + 1;
        } while ((int64_t)(puVar14 + lVar22) < (int64_t)uVar18);
      }
      uVar16 = (uint64_t)(uVar10 - 1);
      lVar22 = lVar22 - (uint64_t)stack_special_x_8;
      local_var_6c = uVar10 - 1;
      puVar6 = puVar6 + stack_special_x_8;
      local_var_38 = local_var_38 - 1;
      puVar14 = plocal_var_58;
    } while (local_var_38 != 0);
  }
  if ((iStack_48 != 0) && (0 < (int)local_var_64)) {
    iVar20 = stack_special_x_8 * iStack_60;
    iVar9 = (local_var_64 - 1) * stack_special_x_8 * iStack_60;
    uVar15 = uVar12;
    do {
      iVar11 = (int)uVar12;
      if (0 < iVar20) {
        lVar22 = (int64_t)iVar9 - (int64_t)iVar11;
        puVar6 = puVar14 + iVar11;
        iVar17 = iVar20;
        do {
          iVar17 = iVar17 + -1;
          uVar8 = *puVar6;
          *puVar6 = puVar6[lVar22];
          puVar6[lVar22] = uVar8;
          puVar6 = puVar6 + 1;
        } while (0 < iVar17);
      }
      uVar12 = (uint64_t)(uint)(iVar11 + iVar20);
      iVar9 = iVar9 - iVar20;
      uVar21 = (int)uVar15 + 2;
      uVar15 = (uint64_t)uVar21;
    } while ((int)uVar21 < (int)local_var_64);
  }
  puVar6 = plocal_var_58;
  if (lStack_40 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lStack_40);
  }
LAB_1804295cb:
  if (stack_special_x_8 < 3) {
    return puVar6;
  }
  if (!bVar1) {
    if (0 < (int)uVar13) {
      uVar15 = (uint64_t)uVar13;
      puVar14 = puVar6;
      do {
        uVar8 = *puVar14;
        *puVar14 = puVar14[2];
        puVar14[2] = uVar8;
        puVar14 = puVar14 + stack_special_x_8;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      return puVar6;
    }
    return puVar6;
  }
  return puVar6;
}
uint64_t function_429640(int64_t param_1,byte *param_2,int param_3)
{
  int8_t *puVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  iVar7 = 0;
  iVar2 = param_3;
  if (0 < param_3) {
    do {
      pbVar3 = *(byte **)(param_1 + 0xb8);
      if (pbVar3 < *(byte **)(param_1 + 0xc0)) {
        uVar5 = (uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
        *(byte **)(param_1 + 0xb8) = pbVar3;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        uVar5 = 0;
      }
      else {
        puVar1 = (int8_t *)(param_1 + 0x38);
        iVar6 = (**(code **)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),puVar1,*(int32_t *)(param_1 + 0x34));
        *(int8_t **)(param_1 + 0xb8) = puVar1;
        if (iVar6 == 0) {
          *(int32_t *)(param_1 + 0x30) = 0;
          *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
          *puVar1 = 0;
        }
        else {
          *(int64_t *)(param_1 + 0xc0) = param_1 + 0x38 + (int64_t)iVar6;
        }
        uVar5 = (uint)**(byte **)(param_1 + 0xb8);
        pbVar3 = *(byte **)(param_1 + 0xb8) + 1;
        *(byte **)(param_1 + 0xb8) = pbVar3;
      }
      if (uVar5 != 0x80) {
        if (uVar5 < 0x80) {
          iVar6 = uVar5 + 1;
          if (iVar2 < iVar6) {
            return 0;
          }
          iVar7 = iVar7 + iVar6;
          do {
            pbVar3 = *(byte **)(param_1 + 0xb8);
            if (pbVar3 < *(byte **)(param_1 + 0xc0)) {
              bVar4 = *pbVar3;
              *(byte **)(param_1 + 0xb8) = pbVar3 + 1;
            }
            else if (*(int *)(param_1 + 0x30) == 0) {
              bVar4 = 0;
            }
            else {
              puVar1 = (int8_t *)(param_1 + 0x38);
              iVar2 = (**(code **)(param_1 + 0x10))
                                (*(uint64_t *)(param_1 + 0x28),puVar1,
                                 *(int32_t *)(param_1 + 0x34));
              *(int8_t **)(param_1 + 0xb8) = puVar1;
              if (iVar2 == 0) {
                *(int32_t *)(param_1 + 0x30) = 0;
                *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
                *puVar1 = 0;
              }
              else {
                *(int64_t *)(param_1 + 0xc0) = param_1 + 0x38 + (int64_t)iVar2;
              }
              bVar4 = **(byte **)(param_1 + 0xb8);
              *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
            }
            *param_2 = bVar4;
            param_2 = param_2 + 4;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        else if (0x80 < uVar5) {
          iVar6 = 0x101 - uVar5;
          if (iVar2 < iVar6) {
            return 0;
          }
          if (pbVar3 < *(byte **)(param_1 + 0xc0)) {
            bVar4 = *pbVar3;
            *(byte **)(param_1 + 0xb8) = pbVar3 + 1;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            bVar4 = 0;
          }
          else {
            RenderingGeometryProcessor0(param_1);
            bVar4 = **(byte **)(param_1 + 0xb8);
            *(byte **)(param_1 + 0xb8) = *(byte **)(param_1 + 0xb8) + 1;
          }
          iVar7 = iVar7 + iVar6;
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *param_2 = bVar4;
            param_2 = param_2 + 4;
          }
        }
      }
      iVar2 = param_3 - iVar7;
    } while (0 < param_3 - iVar7);
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int16_t *
function_429860(int64_t param_1,int *param_2,int *param_3,int32_t *param_4,uint64_t param_5,
             int *param_6,int param_7)
{
  int64_t *plVar1;
  int16_t uVar2;
  int8_t extraout_AH;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int16_t *puVar10;
  int8_t uVar11;
  ushort *puVar12;
  byte *pbVar13;
  int8_t *puVar14;
  int64_t lVar15;
  uint uVar16;
  int64_t lVar17;
  int64_t lVar18;
  int16_t *puVar19;
  int16_t *puVar20;
  float fVar21;
  float fVar22;
  int16_t *plocal_var_48;
  iVar3 = RenderingSystem_Renderer();
  iVar4 = RenderingSystem_Renderer(param_1);
  if ((iVar4 + iVar3 * 0x10000 == 0x38425053) && (iVar3 = RenderingSystem_Renderer(param_1), iVar3 == 1)) {
    plVar1 = (int64_t *)(param_1 + 0xb8);
    if ((*(int64_t *)(param_1 + 0x10) == 0) ||
       (iVar3 = *(int *)(param_1 + 0xc0) - *(int *)plVar1, 5 < iVar3)) {
      *plVar1 = *plVar1 + 6;
    }
    else {
      *plVar1 = *(int64_t *)(param_1 + 0xc0);
      (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),6 - iVar3);
    }
    uVar5 = RenderingSystem_Renderer(param_1);
    if (uVar5 < 0x11) {
      iVar3 = function_41f070(param_1);
      iVar4 = function_41f070(param_1);
      iVar6 = RenderingSystem_Renderer(param_1);
      if (((iVar6 - 8U & 0xfffffff7) == 0) && (iVar7 = RenderingSystem_Renderer(param_1), iVar7 == 3)) {
        uVar8 = function_41f070(param_1);
        SystemFunction_00018041ee90(param_1,uVar8);
        uVar8 = function_41f070(param_1);
        SystemFunction_00018041ee90(param_1,uVar8);
        uVar8 = function_41f070(param_1);
        SystemFunction_00018041ee90(param_1,uVar8);
        iVar7 = RenderingSystem_Renderer(param_1);
        if ((((iVar7 < 2) && (-1 < iVar4)) &&
            ((((iVar4 == 0 || (3 < (int)(0x7fffffff / (int64_t)iVar4))) && (-1 < iVar4 * 4)) &&
             (-1 < iVar3)))) && ((iVar3 == 0 || (iVar4 * 4 <= (int)(0x7fffffff / (int64_t)iVar3))))
           ) {
          uVar16 = iVar4 * iVar3;
          if ((iVar7 == 0) && ((iVar6 == 0x10 && (param_7 == 0x10)))) {
            if ((((iVar4 == 0) || (7 < (int)(0x7fffffff / (int64_t)iVar4))) && (-1 < iVar4 * 8)) &&
               ((iVar3 == 0 || (iVar4 * 8 <= (int)(0x7fffffff / (int64_t)iVar3))))) {
              plocal_var_48 = (int16_t *)
                           CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)(uVar16 * 8),0x22);
              *param_6 = 0x10;
            }
            else {
              plocal_var_48 = (int16_t *)0x0;
              *param_6 = 0x10;
            }
          }
          else {
            plocal_var_48 = (int16_t *)
                         CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)(uVar16 * 4),0x22);
          }
          if (plocal_var_48 != (int16_t *)0x0) {
            if (iVar7 == 0) {
              iVar7 = 0;
              puVar19 = plocal_var_48;
              puVar20 = plocal_var_48;
              do {
                if (iVar7 < (int)uVar5) {
                  if (*param_6 == 0x10) {
                    if (0 < (int)uVar16) {
                      uVar9 = (uint64_t)uVar16;
                      puVar10 = puVar20;
                      do {
                        uVar2 = RenderingSystem_Renderer(param_1);
                        *puVar10 = uVar2;
                        puVar10 = puVar10 + 4;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                  }
                  else if (iVar6 == 0x10) {
                    if (0 < (int)uVar16) {
                      uVar9 = (uint64_t)uVar16;
                      puVar10 = puVar19;
                      do {
                        RenderingSystem_Renderer(param_1);
                        *(int8_t *)puVar10 = extraout_AH;
                        puVar10 = puVar10 + 2;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                  }
                  else if (0 < (int)uVar16) {
                    uVar9 = (uint64_t)uVar16;
                    puVar10 = puVar19;
                    do {
                      puVar14 = (int8_t *)*plVar1;
                      if (puVar14 < *(int8_t **)(param_1 + 0xc0)) {
                        uVar11 = *puVar14;
                        *plVar1 = (int64_t)(puVar14 + 1);
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        uVar11 = 0;
                      }
                      else {
                        RenderingGeometryProcessor0(param_1);
                        uVar11 = *(int8_t *)*plVar1;
                        *plVar1 = (int64_t)((int8_t *)*plVar1 + 1);
                      }
                      *(int8_t *)puVar10 = uVar11;
                      puVar10 = puVar10 + 2;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                }
                else if ((iVar6 == 0x10) && (param_7 == 0x10)) {
                  uVar2 = 0;
                  if (iVar7 == 3) {
                    uVar2 = 0xffff;
                  }
                  if (0 < (int)uVar16) {
                    uVar9 = (uint64_t)uVar16;
                    puVar10 = puVar20;
                    do {
                      *puVar10 = uVar2;
                      puVar10 = puVar10 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                }
                else {
                  uVar11 = 0;
                  if (iVar7 == 3) {
                    uVar11 = 0xff;
                  }
                  if (0 < (int)uVar16) {
                    uVar9 = (uint64_t)uVar16;
                    puVar10 = puVar19;
                    do {
                      *(int8_t *)puVar10 = uVar11;
                      puVar10 = puVar10 + 2;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                }
                iVar7 = iVar7 + 1;
                puVar20 = puVar20 + 1;
                puVar19 = (int16_t *)((int64_t)puVar19 + 1);
              } while (iVar7 < 4);
            }
            else {
              SystemFunction_00018041ee90(param_1,iVar3 * uVar5 * 2);
              iVar6 = 0;
              do {
                puVar14 = (int8_t *)((int64_t)iVar6 + (int64_t)plocal_var_48);
                if (iVar6 < (int)uVar5) {
                  iVar7 = function_429640(param_1,puVar14,uVar16);
                  if (iVar7 == 0) {
// WARNING: Subroutine does not return
                    CoreMemoryPoolInitializer(plocal_var_48);
                  }
                }
                else if (0 < (int)uVar16) {
                  uVar11 = 0;
                  if (iVar6 == 3) {
                    uVar11 = 0xff;
                  }
                  uVar9 = (uint64_t)uVar16;
                  do {
                    *puVar14 = uVar11;
                    puVar14 = puVar14 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < 4);
            }
            lVar17 = 0;
            if (3 < (int)uVar5) {
              lVar15 = (int64_t)(int)uVar16;
              if (*param_6 == 0x10) {
                if (3 < lVar15) {
                  puVar12 = plocal_var_48 + 5;
                  lVar18 = (lVar15 - 4U >> 2) + 1;
                  lVar17 = lVar18 * 4;
                  do {
                    if ((ushort)(puVar12[-2] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[-2];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[-5] = (ushort)(int)((float)puVar12[-5] * fVar22 + fVar21);
                      puVar12[-4] = (ushort)(int)((float)puVar12[-4] * fVar22 + fVar21);
                      puVar12[-3] = (ushort)(int)((float)puVar12[-3] * fVar22 + fVar21);
                    }
                    if ((ushort)(puVar12[2] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[2];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[-1] = (ushort)(int)((float)puVar12[-1] * fVar22 + fVar21);
                      *puVar12 = (ushort)(int)((float)*puVar12 * fVar22 + fVar21);
                      puVar12[1] = (ushort)(int)((float)puVar12[1] * fVar22 + fVar21);
                    }
                    if ((ushort)(puVar12[6] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[6];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[3] = (ushort)(int)((float)puVar12[3] * fVar22 + fVar21);
                      puVar12[4] = (ushort)(int)((float)puVar12[4] * fVar22 + fVar21);
                      puVar12[5] = (ushort)(int)((float)puVar12[5] * fVar22 + fVar21);
                    }
                    if ((ushort)(puVar12[10] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[10];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[7] = (ushort)(int)((float)puVar12[7] * fVar22 + fVar21);
                      puVar12[8] = (ushort)(int)((float)puVar12[8] * fVar22 + fVar21);
                      puVar12[9] = (ushort)(int)((float)puVar12[9] * fVar22 + fVar21);
                    }
                    puVar12 = puVar12 + 0x10;
                    lVar18 = lVar18 + -1;
                  } while (lVar18 != 0);
                }
                if (lVar17 < lVar15) {
                  puVar12 = plocal_var_48 + lVar17 * 4 + 1;
                  lVar15 = lVar15 - lVar17;
                  do {
                    if ((ushort)(puVar12[2] - 1) < 0xfffe) {
                      fVar22 = 65535.0 / (float)puVar12[2];
                      fVar21 = (1.0 - fVar22) * 65535.0;
                      puVar12[-1] = (ushort)(int)((float)puVar12[-1] * fVar22 + fVar21);
                      *puVar12 = (ushort)(int)((float)*puVar12 * fVar22 + fVar21);
                      puVar12[1] = (ushort)(int)((float)puVar12[1] * fVar22 + fVar21);
                    }
                    puVar12 = puVar12 + 4;
                    lVar15 = lVar15 + -1;
                  } while (lVar15 != 0);
                }
              }
              else {
                if (3 < lVar15) {
                  pbVar13 = (byte *)((int64_t)plocal_var_48 + 5);
                  lVar18 = (lVar15 - 4U >> 2) + 1;
                  lVar17 = lVar18 * 4;
                  do {
                    if ((byte)(pbVar13[-2] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[-2];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[-5] = (byte)(int)((float)pbVar13[-5] * fVar22 + fVar21);
                      pbVar13[-4] = (byte)(int)((float)pbVar13[-4] * fVar22 + fVar21);
                      pbVar13[-3] = (byte)(int)((float)pbVar13[-3] * fVar22 + fVar21);
                    }
                    if ((byte)(pbVar13[2] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[2];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[-1] = (byte)(int)((float)pbVar13[-1] * fVar22 + fVar21);
                      *pbVar13 = (byte)(int)((float)*pbVar13 * fVar22 + fVar21);
                      pbVar13[1] = (byte)(int)((float)pbVar13[1] * fVar22 + fVar21);
                    }
                    if ((byte)(pbVar13[6] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[6];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[3] = (byte)(int)((float)pbVar13[3] * fVar22 + fVar21);
                      pbVar13[4] = (byte)(int)((float)pbVar13[4] * fVar22 + fVar21);
                      pbVar13[5] = (byte)(int)((float)pbVar13[5] * fVar22 + fVar21);
                    }
                    if ((byte)(pbVar13[10] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[10];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[7] = (byte)(int)((float)pbVar13[7] * fVar22 + fVar21);
                      pbVar13[8] = (byte)(int)((float)pbVar13[8] * fVar22 + fVar21);
                      pbVar13[9] = (byte)(int)((float)pbVar13[9] * fVar22 + fVar21);
                    }
                    pbVar13 = pbVar13 + 0x10;
                    lVar18 = lVar18 + -1;
                  } while (lVar18 != 0);
                }
                if (lVar17 < lVar15) {
                  pbVar13 = (byte *)(lVar17 * 4 + 1 + (int64_t)plocal_var_48);
                  lVar15 = lVar15 - lVar17;
                  do {
                    if ((byte)(pbVar13[2] - 1) < 0xfe) {
                      fVar22 = 255.0 / (float)pbVar13[2];
                      fVar21 = (1.0 - fVar22) * 255.0;
                      pbVar13[-1] = (byte)(int)((float)pbVar13[-1] * fVar22 + fVar21);
                      *pbVar13 = (byte)(int)((float)*pbVar13 * fVar22 + fVar21);
                      pbVar13[1] = (byte)(int)((float)pbVar13[1] * fVar22 + fVar21);
                    }
                    pbVar13 = pbVar13 + 4;
                    lVar15 = lVar15 + -1;
                  } while (lVar15 != 0);
                }
              }
            }
            if (param_4 != (int32_t *)0x0) {
              *param_4 = 4;
            }
            *param_3 = iVar3;
            *param_2 = iVar4;
            return plocal_var_48;
          }
        }
      }
    }
  }
  return (int16_t *)0x0;
}
uint64_t function_42a2c0(int64_t param_1,int64_t param_2)
{
  char *pcVar1;
  char cVar2;
  int64_t lVar3;
  lVar3 = 0;
  while( true ) {
    pcVar1 = *(char **)(param_1 + 0xb8);
    if (pcVar1 < *(char **)(param_1 + 0xc0)) {
      cVar2 = *pcVar1;
      *(char **)(param_1 + 0xb8) = pcVar1 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      cVar2 = '\0';
    }
    else {
      RenderingGeometryProcessor0(param_1);
      cVar2 = **(char **)(param_1 + 0xb8);
      *(char **)(param_1 + 0xb8) = *(char **)(param_1 + 0xb8) + 1;
    }
    if (cVar2 != *(char *)(lVar3 + param_2)) break;
    lVar3 = lVar3 + 1;
    if (3 < lVar3) {
      return 1;
    }
  }
  return 0;
}
int64_t function_42a360(int64_t param_1,uint param_2,int64_t param_3)
{
  int iVar1;
  int8_t *puVar2;
  int8_t uVar3;
  int8_t *puVar4;
  uint uVar5;
  int64_t lVar6;
  uVar5 = 0x80;
  lVar6 = 0;
  do {
    if ((param_2 & uVar5) != 0) {
      if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_18042a3c0:
        puVar2 = *(int8_t **)(param_1 + 0xb8);
        puVar4 = *(int8_t **)(param_1 + 0xc0);
        if (puVar4 <= puVar2) {
          return 0;
        }
      }
      else {
        iVar1 = (**(code **)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
        if (iVar1 != 0) {
          if (*(int *)(param_1 + 0x30) == 0) {
            return 0;
          }
          goto LAB_18042a3c0;
        }
        puVar2 = *(int8_t **)(param_1 + 0xb8);
        puVar4 = *(int8_t **)(param_1 + 0xc0);
      }
      if (puVar2 < puVar4) {
        uVar3 = *puVar2;
        *(int8_t **)(param_1 + 0xb8) = puVar2 + 1;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        uVar3 = 0;
      }
      else {
        RenderingGeometryProcessor0(param_1);
        uVar3 = **(int8_t **)(param_1 + 0xb8);
        *(int8_t **)(param_1 + 0xb8) = *(int8_t **)(param_1 + 0xb8) + 1;
      }
      *(int8_t *)(lVar6 + param_3) = uVar3;
    }
    lVar6 = lVar6 + 1;
    uVar5 = (int)uVar5 >> 1;
    if (3 < lVar6) {
      return param_3;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address