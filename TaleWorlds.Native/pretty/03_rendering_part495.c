#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part495.c - 7 个函数
// 函数: void function_531050(int64_t param_1,int param_2,int param_3)
void function_531050(int64_t param_1,int param_2,int param_3)
{
  ushort *puVar1;
  int iVar2;
  int32_t uVar3;
  uint uVar4;
  int64_t lVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  int64_t lVar14;
  byte bVar15;
  int8_t astack_special_x_10 [16];
  int64_t lStackX_20;
  iVar12 = param_3;
  if (param_2 != 1) {
    iVar12 = *(int *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4);
  }
  if (-1 < iVar12) {
    bVar15 = (byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1;
    if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x560);
    }
    lVar9 = (int64_t)iVar2 * 0xa60 + *(int64_t *)(param_1 + 0x8d8);
    lStackX_20 = *(int64_t *)(lVar9 + 0x3998);
    lVar14 = (int64_t)iVar12 * 0x1f8 + lStackX_20;
    lVar5 = *(int64_t *)(lVar14 + 0xd8);
    lVar11 = (int64_t)*(int *)(lVar14 + 0xf8) * 0xa0;
    bVar7 = *(byte *)((int64_t)*(int *)(lVar11 + 100 + lVar5) * 0x170 + 0x140 + render_system_config);
    if ((*(int *)(lVar11 + 0x5c + lVar5) == 0xf) && ((*(uint *)(param_1 + 0x56c) & 0x1000000) != 0))
    {
      bVar7 = bVar7 & 0xfd;
    }
    if (bVar15 == 0) {
      bVar6 = bVar7 & 1;
    }
    else {
      bVar6 = bVar7 & 2;
    }
    if ((bVar6 != 0) || ((bVar7 & 8) != 0)) {
      iVar13 = 0;
      iVar2 = (int)((*(int64_t *)(lVar14 + 0xe0) - lVar5) / 0xa0);
      if (0 < iVar2) {
        do {
          iVar10 = (int)((int64_t)iVar13 % (int64_t)iVar2);
          bVar7 = *(byte *)((int64_t)*(int *)((int64_t)iVar10 * 0xa0 + 100 + lVar5) * 0x170 +
                            0x140 + render_system_config);
          if ((bVar7 & 0x10) == 0) {
            if (bVar15 == 0) {
              if ((bVar7 & 1) == 0) goto LAB_1805311e8;
            }
            else if (((bVar7 & 2) == 0) ||
                    ((*(int *)((int64_t)iVar10 * 0xa0 + 0x5c + lVar5) == 0xf &&
                     ((*(uint *)(param_1 + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_1805311e8:
              if ((bVar7 & 8) == 0) {
                if (-1 < iVar10) {
                  if ((iVar10 != *(int *)(lVar14 + 0xf8)) &&
                     (function_537bd0(lStackX_20,iVar12,
                                    (int64_t)iVar13 % (int64_t)iVar2 & 0xffffffff,astack_special_x_10),
                     *(int *)(param_1 + 0x570) == 1)) {
                    puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
                    *puVar1 = *puVar1 | 0x20;
                  }
                  goto label_531291;
                }
                break;
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar2);
      }
      uVar3 = *(int32_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4);
      cVar8 = function_531480(param_1,uVar3);
      if (cVar8 == '\0') {
        function_50bb10(lVar9 + 0x30a0,1,0xffffffff,1,0);
      }
      else {
        function_50c740(param_1,uVar3,8);
      }
    }
  }
label_531291:
  if (param_2 != 0) {
    param_3 = *(int *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e0);
  }
  if (-1 < param_3) {
    uVar4 = *(uint *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4);
    PerformanceMonitor_Profiler(param_1,param_3,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,uVar4 >> 0x1f ^ 1,
                  (byte)(uVar4 >> 0x1f),0,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_531057(int64_t param_1,int param_2,int param_3)
void function_531057(int64_t param_1,int param_2,int param_3)
{
  ushort *puVar1;
  int iVar2;
  int32_t uVar3;
  uint uVar4;
  int64_t lVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  int64_t lVar14;
  byte bVar15;
  int64_t local_var_a8;
  iVar12 = param_3;
  if (param_2 != 1) {
    iVar12 = *(int *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4);
  }
  if (-1 < iVar12) {
    bVar15 = (byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1;
    if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x560);
    }
    lVar9 = (int64_t)iVar2 * 0xa60 + *(int64_t *)(param_1 + 0x8d8);
    local_var_a8 = *(int64_t *)(lVar9 + 0x3998);
    lVar14 = (int64_t)iVar12 * 0x1f8 + local_var_a8;
    lVar5 = *(int64_t *)(lVar14 + 0xd8);
    lVar11 = (int64_t)*(int *)(lVar14 + 0xf8) * 0xa0;
    bVar7 = *(byte *)((int64_t)*(int *)(lVar11 + 100 + lVar5) * 0x170 + 0x140 + render_system_config);
    if ((*(int *)(lVar11 + 0x5c + lVar5) == 0xf) && ((*(uint *)(param_1 + 0x56c) & 0x1000000) != 0))
    {
      bVar7 = bVar7 & 0xfd;
    }
    if (bVar15 == 0) {
      bVar6 = bVar7 & 1;
    }
    else {
      bVar6 = bVar7 & 2;
    }
    if ((bVar6 != 0) || ((bVar7 & 8) != 0)) {
      iVar13 = 0;
      iVar2 = (int)((*(int64_t *)(lVar14 + 0xe0) - lVar5) / 0xa0);
      if (0 < iVar2) {
        do {
          iVar10 = (int)((int64_t)iVar13 % (int64_t)iVar2);
          bVar7 = *(byte *)((int64_t)*(int *)((int64_t)iVar10 * 0xa0 + 100 + lVar5) * 0x170 +
                            0x140 + render_system_config);
          if ((bVar7 & 0x10) == 0) {
            if (bVar15 == 0) {
              if ((bVar7 & 1) == 0) goto LAB_1805311e8;
            }
            else if (((bVar7 & 2) == 0) ||
                    ((*(int *)((int64_t)iVar10 * 0xa0 + 0x5c + lVar5) == 0xf &&
                     ((*(uint *)(param_1 + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_1805311e8:
              if ((bVar7 & 8) == 0) {
                if (-1 < iVar10) {
                  if ((iVar10 != *(int *)(lVar14 + 0xf8)) &&
                     (function_537bd0(local_var_a8,iVar12,
                                    (int64_t)iVar13 % (int64_t)iVar2 & 0xffffffff,&local_buffer_00000098
                                   ), *(int *)(param_1 + 0x570) == 1)) {
                    puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
                    *puVar1 = *puVar1 | 0x20;
                  }
                  goto label_531291;
                }
                break;
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar2);
      }
      uVar3 = *(int32_t *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4);
      cVar8 = function_531480(param_1,uVar3);
      if (cVar8 == '\0') {
        function_50bb10(lVar9 + 0x30a0,1,0xffffffff,1,0);
      }
      else {
        function_50c740(param_1,uVar3,8);
      }
    }
  }
label_531291:
  if (param_2 != 0) {
    param_3 = *(int *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e0);
  }
  if (-1 < param_3) {
    uVar4 = *(uint *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4);
    PerformanceMonitor_Profiler(param_1,param_3,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,uVar4 >> 0x1f ^ 1,
                  (byte)(uVar4 >> 0x1f));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_531094(int64_t param_1)
void function_531094(int64_t param_1)
{
  ushort *puVar1;
  int iVar2;
  int64_t lVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int unaff_ESI;
  int unaff_EDI;
  int iVar9;
  int64_t lVar10;
  byte in_R10B;
  int unaff_R14D;
  int64_t lStack0000000000000040;
  int64_t lStack00000000000000a8;
  if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x560);
  }
  lStack0000000000000040 = (int64_t)iVar2 * 0xa60 + *(int64_t *)(unaff_RBX + 0x8d8);
  lStack00000000000000a8 = *(int64_t *)(lStack0000000000000040 + 0x3998);
  lStack0000000000000040 = lStack0000000000000040 + 0x30a0;
  lVar10 = (int64_t)unaff_EDI * 0x1f8 + lStack00000000000000a8;
  lVar3 = *(int64_t *)(lVar10 + 0xd8);
  lVar8 = (int64_t)*(int *)(lVar10 + 0xf8) * 0xa0;
  bVar5 = *(byte *)((int64_t)*(int *)(lVar8 + 100 + lVar3) * 0x170 + 0x140 + render_system_config);
  if ((*(int *)(lVar8 + 0x5c + lVar3) == 0xf) && ((*(uint *)(unaff_RBX + 0x56c) & 0x1000000) != 0))
  {
    bVar5 = bVar5 & 0xfd;
  }
  if ((in_R10B ^ 1) == 0) {
    bVar4 = bVar5 & 1;
  }
  else {
    bVar4 = bVar5 & 2;
  }
  if ((bVar4 != 0) || ((bVar5 & 8) != 0)) {
    iVar9 = 0;
    iVar2 = (int)((*(int64_t *)(lVar10 + 0xe0) - lVar3) / 0xa0);
    if (0 < iVar2) {
      do {
        iVar7 = (int)((int64_t)iVar9 % (int64_t)iVar2);
        bVar5 = *(byte *)((int64_t)*(int *)((int64_t)iVar7 * 0xa0 + 100 + lVar3) * 0x170 + 0x140 +
                         render_system_config);
        if ((bVar5 & 0x10) == 0) {
          if ((in_R10B ^ 1) == 0) {
            if ((bVar5 & 1) == 0) goto LAB_1805311e8;
          }
          else if (((bVar5 & 2) == 0) ||
                  ((*(int *)((int64_t)iVar7 * 0xa0 + 0x5c + lVar3) == 0xf &&
                   ((*(uint *)(unaff_RBX + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_1805311e8:
            if ((bVar5 & 8) == 0) {
              if (-1 < iVar7) {
                if ((iVar7 != *(int *)(lVar10 + 0xf8)) &&
                   (function_537bd0(lStack00000000000000a8,unaff_EDI,
                                  (int64_t)iVar9 % (int64_t)iVar2 & 0xffffffff,&local_buffer_00000098),
                   *(int *)(unaff_RBX + 0x570) == 1)) {
                  puVar1 = (ushort *)(*(int64_t *)(unaff_RBX + 0x6e0) + 0x130);
                  *puVar1 = *puVar1 | 0x20;
                }
                goto label_531282;
              }
              break;
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar2);
    }
    cVar6 = function_531480();
    if (cVar6 == '\0') {
      function_50bb10(lStack0000000000000040,1,0xffffffff,1,0);
    }
    else {
      function_50c740();
    }
  }
label_531282:
  if (unaff_R14D != 0) {
    unaff_ESI = *(int *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e0);
  }
  if (-1 < unaff_ESI) {
    PerformanceMonitor_Profiler();
  }
  return;
}
// 函数: void function_53116b(int64_t param_1)
void function_53116b(int64_t param_1)
{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  int64_t in_RAX;
  int iVar4;
  int64_t unaff_RBX;
  int unaff_ESI;
  int32_t unaff_EDI;
  int iVar5;
  char in_R10B;
  int iVar6;
  int64_t unaff_R12;
  int unaff_R13D;
  int unaff_R14D;
  int64_t unaff_R15;
  uint64_t local_var_40;
  uint64_t local_var_a8;
  iVar5 = 0;
  iVar6 = (int)(SUB168(SEXT816(in_RAX) * SEXT816(param_1),8) >> 6) -
          (SUB164(SEXT816(in_RAX) * SEXT816(param_1),0xc) >> 0x1f);
  if (0 < iVar6) {
    do {
      iVar4 = (int)((int64_t)iVar5 % (int64_t)iVar6);
      bVar2 = *(byte *)((int64_t)*(int *)((int64_t)iVar4 * 0xa0 + 100 + unaff_R15) * 0x170 + 0x140
                       + unaff_R12);
      if ((bVar2 & 0x10) == 0) {
        if (in_R10B == '\0') {
          if ((bVar2 & 1) == 0) goto LAB_1805311e8;
        }
        else if (((bVar2 & 2) == 0) ||
                ((*(int *)((int64_t)iVar4 * 0xa0 + 0x5c + unaff_R15) == 0xf &&
                 ((*(uint *)(unaff_RBX + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_1805311e8:
          if ((bVar2 & 8) == 0) {
            if (-1 < iVar4) {
              if ((iVar4 != unaff_R13D) &&
                 (function_537bd0(local_var_a8,unaff_EDI,
                                (int64_t)iVar5 % (int64_t)iVar6 & 0xffffffff,&local_buffer_00000098),
                 *(int *)(unaff_RBX + 0x570) == 1)) {
                puVar1 = (ushort *)(*(int64_t *)(unaff_RBX + 0x6e0) + 0x130);
                *puVar1 = *puVar1 | 0x20;
              }
              goto LAB_18053127a;
            }
            break;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  cVar3 = function_531480();
  if (cVar3 == '\0') {
    function_50bb10(local_var_40,1,0xffffffff,1,0);
  }
  else {
    function_50c740();
  }
LAB_18053127a:
  if (unaff_R14D != 0) {
    unaff_ESI = *(int *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e0);
  }
  if (-1 < unaff_ESI) {
    PerformanceMonitor_Profiler();
  }
  return;
}
// 函数: void function_531282(void)
void function_531282(void)
{
  int64_t unaff_RBX;
  int unaff_ESI;
  int unaff_R14D;
  int32_t local_var_28;
  int8_t local_var_30;
  if (unaff_R14D != 0) {
    unaff_ESI = *(int *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e0);
  }
  if (-1 < unaff_ESI) {
    local_var_30 = 0;
    local_var_28 = 0;
    PerformanceMonitor_Profiler();
  }
  return;
}
// 函数: void function_531291(void)
void function_531291(void)
{
  int64_t unaff_RBX;
  int unaff_ESI;
  int unaff_R14D;
  int32_t local_var_28;
  int8_t local_var_30;
  if (unaff_R14D != 0) {
    unaff_ESI = *(int *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e0);
  }
  if (-1 < unaff_ESI) {
    local_var_30 = 0;
    local_var_28 = 0;
    PerformanceMonitor_Profiler();
  }
  return;
}
// 函数: void function_5312a0(void)
void function_5312a0(void)
{
  int64_t unaff_RBX;
  int32_t local_var_28;
  int8_t local_var_30;
  if (-1 < *(int *)(*(int64_t *)(unaff_RBX + 0x8f8) + 0x9e0)) {
    local_var_30 = 0;
    local_var_28 = 0;
    PerformanceMonitor_Profiler();
  }
  return;
}