/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_12_part015.c - 11 个函数
// 函数: void SystemCore_d4ac0(uint *param_1,uint param_2,int *param_3,float *param_4)
void SystemCore_d4ac0(uint *param_1,uint param_2,int *param_3,float *param_4)
{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint *puVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int iVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  float fVar13;
  int8_t stack_array_358 [32];
  int32_t local_var_338;
  uint64_t local_var_328;
  int iStack_320;
  int iStack_31c;
  int *piStack_318;
  uint stack_array_308 [160];
  uint64_t local_var_88;
  local_var_88 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_358;
  uVar7 = 0;
  param_1[0x26] = 0xffffffff;
  local_var_338 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = param_2;
  iStack_320 = 0;
  iStack_31c = 0;
  uVar9 = uVar7;
  uVar11 = uVar7;
  uVar12 = uVar7;
  if (0 < (int)param_2) {
    uVar8 = (uint64_t)param_2;
    piVar2 = param_3;
    uVar4 = uVar7;
    do {
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        uVar9 = (uint64_t)((int)uVar9 + 1);
      }
      else if (iVar1 == 1) {
        uVar4 = (uint64_t)((int)uVar4 + 1);
      }
      else if (iVar1 != 2) {
        if (iVar1 == 3) {
          uVar11 = (uint64_t)((int)uVar11 + 1);
        }
        else if (iVar1 == 4) {
          uVar12 = (uint64_t)((int)uVar12 + 1);
        }
      }
      local_var_338 = (int32_t)uVar4;
      piVar2 = piVar2 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    iStack_31c = (int)uVar12;
    iStack_320 = (int)uVar9;
  }
  piStack_318 = param_3;
  iVar1 = SystemCore_d4590(param_1,uVar11,uVar12,uVar9);
  if (iVar1 == 0) {
    iVar1 = (int)uVar9;
    iVar10 = (int)uVar12;
    if (0 < (int)*param_1) {
      piStack_318 = (int *)((int64_t)piStack_318 - (int64_t)param_4);
      puVar5 = stack_array_308;
      local_var_328 = 0;
      uVar9 = uVar7;
      uVar11 = uVar7;
      uVar12 = uVar7;
      do {
        iVar1 = *(int *)((int64_t)piStack_318 + (int64_t)param_4);
        uVar6 = (uint)uVar7;
        if (iVar1 == 0) {
          for (fVar13 = *param_4; fVar13 < -180.0; fVar13 = fVar13 + 360.0) {
          }
          for (; stack_array_308[0] = uVar6, 180.0 <= fVar13; fVar13 = fVar13 + -360.0) {
          }
LAB_1807d4cca:
          puVar5[1] = (uint)fVar13;
// WARNING: Subroutine does not return
          AdvancedSystemController(fVar13 * 0.017453292);
        }
        if (iVar1 == 1) {
          puVar5 = *(uint **)(param_1 + 6);
          fVar13 = *param_4;
          local_var_328 = 0x14;
          *puVar5 = uVar6;
          for (; fVar13 < -180.0; fVar13 = fVar13 + 360.0) {
          }
          for (; 180.0 <= fVar13; fVar13 = fVar13 + -360.0) {
          }
          goto LAB_1807d4cca;
        }
        if (iVar1 == 2) {
          param_1[0x26] = uVar6;
        }
        else {
          if (iVar1 == 3) {
            puVar3 = (uint *)(*(int64_t *)(param_1 + 0x28) + uVar9);
            uVar9 = uVar9 + 4;
          }
          else if (iVar1 == 4) {
            puVar3 = (uint *)(*(int64_t *)(param_1 + 0x2c) + uVar12);
            uVar12 = uVar12 + 4;
          }
          else {
            if (iVar1 != 5) goto LAB_1807d4d8d;
            puVar3 = (uint *)(*(int64_t *)(param_1 + 0x2e) + uVar11);
            uVar11 = uVar11 + 4;
          }
          *puVar3 = uVar6;
        }
LAB_1807d4d8d:
        uVar7 = (uint64_t)(uVar6 + 1);
        param_4 = param_4 + 1;
        iVar1 = iStack_320;
        iVar10 = iStack_31c;
      } while ((int)(uVar6 + 1) < (int)*param_1);
    }
    if (iVar1 == 0) {
      if (iVar10 != 0) {
        param_1[0xc] = **(uint **)(param_1 + 0x2c);
        param_1[0xd] = 0xc2b40000;
// WARNING: Subroutine does not return
        AdvancedSystemController(0xbfc90fdb);
      }
    }
    else {
      SystemCore_d5970(param_1,stack_array_308,iVar1);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_88 ^ (uint64_t)stack_array_358);
}
// 函数: void SystemCore_d4c0a(int32_t param_1)
void SystemCore_d4c0a(int32_t param_1)
{
  int iVar1;
  int *piVar2;
  int *unaff_RBX;
  float *unaff_RBP;
  int unaff_ESI;
  int *piVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t unaff_R13;
  int unaff_R14D;
  uint64_t uVar7;
  int *unaff_R15;
  uint64_t uVar8;
  float fVar9;
  int iStack0000000000000038;
  int iStack000000000000003c;
  int64_t local_var_40;
  int local_buffer_50;
  uint64_t local_var_2d0;
  uVar5 = unaff_R13 & 0xffffffff;
  if ((int)unaff_R13 < *unaff_RBX) {
    local_var_40 = local_var_40 - (int64_t)unaff_RBP;
    piVar3 = &local_buffer_00000050;
    uVar6 = unaff_R13;
    uVar7 = unaff_R13;
    uVar8 = unaff_R13;
    do {
      iVar1 = *(int *)(local_var_40 + (int64_t)unaff_RBP);
      iVar4 = (int)uVar5;
      if (iVar1 == 0) {
        for (fVar9 = *unaff_RBP; fVar9 < -180.0; fVar9 = fVar9 + 360.0) {
        }
        for (; local_buffer_50 = iVar4, 180.0 <= fVar9; fVar9 = fVar9 + -360.0) {
        }
LAB_1807d4cca:
        piVar3[1] = (int)fVar9;
// WARNING: Subroutine does not return
        AdvancedSystemController(fVar9 * 0.017453292);
      }
      if (iVar1 == 1) {
        fVar9 = *unaff_RBP;
        piVar3 = (int *)(*(int64_t *)(unaff_RBX + 6) + unaff_R13);
        *piVar3 = iVar4;
        for (; fVar9 < -180.0; fVar9 = fVar9 + 360.0) {
        }
        for (; 180.0 <= fVar9; fVar9 = fVar9 + -360.0) {
        }
        goto LAB_1807d4cca;
      }
      if (iVar1 == 2) {
        unaff_RBX[0x26] = iVar4;
      }
      else {
        if (iVar1 == 3) {
          piVar2 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + uVar6);
          uVar6 = uVar6 + 4;
        }
        else if (iVar1 == 4) {
          piVar2 = (int *)(*(int64_t *)(unaff_RBX + 0x2c) + uVar8);
          uVar8 = uVar8 + 4;
        }
        else {
          if (iVar1 != 5) goto LAB_1807d4d8d;
          piVar2 = (int *)(*(int64_t *)(unaff_RBX + 0x2e) + uVar7);
          uVar7 = uVar7 + 4;
        }
        *piVar2 = iVar4;
      }
LAB_1807d4d8d:
      uVar5 = (uint64_t)(iVar4 + 1U);
      unaff_RBP = unaff_RBP + 1;
    } while ((int)(iVar4 + 1U) < *unaff_RBX);
    unaff_R15 = unaff_RBX + 0xc;
    unaff_ESI = iStack0000000000000038;
    unaff_R14D = iStack000000000000003c;
  }
  if (unaff_ESI == 0) {
    if (unaff_R14D != 0) {
      *unaff_R15 = **(int **)(unaff_RBX + 0x2c);
      unaff_R15[1] = -0x3d4c0000;
// WARNING: Subroutine does not return
      AdvancedSystemController(0xbfc90fdb);
    }
  }
  else {
    SystemCore_d5970(param_1,&local_buffer_00000050,unaff_ESI);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_2d0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_d4c26(int32_t param_1)
void SystemCore_d4c26(int32_t param_1)
{
  int iVar1;
  int64_t in_RAX;
  int64_t in_RCX;
  int *piVar2;
  int *unaff_RBX;
  float *unaff_RBP;
  int *piVar3;
  int unaff_EDI;
  int64_t unaff_R13;
  int64_t lVar4;
  int64_t lVar5;
  float fVar6;
  int64_t lStack0000000000000030;
  int iStack0000000000000038;
  int iStack000000000000003c;
  int64_t lStack0000000000000040;
  int local_buffer_50;
  uint64_t local_var_2d0;
  lStack0000000000000040 = in_RAX - (int64_t)unaff_RBP;
  piVar3 = &local_buffer_00000050;
  lVar4 = unaff_R13;
  lVar5 = unaff_R13;
  do {
    iVar1 = *(int *)(lStack0000000000000040 + (int64_t)unaff_RBP);
    lStack0000000000000030 = in_RCX;
    if (iVar1 == 0) {
      for (fVar6 = *unaff_RBP; fVar6 < -180.0; fVar6 = fVar6 + 360.0) {
      }
      for (; local_buffer_50 = unaff_EDI, 180.0 <= fVar6; fVar6 = fVar6 + -360.0) {
      }
LAB_1807d4cca:
      piVar3[1] = (int)fVar6;
// WARNING: Subroutine does not return
      AdvancedSystemController(fVar6 * 0.017453292);
    }
    if (iVar1 == 1) {
      fVar6 = *unaff_RBP;
      piVar3 = (int *)(*(int64_t *)(unaff_RBX + 6) + in_RCX);
      lStack0000000000000030 = in_RCX + 0x14;
      *piVar3 = unaff_EDI;
      for (; fVar6 < -180.0; fVar6 = fVar6 + 360.0) {
      }
      for (; 180.0 <= fVar6; fVar6 = fVar6 + -360.0) {
      }
      goto LAB_1807d4cca;
    }
    if (iVar1 == 2) {
      unaff_RBX[0x26] = unaff_EDI;
    }
    else {
      if (iVar1 == 3) {
        piVar2 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + unaff_R13);
        unaff_R13 = unaff_R13 + 4;
      }
      else if (iVar1 == 4) {
        piVar2 = (int *)(*(int64_t *)(unaff_RBX + 0x2c) + lVar5);
        lVar5 = lVar5 + 4;
      }
      else {
        if (iVar1 != 5) goto LAB_1807d4d8d;
        piVar2 = (int *)(*(int64_t *)(unaff_RBX + 0x2e) + lVar4);
        lVar4 = lVar4 + 4;
      }
      *piVar2 = unaff_EDI;
    }
LAB_1807d4d8d:
    unaff_EDI = unaff_EDI + 1;
    unaff_RBP = unaff_RBP + 1;
    if (*unaff_RBX <= unaff_EDI) {
      if (iStack0000000000000038 == 0) {
        if (iStack000000000000003c != 0) {
          unaff_RBX[0xc] = **(int **)(unaff_RBX + 0x2c);
          unaff_RBX[0xd] = -0x3d4c0000;
// WARNING: Subroutine does not return
          AdvancedSystemController(0xbfc90fdb);
        }
      }
      else {
        SystemCore_d5970(param_1,&local_buffer_00000050,iStack0000000000000038);
      }
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_2d0 ^ (uint64_t)&local_buffer_00000000);
    }
  } while( true );
}
// 函数: void SystemCore_d4ddf(int32_t param_1)
void SystemCore_d4ddf(int32_t param_1)
{
  int64_t unaff_RBX;
  int unaff_ESI;
  int unaff_R14D;
  int32_t *unaff_R15;
  uint64_t local_var_2d0;
  if (unaff_ESI == 0) {
    if (unaff_R14D != 0) {
      *unaff_R15 = **(int32_t **)(unaff_RBX + 0xb0);
      unaff_R15[1] = 0xc2b40000;
// WARNING: Subroutine does not return
      AdvancedSystemController(0xbfc90fdb);
    }
  }
  else {
    SystemCore_d5970(param_1,&local_buffer_00000050,unaff_ESI);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_2d0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_d4deb(void)
void SystemCore_d4deb(void)
{
  uint64_t local_var_2d0;
  SystemCore_d5970();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_2d0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void SystemCore_d4ed0(int32_t *param_1,int32_t param_2,float param_3)
void SystemCore_d4ed0(int32_t *param_1,int32_t param_2,float param_3)
{
  *param_1 = param_2;
  if (param_3 < -180.0) {
    do {
      param_3 = param_3 + 360.0;
    } while (param_3 < -180.0);
  }
  for (; 180.0 <= param_3; param_3 = param_3 + -360.0) {
  }
  param_1[1] = param_3;
// WARNING: Subroutine does not return
  AdvancedSystemController(param_3 * 0.017453292);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_d4f50(uint64_t *param_1,int32_t *param_2,uint param_3,char param_4)
void SystemCore_d4f50(uint64_t *param_1,int32_t *param_2,uint param_3,char param_4)
{
  int32_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint64_t uVar10;
  float fVar11;
  int8_t stack_array_348 [32];
  int iStack_328;
  int8_t stack_array_318 [640];
  uint64_t local_var_98;
  local_var_98 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_348;
  *(int32_t *)(param_1 + 0x13) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(int32_t *)((int64_t)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x44) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x4c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(int32_t *)param_1 = *param_2;
  iVar2 = param_2[4];
  lVar3 = (int64_t)iVar2;
  if (param_4 == '\0') {
    lVar3 = (int64_t)(int)param_2[1];
    iVar7 = 0;
    iStack_328 = iVar2;
    if (0 < lVar3) {
      puVar8 = *(uint **)(param_2 + 2);
      iVar7 = 0;
      do {
        if ((param_3 >> (*puVar8 & 0x1f) & 1) != 0) {
          lVar4 = (int64_t)iVar7;
          iVar7 = iVar7 + 1;
          SystemCore_d4ed0(stack_array_318 + lVar4 * 0x14,*puVar8,puVar8[1]);
        }
        puVar8 = puVar8 + 5;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
    iVar7 = 0;
    iStack_328 = 0;
    if (0 < iVar2) {
      puVar8 = *(uint **)(param_2 + 6);
      iVar7 = 0;
      do {
        if ((param_3 >> (*puVar8 & 0x1f) & 1) != 0) {
          lVar4 = (int64_t)iVar7;
          iVar7 = iVar7 + 1;
          SystemCore_d4ed0(stack_array_318 + lVar4 * 0x14,*puVar8,puVar8[1]);
        }
        puVar8 = puVar8 + 5;
        lVar3 = lVar3 + -1;
        iStack_328 = 0;
      } while (lVar3 != 0);
    }
  }
  uVar6 = 0;
  iVar2 = SystemCore_d4590(param_1,param_2[0x27],param_2[0x2a],iVar7);
  if (iVar2 == 0) {
    if (0 < *(int *)(param_1 + 2)) {
      puVar1 = (int32_t *)param_1[3];
      fVar11 = (float)(*(int32_t **)(param_2 + 6))[1];
      *puVar1 = **(int32_t **)(param_2 + 6);
      for (; fVar11 < -180.0; fVar11 = fVar11 + 360.0) {
      }
      for (; 180.0 <= fVar11; fVar11 = fVar11 + -360.0) {
      }
      puVar1[1] = fVar11;
// WARNING: Subroutine does not return
      AdvancedSystemController(fVar11 * 0.017453292);
    }
    uVar5 = uVar6;
    uVar10 = uVar6;
    if (0 < *(int *)((int64_t)param_1 + 0x9c)) {
      do {
        uVar9 = (int)uVar10 + 1;
        *(int32_t *)(uVar5 + param_1[0x14]) =
             *(int32_t *)(uVar5 + *(int64_t *)(param_2 + 0x28));
        uVar5 = uVar5 + 4;
        uVar10 = (uint64_t)uVar9;
      } while ((int)uVar9 < *(int *)((int64_t)param_1 + 0x9c));
    }
    uVar5 = uVar6;
    if (0 < *(int *)(param_1 + 0x15)) {
      do {
        uVar9 = (int)uVar5 + 1;
        *(int32_t *)(uVar6 + param_1[0x16]) =
             *(int32_t *)(uVar6 + *(int64_t *)(param_2 + 0x2c));
        *(int32_t *)(uVar6 + param_1[0x17]) =
             *(int32_t *)(uVar6 + *(int64_t *)(param_2 + 0x2e));
        uVar6 = uVar6 + 4;
        uVar5 = (uint64_t)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0x15));
    }
    uVar9 = param_2[0x26];
    if ((uVar9 != 0xffffffff) && ((param_3 >> (uVar9 & 0x1f) & 1) != 0)) {
      *(uint *)(param_1 + 0x13) = uVar9;
    }
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0x15) != 0) {
        *(int32_t *)(param_1 + 6) = *(int32_t *)param_1[0x16];
        *(int32_t *)((int64_t)param_1 + 0x34) = 0xc2b40000;
// WARNING: Subroutine does not return
        AdvancedSystemController(0xbfc90fdb);
      }
    }
    else {
      SystemCore_d5970(param_1,stack_array_318,iVar7);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)stack_array_348);
}
// 函数: void SystemCore_d50c4(void)
void SystemCore_d50c4(void)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  float fVar2;
  lVar1 = *(int64_t *)(unaff_RBX + 0x18);
  fVar2 = *(float *)(unaff_RDI + 4 + *(int64_t *)(unaff_R14 + 0x18));
  *(int32_t *)(unaff_RDI + lVar1) = *(int32_t *)(unaff_RDI + *(int64_t *)(unaff_R14 + 0x18));
  for (; fVar2 < -180.0; fVar2 = fVar2 + 360.0) {
  }
  for (; 180.0 <= fVar2; fVar2 = fVar2 + -360.0) {
  }
  *(float *)(unaff_RDI + 4 + lVar1) = fVar2;
// WARNING: Subroutine does not return
  AdvancedSystemController(fVar2 * 0.017453292);
}
// 函数: void SystemCore_d51c3(int32_t param_1)
void SystemCore_d51c3(int32_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int unaff_EBP;
  int unaff_EDI;
  int32_t unaff_0000003c;
  int iVar3;
  uint unaff_R12D;
  int64_t unaff_R14;
  uint64_t local_var_2b0;
  if (0 < *(int *)(unaff_RBX + 0x9c)) {
    lVar2 = CONCAT44(unaff_0000003c,unaff_EDI);
    iVar3 = unaff_EDI;
    do {
      iVar3 = iVar3 + 1;
      *(int32_t *)(lVar2 + *(int64_t *)(unaff_RBX + 0xa0)) =
           *(int32_t *)(lVar2 + *(int64_t *)(unaff_R14 + 0xa0));
      lVar2 = lVar2 + 4;
    } while (iVar3 < *(int *)(unaff_RBX + 0x9c));
  }
  if (0 < *(int *)(unaff_RBX + 0xa8)) {
    lVar2 = CONCAT44(unaff_0000003c,unaff_EDI);
    do {
      unaff_EDI = unaff_EDI + 1;
      *(int32_t *)(lVar2 + *(int64_t *)(unaff_RBX + 0xb0)) =
           *(int32_t *)(lVar2 + *(int64_t *)(unaff_R14 + 0xb0));
      *(int32_t *)(lVar2 + *(int64_t *)(unaff_RBX + 0xb8)) =
           *(int32_t *)(lVar2 + *(int64_t *)(unaff_R14 + 0xb8));
      lVar2 = lVar2 + 4;
    } while (unaff_EDI < *(int *)(unaff_RBX + 0xa8));
  }
  uVar1 = *(uint *)(unaff_R14 + 0x98);
  if ((uVar1 != 0xffffffff) && ((unaff_R12D >> (uVar1 & 0x1f) & 1) != 0)) {
    *(uint *)(unaff_RBX + 0x98) = uVar1;
  }
  if (unaff_EBP == 0) {
    if (*(int *)(unaff_RBX + 0xa8) != 0) {
      *(int32_t *)(unaff_RBX + 0x30) = **(int32_t **)(unaff_RBX + 0xb0);
      *(int32_t *)(unaff_RBX + 0x34) = 0xc2b40000;
// WARNING: Subroutine does not return
      AdvancedSystemController(0xbfc90fdb);
    }
  }
  else {
    SystemCore_d5970(param_1,&local_buffer_00000030,unaff_EBP);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_2b0 ^ (uint64_t)&local_buffer_00000000);
}
uint64_t SystemCore_d5340(int64_t *param_1,float param_2,float param_3,float *param_4,float *param_5)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  fVar6 = *(float *)(lVar1 + 4);
  fVar7 = *(float *)(lVar2 + 4);
  if (fVar7 < fVar6) {
    if (param_3 <= param_2) {
      if ((param_3 < fVar6) && (fVar7 < param_2)) {
        if (param_5 != (float *)0x0) {
          if (param_3 <= fVar7) {
            fVar7 = param_3;
          }
          *param_5 = fVar7;
        }
        if (param_4 != (float *)0x0) {
          if (fVar6 <= param_2) {
            fVar6 = param_2;
          }
          *param_4 = fVar6;
        }
        return 1;
      }
      if (fVar7 <= param_2) {
        *param_4 = fVar6;
        *param_5 = param_3;
        fVar6 = *param_4;
        uVar4 = (uint64_t)(param_3 != fVar6);
        param_4[uVar4] = param_2;
        fVar7 = *(float *)(lVar2 + 4);
        param_5[uVar4] = fVar7;
        if (fVar7 != param_4[uVar4]) {
          uVar4 = (uint64_t)((param_3 != fVar6) + 1);
        }
      }
      else {
        *param_4 = param_2;
        *param_5 = *(float *)(lVar2 + 4);
        param_4[1] = *(float *)(lVar1 + 4);
        uVar4 = 1;
        param_5[1] = param_3;
        if (param_3 != param_4[1]) {
          return 2;
        }
      }
      return uVar4;
    }
    uVar3 = 1;
    if ((180.0 <= param_2) || (param_3 <= fVar6)) {
      uVar5 = 0;
    }
    else {
      if (param_4 != (float *)0x0) {
        if (fVar6 <= param_2) {
          fVar6 = param_2;
        }
        *param_4 = fVar6;
      }
      if (param_5 != (float *)0x0) {
        fVar6 = param_3;
        if (180.0 <= param_3) {
          fVar6 = 180.0;
        }
        *param_5 = fVar6;
      }
      uVar5 = 1;
    }
    fVar6 = *(float *)(lVar2 + 4);
    if ((param_2 < fVar6) && (-180.0 < param_3)) {
      if (param_4 + uVar5 != (float *)0x0) {
        if (param_2 <= -180.0) {
          param_2 = -180.0;
        }
        param_4[uVar5] = param_2;
      }
      if (param_5 + uVar5 != (float *)0x0) {
        if (param_3 <= fVar6) {
          fVar6 = param_3;
        }
        param_5[uVar5] = fVar6;
        return (uint64_t)(uVar5 + 1);
      }
      goto LAB_1807d5430;
    }
  }
  else {
    if (param_2 < param_3) {
      if ((param_2 < fVar7) && (fVar6 < param_3)) {
        if (param_4 != (float *)0x0) {
          if (fVar6 <= param_2) {
            fVar6 = param_2;
          }
          *param_4 = fVar6;
        }
        if (param_5 != (float *)0x0) {
          if (param_3 <= fVar7) {
            fVar7 = param_3;
          }
          *param_5 = fVar7;
        }
        return 1;
      }
      return 0;
    }
    uVar3 = 1;
    if ((fVar7 <= param_2) || (180.0 <= fVar6)) {
      uVar5 = 0;
    }
    else {
      if (param_4 != (float *)0x0) {
        if (fVar6 <= param_2) {
          fVar6 = param_2;
        }
        *param_4 = fVar6;
      }
      uVar5 = uVar3;
      if (param_5 != (float *)0x0) {
        if (180.0 <= fVar7) {
          fVar7 = 180.0;
        }
        *param_5 = fVar7;
      }
    }
    fVar6 = *(float *)(lVar2 + 4);
    if ((-180.0 < fVar6) && (fVar7 = *(float *)(lVar1 + 4), fVar7 < param_3)) {
      if (param_4 + uVar5 != (float *)0x0) {
        if (fVar7 <= -180.0) {
          fVar7 = -180.0;
        }
        param_4[uVar5] = fVar7;
      }
      if (param_5 + uVar5 != (float *)0x0) {
        if (param_3 <= fVar6) {
          fVar6 = param_3;
        }
        param_5[uVar5] = fVar6;
        return (uint64_t)(uVar5 + 1);
      }
      goto LAB_1807d5430;
    }
  }
  uVar3 = 0;
LAB_1807d5430:
  return (uint64_t)(uVar3 + uVar5);
}
// 函数: void SystemCore_d5580(int param_1,float param_2,int param_3,int64_t param_4,int param_5,
void SystemCore_d5580(int param_1,float param_2,int param_3,int64_t param_4,int param_5,
                  int64_t param_6)
{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint64_t uVar6;
  float *pfVar7;
  int iVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  float fVar14;
  iVar10 = 0;
  fVar14 = 0.0;
  iVar8 = 0;
  if (3 < param_1) {
    lVar11 = (int64_t)(param_3 * 2);
    pfVar5 = (float *)(param_4 + lVar11 * 4);
    uVar4 = (param_1 - 4U >> 2) + 1;
    uVar6 = (uint64_t)uVar4;
    iVar8 = uVar4 * 4;
    do {
      pfVar7 = pfVar5 + -lVar11;
      pfVar1 = pfVar5 + (param_3 - lVar11);
      fVar3 = *pfVar5;
      pfVar2 = pfVar5 + (param_3 * 3 - lVar11);
      pfVar5 = pfVar5 + param_3 * 4;
      fVar14 = fVar14 + *pfVar7 * *pfVar7 + *pfVar1 * *pfVar1 + fVar3 * fVar3 + *pfVar2 * *pfVar2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (iVar8 < param_1) {
    uVar6 = (uint64_t)(uint)(param_1 - iVar8);
    pfVar5 = (float *)(param_4 + (int64_t)(iVar8 * param_3) * 4);
    do {
      fVar3 = *pfVar5;
      pfVar5 = pfVar5 + param_3;
      fVar14 = fVar14 + fVar3 * fVar3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (fVar14 != 0.0) {
    param_2 = param_2 / SQRT(fVar14);
    if (3 < param_1) {
      lVar12 = (int64_t)(param_5 * 2);
      lVar13 = param_5 - lVar12;
      pfVar5 = (float *)(param_6 + lVar12 * 4);
      lVar9 = (int64_t)(param_3 * 2);
      lVar11 = param_5 * 3 - lVar12;
      pfVar7 = (float *)(param_4 + lVar9 * 4);
      uVar4 = (param_1 - 4U >> 2) + 1;
      uVar6 = (uint64_t)uVar4;
      iVar10 = uVar4 * 4;
      do {
        pfVar5[-lVar12] = param_2 * pfVar7[-lVar9] + pfVar5[-lVar12];
        pfVar5[lVar13] = param_2 * pfVar7[param_3 - lVar9] + pfVar5[lVar13];
        *pfVar5 = param_2 * *pfVar7 + *pfVar5;
        pfVar1 = pfVar7 + (param_3 * 3 - lVar9);
        pfVar7 = pfVar7 + param_3 * 4;
        pfVar5[lVar11] = param_2 * *pfVar1 + pfVar5[lVar11];
        pfVar5 = pfVar5 + param_5 * 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (iVar10 < param_1) {
      pfVar5 = (float *)(param_6 + (int64_t)(iVar10 * param_5) * 4);
      pfVar7 = (float *)(param_4 + (int64_t)(iVar10 * param_3) * 4);
      uVar6 = (uint64_t)(uint)(param_1 - iVar10);
      do {
        fVar14 = *pfVar7;
        pfVar7 = pfVar7 + param_3;
        *pfVar5 = param_2 * fVar14 + *pfVar5;
        pfVar5 = pfVar5 + param_5;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}
// 函数: void SystemCore_d5683(void)
void SystemCore_d5683(void)
{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t unaff_RDI;
  int64_t lVar11;
  int in_R10D;
  int in_R11D;
  int32_t in_register_0000009c;
  int64_t unaff_R12;
  float in_XMM3_Da;
  int64_t local_var_48;
  int64_t local_var_58;
  iVar3 = (int)unaff_RDI;
  lVar11 = (int64_t)(iVar3 * 2);
  pfVar6 = (float *)(local_var_58 + lVar11 * 4);
  lVar9 = (int64_t)(in_R11D * 2);
  lVar8 = iVar3 * 3 - lVar11;
  pfVar7 = (float *)(unaff_R12 + lVar9 * 4);
  uVar4 = (in_R10D - 4U >> 2) + 1;
  uVar5 = (uint64_t)uVar4;
  iVar10 = uVar4 * 4;
  do {
    pfVar6[-lVar11] = in_XMM3_Da * pfVar7[-lVar9] + pfVar6[-lVar11];
    pfVar6[unaff_RDI - lVar11] =
         in_XMM3_Da * pfVar7[CONCAT44(in_register_0000009c,in_R11D) - lVar9] +
         pfVar6[unaff_RDI - lVar11];
    *pfVar6 = in_XMM3_Da * *pfVar7 + *pfVar6;
    pfVar1 = pfVar7 + (in_R11D * 3 - lVar9);
    pfVar7 = pfVar7 + in_R11D * 4;
    pfVar6[lVar8] = in_XMM3_Da * *pfVar1 + pfVar6[lVar8];
    pfVar6 = pfVar6 + iVar3 * 4;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  if (iVar10 < in_R10D) {
    pfVar6 = (float *)(local_var_58 + (int64_t)(iVar10 * iVar3) * 4);
    pfVar7 = (float *)(local_var_48 + (int64_t)(iVar10 * in_R11D) * 4);
    uVar5 = (uint64_t)(in_R10D + uVar4 * -4);
    do {
      fVar2 = *pfVar7;
      pfVar7 = pfVar7 + CONCAT44(in_register_0000009c,in_R11D);
      *pfVar6 = in_XMM3_Da * fVar2 + *pfVar6;
      pfVar6 = pfVar6 + unaff_RDI;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}