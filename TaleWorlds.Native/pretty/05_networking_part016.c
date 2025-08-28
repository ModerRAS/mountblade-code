#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 05_networking_part016.c - 3 个函数
// 函数: void NetworkProtocol_5019a(void)
void NetworkProtocol_5019a(void)
{
// WARNING: Subroutine does not return
  SystemMemoryManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_501b0(int64_t *param_1)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  int64_t *plVar6;
  int *piVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int64_t *plVar16;
  bool bVar17;
  uint local_var_68;
  uint local_var_64;
  uint local_var_60;
  uint local_var_5c;
  uint64_t local_var_58;
  int iStack_50;
  int32_t local_var_4c;
  int iStack_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int iStack_38;
  int32_t local_var_34;
  uint64_t local_var_30;
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    SystemMemoryAllocator();
  }
  do {
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      SystemMemoryAllocator();
    }
    if (lVar8 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar8);
    }
    if (*(int *)((int64_t)param_1 + 0x54) == 0) {
      iVar11 = 0;
      break;
    }
    if ((int)param_1[7] != 0) {
      iVar11 = 0;
      lVar8 = 0;
      piVar7 = (int *)param_1[6];
      do {
        if (*piVar7 != -1) {
          iVar11 = ((int *)param_1[6])[iVar11];
          goto LAB_18085024c;
        }
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (lVar8 != (int)param_1[7]);
    }
    iVar11 = -1;
LAB_18085024c:
    lVar8 = param_1[5];
    puVar13 = (uint *)((int64_t)iVar11 * 0x20 + param_1[8]);
    local_var_68 = *puVar13;
    local_var_64 = puVar13[1];
    local_var_60 = puVar13[2];
    local_var_5c = puVar13[3];
    bVar17 = lVar8 == 0;
    if (bVar17) {
      lVar8 = 0;
    }
    else {
      SystemMemoryAllocator();
    }
    uVar4 = local_var_5c;
    uVar5 = local_var_60;
    uVar1 = local_var_68;
    lVar10 = CONCAT44(local_var_5c,local_var_60);
    lVar3 = CONCAT44(local_var_64,local_var_68);
    if (((*(int *)((int64_t)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
       (iVar12 = *(int *)(*param_1 +
                         (int64_t)
                         (int)((local_var_68 ^ local_var_64 ^ local_var_60 ^ local_var_5c) &
                              (int)param_1[1] - 1U) * 4), iVar12 != -1)) {
      do {
        plVar6 = (int64_t *)((int64_t)iVar12 * 0x20 + param_1[2]);
        if ((*plVar6 == lVar3) && (plVar6[1] == lVar10)) {
          lVar9 = plVar6[3];
          goto LAB_1808502f3;
        }
        iVar12 = (int)plVar6[2];
      } while (iVar12 != -1);
    }
    lVar9 = 0;
LAB_1808502f3:
    if (!bVar17) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar8);
    }
    if (lVar9 != 0) {
      plVar6 = *(int64_t **)((int64_t)iVar11 * 0x20 + 0x18 + param_1[8]);
      if ((int)plVar6[1] == 0) goto LAB_180850347;
      iVar11 = 0;
      lVar8 = 0;
      piVar7 = (int *)*plVar6;
      goto LAB_180850330;
    }
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      SystemMemoryAllocator();
    }
    if ((int)param_1[7] != 0) {
      lVar9 = (int64_t)(int)((uVar1 ^ local_var_64 ^ uVar5 ^ uVar4) & (int)param_1[7] - 1U);
      plVar6 = (int64_t *)(param_1[6] + lVar9 * 4);
      iVar11 = *(int *)(param_1[6] + lVar9 * 4);
      if (iVar11 != -1) {
        do {
          plVar16 = (int64_t *)((int64_t)iVar11 * 0x20 + param_1[8]);
          if ((*plVar16 == lVar3) && (plVar16[1] == lVar10)) {
            iVar11 = NetworkProtocol_52bb0(param_1,&local_var_68,plVar16 + 3);
            if (iVar11 == 0) {
              lVar3 = *plVar6;
              lVar10 = (int64_t)(int)lVar3 * 0x20 + param_1[8];
              *(uint64_t *)(lVar10 + 0x18) = 0;
              *(int *)plVar6 = *(int *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x10) = (int)param_1[10];
              *(int *)((int64_t)param_1 + 0x54) = *(int *)((int64_t)param_1 + 0x54) + -1;
              *(int *)(param_1 + 10) = (int)lVar3;
            }
            goto LAB_1808505e7;
          }
          iVar11 = (int)plVar16[2];
          plVar6 = plVar16 + 2;
        } while (iVar11 != -1);
      }
    }
    iVar11 = 0x1c;
LAB_1808505e7:
    if (lVar8 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar8);
    }
  } while (iVar11 == 0);
LAB_180850643:
  if (lVar2 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar2);
  }
  return iVar11;
joined_r0x00018085040e:
  local_var_58 = plVar16;
  if (iVar11 == -1) goto LAB_180850347;
  puVar13 = (uint *)((int64_t)iVar11 * 0x10 + plVar6[2]);
  if ((int)plVar6[1] == 0) {
LAB_18085046c:
    iVar11 = 0x1c;
    goto LAB_180850643;
  }
  uVar1 = *puVar13;
  lVar8 = (int64_t)(int)((int)plVar6[1] - 1U & uVar1);
  puVar14 = (uint *)(*plVar6 + lVar8 * 4);
  uVar5 = *(uint *)(*plVar6 + lVar8 * 4);
  if (uVar5 == 0xffffffff) goto LAB_18085046c;
  while (puVar15 = (uint *)((int64_t)(int)uVar5 * 0x10 + plVar6[2]), *puVar15 != uVar1) {
    uVar5 = puVar15[1];
    puVar14 = puVar15 + 1;
    if (uVar5 == 0xffffffff) goto LAB_18085046c;
  }
  iVar11 = RenderingSystem_Renderer(lVar9,puVar13,puVar15 + 2);
  if (iVar11 != 0) goto LAB_180850643;
  uVar1 = *puVar14;
  lVar8 = (int64_t)(int)uVar1 * 0x10 + plVar6[2];
  local_var_4c = 0xffffffff;
  *(uint64_t *)(lVar8 + 8) = 0;
  *puVar14 = *(uint *)(lVar8 + 4);
  *(int *)(lVar8 + 4) = (int)plVar6[4];
  *(int *)((int64_t)plVar6 + 0x24) = *(int *)((int64_t)plVar6 + 0x24) + -1;
  *(uint *)(plVar6 + 4) = uVar1;
  if ((int)plVar6[1] != 0) {
    iStack_50 = 0;
    lVar8 = 0;
    piVar7 = (int *)*plVar6;
    do {
      if (*piVar7 != -1) {
        iVar11 = ((int *)*plVar6)[iStack_50];
        goto LAB_1808504f5;
      }
      iStack_50 = iStack_50 + 1;
      lVar8 = lVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (lVar8 != (int)plVar6[1]);
  }
  iStack_50 = -1;
  iVar11 = -1;
LAB_1808504f5:
  local_var_30 = CONCAT44(local_var_44,iVar11);
  local_var_58._0_4_ = SUB84(plVar6,0);
  local_var_58._4_4_ = (int32_t)((uint64_t)plVar6 >> 0x20);
  local_var_34 = 0xffffffff;
  plVar16 = plVar6;
  iStack_48 = iVar11;
  local_var_40 = (int32_t)local_var_58;
  local_var_3c = local_var_58._4_4_;
  iStack_38 = iStack_50;
  goto joined_r0x00018085040e;
  while( true ) {
    iVar11 = iVar11 + 1;
    lVar8 = lVar8 + 1;
    piVar7 = piVar7 + 1;
    if (lVar8 == (int)plVar6[1]) break;
LAB_180850330:
    if (*piVar7 != -1) {
      iVar11 = ((int *)*plVar6)[iVar11];
      plVar16 = local_var_58;
      goto joined_r0x00018085040e;
    }
  }
LAB_180850347:
  NetworkProtocol_bb9e0(plVar6);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&rendering_buffer_2080_ptr,0x193,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_501c0(int64_t *param_1)
{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  int64_t in_RAX;
  int64_t *plVar5;
  int *piVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint64_t unaff_RBX;
  uint *puVar13;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint *puVar14;
  int64_t *plVar15;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  bool bVar16;
  uint local_var_30;
  uint local_buffer_34;
  uint local_var_38;
  uint local_buffer_3c;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int iStack0000000000000048;
  int32_t local_buffer_4c;
  int iStack0000000000000050;
  int32_t local_buffer_54;
  int32_t local_var_58;
  int32_t local_buffer_5c;
  int iStack0000000000000060;
  int32_t local_buffer_64;
  uint64_t local_var_68;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  if (unaff_RSI != 0) {
    SystemMemoryAllocator();
  }
  do {
    lVar7 = param_1[0xb];
    if (lVar7 != 0) {
      SystemMemoryAllocator();
    }
    if (lVar7 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar7);
    }
    if (*(int *)((int64_t)param_1 + 0x54) == 0) {
      iVar10 = 0;
      break;
    }
    if ((int)param_1[7] != 0) {
      iVar10 = 0;
      lVar7 = 0;
      piVar6 = (int *)param_1[6];
      do {
        if (*piVar6 != -1) {
          iVar10 = ((int *)param_1[6])[iVar10];
          goto LAB_18085024c;
        }
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (lVar7 != (int)param_1[7]);
    }
    iVar10 = -1;
LAB_18085024c:
    lVar7 = param_1[5];
    puVar12 = (uint *)((int64_t)iVar10 * 0x20 + param_1[8]);
    local_var_30 = *puVar12;
    local_buffer_34 = puVar12[1];
    local_var_38 = puVar12[2];
    local_buffer_3c = puVar12[3];
    bVar16 = lVar7 == 0;
    if (bVar16) {
      lVar7 = 0;
    }
    else {
      SystemMemoryAllocator();
    }
    uVar3 = local_buffer_3c;
    uVar4 = local_var_38;
    uVar1 = local_var_30;
    lVar9 = CONCAT44(local_buffer_3c,local_var_38);
    lVar2 = CONCAT44(local_buffer_34,local_var_30);
    if (((*(int *)((int64_t)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
       (iVar11 = *(int *)(*param_1 +
                         (int64_t)
                         (int)((local_var_30 ^ local_buffer_34 ^
                                local_var_38 ^ local_buffer_3c) &
                              (int)param_1[1] - 1U) * 4), iVar11 != -1)) {
      do {
        plVar5 = (int64_t *)((int64_t)iVar11 * 0x20 + param_1[2]);
        if ((*plVar5 == lVar2) && (plVar5[1] == lVar9)) {
          lVar8 = plVar5[3];
          goto LAB_1808502f3;
        }
        iVar11 = (int)plVar5[2];
      } while (iVar11 != -1);
    }
    lVar8 = 0;
LAB_1808502f3:
    if (!bVar16) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar7);
    }
    if (lVar8 != 0) {
      plVar5 = *(int64_t **)((int64_t)iVar10 * 0x20 + 0x18 + param_1[8]);
      if ((int)plVar5[1] == 0) goto LAB_180850347;
      iVar10 = 0;
      lVar7 = 0;
      piVar6 = (int *)*plVar5;
      goto LAB_180850330;
    }
    lVar7 = param_1[0xb];
    if (lVar7 != 0) {
      SystemMemoryAllocator();
    }
    if ((int)param_1[7] != 0) {
      lVar8 = (int64_t)
              (int)((uVar1 ^ local_buffer_34 ^ uVar4 ^ uVar3) & (int)param_1[7] - 1U);
      plVar5 = (int64_t *)(param_1[6] + lVar8 * 4);
      iVar10 = *(int *)(param_1[6] + lVar8 * 4);
      if (iVar10 != -1) {
        do {
          plVar15 = (int64_t *)((int64_t)iVar10 * 0x20 + param_1[8]);
          if ((*plVar15 == lVar2) && (plVar15[1] == lVar9)) {
            iVar10 = NetworkProtocol_52bb0(param_1,&local_buffer_00000030,plVar15 + 3);
            if (iVar10 == 0) {
              lVar2 = *plVar5;
              lVar9 = (int64_t)(int)lVar2 * 0x20 + param_1[8];
              *(uint64_t *)(lVar9 + 0x18) = 0;
              *(int *)plVar5 = *(int *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x10) = (int)param_1[10];
              *(int *)((int64_t)param_1 + 0x54) = *(int *)((int64_t)param_1 + 0x54) + -1;
              *(int *)(param_1 + 10) = (int)lVar2;
            }
            goto LAB_1808505e7;
          }
          iVar10 = (int)plVar15[2];
          plVar5 = plVar15 + 2;
        } while (iVar10 != -1);
      }
    }
    iVar10 = 0x1c;
LAB_1808505e7:
    if (lVar7 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar7);
    }
  } while (iVar10 == 0);
LAB_180850643:
  if (unaff_RSI != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(unaff_RSI);
  }
  return iVar10;
joined_r0x00018085040e:
  _local_var_40 = plVar15;
  if (iVar10 == -1) goto LAB_180850347;
  puVar12 = (uint *)((int64_t)iVar10 * 0x10 + plVar5[2]);
  if ((int)plVar5[1] == 0) {
LAB_18085046c:
    iVar10 = 0x1c;
    goto LAB_180850643;
  }
  uVar1 = *puVar12;
  lVar7 = (int64_t)(int)((int)plVar5[1] - 1U & uVar1);
  puVar13 = (uint *)(*plVar5 + lVar7 * 4);
  uVar4 = *(uint *)(*plVar5 + lVar7 * 4);
  if (uVar4 == 0xffffffff) goto LAB_18085046c;
  while (puVar14 = (uint *)((int64_t)(int)uVar4 * 0x10 + plVar5[2]), *puVar14 != uVar1) {
    uVar4 = puVar14[1];
    puVar13 = puVar14 + 1;
    if (uVar4 == 0xffffffff) goto LAB_18085046c;
  }
  iVar10 = RenderingSystem_Renderer(lVar8,puVar12,puVar14 + 2);
  if (iVar10 != 0) goto LAB_180850643;
  uVar1 = *puVar13;
  lVar7 = (int64_t)(int)uVar1 * 0x10 + plVar5[2];
  local_buffer_4c = 0xffffffff;
  *(uint64_t *)(lVar7 + 8) = 0;
  *puVar13 = *(uint *)(lVar7 + 4);
  *(int *)(lVar7 + 4) = (int)plVar5[4];
  *(int *)((int64_t)plVar5 + 0x24) = *(int *)((int64_t)plVar5 + 0x24) + -1;
  *(uint *)(plVar5 + 4) = uVar1;
  if ((int)plVar5[1] != 0) {
    iStack0000000000000048 = 0;
    lVar7 = 0;
    piVar6 = (int *)*plVar5;
    do {
      if (*piVar6 != -1) {
        iVar10 = ((int *)*plVar5)[iStack0000000000000048];
        goto LAB_1808504f5;
      }
      iStack0000000000000048 = iStack0000000000000048 + 1;
      lVar7 = lVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (lVar7 != (int)plVar5[1]);
  }
  iStack0000000000000048 = -1;
  iVar10 = -1;
LAB_1808504f5:
  local_var_68 = CONCAT44(local_buffer_54,iVar10);
  local_var_40 = SUB84(plVar5,0);
  local_buffer_44 = (int32_t)((uint64_t)plVar5 >> 0x20);
  local_buffer_64 = 0xffffffff;
  plVar15 = plVar5;
  iStack0000000000000050 = iVar10;
  local_var_58 = local_var_40;
  local_buffer_5c = local_buffer_44;
  iStack0000000000000060 = iStack0000000000000048;
  goto joined_r0x00018085040e;
  while( true ) {
    iVar10 = iVar10 + 1;
    lVar7 = lVar7 + 1;
    piVar6 = piVar6 + 1;
    if (lVar7 == (int)plVar5[1]) break;
LAB_180850330:
    if (*piVar6 != -1) {
      iVar10 = ((int *)*plVar5)[iVar10];
      plVar15 = _local_var_40;
      goto joined_r0x00018085040e;
    }
  }
LAB_180850347:
  NetworkProtocol_bb9e0(plVar5);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&rendering_buffer_2080_ptr,0x193,1);
}
// 函数: void NetworkProtocol_5067a(void)
void NetworkProtocol_5067a(void)
{
// WARNING: Subroutine does not return
  SystemMemoryManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_50690(int64_t *param_1)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  int64_t *plVar6;
  int *piVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int64_t *plVar16;
  bool bVar17;
  uint local_var_68;
  uint local_var_64;
  uint local_var_60;
  uint local_var_5c;
  uint64_t local_var_58;
  int iStack_50;
  int32_t local_var_4c;
  int iStack_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int iStack_38;
  int32_t local_var_34;
  uint64_t local_var_30;
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    SystemMemoryAllocator();
  }
  do {
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      SystemMemoryAllocator();
    }
    if (lVar8 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar8);
    }
    if (*(int *)((int64_t)param_1 + 0x54) == 0) {
      iVar11 = 0;
      break;
    }
    if ((int)param_1[7] != 0) {
      iVar11 = 0;
      lVar8 = 0;
      piVar7 = (int *)param_1[6];
      do {
        if (*piVar7 != -1) {
          iVar11 = ((int *)param_1[6])[iVar11];
          goto LAB_18085072c;
        }
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (lVar8 != (int)param_1[7]);
    }
    iVar11 = -1;
LAB_18085072c:
    lVar8 = param_1[5];
    puVar13 = (uint *)((int64_t)iVar11 * 0x20 + param_1[8]);
    local_var_68 = *puVar13;
    local_var_64 = puVar13[1];
    local_var_60 = puVar13[2];
    local_var_5c = puVar13[3];
    bVar17 = lVar8 == 0;
    if (bVar17) {
      lVar8 = 0;
    }
    else {
      SystemMemoryAllocator();
    }
    uVar4 = local_var_5c;
    uVar5 = local_var_60;
    uVar1 = local_var_68;
    lVar10 = CONCAT44(local_var_5c,local_var_60);
    lVar3 = CONCAT44(local_var_64,local_var_68);
    if (((*(int *)((int64_t)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
       (iVar12 = *(int *)(*param_1 +
                         (int64_t)
                         (int)((local_var_68 ^ local_var_64 ^ local_var_60 ^ local_var_5c) &
                              (int)param_1[1] - 1U) * 4), iVar12 != -1)) {
      do {
        plVar6 = (int64_t *)((int64_t)iVar12 * 0x20 + param_1[2]);
        if ((*plVar6 == lVar3) && (plVar6[1] == lVar10)) {
          lVar9 = plVar6[3];
          goto LAB_1808507d3;
        }
        iVar12 = (int)plVar6[2];
      } while (iVar12 != -1);
    }
    lVar9 = 0;
LAB_1808507d3:
    if (!bVar17) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar8);
    }
    if (lVar9 != 0) {
      plVar6 = *(int64_t **)((int64_t)iVar11 * 0x20 + 0x18 + param_1[8]);
      if ((int)plVar6[1] == 0) goto LAB_180850827;
      iVar11 = 0;
      lVar8 = 0;
      piVar7 = (int *)*plVar6;
      goto LAB_180850810;
    }
    lVar8 = param_1[0xb];
    if (lVar8 != 0) {
      SystemMemoryAllocator();
    }
    if ((int)param_1[7] != 0) {
      lVar9 = (int64_t)(int)((uVar1 ^ local_var_64 ^ uVar5 ^ uVar4) & (int)param_1[7] - 1U);
      plVar6 = (int64_t *)(param_1[6] + lVar9 * 4);
      iVar11 = *(int *)(param_1[6] + lVar9 * 4);
      if (iVar11 != -1) {
        do {
          plVar16 = (int64_t *)((int64_t)iVar11 * 0x20 + param_1[8]);
          if ((*plVar16 == lVar3) && (plVar16[1] == lVar10)) {
            iVar11 = NetworkProtocol_52bb0(param_1,&local_var_68,plVar16 + 3);
            if (iVar11 == 0) {
              lVar3 = *plVar6;
              lVar10 = (int64_t)(int)lVar3 * 0x20 + param_1[8];
              *(uint64_t *)(lVar10 + 0x18) = 0;
              *(int *)plVar6 = *(int *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x10) = (int)param_1[10];
              *(int *)((int64_t)param_1 + 0x54) = *(int *)((int64_t)param_1 + 0x54) + -1;
              *(int *)(param_1 + 10) = (int)lVar3;
            }
            goto LAB_180850ac7;
          }
          iVar11 = (int)plVar16[2];
          plVar6 = plVar16 + 2;
        } while (iVar11 != -1);
      }
    }
    iVar11 = 0x1c;
LAB_180850ac7:
    if (lVar8 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar8);
    }
  } while (iVar11 == 0);
LAB_180850b23:
  if (lVar2 != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(lVar2);
  }
  return iVar11;
joined_r0x0001808508ee:
  local_var_58 = plVar16;
  if (iVar11 == -1) goto LAB_180850827;
  puVar13 = (uint *)((int64_t)iVar11 * 0x10 + plVar6[2]);
  if ((int)plVar6[1] == 0) {
LAB_18085094c:
    iVar11 = 0x1c;
    goto LAB_180850b23;
  }
  uVar1 = *puVar13;
  lVar8 = (int64_t)(int)((int)plVar6[1] - 1U & uVar1);
  puVar14 = (uint *)(*plVar6 + lVar8 * 4);
  uVar5 = *(uint *)(*plVar6 + lVar8 * 4);
  if (uVar5 == 0xffffffff) goto LAB_18085094c;
  while (puVar15 = (uint *)((int64_t)(int)uVar5 * 0x10 + plVar6[2]), *puVar15 != uVar1) {
    uVar5 = puVar15[1];
    puVar14 = puVar15 + 1;
    if (uVar5 == 0xffffffff) goto LAB_18085094c;
  }
  iVar11 = RenderingSystem_Renderer(lVar9,puVar13,puVar15 + 2);
  if (iVar11 != 0) goto LAB_180850b23;
  uVar1 = *puVar14;
  lVar8 = (int64_t)(int)uVar1 * 0x10 + plVar6[2];
  local_var_4c = 0xffffffff;
  *(uint64_t *)(lVar8 + 8) = 0;
  *puVar14 = *(uint *)(lVar8 + 4);
  *(int *)(lVar8 + 4) = (int)plVar6[4];
  *(int *)((int64_t)plVar6 + 0x24) = *(int *)((int64_t)plVar6 + 0x24) + -1;
  *(uint *)(plVar6 + 4) = uVar1;
  if ((int)plVar6[1] != 0) {
    iStack_50 = 0;
    lVar8 = 0;
    piVar7 = (int *)*plVar6;
    do {
      if (*piVar7 != -1) {
        iVar11 = ((int *)*plVar6)[iStack_50];
        goto LAB_1808509d5;
      }
      iStack_50 = iStack_50 + 1;
      lVar8 = lVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (lVar8 != (int)plVar6[1]);
  }
  iStack_50 = -1;
  iVar11 = -1;
LAB_1808509d5:
  local_var_30 = CONCAT44(local_var_44,iVar11);
  local_var_58._0_4_ = SUB84(plVar6,0);
  local_var_58._4_4_ = (int32_t)((uint64_t)plVar6 >> 0x20);
  local_var_34 = 0xffffffff;
  plVar16 = plVar6;
  iStack_48 = iVar11;
  local_var_40 = (int32_t)local_var_58;
  local_var_3c = local_var_58._4_4_;
  iStack_38 = iStack_50;
  goto joined_r0x0001808508ee;
  while( true ) {
    iVar11 = iVar11 + 1;
    lVar8 = lVar8 + 1;
    piVar7 = piVar7 + 1;
    if (lVar8 == (int)plVar6[1]) break;
LAB_180850810:
    if (*piVar7 != -1) {
      iVar11 = ((int *)*plVar6)[iVar11];
      plVar16 = local_var_58;
      goto joined_r0x0001808508ee;
    }
  }
LAB_180850827:
  NetworkProtocol_bbe80(plVar6);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar6,&rendering_buffer_2080_ptr,0x193,1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkProtocol_506a0(int64_t *param_1)
{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  int64_t in_RAX;
  int64_t *plVar5;
  int *piVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint64_t unaff_RBX;
  uint *puVar13;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint *puVar14;
  int64_t *plVar15;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  bool bVar16;
  uint local_var_30;
  uint local_buffer_34;
  uint local_var_38;
  uint local_buffer_3c;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int iStack0000000000000048;
  int32_t local_buffer_4c;
  int iStack0000000000000050;
  int32_t local_buffer_54;
  int32_t local_var_58;
  int32_t local_buffer_5c;
  int iStack0000000000000060;
  int32_t local_buffer_64;
  uint64_t local_var_68;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  if (unaff_RSI != 0) {
    SystemMemoryAllocator();
  }
  do {
    lVar7 = param_1[0xb];
    if (lVar7 != 0) {
      SystemMemoryAllocator();
    }
    if (lVar7 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar7);
    }
    if (*(int *)((int64_t)param_1 + 0x54) == 0) {
      iVar10 = 0;
      break;
    }
    if ((int)param_1[7] != 0) {
      iVar10 = 0;
      lVar7 = 0;
      piVar6 = (int *)param_1[6];
      do {
        if (*piVar6 != -1) {
          iVar10 = ((int *)param_1[6])[iVar10];
          goto LAB_18085072c;
        }
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (lVar7 != (int)param_1[7]);
    }
    iVar10 = -1;
LAB_18085072c:
    lVar7 = param_1[5];
    puVar12 = (uint *)((int64_t)iVar10 * 0x20 + param_1[8]);
    local_var_30 = *puVar12;
    local_buffer_34 = puVar12[1];
    local_var_38 = puVar12[2];
    local_buffer_3c = puVar12[3];
    bVar16 = lVar7 == 0;
    if (bVar16) {
      lVar7 = 0;
    }
    else {
      SystemMemoryAllocator();
    }
    uVar3 = local_buffer_3c;
    uVar4 = local_var_38;
    uVar1 = local_var_30;
    lVar9 = CONCAT44(local_buffer_3c,local_var_38);
    lVar2 = CONCAT44(local_buffer_34,local_var_30);
    if (((*(int *)((int64_t)param_1 + 0x24) != 0) && ((int)param_1[1] != 0)) &&
       (iVar11 = *(int *)(*param_1 +
                         (int64_t)
                         (int)((local_var_30 ^ local_buffer_34 ^
                                local_var_38 ^ local_buffer_3c) &
                              (int)param_1[1] - 1U) * 4), iVar11 != -1)) {
      do {
        plVar5 = (int64_t *)((int64_t)iVar11 * 0x20 + param_1[2]);
        if ((*plVar5 == lVar2) && (plVar5[1] == lVar9)) {
          lVar8 = plVar5[3];
          goto LAB_1808507d3;
        }
        iVar11 = (int)plVar5[2];
      } while (iVar11 != -1);
    }
    lVar8 = 0;
LAB_1808507d3:
    if (!bVar16) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar7);
    }
    if (lVar8 != 0) {
      plVar5 = *(int64_t **)((int64_t)iVar10 * 0x20 + 0x18 + param_1[8]);
      if ((int)plVar5[1] == 0) goto LAB_180850827;
      iVar10 = 0;
      lVar7 = 0;
      piVar6 = (int *)*plVar5;
      goto LAB_180850810;
    }
    lVar7 = param_1[0xb];
    if (lVar7 != 0) {
      SystemMemoryAllocator();
    }
    if ((int)param_1[7] != 0) {
      lVar8 = (int64_t)
              (int)((uVar1 ^ local_buffer_34 ^ uVar4 ^ uVar3) & (int)param_1[7] - 1U);
      plVar5 = (int64_t *)(param_1[6] + lVar8 * 4);
      iVar10 = *(int *)(param_1[6] + lVar8 * 4);
      if (iVar10 != -1) {
        do {
          plVar15 = (int64_t *)((int64_t)iVar10 * 0x20 + param_1[8]);
          if ((*plVar15 == lVar2) && (plVar15[1] == lVar9)) {
            iVar10 = NetworkProtocol_52bb0(param_1,&local_buffer_00000030,plVar15 + 3);
            if (iVar10 == 0) {
              lVar2 = *plVar5;
              lVar9 = (int64_t)(int)lVar2 * 0x20 + param_1[8];
              *(uint64_t *)(lVar9 + 0x18) = 0;
              *(int *)plVar5 = *(int *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x10) = (int)param_1[10];
              *(int *)((int64_t)param_1 + 0x54) = *(int *)((int64_t)param_1 + 0x54) + -1;
              *(int *)(param_1 + 10) = (int)lVar2;
            }
            goto LAB_180850ac7;
          }
          iVar10 = (int)plVar15[2];
          plVar5 = plVar15 + 2;
        } while (iVar10 != -1);
      }
    }
    iVar10 = 0x1c;
LAB_180850ac7:
    if (lVar7 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar7);
    }
  } while (iVar10 == 0);
LAB_180850b23:
  if (unaff_RSI != 0) {
// WARNING: Subroutine does not return
    SystemMemoryManager(unaff_RSI);
  }
  return iVar10;
joined_r0x0001808508ee:
  _local_var_40 = plVar15;
  if (iVar10 == -1) goto LAB_180850827;
  puVar12 = (uint *)((int64_t)iVar10 * 0x10 + plVar5[2]);
  if ((int)plVar5[1] == 0) {
LAB_18085094c:
    iVar10 = 0x1c;
    goto LAB_180850b23;
  }
  uVar1 = *puVar12;
  lVar7 = (int64_t)(int)((int)plVar5[1] - 1U & uVar1);
  puVar13 = (uint *)(*plVar5 + lVar7 * 4);
  uVar4 = *(uint *)(*plVar5 + lVar7 * 4);
  if (uVar4 == 0xffffffff) goto LAB_18085094c;
  while (puVar14 = (uint *)((int64_t)(int)uVar4 * 0x10 + plVar5[2]), *puVar14 != uVar1) {
    uVar4 = puVar14[1];
    puVar13 = puVar14 + 1;
    if (uVar4 == 0xffffffff) goto LAB_18085094c;
  }
  iVar10 = RenderingSystem_Renderer(lVar8,puVar12,puVar14 + 2);
  if (iVar10 != 0) goto LAB_180850b23;
  uVar1 = *puVar13;
  lVar7 = (int64_t)(int)uVar1 * 0x10 + plVar5[2];
  local_buffer_4c = 0xffffffff;
  *(uint64_t *)(lVar7 + 8) = 0;
  *puVar13 = *(uint *)(lVar7 + 4);
  *(int *)(lVar7 + 4) = (int)plVar5[4];
  *(int *)((int64_t)plVar5 + 0x24) = *(int *)((int64_t)plVar5 + 0x24) + -1;
  *(uint *)(plVar5 + 4) = uVar1;
  if ((int)plVar5[1] != 0) {
    iStack0000000000000048 = 0;
    lVar7 = 0;
    piVar6 = (int *)*plVar5;
    do {
      if (*piVar6 != -1) {
        iVar10 = ((int *)*plVar5)[iStack0000000000000048];
        goto LAB_1808509d5;
      }
      iStack0000000000000048 = iStack0000000000000048 + 1;
      lVar7 = lVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (lVar7 != (int)plVar5[1]);
  }
  iStack0000000000000048 = -1;
  iVar10 = -1;
LAB_1808509d5:
  local_var_68 = CONCAT44(local_buffer_54,iVar10);
  local_var_40 = SUB84(plVar5,0);
  local_buffer_44 = (int32_t)((uint64_t)plVar5 >> 0x20);
  local_buffer_64 = 0xffffffff;
  plVar15 = plVar5;
  iStack0000000000000050 = iVar10;
  local_var_58 = local_var_40;
  local_buffer_5c = local_buffer_44;
  iStack0000000000000060 = iStack0000000000000048;
  goto joined_r0x0001808508ee;
  while( true ) {
    iVar10 = iVar10 + 1;
    lVar7 = lVar7 + 1;
    piVar6 = piVar6 + 1;
    if (lVar7 == (int)plVar5[1]) break;
LAB_180850810:
    if (*piVar6 != -1) {
      iVar10 = ((int *)*plVar5)[iVar10];
      plVar15 = _local_var_40;
      goto joined_r0x0001808508ee;
    }
  }
LAB_180850827:
  NetworkProtocol_bbe80(plVar5);
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&rendering_buffer_2080_ptr,0x193,1);
}
// 函数: void NetworkProtocol_50b5a(void)
void NetworkProtocol_50b5a(void)
{
// WARNING: Subroutine does not return
  SystemMemoryManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address