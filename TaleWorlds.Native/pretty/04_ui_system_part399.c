#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part399.c - 4 个函数
// 函数: void function_889ebf(void)
void function_889ebf(void)
{
// WARNING: Subroutine does not return
  SystemMemoryManager();
}
int32_t function_889efd(int64_t param_1,uint64_t param_2,int64_t *param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_EBX;
  int64_t unaff_RBP;
  int unaff_EDI;
  bool bVar12;
  float unaff_XMM6_Da;
code_r0x000180889efd:
  iVar10 = *(int *)(param_1 + (int64_t)unaff_EDI * 4);
  do {
    if (iVar10 == -1) {
      lVar7 = *(int64_t *)(unaff_RBP + 0x28);
      if (*(int64_t *)(unaff_RBP + 0x30) != 0) {
// WARNING: Subroutine does not return
        SystemMemoryManager(*(int64_t *)(unaff_RBP + 0x30));
      }
      puVar8 = (uint64_t *)SystemCoreProcessor();
      uVar3 = *(uint64_t *)(lVar7 + 0x80);
      uVar4 = puVar8[1];
      *(uint64_t *)(unaff_RBP + -0x48) = *puVar8;
      *(uint64_t *)(unaff_RBP + -0x40) = uVar4;
      uVar6 = function_866f50(uVar3,unaff_RBP + -0x48,unaff_RBP + -0x58);
      function_840100(unaff_RBP + -0x58);
      return uVar6;
    }
    do {
      lVar7 = *(int64_t *)(param_3[2] + 0x18 + (int64_t)iVar10 * 0x20);
      for (puVar8 = *(uint64_t **)(lVar7 + 0x288);
          (*(uint64_t **)(lVar7 + 0x288) <= puVar8 &&
          (puVar8 < (uint64_t *)
                    ((int64_t)*(uint64_t **)(lVar7 + 0x288) +
                    (int64_t)*(int *)(lVar7 + 0x290) * 0x14)));
          puVar8 = (uint64_t *)((int64_t)puVar8 + 0x14)) {
        iVar9 = *(int *)(unaff_RBP + -0x50) + 1;
        iVar5 = unaff_EBX;
        if (unaff_EBX < 0) {
          iVar5 = -unaff_EBX;
        }
        if (iVar5 < iVar9) {
          if (unaff_EBX < 0) {
            unaff_EBX = -unaff_EBX;
          }
          iVar11 = (int)((float)unaff_EBX * unaff_XMM6_Da);
          iVar5 = iVar9;
          if (iVar9 <= iVar11) {
            iVar5 = iVar11;
          }
          if (iVar5 < 3) {
            iVar11 = 3;
          }
          else if (iVar11 < iVar9) {
            iVar11 = iVar9;
          }
          iVar5 = function_849120(unaff_RBP + -0x58,iVar11);
          if (iVar5 == 0) goto LAB_180889e09;
        }
        else {
LAB_180889e09:
          iVar5 = *(int *)(unaff_RBP + -0x50);
          uVar3 = puVar8[1];
          lVar2 = *(int64_t *)(unaff_RBP + -0x58);
          puVar1 = (uint64_t *)(lVar2 + (int64_t)iVar5 * 0x14);
          *puVar1 = *puVar8;
          puVar1[1] = uVar3;
          *(int32_t *)(lVar2 + 0x10 + (int64_t)iVar5 * 0x14) = *(int32_t *)(puVar8 + 2);
          *(int *)(unaff_RBP + -0x50) = *(int *)(unaff_RBP + -0x50) + 1;
        }
        unaff_EBX = *(int *)(unaff_RBP + -0x4c);
      }
      param_3 = *(int64_t **)(unaff_RBP + -0x48);
    } while ((iVar10 != -1) &&
            (iVar10 = *(int *)(param_3[2] + 0x10 + (int64_t)iVar10 * 0x20), iVar10 != -1));
    iVar10 = unaff_EDI + 1;
    bVar12 = unaff_EDI != -1;
    unaff_EDI = 0;
    if (bVar12) {
      unaff_EDI = iVar10;
    }
    if (unaff_EDI != (int)param_3[1]) {
      param_1 = *param_3;
      lVar7 = (int64_t)unaff_EDI;
      do {
        if (*(int *)(param_1 + lVar7 * 4) != -1) goto code_r0x000180889efd;
        unaff_EDI = unaff_EDI + 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 != (int)param_3[1]);
    }
    unaff_EDI = -1;
    iVar10 = -1;
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_889f10(int64_t param_1,uint *param_2)
{
  uint uVar1;
  if ((*(uint *)(param_1 + 0x24) >> 1 & 1) != 0) {
    return 0x44;
  }
  if (((param_2 != (uint *)0x0) && (uVar1 = *param_2, uVar1 - 4 < 0x1d)) && ((uVar1 & 3) == 0)) {
    if (*(int64_t *)(param_1 + 0x2d8) != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x2d8),
                    &processed_var_5856_ptr,0x1a9,1);
    }
// WARNING: Subroutine does not return
    memcpy(param_1 + 0x2c0,param_2,(int64_t)(int)uVar1);
  }
  return 0x1f;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_889f60(uint64_t param_1,int64_t param_2)
void function_889f60(uint64_t param_1,int64_t param_2)
{
  int64_t unaff_RDI;
  if (param_2 != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_2,&processed_var_5856_ptr,0x1a9,1);
  }
// WARNING: Subroutine does not return
  memcpy(unaff_RDI + 0x2c0);
}
uint64_t function_889fd6(void)
{
  return 0x1f;
}
uint64_t function_889ff0(int64_t *param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  lVar4 = (int64_t)param_2;
  if (((param_2 < 0) || (lVar2 = param_1[1], (int)lVar2 <= param_2)) ||
     ((param_2 != 0 &&
      (iVar3 = memcmp(*(int64_t *)(*param_1 + -8 + lVar4 * 8) + 0x10,*param_3 + 0x10,0x10),
      -1 < iVar3)))) {
    return 0x1f;
  }
  if (param_2 != (int)lVar2 + -1) {
    lVar2 = *param_3;
    lVar1 = *(int64_t *)(*param_1 + 8 + lVar4 * 8);
    iVar3 = memcmp(lVar1 + 0x10,lVar2 + 0x10,0x10);
    if (iVar3 < 0) {
      return 0x1f;
    }
    iVar3 = memcmp(lVar2 + 0x10,lVar1 + 0x10,0x10);
    if (-1 < iVar3) {
      return 0x1f;
    }
  }
  *(int64_t *)(*param_1 + lVar4 * 8) = *param_3;
  return 0;
}
// 函数: void function_88a0c0(int64_t param_1,int64_t param_2)
void function_88a0c0(int64_t param_1,int64_t param_2)
{
  int32_t *puVar1;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  *(int64_t *)(param_1 + 0xad0) = param_2;
  if (*(int64_t *)(param_1 + 0x80) != 0) {
    puVar1 = (int32_t *)SystemCoreProcessor();
    local_var_18 = *puVar1;
    local_var_14 = puVar1[1];
    local_var_10 = puVar1[2];
    local_var_c = puVar1[3];
    if (param_2 != 0) {
      local_var_18 = *(int32_t *)(param_2 + 0x10);
      local_var_14 = *(int32_t *)(param_2 + 0x14);
      local_var_10 = *(int32_t *)(param_2 + 0x18);
      local_var_c = *(int32_t *)(param_2 + 0x1c);
    }
    function_867170(*(uint64_t *)(param_1 + 0x80),&local_var_18);
  }
  return;
}
int function_88a1f0(int64_t param_1)
{
  int64_t lVar1;
  int iVar2;
  lVar1 = *(int64_t *)(param_1 + 0x28);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar2 = SystemStatusChecker(param_1);
    if ((iVar2 == 0) && (iVar2 = SystemCore_FileSystem0(param_1 + 0x10), iVar2 == 0)) {
      *(int32_t *)(param_1 + 0x20) = 0xffffffff;
      *(int32_t *)(param_1 + 0x24) = 0;
    }
    else if (iVar2 != 0) goto LAB_18088a24d;
  }
  iVar2 = 0;
LAB_18088a24d:
  if (lVar1 == 0) {
    return iVar2;
  }
// WARNING: Subroutine does not return
  SystemMemoryManager(lVar1);
}
int function_88a1fa(int64_t param_1)
{
  int iVar1;
  int64_t unaff_RSI;
  if (unaff_RSI != 0) {
    SystemMemoryAllocator();
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = SystemStatusChecker(param_1);
    if ((iVar1 == 0) && (iVar1 = SystemCore_FileSystem0(param_1 + 0x10), iVar1 == 0)) {
      *(int32_t *)(param_1 + 0x20) = 0xffffffff;
      *(int32_t *)(param_1 + 0x24) = 0;
    }
    else if (iVar1 != 0) goto LAB_18088a24d;
  }
  iVar1 = 0;
LAB_18088a24d:
  if (unaff_RSI == 0) {
    return iVar1;
  }
// WARNING: Subroutine does not return
  SystemMemoryManager();
}
// 函数: void function_88a257(void)
void function_88a257(void)
{
// WARNING: Subroutine does not return
  SystemMemoryManager();
}
uint64_t function_88a270(int64_t param_1)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  lVar3 = *(int64_t *)(param_1 + 0x350);
  if (lVar3 != 0) {
    SystemMemoryAllocator(lVar3);
  }
  if (*(int *)(param_1 + 0x34c) == 0) {
    uVar1 = SystemStatusChecker(param_1 + 0x328);
    if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x338), uVar1 == 0)) {
      *(int32_t *)(param_1 + 0x348) = 0xffffffff;
      *(int32_t *)(param_1 + 0x34c) = 0;
      goto LAB_18088a2ee;
    }
    uVar2 = (uint64_t)uVar1;
    if (uVar1 == 0) goto LAB_18088a2ee;
LAB_18088a2cf:
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
  }
  else {
LAB_18088a2ee:
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x380);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x37c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x358);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x368), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x378) = 0xffffffff;
        *(int32_t *)(param_1 + 0x37c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x3b0);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x3ac) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x388);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x398), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x3a8) = 0xffffffff;
        *(int32_t *)(param_1 + 0x3ac) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x3e0);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x3dc) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x3b8);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x3c8), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x3d8) = 0xffffffff;
        *(int32_t *)(param_1 + 0x3dc) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x410);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x40c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 1000);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x3f8), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x408) = 0xffffffff;
        *(int32_t *)(param_1 + 0x40c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x440);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x43c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x418);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x428), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x438) = 0xffffffff;
        *(int32_t *)(param_1 + 0x43c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x470);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x46c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x448);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x458), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x468) = 0xffffffff;
        *(int32_t *)(param_1 + 0x46c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x4a0);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x49c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x478);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x488), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x498) = 0xffffffff;
        *(int32_t *)(param_1 + 0x49c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x4d0);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x4cc) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x4a8);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x4b8), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x4c8) = 0xffffffff;
        *(int32_t *)(param_1 + 0x4cc) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x500);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x4fc) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x4d8);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x4e8), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x4f8) = 0xffffffff;
        *(int32_t *)(param_1 + 0x4fc) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x530);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x52c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x508);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x518), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x528) = 0xffffffff;
        *(int32_t *)(param_1 + 0x52c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x560);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x55c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x538);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x548), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x558) = 0xffffffff;
        *(int32_t *)(param_1 + 0x55c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x590);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x58c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x568);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x578), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x588) = 0xffffffff;
        *(int32_t *)(param_1 + 0x58c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x5c0);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x5bc) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x598);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x5a8), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x5b8) = 0xffffffff;
        *(int32_t *)(param_1 + 0x5bc) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x620);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x61c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x5f8);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x608), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x618) = 0xffffffff;
        *(int32_t *)(param_1 + 0x61c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x650);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x64c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x628);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x638), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x648) = 0xffffffff;
        *(int32_t *)(param_1 + 0x64c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x680);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x67c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x658);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x668), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x678) = 0xffffffff;
        *(int32_t *)(param_1 + 0x67c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    uVar2 = function_88a1f0(param_1 + 0x688);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = *(int64_t *)(param_1 + 0x6e0);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x6dc) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x6b8);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x6c8), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x6d8) = 0xffffffff;
        *(int32_t *)(param_1 + 0x6dc) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x710);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x70c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x6e8);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x6f8), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x708) = 0xffffffff;
        *(int32_t *)(param_1 + 0x70c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x740);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x73c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x718);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x728), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x738) = 0xffffffff;
        *(int32_t *)(param_1 + 0x73c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x770);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x76c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x748);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x758), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x768) = 0xffffffff;
        *(int32_t *)(param_1 + 0x76c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x7a0);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x79c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x778);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x788), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x798) = 0xffffffff;
        *(int32_t *)(param_1 + 0x79c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 2000);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x7cc) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x7a8);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x7b8), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x7c8) = 0xffffffff;
        *(int32_t *)(param_1 + 0x7cc) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x800);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x7fc) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x7d8);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x7e8), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x7f8) = 0xffffffff;
        *(int32_t *)(param_1 + 0x7fc) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x830);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x82c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x808);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x818), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x828) = 0xffffffff;
        *(int32_t *)(param_1 + 0x82c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    lVar3 = *(int64_t *)(param_1 + 0x860);
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    if (*(int *)(param_1 + 0x85c) == 0) {
      uVar1 = SystemStatusChecker(param_1 + 0x838);
      if ((uVar1 == 0) && (uVar1 = SystemCore_FileSystem0(param_1 + 0x848), uVar1 == 0)) {
        *(int32_t *)(param_1 + 0x858) = 0xffffffff;
        *(int32_t *)(param_1 + 0x85c) = 0;
      }
      else {
        uVar2 = (uint64_t)uVar1;
        if (uVar1 != 0) goto LAB_18088a2cf;
      }
    }
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    uVar2 = function_88a1f0(param_1 + 0x868);
    if (((int)uVar2 == 0) && (uVar2 = function_88a1f0(param_1 + 0x898), (int)uVar2 == 0)) {
      uVar2 = function_8c24f0(*(uint64_t *)(param_1 + 0x90));
    }
  }
  return uVar2;
}
uint64_t function_88ac50(int64_t param_1)
{
  uint64_t uVar1;
  uVar1 = function_88a1f0(param_1 + 0x688);
  if ((int)uVar1 == 0) {
    return 0;
  }
  return uVar1;
}
uint64_t function_88aca0(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t local_var_18;
  int64_t lStack_10;
  if (param_2 == 0) {
    return 0x1c;
  }
  lVar2 = *(int64_t *)(param_2 + 0x2e8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x38);
    if ((uVar1 >> 1 & 1) != 0) {
      return 0;
    }
    if (((uVar1 & 1) != 0) ||
       ((*(int64_t *)(param_1 + 0x90) != 0 &&
        (*(char *)(*(int64_t *)(param_1 + 0x90) + 0x780) != '\0')))) {
      *(uint *)(lVar2 + 0x38) = uVar1 | 2;
      local_var_18 = 0;
      lStack_10 = param_2;
      uVar3 = function_8e03a0(*(uint64_t *)(param_1 + 0xac8),&local_var_18,~(byte)(uVar1 | 2) & 1);
      if ((int)uVar3 == 0) {
        return 0;
      }
      return uVar3;
    }
  }
  uVar3 = function_88ad30(param_1);
  if ((int)uVar3 == 0) {
    return 0;
  }
  return uVar3;
}
// WARNING: Removing unreachable block (ram,0x00018088ae90)
// WARNING: Removing unreachable block (ram,0x00018088aea4)
uint64_t function_88ad30(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  ushort uVar4;
  uint64_t stack_special_x_10;
  lVar1 = *(int64_t *)(param_2 + 0x2e8);
  if (lVar1 == 0) {
    uVar4 = *(ushort *)(param_2 + 0xe) & 0x7fff;
    if (((((uVar4 == 0) || (*(char *)(param_2 + 0x2f8) == '\0')) ||
         (*(int64_t *)(param_1 + 0xad0) == 0)) ||
        (((*(ushort *)(*(int64_t *)(param_1 + 0xad0) + 0xe) & 0x3fff) != 1 ||
         (uVar3 = function_8c1af0(*(uint64_t *)(param_1 + 0x90),param_2), (int)uVar3 == 0)))) &&
       ((lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x90) + 0x790), lVar1 == 0 ||
        (uVar3 = function_8e1610(lVar1,param_2), (int)uVar3 == 0)))) {
      uVar3 = function_875800(param_2,*(uint64_t *)(param_1 + 800));
      if (((int)uVar3 == 0) &&
         (((lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x90) + 0x788), lVar1 == 0 ||
           (uVar3 = function_8e0820(lVar1,1), (int)uVar3 == 0)) &&
          ((uVar3 = (**(code **)(**(int64_t **)(param_1 + 0xaa0) + 0x10))
                              (*(int64_t **)(param_1 + 0xaa0),param_2), (int)uVar3 == 0 &&
           ((uVar4 == 0 || (uVar3 = function_88a270(param_1), (int)uVar3 == 0)))))))) {
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  stack_special_x_10 = 0;
  if ((((*(int64_t *)(param_1 + 0x98) == 0) ||
       (iVar2 = SystemSecurityProcessor(&stack_special_x_10,param_1), iVar2 == 0)) &&
      (iVar2 = function_8dea20(lVar1), iVar2 == 0)) &&
     ((*(int *)(lVar1 + 0x2c) < 1 || (iVar2 = function_8de9b0(lVar1), iVar2 == 0)))) {
    *(int32_t *)(lVar1 + 0x34) = 0x2e;
    Function_0ed2a61c(lVar1,0);
// WARNING: Subroutine does not return
    AdvancedSystemProcessor(&stack_special_x_10);
  }
// WARNING: Subroutine does not return
  AdvancedSystemProcessor(&stack_special_x_10);
}
uint64_t function_88aee0(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int32_t astack_special_x_10 [6];
  if (param_2 == 0) {
    return 0x1f;
  }
  astack_special_x_10[0] = 0;
  uVar1 = function_8db010(*(uint64_t *)(param_1 + 0x78),param_2,astack_special_x_10);
  if ((int)uVar1 == 0) {
    uVar1 = function_73be90(*(uint64_t *)(param_1 + 0x78),astack_special_x_10[0]);
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address