#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part554.c - 7 个函数

// 函数: void FUN_180573020(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void FUN_180573020(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5,int64_t param_6,uint64_t param_7,uint64_t param_8,
                  int64_t *param_9)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int8_t uVar13;
  
  lVar8 = param_6;
  if (*(int64_t *)(param_1 + 0xabf0) == 0) {
    uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x1150,8,3);
    uVar13 = *(int8_t *)(param_1 + 0xde);
    uVar7 = FUN_1805edc80(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar13);
    *(uint64_t *)(param_1 + 0xabf0) = uVar7;
  }
  else {
    uVar13 = *(int8_t *)(param_1 + 0xde);
    FUN_1805eebb0();
  }
  if (*(char *)(param_6 + 0x192) != '\0') {
    lVar2 = param_9[1];
    lVar3 = *param_9;
    lVar12 = lVar2 - lVar3;
    uVar11 = lVar12 >> 3;
    if (uVar11 != 0) {
      lVar4 = *(int64_t *)(param_1 + 0xabf0);
      plVar10 = (int64_t *)(lVar4 + 8);
      if (plVar10 != param_9) {
        lVar5 = *plVar10;
        if ((uint64_t)(*(int64_t *)(lVar4 + 0x18) - lVar5 >> 3) < uVar11) {
          if (uVar11 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = FUN_18062b420(system_memory_pool_ptr,uVar11 * 8,*(int8_t *)(lVar4 + 0x20));
          }
          if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
            memmove(lVar8,lVar3,lVar12);
          }
          if (*plVar10 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lVar2 = lVar8 + uVar11 * 8;
          *plVar10 = lVar8;
          *(int64_t *)(lVar4 + 0x10) = lVar2;
          *(int64_t *)(lVar4 + 0x18) = lVar2;
        }
        else {
          lVar6 = *(int64_t *)(lVar4 + 0x10);
          uVar9 = lVar6 - lVar5 >> 3;
          if (uVar9 < uVar11) {
            lVar1 = uVar9 * 8;
            lVar12 = lVar1 + lVar3;
            if (lVar3 != lVar12) {
                    // WARNING: Subroutine does not return
              memmove(lVar5,lVar3,lVar1,lVar6,param_5,lVar8,param_7,param_8,uVar13);
            }
            if (lVar12 != lVar2) {
                    // WARNING: Subroutine does not return
              memmove(lVar6,lVar12,lVar2 - lVar12,lVar6,param_5,lVar8,param_7,param_8,uVar13);
            }
            *(int64_t *)(lVar4 + 0x10) = lVar6;
          }
          else {
            if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
              memmove(lVar5,lVar3,lVar12,lVar6,param_5,lVar8,param_7,param_8,uVar13);
            }
            *(int64_t *)(lVar4 + 0x10) = lVar5;
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180573118(int64_t *param_1)
void FUN_180573118(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t unaff_RBX;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t lVar9;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  lVar9 = lVar1 - lVar2;
  uVar8 = lVar9 >> 3;
  if (uVar8 != 0) {
    lVar3 = *(int64_t *)(unaff_RBX + 0xabf0);
    plVar7 = (int64_t *)(lVar3 + 8);
    if (plVar7 != param_1) {
      lVar5 = *plVar7;
      if ((uint64_t)(*(int64_t *)(lVar3 + 0x18) - lVar5 >> 3) < uVar8) {
        if (uVar8 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_18062b420(system_memory_pool_ptr,uVar8 * 8,*(int8_t *)(lVar3 + 0x20));
        }
        if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
          memmove(lVar5,lVar2,lVar9);
        }
        if (*plVar7 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lVar1 = lVar5 + uVar8 * 8;
        *plVar7 = lVar5;
        *(int64_t *)(lVar3 + 0x10) = lVar1;
        *(int64_t *)(lVar3 + 0x18) = lVar1;
      }
      else {
        lVar4 = *(int64_t *)(lVar3 + 0x10);
        uVar6 = lVar4 - lVar5 >> 3;
        if (uVar6 < uVar8) {
          lVar9 = uVar6 * 8 + lVar2;
          if (lVar2 != lVar9) {
                    // WARNING: Subroutine does not return
            memmove(lVar5,lVar2);
          }
          if (lVar9 != lVar1) {
                    // WARNING: Subroutine does not return
            memmove(lVar4,lVar9,lVar1 - lVar9);
          }
          *(int64_t *)(lVar3 + 0x10) = lVar4;
        }
        else {
          if (lVar2 != lVar1) {
                    // WARNING: Subroutine does not return
            memmove(lVar5,lVar2,lVar9);
          }
          *(int64_t *)(lVar3 + 0x10) = lVar5;
        }
      }
    }
  }
  return;
}





// 函数: void FUN_180573229(void)
void FUN_180573229(void)

{
  return;
}





// 函数: void FUN_180573240(int64_t param_1)
void FUN_180573240(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0xabf0);
  if (plVar1 == (int64_t *)0x0) {
    *(uint64_t *)(param_1 + 0xabf0) = 0;
    return;
  }
  lVar2 = __RTCastToVoid(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1,0);
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  *(uint64_t *)(param_1 + 0xabf0) = 0;
  return;
}





// 函数: void FUN_18057325c(void)
void FUN_18057325c(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t *unaff_RDI;
  
  lVar1 = __RTCastToVoid();
  (**(code **)(*unaff_RDI + 0x20))();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  *(uint64_t *)(unaff_RBX + 0xabf0) = 0;
  return;
}





// 函数: void FUN_18057329d(int64_t param_1)
void FUN_18057329d(int64_t param_1)

{
  *(uint64_t *)(param_1 + 0xabf0) = 0;
  return;
}





// 函数: void FUN_1805732c0(int64_t *param_1,float param_2,uint64_t param_3)
void FUN_1805732c0(int64_t *param_1,float param_2,uint64_t param_3)

{
  float fVar1;
  float fVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int8_t uVar7;
  int32_t uVar8;
  float fVar9;
  int64_t *plStackX_8;
  int8_t uStackX_10;
  int8_t uStackX_11;
  
  fVar9 = 0.0;
  if ((param_1[0x4a0] != param_1[0x4a1]) &&
     (fVar1 = *(float *)(param_1 + 0x4b9), *(float *)(param_1 + 0x4b9) = fVar1 - param_2,
     fVar1 - param_2 <= 0.0)) {
    param_1[0x4a0] = param_1[0x4a1];
  }
  (**(code **)(*param_1 + 200))();
  plVar3 = param_1 + 0x1448;
  lVar4 = 5;
  plVar5 = plVar3;
  do {
    uVar8 = (**(code **)*plVar5)(plVar3,param_2,param_3);
    plVar3 = plVar3 + 0x3e;
    plVar5 = plVar5 + 0x3e;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = param_1[0x157e];
  if (lVar4 != 0) {
    if ((int)param_1[0x48a] == -1) {
      lVar6 = param_1[0x12b0];
      if (lVar6 == 0) {
        plVar3 = (int64_t *)FUN_1800b3670(uVar8,&plStackX_8,3);
        lVar6 = *plVar3;
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
      }
      FUN_1805ef510(lVar4,2,lVar6);
    }
    if ((int)param_1[0x493] == -1) {
      lVar4 = param_1[0x157e];
      plStackX_8 = *(int64_t **)(lVar4 + 0x1128);
      *(uint64_t *)(lVar4 + 0x1128) = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(int8_t *)(lVar4 + 0x1139) = 1;
    }
    (*(code *)**(uint64_t **)param_1[0x157e])((uint64_t *)param_1[0x157e],param_2,param_3);
  }
  if ((-1 < (char)param_1[0xb]) && (fVar1 = *(float *)(param_1 + 0xe), 0.001 < fVar1)) {
    fVar9 = *(float *)((int64_t)param_1 + 100);
    fVar2 = *(float *)((int64_t)param_1 + 0x6c);
    fVar9 = (float)atan2f((fVar2 * *(float *)(param_1 + 0xc) - fVar9 * *(float *)(param_1 + 0xd)) +
                          (fVar2 * *(float *)(param_1 + 0xc) - fVar9 * *(float *)(param_1 + 0xd)),
                          1.0 - ((fVar2 + fVar2) * fVar2 + (fVar9 + fVar9) * fVar9));
    fVar9 = fVar9 * fVar1 * 0.7;
  }
  if ((param_1[0x4a0] == 0) || (param_1[0x4a1] == 0)) {
    param_1[0x68d] = param_1[0x12];
    param_1[0x68e] = param_1[0x4b6];
    *(float *)(param_1 + 0x690) = fVar9;
    *(int *)(param_1 + 0x68f) = (int)param_1[0x4b7];
    *(int32_t *)((int64_t)param_1 + 0x347c) = *(int32_t *)((int64_t)param_1 + 0x25bc);
    uStackX_10 = *(int8_t *)((int64_t)param_1 + 0x2605);
    uStackX_11 = *(int8_t *)((int64_t)param_1 + 0x2606);
    if (param_1[0x4a3] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(int8_t *)(param_1[0x4a3] + 0x134);
    }
    FUN_1806596a0(param_1 + 0x68c,param_2,param_3,uVar7,(char)param_1[0x17],
                  *(int8_t *)((int64_t)param_1 + 0xb9));
  }
  (**(code **)param_1[0x1e])(param_1 + 0x1e,param_2,param_3);
                    // WARNING: Could not recover jumptable at 0x0001805735b5. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)param_1[0x254])(param_1 + 0x254,param_2,param_3);
  return;
}



// WARNING: Removing unreachable block (ram,0x000180573954)
// WARNING: Removing unreachable block (ram,0x00018057397d)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



