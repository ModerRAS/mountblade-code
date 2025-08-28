#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part495.c - 7 个函数

// 函数: void FUN_180531050(longlong param_1,int param_2,int param_3)
void FUN_180531050(longlong param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int32_t uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  int8_t auStackX_10 [16];
  longlong lStackX_20;
  
  iVar12 = param_3;
  if (param_2 != 1) {
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
  }
  if (-1 < iVar12) {
    bVar15 = (byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1;
    if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x560);
    }
    lVar9 = (longlong)iVar2 * 0xa60 + *(longlong *)(param_1 + 0x8d8);
    lStackX_20 = *(longlong *)(lVar9 + 0x3998);
    lVar14 = (longlong)iVar12 * 0x1f8 + lStackX_20;
    lVar5 = *(longlong *)(lVar14 + 0xd8);
    lVar11 = (longlong)*(int *)(lVar14 + 0xf8) * 0xa0;
    bVar7 = *(byte *)((longlong)*(int *)(lVar11 + 100 + lVar5) * 0x170 + 0x140 + render_system_config);
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
      iVar2 = (int)((*(longlong *)(lVar14 + 0xe0) - lVar5) / 0xa0);
      if (0 < iVar2) {
        do {
          iVar10 = (int)((longlong)iVar13 % (longlong)iVar2);
          bVar7 = *(byte *)((longlong)*(int *)((longlong)iVar10 * 0xa0 + 100 + lVar5) * 0x170 +
                            0x140 + render_system_config);
          if ((bVar7 & 0x10) == 0) {
            if (bVar15 == 0) {
              if ((bVar7 & 1) == 0) goto LAB_1805311e8;
            }
            else if (((bVar7 & 2) == 0) ||
                    ((*(int *)((longlong)iVar10 * 0xa0 + 0x5c + lVar5) == 0xf &&
                     ((*(uint *)(param_1 + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_1805311e8:
              if ((bVar7 & 8) == 0) {
                if (-1 < iVar10) {
                  if ((iVar10 != *(int *)(lVar14 + 0xf8)) &&
                     (FUN_180537bd0(lStackX_20,iVar12,
                                    (longlong)iVar13 % (longlong)iVar2 & 0xffffffff,auStackX_10),
                     *(int *)(param_1 + 0x570) == 1)) {
                    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
                    *puVar1 = *puVar1 | 0x20;
                  }
                  goto FUN_180531291;
                }
                break;
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar2);
      }
      uVar3 = *(int32_t *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
      cVar8 = FUN_180531480(param_1,uVar3);
      if (cVar8 == '\0') {
        FUN_18050bb10(lVar9 + 0x30a0,1,0xffffffff,1,0);
      }
      else {
        FUN_18050c740(param_1,uVar3,8);
      }
    }
  }
FUN_180531291:
  if (param_2 != 0) {
    param_3 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0);
  }
  if (-1 < param_3) {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
    FUN_180531300(param_1,param_3,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,uVar4 >> 0x1f ^ 1,
                  (byte)(uVar4 >> 0x1f),0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180531057(longlong param_1,int param_2,int param_3)
void FUN_180531057(longlong param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int32_t uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  longlong in_stack_000000a8;
  
  iVar12 = param_3;
  if (param_2 != 1) {
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
  }
  if (-1 < iVar12) {
    bVar15 = (byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1;
    if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x560);
    }
    lVar9 = (longlong)iVar2 * 0xa60 + *(longlong *)(param_1 + 0x8d8);
    in_stack_000000a8 = *(longlong *)(lVar9 + 0x3998);
    lVar14 = (longlong)iVar12 * 0x1f8 + in_stack_000000a8;
    lVar5 = *(longlong *)(lVar14 + 0xd8);
    lVar11 = (longlong)*(int *)(lVar14 + 0xf8) * 0xa0;
    bVar7 = *(byte *)((longlong)*(int *)(lVar11 + 100 + lVar5) * 0x170 + 0x140 + render_system_config);
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
      iVar2 = (int)((*(longlong *)(lVar14 + 0xe0) - lVar5) / 0xa0);
      if (0 < iVar2) {
        do {
          iVar10 = (int)((longlong)iVar13 % (longlong)iVar2);
          bVar7 = *(byte *)((longlong)*(int *)((longlong)iVar10 * 0xa0 + 100 + lVar5) * 0x170 +
                            0x140 + render_system_config);
          if ((bVar7 & 0x10) == 0) {
            if (bVar15 == 0) {
              if ((bVar7 & 1) == 0) goto LAB_1805311e8;
            }
            else if (((bVar7 & 2) == 0) ||
                    ((*(int *)((longlong)iVar10 * 0xa0 + 0x5c + lVar5) == 0xf &&
                     ((*(uint *)(param_1 + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_1805311e8:
              if ((bVar7 & 8) == 0) {
                if (-1 < iVar10) {
                  if ((iVar10 != *(int *)(lVar14 + 0xf8)) &&
                     (FUN_180537bd0(in_stack_000000a8,iVar12,
                                    (longlong)iVar13 % (longlong)iVar2 & 0xffffffff,&stack0x00000098
                                   ), *(int *)(param_1 + 0x570) == 1)) {
                    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
                    *puVar1 = *puVar1 | 0x20;
                  }
                  goto FUN_180531291;
                }
                break;
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar2);
      }
      uVar3 = *(int32_t *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
      cVar8 = FUN_180531480(param_1,uVar3);
      if (cVar8 == '\0') {
        FUN_18050bb10(lVar9 + 0x30a0,1,0xffffffff,1,0);
      }
      else {
        FUN_18050c740(param_1,uVar3,8);
      }
    }
  }
FUN_180531291:
  if (param_2 != 0) {
    param_3 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0);
  }
  if (-1 < param_3) {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4);
    FUN_180531300(param_1,param_3,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,uVar4 >> 0x1f ^ 1,
                  (byte)(uVar4 >> 0x1f));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180531094(longlong param_1)
void FUN_180531094(longlong param_1)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong unaff_RBX;
  int unaff_ESI;
  int unaff_EDI;
  int iVar9;
  longlong lVar10;
  byte in_R10B;
  int unaff_R14D;
  longlong lStack0000000000000040;
  longlong lStack00000000000000a8;
  
  if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x560);
  }
  lStack0000000000000040 = (longlong)iVar2 * 0xa60 + *(longlong *)(unaff_RBX + 0x8d8);
  lStack00000000000000a8 = *(longlong *)(lStack0000000000000040 + 0x3998);
  lStack0000000000000040 = lStack0000000000000040 + 0x30a0;
  lVar10 = (longlong)unaff_EDI * 0x1f8 + lStack00000000000000a8;
  lVar3 = *(longlong *)(lVar10 + 0xd8);
  lVar8 = (longlong)*(int *)(lVar10 + 0xf8) * 0xa0;
  bVar5 = *(byte *)((longlong)*(int *)(lVar8 + 100 + lVar3) * 0x170 + 0x140 + render_system_config);
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
    iVar2 = (int)((*(longlong *)(lVar10 + 0xe0) - lVar3) / 0xa0);
    if (0 < iVar2) {
      do {
        iVar7 = (int)((longlong)iVar9 % (longlong)iVar2);
        bVar5 = *(byte *)((longlong)*(int *)((longlong)iVar7 * 0xa0 + 100 + lVar3) * 0x170 + 0x140 +
                         render_system_config);
        if ((bVar5 & 0x10) == 0) {
          if ((in_R10B ^ 1) == 0) {
            if ((bVar5 & 1) == 0) goto LAB_1805311e8;
          }
          else if (((bVar5 & 2) == 0) ||
                  ((*(int *)((longlong)iVar7 * 0xa0 + 0x5c + lVar3) == 0xf &&
                   ((*(uint *)(unaff_RBX + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_1805311e8:
            if ((bVar5 & 8) == 0) {
              if (-1 < iVar7) {
                if ((iVar7 != *(int *)(lVar10 + 0xf8)) &&
                   (FUN_180537bd0(lStack00000000000000a8,unaff_EDI,
                                  (longlong)iVar9 % (longlong)iVar2 & 0xffffffff,&stack0x00000098),
                   *(int *)(unaff_RBX + 0x570) == 1)) {
                  puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x6e0) + 0x130);
                  *puVar1 = *puVar1 | 0x20;
                }
                goto FUN_180531282;
              }
              break;
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar2);
    }
    cVar6 = FUN_180531480();
    if (cVar6 == '\0') {
      FUN_18050bb10(lStack0000000000000040,1,0xffffffff,1,0);
    }
    else {
      FUN_18050c740();
    }
  }
FUN_180531282:
  if (unaff_R14D != 0) {
    unaff_ESI = *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0);
  }
  if (-1 < unaff_ESI) {
    FUN_180531300();
  }
  return;
}





// 函数: void FUN_18053116b(longlong param_1)
void FUN_18053116b(longlong param_1)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  longlong in_RAX;
  int iVar4;
  longlong unaff_RBX;
  int unaff_ESI;
  int32_t unaff_EDI;
  int iVar5;
  char in_R10B;
  int iVar6;
  longlong unaff_R12;
  int unaff_R13D;
  int unaff_R14D;
  longlong unaff_R15;
  uint64_t in_stack_00000040;
  uint64_t in_stack_000000a8;
  
  iVar5 = 0;
  iVar6 = (int)(SUB168(SEXT816(in_RAX) * SEXT816(param_1),8) >> 6) -
          (SUB164(SEXT816(in_RAX) * SEXT816(param_1),0xc) >> 0x1f);
  if (0 < iVar6) {
    do {
      iVar4 = (int)((longlong)iVar5 % (longlong)iVar6);
      bVar2 = *(byte *)((longlong)*(int *)((longlong)iVar4 * 0xa0 + 100 + unaff_R15) * 0x170 + 0x140
                       + unaff_R12);
      if ((bVar2 & 0x10) == 0) {
        if (in_R10B == '\0') {
          if ((bVar2 & 1) == 0) goto LAB_1805311e8;
        }
        else if (((bVar2 & 2) == 0) ||
                ((*(int *)((longlong)iVar4 * 0xa0 + 0x5c + unaff_R15) == 0xf &&
                 ((*(uint *)(unaff_RBX + 0x56c) >> 0x18 & 1) != 0)))) {
LAB_1805311e8:
          if ((bVar2 & 8) == 0) {
            if (-1 < iVar4) {
              if ((iVar4 != unaff_R13D) &&
                 (FUN_180537bd0(in_stack_000000a8,unaff_EDI,
                                (longlong)iVar5 % (longlong)iVar6 & 0xffffffff,&stack0x00000098),
                 *(int *)(unaff_RBX + 0x570) == 1)) {
                puVar1 = (ushort *)(*(longlong *)(unaff_RBX + 0x6e0) + 0x130);
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
  cVar3 = FUN_180531480();
  if (cVar3 == '\0') {
    FUN_18050bb10(in_stack_00000040,1,0xffffffff,1,0);
  }
  else {
    FUN_18050c740();
  }
LAB_18053127a:
  if (unaff_R14D != 0) {
    unaff_ESI = *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0);
  }
  if (-1 < unaff_ESI) {
    FUN_180531300();
  }
  return;
}





// 函数: void FUN_180531282(void)
void FUN_180531282(void)

{
  longlong unaff_RBX;
  int unaff_ESI;
  int unaff_R14D;
  int32_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  if (unaff_R14D != 0) {
    unaff_ESI = *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0);
  }
  if (-1 < unaff_ESI) {
    uStack0000000000000030 = 0;
    uStack0000000000000028 = 0;
    FUN_180531300();
  }
  return;
}





// 函数: void FUN_180531291(void)
void FUN_180531291(void)

{
  longlong unaff_RBX;
  int unaff_ESI;
  int unaff_R14D;
  int32_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  if (unaff_R14D != 0) {
    unaff_ESI = *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0);
  }
  if (-1 < unaff_ESI) {
    uStack0000000000000030 = 0;
    uStack0000000000000028 = 0;
    FUN_180531300();
  }
  return;
}





// 函数: void FUN_1805312a0(void)
void FUN_1805312a0(void)

{
  longlong unaff_RBX;
  int32_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  if (-1 < *(int *)(*(longlong *)(unaff_RBX + 0x8f8) + 0x9e0)) {
    uStack0000000000000030 = 0;
    uStack0000000000000028 = 0;
    FUN_180531300();
  }
  return;
}





