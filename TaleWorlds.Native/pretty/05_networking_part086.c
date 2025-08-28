#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
// 05_networking_part086.c - 9 个函数
// 函数: void NetworkProtocol_8f6f7(void)
void NetworkProtocol_8f6f7(void)
{
  return;
}
uint64_t SystemSynchronizer(uint64_t *param_1,uint64_t *param_2)
{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  uint64_t uVar6;
  byte *pbVar7;
  bool bVar8;
  byte *pbVar9;
  pbVar7 = (byte *)*param_1;
  while( true ) {
    bVar1 = *pbVar7;
    uVar6 = (uint64_t)bVar1;
    if ((0x20 < bVar1) || ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0)) break;
    pbVar7 = pbVar7 + 1;
  }
  if (bVar1 == 0) {
    return 0x13;
  }
  iVar3 = 0;
  bVar8 = false;
  pbVar9 = (byte *)0x0;
  pbVar4 = pbVar7;
  bVar2 = false;
LAB_18088f755:
  cVar5 = (char)uVar6;
  if (cVar5 == ',') {
    if ((iVar3 == 0) && (!bVar2)) {
LAB_18088f7e1:
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
LAB_18088f7e7:
      if ((*pbVar7 == 0x7b) && (pbVar9 != (byte *)0x0)) {
        pbVar7 = pbVar7 + 1;
        *pbVar9 = 0;
      }
      *param_1 = pbVar4;
      *param_2 = pbVar7;
      return 0;
    }
  }
  else {
    if ((cVar5 == '\n') || (cVar5 == '\r')) {
      if (iVar3 != 0) {
        return 0x13;
      }
      if (bVar2) {
        return 0x13;
      }
      goto LAB_18088f7e1;
    }
    if (cVar5 == '\0') {
      if (iVar3 != 0) {
        return 0x13;
      }
      if (bVar2) {
        return 0x13;
      }
      goto LAB_18088f7e7;
    }
  }
  if (cVar5 == '\"') {
    uVar6 = (uint64_t)pbVar4[1];
    bVar8 = bVar8 == false;
    pbVar4 = pbVar4 + 1;
    bVar2 = bVar8;
    goto LAB_18088f755;
  }
  if (!bVar2) {
    if (*pbVar4 == 0x7b) {
      uVar6 = (uint64_t)pbVar4[1];
      iVar3 = iVar3 + 1;
      pbVar4 = pbVar4 + 1;
      goto LAB_18088f755;
    }
    if (*pbVar4 != 0x7d) goto LAB_18088f7b5;
    pbVar9 = pbVar4;
    if (iVar3 == 0) goto LAB_18088f7e7;
    iVar3 = iVar3 + -1;
  }
LAB_18088f7b5:
  uVar6 = (uint64_t)pbVar4[1];
  pbVar4 = pbVar4 + 1;
  goto LAB_18088f755;
}
int64_t * NetworkProtocol_8f810(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int iVar12;
  int64_t lStackX_18;
  plVar8 = (int64_t *)SystemFunction_00018088c530(param_1,&lStackX_18);
  if ((int)plVar8 == 0) {
    lVar1 = *(int64_t *)(param_2 + 0x90);
    lVar2 = *(int64_t *)(lVar1 + 0x130);
    lVar11 = *(int64_t *)(lStackX_18 + 0x10);
    uVar3 = *(uint *)(lVar11 + 0x10);
    uVar4 = *(uint *)(lVar11 + 0x14);
    lVar7 = *(int64_t *)(lVar11 + 0x10);
    uVar5 = *(uint *)(lVar11 + 0x18);
    uVar6 = *(uint *)(lVar11 + 0x1c);
    lVar11 = *(int64_t *)(lVar11 + 0x18);
    if (lVar2 != 0) {
      SystemMemoryAllocator(lVar2);
    }
    plVar8 = (int64_t *)0x0;
    if (((*(int *)(lVar1 + 0x15c) != 0) && (*(int *)(lVar1 + 0x140) != 0)) &&
       (iVar12 = *(int *)(*(int64_t *)(lVar1 + 0x138) +
                         (int64_t)
                         (int)((uVar3 ^ uVar4 ^ uVar5 ^ uVar6) & *(int *)(lVar1 + 0x140) - 1U) * 4),
       iVar12 != -1)) {
      do {
        plVar9 = (int64_t *)((int64_t)iVar12 * 0x20 + *(int64_t *)(lVar1 + 0x148));
        if ((*plVar9 == lVar7) && (plVar9[1] == lVar11)) {
          plVar9 = (int64_t *)plVar9[3];
          if (plVar9 != (int64_t *)0x0) goto LAB_18088f951;
          break;
        }
        iVar12 = (int)plVar9[2];
      } while (iVar12 != -1);
    }
    plVar9 = plVar8;
    if (((*(int *)(lVar1 + 300) != 0) && (*(int *)(lVar1 + 0x110) != 0)) &&
       (iVar12 = *(int *)(*(int64_t *)(lVar1 + 0x108) +
                         (int64_t)
                         (int)((uVar3 ^ uVar4 ^ uVar5 ^ uVar6) & *(int *)(lVar1 + 0x110) - 1U) * 4),
       iVar12 != -1)) {
      do {
        plVar10 = (int64_t *)((int64_t)iVar12 * 0x20 + *(int64_t *)(lVar1 + 0x118));
        if ((*plVar10 == lVar7) && (plVar10[1] == lVar11)) {
          plVar9 = (int64_t *)plVar10[3];
          break;
        }
        iVar12 = (int)plVar10[2];
      } while (iVar12 != -1);
    }
    if (plVar9 == (int64_t *)0x0) {
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        SystemMemoryManager(lVar2);
      }
    }
    else {
LAB_18088f951:
      plVar10 = plVar8;
      if (((*(int *)((int64_t)plVar9 + 0x24) != 0) && ((int)plVar9[1] != 0)) &&
         (iVar12 = *(int *)(*plVar9 + -4 + (int64_t)(int)plVar9[1] * 4), iVar12 != -1)) {
        lVar1 = plVar9[2];
        do {
          lVar11 = (int64_t)iVar12;
          if (*(int *)(lVar1 + lVar11 * 0x10) == -1) {
            plVar10 = *(int64_t **)(lVar1 + 8 + lVar11 * 0x10);
            break;
          }
          iVar12 = *(int *)(lVar1 + 4 + lVar11 * 0x10);
        } while (iVar12 != -1);
      }
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        SystemMemoryManager(lVar2);
      }
      if (plVar10 != (int64_t *)0x0) {
        if (*(int64_t **)(lStackX_18 + 8) == (int64_t *)0x0) {
          if (plVar10[9] == 0) {
            NetworkProtocol_8c9b0(lStackX_18,plVar10);
            plVar10[9] = lStackX_18;
            return (int64_t *)0x0;
          }
        }
        else if ((plVar10[9] == lStackX_18) && (*(int64_t **)(lStackX_18 + 8) == plVar10)) {
          return (int64_t *)0x0;
        }
        plVar8 = (int64_t *)0x1c;
        NetworkProtocol_8c8a0(lStackX_18);
      }
    }
  }
  return plVar8;
}
int64_t * NetworkProtocol_8f832(void)
{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int iVar8;
  int64_t unaff_RBX;
  int64_t *plVar9;
  uint local_buffer_28;
  uint local_buffer_2c;
  int64_t local_buffer_50;
  lVar1 = *(int64_t *)(unaff_RBX + 0x130);
  lVar2 = *(int64_t *)(local_buffer_50 + 0x10);
  uVar3 = *(uint *)(lVar2 + 0x10);
  uVar4 = *(uint *)(lVar2 + 0x14);
  lVar7 = *(int64_t *)(lVar2 + 0x10);
  local_buffer_28 = *(uint *)(lVar2 + 0x18);
  local_buffer_2c = *(uint *)(lVar2 + 0x1c);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  plVar9 = (int64_t *)0x0;
  if (((*(int *)(unaff_RBX + 0x15c) != 0) && (*(int *)(unaff_RBX + 0x140) != 0)) &&
     (iVar8 = *(int *)(*(int64_t *)(unaff_RBX + 0x138) +
                      (int64_t)
                      (int)((uVar3 ^ uVar4 ^ local_buffer_28 ^ local_buffer_2c) &
                           *(int *)(unaff_RBX + 0x140) - 1U) * 4), iVar8 != -1)) {
    do {
      plVar5 = (int64_t *)((int64_t)iVar8 * 0x20 + *(int64_t *)(unaff_RBX + 0x148));
      if ((*plVar5 == lVar7) &&
         (plVar5[1] == CONCAT44(local_buffer_2c,local_buffer_28))) {
        plVar5 = (int64_t *)plVar5[3];
        if (plVar5 != (int64_t *)0x0) goto LAB_18088f951;
        break;
      }
      iVar8 = (int)plVar5[2];
    } while (iVar8 != -1);
  }
  plVar5 = plVar9;
  if (((*(int *)(unaff_RBX + 300) != 0) && (*(int *)(unaff_RBX + 0x110) != 0)) &&
     (iVar8 = *(int *)(*(int64_t *)(unaff_RBX + 0x108) +
                      (int64_t)
                      (int)((uVar3 ^ uVar4 ^ local_buffer_28 ^ local_buffer_2c) &
                           *(int *)(unaff_RBX + 0x110) - 1U) * 4), iVar8 != -1)) {
    do {
      plVar6 = (int64_t *)((int64_t)iVar8 * 0x20 + *(int64_t *)(unaff_RBX + 0x118));
      if ((*plVar6 == lVar7) &&
         (plVar6[1] == CONCAT44(local_buffer_2c,local_buffer_28))) {
        plVar5 = (int64_t *)plVar6[3];
        break;
      }
      iVar8 = (int)plVar6[2];
    } while (iVar8 != -1);
  }
  if (plVar5 == (int64_t *)0x0) {
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
  }
  else {
LAB_18088f951:
    plVar6 = plVar9;
    if (((*(int *)((int64_t)plVar5 + 0x24) != 0) && ((int)plVar5[1] != 0)) &&
       (iVar8 = *(int *)(*plVar5 + -4 + (int64_t)(int)plVar5[1] * 4), iVar8 != -1)) {
      lVar2 = plVar5[2];
      do {
        lVar7 = (int64_t)iVar8;
        if (*(int *)(lVar2 + lVar7 * 0x10) == -1) {
          plVar6 = *(int64_t **)(lVar2 + 8 + lVar7 * 0x10);
          break;
        }
        iVar8 = *(int *)(lVar2 + 4 + lVar7 * 0x10);
      } while (iVar8 != -1);
    }
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    if (plVar6 != (int64_t *)0x0) {
      if (*(int64_t **)(local_buffer_50 + 8) == (int64_t *)0x0) {
        if (plVar6[9] == 0) {
          NetworkProtocol_8c9b0(local_buffer_50,plVar6);
          plVar6[9] = local_buffer_50;
          return (int64_t *)0x0;
        }
      }
      else if ((plVar6[9] == local_buffer_50) && (*(int64_t **)(local_buffer_50 + 8) == plVar6)
              ) {
        return (int64_t *)0x0;
      }
      plVar9 = (int64_t *)0x1c;
      NetworkProtocol_8c8a0(local_buffer_50);
    }
  }
  return plVar9;
}
// 函数: void NetworkProtocol_8f9ec(void)
void NetworkProtocol_8f9ec(void)
{
  return;
}
int64_t NetworkProtocol_8fa00(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lStackX_18;
  lVar3 = SystemFunction_00018088c530(param_1,&lStackX_18);
  if ((int)lVar3 == 0) {
    lVar3 = *(int64_t *)(param_2 + 0x90);
    lVar1 = *(int64_t *)(lVar3 + 0x200);
    lVar7 = *(int64_t *)(lStackX_18 + 0x10);
    if (lVar1 != 0) {
      SystemMemoryAllocator(lVar1);
    }
    plVar4 = (int64_t *)SystemFunction_000180851be0(lVar3 + 0x208,lVar7 + 0x10);
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = (int64_t *)SystemFunction_000180851be0(lVar3 + 0x1d8,lVar7 + 0x10);
    }
    lVar3 = 0;
    if (plVar4 == (int64_t *)0x0) {
      if (lVar1 != 0) {
// WARNING: Subroutine does not return
        SystemMemoryManager(lVar1);
      }
    }
    else {
      lVar7 = lVar3;
      if (((*(int *)((int64_t)plVar4 + 0x24) != 0) && ((int)plVar4[1] != 0)) &&
         (iVar6 = *(int *)(*plVar4 + -4 + (int64_t)(int)plVar4[1] * 4), iVar6 != -1)) {
        lVar2 = plVar4[2];
        do {
          lVar5 = (int64_t)iVar6;
          if (*(int *)(lVar2 + lVar5 * 0x10) == -1) {
            lVar7 = *(int64_t *)(lVar2 + 8 + lVar5 * 0x10);
            break;
          }
          iVar6 = *(int *)(lVar2 + 4 + lVar5 * 0x10);
        } while (iVar6 != -1);
      }
      if (lVar1 != 0) {
// WARNING: Subroutine does not return
        SystemMemoryManager(lVar1);
      }
      if (lVar7 != 0) {
        if (*(int64_t *)(lStackX_18 + 8) == 0) {
          if (*(int64_t *)(lVar7 + 0x60) == 0) {
            *(int64_t *)(lStackX_18 + 8) = lVar7;
            *(int64_t *)(lVar7 + 0x60) = lStackX_18;
            return 0;
          }
        }
        else if ((*(int64_t *)(lVar7 + 0x60) == lStackX_18) &&
                (*(int64_t *)(lStackX_18 + 8) == lVar7)) {
          return 0;
        }
        lVar3 = 0x1c;
        NetworkProtocol_8cae0(lStackX_18);
      }
    }
  }
  return lVar3;
}
int64_t NetworkProtocol_8fa22(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int iVar5;
  int64_t unaff_RBX;
  int64_t lVar6;
  int64_t lVar7;
  int64_t local_var_40;
  lVar1 = *(int64_t *)(unaff_RBX + 0x200);
  lVar7 = *(int64_t *)(local_var_40 + 0x10);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  plVar3 = (int64_t *)SystemFunction_000180851be0(unaff_RBX + 0x208,lVar7 + 0x10);
  if (plVar3 == (int64_t *)0x0) {
    plVar3 = (int64_t *)SystemFunction_000180851be0(unaff_RBX + 0x1d8,lVar7 + 0x10);
  }
  lVar7 = 0;
  if (plVar3 == (int64_t *)0x0) {
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
  }
  else {
    lVar6 = lVar7;
    if (((*(int *)((int64_t)plVar3 + 0x24) != 0) && ((int)plVar3[1] != 0)) &&
       (iVar5 = *(int *)(*plVar3 + -4 + (int64_t)(int)plVar3[1] * 4), iVar5 != -1)) {
      lVar2 = plVar3[2];
      do {
        lVar4 = (int64_t)iVar5;
        if (*(int *)(lVar2 + lVar4 * 0x10) == -1) {
          lVar6 = *(int64_t *)(lVar2 + 8 + lVar4 * 0x10);
          break;
        }
        iVar5 = *(int *)(lVar2 + 4 + lVar4 * 0x10);
      } while (iVar5 != -1);
    }
    if (lVar1 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    if (lVar6 != 0) {
      if (*(int64_t *)(local_var_40 + 8) == 0) {
        if (*(int64_t *)(lVar6 + 0x60) == 0) {
          *(int64_t *)(local_var_40 + 8) = lVar6;
          *(int64_t *)(lVar6 + 0x60) = local_var_40;
          return 0;
        }
      }
      else if ((*(int64_t *)(lVar6 + 0x60) == local_var_40) &&
              (*(int64_t *)(local_var_40 + 8) == lVar6)) {
        return 0;
      }
      lVar7 = 0x1c;
      NetworkProtocol_8cae0(local_var_40);
    }
  }
  return lVar7;
}
// 函数: void NetworkProtocol_8fb33(void)
void NetworkProtocol_8fb33(void)
{
  return;
}
int NetworkProtocol_8fb40(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + 1;
  bVar1 = false;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  iVar2 = NetworkProtocol_b6e80(param_1 + 0x3c8,param_2,*(int32_t *)(param_1 + 0x548),param_3);
  if (iVar2 == 0) {
    iVar3 = 0x1c;
    iVar2 = iVar3;
    if (0 < *(int *)(param_1 + 0x98)) {
      if ((*(int *)(param_1 + 0x98) != 1) || (iVar2 = NetworkProtocol_501b0(param_1 + 0x38), iVar2 == 0)) {
        iVar2 = 0;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      }
      bVar4 = iVar2 == 0;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = iVar3;
      if (0 < *(int *)(param_1 + 0x168)) {
        if ((*(int *)(param_1 + 0x168) != 1) || (iVar2 = NetworkProtocol_4f7f0(param_1 + 0x108), iVar2 == 0)
           ) {
          iVar2 = 0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        bVar5 = iVar2 == 0;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        iVar2 = iVar3;
        if (0 < *(int *)(param_1 + 0x1d0)) {
          if ((*(int *)(param_1 + 0x1d0) != 1) ||
             (iVar2 = NetworkProtocol_4fcd0(param_1 + 0x170), iVar2 == 0)) {
            iVar2 = 0;
            *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
          }
          bVar6 = iVar2 == 0;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          if (0 < *(int *)(param_1 + 0x238)) {
            if ((*(int *)(param_1 + 0x238) != 1) ||
               (iVar3 = NetworkProtocol_50690(param_1 + 0x1d8), iVar3 == 0)) {
              *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
              iVar3 = 0;
            }
            bVar1 = false;
            if (iVar3 == 0) {
              bVar1 = true;
            }
          }
          iVar2 = iVar3;
          if (iVar3 == 0) {
            iVar2 = 0;
          }
          if ((iVar2 == 0) && ((iVar2 = NetworkProtocol_bd690(param_1), iVar2 == 0 || (iVar2 == 0)))) {
            iVar2 = 0;
          }
        }
      }
    }
  }
  if (!bVar1) {
    *(int32_t *)(param_1 + 0x238) = 0;
    RenderingEngine_ShaderProcessor(param_1 + 0x208);
  }
  if (!bVar5) {
    *(int32_t *)(param_1 + 0x168) = 0;
    SystemCore_CacheManager(param_1 + 0x138);
  }
  if (!bVar6) {
    *(int32_t *)(param_1 + 0x1d0) = 0;
    SystemCore_CacheManager(param_1 + 0x1a0);
  }
  if (!bVar4) {
    *(int32_t *)(param_1 + 0x98) = 0;
    SystemCore_NetworkProcessor(param_1 + 0x68);
  }
  return iVar2;
}
int NetworkProtocol_8fb47(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  *(int *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) + 1;
  bVar1 = false;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  iVar2 = NetworkProtocol_b6e80(param_1 + 0x3c8,param_2,*(int32_t *)(param_1 + 0x548),param_3);
  if (iVar2 == 0) {
    iVar3 = 0x1c;
    iVar2 = iVar3;
    if (0 < *(int *)(param_1 + 0x98)) {
      if ((*(int *)(param_1 + 0x98) != 1) || (iVar2 = NetworkProtocol_501b0(param_1 + 0x38), iVar2 == 0)) {
        iVar2 = 0;
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      }
      bVar4 = iVar2 == 0;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = iVar3;
      if (0 < *(int *)(param_1 + 0x168)) {
        if ((*(int *)(param_1 + 0x168) != 1) || (iVar2 = NetworkProtocol_4f7f0(param_1 + 0x108), iVar2 == 0)
           ) {
          iVar2 = 0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        bVar5 = iVar2 == 0;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        iVar2 = iVar3;
        if (0 < *(int *)(param_1 + 0x1d0)) {
          if ((*(int *)(param_1 + 0x1d0) != 1) ||
             (iVar2 = NetworkProtocol_4fcd0(param_1 + 0x170), iVar2 == 0)) {
            iVar2 = 0;
            *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
          }
          bVar6 = iVar2 == 0;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          if (0 < *(int *)(param_1 + 0x238)) {
            if ((*(int *)(param_1 + 0x238) != 1) ||
               (iVar3 = NetworkProtocol_50690(param_1 + 0x1d8), iVar3 == 0)) {
              *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
              iVar3 = 0;
            }
            bVar1 = false;
            if (iVar3 == 0) {
              bVar1 = true;
            }
          }
          iVar2 = iVar3;
          if (iVar3 == 0) {
            iVar2 = 0;
          }
          if ((iVar2 == 0) && ((iVar2 = NetworkProtocol_bd690(param_1), iVar2 == 0 || (iVar2 == 0)))) {
            iVar2 = 0;
          }
        }
      }
    }
  }
  if (!bVar1) {
    *(int32_t *)(param_1 + 0x238) = 0;
    RenderingEngine_ShaderProcessor(param_1 + 0x208);
  }
  if (!bVar5) {
    *(int32_t *)(param_1 + 0x168) = 0;
    SystemCore_CacheManager(param_1 + 0x138);
  }
  if (!bVar6) {
    *(int32_t *)(param_1 + 0x1d0) = 0;
    SystemCore_CacheManager(param_1 + 0x1a0);
  }
  if (!bVar4) {
    *(int32_t *)(param_1 + 0x98) = 0;
    SystemCore_NetworkProcessor(param_1 + 0x68);
  }
  return iVar2;
}
int NetworkProtocol_8fb75(int64_t param_1,uint64_t param_2)
{
  bool bVar1;
  int iVar2;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bVar1 = false;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  iVar2 = NetworkProtocol_b6e80(param_1 + 0x3c8,param_2,*(int32_t *)(param_1 + 0x548));
  if (iVar2 == 0) {
    iVar3 = 0x1c;
    iVar2 = iVar3;
    if (0 < *(int *)(unaff_RSI + 0x60)) {
      if ((*(int *)(unaff_RSI + 0x60) != 1) || (iVar2 = NetworkProtocol_501b0(), iVar2 == 0)) {
        iVar2 = 0;
        *(int *)(unaff_RSI + 0x60) = *(int *)(unaff_RSI + 0x60) + -1;
      }
      bVar4 = iVar2 == 0;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = iVar3;
      if (0 < *(int *)(param_1 + 0x168)) {
        if ((*(int *)(param_1 + 0x168) != 1) || (iVar2 = NetworkProtocol_4f7f0(param_1 + 0x108), iVar2 == 0)
           ) {
          iVar2 = 0;
          *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        }
        bVar5 = iVar2 == 0;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        iVar2 = iVar3;
        if (0 < *(int *)(unaff_RBP + 0x60)) {
          if ((*(int *)(unaff_RBP + 0x60) != 1) || (iVar2 = NetworkProtocol_4fcd0(), iVar2 == 0)) {
            iVar2 = 0;
            *(int *)(unaff_RBP + 0x60) = *(int *)(unaff_RBP + 0x60) + -1;
          }
          bVar6 = iVar2 == 0;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          if (0 < *(int *)(param_1 + 0x238)) {
            if ((*(int *)(param_1 + 0x238) != 1) ||
               (iVar3 = NetworkProtocol_50690(param_1 + 0x1d8), iVar3 == 0)) {
              *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
              iVar3 = 0;
            }
            bVar1 = false;
            if (iVar3 == 0) {
              bVar1 = true;
            }
          }
          iVar2 = iVar3;
          if (iVar3 == 0) {
            iVar2 = 0;
          }
          if ((iVar2 == 0) && ((iVar2 = NetworkProtocol_bd690(param_1), iVar2 == 0 || (iVar2 == 0)))) {
            iVar2 = 0;
          }
        }
      }
    }
  }
  if (!bVar1) {
    *(int32_t *)(param_1 + 0x238) = 0;
    RenderingEngine_ShaderProcessor(param_1 + 0x208);
  }
  if (!bVar5) {
    *(int32_t *)(param_1 + 0x168) = 0;
    SystemCore_CacheManager(param_1 + 0x138);
  }
  if (!bVar6) {
    *(int32_t *)(unaff_RBP + 0x60) = 0;
    SystemCore_CacheManager(unaff_RBP + 0x30);
  }
  if (!bVar4) {
    *(int32_t *)(unaff_RSI + 0x60) = 0;
    SystemCore_NetworkProcessor(unaff_RSI + 0x30);
  }
  return iVar2;
}
int32_t NetworkProtocol_8fd22(uint64_t param_1,int32_t param_2)
{
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int8_t stack_special_x_20;
  char local_buffer_70;
  char local_buffer_88;
  *(int32_t *)(unaff_R14 + 0x60) = param_2;
  RenderingEngine_ShaderProcessor(unaff_R14 + 0x30);
  if (local_buffer_70 == '\0') {
    *(int32_t *)(unaff_R15 + 0x60) = 0;
    SystemCore_CacheManager(unaff_R15 + 0x30);
  }
  if (local_buffer_88 == '\0') {
    *(int32_t *)(unaff_RBP + 0x60) = 0;
    SystemCore_CacheManager(unaff_RBP + 0x30);
  }
  if (stack_special_x_20 == '\0') {
    *(int32_t *)(unaff_RSI + 0x60) = 0;
    SystemCore_NetworkProcessor(unaff_RSI + 0x30);
  }
  return unaff_EBX;
}
int32_t NetworkProtocol_8fd3d(uint64_t param_1,int32_t param_2)
{
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R15;
  int8_t stack_special_x_20;
  char local_buffer_88;
  *(int32_t *)(unaff_R15 + 0x60) = param_2;
  SystemCore_CacheManager(unaff_R15 + 0x30);
  if (local_buffer_88 == '\0') {
    *(int32_t *)(unaff_RBP + 0x60) = 0;
    SystemCore_CacheManager(unaff_RBP + 0x30);
  }
  if (stack_special_x_20 == '\0') {
    *(int32_t *)(unaff_RSI + 0x60) = 0;
    SystemCore_NetworkProcessor(unaff_RSI + 0x30);
  }
  return unaff_EBX;
}
int32_t NetworkProtocol_8fd59(void)
{
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int8_t stack_special_x_20;
  *(int32_t *)(unaff_RBP + 0x60) = 0;
  SystemCore_CacheManager(unaff_RBP + 0x30);
  if (stack_special_x_20 == '\0') {
    *(int32_t *)(unaff_RSI + 0x60) = 0;
    SystemCore_NetworkProcessor(unaff_RSI + 0x30);
  }
  return unaff_EBX;
}
int32_t NetworkProtocol_8fd75(void)
{
  int32_t unaff_EBX;
  int64_t unaff_RSI;
  *(int32_t *)(unaff_RSI + 0x60) = 0;
  SystemCore_NetworkProcessor(unaff_RSI + 0x30);
  return unaff_EBX;
}
uint64_t NetworkProtocol_8fdb0(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lStackX_8;
  uVar3 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  lVar1 = lStackX_8;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(lStackX_8 + 0x34) != 0) {
    return 0x2e;
  }
  lStackX_8 = 0;
  iVar2 = RenderingSystemOptimizer(&lStackX_8,param_2);
  if (iVar2 == 0) {
    iVar2 = NetworkProtocol_dec80(lVar1,param_2);
    if (iVar2 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&lStackX_8);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&lStackX_8);
}
uint64_t NetworkProtocol_8fdce(void)
{
  int64_t lVar1;
  int in_EAX;
  int iVar2;
  int64_t local_var_30;
  lVar1 = local_var_30;
  if (*(int *)(local_var_30 + 0x34) != in_EAX) {
    return 0x2e;
  }
  local_var_30 = 0;
  iVar2 = RenderingSystemOptimizer(&local_buffer_00000030);
  if (iVar2 == 0) {
    iVar2 = NetworkProtocol_dec80(lVar1);
    if (iVar2 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&local_buffer_00000030);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000030);
}
// 函数: void NetworkProtocol_8fded(void)
void NetworkProtocol_8fded(void)
{
  int iVar1;
  uint64_t local_buffer_30;
  local_buffer_30 = 0;
  iVar1 = RenderingSystemOptimizer(&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = NetworkProtocol_dec80();
    if (iVar1 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemProcessor(&local_buffer_00000030);
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000030);
}
// 函数: void NetworkProtocol_8fe3b(void)
void NetworkProtocol_8fe3b(void)
{
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000030);
}
// 函数: void NetworkProtocol_8fe51(void)
void NetworkProtocol_8fe51(void)
{
  return;
}
uint64_t NetworkProtocol_8fe60(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t alStackX_8 [4];
  uint64_t local_var_18;
  int64_t lStack_10;
  uVar3 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_8);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lStack_10 = *(int64_t *)(alStackX_8[0] + 0x18);
  if (lStack_10 == 0) {
    return 0x1c;
  }
  lVar2 = *(int64_t *)(lStack_10 + 0x2e8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x38);
    if ((uVar1 >> 1 & 1) != 0) {
      return 0;
    }
    if (((uVar1 & 1) != 0) ||
       ((*(int64_t *)(param_2 + 0x90) != 0 &&
        (*(char *)(*(int64_t *)(param_2 + 0x90) + 0x780) != '\0')))) {
      *(uint *)(lVar2 + 0x38) = uVar1 | 2;
      local_var_18 = 0;
      uVar3 = NetworkProtocol_e03a0(*(uint64_t *)(param_2 + 0xac8),&local_var_18,~(byte)(uVar1 | 2) & 1);
      if ((int)uVar3 == 0) {
        return 0;
      }
      return uVar3;
    }
  }
  uVar3 = NetworkProtocol_8ad30(param_2);
  if ((int)uVar3 == 0) {
    return 0;
  }
  return uVar3;
}
uint64_t NetworkProtocol_8fea0(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lStackX_8;
  uVar3 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),&lStackX_8);
  lVar1 = lStackX_8;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(lStackX_8 + 0x34) != 0) {
    return 0x2e;
  }
  lStackX_8 = 0;
  iVar2 = RenderingSystemOptimizer(&lStackX_8,param_2);
  if (iVar2 == 0) {
    iVar2 = NetworkProtocol_de9b0(lVar1);
    if (iVar2 == 0) {
      iVar2 = NetworkProtocol_8ac50(param_2);
      if (iVar2 == 0) {
// WARNING: Subroutine does not return
        AdvancedSystemProcessor(&lStackX_8);
      }
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&lStackX_8);
}
uint64_t NetworkProtocol_8febe(void)
{
  int64_t lVar1;
  int in_EAX;
  int iVar2;
  int64_t local_var_30;
  lVar1 = local_var_30;
  if (*(int *)(local_var_30 + 0x34) != in_EAX) {
    return 0x2e;
  }
  local_var_30 = 0;
  iVar2 = RenderingSystemOptimizer(&local_buffer_00000030);
  if (iVar2 == 0) {
    iVar2 = NetworkProtocol_de9b0(lVar1);
    if (iVar2 == 0) {
      iVar2 = NetworkProtocol_8ac50();
      if (iVar2 == 0) {
// WARNING: Subroutine does not return
        AdvancedSystemProcessor(&local_buffer_00000030);
      }
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000030);
}
// 函数: void NetworkProtocol_8fedd(void)
void NetworkProtocol_8fedd(void)
{
  int iVar1;
  uint64_t local_buffer_30;
  local_buffer_30 = 0;
  iVar1 = RenderingSystemOptimizer(&local_buffer_00000030);
  if (iVar1 == 0) {
    iVar1 = NetworkProtocol_de9b0();
    if (iVar1 == 0) {
      iVar1 = NetworkProtocol_8ac50();
      if (iVar1 == 0) {
// WARNING: Subroutine does not return
        AdvancedSystemProcessor(&local_buffer_00000030);
      }
    }
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000030);
}
// 函数: void NetworkProtocol_8ff36(void)
void NetworkProtocol_8ff36(void)
{
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&local_buffer_00000030);
}
// 函数: void NetworkProtocol_8ff4c(void)
void NetworkProtocol_8ff4c(void)
{
  return;
}
uint64_t NetworkProtocol_8ff60(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lStackX_8;
  int64_t alStackX_18 [2];
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  uVar2 = SystemFunction_00018088c530(*(int32_t *)(param_1 + 0x10),alStackX_18);
  if ((int)uVar2 == 0) {
    lStackX_8 = 0;
    lVar1 = *(int64_t *)(alStackX_18[0] + 0x10);
    local_var_18 = *(int32_t *)(lVar1 + 0x10);
    local_var_14 = *(int32_t *)(lVar1 + 0x14);
    local_var_10 = *(int32_t *)(lVar1 + 0x18);
    local_var_c = *(int32_t *)(lVar1 + 0x1c);
    uVar2 = NetworkProtocol_bc010(*(uint64_t *)(param_2 + 0x90),&local_var_18,0,&lStackX_8);
    if ((int)uVar2 == 0) {
      if ((*(int64_t *)(lStackX_8 + 0x48) == alStackX_18[0]) &&
         (*(int64_t *)(alStackX_18[0] + 8) == lStackX_8)) {
        return 0;
      }
      uVar2 = 0x1c;
    }
  }
  return uVar2;
}
uint64_t
NetworkProtocol_8ff94(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t local_buffer_28;
  int32_t local_buffer_2c;
  int64_t local_var_40;
  int64_t local_buffer_50;
  lVar1 = *(int64_t *)(local_buffer_50 + 0x10);
  local_buffer_28 = *(int32_t *)(lVar1 + 0x18);
  local_buffer_2c = *(int32_t *)(lVar1 + 0x1c);
  uVar2 = NetworkProtocol_bc010(*(int32_t *)(lVar1 + 0x10),param_2,0,param_4,
                        *(int32_t *)(lVar1 + 0x10));
  if ((int)uVar2 == 0) {
    if ((*(int64_t *)(local_var_40 + 0x48) == local_buffer_50) &&
       (*(int64_t *)(local_buffer_50 + 8) == local_var_40)) {
      return 0;
    }
    uVar2 = 0x1c;
  }
  return uVar2;
}
uint64_t NetworkProtocol_8ffd5(void)
{
  return 0x1c;
}