#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part029.c - 8 个函数

// 函数: void FUN_180074090(longlong *param_1,longlong param_2)
void FUN_180074090(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  
  uVar3 = **(uint **)(param_2 + 8);
  puVar9 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar9;
  if (uVar3 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,puVar9,uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    puVar9 = *(uint **)(param_2 + 8);
  }
  lVar8 = (longlong)(int)*puVar9;
  *(uint **)(param_2 + 8) = puVar9 + 1;
  plVar1 = param_1 + 4;
  FUN_180074b30(plVar1,lVar8);
  lVar5 = *(longlong *)(param_2 + 8);
  lVar7 = 0;
  lVar11 = lVar7;
  if (0 < lVar8) {
    do {
      lVar10 = *plVar1;
      *(int **)(param_2 + 8) = (int *)(lVar5 + 8);
      iVar4 = *(int *)(lVar5 + 8);
      plVar12 = (longlong *)(lVar10 + lVar11);
      *(longlong *)(param_2 + 8) = lVar5 + 0xc;
      if (0 < iVar4) {
        *(short *)(plVar12 + 2) = (short)iVar4;
        if (plVar12[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar12[1] = 0;
        if (*plVar12 == 0) {
          *plVar12 = 0;
          if ((ulonglong)*(ushort *)(plVar12 + 2) == 0) {
            uVar6 = 0;
            lVar5 = lVar7;
          }
          else {
            lVar5 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(plVar12 + 2) * 4,4);
            uVar6 = (ulonglong)*(ushort *)(plVar12 + 2);
          }
          plVar12[1] = lVar5;
          if (uVar6 != 0) {
            lVar7 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 4,4);
          }
          *plVar12 = lVar7;
                    // WARNING: Subroutine does not return
          memcpy(plVar12[1],*(uint64_t *)(param_2 + 8),(longlong)(iVar4 * 4));
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar10 = *plVar1;
      piVar2 = (int *)(lVar5 + 0x14);
      *(int **)(param_2 + 8) = piVar2;
      lVar5 = lVar5 + 0x18;
      iVar4 = *piVar2;
      lVar10 = lVar10 + lVar11;
      *(longlong *)(param_2 + 8) = lVar5;
      if (0 < iVar4) {
        *(short *)(lVar10 + 0x22) = (short)iVar4;
        if (*(longlong *)(lVar10 + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(lVar10 + 0x1a) = 0;
        if (*(longlong *)(lVar10 + 0x12) == 0) {
          *(uint64_t *)(lVar10 + 0x12) = 0;
          if ((ulonglong)*(ushort *)(lVar10 + 0x22) == 0) {
            uVar6 = 0;
            lVar5 = lVar7;
          }
          else {
            lVar5 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(lVar10 + 0x22) * 4,4);
            uVar6 = (ulonglong)*(ushort *)(lVar10 + 0x22);
          }
          *(longlong *)(lVar10 + 0x1a) = lVar5;
          if (uVar6 != 0) {
            lVar7 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 4,4);
          }
          *(longlong *)(lVar10 + 0x12) = lVar7;
                    // WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar10 + 0x1a),*(uint64_t *)(param_2 + 8),(longlong)(iVar4 * 4));
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar8 = lVar8 + -1;
      lVar11 = lVar11 + 0x24;
    } while (lVar8 != 0);
  }
  *(int **)(param_2 + 8) = (int *)(lVar5 + 8);
  iVar4 = *(int *)(lVar5 + 8);
  *(longlong *)(param_2 + 8) = lVar5 + 0xc;
  if (iVar4 < 1) {
    *(int **)(param_2 + 8) = (int *)(lVar5 + 0x14);
    iVar4 = *(int *)(lVar5 + 0x14);
    *(longlong *)(param_2 + 8) = lVar5 + 0x18;
    if (iVar4 < 1) {
      return;
    }
    *(short *)((longlong)param_1 + 0x62) = (short)iVar4;
    if (*(longlong *)((longlong)param_1 + 0x5a) == 0) {
      *(uint64_t *)((longlong)param_1 + 0x5a) = 0;
      if (*(longlong *)((longlong)param_1 + 0x52) == 0) {
        *(uint64_t *)((longlong)param_1 + 0x52) = 0;
        if ((ulonglong)*(ushort *)((longlong)param_1 + 0x62) == 0) {
          uVar6 = 0;
          lVar5 = lVar7;
        }
        else {
          lVar5 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)((longlong)param_1 + 0x62) * 4,
                                4);
          uVar6 = (ulonglong)*(ushort *)((longlong)param_1 + 0x62);
        }
        *(longlong *)((longlong)param_1 + 0x5a) = lVar5;
        if (uVar6 != 0) {
          lVar7 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 4,4);
        }
        *(longlong *)((longlong)param_1 + 0x52) = lVar7;
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)((longlong)param_1 + 0x5a),*(uint64_t *)(param_2 + 8),
               (longlong)(iVar4 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(short *)(param_1 + 10) = (short)iVar4;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  if (param_1[8] == 0) {
    param_1[8] = 0;
    if ((ulonglong)*(ushort *)(param_1 + 10) == 0) {
      uVar6 = 0;
      lVar5 = lVar7;
    }
    else {
      lVar5 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(param_1 + 10) * 4,4);
      uVar6 = (ulonglong)*(ushort *)(param_1 + 10);
    }
    param_1[9] = lVar5;
    if (uVar6 != 0) {
      lVar7 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 4,4);
    }
    param_1[8] = lVar7;
                    // WARNING: Subroutine does not return
    memcpy(param_1[9],*(uint64_t *)(param_2 + 8),(longlong)(iVar4 * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800740a2(longlong *param_1)
void FUN_1800740a2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  longlong unaff_RDI;
  longlong lVar11;
  longlong *plVar12;
  
  uVar3 = *in_RAX;
  puVar9 = in_RAX + 1;
  *(uint **)(unaff_RDI + 8) = puVar9;
  if (uVar3 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,puVar9,uVar3);
    *(longlong *)(unaff_RDI + 8) = *(longlong *)(unaff_RDI + 8) + (ulonglong)uVar3;
    puVar9 = *(uint **)(unaff_RDI + 8);
  }
  lVar8 = (longlong)(int)*puVar9;
  *(uint **)(unaff_RDI + 8) = puVar9 + 1;
  plVar1 = param_1 + 4;
  FUN_180074b30(plVar1,lVar8);
  lVar5 = *(longlong *)(unaff_RDI + 8);
  lVar7 = 0;
  lVar11 = lVar7;
  if (0 < lVar8) {
    do {
      lVar10 = *plVar1;
      *(int **)(unaff_RDI + 8) = (int *)(lVar5 + 8);
      iVar4 = *(int *)(lVar5 + 8);
      plVar12 = (longlong *)(lVar10 + lVar11);
      *(longlong *)(unaff_RDI + 8) = lVar5 + 0xc;
      if (0 < iVar4) {
        *(short *)(plVar12 + 2) = (short)iVar4;
        if (plVar12[1] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar12[1] = 0;
        if (*plVar12 == 0) {
          *plVar12 = 0;
          if ((ulonglong)*(ushort *)(plVar12 + 2) == 0) {
            uVar6 = 0;
            lVar5 = lVar7;
          }
          else {
            lVar5 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(plVar12 + 2) * 4,4);
            uVar6 = (ulonglong)*(ushort *)(plVar12 + 2);
          }
          plVar12[1] = lVar5;
          if (uVar6 != 0) {
            lVar7 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 4,4);
          }
          *plVar12 = lVar7;
                    // WARNING: Subroutine does not return
          memcpy(plVar12[1],*(uint64_t *)(unaff_RDI + 8),(longlong)(iVar4 * 4));
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar10 = *plVar1;
      piVar2 = (int *)(lVar5 + 0x14);
      *(int **)(unaff_RDI + 8) = piVar2;
      lVar5 = lVar5 + 0x18;
      iVar4 = *piVar2;
      lVar10 = lVar10 + lVar11;
      *(longlong *)(unaff_RDI + 8) = lVar5;
      if (0 < iVar4) {
        *(short *)(lVar10 + 0x22) = (short)iVar4;
        if (*(longlong *)(lVar10 + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(lVar10 + 0x1a) = 0;
        if (*(longlong *)(lVar10 + 0x12) == 0) {
          *(uint64_t *)(lVar10 + 0x12) = 0;
          if ((ulonglong)*(ushort *)(lVar10 + 0x22) == 0) {
            uVar6 = 0;
            lVar5 = lVar7;
          }
          else {
            lVar5 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(lVar10 + 0x22) * 4,4);
            uVar6 = (ulonglong)*(ushort *)(lVar10 + 0x22);
          }
          *(longlong *)(lVar10 + 0x1a) = lVar5;
          if (uVar6 != 0) {
            lVar7 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 4,4);
          }
          *(longlong *)(lVar10 + 0x12) = lVar7;
                    // WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar10 + 0x1a),*(uint64_t *)(unaff_RDI + 8),(longlong)(iVar4 * 4)
                );
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar8 = lVar8 + -1;
      lVar11 = lVar11 + 0x24;
    } while (lVar8 != 0);
  }
  *(int **)(unaff_RDI + 8) = (int *)(lVar5 + 8);
  iVar4 = *(int *)(lVar5 + 8);
  *(longlong *)(unaff_RDI + 8) = lVar5 + 0xc;
  if (iVar4 < 1) {
    *(int **)(unaff_RDI + 8) = (int *)(lVar5 + 0x14);
    iVar4 = *(int *)(lVar5 + 0x14);
    *(longlong *)(unaff_RDI + 8) = lVar5 + 0x18;
    if (iVar4 < 1) {
      return;
    }
    *(short *)((longlong)param_1 + 0x62) = (short)iVar4;
    if (*(longlong *)((longlong)param_1 + 0x5a) == 0) {
      *(uint64_t *)((longlong)param_1 + 0x5a) = 0;
      if (*(longlong *)((longlong)param_1 + 0x52) == 0) {
        *(uint64_t *)((longlong)param_1 + 0x52) = 0;
        if ((ulonglong)*(ushort *)((longlong)param_1 + 0x62) == 0) {
          uVar6 = 0;
          lVar5 = lVar7;
        }
        else {
          lVar5 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)((longlong)param_1 + 0x62) * 4,
                                4);
          uVar6 = (ulonglong)*(ushort *)((longlong)param_1 + 0x62);
        }
        *(longlong *)((longlong)param_1 + 0x5a) = lVar5;
        if (uVar6 != 0) {
          lVar7 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 4,4);
        }
        *(longlong *)((longlong)param_1 + 0x52) = lVar7;
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)((longlong)param_1 + 0x5a),*(uint64_t *)(unaff_RDI + 8),
               (longlong)(iVar4 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(short *)(param_1 + 10) = (short)iVar4;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  if (param_1[8] == 0) {
    param_1[8] = 0;
    if ((ulonglong)*(ushort *)(param_1 + 10) == 0) {
      uVar6 = 0;
      lVar5 = lVar7;
    }
    else {
      lVar5 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(param_1 + 10) * 4,4);
      uVar6 = (ulonglong)*(ushort *)(param_1 + 10);
    }
    param_1[9] = lVar5;
    if (uVar6 != 0) {
      lVar7 = FUN_18062b420(system_memory_pool_ptr,uVar6 << 4,4);
    }
    param_1[8] = lVar7;
                    // WARNING: Subroutine does not return
    memcpy(param_1[9],*(uint64_t *)(unaff_RDI + 8),(longlong)(iVar4 * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800740f5(longlong param_1)
void FUN_1800740f5(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  longlong lVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong unaff_R13;
  ulonglong *puVar6;
  longlong unaff_R15;
  
  uVar5 = unaff_RSI & 0xffffffff;
  do {
    lVar3 = param_1;
    lVar4 = *unaff_RBX;
    *(int **)(unaff_RDI + 8) = (int *)(lVar3 + 8);
    iVar1 = *(int *)(lVar3 + 8);
    puVar6 = (ulonglong *)(lVar4 + uVar5);
    *(longlong *)(unaff_RDI + 8) = lVar3 + 0xc;
    if (0 < iVar1) {
      *(short *)(puVar6 + 2) = (short)iVar1;
      if (puVar6[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar6[1] = unaff_RSI;
      if (*puVar6 == 0) {
        *puVar6 = unaff_RSI;
        if ((ulonglong)(ushort)puVar6[2] == 0) {
          uVar5 = 0;
          uVar2 = unaff_RSI;
        }
        else {
          uVar2 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)(ushort)puVar6[2] * 4,4);
          uVar5 = (ulonglong)(ushort)puVar6[2];
        }
        puVar6[1] = uVar2;
        if (uVar5 != 0) {
          unaff_RSI = FUN_18062b420(system_memory_pool_ptr,uVar5 << 4,4);
        }
        *puVar6 = unaff_RSI;
                    // WARNING: Subroutine does not return
        memcpy(puVar6[1],*(uint64_t *)(unaff_RDI + 8),(longlong)(iVar1 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar4 = *unaff_RBX;
    *(int **)(unaff_RDI + 8) = (int *)(lVar3 + 0x14);
    iVar1 = *(int *)(lVar3 + 0x14);
    lVar4 = lVar4 + uVar5;
    *(longlong *)(unaff_RDI + 8) = lVar3 + 0x18;
    if (0 < iVar1) {
      *(short *)(lVar4 + 0x22) = (short)iVar1;
      if (*(longlong *)(lVar4 + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(ulonglong *)(lVar4 + 0x1a) = unaff_RSI;
      if (*(longlong *)(lVar4 + 0x12) == 0) {
        *(ulonglong *)(lVar4 + 0x12) = unaff_RSI;
        if ((ulonglong)*(ushort *)(lVar4 + 0x22) == 0) {
          uVar5 = 0;
          uVar2 = unaff_RSI;
        }
        else {
          uVar2 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(lVar4 + 0x22) * 4,4);
          uVar5 = (ulonglong)*(ushort *)(lVar4 + 0x22);
        }
        *(ulonglong *)(lVar4 + 0x1a) = uVar2;
        if (uVar5 != 0) {
          unaff_RSI = FUN_18062b420(system_memory_pool_ptr,uVar5 << 4,4);
        }
        *(ulonglong *)(lVar4 + 0x12) = unaff_RSI;
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar4 + 0x1a),*(uint64_t *)(unaff_RDI + 8),(longlong)(iVar1 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uVar5 = uVar5 + 0x24;
    unaff_R13 = unaff_R13 + -1;
    param_1 = lVar3 + 0x18;
  } while (unaff_R13 != 0);
  *(int **)(unaff_RDI + 8) = (int *)(lVar3 + 0x20);
  iVar1 = *(int *)(lVar3 + 0x20);
  *(longlong *)(unaff_RDI + 8) = lVar3 + 0x24;
  if (iVar1 < 1) {
    *(int **)(unaff_RDI + 8) = (int *)(lVar3 + 0x2c);
    iVar1 = *(int *)(lVar3 + 0x2c);
    *(longlong *)(unaff_RDI + 8) = lVar3 + 0x30;
    if (iVar1 < 1) {
      return;
    }
    *(short *)(unaff_R15 + 0x62) = (short)iVar1;
    if (*(longlong *)(unaff_R15 + 0x5a) == 0) {
      *(ulonglong *)(unaff_R15 + 0x5a) = unaff_RSI;
      if (*(longlong *)(unaff_R15 + 0x52) == 0) {
        *(ulonglong *)(unaff_R15 + 0x52) = unaff_RSI;
        if ((ulonglong)*(ushort *)(unaff_R15 + 0x62) == 0) {
          uVar5 = 0;
          uVar2 = unaff_RSI;
        }
        else {
          uVar2 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4,4);
          uVar5 = (ulonglong)*(ushort *)(unaff_R15 + 0x62);
        }
        *(ulonglong *)(unaff_R15 + 0x5a) = uVar2;
        if (uVar5 != 0) {
          unaff_RSI = FUN_18062b420(system_memory_pool_ptr,uVar5 << 4,4);
        }
        *(ulonglong *)(unaff_R15 + 0x52) = unaff_RSI;
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(unaff_R15 + 0x5a),*(uint64_t *)(unaff_RDI + 8),
               (longlong)(iVar1 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(short *)(unaff_R15 + 0x50) = (short)iVar1;
  if (*(longlong *)(unaff_R15 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(ulonglong *)(unaff_R15 + 0x48) = unaff_RSI;
  if (*(longlong *)(unaff_R15 + 0x40) == 0) {
    *(ulonglong *)(unaff_R15 + 0x40) = unaff_RSI;
    if ((ulonglong)*(ushort *)(unaff_R15 + 0x50) == 0) {
      uVar5 = 0;
      uVar2 = unaff_RSI;
    }
    else {
      uVar2 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4,4);
      uVar5 = (ulonglong)*(ushort *)(unaff_R15 + 0x50);
    }
    *(ulonglong *)(unaff_R15 + 0x48) = uVar2;
    if (uVar5 != 0) {
      unaff_RSI = FUN_18062b420(system_memory_pool_ptr,uVar5 << 4,4);
    }
    *(ulonglong *)(unaff_R15 + 0x40) = unaff_RSI;
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(unaff_R15 + 0x48),*(uint64_t *)(unaff_RDI + 8),(longlong)(iVar1 * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800742ea(longlong param_1)
void FUN_1800742ea(longlong param_1)

{
  int iVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  *(int **)(unaff_RDI + 8) = (int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 8);
  *(longlong *)(unaff_RDI + 8) = param_1 + 0xc;
  if (iVar1 < 1) {
    *(int **)(unaff_RDI + 8) = (int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x14);
    *(longlong *)(unaff_RDI + 8) = param_1 + 0x18;
    if (iVar1 < 1) {
      return;
    }
    *(short *)(unaff_R15 + 0x62) = (short)iVar1;
    if (*(longlong *)(unaff_R15 + 0x5a) == 0) {
      *(uint64_t *)(unaff_R15 + 0x5a) = unaff_RSI;
      if (*(longlong *)(unaff_R15 + 0x52) == 0) {
        *(uint64_t *)(unaff_R15 + 0x52) = unaff_RSI;
        if ((ulonglong)*(ushort *)(unaff_R15 + 0x62) == 0) {
          uVar3 = 0;
          uVar2 = unaff_RSI;
        }
        else {
          uVar2 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4,4);
          uVar3 = (ulonglong)*(ushort *)(unaff_R15 + 0x62);
        }
        *(uint64_t *)(unaff_R15 + 0x5a) = uVar2;
        if (uVar3 != 0) {
          unaff_RSI = FUN_18062b420(system_memory_pool_ptr,uVar3 << 4,4);
        }
        *(uint64_t *)(unaff_R15 + 0x52) = unaff_RSI;
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(unaff_R15 + 0x5a),*(uint64_t *)(unaff_RDI + 8),
               (longlong)(iVar1 * 4));
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(short *)(unaff_R15 + 0x50) = (short)iVar1;
  if (*(longlong *)(unaff_R15 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(unaff_R15 + 0x48) = unaff_RSI;
  if (*(longlong *)(unaff_R15 + 0x40) == 0) {
    *(uint64_t *)(unaff_R15 + 0x40) = unaff_RSI;
    if ((ulonglong)*(ushort *)(unaff_R15 + 0x50) == 0) {
      uVar3 = 0;
      uVar2 = unaff_RSI;
    }
    else {
      uVar2 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4,4);
      uVar3 = (ulonglong)*(ushort *)(unaff_R15 + 0x50);
    }
    *(uint64_t *)(unaff_R15 + 0x48) = uVar2;
    if (uVar3 != 0) {
      unaff_RSI = FUN_18062b420(system_memory_pool_ptr,uVar3 << 4,4);
    }
    *(uint64_t *)(unaff_R15 + 0x40) = unaff_RSI;
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(unaff_R15 + 0x48),*(uint64_t *)(unaff_RDI + 8),(longlong)(iVar1 * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180074309(void)
void FUN_180074309(void)

{
  uint64_t uVar1;
  ulonglong uVar2;
  int16_t unaff_BP;
  uint8_t unaff_0000002a;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  *(int16_t *)(unaff_R15 + 0x50) = unaff_BP;
  if (*(longlong *)(unaff_R15 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(unaff_R15 + 0x48) = unaff_RSI;
  if (*(longlong *)(unaff_R15 + 0x40) == 0) {
    *(uint64_t *)(unaff_R15 + 0x40) = unaff_RSI;
    if ((ulonglong)*(ushort *)(unaff_R15 + 0x50) == 0) {
      uVar2 = 0;
      uVar1 = unaff_RSI;
    }
    else {
      uVar1 = FUN_18062b420(system_memory_pool_ptr,(ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4,4);
      uVar2 = (ulonglong)*(ushort *)(unaff_R15 + 0x50);
    }
    *(uint64_t *)(unaff_R15 + 0x48) = uVar1;
    if (uVar2 != 0) {
      unaff_RSI = FUN_18062b420(system_memory_pool_ptr,uVar2 << 4,4);
    }
    *(uint64_t *)(unaff_R15 + 0x40) = unaff_RSI;
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(unaff_R15 + 0x48),*(uint64_t *)(unaff_RDI + 8),
           (longlong)((int)CONCAT62(unaff_0000002a,unaff_BP) * 4));
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800744b0(longlong param_1,longlong param_2)
void FUN_1800744b0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int8_t *puVar12;
  int32_t *puVar13;
  int8_t auStack_f8 [32];
  uint64_t uStack_d8;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_f8;
  piVar4 = *(int **)(param_2 + 8);
  iVar2 = *piVar4;
  *(int **)(param_2 + 8) = piVar4 + 1;
  iVar6 = piVar4[2];
  iVar7 = piVar4[3];
  iVar8 = piVar4[4];
  *(int *)(param_1 + 0x18) = piVar4[1];
  *(int *)(param_1 + 0x1c) = iVar6;
  *(int *)(param_1 + 0x20) = iVar7;
  *(int *)(param_1 + 0x24) = iVar8;
  puVar12 = (int8_t *)(*(longlong *)(param_2 + 8) + 0x10);
  *(int8_t **)(param_2 + 8) = puVar12;
  *(int8_t *)(param_1 + 0x28) = *puVar12;
  lVar5 = *(longlong *)(param_2 + 8);
  *(int32_t **)(param_2 + 8) = (int32_t *)(lVar5 + 1);
  if (iVar2 == 0) {
    puStack_c8 = &unknown_var_3432_ptr;
    puStack_c0 = auStack_b0;
    uStack_b8 = 0;
    auStack_b0[0] = 0;
    uVar3 = **(uint **)(param_2 + 8);
    puVar1 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar1;
    if (uVar3 != 0) {
      FUN_180049910(&puStack_c8,puVar1,uVar3);
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    }
    puStack_c8 = &unknown_var_720_ptr;
    puVar13 = *(int32_t **)(param_2 + 8);
  }
  else {
    uVar9 = *(int32_t *)(lVar5 + 5);
    uVar10 = *(int32_t *)(lVar5 + 9);
    uVar11 = *(int32_t *)(lVar5 + 0xd);
    *(int32_t *)(param_1 + 8) = *(int32_t *)(lVar5 + 1);
    *(int32_t *)(param_1 + 0xc) = uVar9;
    *(int32_t *)(param_1 + 0x10) = uVar10;
    *(int32_t *)(param_1 + 0x14) = uVar11;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x10;
    puVar13 = *(int32_t **)(param_2 + 8);
  }
  *(int32_t *)(param_1 + 0x2c) = *puVar13;
  puVar13 = (int32_t *)(*(longlong *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar13;
  *(int32_t *)(param_1 + 0x30) = *puVar13;
  puVar13 = (int32_t *)(*(longlong *)(param_2 + 8) + 4);
  *(int32_t **)(param_2 + 8) = puVar13;
  *(int32_t *)(param_1 + 0x34) = *puVar13;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800745f0(uint64_t param_1,longlong param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x38,8,3,0xfffffffffffffffe);
  *puVar2 = &unknown_var_5192_ptr;
  *puVar2 = &unknown_var_5080_ptr;
  *(uint64_t *)((longlong)puVar2 + 0x2c) = 0;
  *(int32_t *)((longlong)puVar2 + 0x34) = 0;
  *(int8_t *)(puVar2 + 5) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (param_2 != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x10);
    puVar2[1] = *(uint64_t *)(param_2 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(uint64_t *)(param_2 + 0x20);
    puVar2[3] = *(uint64_t *)(param_2 + 0x18);
    puVar2[4] = uVar1;
    *(int8_t *)(puVar2 + 5) = *(int8_t *)(param_2 + 0x28);
    *(int32_t *)((longlong)puVar2 + 0x2c) = *(int32_t *)(param_2 + 0x2c);
    *(int32_t *)(puVar2 + 6) = *(int32_t *)(param_2 + 0x30);
    *(int32_t *)((longlong)puVar2 + 0x34) = *(int32_t *)(param_2 + 0x34);
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800746c0(longlong param_1)
void FUN_1800746c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *puVar5;
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x28) == '\0') {
    plVar3 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr,0xc0,0x10,4,0xfffffffffffffffe);
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_8584_ptr;
    plVar3[2] = (longlong)&unknown_var_720_ptr;
    plVar3[3] = 0;
    *(int32_t *)(plVar3 + 4) = 0;
    plVar3[2] = (longlong)&unknown_var_3432_ptr;
    plVar3[3] = (longlong)(plVar3 + 5);
    *(int32_t *)(plVar3 + 4) = 0;
    *(int8_t *)(plVar3 + 5) = 0;
    *(int8_t *)((longlong)plVar3 + 0xb2) = 0;
    *(int32_t *)(plVar3 + 1) = 0;
    *(int16_t *)(plVar3 + 0x16) = 0;
    plVar3[0x15] = 0;
    *plVar3 = (longlong)&unknown_var_7128_ptr;
    plVar3[0x15] = 0;
    *(int8_t *)(plVar3 + 0x17) = 0;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plVar4 = *(longlong **)(param_1 + 0xb0);
    *(longlong **)(param_1 + 0xb0) = plVar3;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))();
    }
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = param_1;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
    puVar5 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      puVar5 = *(void **)(param_1 + 0x70);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,puVar5);
    *(int8_t *)(*(longlong *)(param_1 + 0xb0) + 0xb1) = 1;
    lVar1 = system_resource_state;
    plVar4 = *(longlong **)(param_1 + 0xb0);
    iVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
    *(int8_t *)((longlong)plVar4 + 0xb2) = 1;
    FUN_1802abe00((longlong)iVar2 * 0x98 + lVar1 + 8,plVar4);
  }
  return;
}





// 函数: void FUN_180074840(longlong param_1)
void FUN_180074840(longlong param_1)

{
  longlong *plStackX_8;
  longlong **pplStackX_10;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(uint64_t *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = 0;
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(longlong **)(param_1 + 0xb0);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_1800b55b0();
    pplStackX_10 = *(longlong ***)(param_1 + 0xb0);
    *(uint64_t *)(param_1 + 0xb0) = 0;
    if (pplStackX_10 != (longlong **)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001800748c2. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)((longlong)*pplStackX_10 + 0x38))();
      return;
    }
  }
  return;
}





