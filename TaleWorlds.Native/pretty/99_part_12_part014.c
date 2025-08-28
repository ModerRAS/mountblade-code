#include "TaleWorlds.Native.Split.h"

// 99_part_12_part014.c - 7 个函数

// 函数: void FUN_1807d36d0(longlong param_1)
void FUN_1807d36d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int8_t auStack_338 [32];
  int8_t uStack_318;
  int8_t auStack_308 [2];
  int8_t auStack_306 [6];
  uint64_t auStack_300 [2];
  uint64_t uStack_2f0;
  longlong *plStack_2e8;
  uint64_t uStack_2e0;
  int aiStack_2d8 [2];
  longlong *aplStack_2d0 [5];
  longlong lStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  int8_t auStack_168 [256];
  ulonglong uStack_68;
  
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_338;
  lStack_2a8 = param_1;
  if (*(longlong *)(param_1 + 0x58) != 0) goto FUN_1807d3dfa;
  plStack_2e8 = (longlong *)(param_1 + 0x60);
  uStack_2e0 = 0xffffffffffffffff;
  aiStack_2d8[0] = -1;
  FUN_1807d2ff0(plStack_2e8,&uStack_2e0,aiStack_2d8);
  if (aiStack_2d8[0] != -1) {
    iVar5 = aiStack_2d8[0];
    iVar11 = uStack_2e0._4_4_;
    iVar9 = (int)uStack_2e0;
    do {
      if (iVar5 == -1) goto FUN_1807d3dfa;
      lVar7 = plStack_2e8[2];
      iVar10 = *(int *)(lVar7 + 8 + (longlong)iVar5 * 0x10);
      iVar8 = iVar9;
      if (iVar10 == -1) {
        iVar8 = 0;
        if (iVar9 != -1) {
          iVar8 = iVar9 + 1;
        }
        if (iVar8 != (int)plStack_2e8[1]) {
          lVar6 = (longlong)iVar8;
          do {
            if (*(int *)(*plStack_2e8 + lVar6 * 4) != -1) {
              iVar10 = *(int *)(*plStack_2e8 + (longlong)iVar8 * 4);
              goto LAB_1807d37f6;
            }
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != (int)plStack_2e8[1]);
        }
        iVar8 = -1;
        iVar10 = -1;
      }
LAB_1807d37f6:
      if (iVar11 == -1) {
        piVar12 = (int *)(*plStack_2e8 + (longlong)iVar9 * 4);
      }
      else {
        piVar12 = (int *)(lVar7 + 8 + (longlong)iVar11 * 0x10);
      }
      iVar2 = *piVar12;
      lVar6 = (longlong)iVar2;
      if (iVar2 != iVar5) goto FUN_1807d3dfa;
      *(int8_t *)(lVar7 + 0xc + lVar6 * 0x10) = 0;
      *piVar12 = *(int *)(lVar7 + 8 + lVar6 * 0x10);
      *(int *)(lVar7 + 8 + lVar6 * 0x10) = (int)plStack_2e8[4];
      *(int *)((longlong)plStack_2e8 + 0x24) = *(int *)((longlong)plStack_2e8 + 0x24) + -1;
      *(int *)(plStack_2e8 + 4) = iVar2;
      if (iVar9 != iVar8) {
        iVar11 = -1;
      }
      iVar5 = iVar10;
      iVar9 = iVar8;
    } while (iVar10 != -1);
  }
  plVar1 = (longlong *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0x94);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x90) < 1) {
      if ((0 < (int)uVar3) && (*plVar1 != 0)) {
        uStack_318 = 1;
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*plVar1,&unknown_var_8432_ptr,0x100);
      }
      *plVar1 = 0;
      *(int32_t *)(param_1 + 0x94) = 0;
      goto LAB_1807d38b9;
    }
  }
  else {
LAB_1807d38b9:
    *(int32_t *)(param_1 + 0x90) = 0;
  }
  *(int32_t *)(param_1 + 0x48) = 0;
  aplStack_2d0[0] = (longlong *)0x0;
  iVar5 = func_0x0001807466b0(*(uint64_t *)(param_1 + 0x28),aplStack_2d0);
  if (iVar5 == 0) {
    uStack_2f0 = 0;
    iVar5 = (**(code **)(*aplStack_2d0[0] + 0x120))(aplStack_2d0[0],0xffffffff,&uStack_2f0);
    if (iVar5 == 0) {
      uStack_2a0 = uStack_2f0;
      uStack_298 = 0;
      iVar5 = FUN_1807d3e20(plVar1,&uStack_2a0);
      if (iVar5 == 0) {
        if (*(int *)(param_1 + 0x90) == 0) {
          puVar4 = *(uint64_t **)(param_1 + 0x38);
          *puVar4 = 0;
          puVar4[1] = 0;
          *(int32_t *)(puVar4 + 2) = 0;
          **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x48) * 0x5e + 0x14;
          *(int8_t *)(*(longlong *)(param_1 + 0x38) + 8) = 1;
          *(int8_t *)(*(longlong *)(param_1 + 0x38) + 10) = 6;
          *(int32_t *)(*(longlong *)(param_1 + 0x38) + 0xc) =
               *(int32_t *)(*(longlong *)(param_1 + 0x28) + 0x6d0);
          *(int32_t *)(*(longlong *)(param_1 + 0x38) + 0x10) =
               *(int32_t *)(*(longlong *)(param_1 + 0x28) + 0x6d8);
          *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)(param_1 + 0x38);
        }
        else {
          iVar11 = *(int *)(param_1 + 0x90);
          auStack_300[0] = *(uint64_t *)(*plVar1 + -0x10 + (longlong)iVar11 * 0x10);
          iVar5 = *(int *)(param_1 + 0x90) + -1;
          if ((-1 < iVar5) && (iVar5 < iVar11)) {
            iVar9 = (iVar11 - iVar5) + -1;
            if (0 < iVar9) {
              lVar7 = (longlong)iVar5 * 0x10 + *plVar1;
                    // WARNING: Subroutine does not return
              memmove(lVar7,lVar7 + 0x10,(longlong)iVar9 << 4);
            }
            auStack_308[0] = 0;
            *(int *)(param_1 + 0x90) = iVar11 + -1;
            auStack_306[0] = 1;
            iVar5 = FUN_1807d3460(param_1 + 0x60,auStack_300,auStack_306,auStack_308);
            if (iVar5 == 0) {
                    // WARNING: Subroutine does not return
              memset(auStack_168,0,0x100);
            }
          }
        }
      }
    }
  }
FUN_1807d3dfa:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_338);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d3709(longlong param_1)
void FUN_1807d3709(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint64_t *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong unaff_RBP;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  longlong unaff_R15;
  int8_t uStack0000000000000030;
  int8_t uStack0000000000000032;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000048;
  longlong *plStack0000000000000050;
  int iStack0000000000000058;
  int iStack000000000000005c;
  int iStack0000000000000060;
  longlong *in_stack_00000068;
  
  plVar10 = (longlong *)(param_1 + 0x60);
  _iStack0000000000000058 = 0xffffffffffffffff;
  iStack0000000000000060 = -1;
  plStack0000000000000050 = plVar10;
  FUN_1807d2ff0(plVar10,&stack0x00000058,&stack0x00000060);
  if (iStack0000000000000060 != -1) {
    iVar5 = iStack0000000000000060;
    iVar12 = iStack000000000000005c;
    iVar9 = iStack0000000000000058;
    do {
      if (iVar5 == -1) goto LAB_1807d3db1;
      lVar7 = plStack0000000000000050[2];
      iVar11 = *(int *)(lVar7 + 8 + (longlong)iVar5 * 0x10);
      iVar8 = iVar9;
      if (iVar11 == -1) {
        iVar8 = 0;
        if (iVar9 != -1) {
          iVar8 = iVar9 + 1;
        }
        if (iVar8 != (int)plStack0000000000000050[1]) {
          lVar6 = (longlong)iVar8;
          do {
            if (*(int *)(*plStack0000000000000050 + lVar6 * 4) != -1) {
              iVar11 = *(int *)(*plStack0000000000000050 + (longlong)iVar8 * 4);
              goto LAB_1807d37f6;
            }
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != (int)plStack0000000000000050[1]);
        }
        iVar8 = -1;
        iVar11 = -1;
      }
LAB_1807d37f6:
      if (iVar12 == -1) {
        piVar13 = (int *)(*plStack0000000000000050 + (longlong)iVar9 * 4);
      }
      else {
        piVar13 = (int *)(lVar7 + 8 + (longlong)iVar12 * 0x10);
      }
      iVar2 = *piVar13;
      lVar6 = (longlong)iVar2;
      if (iVar2 != iVar5) goto LAB_1807d3db1;
      *(int8_t *)(lVar7 + 0xc + lVar6 * 0x10) = 0;
      *piVar13 = *(int *)(lVar7 + 8 + lVar6 * 0x10);
      *(int *)(lVar7 + 8 + lVar6 * 0x10) = (int)plStack0000000000000050[4];
      *(int *)((longlong)plStack0000000000000050 + 0x24) =
           *(int *)((longlong)plStack0000000000000050 + 0x24) + -1;
      *(int *)(plStack0000000000000050 + 4) = iVar2;
      if (iVar9 != iVar8) {
        iVar12 = -1;
      }
      iVar5 = iVar11;
      iVar9 = iVar8;
    } while (iVar11 != -1);
    plVar10 = (longlong *)(unaff_R15 + 0x60);
  }
  plVar1 = (longlong *)(unaff_R15 + 0x88);
  uVar3 = *(uint *)(unaff_R15 + 0x94);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < *(int *)(unaff_R15 + 0x90)) goto LAB_1807d38bd;
    if ((0 < (int)uVar3) && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*plVar1,&unknown_var_8432_ptr,0x100,1);
    }
    *plVar1 = 0;
    *(int32_t *)(unaff_R15 + 0x94) = 0;
  }
  *(int32_t *)(unaff_R15 + 0x90) = 0;
LAB_1807d38bd:
  *(int32_t *)(unaff_R15 + 0x48) = 0;
  in_stack_00000068 = (longlong *)0x0;
  iVar5 = func_0x0001807466b0(*(uint64_t *)(unaff_R15 + 0x28),&stack0x00000068);
  if (iVar5 == 0) {
    in_stack_00000048 = 0;
    iVar5 = (**(code **)(*in_stack_00000068 + 0x120))(in_stack_00000068,0xffffffff,&stack0x00000048)
    ;
    if (iVar5 == 0) {
      *(uint64_t *)(unaff_RBP + -0x68) = in_stack_00000048;
      *(uint64_t *)(unaff_RBP + -0x60) = 0;
      iVar5 = FUN_1807d3e20(plVar1,unaff_RBP + -0x68);
      if (iVar5 == 0) {
        if (*(int *)(unaff_R15 + 0x90) == 0) {
          puVar4 = *(uint64_t **)(unaff_R15 + 0x38);
          *puVar4 = 0;
          puVar4[1] = 0;
          *(int32_t *)(puVar4 + 2) = 0;
          **(int **)(unaff_R15 + 0x38) = *(int *)(unaff_R15 + 0x48) * 0x5e + 0x14;
          *(int8_t *)(*(longlong *)(unaff_R15 + 0x38) + 8) = 1;
          *(int8_t *)(*(longlong *)(unaff_R15 + 0x38) + 10) = 6;
          *(int32_t *)(*(longlong *)(unaff_R15 + 0x38) + 0xc) =
               *(int32_t *)(*(longlong *)(unaff_R15 + 0x28) + 0x6d0);
          *(int32_t *)(*(longlong *)(unaff_R15 + 0x38) + 0x10) =
               *(int32_t *)(*(longlong *)(unaff_R15 + 0x28) + 0x6d8);
          *(uint64_t *)(unaff_R15 + 0x58) = *(uint64_t *)(unaff_R15 + 0x38);
        }
        else {
          iVar12 = *(int *)(unaff_R15 + 0x90);
          in_stack_00000038 = *(uint64_t *)(*plVar1 + -0x10 + (longlong)iVar12 * 0x10);
          iVar5 = *(int *)(unaff_R15 + 0x90) + -1;
          if ((-1 < iVar5) && (iVar5 < iVar12)) {
            iVar9 = (iVar12 - iVar5) + -1;
            if (0 < iVar9) {
              lVar7 = (longlong)iVar5 * 0x10 + *plVar1;
                    // WARNING: Subroutine does not return
              memmove(lVar7,lVar7 + 0x10,(longlong)iVar9 << 4);
            }
            uStack0000000000000030 = 0;
            *(int *)(unaff_R15 + 0x90) = iVar12 + -1;
            uStack0000000000000032 = 1;
            iVar5 = FUN_1807d3460(plVar10,&stack0x00000038,(longlong)&stack0x00000030 + 2,
                                  &stack0x00000030);
            if (iVar5 == 0) {
                    // WARNING: Subroutine does not return
              memset(unaff_RBP + 0xd0,0,0x100);
            }
          }
        }
      }
    }
  }
LAB_1807d3db1:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807d3dfa(void)
void FUN_1807d3dfa(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1d0) ^ (ulonglong)&stack0x00000000);
}



uint64_t FUN_1807d3e20(longlong *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (int)param_1[1] + 1;
  uVar5 = (int)*(uint *)((longlong)param_1 + 0xc) >> 0x1f;
  iVar1 = (*(uint *)((longlong)param_1 + 0xc) ^ uVar5) - uVar5;
  if (iVar1 < iVar4) {
    iVar1 = (int)((float)iVar1 * 1.5);
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    if (iVar4 < 4) {
      iVar4 = 4;
    }
    uVar2 = FUN_180748010(param_1,iVar4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  uVar2 = param_2[1];
  puVar3 = (uint64_t *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  *puVar3 = *param_2;
  puVar3[1] = uVar2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 0;
}



uint64_t FUN_1807d3ea0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  
  if ((byte)(*(char *)(param_2 + 10) - 5U) < 2) {
    cVar1 = *(char *)(param_2 + 9);
    if (cVar1 == '\x01') {
      iVar2 = func_0x00018076b630(param_2 + 0xc,&unknown_var_584_ptr);
      if (iVar2 == 0) {
        *(int32_t *)(param_1 + 0x50) = 1;
      }
      else {
        uVar3 = func_0x00018076b630(param_2 + 0xc,&unknown_var_600_ptr);
        if ((int)uVar3 == 0) {
          *(int32_t *)(param_1 + 0x50) = 0;
          return uVar3;
        }
      }
    }
    else {
      if (cVar1 == '\x02') {
        FUN_180740f10(*(uint64_t *)(param_2 + 0xc),*(char *)(param_2 + 0x14) != '\0');
        return 0;
      }
      if (cVar1 == '\x03') {
        FUN_180740ff0(*(uint64_t *)(param_2 + 0xc),*(char *)(param_2 + 0x14) != '\0');
        return 0;
      }
    }
  }
  return 0;
}



uint64_t FUN_1807d3ebe(uint64_t param_1,longlong param_2)

{
  int iVar1;
  uint64_t uVar2;
  longlong unaff_RBX;
  
  iVar1 = func_0x00018076b630(param_2 + 0xc,&unknown_var_584_ptr);
  if (iVar1 == 0) {
    *(int32_t *)(unaff_RBX + 0x50) = 1;
  }
  else {
    uVar2 = func_0x00018076b630(param_2 + 0xc,&unknown_var_600_ptr);
    if ((int)uVar2 == 0) {
      *(int32_t *)(unaff_RBX + 0x50) = 0;
      return uVar2;
    }
  }
  return 0;
}



uint64_t FUN_1807d3ee6(void)

{
  return 0;
}



uint64_t FUN_1807d3eee(void)

{
  uint64_t uVar1;
  longlong unaff_RBX;
  
  uVar1 = func_0x00018076b630();
  if ((int)uVar1 == 0) {
    *(int32_t *)(unaff_RBX + 0x50) = 0;
    return uVar1;
  }
  return 0;
}



uint64_t FUN_1807d3f0f(uint64_t param_1,longlong param_2,longlong param_3)

{
  char in_AL;
  
  if (in_AL == '\x02') {
    FUN_180740f10(*(uint64_t *)(param_3 + 0xc),*(char *)(param_2 + 0x14) != '\0');
    return 0;
  }
  if (in_AL == '\x03') {
    FUN_180740ff0(*(uint64_t *)(param_3 + 0xc),*(char *)(param_2 + 0x14) != '\0');
    return 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d3f50(longlong *param_1,int param_2)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar7 = (int32_t *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x10 - 1U < 0x3fffffff) {
      puVar7 = (int32_t *)
               FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x10,&unknown_var_8432_ptr,
                             0xf4,0,0,1);
      if (puVar7 != (int32_t *)0x0) {
        iVar2 = (int)param_1[1];
        lVar8 = (longlong)iVar2;
        if ((iVar2 != 0) && (lVar3 = *param_1, 0 < iVar2)) {
          puVar9 = puVar7;
          do {
            puVar1 = (int32_t *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 4;
          } while (lVar8 != 0);
        }
        goto LAB_1807d3ff3;
      }
    }
    return 0x26;
  }
LAB_1807d3ff3:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&unknown_var_8432_ptr,0x100,1);
  }
  *param_1 = (longlong)puVar7;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d3f74(uint64_t param_1,int param_2)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  longlong lVar8;
  int32_t *puVar9;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  puVar7 = (int32_t *)0x0;
  if (unaff_EDI == 0) {
LAB_1807d3ff3:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&unknown_var_8432_ptr,0x100,1);
    }
    *unaff_RBX = (longlong)puVar7;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x10 - 1U < 0x3fffffff) {
    puVar7 = (int32_t *)
             FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x10,&unknown_var_8432_ptr,
                           0xf4,0);
    if (puVar7 != (int32_t *)0x0) {
      iVar2 = (int)unaff_RBX[1];
      lVar8 = (longlong)iVar2;
      if ((iVar2 != 0) && (lVar3 = *unaff_RBX, 0 < iVar2)) {
        puVar9 = puVar7;
        do {
          puVar1 = (int32_t *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *puVar9 = *puVar1;
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 4;
        } while (lVar8 != 0);
      }
      goto LAB_1807d3ff3;
    }
  }
  return 0x26;
}



uint64_t FUN_1807d403e(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d4060(longlong param_1)
void FUN_1807d4060(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_180744cc0(param_1 + 0x60);
  if (iVar1 == 0) {
    iVar1 = FUN_1807d3080(param_1 + 0x70);
    if (iVar1 == 0) {
      *(int32_t *)(param_1 + 0x80) = 0xffffffff;
      *(int32_t *)(param_1 + 0x84) = 0;
    }
  }
  FUN_1807d3160(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x30),
                  &unknown_var_448_ptr,0x3f,1);
  }
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1,&unknown_var_448_ptr,0x40,1);
}



uint64_t * FUN_1807d4110(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_9984_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d4140(longlong *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  puVar2 = (uint64_t *)
           FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),0x30,&unknown_var_736_ptr,0x10,0,0,1);
  if (puVar2 != (uint64_t *)0x0) {
    puVar2[3] = 0;
    puVar1 = puVar2 + 1;
    puVar2[2] = puVar1;
    *puVar1 = puVar1;
    *puVar2 = &unknown_var_616_ptr;
    puVar2[4] = param_1;
    puVar2[5] = param_2;
                    // WARNING: Could not recover jumptable at 0x0001807d41c3. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar3 = (**(code **)(*param_1 + 8))(param_1,puVar2);
    return uVar3;
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d41e0(uint64_t *param_1,uint64_t *param_2)
void FUN_1807d41e0(uint64_t *param_1,uint64_t *param_2)

{
  int8_t uVar1;
  int iVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  int32_t uStack_a4;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t auStack_90 [2];
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int32_t auStack_38 [2];
  int32_t uStack_30;
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_88 = 0x48;
  uVar1 = (**(code **)*param_1)();
  uStack_80._0_3_ = (uint3)(ushort)uStack_80;
  uStack_80 = CONCAT71(uStack_80._1_7_,uVar1);
  FUN_180738630(&uStack_48,(longlong)&uStack_48 + 4,0);
  FUN_180746180(param_1[5],auStack_38);
  uStack_80 = CONCAT44(auStack_38[0],(int32_t)uStack_80);
  uStack_70 = CONCAT44(uStack_70._4_4_,uStack_30);
  uStack_98 = 0;
  func_0x000180786170(*(uint64_t *)(*(longlong *)(param_1[5] + 0x6b8) + 0x40),&uStack_98);
  uStack_94 = 0;
  func_0x000180786190(*(uint64_t *)(*(longlong *)(param_1[5] + 0x6b8) + 0x40),&uStack_94);
  auStack_90[0] = 0;
  func_0x000180786170(*(uint64_t *)(*(longlong *)(param_1[5] + 0x6b0) + 0x40),auStack_90);
  uStack_70 = CONCAT26((int16_t)uStack_94,CONCAT24((int16_t)uStack_98,(int32_t)uStack_70));
  uStack_68._0_4_ = CONCAT22(*(int16_t *)(param_1[5] + 0x1e0),(int16_t)auStack_90[0]);
  uStack_60 = uStack_60 & 0xffffffff;
  uStack_a0 = 0;
  iVar2 = func_0x000180742ca0(param_1[5],3,&uStack_a0);
  if (iVar2 == 0) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    iVar2 = func_0x0001807706b0(uStack_a0,&uStack_a8,&uStack_a4);
    if (iVar2 == 0) {
      uStack_60 = CONCAT26((int16_t)uStack_a4,
                           CONCAT24((int16_t)uStack_a8,(int32_t)uStack_60));
    }
  }
  uStack_68 = uStack_68 & 0xffffffff;
  uStack_a0 = 0;
  iVar2 = func_0x000180742ca0(param_1[5],2,&uStack_a0);
  if (iVar2 == 0) {
    uStack_a4 = 0;
    uStack_a8 = 0;
    iVar2 = func_0x0001807706b0(uStack_a0,&uStack_a4,&uStack_a8);
    if (iVar2 == 0) {
      uStack_68 = CONCAT26((int16_t)uStack_a8,
                           CONCAT24((int16_t)uStack_a4,(int32_t)uStack_68));
    }
  }
  uStack_60 = uStack_60 & 0xffffffff00000000;
  uStack_a0 = 0;
  iVar2 = func_0x000180742ca0(param_1[5],7,&uStack_a0);
  if (iVar2 == 0) {
    uStack_a4 = 0;
    uStack_a8 = 0;
    iVar2 = func_0x0001807706b0(uStack_a0,&uStack_a4,&uStack_a8);
    if (iVar2 == 0) {
      uStack_60._0_4_ = CONCAT22((int16_t)uStack_a8,(int16_t)uStack_a4);
    }
  }
  uStack_58 = uStack_58 & 0xffffffff;
  uStack_a0 = 0;
  iVar2 = func_0x000180742ca0(param_1[5],4,&uStack_a0);
  if (iVar2 == 0) {
    uStack_a4 = 0;
    uStack_a8 = 0;
    iVar2 = func_0x0001807706b0(uStack_a0,&uStack_a4,&uStack_a8);
    if (iVar2 == 0) {
      uStack_58 = (ulonglong)CONCAT22((int16_t)uStack_a8,(int16_t)uStack_a4) << 0x20;
    }
  }
  uStack_58 = uStack_58 & 0xffffffff00000000;
  uStack_a0 = 0;
  iVar2 = func_0x000180742ca0(param_1[5],5,&uStack_a0);
  if (iVar2 == 0) {
    uStack_a4 = 0;
    uStack_a8 = 0;
    iVar2 = func_0x0001807706b0(uStack_a0,&uStack_a4,&uStack_a8);
    if (iVar2 == 0) {
      uStack_58._0_4_ = CONCAT22((int16_t)uStack_a8,(int16_t)uStack_a4);
    }
  }
  uStack_50 = uStack_50 & 0xffffffff00000000;
  uStack_a0 = 0;
  iVar2 = func_0x000180742ca0(param_1[5],6,&uStack_a0);
  if (iVar2 == 0) {
    uStack_a4 = 0;
    uStack_a8 = 0;
    iVar2 = func_0x0001807706b0(uStack_a0,&uStack_a4,&uStack_a8);
    if (iVar2 == 0) {
      uStack_50._0_4_ = CONCAT22((int16_t)uStack_a8,(int16_t)uStack_a4);
      uStack_50 = (ulonglong)(uint)uStack_50;
    }
  }
  uStack_50 = uStack_50 & 0xffffffff;
  uStack_a0 = 0;
  iVar2 = func_0x000180742ca0(param_1[5],0,&uStack_a0);
  if (iVar2 == 0) {
    uStack_a4 = 0;
    uStack_a8 = 0;
    iVar2 = func_0x0001807706b0(uStack_a0,&uStack_a4,&uStack_a8);
    if (iVar2 == 0) {
      uStack_50 = CONCAT26((int16_t)uStack_a8,CONCAT24((int16_t)uStack_a4,(uint)uStack_50));
    }
  }
  if (*(int *)(param_2 + 1) < 1) {
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
    (*(code *)**(uint64_t **)*param_2)((uint64_t *)*param_2,&uStack_88,0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d4550(uint64_t param_1)
void FUN_1807d4550(uint64_t param_1)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1,&unknown_var_736_ptr,0x1f,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807d4590(longlong param_1,int param_2,int param_3,uint param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if ((int)param_4 < 2) {
    uVar2 = (uint)(param_3 != 0);
  }
  if (param_2 != 0) {
    lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_2 * 4,&unknown_var_864_ptr,0x1ee,0
                          ,0,1);
    *(longlong *)(param_1 + 0xa0) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(int *)(param_1 + 0x9c) = param_2;
  }
  if (param_3 != 0) {
    lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_3 * 4,&unknown_var_864_ptr,0x1f6,0
                          ,0,1);
    *(longlong *)(param_1 + 0xb0) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_3 * 4,&unknown_var_864_ptr,0x1f9,0
                          ,0,1);
    *(longlong *)(param_1 + 0xb8) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(int *)(param_1 + 0xa8) = param_3;
  }
  if (param_4 != 0) {
    lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_4 * 0x14,&unknown_var_864_ptr,
                          0x201,0,0,1);
    *(longlong *)(param_1 + 8) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(uint *)(param_1 + 4) = param_4;
  }
  if (param_5 != 0) {
    lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_5 * 0x14,&unknown_var_864_ptr,
                          0x209,0,0,1);
    *(longlong *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(int *)(param_1 + 0x10) = param_5;
  }
  if (uVar2 != 0) {
    lVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar2 << 5,&unknown_var_864_ptr,0x211,0,
                          0,1);
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    *(uint *)(param_1 + 0x20) = uVar2;
  }
  return 0;
}



uint64_t FUN_1807d47c0(int param_1,uint param_2,int param_3,int32_t *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int32_t *puVar3;
  
  if (0 < (int)param_2) {
    uVar2 = (ulonglong)param_2;
    do {
      lVar1 = (longlong)param_1;
      puVar3 = param_4;
      if (0 < (longlong)param_1) {
        for (; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
      }
      param_4 = param_4 + param_3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}



uint64_t FUN_1807d47d4(uint64_t param_1,longlong param_2,longlong param_3,int32_t *param_4)

{
  longlong lVar1;
  int32_t *puVar2;
  longlong in_R10;
  
  do {
    lVar1 = in_R10;
    puVar2 = param_4;
    if (0 < in_R10) {
      for (; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
    }
    param_4 = (int32_t *)((longlong)param_4 + param_3);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return 0;
}



uint64_t FUN_1807d47f4(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807d4800(uint64_t *param_1)
void FUN_1807d4800(uint64_t *param_1)

{
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[5],&unknown_var_864_ptr,0x366,1);
  }
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[1],&unknown_var_864_ptr,0x367,1);
  }
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[3],&unknown_var_864_ptr,0x368,1);
  }
  if (param_1[0x14] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[0x14],&unknown_var_864_ptr,0x369,1);
  }
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[0x16],&unknown_var_864_ptr,0x36a,1);
  }
  if (param_1[0x17] != 0) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1[0x17],&unknown_var_864_ptr,0x36b,1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x13) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 6,0,0x58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




