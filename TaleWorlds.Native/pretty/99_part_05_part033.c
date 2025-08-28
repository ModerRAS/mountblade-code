#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part033.c - 9 个函数

// 函数: void FUN_1802ec200(int64_t param_1,int64_t *param_2)
void FUN_1802ec200(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  code *pcVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  int64_t *aplStackX_18 [2];
  
  puVar6 = *(uint64_t **)(param_1 + 0xf0);
  if (puVar6 < *(uint64_t **)(param_1 + 0xf8)) {
    do {
      plVar1 = (int64_t *)*puVar6;
      pcVar2 = *(code **)(*plVar1 + 0x118);
      aplStackX_18[0] = (int64_t *)*param_2;
      if (aplStackX_18[0] != (int64_t *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x28))();
      }
      (*pcVar2)(plVar1,aplStackX_18);
      if (aplStackX_18[0] != (int64_t *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x38))();
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 < *(uint64_t **)(param_1 + 0xf8));
  }
  lVar5 = *(int64_t *)(param_1 + 0x260);
  if (lVar5 != 0) {
    puVar6 = *(uint64_t **)(lVar5 + 0x1a8);
    if (puVar6 < *(uint64_t **)(lVar5 + 0x1b0)) {
      do {
        plVar1 = (int64_t *)*puVar6;
        pcVar2 = *(code **)(*plVar1 + 0x118);
        aplStackX_18[0] = (int64_t *)*param_2;
        if (aplStackX_18[0] != (int64_t *)0x0) {
          (**(code **)(*aplStackX_18[0] + 0x28))();
        }
        (*pcVar2)(plVar1,aplStackX_18);
        if (aplStackX_18[0] != (int64_t *)0x0) {
          (**(code **)(*aplStackX_18[0] + 0x38))();
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 < *(uint64_t **)(lVar5 + 0x1b0));
    }
    iVar9 = 0;
    if ('\0' < *(char *)(lVar5 + 0x20)) {
      lVar10 = 0;
      do {
        lVar3 = *(int64_t *)(lVar5 + 0x18);
        puVar6 = *(uint64_t **)(lVar3 + 0xb0 + lVar10);
        if (puVar6 < *(uint64_t **)(lVar3 + 0xb8 + lVar10)) {
          do {
            plVar1 = (int64_t *)*puVar6;
            pcVar2 = *(code **)(*plVar1 + 0x118);
            aplStackX_18[0] = (int64_t *)*param_2;
            if (aplStackX_18[0] != (int64_t *)0x0) {
              (**(code **)(*aplStackX_18[0] + 0x28))();
            }
            (*pcVar2)(plVar1,aplStackX_18);
            if (aplStackX_18[0] != (int64_t *)0x0) {
              (**(code **)(*aplStackX_18[0] + 0x38))();
            }
            puVar6 = puVar6 + 1;
          } while (puVar6 < *(uint64_t **)(lVar3 + 0xb8 + lVar10));
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 0x100;
      } while (iVar9 < *(char *)(lVar5 + 0x20));
    }
  }
  if (((*(uint *)(param_1 + 0x2ac) & 0x200000) == 0) &&
     (bVar4 = (*(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x80) -
              *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x88)) * *(float *)(param_1 + 0x94)
              + (*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x88) -
                *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x84)) *
                *(float *)(param_1 + 0x90) +
              (*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x84) -
              *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x80)) * *(float *)(param_1 + 0x98)
              < 0.0, (bool)(*(byte *)(param_1 + 0x2e8) >> 2 & 1) != bVar4)) {
    lVar5 = *(int64_t *)(param_1 + 0xf0);
    iVar9 = 0;
    if (*(int64_t *)(param_1 + 0xf8) - lVar5 >> 3 != 0) {
      lVar10 = 0;
      do {
        plVar1 = *(int64_t **)(lVar10 + lVar5);
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x1a0))(plVar1,bVar4);
        }
        lVar5 = *(int64_t *)(param_1 + 0xf0);
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 8;
      } while ((uint64_t)(int64_t)iVar9 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar5 >> 3))
      ;
    }
    lVar5 = *(int64_t *)(param_1 + 0x260);
    if (lVar5 != 0) {
      iVar9 = 0;
      if (*(int64_t *)(lVar5 + 0x1b0) - *(int64_t *)(lVar5 + 0x1a8) >> 3 != 0) {
        lVar10 = 0;
        do {
          plVar1 = *(int64_t **)(lVar10 + *(int64_t *)(lVar5 + 0x1a8));
          (**(code **)(*plVar1 + 0x1a0))(plVar1,bVar4);
          lVar10 = lVar10 + 8;
          iVar9 = iVar9 + 1;
        } while ((uint64_t)(int64_t)iVar9 <
                 (uint64_t)(*(int64_t *)(lVar5 + 0x1b0) - *(int64_t *)(lVar5 + 0x1a8) >> 3));
      }
      iVar9 = 0;
      if ('\0' < *(char *)(lVar5 + 0x20)) {
        lVar10 = 0;
        do {
          lVar3 = *(int64_t *)(lVar5 + 0x18);
          iVar7 = 0;
          if (*(int64_t *)(lVar10 + 0xb8 + lVar3) - *(int64_t *)(lVar10 + 0xb0 + lVar3) >> 3 != 0)
          {
            lVar8 = 0;
            do {
              plVar1 = *(int64_t **)(lVar8 + *(int64_t *)(lVar10 + 0xb0 + lVar3));
              (**(code **)(*plVar1 + 0x1a0))(plVar1,bVar4);
              lVar8 = lVar8 + 8;
              iVar7 = iVar7 + 1;
            } while ((uint64_t)(int64_t)iVar7 <
                     (uint64_t)
                     (*(int64_t *)(lVar10 + 0xb8 + lVar3) - *(int64_t *)(lVar10 + 0xb0 + lVar3) >>
                     3));
          }
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 0x100;
        } while (iVar9 < *(char *)(lVar5 + 0x20));
      }
    }
    *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) & 0xfb;
    *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) | bVar4 << 2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ec3d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_1802ec3d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  
  FUN_1802ed990(param_1,1,param_3,param_4,0xfffffffffffffffe);
  uVar2 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x240,0x10,3);
  plVar3 = (int64_t *)FUN_1802fb620(uVar2,param_2,param_3);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar1 = *(int64_t **)(param_1 + 0x260);
  *(int64_t **)(param_1 + 0x260) = plVar3;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  FUN_1802fdb10(*(uint64_t *)(param_1 + 0x260),param_1);
  *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
  if (*(int64_t *)(param_1 + 0x168) != 0) {
    func_0x0001802eeba0();
  }
  return;
}






// 函数: void FUN_1802ec490(uint64_t param_1,int32_t *param_2)
void FUN_1802ec490(uint64_t param_1,int32_t *param_2)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t *plStack_30;
  int64_t *plStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  plStack_30 = (int64_t *)0x0;
  plStack_28 = (int64_t *)0x0;
  iVar10 = 0;
  uStack_20 = 0;
  uStack_18 = 3;
  FUN_1802e92b0(0,&plStack_30,1,0xffffffff,0xfffffffffffffffe);
  plVar7 = plStack_28;
  plVar6 = plStack_30;
  uVar9 = (int64_t)plStack_28 - (int64_t)plStack_30 >> 3;
  plVar8 = plStack_30;
  plVar5 = plStack_30;
  if (uVar9 != 0) {
    do {
      lVar1 = *plVar8;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(int32_t *)(lVar1 + 0x1a0) = *param_2;
      *(int32_t *)(lVar1 + 0x1a4) = uVar2;
      *(int32_t *)(lVar1 + 0x1a8) = uVar3;
      *(int32_t *)(lVar1 + 0x1ac) = uVar4;
      iVar10 = iVar10 + 1;
      plVar8 = plVar8 + 1;
    } while ((uint64_t)(int64_t)iVar10 < uVar9);
  }
  for (; plVar5 != plVar7; plVar5 = plVar5 + 1) {
    if ((int64_t *)*plVar5 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar5 + 0x38))();
    }
  }
  if (plVar6 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar6);
  }
  return;
}






// 函数: void FUN_1802ec550(uint64_t param_1,byte param_2)
void FUN_1802ec550(uint64_t param_1,byte param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t *plStack_30;
  int64_t *plStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  plStack_30 = (int64_t *)0x0;
  plStack_28 = (int64_t *)0x0;
  iVar6 = 0;
  uStack_20 = 0;
  uStack_18 = 3;
  FUN_1802e92b0(0,&plStack_30,1,0xffffffff,0xfffffffffffffffe);
  plVar3 = plStack_28;
  plVar2 = plStack_30;
  uVar5 = (int64_t)plStack_28 - (int64_t)plStack_30 >> 3;
  plVar1 = plStack_30;
  if (uVar5 != 0) {
    plVar4 = plStack_30;
    do {
      *(byte *)(*plVar4 + 0xf8) = (param_2 ^ 1) + 1;
      iVar6 = iVar6 + 1;
      plVar4 = plVar4 + 1;
    } while ((uint64_t)(int64_t)iVar6 < uVar5);
  }
  for (; plVar1 != plVar3; plVar1 = plVar1 + 1) {
    if ((int64_t *)*plVar1 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar1 + 0x38))();
    }
  }
  if (plVar2 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar2);
  }
  return;
}






// 函数: void FUN_1802ec620(void)
void FUN_1802ec620(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t *plStack_30;
  int64_t *plStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  plStack_30 = (int64_t *)0x0;
  plStack_28 = (int64_t *)0x0;
  iVar7 = 0;
  uStack_20 = 0;
  uStack_18 = 3;
  FUN_1802e92b0(0,&plStack_30,1,0xffffffff,0xfffffffffffffffe);
  plVar4 = plStack_28;
  plVar3 = plStack_30;
  uVar6 = (int64_t)plStack_28 - (int64_t)plStack_30 >> 3;
  plVar5 = plStack_30;
  plVar2 = plStack_30;
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar5;
      *(int8_t *)(lVar1 + 0xf8) = 0;
      *(int32_t *)(lVar1 + 0x1a0) = 0;
      *(int32_t *)(lVar1 + 0x1a4) = 0;
      *(int32_t *)(lVar1 + 0x1a8) = 0;
      *(int32_t *)(lVar1 + 0x1ac) = 0x7f7fffff;
      iVar7 = iVar7 + 1;
      plVar5 = plVar5 + 1;
    } while ((uint64_t)(int64_t)iVar7 < uVar6);
  }
  for (; plVar2 != plVar4; plVar2 = plVar2 + 1) {
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ec6e0(int64_t param_1,int64_t param_2,char param_3,int8_t param_4,
void FUN_1802ec6e0(int64_t param_1,int64_t param_2,char param_3,int8_t param_4,
                  int64_t param_5)

{
  uint *puVar1;
  byte bVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  byte *pbVar12;
  uint64_t *puVar13;
  int64_t *plVar14;
  uint64_t *puVar15;
  void *puVar16;
  int64_t *plVar17;
  int iVar18;
  int64_t lVar19;
  int8_t uVar20;
  int iVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  int64_t lVar24;
  char acStack_b8 [8];
  int64_t lStack_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int32_t uStack_98;
  uint uStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int32_t uStack_70;
  uint64_t *puStack_68;
  uint64_t uStack_60;
  uint64_t *puStack_58;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_90 = CONCAT31((uint3)(*(uint *)(param_1 + 0x2ac) >> 0x17),
                       ~(byte)(*(uint *)(param_1 + 0x2ac) >> 0xf)) & 0xffffff01;
  puVar16 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x290) != (void *)0x0) {
    puVar16 = *(void **)(param_2 + 0x290);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x288) + 0x10))((int64_t *)(param_1 + 0x288),puVar16);
  *(int32_t *)(param_1 + 0x2ac) = *(int32_t *)(param_2 + 0x2ac);
  *(int32_t *)(param_1 + 0x2c8) = *(int32_t *)(param_2 + 0x2c8);
  *(int8_t *)(param_1 + 0x2e7) = *(int8_t *)(param_2 + 0x2e7);
  lVar10 = *(int64_t *)(param_2 + 0x198);
  if (lVar10 == param_2 + 400) {
    if ((char)uStack_90 == '\0') {
      *(uint *)(param_1 + 0x2ac) = *(uint *)(param_1 + 0x2ac) | 0x8000;
      lStack_b0 = 0;
      lStack_a8 = 0;
      lStack_a0 = 0;
      uStack_98 = 3;
      lVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x200);
      if (lStack_b0 != lStack_a8) {
                    // WARNING: Subroutine does not return
        memmove(lVar10,lStack_b0,lStack_a8 - lStack_b0);
      }
      if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lStack_b0);
      }
      lStack_a0 = lVar10 + 0x200;
      lStack_b0 = lVar10;
      lStack_a8 = lVar10;
      FUN_1802e8c60(param_1,&lStack_b0);
      iVar21 = 0;
      if (lStack_a8 - lStack_b0 >> 3 != 0) {
        lVar10 = 0;
        do {
          puVar1 = (uint *)(*(int64_t *)(lVar10 + lStack_b0) + 0x2ac);
          *puVar1 = *puVar1 | 0x8000;
          iVar21 = iVar21 + 1;
          lVar10 = lVar10 + 8;
        } while ((uint64_t)(int64_t)iVar21 < (uint64_t)(lStack_a8 - lStack_b0 >> 3));
      }
      if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
    }
    uVar8 = *(uint *)(param_2 + 0xe0);
    uVar23 = (uint64_t)uVar8;
    if (*(int64_t *)(param_2 + 0xd8) != 0) {
      CoreMemoryPoolProcessor(param_1 + 0xd0,uVar23);
    }
    if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(param_1 + 0xd8),*(uint64_t *)(param_2 + 0xd8),uVar23);
    }
    *(int32_t *)(param_1 + 0xe0) = 0;
    if (*(int64_t *)(param_1 + 0xd8) != 0) {
      *(int8_t *)(uVar23 + *(int64_t *)(param_1 + 0xd8)) = 0;
    }
    *(int32_t *)(param_1 + 0xec) = *(int32_t *)(param_2 + 0xec);
    *(byte *)(param_1 + 0x2e8) =
         *(byte *)(param_1 + 0x2e8) ^ (*(byte *)(param_1 + 0x2e8) ^ *(byte *)(param_2 + 0x2e8)) & 1;
    *(int32_t *)(param_1 + 0x2c4) = *(int32_t *)(param_2 + 0x2c4);
    uVar23 = (uint64_t)*(byte *)(param_2 + 0x2e4);
    *(byte *)(param_1 + 0x2e4) = *(byte *)(param_2 + 0x2e4);
    iVar21 = 0;
    if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
      lVar10 = 0;
      do {
        FUN_1802e8580(*(uint64_t *)(lVar10 + *(int64_t *)(param_1 + 0x1c0)),uVar23 & 0xff,1);
        iVar21 = iVar21 + 1;
        lVar10 = lVar10 + 8;
      } while ((uint64_t)(int64_t)iVar21 <
               (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
    }
    puVar15 = (uint64_t *)(param_2 + 0x30);
    puVar13 = (uint64_t *)(param_1 + 0x30);
    cVar7 = func_0x000180285980();
    if (cVar7 != '\0') {
      uVar22 = puVar15[1];
      *puVar13 = *puVar15;
      puVar13[1] = uVar22;
      uVar22 = puVar15[3];
      puVar13[2] = puVar15[2];
      puVar13[3] = uVar22;
      uVar3 = *(int32_t *)((int64_t)puVar15 + 0x24);
      uVar4 = *(int32_t *)(puVar15 + 5);
      uVar5 = *(int32_t *)((int64_t)puVar15 + 0x2c);
      *(int32_t *)(puVar13 + 4) = *(int32_t *)(puVar15 + 4);
      *(int32_t *)((int64_t)puVar13 + 0x24) = uVar3;
      *(int32_t *)(puVar13 + 5) = uVar4;
      *(int32_t *)((int64_t)puVar13 + 0x2c) = uVar5;
      uVar3 = *(int32_t *)((int64_t)puVar15 + 0x34);
      uVar4 = *(int32_t *)(puVar15 + 7);
      uVar5 = *(int32_t *)((int64_t)puVar15 + 0x3c);
      *(int32_t *)(puVar13 + 6) = *(int32_t *)(puVar15 + 6);
      *(int32_t *)((int64_t)puVar13 + 0x34) = uVar3;
      *(int32_t *)(puVar13 + 7) = uVar4;
      *(int32_t *)((int64_t)puVar13 + 0x3c) = uVar5;
      FUN_180254610(param_1);
      FUN_1802eace0();
    }
    if ((*(uint *)(param_1 + 0x2ac) & 0x8000) == 0) {
      FUN_1802eced0(param_1,param_2 + 0x110);
    }
    FUN_1802ed050(param_1,*(uint64_t *)(param_2 + 0x10),*(int32_t *)(param_2 + 0x18));
    FUN_1802ed6c0(param_1,param_2,param_5);
    iVar21 = 0;
    lVar10 = *(int64_t *)(param_2 + 0x1c0);
    if (*(int64_t *)(param_2 + 0x1c8) - lVar10 >> 3 != 0) {
      lVar24 = 0;
      do {
        lVar10 = *(int64_t *)(lVar10 + lVar24);
        uVar22 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x2f0,0x10,0xd);
        plVar11 = (int64_t *)FUN_1802e6b00(uVar22,*(int8_t *)(param_1 + 0x2e5));
        if (plVar11 != (int64_t *)0x0) {
          (**(code **)(*plVar11 + 0x28))(plVar11);
        }
        puVar16 = &system_buffer_ptr;
        if (*(void **)(lVar10 + 0x290) != (void *)0x0) {
          puVar16 = *(void **)(lVar10 + 0x290);
        }
        (**(code **)(plVar11[0x51] + 0x10))(plVar11 + 0x51,puVar16);
        plVar17 = (int64_t *)(lVar10 + 0x30);
        plVar14 = plVar11 + 6;
        cVar7 = func_0x000180285980();
        if (cVar7 != '\0') {
          lVar9 = plVar17[1];
          *plVar14 = *plVar17;
          plVar14[1] = lVar9;
          lVar9 = plVar17[3];
          plVar14[2] = plVar17[2];
          plVar14[3] = lVar9;
          uVar3 = *(int32_t *)((int64_t)plVar17 + 0x24);
          lVar9 = plVar17[5];
          uVar4 = *(int32_t *)((int64_t)plVar17 + 0x2c);
          *(int *)(plVar14 + 4) = (int)plVar17[4];
          *(int32_t *)((int64_t)plVar14 + 0x24) = uVar3;
          *(int *)(plVar14 + 5) = (int)lVar9;
          *(int32_t *)((int64_t)plVar14 + 0x2c) = uVar4;
          uVar3 = *(int32_t *)((int64_t)plVar17 + 0x34);
          lVar9 = plVar17[7];
          uVar4 = *(int32_t *)((int64_t)plVar17 + 0x3c);
          *(int *)(plVar14 + 6) = (int)plVar17[6];
          *(int32_t *)((int64_t)plVar14 + 0x34) = uVar3;
          *(int *)(plVar14 + 7) = (int)lVar9;
          *(int32_t *)((int64_t)plVar14 + 0x3c) = uVar4;
          FUN_180254610(plVar11);
          FUN_1802eace0();
        }
        FUN_1802e8a50(param_1,plVar11,0,1);
        FUN_1802ec6e0(plVar11,lVar10,0,param_4,param_5);
        if ((char)uStack_90 == '\0') {
          *(uint *)((int64_t)plVar11 + 0x2ac) = *(uint *)((int64_t)plVar11 + 0x2ac) | 0x8000;
        }
        if (plVar11 != (int64_t *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11);
        }
        iVar21 = iVar21 + 1;
        lVar24 = lVar24 + 8;
        lVar10 = *(int64_t *)(param_2 + 0x1c0);
      } while ((uint64_t)(int64_t)iVar21 <
               (uint64_t)(*(int64_t *)(param_2 + 0x1c8) - lVar10 >> 3));
    }
    FUN_1802efad0(param_1,*(uint64_t *)(param_2 + 0x260));
    if (param_5 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(int8_t *)(param_5 + 0x38);
    }
    FUN_1802ef3c0(param_1,param_2,param_4,uVar20);
    if ((*(byte *)(param_2 + 0x2e8) & 0x40) != 0) {
      *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) | 0x40;
      uVar22 = *(uint64_t *)(param_2 + 0x188);
      *(uint64_t *)(param_1 + 0x180) = *(uint64_t *)(param_2 + 0x180);
      *(uint64_t *)(param_1 + 0x188) = uVar22;
    }
    if (param_3 != '\0') {
      iVar21 = 0;
      iVar18 = 0;
      plVar11 = *(int64_t **)(param_1 + 0x1c0);
      uVar23 = *(int64_t *)(param_1 + 0x1c8) - (int64_t)plVar11 >> 3;
      if (uVar23 != 0) {
        do {
          iVar6 = iVar21 + 1;
          if ((*(uint *)(*plVar11 + 0x2ac) & 0x20000) != 0) {
            iVar6 = iVar21;
          }
          iVar21 = iVar6;
          iVar18 = iVar18 + 1;
          plVar11 = plVar11 + 1;
        } while ((uint64_t)(int64_t)iVar18 < uVar23);
        if (0 < iVar21) {
          lStack_b0 = 0;
          lStack_a8 = 0;
          lStack_a0 = 0;
          uStack_98 = 3;
          lVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x200,3);
          if (lStack_b0 != lStack_a8) {
                    // WARNING: Subroutine does not return
            memmove(lVar10,lStack_b0,lStack_a8 - lStack_b0);
          }
          if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(lStack_b0);
          }
          lStack_a0 = lVar10 + 0x200;
          lStack_b0 = lVar10;
          lStack_a8 = lVar10;
          FUN_1802e8c60(param_1,&lStack_b0);
          lStack_88 = 0;
          lStack_80 = 0;
          lStack_78 = 0;
          uStack_70 = 3;
          lVar10 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x200,3);
          if (lStack_88 != lStack_80) {
                    // WARNING: Subroutine does not return
            memmove(lVar10,lStack_88,lStack_80 - lStack_88);
          }
          if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(lStack_88);
          }
          lStack_78 = lVar10 + 0x200;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          FUN_1802e8c60(param_2,&lStack_88);
          iVar21 = (int)(lStack_a8 - lStack_b0 >> 3) + -1;
          lVar10 = (int64_t)iVar21;
          if (-1 < iVar21) {
            do {
              plVar11 = *(int64_t **)(lStack_b0 + lVar10 * 8);
              if (plVar11 != (int64_t *)0x0) {
                (**(code **)(*plVar11 + 0x28))(plVar11);
              }
              FUN_1802ef920(plVar11,*(uint64_t *)(lStack_88 + lVar10 * 8));
              if (plVar11 != (int64_t *)0x0) {
                (**(code **)(*plVar11 + 0x38))(plVar11);
              }
              lVar10 = lVar10 + -1;
            } while (-1 < lVar10);
          }
          if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
        }
      }
    }
    return;
  }
  lVar24 = param_1 + 400;
  lVar9 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x78,*(int8_t *)(param_1 + 0x1b8));
  puStack_58 = (uint64_t *)(lVar9 + 0x20);
  *puStack_58 = &system_state_ptr;
  *(uint64_t *)(lVar9 + 0x28) = 0;
  *(int32_t *)(lVar9 + 0x30) = 0;
  *puStack_58 = &memory_allocator_3480_ptr;
  *(int8_t **)(lVar9 + 0x28) = (int8_t *)(lVar9 + 0x38);
  *(int32_t *)(lVar9 + 0x30) = 0;
  *(int8_t *)(lVar9 + 0x38) = 0;
  *(int32_t *)(lVar9 + 0x30) = *(int32_t *)(lVar10 + 0x30);
  puVar16 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 0x28) != (void *)0x0) {
    puVar16 = *(void **)(lVar10 + 0x28);
  }
  puStack_68 = puStack_58;
  strcpy_s(*(uint64_t *)(lVar9 + 0x28),0x40,puVar16);
  puStack_68 = (uint64_t *)lVar9;
  lVar10 = FUN_1800590b0(lVar24,acStack_b8,puStack_58);
  if (acStack_b8[0] == '\0') {
    *puStack_58 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar9);
  }
  if (lVar10 != lVar24) {
    if (*(int *)(lVar10 + 0x30) == 0) {
LAB_1802ec857:
      uVar22 = 1;
      goto LAB_1802ec862;
    }
    if (*(int *)(lVar9 + 0x30) != 0) {
      pbVar12 = *(byte **)(lVar10 + 0x28);
      lVar19 = *(int64_t *)(lVar9 + 0x28) - (int64_t)pbVar12;
      do {
        bVar2 = *pbVar12;
        uVar8 = (uint)pbVar12[lVar19];
        if (bVar2 != uVar8) break;
        pbVar12 = pbVar12 + 1;
      } while (uVar8 != 0);
      if ((int)(bVar2 - uVar8) < 1) goto LAB_1802ec857;
    }
  }
  uVar22 = 0;
LAB_1802ec862:
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar9,lVar10,lVar24,uVar22);
}






// 函数: void FUN_1802eced0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802eced0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  plVar1 = (int64_t *)*param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x110);
  *(int64_t **)(param_1 + 0x110) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  SystemCore_ConfigurationHandler0(param_1 + 0x118,param_2 + 1,param_3,param_4,uVar6);
  lVar5 = param_2[6];
  *(int64_t *)(param_1 + 0x138) = param_2[5];
  *(int64_t *)(param_1 + 0x140) = lVar5;
  *(int *)(param_1 + 0x148) = (int)param_2[7];
  *(int32_t *)(param_1 + 0x14c) = *(int32_t *)((int64_t)param_2 + 0x3c);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x44);
  lVar5 = param_2[9];
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x4c);
  *(int *)(param_1 + 0x150) = (int)param_2[8];
  *(int32_t *)(param_1 + 0x154) = uVar3;
  *(int *)(param_1 + 0x158) = (int)lVar5;
  *(int32_t *)(param_1 + 0x15c) = uVar4;
  *(int *)(param_1 + 0x160) = (int)param_2[10];
  lVar5 = *(int64_t *)(param_1 + 0x20);
  if (lVar5 != 0) {
    if (*(int64_t *)(param_1 + 0x270) != 0) {
      FUN_1802e8910(param_1);
      *(int8_t *)(param_1 + 0x278) = 0;
      lVar5 = *(int64_t *)(param_1 + 0x20);
    }
    FUN_1802f28f0(param_1,lVar5);
  }
  return;
}






// 函数: void FUN_1802ecfb0(int64_t param_1,int64_t *param_2,int32_t param_3)
void FUN_1802ecfb0(int64_t param_1,int64_t *param_2,int32_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(int64_t **)(param_1 + 0x110);
  *(int64_t **)(param_1 + 0x110) = param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x148) = param_3;
  lVar2 = *(int64_t *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (*(int64_t *)(param_1 + 0x270) != 0) {
      FUN_1802e8910(param_1);
      *(int8_t *)(param_1 + 0x278) = 0;
      lVar2 = *(int64_t *)(param_1 + 0x20);
    }
    FUN_1802f28f0(param_1,lVar2);
  }
  return;
}






// 函数: void FUN_1802ed050(int64_t param_1,int64_t *param_2,int32_t param_3)
void FUN_1802ed050(int64_t param_1,int64_t *param_2,int32_t param_3)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  
  if (param_2 != (int64_t *)0x0) {
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plStackX_8 = *(int64_t **)(param_1 + 0x10);
  *(int64_t **)(param_1 + 0x10) = param_2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x18) = param_3;
  lVar3 = *(int64_t *)(param_1 + 0x28);
  if (lVar3 != 0) {
    if (*(int64_t *)(lVar3 + 0x170) != 0) {
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x20) + 0x29a8);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        lVar3 = *(int64_t *)(param_1 + 0x28);
      }
      *(uint64_t *)(lVar3 + 0x170) = 0;
    }
    plStackX_8 = *(int64_t **)(param_1 + 0x10);
    if ((plStackX_8 != (int64_t *)0x0) && (lVar3 = *(int64_t *)(param_1 + 0x20), lVar3 != 0)) {
      pplStackX_10 = &plStackX_8;
      (**(code **)(*plStackX_8 + 0x28))();
      uVar2 = FUN_180389a90(lVar3 + 0x29a0,&plStackX_8);
      *(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x170) = uVar2;
      lVar3 = *(int64_t *)(param_1 + 0x20);
      plVar1 = *(int64_t **)(lVar3 + 0x29a8);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x18))
                  (plVar1,*(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x170),param_1 + 0x70);
        lVar3 = *(int64_t *)(param_1 + 0x20);
      }
      plVar1 = *(int64_t **)(lVar3 + 0x29a8);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x20))
                  (plVar1,*(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x170),
                   *(int32_t *)(param_1 + 0x18));
      }
    }
  }
  return;
}



int FUN_1802ed190(int64_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 0xf0);
  iVar2 = 0;
  iVar3 = 0;
  if (*(int64_t *)(param_1 + 0xf8) - lVar5 >> 3 != 0) {
    lVar4 = 0;
    do {
      if ((*(int64_t **)(lVar4 + lVar5) != (int64_t *)0x0) &&
         (iVar1 = (**(code **)(**(int64_t **)(lVar4 + lVar5) + 0x98))(), iVar1 == param_2)) {
        iVar2 = iVar2 + 1;
      }
      lVar5 = *(int64_t *)(param_1 + 0xf0);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar5 >> 3));
  }
  return iVar2;
}



uint FUN_1802ed1c9(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int iVar1;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  uint64_t uVar2;
  int unaff_R14D;
  
  uVar2 = (uint64_t)unaff_EBX;
  do {
    if (*(int64_t **)(uVar2 + param_3) != (int64_t *)0x0) {
      iVar1 = (**(code **)(**(int64_t **)(uVar2 + param_3) + 0x98))();
      if (iVar1 == unaff_R14D) {
        unaff_EBX = unaff_EBX + 1;
      }
    }
    param_3 = *(int64_t *)(unaff_RBP + 0xf0);
    unaff_ESI = unaff_ESI + 1;
    uVar2 = uVar2 + 8;
  } while ((uint64_t)(int64_t)unaff_ESI <
           (uint64_t)(*(int64_t *)(unaff_RBP + 0xf8) - param_3 >> 3));
  return unaff_EBX;
}



int32_t FUN_1802ed211(void)

{
  int32_t unaff_EBX;
  
  return unaff_EBX;
}



uint64_t FUN_1802ed230(int64_t param_1,uint64_t param_2,int param_3)

{
  int64_t *plVar1;
  
  if ((*(char *)(param_1 + 0x2e8) < '\0') &&
     (plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xb0) + (int64_t)param_3 * 8),
     plVar1 != (int64_t *)0x0)) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
  }
  else {
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + (int64_t)param_3 * 8);
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2,param_3,param_1,0,0xfffffffffffffffe);
  }
  return param_2;
}



int64_t * FUN_1802ed2b0(int64_t param_1,int64_t *param_2,int param_3,int param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar8;
  uint64_t uVar7;
  
  uVar5 = 0;
  *param_2 = 0;
  lVar4 = *(int64_t *)(param_1 + 0xf0);
  uVar7 = uVar5;
  uVar8 = uVar5;
  if (*(int64_t *)(param_1 + 0xf8) - lVar4 >> 3 != 0) {
    do {
      iVar3 = (**(code **)(**(int64_t **)(uVar8 + lVar4) + 0x98))();
      if (iVar3 == param_3) {
        if (param_4 == (int)uVar5) {
          plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + (int64_t)(int)uVar7 * 8);
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x28))(plVar1);
          }
          plVar2 = (int64_t *)*param_2;
          *param_2 = (int64_t)plVar1;
          if (plVar2 == (int64_t *)0x0) {
            return param_2;
          }
          (**(code **)(*plVar2 + 0x38))();
          return param_2;
        }
        uVar5 = (uint64_t)((int)uVar5 + 1);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      uVar8 = uVar8 + 8;
      lVar4 = *(int64_t *)(param_1 + 0xf0);
    } while ((uint64_t)(int64_t)(int)uVar6 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar4 >> 3));
  }
  return param_2;
}






