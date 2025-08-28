/* 函数别名定义: RenderingGeometryProcessor */
#define RenderingGeometryProcessor RenderingGeometryProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part285_sub002_sub002.c - 1 个函数
// 函数: void function_422040(int64_t *param_1,int param_2)
void function_422040(int64_t *param_1,int param_2)
{
  byte bVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t *puVar4;
  sbyte sVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  int32_t uVar10;
  uint uVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  int8_t uVar15;
  uint64_t uVar16;
  byte *pbVar17;
  int iVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint *puVar21;
  int64_t lVar22;
  int64_t *plVar23;
  int8_t stack_array_a8 [32];
  int iStack_88;
  int iStack_84;
  uint stack_array_78 [16];
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  if (param_2 == 0xc4) {
    iVar9 = RenderingSystem_Renderer();
    iVar9 = iVar9 + -2;
    while (0 < iVar9) {
      iVar18 = 0;
      lVar20 = *param_1;
      pbVar17 = *(byte **)(lVar20 + 0xb8);
      if (pbVar17 < *(byte **)(lVar20 + 0xc0)) {
        bVar13 = *pbVar17;
        *(byte **)(lVar20 + 0xb8) = pbVar17 + 1;
      }
      else if (*(int *)(lVar20 + 0x30) == 0) {
        bVar13 = 0;
      }
      else {
        RenderingGeometryProcessor0(lVar20);
        bVar13 = **(byte **)(lVar20 + 0xb8);
        *(byte **)(lVar20 + 0xb8) = *(byte **)(lVar20 + 0xb8) + 1;
      }
      bVar1 = bVar13 >> 4;
      if ((1 < bVar1) || (3 < (bVar13 & 0xf))) break;
      puVar21 = stack_array_78;
      lVar20 = 0x10;
      do {
        lVar22 = *param_1;
        pbVar17 = *(byte **)(lVar22 + 0xb8);
        if (pbVar17 < *(byte **)(lVar22 + 0xc0)) {
          bVar14 = *pbVar17;
          *(byte **)(lVar22 + 0xb8) = pbVar17 + 1;
        }
        else if (*(int *)(lVar22 + 0x30) == 0) {
          bVar14 = 0;
        }
        else {
          RenderingGeometryProcessor0(lVar22);
          bVar14 = **(byte **)(lVar22 + 0xb8);
          *(byte **)(lVar22 + 0xb8) = *(byte **)(lVar22 + 0xb8) + 1;
        }
        *puVar21 = (uint)bVar14;
        iVar18 = iVar18 + (uint)bVar14;
        puVar21 = puVar21 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      iStack_84 = iVar9 + -0x11;
      uVar16 = (uint64_t)(bVar13 & 0xf);
      iStack_88 = iVar18;
      if (bVar1 == 0) {
        iVar9 = function_41f610(param_1 + uVar16 * 0xd2 + 1,stack_array_78);
        if (iVar9 == 0) break;
        lVar20 = 0x408;
      }
      else {
        iVar9 = function_41f610(param_1 + uVar16 * 0xd2 + 0x349,stack_array_78);
        if (iVar9 == 0) break;
        lVar20 = 0x1e48;
      }
      lVar19 = (int64_t)iStack_88;
      lVar22 = 0;
      if (0 < lVar19) {
        do {
          lVar3 = *param_1;
          puVar4 = *(int8_t **)(lVar3 + 0xb8);
          if (puVar4 < *(int8_t **)(lVar3 + 0xc0)) {
            uVar15 = *puVar4;
            *(int8_t **)(lVar3 + 0xb8) = puVar4 + 1;
          }
          else if (*(int *)(lVar3 + 0x30) == 0) {
            uVar15 = 0;
          }
          else {
            RenderingGeometryProcessor0(lVar3);
            uVar15 = **(int8_t **)(lVar3 + 0xb8);
            *(int8_t **)(lVar3 + 0xb8) = *(int8_t **)(lVar3 + 0xb8) + 1;
          }
          *(int8_t *)((int64_t)param_1 + lVar22 + lVar20 + uVar16 * 0x690) = uVar15;
          lVar22 = lVar22 + 1;
        } while (lVar22 < lVar19);
      }
      iVar9 = 0;
      if (bVar1 != 0) {
        plVar23 = param_1 + uVar16 * 0x80 + 0x6d1;
        pbVar17 = (byte *)(param_1 + uVar16 * 0xd2 + 0x349);
        do {
          bVar13 = *pbVar17;
          *(int16_t *)plVar23 = 0;
          if (bVar13 != 0xff) {
            bVar1 = *(byte *)((int64_t)param_1 + (uint64_t)bVar13 + uVar16 * 0x690 + 0x1e48);
            bVar13 = *(byte *)((int64_t)param_1 + (uint64_t)bVar13 + uVar16 * 0x690 + 0x1f48);
            uVar8 = bVar1 & 0xf;
            if (((bVar1 & 0xf) != 0) && ((ushort)(bVar13 + uVar8) < 10)) {
              sVar5 = (sbyte)uVar8;
              iVar18 = (int)(iVar9 << (bVar13 & 0x1f) & 0x1ffU) >> (9U - sVar5 & 0x1f);
              if (iVar18 < 1 << (sVar5 - 1U & 0x1f)) {
                iVar18 = iVar18 + (1 - (1 << sVar5));
              }
              if (iVar18 + 0x80U < 0x100) {
                *(ushort *)plVar23 =
                     ((short)iVar18 * 0x10 + (ushort)(bVar1 >> 4)) * 0x10 + uVar8 + (ushort)bVar13;
              }
            }
          }
          iVar9 = iVar9 + 1;
          pbVar17 = pbVar17 + 1;
          plVar23 = (int64_t *)((int64_t)plVar23 + 2);
        } while (iVar9 < 0x200);
      }
      iVar9 = iStack_84 - iStack_88;
    }
    goto LAB_1804226bb;
  }
  if (param_2 == 0xdb) {
    iVar9 = RenderingSystem_Renderer();
    for (iVar9 = iVar9 + -2; 0 < iVar9; iVar9 = iVar9 - iVar18) {
      lVar20 = *param_1;
      pbVar17 = *(byte **)(lVar20 + 0xb8);
      if (pbVar17 < *(byte **)(lVar20 + 0xc0)) {
        uVar16 = (uint64_t)*pbVar17;
        *(byte **)(lVar20 + 0xb8) = pbVar17 + 1;
      }
      else if (*(int *)(lVar20 + 0x30) == 0) {
        uVar16 = 0;
      }
      else {
        RenderingGeometryProcessor0(lVar20);
        uVar16 = (uint64_t)**(byte **)(lVar20 + 0xb8);
        *(byte **)(lVar20 + 0xb8) = *(byte **)(lVar20 + 0xb8) + 1;
      }
      uVar11 = (uint)uVar16 & 0xf;
      uVar16 = uVar16 >> 4;
      if ((1 < (uint)uVar16) || (3 < uVar11)) break;
      lVar20 = 0;
      do {
        lVar22 = *param_1;
        if (uVar16 == 0) {
          pbVar17 = *(byte **)(lVar22 + 0xb8);
          if (pbVar17 < *(byte **)(lVar22 + 0xc0)) {
            bVar13 = *pbVar17;
            *(byte **)(lVar22 + 0xb8) = pbVar17 + 1;
          }
          else if (*(int *)(lVar22 + 0x30) == 0) {
            bVar13 = 0;
          }
          else {
            RenderingGeometryProcessor0(lVar22);
            bVar13 = **(byte **)(lVar22 + 0xb8);
            *(byte **)(lVar22 + 0xb8) = *(byte **)(lVar22 + 0xb8) + 1;
          }
          uVar8 = (ushort)bVar13;
        }
        else {
          uVar8 = RenderingSystem_Renderer(lVar22);
        }
        pbVar17 = &ui_system_data_1504_ptr + lVar20;
        lVar20 = lVar20 + 1;
        *(ushort *)
         ((int64_t)param_1 + ((uint64_t)*pbVar17 + (uint64_t)uVar11 * 0x40) * 2 + 0x3488) = uVar8
        ;
      } while (lVar20 < 0x40);
      iVar18 = 0x41;
      if (uVar16 != 0) {
        iVar18 = 0x81;
      }
    }
    goto LAB_1804226bb;
  }
  if (param_2 == 0xdd) {
    iVar9 = RenderingSystem_Renderer(*param_1);
    if (iVar9 == 4) {
      uVar10 = RenderingSystem_Renderer(*param_1);
      *(int32_t *)(param_1 + 0x90d) = uVar10;
    }
    goto LAB_1804226bb;
  }
  if ((param_2 == 0xff) ||
     (((0xf < param_2 - 0xe0U && (param_2 != 0xfe)) || (iVar9 = RenderingSystem_Renderer(), iVar9 < 2))))
  goto LAB_1804226bb;
  iVar18 = iVar9 + -2;
  if (param_2 == 0xe0) {
    if (4 < iVar18) {
      lVar20 = 0;
      bVar7 = true;
      do {
        lVar22 = *param_1;
        pcVar2 = *(char **)(lVar22 + 0xb8);
        if (pcVar2 < *(char **)(lVar22 + 0xc0)) {
          cVar12 = *pcVar2;
          *(char **)(lVar22 + 0xb8) = pcVar2 + 1;
        }
        else if (*(int *)(lVar22 + 0x30) == 0) {
          cVar12 = '\0';
        }
        else {
          RenderingGeometryProcessor0(lVar22);
          cVar12 = **(char **)(lVar22 + 0xb8);
          *(char **)(lVar22 + 0xb8) = *(char **)(lVar22 + 0xb8) + 1;
        }
        bVar6 = false;
        if (cVar12 == (&processed_var_6308_ptr)[lVar20]) {
          bVar6 = bVar7;
        }
        lVar20 = lVar20 + 1;
        bVar7 = bVar6;
      } while (lVar20 < 5);
      iVar18 = iVar9 + -7;
      if (bVar6) {
        *(int32_t *)(param_1 + 0x909) = 1;
        SystemFunction_00018041ee90(*param_1,iVar18);
        goto LAB_1804226bb;
      }
    }
  }
  else if ((param_2 == 0xee) && (0xb < iVar18)) {
    lVar20 = 0;
    bVar7 = true;
    do {
      lVar22 = *param_1;
      pcVar2 = *(char **)(lVar22 + 0xb8);
      if (pcVar2 < *(char **)(lVar22 + 0xc0)) {
        cVar12 = *pcVar2;
        *(char **)(lVar22 + 0xb8) = pcVar2 + 1;
      }
      else if (*(int *)(lVar22 + 0x30) == 0) {
        cVar12 = '\0';
      }
      else {
        RenderingGeometryProcessor0(lVar22);
        cVar12 = **(char **)(lVar22 + 0xb8);
        *(char **)(lVar22 + 0xb8) = *(char **)(lVar22 + 0xb8) + 1;
      }
      bVar6 = false;
      if (cVar12 == (&processed_var_6260_ptr)[lVar20]) {
        bVar6 = bVar7;
      }
      lVar20 = lVar20 + 1;
      bVar7 = bVar6;
    } while (lVar20 < 6);
    iVar18 = iVar9 + -8;
    if (bVar6) {
      lVar20 = *param_1;
      if (*(uint64_t *)(lVar20 + 0xb8) < *(uint64_t *)(lVar20 + 0xc0)) {
        *(uint64_t *)(lVar20 + 0xb8) = *(uint64_t *)(lVar20 + 0xb8) + 1;
      }
      else if (*(int *)(lVar20 + 0x30) != 0) {
        RenderingGeometryProcessor0(lVar20);
        *(int64_t *)(lVar20 + 0xb8) = *(int64_t *)(lVar20 + 0xb8) + 1;
      }
      RenderingSystem_Renderer(*param_1);
      RenderingSystem_Renderer();
      lVar20 = *param_1;
      pbVar17 = *(byte **)(lVar20 + 0xb8);
      if (pbVar17 < *(byte **)(lVar20 + 0xc0)) {
LAB_18042227f:
        bVar13 = *pbVar17;
        *(byte **)(lVar20 + 0xb8) = pbVar17 + 1;
      }
      else {
        if (*(int *)(lVar20 + 0x30) != 0) {
          RenderingGeometryProcessor0(lVar20);
          pbVar17 = *(byte **)(lVar20 + 0xb8);
          goto LAB_18042227f;
        }
        bVar13 = 0;
      }
      iVar18 = iVar9 + -0xe;
      *(uint *)((int64_t)param_1 + 0x484c) = (uint)bVar13;
    }
  }
  SystemFunction_00018041ee90(*param_1,iVar18);
LAB_1804226bb:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_a8);
}
uint64_t function_4226f0(int64_t *param_1)
{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *plVar10;
  iVar3 = RenderingSystem_Renderer();
  lVar9 = *param_1;
  pbVar2 = *(byte **)(lVar9 + 0xb8);
  if (pbVar2 < *(byte **)(lVar9 + 0xc0)) {
    bVar5 = *pbVar2;
    *(byte **)(lVar9 + 0xb8) = pbVar2 + 1;
  }
  else if (*(int *)(lVar9 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    RenderingGeometryProcessor0(lVar9);
    bVar5 = **(byte **)(lVar9 + 0xb8);
    *(byte **)(lVar9 + 0xb8) = *(byte **)(lVar9 + 0xb8) + 1;
  }
  *(uint *)((int64_t)param_1 + 0x4854) = (uint)bVar5;
  if ((((bVar5 != 0) && (uVar7 = (uint)bVar5, uVar7 < 5)) &&
      (lVar9 = *param_1, (int)uVar7 <= *(int *)(lVar9 + 8))) && (iVar3 == (uint)bVar5 * 2 + 6)) {
    iVar3 = 0;
    if (uVar7 != 0) {
      plVar10 = param_1 + 0x90b;
      do {
        lVar9 = *param_1;
        pbVar2 = *(byte **)(lVar9 + 0xb8);
        if (pbVar2 < *(byte **)(lVar9 + 0xc0)) {
          bVar5 = *pbVar2;
          *(byte **)(lVar9 + 0xb8) = pbVar2 + 1;
        }
        else if (*(int *)(lVar9 + 0x30) == 0) {
          bVar5 = 0;
        }
        else {
          RenderingGeometryProcessor0(lVar9);
          bVar5 = **(byte **)(lVar9 + 0xb8);
          *(byte **)(lVar9 + 0xb8) = *(byte **)(lVar9 + 0xb8) + 1;
        }
        lVar9 = *param_1;
        pbVar2 = *(byte **)(lVar9 + 0xb8);
        if (pbVar2 < *(byte **)(lVar9 + 0xc0)) {
          bVar6 = *pbVar2;
          *(byte **)(lVar9 + 0xb8) = pbVar2 + 1;
        }
        else if (*(int *)(lVar9 + 0x30) == 0) {
          bVar6 = 0;
        }
        else {
          RenderingGeometryProcessor0(lVar9);
          bVar6 = **(byte **)(lVar9 + 0xb8);
          *(byte **)(lVar9 + 0xb8) = *(byte **)(lVar9 + 0xb8) + 1;
        }
        iVar8 = 0;
        lVar9 = 0;
        iVar1 = *(int *)(*param_1 + 8);
        if (0 < iVar1) {
          puVar4 = (uint *)(param_1 + 0x8d4);
          do {
            if (*puVar4 == (uint)bVar5) break;
            iVar8 = iVar8 + 1;
            lVar9 = lVar9 + 1;
            puVar4 = puVar4 + 0x18;
          } while (iVar8 < iVar1);
        }
        if (iVar8 == iVar1) {
          return 0;
        }
        *(uint *)(param_1 + lVar9 * 0xc + 0x8d6) = (uint)(bVar6 >> 4);
        if (3 < bVar6 >> 4) {
          return 0;
        }
        *(uint *)(lVar9 * 0x60 + 0x46b4 + (int64_t)param_1) = bVar6 & 0xf;
        if (3 < (bVar6 & 0xf)) {
          return 0;
        }
        *(int *)plVar10 = iVar8;
        iVar3 = iVar3 + 1;
        plVar10 = (int64_t *)((int64_t)plVar10 + 4);
      } while (iVar3 < *(int *)((int64_t)param_1 + 0x4854));
      lVar9 = *param_1;
    }
    pbVar2 = *(byte **)(lVar9 + 0xb8);
    if (pbVar2 < *(byte **)(lVar9 + 0xc0)) {
      bVar5 = *pbVar2;
      *(byte **)(lVar9 + 0xb8) = pbVar2 + 1;
    }
    else if (*(int *)(lVar9 + 0x30) == 0) {
      bVar5 = 0;
    }
    else {
      RenderingGeometryProcessor0(lVar9);
      bVar5 = **(byte **)(lVar9 + 0xb8);
      *(byte **)(lVar9 + 0xb8) = *(byte **)(lVar9 + 0xb8) + 1;
    }
    lVar9 = *param_1;
    *(uint *)((int64_t)param_1 + 0x4834) = (uint)bVar5;
    pbVar2 = *(byte **)(lVar9 + 0xb8);
    if (pbVar2 < *(byte **)(lVar9 + 0xc0)) {
      bVar5 = *pbVar2;
      *(byte **)(lVar9 + 0xb8) = pbVar2 + 1;
    }
    else if (*(int *)(lVar9 + 0x30) == 0) {
      bVar5 = 0;
    }
    else {
      RenderingGeometryProcessor0(lVar9);
      bVar5 = **(byte **)(lVar9 + 0xb8);
      *(byte **)(lVar9 + 0xb8) = *(byte **)(lVar9 + 0xb8) + 1;
    }
    lVar9 = *param_1;
    *(uint *)(param_1 + 0x907) = (uint)bVar5;
    pbVar2 = *(byte **)(lVar9 + 0xb8);
    if (pbVar2 < *(byte **)(lVar9 + 0xc0)) {
      bVar5 = *pbVar2;
      *(byte **)(lVar9 + 0xb8) = pbVar2 + 1;
    }
    else if (*(int *)(lVar9 + 0x30) == 0) {
      bVar5 = 0;
    }
    else {
      RenderingGeometryProcessor0(lVar9);
      bVar5 = **(byte **)(lVar9 + 0xb8);
      *(byte **)(lVar9 + 0xb8) = *(byte **)(lVar9 + 0xb8) + 1;
    }
    iVar3 = *(int *)((int64_t)param_1 + 0x4834);
    bVar6 = bVar5 >> 4;
    *(uint *)((int64_t)param_1 + 0x483c) = (uint)bVar6;
    *(uint *)(param_1 + 0x908) = bVar5 & 0xf;
    if ((int)param_1[0x906] == 0) {
      if (((iVar3 == 0) && (bVar6 == 0)) && ((bVar5 & 0xf) == 0)) {
        *(int32_t *)(param_1 + 0x907) = 0x3f;
        return 1;
      }
    }
    else if (((iVar3 < 0x40) && ((int)param_1[0x907] < 0x40)) &&
            ((iVar3 <= (int)param_1[0x907] && ((bVar6 < 0xe && ((bVar5 & 0xf) < 0xe)))))) {
      return 1;
    }
  }
  return 0;
}
int32_t function_422a20(int64_t param_1,uint param_2,int32_t param_3)
{
  int64_t *plVar1;
  uint64_t uVar2;
  if (0 < (int)param_2) {
    plVar1 = (int64_t *)(param_1 + 0x46d8);
    uVar2 = (uint64_t)param_2;
    do {
      if (*plVar1 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      if (plVar1[1] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      if (plVar1[2] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plVar1 = plVar1 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return param_3;
}
int32_t function_422a2d(int64_t param_1,uint param_2)
{
  int64_t *plVar1;
  int32_t unaff_ESI;
  uint64_t uVar2;
  plVar1 = (int64_t *)(param_1 + 0x46d8);
  uVar2 = (uint64_t)param_2;
  do {
    if (*plVar1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (plVar1[1] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (plVar1[2] != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plVar1 = plVar1 + 0xc;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return unaff_ESI;
}
int32_t function_422a9c(void)
{
  int32_t unaff_ESI;
  return unaff_ESI;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_422ab0(uint64_t *param_1,int param_2)
{
  char cVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  byte bVar12;
  uint64_t uVar13;
  uint *puVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  piVar3 = (int *)*param_1;
  uVar20 = 1;
  uVar19 = 1;
  iVar6 = RenderingSystem_Renderer(piVar3);
  if (10 < iVar6) {
    pcVar8 = *(char **)(piVar3 + 0x2e);
    if (*(char **)(piVar3 + 0x30) <= pcVar8) {
      if (piVar3[0xc] == 0) {
        return 0;
      }
      RenderingGeometryProcessor0(piVar3);
      pcVar8 = *(char **)(piVar3 + 0x2e);
    }
    cVar1 = *pcVar8;
    *(char **)(piVar3 + 0x2e) = pcVar8 + 1;
    if (cVar1 == '\b') {
      iVar7 = RenderingSystem_Renderer(piVar3);
      piVar3[1] = iVar7;
      if (iVar7 != 0) {
        iVar7 = RenderingSystem_Renderer();
        *piVar3 = iVar7;
        if (iVar7 != 0) {
          pbVar15 = *(byte **)(piVar3 + 0x2e);
          if (pbVar15 < *(byte **)(piVar3 + 0x30)) {
            bVar12 = *pbVar15;
            *(byte **)(piVar3 + 0x2e) = pbVar15 + 1;
          }
          else if (piVar3[0xc] == 0) {
            bVar12 = 0;
          }
          else {
            RenderingGeometryProcessor0(piVar3);
            bVar12 = **(byte **)(piVar3 + 0x2e);
            *(byte **)(piVar3 + 0x2e) = *(byte **)(piVar3 + 0x2e) + 1;
          }
          uVar13 = (uint64_t)bVar12;
          uVar17 = (uint)bVar12;
          if (((bVar12 - 1 & 0xfffffffc) == 0) && (bVar12 != 2)) {
            iVar7 = 0;
            piVar3[2] = (uint)bVar12;
            if (bVar12 != 0) {
              puVar9 = param_1 + 0x8dd;
              do {
                puVar9[-3] = 0;
                *puVar9 = 0;
                puVar9 = puVar9 + 0xc;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
              uVar17 = piVar3[2];
            }
            if (iVar6 == uVar17 * 3 + 8) {
              *(int32_t *)(param_1 + 0x90a) = 0;
              iVar6 = piVar3[2];
              if (0 < iVar6) {
                pbVar15 = &processed_var_6256_ptr;
                puVar14 = (uint *)((int64_t)param_1 + 0x46a4);
                do {
                  pbVar4 = *(byte **)(piVar3 + 0x2e);
                  if (pbVar4 < *(byte **)(piVar3 + 0x30)) {
                    bVar12 = *pbVar4;
                    *(byte **)(piVar3 + 0x2e) = pbVar4 + 1;
                  }
                  else if (piVar3[0xc] == 0) {
                    bVar12 = 0;
                  }
                  else {
                    RenderingGeometryProcessor0(piVar3);
                    bVar12 = **(byte **)(piVar3 + 0x2e);
                    *(byte **)(piVar3 + 0x2e) = *(byte **)(piVar3 + 0x2e) + 1;
                  }
                  puVar14[-1] = (uint)bVar12;
                  if ((piVar3[2] == 3) && ((uint)bVar12 == (uint)*pbVar15)) {
                    *(int *)(param_1 + 0x90a) = *(int *)(param_1 + 0x90a) + 1;
                  }
                  pbVar4 = *(byte **)(piVar3 + 0x2e);
                  if (pbVar4 < *(byte **)(piVar3 + 0x30)) {
                    bVar12 = *pbVar4;
                    *(byte **)(piVar3 + 0x2e) = pbVar4 + 1;
                  }
                  else if (piVar3[0xc] == 0) {
                    bVar12 = 0;
                  }
                  else {
                    RenderingGeometryProcessor0(piVar3);
                    bVar12 = **(byte **)(piVar3 + 0x2e);
                    *(byte **)(piVar3 + 0x2e) = *(byte **)(piVar3 + 0x2e) + 1;
                  }
                  bVar5 = bVar12 >> 4;
                  *puVar14 = (uint)bVar5;
                  if (bVar5 == 0) {
                    return 0;
                  }
                  if (4 < bVar5) {
                    return 0;
                  }
                  puVar14[1] = bVar12 & 0xf;
                  if ((bVar12 & 0xf) == 0) {
                    return 0;
                  }
                  if (4 < (bVar12 & 0xf)) {
                    return 0;
                  }
                  pbVar4 = *(byte **)(piVar3 + 0x2e);
                  if (pbVar4 < *(byte **)(piVar3 + 0x30)) {
                    bVar12 = *pbVar4;
                    *(byte **)(piVar3 + 0x2e) = pbVar4 + 1;
                  }
                  else if (piVar3[0xc] == 0) {
                    bVar12 = 0;
                  }
                  else {
                    RenderingGeometryProcessor0(piVar3);
                    bVar12 = **(byte **)(piVar3 + 0x2e);
                    *(byte **)(piVar3 + 0x2e) = *(byte **)(piVar3 + 0x2e) + 1;
                  }
                  puVar14[2] = (uint)bVar12;
                  if (3 < bVar12) {
                    return 0;
                  }
                  iVar6 = piVar3[2];
                  iVar7 = iVar7 + 1;
                  pbVar15 = pbVar15 + 1;
                  puVar14 = puVar14 + 0x18;
                } while (iVar7 < iVar6);
              }
              iVar7 = 0;
              if (param_2 == 0) {
                iVar18 = *piVar3;
                iVar2 = piVar3[1];
                if (iVar18 < 0) {
                  return 0;
                }
                if (iVar2 < 0) {
                  return 0;
                }
                if ((iVar2 != 0) && ((int)(0x7fffffff / (int64_t)iVar2) < iVar18)) {
                  return 0;
                }
                if (iVar18 * iVar2 < 0) {
                  return 0;
                }
                if (iVar6 < 0) {
                  return 0;
                }
                if ((iVar6 != 0) && ((int)(0x7fffffff / (int64_t)iVar6) < iVar18 * iVar2)) {
                  return 0;
                }
                if (0 < piVar3[2]) {
                  uVar13 = (uint64_t)(uint)piVar3[2];
                  puVar14 = (uint *)(param_1 + 0x8d5);
                  uVar17 = 1;
                  do {
                    uVar19 = puVar14[-1];
                    if ((int)puVar14[-1] <= (int)uVar20) {
                      uVar19 = uVar20;
                    }
                    uVar20 = uVar19;
                    uVar19 = *puVar14;
                    if ((int)*puVar14 <= (int)uVar17) {
                      uVar19 = uVar17;
                    }
                    uVar13 = uVar13 - 1;
                    puVar14 = puVar14 + 0x18;
                    uVar17 = uVar19;
                  } while (uVar13 != 0);
                }
                *(uint *)(param_1 + 0x8d1) = uVar20;
                uVar17 = uVar20 * 8;
                *(uint *)((int64_t)param_1 + 0x468c) = uVar19;
                uVar16 = uVar19 * 8;
                *(uint *)(param_1 + 0x8d3) = uVar17;
                *(uint *)((int64_t)param_1 + 0x469c) = uVar16;
                *(uint *)(param_1 + 0x8d2) = (*piVar3 + -1 + uVar17) / uVar17;
                *(uint *)((int64_t)param_1 + 0x4694) = (piVar3[1] + -1 + uVar16) / uVar16;
                if (0 < piVar3[2]) {
                  puVar14 = (uint *)((int64_t)param_1 + 0x46bc);
                  do {
                    *puVar14 = (*piVar3 * puVar14[-6] + -1 + uVar20) / uVar20;
                    puVar14[1] = (puVar14[-5] * piVar3[1] + -1 + uVar19) / uVar19;
                    iVar6 = *(int *)(param_1 + 0x8d2);
                    uVar17 = iVar6 * puVar14[-6] * 8;
                    puVar14[2] = uVar17;
                    iVar18 = puVar14[-5] * *(int *)((int64_t)param_1 + 0x4694);
                    puVar14[0xd] = 0;
                    puVar14[0xe] = 0;
                    puVar14[9] = 0;
                    puVar14[10] = 0;
                    puVar14[0xb] = 0;
                    puVar14[0xc] = 0;
                    uVar16 = iVar18 * 8;
                    puVar14[3] = uVar16;
                    if ((((int)(iVar6 * puVar14[-6] * 8) < 0) || (iVar18 = iVar18 * 8, iVar18 < 0))
                       || ((iVar18 != 0 && ((int)(0x7fffffff / (int64_t)(int)uVar16) < (int)uVar17)
                           ))) {
                      puVar14[7] = 0;
                      puVar14[8] = 0;
LAB_180422fcf:
                      uVar11 = function_422a20(param_1,iVar7 + 1,0);
                      return uVar11;
                    }
                    iVar6 = uVar17 * uVar16 + 0xf;
                    lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar6,
                                           CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),0x22));
                    *(int64_t *)(puVar14 + 7) = lVar10;
                    if (lVar10 == 0) goto LAB_180422fcf;
                    *(uint64_t *)(puVar14 + 5) = lVar10 + 0xfU & 0xfffffffffffffff0;
                    if (*(int *)(param_1 + 0x906) != 0) {
                      uVar17 = puVar14[2];
                      uVar16 = puVar14[3];
                      puVar14[0xf] = (int)(uVar17 + ((int)uVar17 >> 0x1f & 7U)) >> 3;
                      puVar14[0x10] = (int)(uVar16 + ((int)uVar16 >> 0x1f & 7U)) >> 3;
                      if ((((int)uVar17 < 0) || ((int)uVar16 < 0)) ||
                         (((uVar16 != 0 && ((int)(0x7fffffff / (int64_t)(int)uVar16) < (int)uVar17)
                           ) || (((iVar6 = uVar17 * uVar16, iVar6 < 0 || (0x3fffffff < iVar6)) ||
                                 (0x7ffffff0 < iVar6 * 2)))))) {
                        puVar14[9] = 0;
                        puVar14[10] = 0;
LAB_180422fbb:
                        uVar11 = function_422a20(param_1,iVar7 + 1,0);
                        return uVar11;
                      }
                      lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(iVar6 * 2 + 0xf),
                                             CONCAT71((uint7)(uint3)(uVar16 >> 8),0x22));
                      *(int64_t *)(puVar14 + 9) = lVar10;
                      if (lVar10 == 0) goto LAB_180422fbb;
                      *(uint64_t *)(puVar14 + 0xd) = lVar10 + 0xfU & 0xfffffffffffffff0;
                    }
                    iVar7 = iVar7 + 1;
                    puVar14 = puVar14 + 0x18;
                  } while (iVar7 < piVar3[2]);
                }
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}
uint64_t function_423010(int64_t *param_1,int param_2)
{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint64_t uVar5;
  uint uVar6;
  *(int32_t *)((int64_t)param_1 + 0x484c) = 0xffffffff;
  *(int32_t *)(param_1 + 0x909) = 0;
  *(int8_t *)(param_1 + 0x905) = 0xff;
  cVar2 = function_4214d0();
  if (cVar2 == -0x28) {
    if (param_2 != 1) {
      bVar3 = function_4214d0(param_1);
      uVar6 = (uint)bVar3;
      if (bVar3 != 0xc0) {
        do {
          if (uVar6 - 0xc1 < 2) break;
          iVar4 = function_422040(param_1,uVar6);
          if (iVar4 == 0) goto LAB_18042310c;
          bVar3 = function_4214d0(param_1);
          while (uVar6 = (uint)bVar3, uVar6 == 0xff) {
            lVar1 = *param_1;
            if (*(int64_t *)(lVar1 + 0x10) == 0) {
LAB_1804230bc:
              if (*(uint64_t *)(lVar1 + 0xc0) <= *(uint64_t *)(lVar1 + 0xb8)) goto LAB_18042310c;
            }
            else {
              iVar4 = (**(code **)(lVar1 + 0x20))(*(uint64_t *)(lVar1 + 0x28));
              if (iVar4 != 0) {
                if (*(int *)(lVar1 + 0x30) != 0) goto LAB_1804230bc;
                goto LAB_18042310c;
              }
            }
            bVar3 = function_4214d0(param_1);
          }
        } while (uVar6 != 0xc0);
      }
      *(uint *)(param_1 + 0x906) = (uint)(uVar6 == 0xc2);
      iVar4 = function_422ab0(param_1,param_2);
      if (iVar4 == 0) goto LAB_18042310c;
    }
    uVar5 = 1;
  }
  else {
LAB_18042310c:
    uVar5 = 0;
  }
  return uVar5;
}
uint64_t function_423130(int64_t *param_1)
{
  int8_t *puVar1;
  int8_t uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int64_t *plVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint64_t uVar13;
  uint64_t uVar7;
  iVar11 = 0;
  param_1[0x8db] = 0;
  param_1[0x8dc] = 0;
  param_1[0x8e7] = 0;
  param_1[0x8e8] = 0;
  param_1[0x8f3] = 0;
  param_1[0x8f4] = 0;
  param_1[0x8ff] = 0;
  param_1[0x900] = 0;
  *(int32_t *)(param_1 + 0x90d) = 0;
  iVar4 = function_423010(param_1,0);
  if (iVar4 == 0) {
    return 0;
  }
  cVar3 = function_4214d0(param_1);
  do {
    if (cVar3 == -0x27) {
      if (((int)param_1[0x906] != 0) && (0 < *(int *)(*param_1 + 8))) {
        plVar8 = param_1 + 0x8de;
        do {
          iVar4 = 0;
          iVar12 = *(int *)((int64_t)plVar8 + -0x34) + 7 >> 3;
          iVar10 = (int)plVar8[-6] + 7 >> 3;
          if (0 < iVar10) {
            do {
              uVar7 = 0;
              uVar13 = uVar7;
              if (0 < iVar12) {
                do {
                  lVar9 = *plVar8 + (int64_t)(((int)plVar8[1] * iVar4 + (int)uVar7) * 0x40) * 2;
                  SystemFunction_000180421dc0(lVar9,param_1 + (int64_t)*(int *)((int64_t)plVar8 + -0x44) *
                                                      0x10 + 0x691);
                  (*(code *)param_1[0x90e])
                            ((int64_t)(*(int *)((int64_t)plVar8 + -0x2c) * iVar4 * 8) + uVar13 +
                             plVar8[-4],*(int *)((int64_t)plVar8 + -0x2c),lVar9);
                  uVar6 = (int)uVar7 + 1;
                  uVar7 = (uint64_t)uVar6;
                  uVar13 = uVar13 + 8;
                } while ((int)uVar6 < iVar12);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar10);
          }
          iVar11 = iVar11 + 1;
          plVar8 = plVar8 + 0xc;
        } while (iVar11 < *(int *)(*param_1 + 8));
      }
      return 1;
    }
    if (cVar3 == -0x26) {
      iVar4 = function_4226f0(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = function_4215a0(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      if ((char)param_1[0x905] == -1) {
LAB_1804231e0:
        do {
          lVar9 = *param_1;
          if (*(int64_t *)(lVar9 + 0x10) == 0) {
LAB_180423201:
            if (*(uint64_t *)(lVar9 + 0xc0) <= *(uint64_t *)(lVar9 + 0xb8)) goto LAB_180423316;
          }
          else {
            iVar4 = (**(code **)(lVar9 + 0x20))(*(uint64_t *)(lVar9 + 0x28));
            if (iVar4 != 0) {
              if (*(int *)(lVar9 + 0x30) != 0) goto LAB_180423201;
              goto LAB_180423316;
            }
          }
          lVar9 = *param_1;
          pcVar5 = *(char **)(lVar9 + 0xb8);
          if (*(char **)(lVar9 + 0xc0) <= pcVar5) {
            if (*(int *)(lVar9 + 0x30) == 0) goto LAB_1804231e0;
            puVar1 = (int8_t *)(lVar9 + 0x38);
            iVar4 = (**(code **)(lVar9 + 0x10))
                              (*(uint64_t *)(lVar9 + 0x28),puVar1,*(int32_t *)(lVar9 + 0x34));
            *(int8_t **)(lVar9 + 0xb8) = puVar1;
            if (iVar4 == 0) {
              *(int32_t *)(lVar9 + 0x30) = 0;
              *(int64_t *)(lVar9 + 0xc0) = lVar9 + 0x39;
              *puVar1 = 0;
            }
            else {
              *(int64_t *)(lVar9 + 0xc0) = lVar9 + 0x38 + (int64_t)iVar4;
            }
            pcVar5 = *(char **)(lVar9 + 0xb8);
          }
          cVar3 = *pcVar5;
          *(char **)(lVar9 + 0xb8) = pcVar5 + 1;
        } while (cVar3 != -1);
        lVar9 = *param_1;
        puVar1 = *(int8_t **)(lVar9 + 0xb8);
        if (puVar1 < *(int8_t **)(lVar9 + 0xc0)) {
          uVar2 = *puVar1;
          *(int8_t **)(lVar9 + 0xb8) = puVar1 + 1;
          *(int8_t *)(param_1 + 0x905) = uVar2;
        }
        else if (*(int *)(lVar9 + 0x30) == 0) {
          *(int8_t *)(param_1 + 0x905) = 0;
        }
        else {
          RenderingGeometryProcessor0(lVar9);
          uVar2 = **(int8_t **)(lVar9 + 0xb8);
          *(int8_t **)(lVar9 + 0xb8) = *(int8_t **)(lVar9 + 0xb8) + 1;
          *(int8_t *)(param_1 + 0x905) = uVar2;
        }
      }
    }
    else if (cVar3 == -0x24) {
      RenderingSystem_Renderer(*param_1);
      RenderingSystem_Renderer(*param_1);
    }
    else {
      iVar4 = function_422040(param_1,cVar3);
      if (iVar4 == 0) {
        return 0;
      }
    }
LAB_180423316:
    cVar3 = function_4214d0(param_1);
  } while( true );
}
uint64_t function_42333c(void)
{
  int64_t in_RAX;
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *unaff_RSI;
  int64_t *plVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t unaff_R15;
  uVar8 = unaff_R15 & 0xffffffff;
  if ((int)unaff_R15 < *(int *)(in_RAX + 8)) {
    plVar5 = unaff_RSI + 0x8de;
    do {
      uVar2 = unaff_R15 & 0xffffffff;
      iVar9 = *(int *)((int64_t)plVar5 + -0x34) + 7 >> 3;
      iVar7 = (int)plVar5[-6] + 7 >> 3;
      if (0 < iVar7) {
        do {
          uVar4 = unaff_R15 & 0xffffffff;
          iVar1 = (int)uVar2;
          if (0 < iVar9) {
            do {
              lVar6 = *plVar5 + (int64_t)(((int)plVar5[1] * iVar1 + (int)uVar4) * 0x40) * 2;
              SystemFunction_000180421dc0(lVar6,unaff_RSI +
                                        (int64_t)*(int *)((int64_t)plVar5 + -0x44) * 0x10 + 0x691)
              ;
              (*(code *)unaff_RSI[0x90e])
                        ((int64_t)(*(int *)((int64_t)plVar5 + -0x2c) * iVar1 * 8) + unaff_R15 +
                         plVar5[-4],*(int *)((int64_t)plVar5 + -0x2c),lVar6);
              uVar3 = (int)uVar4 + 1;
              uVar4 = (uint64_t)uVar3;
              unaff_R15 = unaff_R15 + 8;
            } while ((int)uVar3 < iVar9);
            unaff_R15 = 0;
          }
          uVar2 = (uint64_t)(iVar1 + 1U);
        } while ((int)(iVar1 + 1U) < iVar7);
      }
      uVar3 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar3;
      plVar5 = plVar5 + 0xc;
    } while ((int)uVar3 < *(int *)(*unaff_RSI + 8));
  }
  return 1;
}
uint64_t function_42334e(void)
{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *unaff_RSI;
  int64_t *plVar5;
  int64_t lVar6;
  int iVar7;
  int unaff_R13D;
  int iVar8;
  uint64_t unaff_R15;
  plVar5 = unaff_RSI + 0x8de;
  do {
    uVar2 = unaff_R15 & 0xffffffff;
    iVar8 = *(int *)((int64_t)plVar5 + -0x34) + 7 >> 3;
    iVar7 = (int)plVar5[-6] + 7 >> 3;
    if (0 < iVar7) {
      do {
        uVar4 = unaff_R15 & 0xffffffff;
        iVar1 = (int)uVar2;
        if (0 < iVar8) {
          do {
            lVar6 = *plVar5 + (int64_t)(((int)plVar5[1] * iVar1 + (int)uVar4) * 0x40) * 2;
            SystemFunction_000180421dc0(lVar6,unaff_RSI +
                                      (int64_t)*(int *)((int64_t)plVar5 + -0x44) * 0x10 + 0x691);
            (*(code *)unaff_RSI[0x90e])
                      ((int64_t)(*(int *)((int64_t)plVar5 + -0x2c) * iVar1 * 8) + unaff_R15 +
                       plVar5[-4],*(int *)((int64_t)plVar5 + -0x2c),lVar6);
            uVar3 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar3;
            unaff_R15 = unaff_R15 + 8;
          } while ((int)uVar3 < iVar8);
          unaff_R15 = 0;
        }
        uVar2 = (uint64_t)(iVar1 + 1U);
      } while ((int)(iVar1 + 1U) < iVar7);
    }
    unaff_R13D = unaff_R13D + 1;
    plVar5 = plVar5 + 0xc;
  } while (unaff_R13D < *(int *)(*unaff_RSI + 8));
  return 1;
}
uint64_t function_423425(void)
{
  return 1;
}
uint8_t system_data_f760;
uint8_t system_data_f910;
uint8_t system_data_0580;
uint8_t system_data_f980;
uint8_t system_data_06f0;
uint8_t system_data_0710;
uint8_t system_data_f990;