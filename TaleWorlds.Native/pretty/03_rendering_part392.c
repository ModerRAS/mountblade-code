#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part392.c - 2 个函数
// 函数: void function_484250(int64_t *param_1,uint64_t param_2)
void function_484250(int64_t *param_1,uint64_t param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  plVar1 = (int64_t *)param_1[1];
  lVar5 = *param_1;
  uVar2 = ((int64_t)plVar1 - lVar5) / 0x48;
  if (uVar2 < param_2) {
    lVar4 = param_2 - uVar2;
    function_483f80(param_1,lVar4,(int64_t)plVar1 - lVar5,lVar4,0xfffffffffffffffe);
  }
  else {
    plVar3 = (int64_t *)(param_2 * 0x48 + lVar5);
    if (plVar3 != plVar1) {
      do {
        if (*(int64_t *)((int64_t)plVar3 + 0x36) != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t *)((int64_t)plVar3 + 0x36) = 0;
        if (*(int64_t *)((int64_t)plVar3 + 0x3e) != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t *)((int64_t)plVar3 + 0x3e) = 0;
        if (*(int64_t *)((int64_t)plVar3 + 0x24) != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t *)((int64_t)plVar3 + 0x24) = 0;
        if (*(int64_t *)((int64_t)plVar3 + 0x2c) != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t *)((int64_t)plVar3 + 0x2c) = 0;
        if (*(int64_t *)((int64_t)plVar3 + 0x12) != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t *)((int64_t)plVar3 + 0x12) = 0;
        if (*(int64_t *)((int64_t)plVar3 + 0x1a) != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t *)((int64_t)plVar3 + 0x1a) = 0;
        if (*plVar3 != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *plVar3 = 0;
        if (plVar3[1] != 0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        plVar3[1] = 0;
        plVar3 = plVar3 + 9;
      } while (plVar3 != plVar1);
      lVar5 = *param_1;
    }
    param_1[1] = param_2 * 0x48 + lVar5;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_484390(int64_t *param_1,int param_2,int param_3,uint64_t param_4,uint64_t *param_5,
                 uint64_t param_6)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int iStackX_8;
  int iStackX_c;
  if ((short)param_1[2] != 0) {
    iVar7 = param_2;
    if (param_2 <= param_3) {
      iVar7 = param_3;
      param_3 = param_2;
    }
    function_484510(&iStackX_8,param_1[1],(short)param_1[2],param_3,iVar7);
    if (iStackX_8 == -1) {
      System_DataHandler(param_6,&processed_var_6432_ptr,param_3);
      if (iStackX_c != -1) {
        return 0;
      }
    }
    else if (iStackX_c != -1) {
      uVar4 = iStackX_c - iStackX_8 >> 0x1f;
      uVar3 = 0;
      iVar7 = (iStackX_c - iStackX_8 ^ uVar4) - uVar4;
      lVar5 = (int64_t)(iVar7 + 1);
      lVar1 = lVar5 * 4;
      uVar2 = uVar3;
      if (iVar7 + 1 != 0) {
        uVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1,4);
      }
      lVar6 = lVar5 << 4;
      param_5[1] = uVar2;
      if (lVar5 != 0) {
        uVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6,4);
        uVar2 = param_5[1];
      }
      *param_5 = uVar3;
      *(short *)(param_5 + 2) = (short)iVar7 + 1;
      function_4851d0(uVar2,lVar1,param_1[1] + (int64_t)iStackX_8 * 4,lVar1);
      function_4851d0(*param_5,lVar6,(int64_t)iStackX_8 * 0x10 + *param_1,lVar6);
      return iVar7 * 0x14 + 0x26;
    }
    System_DataHandler(param_6,&processed_var_6512_ptr,iVar7);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_4843f8(void)
{
  int64_t lVar1;
  uint in_EAX;
  uint64_t uVar2;
  uint64_t uVar3;
  int unaff_EBX;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *unaff_R13;
  uint64_t *local_var_80;
  uVar3 = 0;
  iVar6 = (in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f);
  lVar4 = (int64_t)(iVar6 + 1);
  lVar1 = lVar4 * 4;
  uVar2 = uVar3;
  if (iVar6 + 1 != 0) {
    uVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1,4);
  }
  lVar5 = lVar4 << 4;
  local_var_80[1] = uVar2;
  if (lVar4 != 0) {
    uVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar5,4);
    uVar2 = local_var_80[1];
  }
  *local_var_80 = uVar3;
  *(short *)(local_var_80 + 2) = (short)iVar6 + 1;
  function_4851d0(uVar2,lVar1,unaff_R13[1] + (int64_t)unaff_EBX * 4,lVar1);
  function_4851d0(*local_var_80,lVar5,(int64_t)unaff_EBX * 0x10 + *unaff_R13,lVar5);
  return iVar6 * 0x14 + 0x26;
}
uint64_t function_4844cc(void)
{
  uint64_t local_var_60;
  System_DataHandler();
  if (local_var_60._4_4_ == -1) {
    System_DataHandler();
  }
  return 0;
}
int * function_484510(int *param_1,float *param_2,int param_3,int param_4,int param_5)
{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  iVar1 = 0;
  iVar5 = -1;
  if (0 < param_3) {
    pfVar4 = param_2;
    while (iVar5 = iVar1, *pfVar4 != (float)param_4) {
      if ((float)param_4 < *pfVar4) {
        iVar5 = iVar1 + -1;
        if (iVar1 + -1 == -1) {
          iVar5 = 0;
        }
        break;
      }
      iVar1 = iVar1 + 1;
      pfVar4 = pfVar4 + 1;
      iVar5 = -1;
      if (param_3 <= iVar1) break;
    }
  }
  lVar2 = (int64_t)iVar5;
  iVar1 = -1;
  if (lVar2 < param_3) {
    iVar3 = iVar5;
    do {
      iVar1 = iVar3;
      if ((float)param_5 < param_2[lVar2] || (float)param_5 == param_2[lVar2]) break;
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = -1;
    } while (lVar2 < param_3);
  }
  *param_1 = iVar5;
  iVar5 = param_3 + -1;
  if (iVar1 != -1) {
    iVar5 = iVar1;
  }
  param_1[1] = iVar5;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_484640(int32_t *param_1,int64_t param_2,int param_3,int param_4,uint64_t param_5,
                 int param_6,int64_t *param_7,uint64_t param_8,uint64_t param_9)
{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  int iVar7;
  void *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  int iVar16;
  int64_t lVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int64_t lStack_58;
  int64_t lStack_50;
  int64_t lStack_48;
  int64_t *plStack_40;
  puVar8 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar8 = *(void **)(param_2 + 8);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x10) + 0x10))(param_1 + 0x10,puVar8);
  *param_1 = param_6;
  uVar20 = param_9;
  param_6 = function_484390(param_8,param_3);
  plVar14 = (int64_t *)(param_1 + 2);
  lVar9 = (int64_t)(int)((param_7[1] - *param_7) / 0x48);
  lStack_48 = lVar9;
  plStack_40 = plVar14;
  function_484250(plVar14,lVar9);
  param_5._0_4_ = 0;
  if (0 < lVar9) {
    lVar9 = *plVar14;
    lVar12 = 0;
    lStack_50 = 0;
    do {
      lVar11 = *param_7;
      sVar1 = *(short *)(lVar11 + 0x22 + lVar12);
      if (sVar1 == 0) {
LAB_180484885:
        iVar16 = 0;
      }
      else {
        iVar16 = param_4;
        if (param_3 <= param_4) {
          iVar16 = param_3;
        }
        iVar7 = param_3;
        if (param_3 <= param_4) {
          iVar7 = param_4;
        }
        function_484510(&iStack_78,*(uint64_t *)(lVar11 + 0x1a + lVar12),sVar1,iVar16,iVar7,uVar20);
        iVar3 = iStack_78;
        if (iStack_78 == -1) {
          System_DataHandler(param_9,&processed_var_6432_ptr,iVar16);
          if (iStack_74 == -1) goto LAB_180484873;
          goto LAB_180484885;
        }
        if (iStack_74 == -1) {
LAB_180484873:
          System_DataHandler(param_9,&processed_var_6512_ptr,iVar7);
          goto LAB_180484885;
        }
        uVar6 = iStack_74 - iStack_78 >> 0x1f;
        iVar16 = (iStack_74 - iStack_78 ^ uVar6) - uVar6;
        lVar17 = (int64_t)(iVar16 + 1);
        lStack_58 = lVar17 * 4;
        if (lVar17 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lStack_58,4);
        }
        *(uint64_t *)(lVar12 + 0x1a + lVar9) = uVar4;
        lVar10 = lVar17 << 4;
        if (lVar17 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10,4);
          uVar4 = *(uint64_t *)(lVar12 + 0x1a + lVar9);
        }
        *(uint64_t *)(lVar12 + 0x12 + lVar9) = uVar5;
        *(short *)(lVar12 + 0x22 + lVar9) = (short)iVar16 + 1;
        function_4851d0(uVar4,lStack_58,*(int64_t *)(lVar11 + 0x1a + lVar12) + (int64_t)iVar3 * 4,
                      lStack_58);
        function_4851d0(*(uint64_t *)(lVar12 + 0x12 + lVar9),lVar10,
                      (int64_t)iVar3 * 0x10 + *(int64_t *)(lVar11 + 0x12 + lVar12),lVar10);
        iVar16 = iVar16 * 0x14 + 0x26;
      }
      param_6 = iVar16 + param_6;
      lStack_58 = *param_7;
      lVar9 = *(int64_t *)(param_1 + 2);
      sVar1 = *(short *)(lVar12 + 0x10 + lStack_58);
      if (sVar1 != 0) {
        iVar16 = param_4;
        if (param_3 <= param_4) {
          iVar16 = param_3;
        }
        iVar7 = param_3;
        if (param_3 <= param_4) {
          iVar7 = param_4;
        }
        function_484510(&iStack_70,*(uint64_t *)(lVar12 + 8 + lStack_58),sVar1,iVar16,iVar7);
        iVar3 = iStack_70;
        if (iStack_70 == -1) {
          System_DataHandler(param_9,&processed_var_6432_ptr,iVar16);
          if (iStack_6c == -1) goto LAB_1804849d0;
        }
        else if (iStack_6c == -1) {
LAB_1804849d0:
          System_DataHandler(param_9,&processed_var_6512_ptr,iVar7);
        }
        else {
          uVar6 = iStack_6c - iStack_70 >> 0x1f;
          iVar16 = ((iStack_6c - iStack_70 ^ uVar6) - uVar6) + 1;
          lVar11 = (int64_t)iVar16;
          if (iVar16 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 4,4);
          }
          *(uint64_t *)(lVar12 + 8 + lVar9) = uVar4;
          if (iVar16 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar11 << 4,4);
            uVar4 = *(uint64_t *)(lVar12 + 8 + lVar9);
          }
          lVar17 = lStack_58;
          *(uint64_t *)(lVar12 + lVar9) = uVar5;
          *(short *)(lVar12 + 0x10 + lVar9) = (short)iVar16;
          function_4851d0(uVar4,lVar11 * 4,*(int64_t *)(lVar12 + 8 + lStack_58) + (int64_t)iVar3 * 4
                        ,lVar11 * 4);
          function_4851d0(*(uint64_t *)(lVar12 + lVar9),lVar11 << 4,
                        (int64_t)iVar3 * 0x10 + *(int64_t *)(lVar12 + lVar17),lVar11 << 4);
          param_6 = param_6 + iVar16 * 0x14 + 0x12;
        }
      }
      lVar9 = *(int64_t *)(param_1 + 2);
      lVar11 = *param_7;
      sVar1 = *(short *)(lVar11 + 0x46 + lVar12);
      if (sVar1 == 0) {
LAB_180484b74:
        iVar16 = 0;
      }
      else {
        iVar16 = param_4;
        if (param_3 <= param_4) {
          iVar16 = param_3;
        }
        iVar7 = param_3;
        if (param_3 <= param_4) {
          iVar7 = param_4;
        }
        function_484510(&iStack_68,*(uint64_t *)(lVar11 + 0x3e + lVar12),sVar1,iVar16,iVar7);
        iVar3 = iStack_68;
        if (iStack_68 == -1) {
          System_DataHandler(param_9,&processed_var_6432_ptr,iVar16);
          if (iStack_64 == -1) goto LAB_180484b62;
          goto LAB_180484b74;
        }
        if (iStack_64 == -1) {
LAB_180484b62:
          System_DataHandler(param_9,&processed_var_6512_ptr,iVar7);
          goto LAB_180484b74;
        }
        uVar6 = iStack_64 - iStack_68 >> 0x1f;
        iVar16 = (iStack_64 - iStack_68 ^ uVar6) - uVar6;
        lVar17 = (int64_t)(iVar16 + 1);
        lStack_58 = lVar17 * 4;
        if (lVar17 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lStack_58,4);
        }
        *(uint64_t *)(lVar12 + 0x3e + lVar9) = uVar4;
        lVar10 = lVar17 << 4;
        if (lVar17 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10,4);
          uVar4 = *(uint64_t *)(lVar12 + 0x3e + lVar9);
        }
        *(uint64_t *)(lVar12 + 0x36 + lVar9) = uVar5;
        *(short *)(lVar12 + 0x46 + lVar9) = (short)iVar16 + 1;
        function_4851d0(uVar4,lStack_58,*(int64_t *)(lVar12 + 0x3e + lVar11) + (int64_t)iVar3 * 4,
                      lStack_58);
        function_4851d0(*(uint64_t *)(lVar12 + 0x36 + lVar9),lVar10,
                      (int64_t)iVar3 * 0x10 + *(int64_t *)(lVar12 + 0x36 + lVar11),lVar10);
        iVar16 = iVar16 * 0x14 + 0x26;
      }
      param_6 = param_6 + iVar16;
      lVar9 = *(int64_t *)(param_1 + 2);
      lStack_58 = *param_7;
      sVar1 = *(short *)(lStack_58 + 0x34 + lVar12);
      if (sVar1 != 0) {
        iVar16 = param_4;
        if (param_3 <= param_4) {
          iVar16 = param_3;
        }
        iVar7 = param_3;
        if (param_3 <= param_4) {
          iVar7 = param_4;
        }
        function_484510(&iStack_60,*(uint64_t *)(lStack_58 + 0x2c + lVar12),sVar1,iVar16,iVar7);
        iVar3 = iStack_60;
        if (iStack_60 == -1) {
          System_DataHandler(param_9,&processed_var_6432_ptr,iVar16);
          if (iStack_5c == -1) goto LAB_180484cc0;
        }
        else if (iStack_5c == -1) {
LAB_180484cc0:
          System_DataHandler(param_9,&processed_var_6512_ptr,iVar7);
        }
        else {
          uVar6 = iStack_5c - iStack_60 >> 0x1f;
          iVar16 = ((iStack_5c - iStack_60 ^ uVar6) - uVar6) + 1;
          lVar11 = (int64_t)iVar16;
          if (iVar16 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 4,4);
          }
          *(uint64_t *)(lVar12 + 0x2c + lVar9) = uVar4;
          if (iVar16 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar11 << 4,4);
            uVar4 = *(uint64_t *)(lVar12 + 0x2c + lVar9);
          }
          *(uint64_t *)(lVar12 + 0x24 + lVar9) = uVar5;
          *(short *)(lVar12 + 0x34 + lVar9) = (short)iVar16;
          function_4851d0(uVar4,lVar11 * 4,
                        *(int64_t *)(lStack_58 + 0x2c + lVar12) + (int64_t)iVar3 * 4,lVar11 * 4);
          function_4851d0(*(uint64_t *)(lVar12 + 0x24 + lVar9),lVar11 << 4,
                        (int64_t)iVar3 * 0x10 + *(int64_t *)(lStack_58 + 0x24 + lVar12),
                        lVar11 << 4);
          param_6 = param_6 + iVar16 * 0x14 + 0x12;
        }
      }
      lVar9 = *(int64_t *)(param_1 + 2);
      if (*(short *)(lVar9 + 0x10 + lVar12) == 0) {
        System_DataHandler(param_9,&processed_var_6384_ptr,(int)param_5);
        return -1;
      }
      lVar12 = lVar12 + 0x48;
      param_5._0_4_ = (int)param_5 + 1;
      lStack_50 = lStack_50 + 1;
      plVar14 = plStack_40;
    } while (lStack_50 < lStack_48);
  }
  iVar16 = -1;
  uVar15 = (plVar14[1] - *plVar14) / 0x48;
  if ('\0' < (char)uVar15) {
    plVar13 = (int64_t *)(*plVar14 + 8);
    uVar15 = uVar15 & 0xff;
    do {
      iVar7 = iVar16;
      if ((*(ushort *)(plVar13 + 1) != 0) &&
         (iVar7 = (int)*(float *)(*plVar13 + -4 + (uint64_t)*(ushort *)(plVar13 + 1) * 4),
         iVar7 < iVar16)) {
        iVar7 = iVar16;
      }
      iVar16 = iVar7;
      plVar13 = plVar13 + 9;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  fVar19 = -1.0;
  param_1[0x18] = iVar16;
  bVar2 = false;
  uVar15 = (plVar14[1] - *plVar14) / 0x48;
  if ('\0' < (char)uVar15) {
    plVar14 = (int64_t *)(*plVar14 + 8);
    uVar15 = uVar15 & 0xff;
    do {
      fVar18 = *(float *)(*plVar14 + -4 + (uint64_t)*(ushort *)(plVar14 + 1) * 4);
      if (!bVar2) {
        bVar2 = true;
        fVar19 = fVar18;
      }
      if (param_4 < param_3) {
        if (fVar18 <= fVar19) {
          fVar18 = fVar19;
        }
LAB_180484e27:
        fVar19 = fVar18;
      }
      else if (fVar18 <= fVar19) goto LAB_180484e27;
      plVar14 = plVar14 + 9;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  param_1[0x19] = (int)fVar19;
  return param_6;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool function_484e60(uint64_t param_1,int64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5,uint64_t param_6,uint64_t param_7)
{
  int32_t *puVar1;
  int32_t *puVar2;
  ushort uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  short sVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  bool bVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint uVar16;
  void *puVar17;
  int64_t lVar18;
  uint64_t uVar19;
  int64_t alStack_60 [3];
  int32_t local_var_48;
  alStack_60[0] = 0;
  alStack_60[1] = 0;
  uVar12 = 0;
  alStack_60[2] = 0;
  local_var_48 = 4;
  lVar18 = (int64_t)(int)((*(int64_t *)(param_2 + 0x28) - *(int64_t *)(param_2 + 0x20)) / 0x24);
  function_484250(alStack_60,lVar18);
  lVar7 = alStack_60[0];
  if (0 < lVar18) {
    lVar15 = *(int64_t *)(param_2 + 0x20);
    uVar14 = uVar12;
    uVar19 = uVar12;
    do {
      *(int16_t *)(uVar14 + 0x22 + alStack_60[0]) = *(int16_t *)(uVar19 + 0x22 + lVar15);
      if (*(int64_t *)(uVar14 + 0x1a + alStack_60[0]) != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(uVar14 + 0x1a + alStack_60[0]) = 0;
      if (*(int64_t *)(uVar14 + 0x12 + alStack_60[0]) != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(uVar14 + 0x12 + alStack_60[0]) = 0;
      if (*(short *)(uVar19 + 0x22 + lVar15) != 0) {
        uVar10 = (uint64_t)*(ushort *)(uVar14 + 0x22 + alStack_60[0]);
        if (uVar10 == 0) {
          uVar10 = 0;
          uVar11 = uVar12;
        }
        else {
          uVar11 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 4,4);
          uVar10 = (uint64_t)*(ushort *)(uVar14 + 0x22 + lVar7);
        }
        *(uint64_t *)(uVar14 + 0x1a + lVar7) = uVar11;
        sVar8 = (short)uVar10;
        uVar11 = uVar12;
        if (uVar10 != 0) {
          uVar11 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 << 4,4);
          sVar8 = *(short *)(uVar14 + 0x22 + lVar7);
        }
        *(uint64_t *)(uVar14 + 0x12 + lVar7) = uVar11;
        uVar10 = uVar12;
        if (sVar8 != 0) {
          do {
            puVar1 = (int32_t *)(uVar12 + *(int64_t *)(uVar19 + 0x12 + lVar15));
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar2 = (int32_t *)(uVar12 + *(int64_t *)(uVar14 + 0x12 + lVar7));
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            uVar16 = (int)uVar10 + 1;
            uVar12 = uVar12 + 0x10;
            uVar10 = (uint64_t)uVar16;
          } while ((int)uVar16 < (int)(uint)*(ushort *)(uVar14 + 0x22 + lVar7));
        }
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(uVar14 + 0x1a + lVar7),*(uint64_t *)(uVar19 + 0x1a + lVar15),
               (uint64_t)*(ushort *)(uVar14 + 0x22 + lVar7) << 2);
      }
      lVar15 = *(int64_t *)(param_2 + 0x20);
      *(int16_t *)(uVar14 + 0x10 + alStack_60[0]) = *(int16_t *)(uVar19 + 0x10 + lVar15);
      if (*(int64_t *)(uVar14 + 8 + alStack_60[0]) != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(uVar14 + 8 + alStack_60[0]) = 0;
      if (*(int64_t *)(uVar14 + alStack_60[0]) != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(uVar14 + alStack_60[0]) = 0;
      if (*(short *)(uVar19 + 0x10 + lVar15) != 0) {
        uVar10 = (uint64_t)*(ushort *)(uVar14 + 0x10 + alStack_60[0]);
        if (uVar10 == 0) {
          uVar10 = 0;
          uVar11 = uVar12;
        }
        else {
          uVar11 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 4,4);
          uVar10 = (uint64_t)*(ushort *)(uVar14 + 0x10 + lVar7);
        }
        *(uint64_t *)(uVar14 + 8 + lVar7) = uVar11;
        sVar8 = (short)uVar10;
        uVar11 = uVar12;
        if (uVar10 != 0) {
          uVar11 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 << 4,4);
          sVar8 = *(short *)(uVar14 + 0x10 + lVar7);
        }
        *(uint64_t *)(uVar14 + lVar7) = uVar11;
        uVar10 = uVar12;
        if (sVar8 == 0) {
          uVar3 = *(ushort *)(uVar14 + 0x10 + lVar7);
        }
        else {
          do {
            puVar1 = (int32_t *)(uVar12 + *(int64_t *)(uVar19 + lVar15));
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar2 = (int32_t *)(uVar12 + *(int64_t *)(uVar14 + lVar7));
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            uVar16 = (int)uVar10 + 1;
            uVar12 = uVar12 + 0x10;
            uVar3 = *(ushort *)(uVar14 + 0x10 + lVar7);
            uVar10 = (uint64_t)uVar16;
          } while ((int)uVar16 < (int)(uint)uVar3);
        }
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(uVar14 + 8 + lVar7),*(uint64_t *)(uVar19 + 8 + lVar15),
               (uint64_t)uVar3 << 2);
      }
      lVar15 = *(int64_t *)(param_2 + 0x20);
      uVar14 = uVar14 + 0x48;
      uVar19 = uVar19 + 0x24;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (*(short *)(param_2 + 0x62) == 0) {
    iVar9 = function_484640(param_1,param_3,param_4,param_5);
    bVar13 = 0 < iVar9;
  }
  else {
    puVar17 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar17 = *(void **)(param_2 + 8);
    }
    System_DataHandler(param_7,&processed_var_6256_ptr,puVar17);
    bVar13 = false;
  }
  function_4065a0(alStack_60);
  return bVar13;
}
uint64_t function_4851d0(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    puVar1 = (int32_t *)_errno();
    *puVar1 = 0x16;
    _invalid_parameter_noinfo();
    return 0x16;
  }
  if ((param_3 != 0) && (param_4 <= param_2)) {
// WARNING: Subroutine does not return
    memcpy(param_1,param_3,param_4);
  }
// WARNING: Subroutine does not return
  memset(param_1,0,param_2);
}
// WARNING: Removing unreachable block (ram,0x0001804853a6)
// WARNING: Removing unreachable block (ram,0x0001804853ab)
// WARNING: Removing unreachable block (ram,0x0001804853bf)
// WARNING: Removing unreachable block (ram,0x0001804853c4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_485280(uint64_t *param_1,int *param_2,int8_t param_3)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int aiStack_58 [4];
  code *pcStack_48;
  void *plocal_var_40;
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_6592_ptr;
  iVar1 = *param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((iVar1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))();
  }
  lVar3 = system_cache_buffer;
  param_1[3] = 0;
  iVar1 = *(int *)(param_1 + 2);
  if ((iVar1 != 0) && (lVar3 != 0)) {
    (**(code **)(lVar3 + 0x30))(iVar1);
  }
  uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
  if ((iVar1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(iVar1);
  }
  plocal_var_40 = &ui_system_data_1296_ptr;
  pcStack_48 = function_485510;
  aiStack_58[0] = iVar1;
  plVar5 = (int64_t *)SystemCore_ErrorHandler(uVar4,aiStack_58);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar2 = (int64_t *)param_1[3];
  param_1[3] = plVar5;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(uint64_t *)(param_1[3] + 0x18) = 0xfffffffffffffffc;
  *(int8_t *)(param_1 + 4) = 1;
  *(int8_t *)((int64_t)param_1 + 0x21) = param_3;
  if ((iVar1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(iVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_485450(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  if ((int64_t *)param_1[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[3] + 0x38))();
  }
  if ((*(int *)(param_1 + 2) != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4854d0(int *param_1)
void function_4854d0(int *param_1)
{
  if ((*param_1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int * function_485510(int *param_1,int *param_2,int param_3)
{
  int iVar1;
  if (param_3 == 3) {
    return (int *)0x180c08a90;
  }
  if (param_3 == 4) {
    return param_1;
  }
  if (param_3 == 0) {
    iVar1 = *param_1;
  }
  else {
    if (param_3 == 1) {
      iVar1 = *param_2;
      *param_1 = iVar1;
      if ((iVar1 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar1);
      }
      return (int *)0x0;
    }
    if (param_3 != 2) {
      return (int *)0x0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    iVar1 = *param_2;
  }
  if ((iVar1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  return (int *)0x0;
}
uint64_t *
function_4855d0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x10;
  strcpy_s(param_2[1],0x80,&processed_var_6688_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
int64_t * function_485650(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  plVar1 = *(int64_t **)(param_1 + 0x150);
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}