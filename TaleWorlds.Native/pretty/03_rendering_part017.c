#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part017.c - 11 个函数

// 函数: void FUN_1802776ad(void)
void FUN_1802776ad(void)

{
  int *piVar1;
  byte *pbVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  uint unaff_R14D;
  
  do {
    if ((*(uint *)(unaff_RSI + 1) & unaff_R14D) != 0) {
      lVar3 = *unaff_RSI;
      if (*(int64_t *)(lVar3 + 0x1b8) != 0) {
        lVar6 = 0xb8;
        lVar5 = system_main_module_state;
        do {
          lVar4 = *(int64_t *)(lVar6 + *(int64_t *)(lVar3 + 0x1b8));
          if ((((lVar4 != 0) && (*(int64_t *)(lVar6 + 0x328 + *(int64_t *)(lVar3 + 0x1b8)) == 0))
              && ((*(uint *)(lVar4 + 0x328) & 0x20000000) == 0)) &&
             (*(int64_t *)(lVar4 + 0x370) == 0)) {
            if (*(int64_t *)(lVar4 + 0x1d8) == 0) {
              FUN_18023b050(lVar4,0);
              lVar5 = system_main_module_state;
              piVar1 = (int *)(*(int64_t *)(lVar6 + *(int64_t *)(lVar3 + 0x1b8)) + 0x3a8);
              *piVar1 = *piVar1 + 1;
            }
            else if (lVar5 != 0) {
              *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(lVar5 + 0x224);
            }
          }
          lVar6 = lVar6 + 8;
        } while (lVar6 < 0x138);
      }
      if (*(char *)(lVar3 + 0xf9) != '\0') {
        if (*(int64_t *)(lVar3 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(uint64_t *)(lVar3 + 0x1d8) = 0;
        LOCK();
        *(int8_t *)(lVar3 + 0xf9) = 0;
        UNLOCK();
      }
      if (*(int64_t *)(lVar3 + 0x1e8) != 0) {
        FUN_180080060();
        *(uint64_t *)(lVar3 + 0x1e8) = 0;
        if (*(int64_t *)(lVar3 + 0x1f0) != 0) {
          pbVar2 = (byte *)(*(int64_t *)(lVar3 + 0x1f0) + 0xfe);
          *pbVar2 = *pbVar2 & 0xfb;
        }
      }
    }
    unaff_RSI = unaff_RSI + 2;
  } while (unaff_RSI < *(int64_t **)(unaff_RBP + 0x40));
  return;
}





// 函数: void FUN_1802777dd(void)
void FUN_1802777dd(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00018027787a)
// WARNING: Removing unreachable block (ram,0x0001802778b9)



// 函数: void FUN_1802777f0(int64_t param_1)
void FUN_1802777f0(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plStack_70;
  int8_t auStack_68 [8];
  int64_t *plStack_60;
  int32_t uStack_58;
  int64_t *plStack_50;
  int16_t uStack_48;
  char cStack_46;
  
  plVar3 = *(int64_t **)(param_1 + 0x38);
  if (plVar3 < *(int64_t **)(param_1 + 0x40)) {
    do {
      plVar1 = (int64_t *)*plVar3;
      if (plVar1[0x42] == 0) {
        plVar1[0x3f] = 0;
        plVar1[0x40] = 0;
        *(int32_t *)(plVar1 + 0x41) = 0;
        FUN_180079520(plVar1);
      }
      else {
        (**(code **)(*plVar1 + 0x28))();
        plStack_50 = (int64_t *)0x0;
        plStack_60 = (int64_t *)0x0;
        auStack_68[0] = 0;
        (**(code **)(*plVar1 + 0x28))(plVar1);
        uStack_58 = 0;
        plStack_60 = plVar1;
        FUN_18007f4c0(auStack_68);
        plVar2 = plStack_50;
        if (plStack_50 != (int64_t *)0x0) {
          (**(code **)(*plStack_50 + 0x28))(plStack_50);
        }
        plStack_70 = plVar2;
        uStack_48 = 0;
        cStack_46 = '\0';
        (**(code **)(*plVar1 + 0x38))(plVar1);
        *(int32_t *)(plVar2 + 2) = 0;
        *(int32_t *)(plVar2 + 7) = 0;
        *(int32_t *)(plVar2 + 0x11) = 0;
        *(int32_t *)(plVar2 + 0xc) = 0;
        *(int16_t *)(plVar2 + 0x18) = 0;
        if (plVar2[0x17] != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        plVar2[0x17] = 0;
        FUN_180085530(plVar2[0x16]);
        plVar2[0x16] = 0;
        *(int32_t *)(plVar2 + 0x19) = 0;
        uStack_48 = 0x101;
        if ((plVar1 != (int64_t *)0x0) && (plVar2 != (int64_t *)0x0)) {
          if (cStack_46 != '\0') {
            FUN_180075b70();
          }
          FUN_18007f6a0(auStack_68);
          if ((char)uStack_48 != '\0') {
            FUN_180079520(plVar1);
          }
          if (uStack_48._1_1_ != '\0') {
            FUN_180079520(plVar1);
          }
          plStack_70 = (int64_t *)0x0;
          if (plVar2 != (int64_t *)0x0) {
            (**(code **)(*plVar2 + 0x38))();
          }
        }
        FUN_18007f6a0(auStack_68);
        if (plStack_50 != (int64_t *)0x0) {
          (**(code **)(*plStack_50 + 0x38))();
        }
        if (plStack_70 != (int64_t *)0x0) {
          (**(code **)(*plStack_70 + 0x38))();
        }
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 < *(int64_t **)(param_1 + 0x40));
  }
  return;
}





// 函数: void FUN_180277a20(int64_t param_1,byte param_2)
void FUN_180277a20(int64_t param_1,byte param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint uVar9;
  
  uVar9 = 1 << (param_2 & 0x1f);
  puVar6 = *(uint64_t **)(param_1 + 0x38);
  puVar4 = *(uint64_t **)(param_1 + 0x40);
  if (puVar6 != puVar4) {
    puVar7 = puVar6 + 2;
    do {
      uVar1 = *(uint *)(puVar6 + 1);
      if (uVar1 == uVar9) {
        if ((puVar7 < puVar4) &&
           (lVar8 = (int64_t)puVar4 - (int64_t)puVar7 >> 4, puVar5 = puVar7, 0 < lVar8)) {
          do {
            uVar2 = *puVar5;
            *puVar5 = 0;
            plVar3 = (int64_t *)puVar5[-2];
            puVar5[-2] = uVar2;
            if (plVar3 != (int64_t *)0x0) {
              (**(code **)(*plVar3 + 0x38))();
            }
            *(int32_t *)(puVar5 + -1) = *(int32_t *)(puVar5 + 1);
            lVar8 = lVar8 + -1;
            puVar5 = puVar5 + 2;
          } while (0 < lVar8);
          puVar4 = *(uint64_t **)(param_1 + 0x40);
        }
        *(uint64_t **)(param_1 + 0x40) = puVar4 + -2;
        plVar3 = (int64_t *)puVar4[-2];
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
      }
      else {
        if ((uVar9 & uVar1) != 0) {
          *(uint *)(puVar6 + 1) = ~uVar9 & uVar1;
        }
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
      }
      puVar4 = *(uint64_t **)(param_1 + 0x40);
    } while (puVar6 != puVar4);
  }
  FUN_180278270(param_1);
  lVar8 = *(int64_t *)(param_1 + 0x28);
  if ((lVar8 != 0) &&
     (*(short *)(lVar8 + 0x2b0) = *(short *)(lVar8 + 0x2b0) + 1, *(int64_t *)(lVar8 + 0x168) != 0))
  {
    func_0x0001802eeba0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277b50(int64_t param_1,uint param_2)
void FUN_180277b50(int64_t param_1,uint param_2)

{
  int32_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint uVar5;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  uint uVar6;
  int64_t *plVar7;
  
  plVar7 = (int64_t *)0x0;
  uVar5 = 0;
  plVar10 = *(int64_t **)(param_1 + 0x38);
  plVar8 = (int64_t *)0x0;
  plVar3 = (int64_t *)0x0;
  plVar9 = plVar3;
  plVar11 = plVar8;
  plVar12 = plVar7;
  plVar4 = plVar7;
  if (*(int64_t *)(param_1 + 0x40) - (int64_t)plVar10 >> 4 != 0) {
    do {
      plVar3 = plVar9;
      plVar8 = plVar11;
      uVar6 = (uint)plVar7;
      if ((*(uint *)((int64_t)(plVar10 + 1) + (int64_t)plVar12) >> (param_2 & 0x1f) & 1) != 0) {
        if (plVar11 < plVar4) {
          plVar8 = plVar11 + 2;
          plVar9 = *(int64_t **)((int64_t)plVar10 + (int64_t)plVar12);
          *plVar11 = (int64_t)plVar9;
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x28))();
            uVar6 = uVar5;
          }
          *(int32_t *)(plVar11 + 1) =
               *(int32_t *)((int64_t)(plVar10 + 1) + (int64_t)plVar12);
        }
        else {
          lVar2 = (int64_t)plVar11 - (int64_t)plVar9 >> 4;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_180277c31:
            plVar3 = (int64_t *)
                     CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 << 4,
                                   CONCAT71((uint7)(uint3)(param_2 >> 8),0x16));
          }
          else {
            lVar2 = lVar2 * 2;
            plVar3 = (int64_t *)0x0;
            if (lVar2 != 0) goto LAB_180277c31;
          }
          plVar8 = plVar3;
          if (plVar9 != plVar11) {
            plVar4 = plVar9;
            do {
              *plVar8 = *plVar4;
              *plVar4 = 0;
              puVar1 = (int32_t *)((int64_t)plVar3 + (8 - (int64_t)plVar9) + (int64_t)plVar4);
              *puVar1 = *(int32_t *)((int64_t)puVar1 + ((int64_t)plVar9 - (int64_t)plVar3));
              plVar4 = plVar4 + 2;
              plVar8 = plVar8 + 2;
            } while (plVar4 != plVar11);
          }
          plVar4 = *(int64_t **)((int64_t)plVar10 + (int64_t)plVar12);
          *plVar8 = (int64_t)plVar4;
          if (plVar4 != (int64_t *)0x0) {
            (**(code **)(*plVar4 + 0x28))();
          }
          *(int32_t *)(plVar8 + 1) = *(int32_t *)((int64_t)(plVar10 + 1) + (int64_t)plVar12)
          ;
          plVar8 = plVar8 + 2;
          for (plVar10 = plVar9; plVar10 != plVar11; plVar10 = plVar10 + 2) {
            if ((int64_t *)*plVar10 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar10 + 0x38))();
            }
          }
          if (plVar9 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(plVar9);
          }
          plVar4 = plVar3 + lVar2 * 2;
          uVar6 = uVar5;
        }
      }
      uVar5 = uVar6 + 1;
      plVar7 = (int64_t *)(uint64_t)uVar5;
      plVar10 = *(int64_t **)(param_1 + 0x38);
      plVar9 = plVar3;
      plVar11 = plVar8;
      plVar12 = plVar12 + 2;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(param_1 + 0x40) - (int64_t)plVar10 >> 4));
  }
  *(int64_t **)(param_1 + 0x38) = plVar3;
  plVar3 = *(int64_t **)(param_1 + 0x40);
  *(int64_t **)(param_1 + 0x40) = plVar8;
  *(int64_t **)(param_1 + 0x48) = plVar4;
  *(int32_t *)(param_1 + 0x50) = 0x16;
  FUN_180278270(param_1);
  lVar2 = *(int64_t *)(param_1 + 0x28);
  plVar8 = plVar10;
  if ((lVar2 != 0) &&
     (*(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1, *(int64_t *)(lVar2 + 0x168) != 0))
  {
    func_0x0001802eeba0();
  }
  for (; plVar8 != plVar3; plVar8 = plVar8 + 2) {
    if ((int64_t *)*plVar8 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar8 + 0x38))();
    }
  }
  if (plVar10 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277e30(int64_t param_1,uint64_t *param_2,uint param_3)
void FUN_180277e30(int64_t param_1,uint64_t *param_2,uint param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar5 = *(uint64_t **)(param_1 + 0x38);
  if (puVar5 < *(uint64_t **)(param_1 + 0x40)) {
    do {
      if ((*(uint *)(puVar5 + 1) & param_3) != 0) {
        puVar6 = (uint64_t *)param_2[1];
        uVar1 = *puVar5;
        if (puVar6 < (uint64_t *)param_2[2]) {
          param_2[1] = (uint64_t)(puVar6 + 1);
          *puVar6 = uVar1;
        }
        else {
          puVar4 = (uint64_t *)*param_2;
          lVar2 = (int64_t)puVar6 - (int64_t)puVar4 >> 3;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_180277eb2:
            puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,(char)param_2[3]);
            puVar4 = (uint64_t *)*param_2;
            puVar6 = (uint64_t *)param_2[1];
          }
          else {
            lVar2 = lVar2 * 2;
            if (lVar2 != 0) goto LAB_180277eb2;
            puVar3 = (uint64_t *)0x0;
          }
          if (puVar4 != puVar6) {
                    // WARNING: Subroutine does not return
            memmove(puVar3,puVar4,(int64_t)puVar6 - (int64_t)puVar4);
          }
          *puVar3 = uVar1;
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *param_2 = (uint64_t)puVar3;
          param_2[2] = (uint64_t)(puVar3 + lVar2);
          param_2[1] = (uint64_t)(puVar3 + 1);
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 < *(uint64_t **)(param_1 + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277e52(void)
void FUN_180277e52(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *unaff_RBX;
  uint64_t *unaff_RSI;
  uint64_t *puVar5;
  uint unaff_R12D;
  int64_t unaff_R13;
  
  do {
    if ((*(uint *)(unaff_RSI + 1) & unaff_R12D) != 0) {
      puVar5 = (uint64_t *)unaff_RBX[1];
      uVar1 = *unaff_RSI;
      if (puVar5 < (uint64_t *)unaff_RBX[2]) {
        unaff_RBX[1] = (uint64_t)(puVar5 + 1);
        *puVar5 = uVar1;
      }
      else {
        puVar4 = (uint64_t *)*unaff_RBX;
        lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_180277eb2:
          puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,(char)unaff_RBX[3]);
          puVar4 = (uint64_t *)*unaff_RBX;
          puVar5 = (uint64_t *)unaff_RBX[1];
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_180277eb2;
          puVar3 = (uint64_t *)0x0;
        }
        if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar3,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
        }
        *puVar3 = uVar1;
        if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *unaff_RBX = (uint64_t)puVar3;
        unaff_RBX[2] = (uint64_t)(puVar3 + lVar2);
        unaff_RBX[1] = (uint64_t)(puVar3 + 1);
      }
    }
    unaff_RSI = unaff_RSI + 2;
    if (*(uint64_t **)(unaff_R13 + 0x40) <= unaff_RSI) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180277f3a(void)
void FUN_180277f3a(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277f50(int64_t param_1,uint64_t *param_2,uint64_t *param_3,float *param_4)
void FUN_180277f50(int64_t param_1,uint64_t *param_2,uint64_t *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int64_t lVar15;
  int64_t *plVar16;
  float *pfVar17;
  int64_t *plVar18;
  float *pfVar19;
  int64_t *plVar20;
  float *pfVar21;
  int64_t lVar22;
  int64_t *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  plVar23 = *(int64_t **)(param_1 + 0x38);
  if (plVar23 < *(int64_t **)(param_1 + 0x40)) {
    do {
      if (((uint)param_4[0x10] & *(uint *)(plVar23 + 1)) != 0) {
        plVar20 = (int64_t *)param_2[1];
        lVar22 = *plVar23;
        if (plVar20 < (int64_t *)param_2[2]) {
          param_2[1] = (uint64_t)(plVar20 + 1);
          *plVar20 = lVar22;
        }
        else {
          plVar18 = (int64_t *)*param_2;
          lVar15 = (int64_t)plVar20 - (int64_t)plVar18 >> 3;
          if (lVar15 == 0) {
            lVar15 = 1;
LAB_180277fef:
            plVar16 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar15 * 8,(char)param_2[3]);
            plVar18 = (int64_t *)*param_2;
            plVar20 = (int64_t *)param_2[1];
          }
          else {
            lVar15 = lVar15 * 2;
            if (lVar15 != 0) goto LAB_180277fef;
            plVar16 = (int64_t *)0x0;
          }
          if (plVar18 != plVar20) {
                    // WARNING: Subroutine does not return
            memmove(plVar16,plVar18,(int64_t)plVar20 - (int64_t)plVar18);
          }
          *plVar16 = lVar22;
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          param_2[2] = (uint64_t)(plVar16 + lVar15);
          *param_2 = (uint64_t)plVar16;
          param_2[1] = (uint64_t)(plVar16 + 1);
        }
        fVar3 = *param_4;
        fVar4 = param_4[1];
        fVar5 = param_4[2];
        fVar6 = param_4[3];
        pfVar21 = (float *)param_3[1];
        fVar7 = param_4[4];
        fVar8 = param_4[5];
        fVar9 = param_4[6];
        fVar10 = param_4[7];
        fVar11 = param_4[8];
        fVar12 = param_4[9];
        fVar13 = param_4[10];
        fVar14 = param_4[0xb];
        fVar27 = *(float *)(lVar22 + 0x124);
        fVar24 = *(float *)(lVar22 + 0x120);
        fVar1 = *(float *)(lVar22 + 0x128);
        fVar25 = *(float *)(lVar22 + 0x130);
        fVar26 = *(float *)(lVar22 + 0x140);
        fVar2 = *(float *)(lVar22 + 0x150);
        fVar35 = *(float *)(lVar22 + 0x134);
        fVar28 = fVar27 * fVar7 + fVar24 * fVar3 + fVar1 * fVar11;
        fVar29 = fVar27 * fVar8 + fVar24 * fVar4 + fVar1 * fVar12;
        fVar30 = fVar27 * fVar9 + fVar24 * fVar5 + fVar1 * fVar13;
        fVar31 = fVar27 * fVar10 + fVar24 * fVar6 + fVar1 * fVar14;
        fVar27 = *(float *)(lVar22 + 0x138);
        fVar24 = *(float *)(lVar22 + 0x144);
        fVar32 = fVar25 * fVar3 + fVar35 * fVar7 + fVar27 * fVar11;
        fVar33 = fVar25 * fVar4 + fVar35 * fVar8 + fVar27 * fVar12;
        fVar34 = fVar25 * fVar5 + fVar35 * fVar9 + fVar27 * fVar13;
        fVar35 = fVar25 * fVar6 + fVar35 * fVar10 + fVar27 * fVar14;
        fVar27 = *(float *)(lVar22 + 0x148);
        fVar1 = *(float *)(lVar22 + 0x154);
        fVar36 = fVar26 * fVar3 + fVar24 * fVar7 + fVar27 * fVar11;
        fVar37 = fVar26 * fVar4 + fVar24 * fVar8 + fVar27 * fVar12;
        fVar38 = fVar26 * fVar5 + fVar24 * fVar9 + fVar27 * fVar13;
        fVar39 = fVar26 * fVar6 + fVar24 * fVar10 + fVar27 * fVar14;
        fVar27 = *(float *)(lVar22 + 0x158);
        fVar24 = fVar2 * fVar3 + fVar1 * fVar7 + fVar27 * fVar11 + param_4[0xc];
        fVar25 = fVar2 * fVar4 + fVar1 * fVar8 + fVar27 * fVar12 + param_4[0xd];
        fVar26 = fVar2 * fVar5 + fVar1 * fVar9 + fVar27 * fVar13 + param_4[0xe];
        fVar27 = fVar2 * fVar6 + fVar1 * fVar10 + fVar27 * fVar14 + param_4[0xf];
        if (pfVar21 < (float *)param_3[2]) {
          param_3[1] = (uint64_t)(pfVar21 + 0x10);
          *pfVar21 = fVar28;
          pfVar21[1] = fVar29;
          pfVar21[2] = fVar30;
          pfVar21[3] = fVar31;
          pfVar21[4] = fVar32;
          pfVar21[5] = fVar33;
          pfVar21[6] = fVar34;
          pfVar21[7] = fVar35;
          pfVar21[8] = fVar36;
          pfVar21[9] = fVar37;
          pfVar21[10] = fVar38;
          pfVar21[0xb] = fVar39;
          pfVar21[0xc] = fVar24;
          pfVar21[0xd] = fVar25;
          pfVar21[0xe] = fVar26;
          pfVar21[0xf] = fVar27;
        }
        else {
          pfVar19 = (float *)*param_3;
          lVar22 = (int64_t)pfVar21 - (int64_t)pfVar19 >> 6;
          if (lVar22 == 0) {
            lVar22 = 1;
LAB_1802781a7:
            pfVar17 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar22 << 6,(char)param_3[3]);
            pfVar19 = (float *)*param_3;
            pfVar21 = (float *)param_3[1];
          }
          else {
            lVar22 = lVar22 * 2;
            if (lVar22 != 0) goto LAB_1802781a7;
            pfVar17 = (float *)0x0;
          }
          if (pfVar19 != pfVar21) {
                    // WARNING: Subroutine does not return
            memmove(pfVar17,pfVar19,(int64_t)pfVar21 - (int64_t)pfVar19);
          }
          *pfVar17 = fVar28;
          pfVar17[1] = fVar29;
          pfVar17[2] = fVar30;
          pfVar17[3] = fVar31;
          pfVar17[4] = fVar32;
          pfVar17[5] = fVar33;
          pfVar17[6] = fVar34;
          pfVar17[7] = fVar35;
          pfVar17[8] = fVar36;
          pfVar17[9] = fVar37;
          pfVar17[10] = fVar38;
          pfVar17[0xb] = fVar39;
          pfVar17[0xc] = fVar24;
          pfVar17[0xd] = fVar25;
          pfVar17[0xe] = fVar26;
          pfVar17[0xf] = fVar27;
          if (*param_3 != 0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          *param_3 = (uint64_t)pfVar17;
          param_3[2] = (uint64_t)(pfVar17 + lVar22 * 0x10);
          param_3[1] = (uint64_t)(pfVar17 + 0x10);
        }
      }
      plVar23 = plVar23 + 2;
    } while (plVar23 < *(int64_t **)(param_1 + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180277f79(void)
void FUN_180277f79(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int64_t in_RAX;
  int64_t lVar15;
  int64_t *plVar16;
  float *pfVar17;
  int64_t *plVar18;
  float *pfVar19;
  uint64_t unaff_RBX;
  int64_t *plVar20;
  float *pfVar21;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar22;
  uint64_t *unaff_RDI;
  float *in_R9;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  uint64_t *unaff_R14;
  int64_t *unaff_R15;
  int32_t unaff_XMM6_Da;
  float fVar23;
  int32_t unaff_XMM6_Db;
  float fVar24;
  int32_t unaff_XMM6_Dc;
  float fVar25;
  int32_t unaff_XMM6_Dd;
  float fVar26;
  int32_t unaff_XMM7_Da;
  float fVar27;
  int32_t unaff_XMM7_Db;
  float fVar28;
  int32_t unaff_XMM7_Dc;
  float fVar29;
  int32_t unaff_XMM7_Dd;
  float fVar30;
  int32_t unaff_XMM8_Da;
  float fVar31;
  int32_t unaff_XMM8_Db;
  float fVar32;
  int32_t unaff_XMM8_Dc;
  float fVar33;
  int32_t unaff_XMM8_Dd;
  float fVar34;
  int32_t unaff_XMM9_Da;
  float fVar35;
  int32_t unaff_XMM9_Db;
  float fVar36;
  int32_t unaff_XMM9_Dc;
  float fVar37;
  int32_t unaff_XMM9_Dd;
  float fVar38;
  float *in_stack_000000a8;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM9_Dd;
  do {
    if (((uint)in_R9[0x10] & *(uint *)(unaff_R15 + 1)) != 0) {
      plVar20 = (int64_t *)unaff_RDI[1];
      lVar22 = *unaff_R15;
      if (plVar20 < (int64_t *)unaff_RDI[2]) {
        unaff_RDI[1] = (uint64_t)(plVar20 + 1);
        *plVar20 = lVar22;
      }
      else {
        plVar18 = (int64_t *)*unaff_RDI;
        lVar15 = (int64_t)plVar20 - (int64_t)plVar18 >> 3;
        if (lVar15 == 0) {
          lVar15 = 1;
LAB_180277fef:
          plVar16 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar15 * 8,(char)unaff_RDI[3]);
          plVar18 = (int64_t *)*unaff_RDI;
          plVar20 = (int64_t *)unaff_RDI[1];
        }
        else {
          lVar15 = lVar15 * 2;
          if (lVar15 != 0) goto LAB_180277fef;
          plVar16 = (int64_t *)0x0;
        }
        if (plVar18 != plVar20) {
                    // WARNING: Subroutine does not return
          memmove(plVar16,plVar18,(int64_t)plVar20 - (int64_t)plVar18);
        }
        *plVar16 = lVar22;
        if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        unaff_RDI[2] = (uint64_t)(plVar16 + lVar15);
        *unaff_RDI = (uint64_t)plVar16;
        unaff_RDI[1] = (uint64_t)(plVar16 + 1);
        in_R9 = in_stack_000000a8;
      }
      fVar3 = *in_R9;
      fVar4 = in_R9[1];
      fVar5 = in_R9[2];
      fVar6 = in_R9[3];
      pfVar21 = (float *)unaff_R14[1];
      fVar7 = in_R9[4];
      fVar8 = in_R9[5];
      fVar9 = in_R9[6];
      fVar10 = in_R9[7];
      fVar11 = in_R9[8];
      fVar12 = in_R9[9];
      fVar13 = in_R9[10];
      fVar14 = in_R9[0xb];
      fVar26 = *(float *)(lVar22 + 0x124);
      fVar23 = *(float *)(lVar22 + 0x120);
      fVar1 = *(float *)(lVar22 + 0x128);
      fVar24 = *(float *)(lVar22 + 0x130);
      fVar25 = *(float *)(lVar22 + 0x140);
      fVar2 = *(float *)(lVar22 + 0x150);
      fVar34 = *(float *)(lVar22 + 0x134);
      fVar27 = fVar26 * fVar7 + fVar23 * fVar3 + fVar1 * fVar11;
      fVar28 = fVar26 * fVar8 + fVar23 * fVar4 + fVar1 * fVar12;
      fVar29 = fVar26 * fVar9 + fVar23 * fVar5 + fVar1 * fVar13;
      fVar30 = fVar26 * fVar10 + fVar23 * fVar6 + fVar1 * fVar14;
      fVar26 = *(float *)(lVar22 + 0x138);
      fVar23 = *(float *)(lVar22 + 0x144);
      fVar31 = fVar24 * fVar3 + fVar34 * fVar7 + fVar26 * fVar11;
      fVar32 = fVar24 * fVar4 + fVar34 * fVar8 + fVar26 * fVar12;
      fVar33 = fVar24 * fVar5 + fVar34 * fVar9 + fVar26 * fVar13;
      fVar34 = fVar24 * fVar6 + fVar34 * fVar10 + fVar26 * fVar14;
      fVar26 = *(float *)(lVar22 + 0x148);
      fVar1 = *(float *)(lVar22 + 0x154);
      fVar35 = fVar25 * fVar3 + fVar23 * fVar7 + fVar26 * fVar11;
      fVar36 = fVar25 * fVar4 + fVar23 * fVar8 + fVar26 * fVar12;
      fVar37 = fVar25 * fVar5 + fVar23 * fVar9 + fVar26 * fVar13;
      fVar38 = fVar25 * fVar6 + fVar23 * fVar10 + fVar26 * fVar14;
      fVar26 = *(float *)(lVar22 + 0x158);
      fVar23 = fVar2 * fVar3 + fVar1 * fVar7 + fVar26 * fVar11 + in_R9[0xc];
      fVar24 = fVar2 * fVar4 + fVar1 * fVar8 + fVar26 * fVar12 + in_R9[0xd];
      fVar25 = fVar2 * fVar5 + fVar1 * fVar9 + fVar26 * fVar13 + in_R9[0xe];
      fVar26 = fVar2 * fVar6 + fVar1 * fVar10 + fVar26 * fVar14 + in_R9[0xf];
      if (pfVar21 < (float *)unaff_R14[2]) {
        unaff_R14[1] = (uint64_t)(pfVar21 + 0x10);
        *pfVar21 = fVar27;
        pfVar21[1] = fVar28;
        pfVar21[2] = fVar29;
        pfVar21[3] = fVar30;
        pfVar21[4] = fVar31;
        pfVar21[5] = fVar32;
        pfVar21[6] = fVar33;
        pfVar21[7] = fVar34;
        pfVar21[8] = fVar35;
        pfVar21[9] = fVar36;
        pfVar21[10] = fVar37;
        pfVar21[0xb] = fVar38;
        pfVar21[0xc] = fVar23;
        pfVar21[0xd] = fVar24;
        pfVar21[0xe] = fVar25;
        pfVar21[0xf] = fVar26;
      }
      else {
        pfVar19 = (float *)*unaff_R14;
        lVar22 = (int64_t)pfVar21 - (int64_t)pfVar19 >> 6;
        if (lVar22 == 0) {
          lVar22 = 1;
LAB_1802781a7:
          pfVar17 = (float *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar22 << 6,(char)unaff_R14[3]);
          pfVar19 = (float *)*unaff_R14;
          pfVar21 = (float *)unaff_R14[1];
        }
        else {
          lVar22 = lVar22 * 2;
          if (lVar22 != 0) goto LAB_1802781a7;
          pfVar17 = (float *)0x0;
        }
        if (pfVar19 != pfVar21) {
                    // WARNING: Subroutine does not return
          memmove(pfVar17,pfVar19,(int64_t)pfVar21 - (int64_t)pfVar19);
        }
        *pfVar17 = fVar27;
        pfVar17[1] = fVar28;
        pfVar17[2] = fVar29;
        pfVar17[3] = fVar30;
        pfVar17[4] = fVar31;
        pfVar17[5] = fVar32;
        pfVar17[6] = fVar33;
        pfVar17[7] = fVar34;
        pfVar17[8] = fVar35;
        pfVar17[9] = fVar36;
        pfVar17[10] = fVar37;
        pfVar17[0xb] = fVar38;
        pfVar17[0xc] = fVar23;
        pfVar17[0xd] = fVar24;
        pfVar17[0xe] = fVar25;
        pfVar17[0xf] = fVar26;
        if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *unaff_R14 = (uint64_t)pfVar17;
        unaff_R14[2] = (uint64_t)(pfVar17 + lVar22 * 0x10);
        unaff_R14[1] = (uint64_t)(pfVar17 + 0x10);
        in_R9 = in_stack_000000a8;
      }
    }
    unaff_R15 = unaff_R15 + 2;
    if (*(int64_t **)(unaff_R13 + 0x40) <= unaff_R15) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180278261(void)
void FUN_180278261(void)

{
  return;
}





